// Lean compiler output
// Module: Init.Data.String.Defs
// Imports: public import Init.Data.String.PosRaw import Init.Data.ByteArray.Lemmas import Init.Omega
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
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
LEAN_EXPORT lean_object* l_String_fromUTF8___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_fromUTF8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_toUTF8(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_append___boxed(lean_object*, lean_object*);
static const lean_closure_object l_instAppendString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_append___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instAppendString___closed__0 = (const lean_object*)&l_instAppendString___closed__0_value;
LEAN_EXPORT const lean_object* l_instAppendString = (const lean_object*)&l_instAppendString___closed__0_value;
lean_object* lean_string_mark_linear(lean_object*);
LEAN_EXPORT lean_object* l_String_markLinear___boxed(lean_object*);
lean_object* lean_string_propagate_mark(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_propagateMark___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_rawStartPos___redArg();
LEAN_EXPORT lean_object* l_String_rawStartPos___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_rawStartPos(lean_object*);
LEAN_EXPORT lean_object* l_String_rawStartPos___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_pushn___lam__0(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_String_pushn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_pushn(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_String_pushn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00String_Internal_pushnImpl_spec__0(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00String_Internal_pushnImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_string_pushn(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_String_Internal_pushnImpl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_String_isEmpty___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_string_isempty(lean_object*);
LEAN_EXPORT lean_object* l_String_Internal_isEmptyImpl___boxed(lean_object*);
static const lean_string_object l_String_join___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_String_join___closed__0 = (const lean_object*)&l_String_join___closed__0_value;
LEAN_EXPORT lean_object* l_String_join(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Defs_0__String_intercalate_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Defs_0__String_intercalate_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_intercalate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_intercalate___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_string_intercalate(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableEqPos_decEq___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableEqPos_decEq___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableEqPos_decEq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableEqPos_decEq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableEqPos___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableEqPos___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableEqPos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableEqPos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_startPos___redArg();
LEAN_EXPORT lean_object* l_String_startPos___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_startPos(lean_object*);
LEAN_EXPORT lean_object* l_String_startPos___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_instInhabitedPos___redArg();
LEAN_EXPORT lean_object* l_String_instInhabitedPos___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_instInhabitedPos(lean_object*);
LEAN_EXPORT lean_object* l_String_instInhabitedPos___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_endPos(lean_object*);
LEAN_EXPORT lean_object* l_String_endPos___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_instLEPos___redArg();
LEAN_EXPORT lean_object* l_String_instLEPos___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_instLEPos(lean_object*);
LEAN_EXPORT lean_object* l_String_instLEPos___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_instLTPos___redArg();
LEAN_EXPORT lean_object* l_String_instLTPos___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_instLTPos(lean_object*);
LEAN_EXPORT lean_object* l_String_instLTPos___boxed(lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableLePos___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableLePos___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableLePos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableLePos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableLtPos___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableLtPos___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableLtPos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableLtPos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instStringPosEqImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instStringPosEqImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instStringPosEqImpl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instStringPosEqImpl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instStringPosLeImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instStringPosLeImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instStringPosLeImpl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instStringPosLeImpl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instStringPosLtImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instStringPosLtImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instStringPosLtImpl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instStringPosLtImpl___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_instInhabitedSlice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_String_join___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_instInhabitedSlice___closed__0 = (const lean_object*)&l_String_instInhabitedSlice___closed__0_value;
LEAN_EXPORT const lean_object* l_String_instInhabitedSlice = (const lean_object*)&l_String_instInhabitedSlice___closed__0_value;
LEAN_EXPORT lean_object* l_String_toSlice(lean_object*);
static const lean_closure_object l_String_instCoeSlice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_toSlice, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_String_instCoeSlice___closed__0 = (const lean_object*)&l_String_instCoeSlice___closed__0_value;
LEAN_EXPORT const lean_object* l_String_instCoeSlice = (const lean_object*)&l_String_instCoeSlice___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_utf8ByteSize(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_utf8ByteSize___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_instHAddRawSlice___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instHAddRawSlice___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_String_instHAddRawSlice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_instHAddRawSlice___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_String_instHAddRawSlice___closed__0 = (const lean_object*)&l_String_instHAddRawSlice___closed__0_value;
LEAN_EXPORT const lean_object* l_String_instHAddRawSlice = (const lean_object*)&l_String_instHAddRawSlice___closed__0_value;
LEAN_EXPORT lean_object* l_String_instHAddSliceRaw___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instHAddSliceRaw___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_String_instHAddSliceRaw___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_instHAddSliceRaw___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_String_instHAddSliceRaw___closed__0 = (const lean_object*)&l_String_instHAddSliceRaw___closed__0_value;
LEAN_EXPORT const lean_object* l_String_instHAddSliceRaw = (const lean_object*)&l_String_instHAddSliceRaw___closed__0_value;
LEAN_EXPORT lean_object* l_String_instHSubRawSlice___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instHSubRawSlice___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_String_instHSubRawSlice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_instHSubRawSlice___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_String_instHSubRawSlice___closed__0 = (const lean_object*)&l_String_instHSubRawSlice___closed__0_value;
LEAN_EXPORT const lean_object* l_String_instHSubRawSlice = (const lean_object*)&l_String_instHSubRawSlice___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_rawEndPos(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_rawEndPos___boxed(lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_getUTF8Byte___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_getUTF8Byte___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_getUTF8Byte(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_getUTF8Byte___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_panic___at___00String_Slice_getUTF8Byte_x21_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_getUTF8Byte_x21_spec__0___boxed(lean_object*);
static const lean_string_object l_String_Slice_getUTF8Byte_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Init.Data.String.Defs"};
static const lean_object* l_String_Slice_getUTF8Byte_x21___closed__0 = (const lean_object*)&l_String_Slice_getUTF8Byte_x21___closed__0_value;
static const lean_string_object l_String_Slice_getUTF8Byte_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "String.Slice.getUTF8Byte!"};
static const lean_object* l_String_Slice_getUTF8Byte_x21___closed__1 = (const lean_object*)&l_String_Slice_getUTF8Byte_x21___closed__1_value;
static const lean_string_object l_String_Slice_getUTF8Byte_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "String slice access is out of bounds."};
static const lean_object* l_String_Slice_getUTF8Byte_x21___closed__2 = (const lean_object*)&l_String_Slice_getUTF8Byte_x21___closed__2_value;
static lean_once_cell_t l_String_Slice_getUTF8Byte_x21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_getUTF8Byte_x21___closed__3;
LEAN_EXPORT uint8_t l_String_Slice_getUTF8Byte_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_getUTF8Byte_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_instDecidableEqPos_decEq___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instDecidableEqPos_decEq___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_instDecidableEqPos_decEq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instDecidableEqPos_decEq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_instDecidableEqPos___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instDecidableEqPos___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_instDecidableEqPos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instDecidableEqPos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_startPos___redArg();
LEAN_EXPORT lean_object* l_String_Slice_startPos___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_startPos(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_startPos___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_instInhabitedPos__1___redArg();
LEAN_EXPORT lean_object* l_String_instInhabitedPos__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_instInhabitedPos__1(lean_object*);
LEAN_EXPORT lean_object* l_String_instInhabitedPos__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_endPos(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_endPos___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_instLEPos__1___redArg();
LEAN_EXPORT lean_object* l_String_instLEPos__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_instLEPos__1(lean_object*);
LEAN_EXPORT lean_object* l_String_instLEPos__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_instLTPos__1___redArg();
LEAN_EXPORT lean_object* l_String_instLTPos__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_instLTPos__1(lean_object*);
LEAN_EXPORT lean_object* l_String_instLTPos__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableLePos__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableLePos__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableLePos__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableLePos__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableLtPos__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableLtPos__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableLtPos__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableLtPos__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instSlicePosEqImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instSlicePosEqImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instSlicePosEqImpl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instSlicePosEqImpl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instSlicePosLeImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instSlicePosLeImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instSlicePosLeImpl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instSlicePosLeImpl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instSlicePosLtImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instSlicePosLtImpl___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UDecidable_instSlicePosLtImpl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_UDecidable_instSlicePosLtImpl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableIsAtEnd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableIsAtEnd___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_instDecidableIsAtEnd__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_instDecidableIsAtEnd__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_Pos_byte___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_byte___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_Pos_byte(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_byte___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_toSubstring(lean_object*);
LEAN_EXPORT lean_object* l_String_toSubstring_x27(lean_object*);
LEAN_EXPORT lean_object* l_String_startValidPos___redArg();
LEAN_EXPORT lean_object* l_String_startValidPos___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_startValidPos(lean_object*);
LEAN_EXPORT lean_object* l_String_startValidPos___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_endValidPos(lean_object*);
LEAN_EXPORT lean_object* l_String_endValidPos___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_bytes(lean_object*);
LEAN_EXPORT lean_object* l_String_lengthAssumingAscii(lean_object*);
LEAN_EXPORT lean_object* l_String_lengthAssumingAscii___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_fromUTF8___redArg(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_string_from_utf8_unchecked(v_a_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_String_fromUTF8(lean_object* v_a_3_, lean_object* v_h_4_){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_string_from_utf8_unchecked(v_a_3_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_String_toUTF8(lean_object* v_a_6_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_string_to_utf8(v_a_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_String_append___boxed(lean_object* v_s_10_, lean_object* v_t_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = lean_string_append(v_s_10_, v_t_11_);
lean_dec_ref(v_t_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_String_markLinear___boxed(lean_object* v_s_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = lean_string_mark_linear(v_s_16_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_String_propagateMark___boxed(lean_object* v_s_20_, lean_object* v_t_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = lean_string_propagate_mark(v_s_20_, v_t_21_);
lean_dec_ref(v_s_20_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_String_rawStartPos___redArg(){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_unsigned_to_nat(0u);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_String_rawStartPos___redArg___boxed(lean_object* v___dummy_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_String_rawStartPos___redArg();
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_String_rawStartPos(lean_object* v___s_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_unsigned_to_nat(0u);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_String_rawStartPos___boxed(lean_object* v___s_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_String_rawStartPos(v___s_29_);
lean_dec_ref(v___s_29_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_String_pushn___lam__0(uint32_t v_c_31_, lean_object* v_s_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_string_push(v_s_32_, v_c_31_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_String_pushn___lam__0___boxed(lean_object* v_c_34_, lean_object* v_s_35_){
_start:
{
uint32_t v_c_boxed_36_; lean_object* v_res_37_; 
v_c_boxed_36_ = lean_unbox_uint32(v_c_34_);
lean_dec(v_c_34_);
v_res_37_ = l_String_pushn___lam__0(v_c_boxed_36_, v_s_35_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_String_pushn(lean_object* v_s_38_, uint32_t v_c_39_, lean_object* v_n_40_){
_start:
{
lean_object* v___x_41_; lean_object* v___f_42_; lean_object* v___x_43_; 
v___x_41_ = lean_box_uint32(v_c_39_);
v___f_42_ = lean_alloc_closure((void*)(l_String_pushn___lam__0___boxed), 2, 1);
lean_closure_set(v___f_42_, 0, v___x_41_);
v___x_43_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop(lean_box(0), v___f_42_, v_n_40_, v_s_38_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_String_pushn___boxed(lean_object* v_s_44_, lean_object* v_c_45_, lean_object* v_n_46_){
_start:
{
uint32_t v_c_boxed_47_; lean_object* v_res_48_; 
v_c_boxed_47_ = lean_unbox_uint32(v_c_45_);
lean_dec(v_c_45_);
v_res_48_ = l_String_pushn(v_s_44_, v_c_boxed_47_, v_n_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00String_Internal_pushnImpl_spec__0(uint32_t v_c_49_, lean_object* v_x_50_, lean_object* v_x_51_){
_start:
{
lean_object* v_zero_52_; uint8_t v_isZero_53_; 
v_zero_52_ = lean_unsigned_to_nat(0u);
v_isZero_53_ = lean_nat_dec_eq(v_x_50_, v_zero_52_);
if (v_isZero_53_ == 1)
{
lean_dec(v_x_50_);
return v_x_51_;
}
else
{
lean_object* v_one_54_; lean_object* v_n_55_; lean_object* v___x_56_; 
v_one_54_ = lean_unsigned_to_nat(1u);
v_n_55_ = lean_nat_sub(v_x_50_, v_one_54_);
lean_dec(v_x_50_);
v___x_56_ = lean_string_push(v_x_51_, v_c_49_);
v_x_50_ = v_n_55_;
v_x_51_ = v___x_56_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00String_Internal_pushnImpl_spec__0___boxed(lean_object* v_c_58_, lean_object* v_x_59_, lean_object* v_x_60_){
_start:
{
uint32_t v_c_boxed_61_; lean_object* v_res_62_; 
v_c_boxed_61_ = lean_unbox_uint32(v_c_58_);
lean_dec(v_c_58_);
v_res_62_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00String_Internal_pushnImpl_spec__0(v_c_boxed_61_, v_x_59_, v_x_60_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* lean_string_pushn(lean_object* v_s_63_, uint32_t v_c_64_, lean_object* v_n_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00String_Internal_pushnImpl_spec__0(v_c_64_, v_n_65_, v_s_63_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_String_Internal_pushnImpl___boxed(lean_object* v_s_67_, lean_object* v_c_68_, lean_object* v_n_69_){
_start:
{
uint32_t v_c_boxed_70_; lean_object* v_res_71_; 
v_c_boxed_70_ = lean_unbox_uint32(v_c_68_);
lean_dec(v_c_68_);
v_res_71_ = lean_string_pushn(v_s_67_, v_c_boxed_70_, v_n_69_);
return v_res_71_;
}
}
LEAN_EXPORT uint8_t l_String_isEmpty(lean_object* v_s_72_){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_73_ = lean_string_utf8_byte_size(v_s_72_);
v___x_74_ = lean_unsigned_to_nat(0u);
v___x_75_ = lean_nat_dec_eq(v___x_73_, v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_String_isEmpty___boxed(lean_object* v_s_76_){
_start:
{
uint8_t v_res_77_; lean_object* v_r_78_; 
v_res_77_ = l_String_isEmpty(v_s_76_);
lean_dec_ref(v_s_76_);
v_r_78_ = lean_box(v_res_77_);
return v_r_78_;
}
}
LEAN_EXPORT uint8_t lean_string_isempty(lean_object* v_s_79_){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_80_ = lean_string_utf8_byte_size(v_s_79_);
lean_dec_ref(v_s_79_);
v___x_81_ = lean_unsigned_to_nat(0u);
v___x_82_ = lean_nat_dec_eq(v___x_80_, v___x_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_String_Internal_isEmptyImpl___boxed(lean_object* v_s_83_){
_start:
{
uint8_t v_res_84_; lean_object* v_r_85_; 
v_res_84_ = lean_string_isempty(v_s_83_);
v_r_85_ = lean_box(v_res_84_);
return v_r_85_;
}
}
LEAN_EXPORT lean_object* l_String_join(lean_object* v_l_87_){
_start:
{
lean_object* v___f_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___f_88_ = ((lean_object*)(l_instAppendString___closed__0));
v___x_89_ = ((lean_object*)(l_String_join___closed__0));
v___x_90_ = l_List_foldl___redArg(v___f_88_, v___x_89_, v_l_87_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Defs_0__String_intercalate_go(lean_object* v_acc_91_, lean_object* v_s_92_, lean_object* v_a_93_){
_start:
{
if (lean_obj_tag(v_a_93_) == 0)
{
return v_acc_91_;
}
else
{
lean_object* v_head_94_; lean_object* v_tail_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v_head_94_ = lean_ctor_get(v_a_93_, 0);
v_tail_95_ = lean_ctor_get(v_a_93_, 1);
v___x_96_ = lean_string_append(v_acc_91_, v_s_92_);
v___x_97_ = lean_string_append(v___x_96_, v_head_94_);
v_acc_91_ = v___x_97_;
v_a_93_ = v_tail_95_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Defs_0__String_intercalate_go___boxed(lean_object* v_acc_99_, lean_object* v_s_100_, lean_object* v_a_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l___private_Init_Data_String_Defs_0__String_intercalate_go(v_acc_99_, v_s_100_, v_a_101_);
lean_dec(v_a_101_);
lean_dec_ref(v_s_100_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_String_intercalate(lean_object* v_s_103_, lean_object* v_x_104_){
_start:
{
if (lean_obj_tag(v_x_104_) == 0)
{
lean_object* v___x_105_; 
v___x_105_ = ((lean_object*)(l_String_join___closed__0));
return v___x_105_;
}
else
{
lean_object* v_head_106_; lean_object* v_tail_107_; lean_object* v___x_108_; 
v_head_106_ = lean_ctor_get(v_x_104_, 0);
lean_inc(v_head_106_);
v_tail_107_ = lean_ctor_get(v_x_104_, 1);
lean_inc(v_tail_107_);
lean_dec_ref_known(v_x_104_, 2);
v___x_108_ = l___private_Init_Data_String_Defs_0__String_intercalate_go(v_head_106_, v_s_103_, v_tail_107_);
lean_dec(v_tail_107_);
return v___x_108_;
}
}
}
LEAN_EXPORT lean_object* l_String_intercalate___boxed(lean_object* v_s_109_, lean_object* v_x_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l_String_intercalate(v_s_109_, v_x_110_);
lean_dec_ref(v_s_109_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* lean_string_intercalate(lean_object* v_s_112_, lean_object* v_a_113_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_String_intercalate(v_s_112_, v_a_113_);
lean_dec_ref(v_s_112_);
return v___x_114_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableEqPos_decEq___redArg(lean_object* v_x_115_, lean_object* v_x_116_){
_start:
{
uint8_t v_decide_117_; 
v_decide_117_ = lean_nat_dec_eq(v_x_115_, v_x_116_);
return v_decide_117_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableEqPos_decEq___redArg___boxed(lean_object* v_x_118_, lean_object* v_x_119_){
_start:
{
uint8_t v_res_120_; lean_object* v_r_121_; 
v_res_120_ = l_String_instDecidableEqPos_decEq___redArg(v_x_118_, v_x_119_);
lean_dec(v_x_119_);
lean_dec(v_x_118_);
v_r_121_ = lean_box(v_res_120_);
return v_r_121_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableEqPos_decEq(lean_object* v_s_122_, lean_object* v_x_123_, lean_object* v_x_124_){
_start:
{
uint8_t v_decide_125_; 
v_decide_125_ = lean_nat_dec_eq(v_x_123_, v_x_124_);
return v_decide_125_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableEqPos_decEq___boxed(lean_object* v_s_126_, lean_object* v_x_127_, lean_object* v_x_128_){
_start:
{
uint8_t v_res_129_; lean_object* v_r_130_; 
v_res_129_ = l_String_instDecidableEqPos_decEq(v_s_126_, v_x_127_, v_x_128_);
lean_dec(v_x_128_);
lean_dec(v_x_127_);
lean_dec_ref(v_s_126_);
v_r_130_ = lean_box(v_res_129_);
return v_r_130_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableEqPos___redArg(lean_object* v_x_131_, lean_object* v_x_132_){
_start:
{
uint8_t v_decide_133_; 
v_decide_133_ = lean_nat_dec_eq(v_x_131_, v_x_132_);
return v_decide_133_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableEqPos___redArg___boxed(lean_object* v_x_134_, lean_object* v_x_135_){
_start:
{
uint8_t v_res_136_; lean_object* v_r_137_; 
v_res_136_ = l_String_instDecidableEqPos___redArg(v_x_134_, v_x_135_);
lean_dec(v_x_135_);
lean_dec(v_x_134_);
v_r_137_ = lean_box(v_res_136_);
return v_r_137_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableEqPos(lean_object* v_s_138_, lean_object* v_x_139_, lean_object* v_x_140_){
_start:
{
uint8_t v_decide_141_; 
v_decide_141_ = lean_nat_dec_eq(v_x_139_, v_x_140_);
return v_decide_141_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableEqPos___boxed(lean_object* v_s_142_, lean_object* v_x_143_, lean_object* v_x_144_){
_start:
{
uint8_t v_res_145_; lean_object* v_r_146_; 
v_res_145_ = l_String_instDecidableEqPos(v_s_142_, v_x_143_, v_x_144_);
lean_dec(v_x_144_);
lean_dec(v_x_143_);
lean_dec_ref(v_s_142_);
v_r_146_ = lean_box(v_res_145_);
return v_r_146_;
}
}
LEAN_EXPORT lean_object* l_String_startPos___redArg(){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_unsigned_to_nat(0u);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_String_startPos___redArg___boxed(lean_object* v___dummy_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l_String_startPos___redArg();
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l_String_startPos(lean_object* v_s_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lean_unsigned_to_nat(0u);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_String_startPos___boxed(lean_object* v_s_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_String_startPos(v_s_153_);
lean_dec_ref(v_s_153_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_String_instInhabitedPos___redArg(){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lean_unsigned_to_nat(0u);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_String_instInhabitedPos___redArg___boxed(lean_object* v___dummy_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_String_instInhabitedPos___redArg();
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_String_instInhabitedPos(lean_object* v_s_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = lean_unsigned_to_nat(0u);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_String_instInhabitedPos___boxed(lean_object* v_s_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_String_instInhabitedPos(v_s_161_);
lean_dec_ref(v_s_161_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_String_endPos(lean_object* v_s_163_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lean_string_utf8_byte_size(v_s_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_String_endPos___boxed(lean_object* v_s_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_String_endPos(v_s_165_);
lean_dec_ref(v_s_165_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l_String_instLEPos___redArg(){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lean_box(0);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_String_instLEPos___redArg___boxed(lean_object* v___dummy_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_String_instLEPos___redArg();
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_String_instLEPos(lean_object* v_s_171_){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = lean_box(0);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_String_instLEPos___boxed(lean_object* v_s_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_String_instLEPos(v_s_173_);
lean_dec_ref(v_s_173_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_String_instLTPos___redArg(){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lean_box(0);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_String_instLTPos___redArg___boxed(lean_object* v___dummy_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_String_instLTPos___redArg();
return v_res_178_;
}
}
LEAN_EXPORT lean_object* l_String_instLTPos(lean_object* v_s_179_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = lean_box(0);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_String_instLTPos___boxed(lean_object* v_s_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_String_instLTPos(v_s_181_);
lean_dec_ref(v_s_181_);
return v_res_182_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableLePos___redArg(lean_object* v_l_183_, lean_object* v_r_184_){
_start:
{
uint8_t v___x_185_; 
v___x_185_ = lean_nat_dec_le(v_l_183_, v_r_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableLePos___redArg___boxed(lean_object* v_l_186_, lean_object* v_r_187_){
_start:
{
uint8_t v_res_188_; lean_object* v_r_189_; 
v_res_188_ = l_String_instDecidableLePos___redArg(v_l_186_, v_r_187_);
lean_dec(v_r_187_);
lean_dec(v_l_186_);
v_r_189_ = lean_box(v_res_188_);
return v_r_189_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableLePos(lean_object* v_s_190_, lean_object* v_l_191_, lean_object* v_r_192_){
_start:
{
uint8_t v___x_193_; 
v___x_193_ = lean_nat_dec_le(v_l_191_, v_r_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableLePos___boxed(lean_object* v_s_194_, lean_object* v_l_195_, lean_object* v_r_196_){
_start:
{
uint8_t v_res_197_; lean_object* v_r_198_; 
v_res_197_ = l_String_instDecidableLePos(v_s_194_, v_l_195_, v_r_196_);
lean_dec(v_r_196_);
lean_dec(v_l_195_);
lean_dec_ref(v_s_194_);
v_r_198_ = lean_box(v_res_197_);
return v_r_198_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableLtPos___redArg(lean_object* v_l_199_, lean_object* v_r_200_){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; uint8_t v___x_203_; 
v___x_201_ = lean_unsigned_to_nat(1u);
v___x_202_ = lean_nat_add(v_l_199_, v___x_201_);
v___x_203_ = lean_nat_dec_le(v___x_202_, v_r_200_);
lean_dec(v___x_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableLtPos___redArg___boxed(lean_object* v_l_204_, lean_object* v_r_205_){
_start:
{
uint8_t v_res_206_; lean_object* v_r_207_; 
v_res_206_ = l_String_instDecidableLtPos___redArg(v_l_204_, v_r_205_);
lean_dec(v_r_205_);
lean_dec(v_l_204_);
v_r_207_ = lean_box(v_res_206_);
return v_r_207_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableLtPos(lean_object* v_s_208_, lean_object* v_l_209_, lean_object* v_r_210_){
_start:
{
uint8_t v___x_211_; 
v___x_211_ = l_String_instDecidableLtPos___redArg(v_l_209_, v_r_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableLtPos___boxed(lean_object* v_s_212_, lean_object* v_l_213_, lean_object* v_r_214_){
_start:
{
uint8_t v_res_215_; lean_object* v_r_216_; 
v_res_215_ = l_String_instDecidableLtPos(v_s_212_, v_l_213_, v_r_214_);
lean_dec(v_r_214_);
lean_dec(v_l_213_);
lean_dec_ref(v_s_212_);
v_r_216_ = lean_box(v_res_215_);
return v_r_216_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instStringPosEqImpl___redArg(lean_object* v_l_217_, lean_object* v_r_218_){
_start:
{
uint8_t v___x_219_; 
v___x_219_ = lean_nat_dec_eq(v_l_217_, v_r_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instStringPosEqImpl___redArg___boxed(lean_object* v_l_220_, lean_object* v_r_221_){
_start:
{
uint8_t v_res_222_; lean_object* v_r_223_; 
v_res_222_ = l_UDecidable_instStringPosEqImpl___redArg(v_l_220_, v_r_221_);
lean_dec(v_r_221_);
lean_dec(v_l_220_);
v_r_223_ = lean_box(v_res_222_);
return v_r_223_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instStringPosEqImpl(lean_object* v_s_224_, lean_object* v_l_225_, lean_object* v_r_226_){
_start:
{
uint8_t v___x_227_; 
v___x_227_ = lean_nat_dec_eq(v_l_225_, v_r_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instStringPosEqImpl___boxed(lean_object* v_s_228_, lean_object* v_l_229_, lean_object* v_r_230_){
_start:
{
uint8_t v_res_231_; lean_object* v_r_232_; 
v_res_231_ = l_UDecidable_instStringPosEqImpl(v_s_228_, v_l_229_, v_r_230_);
lean_dec(v_r_230_);
lean_dec(v_l_229_);
lean_dec_ref(v_s_228_);
v_r_232_ = lean_box(v_res_231_);
return v_r_232_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instStringPosLeImpl___redArg(lean_object* v_l_233_, lean_object* v_r_234_){
_start:
{
uint8_t v___x_235_; 
v___x_235_ = lean_nat_dec_le(v_l_233_, v_r_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instStringPosLeImpl___redArg___boxed(lean_object* v_l_236_, lean_object* v_r_237_){
_start:
{
uint8_t v_res_238_; lean_object* v_r_239_; 
v_res_238_ = l_UDecidable_instStringPosLeImpl___redArg(v_l_236_, v_r_237_);
lean_dec(v_r_237_);
lean_dec(v_l_236_);
v_r_239_ = lean_box(v_res_238_);
return v_r_239_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instStringPosLeImpl(lean_object* v_s_240_, lean_object* v_l_241_, lean_object* v_r_242_){
_start:
{
uint8_t v___x_243_; 
v___x_243_ = lean_nat_dec_le(v_l_241_, v_r_242_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instStringPosLeImpl___boxed(lean_object* v_s_244_, lean_object* v_l_245_, lean_object* v_r_246_){
_start:
{
uint8_t v_res_247_; lean_object* v_r_248_; 
v_res_247_ = l_UDecidable_instStringPosLeImpl(v_s_244_, v_l_245_, v_r_246_);
lean_dec(v_r_246_);
lean_dec(v_l_245_);
lean_dec_ref(v_s_244_);
v_r_248_ = lean_box(v_res_247_);
return v_r_248_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instStringPosLtImpl___redArg(lean_object* v_l_249_, lean_object* v_r_250_){
_start:
{
uint8_t v___x_251_; 
v___x_251_ = lean_nat_dec_lt(v_l_249_, v_r_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instStringPosLtImpl___redArg___boxed(lean_object* v_l_252_, lean_object* v_r_253_){
_start:
{
uint8_t v_res_254_; lean_object* v_r_255_; 
v_res_254_ = l_UDecidable_instStringPosLtImpl___redArg(v_l_252_, v_r_253_);
lean_dec(v_r_253_);
lean_dec(v_l_252_);
v_r_255_ = lean_box(v_res_254_);
return v_r_255_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instStringPosLtImpl(lean_object* v_s_256_, lean_object* v_l_257_, lean_object* v_r_258_){
_start:
{
uint8_t v___x_259_; 
v___x_259_ = lean_nat_dec_lt(v_l_257_, v_r_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instStringPosLtImpl___boxed(lean_object* v_s_260_, lean_object* v_l_261_, lean_object* v_r_262_){
_start:
{
uint8_t v_res_263_; lean_object* v_r_264_; 
v_res_263_ = l_UDecidable_instStringPosLtImpl(v_s_260_, v_l_261_, v_r_262_);
lean_dec(v_r_262_);
lean_dec(v_l_261_);
lean_dec_ref(v_s_260_);
v_r_264_ = lean_box(v_res_263_);
return v_r_264_;
}
}
LEAN_EXPORT lean_object* l_String_toSlice(lean_object* v_s_269_){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_270_ = lean_unsigned_to_nat(0u);
v___x_271_ = lean_string_utf8_byte_size(v_s_269_);
v___x_272_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_272_, 0, v_s_269_);
lean_ctor_set(v___x_272_, 1, v___x_270_);
lean_ctor_set(v___x_272_, 2, v___x_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_utf8ByteSize(lean_object* v_s_275_){
_start:
{
lean_object* v_startInclusive_276_; lean_object* v_endExclusive_277_; lean_object* v___x_278_; 
v_startInclusive_276_ = lean_ctor_get(v_s_275_, 1);
v_endExclusive_277_ = lean_ctor_get(v_s_275_, 2);
v___x_278_ = lean_nat_sub(v_endExclusive_277_, v_startInclusive_276_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_utf8ByteSize___boxed(lean_object* v_s_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_String_Slice_utf8ByteSize(v_s_279_);
lean_dec_ref(v_s_279_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_String_instHAddRawSlice___lam__0(lean_object* v_p_281_, lean_object* v_s_282_){
_start:
{
lean_object* v_startInclusive_283_; lean_object* v_endExclusive_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v_startInclusive_283_ = lean_ctor_get(v_s_282_, 1);
v_endExclusive_284_ = lean_ctor_get(v_s_282_, 2);
v___x_285_ = lean_nat_sub(v_endExclusive_284_, v_startInclusive_283_);
v___x_286_ = lean_nat_add(v_p_281_, v___x_285_);
lean_dec(v___x_285_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_String_instHAddRawSlice___lam__0___boxed(lean_object* v_p_287_, lean_object* v_s_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_String_instHAddRawSlice___lam__0(v_p_287_, v_s_288_);
lean_dec_ref(v_s_288_);
lean_dec(v_p_287_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_String_instHAddSliceRaw___lam__0(lean_object* v_s_292_, lean_object* v_p_293_){
_start:
{
lean_object* v_startInclusive_294_; lean_object* v_endExclusive_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v_startInclusive_294_ = lean_ctor_get(v_s_292_, 1);
v_endExclusive_295_ = lean_ctor_get(v_s_292_, 2);
v___x_296_ = lean_nat_sub(v_endExclusive_295_, v_startInclusive_294_);
v___x_297_ = lean_nat_add(v___x_296_, v_p_293_);
lean_dec(v___x_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_String_instHAddSliceRaw___lam__0___boxed(lean_object* v_s_298_, lean_object* v_p_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_String_instHAddSliceRaw___lam__0(v_s_298_, v_p_299_);
lean_dec(v_p_299_);
lean_dec_ref(v_s_298_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_String_instHSubRawSlice___lam__0(lean_object* v_p_303_, lean_object* v_s_304_){
_start:
{
lean_object* v_startInclusive_305_; lean_object* v_endExclusive_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v_startInclusive_305_ = lean_ctor_get(v_s_304_, 1);
v_endExclusive_306_ = lean_ctor_get(v_s_304_, 2);
v___x_307_ = lean_nat_sub(v_endExclusive_306_, v_startInclusive_305_);
v___x_308_ = lean_nat_sub(v_p_303_, v___x_307_);
lean_dec(v___x_307_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_String_instHSubRawSlice___lam__0___boxed(lean_object* v_p_309_, lean_object* v_s_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_String_instHSubRawSlice___lam__0(v_p_309_, v_s_310_);
lean_dec_ref(v_s_310_);
lean_dec(v_p_309_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_rawEndPos(lean_object* v_s_314_){
_start:
{
lean_object* v_startInclusive_315_; lean_object* v_endExclusive_316_; lean_object* v___x_317_; 
v_startInclusive_315_ = lean_ctor_get(v_s_314_, 1);
v_endExclusive_316_ = lean_ctor_get(v_s_314_, 2);
v___x_317_ = lean_nat_sub(v_endExclusive_316_, v_startInclusive_315_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_rawEndPos___boxed(lean_object* v_s_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_String_Slice_rawEndPos(v_s_318_);
lean_dec_ref(v_s_318_);
return v_res_319_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_getUTF8Byte___redArg(lean_object* v_s_320_, lean_object* v_p_321_){
_start:
{
lean_object* v_str_322_; lean_object* v_startInclusive_323_; lean_object* v___x_324_; uint8_t v___x_325_; 
v_str_322_ = lean_ctor_get(v_s_320_, 0);
v_startInclusive_323_ = lean_ctor_get(v_s_320_, 1);
v___x_324_ = lean_nat_add(v_startInclusive_323_, v_p_321_);
v___x_325_ = lean_string_get_byte_fast(v_str_322_, v___x_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_getUTF8Byte___redArg___boxed(lean_object* v_s_326_, lean_object* v_p_327_){
_start:
{
uint8_t v_res_328_; lean_object* v_r_329_; 
v_res_328_ = l_String_Slice_getUTF8Byte___redArg(v_s_326_, v_p_327_);
lean_dec(v_p_327_);
lean_dec_ref(v_s_326_);
v_r_329_ = lean_box(v_res_328_);
return v_r_329_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_getUTF8Byte(lean_object* v_s_330_, lean_object* v_p_331_, lean_object* v_h_332_){
_start:
{
lean_object* v_str_333_; lean_object* v_startInclusive_334_; lean_object* v___x_335_; uint8_t v___x_336_; 
v_str_333_ = lean_ctor_get(v_s_330_, 0);
v_startInclusive_334_ = lean_ctor_get(v_s_330_, 1);
v___x_335_ = lean_nat_add(v_startInclusive_334_, v_p_331_);
v___x_336_ = lean_string_get_byte_fast(v_str_333_, v___x_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_getUTF8Byte___boxed(lean_object* v_s_337_, lean_object* v_p_338_, lean_object* v_h_339_){
_start:
{
uint8_t v_res_340_; lean_object* v_r_341_; 
v_res_340_ = l_String_Slice_getUTF8Byte(v_s_337_, v_p_338_, v_h_339_);
lean_dec(v_p_338_);
lean_dec_ref(v_s_337_);
v_r_341_ = lean_box(v_res_340_);
return v_r_341_;
}
}
LEAN_EXPORT uint8_t l_panic___at___00String_Slice_getUTF8Byte_x21_spec__0(lean_object* v_msg_342_){
_start:
{
uint8_t v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; uint8_t v___x_346_; 
v___x_343_ = 0;
v___x_344_ = lean_box(v___x_343_);
v___x_345_ = lean_panic_fn_borrowed(v___x_344_, v_msg_342_);
lean_dec(v___x_344_);
v___x_346_ = lean_unbox(v___x_345_);
lean_dec(v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_getUTF8Byte_x21_spec__0___boxed(lean_object* v_msg_347_){
_start:
{
uint8_t v_res_348_; lean_object* v_r_349_; 
v_res_348_ = l_panic___at___00String_Slice_getUTF8Byte_x21_spec__0(v_msg_347_);
v_r_349_ = lean_box(v_res_348_);
return v_r_349_;
}
}
static lean_object* _init_l_String_Slice_getUTF8Byte_x21___closed__3(void){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_353_ = ((lean_object*)(l_String_Slice_getUTF8Byte_x21___closed__2));
v___x_354_ = lean_unsigned_to_nat(4u);
v___x_355_ = lean_unsigned_to_nat(569u);
v___x_356_ = ((lean_object*)(l_String_Slice_getUTF8Byte_x21___closed__1));
v___x_357_ = ((lean_object*)(l_String_Slice_getUTF8Byte_x21___closed__0));
v___x_358_ = l_mkPanicMessageWithDecl(v___x_357_, v___x_356_, v___x_355_, v___x_354_, v___x_353_);
return v___x_358_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_getUTF8Byte_x21(lean_object* v_s_359_, lean_object* v_p_360_){
_start:
{
lean_object* v_str_361_; lean_object* v_startInclusive_362_; lean_object* v_endExclusive_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; 
v_str_361_ = lean_ctor_get(v_s_359_, 0);
v_startInclusive_362_ = lean_ctor_get(v_s_359_, 1);
v_endExclusive_363_ = lean_ctor_get(v_s_359_, 2);
v___x_364_ = lean_nat_sub(v_endExclusive_363_, v_startInclusive_362_);
v___x_365_ = lean_unsigned_to_nat(1u);
v___x_366_ = lean_nat_add(v_p_360_, v___x_365_);
v___x_367_ = lean_nat_dec_le(v___x_366_, v___x_364_);
lean_dec(v___x_364_);
lean_dec(v___x_366_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_368_ = lean_obj_once(&l_String_Slice_getUTF8Byte_x21___closed__3, &l_String_Slice_getUTF8Byte_x21___closed__3_once, _init_l_String_Slice_getUTF8Byte_x21___closed__3);
v___x_369_ = l_panic___at___00String_Slice_getUTF8Byte_x21_spec__0(v___x_368_);
return v___x_369_;
}
else
{
lean_object* v___x_370_; uint8_t v___x_371_; 
v___x_370_ = lean_nat_add(v_startInclusive_362_, v_p_360_);
v___x_371_ = lean_string_get_byte_fast(v_str_361_, v___x_370_);
return v___x_371_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_getUTF8Byte_x21___boxed(lean_object* v_s_372_, lean_object* v_p_373_){
_start:
{
uint8_t v_res_374_; lean_object* v_r_375_; 
v_res_374_ = l_String_Slice_getUTF8Byte_x21(v_s_372_, v_p_373_);
lean_dec(v_p_373_);
lean_dec_ref(v_s_372_);
v_r_375_ = lean_box(v_res_374_);
return v_r_375_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_instDecidableEqPos_decEq___redArg(lean_object* v_x_376_, lean_object* v_x_377_){
_start:
{
uint8_t v_decide_378_; 
v_decide_378_ = lean_nat_dec_eq(v_x_376_, v_x_377_);
return v_decide_378_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instDecidableEqPos_decEq___redArg___boxed(lean_object* v_x_379_, lean_object* v_x_380_){
_start:
{
uint8_t v_res_381_; lean_object* v_r_382_; 
v_res_381_ = l_String_Slice_instDecidableEqPos_decEq___redArg(v_x_379_, v_x_380_);
lean_dec(v_x_380_);
lean_dec(v_x_379_);
v_r_382_ = lean_box(v_res_381_);
return v_r_382_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_instDecidableEqPos_decEq(lean_object* v_s_383_, lean_object* v_x_384_, lean_object* v_x_385_){
_start:
{
uint8_t v_decide_386_; 
v_decide_386_ = lean_nat_dec_eq(v_x_384_, v_x_385_);
return v_decide_386_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instDecidableEqPos_decEq___boxed(lean_object* v_s_387_, lean_object* v_x_388_, lean_object* v_x_389_){
_start:
{
uint8_t v_res_390_; lean_object* v_r_391_; 
v_res_390_ = l_String_Slice_instDecidableEqPos_decEq(v_s_387_, v_x_388_, v_x_389_);
lean_dec(v_x_389_);
lean_dec(v_x_388_);
lean_dec_ref(v_s_387_);
v_r_391_ = lean_box(v_res_390_);
return v_r_391_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_instDecidableEqPos___redArg(lean_object* v_x_392_, lean_object* v_x_393_){
_start:
{
uint8_t v_decide_394_; 
v_decide_394_ = lean_nat_dec_eq(v_x_392_, v_x_393_);
return v_decide_394_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instDecidableEqPos___redArg___boxed(lean_object* v_x_395_, lean_object* v_x_396_){
_start:
{
uint8_t v_res_397_; lean_object* v_r_398_; 
v_res_397_ = l_String_Slice_instDecidableEqPos___redArg(v_x_395_, v_x_396_);
lean_dec(v_x_396_);
lean_dec(v_x_395_);
v_r_398_ = lean_box(v_res_397_);
return v_r_398_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_instDecidableEqPos(lean_object* v_s_399_, lean_object* v_x_400_, lean_object* v_x_401_){
_start:
{
uint8_t v_decide_402_; 
v_decide_402_ = lean_nat_dec_eq(v_x_400_, v_x_401_);
return v_decide_402_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instDecidableEqPos___boxed(lean_object* v_s_403_, lean_object* v_x_404_, lean_object* v_x_405_){
_start:
{
uint8_t v_res_406_; lean_object* v_r_407_; 
v_res_406_ = l_String_Slice_instDecidableEqPos(v_s_403_, v_x_404_, v_x_405_);
lean_dec(v_x_405_);
lean_dec(v_x_404_);
lean_dec_ref(v_s_403_);
v_r_407_ = lean_box(v_res_406_);
return v_r_407_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_startPos___redArg(){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = lean_unsigned_to_nat(0u);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_startPos___redArg___boxed(lean_object* v___dummy_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_String_Slice_startPos___redArg();
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_startPos(lean_object* v_s_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = lean_unsigned_to_nat(0u);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_startPos___boxed(lean_object* v_s_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_String_Slice_startPos(v_s_414_);
lean_dec_ref(v_s_414_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_String_instInhabitedPos__1___redArg(){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = lean_unsigned_to_nat(0u);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_String_instInhabitedPos__1___redArg___boxed(lean_object* v___dummy_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_String_instInhabitedPos__1___redArg();
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_String_instInhabitedPos__1(lean_object* v_s_420_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = lean_unsigned_to_nat(0u);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_String_instInhabitedPos__1___boxed(lean_object* v_s_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_String_instInhabitedPos__1(v_s_422_);
lean_dec_ref(v_s_422_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_endPos(lean_object* v_s_424_){
_start:
{
lean_object* v_startInclusive_425_; lean_object* v_endExclusive_426_; lean_object* v___x_427_; 
v_startInclusive_425_ = lean_ctor_get(v_s_424_, 1);
v_endExclusive_426_ = lean_ctor_get(v_s_424_, 2);
v___x_427_ = lean_nat_sub(v_endExclusive_426_, v_startInclusive_425_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_endPos___boxed(lean_object* v_s_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_String_Slice_endPos(v_s_428_);
lean_dec_ref(v_s_428_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_String_instLEPos__1___redArg(){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = lean_box(0);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_String_instLEPos__1___redArg___boxed(lean_object* v___dummy_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_String_instLEPos__1___redArg();
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_String_instLEPos__1(lean_object* v_s_434_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = lean_box(0);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_String_instLEPos__1___boxed(lean_object* v_s_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_String_instLEPos__1(v_s_436_);
lean_dec_ref(v_s_436_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_String_instLTPos__1___redArg(){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = lean_box(0);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_String_instLTPos__1___redArg___boxed(lean_object* v___dummy_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = l_String_instLTPos__1___redArg();
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l_String_instLTPos__1(lean_object* v_s_442_){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = lean_box(0);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_String_instLTPos__1___boxed(lean_object* v_s_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_String_instLTPos__1(v_s_444_);
lean_dec_ref(v_s_444_);
return v_res_445_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableLePos__1___redArg(lean_object* v_l_446_, lean_object* v_r_447_){
_start:
{
uint8_t v___x_448_; 
v___x_448_ = lean_nat_dec_le(v_l_446_, v_r_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableLePos__1___redArg___boxed(lean_object* v_l_449_, lean_object* v_r_450_){
_start:
{
uint8_t v_res_451_; lean_object* v_r_452_; 
v_res_451_ = l_String_instDecidableLePos__1___redArg(v_l_449_, v_r_450_);
lean_dec(v_r_450_);
lean_dec(v_l_449_);
v_r_452_ = lean_box(v_res_451_);
return v_r_452_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableLePos__1(lean_object* v_s_453_, lean_object* v_l_454_, lean_object* v_r_455_){
_start:
{
uint8_t v___x_456_; 
v___x_456_ = lean_nat_dec_le(v_l_454_, v_r_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableLePos__1___boxed(lean_object* v_s_457_, lean_object* v_l_458_, lean_object* v_r_459_){
_start:
{
uint8_t v_res_460_; lean_object* v_r_461_; 
v_res_460_ = l_String_instDecidableLePos__1(v_s_457_, v_l_458_, v_r_459_);
lean_dec(v_r_459_);
lean_dec(v_l_458_);
lean_dec_ref(v_s_457_);
v_r_461_ = lean_box(v_res_460_);
return v_r_461_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableLtPos__1___redArg(lean_object* v_l_462_, lean_object* v_r_463_){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; uint8_t v___x_466_; 
v___x_464_ = lean_unsigned_to_nat(1u);
v___x_465_ = lean_nat_add(v_l_462_, v___x_464_);
v___x_466_ = lean_nat_dec_le(v___x_465_, v_r_463_);
lean_dec(v___x_465_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableLtPos__1___redArg___boxed(lean_object* v_l_467_, lean_object* v_r_468_){
_start:
{
uint8_t v_res_469_; lean_object* v_r_470_; 
v_res_469_ = l_String_instDecidableLtPos__1___redArg(v_l_467_, v_r_468_);
lean_dec(v_r_468_);
lean_dec(v_l_467_);
v_r_470_ = lean_box(v_res_469_);
return v_r_470_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableLtPos__1(lean_object* v_s_471_, lean_object* v_l_472_, lean_object* v_r_473_){
_start:
{
uint8_t v___x_474_; 
v___x_474_ = l_String_instDecidableLtPos__1___redArg(v_l_472_, v_r_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableLtPos__1___boxed(lean_object* v_s_475_, lean_object* v_l_476_, lean_object* v_r_477_){
_start:
{
uint8_t v_res_478_; lean_object* v_r_479_; 
v_res_478_ = l_String_instDecidableLtPos__1(v_s_475_, v_l_476_, v_r_477_);
lean_dec(v_r_477_);
lean_dec(v_l_476_);
lean_dec_ref(v_s_475_);
v_r_479_ = lean_box(v_res_478_);
return v_r_479_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instSlicePosEqImpl___redArg(lean_object* v_l_480_, lean_object* v_r_481_){
_start:
{
uint8_t v___x_482_; 
v___x_482_ = lean_nat_dec_eq(v_l_480_, v_r_481_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instSlicePosEqImpl___redArg___boxed(lean_object* v_l_483_, lean_object* v_r_484_){
_start:
{
uint8_t v_res_485_; lean_object* v_r_486_; 
v_res_485_ = l_UDecidable_instSlicePosEqImpl___redArg(v_l_483_, v_r_484_);
lean_dec(v_r_484_);
lean_dec(v_l_483_);
v_r_486_ = lean_box(v_res_485_);
return v_r_486_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instSlicePosEqImpl(lean_object* v_s_487_, lean_object* v_l_488_, lean_object* v_r_489_){
_start:
{
uint8_t v___x_490_; 
v___x_490_ = lean_nat_dec_eq(v_l_488_, v_r_489_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instSlicePosEqImpl___boxed(lean_object* v_s_491_, lean_object* v_l_492_, lean_object* v_r_493_){
_start:
{
uint8_t v_res_494_; lean_object* v_r_495_; 
v_res_494_ = l_UDecidable_instSlicePosEqImpl(v_s_491_, v_l_492_, v_r_493_);
lean_dec(v_r_493_);
lean_dec(v_l_492_);
lean_dec_ref(v_s_491_);
v_r_495_ = lean_box(v_res_494_);
return v_r_495_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instSlicePosLeImpl___redArg(lean_object* v_l_496_, lean_object* v_r_497_){
_start:
{
uint8_t v___x_498_; 
v___x_498_ = lean_nat_dec_le(v_l_496_, v_r_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instSlicePosLeImpl___redArg___boxed(lean_object* v_l_499_, lean_object* v_r_500_){
_start:
{
uint8_t v_res_501_; lean_object* v_r_502_; 
v_res_501_ = l_UDecidable_instSlicePosLeImpl___redArg(v_l_499_, v_r_500_);
lean_dec(v_r_500_);
lean_dec(v_l_499_);
v_r_502_ = lean_box(v_res_501_);
return v_r_502_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instSlicePosLeImpl(lean_object* v_s_503_, lean_object* v_l_504_, lean_object* v_r_505_){
_start:
{
uint8_t v___x_506_; 
v___x_506_ = lean_nat_dec_le(v_l_504_, v_r_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instSlicePosLeImpl___boxed(lean_object* v_s_507_, lean_object* v_l_508_, lean_object* v_r_509_){
_start:
{
uint8_t v_res_510_; lean_object* v_r_511_; 
v_res_510_ = l_UDecidable_instSlicePosLeImpl(v_s_507_, v_l_508_, v_r_509_);
lean_dec(v_r_509_);
lean_dec(v_l_508_);
lean_dec_ref(v_s_507_);
v_r_511_ = lean_box(v_res_510_);
return v_r_511_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instSlicePosLtImpl___redArg(lean_object* v_l_512_, lean_object* v_r_513_){
_start:
{
uint8_t v___x_514_; 
v___x_514_ = lean_nat_dec_lt(v_l_512_, v_r_513_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instSlicePosLtImpl___redArg___boxed(lean_object* v_l_515_, lean_object* v_r_516_){
_start:
{
uint8_t v_res_517_; lean_object* v_r_518_; 
v_res_517_ = l_UDecidable_instSlicePosLtImpl___redArg(v_l_515_, v_r_516_);
lean_dec(v_r_516_);
lean_dec(v_l_515_);
v_r_518_ = lean_box(v_res_517_);
return v_r_518_;
}
}
LEAN_EXPORT uint8_t l_UDecidable_instSlicePosLtImpl(lean_object* v_s_519_, lean_object* v_l_520_, lean_object* v_r_521_){
_start:
{
uint8_t v___x_522_; 
v___x_522_ = lean_nat_dec_lt(v_l_520_, v_r_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_UDecidable_instSlicePosLtImpl___boxed(lean_object* v_s_523_, lean_object* v_l_524_, lean_object* v_r_525_){
_start:
{
uint8_t v_res_526_; lean_object* v_r_527_; 
v_res_526_ = l_UDecidable_instSlicePosLtImpl(v_s_523_, v_l_524_, v_r_525_);
lean_dec(v_r_525_);
lean_dec(v_l_524_);
lean_dec_ref(v_s_523_);
v_r_527_ = lean_box(v_res_526_);
return v_r_527_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableIsAtEnd(lean_object* v_s_528_, lean_object* v_pos_529_){
_start:
{
lean_object* v___x_530_; uint8_t v_decide_531_; 
v___x_530_ = lean_string_utf8_byte_size(v_s_528_);
v_decide_531_ = lean_nat_dec_eq(v_pos_529_, v___x_530_);
return v_decide_531_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableIsAtEnd___boxed(lean_object* v_s_532_, lean_object* v_pos_533_){
_start:
{
uint8_t v_res_534_; lean_object* v_r_535_; 
v_res_534_ = l_String_instDecidableIsAtEnd(v_s_532_, v_pos_533_);
lean_dec(v_pos_533_);
lean_dec_ref(v_s_532_);
v_r_535_ = lean_box(v_res_534_);
return v_r_535_;
}
}
LEAN_EXPORT uint8_t l_String_instDecidableIsAtEnd__1(lean_object* v_s_536_, lean_object* v_pos_537_){
_start:
{
lean_object* v_startInclusive_538_; lean_object* v_endExclusive_539_; lean_object* v___x_540_; uint8_t v_decide_541_; 
v_startInclusive_538_ = lean_ctor_get(v_s_536_, 1);
v_endExclusive_539_ = lean_ctor_get(v_s_536_, 2);
v___x_540_ = lean_nat_sub(v_endExclusive_539_, v_startInclusive_538_);
v_decide_541_ = lean_nat_dec_eq(v_pos_537_, v___x_540_);
lean_dec(v___x_540_);
return v_decide_541_;
}
}
LEAN_EXPORT lean_object* l_String_instDecidableIsAtEnd__1___boxed(lean_object* v_s_542_, lean_object* v_pos_543_){
_start:
{
uint8_t v_res_544_; lean_object* v_r_545_; 
v_res_544_ = l_String_instDecidableIsAtEnd__1(v_s_542_, v_pos_543_);
lean_dec(v_pos_543_);
lean_dec_ref(v_s_542_);
v_r_545_ = lean_box(v_res_544_);
return v_r_545_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_Pos_byte___redArg(lean_object* v_s_546_, lean_object* v_pos_547_){
_start:
{
lean_object* v_str_548_; lean_object* v_startInclusive_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v_str_548_ = lean_ctor_get(v_s_546_, 0);
v_startInclusive_549_ = lean_ctor_get(v_s_546_, 1);
v___x_550_ = lean_nat_add(v_startInclusive_549_, v_pos_547_);
v___x_551_ = lean_string_get_byte_fast(v_str_548_, v___x_550_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_byte___redArg___boxed(lean_object* v_s_552_, lean_object* v_pos_553_){
_start:
{
uint8_t v_res_554_; lean_object* v_r_555_; 
v_res_554_ = l_String_Slice_Pos_byte___redArg(v_s_552_, v_pos_553_);
lean_dec(v_pos_553_);
lean_dec_ref(v_s_552_);
v_r_555_ = lean_box(v_res_554_);
return v_r_555_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_Pos_byte(lean_object* v_s_556_, lean_object* v_pos_557_, lean_object* v_h_558_){
_start:
{
lean_object* v_str_559_; lean_object* v_startInclusive_560_; lean_object* v___x_561_; uint8_t v___x_562_; 
v_str_559_ = lean_ctor_get(v_s_556_, 0);
v_startInclusive_560_ = lean_ctor_get(v_s_556_, 1);
v___x_561_ = lean_nat_add(v_startInclusive_560_, v_pos_557_);
v___x_562_ = lean_string_get_byte_fast(v_str_559_, v___x_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_byte___boxed(lean_object* v_s_563_, lean_object* v_pos_564_, lean_object* v_h_565_){
_start:
{
uint8_t v_res_566_; lean_object* v_r_567_; 
v_res_566_ = l_String_Slice_Pos_byte(v_s_563_, v_pos_564_, v_h_565_);
lean_dec(v_pos_564_);
lean_dec_ref(v_s_563_);
v_r_567_ = lean_box(v_res_566_);
return v_r_567_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_isEmpty(lean_object* v_s_568_){
_start:
{
lean_object* v_startInclusive_569_; lean_object* v_endExclusive_570_; lean_object* v___x_571_; lean_object* v___x_572_; uint8_t v___x_573_; 
v_startInclusive_569_ = lean_ctor_get(v_s_568_, 1);
v_endExclusive_570_ = lean_ctor_get(v_s_568_, 2);
v___x_571_ = lean_nat_sub(v_endExclusive_570_, v_startInclusive_569_);
v___x_572_ = lean_unsigned_to_nat(0u);
v___x_573_ = lean_nat_dec_eq(v___x_571_, v___x_572_);
lean_dec(v___x_571_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_isEmpty___boxed(lean_object* v_s_574_){
_start:
{
uint8_t v_res_575_; lean_object* v_r_576_; 
v_res_575_ = l_String_Slice_isEmpty(v_s_574_);
lean_dec_ref(v_s_574_);
v_r_576_ = lean_box(v_res_575_);
return v_r_576_;
}
}
LEAN_EXPORT lean_object* l_String_toSubstring(lean_object* v_s_577_){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_578_ = lean_unsigned_to_nat(0u);
v___x_579_ = lean_string_utf8_byte_size(v_s_577_);
v___x_580_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_580_, 0, v_s_577_);
lean_ctor_set(v___x_580_, 1, v___x_578_);
lean_ctor_set(v___x_580_, 2, v___x_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_String_toSubstring_x27(lean_object* v_s_581_){
_start:
{
lean_object* v___x_582_; 
v___x_582_ = l_String_toRawSubstring_x27(v_s_581_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_String_startValidPos___redArg(){
_start:
{
lean_object* v___x_584_; 
v___x_584_ = lean_unsigned_to_nat(0u);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_String_startValidPos___redArg___boxed(lean_object* v___dummy_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_String_startValidPos___redArg();
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_String_startValidPos(lean_object* v_s_587_){
_start:
{
lean_object* v___x_588_; 
v___x_588_ = lean_unsigned_to_nat(0u);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_String_startValidPos___boxed(lean_object* v_s_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_String_startValidPos(v_s_589_);
lean_dec_ref(v_s_589_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_String_endValidPos(lean_object* v_s_591_){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = lean_string_utf8_byte_size(v_s_591_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l_String_endValidPos___boxed(lean_object* v_s_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_String_endValidPos(v_s_593_);
lean_dec_ref(v_s_593_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_String_bytes(lean_object* v_s_595_){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = lean_string_to_utf8(v_s_595_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_String_lengthAssumingAscii(lean_object* v_s_597_){
_start:
{
lean_object* v___x_598_; 
v___x_598_ = lean_string_utf8_byte_size(v_s_597_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_String_lengthAssumingAscii___boxed(lean_object* v_s_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_String_lengthAssumingAscii(v_s_599_);
lean_dec_ref(v_s_599_);
return v_res_600_;
}
}
lean_object* runtime_initialize_Init_Data_String_PosRaw(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ByteArray_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_String_Defs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_String_PosRaw(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ByteArray_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_String_Defs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_String_PosRaw(uint8_t builtin);
lean_object* initialize_Init_Data_ByteArray_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_String_Defs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_String_PosRaw(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ByteArray_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_String_Defs(builtin);
}
#ifdef __cplusplus
}
#endif
