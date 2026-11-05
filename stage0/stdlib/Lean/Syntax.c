// Lean compiler output
// Module: Lean.Syntax
// Imports: public import Init.Data.Slice public import Init.Data.Hashable public import Lean.Data.Format public import Init.Data.Option.Coe public import Init.Data.String.Hashable import Init.Data.Range.Polymorphic.Iterators import Init.Data.ToString.Macro import Init.Omega import Init.Syntax
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
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
uint8_t l_Lean_Syntax_isAtom(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_instBEqPreresolved_beq(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_SourceInfo_getTrailingTailPos_x3f(lean_object*, uint8_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_substring_tostring(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Substring_Raw_beq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint64_t l_String_instHashableRaw_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_SourceInfo_getTailPos_x3f(lean_object*, uint8_t);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_string_is_valid_pos(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
lean_object* l_Lean_Name_components(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_dbg_trace(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
extern lean_object* l_String_instInhabitedSlice;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getTrailingTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l___private_Init_Data_List_Impl_0__List_zipWithTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getNumParts(lean_object*);
lean_object* l_Lean_Syntax_splitNameLit(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_zipWith___at___00List_zip_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Syntax_getTailInfo_x3f(lean_object*);
lean_object* l_Lean_Syntax_setTailInfo(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Syntax_instInhabitedRange_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instInhabitedRange_default___closed__0 = (const lean_object*)&l_Lean_Syntax_instInhabitedRange_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instInhabitedRange_default = (const lean_object*)&l_Lean_Syntax_instInhabitedRange_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instInhabitedRange = (const lean_object*)&l_Lean_Syntax_instInhabitedRange_default___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Syntax_instReprRange_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Syntax_instReprRange_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__7;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "{ byteIdx := "};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__9_value;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__10 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__11_value;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__12_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__13 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__13_value;
static const lean_string_object l_Lean_Syntax_instReprRange_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "stop"};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__15 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__15_value;
static lean_once_cell_t l_Lean_Syntax_instReprRange_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__16;
static lean_once_cell_t l_Lean_Syntax_instReprRange_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__17;
static lean_once_cell_t l_Lean_Syntax_instReprRange_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__18;
static const lean_ctor_object l_Lean_Syntax_instReprRange_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instReprRange_repr___redArg___closed__19 = (const lean_object*)&l_Lean_Syntax_instReprRange_repr___redArg___closed__19_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instReprRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instReprRange_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instReprRange___closed__0 = (const lean_object*)&l_Lean_Syntax_instReprRange___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instReprRange = (const lean_object*)&l_Lean_Syntax_instReprRange___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_instBEqRange_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqRange_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instBEqRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instBEqRange_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instBEqRange___closed__0 = (const lean_object*)&l_Lean_Syntax_instBEqRange___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instBEqRange = (const lean_object*)&l_Lean_Syntax_instBEqRange___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Syntax_instHashableRange_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instHashableRange_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Syntax_instHashableRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instHashableRange_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instHashableRange___closed__0 = (const lean_object*)&l_Lean_Syntax_instHashableRange___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instHashableRange = (const lean_object*)&l_Lean_Syntax_instHashableRange___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_contains(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_contains___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_includes(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_includes___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_overlaps(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_overlaps___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_bsize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_bsize___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_updateTrailing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRange_x3f(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRange_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRangeWithTrailing_x3f(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRangeWithTrailing_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SourceInfo_nonCanonicalSynthetic(lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqSourceInfo__lean_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqSourceInfo__lean_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqSourceInfo__lean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqSourceInfo__lean_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqSourceInfo__lean___closed__0 = (const lean_object*)&l_Lean_instBEqSourceInfo__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqSourceInfo__lean = (const lean_object*)&l_Lean_instBEqSourceInfo__lean___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing___redArg();
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___redArg();
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___redArg();
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isLitKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_isLitKind___closed__0 = (const lean_object*)&l_Lean_isLitKind___closed__0_value;
static const lean_ctor_object l_Lean_isLitKind___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLitKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_isLitKind___closed__1 = (const lean_object*)&l_Lean_isLitKind___closed__1_value;
static const lean_string_object l_Lean_isLitKind___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_isLitKind___closed__2 = (const lean_object*)&l_Lean_isLitKind___closed__2_value;
static const lean_ctor_object l_Lean_isLitKind___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLitKind___closed__2_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_isLitKind___closed__3 = (const lean_object*)&l_Lean_isLitKind___closed__3_value;
static const lean_string_object l_Lean_isLitKind___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "char"};
static const lean_object* l_Lean_isLitKind___closed__4 = (const lean_object*)&l_Lean_isLitKind___closed__4_value;
static const lean_ctor_object l_Lean_isLitKind___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLitKind___closed__4_value),LEAN_SCALAR_PTR_LITERAL(43, 243, 213, 66, 253, 140, 152, 232)}};
static const lean_object* l_Lean_isLitKind___closed__5 = (const lean_object*)&l_Lean_isLitKind___closed__5_value;
static const lean_string_object l_Lean_isLitKind___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_isLitKind___closed__6 = (const lean_object*)&l_Lean_isLitKind___closed__6_value;
static const lean_ctor_object l_Lean_isLitKind___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLitKind___closed__6_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l_Lean_isLitKind___closed__7 = (const lean_object*)&l_Lean_isLitKind___closed__7_value;
static const lean_string_object l_Lean_isLitKind___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "scientific"};
static const lean_object* l_Lean_isLitKind___closed__8 = (const lean_object*)&l_Lean_isLitKind___closed__8_value;
static const lean_ctor_object l_Lean_isLitKind___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isLitKind___closed__8_value),LEAN_SCALAR_PTR_LITERAL(219, 104, 254, 176, 65, 57, 101, 179)}};
static const lean_object* l_Lean_isLitKind___closed__9 = (const lean_object*)&l_Lean_isLitKind___closed__9_value;
LEAN_EXPORT uint8_t l_Lean_isLitKind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_isLitKind___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getKind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getKind___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_withArgs___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_withArgs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getNumArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getNumArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_modifyArgs(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Syntax_structRangeEq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Syntax_structRangeEq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__0 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__0_value;
static const lean_string_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__1 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__1_value;
static const lean_string_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "reuse"};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__2 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__2_value;
static const lean_ctor_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3_value_aux_0),((lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__1_value),LEAN_SCALAR_PTR_LITERAL(46, 30, 230, 20, 64, 162, 204, 1)}};
static const lean_ctor_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3_value_aux_1),((lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__2_value),LEAN_SCALAR_PTR_LITERAL(32, 17, 142, 189, 192, 166, 31, 124)}};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3_value;
static const lean_string_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "reuse stopped:\n"};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__4 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__4_value;
static const lean_string_object l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " !=\n"};
static const lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5 = (const lean_object*)&l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEqWithTraceReuse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_eqWithInfo(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_eqWithInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_eqWithInfoAndTraceReuse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_eqWithInfoAndTraceReuse___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_getAtomVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Syntax_getAtomVal___closed__0 = (const lean_object*)&l_Lean_Syntax_getAtomVal___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_getAtomVal(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAtomVal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setAtomVal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNode___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Syntax_asNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Syntax_asNode___closed__0 = (const lean_object*)&l_Lean_Syntax_asNode___closed__0_value;
static const lean_string_object l_Lean_Syntax_asNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Syntax_asNode___closed__1 = (const lean_object*)&l_Lean_Syntax_asNode___closed__1_value;
static const lean_ctor_object l_Lean_Syntax_asNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_asNode___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Syntax_asNode___closed__2 = (const lean_object*)&l_Lean_Syntax_asNode___closed__2_value;
static const lean_ctor_object l_Lean_Syntax_asNode___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Syntax_asNode___closed__2_value),((lean_object*)&l_Lean_Syntax_asNode___closed__0_value)}};
static const lean_object* l_Lean_Syntax_asNode___closed__3 = (const lean_object*)&l_Lean_Syntax_asNode___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_asNode(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_asNode___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getIdAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getIdAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_hasIdent(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_hasIdent___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUp___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__0 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__0_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__1 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__1_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__2 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__2_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__3 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__3_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__4 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__4_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__5 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__5_value;
static const lean_closure_object l_Lean_Syntax_rewriteBottomUp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__6 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__6_value;
static const lean_ctor_object l_Lean_Syntax_rewriteBottomUp___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__0_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__1_value)}};
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__7 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__7_value;
static const lean_ctor_object l_Lean_Syntax_rewriteBottomUp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__7_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__2_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__3_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__4_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__5_value)}};
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__8 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__8_value;
static const lean_ctor_object l_Lean_Syntax_rewriteBottomUp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__8_value),((lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__6_value)}};
static const lean_object* l_Lean_Syntax_rewriteBottomUp___closed__9 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUp___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__0(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1___boxed(lean_object*);
static const lean_string_object l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__2 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__2_value;
static const lean_string_object l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__1 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__1_value;
static const lean_string_object l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__0 = (const lean_object*)&l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_eraseQuoteMacroScopes(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_updateLeadingAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_updateLeading(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_updateTrailing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps_spec__0(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0 = (const lean_object*)&l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Syntax_identComponents_x3f_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Syntax_getAtomVal___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Syntax_identComponents_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Syntax_identComponents_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_identComponents_x3f___closed__0_value;
static const lean_string_object l_Lean_Syntax_identComponents_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Lean.Syntax"};
static const lean_object* l_Lean_Syntax_identComponents_x3f___closed__1 = (const lean_object*)&l_Lean_Syntax_identComponents_x3f___closed__1_value;
static const lean_string_object l_Lean_Syntax_identComponents_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Syntax.identComponents\?"};
static const lean_object* l_Lean_Syntax_identComponents_x3f___closed__2 = (const lean_object*)&l_Lean_Syntax_identComponents_x3f___closed__2_value;
static const lean_string_object l_Lean_Syntax_identComponents_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Syntax_identComponents_x3f___closed__3 = (const lean_object*)&l_Lean_Syntax_identComponents_x3f___closed__3_value;
static lean_once_cell_t l_Lean_Syntax_identComponents_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_identComponents_x3f___closed__4;
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Syntax_identComponents_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_identComponents___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Syntax.identComponents"};
static const lean_object* l_Lean_Syntax_identComponents___closed__0 = (const lean_object*)&l_Lean_Syntax_identComponents___closed__0_value;
static lean_once_cell_t l_Lean_Syntax_identComponents___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_identComponents___closed__1;
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_topDown(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_topDown___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__0 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___closed__0 = (const lean_object*)&l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_reprint(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_hasMissing(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_hasMissing___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_getRange_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_ofRange(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_ofRange___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Syntax_Traverser_fromSyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Syntax_Traverser_fromSyntax___closed__0 = (const lean_object*)&l_Lean_Syntax_Traverser_fromSyntax___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_fromSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_setCur(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_down(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_up(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_left(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_right(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Syntax_MonadTraverser_getCur___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_MonadTraverser_getCur___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_Syntax_MonadTraverser_goUp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_goUp___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_MonadTraverser_goUp___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_MonadTraverser_goUp___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_Syntax_MonadTraverser_goLeft___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_goLeft___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_MonadTraverser_goLeft___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_MonadTraverser_goLeft___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lean_Syntax_MonadTraverser_goRight___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_goRight___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_MonadTraverser_goRight___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_MonadTraverser_goRight___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getIdAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getIdAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkListNode(lean_object*);
static const lean_string_object l_Lean_Syntax_isQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l_Lean_Syntax_isQuot___closed__0 = (const lean_object*)&l_Lean_Syntax_isQuot___closed__0_value;
static const lean_string_object l_Lean_Syntax_isQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "dynamicQuot"};
static const lean_object* l_Lean_Syntax_isQuot___closed__1 = (const lean_object*)&l_Lean_Syntax_isQuot___closed__1_value;
static const lean_string_object l_Lean_Syntax_isQuot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Syntax_isQuot___closed__2 = (const lean_object*)&l_Lean_Syntax_isQuot___closed__2_value;
static const lean_string_object l_Lean_Syntax_isQuot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Syntax_isQuot___closed__3 = (const lean_object*)&l_Lean_Syntax_isQuot___closed__3_value;
static const lean_string_object l_Lean_Syntax_isQuot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Syntax_isQuot___closed__4 = (const lean_object*)&l_Lean_Syntax_isQuot___closed__4_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_isQuot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isQuot___boxed(lean_object*);
static const lean_ctor_object l_Lean_Syntax_getQuotContent___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isQuot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Syntax_getQuotContent___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_getQuotContent___closed__0_value_aux_0),((lean_object*)&l_Lean_Syntax_isQuot___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Syntax_getQuotContent___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_getQuotContent___closed__0_value_aux_1),((lean_object*)&l_Lean_Syntax_isQuot___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Syntax_getQuotContent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_getQuotContent___closed__0_value_aux_2),((lean_object*)&l_Lean_Syntax_isQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 123, 139, 164, 173, 191, 116, 242)}};
static const lean_object* l_Lean_Syntax_getQuotContent___closed__0 = (const lean_object*)&l_Lean_Syntax_getQuotContent___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_getQuotContent(lean_object*);
static const lean_string_object l_Lean_Syntax_isAntiquot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "antiquot"};
static const lean_object* l_Lean_Syntax_isAntiquot___closed__0 = (const lean_object*)&l_Lean_Syntax_isAntiquot___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquot___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquots(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquots___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getCanonicalAntiquot(lean_object*);
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__0 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__0_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__1;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isAntiquot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(209, 141, 12, 45, 178, 67, 53, 106)}};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__2 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__2_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__3;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "pseudo"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__4 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__4_value;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__4_value),LEAN_SCALAR_PTR_LITERAL(246, 255, 48, 87, 29, 98, 48, 237)}};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__5 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__5_value;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "antiquotName"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__6 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__6_value;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__6_value),LEAN_SCALAR_PTR_LITERAL(67, 48, 35, 197, 163, 216, 250, 79)}};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__7 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__7_value;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__8 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__8_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__9;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__10;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__11 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__11_value;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isQuot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_0),((lean_object*)&l_Lean_Syntax_isQuot___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_1),((lean_object*)&l_Lean_Syntax_isQuot___closed__4_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__12_value_aux_2),((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__11_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__12 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__12_value;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "antiquotNestedExpr"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__13 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__13_value;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotNode___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__13_value),LEAN_SCALAR_PTR_LITERAL(4, 217, 111, 200, 191, 162, 168, 125)}};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__14 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__14_value;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__15 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__15_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__16;
static const lean_string_object l_Lean_Syntax_mkAntiquotNode___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Syntax_mkAntiquotNode___closed__17 = (const lean_object*)&l_Lean_Syntax_mkAntiquotNode___closed__17_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__18;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotNode___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotNode___closed__19;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotNode(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotNode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isEscapedAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isEscapedAntiquot___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_unescapeAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotTerm(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotTerm___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKind_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKind_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKinds(lean_object*);
static const lean_string_object l_Lean_Syntax_antiquotSpliceKind_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "antiquot_scope"};
static const lean_object* l_Lean_Syntax_antiquotSpliceKind_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_antiquotSpliceKind_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSpliceKind_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSpliceKind_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquotSplice(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquotSplice___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceContents(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceContents___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceSuffix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceSuffix___boxed(lean_object*);
static const lean_string_object l_Lean_Syntax_mkAntiquotSpliceNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "antiquot_splice"};
static const lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__0 = (const lean_object*)&l_Lean_Syntax_mkAntiquotSpliceNode___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkAntiquotSpliceNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkAntiquotSpliceNode___closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 54, 194, 194, 68, 126, 190, 193)}};
static const lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__1 = (const lean_object*)&l_Lean_Syntax_mkAntiquotSpliceNode___closed__1_value;
static const lean_string_object l_Lean_Syntax_mkAntiquotSpliceNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__2 = (const lean_object*)&l_Lean_Syntax_mkAntiquotSpliceNode___closed__2_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotSpliceNode___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__3;
static const lean_string_object l_Lean_Syntax_mkAntiquotSpliceNode___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__4 = (const lean_object*)&l_Lean_Syntax_mkAntiquotSpliceNode___closed__4_value;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotSpliceNode___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__5;
static lean_once_cell_t l_Lean_Syntax_mkAntiquotSpliceNode___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_mkAntiquotSpliceNode___closed__6;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotSpliceNode(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_antiquotSuffixSplice_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "antiquot_suffix_splice"};
static const lean_object* l_Lean_Syntax_antiquotSuffixSplice_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_antiquotSuffixSplice_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSuffixSplice_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSuffixSplice_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquotSuffixSplice(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquotSuffixSplice___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSuffixSpliceInner(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSuffixSpliceInner___boxed(lean_object*);
static const lean_ctor_object l_Lean_Syntax_mkAntiquotSuffixSpliceNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_antiquotSuffixSplice_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 22, 214, 220, 194, 127, 23, 217)}};
static const lean_object* l_Lean_Syntax_mkAntiquotSuffixSpliceNode___closed__0 = (const lean_object*)&l_Lean_Syntax_mkAntiquotSuffixSpliceNode___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotSuffixSpliceNode(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_isTokenAntiquot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "token_antiquot"};
static const lean_object* l_Lean_Syntax_isTokenAntiquot___closed__0 = (const lean_object*)&l_Lean_Syntax_isTokenAntiquot___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_isTokenAntiquot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isTokenAntiquot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 159, 231, 44, 235, 156, 55, 135)}};
static const lean_object* l_Lean_Syntax_isTokenAntiquot___closed__1 = (const lean_object*)&l_Lean_Syntax_isTokenAntiquot___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_isTokenAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isTokenAntiquot___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isAnyAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAnyAntiquot___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go___closed__0 = (const lean_object*)&l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_findStack_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_Stack_matches___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Stack_matches___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Lean_Syntax_Stack_matches_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Lean_Syntax_Stack_matches_spec__0___boxed(lean_object*);
static const lean_array_object l_Lean_Syntax_Stack_matches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Syntax_Stack_matches___closed__0 = (const lean_object*)&l_Lean_Syntax_Stack_matches___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Syntax_Stack_matches(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_Stack_matches___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_addTrailing_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_addTrailing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Syntax_instReprRange_repr_spec__0(lean_object* v_a_5_){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_nat_to_int(v_a_5_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = lean_unsigned_to_nat(9u);
v___x_21_ = lean_nat_to_int(v___x_20_);
return v___x_21_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = lean_unsigned_to_nat(8u);
v___x_35_ = lean_nat_to_int(v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__0));
v___x_37_ = lean_string_length(v___x_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = lean_obj_once(&l_Lean_Syntax_instReprRange_repr___redArg___closed__17, &l_Lean_Syntax_instReprRange_repr___redArg___closed__17_once, _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__17);
v___x_39_ = lean_nat_to_int(v___x_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr___redArg(lean_object* v_x_42_){
_start:
{
lean_object* v_start_43_; lean_object* v_stop_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_84_; 
v_start_43_ = lean_ctor_get(v_x_42_, 0);
v_stop_44_ = lean_ctor_get(v_x_42_, 1);
v_isSharedCheck_84_ = !lean_is_exclusive(v_x_42_);
if (v_isSharedCheck_84_ == 0)
{
v___x_46_ = v_x_42_;
v_isShared_47_ = v_isSharedCheck_84_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_stop_44_);
lean_inc(v_start_43_);
lean_dec(v_x_42_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_84_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_55_; 
v___x_48_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__5));
v___x_49_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__6));
v___x_50_ = lean_obj_once(&l_Lean_Syntax_instReprRange_repr___redArg___closed__7, &l_Lean_Syntax_instReprRange_repr___redArg___closed__7_once, _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__7);
v___x_51_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__9));
v___x_52_ = l_Nat_reprFast(v_start_43_);
v___x_53_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
if (v_isShared_47_ == 0)
{
lean_ctor_set_tag(v___x_46_, 5);
lean_ctor_set(v___x_46_, 1, v___x_53_);
lean_ctor_set(v___x_46_, 0, v___x_51_);
v___x_55_ = v___x_46_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v___x_51_);
lean_ctor_set(v_reuseFailAlloc_83_, 1, v___x_53_);
v___x_55_ = v_reuseFailAlloc_83_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; uint8_t v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_56_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__11));
v___x_57_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_55_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
v___x_58_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_50_);
lean_ctor_set(v___x_58_, 1, v___x_57_);
v___x_59_ = 0;
v___x_60_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_60_, 0, v___x_58_);
lean_ctor_set_uint8(v___x_60_, sizeof(void*)*1, v___x_59_);
v___x_61_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_49_);
lean_ctor_set(v___x_61_, 1, v___x_60_);
v___x_62_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__13));
v___x_63_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_61_);
lean_ctor_set(v___x_63_, 1, v___x_62_);
v___x_64_ = lean_box(1);
v___x_65_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_63_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
v___x_66_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__15));
v___x_67_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_65_);
lean_ctor_set(v___x_67_, 1, v___x_66_);
v___x_68_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
lean_ctor_set(v___x_68_, 1, v___x_48_);
v___x_69_ = lean_obj_once(&l_Lean_Syntax_instReprRange_repr___redArg___closed__16, &l_Lean_Syntax_instReprRange_repr___redArg___closed__16_once, _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__16);
v___x_70_ = l_Nat_reprFast(v_stop_44_);
v___x_71_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_51_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_56_);
v___x_74_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_69_);
lean_ctor_set(v___x_74_, 1, v___x_73_);
v___x_75_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_75_, 0, v___x_74_);
lean_ctor_set_uint8(v___x_75_, sizeof(void*)*1, v___x_59_);
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_68_);
lean_ctor_set(v___x_76_, 1, v___x_75_);
v___x_77_ = lean_obj_once(&l_Lean_Syntax_instReprRange_repr___redArg___closed__18, &l_Lean_Syntax_instReprRange_repr___redArg___closed__18_once, _init_l_Lean_Syntax_instReprRange_repr___redArg___closed__18);
v___x_78_ = ((lean_object*)(l_Lean_Syntax_instReprRange_repr___redArg___closed__19));
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_76_);
v___x_80_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_56_);
v___x_81_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_77_);
lean_ctor_set(v___x_81_, 1, v___x_80_);
v___x_82_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*1, v___x_59_);
return v___x_82_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr(lean_object* v_x_85_, lean_object* v_prec_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = l_Lean_Syntax_instReprRange_repr___redArg(v_x_85_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprRange_repr___boxed(lean_object* v_x_88_, lean_object* v_prec_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_Syntax_instReprRange_repr(v_x_88_, v_prec_89_);
lean_dec(v_prec_89_);
return v_res_90_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_instBEqRange_beq(lean_object* v_x_93_, lean_object* v_x_94_){
_start:
{
lean_object* v_start_95_; lean_object* v_stop_96_; lean_object* v_start_97_; lean_object* v_stop_98_; uint8_t v_decide_99_; 
v_start_95_ = lean_ctor_get(v_x_93_, 0);
v_stop_96_ = lean_ctor_get(v_x_93_, 1);
v_start_97_ = lean_ctor_get(v_x_94_, 0);
v_stop_98_ = lean_ctor_get(v_x_94_, 1);
v_decide_99_ = lean_nat_dec_eq(v_start_95_, v_start_97_);
if (v_decide_99_ == 0)
{
return v_decide_99_;
}
else
{
uint8_t v_decide_100_; 
v_decide_100_ = lean_nat_dec_eq(v_stop_96_, v_stop_98_);
return v_decide_100_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqRange_beq___boxed(lean_object* v_x_101_, lean_object* v_x_102_){
_start:
{
uint8_t v_res_103_; lean_object* v_r_104_; 
v_res_103_ = l_Lean_Syntax_instBEqRange_beq(v_x_101_, v_x_102_);
lean_dec_ref(v_x_102_);
lean_dec_ref(v_x_101_);
v_r_104_ = lean_box(v_res_103_);
return v_r_104_;
}
}
LEAN_EXPORT uint64_t l_Lean_Syntax_instHashableRange_hash(lean_object* v_x_107_){
_start:
{
lean_object* v_start_108_; lean_object* v_stop_109_; uint64_t v___x_110_; uint64_t v___x_111_; uint64_t v___x_112_; uint64_t v___x_113_; uint64_t v___x_114_; 
v_start_108_ = lean_ctor_get(v_x_107_, 0);
v_stop_109_ = lean_ctor_get(v_x_107_, 1);
v___x_110_ = 0ULL;
v___x_111_ = l_String_instHashableRaw_hash(v_start_108_);
v___x_112_ = lean_uint64_mix_hash(v___x_110_, v___x_111_);
v___x_113_ = l_String_instHashableRaw_hash(v_stop_109_);
v___x_114_ = lean_uint64_mix_hash(v___x_112_, v___x_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instHashableRange_hash___boxed(lean_object* v_x_115_){
_start:
{
uint64_t v_res_116_; lean_object* v_r_117_; 
v_res_116_ = l_Lean_Syntax_instHashableRange_hash(v_x_115_);
lean_dec_ref(v_x_115_);
v_r_117_ = lean_box_uint64(v_res_116_);
return v_r_117_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_contains(lean_object* v_r_120_, lean_object* v_pos_121_, uint8_t v_includeStop_122_){
_start:
{
lean_object* v_start_123_; lean_object* v_stop_124_; uint8_t v___x_125_; 
v_start_123_ = lean_ctor_get(v_r_120_, 0);
v_stop_124_ = lean_ctor_get(v_r_120_, 1);
v___x_125_ = lean_nat_dec_le(v_start_123_, v_pos_121_);
if (v___x_125_ == 0)
{
return v___x_125_;
}
else
{
if (v_includeStop_122_ == 0)
{
uint8_t v___x_126_; 
v___x_126_ = lean_nat_dec_lt(v_pos_121_, v_stop_124_);
return v___x_126_;
}
else
{
uint8_t v___x_127_; 
v___x_127_ = lean_nat_dec_le(v_pos_121_, v_stop_124_);
return v___x_127_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_contains___boxed(lean_object* v_r_128_, lean_object* v_pos_129_, lean_object* v_includeStop_130_){
_start:
{
uint8_t v_includeStop_boxed_131_; uint8_t v_res_132_; lean_object* v_r_133_; 
v_includeStop_boxed_131_ = lean_unbox(v_includeStop_130_);
v_res_132_ = l_Lean_Syntax_Range_contains(v_r_128_, v_pos_129_, v_includeStop_boxed_131_);
lean_dec(v_pos_129_);
lean_dec_ref(v_r_128_);
v_r_133_ = lean_box(v_res_132_);
return v_r_133_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_includes(lean_object* v_super_134_, lean_object* v_sub_135_, uint8_t v_includeSuperStop_136_, uint8_t v_includeSubStop_137_){
_start:
{
lean_object* v_start_138_; lean_object* v_stop_139_; lean_object* v_start_140_; lean_object* v_stop_141_; uint8_t v___y_146_; uint8_t v___x_148_; 
v_start_138_ = lean_ctor_get(v_super_134_, 0);
v_stop_139_ = lean_ctor_get(v_super_134_, 1);
v_start_140_ = lean_ctor_get(v_sub_135_, 0);
v_stop_141_ = lean_ctor_get(v_sub_135_, 1);
v___x_148_ = lean_nat_dec_le(v_start_138_, v_start_140_);
if (v___x_148_ == 0)
{
return v___x_148_;
}
else
{
if (v_includeSuperStop_136_ == 0)
{
v___y_146_ = v_includeSuperStop_136_;
goto v___jp_145_;
}
else
{
if (v_includeSubStop_137_ == 0)
{
lean_object* v___x_149_; lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_149_ = lean_unsigned_to_nat(1u);
v___x_150_ = lean_nat_add(v_stop_139_, v___x_149_);
v___x_151_ = lean_nat_dec_le(v_stop_141_, v___x_150_);
lean_dec(v___x_150_);
return v___x_151_;
}
else
{
uint8_t v___x_152_; 
v___x_152_ = 0;
v___y_146_ = v___x_152_;
goto v___jp_145_;
}
}
}
v___jp_142_:
{
if (v_includeSubStop_137_ == 0)
{
uint8_t v___x_143_; 
v___x_143_ = lean_nat_dec_le(v_stop_141_, v_stop_139_);
return v___x_143_;
}
else
{
uint8_t v___x_144_; 
v___x_144_ = lean_nat_dec_lt(v_stop_141_, v_stop_139_);
return v___x_144_;
}
}
v___jp_145_:
{
if (v_includeSuperStop_136_ == 0)
{
goto v___jp_142_;
}
else
{
if (v___y_146_ == 0)
{
uint8_t v___x_147_; 
v___x_147_ = lean_nat_dec_le(v_stop_141_, v_stop_139_);
return v___x_147_;
}
else
{
goto v___jp_142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_includes___boxed(lean_object* v_super_153_, lean_object* v_sub_154_, lean_object* v_includeSuperStop_155_, lean_object* v_includeSubStop_156_){
_start:
{
uint8_t v_includeSuperStop_boxed_157_; uint8_t v_includeSubStop_boxed_158_; uint8_t v_res_159_; lean_object* v_r_160_; 
v_includeSuperStop_boxed_157_ = lean_unbox(v_includeSuperStop_155_);
v_includeSubStop_boxed_158_ = lean_unbox(v_includeSubStop_156_);
v_res_159_ = l_Lean_Syntax_Range_includes(v_super_153_, v_sub_154_, v_includeSuperStop_boxed_157_, v_includeSubStop_boxed_158_);
lean_dec_ref(v_sub_154_);
lean_dec_ref(v_super_153_);
v_r_160_ = lean_box(v_res_159_);
return v_r_160_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_Range_overlaps(lean_object* v_first_161_, lean_object* v_second_162_, uint8_t v_includeFirstStop_163_, uint8_t v_includeSecondStop_164_){
_start:
{
uint8_t v___y_166_; 
if (v_includeFirstStop_163_ == 0)
{
lean_object* v_start_173_; lean_object* v_stop_174_; uint8_t v___x_175_; 
v_start_173_ = lean_ctor_get(v_second_162_, 0);
v_stop_174_ = lean_ctor_get(v_first_161_, 1);
v___x_175_ = lean_nat_dec_lt(v_start_173_, v_stop_174_);
v___y_166_ = v___x_175_;
goto v___jp_165_;
}
else
{
lean_object* v_start_176_; lean_object* v_stop_177_; uint8_t v___x_178_; 
v_start_176_ = lean_ctor_get(v_second_162_, 0);
v_stop_177_ = lean_ctor_get(v_first_161_, 1);
v___x_178_ = lean_nat_dec_le(v_start_176_, v_stop_177_);
v___y_166_ = v___x_178_;
goto v___jp_165_;
}
v___jp_165_:
{
if (v___y_166_ == 0)
{
return v___y_166_;
}
else
{
if (v_includeSecondStop_164_ == 0)
{
lean_object* v_start_167_; lean_object* v_stop_168_; uint8_t v___x_169_; 
v_start_167_ = lean_ctor_get(v_first_161_, 0);
v_stop_168_ = lean_ctor_get(v_second_162_, 1);
v___x_169_ = lean_nat_dec_lt(v_start_167_, v_stop_168_);
return v___x_169_;
}
else
{
lean_object* v_start_170_; lean_object* v_stop_171_; uint8_t v___x_172_; 
v_start_170_ = lean_ctor_get(v_first_161_, 0);
v_stop_171_ = lean_ctor_get(v_second_162_, 1);
v___x_172_ = lean_nat_dec_le(v_start_170_, v_stop_171_);
return v___x_172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_overlaps___boxed(lean_object* v_first_179_, lean_object* v_second_180_, lean_object* v_includeFirstStop_181_, lean_object* v_includeSecondStop_182_){
_start:
{
uint8_t v_includeFirstStop_boxed_183_; uint8_t v_includeSecondStop_boxed_184_; uint8_t v_res_185_; lean_object* v_r_186_; 
v_includeFirstStop_boxed_183_ = lean_unbox(v_includeFirstStop_181_);
v_includeSecondStop_boxed_184_ = lean_unbox(v_includeSecondStop_182_);
v_res_185_ = l_Lean_Syntax_Range_overlaps(v_first_179_, v_second_180_, v_includeFirstStop_boxed_183_, v_includeSecondStop_boxed_184_);
lean_dec_ref(v_second_180_);
lean_dec_ref(v_first_179_);
v_r_186_ = lean_box(v_res_185_);
return v_r_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_bsize(lean_object* v_r_187_){
_start:
{
lean_object* v_start_188_; lean_object* v_stop_189_; lean_object* v___x_190_; 
v_start_188_ = lean_ctor_get(v_r_187_, 0);
v_stop_189_ = lean_ctor_get(v_r_187_, 1);
v___x_190_ = lean_nat_sub(v_stop_189_, v_start_188_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Range_bsize___boxed(lean_object* v_r_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Lean_Syntax_Range_bsize(v_r_191_);
lean_dec_ref(v_r_191_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_updateTrailing(lean_object* v_trailing_193_, lean_object* v_x_194_){
_start:
{
if (lean_obj_tag(v_x_194_) == 0)
{
lean_object* v_leading_195_; lean_object* v_pos_196_; lean_object* v_endPos_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_204_; 
v_leading_195_ = lean_ctor_get(v_x_194_, 0);
v_pos_196_ = lean_ctor_get(v_x_194_, 1);
v_endPos_197_ = lean_ctor_get(v_x_194_, 3);
v_isSharedCheck_204_ = !lean_is_exclusive(v_x_194_);
if (v_isSharedCheck_204_ == 0)
{
lean_object* v_unused_205_; 
v_unused_205_ = lean_ctor_get(v_x_194_, 2);
lean_dec(v_unused_205_);
v___x_199_ = v_x_194_;
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_endPos_197_);
lean_inc(v_pos_196_);
lean_inc(v_leading_195_);
lean_dec(v_x_194_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_202_; 
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 2, v_trailing_193_);
v___x_202_ = v___x_199_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_leading_195_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v_pos_196_);
lean_ctor_set(v_reuseFailAlloc_203_, 2, v_trailing_193_);
lean_ctor_set(v_reuseFailAlloc_203_, 3, v_endPos_197_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
}
else
{
lean_dec_ref(v_trailing_193_);
return v_x_194_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRange_x3f(uint8_t v_canonicalOnly_206_, lean_object* v_info_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Lean_SourceInfo_getPos_x3f(v_info_207_, v_canonicalOnly_206_);
if (lean_obj_tag(v___x_208_) == 0)
{
lean_object* v___x_209_; 
v___x_209_ = lean_box(0);
return v___x_209_;
}
else
{
lean_object* v_val_210_; lean_object* v___x_211_; 
v_val_210_ = lean_ctor_get(v___x_208_, 0);
lean_inc(v_val_210_);
lean_dec_ref_known(v___x_208_, 1);
v___x_211_ = l_Lean_SourceInfo_getTailPos_x3f(v_info_207_, v_canonicalOnly_206_);
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v___x_212_; 
lean_dec(v_val_210_);
v___x_212_ = lean_box(0);
return v___x_212_;
}
else
{
lean_object* v_val_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_221_; 
v_val_213_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_221_ == 0)
{
v___x_215_ = v___x_211_;
v_isShared_216_ = v_isSharedCheck_221_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_val_213_);
lean_dec(v___x_211_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_221_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_217_; lean_object* v___x_219_; 
v___x_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_217_, 0, v_val_210_);
lean_ctor_set(v___x_217_, 1, v_val_213_);
if (v_isShared_216_ == 0)
{
lean_ctor_set(v___x_215_, 0, v___x_217_);
v___x_219_ = v___x_215_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v___x_217_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRange_x3f___boxed(lean_object* v_canonicalOnly_222_, lean_object* v_info_223_){
_start:
{
uint8_t v_canonicalOnly_boxed_224_; lean_object* v_res_225_; 
v_canonicalOnly_boxed_224_ = lean_unbox(v_canonicalOnly_222_);
v_res_225_ = l_Lean_SourceInfo_getRange_x3f(v_canonicalOnly_boxed_224_, v_info_223_);
lean_dec(v_info_223_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRangeWithTrailing_x3f(uint8_t v_canonicalOnly_226_, lean_object* v_info_227_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lean_SourceInfo_getPos_x3f(v_info_227_, v_canonicalOnly_226_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v___x_229_; 
v___x_229_ = lean_box(0);
return v___x_229_;
}
else
{
lean_object* v_val_230_; lean_object* v___x_231_; 
v_val_230_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_val_230_);
lean_dec_ref_known(v___x_228_, 1);
v___x_231_ = l_Lean_SourceInfo_getTrailingTailPos_x3f(v_info_227_, v_canonicalOnly_226_);
if (lean_obj_tag(v___x_231_) == 0)
{
lean_object* v___x_232_; 
lean_dec(v_val_230_);
v___x_232_ = lean_box(0);
return v___x_232_;
}
else
{
lean_object* v_val_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_241_; 
v_val_233_ = lean_ctor_get(v___x_231_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_241_ == 0)
{
v___x_235_ = v___x_231_;
v_isShared_236_ = v_isSharedCheck_241_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_val_233_);
lean_dec(v___x_231_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_241_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_237_; lean_object* v___x_239_; 
v___x_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_237_, 0, v_val_230_);
lean_ctor_set(v___x_237_, 1, v_val_233_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 0, v___x_237_);
v___x_239_ = v___x_235_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v___x_237_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_getRangeWithTrailing_x3f___boxed(lean_object* v_canonicalOnly_242_, lean_object* v_info_243_){
_start:
{
uint8_t v_canonicalOnly_boxed_244_; lean_object* v_res_245_; 
v_canonicalOnly_boxed_244_ = lean_unbox(v_canonicalOnly_242_);
v_res_245_ = l_Lean_SourceInfo_getRangeWithTrailing_x3f(v_canonicalOnly_boxed_244_, v_info_243_);
lean_dec(v_info_243_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_SourceInfo_nonCanonicalSynthetic(lean_object* v_x_246_){
_start:
{
switch(lean_obj_tag(v_x_246_))
{
case 0:
{
lean_object* v_pos_247_; lean_object* v_endPos_248_; uint8_t v___x_249_; lean_object* v___x_250_; 
v_pos_247_ = lean_ctor_get(v_x_246_, 1);
lean_inc(v_pos_247_);
v_endPos_248_ = lean_ctor_get(v_x_246_, 3);
lean_inc(v_endPos_248_);
lean_dec_ref_known(v_x_246_, 4);
v___x_249_ = 0;
v___x_250_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_250_, 0, v_pos_247_);
lean_ctor_set(v___x_250_, 1, v_endPos_248_);
lean_ctor_set_uint8(v___x_250_, sizeof(void*)*2, v___x_249_);
return v___x_250_;
}
case 1:
{
lean_object* v_pos_251_; lean_object* v_endPos_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_260_; 
v_pos_251_ = lean_ctor_get(v_x_246_, 0);
v_endPos_252_ = lean_ctor_get(v_x_246_, 1);
v_isSharedCheck_260_ = !lean_is_exclusive(v_x_246_);
if (v_isSharedCheck_260_ == 0)
{
v___x_254_ = v_x_246_;
v_isShared_255_ = v_isSharedCheck_260_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_endPos_252_);
lean_inc(v_pos_251_);
lean_dec(v_x_246_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_260_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
uint8_t v___x_256_; lean_object* v___x_258_; 
v___x_256_ = 0;
if (v_isShared_255_ == 0)
{
v___x_258_ = v___x_254_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_pos_251_);
lean_ctor_set(v_reuseFailAlloc_259_, 1, v_endPos_252_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
lean_ctor_set_uint8(v___x_258_, sizeof(void*)*2, v___x_256_);
return v___x_258_;
}
}
}
default: 
{
return v_x_246_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqSourceInfo__lean_beq(lean_object* v_x_261_, lean_object* v_x_262_){
_start:
{
switch(lean_obj_tag(v_x_261_))
{
case 0:
{
if (lean_obj_tag(v_x_262_) == 0)
{
lean_object* v_leading_263_; lean_object* v_pos_264_; lean_object* v_trailing_265_; lean_object* v_endPos_266_; lean_object* v_leading_267_; lean_object* v_pos_268_; lean_object* v_trailing_269_; lean_object* v_endPos_270_; uint8_t v___x_271_; 
v_leading_263_ = lean_ctor_get(v_x_261_, 0);
lean_inc_ref(v_leading_263_);
v_pos_264_ = lean_ctor_get(v_x_261_, 1);
lean_inc(v_pos_264_);
v_trailing_265_ = lean_ctor_get(v_x_261_, 2);
lean_inc_ref(v_trailing_265_);
v_endPos_266_ = lean_ctor_get(v_x_261_, 3);
lean_inc(v_endPos_266_);
lean_dec_ref_known(v_x_261_, 4);
v_leading_267_ = lean_ctor_get(v_x_262_, 0);
lean_inc_ref(v_leading_267_);
v_pos_268_ = lean_ctor_get(v_x_262_, 1);
lean_inc(v_pos_268_);
v_trailing_269_ = lean_ctor_get(v_x_262_, 2);
lean_inc_ref(v_trailing_269_);
v_endPos_270_ = lean_ctor_get(v_x_262_, 3);
lean_inc(v_endPos_270_);
lean_dec_ref_known(v_x_262_, 4);
v___x_271_ = l_Substring_Raw_beq(v_leading_263_, v_leading_267_);
if (v___x_271_ == 0)
{
lean_dec(v_endPos_270_);
lean_dec_ref(v_trailing_269_);
lean_dec(v_pos_268_);
lean_dec(v_endPos_266_);
lean_dec_ref(v_trailing_265_);
lean_dec(v_pos_264_);
return v___x_271_;
}
else
{
uint8_t v_decide_272_; 
v_decide_272_ = lean_nat_dec_eq(v_pos_264_, v_pos_268_);
lean_dec(v_pos_268_);
lean_dec(v_pos_264_);
if (v_decide_272_ == 0)
{
lean_dec(v_endPos_270_);
lean_dec_ref(v_trailing_269_);
lean_dec(v_endPos_266_);
lean_dec_ref(v_trailing_265_);
return v_decide_272_;
}
else
{
uint8_t v___x_273_; 
v___x_273_ = l_Substring_Raw_beq(v_trailing_265_, v_trailing_269_);
if (v___x_273_ == 0)
{
lean_dec(v_endPos_270_);
lean_dec(v_endPos_266_);
return v___x_273_;
}
else
{
uint8_t v_decide_274_; 
v_decide_274_ = lean_nat_dec_eq(v_endPos_266_, v_endPos_270_);
lean_dec(v_endPos_270_);
lean_dec(v_endPos_266_);
return v_decide_274_;
}
}
}
}
else
{
uint8_t v___x_275_; 
lean_dec_ref_known(v_x_261_, 4);
lean_dec(v_x_262_);
v___x_275_ = 0;
return v___x_275_;
}
}
case 1:
{
if (lean_obj_tag(v_x_262_) == 1)
{
lean_object* v_pos_276_; lean_object* v_endPos_277_; uint8_t v_canonical_278_; lean_object* v_pos_279_; lean_object* v_endPos_280_; uint8_t v_canonical_281_; uint8_t v_decide_282_; 
v_pos_276_ = lean_ctor_get(v_x_261_, 0);
lean_inc(v_pos_276_);
v_endPos_277_ = lean_ctor_get(v_x_261_, 1);
lean_inc(v_endPos_277_);
v_canonical_278_ = lean_ctor_get_uint8(v_x_261_, sizeof(void*)*2);
lean_dec_ref_known(v_x_261_, 2);
v_pos_279_ = lean_ctor_get(v_x_262_, 0);
lean_inc(v_pos_279_);
v_endPos_280_ = lean_ctor_get(v_x_262_, 1);
lean_inc(v_endPos_280_);
v_canonical_281_ = lean_ctor_get_uint8(v_x_262_, sizeof(void*)*2);
lean_dec_ref_known(v_x_262_, 2);
v_decide_282_ = lean_nat_dec_eq(v_pos_276_, v_pos_279_);
lean_dec(v_pos_279_);
lean_dec(v_pos_276_);
if (v_decide_282_ == 0)
{
lean_dec(v_endPos_280_);
lean_dec(v_endPos_277_);
return v_decide_282_;
}
else
{
uint8_t v_decide_283_; 
v_decide_283_ = lean_nat_dec_eq(v_endPos_277_, v_endPos_280_);
lean_dec(v_endPos_280_);
lean_dec(v_endPos_277_);
if (v_decide_283_ == 0)
{
return v_decide_283_;
}
else
{
if (v_canonical_281_ == 0)
{
if (v_canonical_278_ == 0)
{
return v_decide_283_;
}
else
{
return v_canonical_281_;
}
}
else
{
return v_canonical_278_;
}
}
}
}
else
{
uint8_t v___x_284_; 
lean_dec_ref_known(v_x_261_, 2);
lean_dec(v_x_262_);
v___x_284_ = 0;
return v___x_284_;
}
}
default: 
{
if (lean_obj_tag(v_x_262_) == 2)
{
uint8_t v___x_285_; 
v___x_285_ = 1;
return v___x_285_;
}
else
{
uint8_t v___x_286_; 
lean_dec(v_x_262_);
v___x_286_ = 0;
return v___x_286_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqSourceInfo__lean_beq___boxed(lean_object* v_x_287_, lean_object* v_x_288_){
_start:
{
uint8_t v_res_289_; lean_object* v_r_290_; 
v_res_289_ = l_Lean_instBEqSourceInfo__lean_beq(v_x_287_, v_x_288_);
v_r_290_ = lean_box(v_res_289_);
return v_r_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing___redArg(){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing___redArg___boxed(lean_object* v___dummy_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_Lean_unreachIsNodeMissing___redArg();
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeMissing(lean_object* v_00_u03b2_296_, lean_object* v_a_297_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___redArg(){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___redArg___boxed(lean_object* v___dummy_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Lean_unreachIsNodeAtom___redArg();
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom(lean_object* v_00_u03b2_301_, lean_object* v_info_302_, lean_object* v_val_303_, lean_object* v_a_304_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeAtom___boxed(lean_object* v_00_u03b2_305_, lean_object* v_info_306_, lean_object* v_val_307_, lean_object* v_a_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lean_unreachIsNodeAtom(v_00_u03b2_305_, v_info_306_, v_val_307_, v_a_308_);
lean_dec_ref(v_val_307_);
lean_dec(v_info_306_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___redArg(){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___redArg___boxed(lean_object* v___dummy_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l_Lean_unreachIsNodeIdent___redArg();
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent(lean_object* v_00_u03b2_313_, lean_object* v_info_314_, lean_object* v_rawVal_315_, lean_object* v_val_316_, lean_object* v_preresolved_317_, lean_object* v_a_318_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_unreachIsNodeIdent___boxed(lean_object* v_00_u03b2_319_, lean_object* v_info_320_, lean_object* v_rawVal_321_, lean_object* v_val_322_, lean_object* v_preresolved_323_, lean_object* v_a_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Lean_unreachIsNodeIdent(v_00_u03b2_319_, v_info_320_, v_rawVal_321_, v_val_322_, v_preresolved_323_, v_a_324_);
lean_dec(v_preresolved_323_);
lean_dec(v_val_322_);
lean_dec_ref(v_rawVal_321_);
lean_dec(v_info_320_);
return v_res_325_;
}
}
LEAN_EXPORT uint8_t l_Lean_isLitKind(lean_object* v_k_341_){
_start:
{
lean_object* v___x_342_; uint8_t v___x_343_; 
v___x_342_ = ((lean_object*)(l_Lean_isLitKind___closed__1));
v___x_343_ = lean_name_eq(v_k_341_, v___x_342_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_344_ = ((lean_object*)(l_Lean_isLitKind___closed__3));
v___x_345_ = lean_name_eq(v_k_341_, v___x_344_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = ((lean_object*)(l_Lean_isLitKind___closed__5));
v___x_347_ = lean_name_eq(v_k_341_, v___x_346_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_348_ = ((lean_object*)(l_Lean_isLitKind___closed__7));
v___x_349_ = lean_name_eq(v_k_341_, v___x_348_);
if (v___x_349_ == 0)
{
lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_350_ = ((lean_object*)(l_Lean_isLitKind___closed__9));
v___x_351_ = lean_name_eq(v_k_341_, v___x_350_);
return v___x_351_;
}
else
{
return v___x_349_;
}
}
else
{
return v___x_347_;
}
}
else
{
return v___x_345_;
}
}
else
{
return v___x_343_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isLitKind___boxed(lean_object* v_k_352_){
_start:
{
uint8_t v_res_353_; lean_object* v_r_354_; 
v_res_353_ = l_Lean_isLitKind(v_k_352_);
lean_dec(v_k_352_);
v_r_354_ = lean_box(v_res_353_);
return v_r_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getKind(lean_object* v_n_355_){
_start:
{
lean_object* v_kind_356_; 
v_kind_356_ = lean_ctor_get(v_n_355_, 1);
lean_inc(v_kind_356_);
return v_kind_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getKind___boxed(lean_object* v_n_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lean_SyntaxNode_getKind(v_n_357_);
lean_dec(v_n_357_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_withArgs___redArg(lean_object* v_n_359_, lean_object* v_fn_360_){
_start:
{
lean_object* v_args_361_; lean_object* v___x_362_; 
v_args_361_ = lean_ctor_get(v_n_359_, 2);
lean_inc_ref(v_args_361_);
lean_dec(v_n_359_);
v___x_362_ = lean_apply_1(v_fn_360_, v_args_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_withArgs(lean_object* v_00_u03b2_363_, lean_object* v_n_364_, lean_object* v_fn_365_){
_start:
{
lean_object* v_args_366_; lean_object* v___x_367_; 
v_args_366_ = lean_ctor_get(v_n_364_, 2);
lean_inc_ref(v_args_366_);
lean_dec(v_n_364_);
v___x_367_ = lean_apply_1(v_fn_365_, v_args_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getNumArgs(lean_object* v_n_368_){
_start:
{
lean_object* v_args_369_; lean_object* v___x_370_; 
v_args_369_ = lean_ctor_get(v_n_368_, 2);
v___x_370_ = lean_array_get_size(v_args_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getNumArgs___boxed(lean_object* v_n_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lean_SyntaxNode_getNumArgs(v_n_371_);
lean_dec(v_n_371_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArg(lean_object* v_n_373_, lean_object* v_i_374_){
_start:
{
lean_object* v_args_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v_args_375_ = lean_ctor_get(v_n_373_, 2);
v___x_376_ = lean_box(0);
v___x_377_ = lean_array_get_borrowed(v___x_376_, v_args_375_, v_i_374_);
lean_inc(v___x_377_);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArg___boxed(lean_object* v_n_378_, lean_object* v_i_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_SyntaxNode_getArg(v_n_378_, v_i_379_);
lean_dec(v_i_379_);
lean_dec(v_n_378_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArgs(lean_object* v_n_381_){
_start:
{
lean_object* v_args_382_; 
v_args_382_ = lean_ctor_get(v_n_381_, 2);
lean_inc_ref(v_args_382_);
return v_args_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getArgs___boxed(lean_object* v_n_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_Lean_SyntaxNode_getArgs(v_n_383_);
lean_dec(v_n_383_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_modifyArgs(lean_object* v_n_385_, lean_object* v_fn_386_){
_start:
{
lean_object* v_info_387_; lean_object* v_kind_388_; lean_object* v_args_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_397_; 
v_info_387_ = lean_ctor_get(v_n_385_, 0);
v_kind_388_ = lean_ctor_get(v_n_385_, 1);
v_args_389_ = lean_ctor_get(v_n_385_, 2);
v_isSharedCheck_397_ = !lean_is_exclusive(v_n_385_);
if (v_isSharedCheck_397_ == 0)
{
v___x_391_ = v_n_385_;
v_isShared_392_ = v_isSharedCheck_397_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_args_389_);
lean_inc(v_kind_388_);
lean_inc(v_info_387_);
lean_dec(v_n_385_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_397_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_393_; lean_object* v___x_395_; 
v___x_393_ = lean_apply_1(v_fn_386_, v_args_389_);
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 2, v___x_393_);
v___x_395_ = v___x_391_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_info_387_);
lean_ctor_set(v_reuseFailAlloc_396_, 1, v_kind_388_);
lean_ctor_set(v_reuseFailAlloc_396_, 2, v___x_393_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Syntax_structRangeEq_spec__0(lean_object* v_x_398_, lean_object* v_x_399_){
_start:
{
if (lean_obj_tag(v_x_398_) == 0)
{
if (lean_obj_tag(v_x_399_) == 0)
{
uint8_t v___x_400_; 
v___x_400_ = 1;
return v___x_400_;
}
else
{
uint8_t v___x_401_; 
v___x_401_ = 0;
return v___x_401_;
}
}
else
{
if (lean_obj_tag(v_x_399_) == 0)
{
uint8_t v___x_402_; 
v___x_402_ = 0;
return v___x_402_;
}
else
{
lean_object* v_val_403_; lean_object* v_val_404_; uint8_t v___x_405_; 
v_val_403_ = lean_ctor_get(v_x_398_, 0);
v_val_404_ = lean_ctor_get(v_x_399_, 0);
v___x_405_ = l_Lean_Syntax_instBEqRange_beq(v_val_403_, v_val_404_);
return v___x_405_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Syntax_structRangeEq_spec__0___boxed(lean_object* v_x_406_, lean_object* v_x_407_){
_start:
{
uint8_t v_res_408_; lean_object* v_r_409_; 
v_res_408_ = l_instBEqOption_beq___at___00Lean_Syntax_structRangeEq_spec__0(v_x_406_, v_x_407_);
lean_dec(v_x_407_);
lean_dec(v_x_406_);
v_r_409_ = lean_box(v_res_408_);
return v_r_409_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2(lean_object* v_x_410_, lean_object* v_x_411_){
_start:
{
if (lean_obj_tag(v_x_410_) == 0)
{
if (lean_obj_tag(v_x_411_) == 0)
{
uint8_t v___x_412_; 
v___x_412_ = 1;
return v___x_412_;
}
else
{
uint8_t v___x_413_; 
v___x_413_ = 0;
return v___x_413_;
}
}
else
{
if (lean_obj_tag(v_x_411_) == 0)
{
uint8_t v___x_414_; 
v___x_414_ = 0;
return v___x_414_;
}
else
{
lean_object* v_head_415_; lean_object* v_tail_416_; lean_object* v_head_417_; lean_object* v_tail_418_; uint8_t v___x_419_; 
v_head_415_ = lean_ctor_get(v_x_410_, 0);
v_tail_416_ = lean_ctor_get(v_x_410_, 1);
v_head_417_ = lean_ctor_get(v_x_411_, 0);
v_tail_418_ = lean_ctor_get(v_x_411_, 1);
v___x_419_ = l_Lean_Syntax_instBEqPreresolved_beq(v_head_415_, v_head_417_);
if (v___x_419_ == 0)
{
return v___x_419_;
}
else
{
v_x_410_ = v_tail_416_;
v_x_411_ = v_tail_418_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2___boxed(lean_object* v_x_421_, lean_object* v_x_422_){
_start:
{
uint8_t v_res_423_; lean_object* v_r_424_; 
v_res_423_ = l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2(v_x_421_, v_x_422_);
lean_dec(v_x_422_);
lean_dec(v_x_421_);
v_r_424_ = lean_box(v_res_423_);
return v_r_424_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEq(lean_object* v_x_425_, lean_object* v_x_426_){
_start:
{
switch(lean_obj_tag(v_x_425_))
{
case 0:
{
if (lean_obj_tag(v_x_426_) == 0)
{
uint8_t v___x_427_; 
v___x_427_ = 1;
return v___x_427_;
}
else
{
uint8_t v___x_428_; 
lean_dec(v_x_426_);
v___x_428_ = 0;
return v___x_428_;
}
}
case 1:
{
if (lean_obj_tag(v_x_426_) == 1)
{
lean_object* v_info_429_; lean_object* v_kind_430_; lean_object* v_args_431_; lean_object* v_info_432_; lean_object* v_kind_433_; lean_object* v_args_434_; uint8_t v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; uint8_t v___x_438_; 
v_info_429_ = lean_ctor_get(v_x_425_, 0);
lean_inc(v_info_429_);
v_kind_430_ = lean_ctor_get(v_x_425_, 1);
lean_inc(v_kind_430_);
v_args_431_ = lean_ctor_get(v_x_425_, 2);
lean_inc_ref(v_args_431_);
lean_dec_ref_known(v_x_425_, 3);
v_info_432_ = lean_ctor_get(v_x_426_, 0);
lean_inc(v_info_432_);
v_kind_433_ = lean_ctor_get(v_x_426_, 1);
lean_inc(v_kind_433_);
v_args_434_ = lean_ctor_get(v_x_426_, 2);
lean_inc_ref(v_args_434_);
lean_dec_ref_known(v_x_426_, 3);
v___x_435_ = 0;
v___x_436_ = l_Lean_SourceInfo_getRange_x3f(v___x_435_, v_info_429_);
lean_dec(v_info_429_);
v___x_437_ = l_Lean_SourceInfo_getRange_x3f(v___x_435_, v_info_432_);
lean_dec(v_info_432_);
v___x_438_ = l_instBEqOption_beq___at___00Lean_Syntax_structRangeEq_spec__0(v___x_436_, v___x_437_);
lean_dec(v___x_437_);
lean_dec(v___x_436_);
if (v___x_438_ == 0)
{
lean_dec_ref(v_args_434_);
lean_dec(v_kind_433_);
lean_dec_ref(v_args_431_);
lean_dec(v_kind_430_);
return v___x_438_;
}
else
{
uint8_t v___x_439_; 
v___x_439_ = lean_name_eq(v_kind_430_, v_kind_433_);
lean_dec(v_kind_433_);
lean_dec(v_kind_430_);
if (v___x_439_ == 0)
{
lean_dec_ref(v_args_434_);
lean_dec_ref(v_args_431_);
return v___x_439_;
}
else
{
lean_object* v___x_440_; lean_object* v___x_441_; uint8_t v___x_442_; 
v___x_440_ = lean_array_get_size(v_args_431_);
v___x_441_ = lean_array_get_size(v_args_434_);
v___x_442_ = lean_nat_dec_eq(v___x_440_, v___x_441_);
if (v___x_442_ == 0)
{
lean_dec_ref(v_args_434_);
lean_dec_ref(v_args_431_);
return v___x_442_;
}
else
{
uint8_t v___x_443_; 
v___x_443_ = l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___redArg(v_args_431_, v_args_434_, v___x_440_);
lean_dec_ref(v_args_434_);
lean_dec_ref(v_args_431_);
return v___x_443_;
}
}
}
}
else
{
uint8_t v___x_444_; 
lean_dec_ref_known(v_x_425_, 3);
lean_dec(v_x_426_);
v___x_444_ = 0;
return v___x_444_;
}
}
case 2:
{
if (lean_obj_tag(v_x_426_) == 2)
{
lean_object* v_info_445_; lean_object* v_val_446_; lean_object* v_info_447_; lean_object* v_val_448_; uint8_t v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; uint8_t v___x_452_; 
v_info_445_ = lean_ctor_get(v_x_425_, 0);
lean_inc(v_info_445_);
v_val_446_ = lean_ctor_get(v_x_425_, 1);
lean_inc_ref(v_val_446_);
lean_dec_ref_known(v_x_425_, 2);
v_info_447_ = lean_ctor_get(v_x_426_, 0);
lean_inc(v_info_447_);
v_val_448_ = lean_ctor_get(v_x_426_, 1);
lean_inc_ref(v_val_448_);
lean_dec_ref_known(v_x_426_, 2);
v___x_449_ = 0;
v___x_450_ = l_Lean_SourceInfo_getRange_x3f(v___x_449_, v_info_445_);
lean_dec(v_info_445_);
v___x_451_ = l_Lean_SourceInfo_getRange_x3f(v___x_449_, v_info_447_);
lean_dec(v_info_447_);
v___x_452_ = l_instBEqOption_beq___at___00Lean_Syntax_structRangeEq_spec__0(v___x_450_, v___x_451_);
lean_dec(v___x_451_);
lean_dec(v___x_450_);
if (v___x_452_ == 0)
{
lean_dec_ref(v_val_448_);
lean_dec_ref(v_val_446_);
return v___x_452_;
}
else
{
uint8_t v___x_453_; 
v___x_453_ = lean_string_dec_eq(v_val_446_, v_val_448_);
lean_dec_ref(v_val_448_);
lean_dec_ref(v_val_446_);
return v___x_453_;
}
}
else
{
uint8_t v___x_454_; 
lean_dec_ref_known(v_x_425_, 2);
lean_dec(v_x_426_);
v___x_454_ = 0;
return v___x_454_;
}
}
default: 
{
if (lean_obj_tag(v_x_426_) == 3)
{
lean_object* v_info_455_; lean_object* v_rawVal_456_; lean_object* v_val_457_; lean_object* v_preresolved_458_; lean_object* v_info_459_; lean_object* v_rawVal_460_; lean_object* v_val_461_; lean_object* v_preresolved_462_; uint8_t v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; uint8_t v___x_466_; 
v_info_455_ = lean_ctor_get(v_x_425_, 0);
lean_inc(v_info_455_);
v_rawVal_456_ = lean_ctor_get(v_x_425_, 1);
lean_inc_ref(v_rawVal_456_);
v_val_457_ = lean_ctor_get(v_x_425_, 2);
lean_inc(v_val_457_);
v_preresolved_458_ = lean_ctor_get(v_x_425_, 3);
lean_inc(v_preresolved_458_);
lean_dec_ref_known(v_x_425_, 4);
v_info_459_ = lean_ctor_get(v_x_426_, 0);
lean_inc(v_info_459_);
v_rawVal_460_ = lean_ctor_get(v_x_426_, 1);
lean_inc_ref(v_rawVal_460_);
v_val_461_ = lean_ctor_get(v_x_426_, 2);
lean_inc(v_val_461_);
v_preresolved_462_ = lean_ctor_get(v_x_426_, 3);
lean_inc(v_preresolved_462_);
lean_dec_ref_known(v_x_426_, 4);
v___x_463_ = 0;
v___x_464_ = l_Lean_SourceInfo_getRange_x3f(v___x_463_, v_info_455_);
lean_dec(v_info_455_);
v___x_465_ = l_Lean_SourceInfo_getRange_x3f(v___x_463_, v_info_459_);
lean_dec(v_info_459_);
v___x_466_ = l_instBEqOption_beq___at___00Lean_Syntax_structRangeEq_spec__0(v___x_464_, v___x_465_);
lean_dec(v___x_465_);
lean_dec(v___x_464_);
if (v___x_466_ == 0)
{
lean_dec(v_preresolved_462_);
lean_dec(v_val_461_);
lean_dec_ref(v_rawVal_460_);
lean_dec(v_preresolved_458_);
lean_dec(v_val_457_);
lean_dec_ref(v_rawVal_456_);
return v___x_466_;
}
else
{
uint8_t v___x_467_; 
v___x_467_ = l_Substring_Raw_beq(v_rawVal_456_, v_rawVal_460_);
if (v___x_467_ == 0)
{
lean_dec(v_preresolved_462_);
lean_dec(v_val_461_);
lean_dec(v_preresolved_458_);
lean_dec(v_val_457_);
return v___x_467_;
}
else
{
uint8_t v___x_468_; 
v___x_468_ = lean_name_eq(v_val_457_, v_val_461_);
lean_dec(v_val_461_);
lean_dec(v_val_457_);
if (v___x_468_ == 0)
{
lean_dec(v_preresolved_462_);
lean_dec(v_preresolved_458_);
return v___x_468_;
}
else
{
uint8_t v___x_469_; 
v___x_469_ = l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2(v_preresolved_458_, v_preresolved_462_);
lean_dec(v_preresolved_462_);
lean_dec(v_preresolved_458_);
return v___x_469_;
}
}
}
}
else
{
uint8_t v___x_470_; 
lean_dec_ref_known(v_x_425_, 4);
lean_dec(v_x_426_);
v___x_470_ = 0;
return v___x_470_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___redArg(lean_object* v_xs_471_, lean_object* v_ys_472_, lean_object* v_x_473_){
_start:
{
lean_object* v_zero_474_; uint8_t v_isZero_475_; 
v_zero_474_ = lean_unsigned_to_nat(0u);
v_isZero_475_ = lean_nat_dec_eq(v_x_473_, v_zero_474_);
if (v_isZero_475_ == 1)
{
lean_dec(v_x_473_);
return v_isZero_475_;
}
else
{
lean_object* v_one_476_; lean_object* v_n_477_; lean_object* v___x_478_; lean_object* v___x_479_; uint8_t v___x_480_; 
v_one_476_ = lean_unsigned_to_nat(1u);
v_n_477_ = lean_nat_sub(v_x_473_, v_one_476_);
lean_dec(v_x_473_);
v___x_478_ = lean_array_fget_borrowed(v_xs_471_, v_n_477_);
v___x_479_ = lean_array_fget_borrowed(v_ys_472_, v_n_477_);
lean_inc(v___x_479_);
lean_inc(v___x_478_);
v___x_480_ = l_Lean_Syntax_structRangeEq(v___x_478_, v___x_479_);
if (v___x_480_ == 0)
{
lean_dec(v_n_477_);
return v___x_480_;
}
else
{
v_x_473_ = v_n_477_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___redArg___boxed(lean_object* v_xs_482_, lean_object* v_ys_483_, lean_object* v_x_484_){
_start:
{
uint8_t v_res_485_; lean_object* v_r_486_; 
v_res_485_ = l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___redArg(v_xs_482_, v_ys_483_, v_x_484_);
lean_dec_ref(v_ys_483_);
lean_dec_ref(v_xs_482_);
v_r_486_ = lean_box(v_res_485_);
return v_r_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEq___boxed(lean_object* v_x_487_, lean_object* v_x_488_){
_start:
{
uint8_t v_res_489_; lean_object* v_r_490_; 
v_res_489_ = l_Lean_Syntax_structRangeEq(v_x_487_, v_x_488_);
v_r_490_ = lean_box(v_res_489_);
return v_r_490_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1(lean_object* v_xs_491_, lean_object* v_ys_492_, lean_object* v_hsz_493_, lean_object* v_x_494_, lean_object* v_x_495_){
_start:
{
uint8_t v___x_496_; 
v___x_496_ = l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___redArg(v_xs_491_, v_ys_492_, v_x_494_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1___boxed(lean_object* v_xs_497_, lean_object* v_ys_498_, lean_object* v_hsz_499_, lean_object* v_x_500_, lean_object* v_x_501_){
_start:
{
uint8_t v_res_502_; lean_object* v_r_503_; 
v_res_502_ = l_Array_isEqvAux___at___00Lean_Syntax_structRangeEq_spec__1(v_xs_497_, v_ys_498_, v_hsz_499_, v_x_500_, v_x_501_);
lean_dec_ref(v_ys_498_);
lean_dec_ref(v_xs_497_);
v_r_503_ = lean_box(v_res_502_);
return v_r_503_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0(uint8_t v___x_504_, lean_object* v_x_505_){
_start:
{
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0___boxed(lean_object* v___x_506_, lean_object* v_x_507_){
_start:
{
uint8_t v___x_113__boxed_508_; uint8_t v_res_509_; lean_object* v_r_510_; 
v___x_113__boxed_508_ = lean_unbox(v___x_506_);
v_res_509_ = l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0(v___x_113__boxed_508_, v_x_507_);
v_r_510_ = lean_box(v_res_509_);
return v_r_510_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_structRangeEqWithTraceReuse(lean_object* v_opts_520_, lean_object* v_stx1_521_, lean_object* v_stx2_522_){
_start:
{
uint8_t v___x_523_; uint8_t v___x_524_; 
lean_inc(v_stx2_522_);
lean_inc(v_stx1_521_);
v___x_523_ = l_Lean_Syntax_structRangeEq(v_stx1_521_, v_stx2_522_);
v___x_524_ = 1;
if (v___x_523_ == 0)
{
lean_object* v_map_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v_map_525_ = lean_ctor_get(v_opts_520_, 0);
v___x_526_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3));
v___x_527_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_525_, v___x_526_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_dec(v_stx2_522_);
lean_dec(v_stx1_521_);
return v___x_523_;
}
else
{
lean_object* v_val_528_; 
v_val_528_ = lean_ctor_get(v___x_527_, 0);
lean_inc(v_val_528_);
lean_dec_ref_known(v___x_527_, 1);
if (lean_obj_tag(v_val_528_) == 1)
{
uint8_t v_v_529_; 
v_v_529_ = lean_ctor_get_uint8(v_val_528_, 0);
lean_dec_ref_known(v_val_528_, 0);
if (v_v_529_ == 0)
{
lean_dec(v_stx2_522_);
lean_dec(v_stx1_521_);
return v___x_523_;
}
else
{
lean_object* v___x_530_; lean_object* v___f_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; uint8_t v___x_545_; 
v___x_530_ = lean_box(v___x_523_);
v___f_531_ = lean_alloc_closure((void*)(l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0___boxed), 2, 1);
lean_closure_set(v___f_531_, 0, v___x_530_);
v___x_532_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__4));
v___x_533_ = lean_box(0);
v___x_534_ = l_Lean_Syntax_formatStx(v_stx1_521_, v___x_533_, v___x_524_);
v___x_535_ = l_Std_Format_defWidth;
v___x_536_ = lean_unsigned_to_nat(0u);
v___x_537_ = l_Std_Format_pretty(v___x_534_, v___x_535_, v___x_536_, v___x_536_);
v___x_538_ = lean_string_append(v___x_532_, v___x_537_);
lean_dec_ref(v___x_537_);
v___x_539_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5));
v___x_540_ = lean_string_append(v___x_538_, v___x_539_);
v___x_541_ = l_Lean_Syntax_formatStx(v_stx2_522_, v___x_533_, v___x_524_);
v___x_542_ = l_Std_Format_pretty(v___x_541_, v___x_535_, v___x_536_, v___x_536_);
v___x_543_ = lean_string_append(v___x_540_, v___x_542_);
lean_dec_ref(v___x_542_);
v___x_544_ = lean_dbg_trace(v___x_543_, v___f_531_);
v___x_545_ = lean_unbox(v___x_544_);
lean_dec(v___x_544_);
return v___x_545_;
}
}
else
{
lean_dec(v_val_528_);
lean_dec(v_stx2_522_);
lean_dec(v_stx1_521_);
return v___x_523_;
}
}
}
else
{
lean_dec(v_stx2_522_);
lean_dec(v_stx1_521_);
return v___x_524_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_structRangeEqWithTraceReuse___boxed(lean_object* v_opts_546_, lean_object* v_stx1_547_, lean_object* v_stx2_548_){
_start:
{
uint8_t v_res_549_; lean_object* v_r_550_; 
v_res_549_ = l_Lean_Syntax_structRangeEqWithTraceReuse(v_opts_546_, v_stx1_547_, v_stx2_548_);
lean_dec_ref(v_opts_546_);
v_r_550_ = lean_box(v_res_549_);
return v_r_550_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_eqWithInfo(lean_object* v_x_551_, lean_object* v_x_552_){
_start:
{
switch(lean_obj_tag(v_x_551_))
{
case 0:
{
if (lean_obj_tag(v_x_552_) == 0)
{
uint8_t v___x_553_; 
v___x_553_ = 1;
return v___x_553_;
}
else
{
uint8_t v___x_554_; 
lean_dec(v_x_552_);
v___x_554_ = 0;
return v___x_554_;
}
}
case 1:
{
if (lean_obj_tag(v_x_552_) == 1)
{
lean_object* v_info_555_; lean_object* v_kind_556_; lean_object* v_args_557_; lean_object* v_info_558_; lean_object* v_kind_559_; lean_object* v_args_560_; uint8_t v___x_561_; 
v_info_555_ = lean_ctor_get(v_x_551_, 0);
lean_inc(v_info_555_);
v_kind_556_ = lean_ctor_get(v_x_551_, 1);
lean_inc(v_kind_556_);
v_args_557_ = lean_ctor_get(v_x_551_, 2);
lean_inc_ref(v_args_557_);
lean_dec_ref_known(v_x_551_, 3);
v_info_558_ = lean_ctor_get(v_x_552_, 0);
lean_inc(v_info_558_);
v_kind_559_ = lean_ctor_get(v_x_552_, 1);
lean_inc(v_kind_559_);
v_args_560_ = lean_ctor_get(v_x_552_, 2);
lean_inc_ref(v_args_560_);
lean_dec_ref_known(v_x_552_, 3);
v___x_561_ = l_Lean_instBEqSourceInfo__lean_beq(v_info_555_, v_info_558_);
if (v___x_561_ == 0)
{
lean_dec_ref(v_args_560_);
lean_dec(v_kind_559_);
lean_dec_ref(v_args_557_);
lean_dec(v_kind_556_);
return v___x_561_;
}
else
{
uint8_t v___x_562_; 
v___x_562_ = lean_name_eq(v_kind_556_, v_kind_559_);
lean_dec(v_kind_559_);
lean_dec(v_kind_556_);
if (v___x_562_ == 0)
{
lean_dec_ref(v_args_560_);
lean_dec_ref(v_args_557_);
return v___x_562_;
}
else
{
lean_object* v___x_563_; lean_object* v___x_564_; uint8_t v___x_565_; 
v___x_563_ = lean_array_get_size(v_args_557_);
v___x_564_ = lean_array_get_size(v_args_560_);
v___x_565_ = lean_nat_dec_eq(v___x_563_, v___x_564_);
if (v___x_565_ == 0)
{
lean_dec_ref(v_args_560_);
lean_dec_ref(v_args_557_);
return v___x_565_;
}
else
{
uint8_t v___x_566_; 
v___x_566_ = l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg(v_args_557_, v_args_560_, v___x_563_);
lean_dec_ref(v_args_560_);
lean_dec_ref(v_args_557_);
return v___x_566_;
}
}
}
}
else
{
uint8_t v___x_567_; 
lean_dec_ref_known(v_x_551_, 3);
lean_dec(v_x_552_);
v___x_567_ = 0;
return v___x_567_;
}
}
case 2:
{
if (lean_obj_tag(v_x_552_) == 2)
{
lean_object* v_info_568_; lean_object* v_val_569_; lean_object* v_info_570_; lean_object* v_val_571_; uint8_t v___x_572_; 
v_info_568_ = lean_ctor_get(v_x_551_, 0);
lean_inc(v_info_568_);
v_val_569_ = lean_ctor_get(v_x_551_, 1);
lean_inc_ref(v_val_569_);
lean_dec_ref_known(v_x_551_, 2);
v_info_570_ = lean_ctor_get(v_x_552_, 0);
lean_inc(v_info_570_);
v_val_571_ = lean_ctor_get(v_x_552_, 1);
lean_inc_ref(v_val_571_);
lean_dec_ref_known(v_x_552_, 2);
v___x_572_ = l_Lean_instBEqSourceInfo__lean_beq(v_info_568_, v_info_570_);
if (v___x_572_ == 0)
{
lean_dec_ref(v_val_571_);
lean_dec_ref(v_val_569_);
return v___x_572_;
}
else
{
uint8_t v___x_573_; 
v___x_573_ = lean_string_dec_eq(v_val_569_, v_val_571_);
lean_dec_ref(v_val_571_);
lean_dec_ref(v_val_569_);
return v___x_573_;
}
}
else
{
uint8_t v___x_574_; 
lean_dec_ref_known(v_x_551_, 2);
lean_dec(v_x_552_);
v___x_574_ = 0;
return v___x_574_;
}
}
default: 
{
if (lean_obj_tag(v_x_552_) == 3)
{
lean_object* v_info_575_; lean_object* v_rawVal_576_; lean_object* v_val_577_; lean_object* v_preresolved_578_; lean_object* v_info_579_; lean_object* v_rawVal_580_; lean_object* v_val_581_; lean_object* v_preresolved_582_; uint8_t v___x_583_; 
v_info_575_ = lean_ctor_get(v_x_551_, 0);
lean_inc(v_info_575_);
v_rawVal_576_ = lean_ctor_get(v_x_551_, 1);
lean_inc_ref(v_rawVal_576_);
v_val_577_ = lean_ctor_get(v_x_551_, 2);
lean_inc(v_val_577_);
v_preresolved_578_ = lean_ctor_get(v_x_551_, 3);
lean_inc(v_preresolved_578_);
lean_dec_ref_known(v_x_551_, 4);
v_info_579_ = lean_ctor_get(v_x_552_, 0);
lean_inc(v_info_579_);
v_rawVal_580_ = lean_ctor_get(v_x_552_, 1);
lean_inc_ref(v_rawVal_580_);
v_val_581_ = lean_ctor_get(v_x_552_, 2);
lean_inc(v_val_581_);
v_preresolved_582_ = lean_ctor_get(v_x_552_, 3);
lean_inc(v_preresolved_582_);
lean_dec_ref_known(v_x_552_, 4);
v___x_583_ = l_Lean_instBEqSourceInfo__lean_beq(v_info_575_, v_info_579_);
if (v___x_583_ == 0)
{
lean_dec(v_preresolved_582_);
lean_dec(v_val_581_);
lean_dec_ref(v_rawVal_580_);
lean_dec(v_preresolved_578_);
lean_dec(v_val_577_);
lean_dec_ref(v_rawVal_576_);
return v___x_583_;
}
else
{
uint8_t v___x_584_; 
v___x_584_ = l_Substring_Raw_beq(v_rawVal_576_, v_rawVal_580_);
if (v___x_584_ == 0)
{
lean_dec(v_preresolved_582_);
lean_dec(v_val_581_);
lean_dec(v_preresolved_578_);
lean_dec(v_val_577_);
return v___x_584_;
}
else
{
uint8_t v___x_585_; 
v___x_585_ = lean_name_eq(v_val_577_, v_val_581_);
lean_dec(v_val_581_);
lean_dec(v_val_577_);
if (v___x_585_ == 0)
{
lean_dec(v_preresolved_582_);
lean_dec(v_preresolved_578_);
return v___x_585_;
}
else
{
uint8_t v___x_586_; 
v___x_586_ = l_List_beq___at___00Lean_Syntax_structRangeEq_spec__2(v_preresolved_578_, v_preresolved_582_);
lean_dec(v_preresolved_582_);
lean_dec(v_preresolved_578_);
return v___x_586_;
}
}
}
}
else
{
uint8_t v___x_587_; 
lean_dec_ref_known(v_x_551_, 4);
lean_dec(v_x_552_);
v___x_587_ = 0;
return v___x_587_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg(lean_object* v_xs_588_, lean_object* v_ys_589_, lean_object* v_x_590_){
_start:
{
lean_object* v_zero_591_; uint8_t v_isZero_592_; 
v_zero_591_ = lean_unsigned_to_nat(0u);
v_isZero_592_ = lean_nat_dec_eq(v_x_590_, v_zero_591_);
if (v_isZero_592_ == 1)
{
lean_dec(v_x_590_);
return v_isZero_592_;
}
else
{
lean_object* v_one_593_; lean_object* v_n_594_; lean_object* v___x_595_; lean_object* v___x_596_; uint8_t v___x_597_; 
v_one_593_ = lean_unsigned_to_nat(1u);
v_n_594_ = lean_nat_sub(v_x_590_, v_one_593_);
lean_dec(v_x_590_);
v___x_595_ = lean_array_fget_borrowed(v_xs_588_, v_n_594_);
v___x_596_ = lean_array_fget_borrowed(v_ys_589_, v_n_594_);
lean_inc(v___x_596_);
lean_inc(v___x_595_);
v___x_597_ = l_Lean_Syntax_eqWithInfo(v___x_595_, v___x_596_);
if (v___x_597_ == 0)
{
lean_dec(v_n_594_);
return v___x_597_;
}
else
{
v_x_590_ = v_n_594_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg___boxed(lean_object* v_xs_599_, lean_object* v_ys_600_, lean_object* v_x_601_){
_start:
{
uint8_t v_res_602_; lean_object* v_r_603_; 
v_res_602_ = l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg(v_xs_599_, v_ys_600_, v_x_601_);
lean_dec_ref(v_ys_600_);
lean_dec_ref(v_xs_599_);
v_r_603_ = lean_box(v_res_602_);
return v_r_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_eqWithInfo___boxed(lean_object* v_x_604_, lean_object* v_x_605_){
_start:
{
uint8_t v_res_606_; lean_object* v_r_607_; 
v_res_606_ = l_Lean_Syntax_eqWithInfo(v_x_604_, v_x_605_);
v_r_607_ = lean_box(v_res_606_);
return v_r_607_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0(lean_object* v_xs_608_, lean_object* v_ys_609_, lean_object* v_hsz_610_, lean_object* v_x_611_, lean_object* v_x_612_){
_start:
{
uint8_t v___x_613_; 
v___x_613_ = l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___redArg(v_xs_608_, v_ys_609_, v_x_611_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0___boxed(lean_object* v_xs_614_, lean_object* v_ys_615_, lean_object* v_hsz_616_, lean_object* v_x_617_, lean_object* v_x_618_){
_start:
{
uint8_t v_res_619_; lean_object* v_r_620_; 
v_res_619_ = l_Array_isEqvAux___at___00Lean_Syntax_eqWithInfo_spec__0(v_xs_614_, v_ys_615_, v_hsz_616_, v_x_617_, v_x_618_);
lean_dec_ref(v_ys_615_);
lean_dec_ref(v_xs_614_);
v_r_620_ = lean_box(v_res_619_);
return v_r_620_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_eqWithInfoAndTraceReuse(lean_object* v_opts_621_, lean_object* v_stx1_622_, lean_object* v_stx2_623_){
_start:
{
uint8_t v___x_624_; uint8_t v___x_625_; 
lean_inc(v_stx2_623_);
lean_inc(v_stx1_622_);
v___x_624_ = l_Lean_Syntax_eqWithInfo(v_stx1_622_, v_stx2_623_);
v___x_625_ = 1;
if (v___x_624_ == 0)
{
lean_object* v_map_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v_map_626_ = lean_ctor_get(v_opts_621_, 0);
v___x_627_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__3));
v___x_628_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_626_, v___x_627_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_dec(v_stx2_623_);
lean_dec(v_stx1_622_);
return v___x_624_;
}
else
{
lean_object* v_val_629_; 
v_val_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_val_629_);
lean_dec_ref_known(v___x_628_, 1);
if (lean_obj_tag(v_val_629_) == 1)
{
uint8_t v_v_630_; 
v_v_630_ = lean_ctor_get_uint8(v_val_629_, 0);
lean_dec_ref_known(v_val_629_, 0);
if (v_v_630_ == 0)
{
lean_dec(v_stx2_623_);
lean_dec(v_stx1_622_);
return v___x_624_;
}
else
{
lean_object* v___x_631_; lean_object* v___f_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; uint8_t v___x_646_; 
v___x_631_ = lean_box(v___x_624_);
v___f_632_ = lean_alloc_closure((void*)(l_Lean_Syntax_structRangeEqWithTraceReuse___lam__0___boxed), 2, 1);
lean_closure_set(v___f_632_, 0, v___x_631_);
v___x_633_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__4));
v___x_634_ = lean_box(0);
v___x_635_ = l_Lean_Syntax_formatStx(v_stx1_622_, v___x_634_, v___x_625_);
v___x_636_ = l_Std_Format_defWidth;
v___x_637_ = lean_unsigned_to_nat(0u);
v___x_638_ = l_Std_Format_pretty(v___x_635_, v___x_636_, v___x_637_, v___x_637_);
v___x_639_ = lean_string_append(v___x_633_, v___x_638_);
lean_dec_ref(v___x_638_);
v___x_640_ = ((lean_object*)(l_Lean_Syntax_structRangeEqWithTraceReuse___closed__5));
v___x_641_ = lean_string_append(v___x_639_, v___x_640_);
v___x_642_ = l_Lean_Syntax_formatStx(v_stx2_623_, v___x_634_, v___x_625_);
v___x_643_ = l_Std_Format_pretty(v___x_642_, v___x_636_, v___x_637_, v___x_637_);
v___x_644_ = lean_string_append(v___x_641_, v___x_643_);
lean_dec_ref(v___x_643_);
v___x_645_ = lean_dbg_trace(v___x_644_, v___f_632_);
v___x_646_ = lean_unbox(v___x_645_);
lean_dec(v___x_645_);
return v___x_646_;
}
}
else
{
lean_dec(v_val_629_);
lean_dec(v_stx2_623_);
lean_dec(v_stx1_622_);
return v___x_624_;
}
}
}
else
{
lean_dec(v_stx2_623_);
lean_dec(v_stx1_622_);
return v___x_625_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_eqWithInfoAndTraceReuse___boxed(lean_object* v_opts_647_, lean_object* v_stx1_648_, lean_object* v_stx2_649_){
_start:
{
uint8_t v_res_650_; lean_object* v_r_651_; 
v_res_650_ = l_Lean_Syntax_eqWithInfoAndTraceReuse(v_opts_647_, v_stx1_648_, v_stx2_649_);
lean_dec_ref(v_opts_647_);
v_r_651_ = lean_box(v_res_650_);
return v_r_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAtomVal(lean_object* v_x_653_){
_start:
{
if (lean_obj_tag(v_x_653_) == 2)
{
lean_object* v_val_654_; 
v_val_654_ = lean_ctor_get(v_x_653_, 1);
lean_inc_ref(v_val_654_);
return v_val_654_;
}
else
{
lean_object* v___x_655_; 
v___x_655_ = ((lean_object*)(l_Lean_Syntax_getAtomVal___closed__0));
return v___x_655_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAtomVal___boxed(lean_object* v_x_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Lean_Syntax_getAtomVal(v_x_656_);
lean_dec(v_x_656_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setAtomVal(lean_object* v_x_658_, lean_object* v_x_659_){
_start:
{
if (lean_obj_tag(v_x_658_) == 2)
{
lean_object* v_info_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_667_; 
v_info_660_ = lean_ctor_get(v_x_658_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v_x_658_);
if (v_isSharedCheck_667_ == 0)
{
lean_object* v_unused_668_; 
v_unused_668_ = lean_ctor_get(v_x_658_, 1);
lean_dec(v_unused_668_);
v___x_662_ = v_x_658_;
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_info_660_);
lean_dec(v_x_658_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_665_; 
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 1, v_x_659_);
v___x_665_ = v___x_662_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_info_660_);
lean_ctor_set(v_reuseFailAlloc_666_, 1, v_x_659_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
else
{
lean_dec_ref(v_x_659_);
return v_x_658_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNode___redArg(lean_object* v_stx_669_, lean_object* v_hyes_670_, lean_object* v_hno_671_){
_start:
{
if (lean_obj_tag(v_stx_669_) == 1)
{
lean_object* v___x_672_; 
lean_dec(v_hno_671_);
v___x_672_ = lean_apply_1(v_hyes_670_, v_stx_669_);
return v___x_672_;
}
else
{
lean_object* v___x_673_; lean_object* v___x_674_; 
lean_dec(v_hyes_670_);
lean_dec(v_stx_669_);
v___x_673_ = lean_box(0);
v___x_674_ = lean_apply_1(v_hno_671_, v___x_673_);
return v___x_674_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNode(lean_object* v_00_u03b2_675_, lean_object* v_stx_676_, lean_object* v_hyes_677_, lean_object* v_hno_678_){
_start:
{
if (lean_obj_tag(v_stx_676_) == 1)
{
lean_object* v___x_679_; 
lean_dec(v_hno_678_);
v___x_679_ = lean_apply_1(v_hyes_677_, v_stx_676_);
return v___x_679_;
}
else
{
lean_object* v___x_680_; lean_object* v___x_681_; 
lean_dec(v_hyes_677_);
lean_dec(v_stx_676_);
v___x_680_ = lean_box(0);
v___x_681_ = lean_apply_1(v_hno_678_, v___x_680_);
return v___x_681_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___redArg(lean_object* v_stx_682_, lean_object* v_kind_683_, lean_object* v_hyes_684_, lean_object* v_hno_685_){
_start:
{
if (lean_obj_tag(v_stx_682_) == 1)
{
lean_object* v_kind_686_; uint8_t v___x_687_; 
v_kind_686_ = lean_ctor_get(v_stx_682_, 1);
v___x_687_ = lean_name_eq(v_kind_686_, v_kind_683_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; 
lean_dec_ref_known(v_stx_682_, 3);
lean_dec(v_hyes_684_);
v___x_688_ = lean_box(0);
v___x_689_ = lean_apply_1(v_hno_685_, v___x_688_);
return v___x_689_;
}
else
{
lean_object* v___x_690_; 
lean_dec(v_hno_685_);
v___x_690_ = lean_apply_1(v_hyes_684_, v_stx_682_);
return v___x_690_;
}
}
else
{
lean_object* v___x_691_; lean_object* v___x_692_; 
lean_dec(v_hyes_684_);
lean_dec(v_stx_682_);
v___x_691_ = lean_box(0);
v___x_692_ = lean_apply_1(v_hno_685_, v___x_691_);
return v___x_692_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___redArg___boxed(lean_object* v_stx_693_, lean_object* v_kind_694_, lean_object* v_hyes_695_, lean_object* v_hno_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l_Lean_Syntax_ifNodeKind___redArg(v_stx_693_, v_kind_694_, v_hyes_695_, v_hno_696_);
lean_dec(v_kind_694_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind(lean_object* v_00_u03b2_698_, lean_object* v_stx_699_, lean_object* v_kind_700_, lean_object* v_hyes_701_, lean_object* v_hno_702_){
_start:
{
if (lean_obj_tag(v_stx_699_) == 1)
{
lean_object* v_kind_703_; uint8_t v___x_704_; 
v_kind_703_ = lean_ctor_get(v_stx_699_, 1);
v___x_704_ = lean_name_eq(v_kind_703_, v_kind_700_);
if (v___x_704_ == 0)
{
lean_object* v___x_705_; lean_object* v___x_706_; 
lean_dec_ref_known(v_stx_699_, 3);
lean_dec(v_hyes_701_);
v___x_705_ = lean_box(0);
v___x_706_ = lean_apply_1(v_hno_702_, v___x_705_);
return v___x_706_;
}
else
{
lean_object* v___x_707_; 
lean_dec(v_hno_702_);
v___x_707_ = lean_apply_1(v_hyes_701_, v_stx_699_);
return v___x_707_;
}
}
else
{
lean_object* v___x_708_; lean_object* v___x_709_; 
lean_dec(v_hyes_701_);
lean_dec(v_stx_699_);
v___x_708_ = lean_box(0);
v___x_709_ = lean_apply_1(v_hno_702_, v___x_708_);
return v___x_709_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ifNodeKind___boxed(lean_object* v_00_u03b2_710_, lean_object* v_stx_711_, lean_object* v_kind_712_, lean_object* v_hyes_713_, lean_object* v_hno_714_){
_start:
{
lean_object* v_res_715_; 
v_res_715_ = l_Lean_Syntax_ifNodeKind(v_00_u03b2_710_, v_stx_711_, v_kind_712_, v_hyes_713_, v_hno_714_);
lean_dec(v_kind_712_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_asNode(lean_object* v_x_725_){
_start:
{
if (lean_obj_tag(v_x_725_) == 1)
{
lean_inc_ref(v_x_725_);
return v_x_725_;
}
else
{
lean_object* v___x_726_; 
v___x_726_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__3));
return v___x_726_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_asNode___boxed(lean_object* v_x_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l_Lean_Syntax_asNode(v_x_727_);
lean_dec(v_x_727_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getIdAt(lean_object* v_stx_729_, lean_object* v_i_730_){
_start:
{
lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_731_ = l_Lean_Syntax_getArg(v_stx_729_, v_i_730_);
v___x_732_ = l_Lean_Syntax_getId(v___x_731_);
lean_dec(v___x_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getIdAt___boxed(lean_object* v_stx_733_, lean_object* v_i_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lean_Syntax_getIdAt(v_stx_733_, v_i_734_);
lean_dec(v_i_734_);
lean_dec(v_stx_733_);
return v_res_735_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_hasIdent(lean_object* v_id_736_, lean_object* v_x_737_){
_start:
{
switch(lean_obj_tag(v_x_737_))
{
case 3:
{
lean_object* v_val_738_; uint8_t v___x_739_; 
v_val_738_ = lean_ctor_get(v_x_737_, 2);
v___x_739_ = lean_name_eq(v_id_736_, v_val_738_);
return v___x_739_;
}
case 1:
{
lean_object* v_args_740_; lean_object* v___x_741_; lean_object* v___x_742_; uint8_t v___x_743_; 
v_args_740_ = lean_ctor_get(v_x_737_, 2);
v___x_741_ = lean_unsigned_to_nat(0u);
v___x_742_ = lean_array_get_size(v_args_740_);
v___x_743_ = lean_nat_dec_lt(v___x_741_, v___x_742_);
if (v___x_743_ == 0)
{
return v___x_743_;
}
else
{
if (v___x_743_ == 0)
{
return v___x_743_;
}
else
{
size_t v___x_744_; size_t v___x_745_; uint8_t v___x_746_; 
v___x_744_ = ((size_t)0ULL);
v___x_745_ = lean_usize_of_nat(v___x_742_);
v___x_746_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0(v_id_736_, v_args_740_, v___x_744_, v___x_745_);
return v___x_746_;
}
}
}
default: 
{
uint8_t v___x_747_; 
v___x_747_ = 0;
return v___x_747_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0(lean_object* v_id_748_, lean_object* v_as_749_, size_t v_i_750_, size_t v_stop_751_){
_start:
{
uint8_t v___x_752_; 
v___x_752_ = lean_usize_dec_eq(v_i_750_, v_stop_751_);
if (v___x_752_ == 0)
{
lean_object* v___x_753_; uint8_t v___x_754_; 
v___x_753_ = lean_array_uget_borrowed(v_as_749_, v_i_750_);
v___x_754_ = l_Lean_Syntax_hasIdent(v_id_748_, v___x_753_);
if (v___x_754_ == 0)
{
size_t v___x_755_; size_t v___x_756_; 
v___x_755_ = ((size_t)1ULL);
v___x_756_ = lean_usize_add(v_i_750_, v___x_755_);
v_i_750_ = v___x_756_;
goto _start;
}
else
{
return v___x_754_;
}
}
else
{
uint8_t v___x_758_; 
v___x_758_ = 0;
return v___x_758_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0___boxed(lean_object* v_id_759_, lean_object* v_as_760_, lean_object* v_i_761_, lean_object* v_stop_762_){
_start:
{
size_t v_i_boxed_763_; size_t v_stop_boxed_764_; uint8_t v_res_765_; lean_object* v_r_766_; 
v_i_boxed_763_ = lean_unbox_usize(v_i_761_);
lean_dec(v_i_761_);
v_stop_boxed_764_ = lean_unbox_usize(v_stop_762_);
lean_dec(v_stop_762_);
v_res_765_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_hasIdent_spec__0(v_id_759_, v_as_760_, v_i_boxed_763_, v_stop_boxed_764_);
lean_dec_ref(v_as_760_);
lean_dec(v_id_759_);
v_r_766_ = lean_box(v_res_765_);
return v_r_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_hasIdent___boxed(lean_object* v_id_767_, lean_object* v_x_768_){
_start:
{
uint8_t v_res_769_; lean_object* v_r_770_; 
v_res_769_ = l_Lean_Syntax_hasIdent(v_id_767_, v_x_768_);
lean_dec(v_x_768_);
lean_dec(v_id_767_);
v_r_770_ = lean_box(v_res_769_);
return v_r_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArgs(lean_object* v_stx_771_, lean_object* v_fn_772_){
_start:
{
if (lean_obj_tag(v_stx_771_) == 1)
{
lean_object* v_info_773_; lean_object* v_kind_774_; lean_object* v_args_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_783_; 
v_info_773_ = lean_ctor_get(v_stx_771_, 0);
v_kind_774_ = lean_ctor_get(v_stx_771_, 1);
v_args_775_ = lean_ctor_get(v_stx_771_, 2);
v_isSharedCheck_783_ = !lean_is_exclusive(v_stx_771_);
if (v_isSharedCheck_783_ == 0)
{
v___x_777_ = v_stx_771_;
v_isShared_778_ = v_isSharedCheck_783_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_args_775_);
lean_inc(v_kind_774_);
lean_inc(v_info_773_);
lean_dec(v_stx_771_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_783_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_779_; lean_object* v___x_781_; 
v___x_779_ = lean_apply_1(v_fn_772_, v_args_775_);
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 2, v___x_779_);
v___x_781_ = v___x_777_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_info_773_);
lean_ctor_set(v_reuseFailAlloc_782_, 1, v_kind_774_);
lean_ctor_set(v_reuseFailAlloc_782_, 2, v___x_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
else
{
lean_dec_ref(v_fn_772_);
return v_stx_771_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArg(lean_object* v_stx_784_, lean_object* v_i_785_, lean_object* v_fn_786_){
_start:
{
if (lean_obj_tag(v_stx_784_) == 1)
{
lean_object* v_info_787_; lean_object* v_kind_788_; lean_object* v_args_789_; lean_object* v___x_790_; uint8_t v___x_791_; 
v_info_787_ = lean_ctor_get(v_stx_784_, 0);
v_kind_788_ = lean_ctor_get(v_stx_784_, 1);
v_args_789_ = lean_ctor_get(v_stx_784_, 2);
v___x_790_ = lean_array_get_size(v_args_789_);
v___x_791_ = lean_nat_dec_lt(v_i_785_, v___x_790_);
if (v___x_791_ == 0)
{
lean_dec_ref(v_fn_786_);
return v_stx_784_;
}
else
{
lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_803_; 
lean_inc_ref(v_args_789_);
lean_inc(v_kind_788_);
lean_inc(v_info_787_);
v_isSharedCheck_803_ = !lean_is_exclusive(v_stx_784_);
if (v_isSharedCheck_803_ == 0)
{
lean_object* v_unused_804_; lean_object* v_unused_805_; lean_object* v_unused_806_; 
v_unused_804_ = lean_ctor_get(v_stx_784_, 2);
lean_dec(v_unused_804_);
v_unused_805_ = lean_ctor_get(v_stx_784_, 1);
lean_dec(v_unused_805_);
v_unused_806_ = lean_ctor_get(v_stx_784_, 0);
lean_dec(v_unused_806_);
v___x_793_ = v_stx_784_;
v_isShared_794_ = v_isSharedCheck_803_;
goto v_resetjp_792_;
}
else
{
lean_dec(v_stx_784_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_803_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v_v_795_; lean_object* v___x_796_; lean_object* v_xs_x27_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_801_; 
v_v_795_ = lean_array_fget(v_args_789_, v_i_785_);
v___x_796_ = lean_box(0);
v_xs_x27_797_ = lean_array_fset(v_args_789_, v_i_785_, v___x_796_);
v___x_798_ = lean_apply_1(v_fn_786_, v_v_795_);
v___x_799_ = lean_array_fset(v_xs_x27_797_, v_i_785_, v___x_798_);
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 2, v___x_799_);
v___x_801_ = v___x_793_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_info_787_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v_kind_788_);
lean_ctor_set(v_reuseFailAlloc_802_, 2, v___x_799_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
return v___x_801_;
}
}
}
}
else
{
lean_dec_ref(v_fn_786_);
return v_stx_784_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_modifyArg___boxed(lean_object* v_stx_807_, lean_object* v_i_808_, lean_object* v_fn_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_Syntax_modifyArg(v_stx_807_, v_i_808_, v_fn_809_);
lean_dec(v_i_808_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__0(lean_object* v_info_811_, lean_object* v_kind_812_, lean_object* v_toPure_813_, lean_object* v_____do__lift_814_){
_start:
{
lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_815_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_815_, 0, v_info_811_);
lean_ctor_set(v___x_815_, 1, v_kind_812_);
lean_ctor_set(v___x_815_, 2, v_____do__lift_814_);
v___x_816_ = lean_apply_2(v_toPure_813_, lean_box(0), v___x_815_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__2(lean_object* v_toPure_817_, lean_object* v_x_818_, lean_object* v_o_819_){
_start:
{
if (lean_obj_tag(v_o_819_) == 0)
{
lean_object* v___x_820_; 
v___x_820_ = lean_apply_2(v_toPure_817_, lean_box(0), v_x_818_);
return v___x_820_;
}
else
{
lean_object* v_val_821_; lean_object* v___x_822_; 
lean_dec(v_x_818_);
v_val_821_ = lean_ctor_get(v_o_819_, 0);
lean_inc(v_val_821_);
lean_dec_ref_known(v_o_819_, 1);
v___x_822_ = lean_apply_2(v_toPure_817_, lean_box(0), v_val_821_);
return v___x_822_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg(lean_object* v_inst_823_, lean_object* v_fn_824_, lean_object* v_x_825_){
_start:
{
if (lean_obj_tag(v_x_825_) == 1)
{
lean_object* v_toApplicative_826_; lean_object* v_toBind_827_; lean_object* v_toPure_828_; lean_object* v_info_829_; lean_object* v_kind_830_; lean_object* v_args_831_; lean_object* v___f_832_; lean_object* v___f_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v_toApplicative_826_ = lean_ctor_get(v_inst_823_, 0);
v_toBind_827_ = lean_ctor_get(v_inst_823_, 1);
lean_inc_n(v_toBind_827_, 2);
v_toPure_828_ = lean_ctor_get(v_toApplicative_826_, 1);
lean_inc_n(v_toPure_828_, 2);
v_info_829_ = lean_ctor_get(v_x_825_, 0);
v_kind_830_ = lean_ctor_get(v_x_825_, 1);
v_args_831_ = lean_ctor_get(v_x_825_, 2);
lean_inc(v_kind_830_);
lean_inc(v_info_829_);
v___f_832_ = lean_alloc_closure((void*)(l_Lean_Syntax_replaceM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_832_, 0, v_info_829_);
lean_closure_set(v___f_832_, 1, v_kind_830_);
lean_closure_set(v___f_832_, 2, v_toPure_828_);
lean_inc_ref(v_args_831_);
lean_inc(v_fn_824_);
v___f_833_ = lean_alloc_closure((void*)(l_Lean_Syntax_replaceM___redArg___lam__1), 7, 6);
lean_closure_set(v___f_833_, 0, v_inst_823_);
lean_closure_set(v___f_833_, 1, v_fn_824_);
lean_closure_set(v___f_833_, 2, v_args_831_);
lean_closure_set(v___f_833_, 3, v_toBind_827_);
lean_closure_set(v___f_833_, 4, v___f_832_);
lean_closure_set(v___f_833_, 5, v_toPure_828_);
v___x_834_ = lean_apply_1(v_fn_824_, v_x_825_);
v___x_835_ = lean_apply_4(v_toBind_827_, lean_box(0), lean_box(0), v___x_834_, v___f_833_);
return v___x_835_;
}
else
{
lean_object* v_toApplicative_836_; lean_object* v_toBind_837_; lean_object* v_toPure_838_; lean_object* v___f_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
v_toApplicative_836_ = lean_ctor_get(v_inst_823_, 0);
lean_inc_ref(v_toApplicative_836_);
v_toBind_837_ = lean_ctor_get(v_inst_823_, 1);
lean_inc(v_toBind_837_);
lean_dec_ref(v_inst_823_);
v_toPure_838_ = lean_ctor_get(v_toApplicative_836_, 1);
lean_inc(v_toPure_838_);
lean_dec_ref(v_toApplicative_836_);
lean_inc(v_x_825_);
v___f_839_ = lean_alloc_closure((void*)(l_Lean_Syntax_replaceM___redArg___lam__2), 3, 2);
lean_closure_set(v___f_839_, 0, v_toPure_838_);
lean_closure_set(v___f_839_, 1, v_x_825_);
v___x_840_ = lean_apply_1(v_fn_824_, v_x_825_);
v___x_841_ = lean_apply_4(v_toBind_837_, lean_box(0), lean_box(0), v___x_840_, v___f_839_);
return v___x_841_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___redArg___lam__1(lean_object* v_inst_842_, lean_object* v_fn_843_, lean_object* v_args_844_, lean_object* v_toBind_845_, lean_object* v___f_846_, lean_object* v_toPure_847_, lean_object* v_____do__lift_848_){
_start:
{
if (lean_obj_tag(v_____do__lift_848_) == 0)
{
lean_object* v___x_849_; size_t v_sz_850_; size_t v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
lean_dec(v_toPure_847_);
lean_inc_ref(v_inst_842_);
v___x_849_ = lean_alloc_closure((void*)(l_Lean_Syntax_replaceM___redArg), 3, 2);
lean_closure_set(v___x_849_, 0, v_inst_842_);
lean_closure_set(v___x_849_, 1, v_fn_843_);
v_sz_850_ = lean_array_size(v_args_844_);
v___x_851_ = ((size_t)0ULL);
v___x_852_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_842_, v___x_849_, v_sz_850_, v___x_851_, v_args_844_);
v___x_853_ = lean_apply_4(v_toBind_845_, lean_box(0), lean_box(0), v___x_852_, v___f_846_);
return v___x_853_;
}
else
{
lean_object* v_val_854_; lean_object* v___x_855_; 
lean_dec(v___f_846_);
lean_dec(v_toBind_845_);
lean_dec_ref(v_args_844_);
lean_dec(v_fn_843_);
lean_dec_ref(v_inst_842_);
v_val_854_ = lean_ctor_get(v_____do__lift_848_, 0);
lean_inc(v_val_854_);
lean_dec_ref_known(v_____do__lift_848_, 1);
v___x_855_ = lean_apply_2(v_toPure_847_, lean_box(0), v_val_854_);
return v___x_855_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM(lean_object* v_m_856_, lean_object* v_inst_857_, lean_object* v_fn_858_, lean_object* v_x_859_){
_start:
{
lean_object* v___x_860_; 
v___x_860_ = l_Lean_Syntax_replaceM___redArg(v_inst_857_, v_fn_858_, v_x_859_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM___redArg___lam__0(lean_object* v_info_861_, lean_object* v_kind_862_, lean_object* v_fn_863_, lean_object* v_args_864_){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_865_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_865_, 0, v_info_861_);
lean_ctor_set(v___x_865_, 1, v_kind_862_);
lean_ctor_set(v___x_865_, 2, v_args_864_);
v___x_866_ = lean_apply_1(v_fn_863_, v___x_865_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM___redArg(lean_object* v_inst_867_, lean_object* v_fn_868_, lean_object* v_x_869_){
_start:
{
if (lean_obj_tag(v_x_869_) == 1)
{
lean_object* v_toBind_870_; lean_object* v_info_871_; lean_object* v_kind_872_; lean_object* v_args_873_; lean_object* v___f_874_; lean_object* v___x_875_; size_t v_sz_876_; size_t v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v_toBind_870_ = lean_ctor_get(v_inst_867_, 1);
lean_inc(v_toBind_870_);
v_info_871_ = lean_ctor_get(v_x_869_, 0);
lean_inc(v_info_871_);
v_kind_872_ = lean_ctor_get(v_x_869_, 1);
lean_inc(v_kind_872_);
v_args_873_ = lean_ctor_get(v_x_869_, 2);
lean_inc_ref(v_args_873_);
lean_dec_ref_known(v_x_869_, 3);
lean_inc(v_fn_868_);
v___f_874_ = lean_alloc_closure((void*)(l_Lean_Syntax_rewriteBottomUpM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_874_, 0, v_info_871_);
lean_closure_set(v___f_874_, 1, v_kind_872_);
lean_closure_set(v___f_874_, 2, v_fn_868_);
lean_inc_ref(v_inst_867_);
v___x_875_ = lean_alloc_closure((void*)(l_Lean_Syntax_rewriteBottomUpM___redArg), 3, 2);
lean_closure_set(v___x_875_, 0, v_inst_867_);
lean_closure_set(v___x_875_, 1, v_fn_868_);
v_sz_876_ = lean_array_size(v_args_873_);
v___x_877_ = ((size_t)0ULL);
v___x_878_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_867_, v___x_875_, v_sz_876_, v___x_877_, v_args_873_);
v___x_879_ = lean_apply_4(v_toBind_870_, lean_box(0), lean_box(0), v___x_878_, v___f_874_);
return v___x_879_;
}
else
{
lean_object* v___x_880_; 
lean_dec_ref(v_inst_867_);
v___x_880_ = lean_apply_1(v_fn_868_, v_x_869_);
return v___x_880_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM(lean_object* v_m_881_, lean_object* v_inst_882_, lean_object* v_fn_883_, lean_object* v_x_884_){
_start:
{
lean_object* v___x_885_; 
v___x_885_ = l_Lean_Syntax_rewriteBottomUpM___redArg(v_inst_882_, v_fn_883_, v_x_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUp___lam__0(lean_object* v_fn_886_, lean_object* v_x_887_){
_start:
{
lean_object* v___x_888_; 
v___x_888_ = lean_apply_1(v_fn_886_, v_x_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUp(lean_object* v_fn_908_, lean_object* v_stx_909_){
_start:
{
lean_object* v___f_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v___f_910_ = lean_alloc_closure((void*)(l_Lean_Syntax_rewriteBottomUp___lam__0), 2, 1);
lean_closure_set(v___f_910_, 0, v_fn_908_);
v___x_911_ = ((lean_object*)(l_Lean_Syntax_rewriteBottomUp___closed__9));
v___x_912_ = l_Lean_Syntax_rewriteBottomUpM___redArg(v___x_911_, v___f_910_, v_stx_909_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__0(lean_object* v_msg_913_){
_start:
{
lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_914_ = l_String_instInhabitedSlice;
v___x_915_ = lean_panic_fn_borrowed(v___x_914_, v_msg_913_);
return v___x_915_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___redArg(lean_object* v_s_916_, lean_object* v_a_917_, uint8_t v_b_918_){
_start:
{
lean_object* v_str_919_; lean_object* v_startInclusive_920_; lean_object* v_endExclusive_921_; lean_object* v___x_922_; uint8_t v_decide_923_; 
v_str_919_ = lean_ctor_get(v_s_916_, 0);
v_startInclusive_920_ = lean_ctor_get(v_s_916_, 1);
v_endExclusive_921_ = lean_ctor_get(v_s_916_, 2);
v___x_922_ = lean_nat_sub(v_endExclusive_921_, v_startInclusive_920_);
v_decide_923_ = lean_nat_dec_eq(v_a_917_, v___x_922_);
lean_dec(v___x_922_);
if (v_decide_923_ == 0)
{
uint32_t v___x_924_; lean_object* v___x_925_; uint32_t v___x_926_; uint8_t v___x_927_; 
v___x_924_ = 64;
v___x_925_ = lean_nat_add(v_startInclusive_920_, v_a_917_);
lean_dec(v_a_917_);
v___x_926_ = lean_string_utf8_get_fast(v_str_919_, v___x_925_);
v___x_927_ = lean_uint32_dec_eq(v___x_926_, v___x_924_);
if (v___x_927_ == 0)
{
lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_928_ = lean_string_utf8_next_fast(v_str_919_, v___x_925_);
lean_dec(v___x_925_);
v___x_929_ = lean_nat_sub(v___x_928_, v_startInclusive_920_);
v_a_917_ = v___x_929_;
v_b_918_ = v___x_927_;
goto _start;
}
else
{
lean_dec(v___x_925_);
return v___x_927_;
}
}
else
{
lean_dec(v_a_917_);
return v_b_918_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___redArg___boxed(lean_object* v_s_931_, lean_object* v_a_932_, lean_object* v_b_933_){
_start:
{
uint8_t v_b_boxed_934_; uint8_t v_res_935_; lean_object* v_r_936_; 
v_b_boxed_934_ = lean_unbox(v_b_933_);
v_res_935_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___redArg(v_s_931_, v_a_932_, v_b_boxed_934_);
lean_dec_ref(v_s_931_);
v_r_936_ = lean_box(v_res_935_);
return v_r_936_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1(lean_object* v_s_937_){
_start:
{
lean_object* v_searcher_938_; uint8_t v___x_939_; uint8_t v___x_940_; 
v_searcher_938_ = lean_unsigned_to_nat(0u);
v___x_939_ = 0;
v___x_940_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___redArg(v_s_937_, v_searcher_938_, v___x_939_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1___boxed(lean_object* v_s_941_){
_start:
{
uint8_t v_res_942_; lean_object* v_r_943_; 
v_res_942_ = l_String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1(v_s_941_);
lean_dec_ref(v_s_941_);
v_r_943_ = lean_box(v_res_942_);
return v_r_943_;
}
}
static lean_object* _init_l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__3(void){
_start:
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_947_ = ((lean_object*)(l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__2));
v___x_948_ = lean_unsigned_to_nat(14u);
v___x_949_ = lean_unsigned_to_nat(22u);
v___x_950_ = ((lean_object*)(l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__1));
v___x_951_ = ((lean_object*)(l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__0));
v___x_952_ = l_mkPanicMessageWithDecl(v___x_951_, v___x_950_, v___x_949_, v___x_948_, v___x_947_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2(lean_object* v_x_953_){
_start:
{
if (lean_obj_tag(v_x_953_) == 1)
{
lean_object* v_info_954_; lean_object* v_kind_955_; lean_object* v_args_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_966_; 
v_info_954_ = lean_ctor_get(v_x_953_, 0);
v_kind_955_ = lean_ctor_get(v_x_953_, 1);
v_args_956_ = lean_ctor_get(v_x_953_, 2);
v_isSharedCheck_966_ = !lean_is_exclusive(v_x_953_);
if (v_isSharedCheck_966_ == 0)
{
v___x_958_ = v_x_953_;
v_isShared_959_ = v_isSharedCheck_966_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_args_956_);
lean_inc(v_kind_955_);
lean_inc(v_info_954_);
lean_dec(v_x_953_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_966_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
size_t v_sz_960_; size_t v___x_961_; lean_object* v___x_962_; lean_object* v___x_964_; 
v_sz_960_ = lean_array_size(v_args_956_);
v___x_961_ = ((size_t)0ULL);
v___x_962_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2_spec__3(v_sz_960_, v___x_961_, v_args_956_);
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 2, v___x_962_);
v___x_964_ = v___x_958_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_info_954_);
lean_ctor_set(v_reuseFailAlloc_965_, 1, v_kind_955_);
lean_ctor_set(v_reuseFailAlloc_965_, 2, v___x_962_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
else
{
if (lean_obj_tag(v_x_953_) == 3)
{
lean_object* v_info_967_; lean_object* v_rawVal_968_; lean_object* v_val_969_; lean_object* v_preresolved_970_; uint8_t v___y_972_; lean_object* v_str_979_; lean_object* v_startPos_980_; lean_object* v_stopPos_981_; uint8_t v___x_982_; 
v_info_967_ = lean_ctor_get(v_x_953_, 0);
v_rawVal_968_ = lean_ctor_get(v_x_953_, 1);
v_val_969_ = lean_ctor_get(v_x_953_, 2);
v_preresolved_970_ = lean_ctor_get(v_x_953_, 3);
v_str_979_ = lean_ctor_get(v_rawVal_968_, 0);
v_startPos_980_ = lean_ctor_get(v_rawVal_968_, 1);
v_stopPos_981_ = lean_ctor_get(v_rawVal_968_, 2);
v___x_982_ = lean_string_is_valid_pos(v_str_979_, v_startPos_980_);
if (v___x_982_ == 0)
{
goto v___jp_975_;
}
else
{
uint8_t v___x_983_; 
v___x_983_ = lean_string_is_valid_pos(v_str_979_, v_stopPos_981_);
if (v___x_983_ == 0)
{
goto v___jp_975_;
}
else
{
uint8_t v___x_984_; 
v___x_984_ = lean_nat_dec_le(v_startPos_980_, v_stopPos_981_);
if (v___x_984_ == 0)
{
goto v___jp_975_;
}
else
{
lean_object* v___x_985_; uint8_t v___x_986_; 
lean_inc(v_stopPos_981_);
lean_inc(v_startPos_980_);
lean_inc_ref(v_str_979_);
v___x_985_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_985_, 0, v_str_979_);
lean_ctor_set(v___x_985_, 1, v_startPos_980_);
lean_ctor_set(v___x_985_, 2, v_stopPos_981_);
v___x_986_ = l_String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1(v___x_985_);
lean_dec_ref_known(v___x_985_, 3);
v___y_972_ = v___x_986_;
goto v___jp_971_;
}
}
}
v___jp_971_:
{
if (v___y_972_ == 0)
{
lean_object* v___x_973_; lean_object* v___x_974_; 
lean_inc(v_preresolved_970_);
lean_inc(v_val_969_);
lean_inc_ref(v_rawVal_968_);
lean_inc(v_info_967_);
lean_dec_ref_known(v_x_953_, 4);
v___x_973_ = l_Lean_Name_eraseMacroScopes(v_val_969_);
lean_dec(v_val_969_);
v___x_974_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_974_, 0, v_info_967_);
lean_ctor_set(v___x_974_, 1, v_rawVal_968_);
lean_ctor_set(v___x_974_, 2, v___x_973_);
lean_ctor_set(v___x_974_, 3, v_preresolved_970_);
return v___x_974_;
}
else
{
return v_x_953_;
}
}
v___jp_975_:
{
lean_object* v___x_976_; lean_object* v___x_977_; uint8_t v___x_978_; 
v___x_976_ = lean_obj_once(&l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__3, &l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__3_once, _init_l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2___closed__3);
v___x_977_ = l_panic___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__0(v___x_976_);
v___x_978_ = l_String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1(v___x_977_);
lean_dec_ref(v___x_977_);
v___y_972_ = v___x_978_;
goto v___jp_971_;
}
}
else
{
return v_x_953_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2_spec__3(size_t v_sz_987_, size_t v_i_988_, lean_object* v_bs_989_){
_start:
{
uint8_t v___x_990_; 
v___x_990_ = lean_usize_dec_lt(v_i_988_, v_sz_987_);
if (v___x_990_ == 0)
{
return v_bs_989_;
}
else
{
lean_object* v_v_991_; lean_object* v___x_992_; lean_object* v_bs_x27_993_; lean_object* v___x_994_; size_t v___x_995_; size_t v___x_996_; lean_object* v___x_997_; 
v_v_991_ = lean_array_uget(v_bs_989_, v_i_988_);
v___x_992_ = lean_unsigned_to_nat(0u);
v_bs_x27_993_ = lean_array_uset(v_bs_989_, v_i_988_, v___x_992_);
v___x_994_ = l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2(v_v_991_);
v___x_995_ = ((size_t)1ULL);
v___x_996_ = lean_usize_add(v_i_988_, v___x_995_);
v___x_997_ = lean_array_uset(v_bs_x27_993_, v_i_988_, v___x_994_);
v_i_988_ = v___x_996_;
v_bs_989_ = v___x_997_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2_spec__3___boxed(lean_object* v_sz_999_, lean_object* v_i_1000_, lean_object* v_bs_1001_){
_start:
{
size_t v_sz_boxed_1002_; size_t v_i_boxed_1003_; lean_object* v_res_1004_; 
v_sz_boxed_1002_ = lean_unbox_usize(v_sz_999_);
lean_dec(v_sz_999_);
v_i_boxed_1003_ = lean_unbox_usize(v_i_1000_);
lean_dec(v_i_1000_);
v_res_1004_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2_spec__3(v_sz_boxed_1002_, v_i_boxed_1003_, v_bs_1001_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_eraseQuoteMacroScopes(lean_object* v_stx_1005_){
_start:
{
lean_object* v___x_1006_; 
v___x_1006_ = l_Lean_Syntax_rewriteBottomUpM___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__2(v_stx_1005_);
return v___x_1006_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1(lean_object* v_s_1007_, lean_object* v_inst_1008_, lean_object* v_R_1009_, lean_object* v_a_1010_, uint8_t v_b_1011_, lean_object* v_c_1012_){
_start:
{
uint8_t v___x_1013_; 
v___x_1013_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___redArg(v_s_1007_, v_a_1010_, v_b_1011_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1___boxed(lean_object* v_s_1014_, lean_object* v_inst_1015_, lean_object* v_R_1016_, lean_object* v_a_1017_, lean_object* v_b_1018_, lean_object* v_c_1019_){
_start:
{
uint8_t v_b_boxed_1020_; uint8_t v_res_1021_; lean_object* v_r_1022_; 
v_b_boxed_1020_ = lean_unbox(v_b_1018_);
v_res_1021_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Syntax_eraseQuoteMacroScopes_spec__1_spec__1(v_s_1014_, v_inst_1015_, v_R_1016_, v_a_1017_, v_b_boxed_1020_, v_c_1019_);
lean_dec_ref(v_s_1014_);
v_r_1022_ = lean_box(v_res_1021_);
return v_r_1022_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(lean_object* v_x_1023_, lean_object* v_x_1024_, lean_object* v_x_1025_){
_start:
{
if (lean_obj_tag(v_x_1023_) == 0)
{
lean_object* v_leading_1026_; lean_object* v_trailing_1027_; lean_object* v_pos_1028_; lean_object* v_endPos_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1056_; 
v_leading_1026_ = lean_ctor_get(v_x_1023_, 0);
v_trailing_1027_ = lean_ctor_get(v_x_1023_, 2);
v_pos_1028_ = lean_ctor_get(v_x_1023_, 1);
v_endPos_1029_ = lean_ctor_get(v_x_1023_, 3);
v_isSharedCheck_1056_ = !lean_is_exclusive(v_x_1023_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1031_ = v_x_1023_;
v_isShared_1032_ = v_isSharedCheck_1056_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_endPos_1029_);
lean_inc(v_trailing_1027_);
lean_inc(v_pos_1028_);
lean_inc(v_leading_1026_);
lean_dec(v_x_1023_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1056_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v_str_1033_; lean_object* v_stopPos_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1054_; 
v_str_1033_ = lean_ctor_get(v_leading_1026_, 0);
v_stopPos_1034_ = lean_ctor_get(v_leading_1026_, 2);
v_isSharedCheck_1054_ = !lean_is_exclusive(v_leading_1026_);
if (v_isSharedCheck_1054_ == 0)
{
lean_object* v_unused_1055_; 
v_unused_1055_ = lean_ctor_get(v_leading_1026_, 1);
lean_dec(v_unused_1055_);
v___x_1036_ = v_leading_1026_;
v_isShared_1037_ = v_isSharedCheck_1054_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_stopPos_1034_);
lean_inc(v_str_1033_);
lean_dec(v_leading_1026_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1054_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v_str_1038_; lean_object* v_startPos_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1052_; 
v_str_1038_ = lean_ctor_get(v_trailing_1027_, 0);
v_startPos_1039_ = lean_ctor_get(v_trailing_1027_, 1);
v_isSharedCheck_1052_ = !lean_is_exclusive(v_trailing_1027_);
if (v_isSharedCheck_1052_ == 0)
{
lean_object* v_unused_1053_; 
v_unused_1053_ = lean_ctor_get(v_trailing_1027_, 2);
lean_dec(v_unused_1053_);
v___x_1041_ = v_trailing_1027_;
v_isShared_1042_ = v_isSharedCheck_1052_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_startPos_1039_);
lean_inc(v_str_1038_);
lean_dec(v_trailing_1027_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1052_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1044_; 
if (v_isShared_1042_ == 0)
{
lean_ctor_set(v___x_1041_, 2, v_stopPos_1034_);
lean_ctor_set(v___x_1041_, 1, v_x_1024_);
lean_ctor_set(v___x_1041_, 0, v_str_1033_);
v___x_1044_ = v___x_1041_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_str_1033_);
lean_ctor_set(v_reuseFailAlloc_1051_, 1, v_x_1024_);
lean_ctor_set(v_reuseFailAlloc_1051_, 2, v_stopPos_1034_);
v___x_1044_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
lean_object* v___x_1046_; 
if (v_isShared_1037_ == 0)
{
lean_ctor_set(v___x_1036_, 2, v_x_1025_);
lean_ctor_set(v___x_1036_, 1, v_startPos_1039_);
lean_ctor_set(v___x_1036_, 0, v_str_1038_);
v___x_1046_ = v___x_1036_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v_str_1038_);
lean_ctor_set(v_reuseFailAlloc_1050_, 1, v_startPos_1039_);
lean_ctor_set(v_reuseFailAlloc_1050_, 2, v_x_1025_);
v___x_1046_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
lean_object* v___x_1048_; 
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 2, v___x_1046_);
lean_ctor_set(v___x_1031_, 0, v___x_1044_);
v___x_1048_ = v___x_1031_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v___x_1044_);
lean_ctor_set(v_reuseFailAlloc_1049_, 1, v_pos_1028_);
lean_ctor_set(v_reuseFailAlloc_1049_, 2, v___x_1046_);
lean_ctor_set(v_reuseFailAlloc_1049_, 3, v_endPos_1029_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
}
}
}
}
}
}
}
else
{
lean_dec(v_x_1025_);
lean_dec(v_x_1024_);
return v_x_1023_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg(lean_object* v___x_1057_, lean_object* v___x_1058_, lean_object* v___x_1059_, lean_object* v_a_1060_, lean_object* v_b_1061_){
_start:
{
lean_object* v___x_1062_; uint8_t v_decide_1063_; 
v___x_1062_ = lean_nat_sub(v___x_1057_, v___x_1058_);
v_decide_1063_ = lean_nat_dec_eq(v_a_1060_, v___x_1062_);
lean_dec(v___x_1062_);
if (v_decide_1063_ == 0)
{
uint32_t v___x_1064_; lean_object* v___x_1065_; uint32_t v___x_1066_; uint8_t v___x_1067_; 
v___x_1064_ = 10;
v___x_1065_ = lean_nat_add(v___x_1058_, v_a_1060_);
v___x_1066_ = lean_string_utf8_get_fast(v___x_1059_, v___x_1065_);
v___x_1067_ = lean_uint32_dec_eq(v___x_1066_, v___x_1064_);
if (v___x_1067_ == 0)
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
lean_dec(v_a_1060_);
v___x_1068_ = lean_box(0);
v___x_1069_ = lean_string_utf8_next_fast(v___x_1059_, v___x_1065_);
lean_dec(v___x_1065_);
v___x_1070_ = lean_nat_sub(v___x_1069_, v___x_1058_);
v_a_1060_ = v___x_1070_;
v_b_1061_ = v___x_1068_;
goto _start;
}
else
{
lean_object* v___x_1072_; 
lean_dec(v___x_1065_);
v___x_1072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1072_, 0, v_a_1060_);
return v___x_1072_;
}
}
else
{
lean_dec(v_a_1060_);
lean_inc(v_b_1061_);
return v_b_1061_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg___boxed(lean_object* v___x_1073_, lean_object* v___x_1074_, lean_object* v___x_1075_, lean_object* v_a_1076_, lean_object* v_b_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg(v___x_1073_, v___x_1074_, v___x_1075_, v_a_1076_, v_b_1077_);
lean_dec(v_b_1077_);
lean_dec_ref(v___x_1075_);
lean_dec(v___x_1074_);
lean_dec(v___x_1073_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(lean_object* v_trail_1079_){
_start:
{
lean_object* v_str_1080_; lean_object* v_startPos_1081_; lean_object* v_stopPos_1082_; uint8_t v___x_1086_; 
v_str_1080_ = lean_ctor_get(v_trail_1079_, 0);
v_startPos_1081_ = lean_ctor_get(v_trail_1079_, 1);
v_stopPos_1082_ = lean_ctor_get(v_trail_1079_, 2);
v___x_1086_ = lean_string_is_valid_pos(v_str_1080_, v_startPos_1081_);
if (v___x_1086_ == 0)
{
goto v___jp_1083_;
}
else
{
uint8_t v___x_1087_; 
v___x_1087_ = lean_string_is_valid_pos(v_str_1080_, v_stopPos_1082_);
if (v___x_1087_ == 0)
{
goto v___jp_1083_;
}
else
{
uint8_t v___x_1088_; 
v___x_1088_ = lean_nat_dec_le(v_startPos_1081_, v_stopPos_1082_);
if (v___x_1088_ == 0)
{
goto v___jp_1083_;
}
else
{
lean_object* v_searcher_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v_searcher_1089_ = lean_unsigned_to_nat(0u);
v___x_1090_ = lean_box(0);
v___x_1091_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg(v_stopPos_1082_, v_startPos_1081_, v_str_1080_, v_searcher_1089_, v___x_1090_);
if (lean_obj_tag(v___x_1091_) == 0)
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1092_ = lean_nat_sub(v_stopPos_1082_, v_startPos_1081_);
v___x_1093_ = lean_nat_add(v_startPos_1081_, v___x_1092_);
lean_dec(v___x_1092_);
return v___x_1093_;
}
else
{
lean_object* v_val_1094_; lean_object* v___x_1095_; 
v_val_1094_ = lean_ctor_get(v___x_1091_, 0);
lean_inc(v_val_1094_);
lean_dec_ref_known(v___x_1091_, 1);
v___x_1095_ = lean_nat_add(v_startPos_1081_, v_val_1094_);
lean_dec(v_val_1094_);
return v___x_1095_;
}
}
}
}
v___jp_1083_:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1084_ = lean_nat_sub(v_stopPos_1082_, v_startPos_1081_);
v___x_1085_ = lean_nat_add(v_startPos_1081_, v___x_1084_);
lean_dec(v___x_1084_);
return v___x_1085_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop___boxed(lean_object* v_trail_1096_){
_start:
{
lean_object* v_res_1097_; 
v_res_1097_ = l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(v_trail_1096_);
lean_dec_ref(v_trail_1096_);
return v_res_1097_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0(lean_object* v___x_1098_, lean_object* v___x_1099_, lean_object* v___x_1100_, lean_object* v___x_1101_, lean_object* v_inst_1102_, lean_object* v_R_1103_, lean_object* v_a_1104_, lean_object* v_b_1105_, lean_object* v_c_1106_){
_start:
{
lean_object* v___x_1107_; 
v___x_1107_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___redArg(v___x_1098_, v___x_1099_, v___x_1101_, v_a_1104_, v_b_1105_);
return v___x_1107_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0___boxed(lean_object* v___x_1108_, lean_object* v___x_1109_, lean_object* v___x_1110_, lean_object* v___x_1111_, lean_object* v_inst_1112_, lean_object* v_R_1113_, lean_object* v_a_1114_, lean_object* v_b_1115_, lean_object* v_c_1116_){
_start:
{
lean_object* v_res_1117_; 
v_res_1117_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop_spec__0(v___x_1108_, v___x_1109_, v___x_1110_, v___x_1111_, v_inst_1112_, v_R_1113_, v_a_1114_, v_b_1115_, v_c_1116_);
lean_dec(v_b_1115_);
lean_dec_ref(v___x_1111_);
lean_dec_ref(v___x_1110_);
lean_dec(v___x_1109_);
lean_dec(v___x_1108_);
return v_res_1117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_updateLeadingAux(lean_object* v_x_1118_, lean_object* v_a_1119_){
_start:
{
lean_object* v___y_1121_; 
switch(lean_obj_tag(v_x_1118_))
{
case 2:
{
lean_object* v_info_1124_; 
v_info_1124_ = lean_ctor_get(v_x_1118_, 0);
lean_inc(v_info_1124_);
if (lean_obj_tag(v_info_1124_) == 0)
{
lean_object* v_val_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1137_; 
v_val_1125_ = lean_ctor_get(v_x_1118_, 1);
v_isSharedCheck_1137_ = !lean_is_exclusive(v_x_1118_);
if (v_isSharedCheck_1137_ == 0)
{
lean_object* v_unused_1138_; 
v_unused_1138_ = lean_ctor_get(v_x_1118_, 0);
lean_dec(v_unused_1138_);
v___x_1127_ = v_x_1118_;
v_isShared_1128_ = v_isSharedCheck_1137_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_val_1125_);
lean_dec(v_x_1118_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1137_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v_trailing_1129_; lean_object* v_trailStop_1130_; lean_object* v___x_1131_; lean_object* v___x_1133_; 
v_trailing_1129_ = lean_ctor_get(v_info_1124_, 2);
v_trailStop_1130_ = l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(v_trailing_1129_);
lean_inc(v_trailStop_1130_);
v___x_1131_ = l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(v_info_1124_, v_a_1119_, v_trailStop_1130_);
if (v_isShared_1128_ == 0)
{
lean_ctor_set(v___x_1127_, 0, v___x_1131_);
v___x_1133_ = v___x_1127_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v___x_1131_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v_val_1125_);
v___x_1133_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1133_);
v___x_1135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
lean_ctor_set(v___x_1135_, 1, v_trailStop_1130_);
return v___x_1135_;
}
}
}
else
{
lean_dec(v_info_1124_);
lean_dec_ref_known(v_x_1118_, 2);
v___y_1121_ = v_a_1119_;
goto v___jp_1120_;
}
}
case 3:
{
lean_object* v_info_1139_; 
v_info_1139_ = lean_ctor_get(v_x_1118_, 0);
lean_inc(v_info_1139_);
if (lean_obj_tag(v_info_1139_) == 0)
{
lean_object* v_rawVal_1140_; lean_object* v_val_1141_; lean_object* v_preresolved_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1154_; 
v_rawVal_1140_ = lean_ctor_get(v_x_1118_, 1);
v_val_1141_ = lean_ctor_get(v_x_1118_, 2);
v_preresolved_1142_ = lean_ctor_get(v_x_1118_, 3);
v_isSharedCheck_1154_ = !lean_is_exclusive(v_x_1118_);
if (v_isSharedCheck_1154_ == 0)
{
lean_object* v_unused_1155_; 
v_unused_1155_ = lean_ctor_get(v_x_1118_, 0);
lean_dec(v_unused_1155_);
v___x_1144_ = v_x_1118_;
v_isShared_1145_ = v_isSharedCheck_1154_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_preresolved_1142_);
lean_inc(v_val_1141_);
lean_inc(v_rawVal_1140_);
lean_dec(v_x_1118_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1154_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v_trailing_1146_; lean_object* v_trailStop_1147_; lean_object* v___x_1148_; lean_object* v___x_1150_; 
v_trailing_1146_ = lean_ctor_get(v_info_1139_, 2);
v_trailStop_1147_ = l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(v_trailing_1146_);
lean_inc(v_trailStop_1147_);
v___x_1148_ = l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(v_info_1139_, v_a_1119_, v_trailStop_1147_);
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 0, v___x_1148_);
v___x_1150_ = v___x_1144_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1148_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v_rawVal_1140_);
lean_ctor_set(v_reuseFailAlloc_1153_, 2, v_val_1141_);
lean_ctor_set(v_reuseFailAlloc_1153_, 3, v_preresolved_1142_);
v___x_1150_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___x_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
v___x_1152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1152_, 0, v___x_1151_);
lean_ctor_set(v___x_1152_, 1, v_trailStop_1147_);
return v___x_1152_;
}
}
}
else
{
lean_dec(v_info_1139_);
lean_dec_ref_known(v_x_1118_, 4);
v___y_1121_ = v_a_1119_;
goto v___jp_1120_;
}
}
default: 
{
lean_dec(v_x_1118_);
v___y_1121_ = v_a_1119_;
goto v___jp_1120_;
}
}
v___jp_1120_:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; 
v___x_1122_ = lean_box(0);
v___x_1123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1123_, 0, v___x_1122_);
lean_ctor_set(v___x_1123_, 1, v___y_1121_);
return v___x_1123_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0___lam__0(lean_object* v___y_1156_, lean_object* v___y_1157_){
_start:
{
switch(lean_obj_tag(v___y_1156_))
{
case 2:
{
lean_object* v_info_1161_; 
v_info_1161_ = lean_ctor_get(v___y_1156_, 0);
lean_inc(v_info_1161_);
if (lean_obj_tag(v_info_1161_) == 0)
{
lean_object* v_val_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1174_; 
v_val_1162_ = lean_ctor_get(v___y_1156_, 1);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___y_1156_);
if (v_isSharedCheck_1174_ == 0)
{
lean_object* v_unused_1175_; 
v_unused_1175_ = lean_ctor_get(v___y_1156_, 0);
lean_dec(v_unused_1175_);
v___x_1164_ = v___y_1156_;
v_isShared_1165_ = v_isSharedCheck_1174_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_val_1162_);
lean_dec(v___y_1156_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1174_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v_trailing_1166_; lean_object* v_trailStop_1167_; lean_object* v___x_1168_; lean_object* v___x_1170_; 
v_trailing_1166_ = lean_ctor_get(v_info_1161_, 2);
v_trailStop_1167_ = l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(v_trailing_1166_);
lean_inc(v_trailStop_1167_);
v___x_1168_ = l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(v_info_1161_, v___y_1157_, v_trailStop_1167_);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 0, v___x_1168_);
v___x_1170_ = v___x_1164_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v___x_1168_);
lean_ctor_set(v_reuseFailAlloc_1173_, 1, v_val_1162_);
v___x_1170_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1170_);
v___x_1172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1171_);
lean_ctor_set(v___x_1172_, 1, v_trailStop_1167_);
return v___x_1172_;
}
}
}
else
{
lean_dec(v_info_1161_);
lean_dec_ref_known(v___y_1156_, 2);
goto v___jp_1158_;
}
}
case 3:
{
lean_object* v_info_1176_; 
v_info_1176_ = lean_ctor_get(v___y_1156_, 0);
lean_inc(v_info_1176_);
if (lean_obj_tag(v_info_1176_) == 0)
{
lean_object* v_rawVal_1177_; lean_object* v_val_1178_; lean_object* v_preresolved_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1191_; 
v_rawVal_1177_ = lean_ctor_get(v___y_1156_, 1);
v_val_1178_ = lean_ctor_get(v___y_1156_, 2);
v_preresolved_1179_ = lean_ctor_get(v___y_1156_, 3);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___y_1156_);
if (v_isSharedCheck_1191_ == 0)
{
lean_object* v_unused_1192_; 
v_unused_1192_ = lean_ctor_get(v___y_1156_, 0);
lean_dec(v_unused_1192_);
v___x_1181_ = v___y_1156_;
v_isShared_1182_ = v_isSharedCheck_1191_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_preresolved_1179_);
lean_inc(v_val_1178_);
lean_inc(v_rawVal_1177_);
lean_dec(v___y_1156_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1191_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v_trailing_1183_; lean_object* v_trailStop_1184_; lean_object* v___x_1185_; lean_object* v___x_1187_; 
v_trailing_1183_ = lean_ctor_get(v_info_1176_, 2);
v_trailStop_1184_ = l___private_Lean_Syntax_0__Lean_Syntax_chooseNiceTrailStop(v_trailing_1183_);
lean_inc(v_trailStop_1184_);
v___x_1185_ = l___private_Lean_Syntax_0__Lean_Syntax_updateInfo(v_info_1176_, v___y_1157_, v_trailStop_1184_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 0, v___x_1185_);
v___x_1187_ = v___x_1181_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v___x_1185_);
lean_ctor_set(v_reuseFailAlloc_1190_, 1, v_rawVal_1177_);
lean_ctor_set(v_reuseFailAlloc_1190_, 2, v_val_1178_);
lean_ctor_set(v_reuseFailAlloc_1190_, 3, v_preresolved_1179_);
v___x_1187_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1187_);
v___x_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1188_);
lean_ctor_set(v___x_1189_, 1, v_trailStop_1184_);
return v___x_1189_;
}
}
}
else
{
lean_dec(v_info_1176_);
lean_dec_ref_known(v___y_1156_, 4);
goto v___jp_1158_;
}
}
default: 
{
lean_dec(v___y_1156_);
goto v___jp_1158_;
}
}
v___jp_1158_:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1159_ = lean_box(0);
v___x_1160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1159_);
lean_ctor_set(v___x_1160_, 1, v___y_1157_);
return v___x_1160_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0(lean_object* v_x_1193_, lean_object* v___y_1194_){
_start:
{
if (lean_obj_tag(v_x_1193_) == 1)
{
lean_object* v_info_1195_; lean_object* v_kind_1196_; lean_object* v_args_1197_; lean_object* v___x_1198_; lean_object* v_fst_1199_; 
v_info_1195_ = lean_ctor_get(v_x_1193_, 0);
lean_inc(v_info_1195_);
v_kind_1196_ = lean_ctor_get(v_x_1193_, 1);
lean_inc(v_kind_1196_);
v_args_1197_ = lean_ctor_get(v_x_1193_, 2);
lean_inc_ref(v_args_1197_);
v___x_1198_ = l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0___lam__0(v_x_1193_, v___y_1194_);
v_fst_1199_ = lean_ctor_get(v___x_1198_, 0);
if (lean_obj_tag(v_fst_1199_) == 0)
{
lean_object* v_snd_1200_; size_t v_sz_1201_; size_t v___x_1202_; lean_object* v___x_1203_; lean_object* v_fst_1204_; lean_object* v_snd_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1213_; 
v_snd_1200_ = lean_ctor_get(v___x_1198_, 1);
lean_inc(v_snd_1200_);
lean_dec_ref(v___x_1198_);
v_sz_1201_ = lean_array_size(v_args_1197_);
v___x_1202_ = ((size_t)0ULL);
v___x_1203_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0(v_sz_1201_, v___x_1202_, v_args_1197_, v_snd_1200_);
v_fst_1204_ = lean_ctor_get(v___x_1203_, 0);
v_snd_1205_ = lean_ctor_get(v___x_1203_, 1);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1203_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1207_ = v___x_1203_;
v_isShared_1208_ = v_isSharedCheck_1213_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_snd_1205_);
lean_inc(v_fst_1204_);
lean_dec(v___x_1203_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1213_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1209_; lean_object* v___x_1211_; 
v___x_1209_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1209_, 0, v_info_1195_);
lean_ctor_set(v___x_1209_, 1, v_kind_1196_);
lean_ctor_set(v___x_1209_, 2, v_fst_1204_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 0, v___x_1209_);
v___x_1211_ = v___x_1207_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v___x_1209_);
lean_ctor_set(v_reuseFailAlloc_1212_, 1, v_snd_1205_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
else
{
lean_object* v_snd_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1222_; 
lean_inc_ref(v_fst_1199_);
lean_dec_ref(v_args_1197_);
lean_dec(v_kind_1196_);
lean_dec(v_info_1195_);
v_snd_1214_ = lean_ctor_get(v___x_1198_, 1);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1222_ == 0)
{
lean_object* v_unused_1223_; 
v_unused_1223_ = lean_ctor_get(v___x_1198_, 0);
lean_dec(v_unused_1223_);
v___x_1216_ = v___x_1198_;
v_isShared_1217_ = v_isSharedCheck_1222_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_snd_1214_);
lean_dec(v___x_1198_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1222_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v_val_1218_; lean_object* v___x_1220_; 
v_val_1218_ = lean_ctor_get(v_fst_1199_, 0);
lean_inc(v_val_1218_);
lean_dec_ref_known(v_fst_1199_, 1);
if (v_isShared_1217_ == 0)
{
lean_ctor_set(v___x_1216_, 0, v_val_1218_);
v___x_1220_ = v___x_1216_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_val_1218_);
lean_ctor_set(v_reuseFailAlloc_1221_, 1, v_snd_1214_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
}
else
{
lean_object* v___x_1224_; lean_object* v_fst_1225_; 
lean_inc(v_x_1193_);
v___x_1224_ = l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0___lam__0(v_x_1193_, v___y_1194_);
v_fst_1225_ = lean_ctor_get(v___x_1224_, 0);
if (lean_obj_tag(v_fst_1225_) == 0)
{
lean_object* v_snd_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
v_snd_1226_ = lean_ctor_get(v___x_1224_, 1);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1233_ == 0)
{
lean_object* v_unused_1234_; 
v_unused_1234_ = lean_ctor_get(v___x_1224_, 0);
lean_dec(v_unused_1234_);
v___x_1228_ = v___x_1224_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_snd_1226_);
lean_dec(v___x_1224_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 0, v_x_1193_);
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_x_1193_);
lean_ctor_set(v_reuseFailAlloc_1232_, 1, v_snd_1226_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
else
{
lean_object* v_snd_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1243_; 
lean_inc_ref(v_fst_1225_);
lean_dec(v_x_1193_);
v_snd_1235_ = lean_ctor_get(v___x_1224_, 1);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1243_ == 0)
{
lean_object* v_unused_1244_; 
v_unused_1244_ = lean_ctor_get(v___x_1224_, 0);
lean_dec(v_unused_1244_);
v___x_1237_ = v___x_1224_;
v_isShared_1238_ = v_isSharedCheck_1243_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_snd_1235_);
lean_dec(v___x_1224_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1243_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v_val_1239_; lean_object* v___x_1241_; 
v_val_1239_ = lean_ctor_get(v_fst_1225_, 0);
lean_inc(v_val_1239_);
lean_dec_ref_known(v_fst_1225_, 1);
if (v_isShared_1238_ == 0)
{
lean_ctor_set(v___x_1237_, 0, v_val_1239_);
v___x_1241_ = v___x_1237_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v_val_1239_);
lean_ctor_set(v_reuseFailAlloc_1242_, 1, v_snd_1235_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
return v___x_1241_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0(size_t v_sz_1245_, size_t v_i_1246_, lean_object* v_bs_1247_, lean_object* v___y_1248_){
_start:
{
uint8_t v___x_1249_; 
v___x_1249_ = lean_usize_dec_lt(v_i_1246_, v_sz_1245_);
if (v___x_1249_ == 0)
{
lean_object* v___x_1250_; 
v___x_1250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1250_, 0, v_bs_1247_);
lean_ctor_set(v___x_1250_, 1, v___y_1248_);
return v___x_1250_;
}
else
{
lean_object* v_v_1251_; lean_object* v___x_1252_; lean_object* v_fst_1253_; lean_object* v_snd_1254_; lean_object* v___x_1255_; lean_object* v_bs_x27_1256_; size_t v___x_1257_; size_t v___x_1258_; lean_object* v___x_1259_; 
v_v_1251_ = lean_array_uget_borrowed(v_bs_1247_, v_i_1246_);
lean_inc(v_v_1251_);
v___x_1252_ = l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0(v_v_1251_, v___y_1248_);
v_fst_1253_ = lean_ctor_get(v___x_1252_, 0);
lean_inc(v_fst_1253_);
v_snd_1254_ = lean_ctor_get(v___x_1252_, 1);
lean_inc(v_snd_1254_);
lean_dec_ref(v___x_1252_);
v___x_1255_ = lean_unsigned_to_nat(0u);
v_bs_x27_1256_ = lean_array_uset(v_bs_1247_, v_i_1246_, v___x_1255_);
v___x_1257_ = ((size_t)1ULL);
v___x_1258_ = lean_usize_add(v_i_1246_, v___x_1257_);
v___x_1259_ = lean_array_uset(v_bs_x27_1256_, v_i_1246_, v_fst_1253_);
v_i_1246_ = v___x_1258_;
v_bs_1247_ = v___x_1259_;
v___y_1248_ = v_snd_1254_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0___boxed(lean_object* v_sz_1261_, lean_object* v_i_1262_, lean_object* v_bs_1263_, lean_object* v___y_1264_){
_start:
{
size_t v_sz_boxed_1265_; size_t v_i_boxed_1266_; lean_object* v_res_1267_; 
v_sz_boxed_1265_ = lean_unbox_usize(v_sz_1261_);
lean_dec(v_sz_1261_);
v_i_boxed_1266_ = lean_unbox_usize(v_i_1262_);
lean_dec(v_i_1262_);
v_res_1267_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0_spec__0(v_sz_boxed_1265_, v_i_boxed_1266_, v_bs_1263_, v___y_1264_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_updateLeading(lean_object* v_stx_1268_){
_start:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v_fst_1271_; 
v___x_1269_ = lean_unsigned_to_nat(0u);
v___x_1270_ = l_Lean_Syntax_replaceM___at___00Lean_Syntax_updateLeading_spec__0(v_stx_1268_, v___x_1269_);
v_fst_1271_ = lean_ctor_get(v___x_1270_, 0);
lean_inc(v_fst_1271_);
lean_dec_ref(v___x_1270_);
return v_fst_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_updateTrailing(lean_object* v_trailing_1272_, lean_object* v_x_1273_){
_start:
{
switch(lean_obj_tag(v_x_1273_))
{
case 2:
{
lean_object* v_info_1274_; lean_object* v_val_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1283_; 
v_info_1274_ = lean_ctor_get(v_x_1273_, 0);
v_val_1275_ = lean_ctor_get(v_x_1273_, 1);
v_isSharedCheck_1283_ = !lean_is_exclusive(v_x_1273_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1277_ = v_x_1273_;
v_isShared_1278_ = v_isSharedCheck_1283_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_val_1275_);
lean_inc(v_info_1274_);
lean_dec(v_x_1273_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1283_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1279_; lean_object* v___x_1281_; 
v___x_1279_ = l_Lean_SourceInfo_updateTrailing(v_trailing_1272_, v_info_1274_);
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 0, v___x_1279_);
v___x_1281_ = v___x_1277_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v___x_1279_);
lean_ctor_set(v_reuseFailAlloc_1282_, 1, v_val_1275_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
case 3:
{
lean_object* v_info_1284_; lean_object* v_rawVal_1285_; lean_object* v_val_1286_; lean_object* v_preresolved_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1295_; 
v_info_1284_ = lean_ctor_get(v_x_1273_, 0);
v_rawVal_1285_ = lean_ctor_get(v_x_1273_, 1);
v_val_1286_ = lean_ctor_get(v_x_1273_, 2);
v_preresolved_1287_ = lean_ctor_get(v_x_1273_, 3);
v_isSharedCheck_1295_ = !lean_is_exclusive(v_x_1273_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1289_ = v_x_1273_;
v_isShared_1290_ = v_isSharedCheck_1295_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_preresolved_1287_);
lean_inc(v_val_1286_);
lean_inc(v_rawVal_1285_);
lean_inc(v_info_1284_);
lean_dec(v_x_1273_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1295_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___x_1291_; lean_object* v___x_1293_; 
v___x_1291_ = l_Lean_SourceInfo_updateTrailing(v_trailing_1272_, v_info_1284_);
if (v_isShared_1290_ == 0)
{
lean_ctor_set(v___x_1289_, 0, v___x_1291_);
v___x_1293_ = v___x_1289_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v___x_1291_);
lean_ctor_set(v_reuseFailAlloc_1294_, 1, v_rawVal_1285_);
lean_ctor_set(v_reuseFailAlloc_1294_, 2, v_val_1286_);
lean_ctor_set(v_reuseFailAlloc_1294_, 3, v_preresolved_1287_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
}
case 1:
{
lean_object* v_info_1296_; lean_object* v_kind_1297_; lean_object* v_args_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; uint8_t v___x_1301_; 
v_info_1296_ = lean_ctor_get(v_x_1273_, 0);
v_kind_1297_ = lean_ctor_get(v_x_1273_, 1);
v_args_1298_ = lean_ctor_get(v_x_1273_, 2);
v___x_1299_ = lean_array_get_size(v_args_1298_);
v___x_1300_ = lean_unsigned_to_nat(0u);
v___x_1301_ = lean_nat_dec_eq(v___x_1299_, v___x_1300_);
if (v___x_1301_ == 0)
{
lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1313_; 
lean_inc_ref(v_args_1298_);
lean_inc(v_kind_1297_);
lean_inc(v_info_1296_);
v_isSharedCheck_1313_ = !lean_is_exclusive(v_x_1273_);
if (v_isSharedCheck_1313_ == 0)
{
lean_object* v_unused_1314_; lean_object* v_unused_1315_; lean_object* v_unused_1316_; 
v_unused_1314_ = lean_ctor_get(v_x_1273_, 2);
lean_dec(v_unused_1314_);
v_unused_1315_ = lean_ctor_get(v_x_1273_, 1);
lean_dec(v_unused_1315_);
v_unused_1316_ = lean_ctor_get(v_x_1273_, 0);
lean_dec(v_unused_1316_);
v___x_1303_ = v_x_1273_;
v_isShared_1304_ = v_isSharedCheck_1313_;
goto v_resetjp_1302_;
}
else
{
lean_dec(v_x_1273_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1313_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1305_; lean_object* v_i_1306_; lean_object* v___x_1307_; lean_object* v_last_1308_; lean_object* v_args_1309_; lean_object* v___x_1311_; 
v___x_1305_ = lean_unsigned_to_nat(1u);
v_i_1306_ = lean_nat_sub(v___x_1299_, v___x_1305_);
v___x_1307_ = lean_array_fget_borrowed(v_args_1298_, v_i_1306_);
lean_inc(v___x_1307_);
v_last_1308_ = l_Lean_Syntax_updateTrailing(v_trailing_1272_, v___x_1307_);
v_args_1309_ = lean_array_fset(v_args_1298_, v_i_1306_, v_last_1308_);
lean_dec(v_i_1306_);
if (v_isShared_1304_ == 0)
{
lean_ctor_set(v___x_1303_, 2, v_args_1309_);
v___x_1311_ = v___x_1303_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v_info_1296_);
lean_ctor_set(v_reuseFailAlloc_1312_, 1, v_kind_1297_);
lean_ctor_set(v_reuseFailAlloc_1312_, 2, v_args_1309_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
else
{
lean_dec_ref(v_trailing_1272_);
return v_x_1273_;
}
}
default: 
{
lean_dec_ref(v_trailing_1272_);
return v_x_1273_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps_spec__0(lean_object* v_x_1317_, lean_object* v_x_1318_){
_start:
{
if (lean_obj_tag(v_x_1318_) == 0)
{
return v_x_1317_;
}
else
{
lean_object* v_head_1319_; lean_object* v_tail_1320_; lean_object* v___x_1321_; 
v_head_1319_ = lean_ctor_get(v_x_1318_, 0);
lean_inc(v_head_1319_);
v_tail_1320_ = lean_ctor_get(v_x_1318_, 1);
lean_inc(v_tail_1320_);
lean_dec_ref_known(v_x_1318_, 2);
v___x_1321_ = l_Lean_Name_append(v_x_1317_, v_head_1319_);
v_x_1317_ = v___x_1321_;
v_x_1318_ = v_tail_1320_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps(lean_object* v_n_1325_, lean_object* v_nFields_x3f_1326_){
_start:
{
if (lean_obj_tag(v_nFields_x3f_1326_) == 1)
{
lean_object* v_val_1327_; lean_object* v_nameComps_1328_; lean_object* v___x_1329_; lean_object* v_nPrefix_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v_namePrefix_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v_val_1327_ = lean_ctor_get(v_nFields_x3f_1326_, 0);
v_nameComps_1328_ = l_Lean_Name_components(v_n_1325_);
v___x_1329_ = l_List_lengthTR___redArg(v_nameComps_1328_);
v_nPrefix_1330_ = lean_nat_sub(v___x_1329_, v_val_1327_);
lean_dec(v___x_1329_);
v___x_1331_ = lean_box(0);
v___x_1332_ = ((lean_object*)(l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0));
lean_inc(v_nPrefix_1330_);
lean_inc(v_nameComps_1328_);
v___x_1333_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_nameComps_1328_, v_nameComps_1328_, v_nPrefix_1330_, v___x_1332_);
v_namePrefix_1334_ = l_List_foldl___at___00__private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps_spec__0(v___x_1331_, v___x_1333_);
v___x_1335_ = l_List_drop___redArg(v_nPrefix_1330_, v_nameComps_1328_);
lean_dec(v_nameComps_1328_);
v___x_1336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1336_, 0, v_namePrefix_1334_);
lean_ctor_set(v___x_1336_, 1, v___x_1335_);
return v___x_1336_;
}
else
{
lean_object* v___x_1337_; 
v___x_1337_ = l_Lean_Name_components(v_n_1325_);
return v___x_1337_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___boxed(lean_object* v_n_1338_, lean_object* v_nFields_x3f_1339_){
_start:
{
lean_object* v_res_1340_; 
v_res_1340_ = l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps(v_n_1338_, v_nFields_x3f_1339_);
lean_dec(v_nFields_x3f_1339_);
return v_res_1340_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Syntax_identComponents_x3f_spec__3(lean_object* v_msg_1341_){
_start:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = lean_box(0);
v___x_1343_ = lean_panic_fn_borrowed(v___x_1342_, v_msg_1341_);
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2(lean_object* v_x_1344_, lean_object* v_x_1345_){
_start:
{
if (lean_obj_tag(v_x_1345_) == 0)
{
return v_x_1344_;
}
else
{
lean_object* v_head_1346_; lean_object* v_tail_1347_; lean_object* v_startPos_1348_; lean_object* v_stopPos_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v_head_1346_ = lean_ctor_get(v_x_1345_, 0);
v_tail_1347_ = lean_ctor_get(v_x_1345_, 1);
v_startPos_1348_ = lean_ctor_get(v_head_1346_, 1);
v_stopPos_1349_ = lean_ctor_get(v_head_1346_, 2);
v___x_1350_ = lean_nat_sub(v_stopPos_1349_, v_startPos_1348_);
v___x_1351_ = lean_nat_add(v_x_1344_, v___x_1350_);
lean_dec(v___x_1350_);
lean_dec(v_x_1344_);
v___x_1352_ = lean_unsigned_to_nat(1u);
v___x_1353_ = lean_nat_add(v___x_1351_, v___x_1352_);
lean_dec(v___x_1351_);
v_x_1344_ = v___x_1353_;
v_x_1345_ = v_tail_1347_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2___boxed(lean_object* v_x_1355_, lean_object* v_x_1356_){
_start:
{
lean_object* v_res_1357_; 
v_res_1357_ = l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2(v_x_1355_, v_x_1356_);
lean_dec(v_x_1356_);
return v_res_1357_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1(lean_object* v_rawVal_1362_, lean_object* v_pos_1363_, lean_object* v_a_1364_, lean_object* v_a_1365_){
_start:
{
if (lean_obj_tag(v_a_1364_) == 0)
{
lean_object* v___x_1366_; 
v___x_1366_ = l_List_reverse___redArg(v_a_1365_);
return v___x_1366_;
}
else
{
lean_object* v_head_1367_; lean_object* v_tail_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1386_; 
v_head_1367_ = lean_ctor_get(v_a_1364_, 0);
v_tail_1368_ = lean_ctor_get(v_a_1364_, 1);
v_isSharedCheck_1386_ = !lean_is_exclusive(v_a_1364_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1370_ = v_a_1364_;
v_isShared_1371_ = v_isSharedCheck_1386_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_tail_1368_);
lean_inc(v_head_1367_);
lean_dec(v_a_1364_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1386_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v_stopPos_1372_; lean_object* v_startPos_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v_info_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
v_stopPos_1372_ = lean_ctor_get(v_head_1367_, 2);
lean_inc(v_stopPos_1372_);
lean_dec(v_head_1367_);
v_startPos_1373_ = lean_ctor_get(v_rawVal_1362_, 1);
v___x_1374_ = lean_nat_sub(v_stopPos_1372_, v_startPos_1373_);
lean_dec(v_stopPos_1372_);
v___x_1375_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0));
v___x_1376_ = lean_nat_add(v___x_1374_, v_pos_1363_);
lean_dec(v___x_1374_);
v___x_1377_ = lean_unsigned_to_nat(1u);
v___x_1378_ = lean_nat_add(v___x_1377_, v___x_1376_);
v_info_1379_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_info_1379_, 0, v___x_1375_);
lean_ctor_set(v_info_1379_, 1, v___x_1376_);
lean_ctor_set(v_info_1379_, 2, v___x_1375_);
lean_ctor_set(v_info_1379_, 3, v___x_1378_);
v___x_1380_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__1));
v___x_1381_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1381_, 0, v_info_1379_);
lean_ctor_set(v___x_1381_, 1, v___x_1380_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 1, v_a_1365_);
lean_ctor_set(v___x_1370_, 0, v___x_1381_);
v___x_1383_ = v___x_1370_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1381_);
lean_ctor_set(v_reuseFailAlloc_1385_, 1, v_a_1365_);
v___x_1383_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
v_a_1364_ = v_tail_1368_;
v_a_1365_ = v___x_1383_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___boxed(lean_object* v_rawVal_1387_, lean_object* v_pos_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_){
_start:
{
lean_object* v_res_1391_; 
v_res_1391_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1(v_rawVal_1387_, v_pos_1388_, v_a_1389_, v_a_1390_);
lean_dec(v_pos_1388_);
lean_dec_ref(v_rawVal_1387_);
return v_res_1391_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0(lean_object* v_rawVal_1392_, lean_object* v_pos_1393_, lean_object* v_trailing_1394_, lean_object* v_leading_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_){
_start:
{
if (lean_obj_tag(v_a_1396_) == 0)
{
lean_object* v___x_1398_; 
lean_dec_ref(v_leading_1395_);
lean_dec_ref(v_trailing_1394_);
v___x_1398_ = l_List_reverse___redArg(v_a_1397_);
return v___x_1398_;
}
else
{
lean_object* v_head_1399_; lean_object* v_snd_1400_; lean_object* v_tail_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1431_; 
v_head_1399_ = lean_ctor_get(v_a_1396_, 0);
lean_inc(v_head_1399_);
v_snd_1400_ = lean_ctor_get(v_head_1399_, 1);
lean_inc(v_snd_1400_);
v_tail_1401_ = lean_ctor_get(v_a_1396_, 1);
v_isSharedCheck_1431_ = !lean_is_exclusive(v_a_1396_);
if (v_isSharedCheck_1431_ == 0)
{
lean_object* v_unused_1432_; 
v_unused_1432_ = lean_ctor_get(v_a_1396_, 0);
lean_dec(v_unused_1432_);
v___x_1403_ = v_a_1396_;
v_isShared_1404_ = v_isSharedCheck_1431_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_tail_1401_);
lean_dec(v_a_1396_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1431_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v_fst_1405_; lean_object* v_startPos_1406_; lean_object* v_stopPos_1407_; lean_object* v_startPos_1408_; lean_object* v_stopPos_1409_; lean_object* v_off_1410_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1425_; lean_object* v___x_1428_; uint8_t v_decide_1429_; 
v_fst_1405_ = lean_ctor_get(v_head_1399_, 0);
lean_inc(v_fst_1405_);
lean_dec(v_head_1399_);
v_startPos_1406_ = lean_ctor_get(v_snd_1400_, 1);
v_stopPos_1407_ = lean_ctor_get(v_snd_1400_, 2);
v_startPos_1408_ = lean_ctor_get(v_rawVal_1392_, 1);
v_stopPos_1409_ = lean_ctor_get(v_rawVal_1392_, 2);
v_off_1410_ = lean_nat_sub(v_startPos_1406_, v_startPos_1408_);
v___x_1428_ = lean_unsigned_to_nat(0u);
v_decide_1429_ = lean_nat_dec_eq(v_off_1410_, v___x_1428_);
if (v_decide_1429_ == 0)
{
lean_object* v___x_1430_; 
v___x_1430_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0));
v___y_1425_ = v___x_1430_;
goto v___jp_1424_;
}
else
{
lean_inc_ref(v_leading_1395_);
v___y_1425_ = v_leading_1395_;
goto v___jp_1424_;
}
v___jp_1411_:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v_info_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1421_; 
v___x_1414_ = lean_nat_add(v_off_1410_, v_pos_1393_);
lean_dec(v_off_1410_);
v___x_1415_ = lean_nat_sub(v_stopPos_1407_, v_startPos_1406_);
v___x_1416_ = lean_nat_add(v___x_1415_, v___x_1414_);
lean_dec(v___x_1415_);
v_info_1417_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_info_1417_, 0, v___y_1412_);
lean_ctor_set(v_info_1417_, 1, v___x_1414_);
lean_ctor_set(v_info_1417_, 2, v___y_1413_);
lean_ctor_set(v_info_1417_, 3, v___x_1416_);
v___x_1418_ = lean_box(0);
v___x_1419_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1419_, 0, v_info_1417_);
lean_ctor_set(v___x_1419_, 1, v_snd_1400_);
lean_ctor_set(v___x_1419_, 2, v_fst_1405_);
lean_ctor_set(v___x_1419_, 3, v___x_1418_);
if (v_isShared_1404_ == 0)
{
lean_ctor_set(v___x_1403_, 1, v_a_1397_);
lean_ctor_set(v___x_1403_, 0, v___x_1419_);
v___x_1421_ = v___x_1403_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v___x_1419_);
lean_ctor_set(v_reuseFailAlloc_1423_, 1, v_a_1397_);
v___x_1421_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
v_a_1396_ = v_tail_1401_;
v_a_1397_ = v___x_1421_;
goto _start;
}
}
v___jp_1424_:
{
uint8_t v_decide_1426_; 
v_decide_1426_ = lean_nat_dec_eq(v_stopPos_1407_, v_stopPos_1409_);
if (v_decide_1426_ == 0)
{
lean_object* v___x_1427_; 
v___x_1427_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0));
v___y_1412_ = v___y_1425_;
v___y_1413_ = v___x_1427_;
goto v___jp_1411_;
}
else
{
lean_inc_ref(v_trailing_1394_);
v___y_1412_ = v___y_1425_;
v___y_1413_ = v_trailing_1394_;
goto v___jp_1411_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0___boxed(lean_object* v_rawVal_1433_, lean_object* v_pos_1434_, lean_object* v_trailing_1435_, lean_object* v_leading_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0(v_rawVal_1433_, v_pos_1434_, v_trailing_1435_, v_leading_1436_, v_a_1437_, v_a_1438_);
lean_dec(v_pos_1434_);
lean_dec_ref(v_rawVal_1433_);
return v_res_1439_;
}
}
static lean_object* _init_l_Lean_Syntax_identComponents_x3f___closed__4(void){
_start:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; 
v___x_1445_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__3));
v___x_1446_ = lean_unsigned_to_nat(9u);
v___x_1447_ = lean_unsigned_to_nat(358u);
v___x_1448_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__2));
v___x_1449_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__1));
v___x_1450_ = l_mkPanicMessageWithDecl(v___x_1449_, v___x_1448_, v___x_1447_, v___x_1446_, v___x_1445_);
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents_x3f(lean_object* v_stx_1451_, lean_object* v_nFields_x3f_1452_){
_start:
{
if (lean_obj_tag(v_stx_1451_) == 3)
{
lean_object* v_info_1453_; 
v_info_1453_ = lean_ctor_get(v_stx_1451_, 0);
lean_inc(v_info_1453_);
if (lean_obj_tag(v_info_1453_) == 0)
{
lean_object* v_rawVal_1454_; lean_object* v_val_1455_; lean_object* v_leading_1456_; lean_object* v_pos_1457_; lean_object* v_trailing_1458_; lean_object* v_rawComps_1459_; uint8_t v___x_1460_; 
v_rawVal_1454_ = lean_ctor_get(v_stx_1451_, 1);
lean_inc_ref_n(v_rawVal_1454_, 2);
v_val_1455_ = lean_ctor_get(v_stx_1451_, 2);
lean_inc(v_val_1455_);
lean_dec_ref_known(v_stx_1451_, 4);
v_leading_1456_ = lean_ctor_get(v_info_1453_, 0);
lean_inc_ref(v_leading_1456_);
v_pos_1457_ = lean_ctor_get(v_info_1453_, 1);
lean_inc(v_pos_1457_);
v_trailing_1458_ = lean_ctor_get(v_info_1453_, 2);
lean_inc_ref(v_trailing_1458_);
lean_dec_ref_known(v_info_1453_, 4);
v_rawComps_1459_ = l_Lean_Syntax_splitNameLit(v_rawVal_1454_);
v___x_1460_ = l_List_isEmpty___redArg(v_rawComps_1459_);
if (v___x_1460_ == 0)
{
lean_object* v_val_1461_; lean_object* v_nameComps_1462_; lean_object* v___y_1464_; 
v_val_1461_ = l_Lean_Name_eraseMacroScopes(v_val_1455_);
lean_dec(v_val_1455_);
v_nameComps_1462_ = l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps(v_val_1461_, v_nFields_x3f_1452_);
if (lean_obj_tag(v_nFields_x3f_1452_) == 1)
{
lean_object* v_val_1478_; lean_object* v_str_1479_; lean_object* v_startPos_1480_; lean_object* v_stopPos_1481_; lean_object* v___x_1482_; lean_object* v_nPrefix_1483_; lean_object* v___y_1485_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v_prefixSz_1491_; lean_object* v___x_1492_; lean_object* v_prefixSz_1493_; lean_object* v___y_1495_; uint8_t v___x_1500_; 
v_val_1478_ = lean_ctor_get(v_nFields_x3f_1452_, 0);
v_str_1479_ = lean_ctor_get(v_rawVal_1454_, 0);
v_startPos_1480_ = lean_ctor_get(v_rawVal_1454_, 1);
v_stopPos_1481_ = lean_ctor_get(v_rawVal_1454_, 2);
v___x_1482_ = l_List_lengthTR___redArg(v_rawComps_1459_);
v_nPrefix_1483_ = lean_nat_sub(v___x_1482_, v_val_1478_);
lean_dec(v___x_1482_);
v___x_1488_ = lean_unsigned_to_nat(0u);
v___x_1489_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__0));
lean_inc(v_nPrefix_1483_);
lean_inc(v_rawComps_1459_);
v___x_1490_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_rawComps_1459_, v_rawComps_1459_, v_nPrefix_1483_, v___x_1489_);
v_prefixSz_1491_ = l_List_foldl___at___00Lean_Syntax_identComponents_x3f_spec__2(v___x_1488_, v___x_1490_);
lean_dec(v___x_1490_);
v___x_1492_ = lean_unsigned_to_nat(1u);
v_prefixSz_1493_ = lean_nat_sub(v_prefixSz_1491_, v___x_1492_);
lean_dec(v_prefixSz_1491_);
v___x_1500_ = lean_nat_dec_le(v_prefixSz_1493_, v___x_1488_);
if (v___x_1500_ == 0)
{
uint8_t v___x_1501_; 
v___x_1501_ = lean_nat_dec_le(v_stopPos_1481_, v_startPos_1480_);
if (v___x_1501_ == 0)
{
lean_inc(v_startPos_1480_);
v___y_1495_ = v_startPos_1480_;
goto v___jp_1494_;
}
else
{
lean_inc(v_stopPos_1481_);
v___y_1495_ = v_stopPos_1481_;
goto v___jp_1494_;
}
}
else
{
lean_object* v___x_1502_; 
lean_dec(v_prefixSz_1493_);
v___x_1502_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1___closed__0));
v___y_1485_ = v___x_1502_;
goto v___jp_1484_;
}
v___jp_1484_:
{
lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1486_ = l_List_drop___redArg(v_nPrefix_1483_, v_rawComps_1459_);
lean_dec(v_rawComps_1459_);
v___x_1487_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1487_, 0, v___y_1485_);
lean_ctor_set(v___x_1487_, 1, v___x_1486_);
v___y_1464_ = v___x_1487_;
goto v___jp_1463_;
}
v___jp_1494_:
{
lean_object* v___x_1496_; uint8_t v___x_1497_; 
v___x_1496_ = lean_nat_add(v_startPos_1480_, v_prefixSz_1493_);
lean_dec(v_prefixSz_1493_);
v___x_1497_ = lean_nat_dec_le(v_stopPos_1481_, v___x_1496_);
if (v___x_1497_ == 0)
{
lean_object* v___x_1498_; 
lean_inc_ref(v_str_1479_);
v___x_1498_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1498_, 0, v_str_1479_);
lean_ctor_set(v___x_1498_, 1, v___y_1495_);
lean_ctor_set(v___x_1498_, 2, v___x_1496_);
v___y_1485_ = v___x_1498_;
goto v___jp_1484_;
}
else
{
lean_object* v___x_1499_; 
lean_dec(v___x_1496_);
lean_inc(v_stopPos_1481_);
lean_inc_ref(v_str_1479_);
v___x_1499_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1499_, 0, v_str_1479_);
lean_ctor_set(v___x_1499_, 1, v___y_1495_);
lean_ctor_set(v___x_1499_, 2, v_stopPos_1481_);
v___y_1485_ = v___x_1499_;
goto v___jp_1484_;
}
}
}
else
{
v___y_1464_ = v_rawComps_1459_;
goto v___jp_1463_;
}
v___jp_1463_:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; uint8_t v___x_1467_; 
v___x_1465_ = l_List_lengthTR___redArg(v_nameComps_1462_);
v___x_1466_ = l_List_lengthTR___redArg(v___y_1464_);
v___x_1467_ = lean_nat_dec_eq(v___x_1465_, v___x_1466_);
lean_dec(v___x_1466_);
lean_dec(v___x_1465_);
if (v___x_1467_ == 0)
{
lean_object* v___x_1468_; 
lean_dec(v___y_1464_);
lean_dec(v_nameComps_1462_);
lean_dec_ref(v_trailing_1458_);
lean_dec(v_pos_1457_);
lean_dec_ref(v_leading_1456_);
lean_dec_ref(v_rawVal_1454_);
v___x_1468_ = lean_box(0);
return v___x_1468_;
}
else
{
lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v_comps_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v_seps_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
lean_inc(v___y_1464_);
v___x_1469_ = l_List_zipWith___at___00List_zip_spec__0(lean_box(0), lean_box(0), v_nameComps_1462_, v___y_1464_);
v___x_1470_ = lean_box(0);
v_comps_1471_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__0(v_rawVal_1454_, v_pos_1457_, v_trailing_1458_, v_leading_1456_, v___x_1469_, v___x_1470_);
v___x_1472_ = lean_array_mk(v___y_1464_);
v___x_1473_ = lean_array_pop(v___x_1472_);
v___x_1474_ = lean_array_to_list(v___x_1473_);
v_seps_1475_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_x3f_spec__1(v_rawVal_1454_, v_pos_1457_, v___x_1474_, v___x_1470_);
lean_dec(v_pos_1457_);
lean_dec_ref(v_rawVal_1454_);
v___x_1476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1476_, 0, v_comps_1471_);
lean_ctor_set(v___x_1476_, 1, v_seps_1475_);
v___x_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1477_, 0, v___x_1476_);
return v___x_1477_;
}
}
}
else
{
lean_object* v___x_1503_; 
lean_dec(v_rawComps_1459_);
lean_dec_ref(v_trailing_1458_);
lean_dec(v_pos_1457_);
lean_dec_ref(v_leading_1456_);
lean_dec(v_val_1455_);
lean_dec_ref(v_rawVal_1454_);
v___x_1503_ = lean_box(0);
return v___x_1503_;
}
}
else
{
lean_object* v___x_1504_; 
lean_dec(v_info_1453_);
lean_dec_ref_known(v_stx_1451_, 4);
v___x_1504_ = lean_box(0);
return v___x_1504_;
}
}
else
{
lean_object* v___x_1505_; lean_object* v___x_1506_; 
lean_dec(v_stx_1451_);
v___x_1505_ = lean_obj_once(&l_Lean_Syntax_identComponents_x3f___closed__4, &l_Lean_Syntax_identComponents_x3f___closed__4_once, _init_l_Lean_Syntax_identComponents_x3f___closed__4);
v___x_1506_ = l_panic___at___00Lean_Syntax_identComponents_x3f_spec__3(v___x_1505_);
return v___x_1506_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents_x3f___boxed(lean_object* v_stx_1507_, lean_object* v_nFields_x3f_1508_){
_start:
{
lean_object* v_res_1509_; 
v_res_1509_ = l_Lean_Syntax_identComponents_x3f(v_stx_1507_, v_nFields_x3f_1508_);
lean_dec(v_nFields_x3f_1508_);
return v_res_1509_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps(lean_object* v_n_1510_, lean_object* v_nFields_x3f_1511_){
_start:
{
if (lean_obj_tag(v_nFields_x3f_1511_) == 1)
{
lean_object* v_val_1512_; lean_object* v_nameComps_1513_; lean_object* v___x_1514_; lean_object* v_nPrefix_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v_namePrefix_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; 
v_val_1512_ = lean_ctor_get(v_nFields_x3f_1511_, 0);
v_nameComps_1513_ = l_Lean_Name_components(v_n_1510_);
v___x_1514_ = l_List_lengthTR___redArg(v_nameComps_1513_);
v_nPrefix_1515_ = lean_nat_sub(v___x_1514_, v_val_1512_);
lean_dec(v___x_1514_);
v___x_1516_ = lean_box(0);
v___x_1517_ = ((lean_object*)(l___private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps___closed__0));
lean_inc(v_nPrefix_1515_);
lean_inc(v_nameComps_1513_);
v___x_1518_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_nameComps_1513_, v_nameComps_1513_, v_nPrefix_1515_, v___x_1517_);
v_namePrefix_1519_ = l_List_foldl___at___00__private_Lean_Syntax_0__Lean_Syntax_identComponents_x3f_nameComps_spec__0(v___x_1516_, v___x_1518_);
v___x_1520_ = l_List_drop___redArg(v_nPrefix_1515_, v_nameComps_1513_);
lean_dec(v_nameComps_1513_);
v___x_1521_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1521_, 0, v_namePrefix_1519_);
lean_ctor_set(v___x_1521_, 1, v___x_1520_);
return v___x_1521_;
}
else
{
lean_object* v___x_1522_; 
v___x_1522_ = l_Lean_Name_components(v_n_1510_);
return v___x_1522_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps___boxed(lean_object* v_n_1523_, lean_object* v_nFields_x3f_1524_){
_start:
{
lean_object* v_res_1525_; 
v_res_1525_ = l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps(v_n_1523_, v_nFields_x3f_1524_);
lean_dec(v_nFields_x3f_1524_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Syntax_identComponents_spec__1(lean_object* v_msg_1526_){
_start:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = lean_box(0);
v___x_1528_ = lean_panic_fn_borrowed(v___x_1527_, v_msg_1526_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Syntax_identComponents_spec__0(lean_object* v_info_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_){
_start:
{
if (lean_obj_tag(v_a_1530_) == 0)
{
lean_object* v___x_1532_; 
lean_dec(v_info_1529_);
v___x_1532_ = l_List_reverse___redArg(v_a_1531_);
return v___x_1532_;
}
else
{
lean_object* v_head_1533_; lean_object* v_tail_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1549_; 
v_head_1533_ = lean_ctor_get(v_a_1530_, 0);
v_tail_1534_ = lean_ctor_get(v_a_1530_, 1);
v_isSharedCheck_1549_ = !lean_is_exclusive(v_a_1530_);
if (v_isSharedCheck_1549_ == 0)
{
v___x_1536_ = v_a_1530_;
v_isShared_1537_ = v_isSharedCheck_1549_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_tail_1534_);
lean_inc(v_head_1533_);
lean_dec(v_a_1530_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1549_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
uint8_t v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1546_; 
v___x_1538_ = 1;
lean_inc(v_head_1533_);
v___x_1539_ = l_Lean_Name_toString(v_head_1533_, v___x_1538_);
v___x_1540_ = lean_unsigned_to_nat(0u);
v___x_1541_ = lean_string_utf8_byte_size(v___x_1539_);
v___x_1542_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1539_);
lean_ctor_set(v___x_1542_, 1, v___x_1540_);
lean_ctor_set(v___x_1542_, 2, v___x_1541_);
v___x_1543_ = lean_box(0);
lean_inc(v_info_1529_);
v___x_1544_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1544_, 0, v_info_1529_);
lean_ctor_set(v___x_1544_, 1, v___x_1542_);
lean_ctor_set(v___x_1544_, 2, v_head_1533_);
lean_ctor_set(v___x_1544_, 3, v___x_1543_);
if (v_isShared_1537_ == 0)
{
lean_ctor_set(v___x_1536_, 1, v_a_1531_);
lean_ctor_set(v___x_1536_, 0, v___x_1544_);
v___x_1546_ = v___x_1536_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v___x_1544_);
lean_ctor_set(v_reuseFailAlloc_1548_, 1, v_a_1531_);
v___x_1546_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
v_a_1530_ = v_tail_1534_;
v_a_1531_ = v___x_1546_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Syntax_identComponents___closed__1(void){
_start:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1551_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__3));
v___x_1552_ = lean_unsigned_to_nat(9u);
v___x_1553_ = lean_unsigned_to_nat(393u);
v___x_1554_ = ((lean_object*)(l_Lean_Syntax_identComponents___closed__0));
v___x_1555_ = ((lean_object*)(l_Lean_Syntax_identComponents_x3f___closed__1));
v___x_1556_ = l_mkPanicMessageWithDecl(v___x_1555_, v___x_1554_, v___x_1553_, v___x_1552_, v___x_1551_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents(lean_object* v_stx_1557_, lean_object* v_nFields_x3f_1558_){
_start:
{
if (lean_obj_tag(v_stx_1557_) == 3)
{
lean_object* v_info_1559_; lean_object* v_rawVal_1560_; lean_object* v_val_1561_; lean_object* v_val_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; uint8_t v___x_1565_; 
v_info_1559_ = lean_ctor_get(v_stx_1557_, 0);
lean_inc(v_info_1559_);
v_rawVal_1560_ = lean_ctor_get(v_stx_1557_, 1);
v_val_1561_ = lean_ctor_get(v_stx_1557_, 2);
v_val_1562_ = l_Lean_Name_eraseMacroScopes(v_val_1561_);
v___x_1563_ = l_Lean_Name_getNumParts(v_val_1562_);
v___x_1564_ = lean_unsigned_to_nat(1u);
v___x_1565_ = lean_nat_dec_le(v___x_1563_, v___x_1564_);
lean_dec(v___x_1563_);
if (v___x_1565_ == 0)
{
if (lean_obj_tag(v_info_1559_) == 0)
{
lean_object* v___x_1566_; 
v___x_1566_ = l_Lean_Syntax_identComponents_x3f(v_stx_1557_, v_nFields_x3f_1558_);
if (lean_obj_tag(v___x_1566_) == 1)
{
lean_object* v_val_1567_; lean_object* v_fst_1568_; 
lean_dec_ref_known(v_info_1559_, 4);
lean_dec(v_val_1562_);
v_val_1567_ = lean_ctor_get(v___x_1566_, 0);
lean_inc(v_val_1567_);
lean_dec_ref_known(v___x_1566_, 1);
v_fst_1568_ = lean_ctor_get(v_val_1567_, 0);
lean_inc(v_fst_1568_);
lean_dec(v_val_1567_);
return v_fst_1568_;
}
else
{
lean_object* v_nameComps_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; 
lean_dec(v___x_1566_);
v_nameComps_1569_ = l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps(v_val_1562_, v_nFields_x3f_1558_);
v___x_1570_ = lean_box(0);
v___x_1571_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_spec__0(v_info_1559_, v_nameComps_1569_, v___x_1570_);
return v___x_1571_;
}
}
else
{
lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; 
lean_dec_ref_known(v_stx_1557_, 4);
v___x_1572_ = l___private_Lean_Syntax_0__Lean_Syntax_identComponents_nameComps(v_val_1562_, v_nFields_x3f_1558_);
v___x_1573_ = lean_box(0);
v___x_1574_ = l_List_mapTR_loop___at___00Lean_Syntax_identComponents_spec__0(v_info_1559_, v___x_1572_, v___x_1573_);
return v___x_1574_;
}
}
else
{
lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1583_; 
lean_inc_ref(v_rawVal_1560_);
v_isSharedCheck_1583_ = !lean_is_exclusive(v_stx_1557_);
if (v_isSharedCheck_1583_ == 0)
{
lean_object* v_unused_1584_; lean_object* v_unused_1585_; lean_object* v_unused_1586_; lean_object* v_unused_1587_; 
v_unused_1584_ = lean_ctor_get(v_stx_1557_, 3);
lean_dec(v_unused_1584_);
v_unused_1585_ = lean_ctor_get(v_stx_1557_, 2);
lean_dec(v_unused_1585_);
v_unused_1586_ = lean_ctor_get(v_stx_1557_, 1);
lean_dec(v_unused_1586_);
v_unused_1587_ = lean_ctor_get(v_stx_1557_, 0);
lean_dec(v_unused_1587_);
v___x_1576_ = v_stx_1557_;
v_isShared_1577_ = v_isSharedCheck_1583_;
goto v_resetjp_1575_;
}
else
{
lean_dec(v_stx_1557_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1583_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1578_; lean_object* v___x_1580_; 
v___x_1578_ = lean_box(0);
if (v_isShared_1577_ == 0)
{
lean_ctor_set(v___x_1576_, 3, v___x_1578_);
lean_ctor_set(v___x_1576_, 2, v_val_1562_);
v___x_1580_ = v___x_1576_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v_info_1559_);
lean_ctor_set(v_reuseFailAlloc_1582_, 1, v_rawVal_1560_);
lean_ctor_set(v_reuseFailAlloc_1582_, 2, v_val_1562_);
lean_ctor_set(v_reuseFailAlloc_1582_, 3, v___x_1578_);
v___x_1580_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
lean_object* v___x_1581_; 
v___x_1581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1580_);
lean_ctor_set(v___x_1581_, 1, v___x_1578_);
return v___x_1581_;
}
}
}
}
else
{
lean_object* v___x_1588_; lean_object* v___x_1589_; 
lean_dec(v_stx_1557_);
v___x_1588_ = lean_obj_once(&l_Lean_Syntax_identComponents___closed__1, &l_Lean_Syntax_identComponents___closed__1_once, _init_l_Lean_Syntax_identComponents___closed__1);
v___x_1589_ = l_panic___at___00Lean_Syntax_identComponents_spec__1(v___x_1588_);
return v___x_1589_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_identComponents___boxed(lean_object* v_stx_1590_, lean_object* v_nFields_x3f_1591_){
_start:
{
lean_object* v_res_1592_; 
v_res_1592_ = l_Lean_Syntax_identComponents(v_stx_1590_, v_nFields_x3f_1591_);
lean_dec(v_nFields_x3f_1591_);
return v_res_1592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_topDown(lean_object* v_stx_1593_, uint8_t v_firstChoiceOnly_1594_){
_start:
{
lean_object* v___x_1595_; 
v___x_1595_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1595_, 0, v_stx_1593_);
lean_ctor_set_uint8(v___x_1595_, sizeof(void*)*1, v_firstChoiceOnly_1594_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_topDown___boxed(lean_object* v_stx_1596_, lean_object* v_firstChoiceOnly_1597_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1598_; lean_object* v_res_1599_; 
v_firstChoiceOnly_boxed_1598_ = lean_unbox(v_firstChoiceOnly_1597_);
v_res_1599_ = l_Lean_Syntax_topDown(v_stx_1596_, v_firstChoiceOnly_boxed_1598_);
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__0(lean_object* v_toPure_1600_, lean_object* v_____r_1601_, lean_object* v_b_1602_){
_start:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1603_, 0, v_b_1602_);
v___x_1604_ = lean_apply_2(v_toPure_1600_, lean_box(0), v___x_1603_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__1(lean_object* v___f_1605_, lean_object* v_toPure_1606_, lean_object* v_____s_1607_){
_start:
{
lean_object* v_fst_1608_; 
v_fst_1608_ = lean_ctor_get(v_____s_1607_, 0);
if (lean_obj_tag(v_fst_1608_) == 0)
{
lean_object* v_snd_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
lean_dec(v_toPure_1606_);
v_snd_1609_ = lean_ctor_get(v_____s_1607_, 1);
lean_inc(v_snd_1609_);
lean_dec_ref(v_____s_1607_);
v___x_1610_ = lean_box(0);
v___x_1611_ = lean_apply_2(v___f_1605_, v___x_1610_, v_snd_1609_);
return v___x_1611_;
}
else
{
lean_object* v_val_1612_; lean_object* v___x_1613_; 
lean_inc_ref(v_fst_1608_);
lean_dec_ref(v_____s_1607_);
lean_dec(v___f_1605_);
v_val_1612_ = lean_ctor_get(v_fst_1608_, 0);
lean_inc(v_val_1612_);
lean_dec_ref_known(v_fst_1608_, 1);
v___x_1613_ = lean_apply_2(v_toPure_1606_, lean_box(0), v_val_1612_);
return v___x_1613_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__2(lean_object* v_snd_1614_, lean_object* v_toPure_1615_, lean_object* v___x_1616_, lean_object* v_____do__lift_1617_){
_start:
{
if (lean_obj_tag(v_____do__lift_1617_) == 0)
{
lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
lean_dec(v___x_1616_);
v___x_1618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1618_, 0, v_____do__lift_1617_);
v___x_1619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1618_);
lean_ctor_set(v___x_1619_, 1, v_snd_1614_);
v___x_1620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1619_);
v___x_1621_ = lean_apply_2(v_toPure_1615_, lean_box(0), v___x_1620_);
return v___x_1621_;
}
else
{
lean_object* v_a_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1631_; 
lean_dec(v_snd_1614_);
v_a_1622_ = lean_ctor_get(v_____do__lift_1617_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v_____do__lift_1617_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1624_ = v_____do__lift_1617_;
v_isShared_1625_ = v_isSharedCheck_1631_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_a_1622_);
lean_dec(v_____do__lift_1617_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1631_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1626_; lean_object* v___x_1628_; 
v___x_1626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1626_, 0, v___x_1616_);
lean_ctor_set(v___x_1626_, 1, v_a_1622_);
if (v_isShared_1625_ == 0)
{
lean_ctor_set(v___x_1624_, 0, v___x_1626_);
v___x_1628_ = v___x_1624_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v___x_1626_);
v___x_1628_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
lean_object* v___x_1629_; 
v___x_1629_ = lean_apply_2(v_toPure_1615_, lean_box(0), v___x_1628_);
return v___x_1629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3___boxed(lean_object* v_toPure_1632_, lean_object* v___x_1633_, lean_object* v_inst_1634_, lean_object* v_f_1635_, lean_object* v_firstChoiceOnly_1636_, lean_object* v_toBind_1637_, lean_object* v_a_1638_, lean_object* v_x_1639_, lean_object* v___y_1640_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1641_; lean_object* v_res_1642_; 
v_firstChoiceOnly_boxed_1641_ = lean_unbox(v_firstChoiceOnly_1636_);
v_res_1642_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3(v_toPure_1632_, v___x_1633_, v_inst_1634_, v_f_1635_, v_firstChoiceOnly_boxed_1641_, v_toBind_1637_, v_a_1638_, v_x_1639_, v___y_1640_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4(lean_object* v_toPure_1646_, lean_object* v_stx_1647_, lean_object* v_inst_1648_, lean_object* v_f_1649_, uint8_t v_firstChoiceOnly_1650_, lean_object* v_toBind_1651_, lean_object* v___f_1652_, lean_object* v___x_1653_, lean_object* v___f_1654_, lean_object* v_____do__lift_1655_){
_start:
{
if (lean_obj_tag(v_____do__lift_1655_) == 0)
{
lean_object* v___x_1656_; 
lean_dec(v___f_1654_);
lean_dec(v___f_1652_);
lean_dec(v_toBind_1651_);
lean_dec(v_f_1649_);
lean_dec_ref(v_inst_1648_);
lean_dec(v_stx_1647_);
v___x_1656_ = lean_apply_2(v_toPure_1646_, lean_box(0), v_____do__lift_1655_);
return v___x_1656_;
}
else
{
if (lean_obj_tag(v_stx_1647_) == 1)
{
lean_object* v_a_1657_; lean_object* v_kind_1658_; lean_object* v_args_1659_; 
lean_dec(v___f_1654_);
v_a_1657_ = lean_ctor_get(v_____do__lift_1655_, 0);
lean_inc(v_a_1657_);
lean_dec_ref_known(v_____do__lift_1655_, 1);
v_kind_1658_ = lean_ctor_get(v_stx_1647_, 1);
lean_inc(v_kind_1658_);
v_args_1659_ = lean_ctor_get(v_stx_1647_, 2);
lean_inc_ref(v_args_1659_);
lean_dec_ref_known(v_stx_1647_, 3);
if (v_firstChoiceOnly_1650_ == 0)
{
lean_dec(v_kind_1658_);
goto v___jp_1660_;
}
else
{
lean_object* v___x_1669_; uint8_t v___x_1670_; 
v___x_1669_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
v___x_1670_ = lean_name_eq(v_kind_1658_, v___x_1669_);
lean_dec(v_kind_1658_);
if (v___x_1670_ == 0)
{
goto v___jp_1660_;
}
else
{
lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
lean_dec(v___f_1652_);
lean_dec(v_toBind_1651_);
lean_dec(v_toPure_1646_);
v___x_1671_ = lean_unsigned_to_nat(0u);
v___x_1672_ = lean_array_get(v___x_1653_, v_args_1659_, v___x_1671_);
lean_dec_ref(v_args_1659_);
v___x_1673_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(v_inst_1648_, v_f_1649_, v_firstChoiceOnly_1650_, v___x_1672_, v_a_1657_);
return v___x_1673_;
}
}
v___jp_1660_:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___f_1663_; lean_object* v___x_1664_; size_t v_sz_1665_; size_t v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v___x_1661_ = lean_box(0);
v___x_1662_ = lean_box(v_firstChoiceOnly_1650_);
lean_inc(v_toBind_1651_);
lean_inc_ref(v_inst_1648_);
v___f_1663_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3___boxed), 9, 6);
lean_closure_set(v___f_1663_, 0, v_toPure_1646_);
lean_closure_set(v___f_1663_, 1, v___x_1661_);
lean_closure_set(v___f_1663_, 2, v_inst_1648_);
lean_closure_set(v___f_1663_, 3, v_f_1649_);
lean_closure_set(v___f_1663_, 4, v___x_1662_);
lean_closure_set(v___f_1663_, 5, v_toBind_1651_);
v___x_1664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1661_);
lean_ctor_set(v___x_1664_, 1, v_a_1657_);
v_sz_1665_ = lean_array_size(v_args_1659_);
v___x_1666_ = ((size_t)0ULL);
v___x_1667_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1648_, v_args_1659_, v___f_1663_, v_sz_1665_, v___x_1666_, v___x_1664_);
v___x_1668_ = lean_apply_4(v_toBind_1651_, lean_box(0), lean_box(0), v___x_1667_, v___f_1652_);
return v___x_1668_;
}
}
else
{
lean_object* v_a_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; 
lean_dec(v___f_1652_);
lean_dec(v_toBind_1651_);
lean_dec(v_f_1649_);
lean_dec_ref(v_inst_1648_);
lean_dec(v_stx_1647_);
lean_dec(v_toPure_1646_);
v_a_1674_ = lean_ctor_get(v_____do__lift_1655_, 0);
lean_inc(v_a_1674_);
lean_dec_ref_known(v_____do__lift_1655_, 1);
v___x_1675_ = lean_box(0);
v___x_1676_ = lean_apply_2(v___f_1654_, v___x_1675_, v_a_1674_);
return v___x_1676_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___boxed(lean_object* v_toPure_1677_, lean_object* v_stx_1678_, lean_object* v_inst_1679_, lean_object* v_f_1680_, lean_object* v_firstChoiceOnly_1681_, lean_object* v_toBind_1682_, lean_object* v___f_1683_, lean_object* v___x_1684_, lean_object* v___f_1685_, lean_object* v_____do__lift_1686_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1687_; lean_object* v_res_1688_; 
v_firstChoiceOnly_boxed_1687_ = lean_unbox(v_firstChoiceOnly_1681_);
v_res_1688_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4(v_toPure_1677_, v_stx_1678_, v_inst_1679_, v_f_1680_, v_firstChoiceOnly_boxed_1687_, v_toBind_1682_, v___f_1683_, v___x_1684_, v___f_1685_, v_____do__lift_1686_);
lean_dec(v___x_1684_);
return v_res_1688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(lean_object* v_inst_1689_, lean_object* v_f_1690_, uint8_t v_firstChoiceOnly_1691_, lean_object* v_stx_1692_, lean_object* v_b_1693_){
_start:
{
lean_object* v_toApplicative_1694_; lean_object* v_toBind_1695_; lean_object* v_toPure_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___f_1699_; lean_object* v___f_1700_; lean_object* v___x_1701_; lean_object* v___f_1702_; lean_object* v___x_1703_; 
v_toApplicative_1694_ = lean_ctor_get(v_inst_1689_, 0);
v_toBind_1695_ = lean_ctor_get(v_inst_1689_, 1);
lean_inc_n(v_toBind_1695_, 2);
v_toPure_1696_ = lean_ctor_get(v_toApplicative_1694_, 1);
lean_inc_n(v_toPure_1696_, 3);
v___x_1697_ = lean_box(0);
lean_inc(v_f_1690_);
lean_inc(v_stx_1692_);
v___x_1698_ = lean_apply_2(v_f_1690_, v_stx_1692_, v_b_1693_);
v___f_1699_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1699_, 0, v_toPure_1696_);
lean_inc_ref(v___f_1699_);
v___f_1700_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1700_, 0, v___f_1699_);
lean_closure_set(v___f_1700_, 1, v_toPure_1696_);
v___x_1701_ = lean_box(v_firstChoiceOnly_1691_);
v___f_1702_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___boxed), 10, 9);
lean_closure_set(v___f_1702_, 0, v_toPure_1696_);
lean_closure_set(v___f_1702_, 1, v_stx_1692_);
lean_closure_set(v___f_1702_, 2, v_inst_1689_);
lean_closure_set(v___f_1702_, 3, v_f_1690_);
lean_closure_set(v___f_1702_, 4, v___x_1701_);
lean_closure_set(v___f_1702_, 5, v_toBind_1695_);
lean_closure_set(v___f_1702_, 6, v___f_1700_);
lean_closure_set(v___f_1702_, 7, v___x_1697_);
lean_closure_set(v___f_1702_, 8, v___f_1699_);
v___x_1703_ = lean_apply_4(v_toBind_1695_, lean_box(0), lean_box(0), v___x_1698_, v___f_1702_);
return v___x_1703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__3(lean_object* v_toPure_1704_, lean_object* v___x_1705_, lean_object* v_inst_1706_, lean_object* v_f_1707_, uint8_t v_firstChoiceOnly_1708_, lean_object* v_toBind_1709_, lean_object* v_a_1710_, lean_object* v_x_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v_snd_1713_; lean_object* v___f_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; 
v_snd_1713_ = lean_ctor_get(v___y_1712_, 1);
lean_inc_n(v_snd_1713_, 2);
lean_dec_ref(v___y_1712_);
v___f_1714_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1714_, 0, v_snd_1713_);
lean_closure_set(v___f_1714_, 1, v_toPure_1704_);
lean_closure_set(v___f_1714_, 2, v___x_1705_);
v___x_1715_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(v_inst_1706_, v_f_1707_, v_firstChoiceOnly_1708_, v_a_1710_, v_snd_1713_);
v___x_1716_ = lean_apply_4(v_toBind_1709_, lean_box(0), lean_box(0), v___x_1715_, v___f_1714_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___boxed(lean_object* v_inst_1717_, lean_object* v_f_1718_, lean_object* v_firstChoiceOnly_1719_, lean_object* v_stx_1720_, lean_object* v_b_1721_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1722_; lean_object* v_res_1723_; 
v_firstChoiceOnly_boxed_1722_ = lean_unbox(v_firstChoiceOnly_1719_);
v_res_1723_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(v_inst_1717_, v_f_1718_, v_firstChoiceOnly_boxed_1722_, v_stx_1720_, v_b_1721_);
return v_res_1723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop(lean_object* v_m_1724_, lean_object* v_inst_1725_, lean_object* v_00_u03b2_1726_, lean_object* v_f_1727_, uint8_t v_firstChoiceOnly_1728_, lean_object* v_stx_1729_, lean_object* v_b_1730_, lean_object* v_inst_1731_){
_start:
{
lean_object* v___x_1732_; 
v___x_1732_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(v_inst_1725_, v_f_1727_, v_firstChoiceOnly_1728_, v_stx_1729_, v_b_1730_);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___boxed(lean_object* v_m_1733_, lean_object* v_inst_1734_, lean_object* v_00_u03b2_1735_, lean_object* v_f_1736_, lean_object* v_firstChoiceOnly_1737_, lean_object* v_stx_1738_, lean_object* v_b_1739_, lean_object* v_inst_1740_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1741_; lean_object* v_res_1742_; 
v_firstChoiceOnly_boxed_1741_ = lean_unbox(v_firstChoiceOnly_1737_);
v_res_1742_ = l_Lean_Syntax_instForInTopDownOfMonad_loop(v_m_1733_, v_inst_1734_, v_00_u03b2_1735_, v_f_1736_, v_firstChoiceOnly_boxed_1741_, v_stx_1738_, v_b_1739_, v_inst_1740_);
lean_dec(v_inst_1740_);
return v_res_1742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__0(lean_object* v_toPure_1743_, lean_object* v_____do__lift_1744_){
_start:
{
lean_object* v_a_1745_; lean_object* v___x_1746_; 
v_a_1745_ = lean_ctor_get(v_____do__lift_1744_, 0);
lean_inc(v_a_1745_);
lean_dec_ref(v_____do__lift_1744_);
v___x_1746_ = lean_apply_2(v_toPure_1743_, lean_box(0), v_a_1745_);
return v___x_1746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__1(lean_object* v_inst_1747_, lean_object* v_toBind_1748_, lean_object* v___f_1749_, lean_object* v_00_u03b2_1750_, lean_object* v_x_1751_, lean_object* v_init_1752_, lean_object* v_f_1753_){
_start:
{
uint8_t v_firstChoiceOnly_1754_; lean_object* v_stx_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
v_firstChoiceOnly_1754_ = lean_ctor_get_uint8(v_x_1751_, sizeof(void*)*1);
v_stx_1755_ = lean_ctor_get(v_x_1751_, 0);
lean_inc(v_stx_1755_);
lean_dec_ref(v_x_1751_);
v___x_1756_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg(v_inst_1747_, v_f_1753_, v_firstChoiceOnly_1754_, v_stx_1755_, v_init_1752_);
v___x_1757_ = lean_apply_4(v_toBind_1748_, lean_box(0), lean_box(0), v___x_1756_, v___f_1749_);
return v___x_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad___redArg(lean_object* v_inst_1758_){
_start:
{
lean_object* v_toApplicative_1759_; lean_object* v_toBind_1760_; lean_object* v_toPure_1761_; lean_object* v___f_1762_; lean_object* v___f_1763_; 
v_toApplicative_1759_ = lean_ctor_get(v_inst_1758_, 0);
v_toBind_1760_ = lean_ctor_get(v_inst_1758_, 1);
lean_inc(v_toBind_1760_);
v_toPure_1761_ = lean_ctor_get(v_toApplicative_1759_, 1);
lean_inc(v_toPure_1761_);
v___f_1762_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1762_, 0, v_toPure_1761_);
v___f_1763_ = lean_alloc_closure((void*)(l_Lean_Syntax_instForInTopDownOfMonad___redArg___lam__1), 7, 3);
lean_closure_set(v___f_1763_, 0, v_inst_1758_);
lean_closure_set(v___f_1763_, 1, v_toBind_1760_);
lean_closure_set(v___f_1763_, 2, v___f_1762_);
return v___f_1763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad(lean_object* v_m_1764_, lean_object* v_inst_1765_){
_start:
{
lean_object* v___x_1766_; 
v___x_1766_ = l_Lean_Syntax_instForInTopDownOfMonad___redArg(v_inst_1765_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf(lean_object* v_info_1768_, lean_object* v_val_1769_){
_start:
{
if (lean_obj_tag(v_info_1768_) == 0)
{
lean_object* v_leading_1770_; lean_object* v_trailing_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; 
v_leading_1770_ = lean_ctor_get(v_info_1768_, 0);
lean_inc_ref(v_leading_1770_);
v_trailing_1771_ = lean_ctor_get(v_info_1768_, 2);
lean_inc_ref(v_trailing_1771_);
lean_dec_ref_known(v_info_1768_, 4);
v___x_1772_ = lean_substring_tostring(v_leading_1770_);
v___x_1773_ = lean_string_append(v___x_1772_, v_val_1769_);
v___x_1774_ = lean_substring_tostring(v_trailing_1771_);
v___x_1775_ = lean_string_append(v___x_1773_, v___x_1774_);
lean_dec_ref(v___x_1774_);
return v___x_1775_;
}
else
{
lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; 
lean_dec(v_info_1768_);
v___x_1776_ = ((lean_object*)(l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___closed__0));
v___x_1777_ = lean_string_append(v___x_1776_, v_val_1769_);
v___x_1778_ = lean_string_append(v___x_1777_, v___x_1776_);
return v___x_1778_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf___boxed(lean_object* v_info_1779_, lean_object* v_val_1780_){
_start:
{
lean_object* v_res_1781_; 
v_res_1781_ = l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf(v_info_1779_, v_val_1780_);
lean_dec_ref(v_val_1780_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1(uint8_t v_firstChoiceOnly_1782_, lean_object* v_as_1783_, size_t v_sz_1784_, size_t v_i_1785_, lean_object* v_b_1786_){
_start:
{
uint8_t v___x_1787_; 
v___x_1787_ = lean_usize_dec_lt(v_i_1785_, v_sz_1784_);
if (v___x_1787_ == 0)
{
lean_object* v___x_1788_; 
v___x_1788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1788_, 0, v_b_1786_);
return v___x_1788_;
}
else
{
lean_object* v_snd_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1816_; 
v_snd_1789_ = lean_ctor_get(v_b_1786_, 1);
v_isSharedCheck_1816_ = !lean_is_exclusive(v_b_1786_);
if (v_isSharedCheck_1816_ == 0)
{
lean_object* v_unused_1817_; 
v_unused_1817_ = lean_ctor_get(v_b_1786_, 0);
lean_dec(v_unused_1817_);
v___x_1791_ = v_b_1786_;
v_isShared_1792_ = v_isSharedCheck_1816_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_snd_1789_);
lean_dec(v_b_1786_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1816_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v_a_1793_; lean_object* v___x_1794_; 
v_a_1793_ = lean_array_uget_borrowed(v_as_1783_, v_i_1785_);
lean_inc(v_snd_1789_);
lean_inc(v_a_1793_);
v___x_1794_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1(v_firstChoiceOnly_1782_, v_a_1793_, v_snd_1789_);
if (lean_obj_tag(v___x_1794_) == 0)
{
lean_object* v___x_1795_; 
lean_del_object(v___x_1791_);
lean_dec(v_snd_1789_);
v___x_1795_ = lean_box(0);
return v___x_1795_;
}
else
{
lean_object* v_val_1796_; 
v_val_1796_ = lean_ctor_get(v___x_1794_, 0);
lean_inc(v_val_1796_);
if (lean_obj_tag(v_val_1796_) == 0)
{
lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1806_; 
v_isSharedCheck_1806_ = !lean_is_exclusive(v_val_1796_);
if (v_isSharedCheck_1806_ == 0)
{
lean_object* v_unused_1807_; 
v_unused_1807_ = lean_ctor_get(v_val_1796_, 0);
lean_dec(v_unused_1807_);
v___x_1798_ = v_val_1796_;
v_isShared_1799_ = v_isSharedCheck_1806_;
goto v_resetjp_1797_;
}
else
{
lean_dec(v_val_1796_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1806_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1801_; 
if (v_isShared_1792_ == 0)
{
lean_ctor_set(v___x_1791_, 0, v___x_1794_);
v___x_1801_ = v___x_1791_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v___x_1794_);
lean_ctor_set(v_reuseFailAlloc_1805_, 1, v_snd_1789_);
v___x_1801_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
lean_object* v___x_1803_; 
if (v_isShared_1799_ == 0)
{
lean_ctor_set_tag(v___x_1798_, 1);
lean_ctor_set(v___x_1798_, 0, v___x_1801_);
v___x_1803_ = v___x_1798_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v___x_1801_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
return v___x_1803_;
}
}
}
}
else
{
lean_object* v_a_1808_; lean_object* v___x_1809_; lean_object* v___x_1811_; 
lean_dec_ref_known(v___x_1794_, 1);
lean_dec(v_snd_1789_);
v_a_1808_ = lean_ctor_get(v_val_1796_, 0);
lean_inc(v_a_1808_);
lean_dec_ref_known(v_val_1796_, 1);
v___x_1809_ = lean_box(0);
if (v_isShared_1792_ == 0)
{
lean_ctor_set(v___x_1791_, 1, v_a_1808_);
lean_ctor_set(v___x_1791_, 0, v___x_1809_);
v___x_1811_ = v___x_1791_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v___x_1809_);
lean_ctor_set(v_reuseFailAlloc_1815_, 1, v_a_1808_);
v___x_1811_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
size_t v___x_1812_; size_t v___x_1813_; 
v___x_1812_ = ((size_t)1ULL);
v___x_1813_ = lean_usize_add(v_i_1785_, v___x_1812_);
v_i_1785_ = v___x_1813_;
v_b_1786_ = v___x_1811_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg(lean_object* v_val_1818_, lean_object* v_a_1819_, lean_object* v_b_1820_){
_start:
{
lean_object* v_array_1821_; lean_object* v_start_1822_; lean_object* v_stop_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1842_; 
v_array_1821_ = lean_ctor_get(v_a_1819_, 0);
v_start_1822_ = lean_ctor_get(v_a_1819_, 1);
v_stop_1823_ = lean_ctor_get(v_a_1819_, 2);
v_isSharedCheck_1842_ = !lean_is_exclusive(v_a_1819_);
if (v_isSharedCheck_1842_ == 0)
{
v___x_1825_ = v_a_1819_;
v_isShared_1826_ = v_isSharedCheck_1842_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_stop_1823_);
lean_inc(v_start_1822_);
lean_inc(v_array_1821_);
lean_dec(v_a_1819_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1842_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
uint8_t v___x_1827_; 
v___x_1827_ = lean_nat_dec_lt(v_start_1822_, v_stop_1823_);
if (v___x_1827_ == 0)
{
lean_object* v___x_1828_; 
lean_del_object(v___x_1825_);
lean_dec(v_stop_1823_);
lean_dec(v_start_1822_);
lean_dec_ref(v_array_1821_);
v___x_1828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1828_, 0, v_b_1820_);
return v___x_1828_;
}
else
{
lean_object* v___x_1829_; lean_object* v___x_1830_; 
v___x_1829_ = lean_array_fget_borrowed(v_array_1821_, v_start_1822_);
lean_inc(v___x_1829_);
v___x_1830_ = l_Lean_Syntax_reprint(v___x_1829_);
if (lean_obj_tag(v___x_1830_) == 0)
{
lean_object* v___x_1831_; 
lean_del_object(v___x_1825_);
lean_dec(v_stop_1823_);
lean_dec(v_start_1822_);
lean_dec_ref(v_array_1821_);
v___x_1831_ = lean_box(0);
return v___x_1831_;
}
else
{
lean_object* v_val_1832_; uint8_t v___x_1833_; 
v_val_1832_ = lean_ctor_get(v___x_1830_, 0);
lean_inc(v_val_1832_);
lean_dec_ref_known(v___x_1830_, 1);
v___x_1833_ = lean_string_dec_eq(v_val_1818_, v_val_1832_);
lean_dec(v_val_1832_);
if (v___x_1833_ == 0)
{
lean_object* v___x_1834_; 
lean_del_object(v___x_1825_);
lean_dec(v_stop_1823_);
lean_dec(v_start_1822_);
lean_dec_ref(v_array_1821_);
v___x_1834_ = lean_box(0);
return v___x_1834_;
}
else
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1839_; 
v___x_1835_ = lean_box(0);
v___x_1836_ = lean_unsigned_to_nat(1u);
v___x_1837_ = lean_nat_add(v_start_1822_, v___x_1836_);
lean_dec(v_start_1822_);
if (v_isShared_1826_ == 0)
{
lean_ctor_set(v___x_1825_, 1, v___x_1837_);
v___x_1839_ = v___x_1825_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1841_; 
v_reuseFailAlloc_1841_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1841_, 0, v_array_1821_);
lean_ctor_set(v_reuseFailAlloc_1841_, 1, v___x_1837_);
lean_ctor_set(v_reuseFailAlloc_1841_, 2, v_stop_1823_);
v___x_1839_ = v_reuseFailAlloc_1841_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
v_a_1819_ = v___x_1839_;
v_b_1820_ = v___x_1835_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1(uint8_t v_firstChoiceOnly_1843_, lean_object* v_stx_1844_, lean_object* v_b_1845_){
_start:
{
lean_object* v_b_1847_; lean_object* v___y_1851_; lean_object* v___y_1852_; lean_object* v___x_1861_; lean_object* v_a_1863_; 
v___x_1861_ = lean_box(0);
switch(lean_obj_tag(v_stx_1844_))
{
case 2:
{
lean_object* v_info_1872_; lean_object* v_val_1873_; lean_object* v___x_1874_; lean_object* v_s_1875_; 
v_info_1872_ = lean_ctor_get(v_stx_1844_, 0);
v_val_1873_ = lean_ctor_get(v_stx_1844_, 1);
lean_inc(v_info_1872_);
v___x_1874_ = l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf(v_info_1872_, v_val_1873_);
v_s_1875_ = lean_string_append(v_b_1845_, v___x_1874_);
lean_dec_ref(v___x_1874_);
v_a_1863_ = v_s_1875_;
goto v___jp_1862_;
}
case 3:
{
lean_object* v_rawVal_1876_; lean_object* v_info_1877_; lean_object* v_str_1878_; lean_object* v_startPos_1879_; lean_object* v_stopPos_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v_s_1883_; 
v_rawVal_1876_ = lean_ctor_get(v_stx_1844_, 1);
v_info_1877_ = lean_ctor_get(v_stx_1844_, 0);
v_str_1878_ = lean_ctor_get(v_rawVal_1876_, 0);
v_startPos_1879_ = lean_ctor_get(v_rawVal_1876_, 1);
v_stopPos_1880_ = lean_ctor_get(v_rawVal_1876_, 2);
v___x_1881_ = lean_string_utf8_extract(v_str_1878_, v_startPos_1879_, v_stopPos_1880_);
lean_inc(v_info_1877_);
v___x_1882_ = l___private_Lean_Syntax_0__Lean_Syntax_reprint_reprintLeaf(v_info_1877_, v___x_1881_);
lean_dec_ref(v___x_1881_);
v_s_1883_ = lean_string_append(v_b_1845_, v___x_1882_);
lean_dec_ref(v___x_1882_);
v_a_1863_ = v_s_1883_;
goto v___jp_1862_;
}
case 1:
{
lean_object* v_kind_1884_; lean_object* v_args_1885_; lean_object* v___x_1886_; uint8_t v___x_1887_; 
v_kind_1884_ = lean_ctor_get(v_stx_1844_, 1);
v_args_1885_ = lean_ctor_get(v_stx_1844_, 2);
v___x_1886_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
v___x_1887_ = lean_name_eq(v_kind_1884_, v___x_1886_);
if (v___x_1887_ == 0)
{
v_a_1863_ = v_b_1845_;
goto v___jp_1862_;
}
else
{
lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
v___x_1888_ = lean_unsigned_to_nat(0u);
v___x_1889_ = lean_array_get_borrowed(v___x_1861_, v_args_1885_, v___x_1888_);
lean_inc(v___x_1889_);
v___x_1890_ = l_Lean_Syntax_reprint(v___x_1889_);
if (lean_obj_tag(v___x_1890_) == 0)
{
lean_object* v___x_1891_; 
lean_dec_ref_known(v_stx_1844_, 3);
lean_dec_ref(v_b_1845_);
v___x_1891_ = lean_box(0);
return v___x_1891_;
}
else
{
lean_object* v_val_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; 
v_val_1892_ = lean_ctor_get(v___x_1890_, 0);
lean_inc(v_val_1892_);
lean_dec_ref_known(v___x_1890_, 1);
v___x_1893_ = lean_unsigned_to_nat(1u);
v___x_1894_ = lean_array_get_size(v_args_1885_);
lean_inc_ref(v_args_1885_);
v___x_1895_ = l_Array_toSubarray___redArg(v_args_1885_, v___x_1893_, v___x_1894_);
v___x_1896_ = lean_box(0);
v___x_1897_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg(v_val_1892_, v___x_1895_, v___x_1896_);
lean_dec(v_val_1892_);
if (lean_obj_tag(v___x_1897_) == 0)
{
lean_object* v___x_1898_; 
lean_dec_ref_known(v_stx_1844_, 3);
lean_dec_ref(v_b_1845_);
v___x_1898_ = lean_box(0);
return v___x_1898_;
}
else
{
lean_dec_ref_known(v___x_1897_, 1);
v_a_1863_ = v_b_1845_;
goto v___jp_1862_;
}
}
}
}
default: 
{
v_a_1863_ = v_b_1845_;
goto v___jp_1862_;
}
}
v___jp_1846_:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1848_, 0, v_b_1847_);
v___x_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1848_);
return v___x_1849_;
}
v___jp_1850_:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; size_t v_sz_1855_; size_t v___x_1856_; lean_object* v___x_1857_; 
v___x_1853_ = lean_box(0);
v___x_1854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1853_);
lean_ctor_set(v___x_1854_, 1, v___y_1852_);
v_sz_1855_ = lean_array_size(v___y_1851_);
v___x_1856_ = ((size_t)0ULL);
v___x_1857_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1(v_firstChoiceOnly_1843_, v___y_1851_, v_sz_1855_, v___x_1856_, v___x_1854_);
lean_dec_ref(v___y_1851_);
if (lean_obj_tag(v___x_1857_) == 0)
{
return v___x_1853_;
}
else
{
lean_object* v_val_1858_; lean_object* v_fst_1859_; 
v_val_1858_ = lean_ctor_get(v___x_1857_, 0);
lean_inc(v_val_1858_);
lean_dec_ref_known(v___x_1857_, 1);
v_fst_1859_ = lean_ctor_get(v_val_1858_, 0);
if (lean_obj_tag(v_fst_1859_) == 0)
{
lean_object* v_snd_1860_; 
v_snd_1860_ = lean_ctor_get(v_val_1858_, 1);
lean_inc(v_snd_1860_);
lean_dec(v_val_1858_);
v_b_1847_ = v_snd_1860_;
goto v___jp_1846_;
}
else
{
lean_inc_ref(v_fst_1859_);
lean_dec(v_val_1858_);
return v_fst_1859_;
}
}
}
v___jp_1862_:
{
if (lean_obj_tag(v_stx_1844_) == 1)
{
if (v_firstChoiceOnly_1843_ == 0)
{
lean_object* v_args_1864_; 
v_args_1864_ = lean_ctor_get(v_stx_1844_, 2);
lean_inc_ref(v_args_1864_);
lean_dec_ref_known(v_stx_1844_, 3);
v___y_1851_ = v_args_1864_;
v___y_1852_ = v_a_1863_;
goto v___jp_1850_;
}
else
{
lean_object* v_kind_1865_; lean_object* v_args_1866_; lean_object* v___x_1867_; uint8_t v___x_1868_; 
v_kind_1865_ = lean_ctor_get(v_stx_1844_, 1);
lean_inc(v_kind_1865_);
v_args_1866_ = lean_ctor_get(v_stx_1844_, 2);
lean_inc_ref(v_args_1866_);
lean_dec_ref_known(v_stx_1844_, 3);
v___x_1867_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
v___x_1868_ = lean_name_eq(v_kind_1865_, v___x_1867_);
lean_dec(v_kind_1865_);
if (v___x_1868_ == 0)
{
v___y_1851_ = v_args_1866_;
v___y_1852_ = v_a_1863_;
goto v___jp_1850_;
}
else
{
lean_object* v___x_1869_; lean_object* v___x_1870_; 
v___x_1869_ = lean_unsigned_to_nat(0u);
v___x_1870_ = lean_array_get(v___x_1861_, v_args_1866_, v___x_1869_);
lean_dec_ref(v_args_1866_);
v_stx_1844_ = v___x_1870_;
v_b_1845_ = v_a_1863_;
goto _start;
}
}
}
else
{
lean_dec(v_stx_1844_);
v_b_1847_ = v_a_1863_;
goto v___jp_1846_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_reprint(lean_object* v_stx_1899_){
_start:
{
lean_object* v_s_1900_; uint8_t v___x_1901_; lean_object* v___x_1902_; 
v_s_1900_ = ((lean_object*)(l_Lean_Syntax_getAtomVal___closed__0));
v___x_1901_ = 1;
v___x_1902_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1(v___x_1901_, v_stx_1899_, v_s_1900_);
if (lean_obj_tag(v___x_1902_) == 0)
{
lean_object* v___x_1903_; 
v___x_1903_ = lean_box(0);
return v___x_1903_;
}
else
{
lean_object* v_val_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1912_; 
v_val_1904_ = lean_ctor_get(v___x_1902_, 0);
v_isSharedCheck_1912_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1906_ = v___x_1902_;
v_isShared_1907_ = v_isSharedCheck_1912_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_val_1904_);
lean_dec(v___x_1902_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1912_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v_a_1908_; lean_object* v___x_1910_; 
v_a_1908_ = lean_ctor_get(v_val_1904_, 0);
lean_inc(v_a_1908_);
lean_dec(v_val_1904_);
if (v_isShared_1907_ == 0)
{
lean_ctor_set(v___x_1906_, 0, v_a_1908_);
v___x_1910_ = v___x_1906_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v_a_1908_);
v___x_1910_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
return v___x_1910_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg___boxed(lean_object* v_val_1913_, lean_object* v_a_1914_, lean_object* v_b_1915_){
_start:
{
lean_object* v_res_1916_; 
v_res_1916_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg(v_val_1913_, v_a_1914_, v_b_1915_);
lean_dec_ref(v_val_1913_);
return v_res_1916_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1___boxed(lean_object* v_firstChoiceOnly_1917_, lean_object* v_as_1918_, lean_object* v_sz_1919_, lean_object* v_i_1920_, lean_object* v_b_1921_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1922_; size_t v_sz_boxed_1923_; size_t v_i_boxed_1924_; lean_object* v_res_1925_; 
v_firstChoiceOnly_boxed_1922_ = lean_unbox(v_firstChoiceOnly_1917_);
v_sz_boxed_1923_ = lean_unbox_usize(v_sz_1919_);
lean_dec(v_sz_1919_);
v_i_boxed_1924_ = lean_unbox_usize(v_i_1920_);
lean_dec(v_i_1920_);
v_res_1925_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1_spec__1(v_firstChoiceOnly_boxed_1922_, v_as_1918_, v_sz_boxed_1923_, v_i_boxed_1924_, v_b_1921_);
lean_dec_ref(v_as_1918_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1___boxed(lean_object* v_firstChoiceOnly_1926_, lean_object* v_stx_1927_, lean_object* v_b_1928_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_1929_; lean_object* v_res_1930_; 
v_firstChoiceOnly_boxed_1929_ = lean_unbox(v_firstChoiceOnly_1926_);
v_res_1930_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_reprint_spec__1(v_firstChoiceOnly_boxed_1929_, v_stx_1927_, v_b_1928_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0(lean_object* v_val_1931_, lean_object* v_inst_1932_, lean_object* v_R_1933_, lean_object* v_a_1934_, lean_object* v_b_1935_, lean_object* v_c_1936_){
_start:
{
lean_object* v___x_1937_; 
v___x_1937_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___redArg(v_val_1931_, v_a_1934_, v_b_1935_);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0___boxed(lean_object* v_val_1938_, lean_object* v_inst_1939_, lean_object* v_R_1940_, lean_object* v_a_1941_, lean_object* v_b_1942_, lean_object* v_c_1943_){
_start:
{
lean_object* v_res_1944_; 
v_res_1944_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Syntax_reprint_spec__0(v_val_1938_, v_inst_1939_, v_R_1940_, v_a_1941_, v_b_1942_, v_c_1943_);
lean_dec_ref(v_val_1938_);
return v_res_1944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(uint8_t v_firstChoiceOnly_1953_, lean_object* v_stx_1954_){
_start:
{
lean_object* v___x_1955_; uint8_t v___x_1956_; 
v___x_1955_ = lean_box(0);
v___x_1956_ = l_Lean_Syntax_isMissing(v_stx_1954_);
if (v___x_1956_ == 0)
{
if (lean_obj_tag(v_stx_1954_) == 1)
{
lean_object* v_kind_1957_; lean_object* v_args_1958_; 
v_kind_1957_ = lean_ctor_get(v_stx_1954_, 1);
v_args_1958_ = lean_ctor_get(v_stx_1954_, 2);
if (v_firstChoiceOnly_1953_ == 0)
{
goto v___jp_1959_;
}
else
{
lean_object* v___x_1968_; uint8_t v___x_1969_; 
v___x_1968_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
v___x_1969_ = lean_name_eq(v_kind_1957_, v___x_1968_);
if (v___x_1969_ == 0)
{
goto v___jp_1959_;
}
else
{
lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; 
v___x_1970_ = lean_box(0);
v___x_1971_ = lean_unsigned_to_nat(0u);
v___x_1972_ = lean_array_get_borrowed(v___x_1970_, v_args_1958_, v___x_1971_);
v_stx_1954_ = v___x_1972_;
goto _start;
}
}
v___jp_1959_:
{
lean_object* v___x_1960_; size_t v_sz_1961_; size_t v___x_1962_; lean_object* v___x_1963_; lean_object* v_fst_1964_; 
v___x_1960_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__1));
v_sz_1961_ = lean_array_size(v_args_1958_);
v___x_1962_ = ((size_t)0ULL);
v___x_1963_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0(v_firstChoiceOnly_1953_, v_args_1958_, v_sz_1961_, v___x_1962_, v___x_1960_);
v_fst_1964_ = lean_ctor_get(v___x_1963_, 0);
if (lean_obj_tag(v_fst_1964_) == 0)
{
lean_object* v_snd_1965_; lean_object* v___x_1966_; 
v_snd_1965_ = lean_ctor_get(v___x_1963_, 1);
lean_inc(v_snd_1965_);
lean_dec_ref(v___x_1963_);
v___x_1966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1966_, 0, v_snd_1965_);
return v___x_1966_;
}
else
{
lean_object* v_val_1967_; 
lean_inc_ref(v_fst_1964_);
lean_dec_ref(v___x_1963_);
v_val_1967_ = lean_ctor_get(v_fst_1964_, 0);
lean_inc(v_val_1967_);
lean_dec_ref_known(v_fst_1964_, 1);
return v_val_1967_;
}
}
}
else
{
lean_object* v___x_1974_; 
v___x_1974_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___closed__2));
return v___x_1974_;
}
}
else
{
lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1975_ = lean_box(v___x_1956_);
v___x_1976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1976_, 0, v___x_1975_);
v___x_1977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1976_);
lean_ctor_set(v___x_1977_, 1, v___x_1955_);
v___x_1978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1978_, 0, v___x_1977_);
return v___x_1978_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0(uint8_t v_firstChoiceOnly_1979_, lean_object* v_as_1980_, size_t v_sz_1981_, size_t v_i_1982_, lean_object* v_b_1983_){
_start:
{
uint8_t v___x_1984_; 
v___x_1984_ = lean_usize_dec_lt(v_i_1982_, v_sz_1981_);
if (v___x_1984_ == 0)
{
return v_b_1983_;
}
else
{
lean_object* v_snd_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_2003_; 
v_snd_1985_ = lean_ctor_get(v_b_1983_, 1);
v_isSharedCheck_2003_ = !lean_is_exclusive(v_b_1983_);
if (v_isSharedCheck_2003_ == 0)
{
lean_object* v_unused_2004_; 
v_unused_2004_ = lean_ctor_get(v_b_1983_, 0);
lean_dec(v_unused_2004_);
v___x_1987_ = v_b_1983_;
v_isShared_1988_ = v_isSharedCheck_2003_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_snd_1985_);
lean_dec(v_b_1983_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_2003_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v_a_1989_; lean_object* v___x_1990_; 
v_a_1989_ = lean_array_uget_borrowed(v_as_1980_, v_i_1982_);
v___x_1990_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(v_firstChoiceOnly_1979_, v_a_1989_);
if (lean_obj_tag(v___x_1990_) == 0)
{
lean_object* v___x_1991_; lean_object* v___x_1993_; 
v___x_1991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1991_, 0, v___x_1990_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 0, v___x_1991_);
v___x_1993_ = v___x_1987_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v___x_1991_);
lean_ctor_set(v_reuseFailAlloc_1994_, 1, v_snd_1985_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
return v___x_1993_;
}
}
else
{
lean_object* v_a_1995_; lean_object* v___x_1996_; lean_object* v___x_1998_; 
lean_dec(v_snd_1985_);
v_a_1995_ = lean_ctor_get(v___x_1990_, 0);
lean_inc(v_a_1995_);
lean_dec_ref_known(v___x_1990_, 1);
v___x_1996_ = lean_box(0);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 1, v_a_1995_);
lean_ctor_set(v___x_1987_, 0, v___x_1996_);
v___x_1998_ = v___x_1987_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v___x_1996_);
lean_ctor_set(v_reuseFailAlloc_2002_, 1, v_a_1995_);
v___x_1998_ = v_reuseFailAlloc_2002_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
size_t v___x_1999_; size_t v___x_2000_; 
v___x_1999_ = ((size_t)1ULL);
v___x_2000_ = lean_usize_add(v_i_1982_, v___x_1999_);
v_i_1982_ = v___x_2000_;
v_b_1983_ = v___x_1998_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0___boxed(lean_object* v_firstChoiceOnly_2005_, lean_object* v_as_2006_, lean_object* v_sz_2007_, lean_object* v_i_2008_, lean_object* v_b_2009_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_2010_; size_t v_sz_boxed_2011_; size_t v_i_boxed_2012_; lean_object* v_res_2013_; 
v_firstChoiceOnly_boxed_2010_ = lean_unbox(v_firstChoiceOnly_2005_);
v_sz_boxed_2011_ = lean_unbox_usize(v_sz_2007_);
lean_dec(v_sz_2007_);
v_i_boxed_2012_ = lean_unbox_usize(v_i_2008_);
lean_dec(v_i_2008_);
v_res_2013_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0_spec__0(v_firstChoiceOnly_boxed_2010_, v_as_2006_, v_sz_boxed_2011_, v_i_boxed_2012_, v_b_2009_);
lean_dec_ref(v_as_2006_);
return v_res_2013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg___boxed(lean_object* v_firstChoiceOnly_2014_, lean_object* v_stx_2015_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_2016_; lean_object* v_res_2017_; 
v_firstChoiceOnly_boxed_2016_ = lean_unbox(v_firstChoiceOnly_2014_);
v_res_2017_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(v_firstChoiceOnly_boxed_2016_, v_stx_2015_);
lean_dec(v_stx_2015_);
return v_res_2017_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_hasMissing(lean_object* v_stx_2018_){
_start:
{
uint8_t v___x_2019_; lean_object* v___y_2021_; lean_object* v___x_2025_; lean_object* v_a_2026_; 
v___x_2019_ = 0;
v___x_2025_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(v___x_2019_, v_stx_2018_);
v_a_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_a_2026_);
lean_dec_ref(v___x_2025_);
v___y_2021_ = v_a_2026_;
goto v___jp_2020_;
v___jp_2020_:
{
lean_object* v_fst_2022_; 
v_fst_2022_ = lean_ctor_get(v___y_2021_, 0);
lean_inc(v_fst_2022_);
lean_dec_ref(v___y_2021_);
if (lean_obj_tag(v_fst_2022_) == 0)
{
return v___x_2019_;
}
else
{
lean_object* v_val_2023_; uint8_t v___x_2024_; 
v_val_2023_ = lean_ctor_get(v_fst_2022_, 0);
lean_inc(v_val_2023_);
lean_dec_ref_known(v_fst_2022_, 1);
v___x_2024_ = lean_unbox(v_val_2023_);
lean_dec(v_val_2023_);
return v___x_2024_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_hasMissing___boxed(lean_object* v_stx_2027_){
_start:
{
uint8_t v_res_2028_; lean_object* v_r_2029_; 
v_res_2028_ = l_Lean_Syntax_hasMissing(v_stx_2027_);
lean_dec(v_stx_2027_);
v_r_2029_ = lean_box(v_res_2028_);
return v_r_2029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0(uint8_t v_firstChoiceOnly_2030_, lean_object* v_stx_2031_, lean_object* v_b_2032_){
_start:
{
lean_object* v___x_2033_; 
v___x_2033_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___redArg(v_firstChoiceOnly_2030_, v_stx_2031_);
return v___x_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0___boxed(lean_object* v_firstChoiceOnly_2034_, lean_object* v_stx_2035_, lean_object* v_b_2036_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_2037_; lean_object* v_res_2038_; 
v_firstChoiceOnly_boxed_2037_ = lean_unbox(v_firstChoiceOnly_2034_);
v_res_2038_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Syntax_hasMissing_spec__0(v_firstChoiceOnly_boxed_2037_, v_stx_2035_, v_b_2036_);
lean_dec_ref(v_b_2036_);
lean_dec(v_stx_2035_);
return v_res_2038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getRange_x3f(lean_object* v_stx_2039_, uint8_t v_canonicalOnly_2040_){
_start:
{
lean_object* v___x_2041_; 
v___x_2041_ = l_Lean_Syntax_getPos_x3f(v_stx_2039_, v_canonicalOnly_2040_);
if (lean_obj_tag(v___x_2041_) == 1)
{
lean_object* v_val_2042_; lean_object* v___x_2043_; 
v_val_2042_ = lean_ctor_get(v___x_2041_, 0);
lean_inc(v_val_2042_);
lean_dec_ref_known(v___x_2041_, 1);
v___x_2043_ = l_Lean_Syntax_getTailPos_x3f(v_stx_2039_, v_canonicalOnly_2040_);
if (lean_obj_tag(v___x_2043_) == 1)
{
lean_object* v_val_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2052_; 
v_val_2044_ = lean_ctor_get(v___x_2043_, 0);
v_isSharedCheck_2052_ = !lean_is_exclusive(v___x_2043_);
if (v_isSharedCheck_2052_ == 0)
{
v___x_2046_ = v___x_2043_;
v_isShared_2047_ = v_isSharedCheck_2052_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_val_2044_);
lean_dec(v___x_2043_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2052_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v___x_2048_; lean_object* v___x_2050_; 
v___x_2048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2048_, 0, v_val_2042_);
lean_ctor_set(v___x_2048_, 1, v_val_2044_);
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 0, v___x_2048_);
v___x_2050_ = v___x_2046_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v___x_2048_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
return v___x_2050_;
}
}
}
else
{
lean_object* v___x_2053_; 
lean_dec(v___x_2043_);
lean_dec(v_val_2042_);
v___x_2053_ = lean_box(0);
return v___x_2053_;
}
}
else
{
lean_object* v___x_2054_; 
lean_dec(v___x_2041_);
v___x_2054_ = lean_box(0);
return v___x_2054_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getRange_x3f___boxed(lean_object* v_stx_2055_, lean_object* v_canonicalOnly_2056_){
_start:
{
uint8_t v_canonicalOnly_boxed_2057_; lean_object* v_res_2058_; 
v_canonicalOnly_boxed_2057_ = lean_unbox(v_canonicalOnly_2056_);
v_res_2058_ = l_Lean_Syntax_getRange_x3f(v_stx_2055_, v_canonicalOnly_boxed_2057_);
lean_dec(v_stx_2055_);
return v_res_2058_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f(lean_object* v_stx_2059_, uint8_t v_canonicalOnly_2060_){
_start:
{
lean_object* v___x_2061_; 
v___x_2061_ = l_Lean_Syntax_getPos_x3f(v_stx_2059_, v_canonicalOnly_2060_);
if (lean_obj_tag(v___x_2061_) == 0)
{
lean_object* v___x_2062_; 
v___x_2062_ = lean_box(0);
return v___x_2062_;
}
else
{
lean_object* v_val_2063_; lean_object* v___x_2064_; 
v_val_2063_ = lean_ctor_get(v___x_2061_, 0);
lean_inc(v_val_2063_);
lean_dec_ref_known(v___x_2061_, 1);
v___x_2064_ = l_Lean_Syntax_getTrailingTailPos_x3f(v_stx_2059_, v_canonicalOnly_2060_);
if (lean_obj_tag(v___x_2064_) == 0)
{
lean_object* v___x_2065_; 
lean_dec(v_val_2063_);
v___x_2065_ = lean_box(0);
return v___x_2065_;
}
else
{
lean_object* v_val_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2074_; 
v_val_2066_ = lean_ctor_get(v___x_2064_, 0);
v_isSharedCheck_2074_ = !lean_is_exclusive(v___x_2064_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2068_ = v___x_2064_;
v_isShared_2069_ = v_isSharedCheck_2074_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_val_2066_);
lean_dec(v___x_2064_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2074_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2070_; lean_object* v___x_2072_; 
v___x_2070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2070_, 0, v_val_2063_);
lean_ctor_set(v___x_2070_, 1, v_val_2066_);
if (v_isShared_2069_ == 0)
{
lean_ctor_set(v___x_2068_, 0, v___x_2070_);
v___x_2072_ = v___x_2068_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v___x_2070_);
v___x_2072_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
return v___x_2072_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f___boxed(lean_object* v_stx_2075_, lean_object* v_canonicalOnly_2076_){
_start:
{
uint8_t v_canonicalOnly_boxed_2077_; lean_object* v_res_2078_; 
v_canonicalOnly_boxed_2077_ = lean_unbox(v_canonicalOnly_2076_);
v_res_2078_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_stx_2075_, v_canonicalOnly_boxed_2077_);
lean_dec(v_stx_2075_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ofRange(lean_object* v_range_2079_, uint8_t v_canonical_2080_){
_start:
{
lean_object* v_start_2081_; lean_object* v_stop_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2091_; 
v_start_2081_ = lean_ctor_get(v_range_2079_, 0);
v_stop_2082_ = lean_ctor_get(v_range_2079_, 1);
v_isSharedCheck_2091_ = !lean_is_exclusive(v_range_2079_);
if (v_isSharedCheck_2091_ == 0)
{
v___x_2084_ = v_range_2079_;
v_isShared_2085_ = v_isSharedCheck_2091_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_stop_2082_);
lean_inc(v_start_2081_);
lean_dec(v_range_2079_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2091_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2089_; 
v___x_2086_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_2086_, 0, v_start_2081_);
lean_ctor_set(v___x_2086_, 1, v_stop_2082_);
lean_ctor_set_uint8(v___x_2086_, sizeof(void*)*2, v_canonical_2080_);
v___x_2087_ = ((lean_object*)(l_Lean_Syntax_getAtomVal___closed__0));
if (v_isShared_2085_ == 0)
{
lean_ctor_set_tag(v___x_2084_, 2);
lean_ctor_set(v___x_2084_, 1, v___x_2087_);
lean_ctor_set(v___x_2084_, 0, v___x_2086_);
v___x_2089_ = v___x_2084_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2090_; 
v_reuseFailAlloc_2090_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2090_, 0, v___x_2086_);
lean_ctor_set(v_reuseFailAlloc_2090_, 1, v___x_2087_);
v___x_2089_ = v_reuseFailAlloc_2090_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
return v___x_2089_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_ofRange___boxed(lean_object* v_range_2092_, lean_object* v_canonical_2093_){
_start:
{
uint8_t v_canonical_boxed_2094_; lean_object* v_res_2095_; 
v_canonical_boxed_2094_ = lean_unbox(v_canonical_2093_);
v_res_2095_ = l_Lean_Syntax_ofRange(v_range_2092_, v_canonical_boxed_2094_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_fromSyntax(lean_object* v_stx_2098_){
_start:
{
lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2099_ = ((lean_object*)(l_Lean_Syntax_Traverser_fromSyntax___closed__0));
v___x_2100_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2100_, 0, v_stx_2098_);
lean_ctor_set(v___x_2100_, 1, v___x_2099_);
lean_ctor_set(v___x_2100_, 2, v___x_2099_);
return v___x_2100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_setCur(lean_object* v_t_2101_, lean_object* v_stx_2102_){
_start:
{
lean_object* v_parents_2103_; lean_object* v_idxs_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2111_; 
v_parents_2103_ = lean_ctor_get(v_t_2101_, 1);
v_idxs_2104_ = lean_ctor_get(v_t_2101_, 2);
v_isSharedCheck_2111_ = !lean_is_exclusive(v_t_2101_);
if (v_isSharedCheck_2111_ == 0)
{
lean_object* v_unused_2112_; 
v_unused_2112_ = lean_ctor_get(v_t_2101_, 0);
lean_dec(v_unused_2112_);
v___x_2106_ = v_t_2101_;
v_isShared_2107_ = v_isSharedCheck_2111_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_idxs_2104_);
lean_inc(v_parents_2103_);
lean_dec(v_t_2101_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2111_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
lean_object* v___x_2109_; 
if (v_isShared_2107_ == 0)
{
lean_ctor_set(v___x_2106_, 0, v_stx_2102_);
v___x_2109_ = v___x_2106_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v_stx_2102_);
lean_ctor_set(v_reuseFailAlloc_2110_, 1, v_parents_2103_);
lean_ctor_set(v_reuseFailAlloc_2110_, 2, v_idxs_2104_);
v___x_2109_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
return v___x_2109_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_down(lean_object* v_t_2113_, lean_object* v_idx_2114_){
_start:
{
lean_object* v_cur_2115_; lean_object* v_parents_2116_; lean_object* v_idxs_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2137_; 
v_cur_2115_ = lean_ctor_get(v_t_2113_, 0);
v_parents_2116_ = lean_ctor_get(v_t_2113_, 1);
v_idxs_2117_ = lean_ctor_get(v_t_2113_, 2);
v_isSharedCheck_2137_ = !lean_is_exclusive(v_t_2113_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2119_ = v_t_2113_;
v_isShared_2120_ = v_isSharedCheck_2137_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_idxs_2117_);
lean_inc(v_parents_2116_);
lean_inc(v_cur_2115_);
lean_dec(v_t_2113_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2137_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v___x_2121_; uint8_t v___x_2122_; 
v___x_2121_ = l_Lean_Syntax_getNumArgs(v_cur_2115_);
v___x_2122_ = lean_nat_dec_lt(v_idx_2114_, v___x_2121_);
lean_dec(v___x_2121_);
if (v___x_2122_ == 0)
{
lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2127_; 
v___x_2123_ = lean_box(0);
v___x_2124_ = lean_array_push(v_parents_2116_, v_cur_2115_);
v___x_2125_ = lean_array_push(v_idxs_2117_, v_idx_2114_);
if (v_isShared_2120_ == 0)
{
lean_ctor_set(v___x_2119_, 2, v___x_2125_);
lean_ctor_set(v___x_2119_, 1, v___x_2124_);
lean_ctor_set(v___x_2119_, 0, v___x_2123_);
v___x_2127_ = v___x_2119_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v___x_2123_);
lean_ctor_set(v_reuseFailAlloc_2128_, 1, v___x_2124_);
lean_ctor_set(v_reuseFailAlloc_2128_, 2, v___x_2125_);
v___x_2127_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
return v___x_2127_;
}
}
else
{
lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2135_; 
v___x_2129_ = l_Lean_Syntax_getArg(v_cur_2115_, v_idx_2114_);
v___x_2130_ = lean_box(0);
v___x_2131_ = l_Lean_Syntax_setArg(v_cur_2115_, v_idx_2114_, v___x_2130_);
v___x_2132_ = lean_array_push(v_parents_2116_, v___x_2131_);
v___x_2133_ = lean_array_push(v_idxs_2117_, v_idx_2114_);
if (v_isShared_2120_ == 0)
{
lean_ctor_set(v___x_2119_, 2, v___x_2133_);
lean_ctor_set(v___x_2119_, 1, v___x_2132_);
lean_ctor_set(v___x_2119_, 0, v___x_2129_);
v___x_2135_ = v___x_2119_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v___x_2129_);
lean_ctor_set(v_reuseFailAlloc_2136_, 1, v___x_2132_);
lean_ctor_set(v_reuseFailAlloc_2136_, 2, v___x_2133_);
v___x_2135_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
return v___x_2135_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_up(lean_object* v_t_2138_){
_start:
{
lean_object* v_cur_2139_; lean_object* v_parents_2140_; lean_object* v_idxs_2141_; lean_object* v___y_2143_; lean_object* v___x_2147_; lean_object* v___x_2148_; uint8_t v___x_2149_; 
v_cur_2139_ = lean_ctor_get(v_t_2138_, 0);
v_parents_2140_ = lean_ctor_get(v_t_2138_, 1);
v_idxs_2141_ = lean_ctor_get(v_t_2138_, 2);
v___x_2147_ = lean_unsigned_to_nat(0u);
v___x_2148_ = lean_array_get_size(v_parents_2140_);
v___x_2149_ = lean_nat_dec_lt(v___x_2147_, v___x_2148_);
if (v___x_2149_ == 0)
{
return v_t_2138_;
}
else
{
lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; uint8_t v___x_2158_; 
lean_inc_ref(v_idxs_2141_);
lean_inc_ref(v_parents_2140_);
lean_inc(v_cur_2139_);
lean_dec_ref(v_t_2138_);
v___x_2150_ = lean_box(0);
v___x_2151_ = lean_array_get_size(v_idxs_2141_);
v___x_2152_ = lean_unsigned_to_nat(1u);
v___x_2153_ = lean_nat_sub(v___x_2151_, v___x_2152_);
v___x_2154_ = lean_array_get_borrowed(v___x_2147_, v_idxs_2141_, v___x_2153_);
lean_dec(v___x_2153_);
v___x_2155_ = lean_nat_sub(v___x_2148_, v___x_2152_);
v___x_2156_ = lean_array_get_borrowed(v___x_2150_, v_parents_2140_, v___x_2155_);
lean_dec(v___x_2155_);
v___x_2157_ = l_Lean_Syntax_getNumArgs(v___x_2156_);
v___x_2158_ = lean_nat_dec_lt(v___x_2154_, v___x_2157_);
lean_dec(v___x_2157_);
if (v___x_2158_ == 0)
{
lean_dec(v_cur_2139_);
lean_inc(v___x_2156_);
v___y_2143_ = v___x_2156_;
goto v___jp_2142_;
}
else
{
lean_object* v___x_2159_; 
lean_inc(v___x_2156_);
v___x_2159_ = l_Lean_Syntax_setArg(v___x_2156_, v___x_2154_, v_cur_2139_);
v___y_2143_ = v___x_2159_;
goto v___jp_2142_;
}
}
v___jp_2142_:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; 
v___x_2144_ = lean_array_pop(v_parents_2140_);
v___x_2145_ = lean_array_pop(v_idxs_2141_);
v___x_2146_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2146_, 0, v___y_2143_);
lean_ctor_set(v___x_2146_, 1, v___x_2144_);
lean_ctor_set(v___x_2146_, 2, v___x_2145_);
return v___x_2146_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_left(lean_object* v_t_2160_){
_start:
{
lean_object* v_parents_2161_; lean_object* v_idxs_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; uint8_t v___x_2165_; 
v_parents_2161_ = lean_ctor_get(v_t_2160_, 1);
v_idxs_2162_ = lean_ctor_get(v_t_2160_, 2);
v___x_2163_ = lean_unsigned_to_nat(0u);
v___x_2164_ = lean_array_get_size(v_parents_2161_);
v___x_2165_ = lean_nat_dec_lt(v___x_2163_, v___x_2164_);
if (v___x_2165_ == 0)
{
return v_t_2160_;
}
else
{
lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
lean_inc_ref(v_idxs_2162_);
v___x_2166_ = l_Lean_Syntax_Traverser_up(v_t_2160_);
v___x_2167_ = lean_array_get_size(v_idxs_2162_);
v___x_2168_ = lean_unsigned_to_nat(1u);
v___x_2169_ = lean_nat_sub(v___x_2167_, v___x_2168_);
v___x_2170_ = lean_array_get(v___x_2163_, v_idxs_2162_, v___x_2169_);
lean_dec(v___x_2169_);
lean_dec_ref(v_idxs_2162_);
v___x_2171_ = lean_nat_sub(v___x_2170_, v___x_2168_);
lean_dec(v___x_2170_);
v___x_2172_ = l_Lean_Syntax_Traverser_down(v___x_2166_, v___x_2171_);
return v___x_2172_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Traverser_right(lean_object* v_t_2173_){
_start:
{
lean_object* v_parents_2174_; lean_object* v_idxs_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; uint8_t v___x_2178_; 
v_parents_2174_ = lean_ctor_get(v_t_2173_, 1);
v_idxs_2175_ = lean_ctor_get(v_t_2173_, 2);
v___x_2176_ = lean_unsigned_to_nat(0u);
v___x_2177_ = lean_array_get_size(v_parents_2174_);
v___x_2178_ = lean_nat_dec_lt(v___x_2176_, v___x_2177_);
if (v___x_2178_ == 0)
{
return v_t_2173_;
}
else
{
lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; 
lean_inc_ref(v_idxs_2175_);
v___x_2179_ = l_Lean_Syntax_Traverser_up(v_t_2173_);
v___x_2180_ = lean_array_get_size(v_idxs_2175_);
v___x_2181_ = lean_unsigned_to_nat(1u);
v___x_2182_ = lean_nat_sub(v___x_2180_, v___x_2181_);
v___x_2183_ = lean_array_get(v___x_2176_, v_idxs_2175_, v___x_2182_);
lean_dec(v___x_2182_);
lean_dec_ref(v_idxs_2175_);
v___x_2184_ = lean_nat_add(v___x_2183_, v___x_2181_);
lean_dec(v___x_2183_);
v___x_2185_ = l_Lean_Syntax_Traverser_down(v___x_2179_, v___x_2184_);
return v___x_2185_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0(lean_object* v_self_2186_){
_start:
{
lean_object* v_cur_2187_; 
v_cur_2187_ = lean_ctor_get(v_self_2186_, 0);
lean_inc(v_cur_2187_);
return v_cur_2187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0___boxed(lean_object* v_self_2188_){
_start:
{
lean_object* v_res_2189_; 
v_res_2189_ = l_Lean_Syntax_MonadTraverser_getCur___redArg___lam__0(v_self_2188_);
lean_dec_ref(v_self_2188_);
return v_res_2189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___redArg(lean_object* v_inst_2191_, lean_object* v_t_2192_){
_start:
{
lean_object* v_toApplicative_2193_; lean_object* v_toFunctor_2194_; lean_object* v_map_2195_; lean_object* v_get_2196_; lean_object* v___f_2197_; lean_object* v___x_2198_; 
v_toApplicative_2193_ = lean_ctor_get(v_inst_2191_, 0);
lean_inc_ref(v_toApplicative_2193_);
lean_dec_ref(v_inst_2191_);
v_toFunctor_2194_ = lean_ctor_get(v_toApplicative_2193_, 0);
lean_inc_ref(v_toFunctor_2194_);
lean_dec_ref(v_toApplicative_2193_);
v_map_2195_ = lean_ctor_get(v_toFunctor_2194_, 0);
lean_inc(v_map_2195_);
lean_dec_ref(v_toFunctor_2194_);
v_get_2196_ = lean_ctor_get(v_t_2192_, 0);
lean_inc(v_get_2196_);
lean_dec_ref(v_t_2192_);
v___f_2197_ = ((lean_object*)(l_Lean_Syntax_MonadTraverser_getCur___redArg___closed__0));
v___x_2198_ = lean_apply_4(v_map_2195_, lean_box(0), lean_box(0), v___f_2197_, v_get_2196_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur(lean_object* v_m_2199_, lean_object* v_inst_2200_, lean_object* v_t_2201_){
_start:
{
lean_object* v___x_2202_; 
v___x_2202_ = l_Lean_Syntax_MonadTraverser_getCur___redArg(v_inst_2200_, v_t_2201_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur___redArg___lam__0(lean_object* v_stx_2203_, lean_object* v_s_2204_){
_start:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2205_ = lean_box(0);
v___x_2206_ = l_Lean_Syntax_Traverser_setCur(v_s_2204_, v_stx_2203_);
v___x_2207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2207_, 0, v___x_2205_);
lean_ctor_set(v___x_2207_, 1, v___x_2206_);
return v___x_2207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur___redArg(lean_object* v_t_2208_, lean_object* v_stx_2209_){
_start:
{
lean_object* v_modifyGet_2210_; lean_object* v___f_2211_; lean_object* v___x_2212_; 
v_modifyGet_2210_ = lean_ctor_get(v_t_2208_, 2);
lean_inc(v_modifyGet_2210_);
lean_dec_ref(v_t_2208_);
v___f_2211_ = lean_alloc_closure((void*)(l_Lean_Syntax_MonadTraverser_setCur___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2211_, 0, v_stx_2209_);
v___x_2212_ = lean_apply_2(v_modifyGet_2210_, lean_box(0), v___f_2211_);
return v___x_2212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_setCur(lean_object* v_m_2213_, lean_object* v_t_2214_, lean_object* v_stx_2215_){
_start:
{
lean_object* v___x_2216_; 
v___x_2216_ = l_Lean_Syntax_MonadTraverser_setCur___redArg(v_t_2214_, v_stx_2215_);
return v___x_2216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown___redArg___lam__0(lean_object* v_idx_2217_, lean_object* v_s_2218_){
_start:
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; 
v___x_2219_ = lean_box(0);
v___x_2220_ = l_Lean_Syntax_Traverser_down(v_s_2218_, v_idx_2217_);
v___x_2221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2221_, 0, v___x_2219_);
lean_ctor_set(v___x_2221_, 1, v___x_2220_);
return v___x_2221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown___redArg(lean_object* v_t_2222_, lean_object* v_idx_2223_){
_start:
{
lean_object* v_modifyGet_2224_; lean_object* v___f_2225_; lean_object* v___x_2226_; 
v_modifyGet_2224_ = lean_ctor_get(v_t_2222_, 2);
lean_inc(v_modifyGet_2224_);
lean_dec_ref(v_t_2222_);
v___f_2225_ = lean_alloc_closure((void*)(l_Lean_Syntax_MonadTraverser_goDown___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2225_, 0, v_idx_2223_);
v___x_2226_ = lean_apply_2(v_modifyGet_2224_, lean_box(0), v___f_2225_);
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goDown(lean_object* v_m_2227_, lean_object* v_t_2228_, lean_object* v_idx_2229_){
_start:
{
lean_object* v___x_2230_; 
v___x_2230_ = l_Lean_Syntax_MonadTraverser_goDown___redArg(v_t_2228_, v_idx_2229_);
return v___x_2230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp___redArg___lam__0(lean_object* v_s_2231_){
_start:
{
lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2232_ = lean_box(0);
v___x_2233_ = l_Lean_Syntax_Traverser_up(v_s_2231_);
v___x_2234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2234_, 0, v___x_2232_);
lean_ctor_set(v___x_2234_, 1, v___x_2233_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp___redArg(lean_object* v_t_2236_){
_start:
{
lean_object* v_modifyGet_2237_; lean_object* v___f_2238_; lean_object* v___x_2239_; 
v_modifyGet_2237_ = lean_ctor_get(v_t_2236_, 2);
lean_inc(v_modifyGet_2237_);
lean_dec_ref(v_t_2236_);
v___f_2238_ = ((lean_object*)(l_Lean_Syntax_MonadTraverser_goUp___redArg___closed__0));
v___x_2239_ = lean_apply_2(v_modifyGet_2237_, lean_box(0), v___f_2238_);
return v___x_2239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goUp(lean_object* v_m_2240_, lean_object* v_t_2241_){
_start:
{
lean_object* v___x_2242_; 
v___x_2242_ = l_Lean_Syntax_MonadTraverser_goUp___redArg(v_t_2241_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___redArg___lam__0(lean_object* v_s_2243_){
_start:
{
lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2244_ = lean_box(0);
v___x_2245_ = l_Lean_Syntax_Traverser_left(v_s_2243_);
v___x_2246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2246_, 0, v___x_2244_);
lean_ctor_set(v___x_2246_, 1, v___x_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___redArg(lean_object* v_t_2248_){
_start:
{
lean_object* v_modifyGet_2249_; lean_object* v___f_2250_; lean_object* v___x_2251_; 
v_modifyGet_2249_ = lean_ctor_get(v_t_2248_, 2);
lean_inc(v_modifyGet_2249_);
lean_dec_ref(v_t_2248_);
v___f_2250_ = ((lean_object*)(l_Lean_Syntax_MonadTraverser_goLeft___redArg___closed__0));
v___x_2251_ = lean_apply_2(v_modifyGet_2249_, lean_box(0), v___f_2250_);
return v___x_2251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft(lean_object* v_m_2252_, lean_object* v_t_2253_){
_start:
{
lean_object* v___x_2254_; 
v___x_2254_ = l_Lean_Syntax_MonadTraverser_goLeft___redArg(v_t_2253_);
return v___x_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight___redArg___lam__0(lean_object* v_s_2255_){
_start:
{
lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___x_2256_ = lean_box(0);
v___x_2257_ = l_Lean_Syntax_Traverser_right(v_s_2255_);
v___x_2258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2258_, 0, v___x_2256_);
lean_ctor_set(v___x_2258_, 1, v___x_2257_);
return v___x_2258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight___redArg(lean_object* v_t_2260_){
_start:
{
lean_object* v_modifyGet_2261_; lean_object* v___f_2262_; lean_object* v___x_2263_; 
v_modifyGet_2261_ = lean_ctor_get(v_t_2260_, 2);
lean_inc(v_modifyGet_2261_);
lean_dec_ref(v_t_2260_);
v___f_2262_ = ((lean_object*)(l_Lean_Syntax_MonadTraverser_goRight___redArg___closed__0));
v___x_2263_ = lean_apply_2(v_modifyGet_2261_, lean_box(0), v___f_2262_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goRight(lean_object* v_m_2264_, lean_object* v_t_2265_){
_start:
{
lean_object* v___x_2266_; 
v___x_2266_ = l_Lean_Syntax_MonadTraverser_goRight___redArg(v_t_2265_);
return v___x_2266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0(lean_object* v_toPure_2267_, lean_object* v_st_2268_){
_start:
{
lean_object* v_idxs_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; uint8_t v___x_2273_; 
v_idxs_2269_ = lean_ctor_get(v_st_2268_, 2);
v___x_2270_ = lean_array_get_size(v_idxs_2269_);
v___x_2271_ = lean_unsigned_to_nat(1u);
v___x_2272_ = lean_nat_sub(v___x_2270_, v___x_2271_);
v___x_2273_ = lean_nat_dec_lt(v___x_2272_, v___x_2270_);
if (v___x_2273_ == 0)
{
lean_object* v___x_2274_; lean_object* v___x_2275_; 
lean_dec(v___x_2272_);
v___x_2274_ = lean_unsigned_to_nat(0u);
v___x_2275_ = lean_apply_2(v_toPure_2267_, lean_box(0), v___x_2274_);
return v___x_2275_;
}
else
{
lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2276_ = lean_array_fget_borrowed(v_idxs_2269_, v___x_2272_);
lean_dec(v___x_2272_);
lean_inc(v___x_2276_);
v___x_2277_ = lean_apply_2(v_toPure_2267_, lean_box(0), v___x_2276_);
return v___x_2277_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0___boxed(lean_object* v_toPure_2278_, lean_object* v_st_2279_){
_start:
{
lean_object* v_res_2280_; 
v_res_2280_ = l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0(v_toPure_2278_, v_st_2279_);
lean_dec_ref(v_st_2279_);
return v_res_2280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx___redArg(lean_object* v_inst_2281_, lean_object* v_t_2282_){
_start:
{
lean_object* v_toApplicative_2283_; lean_object* v_toBind_2284_; lean_object* v_get_2285_; lean_object* v_toPure_2286_; lean_object* v___f_2287_; lean_object* v___x_2288_; 
v_toApplicative_2283_ = lean_ctor_get(v_inst_2281_, 0);
lean_inc_ref(v_toApplicative_2283_);
v_toBind_2284_ = lean_ctor_get(v_inst_2281_, 1);
lean_inc(v_toBind_2284_);
lean_dec_ref(v_inst_2281_);
v_get_2285_ = lean_ctor_get(v_t_2282_, 0);
lean_inc(v_get_2285_);
lean_dec_ref(v_t_2282_);
v_toPure_2286_ = lean_ctor_get(v_toApplicative_2283_, 1);
lean_inc(v_toPure_2286_);
lean_dec_ref(v_toApplicative_2283_);
v___f_2287_ = lean_alloc_closure((void*)(l_Lean_Syntax_MonadTraverser_getIdx___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2287_, 0, v_toPure_2286_);
v___x_2288_ = lean_apply_4(v_toBind_2284_, lean_box(0), lean_box(0), v_get_2285_, v___f_2287_);
return v___x_2288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getIdx(lean_object* v_m_2289_, lean_object* v_inst_2290_, lean_object* v_t_2291_){
_start:
{
lean_object* v___x_2292_; 
v___x_2292_ = l_Lean_Syntax_MonadTraverser_getIdx___redArg(v_inst_2290_, v_t_2291_);
return v___x_2292_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getIdAt(lean_object* v_n_2293_, lean_object* v_i_2294_){
_start:
{
lean_object* v_args_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
v_args_2295_ = lean_ctor_get(v_n_2293_, 2);
v___x_2296_ = lean_box(0);
v___x_2297_ = lean_array_get_borrowed(v___x_2296_, v_args_2295_, v_i_2294_);
v___x_2298_ = l_Lean_Syntax_getId(v___x_2297_);
return v___x_2298_;
}
}
LEAN_EXPORT lean_object* l_Lean_SyntaxNode_getIdAt___boxed(lean_object* v_n_2299_, lean_object* v_i_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l_Lean_SyntaxNode_getIdAt(v_n_2299_, v_i_2300_);
lean_dec(v_i_2300_);
lean_dec(v_n_2299_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkListNode(lean_object* v_args_2302_){
_start:
{
lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
v___x_2303_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__2));
v___x_2304_ = lean_box(2);
v___x_2305_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2304_);
lean_ctor_set(v___x_2305_, 1, v___x_2303_);
lean_ctor_set(v___x_2305_, 2, v_args_2302_);
return v___x_2305_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isQuot(lean_object* v_x_2311_){
_start:
{
if (lean_obj_tag(v_x_2311_) == 1)
{
lean_object* v_kind_2312_; 
v_kind_2312_ = lean_ctor_get(v_x_2311_, 1);
if (lean_obj_tag(v_kind_2312_) == 1)
{
lean_object* v_pre_2313_; lean_object* v_str_2314_; lean_object* v___x_2315_; uint8_t v___x_2316_; 
v_pre_2313_ = lean_ctor_get(v_kind_2312_, 0);
v_str_2314_ = lean_ctor_get(v_kind_2312_, 1);
v___x_2315_ = ((lean_object*)(l_Lean_Syntax_isQuot___closed__0));
v___x_2316_ = lean_string_dec_eq(v_str_2314_, v___x_2315_);
if (v___x_2316_ == 0)
{
lean_object* v___x_2317_; uint8_t v___x_2318_; 
v___x_2317_ = ((lean_object*)(l_Lean_Syntax_isQuot___closed__1));
v___x_2318_ = lean_string_dec_eq(v_str_2314_, v___x_2317_);
if (v___x_2318_ == 0)
{
return v___x_2318_;
}
else
{
if (lean_obj_tag(v_pre_2313_) == 1)
{
lean_object* v_pre_2319_; 
v_pre_2319_ = lean_ctor_get(v_pre_2313_, 0);
if (lean_obj_tag(v_pre_2319_) == 1)
{
lean_object* v_pre_2320_; 
v_pre_2320_ = lean_ctor_get(v_pre_2319_, 0);
if (lean_obj_tag(v_pre_2320_) == 1)
{
lean_object* v_pre_2321_; 
v_pre_2321_ = lean_ctor_get(v_pre_2320_, 0);
if (lean_obj_tag(v_pre_2321_) == 0)
{
lean_object* v_str_2322_; lean_object* v_str_2323_; lean_object* v_str_2324_; lean_object* v___x_2325_; uint8_t v___x_2326_; 
v_str_2322_ = lean_ctor_get(v_pre_2313_, 1);
v_str_2323_ = lean_ctor_get(v_pre_2319_, 1);
v_str_2324_ = lean_ctor_get(v_pre_2320_, 1);
v___x_2325_ = ((lean_object*)(l_Lean_Syntax_isQuot___closed__2));
v___x_2326_ = lean_string_dec_eq(v_str_2324_, v___x_2325_);
if (v___x_2326_ == 0)
{
return v___x_2316_;
}
else
{
lean_object* v___x_2327_; uint8_t v___x_2328_; 
v___x_2327_ = ((lean_object*)(l_Lean_Syntax_isQuot___closed__3));
v___x_2328_ = lean_string_dec_eq(v_str_2323_, v___x_2327_);
if (v___x_2328_ == 0)
{
return v___x_2328_;
}
else
{
lean_object* v___x_2329_; uint8_t v___x_2330_; 
v___x_2329_ = ((lean_object*)(l_Lean_Syntax_isQuot___closed__4));
v___x_2330_ = lean_string_dec_eq(v_str_2322_, v___x_2329_);
return v___x_2330_;
}
}
}
else
{
return v___x_2316_;
}
}
else
{
return v___x_2316_;
}
}
else
{
return v___x_2316_;
}
}
else
{
return v___x_2316_;
}
}
}
else
{
return v___x_2316_;
}
}
else
{
uint8_t v___x_2331_; 
v___x_2331_ = 0;
return v___x_2331_;
}
}
else
{
uint8_t v___x_2332_; 
v___x_2332_ = 0;
return v___x_2332_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isQuot___boxed(lean_object* v_x_2333_){
_start:
{
uint8_t v_res_2334_; lean_object* v_r_2335_; 
v_res_2334_ = l_Lean_Syntax_isQuot(v_x_2333_);
lean_dec(v_x_2333_);
v_r_2335_ = lean_box(v_res_2334_);
return v_r_2335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getQuotContent(lean_object* v_stx_2341_){
_start:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___y_2345_; uint8_t v___x_2351_; 
v___x_2342_ = l_Lean_Syntax_getNumArgs(v_stx_2341_);
v___x_2343_ = lean_unsigned_to_nat(1u);
v___x_2351_ = lean_nat_dec_eq(v___x_2342_, v___x_2343_);
lean_dec(v___x_2342_);
if (v___x_2351_ == 0)
{
v___y_2345_ = v_stx_2341_;
goto v___jp_2344_;
}
else
{
lean_object* v___x_2352_; lean_object* v___x_2353_; 
v___x_2352_ = lean_unsigned_to_nat(0u);
v___x_2353_ = l_Lean_Syntax_getArg(v_stx_2341_, v___x_2352_);
lean_dec(v_stx_2341_);
v___y_2345_ = v___x_2353_;
goto v___jp_2344_;
}
v___jp_2344_:
{
lean_object* v___x_2346_; uint8_t v___x_2347_; 
v___x_2346_ = ((lean_object*)(l_Lean_Syntax_getQuotContent___closed__0));
lean_inc(v___y_2345_);
v___x_2347_ = l_Lean_Syntax_isOfKind(v___y_2345_, v___x_2346_);
if (v___x_2347_ == 0)
{
lean_object* v___x_2348_; 
v___x_2348_ = l_Lean_Syntax_getArg(v___y_2345_, v___x_2343_);
lean_dec(v___y_2345_);
return v___x_2348_;
}
else
{
lean_object* v___x_2349_; lean_object* v___x_2350_; 
v___x_2349_ = lean_unsigned_to_nat(3u);
v___x_2350_ = l_Lean_Syntax_getArg(v___y_2345_, v___x_2349_);
lean_dec(v___y_2345_);
return v___x_2350_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquot(lean_object* v_x_2355_){
_start:
{
if (lean_obj_tag(v_x_2355_) == 1)
{
lean_object* v_kind_2356_; 
v_kind_2356_ = lean_ctor_get(v_x_2355_, 1);
if (lean_obj_tag(v_kind_2356_) == 1)
{
lean_object* v_str_2357_; lean_object* v___x_2358_; uint8_t v___x_2359_; 
v_str_2357_ = lean_ctor_get(v_kind_2356_, 1);
v___x_2358_ = ((lean_object*)(l_Lean_Syntax_isAntiquot___closed__0));
v___x_2359_ = lean_string_dec_eq(v_str_2357_, v___x_2358_);
return v___x_2359_;
}
else
{
uint8_t v___x_2360_; 
v___x_2360_ = 0;
return v___x_2360_;
}
}
else
{
uint8_t v___x_2361_; 
v___x_2361_ = 0;
return v___x_2361_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquot___boxed(lean_object* v_x_2362_){
_start:
{
uint8_t v_res_2363_; lean_object* v_r_2364_; 
v_res_2363_ = l_Lean_Syntax_isAntiquot(v_x_2362_);
lean_dec(v_x_2362_);
v_r_2364_ = lean_box(v_res_2363_);
return v_r_2364_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0(lean_object* v___x_2365_, uint8_t v___x_2366_, lean_object* v_as_2367_, size_t v_i_2368_, size_t v_stop_2369_){
_start:
{
uint8_t v___x_2370_; 
v___x_2370_ = lean_usize_dec_eq(v_i_2368_, v_stop_2369_);
if (v___x_2370_ == 0)
{
uint8_t v___x_2371_; uint8_t v___y_2373_; lean_object* v___x_2377_; uint8_t v___x_2378_; 
v___x_2371_ = 1;
v___x_2377_ = lean_array_uget_borrowed(v_as_2367_, v_i_2368_);
v___x_2378_ = l_Lean_Syntax_isAntiquot(v___x_2377_);
if (v___x_2378_ == 0)
{
lean_object* v___x_2379_; uint8_t v___x_2380_; 
v___x_2379_ = lean_unsigned_to_nat(0u);
v___x_2380_ = lean_nat_dec_lt(v___x_2379_, v___x_2365_);
v___y_2373_ = v___x_2380_;
goto v___jp_2372_;
}
else
{
v___y_2373_ = v___x_2366_;
goto v___jp_2372_;
}
v___jp_2372_:
{
if (v___y_2373_ == 0)
{
size_t v___x_2374_; size_t v___x_2375_; 
v___x_2374_ = ((size_t)1ULL);
v___x_2375_ = lean_usize_add(v_i_2368_, v___x_2374_);
v_i_2368_ = v___x_2375_;
goto _start;
}
else
{
return v___x_2371_;
}
}
}
else
{
uint8_t v___x_2381_; 
v___x_2381_ = 0;
return v___x_2381_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0___boxed(lean_object* v___x_2382_, lean_object* v___x_2383_, lean_object* v_as_2384_, lean_object* v_i_2385_, lean_object* v_stop_2386_){
_start:
{
uint8_t v___x_336__boxed_2387_; size_t v_i_boxed_2388_; size_t v_stop_boxed_2389_; uint8_t v_res_2390_; lean_object* v_r_2391_; 
v___x_336__boxed_2387_ = lean_unbox(v___x_2383_);
v_i_boxed_2388_ = lean_unbox_usize(v_i_2385_);
lean_dec(v_i_2385_);
v_stop_boxed_2389_ = lean_unbox_usize(v_stop_2386_);
lean_dec(v_stop_2386_);
v_res_2390_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0(v___x_2382_, v___x_336__boxed_2387_, v_as_2384_, v_i_boxed_2388_, v_stop_boxed_2389_);
lean_dec_ref(v_as_2384_);
lean_dec(v___x_2382_);
v_r_2391_ = lean_box(v_res_2390_);
return v_r_2391_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquots(lean_object* v_stx_2392_){
_start:
{
uint8_t v___x_2393_; 
v___x_2393_ = l_Lean_Syntax_isAntiquot(v_stx_2392_);
if (v___x_2393_ == 0)
{
lean_object* v___x_2394_; uint8_t v___x_2395_; 
v___x_2394_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
lean_inc(v_stx_2392_);
v___x_2395_ = l_Lean_Syntax_isOfKind(v_stx_2392_, v___x_2394_);
if (v___x_2395_ == 0)
{
lean_dec(v_stx_2392_);
return v___x_2395_;
}
else
{
lean_object* v___x_2396_; lean_object* v___x_2397_; uint8_t v___x_2398_; 
v___x_2396_ = lean_unsigned_to_nat(0u);
v___x_2397_ = l_Lean_Syntax_getNumArgs(v_stx_2392_);
v___x_2398_ = lean_nat_dec_lt(v___x_2396_, v___x_2397_);
if (v___x_2398_ == 0)
{
lean_dec(v___x_2397_);
lean_dec(v_stx_2392_);
return v___x_2398_;
}
else
{
lean_object* v___x_2399_; lean_object* v___x_2400_; uint8_t v___x_2401_; 
v___x_2399_ = l_Lean_Syntax_getArgs(v_stx_2392_);
lean_dec(v_stx_2392_);
v___x_2400_ = lean_array_get_size(v___x_2399_);
v___x_2401_ = lean_nat_dec_lt(v___x_2396_, v___x_2400_);
if (v___x_2401_ == 0)
{
lean_dec_ref(v___x_2399_);
lean_dec(v___x_2397_);
return v___x_2398_;
}
else
{
if (v___x_2401_ == 0)
{
lean_dec_ref(v___x_2399_);
lean_dec(v___x_2397_);
return v___x_2398_;
}
else
{
size_t v___x_2402_; size_t v___x_2403_; uint8_t v___x_2404_; 
v___x_2402_ = ((size_t)0ULL);
v___x_2403_ = lean_usize_of_nat(v___x_2400_);
v___x_2404_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Syntax_isAntiquots_spec__0(v___x_2397_, v___x_2393_, v___x_2399_, v___x_2402_, v___x_2403_);
lean_dec_ref(v___x_2399_);
lean_dec(v___x_2397_);
if (v___x_2404_ == 0)
{
return v___x_2401_;
}
else
{
return v___x_2393_;
}
}
}
}
}
}
else
{
lean_dec(v_stx_2392_);
return v___x_2393_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquots___boxed(lean_object* v_stx_2405_){
_start:
{
uint8_t v_res_2406_; lean_object* v_r_2407_; 
v_res_2406_ = l_Lean_Syntax_isAntiquots(v_stx_2405_);
v_r_2407_ = lean_box(v_res_2406_);
return v_r_2407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getCanonicalAntiquot(lean_object* v_stx_2408_){
_start:
{
lean_object* v___x_2409_; uint8_t v___x_2410_; 
v___x_2409_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
lean_inc(v_stx_2408_);
v___x_2410_ = l_Lean_Syntax_isOfKind(v_stx_2408_, v___x_2409_);
if (v___x_2410_ == 0)
{
return v_stx_2408_;
}
else
{
lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2411_ = lean_unsigned_to_nat(0u);
v___x_2412_ = l_Lean_Syntax_getArg(v_stx_2408_, v___x_2411_);
lean_dec(v_stx_2408_);
return v___x_2412_;
}
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__1(void){
_start:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; 
v___x_2414_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__0));
v___x_2415_ = l_Lean_mkAtom(v___x_2414_);
return v___x_2415_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__3(void){
_start:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2418_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__1, &l_Lean_Syntax_mkAntiquotNode___closed__1_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__1);
v___x_2419_ = lean_unsigned_to_nat(4u);
v___x_2420_ = lean_mk_empty_array_with_capacity(v___x_2419_);
v___x_2421_ = lean_array_push(v___x_2420_, v___x_2418_);
return v___x_2421_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__9(void){
_start:
{
lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2429_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__8));
v___x_2430_ = l_Lean_mkAtom(v___x_2429_);
return v___x_2430_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__10(void){
_start:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2431_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__9, &l_Lean_Syntax_mkAntiquotNode___closed__9_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__9);
v___x_2432_ = lean_unsigned_to_nat(2u);
v___x_2433_ = lean_mk_empty_array_with_capacity(v___x_2432_);
v___x_2434_ = lean_array_push(v___x_2433_, v___x_2431_);
return v___x_2434_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__16(void){
_start:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; 
v___x_2445_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__15));
v___x_2446_ = l_Lean_mkAtom(v___x_2445_);
return v___x_2446_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__18(void){
_start:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2448_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__17));
v___x_2449_ = l_Lean_mkAtom(v___x_2448_);
return v___x_2449_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotNode___closed__19(void){
_start:
{
lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2450_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__16, &l_Lean_Syntax_mkAntiquotNode___closed__16_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__16);
v___x_2451_ = lean_unsigned_to_nat(3u);
v___x_2452_ = lean_mk_empty_array_with_capacity(v___x_2451_);
v___x_2453_ = lean_array_push(v___x_2452_, v___x_2450_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotNode(lean_object* v_kind_2454_, lean_object* v_term_2455_, lean_object* v_nesting_2456_, lean_object* v_name_2457_, uint8_t v_isPseudoKind_2458_){
_start:
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v_nesting_2463_; lean_object* v___y_2465_; lean_object* v___y_2466_; lean_object* v___y_2467_; lean_object* v___y_2477_; lean_object* v___y_2478_; lean_object* v___y_2482_; uint8_t v___x_2490_; 
v___x_2459_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__1, &l_Lean_Syntax_mkAntiquotNode___closed__1_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__1);
v___x_2460_ = lean_mk_array(v_nesting_2456_, v___x_2459_);
v___x_2461_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__2));
v___x_2462_ = lean_box(2);
v_nesting_2463_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_nesting_2463_, 0, v___x_2462_);
lean_ctor_set(v_nesting_2463_, 1, v___x_2461_);
lean_ctor_set(v_nesting_2463_, 2, v___x_2460_);
v___x_2490_ = l_Lean_Syntax_isIdent(v_term_2455_);
if (v___x_2490_ == 0)
{
lean_object* v___x_2491_; uint8_t v___x_2492_; 
v___x_2491_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__12));
lean_inc(v_term_2455_);
v___x_2492_ = l_Lean_Syntax_isOfKind(v_term_2455_, v___x_2491_);
if (v___x_2492_ == 0)
{
lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; 
v___x_2493_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__14));
v___x_2494_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__18, &l_Lean_Syntax_mkAntiquotNode___closed__18_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__18);
v___x_2495_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__19, &l_Lean_Syntax_mkAntiquotNode___closed__19_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__19);
v___x_2496_ = lean_array_push(v___x_2495_, v_term_2455_);
v___x_2497_ = lean_array_push(v___x_2496_, v___x_2494_);
v___x_2498_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2462_);
lean_ctor_set(v___x_2498_, 1, v___x_2493_);
lean_ctor_set(v___x_2498_, 2, v___x_2497_);
v___y_2482_ = v___x_2498_;
goto v___jp_2481_;
}
else
{
lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2499_ = lean_unsigned_to_nat(0u);
v___x_2500_ = l_Lean_Syntax_getArg(v_term_2455_, v___x_2499_);
lean_dec(v_term_2455_);
v___y_2482_ = v___x_2500_;
goto v___jp_2481_;
}
}
else
{
v___y_2482_ = v_term_2455_;
goto v___jp_2481_;
}
v___jp_2464_:
{
lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; 
lean_inc(v___y_2467_);
v___x_2468_ = l_Lean_Name_append(v_kind_2454_, v___y_2467_);
v___x_2469_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__2));
v___x_2470_ = l_Lean_Name_append(v___x_2468_, v___x_2469_);
v___x_2471_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__3, &l_Lean_Syntax_mkAntiquotNode___closed__3_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__3);
v___x_2472_ = lean_array_push(v___x_2471_, v_nesting_2463_);
v___x_2473_ = lean_array_push(v___x_2472_, v___y_2466_);
v___x_2474_ = lean_array_push(v___x_2473_, v___y_2465_);
v___x_2475_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2475_, 0, v___x_2462_);
lean_ctor_set(v___x_2475_, 1, v___x_2470_);
lean_ctor_set(v___x_2475_, 2, v___x_2474_);
return v___x_2475_;
}
v___jp_2476_:
{
if (v_isPseudoKind_2458_ == 0)
{
lean_object* v___x_2479_; 
v___x_2479_ = lean_box(0);
v___y_2465_ = v___y_2478_;
v___y_2466_ = v___y_2477_;
v___y_2467_ = v___x_2479_;
goto v___jp_2464_;
}
else
{
lean_object* v___x_2480_; 
v___x_2480_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__5));
v___y_2465_ = v___y_2478_;
v___y_2466_ = v___y_2477_;
v___y_2467_ = v___x_2480_;
goto v___jp_2464_;
}
}
v___jp_2481_:
{
if (lean_obj_tag(v_name_2457_) == 0)
{
lean_object* v___x_2483_; 
v___x_2483_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__3));
v___y_2477_ = v___y_2482_;
v___y_2478_ = v___x_2483_;
goto v___jp_2476_;
}
else
{
lean_object* v_val_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; 
v_val_2484_ = lean_ctor_get(v_name_2457_, 0);
lean_inc(v_val_2484_);
lean_dec_ref_known(v_name_2457_, 1);
v___x_2485_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__7));
v___x_2486_ = l_Lean_mkAtom(v_val_2484_);
v___x_2487_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__10, &l_Lean_Syntax_mkAntiquotNode___closed__10_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__10);
v___x_2488_ = lean_array_push(v___x_2487_, v___x_2486_);
v___x_2489_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2489_, 0, v___x_2462_);
lean_ctor_set(v___x_2489_, 1, v___x_2485_);
lean_ctor_set(v___x_2489_, 2, v___x_2488_);
v___y_2477_ = v___y_2482_;
v___y_2478_ = v___x_2489_;
goto v___jp_2476_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotNode___boxed(lean_object* v_kind_2501_, lean_object* v_term_2502_, lean_object* v_nesting_2503_, lean_object* v_name_2504_, lean_object* v_isPseudoKind_2505_){
_start:
{
uint8_t v_isPseudoKind_boxed_2506_; lean_object* v_res_2507_; 
v_isPseudoKind_boxed_2506_ = lean_unbox(v_isPseudoKind_2505_);
v_res_2507_ = l_Lean_Syntax_mkAntiquotNode(v_kind_2501_, v_term_2502_, v_nesting_2503_, v_name_2504_, v_isPseudoKind_boxed_2506_);
return v_res_2507_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isEscapedAntiquot(lean_object* v_stx_2508_){
_start:
{
lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; uint8_t v___x_2514_; 
v___x_2509_ = lean_unsigned_to_nat(1u);
v___x_2510_ = l_Lean_Syntax_getArg(v_stx_2508_, v___x_2509_);
v___x_2511_ = l_Lean_Syntax_getArgs(v___x_2510_);
lean_dec(v___x_2510_);
v___x_2512_ = lean_array_get_size(v___x_2511_);
lean_dec_ref(v___x_2511_);
v___x_2513_ = lean_unsigned_to_nat(0u);
v___x_2514_ = lean_nat_dec_eq(v___x_2512_, v___x_2513_);
if (v___x_2514_ == 0)
{
uint8_t v___x_2515_; 
v___x_2515_ = 1;
return v___x_2515_;
}
else
{
uint8_t v___x_2516_; 
v___x_2516_ = 0;
return v___x_2516_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isEscapedAntiquot___boxed(lean_object* v_stx_2517_){
_start:
{
uint8_t v_res_2518_; lean_object* v_r_2519_; 
v_res_2518_ = l_Lean_Syntax_isEscapedAntiquot(v_stx_2517_);
lean_dec(v_stx_2517_);
v_r_2519_ = lean_box(v_res_2518_);
return v_r_2519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_unescapeAntiquot(lean_object* v_stx_2520_){
_start:
{
uint8_t v___x_2521_; 
v___x_2521_ = l_Lean_Syntax_isAntiquot(v_stx_2520_);
if (v___x_2521_ == 0)
{
return v_stx_2520_;
}
else
{
lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; 
v___x_2522_ = lean_unsigned_to_nat(1u);
v___x_2523_ = l_Lean_Syntax_getArg(v_stx_2520_, v___x_2522_);
v___x_2524_ = l_Lean_Syntax_getArgs(v___x_2523_);
lean_dec(v___x_2523_);
v___x_2525_ = lean_array_pop(v___x_2524_);
v___x_2526_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__2));
v___x_2527_ = lean_box(2);
v___x_2528_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2528_, 0, v___x_2527_);
lean_ctor_set(v___x_2528_, 1, v___x_2526_);
lean_ctor_set(v___x_2528_, 2, v___x_2525_);
v___x_2529_ = l_Lean_Syntax_setArg(v_stx_2520_, v___x_2522_, v___x_2528_);
return v___x_2529_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotTerm(lean_object* v_stx_2530_){
_start:
{
lean_object* v___y_2532_; uint8_t v___x_2543_; 
v___x_2543_ = l_Lean_Syntax_isAntiquot(v_stx_2530_);
if (v___x_2543_ == 0)
{
lean_object* v___x_2544_; lean_object* v___x_2545_; 
v___x_2544_ = lean_unsigned_to_nat(3u);
v___x_2545_ = l_Lean_Syntax_getArg(v_stx_2530_, v___x_2544_);
v___y_2532_ = v___x_2545_;
goto v___jp_2531_;
}
else
{
lean_object* v___x_2546_; lean_object* v___x_2547_; 
v___x_2546_ = lean_unsigned_to_nat(2u);
v___x_2547_ = l_Lean_Syntax_getArg(v_stx_2530_, v___x_2546_);
v___y_2532_ = v___x_2547_;
goto v___jp_2531_;
}
v___jp_2531_:
{
uint8_t v___x_2533_; 
v___x_2533_ = l_Lean_Syntax_isIdent(v___y_2532_);
if (v___x_2533_ == 0)
{
uint8_t v___x_2534_; 
v___x_2534_ = l_Lean_Syntax_isAtom(v___y_2532_);
if (v___x_2534_ == 0)
{
lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___x_2535_ = lean_unsigned_to_nat(1u);
v___x_2536_ = l_Lean_Syntax_getArg(v___y_2532_, v___x_2535_);
lean_dec(v___y_2532_);
return v___x_2536_;
}
else
{
lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2537_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__12));
v___x_2538_ = lean_unsigned_to_nat(1u);
v___x_2539_ = lean_mk_empty_array_with_capacity(v___x_2538_);
v___x_2540_ = lean_array_push(v___x_2539_, v___y_2532_);
v___x_2541_ = lean_box(2);
v___x_2542_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2542_, 0, v___x_2541_);
lean_ctor_set(v___x_2542_, 1, v___x_2537_);
lean_ctor_set(v___x_2542_, 2, v___x_2540_);
return v___x_2542_;
}
}
else
{
return v___y_2532_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotTerm___boxed(lean_object* v_stx_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l_Lean_Syntax_getAntiquotTerm(v_stx_2548_);
lean_dec(v_stx_2548_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKind_x3f(lean_object* v_x_2550_){
_start:
{
if (lean_obj_tag(v_x_2550_) == 1)
{
lean_object* v_kind_2551_; 
v_kind_2551_ = lean_ctor_get(v_x_2550_, 1);
if (lean_obj_tag(v_kind_2551_) == 1)
{
lean_object* v_pre_2552_; lean_object* v_str_2553_; 
v_pre_2552_ = lean_ctor_get(v_kind_2551_, 0);
v_str_2553_ = lean_ctor_get(v_kind_2551_, 1);
if (lean_obj_tag(v_pre_2552_) == 1)
{
lean_object* v_pre_2559_; lean_object* v_str_2560_; lean_object* v___x_2561_; uint8_t v___x_2562_; 
v_pre_2559_ = lean_ctor_get(v_pre_2552_, 0);
v_str_2560_ = lean_ctor_get(v_pre_2552_, 1);
v___x_2561_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotNode___closed__4));
v___x_2562_ = lean_string_dec_eq(v_str_2560_, v___x_2561_);
if (v___x_2562_ == 0)
{
lean_object* v___x_2563_; uint8_t v___x_2564_; 
v___x_2563_ = ((lean_object*)(l_Lean_Syntax_isAntiquot___closed__0));
v___x_2564_ = lean_string_dec_eq(v_str_2553_, v___x_2563_);
if (v___x_2564_ == 0)
{
lean_object* v___x_2565_; 
v___x_2565_ = lean_box(0);
return v___x_2565_;
}
else
{
goto v___jp_2554_;
}
}
else
{
lean_object* v___x_2566_; uint8_t v___x_2567_; 
v___x_2566_ = ((lean_object*)(l_Lean_Syntax_isAntiquot___closed__0));
v___x_2567_ = lean_string_dec_eq(v_str_2553_, v___x_2566_);
if (v___x_2567_ == 0)
{
lean_object* v___x_2568_; 
v___x_2568_ = lean_box(0);
return v___x_2568_;
}
else
{
lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; 
v___x_2569_ = lean_box(v___x_2567_);
lean_inc(v_pre_2559_);
v___x_2570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2570_, 0, v_pre_2559_);
lean_ctor_set(v___x_2570_, 1, v___x_2569_);
v___x_2571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2571_, 0, v___x_2570_);
return v___x_2571_;
}
}
}
else
{
lean_object* v___x_2572_; uint8_t v___x_2573_; 
v___x_2572_ = ((lean_object*)(l_Lean_Syntax_isAntiquot___closed__0));
v___x_2573_ = lean_string_dec_eq(v_str_2553_, v___x_2572_);
if (v___x_2573_ == 0)
{
lean_object* v___x_2574_; 
v___x_2574_ = lean_box(0);
return v___x_2574_;
}
else
{
goto v___jp_2554_;
}
}
v___jp_2554_:
{
uint8_t v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; 
v___x_2555_ = 0;
v___x_2556_ = lean_box(v___x_2555_);
lean_inc(v_pre_2552_);
v___x_2557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2557_, 0, v_pre_2552_);
lean_ctor_set(v___x_2557_, 1, v___x_2556_);
v___x_2558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2557_);
return v___x_2558_;
}
}
else
{
lean_object* v___x_2575_; 
v___x_2575_ = lean_box(0);
return v___x_2575_;
}
}
else
{
lean_object* v___x_2576_; 
v___x_2576_ = lean_box(0);
return v___x_2576_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKind_x3f___boxed(lean_object* v_x_2577_){
_start:
{
lean_object* v_res_2578_; 
v_res_2578_ = l_Lean_Syntax_antiquotKind_x3f(v_x_2577_);
lean_dec(v_x_2577_);
return v_res_2578_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0(lean_object* v_as_2579_, size_t v_i_2580_, size_t v_stop_2581_, lean_object* v_b_2582_){
_start:
{
lean_object* v___y_2584_; uint8_t v___x_2588_; 
v___x_2588_ = lean_usize_dec_eq(v_i_2580_, v_stop_2581_);
if (v___x_2588_ == 0)
{
lean_object* v___x_2589_; lean_object* v___x_2590_; 
v___x_2589_ = lean_array_uget_borrowed(v_as_2579_, v_i_2580_);
v___x_2590_ = l_Lean_Syntax_antiquotKind_x3f(v___x_2589_);
if (lean_obj_tag(v___x_2590_) == 0)
{
v___y_2584_ = v_b_2582_;
goto v___jp_2583_;
}
else
{
lean_object* v_val_2591_; lean_object* v___x_2592_; 
v_val_2591_ = lean_ctor_get(v___x_2590_, 0);
lean_inc(v_val_2591_);
lean_dec_ref_known(v___x_2590_, 1);
v___x_2592_ = lean_array_push(v_b_2582_, v_val_2591_);
v___y_2584_ = v___x_2592_;
goto v___jp_2583_;
}
}
else
{
return v_b_2582_;
}
v___jp_2583_:
{
size_t v___x_2585_; size_t v___x_2586_; 
v___x_2585_ = ((size_t)1ULL);
v___x_2586_ = lean_usize_add(v_i_2580_, v___x_2585_);
v_i_2580_ = v___x_2586_;
v_b_2582_ = v___y_2584_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0___boxed(lean_object* v_as_2593_, lean_object* v_i_2594_, lean_object* v_stop_2595_, lean_object* v_b_2596_){
_start:
{
size_t v_i_boxed_2597_; size_t v_stop_boxed_2598_; lean_object* v_res_2599_; 
v_i_boxed_2597_ = lean_unbox_usize(v_i_2594_);
lean_dec(v_i_2594_);
v_stop_boxed_2598_ = lean_unbox_usize(v_stop_2595_);
lean_dec(v_stop_2595_);
v_res_2599_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0(v_as_2593_, v_i_boxed_2597_, v_stop_boxed_2598_, v_b_2596_);
lean_dec_ref(v_as_2593_);
return v_res_2599_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0(lean_object* v_as_2602_, lean_object* v_start_2603_, lean_object* v_stop_2604_){
_start:
{
lean_object* v___x_2605_; uint8_t v___x_2606_; 
v___x_2605_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___closed__0));
v___x_2606_ = lean_nat_dec_lt(v_start_2603_, v_stop_2604_);
if (v___x_2606_ == 0)
{
return v___x_2605_;
}
else
{
lean_object* v___x_2607_; uint8_t v___x_2608_; 
v___x_2607_ = lean_array_get_size(v_as_2602_);
v___x_2608_ = lean_nat_dec_le(v_stop_2604_, v___x_2607_);
if (v___x_2608_ == 0)
{
uint8_t v___x_2609_; 
v___x_2609_ = lean_nat_dec_lt(v_start_2603_, v___x_2607_);
if (v___x_2609_ == 0)
{
return v___x_2605_;
}
else
{
size_t v___x_2610_; size_t v___x_2611_; lean_object* v___x_2612_; 
v___x_2610_ = lean_usize_of_nat(v_start_2603_);
v___x_2611_ = lean_usize_of_nat(v___x_2607_);
v___x_2612_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0(v_as_2602_, v___x_2610_, v___x_2611_, v___x_2605_);
return v___x_2612_;
}
}
else
{
size_t v___x_2613_; size_t v___x_2614_; lean_object* v___x_2615_; 
v___x_2613_ = lean_usize_of_nat(v_start_2603_);
v___x_2614_ = lean_usize_of_nat(v_stop_2604_);
v___x_2615_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0_spec__0(v_as_2602_, v___x_2613_, v___x_2614_, v___x_2605_);
return v___x_2615_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0___boxed(lean_object* v_as_2616_, lean_object* v_start_2617_, lean_object* v_stop_2618_){
_start:
{
lean_object* v_res_2619_; 
v_res_2619_ = l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0(v_as_2616_, v_start_2617_, v_stop_2618_);
lean_dec(v_stop_2618_);
lean_dec(v_start_2617_);
lean_dec_ref(v_as_2616_);
return v_res_2619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotKinds(lean_object* v_stx_2620_){
_start:
{
lean_object* v___x_2621_; uint8_t v___x_2622_; 
v___x_2621_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___redArg___lam__4___closed__1));
lean_inc(v_stx_2620_);
v___x_2622_ = l_Lean_Syntax_isOfKind(v_stx_2620_, v___x_2621_);
if (v___x_2622_ == 0)
{
lean_object* v___x_2623_; 
v___x_2623_ = l_Lean_Syntax_antiquotKind_x3f(v_stx_2620_);
lean_dec(v_stx_2620_);
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v___x_2624_; 
v___x_2624_ = lean_box(0);
return v___x_2624_;
}
else
{
lean_object* v_val_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v_val_2625_ = lean_ctor_get(v___x_2623_, 0);
lean_inc(v_val_2625_);
lean_dec_ref_known(v___x_2623_, 1);
v___x_2626_ = lean_box(0);
v___x_2627_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2627_, 0, v_val_2625_);
lean_ctor_set(v___x_2627_, 1, v___x_2626_);
return v___x_2627_;
}
}
else
{
lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; 
v___x_2628_ = l_Lean_Syntax_getArgs(v_stx_2620_);
lean_dec(v_stx_2620_);
v___x_2629_ = lean_unsigned_to_nat(0u);
v___x_2630_ = lean_array_get_size(v___x_2628_);
v___x_2631_ = l_Array_filterMapM___at___00Lean_Syntax_antiquotKinds_spec__0(v___x_2628_, v___x_2629_, v___x_2630_);
lean_dec_ref(v___x_2628_);
v___x_2632_ = lean_array_to_list(v___x_2631_);
return v___x_2632_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSpliceKind_x3f(lean_object* v_x_2634_){
_start:
{
if (lean_obj_tag(v_x_2634_) == 1)
{
lean_object* v_kind_2635_; 
v_kind_2635_ = lean_ctor_get(v_x_2634_, 1);
if (lean_obj_tag(v_kind_2635_) == 1)
{
lean_object* v_pre_2636_; lean_object* v_str_2637_; lean_object* v___x_2638_; uint8_t v___x_2639_; 
v_pre_2636_ = lean_ctor_get(v_kind_2635_, 0);
v_str_2637_ = lean_ctor_get(v_kind_2635_, 1);
v___x_2638_ = ((lean_object*)(l_Lean_Syntax_antiquotSpliceKind_x3f___closed__0));
v___x_2639_ = lean_string_dec_eq(v_str_2637_, v___x_2638_);
if (v___x_2639_ == 0)
{
lean_object* v___x_2640_; 
v___x_2640_ = lean_box(0);
return v___x_2640_;
}
else
{
lean_object* v___x_2641_; 
lean_inc(v_pre_2636_);
v___x_2641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2641_, 0, v_pre_2636_);
return v___x_2641_;
}
}
else
{
lean_object* v___x_2642_; 
v___x_2642_ = lean_box(0);
return v___x_2642_;
}
}
else
{
lean_object* v___x_2643_; 
v___x_2643_ = lean_box(0);
return v___x_2643_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSpliceKind_x3f___boxed(lean_object* v_x_2644_){
_start:
{
lean_object* v_res_2645_; 
v_res_2645_ = l_Lean_Syntax_antiquotSpliceKind_x3f(v_x_2644_);
lean_dec(v_x_2644_);
return v_res_2645_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquotSplice(lean_object* v_stx_2646_){
_start:
{
lean_object* v___x_2647_; 
v___x_2647_ = l_Lean_Syntax_antiquotSpliceKind_x3f(v_stx_2646_);
if (lean_obj_tag(v___x_2647_) == 0)
{
uint8_t v___x_2648_; 
v___x_2648_ = 0;
return v___x_2648_;
}
else
{
uint8_t v___x_2649_; 
lean_dec_ref_known(v___x_2647_, 1);
v___x_2649_ = 1;
return v___x_2649_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquotSplice___boxed(lean_object* v_stx_2650_){
_start:
{
uint8_t v_res_2651_; lean_object* v_r_2652_; 
v_res_2651_ = l_Lean_Syntax_isAntiquotSplice(v_stx_2650_);
lean_dec(v_stx_2650_);
v_r_2652_ = lean_box(v_res_2651_);
return v_r_2652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceContents(lean_object* v_stx_2653_){
_start:
{
lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; 
v___x_2654_ = lean_unsigned_to_nat(3u);
v___x_2655_ = l_Lean_Syntax_getArg(v_stx_2653_, v___x_2654_);
v___x_2656_ = l_Lean_Syntax_getArgs(v___x_2655_);
lean_dec(v___x_2655_);
return v___x_2656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceContents___boxed(lean_object* v_stx_2657_){
_start:
{
lean_object* v_res_2658_; 
v_res_2658_ = l_Lean_Syntax_getAntiquotSpliceContents(v_stx_2657_);
lean_dec(v_stx_2657_);
return v_res_2658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceSuffix(lean_object* v_stx_2659_){
_start:
{
uint8_t v___x_2660_; 
v___x_2660_ = l_Lean_Syntax_isAntiquotSplice(v_stx_2659_);
if (v___x_2660_ == 0)
{
lean_object* v___x_2661_; lean_object* v___x_2662_; 
v___x_2661_ = lean_unsigned_to_nat(1u);
v___x_2662_ = l_Lean_Syntax_getArg(v_stx_2659_, v___x_2661_);
return v___x_2662_;
}
else
{
lean_object* v___x_2663_; lean_object* v___x_2664_; 
v___x_2663_ = lean_unsigned_to_nat(5u);
v___x_2664_ = l_Lean_Syntax_getArg(v_stx_2659_, v___x_2663_);
return v___x_2664_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSpliceSuffix___boxed(lean_object* v_stx_2665_){
_start:
{
lean_object* v_res_2666_; 
v_res_2666_ = l_Lean_Syntax_getAntiquotSpliceSuffix(v_stx_2665_);
lean_dec(v_stx_2665_);
return v_res_2666_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__3(void){
_start:
{
lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2671_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotSpliceNode___closed__2));
v___x_2672_ = l_Lean_mkAtom(v___x_2671_);
return v___x_2672_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__5(void){
_start:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; 
v___x_2674_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotSpliceNode___closed__4));
v___x_2675_ = l_Lean_mkAtom(v___x_2674_);
return v___x_2675_;
}
}
static lean_object* _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__6(void){
_start:
{
lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; 
v___x_2676_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__1, &l_Lean_Syntax_mkAntiquotNode___closed__1_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__1);
v___x_2677_ = lean_unsigned_to_nat(6u);
v___x_2678_ = lean_mk_empty_array_with_capacity(v___x_2677_);
v___x_2679_ = lean_array_push(v___x_2678_, v___x_2676_);
return v___x_2679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotSpliceNode(lean_object* v_kind_2680_, lean_object* v_contents_2681_, lean_object* v_suffix_2682_, lean_object* v_nesting_2683_){
_start:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v_nesting_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; 
v___x_2684_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotNode___closed__1, &l_Lean_Syntax_mkAntiquotNode___closed__1_once, _init_l_Lean_Syntax_mkAntiquotNode___closed__1);
v___x_2685_ = lean_mk_array(v_nesting_2683_, v___x_2684_);
v___x_2686_ = ((lean_object*)(l_Lean_Syntax_asNode___closed__2));
v___x_2687_ = lean_box(2);
v_nesting_2688_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_nesting_2688_, 0, v___x_2687_);
lean_ctor_set(v_nesting_2688_, 1, v___x_2686_);
lean_ctor_set(v_nesting_2688_, 2, v___x_2685_);
v___x_2689_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotSpliceNode___closed__1));
v___x_2690_ = l_Lean_Name_append(v_kind_2680_, v___x_2689_);
v___x_2691_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotSpliceNode___closed__3, &l_Lean_Syntax_mkAntiquotSpliceNode___closed__3_once, _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__3);
v___x_2692_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2692_, 0, v___x_2687_);
lean_ctor_set(v___x_2692_, 1, v___x_2686_);
lean_ctor_set(v___x_2692_, 2, v_contents_2681_);
v___x_2693_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotSpliceNode___closed__5, &l_Lean_Syntax_mkAntiquotSpliceNode___closed__5_once, _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__5);
v___x_2694_ = l_Lean_mkAtom(v_suffix_2682_);
v___x_2695_ = lean_obj_once(&l_Lean_Syntax_mkAntiquotSpliceNode___closed__6, &l_Lean_Syntax_mkAntiquotSpliceNode___closed__6_once, _init_l_Lean_Syntax_mkAntiquotSpliceNode___closed__6);
v___x_2696_ = lean_array_push(v___x_2695_, v_nesting_2688_);
v___x_2697_ = lean_array_push(v___x_2696_, v___x_2691_);
v___x_2698_ = lean_array_push(v___x_2697_, v___x_2692_);
v___x_2699_ = lean_array_push(v___x_2698_, v___x_2693_);
v___x_2700_ = lean_array_push(v___x_2699_, v___x_2694_);
v___x_2701_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2701_, 0, v___x_2687_);
lean_ctor_set(v___x_2701_, 1, v___x_2690_);
lean_ctor_set(v___x_2701_, 2, v___x_2700_);
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSuffixSplice_x3f(lean_object* v_x_2703_){
_start:
{
if (lean_obj_tag(v_x_2703_) == 1)
{
lean_object* v_kind_2704_; 
v_kind_2704_ = lean_ctor_get(v_x_2703_, 1);
if (lean_obj_tag(v_kind_2704_) == 1)
{
lean_object* v_pre_2705_; lean_object* v_str_2706_; lean_object* v___x_2707_; uint8_t v___x_2708_; 
v_pre_2705_ = lean_ctor_get(v_kind_2704_, 0);
v_str_2706_ = lean_ctor_get(v_kind_2704_, 1);
v___x_2707_ = ((lean_object*)(l_Lean_Syntax_antiquotSuffixSplice_x3f___closed__0));
v___x_2708_ = lean_string_dec_eq(v_str_2706_, v___x_2707_);
if (v___x_2708_ == 0)
{
lean_object* v___x_2709_; 
v___x_2709_ = lean_box(0);
return v___x_2709_;
}
else
{
lean_object* v___x_2710_; 
lean_inc(v_pre_2705_);
v___x_2710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2710_, 0, v_pre_2705_);
return v___x_2710_;
}
}
else
{
lean_object* v___x_2711_; 
v___x_2711_ = lean_box(0);
return v___x_2711_;
}
}
else
{
lean_object* v___x_2712_; 
v___x_2712_ = lean_box(0);
return v___x_2712_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_antiquotSuffixSplice_x3f___boxed(lean_object* v_x_2713_){
_start:
{
lean_object* v_res_2714_; 
v_res_2714_ = l_Lean_Syntax_antiquotSuffixSplice_x3f(v_x_2713_);
lean_dec(v_x_2713_);
return v_res_2714_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAntiquotSuffixSplice(lean_object* v_stx_2715_){
_start:
{
lean_object* v___x_2716_; 
v___x_2716_ = l_Lean_Syntax_antiquotSuffixSplice_x3f(v_stx_2715_);
if (lean_obj_tag(v___x_2716_) == 0)
{
uint8_t v___x_2717_; 
v___x_2717_ = 0;
return v___x_2717_;
}
else
{
uint8_t v___x_2718_; 
lean_dec_ref_known(v___x_2716_, 1);
v___x_2718_ = 1;
return v___x_2718_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAntiquotSuffixSplice___boxed(lean_object* v_stx_2719_){
_start:
{
uint8_t v_res_2720_; lean_object* v_r_2721_; 
v_res_2720_ = l_Lean_Syntax_isAntiquotSuffixSplice(v_stx_2719_);
lean_dec(v_stx_2719_);
v_r_2721_ = lean_box(v_res_2720_);
return v_r_2721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSuffixSpliceInner(lean_object* v_stx_2722_){
_start:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2723_ = lean_unsigned_to_nat(0u);
v___x_2724_ = l_Lean_Syntax_getArg(v_stx_2722_, v___x_2723_);
return v___x_2724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getAntiquotSuffixSpliceInner___boxed(lean_object* v_stx_2725_){
_start:
{
lean_object* v_res_2726_; 
v_res_2726_ = l_Lean_Syntax_getAntiquotSuffixSpliceInner(v_stx_2725_);
lean_dec(v_stx_2725_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkAntiquotSuffixSpliceNode(lean_object* v_kind_2729_, lean_object* v_inner_2730_, lean_object* v_suffix_2731_){
_start:
{
lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; 
v___x_2732_ = ((lean_object*)(l_Lean_Syntax_mkAntiquotSuffixSpliceNode___closed__0));
v___x_2733_ = l_Lean_Name_append(v_kind_2729_, v___x_2732_);
v___x_2734_ = l_Lean_mkAtom(v_suffix_2731_);
v___x_2735_ = lean_unsigned_to_nat(2u);
v___x_2736_ = lean_mk_empty_array_with_capacity(v___x_2735_);
v___x_2737_ = lean_array_push(v___x_2736_, v_inner_2730_);
v___x_2738_ = lean_array_push(v___x_2737_, v___x_2734_);
v___x_2739_ = lean_box(2);
v___x_2740_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2740_, 0, v___x_2739_);
lean_ctor_set(v___x_2740_, 1, v___x_2733_);
lean_ctor_set(v___x_2740_, 2, v___x_2738_);
return v___x_2740_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isTokenAntiquot(lean_object* v_stx_2744_){
_start:
{
lean_object* v___x_2745_; uint8_t v___x_2746_; 
v___x_2745_ = ((lean_object*)(l_Lean_Syntax_isTokenAntiquot___closed__1));
v___x_2746_ = l_Lean_Syntax_isOfKind(v_stx_2744_, v___x_2745_);
return v___x_2746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isTokenAntiquot___boxed(lean_object* v_stx_2747_){
_start:
{
uint8_t v_res_2748_; lean_object* v_r_2749_; 
v_res_2748_ = l_Lean_Syntax_isTokenAntiquot(v_stx_2747_);
v_r_2749_ = lean_box(v_res_2748_);
return v_r_2749_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAnyAntiquot(lean_object* v_stx_2750_){
_start:
{
uint8_t v___x_2751_; 
v___x_2751_ = l_Lean_Syntax_isAntiquot(v_stx_2750_);
if (v___x_2751_ == 0)
{
uint8_t v___x_2752_; 
v___x_2752_ = l_Lean_Syntax_isAntiquotSplice(v_stx_2750_);
if (v___x_2752_ == 0)
{
uint8_t v___x_2753_; 
v___x_2753_ = l_Lean_Syntax_isAntiquotSuffixSplice(v_stx_2750_);
if (v___x_2753_ == 0)
{
uint8_t v___x_2754_; 
v___x_2754_ = l_Lean_Syntax_isTokenAntiquot(v_stx_2750_);
return v___x_2754_;
}
else
{
lean_dec(v_stx_2750_);
return v___x_2753_;
}
}
else
{
lean_dec(v_stx_2750_);
return v___x_2752_;
}
}
else
{
lean_dec(v_stx_2750_);
return v___x_2751_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAnyAntiquot___boxed(lean_object* v_stx_2755_){
_start:
{
uint8_t v_res_2756_; lean_object* v_r_2757_; 
v_res_2756_ = l_Lean_Syntax_isAnyAntiquot(v_stx_2755_);
v_r_2757_ = lean_box(v_res_2756_);
return v_r_2757_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg(lean_object* v_upperBound_2761_, lean_object* v_stx_2762_, lean_object* v_visit_2763_, lean_object* v_stack_2764_, lean_object* v_accept_2765_, lean_object* v_a_2766_, lean_object* v_b_2767_){
_start:
{
lean_object* v_a_2769_; uint8_t v___x_2773_; 
v___x_2773_ = lean_nat_dec_lt(v_a_2766_, v_upperBound_2761_);
if (v___x_2773_ == 0)
{
lean_dec(v_a_2766_);
lean_dec_ref(v_accept_2765_);
lean_dec(v_stack_2764_);
lean_dec_ref(v_visit_2763_);
lean_dec(v_stx_2762_);
lean_inc_ref(v_b_2767_);
return v_b_2767_;
}
else
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; uint8_t v___x_2778_; 
v___x_2774_ = lean_box(0);
v___x_2775_ = ((lean_object*)(l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go___closed__0));
v___x_2776_ = l_Lean_Syntax_getArg(v_stx_2762_, v_a_2766_);
lean_inc_ref(v_visit_2763_);
lean_inc(v___x_2776_);
v___x_2777_ = lean_apply_1(v_visit_2763_, v___x_2776_);
v___x_2778_ = lean_unbox(v___x_2777_);
if (v___x_2778_ == 0)
{
lean_dec(v___x_2776_);
v_a_2769_ = v___x_2775_;
goto v___jp_2768_;
}
else
{
lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; 
lean_inc(v_a_2766_);
lean_inc(v_stx_2762_);
v___x_2779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2779_, 0, v_stx_2762_);
lean_ctor_set(v___x_2779_, 1, v_a_2766_);
lean_inc(v_stack_2764_);
v___x_2780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2780_, 0, v___x_2779_);
lean_ctor_set(v___x_2780_, 1, v_stack_2764_);
lean_inc_ref(v_accept_2765_);
lean_inc_ref(v_visit_2763_);
v___x_2781_ = l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go(v_visit_2763_, v_accept_2765_, v___x_2780_, v___x_2776_);
if (lean_obj_tag(v___x_2781_) == 1)
{
lean_object* v___x_2782_; lean_object* v___x_2783_; 
lean_dec(v_a_2766_);
lean_dec_ref(v_accept_2765_);
lean_dec(v_stack_2764_);
lean_dec_ref(v_visit_2763_);
lean_dec(v_stx_2762_);
v___x_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2782_, 0, v___x_2781_);
v___x_2783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2783_, 0, v___x_2782_);
lean_ctor_set(v___x_2783_, 1, v___x_2774_);
return v___x_2783_;
}
else
{
lean_dec(v___x_2781_);
v_a_2769_ = v___x_2775_;
goto v___jp_2768_;
}
}
}
v___jp_2768_:
{
lean_object* v___x_2770_; lean_object* v___x_2771_; 
v___x_2770_ = lean_unsigned_to_nat(1u);
v___x_2771_ = lean_nat_add(v_a_2766_, v___x_2770_);
lean_dec(v_a_2766_);
v_a_2766_ = v___x_2771_;
v_b_2767_ = v_a_2769_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go(lean_object* v_visit_2784_, lean_object* v_accept_2785_, lean_object* v_stack_2786_, lean_object* v_stx_2787_){
_start:
{
lean_object* v___x_2788_; uint8_t v___x_2789_; 
lean_inc_ref(v_accept_2785_);
lean_inc(v_stx_2787_);
v___x_2788_ = lean_apply_1(v_accept_2785_, v_stx_2787_);
v___x_2789_ = lean_unbox(v___x_2788_);
if (v___x_2789_ == 0)
{
lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v_fst_2795_; 
v___x_2790_ = l_Lean_Syntax_getNumArgs(v_stx_2787_);
v___x_2791_ = lean_unsigned_to_nat(0u);
v___x_2792_ = lean_box(0);
v___x_2793_ = ((lean_object*)(l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go___closed__0));
v___x_2794_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg(v___x_2790_, v_stx_2787_, v_visit_2784_, v_stack_2786_, v_accept_2785_, v___x_2791_, v___x_2793_);
lean_dec(v___x_2790_);
v_fst_2795_ = lean_ctor_get(v___x_2794_, 0);
lean_inc(v_fst_2795_);
lean_dec_ref(v___x_2794_);
if (lean_obj_tag(v_fst_2795_) == 0)
{
return v___x_2792_;
}
else
{
lean_object* v_val_2796_; 
v_val_2796_ = lean_ctor_get(v_fst_2795_, 0);
lean_inc(v_val_2796_);
lean_dec_ref_known(v_fst_2795_, 1);
return v_val_2796_;
}
}
else
{
lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; 
lean_dec_ref(v_accept_2785_);
lean_dec_ref(v_visit_2784_);
v___x_2797_ = lean_unsigned_to_nat(0u);
v___x_2798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2798_, 0, v_stx_2787_);
lean_ctor_set(v___x_2798_, 1, v___x_2797_);
v___x_2799_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2798_);
lean_ctor_set(v___x_2799_, 1, v_stack_2786_);
v___x_2800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2800_, 0, v___x_2799_);
return v___x_2800_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg___boxed(lean_object* v_upperBound_2801_, lean_object* v_stx_2802_, lean_object* v_visit_2803_, lean_object* v_stack_2804_, lean_object* v_accept_2805_, lean_object* v_a_2806_, lean_object* v_b_2807_){
_start:
{
lean_object* v_res_2808_; 
v_res_2808_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg(v_upperBound_2801_, v_stx_2802_, v_visit_2803_, v_stack_2804_, v_accept_2805_, v_a_2806_, v_b_2807_);
lean_dec_ref(v_b_2807_);
lean_dec(v_upperBound_2801_);
return v_res_2808_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0(lean_object* v_upperBound_2809_, lean_object* v_stx_2810_, lean_object* v_visit_2811_, lean_object* v_stack_2812_, lean_object* v_accept_2813_, lean_object* v_inst_2814_, lean_object* v_R_2815_, lean_object* v_a_2816_, lean_object* v_b_2817_, lean_object* v_c_2818_){
_start:
{
lean_object* v___x_2819_; 
v___x_2819_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___redArg(v_upperBound_2809_, v_stx_2810_, v_visit_2811_, v_stack_2812_, v_accept_2813_, v_a_2816_, v_b_2817_);
return v___x_2819_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0___boxed(lean_object* v_upperBound_2820_, lean_object* v_stx_2821_, lean_object* v_visit_2822_, lean_object* v_stack_2823_, lean_object* v_accept_2824_, lean_object* v_inst_2825_, lean_object* v_R_2826_, lean_object* v_a_2827_, lean_object* v_b_2828_, lean_object* v_c_2829_){
_start:
{
lean_object* v_res_2830_; 
v_res_2830_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go_spec__0(v_upperBound_2820_, v_stx_2821_, v_visit_2822_, v_stack_2823_, v_accept_2824_, v_inst_2825_, v_R_2826_, v_a_2827_, v_b_2828_, v_c_2829_);
lean_dec_ref(v_b_2828_);
lean_dec(v_upperBound_2820_);
return v_res_2830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_findStack_x3f(lean_object* v_root_2831_, lean_object* v_visit_2832_, lean_object* v_accept_2833_){
_start:
{
lean_object* v___x_2834_; uint8_t v___x_2835_; 
lean_inc_ref(v_visit_2832_);
lean_inc(v_root_2831_);
v___x_2834_ = lean_apply_1(v_visit_2832_, v_root_2831_);
v___x_2835_ = lean_unbox(v___x_2834_);
if (v___x_2835_ == 0)
{
lean_object* v___x_2836_; 
lean_dec_ref(v_accept_2833_);
lean_dec_ref(v_visit_2832_);
lean_dec(v_root_2831_);
v___x_2836_ = lean_box(0);
return v___x_2836_;
}
else
{
lean_object* v___x_2837_; lean_object* v___x_2838_; 
v___x_2837_ = lean_box(0);
v___x_2838_ = l___private_Lean_Syntax_0__Lean_Syntax_findStack_x3f_go(v_visit_2832_, v_accept_2833_, v___x_2837_, v_root_2831_);
return v___x_2838_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_Stack_matches___lam__0(uint8_t v___x_2839_, lean_object* v_x_2840_, lean_object* v_p_2841_){
_start:
{
if (lean_obj_tag(v_p_2841_) == 0)
{
lean_dec_ref(v_x_2840_);
return v___x_2839_;
}
else
{
lean_object* v_fst_2842_; lean_object* v_val_2843_; uint8_t v___x_2844_; 
v_fst_2842_ = lean_ctor_get(v_x_2840_, 0);
lean_inc(v_fst_2842_);
lean_dec_ref(v_x_2840_);
v_val_2843_ = lean_ctor_get(v_p_2841_, 0);
v___x_2844_ = l_Lean_Syntax_isOfKind(v_fst_2842_, v_val_2843_);
return v___x_2844_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Stack_matches___lam__0___boxed(lean_object* v___x_2845_, lean_object* v_x_2846_, lean_object* v_p_2847_){
_start:
{
uint8_t v___x_125__boxed_2848_; uint8_t v_res_2849_; lean_object* v_r_2850_; 
v___x_125__boxed_2848_ = lean_unbox(v___x_2845_);
v_res_2849_ = l_Lean_Syntax_Stack_matches___lam__0(v___x_125__boxed_2848_, v_x_2846_, v_p_2847_);
lean_dec(v_p_2847_);
v_r_2850_ = lean_box(v_res_2849_);
return v_r_2850_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Lean_Syntax_Stack_matches_spec__0(lean_object* v_x_2851_){
_start:
{
if (lean_obj_tag(v_x_2851_) == 0)
{
uint8_t v___x_2852_; 
v___x_2852_ = 1;
return v___x_2852_;
}
else
{
lean_object* v_head_2853_; uint8_t v___x_2854_; 
v_head_2853_ = lean_ctor_get(v_x_2851_, 0);
v___x_2854_ = lean_unbox(v_head_2853_);
if (v___x_2854_ == 0)
{
uint8_t v___x_2855_; 
v___x_2855_ = lean_unbox(v_head_2853_);
return v___x_2855_;
}
else
{
lean_object* v_tail_2856_; 
v_tail_2856_ = lean_ctor_get(v_x_2851_, 1);
v_x_2851_ = v_tail_2856_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Lean_Syntax_Stack_matches_spec__0___boxed(lean_object* v_x_2858_){
_start:
{
uint8_t v_res_2859_; lean_object* v_r_2860_; 
v_res_2859_ = l_List_all___at___00Lean_Syntax_Stack_matches_spec__0(v_x_2858_);
lean_dec(v_x_2858_);
v_r_2860_ = lean_box(v_res_2859_);
return v_r_2860_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_Stack_matches(lean_object* v_stack_2863_, lean_object* v_pattern_2864_){
_start:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; uint8_t v___x_2867_; 
v___x_2865_ = l_List_lengthTR___redArg(v_pattern_2864_);
v___x_2866_ = l_List_lengthTR___redArg(v_stack_2863_);
v___x_2867_ = lean_nat_dec_le(v___x_2865_, v___x_2866_);
lean_dec(v___x_2866_);
lean_dec(v___x_2865_);
if (v___x_2867_ == 0)
{
lean_dec(v_pattern_2864_);
lean_dec(v_stack_2863_);
return v___x_2867_;
}
else
{
lean_object* v___x_2868_; lean_object* v___f_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; uint8_t v___x_2872_; 
v___x_2868_ = lean_box(v___x_2867_);
v___f_2869_ = lean_alloc_closure((void*)(l_Lean_Syntax_Stack_matches___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2869_, 0, v___x_2868_);
v___x_2870_ = ((lean_object*)(l_Lean_Syntax_Stack_matches___closed__0));
v___x_2871_ = l___private_Init_Data_List_Impl_0__List_zipWithTR_go(lean_box(0), lean_box(0), lean_box(0), v___f_2869_, v_stack_2863_, v_pattern_2864_, v___x_2870_);
v___x_2872_ = l_List_all___at___00Lean_Syntax_Stack_matches_spec__0(v___x_2871_);
lean_dec(v___x_2871_);
return v___x_2872_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_Stack_matches___boxed(lean_object* v_stack_2873_, lean_object* v_pattern_2874_){
_start:
{
uint8_t v_res_2875_; lean_object* v_r_2876_; 
v_res_2875_ = l_Lean_Syntax_Stack_matches(v_stack_2873_, v_pattern_2874_);
v_r_2876_ = lean_box(v_res_2875_);
return v_r_2876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_addTrailing_x3f(lean_object* v_stx_2877_, lean_object* v_trailing_2878_){
_start:
{
lean_object* v___x_2879_; 
v___x_2879_ = l_Lean_Syntax_getTailInfo_x3f(v_stx_2877_);
if (lean_obj_tag(v___x_2879_) == 1)
{
lean_object* v_val_2880_; lean_object* v___x_2882_; uint8_t v_isShared_2883_; uint8_t v_isSharedCheck_2915_; 
v_val_2880_ = lean_ctor_get(v___x_2879_, 0);
v_isSharedCheck_2915_ = !lean_is_exclusive(v___x_2879_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2882_ = v___x_2879_;
v_isShared_2883_ = v_isSharedCheck_2915_;
goto v_resetjp_2881_;
}
else
{
lean_inc(v_val_2880_);
lean_dec(v___x_2879_);
v___x_2882_ = lean_box(0);
v_isShared_2883_ = v_isSharedCheck_2915_;
goto v_resetjp_2881_;
}
v_resetjp_2881_:
{
if (lean_obj_tag(v_val_2880_) == 0)
{
lean_object* v_trailing_2884_; lean_object* v_leading_2885_; lean_object* v_pos_2886_; lean_object* v_endPos_2887_; lean_object* v___x_2889_; uint8_t v_isShared_2890_; uint8_t v_isSharedCheck_2913_; 
v_trailing_2884_ = lean_ctor_get(v_val_2880_, 2);
v_leading_2885_ = lean_ctor_get(v_val_2880_, 0);
v_pos_2886_ = lean_ctor_get(v_val_2880_, 1);
v_endPos_2887_ = lean_ctor_get(v_val_2880_, 3);
v_isSharedCheck_2913_ = !lean_is_exclusive(v_val_2880_);
if (v_isSharedCheck_2913_ == 0)
{
v___x_2889_ = v_val_2880_;
v_isShared_2890_ = v_isSharedCheck_2913_;
goto v_resetjp_2888_;
}
else
{
lean_inc(v_endPos_2887_);
lean_inc(v_trailing_2884_);
lean_inc(v_pos_2886_);
lean_inc(v_leading_2885_);
lean_dec(v_val_2880_);
v___x_2889_ = lean_box(0);
v_isShared_2890_ = v_isSharedCheck_2913_;
goto v_resetjp_2888_;
}
v_resetjp_2888_:
{
lean_object* v_str_2891_; lean_object* v_startPos_2892_; lean_object* v_stopPos_2893_; lean_object* v_startPos_2894_; lean_object* v_stopPos_2895_; lean_object* v___x_2897_; uint8_t v_isShared_2898_; uint8_t v_isSharedCheck_2911_; 
v_str_2891_ = lean_ctor_get(v_trailing_2884_, 0);
lean_inc_ref(v_str_2891_);
v_startPos_2892_ = lean_ctor_get(v_trailing_2884_, 1);
lean_inc(v_startPos_2892_);
v_stopPos_2893_ = lean_ctor_get(v_trailing_2884_, 2);
lean_inc(v_stopPos_2893_);
lean_dec_ref(v_trailing_2884_);
v_startPos_2894_ = lean_ctor_get(v_trailing_2878_, 1);
v_stopPos_2895_ = lean_ctor_get(v_trailing_2878_, 2);
v_isSharedCheck_2911_ = !lean_is_exclusive(v_trailing_2878_);
if (v_isSharedCheck_2911_ == 0)
{
lean_object* v_unused_2912_; 
v_unused_2912_ = lean_ctor_get(v_trailing_2878_, 0);
lean_dec(v_unused_2912_);
v___x_2897_ = v_trailing_2878_;
v_isShared_2898_ = v_isSharedCheck_2911_;
goto v_resetjp_2896_;
}
else
{
lean_inc(v_stopPos_2895_);
lean_inc(v_startPos_2894_);
lean_dec(v_trailing_2878_);
v___x_2897_ = lean_box(0);
v_isShared_2898_ = v_isSharedCheck_2911_;
goto v_resetjp_2896_;
}
v_resetjp_2896_:
{
uint8_t v_decide_2899_; 
v_decide_2899_ = lean_nat_dec_eq(v_stopPos_2893_, v_startPos_2894_);
lean_dec(v_startPos_2894_);
lean_dec(v_stopPos_2893_);
if (v_decide_2899_ == 0)
{
lean_object* v___x_2900_; 
lean_del_object(v___x_2897_);
lean_dec(v_stopPos_2895_);
lean_dec(v_startPos_2892_);
lean_dec_ref(v_str_2891_);
lean_del_object(v___x_2889_);
lean_dec(v_endPos_2887_);
lean_dec(v_pos_2886_);
lean_dec_ref(v_leading_2885_);
lean_del_object(v___x_2882_);
lean_dec(v_stx_2877_);
v___x_2900_ = lean_box(0);
return v___x_2900_;
}
else
{
lean_object* v_trailing_2902_; 
if (v_isShared_2898_ == 0)
{
lean_ctor_set(v___x_2897_, 1, v_startPos_2892_);
lean_ctor_set(v___x_2897_, 0, v_str_2891_);
v_trailing_2902_ = v___x_2897_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v_str_2891_);
lean_ctor_set(v_reuseFailAlloc_2910_, 1, v_startPos_2892_);
lean_ctor_set(v_reuseFailAlloc_2910_, 2, v_stopPos_2895_);
v_trailing_2902_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
lean_object* v___x_2904_; 
if (v_isShared_2890_ == 0)
{
lean_ctor_set(v___x_2889_, 2, v_trailing_2902_);
v___x_2904_ = v___x_2889_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v_leading_2885_);
lean_ctor_set(v_reuseFailAlloc_2909_, 1, v_pos_2886_);
lean_ctor_set(v_reuseFailAlloc_2909_, 2, v_trailing_2902_);
lean_ctor_set(v_reuseFailAlloc_2909_, 3, v_endPos_2887_);
v___x_2904_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
lean_object* v___x_2905_; lean_object* v___x_2907_; 
v___x_2905_ = l_Lean_Syntax_setTailInfo(v_stx_2877_, v___x_2904_);
if (v_isShared_2883_ == 0)
{
lean_ctor_set(v___x_2882_, 0, v___x_2905_);
v___x_2907_ = v___x_2882_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v___x_2905_);
v___x_2907_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
return v___x_2907_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2914_; 
lean_del_object(v___x_2882_);
lean_dec(v_val_2880_);
lean_dec_ref(v_trailing_2878_);
lean_dec(v_stx_2877_);
v___x_2914_ = lean_box(0);
return v___x_2914_;
}
}
}
else
{
lean_object* v___x_2916_; 
lean_dec(v___x_2879_);
lean_dec_ref(v_trailing_2878_);
lean_dec(v_stx_2877_);
v___x_2916_ = lean_box(0);
return v___x_2916_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_addTrailing(lean_object* v_stx_2917_, lean_object* v_trailing_2918_){
_start:
{
lean_object* v___x_2919_; 
lean_inc(v_stx_2917_);
v___x_2919_ = l_Lean_Syntax_addTrailing_x3f(v_stx_2917_, v_trailing_2918_);
if (lean_obj_tag(v___x_2919_) == 0)
{
return v_stx_2917_;
}
else
{
lean_object* v_val_2920_; 
lean_dec(v_stx_2917_);
v_val_2920_ = lean_ctor_get(v___x_2919_, 0);
lean_inc(v_val_2920_);
lean_dec_ref_known(v___x_2919_, 1);
return v_val_2920_;
}
}
}
lean_object* runtime_initialize_Init_Data_Slice(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Hashable(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Format(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Coe(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Hashable(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_Syntax(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Slice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Slice(uint8_t builtin);
lean_object* initialize_Init_Data_Hashable(uint8_t builtin);
lean_object* initialize_Lean_Data_Format(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Coe(uint8_t builtin);
lean_object* initialize_Init_Data_String_Hashable(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_Syntax(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Slice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Syntax(builtin);
}
#ifdef __cplusplus
}
#endif
