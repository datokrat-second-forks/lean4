// Lean compiler output
// Module: Std.Time.Format.Basic
// Imports: public import Std.Time.Zoned public import Std.Time.Format.Modifier public import Std.Time.Format.DateFormat import Init.Data.String.TakeDrop import Init.Data.String.Search
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
lean_object* l_Std_Time_parseModifier(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_push(lean_object*, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Internal_Parsec_String_Parser_run___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Time_DateFormat_enUS;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_int_add(lean_object*, lean_object*);
uint8_t l_Std_Time_Weekday_ofOrdinal(lean_object*);
size_t lean_usize_add(size_t, size_t);
size_t lean_array_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Std_Internal_Parsec_String_pstring(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_String_Slice_toNat_x21(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Std_Time_Weekday_toOrdinal(uint8_t);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Std_Time_TimeZone_Offset_zero;
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_Std_Time_PlainTime_ofNanoseconds(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Std_Time_ValidDate_dayOfYear(uint8_t, lean_object*);
lean_object* lean_thunk_get_own(lean_object*);
lean_object* lean_int_mod(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t l_Std_Time_PlainDate_weekday(lean_object*);
lean_object* l_Std_Time_PlainDate_quarter(lean_object*);
uint8_t l_Std_Time_Year_Offset_era(lean_object*);
lean_object* l_Std_Time_PlainDate_weekYear(lean_object*, uint8_t, lean_object*);
lean_object* l_Std_Time_PlainDate_weekOfYear(lean_object*, uint8_t, lean_object*);
lean_object* l_Std_Time_PlainDate_weekOfMonth(lean_object*, uint8_t);
lean_object* l_Std_Time_DateTime_alignedWeekOfMonth(lean_object*);
uint8_t l_Std_Time_HourMarker_ofOrdinal(lean_object*);
lean_object* l_Std_Time_HourMarker_toRelative(lean_object*);
lean_object* l_Std_Time_Hour_Ordinal_shiftTo1BasedHour(lean_object*);
lean_object* l_Std_Time_PlainTime_toMilliseconds(lean_object*);
lean_object* l_Std_Time_PlainTime_toNanoseconds(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_PlainDateTime_toWallTime(lean_object*);
lean_object* l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime(lean_object*, lean_object*);
lean_object* l_Std_Time_TimeZone_LocalTimeType_getTimeZone(lean_object*);
lean_object* lean_mk_thunk(lean_object*);
lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
lean_object* l_Std_Time_Month_Ordinal_days(uint8_t, lean_object*);
lean_object* l_Std_Time_Second_instOfNatOrdinal(uint8_t, lean_object*);
lean_object* l_Std_Time_HourMarker_toAbsolute(uint8_t, lean_object*);
lean_object* l_Std_Time_TimeZone_Offset_toIsoString(lean_object*, uint8_t);
extern lean_object* l_Std_Time_instInhabitedDateTime;
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_Time_TimeZone_ZoneRules_timezoneAt(lean_object*, lean_object*);
lean_object* l_Std_Time_PlainDateTime_ofWallTime(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Std_Time_instReprModifier_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_string_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_string_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_modifier_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_modifier_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Time_instReprFormatPart_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Std.Time.FormatPart.string"};
static const lean_object* l_Std_Time_instReprFormatPart_repr___closed__0 = (const lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__0_value;
static const lean_ctor_object l_Std_Time_instReprFormatPart_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__0_value)}};
static const lean_object* l_Std_Time_instReprFormatPart_repr___closed__1 = (const lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__1_value;
static const lean_ctor_object l_Std_Time_instReprFormatPart_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Time_instReprFormatPart_repr___closed__2 = (const lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__2_value;
static lean_once_cell_t l_Std_Time_instReprFormatPart_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprFormatPart_repr___closed__3;
static lean_once_cell_t l_Std_Time_instReprFormatPart_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instReprFormatPart_repr___closed__4;
static const lean_string_object l_Std_Time_instReprFormatPart_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Std.Time.FormatPart.modifier"};
static const lean_object* l_Std_Time_instReprFormatPart_repr___closed__5 = (const lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__5_value;
static const lean_ctor_object l_Std_Time_instReprFormatPart_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__5_value)}};
static const lean_object* l_Std_Time_instReprFormatPart_repr___closed__6 = (const lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__6_value;
static const lean_ctor_object l_Std_Time_instReprFormatPart_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Time_instReprFormatPart_repr___closed__7 = (const lean_object*)&l_Std_Time_instReprFormatPart_repr___closed__7_value;
LEAN_EXPORT lean_object* l_Std_Time_instReprFormatPart_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instReprFormatPart_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Time_instReprFormatPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instReprFormatPart_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instReprFormatPart___closed__0 = (const lean_object*)&l_Std_Time_instReprFormatPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instReprFormatPart = (const lean_object*)&l_Std_Time_instReprFormatPart___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instCoeStringFormatPart___lam__0(lean_object*);
static const lean_closure_object l_Std_Time_instCoeStringFormatPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instCoeStringFormatPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instCoeStringFormatPart___closed__0 = (const lean_object*)&l_Std_Time_instCoeStringFormatPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instCoeStringFormatPart = (const lean_object*)&l_Std_Time_instCoeStringFormatPart___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_instCoeModifierFormatPart___lam__0(lean_object*);
static const lean_closure_object l_Std_Time_instCoeModifierFormatPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_instCoeModifierFormatPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_instCoeModifierFormatPart___closed__0 = (const lean_object*)&l_Std_Time_instCoeModifierFormatPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_instCoeModifierFormatPart = (const lean_object*)&l_Std_Time_instCoeModifierFormatPart___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_only_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_only_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_any_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_any_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_Awareness_instCoeTimeZone___lam__0(lean_object*);
static const lean_closure_object l_Std_Time_Awareness_instCoeTimeZone___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Time_Awareness_instCoeTimeZone___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Time_Awareness_instCoeTimeZone___closed__0 = (const lean_object*)&l_Std_Time_Awareness_instCoeTimeZone___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Time_Awareness_instCoeTimeZone = (const lean_object*)&l_Std_Time_Awareness_instCoeTimeZone___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Awareness_getD(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Awareness_getD___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_instInhabitedFormatConfig_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedFormatConfig_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedFormatConfig_default;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedFormatConfig;
static lean_once_cell_t l_Std_Time_instInhabitedGenericFormat_default___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedGenericFormat_default___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat_default___redArg();
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Time_instInhabitedGenericFormat_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_instInhabitedGenericFormat_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat_default(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat_default___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat___redArg();
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "condition not satisfied"};
static const lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0(uint32_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0(uint32_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '\"'"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__0_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__1_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2_spec__3(uint32_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2(uint32_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '''"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__2(lean_object*, lean_object*, uint32_t, uint8_t, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__3(uint32_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '\\'"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__2 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__2_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__2_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__3 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__3_value;
static const lean_closure_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__4 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__4_value;
static const lean_closure_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__4, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__5 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__5_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_specParser_spec__0(lean_object*, lean_object*);
static const lean_array_object l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__0_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "expected end of input"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__1_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__1_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__2 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_specParser(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_specParse(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_pad(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_pad___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_rightTruncate(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_rightTruncate___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex___boxed(lean_object*);
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthShort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthShort___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthNarrow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthNarrow___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayLong(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayLong___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayShort(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayShort___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayNarrow(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayNarrow___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayTwoLetter(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayTwoLetter___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraShort(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraShort___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraLong(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraLong___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraNarrow(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraNarrow___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "1"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__0_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "2"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__1_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "3"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__2 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__2_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "4"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__3 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterShort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterShort___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterLong(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterLong___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNarrow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNarrow___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerShort(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerShort___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerLong(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerLong___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerNarrow(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerNarrow___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatDayPeriod(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatDayPeriod___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodIndex(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodIndex___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatExtendedDayPeriod(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatExtendedDayPeriod___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_toSigned(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason___closed__0_value;
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_toIsoString_spec__1(lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(lean_object*, uint8_t, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_toIsoString_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_toIsoString_spec__0(lean_object*);
LEAN_EXPORT uint8_t l_Std_Time_classifyDayPeriod___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_classifyDayPeriod___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_classifyDayPeriod___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_classifyDayPeriod___closed__0;
LEAN_EXPORT uint8_t l_Std_Time_classifyDayPeriod(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_classifyDayPeriod___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Time_classifyExtendedDayPeriod___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_classifyExtendedDayPeriod___closed__0;
static lean_once_cell_t l_Std_Time_classifyExtendedDayPeriod___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_classifyExtendedDayPeriod___closed__1;
static lean_once_cell_t l_Std_Time_classifyExtendedDayPeriod___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Time_classifyExtendedDayPeriod___closed__2;
LEAN_EXPORT uint8_t l_Std_Time_classifyExtendedDayPeriod(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_classifyExtendedDayPeriod___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "unk"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GMT"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Z"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "no match"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__0_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__1_value;
static const lean_closure_object l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__0_value)} };
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__2 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_monthPairs(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_weekdayOfIndex(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_weekdayOfIndex___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_eraOfIndex(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraOfIndex___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraPairs(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_quarterPairs(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseMonthLong(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_parseMonthShort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseMonthNarrow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayLong(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayShort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayNarrow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayTwoLetter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseEraShort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseEraLong(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseEraNarrow(lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNumber___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNumber___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNumber(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterLong(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterShort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNarrow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseMarkerShort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseMarkerLong(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseMarkerNarrow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseDayPeriodFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseExtendedDayPeriodFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseExtendedDayPeriodFrom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Std_Time_Format_Basic_0__Std_Time_exactly___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly___redArg___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_exactly___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___lam__0(lean_object*);
static const lean_closure_object l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFractionNum(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFractionNum___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier(lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "need a natural number in the interval of "};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__0_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " to "};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOneOrTwoNum(lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: ':'"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "invalid hour offset: "};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__0_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = ". Must be between 0 and 23."};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__1_value;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__2;
static const lean_closure_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__3 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__3_value;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__4;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "invalid second offset: "};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__6 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__6_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = ". Must be between 0 and 59."};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__7 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__7_value;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__8;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__9;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "invalid minute offset: "};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__10 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__10_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '-'"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__11 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__11_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__11_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__12 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__12_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '+'"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__13 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__13_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__13_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__14 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__14_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(uint8_t, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1;
static const lean_closure_object l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))} };
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__2 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__2_value;
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "need a natural number in the interval of 1 to 7"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__3 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__3_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__4 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__4_value;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__5;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__6;
static const lean_closure_object l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))} };
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__7 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__7_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatPartWithDate(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatPartWithDate___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfDayPeriod(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfDayPeriod___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfExtendedDayPeriod(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfExtendedDayPeriod___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__1(lean_object*, lean_object*);
static const lean_array_object l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__0_value;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__1;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__2;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__3;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__4;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__7;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__8;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__9;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__10;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__11;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__12;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__13;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__14;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__17;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__18;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__19;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__20;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__21;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__22;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__23;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__25;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__26;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__27;
static lean_once_cell_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__28;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parseWithDate(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Time_GenericFormat_spec_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Std.Time.Format.Basic"};
static const lean_object* l_Std_Time_GenericFormat_spec_x21___closed__0 = (const lean_object*)&l_Std_Time_GenericFormat_spec_x21___closed__0_value;
static const lean_string_object l_Std_Time_GenericFormat_spec_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Std.Time.GenericFormat.spec!"};
static const lean_object* l_Std_Time_GenericFormat_spec_x21___closed__1 = (const lean_object*)&l_Std_Time_GenericFormat_spec_x21___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec_x21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Time_GenericFormat_format_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Time_GenericFormat_format_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_format(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_format___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "could not parse the date"};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__0_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*37 + 0, .m_other = 37, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "invalid date."};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__0 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__0_value)}};
static const lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__1 = (const lean_object*)&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_builderParser___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_builderParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parse___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_parse_x21_spec__0(lean_object*);
static const lean_string_object l_Std_Time_GenericFormat_parse_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Std.Time.GenericFormat.parse!"};
static const lean_object* l_Std_Time_GenericFormat_parse_x21___closed__0 = (const lean_object*)&l_Std_Time_GenericFormat_parse_x21___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parse_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Time_GenericFormat_parseBuilder_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Time.GenericFormat.parseBuilder!"};
static const lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___redArg___closed__0 = (const lean_object*)&l_Std_Time_GenericFormat_parseBuilder_x21___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatGeneric_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatGeneric_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatGeneric___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatGeneric(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatGeneric___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatBuilder___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatBuilder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatBuilder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_instFormatGenericFormatFormatTypeString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Std_Time_FormatPart_ctorIdx___impl(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
lean_object* v_val_7_; lean_object* v___x_8_; 
v_val_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_val_7_);
lean_dec_ref(v_t_5_);
v___x_8_ = lean_apply_1(v_k_6_, v_val_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorElim(lean_object* v_motive_9_, lean_object* v_ctorIdx_10_, lean_object* v_t_11_, lean_object* v_h_12_, lean_object* v_k_13_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Std_Time_FormatPart_ctorElim___redArg(v_t_11_, v_k_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Std_Time_FormatPart_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_17_, v_h_18_, v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_string_elim___redArg(lean_object* v_t_21_, lean_object* v_string_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Std_Time_FormatPart_ctorElim___redArg(v_t_21_, v_string_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_string_elim(lean_object* v_motive_24_, lean_object* v_t_25_, lean_object* v_h_26_, lean_object* v_string_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Std_Time_FormatPart_ctorElim___redArg(v_t_25_, v_string_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_modifier_elim___redArg(lean_object* v_t_29_, lean_object* v_modifier_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Std_Time_FormatPart_ctorElim___redArg(v_t_29_, v_modifier_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_FormatPart_modifier_elim(lean_object* v_motive_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_modifier_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Std_Time_FormatPart_ctorElim___redArg(v_t_33_, v_modifier_35_);
return v___x_36_;
}
}
static lean_object* _init_l_Std_Time_instReprFormatPart_repr___closed__3(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_unsigned_to_nat(2u);
v___x_44_ = lean_nat_to_int(v___x_43_);
return v___x_44_;
}
}
static lean_object* _init_l_Std_Time_instReprFormatPart_repr___closed__4(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_unsigned_to_nat(1u);
v___x_46_ = lean_nat_to_int(v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprFormatPart_repr(lean_object* v_x_53_, lean_object* v_prec_54_){
_start:
{
if (lean_obj_tag(v_x_53_) == 0)
{
lean_object* v_val_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_75_; 
v_val_55_ = lean_ctor_get(v_x_53_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v_x_53_);
if (v_isSharedCheck_75_ == 0)
{
v___x_57_ = v_x_53_;
v_isShared_58_ = v_isSharedCheck_75_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_val_55_);
lean_dec(v_x_53_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_75_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___y_60_; lean_object* v___x_71_; uint8_t v___x_72_; 
v___x_71_ = lean_unsigned_to_nat(1024u);
v___x_72_ = lean_nat_dec_le(v___x_71_, v_prec_54_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; 
v___x_73_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__3, &l_Std_Time_instReprFormatPart_repr___closed__3_once, _init_l_Std_Time_instReprFormatPart_repr___closed__3);
v___y_60_ = v___x_73_;
goto v___jp_59_;
}
else
{
lean_object* v___x_74_; 
v___x_74_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___y_60_ = v___x_74_;
goto v___jp_59_;
}
v___jp_59_:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_64_; 
v___x_61_ = ((lean_object*)(l_Std_Time_instReprFormatPart_repr___closed__2));
v___x_62_ = l_String_quote(v_val_55_);
if (v_isShared_58_ == 0)
{
lean_ctor_set_tag(v___x_57_, 3);
lean_ctor_set(v___x_57_, 0, v___x_62_);
v___x_64_ = v___x_57_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v___x_62_);
v___x_64_ = v_reuseFailAlloc_70_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
lean_object* v___x_65_; lean_object* v___x_66_; uint8_t v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_65_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_61_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
lean_inc(v___y_60_);
v___x_66_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_66_, 0, v___y_60_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
v___x_67_ = 0;
v___x_68_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_68_, 0, v___x_66_);
lean_ctor_set_uint8(v___x_68_, sizeof(void*)*1, v___x_67_);
v___x_69_ = l_Repr_addAppParen(v___x_68_, v_prec_54_);
return v___x_69_;
}
}
}
}
else
{
lean_object* v_modifier_76_; lean_object* v___y_78_; lean_object* v___x_87_; uint8_t v___x_88_; 
v_modifier_76_ = lean_ctor_get(v_x_53_, 0);
lean_inc_ref(v_modifier_76_);
lean_dec_ref_known(v_x_53_, 1);
v___x_87_ = lean_unsigned_to_nat(1024u);
v___x_88_ = lean_nat_dec_le(v___x_87_, v_prec_54_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; 
v___x_89_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__3, &l_Std_Time_instReprFormatPart_repr___closed__3_once, _init_l_Std_Time_instReprFormatPart_repr___closed__3);
v___y_78_ = v___x_89_;
goto v___jp_77_;
}
else
{
lean_object* v___x_90_; 
v___x_90_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___y_78_ = v___x_90_;
goto v___jp_77_;
}
v___jp_77_:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; uint8_t v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_79_ = ((lean_object*)(l_Std_Time_instReprFormatPart_repr___closed__7));
v___x_80_ = lean_unsigned_to_nat(1024u);
v___x_81_ = l_Std_Time_instReprModifier_repr(v_modifier_76_, v___x_80_);
v___x_82_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_79_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
lean_inc(v___y_78_);
v___x_83_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_83_, 0, v___y_78_);
lean_ctor_set(v___x_83_, 1, v___x_82_);
v___x_84_ = 0;
v___x_85_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_85_, 0, v___x_83_);
lean_ctor_set_uint8(v___x_85_, sizeof(void*)*1, v___x_84_);
v___x_86_ = l_Repr_addAppParen(v___x_85_, v_prec_54_);
return v___x_86_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_instReprFormatPart_repr___boxed(lean_object* v_x_91_, lean_object* v_prec_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Std_Time_instReprFormatPart_repr(v_x_91_, v_prec_92_);
lean_dec(v_prec_92_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instCoeStringFormatPart___lam__0(lean_object* v_val_96_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_97_, 0, v_val_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instCoeModifierFormatPart___lam__0(lean_object* v_modifier_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_101_, 0, v_modifier_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorIdx___impl(lean_object* v_x_104_){
_start:
{
lean_object* v___x_105_; 
v___x_105_ = lean_obj_tag_nat(v_x_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorIdx___impl___boxed(lean_object* v_x_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Std_Time_Awareness_ctorIdx___impl(v_x_106_);
lean_dec(v_x_106_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorElim___redArg(lean_object* v_t_108_, lean_object* v_k_109_){
_start:
{
if (lean_obj_tag(v_t_108_) == 0)
{
lean_object* v_a_110_; lean_object* v___x_111_; 
v_a_110_ = lean_ctor_get(v_t_108_, 0);
lean_inc_ref(v_a_110_);
lean_dec_ref_known(v_t_108_, 1);
v___x_111_ = lean_apply_1(v_k_109_, v_a_110_);
return v___x_111_;
}
else
{
return v_k_109_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorElim(lean_object* v_motive_112_, lean_object* v_ctorIdx_113_, lean_object* v_t_114_, lean_object* v_h_115_, lean_object* v_k_116_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l_Std_Time_Awareness_ctorElim___redArg(v_t_114_, v_k_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_ctorElim___boxed(lean_object* v_motive_118_, lean_object* v_ctorIdx_119_, lean_object* v_t_120_, lean_object* v_h_121_, lean_object* v_k_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l_Std_Time_Awareness_ctorElim(v_motive_118_, v_ctorIdx_119_, v_t_120_, v_h_121_, v_k_122_);
lean_dec(v_ctorIdx_119_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_only_elim___redArg(lean_object* v_t_124_, lean_object* v_only_125_){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = l_Std_Time_Awareness_ctorElim___redArg(v_t_124_, v_only_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_only_elim(lean_object* v_motive_127_, lean_object* v_t_128_, lean_object* v_h_129_, lean_object* v_only_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l_Std_Time_Awareness_ctorElim___redArg(v_t_128_, v_only_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_any_elim___redArg(lean_object* v_t_132_, lean_object* v_any_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Std_Time_Awareness_ctorElim___redArg(v_t_132_, v_any_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_any_elim(lean_object* v_motive_135_, lean_object* v_t_136_, lean_object* v_h_137_, lean_object* v_any_138_){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = l_Std_Time_Awareness_ctorElim___redArg(v_t_136_, v_any_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_Awareness_instCoeTimeZone___lam__0(lean_object* v_a_140_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_141_, 0, v_a_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Awareness_getD(lean_object* v_x_144_, lean_object* v_default_145_){
_start:
{
if (lean_obj_tag(v_x_144_) == 0)
{
lean_object* v_a_146_; 
v_a_146_ = lean_ctor_get(v_x_144_, 0);
lean_inc_ref(v_a_146_);
return v_a_146_;
}
else
{
lean_inc_ref(v_default_145_);
return v_default_145_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Awareness_getD___boxed(lean_object* v_x_147_, lean_object* v_default_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l___private_Std_Time_Format_Basic_0__Std_Time_Awareness_getD(v_x_147_, v_default_148_);
lean_dec_ref(v_default_148_);
lean_dec(v_x_147_);
return v_res_149_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedFormatConfig_default___closed__0(void){
_start:
{
lean_object* v___x_150_; uint8_t v___x_151_; lean_object* v___x_152_; 
v___x_150_ = l_Std_Time_DateFormat_enUS;
v___x_151_ = 0;
v___x_152_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_152_, 0, v___x_150_);
lean_ctor_set_uint8(v___x_152_, sizeof(void*)*1, v___x_151_);
return v___x_152_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedFormatConfig_default(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_obj_once(&l_Std_Time_instInhabitedFormatConfig_default___closed__0, &l_Std_Time_instInhabitedFormatConfig_default___closed__0_once, _init_l_Std_Time_instInhabitedFormatConfig_default___closed__0);
return v___x_153_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedFormatConfig(void){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = l_Std_Time_instInhabitedFormatConfig_default;
return v___x_154_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedGenericFormat_default___redArg___closed__0(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_155_ = lean_box(0);
v___x_156_ = l_Std_Time_instInhabitedFormatConfig_default;
v___x_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v___x_155_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat_default___redArg(){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = lean_obj_once(&l_Std_Time_instInhabitedGenericFormat_default___redArg___closed__0, &l_Std_Time_instInhabitedGenericFormat_default___redArg___closed__0_once, _init_l_Std_Time_instInhabitedGenericFormat_default___redArg___closed__0);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat_default___redArg___boxed(lean_object* v___dummy_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Std_Time_instInhabitedGenericFormat_default___redArg();
return v_res_161_;
}
}
static lean_object* _init_l_Std_Time_instInhabitedGenericFormat_default___closed__0(void){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = l_Std_Time_instInhabitedGenericFormat_default___redArg();
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat_default(lean_object* v_awareness_163_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lean_obj_once(&l_Std_Time_instInhabitedGenericFormat_default___closed__0, &l_Std_Time_instInhabitedGenericFormat_default___closed__0_once, _init_l_Std_Time_instInhabitedGenericFormat_default___closed__0);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat_default___boxed(lean_object* v_awareness_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Std_Time_instInhabitedGenericFormat_default(v_awareness_165_);
lean_dec(v_awareness_165_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat___redArg(){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lean_obj_once(&l_Std_Time_instInhabitedGenericFormat_default___closed__0, &l_Std_Time_instInhabitedGenericFormat_default___closed__0_once, _init_l_Std_Time_instInhabitedGenericFormat_default___closed__0);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat___redArg___boxed(lean_object* v___dummy_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Std_Time_instInhabitedGenericFormat___redArg();
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat(lean_object* v_a_171_){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = lean_obj_once(&l_Std_Time_instInhabitedGenericFormat_default___closed__0, &l_Std_Time_instInhabitedGenericFormat_default___closed__0_once, _init_l_Std_Time_instInhabitedGenericFormat_default___closed__0);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instInhabitedGenericFormat___boxed(lean_object* v_a_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Std_Time_instInhabitedGenericFormat(v_a_173_);
lean_dec(v_a_173_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(lean_object* v_a_175_, lean_object* v_f_176_, lean_object* v___y_177_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = lean_apply_1(v_a_175_, v___y_177_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_pos_179_; lean_object* v_res_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_188_; 
v_pos_179_ = lean_ctor_get(v___x_178_, 0);
v_res_180_ = lean_ctor_get(v___x_178_, 1);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_188_ == 0)
{
v___x_182_ = v___x_178_;
v_isShared_183_ = v_isSharedCheck_188_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_res_180_);
lean_inc(v_pos_179_);
lean_dec(v___x_178_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_188_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_184_; lean_object* v___x_186_; 
v___x_184_ = lean_apply_1(v_f_176_, v_res_180_);
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 1, v___x_184_);
v___x_186_ = v___x_182_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_pos_179_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v___x_184_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
else
{
lean_object* v_pos_189_; lean_object* v_err_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_197_; 
lean_dec(v_f_176_);
v_pos_189_ = lean_ctor_get(v___x_178_, 0);
v_err_190_ = lean_ctor_get(v___x_178_, 1);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_197_ == 0)
{
v___x_192_ = v___x_178_;
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_err_190_);
lean_inc(v_pos_189_);
lean_dec(v___x_178_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_195_; 
if (v_isShared_193_ == 0)
{
v___x_195_ = v___x_192_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_pos_189_);
lean_ctor_set(v_reuseFailAlloc_196_, 1, v_err_190_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1(lean_object* v_00_u03b1_198_, lean_object* v_00_u03b2_199_, lean_object* v_a_200_, lean_object* v_f_201_, lean_object* v___y_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(v_a_200_, v_f_201_, v___y_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0(uint32_t v___x_207_, lean_object* v___x_208_, lean_object* v___x_209_, lean_object* v_acc_210_, lean_object* v_a_211_){
_start:
{
lean_object* v_fst_212_; lean_object* v_snd_213_; lean_object* v_pos_215_; lean_object* v_snd_216_; lean_object* v_err_217_; lean_object* v___x_221_; uint8_t v_decide_222_; 
v_fst_212_ = lean_ctor_get(v_a_211_, 0);
v_snd_213_ = lean_ctor_get(v_a_211_, 1);
lean_inc(v_snd_213_);
v___x_221_ = lean_string_utf8_byte_size(v_fst_212_);
v_decide_222_ = lean_nat_dec_eq(v_snd_213_, v___x_221_);
if (v_decide_222_ == 0)
{
uint32_t v___x_223_; uint8_t v___x_224_; uint32_t v_c_225_; lean_object* v___x_226_; lean_object* v_it_x27_227_; uint8_t v___y_229_; uint8_t v___x_233_; 
v___x_223_ = 34;
v___x_224_ = lean_uint32_dec_eq(v___x_207_, v___x_223_);
v_c_225_ = lean_string_utf8_get_fast(v_fst_212_, v_snd_213_);
v___x_226_ = lean_string_utf8_next_fast(v_fst_212_, v_snd_213_);
lean_inc(v_fst_212_);
v_it_x27_227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_227_, 0, v_fst_212_);
lean_ctor_set(v_it_x27_227_, 1, v___x_226_);
v___x_233_ = lean_uint32_dec_eq(v_c_225_, v___x_223_);
if (v___x_233_ == 0)
{
v___y_229_ = v___x_224_;
goto v___jp_228_;
}
else
{
lean_object* v___x_234_; uint8_t v_decide_235_; 
v___x_234_ = lean_string_utf8_byte_size(v___x_208_);
v_decide_235_ = lean_nat_dec_eq(v___x_209_, v___x_234_);
v___y_229_ = v_decide_235_;
goto v___jp_228_;
}
v___jp_228_:
{
if (v___y_229_ == 0)
{
lean_object* v___x_230_; 
lean_dec_ref_known(v_it_x27_227_, 2);
v___x_230_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_213_);
v_pos_215_ = v_a_211_;
v_snd_216_ = v_snd_213_;
v_err_217_ = v___x_230_;
goto v___jp_214_;
}
else
{
lean_object* v___x_231_; 
lean_dec(v_snd_213_);
lean_dec_ref(v_a_211_);
v___x_231_ = lean_string_push(v_acc_210_, v_c_225_);
v_acc_210_ = v___x_231_;
v_a_211_ = v_it_x27_227_;
goto _start;
}
}
}
else
{
lean_object* v___x_236_; 
v___x_236_ = lean_box(0);
lean_inc(v_snd_213_);
v_pos_215_ = v_a_211_;
v_snd_216_ = v_snd_213_;
v_err_217_ = v___x_236_;
goto v___jp_214_;
}
v___jp_214_:
{
uint8_t v_decide_218_; 
v_decide_218_ = lean_nat_dec_eq(v_snd_213_, v_snd_216_);
lean_dec(v_snd_216_);
lean_dec(v_snd_213_);
if (v_decide_218_ == 0)
{
lean_object* v___x_219_; 
lean_dec_ref(v_acc_210_);
lean_inc(v_err_217_);
v___x_219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_219_, 0, v_pos_215_);
lean_ctor_set(v___x_219_, 1, v_err_217_);
return v___x_219_;
}
else
{
lean_object* v___x_220_; 
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v_pos_215_);
lean_ctor_set(v___x_220_, 1, v_acc_210_);
return v___x_220_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___boxed(lean_object* v___x_237_, lean_object* v___x_238_, lean_object* v___x_239_, lean_object* v_acc_240_, lean_object* v_a_241_){
_start:
{
uint32_t v___x_9209__boxed_242_; lean_object* v_res_243_; 
v___x_9209__boxed_242_ = lean_unbox_uint32(v___x_237_);
lean_dec(v___x_237_);
v_res_243_ = l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0(v___x_9209__boxed_242_, v___x_238_, v___x_239_, v_acc_240_, v_a_241_);
lean_dec(v___x_239_);
lean_dec_ref(v___x_238_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0(uint32_t v___x_244_, lean_object* v___x_245_, lean_object* v___x_246_, lean_object* v_acc_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_fst_249_; lean_object* v_snd_250_; lean_object* v_pos_252_; lean_object* v_snd_253_; lean_object* v_err_254_; lean_object* v___x_258_; uint8_t v_decide_259_; 
v_fst_249_ = lean_ctor_get(v_a_248_, 0);
v_snd_250_ = lean_ctor_get(v_a_248_, 1);
lean_inc(v_snd_250_);
v___x_258_ = lean_string_utf8_byte_size(v_fst_249_);
v_decide_259_ = lean_nat_dec_eq(v_snd_250_, v___x_258_);
if (v_decide_259_ == 0)
{
uint32_t v___x_260_; uint8_t v___x_261_; uint32_t v_c_262_; lean_object* v___x_263_; lean_object* v_it_x27_264_; uint8_t v___y_266_; uint8_t v___x_270_; 
v___x_260_ = 34;
v___x_261_ = lean_uint32_dec_eq(v___x_244_, v___x_260_);
v_c_262_ = lean_string_utf8_get_fast(v_fst_249_, v_snd_250_);
v___x_263_ = lean_string_utf8_next_fast(v_fst_249_, v_snd_250_);
lean_inc(v_fst_249_);
v_it_x27_264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_264_, 0, v_fst_249_);
lean_ctor_set(v_it_x27_264_, 1, v___x_263_);
v___x_270_ = lean_uint32_dec_eq(v_c_262_, v___x_260_);
if (v___x_270_ == 0)
{
v___y_266_ = v___x_261_;
goto v___jp_265_;
}
else
{
lean_object* v___x_271_; uint8_t v_decide_272_; 
v___x_271_ = lean_string_utf8_byte_size(v___x_245_);
v_decide_272_ = lean_nat_dec_eq(v___x_246_, v___x_271_);
v___y_266_ = v_decide_272_;
goto v___jp_265_;
}
v___jp_265_:
{
if (v___y_266_ == 0)
{
lean_object* v___x_267_; 
lean_dec_ref_known(v_it_x27_264_, 2);
v___x_267_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_250_);
v_pos_252_ = v_a_248_;
v_snd_253_ = v_snd_250_;
v_err_254_ = v___x_267_;
goto v___jp_251_;
}
else
{
lean_object* v___x_268_; lean_object* v___x_269_; 
lean_dec(v_snd_250_);
lean_dec_ref(v_a_248_);
v___x_268_ = lean_string_push(v_acc_247_, v_c_262_);
v___x_269_ = l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0(v___x_244_, v___x_245_, v___x_246_, v___x_268_, v_it_x27_264_);
return v___x_269_;
}
}
}
else
{
lean_object* v___x_273_; 
v___x_273_ = lean_box(0);
lean_inc(v_snd_250_);
v_pos_252_ = v_a_248_;
v_snd_253_ = v_snd_250_;
v_err_254_ = v___x_273_;
goto v___jp_251_;
}
v___jp_251_:
{
uint8_t v_decide_255_; 
v_decide_255_ = lean_nat_dec_eq(v_snd_250_, v_snd_253_);
lean_dec(v_snd_253_);
lean_dec(v_snd_250_);
if (v_decide_255_ == 0)
{
lean_object* v___x_256_; 
lean_dec_ref(v_acc_247_);
lean_inc(v_err_254_);
v___x_256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_256_, 0, v_pos_252_);
lean_ctor_set(v___x_256_, 1, v_err_254_);
return v___x_256_;
}
else
{
lean_object* v___x_257_; 
v___x_257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_257_, 0, v_pos_252_);
lean_ctor_set(v___x_257_, 1, v_acc_247_);
return v___x_257_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0___boxed(lean_object* v___x_274_, lean_object* v___x_275_, lean_object* v___x_276_, lean_object* v_acc_277_, lean_object* v_a_278_){
_start:
{
uint32_t v___x_9267__boxed_279_; lean_object* v_res_280_; 
v___x_9267__boxed_279_ = lean_unbox_uint32(v___x_274_);
lean_dec(v___x_274_);
v_res_280_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0(v___x_9267__boxed_279_, v___x_275_, v___x_276_, v_acc_277_, v_a_278_);
lean_dec(v___x_276_);
lean_dec_ref(v___x_275_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1(uint32_t v___x_285_, lean_object* v___y_286_){
_start:
{
lean_object* v_fst_287_; lean_object* v_snd_288_; lean_object* v___x_289_; uint8_t v_decide_290_; 
v_fst_287_ = lean_ctor_get(v___y_286_, 0);
v_snd_288_ = lean_ctor_get(v___y_286_, 1);
v___x_289_ = lean_string_utf8_byte_size(v_fst_287_);
v_decide_290_ = lean_nat_dec_eq(v_snd_288_, v___x_289_);
if (v_decide_290_ == 0)
{
uint32_t v_c_291_; uint8_t v___x_292_; 
v_c_291_ = lean_string_utf8_get_fast(v_fst_287_, v_snd_288_);
v___x_292_ = lean_uint32_dec_eq(v_c_291_, v___x_285_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__1));
v___x_294_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_294_, 0, v___y_286_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
return v___x_294_;
}
else
{
lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_347_; 
lean_inc(v_snd_288_);
lean_inc(v_fst_287_);
v_isSharedCheck_347_ = !lean_is_exclusive(v___y_286_);
if (v_isSharedCheck_347_ == 0)
{
lean_object* v_unused_348_; lean_object* v_unused_349_; 
v_unused_348_ = lean_ctor_get(v___y_286_, 1);
lean_dec(v_unused_348_);
v_unused_349_ = lean_ctor_get(v___y_286_, 0);
lean_dec(v_unused_349_);
v___x_296_ = v___y_286_;
v_isShared_297_ = v_isSharedCheck_347_;
goto v_resetjp_295_;
}
else
{
lean_dec(v___y_286_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_347_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_298_; lean_object* v_it_x27_300_; 
v___x_298_ = lean_string_utf8_next_fast(v_fst_287_, v_snd_288_);
lean_inc(v_fst_287_);
if (v_isShared_297_ == 0)
{
lean_ctor_set(v___x_296_, 1, v___x_298_);
v_it_x27_300_ = v___x_296_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_fst_287_);
lean_ctor_set(v_reuseFailAlloc_346_, 1, v___x_298_);
v_it_x27_300_ = v_reuseFailAlloc_346_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
uint8_t v_decide_301_; 
v_decide_301_ = lean_nat_dec_eq(v___x_298_, v___x_289_);
if (v_decide_301_ == 0)
{
uint32_t v___x_302_; uint8_t v___x_303_; 
v___x_302_ = lean_string_utf8_get_fast(v_fst_287_, v___x_298_);
v___x_303_ = lean_uint32_dec_eq(v___x_302_, v___x_285_);
if (v___x_303_ == 0)
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
lean_dec_ref(v_it_x27_300_);
v___x_304_ = lean_string_utf8_next_fast(v_fst_287_, v___x_298_);
lean_inc(v_fst_287_);
v___x_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_305_, 0, v_fst_287_);
lean_ctor_set(v___x_305_, 1, v___x_304_);
v___x_306_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_307_ = lean_string_push(v___x_306_, v___x_302_);
v___x_308_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0(v_c_291_, v_fst_287_, v_snd_288_, v___x_307_, v___x_305_);
lean_dec(v_snd_288_);
lean_dec(v_fst_287_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_pos_309_; lean_object* v_res_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_341_; 
v_pos_309_ = lean_ctor_get(v___x_308_, 0);
v_res_310_ = lean_ctor_get(v___x_308_, 1);
v_isSharedCheck_341_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_341_ == 0)
{
v___x_312_ = v___x_308_;
v_isShared_313_ = v_isSharedCheck_341_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_res_310_);
lean_inc(v_pos_309_);
lean_dec(v___x_308_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_341_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v_fst_314_; lean_object* v_snd_315_; lean_object* v___x_316_; uint8_t v_decide_317_; 
v_fst_314_ = lean_ctor_get(v_pos_309_, 0);
v_snd_315_ = lean_ctor_get(v_pos_309_, 1);
v___x_316_ = lean_string_utf8_byte_size(v_fst_314_);
v_decide_317_ = lean_nat_dec_eq(v_snd_315_, v___x_316_);
if (v_decide_317_ == 0)
{
uint32_t v_c_318_; uint8_t v___x_319_; 
v_c_318_ = lean_string_utf8_get_fast(v_fst_314_, v_snd_315_);
v___x_319_ = lean_uint32_dec_eq(v_c_318_, v___x_285_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; lean_object* v___x_322_; 
lean_dec(v_res_310_);
v___x_320_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__1));
if (v_isShared_313_ == 0)
{
lean_ctor_set_tag(v___x_312_, 1);
lean_ctor_set(v___x_312_, 1, v___x_320_);
v___x_322_ = v___x_312_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_pos_309_);
lean_ctor_set(v_reuseFailAlloc_323_, 1, v___x_320_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
else
{
lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_334_; 
lean_inc(v_snd_315_);
lean_inc(v_fst_314_);
v_isSharedCheck_334_ = !lean_is_exclusive(v_pos_309_);
if (v_isSharedCheck_334_ == 0)
{
lean_object* v_unused_335_; lean_object* v_unused_336_; 
v_unused_335_ = lean_ctor_get(v_pos_309_, 1);
lean_dec(v_unused_335_);
v_unused_336_ = lean_ctor_get(v_pos_309_, 0);
lean_dec(v_unused_336_);
v___x_325_ = v_pos_309_;
v_isShared_326_ = v_isSharedCheck_334_;
goto v_resetjp_324_;
}
else
{
lean_dec(v_pos_309_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_334_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_327_; lean_object* v_it_x27_329_; 
v___x_327_ = lean_string_utf8_next_fast(v_fst_314_, v_snd_315_);
lean_dec(v_snd_315_);
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 1, v___x_327_);
v_it_x27_329_ = v___x_325_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_fst_314_);
lean_ctor_set(v_reuseFailAlloc_333_, 1, v___x_327_);
v_it_x27_329_ = v_reuseFailAlloc_333_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
lean_object* v___x_331_; 
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 0, v_it_x27_329_);
v___x_331_ = v___x_312_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_it_x27_329_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_res_310_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
}
}
else
{
lean_object* v___x_337_; lean_object* v___x_339_; 
lean_dec(v_res_310_);
v___x_337_ = lean_box(0);
if (v_isShared_313_ == 0)
{
lean_ctor_set_tag(v___x_312_, 1);
lean_ctor_set(v___x_312_, 1, v___x_337_);
v___x_339_ = v___x_312_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_pos_309_);
lean_ctor_set(v_reuseFailAlloc_340_, 1, v___x_337_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
}
else
{
return v___x_308_;
}
}
else
{
lean_object* v___x_342_; lean_object* v___x_343_; 
lean_dec(v_snd_288_);
lean_dec(v_fst_287_);
v___x_342_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_343_, 0, v_it_x27_300_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
return v___x_343_;
}
}
else
{
lean_object* v___x_344_; lean_object* v___x_345_; 
lean_dec(v_snd_288_);
lean_dec(v_fst_287_);
v___x_344_ = lean_box(0);
v___x_345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_345_, 0, v_it_x27_300_);
lean_ctor_set(v___x_345_, 1, v___x_344_);
return v___x_345_;
}
}
}
}
}
else
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_box(0);
v___x_351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_351_, 0, v___y_286_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
return v___x_351_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___boxed(lean_object* v___x_352_, lean_object* v___y_353_){
_start:
{
uint32_t v___x_9334__boxed_354_; lean_object* v_res_355_; 
v___x_9334__boxed_354_ = lean_unbox_uint32(v___x_352_);
lean_dec(v___x_352_);
v_res_355_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1(v___x_9334__boxed_354_, v___y_353_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2_spec__3(uint32_t v___x_356_, lean_object* v___x_357_, lean_object* v___x_358_, lean_object* v_acc_359_, lean_object* v_a_360_){
_start:
{
lean_object* v_fst_361_; lean_object* v_snd_362_; lean_object* v_pos_364_; lean_object* v_snd_365_; lean_object* v_err_366_; lean_object* v___x_370_; uint8_t v_decide_371_; 
v_fst_361_ = lean_ctor_get(v_a_360_, 0);
v_snd_362_ = lean_ctor_get(v_a_360_, 1);
lean_inc(v_snd_362_);
v___x_370_ = lean_string_utf8_byte_size(v_fst_361_);
v_decide_371_ = lean_nat_dec_eq(v_snd_362_, v___x_370_);
if (v_decide_371_ == 0)
{
uint32_t v___x_372_; uint8_t v___x_373_; uint32_t v_c_374_; lean_object* v___x_375_; lean_object* v_it_x27_376_; uint8_t v___y_378_; uint8_t v___x_382_; 
v___x_372_ = 39;
v___x_373_ = lean_uint32_dec_eq(v___x_356_, v___x_372_);
v_c_374_ = lean_string_utf8_get_fast(v_fst_361_, v_snd_362_);
v___x_375_ = lean_string_utf8_next_fast(v_fst_361_, v_snd_362_);
lean_inc(v_fst_361_);
v_it_x27_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_376_, 0, v_fst_361_);
lean_ctor_set(v_it_x27_376_, 1, v___x_375_);
v___x_382_ = lean_uint32_dec_eq(v_c_374_, v___x_372_);
if (v___x_382_ == 0)
{
v___y_378_ = v___x_373_;
goto v___jp_377_;
}
else
{
lean_object* v___x_383_; uint8_t v_decide_384_; 
v___x_383_ = lean_string_utf8_byte_size(v___x_357_);
v_decide_384_ = lean_nat_dec_eq(v___x_358_, v___x_383_);
v___y_378_ = v_decide_384_;
goto v___jp_377_;
}
v___jp_377_:
{
if (v___y_378_ == 0)
{
lean_object* v___x_379_; 
lean_dec_ref_known(v_it_x27_376_, 2);
v___x_379_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_362_);
v_pos_364_ = v_a_360_;
v_snd_365_ = v_snd_362_;
v_err_366_ = v___x_379_;
goto v___jp_363_;
}
else
{
lean_object* v___x_380_; 
lean_dec(v_snd_362_);
lean_dec_ref(v_a_360_);
v___x_380_ = lean_string_push(v_acc_359_, v_c_374_);
v_acc_359_ = v___x_380_;
v_a_360_ = v_it_x27_376_;
goto _start;
}
}
}
else
{
lean_object* v___x_385_; 
v___x_385_ = lean_box(0);
lean_inc(v_snd_362_);
v_pos_364_ = v_a_360_;
v_snd_365_ = v_snd_362_;
v_err_366_ = v___x_385_;
goto v___jp_363_;
}
v___jp_363_:
{
uint8_t v_decide_367_; 
v_decide_367_ = lean_nat_dec_eq(v_snd_362_, v_snd_365_);
lean_dec(v_snd_365_);
lean_dec(v_snd_362_);
if (v_decide_367_ == 0)
{
lean_object* v___x_368_; 
lean_dec_ref(v_acc_359_);
lean_inc(v_err_366_);
v___x_368_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_368_, 0, v_pos_364_);
lean_ctor_set(v___x_368_, 1, v_err_366_);
return v___x_368_;
}
else
{
lean_object* v___x_369_; 
v___x_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_369_, 0, v_pos_364_);
lean_ctor_set(v___x_369_, 1, v_acc_359_);
return v___x_369_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2_spec__3___boxed(lean_object* v___x_386_, lean_object* v___x_387_, lean_object* v___x_388_, lean_object* v_acc_389_, lean_object* v_a_390_){
_start:
{
uint32_t v___x_9463__boxed_391_; lean_object* v_res_392_; 
v___x_9463__boxed_391_ = lean_unbox_uint32(v___x_386_);
lean_dec(v___x_386_);
v_res_392_ = l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2_spec__3(v___x_9463__boxed_391_, v___x_387_, v___x_388_, v_acc_389_, v_a_390_);
lean_dec(v___x_388_);
lean_dec_ref(v___x_387_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2(uint32_t v___x_393_, lean_object* v___x_394_, lean_object* v___x_395_, lean_object* v_acc_396_, lean_object* v_a_397_){
_start:
{
lean_object* v_fst_398_; lean_object* v_snd_399_; lean_object* v_pos_401_; lean_object* v_snd_402_; lean_object* v_err_403_; lean_object* v___x_407_; uint8_t v_decide_408_; 
v_fst_398_ = lean_ctor_get(v_a_397_, 0);
v_snd_399_ = lean_ctor_get(v_a_397_, 1);
lean_inc(v_snd_399_);
v___x_407_ = lean_string_utf8_byte_size(v_fst_398_);
v_decide_408_ = lean_nat_dec_eq(v_snd_399_, v___x_407_);
if (v_decide_408_ == 0)
{
uint32_t v___x_409_; uint8_t v___x_410_; uint32_t v_c_411_; lean_object* v___x_412_; lean_object* v_it_x27_413_; uint8_t v___y_415_; uint8_t v___x_419_; 
v___x_409_ = 39;
v___x_410_ = lean_uint32_dec_eq(v___x_393_, v___x_409_);
v_c_411_ = lean_string_utf8_get_fast(v_fst_398_, v_snd_399_);
v___x_412_ = lean_string_utf8_next_fast(v_fst_398_, v_snd_399_);
lean_inc(v_fst_398_);
v_it_x27_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_413_, 0, v_fst_398_);
lean_ctor_set(v_it_x27_413_, 1, v___x_412_);
v___x_419_ = lean_uint32_dec_eq(v_c_411_, v___x_409_);
if (v___x_419_ == 0)
{
v___y_415_ = v___x_410_;
goto v___jp_414_;
}
else
{
lean_object* v___x_420_; uint8_t v_decide_421_; 
v___x_420_ = lean_string_utf8_byte_size(v___x_394_);
v_decide_421_ = lean_nat_dec_eq(v___x_395_, v___x_420_);
v___y_415_ = v_decide_421_;
goto v___jp_414_;
}
v___jp_414_:
{
if (v___y_415_ == 0)
{
lean_object* v___x_416_; 
lean_dec_ref_known(v_it_x27_413_, 2);
v___x_416_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_399_);
v_pos_401_ = v_a_397_;
v_snd_402_ = v_snd_399_;
v_err_403_ = v___x_416_;
goto v___jp_400_;
}
else
{
lean_object* v___x_417_; lean_object* v___x_418_; 
lean_dec(v_snd_399_);
lean_dec_ref(v_a_397_);
v___x_417_ = lean_string_push(v_acc_396_, v_c_411_);
v___x_418_ = l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2_spec__3(v___x_393_, v___x_394_, v___x_395_, v___x_417_, v_it_x27_413_);
return v___x_418_;
}
}
}
else
{
lean_object* v___x_422_; 
v___x_422_ = lean_box(0);
lean_inc(v_snd_399_);
v_pos_401_ = v_a_397_;
v_snd_402_ = v_snd_399_;
v_err_403_ = v___x_422_;
goto v___jp_400_;
}
v___jp_400_:
{
uint8_t v_decide_404_; 
v_decide_404_ = lean_nat_dec_eq(v_snd_399_, v_snd_402_);
lean_dec(v_snd_402_);
lean_dec(v_snd_399_);
if (v_decide_404_ == 0)
{
lean_object* v___x_405_; 
lean_dec_ref(v_acc_396_);
lean_inc(v_err_403_);
v___x_405_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_405_, 0, v_pos_401_);
lean_ctor_set(v___x_405_, 1, v_err_403_);
return v___x_405_;
}
else
{
lean_object* v___x_406_; 
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v_pos_401_);
lean_ctor_set(v___x_406_, 1, v_acc_396_);
return v___x_406_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2___boxed(lean_object* v___x_423_, lean_object* v___x_424_, lean_object* v___x_425_, lean_object* v_acc_426_, lean_object* v_a_427_){
_start:
{
uint32_t v___x_9519__boxed_428_; lean_object* v_res_429_; 
v___x_9519__boxed_428_ = lean_unbox_uint32(v___x_423_);
lean_dec(v___x_423_);
v_res_429_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2(v___x_9519__boxed_428_, v___x_424_, v___x_425_, v_acc_426_, v_a_427_);
lean_dec(v___x_425_);
lean_dec_ref(v___x_424_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0(uint32_t v___x_433_, lean_object* v___y_434_){
_start:
{
lean_object* v_fst_435_; lean_object* v_snd_436_; lean_object* v___x_437_; uint8_t v_decide_438_; 
v_fst_435_ = lean_ctor_get(v___y_434_, 0);
v_snd_436_ = lean_ctor_get(v___y_434_, 1);
v___x_437_ = lean_string_utf8_byte_size(v_fst_435_);
v_decide_438_ = lean_nat_dec_eq(v_snd_436_, v___x_437_);
if (v_decide_438_ == 0)
{
uint32_t v_c_439_; uint8_t v___x_440_; 
v_c_439_ = lean_string_utf8_get_fast(v_fst_435_, v_snd_436_);
v___x_440_ = lean_uint32_dec_eq(v_c_439_, v___x_433_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_441_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__1));
v___x_442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_442_, 0, v___y_434_);
lean_ctor_set(v___x_442_, 1, v___x_441_);
return v___x_442_;
}
else
{
lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_495_; 
lean_inc(v_snd_436_);
lean_inc(v_fst_435_);
v_isSharedCheck_495_ = !lean_is_exclusive(v___y_434_);
if (v_isSharedCheck_495_ == 0)
{
lean_object* v_unused_496_; lean_object* v_unused_497_; 
v_unused_496_ = lean_ctor_get(v___y_434_, 1);
lean_dec(v_unused_496_);
v_unused_497_ = lean_ctor_get(v___y_434_, 0);
lean_dec(v_unused_497_);
v___x_444_ = v___y_434_;
v_isShared_445_ = v_isSharedCheck_495_;
goto v_resetjp_443_;
}
else
{
lean_dec(v___y_434_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_495_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_446_; lean_object* v_it_x27_448_; 
v___x_446_ = lean_string_utf8_next_fast(v_fst_435_, v_snd_436_);
lean_inc(v_fst_435_);
if (v_isShared_445_ == 0)
{
lean_ctor_set(v___x_444_, 1, v___x_446_);
v_it_x27_448_ = v___x_444_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_fst_435_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v___x_446_);
v_it_x27_448_ = v_reuseFailAlloc_494_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
uint8_t v_decide_449_; 
v_decide_449_ = lean_nat_dec_eq(v___x_446_, v___x_437_);
if (v_decide_449_ == 0)
{
uint32_t v___x_450_; uint8_t v___x_451_; 
v___x_450_ = lean_string_utf8_get_fast(v_fst_435_, v___x_446_);
v___x_451_ = lean_uint32_dec_eq(v___x_450_, v___x_433_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
lean_dec_ref(v_it_x27_448_);
v___x_452_ = lean_string_utf8_next_fast(v_fst_435_, v___x_446_);
lean_inc(v_fst_435_);
v___x_453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_453_, 0, v_fst_435_);
lean_ctor_set(v___x_453_, 1, v___x_452_);
v___x_454_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_455_ = lean_string_push(v___x_454_, v___x_450_);
v___x_456_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2(v_c_439_, v_fst_435_, v_snd_436_, v___x_455_, v___x_453_);
lean_dec(v_snd_436_);
lean_dec(v_fst_435_);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v_pos_457_; lean_object* v_res_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_489_; 
v_pos_457_ = lean_ctor_get(v___x_456_, 0);
v_res_458_ = lean_ctor_get(v___x_456_, 1);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_456_);
if (v_isSharedCheck_489_ == 0)
{
v___x_460_ = v___x_456_;
v_isShared_461_ = v_isSharedCheck_489_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_res_458_);
lean_inc(v_pos_457_);
lean_dec(v___x_456_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_489_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v_fst_462_; lean_object* v_snd_463_; lean_object* v___x_464_; uint8_t v_decide_465_; 
v_fst_462_ = lean_ctor_get(v_pos_457_, 0);
v_snd_463_ = lean_ctor_get(v_pos_457_, 1);
v___x_464_ = lean_string_utf8_byte_size(v_fst_462_);
v_decide_465_ = lean_nat_dec_eq(v_snd_463_, v___x_464_);
if (v_decide_465_ == 0)
{
uint32_t v_c_466_; uint8_t v___x_467_; 
v_c_466_ = lean_string_utf8_get_fast(v_fst_462_, v_snd_463_);
v___x_467_ = lean_uint32_dec_eq(v_c_466_, v___x_433_);
if (v___x_467_ == 0)
{
lean_object* v___x_468_; lean_object* v___x_470_; 
lean_dec(v_res_458_);
v___x_468_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__1));
if (v_isShared_461_ == 0)
{
lean_ctor_set_tag(v___x_460_, 1);
lean_ctor_set(v___x_460_, 1, v___x_468_);
v___x_470_ = v___x_460_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_pos_457_);
lean_ctor_set(v_reuseFailAlloc_471_, 1, v___x_468_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
else
{
lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_482_; 
lean_inc(v_snd_463_);
lean_inc(v_fst_462_);
v_isSharedCheck_482_ = !lean_is_exclusive(v_pos_457_);
if (v_isSharedCheck_482_ == 0)
{
lean_object* v_unused_483_; lean_object* v_unused_484_; 
v_unused_483_ = lean_ctor_get(v_pos_457_, 1);
lean_dec(v_unused_483_);
v_unused_484_ = lean_ctor_get(v_pos_457_, 0);
lean_dec(v_unused_484_);
v___x_473_ = v_pos_457_;
v_isShared_474_ = v_isSharedCheck_482_;
goto v_resetjp_472_;
}
else
{
lean_dec(v_pos_457_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_482_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_475_; lean_object* v_it_x27_477_; 
v___x_475_ = lean_string_utf8_next_fast(v_fst_462_, v_snd_463_);
lean_dec(v_snd_463_);
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 1, v___x_475_);
v_it_x27_477_ = v___x_473_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_fst_462_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v___x_475_);
v_it_x27_477_ = v_reuseFailAlloc_481_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
lean_object* v___x_479_; 
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 0, v_it_x27_477_);
v___x_479_ = v___x_460_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_it_x27_477_);
lean_ctor_set(v_reuseFailAlloc_480_, 1, v_res_458_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
}
else
{
lean_object* v___x_485_; lean_object* v___x_487_; 
lean_dec(v_res_458_);
v___x_485_ = lean_box(0);
if (v_isShared_461_ == 0)
{
lean_ctor_set_tag(v___x_460_, 1);
lean_ctor_set(v___x_460_, 1, v___x_485_);
v___x_487_ = v___x_460_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_pos_457_);
lean_ctor_set(v_reuseFailAlloc_488_, 1, v___x_485_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
}
else
{
return v___x_456_;
}
}
else
{
lean_object* v___x_490_; lean_object* v___x_491_; 
lean_dec(v_snd_436_);
lean_dec(v_fst_435_);
v___x_490_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_491_, 0, v_it_x27_448_);
lean_ctor_set(v___x_491_, 1, v___x_490_);
return v___x_491_;
}
}
else
{
lean_object* v___x_492_; lean_object* v___x_493_; 
lean_dec(v_snd_436_);
lean_dec(v_fst_435_);
v___x_492_ = lean_box(0);
v___x_493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_493_, 0, v_it_x27_448_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
return v___x_493_;
}
}
}
}
}
else
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = lean_box(0);
v___x_499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_499_, 0, v___y_434_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
return v___x_499_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___boxed(lean_object* v___x_500_, lean_object* v___y_501_){
_start:
{
uint32_t v___x_9585__boxed_502_; lean_object* v_res_503_; 
v___x_9585__boxed_502_ = lean_unbox_uint32(v___x_500_);
lean_dec(v___x_500_);
v_res_503_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0(v___x_9585__boxed_502_, v___y_501_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__3(lean_object* v___x_504_, lean_object* v___x_505_, lean_object* v_acc_506_, lean_object* v_a_507_){
_start:
{
lean_object* v_fst_508_; lean_object* v_snd_509_; lean_object* v_pos_511_; lean_object* v_snd_512_; lean_object* v_err_513_; lean_object* v___x_519_; uint8_t v_decide_520_; 
v_fst_508_ = lean_ctor_get(v_a_507_, 0);
v_snd_509_ = lean_ctor_get(v_a_507_, 1);
lean_inc(v_snd_509_);
v___x_519_ = lean_string_utf8_byte_size(v_fst_508_);
v_decide_520_ = lean_nat_dec_eq(v_snd_509_, v___x_519_);
if (v_decide_520_ == 0)
{
uint32_t v___x_521_; uint8_t v_decide_522_; uint32_t v___x_523_; uint32_t v_c_524_; lean_object* v___x_525_; lean_object* v_it_x27_526_; uint8_t v___y_528_; uint8_t v___y_529_; uint8_t v___y_530_; uint8_t v___y_534_; uint8_t v___y_535_; uint8_t v___y_538_; uint32_t v___x_545_; uint8_t v___x_546_; 
v___x_521_ = 34;
v_decide_522_ = lean_nat_dec_eq(v___x_504_, v___x_505_);
v___x_523_ = 39;
v_c_524_ = lean_string_utf8_get_fast(v_fst_508_, v_snd_509_);
v___x_525_ = lean_string_utf8_next_fast(v_fst_508_, v_snd_509_);
lean_inc(v_fst_508_);
v_it_x27_526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_526_, 0, v_fst_508_);
lean_ctor_set(v_it_x27_526_, 1, v___x_525_);
v___x_545_ = 65;
v___x_546_ = lean_uint32_dec_le(v___x_545_, v_c_524_);
if (v___x_546_ == 0)
{
goto v___jp_540_;
}
else
{
uint32_t v___x_547_; uint8_t v___x_548_; 
v___x_547_ = 90;
v___x_548_ = lean_uint32_dec_le(v_c_524_, v___x_547_);
if (v___x_548_ == 0)
{
goto v___jp_540_;
}
else
{
v___y_538_ = v_decide_520_;
goto v___jp_537_;
}
}
v___jp_527_:
{
if (v___y_528_ == 0)
{
lean_dec_ref_known(v_it_x27_526_, 2);
goto v___jp_517_;
}
else
{
if (v___y_529_ == 0)
{
lean_dec_ref_known(v_it_x27_526_, 2);
goto v___jp_517_;
}
else
{
if (v___y_530_ == 0)
{
lean_dec_ref_known(v_it_x27_526_, 2);
goto v___jp_517_;
}
else
{
lean_object* v___x_531_; 
lean_dec(v_snd_509_);
lean_dec_ref(v_a_507_);
v___x_531_ = lean_string_push(v_acc_506_, v_c_524_);
v_acc_506_ = v___x_531_;
v_a_507_ = v_it_x27_526_;
goto _start;
}
}
}
}
v___jp_533_:
{
uint8_t v___x_536_; 
v___x_536_ = lean_uint32_dec_eq(v_c_524_, v___x_521_);
if (v___x_536_ == 0)
{
v___y_528_ = v___y_535_;
v___y_529_ = v___y_534_;
v___y_530_ = v_decide_522_;
goto v___jp_527_;
}
else
{
v___y_528_ = v___y_535_;
v___y_529_ = v___y_534_;
v___y_530_ = v_decide_520_;
goto v___jp_527_;
}
}
v___jp_537_:
{
uint8_t v___x_539_; 
v___x_539_ = lean_uint32_dec_eq(v_c_524_, v___x_523_);
if (v___x_539_ == 0)
{
v___y_534_ = v___y_538_;
v___y_535_ = v_decide_522_;
goto v___jp_533_;
}
else
{
v___y_534_ = v___y_538_;
v___y_535_ = v_decide_520_;
goto v___jp_533_;
}
}
v___jp_540_:
{
uint32_t v___x_541_; uint8_t v___x_542_; 
v___x_541_ = 97;
v___x_542_ = lean_uint32_dec_le(v___x_541_, v_c_524_);
if (v___x_542_ == 0)
{
v___y_538_ = v_decide_522_;
goto v___jp_537_;
}
else
{
uint32_t v___x_543_; uint8_t v___x_544_; 
v___x_543_ = 122;
v___x_544_ = lean_uint32_dec_le(v_c_524_, v___x_543_);
if (v___x_544_ == 0)
{
v___y_538_ = v_decide_522_;
goto v___jp_537_;
}
else
{
v___y_538_ = v_decide_520_;
goto v___jp_537_;
}
}
}
}
else
{
lean_object* v___x_549_; 
v___x_549_ = lean_box(0);
lean_inc(v_snd_509_);
v_pos_511_ = v_a_507_;
v_snd_512_ = v_snd_509_;
v_err_513_ = v___x_549_;
goto v___jp_510_;
}
v___jp_510_:
{
uint8_t v_decide_514_; 
v_decide_514_ = lean_nat_dec_eq(v_snd_509_, v_snd_512_);
lean_dec(v_snd_512_);
lean_dec(v_snd_509_);
if (v_decide_514_ == 0)
{
lean_object* v___x_515_; 
lean_dec_ref(v_acc_506_);
lean_inc(v_err_513_);
v___x_515_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_515_, 0, v_pos_511_);
lean_ctor_set(v___x_515_, 1, v_err_513_);
return v___x_515_;
}
else
{
lean_object* v___x_516_; 
v___x_516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_516_, 0, v_pos_511_);
lean_ctor_set(v___x_516_, 1, v_acc_506_);
return v___x_516_;
}
}
v___jp_517_:
{
lean_object* v___x_518_; 
v___x_518_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_509_);
v_pos_511_ = v_a_507_;
v_snd_512_ = v_snd_509_;
v_err_513_ = v___x_518_;
goto v___jp_510_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__3___boxed(lean_object* v___x_550_, lean_object* v___x_551_, lean_object* v_acc_552_, lean_object* v_a_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__3(v___x_550_, v___x_551_, v_acc_552_, v_a_553_);
lean_dec(v___x_551_);
lean_dec(v___x_550_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__2(lean_object* v_snd_555_, lean_object* v_snd_556_, uint32_t v___x_557_, uint8_t v_decide_558_, uint32_t v___x_559_, lean_object* v___y_560_){
_start:
{
lean_object* v_fst_564_; lean_object* v_snd_565_; lean_object* v___x_566_; uint8_t v_decide_567_; 
v_fst_564_ = lean_ctor_get(v___y_560_, 0);
v_snd_565_ = lean_ctor_get(v___y_560_, 1);
v___x_566_ = lean_string_utf8_byte_size(v_fst_564_);
v_decide_567_ = lean_nat_dec_eq(v_snd_565_, v___x_566_);
if (v_decide_567_ == 0)
{
uint32_t v_c_568_; lean_object* v___x_569_; lean_object* v_it_x27_570_; uint8_t v___y_572_; uint8_t v___y_573_; uint8_t v___y_574_; uint8_t v___y_579_; uint8_t v___y_580_; uint8_t v___y_583_; uint32_t v___x_590_; uint8_t v___x_591_; 
v_c_568_ = lean_string_utf8_get_fast(v_fst_564_, v_snd_565_);
v___x_569_ = lean_string_utf8_next_fast(v_fst_564_, v_snd_565_);
lean_inc(v_fst_564_);
v_it_x27_570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_570_, 0, v_fst_564_);
lean_ctor_set(v_it_x27_570_, 1, v___x_569_);
v___x_590_ = 65;
v___x_591_ = lean_uint32_dec_le(v___x_590_, v_c_568_);
if (v___x_591_ == 0)
{
goto v___jp_585_;
}
else
{
uint32_t v___x_592_; uint8_t v___x_593_; 
v___x_592_ = 90;
v___x_593_ = lean_uint32_dec_le(v_c_568_, v___x_592_);
if (v___x_593_ == 0)
{
goto v___jp_585_;
}
else
{
v___y_583_ = v_decide_567_;
goto v___jp_582_;
}
}
v___jp_571_:
{
if (v___y_573_ == 0)
{
lean_dec_ref_known(v_it_x27_570_, 2);
goto v___jp_561_;
}
else
{
if (v___y_572_ == 0)
{
lean_dec_ref_known(v_it_x27_570_, 2);
goto v___jp_561_;
}
else
{
if (v___y_574_ == 0)
{
lean_dec_ref_known(v_it_x27_570_, 2);
goto v___jp_561_;
}
else
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
lean_dec_ref(v___y_560_);
v___x_575_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_576_ = lean_string_push(v___x_575_, v_c_568_);
v___x_577_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__3(v_snd_555_, v_snd_556_, v___x_576_, v_it_x27_570_);
return v___x_577_;
}
}
}
}
v___jp_578_:
{
uint8_t v___x_581_; 
v___x_581_ = lean_uint32_dec_eq(v_c_568_, v___x_557_);
if (v___x_581_ == 0)
{
v___y_572_ = v___y_579_;
v___y_573_ = v___y_580_;
v___y_574_ = v_decide_558_;
goto v___jp_571_;
}
else
{
v___y_572_ = v___y_579_;
v___y_573_ = v___y_580_;
v___y_574_ = v_decide_567_;
goto v___jp_571_;
}
}
v___jp_582_:
{
uint8_t v___x_584_; 
v___x_584_ = lean_uint32_dec_eq(v_c_568_, v___x_559_);
if (v___x_584_ == 0)
{
v___y_579_ = v___y_583_;
v___y_580_ = v_decide_558_;
goto v___jp_578_;
}
else
{
v___y_579_ = v___y_583_;
v___y_580_ = v_decide_567_;
goto v___jp_578_;
}
}
v___jp_585_:
{
uint32_t v___x_586_; uint8_t v___x_587_; 
v___x_586_ = 97;
v___x_587_ = lean_uint32_dec_le(v___x_586_, v_c_568_);
if (v___x_587_ == 0)
{
v___y_583_ = v_decide_558_;
goto v___jp_582_;
}
else
{
uint32_t v___x_588_; uint8_t v___x_589_; 
v___x_588_ = 122;
v___x_589_ = lean_uint32_dec_le(v_c_568_, v___x_588_);
if (v___x_589_ == 0)
{
v___y_583_ = v_decide_558_;
goto v___jp_582_;
}
else
{
v___y_583_ = v_decide_567_;
goto v___jp_582_;
}
}
}
}
else
{
lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_594_ = lean_box(0);
v___x_595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_595_, 0, v___y_560_);
lean_ctor_set(v___x_595_, 1, v___x_594_);
return v___x_595_;
}
v___jp_561_:
{
lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_562_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_563_, 0, v___y_560_);
lean_ctor_set(v___x_563_, 1, v___x_562_);
return v___x_563_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__2___boxed(lean_object* v_snd_596_, lean_object* v_snd_597_, lean_object* v___x_598_, lean_object* v_decide_599_, lean_object* v___x_600_, lean_object* v___y_601_){
_start:
{
uint32_t v___x_9801__boxed_602_; uint8_t v_decide_9802__boxed_603_; uint32_t v___x_9803__boxed_604_; lean_object* v_res_605_; 
v___x_9801__boxed_602_ = lean_unbox_uint32(v___x_598_);
lean_dec(v___x_598_);
v_decide_9802__boxed_603_ = lean_unbox(v_decide_599_);
v___x_9803__boxed_604_ = lean_unbox_uint32(v___x_600_);
lean_dec(v___x_600_);
v_res_605_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__2(v_snd_596_, v_snd_597_, v___x_9801__boxed_602_, v_decide_9802__boxed_603_, v___x_9803__boxed_604_, v___y_601_);
lean_dec(v_snd_597_);
lean_dec(v_snd_596_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__3(uint32_t v___y_606_){
_start:
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_607_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_608_ = lean_string_push(v___x_607_, v___y_606_);
v___x_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_609_, 0, v___x_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__3___boxed(lean_object* v___y_610_){
_start:
{
uint32_t v___y_9877__boxed_611_; lean_object* v_res_612_; 
v___y_9877__boxed_611_ = lean_unbox_uint32(v___y_610_);
lean_dec(v___y_610_);
v_res_612_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__3(v___y_9877__boxed_611_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__4(lean_object* v___y_613_){
_start:
{
lean_object* v_fst_614_; lean_object* v_snd_615_; lean_object* v___x_616_; uint8_t v_decide_617_; 
v_fst_614_ = lean_ctor_get(v___y_613_, 0);
v_snd_615_ = lean_ctor_get(v___y_613_, 1);
v___x_616_ = lean_string_utf8_byte_size(v_fst_614_);
v_decide_617_ = lean_nat_dec_eq(v_snd_615_, v___x_616_);
if (v_decide_617_ == 0)
{
lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_628_; 
lean_inc(v_snd_615_);
lean_inc(v_fst_614_);
v_isSharedCheck_628_ = !lean_is_exclusive(v___y_613_);
if (v_isSharedCheck_628_ == 0)
{
lean_object* v_unused_629_; lean_object* v_unused_630_; 
v_unused_629_ = lean_ctor_get(v___y_613_, 1);
lean_dec(v_unused_629_);
v_unused_630_ = lean_ctor_get(v___y_613_, 0);
lean_dec(v_unused_630_);
v___x_619_ = v___y_613_;
v_isShared_620_ = v_isSharedCheck_628_;
goto v_resetjp_618_;
}
else
{
lean_dec(v___y_613_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_628_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
uint32_t v_c_621_; lean_object* v___x_622_; lean_object* v_it_x27_624_; 
v_c_621_ = lean_string_utf8_get_fast(v_fst_614_, v_snd_615_);
v___x_622_ = lean_string_utf8_next_fast(v_fst_614_, v_snd_615_);
lean_dec(v_snd_615_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 1, v___x_622_);
v_it_x27_624_ = v___x_619_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_fst_614_);
lean_ctor_set(v_reuseFailAlloc_627_, 1, v___x_622_);
v_it_x27_624_ = v_reuseFailAlloc_627_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_box_uint32(v_c_621_);
v___x_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_626_, 0, v_it_x27_624_);
lean_ctor_set(v___x_626_, 1, v___x_625_);
return v___x_626_;
}
}
}
else
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = lean_box(0);
v___x_632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_632_, 0, v___y_613_);
lean_ctor_set(v___x_632_, 1, v___x_631_);
return v___x_632_;
}
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_633_; lean_object* v___x_634_; 
v___x_633_ = 34;
v___x_634_ = lean_box_uint32(v___x_633_);
return v___x_634_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0(void){
_start:
{
lean_object* v___x_635_; lean_object* v___f_636_; 
v___x_635_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1;
v___f_636_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___boxed), 2, 1);
lean_closure_set(v___f_636_, 0, v___x_635_);
return v___f_636_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_637_; lean_object* v___x_638_; 
v___x_637_ = 39;
v___x_638_ = lean_box_uint32(v___x_637_);
return v___x_638_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1(void){
_start:
{
lean_object* v___x_639_; lean_object* v___f_640_; 
v___x_639_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1;
v___f_640_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___boxed), 2, 1);
lean_closure_set(v___f_640_, 0, v___x_639_);
return v___f_640_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart(lean_object* v_a_646_){
_start:
{
lean_object* v___x_647_; 
lean_inc_ref(v_a_646_);
v___x_647_ = l_Std_Time_parseModifier(v_a_646_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_object* v_pos_648_; lean_object* v_res_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_657_; 
lean_dec_ref(v_a_646_);
v_pos_648_ = lean_ctor_get(v___x_647_, 0);
v_res_649_ = lean_ctor_get(v___x_647_, 1);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_657_ == 0)
{
v___x_651_ = v___x_647_;
v_isShared_652_ = v_isSharedCheck_657_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_res_649_);
lean_inc(v_pos_648_);
lean_dec(v___x_647_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_657_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_653_; lean_object* v___x_655_; 
v___x_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_653_, 0, v_res_649_);
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 1, v___x_653_);
v___x_655_ = v___x_651_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_pos_648_);
lean_ctor_set(v_reuseFailAlloc_656_, 1, v___x_653_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
else
{
lean_object* v_pos_658_; lean_object* v_err_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_719_; 
v_pos_658_ = lean_ctor_get(v___x_647_, 0);
v_err_659_ = lean_ctor_get(v___x_647_, 1);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_719_ == 0)
{
v___x_661_ = v___x_647_;
v_isShared_662_ = v_isSharedCheck_719_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_err_659_);
lean_inc(v_pos_658_);
lean_dec(v___x_647_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_719_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v_snd_663_; lean_object* v_fst_664_; lean_object* v_snd_665_; uint8_t v_decide_666_; 
v_snd_663_ = lean_ctor_get(v_a_646_, 1);
lean_inc(v_snd_663_);
lean_dec_ref(v_a_646_);
v_fst_664_ = lean_ctor_get(v_pos_658_, 0);
v_snd_665_ = lean_ctor_get(v_pos_658_, 1);
v_decide_666_ = lean_nat_dec_eq(v_snd_663_, v_snd_665_);
lean_dec(v_snd_663_);
if (v_decide_666_ == 0)
{
lean_object* v___x_668_; 
if (v_isShared_662_ == 0)
{
v___x_668_ = v___x_661_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_pos_658_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_err_659_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
else
{
lean_object* v___f_670_; lean_object* v___y_672_; lean_object* v_pos_673_; lean_object* v_snd_674_; lean_object* v___x_691_; uint8_t v_decide_692_; 
lean_inc(v_snd_665_);
lean_dec(v_err_659_);
v___f_670_ = ((lean_object*)(l_Std_Time_instCoeStringFormatPart___closed__0));
v___x_691_ = lean_string_utf8_byte_size(v_fst_664_);
v_decide_692_ = lean_nat_dec_eq(v_snd_665_, v___x_691_);
if (v_decide_692_ == 0)
{
uint32_t v___x_693_; uint32_t v_c_694_; uint8_t v___x_695_; 
v___x_693_ = 92;
v_c_694_ = lean_string_utf8_get_fast(v_fst_664_, v_snd_665_);
v___x_695_ = lean_uint32_dec_eq(v_c_694_, v___x_693_);
if (v___x_695_ == 0)
{
lean_object* v___x_696_; lean_object* v___x_698_; 
v___x_696_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__3));
lean_inc(v_pos_658_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 1, v___x_696_);
v___x_698_ = v___x_661_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_pos_658_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v___x_696_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
lean_inc(v_snd_665_);
v___y_672_ = v___x_698_;
v_pos_673_ = v_pos_658_;
v_snd_674_ = v_snd_665_;
goto v___jp_671_;
}
}
else
{
lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_712_; 
lean_inc(v_fst_664_);
lean_del_object(v___x_661_);
v_isSharedCheck_712_ = !lean_is_exclusive(v_pos_658_);
if (v_isSharedCheck_712_ == 0)
{
lean_object* v_unused_713_; lean_object* v_unused_714_; 
v_unused_713_ = lean_ctor_get(v_pos_658_, 1);
lean_dec(v_unused_713_);
v_unused_714_ = lean_ctor_get(v_pos_658_, 0);
lean_dec(v_unused_714_);
v___x_701_ = v_pos_658_;
v_isShared_702_ = v_isSharedCheck_712_;
goto v_resetjp_700_;
}
else
{
lean_dec(v_pos_658_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_712_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___f_703_; lean_object* v___f_704_; lean_object* v___x_705_; lean_object* v_it_x27_707_; 
v___f_703_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__4));
v___f_704_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__5));
v___x_705_ = lean_string_utf8_next_fast(v_fst_664_, v_snd_665_);
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 1, v___x_705_);
v_it_x27_707_ = v___x_701_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_fst_664_);
lean_ctor_set(v_reuseFailAlloc_711_, 1, v___x_705_);
v_it_x27_707_ = v_reuseFailAlloc_711_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_708_; 
v___x_708_ = l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(v___f_704_, v___f_703_, v_it_x27_707_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_dec(v_snd_665_);
return v___x_708_;
}
else
{
lean_object* v_pos_709_; lean_object* v_snd_710_; 
v_pos_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_pos_709_);
v_snd_710_ = lean_ctor_get(v_pos_709_, 1);
lean_inc(v_snd_710_);
v___y_672_ = v___x_708_;
v_pos_673_ = v_pos_709_;
v_snd_674_ = v_snd_710_;
goto v___jp_671_;
}
}
}
}
}
else
{
lean_object* v___x_715_; lean_object* v___x_717_; 
v___x_715_ = lean_box(0);
lean_inc(v_pos_658_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 1, v___x_715_);
v___x_717_ = v___x_661_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_pos_658_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v___x_715_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
lean_inc(v_snd_665_);
v___y_672_ = v___x_717_;
v_pos_673_ = v_pos_658_;
v_snd_674_ = v_snd_665_;
goto v___jp_671_;
}
}
v___jp_671_:
{
uint8_t v_decide_675_; 
v_decide_675_ = lean_nat_dec_eq(v_snd_665_, v_snd_674_);
lean_dec(v_snd_665_);
if (v_decide_675_ == 0)
{
lean_dec(v_snd_674_);
lean_dec_ref(v_pos_673_);
return v___y_672_;
}
else
{
lean_object* v___f_676_; lean_object* v___x_677_; 
lean_dec_ref(v___y_672_);
v___f_676_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0);
v___x_677_ = l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(v___f_676_, v___f_670_, v_pos_673_);
if (lean_obj_tag(v___x_677_) == 0)
{
lean_dec(v_snd_674_);
return v___x_677_;
}
else
{
lean_object* v_pos_678_; lean_object* v_snd_679_; uint8_t v_decide_680_; 
v_pos_678_ = lean_ctor_get(v___x_677_, 0);
v_snd_679_ = lean_ctor_get(v_pos_678_, 1);
v_decide_680_ = lean_nat_dec_eq(v_snd_674_, v_snd_679_);
lean_dec(v_snd_674_);
if (v_decide_680_ == 0)
{
return v___x_677_;
}
else
{
lean_object* v___f_681_; lean_object* v___x_682_; 
lean_inc(v_snd_679_);
lean_inc(v_pos_678_);
lean_dec_ref_known(v___x_677_, 2);
v___f_681_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1);
v___x_682_ = l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(v___f_681_, v___f_670_, v_pos_678_);
if (lean_obj_tag(v___x_682_) == 0)
{
lean_dec(v_snd_679_);
return v___x_682_;
}
else
{
lean_object* v_pos_683_; lean_object* v_snd_684_; uint8_t v_decide_685_; 
v_pos_683_ = lean_ctor_get(v___x_682_, 0);
v_snd_684_ = lean_ctor_get(v_pos_683_, 1);
v_decide_685_ = lean_nat_dec_eq(v_snd_679_, v_snd_684_);
if (v_decide_685_ == 0)
{
lean_dec(v_snd_679_);
return v___x_682_;
}
else
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___f_689_; lean_object* v___x_690_; 
lean_inc(v_pos_683_);
lean_dec_ref_known(v___x_682_, 2);
v___x_686_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1;
v___x_687_ = lean_box(v_decide_685_);
v___x_688_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1;
lean_inc(v_snd_684_);
v___f_689_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__2___boxed), 6, 5);
lean_closure_set(v___f_689_, 0, v_snd_679_);
lean_closure_set(v___f_689_, 1, v_snd_684_);
lean_closure_set(v___f_689_, 2, v___x_686_);
lean_closure_set(v___f_689_, 3, v___x_687_);
lean_closure_set(v___f_689_, 4, v___x_688_);
v___x_690_ = l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(v___f_689_, v___f_670_, v_pos_683_);
return v___x_690_;
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
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_specParser_spec__0(lean_object* v_acc_720_, lean_object* v_a_721_){
_start:
{
lean_object* v___x_722_; 
lean_inc_ref(v_a_721_);
v___x_722_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart(v_a_721_);
if (lean_obj_tag(v___x_722_) == 0)
{
lean_object* v_pos_723_; lean_object* v_res_724_; lean_object* v___x_725_; 
lean_dec_ref(v_a_721_);
v_pos_723_ = lean_ctor_get(v___x_722_, 0);
lean_inc(v_pos_723_);
v_res_724_ = lean_ctor_get(v___x_722_, 1);
lean_inc(v_res_724_);
lean_dec_ref_known(v___x_722_, 2);
v___x_725_ = lean_array_push(v_acc_720_, v_res_724_);
v_acc_720_ = v___x_725_;
v_a_721_ = v_pos_723_;
goto _start;
}
else
{
lean_object* v_pos_727_; lean_object* v_err_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_741_; 
v_pos_727_ = lean_ctor_get(v___x_722_, 0);
v_err_728_ = lean_ctor_get(v___x_722_, 1);
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_741_ == 0)
{
v___x_730_ = v___x_722_;
v_isShared_731_ = v_isSharedCheck_741_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_err_728_);
lean_inc(v_pos_727_);
lean_dec(v___x_722_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_741_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v_snd_732_; lean_object* v_snd_733_; uint8_t v_decide_734_; 
v_snd_732_ = lean_ctor_get(v_a_721_, 1);
lean_inc(v_snd_732_);
lean_dec_ref(v_a_721_);
v_snd_733_ = lean_ctor_get(v_pos_727_, 1);
v_decide_734_ = lean_nat_dec_eq(v_snd_732_, v_snd_733_);
lean_dec(v_snd_732_);
if (v_decide_734_ == 0)
{
lean_object* v___x_736_; 
lean_dec_ref(v_acc_720_);
if (v_isShared_731_ == 0)
{
v___x_736_ = v___x_730_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_pos_727_);
lean_ctor_set(v_reuseFailAlloc_737_, 1, v_err_728_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
else
{
lean_object* v___x_739_; 
lean_dec(v_err_728_);
if (v_isShared_731_ == 0)
{
lean_ctor_set_tag(v___x_730_, 0);
lean_ctor_set(v___x_730_, 1, v_acc_720_);
v___x_739_ = v___x_730_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v_pos_727_);
lean_ctor_set(v_reuseFailAlloc_740_, 1, v_acc_720_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
return v___x_739_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_specParser(lean_object* v_a_747_){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__0));
v___x_749_ = l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_specParser_spec__0(v___x_748_, v_a_747_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v_pos_750_; lean_object* v_res_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_767_; 
v_pos_750_ = lean_ctor_get(v___x_749_, 0);
v_res_751_ = lean_ctor_get(v___x_749_, 1);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_767_ == 0)
{
v___x_753_ = v___x_749_;
v_isShared_754_ = v_isSharedCheck_767_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_res_751_);
lean_inc(v_pos_750_);
lean_dec(v___x_749_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_767_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v_fst_755_; lean_object* v_snd_756_; lean_object* v___x_757_; uint8_t v_decide_758_; 
v_fst_755_ = lean_ctor_get(v_pos_750_, 0);
v_snd_756_ = lean_ctor_get(v_pos_750_, 1);
v___x_757_ = lean_string_utf8_byte_size(v_fst_755_);
v_decide_758_ = lean_nat_dec_eq(v_snd_756_, v___x_757_);
if (v_decide_758_ == 0)
{
lean_object* v___x_759_; lean_object* v___x_761_; 
lean_dec(v_res_751_);
v___x_759_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__2));
if (v_isShared_754_ == 0)
{
lean_ctor_set_tag(v___x_753_, 1);
lean_ctor_set(v___x_753_, 1, v___x_759_);
v___x_761_ = v___x_753_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_pos_750_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v___x_759_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
else
{
lean_object* v___x_763_; lean_object* v___x_765_; 
v___x_763_ = lean_array_to_list(v_res_751_);
if (v_isShared_754_ == 0)
{
lean_ctor_set(v___x_753_, 1, v___x_763_);
v___x_765_ = v___x_753_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_pos_750_);
lean_ctor_set(v_reuseFailAlloc_766_, 1, v___x_763_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
}
}
else
{
lean_object* v_pos_768_; lean_object* v_err_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
v_pos_768_ = lean_ctor_get(v___x_749_, 0);
v_err_769_ = lean_ctor_get(v___x_749_, 1);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_749_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_err_769_);
lean_inc(v_pos_768_);
lean_dec(v___x_749_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_pos_768_);
lean_ctor_set(v_reuseFailAlloc_775_, 1, v_err_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_specParse(lean_object* v_s_777_){
_start:
{
lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_778_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser), 1, 0);
v___x_779_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___x_778_, v_s_777_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1(uint32_t v_a_780_, lean_object* v_x_781_, lean_object* v_x_782_){
_start:
{
lean_object* v_zero_783_; uint8_t v_isZero_784_; 
v_zero_783_ = lean_unsigned_to_nat(0u);
v_isZero_784_ = lean_nat_dec_eq(v_x_781_, v_zero_783_);
if (v_isZero_784_ == 1)
{
lean_dec(v_x_781_);
return v_x_782_;
}
else
{
lean_object* v_one_785_; lean_object* v_n_786_; lean_object* v___x_787_; 
v_one_785_ = lean_unsigned_to_nat(1u);
v_n_786_ = lean_nat_sub(v_x_781_, v_one_785_);
lean_dec(v_x_781_);
v___x_787_ = lean_string_push(v_x_782_, v_a_780_);
v_x_781_ = v_n_786_;
v_x_782_ = v___x_787_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1___boxed(lean_object* v_a_789_, lean_object* v_x_790_, lean_object* v_x_791_){
_start:
{
uint32_t v_a_boxed_792_; lean_object* v_res_793_; 
v_a_boxed_792_ = lean_unbox_uint32(v_a_789_);
lean_dec(v_a_789_);
v_res_793_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1(v_a_boxed_792_, v_x_790_, v_x_791_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(lean_object* v___x_794_, lean_object* v_s_795_, lean_object* v_a_796_, lean_object* v_b_797_){
_start:
{
uint8_t v_decide_798_; 
v_decide_798_ = lean_nat_dec_eq(v_a_796_, v___x_794_);
if (v_decide_798_ == 0)
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_799_ = lean_string_utf8_next_fast(v_s_795_, v_a_796_);
lean_dec(v_a_796_);
v___x_800_ = lean_unsigned_to_nat(1u);
v___x_801_ = lean_nat_add(v_b_797_, v___x_800_);
lean_dec(v_b_797_);
v_a_796_ = v___x_799_;
v_b_797_ = v___x_801_;
goto _start;
}
else
{
lean_dec(v_a_796_);
return v_b_797_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg___boxed(lean_object* v___x_803_, lean_object* v_s_804_, lean_object* v_a_805_, lean_object* v_b_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(v___x_803_, v_s_804_, v_a_805_, v_b_806_);
lean_dec_ref(v_s_804_);
lean_dec(v___x_803_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(lean_object* v_n_808_, uint32_t v_a_809_, lean_object* v_s_810_){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_811_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_812_ = lean_unsigned_to_nat(0u);
v___x_813_ = lean_string_utf8_byte_size(v_s_810_);
v___x_814_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(v___x_813_, v_s_810_, v___x_812_, v___x_812_);
v___x_815_ = lean_nat_sub(v_n_808_, v___x_814_);
lean_dec(v___x_814_);
v___x_816_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1(v_a_809_, v___x_815_, v___x_811_);
v___x_817_ = lean_string_append(v___x_816_, v_s_810_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii___boxed(lean_object* v_n_818_, lean_object* v_a_819_, lean_object* v_s_820_){
_start:
{
uint32_t v_a_boxed_821_; lean_object* v_res_822_; 
v_a_boxed_821_ = lean_unbox_uint32(v_a_819_);
lean_dec(v_a_819_);
v_res_822_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v_n_818_, v_a_boxed_821_, v_s_820_);
lean_dec_ref(v_s_820_);
lean_dec(v_n_818_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0(lean_object* v___x_823_, lean_object* v___x_824_, lean_object* v_s_825_, lean_object* v_inst_826_, lean_object* v_R_827_, lean_object* v_a_828_, lean_object* v_b_829_, lean_object* v_c_830_){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(v___x_823_, v_s_825_, v_a_828_, v_b_829_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___boxed(lean_object* v___x_832_, lean_object* v___x_833_, lean_object* v_s_834_, lean_object* v_inst_835_, lean_object* v_R_836_, lean_object* v_a_837_, lean_object* v_b_838_, lean_object* v_c_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0(v___x_832_, v___x_833_, v_s_834_, v_inst_835_, v_R_836_, v_a_837_, v_b_838_, v_c_839_);
lean_dec_ref(v_s_834_);
lean_dec_ref(v___x_833_);
lean_dec(v___x_832_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii(lean_object* v_n_841_, uint32_t v_a_842_, lean_object* v_s_843_){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_844_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_845_ = lean_unsigned_to_nat(0u);
v___x_846_ = lean_string_utf8_byte_size(v_s_843_);
v___x_847_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(v___x_846_, v_s_843_, v___x_845_, v___x_845_);
v___x_848_ = lean_nat_sub(v_n_841_, v___x_847_);
lean_dec(v___x_847_);
v___x_849_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1(v_a_842_, v___x_848_, v___x_844_);
v___x_850_ = lean_string_append(v_s_843_, v___x_849_);
lean_dec_ref(v___x_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii___boxed(lean_object* v_n_851_, lean_object* v_a_852_, lean_object* v_s_853_){
_start:
{
uint32_t v_a_boxed_854_; lean_object* v_res_855_; 
v_a_boxed_854_ = lean_unbox_uint32(v_a_852_);
lean_dec(v_a_852_);
v_res_855_ = l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii(v_n_851_, v_a_boxed_854_, v_s_853_);
lean_dec(v_n_851_);
return v_res_855_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = lean_unsigned_to_nat(0u);
v___x_857_ = lean_nat_to_int(v___x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_pad(lean_object* v_size_859_, lean_object* v_n_860_, uint8_t v_cut_861_){
_start:
{
lean_object* v_fst_863_; lean_object* v_snd_864_; lean_object* v___x_878_; uint8_t v___x_879_; 
v___x_878_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_879_ = lean_int_dec_lt(v_n_860_, v___x_878_);
if (v___x_879_ == 0)
{
lean_object* v___x_880_; 
v___x_880_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v_fst_863_ = v___x_880_;
v_snd_864_ = v_n_860_;
goto v___jp_862_;
}
else
{
lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_881_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_882_ = lean_int_neg(v_n_860_);
lean_dec(v_n_860_);
v_fst_863_ = v___x_881_;
v_snd_864_ = v___x_882_;
goto v___jp_862_;
}
v___jp_862_:
{
lean_object* v_numStr_865_; lean_object* v___x_866_; uint8_t v___x_867_; 
v_numStr_865_ = l_Int_repr(v_snd_864_);
lean_dec(v_snd_864_);
v___x_866_ = lean_string_utf8_byte_size(v_numStr_865_);
v___x_867_ = lean_nat_dec_lt(v_size_859_, v___x_866_);
if (v___x_867_ == 0)
{
uint32_t v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_868_ = 48;
v___x_869_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v_size_859_, v___x_868_, v_numStr_865_);
lean_dec_ref(v_numStr_865_);
lean_inc_ref(v_fst_863_);
v___x_870_ = lean_string_append(v_fst_863_, v___x_869_);
lean_dec_ref(v___x_869_);
return v___x_870_;
}
else
{
if (v_cut_861_ == 0)
{
lean_object* v___x_871_; 
lean_inc_ref(v_fst_863_);
v___x_871_ = lean_string_append(v_fst_863_, v_numStr_865_);
lean_dec_ref(v_numStr_865_);
return v___x_871_;
}
else
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_872_ = lean_nat_sub(v___x_866_, v_size_859_);
v___x_873_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_numStr_865_);
v___x_874_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_874_, 0, v_numStr_865_);
lean_ctor_set(v___x_874_, 1, v___x_873_);
lean_ctor_set(v___x_874_, 2, v___x_866_);
v___x_875_ = l_String_Slice_Pos_nextn(v___x_874_, v___x_873_, v___x_872_);
lean_dec_ref_known(v___x_874_, 3);
v___x_876_ = lean_string_utf8_extract_fast(v_numStr_865_, v___x_875_, v___x_866_);
lean_dec(v___x_875_);
lean_dec_ref(v_numStr_865_);
lean_inc_ref(v_fst_863_);
v___x_877_ = lean_string_append(v_fst_863_, v___x_876_);
lean_dec_ref(v___x_876_);
return v___x_877_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_pad___boxed(lean_object* v_size_883_, lean_object* v_n_884_, lean_object* v_cut_885_){
_start:
{
uint8_t v_cut_boxed_886_; lean_object* v_res_887_; 
v_cut_boxed_886_ = lean_unbox(v_cut_885_);
v_res_887_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_size_883_, v_n_884_, v_cut_boxed_886_);
lean_dec(v_size_883_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_rightTruncate(lean_object* v_size_888_, lean_object* v_n_889_, uint8_t v_cut_890_){
_start:
{
lean_object* v_fst_892_; lean_object* v_snd_893_; lean_object* v___x_907_; uint8_t v___x_908_; 
v___x_907_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_908_ = lean_int_dec_lt(v_n_889_, v___x_907_);
if (v___x_908_ == 0)
{
lean_object* v___x_909_; 
v___x_909_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v_fst_892_ = v___x_909_;
v_snd_893_ = v_n_889_;
goto v___jp_891_;
}
else
{
lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_910_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_911_ = lean_int_neg(v_n_889_);
lean_dec(v_n_889_);
v_fst_892_ = v___x_910_;
v_snd_893_ = v___x_911_;
goto v___jp_891_;
}
v___jp_891_:
{
lean_object* v_numStr_894_; lean_object* v___x_895_; uint8_t v___x_896_; 
v_numStr_894_ = l_Int_repr(v_snd_893_);
lean_dec(v_snd_893_);
v___x_895_ = lean_string_length(v_numStr_894_);
v___x_896_ = lean_nat_dec_lt(v_size_888_, v___x_895_);
if (v___x_896_ == 0)
{
uint32_t v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_897_ = 48;
v___x_898_ = l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii(v_size_888_, v___x_897_, v_numStr_894_);
lean_dec(v_size_888_);
lean_inc_ref(v_fst_892_);
v___x_899_ = lean_string_append(v_fst_892_, v___x_898_);
lean_dec_ref(v___x_898_);
return v___x_899_;
}
else
{
if (v_cut_890_ == 0)
{
lean_object* v___x_900_; 
lean_dec(v_size_888_);
lean_inc_ref(v_fst_892_);
v___x_900_ = lean_string_append(v_fst_892_, v_numStr_894_);
lean_dec_ref(v_numStr_894_);
return v___x_900_;
}
else
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_901_ = lean_unsigned_to_nat(0u);
v___x_902_ = lean_string_utf8_byte_size(v_numStr_894_);
lean_inc_ref(v_numStr_894_);
v___x_903_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_903_, 0, v_numStr_894_);
lean_ctor_set(v___x_903_, 1, v___x_901_);
lean_ctor_set(v___x_903_, 2, v___x_902_);
v___x_904_ = l_String_Slice_Pos_nextn(v___x_903_, v___x_901_, v_size_888_);
lean_dec_ref_known(v___x_903_, 3);
v___x_905_ = lean_string_utf8_extract_fast(v_numStr_894_, v___x_901_, v___x_904_);
lean_dec(v___x_904_);
lean_dec_ref(v_numStr_894_);
lean_inc_ref(v_fst_892_);
v___x_906_ = lean_string_append(v_fst_892_, v___x_905_);
lean_dec_ref(v___x_905_);
return v___x_906_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_rightTruncate___boxed(lean_object* v_size_912_, lean_object* v_n_913_, lean_object* v_cut_914_){
_start:
{
uint8_t v_cut_boxed_915_; lean_object* v_res_916_; 
v_cut_boxed_915_ = lean_unbox(v_cut_914_);
v_res_916_ = l___private_Std_Time_Format_Basic_0__Std_Time_rightTruncate(v_size_912_, v_n_913_, v_cut_boxed_915_);
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex(uint8_t v_x_917_){
_start:
{
if (v_x_917_ == 0)
{
lean_object* v___x_918_; 
v___x_918_ = lean_unsigned_to_nat(0u);
return v___x_918_;
}
else
{
lean_object* v___x_919_; 
v___x_919_ = lean_unsigned_to_nat(1u);
return v___x_919_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex___boxed(lean_object* v_x_920_){
_start:
{
uint8_t v_x_40__boxed_921_; lean_object* v_res_922_; 
v_x_40__boxed_921_ = lean_unbox(v_x_920_);
v_res_922_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex(v_x_40__boxed_921_);
return v_res_922_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0(void){
_start:
{
lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_923_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_924_ = lean_int_neg(v___x_923_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong(lean_object* v_symbols_925_, lean_object* v_month_926_){
_start:
{
lean_object* v_monthLong_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v_monthLong_927_ = lean_ctor_get(v_symbols_925_, 0);
v___x_928_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_929_ = lean_int_add(v_month_926_, v___x_928_);
v___x_930_ = l_Int_toNat(v___x_929_);
lean_dec(v___x_929_);
v___x_931_ = lean_array_fget_borrowed(v_monthLong_927_, v___x_930_);
lean_dec(v___x_930_);
lean_inc(v___x_931_);
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___boxed(lean_object* v_symbols_932_, lean_object* v_month_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong(v_symbols_932_, v_month_933_);
lean_dec(v_month_933_);
lean_dec_ref(v_symbols_932_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthShort(lean_object* v_symbols_935_, lean_object* v_month_936_){
_start:
{
lean_object* v_monthShort_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v_monthShort_937_ = lean_ctor_get(v_symbols_935_, 1);
v___x_938_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_939_ = lean_int_add(v_month_936_, v___x_938_);
v___x_940_ = l_Int_toNat(v___x_939_);
lean_dec(v___x_939_);
v___x_941_ = lean_array_fget_borrowed(v_monthShort_937_, v___x_940_);
lean_dec(v___x_940_);
lean_inc(v___x_941_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthShort___boxed(lean_object* v_symbols_942_, lean_object* v_month_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthShort(v_symbols_942_, v_month_943_);
lean_dec(v_month_943_);
lean_dec_ref(v_symbols_942_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthNarrow(lean_object* v_symbols_945_, lean_object* v_month_946_){
_start:
{
lean_object* v_monthNarrow_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v_monthNarrow_947_ = lean_ctor_get(v_symbols_945_, 2);
v___x_948_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_949_ = lean_int_add(v_month_946_, v___x_948_);
v___x_950_ = l_Int_toNat(v___x_949_);
lean_dec(v___x_949_);
v___x_951_ = lean_array_fget_borrowed(v_monthNarrow_947_, v___x_950_);
lean_dec(v___x_950_);
lean_inc(v___x_951_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthNarrow___boxed(lean_object* v_symbols_952_, lean_object* v_month_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthNarrow(v_symbols_952_, v_month_953_);
lean_dec(v_month_953_);
lean_dec_ref(v_symbols_952_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayLong(lean_object* v_symbols_955_, uint8_t v_wd_956_){
_start:
{
lean_object* v_weekdayLong_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v_weekdayLong_957_ = lean_ctor_get(v_symbols_955_, 3);
v___x_958_ = l_Std_Time_Weekday_toOrdinal(v_wd_956_);
v___x_959_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_960_ = lean_int_add(v___x_958_, v___x_959_);
lean_dec(v___x_958_);
v___x_961_ = l_Int_toNat(v___x_960_);
lean_dec(v___x_960_);
v___x_962_ = lean_array_fget_borrowed(v_weekdayLong_957_, v___x_961_);
lean_dec(v___x_961_);
lean_inc(v___x_962_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayLong___boxed(lean_object* v_symbols_963_, lean_object* v_wd_964_){
_start:
{
uint8_t v_wd_boxed_965_; lean_object* v_res_966_; 
v_wd_boxed_965_ = lean_unbox(v_wd_964_);
v_res_966_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayLong(v_symbols_963_, v_wd_boxed_965_);
lean_dec_ref(v_symbols_963_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayShort(lean_object* v_symbols_967_, uint8_t v_wd_968_){
_start:
{
lean_object* v_weekdayShort_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v_weekdayShort_969_ = lean_ctor_get(v_symbols_967_, 4);
v___x_970_ = l_Std_Time_Weekday_toOrdinal(v_wd_968_);
v___x_971_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_972_ = lean_int_add(v___x_970_, v___x_971_);
lean_dec(v___x_970_);
v___x_973_ = l_Int_toNat(v___x_972_);
lean_dec(v___x_972_);
v___x_974_ = lean_array_fget_borrowed(v_weekdayShort_969_, v___x_973_);
lean_dec(v___x_973_);
lean_inc(v___x_974_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayShort___boxed(lean_object* v_symbols_975_, lean_object* v_wd_976_){
_start:
{
uint8_t v_wd_boxed_977_; lean_object* v_res_978_; 
v_wd_boxed_977_ = lean_unbox(v_wd_976_);
v_res_978_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayShort(v_symbols_975_, v_wd_boxed_977_);
lean_dec_ref(v_symbols_975_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayNarrow(lean_object* v_symbols_979_, uint8_t v_wd_980_){
_start:
{
lean_object* v_weekdayNarrow_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
v_weekdayNarrow_981_ = lean_ctor_get(v_symbols_979_, 5);
v___x_982_ = l_Std_Time_Weekday_toOrdinal(v_wd_980_);
v___x_983_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_984_ = lean_int_add(v___x_982_, v___x_983_);
lean_dec(v___x_982_);
v___x_985_ = l_Int_toNat(v___x_984_);
lean_dec(v___x_984_);
v___x_986_ = lean_array_fget_borrowed(v_weekdayNarrow_981_, v___x_985_);
lean_dec(v___x_985_);
lean_inc(v___x_986_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayNarrow___boxed(lean_object* v_symbols_987_, lean_object* v_wd_988_){
_start:
{
uint8_t v_wd_boxed_989_; lean_object* v_res_990_; 
v_wd_boxed_989_ = lean_unbox(v_wd_988_);
v_res_990_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayNarrow(v_symbols_987_, v_wd_boxed_989_);
lean_dec_ref(v_symbols_987_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayTwoLetter(lean_object* v_symbols_991_, uint8_t v_wd_992_){
_start:
{
lean_object* v_weekdayTwoLetter_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v_weekdayTwoLetter_993_ = lean_ctor_get(v_symbols_991_, 6);
v___x_994_ = l_Std_Time_Weekday_toOrdinal(v_wd_992_);
v___x_995_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_996_ = lean_int_add(v___x_994_, v___x_995_);
lean_dec(v___x_994_);
v___x_997_ = l_Int_toNat(v___x_996_);
lean_dec(v___x_996_);
v___x_998_ = lean_array_fget_borrowed(v_weekdayTwoLetter_993_, v___x_997_);
lean_dec(v___x_997_);
lean_inc(v___x_998_);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayTwoLetter___boxed(lean_object* v_symbols_999_, lean_object* v_wd_1000_){
_start:
{
uint8_t v_wd_boxed_1001_; lean_object* v_res_1002_; 
v_wd_boxed_1001_ = lean_unbox(v_wd_1000_);
v_res_1002_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayTwoLetter(v_symbols_999_, v_wd_boxed_1001_);
lean_dec_ref(v_symbols_999_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraShort(lean_object* v_symbols_1003_, uint8_t v_era_1004_){
_start:
{
lean_object* v_eraShort_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v_eraShort_1005_ = lean_ctor_get(v_symbols_1003_, 7);
v___x_1006_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex(v_era_1004_);
v___x_1007_ = lean_array_fget_borrowed(v_eraShort_1005_, v___x_1006_);
lean_dec(v___x_1006_);
lean_inc(v___x_1007_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraShort___boxed(lean_object* v_symbols_1008_, lean_object* v_era_1009_){
_start:
{
uint8_t v_era_boxed_1010_; lean_object* v_res_1011_; 
v_era_boxed_1010_ = lean_unbox(v_era_1009_);
v_res_1011_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatEraShort(v_symbols_1008_, v_era_boxed_1010_);
lean_dec_ref(v_symbols_1008_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraLong(lean_object* v_symbols_1012_, uint8_t v_era_1013_){
_start:
{
lean_object* v_eraLong_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v_eraLong_1014_ = lean_ctor_get(v_symbols_1012_, 8);
v___x_1015_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex(v_era_1013_);
v___x_1016_ = lean_array_fget_borrowed(v_eraLong_1014_, v___x_1015_);
lean_dec(v___x_1015_);
lean_inc(v___x_1016_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraLong___boxed(lean_object* v_symbols_1017_, lean_object* v_era_1018_){
_start:
{
uint8_t v_era_boxed_1019_; lean_object* v_res_1020_; 
v_era_boxed_1019_ = lean_unbox(v_era_1018_);
v_res_1020_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatEraLong(v_symbols_1017_, v_era_boxed_1019_);
lean_dec_ref(v_symbols_1017_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraNarrow(lean_object* v_symbols_1021_, uint8_t v_era_1022_){
_start:
{
lean_object* v_eraNarrow_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v_eraNarrow_1023_ = lean_ctor_get(v_symbols_1021_, 9);
v___x_1024_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex(v_era_1022_);
v___x_1025_ = lean_array_fget_borrowed(v_eraNarrow_1023_, v___x_1024_);
lean_dec(v___x_1024_);
lean_inc(v___x_1025_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraNarrow___boxed(lean_object* v_symbols_1026_, lean_object* v_era_1027_){
_start:
{
uint8_t v_era_boxed_1028_; lean_object* v_res_1029_; 
v_era_boxed_1028_ = lean_unbox(v_era_1027_);
v_res_1029_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatEraNarrow(v_symbols_1026_, v_era_boxed_1028_);
lean_dec_ref(v_symbols_1026_);
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber(lean_object* v_x_1034_){
_start:
{
lean_object* v_natZero_1035_; lean_object* v_intZero_1036_; uint8_t v_isNeg_1037_; lean_object* v_a_1038_; uint8_t v_isZero_1039_; lean_object* v_one_1040_; lean_object* v_n_1041_; uint8_t v_isZero_1042_; 
v_natZero_1035_ = lean_unsigned_to_nat(0u);
v_intZero_1036_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v_isNeg_1037_ = lean_int_dec_lt(v_x_1034_, v_intZero_1036_);
v_a_1038_ = lean_nat_abs(v_x_1034_);
v_isZero_1039_ = lean_nat_dec_eq(v_a_1038_, v_natZero_1035_);
v_one_1040_ = lean_unsigned_to_nat(1u);
v_n_1041_ = lean_nat_sub(v_a_1038_, v_one_1040_);
lean_dec(v_a_1038_);
v_isZero_1042_ = lean_nat_dec_eq(v_n_1041_, v_natZero_1035_);
if (v_isZero_1042_ == 1)
{
lean_object* v___x_1043_; 
lean_dec(v_n_1041_);
v___x_1043_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__0));
return v___x_1043_;
}
else
{
lean_object* v_n_1044_; uint8_t v_isZero_1045_; 
v_n_1044_ = lean_nat_sub(v_n_1041_, v_one_1040_);
lean_dec(v_n_1041_);
v_isZero_1045_ = lean_nat_dec_eq(v_n_1044_, v_natZero_1035_);
if (v_isZero_1045_ == 1)
{
lean_object* v___x_1046_; 
lean_dec(v_n_1044_);
v___x_1046_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__1));
return v___x_1046_;
}
else
{
lean_object* v_n_1047_; uint8_t v_isZero_1048_; 
v_n_1047_ = lean_nat_sub(v_n_1044_, v_one_1040_);
lean_dec(v_n_1044_);
v_isZero_1048_ = lean_nat_dec_eq(v_n_1047_, v_natZero_1035_);
if (v_isZero_1048_ == 1)
{
lean_object* v___x_1049_; 
lean_dec(v_n_1047_);
v___x_1049_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__2));
return v___x_1049_;
}
else
{
lean_object* v_n_1050_; uint8_t v_isZero_1051_; lean_object* v___x_1052_; 
v_n_1050_ = lean_nat_sub(v_n_1047_, v_one_1040_);
lean_dec(v_n_1047_);
v_isZero_1051_ = lean_nat_dec_eq(v_n_1050_, v_natZero_1035_);
lean_dec(v_n_1050_);
v___x_1052_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__3));
return v___x_1052_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___boxed(lean_object* v_x_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber(v_x_1053_);
lean_dec(v_x_1053_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterShort(lean_object* v_symbols_1055_, lean_object* v_q_1056_){
_start:
{
lean_object* v_quarterShort_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; 
v_quarterShort_1057_ = lean_ctor_get(v_symbols_1055_, 10);
v___x_1058_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_1059_ = lean_int_add(v_q_1056_, v___x_1058_);
v___x_1060_ = l_Int_toNat(v___x_1059_);
lean_dec(v___x_1059_);
v___x_1061_ = lean_array_fget_borrowed(v_quarterShort_1057_, v___x_1060_);
lean_dec(v___x_1060_);
lean_inc(v___x_1061_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterShort___boxed(lean_object* v_symbols_1062_, lean_object* v_q_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterShort(v_symbols_1062_, v_q_1063_);
lean_dec(v_q_1063_);
lean_dec_ref(v_symbols_1062_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterLong(lean_object* v_symbols_1065_, lean_object* v_q_1066_){
_start:
{
lean_object* v_quarterLong_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; 
v_quarterLong_1067_ = lean_ctor_get(v_symbols_1065_, 11);
v___x_1068_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_1069_ = lean_int_add(v_q_1066_, v___x_1068_);
v___x_1070_ = l_Int_toNat(v___x_1069_);
lean_dec(v___x_1069_);
v___x_1071_ = lean_array_fget_borrowed(v_quarterLong_1067_, v___x_1070_);
lean_dec(v___x_1070_);
lean_inc(v___x_1071_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterLong___boxed(lean_object* v_symbols_1072_, lean_object* v_q_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterLong(v_symbols_1072_, v_q_1073_);
lean_dec(v_q_1073_);
lean_dec_ref(v_symbols_1072_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNarrow(lean_object* v_symbols_1075_, lean_object* v_q_1076_){
_start:
{
lean_object* v_quarterNarrow_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v_quarterNarrow_1077_ = lean_ctor_get(v_symbols_1075_, 12);
v___x_1078_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_1079_ = lean_int_add(v_q_1076_, v___x_1078_);
v___x_1080_ = l_Int_toNat(v___x_1079_);
lean_dec(v___x_1079_);
v___x_1081_ = lean_array_fget_borrowed(v_quarterNarrow_1077_, v___x_1080_);
lean_dec(v___x_1080_);
lean_inc(v___x_1081_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNarrow___boxed(lean_object* v_symbols_1082_, lean_object* v_q_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNarrow(v_symbols_1082_, v_q_1083_);
lean_dec(v_q_1083_);
lean_dec_ref(v_symbols_1082_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerShort(lean_object* v_symbols_1085_, uint8_t v_marker_1086_){
_start:
{
if (v_marker_1086_ == 0)
{
lean_object* v_amShort_1087_; 
v_amShort_1087_ = lean_ctor_get(v_symbols_1085_, 13);
lean_inc_ref(v_amShort_1087_);
return v_amShort_1087_;
}
else
{
lean_object* v_pmShort_1088_; 
v_pmShort_1088_ = lean_ctor_get(v_symbols_1085_, 14);
lean_inc_ref(v_pmShort_1088_);
return v_pmShort_1088_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerShort___boxed(lean_object* v_symbols_1089_, lean_object* v_marker_1090_){
_start:
{
uint8_t v_marker_boxed_1091_; lean_object* v_res_1092_; 
v_marker_boxed_1091_ = lean_unbox(v_marker_1090_);
v_res_1092_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerShort(v_symbols_1089_, v_marker_boxed_1091_);
lean_dec_ref(v_symbols_1089_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerLong(lean_object* v_symbols_1093_, uint8_t v_marker_1094_){
_start:
{
if (v_marker_1094_ == 0)
{
lean_object* v_amLong_1095_; 
v_amLong_1095_ = lean_ctor_get(v_symbols_1093_, 15);
lean_inc_ref(v_amLong_1095_);
return v_amLong_1095_;
}
else
{
lean_object* v_pmLong_1096_; 
v_pmLong_1096_ = lean_ctor_get(v_symbols_1093_, 16);
lean_inc_ref(v_pmLong_1096_);
return v_pmLong_1096_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerLong___boxed(lean_object* v_symbols_1097_, lean_object* v_marker_1098_){
_start:
{
uint8_t v_marker_boxed_1099_; lean_object* v_res_1100_; 
v_marker_boxed_1099_ = lean_unbox(v_marker_1098_);
v_res_1100_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerLong(v_symbols_1097_, v_marker_boxed_1099_);
lean_dec_ref(v_symbols_1097_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerNarrow(lean_object* v_symbols_1101_, uint8_t v_marker_1102_){
_start:
{
if (v_marker_1102_ == 0)
{
lean_object* v_amNarrow_1103_; 
v_amNarrow_1103_ = lean_ctor_get(v_symbols_1101_, 17);
lean_inc_ref(v_amNarrow_1103_);
return v_amNarrow_1103_;
}
else
{
lean_object* v_pmNarrow_1104_; 
v_pmNarrow_1104_ = lean_ctor_get(v_symbols_1101_, 18);
lean_inc_ref(v_pmNarrow_1104_);
return v_pmNarrow_1104_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerNarrow___boxed(lean_object* v_symbols_1105_, lean_object* v_marker_1106_){
_start:
{
uint8_t v_marker_boxed_1107_; lean_object* v_res_1108_; 
v_marker_boxed_1107_ = lean_unbox(v_marker_1106_);
v_res_1108_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerNarrow(v_symbols_1105_, v_marker_boxed_1107_);
lean_dec_ref(v_symbols_1105_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatDayPeriod(lean_object* v_dp_1109_, uint8_t v_period_1110_){
_start:
{
switch(v_period_1110_)
{
case 0:
{
lean_object* v_am_1111_; 
v_am_1111_ = lean_ctor_get(v_dp_1109_, 0);
lean_inc_ref(v_am_1111_);
return v_am_1111_;
}
case 1:
{
lean_object* v_pm_1112_; 
v_pm_1112_ = lean_ctor_get(v_dp_1109_, 1);
lean_inc_ref(v_pm_1112_);
return v_pm_1112_;
}
case 2:
{
lean_object* v_noon_1113_; 
v_noon_1113_ = lean_ctor_get(v_dp_1109_, 2);
lean_inc_ref(v_noon_1113_);
return v_noon_1113_;
}
default: 
{
lean_object* v_midnight_1114_; 
v_midnight_1114_ = lean_ctor_get(v_dp_1109_, 3);
lean_inc_ref(v_midnight_1114_);
return v_midnight_1114_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatDayPeriod___boxed(lean_object* v_dp_1115_, lean_object* v_period_1116_){
_start:
{
uint8_t v_period_boxed_1117_; lean_object* v_res_1118_; 
v_period_boxed_1117_ = lean_unbox(v_period_1116_);
v_res_1118_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatDayPeriod(v_dp_1115_, v_period_boxed_1117_);
lean_dec_ref(v_dp_1115_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodIndex(uint8_t v_x_1119_){
_start:
{
switch(v_x_1119_)
{
case 0:
{
lean_object* v___x_1120_; 
v___x_1120_ = lean_unsigned_to_nat(0u);
return v___x_1120_;
}
case 1:
{
lean_object* v___x_1121_; 
v___x_1121_ = lean_unsigned_to_nat(1u);
return v___x_1121_;
}
case 2:
{
lean_object* v___x_1122_; 
v___x_1122_ = lean_unsigned_to_nat(2u);
return v___x_1122_;
}
case 3:
{
lean_object* v___x_1123_; 
v___x_1123_ = lean_unsigned_to_nat(3u);
return v___x_1123_;
}
case 4:
{
lean_object* v___x_1124_; 
v___x_1124_ = lean_unsigned_to_nat(4u);
return v___x_1124_;
}
default: 
{
lean_object* v___x_1125_; 
v___x_1125_ = lean_unsigned_to_nat(5u);
return v___x_1125_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodIndex___boxed(lean_object* v_x_1126_){
_start:
{
uint8_t v_x_112__boxed_1127_; lean_object* v_res_1128_; 
v_x_112__boxed_1127_ = lean_unbox(v_x_1126_);
v_res_1128_ = l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodIndex(v_x_112__boxed_1127_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatExtendedDayPeriod(lean_object* v_arr_1129_, uint8_t v_period_1130_){
_start:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodIndex(v_period_1130_);
v___x_1132_ = lean_array_fget_borrowed(v_arr_1129_, v___x_1131_);
lean_dec(v___x_1131_);
lean_inc(v___x_1132_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatExtendedDayPeriod___boxed(lean_object* v_arr_1133_, lean_object* v_period_1134_){
_start:
{
uint8_t v_period_boxed_1135_; lean_object* v_res_1136_; 
v_period_boxed_1135_ = lean_unbox(v_period_1134_);
v_res_1136_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatExtendedDayPeriod(v_arr_1133_, v_period_boxed_1135_);
lean_dec_ref(v_arr_1133_);
return v_res_1136_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_toSigned(lean_object* v_data_1138_){
_start:
{
lean_object* v___x_1139_; uint8_t v___x_1140_; 
v___x_1139_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1140_ = lean_int_dec_lt(v_data_1138_, v___x_1139_);
if (v___x_1140_ == 0)
{
lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1141_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0));
v___x_1142_ = l_Int_repr(v_data_1138_);
v___x_1143_ = lean_string_append(v___x_1141_, v___x_1142_);
lean_dec_ref(v___x_1142_);
return v___x_1143_;
}
else
{
lean_object* v___x_1144_; 
v___x_1144_ = l_Int_repr(v_data_1138_);
return v___x_1144_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___boxed(lean_object* v_data_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l___private_Std_Time_Format_Basic_0__Std_Time_toSigned(v_data_1145_);
lean_dec(v_data_1145_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorIdx___impl(uint8_t v_x_1147_){
_start:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1148_ = lean_box(v_x_1147_);
v___x_1149_ = lean_obj_tag_nat(v___x_1148_);
lean_dec(v___x_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorIdx___impl___boxed(lean_object* v_x_1150_){
_start:
{
uint8_t v_x_4__boxed_1151_; lean_object* v_res_1152_; 
v_x_4__boxed_1151_ = lean_unbox(v_x_1150_);
v_res_1152_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorIdx___impl(v_x_4__boxed_1151_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___redArg(lean_object* v_k_1153_){
_start:
{
lean_inc(v_k_1153_);
return v_k_1153_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___redArg___boxed(lean_object* v_k_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___redArg(v_k_1154_);
lean_dec(v_k_1154_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim(lean_object* v_motive_1156_, lean_object* v_ctorIdx_1157_, uint8_t v_t_1158_, lean_object* v_h_1159_, lean_object* v_k_1160_){
_start:
{
lean_inc(v_k_1160_);
return v_k_1160_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___boxed(lean_object* v_motive_1161_, lean_object* v_ctorIdx_1162_, lean_object* v_t_1163_, lean_object* v_h_1164_, lean_object* v_k_1165_){
_start:
{
uint8_t v_t_boxed_1166_; lean_object* v_res_1167_; 
v_t_boxed_1166_ = lean_unbox(v_t_1163_);
v_res_1167_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim(v_motive_1161_, v_ctorIdx_1162_, v_t_boxed_1166_, v_h_1164_, v_k_1165_);
lean_dec(v_k_1165_);
lean_dec(v_ctorIdx_1162_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___redArg(lean_object* v_yes_1168_){
_start:
{
lean_inc(v_yes_1168_);
return v_yes_1168_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___redArg___boxed(lean_object* v_yes_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___redArg(v_yes_1169_);
lean_dec(v_yes_1169_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim(lean_object* v_motive_1171_, uint8_t v_t_1172_, lean_object* v_h_1173_, lean_object* v_yes_1174_){
_start:
{
lean_inc(v_yes_1174_);
return v_yes_1174_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___boxed(lean_object* v_motive_1175_, lean_object* v_t_1176_, lean_object* v_h_1177_, lean_object* v_yes_1178_){
_start:
{
uint8_t v_t_boxed_1179_; lean_object* v_res_1180_; 
v_t_boxed_1179_ = lean_unbox(v_t_1176_);
v_res_1180_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim(v_motive_1175_, v_t_boxed_1179_, v_h_1177_, v_yes_1178_);
lean_dec(v_yes_1178_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___redArg(lean_object* v_no_1181_){
_start:
{
lean_inc(v_no_1181_);
return v_no_1181_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___redArg___boxed(lean_object* v_no_1182_){
_start:
{
lean_object* v_res_1183_; 
v_res_1183_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___redArg(v_no_1182_);
lean_dec(v_no_1182_);
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim(lean_object* v_motive_1184_, uint8_t v_t_1185_, lean_object* v_h_1186_, lean_object* v_no_1187_){
_start:
{
lean_inc(v_no_1187_);
return v_no_1187_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___boxed(lean_object* v_motive_1188_, lean_object* v_t_1189_, lean_object* v_h_1190_, lean_object* v_no_1191_){
_start:
{
uint8_t v_t_boxed_1192_; lean_object* v_res_1193_; 
v_t_boxed_1192_ = lean_unbox(v_t_1189_);
v_res_1193_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim(v_motive_1188_, v_t_boxed_1192_, v_h_1190_, v_no_1191_);
lean_dec(v_no_1191_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___redArg(lean_object* v_optional_1194_){
_start:
{
lean_inc(v_optional_1194_);
return v_optional_1194_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___redArg___boxed(lean_object* v_optional_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___redArg(v_optional_1195_);
lean_dec(v_optional_1195_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim(lean_object* v_motive_1197_, uint8_t v_t_1198_, lean_object* v_h_1199_, lean_object* v_optional_1200_){
_start:
{
lean_inc(v_optional_1200_);
return v_optional_1200_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___boxed(lean_object* v_motive_1201_, lean_object* v_t_1202_, lean_object* v_h_1203_, lean_object* v_optional_1204_){
_start:
{
uint8_t v_t_boxed_1205_; lean_object* v_res_1206_; 
v_t_boxed_1205_ = lean_unbox(v_t_1202_);
v_res_1206_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim(v_motive_1201_, v_t_boxed_1205_, v_h_1203_, v_optional_1204_);
lean_dec(v_optional_1204_);
return v_res_1206_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq(uint8_t v_x_1207_, uint8_t v_y_1208_){
_start:
{
lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; uint8_t v___x_1213_; 
v___x_1209_ = lean_box(v_x_1207_);
v___x_1210_ = lean_obj_tag_nat(v___x_1209_);
lean_dec(v___x_1209_);
v___x_1211_ = lean_box(v_y_1208_);
v___x_1212_ = lean_obj_tag_nat(v___x_1211_);
lean_dec(v___x_1211_);
v___x_1213_ = lean_nat_dec_eq(v___x_1210_, v___x_1212_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq___boxed(lean_object* v_x_1214_, lean_object* v_y_1215_){
_start:
{
uint8_t v_x_24__boxed_1216_; uint8_t v_y_25__boxed_1217_; uint8_t v_res_1218_; lean_object* v_r_1219_; 
v_x_24__boxed_1216_ = lean_unbox(v_x_1214_);
v_y_25__boxed_1217_ = lean_unbox(v_y_1215_);
v_res_1218_ = l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq(v_x_24__boxed_1216_, v_y_25__boxed_1217_);
v_r_1219_ = lean_box(v_res_1218_);
return v_r_1219_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_toIsoString_spec__1(lean_object* v_a_1222_){
_start:
{
lean_object* v___x_1223_; 
v___x_1223_ = l_Rat_ofInt(v_a_1222_);
return v___x_1223_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1(void){
_start:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1225_ = lean_unsigned_to_nat(1000000000u);
v___x_1226_ = lean_nat_to_int(v___x_1225_);
return v___x_1226_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(lean_object* v_offset_1227_, uint8_t v_withMinutes_1228_, uint8_t v_withSeconds_1229_, uint8_t v_colon_1230_, uint8_t v_padHour_1231_){
_start:
{
lean_object* v___y_1233_; uint32_t v___y_1234_; lean_object* v___y_1235_; lean_object* v___y_1236_; lean_object* v___y_1237_; lean_object* v___y_1244_; lean_object* v___y_1245_; uint32_t v___y_1246_; lean_object* v___y_1247_; lean_object* v___y_1251_; uint8_t v___y_1252_; uint32_t v___y_1253_; lean_object* v___y_1254_; lean_object* v___y_1255_; lean_object* v___y_1263_; lean_object* v___y_1264_; uint8_t v___y_1265_; uint32_t v___y_1266_; lean_object* v___y_1267_; lean_object* v___y_1268_; lean_object* v___y_1275_; lean_object* v___y_1276_; uint8_t v___y_1277_; uint32_t v___y_1278_; lean_object* v___y_1279_; lean_object* v___y_1283_; uint32_t v___y_1284_; lean_object* v___y_1285_; lean_object* v___y_1286_; lean_object* v___y_1287_; lean_object* v_fst_1297_; lean_object* v_snd_1298_; lean_object* v___x_1309_; uint8_t v___x_1310_; 
v___x_1309_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1310_ = lean_int_dec_le(v___x_1309_, v_offset_1227_);
if (v___x_1310_ == 0)
{
lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1311_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_1312_ = lean_int_neg(v_offset_1227_);
lean_dec(v_offset_1227_);
v_fst_1297_ = v___x_1311_;
v_snd_1298_ = v___x_1312_;
goto v___jp_1296_;
}
else
{
lean_object* v___x_1313_; 
v___x_1313_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0));
v_fst_1297_ = v___x_1313_;
v_snd_1298_ = v_offset_1227_;
goto v___jp_1296_;
}
v___jp_1232_:
{
lean_object* v_second_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v_second_1238_ = lean_ctor_get(v___y_1236_, 2);
lean_inc(v_second_1238_);
lean_dec_ref(v___y_1236_);
v___x_1239_ = lean_string_append(v___y_1235_, v___y_1237_);
v___x_1240_ = l_Int_repr(v_second_1238_);
lean_dec(v_second_1238_);
v___x_1241_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v___y_1233_, v___y_1234_, v___x_1240_);
lean_dec_ref(v___x_1240_);
v___x_1242_ = lean_string_append(v___x_1239_, v___x_1241_);
lean_dec_ref(v___x_1241_);
return v___x_1242_;
}
v___jp_1243_:
{
if (v_colon_1230_ == 0)
{
lean_object* v___x_1248_; 
v___x_1248_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___y_1233_ = v___y_1244_;
v___y_1234_ = v___y_1246_;
v___y_1235_ = v___y_1245_;
v___y_1236_ = v___y_1247_;
v___y_1237_ = v___x_1248_;
goto v___jp_1232_;
}
else
{
lean_object* v___x_1249_; 
v___x_1249_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__0));
v___y_1233_ = v___y_1244_;
v___y_1234_ = v___y_1246_;
v___y_1235_ = v___y_1245_;
v___y_1236_ = v___y_1247_;
v___y_1237_ = v___x_1249_;
goto v___jp_1232_;
}
}
v___jp_1250_:
{
uint8_t v___x_1256_; 
v___x_1256_ = l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq(v_withSeconds_1229_, v___y_1252_);
if (v___x_1256_ == 0)
{
uint8_t v___x_1257_; uint8_t v___x_1258_; 
v___x_1257_ = 2;
v___x_1258_ = l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq(v_withSeconds_1229_, v___x_1257_);
if (v___x_1258_ == 0)
{
lean_dec_ref(v___y_1254_);
return v___y_1255_;
}
else
{
lean_object* v_second_1259_; lean_object* v___x_1260_; uint8_t v___x_1261_; 
v_second_1259_ = lean_ctor_get(v___y_1254_, 2);
v___x_1260_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1261_ = lean_int_dec_eq(v_second_1259_, v___x_1260_);
if (v___x_1261_ == 0)
{
v___y_1244_ = v___y_1251_;
v___y_1245_ = v___y_1255_;
v___y_1246_ = v___y_1253_;
v___y_1247_ = v___y_1254_;
goto v___jp_1243_;
}
else
{
lean_dec_ref(v___y_1254_);
return v___y_1255_;
}
}
}
else
{
v___y_1244_ = v___y_1251_;
v___y_1245_ = v___y_1255_;
v___y_1246_ = v___y_1253_;
v___y_1247_ = v___y_1254_;
goto v___jp_1243_;
}
}
v___jp_1262_:
{
lean_object* v_minute_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v_minute_1269_ = lean_ctor_get(v___y_1267_, 1);
v___x_1270_ = lean_string_append(v___y_1264_, v___y_1268_);
v___x_1271_ = l_Int_repr(v_minute_1269_);
v___x_1272_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v___y_1263_, v___y_1266_, v___x_1271_);
lean_dec_ref(v___x_1271_);
v___x_1273_ = lean_string_append(v___x_1270_, v___x_1272_);
lean_dec_ref(v___x_1272_);
v___y_1251_ = v___y_1263_;
v___y_1252_ = v___y_1265_;
v___y_1253_ = v___y_1266_;
v___y_1254_ = v___y_1267_;
v___y_1255_ = v___x_1273_;
goto v___jp_1250_;
}
v___jp_1274_:
{
if (v_colon_1230_ == 0)
{
lean_object* v___x_1280_; 
v___x_1280_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___y_1263_ = v___y_1276_;
v___y_1264_ = v___y_1275_;
v___y_1265_ = v___y_1277_;
v___y_1266_ = v___y_1278_;
v___y_1267_ = v___y_1279_;
v___y_1268_ = v___x_1280_;
goto v___jp_1262_;
}
else
{
lean_object* v___x_1281_; 
v___x_1281_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__0));
v___y_1263_ = v___y_1276_;
v___y_1264_ = v___y_1275_;
v___y_1265_ = v___y_1277_;
v___y_1266_ = v___y_1278_;
v___y_1267_ = v___y_1279_;
v___y_1268_ = v___x_1281_;
goto v___jp_1262_;
}
}
v___jp_1282_:
{
lean_object* v_data_1288_; uint8_t v___x_1289_; uint8_t v___x_1290_; 
lean_inc_ref(v___y_1286_);
v_data_1288_ = lean_string_append(v___y_1286_, v___y_1287_);
lean_dec_ref(v___y_1287_);
v___x_1289_ = 0;
v___x_1290_ = l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq(v_withMinutes_1228_, v___x_1289_);
if (v___x_1290_ == 0)
{
uint8_t v___x_1291_; uint8_t v___x_1292_; 
v___x_1291_ = 2;
v___x_1292_ = l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq(v_withMinutes_1228_, v___x_1291_);
if (v___x_1292_ == 0)
{
v___y_1251_ = v___y_1283_;
v___y_1252_ = v___x_1289_;
v___y_1253_ = v___y_1284_;
v___y_1254_ = v___y_1285_;
v___y_1255_ = v_data_1288_;
goto v___jp_1250_;
}
else
{
lean_object* v_minute_1293_; lean_object* v___x_1294_; uint8_t v___x_1295_; 
v_minute_1293_ = lean_ctor_get(v___y_1285_, 1);
v___x_1294_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1295_ = lean_int_dec_eq(v_minute_1293_, v___x_1294_);
if (v___x_1295_ == 0)
{
v___y_1275_ = v_data_1288_;
v___y_1276_ = v___y_1283_;
v___y_1277_ = v___x_1289_;
v___y_1278_ = v___y_1284_;
v___y_1279_ = v___y_1285_;
goto v___jp_1274_;
}
else
{
v___y_1251_ = v___y_1283_;
v___y_1252_ = v___x_1289_;
v___y_1253_ = v___y_1284_;
v___y_1254_ = v___y_1285_;
v___y_1255_ = v_data_1288_;
goto v___jp_1250_;
}
}
}
else
{
v___y_1275_ = v_data_1288_;
v___y_1276_ = v___y_1283_;
v___y_1277_ = v___x_1289_;
v___y_1278_ = v___y_1284_;
v___y_1279_ = v___y_1285_;
goto v___jp_1274_;
}
}
v___jp_1296_:
{
lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v_time_1301_; lean_object* v___x_1302_; uint32_t v___x_1303_; 
v___x_1299_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1);
v___x_1300_ = lean_int_mul(v_snd_1298_, v___x_1299_);
lean_dec(v_snd_1298_);
v_time_1301_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_1300_);
lean_dec(v___x_1300_);
v___x_1302_ = lean_unsigned_to_nat(2u);
v___x_1303_ = 48;
if (v_padHour_1231_ == 0)
{
lean_object* v_hour_1304_; lean_object* v___x_1305_; 
v_hour_1304_ = lean_ctor_get(v_time_1301_, 0);
v___x_1305_ = l_Int_repr(v_hour_1304_);
v___y_1283_ = v___x_1302_;
v___y_1284_ = v___x_1303_;
v___y_1285_ = v_time_1301_;
v___y_1286_ = v_fst_1297_;
v___y_1287_ = v___x_1305_;
goto v___jp_1282_;
}
else
{
lean_object* v_hour_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v_hour_1306_ = lean_ctor_get(v_time_1301_, 0);
v___x_1307_ = l_Int_repr(v_hour_1306_);
v___x_1308_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v___x_1302_, v___x_1303_, v___x_1307_);
lean_dec_ref(v___x_1307_);
v___y_1283_ = v___x_1302_;
v___y_1284_ = v___x_1303_;
v___y_1285_ = v_time_1301_;
v___y_1286_ = v_fst_1297_;
v___y_1287_ = v___x_1308_;
goto v___jp_1282_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___boxed(lean_object* v_offset_1314_, lean_object* v_withMinutes_1315_, lean_object* v_withSeconds_1316_, lean_object* v_colon_1317_, lean_object* v_padHour_1318_){
_start:
{
uint8_t v_withMinutes_boxed_1319_; uint8_t v_withSeconds_boxed_1320_; uint8_t v_colon_boxed_1321_; uint8_t v_padHour_boxed_1322_; lean_object* v_res_1323_; 
v_withMinutes_boxed_1319_ = lean_unbox(v_withMinutes_1315_);
v_withSeconds_boxed_1320_ = lean_unbox(v_withSeconds_1316_);
v_colon_boxed_1321_ = lean_unbox(v_colon_1317_);
v_padHour_boxed_1322_ = lean_unbox(v_padHour_1318_);
v_res_1323_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_offset_1314_, v_withMinutes_boxed_1319_, v_withSeconds_boxed_1320_, v_colon_boxed_1321_, v_padHour_boxed_1322_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_toIsoString_spec__0_spec__0(lean_object* v_a_1324_){
_start:
{
lean_object* v___x_1325_; 
v___x_1325_ = lean_nat_to_int(v_a_1324_);
return v___x_1325_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_toIsoString_spec__0(lean_object* v_a_1326_){
_start:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1327_ = lean_nat_to_int(v_a_1326_);
v___x_1328_ = l_Rat_ofInt(v___x_1327_);
return v___x_1328_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_classifyDayPeriod___lam__0(lean_object* v_minute_1329_, lean_object* v_second_1330_, lean_object* v_00___1331_){
_start:
{
lean_object* v___x_1332_; uint8_t v___x_1333_; 
v___x_1332_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1333_ = lean_int_dec_eq(v_minute_1329_, v___x_1332_);
if (v___x_1333_ == 0)
{
return v___x_1333_;
}
else
{
uint8_t v___x_1334_; 
v___x_1334_ = lean_int_dec_eq(v_second_1330_, v___x_1332_);
return v___x_1334_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_classifyDayPeriod___lam__0___boxed(lean_object* v_minute_1335_, lean_object* v_second_1336_, lean_object* v_00___1337_){
_start:
{
uint8_t v_res_1338_; lean_object* v_r_1339_; 
v_res_1338_ = l_Std_Time_classifyDayPeriod___lam__0(v_minute_1335_, v_second_1336_, v_00___1337_);
lean_dec(v_second_1336_);
lean_dec(v_minute_1335_);
v_r_1339_ = lean_box(v_res_1338_);
return v_r_1339_;
}
}
static lean_object* _init_l_Std_Time_classifyDayPeriod___closed__0(void){
_start:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; 
v___x_1340_ = lean_unsigned_to_nat(12u);
v___x_1341_ = lean_nat_to_int(v___x_1340_);
return v___x_1341_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_classifyDayPeriod(lean_object* v_hour_1342_, lean_object* v_minute_1343_, lean_object* v_second_1344_){
_start:
{
lean_object* v___y_1346_; lean_object* v___x_1356_; uint8_t v___x_1357_; 
v___x_1356_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1357_ = lean_int_dec_eq(v_hour_1342_, v___x_1356_);
if (v___x_1357_ == 0)
{
goto v___jp_1350_;
}
else
{
lean_object* v___x_1358_; uint8_t v___x_1359_; 
v___x_1358_ = lean_box(0);
v___x_1359_ = l_Std_Time_classifyDayPeriod___lam__0(v_minute_1343_, v_second_1344_, v___x_1358_);
if (v___x_1359_ == 0)
{
goto v___jp_1350_;
}
else
{
uint8_t v___x_1360_; 
v___x_1360_ = 3;
return v___x_1360_;
}
}
v___jp_1345_:
{
uint8_t v___x_1347_; 
v___x_1347_ = lean_int_dec_lt(v_hour_1342_, v___y_1346_);
if (v___x_1347_ == 0)
{
uint8_t v___x_1348_; 
v___x_1348_ = 1;
return v___x_1348_;
}
else
{
uint8_t v___x_1349_; 
v___x_1349_ = 0;
return v___x_1349_;
}
}
v___jp_1350_:
{
lean_object* v___x_1351_; uint8_t v___x_1352_; 
v___x_1351_ = lean_obj_once(&l_Std_Time_classifyDayPeriod___closed__0, &l_Std_Time_classifyDayPeriod___closed__0_once, _init_l_Std_Time_classifyDayPeriod___closed__0);
v___x_1352_ = lean_int_dec_eq(v_hour_1342_, v___x_1351_);
if (v___x_1352_ == 0)
{
v___y_1346_ = v___x_1351_;
goto v___jp_1345_;
}
else
{
lean_object* v___x_1353_; uint8_t v___x_1354_; 
v___x_1353_ = lean_box(0);
v___x_1354_ = l_Std_Time_classifyDayPeriod___lam__0(v_minute_1343_, v_second_1344_, v___x_1353_);
if (v___x_1354_ == 0)
{
v___y_1346_ = v___x_1351_;
goto v___jp_1345_;
}
else
{
uint8_t v___x_1355_; 
v___x_1355_ = 2;
return v___x_1355_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_classifyDayPeriod___boxed(lean_object* v_hour_1361_, lean_object* v_minute_1362_, lean_object* v_second_1363_){
_start:
{
uint8_t v_res_1364_; lean_object* v_r_1365_; 
v_res_1364_ = l_Std_Time_classifyDayPeriod(v_hour_1361_, v_minute_1362_, v_second_1363_);
lean_dec(v_second_1363_);
lean_dec(v_minute_1362_);
lean_dec(v_hour_1361_);
v_r_1365_ = lean_box(v_res_1364_);
return v_r_1365_;
}
}
static lean_object* _init_l_Std_Time_classifyExtendedDayPeriod___closed__0(void){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1366_ = lean_unsigned_to_nat(6u);
v___x_1367_ = lean_nat_to_int(v___x_1366_);
return v___x_1367_;
}
}
static lean_object* _init_l_Std_Time_classifyExtendedDayPeriod___closed__1(void){
_start:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1368_ = lean_unsigned_to_nat(18u);
v___x_1369_ = lean_nat_to_int(v___x_1368_);
return v___x_1369_;
}
}
static lean_object* _init_l_Std_Time_classifyExtendedDayPeriod___closed__2(void){
_start:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___x_1370_ = lean_unsigned_to_nat(21u);
v___x_1371_ = lean_nat_to_int(v___x_1370_);
return v___x_1371_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_classifyExtendedDayPeriod(lean_object* v_hour_1372_, lean_object* v_minute_1373_, lean_object* v_second_1374_){
_start:
{
lean_object* v___y_1376_; lean_object* v___x_1395_; uint8_t v___x_1396_; 
v___x_1395_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1396_ = lean_int_dec_eq(v_hour_1372_, v___x_1395_);
if (v___x_1396_ == 0)
{
goto v___jp_1389_;
}
else
{
lean_object* v___x_1397_; uint8_t v___x_1398_; 
v___x_1397_ = lean_box(0);
v___x_1398_ = l_Std_Time_classifyDayPeriod___lam__0(v_minute_1373_, v_second_1374_, v___x_1397_);
if (v___x_1398_ == 0)
{
goto v___jp_1389_;
}
else
{
uint8_t v___x_1399_; 
v___x_1399_ = 0;
return v___x_1399_;
}
}
v___jp_1375_:
{
lean_object* v___x_1377_; uint8_t v___x_1378_; 
v___x_1377_ = lean_obj_once(&l_Std_Time_classifyExtendedDayPeriod___closed__0, &l_Std_Time_classifyExtendedDayPeriod___closed__0_once, _init_l_Std_Time_classifyExtendedDayPeriod___closed__0);
v___x_1378_ = lean_int_dec_lt(v_hour_1372_, v___x_1377_);
if (v___x_1378_ == 0)
{
uint8_t v___x_1379_; 
v___x_1379_ = lean_int_dec_lt(v_hour_1372_, v___y_1376_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; uint8_t v___x_1381_; 
v___x_1380_ = lean_obj_once(&l_Std_Time_classifyExtendedDayPeriod___closed__1, &l_Std_Time_classifyExtendedDayPeriod___closed__1_once, _init_l_Std_Time_classifyExtendedDayPeriod___closed__1);
v___x_1381_ = lean_int_dec_lt(v_hour_1372_, v___x_1380_);
if (v___x_1381_ == 0)
{
lean_object* v___x_1382_; uint8_t v___x_1383_; 
v___x_1382_ = lean_obj_once(&l_Std_Time_classifyExtendedDayPeriod___closed__2, &l_Std_Time_classifyExtendedDayPeriod___closed__2_once, _init_l_Std_Time_classifyExtendedDayPeriod___closed__2);
v___x_1383_ = lean_int_dec_lt(v_hour_1372_, v___x_1382_);
if (v___x_1383_ == 0)
{
uint8_t v___x_1384_; 
v___x_1384_ = 1;
return v___x_1384_;
}
else
{
uint8_t v___x_1385_; 
v___x_1385_ = 5;
return v___x_1385_;
}
}
else
{
uint8_t v___x_1386_; 
v___x_1386_ = 4;
return v___x_1386_;
}
}
else
{
uint8_t v___x_1387_; 
v___x_1387_ = 2;
return v___x_1387_;
}
}
else
{
uint8_t v___x_1388_; 
v___x_1388_ = 1;
return v___x_1388_;
}
}
v___jp_1389_:
{
lean_object* v___x_1390_; uint8_t v___x_1391_; 
v___x_1390_ = lean_obj_once(&l_Std_Time_classifyDayPeriod___closed__0, &l_Std_Time_classifyDayPeriod___closed__0_once, _init_l_Std_Time_classifyDayPeriod___closed__0);
v___x_1391_ = lean_int_dec_eq(v_hour_1372_, v___x_1390_);
if (v___x_1391_ == 0)
{
v___y_1376_ = v___x_1390_;
goto v___jp_1375_;
}
else
{
lean_object* v___x_1392_; uint8_t v___x_1393_; 
v___x_1392_ = lean_box(0);
v___x_1393_ = l_Std_Time_classifyDayPeriod___lam__0(v_minute_1373_, v_second_1374_, v___x_1392_);
if (v___x_1393_ == 0)
{
v___y_1376_ = v___x_1390_;
goto v___jp_1375_;
}
else
{
uint8_t v___x_1394_; 
v___x_1394_ = 3;
return v___x_1394_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_classifyExtendedDayPeriod___boxed(lean_object* v_hour_1400_, lean_object* v_minute_1401_, lean_object* v_second_1402_){
_start:
{
uint8_t v_res_1403_; lean_object* v_r_1404_; 
v_res_1403_ = l_Std_Time_classifyExtendedDayPeriod(v_hour_1400_, v_minute_1401_, v_second_1402_);
lean_dec(v_second_1402_);
lean_dec(v_minute_1401_);
lean_dec(v_hour_1400_);
v_r_1404_ = lean_box(v_res_1403_);
return v_r_1404_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0(void){
_start:
{
lean_object* v___x_1405_; lean_object* v___x_1406_; 
v___x_1405_ = lean_unsigned_to_nat(100u);
v___x_1406_ = lean_nat_to_int(v___x_1405_);
return v___x_1406_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1(void){
_start:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1407_ = lean_unsigned_to_nat(7u);
v___x_1408_ = lean_nat_to_int(v___x_1407_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith(lean_object* v_dateformat_1412_, lean_object* v_modifier_1413_, lean_object* v_data_1414_){
_start:
{
switch(lean_obj_tag(v_modifier_1413_))
{
case 0:
{
uint8_t v_presentation_1415_; 
v_presentation_1415_ = lean_ctor_get_uint8(v_modifier_1413_, 0);
lean_dec_ref_known(v_modifier_1413_, 0);
switch(v_presentation_1415_)
{
case 1:
{
lean_object* v_symbols_1416_; uint8_t v___x_1417_; lean_object* v___x_1418_; 
v_symbols_1416_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1417_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1418_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatEraLong(v_symbols_1416_, v___x_1417_);
return v___x_1418_;
}
case 2:
{
lean_object* v_symbols_1419_; uint8_t v___x_1420_; lean_object* v___x_1421_; 
v_symbols_1419_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1420_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1421_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatEraNarrow(v_symbols_1419_, v___x_1420_);
return v___x_1421_;
}
default: 
{
lean_object* v_symbols_1422_; uint8_t v___x_1423_; lean_object* v___x_1424_; 
v_symbols_1422_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1423_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1424_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatEraShort(v_symbols_1422_, v___x_1423_);
return v___x_1424_;
}
}
}
case 1:
{
lean_object* v_presentation_1425_; 
v_presentation_1425_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1425_);
lean_dec_ref_known(v_modifier_1413_, 1);
switch(lean_obj_tag(v_presentation_1425_))
{
case 0:
{
lean_object* v___x_1426_; uint8_t v___x_1427_; lean_object* v___x_1428_; 
v___x_1426_ = lean_unsigned_to_nat(0u);
v___x_1427_ = 0;
v___x_1428_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1426_, v_data_1414_, v___x_1427_);
return v___x_1428_;
}
case 1:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; uint8_t v___x_1432_; lean_object* v___x_1433_; 
v___x_1429_ = lean_unsigned_to_nat(2u);
v___x_1430_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0);
v___x_1431_ = lean_int_emod(v_data_1414_, v___x_1430_);
lean_dec(v_data_1414_);
v___x_1432_ = 0;
v___x_1433_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1429_, v___x_1431_, v___x_1432_);
return v___x_1433_;
}
case 2:
{
lean_object* v___x_1434_; uint8_t v___x_1435_; lean_object* v___x_1436_; 
v___x_1434_ = lean_unsigned_to_nat(4u);
v___x_1435_ = 0;
v___x_1436_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1434_, v_data_1414_, v___x_1435_);
return v___x_1436_;
}
default: 
{
lean_object* v_num_1437_; uint8_t v___x_1438_; lean_object* v___x_1439_; 
v_num_1437_ = lean_ctor_get(v_presentation_1425_, 0);
lean_inc(v_num_1437_);
lean_dec_ref_known(v_presentation_1425_, 1);
v___x_1438_ = 0;
v___x_1439_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_num_1437_, v_data_1414_, v___x_1438_);
lean_dec(v_num_1437_);
return v___x_1439_;
}
}
}
case 2:
{
lean_object* v_presentation_1440_; lean_object* v___x_1441_; lean_object* v___y_1443_; lean_object* v___x_1457_; uint8_t v___x_1458_; 
v_presentation_1440_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1440_);
lean_dec_ref_known(v_modifier_1413_, 1);
v___x_1441_ = lean_unsigned_to_nat(0u);
v___x_1457_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1458_ = lean_int_dec_le(v_data_1414_, v___x_1457_);
if (v___x_1458_ == 0)
{
v___y_1443_ = v_data_1414_;
goto v___jp_1442_;
}
else
{
lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1459_ = lean_int_neg(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1460_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_1461_ = lean_int_add(v___x_1459_, v___x_1460_);
lean_dec(v___x_1459_);
v___y_1443_ = v___x_1461_;
goto v___jp_1442_;
}
v___jp_1442_:
{
switch(lean_obj_tag(v_presentation_1440_))
{
case 0:
{
uint8_t v___x_1444_; lean_object* v___x_1445_; 
v___x_1444_ = 0;
v___x_1445_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1441_, v___y_1443_, v___x_1444_);
return v___x_1445_;
}
case 1:
{
lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; uint8_t v___x_1449_; lean_object* v___x_1450_; 
v___x_1446_ = lean_unsigned_to_nat(2u);
v___x_1447_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0);
v___x_1448_ = lean_int_emod(v___y_1443_, v___x_1447_);
lean_dec(v___y_1443_);
v___x_1449_ = 0;
v___x_1450_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1446_, v___x_1448_, v___x_1449_);
return v___x_1450_;
}
case 2:
{
lean_object* v___x_1451_; uint8_t v___x_1452_; lean_object* v___x_1453_; 
v___x_1451_ = lean_unsigned_to_nat(4u);
v___x_1452_ = 0;
v___x_1453_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1451_, v___y_1443_, v___x_1452_);
return v___x_1453_;
}
default: 
{
lean_object* v_num_1454_; uint8_t v___x_1455_; lean_object* v___x_1456_; 
v_num_1454_ = lean_ctor_get(v_presentation_1440_, 0);
lean_inc(v_num_1454_);
lean_dec_ref_known(v_presentation_1440_, 1);
v___x_1455_ = 0;
v___x_1456_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_num_1454_, v___y_1443_, v___x_1455_);
lean_dec(v_num_1454_);
return v___x_1456_;
}
}
}
}
case 3:
{
lean_object* v_presentation_1462_; lean_object* v_snd_1463_; uint8_t v___x_1464_; lean_object* v___x_1465_; 
v_presentation_1462_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1462_);
lean_dec_ref_known(v_modifier_1413_, 1);
v_snd_1463_ = lean_ctor_get(v_data_1414_, 1);
lean_inc(v_snd_1463_);
lean_dec(v_data_1414_);
v___x_1464_ = 0;
v___x_1465_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1462_, v_snd_1463_, v___x_1464_);
lean_dec(v_presentation_1462_);
return v___x_1465_;
}
case 4:
{
lean_object* v_presentation_1466_; 
v_presentation_1466_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc_ref(v_presentation_1466_);
lean_dec_ref_known(v_modifier_1413_, 1);
if (lean_obj_tag(v_presentation_1466_) == 0)
{
lean_object* v_val_1467_; uint8_t v___x_1468_; lean_object* v___x_1469_; 
v_val_1467_ = lean_ctor_get(v_presentation_1466_, 0);
lean_inc(v_val_1467_);
lean_dec_ref_known(v_presentation_1466_, 1);
v___x_1468_ = 0;
v___x_1469_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1467_, v_data_1414_, v___x_1468_);
lean_dec(v_val_1467_);
return v___x_1469_;
}
else
{
lean_object* v_val_1470_; uint8_t v___x_1471_; 
v_val_1470_ = lean_ctor_get(v_presentation_1466_, 0);
lean_inc(v_val_1470_);
lean_dec_ref_known(v_presentation_1466_, 1);
v___x_1471_ = lean_unbox(v_val_1470_);
lean_dec(v_val_1470_);
switch(v___x_1471_)
{
case 1:
{
lean_object* v_symbols_1472_; lean_object* v___x_1473_; 
v_symbols_1472_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1473_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong(v_symbols_1472_, v_data_1414_);
lean_dec(v_data_1414_);
return v___x_1473_;
}
case 2:
{
lean_object* v_symbols_1474_; lean_object* v___x_1475_; 
v_symbols_1474_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1475_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthNarrow(v_symbols_1474_, v_data_1414_);
lean_dec(v_data_1414_);
return v___x_1475_;
}
default: 
{
lean_object* v_symbols_1476_; lean_object* v___x_1477_; 
v_symbols_1476_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1477_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthShort(v_symbols_1476_, v_data_1414_);
lean_dec(v_data_1414_);
return v___x_1477_;
}
}
}
}
case 5:
{
lean_object* v_presentation_1478_; 
v_presentation_1478_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc_ref(v_presentation_1478_);
lean_dec_ref_known(v_modifier_1413_, 1);
if (lean_obj_tag(v_presentation_1478_) == 0)
{
lean_object* v_val_1479_; uint8_t v___x_1480_; lean_object* v___x_1481_; 
v_val_1479_ = lean_ctor_get(v_presentation_1478_, 0);
lean_inc(v_val_1479_);
lean_dec_ref_known(v_presentation_1478_, 1);
v___x_1480_ = 0;
v___x_1481_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1479_, v_data_1414_, v___x_1480_);
lean_dec(v_val_1479_);
return v___x_1481_;
}
else
{
lean_object* v_val_1482_; uint8_t v___x_1483_; 
v_val_1482_ = lean_ctor_get(v_presentation_1478_, 0);
lean_inc(v_val_1482_);
lean_dec_ref_known(v_presentation_1478_, 1);
v___x_1483_ = lean_unbox(v_val_1482_);
lean_dec(v_val_1482_);
switch(v___x_1483_)
{
case 1:
{
lean_object* v_symbols_1484_; lean_object* v___x_1485_; 
v_symbols_1484_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1485_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong(v_symbols_1484_, v_data_1414_);
lean_dec(v_data_1414_);
return v___x_1485_;
}
case 2:
{
lean_object* v_symbols_1486_; lean_object* v___x_1487_; 
v_symbols_1486_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1487_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthNarrow(v_symbols_1486_, v_data_1414_);
lean_dec(v_data_1414_);
return v___x_1487_;
}
default: 
{
lean_object* v_symbols_1488_; lean_object* v___x_1489_; 
v_symbols_1488_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1489_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthShort(v_symbols_1488_, v_data_1414_);
lean_dec(v_data_1414_);
return v___x_1489_;
}
}
}
}
case 6:
{
lean_object* v_presentation_1490_; uint8_t v___x_1491_; lean_object* v___x_1492_; 
v_presentation_1490_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1490_);
lean_dec_ref_known(v_modifier_1413_, 1);
v___x_1491_ = 0;
v___x_1492_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1490_, v_data_1414_, v___x_1491_);
lean_dec(v_presentation_1490_);
return v___x_1492_;
}
case 7:
{
lean_object* v_presentation_1493_; 
v_presentation_1493_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc_ref(v_presentation_1493_);
lean_dec_ref_known(v_modifier_1413_, 1);
if (lean_obj_tag(v_presentation_1493_) == 0)
{
lean_object* v_val_1494_; uint8_t v___x_1495_; lean_object* v___x_1496_; 
v_val_1494_ = lean_ctor_get(v_presentation_1493_, 0);
lean_inc(v_val_1494_);
lean_dec_ref_known(v_presentation_1493_, 1);
v___x_1495_ = 0;
v___x_1496_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1494_, v_data_1414_, v___x_1495_);
lean_dec(v_val_1494_);
return v___x_1496_;
}
else
{
lean_object* v_val_1497_; uint8_t v___x_1498_; 
v_val_1497_ = lean_ctor_get(v_presentation_1493_, 0);
lean_inc(v_val_1497_);
lean_dec_ref_known(v_presentation_1493_, 1);
v___x_1498_ = lean_unbox(v_val_1497_);
lean_dec(v_val_1497_);
switch(v___x_1498_)
{
case 0:
{
lean_object* v_symbols_1499_; lean_object* v___x_1500_; 
v_symbols_1499_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1500_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterShort(v_symbols_1499_, v_data_1414_);
lean_dec(v_data_1414_);
return v___x_1500_;
}
case 1:
{
lean_object* v_symbols_1501_; lean_object* v___x_1502_; 
v_symbols_1501_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1502_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterLong(v_symbols_1501_, v_data_1414_);
lean_dec(v_data_1414_);
return v___x_1502_;
}
case 2:
{
lean_object* v_symbols_1503_; lean_object* v___x_1504_; 
v_symbols_1503_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1504_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNarrow(v_symbols_1503_, v_data_1414_);
lean_dec(v_data_1414_);
return v___x_1504_;
}
default: 
{
lean_object* v___x_1505_; 
v___x_1505_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber(v_data_1414_);
lean_dec(v_data_1414_);
return v___x_1505_;
}
}
}
}
case 8:
{
lean_object* v_presentation_1506_; 
v_presentation_1506_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc_ref(v_presentation_1506_);
lean_dec_ref_known(v_modifier_1413_, 1);
if (lean_obj_tag(v_presentation_1506_) == 0)
{
lean_object* v_val_1507_; uint8_t v___x_1508_; lean_object* v___x_1509_; 
v_val_1507_ = lean_ctor_get(v_presentation_1506_, 0);
lean_inc(v_val_1507_);
lean_dec_ref_known(v_presentation_1506_, 1);
v___x_1508_ = 0;
v___x_1509_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1507_, v_data_1414_, v___x_1508_);
lean_dec(v_val_1507_);
return v___x_1509_;
}
else
{
lean_object* v_val_1510_; uint8_t v___x_1511_; 
v_val_1510_ = lean_ctor_get(v_presentation_1506_, 0);
lean_inc(v_val_1510_);
lean_dec_ref_known(v_presentation_1506_, 1);
v___x_1511_ = lean_unbox(v_val_1510_);
lean_dec(v_val_1510_);
switch(v___x_1511_)
{
case 0:
{
lean_object* v_symbols_1512_; lean_object* v___x_1513_; 
v_symbols_1512_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1513_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterShort(v_symbols_1512_, v_data_1414_);
lean_dec(v_data_1414_);
return v___x_1513_;
}
case 1:
{
lean_object* v_symbols_1514_; lean_object* v___x_1515_; 
v_symbols_1514_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1515_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterLong(v_symbols_1514_, v_data_1414_);
lean_dec(v_data_1414_);
return v___x_1515_;
}
case 2:
{
lean_object* v_symbols_1516_; lean_object* v___x_1517_; 
v_symbols_1516_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1517_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNarrow(v_symbols_1516_, v_data_1414_);
lean_dec(v_data_1414_);
return v___x_1517_;
}
default: 
{
lean_object* v___x_1518_; 
v___x_1518_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber(v_data_1414_);
lean_dec(v_data_1414_);
return v___x_1518_;
}
}
}
}
case 9:
{
lean_object* v_presentation_1519_; lean_object* v___x_1520_; lean_object* v___y_1522_; lean_object* v___x_1536_; uint8_t v___x_1537_; 
v_presentation_1519_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1519_);
lean_dec_ref_known(v_modifier_1413_, 1);
v___x_1520_ = lean_unsigned_to_nat(0u);
v___x_1536_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1537_ = lean_int_dec_le(v_data_1414_, v___x_1536_);
if (v___x_1537_ == 0)
{
v___y_1522_ = v_data_1414_;
goto v___jp_1521_;
}
else
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1538_ = lean_int_neg(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1539_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_1540_ = lean_int_add(v___x_1538_, v___x_1539_);
lean_dec(v___x_1538_);
v___y_1522_ = v___x_1540_;
goto v___jp_1521_;
}
v___jp_1521_:
{
switch(lean_obj_tag(v_presentation_1519_))
{
case 0:
{
uint8_t v___x_1523_; lean_object* v___x_1524_; 
v___x_1523_ = 0;
v___x_1524_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1520_, v___y_1522_, v___x_1523_);
return v___x_1524_;
}
case 1:
{
lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; uint8_t v___x_1528_; lean_object* v___x_1529_; 
v___x_1525_ = lean_unsigned_to_nat(2u);
v___x_1526_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0);
v___x_1527_ = lean_int_emod(v___y_1522_, v___x_1526_);
lean_dec(v___y_1522_);
v___x_1528_ = 0;
v___x_1529_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1525_, v___x_1527_, v___x_1528_);
return v___x_1529_;
}
case 2:
{
lean_object* v___x_1530_; uint8_t v___x_1531_; lean_object* v___x_1532_; 
v___x_1530_ = lean_unsigned_to_nat(4u);
v___x_1531_ = 0;
v___x_1532_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1530_, v___y_1522_, v___x_1531_);
return v___x_1532_;
}
default: 
{
lean_object* v_num_1533_; uint8_t v___x_1534_; lean_object* v___x_1535_; 
v_num_1533_ = lean_ctor_get(v_presentation_1519_, 0);
lean_inc(v_num_1533_);
lean_dec_ref_known(v_presentation_1519_, 1);
v___x_1534_ = 0;
v___x_1535_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_num_1533_, v___y_1522_, v___x_1534_);
lean_dec(v_num_1533_);
return v___x_1535_;
}
}
}
}
case 10:
{
lean_object* v_presentation_1541_; uint8_t v___x_1542_; lean_object* v___x_1543_; 
v_presentation_1541_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1541_);
lean_dec_ref_known(v_modifier_1413_, 1);
v___x_1542_ = 0;
v___x_1543_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1541_, v_data_1414_, v___x_1542_);
lean_dec(v_presentation_1541_);
return v___x_1543_;
}
case 11:
{
lean_object* v_presentation_1544_; uint8_t v___x_1545_; lean_object* v___x_1546_; 
v_presentation_1544_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1544_);
lean_dec_ref_known(v_modifier_1413_, 1);
v___x_1545_ = 0;
v___x_1546_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1544_, v_data_1414_, v___x_1545_);
lean_dec(v_presentation_1544_);
return v___x_1546_;
}
case 12:
{
uint8_t v_presentation_1547_; 
v_presentation_1547_ = lean_ctor_get_uint8(v_modifier_1413_, 0);
lean_dec_ref_known(v_modifier_1413_, 0);
switch(v_presentation_1547_)
{
case 0:
{
lean_object* v_symbols_1548_; uint8_t v___x_1549_; lean_object* v___x_1550_; 
v_symbols_1548_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1549_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1550_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayShort(v_symbols_1548_, v___x_1549_);
return v___x_1550_;
}
case 1:
{
lean_object* v_symbols_1551_; uint8_t v___x_1552_; lean_object* v___x_1553_; 
v_symbols_1551_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1552_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1553_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayLong(v_symbols_1551_, v___x_1552_);
return v___x_1553_;
}
case 2:
{
lean_object* v_symbols_1554_; uint8_t v___x_1555_; lean_object* v___x_1556_; 
v_symbols_1554_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1555_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1556_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayNarrow(v_symbols_1554_, v___x_1555_);
return v___x_1556_;
}
default: 
{
lean_object* v_symbols_1557_; uint8_t v___x_1558_; lean_object* v___x_1559_; 
v_symbols_1557_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1558_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1559_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayTwoLetter(v_symbols_1557_, v___x_1558_);
return v___x_1559_;
}
}
}
case 13:
{
lean_object* v_presentation_1560_; 
v_presentation_1560_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc_ref(v_presentation_1560_);
lean_dec_ref_known(v_modifier_1413_, 1);
if (lean_obj_tag(v_presentation_1560_) == 0)
{
lean_object* v_val_1561_; uint8_t v_firstDayOfWeek_1562_; lean_object* v_firstOrd_1563_; uint8_t v___x_1564_; lean_object* v_dayOrd_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; uint8_t v___x_1572_; lean_object* v___x_1573_; 
v_val_1561_ = lean_ctor_get(v_presentation_1560_, 0);
lean_inc(v_val_1561_);
lean_dec_ref_known(v_presentation_1560_, 1);
v_firstDayOfWeek_1562_ = lean_ctor_get_uint8(v_dateformat_1412_, sizeof(void*)*2);
v_firstOrd_1563_ = l_Std_Time_Weekday_toOrdinal(v_firstDayOfWeek_1562_);
v___x_1564_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v_dayOrd_1565_ = l_Std_Time_Weekday_toOrdinal(v___x_1564_);
v___x_1566_ = lean_int_sub(v_dayOrd_1565_, v_firstOrd_1563_);
lean_dec(v_firstOrd_1563_);
lean_dec(v_dayOrd_1565_);
v___x_1567_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1);
v___x_1568_ = lean_int_add(v___x_1566_, v___x_1567_);
lean_dec(v___x_1566_);
v___x_1569_ = lean_int_emod(v___x_1568_, v___x_1567_);
lean_dec(v___x_1568_);
v___x_1570_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_1571_ = lean_int_add(v___x_1569_, v___x_1570_);
lean_dec(v___x_1569_);
v___x_1572_ = 0;
v___x_1573_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1561_, v___x_1571_, v___x_1572_);
lean_dec(v_val_1561_);
return v___x_1573_;
}
else
{
lean_object* v_val_1574_; uint8_t v___x_1575_; 
v_val_1574_ = lean_ctor_get(v_presentation_1560_, 0);
lean_inc(v_val_1574_);
lean_dec_ref_known(v_presentation_1560_, 1);
v___x_1575_ = lean_unbox(v_val_1574_);
lean_dec(v_val_1574_);
switch(v___x_1575_)
{
case 0:
{
lean_object* v_symbols_1576_; uint8_t v___x_1577_; lean_object* v___x_1578_; 
v_symbols_1576_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1577_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1578_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayShort(v_symbols_1576_, v___x_1577_);
return v___x_1578_;
}
case 1:
{
lean_object* v_symbols_1579_; uint8_t v___x_1580_; lean_object* v___x_1581_; 
v_symbols_1579_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1580_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1581_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayLong(v_symbols_1579_, v___x_1580_);
return v___x_1581_;
}
case 2:
{
lean_object* v_symbols_1582_; uint8_t v___x_1583_; lean_object* v___x_1584_; 
v_symbols_1582_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1583_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1584_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayNarrow(v_symbols_1582_, v___x_1583_);
return v___x_1584_;
}
default: 
{
lean_object* v_symbols_1585_; uint8_t v___x_1586_; lean_object* v___x_1587_; 
v_symbols_1585_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1586_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1587_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayTwoLetter(v_symbols_1585_, v___x_1586_);
return v___x_1587_;
}
}
}
}
case 14:
{
lean_object* v_presentation_1588_; 
v_presentation_1588_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc_ref(v_presentation_1588_);
lean_dec_ref_known(v_modifier_1413_, 1);
if (lean_obj_tag(v_presentation_1588_) == 0)
{
lean_object* v_val_1589_; uint8_t v_firstDayOfWeek_1590_; lean_object* v_firstOrd_1591_; uint8_t v___x_1592_; lean_object* v_dayOrd_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; uint8_t v___x_1600_; lean_object* v___x_1601_; 
v_val_1589_ = lean_ctor_get(v_presentation_1588_, 0);
lean_inc(v_val_1589_);
lean_dec_ref_known(v_presentation_1588_, 1);
v_firstDayOfWeek_1590_ = lean_ctor_get_uint8(v_dateformat_1412_, sizeof(void*)*2);
v_firstOrd_1591_ = l_Std_Time_Weekday_toOrdinal(v_firstDayOfWeek_1590_);
v___x_1592_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v_dayOrd_1593_ = l_Std_Time_Weekday_toOrdinal(v___x_1592_);
v___x_1594_ = lean_int_sub(v_dayOrd_1593_, v_firstOrd_1591_);
lean_dec(v_firstOrd_1591_);
lean_dec(v_dayOrd_1593_);
v___x_1595_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1);
v___x_1596_ = lean_int_add(v___x_1594_, v___x_1595_);
lean_dec(v___x_1594_);
v___x_1597_ = lean_int_emod(v___x_1596_, v___x_1595_);
lean_dec(v___x_1596_);
v___x_1598_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_1599_ = lean_int_add(v___x_1597_, v___x_1598_);
lean_dec(v___x_1597_);
v___x_1600_ = 0;
v___x_1601_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1589_, v___x_1599_, v___x_1600_);
lean_dec(v_val_1589_);
return v___x_1601_;
}
else
{
lean_object* v_val_1602_; uint8_t v___x_1603_; 
v_val_1602_ = lean_ctor_get(v_presentation_1588_, 0);
lean_inc(v_val_1602_);
lean_dec_ref_known(v_presentation_1588_, 1);
v___x_1603_ = lean_unbox(v_val_1602_);
lean_dec(v_val_1602_);
switch(v___x_1603_)
{
case 0:
{
lean_object* v_symbols_1604_; uint8_t v___x_1605_; lean_object* v___x_1606_; 
v_symbols_1604_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1605_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1606_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayShort(v_symbols_1604_, v___x_1605_);
return v___x_1606_;
}
case 1:
{
lean_object* v_symbols_1607_; uint8_t v___x_1608_; lean_object* v___x_1609_; 
v_symbols_1607_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1608_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1609_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayLong(v_symbols_1607_, v___x_1608_);
return v___x_1609_;
}
case 2:
{
lean_object* v_symbols_1610_; uint8_t v___x_1611_; lean_object* v___x_1612_; 
v_symbols_1610_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1611_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1612_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayNarrow(v_symbols_1610_, v___x_1611_);
return v___x_1612_;
}
default: 
{
lean_object* v_symbols_1613_; uint8_t v___x_1614_; lean_object* v___x_1615_; 
v_symbols_1613_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1614_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1615_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayTwoLetter(v_symbols_1613_, v___x_1614_);
return v___x_1615_;
}
}
}
}
case 15:
{
lean_object* v_presentation_1616_; uint8_t v___x_1617_; lean_object* v___x_1618_; 
v_presentation_1616_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1616_);
lean_dec_ref_known(v_modifier_1413_, 1);
v___x_1617_ = 0;
v___x_1618_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1616_, v_data_1414_, v___x_1617_);
lean_dec(v_presentation_1616_);
return v___x_1618_;
}
case 16:
{
uint8_t v_presentation_1619_; 
v_presentation_1619_ = lean_ctor_get_uint8(v_modifier_1413_, 0);
lean_dec_ref_known(v_modifier_1413_, 0);
if (v_presentation_1619_ == 2)
{
lean_object* v_symbols_1620_; uint8_t v___x_1621_; lean_object* v___x_1622_; 
v_symbols_1620_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1621_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1622_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerNarrow(v_symbols_1620_, v___x_1621_);
return v___x_1622_;
}
else
{
lean_object* v_symbols_1623_; uint8_t v___x_1624_; lean_object* v___x_1625_; 
v_symbols_1623_ = lean_ctor_get(v_dateformat_1412_, 1);
v___x_1624_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1625_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerShort(v_symbols_1623_, v___x_1624_);
return v___x_1625_;
}
}
case 17:
{
uint8_t v_presentation_1626_; 
v_presentation_1626_ = lean_ctor_get_uint8(v_modifier_1413_, 0);
lean_dec_ref_known(v_modifier_1413_, 0);
switch(v_presentation_1626_)
{
case 1:
{
lean_object* v_symbols_1627_; lean_object* v_dayPeriodLong_1628_; uint8_t v___x_1629_; lean_object* v___x_1630_; 
v_symbols_1627_ = lean_ctor_get(v_dateformat_1412_, 1);
v_dayPeriodLong_1628_ = lean_ctor_get(v_symbols_1627_, 20);
v___x_1629_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1630_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatDayPeriod(v_dayPeriodLong_1628_, v___x_1629_);
return v___x_1630_;
}
case 2:
{
lean_object* v_symbols_1631_; lean_object* v_dayPeriodNarrow_1632_; uint8_t v___x_1633_; lean_object* v___x_1634_; 
v_symbols_1631_ = lean_ctor_get(v_dateformat_1412_, 1);
v_dayPeriodNarrow_1632_ = lean_ctor_get(v_symbols_1631_, 21);
v___x_1633_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1634_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatDayPeriod(v_dayPeriodNarrow_1632_, v___x_1633_);
return v___x_1634_;
}
default: 
{
lean_object* v_symbols_1635_; lean_object* v_dayPeriodShort_1636_; uint8_t v___x_1637_; lean_object* v___x_1638_; 
v_symbols_1635_ = lean_ctor_get(v_dateformat_1412_, 1);
v_dayPeriodShort_1636_ = lean_ctor_get(v_symbols_1635_, 19);
v___x_1637_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1638_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatDayPeriod(v_dayPeriodShort_1636_, v___x_1637_);
return v___x_1638_;
}
}
}
case 18:
{
uint8_t v_presentation_1639_; 
v_presentation_1639_ = lean_ctor_get_uint8(v_modifier_1413_, 0);
lean_dec_ref_known(v_modifier_1413_, 0);
switch(v_presentation_1639_)
{
case 1:
{
lean_object* v_symbols_1640_; lean_object* v_extendedDayPeriodLong_1641_; uint8_t v___x_1642_; lean_object* v___x_1643_; 
v_symbols_1640_ = lean_ctor_get(v_dateformat_1412_, 1);
v_extendedDayPeriodLong_1641_ = lean_ctor_get(v_symbols_1640_, 23);
v___x_1642_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1643_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatExtendedDayPeriod(v_extendedDayPeriodLong_1641_, v___x_1642_);
return v___x_1643_;
}
case 2:
{
lean_object* v_symbols_1644_; lean_object* v_extendedDayPeriodNarrow_1645_; uint8_t v___x_1646_; lean_object* v___x_1647_; 
v_symbols_1644_ = lean_ctor_get(v_dateformat_1412_, 1);
v_extendedDayPeriodNarrow_1645_ = lean_ctor_get(v_symbols_1644_, 24);
v___x_1646_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1647_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatExtendedDayPeriod(v_extendedDayPeriodNarrow_1645_, v___x_1646_);
return v___x_1647_;
}
default: 
{
lean_object* v_symbols_1648_; lean_object* v_extendedDayPeriodShort_1649_; uint8_t v___x_1650_; lean_object* v___x_1651_; 
v_symbols_1648_ = lean_ctor_get(v_dateformat_1412_, 1);
v_extendedDayPeriodShort_1649_ = lean_ctor_get(v_symbols_1648_, 22);
v___x_1650_ = lean_unbox(v_data_1414_);
lean_dec(v_data_1414_);
v___x_1651_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatExtendedDayPeriod(v_extendedDayPeriodShort_1649_, v___x_1650_);
return v___x_1651_;
}
}
}
case 19:
{
lean_object* v_presentation_1652_; uint8_t v___x_1653_; lean_object* v___x_1654_; 
v_presentation_1652_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1652_);
lean_dec_ref_known(v_modifier_1413_, 1);
v___x_1653_ = 0;
v___x_1654_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1652_, v_data_1414_, v___x_1653_);
lean_dec(v_presentation_1652_);
return v___x_1654_;
}
case 20:
{
lean_object* v_presentation_1655_; uint8_t v___x_1656_; lean_object* v___x_1657_; 
v_presentation_1655_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1655_);
lean_dec_ref_known(v_modifier_1413_, 1);
v___x_1656_ = 0;
v___x_1657_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1655_, v_data_1414_, v___x_1656_);
lean_dec(v_presentation_1655_);
return v___x_1657_;
}
case 21:
{
lean_object* v_presentation_1658_; uint8_t v___x_1659_; lean_object* v___x_1660_; 
v_presentation_1658_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1658_);
lean_dec_ref_known(v_modifier_1413_, 1);
v___x_1659_ = 0;
v___x_1660_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1658_, v_data_1414_, v___x_1659_);
lean_dec(v_presentation_1658_);
return v___x_1660_;
}
case 22:
{
lean_object* v_presentation_1661_; uint8_t v___x_1662_; lean_object* v___x_1663_; 
v_presentation_1661_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1661_);
lean_dec_ref_known(v_modifier_1413_, 1);
v___x_1662_ = 0;
v___x_1663_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1661_, v_data_1414_, v___x_1662_);
lean_dec(v_presentation_1661_);
return v___x_1663_;
}
case 23:
{
lean_object* v_presentation_1664_; uint8_t v___x_1665_; lean_object* v___x_1666_; 
v_presentation_1664_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1664_);
lean_dec_ref_known(v_modifier_1413_, 1);
v___x_1665_ = 0;
v___x_1666_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1664_, v_data_1414_, v___x_1665_);
lean_dec(v_presentation_1664_);
return v___x_1666_;
}
case 24:
{
lean_object* v_presentation_1667_; uint8_t v___x_1668_; lean_object* v___x_1669_; 
v_presentation_1667_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1667_);
lean_dec_ref_known(v_modifier_1413_, 1);
v___x_1668_ = 0;
v___x_1669_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1667_, v_data_1414_, v___x_1668_);
lean_dec(v_presentation_1667_);
return v___x_1669_;
}
case 25:
{
lean_object* v_presentation_1670_; 
v_presentation_1670_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1670_);
lean_dec_ref_known(v_modifier_1413_, 1);
if (lean_obj_tag(v_presentation_1670_) == 0)
{
lean_object* v___x_1671_; uint8_t v___x_1672_; lean_object* v___x_1673_; 
v___x_1671_ = lean_unsigned_to_nat(9u);
v___x_1672_ = 0;
v___x_1673_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1671_, v_data_1414_, v___x_1672_);
return v___x_1673_;
}
else
{
lean_object* v_digits_1674_; lean_object* v___x_1675_; uint32_t v___x_1676_; lean_object* v___x_1677_; lean_object* v_s_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
v_digits_1674_ = lean_ctor_get(v_presentation_1670_, 0);
lean_inc(v_digits_1674_);
lean_dec_ref_known(v_presentation_1670_, 1);
v___x_1675_ = lean_unsigned_to_nat(9u);
v___x_1676_ = 48;
v___x_1677_ = l_Int_repr(v_data_1414_);
lean_dec(v_data_1414_);
v_s_1678_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v___x_1675_, v___x_1676_, v___x_1677_);
lean_dec_ref(v___x_1677_);
v___x_1679_ = lean_unsigned_to_nat(0u);
v___x_1680_ = lean_string_utf8_byte_size(v_s_1678_);
lean_inc_ref(v_s_1678_);
v___x_1681_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1681_, 0, v_s_1678_);
lean_ctor_set(v___x_1681_, 1, v___x_1679_);
lean_ctor_set(v___x_1681_, 2, v___x_1680_);
v___x_1682_ = l_String_Slice_Pos_nextn(v___x_1681_, v___x_1679_, v_digits_1674_);
lean_dec_ref_known(v___x_1681_, 3);
v___x_1683_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1683_, 0, v_s_1678_);
lean_ctor_set(v___x_1683_, 1, v___x_1679_);
lean_ctor_set(v___x_1683_, 2, v___x_1682_);
v___x_1684_ = l_String_Slice_toString(v___x_1683_);
lean_dec_ref_known(v___x_1683_, 3);
return v___x_1684_;
}
}
case 26:
{
lean_object* v_presentation_1685_; uint8_t v___x_1686_; lean_object* v___x_1687_; 
v_presentation_1685_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1685_);
lean_dec_ref_known(v_modifier_1413_, 1);
v___x_1686_ = 0;
v___x_1687_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1685_, v_data_1414_, v___x_1686_);
lean_dec(v_presentation_1685_);
return v___x_1687_;
}
case 27:
{
lean_object* v_presentation_1688_; uint8_t v___x_1689_; lean_object* v___x_1690_; 
v_presentation_1688_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1688_);
lean_dec_ref_known(v_modifier_1413_, 1);
v___x_1689_ = 0;
v___x_1690_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1688_, v_data_1414_, v___x_1689_);
lean_dec(v_presentation_1688_);
return v___x_1690_;
}
case 28:
{
lean_object* v_presentation_1691_; uint8_t v___x_1692_; lean_object* v___x_1693_; 
v_presentation_1691_ = lean_ctor_get(v_modifier_1413_, 0);
lean_inc(v_presentation_1691_);
lean_dec_ref_known(v_modifier_1413_, 1);
v___x_1692_ = 0;
v___x_1693_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1691_, v_data_1414_, v___x_1692_);
lean_dec(v_presentation_1691_);
return v___x_1693_;
}
case 29:
{
uint8_t v_presentation_1694_; 
v_presentation_1694_ = lean_ctor_get_uint8(v_modifier_1413_, 0);
lean_dec_ref_known(v_modifier_1413_, 0);
if (v_presentation_1694_ == 0)
{
lean_object* v___x_1695_; 
lean_dec(v_data_1414_);
v___x_1695_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2));
return v___x_1695_;
}
else
{
return v_data_1414_;
}
}
case 32:
{
uint8_t v_presentation_1696_; 
v_presentation_1696_ = lean_ctor_get_uint8(v_modifier_1413_, 0);
lean_dec_ref_known(v_modifier_1413_, 0);
if (v_presentation_1696_ == 0)
{
lean_object* v_fst_1698_; lean_object* v_snd_1699_; lean_object* v___x_1722_; uint8_t v___x_1723_; 
v___x_1722_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1723_ = lean_int_dec_eq(v_data_1414_, v___x_1722_);
if (v___x_1723_ == 0)
{
uint8_t v___x_1724_; 
v___x_1724_ = lean_int_dec_le(v___x_1722_, v_data_1414_);
if (v___x_1724_ == 0)
{
lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1725_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_1726_ = lean_int_neg(v_data_1414_);
lean_dec(v_data_1414_);
v_fst_1698_ = v___x_1725_;
v_snd_1699_ = v___x_1726_;
goto v___jp_1697_;
}
else
{
lean_object* v___x_1727_; 
v___x_1727_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0));
v_fst_1698_ = v___x_1727_;
v_snd_1699_ = v_data_1414_;
goto v___jp_1697_;
}
}
else
{
lean_object* v___x_1728_; 
lean_dec(v_data_1414_);
v___x_1728_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
return v___x_1728_;
}
v___jp_1697_:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v_t_1702_; lean_object* v_hour_1703_; lean_object* v_minute_1704_; lean_object* v___x_1705_; uint8_t v___x_1706_; 
v___x_1700_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1);
v___x_1701_ = lean_int_mul(v_snd_1699_, v___x_1700_);
lean_dec(v_snd_1699_);
v_t_1702_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_1701_);
lean_dec(v___x_1701_);
v_hour_1703_ = lean_ctor_get(v_t_1702_, 0);
lean_inc(v_hour_1703_);
v_minute_1704_ = lean_ctor_get(v_t_1702_, 1);
lean_inc(v_minute_1704_);
lean_dec_ref(v_t_1702_);
v___x_1705_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1706_ = lean_int_dec_eq(v_minute_1704_, v___x_1705_);
if (v___x_1706_ == 0)
{
lean_object* v___x_1707_; uint32_t v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
v___x_1707_ = lean_unsigned_to_nat(2u);
v___x_1708_ = 48;
v___x_1709_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_1710_ = lean_string_append(v___x_1709_, v_fst_1698_);
v___x_1711_ = l_Int_repr(v_hour_1703_);
lean_dec(v_hour_1703_);
v___x_1712_ = lean_string_append(v___x_1710_, v___x_1711_);
lean_dec_ref(v___x_1711_);
v___x_1713_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__0));
v___x_1714_ = lean_string_append(v___x_1712_, v___x_1713_);
v___x_1715_ = l_Int_repr(v_minute_1704_);
lean_dec(v_minute_1704_);
v___x_1716_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v___x_1707_, v___x_1708_, v___x_1715_);
lean_dec_ref(v___x_1715_);
v___x_1717_ = lean_string_append(v___x_1714_, v___x_1716_);
lean_dec_ref(v___x_1716_);
return v___x_1717_;
}
else
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
lean_dec(v_minute_1704_);
v___x_1718_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_1719_ = lean_string_append(v___x_1718_, v_fst_1698_);
v___x_1720_ = l_Int_repr(v_hour_1703_);
lean_dec(v_hour_1703_);
v___x_1721_ = lean_string_append(v___x_1719_, v___x_1720_);
lean_dec_ref(v___x_1720_);
return v___x_1721_;
}
}
}
else
{
lean_object* v___x_1729_; uint8_t v___x_1730_; 
v___x_1729_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1730_ = lean_int_dec_eq(v_data_1414_, v___x_1729_);
if (v___x_1730_ == 0)
{
uint8_t v___x_1731_; lean_object* v___x_1732_; uint8_t v___x_1733_; uint8_t v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1731_ = 1;
v___x_1732_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_1733_ = 0;
v___x_1734_ = 1;
v___x_1735_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1414_, v___x_1733_, v___x_1734_, v___x_1731_, v___x_1731_);
v___x_1736_ = lean_string_append(v___x_1732_, v___x_1735_);
lean_dec_ref(v___x_1735_);
return v___x_1736_;
}
else
{
lean_object* v___x_1737_; 
lean_dec(v_data_1414_);
v___x_1737_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
return v___x_1737_;
}
}
}
case 33:
{
uint8_t v_presentation_1738_; lean_object* v___x_1739_; uint8_t v___x_1740_; 
v_presentation_1738_ = lean_ctor_get_uint8(v_modifier_1413_, 0);
lean_dec_ref_known(v_modifier_1413_, 0);
v___x_1739_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1740_ = lean_int_dec_eq(v_data_1414_, v___x_1739_);
if (v___x_1740_ == 0)
{
uint8_t v___x_1741_; 
v___x_1741_ = 1;
switch(v_presentation_1738_)
{
case 0:
{
uint8_t v___x_1742_; uint8_t v___x_1743_; lean_object* v___x_1744_; 
v___x_1742_ = 2;
v___x_1743_ = 1;
v___x_1744_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1414_, v___x_1742_, v___x_1743_, v___x_1740_, v___x_1741_);
return v___x_1744_;
}
case 1:
{
uint8_t v___x_1745_; uint8_t v___x_1746_; lean_object* v___x_1747_; 
v___x_1745_ = 0;
v___x_1746_ = 1;
v___x_1747_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1414_, v___x_1745_, v___x_1746_, v___x_1740_, v___x_1741_);
return v___x_1747_;
}
case 2:
{
uint8_t v___x_1748_; uint8_t v___x_1749_; lean_object* v___x_1750_; 
v___x_1748_ = 0;
v___x_1749_ = 1;
v___x_1750_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1414_, v___x_1748_, v___x_1749_, v___x_1741_, v___x_1741_);
return v___x_1750_;
}
case 3:
{
uint8_t v___x_1751_; uint8_t v___x_1752_; lean_object* v___x_1753_; 
v___x_1751_ = 0;
v___x_1752_ = 2;
v___x_1753_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1414_, v___x_1751_, v___x_1752_, v___x_1740_, v___x_1741_);
return v___x_1753_;
}
default: 
{
uint8_t v___x_1754_; uint8_t v___x_1755_; lean_object* v___x_1756_; 
v___x_1754_ = 0;
v___x_1755_ = 2;
v___x_1756_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1414_, v___x_1754_, v___x_1755_, v___x_1741_, v___x_1741_);
return v___x_1756_;
}
}
}
else
{
lean_object* v___x_1757_; 
lean_dec(v_data_1414_);
v___x_1757_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4));
return v___x_1757_;
}
}
case 34:
{
uint8_t v_presentation_1758_; 
v_presentation_1758_ = lean_ctor_get_uint8(v_modifier_1413_, 0);
lean_dec_ref_known(v_modifier_1413_, 0);
switch(v_presentation_1758_)
{
case 0:
{
uint8_t v___x_1759_; uint8_t v___x_1760_; uint8_t v___x_1761_; uint8_t v___x_1762_; lean_object* v___x_1763_; 
v___x_1759_ = 2;
v___x_1760_ = 1;
v___x_1761_ = 0;
v___x_1762_ = 1;
v___x_1763_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1414_, v___x_1759_, v___x_1760_, v___x_1761_, v___x_1762_);
return v___x_1763_;
}
case 1:
{
uint8_t v___x_1764_; uint8_t v___x_1765_; uint8_t v___x_1766_; uint8_t v___x_1767_; lean_object* v___x_1768_; 
v___x_1764_ = 0;
v___x_1765_ = 1;
v___x_1766_ = 0;
v___x_1767_ = 1;
v___x_1768_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1414_, v___x_1764_, v___x_1765_, v___x_1766_, v___x_1767_);
return v___x_1768_;
}
case 2:
{
uint8_t v___x_1769_; uint8_t v___x_1770_; uint8_t v___x_1771_; lean_object* v___x_1772_; 
v___x_1769_ = 0;
v___x_1770_ = 1;
v___x_1771_ = 1;
v___x_1772_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1414_, v___x_1769_, v___x_1770_, v___x_1771_, v___x_1771_);
return v___x_1772_;
}
case 3:
{
uint8_t v___x_1773_; uint8_t v___x_1774_; uint8_t v___x_1775_; uint8_t v___x_1776_; lean_object* v___x_1777_; 
v___x_1773_ = 0;
v___x_1774_ = 2;
v___x_1775_ = 0;
v___x_1776_ = 1;
v___x_1777_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1414_, v___x_1773_, v___x_1774_, v___x_1775_, v___x_1776_);
return v___x_1777_;
}
default: 
{
uint8_t v___x_1778_; uint8_t v___x_1779_; uint8_t v___x_1780_; lean_object* v___x_1781_; 
v___x_1778_ = 0;
v___x_1779_ = 2;
v___x_1780_ = 1;
v___x_1781_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1414_, v___x_1778_, v___x_1779_, v___x_1780_, v___x_1780_);
return v___x_1781_;
}
}
}
case 35:
{
uint8_t v_presentation_1782_; 
v_presentation_1782_ = lean_ctor_get_uint8(v_modifier_1413_, 0);
lean_dec_ref_known(v_modifier_1413_, 0);
switch(v_presentation_1782_)
{
case 0:
{
uint8_t v___x_1783_; uint8_t v___x_1784_; uint8_t v___x_1785_; uint8_t v___x_1786_; lean_object* v___x_1787_; 
v___x_1783_ = 0;
v___x_1784_ = 2;
v___x_1785_ = 0;
v___x_1786_ = 1;
v___x_1787_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1414_, v___x_1783_, v___x_1784_, v___x_1785_, v___x_1786_);
return v___x_1787_;
}
case 1:
{
lean_object* v___x_1788_; uint8_t v___x_1789_; 
v___x_1788_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1789_ = lean_int_dec_eq(v_data_1414_, v___x_1788_);
if (v___x_1789_ == 0)
{
lean_object* v___x_1790_; uint8_t v___x_1791_; uint8_t v___x_1792_; uint8_t v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1790_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_1791_ = 0;
v___x_1792_ = 1;
v___x_1793_ = 1;
v___x_1794_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1414_, v___x_1791_, v___x_1792_, v___x_1793_, v___x_1793_);
v___x_1795_ = lean_string_append(v___x_1790_, v___x_1794_);
lean_dec_ref(v___x_1794_);
return v___x_1795_;
}
else
{
lean_object* v___x_1796_; 
lean_dec(v_data_1414_);
v___x_1796_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
return v___x_1796_;
}
}
default: 
{
lean_object* v___x_1797_; uint8_t v___x_1798_; 
v___x_1797_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1798_ = lean_int_dec_eq(v_data_1414_, v___x_1797_);
if (v___x_1798_ == 0)
{
uint8_t v___x_1799_; uint8_t v___x_1800_; uint8_t v___x_1801_; lean_object* v___x_1802_; 
v___x_1799_ = 1;
v___x_1800_ = 0;
v___x_1801_ = 2;
v___x_1802_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1414_, v___x_1800_, v___x_1801_, v___x_1799_, v___x_1799_);
return v___x_1802_;
}
else
{
lean_object* v___x_1803_; 
lean_dec(v_data_1414_);
v___x_1803_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4));
return v___x_1803_;
}
}
}
}
default: 
{
lean_dec_ref(v_modifier_1413_);
return v_data_1414_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___boxed(lean_object* v_dateformat_1804_, lean_object* v_modifier_1805_, lean_object* v_data_1806_){
_start:
{
lean_object* v_res_1807_; 
v_res_1807_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWith(v_dateformat_1804_, v_modifier_1805_, v_data_1806_);
lean_dec_ref(v_dateformat_1804_);
return v_res_1807_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0(void){
_start:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1808_ = lean_unsigned_to_nat(4u);
v___x_1809_ = lean_nat_to_int(v___x_1808_);
return v___x_1809_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1(void){
_start:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1810_ = lean_unsigned_to_nat(400u);
v___x_1811_ = lean_nat_to_int(v___x_1810_);
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier(lean_object* v_modifier_1812_, lean_object* v_dateformat_1813_, lean_object* v_date_1814_){
_start:
{
lean_object* v_month_1816_; lean_object* v_day_1817_; uint8_t v___y_1818_; uint8_t v___y_1819_; uint8_t v_firstDayOfWeek_1824_; lean_object* v_minimalDaysInFirstWeek_1825_; lean_object* v_date_1826_; lean_object* v_timezone_1827_; uint8_t v___y_1829_; 
v_firstDayOfWeek_1824_ = lean_ctor_get_uint8(v_dateformat_1813_, sizeof(void*)*2);
v_minimalDaysInFirstWeek_1825_ = lean_ctor_get(v_dateformat_1813_, 0);
v_date_1826_ = lean_ctor_get(v_date_1814_, 0);
v_timezone_1827_ = lean_ctor_get(v_date_1814_, 3);
switch(lean_obj_tag(v_modifier_1812_))
{
case 0:
{
lean_object* v___x_1862_; lean_object* v_date_1863_; lean_object* v_year_1864_; uint8_t v___x_1865_; lean_object* v___x_1866_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1862_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_date_1863_ = lean_ctor_get(v___x_1862_, 0);
lean_inc_ref(v_date_1863_);
lean_dec(v___x_1862_);
v_year_1864_ = lean_ctor_get(v_date_1863_, 0);
lean_inc(v_year_1864_);
lean_dec_ref(v_date_1863_);
v___x_1865_ = l_Std_Time_Year_Offset_era(v_year_1864_);
lean_dec(v_year_1864_);
v___x_1866_ = lean_box(v___x_1865_);
return v___x_1866_;
}
case 1:
{
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
goto v___jp_1858_;
}
case 2:
{
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
goto v___jp_1858_;
}
case 3:
{
lean_object* v___x_1867_; lean_object* v_date_1868_; lean_object* v_year_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; uint8_t v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; uint8_t v___x_1876_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1867_ = lean_thunk_get_own(v_date_1826_);
v_date_1868_ = lean_ctor_get(v___x_1867_, 0);
lean_inc_ref(v_date_1868_);
lean_dec(v___x_1867_);
v_year_1869_ = lean_ctor_get(v_date_1868_, 0);
lean_inc(v_year_1869_);
lean_dec_ref(v_date_1868_);
v___x_1870_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0);
v___x_1871_ = lean_int_mod(v_year_1869_, v___x_1870_);
v___x_1872_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1873_ = lean_int_dec_eq(v___x_1871_, v___x_1872_);
lean_dec(v___x_1871_);
v___x_1874_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0);
v___x_1875_ = lean_int_mod(v_year_1869_, v___x_1874_);
v___x_1876_ = lean_int_dec_eq(v___x_1875_, v___x_1872_);
lean_dec(v___x_1875_);
if (v___x_1876_ == 0)
{
lean_dec(v_year_1869_);
v___y_1829_ = v___x_1873_;
goto v___jp_1828_;
}
else
{
if (v___x_1873_ == 0)
{
lean_dec(v_year_1869_);
v___y_1829_ = v___x_1873_;
goto v___jp_1828_;
}
else
{
lean_object* v___x_1877_; lean_object* v___x_1878_; uint8_t v___x_1879_; 
v___x_1877_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1);
v___x_1878_ = lean_int_mod(v_year_1869_, v___x_1877_);
lean_dec(v_year_1869_);
v___x_1879_ = lean_int_dec_eq(v___x_1878_, v___x_1872_);
lean_dec(v___x_1878_);
v___y_1829_ = v___x_1879_;
goto v___jp_1828_;
}
}
}
case 4:
{
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
goto v___jp_1854_;
}
case 5:
{
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
goto v___jp_1854_;
}
case 6:
{
lean_object* v___x_1880_; lean_object* v_date_1881_; lean_object* v_day_1882_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1880_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_date_1881_ = lean_ctor_get(v___x_1880_, 0);
lean_inc_ref(v_date_1881_);
lean_dec(v___x_1880_);
v_day_1882_ = lean_ctor_get(v_date_1881_, 2);
lean_inc(v_day_1882_);
lean_dec_ref(v_date_1881_);
return v_day_1882_;
}
case 7:
{
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
goto v___jp_1850_;
}
case 8:
{
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
goto v___jp_1850_;
}
case 9:
{
lean_object* v___x_1883_; lean_object* v_date_1884_; lean_object* v___x_1885_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1883_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_date_1884_ = lean_ctor_get(v___x_1883_, 0);
lean_inc_ref(v_date_1884_);
lean_dec(v___x_1883_);
v___x_1885_ = l_Std_Time_PlainDate_weekYear(v_date_1884_, v_firstDayOfWeek_1824_, v_minimalDaysInFirstWeek_1825_);
return v___x_1885_;
}
case 10:
{
lean_object* v___x_1886_; lean_object* v_date_1887_; lean_object* v___x_1888_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1886_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_date_1887_ = lean_ctor_get(v___x_1886_, 0);
lean_inc_ref(v_date_1887_);
lean_dec(v___x_1886_);
v___x_1888_ = l_Std_Time_PlainDate_weekOfYear(v_date_1887_, v_firstDayOfWeek_1824_, v_minimalDaysInFirstWeek_1825_);
return v___x_1888_;
}
case 11:
{
lean_object* v___x_1889_; lean_object* v_date_1890_; lean_object* v___x_1891_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1889_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_date_1890_ = lean_ctor_get(v___x_1889_, 0);
lean_inc_ref(v_date_1890_);
lean_dec(v___x_1889_);
v___x_1891_ = l_Std_Time_PlainDate_weekOfMonth(v_date_1890_, v_firstDayOfWeek_1824_);
return v___x_1891_;
}
case 12:
{
lean_object* v___x_1892_; lean_object* v_date_1893_; uint8_t v___x_1894_; lean_object* v___x_1895_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1892_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_date_1893_ = lean_ctor_get(v___x_1892_, 0);
lean_inc_ref(v_date_1893_);
lean_dec(v___x_1892_);
v___x_1894_ = l_Std_Time_PlainDate_weekday(v_date_1893_);
v___x_1895_ = lean_box(v___x_1894_);
return v___x_1895_;
}
case 13:
{
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
goto v___jp_1845_;
}
case 14:
{
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
goto v___jp_1845_;
}
case 15:
{
lean_object* v___x_1896_; 
v___x_1896_ = l_Std_Time_DateTime_alignedWeekOfMonth(v_date_1814_);
lean_dec_ref(v_date_1814_);
return v___x_1896_;
}
case 16:
{
lean_object* v___x_1897_; lean_object* v_time_1898_; lean_object* v_hour_1899_; uint8_t v___x_1900_; lean_object* v___x_1901_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1897_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_time_1898_ = lean_ctor_get(v___x_1897_, 1);
lean_inc_ref(v_time_1898_);
lean_dec(v___x_1897_);
v_hour_1899_ = lean_ctor_get(v_time_1898_, 0);
lean_inc(v_hour_1899_);
lean_dec_ref(v_time_1898_);
v___x_1900_ = l_Std_Time_HourMarker_ofOrdinal(v_hour_1899_);
lean_dec(v_hour_1899_);
v___x_1901_ = lean_box(v___x_1900_);
return v___x_1901_;
}
case 17:
{
lean_object* v___x_1902_; lean_object* v_time_1903_; lean_object* v_hour_1904_; lean_object* v_minute_1905_; lean_object* v_second_1906_; uint8_t v___x_1907_; lean_object* v___x_1908_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1902_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_time_1903_ = lean_ctor_get(v___x_1902_, 1);
lean_inc_ref(v_time_1903_);
lean_dec(v___x_1902_);
v_hour_1904_ = lean_ctor_get(v_time_1903_, 0);
lean_inc(v_hour_1904_);
v_minute_1905_ = lean_ctor_get(v_time_1903_, 1);
lean_inc(v_minute_1905_);
v_second_1906_ = lean_ctor_get(v_time_1903_, 2);
lean_inc(v_second_1906_);
lean_dec_ref(v_time_1903_);
v___x_1907_ = l_Std_Time_classifyDayPeriod(v_hour_1904_, v_minute_1905_, v_second_1906_);
lean_dec(v_second_1906_);
lean_dec(v_minute_1905_);
lean_dec(v_hour_1904_);
v___x_1908_ = lean_box(v___x_1907_);
return v___x_1908_;
}
case 18:
{
lean_object* v___x_1909_; lean_object* v_time_1910_; lean_object* v_hour_1911_; lean_object* v_minute_1912_; lean_object* v_second_1913_; uint8_t v___x_1914_; lean_object* v___x_1915_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1909_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_time_1910_ = lean_ctor_get(v___x_1909_, 1);
lean_inc_ref(v_time_1910_);
lean_dec(v___x_1909_);
v_hour_1911_ = lean_ctor_get(v_time_1910_, 0);
lean_inc(v_hour_1911_);
v_minute_1912_ = lean_ctor_get(v_time_1910_, 1);
lean_inc(v_minute_1912_);
v_second_1913_ = lean_ctor_get(v_time_1910_, 2);
lean_inc(v_second_1913_);
lean_dec_ref(v_time_1910_);
v___x_1914_ = l_Std_Time_classifyExtendedDayPeriod(v_hour_1911_, v_minute_1912_, v_second_1913_);
lean_dec(v_second_1913_);
lean_dec(v_minute_1912_);
lean_dec(v_hour_1911_);
v___x_1915_ = lean_box(v___x_1914_);
return v___x_1915_;
}
case 19:
{
lean_object* v___x_1916_; lean_object* v_time_1917_; lean_object* v_hour_1918_; lean_object* v___x_1919_; lean_object* v_fst_1920_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1916_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_time_1917_ = lean_ctor_get(v___x_1916_, 1);
lean_inc_ref(v_time_1917_);
lean_dec(v___x_1916_);
v_hour_1918_ = lean_ctor_get(v_time_1917_, 0);
lean_inc(v_hour_1918_);
lean_dec_ref(v_time_1917_);
v___x_1919_ = l_Std_Time_HourMarker_toRelative(v_hour_1918_);
v_fst_1920_ = lean_ctor_get(v___x_1919_, 0);
lean_inc(v_fst_1920_);
lean_dec_ref(v___x_1919_);
return v_fst_1920_;
}
case 20:
{
lean_object* v___x_1921_; lean_object* v_time_1922_; lean_object* v_hour_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1921_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_time_1922_ = lean_ctor_get(v___x_1921_, 1);
lean_inc_ref(v_time_1922_);
lean_dec(v___x_1921_);
v_hour_1923_ = lean_ctor_get(v_time_1922_, 0);
lean_inc(v_hour_1923_);
lean_dec_ref(v_time_1922_);
v___x_1924_ = lean_obj_once(&l_Std_Time_classifyDayPeriod___closed__0, &l_Std_Time_classifyDayPeriod___closed__0_once, _init_l_Std_Time_classifyDayPeriod___closed__0);
v___x_1925_ = lean_int_emod(v_hour_1923_, v___x_1924_);
lean_dec(v_hour_1923_);
return v___x_1925_;
}
case 21:
{
lean_object* v___x_1926_; lean_object* v_time_1927_; lean_object* v_hour_1928_; lean_object* v___x_1929_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1926_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_time_1927_ = lean_ctor_get(v___x_1926_, 1);
lean_inc_ref(v_time_1927_);
lean_dec(v___x_1926_);
v_hour_1928_ = lean_ctor_get(v_time_1927_, 0);
lean_inc(v_hour_1928_);
lean_dec_ref(v_time_1927_);
v___x_1929_ = l_Std_Time_Hour_Ordinal_shiftTo1BasedHour(v_hour_1928_);
lean_dec(v_hour_1928_);
return v___x_1929_;
}
case 22:
{
lean_object* v___x_1930_; lean_object* v_time_1931_; lean_object* v_hour_1932_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1930_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_time_1931_ = lean_ctor_get(v___x_1930_, 1);
lean_inc_ref(v_time_1931_);
lean_dec(v___x_1930_);
v_hour_1932_ = lean_ctor_get(v_time_1931_, 0);
lean_inc(v_hour_1932_);
lean_dec_ref(v_time_1931_);
return v_hour_1932_;
}
case 23:
{
lean_object* v___x_1933_; lean_object* v_time_1934_; lean_object* v_minute_1935_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1933_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_time_1934_ = lean_ctor_get(v___x_1933_, 1);
lean_inc_ref(v_time_1934_);
lean_dec(v___x_1933_);
v_minute_1935_ = lean_ctor_get(v_time_1934_, 1);
lean_inc(v_minute_1935_);
lean_dec_ref(v_time_1934_);
return v_minute_1935_;
}
case 24:
{
lean_object* v___x_1936_; lean_object* v_time_1937_; lean_object* v_second_1938_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1936_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_time_1937_ = lean_ctor_get(v___x_1936_, 1);
lean_inc_ref(v_time_1937_);
lean_dec(v___x_1936_);
v_second_1938_ = lean_ctor_get(v_time_1937_, 2);
lean_inc(v_second_1938_);
lean_dec_ref(v_time_1937_);
return v_second_1938_;
}
case 25:
{
lean_object* v___x_1939_; lean_object* v_time_1940_; lean_object* v_nanosecond_1941_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1939_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_time_1940_ = lean_ctor_get(v___x_1939_, 1);
lean_inc_ref(v_time_1940_);
lean_dec(v___x_1939_);
v_nanosecond_1941_ = lean_ctor_get(v_time_1940_, 3);
lean_inc(v_nanosecond_1941_);
lean_dec_ref(v_time_1940_);
return v_nanosecond_1941_;
}
case 26:
{
lean_object* v___x_1942_; lean_object* v_time_1943_; lean_object* v___x_1944_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1942_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_time_1943_ = lean_ctor_get(v___x_1942_, 1);
lean_inc_ref(v_time_1943_);
lean_dec(v___x_1942_);
v___x_1944_ = l_Std_Time_PlainTime_toMilliseconds(v_time_1943_);
lean_dec_ref(v_time_1943_);
return v___x_1944_;
}
case 27:
{
lean_object* v___x_1945_; lean_object* v_time_1946_; lean_object* v_nanosecond_1947_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1945_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_time_1946_ = lean_ctor_get(v___x_1945_, 1);
lean_inc_ref(v_time_1946_);
lean_dec(v___x_1945_);
v_nanosecond_1947_ = lean_ctor_get(v_time_1946_, 3);
lean_inc(v_nanosecond_1947_);
lean_dec_ref(v_time_1946_);
return v_nanosecond_1947_;
}
case 28:
{
lean_object* v___x_1948_; lean_object* v_time_1949_; lean_object* v___x_1950_; 
lean_inc_ref(v_date_1826_);
lean_dec_ref(v_date_1814_);
v___x_1948_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_time_1949_ = lean_ctor_get(v___x_1948_, 1);
lean_inc_ref(v_time_1949_);
lean_dec(v___x_1948_);
v___x_1950_ = l_Std_Time_PlainTime_toNanoseconds(v_time_1949_);
lean_dec_ref(v_time_1949_);
return v___x_1950_;
}
case 29:
{
uint8_t v_presentation_1951_; 
lean_inc_ref(v_timezone_1827_);
lean_dec_ref(v_date_1814_);
v_presentation_1951_ = lean_ctor_get_uint8(v_modifier_1812_, 0);
if (v_presentation_1951_ == 0)
{
lean_object* v___x_1952_; 
lean_dec_ref(v_timezone_1827_);
v___x_1952_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2));
return v___x_1952_;
}
else
{
lean_object* v_offset_1953_; lean_object* v_name_1954_; lean_object* v___x_1969_; lean_object* v___x_1970_; uint8_t v___x_1971_; 
v_offset_1953_ = lean_ctor_get(v_timezone_1827_, 0);
lean_inc(v_offset_1953_);
v_name_1954_ = lean_ctor_get(v_timezone_1827_, 1);
lean_inc_ref(v_name_1954_);
lean_dec_ref(v_timezone_1827_);
v___x_1969_ = lean_string_utf8_byte_size(v_name_1954_);
v___x_1970_ = lean_unsigned_to_nat(1u);
v___x_1971_ = lean_nat_dec_le(v___x_1970_, v___x_1969_);
if (v___x_1971_ == 0)
{
goto v___jp_1962_;
}
else
{
lean_object* v___x_1972_; lean_object* v___x_1973_; uint8_t v___x_1974_; 
v___x_1972_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0));
v___x_1973_ = lean_unsigned_to_nat(0u);
v___x_1974_ = lean_string_memcmp(v_name_1954_, v___x_1972_, v___x_1973_, v___x_1973_, v___x_1970_);
if (v___x_1974_ == 0)
{
goto v___jp_1962_;
}
else
{
lean_dec_ref(v_name_1954_);
goto v___jp_1955_;
}
}
v___jp_1955_:
{
uint8_t v___x_1956_; lean_object* v___x_1957_; uint8_t v___x_1958_; uint8_t v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; 
v___x_1956_ = 1;
v___x_1957_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_1958_ = 0;
v___x_1959_ = 1;
v___x_1960_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_offset_1953_, v___x_1958_, v___x_1959_, v___x_1956_, v___x_1956_);
v___x_1961_ = lean_string_append(v___x_1957_, v___x_1960_);
lean_dec_ref(v___x_1960_);
return v___x_1961_;
}
v___jp_1962_:
{
lean_object* v___x_1963_; lean_object* v___x_1964_; uint8_t v___x_1965_; 
v___x_1963_ = lean_string_utf8_byte_size(v_name_1954_);
v___x_1964_ = lean_unsigned_to_nat(1u);
v___x_1965_ = lean_nat_dec_le(v___x_1964_, v___x_1963_);
if (v___x_1965_ == 0)
{
lean_dec(v_offset_1953_);
return v_name_1954_;
}
else
{
lean_object* v___x_1966_; lean_object* v___x_1967_; uint8_t v___x_1968_; 
v___x_1966_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_1967_ = lean_unsigned_to_nat(0u);
v___x_1968_ = lean_string_memcmp(v_name_1954_, v___x_1966_, v___x_1967_, v___x_1967_, v___x_1964_);
if (v___x_1968_ == 0)
{
lean_dec(v_offset_1953_);
return v_name_1954_;
}
else
{
lean_dec_ref(v_name_1954_);
goto v___jp_1955_;
}
}
}
}
}
case 30:
{
uint8_t v_presentation_1975_; 
lean_inc_ref(v_timezone_1827_);
lean_dec_ref(v_date_1814_);
v_presentation_1975_ = lean_ctor_get_uint8(v_modifier_1812_, 0);
if (v_presentation_1975_ == 0)
{
lean_object* v_offset_1976_; lean_object* v_abbreviation_1977_; lean_object* v___x_1992_; lean_object* v___x_1993_; uint8_t v___x_1994_; 
v_offset_1976_ = lean_ctor_get(v_timezone_1827_, 0);
lean_inc(v_offset_1976_);
v_abbreviation_1977_ = lean_ctor_get(v_timezone_1827_, 2);
lean_inc_ref(v_abbreviation_1977_);
lean_dec_ref(v_timezone_1827_);
v___x_1992_ = lean_string_utf8_byte_size(v_abbreviation_1977_);
v___x_1993_ = lean_unsigned_to_nat(1u);
v___x_1994_ = lean_nat_dec_le(v___x_1993_, v___x_1992_);
if (v___x_1994_ == 0)
{
goto v___jp_1985_;
}
else
{
lean_object* v___x_1995_; lean_object* v___x_1996_; uint8_t v___x_1997_; 
v___x_1995_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0));
v___x_1996_ = lean_unsigned_to_nat(0u);
v___x_1997_ = lean_string_memcmp(v_abbreviation_1977_, v___x_1995_, v___x_1996_, v___x_1996_, v___x_1993_);
if (v___x_1997_ == 0)
{
goto v___jp_1985_;
}
else
{
lean_dec_ref(v_abbreviation_1977_);
goto v___jp_1978_;
}
}
v___jp_1978_:
{
uint8_t v___x_1979_; lean_object* v___x_1980_; uint8_t v___x_1981_; uint8_t v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1979_ = 1;
v___x_1980_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_1981_ = 0;
v___x_1982_ = 1;
v___x_1983_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_offset_1976_, v___x_1981_, v___x_1982_, v___x_1979_, v___x_1979_);
v___x_1984_ = lean_string_append(v___x_1980_, v___x_1983_);
lean_dec_ref(v___x_1983_);
return v___x_1984_;
}
v___jp_1985_:
{
lean_object* v___x_1986_; lean_object* v___x_1987_; uint8_t v___x_1988_; 
v___x_1986_ = lean_string_utf8_byte_size(v_abbreviation_1977_);
v___x_1987_ = lean_unsigned_to_nat(1u);
v___x_1988_ = lean_nat_dec_le(v___x_1987_, v___x_1986_);
if (v___x_1988_ == 0)
{
lean_dec(v_offset_1976_);
return v_abbreviation_1977_;
}
else
{
lean_object* v___x_1989_; lean_object* v___x_1990_; uint8_t v___x_1991_; 
v___x_1989_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_1990_ = lean_unsigned_to_nat(0u);
v___x_1991_ = lean_string_memcmp(v_abbreviation_1977_, v___x_1989_, v___x_1990_, v___x_1990_, v___x_1987_);
if (v___x_1991_ == 0)
{
lean_dec(v_offset_1976_);
return v_abbreviation_1977_;
}
else
{
lean_dec_ref(v_abbreviation_1977_);
goto v___jp_1978_;
}
}
}
}
else
{
lean_object* v_offset_1998_; lean_object* v_name_1999_; lean_object* v___x_2014_; lean_object* v___x_2015_; uint8_t v___x_2016_; 
v_offset_1998_ = lean_ctor_get(v_timezone_1827_, 0);
lean_inc(v_offset_1998_);
v_name_1999_ = lean_ctor_get(v_timezone_1827_, 1);
lean_inc_ref(v_name_1999_);
lean_dec_ref(v_timezone_1827_);
v___x_2014_ = lean_string_utf8_byte_size(v_name_1999_);
v___x_2015_ = lean_unsigned_to_nat(1u);
v___x_2016_ = lean_nat_dec_le(v___x_2015_, v___x_2014_);
if (v___x_2016_ == 0)
{
goto v___jp_2007_;
}
else
{
lean_object* v___x_2017_; lean_object* v___x_2018_; uint8_t v___x_2019_; 
v___x_2017_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0));
v___x_2018_ = lean_unsigned_to_nat(0u);
v___x_2019_ = lean_string_memcmp(v_name_1999_, v___x_2017_, v___x_2018_, v___x_2018_, v___x_2015_);
if (v___x_2019_ == 0)
{
goto v___jp_2007_;
}
else
{
lean_dec_ref(v_name_1999_);
goto v___jp_2000_;
}
}
v___jp_2000_:
{
uint8_t v___x_2001_; lean_object* v___x_2002_; uint8_t v___x_2003_; uint8_t v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; 
v___x_2001_ = 1;
v___x_2002_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_2003_ = 0;
v___x_2004_ = 1;
v___x_2005_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_offset_1998_, v___x_2003_, v___x_2004_, v___x_2001_, v___x_2001_);
v___x_2006_ = lean_string_append(v___x_2002_, v___x_2005_);
lean_dec_ref(v___x_2005_);
return v___x_2006_;
}
v___jp_2007_:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; uint8_t v___x_2010_; 
v___x_2008_ = lean_string_utf8_byte_size(v_name_1999_);
v___x_2009_ = lean_unsigned_to_nat(1u);
v___x_2010_ = lean_nat_dec_le(v___x_2009_, v___x_2008_);
if (v___x_2010_ == 0)
{
lean_dec(v_offset_1998_);
return v_name_1999_;
}
else
{
lean_object* v___x_2011_; lean_object* v___x_2012_; uint8_t v___x_2013_; 
v___x_2011_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_2012_ = lean_unsigned_to_nat(0u);
v___x_2013_ = lean_string_memcmp(v_name_1999_, v___x_2011_, v___x_2012_, v___x_2012_, v___x_2009_);
if (v___x_2013_ == 0)
{
lean_dec(v_offset_1998_);
return v_name_1999_;
}
else
{
lean_dec_ref(v_name_1999_);
goto v___jp_2000_;
}
}
}
}
}
case 31:
{
uint8_t v_presentation_2020_; 
lean_inc_ref(v_timezone_1827_);
lean_dec_ref(v_date_1814_);
v_presentation_2020_ = lean_ctor_get_uint8(v_modifier_1812_, 0);
if (v_presentation_2020_ == 0)
{
lean_object* v_offset_2021_; lean_object* v_abbreviation_2022_; lean_object* v___x_2037_; lean_object* v___x_2038_; uint8_t v___x_2039_; 
v_offset_2021_ = lean_ctor_get(v_timezone_1827_, 0);
lean_inc(v_offset_2021_);
v_abbreviation_2022_ = lean_ctor_get(v_timezone_1827_, 2);
lean_inc_ref(v_abbreviation_2022_);
lean_dec_ref(v_timezone_1827_);
v___x_2037_ = lean_string_utf8_byte_size(v_abbreviation_2022_);
v___x_2038_ = lean_unsigned_to_nat(1u);
v___x_2039_ = lean_nat_dec_le(v___x_2038_, v___x_2037_);
if (v___x_2039_ == 0)
{
goto v___jp_2030_;
}
else
{
lean_object* v___x_2040_; lean_object* v___x_2041_; uint8_t v___x_2042_; 
v___x_2040_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0));
v___x_2041_ = lean_unsigned_to_nat(0u);
v___x_2042_ = lean_string_memcmp(v_abbreviation_2022_, v___x_2040_, v___x_2041_, v___x_2041_, v___x_2038_);
if (v___x_2042_ == 0)
{
goto v___jp_2030_;
}
else
{
lean_dec_ref(v_abbreviation_2022_);
goto v___jp_2023_;
}
}
v___jp_2023_:
{
uint8_t v___x_2024_; lean_object* v___x_2025_; uint8_t v___x_2026_; uint8_t v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; 
v___x_2024_ = 1;
v___x_2025_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_2026_ = 0;
v___x_2027_ = 1;
v___x_2028_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_offset_2021_, v___x_2026_, v___x_2027_, v___x_2024_, v___x_2024_);
v___x_2029_ = lean_string_append(v___x_2025_, v___x_2028_);
lean_dec_ref(v___x_2028_);
return v___x_2029_;
}
v___jp_2030_:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; uint8_t v___x_2033_; 
v___x_2031_ = lean_string_utf8_byte_size(v_abbreviation_2022_);
v___x_2032_ = lean_unsigned_to_nat(1u);
v___x_2033_ = lean_nat_dec_le(v___x_2032_, v___x_2031_);
if (v___x_2033_ == 0)
{
lean_dec(v_offset_2021_);
return v_abbreviation_2022_;
}
else
{
lean_object* v___x_2034_; lean_object* v___x_2035_; uint8_t v___x_2036_; 
v___x_2034_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_2035_ = lean_unsigned_to_nat(0u);
v___x_2036_ = lean_string_memcmp(v_abbreviation_2022_, v___x_2034_, v___x_2035_, v___x_2035_, v___x_2032_);
if (v___x_2036_ == 0)
{
lean_dec(v_offset_2021_);
return v_abbreviation_2022_;
}
else
{
lean_dec_ref(v_abbreviation_2022_);
goto v___jp_2023_;
}
}
}
}
else
{
lean_object* v_offset_2043_; lean_object* v_name_2044_; lean_object* v___x_2059_; lean_object* v___x_2060_; uint8_t v___x_2061_; 
v_offset_2043_ = lean_ctor_get(v_timezone_1827_, 0);
lean_inc(v_offset_2043_);
v_name_2044_ = lean_ctor_get(v_timezone_1827_, 1);
lean_inc_ref(v_name_2044_);
lean_dec_ref(v_timezone_1827_);
v___x_2059_ = lean_string_utf8_byte_size(v_name_2044_);
v___x_2060_ = lean_unsigned_to_nat(1u);
v___x_2061_ = lean_nat_dec_le(v___x_2060_, v___x_2059_);
if (v___x_2061_ == 0)
{
goto v___jp_2052_;
}
else
{
lean_object* v___x_2062_; lean_object* v___x_2063_; uint8_t v___x_2064_; 
v___x_2062_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0));
v___x_2063_ = lean_unsigned_to_nat(0u);
v___x_2064_ = lean_string_memcmp(v_name_2044_, v___x_2062_, v___x_2063_, v___x_2063_, v___x_2060_);
if (v___x_2064_ == 0)
{
goto v___jp_2052_;
}
else
{
lean_dec_ref(v_name_2044_);
goto v___jp_2045_;
}
}
v___jp_2045_:
{
uint8_t v___x_2046_; lean_object* v___x_2047_; uint8_t v___x_2048_; uint8_t v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; 
v___x_2046_ = 1;
v___x_2047_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_2048_ = 0;
v___x_2049_ = 1;
v___x_2050_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_offset_2043_, v___x_2048_, v___x_2049_, v___x_2046_, v___x_2046_);
v___x_2051_ = lean_string_append(v___x_2047_, v___x_2050_);
lean_dec_ref(v___x_2050_);
return v___x_2051_;
}
v___jp_2052_:
{
lean_object* v___x_2053_; lean_object* v___x_2054_; uint8_t v___x_2055_; 
v___x_2053_ = lean_string_utf8_byte_size(v_name_2044_);
v___x_2054_ = lean_unsigned_to_nat(1u);
v___x_2055_ = lean_nat_dec_le(v___x_2054_, v___x_2053_);
if (v___x_2055_ == 0)
{
lean_dec(v_offset_2043_);
return v_name_2044_;
}
else
{
lean_object* v___x_2056_; lean_object* v___x_2057_; uint8_t v___x_2058_; 
v___x_2056_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_2057_ = lean_unsigned_to_nat(0u);
v___x_2058_ = lean_string_memcmp(v_name_2044_, v___x_2056_, v___x_2057_, v___x_2057_, v___x_2054_);
if (v___x_2058_ == 0)
{
lean_dec(v_offset_2043_);
return v_name_2044_;
}
else
{
lean_dec_ref(v_name_2044_);
goto v___jp_2045_;
}
}
}
}
}
default: 
{
lean_object* v_offset_2065_; 
lean_inc_ref(v_timezone_1827_);
lean_dec_ref(v_date_1814_);
v_offset_2065_ = lean_ctor_get(v_timezone_1827_, 0);
lean_inc(v_offset_2065_);
lean_dec_ref(v_timezone_1827_);
return v_offset_2065_;
}
}
v___jp_1815_:
{
lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1820_, 0, v_month_1816_);
lean_ctor_set(v___x_1820_, 1, v_day_1817_);
v___x_1821_ = l_Std_Time_ValidDate_dayOfYear(v___y_1819_, v___x_1820_);
lean_dec_ref_known(v___x_1820_, 2);
v___x_1822_ = lean_box(v___y_1818_);
v___x_1823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1823_, 0, v___x_1822_);
lean_ctor_set(v___x_1823_, 1, v___x_1821_);
return v___x_1823_;
}
v___jp_1828_:
{
lean_object* v___x_1830_; lean_object* v_date_1831_; lean_object* v_year_1832_; lean_object* v_month_1833_; lean_object* v_day_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; uint8_t v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; uint8_t v___x_1841_; 
v___x_1830_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_date_1831_ = lean_ctor_get(v___x_1830_, 0);
lean_inc_ref(v_date_1831_);
lean_dec(v___x_1830_);
v_year_1832_ = lean_ctor_get(v_date_1831_, 0);
lean_inc(v_year_1832_);
v_month_1833_ = lean_ctor_get(v_date_1831_, 1);
lean_inc(v_month_1833_);
v_day_1834_ = lean_ctor_get(v_date_1831_, 2);
lean_inc(v_day_1834_);
lean_dec_ref(v_date_1831_);
v___x_1835_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0);
v___x_1836_ = lean_int_mod(v_year_1832_, v___x_1835_);
v___x_1837_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1838_ = lean_int_dec_eq(v___x_1836_, v___x_1837_);
lean_dec(v___x_1836_);
v___x_1839_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0);
v___x_1840_ = lean_int_mod(v_year_1832_, v___x_1839_);
v___x_1841_ = lean_int_dec_eq(v___x_1840_, v___x_1837_);
lean_dec(v___x_1840_);
if (v___x_1841_ == 0)
{
lean_dec(v_year_1832_);
v_month_1816_ = v_month_1833_;
v_day_1817_ = v_day_1834_;
v___y_1818_ = v___y_1829_;
v___y_1819_ = v___x_1838_;
goto v___jp_1815_;
}
else
{
if (v___x_1838_ == 0)
{
lean_dec(v_year_1832_);
v_month_1816_ = v_month_1833_;
v_day_1817_ = v_day_1834_;
v___y_1818_ = v___y_1829_;
v___y_1819_ = v___x_1838_;
goto v___jp_1815_;
}
else
{
lean_object* v___x_1842_; lean_object* v___x_1843_; uint8_t v___x_1844_; 
v___x_1842_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1);
v___x_1843_ = lean_int_mod(v_year_1832_, v___x_1842_);
lean_dec(v_year_1832_);
v___x_1844_ = lean_int_dec_eq(v___x_1843_, v___x_1837_);
lean_dec(v___x_1843_);
v_month_1816_ = v_month_1833_;
v_day_1817_ = v_day_1834_;
v___y_1818_ = v___y_1829_;
v___y_1819_ = v___x_1844_;
goto v___jp_1815_;
}
}
}
v___jp_1845_:
{
lean_object* v___x_1846_; lean_object* v_date_1847_; uint8_t v___x_1848_; lean_object* v___x_1849_; 
v___x_1846_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_date_1847_ = lean_ctor_get(v___x_1846_, 0);
lean_inc_ref(v_date_1847_);
lean_dec(v___x_1846_);
v___x_1848_ = l_Std_Time_PlainDate_weekday(v_date_1847_);
v___x_1849_ = lean_box(v___x_1848_);
return v___x_1849_;
}
v___jp_1850_:
{
lean_object* v___x_1851_; lean_object* v_date_1852_; lean_object* v___x_1853_; 
v___x_1851_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_date_1852_ = lean_ctor_get(v___x_1851_, 0);
lean_inc_ref(v_date_1852_);
lean_dec(v___x_1851_);
v___x_1853_ = l_Std_Time_PlainDate_quarter(v_date_1852_);
lean_dec_ref(v_date_1852_);
return v___x_1853_;
}
v___jp_1854_:
{
lean_object* v___x_1855_; lean_object* v_date_1856_; lean_object* v_month_1857_; 
v___x_1855_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_date_1856_ = lean_ctor_get(v___x_1855_, 0);
lean_inc_ref(v_date_1856_);
lean_dec(v___x_1855_);
v_month_1857_ = lean_ctor_get(v_date_1856_, 1);
lean_inc(v_month_1857_);
lean_dec_ref(v_date_1856_);
return v_month_1857_;
}
v___jp_1858_:
{
lean_object* v___x_1859_; lean_object* v_date_1860_; lean_object* v_year_1861_; 
v___x_1859_ = lean_thunk_get_own(v_date_1826_);
lean_dec_ref(v_date_1826_);
v_date_1860_ = lean_ctor_get(v___x_1859_, 0);
lean_inc_ref(v_date_1860_);
lean_dec(v___x_1859_);
v_year_1861_ = lean_ctor_get(v_date_1860_, 0);
lean_inc(v_year_1861_);
lean_dec_ref(v_date_1860_);
return v_year_1861_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___boxed(lean_object* v_modifier_2066_, lean_object* v_dateformat_2067_, lean_object* v_date_2068_){
_start:
{
lean_object* v_res_2069_; 
v_res_2069_ = l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier(v_modifier_2066_, v_dateformat_2067_, v_date_2068_);
lean_dec_ref(v_dateformat_2067_);
lean_dec_ref(v_modifier_2066_);
return v_res_2069_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___lam__0(lean_object* v___x_2070_, lean_object* v___y_2071_){
_start:
{
lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2072_, 0, v___x_2070_);
v___x_2073_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2073_, 0, v___y_2071_);
lean_ctor_set(v___x_2073_, 1, v___x_2072_);
return v___x_2073_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg___lam__0(lean_object* v___x_2074_, lean_object* v_b_2075_, lean_object* v___y_2076_){
_start:
{
lean_object* v_fst_2077_; lean_object* v_snd_2078_; lean_object* v___x_2079_; 
v_fst_2077_ = lean_ctor_get(v___x_2074_, 0);
lean_inc(v_fst_2077_);
v_snd_2078_ = lean_ctor_get(v___x_2074_, 1);
lean_inc(v_snd_2078_);
lean_dec_ref(v___x_2074_);
lean_inc_ref(v___y_2076_);
v___x_2079_ = lean_apply_1(v_b_2075_, v___y_2076_);
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_dec(v_snd_2078_);
lean_dec(v_fst_2077_);
lean_dec_ref(v___y_2076_);
return v___x_2079_;
}
else
{
lean_object* v_pos_2080_; lean_object* v_snd_2081_; lean_object* v_snd_2082_; uint8_t v_decide_2083_; 
v_pos_2080_ = lean_ctor_get(v___x_2079_, 0);
lean_inc(v_pos_2080_);
v_snd_2081_ = lean_ctor_get(v___y_2076_, 1);
lean_inc(v_snd_2081_);
lean_dec_ref(v___y_2076_);
v_snd_2082_ = lean_ctor_get(v_pos_2080_, 1);
v_decide_2083_ = lean_nat_dec_eq(v_snd_2081_, v_snd_2082_);
lean_dec(v_snd_2081_);
if (v_decide_2083_ == 0)
{
lean_dec(v_pos_2080_);
lean_dec(v_snd_2078_);
lean_dec(v_fst_2077_);
return v___x_2079_;
}
else
{
lean_object* v___x_2084_; 
lean_dec_ref_known(v___x_2079_, 2);
v___x_2084_ = l_Std_Internal_Parsec_String_pstring(v_fst_2077_, v_pos_2080_);
if (lean_obj_tag(v___x_2084_) == 0)
{
lean_object* v_pos_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2092_; 
v_pos_2085_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2092_ == 0)
{
lean_object* v_unused_2093_; 
v_unused_2093_ = lean_ctor_get(v___x_2084_, 1);
lean_dec(v_unused_2093_);
v___x_2087_ = v___x_2084_;
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_pos_2085_);
lean_dec(v___x_2084_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v___x_2090_; 
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 1, v_snd_2078_);
v___x_2090_ = v___x_2087_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v_pos_2085_);
lean_ctor_set(v_reuseFailAlloc_2091_, 1, v_snd_2078_);
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
lean_object* v_pos_2094_; lean_object* v_err_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2102_; 
lean_dec(v_snd_2078_);
v_pos_2094_ = lean_ctor_get(v___x_2084_, 0);
v_err_2095_ = lean_ctor_get(v___x_2084_, 1);
v_isSharedCheck_2102_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2097_ = v___x_2084_;
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
else
{
lean_inc(v_err_2095_);
lean_inc(v_pos_2094_);
lean_dec(v___x_2084_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v___x_2100_; 
if (v_isShared_2098_ == 0)
{
v___x_2100_ = v___x_2097_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v_pos_2094_);
lean_ctor_set(v_reuseFailAlloc_2101_, 1, v_err_2095_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg(lean_object* v_as_2103_, size_t v_i_2104_, size_t v_stop_2105_, lean_object* v_b_2106_, lean_object* v___y_2107_){
_start:
{
uint8_t v___x_2108_; 
v___x_2108_ = lean_usize_dec_eq(v_i_2104_, v_stop_2105_);
if (v___x_2108_ == 0)
{
lean_object* v___x_2109_; lean_object* v___f_2110_; size_t v___x_2111_; size_t v___x_2112_; 
v___x_2109_ = lean_array_uget_borrowed(v_as_2103_, v_i_2104_);
lean_inc(v___x_2109_);
v___f_2110_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2110_, 0, v___x_2109_);
lean_closure_set(v___f_2110_, 1, v_b_2106_);
v___x_2111_ = ((size_t)1ULL);
v___x_2112_ = lean_usize_add(v_i_2104_, v___x_2111_);
v_i_2104_ = v___x_2112_;
v_b_2106_ = v___f_2110_;
goto _start;
}
else
{
lean_object* v___x_2114_; 
v___x_2114_ = lean_apply_1(v_b_2106_, v___y_2107_);
return v___x_2114_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg___boxed(lean_object* v_as_2115_, lean_object* v_i_2116_, lean_object* v_stop_2117_, lean_object* v_b_2118_, lean_object* v___y_2119_){
_start:
{
size_t v_i_boxed_2120_; size_t v_stop_boxed_2121_; lean_object* v_res_2122_; 
v_i_boxed_2120_ = lean_unbox_usize(v_i_2116_);
lean_dec(v_i_2116_);
v_stop_boxed_2121_ = lean_unbox_usize(v_stop_2117_);
lean_dec(v_stop_2117_);
v_res_2122_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg(v_as_2115_, v_i_boxed_2120_, v_stop_boxed_2121_, v_b_2118_, v___y_2119_);
lean_dec_ref(v_as_2115_);
return v_res_2122_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(lean_object* v_pairs_2128_, lean_object* v_a_2129_){
_start:
{
lean_object* v___x_2130_; lean_object* v___x_2131_; uint8_t v___x_2132_; 
v___x_2130_ = lean_unsigned_to_nat(0u);
v___x_2131_ = lean_array_get_size(v_pairs_2128_);
v___x_2132_ = lean_nat_dec_lt(v___x_2130_, v___x_2131_);
if (v___x_2132_ == 0)
{
lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2133_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__1));
v___x_2134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2134_, 0, v_a_2129_);
lean_ctor_set(v___x_2134_, 1, v___x_2133_);
return v___x_2134_;
}
else
{
lean_object* v___f_2135_; size_t v___x_2136_; size_t v___x_2137_; lean_object* v___x_2138_; 
v___f_2135_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__2));
v___x_2136_ = ((size_t)0ULL);
v___x_2137_ = lean_usize_of_nat(v___x_2131_);
v___x_2138_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg(v_pairs_2128_, v___x_2136_, v___x_2137_, v___f_2135_, v_a_2129_);
return v___x_2138_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___boxed(lean_object* v_pairs_2139_, lean_object* v_a_2140_){
_start:
{
lean_object* v_res_2141_; 
v_res_2141_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v_pairs_2139_, v_a_2140_);
lean_dec_ref(v_pairs_2139_);
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols(lean_object* v_00_u03b1_2142_, lean_object* v_pairs_2143_, lean_object* v_a_2144_){
_start:
{
lean_object* v___x_2145_; 
v___x_2145_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v_pairs_2143_, v_a_2144_);
return v___x_2145_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___boxed(lean_object* v_00_u03b1_2146_, lean_object* v_pairs_2147_, lean_object* v_a_2148_){
_start:
{
lean_object* v_res_2149_; 
v_res_2149_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols(v_00_u03b1_2146_, v_pairs_2147_, v_a_2148_);
lean_dec_ref(v_pairs_2147_);
return v_res_2149_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0(lean_object* v_00_u03b1_2150_, lean_object* v_as_2151_, size_t v_i_2152_, size_t v_stop_2153_, lean_object* v_b_2154_, lean_object* v___y_2155_){
_start:
{
lean_object* v___x_2156_; 
v___x_2156_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg(v_as_2151_, v_i_2152_, v_stop_2153_, v_b_2154_, v___y_2155_);
return v___x_2156_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___boxed(lean_object* v_00_u03b1_2157_, lean_object* v_as_2158_, lean_object* v_i_2159_, lean_object* v_stop_2160_, lean_object* v_b_2161_, lean_object* v___y_2162_){
_start:
{
size_t v_i_boxed_2163_; size_t v_stop_boxed_2164_; lean_object* v_res_2165_; 
v_i_boxed_2163_ = lean_unbox_usize(v_i_2159_);
lean_dec(v_i_2159_);
v_stop_boxed_2164_ = lean_unbox_usize(v_stop_2160_);
lean_dec(v_stop_2160_);
v_res_2165_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0(v_00_u03b1_2157_, v_as_2158_, v_i_boxed_2163_, v_stop_boxed_2164_, v_b_2161_, v___y_2162_);
lean_dec_ref(v_as_2158_);
return v_res_2165_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0___redArg(size_t v_sz_2166_, size_t v_i_2167_, lean_object* v_bs_2168_){
_start:
{
uint8_t v___x_2169_; 
v___x_2169_ = lean_usize_dec_lt(v_i_2167_, v_sz_2166_);
if (v___x_2169_ == 0)
{
return v_bs_2168_;
}
else
{
lean_object* v_v_2170_; lean_object* v___x_2171_; lean_object* v_bs_x27_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; size_t v___x_2178_; size_t v___x_2179_; lean_object* v___x_2180_; 
v_v_2170_ = lean_array_uget(v_bs_2168_, v_i_2167_);
v___x_2171_ = lean_unsigned_to_nat(0u);
v_bs_x27_2172_ = lean_array_uset(v_bs_2168_, v_i_2167_, v___x_2171_);
v___x_2173_ = lean_usize_to_nat(v_i_2167_);
v___x_2174_ = lean_nat_to_int(v___x_2173_);
v___x_2175_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_2176_ = lean_int_add(v___x_2174_, v___x_2175_);
lean_dec(v___x_2174_);
v___x_2177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2177_, 0, v_v_2170_);
lean_ctor_set(v___x_2177_, 1, v___x_2176_);
v___x_2178_ = ((size_t)1ULL);
v___x_2179_ = lean_usize_add(v_i_2167_, v___x_2178_);
v___x_2180_ = lean_array_uset(v_bs_x27_2172_, v_i_2167_, v___x_2177_);
v_i_2167_ = v___x_2179_;
v_bs_2168_ = v___x_2180_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0___redArg___boxed(lean_object* v_sz_2182_, lean_object* v_i_2183_, lean_object* v_bs_2184_){
_start:
{
size_t v_sz_boxed_2185_; size_t v_i_boxed_2186_; lean_object* v_res_2187_; 
v_sz_boxed_2185_ = lean_unbox_usize(v_sz_2182_);
lean_dec(v_sz_2182_);
v_i_boxed_2186_ = lean_unbox_usize(v_i_2183_);
lean_dec(v_i_2183_);
v_res_2187_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0___redArg(v_sz_boxed_2185_, v_i_boxed_2186_, v_bs_2184_);
return v_res_2187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0(lean_object* v_as_2188_, size_t v_sz_2189_, size_t v_i_2190_, lean_object* v_bs_2191_){
_start:
{
uint8_t v___x_2192_; 
v___x_2192_ = lean_usize_dec_lt(v_i_2190_, v_sz_2189_);
if (v___x_2192_ == 0)
{
return v_bs_2191_;
}
else
{
lean_object* v_v_2193_; lean_object* v___x_2194_; lean_object* v_bs_x27_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; size_t v___x_2201_; size_t v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v_v_2193_ = lean_array_uget(v_bs_2191_, v_i_2190_);
v___x_2194_ = lean_unsigned_to_nat(0u);
v_bs_x27_2195_ = lean_array_uset(v_bs_2191_, v_i_2190_, v___x_2194_);
v___x_2196_ = lean_usize_to_nat(v_i_2190_);
v___x_2197_ = lean_nat_to_int(v___x_2196_);
v___x_2198_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_2199_ = lean_int_add(v___x_2197_, v___x_2198_);
lean_dec(v___x_2197_);
v___x_2200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2200_, 0, v_v_2193_);
lean_ctor_set(v___x_2200_, 1, v___x_2199_);
v___x_2201_ = ((size_t)1ULL);
v___x_2202_ = lean_usize_add(v_i_2190_, v___x_2201_);
v___x_2203_ = lean_array_uset(v_bs_x27_2195_, v_i_2190_, v___x_2200_);
v___x_2204_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0___redArg(v_sz_2189_, v___x_2202_, v___x_2203_);
return v___x_2204_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0___boxed(lean_object* v_as_2205_, lean_object* v_sz_2206_, lean_object* v_i_2207_, lean_object* v_bs_2208_){
_start:
{
size_t v_sz_boxed_2209_; size_t v_i_boxed_2210_; lean_object* v_res_2211_; 
v_sz_boxed_2209_ = lean_unbox_usize(v_sz_2206_);
lean_dec(v_sz_2206_);
v_i_boxed_2210_ = lean_unbox_usize(v_i_2207_);
lean_dec(v_i_2207_);
v_res_2211_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0(v_as_2205_, v_sz_boxed_2209_, v_i_boxed_2210_, v_bs_2208_);
lean_dec_ref(v_as_2205_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_monthPairs(lean_object* v_arr_2212_){
_start:
{
size_t v_sz_2213_; size_t v___x_2214_; lean_object* v___x_2215_; 
v_sz_2213_ = lean_array_size(v_arr_2212_);
v___x_2214_ = ((size_t)0ULL);
lean_inc_ref(v_arr_2212_);
v___x_2215_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0(v_arr_2212_, v_sz_2213_, v___x_2214_, v_arr_2212_);
lean_dec_ref(v_arr_2212_);
return v___x_2215_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0(lean_object* v_as_2216_, size_t v_sz_2217_, size_t v_i_2218_, lean_object* v_bs_2219_){
_start:
{
lean_object* v___x_2220_; 
v___x_2220_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0___redArg(v_sz_2217_, v_i_2218_, v_bs_2219_);
return v___x_2220_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0___boxed(lean_object* v_as_2221_, lean_object* v_sz_2222_, lean_object* v_i_2223_, lean_object* v_bs_2224_){
_start:
{
size_t v_sz_boxed_2225_; size_t v_i_boxed_2226_; lean_object* v_res_2227_; 
v_sz_boxed_2225_ = lean_unbox_usize(v_sz_2222_);
lean_dec(v_sz_2222_);
v_i_boxed_2226_ = lean_unbox_usize(v_i_2223_);
lean_dec(v_i_2223_);
v_res_2227_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0(v_as_2221_, v_sz_boxed_2225_, v_i_boxed_2226_, v_bs_2224_);
lean_dec_ref(v_as_2221_);
return v_res_2227_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_weekdayOfIndex(lean_object* v_x_2228_){
_start:
{
lean_object* v___x_2229_; uint8_t v___x_2230_; 
v___x_2229_ = lean_unsigned_to_nat(0u);
v___x_2230_ = lean_nat_dec_eq(v_x_2228_, v___x_2229_);
if (v___x_2230_ == 0)
{
lean_object* v___x_2231_; uint8_t v___x_2232_; 
v___x_2231_ = lean_unsigned_to_nat(1u);
v___x_2232_ = lean_nat_dec_eq(v_x_2228_, v___x_2231_);
if (v___x_2232_ == 0)
{
lean_object* v___x_2233_; uint8_t v___x_2234_; 
v___x_2233_ = lean_unsigned_to_nat(2u);
v___x_2234_ = lean_nat_dec_eq(v_x_2228_, v___x_2233_);
if (v___x_2234_ == 0)
{
lean_object* v___x_2235_; uint8_t v___x_2236_; 
v___x_2235_ = lean_unsigned_to_nat(3u);
v___x_2236_ = lean_nat_dec_eq(v_x_2228_, v___x_2235_);
if (v___x_2236_ == 0)
{
lean_object* v___x_2237_; uint8_t v___x_2238_; 
v___x_2237_ = lean_unsigned_to_nat(4u);
v___x_2238_ = lean_nat_dec_eq(v_x_2228_, v___x_2237_);
if (v___x_2238_ == 0)
{
lean_object* v___x_2239_; uint8_t v___x_2240_; 
v___x_2239_ = lean_unsigned_to_nat(5u);
v___x_2240_ = lean_nat_dec_eq(v_x_2228_, v___x_2239_);
if (v___x_2240_ == 0)
{
uint8_t v___x_2241_; 
v___x_2241_ = 5;
return v___x_2241_;
}
else
{
uint8_t v___x_2242_; 
v___x_2242_ = 4;
return v___x_2242_;
}
}
else
{
uint8_t v___x_2243_; 
v___x_2243_ = 3;
return v___x_2243_;
}
}
else
{
uint8_t v___x_2244_; 
v___x_2244_ = 2;
return v___x_2244_;
}
}
else
{
uint8_t v___x_2245_; 
v___x_2245_ = 1;
return v___x_2245_;
}
}
else
{
uint8_t v___x_2246_; 
v___x_2246_ = 0;
return v___x_2246_;
}
}
else
{
uint8_t v___x_2247_; 
v___x_2247_ = 6;
return v___x_2247_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_weekdayOfIndex___boxed(lean_object* v_x_2248_){
_start:
{
uint8_t v_res_2249_; lean_object* v_r_2250_; 
v_res_2249_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayOfIndex(v_x_2248_);
lean_dec(v_x_2248_);
v_r_2250_ = lean_box(v_res_2249_);
return v_r_2250_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0___redArg(size_t v_sz_2251_, size_t v_i_2252_, lean_object* v_bs_2253_){
_start:
{
uint8_t v___x_2254_; 
v___x_2254_ = lean_usize_dec_lt(v_i_2252_, v_sz_2251_);
if (v___x_2254_ == 0)
{
return v_bs_2253_;
}
else
{
lean_object* v_v_2255_; lean_object* v___x_2256_; lean_object* v_bs_x27_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; uint8_t v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; size_t v___x_2265_; size_t v___x_2266_; lean_object* v___x_2267_; 
v_v_2255_ = lean_array_uget(v_bs_2253_, v_i_2252_);
v___x_2256_ = lean_unsigned_to_nat(0u);
v_bs_x27_2257_ = lean_array_uset(v_bs_2253_, v_i_2252_, v___x_2256_);
v___x_2258_ = lean_usize_to_nat(v_i_2252_);
v___x_2259_ = lean_nat_to_int(v___x_2258_);
v___x_2260_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_2261_ = lean_int_add(v___x_2259_, v___x_2260_);
lean_dec(v___x_2259_);
v___x_2262_ = l_Std_Time_Weekday_ofOrdinal(v___x_2261_);
lean_dec(v___x_2261_);
v___x_2263_ = lean_box(v___x_2262_);
v___x_2264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2264_, 0, v_v_2255_);
lean_ctor_set(v___x_2264_, 1, v___x_2263_);
v___x_2265_ = ((size_t)1ULL);
v___x_2266_ = lean_usize_add(v_i_2252_, v___x_2265_);
v___x_2267_ = lean_array_uset(v_bs_x27_2257_, v_i_2252_, v___x_2264_);
v_i_2252_ = v___x_2266_;
v_bs_2253_ = v___x_2267_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0___redArg___boxed(lean_object* v_sz_2269_, lean_object* v_i_2270_, lean_object* v_bs_2271_){
_start:
{
size_t v_sz_boxed_2272_; size_t v_i_boxed_2273_; lean_object* v_res_2274_; 
v_sz_boxed_2272_ = lean_unbox_usize(v_sz_2269_);
lean_dec(v_sz_2269_);
v_i_boxed_2273_ = lean_unbox_usize(v_i_2270_);
lean_dec(v_i_2270_);
v_res_2274_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0___redArg(v_sz_boxed_2272_, v_i_boxed_2273_, v_bs_2271_);
return v_res_2274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0(lean_object* v_as_2275_, size_t v_sz_2276_, size_t v_i_2277_, lean_object* v_bs_2278_){
_start:
{
uint8_t v___x_2279_; 
v___x_2279_ = lean_usize_dec_lt(v_i_2277_, v_sz_2276_);
if (v___x_2279_ == 0)
{
return v_bs_2278_;
}
else
{
lean_object* v_v_2280_; lean_object* v___x_2281_; lean_object* v_bs_x27_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; uint8_t v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; size_t v___x_2290_; size_t v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v_v_2280_ = lean_array_uget(v_bs_2278_, v_i_2277_);
v___x_2281_ = lean_unsigned_to_nat(0u);
v_bs_x27_2282_ = lean_array_uset(v_bs_2278_, v_i_2277_, v___x_2281_);
v___x_2283_ = lean_usize_to_nat(v_i_2277_);
v___x_2284_ = lean_nat_to_int(v___x_2283_);
v___x_2285_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_2286_ = lean_int_add(v___x_2284_, v___x_2285_);
lean_dec(v___x_2284_);
v___x_2287_ = l_Std_Time_Weekday_ofOrdinal(v___x_2286_);
lean_dec(v___x_2286_);
v___x_2288_ = lean_box(v___x_2287_);
v___x_2289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2289_, 0, v_v_2280_);
lean_ctor_set(v___x_2289_, 1, v___x_2288_);
v___x_2290_ = ((size_t)1ULL);
v___x_2291_ = lean_usize_add(v_i_2277_, v___x_2290_);
v___x_2292_ = lean_array_uset(v_bs_x27_2282_, v_i_2277_, v___x_2289_);
v___x_2293_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0___redArg(v_sz_2276_, v___x_2291_, v___x_2292_);
return v___x_2293_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0___boxed(lean_object* v_as_2294_, lean_object* v_sz_2295_, lean_object* v_i_2296_, lean_object* v_bs_2297_){
_start:
{
size_t v_sz_boxed_2298_; size_t v_i_boxed_2299_; lean_object* v_res_2300_; 
v_sz_boxed_2298_ = lean_unbox_usize(v_sz_2295_);
lean_dec(v_sz_2295_);
v_i_boxed_2299_ = lean_unbox_usize(v_i_2296_);
lean_dec(v_i_2296_);
v_res_2300_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0(v_as_2294_, v_sz_boxed_2298_, v_i_boxed_2299_, v_bs_2297_);
lean_dec_ref(v_as_2294_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs(lean_object* v_arr_2301_){
_start:
{
size_t v_sz_2302_; size_t v___x_2303_; lean_object* v___x_2304_; 
v_sz_2302_ = lean_array_size(v_arr_2301_);
v___x_2303_ = ((size_t)0ULL);
lean_inc_ref(v_arr_2301_);
v___x_2304_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0(v_arr_2301_, v_sz_2302_, v___x_2303_, v_arr_2301_);
lean_dec_ref(v_arr_2301_);
return v___x_2304_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0(lean_object* v_as_2305_, size_t v_sz_2306_, size_t v_i_2307_, lean_object* v_bs_2308_){
_start:
{
lean_object* v___x_2309_; 
v___x_2309_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0___redArg(v_sz_2306_, v_i_2307_, v_bs_2308_);
return v___x_2309_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0___boxed(lean_object* v_as_2310_, lean_object* v_sz_2311_, lean_object* v_i_2312_, lean_object* v_bs_2313_){
_start:
{
size_t v_sz_boxed_2314_; size_t v_i_boxed_2315_; lean_object* v_res_2316_; 
v_sz_boxed_2314_ = lean_unbox_usize(v_sz_2311_);
lean_dec(v_sz_2311_);
v_i_boxed_2315_ = lean_unbox_usize(v_i_2312_);
lean_dec(v_i_2312_);
v_res_2316_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0(v_as_2310_, v_sz_boxed_2314_, v_i_boxed_2315_, v_bs_2313_);
lean_dec_ref(v_as_2310_);
return v_res_2316_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_eraOfIndex(lean_object* v_x_2317_){
_start:
{
lean_object* v___x_2318_; uint8_t v___x_2319_; 
v___x_2318_ = lean_unsigned_to_nat(0u);
v___x_2319_ = lean_nat_dec_eq(v_x_2317_, v___x_2318_);
if (v___x_2319_ == 0)
{
uint8_t v___x_2320_; 
v___x_2320_ = 1;
return v___x_2320_;
}
else
{
uint8_t v___x_2321_; 
v___x_2321_ = 0;
return v___x_2321_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraOfIndex___boxed(lean_object* v_x_2322_){
_start:
{
uint8_t v_res_2323_; lean_object* v_r_2324_; 
v_res_2323_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraOfIndex(v_x_2322_);
lean_dec(v_x_2322_);
v_r_2324_ = lean_box(v_res_2323_);
return v_r_2324_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0___redArg(size_t v_sz_2325_, size_t v_i_2326_, lean_object* v_bs_2327_){
_start:
{
uint8_t v___x_2328_; 
v___x_2328_ = lean_usize_dec_lt(v_i_2326_, v_sz_2325_);
if (v___x_2328_ == 0)
{
return v_bs_2327_;
}
else
{
lean_object* v_v_2329_; lean_object* v___x_2330_; lean_object* v_bs_x27_2331_; lean_object* v___x_2332_; uint8_t v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; size_t v___x_2336_; size_t v___x_2337_; lean_object* v___x_2338_; 
v_v_2329_ = lean_array_uget(v_bs_2327_, v_i_2326_);
v___x_2330_ = lean_unsigned_to_nat(0u);
v_bs_x27_2331_ = lean_array_uset(v_bs_2327_, v_i_2326_, v___x_2330_);
v___x_2332_ = lean_usize_to_nat(v_i_2326_);
v___x_2333_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraOfIndex(v___x_2332_);
lean_dec(v___x_2332_);
v___x_2334_ = lean_box(v___x_2333_);
v___x_2335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2335_, 0, v_v_2329_);
lean_ctor_set(v___x_2335_, 1, v___x_2334_);
v___x_2336_ = ((size_t)1ULL);
v___x_2337_ = lean_usize_add(v_i_2326_, v___x_2336_);
v___x_2338_ = lean_array_uset(v_bs_x27_2331_, v_i_2326_, v___x_2335_);
v_i_2326_ = v___x_2337_;
v_bs_2327_ = v___x_2338_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0___redArg___boxed(lean_object* v_sz_2340_, lean_object* v_i_2341_, lean_object* v_bs_2342_){
_start:
{
size_t v_sz_boxed_2343_; size_t v_i_boxed_2344_; lean_object* v_res_2345_; 
v_sz_boxed_2343_ = lean_unbox_usize(v_sz_2340_);
lean_dec(v_sz_2340_);
v_i_boxed_2344_ = lean_unbox_usize(v_i_2341_);
lean_dec(v_i_2341_);
v_res_2345_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0___redArg(v_sz_boxed_2343_, v_i_boxed_2344_, v_bs_2342_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraPairs(lean_object* v_arr_2346_){
_start:
{
size_t v_sz_2347_; size_t v___x_2348_; lean_object* v___x_2349_; 
v_sz_2347_ = lean_array_size(v_arr_2346_);
v___x_2348_ = ((size_t)0ULL);
v___x_2349_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0___redArg(v_sz_2347_, v___x_2348_, v_arr_2346_);
return v___x_2349_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0(lean_object* v_as_2350_, size_t v_sz_2351_, size_t v_i_2352_, lean_object* v_bs_2353_){
_start:
{
lean_object* v___x_2354_; 
v___x_2354_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0___redArg(v_sz_2351_, v_i_2352_, v_bs_2353_);
return v___x_2354_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0___boxed(lean_object* v_as_2355_, lean_object* v_sz_2356_, lean_object* v_i_2357_, lean_object* v_bs_2358_){
_start:
{
size_t v_sz_boxed_2359_; size_t v_i_boxed_2360_; lean_object* v_res_2361_; 
v_sz_boxed_2359_ = lean_unbox_usize(v_sz_2356_);
lean_dec(v_sz_2356_);
v_i_boxed_2360_ = lean_unbox_usize(v_i_2357_);
lean_dec(v_i_2357_);
v_res_2361_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0(v_as_2355_, v_sz_boxed_2359_, v_i_boxed_2360_, v_bs_2358_);
lean_dec_ref(v_as_2355_);
return v_res_2361_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_quarterPairs(lean_object* v_arr_2362_){
_start:
{
size_t v_sz_2363_; size_t v___x_2364_; lean_object* v___x_2365_; 
v_sz_2363_ = lean_array_size(v_arr_2362_);
v___x_2364_ = ((size_t)0ULL);
lean_inc_ref(v_arr_2362_);
v___x_2365_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0(v_arr_2362_, v_sz_2363_, v___x_2364_, v_arr_2362_);
lean_dec_ref(v_arr_2362_);
return v___x_2365_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseMonthLong(lean_object* v_symbols_2366_, lean_object* v_a_2367_){
_start:
{
lean_object* v_monthLong_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; 
v_monthLong_2368_ = lean_ctor_get(v_symbols_2366_, 0);
lean_inc_ref(v_monthLong_2368_);
lean_dec_ref(v_symbols_2366_);
v___x_2369_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthPairs(v_monthLong_2368_);
v___x_2370_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2369_, v_a_2367_);
lean_dec_ref(v___x_2369_);
return v___x_2370_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_parseMonthShort(lean_object* v_symbols_2371_, lean_object* v_a_2372_){
_start:
{
lean_object* v_monthShort_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; 
v_monthShort_2373_ = lean_ctor_get(v_symbols_2371_, 1);
lean_inc_ref(v_monthShort_2373_);
lean_dec_ref(v_symbols_2371_);
v___x_2374_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthPairs(v_monthShort_2373_);
v___x_2375_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2374_, v_a_2372_);
lean_dec_ref(v___x_2374_);
return v___x_2375_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseMonthNarrow(lean_object* v_symbols_2376_, lean_object* v_a_2377_){
_start:
{
lean_object* v_monthNarrow_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; 
v_monthNarrow_2378_ = lean_ctor_get(v_symbols_2376_, 2);
lean_inc_ref(v_monthNarrow_2378_);
lean_dec_ref(v_symbols_2376_);
v___x_2379_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthPairs(v_monthNarrow_2378_);
v___x_2380_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2379_, v_a_2377_);
lean_dec_ref(v___x_2379_);
return v___x_2380_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayLong(lean_object* v_symbols_2381_, lean_object* v_a_2382_){
_start:
{
lean_object* v_weekdayLong_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; 
v_weekdayLong_2383_ = lean_ctor_get(v_symbols_2381_, 3);
lean_inc_ref(v_weekdayLong_2383_);
lean_dec_ref(v_symbols_2381_);
v___x_2384_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs(v_weekdayLong_2383_);
v___x_2385_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2384_, v_a_2382_);
lean_dec_ref(v___x_2384_);
return v___x_2385_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayShort(lean_object* v_symbols_2386_, lean_object* v_a_2387_){
_start:
{
lean_object* v_weekdayShort_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; 
v_weekdayShort_2388_ = lean_ctor_get(v_symbols_2386_, 4);
lean_inc_ref(v_weekdayShort_2388_);
lean_dec_ref(v_symbols_2386_);
v___x_2389_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs(v_weekdayShort_2388_);
v___x_2390_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2389_, v_a_2387_);
lean_dec_ref(v___x_2389_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayNarrow(lean_object* v_symbols_2391_, lean_object* v_a_2392_){
_start:
{
lean_object* v_weekdayNarrow_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; 
v_weekdayNarrow_2393_ = lean_ctor_get(v_symbols_2391_, 5);
lean_inc_ref(v_weekdayNarrow_2393_);
lean_dec_ref(v_symbols_2391_);
v___x_2394_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs(v_weekdayNarrow_2393_);
v___x_2395_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2394_, v_a_2392_);
lean_dec_ref(v___x_2394_);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayTwoLetter(lean_object* v_symbols_2396_, lean_object* v_a_2397_){
_start:
{
lean_object* v_weekdayTwoLetter_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; 
v_weekdayTwoLetter_2398_ = lean_ctor_get(v_symbols_2396_, 6);
lean_inc_ref(v_weekdayTwoLetter_2398_);
lean_dec_ref(v_symbols_2396_);
v___x_2399_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs(v_weekdayTwoLetter_2398_);
v___x_2400_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2399_, v_a_2397_);
lean_dec_ref(v___x_2399_);
return v___x_2400_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseEraShort(lean_object* v_symbols_2401_, lean_object* v_a_2402_){
_start:
{
lean_object* v_eraShort_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; 
v_eraShort_2403_ = lean_ctor_get(v_symbols_2401_, 7);
lean_inc_ref(v_eraShort_2403_);
lean_dec_ref(v_symbols_2401_);
v___x_2404_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraPairs(v_eraShort_2403_);
v___x_2405_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2404_, v_a_2402_);
lean_dec_ref(v___x_2404_);
return v___x_2405_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseEraLong(lean_object* v_symbols_2406_, lean_object* v_a_2407_){
_start:
{
lean_object* v_eraLong_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v_eraLong_2408_ = lean_ctor_get(v_symbols_2406_, 8);
lean_inc_ref(v_eraLong_2408_);
lean_dec_ref(v_symbols_2406_);
v___x_2409_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraPairs(v_eraLong_2408_);
v___x_2410_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2409_, v_a_2407_);
lean_dec_ref(v___x_2409_);
return v___x_2410_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseEraNarrow(lean_object* v_symbols_2411_, lean_object* v_a_2412_){
_start:
{
lean_object* v_eraNarrow_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; 
v_eraNarrow_2413_ = lean_ctor_get(v_symbols_2411_, 9);
lean_inc_ref(v_eraNarrow_2413_);
lean_dec_ref(v_symbols_2411_);
v___x_2414_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraPairs(v_eraNarrow_2413_);
v___x_2415_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2414_, v_a_2412_);
lean_dec_ref(v___x_2414_);
return v___x_2415_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNumber___closed__0(void){
_start:
{
lean_object* v___x_2416_; lean_object* v___x_2417_; 
v___x_2416_ = lean_unsigned_to_nat(3u);
v___x_2417_ = lean_nat_to_int(v___x_2416_);
return v___x_2417_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNumber(lean_object* v_a_2418_){
_start:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2419_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__0));
lean_inc_ref(v_a_2418_);
v___x_2420_ = l_Std_Internal_Parsec_String_pstring(v___x_2419_, v_a_2418_);
if (lean_obj_tag(v___x_2420_) == 0)
{
lean_object* v_pos_2421_; lean_object* v___x_2423_; uint8_t v_isShared_2424_; uint8_t v_isSharedCheck_2429_; 
lean_dec_ref(v_a_2418_);
v_pos_2421_ = lean_ctor_get(v___x_2420_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2420_);
if (v_isSharedCheck_2429_ == 0)
{
lean_object* v_unused_2430_; 
v_unused_2430_ = lean_ctor_get(v___x_2420_, 1);
lean_dec(v_unused_2430_);
v___x_2423_ = v___x_2420_;
v_isShared_2424_ = v_isSharedCheck_2429_;
goto v_resetjp_2422_;
}
else
{
lean_inc(v_pos_2421_);
lean_dec(v___x_2420_);
v___x_2423_ = lean_box(0);
v_isShared_2424_ = v_isSharedCheck_2429_;
goto v_resetjp_2422_;
}
v_resetjp_2422_:
{
lean_object* v___x_2425_; lean_object* v___x_2427_; 
v___x_2425_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
if (v_isShared_2424_ == 0)
{
lean_ctor_set(v___x_2423_, 1, v___x_2425_);
v___x_2427_ = v___x_2423_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_pos_2421_);
lean_ctor_set(v_reuseFailAlloc_2428_, 1, v___x_2425_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
return v___x_2427_;
}
}
}
else
{
lean_object* v_pos_2431_; lean_object* v_err_2432_; lean_object* v___x_2434_; uint8_t v_isShared_2435_; uint8_t v_isSharedCheck_2509_; 
v_pos_2431_ = lean_ctor_get(v___x_2420_, 0);
v_err_2432_ = lean_ctor_get(v___x_2420_, 1);
v_isSharedCheck_2509_ = !lean_is_exclusive(v___x_2420_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2434_ = v___x_2420_;
v_isShared_2435_ = v_isSharedCheck_2509_;
goto v_resetjp_2433_;
}
else
{
lean_inc(v_err_2432_);
lean_inc(v_pos_2431_);
lean_dec(v___x_2420_);
v___x_2434_ = lean_box(0);
v_isShared_2435_ = v_isSharedCheck_2509_;
goto v_resetjp_2433_;
}
v_resetjp_2433_:
{
lean_object* v_snd_2436_; lean_object* v_snd_2437_; uint8_t v_decide_2438_; 
v_snd_2436_ = lean_ctor_get(v_a_2418_, 1);
lean_inc(v_snd_2436_);
lean_dec_ref(v_a_2418_);
v_snd_2437_ = lean_ctor_get(v_pos_2431_, 1);
v_decide_2438_ = lean_nat_dec_eq(v_snd_2436_, v_snd_2437_);
lean_dec(v_snd_2436_);
if (v_decide_2438_ == 0)
{
lean_object* v___x_2440_; 
if (v_isShared_2435_ == 0)
{
v___x_2440_ = v___x_2434_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v_pos_2431_);
lean_ctor_set(v_reuseFailAlloc_2441_, 1, v_err_2432_);
v___x_2440_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
return v___x_2440_;
}
}
else
{
lean_object* v___x_2442_; lean_object* v___x_2443_; 
lean_inc(v_snd_2437_);
lean_del_object(v___x_2434_);
lean_dec(v_err_2432_);
v___x_2442_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__1));
v___x_2443_ = l_Std_Internal_Parsec_String_pstring(v___x_2442_, v_pos_2431_);
if (lean_obj_tag(v___x_2443_) == 0)
{
lean_object* v_pos_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2452_; 
lean_dec(v_snd_2437_);
v_pos_2444_ = lean_ctor_get(v___x_2443_, 0);
v_isSharedCheck_2452_ = !lean_is_exclusive(v___x_2443_);
if (v_isSharedCheck_2452_ == 0)
{
lean_object* v_unused_2453_; 
v_unused_2453_ = lean_ctor_get(v___x_2443_, 1);
lean_dec(v_unused_2453_);
v___x_2446_ = v___x_2443_;
v_isShared_2447_ = v_isSharedCheck_2452_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_pos_2444_);
lean_dec(v___x_2443_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2452_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2448_; lean_object* v___x_2450_; 
v___x_2448_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__3, &l_Std_Time_instReprFormatPart_repr___closed__3_once, _init_l_Std_Time_instReprFormatPart_repr___closed__3);
if (v_isShared_2447_ == 0)
{
lean_ctor_set(v___x_2446_, 1, v___x_2448_);
v___x_2450_ = v___x_2446_;
goto v_reusejp_2449_;
}
else
{
lean_object* v_reuseFailAlloc_2451_; 
v_reuseFailAlloc_2451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2451_, 0, v_pos_2444_);
lean_ctor_set(v_reuseFailAlloc_2451_, 1, v___x_2448_);
v___x_2450_ = v_reuseFailAlloc_2451_;
goto v_reusejp_2449_;
}
v_reusejp_2449_:
{
return v___x_2450_;
}
}
}
else
{
lean_object* v_pos_2454_; lean_object* v_err_2455_; lean_object* v___x_2457_; uint8_t v_isShared_2458_; uint8_t v_isSharedCheck_2508_; 
v_pos_2454_ = lean_ctor_get(v___x_2443_, 0);
v_err_2455_ = lean_ctor_get(v___x_2443_, 1);
v_isSharedCheck_2508_ = !lean_is_exclusive(v___x_2443_);
if (v_isSharedCheck_2508_ == 0)
{
v___x_2457_ = v___x_2443_;
v_isShared_2458_ = v_isSharedCheck_2508_;
goto v_resetjp_2456_;
}
else
{
lean_inc(v_err_2455_);
lean_inc(v_pos_2454_);
lean_dec(v___x_2443_);
v___x_2457_ = lean_box(0);
v_isShared_2458_ = v_isSharedCheck_2508_;
goto v_resetjp_2456_;
}
v_resetjp_2456_:
{
lean_object* v_snd_2459_; uint8_t v_decide_2460_; 
v_snd_2459_ = lean_ctor_get(v_pos_2454_, 1);
v_decide_2460_ = lean_nat_dec_eq(v_snd_2437_, v_snd_2459_);
lean_dec(v_snd_2437_);
if (v_decide_2460_ == 0)
{
lean_object* v___x_2462_; 
if (v_isShared_2458_ == 0)
{
v___x_2462_ = v___x_2457_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v_pos_2454_);
lean_ctor_set(v_reuseFailAlloc_2463_, 1, v_err_2455_);
v___x_2462_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
return v___x_2462_;
}
}
else
{
lean_object* v___x_2464_; lean_object* v___x_2465_; 
lean_inc(v_snd_2459_);
lean_del_object(v___x_2457_);
lean_dec(v_err_2455_);
v___x_2464_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__2));
v___x_2465_ = l_Std_Internal_Parsec_String_pstring(v___x_2464_, v_pos_2454_);
if (lean_obj_tag(v___x_2465_) == 0)
{
lean_object* v_pos_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2474_; 
lean_dec(v_snd_2459_);
v_pos_2466_ = lean_ctor_get(v___x_2465_, 0);
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2465_);
if (v_isSharedCheck_2474_ == 0)
{
lean_object* v_unused_2475_; 
v_unused_2475_ = lean_ctor_get(v___x_2465_, 1);
lean_dec(v_unused_2475_);
v___x_2468_ = v___x_2465_;
v_isShared_2469_ = v_isSharedCheck_2474_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_pos_2466_);
lean_dec(v___x_2465_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2474_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2470_; lean_object* v___x_2472_; 
v___x_2470_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNumber___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNumber___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNumber___closed__0);
if (v_isShared_2469_ == 0)
{
lean_ctor_set(v___x_2468_, 1, v___x_2470_);
v___x_2472_ = v___x_2468_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_pos_2466_);
lean_ctor_set(v_reuseFailAlloc_2473_, 1, v___x_2470_);
v___x_2472_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
return v___x_2472_;
}
}
}
else
{
lean_object* v_pos_2476_; lean_object* v_err_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2507_; 
v_pos_2476_ = lean_ctor_get(v___x_2465_, 0);
v_err_2477_ = lean_ctor_get(v___x_2465_, 1);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2465_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2479_ = v___x_2465_;
v_isShared_2480_ = v_isSharedCheck_2507_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_err_2477_);
lean_inc(v_pos_2476_);
lean_dec(v___x_2465_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2507_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v_snd_2481_; uint8_t v_decide_2482_; 
v_snd_2481_ = lean_ctor_get(v_pos_2476_, 1);
v_decide_2482_ = lean_nat_dec_eq(v_snd_2459_, v_snd_2481_);
lean_dec(v_snd_2459_);
if (v_decide_2482_ == 0)
{
lean_object* v___x_2484_; 
if (v_isShared_2480_ == 0)
{
v___x_2484_ = v___x_2479_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2485_; 
v_reuseFailAlloc_2485_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2485_, 0, v_pos_2476_);
lean_ctor_set(v_reuseFailAlloc_2485_, 1, v_err_2477_);
v___x_2484_ = v_reuseFailAlloc_2485_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
return v___x_2484_;
}
}
else
{
lean_object* v___x_2486_; lean_object* v___x_2487_; 
lean_del_object(v___x_2479_);
lean_dec(v_err_2477_);
v___x_2486_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__3));
v___x_2487_ = l_Std_Internal_Parsec_String_pstring(v___x_2486_, v_pos_2476_);
if (lean_obj_tag(v___x_2487_) == 0)
{
lean_object* v_pos_2488_; lean_object* v___x_2490_; uint8_t v_isShared_2491_; uint8_t v_isSharedCheck_2496_; 
v_pos_2488_ = lean_ctor_get(v___x_2487_, 0);
v_isSharedCheck_2496_ = !lean_is_exclusive(v___x_2487_);
if (v_isSharedCheck_2496_ == 0)
{
lean_object* v_unused_2497_; 
v_unused_2497_ = lean_ctor_get(v___x_2487_, 1);
lean_dec(v_unused_2497_);
v___x_2490_ = v___x_2487_;
v_isShared_2491_ = v_isSharedCheck_2496_;
goto v_resetjp_2489_;
}
else
{
lean_inc(v_pos_2488_);
lean_dec(v___x_2487_);
v___x_2490_ = lean_box(0);
v_isShared_2491_ = v_isSharedCheck_2496_;
goto v_resetjp_2489_;
}
v_resetjp_2489_:
{
lean_object* v___x_2492_; lean_object* v___x_2494_; 
v___x_2492_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0);
if (v_isShared_2491_ == 0)
{
lean_ctor_set(v___x_2490_, 1, v___x_2492_);
v___x_2494_ = v___x_2490_;
goto v_reusejp_2493_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v_pos_2488_);
lean_ctor_set(v_reuseFailAlloc_2495_, 1, v___x_2492_);
v___x_2494_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2493_;
}
v_reusejp_2493_:
{
return v___x_2494_;
}
}
}
else
{
lean_object* v_pos_2498_; lean_object* v_err_2499_; lean_object* v___x_2501_; uint8_t v_isShared_2502_; uint8_t v_isSharedCheck_2506_; 
v_pos_2498_ = lean_ctor_get(v___x_2487_, 0);
v_err_2499_ = lean_ctor_get(v___x_2487_, 1);
v_isSharedCheck_2506_ = !lean_is_exclusive(v___x_2487_);
if (v_isSharedCheck_2506_ == 0)
{
v___x_2501_ = v___x_2487_;
v_isShared_2502_ = v_isSharedCheck_2506_;
goto v_resetjp_2500_;
}
else
{
lean_inc(v_err_2499_);
lean_inc(v_pos_2498_);
lean_dec(v___x_2487_);
v___x_2501_ = lean_box(0);
v_isShared_2502_ = v_isSharedCheck_2506_;
goto v_resetjp_2500_;
}
v_resetjp_2500_:
{
lean_object* v___x_2504_; 
if (v_isShared_2502_ == 0)
{
v___x_2504_ = v___x_2501_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2505_; 
v_reuseFailAlloc_2505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2505_, 0, v_pos_2498_);
lean_ctor_set(v_reuseFailAlloc_2505_, 1, v_err_2499_);
v___x_2504_ = v_reuseFailAlloc_2505_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
return v___x_2504_;
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
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterLong(lean_object* v_symbols_2510_, lean_object* v_a_2511_){
_start:
{
lean_object* v_quarterLong_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; 
v_quarterLong_2512_ = lean_ctor_get(v_symbols_2510_, 11);
lean_inc_ref(v_quarterLong_2512_);
lean_dec_ref(v_symbols_2510_);
v___x_2513_ = l___private_Std_Time_Format_Basic_0__Std_Time_quarterPairs(v_quarterLong_2512_);
v___x_2514_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2513_, v_a_2511_);
lean_dec_ref(v___x_2513_);
return v___x_2514_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterShort(lean_object* v_symbols_2515_, lean_object* v_a_2516_){
_start:
{
lean_object* v_quarterShort_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
v_quarterShort_2517_ = lean_ctor_get(v_symbols_2515_, 10);
lean_inc_ref(v_quarterShort_2517_);
lean_dec_ref(v_symbols_2515_);
v___x_2518_ = l___private_Std_Time_Format_Basic_0__Std_Time_quarterPairs(v_quarterShort_2517_);
v___x_2519_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2518_, v_a_2516_);
lean_dec_ref(v___x_2518_);
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNarrow(lean_object* v_symbols_2520_, lean_object* v_a_2521_){
_start:
{
lean_object* v_quarterNarrow_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; 
v_quarterNarrow_2522_ = lean_ctor_get(v_symbols_2520_, 12);
lean_inc_ref(v_quarterNarrow_2522_);
lean_dec_ref(v_symbols_2520_);
v___x_2523_ = l___private_Std_Time_Format_Basic_0__Std_Time_quarterPairs(v_quarterNarrow_2522_);
v___x_2524_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2523_, v_a_2521_);
lean_dec_ref(v___x_2523_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseMarkerShort(lean_object* v_symbols_2525_, lean_object* v_a_2526_){
_start:
{
lean_object* v_amShort_2527_; lean_object* v_pmShort_2528_; lean_object* v___x_2529_; 
v_amShort_2527_ = lean_ctor_get(v_symbols_2525_, 13);
lean_inc_ref(v_amShort_2527_);
v_pmShort_2528_ = lean_ctor_get(v_symbols_2525_, 14);
lean_inc_ref(v_pmShort_2528_);
lean_dec_ref(v_symbols_2525_);
lean_inc_ref(v_a_2526_);
v___x_2529_ = l_Std_Internal_Parsec_String_pstring(v_amShort_2527_, v_a_2526_);
if (lean_obj_tag(v___x_2529_) == 0)
{
lean_object* v_pos_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2539_; 
lean_dec_ref(v_pmShort_2528_);
lean_dec_ref(v_a_2526_);
v_pos_2530_ = lean_ctor_get(v___x_2529_, 0);
v_isSharedCheck_2539_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2539_ == 0)
{
lean_object* v_unused_2540_; 
v_unused_2540_ = lean_ctor_get(v___x_2529_, 1);
lean_dec(v_unused_2540_);
v___x_2532_ = v___x_2529_;
v_isShared_2533_ = v_isSharedCheck_2539_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_pos_2530_);
lean_dec(v___x_2529_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2539_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
uint8_t v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2537_; 
v___x_2534_ = 0;
v___x_2535_ = lean_box(v___x_2534_);
if (v_isShared_2533_ == 0)
{
lean_ctor_set(v___x_2532_, 1, v___x_2535_);
v___x_2537_ = v___x_2532_;
goto v_reusejp_2536_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v_pos_2530_);
lean_ctor_set(v_reuseFailAlloc_2538_, 1, v___x_2535_);
v___x_2537_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2536_;
}
v_reusejp_2536_:
{
return v___x_2537_;
}
}
}
else
{
lean_object* v_pos_2541_; lean_object* v_err_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2573_; 
v_pos_2541_ = lean_ctor_get(v___x_2529_, 0);
v_err_2542_ = lean_ctor_get(v___x_2529_, 1);
v_isSharedCheck_2573_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2544_ = v___x_2529_;
v_isShared_2545_ = v_isSharedCheck_2573_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_err_2542_);
lean_inc(v_pos_2541_);
lean_dec(v___x_2529_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2573_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v_snd_2546_; lean_object* v_snd_2547_; uint8_t v_decide_2548_; 
v_snd_2546_ = lean_ctor_get(v_a_2526_, 1);
lean_inc(v_snd_2546_);
lean_dec_ref(v_a_2526_);
v_snd_2547_ = lean_ctor_get(v_pos_2541_, 1);
v_decide_2548_ = lean_nat_dec_eq(v_snd_2546_, v_snd_2547_);
lean_dec(v_snd_2546_);
if (v_decide_2548_ == 0)
{
lean_object* v___x_2550_; 
lean_dec_ref(v_pmShort_2528_);
if (v_isShared_2545_ == 0)
{
v___x_2550_ = v___x_2544_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2551_; 
v_reuseFailAlloc_2551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2551_, 0, v_pos_2541_);
lean_ctor_set(v_reuseFailAlloc_2551_, 1, v_err_2542_);
v___x_2550_ = v_reuseFailAlloc_2551_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
return v___x_2550_;
}
}
else
{
lean_object* v___x_2552_; 
lean_del_object(v___x_2544_);
lean_dec(v_err_2542_);
v___x_2552_ = l_Std_Internal_Parsec_String_pstring(v_pmShort_2528_, v_pos_2541_);
if (lean_obj_tag(v___x_2552_) == 0)
{
lean_object* v_pos_2553_; lean_object* v___x_2555_; uint8_t v_isShared_2556_; uint8_t v_isSharedCheck_2562_; 
v_pos_2553_ = lean_ctor_get(v___x_2552_, 0);
v_isSharedCheck_2562_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2562_ == 0)
{
lean_object* v_unused_2563_; 
v_unused_2563_ = lean_ctor_get(v___x_2552_, 1);
lean_dec(v_unused_2563_);
v___x_2555_ = v___x_2552_;
v_isShared_2556_ = v_isSharedCheck_2562_;
goto v_resetjp_2554_;
}
else
{
lean_inc(v_pos_2553_);
lean_dec(v___x_2552_);
v___x_2555_ = lean_box(0);
v_isShared_2556_ = v_isSharedCheck_2562_;
goto v_resetjp_2554_;
}
v_resetjp_2554_:
{
uint8_t v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2560_; 
v___x_2557_ = 1;
v___x_2558_ = lean_box(v___x_2557_);
if (v_isShared_2556_ == 0)
{
lean_ctor_set(v___x_2555_, 1, v___x_2558_);
v___x_2560_ = v___x_2555_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2561_; 
v_reuseFailAlloc_2561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2561_, 0, v_pos_2553_);
lean_ctor_set(v_reuseFailAlloc_2561_, 1, v___x_2558_);
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
lean_object* v_pos_2564_; lean_object* v_err_2565_; lean_object* v___x_2567_; uint8_t v_isShared_2568_; uint8_t v_isSharedCheck_2572_; 
v_pos_2564_ = lean_ctor_get(v___x_2552_, 0);
v_err_2565_ = lean_ctor_get(v___x_2552_, 1);
v_isSharedCheck_2572_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2572_ == 0)
{
v___x_2567_ = v___x_2552_;
v_isShared_2568_ = v_isSharedCheck_2572_;
goto v_resetjp_2566_;
}
else
{
lean_inc(v_err_2565_);
lean_inc(v_pos_2564_);
lean_dec(v___x_2552_);
v___x_2567_ = lean_box(0);
v_isShared_2568_ = v_isSharedCheck_2572_;
goto v_resetjp_2566_;
}
v_resetjp_2566_:
{
lean_object* v___x_2570_; 
if (v_isShared_2568_ == 0)
{
v___x_2570_ = v___x_2567_;
goto v_reusejp_2569_;
}
else
{
lean_object* v_reuseFailAlloc_2571_; 
v_reuseFailAlloc_2571_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2571_, 0, v_pos_2564_);
lean_ctor_set(v_reuseFailAlloc_2571_, 1, v_err_2565_);
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
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseMarkerLong(lean_object* v_symbols_2574_, lean_object* v_a_2575_){
_start:
{
lean_object* v_amLong_2576_; lean_object* v_pmLong_2577_; lean_object* v___x_2578_; 
v_amLong_2576_ = lean_ctor_get(v_symbols_2574_, 15);
lean_inc_ref(v_amLong_2576_);
v_pmLong_2577_ = lean_ctor_get(v_symbols_2574_, 16);
lean_inc_ref(v_pmLong_2577_);
lean_dec_ref(v_symbols_2574_);
lean_inc_ref(v_a_2575_);
v___x_2578_ = l_Std_Internal_Parsec_String_pstring(v_amLong_2576_, v_a_2575_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v_pos_2579_; lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2588_; 
lean_dec_ref(v_pmLong_2577_);
lean_dec_ref(v_a_2575_);
v_pos_2579_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2588_ == 0)
{
lean_object* v_unused_2589_; 
v_unused_2589_ = lean_ctor_get(v___x_2578_, 1);
lean_dec(v_unused_2589_);
v___x_2581_ = v___x_2578_;
v_isShared_2582_ = v_isSharedCheck_2588_;
goto v_resetjp_2580_;
}
else
{
lean_inc(v_pos_2579_);
lean_dec(v___x_2578_);
v___x_2581_ = lean_box(0);
v_isShared_2582_ = v_isSharedCheck_2588_;
goto v_resetjp_2580_;
}
v_resetjp_2580_:
{
uint8_t v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2586_; 
v___x_2583_ = 0;
v___x_2584_ = lean_box(v___x_2583_);
if (v_isShared_2582_ == 0)
{
lean_ctor_set(v___x_2581_, 1, v___x_2584_);
v___x_2586_ = v___x_2581_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v_pos_2579_);
lean_ctor_set(v_reuseFailAlloc_2587_, 1, v___x_2584_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
else
{
lean_object* v_pos_2590_; lean_object* v_err_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2622_; 
v_pos_2590_ = lean_ctor_get(v___x_2578_, 0);
v_err_2591_ = lean_ctor_get(v___x_2578_, 1);
v_isSharedCheck_2622_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2593_ = v___x_2578_;
v_isShared_2594_ = v_isSharedCheck_2622_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_err_2591_);
lean_inc(v_pos_2590_);
lean_dec(v___x_2578_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2622_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v_snd_2595_; lean_object* v_snd_2596_; uint8_t v_decide_2597_; 
v_snd_2595_ = lean_ctor_get(v_a_2575_, 1);
lean_inc(v_snd_2595_);
lean_dec_ref(v_a_2575_);
v_snd_2596_ = lean_ctor_get(v_pos_2590_, 1);
v_decide_2597_ = lean_nat_dec_eq(v_snd_2595_, v_snd_2596_);
lean_dec(v_snd_2595_);
if (v_decide_2597_ == 0)
{
lean_object* v___x_2599_; 
lean_dec_ref(v_pmLong_2577_);
if (v_isShared_2594_ == 0)
{
v___x_2599_ = v___x_2593_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v_pos_2590_);
lean_ctor_set(v_reuseFailAlloc_2600_, 1, v_err_2591_);
v___x_2599_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
return v___x_2599_;
}
}
else
{
lean_object* v___x_2601_; 
lean_del_object(v___x_2593_);
lean_dec(v_err_2591_);
v___x_2601_ = l_Std_Internal_Parsec_String_pstring(v_pmLong_2577_, v_pos_2590_);
if (lean_obj_tag(v___x_2601_) == 0)
{
lean_object* v_pos_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2611_; 
v_pos_2602_ = lean_ctor_get(v___x_2601_, 0);
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2601_);
if (v_isSharedCheck_2611_ == 0)
{
lean_object* v_unused_2612_; 
v_unused_2612_ = lean_ctor_get(v___x_2601_, 1);
lean_dec(v_unused_2612_);
v___x_2604_ = v___x_2601_;
v_isShared_2605_ = v_isSharedCheck_2611_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_pos_2602_);
lean_dec(v___x_2601_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2611_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
uint8_t v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2609_; 
v___x_2606_ = 1;
v___x_2607_ = lean_box(v___x_2606_);
if (v_isShared_2605_ == 0)
{
lean_ctor_set(v___x_2604_, 1, v___x_2607_);
v___x_2609_ = v___x_2604_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_pos_2602_);
lean_ctor_set(v_reuseFailAlloc_2610_, 1, v___x_2607_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
else
{
lean_object* v_pos_2613_; lean_object* v_err_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2621_; 
v_pos_2613_ = lean_ctor_get(v___x_2601_, 0);
v_err_2614_ = lean_ctor_get(v___x_2601_, 1);
v_isSharedCheck_2621_ = !lean_is_exclusive(v___x_2601_);
if (v_isSharedCheck_2621_ == 0)
{
v___x_2616_ = v___x_2601_;
v_isShared_2617_ = v_isSharedCheck_2621_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_err_2614_);
lean_inc(v_pos_2613_);
lean_dec(v___x_2601_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2621_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
lean_object* v___x_2619_; 
if (v_isShared_2617_ == 0)
{
v___x_2619_ = v___x_2616_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2620_; 
v_reuseFailAlloc_2620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2620_, 0, v_pos_2613_);
lean_ctor_set(v_reuseFailAlloc_2620_, 1, v_err_2614_);
v___x_2619_ = v_reuseFailAlloc_2620_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
return v___x_2619_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseMarkerNarrow(lean_object* v_symbols_2623_, lean_object* v_a_2624_){
_start:
{
lean_object* v_amNarrow_2625_; lean_object* v_pmNarrow_2626_; lean_object* v___x_2627_; 
v_amNarrow_2625_ = lean_ctor_get(v_symbols_2623_, 17);
lean_inc_ref(v_amNarrow_2625_);
v_pmNarrow_2626_ = lean_ctor_get(v_symbols_2623_, 18);
lean_inc_ref(v_pmNarrow_2626_);
lean_dec_ref(v_symbols_2623_);
lean_inc_ref(v_a_2624_);
v___x_2627_ = l_Std_Internal_Parsec_String_pstring(v_amNarrow_2625_, v_a_2624_);
if (lean_obj_tag(v___x_2627_) == 0)
{
lean_object* v_pos_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2637_; 
lean_dec_ref(v_pmNarrow_2626_);
lean_dec_ref(v_a_2624_);
v_pos_2628_ = lean_ctor_get(v___x_2627_, 0);
v_isSharedCheck_2637_ = !lean_is_exclusive(v___x_2627_);
if (v_isSharedCheck_2637_ == 0)
{
lean_object* v_unused_2638_; 
v_unused_2638_ = lean_ctor_get(v___x_2627_, 1);
lean_dec(v_unused_2638_);
v___x_2630_ = v___x_2627_;
v_isShared_2631_ = v_isSharedCheck_2637_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_pos_2628_);
lean_dec(v___x_2627_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2637_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
uint8_t v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2635_; 
v___x_2632_ = 0;
v___x_2633_ = lean_box(v___x_2632_);
if (v_isShared_2631_ == 0)
{
lean_ctor_set(v___x_2630_, 1, v___x_2633_);
v___x_2635_ = v___x_2630_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v_pos_2628_);
lean_ctor_set(v_reuseFailAlloc_2636_, 1, v___x_2633_);
v___x_2635_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
return v___x_2635_;
}
}
}
else
{
lean_object* v_pos_2639_; lean_object* v_err_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2671_; 
v_pos_2639_ = lean_ctor_get(v___x_2627_, 0);
v_err_2640_ = lean_ctor_get(v___x_2627_, 1);
v_isSharedCheck_2671_ = !lean_is_exclusive(v___x_2627_);
if (v_isSharedCheck_2671_ == 0)
{
v___x_2642_ = v___x_2627_;
v_isShared_2643_ = v_isSharedCheck_2671_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_err_2640_);
lean_inc(v_pos_2639_);
lean_dec(v___x_2627_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2671_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v_snd_2644_; lean_object* v_snd_2645_; uint8_t v_decide_2646_; 
v_snd_2644_ = lean_ctor_get(v_a_2624_, 1);
lean_inc(v_snd_2644_);
lean_dec_ref(v_a_2624_);
v_snd_2645_ = lean_ctor_get(v_pos_2639_, 1);
v_decide_2646_ = lean_nat_dec_eq(v_snd_2644_, v_snd_2645_);
lean_dec(v_snd_2644_);
if (v_decide_2646_ == 0)
{
lean_object* v___x_2648_; 
lean_dec_ref(v_pmNarrow_2626_);
if (v_isShared_2643_ == 0)
{
v___x_2648_ = v___x_2642_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_pos_2639_);
lean_ctor_set(v_reuseFailAlloc_2649_, 1, v_err_2640_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
return v___x_2648_;
}
}
else
{
lean_object* v___x_2650_; 
lean_del_object(v___x_2642_);
lean_dec(v_err_2640_);
v___x_2650_ = l_Std_Internal_Parsec_String_pstring(v_pmNarrow_2626_, v_pos_2639_);
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_object* v_pos_2651_; lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2660_; 
v_pos_2651_ = lean_ctor_get(v___x_2650_, 0);
v_isSharedCheck_2660_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2660_ == 0)
{
lean_object* v_unused_2661_; 
v_unused_2661_ = lean_ctor_get(v___x_2650_, 1);
lean_dec(v_unused_2661_);
v___x_2653_ = v___x_2650_;
v_isShared_2654_ = v_isSharedCheck_2660_;
goto v_resetjp_2652_;
}
else
{
lean_inc(v_pos_2651_);
lean_dec(v___x_2650_);
v___x_2653_ = lean_box(0);
v_isShared_2654_ = v_isSharedCheck_2660_;
goto v_resetjp_2652_;
}
v_resetjp_2652_:
{
uint8_t v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2658_; 
v___x_2655_ = 1;
v___x_2656_ = lean_box(v___x_2655_);
if (v_isShared_2654_ == 0)
{
lean_ctor_set(v___x_2653_, 1, v___x_2656_);
v___x_2658_ = v___x_2653_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_pos_2651_);
lean_ctor_set(v_reuseFailAlloc_2659_, 1, v___x_2656_);
v___x_2658_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
return v___x_2658_;
}
}
}
else
{
lean_object* v_pos_2662_; lean_object* v_err_2663_; lean_object* v___x_2665_; uint8_t v_isShared_2666_; uint8_t v_isSharedCheck_2670_; 
v_pos_2662_ = lean_ctor_get(v___x_2650_, 0);
v_err_2663_ = lean_ctor_get(v___x_2650_, 1);
v_isSharedCheck_2670_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2670_ == 0)
{
v___x_2665_ = v___x_2650_;
v_isShared_2666_ = v_isSharedCheck_2670_;
goto v_resetjp_2664_;
}
else
{
lean_inc(v_err_2663_);
lean_inc(v_pos_2662_);
lean_dec(v___x_2650_);
v___x_2665_ = lean_box(0);
v_isShared_2666_ = v_isSharedCheck_2670_;
goto v_resetjp_2664_;
}
v_resetjp_2664_:
{
lean_object* v___x_2668_; 
if (v_isShared_2666_ == 0)
{
v___x_2668_ = v___x_2665_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v_pos_2662_);
lean_ctor_set(v_reuseFailAlloc_2669_, 1, v_err_2663_);
v___x_2668_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
return v___x_2668_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseDayPeriodFrom(lean_object* v_dp_2672_, lean_object* v_a_2673_){
_start:
{
lean_object* v_am_2674_; lean_object* v_pm_2675_; lean_object* v_noon_2676_; lean_object* v_midnight_2677_; lean_object* v___x_2678_; 
v_am_2674_ = lean_ctor_get(v_dp_2672_, 0);
lean_inc_ref(v_am_2674_);
v_pm_2675_ = lean_ctor_get(v_dp_2672_, 1);
lean_inc_ref(v_pm_2675_);
v_noon_2676_ = lean_ctor_get(v_dp_2672_, 2);
lean_inc_ref(v_noon_2676_);
v_midnight_2677_ = lean_ctor_get(v_dp_2672_, 3);
lean_inc_ref(v_midnight_2677_);
lean_dec_ref(v_dp_2672_);
lean_inc_ref(v_a_2673_);
v___x_2678_ = l_Std_Internal_Parsec_String_pstring(v_midnight_2677_, v_a_2673_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v_pos_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2688_; 
lean_dec_ref(v_noon_2676_);
lean_dec_ref(v_pm_2675_);
lean_dec_ref(v_am_2674_);
lean_dec_ref(v_a_2673_);
v_pos_2679_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2688_ == 0)
{
lean_object* v_unused_2689_; 
v_unused_2689_ = lean_ctor_get(v___x_2678_, 1);
lean_dec(v_unused_2689_);
v___x_2681_ = v___x_2678_;
v_isShared_2682_ = v_isSharedCheck_2688_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_pos_2679_);
lean_dec(v___x_2678_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2688_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
uint8_t v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2686_; 
v___x_2683_ = 3;
v___x_2684_ = lean_box(v___x_2683_);
if (v_isShared_2682_ == 0)
{
lean_ctor_set(v___x_2681_, 1, v___x_2684_);
v___x_2686_ = v___x_2681_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_pos_2679_);
lean_ctor_set(v_reuseFailAlloc_2687_, 1, v___x_2684_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
else
{
lean_object* v_pos_2690_; lean_object* v_err_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2768_; 
v_pos_2690_ = lean_ctor_get(v___x_2678_, 0);
v_err_2691_ = lean_ctor_get(v___x_2678_, 1);
v_isSharedCheck_2768_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2768_ == 0)
{
v___x_2693_ = v___x_2678_;
v_isShared_2694_ = v_isSharedCheck_2768_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_err_2691_);
lean_inc(v_pos_2690_);
lean_dec(v___x_2678_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2768_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v_snd_2695_; lean_object* v_snd_2696_; uint8_t v_decide_2697_; 
v_snd_2695_ = lean_ctor_get(v_a_2673_, 1);
lean_inc(v_snd_2695_);
lean_dec_ref(v_a_2673_);
v_snd_2696_ = lean_ctor_get(v_pos_2690_, 1);
v_decide_2697_ = lean_nat_dec_eq(v_snd_2695_, v_snd_2696_);
lean_dec(v_snd_2695_);
if (v_decide_2697_ == 0)
{
lean_object* v___x_2699_; 
lean_dec_ref(v_noon_2676_);
lean_dec_ref(v_pm_2675_);
lean_dec_ref(v_am_2674_);
if (v_isShared_2694_ == 0)
{
v___x_2699_ = v___x_2693_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v_pos_2690_);
lean_ctor_set(v_reuseFailAlloc_2700_, 1, v_err_2691_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
else
{
lean_object* v___x_2701_; 
lean_inc(v_snd_2696_);
lean_del_object(v___x_2693_);
lean_dec(v_err_2691_);
v___x_2701_ = l_Std_Internal_Parsec_String_pstring(v_noon_2676_, v_pos_2690_);
if (lean_obj_tag(v___x_2701_) == 0)
{
lean_object* v_pos_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2711_; 
lean_dec(v_snd_2696_);
lean_dec_ref(v_pm_2675_);
lean_dec_ref(v_am_2674_);
v_pos_2702_ = lean_ctor_get(v___x_2701_, 0);
v_isSharedCheck_2711_ = !lean_is_exclusive(v___x_2701_);
if (v_isSharedCheck_2711_ == 0)
{
lean_object* v_unused_2712_; 
v_unused_2712_ = lean_ctor_get(v___x_2701_, 1);
lean_dec(v_unused_2712_);
v___x_2704_ = v___x_2701_;
v_isShared_2705_ = v_isSharedCheck_2711_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_pos_2702_);
lean_dec(v___x_2701_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2711_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
uint8_t v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2709_; 
v___x_2706_ = 2;
v___x_2707_ = lean_box(v___x_2706_);
if (v_isShared_2705_ == 0)
{
lean_ctor_set(v___x_2704_, 1, v___x_2707_);
v___x_2709_ = v___x_2704_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v_pos_2702_);
lean_ctor_set(v_reuseFailAlloc_2710_, 1, v___x_2707_);
v___x_2709_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
return v___x_2709_;
}
}
}
else
{
lean_object* v_pos_2713_; lean_object* v_err_2714_; lean_object* v___x_2716_; uint8_t v_isShared_2717_; uint8_t v_isSharedCheck_2767_; 
v_pos_2713_ = lean_ctor_get(v___x_2701_, 0);
v_err_2714_ = lean_ctor_get(v___x_2701_, 1);
v_isSharedCheck_2767_ = !lean_is_exclusive(v___x_2701_);
if (v_isSharedCheck_2767_ == 0)
{
v___x_2716_ = v___x_2701_;
v_isShared_2717_ = v_isSharedCheck_2767_;
goto v_resetjp_2715_;
}
else
{
lean_inc(v_err_2714_);
lean_inc(v_pos_2713_);
lean_dec(v___x_2701_);
v___x_2716_ = lean_box(0);
v_isShared_2717_ = v_isSharedCheck_2767_;
goto v_resetjp_2715_;
}
v_resetjp_2715_:
{
lean_object* v_snd_2718_; uint8_t v_decide_2719_; 
v_snd_2718_ = lean_ctor_get(v_pos_2713_, 1);
v_decide_2719_ = lean_nat_dec_eq(v_snd_2696_, v_snd_2718_);
lean_dec(v_snd_2696_);
if (v_decide_2719_ == 0)
{
lean_object* v___x_2721_; 
lean_dec_ref(v_pm_2675_);
lean_dec_ref(v_am_2674_);
if (v_isShared_2717_ == 0)
{
v___x_2721_ = v___x_2716_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_pos_2713_);
lean_ctor_set(v_reuseFailAlloc_2722_, 1, v_err_2714_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
else
{
lean_object* v___x_2723_; 
lean_inc(v_snd_2718_);
lean_del_object(v___x_2716_);
lean_dec(v_err_2714_);
v___x_2723_ = l_Std_Internal_Parsec_String_pstring(v_am_2674_, v_pos_2713_);
if (lean_obj_tag(v___x_2723_) == 0)
{
lean_object* v_pos_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2733_; 
lean_dec(v_snd_2718_);
lean_dec_ref(v_pm_2675_);
v_pos_2724_ = lean_ctor_get(v___x_2723_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2723_);
if (v_isSharedCheck_2733_ == 0)
{
lean_object* v_unused_2734_; 
v_unused_2734_ = lean_ctor_get(v___x_2723_, 1);
lean_dec(v_unused_2734_);
v___x_2726_ = v___x_2723_;
v_isShared_2727_ = v_isSharedCheck_2733_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_pos_2724_);
lean_dec(v___x_2723_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2733_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
uint8_t v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2731_; 
v___x_2728_ = 0;
v___x_2729_ = lean_box(v___x_2728_);
if (v_isShared_2727_ == 0)
{
lean_ctor_set(v___x_2726_, 1, v___x_2729_);
v___x_2731_ = v___x_2726_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_pos_2724_);
lean_ctor_set(v_reuseFailAlloc_2732_, 1, v___x_2729_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
else
{
lean_object* v_pos_2735_; lean_object* v_err_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2766_; 
v_pos_2735_ = lean_ctor_get(v___x_2723_, 0);
v_err_2736_ = lean_ctor_get(v___x_2723_, 1);
v_isSharedCheck_2766_ = !lean_is_exclusive(v___x_2723_);
if (v_isSharedCheck_2766_ == 0)
{
v___x_2738_ = v___x_2723_;
v_isShared_2739_ = v_isSharedCheck_2766_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_err_2736_);
lean_inc(v_pos_2735_);
lean_dec(v___x_2723_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2766_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v_snd_2740_; uint8_t v_decide_2741_; 
v_snd_2740_ = lean_ctor_get(v_pos_2735_, 1);
v_decide_2741_ = lean_nat_dec_eq(v_snd_2718_, v_snd_2740_);
lean_dec(v_snd_2718_);
if (v_decide_2741_ == 0)
{
lean_object* v___x_2743_; 
lean_dec_ref(v_pm_2675_);
if (v_isShared_2739_ == 0)
{
v___x_2743_ = v___x_2738_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2744_; 
v_reuseFailAlloc_2744_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2744_, 0, v_pos_2735_);
lean_ctor_set(v_reuseFailAlloc_2744_, 1, v_err_2736_);
v___x_2743_ = v_reuseFailAlloc_2744_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
return v___x_2743_;
}
}
else
{
lean_object* v___x_2745_; 
lean_del_object(v___x_2738_);
lean_dec(v_err_2736_);
v___x_2745_ = l_Std_Internal_Parsec_String_pstring(v_pm_2675_, v_pos_2735_);
if (lean_obj_tag(v___x_2745_) == 0)
{
lean_object* v_pos_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2755_; 
v_pos_2746_ = lean_ctor_get(v___x_2745_, 0);
v_isSharedCheck_2755_ = !lean_is_exclusive(v___x_2745_);
if (v_isSharedCheck_2755_ == 0)
{
lean_object* v_unused_2756_; 
v_unused_2756_ = lean_ctor_get(v___x_2745_, 1);
lean_dec(v_unused_2756_);
v___x_2748_ = v___x_2745_;
v_isShared_2749_ = v_isSharedCheck_2755_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_pos_2746_);
lean_dec(v___x_2745_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2755_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
uint8_t v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2753_; 
v___x_2750_ = 1;
v___x_2751_ = lean_box(v___x_2750_);
if (v_isShared_2749_ == 0)
{
lean_ctor_set(v___x_2748_, 1, v___x_2751_);
v___x_2753_ = v___x_2748_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_pos_2746_);
lean_ctor_set(v_reuseFailAlloc_2754_, 1, v___x_2751_);
v___x_2753_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
return v___x_2753_;
}
}
}
else
{
lean_object* v_pos_2757_; lean_object* v_err_2758_; lean_object* v___x_2760_; uint8_t v_isShared_2761_; uint8_t v_isSharedCheck_2765_; 
v_pos_2757_ = lean_ctor_get(v___x_2745_, 0);
v_err_2758_ = lean_ctor_get(v___x_2745_, 1);
v_isSharedCheck_2765_ = !lean_is_exclusive(v___x_2745_);
if (v_isSharedCheck_2765_ == 0)
{
v___x_2760_ = v___x_2745_;
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
else
{
lean_inc(v_err_2758_);
lean_inc(v_pos_2757_);
lean_dec(v___x_2745_);
v___x_2760_ = lean_box(0);
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
v_resetjp_2759_:
{
lean_object* v___x_2763_; 
if (v_isShared_2761_ == 0)
{
v___x_2763_ = v___x_2760_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2764_; 
v_reuseFailAlloc_2764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2764_, 0, v_pos_2757_);
lean_ctor_set(v_reuseFailAlloc_2764_, 1, v_err_2758_);
v___x_2763_ = v_reuseFailAlloc_2764_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
return v___x_2763_;
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
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseExtendedDayPeriodFrom(lean_object* v_arr_2769_, lean_object* v_a_2770_){
_start:
{
lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; uint8_t v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; uint8_t v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; uint8_t v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; uint8_t v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; uint8_t v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; uint8_t v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v_pairs_2808_; lean_object* v___x_2809_; 
v___x_2771_ = lean_unsigned_to_nat(6u);
v___x_2772_ = lean_unsigned_to_nat(0u);
v___x_2773_ = lean_array_fget_borrowed(v_arr_2769_, v___x_2772_);
v___x_2774_ = 0;
v___x_2775_ = lean_box(v___x_2774_);
lean_inc(v___x_2773_);
v___x_2776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2776_, 0, v___x_2773_);
lean_ctor_set(v___x_2776_, 1, v___x_2775_);
v___x_2777_ = lean_unsigned_to_nat(1u);
v___x_2778_ = lean_array_fget_borrowed(v_arr_2769_, v___x_2777_);
v___x_2779_ = 1;
v___x_2780_ = lean_box(v___x_2779_);
lean_inc(v___x_2778_);
v___x_2781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2781_, 0, v___x_2778_);
lean_ctor_set(v___x_2781_, 1, v___x_2780_);
v___x_2782_ = lean_unsigned_to_nat(2u);
v___x_2783_ = lean_array_fget_borrowed(v_arr_2769_, v___x_2782_);
v___x_2784_ = 2;
v___x_2785_ = lean_box(v___x_2784_);
lean_inc(v___x_2783_);
v___x_2786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2786_, 0, v___x_2783_);
lean_ctor_set(v___x_2786_, 1, v___x_2785_);
v___x_2787_ = lean_unsigned_to_nat(3u);
v___x_2788_ = lean_array_fget_borrowed(v_arr_2769_, v___x_2787_);
v___x_2789_ = 3;
v___x_2790_ = lean_box(v___x_2789_);
lean_inc(v___x_2788_);
v___x_2791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2788_);
lean_ctor_set(v___x_2791_, 1, v___x_2790_);
v___x_2792_ = lean_unsigned_to_nat(4u);
v___x_2793_ = lean_array_fget_borrowed(v_arr_2769_, v___x_2792_);
v___x_2794_ = 4;
v___x_2795_ = lean_box(v___x_2794_);
lean_inc(v___x_2793_);
v___x_2796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2796_, 0, v___x_2793_);
lean_ctor_set(v___x_2796_, 1, v___x_2795_);
v___x_2797_ = lean_unsigned_to_nat(5u);
v___x_2798_ = lean_array_fget_borrowed(v_arr_2769_, v___x_2797_);
v___x_2799_ = 5;
v___x_2800_ = lean_box(v___x_2799_);
lean_inc(v___x_2798_);
v___x_2801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2798_);
lean_ctor_set(v___x_2801_, 1, v___x_2800_);
v___x_2802_ = lean_mk_empty_array_with_capacity(v___x_2771_);
v___x_2803_ = lean_array_push(v___x_2802_, v___x_2776_);
v___x_2804_ = lean_array_push(v___x_2803_, v___x_2781_);
v___x_2805_ = lean_array_push(v___x_2804_, v___x_2786_);
v___x_2806_ = lean_array_push(v___x_2805_, v___x_2791_);
v___x_2807_ = lean_array_push(v___x_2806_, v___x_2796_);
v_pairs_2808_ = lean_array_push(v___x_2807_, v___x_2801_);
v___x_2809_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v_pairs_2808_, v_a_2770_);
lean_dec_ref(v_pairs_2808_);
return v___x_2809_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseExtendedDayPeriodFrom___boxed(lean_object* v_arr_2810_, lean_object* v_a_2811_){
_start:
{
lean_object* v_res_2812_; 
v_res_2812_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseExtendedDayPeriodFrom(v_arr_2810_, v_a_2811_);
lean_dec_ref(v_arr_2810_);
return v_res_2812_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go___redArg(lean_object* v_parse_2813_, lean_object* v_size_2814_, lean_object* v_acc_2815_, lean_object* v_count_2816_, lean_object* v_a_2817_){
_start:
{
uint8_t v___x_2818_; 
v___x_2818_ = lean_nat_dec_le(v_size_2814_, v_count_2816_);
if (v___x_2818_ == 0)
{
lean_object* v___x_2819_; 
lean_inc_ref(v_parse_2813_);
v___x_2819_ = lean_apply_1(v_parse_2813_, v_a_2817_);
if (lean_obj_tag(v___x_2819_) == 0)
{
lean_object* v_pos_2820_; lean_object* v_res_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; 
v_pos_2820_ = lean_ctor_get(v___x_2819_, 0);
lean_inc(v_pos_2820_);
v_res_2821_ = lean_ctor_get(v___x_2819_, 1);
lean_inc(v_res_2821_);
lean_dec_ref_known(v___x_2819_, 2);
v___x_2822_ = lean_array_push(v_acc_2815_, v_res_2821_);
v___x_2823_ = lean_unsigned_to_nat(1u);
v___x_2824_ = lean_nat_add(v_count_2816_, v___x_2823_);
lean_dec(v_count_2816_);
v_acc_2815_ = v___x_2822_;
v_count_2816_ = v___x_2824_;
v_a_2817_ = v_pos_2820_;
goto _start;
}
else
{
lean_object* v_pos_2826_; lean_object* v_err_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2834_; 
lean_dec(v_count_2816_);
lean_dec_ref(v_acc_2815_);
lean_dec_ref(v_parse_2813_);
v_pos_2826_ = lean_ctor_get(v___x_2819_, 0);
v_err_2827_ = lean_ctor_get(v___x_2819_, 1);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2819_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2829_ = v___x_2819_;
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_err_2827_);
lean_inc(v_pos_2826_);
lean_dec(v___x_2819_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2832_; 
if (v_isShared_2830_ == 0)
{
v___x_2832_ = v___x_2829_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_pos_2826_);
lean_ctor_set(v_reuseFailAlloc_2833_, 1, v_err_2827_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
}
}
else
{
lean_object* v___x_2835_; 
lean_dec(v_count_2816_);
lean_dec_ref(v_parse_2813_);
v___x_2835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2835_, 0, v_a_2817_);
lean_ctor_set(v___x_2835_, 1, v_acc_2815_);
return v___x_2835_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go___redArg___boxed(lean_object* v_parse_2836_, lean_object* v_size_2837_, lean_object* v_acc_2838_, lean_object* v_count_2839_, lean_object* v_a_2840_){
_start:
{
lean_object* v_res_2841_; 
v_res_2841_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go___redArg(v_parse_2836_, v_size_2837_, v_acc_2838_, v_count_2839_, v_a_2840_);
lean_dec(v_size_2837_);
return v_res_2841_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go(lean_object* v_00_u03b1_2842_, lean_object* v_parse_2843_, lean_object* v_size_2844_, lean_object* v_acc_2845_, lean_object* v_count_2846_, lean_object* v_a_2847_){
_start:
{
lean_object* v___x_2848_; 
v___x_2848_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go___redArg(v_parse_2843_, v_size_2844_, v_acc_2845_, v_count_2846_, v_a_2847_);
return v___x_2848_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go___boxed(lean_object* v_00_u03b1_2849_, lean_object* v_parse_2850_, lean_object* v_size_2851_, lean_object* v_acc_2852_, lean_object* v_count_2853_, lean_object* v_a_2854_){
_start:
{
lean_object* v_res_2855_; 
v_res_2855_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go(v_00_u03b1_2849_, v_parse_2850_, v_size_2851_, v_acc_2852_, v_count_2853_, v_a_2854_);
lean_dec(v_size_2851_);
return v_res_2855_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly___redArg(lean_object* v_parse_2858_, lean_object* v_size_2859_, lean_object* v_a_2860_){
_start:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; 
v___x_2861_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_exactly___redArg___closed__0));
v___x_2862_ = lean_unsigned_to_nat(12u);
v___x_2863_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go___redArg(v_parse_2858_, v_size_2859_, v___x_2861_, v___x_2862_, v_a_2860_);
return v___x_2863_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly___redArg___boxed(lean_object* v_parse_2864_, lean_object* v_size_2865_, lean_object* v_a_2866_){
_start:
{
lean_object* v_res_2867_; 
v_res_2867_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactly___redArg(v_parse_2864_, v_size_2865_, v_a_2866_);
lean_dec(v_size_2865_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly(lean_object* v_00_u03b1_2868_, lean_object* v_parse_2869_, lean_object* v_size_2870_, lean_object* v_a_2871_){
_start:
{
lean_object* v___x_2872_; 
v___x_2872_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactly___redArg(v_parse_2869_, v_size_2870_, v_a_2871_);
return v___x_2872_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly___boxed(lean_object* v_00_u03b1_2873_, lean_object* v_parse_2874_, lean_object* v_size_2875_, lean_object* v_a_2876_){
_start:
{
lean_object* v_res_2877_; 
v_res_2877_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactly(v_00_u03b1_2873_, v_parse_2874_, v_size_2875_, v_a_2876_);
lean_dec(v_size_2875_);
return v_res_2877_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars_go(lean_object* v_parse_2878_, lean_object* v_size_2879_, lean_object* v_acc_2880_, lean_object* v_count_2881_, lean_object* v_a_2882_){
_start:
{
uint8_t v___x_2883_; 
v___x_2883_ = lean_nat_dec_le(v_size_2879_, v_count_2881_);
if (v___x_2883_ == 0)
{
lean_object* v___x_2884_; 
lean_inc_ref(v_parse_2878_);
v___x_2884_ = lean_apply_1(v_parse_2878_, v_a_2882_);
if (lean_obj_tag(v___x_2884_) == 0)
{
lean_object* v_pos_2885_; lean_object* v_res_2886_; uint32_t v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; 
v_pos_2885_ = lean_ctor_get(v___x_2884_, 0);
lean_inc(v_pos_2885_);
v_res_2886_ = lean_ctor_get(v___x_2884_, 1);
lean_inc(v_res_2886_);
lean_dec_ref_known(v___x_2884_, 2);
v___x_2887_ = lean_unbox_uint32(v_res_2886_);
lean_dec(v_res_2886_);
v___x_2888_ = lean_string_push(v_acc_2880_, v___x_2887_);
v___x_2889_ = lean_unsigned_to_nat(1u);
v___x_2890_ = lean_nat_add(v_count_2881_, v___x_2889_);
lean_dec(v_count_2881_);
v_acc_2880_ = v___x_2888_;
v_count_2881_ = v___x_2890_;
v_a_2882_ = v_pos_2885_;
goto _start;
}
else
{
lean_object* v_pos_2892_; lean_object* v_err_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2900_; 
lean_dec(v_count_2881_);
lean_dec_ref(v_acc_2880_);
lean_dec_ref(v_parse_2878_);
v_pos_2892_ = lean_ctor_get(v___x_2884_, 0);
v_err_2893_ = lean_ctor_get(v___x_2884_, 1);
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2900_ == 0)
{
v___x_2895_ = v___x_2884_;
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_err_2893_);
lean_inc(v_pos_2892_);
lean_dec(v___x_2884_);
v___x_2895_ = lean_box(0);
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
v_resetjp_2894_:
{
lean_object* v___x_2898_; 
if (v_isShared_2896_ == 0)
{
v___x_2898_ = v___x_2895_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_pos_2892_);
lean_ctor_set(v_reuseFailAlloc_2899_, 1, v_err_2893_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
return v___x_2898_;
}
}
}
}
else
{
lean_object* v___x_2901_; 
lean_dec(v_count_2881_);
lean_dec_ref(v_parse_2878_);
v___x_2901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2901_, 0, v_a_2882_);
lean_ctor_set(v___x_2901_, 1, v_acc_2880_);
return v___x_2901_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars_go___boxed(lean_object* v_parse_2902_, lean_object* v_size_2903_, lean_object* v_acc_2904_, lean_object* v_count_2905_, lean_object* v_a_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars_go(v_parse_2902_, v_size_2903_, v_acc_2904_, v_count_2905_, v_a_2906_);
lean_dec(v_size_2903_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars(lean_object* v_parse_2908_, lean_object* v_size_2909_, lean_object* v_a_2910_){
_start:
{
lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
v___x_2911_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_2912_ = lean_unsigned_to_nat(0u);
v___x_2913_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars_go(v_parse_2908_, v_size_2909_, v___x_2911_, v___x_2912_, v_a_2910_);
return v___x_2913_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars___boxed(lean_object* v_parse_2914_, lean_object* v_size_2915_, lean_object* v_a_2916_){
_start:
{
lean_object* v_res_2917_; 
v_res_2917_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars(v_parse_2914_, v_size_2915_, v_a_2916_);
lean_dec(v_size_2915_);
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(lean_object* v_parser_2918_, lean_object* v_a_2919_){
_start:
{
lean_object* v_pos_2921_; lean_object* v_res_2922_; lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___x_2954_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
lean_inc_ref(v_a_2919_);
v___x_2955_ = l_Std_Internal_Parsec_String_pstring(v___x_2954_, v_a_2919_);
if (lean_obj_tag(v___x_2955_) == 0)
{
lean_object* v_pos_2956_; lean_object* v_res_2957_; lean_object* v___x_2958_; 
lean_dec_ref(v_a_2919_);
v_pos_2956_ = lean_ctor_get(v___x_2955_, 0);
lean_inc(v_pos_2956_);
v_res_2957_ = lean_ctor_get(v___x_2955_, 1);
lean_inc(v_res_2957_);
lean_dec_ref_known(v___x_2955_, 2);
v___x_2958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2958_, 0, v_res_2957_);
v_pos_2921_ = v_pos_2956_;
v_res_2922_ = v___x_2958_;
goto v___jp_2920_;
}
else
{
lean_object* v_pos_2959_; lean_object* v_err_2960_; lean_object* v___x_2962_; uint8_t v_isShared_2963_; uint8_t v_isSharedCheck_2971_; 
v_pos_2959_ = lean_ctor_get(v___x_2955_, 0);
v_err_2960_ = lean_ctor_get(v___x_2955_, 1);
v_isSharedCheck_2971_ = !lean_is_exclusive(v___x_2955_);
if (v_isSharedCheck_2971_ == 0)
{
v___x_2962_ = v___x_2955_;
v_isShared_2963_ = v_isSharedCheck_2971_;
goto v_resetjp_2961_;
}
else
{
lean_inc(v_err_2960_);
lean_inc(v_pos_2959_);
lean_dec(v___x_2955_);
v___x_2962_ = lean_box(0);
v_isShared_2963_ = v_isSharedCheck_2971_;
goto v_resetjp_2961_;
}
v_resetjp_2961_:
{
lean_object* v_snd_2964_; lean_object* v_snd_2965_; uint8_t v_decide_2966_; 
v_snd_2964_ = lean_ctor_get(v_a_2919_, 1);
lean_inc(v_snd_2964_);
lean_dec_ref(v_a_2919_);
v_snd_2965_ = lean_ctor_get(v_pos_2959_, 1);
v_decide_2966_ = lean_nat_dec_eq(v_snd_2964_, v_snd_2965_);
lean_dec(v_snd_2964_);
if (v_decide_2966_ == 0)
{
lean_object* v___x_2968_; 
lean_dec_ref(v_parser_2918_);
if (v_isShared_2963_ == 0)
{
v___x_2968_ = v___x_2962_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v_pos_2959_);
lean_ctor_set(v_reuseFailAlloc_2969_, 1, v_err_2960_);
v___x_2968_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
return v___x_2968_;
}
}
else
{
lean_object* v___x_2970_; 
lean_del_object(v___x_2962_);
lean_dec(v_err_2960_);
v___x_2970_ = lean_box(0);
v_pos_2921_ = v_pos_2959_;
v_res_2922_ = v___x_2970_;
goto v___jp_2920_;
}
}
}
v___jp_2920_:
{
lean_object* v___x_2923_; 
v___x_2923_ = lean_apply_1(v_parser_2918_, v_pos_2921_);
if (lean_obj_tag(v___x_2923_) == 0)
{
if (lean_obj_tag(v_res_2922_) == 0)
{
lean_object* v_pos_2924_; lean_object* v_res_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2933_; 
v_pos_2924_ = lean_ctor_get(v___x_2923_, 0);
v_res_2925_ = lean_ctor_get(v___x_2923_, 1);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2923_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2927_ = v___x_2923_;
v_isShared_2928_ = v_isSharedCheck_2933_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_res_2925_);
lean_inc(v_pos_2924_);
lean_dec(v___x_2923_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2933_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v___x_2929_; lean_object* v___x_2931_; 
v___x_2929_ = lean_nat_to_int(v_res_2925_);
if (v_isShared_2928_ == 0)
{
lean_ctor_set(v___x_2927_, 1, v___x_2929_);
v___x_2931_ = v___x_2927_;
goto v_reusejp_2930_;
}
else
{
lean_object* v_reuseFailAlloc_2932_; 
v_reuseFailAlloc_2932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2932_, 0, v_pos_2924_);
lean_ctor_set(v_reuseFailAlloc_2932_, 1, v___x_2929_);
v___x_2931_ = v_reuseFailAlloc_2932_;
goto v_reusejp_2930_;
}
v_reusejp_2930_:
{
return v___x_2931_;
}
}
}
else
{
lean_object* v_pos_2934_; lean_object* v_res_2935_; lean_object* v___x_2937_; uint8_t v_isShared_2938_; uint8_t v_isSharedCheck_2944_; 
lean_dec_ref_known(v_res_2922_, 1);
v_pos_2934_ = lean_ctor_get(v___x_2923_, 0);
v_res_2935_ = lean_ctor_get(v___x_2923_, 1);
v_isSharedCheck_2944_ = !lean_is_exclusive(v___x_2923_);
if (v_isSharedCheck_2944_ == 0)
{
v___x_2937_ = v___x_2923_;
v_isShared_2938_ = v_isSharedCheck_2944_;
goto v_resetjp_2936_;
}
else
{
lean_inc(v_res_2935_);
lean_inc(v_pos_2934_);
lean_dec(v___x_2923_);
v___x_2937_ = lean_box(0);
v_isShared_2938_ = v_isSharedCheck_2944_;
goto v_resetjp_2936_;
}
v_resetjp_2936_:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2942_; 
v___x_2939_ = lean_nat_to_int(v_res_2935_);
v___x_2940_ = lean_int_neg(v___x_2939_);
lean_dec(v___x_2939_);
if (v_isShared_2938_ == 0)
{
lean_ctor_set(v___x_2937_, 1, v___x_2940_);
v___x_2942_ = v___x_2937_;
goto v_reusejp_2941_;
}
else
{
lean_object* v_reuseFailAlloc_2943_; 
v_reuseFailAlloc_2943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2943_, 0, v_pos_2934_);
lean_ctor_set(v_reuseFailAlloc_2943_, 1, v___x_2940_);
v___x_2942_ = v_reuseFailAlloc_2943_;
goto v_reusejp_2941_;
}
v_reusejp_2941_:
{
return v___x_2942_;
}
}
}
}
else
{
lean_object* v_pos_2945_; lean_object* v_err_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2953_; 
lean_dec(v_res_2922_);
v_pos_2945_ = lean_ctor_get(v___x_2923_, 0);
v_err_2946_ = lean_ctor_get(v___x_2923_, 1);
v_isSharedCheck_2953_ = !lean_is_exclusive(v___x_2923_);
if (v_isSharedCheck_2953_ == 0)
{
v___x_2948_ = v___x_2923_;
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_err_2946_);
lean_inc(v_pos_2945_);
lean_dec(v___x_2923_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2951_; 
if (v_isShared_2949_ == 0)
{
v___x_2951_ = v___x_2948_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v_pos_2945_);
lean_ctor_set(v_reuseFailAlloc_2952_, 1, v_err_2946_);
v___x_2951_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
return v___x_2951_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___lam__0(lean_object* v___y_2972_){
_start:
{
lean_object* v_fst_2976_; lean_object* v_snd_2977_; lean_object* v___x_2978_; uint8_t v_decide_2979_; 
v_fst_2976_ = lean_ctor_get(v___y_2972_, 0);
v_snd_2977_ = lean_ctor_get(v___y_2972_, 1);
v___x_2978_ = lean_string_utf8_byte_size(v_fst_2976_);
v_decide_2979_ = lean_nat_dec_eq(v_snd_2977_, v___x_2978_);
if (v_decide_2979_ == 0)
{
uint32_t v_c_2980_; lean_object* v___x_2981_; lean_object* v_it_x27_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; uint32_t v___x_2985_; uint8_t v___x_2986_; 
v_c_2980_ = lean_string_utf8_get_fast(v_fst_2976_, v_snd_2977_);
v___x_2981_ = lean_string_utf8_next_fast(v_fst_2976_, v_snd_2977_);
lean_inc(v_fst_2976_);
v_it_x27_2982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_2982_, 0, v_fst_2976_);
lean_ctor_set(v_it_x27_2982_, 1, v___x_2981_);
v___x_2983_ = lean_box_uint32(v_c_2980_);
v___x_2984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2984_, 0, v_it_x27_2982_);
lean_ctor_set(v___x_2984_, 1, v___x_2983_);
v___x_2985_ = 48;
v___x_2986_ = lean_uint32_dec_le(v___x_2985_, v_c_2980_);
if (v___x_2986_ == 0)
{
lean_dec_ref_known(v___x_2984_, 2);
goto v___jp_2973_;
}
else
{
uint32_t v___x_2987_; uint8_t v___x_2988_; 
v___x_2987_ = 57;
v___x_2988_ = lean_uint32_dec_le(v_c_2980_, v___x_2987_);
if (v___x_2988_ == 0)
{
lean_dec_ref_known(v___x_2984_, 2);
goto v___jp_2973_;
}
else
{
lean_dec_ref(v___y_2972_);
return v___x_2984_;
}
}
}
else
{
lean_object* v___x_2989_; lean_object* v___x_2990_; 
v___x_2989_ = lean_box(0);
v___x_2990_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2990_, 0, v___y_2972_);
lean_ctor_set(v___x_2990_, 1, v___x_2989_);
return v___x_2990_;
}
v___jp_2973_:
{
lean_object* v___x_2974_; lean_object* v___x_2975_; 
v___x_2974_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_2975_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2975_, 0, v___y_2972_);
lean_ctor_set(v___x_2975_, 1, v___x_2974_);
return v___x_2975_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(lean_object* v_size_2992_, lean_object* v_a_2993_){
_start:
{
lean_object* v___f_2994_; lean_object* v___x_2995_; 
v___f_2994_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___closed__0));
v___x_2995_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars(v___f_2994_, v_size_2992_, v_a_2993_);
if (lean_obj_tag(v___x_2995_) == 0)
{
lean_object* v_pos_2996_; lean_object* v_res_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3008_; 
v_pos_2996_ = lean_ctor_get(v___x_2995_, 0);
v_res_2997_ = lean_ctor_get(v___x_2995_, 1);
v_isSharedCheck_3008_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_2999_ = v___x_2995_;
v_isShared_3000_ = v_isSharedCheck_3008_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_res_2997_);
lean_inc(v_pos_2996_);
lean_dec(v___x_2995_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3008_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3006_; 
v___x_3001_ = lean_unsigned_to_nat(0u);
v___x_3002_ = lean_string_utf8_byte_size(v_res_2997_);
v___x_3003_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3003_, 0, v_res_2997_);
lean_ctor_set(v___x_3003_, 1, v___x_3001_);
lean_ctor_set(v___x_3003_, 2, v___x_3002_);
v___x_3004_ = l_String_Slice_toNat_x21(v___x_3003_);
lean_dec_ref_known(v___x_3003_, 3);
if (v_isShared_3000_ == 0)
{
lean_ctor_set(v___x_2999_, 1, v___x_3004_);
v___x_3006_ = v___x_2999_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_pos_2996_);
lean_ctor_set(v_reuseFailAlloc_3007_, 1, v___x_3004_);
v___x_3006_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
return v___x_3006_;
}
}
}
else
{
lean_object* v_pos_3009_; lean_object* v_err_3010_; lean_object* v___x_3012_; uint8_t v_isShared_3013_; uint8_t v_isSharedCheck_3017_; 
v_pos_3009_ = lean_ctor_get(v___x_2995_, 0);
v_err_3010_ = lean_ctor_get(v___x_2995_, 1);
v_isSharedCheck_3017_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3017_ == 0)
{
v___x_3012_ = v___x_2995_;
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
else
{
lean_inc(v_err_3010_);
lean_inc(v_pos_3009_);
lean_dec(v___x_2995_);
v___x_3012_ = lean_box(0);
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
v_resetjp_3011_:
{
lean_object* v___x_3015_; 
if (v_isShared_3013_ == 0)
{
v___x_3015_ = v___x_3012_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v_pos_3009_);
lean_ctor_set(v_reuseFailAlloc_3016_, 1, v_err_3010_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___boxed(lean_object* v_size_3018_, lean_object* v_a_3019_){
_start:
{
lean_object* v_res_3020_; 
v_res_3020_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v_size_3018_, v_a_3019_);
lean_dec(v_size_3018_);
return v_res_3020_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum_spec__0(lean_object* v_acc_3021_, lean_object* v_a_3022_){
_start:
{
lean_object* v_fst_3023_; lean_object* v_snd_3024_; lean_object* v_pos_3026_; lean_object* v_snd_3027_; lean_object* v_err_3028_; lean_object* v___x_3034_; uint8_t v_decide_3035_; 
v_fst_3023_ = lean_ctor_get(v_a_3022_, 0);
v_snd_3024_ = lean_ctor_get(v_a_3022_, 1);
lean_inc(v_snd_3024_);
v___x_3034_ = lean_string_utf8_byte_size(v_fst_3023_);
v_decide_3035_ = lean_nat_dec_eq(v_snd_3024_, v___x_3034_);
if (v_decide_3035_ == 0)
{
uint32_t v_c_3036_; uint32_t v___x_3037_; uint8_t v___x_3038_; 
v_c_3036_ = lean_string_utf8_get_fast(v_fst_3023_, v_snd_3024_);
v___x_3037_ = 48;
v___x_3038_ = lean_uint32_dec_le(v___x_3037_, v_c_3036_);
if (v___x_3038_ == 0)
{
goto v___jp_3032_;
}
else
{
uint32_t v___x_3039_; uint8_t v___x_3040_; 
v___x_3039_ = 57;
v___x_3040_ = lean_uint32_dec_le(v_c_3036_, v___x_3039_);
if (v___x_3040_ == 0)
{
goto v___jp_3032_;
}
else
{
lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3050_; 
lean_inc(v_fst_3023_);
v_isSharedCheck_3050_ = !lean_is_exclusive(v_a_3022_);
if (v_isSharedCheck_3050_ == 0)
{
lean_object* v_unused_3051_; lean_object* v_unused_3052_; 
v_unused_3051_ = lean_ctor_get(v_a_3022_, 1);
lean_dec(v_unused_3051_);
v_unused_3052_ = lean_ctor_get(v_a_3022_, 0);
lean_dec(v_unused_3052_);
v___x_3042_ = v_a_3022_;
v_isShared_3043_ = v_isSharedCheck_3050_;
goto v_resetjp_3041_;
}
else
{
lean_dec(v_a_3022_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3050_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v___x_3044_; lean_object* v_it_x27_3046_; 
v___x_3044_ = lean_string_utf8_next_fast(v_fst_3023_, v_snd_3024_);
lean_dec(v_snd_3024_);
if (v_isShared_3043_ == 0)
{
lean_ctor_set(v___x_3042_, 1, v___x_3044_);
v_it_x27_3046_ = v___x_3042_;
goto v_reusejp_3045_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v_fst_3023_);
lean_ctor_set(v_reuseFailAlloc_3049_, 1, v___x_3044_);
v_it_x27_3046_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3045_;
}
v_reusejp_3045_:
{
lean_object* v___x_3047_; 
v___x_3047_ = lean_string_push(v_acc_3021_, v_c_3036_);
v_acc_3021_ = v___x_3047_;
v_a_3022_ = v_it_x27_3046_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_3053_; 
v___x_3053_ = lean_box(0);
lean_inc(v_snd_3024_);
v_pos_3026_ = v_a_3022_;
v_snd_3027_ = v_snd_3024_;
v_err_3028_ = v___x_3053_;
goto v___jp_3025_;
}
v___jp_3025_:
{
uint8_t v_decide_3029_; 
v_decide_3029_ = lean_nat_dec_eq(v_snd_3024_, v_snd_3027_);
lean_dec(v_snd_3027_);
lean_dec(v_snd_3024_);
if (v_decide_3029_ == 0)
{
lean_object* v___x_3030_; 
lean_dec_ref(v_acc_3021_);
lean_inc(v_err_3028_);
v___x_3030_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3030_, 0, v_pos_3026_);
lean_ctor_set(v___x_3030_, 1, v_err_3028_);
return v___x_3030_;
}
else
{
lean_object* v___x_3031_; 
v___x_3031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3031_, 0, v_pos_3026_);
lean_ctor_set(v___x_3031_, 1, v_acc_3021_);
return v___x_3031_;
}
}
v___jp_3032_:
{
lean_object* v___x_3033_; 
v___x_3033_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_3024_);
v_pos_3026_ = v_a_3022_;
v_snd_3027_ = v_snd_3024_;
v_err_3028_ = v___x_3033_;
goto v___jp_3025_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum(lean_object* v_size_3054_, lean_object* v_a_3055_){
_start:
{
lean_object* v___f_3056_; lean_object* v___x_3057_; 
v___f_3056_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___closed__0));
v___x_3057_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars(v___f_3056_, v_size_3054_, v_a_3055_);
if (lean_obj_tag(v___x_3057_) == 0)
{
lean_object* v_pos_3058_; lean_object* v_res_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; 
v_pos_3058_ = lean_ctor_get(v___x_3057_, 0);
lean_inc(v_pos_3058_);
v_res_3059_ = lean_ctor_get(v___x_3057_, 1);
lean_inc(v_res_3059_);
lean_dec_ref_known(v___x_3057_, 2);
v___x_3060_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_3061_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum_spec__0(v___x_3060_, v_pos_3058_);
if (lean_obj_tag(v___x_3061_) == 0)
{
lean_object* v_pos_3062_; lean_object* v_res_3063_; lean_object* v___x_3065_; uint8_t v_isShared_3066_; uint8_t v_isSharedCheck_3075_; 
v_pos_3062_ = lean_ctor_get(v___x_3061_, 0);
v_res_3063_ = lean_ctor_get(v___x_3061_, 1);
v_isSharedCheck_3075_ = !lean_is_exclusive(v___x_3061_);
if (v_isSharedCheck_3075_ == 0)
{
v___x_3065_ = v___x_3061_;
v_isShared_3066_ = v_isSharedCheck_3075_;
goto v_resetjp_3064_;
}
else
{
lean_inc(v_res_3063_);
lean_inc(v_pos_3062_);
lean_dec(v___x_3061_);
v___x_3065_ = lean_box(0);
v_isShared_3066_ = v_isSharedCheck_3075_;
goto v_resetjp_3064_;
}
v_resetjp_3064_:
{
lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3073_; 
v___x_3067_ = lean_string_append(v_res_3059_, v_res_3063_);
lean_dec(v_res_3063_);
v___x_3068_ = lean_unsigned_to_nat(0u);
v___x_3069_ = lean_string_utf8_byte_size(v___x_3067_);
v___x_3070_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3067_);
lean_ctor_set(v___x_3070_, 1, v___x_3068_);
lean_ctor_set(v___x_3070_, 2, v___x_3069_);
v___x_3071_ = l_String_Slice_toNat_x21(v___x_3070_);
lean_dec_ref_known(v___x_3070_, 3);
if (v_isShared_3066_ == 0)
{
lean_ctor_set(v___x_3065_, 1, v___x_3071_);
v___x_3073_ = v___x_3065_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v_pos_3062_);
lean_ctor_set(v_reuseFailAlloc_3074_, 1, v___x_3071_);
v___x_3073_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
return v___x_3073_;
}
}
}
else
{
lean_object* v_pos_3076_; lean_object* v_err_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3084_; 
lean_dec(v_res_3059_);
v_pos_3076_ = lean_ctor_get(v___x_3061_, 0);
v_err_3077_ = lean_ctor_get(v___x_3061_, 1);
v_isSharedCheck_3084_ = !lean_is_exclusive(v___x_3061_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3079_ = v___x_3061_;
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
else
{
lean_inc(v_err_3077_);
lean_inc(v_pos_3076_);
lean_dec(v___x_3061_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v___x_3082_; 
if (v_isShared_3080_ == 0)
{
v___x_3082_ = v___x_3079_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_pos_3076_);
lean_ctor_set(v_reuseFailAlloc_3083_, 1, v_err_3077_);
v___x_3082_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
return v___x_3082_;
}
}
}
}
else
{
lean_object* v_pos_3085_; lean_object* v_err_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3093_; 
v_pos_3085_ = lean_ctor_get(v___x_3057_, 0);
v_err_3086_ = lean_ctor_get(v___x_3057_, 1);
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_3057_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3088_ = v___x_3057_;
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_err_3086_);
lean_inc(v_pos_3085_);
lean_dec(v___x_3057_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3091_; 
if (v_isShared_3089_ == 0)
{
v___x_3091_ = v___x_3088_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_pos_3085_);
lean_ctor_set(v_reuseFailAlloc_3092_, 1, v_err_3086_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum___boxed(lean_object* v_size_3094_, lean_object* v_a_3095_){
_start:
{
lean_object* v_res_3096_; 
v_res_3096_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum(v_size_3094_, v_a_3095_);
lean_dec(v_size_3094_);
return v_res_3096_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum(lean_object* v_size_3097_, lean_object* v_a_3098_){
_start:
{
lean_object* v___x_3099_; uint8_t v___x_3100_; 
v___x_3099_ = lean_unsigned_to_nat(1u);
v___x_3100_ = lean_nat_dec_eq(v_size_3097_, v___x_3099_);
if (v___x_3100_ == 0)
{
lean_object* v___x_3101_; 
v___x_3101_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v_size_3097_, v_a_3098_);
return v___x_3101_;
}
else
{
lean_object* v___x_3102_; 
v___x_3102_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum(v___x_3099_, v_a_3098_);
return v___x_3102_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed(lean_object* v_size_3103_, lean_object* v_a_3104_){
_start:
{
lean_object* v_res_3105_; 
v_res_3105_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum(v_size_3103_, v_a_3104_);
lean_dec(v_size_3103_);
return v_res_3105_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFractionNum(lean_object* v_size_3106_, lean_object* v_pad_3107_, lean_object* v_a_3108_){
_start:
{
lean_object* v___f_3109_; lean_object* v___x_3110_; 
v___f_3109_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___closed__0));
v___x_3110_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars(v___f_3109_, v_size_3106_, v_a_3108_);
if (lean_obj_tag(v___x_3110_) == 0)
{
lean_object* v_pos_3111_; lean_object* v_res_3112_; lean_object* v___x_3114_; uint8_t v_isShared_3115_; uint8_t v_isSharedCheck_3125_; 
v_pos_3111_ = lean_ctor_get(v___x_3110_, 0);
v_res_3112_ = lean_ctor_get(v___x_3110_, 1);
v_isSharedCheck_3125_ = !lean_is_exclusive(v___x_3110_);
if (v_isSharedCheck_3125_ == 0)
{
v___x_3114_ = v___x_3110_;
v_isShared_3115_ = v_isSharedCheck_3125_;
goto v_resetjp_3113_;
}
else
{
lean_inc(v_res_3112_);
lean_inc(v_pos_3111_);
lean_dec(v___x_3110_);
v___x_3114_ = lean_box(0);
v_isShared_3115_ = v_isSharedCheck_3125_;
goto v_resetjp_3113_;
}
v_resetjp_3113_:
{
uint32_t v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3123_; 
v___x_3116_ = 48;
v___x_3117_ = l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii(v_pad_3107_, v___x_3116_, v_res_3112_);
v___x_3118_ = lean_unsigned_to_nat(0u);
v___x_3119_ = lean_string_utf8_byte_size(v___x_3117_);
v___x_3120_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3120_, 0, v___x_3117_);
lean_ctor_set(v___x_3120_, 1, v___x_3118_);
lean_ctor_set(v___x_3120_, 2, v___x_3119_);
v___x_3121_ = l_String_Slice_toNat_x21(v___x_3120_);
lean_dec_ref_known(v___x_3120_, 3);
if (v_isShared_3115_ == 0)
{
lean_ctor_set(v___x_3114_, 1, v___x_3121_);
v___x_3123_ = v___x_3114_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v_pos_3111_);
lean_ctor_set(v_reuseFailAlloc_3124_, 1, v___x_3121_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
return v___x_3123_;
}
}
}
else
{
lean_object* v_pos_3126_; lean_object* v_err_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3134_; 
v_pos_3126_ = lean_ctor_get(v___x_3110_, 0);
v_err_3127_ = lean_ctor_get(v___x_3110_, 1);
v_isSharedCheck_3134_ = !lean_is_exclusive(v___x_3110_);
if (v_isSharedCheck_3134_ == 0)
{
v___x_3129_ = v___x_3110_;
v_isShared_3130_ = v_isSharedCheck_3134_;
goto v_resetjp_3128_;
}
else
{
lean_inc(v_err_3127_);
lean_inc(v_pos_3126_);
lean_dec(v___x_3110_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3134_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
lean_object* v___x_3132_; 
if (v_isShared_3130_ == 0)
{
v___x_3132_ = v___x_3129_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v_pos_3126_);
lean_ctor_set(v_reuseFailAlloc_3133_, 1, v_err_3127_);
v___x_3132_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
return v___x_3132_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFractionNum___boxed(lean_object* v_size_3135_, lean_object* v_pad_3136_, lean_object* v_a_3137_){
_start:
{
lean_object* v_res_3138_; 
v_res_3138_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFractionNum(v_size_3135_, v_pad_3136_, v_a_3137_);
lean_dec(v_pad_3136_);
lean_dec(v_size_3135_);
return v_res_3138_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier_spec__0_spec__0(lean_object* v_acc_3139_, lean_object* v_a_3140_){
_start:
{
lean_object* v_pos_3142_; uint32_t v_res_3143_; lean_object* v_fst_3146_; lean_object* v_snd_3147_; lean_object* v_pos_3149_; lean_object* v_snd_3150_; lean_object* v_err_3151_; lean_object* v___x_3155_; uint8_t v_decide_3156_; 
v_fst_3146_ = lean_ctor_get(v_a_3140_, 0);
v_snd_3147_ = lean_ctor_get(v_a_3140_, 1);
lean_inc(v_snd_3147_);
v___x_3155_ = lean_string_utf8_byte_size(v_fst_3146_);
v_decide_3156_ = lean_nat_dec_eq(v_snd_3147_, v___x_3155_);
if (v_decide_3156_ == 0)
{
uint32_t v_c_3157_; lean_object* v___x_3158_; lean_object* v_it_x27_3159_; uint8_t v___y_3161_; uint8_t v___y_3162_; uint8_t v___y_3163_; uint8_t v___y_3166_; uint8_t v___y_3167_; uint8_t v___y_3168_; uint8_t v___y_3169_; uint8_t v___y_3171_; uint8_t v___y_3172_; uint8_t v___y_3180_; uint8_t v___y_3181_; uint8_t v___y_3189_; uint32_t v___x_3196_; uint8_t v___x_3197_; 
v_c_3157_ = lean_string_utf8_get_fast(v_fst_3146_, v_snd_3147_);
v___x_3158_ = lean_string_utf8_next_fast(v_fst_3146_, v_snd_3147_);
lean_inc(v_fst_3146_);
v_it_x27_3159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_3159_, 0, v_fst_3146_);
lean_ctor_set(v_it_x27_3159_, 1, v___x_3158_);
v___x_3196_ = 65;
v___x_3197_ = lean_uint32_dec_le(v___x_3196_, v_c_3157_);
if (v___x_3197_ == 0)
{
goto v___jp_3191_;
}
else
{
uint32_t v___x_3198_; uint8_t v___x_3199_; 
v___x_3198_ = 90;
v___x_3199_ = lean_uint32_dec_le(v_c_3157_, v___x_3198_);
if (v___x_3199_ == 0)
{
goto v___jp_3191_;
}
else
{
goto v___jp_3186_;
}
}
v___jp_3160_:
{
if (v___y_3161_ == 0)
{
if (v___y_3162_ == 0)
{
if (v___y_3163_ == 0)
{
lean_object* v___x_3164_; 
lean_dec_ref_known(v_it_x27_3159_, 2);
v___x_3164_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_3147_);
v_pos_3149_ = v_a_3140_;
v_snd_3150_ = v_snd_3147_;
v_err_3151_ = v___x_3164_;
goto v___jp_3148_;
}
else
{
lean_dec(v_snd_3147_);
lean_dec_ref(v_a_3140_);
v_pos_3142_ = v_it_x27_3159_;
v_res_3143_ = v_c_3157_;
goto v___jp_3141_;
}
}
else
{
lean_dec(v_snd_3147_);
lean_dec_ref(v_a_3140_);
v_pos_3142_ = v_it_x27_3159_;
v_res_3143_ = v_c_3157_;
goto v___jp_3141_;
}
}
else
{
lean_dec(v_snd_3147_);
lean_dec_ref(v_a_3140_);
v_pos_3142_ = v_it_x27_3159_;
v_res_3143_ = v_c_3157_;
goto v___jp_3141_;
}
}
v___jp_3165_:
{
if (v___y_3166_ == 0)
{
v___y_3161_ = v___y_3167_;
v___y_3162_ = v___y_3168_;
v___y_3163_ = v___y_3169_;
goto v___jp_3160_;
}
else
{
v___y_3161_ = v___y_3167_;
v___y_3162_ = v___y_3168_;
v___y_3163_ = v___y_3166_;
goto v___jp_3160_;
}
}
v___jp_3170_:
{
uint32_t v___x_3173_; uint8_t v___x_3174_; uint32_t v___x_3175_; uint8_t v___x_3176_; 
v___x_3173_ = 95;
v___x_3174_ = lean_uint32_dec_eq(v_c_3157_, v___x_3173_);
v___x_3175_ = 45;
v___x_3176_ = lean_uint32_dec_eq(v_c_3157_, v___x_3175_);
if (v___x_3176_ == 0)
{
uint32_t v___x_3177_; uint8_t v___x_3178_; 
v___x_3177_ = 47;
v___x_3178_ = lean_uint32_dec_eq(v_c_3157_, v___x_3177_);
v___y_3166_ = v___x_3174_;
v___y_3167_ = v___y_3172_;
v___y_3168_ = v___y_3171_;
v___y_3169_ = v___x_3178_;
goto v___jp_3165_;
}
else
{
v___y_3166_ = v___x_3174_;
v___y_3167_ = v___y_3172_;
v___y_3168_ = v___y_3171_;
v___y_3169_ = v___x_3176_;
goto v___jp_3165_;
}
}
v___jp_3179_:
{
uint32_t v___x_3182_; uint8_t v___x_3183_; 
v___x_3182_ = 48;
v___x_3183_ = lean_uint32_dec_le(v___x_3182_, v_c_3157_);
if (v___x_3183_ == 0)
{
v___y_3171_ = v___y_3181_;
v___y_3172_ = v___x_3183_;
goto v___jp_3170_;
}
else
{
uint32_t v___x_3184_; uint8_t v___x_3185_; 
v___x_3184_ = 57;
v___x_3185_ = lean_uint32_dec_le(v_c_3157_, v___x_3184_);
if (v___x_3185_ == 0)
{
v___y_3171_ = v___y_3181_;
v___y_3172_ = v___x_3185_;
goto v___jp_3170_;
}
else
{
v___y_3171_ = v___y_3181_;
v___y_3172_ = v___y_3180_;
goto v___jp_3170_;
}
}
}
v___jp_3186_:
{
uint8_t v___x_3187_; 
v___x_3187_ = 1;
v___y_3180_ = v___x_3187_;
v___y_3181_ = v___x_3187_;
goto v___jp_3179_;
}
v___jp_3188_:
{
uint8_t v___x_3190_; 
v___x_3190_ = 1;
v___y_3180_ = v___x_3190_;
v___y_3181_ = v___y_3189_;
goto v___jp_3179_;
}
v___jp_3191_:
{
uint32_t v___x_3192_; uint8_t v___x_3193_; 
v___x_3192_ = 97;
v___x_3193_ = lean_uint32_dec_le(v___x_3192_, v_c_3157_);
if (v___x_3193_ == 0)
{
v___y_3189_ = v___x_3193_;
goto v___jp_3188_;
}
else
{
uint32_t v___x_3194_; uint8_t v___x_3195_; 
v___x_3194_ = 122;
v___x_3195_ = lean_uint32_dec_le(v_c_3157_, v___x_3194_);
if (v___x_3195_ == 0)
{
v___y_3189_ = v___x_3195_;
goto v___jp_3188_;
}
else
{
goto v___jp_3186_;
}
}
}
}
else
{
lean_object* v___x_3200_; 
v___x_3200_ = lean_box(0);
lean_inc(v_snd_3147_);
v_pos_3149_ = v_a_3140_;
v_snd_3150_ = v_snd_3147_;
v_err_3151_ = v___x_3200_;
goto v___jp_3148_;
}
v___jp_3141_:
{
lean_object* v___x_3144_; 
v___x_3144_ = lean_string_push(v_acc_3139_, v_res_3143_);
v_acc_3139_ = v___x_3144_;
v_a_3140_ = v_pos_3142_;
goto _start;
}
v___jp_3148_:
{
uint8_t v_decide_3152_; 
v_decide_3152_ = lean_nat_dec_eq(v_snd_3147_, v_snd_3150_);
lean_dec(v_snd_3150_);
lean_dec(v_snd_3147_);
if (v_decide_3152_ == 0)
{
lean_object* v___x_3153_; 
lean_dec_ref(v_acc_3139_);
lean_inc(v_err_3151_);
v___x_3153_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3153_, 0, v_pos_3149_);
lean_ctor_set(v___x_3153_, 1, v_err_3151_);
return v___x_3153_;
}
else
{
lean_object* v___x_3154_; 
v___x_3154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3154_, 0, v_pos_3149_);
lean_ctor_set(v___x_3154_, 1, v_acc_3139_);
return v___x_3154_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier_spec__0(lean_object* v_acc_3201_, lean_object* v_a_3202_){
_start:
{
lean_object* v_pos_3204_; uint32_t v_res_3205_; lean_object* v_fst_3208_; lean_object* v_snd_3209_; lean_object* v_pos_3211_; lean_object* v_snd_3212_; lean_object* v_err_3213_; lean_object* v___x_3217_; uint8_t v_decide_3218_; 
v_fst_3208_ = lean_ctor_get(v_a_3202_, 0);
v_snd_3209_ = lean_ctor_get(v_a_3202_, 1);
lean_inc(v_snd_3209_);
v___x_3217_ = lean_string_utf8_byte_size(v_fst_3208_);
v_decide_3218_ = lean_nat_dec_eq(v_snd_3209_, v___x_3217_);
if (v_decide_3218_ == 0)
{
uint32_t v_c_3219_; lean_object* v___x_3220_; lean_object* v_it_x27_3221_; uint8_t v___y_3223_; uint8_t v___y_3224_; uint8_t v___y_3225_; uint8_t v___y_3228_; uint8_t v___y_3229_; uint8_t v___y_3230_; uint8_t v___y_3231_; uint8_t v___y_3233_; uint8_t v___y_3234_; uint8_t v___y_3242_; uint8_t v___y_3243_; uint8_t v___y_3251_; uint32_t v___x_3258_; uint8_t v___x_3259_; 
v_c_3219_ = lean_string_utf8_get_fast(v_fst_3208_, v_snd_3209_);
v___x_3220_ = lean_string_utf8_next_fast(v_fst_3208_, v_snd_3209_);
lean_inc(v_fst_3208_);
v_it_x27_3221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_3221_, 0, v_fst_3208_);
lean_ctor_set(v_it_x27_3221_, 1, v___x_3220_);
v___x_3258_ = 65;
v___x_3259_ = lean_uint32_dec_le(v___x_3258_, v_c_3219_);
if (v___x_3259_ == 0)
{
goto v___jp_3253_;
}
else
{
uint32_t v___x_3260_; uint8_t v___x_3261_; 
v___x_3260_ = 90;
v___x_3261_ = lean_uint32_dec_le(v_c_3219_, v___x_3260_);
if (v___x_3261_ == 0)
{
goto v___jp_3253_;
}
else
{
goto v___jp_3248_;
}
}
v___jp_3222_:
{
if (v___y_3224_ == 0)
{
if (v___y_3223_ == 0)
{
if (v___y_3225_ == 0)
{
lean_object* v___x_3226_; 
lean_dec_ref_known(v_it_x27_3221_, 2);
v___x_3226_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_3209_);
v_pos_3211_ = v_a_3202_;
v_snd_3212_ = v_snd_3209_;
v_err_3213_ = v___x_3226_;
goto v___jp_3210_;
}
else
{
lean_dec(v_snd_3209_);
lean_dec_ref(v_a_3202_);
v_pos_3204_ = v_it_x27_3221_;
v_res_3205_ = v_c_3219_;
goto v___jp_3203_;
}
}
else
{
lean_dec(v_snd_3209_);
lean_dec_ref(v_a_3202_);
v_pos_3204_ = v_it_x27_3221_;
v_res_3205_ = v_c_3219_;
goto v___jp_3203_;
}
}
else
{
lean_dec(v_snd_3209_);
lean_dec_ref(v_a_3202_);
v_pos_3204_ = v_it_x27_3221_;
v_res_3205_ = v_c_3219_;
goto v___jp_3203_;
}
}
v___jp_3227_:
{
if (v___y_3230_ == 0)
{
v___y_3223_ = v___y_3228_;
v___y_3224_ = v___y_3229_;
v___y_3225_ = v___y_3231_;
goto v___jp_3222_;
}
else
{
v___y_3223_ = v___y_3228_;
v___y_3224_ = v___y_3229_;
v___y_3225_ = v___y_3230_;
goto v___jp_3222_;
}
}
v___jp_3232_:
{
uint32_t v___x_3235_; uint8_t v___x_3236_; uint32_t v___x_3237_; uint8_t v___x_3238_; 
v___x_3235_ = 95;
v___x_3236_ = lean_uint32_dec_eq(v_c_3219_, v___x_3235_);
v___x_3237_ = 45;
v___x_3238_ = lean_uint32_dec_eq(v_c_3219_, v___x_3237_);
if (v___x_3238_ == 0)
{
uint32_t v___x_3239_; uint8_t v___x_3240_; 
v___x_3239_ = 47;
v___x_3240_ = lean_uint32_dec_eq(v_c_3219_, v___x_3239_);
v___y_3228_ = v___y_3233_;
v___y_3229_ = v___y_3234_;
v___y_3230_ = v___x_3236_;
v___y_3231_ = v___x_3240_;
goto v___jp_3227_;
}
else
{
v___y_3228_ = v___y_3233_;
v___y_3229_ = v___y_3234_;
v___y_3230_ = v___x_3236_;
v___y_3231_ = v___x_3238_;
goto v___jp_3227_;
}
}
v___jp_3241_:
{
uint32_t v___x_3244_; uint8_t v___x_3245_; 
v___x_3244_ = 48;
v___x_3245_ = lean_uint32_dec_le(v___x_3244_, v_c_3219_);
if (v___x_3245_ == 0)
{
v___y_3233_ = v___y_3243_;
v___y_3234_ = v___x_3245_;
goto v___jp_3232_;
}
else
{
uint32_t v___x_3246_; uint8_t v___x_3247_; 
v___x_3246_ = 57;
v___x_3247_ = lean_uint32_dec_le(v_c_3219_, v___x_3246_);
if (v___x_3247_ == 0)
{
v___y_3233_ = v___y_3243_;
v___y_3234_ = v___x_3247_;
goto v___jp_3232_;
}
else
{
v___y_3233_ = v___y_3243_;
v___y_3234_ = v___y_3242_;
goto v___jp_3232_;
}
}
}
v___jp_3248_:
{
uint8_t v___x_3249_; 
v___x_3249_ = 1;
v___y_3242_ = v___x_3249_;
v___y_3243_ = v___x_3249_;
goto v___jp_3241_;
}
v___jp_3250_:
{
uint8_t v___x_3252_; 
v___x_3252_ = 1;
v___y_3242_ = v___x_3252_;
v___y_3243_ = v___y_3251_;
goto v___jp_3241_;
}
v___jp_3253_:
{
uint32_t v___x_3254_; uint8_t v___x_3255_; 
v___x_3254_ = 97;
v___x_3255_ = lean_uint32_dec_le(v___x_3254_, v_c_3219_);
if (v___x_3255_ == 0)
{
v___y_3251_ = v___x_3255_;
goto v___jp_3250_;
}
else
{
uint32_t v___x_3256_; uint8_t v___x_3257_; 
v___x_3256_ = 122;
v___x_3257_ = lean_uint32_dec_le(v_c_3219_, v___x_3256_);
if (v___x_3257_ == 0)
{
v___y_3251_ = v___x_3257_;
goto v___jp_3250_;
}
else
{
goto v___jp_3248_;
}
}
}
}
else
{
lean_object* v___x_3262_; 
v___x_3262_ = lean_box(0);
lean_inc(v_snd_3209_);
v_pos_3211_ = v_a_3202_;
v_snd_3212_ = v_snd_3209_;
v_err_3213_ = v___x_3262_;
goto v___jp_3210_;
}
v___jp_3203_:
{
lean_object* v___x_3206_; lean_object* v___x_3207_; 
v___x_3206_ = lean_string_push(v_acc_3201_, v_res_3205_);
v___x_3207_ = l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier_spec__0_spec__0(v___x_3206_, v_pos_3204_);
return v___x_3207_;
}
v___jp_3210_:
{
uint8_t v_decide_3214_; 
v_decide_3214_ = lean_nat_dec_eq(v_snd_3209_, v_snd_3212_);
lean_dec(v_snd_3212_);
lean_dec(v_snd_3209_);
if (v_decide_3214_ == 0)
{
lean_object* v___x_3215_; 
lean_dec_ref(v_acc_3201_);
lean_inc(v_err_3213_);
v___x_3215_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3215_, 0, v_pos_3211_);
lean_ctor_set(v___x_3215_, 1, v_err_3213_);
return v___x_3215_;
}
else
{
lean_object* v___x_3216_; 
v___x_3216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3216_, 0, v_pos_3211_);
lean_ctor_set(v___x_3216_, 1, v_acc_3201_);
return v___x_3216_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier(lean_object* v_a_3263_){
_start:
{
lean_object* v_fst_3264_; lean_object* v_snd_3265_; lean_object* v___x_3266_; uint8_t v_decide_3267_; 
v_fst_3264_ = lean_ctor_get(v_a_3263_, 0);
v_snd_3265_ = lean_ctor_get(v_a_3263_, 1);
v___x_3266_ = lean_string_utf8_byte_size(v_fst_3264_);
v_decide_3267_ = lean_nat_dec_eq(v_snd_3265_, v___x_3266_);
if (v_decide_3267_ == 0)
{
uint32_t v_c_3268_; lean_object* v___x_3269_; uint8_t v___y_3276_; uint8_t v___y_3277_; uint8_t v___y_3278_; uint8_t v___y_3282_; uint8_t v___y_3283_; uint8_t v___y_3284_; uint8_t v___y_3285_; uint8_t v___y_3287_; uint8_t v___y_3288_; uint8_t v___y_3296_; uint8_t v___y_3297_; uint8_t v___y_3303_; uint32_t v___x_3312_; uint8_t v___x_3313_; 
v_c_3268_ = lean_string_utf8_get_fast(v_fst_3264_, v_snd_3265_);
v___x_3269_ = lean_string_utf8_next_fast(v_fst_3264_, v_snd_3265_);
v___x_3312_ = 65;
v___x_3313_ = lean_uint32_dec_le(v___x_3312_, v_c_3268_);
if (v___x_3313_ == 0)
{
goto v___jp_3307_;
}
else
{
uint32_t v___x_3314_; uint8_t v___x_3315_; 
v___x_3314_ = 90;
v___x_3315_ = lean_uint32_dec_le(v_c_3268_, v___x_3314_);
if (v___x_3315_ == 0)
{
goto v___jp_3307_;
}
else
{
goto v___jp_3305_;
}
}
v___jp_3270_:
{
lean_object* v_it_x27_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; 
v_it_x27_3271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_3271_, 0, v_fst_3264_);
lean_ctor_set(v_it_x27_3271_, 1, v___x_3269_);
v___x_3272_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_3273_ = lean_string_push(v___x_3272_, v_c_3268_);
v___x_3274_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier_spec__0(v___x_3273_, v_it_x27_3271_);
return v___x_3274_;
}
v___jp_3275_:
{
if (v___y_3277_ == 0)
{
if (v___y_3276_ == 0)
{
if (v___y_3278_ == 0)
{
lean_object* v___x_3279_; lean_object* v___x_3280_; 
v___x_3279_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_3280_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3280_, 0, v_a_3263_);
lean_ctor_set(v___x_3280_, 1, v___x_3279_);
return v___x_3280_;
}
else
{
lean_inc(v_fst_3264_);
lean_dec_ref(v_a_3263_);
goto v___jp_3270_;
}
}
else
{
lean_inc(v_fst_3264_);
lean_dec_ref(v_a_3263_);
goto v___jp_3270_;
}
}
else
{
lean_inc(v_fst_3264_);
lean_dec_ref(v_a_3263_);
goto v___jp_3270_;
}
}
v___jp_3281_:
{
if (v___y_3284_ == 0)
{
v___y_3276_ = v___y_3282_;
v___y_3277_ = v___y_3283_;
v___y_3278_ = v___y_3285_;
goto v___jp_3275_;
}
else
{
v___y_3276_ = v___y_3282_;
v___y_3277_ = v___y_3283_;
v___y_3278_ = v___y_3284_;
goto v___jp_3275_;
}
}
v___jp_3286_:
{
uint32_t v___x_3289_; uint8_t v___x_3290_; uint32_t v___x_3291_; uint8_t v___x_3292_; 
v___x_3289_ = 95;
v___x_3290_ = lean_uint32_dec_eq(v_c_3268_, v___x_3289_);
v___x_3291_ = 45;
v___x_3292_ = lean_uint32_dec_eq(v_c_3268_, v___x_3291_);
if (v___x_3292_ == 0)
{
uint32_t v___x_3293_; uint8_t v___x_3294_; 
v___x_3293_ = 47;
v___x_3294_ = lean_uint32_dec_eq(v_c_3268_, v___x_3293_);
v___y_3282_ = v___y_3287_;
v___y_3283_ = v___y_3288_;
v___y_3284_ = v___x_3290_;
v___y_3285_ = v___x_3294_;
goto v___jp_3281_;
}
else
{
v___y_3282_ = v___y_3287_;
v___y_3283_ = v___y_3288_;
v___y_3284_ = v___x_3290_;
v___y_3285_ = v___x_3292_;
goto v___jp_3281_;
}
}
v___jp_3295_:
{
uint32_t v___x_3298_; uint8_t v___x_3299_; 
v___x_3298_ = 48;
v___x_3299_ = lean_uint32_dec_le(v___x_3298_, v_c_3268_);
if (v___x_3299_ == 0)
{
v___y_3287_ = v___y_3297_;
v___y_3288_ = v___x_3299_;
goto v___jp_3286_;
}
else
{
uint32_t v___x_3300_; uint8_t v___x_3301_; 
v___x_3300_ = 57;
v___x_3301_ = lean_uint32_dec_le(v_c_3268_, v___x_3300_);
if (v___x_3301_ == 0)
{
v___y_3287_ = v___y_3297_;
v___y_3288_ = v___x_3301_;
goto v___jp_3286_;
}
else
{
v___y_3287_ = v___y_3297_;
v___y_3288_ = v___y_3296_;
goto v___jp_3286_;
}
}
}
v___jp_3302_:
{
uint8_t v___x_3304_; 
v___x_3304_ = 1;
v___y_3296_ = v___x_3304_;
v___y_3297_ = v___y_3303_;
goto v___jp_3295_;
}
v___jp_3305_:
{
uint8_t v___x_3306_; 
v___x_3306_ = 1;
v___y_3296_ = v___x_3306_;
v___y_3297_ = v___x_3306_;
goto v___jp_3295_;
}
v___jp_3307_:
{
uint32_t v___x_3308_; uint8_t v___x_3309_; 
v___x_3308_ = 97;
v___x_3309_ = lean_uint32_dec_le(v___x_3308_, v_c_3268_);
if (v___x_3309_ == 0)
{
v___y_3303_ = v___x_3309_;
goto v___jp_3302_;
}
else
{
uint32_t v___x_3310_; uint8_t v___x_3311_; 
v___x_3310_ = 122;
v___x_3311_ = lean_uint32_dec_le(v_c_3268_, v___x_3310_);
if (v___x_3311_ == 0)
{
v___y_3303_ = v___x_3311_;
goto v___jp_3302_;
}
else
{
goto v___jp_3305_;
}
}
}
}
else
{
lean_object* v___x_3316_; lean_object* v___x_3317_; 
v___x_3316_ = lean_box(0);
v___x_3317_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3317_, 0, v_a_3263_);
lean_ctor_set(v___x_3317_, 1, v___x_3316_);
return v___x_3317_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(lean_object* v_n_3320_, lean_object* v_m_3321_, lean_object* v_parser_3322_, lean_object* v_a_3323_){
_start:
{
lean_object* v___x_3324_; 
v___x_3324_ = lean_apply_1(v_parser_3322_, v_a_3323_);
if (lean_obj_tag(v___x_3324_) == 0)
{
lean_object* v_pos_3325_; lean_object* v_res_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3346_; 
v_pos_3325_ = lean_ctor_get(v___x_3324_, 0);
v_res_3326_ = lean_ctor_get(v___x_3324_, 1);
v_isSharedCheck_3346_ = !lean_is_exclusive(v___x_3324_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3328_ = v___x_3324_;
v_isShared_3329_ = v_isSharedCheck_3346_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_res_3326_);
lean_inc(v_pos_3325_);
lean_dec(v___x_3324_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3346_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
uint8_t v___x_3342_; 
v___x_3342_ = lean_nat_dec_le(v_n_3320_, v_res_3326_);
if (v___x_3342_ == 0)
{
lean_dec(v_res_3326_);
goto v___jp_3330_;
}
else
{
uint8_t v___x_3343_; 
v___x_3343_ = lean_nat_dec_le(v_res_3326_, v_m_3321_);
if (v___x_3343_ == 0)
{
lean_dec(v_res_3326_);
goto v___jp_3330_;
}
else
{
lean_object* v___x_3344_; lean_object* v___x_3345_; 
lean_del_object(v___x_3328_);
lean_dec(v_m_3321_);
lean_dec(v_n_3320_);
v___x_3344_ = lean_nat_to_int(v_res_3326_);
v___x_3345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3345_, 0, v_pos_3325_);
lean_ctor_set(v___x_3345_, 1, v___x_3344_);
return v___x_3345_;
}
}
v___jp_3330_:
{
lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3340_; 
v___x_3331_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__0));
v___x_3332_ = l_Nat_reprFast(v_n_3320_);
v___x_3333_ = lean_string_append(v___x_3331_, v___x_3332_);
lean_dec_ref(v___x_3332_);
v___x_3334_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__1));
v___x_3335_ = lean_string_append(v___x_3333_, v___x_3334_);
v___x_3336_ = l_Nat_reprFast(v_m_3321_);
v___x_3337_ = lean_string_append(v___x_3335_, v___x_3336_);
lean_dec_ref(v___x_3336_);
v___x_3338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3338_, 0, v___x_3337_);
if (v_isShared_3329_ == 0)
{
lean_ctor_set_tag(v___x_3328_, 1);
lean_ctor_set(v___x_3328_, 1, v___x_3338_);
v___x_3340_ = v___x_3328_;
goto v_reusejp_3339_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v_pos_3325_);
lean_ctor_set(v_reuseFailAlloc_3341_, 1, v___x_3338_);
v___x_3340_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3339_;
}
v_reusejp_3339_:
{
return v___x_3340_;
}
}
}
}
else
{
lean_object* v_pos_3347_; lean_object* v_err_3348_; lean_object* v___x_3350_; uint8_t v_isShared_3351_; uint8_t v_isSharedCheck_3355_; 
lean_dec(v_m_3321_);
lean_dec(v_n_3320_);
v_pos_3347_ = lean_ctor_get(v___x_3324_, 0);
v_err_3348_ = lean_ctor_get(v___x_3324_, 1);
v_isSharedCheck_3355_ = !lean_is_exclusive(v___x_3324_);
if (v_isSharedCheck_3355_ == 0)
{
v___x_3350_ = v___x_3324_;
v_isShared_3351_ = v_isSharedCheck_3355_;
goto v_resetjp_3349_;
}
else
{
lean_inc(v_err_3348_);
lean_inc(v_pos_3347_);
lean_dec(v___x_3324_);
v___x_3350_ = lean_box(0);
v_isShared_3351_ = v_isSharedCheck_3355_;
goto v_resetjp_3349_;
}
v_resetjp_3349_:
{
lean_object* v___x_3353_; 
if (v_isShared_3351_ == 0)
{
v___x_3353_ = v___x_3350_;
goto v_reusejp_3352_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v_pos_3347_);
lean_ctor_set(v_reuseFailAlloc_3354_, 1, v_err_3348_);
v___x_3353_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3352_;
}
v_reusejp_3352_:
{
return v___x_3353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOneOrTwoNum(lean_object* v_a_3356_){
_start:
{
lean_object* v_fst_3360_; lean_object* v_snd_3361_; lean_object* v___x_3362_; uint8_t v_decide_3363_; 
v_fst_3360_ = lean_ctor_get(v_a_3356_, 0);
v_snd_3361_ = lean_ctor_get(v_a_3356_, 1);
v___x_3362_ = lean_string_utf8_byte_size(v_fst_3360_);
v_decide_3363_ = lean_nat_dec_eq(v_snd_3361_, v___x_3362_);
if (v_decide_3363_ == 0)
{
uint32_t v_c_3364_; uint32_t v___x_3365_; uint8_t v___x_3366_; 
v_c_3364_ = lean_string_utf8_get_fast(v_fst_3360_, v_snd_3361_);
v___x_3365_ = 48;
v___x_3366_ = lean_uint32_dec_le(v___x_3365_, v_c_3364_);
if (v___x_3366_ == 0)
{
goto v___jp_3357_;
}
else
{
uint32_t v___x_3367_; uint8_t v___x_3368_; 
v___x_3367_ = 57;
v___x_3368_ = lean_uint32_dec_le(v_c_3364_, v___x_3367_);
if (v___x_3368_ == 0)
{
goto v___jp_3357_;
}
else
{
lean_object* v___x_3370_; uint8_t v_isShared_3371_; uint8_t v_isSharedCheck_3404_; 
lean_inc(v_snd_3361_);
lean_inc(v_fst_3360_);
v_isSharedCheck_3404_ = !lean_is_exclusive(v_a_3356_);
if (v_isSharedCheck_3404_ == 0)
{
lean_object* v_unused_3405_; lean_object* v_unused_3406_; 
v_unused_3405_ = lean_ctor_get(v_a_3356_, 1);
lean_dec(v_unused_3405_);
v_unused_3406_ = lean_ctor_get(v_a_3356_, 0);
lean_dec(v_unused_3406_);
v___x_3370_ = v_a_3356_;
v_isShared_3371_ = v_isSharedCheck_3404_;
goto v_resetjp_3369_;
}
else
{
lean_dec(v_a_3356_);
v___x_3370_ = lean_box(0);
v_isShared_3371_ = v_isSharedCheck_3404_;
goto v_resetjp_3369_;
}
v_resetjp_3369_:
{
lean_object* v___x_3372_; lean_object* v_pos_3374_; lean_object* v_snd_3375_; lean_object* v_err_3376_; lean_object* v_it_x27_3384_; 
v___x_3372_ = lean_string_utf8_next_fast(v_fst_3360_, v_snd_3361_);
lean_dec(v_snd_3361_);
lean_inc(v_fst_3360_);
if (v_isShared_3371_ == 0)
{
lean_ctor_set(v___x_3370_, 1, v___x_3372_);
v_it_x27_3384_ = v___x_3370_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_fst_3360_);
lean_ctor_set(v_reuseFailAlloc_3403_, 1, v___x_3372_);
v_it_x27_3384_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3383_;
}
v___jp_3373_:
{
uint8_t v_decide_3377_; 
v_decide_3377_ = lean_nat_dec_eq(v___x_3372_, v_snd_3375_);
lean_dec(v_snd_3375_);
if (v_decide_3377_ == 0)
{
lean_object* v___x_3378_; 
lean_inc(v_err_3376_);
v___x_3378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3378_, 0, v_pos_3374_);
lean_ctor_set(v___x_3378_, 1, v_err_3376_);
return v___x_3378_;
}
else
{
lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3379_ = lean_uint32_to_nat(v_c_3364_);
v___x_3380_ = lean_unsigned_to_nat(48u);
v___x_3381_ = lean_nat_sub(v___x_3379_, v___x_3380_);
lean_dec(v___x_3379_);
v___x_3382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3382_, 0, v_pos_3374_);
lean_ctor_set(v___x_3382_, 1, v___x_3381_);
return v___x_3382_;
}
}
v_reusejp_3383_:
{
uint8_t v_decide_3387_; 
v_decide_3387_ = lean_nat_dec_eq(v___x_3372_, v___x_3362_);
if (v_decide_3387_ == 0)
{
uint32_t v___x_3388_; uint8_t v___x_3389_; 
v___x_3388_ = lean_string_utf8_get_fast(v_fst_3360_, v___x_3372_);
v___x_3389_ = lean_uint32_dec_le(v___x_3365_, v___x_3388_);
if (v___x_3389_ == 0)
{
lean_dec(v_fst_3360_);
goto v___jp_3385_;
}
else
{
uint8_t v___x_3390_; 
v___x_3390_ = lean_uint32_dec_le(v___x_3388_, v___x_3367_);
if (v___x_3390_ == 0)
{
lean_dec(v_fst_3360_);
goto v___jp_3385_;
}
else
{
lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; 
lean_dec_ref(v_it_x27_3384_);
v___x_3391_ = lean_unsigned_to_nat(48u);
v___x_3392_ = lean_string_utf8_next_fast(v_fst_3360_, v___x_3372_);
v___x_3393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3393_, 0, v_fst_3360_);
lean_ctor_set(v___x_3393_, 1, v___x_3392_);
v___x_3394_ = lean_uint32_to_nat(v_c_3364_);
v___x_3395_ = lean_nat_sub(v___x_3394_, v___x_3391_);
lean_dec(v___x_3394_);
v___x_3396_ = lean_unsigned_to_nat(10u);
v___x_3397_ = lean_nat_mul(v___x_3395_, v___x_3396_);
lean_dec(v___x_3395_);
v___x_3398_ = lean_uint32_to_nat(v___x_3388_);
v___x_3399_ = lean_nat_sub(v___x_3398_, v___x_3391_);
lean_dec(v___x_3398_);
v___x_3400_ = lean_nat_add(v___x_3397_, v___x_3399_);
lean_dec(v___x_3399_);
lean_dec(v___x_3397_);
v___x_3401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3401_, 0, v___x_3393_);
lean_ctor_set(v___x_3401_, 1, v___x_3400_);
return v___x_3401_;
}
}
}
else
{
lean_object* v___x_3402_; 
lean_dec(v_fst_3360_);
v___x_3402_ = lean_box(0);
v_pos_3374_ = v_it_x27_3384_;
v_snd_3375_ = v___x_3372_;
v_err_3376_ = v___x_3402_;
goto v___jp_3373_;
}
v___jp_3385_:
{
lean_object* v___x_3386_; 
v___x_3386_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v_pos_3374_ = v_it_x27_3384_;
v_snd_3375_ = v___x_3372_;
v_err_3376_ = v___x_3386_;
goto v___jp_3373_;
}
}
}
}
}
}
else
{
lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3407_ = lean_box(0);
v___x_3408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3408_, 0, v_a_3356_);
lean_ctor_set(v___x_3408_, 1, v___x_3407_);
return v___x_3408_;
}
v___jp_3357_:
{
lean_object* v___x_3358_; lean_object* v___x_3359_; 
v___x_3358_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_3359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3359_, 0, v_a_3356_);
lean_ctor_set(v___x_3359_, 1, v___x_3358_);
return v___x_3359_;
}
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1(void){
_start:
{
uint32_t v___x_3412_; lean_object* v___x_3413_; 
v___x_3412_ = 58;
v___x_3413_ = lean_box_uint32(v___x_3412_);
return v___x_3413_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0(uint8_t v_withColon_3414_, lean_object* v___y_3415_){
_start:
{
if (v_withColon_3414_ == 0)
{
lean_object* v___x_3416_; lean_object* v___x_3417_; 
v___x_3416_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1;
v___x_3417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3417_, 0, v___y_3415_);
lean_ctor_set(v___x_3417_, 1, v___x_3416_);
return v___x_3417_;
}
else
{
lean_object* v_fst_3418_; lean_object* v_snd_3419_; lean_object* v___x_3420_; uint8_t v_decide_3421_; 
v_fst_3418_ = lean_ctor_get(v___y_3415_, 0);
v_snd_3419_ = lean_ctor_get(v___y_3415_, 1);
v___x_3420_ = lean_string_utf8_byte_size(v_fst_3418_);
v_decide_3421_ = lean_nat_dec_eq(v_snd_3419_, v___x_3420_);
if (v_decide_3421_ == 0)
{
uint32_t v___x_3422_; uint32_t v_c_3423_; uint8_t v___x_3424_; 
v___x_3422_ = 58;
v_c_3423_ = lean_string_utf8_get_fast(v_fst_3418_, v_snd_3419_);
v___x_3424_ = lean_uint32_dec_eq(v_c_3423_, v___x_3422_);
if (v___x_3424_ == 0)
{
lean_object* v___x_3425_; lean_object* v___x_3426_; 
v___x_3425_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__1));
v___x_3426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3426_, 0, v___y_3415_);
lean_ctor_set(v___x_3426_, 1, v___x_3425_);
return v___x_3426_;
}
else
{
lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3436_; 
lean_inc(v_snd_3419_);
lean_inc(v_fst_3418_);
v_isSharedCheck_3436_ = !lean_is_exclusive(v___y_3415_);
if (v_isSharedCheck_3436_ == 0)
{
lean_object* v_unused_3437_; lean_object* v_unused_3438_; 
v_unused_3437_ = lean_ctor_get(v___y_3415_, 1);
lean_dec(v_unused_3437_);
v_unused_3438_ = lean_ctor_get(v___y_3415_, 0);
lean_dec(v_unused_3438_);
v___x_3428_ = v___y_3415_;
v_isShared_3429_ = v_isSharedCheck_3436_;
goto v_resetjp_3427_;
}
else
{
lean_dec(v___y_3415_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3436_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v___x_3430_; lean_object* v_it_x27_3432_; 
v___x_3430_ = lean_string_utf8_next_fast(v_fst_3418_, v_snd_3419_);
lean_dec(v_snd_3419_);
if (v_isShared_3429_ == 0)
{
lean_ctor_set(v___x_3428_, 1, v___x_3430_);
v_it_x27_3432_ = v___x_3428_;
goto v_reusejp_3431_;
}
else
{
lean_object* v_reuseFailAlloc_3435_; 
v_reuseFailAlloc_3435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3435_, 0, v_fst_3418_);
lean_ctor_set(v_reuseFailAlloc_3435_, 1, v___x_3430_);
v_it_x27_3432_ = v_reuseFailAlloc_3435_;
goto v_reusejp_3431_;
}
v_reusejp_3431_:
{
lean_object* v___x_3433_; lean_object* v___x_3434_; 
v___x_3433_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1;
v___x_3434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3434_, 0, v_it_x27_3432_);
lean_ctor_set(v___x_3434_, 1, v___x_3433_);
return v___x_3434_;
}
}
}
}
else
{
lean_object* v___x_3439_; lean_object* v___x_3440_; 
v___x_3439_ = lean_box(0);
v___x_3440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3440_, 0, v___y_3415_);
lean_ctor_set(v___x_3440_, 1, v___x_3439_);
return v___x_3440_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed(lean_object* v_withColon_3441_, lean_object* v___y_3442_){
_start:
{
uint8_t v_withColon_boxed_3443_; lean_object* v_res_3444_; 
v_withColon_boxed_3443_ = lean_unbox(v_withColon_3441_);
v_res_3444_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0(v_withColon_boxed_3443_, v___y_3442_);
return v_res_3444_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__1(lean_object* v_a_3445_, lean_object* v___y_3446_){
_start:
{
lean_object* v___x_3447_; lean_object* v___x_3448_; 
v___x_3447_ = lean_nat_to_int(v_a_3445_);
v___x_3448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3448_, 0, v___y_3446_);
lean_ctor_set(v___x_3448_, 1, v___x_3447_);
return v___x_3448_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2(lean_object* v___y_3449_, lean_object* v___f_3450_, lean_object* v_n_3451_, uint8_t v_reason_3452_, lean_object* v___y_3453_){
_start:
{
lean_object* v_pos_3455_; lean_object* v_err_3456_; 
switch(v_reason_3452_)
{
case 0:
{
lean_object* v___x_3472_; 
v___x_3472_ = lean_apply_1(v___y_3449_, v___y_3453_);
if (lean_obj_tag(v___x_3472_) == 0)
{
lean_object* v_pos_3473_; lean_object* v___x_3474_; 
v_pos_3473_ = lean_ctor_get(v___x_3472_, 0);
lean_inc(v_pos_3473_);
lean_dec_ref_known(v___x_3472_, 2);
v___x_3474_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOneOrTwoNum(v_pos_3473_);
if (lean_obj_tag(v___x_3474_) == 0)
{
lean_object* v_pos_3475_; lean_object* v_res_3476_; lean_object* v___x_3477_; 
v_pos_3475_ = lean_ctor_get(v___x_3474_, 0);
lean_inc(v_pos_3475_);
v_res_3476_ = lean_ctor_get(v___x_3474_, 1);
lean_inc(v_res_3476_);
lean_dec_ref_known(v___x_3474_, 2);
v___x_3477_ = lean_apply_2(v___f_3450_, v_res_3476_, v_pos_3475_);
if (lean_obj_tag(v___x_3477_) == 0)
{
lean_object* v_pos_3478_; lean_object* v_res_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3487_; 
v_pos_3478_ = lean_ctor_get(v___x_3477_, 0);
v_res_3479_ = lean_ctor_get(v___x_3477_, 1);
v_isSharedCheck_3487_ = !lean_is_exclusive(v___x_3477_);
if (v_isSharedCheck_3487_ == 0)
{
v___x_3481_ = v___x_3477_;
v_isShared_3482_ = v_isSharedCheck_3487_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_res_3479_);
lean_inc(v_pos_3478_);
lean_dec(v___x_3477_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3487_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
lean_object* v___x_3483_; lean_object* v___x_3485_; 
v___x_3483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3483_, 0, v_res_3479_);
if (v_isShared_3482_ == 0)
{
lean_ctor_set(v___x_3481_, 1, v___x_3483_);
v___x_3485_ = v___x_3481_;
goto v_reusejp_3484_;
}
else
{
lean_object* v_reuseFailAlloc_3486_; 
v_reuseFailAlloc_3486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3486_, 0, v_pos_3478_);
lean_ctor_set(v_reuseFailAlloc_3486_, 1, v___x_3483_);
v___x_3485_ = v_reuseFailAlloc_3486_;
goto v_reusejp_3484_;
}
v_reusejp_3484_:
{
return v___x_3485_;
}
}
}
else
{
lean_object* v_pos_3488_; lean_object* v_err_3489_; lean_object* v___x_3491_; uint8_t v_isShared_3492_; uint8_t v_isSharedCheck_3496_; 
v_pos_3488_ = lean_ctor_get(v___x_3477_, 0);
v_err_3489_ = lean_ctor_get(v___x_3477_, 1);
v_isSharedCheck_3496_ = !lean_is_exclusive(v___x_3477_);
if (v_isSharedCheck_3496_ == 0)
{
v___x_3491_ = v___x_3477_;
v_isShared_3492_ = v_isSharedCheck_3496_;
goto v_resetjp_3490_;
}
else
{
lean_inc(v_err_3489_);
lean_inc(v_pos_3488_);
lean_dec(v___x_3477_);
v___x_3491_ = lean_box(0);
v_isShared_3492_ = v_isSharedCheck_3496_;
goto v_resetjp_3490_;
}
v_resetjp_3490_:
{
lean_object* v___x_3494_; 
if (v_isShared_3492_ == 0)
{
v___x_3494_ = v___x_3491_;
goto v_reusejp_3493_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v_pos_3488_);
lean_ctor_set(v_reuseFailAlloc_3495_, 1, v_err_3489_);
v___x_3494_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3493_;
}
v_reusejp_3493_:
{
return v___x_3494_;
}
}
}
}
else
{
lean_object* v_pos_3497_; lean_object* v_err_3498_; lean_object* v___x_3500_; uint8_t v_isShared_3501_; uint8_t v_isSharedCheck_3505_; 
lean_dec_ref(v___f_3450_);
v_pos_3497_ = lean_ctor_get(v___x_3474_, 0);
v_err_3498_ = lean_ctor_get(v___x_3474_, 1);
v_isSharedCheck_3505_ = !lean_is_exclusive(v___x_3474_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3500_ = v___x_3474_;
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
else
{
lean_inc(v_err_3498_);
lean_inc(v_pos_3497_);
lean_dec(v___x_3474_);
v___x_3500_ = lean_box(0);
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
v_resetjp_3499_:
{
lean_object* v___x_3503_; 
if (v_isShared_3501_ == 0)
{
v___x_3503_ = v___x_3500_;
goto v_reusejp_3502_;
}
else
{
lean_object* v_reuseFailAlloc_3504_; 
v_reuseFailAlloc_3504_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3504_, 0, v_pos_3497_);
lean_ctor_set(v_reuseFailAlloc_3504_, 1, v_err_3498_);
v___x_3503_ = v_reuseFailAlloc_3504_;
goto v_reusejp_3502_;
}
v_reusejp_3502_:
{
return v___x_3503_;
}
}
}
}
else
{
lean_object* v_pos_3506_; lean_object* v_err_3507_; lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3514_; 
lean_dec_ref(v___f_3450_);
v_pos_3506_ = lean_ctor_get(v___x_3472_, 0);
v_err_3507_ = lean_ctor_get(v___x_3472_, 1);
v_isSharedCheck_3514_ = !lean_is_exclusive(v___x_3472_);
if (v_isSharedCheck_3514_ == 0)
{
v___x_3509_ = v___x_3472_;
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
else
{
lean_inc(v_err_3507_);
lean_inc(v_pos_3506_);
lean_dec(v___x_3472_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
v_resetjp_3508_:
{
lean_object* v___x_3512_; 
if (v_isShared_3510_ == 0)
{
v___x_3512_ = v___x_3509_;
goto v_reusejp_3511_;
}
else
{
lean_object* v_reuseFailAlloc_3513_; 
v_reuseFailAlloc_3513_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3513_, 0, v_pos_3506_);
lean_ctor_set(v_reuseFailAlloc_3513_, 1, v_err_3507_);
v___x_3512_ = v_reuseFailAlloc_3513_;
goto v_reusejp_3511_;
}
v_reusejp_3511_:
{
return v___x_3512_;
}
}
}
}
case 1:
{
lean_object* v___x_3515_; lean_object* v___x_3516_; 
lean_dec_ref(v___f_3450_);
lean_dec_ref(v___y_3449_);
v___x_3515_ = lean_box(0);
v___x_3516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3516_, 0, v___y_3453_);
lean_ctor_set(v___x_3516_, 1, v___x_3515_);
return v___x_3516_;
}
default: 
{
lean_object* v___x_3517_; 
lean_inc_ref(v___y_3453_);
v___x_3517_ = lean_apply_1(v___y_3449_, v___y_3453_);
if (lean_obj_tag(v___x_3517_) == 0)
{
lean_object* v_pos_3518_; lean_object* v___x_3519_; 
v_pos_3518_ = lean_ctor_get(v___x_3517_, 0);
lean_inc(v_pos_3518_);
lean_dec_ref_known(v___x_3517_, 2);
v___x_3519_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOneOrTwoNum(v_pos_3518_);
if (lean_obj_tag(v___x_3519_) == 0)
{
lean_object* v_pos_3520_; lean_object* v_res_3521_; lean_object* v___x_3522_; 
v_pos_3520_ = lean_ctor_get(v___x_3519_, 0);
lean_inc(v_pos_3520_);
v_res_3521_ = lean_ctor_get(v___x_3519_, 1);
lean_inc(v_res_3521_);
lean_dec_ref_known(v___x_3519_, 2);
v___x_3522_ = lean_apply_2(v___f_3450_, v_res_3521_, v_pos_3520_);
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_object* v_pos_3523_; lean_object* v_res_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3532_; 
lean_dec_ref(v___y_3453_);
v_pos_3523_ = lean_ctor_get(v___x_3522_, 0);
v_res_3524_ = lean_ctor_get(v___x_3522_, 1);
v_isSharedCheck_3532_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3532_ == 0)
{
v___x_3526_ = v___x_3522_;
v_isShared_3527_ = v_isSharedCheck_3532_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_res_3524_);
lean_inc(v_pos_3523_);
lean_dec(v___x_3522_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3532_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
lean_object* v___x_3528_; lean_object* v___x_3530_; 
v___x_3528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3528_, 0, v_res_3524_);
if (v_isShared_3527_ == 0)
{
lean_ctor_set(v___x_3526_, 1, v___x_3528_);
v___x_3530_ = v___x_3526_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v_pos_3523_);
lean_ctor_set(v_reuseFailAlloc_3531_, 1, v___x_3528_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
return v___x_3530_;
}
}
}
else
{
lean_object* v_pos_3533_; lean_object* v_err_3534_; 
v_pos_3533_ = lean_ctor_get(v___x_3522_, 0);
lean_inc(v_pos_3533_);
v_err_3534_ = lean_ctor_get(v___x_3522_, 1);
lean_inc(v_err_3534_);
lean_dec_ref_known(v___x_3522_, 2);
v_pos_3455_ = v_pos_3533_;
v_err_3456_ = v_err_3534_;
goto v___jp_3454_;
}
}
else
{
lean_object* v_pos_3535_; lean_object* v_err_3536_; 
lean_dec_ref(v___f_3450_);
v_pos_3535_ = lean_ctor_get(v___x_3519_, 0);
lean_inc(v_pos_3535_);
v_err_3536_ = lean_ctor_get(v___x_3519_, 1);
lean_inc(v_err_3536_);
lean_dec_ref_known(v___x_3519_, 2);
v_pos_3455_ = v_pos_3535_;
v_err_3456_ = v_err_3536_;
goto v___jp_3454_;
}
}
else
{
lean_object* v_pos_3537_; lean_object* v_err_3538_; 
lean_dec_ref(v___f_3450_);
v_pos_3537_ = lean_ctor_get(v___x_3517_, 0);
lean_inc(v_pos_3537_);
v_err_3538_ = lean_ctor_get(v___x_3517_, 1);
lean_inc(v_err_3538_);
lean_dec_ref_known(v___x_3517_, 2);
v_pos_3455_ = v_pos_3537_;
v_err_3456_ = v_err_3538_;
goto v___jp_3454_;
}
}
}
v___jp_3454_:
{
lean_object* v_snd_3457_; lean_object* v___x_3459_; uint8_t v_isShared_3460_; uint8_t v_isSharedCheck_3470_; 
v_snd_3457_ = lean_ctor_get(v___y_3453_, 1);
v_isSharedCheck_3470_ = !lean_is_exclusive(v___y_3453_);
if (v_isSharedCheck_3470_ == 0)
{
lean_object* v_unused_3471_; 
v_unused_3471_ = lean_ctor_get(v___y_3453_, 0);
lean_dec(v_unused_3471_);
v___x_3459_ = v___y_3453_;
v_isShared_3460_ = v_isSharedCheck_3470_;
goto v_resetjp_3458_;
}
else
{
lean_inc(v_snd_3457_);
lean_dec(v___y_3453_);
v___x_3459_ = lean_box(0);
v_isShared_3460_ = v_isSharedCheck_3470_;
goto v_resetjp_3458_;
}
v_resetjp_3458_:
{
lean_object* v_snd_3461_; uint8_t v_decide_3462_; 
v_snd_3461_ = lean_ctor_get(v_pos_3455_, 1);
v_decide_3462_ = lean_nat_dec_eq(v_snd_3457_, v_snd_3461_);
lean_dec(v_snd_3457_);
if (v_decide_3462_ == 0)
{
lean_object* v___x_3464_; 
if (v_isShared_3460_ == 0)
{
lean_ctor_set_tag(v___x_3459_, 1);
lean_ctor_set(v___x_3459_, 1, v_err_3456_);
lean_ctor_set(v___x_3459_, 0, v_pos_3455_);
v___x_3464_ = v___x_3459_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v_pos_3455_);
lean_ctor_set(v_reuseFailAlloc_3465_, 1, v_err_3456_);
v___x_3464_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
return v___x_3464_;
}
}
else
{
lean_object* v___x_3466_; lean_object* v___x_3468_; 
lean_dec(v_err_3456_);
v___x_3466_ = lean_box(0);
if (v_isShared_3460_ == 0)
{
lean_ctor_set(v___x_3459_, 1, v___x_3466_);
lean_ctor_set(v___x_3459_, 0, v_pos_3455_);
v___x_3468_ = v___x_3459_;
goto v_reusejp_3467_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v_pos_3455_);
lean_ctor_set(v_reuseFailAlloc_3469_, 1, v___x_3466_);
v___x_3468_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3467_;
}
v_reusejp_3467_:
{
return v___x_3468_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2___boxed(lean_object* v___y_3539_, lean_object* v___f_3540_, lean_object* v_n_3541_, lean_object* v_reason_3542_, lean_object* v___y_3543_){
_start:
{
uint8_t v_reason_boxed_3544_; lean_object* v_res_3545_; 
v_reason_boxed_3544_ = lean_unbox(v_reason_3542_);
v_res_3545_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2(v___y_3539_, v___f_3540_, v_n_3541_, v_reason_boxed_3544_, v___y_3543_);
lean_dec_ref(v_n_3541_);
return v_res_3545_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__2(void){
_start:
{
lean_object* v___x_3548_; lean_object* v___x_3549_; 
v___x_3548_ = lean_unsigned_to_nat(3600u);
v___x_3549_ = lean_nat_to_int(v___x_3548_);
return v___x_3549_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__4(void){
_start:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; 
v___x_3551_ = lean_unsigned_to_nat(1u);
v___x_3552_ = l_Nat_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_toIsoString_spec__0(v___x_3551_);
return v___x_3552_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5(void){
_start:
{
lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3553_ = lean_unsigned_to_nat(59u);
v___x_3554_ = lean_nat_to_int(v___x_3553_);
return v___x_3554_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__8(void){
_start:
{
lean_object* v___x_3557_; lean_object* v___x_3558_; 
v___x_3557_ = lean_unsigned_to_nat(23u);
v___x_3558_ = lean_nat_to_int(v___x_3557_);
return v___x_3558_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__9(void){
_start:
{
lean_object* v___x_3559_; lean_object* v___x_3560_; 
v___x_3559_ = lean_unsigned_to_nat(60u);
v___x_3560_ = l_Nat_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_toIsoString_spec__0(v___x_3559_);
return v___x_3560_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(uint8_t v_withMinutes_3568_, uint8_t v_withSeconds_3569_, uint8_t v_withColon_3570_, lean_object* v_a_3571_){
_start:
{
lean_object* v___y_3573_; lean_object* v___y_3574_; lean_object* v___y_3583_; lean_object* v___y_3584_; lean_object* v___y_3585_; lean_object* v___y_3586_; lean_object* v___y_3591_; lean_object* v___y_3592_; lean_object* v___y_3593_; lean_object* v___y_3594_; lean_object* v___y_3595_; lean_object* v___y_3596_; lean_object* v___y_3597_; lean_object* v___y_3603_; lean_object* v___y_3604_; lean_object* v___y_3605_; lean_object* v___y_3606_; lean_object* v___y_3607_; lean_object* v___y_3608_; lean_object* v___y_3609_; lean_object* v_fst_3613_; lean_object* v_snd_3614_; lean_object* v___x_3615_; lean_object* v___y_3616_; lean_object* v___f_3617_; lean_object* v___y_3619_; lean_object* v___y_3620_; lean_object* v___y_3621_; lean_object* v___y_3622_; lean_object* v___y_3623_; lean_object* v___y_3624_; lean_object* v_pos_3664_; lean_object* v_res_3665_; lean_object* v_pos_3723_; lean_object* v_fst_3724_; lean_object* v_snd_3725_; lean_object* v_err_3726_; lean_object* v___x_3741_; uint8_t v_decide_3742_; 
v_fst_3613_ = lean_ctor_get(v_a_3571_, 0);
lean_inc(v_fst_3613_);
v_snd_3614_ = lean_ctor_get(v_a_3571_, 1);
lean_inc(v_snd_3614_);
v___x_3615_ = lean_box(v_withColon_3570_);
v___y_3616_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed), 2, 1);
lean_closure_set(v___y_3616_, 0, v___x_3615_);
v___f_3617_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__3));
v___x_3741_ = lean_string_utf8_byte_size(v_fst_3613_);
v_decide_3742_ = lean_nat_dec_eq(v_snd_3614_, v___x_3741_);
if (v_decide_3742_ == 0)
{
uint32_t v___x_3743_; uint32_t v_c_3744_; uint8_t v___x_3745_; 
v___x_3743_ = 43;
v_c_3744_ = lean_string_utf8_get_fast(v_fst_3613_, v_snd_3614_);
v___x_3745_ = lean_uint32_dec_eq(v_c_3744_, v___x_3743_);
if (v___x_3745_ == 0)
{
lean_object* v___x_3746_; 
v___x_3746_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__14));
lean_inc(v_snd_3614_);
v_pos_3723_ = v_a_3571_;
v_fst_3724_ = v_fst_3613_;
v_snd_3725_ = v_snd_3614_;
v_err_3726_ = v___x_3746_;
goto v___jp_3722_;
}
else
{
lean_object* v___x_3748_; uint8_t v_isShared_3749_; uint8_t v_isSharedCheck_3755_; 
v_isSharedCheck_3755_ = !lean_is_exclusive(v_a_3571_);
if (v_isSharedCheck_3755_ == 0)
{
lean_object* v_unused_3756_; lean_object* v_unused_3757_; 
v_unused_3756_ = lean_ctor_get(v_a_3571_, 1);
lean_dec(v_unused_3756_);
v_unused_3757_ = lean_ctor_get(v_a_3571_, 0);
lean_dec(v_unused_3757_);
v___x_3748_ = v_a_3571_;
v_isShared_3749_ = v_isSharedCheck_3755_;
goto v_resetjp_3747_;
}
else
{
lean_dec(v_a_3571_);
v___x_3748_ = lean_box(0);
v_isShared_3749_ = v_isSharedCheck_3755_;
goto v_resetjp_3747_;
}
v_resetjp_3747_:
{
lean_object* v___x_3750_; lean_object* v_it_x27_3752_; 
v___x_3750_ = lean_string_utf8_next_fast(v_fst_3613_, v_snd_3614_);
lean_dec(v_snd_3614_);
if (v_isShared_3749_ == 0)
{
lean_ctor_set(v___x_3748_, 1, v___x_3750_);
v_it_x27_3752_ = v___x_3748_;
goto v_reusejp_3751_;
}
else
{
lean_object* v_reuseFailAlloc_3754_; 
v_reuseFailAlloc_3754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3754_, 0, v_fst_3613_);
lean_ctor_set(v_reuseFailAlloc_3754_, 1, v___x_3750_);
v_it_x27_3752_ = v_reuseFailAlloc_3754_;
goto v_reusejp_3751_;
}
v_reusejp_3751_:
{
lean_object* v___x_3753_; 
v___x_3753_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v_pos_3664_ = v_it_x27_3752_;
v_res_3665_ = v___x_3753_;
goto v___jp_3663_;
}
}
}
}
else
{
lean_object* v___x_3758_; 
v___x_3758_ = lean_box(0);
lean_inc(v_snd_3614_);
v_pos_3723_ = v_a_3571_;
v_fst_3724_ = v_fst_3613_;
v_snd_3725_ = v_snd_3614_;
v_err_3726_ = v___x_3758_;
goto v___jp_3722_;
}
v___jp_3572_:
{
lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; 
v___x_3575_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__0));
v___x_3576_ = l_Int_repr(v___y_3574_);
lean_dec(v___y_3574_);
v___x_3577_ = lean_string_append(v___x_3575_, v___x_3576_);
lean_dec_ref(v___x_3576_);
v___x_3578_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__1));
v___x_3579_ = lean_string_append(v___x_3577_, v___x_3578_);
v___x_3580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3580_, 0, v___x_3579_);
v___x_3581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3581_, 0, v___y_3573_);
lean_ctor_set(v___x_3581_, 1, v___x_3580_);
return v___x_3581_;
}
v___jp_3582_:
{
lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; 
v___x_3587_ = lean_int_add(v___y_3584_, v___y_3586_);
lean_dec(v___y_3586_);
lean_dec(v___y_3584_);
v___x_3588_ = lean_int_mul(v___x_3587_, v___y_3583_);
lean_dec(v___x_3587_);
v___x_3589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3589_, 0, v___y_3585_);
lean_ctor_set(v___x_3589_, 1, v___x_3588_);
return v___x_3589_;
}
v___jp_3590_:
{
lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; 
v___x_3598_ = lean_nat_to_int(v___y_3594_);
v___x_3599_ = lean_int_mul(v___y_3597_, v___x_3598_);
lean_dec(v___x_3598_);
lean_dec(v___y_3597_);
v___x_3600_ = lean_int_add(v___y_3593_, v___x_3599_);
lean_dec(v___x_3599_);
lean_dec(v___y_3593_);
if (lean_obj_tag(v___y_3592_) == 0)
{
lean_inc(v___y_3595_);
v___y_3583_ = v___y_3591_;
v___y_3584_ = v___x_3600_;
v___y_3585_ = v___y_3596_;
v___y_3586_ = v___y_3595_;
goto v___jp_3582_;
}
else
{
lean_object* v_val_3601_; 
v_val_3601_ = lean_ctor_get(v___y_3592_, 0);
lean_inc(v_val_3601_);
lean_dec_ref_known(v___y_3592_, 1);
v___y_3583_ = v___y_3591_;
v___y_3584_ = v___x_3600_;
v___y_3585_ = v___y_3596_;
v___y_3586_ = v_val_3601_;
goto v___jp_3582_;
}
}
v___jp_3602_:
{
lean_object* v___x_3610_; lean_object* v___x_3611_; 
v___x_3610_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__2);
v___x_3611_ = lean_int_mul(v___y_3605_, v___x_3610_);
lean_dec(v___y_3605_);
if (lean_obj_tag(v___y_3606_) == 0)
{
lean_inc(v___y_3608_);
v___y_3591_ = v___y_3603_;
v___y_3592_ = v___y_3604_;
v___y_3593_ = v___x_3611_;
v___y_3594_ = v___y_3607_;
v___y_3595_ = v___y_3608_;
v___y_3596_ = v___y_3609_;
v___y_3597_ = v___y_3608_;
goto v___jp_3590_;
}
else
{
lean_object* v_val_3612_; 
v_val_3612_ = lean_ctor_get(v___y_3606_, 0);
lean_inc(v_val_3612_);
lean_dec_ref_known(v___y_3606_, 1);
v___y_3591_ = v___y_3603_;
v___y_3592_ = v___y_3604_;
v___y_3593_ = v___x_3611_;
v___y_3594_ = v___y_3607_;
v___y_3595_ = v___y_3608_;
v___y_3596_ = v___y_3609_;
v___y_3597_ = v_val_3612_;
goto v___jp_3590_;
}
}
v___jp_3618_:
{
lean_object* v___x_3625_; lean_object* v___x_3626_; 
v___x_3625_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__4, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__4_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__4);
v___x_3626_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2(v___y_3616_, v___f_3617_, v___x_3625_, v_withSeconds_3569_, v___y_3624_);
if (lean_obj_tag(v___x_3626_) == 0)
{
lean_object* v_res_3627_; 
v_res_3627_ = lean_ctor_get(v___x_3626_, 1);
lean_inc(v_res_3627_);
if (lean_obj_tag(v_res_3627_) == 1)
{
lean_object* v_pos_3628_; lean_object* v___x_3630_; uint8_t v_isShared_3631_; uint8_t v_isSharedCheck_3651_; 
v_pos_3628_ = lean_ctor_get(v___x_3626_, 0);
v_isSharedCheck_3651_ = !lean_is_exclusive(v___x_3626_);
if (v_isSharedCheck_3651_ == 0)
{
lean_object* v_unused_3652_; 
v_unused_3652_ = lean_ctor_get(v___x_3626_, 1);
lean_dec(v_unused_3652_);
v___x_3630_ = v___x_3626_;
v_isShared_3631_ = v_isSharedCheck_3651_;
goto v_resetjp_3629_;
}
else
{
lean_inc(v_pos_3628_);
lean_dec(v___x_3626_);
v___x_3630_ = lean_box(0);
v_isShared_3631_ = v_isSharedCheck_3651_;
goto v_resetjp_3629_;
}
v_resetjp_3629_:
{
lean_object* v_val_3632_; lean_object* v___x_3633_; uint8_t v___x_3634_; 
v_val_3632_ = lean_ctor_get(v_res_3627_, 0);
v___x_3633_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5);
v___x_3634_ = lean_int_dec_lt(v___x_3633_, v_val_3632_);
if (v___x_3634_ == 0)
{
lean_del_object(v___x_3630_);
v___y_3603_ = v___y_3619_;
v___y_3604_ = v_res_3627_;
v___y_3605_ = v___y_3620_;
v___y_3606_ = v___y_3622_;
v___y_3607_ = v___y_3621_;
v___y_3608_ = v___y_3623_;
v___y_3609_ = v_pos_3628_;
goto v___jp_3602_;
}
else
{
lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3649_; 
lean_inc(v_val_3632_);
lean_dec(v___y_3622_);
lean_dec(v___y_3621_);
lean_dec(v___y_3620_);
v_isSharedCheck_3649_ = !lean_is_exclusive(v_res_3627_);
if (v_isSharedCheck_3649_ == 0)
{
lean_object* v_unused_3650_; 
v_unused_3650_ = lean_ctor_get(v_res_3627_, 0);
lean_dec(v_unused_3650_);
v___x_3636_ = v_res_3627_;
v_isShared_3637_ = v_isSharedCheck_3649_;
goto v_resetjp_3635_;
}
else
{
lean_dec(v_res_3627_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3649_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3644_; 
v___x_3638_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__6));
v___x_3639_ = l_Int_repr(v_val_3632_);
lean_dec(v_val_3632_);
v___x_3640_ = lean_string_append(v___x_3638_, v___x_3639_);
lean_dec_ref(v___x_3639_);
v___x_3641_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__7));
v___x_3642_ = lean_string_append(v___x_3640_, v___x_3641_);
if (v_isShared_3637_ == 0)
{
lean_ctor_set(v___x_3636_, 0, v___x_3642_);
v___x_3644_ = v___x_3636_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v___x_3642_);
v___x_3644_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
lean_object* v___x_3646_; 
if (v_isShared_3631_ == 0)
{
lean_ctor_set_tag(v___x_3630_, 1);
lean_ctor_set(v___x_3630_, 1, v___x_3644_);
v___x_3646_ = v___x_3630_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v_pos_3628_);
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
}
}
}
else
{
lean_object* v_pos_3653_; 
v_pos_3653_ = lean_ctor_get(v___x_3626_, 0);
lean_inc(v_pos_3653_);
lean_dec_ref_known(v___x_3626_, 2);
v___y_3603_ = v___y_3619_;
v___y_3604_ = v_res_3627_;
v___y_3605_ = v___y_3620_;
v___y_3606_ = v___y_3622_;
v___y_3607_ = v___y_3621_;
v___y_3608_ = v___y_3623_;
v___y_3609_ = v_pos_3653_;
goto v___jp_3602_;
}
}
else
{
lean_object* v_pos_3654_; lean_object* v_err_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3662_; 
lean_dec(v___y_3622_);
lean_dec(v___y_3621_);
lean_dec(v___y_3620_);
v_pos_3654_ = lean_ctor_get(v___x_3626_, 0);
v_err_3655_ = lean_ctor_get(v___x_3626_, 1);
v_isSharedCheck_3662_ = !lean_is_exclusive(v___x_3626_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3657_ = v___x_3626_;
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_err_3655_);
lean_inc(v_pos_3654_);
lean_dec(v___x_3626_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3660_; 
if (v_isShared_3658_ == 0)
{
v___x_3660_ = v___x_3657_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v_pos_3654_);
lean_ctor_set(v_reuseFailAlloc_3661_, 1, v_err_3655_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
}
}
v___jp_3663_:
{
lean_object* v___x_3666_; 
v___x_3666_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOneOrTwoNum(v_pos_3664_);
if (lean_obj_tag(v___x_3666_) == 0)
{
lean_object* v_pos_3667_; lean_object* v_res_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; uint8_t v___x_3671_; 
v_pos_3667_ = lean_ctor_get(v___x_3666_, 0);
lean_inc(v_pos_3667_);
v_res_3668_ = lean_ctor_get(v___x_3666_, 1);
lean_inc(v_res_3668_);
lean_dec_ref_known(v___x_3666_, 2);
v___x_3669_ = lean_nat_to_int(v_res_3668_);
v___x_3670_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_3671_ = lean_int_dec_lt(v___x_3669_, v___x_3670_);
if (v___x_3671_ == 0)
{
lean_object* v___x_3672_; uint8_t v___x_3673_; 
v___x_3672_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__8, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__8_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__8);
v___x_3673_ = lean_int_dec_lt(v___x_3672_, v___x_3669_);
if (v___x_3673_ == 0)
{
lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; 
v___x_3674_ = lean_unsigned_to_nat(60u);
v___x_3675_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__9, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__9_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__9);
lean_inc_ref(v___y_3616_);
v___x_3676_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2(v___y_3616_, v___f_3617_, v___x_3675_, v_withMinutes_3568_, v_pos_3667_);
if (lean_obj_tag(v___x_3676_) == 0)
{
lean_object* v_res_3677_; 
v_res_3677_ = lean_ctor_get(v___x_3676_, 1);
lean_inc(v_res_3677_);
if (lean_obj_tag(v_res_3677_) == 1)
{
lean_object* v_pos_3678_; lean_object* v___x_3680_; uint8_t v_isShared_3681_; uint8_t v_isSharedCheck_3701_; 
v_pos_3678_ = lean_ctor_get(v___x_3676_, 0);
v_isSharedCheck_3701_ = !lean_is_exclusive(v___x_3676_);
if (v_isSharedCheck_3701_ == 0)
{
lean_object* v_unused_3702_; 
v_unused_3702_ = lean_ctor_get(v___x_3676_, 1);
lean_dec(v_unused_3702_);
v___x_3680_ = v___x_3676_;
v_isShared_3681_ = v_isSharedCheck_3701_;
goto v_resetjp_3679_;
}
else
{
lean_inc(v_pos_3678_);
lean_dec(v___x_3676_);
v___x_3680_ = lean_box(0);
v_isShared_3681_ = v_isSharedCheck_3701_;
goto v_resetjp_3679_;
}
v_resetjp_3679_:
{
lean_object* v_val_3682_; lean_object* v___x_3683_; uint8_t v___x_3684_; 
v_val_3682_ = lean_ctor_get(v_res_3677_, 0);
v___x_3683_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5);
v___x_3684_ = lean_int_dec_lt(v___x_3683_, v_val_3682_);
if (v___x_3684_ == 0)
{
lean_del_object(v___x_3680_);
v___y_3619_ = v_res_3665_;
v___y_3620_ = v___x_3669_;
v___y_3621_ = v___x_3674_;
v___y_3622_ = v_res_3677_;
v___y_3623_ = v___x_3670_;
v___y_3624_ = v_pos_3678_;
goto v___jp_3618_;
}
else
{
lean_object* v___x_3686_; uint8_t v_isShared_3687_; uint8_t v_isSharedCheck_3699_; 
lean_inc(v_val_3682_);
lean_dec(v___x_3669_);
lean_dec_ref(v___y_3616_);
v_isSharedCheck_3699_ = !lean_is_exclusive(v_res_3677_);
if (v_isSharedCheck_3699_ == 0)
{
lean_object* v_unused_3700_; 
v_unused_3700_ = lean_ctor_get(v_res_3677_, 0);
lean_dec(v_unused_3700_);
v___x_3686_ = v_res_3677_;
v_isShared_3687_ = v_isSharedCheck_3699_;
goto v_resetjp_3685_;
}
else
{
lean_dec(v_res_3677_);
v___x_3686_ = lean_box(0);
v_isShared_3687_ = v_isSharedCheck_3699_;
goto v_resetjp_3685_;
}
v_resetjp_3685_:
{
lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3694_; 
v___x_3688_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__10));
v___x_3689_ = l_Int_repr(v_val_3682_);
lean_dec(v_val_3682_);
v___x_3690_ = lean_string_append(v___x_3688_, v___x_3689_);
lean_dec_ref(v___x_3689_);
v___x_3691_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__7));
v___x_3692_ = lean_string_append(v___x_3690_, v___x_3691_);
if (v_isShared_3687_ == 0)
{
lean_ctor_set(v___x_3686_, 0, v___x_3692_);
v___x_3694_ = v___x_3686_;
goto v_reusejp_3693_;
}
else
{
lean_object* v_reuseFailAlloc_3698_; 
v_reuseFailAlloc_3698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3698_, 0, v___x_3692_);
v___x_3694_ = v_reuseFailAlloc_3698_;
goto v_reusejp_3693_;
}
v_reusejp_3693_:
{
lean_object* v___x_3696_; 
if (v_isShared_3681_ == 0)
{
lean_ctor_set_tag(v___x_3680_, 1);
lean_ctor_set(v___x_3680_, 1, v___x_3694_);
v___x_3696_ = v___x_3680_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v_pos_3678_);
lean_ctor_set(v_reuseFailAlloc_3697_, 1, v___x_3694_);
v___x_3696_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
return v___x_3696_;
}
}
}
}
}
}
else
{
lean_object* v_pos_3703_; 
v_pos_3703_ = lean_ctor_get(v___x_3676_, 0);
lean_inc(v_pos_3703_);
lean_dec_ref_known(v___x_3676_, 2);
v___y_3619_ = v_res_3665_;
v___y_3620_ = v___x_3669_;
v___y_3621_ = v___x_3674_;
v___y_3622_ = v_res_3677_;
v___y_3623_ = v___x_3670_;
v___y_3624_ = v_pos_3703_;
goto v___jp_3618_;
}
}
else
{
lean_object* v_pos_3704_; lean_object* v_err_3705_; lean_object* v___x_3707_; uint8_t v_isShared_3708_; uint8_t v_isSharedCheck_3712_; 
lean_dec(v___x_3669_);
lean_dec_ref(v___y_3616_);
v_pos_3704_ = lean_ctor_get(v___x_3676_, 0);
v_err_3705_ = lean_ctor_get(v___x_3676_, 1);
v_isSharedCheck_3712_ = !lean_is_exclusive(v___x_3676_);
if (v_isSharedCheck_3712_ == 0)
{
v___x_3707_ = v___x_3676_;
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
else
{
lean_inc(v_err_3705_);
lean_inc(v_pos_3704_);
lean_dec(v___x_3676_);
v___x_3707_ = lean_box(0);
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
v_resetjp_3706_:
{
lean_object* v___x_3710_; 
if (v_isShared_3708_ == 0)
{
v___x_3710_ = v___x_3707_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v_pos_3704_);
lean_ctor_set(v_reuseFailAlloc_3711_, 1, v_err_3705_);
v___x_3710_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
return v___x_3710_;
}
}
}
}
else
{
lean_dec_ref(v___y_3616_);
v___y_3573_ = v_pos_3667_;
v___y_3574_ = v___x_3669_;
goto v___jp_3572_;
}
}
else
{
lean_dec_ref(v___y_3616_);
v___y_3573_ = v_pos_3667_;
v___y_3574_ = v___x_3669_;
goto v___jp_3572_;
}
}
else
{
lean_object* v_pos_3713_; lean_object* v_err_3714_; lean_object* v___x_3716_; uint8_t v_isShared_3717_; uint8_t v_isSharedCheck_3721_; 
lean_dec_ref(v___y_3616_);
v_pos_3713_ = lean_ctor_get(v___x_3666_, 0);
v_err_3714_ = lean_ctor_get(v___x_3666_, 1);
v_isSharedCheck_3721_ = !lean_is_exclusive(v___x_3666_);
if (v_isSharedCheck_3721_ == 0)
{
v___x_3716_ = v___x_3666_;
v_isShared_3717_ = v_isSharedCheck_3721_;
goto v_resetjp_3715_;
}
else
{
lean_inc(v_err_3714_);
lean_inc(v_pos_3713_);
lean_dec(v___x_3666_);
v___x_3716_ = lean_box(0);
v_isShared_3717_ = v_isSharedCheck_3721_;
goto v_resetjp_3715_;
}
v_resetjp_3715_:
{
lean_object* v___x_3719_; 
if (v_isShared_3717_ == 0)
{
v___x_3719_ = v___x_3716_;
goto v_reusejp_3718_;
}
else
{
lean_object* v_reuseFailAlloc_3720_; 
v_reuseFailAlloc_3720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3720_, 0, v_pos_3713_);
lean_ctor_set(v_reuseFailAlloc_3720_, 1, v_err_3714_);
v___x_3719_ = v_reuseFailAlloc_3720_;
goto v_reusejp_3718_;
}
v_reusejp_3718_:
{
return v___x_3719_;
}
}
}
}
v___jp_3722_:
{
uint8_t v_decide_3727_; 
v_decide_3727_ = lean_nat_dec_eq(v_snd_3614_, v_snd_3725_);
lean_dec(v_snd_3614_);
if (v_decide_3727_ == 0)
{
lean_object* v___x_3728_; 
lean_dec(v_snd_3725_);
lean_dec(v_fst_3724_);
lean_dec_ref(v___y_3616_);
lean_inc(v_err_3726_);
v___x_3728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3728_, 0, v_pos_3723_);
lean_ctor_set(v___x_3728_, 1, v_err_3726_);
return v___x_3728_;
}
else
{
lean_object* v___x_3729_; uint8_t v_decide_3730_; 
v___x_3729_ = lean_string_utf8_byte_size(v_fst_3724_);
v_decide_3730_ = lean_nat_dec_eq(v_snd_3725_, v___x_3729_);
if (v_decide_3730_ == 0)
{
uint32_t v___x_3731_; uint32_t v_c_3732_; uint8_t v___x_3733_; 
v___x_3731_ = 45;
v_c_3732_ = lean_string_utf8_get_fast(v_fst_3724_, v_snd_3725_);
v___x_3733_ = lean_uint32_dec_eq(v_c_3732_, v___x_3731_);
if (v___x_3733_ == 0)
{
lean_object* v___x_3734_; lean_object* v___x_3735_; 
lean_dec(v_snd_3725_);
lean_dec(v_fst_3724_);
lean_dec_ref(v___y_3616_);
v___x_3734_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__12));
v___x_3735_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3735_, 0, v_pos_3723_);
lean_ctor_set(v___x_3735_, 1, v___x_3734_);
return v___x_3735_;
}
else
{
lean_object* v___x_3736_; lean_object* v_it_x27_3737_; lean_object* v___x_3738_; 
lean_dec_ref(v_pos_3723_);
v___x_3736_ = lean_string_utf8_next_fast(v_fst_3724_, v_snd_3725_);
lean_dec(v_snd_3725_);
v_it_x27_3737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_3737_, 0, v_fst_3724_);
lean_ctor_set(v_it_x27_3737_, 1, v___x_3736_);
v___x_3738_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v_pos_3664_ = v_it_x27_3737_;
v_res_3665_ = v___x_3738_;
goto v___jp_3663_;
}
}
else
{
lean_object* v___x_3739_; lean_object* v___x_3740_; 
lean_dec(v_snd_3725_);
lean_dec(v_fst_3724_);
lean_dec_ref(v___y_3616_);
v___x_3739_ = lean_box(0);
v___x_3740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3740_, 0, v_pos_3723_);
lean_ctor_set(v___x_3740_, 1, v___x_3739_);
return v___x_3740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___boxed(lean_object* v_withMinutes_3759_, lean_object* v_withSeconds_3760_, lean_object* v_withColon_3761_, lean_object* v_a_3762_){
_start:
{
uint8_t v_withMinutes_boxed_3763_; uint8_t v_withSeconds_boxed_3764_; uint8_t v_withColon_boxed_3765_; lean_object* v_res_3766_; 
v_withMinutes_boxed_3763_ = lean_unbox(v_withMinutes_3759_);
v_withSeconds_boxed_3764_ = lean_unbox(v_withSeconds_3760_);
v_withColon_boxed_3765_ = lean_unbox(v_withColon_3761_);
v_res_3766_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v_withMinutes_boxed_3763_, v_withSeconds_boxed_3764_, v_withColon_boxed_3765_, v_a_3762_);
return v_res_3766_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1(void){
_start:
{
lean_object* v___x_3769_; lean_object* v___x_3770_; 
v___x_3769_ = lean_unsigned_to_nat(2000u);
v___x_3770_ = lean_nat_to_int(v___x_3769_);
return v___x_3770_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__5(void){
_start:
{
lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; 
v___x_3776_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_3777_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1);
v___x_3778_ = lean_int_sub(v___x_3777_, v___x_3776_);
return v___x_3778_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__6(void){
_start:
{
lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v_range_3781_; 
v___x_3779_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_3780_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__5);
v_range_3781_ = lean_int_add(v___x_3780_, v___x_3779_);
return v_range_3781_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith(lean_object* v_config_3784_, lean_object* v_x_3785_, lean_object* v_a_3786_){
_start:
{
lean_object* v___y_3788_; lean_object* v___y_3793_; lean_object* v___y_3798_; 
switch(lean_obj_tag(v_x_3785_))
{
case 0:
{
uint8_t v_presentation_3824_; 
v_presentation_3824_ = lean_ctor_get_uint8(v_x_3785_, 0);
lean_dec_ref_known(v_x_3785_, 0);
switch(v_presentation_3824_)
{
case 1:
{
lean_object* v_dateformat_3825_; lean_object* v_symbols_3826_; lean_object* v___x_3827_; 
v_dateformat_3825_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_3825_);
lean_dec_ref(v_config_3784_);
v_symbols_3826_ = lean_ctor_get(v_dateformat_3825_, 1);
lean_inc_ref(v_symbols_3826_);
lean_dec_ref(v_dateformat_3825_);
v___x_3827_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseEraLong(v_symbols_3826_, v_a_3786_);
return v___x_3827_;
}
case 2:
{
lean_object* v_dateformat_3828_; lean_object* v_symbols_3829_; lean_object* v___x_3830_; 
v_dateformat_3828_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_3828_);
lean_dec_ref(v_config_3784_);
v_symbols_3829_ = lean_ctor_get(v_dateformat_3828_, 1);
lean_inc_ref(v_symbols_3829_);
lean_dec_ref(v_dateformat_3828_);
v___x_3830_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseEraNarrow(v_symbols_3829_, v_a_3786_);
return v___x_3830_;
}
default: 
{
lean_object* v_dateformat_3831_; lean_object* v_symbols_3832_; lean_object* v___x_3833_; 
v_dateformat_3831_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_3831_);
lean_dec_ref(v_config_3784_);
v_symbols_3832_ = lean_ctor_get(v_dateformat_3831_, 1);
lean_inc_ref(v_symbols_3832_);
lean_dec_ref(v_dateformat_3831_);
v___x_3833_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseEraShort(v_symbols_3832_, v_a_3786_);
return v___x_3833_;
}
}
}
case 1:
{
lean_object* v_presentation_3834_; 
lean_dec_ref(v_config_3784_);
v_presentation_3834_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_3834_);
lean_dec_ref_known(v_x_3785_, 1);
switch(lean_obj_tag(v_presentation_3834_))
{
case 0:
{
lean_object* v___x_3835_; lean_object* v___x_3836_; 
v___x_3835_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0));
v___x_3836_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(v___x_3835_, v_a_3786_);
return v___x_3836_;
}
case 1:
{
lean_object* v___x_3837_; lean_object* v___x_3838_; 
v___x_3837_ = lean_unsigned_to_nat(2u);
v___x_3838_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v___x_3837_, v_a_3786_);
if (lean_obj_tag(v___x_3838_) == 0)
{
lean_object* v_pos_3839_; lean_object* v_res_3840_; lean_object* v___x_3842_; uint8_t v_isShared_3843_; uint8_t v_isSharedCheck_3850_; 
v_pos_3839_ = lean_ctor_get(v___x_3838_, 0);
v_res_3840_ = lean_ctor_get(v___x_3838_, 1);
v_isSharedCheck_3850_ = !lean_is_exclusive(v___x_3838_);
if (v_isSharedCheck_3850_ == 0)
{
v___x_3842_ = v___x_3838_;
v_isShared_3843_ = v_isSharedCheck_3850_;
goto v_resetjp_3841_;
}
else
{
lean_inc(v_res_3840_);
lean_inc(v_pos_3839_);
lean_dec(v___x_3838_);
v___x_3842_ = lean_box(0);
v_isShared_3843_ = v_isSharedCheck_3850_;
goto v_resetjp_3841_;
}
v_resetjp_3841_:
{
lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3848_; 
v___x_3844_ = lean_nat_to_int(v_res_3840_);
v___x_3845_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1);
v___x_3846_ = lean_int_add(v___x_3845_, v___x_3844_);
lean_dec(v___x_3844_);
if (v_isShared_3843_ == 0)
{
lean_ctor_set(v___x_3842_, 1, v___x_3846_);
v___x_3848_ = v___x_3842_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v_pos_3839_);
lean_ctor_set(v_reuseFailAlloc_3849_, 1, v___x_3846_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
return v___x_3848_;
}
}
}
else
{
lean_object* v_pos_3851_; lean_object* v_err_3852_; lean_object* v___x_3854_; uint8_t v_isShared_3855_; uint8_t v_isSharedCheck_3859_; 
v_pos_3851_ = lean_ctor_get(v___x_3838_, 0);
v_err_3852_ = lean_ctor_get(v___x_3838_, 1);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___x_3838_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3854_ = v___x_3838_;
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
else
{
lean_inc(v_err_3852_);
lean_inc(v_pos_3851_);
lean_dec(v___x_3838_);
v___x_3854_ = lean_box(0);
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
v_resetjp_3853_:
{
lean_object* v___x_3857_; 
if (v_isShared_3855_ == 0)
{
v___x_3857_ = v___x_3854_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_pos_3851_);
lean_ctor_set(v_reuseFailAlloc_3858_, 1, v_err_3852_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
}
}
case 2:
{
lean_object* v___x_3860_; lean_object* v___x_3861_; 
v___x_3860_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__2));
v___x_3861_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(v___x_3860_, v_a_3786_);
return v___x_3861_;
}
default: 
{
lean_object* v_num_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; 
v_num_3862_ = lean_ctor_get(v_presentation_3834_, 0);
lean_inc(v_num_3862_);
lean_dec_ref_known(v_presentation_3834_, 1);
v___x_3863_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___boxed), 2, 1);
lean_closure_set(v___x_3863_, 0, v_num_3862_);
v___x_3864_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(v___x_3863_, v_a_3786_);
return v___x_3864_;
}
}
}
case 2:
{
lean_object* v_presentation_3865_; 
lean_dec_ref(v_config_3784_);
v_presentation_3865_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_3865_);
lean_dec_ref_known(v_x_3785_, 1);
switch(lean_obj_tag(v_presentation_3865_))
{
case 0:
{
lean_object* v___x_3866_; lean_object* v___x_3867_; 
v___x_3866_ = lean_unsigned_to_nat(1u);
v___x_3867_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum(v___x_3866_, v_a_3786_);
if (lean_obj_tag(v___x_3867_) == 0)
{
lean_object* v_pos_3868_; lean_object* v_res_3869_; lean_object* v___x_3871_; uint8_t v_isShared_3872_; uint8_t v_isSharedCheck_3877_; 
v_pos_3868_ = lean_ctor_get(v___x_3867_, 0);
v_res_3869_ = lean_ctor_get(v___x_3867_, 1);
v_isSharedCheck_3877_ = !lean_is_exclusive(v___x_3867_);
if (v_isSharedCheck_3877_ == 0)
{
v___x_3871_ = v___x_3867_;
v_isShared_3872_ = v_isSharedCheck_3877_;
goto v_resetjp_3870_;
}
else
{
lean_inc(v_res_3869_);
lean_inc(v_pos_3868_);
lean_dec(v___x_3867_);
v___x_3871_ = lean_box(0);
v_isShared_3872_ = v_isSharedCheck_3877_;
goto v_resetjp_3870_;
}
v_resetjp_3870_:
{
lean_object* v___x_3873_; lean_object* v___x_3875_; 
v___x_3873_ = lean_nat_to_int(v_res_3869_);
if (v_isShared_3872_ == 0)
{
lean_ctor_set(v___x_3871_, 1, v___x_3873_);
v___x_3875_ = v___x_3871_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3876_; 
v_reuseFailAlloc_3876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3876_, 0, v_pos_3868_);
lean_ctor_set(v_reuseFailAlloc_3876_, 1, v___x_3873_);
v___x_3875_ = v_reuseFailAlloc_3876_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
return v___x_3875_;
}
}
}
else
{
lean_object* v_pos_3878_; lean_object* v_err_3879_; lean_object* v___x_3881_; uint8_t v_isShared_3882_; uint8_t v_isSharedCheck_3886_; 
v_pos_3878_ = lean_ctor_get(v___x_3867_, 0);
v_err_3879_ = lean_ctor_get(v___x_3867_, 1);
v_isSharedCheck_3886_ = !lean_is_exclusive(v___x_3867_);
if (v_isSharedCheck_3886_ == 0)
{
v___x_3881_ = v___x_3867_;
v_isShared_3882_ = v_isSharedCheck_3886_;
goto v_resetjp_3880_;
}
else
{
lean_inc(v_err_3879_);
lean_inc(v_pos_3878_);
lean_dec(v___x_3867_);
v___x_3881_ = lean_box(0);
v_isShared_3882_ = v_isSharedCheck_3886_;
goto v_resetjp_3880_;
}
v_resetjp_3880_:
{
lean_object* v___x_3884_; 
if (v_isShared_3882_ == 0)
{
v___x_3884_ = v___x_3881_;
goto v_reusejp_3883_;
}
else
{
lean_object* v_reuseFailAlloc_3885_; 
v_reuseFailAlloc_3885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3885_, 0, v_pos_3878_);
lean_ctor_set(v_reuseFailAlloc_3885_, 1, v_err_3879_);
v___x_3884_ = v_reuseFailAlloc_3885_;
goto v_reusejp_3883_;
}
v_reusejp_3883_:
{
return v___x_3884_;
}
}
}
}
case 1:
{
lean_object* v___x_3887_; lean_object* v___x_3888_; 
v___x_3887_ = lean_unsigned_to_nat(2u);
v___x_3888_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v___x_3887_, v_a_3786_);
if (lean_obj_tag(v___x_3888_) == 0)
{
lean_object* v_pos_3889_; lean_object* v_res_3890_; lean_object* v___x_3892_; uint8_t v_isShared_3893_; uint8_t v_isSharedCheck_3900_; 
v_pos_3889_ = lean_ctor_get(v___x_3888_, 0);
v_res_3890_ = lean_ctor_get(v___x_3888_, 1);
v_isSharedCheck_3900_ = !lean_is_exclusive(v___x_3888_);
if (v_isSharedCheck_3900_ == 0)
{
v___x_3892_ = v___x_3888_;
v_isShared_3893_ = v_isSharedCheck_3900_;
goto v_resetjp_3891_;
}
else
{
lean_inc(v_res_3890_);
lean_inc(v_pos_3889_);
lean_dec(v___x_3888_);
v___x_3892_ = lean_box(0);
v_isShared_3893_ = v_isSharedCheck_3900_;
goto v_resetjp_3891_;
}
v_resetjp_3891_:
{
lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3898_; 
v___x_3894_ = lean_nat_to_int(v_res_3890_);
v___x_3895_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1);
v___x_3896_ = lean_int_add(v___x_3895_, v___x_3894_);
lean_dec(v___x_3894_);
if (v_isShared_3893_ == 0)
{
lean_ctor_set(v___x_3892_, 1, v___x_3896_);
v___x_3898_ = v___x_3892_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3899_; 
v_reuseFailAlloc_3899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3899_, 0, v_pos_3889_);
lean_ctor_set(v_reuseFailAlloc_3899_, 1, v___x_3896_);
v___x_3898_ = v_reuseFailAlloc_3899_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
return v___x_3898_;
}
}
}
else
{
lean_object* v_pos_3901_; lean_object* v_err_3902_; lean_object* v___x_3904_; uint8_t v_isShared_3905_; uint8_t v_isSharedCheck_3909_; 
v_pos_3901_ = lean_ctor_get(v___x_3888_, 0);
v_err_3902_ = lean_ctor_get(v___x_3888_, 1);
v_isSharedCheck_3909_ = !lean_is_exclusive(v___x_3888_);
if (v_isSharedCheck_3909_ == 0)
{
v___x_3904_ = v___x_3888_;
v_isShared_3905_ = v_isSharedCheck_3909_;
goto v_resetjp_3903_;
}
else
{
lean_inc(v_err_3902_);
lean_inc(v_pos_3901_);
lean_dec(v___x_3888_);
v___x_3904_ = lean_box(0);
v_isShared_3905_ = v_isSharedCheck_3909_;
goto v_resetjp_3903_;
}
v_resetjp_3903_:
{
lean_object* v___x_3907_; 
if (v_isShared_3905_ == 0)
{
v___x_3907_ = v___x_3904_;
goto v_reusejp_3906_;
}
else
{
lean_object* v_reuseFailAlloc_3908_; 
v_reuseFailAlloc_3908_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3908_, 0, v_pos_3901_);
lean_ctor_set(v_reuseFailAlloc_3908_, 1, v_err_3902_);
v___x_3907_ = v_reuseFailAlloc_3908_;
goto v_reusejp_3906_;
}
v_reusejp_3906_:
{
return v___x_3907_;
}
}
}
}
case 2:
{
lean_object* v___x_3910_; lean_object* v___x_3911_; 
v___x_3910_ = lean_unsigned_to_nat(4u);
v___x_3911_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v___x_3910_, v_a_3786_);
if (lean_obj_tag(v___x_3911_) == 0)
{
lean_object* v_pos_3912_; lean_object* v_res_3913_; lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3921_; 
v_pos_3912_ = lean_ctor_get(v___x_3911_, 0);
v_res_3913_ = lean_ctor_get(v___x_3911_, 1);
v_isSharedCheck_3921_ = !lean_is_exclusive(v___x_3911_);
if (v_isSharedCheck_3921_ == 0)
{
v___x_3915_ = v___x_3911_;
v_isShared_3916_ = v_isSharedCheck_3921_;
goto v_resetjp_3914_;
}
else
{
lean_inc(v_res_3913_);
lean_inc(v_pos_3912_);
lean_dec(v___x_3911_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3921_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
lean_object* v___x_3917_; lean_object* v___x_3919_; 
v___x_3917_ = lean_nat_to_int(v_res_3913_);
if (v_isShared_3916_ == 0)
{
lean_ctor_set(v___x_3915_, 1, v___x_3917_);
v___x_3919_ = v___x_3915_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v_pos_3912_);
lean_ctor_set(v_reuseFailAlloc_3920_, 1, v___x_3917_);
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
lean_object* v_pos_3922_; lean_object* v_err_3923_; lean_object* v___x_3925_; uint8_t v_isShared_3926_; uint8_t v_isSharedCheck_3930_; 
v_pos_3922_ = lean_ctor_get(v___x_3911_, 0);
v_err_3923_ = lean_ctor_get(v___x_3911_, 1);
v_isSharedCheck_3930_ = !lean_is_exclusive(v___x_3911_);
if (v_isSharedCheck_3930_ == 0)
{
v___x_3925_ = v___x_3911_;
v_isShared_3926_ = v_isSharedCheck_3930_;
goto v_resetjp_3924_;
}
else
{
lean_inc(v_err_3923_);
lean_inc(v_pos_3922_);
lean_dec(v___x_3911_);
v___x_3925_ = lean_box(0);
v_isShared_3926_ = v_isSharedCheck_3930_;
goto v_resetjp_3924_;
}
v_resetjp_3924_:
{
lean_object* v___x_3928_; 
if (v_isShared_3926_ == 0)
{
v___x_3928_ = v___x_3925_;
goto v_reusejp_3927_;
}
else
{
lean_object* v_reuseFailAlloc_3929_; 
v_reuseFailAlloc_3929_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3929_, 0, v_pos_3922_);
lean_ctor_set(v_reuseFailAlloc_3929_, 1, v_err_3923_);
v___x_3928_ = v_reuseFailAlloc_3929_;
goto v_reusejp_3927_;
}
v_reusejp_3927_:
{
return v___x_3928_;
}
}
}
}
default: 
{
lean_object* v_num_3931_; lean_object* v___x_3932_; 
v_num_3931_ = lean_ctor_get(v_presentation_3865_, 0);
lean_inc(v_num_3931_);
lean_dec_ref_known(v_presentation_3865_, 1);
v___x_3932_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v_num_3931_, v_a_3786_);
lean_dec(v_num_3931_);
if (lean_obj_tag(v___x_3932_) == 0)
{
lean_object* v_pos_3933_; lean_object* v_res_3934_; lean_object* v___x_3936_; uint8_t v_isShared_3937_; uint8_t v_isSharedCheck_3942_; 
v_pos_3933_ = lean_ctor_get(v___x_3932_, 0);
v_res_3934_ = lean_ctor_get(v___x_3932_, 1);
v_isSharedCheck_3942_ = !lean_is_exclusive(v___x_3932_);
if (v_isSharedCheck_3942_ == 0)
{
v___x_3936_ = v___x_3932_;
v_isShared_3937_ = v_isSharedCheck_3942_;
goto v_resetjp_3935_;
}
else
{
lean_inc(v_res_3934_);
lean_inc(v_pos_3933_);
lean_dec(v___x_3932_);
v___x_3936_ = lean_box(0);
v_isShared_3937_ = v_isSharedCheck_3942_;
goto v_resetjp_3935_;
}
v_resetjp_3935_:
{
lean_object* v___x_3938_; lean_object* v___x_3940_; 
v___x_3938_ = lean_nat_to_int(v_res_3934_);
if (v_isShared_3937_ == 0)
{
lean_ctor_set(v___x_3936_, 1, v___x_3938_);
v___x_3940_ = v___x_3936_;
goto v_reusejp_3939_;
}
else
{
lean_object* v_reuseFailAlloc_3941_; 
v_reuseFailAlloc_3941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3941_, 0, v_pos_3933_);
lean_ctor_set(v_reuseFailAlloc_3941_, 1, v___x_3938_);
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
lean_object* v_pos_3943_; lean_object* v_err_3944_; lean_object* v___x_3946_; uint8_t v_isShared_3947_; uint8_t v_isSharedCheck_3951_; 
v_pos_3943_ = lean_ctor_get(v___x_3932_, 0);
v_err_3944_ = lean_ctor_get(v___x_3932_, 1);
v_isSharedCheck_3951_ = !lean_is_exclusive(v___x_3932_);
if (v_isSharedCheck_3951_ == 0)
{
v___x_3946_ = v___x_3932_;
v_isShared_3947_ = v_isSharedCheck_3951_;
goto v_resetjp_3945_;
}
else
{
lean_inc(v_err_3944_);
lean_inc(v_pos_3943_);
lean_dec(v___x_3932_);
v___x_3946_ = lean_box(0);
v_isShared_3947_ = v_isSharedCheck_3951_;
goto v_resetjp_3945_;
}
v_resetjp_3945_:
{
lean_object* v___x_3949_; 
if (v_isShared_3947_ == 0)
{
v___x_3949_ = v___x_3946_;
goto v_reusejp_3948_;
}
else
{
lean_object* v_reuseFailAlloc_3950_; 
v_reuseFailAlloc_3950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3950_, 0, v_pos_3943_);
lean_ctor_set(v_reuseFailAlloc_3950_, 1, v_err_3944_);
v___x_3949_ = v_reuseFailAlloc_3950_;
goto v_reusejp_3948_;
}
v_reusejp_3948_:
{
return v___x_3949_;
}
}
}
}
}
}
case 3:
{
lean_object* v_presentation_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; 
lean_dec_ref(v_config_3784_);
v_presentation_3952_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_3952_);
lean_dec_ref_known(v_x_3785_, 1);
v___x_3953_ = lean_unsigned_to_nat(1u);
v___x_3954_ = lean_unsigned_to_nat(366u);
v___x_3955_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_3955_, 0, v_presentation_3952_);
v___x_3956_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3953_, v___x_3954_, v___x_3955_, v_a_3786_);
if (lean_obj_tag(v___x_3956_) == 0)
{
lean_object* v_pos_3957_; lean_object* v_res_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3968_; 
v_pos_3957_ = lean_ctor_get(v___x_3956_, 0);
v_res_3958_ = lean_ctor_get(v___x_3956_, 1);
v_isSharedCheck_3968_ = !lean_is_exclusive(v___x_3956_);
if (v_isSharedCheck_3968_ == 0)
{
v___x_3960_ = v___x_3956_;
v_isShared_3961_ = v_isSharedCheck_3968_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_res_3958_);
lean_inc(v_pos_3957_);
lean_dec(v___x_3956_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3968_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
uint8_t v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3966_; 
v___x_3962_ = 1;
v___x_3963_ = lean_box(v___x_3962_);
v___x_3964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3963_);
lean_ctor_set(v___x_3964_, 1, v_res_3958_);
if (v_isShared_3961_ == 0)
{
lean_ctor_set(v___x_3960_, 1, v___x_3964_);
v___x_3966_ = v___x_3960_;
goto v_reusejp_3965_;
}
else
{
lean_object* v_reuseFailAlloc_3967_; 
v_reuseFailAlloc_3967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3967_, 0, v_pos_3957_);
lean_ctor_set(v_reuseFailAlloc_3967_, 1, v___x_3964_);
v___x_3966_ = v_reuseFailAlloc_3967_;
goto v_reusejp_3965_;
}
v_reusejp_3965_:
{
return v___x_3966_;
}
}
}
else
{
lean_object* v_pos_3969_; lean_object* v_err_3970_; lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_3977_; 
v_pos_3969_ = lean_ctor_get(v___x_3956_, 0);
v_err_3970_ = lean_ctor_get(v___x_3956_, 1);
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3956_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3972_ = v___x_3956_;
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
else
{
lean_inc(v_err_3970_);
lean_inc(v_pos_3969_);
lean_dec(v___x_3956_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v___x_3975_; 
if (v_isShared_3973_ == 0)
{
v___x_3975_ = v___x_3972_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v_pos_3969_);
lean_ctor_set(v_reuseFailAlloc_3976_, 1, v_err_3970_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
return v___x_3975_;
}
}
}
}
case 4:
{
lean_object* v_presentation_3978_; 
v_presentation_3978_ = lean_ctor_get(v_x_3785_, 0);
lean_inc_ref(v_presentation_3978_);
lean_dec_ref_known(v_x_3785_, 1);
if (lean_obj_tag(v_presentation_3978_) == 0)
{
lean_object* v_val_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; 
lean_dec_ref(v_config_3784_);
v_val_3979_ = lean_ctor_get(v_presentation_3978_, 0);
lean_inc(v_val_3979_);
lean_dec_ref_known(v_presentation_3978_, 1);
v___x_3980_ = lean_unsigned_to_nat(1u);
v___x_3981_ = lean_unsigned_to_nat(12u);
v___x_3982_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_3982_, 0, v_val_3979_);
v___x_3983_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3980_, v___x_3981_, v___x_3982_, v_a_3786_);
return v___x_3983_;
}
else
{
lean_object* v_val_3984_; uint8_t v___x_3985_; 
v_val_3984_ = lean_ctor_get(v_presentation_3978_, 0);
lean_inc(v_val_3984_);
lean_dec_ref_known(v_presentation_3978_, 1);
v___x_3985_ = lean_unbox(v_val_3984_);
lean_dec(v_val_3984_);
switch(v___x_3985_)
{
case 1:
{
lean_object* v_dateformat_3986_; lean_object* v_symbols_3987_; lean_object* v___x_3988_; 
v_dateformat_3986_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_3986_);
lean_dec_ref(v_config_3784_);
v_symbols_3987_ = lean_ctor_get(v_dateformat_3986_, 1);
lean_inc_ref(v_symbols_3987_);
lean_dec_ref(v_dateformat_3986_);
v___x_3988_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseMonthLong(v_symbols_3987_, v_a_3786_);
return v___x_3988_;
}
case 2:
{
lean_object* v_dateformat_3989_; lean_object* v_symbols_3990_; lean_object* v___x_3991_; 
v_dateformat_3989_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_3989_);
lean_dec_ref(v_config_3784_);
v_symbols_3990_ = lean_ctor_get(v_dateformat_3989_, 1);
lean_inc_ref(v_symbols_3990_);
lean_dec_ref(v_dateformat_3989_);
v___x_3991_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseMonthNarrow(v_symbols_3990_, v_a_3786_);
return v___x_3991_;
}
default: 
{
lean_object* v_dateformat_3992_; lean_object* v_symbols_3993_; lean_object* v___x_3994_; 
v_dateformat_3992_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_3992_);
lean_dec_ref(v_config_3784_);
v_symbols_3993_ = lean_ctor_get(v_dateformat_3992_, 1);
lean_inc_ref(v_symbols_3993_);
lean_dec_ref(v_dateformat_3992_);
v___x_3994_ = l_Std_Time_parseMonthShort(v_symbols_3993_, v_a_3786_);
return v___x_3994_;
}
}
}
}
case 5:
{
lean_object* v_presentation_3995_; 
v_presentation_3995_ = lean_ctor_get(v_x_3785_, 0);
lean_inc_ref(v_presentation_3995_);
lean_dec_ref_known(v_x_3785_, 1);
if (lean_obj_tag(v_presentation_3995_) == 0)
{
lean_object* v_val_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; 
lean_dec_ref(v_config_3784_);
v_val_3996_ = lean_ctor_get(v_presentation_3995_, 0);
lean_inc(v_val_3996_);
lean_dec_ref_known(v_presentation_3995_, 1);
v___x_3997_ = lean_unsigned_to_nat(1u);
v___x_3998_ = lean_unsigned_to_nat(12u);
v___x_3999_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_3999_, 0, v_val_3996_);
v___x_4000_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3997_, v___x_3998_, v___x_3999_, v_a_3786_);
return v___x_4000_;
}
else
{
lean_object* v_val_4001_; uint8_t v___x_4002_; 
v_val_4001_ = lean_ctor_get(v_presentation_3995_, 0);
lean_inc(v_val_4001_);
lean_dec_ref_known(v_presentation_3995_, 1);
v___x_4002_ = lean_unbox(v_val_4001_);
lean_dec(v_val_4001_);
switch(v___x_4002_)
{
case 1:
{
lean_object* v_dateformat_4003_; lean_object* v_symbols_4004_; lean_object* v___x_4005_; 
v_dateformat_4003_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4003_);
lean_dec_ref(v_config_3784_);
v_symbols_4004_ = lean_ctor_get(v_dateformat_4003_, 1);
lean_inc_ref(v_symbols_4004_);
lean_dec_ref(v_dateformat_4003_);
v___x_4005_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseMonthLong(v_symbols_4004_, v_a_3786_);
return v___x_4005_;
}
case 2:
{
lean_object* v_dateformat_4006_; lean_object* v_symbols_4007_; lean_object* v___x_4008_; 
v_dateformat_4006_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4006_);
lean_dec_ref(v_config_3784_);
v_symbols_4007_ = lean_ctor_get(v_dateformat_4006_, 1);
lean_inc_ref(v_symbols_4007_);
lean_dec_ref(v_dateformat_4006_);
v___x_4008_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseMonthNarrow(v_symbols_4007_, v_a_3786_);
return v___x_4008_;
}
default: 
{
lean_object* v_dateformat_4009_; lean_object* v_symbols_4010_; lean_object* v___x_4011_; 
v_dateformat_4009_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4009_);
lean_dec_ref(v_config_3784_);
v_symbols_4010_ = lean_ctor_get(v_dateformat_4009_, 1);
lean_inc_ref(v_symbols_4010_);
lean_dec_ref(v_dateformat_4009_);
v___x_4011_ = l_Std_Time_parseMonthShort(v_symbols_4010_, v_a_3786_);
return v___x_4011_;
}
}
}
}
case 6:
{
lean_object* v_presentation_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; 
lean_dec_ref(v_config_3784_);
v_presentation_4012_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_4012_);
lean_dec_ref_known(v_x_3785_, 1);
v___x_4013_ = lean_unsigned_to_nat(1u);
v___x_4014_ = lean_unsigned_to_nat(31u);
v___x_4015_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4015_, 0, v_presentation_4012_);
v___x_4016_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4013_, v___x_4014_, v___x_4015_, v_a_3786_);
return v___x_4016_;
}
case 7:
{
lean_object* v_presentation_4017_; 
v_presentation_4017_ = lean_ctor_get(v_x_3785_, 0);
lean_inc_ref(v_presentation_4017_);
lean_dec_ref_known(v_x_3785_, 1);
if (lean_obj_tag(v_presentation_4017_) == 0)
{
lean_object* v_val_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; 
lean_dec_ref(v_config_3784_);
v_val_4018_ = lean_ctor_get(v_presentation_4017_, 0);
lean_inc(v_val_4018_);
lean_dec_ref_known(v_presentation_4017_, 1);
v___x_4019_ = lean_unsigned_to_nat(1u);
v___x_4020_ = lean_unsigned_to_nat(4u);
v___x_4021_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4021_, 0, v_val_4018_);
v___x_4022_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4019_, v___x_4020_, v___x_4021_, v_a_3786_);
return v___x_4022_;
}
else
{
lean_object* v_val_4023_; uint8_t v___x_4024_; 
v_val_4023_ = lean_ctor_get(v_presentation_4017_, 0);
lean_inc(v_val_4023_);
lean_dec_ref_known(v_presentation_4017_, 1);
v___x_4024_ = lean_unbox(v_val_4023_);
lean_dec(v_val_4023_);
switch(v___x_4024_)
{
case 0:
{
lean_object* v_dateformat_4025_; lean_object* v_symbols_4026_; lean_object* v___x_4027_; 
v_dateformat_4025_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4025_);
lean_dec_ref(v_config_3784_);
v_symbols_4026_ = lean_ctor_get(v_dateformat_4025_, 1);
lean_inc_ref(v_symbols_4026_);
lean_dec_ref(v_dateformat_4025_);
v___x_4027_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterShort(v_symbols_4026_, v_a_3786_);
return v___x_4027_;
}
case 1:
{
lean_object* v_dateformat_4028_; lean_object* v_symbols_4029_; lean_object* v___x_4030_; 
v_dateformat_4028_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4028_);
lean_dec_ref(v_config_3784_);
v_symbols_4029_ = lean_ctor_get(v_dateformat_4028_, 1);
lean_inc_ref(v_symbols_4029_);
lean_dec_ref(v_dateformat_4028_);
v___x_4030_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterLong(v_symbols_4029_, v_a_3786_);
return v___x_4030_;
}
default: 
{
v___y_3788_ = v_a_3786_;
goto v___jp_3787_;
}
}
}
}
case 8:
{
lean_object* v_presentation_4031_; 
v_presentation_4031_ = lean_ctor_get(v_x_3785_, 0);
lean_inc_ref(v_presentation_4031_);
lean_dec_ref_known(v_x_3785_, 1);
if (lean_obj_tag(v_presentation_4031_) == 0)
{
lean_object* v_val_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; 
lean_dec_ref(v_config_3784_);
v_val_4032_ = lean_ctor_get(v_presentation_4031_, 0);
lean_inc(v_val_4032_);
lean_dec_ref_known(v_presentation_4031_, 1);
v___x_4033_ = lean_unsigned_to_nat(1u);
v___x_4034_ = lean_unsigned_to_nat(4u);
v___x_4035_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4035_, 0, v_val_4032_);
v___x_4036_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4033_, v___x_4034_, v___x_4035_, v_a_3786_);
return v___x_4036_;
}
else
{
lean_object* v_val_4037_; uint8_t v___x_4038_; 
v_val_4037_ = lean_ctor_get(v_presentation_4031_, 0);
lean_inc(v_val_4037_);
lean_dec_ref_known(v_presentation_4031_, 1);
v___x_4038_ = lean_unbox(v_val_4037_);
lean_dec(v_val_4037_);
switch(v___x_4038_)
{
case 0:
{
lean_object* v_dateformat_4039_; lean_object* v_symbols_4040_; lean_object* v___x_4041_; 
v_dateformat_4039_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4039_);
lean_dec_ref(v_config_3784_);
v_symbols_4040_ = lean_ctor_get(v_dateformat_4039_, 1);
lean_inc_ref(v_symbols_4040_);
lean_dec_ref(v_dateformat_4039_);
v___x_4041_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterShort(v_symbols_4040_, v_a_3786_);
return v___x_4041_;
}
case 1:
{
lean_object* v_dateformat_4042_; lean_object* v_symbols_4043_; lean_object* v___x_4044_; 
v_dateformat_4042_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4042_);
lean_dec_ref(v_config_3784_);
v_symbols_4043_ = lean_ctor_get(v_dateformat_4042_, 1);
lean_inc_ref(v_symbols_4043_);
lean_dec_ref(v_dateformat_4042_);
v___x_4044_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterLong(v_symbols_4043_, v_a_3786_);
return v___x_4044_;
}
default: 
{
v___y_3793_ = v_a_3786_;
goto v___jp_3792_;
}
}
}
}
case 9:
{
lean_object* v_presentation_4045_; 
lean_dec_ref(v_config_3784_);
v_presentation_4045_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_4045_);
lean_dec_ref_known(v_x_3785_, 1);
switch(lean_obj_tag(v_presentation_4045_))
{
case 0:
{
lean_object* v___x_4046_; lean_object* v___x_4047_; 
v___x_4046_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0));
v___x_4047_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(v___x_4046_, v_a_3786_);
return v___x_4047_;
}
case 1:
{
lean_object* v___x_4048_; lean_object* v___x_4049_; 
v___x_4048_ = lean_unsigned_to_nat(2u);
v___x_4049_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v___x_4048_, v_a_3786_);
if (lean_obj_tag(v___x_4049_) == 0)
{
lean_object* v_pos_4050_; lean_object* v_res_4051_; lean_object* v___x_4053_; uint8_t v_isShared_4054_; uint8_t v_isSharedCheck_4061_; 
v_pos_4050_ = lean_ctor_get(v___x_4049_, 0);
v_res_4051_ = lean_ctor_get(v___x_4049_, 1);
v_isSharedCheck_4061_ = !lean_is_exclusive(v___x_4049_);
if (v_isSharedCheck_4061_ == 0)
{
v___x_4053_ = v___x_4049_;
v_isShared_4054_ = v_isSharedCheck_4061_;
goto v_resetjp_4052_;
}
else
{
lean_inc(v_res_4051_);
lean_inc(v_pos_4050_);
lean_dec(v___x_4049_);
v___x_4053_ = lean_box(0);
v_isShared_4054_ = v_isSharedCheck_4061_;
goto v_resetjp_4052_;
}
v_resetjp_4052_:
{
lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4059_; 
v___x_4055_ = lean_nat_to_int(v_res_4051_);
v___x_4056_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1);
v___x_4057_ = lean_int_add(v___x_4056_, v___x_4055_);
lean_dec(v___x_4055_);
if (v_isShared_4054_ == 0)
{
lean_ctor_set(v___x_4053_, 1, v___x_4057_);
v___x_4059_ = v___x_4053_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4060_; 
v_reuseFailAlloc_4060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4060_, 0, v_pos_4050_);
lean_ctor_set(v_reuseFailAlloc_4060_, 1, v___x_4057_);
v___x_4059_ = v_reuseFailAlloc_4060_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
return v___x_4059_;
}
}
}
else
{
lean_object* v_pos_4062_; lean_object* v_err_4063_; lean_object* v___x_4065_; uint8_t v_isShared_4066_; uint8_t v_isSharedCheck_4070_; 
v_pos_4062_ = lean_ctor_get(v___x_4049_, 0);
v_err_4063_ = lean_ctor_get(v___x_4049_, 1);
v_isSharedCheck_4070_ = !lean_is_exclusive(v___x_4049_);
if (v_isSharedCheck_4070_ == 0)
{
v___x_4065_ = v___x_4049_;
v_isShared_4066_ = v_isSharedCheck_4070_;
goto v_resetjp_4064_;
}
else
{
lean_inc(v_err_4063_);
lean_inc(v_pos_4062_);
lean_dec(v___x_4049_);
v___x_4065_ = lean_box(0);
v_isShared_4066_ = v_isSharedCheck_4070_;
goto v_resetjp_4064_;
}
v_resetjp_4064_:
{
lean_object* v___x_4068_; 
if (v_isShared_4066_ == 0)
{
v___x_4068_ = v___x_4065_;
goto v_reusejp_4067_;
}
else
{
lean_object* v_reuseFailAlloc_4069_; 
v_reuseFailAlloc_4069_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4069_, 0, v_pos_4062_);
lean_ctor_set(v_reuseFailAlloc_4069_, 1, v_err_4063_);
v___x_4068_ = v_reuseFailAlloc_4069_;
goto v_reusejp_4067_;
}
v_reusejp_4067_:
{
return v___x_4068_;
}
}
}
}
case 2:
{
lean_object* v___x_4071_; lean_object* v___x_4072_; 
v___x_4071_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__2));
v___x_4072_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(v___x_4071_, v_a_3786_);
return v___x_4072_;
}
default: 
{
lean_object* v_num_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; 
v_num_4073_ = lean_ctor_get(v_presentation_4045_, 0);
lean_inc(v_num_4073_);
lean_dec_ref_known(v_presentation_4045_, 1);
v___x_4074_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___boxed), 2, 1);
lean_closure_set(v___x_4074_, 0, v_num_4073_);
v___x_4075_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(v___x_4074_, v_a_3786_);
return v___x_4075_;
}
}
}
case 10:
{
lean_object* v_presentation_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; 
lean_dec_ref(v_config_3784_);
v_presentation_4076_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_4076_);
lean_dec_ref_known(v_x_3785_, 1);
v___x_4077_ = lean_unsigned_to_nat(1u);
v___x_4078_ = lean_unsigned_to_nat(53u);
v___x_4079_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4079_, 0, v_presentation_4076_);
v___x_4080_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4077_, v___x_4078_, v___x_4079_, v_a_3786_);
return v___x_4080_;
}
case 11:
{
lean_object* v_presentation_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; 
lean_dec_ref(v_config_3784_);
v_presentation_4081_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_4081_);
lean_dec_ref_known(v_x_3785_, 1);
v___x_4082_ = lean_unsigned_to_nat(1u);
v___x_4083_ = lean_unsigned_to_nat(6u);
v___x_4084_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4084_, 0, v_presentation_4081_);
v___x_4085_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4082_, v___x_4083_, v___x_4084_, v_a_3786_);
return v___x_4085_;
}
case 12:
{
uint8_t v_presentation_4086_; 
v_presentation_4086_ = lean_ctor_get_uint8(v_x_3785_, 0);
lean_dec_ref_known(v_x_3785_, 0);
switch(v_presentation_4086_)
{
case 1:
{
lean_object* v_dateformat_4087_; lean_object* v_symbols_4088_; lean_object* v___x_4089_; 
v_dateformat_4087_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4087_);
lean_dec_ref(v_config_3784_);
v_symbols_4088_ = lean_ctor_get(v_dateformat_4087_, 1);
lean_inc_ref(v_symbols_4088_);
lean_dec_ref(v_dateformat_4087_);
v___x_4089_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayLong(v_symbols_4088_, v_a_3786_);
return v___x_4089_;
}
case 2:
{
lean_object* v_dateformat_4090_; lean_object* v_symbols_4091_; lean_object* v___x_4092_; 
v_dateformat_4090_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4090_);
lean_dec_ref(v_config_3784_);
v_symbols_4091_ = lean_ctor_get(v_dateformat_4090_, 1);
lean_inc_ref(v_symbols_4091_);
lean_dec_ref(v_dateformat_4090_);
v___x_4092_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayNarrow(v_symbols_4091_, v_a_3786_);
return v___x_4092_;
}
default: 
{
lean_object* v_dateformat_4093_; lean_object* v_symbols_4094_; lean_object* v___x_4095_; 
v_dateformat_4093_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4093_);
lean_dec_ref(v_config_3784_);
v_symbols_4094_ = lean_ctor_get(v_dateformat_4093_, 1);
lean_inc_ref(v_symbols_4094_);
lean_dec_ref(v_dateformat_4093_);
v___x_4095_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayShort(v_symbols_4094_, v_a_3786_);
return v___x_4095_;
}
}
}
case 13:
{
lean_object* v_presentation_4096_; 
v_presentation_4096_ = lean_ctor_get(v_x_3785_, 0);
lean_inc_ref(v_presentation_4096_);
lean_dec_ref_known(v_x_3785_, 1);
if (lean_obj_tag(v_presentation_4096_) == 0)
{
lean_object* v_val_4097_; lean_object* v___x_4098_; 
v_val_4097_ = lean_ctor_get(v_presentation_4096_, 0);
lean_inc(v_val_4097_);
lean_dec_ref_known(v_presentation_4096_, 1);
v___x_4098_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum(v_val_4097_, v_a_3786_);
lean_dec(v_val_4097_);
if (lean_obj_tag(v___x_4098_) == 0)
{
lean_object* v_pos_4099_; lean_object* v_res_4100_; lean_object* v___x_4102_; uint8_t v_isShared_4103_; uint8_t v_isSharedCheck_4133_; 
v_pos_4099_ = lean_ctor_get(v___x_4098_, 0);
v_res_4100_ = lean_ctor_get(v___x_4098_, 1);
v_isSharedCheck_4133_ = !lean_is_exclusive(v___x_4098_);
if (v_isSharedCheck_4133_ == 0)
{
v___x_4102_ = v___x_4098_;
v_isShared_4103_ = v_isSharedCheck_4133_;
goto v_resetjp_4101_;
}
else
{
lean_inc(v_res_4100_);
lean_inc(v_pos_4099_);
lean_dec(v___x_4098_);
v___x_4102_ = lean_box(0);
v_isShared_4103_ = v_isSharedCheck_4133_;
goto v_resetjp_4101_;
}
v_resetjp_4101_:
{
lean_object* v___x_4109_; uint8_t v___x_4110_; 
v___x_4109_ = lean_unsigned_to_nat(1u);
v___x_4110_ = lean_nat_dec_le(v___x_4109_, v_res_4100_);
if (v___x_4110_ == 0)
{
lean_dec(v_res_4100_);
lean_dec_ref(v_config_3784_);
goto v___jp_4104_;
}
else
{
lean_object* v___x_4111_; uint8_t v___x_4112_; 
v___x_4111_ = lean_unsigned_to_nat(7u);
v___x_4112_ = lean_nat_dec_le(v_res_4100_, v___x_4111_);
if (v___x_4112_ == 0)
{
lean_dec(v_res_4100_);
lean_dec_ref(v_config_3784_);
goto v___jp_4104_;
}
else
{
lean_object* v_dateformat_4113_; uint8_t v_firstDayOfWeek_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v_range_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; uint8_t v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; 
lean_del_object(v___x_4102_);
v_dateformat_4113_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4113_);
lean_dec_ref(v_config_3784_);
v_firstDayOfWeek_4114_ = lean_ctor_get_uint8(v_dateformat_4113_, sizeof(void*)*2);
lean_dec_ref(v_dateformat_4113_);
v___x_4115_ = l_Std_Time_Weekday_toOrdinal(v_firstDayOfWeek_4114_);
v___x_4116_ = lean_nat_to_int(v_res_4100_);
v___x_4117_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_4118_ = lean_int_sub(v___x_4116_, v___x_4117_);
lean_dec(v___x_4116_);
v___x_4119_ = lean_int_add(v___x_4118_, v___x_4115_);
lean_dec(v___x_4115_);
lean_dec(v___x_4118_);
v___x_4120_ = lean_int_sub(v___x_4119_, v___x_4117_);
lean_dec(v___x_4119_);
v___x_4121_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1);
v___x_4122_ = lean_int_emod(v___x_4120_, v___x_4121_);
lean_dec(v___x_4120_);
v___x_4123_ = lean_int_add(v___x_4122_, v___x_4117_);
lean_dec(v___x_4122_);
v_range_4124_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__6, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__6_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__6);
v___x_4125_ = lean_int_sub(v___x_4123_, v___x_4117_);
lean_dec(v___x_4123_);
v___x_4126_ = lean_int_emod(v___x_4125_, v_range_4124_);
lean_dec(v___x_4125_);
v___x_4127_ = lean_int_add(v___x_4126_, v_range_4124_);
lean_dec(v___x_4126_);
v___x_4128_ = lean_int_emod(v___x_4127_, v_range_4124_);
lean_dec(v___x_4127_);
v___x_4129_ = lean_int_add(v___x_4128_, v___x_4117_);
lean_dec(v___x_4128_);
v___x_4130_ = l_Std_Time_Weekday_ofOrdinal(v___x_4129_);
lean_dec(v___x_4129_);
v___x_4131_ = lean_box(v___x_4130_);
v___x_4132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4132_, 0, v_pos_4099_);
lean_ctor_set(v___x_4132_, 1, v___x_4131_);
return v___x_4132_;
}
}
v___jp_4104_:
{
lean_object* v___x_4105_; lean_object* v___x_4107_; 
v___x_4105_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__4));
if (v_isShared_4103_ == 0)
{
lean_ctor_set_tag(v___x_4102_, 1);
lean_ctor_set(v___x_4102_, 1, v___x_4105_);
v___x_4107_ = v___x_4102_;
goto v_reusejp_4106_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v_pos_4099_);
lean_ctor_set(v_reuseFailAlloc_4108_, 1, v___x_4105_);
v___x_4107_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4106_;
}
v_reusejp_4106_:
{
return v___x_4107_;
}
}
}
}
else
{
lean_object* v_pos_4134_; lean_object* v_err_4135_; lean_object* v___x_4137_; uint8_t v_isShared_4138_; uint8_t v_isSharedCheck_4142_; 
lean_dec_ref(v_config_3784_);
v_pos_4134_ = lean_ctor_get(v___x_4098_, 0);
v_err_4135_ = lean_ctor_get(v___x_4098_, 1);
v_isSharedCheck_4142_ = !lean_is_exclusive(v___x_4098_);
if (v_isSharedCheck_4142_ == 0)
{
v___x_4137_ = v___x_4098_;
v_isShared_4138_ = v_isSharedCheck_4142_;
goto v_resetjp_4136_;
}
else
{
lean_inc(v_err_4135_);
lean_inc(v_pos_4134_);
lean_dec(v___x_4098_);
v___x_4137_ = lean_box(0);
v_isShared_4138_ = v_isSharedCheck_4142_;
goto v_resetjp_4136_;
}
v_resetjp_4136_:
{
lean_object* v___x_4140_; 
if (v_isShared_4138_ == 0)
{
v___x_4140_ = v___x_4137_;
goto v_reusejp_4139_;
}
else
{
lean_object* v_reuseFailAlloc_4141_; 
v_reuseFailAlloc_4141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4141_, 0, v_pos_4134_);
lean_ctor_set(v_reuseFailAlloc_4141_, 1, v_err_4135_);
v___x_4140_ = v_reuseFailAlloc_4141_;
goto v_reusejp_4139_;
}
v_reusejp_4139_:
{
return v___x_4140_;
}
}
}
}
else
{
lean_object* v_val_4143_; uint8_t v___x_4144_; 
v_val_4143_ = lean_ctor_get(v_presentation_4096_, 0);
lean_inc(v_val_4143_);
lean_dec_ref_known(v_presentation_4096_, 1);
v___x_4144_ = lean_unbox(v_val_4143_);
lean_dec(v_val_4143_);
switch(v___x_4144_)
{
case 0:
{
lean_object* v_dateformat_4145_; lean_object* v_symbols_4146_; lean_object* v___x_4147_; 
v_dateformat_4145_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4145_);
lean_dec_ref(v_config_3784_);
v_symbols_4146_ = lean_ctor_get(v_dateformat_4145_, 1);
lean_inc_ref(v_symbols_4146_);
lean_dec_ref(v_dateformat_4145_);
v___x_4147_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayShort(v_symbols_4146_, v_a_3786_);
return v___x_4147_;
}
case 1:
{
lean_object* v_dateformat_4148_; lean_object* v_symbols_4149_; lean_object* v___x_4150_; 
v_dateformat_4148_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4148_);
lean_dec_ref(v_config_3784_);
v_symbols_4149_ = lean_ctor_get(v_dateformat_4148_, 1);
lean_inc_ref(v_symbols_4149_);
lean_dec_ref(v_dateformat_4148_);
v___x_4150_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayLong(v_symbols_4149_, v_a_3786_);
return v___x_4150_;
}
case 2:
{
lean_object* v_dateformat_4151_; lean_object* v_symbols_4152_; lean_object* v___x_4153_; 
v_dateformat_4151_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4151_);
lean_dec_ref(v_config_3784_);
v_symbols_4152_ = lean_ctor_get(v_dateformat_4151_, 1);
lean_inc_ref(v_symbols_4152_);
lean_dec_ref(v_dateformat_4151_);
v___x_4153_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayNarrow(v_symbols_4152_, v_a_3786_);
return v___x_4153_;
}
default: 
{
lean_object* v_dateformat_4154_; lean_object* v_symbols_4155_; lean_object* v___x_4156_; 
v_dateformat_4154_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4154_);
lean_dec_ref(v_config_3784_);
v_symbols_4155_ = lean_ctor_get(v_dateformat_4154_, 1);
lean_inc_ref(v_symbols_4155_);
lean_dec_ref(v_dateformat_4154_);
v___x_4156_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayTwoLetter(v_symbols_4155_, v_a_3786_);
return v___x_4156_;
}
}
}
}
case 14:
{
lean_object* v_presentation_4157_; 
v_presentation_4157_ = lean_ctor_get(v_x_3785_, 0);
lean_inc_ref(v_presentation_4157_);
lean_dec_ref_known(v_x_3785_, 1);
if (lean_obj_tag(v_presentation_4157_) == 0)
{
lean_object* v_val_4158_; lean_object* v___x_4159_; 
v_val_4158_ = lean_ctor_get(v_presentation_4157_, 0);
lean_inc(v_val_4158_);
lean_dec_ref_known(v_presentation_4157_, 1);
v___x_4159_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum(v_val_4158_, v_a_3786_);
lean_dec(v_val_4158_);
if (lean_obj_tag(v___x_4159_) == 0)
{
lean_object* v_pos_4160_; lean_object* v_res_4161_; lean_object* v___x_4163_; uint8_t v_isShared_4164_; uint8_t v_isSharedCheck_4194_; 
v_pos_4160_ = lean_ctor_get(v___x_4159_, 0);
v_res_4161_ = lean_ctor_get(v___x_4159_, 1);
v_isSharedCheck_4194_ = !lean_is_exclusive(v___x_4159_);
if (v_isSharedCheck_4194_ == 0)
{
v___x_4163_ = v___x_4159_;
v_isShared_4164_ = v_isSharedCheck_4194_;
goto v_resetjp_4162_;
}
else
{
lean_inc(v_res_4161_);
lean_inc(v_pos_4160_);
lean_dec(v___x_4159_);
v___x_4163_ = lean_box(0);
v_isShared_4164_ = v_isSharedCheck_4194_;
goto v_resetjp_4162_;
}
v_resetjp_4162_:
{
lean_object* v___x_4170_; uint8_t v___x_4171_; 
v___x_4170_ = lean_unsigned_to_nat(1u);
v___x_4171_ = lean_nat_dec_le(v___x_4170_, v_res_4161_);
if (v___x_4171_ == 0)
{
lean_dec(v_res_4161_);
lean_dec_ref(v_config_3784_);
goto v___jp_4165_;
}
else
{
lean_object* v___x_4172_; uint8_t v___x_4173_; 
v___x_4172_ = lean_unsigned_to_nat(7u);
v___x_4173_ = lean_nat_dec_le(v_res_4161_, v___x_4172_);
if (v___x_4173_ == 0)
{
lean_dec(v_res_4161_);
lean_dec_ref(v_config_3784_);
goto v___jp_4165_;
}
else
{
lean_object* v_dateformat_4174_; uint8_t v_firstDayOfWeek_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v_range_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; uint8_t v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; 
lean_del_object(v___x_4163_);
v_dateformat_4174_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4174_);
lean_dec_ref(v_config_3784_);
v_firstDayOfWeek_4175_ = lean_ctor_get_uint8(v_dateformat_4174_, sizeof(void*)*2);
lean_dec_ref(v_dateformat_4174_);
v___x_4176_ = l_Std_Time_Weekday_toOrdinal(v_firstDayOfWeek_4175_);
v___x_4177_ = lean_nat_to_int(v_res_4161_);
v___x_4178_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_4179_ = lean_int_sub(v___x_4177_, v___x_4178_);
lean_dec(v___x_4177_);
v___x_4180_ = lean_int_add(v___x_4179_, v___x_4176_);
lean_dec(v___x_4176_);
lean_dec(v___x_4179_);
v___x_4181_ = lean_int_sub(v___x_4180_, v___x_4178_);
lean_dec(v___x_4180_);
v___x_4182_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1);
v___x_4183_ = lean_int_emod(v___x_4181_, v___x_4182_);
lean_dec(v___x_4181_);
v___x_4184_ = lean_int_add(v___x_4183_, v___x_4178_);
lean_dec(v___x_4183_);
v_range_4185_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__6, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__6_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__6);
v___x_4186_ = lean_int_sub(v___x_4184_, v___x_4178_);
lean_dec(v___x_4184_);
v___x_4187_ = lean_int_emod(v___x_4186_, v_range_4185_);
lean_dec(v___x_4186_);
v___x_4188_ = lean_int_add(v___x_4187_, v_range_4185_);
lean_dec(v___x_4187_);
v___x_4189_ = lean_int_emod(v___x_4188_, v_range_4185_);
lean_dec(v___x_4188_);
v___x_4190_ = lean_int_add(v___x_4189_, v___x_4178_);
lean_dec(v___x_4189_);
v___x_4191_ = l_Std_Time_Weekday_ofOrdinal(v___x_4190_);
lean_dec(v___x_4190_);
v___x_4192_ = lean_box(v___x_4191_);
v___x_4193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4193_, 0, v_pos_4160_);
lean_ctor_set(v___x_4193_, 1, v___x_4192_);
return v___x_4193_;
}
}
v___jp_4165_:
{
lean_object* v___x_4166_; lean_object* v___x_4168_; 
v___x_4166_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__4));
if (v_isShared_4164_ == 0)
{
lean_ctor_set_tag(v___x_4163_, 1);
lean_ctor_set(v___x_4163_, 1, v___x_4166_);
v___x_4168_ = v___x_4163_;
goto v_reusejp_4167_;
}
else
{
lean_object* v_reuseFailAlloc_4169_; 
v_reuseFailAlloc_4169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4169_, 0, v_pos_4160_);
lean_ctor_set(v_reuseFailAlloc_4169_, 1, v___x_4166_);
v___x_4168_ = v_reuseFailAlloc_4169_;
goto v_reusejp_4167_;
}
v_reusejp_4167_:
{
return v___x_4168_;
}
}
}
}
else
{
lean_object* v_pos_4195_; lean_object* v_err_4196_; lean_object* v___x_4198_; uint8_t v_isShared_4199_; uint8_t v_isSharedCheck_4203_; 
lean_dec_ref(v_config_3784_);
v_pos_4195_ = lean_ctor_get(v___x_4159_, 0);
v_err_4196_ = lean_ctor_get(v___x_4159_, 1);
v_isSharedCheck_4203_ = !lean_is_exclusive(v___x_4159_);
if (v_isSharedCheck_4203_ == 0)
{
v___x_4198_ = v___x_4159_;
v_isShared_4199_ = v_isSharedCheck_4203_;
goto v_resetjp_4197_;
}
else
{
lean_inc(v_err_4196_);
lean_inc(v_pos_4195_);
lean_dec(v___x_4159_);
v___x_4198_ = lean_box(0);
v_isShared_4199_ = v_isSharedCheck_4203_;
goto v_resetjp_4197_;
}
v_resetjp_4197_:
{
lean_object* v___x_4201_; 
if (v_isShared_4199_ == 0)
{
v___x_4201_ = v___x_4198_;
goto v_reusejp_4200_;
}
else
{
lean_object* v_reuseFailAlloc_4202_; 
v_reuseFailAlloc_4202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4202_, 0, v_pos_4195_);
lean_ctor_set(v_reuseFailAlloc_4202_, 1, v_err_4196_);
v___x_4201_ = v_reuseFailAlloc_4202_;
goto v_reusejp_4200_;
}
v_reusejp_4200_:
{
return v___x_4201_;
}
}
}
}
else
{
lean_object* v_val_4204_; uint8_t v___x_4205_; 
v_val_4204_ = lean_ctor_get(v_presentation_4157_, 0);
lean_inc(v_val_4204_);
lean_dec_ref_known(v_presentation_4157_, 1);
v___x_4205_ = lean_unbox(v_val_4204_);
lean_dec(v_val_4204_);
switch(v___x_4205_)
{
case 0:
{
lean_object* v_dateformat_4206_; lean_object* v_symbols_4207_; lean_object* v___x_4208_; 
v_dateformat_4206_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4206_);
lean_dec_ref(v_config_3784_);
v_symbols_4207_ = lean_ctor_get(v_dateformat_4206_, 1);
lean_inc_ref(v_symbols_4207_);
lean_dec_ref(v_dateformat_4206_);
v___x_4208_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayShort(v_symbols_4207_, v_a_3786_);
return v___x_4208_;
}
case 1:
{
lean_object* v_dateformat_4209_; lean_object* v_symbols_4210_; lean_object* v___x_4211_; 
v_dateformat_4209_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4209_);
lean_dec_ref(v_config_3784_);
v_symbols_4210_ = lean_ctor_get(v_dateformat_4209_, 1);
lean_inc_ref(v_symbols_4210_);
lean_dec_ref(v_dateformat_4209_);
v___x_4211_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayLong(v_symbols_4210_, v_a_3786_);
return v___x_4211_;
}
case 2:
{
lean_object* v_dateformat_4212_; lean_object* v_symbols_4213_; lean_object* v___x_4214_; 
v_dateformat_4212_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4212_);
lean_dec_ref(v_config_3784_);
v_symbols_4213_ = lean_ctor_get(v_dateformat_4212_, 1);
lean_inc_ref(v_symbols_4213_);
lean_dec_ref(v_dateformat_4212_);
v___x_4214_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayNarrow(v_symbols_4213_, v_a_3786_);
return v___x_4214_;
}
default: 
{
lean_object* v_dateformat_4215_; lean_object* v_symbols_4216_; lean_object* v___x_4217_; 
v_dateformat_4215_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4215_);
lean_dec_ref(v_config_3784_);
v_symbols_4216_ = lean_ctor_get(v_dateformat_4215_, 1);
lean_inc_ref(v_symbols_4216_);
lean_dec_ref(v_dateformat_4215_);
v___x_4217_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayTwoLetter(v_symbols_4216_, v_a_3786_);
return v___x_4217_;
}
}
}
}
case 15:
{
lean_object* v_presentation_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; 
lean_dec_ref(v_config_3784_);
v_presentation_4218_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_4218_);
lean_dec_ref_known(v_x_3785_, 1);
v___x_4219_ = lean_unsigned_to_nat(1u);
v___x_4220_ = lean_unsigned_to_nat(5u);
v___x_4221_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4221_, 0, v_presentation_4218_);
v___x_4222_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4219_, v___x_4220_, v___x_4221_, v_a_3786_);
return v___x_4222_;
}
case 16:
{
uint8_t v_presentation_4223_; 
v_presentation_4223_ = lean_ctor_get_uint8(v_x_3785_, 0);
lean_dec_ref_known(v_x_3785_, 0);
switch(v_presentation_4223_)
{
case 1:
{
lean_object* v_dateformat_4224_; lean_object* v_symbols_4225_; lean_object* v___x_4226_; 
v_dateformat_4224_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4224_);
lean_dec_ref(v_config_3784_);
v_symbols_4225_ = lean_ctor_get(v_dateformat_4224_, 1);
lean_inc_ref(v_symbols_4225_);
lean_dec_ref(v_dateformat_4224_);
v___x_4226_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseMarkerLong(v_symbols_4225_, v_a_3786_);
return v___x_4226_;
}
case 2:
{
lean_object* v_dateformat_4227_; lean_object* v_symbols_4228_; lean_object* v___x_4229_; 
v_dateformat_4227_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4227_);
lean_dec_ref(v_config_3784_);
v_symbols_4228_ = lean_ctor_get(v_dateformat_4227_, 1);
lean_inc_ref(v_symbols_4228_);
lean_dec_ref(v_dateformat_4227_);
v___x_4229_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseMarkerNarrow(v_symbols_4228_, v_a_3786_);
return v___x_4229_;
}
default: 
{
lean_object* v_dateformat_4230_; lean_object* v_symbols_4231_; lean_object* v___x_4232_; 
v_dateformat_4230_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4230_);
lean_dec_ref(v_config_3784_);
v_symbols_4231_ = lean_ctor_get(v_dateformat_4230_, 1);
lean_inc_ref(v_symbols_4231_);
lean_dec_ref(v_dateformat_4230_);
v___x_4232_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseMarkerShort(v_symbols_4231_, v_a_3786_);
return v___x_4232_;
}
}
}
case 17:
{
uint8_t v_presentation_4233_; 
v_presentation_4233_ = lean_ctor_get_uint8(v_x_3785_, 0);
lean_dec_ref_known(v_x_3785_, 0);
switch(v_presentation_4233_)
{
case 1:
{
lean_object* v_dateformat_4234_; lean_object* v_symbols_4235_; lean_object* v_dayPeriodLong_4236_; lean_object* v___x_4237_; 
v_dateformat_4234_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4234_);
lean_dec_ref(v_config_3784_);
v_symbols_4235_ = lean_ctor_get(v_dateformat_4234_, 1);
lean_inc_ref(v_symbols_4235_);
lean_dec_ref(v_dateformat_4234_);
v_dayPeriodLong_4236_ = lean_ctor_get(v_symbols_4235_, 20);
lean_inc_ref(v_dayPeriodLong_4236_);
lean_dec_ref(v_symbols_4235_);
v___x_4237_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseDayPeriodFrom(v_dayPeriodLong_4236_, v_a_3786_);
return v___x_4237_;
}
case 2:
{
lean_object* v_dateformat_4238_; lean_object* v_symbols_4239_; lean_object* v_dayPeriodNarrow_4240_; lean_object* v___x_4241_; 
v_dateformat_4238_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4238_);
lean_dec_ref(v_config_3784_);
v_symbols_4239_ = lean_ctor_get(v_dateformat_4238_, 1);
lean_inc_ref(v_symbols_4239_);
lean_dec_ref(v_dateformat_4238_);
v_dayPeriodNarrow_4240_ = lean_ctor_get(v_symbols_4239_, 21);
lean_inc_ref(v_dayPeriodNarrow_4240_);
lean_dec_ref(v_symbols_4239_);
v___x_4241_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseDayPeriodFrom(v_dayPeriodNarrow_4240_, v_a_3786_);
return v___x_4241_;
}
default: 
{
lean_object* v_dateformat_4242_; lean_object* v_symbols_4243_; lean_object* v_dayPeriodShort_4244_; lean_object* v___x_4245_; 
v_dateformat_4242_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4242_);
lean_dec_ref(v_config_3784_);
v_symbols_4243_ = lean_ctor_get(v_dateformat_4242_, 1);
lean_inc_ref(v_symbols_4243_);
lean_dec_ref(v_dateformat_4242_);
v_dayPeriodShort_4244_ = lean_ctor_get(v_symbols_4243_, 19);
lean_inc_ref(v_dayPeriodShort_4244_);
lean_dec_ref(v_symbols_4243_);
v___x_4245_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseDayPeriodFrom(v_dayPeriodShort_4244_, v_a_3786_);
return v___x_4245_;
}
}
}
case 18:
{
uint8_t v_presentation_4246_; 
v_presentation_4246_ = lean_ctor_get_uint8(v_x_3785_, 0);
lean_dec_ref_known(v_x_3785_, 0);
switch(v_presentation_4246_)
{
case 1:
{
lean_object* v_dateformat_4247_; lean_object* v_symbols_4248_; lean_object* v_extendedDayPeriodLong_4249_; lean_object* v___x_4250_; 
v_dateformat_4247_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4247_);
lean_dec_ref(v_config_3784_);
v_symbols_4248_ = lean_ctor_get(v_dateformat_4247_, 1);
lean_inc_ref(v_symbols_4248_);
lean_dec_ref(v_dateformat_4247_);
v_extendedDayPeriodLong_4249_ = lean_ctor_get(v_symbols_4248_, 23);
lean_inc_ref(v_extendedDayPeriodLong_4249_);
lean_dec_ref(v_symbols_4248_);
v___x_4250_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseExtendedDayPeriodFrom(v_extendedDayPeriodLong_4249_, v_a_3786_);
lean_dec_ref(v_extendedDayPeriodLong_4249_);
return v___x_4250_;
}
case 2:
{
lean_object* v_dateformat_4251_; lean_object* v_symbols_4252_; lean_object* v_extendedDayPeriodNarrow_4253_; lean_object* v___x_4254_; 
v_dateformat_4251_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4251_);
lean_dec_ref(v_config_3784_);
v_symbols_4252_ = lean_ctor_get(v_dateformat_4251_, 1);
lean_inc_ref(v_symbols_4252_);
lean_dec_ref(v_dateformat_4251_);
v_extendedDayPeriodNarrow_4253_ = lean_ctor_get(v_symbols_4252_, 24);
lean_inc_ref(v_extendedDayPeriodNarrow_4253_);
lean_dec_ref(v_symbols_4252_);
v___x_4254_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseExtendedDayPeriodFrom(v_extendedDayPeriodNarrow_4253_, v_a_3786_);
lean_dec_ref(v_extendedDayPeriodNarrow_4253_);
return v___x_4254_;
}
default: 
{
lean_object* v_dateformat_4255_; lean_object* v_symbols_4256_; lean_object* v_extendedDayPeriodShort_4257_; lean_object* v___x_4258_; 
v_dateformat_4255_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_4255_);
lean_dec_ref(v_config_3784_);
v_symbols_4256_ = lean_ctor_get(v_dateformat_4255_, 1);
lean_inc_ref(v_symbols_4256_);
lean_dec_ref(v_dateformat_4255_);
v_extendedDayPeriodShort_4257_ = lean_ctor_get(v_symbols_4256_, 22);
lean_inc_ref(v_extendedDayPeriodShort_4257_);
lean_dec_ref(v_symbols_4256_);
v___x_4258_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseExtendedDayPeriodFrom(v_extendedDayPeriodShort_4257_, v_a_3786_);
lean_dec_ref(v_extendedDayPeriodShort_4257_);
return v___x_4258_;
}
}
}
case 19:
{
lean_object* v_presentation_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; 
lean_dec_ref(v_config_3784_);
v_presentation_4259_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_4259_);
lean_dec_ref_known(v_x_3785_, 1);
v___x_4260_ = lean_unsigned_to_nat(1u);
v___x_4261_ = lean_unsigned_to_nat(12u);
v___x_4262_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4262_, 0, v_presentation_4259_);
v___x_4263_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4260_, v___x_4261_, v___x_4262_, v_a_3786_);
return v___x_4263_;
}
case 20:
{
lean_object* v_presentation_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; 
lean_dec_ref(v_config_3784_);
v_presentation_4264_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_4264_);
lean_dec_ref_known(v_x_3785_, 1);
v___x_4265_ = lean_unsigned_to_nat(0u);
v___x_4266_ = lean_unsigned_to_nat(11u);
v___x_4267_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4267_, 0, v_presentation_4264_);
v___x_4268_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4265_, v___x_4266_, v___x_4267_, v_a_3786_);
return v___x_4268_;
}
case 21:
{
lean_object* v_presentation_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; 
lean_dec_ref(v_config_3784_);
v_presentation_4269_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_4269_);
lean_dec_ref_known(v_x_3785_, 1);
v___x_4270_ = lean_unsigned_to_nat(1u);
v___x_4271_ = lean_unsigned_to_nat(24u);
v___x_4272_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4272_, 0, v_presentation_4269_);
v___x_4273_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4270_, v___x_4271_, v___x_4272_, v_a_3786_);
return v___x_4273_;
}
case 22:
{
lean_object* v_presentation_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; 
lean_dec_ref(v_config_3784_);
v_presentation_4274_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_4274_);
lean_dec_ref_known(v_x_3785_, 1);
v___x_4275_ = lean_unsigned_to_nat(0u);
v___x_4276_ = lean_unsigned_to_nat(23u);
v___x_4277_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4277_, 0, v_presentation_4274_);
v___x_4278_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4275_, v___x_4276_, v___x_4277_, v_a_3786_);
return v___x_4278_;
}
case 23:
{
lean_object* v_presentation_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; 
lean_dec_ref(v_config_3784_);
v_presentation_4279_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_4279_);
lean_dec_ref_known(v_x_3785_, 1);
v___x_4280_ = lean_unsigned_to_nat(0u);
v___x_4281_ = lean_unsigned_to_nat(59u);
v___x_4282_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4282_, 0, v_presentation_4279_);
v___x_4283_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4280_, v___x_4281_, v___x_4282_, v_a_3786_);
return v___x_4283_;
}
case 24:
{
uint8_t v_allowLeapSeconds_4284_; 
v_allowLeapSeconds_4284_ = lean_ctor_get_uint8(v_config_3784_, sizeof(void*)*1);
lean_dec_ref(v_config_3784_);
if (v_allowLeapSeconds_4284_ == 0)
{
lean_object* v_presentation_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; 
v_presentation_4285_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_4285_);
lean_dec_ref_known(v_x_3785_, 1);
v___x_4286_ = lean_unsigned_to_nat(0u);
v___x_4287_ = lean_unsigned_to_nat(59u);
v___x_4288_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4288_, 0, v_presentation_4285_);
v___x_4289_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4286_, v___x_4287_, v___x_4288_, v_a_3786_);
if (lean_obj_tag(v___x_4289_) == 0)
{
lean_object* v_pos_4290_; lean_object* v_res_4291_; lean_object* v___x_4293_; uint8_t v_isShared_4294_; uint8_t v_isSharedCheck_4298_; 
v_pos_4290_ = lean_ctor_get(v___x_4289_, 0);
v_res_4291_ = lean_ctor_get(v___x_4289_, 1);
v_isSharedCheck_4298_ = !lean_is_exclusive(v___x_4289_);
if (v_isSharedCheck_4298_ == 0)
{
v___x_4293_ = v___x_4289_;
v_isShared_4294_ = v_isSharedCheck_4298_;
goto v_resetjp_4292_;
}
else
{
lean_inc(v_res_4291_);
lean_inc(v_pos_4290_);
lean_dec(v___x_4289_);
v___x_4293_ = lean_box(0);
v_isShared_4294_ = v_isSharedCheck_4298_;
goto v_resetjp_4292_;
}
v_resetjp_4292_:
{
lean_object* v___x_4296_; 
if (v_isShared_4294_ == 0)
{
v___x_4296_ = v___x_4293_;
goto v_reusejp_4295_;
}
else
{
lean_object* v_reuseFailAlloc_4297_; 
v_reuseFailAlloc_4297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4297_, 0, v_pos_4290_);
lean_ctor_set(v_reuseFailAlloc_4297_, 1, v_res_4291_);
v___x_4296_ = v_reuseFailAlloc_4297_;
goto v_reusejp_4295_;
}
v_reusejp_4295_:
{
return v___x_4296_;
}
}
}
else
{
return v___x_4289_;
}
}
else
{
lean_object* v_presentation_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; 
v_presentation_4299_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_4299_);
lean_dec_ref_known(v_x_3785_, 1);
v___x_4300_ = lean_unsigned_to_nat(0u);
v___x_4301_ = lean_unsigned_to_nat(60u);
v___x_4302_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4302_, 0, v_presentation_4299_);
v___x_4303_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4300_, v___x_4301_, v___x_4302_, v_a_3786_);
return v___x_4303_;
}
}
case 25:
{
lean_object* v_presentation_4304_; 
lean_dec_ref(v_config_3784_);
v_presentation_4304_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_4304_);
lean_dec_ref_known(v_x_3785_, 1);
if (lean_obj_tag(v_presentation_4304_) == 0)
{
lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; 
v___x_4305_ = lean_unsigned_to_nat(0u);
v___x_4306_ = lean_unsigned_to_nat(999999999u);
v___x_4307_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__7));
v___x_4308_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4305_, v___x_4306_, v___x_4307_, v_a_3786_);
return v___x_4308_;
}
else
{
lean_object* v_digits_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; 
v_digits_4309_ = lean_ctor_get(v_presentation_4304_, 0);
lean_inc(v_digits_4309_);
lean_dec_ref_known(v_presentation_4304_, 1);
v___x_4310_ = lean_unsigned_to_nat(0u);
v___x_4311_ = lean_unsigned_to_nat(999999999u);
v___x_4312_ = lean_unsigned_to_nat(9u);
v___x_4313_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFractionNum___boxed), 3, 2);
lean_closure_set(v___x_4313_, 0, v_digits_4309_);
lean_closure_set(v___x_4313_, 1, v___x_4312_);
v___x_4314_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4310_, v___x_4311_, v___x_4313_, v_a_3786_);
return v___x_4314_;
}
}
case 26:
{
lean_object* v_presentation_4315_; lean_object* v___x_4316_; 
lean_dec_ref(v_config_3784_);
v_presentation_4315_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_4315_);
lean_dec_ref_known(v_x_3785_, 1);
v___x_4316_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum(v_presentation_4315_, v_a_3786_);
lean_dec(v_presentation_4315_);
if (lean_obj_tag(v___x_4316_) == 0)
{
lean_object* v_pos_4317_; lean_object* v_res_4318_; lean_object* v___x_4320_; uint8_t v_isShared_4321_; uint8_t v_isSharedCheck_4326_; 
v_pos_4317_ = lean_ctor_get(v___x_4316_, 0);
v_res_4318_ = lean_ctor_get(v___x_4316_, 1);
v_isSharedCheck_4326_ = !lean_is_exclusive(v___x_4316_);
if (v_isSharedCheck_4326_ == 0)
{
v___x_4320_ = v___x_4316_;
v_isShared_4321_ = v_isSharedCheck_4326_;
goto v_resetjp_4319_;
}
else
{
lean_inc(v_res_4318_);
lean_inc(v_pos_4317_);
lean_dec(v___x_4316_);
v___x_4320_ = lean_box(0);
v_isShared_4321_ = v_isSharedCheck_4326_;
goto v_resetjp_4319_;
}
v_resetjp_4319_:
{
lean_object* v___x_4322_; lean_object* v___x_4324_; 
v___x_4322_ = lean_nat_to_int(v_res_4318_);
if (v_isShared_4321_ == 0)
{
lean_ctor_set(v___x_4320_, 1, v___x_4322_);
v___x_4324_ = v___x_4320_;
goto v_reusejp_4323_;
}
else
{
lean_object* v_reuseFailAlloc_4325_; 
v_reuseFailAlloc_4325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4325_, 0, v_pos_4317_);
lean_ctor_set(v_reuseFailAlloc_4325_, 1, v___x_4322_);
v___x_4324_ = v_reuseFailAlloc_4325_;
goto v_reusejp_4323_;
}
v_reusejp_4323_:
{
return v___x_4324_;
}
}
}
else
{
lean_object* v_pos_4327_; lean_object* v_err_4328_; lean_object* v___x_4330_; uint8_t v_isShared_4331_; uint8_t v_isSharedCheck_4335_; 
v_pos_4327_ = lean_ctor_get(v___x_4316_, 0);
v_err_4328_ = lean_ctor_get(v___x_4316_, 1);
v_isSharedCheck_4335_ = !lean_is_exclusive(v___x_4316_);
if (v_isSharedCheck_4335_ == 0)
{
v___x_4330_ = v___x_4316_;
v_isShared_4331_ = v_isSharedCheck_4335_;
goto v_resetjp_4329_;
}
else
{
lean_inc(v_err_4328_);
lean_inc(v_pos_4327_);
lean_dec(v___x_4316_);
v___x_4330_ = lean_box(0);
v_isShared_4331_ = v_isSharedCheck_4335_;
goto v_resetjp_4329_;
}
v_resetjp_4329_:
{
lean_object* v___x_4333_; 
if (v_isShared_4331_ == 0)
{
v___x_4333_ = v___x_4330_;
goto v_reusejp_4332_;
}
else
{
lean_object* v_reuseFailAlloc_4334_; 
v_reuseFailAlloc_4334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4334_, 0, v_pos_4327_);
lean_ctor_set(v_reuseFailAlloc_4334_, 1, v_err_4328_);
v___x_4333_ = v_reuseFailAlloc_4334_;
goto v_reusejp_4332_;
}
v_reusejp_4332_:
{
return v___x_4333_;
}
}
}
}
case 27:
{
lean_object* v_presentation_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; 
lean_dec_ref(v_config_3784_);
v_presentation_4336_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_4336_);
lean_dec_ref_known(v_x_3785_, 1);
v___x_4337_ = lean_unsigned_to_nat(0u);
v___x_4338_ = lean_unsigned_to_nat(999999999u);
v___x_4339_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4339_, 0, v_presentation_4336_);
v___x_4340_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4337_, v___x_4338_, v___x_4339_, v_a_3786_);
return v___x_4340_;
}
case 28:
{
lean_object* v_presentation_4341_; lean_object* v___x_4342_; 
lean_dec_ref(v_config_3784_);
v_presentation_4341_ = lean_ctor_get(v_x_3785_, 0);
lean_inc(v_presentation_4341_);
lean_dec_ref_known(v_x_3785_, 1);
v___x_4342_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum(v_presentation_4341_, v_a_3786_);
lean_dec(v_presentation_4341_);
if (lean_obj_tag(v___x_4342_) == 0)
{
lean_object* v_pos_4343_; lean_object* v_res_4344_; lean_object* v___x_4346_; uint8_t v_isShared_4347_; uint8_t v_isSharedCheck_4352_; 
v_pos_4343_ = lean_ctor_get(v___x_4342_, 0);
v_res_4344_ = lean_ctor_get(v___x_4342_, 1);
v_isSharedCheck_4352_ = !lean_is_exclusive(v___x_4342_);
if (v_isSharedCheck_4352_ == 0)
{
v___x_4346_ = v___x_4342_;
v_isShared_4347_ = v_isSharedCheck_4352_;
goto v_resetjp_4345_;
}
else
{
lean_inc(v_res_4344_);
lean_inc(v_pos_4343_);
lean_dec(v___x_4342_);
v___x_4346_ = lean_box(0);
v_isShared_4347_ = v_isSharedCheck_4352_;
goto v_resetjp_4345_;
}
v_resetjp_4345_:
{
lean_object* v___x_4348_; lean_object* v___x_4350_; 
v___x_4348_ = lean_nat_to_int(v_res_4344_);
if (v_isShared_4347_ == 0)
{
lean_ctor_set(v___x_4346_, 1, v___x_4348_);
v___x_4350_ = v___x_4346_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4351_; 
v_reuseFailAlloc_4351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4351_, 0, v_pos_4343_);
lean_ctor_set(v_reuseFailAlloc_4351_, 1, v___x_4348_);
v___x_4350_ = v_reuseFailAlloc_4351_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
return v___x_4350_;
}
}
}
else
{
lean_object* v_pos_4353_; lean_object* v_err_4354_; lean_object* v___x_4356_; uint8_t v_isShared_4357_; uint8_t v_isSharedCheck_4361_; 
v_pos_4353_ = lean_ctor_get(v___x_4342_, 0);
v_err_4354_ = lean_ctor_get(v___x_4342_, 1);
v_isSharedCheck_4361_ = !lean_is_exclusive(v___x_4342_);
if (v_isSharedCheck_4361_ == 0)
{
v___x_4356_ = v___x_4342_;
v_isShared_4357_ = v_isSharedCheck_4361_;
goto v_resetjp_4355_;
}
else
{
lean_inc(v_err_4354_);
lean_inc(v_pos_4353_);
lean_dec(v___x_4342_);
v___x_4356_ = lean_box(0);
v_isShared_4357_ = v_isSharedCheck_4361_;
goto v_resetjp_4355_;
}
v_resetjp_4355_:
{
lean_object* v___x_4359_; 
if (v_isShared_4357_ == 0)
{
v___x_4359_ = v___x_4356_;
goto v_reusejp_4358_;
}
else
{
lean_object* v_reuseFailAlloc_4360_; 
v_reuseFailAlloc_4360_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4360_, 0, v_pos_4353_);
lean_ctor_set(v_reuseFailAlloc_4360_, 1, v_err_4354_);
v___x_4359_ = v_reuseFailAlloc_4360_;
goto v_reusejp_4358_;
}
v_reusejp_4358_:
{
return v___x_4359_;
}
}
}
}
case 29:
{
uint8_t v_presentation_4362_; 
lean_dec_ref(v_config_3784_);
v_presentation_4362_ = lean_ctor_get_uint8(v_x_3785_, 0);
lean_dec_ref_known(v_x_3785_, 0);
if (v_presentation_4362_ == 0)
{
lean_object* v___x_4363_; lean_object* v___x_4364_; 
v___x_4363_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2));
v___x_4364_ = l_Std_Internal_Parsec_String_pstring(v___x_4363_, v_a_3786_);
if (lean_obj_tag(v___x_4364_) == 0)
{
lean_object* v_pos_4365_; lean_object* v___x_4367_; uint8_t v_isShared_4368_; uint8_t v_isSharedCheck_4372_; 
v_pos_4365_ = lean_ctor_get(v___x_4364_, 0);
v_isSharedCheck_4372_ = !lean_is_exclusive(v___x_4364_);
if (v_isSharedCheck_4372_ == 0)
{
lean_object* v_unused_4373_; 
v_unused_4373_ = lean_ctor_get(v___x_4364_, 1);
lean_dec(v_unused_4373_);
v___x_4367_ = v___x_4364_;
v_isShared_4368_ = v_isSharedCheck_4372_;
goto v_resetjp_4366_;
}
else
{
lean_inc(v_pos_4365_);
lean_dec(v___x_4364_);
v___x_4367_ = lean_box(0);
v_isShared_4368_ = v_isSharedCheck_4372_;
goto v_resetjp_4366_;
}
v_resetjp_4366_:
{
lean_object* v___x_4370_; 
if (v_isShared_4368_ == 0)
{
lean_ctor_set(v___x_4367_, 1, v___x_4363_);
v___x_4370_ = v___x_4367_;
goto v_reusejp_4369_;
}
else
{
lean_object* v_reuseFailAlloc_4371_; 
v_reuseFailAlloc_4371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4371_, 0, v_pos_4365_);
lean_ctor_set(v_reuseFailAlloc_4371_, 1, v___x_4363_);
v___x_4370_ = v_reuseFailAlloc_4371_;
goto v_reusejp_4369_;
}
v_reusejp_4369_:
{
return v___x_4370_;
}
}
}
else
{
return v___x_4364_;
}
}
else
{
lean_object* v___x_4374_; 
v___x_4374_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier(v_a_3786_);
return v___x_4374_;
}
}
case 32:
{
uint8_t v_presentation_4375_; 
lean_dec_ref(v_config_3784_);
v_presentation_4375_ = lean_ctor_get_uint8(v_x_3785_, 0);
lean_dec_ref_known(v_x_3785_, 0);
if (v_presentation_4375_ == 0)
{
lean_object* v___x_4376_; lean_object* v___x_4377_; 
v___x_4376_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_4377_ = l_Std_Internal_Parsec_String_pstring(v___x_4376_, v_a_3786_);
if (lean_obj_tag(v___x_4377_) == 0)
{
lean_object* v_pos_4378_; uint8_t v___x_4379_; uint8_t v___x_4380_; uint8_t v___x_4381_; lean_object* v___x_4382_; 
v_pos_4378_ = lean_ctor_get(v___x_4377_, 0);
lean_inc(v_pos_4378_);
lean_dec_ref_known(v___x_4377_, 2);
v___x_4379_ = 2;
v___x_4380_ = 1;
v___x_4381_ = 1;
v___x_4382_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4379_, v___x_4380_, v___x_4381_, v_pos_4378_);
return v___x_4382_;
}
else
{
lean_object* v_pos_4383_; lean_object* v_err_4384_; lean_object* v___x_4386_; uint8_t v_isShared_4387_; uint8_t v_isSharedCheck_4391_; 
v_pos_4383_ = lean_ctor_get(v___x_4377_, 0);
v_err_4384_ = lean_ctor_get(v___x_4377_, 1);
v_isSharedCheck_4391_ = !lean_is_exclusive(v___x_4377_);
if (v_isSharedCheck_4391_ == 0)
{
v___x_4386_ = v___x_4377_;
v_isShared_4387_ = v_isSharedCheck_4391_;
goto v_resetjp_4385_;
}
else
{
lean_inc(v_err_4384_);
lean_inc(v_pos_4383_);
lean_dec(v___x_4377_);
v___x_4386_ = lean_box(0);
v_isShared_4387_ = v_isSharedCheck_4391_;
goto v_resetjp_4385_;
}
v_resetjp_4385_:
{
lean_object* v___x_4389_; 
if (v_isShared_4387_ == 0)
{
v___x_4389_ = v___x_4386_;
goto v_reusejp_4388_;
}
else
{
lean_object* v_reuseFailAlloc_4390_; 
v_reuseFailAlloc_4390_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4390_, 0, v_pos_4383_);
lean_ctor_set(v_reuseFailAlloc_4390_, 1, v_err_4384_);
v___x_4389_ = v_reuseFailAlloc_4390_;
goto v_reusejp_4388_;
}
v_reusejp_4388_:
{
return v___x_4389_;
}
}
}
}
else
{
lean_object* v___x_4392_; lean_object* v___x_4393_; 
v___x_4392_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_4393_ = l_Std_Internal_Parsec_String_pstring(v___x_4392_, v_a_3786_);
if (lean_obj_tag(v___x_4393_) == 0)
{
lean_object* v_pos_4394_; uint8_t v___x_4395_; uint8_t v___x_4396_; uint8_t v___x_4397_; lean_object* v___x_4398_; 
v_pos_4394_ = lean_ctor_get(v___x_4393_, 0);
lean_inc(v_pos_4394_);
lean_dec_ref_known(v___x_4393_, 2);
v___x_4395_ = 0;
v___x_4396_ = 2;
v___x_4397_ = 1;
v___x_4398_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4395_, v___x_4396_, v___x_4397_, v_pos_4394_);
return v___x_4398_;
}
else
{
lean_object* v_pos_4399_; lean_object* v_err_4400_; lean_object* v___x_4402_; uint8_t v_isShared_4403_; uint8_t v_isSharedCheck_4407_; 
v_pos_4399_ = lean_ctor_get(v___x_4393_, 0);
v_err_4400_ = lean_ctor_get(v___x_4393_, 1);
v_isSharedCheck_4407_ = !lean_is_exclusive(v___x_4393_);
if (v_isSharedCheck_4407_ == 0)
{
v___x_4402_ = v___x_4393_;
v_isShared_4403_ = v_isSharedCheck_4407_;
goto v_resetjp_4401_;
}
else
{
lean_inc(v_err_4400_);
lean_inc(v_pos_4399_);
lean_dec(v___x_4393_);
v___x_4402_ = lean_box(0);
v_isShared_4403_ = v_isSharedCheck_4407_;
goto v_resetjp_4401_;
}
v_resetjp_4401_:
{
lean_object* v___x_4405_; 
if (v_isShared_4403_ == 0)
{
v___x_4405_ = v___x_4402_;
goto v_reusejp_4404_;
}
else
{
lean_object* v_reuseFailAlloc_4406_; 
v_reuseFailAlloc_4406_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4406_, 0, v_pos_4399_);
lean_ctor_set(v_reuseFailAlloc_4406_, 1, v_err_4400_);
v___x_4405_ = v_reuseFailAlloc_4406_;
goto v_reusejp_4404_;
}
v_reusejp_4404_:
{
return v___x_4405_;
}
}
}
}
}
case 33:
{
uint8_t v_presentation_4408_; 
lean_dec_ref(v_config_3784_);
v_presentation_4408_ = lean_ctor_get_uint8(v_x_3785_, 0);
lean_dec_ref_known(v_x_3785_, 0);
switch(v_presentation_4408_)
{
case 0:
{
uint8_t v___x_4409_; uint8_t v___x_4410_; uint8_t v___x_4411_; lean_object* v___x_4412_; 
v___x_4409_ = 2;
v___x_4410_ = 1;
v___x_4411_ = 0;
lean_inc_ref(v_a_3786_);
v___x_4412_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4409_, v___x_4410_, v___x_4411_, v_a_3786_);
v___y_3798_ = v___x_4412_;
goto v___jp_3797_;
}
case 1:
{
uint8_t v___x_4413_; uint8_t v___x_4414_; uint8_t v___x_4415_; lean_object* v___x_4416_; 
v___x_4413_ = 0;
v___x_4414_ = 1;
v___x_4415_ = 0;
lean_inc_ref(v_a_3786_);
v___x_4416_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4413_, v___x_4414_, v___x_4415_, v_a_3786_);
v___y_3798_ = v___x_4416_;
goto v___jp_3797_;
}
case 2:
{
uint8_t v___x_4417_; uint8_t v___x_4418_; uint8_t v___x_4419_; lean_object* v___x_4420_; 
v___x_4417_ = 0;
v___x_4418_ = 1;
v___x_4419_ = 1;
lean_inc_ref(v_a_3786_);
v___x_4420_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4417_, v___x_4418_, v___x_4419_, v_a_3786_);
v___y_3798_ = v___x_4420_;
goto v___jp_3797_;
}
case 3:
{
uint8_t v___x_4421_; uint8_t v___x_4422_; uint8_t v___x_4423_; lean_object* v___x_4424_; 
v___x_4421_ = 0;
v___x_4422_ = 2;
v___x_4423_ = 0;
lean_inc_ref(v_a_3786_);
v___x_4424_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4421_, v___x_4422_, v___x_4423_, v_a_3786_);
v___y_3798_ = v___x_4424_;
goto v___jp_3797_;
}
default: 
{
uint8_t v___x_4425_; uint8_t v___x_4426_; uint8_t v___x_4427_; lean_object* v___x_4428_; 
v___x_4425_ = 0;
v___x_4426_ = 2;
v___x_4427_ = 1;
lean_inc_ref(v_a_3786_);
v___x_4428_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4425_, v___x_4426_, v___x_4427_, v_a_3786_);
v___y_3798_ = v___x_4428_;
goto v___jp_3797_;
}
}
}
case 34:
{
uint8_t v_presentation_4429_; 
lean_dec_ref(v_config_3784_);
v_presentation_4429_ = lean_ctor_get_uint8(v_x_3785_, 0);
lean_dec_ref_known(v_x_3785_, 0);
switch(v_presentation_4429_)
{
case 0:
{
uint8_t v___x_4430_; uint8_t v___x_4431_; uint8_t v___x_4432_; lean_object* v___x_4433_; 
v___x_4430_ = 2;
v___x_4431_ = 1;
v___x_4432_ = 0;
v___x_4433_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4430_, v___x_4431_, v___x_4432_, v_a_3786_);
return v___x_4433_;
}
case 1:
{
uint8_t v___x_4434_; uint8_t v___x_4435_; uint8_t v___x_4436_; lean_object* v___x_4437_; 
v___x_4434_ = 0;
v___x_4435_ = 1;
v___x_4436_ = 0;
v___x_4437_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4434_, v___x_4435_, v___x_4436_, v_a_3786_);
return v___x_4437_;
}
case 2:
{
uint8_t v___x_4438_; uint8_t v___x_4439_; uint8_t v___x_4440_; lean_object* v___x_4441_; 
v___x_4438_ = 0;
v___x_4439_ = 2;
v___x_4440_ = 1;
v___x_4441_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4438_, v___x_4439_, v___x_4440_, v_a_3786_);
return v___x_4441_;
}
case 3:
{
uint8_t v___x_4442_; uint8_t v___x_4443_; uint8_t v___x_4444_; lean_object* v___x_4445_; 
v___x_4442_ = 0;
v___x_4443_ = 2;
v___x_4444_ = 0;
v___x_4445_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4442_, v___x_4443_, v___x_4444_, v_a_3786_);
return v___x_4445_;
}
default: 
{
uint8_t v___x_4446_; uint8_t v___x_4447_; lean_object* v___x_4448_; 
v___x_4446_ = 0;
v___x_4447_ = 1;
v___x_4448_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4446_, v___x_4446_, v___x_4447_, v_a_3786_);
return v___x_4448_;
}
}
}
case 35:
{
uint8_t v_presentation_4449_; 
lean_dec_ref(v_config_3784_);
v_presentation_4449_ = lean_ctor_get_uint8(v_x_3785_, 0);
lean_dec_ref_known(v_x_3785_, 0);
switch(v_presentation_4449_)
{
case 0:
{
uint8_t v___x_4450_; uint8_t v___x_4451_; uint8_t v___x_4452_; lean_object* v___x_4453_; 
v___x_4450_ = 0;
v___x_4451_ = 1;
v___x_4452_ = 0;
v___x_4453_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4450_, v___x_4451_, v___x_4452_, v_a_3786_);
return v___x_4453_;
}
case 1:
{
lean_object* v___x_4454_; lean_object* v___x_4455_; 
v___x_4454_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_4455_ = l_Std_Internal_Parsec_String_pstring(v___x_4454_, v_a_3786_);
if (lean_obj_tag(v___x_4455_) == 0)
{
lean_object* v_pos_4456_; uint8_t v___x_4457_; uint8_t v___x_4458_; uint8_t v___x_4459_; lean_object* v___x_4460_; 
v_pos_4456_ = lean_ctor_get(v___x_4455_, 0);
lean_inc_n(v_pos_4456_, 2);
lean_dec_ref_known(v___x_4455_, 2);
v___x_4457_ = 0;
v___x_4458_ = 1;
v___x_4459_ = 1;
v___x_4460_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4457_, v___x_4458_, v___x_4459_, v_pos_4456_);
if (lean_obj_tag(v___x_4460_) == 0)
{
lean_dec(v_pos_4456_);
return v___x_4460_;
}
else
{
lean_object* v_pos_4461_; lean_object* v_snd_4462_; lean_object* v_snd_4463_; uint8_t v_decide_4464_; 
v_pos_4461_ = lean_ctor_get(v___x_4460_, 0);
v_snd_4462_ = lean_ctor_get(v_pos_4456_, 1);
lean_inc(v_snd_4462_);
lean_dec(v_pos_4456_);
v_snd_4463_ = lean_ctor_get(v_pos_4461_, 1);
v_decide_4464_ = lean_nat_dec_eq(v_snd_4462_, v_snd_4463_);
lean_dec(v_snd_4462_);
if (v_decide_4464_ == 0)
{
return v___x_4460_;
}
else
{
lean_object* v___x_4466_; uint8_t v_isShared_4467_; uint8_t v_isSharedCheck_4472_; 
lean_inc(v_pos_4461_);
v_isSharedCheck_4472_ = !lean_is_exclusive(v___x_4460_);
if (v_isSharedCheck_4472_ == 0)
{
lean_object* v_unused_4473_; lean_object* v_unused_4474_; 
v_unused_4473_ = lean_ctor_get(v___x_4460_, 1);
lean_dec(v_unused_4473_);
v_unused_4474_ = lean_ctor_get(v___x_4460_, 0);
lean_dec(v_unused_4474_);
v___x_4466_ = v___x_4460_;
v_isShared_4467_ = v_isSharedCheck_4472_;
goto v_resetjp_4465_;
}
else
{
lean_dec(v___x_4460_);
v___x_4466_ = lean_box(0);
v_isShared_4467_ = v_isSharedCheck_4472_;
goto v_resetjp_4465_;
}
v_resetjp_4465_:
{
lean_object* v___x_4468_; lean_object* v___x_4470_; 
v___x_4468_ = l_Std_Time_TimeZone_Offset_zero;
if (v_isShared_4467_ == 0)
{
lean_ctor_set_tag(v___x_4466_, 0);
lean_ctor_set(v___x_4466_, 1, v___x_4468_);
v___x_4470_ = v___x_4466_;
goto v_reusejp_4469_;
}
else
{
lean_object* v_reuseFailAlloc_4471_; 
v_reuseFailAlloc_4471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4471_, 0, v_pos_4461_);
lean_ctor_set(v_reuseFailAlloc_4471_, 1, v___x_4468_);
v___x_4470_ = v_reuseFailAlloc_4471_;
goto v_reusejp_4469_;
}
v_reusejp_4469_:
{
return v___x_4470_;
}
}
}
}
}
else
{
lean_object* v_pos_4475_; lean_object* v_err_4476_; lean_object* v___x_4478_; uint8_t v_isShared_4479_; uint8_t v_isSharedCheck_4483_; 
v_pos_4475_ = lean_ctor_get(v___x_4455_, 0);
v_err_4476_ = lean_ctor_get(v___x_4455_, 1);
v_isSharedCheck_4483_ = !lean_is_exclusive(v___x_4455_);
if (v_isSharedCheck_4483_ == 0)
{
v___x_4478_ = v___x_4455_;
v_isShared_4479_ = v_isSharedCheck_4483_;
goto v_resetjp_4477_;
}
else
{
lean_inc(v_err_4476_);
lean_inc(v_pos_4475_);
lean_dec(v___x_4455_);
v___x_4478_ = lean_box(0);
v_isShared_4479_ = v_isSharedCheck_4483_;
goto v_resetjp_4477_;
}
v_resetjp_4477_:
{
lean_object* v___x_4481_; 
if (v_isShared_4479_ == 0)
{
v___x_4481_ = v___x_4478_;
goto v_reusejp_4480_;
}
else
{
lean_object* v_reuseFailAlloc_4482_; 
v_reuseFailAlloc_4482_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4482_, 0, v_pos_4475_);
lean_ctor_set(v_reuseFailAlloc_4482_, 1, v_err_4476_);
v___x_4481_ = v_reuseFailAlloc_4482_;
goto v_reusejp_4480_;
}
v_reusejp_4480_:
{
return v___x_4481_;
}
}
}
}
default: 
{
lean_object* v___x_4484_; lean_object* v___x_4485_; 
v___x_4484_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4));
lean_inc_ref(v_a_3786_);
v___x_4485_ = l_Std_Internal_Parsec_String_pstring(v___x_4484_, v_a_3786_);
if (lean_obj_tag(v___x_4485_) == 0)
{
lean_object* v_pos_4486_; lean_object* v___x_4488_; uint8_t v_isShared_4489_; uint8_t v_isSharedCheck_4494_; 
lean_dec_ref(v_a_3786_);
v_pos_4486_ = lean_ctor_get(v___x_4485_, 0);
v_isSharedCheck_4494_ = !lean_is_exclusive(v___x_4485_);
if (v_isSharedCheck_4494_ == 0)
{
lean_object* v_unused_4495_; 
v_unused_4495_ = lean_ctor_get(v___x_4485_, 1);
lean_dec(v_unused_4495_);
v___x_4488_ = v___x_4485_;
v_isShared_4489_ = v_isSharedCheck_4494_;
goto v_resetjp_4487_;
}
else
{
lean_inc(v_pos_4486_);
lean_dec(v___x_4485_);
v___x_4488_ = lean_box(0);
v_isShared_4489_ = v_isSharedCheck_4494_;
goto v_resetjp_4487_;
}
v_resetjp_4487_:
{
lean_object* v___x_4490_; lean_object* v___x_4492_; 
v___x_4490_ = l_Std_Time_TimeZone_Offset_zero;
if (v_isShared_4489_ == 0)
{
lean_ctor_set(v___x_4488_, 1, v___x_4490_);
v___x_4492_ = v___x_4488_;
goto v_reusejp_4491_;
}
else
{
lean_object* v_reuseFailAlloc_4493_; 
v_reuseFailAlloc_4493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4493_, 0, v_pos_4486_);
lean_ctor_set(v_reuseFailAlloc_4493_, 1, v___x_4490_);
v___x_4492_ = v_reuseFailAlloc_4493_;
goto v_reusejp_4491_;
}
v_reusejp_4491_:
{
return v___x_4492_;
}
}
}
else
{
lean_object* v_pos_4496_; lean_object* v_err_4497_; lean_object* v___x_4499_; uint8_t v_isShared_4500_; uint8_t v_isSharedCheck_4510_; 
v_pos_4496_ = lean_ctor_get(v___x_4485_, 0);
v_err_4497_ = lean_ctor_get(v___x_4485_, 1);
v_isSharedCheck_4510_ = !lean_is_exclusive(v___x_4485_);
if (v_isSharedCheck_4510_ == 0)
{
v___x_4499_ = v___x_4485_;
v_isShared_4500_ = v_isSharedCheck_4510_;
goto v_resetjp_4498_;
}
else
{
lean_inc(v_err_4497_);
lean_inc(v_pos_4496_);
lean_dec(v___x_4485_);
v___x_4499_ = lean_box(0);
v_isShared_4500_ = v_isSharedCheck_4510_;
goto v_resetjp_4498_;
}
v_resetjp_4498_:
{
lean_object* v_snd_4501_; lean_object* v_snd_4502_; uint8_t v_decide_4503_; 
v_snd_4501_ = lean_ctor_get(v_a_3786_, 1);
lean_inc(v_snd_4501_);
lean_dec_ref(v_a_3786_);
v_snd_4502_ = lean_ctor_get(v_pos_4496_, 1);
v_decide_4503_ = lean_nat_dec_eq(v_snd_4501_, v_snd_4502_);
lean_dec(v_snd_4501_);
if (v_decide_4503_ == 0)
{
lean_object* v___x_4505_; 
if (v_isShared_4500_ == 0)
{
v___x_4505_ = v___x_4499_;
goto v_reusejp_4504_;
}
else
{
lean_object* v_reuseFailAlloc_4506_; 
v_reuseFailAlloc_4506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4506_, 0, v_pos_4496_);
lean_ctor_set(v_reuseFailAlloc_4506_, 1, v_err_4497_);
v___x_4505_ = v_reuseFailAlloc_4506_;
goto v_reusejp_4504_;
}
v_reusejp_4504_:
{
return v___x_4505_;
}
}
else
{
uint8_t v___x_4507_; uint8_t v___x_4508_; lean_object* v___x_4509_; 
lean_del_object(v___x_4499_);
lean_dec(v_err_4497_);
v___x_4507_ = 0;
v___x_4508_ = 2;
v___x_4509_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4507_, v___x_4508_, v_decide_4503_, v_pos_4496_);
return v___x_4509_;
}
}
}
}
}
}
default: 
{
lean_object* v___x_4511_; 
lean_dec_ref(v_x_3785_);
lean_dec_ref(v_config_3784_);
v___x_4511_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier(v_a_3786_);
return v___x_4511_;
}
}
v___jp_3787_:
{
lean_object* v_dateformat_3789_; lean_object* v_symbols_3790_; lean_object* v___x_3791_; 
v_dateformat_3789_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_3789_);
lean_dec_ref(v_config_3784_);
v_symbols_3790_ = lean_ctor_get(v_dateformat_3789_, 1);
lean_inc_ref(v_symbols_3790_);
lean_dec_ref(v_dateformat_3789_);
v___x_3791_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNarrow(v_symbols_3790_, v___y_3788_);
return v___x_3791_;
}
v___jp_3792_:
{
lean_object* v_dateformat_3794_; lean_object* v_symbols_3795_; lean_object* v___x_3796_; 
v_dateformat_3794_ = lean_ctor_get(v_config_3784_, 0);
lean_inc_ref(v_dateformat_3794_);
lean_dec_ref(v_config_3784_);
v_symbols_3795_ = lean_ctor_get(v_dateformat_3794_, 1);
lean_inc_ref(v_symbols_3795_);
lean_dec_ref(v_dateformat_3794_);
v___x_3796_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNarrow(v_symbols_3795_, v___y_3793_);
return v___x_3796_;
}
v___jp_3797_:
{
if (lean_obj_tag(v___y_3798_) == 0)
{
lean_dec_ref(v_a_3786_);
return v___y_3798_;
}
else
{
lean_object* v_pos_3799_; lean_object* v_snd_3800_; lean_object* v_snd_3801_; uint8_t v_decide_3802_; 
v_pos_3799_ = lean_ctor_get(v___y_3798_, 0);
v_snd_3800_ = lean_ctor_get(v_a_3786_, 1);
lean_inc(v_snd_3800_);
lean_dec_ref(v_a_3786_);
v_snd_3801_ = lean_ctor_get(v_pos_3799_, 1);
v_decide_3802_ = lean_nat_dec_eq(v_snd_3800_, v_snd_3801_);
lean_dec(v_snd_3800_);
if (v_decide_3802_ == 0)
{
return v___y_3798_;
}
else
{
lean_object* v___x_3803_; lean_object* v___x_3804_; 
lean_inc(v_pos_3799_);
lean_dec_ref_known(v___y_3798_, 2);
v___x_3803_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4));
v___x_3804_ = l_Std_Internal_Parsec_String_pstring(v___x_3803_, v_pos_3799_);
if (lean_obj_tag(v___x_3804_) == 0)
{
lean_object* v_pos_3805_; lean_object* v___x_3807_; uint8_t v_isShared_3808_; uint8_t v_isSharedCheck_3813_; 
v_pos_3805_ = lean_ctor_get(v___x_3804_, 0);
v_isSharedCheck_3813_ = !lean_is_exclusive(v___x_3804_);
if (v_isSharedCheck_3813_ == 0)
{
lean_object* v_unused_3814_; 
v_unused_3814_ = lean_ctor_get(v___x_3804_, 1);
lean_dec(v_unused_3814_);
v___x_3807_ = v___x_3804_;
v_isShared_3808_ = v_isSharedCheck_3813_;
goto v_resetjp_3806_;
}
else
{
lean_inc(v_pos_3805_);
lean_dec(v___x_3804_);
v___x_3807_ = lean_box(0);
v_isShared_3808_ = v_isSharedCheck_3813_;
goto v_resetjp_3806_;
}
v_resetjp_3806_:
{
lean_object* v___x_3809_; lean_object* v___x_3811_; 
v___x_3809_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
if (v_isShared_3808_ == 0)
{
lean_ctor_set(v___x_3807_, 1, v___x_3809_);
v___x_3811_ = v___x_3807_;
goto v_reusejp_3810_;
}
else
{
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v_pos_3805_);
lean_ctor_set(v_reuseFailAlloc_3812_, 1, v___x_3809_);
v___x_3811_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3810_;
}
v_reusejp_3810_:
{
return v___x_3811_;
}
}
}
else
{
lean_object* v_pos_3815_; lean_object* v_err_3816_; lean_object* v___x_3818_; uint8_t v_isShared_3819_; uint8_t v_isSharedCheck_3823_; 
v_pos_3815_ = lean_ctor_get(v___x_3804_, 0);
v_err_3816_ = lean_ctor_get(v___x_3804_, 1);
v_isSharedCheck_3823_ = !lean_is_exclusive(v___x_3804_);
if (v_isSharedCheck_3823_ == 0)
{
v___x_3818_ = v___x_3804_;
v_isShared_3819_ = v_isSharedCheck_3823_;
goto v_resetjp_3817_;
}
else
{
lean_inc(v_err_3816_);
lean_inc(v_pos_3815_);
lean_dec(v___x_3804_);
v___x_3818_ = lean_box(0);
v_isShared_3819_ = v_isSharedCheck_3823_;
goto v_resetjp_3817_;
}
v_resetjp_3817_:
{
lean_object* v___x_3821_; 
if (v_isShared_3819_ == 0)
{
v___x_3821_ = v___x_3818_;
goto v_reusejp_3820_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v_pos_3815_);
lean_ctor_set(v_reuseFailAlloc_3822_, 1, v_err_3816_);
v___x_3821_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
return v___x_3821_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatPartWithDate(lean_object* v_dateformat_4512_, lean_object* v_date_4513_, lean_object* v_part_4514_){
_start:
{
if (lean_obj_tag(v_part_4514_) == 0)
{
lean_object* v_val_4515_; 
lean_dec_ref(v_date_4513_);
v_val_4515_ = lean_ctor_get(v_part_4514_, 0);
lean_inc_ref(v_val_4515_);
lean_dec_ref_known(v_part_4514_, 1);
return v_val_4515_;
}
else
{
lean_object* v_modifier_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; 
v_modifier_4516_ = lean_ctor_get(v_part_4514_, 0);
lean_inc_ref(v_modifier_4516_);
lean_dec_ref_known(v_part_4514_, 1);
v___x_4517_ = l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier(v_modifier_4516_, v_dateformat_4512_, v_date_4513_);
v___x_4518_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWith(v_dateformat_4512_, v_modifier_4516_, v___x_4517_);
return v___x_4518_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatPartWithDate___boxed(lean_object* v_dateformat_4519_, lean_object* v_date_4520_, lean_object* v_part_4521_){
_start:
{
lean_object* v_res_4522_; 
v_res_4522_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatPartWithDate(v_dateformat_4519_, v_date_4520_, v_part_4521_);
lean_dec_ref(v_dateformat_4519_);
return v_res_4522_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_insert(lean_object* v_date_4523_, lean_object* v_modifier_4524_, lean_object* v_data_4525_){
_start:
{
switch(lean_obj_tag(v_modifier_4524_))
{
case 0:
{
lean_object* v_y_4526_; lean_object* v_u_4527_; lean_object* v_Y_4528_; lean_object* v_D_4529_; lean_object* v_M_4530_; lean_object* v_L_4531_; lean_object* v_d_4532_; lean_object* v_Q_4533_; lean_object* v_q_4534_; lean_object* v_w_4535_; lean_object* v_W_4536_; lean_object* v_E_4537_; lean_object* v_e_4538_; lean_object* v_c_4539_; lean_object* v_F_4540_; lean_object* v_a_4541_; lean_object* v_b_4542_; lean_object* v_B_4543_; lean_object* v_h_4544_; lean_object* v_K_4545_; lean_object* v_k_4546_; lean_object* v_H_4547_; lean_object* v_m_4548_; lean_object* v_s_4549_; lean_object* v_S_4550_; lean_object* v_A_4551_; lean_object* v_n_4552_; lean_object* v_N_4553_; lean_object* v_V_4554_; lean_object* v_z_4555_; lean_object* v_zabbrev_4556_; lean_object* v_v_4557_; lean_object* v_O_4558_; lean_object* v_X_4559_; lean_object* v_x_4560_; lean_object* v_Z_4561_; lean_object* v___x_4563_; uint8_t v_isShared_4564_; uint8_t v_isSharedCheck_4569_; 
lean_dec_ref_known(v_modifier_4524_, 0);
v_y_4526_ = lean_ctor_get(v_date_4523_, 1);
v_u_4527_ = lean_ctor_get(v_date_4523_, 2);
v_Y_4528_ = lean_ctor_get(v_date_4523_, 3);
v_D_4529_ = lean_ctor_get(v_date_4523_, 4);
v_M_4530_ = lean_ctor_get(v_date_4523_, 5);
v_L_4531_ = lean_ctor_get(v_date_4523_, 6);
v_d_4532_ = lean_ctor_get(v_date_4523_, 7);
v_Q_4533_ = lean_ctor_get(v_date_4523_, 8);
v_q_4534_ = lean_ctor_get(v_date_4523_, 9);
v_w_4535_ = lean_ctor_get(v_date_4523_, 10);
v_W_4536_ = lean_ctor_get(v_date_4523_, 11);
v_E_4537_ = lean_ctor_get(v_date_4523_, 12);
v_e_4538_ = lean_ctor_get(v_date_4523_, 13);
v_c_4539_ = lean_ctor_get(v_date_4523_, 14);
v_F_4540_ = lean_ctor_get(v_date_4523_, 15);
v_a_4541_ = lean_ctor_get(v_date_4523_, 16);
v_b_4542_ = lean_ctor_get(v_date_4523_, 17);
v_B_4543_ = lean_ctor_get(v_date_4523_, 18);
v_h_4544_ = lean_ctor_get(v_date_4523_, 19);
v_K_4545_ = lean_ctor_get(v_date_4523_, 20);
v_k_4546_ = lean_ctor_get(v_date_4523_, 21);
v_H_4547_ = lean_ctor_get(v_date_4523_, 22);
v_m_4548_ = lean_ctor_get(v_date_4523_, 23);
v_s_4549_ = lean_ctor_get(v_date_4523_, 24);
v_S_4550_ = lean_ctor_get(v_date_4523_, 25);
v_A_4551_ = lean_ctor_get(v_date_4523_, 26);
v_n_4552_ = lean_ctor_get(v_date_4523_, 27);
v_N_4553_ = lean_ctor_get(v_date_4523_, 28);
v_V_4554_ = lean_ctor_get(v_date_4523_, 29);
v_z_4555_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_4556_ = lean_ctor_get(v_date_4523_, 31);
v_v_4557_ = lean_ctor_get(v_date_4523_, 32);
v_O_4558_ = lean_ctor_get(v_date_4523_, 33);
v_X_4559_ = lean_ctor_get(v_date_4523_, 34);
v_x_4560_ = lean_ctor_get(v_date_4523_, 35);
v_Z_4561_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_4569_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_4569_ == 0)
{
lean_object* v_unused_4570_; 
v_unused_4570_ = lean_ctor_get(v_date_4523_, 0);
lean_dec(v_unused_4570_);
v___x_4563_ = v_date_4523_;
v_isShared_4564_ = v_isSharedCheck_4569_;
goto v_resetjp_4562_;
}
else
{
lean_inc(v_Z_4561_);
lean_inc(v_x_4560_);
lean_inc(v_X_4559_);
lean_inc(v_O_4558_);
lean_inc(v_v_4557_);
lean_inc(v_zabbrev_4556_);
lean_inc(v_z_4555_);
lean_inc(v_V_4554_);
lean_inc(v_N_4553_);
lean_inc(v_n_4552_);
lean_inc(v_A_4551_);
lean_inc(v_S_4550_);
lean_inc(v_s_4549_);
lean_inc(v_m_4548_);
lean_inc(v_H_4547_);
lean_inc(v_k_4546_);
lean_inc(v_K_4545_);
lean_inc(v_h_4544_);
lean_inc(v_B_4543_);
lean_inc(v_b_4542_);
lean_inc(v_a_4541_);
lean_inc(v_F_4540_);
lean_inc(v_c_4539_);
lean_inc(v_e_4538_);
lean_inc(v_E_4537_);
lean_inc(v_W_4536_);
lean_inc(v_w_4535_);
lean_inc(v_q_4534_);
lean_inc(v_Q_4533_);
lean_inc(v_d_4532_);
lean_inc(v_L_4531_);
lean_inc(v_M_4530_);
lean_inc(v_D_4529_);
lean_inc(v_Y_4528_);
lean_inc(v_u_4527_);
lean_inc(v_y_4526_);
lean_dec(v_date_4523_);
v___x_4563_ = lean_box(0);
v_isShared_4564_ = v_isSharedCheck_4569_;
goto v_resetjp_4562_;
}
v_resetjp_4562_:
{
lean_object* v___x_4565_; lean_object* v___x_4567_; 
v___x_4565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4565_, 0, v_data_4525_);
if (v_isShared_4564_ == 0)
{
lean_ctor_set(v___x_4563_, 0, v___x_4565_);
v___x_4567_ = v___x_4563_;
goto v_reusejp_4566_;
}
else
{
lean_object* v_reuseFailAlloc_4568_; 
v_reuseFailAlloc_4568_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4568_, 0, v___x_4565_);
lean_ctor_set(v_reuseFailAlloc_4568_, 1, v_y_4526_);
lean_ctor_set(v_reuseFailAlloc_4568_, 2, v_u_4527_);
lean_ctor_set(v_reuseFailAlloc_4568_, 3, v_Y_4528_);
lean_ctor_set(v_reuseFailAlloc_4568_, 4, v_D_4529_);
lean_ctor_set(v_reuseFailAlloc_4568_, 5, v_M_4530_);
lean_ctor_set(v_reuseFailAlloc_4568_, 6, v_L_4531_);
lean_ctor_set(v_reuseFailAlloc_4568_, 7, v_d_4532_);
lean_ctor_set(v_reuseFailAlloc_4568_, 8, v_Q_4533_);
lean_ctor_set(v_reuseFailAlloc_4568_, 9, v_q_4534_);
lean_ctor_set(v_reuseFailAlloc_4568_, 10, v_w_4535_);
lean_ctor_set(v_reuseFailAlloc_4568_, 11, v_W_4536_);
lean_ctor_set(v_reuseFailAlloc_4568_, 12, v_E_4537_);
lean_ctor_set(v_reuseFailAlloc_4568_, 13, v_e_4538_);
lean_ctor_set(v_reuseFailAlloc_4568_, 14, v_c_4539_);
lean_ctor_set(v_reuseFailAlloc_4568_, 15, v_F_4540_);
lean_ctor_set(v_reuseFailAlloc_4568_, 16, v_a_4541_);
lean_ctor_set(v_reuseFailAlloc_4568_, 17, v_b_4542_);
lean_ctor_set(v_reuseFailAlloc_4568_, 18, v_B_4543_);
lean_ctor_set(v_reuseFailAlloc_4568_, 19, v_h_4544_);
lean_ctor_set(v_reuseFailAlloc_4568_, 20, v_K_4545_);
lean_ctor_set(v_reuseFailAlloc_4568_, 21, v_k_4546_);
lean_ctor_set(v_reuseFailAlloc_4568_, 22, v_H_4547_);
lean_ctor_set(v_reuseFailAlloc_4568_, 23, v_m_4548_);
lean_ctor_set(v_reuseFailAlloc_4568_, 24, v_s_4549_);
lean_ctor_set(v_reuseFailAlloc_4568_, 25, v_S_4550_);
lean_ctor_set(v_reuseFailAlloc_4568_, 26, v_A_4551_);
lean_ctor_set(v_reuseFailAlloc_4568_, 27, v_n_4552_);
lean_ctor_set(v_reuseFailAlloc_4568_, 28, v_N_4553_);
lean_ctor_set(v_reuseFailAlloc_4568_, 29, v_V_4554_);
lean_ctor_set(v_reuseFailAlloc_4568_, 30, v_z_4555_);
lean_ctor_set(v_reuseFailAlloc_4568_, 31, v_zabbrev_4556_);
lean_ctor_set(v_reuseFailAlloc_4568_, 32, v_v_4557_);
lean_ctor_set(v_reuseFailAlloc_4568_, 33, v_O_4558_);
lean_ctor_set(v_reuseFailAlloc_4568_, 34, v_X_4559_);
lean_ctor_set(v_reuseFailAlloc_4568_, 35, v_x_4560_);
lean_ctor_set(v_reuseFailAlloc_4568_, 36, v_Z_4561_);
v___x_4567_ = v_reuseFailAlloc_4568_;
goto v_reusejp_4566_;
}
v_reusejp_4566_:
{
return v___x_4567_;
}
}
}
case 1:
{
lean_object* v___x_4572_; uint8_t v_isShared_4573_; uint8_t v_isSharedCheck_4621_; 
v_isSharedCheck_4621_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_4621_ == 0)
{
lean_object* v_unused_4622_; 
v_unused_4622_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_4622_);
v___x_4572_ = v_modifier_4524_;
v_isShared_4573_ = v_isSharedCheck_4621_;
goto v_resetjp_4571_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_4572_ = lean_box(0);
v_isShared_4573_ = v_isSharedCheck_4621_;
goto v_resetjp_4571_;
}
v_resetjp_4571_:
{
lean_object* v_G_4574_; lean_object* v_y_4575_; lean_object* v_Y_4576_; lean_object* v_D_4577_; lean_object* v_M_4578_; lean_object* v_L_4579_; lean_object* v_d_4580_; lean_object* v_Q_4581_; lean_object* v_q_4582_; lean_object* v_w_4583_; lean_object* v_W_4584_; lean_object* v_E_4585_; lean_object* v_e_4586_; lean_object* v_c_4587_; lean_object* v_F_4588_; lean_object* v_a_4589_; lean_object* v_b_4590_; lean_object* v_B_4591_; lean_object* v_h_4592_; lean_object* v_K_4593_; lean_object* v_k_4594_; lean_object* v_H_4595_; lean_object* v_m_4596_; lean_object* v_s_4597_; lean_object* v_S_4598_; lean_object* v_A_4599_; lean_object* v_n_4600_; lean_object* v_N_4601_; lean_object* v_V_4602_; lean_object* v_z_4603_; lean_object* v_zabbrev_4604_; lean_object* v_v_4605_; lean_object* v_O_4606_; lean_object* v_X_4607_; lean_object* v_x_4608_; lean_object* v_Z_4609_; lean_object* v___x_4611_; uint8_t v_isShared_4612_; uint8_t v_isSharedCheck_4619_; 
v_G_4574_ = lean_ctor_get(v_date_4523_, 0);
v_y_4575_ = lean_ctor_get(v_date_4523_, 1);
v_Y_4576_ = lean_ctor_get(v_date_4523_, 3);
v_D_4577_ = lean_ctor_get(v_date_4523_, 4);
v_M_4578_ = lean_ctor_get(v_date_4523_, 5);
v_L_4579_ = lean_ctor_get(v_date_4523_, 6);
v_d_4580_ = lean_ctor_get(v_date_4523_, 7);
v_Q_4581_ = lean_ctor_get(v_date_4523_, 8);
v_q_4582_ = lean_ctor_get(v_date_4523_, 9);
v_w_4583_ = lean_ctor_get(v_date_4523_, 10);
v_W_4584_ = lean_ctor_get(v_date_4523_, 11);
v_E_4585_ = lean_ctor_get(v_date_4523_, 12);
v_e_4586_ = lean_ctor_get(v_date_4523_, 13);
v_c_4587_ = lean_ctor_get(v_date_4523_, 14);
v_F_4588_ = lean_ctor_get(v_date_4523_, 15);
v_a_4589_ = lean_ctor_get(v_date_4523_, 16);
v_b_4590_ = lean_ctor_get(v_date_4523_, 17);
v_B_4591_ = lean_ctor_get(v_date_4523_, 18);
v_h_4592_ = lean_ctor_get(v_date_4523_, 19);
v_K_4593_ = lean_ctor_get(v_date_4523_, 20);
v_k_4594_ = lean_ctor_get(v_date_4523_, 21);
v_H_4595_ = lean_ctor_get(v_date_4523_, 22);
v_m_4596_ = lean_ctor_get(v_date_4523_, 23);
v_s_4597_ = lean_ctor_get(v_date_4523_, 24);
v_S_4598_ = lean_ctor_get(v_date_4523_, 25);
v_A_4599_ = lean_ctor_get(v_date_4523_, 26);
v_n_4600_ = lean_ctor_get(v_date_4523_, 27);
v_N_4601_ = lean_ctor_get(v_date_4523_, 28);
v_V_4602_ = lean_ctor_get(v_date_4523_, 29);
v_z_4603_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_4604_ = lean_ctor_get(v_date_4523_, 31);
v_v_4605_ = lean_ctor_get(v_date_4523_, 32);
v_O_4606_ = lean_ctor_get(v_date_4523_, 33);
v_X_4607_ = lean_ctor_get(v_date_4523_, 34);
v_x_4608_ = lean_ctor_get(v_date_4523_, 35);
v_Z_4609_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_4619_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_4619_ == 0)
{
lean_object* v_unused_4620_; 
v_unused_4620_ = lean_ctor_get(v_date_4523_, 2);
lean_dec(v_unused_4620_);
v___x_4611_ = v_date_4523_;
v_isShared_4612_ = v_isSharedCheck_4619_;
goto v_resetjp_4610_;
}
else
{
lean_inc(v_Z_4609_);
lean_inc(v_x_4608_);
lean_inc(v_X_4607_);
lean_inc(v_O_4606_);
lean_inc(v_v_4605_);
lean_inc(v_zabbrev_4604_);
lean_inc(v_z_4603_);
lean_inc(v_V_4602_);
lean_inc(v_N_4601_);
lean_inc(v_n_4600_);
lean_inc(v_A_4599_);
lean_inc(v_S_4598_);
lean_inc(v_s_4597_);
lean_inc(v_m_4596_);
lean_inc(v_H_4595_);
lean_inc(v_k_4594_);
lean_inc(v_K_4593_);
lean_inc(v_h_4592_);
lean_inc(v_B_4591_);
lean_inc(v_b_4590_);
lean_inc(v_a_4589_);
lean_inc(v_F_4588_);
lean_inc(v_c_4587_);
lean_inc(v_e_4586_);
lean_inc(v_E_4585_);
lean_inc(v_W_4584_);
lean_inc(v_w_4583_);
lean_inc(v_q_4582_);
lean_inc(v_Q_4581_);
lean_inc(v_d_4580_);
lean_inc(v_L_4579_);
lean_inc(v_M_4578_);
lean_inc(v_D_4577_);
lean_inc(v_Y_4576_);
lean_inc(v_y_4575_);
lean_inc(v_G_4574_);
lean_dec(v_date_4523_);
v___x_4611_ = lean_box(0);
v_isShared_4612_ = v_isSharedCheck_4619_;
goto v_resetjp_4610_;
}
v_resetjp_4610_:
{
lean_object* v___x_4614_; 
if (v_isShared_4573_ == 0)
{
lean_ctor_set(v___x_4572_, 0, v_data_4525_);
v___x_4614_ = v___x_4572_;
goto v_reusejp_4613_;
}
else
{
lean_object* v_reuseFailAlloc_4618_; 
v_reuseFailAlloc_4618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4618_, 0, v_data_4525_);
v___x_4614_ = v_reuseFailAlloc_4618_;
goto v_reusejp_4613_;
}
v_reusejp_4613_:
{
lean_object* v___x_4616_; 
if (v_isShared_4612_ == 0)
{
lean_ctor_set(v___x_4611_, 2, v___x_4614_);
v___x_4616_ = v___x_4611_;
goto v_reusejp_4615_;
}
else
{
lean_object* v_reuseFailAlloc_4617_; 
v_reuseFailAlloc_4617_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4617_, 0, v_G_4574_);
lean_ctor_set(v_reuseFailAlloc_4617_, 1, v_y_4575_);
lean_ctor_set(v_reuseFailAlloc_4617_, 2, v___x_4614_);
lean_ctor_set(v_reuseFailAlloc_4617_, 3, v_Y_4576_);
lean_ctor_set(v_reuseFailAlloc_4617_, 4, v_D_4577_);
lean_ctor_set(v_reuseFailAlloc_4617_, 5, v_M_4578_);
lean_ctor_set(v_reuseFailAlloc_4617_, 6, v_L_4579_);
lean_ctor_set(v_reuseFailAlloc_4617_, 7, v_d_4580_);
lean_ctor_set(v_reuseFailAlloc_4617_, 8, v_Q_4581_);
lean_ctor_set(v_reuseFailAlloc_4617_, 9, v_q_4582_);
lean_ctor_set(v_reuseFailAlloc_4617_, 10, v_w_4583_);
lean_ctor_set(v_reuseFailAlloc_4617_, 11, v_W_4584_);
lean_ctor_set(v_reuseFailAlloc_4617_, 12, v_E_4585_);
lean_ctor_set(v_reuseFailAlloc_4617_, 13, v_e_4586_);
lean_ctor_set(v_reuseFailAlloc_4617_, 14, v_c_4587_);
lean_ctor_set(v_reuseFailAlloc_4617_, 15, v_F_4588_);
lean_ctor_set(v_reuseFailAlloc_4617_, 16, v_a_4589_);
lean_ctor_set(v_reuseFailAlloc_4617_, 17, v_b_4590_);
lean_ctor_set(v_reuseFailAlloc_4617_, 18, v_B_4591_);
lean_ctor_set(v_reuseFailAlloc_4617_, 19, v_h_4592_);
lean_ctor_set(v_reuseFailAlloc_4617_, 20, v_K_4593_);
lean_ctor_set(v_reuseFailAlloc_4617_, 21, v_k_4594_);
lean_ctor_set(v_reuseFailAlloc_4617_, 22, v_H_4595_);
lean_ctor_set(v_reuseFailAlloc_4617_, 23, v_m_4596_);
lean_ctor_set(v_reuseFailAlloc_4617_, 24, v_s_4597_);
lean_ctor_set(v_reuseFailAlloc_4617_, 25, v_S_4598_);
lean_ctor_set(v_reuseFailAlloc_4617_, 26, v_A_4599_);
lean_ctor_set(v_reuseFailAlloc_4617_, 27, v_n_4600_);
lean_ctor_set(v_reuseFailAlloc_4617_, 28, v_N_4601_);
lean_ctor_set(v_reuseFailAlloc_4617_, 29, v_V_4602_);
lean_ctor_set(v_reuseFailAlloc_4617_, 30, v_z_4603_);
lean_ctor_set(v_reuseFailAlloc_4617_, 31, v_zabbrev_4604_);
lean_ctor_set(v_reuseFailAlloc_4617_, 32, v_v_4605_);
lean_ctor_set(v_reuseFailAlloc_4617_, 33, v_O_4606_);
lean_ctor_set(v_reuseFailAlloc_4617_, 34, v_X_4607_);
lean_ctor_set(v_reuseFailAlloc_4617_, 35, v_x_4608_);
lean_ctor_set(v_reuseFailAlloc_4617_, 36, v_Z_4609_);
v___x_4616_ = v_reuseFailAlloc_4617_;
goto v_reusejp_4615_;
}
v_reusejp_4615_:
{
return v___x_4616_;
}
}
}
}
}
case 2:
{
lean_object* v___x_4624_; uint8_t v_isShared_4625_; uint8_t v_isSharedCheck_4673_; 
v_isSharedCheck_4673_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_4673_ == 0)
{
lean_object* v_unused_4674_; 
v_unused_4674_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_4674_);
v___x_4624_ = v_modifier_4524_;
v_isShared_4625_ = v_isSharedCheck_4673_;
goto v_resetjp_4623_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_4624_ = lean_box(0);
v_isShared_4625_ = v_isSharedCheck_4673_;
goto v_resetjp_4623_;
}
v_resetjp_4623_:
{
lean_object* v_G_4626_; lean_object* v_u_4627_; lean_object* v_Y_4628_; lean_object* v_D_4629_; lean_object* v_M_4630_; lean_object* v_L_4631_; lean_object* v_d_4632_; lean_object* v_Q_4633_; lean_object* v_q_4634_; lean_object* v_w_4635_; lean_object* v_W_4636_; lean_object* v_E_4637_; lean_object* v_e_4638_; lean_object* v_c_4639_; lean_object* v_F_4640_; lean_object* v_a_4641_; lean_object* v_b_4642_; lean_object* v_B_4643_; lean_object* v_h_4644_; lean_object* v_K_4645_; lean_object* v_k_4646_; lean_object* v_H_4647_; lean_object* v_m_4648_; lean_object* v_s_4649_; lean_object* v_S_4650_; lean_object* v_A_4651_; lean_object* v_n_4652_; lean_object* v_N_4653_; lean_object* v_V_4654_; lean_object* v_z_4655_; lean_object* v_zabbrev_4656_; lean_object* v_v_4657_; lean_object* v_O_4658_; lean_object* v_X_4659_; lean_object* v_x_4660_; lean_object* v_Z_4661_; lean_object* v___x_4663_; uint8_t v_isShared_4664_; uint8_t v_isSharedCheck_4671_; 
v_G_4626_ = lean_ctor_get(v_date_4523_, 0);
v_u_4627_ = lean_ctor_get(v_date_4523_, 2);
v_Y_4628_ = lean_ctor_get(v_date_4523_, 3);
v_D_4629_ = lean_ctor_get(v_date_4523_, 4);
v_M_4630_ = lean_ctor_get(v_date_4523_, 5);
v_L_4631_ = lean_ctor_get(v_date_4523_, 6);
v_d_4632_ = lean_ctor_get(v_date_4523_, 7);
v_Q_4633_ = lean_ctor_get(v_date_4523_, 8);
v_q_4634_ = lean_ctor_get(v_date_4523_, 9);
v_w_4635_ = lean_ctor_get(v_date_4523_, 10);
v_W_4636_ = lean_ctor_get(v_date_4523_, 11);
v_E_4637_ = lean_ctor_get(v_date_4523_, 12);
v_e_4638_ = lean_ctor_get(v_date_4523_, 13);
v_c_4639_ = lean_ctor_get(v_date_4523_, 14);
v_F_4640_ = lean_ctor_get(v_date_4523_, 15);
v_a_4641_ = lean_ctor_get(v_date_4523_, 16);
v_b_4642_ = lean_ctor_get(v_date_4523_, 17);
v_B_4643_ = lean_ctor_get(v_date_4523_, 18);
v_h_4644_ = lean_ctor_get(v_date_4523_, 19);
v_K_4645_ = lean_ctor_get(v_date_4523_, 20);
v_k_4646_ = lean_ctor_get(v_date_4523_, 21);
v_H_4647_ = lean_ctor_get(v_date_4523_, 22);
v_m_4648_ = lean_ctor_get(v_date_4523_, 23);
v_s_4649_ = lean_ctor_get(v_date_4523_, 24);
v_S_4650_ = lean_ctor_get(v_date_4523_, 25);
v_A_4651_ = lean_ctor_get(v_date_4523_, 26);
v_n_4652_ = lean_ctor_get(v_date_4523_, 27);
v_N_4653_ = lean_ctor_get(v_date_4523_, 28);
v_V_4654_ = lean_ctor_get(v_date_4523_, 29);
v_z_4655_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_4656_ = lean_ctor_get(v_date_4523_, 31);
v_v_4657_ = lean_ctor_get(v_date_4523_, 32);
v_O_4658_ = lean_ctor_get(v_date_4523_, 33);
v_X_4659_ = lean_ctor_get(v_date_4523_, 34);
v_x_4660_ = lean_ctor_get(v_date_4523_, 35);
v_Z_4661_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_4671_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_4671_ == 0)
{
lean_object* v_unused_4672_; 
v_unused_4672_ = lean_ctor_get(v_date_4523_, 1);
lean_dec(v_unused_4672_);
v___x_4663_ = v_date_4523_;
v_isShared_4664_ = v_isSharedCheck_4671_;
goto v_resetjp_4662_;
}
else
{
lean_inc(v_Z_4661_);
lean_inc(v_x_4660_);
lean_inc(v_X_4659_);
lean_inc(v_O_4658_);
lean_inc(v_v_4657_);
lean_inc(v_zabbrev_4656_);
lean_inc(v_z_4655_);
lean_inc(v_V_4654_);
lean_inc(v_N_4653_);
lean_inc(v_n_4652_);
lean_inc(v_A_4651_);
lean_inc(v_S_4650_);
lean_inc(v_s_4649_);
lean_inc(v_m_4648_);
lean_inc(v_H_4647_);
lean_inc(v_k_4646_);
lean_inc(v_K_4645_);
lean_inc(v_h_4644_);
lean_inc(v_B_4643_);
lean_inc(v_b_4642_);
lean_inc(v_a_4641_);
lean_inc(v_F_4640_);
lean_inc(v_c_4639_);
lean_inc(v_e_4638_);
lean_inc(v_E_4637_);
lean_inc(v_W_4636_);
lean_inc(v_w_4635_);
lean_inc(v_q_4634_);
lean_inc(v_Q_4633_);
lean_inc(v_d_4632_);
lean_inc(v_L_4631_);
lean_inc(v_M_4630_);
lean_inc(v_D_4629_);
lean_inc(v_Y_4628_);
lean_inc(v_u_4627_);
lean_inc(v_G_4626_);
lean_dec(v_date_4523_);
v___x_4663_ = lean_box(0);
v_isShared_4664_ = v_isSharedCheck_4671_;
goto v_resetjp_4662_;
}
v_resetjp_4662_:
{
lean_object* v___x_4666_; 
if (v_isShared_4625_ == 0)
{
lean_ctor_set_tag(v___x_4624_, 1);
lean_ctor_set(v___x_4624_, 0, v_data_4525_);
v___x_4666_ = v___x_4624_;
goto v_reusejp_4665_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v_data_4525_);
v___x_4666_ = v_reuseFailAlloc_4670_;
goto v_reusejp_4665_;
}
v_reusejp_4665_:
{
lean_object* v___x_4668_; 
if (v_isShared_4664_ == 0)
{
lean_ctor_set(v___x_4663_, 1, v___x_4666_);
v___x_4668_ = v___x_4663_;
goto v_reusejp_4667_;
}
else
{
lean_object* v_reuseFailAlloc_4669_; 
v_reuseFailAlloc_4669_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4669_, 0, v_G_4626_);
lean_ctor_set(v_reuseFailAlloc_4669_, 1, v___x_4666_);
lean_ctor_set(v_reuseFailAlloc_4669_, 2, v_u_4627_);
lean_ctor_set(v_reuseFailAlloc_4669_, 3, v_Y_4628_);
lean_ctor_set(v_reuseFailAlloc_4669_, 4, v_D_4629_);
lean_ctor_set(v_reuseFailAlloc_4669_, 5, v_M_4630_);
lean_ctor_set(v_reuseFailAlloc_4669_, 6, v_L_4631_);
lean_ctor_set(v_reuseFailAlloc_4669_, 7, v_d_4632_);
lean_ctor_set(v_reuseFailAlloc_4669_, 8, v_Q_4633_);
lean_ctor_set(v_reuseFailAlloc_4669_, 9, v_q_4634_);
lean_ctor_set(v_reuseFailAlloc_4669_, 10, v_w_4635_);
lean_ctor_set(v_reuseFailAlloc_4669_, 11, v_W_4636_);
lean_ctor_set(v_reuseFailAlloc_4669_, 12, v_E_4637_);
lean_ctor_set(v_reuseFailAlloc_4669_, 13, v_e_4638_);
lean_ctor_set(v_reuseFailAlloc_4669_, 14, v_c_4639_);
lean_ctor_set(v_reuseFailAlloc_4669_, 15, v_F_4640_);
lean_ctor_set(v_reuseFailAlloc_4669_, 16, v_a_4641_);
lean_ctor_set(v_reuseFailAlloc_4669_, 17, v_b_4642_);
lean_ctor_set(v_reuseFailAlloc_4669_, 18, v_B_4643_);
lean_ctor_set(v_reuseFailAlloc_4669_, 19, v_h_4644_);
lean_ctor_set(v_reuseFailAlloc_4669_, 20, v_K_4645_);
lean_ctor_set(v_reuseFailAlloc_4669_, 21, v_k_4646_);
lean_ctor_set(v_reuseFailAlloc_4669_, 22, v_H_4647_);
lean_ctor_set(v_reuseFailAlloc_4669_, 23, v_m_4648_);
lean_ctor_set(v_reuseFailAlloc_4669_, 24, v_s_4649_);
lean_ctor_set(v_reuseFailAlloc_4669_, 25, v_S_4650_);
lean_ctor_set(v_reuseFailAlloc_4669_, 26, v_A_4651_);
lean_ctor_set(v_reuseFailAlloc_4669_, 27, v_n_4652_);
lean_ctor_set(v_reuseFailAlloc_4669_, 28, v_N_4653_);
lean_ctor_set(v_reuseFailAlloc_4669_, 29, v_V_4654_);
lean_ctor_set(v_reuseFailAlloc_4669_, 30, v_z_4655_);
lean_ctor_set(v_reuseFailAlloc_4669_, 31, v_zabbrev_4656_);
lean_ctor_set(v_reuseFailAlloc_4669_, 32, v_v_4657_);
lean_ctor_set(v_reuseFailAlloc_4669_, 33, v_O_4658_);
lean_ctor_set(v_reuseFailAlloc_4669_, 34, v_X_4659_);
lean_ctor_set(v_reuseFailAlloc_4669_, 35, v_x_4660_);
lean_ctor_set(v_reuseFailAlloc_4669_, 36, v_Z_4661_);
v___x_4668_ = v_reuseFailAlloc_4669_;
goto v_reusejp_4667_;
}
v_reusejp_4667_:
{
return v___x_4668_;
}
}
}
}
}
case 3:
{
lean_object* v___x_4676_; uint8_t v_isShared_4677_; uint8_t v_isSharedCheck_4725_; 
v_isSharedCheck_4725_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_4725_ == 0)
{
lean_object* v_unused_4726_; 
v_unused_4726_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_4726_);
v___x_4676_ = v_modifier_4524_;
v_isShared_4677_ = v_isSharedCheck_4725_;
goto v_resetjp_4675_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_4676_ = lean_box(0);
v_isShared_4677_ = v_isSharedCheck_4725_;
goto v_resetjp_4675_;
}
v_resetjp_4675_:
{
lean_object* v_G_4678_; lean_object* v_y_4679_; lean_object* v_u_4680_; lean_object* v_Y_4681_; lean_object* v_M_4682_; lean_object* v_L_4683_; lean_object* v_d_4684_; lean_object* v_Q_4685_; lean_object* v_q_4686_; lean_object* v_w_4687_; lean_object* v_W_4688_; lean_object* v_E_4689_; lean_object* v_e_4690_; lean_object* v_c_4691_; lean_object* v_F_4692_; lean_object* v_a_4693_; lean_object* v_b_4694_; lean_object* v_B_4695_; lean_object* v_h_4696_; lean_object* v_K_4697_; lean_object* v_k_4698_; lean_object* v_H_4699_; lean_object* v_m_4700_; lean_object* v_s_4701_; lean_object* v_S_4702_; lean_object* v_A_4703_; lean_object* v_n_4704_; lean_object* v_N_4705_; lean_object* v_V_4706_; lean_object* v_z_4707_; lean_object* v_zabbrev_4708_; lean_object* v_v_4709_; lean_object* v_O_4710_; lean_object* v_X_4711_; lean_object* v_x_4712_; lean_object* v_Z_4713_; lean_object* v___x_4715_; uint8_t v_isShared_4716_; uint8_t v_isSharedCheck_4723_; 
v_G_4678_ = lean_ctor_get(v_date_4523_, 0);
v_y_4679_ = lean_ctor_get(v_date_4523_, 1);
v_u_4680_ = lean_ctor_get(v_date_4523_, 2);
v_Y_4681_ = lean_ctor_get(v_date_4523_, 3);
v_M_4682_ = lean_ctor_get(v_date_4523_, 5);
v_L_4683_ = lean_ctor_get(v_date_4523_, 6);
v_d_4684_ = lean_ctor_get(v_date_4523_, 7);
v_Q_4685_ = lean_ctor_get(v_date_4523_, 8);
v_q_4686_ = lean_ctor_get(v_date_4523_, 9);
v_w_4687_ = lean_ctor_get(v_date_4523_, 10);
v_W_4688_ = lean_ctor_get(v_date_4523_, 11);
v_E_4689_ = lean_ctor_get(v_date_4523_, 12);
v_e_4690_ = lean_ctor_get(v_date_4523_, 13);
v_c_4691_ = lean_ctor_get(v_date_4523_, 14);
v_F_4692_ = lean_ctor_get(v_date_4523_, 15);
v_a_4693_ = lean_ctor_get(v_date_4523_, 16);
v_b_4694_ = lean_ctor_get(v_date_4523_, 17);
v_B_4695_ = lean_ctor_get(v_date_4523_, 18);
v_h_4696_ = lean_ctor_get(v_date_4523_, 19);
v_K_4697_ = lean_ctor_get(v_date_4523_, 20);
v_k_4698_ = lean_ctor_get(v_date_4523_, 21);
v_H_4699_ = lean_ctor_get(v_date_4523_, 22);
v_m_4700_ = lean_ctor_get(v_date_4523_, 23);
v_s_4701_ = lean_ctor_get(v_date_4523_, 24);
v_S_4702_ = lean_ctor_get(v_date_4523_, 25);
v_A_4703_ = lean_ctor_get(v_date_4523_, 26);
v_n_4704_ = lean_ctor_get(v_date_4523_, 27);
v_N_4705_ = lean_ctor_get(v_date_4523_, 28);
v_V_4706_ = lean_ctor_get(v_date_4523_, 29);
v_z_4707_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_4708_ = lean_ctor_get(v_date_4523_, 31);
v_v_4709_ = lean_ctor_get(v_date_4523_, 32);
v_O_4710_ = lean_ctor_get(v_date_4523_, 33);
v_X_4711_ = lean_ctor_get(v_date_4523_, 34);
v_x_4712_ = lean_ctor_get(v_date_4523_, 35);
v_Z_4713_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_4723_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_4723_ == 0)
{
lean_object* v_unused_4724_; 
v_unused_4724_ = lean_ctor_get(v_date_4523_, 4);
lean_dec(v_unused_4724_);
v___x_4715_ = v_date_4523_;
v_isShared_4716_ = v_isSharedCheck_4723_;
goto v_resetjp_4714_;
}
else
{
lean_inc(v_Z_4713_);
lean_inc(v_x_4712_);
lean_inc(v_X_4711_);
lean_inc(v_O_4710_);
lean_inc(v_v_4709_);
lean_inc(v_zabbrev_4708_);
lean_inc(v_z_4707_);
lean_inc(v_V_4706_);
lean_inc(v_N_4705_);
lean_inc(v_n_4704_);
lean_inc(v_A_4703_);
lean_inc(v_S_4702_);
lean_inc(v_s_4701_);
lean_inc(v_m_4700_);
lean_inc(v_H_4699_);
lean_inc(v_k_4698_);
lean_inc(v_K_4697_);
lean_inc(v_h_4696_);
lean_inc(v_B_4695_);
lean_inc(v_b_4694_);
lean_inc(v_a_4693_);
lean_inc(v_F_4692_);
lean_inc(v_c_4691_);
lean_inc(v_e_4690_);
lean_inc(v_E_4689_);
lean_inc(v_W_4688_);
lean_inc(v_w_4687_);
lean_inc(v_q_4686_);
lean_inc(v_Q_4685_);
lean_inc(v_d_4684_);
lean_inc(v_L_4683_);
lean_inc(v_M_4682_);
lean_inc(v_Y_4681_);
lean_inc(v_u_4680_);
lean_inc(v_y_4679_);
lean_inc(v_G_4678_);
lean_dec(v_date_4523_);
v___x_4715_ = lean_box(0);
v_isShared_4716_ = v_isSharedCheck_4723_;
goto v_resetjp_4714_;
}
v_resetjp_4714_:
{
lean_object* v___x_4718_; 
if (v_isShared_4677_ == 0)
{
lean_ctor_set_tag(v___x_4676_, 1);
lean_ctor_set(v___x_4676_, 0, v_data_4525_);
v___x_4718_ = v___x_4676_;
goto v_reusejp_4717_;
}
else
{
lean_object* v_reuseFailAlloc_4722_; 
v_reuseFailAlloc_4722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4722_, 0, v_data_4525_);
v___x_4718_ = v_reuseFailAlloc_4722_;
goto v_reusejp_4717_;
}
v_reusejp_4717_:
{
lean_object* v___x_4720_; 
if (v_isShared_4716_ == 0)
{
lean_ctor_set(v___x_4715_, 4, v___x_4718_);
v___x_4720_ = v___x_4715_;
goto v_reusejp_4719_;
}
else
{
lean_object* v_reuseFailAlloc_4721_; 
v_reuseFailAlloc_4721_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4721_, 0, v_G_4678_);
lean_ctor_set(v_reuseFailAlloc_4721_, 1, v_y_4679_);
lean_ctor_set(v_reuseFailAlloc_4721_, 2, v_u_4680_);
lean_ctor_set(v_reuseFailAlloc_4721_, 3, v_Y_4681_);
lean_ctor_set(v_reuseFailAlloc_4721_, 4, v___x_4718_);
lean_ctor_set(v_reuseFailAlloc_4721_, 5, v_M_4682_);
lean_ctor_set(v_reuseFailAlloc_4721_, 6, v_L_4683_);
lean_ctor_set(v_reuseFailAlloc_4721_, 7, v_d_4684_);
lean_ctor_set(v_reuseFailAlloc_4721_, 8, v_Q_4685_);
lean_ctor_set(v_reuseFailAlloc_4721_, 9, v_q_4686_);
lean_ctor_set(v_reuseFailAlloc_4721_, 10, v_w_4687_);
lean_ctor_set(v_reuseFailAlloc_4721_, 11, v_W_4688_);
lean_ctor_set(v_reuseFailAlloc_4721_, 12, v_E_4689_);
lean_ctor_set(v_reuseFailAlloc_4721_, 13, v_e_4690_);
lean_ctor_set(v_reuseFailAlloc_4721_, 14, v_c_4691_);
lean_ctor_set(v_reuseFailAlloc_4721_, 15, v_F_4692_);
lean_ctor_set(v_reuseFailAlloc_4721_, 16, v_a_4693_);
lean_ctor_set(v_reuseFailAlloc_4721_, 17, v_b_4694_);
lean_ctor_set(v_reuseFailAlloc_4721_, 18, v_B_4695_);
lean_ctor_set(v_reuseFailAlloc_4721_, 19, v_h_4696_);
lean_ctor_set(v_reuseFailAlloc_4721_, 20, v_K_4697_);
lean_ctor_set(v_reuseFailAlloc_4721_, 21, v_k_4698_);
lean_ctor_set(v_reuseFailAlloc_4721_, 22, v_H_4699_);
lean_ctor_set(v_reuseFailAlloc_4721_, 23, v_m_4700_);
lean_ctor_set(v_reuseFailAlloc_4721_, 24, v_s_4701_);
lean_ctor_set(v_reuseFailAlloc_4721_, 25, v_S_4702_);
lean_ctor_set(v_reuseFailAlloc_4721_, 26, v_A_4703_);
lean_ctor_set(v_reuseFailAlloc_4721_, 27, v_n_4704_);
lean_ctor_set(v_reuseFailAlloc_4721_, 28, v_N_4705_);
lean_ctor_set(v_reuseFailAlloc_4721_, 29, v_V_4706_);
lean_ctor_set(v_reuseFailAlloc_4721_, 30, v_z_4707_);
lean_ctor_set(v_reuseFailAlloc_4721_, 31, v_zabbrev_4708_);
lean_ctor_set(v_reuseFailAlloc_4721_, 32, v_v_4709_);
lean_ctor_set(v_reuseFailAlloc_4721_, 33, v_O_4710_);
lean_ctor_set(v_reuseFailAlloc_4721_, 34, v_X_4711_);
lean_ctor_set(v_reuseFailAlloc_4721_, 35, v_x_4712_);
lean_ctor_set(v_reuseFailAlloc_4721_, 36, v_Z_4713_);
v___x_4720_ = v_reuseFailAlloc_4721_;
goto v_reusejp_4719_;
}
v_reusejp_4719_:
{
return v___x_4720_;
}
}
}
}
}
case 4:
{
lean_object* v___x_4728_; uint8_t v_isShared_4729_; uint8_t v_isSharedCheck_4777_; 
v_isSharedCheck_4777_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_4777_ == 0)
{
lean_object* v_unused_4778_; 
v_unused_4778_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_4778_);
v___x_4728_ = v_modifier_4524_;
v_isShared_4729_ = v_isSharedCheck_4777_;
goto v_resetjp_4727_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_4728_ = lean_box(0);
v_isShared_4729_ = v_isSharedCheck_4777_;
goto v_resetjp_4727_;
}
v_resetjp_4727_:
{
lean_object* v_G_4730_; lean_object* v_y_4731_; lean_object* v_u_4732_; lean_object* v_Y_4733_; lean_object* v_D_4734_; lean_object* v_L_4735_; lean_object* v_d_4736_; lean_object* v_Q_4737_; lean_object* v_q_4738_; lean_object* v_w_4739_; lean_object* v_W_4740_; lean_object* v_E_4741_; lean_object* v_e_4742_; lean_object* v_c_4743_; lean_object* v_F_4744_; lean_object* v_a_4745_; lean_object* v_b_4746_; lean_object* v_B_4747_; lean_object* v_h_4748_; lean_object* v_K_4749_; lean_object* v_k_4750_; lean_object* v_H_4751_; lean_object* v_m_4752_; lean_object* v_s_4753_; lean_object* v_S_4754_; lean_object* v_A_4755_; lean_object* v_n_4756_; lean_object* v_N_4757_; lean_object* v_V_4758_; lean_object* v_z_4759_; lean_object* v_zabbrev_4760_; lean_object* v_v_4761_; lean_object* v_O_4762_; lean_object* v_X_4763_; lean_object* v_x_4764_; lean_object* v_Z_4765_; lean_object* v___x_4767_; uint8_t v_isShared_4768_; uint8_t v_isSharedCheck_4775_; 
v_G_4730_ = lean_ctor_get(v_date_4523_, 0);
v_y_4731_ = lean_ctor_get(v_date_4523_, 1);
v_u_4732_ = lean_ctor_get(v_date_4523_, 2);
v_Y_4733_ = lean_ctor_get(v_date_4523_, 3);
v_D_4734_ = lean_ctor_get(v_date_4523_, 4);
v_L_4735_ = lean_ctor_get(v_date_4523_, 6);
v_d_4736_ = lean_ctor_get(v_date_4523_, 7);
v_Q_4737_ = lean_ctor_get(v_date_4523_, 8);
v_q_4738_ = lean_ctor_get(v_date_4523_, 9);
v_w_4739_ = lean_ctor_get(v_date_4523_, 10);
v_W_4740_ = lean_ctor_get(v_date_4523_, 11);
v_E_4741_ = lean_ctor_get(v_date_4523_, 12);
v_e_4742_ = lean_ctor_get(v_date_4523_, 13);
v_c_4743_ = lean_ctor_get(v_date_4523_, 14);
v_F_4744_ = lean_ctor_get(v_date_4523_, 15);
v_a_4745_ = lean_ctor_get(v_date_4523_, 16);
v_b_4746_ = lean_ctor_get(v_date_4523_, 17);
v_B_4747_ = lean_ctor_get(v_date_4523_, 18);
v_h_4748_ = lean_ctor_get(v_date_4523_, 19);
v_K_4749_ = lean_ctor_get(v_date_4523_, 20);
v_k_4750_ = lean_ctor_get(v_date_4523_, 21);
v_H_4751_ = lean_ctor_get(v_date_4523_, 22);
v_m_4752_ = lean_ctor_get(v_date_4523_, 23);
v_s_4753_ = lean_ctor_get(v_date_4523_, 24);
v_S_4754_ = lean_ctor_get(v_date_4523_, 25);
v_A_4755_ = lean_ctor_get(v_date_4523_, 26);
v_n_4756_ = lean_ctor_get(v_date_4523_, 27);
v_N_4757_ = lean_ctor_get(v_date_4523_, 28);
v_V_4758_ = lean_ctor_get(v_date_4523_, 29);
v_z_4759_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_4760_ = lean_ctor_get(v_date_4523_, 31);
v_v_4761_ = lean_ctor_get(v_date_4523_, 32);
v_O_4762_ = lean_ctor_get(v_date_4523_, 33);
v_X_4763_ = lean_ctor_get(v_date_4523_, 34);
v_x_4764_ = lean_ctor_get(v_date_4523_, 35);
v_Z_4765_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_4775_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_4775_ == 0)
{
lean_object* v_unused_4776_; 
v_unused_4776_ = lean_ctor_get(v_date_4523_, 5);
lean_dec(v_unused_4776_);
v___x_4767_ = v_date_4523_;
v_isShared_4768_ = v_isSharedCheck_4775_;
goto v_resetjp_4766_;
}
else
{
lean_inc(v_Z_4765_);
lean_inc(v_x_4764_);
lean_inc(v_X_4763_);
lean_inc(v_O_4762_);
lean_inc(v_v_4761_);
lean_inc(v_zabbrev_4760_);
lean_inc(v_z_4759_);
lean_inc(v_V_4758_);
lean_inc(v_N_4757_);
lean_inc(v_n_4756_);
lean_inc(v_A_4755_);
lean_inc(v_S_4754_);
lean_inc(v_s_4753_);
lean_inc(v_m_4752_);
lean_inc(v_H_4751_);
lean_inc(v_k_4750_);
lean_inc(v_K_4749_);
lean_inc(v_h_4748_);
lean_inc(v_B_4747_);
lean_inc(v_b_4746_);
lean_inc(v_a_4745_);
lean_inc(v_F_4744_);
lean_inc(v_c_4743_);
lean_inc(v_e_4742_);
lean_inc(v_E_4741_);
lean_inc(v_W_4740_);
lean_inc(v_w_4739_);
lean_inc(v_q_4738_);
lean_inc(v_Q_4737_);
lean_inc(v_d_4736_);
lean_inc(v_L_4735_);
lean_inc(v_D_4734_);
lean_inc(v_Y_4733_);
lean_inc(v_u_4732_);
lean_inc(v_y_4731_);
lean_inc(v_G_4730_);
lean_dec(v_date_4523_);
v___x_4767_ = lean_box(0);
v_isShared_4768_ = v_isSharedCheck_4775_;
goto v_resetjp_4766_;
}
v_resetjp_4766_:
{
lean_object* v___x_4770_; 
if (v_isShared_4729_ == 0)
{
lean_ctor_set_tag(v___x_4728_, 1);
lean_ctor_set(v___x_4728_, 0, v_data_4525_);
v___x_4770_ = v___x_4728_;
goto v_reusejp_4769_;
}
else
{
lean_object* v_reuseFailAlloc_4774_; 
v_reuseFailAlloc_4774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4774_, 0, v_data_4525_);
v___x_4770_ = v_reuseFailAlloc_4774_;
goto v_reusejp_4769_;
}
v_reusejp_4769_:
{
lean_object* v___x_4772_; 
if (v_isShared_4768_ == 0)
{
lean_ctor_set(v___x_4767_, 5, v___x_4770_);
v___x_4772_ = v___x_4767_;
goto v_reusejp_4771_;
}
else
{
lean_object* v_reuseFailAlloc_4773_; 
v_reuseFailAlloc_4773_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4773_, 0, v_G_4730_);
lean_ctor_set(v_reuseFailAlloc_4773_, 1, v_y_4731_);
lean_ctor_set(v_reuseFailAlloc_4773_, 2, v_u_4732_);
lean_ctor_set(v_reuseFailAlloc_4773_, 3, v_Y_4733_);
lean_ctor_set(v_reuseFailAlloc_4773_, 4, v_D_4734_);
lean_ctor_set(v_reuseFailAlloc_4773_, 5, v___x_4770_);
lean_ctor_set(v_reuseFailAlloc_4773_, 6, v_L_4735_);
lean_ctor_set(v_reuseFailAlloc_4773_, 7, v_d_4736_);
lean_ctor_set(v_reuseFailAlloc_4773_, 8, v_Q_4737_);
lean_ctor_set(v_reuseFailAlloc_4773_, 9, v_q_4738_);
lean_ctor_set(v_reuseFailAlloc_4773_, 10, v_w_4739_);
lean_ctor_set(v_reuseFailAlloc_4773_, 11, v_W_4740_);
lean_ctor_set(v_reuseFailAlloc_4773_, 12, v_E_4741_);
lean_ctor_set(v_reuseFailAlloc_4773_, 13, v_e_4742_);
lean_ctor_set(v_reuseFailAlloc_4773_, 14, v_c_4743_);
lean_ctor_set(v_reuseFailAlloc_4773_, 15, v_F_4744_);
lean_ctor_set(v_reuseFailAlloc_4773_, 16, v_a_4745_);
lean_ctor_set(v_reuseFailAlloc_4773_, 17, v_b_4746_);
lean_ctor_set(v_reuseFailAlloc_4773_, 18, v_B_4747_);
lean_ctor_set(v_reuseFailAlloc_4773_, 19, v_h_4748_);
lean_ctor_set(v_reuseFailAlloc_4773_, 20, v_K_4749_);
lean_ctor_set(v_reuseFailAlloc_4773_, 21, v_k_4750_);
lean_ctor_set(v_reuseFailAlloc_4773_, 22, v_H_4751_);
lean_ctor_set(v_reuseFailAlloc_4773_, 23, v_m_4752_);
lean_ctor_set(v_reuseFailAlloc_4773_, 24, v_s_4753_);
lean_ctor_set(v_reuseFailAlloc_4773_, 25, v_S_4754_);
lean_ctor_set(v_reuseFailAlloc_4773_, 26, v_A_4755_);
lean_ctor_set(v_reuseFailAlloc_4773_, 27, v_n_4756_);
lean_ctor_set(v_reuseFailAlloc_4773_, 28, v_N_4757_);
lean_ctor_set(v_reuseFailAlloc_4773_, 29, v_V_4758_);
lean_ctor_set(v_reuseFailAlloc_4773_, 30, v_z_4759_);
lean_ctor_set(v_reuseFailAlloc_4773_, 31, v_zabbrev_4760_);
lean_ctor_set(v_reuseFailAlloc_4773_, 32, v_v_4761_);
lean_ctor_set(v_reuseFailAlloc_4773_, 33, v_O_4762_);
lean_ctor_set(v_reuseFailAlloc_4773_, 34, v_X_4763_);
lean_ctor_set(v_reuseFailAlloc_4773_, 35, v_x_4764_);
lean_ctor_set(v_reuseFailAlloc_4773_, 36, v_Z_4765_);
v___x_4772_ = v_reuseFailAlloc_4773_;
goto v_reusejp_4771_;
}
v_reusejp_4771_:
{
return v___x_4772_;
}
}
}
}
}
case 5:
{
lean_object* v___x_4780_; uint8_t v_isShared_4781_; uint8_t v_isSharedCheck_4829_; 
v_isSharedCheck_4829_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_4829_ == 0)
{
lean_object* v_unused_4830_; 
v_unused_4830_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_4830_);
v___x_4780_ = v_modifier_4524_;
v_isShared_4781_ = v_isSharedCheck_4829_;
goto v_resetjp_4779_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_4780_ = lean_box(0);
v_isShared_4781_ = v_isSharedCheck_4829_;
goto v_resetjp_4779_;
}
v_resetjp_4779_:
{
lean_object* v_G_4782_; lean_object* v_y_4783_; lean_object* v_u_4784_; lean_object* v_Y_4785_; lean_object* v_D_4786_; lean_object* v_M_4787_; lean_object* v_d_4788_; lean_object* v_Q_4789_; lean_object* v_q_4790_; lean_object* v_w_4791_; lean_object* v_W_4792_; lean_object* v_E_4793_; lean_object* v_e_4794_; lean_object* v_c_4795_; lean_object* v_F_4796_; lean_object* v_a_4797_; lean_object* v_b_4798_; lean_object* v_B_4799_; lean_object* v_h_4800_; lean_object* v_K_4801_; lean_object* v_k_4802_; lean_object* v_H_4803_; lean_object* v_m_4804_; lean_object* v_s_4805_; lean_object* v_S_4806_; lean_object* v_A_4807_; lean_object* v_n_4808_; lean_object* v_N_4809_; lean_object* v_V_4810_; lean_object* v_z_4811_; lean_object* v_zabbrev_4812_; lean_object* v_v_4813_; lean_object* v_O_4814_; lean_object* v_X_4815_; lean_object* v_x_4816_; lean_object* v_Z_4817_; lean_object* v___x_4819_; uint8_t v_isShared_4820_; uint8_t v_isSharedCheck_4827_; 
v_G_4782_ = lean_ctor_get(v_date_4523_, 0);
v_y_4783_ = lean_ctor_get(v_date_4523_, 1);
v_u_4784_ = lean_ctor_get(v_date_4523_, 2);
v_Y_4785_ = lean_ctor_get(v_date_4523_, 3);
v_D_4786_ = lean_ctor_get(v_date_4523_, 4);
v_M_4787_ = lean_ctor_get(v_date_4523_, 5);
v_d_4788_ = lean_ctor_get(v_date_4523_, 7);
v_Q_4789_ = lean_ctor_get(v_date_4523_, 8);
v_q_4790_ = lean_ctor_get(v_date_4523_, 9);
v_w_4791_ = lean_ctor_get(v_date_4523_, 10);
v_W_4792_ = lean_ctor_get(v_date_4523_, 11);
v_E_4793_ = lean_ctor_get(v_date_4523_, 12);
v_e_4794_ = lean_ctor_get(v_date_4523_, 13);
v_c_4795_ = lean_ctor_get(v_date_4523_, 14);
v_F_4796_ = lean_ctor_get(v_date_4523_, 15);
v_a_4797_ = lean_ctor_get(v_date_4523_, 16);
v_b_4798_ = lean_ctor_get(v_date_4523_, 17);
v_B_4799_ = lean_ctor_get(v_date_4523_, 18);
v_h_4800_ = lean_ctor_get(v_date_4523_, 19);
v_K_4801_ = lean_ctor_get(v_date_4523_, 20);
v_k_4802_ = lean_ctor_get(v_date_4523_, 21);
v_H_4803_ = lean_ctor_get(v_date_4523_, 22);
v_m_4804_ = lean_ctor_get(v_date_4523_, 23);
v_s_4805_ = lean_ctor_get(v_date_4523_, 24);
v_S_4806_ = lean_ctor_get(v_date_4523_, 25);
v_A_4807_ = lean_ctor_get(v_date_4523_, 26);
v_n_4808_ = lean_ctor_get(v_date_4523_, 27);
v_N_4809_ = lean_ctor_get(v_date_4523_, 28);
v_V_4810_ = lean_ctor_get(v_date_4523_, 29);
v_z_4811_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_4812_ = lean_ctor_get(v_date_4523_, 31);
v_v_4813_ = lean_ctor_get(v_date_4523_, 32);
v_O_4814_ = lean_ctor_get(v_date_4523_, 33);
v_X_4815_ = lean_ctor_get(v_date_4523_, 34);
v_x_4816_ = lean_ctor_get(v_date_4523_, 35);
v_Z_4817_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_4827_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_4827_ == 0)
{
lean_object* v_unused_4828_; 
v_unused_4828_ = lean_ctor_get(v_date_4523_, 6);
lean_dec(v_unused_4828_);
v___x_4819_ = v_date_4523_;
v_isShared_4820_ = v_isSharedCheck_4827_;
goto v_resetjp_4818_;
}
else
{
lean_inc(v_Z_4817_);
lean_inc(v_x_4816_);
lean_inc(v_X_4815_);
lean_inc(v_O_4814_);
lean_inc(v_v_4813_);
lean_inc(v_zabbrev_4812_);
lean_inc(v_z_4811_);
lean_inc(v_V_4810_);
lean_inc(v_N_4809_);
lean_inc(v_n_4808_);
lean_inc(v_A_4807_);
lean_inc(v_S_4806_);
lean_inc(v_s_4805_);
lean_inc(v_m_4804_);
lean_inc(v_H_4803_);
lean_inc(v_k_4802_);
lean_inc(v_K_4801_);
lean_inc(v_h_4800_);
lean_inc(v_B_4799_);
lean_inc(v_b_4798_);
lean_inc(v_a_4797_);
lean_inc(v_F_4796_);
lean_inc(v_c_4795_);
lean_inc(v_e_4794_);
lean_inc(v_E_4793_);
lean_inc(v_W_4792_);
lean_inc(v_w_4791_);
lean_inc(v_q_4790_);
lean_inc(v_Q_4789_);
lean_inc(v_d_4788_);
lean_inc(v_M_4787_);
lean_inc(v_D_4786_);
lean_inc(v_Y_4785_);
lean_inc(v_u_4784_);
lean_inc(v_y_4783_);
lean_inc(v_G_4782_);
lean_dec(v_date_4523_);
v___x_4819_ = lean_box(0);
v_isShared_4820_ = v_isSharedCheck_4827_;
goto v_resetjp_4818_;
}
v_resetjp_4818_:
{
lean_object* v___x_4822_; 
if (v_isShared_4781_ == 0)
{
lean_ctor_set_tag(v___x_4780_, 1);
lean_ctor_set(v___x_4780_, 0, v_data_4525_);
v___x_4822_ = v___x_4780_;
goto v_reusejp_4821_;
}
else
{
lean_object* v_reuseFailAlloc_4826_; 
v_reuseFailAlloc_4826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4826_, 0, v_data_4525_);
v___x_4822_ = v_reuseFailAlloc_4826_;
goto v_reusejp_4821_;
}
v_reusejp_4821_:
{
lean_object* v___x_4824_; 
if (v_isShared_4820_ == 0)
{
lean_ctor_set(v___x_4819_, 6, v___x_4822_);
v___x_4824_ = v___x_4819_;
goto v_reusejp_4823_;
}
else
{
lean_object* v_reuseFailAlloc_4825_; 
v_reuseFailAlloc_4825_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4825_, 0, v_G_4782_);
lean_ctor_set(v_reuseFailAlloc_4825_, 1, v_y_4783_);
lean_ctor_set(v_reuseFailAlloc_4825_, 2, v_u_4784_);
lean_ctor_set(v_reuseFailAlloc_4825_, 3, v_Y_4785_);
lean_ctor_set(v_reuseFailAlloc_4825_, 4, v_D_4786_);
lean_ctor_set(v_reuseFailAlloc_4825_, 5, v_M_4787_);
lean_ctor_set(v_reuseFailAlloc_4825_, 6, v___x_4822_);
lean_ctor_set(v_reuseFailAlloc_4825_, 7, v_d_4788_);
lean_ctor_set(v_reuseFailAlloc_4825_, 8, v_Q_4789_);
lean_ctor_set(v_reuseFailAlloc_4825_, 9, v_q_4790_);
lean_ctor_set(v_reuseFailAlloc_4825_, 10, v_w_4791_);
lean_ctor_set(v_reuseFailAlloc_4825_, 11, v_W_4792_);
lean_ctor_set(v_reuseFailAlloc_4825_, 12, v_E_4793_);
lean_ctor_set(v_reuseFailAlloc_4825_, 13, v_e_4794_);
lean_ctor_set(v_reuseFailAlloc_4825_, 14, v_c_4795_);
lean_ctor_set(v_reuseFailAlloc_4825_, 15, v_F_4796_);
lean_ctor_set(v_reuseFailAlloc_4825_, 16, v_a_4797_);
lean_ctor_set(v_reuseFailAlloc_4825_, 17, v_b_4798_);
lean_ctor_set(v_reuseFailAlloc_4825_, 18, v_B_4799_);
lean_ctor_set(v_reuseFailAlloc_4825_, 19, v_h_4800_);
lean_ctor_set(v_reuseFailAlloc_4825_, 20, v_K_4801_);
lean_ctor_set(v_reuseFailAlloc_4825_, 21, v_k_4802_);
lean_ctor_set(v_reuseFailAlloc_4825_, 22, v_H_4803_);
lean_ctor_set(v_reuseFailAlloc_4825_, 23, v_m_4804_);
lean_ctor_set(v_reuseFailAlloc_4825_, 24, v_s_4805_);
lean_ctor_set(v_reuseFailAlloc_4825_, 25, v_S_4806_);
lean_ctor_set(v_reuseFailAlloc_4825_, 26, v_A_4807_);
lean_ctor_set(v_reuseFailAlloc_4825_, 27, v_n_4808_);
lean_ctor_set(v_reuseFailAlloc_4825_, 28, v_N_4809_);
lean_ctor_set(v_reuseFailAlloc_4825_, 29, v_V_4810_);
lean_ctor_set(v_reuseFailAlloc_4825_, 30, v_z_4811_);
lean_ctor_set(v_reuseFailAlloc_4825_, 31, v_zabbrev_4812_);
lean_ctor_set(v_reuseFailAlloc_4825_, 32, v_v_4813_);
lean_ctor_set(v_reuseFailAlloc_4825_, 33, v_O_4814_);
lean_ctor_set(v_reuseFailAlloc_4825_, 34, v_X_4815_);
lean_ctor_set(v_reuseFailAlloc_4825_, 35, v_x_4816_);
lean_ctor_set(v_reuseFailAlloc_4825_, 36, v_Z_4817_);
v___x_4824_ = v_reuseFailAlloc_4825_;
goto v_reusejp_4823_;
}
v_reusejp_4823_:
{
return v___x_4824_;
}
}
}
}
}
case 6:
{
lean_object* v___x_4832_; uint8_t v_isShared_4833_; uint8_t v_isSharedCheck_4881_; 
v_isSharedCheck_4881_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_4881_ == 0)
{
lean_object* v_unused_4882_; 
v_unused_4882_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_4882_);
v___x_4832_ = v_modifier_4524_;
v_isShared_4833_ = v_isSharedCheck_4881_;
goto v_resetjp_4831_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_4832_ = lean_box(0);
v_isShared_4833_ = v_isSharedCheck_4881_;
goto v_resetjp_4831_;
}
v_resetjp_4831_:
{
lean_object* v_G_4834_; lean_object* v_y_4835_; lean_object* v_u_4836_; lean_object* v_Y_4837_; lean_object* v_D_4838_; lean_object* v_M_4839_; lean_object* v_L_4840_; lean_object* v_Q_4841_; lean_object* v_q_4842_; lean_object* v_w_4843_; lean_object* v_W_4844_; lean_object* v_E_4845_; lean_object* v_e_4846_; lean_object* v_c_4847_; lean_object* v_F_4848_; lean_object* v_a_4849_; lean_object* v_b_4850_; lean_object* v_B_4851_; lean_object* v_h_4852_; lean_object* v_K_4853_; lean_object* v_k_4854_; lean_object* v_H_4855_; lean_object* v_m_4856_; lean_object* v_s_4857_; lean_object* v_S_4858_; lean_object* v_A_4859_; lean_object* v_n_4860_; lean_object* v_N_4861_; lean_object* v_V_4862_; lean_object* v_z_4863_; lean_object* v_zabbrev_4864_; lean_object* v_v_4865_; lean_object* v_O_4866_; lean_object* v_X_4867_; lean_object* v_x_4868_; lean_object* v_Z_4869_; lean_object* v___x_4871_; uint8_t v_isShared_4872_; uint8_t v_isSharedCheck_4879_; 
v_G_4834_ = lean_ctor_get(v_date_4523_, 0);
v_y_4835_ = lean_ctor_get(v_date_4523_, 1);
v_u_4836_ = lean_ctor_get(v_date_4523_, 2);
v_Y_4837_ = lean_ctor_get(v_date_4523_, 3);
v_D_4838_ = lean_ctor_get(v_date_4523_, 4);
v_M_4839_ = lean_ctor_get(v_date_4523_, 5);
v_L_4840_ = lean_ctor_get(v_date_4523_, 6);
v_Q_4841_ = lean_ctor_get(v_date_4523_, 8);
v_q_4842_ = lean_ctor_get(v_date_4523_, 9);
v_w_4843_ = lean_ctor_get(v_date_4523_, 10);
v_W_4844_ = lean_ctor_get(v_date_4523_, 11);
v_E_4845_ = lean_ctor_get(v_date_4523_, 12);
v_e_4846_ = lean_ctor_get(v_date_4523_, 13);
v_c_4847_ = lean_ctor_get(v_date_4523_, 14);
v_F_4848_ = lean_ctor_get(v_date_4523_, 15);
v_a_4849_ = lean_ctor_get(v_date_4523_, 16);
v_b_4850_ = lean_ctor_get(v_date_4523_, 17);
v_B_4851_ = lean_ctor_get(v_date_4523_, 18);
v_h_4852_ = lean_ctor_get(v_date_4523_, 19);
v_K_4853_ = lean_ctor_get(v_date_4523_, 20);
v_k_4854_ = lean_ctor_get(v_date_4523_, 21);
v_H_4855_ = lean_ctor_get(v_date_4523_, 22);
v_m_4856_ = lean_ctor_get(v_date_4523_, 23);
v_s_4857_ = lean_ctor_get(v_date_4523_, 24);
v_S_4858_ = lean_ctor_get(v_date_4523_, 25);
v_A_4859_ = lean_ctor_get(v_date_4523_, 26);
v_n_4860_ = lean_ctor_get(v_date_4523_, 27);
v_N_4861_ = lean_ctor_get(v_date_4523_, 28);
v_V_4862_ = lean_ctor_get(v_date_4523_, 29);
v_z_4863_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_4864_ = lean_ctor_get(v_date_4523_, 31);
v_v_4865_ = lean_ctor_get(v_date_4523_, 32);
v_O_4866_ = lean_ctor_get(v_date_4523_, 33);
v_X_4867_ = lean_ctor_get(v_date_4523_, 34);
v_x_4868_ = lean_ctor_get(v_date_4523_, 35);
v_Z_4869_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_4879_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_4879_ == 0)
{
lean_object* v_unused_4880_; 
v_unused_4880_ = lean_ctor_get(v_date_4523_, 7);
lean_dec(v_unused_4880_);
v___x_4871_ = v_date_4523_;
v_isShared_4872_ = v_isSharedCheck_4879_;
goto v_resetjp_4870_;
}
else
{
lean_inc(v_Z_4869_);
lean_inc(v_x_4868_);
lean_inc(v_X_4867_);
lean_inc(v_O_4866_);
lean_inc(v_v_4865_);
lean_inc(v_zabbrev_4864_);
lean_inc(v_z_4863_);
lean_inc(v_V_4862_);
lean_inc(v_N_4861_);
lean_inc(v_n_4860_);
lean_inc(v_A_4859_);
lean_inc(v_S_4858_);
lean_inc(v_s_4857_);
lean_inc(v_m_4856_);
lean_inc(v_H_4855_);
lean_inc(v_k_4854_);
lean_inc(v_K_4853_);
lean_inc(v_h_4852_);
lean_inc(v_B_4851_);
lean_inc(v_b_4850_);
lean_inc(v_a_4849_);
lean_inc(v_F_4848_);
lean_inc(v_c_4847_);
lean_inc(v_e_4846_);
lean_inc(v_E_4845_);
lean_inc(v_W_4844_);
lean_inc(v_w_4843_);
lean_inc(v_q_4842_);
lean_inc(v_Q_4841_);
lean_inc(v_L_4840_);
lean_inc(v_M_4839_);
lean_inc(v_D_4838_);
lean_inc(v_Y_4837_);
lean_inc(v_u_4836_);
lean_inc(v_y_4835_);
lean_inc(v_G_4834_);
lean_dec(v_date_4523_);
v___x_4871_ = lean_box(0);
v_isShared_4872_ = v_isSharedCheck_4879_;
goto v_resetjp_4870_;
}
v_resetjp_4870_:
{
lean_object* v___x_4874_; 
if (v_isShared_4833_ == 0)
{
lean_ctor_set_tag(v___x_4832_, 1);
lean_ctor_set(v___x_4832_, 0, v_data_4525_);
v___x_4874_ = v___x_4832_;
goto v_reusejp_4873_;
}
else
{
lean_object* v_reuseFailAlloc_4878_; 
v_reuseFailAlloc_4878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4878_, 0, v_data_4525_);
v___x_4874_ = v_reuseFailAlloc_4878_;
goto v_reusejp_4873_;
}
v_reusejp_4873_:
{
lean_object* v___x_4876_; 
if (v_isShared_4872_ == 0)
{
lean_ctor_set(v___x_4871_, 7, v___x_4874_);
v___x_4876_ = v___x_4871_;
goto v_reusejp_4875_;
}
else
{
lean_object* v_reuseFailAlloc_4877_; 
v_reuseFailAlloc_4877_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4877_, 0, v_G_4834_);
lean_ctor_set(v_reuseFailAlloc_4877_, 1, v_y_4835_);
lean_ctor_set(v_reuseFailAlloc_4877_, 2, v_u_4836_);
lean_ctor_set(v_reuseFailAlloc_4877_, 3, v_Y_4837_);
lean_ctor_set(v_reuseFailAlloc_4877_, 4, v_D_4838_);
lean_ctor_set(v_reuseFailAlloc_4877_, 5, v_M_4839_);
lean_ctor_set(v_reuseFailAlloc_4877_, 6, v_L_4840_);
lean_ctor_set(v_reuseFailAlloc_4877_, 7, v___x_4874_);
lean_ctor_set(v_reuseFailAlloc_4877_, 8, v_Q_4841_);
lean_ctor_set(v_reuseFailAlloc_4877_, 9, v_q_4842_);
lean_ctor_set(v_reuseFailAlloc_4877_, 10, v_w_4843_);
lean_ctor_set(v_reuseFailAlloc_4877_, 11, v_W_4844_);
lean_ctor_set(v_reuseFailAlloc_4877_, 12, v_E_4845_);
lean_ctor_set(v_reuseFailAlloc_4877_, 13, v_e_4846_);
lean_ctor_set(v_reuseFailAlloc_4877_, 14, v_c_4847_);
lean_ctor_set(v_reuseFailAlloc_4877_, 15, v_F_4848_);
lean_ctor_set(v_reuseFailAlloc_4877_, 16, v_a_4849_);
lean_ctor_set(v_reuseFailAlloc_4877_, 17, v_b_4850_);
lean_ctor_set(v_reuseFailAlloc_4877_, 18, v_B_4851_);
lean_ctor_set(v_reuseFailAlloc_4877_, 19, v_h_4852_);
lean_ctor_set(v_reuseFailAlloc_4877_, 20, v_K_4853_);
lean_ctor_set(v_reuseFailAlloc_4877_, 21, v_k_4854_);
lean_ctor_set(v_reuseFailAlloc_4877_, 22, v_H_4855_);
lean_ctor_set(v_reuseFailAlloc_4877_, 23, v_m_4856_);
lean_ctor_set(v_reuseFailAlloc_4877_, 24, v_s_4857_);
lean_ctor_set(v_reuseFailAlloc_4877_, 25, v_S_4858_);
lean_ctor_set(v_reuseFailAlloc_4877_, 26, v_A_4859_);
lean_ctor_set(v_reuseFailAlloc_4877_, 27, v_n_4860_);
lean_ctor_set(v_reuseFailAlloc_4877_, 28, v_N_4861_);
lean_ctor_set(v_reuseFailAlloc_4877_, 29, v_V_4862_);
lean_ctor_set(v_reuseFailAlloc_4877_, 30, v_z_4863_);
lean_ctor_set(v_reuseFailAlloc_4877_, 31, v_zabbrev_4864_);
lean_ctor_set(v_reuseFailAlloc_4877_, 32, v_v_4865_);
lean_ctor_set(v_reuseFailAlloc_4877_, 33, v_O_4866_);
lean_ctor_set(v_reuseFailAlloc_4877_, 34, v_X_4867_);
lean_ctor_set(v_reuseFailAlloc_4877_, 35, v_x_4868_);
lean_ctor_set(v_reuseFailAlloc_4877_, 36, v_Z_4869_);
v___x_4876_ = v_reuseFailAlloc_4877_;
goto v_reusejp_4875_;
}
v_reusejp_4875_:
{
return v___x_4876_;
}
}
}
}
}
case 7:
{
lean_object* v___x_4884_; uint8_t v_isShared_4885_; uint8_t v_isSharedCheck_4933_; 
v_isSharedCheck_4933_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_4933_ == 0)
{
lean_object* v_unused_4934_; 
v_unused_4934_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_4934_);
v___x_4884_ = v_modifier_4524_;
v_isShared_4885_ = v_isSharedCheck_4933_;
goto v_resetjp_4883_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_4884_ = lean_box(0);
v_isShared_4885_ = v_isSharedCheck_4933_;
goto v_resetjp_4883_;
}
v_resetjp_4883_:
{
lean_object* v_G_4886_; lean_object* v_y_4887_; lean_object* v_u_4888_; lean_object* v_Y_4889_; lean_object* v_D_4890_; lean_object* v_M_4891_; lean_object* v_L_4892_; lean_object* v_d_4893_; lean_object* v_q_4894_; lean_object* v_w_4895_; lean_object* v_W_4896_; lean_object* v_E_4897_; lean_object* v_e_4898_; lean_object* v_c_4899_; lean_object* v_F_4900_; lean_object* v_a_4901_; lean_object* v_b_4902_; lean_object* v_B_4903_; lean_object* v_h_4904_; lean_object* v_K_4905_; lean_object* v_k_4906_; lean_object* v_H_4907_; lean_object* v_m_4908_; lean_object* v_s_4909_; lean_object* v_S_4910_; lean_object* v_A_4911_; lean_object* v_n_4912_; lean_object* v_N_4913_; lean_object* v_V_4914_; lean_object* v_z_4915_; lean_object* v_zabbrev_4916_; lean_object* v_v_4917_; lean_object* v_O_4918_; lean_object* v_X_4919_; lean_object* v_x_4920_; lean_object* v_Z_4921_; lean_object* v___x_4923_; uint8_t v_isShared_4924_; uint8_t v_isSharedCheck_4931_; 
v_G_4886_ = lean_ctor_get(v_date_4523_, 0);
v_y_4887_ = lean_ctor_get(v_date_4523_, 1);
v_u_4888_ = lean_ctor_get(v_date_4523_, 2);
v_Y_4889_ = lean_ctor_get(v_date_4523_, 3);
v_D_4890_ = lean_ctor_get(v_date_4523_, 4);
v_M_4891_ = lean_ctor_get(v_date_4523_, 5);
v_L_4892_ = lean_ctor_get(v_date_4523_, 6);
v_d_4893_ = lean_ctor_get(v_date_4523_, 7);
v_q_4894_ = lean_ctor_get(v_date_4523_, 9);
v_w_4895_ = lean_ctor_get(v_date_4523_, 10);
v_W_4896_ = lean_ctor_get(v_date_4523_, 11);
v_E_4897_ = lean_ctor_get(v_date_4523_, 12);
v_e_4898_ = lean_ctor_get(v_date_4523_, 13);
v_c_4899_ = lean_ctor_get(v_date_4523_, 14);
v_F_4900_ = lean_ctor_get(v_date_4523_, 15);
v_a_4901_ = lean_ctor_get(v_date_4523_, 16);
v_b_4902_ = lean_ctor_get(v_date_4523_, 17);
v_B_4903_ = lean_ctor_get(v_date_4523_, 18);
v_h_4904_ = lean_ctor_get(v_date_4523_, 19);
v_K_4905_ = lean_ctor_get(v_date_4523_, 20);
v_k_4906_ = lean_ctor_get(v_date_4523_, 21);
v_H_4907_ = lean_ctor_get(v_date_4523_, 22);
v_m_4908_ = lean_ctor_get(v_date_4523_, 23);
v_s_4909_ = lean_ctor_get(v_date_4523_, 24);
v_S_4910_ = lean_ctor_get(v_date_4523_, 25);
v_A_4911_ = lean_ctor_get(v_date_4523_, 26);
v_n_4912_ = lean_ctor_get(v_date_4523_, 27);
v_N_4913_ = lean_ctor_get(v_date_4523_, 28);
v_V_4914_ = lean_ctor_get(v_date_4523_, 29);
v_z_4915_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_4916_ = lean_ctor_get(v_date_4523_, 31);
v_v_4917_ = lean_ctor_get(v_date_4523_, 32);
v_O_4918_ = lean_ctor_get(v_date_4523_, 33);
v_X_4919_ = lean_ctor_get(v_date_4523_, 34);
v_x_4920_ = lean_ctor_get(v_date_4523_, 35);
v_Z_4921_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_4931_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_4931_ == 0)
{
lean_object* v_unused_4932_; 
v_unused_4932_ = lean_ctor_get(v_date_4523_, 8);
lean_dec(v_unused_4932_);
v___x_4923_ = v_date_4523_;
v_isShared_4924_ = v_isSharedCheck_4931_;
goto v_resetjp_4922_;
}
else
{
lean_inc(v_Z_4921_);
lean_inc(v_x_4920_);
lean_inc(v_X_4919_);
lean_inc(v_O_4918_);
lean_inc(v_v_4917_);
lean_inc(v_zabbrev_4916_);
lean_inc(v_z_4915_);
lean_inc(v_V_4914_);
lean_inc(v_N_4913_);
lean_inc(v_n_4912_);
lean_inc(v_A_4911_);
lean_inc(v_S_4910_);
lean_inc(v_s_4909_);
lean_inc(v_m_4908_);
lean_inc(v_H_4907_);
lean_inc(v_k_4906_);
lean_inc(v_K_4905_);
lean_inc(v_h_4904_);
lean_inc(v_B_4903_);
lean_inc(v_b_4902_);
lean_inc(v_a_4901_);
lean_inc(v_F_4900_);
lean_inc(v_c_4899_);
lean_inc(v_e_4898_);
lean_inc(v_E_4897_);
lean_inc(v_W_4896_);
lean_inc(v_w_4895_);
lean_inc(v_q_4894_);
lean_inc(v_d_4893_);
lean_inc(v_L_4892_);
lean_inc(v_M_4891_);
lean_inc(v_D_4890_);
lean_inc(v_Y_4889_);
lean_inc(v_u_4888_);
lean_inc(v_y_4887_);
lean_inc(v_G_4886_);
lean_dec(v_date_4523_);
v___x_4923_ = lean_box(0);
v_isShared_4924_ = v_isSharedCheck_4931_;
goto v_resetjp_4922_;
}
v_resetjp_4922_:
{
lean_object* v___x_4926_; 
if (v_isShared_4885_ == 0)
{
lean_ctor_set_tag(v___x_4884_, 1);
lean_ctor_set(v___x_4884_, 0, v_data_4525_);
v___x_4926_ = v___x_4884_;
goto v_reusejp_4925_;
}
else
{
lean_object* v_reuseFailAlloc_4930_; 
v_reuseFailAlloc_4930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4930_, 0, v_data_4525_);
v___x_4926_ = v_reuseFailAlloc_4930_;
goto v_reusejp_4925_;
}
v_reusejp_4925_:
{
lean_object* v___x_4928_; 
if (v_isShared_4924_ == 0)
{
lean_ctor_set(v___x_4923_, 8, v___x_4926_);
v___x_4928_ = v___x_4923_;
goto v_reusejp_4927_;
}
else
{
lean_object* v_reuseFailAlloc_4929_; 
v_reuseFailAlloc_4929_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4929_, 0, v_G_4886_);
lean_ctor_set(v_reuseFailAlloc_4929_, 1, v_y_4887_);
lean_ctor_set(v_reuseFailAlloc_4929_, 2, v_u_4888_);
lean_ctor_set(v_reuseFailAlloc_4929_, 3, v_Y_4889_);
lean_ctor_set(v_reuseFailAlloc_4929_, 4, v_D_4890_);
lean_ctor_set(v_reuseFailAlloc_4929_, 5, v_M_4891_);
lean_ctor_set(v_reuseFailAlloc_4929_, 6, v_L_4892_);
lean_ctor_set(v_reuseFailAlloc_4929_, 7, v_d_4893_);
lean_ctor_set(v_reuseFailAlloc_4929_, 8, v___x_4926_);
lean_ctor_set(v_reuseFailAlloc_4929_, 9, v_q_4894_);
lean_ctor_set(v_reuseFailAlloc_4929_, 10, v_w_4895_);
lean_ctor_set(v_reuseFailAlloc_4929_, 11, v_W_4896_);
lean_ctor_set(v_reuseFailAlloc_4929_, 12, v_E_4897_);
lean_ctor_set(v_reuseFailAlloc_4929_, 13, v_e_4898_);
lean_ctor_set(v_reuseFailAlloc_4929_, 14, v_c_4899_);
lean_ctor_set(v_reuseFailAlloc_4929_, 15, v_F_4900_);
lean_ctor_set(v_reuseFailAlloc_4929_, 16, v_a_4901_);
lean_ctor_set(v_reuseFailAlloc_4929_, 17, v_b_4902_);
lean_ctor_set(v_reuseFailAlloc_4929_, 18, v_B_4903_);
lean_ctor_set(v_reuseFailAlloc_4929_, 19, v_h_4904_);
lean_ctor_set(v_reuseFailAlloc_4929_, 20, v_K_4905_);
lean_ctor_set(v_reuseFailAlloc_4929_, 21, v_k_4906_);
lean_ctor_set(v_reuseFailAlloc_4929_, 22, v_H_4907_);
lean_ctor_set(v_reuseFailAlloc_4929_, 23, v_m_4908_);
lean_ctor_set(v_reuseFailAlloc_4929_, 24, v_s_4909_);
lean_ctor_set(v_reuseFailAlloc_4929_, 25, v_S_4910_);
lean_ctor_set(v_reuseFailAlloc_4929_, 26, v_A_4911_);
lean_ctor_set(v_reuseFailAlloc_4929_, 27, v_n_4912_);
lean_ctor_set(v_reuseFailAlloc_4929_, 28, v_N_4913_);
lean_ctor_set(v_reuseFailAlloc_4929_, 29, v_V_4914_);
lean_ctor_set(v_reuseFailAlloc_4929_, 30, v_z_4915_);
lean_ctor_set(v_reuseFailAlloc_4929_, 31, v_zabbrev_4916_);
lean_ctor_set(v_reuseFailAlloc_4929_, 32, v_v_4917_);
lean_ctor_set(v_reuseFailAlloc_4929_, 33, v_O_4918_);
lean_ctor_set(v_reuseFailAlloc_4929_, 34, v_X_4919_);
lean_ctor_set(v_reuseFailAlloc_4929_, 35, v_x_4920_);
lean_ctor_set(v_reuseFailAlloc_4929_, 36, v_Z_4921_);
v___x_4928_ = v_reuseFailAlloc_4929_;
goto v_reusejp_4927_;
}
v_reusejp_4927_:
{
return v___x_4928_;
}
}
}
}
}
case 8:
{
lean_object* v___x_4936_; uint8_t v_isShared_4937_; uint8_t v_isSharedCheck_4985_; 
v_isSharedCheck_4985_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_4985_ == 0)
{
lean_object* v_unused_4986_; 
v_unused_4986_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_4986_);
v___x_4936_ = v_modifier_4524_;
v_isShared_4937_ = v_isSharedCheck_4985_;
goto v_resetjp_4935_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_4936_ = lean_box(0);
v_isShared_4937_ = v_isSharedCheck_4985_;
goto v_resetjp_4935_;
}
v_resetjp_4935_:
{
lean_object* v_G_4938_; lean_object* v_y_4939_; lean_object* v_u_4940_; lean_object* v_Y_4941_; lean_object* v_D_4942_; lean_object* v_M_4943_; lean_object* v_L_4944_; lean_object* v_d_4945_; lean_object* v_Q_4946_; lean_object* v_w_4947_; lean_object* v_W_4948_; lean_object* v_E_4949_; lean_object* v_e_4950_; lean_object* v_c_4951_; lean_object* v_F_4952_; lean_object* v_a_4953_; lean_object* v_b_4954_; lean_object* v_B_4955_; lean_object* v_h_4956_; lean_object* v_K_4957_; lean_object* v_k_4958_; lean_object* v_H_4959_; lean_object* v_m_4960_; lean_object* v_s_4961_; lean_object* v_S_4962_; lean_object* v_A_4963_; lean_object* v_n_4964_; lean_object* v_N_4965_; lean_object* v_V_4966_; lean_object* v_z_4967_; lean_object* v_zabbrev_4968_; lean_object* v_v_4969_; lean_object* v_O_4970_; lean_object* v_X_4971_; lean_object* v_x_4972_; lean_object* v_Z_4973_; lean_object* v___x_4975_; uint8_t v_isShared_4976_; uint8_t v_isSharedCheck_4983_; 
v_G_4938_ = lean_ctor_get(v_date_4523_, 0);
v_y_4939_ = lean_ctor_get(v_date_4523_, 1);
v_u_4940_ = lean_ctor_get(v_date_4523_, 2);
v_Y_4941_ = lean_ctor_get(v_date_4523_, 3);
v_D_4942_ = lean_ctor_get(v_date_4523_, 4);
v_M_4943_ = lean_ctor_get(v_date_4523_, 5);
v_L_4944_ = lean_ctor_get(v_date_4523_, 6);
v_d_4945_ = lean_ctor_get(v_date_4523_, 7);
v_Q_4946_ = lean_ctor_get(v_date_4523_, 8);
v_w_4947_ = lean_ctor_get(v_date_4523_, 10);
v_W_4948_ = lean_ctor_get(v_date_4523_, 11);
v_E_4949_ = lean_ctor_get(v_date_4523_, 12);
v_e_4950_ = lean_ctor_get(v_date_4523_, 13);
v_c_4951_ = lean_ctor_get(v_date_4523_, 14);
v_F_4952_ = lean_ctor_get(v_date_4523_, 15);
v_a_4953_ = lean_ctor_get(v_date_4523_, 16);
v_b_4954_ = lean_ctor_get(v_date_4523_, 17);
v_B_4955_ = lean_ctor_get(v_date_4523_, 18);
v_h_4956_ = lean_ctor_get(v_date_4523_, 19);
v_K_4957_ = lean_ctor_get(v_date_4523_, 20);
v_k_4958_ = lean_ctor_get(v_date_4523_, 21);
v_H_4959_ = lean_ctor_get(v_date_4523_, 22);
v_m_4960_ = lean_ctor_get(v_date_4523_, 23);
v_s_4961_ = lean_ctor_get(v_date_4523_, 24);
v_S_4962_ = lean_ctor_get(v_date_4523_, 25);
v_A_4963_ = lean_ctor_get(v_date_4523_, 26);
v_n_4964_ = lean_ctor_get(v_date_4523_, 27);
v_N_4965_ = lean_ctor_get(v_date_4523_, 28);
v_V_4966_ = lean_ctor_get(v_date_4523_, 29);
v_z_4967_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_4968_ = lean_ctor_get(v_date_4523_, 31);
v_v_4969_ = lean_ctor_get(v_date_4523_, 32);
v_O_4970_ = lean_ctor_get(v_date_4523_, 33);
v_X_4971_ = lean_ctor_get(v_date_4523_, 34);
v_x_4972_ = lean_ctor_get(v_date_4523_, 35);
v_Z_4973_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_4983_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_4983_ == 0)
{
lean_object* v_unused_4984_; 
v_unused_4984_ = lean_ctor_get(v_date_4523_, 9);
lean_dec(v_unused_4984_);
v___x_4975_ = v_date_4523_;
v_isShared_4976_ = v_isSharedCheck_4983_;
goto v_resetjp_4974_;
}
else
{
lean_inc(v_Z_4973_);
lean_inc(v_x_4972_);
lean_inc(v_X_4971_);
lean_inc(v_O_4970_);
lean_inc(v_v_4969_);
lean_inc(v_zabbrev_4968_);
lean_inc(v_z_4967_);
lean_inc(v_V_4966_);
lean_inc(v_N_4965_);
lean_inc(v_n_4964_);
lean_inc(v_A_4963_);
lean_inc(v_S_4962_);
lean_inc(v_s_4961_);
lean_inc(v_m_4960_);
lean_inc(v_H_4959_);
lean_inc(v_k_4958_);
lean_inc(v_K_4957_);
lean_inc(v_h_4956_);
lean_inc(v_B_4955_);
lean_inc(v_b_4954_);
lean_inc(v_a_4953_);
lean_inc(v_F_4952_);
lean_inc(v_c_4951_);
lean_inc(v_e_4950_);
lean_inc(v_E_4949_);
lean_inc(v_W_4948_);
lean_inc(v_w_4947_);
lean_inc(v_Q_4946_);
lean_inc(v_d_4945_);
lean_inc(v_L_4944_);
lean_inc(v_M_4943_);
lean_inc(v_D_4942_);
lean_inc(v_Y_4941_);
lean_inc(v_u_4940_);
lean_inc(v_y_4939_);
lean_inc(v_G_4938_);
lean_dec(v_date_4523_);
v___x_4975_ = lean_box(0);
v_isShared_4976_ = v_isSharedCheck_4983_;
goto v_resetjp_4974_;
}
v_resetjp_4974_:
{
lean_object* v___x_4978_; 
if (v_isShared_4937_ == 0)
{
lean_ctor_set_tag(v___x_4936_, 1);
lean_ctor_set(v___x_4936_, 0, v_data_4525_);
v___x_4978_ = v___x_4936_;
goto v_reusejp_4977_;
}
else
{
lean_object* v_reuseFailAlloc_4982_; 
v_reuseFailAlloc_4982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4982_, 0, v_data_4525_);
v___x_4978_ = v_reuseFailAlloc_4982_;
goto v_reusejp_4977_;
}
v_reusejp_4977_:
{
lean_object* v___x_4980_; 
if (v_isShared_4976_ == 0)
{
lean_ctor_set(v___x_4975_, 9, v___x_4978_);
v___x_4980_ = v___x_4975_;
goto v_reusejp_4979_;
}
else
{
lean_object* v_reuseFailAlloc_4981_; 
v_reuseFailAlloc_4981_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4981_, 0, v_G_4938_);
lean_ctor_set(v_reuseFailAlloc_4981_, 1, v_y_4939_);
lean_ctor_set(v_reuseFailAlloc_4981_, 2, v_u_4940_);
lean_ctor_set(v_reuseFailAlloc_4981_, 3, v_Y_4941_);
lean_ctor_set(v_reuseFailAlloc_4981_, 4, v_D_4942_);
lean_ctor_set(v_reuseFailAlloc_4981_, 5, v_M_4943_);
lean_ctor_set(v_reuseFailAlloc_4981_, 6, v_L_4944_);
lean_ctor_set(v_reuseFailAlloc_4981_, 7, v_d_4945_);
lean_ctor_set(v_reuseFailAlloc_4981_, 8, v_Q_4946_);
lean_ctor_set(v_reuseFailAlloc_4981_, 9, v___x_4978_);
lean_ctor_set(v_reuseFailAlloc_4981_, 10, v_w_4947_);
lean_ctor_set(v_reuseFailAlloc_4981_, 11, v_W_4948_);
lean_ctor_set(v_reuseFailAlloc_4981_, 12, v_E_4949_);
lean_ctor_set(v_reuseFailAlloc_4981_, 13, v_e_4950_);
lean_ctor_set(v_reuseFailAlloc_4981_, 14, v_c_4951_);
lean_ctor_set(v_reuseFailAlloc_4981_, 15, v_F_4952_);
lean_ctor_set(v_reuseFailAlloc_4981_, 16, v_a_4953_);
lean_ctor_set(v_reuseFailAlloc_4981_, 17, v_b_4954_);
lean_ctor_set(v_reuseFailAlloc_4981_, 18, v_B_4955_);
lean_ctor_set(v_reuseFailAlloc_4981_, 19, v_h_4956_);
lean_ctor_set(v_reuseFailAlloc_4981_, 20, v_K_4957_);
lean_ctor_set(v_reuseFailAlloc_4981_, 21, v_k_4958_);
lean_ctor_set(v_reuseFailAlloc_4981_, 22, v_H_4959_);
lean_ctor_set(v_reuseFailAlloc_4981_, 23, v_m_4960_);
lean_ctor_set(v_reuseFailAlloc_4981_, 24, v_s_4961_);
lean_ctor_set(v_reuseFailAlloc_4981_, 25, v_S_4962_);
lean_ctor_set(v_reuseFailAlloc_4981_, 26, v_A_4963_);
lean_ctor_set(v_reuseFailAlloc_4981_, 27, v_n_4964_);
lean_ctor_set(v_reuseFailAlloc_4981_, 28, v_N_4965_);
lean_ctor_set(v_reuseFailAlloc_4981_, 29, v_V_4966_);
lean_ctor_set(v_reuseFailAlloc_4981_, 30, v_z_4967_);
lean_ctor_set(v_reuseFailAlloc_4981_, 31, v_zabbrev_4968_);
lean_ctor_set(v_reuseFailAlloc_4981_, 32, v_v_4969_);
lean_ctor_set(v_reuseFailAlloc_4981_, 33, v_O_4970_);
lean_ctor_set(v_reuseFailAlloc_4981_, 34, v_X_4971_);
lean_ctor_set(v_reuseFailAlloc_4981_, 35, v_x_4972_);
lean_ctor_set(v_reuseFailAlloc_4981_, 36, v_Z_4973_);
v___x_4980_ = v_reuseFailAlloc_4981_;
goto v_reusejp_4979_;
}
v_reusejp_4979_:
{
return v___x_4980_;
}
}
}
}
}
case 9:
{
lean_object* v___x_4988_; uint8_t v_isShared_4989_; uint8_t v_isSharedCheck_5037_; 
v_isSharedCheck_5037_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_5037_ == 0)
{
lean_object* v_unused_5038_; 
v_unused_5038_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_5038_);
v___x_4988_ = v_modifier_4524_;
v_isShared_4989_ = v_isSharedCheck_5037_;
goto v_resetjp_4987_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_4988_ = lean_box(0);
v_isShared_4989_ = v_isSharedCheck_5037_;
goto v_resetjp_4987_;
}
v_resetjp_4987_:
{
lean_object* v_G_4990_; lean_object* v_y_4991_; lean_object* v_u_4992_; lean_object* v_D_4993_; lean_object* v_M_4994_; lean_object* v_L_4995_; lean_object* v_d_4996_; lean_object* v_Q_4997_; lean_object* v_q_4998_; lean_object* v_w_4999_; lean_object* v_W_5000_; lean_object* v_E_5001_; lean_object* v_e_5002_; lean_object* v_c_5003_; lean_object* v_F_5004_; lean_object* v_a_5005_; lean_object* v_b_5006_; lean_object* v_B_5007_; lean_object* v_h_5008_; lean_object* v_K_5009_; lean_object* v_k_5010_; lean_object* v_H_5011_; lean_object* v_m_5012_; lean_object* v_s_5013_; lean_object* v_S_5014_; lean_object* v_A_5015_; lean_object* v_n_5016_; lean_object* v_N_5017_; lean_object* v_V_5018_; lean_object* v_z_5019_; lean_object* v_zabbrev_5020_; lean_object* v_v_5021_; lean_object* v_O_5022_; lean_object* v_X_5023_; lean_object* v_x_5024_; lean_object* v_Z_5025_; lean_object* v___x_5027_; uint8_t v_isShared_5028_; uint8_t v_isSharedCheck_5035_; 
v_G_4990_ = lean_ctor_get(v_date_4523_, 0);
v_y_4991_ = lean_ctor_get(v_date_4523_, 1);
v_u_4992_ = lean_ctor_get(v_date_4523_, 2);
v_D_4993_ = lean_ctor_get(v_date_4523_, 4);
v_M_4994_ = lean_ctor_get(v_date_4523_, 5);
v_L_4995_ = lean_ctor_get(v_date_4523_, 6);
v_d_4996_ = lean_ctor_get(v_date_4523_, 7);
v_Q_4997_ = lean_ctor_get(v_date_4523_, 8);
v_q_4998_ = lean_ctor_get(v_date_4523_, 9);
v_w_4999_ = lean_ctor_get(v_date_4523_, 10);
v_W_5000_ = lean_ctor_get(v_date_4523_, 11);
v_E_5001_ = lean_ctor_get(v_date_4523_, 12);
v_e_5002_ = lean_ctor_get(v_date_4523_, 13);
v_c_5003_ = lean_ctor_get(v_date_4523_, 14);
v_F_5004_ = lean_ctor_get(v_date_4523_, 15);
v_a_5005_ = lean_ctor_get(v_date_4523_, 16);
v_b_5006_ = lean_ctor_get(v_date_4523_, 17);
v_B_5007_ = lean_ctor_get(v_date_4523_, 18);
v_h_5008_ = lean_ctor_get(v_date_4523_, 19);
v_K_5009_ = lean_ctor_get(v_date_4523_, 20);
v_k_5010_ = lean_ctor_get(v_date_4523_, 21);
v_H_5011_ = lean_ctor_get(v_date_4523_, 22);
v_m_5012_ = lean_ctor_get(v_date_4523_, 23);
v_s_5013_ = lean_ctor_get(v_date_4523_, 24);
v_S_5014_ = lean_ctor_get(v_date_4523_, 25);
v_A_5015_ = lean_ctor_get(v_date_4523_, 26);
v_n_5016_ = lean_ctor_get(v_date_4523_, 27);
v_N_5017_ = lean_ctor_get(v_date_4523_, 28);
v_V_5018_ = lean_ctor_get(v_date_4523_, 29);
v_z_5019_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5020_ = lean_ctor_get(v_date_4523_, 31);
v_v_5021_ = lean_ctor_get(v_date_4523_, 32);
v_O_5022_ = lean_ctor_get(v_date_4523_, 33);
v_X_5023_ = lean_ctor_get(v_date_4523_, 34);
v_x_5024_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5025_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5035_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5035_ == 0)
{
lean_object* v_unused_5036_; 
v_unused_5036_ = lean_ctor_get(v_date_4523_, 3);
lean_dec(v_unused_5036_);
v___x_5027_ = v_date_4523_;
v_isShared_5028_ = v_isSharedCheck_5035_;
goto v_resetjp_5026_;
}
else
{
lean_inc(v_Z_5025_);
lean_inc(v_x_5024_);
lean_inc(v_X_5023_);
lean_inc(v_O_5022_);
lean_inc(v_v_5021_);
lean_inc(v_zabbrev_5020_);
lean_inc(v_z_5019_);
lean_inc(v_V_5018_);
lean_inc(v_N_5017_);
lean_inc(v_n_5016_);
lean_inc(v_A_5015_);
lean_inc(v_S_5014_);
lean_inc(v_s_5013_);
lean_inc(v_m_5012_);
lean_inc(v_H_5011_);
lean_inc(v_k_5010_);
lean_inc(v_K_5009_);
lean_inc(v_h_5008_);
lean_inc(v_B_5007_);
lean_inc(v_b_5006_);
lean_inc(v_a_5005_);
lean_inc(v_F_5004_);
lean_inc(v_c_5003_);
lean_inc(v_e_5002_);
lean_inc(v_E_5001_);
lean_inc(v_W_5000_);
lean_inc(v_w_4999_);
lean_inc(v_q_4998_);
lean_inc(v_Q_4997_);
lean_inc(v_d_4996_);
lean_inc(v_L_4995_);
lean_inc(v_M_4994_);
lean_inc(v_D_4993_);
lean_inc(v_u_4992_);
lean_inc(v_y_4991_);
lean_inc(v_G_4990_);
lean_dec(v_date_4523_);
v___x_5027_ = lean_box(0);
v_isShared_5028_ = v_isSharedCheck_5035_;
goto v_resetjp_5026_;
}
v_resetjp_5026_:
{
lean_object* v___x_5030_; 
if (v_isShared_4989_ == 0)
{
lean_ctor_set_tag(v___x_4988_, 1);
lean_ctor_set(v___x_4988_, 0, v_data_4525_);
v___x_5030_ = v___x_4988_;
goto v_reusejp_5029_;
}
else
{
lean_object* v_reuseFailAlloc_5034_; 
v_reuseFailAlloc_5034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5034_, 0, v_data_4525_);
v___x_5030_ = v_reuseFailAlloc_5034_;
goto v_reusejp_5029_;
}
v_reusejp_5029_:
{
lean_object* v___x_5032_; 
if (v_isShared_5028_ == 0)
{
lean_ctor_set(v___x_5027_, 3, v___x_5030_);
v___x_5032_ = v___x_5027_;
goto v_reusejp_5031_;
}
else
{
lean_object* v_reuseFailAlloc_5033_; 
v_reuseFailAlloc_5033_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5033_, 0, v_G_4990_);
lean_ctor_set(v_reuseFailAlloc_5033_, 1, v_y_4991_);
lean_ctor_set(v_reuseFailAlloc_5033_, 2, v_u_4992_);
lean_ctor_set(v_reuseFailAlloc_5033_, 3, v___x_5030_);
lean_ctor_set(v_reuseFailAlloc_5033_, 4, v_D_4993_);
lean_ctor_set(v_reuseFailAlloc_5033_, 5, v_M_4994_);
lean_ctor_set(v_reuseFailAlloc_5033_, 6, v_L_4995_);
lean_ctor_set(v_reuseFailAlloc_5033_, 7, v_d_4996_);
lean_ctor_set(v_reuseFailAlloc_5033_, 8, v_Q_4997_);
lean_ctor_set(v_reuseFailAlloc_5033_, 9, v_q_4998_);
lean_ctor_set(v_reuseFailAlloc_5033_, 10, v_w_4999_);
lean_ctor_set(v_reuseFailAlloc_5033_, 11, v_W_5000_);
lean_ctor_set(v_reuseFailAlloc_5033_, 12, v_E_5001_);
lean_ctor_set(v_reuseFailAlloc_5033_, 13, v_e_5002_);
lean_ctor_set(v_reuseFailAlloc_5033_, 14, v_c_5003_);
lean_ctor_set(v_reuseFailAlloc_5033_, 15, v_F_5004_);
lean_ctor_set(v_reuseFailAlloc_5033_, 16, v_a_5005_);
lean_ctor_set(v_reuseFailAlloc_5033_, 17, v_b_5006_);
lean_ctor_set(v_reuseFailAlloc_5033_, 18, v_B_5007_);
lean_ctor_set(v_reuseFailAlloc_5033_, 19, v_h_5008_);
lean_ctor_set(v_reuseFailAlloc_5033_, 20, v_K_5009_);
lean_ctor_set(v_reuseFailAlloc_5033_, 21, v_k_5010_);
lean_ctor_set(v_reuseFailAlloc_5033_, 22, v_H_5011_);
lean_ctor_set(v_reuseFailAlloc_5033_, 23, v_m_5012_);
lean_ctor_set(v_reuseFailAlloc_5033_, 24, v_s_5013_);
lean_ctor_set(v_reuseFailAlloc_5033_, 25, v_S_5014_);
lean_ctor_set(v_reuseFailAlloc_5033_, 26, v_A_5015_);
lean_ctor_set(v_reuseFailAlloc_5033_, 27, v_n_5016_);
lean_ctor_set(v_reuseFailAlloc_5033_, 28, v_N_5017_);
lean_ctor_set(v_reuseFailAlloc_5033_, 29, v_V_5018_);
lean_ctor_set(v_reuseFailAlloc_5033_, 30, v_z_5019_);
lean_ctor_set(v_reuseFailAlloc_5033_, 31, v_zabbrev_5020_);
lean_ctor_set(v_reuseFailAlloc_5033_, 32, v_v_5021_);
lean_ctor_set(v_reuseFailAlloc_5033_, 33, v_O_5022_);
lean_ctor_set(v_reuseFailAlloc_5033_, 34, v_X_5023_);
lean_ctor_set(v_reuseFailAlloc_5033_, 35, v_x_5024_);
lean_ctor_set(v_reuseFailAlloc_5033_, 36, v_Z_5025_);
v___x_5032_ = v_reuseFailAlloc_5033_;
goto v_reusejp_5031_;
}
v_reusejp_5031_:
{
return v___x_5032_;
}
}
}
}
}
case 10:
{
lean_object* v___x_5040_; uint8_t v_isShared_5041_; uint8_t v_isSharedCheck_5089_; 
v_isSharedCheck_5089_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_5089_ == 0)
{
lean_object* v_unused_5090_; 
v_unused_5090_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_5090_);
v___x_5040_ = v_modifier_4524_;
v_isShared_5041_ = v_isSharedCheck_5089_;
goto v_resetjp_5039_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_5040_ = lean_box(0);
v_isShared_5041_ = v_isSharedCheck_5089_;
goto v_resetjp_5039_;
}
v_resetjp_5039_:
{
lean_object* v_G_5042_; lean_object* v_y_5043_; lean_object* v_u_5044_; lean_object* v_Y_5045_; lean_object* v_D_5046_; lean_object* v_M_5047_; lean_object* v_L_5048_; lean_object* v_d_5049_; lean_object* v_Q_5050_; lean_object* v_q_5051_; lean_object* v_W_5052_; lean_object* v_E_5053_; lean_object* v_e_5054_; lean_object* v_c_5055_; lean_object* v_F_5056_; lean_object* v_a_5057_; lean_object* v_b_5058_; lean_object* v_B_5059_; lean_object* v_h_5060_; lean_object* v_K_5061_; lean_object* v_k_5062_; lean_object* v_H_5063_; lean_object* v_m_5064_; lean_object* v_s_5065_; lean_object* v_S_5066_; lean_object* v_A_5067_; lean_object* v_n_5068_; lean_object* v_N_5069_; lean_object* v_V_5070_; lean_object* v_z_5071_; lean_object* v_zabbrev_5072_; lean_object* v_v_5073_; lean_object* v_O_5074_; lean_object* v_X_5075_; lean_object* v_x_5076_; lean_object* v_Z_5077_; lean_object* v___x_5079_; uint8_t v_isShared_5080_; uint8_t v_isSharedCheck_5087_; 
v_G_5042_ = lean_ctor_get(v_date_4523_, 0);
v_y_5043_ = lean_ctor_get(v_date_4523_, 1);
v_u_5044_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5045_ = lean_ctor_get(v_date_4523_, 3);
v_D_5046_ = lean_ctor_get(v_date_4523_, 4);
v_M_5047_ = lean_ctor_get(v_date_4523_, 5);
v_L_5048_ = lean_ctor_get(v_date_4523_, 6);
v_d_5049_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5050_ = lean_ctor_get(v_date_4523_, 8);
v_q_5051_ = lean_ctor_get(v_date_4523_, 9);
v_W_5052_ = lean_ctor_get(v_date_4523_, 11);
v_E_5053_ = lean_ctor_get(v_date_4523_, 12);
v_e_5054_ = lean_ctor_get(v_date_4523_, 13);
v_c_5055_ = lean_ctor_get(v_date_4523_, 14);
v_F_5056_ = lean_ctor_get(v_date_4523_, 15);
v_a_5057_ = lean_ctor_get(v_date_4523_, 16);
v_b_5058_ = lean_ctor_get(v_date_4523_, 17);
v_B_5059_ = lean_ctor_get(v_date_4523_, 18);
v_h_5060_ = lean_ctor_get(v_date_4523_, 19);
v_K_5061_ = lean_ctor_get(v_date_4523_, 20);
v_k_5062_ = lean_ctor_get(v_date_4523_, 21);
v_H_5063_ = lean_ctor_get(v_date_4523_, 22);
v_m_5064_ = lean_ctor_get(v_date_4523_, 23);
v_s_5065_ = lean_ctor_get(v_date_4523_, 24);
v_S_5066_ = lean_ctor_get(v_date_4523_, 25);
v_A_5067_ = lean_ctor_get(v_date_4523_, 26);
v_n_5068_ = lean_ctor_get(v_date_4523_, 27);
v_N_5069_ = lean_ctor_get(v_date_4523_, 28);
v_V_5070_ = lean_ctor_get(v_date_4523_, 29);
v_z_5071_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5072_ = lean_ctor_get(v_date_4523_, 31);
v_v_5073_ = lean_ctor_get(v_date_4523_, 32);
v_O_5074_ = lean_ctor_get(v_date_4523_, 33);
v_X_5075_ = lean_ctor_get(v_date_4523_, 34);
v_x_5076_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5077_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5087_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5087_ == 0)
{
lean_object* v_unused_5088_; 
v_unused_5088_ = lean_ctor_get(v_date_4523_, 10);
lean_dec(v_unused_5088_);
v___x_5079_ = v_date_4523_;
v_isShared_5080_ = v_isSharedCheck_5087_;
goto v_resetjp_5078_;
}
else
{
lean_inc(v_Z_5077_);
lean_inc(v_x_5076_);
lean_inc(v_X_5075_);
lean_inc(v_O_5074_);
lean_inc(v_v_5073_);
lean_inc(v_zabbrev_5072_);
lean_inc(v_z_5071_);
lean_inc(v_V_5070_);
lean_inc(v_N_5069_);
lean_inc(v_n_5068_);
lean_inc(v_A_5067_);
lean_inc(v_S_5066_);
lean_inc(v_s_5065_);
lean_inc(v_m_5064_);
lean_inc(v_H_5063_);
lean_inc(v_k_5062_);
lean_inc(v_K_5061_);
lean_inc(v_h_5060_);
lean_inc(v_B_5059_);
lean_inc(v_b_5058_);
lean_inc(v_a_5057_);
lean_inc(v_F_5056_);
lean_inc(v_c_5055_);
lean_inc(v_e_5054_);
lean_inc(v_E_5053_);
lean_inc(v_W_5052_);
lean_inc(v_q_5051_);
lean_inc(v_Q_5050_);
lean_inc(v_d_5049_);
lean_inc(v_L_5048_);
lean_inc(v_M_5047_);
lean_inc(v_D_5046_);
lean_inc(v_Y_5045_);
lean_inc(v_u_5044_);
lean_inc(v_y_5043_);
lean_inc(v_G_5042_);
lean_dec(v_date_4523_);
v___x_5079_ = lean_box(0);
v_isShared_5080_ = v_isSharedCheck_5087_;
goto v_resetjp_5078_;
}
v_resetjp_5078_:
{
lean_object* v___x_5082_; 
if (v_isShared_5041_ == 0)
{
lean_ctor_set_tag(v___x_5040_, 1);
lean_ctor_set(v___x_5040_, 0, v_data_4525_);
v___x_5082_ = v___x_5040_;
goto v_reusejp_5081_;
}
else
{
lean_object* v_reuseFailAlloc_5086_; 
v_reuseFailAlloc_5086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5086_, 0, v_data_4525_);
v___x_5082_ = v_reuseFailAlloc_5086_;
goto v_reusejp_5081_;
}
v_reusejp_5081_:
{
lean_object* v___x_5084_; 
if (v_isShared_5080_ == 0)
{
lean_ctor_set(v___x_5079_, 10, v___x_5082_);
v___x_5084_ = v___x_5079_;
goto v_reusejp_5083_;
}
else
{
lean_object* v_reuseFailAlloc_5085_; 
v_reuseFailAlloc_5085_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5085_, 0, v_G_5042_);
lean_ctor_set(v_reuseFailAlloc_5085_, 1, v_y_5043_);
lean_ctor_set(v_reuseFailAlloc_5085_, 2, v_u_5044_);
lean_ctor_set(v_reuseFailAlloc_5085_, 3, v_Y_5045_);
lean_ctor_set(v_reuseFailAlloc_5085_, 4, v_D_5046_);
lean_ctor_set(v_reuseFailAlloc_5085_, 5, v_M_5047_);
lean_ctor_set(v_reuseFailAlloc_5085_, 6, v_L_5048_);
lean_ctor_set(v_reuseFailAlloc_5085_, 7, v_d_5049_);
lean_ctor_set(v_reuseFailAlloc_5085_, 8, v_Q_5050_);
lean_ctor_set(v_reuseFailAlloc_5085_, 9, v_q_5051_);
lean_ctor_set(v_reuseFailAlloc_5085_, 10, v___x_5082_);
lean_ctor_set(v_reuseFailAlloc_5085_, 11, v_W_5052_);
lean_ctor_set(v_reuseFailAlloc_5085_, 12, v_E_5053_);
lean_ctor_set(v_reuseFailAlloc_5085_, 13, v_e_5054_);
lean_ctor_set(v_reuseFailAlloc_5085_, 14, v_c_5055_);
lean_ctor_set(v_reuseFailAlloc_5085_, 15, v_F_5056_);
lean_ctor_set(v_reuseFailAlloc_5085_, 16, v_a_5057_);
lean_ctor_set(v_reuseFailAlloc_5085_, 17, v_b_5058_);
lean_ctor_set(v_reuseFailAlloc_5085_, 18, v_B_5059_);
lean_ctor_set(v_reuseFailAlloc_5085_, 19, v_h_5060_);
lean_ctor_set(v_reuseFailAlloc_5085_, 20, v_K_5061_);
lean_ctor_set(v_reuseFailAlloc_5085_, 21, v_k_5062_);
lean_ctor_set(v_reuseFailAlloc_5085_, 22, v_H_5063_);
lean_ctor_set(v_reuseFailAlloc_5085_, 23, v_m_5064_);
lean_ctor_set(v_reuseFailAlloc_5085_, 24, v_s_5065_);
lean_ctor_set(v_reuseFailAlloc_5085_, 25, v_S_5066_);
lean_ctor_set(v_reuseFailAlloc_5085_, 26, v_A_5067_);
lean_ctor_set(v_reuseFailAlloc_5085_, 27, v_n_5068_);
lean_ctor_set(v_reuseFailAlloc_5085_, 28, v_N_5069_);
lean_ctor_set(v_reuseFailAlloc_5085_, 29, v_V_5070_);
lean_ctor_set(v_reuseFailAlloc_5085_, 30, v_z_5071_);
lean_ctor_set(v_reuseFailAlloc_5085_, 31, v_zabbrev_5072_);
lean_ctor_set(v_reuseFailAlloc_5085_, 32, v_v_5073_);
lean_ctor_set(v_reuseFailAlloc_5085_, 33, v_O_5074_);
lean_ctor_set(v_reuseFailAlloc_5085_, 34, v_X_5075_);
lean_ctor_set(v_reuseFailAlloc_5085_, 35, v_x_5076_);
lean_ctor_set(v_reuseFailAlloc_5085_, 36, v_Z_5077_);
v___x_5084_ = v_reuseFailAlloc_5085_;
goto v_reusejp_5083_;
}
v_reusejp_5083_:
{
return v___x_5084_;
}
}
}
}
}
case 11:
{
lean_object* v___x_5092_; uint8_t v_isShared_5093_; uint8_t v_isSharedCheck_5141_; 
v_isSharedCheck_5141_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_5141_ == 0)
{
lean_object* v_unused_5142_; 
v_unused_5142_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_5142_);
v___x_5092_ = v_modifier_4524_;
v_isShared_5093_ = v_isSharedCheck_5141_;
goto v_resetjp_5091_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_5092_ = lean_box(0);
v_isShared_5093_ = v_isSharedCheck_5141_;
goto v_resetjp_5091_;
}
v_resetjp_5091_:
{
lean_object* v_G_5094_; lean_object* v_y_5095_; lean_object* v_u_5096_; lean_object* v_Y_5097_; lean_object* v_D_5098_; lean_object* v_M_5099_; lean_object* v_L_5100_; lean_object* v_d_5101_; lean_object* v_Q_5102_; lean_object* v_q_5103_; lean_object* v_w_5104_; lean_object* v_E_5105_; lean_object* v_e_5106_; lean_object* v_c_5107_; lean_object* v_F_5108_; lean_object* v_a_5109_; lean_object* v_b_5110_; lean_object* v_B_5111_; lean_object* v_h_5112_; lean_object* v_K_5113_; lean_object* v_k_5114_; lean_object* v_H_5115_; lean_object* v_m_5116_; lean_object* v_s_5117_; lean_object* v_S_5118_; lean_object* v_A_5119_; lean_object* v_n_5120_; lean_object* v_N_5121_; lean_object* v_V_5122_; lean_object* v_z_5123_; lean_object* v_zabbrev_5124_; lean_object* v_v_5125_; lean_object* v_O_5126_; lean_object* v_X_5127_; lean_object* v_x_5128_; lean_object* v_Z_5129_; lean_object* v___x_5131_; uint8_t v_isShared_5132_; uint8_t v_isSharedCheck_5139_; 
v_G_5094_ = lean_ctor_get(v_date_4523_, 0);
v_y_5095_ = lean_ctor_get(v_date_4523_, 1);
v_u_5096_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5097_ = lean_ctor_get(v_date_4523_, 3);
v_D_5098_ = lean_ctor_get(v_date_4523_, 4);
v_M_5099_ = lean_ctor_get(v_date_4523_, 5);
v_L_5100_ = lean_ctor_get(v_date_4523_, 6);
v_d_5101_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5102_ = lean_ctor_get(v_date_4523_, 8);
v_q_5103_ = lean_ctor_get(v_date_4523_, 9);
v_w_5104_ = lean_ctor_get(v_date_4523_, 10);
v_E_5105_ = lean_ctor_get(v_date_4523_, 12);
v_e_5106_ = lean_ctor_get(v_date_4523_, 13);
v_c_5107_ = lean_ctor_get(v_date_4523_, 14);
v_F_5108_ = lean_ctor_get(v_date_4523_, 15);
v_a_5109_ = lean_ctor_get(v_date_4523_, 16);
v_b_5110_ = lean_ctor_get(v_date_4523_, 17);
v_B_5111_ = lean_ctor_get(v_date_4523_, 18);
v_h_5112_ = lean_ctor_get(v_date_4523_, 19);
v_K_5113_ = lean_ctor_get(v_date_4523_, 20);
v_k_5114_ = lean_ctor_get(v_date_4523_, 21);
v_H_5115_ = lean_ctor_get(v_date_4523_, 22);
v_m_5116_ = lean_ctor_get(v_date_4523_, 23);
v_s_5117_ = lean_ctor_get(v_date_4523_, 24);
v_S_5118_ = lean_ctor_get(v_date_4523_, 25);
v_A_5119_ = lean_ctor_get(v_date_4523_, 26);
v_n_5120_ = lean_ctor_get(v_date_4523_, 27);
v_N_5121_ = lean_ctor_get(v_date_4523_, 28);
v_V_5122_ = lean_ctor_get(v_date_4523_, 29);
v_z_5123_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5124_ = lean_ctor_get(v_date_4523_, 31);
v_v_5125_ = lean_ctor_get(v_date_4523_, 32);
v_O_5126_ = lean_ctor_get(v_date_4523_, 33);
v_X_5127_ = lean_ctor_get(v_date_4523_, 34);
v_x_5128_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5129_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5139_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5139_ == 0)
{
lean_object* v_unused_5140_; 
v_unused_5140_ = lean_ctor_get(v_date_4523_, 11);
lean_dec(v_unused_5140_);
v___x_5131_ = v_date_4523_;
v_isShared_5132_ = v_isSharedCheck_5139_;
goto v_resetjp_5130_;
}
else
{
lean_inc(v_Z_5129_);
lean_inc(v_x_5128_);
lean_inc(v_X_5127_);
lean_inc(v_O_5126_);
lean_inc(v_v_5125_);
lean_inc(v_zabbrev_5124_);
lean_inc(v_z_5123_);
lean_inc(v_V_5122_);
lean_inc(v_N_5121_);
lean_inc(v_n_5120_);
lean_inc(v_A_5119_);
lean_inc(v_S_5118_);
lean_inc(v_s_5117_);
lean_inc(v_m_5116_);
lean_inc(v_H_5115_);
lean_inc(v_k_5114_);
lean_inc(v_K_5113_);
lean_inc(v_h_5112_);
lean_inc(v_B_5111_);
lean_inc(v_b_5110_);
lean_inc(v_a_5109_);
lean_inc(v_F_5108_);
lean_inc(v_c_5107_);
lean_inc(v_e_5106_);
lean_inc(v_E_5105_);
lean_inc(v_w_5104_);
lean_inc(v_q_5103_);
lean_inc(v_Q_5102_);
lean_inc(v_d_5101_);
lean_inc(v_L_5100_);
lean_inc(v_M_5099_);
lean_inc(v_D_5098_);
lean_inc(v_Y_5097_);
lean_inc(v_u_5096_);
lean_inc(v_y_5095_);
lean_inc(v_G_5094_);
lean_dec(v_date_4523_);
v___x_5131_ = lean_box(0);
v_isShared_5132_ = v_isSharedCheck_5139_;
goto v_resetjp_5130_;
}
v_resetjp_5130_:
{
lean_object* v___x_5134_; 
if (v_isShared_5093_ == 0)
{
lean_ctor_set_tag(v___x_5092_, 1);
lean_ctor_set(v___x_5092_, 0, v_data_4525_);
v___x_5134_ = v___x_5092_;
goto v_reusejp_5133_;
}
else
{
lean_object* v_reuseFailAlloc_5138_; 
v_reuseFailAlloc_5138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5138_, 0, v_data_4525_);
v___x_5134_ = v_reuseFailAlloc_5138_;
goto v_reusejp_5133_;
}
v_reusejp_5133_:
{
lean_object* v___x_5136_; 
if (v_isShared_5132_ == 0)
{
lean_ctor_set(v___x_5131_, 11, v___x_5134_);
v___x_5136_ = v___x_5131_;
goto v_reusejp_5135_;
}
else
{
lean_object* v_reuseFailAlloc_5137_; 
v_reuseFailAlloc_5137_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5137_, 0, v_G_5094_);
lean_ctor_set(v_reuseFailAlloc_5137_, 1, v_y_5095_);
lean_ctor_set(v_reuseFailAlloc_5137_, 2, v_u_5096_);
lean_ctor_set(v_reuseFailAlloc_5137_, 3, v_Y_5097_);
lean_ctor_set(v_reuseFailAlloc_5137_, 4, v_D_5098_);
lean_ctor_set(v_reuseFailAlloc_5137_, 5, v_M_5099_);
lean_ctor_set(v_reuseFailAlloc_5137_, 6, v_L_5100_);
lean_ctor_set(v_reuseFailAlloc_5137_, 7, v_d_5101_);
lean_ctor_set(v_reuseFailAlloc_5137_, 8, v_Q_5102_);
lean_ctor_set(v_reuseFailAlloc_5137_, 9, v_q_5103_);
lean_ctor_set(v_reuseFailAlloc_5137_, 10, v_w_5104_);
lean_ctor_set(v_reuseFailAlloc_5137_, 11, v___x_5134_);
lean_ctor_set(v_reuseFailAlloc_5137_, 12, v_E_5105_);
lean_ctor_set(v_reuseFailAlloc_5137_, 13, v_e_5106_);
lean_ctor_set(v_reuseFailAlloc_5137_, 14, v_c_5107_);
lean_ctor_set(v_reuseFailAlloc_5137_, 15, v_F_5108_);
lean_ctor_set(v_reuseFailAlloc_5137_, 16, v_a_5109_);
lean_ctor_set(v_reuseFailAlloc_5137_, 17, v_b_5110_);
lean_ctor_set(v_reuseFailAlloc_5137_, 18, v_B_5111_);
lean_ctor_set(v_reuseFailAlloc_5137_, 19, v_h_5112_);
lean_ctor_set(v_reuseFailAlloc_5137_, 20, v_K_5113_);
lean_ctor_set(v_reuseFailAlloc_5137_, 21, v_k_5114_);
lean_ctor_set(v_reuseFailAlloc_5137_, 22, v_H_5115_);
lean_ctor_set(v_reuseFailAlloc_5137_, 23, v_m_5116_);
lean_ctor_set(v_reuseFailAlloc_5137_, 24, v_s_5117_);
lean_ctor_set(v_reuseFailAlloc_5137_, 25, v_S_5118_);
lean_ctor_set(v_reuseFailAlloc_5137_, 26, v_A_5119_);
lean_ctor_set(v_reuseFailAlloc_5137_, 27, v_n_5120_);
lean_ctor_set(v_reuseFailAlloc_5137_, 28, v_N_5121_);
lean_ctor_set(v_reuseFailAlloc_5137_, 29, v_V_5122_);
lean_ctor_set(v_reuseFailAlloc_5137_, 30, v_z_5123_);
lean_ctor_set(v_reuseFailAlloc_5137_, 31, v_zabbrev_5124_);
lean_ctor_set(v_reuseFailAlloc_5137_, 32, v_v_5125_);
lean_ctor_set(v_reuseFailAlloc_5137_, 33, v_O_5126_);
lean_ctor_set(v_reuseFailAlloc_5137_, 34, v_X_5127_);
lean_ctor_set(v_reuseFailAlloc_5137_, 35, v_x_5128_);
lean_ctor_set(v_reuseFailAlloc_5137_, 36, v_Z_5129_);
v___x_5136_ = v_reuseFailAlloc_5137_;
goto v_reusejp_5135_;
}
v_reusejp_5135_:
{
return v___x_5136_;
}
}
}
}
}
case 12:
{
lean_object* v_G_5143_; lean_object* v_y_5144_; lean_object* v_u_5145_; lean_object* v_Y_5146_; lean_object* v_D_5147_; lean_object* v_M_5148_; lean_object* v_L_5149_; lean_object* v_d_5150_; lean_object* v_Q_5151_; lean_object* v_q_5152_; lean_object* v_w_5153_; lean_object* v_W_5154_; lean_object* v_e_5155_; lean_object* v_c_5156_; lean_object* v_F_5157_; lean_object* v_a_5158_; lean_object* v_b_5159_; lean_object* v_B_5160_; lean_object* v_h_5161_; lean_object* v_K_5162_; lean_object* v_k_5163_; lean_object* v_H_5164_; lean_object* v_m_5165_; lean_object* v_s_5166_; lean_object* v_S_5167_; lean_object* v_A_5168_; lean_object* v_n_5169_; lean_object* v_N_5170_; lean_object* v_V_5171_; lean_object* v_z_5172_; lean_object* v_zabbrev_5173_; lean_object* v_v_5174_; lean_object* v_O_5175_; lean_object* v_X_5176_; lean_object* v_x_5177_; lean_object* v_Z_5178_; lean_object* v___x_5180_; uint8_t v_isShared_5181_; uint8_t v_isSharedCheck_5186_; 
lean_dec_ref_known(v_modifier_4524_, 0);
v_G_5143_ = lean_ctor_get(v_date_4523_, 0);
v_y_5144_ = lean_ctor_get(v_date_4523_, 1);
v_u_5145_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5146_ = lean_ctor_get(v_date_4523_, 3);
v_D_5147_ = lean_ctor_get(v_date_4523_, 4);
v_M_5148_ = lean_ctor_get(v_date_4523_, 5);
v_L_5149_ = lean_ctor_get(v_date_4523_, 6);
v_d_5150_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5151_ = lean_ctor_get(v_date_4523_, 8);
v_q_5152_ = lean_ctor_get(v_date_4523_, 9);
v_w_5153_ = lean_ctor_get(v_date_4523_, 10);
v_W_5154_ = lean_ctor_get(v_date_4523_, 11);
v_e_5155_ = lean_ctor_get(v_date_4523_, 13);
v_c_5156_ = lean_ctor_get(v_date_4523_, 14);
v_F_5157_ = lean_ctor_get(v_date_4523_, 15);
v_a_5158_ = lean_ctor_get(v_date_4523_, 16);
v_b_5159_ = lean_ctor_get(v_date_4523_, 17);
v_B_5160_ = lean_ctor_get(v_date_4523_, 18);
v_h_5161_ = lean_ctor_get(v_date_4523_, 19);
v_K_5162_ = lean_ctor_get(v_date_4523_, 20);
v_k_5163_ = lean_ctor_get(v_date_4523_, 21);
v_H_5164_ = lean_ctor_get(v_date_4523_, 22);
v_m_5165_ = lean_ctor_get(v_date_4523_, 23);
v_s_5166_ = lean_ctor_get(v_date_4523_, 24);
v_S_5167_ = lean_ctor_get(v_date_4523_, 25);
v_A_5168_ = lean_ctor_get(v_date_4523_, 26);
v_n_5169_ = lean_ctor_get(v_date_4523_, 27);
v_N_5170_ = lean_ctor_get(v_date_4523_, 28);
v_V_5171_ = lean_ctor_get(v_date_4523_, 29);
v_z_5172_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5173_ = lean_ctor_get(v_date_4523_, 31);
v_v_5174_ = lean_ctor_get(v_date_4523_, 32);
v_O_5175_ = lean_ctor_get(v_date_4523_, 33);
v_X_5176_ = lean_ctor_get(v_date_4523_, 34);
v_x_5177_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5178_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5186_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5186_ == 0)
{
lean_object* v_unused_5187_; 
v_unused_5187_ = lean_ctor_get(v_date_4523_, 12);
lean_dec(v_unused_5187_);
v___x_5180_ = v_date_4523_;
v_isShared_5181_ = v_isSharedCheck_5186_;
goto v_resetjp_5179_;
}
else
{
lean_inc(v_Z_5178_);
lean_inc(v_x_5177_);
lean_inc(v_X_5176_);
lean_inc(v_O_5175_);
lean_inc(v_v_5174_);
lean_inc(v_zabbrev_5173_);
lean_inc(v_z_5172_);
lean_inc(v_V_5171_);
lean_inc(v_N_5170_);
lean_inc(v_n_5169_);
lean_inc(v_A_5168_);
lean_inc(v_S_5167_);
lean_inc(v_s_5166_);
lean_inc(v_m_5165_);
lean_inc(v_H_5164_);
lean_inc(v_k_5163_);
lean_inc(v_K_5162_);
lean_inc(v_h_5161_);
lean_inc(v_B_5160_);
lean_inc(v_b_5159_);
lean_inc(v_a_5158_);
lean_inc(v_F_5157_);
lean_inc(v_c_5156_);
lean_inc(v_e_5155_);
lean_inc(v_W_5154_);
lean_inc(v_w_5153_);
lean_inc(v_q_5152_);
lean_inc(v_Q_5151_);
lean_inc(v_d_5150_);
lean_inc(v_L_5149_);
lean_inc(v_M_5148_);
lean_inc(v_D_5147_);
lean_inc(v_Y_5146_);
lean_inc(v_u_5145_);
lean_inc(v_y_5144_);
lean_inc(v_G_5143_);
lean_dec(v_date_4523_);
v___x_5180_ = lean_box(0);
v_isShared_5181_ = v_isSharedCheck_5186_;
goto v_resetjp_5179_;
}
v_resetjp_5179_:
{
lean_object* v___x_5182_; lean_object* v___x_5184_; 
v___x_5182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5182_, 0, v_data_4525_);
if (v_isShared_5181_ == 0)
{
lean_ctor_set(v___x_5180_, 12, v___x_5182_);
v___x_5184_ = v___x_5180_;
goto v_reusejp_5183_;
}
else
{
lean_object* v_reuseFailAlloc_5185_; 
v_reuseFailAlloc_5185_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5185_, 0, v_G_5143_);
lean_ctor_set(v_reuseFailAlloc_5185_, 1, v_y_5144_);
lean_ctor_set(v_reuseFailAlloc_5185_, 2, v_u_5145_);
lean_ctor_set(v_reuseFailAlloc_5185_, 3, v_Y_5146_);
lean_ctor_set(v_reuseFailAlloc_5185_, 4, v_D_5147_);
lean_ctor_set(v_reuseFailAlloc_5185_, 5, v_M_5148_);
lean_ctor_set(v_reuseFailAlloc_5185_, 6, v_L_5149_);
lean_ctor_set(v_reuseFailAlloc_5185_, 7, v_d_5150_);
lean_ctor_set(v_reuseFailAlloc_5185_, 8, v_Q_5151_);
lean_ctor_set(v_reuseFailAlloc_5185_, 9, v_q_5152_);
lean_ctor_set(v_reuseFailAlloc_5185_, 10, v_w_5153_);
lean_ctor_set(v_reuseFailAlloc_5185_, 11, v_W_5154_);
lean_ctor_set(v_reuseFailAlloc_5185_, 12, v___x_5182_);
lean_ctor_set(v_reuseFailAlloc_5185_, 13, v_e_5155_);
lean_ctor_set(v_reuseFailAlloc_5185_, 14, v_c_5156_);
lean_ctor_set(v_reuseFailAlloc_5185_, 15, v_F_5157_);
lean_ctor_set(v_reuseFailAlloc_5185_, 16, v_a_5158_);
lean_ctor_set(v_reuseFailAlloc_5185_, 17, v_b_5159_);
lean_ctor_set(v_reuseFailAlloc_5185_, 18, v_B_5160_);
lean_ctor_set(v_reuseFailAlloc_5185_, 19, v_h_5161_);
lean_ctor_set(v_reuseFailAlloc_5185_, 20, v_K_5162_);
lean_ctor_set(v_reuseFailAlloc_5185_, 21, v_k_5163_);
lean_ctor_set(v_reuseFailAlloc_5185_, 22, v_H_5164_);
lean_ctor_set(v_reuseFailAlloc_5185_, 23, v_m_5165_);
lean_ctor_set(v_reuseFailAlloc_5185_, 24, v_s_5166_);
lean_ctor_set(v_reuseFailAlloc_5185_, 25, v_S_5167_);
lean_ctor_set(v_reuseFailAlloc_5185_, 26, v_A_5168_);
lean_ctor_set(v_reuseFailAlloc_5185_, 27, v_n_5169_);
lean_ctor_set(v_reuseFailAlloc_5185_, 28, v_N_5170_);
lean_ctor_set(v_reuseFailAlloc_5185_, 29, v_V_5171_);
lean_ctor_set(v_reuseFailAlloc_5185_, 30, v_z_5172_);
lean_ctor_set(v_reuseFailAlloc_5185_, 31, v_zabbrev_5173_);
lean_ctor_set(v_reuseFailAlloc_5185_, 32, v_v_5174_);
lean_ctor_set(v_reuseFailAlloc_5185_, 33, v_O_5175_);
lean_ctor_set(v_reuseFailAlloc_5185_, 34, v_X_5176_);
lean_ctor_set(v_reuseFailAlloc_5185_, 35, v_x_5177_);
lean_ctor_set(v_reuseFailAlloc_5185_, 36, v_Z_5178_);
v___x_5184_ = v_reuseFailAlloc_5185_;
goto v_reusejp_5183_;
}
v_reusejp_5183_:
{
return v___x_5184_;
}
}
}
case 13:
{
lean_object* v___x_5189_; uint8_t v_isShared_5190_; uint8_t v_isSharedCheck_5238_; 
v_isSharedCheck_5238_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_5238_ == 0)
{
lean_object* v_unused_5239_; 
v_unused_5239_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_5239_);
v___x_5189_ = v_modifier_4524_;
v_isShared_5190_ = v_isSharedCheck_5238_;
goto v_resetjp_5188_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_5189_ = lean_box(0);
v_isShared_5190_ = v_isSharedCheck_5238_;
goto v_resetjp_5188_;
}
v_resetjp_5188_:
{
lean_object* v_G_5191_; lean_object* v_y_5192_; lean_object* v_u_5193_; lean_object* v_Y_5194_; lean_object* v_D_5195_; lean_object* v_M_5196_; lean_object* v_L_5197_; lean_object* v_d_5198_; lean_object* v_Q_5199_; lean_object* v_q_5200_; lean_object* v_w_5201_; lean_object* v_W_5202_; lean_object* v_E_5203_; lean_object* v_c_5204_; lean_object* v_F_5205_; lean_object* v_a_5206_; lean_object* v_b_5207_; lean_object* v_B_5208_; lean_object* v_h_5209_; lean_object* v_K_5210_; lean_object* v_k_5211_; lean_object* v_H_5212_; lean_object* v_m_5213_; lean_object* v_s_5214_; lean_object* v_S_5215_; lean_object* v_A_5216_; lean_object* v_n_5217_; lean_object* v_N_5218_; lean_object* v_V_5219_; lean_object* v_z_5220_; lean_object* v_zabbrev_5221_; lean_object* v_v_5222_; lean_object* v_O_5223_; lean_object* v_X_5224_; lean_object* v_x_5225_; lean_object* v_Z_5226_; lean_object* v___x_5228_; uint8_t v_isShared_5229_; uint8_t v_isSharedCheck_5236_; 
v_G_5191_ = lean_ctor_get(v_date_4523_, 0);
v_y_5192_ = lean_ctor_get(v_date_4523_, 1);
v_u_5193_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5194_ = lean_ctor_get(v_date_4523_, 3);
v_D_5195_ = lean_ctor_get(v_date_4523_, 4);
v_M_5196_ = lean_ctor_get(v_date_4523_, 5);
v_L_5197_ = lean_ctor_get(v_date_4523_, 6);
v_d_5198_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5199_ = lean_ctor_get(v_date_4523_, 8);
v_q_5200_ = lean_ctor_get(v_date_4523_, 9);
v_w_5201_ = lean_ctor_get(v_date_4523_, 10);
v_W_5202_ = lean_ctor_get(v_date_4523_, 11);
v_E_5203_ = lean_ctor_get(v_date_4523_, 12);
v_c_5204_ = lean_ctor_get(v_date_4523_, 14);
v_F_5205_ = lean_ctor_get(v_date_4523_, 15);
v_a_5206_ = lean_ctor_get(v_date_4523_, 16);
v_b_5207_ = lean_ctor_get(v_date_4523_, 17);
v_B_5208_ = lean_ctor_get(v_date_4523_, 18);
v_h_5209_ = lean_ctor_get(v_date_4523_, 19);
v_K_5210_ = lean_ctor_get(v_date_4523_, 20);
v_k_5211_ = lean_ctor_get(v_date_4523_, 21);
v_H_5212_ = lean_ctor_get(v_date_4523_, 22);
v_m_5213_ = lean_ctor_get(v_date_4523_, 23);
v_s_5214_ = lean_ctor_get(v_date_4523_, 24);
v_S_5215_ = lean_ctor_get(v_date_4523_, 25);
v_A_5216_ = lean_ctor_get(v_date_4523_, 26);
v_n_5217_ = lean_ctor_get(v_date_4523_, 27);
v_N_5218_ = lean_ctor_get(v_date_4523_, 28);
v_V_5219_ = lean_ctor_get(v_date_4523_, 29);
v_z_5220_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5221_ = lean_ctor_get(v_date_4523_, 31);
v_v_5222_ = lean_ctor_get(v_date_4523_, 32);
v_O_5223_ = lean_ctor_get(v_date_4523_, 33);
v_X_5224_ = lean_ctor_get(v_date_4523_, 34);
v_x_5225_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5226_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5236_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5236_ == 0)
{
lean_object* v_unused_5237_; 
v_unused_5237_ = lean_ctor_get(v_date_4523_, 13);
lean_dec(v_unused_5237_);
v___x_5228_ = v_date_4523_;
v_isShared_5229_ = v_isSharedCheck_5236_;
goto v_resetjp_5227_;
}
else
{
lean_inc(v_Z_5226_);
lean_inc(v_x_5225_);
lean_inc(v_X_5224_);
lean_inc(v_O_5223_);
lean_inc(v_v_5222_);
lean_inc(v_zabbrev_5221_);
lean_inc(v_z_5220_);
lean_inc(v_V_5219_);
lean_inc(v_N_5218_);
lean_inc(v_n_5217_);
lean_inc(v_A_5216_);
lean_inc(v_S_5215_);
lean_inc(v_s_5214_);
lean_inc(v_m_5213_);
lean_inc(v_H_5212_);
lean_inc(v_k_5211_);
lean_inc(v_K_5210_);
lean_inc(v_h_5209_);
lean_inc(v_B_5208_);
lean_inc(v_b_5207_);
lean_inc(v_a_5206_);
lean_inc(v_F_5205_);
lean_inc(v_c_5204_);
lean_inc(v_E_5203_);
lean_inc(v_W_5202_);
lean_inc(v_w_5201_);
lean_inc(v_q_5200_);
lean_inc(v_Q_5199_);
lean_inc(v_d_5198_);
lean_inc(v_L_5197_);
lean_inc(v_M_5196_);
lean_inc(v_D_5195_);
lean_inc(v_Y_5194_);
lean_inc(v_u_5193_);
lean_inc(v_y_5192_);
lean_inc(v_G_5191_);
lean_dec(v_date_4523_);
v___x_5228_ = lean_box(0);
v_isShared_5229_ = v_isSharedCheck_5236_;
goto v_resetjp_5227_;
}
v_resetjp_5227_:
{
lean_object* v___x_5231_; 
if (v_isShared_5190_ == 0)
{
lean_ctor_set_tag(v___x_5189_, 1);
lean_ctor_set(v___x_5189_, 0, v_data_4525_);
v___x_5231_ = v___x_5189_;
goto v_reusejp_5230_;
}
else
{
lean_object* v_reuseFailAlloc_5235_; 
v_reuseFailAlloc_5235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5235_, 0, v_data_4525_);
v___x_5231_ = v_reuseFailAlloc_5235_;
goto v_reusejp_5230_;
}
v_reusejp_5230_:
{
lean_object* v___x_5233_; 
if (v_isShared_5229_ == 0)
{
lean_ctor_set(v___x_5228_, 13, v___x_5231_);
v___x_5233_ = v___x_5228_;
goto v_reusejp_5232_;
}
else
{
lean_object* v_reuseFailAlloc_5234_; 
v_reuseFailAlloc_5234_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5234_, 0, v_G_5191_);
lean_ctor_set(v_reuseFailAlloc_5234_, 1, v_y_5192_);
lean_ctor_set(v_reuseFailAlloc_5234_, 2, v_u_5193_);
lean_ctor_set(v_reuseFailAlloc_5234_, 3, v_Y_5194_);
lean_ctor_set(v_reuseFailAlloc_5234_, 4, v_D_5195_);
lean_ctor_set(v_reuseFailAlloc_5234_, 5, v_M_5196_);
lean_ctor_set(v_reuseFailAlloc_5234_, 6, v_L_5197_);
lean_ctor_set(v_reuseFailAlloc_5234_, 7, v_d_5198_);
lean_ctor_set(v_reuseFailAlloc_5234_, 8, v_Q_5199_);
lean_ctor_set(v_reuseFailAlloc_5234_, 9, v_q_5200_);
lean_ctor_set(v_reuseFailAlloc_5234_, 10, v_w_5201_);
lean_ctor_set(v_reuseFailAlloc_5234_, 11, v_W_5202_);
lean_ctor_set(v_reuseFailAlloc_5234_, 12, v_E_5203_);
lean_ctor_set(v_reuseFailAlloc_5234_, 13, v___x_5231_);
lean_ctor_set(v_reuseFailAlloc_5234_, 14, v_c_5204_);
lean_ctor_set(v_reuseFailAlloc_5234_, 15, v_F_5205_);
lean_ctor_set(v_reuseFailAlloc_5234_, 16, v_a_5206_);
lean_ctor_set(v_reuseFailAlloc_5234_, 17, v_b_5207_);
lean_ctor_set(v_reuseFailAlloc_5234_, 18, v_B_5208_);
lean_ctor_set(v_reuseFailAlloc_5234_, 19, v_h_5209_);
lean_ctor_set(v_reuseFailAlloc_5234_, 20, v_K_5210_);
lean_ctor_set(v_reuseFailAlloc_5234_, 21, v_k_5211_);
lean_ctor_set(v_reuseFailAlloc_5234_, 22, v_H_5212_);
lean_ctor_set(v_reuseFailAlloc_5234_, 23, v_m_5213_);
lean_ctor_set(v_reuseFailAlloc_5234_, 24, v_s_5214_);
lean_ctor_set(v_reuseFailAlloc_5234_, 25, v_S_5215_);
lean_ctor_set(v_reuseFailAlloc_5234_, 26, v_A_5216_);
lean_ctor_set(v_reuseFailAlloc_5234_, 27, v_n_5217_);
lean_ctor_set(v_reuseFailAlloc_5234_, 28, v_N_5218_);
lean_ctor_set(v_reuseFailAlloc_5234_, 29, v_V_5219_);
lean_ctor_set(v_reuseFailAlloc_5234_, 30, v_z_5220_);
lean_ctor_set(v_reuseFailAlloc_5234_, 31, v_zabbrev_5221_);
lean_ctor_set(v_reuseFailAlloc_5234_, 32, v_v_5222_);
lean_ctor_set(v_reuseFailAlloc_5234_, 33, v_O_5223_);
lean_ctor_set(v_reuseFailAlloc_5234_, 34, v_X_5224_);
lean_ctor_set(v_reuseFailAlloc_5234_, 35, v_x_5225_);
lean_ctor_set(v_reuseFailAlloc_5234_, 36, v_Z_5226_);
v___x_5233_ = v_reuseFailAlloc_5234_;
goto v_reusejp_5232_;
}
v_reusejp_5232_:
{
return v___x_5233_;
}
}
}
}
}
case 14:
{
lean_object* v___x_5241_; uint8_t v_isShared_5242_; uint8_t v_isSharedCheck_5290_; 
v_isSharedCheck_5290_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_5290_ == 0)
{
lean_object* v_unused_5291_; 
v_unused_5291_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_5291_);
v___x_5241_ = v_modifier_4524_;
v_isShared_5242_ = v_isSharedCheck_5290_;
goto v_resetjp_5240_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_5241_ = lean_box(0);
v_isShared_5242_ = v_isSharedCheck_5290_;
goto v_resetjp_5240_;
}
v_resetjp_5240_:
{
lean_object* v_G_5243_; lean_object* v_y_5244_; lean_object* v_u_5245_; lean_object* v_Y_5246_; lean_object* v_D_5247_; lean_object* v_M_5248_; lean_object* v_L_5249_; lean_object* v_d_5250_; lean_object* v_Q_5251_; lean_object* v_q_5252_; lean_object* v_w_5253_; lean_object* v_W_5254_; lean_object* v_E_5255_; lean_object* v_e_5256_; lean_object* v_F_5257_; lean_object* v_a_5258_; lean_object* v_b_5259_; lean_object* v_B_5260_; lean_object* v_h_5261_; lean_object* v_K_5262_; lean_object* v_k_5263_; lean_object* v_H_5264_; lean_object* v_m_5265_; lean_object* v_s_5266_; lean_object* v_S_5267_; lean_object* v_A_5268_; lean_object* v_n_5269_; lean_object* v_N_5270_; lean_object* v_V_5271_; lean_object* v_z_5272_; lean_object* v_zabbrev_5273_; lean_object* v_v_5274_; lean_object* v_O_5275_; lean_object* v_X_5276_; lean_object* v_x_5277_; lean_object* v_Z_5278_; lean_object* v___x_5280_; uint8_t v_isShared_5281_; uint8_t v_isSharedCheck_5288_; 
v_G_5243_ = lean_ctor_get(v_date_4523_, 0);
v_y_5244_ = lean_ctor_get(v_date_4523_, 1);
v_u_5245_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5246_ = lean_ctor_get(v_date_4523_, 3);
v_D_5247_ = lean_ctor_get(v_date_4523_, 4);
v_M_5248_ = lean_ctor_get(v_date_4523_, 5);
v_L_5249_ = lean_ctor_get(v_date_4523_, 6);
v_d_5250_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5251_ = lean_ctor_get(v_date_4523_, 8);
v_q_5252_ = lean_ctor_get(v_date_4523_, 9);
v_w_5253_ = lean_ctor_get(v_date_4523_, 10);
v_W_5254_ = lean_ctor_get(v_date_4523_, 11);
v_E_5255_ = lean_ctor_get(v_date_4523_, 12);
v_e_5256_ = lean_ctor_get(v_date_4523_, 13);
v_F_5257_ = lean_ctor_get(v_date_4523_, 15);
v_a_5258_ = lean_ctor_get(v_date_4523_, 16);
v_b_5259_ = lean_ctor_get(v_date_4523_, 17);
v_B_5260_ = lean_ctor_get(v_date_4523_, 18);
v_h_5261_ = lean_ctor_get(v_date_4523_, 19);
v_K_5262_ = lean_ctor_get(v_date_4523_, 20);
v_k_5263_ = lean_ctor_get(v_date_4523_, 21);
v_H_5264_ = lean_ctor_get(v_date_4523_, 22);
v_m_5265_ = lean_ctor_get(v_date_4523_, 23);
v_s_5266_ = lean_ctor_get(v_date_4523_, 24);
v_S_5267_ = lean_ctor_get(v_date_4523_, 25);
v_A_5268_ = lean_ctor_get(v_date_4523_, 26);
v_n_5269_ = lean_ctor_get(v_date_4523_, 27);
v_N_5270_ = lean_ctor_get(v_date_4523_, 28);
v_V_5271_ = lean_ctor_get(v_date_4523_, 29);
v_z_5272_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5273_ = lean_ctor_get(v_date_4523_, 31);
v_v_5274_ = lean_ctor_get(v_date_4523_, 32);
v_O_5275_ = lean_ctor_get(v_date_4523_, 33);
v_X_5276_ = lean_ctor_get(v_date_4523_, 34);
v_x_5277_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5278_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5288_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5288_ == 0)
{
lean_object* v_unused_5289_; 
v_unused_5289_ = lean_ctor_get(v_date_4523_, 14);
lean_dec(v_unused_5289_);
v___x_5280_ = v_date_4523_;
v_isShared_5281_ = v_isSharedCheck_5288_;
goto v_resetjp_5279_;
}
else
{
lean_inc(v_Z_5278_);
lean_inc(v_x_5277_);
lean_inc(v_X_5276_);
lean_inc(v_O_5275_);
lean_inc(v_v_5274_);
lean_inc(v_zabbrev_5273_);
lean_inc(v_z_5272_);
lean_inc(v_V_5271_);
lean_inc(v_N_5270_);
lean_inc(v_n_5269_);
lean_inc(v_A_5268_);
lean_inc(v_S_5267_);
lean_inc(v_s_5266_);
lean_inc(v_m_5265_);
lean_inc(v_H_5264_);
lean_inc(v_k_5263_);
lean_inc(v_K_5262_);
lean_inc(v_h_5261_);
lean_inc(v_B_5260_);
lean_inc(v_b_5259_);
lean_inc(v_a_5258_);
lean_inc(v_F_5257_);
lean_inc(v_e_5256_);
lean_inc(v_E_5255_);
lean_inc(v_W_5254_);
lean_inc(v_w_5253_);
lean_inc(v_q_5252_);
lean_inc(v_Q_5251_);
lean_inc(v_d_5250_);
lean_inc(v_L_5249_);
lean_inc(v_M_5248_);
lean_inc(v_D_5247_);
lean_inc(v_Y_5246_);
lean_inc(v_u_5245_);
lean_inc(v_y_5244_);
lean_inc(v_G_5243_);
lean_dec(v_date_4523_);
v___x_5280_ = lean_box(0);
v_isShared_5281_ = v_isSharedCheck_5288_;
goto v_resetjp_5279_;
}
v_resetjp_5279_:
{
lean_object* v___x_5283_; 
if (v_isShared_5242_ == 0)
{
lean_ctor_set_tag(v___x_5241_, 1);
lean_ctor_set(v___x_5241_, 0, v_data_4525_);
v___x_5283_ = v___x_5241_;
goto v_reusejp_5282_;
}
else
{
lean_object* v_reuseFailAlloc_5287_; 
v_reuseFailAlloc_5287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5287_, 0, v_data_4525_);
v___x_5283_ = v_reuseFailAlloc_5287_;
goto v_reusejp_5282_;
}
v_reusejp_5282_:
{
lean_object* v___x_5285_; 
if (v_isShared_5281_ == 0)
{
lean_ctor_set(v___x_5280_, 14, v___x_5283_);
v___x_5285_ = v___x_5280_;
goto v_reusejp_5284_;
}
else
{
lean_object* v_reuseFailAlloc_5286_; 
v_reuseFailAlloc_5286_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5286_, 0, v_G_5243_);
lean_ctor_set(v_reuseFailAlloc_5286_, 1, v_y_5244_);
lean_ctor_set(v_reuseFailAlloc_5286_, 2, v_u_5245_);
lean_ctor_set(v_reuseFailAlloc_5286_, 3, v_Y_5246_);
lean_ctor_set(v_reuseFailAlloc_5286_, 4, v_D_5247_);
lean_ctor_set(v_reuseFailAlloc_5286_, 5, v_M_5248_);
lean_ctor_set(v_reuseFailAlloc_5286_, 6, v_L_5249_);
lean_ctor_set(v_reuseFailAlloc_5286_, 7, v_d_5250_);
lean_ctor_set(v_reuseFailAlloc_5286_, 8, v_Q_5251_);
lean_ctor_set(v_reuseFailAlloc_5286_, 9, v_q_5252_);
lean_ctor_set(v_reuseFailAlloc_5286_, 10, v_w_5253_);
lean_ctor_set(v_reuseFailAlloc_5286_, 11, v_W_5254_);
lean_ctor_set(v_reuseFailAlloc_5286_, 12, v_E_5255_);
lean_ctor_set(v_reuseFailAlloc_5286_, 13, v_e_5256_);
lean_ctor_set(v_reuseFailAlloc_5286_, 14, v___x_5283_);
lean_ctor_set(v_reuseFailAlloc_5286_, 15, v_F_5257_);
lean_ctor_set(v_reuseFailAlloc_5286_, 16, v_a_5258_);
lean_ctor_set(v_reuseFailAlloc_5286_, 17, v_b_5259_);
lean_ctor_set(v_reuseFailAlloc_5286_, 18, v_B_5260_);
lean_ctor_set(v_reuseFailAlloc_5286_, 19, v_h_5261_);
lean_ctor_set(v_reuseFailAlloc_5286_, 20, v_K_5262_);
lean_ctor_set(v_reuseFailAlloc_5286_, 21, v_k_5263_);
lean_ctor_set(v_reuseFailAlloc_5286_, 22, v_H_5264_);
lean_ctor_set(v_reuseFailAlloc_5286_, 23, v_m_5265_);
lean_ctor_set(v_reuseFailAlloc_5286_, 24, v_s_5266_);
lean_ctor_set(v_reuseFailAlloc_5286_, 25, v_S_5267_);
lean_ctor_set(v_reuseFailAlloc_5286_, 26, v_A_5268_);
lean_ctor_set(v_reuseFailAlloc_5286_, 27, v_n_5269_);
lean_ctor_set(v_reuseFailAlloc_5286_, 28, v_N_5270_);
lean_ctor_set(v_reuseFailAlloc_5286_, 29, v_V_5271_);
lean_ctor_set(v_reuseFailAlloc_5286_, 30, v_z_5272_);
lean_ctor_set(v_reuseFailAlloc_5286_, 31, v_zabbrev_5273_);
lean_ctor_set(v_reuseFailAlloc_5286_, 32, v_v_5274_);
lean_ctor_set(v_reuseFailAlloc_5286_, 33, v_O_5275_);
lean_ctor_set(v_reuseFailAlloc_5286_, 34, v_X_5276_);
lean_ctor_set(v_reuseFailAlloc_5286_, 35, v_x_5277_);
lean_ctor_set(v_reuseFailAlloc_5286_, 36, v_Z_5278_);
v___x_5285_ = v_reuseFailAlloc_5286_;
goto v_reusejp_5284_;
}
v_reusejp_5284_:
{
return v___x_5285_;
}
}
}
}
}
case 15:
{
lean_object* v___x_5293_; uint8_t v_isShared_5294_; uint8_t v_isSharedCheck_5342_; 
v_isSharedCheck_5342_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_5342_ == 0)
{
lean_object* v_unused_5343_; 
v_unused_5343_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_5343_);
v___x_5293_ = v_modifier_4524_;
v_isShared_5294_ = v_isSharedCheck_5342_;
goto v_resetjp_5292_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_5293_ = lean_box(0);
v_isShared_5294_ = v_isSharedCheck_5342_;
goto v_resetjp_5292_;
}
v_resetjp_5292_:
{
lean_object* v_G_5295_; lean_object* v_y_5296_; lean_object* v_u_5297_; lean_object* v_Y_5298_; lean_object* v_D_5299_; lean_object* v_M_5300_; lean_object* v_L_5301_; lean_object* v_d_5302_; lean_object* v_Q_5303_; lean_object* v_q_5304_; lean_object* v_w_5305_; lean_object* v_W_5306_; lean_object* v_E_5307_; lean_object* v_e_5308_; lean_object* v_c_5309_; lean_object* v_a_5310_; lean_object* v_b_5311_; lean_object* v_B_5312_; lean_object* v_h_5313_; lean_object* v_K_5314_; lean_object* v_k_5315_; lean_object* v_H_5316_; lean_object* v_m_5317_; lean_object* v_s_5318_; lean_object* v_S_5319_; lean_object* v_A_5320_; lean_object* v_n_5321_; lean_object* v_N_5322_; lean_object* v_V_5323_; lean_object* v_z_5324_; lean_object* v_zabbrev_5325_; lean_object* v_v_5326_; lean_object* v_O_5327_; lean_object* v_X_5328_; lean_object* v_x_5329_; lean_object* v_Z_5330_; lean_object* v___x_5332_; uint8_t v_isShared_5333_; uint8_t v_isSharedCheck_5340_; 
v_G_5295_ = lean_ctor_get(v_date_4523_, 0);
v_y_5296_ = lean_ctor_get(v_date_4523_, 1);
v_u_5297_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5298_ = lean_ctor_get(v_date_4523_, 3);
v_D_5299_ = lean_ctor_get(v_date_4523_, 4);
v_M_5300_ = lean_ctor_get(v_date_4523_, 5);
v_L_5301_ = lean_ctor_get(v_date_4523_, 6);
v_d_5302_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5303_ = lean_ctor_get(v_date_4523_, 8);
v_q_5304_ = lean_ctor_get(v_date_4523_, 9);
v_w_5305_ = lean_ctor_get(v_date_4523_, 10);
v_W_5306_ = lean_ctor_get(v_date_4523_, 11);
v_E_5307_ = lean_ctor_get(v_date_4523_, 12);
v_e_5308_ = lean_ctor_get(v_date_4523_, 13);
v_c_5309_ = lean_ctor_get(v_date_4523_, 14);
v_a_5310_ = lean_ctor_get(v_date_4523_, 16);
v_b_5311_ = lean_ctor_get(v_date_4523_, 17);
v_B_5312_ = lean_ctor_get(v_date_4523_, 18);
v_h_5313_ = lean_ctor_get(v_date_4523_, 19);
v_K_5314_ = lean_ctor_get(v_date_4523_, 20);
v_k_5315_ = lean_ctor_get(v_date_4523_, 21);
v_H_5316_ = lean_ctor_get(v_date_4523_, 22);
v_m_5317_ = lean_ctor_get(v_date_4523_, 23);
v_s_5318_ = lean_ctor_get(v_date_4523_, 24);
v_S_5319_ = lean_ctor_get(v_date_4523_, 25);
v_A_5320_ = lean_ctor_get(v_date_4523_, 26);
v_n_5321_ = lean_ctor_get(v_date_4523_, 27);
v_N_5322_ = lean_ctor_get(v_date_4523_, 28);
v_V_5323_ = lean_ctor_get(v_date_4523_, 29);
v_z_5324_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5325_ = lean_ctor_get(v_date_4523_, 31);
v_v_5326_ = lean_ctor_get(v_date_4523_, 32);
v_O_5327_ = lean_ctor_get(v_date_4523_, 33);
v_X_5328_ = lean_ctor_get(v_date_4523_, 34);
v_x_5329_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5330_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5340_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5340_ == 0)
{
lean_object* v_unused_5341_; 
v_unused_5341_ = lean_ctor_get(v_date_4523_, 15);
lean_dec(v_unused_5341_);
v___x_5332_ = v_date_4523_;
v_isShared_5333_ = v_isSharedCheck_5340_;
goto v_resetjp_5331_;
}
else
{
lean_inc(v_Z_5330_);
lean_inc(v_x_5329_);
lean_inc(v_X_5328_);
lean_inc(v_O_5327_);
lean_inc(v_v_5326_);
lean_inc(v_zabbrev_5325_);
lean_inc(v_z_5324_);
lean_inc(v_V_5323_);
lean_inc(v_N_5322_);
lean_inc(v_n_5321_);
lean_inc(v_A_5320_);
lean_inc(v_S_5319_);
lean_inc(v_s_5318_);
lean_inc(v_m_5317_);
lean_inc(v_H_5316_);
lean_inc(v_k_5315_);
lean_inc(v_K_5314_);
lean_inc(v_h_5313_);
lean_inc(v_B_5312_);
lean_inc(v_b_5311_);
lean_inc(v_a_5310_);
lean_inc(v_c_5309_);
lean_inc(v_e_5308_);
lean_inc(v_E_5307_);
lean_inc(v_W_5306_);
lean_inc(v_w_5305_);
lean_inc(v_q_5304_);
lean_inc(v_Q_5303_);
lean_inc(v_d_5302_);
lean_inc(v_L_5301_);
lean_inc(v_M_5300_);
lean_inc(v_D_5299_);
lean_inc(v_Y_5298_);
lean_inc(v_u_5297_);
lean_inc(v_y_5296_);
lean_inc(v_G_5295_);
lean_dec(v_date_4523_);
v___x_5332_ = lean_box(0);
v_isShared_5333_ = v_isSharedCheck_5340_;
goto v_resetjp_5331_;
}
v_resetjp_5331_:
{
lean_object* v___x_5335_; 
if (v_isShared_5294_ == 0)
{
lean_ctor_set_tag(v___x_5293_, 1);
lean_ctor_set(v___x_5293_, 0, v_data_4525_);
v___x_5335_ = v___x_5293_;
goto v_reusejp_5334_;
}
else
{
lean_object* v_reuseFailAlloc_5339_; 
v_reuseFailAlloc_5339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5339_, 0, v_data_4525_);
v___x_5335_ = v_reuseFailAlloc_5339_;
goto v_reusejp_5334_;
}
v_reusejp_5334_:
{
lean_object* v___x_5337_; 
if (v_isShared_5333_ == 0)
{
lean_ctor_set(v___x_5332_, 15, v___x_5335_);
v___x_5337_ = v___x_5332_;
goto v_reusejp_5336_;
}
else
{
lean_object* v_reuseFailAlloc_5338_; 
v_reuseFailAlloc_5338_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5338_, 0, v_G_5295_);
lean_ctor_set(v_reuseFailAlloc_5338_, 1, v_y_5296_);
lean_ctor_set(v_reuseFailAlloc_5338_, 2, v_u_5297_);
lean_ctor_set(v_reuseFailAlloc_5338_, 3, v_Y_5298_);
lean_ctor_set(v_reuseFailAlloc_5338_, 4, v_D_5299_);
lean_ctor_set(v_reuseFailAlloc_5338_, 5, v_M_5300_);
lean_ctor_set(v_reuseFailAlloc_5338_, 6, v_L_5301_);
lean_ctor_set(v_reuseFailAlloc_5338_, 7, v_d_5302_);
lean_ctor_set(v_reuseFailAlloc_5338_, 8, v_Q_5303_);
lean_ctor_set(v_reuseFailAlloc_5338_, 9, v_q_5304_);
lean_ctor_set(v_reuseFailAlloc_5338_, 10, v_w_5305_);
lean_ctor_set(v_reuseFailAlloc_5338_, 11, v_W_5306_);
lean_ctor_set(v_reuseFailAlloc_5338_, 12, v_E_5307_);
lean_ctor_set(v_reuseFailAlloc_5338_, 13, v_e_5308_);
lean_ctor_set(v_reuseFailAlloc_5338_, 14, v_c_5309_);
lean_ctor_set(v_reuseFailAlloc_5338_, 15, v___x_5335_);
lean_ctor_set(v_reuseFailAlloc_5338_, 16, v_a_5310_);
lean_ctor_set(v_reuseFailAlloc_5338_, 17, v_b_5311_);
lean_ctor_set(v_reuseFailAlloc_5338_, 18, v_B_5312_);
lean_ctor_set(v_reuseFailAlloc_5338_, 19, v_h_5313_);
lean_ctor_set(v_reuseFailAlloc_5338_, 20, v_K_5314_);
lean_ctor_set(v_reuseFailAlloc_5338_, 21, v_k_5315_);
lean_ctor_set(v_reuseFailAlloc_5338_, 22, v_H_5316_);
lean_ctor_set(v_reuseFailAlloc_5338_, 23, v_m_5317_);
lean_ctor_set(v_reuseFailAlloc_5338_, 24, v_s_5318_);
lean_ctor_set(v_reuseFailAlloc_5338_, 25, v_S_5319_);
lean_ctor_set(v_reuseFailAlloc_5338_, 26, v_A_5320_);
lean_ctor_set(v_reuseFailAlloc_5338_, 27, v_n_5321_);
lean_ctor_set(v_reuseFailAlloc_5338_, 28, v_N_5322_);
lean_ctor_set(v_reuseFailAlloc_5338_, 29, v_V_5323_);
lean_ctor_set(v_reuseFailAlloc_5338_, 30, v_z_5324_);
lean_ctor_set(v_reuseFailAlloc_5338_, 31, v_zabbrev_5325_);
lean_ctor_set(v_reuseFailAlloc_5338_, 32, v_v_5326_);
lean_ctor_set(v_reuseFailAlloc_5338_, 33, v_O_5327_);
lean_ctor_set(v_reuseFailAlloc_5338_, 34, v_X_5328_);
lean_ctor_set(v_reuseFailAlloc_5338_, 35, v_x_5329_);
lean_ctor_set(v_reuseFailAlloc_5338_, 36, v_Z_5330_);
v___x_5337_ = v_reuseFailAlloc_5338_;
goto v_reusejp_5336_;
}
v_reusejp_5336_:
{
return v___x_5337_;
}
}
}
}
}
case 16:
{
lean_object* v_G_5344_; lean_object* v_y_5345_; lean_object* v_u_5346_; lean_object* v_Y_5347_; lean_object* v_D_5348_; lean_object* v_M_5349_; lean_object* v_L_5350_; lean_object* v_d_5351_; lean_object* v_Q_5352_; lean_object* v_q_5353_; lean_object* v_w_5354_; lean_object* v_W_5355_; lean_object* v_E_5356_; lean_object* v_e_5357_; lean_object* v_c_5358_; lean_object* v_F_5359_; lean_object* v_b_5360_; lean_object* v_B_5361_; lean_object* v_h_5362_; lean_object* v_K_5363_; lean_object* v_k_5364_; lean_object* v_H_5365_; lean_object* v_m_5366_; lean_object* v_s_5367_; lean_object* v_S_5368_; lean_object* v_A_5369_; lean_object* v_n_5370_; lean_object* v_N_5371_; lean_object* v_V_5372_; lean_object* v_z_5373_; lean_object* v_zabbrev_5374_; lean_object* v_v_5375_; lean_object* v_O_5376_; lean_object* v_X_5377_; lean_object* v_x_5378_; lean_object* v_Z_5379_; lean_object* v___x_5381_; uint8_t v_isShared_5382_; uint8_t v_isSharedCheck_5387_; 
lean_dec_ref_known(v_modifier_4524_, 0);
v_G_5344_ = lean_ctor_get(v_date_4523_, 0);
v_y_5345_ = lean_ctor_get(v_date_4523_, 1);
v_u_5346_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5347_ = lean_ctor_get(v_date_4523_, 3);
v_D_5348_ = lean_ctor_get(v_date_4523_, 4);
v_M_5349_ = lean_ctor_get(v_date_4523_, 5);
v_L_5350_ = lean_ctor_get(v_date_4523_, 6);
v_d_5351_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5352_ = lean_ctor_get(v_date_4523_, 8);
v_q_5353_ = lean_ctor_get(v_date_4523_, 9);
v_w_5354_ = lean_ctor_get(v_date_4523_, 10);
v_W_5355_ = lean_ctor_get(v_date_4523_, 11);
v_E_5356_ = lean_ctor_get(v_date_4523_, 12);
v_e_5357_ = lean_ctor_get(v_date_4523_, 13);
v_c_5358_ = lean_ctor_get(v_date_4523_, 14);
v_F_5359_ = lean_ctor_get(v_date_4523_, 15);
v_b_5360_ = lean_ctor_get(v_date_4523_, 17);
v_B_5361_ = lean_ctor_get(v_date_4523_, 18);
v_h_5362_ = lean_ctor_get(v_date_4523_, 19);
v_K_5363_ = lean_ctor_get(v_date_4523_, 20);
v_k_5364_ = lean_ctor_get(v_date_4523_, 21);
v_H_5365_ = lean_ctor_get(v_date_4523_, 22);
v_m_5366_ = lean_ctor_get(v_date_4523_, 23);
v_s_5367_ = lean_ctor_get(v_date_4523_, 24);
v_S_5368_ = lean_ctor_get(v_date_4523_, 25);
v_A_5369_ = lean_ctor_get(v_date_4523_, 26);
v_n_5370_ = lean_ctor_get(v_date_4523_, 27);
v_N_5371_ = lean_ctor_get(v_date_4523_, 28);
v_V_5372_ = lean_ctor_get(v_date_4523_, 29);
v_z_5373_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5374_ = lean_ctor_get(v_date_4523_, 31);
v_v_5375_ = lean_ctor_get(v_date_4523_, 32);
v_O_5376_ = lean_ctor_get(v_date_4523_, 33);
v_X_5377_ = lean_ctor_get(v_date_4523_, 34);
v_x_5378_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5379_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5387_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5387_ == 0)
{
lean_object* v_unused_5388_; 
v_unused_5388_ = lean_ctor_get(v_date_4523_, 16);
lean_dec(v_unused_5388_);
v___x_5381_ = v_date_4523_;
v_isShared_5382_ = v_isSharedCheck_5387_;
goto v_resetjp_5380_;
}
else
{
lean_inc(v_Z_5379_);
lean_inc(v_x_5378_);
lean_inc(v_X_5377_);
lean_inc(v_O_5376_);
lean_inc(v_v_5375_);
lean_inc(v_zabbrev_5374_);
lean_inc(v_z_5373_);
lean_inc(v_V_5372_);
lean_inc(v_N_5371_);
lean_inc(v_n_5370_);
lean_inc(v_A_5369_);
lean_inc(v_S_5368_);
lean_inc(v_s_5367_);
lean_inc(v_m_5366_);
lean_inc(v_H_5365_);
lean_inc(v_k_5364_);
lean_inc(v_K_5363_);
lean_inc(v_h_5362_);
lean_inc(v_B_5361_);
lean_inc(v_b_5360_);
lean_inc(v_F_5359_);
lean_inc(v_c_5358_);
lean_inc(v_e_5357_);
lean_inc(v_E_5356_);
lean_inc(v_W_5355_);
lean_inc(v_w_5354_);
lean_inc(v_q_5353_);
lean_inc(v_Q_5352_);
lean_inc(v_d_5351_);
lean_inc(v_L_5350_);
lean_inc(v_M_5349_);
lean_inc(v_D_5348_);
lean_inc(v_Y_5347_);
lean_inc(v_u_5346_);
lean_inc(v_y_5345_);
lean_inc(v_G_5344_);
lean_dec(v_date_4523_);
v___x_5381_ = lean_box(0);
v_isShared_5382_ = v_isSharedCheck_5387_;
goto v_resetjp_5380_;
}
v_resetjp_5380_:
{
lean_object* v___x_5383_; lean_object* v___x_5385_; 
v___x_5383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5383_, 0, v_data_4525_);
if (v_isShared_5382_ == 0)
{
lean_ctor_set(v___x_5381_, 16, v___x_5383_);
v___x_5385_ = v___x_5381_;
goto v_reusejp_5384_;
}
else
{
lean_object* v_reuseFailAlloc_5386_; 
v_reuseFailAlloc_5386_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5386_, 0, v_G_5344_);
lean_ctor_set(v_reuseFailAlloc_5386_, 1, v_y_5345_);
lean_ctor_set(v_reuseFailAlloc_5386_, 2, v_u_5346_);
lean_ctor_set(v_reuseFailAlloc_5386_, 3, v_Y_5347_);
lean_ctor_set(v_reuseFailAlloc_5386_, 4, v_D_5348_);
lean_ctor_set(v_reuseFailAlloc_5386_, 5, v_M_5349_);
lean_ctor_set(v_reuseFailAlloc_5386_, 6, v_L_5350_);
lean_ctor_set(v_reuseFailAlloc_5386_, 7, v_d_5351_);
lean_ctor_set(v_reuseFailAlloc_5386_, 8, v_Q_5352_);
lean_ctor_set(v_reuseFailAlloc_5386_, 9, v_q_5353_);
lean_ctor_set(v_reuseFailAlloc_5386_, 10, v_w_5354_);
lean_ctor_set(v_reuseFailAlloc_5386_, 11, v_W_5355_);
lean_ctor_set(v_reuseFailAlloc_5386_, 12, v_E_5356_);
lean_ctor_set(v_reuseFailAlloc_5386_, 13, v_e_5357_);
lean_ctor_set(v_reuseFailAlloc_5386_, 14, v_c_5358_);
lean_ctor_set(v_reuseFailAlloc_5386_, 15, v_F_5359_);
lean_ctor_set(v_reuseFailAlloc_5386_, 16, v___x_5383_);
lean_ctor_set(v_reuseFailAlloc_5386_, 17, v_b_5360_);
lean_ctor_set(v_reuseFailAlloc_5386_, 18, v_B_5361_);
lean_ctor_set(v_reuseFailAlloc_5386_, 19, v_h_5362_);
lean_ctor_set(v_reuseFailAlloc_5386_, 20, v_K_5363_);
lean_ctor_set(v_reuseFailAlloc_5386_, 21, v_k_5364_);
lean_ctor_set(v_reuseFailAlloc_5386_, 22, v_H_5365_);
lean_ctor_set(v_reuseFailAlloc_5386_, 23, v_m_5366_);
lean_ctor_set(v_reuseFailAlloc_5386_, 24, v_s_5367_);
lean_ctor_set(v_reuseFailAlloc_5386_, 25, v_S_5368_);
lean_ctor_set(v_reuseFailAlloc_5386_, 26, v_A_5369_);
lean_ctor_set(v_reuseFailAlloc_5386_, 27, v_n_5370_);
lean_ctor_set(v_reuseFailAlloc_5386_, 28, v_N_5371_);
lean_ctor_set(v_reuseFailAlloc_5386_, 29, v_V_5372_);
lean_ctor_set(v_reuseFailAlloc_5386_, 30, v_z_5373_);
lean_ctor_set(v_reuseFailAlloc_5386_, 31, v_zabbrev_5374_);
lean_ctor_set(v_reuseFailAlloc_5386_, 32, v_v_5375_);
lean_ctor_set(v_reuseFailAlloc_5386_, 33, v_O_5376_);
lean_ctor_set(v_reuseFailAlloc_5386_, 34, v_X_5377_);
lean_ctor_set(v_reuseFailAlloc_5386_, 35, v_x_5378_);
lean_ctor_set(v_reuseFailAlloc_5386_, 36, v_Z_5379_);
v___x_5385_ = v_reuseFailAlloc_5386_;
goto v_reusejp_5384_;
}
v_reusejp_5384_:
{
return v___x_5385_;
}
}
}
case 17:
{
lean_object* v_G_5389_; lean_object* v_y_5390_; lean_object* v_u_5391_; lean_object* v_Y_5392_; lean_object* v_D_5393_; lean_object* v_M_5394_; lean_object* v_L_5395_; lean_object* v_d_5396_; lean_object* v_Q_5397_; lean_object* v_q_5398_; lean_object* v_w_5399_; lean_object* v_W_5400_; lean_object* v_E_5401_; lean_object* v_e_5402_; lean_object* v_c_5403_; lean_object* v_F_5404_; lean_object* v_a_5405_; lean_object* v_B_5406_; lean_object* v_h_5407_; lean_object* v_K_5408_; lean_object* v_k_5409_; lean_object* v_H_5410_; lean_object* v_m_5411_; lean_object* v_s_5412_; lean_object* v_S_5413_; lean_object* v_A_5414_; lean_object* v_n_5415_; lean_object* v_N_5416_; lean_object* v_V_5417_; lean_object* v_z_5418_; lean_object* v_zabbrev_5419_; lean_object* v_v_5420_; lean_object* v_O_5421_; lean_object* v_X_5422_; lean_object* v_x_5423_; lean_object* v_Z_5424_; lean_object* v___x_5426_; uint8_t v_isShared_5427_; uint8_t v_isSharedCheck_5432_; 
lean_dec_ref_known(v_modifier_4524_, 0);
v_G_5389_ = lean_ctor_get(v_date_4523_, 0);
v_y_5390_ = lean_ctor_get(v_date_4523_, 1);
v_u_5391_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5392_ = lean_ctor_get(v_date_4523_, 3);
v_D_5393_ = lean_ctor_get(v_date_4523_, 4);
v_M_5394_ = lean_ctor_get(v_date_4523_, 5);
v_L_5395_ = lean_ctor_get(v_date_4523_, 6);
v_d_5396_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5397_ = lean_ctor_get(v_date_4523_, 8);
v_q_5398_ = lean_ctor_get(v_date_4523_, 9);
v_w_5399_ = lean_ctor_get(v_date_4523_, 10);
v_W_5400_ = lean_ctor_get(v_date_4523_, 11);
v_E_5401_ = lean_ctor_get(v_date_4523_, 12);
v_e_5402_ = lean_ctor_get(v_date_4523_, 13);
v_c_5403_ = lean_ctor_get(v_date_4523_, 14);
v_F_5404_ = lean_ctor_get(v_date_4523_, 15);
v_a_5405_ = lean_ctor_get(v_date_4523_, 16);
v_B_5406_ = lean_ctor_get(v_date_4523_, 18);
v_h_5407_ = lean_ctor_get(v_date_4523_, 19);
v_K_5408_ = lean_ctor_get(v_date_4523_, 20);
v_k_5409_ = lean_ctor_get(v_date_4523_, 21);
v_H_5410_ = lean_ctor_get(v_date_4523_, 22);
v_m_5411_ = lean_ctor_get(v_date_4523_, 23);
v_s_5412_ = lean_ctor_get(v_date_4523_, 24);
v_S_5413_ = lean_ctor_get(v_date_4523_, 25);
v_A_5414_ = lean_ctor_get(v_date_4523_, 26);
v_n_5415_ = lean_ctor_get(v_date_4523_, 27);
v_N_5416_ = lean_ctor_get(v_date_4523_, 28);
v_V_5417_ = lean_ctor_get(v_date_4523_, 29);
v_z_5418_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5419_ = lean_ctor_get(v_date_4523_, 31);
v_v_5420_ = lean_ctor_get(v_date_4523_, 32);
v_O_5421_ = lean_ctor_get(v_date_4523_, 33);
v_X_5422_ = lean_ctor_get(v_date_4523_, 34);
v_x_5423_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5424_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5432_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5432_ == 0)
{
lean_object* v_unused_5433_; 
v_unused_5433_ = lean_ctor_get(v_date_4523_, 17);
lean_dec(v_unused_5433_);
v___x_5426_ = v_date_4523_;
v_isShared_5427_ = v_isSharedCheck_5432_;
goto v_resetjp_5425_;
}
else
{
lean_inc(v_Z_5424_);
lean_inc(v_x_5423_);
lean_inc(v_X_5422_);
lean_inc(v_O_5421_);
lean_inc(v_v_5420_);
lean_inc(v_zabbrev_5419_);
lean_inc(v_z_5418_);
lean_inc(v_V_5417_);
lean_inc(v_N_5416_);
lean_inc(v_n_5415_);
lean_inc(v_A_5414_);
lean_inc(v_S_5413_);
lean_inc(v_s_5412_);
lean_inc(v_m_5411_);
lean_inc(v_H_5410_);
lean_inc(v_k_5409_);
lean_inc(v_K_5408_);
lean_inc(v_h_5407_);
lean_inc(v_B_5406_);
lean_inc(v_a_5405_);
lean_inc(v_F_5404_);
lean_inc(v_c_5403_);
lean_inc(v_e_5402_);
lean_inc(v_E_5401_);
lean_inc(v_W_5400_);
lean_inc(v_w_5399_);
lean_inc(v_q_5398_);
lean_inc(v_Q_5397_);
lean_inc(v_d_5396_);
lean_inc(v_L_5395_);
lean_inc(v_M_5394_);
lean_inc(v_D_5393_);
lean_inc(v_Y_5392_);
lean_inc(v_u_5391_);
lean_inc(v_y_5390_);
lean_inc(v_G_5389_);
lean_dec(v_date_4523_);
v___x_5426_ = lean_box(0);
v_isShared_5427_ = v_isSharedCheck_5432_;
goto v_resetjp_5425_;
}
v_resetjp_5425_:
{
lean_object* v___x_5428_; lean_object* v___x_5430_; 
v___x_5428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5428_, 0, v_data_4525_);
if (v_isShared_5427_ == 0)
{
lean_ctor_set(v___x_5426_, 17, v___x_5428_);
v___x_5430_ = v___x_5426_;
goto v_reusejp_5429_;
}
else
{
lean_object* v_reuseFailAlloc_5431_; 
v_reuseFailAlloc_5431_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5431_, 0, v_G_5389_);
lean_ctor_set(v_reuseFailAlloc_5431_, 1, v_y_5390_);
lean_ctor_set(v_reuseFailAlloc_5431_, 2, v_u_5391_);
lean_ctor_set(v_reuseFailAlloc_5431_, 3, v_Y_5392_);
lean_ctor_set(v_reuseFailAlloc_5431_, 4, v_D_5393_);
lean_ctor_set(v_reuseFailAlloc_5431_, 5, v_M_5394_);
lean_ctor_set(v_reuseFailAlloc_5431_, 6, v_L_5395_);
lean_ctor_set(v_reuseFailAlloc_5431_, 7, v_d_5396_);
lean_ctor_set(v_reuseFailAlloc_5431_, 8, v_Q_5397_);
lean_ctor_set(v_reuseFailAlloc_5431_, 9, v_q_5398_);
lean_ctor_set(v_reuseFailAlloc_5431_, 10, v_w_5399_);
lean_ctor_set(v_reuseFailAlloc_5431_, 11, v_W_5400_);
lean_ctor_set(v_reuseFailAlloc_5431_, 12, v_E_5401_);
lean_ctor_set(v_reuseFailAlloc_5431_, 13, v_e_5402_);
lean_ctor_set(v_reuseFailAlloc_5431_, 14, v_c_5403_);
lean_ctor_set(v_reuseFailAlloc_5431_, 15, v_F_5404_);
lean_ctor_set(v_reuseFailAlloc_5431_, 16, v_a_5405_);
lean_ctor_set(v_reuseFailAlloc_5431_, 17, v___x_5428_);
lean_ctor_set(v_reuseFailAlloc_5431_, 18, v_B_5406_);
lean_ctor_set(v_reuseFailAlloc_5431_, 19, v_h_5407_);
lean_ctor_set(v_reuseFailAlloc_5431_, 20, v_K_5408_);
lean_ctor_set(v_reuseFailAlloc_5431_, 21, v_k_5409_);
lean_ctor_set(v_reuseFailAlloc_5431_, 22, v_H_5410_);
lean_ctor_set(v_reuseFailAlloc_5431_, 23, v_m_5411_);
lean_ctor_set(v_reuseFailAlloc_5431_, 24, v_s_5412_);
lean_ctor_set(v_reuseFailAlloc_5431_, 25, v_S_5413_);
lean_ctor_set(v_reuseFailAlloc_5431_, 26, v_A_5414_);
lean_ctor_set(v_reuseFailAlloc_5431_, 27, v_n_5415_);
lean_ctor_set(v_reuseFailAlloc_5431_, 28, v_N_5416_);
lean_ctor_set(v_reuseFailAlloc_5431_, 29, v_V_5417_);
lean_ctor_set(v_reuseFailAlloc_5431_, 30, v_z_5418_);
lean_ctor_set(v_reuseFailAlloc_5431_, 31, v_zabbrev_5419_);
lean_ctor_set(v_reuseFailAlloc_5431_, 32, v_v_5420_);
lean_ctor_set(v_reuseFailAlloc_5431_, 33, v_O_5421_);
lean_ctor_set(v_reuseFailAlloc_5431_, 34, v_X_5422_);
lean_ctor_set(v_reuseFailAlloc_5431_, 35, v_x_5423_);
lean_ctor_set(v_reuseFailAlloc_5431_, 36, v_Z_5424_);
v___x_5430_ = v_reuseFailAlloc_5431_;
goto v_reusejp_5429_;
}
v_reusejp_5429_:
{
return v___x_5430_;
}
}
}
case 18:
{
lean_object* v_G_5434_; lean_object* v_y_5435_; lean_object* v_u_5436_; lean_object* v_Y_5437_; lean_object* v_D_5438_; lean_object* v_M_5439_; lean_object* v_L_5440_; lean_object* v_d_5441_; lean_object* v_Q_5442_; lean_object* v_q_5443_; lean_object* v_w_5444_; lean_object* v_W_5445_; lean_object* v_E_5446_; lean_object* v_e_5447_; lean_object* v_c_5448_; lean_object* v_F_5449_; lean_object* v_a_5450_; lean_object* v_b_5451_; lean_object* v_h_5452_; lean_object* v_K_5453_; lean_object* v_k_5454_; lean_object* v_H_5455_; lean_object* v_m_5456_; lean_object* v_s_5457_; lean_object* v_S_5458_; lean_object* v_A_5459_; lean_object* v_n_5460_; lean_object* v_N_5461_; lean_object* v_V_5462_; lean_object* v_z_5463_; lean_object* v_zabbrev_5464_; lean_object* v_v_5465_; lean_object* v_O_5466_; lean_object* v_X_5467_; lean_object* v_x_5468_; lean_object* v_Z_5469_; lean_object* v___x_5471_; uint8_t v_isShared_5472_; uint8_t v_isSharedCheck_5477_; 
lean_dec_ref_known(v_modifier_4524_, 0);
v_G_5434_ = lean_ctor_get(v_date_4523_, 0);
v_y_5435_ = lean_ctor_get(v_date_4523_, 1);
v_u_5436_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5437_ = lean_ctor_get(v_date_4523_, 3);
v_D_5438_ = lean_ctor_get(v_date_4523_, 4);
v_M_5439_ = lean_ctor_get(v_date_4523_, 5);
v_L_5440_ = lean_ctor_get(v_date_4523_, 6);
v_d_5441_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5442_ = lean_ctor_get(v_date_4523_, 8);
v_q_5443_ = lean_ctor_get(v_date_4523_, 9);
v_w_5444_ = lean_ctor_get(v_date_4523_, 10);
v_W_5445_ = lean_ctor_get(v_date_4523_, 11);
v_E_5446_ = lean_ctor_get(v_date_4523_, 12);
v_e_5447_ = lean_ctor_get(v_date_4523_, 13);
v_c_5448_ = lean_ctor_get(v_date_4523_, 14);
v_F_5449_ = lean_ctor_get(v_date_4523_, 15);
v_a_5450_ = lean_ctor_get(v_date_4523_, 16);
v_b_5451_ = lean_ctor_get(v_date_4523_, 17);
v_h_5452_ = lean_ctor_get(v_date_4523_, 19);
v_K_5453_ = lean_ctor_get(v_date_4523_, 20);
v_k_5454_ = lean_ctor_get(v_date_4523_, 21);
v_H_5455_ = lean_ctor_get(v_date_4523_, 22);
v_m_5456_ = lean_ctor_get(v_date_4523_, 23);
v_s_5457_ = lean_ctor_get(v_date_4523_, 24);
v_S_5458_ = lean_ctor_get(v_date_4523_, 25);
v_A_5459_ = lean_ctor_get(v_date_4523_, 26);
v_n_5460_ = lean_ctor_get(v_date_4523_, 27);
v_N_5461_ = lean_ctor_get(v_date_4523_, 28);
v_V_5462_ = lean_ctor_get(v_date_4523_, 29);
v_z_5463_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5464_ = lean_ctor_get(v_date_4523_, 31);
v_v_5465_ = lean_ctor_get(v_date_4523_, 32);
v_O_5466_ = lean_ctor_get(v_date_4523_, 33);
v_X_5467_ = lean_ctor_get(v_date_4523_, 34);
v_x_5468_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5469_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5477_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5477_ == 0)
{
lean_object* v_unused_5478_; 
v_unused_5478_ = lean_ctor_get(v_date_4523_, 18);
lean_dec(v_unused_5478_);
v___x_5471_ = v_date_4523_;
v_isShared_5472_ = v_isSharedCheck_5477_;
goto v_resetjp_5470_;
}
else
{
lean_inc(v_Z_5469_);
lean_inc(v_x_5468_);
lean_inc(v_X_5467_);
lean_inc(v_O_5466_);
lean_inc(v_v_5465_);
lean_inc(v_zabbrev_5464_);
lean_inc(v_z_5463_);
lean_inc(v_V_5462_);
lean_inc(v_N_5461_);
lean_inc(v_n_5460_);
lean_inc(v_A_5459_);
lean_inc(v_S_5458_);
lean_inc(v_s_5457_);
lean_inc(v_m_5456_);
lean_inc(v_H_5455_);
lean_inc(v_k_5454_);
lean_inc(v_K_5453_);
lean_inc(v_h_5452_);
lean_inc(v_b_5451_);
lean_inc(v_a_5450_);
lean_inc(v_F_5449_);
lean_inc(v_c_5448_);
lean_inc(v_e_5447_);
lean_inc(v_E_5446_);
lean_inc(v_W_5445_);
lean_inc(v_w_5444_);
lean_inc(v_q_5443_);
lean_inc(v_Q_5442_);
lean_inc(v_d_5441_);
lean_inc(v_L_5440_);
lean_inc(v_M_5439_);
lean_inc(v_D_5438_);
lean_inc(v_Y_5437_);
lean_inc(v_u_5436_);
lean_inc(v_y_5435_);
lean_inc(v_G_5434_);
lean_dec(v_date_4523_);
v___x_5471_ = lean_box(0);
v_isShared_5472_ = v_isSharedCheck_5477_;
goto v_resetjp_5470_;
}
v_resetjp_5470_:
{
lean_object* v___x_5473_; lean_object* v___x_5475_; 
v___x_5473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5473_, 0, v_data_4525_);
if (v_isShared_5472_ == 0)
{
lean_ctor_set(v___x_5471_, 18, v___x_5473_);
v___x_5475_ = v___x_5471_;
goto v_reusejp_5474_;
}
else
{
lean_object* v_reuseFailAlloc_5476_; 
v_reuseFailAlloc_5476_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5476_, 0, v_G_5434_);
lean_ctor_set(v_reuseFailAlloc_5476_, 1, v_y_5435_);
lean_ctor_set(v_reuseFailAlloc_5476_, 2, v_u_5436_);
lean_ctor_set(v_reuseFailAlloc_5476_, 3, v_Y_5437_);
lean_ctor_set(v_reuseFailAlloc_5476_, 4, v_D_5438_);
lean_ctor_set(v_reuseFailAlloc_5476_, 5, v_M_5439_);
lean_ctor_set(v_reuseFailAlloc_5476_, 6, v_L_5440_);
lean_ctor_set(v_reuseFailAlloc_5476_, 7, v_d_5441_);
lean_ctor_set(v_reuseFailAlloc_5476_, 8, v_Q_5442_);
lean_ctor_set(v_reuseFailAlloc_5476_, 9, v_q_5443_);
lean_ctor_set(v_reuseFailAlloc_5476_, 10, v_w_5444_);
lean_ctor_set(v_reuseFailAlloc_5476_, 11, v_W_5445_);
lean_ctor_set(v_reuseFailAlloc_5476_, 12, v_E_5446_);
lean_ctor_set(v_reuseFailAlloc_5476_, 13, v_e_5447_);
lean_ctor_set(v_reuseFailAlloc_5476_, 14, v_c_5448_);
lean_ctor_set(v_reuseFailAlloc_5476_, 15, v_F_5449_);
lean_ctor_set(v_reuseFailAlloc_5476_, 16, v_a_5450_);
lean_ctor_set(v_reuseFailAlloc_5476_, 17, v_b_5451_);
lean_ctor_set(v_reuseFailAlloc_5476_, 18, v___x_5473_);
lean_ctor_set(v_reuseFailAlloc_5476_, 19, v_h_5452_);
lean_ctor_set(v_reuseFailAlloc_5476_, 20, v_K_5453_);
lean_ctor_set(v_reuseFailAlloc_5476_, 21, v_k_5454_);
lean_ctor_set(v_reuseFailAlloc_5476_, 22, v_H_5455_);
lean_ctor_set(v_reuseFailAlloc_5476_, 23, v_m_5456_);
lean_ctor_set(v_reuseFailAlloc_5476_, 24, v_s_5457_);
lean_ctor_set(v_reuseFailAlloc_5476_, 25, v_S_5458_);
lean_ctor_set(v_reuseFailAlloc_5476_, 26, v_A_5459_);
lean_ctor_set(v_reuseFailAlloc_5476_, 27, v_n_5460_);
lean_ctor_set(v_reuseFailAlloc_5476_, 28, v_N_5461_);
lean_ctor_set(v_reuseFailAlloc_5476_, 29, v_V_5462_);
lean_ctor_set(v_reuseFailAlloc_5476_, 30, v_z_5463_);
lean_ctor_set(v_reuseFailAlloc_5476_, 31, v_zabbrev_5464_);
lean_ctor_set(v_reuseFailAlloc_5476_, 32, v_v_5465_);
lean_ctor_set(v_reuseFailAlloc_5476_, 33, v_O_5466_);
lean_ctor_set(v_reuseFailAlloc_5476_, 34, v_X_5467_);
lean_ctor_set(v_reuseFailAlloc_5476_, 35, v_x_5468_);
lean_ctor_set(v_reuseFailAlloc_5476_, 36, v_Z_5469_);
v___x_5475_ = v_reuseFailAlloc_5476_;
goto v_reusejp_5474_;
}
v_reusejp_5474_:
{
return v___x_5475_;
}
}
}
case 19:
{
lean_object* v___x_5480_; uint8_t v_isShared_5481_; uint8_t v_isSharedCheck_5529_; 
v_isSharedCheck_5529_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_5529_ == 0)
{
lean_object* v_unused_5530_; 
v_unused_5530_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_5530_);
v___x_5480_ = v_modifier_4524_;
v_isShared_5481_ = v_isSharedCheck_5529_;
goto v_resetjp_5479_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_5480_ = lean_box(0);
v_isShared_5481_ = v_isSharedCheck_5529_;
goto v_resetjp_5479_;
}
v_resetjp_5479_:
{
lean_object* v_G_5482_; lean_object* v_y_5483_; lean_object* v_u_5484_; lean_object* v_Y_5485_; lean_object* v_D_5486_; lean_object* v_M_5487_; lean_object* v_L_5488_; lean_object* v_d_5489_; lean_object* v_Q_5490_; lean_object* v_q_5491_; lean_object* v_w_5492_; lean_object* v_W_5493_; lean_object* v_E_5494_; lean_object* v_e_5495_; lean_object* v_c_5496_; lean_object* v_F_5497_; lean_object* v_a_5498_; lean_object* v_b_5499_; lean_object* v_B_5500_; lean_object* v_K_5501_; lean_object* v_k_5502_; lean_object* v_H_5503_; lean_object* v_m_5504_; lean_object* v_s_5505_; lean_object* v_S_5506_; lean_object* v_A_5507_; lean_object* v_n_5508_; lean_object* v_N_5509_; lean_object* v_V_5510_; lean_object* v_z_5511_; lean_object* v_zabbrev_5512_; lean_object* v_v_5513_; lean_object* v_O_5514_; lean_object* v_X_5515_; lean_object* v_x_5516_; lean_object* v_Z_5517_; lean_object* v___x_5519_; uint8_t v_isShared_5520_; uint8_t v_isSharedCheck_5527_; 
v_G_5482_ = lean_ctor_get(v_date_4523_, 0);
v_y_5483_ = lean_ctor_get(v_date_4523_, 1);
v_u_5484_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5485_ = lean_ctor_get(v_date_4523_, 3);
v_D_5486_ = lean_ctor_get(v_date_4523_, 4);
v_M_5487_ = lean_ctor_get(v_date_4523_, 5);
v_L_5488_ = lean_ctor_get(v_date_4523_, 6);
v_d_5489_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5490_ = lean_ctor_get(v_date_4523_, 8);
v_q_5491_ = lean_ctor_get(v_date_4523_, 9);
v_w_5492_ = lean_ctor_get(v_date_4523_, 10);
v_W_5493_ = lean_ctor_get(v_date_4523_, 11);
v_E_5494_ = lean_ctor_get(v_date_4523_, 12);
v_e_5495_ = lean_ctor_get(v_date_4523_, 13);
v_c_5496_ = lean_ctor_get(v_date_4523_, 14);
v_F_5497_ = lean_ctor_get(v_date_4523_, 15);
v_a_5498_ = lean_ctor_get(v_date_4523_, 16);
v_b_5499_ = lean_ctor_get(v_date_4523_, 17);
v_B_5500_ = lean_ctor_get(v_date_4523_, 18);
v_K_5501_ = lean_ctor_get(v_date_4523_, 20);
v_k_5502_ = lean_ctor_get(v_date_4523_, 21);
v_H_5503_ = lean_ctor_get(v_date_4523_, 22);
v_m_5504_ = lean_ctor_get(v_date_4523_, 23);
v_s_5505_ = lean_ctor_get(v_date_4523_, 24);
v_S_5506_ = lean_ctor_get(v_date_4523_, 25);
v_A_5507_ = lean_ctor_get(v_date_4523_, 26);
v_n_5508_ = lean_ctor_get(v_date_4523_, 27);
v_N_5509_ = lean_ctor_get(v_date_4523_, 28);
v_V_5510_ = lean_ctor_get(v_date_4523_, 29);
v_z_5511_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5512_ = lean_ctor_get(v_date_4523_, 31);
v_v_5513_ = lean_ctor_get(v_date_4523_, 32);
v_O_5514_ = lean_ctor_get(v_date_4523_, 33);
v_X_5515_ = lean_ctor_get(v_date_4523_, 34);
v_x_5516_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5517_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5527_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5527_ == 0)
{
lean_object* v_unused_5528_; 
v_unused_5528_ = lean_ctor_get(v_date_4523_, 19);
lean_dec(v_unused_5528_);
v___x_5519_ = v_date_4523_;
v_isShared_5520_ = v_isSharedCheck_5527_;
goto v_resetjp_5518_;
}
else
{
lean_inc(v_Z_5517_);
lean_inc(v_x_5516_);
lean_inc(v_X_5515_);
lean_inc(v_O_5514_);
lean_inc(v_v_5513_);
lean_inc(v_zabbrev_5512_);
lean_inc(v_z_5511_);
lean_inc(v_V_5510_);
lean_inc(v_N_5509_);
lean_inc(v_n_5508_);
lean_inc(v_A_5507_);
lean_inc(v_S_5506_);
lean_inc(v_s_5505_);
lean_inc(v_m_5504_);
lean_inc(v_H_5503_);
lean_inc(v_k_5502_);
lean_inc(v_K_5501_);
lean_inc(v_B_5500_);
lean_inc(v_b_5499_);
lean_inc(v_a_5498_);
lean_inc(v_F_5497_);
lean_inc(v_c_5496_);
lean_inc(v_e_5495_);
lean_inc(v_E_5494_);
lean_inc(v_W_5493_);
lean_inc(v_w_5492_);
lean_inc(v_q_5491_);
lean_inc(v_Q_5490_);
lean_inc(v_d_5489_);
lean_inc(v_L_5488_);
lean_inc(v_M_5487_);
lean_inc(v_D_5486_);
lean_inc(v_Y_5485_);
lean_inc(v_u_5484_);
lean_inc(v_y_5483_);
lean_inc(v_G_5482_);
lean_dec(v_date_4523_);
v___x_5519_ = lean_box(0);
v_isShared_5520_ = v_isSharedCheck_5527_;
goto v_resetjp_5518_;
}
v_resetjp_5518_:
{
lean_object* v___x_5522_; 
if (v_isShared_5481_ == 0)
{
lean_ctor_set_tag(v___x_5480_, 1);
lean_ctor_set(v___x_5480_, 0, v_data_4525_);
v___x_5522_ = v___x_5480_;
goto v_reusejp_5521_;
}
else
{
lean_object* v_reuseFailAlloc_5526_; 
v_reuseFailAlloc_5526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5526_, 0, v_data_4525_);
v___x_5522_ = v_reuseFailAlloc_5526_;
goto v_reusejp_5521_;
}
v_reusejp_5521_:
{
lean_object* v___x_5524_; 
if (v_isShared_5520_ == 0)
{
lean_ctor_set(v___x_5519_, 19, v___x_5522_);
v___x_5524_ = v___x_5519_;
goto v_reusejp_5523_;
}
else
{
lean_object* v_reuseFailAlloc_5525_; 
v_reuseFailAlloc_5525_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5525_, 0, v_G_5482_);
lean_ctor_set(v_reuseFailAlloc_5525_, 1, v_y_5483_);
lean_ctor_set(v_reuseFailAlloc_5525_, 2, v_u_5484_);
lean_ctor_set(v_reuseFailAlloc_5525_, 3, v_Y_5485_);
lean_ctor_set(v_reuseFailAlloc_5525_, 4, v_D_5486_);
lean_ctor_set(v_reuseFailAlloc_5525_, 5, v_M_5487_);
lean_ctor_set(v_reuseFailAlloc_5525_, 6, v_L_5488_);
lean_ctor_set(v_reuseFailAlloc_5525_, 7, v_d_5489_);
lean_ctor_set(v_reuseFailAlloc_5525_, 8, v_Q_5490_);
lean_ctor_set(v_reuseFailAlloc_5525_, 9, v_q_5491_);
lean_ctor_set(v_reuseFailAlloc_5525_, 10, v_w_5492_);
lean_ctor_set(v_reuseFailAlloc_5525_, 11, v_W_5493_);
lean_ctor_set(v_reuseFailAlloc_5525_, 12, v_E_5494_);
lean_ctor_set(v_reuseFailAlloc_5525_, 13, v_e_5495_);
lean_ctor_set(v_reuseFailAlloc_5525_, 14, v_c_5496_);
lean_ctor_set(v_reuseFailAlloc_5525_, 15, v_F_5497_);
lean_ctor_set(v_reuseFailAlloc_5525_, 16, v_a_5498_);
lean_ctor_set(v_reuseFailAlloc_5525_, 17, v_b_5499_);
lean_ctor_set(v_reuseFailAlloc_5525_, 18, v_B_5500_);
lean_ctor_set(v_reuseFailAlloc_5525_, 19, v___x_5522_);
lean_ctor_set(v_reuseFailAlloc_5525_, 20, v_K_5501_);
lean_ctor_set(v_reuseFailAlloc_5525_, 21, v_k_5502_);
lean_ctor_set(v_reuseFailAlloc_5525_, 22, v_H_5503_);
lean_ctor_set(v_reuseFailAlloc_5525_, 23, v_m_5504_);
lean_ctor_set(v_reuseFailAlloc_5525_, 24, v_s_5505_);
lean_ctor_set(v_reuseFailAlloc_5525_, 25, v_S_5506_);
lean_ctor_set(v_reuseFailAlloc_5525_, 26, v_A_5507_);
lean_ctor_set(v_reuseFailAlloc_5525_, 27, v_n_5508_);
lean_ctor_set(v_reuseFailAlloc_5525_, 28, v_N_5509_);
lean_ctor_set(v_reuseFailAlloc_5525_, 29, v_V_5510_);
lean_ctor_set(v_reuseFailAlloc_5525_, 30, v_z_5511_);
lean_ctor_set(v_reuseFailAlloc_5525_, 31, v_zabbrev_5512_);
lean_ctor_set(v_reuseFailAlloc_5525_, 32, v_v_5513_);
lean_ctor_set(v_reuseFailAlloc_5525_, 33, v_O_5514_);
lean_ctor_set(v_reuseFailAlloc_5525_, 34, v_X_5515_);
lean_ctor_set(v_reuseFailAlloc_5525_, 35, v_x_5516_);
lean_ctor_set(v_reuseFailAlloc_5525_, 36, v_Z_5517_);
v___x_5524_ = v_reuseFailAlloc_5525_;
goto v_reusejp_5523_;
}
v_reusejp_5523_:
{
return v___x_5524_;
}
}
}
}
}
case 20:
{
lean_object* v___x_5532_; uint8_t v_isShared_5533_; uint8_t v_isSharedCheck_5581_; 
v_isSharedCheck_5581_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_5581_ == 0)
{
lean_object* v_unused_5582_; 
v_unused_5582_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_5582_);
v___x_5532_ = v_modifier_4524_;
v_isShared_5533_ = v_isSharedCheck_5581_;
goto v_resetjp_5531_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_5532_ = lean_box(0);
v_isShared_5533_ = v_isSharedCheck_5581_;
goto v_resetjp_5531_;
}
v_resetjp_5531_:
{
lean_object* v_G_5534_; lean_object* v_y_5535_; lean_object* v_u_5536_; lean_object* v_Y_5537_; lean_object* v_D_5538_; lean_object* v_M_5539_; lean_object* v_L_5540_; lean_object* v_d_5541_; lean_object* v_Q_5542_; lean_object* v_q_5543_; lean_object* v_w_5544_; lean_object* v_W_5545_; lean_object* v_E_5546_; lean_object* v_e_5547_; lean_object* v_c_5548_; lean_object* v_F_5549_; lean_object* v_a_5550_; lean_object* v_b_5551_; lean_object* v_B_5552_; lean_object* v_h_5553_; lean_object* v_k_5554_; lean_object* v_H_5555_; lean_object* v_m_5556_; lean_object* v_s_5557_; lean_object* v_S_5558_; lean_object* v_A_5559_; lean_object* v_n_5560_; lean_object* v_N_5561_; lean_object* v_V_5562_; lean_object* v_z_5563_; lean_object* v_zabbrev_5564_; lean_object* v_v_5565_; lean_object* v_O_5566_; lean_object* v_X_5567_; lean_object* v_x_5568_; lean_object* v_Z_5569_; lean_object* v___x_5571_; uint8_t v_isShared_5572_; uint8_t v_isSharedCheck_5579_; 
v_G_5534_ = lean_ctor_get(v_date_4523_, 0);
v_y_5535_ = lean_ctor_get(v_date_4523_, 1);
v_u_5536_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5537_ = lean_ctor_get(v_date_4523_, 3);
v_D_5538_ = lean_ctor_get(v_date_4523_, 4);
v_M_5539_ = lean_ctor_get(v_date_4523_, 5);
v_L_5540_ = lean_ctor_get(v_date_4523_, 6);
v_d_5541_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5542_ = lean_ctor_get(v_date_4523_, 8);
v_q_5543_ = lean_ctor_get(v_date_4523_, 9);
v_w_5544_ = lean_ctor_get(v_date_4523_, 10);
v_W_5545_ = lean_ctor_get(v_date_4523_, 11);
v_E_5546_ = lean_ctor_get(v_date_4523_, 12);
v_e_5547_ = lean_ctor_get(v_date_4523_, 13);
v_c_5548_ = lean_ctor_get(v_date_4523_, 14);
v_F_5549_ = lean_ctor_get(v_date_4523_, 15);
v_a_5550_ = lean_ctor_get(v_date_4523_, 16);
v_b_5551_ = lean_ctor_get(v_date_4523_, 17);
v_B_5552_ = lean_ctor_get(v_date_4523_, 18);
v_h_5553_ = lean_ctor_get(v_date_4523_, 19);
v_k_5554_ = lean_ctor_get(v_date_4523_, 21);
v_H_5555_ = lean_ctor_get(v_date_4523_, 22);
v_m_5556_ = lean_ctor_get(v_date_4523_, 23);
v_s_5557_ = lean_ctor_get(v_date_4523_, 24);
v_S_5558_ = lean_ctor_get(v_date_4523_, 25);
v_A_5559_ = lean_ctor_get(v_date_4523_, 26);
v_n_5560_ = lean_ctor_get(v_date_4523_, 27);
v_N_5561_ = lean_ctor_get(v_date_4523_, 28);
v_V_5562_ = lean_ctor_get(v_date_4523_, 29);
v_z_5563_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5564_ = lean_ctor_get(v_date_4523_, 31);
v_v_5565_ = lean_ctor_get(v_date_4523_, 32);
v_O_5566_ = lean_ctor_get(v_date_4523_, 33);
v_X_5567_ = lean_ctor_get(v_date_4523_, 34);
v_x_5568_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5569_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5579_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5579_ == 0)
{
lean_object* v_unused_5580_; 
v_unused_5580_ = lean_ctor_get(v_date_4523_, 20);
lean_dec(v_unused_5580_);
v___x_5571_ = v_date_4523_;
v_isShared_5572_ = v_isSharedCheck_5579_;
goto v_resetjp_5570_;
}
else
{
lean_inc(v_Z_5569_);
lean_inc(v_x_5568_);
lean_inc(v_X_5567_);
lean_inc(v_O_5566_);
lean_inc(v_v_5565_);
lean_inc(v_zabbrev_5564_);
lean_inc(v_z_5563_);
lean_inc(v_V_5562_);
lean_inc(v_N_5561_);
lean_inc(v_n_5560_);
lean_inc(v_A_5559_);
lean_inc(v_S_5558_);
lean_inc(v_s_5557_);
lean_inc(v_m_5556_);
lean_inc(v_H_5555_);
lean_inc(v_k_5554_);
lean_inc(v_h_5553_);
lean_inc(v_B_5552_);
lean_inc(v_b_5551_);
lean_inc(v_a_5550_);
lean_inc(v_F_5549_);
lean_inc(v_c_5548_);
lean_inc(v_e_5547_);
lean_inc(v_E_5546_);
lean_inc(v_W_5545_);
lean_inc(v_w_5544_);
lean_inc(v_q_5543_);
lean_inc(v_Q_5542_);
lean_inc(v_d_5541_);
lean_inc(v_L_5540_);
lean_inc(v_M_5539_);
lean_inc(v_D_5538_);
lean_inc(v_Y_5537_);
lean_inc(v_u_5536_);
lean_inc(v_y_5535_);
lean_inc(v_G_5534_);
lean_dec(v_date_4523_);
v___x_5571_ = lean_box(0);
v_isShared_5572_ = v_isSharedCheck_5579_;
goto v_resetjp_5570_;
}
v_resetjp_5570_:
{
lean_object* v___x_5574_; 
if (v_isShared_5533_ == 0)
{
lean_ctor_set_tag(v___x_5532_, 1);
lean_ctor_set(v___x_5532_, 0, v_data_4525_);
v___x_5574_ = v___x_5532_;
goto v_reusejp_5573_;
}
else
{
lean_object* v_reuseFailAlloc_5578_; 
v_reuseFailAlloc_5578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5578_, 0, v_data_4525_);
v___x_5574_ = v_reuseFailAlloc_5578_;
goto v_reusejp_5573_;
}
v_reusejp_5573_:
{
lean_object* v___x_5576_; 
if (v_isShared_5572_ == 0)
{
lean_ctor_set(v___x_5571_, 20, v___x_5574_);
v___x_5576_ = v___x_5571_;
goto v_reusejp_5575_;
}
else
{
lean_object* v_reuseFailAlloc_5577_; 
v_reuseFailAlloc_5577_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5577_, 0, v_G_5534_);
lean_ctor_set(v_reuseFailAlloc_5577_, 1, v_y_5535_);
lean_ctor_set(v_reuseFailAlloc_5577_, 2, v_u_5536_);
lean_ctor_set(v_reuseFailAlloc_5577_, 3, v_Y_5537_);
lean_ctor_set(v_reuseFailAlloc_5577_, 4, v_D_5538_);
lean_ctor_set(v_reuseFailAlloc_5577_, 5, v_M_5539_);
lean_ctor_set(v_reuseFailAlloc_5577_, 6, v_L_5540_);
lean_ctor_set(v_reuseFailAlloc_5577_, 7, v_d_5541_);
lean_ctor_set(v_reuseFailAlloc_5577_, 8, v_Q_5542_);
lean_ctor_set(v_reuseFailAlloc_5577_, 9, v_q_5543_);
lean_ctor_set(v_reuseFailAlloc_5577_, 10, v_w_5544_);
lean_ctor_set(v_reuseFailAlloc_5577_, 11, v_W_5545_);
lean_ctor_set(v_reuseFailAlloc_5577_, 12, v_E_5546_);
lean_ctor_set(v_reuseFailAlloc_5577_, 13, v_e_5547_);
lean_ctor_set(v_reuseFailAlloc_5577_, 14, v_c_5548_);
lean_ctor_set(v_reuseFailAlloc_5577_, 15, v_F_5549_);
lean_ctor_set(v_reuseFailAlloc_5577_, 16, v_a_5550_);
lean_ctor_set(v_reuseFailAlloc_5577_, 17, v_b_5551_);
lean_ctor_set(v_reuseFailAlloc_5577_, 18, v_B_5552_);
lean_ctor_set(v_reuseFailAlloc_5577_, 19, v_h_5553_);
lean_ctor_set(v_reuseFailAlloc_5577_, 20, v___x_5574_);
lean_ctor_set(v_reuseFailAlloc_5577_, 21, v_k_5554_);
lean_ctor_set(v_reuseFailAlloc_5577_, 22, v_H_5555_);
lean_ctor_set(v_reuseFailAlloc_5577_, 23, v_m_5556_);
lean_ctor_set(v_reuseFailAlloc_5577_, 24, v_s_5557_);
lean_ctor_set(v_reuseFailAlloc_5577_, 25, v_S_5558_);
lean_ctor_set(v_reuseFailAlloc_5577_, 26, v_A_5559_);
lean_ctor_set(v_reuseFailAlloc_5577_, 27, v_n_5560_);
lean_ctor_set(v_reuseFailAlloc_5577_, 28, v_N_5561_);
lean_ctor_set(v_reuseFailAlloc_5577_, 29, v_V_5562_);
lean_ctor_set(v_reuseFailAlloc_5577_, 30, v_z_5563_);
lean_ctor_set(v_reuseFailAlloc_5577_, 31, v_zabbrev_5564_);
lean_ctor_set(v_reuseFailAlloc_5577_, 32, v_v_5565_);
lean_ctor_set(v_reuseFailAlloc_5577_, 33, v_O_5566_);
lean_ctor_set(v_reuseFailAlloc_5577_, 34, v_X_5567_);
lean_ctor_set(v_reuseFailAlloc_5577_, 35, v_x_5568_);
lean_ctor_set(v_reuseFailAlloc_5577_, 36, v_Z_5569_);
v___x_5576_ = v_reuseFailAlloc_5577_;
goto v_reusejp_5575_;
}
v_reusejp_5575_:
{
return v___x_5576_;
}
}
}
}
}
case 21:
{
lean_object* v___x_5584_; uint8_t v_isShared_5585_; uint8_t v_isSharedCheck_5633_; 
v_isSharedCheck_5633_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_5633_ == 0)
{
lean_object* v_unused_5634_; 
v_unused_5634_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_5634_);
v___x_5584_ = v_modifier_4524_;
v_isShared_5585_ = v_isSharedCheck_5633_;
goto v_resetjp_5583_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_5584_ = lean_box(0);
v_isShared_5585_ = v_isSharedCheck_5633_;
goto v_resetjp_5583_;
}
v_resetjp_5583_:
{
lean_object* v_G_5586_; lean_object* v_y_5587_; lean_object* v_u_5588_; lean_object* v_Y_5589_; lean_object* v_D_5590_; lean_object* v_M_5591_; lean_object* v_L_5592_; lean_object* v_d_5593_; lean_object* v_Q_5594_; lean_object* v_q_5595_; lean_object* v_w_5596_; lean_object* v_W_5597_; lean_object* v_E_5598_; lean_object* v_e_5599_; lean_object* v_c_5600_; lean_object* v_F_5601_; lean_object* v_a_5602_; lean_object* v_b_5603_; lean_object* v_B_5604_; lean_object* v_h_5605_; lean_object* v_K_5606_; lean_object* v_H_5607_; lean_object* v_m_5608_; lean_object* v_s_5609_; lean_object* v_S_5610_; lean_object* v_A_5611_; lean_object* v_n_5612_; lean_object* v_N_5613_; lean_object* v_V_5614_; lean_object* v_z_5615_; lean_object* v_zabbrev_5616_; lean_object* v_v_5617_; lean_object* v_O_5618_; lean_object* v_X_5619_; lean_object* v_x_5620_; lean_object* v_Z_5621_; lean_object* v___x_5623_; uint8_t v_isShared_5624_; uint8_t v_isSharedCheck_5631_; 
v_G_5586_ = lean_ctor_get(v_date_4523_, 0);
v_y_5587_ = lean_ctor_get(v_date_4523_, 1);
v_u_5588_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5589_ = lean_ctor_get(v_date_4523_, 3);
v_D_5590_ = lean_ctor_get(v_date_4523_, 4);
v_M_5591_ = lean_ctor_get(v_date_4523_, 5);
v_L_5592_ = lean_ctor_get(v_date_4523_, 6);
v_d_5593_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5594_ = lean_ctor_get(v_date_4523_, 8);
v_q_5595_ = lean_ctor_get(v_date_4523_, 9);
v_w_5596_ = lean_ctor_get(v_date_4523_, 10);
v_W_5597_ = lean_ctor_get(v_date_4523_, 11);
v_E_5598_ = lean_ctor_get(v_date_4523_, 12);
v_e_5599_ = lean_ctor_get(v_date_4523_, 13);
v_c_5600_ = lean_ctor_get(v_date_4523_, 14);
v_F_5601_ = lean_ctor_get(v_date_4523_, 15);
v_a_5602_ = lean_ctor_get(v_date_4523_, 16);
v_b_5603_ = lean_ctor_get(v_date_4523_, 17);
v_B_5604_ = lean_ctor_get(v_date_4523_, 18);
v_h_5605_ = lean_ctor_get(v_date_4523_, 19);
v_K_5606_ = lean_ctor_get(v_date_4523_, 20);
v_H_5607_ = lean_ctor_get(v_date_4523_, 22);
v_m_5608_ = lean_ctor_get(v_date_4523_, 23);
v_s_5609_ = lean_ctor_get(v_date_4523_, 24);
v_S_5610_ = lean_ctor_get(v_date_4523_, 25);
v_A_5611_ = lean_ctor_get(v_date_4523_, 26);
v_n_5612_ = lean_ctor_get(v_date_4523_, 27);
v_N_5613_ = lean_ctor_get(v_date_4523_, 28);
v_V_5614_ = lean_ctor_get(v_date_4523_, 29);
v_z_5615_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5616_ = lean_ctor_get(v_date_4523_, 31);
v_v_5617_ = lean_ctor_get(v_date_4523_, 32);
v_O_5618_ = lean_ctor_get(v_date_4523_, 33);
v_X_5619_ = lean_ctor_get(v_date_4523_, 34);
v_x_5620_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5621_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5631_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5631_ == 0)
{
lean_object* v_unused_5632_; 
v_unused_5632_ = lean_ctor_get(v_date_4523_, 21);
lean_dec(v_unused_5632_);
v___x_5623_ = v_date_4523_;
v_isShared_5624_ = v_isSharedCheck_5631_;
goto v_resetjp_5622_;
}
else
{
lean_inc(v_Z_5621_);
lean_inc(v_x_5620_);
lean_inc(v_X_5619_);
lean_inc(v_O_5618_);
lean_inc(v_v_5617_);
lean_inc(v_zabbrev_5616_);
lean_inc(v_z_5615_);
lean_inc(v_V_5614_);
lean_inc(v_N_5613_);
lean_inc(v_n_5612_);
lean_inc(v_A_5611_);
lean_inc(v_S_5610_);
lean_inc(v_s_5609_);
lean_inc(v_m_5608_);
lean_inc(v_H_5607_);
lean_inc(v_K_5606_);
lean_inc(v_h_5605_);
lean_inc(v_B_5604_);
lean_inc(v_b_5603_);
lean_inc(v_a_5602_);
lean_inc(v_F_5601_);
lean_inc(v_c_5600_);
lean_inc(v_e_5599_);
lean_inc(v_E_5598_);
lean_inc(v_W_5597_);
lean_inc(v_w_5596_);
lean_inc(v_q_5595_);
lean_inc(v_Q_5594_);
lean_inc(v_d_5593_);
lean_inc(v_L_5592_);
lean_inc(v_M_5591_);
lean_inc(v_D_5590_);
lean_inc(v_Y_5589_);
lean_inc(v_u_5588_);
lean_inc(v_y_5587_);
lean_inc(v_G_5586_);
lean_dec(v_date_4523_);
v___x_5623_ = lean_box(0);
v_isShared_5624_ = v_isSharedCheck_5631_;
goto v_resetjp_5622_;
}
v_resetjp_5622_:
{
lean_object* v___x_5626_; 
if (v_isShared_5585_ == 0)
{
lean_ctor_set_tag(v___x_5584_, 1);
lean_ctor_set(v___x_5584_, 0, v_data_4525_);
v___x_5626_ = v___x_5584_;
goto v_reusejp_5625_;
}
else
{
lean_object* v_reuseFailAlloc_5630_; 
v_reuseFailAlloc_5630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5630_, 0, v_data_4525_);
v___x_5626_ = v_reuseFailAlloc_5630_;
goto v_reusejp_5625_;
}
v_reusejp_5625_:
{
lean_object* v___x_5628_; 
if (v_isShared_5624_ == 0)
{
lean_ctor_set(v___x_5623_, 21, v___x_5626_);
v___x_5628_ = v___x_5623_;
goto v_reusejp_5627_;
}
else
{
lean_object* v_reuseFailAlloc_5629_; 
v_reuseFailAlloc_5629_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5629_, 0, v_G_5586_);
lean_ctor_set(v_reuseFailAlloc_5629_, 1, v_y_5587_);
lean_ctor_set(v_reuseFailAlloc_5629_, 2, v_u_5588_);
lean_ctor_set(v_reuseFailAlloc_5629_, 3, v_Y_5589_);
lean_ctor_set(v_reuseFailAlloc_5629_, 4, v_D_5590_);
lean_ctor_set(v_reuseFailAlloc_5629_, 5, v_M_5591_);
lean_ctor_set(v_reuseFailAlloc_5629_, 6, v_L_5592_);
lean_ctor_set(v_reuseFailAlloc_5629_, 7, v_d_5593_);
lean_ctor_set(v_reuseFailAlloc_5629_, 8, v_Q_5594_);
lean_ctor_set(v_reuseFailAlloc_5629_, 9, v_q_5595_);
lean_ctor_set(v_reuseFailAlloc_5629_, 10, v_w_5596_);
lean_ctor_set(v_reuseFailAlloc_5629_, 11, v_W_5597_);
lean_ctor_set(v_reuseFailAlloc_5629_, 12, v_E_5598_);
lean_ctor_set(v_reuseFailAlloc_5629_, 13, v_e_5599_);
lean_ctor_set(v_reuseFailAlloc_5629_, 14, v_c_5600_);
lean_ctor_set(v_reuseFailAlloc_5629_, 15, v_F_5601_);
lean_ctor_set(v_reuseFailAlloc_5629_, 16, v_a_5602_);
lean_ctor_set(v_reuseFailAlloc_5629_, 17, v_b_5603_);
lean_ctor_set(v_reuseFailAlloc_5629_, 18, v_B_5604_);
lean_ctor_set(v_reuseFailAlloc_5629_, 19, v_h_5605_);
lean_ctor_set(v_reuseFailAlloc_5629_, 20, v_K_5606_);
lean_ctor_set(v_reuseFailAlloc_5629_, 21, v___x_5626_);
lean_ctor_set(v_reuseFailAlloc_5629_, 22, v_H_5607_);
lean_ctor_set(v_reuseFailAlloc_5629_, 23, v_m_5608_);
lean_ctor_set(v_reuseFailAlloc_5629_, 24, v_s_5609_);
lean_ctor_set(v_reuseFailAlloc_5629_, 25, v_S_5610_);
lean_ctor_set(v_reuseFailAlloc_5629_, 26, v_A_5611_);
lean_ctor_set(v_reuseFailAlloc_5629_, 27, v_n_5612_);
lean_ctor_set(v_reuseFailAlloc_5629_, 28, v_N_5613_);
lean_ctor_set(v_reuseFailAlloc_5629_, 29, v_V_5614_);
lean_ctor_set(v_reuseFailAlloc_5629_, 30, v_z_5615_);
lean_ctor_set(v_reuseFailAlloc_5629_, 31, v_zabbrev_5616_);
lean_ctor_set(v_reuseFailAlloc_5629_, 32, v_v_5617_);
lean_ctor_set(v_reuseFailAlloc_5629_, 33, v_O_5618_);
lean_ctor_set(v_reuseFailAlloc_5629_, 34, v_X_5619_);
lean_ctor_set(v_reuseFailAlloc_5629_, 35, v_x_5620_);
lean_ctor_set(v_reuseFailAlloc_5629_, 36, v_Z_5621_);
v___x_5628_ = v_reuseFailAlloc_5629_;
goto v_reusejp_5627_;
}
v_reusejp_5627_:
{
return v___x_5628_;
}
}
}
}
}
case 22:
{
lean_object* v___x_5636_; uint8_t v_isShared_5637_; uint8_t v_isSharedCheck_5685_; 
v_isSharedCheck_5685_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_5685_ == 0)
{
lean_object* v_unused_5686_; 
v_unused_5686_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_5686_);
v___x_5636_ = v_modifier_4524_;
v_isShared_5637_ = v_isSharedCheck_5685_;
goto v_resetjp_5635_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_5636_ = lean_box(0);
v_isShared_5637_ = v_isSharedCheck_5685_;
goto v_resetjp_5635_;
}
v_resetjp_5635_:
{
lean_object* v_G_5638_; lean_object* v_y_5639_; lean_object* v_u_5640_; lean_object* v_Y_5641_; lean_object* v_D_5642_; lean_object* v_M_5643_; lean_object* v_L_5644_; lean_object* v_d_5645_; lean_object* v_Q_5646_; lean_object* v_q_5647_; lean_object* v_w_5648_; lean_object* v_W_5649_; lean_object* v_E_5650_; lean_object* v_e_5651_; lean_object* v_c_5652_; lean_object* v_F_5653_; lean_object* v_a_5654_; lean_object* v_b_5655_; lean_object* v_B_5656_; lean_object* v_h_5657_; lean_object* v_K_5658_; lean_object* v_k_5659_; lean_object* v_m_5660_; lean_object* v_s_5661_; lean_object* v_S_5662_; lean_object* v_A_5663_; lean_object* v_n_5664_; lean_object* v_N_5665_; lean_object* v_V_5666_; lean_object* v_z_5667_; lean_object* v_zabbrev_5668_; lean_object* v_v_5669_; lean_object* v_O_5670_; lean_object* v_X_5671_; lean_object* v_x_5672_; lean_object* v_Z_5673_; lean_object* v___x_5675_; uint8_t v_isShared_5676_; uint8_t v_isSharedCheck_5683_; 
v_G_5638_ = lean_ctor_get(v_date_4523_, 0);
v_y_5639_ = lean_ctor_get(v_date_4523_, 1);
v_u_5640_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5641_ = lean_ctor_get(v_date_4523_, 3);
v_D_5642_ = lean_ctor_get(v_date_4523_, 4);
v_M_5643_ = lean_ctor_get(v_date_4523_, 5);
v_L_5644_ = lean_ctor_get(v_date_4523_, 6);
v_d_5645_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5646_ = lean_ctor_get(v_date_4523_, 8);
v_q_5647_ = lean_ctor_get(v_date_4523_, 9);
v_w_5648_ = lean_ctor_get(v_date_4523_, 10);
v_W_5649_ = lean_ctor_get(v_date_4523_, 11);
v_E_5650_ = lean_ctor_get(v_date_4523_, 12);
v_e_5651_ = lean_ctor_get(v_date_4523_, 13);
v_c_5652_ = lean_ctor_get(v_date_4523_, 14);
v_F_5653_ = lean_ctor_get(v_date_4523_, 15);
v_a_5654_ = lean_ctor_get(v_date_4523_, 16);
v_b_5655_ = lean_ctor_get(v_date_4523_, 17);
v_B_5656_ = lean_ctor_get(v_date_4523_, 18);
v_h_5657_ = lean_ctor_get(v_date_4523_, 19);
v_K_5658_ = lean_ctor_get(v_date_4523_, 20);
v_k_5659_ = lean_ctor_get(v_date_4523_, 21);
v_m_5660_ = lean_ctor_get(v_date_4523_, 23);
v_s_5661_ = lean_ctor_get(v_date_4523_, 24);
v_S_5662_ = lean_ctor_get(v_date_4523_, 25);
v_A_5663_ = lean_ctor_get(v_date_4523_, 26);
v_n_5664_ = lean_ctor_get(v_date_4523_, 27);
v_N_5665_ = lean_ctor_get(v_date_4523_, 28);
v_V_5666_ = lean_ctor_get(v_date_4523_, 29);
v_z_5667_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5668_ = lean_ctor_get(v_date_4523_, 31);
v_v_5669_ = lean_ctor_get(v_date_4523_, 32);
v_O_5670_ = lean_ctor_get(v_date_4523_, 33);
v_X_5671_ = lean_ctor_get(v_date_4523_, 34);
v_x_5672_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5673_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5683_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5683_ == 0)
{
lean_object* v_unused_5684_; 
v_unused_5684_ = lean_ctor_get(v_date_4523_, 22);
lean_dec(v_unused_5684_);
v___x_5675_ = v_date_4523_;
v_isShared_5676_ = v_isSharedCheck_5683_;
goto v_resetjp_5674_;
}
else
{
lean_inc(v_Z_5673_);
lean_inc(v_x_5672_);
lean_inc(v_X_5671_);
lean_inc(v_O_5670_);
lean_inc(v_v_5669_);
lean_inc(v_zabbrev_5668_);
lean_inc(v_z_5667_);
lean_inc(v_V_5666_);
lean_inc(v_N_5665_);
lean_inc(v_n_5664_);
lean_inc(v_A_5663_);
lean_inc(v_S_5662_);
lean_inc(v_s_5661_);
lean_inc(v_m_5660_);
lean_inc(v_k_5659_);
lean_inc(v_K_5658_);
lean_inc(v_h_5657_);
lean_inc(v_B_5656_);
lean_inc(v_b_5655_);
lean_inc(v_a_5654_);
lean_inc(v_F_5653_);
lean_inc(v_c_5652_);
lean_inc(v_e_5651_);
lean_inc(v_E_5650_);
lean_inc(v_W_5649_);
lean_inc(v_w_5648_);
lean_inc(v_q_5647_);
lean_inc(v_Q_5646_);
lean_inc(v_d_5645_);
lean_inc(v_L_5644_);
lean_inc(v_M_5643_);
lean_inc(v_D_5642_);
lean_inc(v_Y_5641_);
lean_inc(v_u_5640_);
lean_inc(v_y_5639_);
lean_inc(v_G_5638_);
lean_dec(v_date_4523_);
v___x_5675_ = lean_box(0);
v_isShared_5676_ = v_isSharedCheck_5683_;
goto v_resetjp_5674_;
}
v_resetjp_5674_:
{
lean_object* v___x_5678_; 
if (v_isShared_5637_ == 0)
{
lean_ctor_set_tag(v___x_5636_, 1);
lean_ctor_set(v___x_5636_, 0, v_data_4525_);
v___x_5678_ = v___x_5636_;
goto v_reusejp_5677_;
}
else
{
lean_object* v_reuseFailAlloc_5682_; 
v_reuseFailAlloc_5682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5682_, 0, v_data_4525_);
v___x_5678_ = v_reuseFailAlloc_5682_;
goto v_reusejp_5677_;
}
v_reusejp_5677_:
{
lean_object* v___x_5680_; 
if (v_isShared_5676_ == 0)
{
lean_ctor_set(v___x_5675_, 22, v___x_5678_);
v___x_5680_ = v___x_5675_;
goto v_reusejp_5679_;
}
else
{
lean_object* v_reuseFailAlloc_5681_; 
v_reuseFailAlloc_5681_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5681_, 0, v_G_5638_);
lean_ctor_set(v_reuseFailAlloc_5681_, 1, v_y_5639_);
lean_ctor_set(v_reuseFailAlloc_5681_, 2, v_u_5640_);
lean_ctor_set(v_reuseFailAlloc_5681_, 3, v_Y_5641_);
lean_ctor_set(v_reuseFailAlloc_5681_, 4, v_D_5642_);
lean_ctor_set(v_reuseFailAlloc_5681_, 5, v_M_5643_);
lean_ctor_set(v_reuseFailAlloc_5681_, 6, v_L_5644_);
lean_ctor_set(v_reuseFailAlloc_5681_, 7, v_d_5645_);
lean_ctor_set(v_reuseFailAlloc_5681_, 8, v_Q_5646_);
lean_ctor_set(v_reuseFailAlloc_5681_, 9, v_q_5647_);
lean_ctor_set(v_reuseFailAlloc_5681_, 10, v_w_5648_);
lean_ctor_set(v_reuseFailAlloc_5681_, 11, v_W_5649_);
lean_ctor_set(v_reuseFailAlloc_5681_, 12, v_E_5650_);
lean_ctor_set(v_reuseFailAlloc_5681_, 13, v_e_5651_);
lean_ctor_set(v_reuseFailAlloc_5681_, 14, v_c_5652_);
lean_ctor_set(v_reuseFailAlloc_5681_, 15, v_F_5653_);
lean_ctor_set(v_reuseFailAlloc_5681_, 16, v_a_5654_);
lean_ctor_set(v_reuseFailAlloc_5681_, 17, v_b_5655_);
lean_ctor_set(v_reuseFailAlloc_5681_, 18, v_B_5656_);
lean_ctor_set(v_reuseFailAlloc_5681_, 19, v_h_5657_);
lean_ctor_set(v_reuseFailAlloc_5681_, 20, v_K_5658_);
lean_ctor_set(v_reuseFailAlloc_5681_, 21, v_k_5659_);
lean_ctor_set(v_reuseFailAlloc_5681_, 22, v___x_5678_);
lean_ctor_set(v_reuseFailAlloc_5681_, 23, v_m_5660_);
lean_ctor_set(v_reuseFailAlloc_5681_, 24, v_s_5661_);
lean_ctor_set(v_reuseFailAlloc_5681_, 25, v_S_5662_);
lean_ctor_set(v_reuseFailAlloc_5681_, 26, v_A_5663_);
lean_ctor_set(v_reuseFailAlloc_5681_, 27, v_n_5664_);
lean_ctor_set(v_reuseFailAlloc_5681_, 28, v_N_5665_);
lean_ctor_set(v_reuseFailAlloc_5681_, 29, v_V_5666_);
lean_ctor_set(v_reuseFailAlloc_5681_, 30, v_z_5667_);
lean_ctor_set(v_reuseFailAlloc_5681_, 31, v_zabbrev_5668_);
lean_ctor_set(v_reuseFailAlloc_5681_, 32, v_v_5669_);
lean_ctor_set(v_reuseFailAlloc_5681_, 33, v_O_5670_);
lean_ctor_set(v_reuseFailAlloc_5681_, 34, v_X_5671_);
lean_ctor_set(v_reuseFailAlloc_5681_, 35, v_x_5672_);
lean_ctor_set(v_reuseFailAlloc_5681_, 36, v_Z_5673_);
v___x_5680_ = v_reuseFailAlloc_5681_;
goto v_reusejp_5679_;
}
v_reusejp_5679_:
{
return v___x_5680_;
}
}
}
}
}
case 23:
{
lean_object* v___x_5688_; uint8_t v_isShared_5689_; uint8_t v_isSharedCheck_5737_; 
v_isSharedCheck_5737_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_5737_ == 0)
{
lean_object* v_unused_5738_; 
v_unused_5738_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_5738_);
v___x_5688_ = v_modifier_4524_;
v_isShared_5689_ = v_isSharedCheck_5737_;
goto v_resetjp_5687_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_5688_ = lean_box(0);
v_isShared_5689_ = v_isSharedCheck_5737_;
goto v_resetjp_5687_;
}
v_resetjp_5687_:
{
lean_object* v_G_5690_; lean_object* v_y_5691_; lean_object* v_u_5692_; lean_object* v_Y_5693_; lean_object* v_D_5694_; lean_object* v_M_5695_; lean_object* v_L_5696_; lean_object* v_d_5697_; lean_object* v_Q_5698_; lean_object* v_q_5699_; lean_object* v_w_5700_; lean_object* v_W_5701_; lean_object* v_E_5702_; lean_object* v_e_5703_; lean_object* v_c_5704_; lean_object* v_F_5705_; lean_object* v_a_5706_; lean_object* v_b_5707_; lean_object* v_B_5708_; lean_object* v_h_5709_; lean_object* v_K_5710_; lean_object* v_k_5711_; lean_object* v_H_5712_; lean_object* v_s_5713_; lean_object* v_S_5714_; lean_object* v_A_5715_; lean_object* v_n_5716_; lean_object* v_N_5717_; lean_object* v_V_5718_; lean_object* v_z_5719_; lean_object* v_zabbrev_5720_; lean_object* v_v_5721_; lean_object* v_O_5722_; lean_object* v_X_5723_; lean_object* v_x_5724_; lean_object* v_Z_5725_; lean_object* v___x_5727_; uint8_t v_isShared_5728_; uint8_t v_isSharedCheck_5735_; 
v_G_5690_ = lean_ctor_get(v_date_4523_, 0);
v_y_5691_ = lean_ctor_get(v_date_4523_, 1);
v_u_5692_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5693_ = lean_ctor_get(v_date_4523_, 3);
v_D_5694_ = lean_ctor_get(v_date_4523_, 4);
v_M_5695_ = lean_ctor_get(v_date_4523_, 5);
v_L_5696_ = lean_ctor_get(v_date_4523_, 6);
v_d_5697_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5698_ = lean_ctor_get(v_date_4523_, 8);
v_q_5699_ = lean_ctor_get(v_date_4523_, 9);
v_w_5700_ = lean_ctor_get(v_date_4523_, 10);
v_W_5701_ = lean_ctor_get(v_date_4523_, 11);
v_E_5702_ = lean_ctor_get(v_date_4523_, 12);
v_e_5703_ = lean_ctor_get(v_date_4523_, 13);
v_c_5704_ = lean_ctor_get(v_date_4523_, 14);
v_F_5705_ = lean_ctor_get(v_date_4523_, 15);
v_a_5706_ = lean_ctor_get(v_date_4523_, 16);
v_b_5707_ = lean_ctor_get(v_date_4523_, 17);
v_B_5708_ = lean_ctor_get(v_date_4523_, 18);
v_h_5709_ = lean_ctor_get(v_date_4523_, 19);
v_K_5710_ = lean_ctor_get(v_date_4523_, 20);
v_k_5711_ = lean_ctor_get(v_date_4523_, 21);
v_H_5712_ = lean_ctor_get(v_date_4523_, 22);
v_s_5713_ = lean_ctor_get(v_date_4523_, 24);
v_S_5714_ = lean_ctor_get(v_date_4523_, 25);
v_A_5715_ = lean_ctor_get(v_date_4523_, 26);
v_n_5716_ = lean_ctor_get(v_date_4523_, 27);
v_N_5717_ = lean_ctor_get(v_date_4523_, 28);
v_V_5718_ = lean_ctor_get(v_date_4523_, 29);
v_z_5719_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5720_ = lean_ctor_get(v_date_4523_, 31);
v_v_5721_ = lean_ctor_get(v_date_4523_, 32);
v_O_5722_ = lean_ctor_get(v_date_4523_, 33);
v_X_5723_ = lean_ctor_get(v_date_4523_, 34);
v_x_5724_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5725_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5735_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5735_ == 0)
{
lean_object* v_unused_5736_; 
v_unused_5736_ = lean_ctor_get(v_date_4523_, 23);
lean_dec(v_unused_5736_);
v___x_5727_ = v_date_4523_;
v_isShared_5728_ = v_isSharedCheck_5735_;
goto v_resetjp_5726_;
}
else
{
lean_inc(v_Z_5725_);
lean_inc(v_x_5724_);
lean_inc(v_X_5723_);
lean_inc(v_O_5722_);
lean_inc(v_v_5721_);
lean_inc(v_zabbrev_5720_);
lean_inc(v_z_5719_);
lean_inc(v_V_5718_);
lean_inc(v_N_5717_);
lean_inc(v_n_5716_);
lean_inc(v_A_5715_);
lean_inc(v_S_5714_);
lean_inc(v_s_5713_);
lean_inc(v_H_5712_);
lean_inc(v_k_5711_);
lean_inc(v_K_5710_);
lean_inc(v_h_5709_);
lean_inc(v_B_5708_);
lean_inc(v_b_5707_);
lean_inc(v_a_5706_);
lean_inc(v_F_5705_);
lean_inc(v_c_5704_);
lean_inc(v_e_5703_);
lean_inc(v_E_5702_);
lean_inc(v_W_5701_);
lean_inc(v_w_5700_);
lean_inc(v_q_5699_);
lean_inc(v_Q_5698_);
lean_inc(v_d_5697_);
lean_inc(v_L_5696_);
lean_inc(v_M_5695_);
lean_inc(v_D_5694_);
lean_inc(v_Y_5693_);
lean_inc(v_u_5692_);
lean_inc(v_y_5691_);
lean_inc(v_G_5690_);
lean_dec(v_date_4523_);
v___x_5727_ = lean_box(0);
v_isShared_5728_ = v_isSharedCheck_5735_;
goto v_resetjp_5726_;
}
v_resetjp_5726_:
{
lean_object* v___x_5730_; 
if (v_isShared_5689_ == 0)
{
lean_ctor_set_tag(v___x_5688_, 1);
lean_ctor_set(v___x_5688_, 0, v_data_4525_);
v___x_5730_ = v___x_5688_;
goto v_reusejp_5729_;
}
else
{
lean_object* v_reuseFailAlloc_5734_; 
v_reuseFailAlloc_5734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5734_, 0, v_data_4525_);
v___x_5730_ = v_reuseFailAlloc_5734_;
goto v_reusejp_5729_;
}
v_reusejp_5729_:
{
lean_object* v___x_5732_; 
if (v_isShared_5728_ == 0)
{
lean_ctor_set(v___x_5727_, 23, v___x_5730_);
v___x_5732_ = v___x_5727_;
goto v_reusejp_5731_;
}
else
{
lean_object* v_reuseFailAlloc_5733_; 
v_reuseFailAlloc_5733_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5733_, 0, v_G_5690_);
lean_ctor_set(v_reuseFailAlloc_5733_, 1, v_y_5691_);
lean_ctor_set(v_reuseFailAlloc_5733_, 2, v_u_5692_);
lean_ctor_set(v_reuseFailAlloc_5733_, 3, v_Y_5693_);
lean_ctor_set(v_reuseFailAlloc_5733_, 4, v_D_5694_);
lean_ctor_set(v_reuseFailAlloc_5733_, 5, v_M_5695_);
lean_ctor_set(v_reuseFailAlloc_5733_, 6, v_L_5696_);
lean_ctor_set(v_reuseFailAlloc_5733_, 7, v_d_5697_);
lean_ctor_set(v_reuseFailAlloc_5733_, 8, v_Q_5698_);
lean_ctor_set(v_reuseFailAlloc_5733_, 9, v_q_5699_);
lean_ctor_set(v_reuseFailAlloc_5733_, 10, v_w_5700_);
lean_ctor_set(v_reuseFailAlloc_5733_, 11, v_W_5701_);
lean_ctor_set(v_reuseFailAlloc_5733_, 12, v_E_5702_);
lean_ctor_set(v_reuseFailAlloc_5733_, 13, v_e_5703_);
lean_ctor_set(v_reuseFailAlloc_5733_, 14, v_c_5704_);
lean_ctor_set(v_reuseFailAlloc_5733_, 15, v_F_5705_);
lean_ctor_set(v_reuseFailAlloc_5733_, 16, v_a_5706_);
lean_ctor_set(v_reuseFailAlloc_5733_, 17, v_b_5707_);
lean_ctor_set(v_reuseFailAlloc_5733_, 18, v_B_5708_);
lean_ctor_set(v_reuseFailAlloc_5733_, 19, v_h_5709_);
lean_ctor_set(v_reuseFailAlloc_5733_, 20, v_K_5710_);
lean_ctor_set(v_reuseFailAlloc_5733_, 21, v_k_5711_);
lean_ctor_set(v_reuseFailAlloc_5733_, 22, v_H_5712_);
lean_ctor_set(v_reuseFailAlloc_5733_, 23, v___x_5730_);
lean_ctor_set(v_reuseFailAlloc_5733_, 24, v_s_5713_);
lean_ctor_set(v_reuseFailAlloc_5733_, 25, v_S_5714_);
lean_ctor_set(v_reuseFailAlloc_5733_, 26, v_A_5715_);
lean_ctor_set(v_reuseFailAlloc_5733_, 27, v_n_5716_);
lean_ctor_set(v_reuseFailAlloc_5733_, 28, v_N_5717_);
lean_ctor_set(v_reuseFailAlloc_5733_, 29, v_V_5718_);
lean_ctor_set(v_reuseFailAlloc_5733_, 30, v_z_5719_);
lean_ctor_set(v_reuseFailAlloc_5733_, 31, v_zabbrev_5720_);
lean_ctor_set(v_reuseFailAlloc_5733_, 32, v_v_5721_);
lean_ctor_set(v_reuseFailAlloc_5733_, 33, v_O_5722_);
lean_ctor_set(v_reuseFailAlloc_5733_, 34, v_X_5723_);
lean_ctor_set(v_reuseFailAlloc_5733_, 35, v_x_5724_);
lean_ctor_set(v_reuseFailAlloc_5733_, 36, v_Z_5725_);
v___x_5732_ = v_reuseFailAlloc_5733_;
goto v_reusejp_5731_;
}
v_reusejp_5731_:
{
return v___x_5732_;
}
}
}
}
}
case 24:
{
lean_object* v___x_5740_; uint8_t v_isShared_5741_; uint8_t v_isSharedCheck_5789_; 
v_isSharedCheck_5789_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_5789_ == 0)
{
lean_object* v_unused_5790_; 
v_unused_5790_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_5790_);
v___x_5740_ = v_modifier_4524_;
v_isShared_5741_ = v_isSharedCheck_5789_;
goto v_resetjp_5739_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_5740_ = lean_box(0);
v_isShared_5741_ = v_isSharedCheck_5789_;
goto v_resetjp_5739_;
}
v_resetjp_5739_:
{
lean_object* v_G_5742_; lean_object* v_y_5743_; lean_object* v_u_5744_; lean_object* v_Y_5745_; lean_object* v_D_5746_; lean_object* v_M_5747_; lean_object* v_L_5748_; lean_object* v_d_5749_; lean_object* v_Q_5750_; lean_object* v_q_5751_; lean_object* v_w_5752_; lean_object* v_W_5753_; lean_object* v_E_5754_; lean_object* v_e_5755_; lean_object* v_c_5756_; lean_object* v_F_5757_; lean_object* v_a_5758_; lean_object* v_b_5759_; lean_object* v_B_5760_; lean_object* v_h_5761_; lean_object* v_K_5762_; lean_object* v_k_5763_; lean_object* v_H_5764_; lean_object* v_m_5765_; lean_object* v_S_5766_; lean_object* v_A_5767_; lean_object* v_n_5768_; lean_object* v_N_5769_; lean_object* v_V_5770_; lean_object* v_z_5771_; lean_object* v_zabbrev_5772_; lean_object* v_v_5773_; lean_object* v_O_5774_; lean_object* v_X_5775_; lean_object* v_x_5776_; lean_object* v_Z_5777_; lean_object* v___x_5779_; uint8_t v_isShared_5780_; uint8_t v_isSharedCheck_5787_; 
v_G_5742_ = lean_ctor_get(v_date_4523_, 0);
v_y_5743_ = lean_ctor_get(v_date_4523_, 1);
v_u_5744_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5745_ = lean_ctor_get(v_date_4523_, 3);
v_D_5746_ = lean_ctor_get(v_date_4523_, 4);
v_M_5747_ = lean_ctor_get(v_date_4523_, 5);
v_L_5748_ = lean_ctor_get(v_date_4523_, 6);
v_d_5749_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5750_ = lean_ctor_get(v_date_4523_, 8);
v_q_5751_ = lean_ctor_get(v_date_4523_, 9);
v_w_5752_ = lean_ctor_get(v_date_4523_, 10);
v_W_5753_ = lean_ctor_get(v_date_4523_, 11);
v_E_5754_ = lean_ctor_get(v_date_4523_, 12);
v_e_5755_ = lean_ctor_get(v_date_4523_, 13);
v_c_5756_ = lean_ctor_get(v_date_4523_, 14);
v_F_5757_ = lean_ctor_get(v_date_4523_, 15);
v_a_5758_ = lean_ctor_get(v_date_4523_, 16);
v_b_5759_ = lean_ctor_get(v_date_4523_, 17);
v_B_5760_ = lean_ctor_get(v_date_4523_, 18);
v_h_5761_ = lean_ctor_get(v_date_4523_, 19);
v_K_5762_ = lean_ctor_get(v_date_4523_, 20);
v_k_5763_ = lean_ctor_get(v_date_4523_, 21);
v_H_5764_ = lean_ctor_get(v_date_4523_, 22);
v_m_5765_ = lean_ctor_get(v_date_4523_, 23);
v_S_5766_ = lean_ctor_get(v_date_4523_, 25);
v_A_5767_ = lean_ctor_get(v_date_4523_, 26);
v_n_5768_ = lean_ctor_get(v_date_4523_, 27);
v_N_5769_ = lean_ctor_get(v_date_4523_, 28);
v_V_5770_ = lean_ctor_get(v_date_4523_, 29);
v_z_5771_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5772_ = lean_ctor_get(v_date_4523_, 31);
v_v_5773_ = lean_ctor_get(v_date_4523_, 32);
v_O_5774_ = lean_ctor_get(v_date_4523_, 33);
v_X_5775_ = lean_ctor_get(v_date_4523_, 34);
v_x_5776_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5777_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5787_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5787_ == 0)
{
lean_object* v_unused_5788_; 
v_unused_5788_ = lean_ctor_get(v_date_4523_, 24);
lean_dec(v_unused_5788_);
v___x_5779_ = v_date_4523_;
v_isShared_5780_ = v_isSharedCheck_5787_;
goto v_resetjp_5778_;
}
else
{
lean_inc(v_Z_5777_);
lean_inc(v_x_5776_);
lean_inc(v_X_5775_);
lean_inc(v_O_5774_);
lean_inc(v_v_5773_);
lean_inc(v_zabbrev_5772_);
lean_inc(v_z_5771_);
lean_inc(v_V_5770_);
lean_inc(v_N_5769_);
lean_inc(v_n_5768_);
lean_inc(v_A_5767_);
lean_inc(v_S_5766_);
lean_inc(v_m_5765_);
lean_inc(v_H_5764_);
lean_inc(v_k_5763_);
lean_inc(v_K_5762_);
lean_inc(v_h_5761_);
lean_inc(v_B_5760_);
lean_inc(v_b_5759_);
lean_inc(v_a_5758_);
lean_inc(v_F_5757_);
lean_inc(v_c_5756_);
lean_inc(v_e_5755_);
lean_inc(v_E_5754_);
lean_inc(v_W_5753_);
lean_inc(v_w_5752_);
lean_inc(v_q_5751_);
lean_inc(v_Q_5750_);
lean_inc(v_d_5749_);
lean_inc(v_L_5748_);
lean_inc(v_M_5747_);
lean_inc(v_D_5746_);
lean_inc(v_Y_5745_);
lean_inc(v_u_5744_);
lean_inc(v_y_5743_);
lean_inc(v_G_5742_);
lean_dec(v_date_4523_);
v___x_5779_ = lean_box(0);
v_isShared_5780_ = v_isSharedCheck_5787_;
goto v_resetjp_5778_;
}
v_resetjp_5778_:
{
lean_object* v___x_5782_; 
if (v_isShared_5741_ == 0)
{
lean_ctor_set_tag(v___x_5740_, 1);
lean_ctor_set(v___x_5740_, 0, v_data_4525_);
v___x_5782_ = v___x_5740_;
goto v_reusejp_5781_;
}
else
{
lean_object* v_reuseFailAlloc_5786_; 
v_reuseFailAlloc_5786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5786_, 0, v_data_4525_);
v___x_5782_ = v_reuseFailAlloc_5786_;
goto v_reusejp_5781_;
}
v_reusejp_5781_:
{
lean_object* v___x_5784_; 
if (v_isShared_5780_ == 0)
{
lean_ctor_set(v___x_5779_, 24, v___x_5782_);
v___x_5784_ = v___x_5779_;
goto v_reusejp_5783_;
}
else
{
lean_object* v_reuseFailAlloc_5785_; 
v_reuseFailAlloc_5785_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5785_, 0, v_G_5742_);
lean_ctor_set(v_reuseFailAlloc_5785_, 1, v_y_5743_);
lean_ctor_set(v_reuseFailAlloc_5785_, 2, v_u_5744_);
lean_ctor_set(v_reuseFailAlloc_5785_, 3, v_Y_5745_);
lean_ctor_set(v_reuseFailAlloc_5785_, 4, v_D_5746_);
lean_ctor_set(v_reuseFailAlloc_5785_, 5, v_M_5747_);
lean_ctor_set(v_reuseFailAlloc_5785_, 6, v_L_5748_);
lean_ctor_set(v_reuseFailAlloc_5785_, 7, v_d_5749_);
lean_ctor_set(v_reuseFailAlloc_5785_, 8, v_Q_5750_);
lean_ctor_set(v_reuseFailAlloc_5785_, 9, v_q_5751_);
lean_ctor_set(v_reuseFailAlloc_5785_, 10, v_w_5752_);
lean_ctor_set(v_reuseFailAlloc_5785_, 11, v_W_5753_);
lean_ctor_set(v_reuseFailAlloc_5785_, 12, v_E_5754_);
lean_ctor_set(v_reuseFailAlloc_5785_, 13, v_e_5755_);
lean_ctor_set(v_reuseFailAlloc_5785_, 14, v_c_5756_);
lean_ctor_set(v_reuseFailAlloc_5785_, 15, v_F_5757_);
lean_ctor_set(v_reuseFailAlloc_5785_, 16, v_a_5758_);
lean_ctor_set(v_reuseFailAlloc_5785_, 17, v_b_5759_);
lean_ctor_set(v_reuseFailAlloc_5785_, 18, v_B_5760_);
lean_ctor_set(v_reuseFailAlloc_5785_, 19, v_h_5761_);
lean_ctor_set(v_reuseFailAlloc_5785_, 20, v_K_5762_);
lean_ctor_set(v_reuseFailAlloc_5785_, 21, v_k_5763_);
lean_ctor_set(v_reuseFailAlloc_5785_, 22, v_H_5764_);
lean_ctor_set(v_reuseFailAlloc_5785_, 23, v_m_5765_);
lean_ctor_set(v_reuseFailAlloc_5785_, 24, v___x_5782_);
lean_ctor_set(v_reuseFailAlloc_5785_, 25, v_S_5766_);
lean_ctor_set(v_reuseFailAlloc_5785_, 26, v_A_5767_);
lean_ctor_set(v_reuseFailAlloc_5785_, 27, v_n_5768_);
lean_ctor_set(v_reuseFailAlloc_5785_, 28, v_N_5769_);
lean_ctor_set(v_reuseFailAlloc_5785_, 29, v_V_5770_);
lean_ctor_set(v_reuseFailAlloc_5785_, 30, v_z_5771_);
lean_ctor_set(v_reuseFailAlloc_5785_, 31, v_zabbrev_5772_);
lean_ctor_set(v_reuseFailAlloc_5785_, 32, v_v_5773_);
lean_ctor_set(v_reuseFailAlloc_5785_, 33, v_O_5774_);
lean_ctor_set(v_reuseFailAlloc_5785_, 34, v_X_5775_);
lean_ctor_set(v_reuseFailAlloc_5785_, 35, v_x_5776_);
lean_ctor_set(v_reuseFailAlloc_5785_, 36, v_Z_5777_);
v___x_5784_ = v_reuseFailAlloc_5785_;
goto v_reusejp_5783_;
}
v_reusejp_5783_:
{
return v___x_5784_;
}
}
}
}
}
case 25:
{
lean_object* v___x_5792_; uint8_t v_isShared_5793_; uint8_t v_isSharedCheck_5841_; 
v_isSharedCheck_5841_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_5841_ == 0)
{
lean_object* v_unused_5842_; 
v_unused_5842_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_5842_);
v___x_5792_ = v_modifier_4524_;
v_isShared_5793_ = v_isSharedCheck_5841_;
goto v_resetjp_5791_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_5792_ = lean_box(0);
v_isShared_5793_ = v_isSharedCheck_5841_;
goto v_resetjp_5791_;
}
v_resetjp_5791_:
{
lean_object* v_G_5794_; lean_object* v_y_5795_; lean_object* v_u_5796_; lean_object* v_Y_5797_; lean_object* v_D_5798_; lean_object* v_M_5799_; lean_object* v_L_5800_; lean_object* v_d_5801_; lean_object* v_Q_5802_; lean_object* v_q_5803_; lean_object* v_w_5804_; lean_object* v_W_5805_; lean_object* v_E_5806_; lean_object* v_e_5807_; lean_object* v_c_5808_; lean_object* v_F_5809_; lean_object* v_a_5810_; lean_object* v_b_5811_; lean_object* v_B_5812_; lean_object* v_h_5813_; lean_object* v_K_5814_; lean_object* v_k_5815_; lean_object* v_H_5816_; lean_object* v_m_5817_; lean_object* v_s_5818_; lean_object* v_A_5819_; lean_object* v_n_5820_; lean_object* v_N_5821_; lean_object* v_V_5822_; lean_object* v_z_5823_; lean_object* v_zabbrev_5824_; lean_object* v_v_5825_; lean_object* v_O_5826_; lean_object* v_X_5827_; lean_object* v_x_5828_; lean_object* v_Z_5829_; lean_object* v___x_5831_; uint8_t v_isShared_5832_; uint8_t v_isSharedCheck_5839_; 
v_G_5794_ = lean_ctor_get(v_date_4523_, 0);
v_y_5795_ = lean_ctor_get(v_date_4523_, 1);
v_u_5796_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5797_ = lean_ctor_get(v_date_4523_, 3);
v_D_5798_ = lean_ctor_get(v_date_4523_, 4);
v_M_5799_ = lean_ctor_get(v_date_4523_, 5);
v_L_5800_ = lean_ctor_get(v_date_4523_, 6);
v_d_5801_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5802_ = lean_ctor_get(v_date_4523_, 8);
v_q_5803_ = lean_ctor_get(v_date_4523_, 9);
v_w_5804_ = lean_ctor_get(v_date_4523_, 10);
v_W_5805_ = lean_ctor_get(v_date_4523_, 11);
v_E_5806_ = lean_ctor_get(v_date_4523_, 12);
v_e_5807_ = lean_ctor_get(v_date_4523_, 13);
v_c_5808_ = lean_ctor_get(v_date_4523_, 14);
v_F_5809_ = lean_ctor_get(v_date_4523_, 15);
v_a_5810_ = lean_ctor_get(v_date_4523_, 16);
v_b_5811_ = lean_ctor_get(v_date_4523_, 17);
v_B_5812_ = lean_ctor_get(v_date_4523_, 18);
v_h_5813_ = lean_ctor_get(v_date_4523_, 19);
v_K_5814_ = lean_ctor_get(v_date_4523_, 20);
v_k_5815_ = lean_ctor_get(v_date_4523_, 21);
v_H_5816_ = lean_ctor_get(v_date_4523_, 22);
v_m_5817_ = lean_ctor_get(v_date_4523_, 23);
v_s_5818_ = lean_ctor_get(v_date_4523_, 24);
v_A_5819_ = lean_ctor_get(v_date_4523_, 26);
v_n_5820_ = lean_ctor_get(v_date_4523_, 27);
v_N_5821_ = lean_ctor_get(v_date_4523_, 28);
v_V_5822_ = lean_ctor_get(v_date_4523_, 29);
v_z_5823_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5824_ = lean_ctor_get(v_date_4523_, 31);
v_v_5825_ = lean_ctor_get(v_date_4523_, 32);
v_O_5826_ = lean_ctor_get(v_date_4523_, 33);
v_X_5827_ = lean_ctor_get(v_date_4523_, 34);
v_x_5828_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5829_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5839_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5839_ == 0)
{
lean_object* v_unused_5840_; 
v_unused_5840_ = lean_ctor_get(v_date_4523_, 25);
lean_dec(v_unused_5840_);
v___x_5831_ = v_date_4523_;
v_isShared_5832_ = v_isSharedCheck_5839_;
goto v_resetjp_5830_;
}
else
{
lean_inc(v_Z_5829_);
lean_inc(v_x_5828_);
lean_inc(v_X_5827_);
lean_inc(v_O_5826_);
lean_inc(v_v_5825_);
lean_inc(v_zabbrev_5824_);
lean_inc(v_z_5823_);
lean_inc(v_V_5822_);
lean_inc(v_N_5821_);
lean_inc(v_n_5820_);
lean_inc(v_A_5819_);
lean_inc(v_s_5818_);
lean_inc(v_m_5817_);
lean_inc(v_H_5816_);
lean_inc(v_k_5815_);
lean_inc(v_K_5814_);
lean_inc(v_h_5813_);
lean_inc(v_B_5812_);
lean_inc(v_b_5811_);
lean_inc(v_a_5810_);
lean_inc(v_F_5809_);
lean_inc(v_c_5808_);
lean_inc(v_e_5807_);
lean_inc(v_E_5806_);
lean_inc(v_W_5805_);
lean_inc(v_w_5804_);
lean_inc(v_q_5803_);
lean_inc(v_Q_5802_);
lean_inc(v_d_5801_);
lean_inc(v_L_5800_);
lean_inc(v_M_5799_);
lean_inc(v_D_5798_);
lean_inc(v_Y_5797_);
lean_inc(v_u_5796_);
lean_inc(v_y_5795_);
lean_inc(v_G_5794_);
lean_dec(v_date_4523_);
v___x_5831_ = lean_box(0);
v_isShared_5832_ = v_isSharedCheck_5839_;
goto v_resetjp_5830_;
}
v_resetjp_5830_:
{
lean_object* v___x_5834_; 
if (v_isShared_5793_ == 0)
{
lean_ctor_set_tag(v___x_5792_, 1);
lean_ctor_set(v___x_5792_, 0, v_data_4525_);
v___x_5834_ = v___x_5792_;
goto v_reusejp_5833_;
}
else
{
lean_object* v_reuseFailAlloc_5838_; 
v_reuseFailAlloc_5838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5838_, 0, v_data_4525_);
v___x_5834_ = v_reuseFailAlloc_5838_;
goto v_reusejp_5833_;
}
v_reusejp_5833_:
{
lean_object* v___x_5836_; 
if (v_isShared_5832_ == 0)
{
lean_ctor_set(v___x_5831_, 25, v___x_5834_);
v___x_5836_ = v___x_5831_;
goto v_reusejp_5835_;
}
else
{
lean_object* v_reuseFailAlloc_5837_; 
v_reuseFailAlloc_5837_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5837_, 0, v_G_5794_);
lean_ctor_set(v_reuseFailAlloc_5837_, 1, v_y_5795_);
lean_ctor_set(v_reuseFailAlloc_5837_, 2, v_u_5796_);
lean_ctor_set(v_reuseFailAlloc_5837_, 3, v_Y_5797_);
lean_ctor_set(v_reuseFailAlloc_5837_, 4, v_D_5798_);
lean_ctor_set(v_reuseFailAlloc_5837_, 5, v_M_5799_);
lean_ctor_set(v_reuseFailAlloc_5837_, 6, v_L_5800_);
lean_ctor_set(v_reuseFailAlloc_5837_, 7, v_d_5801_);
lean_ctor_set(v_reuseFailAlloc_5837_, 8, v_Q_5802_);
lean_ctor_set(v_reuseFailAlloc_5837_, 9, v_q_5803_);
lean_ctor_set(v_reuseFailAlloc_5837_, 10, v_w_5804_);
lean_ctor_set(v_reuseFailAlloc_5837_, 11, v_W_5805_);
lean_ctor_set(v_reuseFailAlloc_5837_, 12, v_E_5806_);
lean_ctor_set(v_reuseFailAlloc_5837_, 13, v_e_5807_);
lean_ctor_set(v_reuseFailAlloc_5837_, 14, v_c_5808_);
lean_ctor_set(v_reuseFailAlloc_5837_, 15, v_F_5809_);
lean_ctor_set(v_reuseFailAlloc_5837_, 16, v_a_5810_);
lean_ctor_set(v_reuseFailAlloc_5837_, 17, v_b_5811_);
lean_ctor_set(v_reuseFailAlloc_5837_, 18, v_B_5812_);
lean_ctor_set(v_reuseFailAlloc_5837_, 19, v_h_5813_);
lean_ctor_set(v_reuseFailAlloc_5837_, 20, v_K_5814_);
lean_ctor_set(v_reuseFailAlloc_5837_, 21, v_k_5815_);
lean_ctor_set(v_reuseFailAlloc_5837_, 22, v_H_5816_);
lean_ctor_set(v_reuseFailAlloc_5837_, 23, v_m_5817_);
lean_ctor_set(v_reuseFailAlloc_5837_, 24, v_s_5818_);
lean_ctor_set(v_reuseFailAlloc_5837_, 25, v___x_5834_);
lean_ctor_set(v_reuseFailAlloc_5837_, 26, v_A_5819_);
lean_ctor_set(v_reuseFailAlloc_5837_, 27, v_n_5820_);
lean_ctor_set(v_reuseFailAlloc_5837_, 28, v_N_5821_);
lean_ctor_set(v_reuseFailAlloc_5837_, 29, v_V_5822_);
lean_ctor_set(v_reuseFailAlloc_5837_, 30, v_z_5823_);
lean_ctor_set(v_reuseFailAlloc_5837_, 31, v_zabbrev_5824_);
lean_ctor_set(v_reuseFailAlloc_5837_, 32, v_v_5825_);
lean_ctor_set(v_reuseFailAlloc_5837_, 33, v_O_5826_);
lean_ctor_set(v_reuseFailAlloc_5837_, 34, v_X_5827_);
lean_ctor_set(v_reuseFailAlloc_5837_, 35, v_x_5828_);
lean_ctor_set(v_reuseFailAlloc_5837_, 36, v_Z_5829_);
v___x_5836_ = v_reuseFailAlloc_5837_;
goto v_reusejp_5835_;
}
v_reusejp_5835_:
{
return v___x_5836_;
}
}
}
}
}
case 26:
{
lean_object* v___x_5844_; uint8_t v_isShared_5845_; uint8_t v_isSharedCheck_5893_; 
v_isSharedCheck_5893_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_5893_ == 0)
{
lean_object* v_unused_5894_; 
v_unused_5894_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_5894_);
v___x_5844_ = v_modifier_4524_;
v_isShared_5845_ = v_isSharedCheck_5893_;
goto v_resetjp_5843_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_5844_ = lean_box(0);
v_isShared_5845_ = v_isSharedCheck_5893_;
goto v_resetjp_5843_;
}
v_resetjp_5843_:
{
lean_object* v_G_5846_; lean_object* v_y_5847_; lean_object* v_u_5848_; lean_object* v_Y_5849_; lean_object* v_D_5850_; lean_object* v_M_5851_; lean_object* v_L_5852_; lean_object* v_d_5853_; lean_object* v_Q_5854_; lean_object* v_q_5855_; lean_object* v_w_5856_; lean_object* v_W_5857_; lean_object* v_E_5858_; lean_object* v_e_5859_; lean_object* v_c_5860_; lean_object* v_F_5861_; lean_object* v_a_5862_; lean_object* v_b_5863_; lean_object* v_B_5864_; lean_object* v_h_5865_; lean_object* v_K_5866_; lean_object* v_k_5867_; lean_object* v_H_5868_; lean_object* v_m_5869_; lean_object* v_s_5870_; lean_object* v_S_5871_; lean_object* v_n_5872_; lean_object* v_N_5873_; lean_object* v_V_5874_; lean_object* v_z_5875_; lean_object* v_zabbrev_5876_; lean_object* v_v_5877_; lean_object* v_O_5878_; lean_object* v_X_5879_; lean_object* v_x_5880_; lean_object* v_Z_5881_; lean_object* v___x_5883_; uint8_t v_isShared_5884_; uint8_t v_isSharedCheck_5891_; 
v_G_5846_ = lean_ctor_get(v_date_4523_, 0);
v_y_5847_ = lean_ctor_get(v_date_4523_, 1);
v_u_5848_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5849_ = lean_ctor_get(v_date_4523_, 3);
v_D_5850_ = lean_ctor_get(v_date_4523_, 4);
v_M_5851_ = lean_ctor_get(v_date_4523_, 5);
v_L_5852_ = lean_ctor_get(v_date_4523_, 6);
v_d_5853_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5854_ = lean_ctor_get(v_date_4523_, 8);
v_q_5855_ = lean_ctor_get(v_date_4523_, 9);
v_w_5856_ = lean_ctor_get(v_date_4523_, 10);
v_W_5857_ = lean_ctor_get(v_date_4523_, 11);
v_E_5858_ = lean_ctor_get(v_date_4523_, 12);
v_e_5859_ = lean_ctor_get(v_date_4523_, 13);
v_c_5860_ = lean_ctor_get(v_date_4523_, 14);
v_F_5861_ = lean_ctor_get(v_date_4523_, 15);
v_a_5862_ = lean_ctor_get(v_date_4523_, 16);
v_b_5863_ = lean_ctor_get(v_date_4523_, 17);
v_B_5864_ = lean_ctor_get(v_date_4523_, 18);
v_h_5865_ = lean_ctor_get(v_date_4523_, 19);
v_K_5866_ = lean_ctor_get(v_date_4523_, 20);
v_k_5867_ = lean_ctor_get(v_date_4523_, 21);
v_H_5868_ = lean_ctor_get(v_date_4523_, 22);
v_m_5869_ = lean_ctor_get(v_date_4523_, 23);
v_s_5870_ = lean_ctor_get(v_date_4523_, 24);
v_S_5871_ = lean_ctor_get(v_date_4523_, 25);
v_n_5872_ = lean_ctor_get(v_date_4523_, 27);
v_N_5873_ = lean_ctor_get(v_date_4523_, 28);
v_V_5874_ = lean_ctor_get(v_date_4523_, 29);
v_z_5875_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5876_ = lean_ctor_get(v_date_4523_, 31);
v_v_5877_ = lean_ctor_get(v_date_4523_, 32);
v_O_5878_ = lean_ctor_get(v_date_4523_, 33);
v_X_5879_ = lean_ctor_get(v_date_4523_, 34);
v_x_5880_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5881_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5891_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5891_ == 0)
{
lean_object* v_unused_5892_; 
v_unused_5892_ = lean_ctor_get(v_date_4523_, 26);
lean_dec(v_unused_5892_);
v___x_5883_ = v_date_4523_;
v_isShared_5884_ = v_isSharedCheck_5891_;
goto v_resetjp_5882_;
}
else
{
lean_inc(v_Z_5881_);
lean_inc(v_x_5880_);
lean_inc(v_X_5879_);
lean_inc(v_O_5878_);
lean_inc(v_v_5877_);
lean_inc(v_zabbrev_5876_);
lean_inc(v_z_5875_);
lean_inc(v_V_5874_);
lean_inc(v_N_5873_);
lean_inc(v_n_5872_);
lean_inc(v_S_5871_);
lean_inc(v_s_5870_);
lean_inc(v_m_5869_);
lean_inc(v_H_5868_);
lean_inc(v_k_5867_);
lean_inc(v_K_5866_);
lean_inc(v_h_5865_);
lean_inc(v_B_5864_);
lean_inc(v_b_5863_);
lean_inc(v_a_5862_);
lean_inc(v_F_5861_);
lean_inc(v_c_5860_);
lean_inc(v_e_5859_);
lean_inc(v_E_5858_);
lean_inc(v_W_5857_);
lean_inc(v_w_5856_);
lean_inc(v_q_5855_);
lean_inc(v_Q_5854_);
lean_inc(v_d_5853_);
lean_inc(v_L_5852_);
lean_inc(v_M_5851_);
lean_inc(v_D_5850_);
lean_inc(v_Y_5849_);
lean_inc(v_u_5848_);
lean_inc(v_y_5847_);
lean_inc(v_G_5846_);
lean_dec(v_date_4523_);
v___x_5883_ = lean_box(0);
v_isShared_5884_ = v_isSharedCheck_5891_;
goto v_resetjp_5882_;
}
v_resetjp_5882_:
{
lean_object* v___x_5886_; 
if (v_isShared_5845_ == 0)
{
lean_ctor_set_tag(v___x_5844_, 1);
lean_ctor_set(v___x_5844_, 0, v_data_4525_);
v___x_5886_ = v___x_5844_;
goto v_reusejp_5885_;
}
else
{
lean_object* v_reuseFailAlloc_5890_; 
v_reuseFailAlloc_5890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5890_, 0, v_data_4525_);
v___x_5886_ = v_reuseFailAlloc_5890_;
goto v_reusejp_5885_;
}
v_reusejp_5885_:
{
lean_object* v___x_5888_; 
if (v_isShared_5884_ == 0)
{
lean_ctor_set(v___x_5883_, 26, v___x_5886_);
v___x_5888_ = v___x_5883_;
goto v_reusejp_5887_;
}
else
{
lean_object* v_reuseFailAlloc_5889_; 
v_reuseFailAlloc_5889_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5889_, 0, v_G_5846_);
lean_ctor_set(v_reuseFailAlloc_5889_, 1, v_y_5847_);
lean_ctor_set(v_reuseFailAlloc_5889_, 2, v_u_5848_);
lean_ctor_set(v_reuseFailAlloc_5889_, 3, v_Y_5849_);
lean_ctor_set(v_reuseFailAlloc_5889_, 4, v_D_5850_);
lean_ctor_set(v_reuseFailAlloc_5889_, 5, v_M_5851_);
lean_ctor_set(v_reuseFailAlloc_5889_, 6, v_L_5852_);
lean_ctor_set(v_reuseFailAlloc_5889_, 7, v_d_5853_);
lean_ctor_set(v_reuseFailAlloc_5889_, 8, v_Q_5854_);
lean_ctor_set(v_reuseFailAlloc_5889_, 9, v_q_5855_);
lean_ctor_set(v_reuseFailAlloc_5889_, 10, v_w_5856_);
lean_ctor_set(v_reuseFailAlloc_5889_, 11, v_W_5857_);
lean_ctor_set(v_reuseFailAlloc_5889_, 12, v_E_5858_);
lean_ctor_set(v_reuseFailAlloc_5889_, 13, v_e_5859_);
lean_ctor_set(v_reuseFailAlloc_5889_, 14, v_c_5860_);
lean_ctor_set(v_reuseFailAlloc_5889_, 15, v_F_5861_);
lean_ctor_set(v_reuseFailAlloc_5889_, 16, v_a_5862_);
lean_ctor_set(v_reuseFailAlloc_5889_, 17, v_b_5863_);
lean_ctor_set(v_reuseFailAlloc_5889_, 18, v_B_5864_);
lean_ctor_set(v_reuseFailAlloc_5889_, 19, v_h_5865_);
lean_ctor_set(v_reuseFailAlloc_5889_, 20, v_K_5866_);
lean_ctor_set(v_reuseFailAlloc_5889_, 21, v_k_5867_);
lean_ctor_set(v_reuseFailAlloc_5889_, 22, v_H_5868_);
lean_ctor_set(v_reuseFailAlloc_5889_, 23, v_m_5869_);
lean_ctor_set(v_reuseFailAlloc_5889_, 24, v_s_5870_);
lean_ctor_set(v_reuseFailAlloc_5889_, 25, v_S_5871_);
lean_ctor_set(v_reuseFailAlloc_5889_, 26, v___x_5886_);
lean_ctor_set(v_reuseFailAlloc_5889_, 27, v_n_5872_);
lean_ctor_set(v_reuseFailAlloc_5889_, 28, v_N_5873_);
lean_ctor_set(v_reuseFailAlloc_5889_, 29, v_V_5874_);
lean_ctor_set(v_reuseFailAlloc_5889_, 30, v_z_5875_);
lean_ctor_set(v_reuseFailAlloc_5889_, 31, v_zabbrev_5876_);
lean_ctor_set(v_reuseFailAlloc_5889_, 32, v_v_5877_);
lean_ctor_set(v_reuseFailAlloc_5889_, 33, v_O_5878_);
lean_ctor_set(v_reuseFailAlloc_5889_, 34, v_X_5879_);
lean_ctor_set(v_reuseFailAlloc_5889_, 35, v_x_5880_);
lean_ctor_set(v_reuseFailAlloc_5889_, 36, v_Z_5881_);
v___x_5888_ = v_reuseFailAlloc_5889_;
goto v_reusejp_5887_;
}
v_reusejp_5887_:
{
return v___x_5888_;
}
}
}
}
}
case 27:
{
lean_object* v___x_5896_; uint8_t v_isShared_5897_; uint8_t v_isSharedCheck_5945_; 
v_isSharedCheck_5945_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_5945_ == 0)
{
lean_object* v_unused_5946_; 
v_unused_5946_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_5946_);
v___x_5896_ = v_modifier_4524_;
v_isShared_5897_ = v_isSharedCheck_5945_;
goto v_resetjp_5895_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_5896_ = lean_box(0);
v_isShared_5897_ = v_isSharedCheck_5945_;
goto v_resetjp_5895_;
}
v_resetjp_5895_:
{
lean_object* v_G_5898_; lean_object* v_y_5899_; lean_object* v_u_5900_; lean_object* v_Y_5901_; lean_object* v_D_5902_; lean_object* v_M_5903_; lean_object* v_L_5904_; lean_object* v_d_5905_; lean_object* v_Q_5906_; lean_object* v_q_5907_; lean_object* v_w_5908_; lean_object* v_W_5909_; lean_object* v_E_5910_; lean_object* v_e_5911_; lean_object* v_c_5912_; lean_object* v_F_5913_; lean_object* v_a_5914_; lean_object* v_b_5915_; lean_object* v_B_5916_; lean_object* v_h_5917_; lean_object* v_K_5918_; lean_object* v_k_5919_; lean_object* v_H_5920_; lean_object* v_m_5921_; lean_object* v_s_5922_; lean_object* v_S_5923_; lean_object* v_A_5924_; lean_object* v_N_5925_; lean_object* v_V_5926_; lean_object* v_z_5927_; lean_object* v_zabbrev_5928_; lean_object* v_v_5929_; lean_object* v_O_5930_; lean_object* v_X_5931_; lean_object* v_x_5932_; lean_object* v_Z_5933_; lean_object* v___x_5935_; uint8_t v_isShared_5936_; uint8_t v_isSharedCheck_5943_; 
v_G_5898_ = lean_ctor_get(v_date_4523_, 0);
v_y_5899_ = lean_ctor_get(v_date_4523_, 1);
v_u_5900_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5901_ = lean_ctor_get(v_date_4523_, 3);
v_D_5902_ = lean_ctor_get(v_date_4523_, 4);
v_M_5903_ = lean_ctor_get(v_date_4523_, 5);
v_L_5904_ = lean_ctor_get(v_date_4523_, 6);
v_d_5905_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5906_ = lean_ctor_get(v_date_4523_, 8);
v_q_5907_ = lean_ctor_get(v_date_4523_, 9);
v_w_5908_ = lean_ctor_get(v_date_4523_, 10);
v_W_5909_ = lean_ctor_get(v_date_4523_, 11);
v_E_5910_ = lean_ctor_get(v_date_4523_, 12);
v_e_5911_ = lean_ctor_get(v_date_4523_, 13);
v_c_5912_ = lean_ctor_get(v_date_4523_, 14);
v_F_5913_ = lean_ctor_get(v_date_4523_, 15);
v_a_5914_ = lean_ctor_get(v_date_4523_, 16);
v_b_5915_ = lean_ctor_get(v_date_4523_, 17);
v_B_5916_ = lean_ctor_get(v_date_4523_, 18);
v_h_5917_ = lean_ctor_get(v_date_4523_, 19);
v_K_5918_ = lean_ctor_get(v_date_4523_, 20);
v_k_5919_ = lean_ctor_get(v_date_4523_, 21);
v_H_5920_ = lean_ctor_get(v_date_4523_, 22);
v_m_5921_ = lean_ctor_get(v_date_4523_, 23);
v_s_5922_ = lean_ctor_get(v_date_4523_, 24);
v_S_5923_ = lean_ctor_get(v_date_4523_, 25);
v_A_5924_ = lean_ctor_get(v_date_4523_, 26);
v_N_5925_ = lean_ctor_get(v_date_4523_, 28);
v_V_5926_ = lean_ctor_get(v_date_4523_, 29);
v_z_5927_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5928_ = lean_ctor_get(v_date_4523_, 31);
v_v_5929_ = lean_ctor_get(v_date_4523_, 32);
v_O_5930_ = lean_ctor_get(v_date_4523_, 33);
v_X_5931_ = lean_ctor_get(v_date_4523_, 34);
v_x_5932_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5933_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5943_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5943_ == 0)
{
lean_object* v_unused_5944_; 
v_unused_5944_ = lean_ctor_get(v_date_4523_, 27);
lean_dec(v_unused_5944_);
v___x_5935_ = v_date_4523_;
v_isShared_5936_ = v_isSharedCheck_5943_;
goto v_resetjp_5934_;
}
else
{
lean_inc(v_Z_5933_);
lean_inc(v_x_5932_);
lean_inc(v_X_5931_);
lean_inc(v_O_5930_);
lean_inc(v_v_5929_);
lean_inc(v_zabbrev_5928_);
lean_inc(v_z_5927_);
lean_inc(v_V_5926_);
lean_inc(v_N_5925_);
lean_inc(v_A_5924_);
lean_inc(v_S_5923_);
lean_inc(v_s_5922_);
lean_inc(v_m_5921_);
lean_inc(v_H_5920_);
lean_inc(v_k_5919_);
lean_inc(v_K_5918_);
lean_inc(v_h_5917_);
lean_inc(v_B_5916_);
lean_inc(v_b_5915_);
lean_inc(v_a_5914_);
lean_inc(v_F_5913_);
lean_inc(v_c_5912_);
lean_inc(v_e_5911_);
lean_inc(v_E_5910_);
lean_inc(v_W_5909_);
lean_inc(v_w_5908_);
lean_inc(v_q_5907_);
lean_inc(v_Q_5906_);
lean_inc(v_d_5905_);
lean_inc(v_L_5904_);
lean_inc(v_M_5903_);
lean_inc(v_D_5902_);
lean_inc(v_Y_5901_);
lean_inc(v_u_5900_);
lean_inc(v_y_5899_);
lean_inc(v_G_5898_);
lean_dec(v_date_4523_);
v___x_5935_ = lean_box(0);
v_isShared_5936_ = v_isSharedCheck_5943_;
goto v_resetjp_5934_;
}
v_resetjp_5934_:
{
lean_object* v___x_5938_; 
if (v_isShared_5897_ == 0)
{
lean_ctor_set_tag(v___x_5896_, 1);
lean_ctor_set(v___x_5896_, 0, v_data_4525_);
v___x_5938_ = v___x_5896_;
goto v_reusejp_5937_;
}
else
{
lean_object* v_reuseFailAlloc_5942_; 
v_reuseFailAlloc_5942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5942_, 0, v_data_4525_);
v___x_5938_ = v_reuseFailAlloc_5942_;
goto v_reusejp_5937_;
}
v_reusejp_5937_:
{
lean_object* v___x_5940_; 
if (v_isShared_5936_ == 0)
{
lean_ctor_set(v___x_5935_, 27, v___x_5938_);
v___x_5940_ = v___x_5935_;
goto v_reusejp_5939_;
}
else
{
lean_object* v_reuseFailAlloc_5941_; 
v_reuseFailAlloc_5941_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5941_, 0, v_G_5898_);
lean_ctor_set(v_reuseFailAlloc_5941_, 1, v_y_5899_);
lean_ctor_set(v_reuseFailAlloc_5941_, 2, v_u_5900_);
lean_ctor_set(v_reuseFailAlloc_5941_, 3, v_Y_5901_);
lean_ctor_set(v_reuseFailAlloc_5941_, 4, v_D_5902_);
lean_ctor_set(v_reuseFailAlloc_5941_, 5, v_M_5903_);
lean_ctor_set(v_reuseFailAlloc_5941_, 6, v_L_5904_);
lean_ctor_set(v_reuseFailAlloc_5941_, 7, v_d_5905_);
lean_ctor_set(v_reuseFailAlloc_5941_, 8, v_Q_5906_);
lean_ctor_set(v_reuseFailAlloc_5941_, 9, v_q_5907_);
lean_ctor_set(v_reuseFailAlloc_5941_, 10, v_w_5908_);
lean_ctor_set(v_reuseFailAlloc_5941_, 11, v_W_5909_);
lean_ctor_set(v_reuseFailAlloc_5941_, 12, v_E_5910_);
lean_ctor_set(v_reuseFailAlloc_5941_, 13, v_e_5911_);
lean_ctor_set(v_reuseFailAlloc_5941_, 14, v_c_5912_);
lean_ctor_set(v_reuseFailAlloc_5941_, 15, v_F_5913_);
lean_ctor_set(v_reuseFailAlloc_5941_, 16, v_a_5914_);
lean_ctor_set(v_reuseFailAlloc_5941_, 17, v_b_5915_);
lean_ctor_set(v_reuseFailAlloc_5941_, 18, v_B_5916_);
lean_ctor_set(v_reuseFailAlloc_5941_, 19, v_h_5917_);
lean_ctor_set(v_reuseFailAlloc_5941_, 20, v_K_5918_);
lean_ctor_set(v_reuseFailAlloc_5941_, 21, v_k_5919_);
lean_ctor_set(v_reuseFailAlloc_5941_, 22, v_H_5920_);
lean_ctor_set(v_reuseFailAlloc_5941_, 23, v_m_5921_);
lean_ctor_set(v_reuseFailAlloc_5941_, 24, v_s_5922_);
lean_ctor_set(v_reuseFailAlloc_5941_, 25, v_S_5923_);
lean_ctor_set(v_reuseFailAlloc_5941_, 26, v_A_5924_);
lean_ctor_set(v_reuseFailAlloc_5941_, 27, v___x_5938_);
lean_ctor_set(v_reuseFailAlloc_5941_, 28, v_N_5925_);
lean_ctor_set(v_reuseFailAlloc_5941_, 29, v_V_5926_);
lean_ctor_set(v_reuseFailAlloc_5941_, 30, v_z_5927_);
lean_ctor_set(v_reuseFailAlloc_5941_, 31, v_zabbrev_5928_);
lean_ctor_set(v_reuseFailAlloc_5941_, 32, v_v_5929_);
lean_ctor_set(v_reuseFailAlloc_5941_, 33, v_O_5930_);
lean_ctor_set(v_reuseFailAlloc_5941_, 34, v_X_5931_);
lean_ctor_set(v_reuseFailAlloc_5941_, 35, v_x_5932_);
lean_ctor_set(v_reuseFailAlloc_5941_, 36, v_Z_5933_);
v___x_5940_ = v_reuseFailAlloc_5941_;
goto v_reusejp_5939_;
}
v_reusejp_5939_:
{
return v___x_5940_;
}
}
}
}
}
case 28:
{
lean_object* v___x_5948_; uint8_t v_isShared_5949_; uint8_t v_isSharedCheck_5997_; 
v_isSharedCheck_5997_ = !lean_is_exclusive(v_modifier_4524_);
if (v_isSharedCheck_5997_ == 0)
{
lean_object* v_unused_5998_; 
v_unused_5998_ = lean_ctor_get(v_modifier_4524_, 0);
lean_dec(v_unused_5998_);
v___x_5948_ = v_modifier_4524_;
v_isShared_5949_ = v_isSharedCheck_5997_;
goto v_resetjp_5947_;
}
else
{
lean_dec(v_modifier_4524_);
v___x_5948_ = lean_box(0);
v_isShared_5949_ = v_isSharedCheck_5997_;
goto v_resetjp_5947_;
}
v_resetjp_5947_:
{
lean_object* v_G_5950_; lean_object* v_y_5951_; lean_object* v_u_5952_; lean_object* v_Y_5953_; lean_object* v_D_5954_; lean_object* v_M_5955_; lean_object* v_L_5956_; lean_object* v_d_5957_; lean_object* v_Q_5958_; lean_object* v_q_5959_; lean_object* v_w_5960_; lean_object* v_W_5961_; lean_object* v_E_5962_; lean_object* v_e_5963_; lean_object* v_c_5964_; lean_object* v_F_5965_; lean_object* v_a_5966_; lean_object* v_b_5967_; lean_object* v_B_5968_; lean_object* v_h_5969_; lean_object* v_K_5970_; lean_object* v_k_5971_; lean_object* v_H_5972_; lean_object* v_m_5973_; lean_object* v_s_5974_; lean_object* v_S_5975_; lean_object* v_A_5976_; lean_object* v_n_5977_; lean_object* v_V_5978_; lean_object* v_z_5979_; lean_object* v_zabbrev_5980_; lean_object* v_v_5981_; lean_object* v_O_5982_; lean_object* v_X_5983_; lean_object* v_x_5984_; lean_object* v_Z_5985_; lean_object* v___x_5987_; uint8_t v_isShared_5988_; uint8_t v_isSharedCheck_5995_; 
v_G_5950_ = lean_ctor_get(v_date_4523_, 0);
v_y_5951_ = lean_ctor_get(v_date_4523_, 1);
v_u_5952_ = lean_ctor_get(v_date_4523_, 2);
v_Y_5953_ = lean_ctor_get(v_date_4523_, 3);
v_D_5954_ = lean_ctor_get(v_date_4523_, 4);
v_M_5955_ = lean_ctor_get(v_date_4523_, 5);
v_L_5956_ = lean_ctor_get(v_date_4523_, 6);
v_d_5957_ = lean_ctor_get(v_date_4523_, 7);
v_Q_5958_ = lean_ctor_get(v_date_4523_, 8);
v_q_5959_ = lean_ctor_get(v_date_4523_, 9);
v_w_5960_ = lean_ctor_get(v_date_4523_, 10);
v_W_5961_ = lean_ctor_get(v_date_4523_, 11);
v_E_5962_ = lean_ctor_get(v_date_4523_, 12);
v_e_5963_ = lean_ctor_get(v_date_4523_, 13);
v_c_5964_ = lean_ctor_get(v_date_4523_, 14);
v_F_5965_ = lean_ctor_get(v_date_4523_, 15);
v_a_5966_ = lean_ctor_get(v_date_4523_, 16);
v_b_5967_ = lean_ctor_get(v_date_4523_, 17);
v_B_5968_ = lean_ctor_get(v_date_4523_, 18);
v_h_5969_ = lean_ctor_get(v_date_4523_, 19);
v_K_5970_ = lean_ctor_get(v_date_4523_, 20);
v_k_5971_ = lean_ctor_get(v_date_4523_, 21);
v_H_5972_ = lean_ctor_get(v_date_4523_, 22);
v_m_5973_ = lean_ctor_get(v_date_4523_, 23);
v_s_5974_ = lean_ctor_get(v_date_4523_, 24);
v_S_5975_ = lean_ctor_get(v_date_4523_, 25);
v_A_5976_ = lean_ctor_get(v_date_4523_, 26);
v_n_5977_ = lean_ctor_get(v_date_4523_, 27);
v_V_5978_ = lean_ctor_get(v_date_4523_, 29);
v_z_5979_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_5980_ = lean_ctor_get(v_date_4523_, 31);
v_v_5981_ = lean_ctor_get(v_date_4523_, 32);
v_O_5982_ = lean_ctor_get(v_date_4523_, 33);
v_X_5983_ = lean_ctor_get(v_date_4523_, 34);
v_x_5984_ = lean_ctor_get(v_date_4523_, 35);
v_Z_5985_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_5995_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_5995_ == 0)
{
lean_object* v_unused_5996_; 
v_unused_5996_ = lean_ctor_get(v_date_4523_, 28);
lean_dec(v_unused_5996_);
v___x_5987_ = v_date_4523_;
v_isShared_5988_ = v_isSharedCheck_5995_;
goto v_resetjp_5986_;
}
else
{
lean_inc(v_Z_5985_);
lean_inc(v_x_5984_);
lean_inc(v_X_5983_);
lean_inc(v_O_5982_);
lean_inc(v_v_5981_);
lean_inc(v_zabbrev_5980_);
lean_inc(v_z_5979_);
lean_inc(v_V_5978_);
lean_inc(v_n_5977_);
lean_inc(v_A_5976_);
lean_inc(v_S_5975_);
lean_inc(v_s_5974_);
lean_inc(v_m_5973_);
lean_inc(v_H_5972_);
lean_inc(v_k_5971_);
lean_inc(v_K_5970_);
lean_inc(v_h_5969_);
lean_inc(v_B_5968_);
lean_inc(v_b_5967_);
lean_inc(v_a_5966_);
lean_inc(v_F_5965_);
lean_inc(v_c_5964_);
lean_inc(v_e_5963_);
lean_inc(v_E_5962_);
lean_inc(v_W_5961_);
lean_inc(v_w_5960_);
lean_inc(v_q_5959_);
lean_inc(v_Q_5958_);
lean_inc(v_d_5957_);
lean_inc(v_L_5956_);
lean_inc(v_M_5955_);
lean_inc(v_D_5954_);
lean_inc(v_Y_5953_);
lean_inc(v_u_5952_);
lean_inc(v_y_5951_);
lean_inc(v_G_5950_);
lean_dec(v_date_4523_);
v___x_5987_ = lean_box(0);
v_isShared_5988_ = v_isSharedCheck_5995_;
goto v_resetjp_5986_;
}
v_resetjp_5986_:
{
lean_object* v___x_5990_; 
if (v_isShared_5949_ == 0)
{
lean_ctor_set_tag(v___x_5948_, 1);
lean_ctor_set(v___x_5948_, 0, v_data_4525_);
v___x_5990_ = v___x_5948_;
goto v_reusejp_5989_;
}
else
{
lean_object* v_reuseFailAlloc_5994_; 
v_reuseFailAlloc_5994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5994_, 0, v_data_4525_);
v___x_5990_ = v_reuseFailAlloc_5994_;
goto v_reusejp_5989_;
}
v_reusejp_5989_:
{
lean_object* v___x_5992_; 
if (v_isShared_5988_ == 0)
{
lean_ctor_set(v___x_5987_, 28, v___x_5990_);
v___x_5992_ = v___x_5987_;
goto v_reusejp_5991_;
}
else
{
lean_object* v_reuseFailAlloc_5993_; 
v_reuseFailAlloc_5993_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5993_, 0, v_G_5950_);
lean_ctor_set(v_reuseFailAlloc_5993_, 1, v_y_5951_);
lean_ctor_set(v_reuseFailAlloc_5993_, 2, v_u_5952_);
lean_ctor_set(v_reuseFailAlloc_5993_, 3, v_Y_5953_);
lean_ctor_set(v_reuseFailAlloc_5993_, 4, v_D_5954_);
lean_ctor_set(v_reuseFailAlloc_5993_, 5, v_M_5955_);
lean_ctor_set(v_reuseFailAlloc_5993_, 6, v_L_5956_);
lean_ctor_set(v_reuseFailAlloc_5993_, 7, v_d_5957_);
lean_ctor_set(v_reuseFailAlloc_5993_, 8, v_Q_5958_);
lean_ctor_set(v_reuseFailAlloc_5993_, 9, v_q_5959_);
lean_ctor_set(v_reuseFailAlloc_5993_, 10, v_w_5960_);
lean_ctor_set(v_reuseFailAlloc_5993_, 11, v_W_5961_);
lean_ctor_set(v_reuseFailAlloc_5993_, 12, v_E_5962_);
lean_ctor_set(v_reuseFailAlloc_5993_, 13, v_e_5963_);
lean_ctor_set(v_reuseFailAlloc_5993_, 14, v_c_5964_);
lean_ctor_set(v_reuseFailAlloc_5993_, 15, v_F_5965_);
lean_ctor_set(v_reuseFailAlloc_5993_, 16, v_a_5966_);
lean_ctor_set(v_reuseFailAlloc_5993_, 17, v_b_5967_);
lean_ctor_set(v_reuseFailAlloc_5993_, 18, v_B_5968_);
lean_ctor_set(v_reuseFailAlloc_5993_, 19, v_h_5969_);
lean_ctor_set(v_reuseFailAlloc_5993_, 20, v_K_5970_);
lean_ctor_set(v_reuseFailAlloc_5993_, 21, v_k_5971_);
lean_ctor_set(v_reuseFailAlloc_5993_, 22, v_H_5972_);
lean_ctor_set(v_reuseFailAlloc_5993_, 23, v_m_5973_);
lean_ctor_set(v_reuseFailAlloc_5993_, 24, v_s_5974_);
lean_ctor_set(v_reuseFailAlloc_5993_, 25, v_S_5975_);
lean_ctor_set(v_reuseFailAlloc_5993_, 26, v_A_5976_);
lean_ctor_set(v_reuseFailAlloc_5993_, 27, v_n_5977_);
lean_ctor_set(v_reuseFailAlloc_5993_, 28, v___x_5990_);
lean_ctor_set(v_reuseFailAlloc_5993_, 29, v_V_5978_);
lean_ctor_set(v_reuseFailAlloc_5993_, 30, v_z_5979_);
lean_ctor_set(v_reuseFailAlloc_5993_, 31, v_zabbrev_5980_);
lean_ctor_set(v_reuseFailAlloc_5993_, 32, v_v_5981_);
lean_ctor_set(v_reuseFailAlloc_5993_, 33, v_O_5982_);
lean_ctor_set(v_reuseFailAlloc_5993_, 34, v_X_5983_);
lean_ctor_set(v_reuseFailAlloc_5993_, 35, v_x_5984_);
lean_ctor_set(v_reuseFailAlloc_5993_, 36, v_Z_5985_);
v___x_5992_ = v_reuseFailAlloc_5993_;
goto v_reusejp_5991_;
}
v_reusejp_5991_:
{
return v___x_5992_;
}
}
}
}
}
case 29:
{
lean_object* v_G_5999_; lean_object* v_y_6000_; lean_object* v_u_6001_; lean_object* v_Y_6002_; lean_object* v_D_6003_; lean_object* v_M_6004_; lean_object* v_L_6005_; lean_object* v_d_6006_; lean_object* v_Q_6007_; lean_object* v_q_6008_; lean_object* v_w_6009_; lean_object* v_W_6010_; lean_object* v_E_6011_; lean_object* v_e_6012_; lean_object* v_c_6013_; lean_object* v_F_6014_; lean_object* v_a_6015_; lean_object* v_b_6016_; lean_object* v_B_6017_; lean_object* v_h_6018_; lean_object* v_K_6019_; lean_object* v_k_6020_; lean_object* v_H_6021_; lean_object* v_m_6022_; lean_object* v_s_6023_; lean_object* v_S_6024_; lean_object* v_A_6025_; lean_object* v_n_6026_; lean_object* v_N_6027_; lean_object* v_z_6028_; lean_object* v_zabbrev_6029_; lean_object* v_v_6030_; lean_object* v_O_6031_; lean_object* v_X_6032_; lean_object* v_x_6033_; lean_object* v_Z_6034_; lean_object* v___x_6036_; uint8_t v_isShared_6037_; uint8_t v_isSharedCheck_6042_; 
lean_dec_ref_known(v_modifier_4524_, 0);
v_G_5999_ = lean_ctor_get(v_date_4523_, 0);
v_y_6000_ = lean_ctor_get(v_date_4523_, 1);
v_u_6001_ = lean_ctor_get(v_date_4523_, 2);
v_Y_6002_ = lean_ctor_get(v_date_4523_, 3);
v_D_6003_ = lean_ctor_get(v_date_4523_, 4);
v_M_6004_ = lean_ctor_get(v_date_4523_, 5);
v_L_6005_ = lean_ctor_get(v_date_4523_, 6);
v_d_6006_ = lean_ctor_get(v_date_4523_, 7);
v_Q_6007_ = lean_ctor_get(v_date_4523_, 8);
v_q_6008_ = lean_ctor_get(v_date_4523_, 9);
v_w_6009_ = lean_ctor_get(v_date_4523_, 10);
v_W_6010_ = lean_ctor_get(v_date_4523_, 11);
v_E_6011_ = lean_ctor_get(v_date_4523_, 12);
v_e_6012_ = lean_ctor_get(v_date_4523_, 13);
v_c_6013_ = lean_ctor_get(v_date_4523_, 14);
v_F_6014_ = lean_ctor_get(v_date_4523_, 15);
v_a_6015_ = lean_ctor_get(v_date_4523_, 16);
v_b_6016_ = lean_ctor_get(v_date_4523_, 17);
v_B_6017_ = lean_ctor_get(v_date_4523_, 18);
v_h_6018_ = lean_ctor_get(v_date_4523_, 19);
v_K_6019_ = lean_ctor_get(v_date_4523_, 20);
v_k_6020_ = lean_ctor_get(v_date_4523_, 21);
v_H_6021_ = lean_ctor_get(v_date_4523_, 22);
v_m_6022_ = lean_ctor_get(v_date_4523_, 23);
v_s_6023_ = lean_ctor_get(v_date_4523_, 24);
v_S_6024_ = lean_ctor_get(v_date_4523_, 25);
v_A_6025_ = lean_ctor_get(v_date_4523_, 26);
v_n_6026_ = lean_ctor_get(v_date_4523_, 27);
v_N_6027_ = lean_ctor_get(v_date_4523_, 28);
v_z_6028_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_6029_ = lean_ctor_get(v_date_4523_, 31);
v_v_6030_ = lean_ctor_get(v_date_4523_, 32);
v_O_6031_ = lean_ctor_get(v_date_4523_, 33);
v_X_6032_ = lean_ctor_get(v_date_4523_, 34);
v_x_6033_ = lean_ctor_get(v_date_4523_, 35);
v_Z_6034_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_6042_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_6042_ == 0)
{
lean_object* v_unused_6043_; 
v_unused_6043_ = lean_ctor_get(v_date_4523_, 29);
lean_dec(v_unused_6043_);
v___x_6036_ = v_date_4523_;
v_isShared_6037_ = v_isSharedCheck_6042_;
goto v_resetjp_6035_;
}
else
{
lean_inc(v_Z_6034_);
lean_inc(v_x_6033_);
lean_inc(v_X_6032_);
lean_inc(v_O_6031_);
lean_inc(v_v_6030_);
lean_inc(v_zabbrev_6029_);
lean_inc(v_z_6028_);
lean_inc(v_N_6027_);
lean_inc(v_n_6026_);
lean_inc(v_A_6025_);
lean_inc(v_S_6024_);
lean_inc(v_s_6023_);
lean_inc(v_m_6022_);
lean_inc(v_H_6021_);
lean_inc(v_k_6020_);
lean_inc(v_K_6019_);
lean_inc(v_h_6018_);
lean_inc(v_B_6017_);
lean_inc(v_b_6016_);
lean_inc(v_a_6015_);
lean_inc(v_F_6014_);
lean_inc(v_c_6013_);
lean_inc(v_e_6012_);
lean_inc(v_E_6011_);
lean_inc(v_W_6010_);
lean_inc(v_w_6009_);
lean_inc(v_q_6008_);
lean_inc(v_Q_6007_);
lean_inc(v_d_6006_);
lean_inc(v_L_6005_);
lean_inc(v_M_6004_);
lean_inc(v_D_6003_);
lean_inc(v_Y_6002_);
lean_inc(v_u_6001_);
lean_inc(v_y_6000_);
lean_inc(v_G_5999_);
lean_dec(v_date_4523_);
v___x_6036_ = lean_box(0);
v_isShared_6037_ = v_isSharedCheck_6042_;
goto v_resetjp_6035_;
}
v_resetjp_6035_:
{
lean_object* v___x_6038_; lean_object* v___x_6040_; 
v___x_6038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6038_, 0, v_data_4525_);
if (v_isShared_6037_ == 0)
{
lean_ctor_set(v___x_6036_, 29, v___x_6038_);
v___x_6040_ = v___x_6036_;
goto v_reusejp_6039_;
}
else
{
lean_object* v_reuseFailAlloc_6041_; 
v_reuseFailAlloc_6041_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6041_, 0, v_G_5999_);
lean_ctor_set(v_reuseFailAlloc_6041_, 1, v_y_6000_);
lean_ctor_set(v_reuseFailAlloc_6041_, 2, v_u_6001_);
lean_ctor_set(v_reuseFailAlloc_6041_, 3, v_Y_6002_);
lean_ctor_set(v_reuseFailAlloc_6041_, 4, v_D_6003_);
lean_ctor_set(v_reuseFailAlloc_6041_, 5, v_M_6004_);
lean_ctor_set(v_reuseFailAlloc_6041_, 6, v_L_6005_);
lean_ctor_set(v_reuseFailAlloc_6041_, 7, v_d_6006_);
lean_ctor_set(v_reuseFailAlloc_6041_, 8, v_Q_6007_);
lean_ctor_set(v_reuseFailAlloc_6041_, 9, v_q_6008_);
lean_ctor_set(v_reuseFailAlloc_6041_, 10, v_w_6009_);
lean_ctor_set(v_reuseFailAlloc_6041_, 11, v_W_6010_);
lean_ctor_set(v_reuseFailAlloc_6041_, 12, v_E_6011_);
lean_ctor_set(v_reuseFailAlloc_6041_, 13, v_e_6012_);
lean_ctor_set(v_reuseFailAlloc_6041_, 14, v_c_6013_);
lean_ctor_set(v_reuseFailAlloc_6041_, 15, v_F_6014_);
lean_ctor_set(v_reuseFailAlloc_6041_, 16, v_a_6015_);
lean_ctor_set(v_reuseFailAlloc_6041_, 17, v_b_6016_);
lean_ctor_set(v_reuseFailAlloc_6041_, 18, v_B_6017_);
lean_ctor_set(v_reuseFailAlloc_6041_, 19, v_h_6018_);
lean_ctor_set(v_reuseFailAlloc_6041_, 20, v_K_6019_);
lean_ctor_set(v_reuseFailAlloc_6041_, 21, v_k_6020_);
lean_ctor_set(v_reuseFailAlloc_6041_, 22, v_H_6021_);
lean_ctor_set(v_reuseFailAlloc_6041_, 23, v_m_6022_);
lean_ctor_set(v_reuseFailAlloc_6041_, 24, v_s_6023_);
lean_ctor_set(v_reuseFailAlloc_6041_, 25, v_S_6024_);
lean_ctor_set(v_reuseFailAlloc_6041_, 26, v_A_6025_);
lean_ctor_set(v_reuseFailAlloc_6041_, 27, v_n_6026_);
lean_ctor_set(v_reuseFailAlloc_6041_, 28, v_N_6027_);
lean_ctor_set(v_reuseFailAlloc_6041_, 29, v___x_6038_);
lean_ctor_set(v_reuseFailAlloc_6041_, 30, v_z_6028_);
lean_ctor_set(v_reuseFailAlloc_6041_, 31, v_zabbrev_6029_);
lean_ctor_set(v_reuseFailAlloc_6041_, 32, v_v_6030_);
lean_ctor_set(v_reuseFailAlloc_6041_, 33, v_O_6031_);
lean_ctor_set(v_reuseFailAlloc_6041_, 34, v_X_6032_);
lean_ctor_set(v_reuseFailAlloc_6041_, 35, v_x_6033_);
lean_ctor_set(v_reuseFailAlloc_6041_, 36, v_Z_6034_);
v___x_6040_ = v_reuseFailAlloc_6041_;
goto v_reusejp_6039_;
}
v_reusejp_6039_:
{
return v___x_6040_;
}
}
}
case 30:
{
uint8_t v_presentation_6044_; 
v_presentation_6044_ = lean_ctor_get_uint8(v_modifier_4524_, 0);
lean_dec_ref_known(v_modifier_4524_, 0);
if (v_presentation_6044_ == 0)
{
lean_object* v_G_6045_; lean_object* v_y_6046_; lean_object* v_u_6047_; lean_object* v_Y_6048_; lean_object* v_D_6049_; lean_object* v_M_6050_; lean_object* v_L_6051_; lean_object* v_d_6052_; lean_object* v_Q_6053_; lean_object* v_q_6054_; lean_object* v_w_6055_; lean_object* v_W_6056_; lean_object* v_E_6057_; lean_object* v_e_6058_; lean_object* v_c_6059_; lean_object* v_F_6060_; lean_object* v_a_6061_; lean_object* v_b_6062_; lean_object* v_B_6063_; lean_object* v_h_6064_; lean_object* v_K_6065_; lean_object* v_k_6066_; lean_object* v_H_6067_; lean_object* v_m_6068_; lean_object* v_s_6069_; lean_object* v_S_6070_; lean_object* v_A_6071_; lean_object* v_n_6072_; lean_object* v_N_6073_; lean_object* v_V_6074_; lean_object* v_z_6075_; lean_object* v_v_6076_; lean_object* v_O_6077_; lean_object* v_X_6078_; lean_object* v_x_6079_; lean_object* v_Z_6080_; lean_object* v___x_6082_; uint8_t v_isShared_6083_; uint8_t v_isSharedCheck_6088_; 
v_G_6045_ = lean_ctor_get(v_date_4523_, 0);
v_y_6046_ = lean_ctor_get(v_date_4523_, 1);
v_u_6047_ = lean_ctor_get(v_date_4523_, 2);
v_Y_6048_ = lean_ctor_get(v_date_4523_, 3);
v_D_6049_ = lean_ctor_get(v_date_4523_, 4);
v_M_6050_ = lean_ctor_get(v_date_4523_, 5);
v_L_6051_ = lean_ctor_get(v_date_4523_, 6);
v_d_6052_ = lean_ctor_get(v_date_4523_, 7);
v_Q_6053_ = lean_ctor_get(v_date_4523_, 8);
v_q_6054_ = lean_ctor_get(v_date_4523_, 9);
v_w_6055_ = lean_ctor_get(v_date_4523_, 10);
v_W_6056_ = lean_ctor_get(v_date_4523_, 11);
v_E_6057_ = lean_ctor_get(v_date_4523_, 12);
v_e_6058_ = lean_ctor_get(v_date_4523_, 13);
v_c_6059_ = lean_ctor_get(v_date_4523_, 14);
v_F_6060_ = lean_ctor_get(v_date_4523_, 15);
v_a_6061_ = lean_ctor_get(v_date_4523_, 16);
v_b_6062_ = lean_ctor_get(v_date_4523_, 17);
v_B_6063_ = lean_ctor_get(v_date_4523_, 18);
v_h_6064_ = lean_ctor_get(v_date_4523_, 19);
v_K_6065_ = lean_ctor_get(v_date_4523_, 20);
v_k_6066_ = lean_ctor_get(v_date_4523_, 21);
v_H_6067_ = lean_ctor_get(v_date_4523_, 22);
v_m_6068_ = lean_ctor_get(v_date_4523_, 23);
v_s_6069_ = lean_ctor_get(v_date_4523_, 24);
v_S_6070_ = lean_ctor_get(v_date_4523_, 25);
v_A_6071_ = lean_ctor_get(v_date_4523_, 26);
v_n_6072_ = lean_ctor_get(v_date_4523_, 27);
v_N_6073_ = lean_ctor_get(v_date_4523_, 28);
v_V_6074_ = lean_ctor_get(v_date_4523_, 29);
v_z_6075_ = lean_ctor_get(v_date_4523_, 30);
v_v_6076_ = lean_ctor_get(v_date_4523_, 32);
v_O_6077_ = lean_ctor_get(v_date_4523_, 33);
v_X_6078_ = lean_ctor_get(v_date_4523_, 34);
v_x_6079_ = lean_ctor_get(v_date_4523_, 35);
v_Z_6080_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_6088_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_6088_ == 0)
{
lean_object* v_unused_6089_; 
v_unused_6089_ = lean_ctor_get(v_date_4523_, 31);
lean_dec(v_unused_6089_);
v___x_6082_ = v_date_4523_;
v_isShared_6083_ = v_isSharedCheck_6088_;
goto v_resetjp_6081_;
}
else
{
lean_inc(v_Z_6080_);
lean_inc(v_x_6079_);
lean_inc(v_X_6078_);
lean_inc(v_O_6077_);
lean_inc(v_v_6076_);
lean_inc(v_z_6075_);
lean_inc(v_V_6074_);
lean_inc(v_N_6073_);
lean_inc(v_n_6072_);
lean_inc(v_A_6071_);
lean_inc(v_S_6070_);
lean_inc(v_s_6069_);
lean_inc(v_m_6068_);
lean_inc(v_H_6067_);
lean_inc(v_k_6066_);
lean_inc(v_K_6065_);
lean_inc(v_h_6064_);
lean_inc(v_B_6063_);
lean_inc(v_b_6062_);
lean_inc(v_a_6061_);
lean_inc(v_F_6060_);
lean_inc(v_c_6059_);
lean_inc(v_e_6058_);
lean_inc(v_E_6057_);
lean_inc(v_W_6056_);
lean_inc(v_w_6055_);
lean_inc(v_q_6054_);
lean_inc(v_Q_6053_);
lean_inc(v_d_6052_);
lean_inc(v_L_6051_);
lean_inc(v_M_6050_);
lean_inc(v_D_6049_);
lean_inc(v_Y_6048_);
lean_inc(v_u_6047_);
lean_inc(v_y_6046_);
lean_inc(v_G_6045_);
lean_dec(v_date_4523_);
v___x_6082_ = lean_box(0);
v_isShared_6083_ = v_isSharedCheck_6088_;
goto v_resetjp_6081_;
}
v_resetjp_6081_:
{
lean_object* v___x_6084_; lean_object* v___x_6086_; 
v___x_6084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6084_, 0, v_data_4525_);
if (v_isShared_6083_ == 0)
{
lean_ctor_set(v___x_6082_, 31, v___x_6084_);
v___x_6086_ = v___x_6082_;
goto v_reusejp_6085_;
}
else
{
lean_object* v_reuseFailAlloc_6087_; 
v_reuseFailAlloc_6087_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6087_, 0, v_G_6045_);
lean_ctor_set(v_reuseFailAlloc_6087_, 1, v_y_6046_);
lean_ctor_set(v_reuseFailAlloc_6087_, 2, v_u_6047_);
lean_ctor_set(v_reuseFailAlloc_6087_, 3, v_Y_6048_);
lean_ctor_set(v_reuseFailAlloc_6087_, 4, v_D_6049_);
lean_ctor_set(v_reuseFailAlloc_6087_, 5, v_M_6050_);
lean_ctor_set(v_reuseFailAlloc_6087_, 6, v_L_6051_);
lean_ctor_set(v_reuseFailAlloc_6087_, 7, v_d_6052_);
lean_ctor_set(v_reuseFailAlloc_6087_, 8, v_Q_6053_);
lean_ctor_set(v_reuseFailAlloc_6087_, 9, v_q_6054_);
lean_ctor_set(v_reuseFailAlloc_6087_, 10, v_w_6055_);
lean_ctor_set(v_reuseFailAlloc_6087_, 11, v_W_6056_);
lean_ctor_set(v_reuseFailAlloc_6087_, 12, v_E_6057_);
lean_ctor_set(v_reuseFailAlloc_6087_, 13, v_e_6058_);
lean_ctor_set(v_reuseFailAlloc_6087_, 14, v_c_6059_);
lean_ctor_set(v_reuseFailAlloc_6087_, 15, v_F_6060_);
lean_ctor_set(v_reuseFailAlloc_6087_, 16, v_a_6061_);
lean_ctor_set(v_reuseFailAlloc_6087_, 17, v_b_6062_);
lean_ctor_set(v_reuseFailAlloc_6087_, 18, v_B_6063_);
lean_ctor_set(v_reuseFailAlloc_6087_, 19, v_h_6064_);
lean_ctor_set(v_reuseFailAlloc_6087_, 20, v_K_6065_);
lean_ctor_set(v_reuseFailAlloc_6087_, 21, v_k_6066_);
lean_ctor_set(v_reuseFailAlloc_6087_, 22, v_H_6067_);
lean_ctor_set(v_reuseFailAlloc_6087_, 23, v_m_6068_);
lean_ctor_set(v_reuseFailAlloc_6087_, 24, v_s_6069_);
lean_ctor_set(v_reuseFailAlloc_6087_, 25, v_S_6070_);
lean_ctor_set(v_reuseFailAlloc_6087_, 26, v_A_6071_);
lean_ctor_set(v_reuseFailAlloc_6087_, 27, v_n_6072_);
lean_ctor_set(v_reuseFailAlloc_6087_, 28, v_N_6073_);
lean_ctor_set(v_reuseFailAlloc_6087_, 29, v_V_6074_);
lean_ctor_set(v_reuseFailAlloc_6087_, 30, v_z_6075_);
lean_ctor_set(v_reuseFailAlloc_6087_, 31, v___x_6084_);
lean_ctor_set(v_reuseFailAlloc_6087_, 32, v_v_6076_);
lean_ctor_set(v_reuseFailAlloc_6087_, 33, v_O_6077_);
lean_ctor_set(v_reuseFailAlloc_6087_, 34, v_X_6078_);
lean_ctor_set(v_reuseFailAlloc_6087_, 35, v_x_6079_);
lean_ctor_set(v_reuseFailAlloc_6087_, 36, v_Z_6080_);
v___x_6086_ = v_reuseFailAlloc_6087_;
goto v_reusejp_6085_;
}
v_reusejp_6085_:
{
return v___x_6086_;
}
}
}
else
{
lean_object* v_G_6090_; lean_object* v_y_6091_; lean_object* v_u_6092_; lean_object* v_Y_6093_; lean_object* v_D_6094_; lean_object* v_M_6095_; lean_object* v_L_6096_; lean_object* v_d_6097_; lean_object* v_Q_6098_; lean_object* v_q_6099_; lean_object* v_w_6100_; lean_object* v_W_6101_; lean_object* v_E_6102_; lean_object* v_e_6103_; lean_object* v_c_6104_; lean_object* v_F_6105_; lean_object* v_a_6106_; lean_object* v_b_6107_; lean_object* v_B_6108_; lean_object* v_h_6109_; lean_object* v_K_6110_; lean_object* v_k_6111_; lean_object* v_H_6112_; lean_object* v_m_6113_; lean_object* v_s_6114_; lean_object* v_S_6115_; lean_object* v_A_6116_; lean_object* v_n_6117_; lean_object* v_N_6118_; lean_object* v_V_6119_; lean_object* v_zabbrev_6120_; lean_object* v_v_6121_; lean_object* v_O_6122_; lean_object* v_X_6123_; lean_object* v_x_6124_; lean_object* v_Z_6125_; lean_object* v___x_6127_; uint8_t v_isShared_6128_; uint8_t v_isSharedCheck_6133_; 
v_G_6090_ = lean_ctor_get(v_date_4523_, 0);
v_y_6091_ = lean_ctor_get(v_date_4523_, 1);
v_u_6092_ = lean_ctor_get(v_date_4523_, 2);
v_Y_6093_ = lean_ctor_get(v_date_4523_, 3);
v_D_6094_ = lean_ctor_get(v_date_4523_, 4);
v_M_6095_ = lean_ctor_get(v_date_4523_, 5);
v_L_6096_ = lean_ctor_get(v_date_4523_, 6);
v_d_6097_ = lean_ctor_get(v_date_4523_, 7);
v_Q_6098_ = lean_ctor_get(v_date_4523_, 8);
v_q_6099_ = lean_ctor_get(v_date_4523_, 9);
v_w_6100_ = lean_ctor_get(v_date_4523_, 10);
v_W_6101_ = lean_ctor_get(v_date_4523_, 11);
v_E_6102_ = lean_ctor_get(v_date_4523_, 12);
v_e_6103_ = lean_ctor_get(v_date_4523_, 13);
v_c_6104_ = lean_ctor_get(v_date_4523_, 14);
v_F_6105_ = lean_ctor_get(v_date_4523_, 15);
v_a_6106_ = lean_ctor_get(v_date_4523_, 16);
v_b_6107_ = lean_ctor_get(v_date_4523_, 17);
v_B_6108_ = lean_ctor_get(v_date_4523_, 18);
v_h_6109_ = lean_ctor_get(v_date_4523_, 19);
v_K_6110_ = lean_ctor_get(v_date_4523_, 20);
v_k_6111_ = lean_ctor_get(v_date_4523_, 21);
v_H_6112_ = lean_ctor_get(v_date_4523_, 22);
v_m_6113_ = lean_ctor_get(v_date_4523_, 23);
v_s_6114_ = lean_ctor_get(v_date_4523_, 24);
v_S_6115_ = lean_ctor_get(v_date_4523_, 25);
v_A_6116_ = lean_ctor_get(v_date_4523_, 26);
v_n_6117_ = lean_ctor_get(v_date_4523_, 27);
v_N_6118_ = lean_ctor_get(v_date_4523_, 28);
v_V_6119_ = lean_ctor_get(v_date_4523_, 29);
v_zabbrev_6120_ = lean_ctor_get(v_date_4523_, 31);
v_v_6121_ = lean_ctor_get(v_date_4523_, 32);
v_O_6122_ = lean_ctor_get(v_date_4523_, 33);
v_X_6123_ = lean_ctor_get(v_date_4523_, 34);
v_x_6124_ = lean_ctor_get(v_date_4523_, 35);
v_Z_6125_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_6133_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_6133_ == 0)
{
lean_object* v_unused_6134_; 
v_unused_6134_ = lean_ctor_get(v_date_4523_, 30);
lean_dec(v_unused_6134_);
v___x_6127_ = v_date_4523_;
v_isShared_6128_ = v_isSharedCheck_6133_;
goto v_resetjp_6126_;
}
else
{
lean_inc(v_Z_6125_);
lean_inc(v_x_6124_);
lean_inc(v_X_6123_);
lean_inc(v_O_6122_);
lean_inc(v_v_6121_);
lean_inc(v_zabbrev_6120_);
lean_inc(v_V_6119_);
lean_inc(v_N_6118_);
lean_inc(v_n_6117_);
lean_inc(v_A_6116_);
lean_inc(v_S_6115_);
lean_inc(v_s_6114_);
lean_inc(v_m_6113_);
lean_inc(v_H_6112_);
lean_inc(v_k_6111_);
lean_inc(v_K_6110_);
lean_inc(v_h_6109_);
lean_inc(v_B_6108_);
lean_inc(v_b_6107_);
lean_inc(v_a_6106_);
lean_inc(v_F_6105_);
lean_inc(v_c_6104_);
lean_inc(v_e_6103_);
lean_inc(v_E_6102_);
lean_inc(v_W_6101_);
lean_inc(v_w_6100_);
lean_inc(v_q_6099_);
lean_inc(v_Q_6098_);
lean_inc(v_d_6097_);
lean_inc(v_L_6096_);
lean_inc(v_M_6095_);
lean_inc(v_D_6094_);
lean_inc(v_Y_6093_);
lean_inc(v_u_6092_);
lean_inc(v_y_6091_);
lean_inc(v_G_6090_);
lean_dec(v_date_4523_);
v___x_6127_ = lean_box(0);
v_isShared_6128_ = v_isSharedCheck_6133_;
goto v_resetjp_6126_;
}
v_resetjp_6126_:
{
lean_object* v___x_6129_; lean_object* v___x_6131_; 
v___x_6129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6129_, 0, v_data_4525_);
if (v_isShared_6128_ == 0)
{
lean_ctor_set(v___x_6127_, 30, v___x_6129_);
v___x_6131_ = v___x_6127_;
goto v_reusejp_6130_;
}
else
{
lean_object* v_reuseFailAlloc_6132_; 
v_reuseFailAlloc_6132_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6132_, 0, v_G_6090_);
lean_ctor_set(v_reuseFailAlloc_6132_, 1, v_y_6091_);
lean_ctor_set(v_reuseFailAlloc_6132_, 2, v_u_6092_);
lean_ctor_set(v_reuseFailAlloc_6132_, 3, v_Y_6093_);
lean_ctor_set(v_reuseFailAlloc_6132_, 4, v_D_6094_);
lean_ctor_set(v_reuseFailAlloc_6132_, 5, v_M_6095_);
lean_ctor_set(v_reuseFailAlloc_6132_, 6, v_L_6096_);
lean_ctor_set(v_reuseFailAlloc_6132_, 7, v_d_6097_);
lean_ctor_set(v_reuseFailAlloc_6132_, 8, v_Q_6098_);
lean_ctor_set(v_reuseFailAlloc_6132_, 9, v_q_6099_);
lean_ctor_set(v_reuseFailAlloc_6132_, 10, v_w_6100_);
lean_ctor_set(v_reuseFailAlloc_6132_, 11, v_W_6101_);
lean_ctor_set(v_reuseFailAlloc_6132_, 12, v_E_6102_);
lean_ctor_set(v_reuseFailAlloc_6132_, 13, v_e_6103_);
lean_ctor_set(v_reuseFailAlloc_6132_, 14, v_c_6104_);
lean_ctor_set(v_reuseFailAlloc_6132_, 15, v_F_6105_);
lean_ctor_set(v_reuseFailAlloc_6132_, 16, v_a_6106_);
lean_ctor_set(v_reuseFailAlloc_6132_, 17, v_b_6107_);
lean_ctor_set(v_reuseFailAlloc_6132_, 18, v_B_6108_);
lean_ctor_set(v_reuseFailAlloc_6132_, 19, v_h_6109_);
lean_ctor_set(v_reuseFailAlloc_6132_, 20, v_K_6110_);
lean_ctor_set(v_reuseFailAlloc_6132_, 21, v_k_6111_);
lean_ctor_set(v_reuseFailAlloc_6132_, 22, v_H_6112_);
lean_ctor_set(v_reuseFailAlloc_6132_, 23, v_m_6113_);
lean_ctor_set(v_reuseFailAlloc_6132_, 24, v_s_6114_);
lean_ctor_set(v_reuseFailAlloc_6132_, 25, v_S_6115_);
lean_ctor_set(v_reuseFailAlloc_6132_, 26, v_A_6116_);
lean_ctor_set(v_reuseFailAlloc_6132_, 27, v_n_6117_);
lean_ctor_set(v_reuseFailAlloc_6132_, 28, v_N_6118_);
lean_ctor_set(v_reuseFailAlloc_6132_, 29, v_V_6119_);
lean_ctor_set(v_reuseFailAlloc_6132_, 30, v___x_6129_);
lean_ctor_set(v_reuseFailAlloc_6132_, 31, v_zabbrev_6120_);
lean_ctor_set(v_reuseFailAlloc_6132_, 32, v_v_6121_);
lean_ctor_set(v_reuseFailAlloc_6132_, 33, v_O_6122_);
lean_ctor_set(v_reuseFailAlloc_6132_, 34, v_X_6123_);
lean_ctor_set(v_reuseFailAlloc_6132_, 35, v_x_6124_);
lean_ctor_set(v_reuseFailAlloc_6132_, 36, v_Z_6125_);
v___x_6131_ = v_reuseFailAlloc_6132_;
goto v_reusejp_6130_;
}
v_reusejp_6130_:
{
return v___x_6131_;
}
}
}
}
case 31:
{
lean_object* v_G_6135_; lean_object* v_y_6136_; lean_object* v_u_6137_; lean_object* v_Y_6138_; lean_object* v_D_6139_; lean_object* v_M_6140_; lean_object* v_L_6141_; lean_object* v_d_6142_; lean_object* v_Q_6143_; lean_object* v_q_6144_; lean_object* v_w_6145_; lean_object* v_W_6146_; lean_object* v_E_6147_; lean_object* v_e_6148_; lean_object* v_c_6149_; lean_object* v_F_6150_; lean_object* v_a_6151_; lean_object* v_b_6152_; lean_object* v_B_6153_; lean_object* v_h_6154_; lean_object* v_K_6155_; lean_object* v_k_6156_; lean_object* v_H_6157_; lean_object* v_m_6158_; lean_object* v_s_6159_; lean_object* v_S_6160_; lean_object* v_A_6161_; lean_object* v_n_6162_; lean_object* v_N_6163_; lean_object* v_V_6164_; lean_object* v_z_6165_; lean_object* v_zabbrev_6166_; lean_object* v_O_6167_; lean_object* v_X_6168_; lean_object* v_x_6169_; lean_object* v_Z_6170_; lean_object* v___x_6172_; uint8_t v_isShared_6173_; uint8_t v_isSharedCheck_6178_; 
lean_dec_ref_known(v_modifier_4524_, 0);
v_G_6135_ = lean_ctor_get(v_date_4523_, 0);
v_y_6136_ = lean_ctor_get(v_date_4523_, 1);
v_u_6137_ = lean_ctor_get(v_date_4523_, 2);
v_Y_6138_ = lean_ctor_get(v_date_4523_, 3);
v_D_6139_ = lean_ctor_get(v_date_4523_, 4);
v_M_6140_ = lean_ctor_get(v_date_4523_, 5);
v_L_6141_ = lean_ctor_get(v_date_4523_, 6);
v_d_6142_ = lean_ctor_get(v_date_4523_, 7);
v_Q_6143_ = lean_ctor_get(v_date_4523_, 8);
v_q_6144_ = lean_ctor_get(v_date_4523_, 9);
v_w_6145_ = lean_ctor_get(v_date_4523_, 10);
v_W_6146_ = lean_ctor_get(v_date_4523_, 11);
v_E_6147_ = lean_ctor_get(v_date_4523_, 12);
v_e_6148_ = lean_ctor_get(v_date_4523_, 13);
v_c_6149_ = lean_ctor_get(v_date_4523_, 14);
v_F_6150_ = lean_ctor_get(v_date_4523_, 15);
v_a_6151_ = lean_ctor_get(v_date_4523_, 16);
v_b_6152_ = lean_ctor_get(v_date_4523_, 17);
v_B_6153_ = lean_ctor_get(v_date_4523_, 18);
v_h_6154_ = lean_ctor_get(v_date_4523_, 19);
v_K_6155_ = lean_ctor_get(v_date_4523_, 20);
v_k_6156_ = lean_ctor_get(v_date_4523_, 21);
v_H_6157_ = lean_ctor_get(v_date_4523_, 22);
v_m_6158_ = lean_ctor_get(v_date_4523_, 23);
v_s_6159_ = lean_ctor_get(v_date_4523_, 24);
v_S_6160_ = lean_ctor_get(v_date_4523_, 25);
v_A_6161_ = lean_ctor_get(v_date_4523_, 26);
v_n_6162_ = lean_ctor_get(v_date_4523_, 27);
v_N_6163_ = lean_ctor_get(v_date_4523_, 28);
v_V_6164_ = lean_ctor_get(v_date_4523_, 29);
v_z_6165_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_6166_ = lean_ctor_get(v_date_4523_, 31);
v_O_6167_ = lean_ctor_get(v_date_4523_, 33);
v_X_6168_ = lean_ctor_get(v_date_4523_, 34);
v_x_6169_ = lean_ctor_get(v_date_4523_, 35);
v_Z_6170_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_6178_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_6178_ == 0)
{
lean_object* v_unused_6179_; 
v_unused_6179_ = lean_ctor_get(v_date_4523_, 32);
lean_dec(v_unused_6179_);
v___x_6172_ = v_date_4523_;
v_isShared_6173_ = v_isSharedCheck_6178_;
goto v_resetjp_6171_;
}
else
{
lean_inc(v_Z_6170_);
lean_inc(v_x_6169_);
lean_inc(v_X_6168_);
lean_inc(v_O_6167_);
lean_inc(v_zabbrev_6166_);
lean_inc(v_z_6165_);
lean_inc(v_V_6164_);
lean_inc(v_N_6163_);
lean_inc(v_n_6162_);
lean_inc(v_A_6161_);
lean_inc(v_S_6160_);
lean_inc(v_s_6159_);
lean_inc(v_m_6158_);
lean_inc(v_H_6157_);
lean_inc(v_k_6156_);
lean_inc(v_K_6155_);
lean_inc(v_h_6154_);
lean_inc(v_B_6153_);
lean_inc(v_b_6152_);
lean_inc(v_a_6151_);
lean_inc(v_F_6150_);
lean_inc(v_c_6149_);
lean_inc(v_e_6148_);
lean_inc(v_E_6147_);
lean_inc(v_W_6146_);
lean_inc(v_w_6145_);
lean_inc(v_q_6144_);
lean_inc(v_Q_6143_);
lean_inc(v_d_6142_);
lean_inc(v_L_6141_);
lean_inc(v_M_6140_);
lean_inc(v_D_6139_);
lean_inc(v_Y_6138_);
lean_inc(v_u_6137_);
lean_inc(v_y_6136_);
lean_inc(v_G_6135_);
lean_dec(v_date_4523_);
v___x_6172_ = lean_box(0);
v_isShared_6173_ = v_isSharedCheck_6178_;
goto v_resetjp_6171_;
}
v_resetjp_6171_:
{
lean_object* v___x_6174_; lean_object* v___x_6176_; 
v___x_6174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6174_, 0, v_data_4525_);
if (v_isShared_6173_ == 0)
{
lean_ctor_set(v___x_6172_, 32, v___x_6174_);
v___x_6176_ = v___x_6172_;
goto v_reusejp_6175_;
}
else
{
lean_object* v_reuseFailAlloc_6177_; 
v_reuseFailAlloc_6177_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6177_, 0, v_G_6135_);
lean_ctor_set(v_reuseFailAlloc_6177_, 1, v_y_6136_);
lean_ctor_set(v_reuseFailAlloc_6177_, 2, v_u_6137_);
lean_ctor_set(v_reuseFailAlloc_6177_, 3, v_Y_6138_);
lean_ctor_set(v_reuseFailAlloc_6177_, 4, v_D_6139_);
lean_ctor_set(v_reuseFailAlloc_6177_, 5, v_M_6140_);
lean_ctor_set(v_reuseFailAlloc_6177_, 6, v_L_6141_);
lean_ctor_set(v_reuseFailAlloc_6177_, 7, v_d_6142_);
lean_ctor_set(v_reuseFailAlloc_6177_, 8, v_Q_6143_);
lean_ctor_set(v_reuseFailAlloc_6177_, 9, v_q_6144_);
lean_ctor_set(v_reuseFailAlloc_6177_, 10, v_w_6145_);
lean_ctor_set(v_reuseFailAlloc_6177_, 11, v_W_6146_);
lean_ctor_set(v_reuseFailAlloc_6177_, 12, v_E_6147_);
lean_ctor_set(v_reuseFailAlloc_6177_, 13, v_e_6148_);
lean_ctor_set(v_reuseFailAlloc_6177_, 14, v_c_6149_);
lean_ctor_set(v_reuseFailAlloc_6177_, 15, v_F_6150_);
lean_ctor_set(v_reuseFailAlloc_6177_, 16, v_a_6151_);
lean_ctor_set(v_reuseFailAlloc_6177_, 17, v_b_6152_);
lean_ctor_set(v_reuseFailAlloc_6177_, 18, v_B_6153_);
lean_ctor_set(v_reuseFailAlloc_6177_, 19, v_h_6154_);
lean_ctor_set(v_reuseFailAlloc_6177_, 20, v_K_6155_);
lean_ctor_set(v_reuseFailAlloc_6177_, 21, v_k_6156_);
lean_ctor_set(v_reuseFailAlloc_6177_, 22, v_H_6157_);
lean_ctor_set(v_reuseFailAlloc_6177_, 23, v_m_6158_);
lean_ctor_set(v_reuseFailAlloc_6177_, 24, v_s_6159_);
lean_ctor_set(v_reuseFailAlloc_6177_, 25, v_S_6160_);
lean_ctor_set(v_reuseFailAlloc_6177_, 26, v_A_6161_);
lean_ctor_set(v_reuseFailAlloc_6177_, 27, v_n_6162_);
lean_ctor_set(v_reuseFailAlloc_6177_, 28, v_N_6163_);
lean_ctor_set(v_reuseFailAlloc_6177_, 29, v_V_6164_);
lean_ctor_set(v_reuseFailAlloc_6177_, 30, v_z_6165_);
lean_ctor_set(v_reuseFailAlloc_6177_, 31, v_zabbrev_6166_);
lean_ctor_set(v_reuseFailAlloc_6177_, 32, v___x_6174_);
lean_ctor_set(v_reuseFailAlloc_6177_, 33, v_O_6167_);
lean_ctor_set(v_reuseFailAlloc_6177_, 34, v_X_6168_);
lean_ctor_set(v_reuseFailAlloc_6177_, 35, v_x_6169_);
lean_ctor_set(v_reuseFailAlloc_6177_, 36, v_Z_6170_);
v___x_6176_ = v_reuseFailAlloc_6177_;
goto v_reusejp_6175_;
}
v_reusejp_6175_:
{
return v___x_6176_;
}
}
}
case 32:
{
lean_object* v_G_6180_; lean_object* v_y_6181_; lean_object* v_u_6182_; lean_object* v_Y_6183_; lean_object* v_D_6184_; lean_object* v_M_6185_; lean_object* v_L_6186_; lean_object* v_d_6187_; lean_object* v_Q_6188_; lean_object* v_q_6189_; lean_object* v_w_6190_; lean_object* v_W_6191_; lean_object* v_E_6192_; lean_object* v_e_6193_; lean_object* v_c_6194_; lean_object* v_F_6195_; lean_object* v_a_6196_; lean_object* v_b_6197_; lean_object* v_B_6198_; lean_object* v_h_6199_; lean_object* v_K_6200_; lean_object* v_k_6201_; lean_object* v_H_6202_; lean_object* v_m_6203_; lean_object* v_s_6204_; lean_object* v_S_6205_; lean_object* v_A_6206_; lean_object* v_n_6207_; lean_object* v_N_6208_; lean_object* v_V_6209_; lean_object* v_z_6210_; lean_object* v_zabbrev_6211_; lean_object* v_v_6212_; lean_object* v_X_6213_; lean_object* v_x_6214_; lean_object* v_Z_6215_; lean_object* v___x_6217_; uint8_t v_isShared_6218_; uint8_t v_isSharedCheck_6223_; 
lean_dec_ref_known(v_modifier_4524_, 0);
v_G_6180_ = lean_ctor_get(v_date_4523_, 0);
v_y_6181_ = lean_ctor_get(v_date_4523_, 1);
v_u_6182_ = lean_ctor_get(v_date_4523_, 2);
v_Y_6183_ = lean_ctor_get(v_date_4523_, 3);
v_D_6184_ = lean_ctor_get(v_date_4523_, 4);
v_M_6185_ = lean_ctor_get(v_date_4523_, 5);
v_L_6186_ = lean_ctor_get(v_date_4523_, 6);
v_d_6187_ = lean_ctor_get(v_date_4523_, 7);
v_Q_6188_ = lean_ctor_get(v_date_4523_, 8);
v_q_6189_ = lean_ctor_get(v_date_4523_, 9);
v_w_6190_ = lean_ctor_get(v_date_4523_, 10);
v_W_6191_ = lean_ctor_get(v_date_4523_, 11);
v_E_6192_ = lean_ctor_get(v_date_4523_, 12);
v_e_6193_ = lean_ctor_get(v_date_4523_, 13);
v_c_6194_ = lean_ctor_get(v_date_4523_, 14);
v_F_6195_ = lean_ctor_get(v_date_4523_, 15);
v_a_6196_ = lean_ctor_get(v_date_4523_, 16);
v_b_6197_ = lean_ctor_get(v_date_4523_, 17);
v_B_6198_ = lean_ctor_get(v_date_4523_, 18);
v_h_6199_ = lean_ctor_get(v_date_4523_, 19);
v_K_6200_ = lean_ctor_get(v_date_4523_, 20);
v_k_6201_ = lean_ctor_get(v_date_4523_, 21);
v_H_6202_ = lean_ctor_get(v_date_4523_, 22);
v_m_6203_ = lean_ctor_get(v_date_4523_, 23);
v_s_6204_ = lean_ctor_get(v_date_4523_, 24);
v_S_6205_ = lean_ctor_get(v_date_4523_, 25);
v_A_6206_ = lean_ctor_get(v_date_4523_, 26);
v_n_6207_ = lean_ctor_get(v_date_4523_, 27);
v_N_6208_ = lean_ctor_get(v_date_4523_, 28);
v_V_6209_ = lean_ctor_get(v_date_4523_, 29);
v_z_6210_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_6211_ = lean_ctor_get(v_date_4523_, 31);
v_v_6212_ = lean_ctor_get(v_date_4523_, 32);
v_X_6213_ = lean_ctor_get(v_date_4523_, 34);
v_x_6214_ = lean_ctor_get(v_date_4523_, 35);
v_Z_6215_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_6223_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_6223_ == 0)
{
lean_object* v_unused_6224_; 
v_unused_6224_ = lean_ctor_get(v_date_4523_, 33);
lean_dec(v_unused_6224_);
v___x_6217_ = v_date_4523_;
v_isShared_6218_ = v_isSharedCheck_6223_;
goto v_resetjp_6216_;
}
else
{
lean_inc(v_Z_6215_);
lean_inc(v_x_6214_);
lean_inc(v_X_6213_);
lean_inc(v_v_6212_);
lean_inc(v_zabbrev_6211_);
lean_inc(v_z_6210_);
lean_inc(v_V_6209_);
lean_inc(v_N_6208_);
lean_inc(v_n_6207_);
lean_inc(v_A_6206_);
lean_inc(v_S_6205_);
lean_inc(v_s_6204_);
lean_inc(v_m_6203_);
lean_inc(v_H_6202_);
lean_inc(v_k_6201_);
lean_inc(v_K_6200_);
lean_inc(v_h_6199_);
lean_inc(v_B_6198_);
lean_inc(v_b_6197_);
lean_inc(v_a_6196_);
lean_inc(v_F_6195_);
lean_inc(v_c_6194_);
lean_inc(v_e_6193_);
lean_inc(v_E_6192_);
lean_inc(v_W_6191_);
lean_inc(v_w_6190_);
lean_inc(v_q_6189_);
lean_inc(v_Q_6188_);
lean_inc(v_d_6187_);
lean_inc(v_L_6186_);
lean_inc(v_M_6185_);
lean_inc(v_D_6184_);
lean_inc(v_Y_6183_);
lean_inc(v_u_6182_);
lean_inc(v_y_6181_);
lean_inc(v_G_6180_);
lean_dec(v_date_4523_);
v___x_6217_ = lean_box(0);
v_isShared_6218_ = v_isSharedCheck_6223_;
goto v_resetjp_6216_;
}
v_resetjp_6216_:
{
lean_object* v___x_6219_; lean_object* v___x_6221_; 
v___x_6219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6219_, 0, v_data_4525_);
if (v_isShared_6218_ == 0)
{
lean_ctor_set(v___x_6217_, 33, v___x_6219_);
v___x_6221_ = v___x_6217_;
goto v_reusejp_6220_;
}
else
{
lean_object* v_reuseFailAlloc_6222_; 
v_reuseFailAlloc_6222_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6222_, 0, v_G_6180_);
lean_ctor_set(v_reuseFailAlloc_6222_, 1, v_y_6181_);
lean_ctor_set(v_reuseFailAlloc_6222_, 2, v_u_6182_);
lean_ctor_set(v_reuseFailAlloc_6222_, 3, v_Y_6183_);
lean_ctor_set(v_reuseFailAlloc_6222_, 4, v_D_6184_);
lean_ctor_set(v_reuseFailAlloc_6222_, 5, v_M_6185_);
lean_ctor_set(v_reuseFailAlloc_6222_, 6, v_L_6186_);
lean_ctor_set(v_reuseFailAlloc_6222_, 7, v_d_6187_);
lean_ctor_set(v_reuseFailAlloc_6222_, 8, v_Q_6188_);
lean_ctor_set(v_reuseFailAlloc_6222_, 9, v_q_6189_);
lean_ctor_set(v_reuseFailAlloc_6222_, 10, v_w_6190_);
lean_ctor_set(v_reuseFailAlloc_6222_, 11, v_W_6191_);
lean_ctor_set(v_reuseFailAlloc_6222_, 12, v_E_6192_);
lean_ctor_set(v_reuseFailAlloc_6222_, 13, v_e_6193_);
lean_ctor_set(v_reuseFailAlloc_6222_, 14, v_c_6194_);
lean_ctor_set(v_reuseFailAlloc_6222_, 15, v_F_6195_);
lean_ctor_set(v_reuseFailAlloc_6222_, 16, v_a_6196_);
lean_ctor_set(v_reuseFailAlloc_6222_, 17, v_b_6197_);
lean_ctor_set(v_reuseFailAlloc_6222_, 18, v_B_6198_);
lean_ctor_set(v_reuseFailAlloc_6222_, 19, v_h_6199_);
lean_ctor_set(v_reuseFailAlloc_6222_, 20, v_K_6200_);
lean_ctor_set(v_reuseFailAlloc_6222_, 21, v_k_6201_);
lean_ctor_set(v_reuseFailAlloc_6222_, 22, v_H_6202_);
lean_ctor_set(v_reuseFailAlloc_6222_, 23, v_m_6203_);
lean_ctor_set(v_reuseFailAlloc_6222_, 24, v_s_6204_);
lean_ctor_set(v_reuseFailAlloc_6222_, 25, v_S_6205_);
lean_ctor_set(v_reuseFailAlloc_6222_, 26, v_A_6206_);
lean_ctor_set(v_reuseFailAlloc_6222_, 27, v_n_6207_);
lean_ctor_set(v_reuseFailAlloc_6222_, 28, v_N_6208_);
lean_ctor_set(v_reuseFailAlloc_6222_, 29, v_V_6209_);
lean_ctor_set(v_reuseFailAlloc_6222_, 30, v_z_6210_);
lean_ctor_set(v_reuseFailAlloc_6222_, 31, v_zabbrev_6211_);
lean_ctor_set(v_reuseFailAlloc_6222_, 32, v_v_6212_);
lean_ctor_set(v_reuseFailAlloc_6222_, 33, v___x_6219_);
lean_ctor_set(v_reuseFailAlloc_6222_, 34, v_X_6213_);
lean_ctor_set(v_reuseFailAlloc_6222_, 35, v_x_6214_);
lean_ctor_set(v_reuseFailAlloc_6222_, 36, v_Z_6215_);
v___x_6221_ = v_reuseFailAlloc_6222_;
goto v_reusejp_6220_;
}
v_reusejp_6220_:
{
return v___x_6221_;
}
}
}
case 33:
{
lean_object* v_G_6225_; lean_object* v_y_6226_; lean_object* v_u_6227_; lean_object* v_Y_6228_; lean_object* v_D_6229_; lean_object* v_M_6230_; lean_object* v_L_6231_; lean_object* v_d_6232_; lean_object* v_Q_6233_; lean_object* v_q_6234_; lean_object* v_w_6235_; lean_object* v_W_6236_; lean_object* v_E_6237_; lean_object* v_e_6238_; lean_object* v_c_6239_; lean_object* v_F_6240_; lean_object* v_a_6241_; lean_object* v_b_6242_; lean_object* v_B_6243_; lean_object* v_h_6244_; lean_object* v_K_6245_; lean_object* v_k_6246_; lean_object* v_H_6247_; lean_object* v_m_6248_; lean_object* v_s_6249_; lean_object* v_S_6250_; lean_object* v_A_6251_; lean_object* v_n_6252_; lean_object* v_N_6253_; lean_object* v_V_6254_; lean_object* v_z_6255_; lean_object* v_zabbrev_6256_; lean_object* v_v_6257_; lean_object* v_O_6258_; lean_object* v_x_6259_; lean_object* v_Z_6260_; lean_object* v___x_6262_; uint8_t v_isShared_6263_; uint8_t v_isSharedCheck_6268_; 
lean_dec_ref_known(v_modifier_4524_, 0);
v_G_6225_ = lean_ctor_get(v_date_4523_, 0);
v_y_6226_ = lean_ctor_get(v_date_4523_, 1);
v_u_6227_ = lean_ctor_get(v_date_4523_, 2);
v_Y_6228_ = lean_ctor_get(v_date_4523_, 3);
v_D_6229_ = lean_ctor_get(v_date_4523_, 4);
v_M_6230_ = lean_ctor_get(v_date_4523_, 5);
v_L_6231_ = lean_ctor_get(v_date_4523_, 6);
v_d_6232_ = lean_ctor_get(v_date_4523_, 7);
v_Q_6233_ = lean_ctor_get(v_date_4523_, 8);
v_q_6234_ = lean_ctor_get(v_date_4523_, 9);
v_w_6235_ = lean_ctor_get(v_date_4523_, 10);
v_W_6236_ = lean_ctor_get(v_date_4523_, 11);
v_E_6237_ = lean_ctor_get(v_date_4523_, 12);
v_e_6238_ = lean_ctor_get(v_date_4523_, 13);
v_c_6239_ = lean_ctor_get(v_date_4523_, 14);
v_F_6240_ = lean_ctor_get(v_date_4523_, 15);
v_a_6241_ = lean_ctor_get(v_date_4523_, 16);
v_b_6242_ = lean_ctor_get(v_date_4523_, 17);
v_B_6243_ = lean_ctor_get(v_date_4523_, 18);
v_h_6244_ = lean_ctor_get(v_date_4523_, 19);
v_K_6245_ = lean_ctor_get(v_date_4523_, 20);
v_k_6246_ = lean_ctor_get(v_date_4523_, 21);
v_H_6247_ = lean_ctor_get(v_date_4523_, 22);
v_m_6248_ = lean_ctor_get(v_date_4523_, 23);
v_s_6249_ = lean_ctor_get(v_date_4523_, 24);
v_S_6250_ = lean_ctor_get(v_date_4523_, 25);
v_A_6251_ = lean_ctor_get(v_date_4523_, 26);
v_n_6252_ = lean_ctor_get(v_date_4523_, 27);
v_N_6253_ = lean_ctor_get(v_date_4523_, 28);
v_V_6254_ = lean_ctor_get(v_date_4523_, 29);
v_z_6255_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_6256_ = lean_ctor_get(v_date_4523_, 31);
v_v_6257_ = lean_ctor_get(v_date_4523_, 32);
v_O_6258_ = lean_ctor_get(v_date_4523_, 33);
v_x_6259_ = lean_ctor_get(v_date_4523_, 35);
v_Z_6260_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_6268_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_6268_ == 0)
{
lean_object* v_unused_6269_; 
v_unused_6269_ = lean_ctor_get(v_date_4523_, 34);
lean_dec(v_unused_6269_);
v___x_6262_ = v_date_4523_;
v_isShared_6263_ = v_isSharedCheck_6268_;
goto v_resetjp_6261_;
}
else
{
lean_inc(v_Z_6260_);
lean_inc(v_x_6259_);
lean_inc(v_O_6258_);
lean_inc(v_v_6257_);
lean_inc(v_zabbrev_6256_);
lean_inc(v_z_6255_);
lean_inc(v_V_6254_);
lean_inc(v_N_6253_);
lean_inc(v_n_6252_);
lean_inc(v_A_6251_);
lean_inc(v_S_6250_);
lean_inc(v_s_6249_);
lean_inc(v_m_6248_);
lean_inc(v_H_6247_);
lean_inc(v_k_6246_);
lean_inc(v_K_6245_);
lean_inc(v_h_6244_);
lean_inc(v_B_6243_);
lean_inc(v_b_6242_);
lean_inc(v_a_6241_);
lean_inc(v_F_6240_);
lean_inc(v_c_6239_);
lean_inc(v_e_6238_);
lean_inc(v_E_6237_);
lean_inc(v_W_6236_);
lean_inc(v_w_6235_);
lean_inc(v_q_6234_);
lean_inc(v_Q_6233_);
lean_inc(v_d_6232_);
lean_inc(v_L_6231_);
lean_inc(v_M_6230_);
lean_inc(v_D_6229_);
lean_inc(v_Y_6228_);
lean_inc(v_u_6227_);
lean_inc(v_y_6226_);
lean_inc(v_G_6225_);
lean_dec(v_date_4523_);
v___x_6262_ = lean_box(0);
v_isShared_6263_ = v_isSharedCheck_6268_;
goto v_resetjp_6261_;
}
v_resetjp_6261_:
{
lean_object* v___x_6264_; lean_object* v___x_6266_; 
v___x_6264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6264_, 0, v_data_4525_);
if (v_isShared_6263_ == 0)
{
lean_ctor_set(v___x_6262_, 34, v___x_6264_);
v___x_6266_ = v___x_6262_;
goto v_reusejp_6265_;
}
else
{
lean_object* v_reuseFailAlloc_6267_; 
v_reuseFailAlloc_6267_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6267_, 0, v_G_6225_);
lean_ctor_set(v_reuseFailAlloc_6267_, 1, v_y_6226_);
lean_ctor_set(v_reuseFailAlloc_6267_, 2, v_u_6227_);
lean_ctor_set(v_reuseFailAlloc_6267_, 3, v_Y_6228_);
lean_ctor_set(v_reuseFailAlloc_6267_, 4, v_D_6229_);
lean_ctor_set(v_reuseFailAlloc_6267_, 5, v_M_6230_);
lean_ctor_set(v_reuseFailAlloc_6267_, 6, v_L_6231_);
lean_ctor_set(v_reuseFailAlloc_6267_, 7, v_d_6232_);
lean_ctor_set(v_reuseFailAlloc_6267_, 8, v_Q_6233_);
lean_ctor_set(v_reuseFailAlloc_6267_, 9, v_q_6234_);
lean_ctor_set(v_reuseFailAlloc_6267_, 10, v_w_6235_);
lean_ctor_set(v_reuseFailAlloc_6267_, 11, v_W_6236_);
lean_ctor_set(v_reuseFailAlloc_6267_, 12, v_E_6237_);
lean_ctor_set(v_reuseFailAlloc_6267_, 13, v_e_6238_);
lean_ctor_set(v_reuseFailAlloc_6267_, 14, v_c_6239_);
lean_ctor_set(v_reuseFailAlloc_6267_, 15, v_F_6240_);
lean_ctor_set(v_reuseFailAlloc_6267_, 16, v_a_6241_);
lean_ctor_set(v_reuseFailAlloc_6267_, 17, v_b_6242_);
lean_ctor_set(v_reuseFailAlloc_6267_, 18, v_B_6243_);
lean_ctor_set(v_reuseFailAlloc_6267_, 19, v_h_6244_);
lean_ctor_set(v_reuseFailAlloc_6267_, 20, v_K_6245_);
lean_ctor_set(v_reuseFailAlloc_6267_, 21, v_k_6246_);
lean_ctor_set(v_reuseFailAlloc_6267_, 22, v_H_6247_);
lean_ctor_set(v_reuseFailAlloc_6267_, 23, v_m_6248_);
lean_ctor_set(v_reuseFailAlloc_6267_, 24, v_s_6249_);
lean_ctor_set(v_reuseFailAlloc_6267_, 25, v_S_6250_);
lean_ctor_set(v_reuseFailAlloc_6267_, 26, v_A_6251_);
lean_ctor_set(v_reuseFailAlloc_6267_, 27, v_n_6252_);
lean_ctor_set(v_reuseFailAlloc_6267_, 28, v_N_6253_);
lean_ctor_set(v_reuseFailAlloc_6267_, 29, v_V_6254_);
lean_ctor_set(v_reuseFailAlloc_6267_, 30, v_z_6255_);
lean_ctor_set(v_reuseFailAlloc_6267_, 31, v_zabbrev_6256_);
lean_ctor_set(v_reuseFailAlloc_6267_, 32, v_v_6257_);
lean_ctor_set(v_reuseFailAlloc_6267_, 33, v_O_6258_);
lean_ctor_set(v_reuseFailAlloc_6267_, 34, v___x_6264_);
lean_ctor_set(v_reuseFailAlloc_6267_, 35, v_x_6259_);
lean_ctor_set(v_reuseFailAlloc_6267_, 36, v_Z_6260_);
v___x_6266_ = v_reuseFailAlloc_6267_;
goto v_reusejp_6265_;
}
v_reusejp_6265_:
{
return v___x_6266_;
}
}
}
case 34:
{
lean_object* v_G_6270_; lean_object* v_y_6271_; lean_object* v_u_6272_; lean_object* v_Y_6273_; lean_object* v_D_6274_; lean_object* v_M_6275_; lean_object* v_L_6276_; lean_object* v_d_6277_; lean_object* v_Q_6278_; lean_object* v_q_6279_; lean_object* v_w_6280_; lean_object* v_W_6281_; lean_object* v_E_6282_; lean_object* v_e_6283_; lean_object* v_c_6284_; lean_object* v_F_6285_; lean_object* v_a_6286_; lean_object* v_b_6287_; lean_object* v_B_6288_; lean_object* v_h_6289_; lean_object* v_K_6290_; lean_object* v_k_6291_; lean_object* v_H_6292_; lean_object* v_m_6293_; lean_object* v_s_6294_; lean_object* v_S_6295_; lean_object* v_A_6296_; lean_object* v_n_6297_; lean_object* v_N_6298_; lean_object* v_V_6299_; lean_object* v_z_6300_; lean_object* v_zabbrev_6301_; lean_object* v_v_6302_; lean_object* v_O_6303_; lean_object* v_X_6304_; lean_object* v_Z_6305_; lean_object* v___x_6307_; uint8_t v_isShared_6308_; uint8_t v_isSharedCheck_6313_; 
lean_dec_ref_known(v_modifier_4524_, 0);
v_G_6270_ = lean_ctor_get(v_date_4523_, 0);
v_y_6271_ = lean_ctor_get(v_date_4523_, 1);
v_u_6272_ = lean_ctor_get(v_date_4523_, 2);
v_Y_6273_ = lean_ctor_get(v_date_4523_, 3);
v_D_6274_ = lean_ctor_get(v_date_4523_, 4);
v_M_6275_ = lean_ctor_get(v_date_4523_, 5);
v_L_6276_ = lean_ctor_get(v_date_4523_, 6);
v_d_6277_ = lean_ctor_get(v_date_4523_, 7);
v_Q_6278_ = lean_ctor_get(v_date_4523_, 8);
v_q_6279_ = lean_ctor_get(v_date_4523_, 9);
v_w_6280_ = lean_ctor_get(v_date_4523_, 10);
v_W_6281_ = lean_ctor_get(v_date_4523_, 11);
v_E_6282_ = lean_ctor_get(v_date_4523_, 12);
v_e_6283_ = lean_ctor_get(v_date_4523_, 13);
v_c_6284_ = lean_ctor_get(v_date_4523_, 14);
v_F_6285_ = lean_ctor_get(v_date_4523_, 15);
v_a_6286_ = lean_ctor_get(v_date_4523_, 16);
v_b_6287_ = lean_ctor_get(v_date_4523_, 17);
v_B_6288_ = lean_ctor_get(v_date_4523_, 18);
v_h_6289_ = lean_ctor_get(v_date_4523_, 19);
v_K_6290_ = lean_ctor_get(v_date_4523_, 20);
v_k_6291_ = lean_ctor_get(v_date_4523_, 21);
v_H_6292_ = lean_ctor_get(v_date_4523_, 22);
v_m_6293_ = lean_ctor_get(v_date_4523_, 23);
v_s_6294_ = lean_ctor_get(v_date_4523_, 24);
v_S_6295_ = lean_ctor_get(v_date_4523_, 25);
v_A_6296_ = lean_ctor_get(v_date_4523_, 26);
v_n_6297_ = lean_ctor_get(v_date_4523_, 27);
v_N_6298_ = lean_ctor_get(v_date_4523_, 28);
v_V_6299_ = lean_ctor_get(v_date_4523_, 29);
v_z_6300_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_6301_ = lean_ctor_get(v_date_4523_, 31);
v_v_6302_ = lean_ctor_get(v_date_4523_, 32);
v_O_6303_ = lean_ctor_get(v_date_4523_, 33);
v_X_6304_ = lean_ctor_get(v_date_4523_, 34);
v_Z_6305_ = lean_ctor_get(v_date_4523_, 36);
v_isSharedCheck_6313_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_6313_ == 0)
{
lean_object* v_unused_6314_; 
v_unused_6314_ = lean_ctor_get(v_date_4523_, 35);
lean_dec(v_unused_6314_);
v___x_6307_ = v_date_4523_;
v_isShared_6308_ = v_isSharedCheck_6313_;
goto v_resetjp_6306_;
}
else
{
lean_inc(v_Z_6305_);
lean_inc(v_X_6304_);
lean_inc(v_O_6303_);
lean_inc(v_v_6302_);
lean_inc(v_zabbrev_6301_);
lean_inc(v_z_6300_);
lean_inc(v_V_6299_);
lean_inc(v_N_6298_);
lean_inc(v_n_6297_);
lean_inc(v_A_6296_);
lean_inc(v_S_6295_);
lean_inc(v_s_6294_);
lean_inc(v_m_6293_);
lean_inc(v_H_6292_);
lean_inc(v_k_6291_);
lean_inc(v_K_6290_);
lean_inc(v_h_6289_);
lean_inc(v_B_6288_);
lean_inc(v_b_6287_);
lean_inc(v_a_6286_);
lean_inc(v_F_6285_);
lean_inc(v_c_6284_);
lean_inc(v_e_6283_);
lean_inc(v_E_6282_);
lean_inc(v_W_6281_);
lean_inc(v_w_6280_);
lean_inc(v_q_6279_);
lean_inc(v_Q_6278_);
lean_inc(v_d_6277_);
lean_inc(v_L_6276_);
lean_inc(v_M_6275_);
lean_inc(v_D_6274_);
lean_inc(v_Y_6273_);
lean_inc(v_u_6272_);
lean_inc(v_y_6271_);
lean_inc(v_G_6270_);
lean_dec(v_date_4523_);
v___x_6307_ = lean_box(0);
v_isShared_6308_ = v_isSharedCheck_6313_;
goto v_resetjp_6306_;
}
v_resetjp_6306_:
{
lean_object* v___x_6309_; lean_object* v___x_6311_; 
v___x_6309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6309_, 0, v_data_4525_);
if (v_isShared_6308_ == 0)
{
lean_ctor_set(v___x_6307_, 35, v___x_6309_);
v___x_6311_ = v___x_6307_;
goto v_reusejp_6310_;
}
else
{
lean_object* v_reuseFailAlloc_6312_; 
v_reuseFailAlloc_6312_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6312_, 0, v_G_6270_);
lean_ctor_set(v_reuseFailAlloc_6312_, 1, v_y_6271_);
lean_ctor_set(v_reuseFailAlloc_6312_, 2, v_u_6272_);
lean_ctor_set(v_reuseFailAlloc_6312_, 3, v_Y_6273_);
lean_ctor_set(v_reuseFailAlloc_6312_, 4, v_D_6274_);
lean_ctor_set(v_reuseFailAlloc_6312_, 5, v_M_6275_);
lean_ctor_set(v_reuseFailAlloc_6312_, 6, v_L_6276_);
lean_ctor_set(v_reuseFailAlloc_6312_, 7, v_d_6277_);
lean_ctor_set(v_reuseFailAlloc_6312_, 8, v_Q_6278_);
lean_ctor_set(v_reuseFailAlloc_6312_, 9, v_q_6279_);
lean_ctor_set(v_reuseFailAlloc_6312_, 10, v_w_6280_);
lean_ctor_set(v_reuseFailAlloc_6312_, 11, v_W_6281_);
lean_ctor_set(v_reuseFailAlloc_6312_, 12, v_E_6282_);
lean_ctor_set(v_reuseFailAlloc_6312_, 13, v_e_6283_);
lean_ctor_set(v_reuseFailAlloc_6312_, 14, v_c_6284_);
lean_ctor_set(v_reuseFailAlloc_6312_, 15, v_F_6285_);
lean_ctor_set(v_reuseFailAlloc_6312_, 16, v_a_6286_);
lean_ctor_set(v_reuseFailAlloc_6312_, 17, v_b_6287_);
lean_ctor_set(v_reuseFailAlloc_6312_, 18, v_B_6288_);
lean_ctor_set(v_reuseFailAlloc_6312_, 19, v_h_6289_);
lean_ctor_set(v_reuseFailAlloc_6312_, 20, v_K_6290_);
lean_ctor_set(v_reuseFailAlloc_6312_, 21, v_k_6291_);
lean_ctor_set(v_reuseFailAlloc_6312_, 22, v_H_6292_);
lean_ctor_set(v_reuseFailAlloc_6312_, 23, v_m_6293_);
lean_ctor_set(v_reuseFailAlloc_6312_, 24, v_s_6294_);
lean_ctor_set(v_reuseFailAlloc_6312_, 25, v_S_6295_);
lean_ctor_set(v_reuseFailAlloc_6312_, 26, v_A_6296_);
lean_ctor_set(v_reuseFailAlloc_6312_, 27, v_n_6297_);
lean_ctor_set(v_reuseFailAlloc_6312_, 28, v_N_6298_);
lean_ctor_set(v_reuseFailAlloc_6312_, 29, v_V_6299_);
lean_ctor_set(v_reuseFailAlloc_6312_, 30, v_z_6300_);
lean_ctor_set(v_reuseFailAlloc_6312_, 31, v_zabbrev_6301_);
lean_ctor_set(v_reuseFailAlloc_6312_, 32, v_v_6302_);
lean_ctor_set(v_reuseFailAlloc_6312_, 33, v_O_6303_);
lean_ctor_set(v_reuseFailAlloc_6312_, 34, v_X_6304_);
lean_ctor_set(v_reuseFailAlloc_6312_, 35, v___x_6309_);
lean_ctor_set(v_reuseFailAlloc_6312_, 36, v_Z_6305_);
v___x_6311_ = v_reuseFailAlloc_6312_;
goto v_reusejp_6310_;
}
v_reusejp_6310_:
{
return v___x_6311_;
}
}
}
default: 
{
lean_object* v_G_6315_; lean_object* v_y_6316_; lean_object* v_u_6317_; lean_object* v_Y_6318_; lean_object* v_D_6319_; lean_object* v_M_6320_; lean_object* v_L_6321_; lean_object* v_d_6322_; lean_object* v_Q_6323_; lean_object* v_q_6324_; lean_object* v_w_6325_; lean_object* v_W_6326_; lean_object* v_E_6327_; lean_object* v_e_6328_; lean_object* v_c_6329_; lean_object* v_F_6330_; lean_object* v_a_6331_; lean_object* v_b_6332_; lean_object* v_B_6333_; lean_object* v_h_6334_; lean_object* v_K_6335_; lean_object* v_k_6336_; lean_object* v_H_6337_; lean_object* v_m_6338_; lean_object* v_s_6339_; lean_object* v_S_6340_; lean_object* v_A_6341_; lean_object* v_n_6342_; lean_object* v_N_6343_; lean_object* v_V_6344_; lean_object* v_z_6345_; lean_object* v_zabbrev_6346_; lean_object* v_v_6347_; lean_object* v_O_6348_; lean_object* v_X_6349_; lean_object* v_x_6350_; lean_object* v___x_6352_; uint8_t v_isShared_6353_; uint8_t v_isSharedCheck_6358_; 
lean_dec_ref_known(v_modifier_4524_, 0);
v_G_6315_ = lean_ctor_get(v_date_4523_, 0);
v_y_6316_ = lean_ctor_get(v_date_4523_, 1);
v_u_6317_ = lean_ctor_get(v_date_4523_, 2);
v_Y_6318_ = lean_ctor_get(v_date_4523_, 3);
v_D_6319_ = lean_ctor_get(v_date_4523_, 4);
v_M_6320_ = lean_ctor_get(v_date_4523_, 5);
v_L_6321_ = lean_ctor_get(v_date_4523_, 6);
v_d_6322_ = lean_ctor_get(v_date_4523_, 7);
v_Q_6323_ = lean_ctor_get(v_date_4523_, 8);
v_q_6324_ = lean_ctor_get(v_date_4523_, 9);
v_w_6325_ = lean_ctor_get(v_date_4523_, 10);
v_W_6326_ = lean_ctor_get(v_date_4523_, 11);
v_E_6327_ = lean_ctor_get(v_date_4523_, 12);
v_e_6328_ = lean_ctor_get(v_date_4523_, 13);
v_c_6329_ = lean_ctor_get(v_date_4523_, 14);
v_F_6330_ = lean_ctor_get(v_date_4523_, 15);
v_a_6331_ = lean_ctor_get(v_date_4523_, 16);
v_b_6332_ = lean_ctor_get(v_date_4523_, 17);
v_B_6333_ = lean_ctor_get(v_date_4523_, 18);
v_h_6334_ = lean_ctor_get(v_date_4523_, 19);
v_K_6335_ = lean_ctor_get(v_date_4523_, 20);
v_k_6336_ = lean_ctor_get(v_date_4523_, 21);
v_H_6337_ = lean_ctor_get(v_date_4523_, 22);
v_m_6338_ = lean_ctor_get(v_date_4523_, 23);
v_s_6339_ = lean_ctor_get(v_date_4523_, 24);
v_S_6340_ = lean_ctor_get(v_date_4523_, 25);
v_A_6341_ = lean_ctor_get(v_date_4523_, 26);
v_n_6342_ = lean_ctor_get(v_date_4523_, 27);
v_N_6343_ = lean_ctor_get(v_date_4523_, 28);
v_V_6344_ = lean_ctor_get(v_date_4523_, 29);
v_z_6345_ = lean_ctor_get(v_date_4523_, 30);
v_zabbrev_6346_ = lean_ctor_get(v_date_4523_, 31);
v_v_6347_ = lean_ctor_get(v_date_4523_, 32);
v_O_6348_ = lean_ctor_get(v_date_4523_, 33);
v_X_6349_ = lean_ctor_get(v_date_4523_, 34);
v_x_6350_ = lean_ctor_get(v_date_4523_, 35);
v_isSharedCheck_6358_ = !lean_is_exclusive(v_date_4523_);
if (v_isSharedCheck_6358_ == 0)
{
lean_object* v_unused_6359_; 
v_unused_6359_ = lean_ctor_get(v_date_4523_, 36);
lean_dec(v_unused_6359_);
v___x_6352_ = v_date_4523_;
v_isShared_6353_ = v_isSharedCheck_6358_;
goto v_resetjp_6351_;
}
else
{
lean_inc(v_x_6350_);
lean_inc(v_X_6349_);
lean_inc(v_O_6348_);
lean_inc(v_v_6347_);
lean_inc(v_zabbrev_6346_);
lean_inc(v_z_6345_);
lean_inc(v_V_6344_);
lean_inc(v_N_6343_);
lean_inc(v_n_6342_);
lean_inc(v_A_6341_);
lean_inc(v_S_6340_);
lean_inc(v_s_6339_);
lean_inc(v_m_6338_);
lean_inc(v_H_6337_);
lean_inc(v_k_6336_);
lean_inc(v_K_6335_);
lean_inc(v_h_6334_);
lean_inc(v_B_6333_);
lean_inc(v_b_6332_);
lean_inc(v_a_6331_);
lean_inc(v_F_6330_);
lean_inc(v_c_6329_);
lean_inc(v_e_6328_);
lean_inc(v_E_6327_);
lean_inc(v_W_6326_);
lean_inc(v_w_6325_);
lean_inc(v_q_6324_);
lean_inc(v_Q_6323_);
lean_inc(v_d_6322_);
lean_inc(v_L_6321_);
lean_inc(v_M_6320_);
lean_inc(v_D_6319_);
lean_inc(v_Y_6318_);
lean_inc(v_u_6317_);
lean_inc(v_y_6316_);
lean_inc(v_G_6315_);
lean_dec(v_date_4523_);
v___x_6352_ = lean_box(0);
v_isShared_6353_ = v_isSharedCheck_6358_;
goto v_resetjp_6351_;
}
v_resetjp_6351_:
{
lean_object* v___x_6354_; lean_object* v___x_6356_; 
v___x_6354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6354_, 0, v_data_4525_);
if (v_isShared_6353_ == 0)
{
lean_ctor_set(v___x_6352_, 36, v___x_6354_);
v___x_6356_ = v___x_6352_;
goto v_reusejp_6355_;
}
else
{
lean_object* v_reuseFailAlloc_6357_; 
v_reuseFailAlloc_6357_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6357_, 0, v_G_6315_);
lean_ctor_set(v_reuseFailAlloc_6357_, 1, v_y_6316_);
lean_ctor_set(v_reuseFailAlloc_6357_, 2, v_u_6317_);
lean_ctor_set(v_reuseFailAlloc_6357_, 3, v_Y_6318_);
lean_ctor_set(v_reuseFailAlloc_6357_, 4, v_D_6319_);
lean_ctor_set(v_reuseFailAlloc_6357_, 5, v_M_6320_);
lean_ctor_set(v_reuseFailAlloc_6357_, 6, v_L_6321_);
lean_ctor_set(v_reuseFailAlloc_6357_, 7, v_d_6322_);
lean_ctor_set(v_reuseFailAlloc_6357_, 8, v_Q_6323_);
lean_ctor_set(v_reuseFailAlloc_6357_, 9, v_q_6324_);
lean_ctor_set(v_reuseFailAlloc_6357_, 10, v_w_6325_);
lean_ctor_set(v_reuseFailAlloc_6357_, 11, v_W_6326_);
lean_ctor_set(v_reuseFailAlloc_6357_, 12, v_E_6327_);
lean_ctor_set(v_reuseFailAlloc_6357_, 13, v_e_6328_);
lean_ctor_set(v_reuseFailAlloc_6357_, 14, v_c_6329_);
lean_ctor_set(v_reuseFailAlloc_6357_, 15, v_F_6330_);
lean_ctor_set(v_reuseFailAlloc_6357_, 16, v_a_6331_);
lean_ctor_set(v_reuseFailAlloc_6357_, 17, v_b_6332_);
lean_ctor_set(v_reuseFailAlloc_6357_, 18, v_B_6333_);
lean_ctor_set(v_reuseFailAlloc_6357_, 19, v_h_6334_);
lean_ctor_set(v_reuseFailAlloc_6357_, 20, v_K_6335_);
lean_ctor_set(v_reuseFailAlloc_6357_, 21, v_k_6336_);
lean_ctor_set(v_reuseFailAlloc_6357_, 22, v_H_6337_);
lean_ctor_set(v_reuseFailAlloc_6357_, 23, v_m_6338_);
lean_ctor_set(v_reuseFailAlloc_6357_, 24, v_s_6339_);
lean_ctor_set(v_reuseFailAlloc_6357_, 25, v_S_6340_);
lean_ctor_set(v_reuseFailAlloc_6357_, 26, v_A_6341_);
lean_ctor_set(v_reuseFailAlloc_6357_, 27, v_n_6342_);
lean_ctor_set(v_reuseFailAlloc_6357_, 28, v_N_6343_);
lean_ctor_set(v_reuseFailAlloc_6357_, 29, v_V_6344_);
lean_ctor_set(v_reuseFailAlloc_6357_, 30, v_z_6345_);
lean_ctor_set(v_reuseFailAlloc_6357_, 31, v_zabbrev_6346_);
lean_ctor_set(v_reuseFailAlloc_6357_, 32, v_v_6347_);
lean_ctor_set(v_reuseFailAlloc_6357_, 33, v_O_6348_);
lean_ctor_set(v_reuseFailAlloc_6357_, 34, v_X_6349_);
lean_ctor_set(v_reuseFailAlloc_6357_, 35, v_x_6350_);
lean_ctor_set(v_reuseFailAlloc_6357_, 36, v___x_6354_);
v___x_6356_ = v_reuseFailAlloc_6357_;
goto v_reusejp_6355_;
}
v_reusejp_6355_:
{
return v___x_6356_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra(lean_object* v_year_6360_, uint8_t v_x_6361_){
_start:
{
if (v_x_6361_ == 0)
{
lean_object* v___x_6362_; lean_object* v___x_6363_; lean_object* v___x_6364_; 
v___x_6362_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6363_ = lean_int_add(v_year_6360_, v___x_6362_);
v___x_6364_ = lean_int_neg(v___x_6363_);
lean_dec(v___x_6363_);
return v___x_6364_;
}
else
{
lean_inc(v_year_6360_);
return v_year_6360_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra___boxed(lean_object* v_year_6365_, lean_object* v_x_6366_){
_start:
{
uint8_t v_x_42__boxed_6367_; lean_object* v_res_6368_; 
v_x_42__boxed_6367_ = lean_unbox(v_x_6366_);
v_res_6368_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra(v_year_6365_, v_x_42__boxed_6367_);
lean_dec(v_year_6365_);
return v_res_6368_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfDayPeriod(uint8_t v_x_6369_){
_start:
{
switch(v_x_6369_)
{
case 1:
{
uint8_t v___x_6370_; 
v___x_6370_ = 1;
return v___x_6370_;
}
case 2:
{
uint8_t v___x_6371_; 
v___x_6371_ = 1;
return v___x_6371_;
}
default: 
{
uint8_t v___x_6372_; 
v___x_6372_ = 0;
return v___x_6372_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfDayPeriod___boxed(lean_object* v_x_6373_){
_start:
{
uint8_t v_x_28__boxed_6374_; uint8_t v_res_6375_; lean_object* v_r_6376_; 
v_x_28__boxed_6374_ = lean_unbox(v_x_6373_);
v_res_6375_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfDayPeriod(v_x_28__boxed_6374_);
v_r_6376_ = lean_box(v_res_6375_);
return v_r_6376_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfExtendedDayPeriod(uint8_t v_x_6377_){
_start:
{
switch(v_x_6377_)
{
case 3:
{
uint8_t v___x_6378_; 
v___x_6378_ = 1;
return v___x_6378_;
}
case 4:
{
uint8_t v___x_6379_; 
v___x_6379_ = 1;
return v___x_6379_;
}
case 5:
{
uint8_t v___x_6380_; 
v___x_6380_ = 1;
return v___x_6380_;
}
default: 
{
uint8_t v___x_6381_; 
v___x_6381_ = 0;
return v___x_6381_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfExtendedDayPeriod___boxed(lean_object* v_x_6382_){
_start:
{
uint8_t v_x_38__boxed_6383_; uint8_t v_res_6384_; lean_object* v_r_6385_; 
v_x_38__boxed_6383_ = lean_unbox(v_x_6382_);
v_res_6384_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfExtendedDayPeriod(v_x_38__boxed_6383_);
v_r_6385_ = lean_box(v_res_6384_);
return v_r_6385_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0(lean_object* v_val_6386_, lean_object* v_x_6387_){
_start:
{
lean_inc_ref(v_val_6386_);
return v_val_6386_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___boxed(lean_object* v_val_6388_, lean_object* v_x_6389_){
_start:
{
lean_object* v_res_6390_; 
v_res_6390_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0(v_val_6388_, v_x_6389_);
lean_dec_ref(v_val_6388_);
return v_res_6390_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__1(lean_object* v___y_6391_, lean_object* v_00___6392_){
_start:
{
uint8_t v___x_6393_; lean_object* v___x_6394_; 
v___x_6393_ = 1;
v___x_6394_ = l_Std_Time_TimeZone_Offset_toIsoString(v___y_6391_, v___x_6393_);
return v___x_6394_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__1(void){
_start:
{
lean_object* v___x_6397_; lean_object* v___x_6398_; 
v___x_6397_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6398_ = lean_int_neg(v___x_6397_);
return v___x_6398_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__2(void){
_start:
{
lean_object* v___x_6399_; lean_object* v___x_6400_; 
v___x_6399_ = lean_unsigned_to_nat(1000000u);
v___x_6400_ = lean_nat_to_int(v___x_6399_);
return v___x_6400_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__3(void){
_start:
{
lean_object* v___x_6401_; uint8_t v___x_6402_; lean_object* v___x_6403_; 
v___x_6401_ = lean_unsigned_to_nat(0u);
v___x_6402_ = 1;
v___x_6403_ = l_Std_Time_Second_instOfNatOrdinal(v___x_6402_, v___x_6401_);
return v___x_6403_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__4(void){
_start:
{
lean_object* v___x_6404_; lean_object* v___x_6405_; lean_object* v___x_6406_; 
v___x_6404_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5);
v___x_6405_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6406_ = lean_int_add(v___x_6405_, v___x_6404_);
return v___x_6406_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5(void){
_start:
{
lean_object* v___x_6407_; lean_object* v___x_6408_; lean_object* v___x_6409_; 
v___x_6407_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6408_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__4, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__4_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__4);
v___x_6409_ = lean_int_sub(v___x_6408_, v___x_6407_);
return v___x_6409_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6(void){
_start:
{
lean_object* v___x_6410_; lean_object* v___x_6411_; lean_object* v_range_6412_; 
v___x_6410_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6411_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5);
v_range_6412_ = lean_int_add(v___x_6411_, v___x_6410_);
return v_range_6412_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__7(void){
_start:
{
lean_object* v___x_6413_; lean_object* v___x_6414_; 
v___x_6413_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6414_ = lean_int_sub(v___x_6413_, v___x_6413_);
return v___x_6414_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__8(void){
_start:
{
lean_object* v_range_6415_; lean_object* v___x_6416_; lean_object* v___x_6417_; 
v_range_6415_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6);
v___x_6416_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__7, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__7_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__7);
v___x_6417_ = lean_int_emod(v___x_6416_, v_range_6415_);
return v___x_6417_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__9(void){
_start:
{
lean_object* v_range_6418_; lean_object* v___x_6419_; lean_object* v___x_6420_; 
v_range_6418_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6);
v___x_6419_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__8, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__8_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__8);
v___x_6420_ = lean_int_add(v___x_6419_, v_range_6418_);
return v___x_6420_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__10(void){
_start:
{
lean_object* v_range_6421_; lean_object* v___x_6422_; lean_object* v___x_6423_; 
v_range_6421_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6);
v___x_6422_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__9, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__9_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__9);
v___x_6423_ = lean_int_emod(v___x_6422_, v_range_6421_);
return v___x_6423_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__11(void){
_start:
{
lean_object* v___x_6424_; lean_object* v___x_6425_; lean_object* v___x_6426_; 
v___x_6424_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6425_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__10, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__10_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__10);
v___x_6426_ = lean_int_add(v___x_6425_, v___x_6424_);
return v___x_6426_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__12(void){
_start:
{
lean_object* v___x_6427_; lean_object* v___x_6428_; 
v___x_6427_ = lean_unsigned_to_nat(30u);
v___x_6428_ = lean_nat_to_int(v___x_6427_);
return v___x_6428_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__13(void){
_start:
{
lean_object* v___x_6429_; lean_object* v___x_6430_; lean_object* v___x_6431_; 
v___x_6429_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__12, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__12_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__12);
v___x_6430_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6431_ = lean_int_add(v___x_6430_, v___x_6429_);
return v___x_6431_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__14(void){
_start:
{
lean_object* v___x_6432_; lean_object* v___x_6433_; lean_object* v___x_6434_; 
v___x_6432_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6433_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__13, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__13_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__13);
v___x_6434_ = lean_int_sub(v___x_6433_, v___x_6432_);
return v___x_6434_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15(void){
_start:
{
lean_object* v___x_6435_; lean_object* v___x_6436_; lean_object* v_range_6437_; 
v___x_6435_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6436_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__14, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__14_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__14);
v_range_6437_ = lean_int_add(v___x_6436_, v___x_6435_);
return v_range_6437_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16(void){
_start:
{
lean_object* v___x_6438_; lean_object* v___x_6439_; lean_object* v___x_6440_; 
v___x_6438_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6439_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6440_ = lean_int_sub(v___x_6439_, v___x_6438_);
return v___x_6440_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__17(void){
_start:
{
lean_object* v_range_6441_; lean_object* v___x_6442_; lean_object* v___x_6443_; 
v_range_6441_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15);
v___x_6442_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16);
v___x_6443_ = lean_int_emod(v___x_6442_, v_range_6441_);
return v___x_6443_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__18(void){
_start:
{
lean_object* v_range_6444_; lean_object* v___x_6445_; lean_object* v___x_6446_; 
v_range_6444_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15);
v___x_6445_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__17, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__17_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__17);
v___x_6446_ = lean_int_add(v___x_6445_, v_range_6444_);
return v___x_6446_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__19(void){
_start:
{
lean_object* v_range_6447_; lean_object* v___x_6448_; lean_object* v___x_6449_; 
v_range_6447_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15);
v___x_6448_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__18, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__18_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__18);
v___x_6449_ = lean_int_emod(v___x_6448_, v_range_6447_);
return v___x_6449_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__20(void){
_start:
{
lean_object* v___x_6450_; lean_object* v___x_6451_; lean_object* v___x_6452_; 
v___x_6450_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6451_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__19, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__19_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__19);
v___x_6452_ = lean_int_add(v___x_6451_, v___x_6450_);
return v___x_6452_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__21(void){
_start:
{
lean_object* v___x_6453_; lean_object* v___x_6454_; 
v___x_6453_ = lean_unsigned_to_nat(11u);
v___x_6454_ = lean_nat_to_int(v___x_6453_);
return v___x_6454_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__22(void){
_start:
{
lean_object* v___x_6455_; lean_object* v___x_6456_; lean_object* v___x_6457_; 
v___x_6455_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__21, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__21_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__21);
v___x_6456_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6457_ = lean_int_add(v___x_6456_, v___x_6455_);
return v___x_6457_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__23(void){
_start:
{
lean_object* v___x_6458_; lean_object* v___x_6459_; lean_object* v___x_6460_; 
v___x_6458_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6459_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__22, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__22_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__22);
v___x_6460_ = lean_int_sub(v___x_6459_, v___x_6458_);
return v___x_6460_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24(void){
_start:
{
lean_object* v___x_6461_; lean_object* v___x_6462_; lean_object* v_range_6463_; 
v___x_6461_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6462_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__23, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__23_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__23);
v_range_6463_ = lean_int_add(v___x_6462_, v___x_6461_);
return v_range_6463_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__25(void){
_start:
{
lean_object* v_range_6464_; lean_object* v___x_6465_; lean_object* v___x_6466_; 
v_range_6464_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24);
v___x_6465_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16);
v___x_6466_ = lean_int_emod(v___x_6465_, v_range_6464_);
return v___x_6466_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__26(void){
_start:
{
lean_object* v_range_6467_; lean_object* v___x_6468_; lean_object* v___x_6469_; 
v_range_6467_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24);
v___x_6468_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__25, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__25_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__25);
v___x_6469_ = lean_int_add(v___x_6468_, v_range_6467_);
return v___x_6469_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__27(void){
_start:
{
lean_object* v_range_6470_; lean_object* v___x_6471_; lean_object* v___x_6472_; 
v_range_6470_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24);
v___x_6471_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__26, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__26_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__26);
v___x_6472_ = lean_int_emod(v___x_6471_, v_range_6470_);
return v___x_6472_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__28(void){
_start:
{
lean_object* v___x_6473_; lean_object* v___x_6474_; lean_object* v___x_6475_; 
v___x_6473_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6474_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__27, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__27_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__27);
v___x_6475_ = lean_int_add(v___x_6474_, v___x_6473_);
return v___x_6475_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build(lean_object* v_builder_6476_, lean_object* v_aw_6477_){
_start:
{
lean_object* v___y_6479_; lean_object* v___y_6480_; lean_object* v___y_6519_; lean_object* v___y_6520_; lean_object* v___y_6523_; lean_object* v___y_6524_; lean_object* v___y_6525_; lean_object* v___y_6526_; lean_object* v___y_6527_; uint8_t v___y_6528_; lean_object* v___y_6536_; lean_object* v___y_6537_; lean_object* v___y_6538_; lean_object* v___y_6539_; lean_object* v___y_6540_; lean_object* v_G_6551_; lean_object* v_y_6552_; lean_object* v_u_6553_; lean_object* v_Y_6554_; lean_object* v_M_6555_; lean_object* v_L_6556_; lean_object* v_d_6557_; lean_object* v_a_6558_; lean_object* v_b_6559_; lean_object* v_B_6560_; lean_object* v_h_6561_; lean_object* v_K_6562_; lean_object* v_k_6563_; lean_object* v_H_6564_; lean_object* v_m_6565_; lean_object* v_s_6566_; lean_object* v_S_6567_; lean_object* v_A_6568_; lean_object* v_n_6569_; lean_object* v_N_6570_; lean_object* v_V_6571_; lean_object* v_z_6572_; lean_object* v_zabbrev_6573_; lean_object* v_v_6574_; lean_object* v_O_6575_; lean_object* v_X_6576_; lean_object* v_x_6577_; lean_object* v_Z_6578_; lean_object* v___y_6580_; lean_object* v___y_6581_; lean_object* v___y_6582_; lean_object* v___y_6583_; lean_object* v___y_6584_; lean_object* v___y_6585_; lean_object* v___y_6586_; lean_object* v___y_6587_; lean_object* v___y_6596_; lean_object* v___y_6597_; lean_object* v___y_6598_; lean_object* v___y_6599_; lean_object* v___y_6600_; lean_object* v___y_6601_; lean_object* v___y_6602_; lean_object* v___y_6607_; lean_object* v___y_6608_; lean_object* v___y_6609_; lean_object* v___y_6610_; lean_object* v___y_6611_; lean_object* v___y_6612_; lean_object* v___y_6616_; lean_object* v___y_6617_; lean_object* v___y_6618_; lean_object* v___y_6619_; lean_object* v___y_6620_; lean_object* v___y_6624_; lean_object* v___y_6625_; lean_object* v___y_6626_; lean_object* v___y_6627_; lean_object* v___y_6635_; lean_object* v___y_6636_; lean_object* v___y_6637_; lean_object* v___y_6638_; uint8_t v_val_6639_; lean_object* v___y_6647_; lean_object* v___y_6648_; lean_object* v___y_6649_; lean_object* v___y_6650_; lean_object* v___y_6660_; lean_object* v___y_6661_; lean_object* v___y_6662_; uint8_t v___y_6663_; lean_object* v___y_6670_; lean_object* v___y_6671_; lean_object* v___y_6672_; lean_object* v___y_6677_; lean_object* v___y_6678_; lean_object* v___y_6682_; lean_object* v___y_6683_; lean_object* v___y_6684_; lean_object* v___y_6691_; lean_object* v___y_6692_; lean_object* v___y_6693_; lean_object* v___y_6698_; 
v_G_6551_ = lean_ctor_get(v_builder_6476_, 0);
lean_inc(v_G_6551_);
v_y_6552_ = lean_ctor_get(v_builder_6476_, 1);
lean_inc(v_y_6552_);
v_u_6553_ = lean_ctor_get(v_builder_6476_, 2);
lean_inc(v_u_6553_);
v_Y_6554_ = lean_ctor_get(v_builder_6476_, 3);
lean_inc(v_Y_6554_);
v_M_6555_ = lean_ctor_get(v_builder_6476_, 5);
lean_inc(v_M_6555_);
v_L_6556_ = lean_ctor_get(v_builder_6476_, 6);
lean_inc(v_L_6556_);
v_d_6557_ = lean_ctor_get(v_builder_6476_, 7);
lean_inc(v_d_6557_);
v_a_6558_ = lean_ctor_get(v_builder_6476_, 16);
lean_inc(v_a_6558_);
v_b_6559_ = lean_ctor_get(v_builder_6476_, 17);
lean_inc(v_b_6559_);
v_B_6560_ = lean_ctor_get(v_builder_6476_, 18);
lean_inc(v_B_6560_);
v_h_6561_ = lean_ctor_get(v_builder_6476_, 19);
lean_inc(v_h_6561_);
v_K_6562_ = lean_ctor_get(v_builder_6476_, 20);
lean_inc(v_K_6562_);
v_k_6563_ = lean_ctor_get(v_builder_6476_, 21);
lean_inc(v_k_6563_);
v_H_6564_ = lean_ctor_get(v_builder_6476_, 22);
lean_inc(v_H_6564_);
v_m_6565_ = lean_ctor_get(v_builder_6476_, 23);
lean_inc(v_m_6565_);
v_s_6566_ = lean_ctor_get(v_builder_6476_, 24);
lean_inc(v_s_6566_);
v_S_6567_ = lean_ctor_get(v_builder_6476_, 25);
lean_inc(v_S_6567_);
v_A_6568_ = lean_ctor_get(v_builder_6476_, 26);
lean_inc(v_A_6568_);
v_n_6569_ = lean_ctor_get(v_builder_6476_, 27);
lean_inc(v_n_6569_);
v_N_6570_ = lean_ctor_get(v_builder_6476_, 28);
lean_inc(v_N_6570_);
v_V_6571_ = lean_ctor_get(v_builder_6476_, 29);
lean_inc(v_V_6571_);
v_z_6572_ = lean_ctor_get(v_builder_6476_, 30);
lean_inc(v_z_6572_);
v_zabbrev_6573_ = lean_ctor_get(v_builder_6476_, 31);
lean_inc(v_zabbrev_6573_);
v_v_6574_ = lean_ctor_get(v_builder_6476_, 32);
lean_inc(v_v_6574_);
v_O_6575_ = lean_ctor_get(v_builder_6476_, 33);
lean_inc(v_O_6575_);
v_X_6576_ = lean_ctor_get(v_builder_6476_, 34);
lean_inc(v_X_6576_);
v_x_6577_ = lean_ctor_get(v_builder_6476_, 35);
lean_inc(v_x_6577_);
v_Z_6578_ = lean_ctor_get(v_builder_6476_, 36);
lean_inc(v_Z_6578_);
lean_dec_ref(v_builder_6476_);
if (lean_obj_tag(v_O_6575_) == 0)
{
if (lean_obj_tag(v_X_6576_) == 0)
{
if (lean_obj_tag(v_x_6577_) == 0)
{
if (lean_obj_tag(v_Z_6578_) == 0)
{
lean_object* v___x_6705_; 
v___x_6705_ = l_Std_Time_TimeZone_Offset_zero;
v___y_6698_ = v___x_6705_;
goto v___jp_6697_;
}
else
{
lean_object* v_val_6706_; 
v_val_6706_ = lean_ctor_get(v_Z_6578_, 0);
lean_inc(v_val_6706_);
lean_dec_ref_known(v_Z_6578_, 1);
v___y_6698_ = v_val_6706_;
goto v___jp_6697_;
}
}
else
{
lean_object* v_val_6707_; 
lean_dec(v_Z_6578_);
v_val_6707_ = lean_ctor_get(v_x_6577_, 0);
lean_inc(v_val_6707_);
lean_dec_ref_known(v_x_6577_, 1);
v___y_6698_ = v_val_6707_;
goto v___jp_6697_;
}
}
else
{
lean_object* v_val_6708_; 
lean_dec(v_Z_6578_);
lean_dec(v_x_6577_);
v_val_6708_ = lean_ctor_get(v_X_6576_, 0);
lean_inc(v_val_6708_);
lean_dec_ref_known(v_X_6576_, 1);
v___y_6698_ = v_val_6708_;
goto v___jp_6697_;
}
}
else
{
lean_object* v_val_6709_; 
lean_dec(v_Z_6578_);
lean_dec(v_x_6577_);
lean_dec(v_X_6576_);
v_val_6709_ = lean_ctor_get(v_O_6575_, 0);
lean_inc(v_val_6709_);
lean_dec_ref_known(v_O_6575_, 1);
v___y_6698_ = v_val_6709_;
goto v___jp_6697_;
}
v___jp_6478_:
{
if (lean_obj_tag(v___y_6479_) == 0)
{
lean_object* v___x_6481_; 
lean_dec_ref(v___y_6480_);
v___x_6481_ = lean_box(0);
return v___x_6481_;
}
else
{
lean_object* v_val_6482_; lean_object* v___x_6484_; uint8_t v_isShared_6485_; uint8_t v_isSharedCheck_6517_; 
v_val_6482_ = lean_ctor_get(v___y_6479_, 0);
v_isSharedCheck_6517_ = !lean_is_exclusive(v___y_6479_);
if (v_isSharedCheck_6517_ == 0)
{
v___x_6484_ = v___y_6479_;
v_isShared_6485_ = v_isSharedCheck_6517_;
goto v_resetjp_6483_;
}
else
{
lean_inc(v_val_6482_);
lean_dec(v___y_6479_);
v___x_6484_ = lean_box(0);
v_isShared_6485_ = v_isSharedCheck_6517_;
goto v_resetjp_6483_;
}
v_resetjp_6483_:
{
lean_object* v_offset_6486_; lean_object* v_name_6487_; lean_object* v_abbreviation_6488_; uint8_t v_isDST_6489_; uint8_t v___x_6490_; uint8_t v___x_6491_; lean_object* v_ltt_6492_; lean_object* v___x_6493_; lean_object* v___x_6494_; lean_object* v___x_6495_; lean_object* v_wt_6496_; lean_object* v_ltt_6497_; lean_object* v_tz_6498_; lean_object* v_offset_6499_; lean_object* v_second_6500_; lean_object* v_nano_6501_; lean_object* v___f_6502_; lean_object* v___x_6503_; lean_object* v___x_6504_; lean_object* v___x_6505_; lean_object* v___x_6506_; lean_object* v___x_6507_; lean_object* v_nanos_6508_; lean_object* v___x_6509_; lean_object* v_nanos_6510_; lean_object* v___x_6511_; lean_object* v___x_6512_; lean_object* v___x_6513_; lean_object* v___x_6515_; 
v_offset_6486_ = lean_ctor_get(v___y_6480_, 0);
lean_inc(v_offset_6486_);
v_name_6487_ = lean_ctor_get(v___y_6480_, 1);
lean_inc_ref(v_name_6487_);
v_abbreviation_6488_ = lean_ctor_get(v___y_6480_, 2);
lean_inc_ref(v_abbreviation_6488_);
v_isDST_6489_ = lean_ctor_get_uint8(v___y_6480_, sizeof(void*)*3);
lean_dec_ref(v___y_6480_);
v___x_6490_ = 0;
v___x_6491_ = 1;
v_ltt_6492_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_ltt_6492_, 0, v_offset_6486_);
lean_ctor_set(v_ltt_6492_, 1, v_abbreviation_6488_);
lean_ctor_set(v_ltt_6492_, 2, v_name_6487_);
lean_ctor_set_uint8(v_ltt_6492_, sizeof(void*)*3, v_isDST_6489_);
lean_ctor_set_uint8(v_ltt_6492_, sizeof(void*)*3 + 1, v___x_6490_);
lean_ctor_set_uint8(v_ltt_6492_, sizeof(void*)*3 + 2, v___x_6491_);
v___x_6493_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__0));
v___x_6494_ = lean_box(0);
v___x_6495_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6495_, 0, v_ltt_6492_);
lean_ctor_set(v___x_6495_, 1, v___x_6493_);
lean_ctor_set(v___x_6495_, 2, v___x_6494_);
lean_inc(v_val_6482_);
v_wt_6496_ = l_Std_Time_PlainDateTime_toWallTime(v_val_6482_);
lean_inc_ref(v___x_6495_);
v_ltt_6497_ = l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime(v___x_6495_, v_wt_6496_);
v_tz_6498_ = l_Std_Time_TimeZone_LocalTimeType_getTimeZone(v_ltt_6497_);
lean_dec_ref(v_ltt_6497_);
v_offset_6499_ = lean_ctor_get(v_tz_6498_, 0);
v_second_6500_ = lean_ctor_get(v_wt_6496_, 0);
lean_inc(v_second_6500_);
v_nano_6501_ = lean_ctor_get(v_wt_6496_, 1);
lean_inc(v_nano_6501_);
lean_dec_ref(v_wt_6496_);
v___f_6502_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___boxed), 2, 1);
lean_closure_set(v___f_6502_, 0, v_val_6482_);
v___x_6503_ = lean_mk_thunk(v___f_6502_);
v___x_6504_ = lean_int_neg(v_offset_6499_);
v___x_6505_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__1);
v___x_6506_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1);
v___x_6507_ = lean_int_mul(v_second_6500_, v___x_6506_);
lean_dec(v_second_6500_);
v_nanos_6508_ = lean_int_add(v___x_6507_, v_nano_6501_);
lean_dec(v_nano_6501_);
lean_dec(v___x_6507_);
v___x_6509_ = lean_int_mul(v___x_6504_, v___x_6506_);
lean_dec(v___x_6504_);
v_nanos_6510_ = lean_int_add(v___x_6509_, v___x_6505_);
lean_dec(v___x_6509_);
v___x_6511_ = lean_int_add(v_nanos_6508_, v_nanos_6510_);
lean_dec(v_nanos_6510_);
lean_dec(v_nanos_6508_);
v___x_6512_ = l_Std_Time_Duration_ofNanoseconds(v___x_6511_);
lean_dec(v___x_6511_);
v___x_6513_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6513_, 0, v___x_6503_);
lean_ctor_set(v___x_6513_, 1, v___x_6512_);
lean_ctor_set(v___x_6513_, 2, v___x_6495_);
lean_ctor_set(v___x_6513_, 3, v_tz_6498_);
if (v_isShared_6485_ == 0)
{
lean_ctor_set(v___x_6484_, 0, v___x_6513_);
v___x_6515_ = v___x_6484_;
goto v_reusejp_6514_;
}
else
{
lean_object* v_reuseFailAlloc_6516_; 
v_reuseFailAlloc_6516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6516_, 0, v___x_6513_);
v___x_6515_ = v_reuseFailAlloc_6516_;
goto v_reusejp_6514_;
}
v_reusejp_6514_:
{
return v___x_6515_;
}
}
}
}
v___jp_6518_:
{
if (lean_obj_tag(v_aw_6477_) == 0)
{
lean_object* v_a_6521_; 
lean_dec_ref(v___y_6519_);
v_a_6521_ = lean_ctor_get(v_aw_6477_, 0);
lean_inc_ref(v_a_6521_);
lean_dec_ref_known(v_aw_6477_, 1);
v___y_6479_ = v___y_6520_;
v___y_6480_ = v_a_6521_;
goto v___jp_6478_;
}
else
{
v___y_6479_ = v___y_6520_;
v___y_6480_ = v___y_6519_;
goto v___jp_6478_;
}
}
v___jp_6522_:
{
lean_object* v___x_6529_; uint8_t v___x_6530_; 
v___x_6529_ = l_Std_Time_Month_Ordinal_days(v___y_6528_, v___y_6525_);
v___x_6530_ = lean_int_dec_le(v___y_6523_, v___x_6529_);
lean_dec(v___x_6529_);
if (v___x_6530_ == 0)
{
lean_object* v___x_6531_; 
lean_dec_ref(v___y_6526_);
lean_dec(v___y_6525_);
lean_dec(v___y_6524_);
lean_dec(v___y_6523_);
v___x_6531_ = lean_box(0);
v___y_6519_ = v___y_6527_;
v___y_6520_ = v___x_6531_;
goto v___jp_6518_;
}
else
{
lean_object* v_date_6532_; lean_object* v___x_6533_; lean_object* v___x_6534_; 
v_date_6532_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_date_6532_, 0, v___y_6524_);
lean_ctor_set(v_date_6532_, 1, v___y_6525_);
lean_ctor_set(v_date_6532_, 2, v___y_6523_);
v___x_6533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6533_, 0, v_date_6532_);
lean_ctor_set(v___x_6533_, 1, v___y_6526_);
v___x_6534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6534_, 0, v___x_6533_);
v___y_6519_ = v___y_6527_;
v___y_6520_ = v___x_6534_;
goto v___jp_6518_;
}
}
v___jp_6535_:
{
lean_object* v___x_6541_; lean_object* v___x_6542_; lean_object* v___x_6543_; uint8_t v___x_6544_; lean_object* v___x_6545_; lean_object* v___x_6546_; uint8_t v___x_6547_; 
v___x_6541_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0);
v___x_6542_ = lean_int_mod(v___y_6537_, v___x_6541_);
v___x_6543_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6544_ = lean_int_dec_eq(v___x_6542_, v___x_6543_);
lean_dec(v___x_6542_);
v___x_6545_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0);
v___x_6546_ = lean_int_mod(v___y_6537_, v___x_6545_);
v___x_6547_ = lean_int_dec_eq(v___x_6546_, v___x_6543_);
lean_dec(v___x_6546_);
if (v___x_6547_ == 0)
{
v___y_6523_ = v___y_6536_;
v___y_6524_ = v___y_6537_;
v___y_6525_ = v___y_6538_;
v___y_6526_ = v___y_6540_;
v___y_6527_ = v___y_6539_;
v___y_6528_ = v___x_6544_;
goto v___jp_6522_;
}
else
{
if (v___x_6544_ == 0)
{
v___y_6523_ = v___y_6536_;
v___y_6524_ = v___y_6537_;
v___y_6525_ = v___y_6538_;
v___y_6526_ = v___y_6540_;
v___y_6527_ = v___y_6539_;
v___y_6528_ = v___x_6544_;
goto v___jp_6522_;
}
else
{
lean_object* v___x_6548_; lean_object* v___x_6549_; uint8_t v___x_6550_; 
v___x_6548_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1);
v___x_6549_ = lean_int_mod(v___y_6537_, v___x_6548_);
v___x_6550_ = lean_int_dec_eq(v___x_6549_, v___x_6543_);
lean_dec(v___x_6549_);
v___y_6523_ = v___y_6536_;
v___y_6524_ = v___y_6537_;
v___y_6525_ = v___y_6538_;
v___y_6526_ = v___y_6540_;
v___y_6527_ = v___y_6539_;
v___y_6528_ = v___x_6550_;
goto v___jp_6522_;
}
}
}
v___jp_6579_:
{
if (lean_obj_tag(v_N_6570_) == 0)
{
if (lean_obj_tag(v_A_6568_) == 0)
{
lean_object* v___x_6588_; 
v___x_6588_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6588_, 0, v___y_6585_);
lean_ctor_set(v___x_6588_, 1, v___y_6582_);
lean_ctor_set(v___x_6588_, 2, v___y_6584_);
lean_ctor_set(v___x_6588_, 3, v___y_6587_);
v___y_6536_ = v___y_6580_;
v___y_6537_ = v___y_6581_;
v___y_6538_ = v___y_6583_;
v___y_6539_ = v___y_6586_;
v___y_6540_ = v___x_6588_;
goto v___jp_6535_;
}
else
{
lean_object* v_val_6589_; lean_object* v___x_6590_; lean_object* v___x_6591_; lean_object* v___x_6592_; 
lean_dec(v___y_6587_);
lean_dec(v___y_6585_);
lean_dec(v___y_6584_);
lean_dec(v___y_6582_);
v_val_6589_ = lean_ctor_get(v_A_6568_, 0);
lean_inc(v_val_6589_);
lean_dec_ref_known(v_A_6568_, 1);
v___x_6590_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__2);
v___x_6591_ = lean_int_mul(v_val_6589_, v___x_6590_);
lean_dec(v_val_6589_);
v___x_6592_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_6591_);
lean_dec(v___x_6591_);
v___y_6536_ = v___y_6580_;
v___y_6537_ = v___y_6581_;
v___y_6538_ = v___y_6583_;
v___y_6539_ = v___y_6586_;
v___y_6540_ = v___x_6592_;
goto v___jp_6535_;
}
}
else
{
lean_object* v_val_6593_; lean_object* v___x_6594_; 
lean_dec(v___y_6587_);
lean_dec(v___y_6585_);
lean_dec(v___y_6584_);
lean_dec(v___y_6582_);
lean_dec(v_A_6568_);
v_val_6593_ = lean_ctor_get(v_N_6570_, 0);
lean_inc(v_val_6593_);
lean_dec_ref_known(v_N_6570_, 1);
v___x_6594_ = l_Std_Time_PlainTime_ofNanoseconds(v_val_6593_);
lean_dec(v_val_6593_);
v___y_6536_ = v___y_6580_;
v___y_6537_ = v___y_6581_;
v___y_6538_ = v___y_6583_;
v___y_6539_ = v___y_6586_;
v___y_6540_ = v___x_6594_;
goto v___jp_6535_;
}
}
v___jp_6595_:
{
if (lean_obj_tag(v_n_6569_) == 0)
{
if (lean_obj_tag(v_S_6567_) == 0)
{
lean_object* v___x_6603_; 
v___x_6603_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___y_6580_ = v___y_6596_;
v___y_6581_ = v___y_6597_;
v___y_6582_ = v___y_6598_;
v___y_6583_ = v___y_6599_;
v___y_6584_ = v___y_6602_;
v___y_6585_ = v___y_6600_;
v___y_6586_ = v___y_6601_;
v___y_6587_ = v___x_6603_;
goto v___jp_6579_;
}
else
{
lean_object* v_val_6604_; 
v_val_6604_ = lean_ctor_get(v_S_6567_, 0);
lean_inc(v_val_6604_);
lean_dec_ref_known(v_S_6567_, 1);
v___y_6580_ = v___y_6596_;
v___y_6581_ = v___y_6597_;
v___y_6582_ = v___y_6598_;
v___y_6583_ = v___y_6599_;
v___y_6584_ = v___y_6602_;
v___y_6585_ = v___y_6600_;
v___y_6586_ = v___y_6601_;
v___y_6587_ = v_val_6604_;
goto v___jp_6579_;
}
}
else
{
lean_object* v_val_6605_; 
lean_dec(v_S_6567_);
v_val_6605_ = lean_ctor_get(v_n_6569_, 0);
lean_inc(v_val_6605_);
lean_dec_ref_known(v_n_6569_, 1);
v___y_6580_ = v___y_6596_;
v___y_6581_ = v___y_6597_;
v___y_6582_ = v___y_6598_;
v___y_6583_ = v___y_6599_;
v___y_6584_ = v___y_6602_;
v___y_6585_ = v___y_6600_;
v___y_6586_ = v___y_6601_;
v___y_6587_ = v_val_6605_;
goto v___jp_6579_;
}
}
v___jp_6606_:
{
if (lean_obj_tag(v_s_6566_) == 0)
{
lean_object* v___x_6613_; 
v___x_6613_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__3, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__3_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__3);
v___y_6596_ = v___y_6607_;
v___y_6597_ = v___y_6608_;
v___y_6598_ = v___y_6612_;
v___y_6599_ = v___y_6609_;
v___y_6600_ = v___y_6610_;
v___y_6601_ = v___y_6611_;
v___y_6602_ = v___x_6613_;
goto v___jp_6595_;
}
else
{
lean_object* v_val_6614_; 
v_val_6614_ = lean_ctor_get(v_s_6566_, 0);
lean_inc(v_val_6614_);
lean_dec_ref_known(v_s_6566_, 1);
v___y_6596_ = v___y_6607_;
v___y_6597_ = v___y_6608_;
v___y_6598_ = v___y_6612_;
v___y_6599_ = v___y_6609_;
v___y_6600_ = v___y_6610_;
v___y_6601_ = v___y_6611_;
v___y_6602_ = v_val_6614_;
goto v___jp_6595_;
}
}
v___jp_6615_:
{
if (lean_obj_tag(v_m_6565_) == 0)
{
lean_object* v___x_6621_; 
v___x_6621_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__11, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__11_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__11);
v___y_6607_ = v___y_6616_;
v___y_6608_ = v___y_6617_;
v___y_6609_ = v___y_6618_;
v___y_6610_ = v___y_6620_;
v___y_6611_ = v___y_6619_;
v___y_6612_ = v___x_6621_;
goto v___jp_6606_;
}
else
{
lean_object* v_val_6622_; 
v_val_6622_ = lean_ctor_get(v_m_6565_, 0);
lean_inc(v_val_6622_);
lean_dec_ref_known(v_m_6565_, 1);
v___y_6607_ = v___y_6616_;
v___y_6608_ = v___y_6617_;
v___y_6609_ = v___y_6618_;
v___y_6610_ = v___y_6620_;
v___y_6611_ = v___y_6619_;
v___y_6612_ = v_val_6622_;
goto v___jp_6606_;
}
}
v___jp_6623_:
{
if (lean_obj_tag(v_k_6563_) == 0)
{
if (lean_obj_tag(v_H_6564_) == 0)
{
lean_object* v___x_6628_; 
v___x_6628_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___y_6616_ = v___y_6624_;
v___y_6617_ = v___y_6625_;
v___y_6618_ = v___y_6626_;
v___y_6619_ = v___y_6627_;
v___y_6620_ = v___x_6628_;
goto v___jp_6615_;
}
else
{
lean_object* v_val_6629_; 
v_val_6629_ = lean_ctor_get(v_H_6564_, 0);
lean_inc(v_val_6629_);
lean_dec_ref_known(v_H_6564_, 1);
v___y_6616_ = v___y_6624_;
v___y_6617_ = v___y_6625_;
v___y_6618_ = v___y_6626_;
v___y_6619_ = v___y_6627_;
v___y_6620_ = v_val_6629_;
goto v___jp_6615_;
}
}
else
{
if (lean_obj_tag(v_H_6564_) == 0)
{
lean_object* v_val_6630_; lean_object* v___x_6631_; lean_object* v___x_6632_; 
v_val_6630_ = lean_ctor_get(v_k_6563_, 0);
lean_inc(v_val_6630_);
lean_dec_ref_known(v_k_6563_, 1);
v___x_6631_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_6632_ = lean_int_add(v_val_6630_, v___x_6631_);
lean_dec(v_val_6630_);
v___y_6616_ = v___y_6624_;
v___y_6617_ = v___y_6625_;
v___y_6618_ = v___y_6626_;
v___y_6619_ = v___y_6627_;
v___y_6620_ = v___x_6632_;
goto v___jp_6615_;
}
else
{
lean_object* v_val_6633_; 
lean_dec_ref_known(v_k_6563_, 1);
v_val_6633_ = lean_ctor_get(v_H_6564_, 0);
lean_inc(v_val_6633_);
lean_dec_ref_known(v_H_6564_, 1);
v___y_6616_ = v___y_6624_;
v___y_6617_ = v___y_6625_;
v___y_6618_ = v___y_6626_;
v___y_6619_ = v___y_6627_;
v___y_6620_ = v_val_6633_;
goto v___jp_6615_;
}
}
}
v___jp_6634_:
{
if (lean_obj_tag(v_h_6561_) == 0)
{
if (lean_obj_tag(v_K_6562_) == 0)
{
v___y_6624_ = v___y_6635_;
v___y_6625_ = v___y_6636_;
v___y_6626_ = v___y_6637_;
v___y_6627_ = v___y_6638_;
goto v___jp_6623_;
}
else
{
lean_object* v_val_6640_; lean_object* v___x_6641_; lean_object* v___x_6642_; lean_object* v___x_6643_; 
lean_dec(v_H_6564_);
lean_dec(v_k_6563_);
v_val_6640_ = lean_ctor_get(v_K_6562_, 0);
lean_inc(v_val_6640_);
lean_dec_ref_known(v_K_6562_, 1);
v___x_6641_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6642_ = lean_int_add(v_val_6640_, v___x_6641_);
lean_dec(v_val_6640_);
v___x_6643_ = l_Std_Time_HourMarker_toAbsolute(v_val_6639_, v___x_6642_);
lean_dec(v___x_6642_);
v___y_6616_ = v___y_6635_;
v___y_6617_ = v___y_6636_;
v___y_6618_ = v___y_6637_;
v___y_6619_ = v___y_6638_;
v___y_6620_ = v___x_6643_;
goto v___jp_6615_;
}
}
else
{
lean_object* v_val_6644_; lean_object* v___x_6645_; 
lean_dec(v_H_6564_);
lean_dec(v_k_6563_);
lean_dec(v_K_6562_);
v_val_6644_ = lean_ctor_get(v_h_6561_, 0);
lean_inc(v_val_6644_);
lean_dec_ref_known(v_h_6561_, 1);
v___x_6645_ = l_Std_Time_HourMarker_toAbsolute(v_val_6639_, v_val_6644_);
lean_dec(v_val_6644_);
v___y_6616_ = v___y_6635_;
v___y_6617_ = v___y_6636_;
v___y_6618_ = v___y_6637_;
v___y_6619_ = v___y_6638_;
v___y_6620_ = v___x_6645_;
goto v___jp_6615_;
}
}
v___jp_6646_:
{
if (lean_obj_tag(v_a_6558_) == 0)
{
if (lean_obj_tag(v_b_6559_) == 0)
{
if (lean_obj_tag(v_B_6560_) == 0)
{
lean_dec(v_K_6562_);
lean_dec(v_h_6561_);
v___y_6624_ = v___y_6647_;
v___y_6625_ = v___y_6650_;
v___y_6626_ = v___y_6648_;
v___y_6627_ = v___y_6649_;
goto v___jp_6623_;
}
else
{
lean_object* v_val_6651_; uint8_t v___x_6652_; uint8_t v___x_6653_; 
v_val_6651_ = lean_ctor_get(v_B_6560_, 0);
lean_inc(v_val_6651_);
lean_dec_ref_known(v_B_6560_, 1);
v___x_6652_ = lean_unbox(v_val_6651_);
lean_dec(v_val_6651_);
v___x_6653_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfExtendedDayPeriod(v___x_6652_);
v___y_6635_ = v___y_6647_;
v___y_6636_ = v___y_6650_;
v___y_6637_ = v___y_6648_;
v___y_6638_ = v___y_6649_;
v_val_6639_ = v___x_6653_;
goto v___jp_6634_;
}
}
else
{
lean_object* v_val_6654_; uint8_t v___x_6655_; uint8_t v___x_6656_; 
lean_dec(v_B_6560_);
v_val_6654_ = lean_ctor_get(v_b_6559_, 0);
lean_inc(v_val_6654_);
lean_dec_ref_known(v_b_6559_, 1);
v___x_6655_ = lean_unbox(v_val_6654_);
lean_dec(v_val_6654_);
v___x_6656_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfDayPeriod(v___x_6655_);
v___y_6635_ = v___y_6647_;
v___y_6636_ = v___y_6650_;
v___y_6637_ = v___y_6648_;
v___y_6638_ = v___y_6649_;
v_val_6639_ = v___x_6656_;
goto v___jp_6634_;
}
}
else
{
lean_object* v_val_6657_; uint8_t v___x_6658_; 
lean_dec(v_B_6560_);
lean_dec(v_b_6559_);
v_val_6657_ = lean_ctor_get(v_a_6558_, 0);
lean_inc(v_val_6657_);
lean_dec_ref_known(v_a_6558_, 1);
v___x_6658_ = lean_unbox(v_val_6657_);
lean_dec(v_val_6657_);
v___y_6635_ = v___y_6647_;
v___y_6636_ = v___y_6650_;
v___y_6637_ = v___y_6648_;
v___y_6638_ = v___y_6649_;
v_val_6639_ = v___x_6658_;
goto v___jp_6634_;
}
}
v___jp_6659_:
{
if (lean_obj_tag(v_u_6553_) == 0)
{
if (lean_obj_tag(v_y_6552_) == 0)
{
if (lean_obj_tag(v_Y_6554_) == 0)
{
lean_object* v___x_6664_; 
v___x_6664_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___y_6647_ = v___y_6660_;
v___y_6648_ = v___y_6661_;
v___y_6649_ = v___y_6662_;
v___y_6650_ = v___x_6664_;
goto v___jp_6646_;
}
else
{
lean_object* v_val_6665_; 
v_val_6665_ = lean_ctor_get(v_Y_6554_, 0);
lean_inc(v_val_6665_);
lean_dec_ref_known(v_Y_6554_, 1);
v___y_6647_ = v___y_6660_;
v___y_6648_ = v___y_6661_;
v___y_6649_ = v___y_6662_;
v___y_6650_ = v_val_6665_;
goto v___jp_6646_;
}
}
else
{
lean_object* v_val_6666_; lean_object* v___x_6667_; 
lean_dec(v_Y_6554_);
v_val_6666_ = lean_ctor_get(v_y_6552_, 0);
lean_inc(v_val_6666_);
lean_dec_ref_known(v_y_6552_, 1);
v___x_6667_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra(v_val_6666_, v___y_6663_);
lean_dec(v_val_6666_);
v___y_6647_ = v___y_6660_;
v___y_6648_ = v___y_6661_;
v___y_6649_ = v___y_6662_;
v___y_6650_ = v___x_6667_;
goto v___jp_6646_;
}
}
else
{
lean_object* v_val_6668_; 
lean_dec(v_Y_6554_);
lean_dec(v_y_6552_);
v_val_6668_ = lean_ctor_get(v_u_6553_, 0);
lean_inc(v_val_6668_);
lean_dec_ref_known(v_u_6553_, 1);
v___y_6647_ = v___y_6660_;
v___y_6648_ = v___y_6661_;
v___y_6649_ = v___y_6662_;
v___y_6650_ = v_val_6668_;
goto v___jp_6646_;
}
}
v___jp_6669_:
{
if (lean_obj_tag(v_G_6551_) == 0)
{
uint8_t v___x_6673_; 
v___x_6673_ = 1;
v___y_6660_ = v___y_6672_;
v___y_6661_ = v___y_6670_;
v___y_6662_ = v___y_6671_;
v___y_6663_ = v___x_6673_;
goto v___jp_6659_;
}
else
{
lean_object* v_val_6674_; uint8_t v___x_6675_; 
v_val_6674_ = lean_ctor_get(v_G_6551_, 0);
lean_inc(v_val_6674_);
lean_dec_ref_known(v_G_6551_, 1);
v___x_6675_ = lean_unbox(v_val_6674_);
lean_dec(v_val_6674_);
v___y_6660_ = v___y_6672_;
v___y_6661_ = v___y_6670_;
v___y_6662_ = v___y_6671_;
v___y_6663_ = v___x_6675_;
goto v___jp_6659_;
}
}
v___jp_6676_:
{
if (lean_obj_tag(v_d_6557_) == 0)
{
lean_object* v___x_6679_; 
v___x_6679_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__20, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__20_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__20);
v___y_6670_ = v___y_6678_;
v___y_6671_ = v___y_6677_;
v___y_6672_ = v___x_6679_;
goto v___jp_6669_;
}
else
{
lean_object* v_val_6680_; 
v_val_6680_ = lean_ctor_get(v_d_6557_, 0);
lean_inc(v_val_6680_);
lean_dec_ref_known(v_d_6557_, 1);
v___y_6670_ = v___y_6678_;
v___y_6671_ = v___y_6677_;
v___y_6672_ = v_val_6680_;
goto v___jp_6669_;
}
}
v___jp_6681_:
{
uint8_t v___x_6685_; lean_object* v_tz_6686_; 
v___x_6685_ = 0;
v_tz_6686_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_tz_6686_, 0, v___y_6683_);
lean_ctor_set(v_tz_6686_, 1, v___y_6682_);
lean_ctor_set(v_tz_6686_, 2, v___y_6684_);
lean_ctor_set_uint8(v_tz_6686_, sizeof(void*)*3, v___x_6685_);
if (lean_obj_tag(v_M_6555_) == 0)
{
if (lean_obj_tag(v_L_6556_) == 0)
{
lean_object* v___x_6687_; 
v___x_6687_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__28, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__28_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__28);
v___y_6677_ = v_tz_6686_;
v___y_6678_ = v___x_6687_;
goto v___jp_6676_;
}
else
{
lean_object* v_val_6688_; 
v_val_6688_ = lean_ctor_get(v_L_6556_, 0);
lean_inc(v_val_6688_);
lean_dec_ref_known(v_L_6556_, 1);
v___y_6677_ = v_tz_6686_;
v___y_6678_ = v_val_6688_;
goto v___jp_6676_;
}
}
else
{
lean_object* v_val_6689_; 
lean_dec(v_L_6556_);
v_val_6689_ = lean_ctor_get(v_M_6555_, 0);
lean_inc(v_val_6689_);
lean_dec_ref_known(v_M_6555_, 1);
v___y_6677_ = v_tz_6686_;
v___y_6678_ = v_val_6689_;
goto v___jp_6676_;
}
}
v___jp_6690_:
{
if (lean_obj_tag(v_zabbrev_6573_) == 0)
{
lean_object* v___x_6694_; lean_object* v___x_6695_; 
v___x_6694_ = lean_box(0);
v___x_6695_ = lean_apply_1(v___y_6691_, v___x_6694_);
v___y_6682_ = v___y_6693_;
v___y_6683_ = v___y_6692_;
v___y_6684_ = v___x_6695_;
goto v___jp_6681_;
}
else
{
lean_object* v_val_6696_; 
lean_dec_ref(v___y_6691_);
v_val_6696_ = lean_ctor_get(v_zabbrev_6573_, 0);
lean_inc(v_val_6696_);
lean_dec_ref_known(v_zabbrev_6573_, 1);
v___y_6682_ = v___y_6693_;
v___y_6683_ = v___y_6692_;
v___y_6684_ = v_val_6696_;
goto v___jp_6681_;
}
}
v___jp_6697_:
{
lean_object* v___f_6699_; 
lean_inc(v___y_6698_);
v___f_6699_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__1), 2, 1);
lean_closure_set(v___f_6699_, 0, v___y_6698_);
if (lean_obj_tag(v_V_6571_) == 0)
{
if (lean_obj_tag(v_v_6574_) == 0)
{
if (lean_obj_tag(v_z_6572_) == 0)
{
lean_object* v___x_6700_; lean_object* v___x_6701_; 
v___x_6700_ = lean_box(0);
lean_inc(v___y_6698_);
v___x_6701_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__1(v___y_6698_, v___x_6700_);
v___y_6691_ = v___f_6699_;
v___y_6692_ = v___y_6698_;
v___y_6693_ = v___x_6701_;
goto v___jp_6690_;
}
else
{
lean_object* v_val_6702_; 
v_val_6702_ = lean_ctor_get(v_z_6572_, 0);
lean_inc(v_val_6702_);
lean_dec_ref_known(v_z_6572_, 1);
v___y_6691_ = v___f_6699_;
v___y_6692_ = v___y_6698_;
v___y_6693_ = v_val_6702_;
goto v___jp_6690_;
}
}
else
{
lean_object* v_val_6703_; 
lean_dec(v_z_6572_);
v_val_6703_ = lean_ctor_get(v_v_6574_, 0);
lean_inc(v_val_6703_);
lean_dec_ref_known(v_v_6574_, 1);
v___y_6691_ = v___f_6699_;
v___y_6692_ = v___y_6698_;
v___y_6693_ = v_val_6703_;
goto v___jp_6690_;
}
}
else
{
lean_object* v_val_6704_; 
lean_dec(v_v_6574_);
lean_dec(v_z_6572_);
v_val_6704_ = lean_ctor_get(v_V_6571_, 0);
lean_inc(v_val_6704_);
lean_dec_ref_known(v_V_6571_, 1);
v___y_6691_ = v___f_6699_;
v___y_6692_ = v___y_6698_;
v___y_6693_ = v_val_6704_;
goto v___jp_6690_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parseWithDate(lean_object* v_date_6710_, lean_object* v_config_6711_, lean_object* v_mod_6712_, lean_object* v_a_6713_){
_start:
{
if (lean_obj_tag(v_mod_6712_) == 0)
{
lean_object* v_val_6714_; lean_object* v___x_6715_; 
lean_dec_ref(v_config_6711_);
v_val_6714_ = lean_ctor_get(v_mod_6712_, 0);
lean_inc_ref(v_val_6714_);
lean_dec_ref_known(v_mod_6712_, 1);
v___x_6715_ = l_Std_Internal_Parsec_String_pstring(v_val_6714_, v_a_6713_);
if (lean_obj_tag(v___x_6715_) == 0)
{
lean_object* v_pos_6716_; lean_object* v___x_6718_; uint8_t v_isShared_6719_; uint8_t v_isSharedCheck_6723_; 
v_pos_6716_ = lean_ctor_get(v___x_6715_, 0);
v_isSharedCheck_6723_ = !lean_is_exclusive(v___x_6715_);
if (v_isSharedCheck_6723_ == 0)
{
lean_object* v_unused_6724_; 
v_unused_6724_ = lean_ctor_get(v___x_6715_, 1);
lean_dec(v_unused_6724_);
v___x_6718_ = v___x_6715_;
v_isShared_6719_ = v_isSharedCheck_6723_;
goto v_resetjp_6717_;
}
else
{
lean_inc(v_pos_6716_);
lean_dec(v___x_6715_);
v___x_6718_ = lean_box(0);
v_isShared_6719_ = v_isSharedCheck_6723_;
goto v_resetjp_6717_;
}
v_resetjp_6717_:
{
lean_object* v___x_6721_; 
if (v_isShared_6719_ == 0)
{
lean_ctor_set(v___x_6718_, 1, v_date_6710_);
v___x_6721_ = v___x_6718_;
goto v_reusejp_6720_;
}
else
{
lean_object* v_reuseFailAlloc_6722_; 
v_reuseFailAlloc_6722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6722_, 0, v_pos_6716_);
lean_ctor_set(v_reuseFailAlloc_6722_, 1, v_date_6710_);
v___x_6721_ = v_reuseFailAlloc_6722_;
goto v_reusejp_6720_;
}
v_reusejp_6720_:
{
return v___x_6721_;
}
}
}
else
{
lean_object* v_pos_6725_; lean_object* v_err_6726_; lean_object* v___x_6728_; uint8_t v_isShared_6729_; uint8_t v_isSharedCheck_6733_; 
lean_dec_ref(v_date_6710_);
v_pos_6725_ = lean_ctor_get(v___x_6715_, 0);
v_err_6726_ = lean_ctor_get(v___x_6715_, 1);
v_isSharedCheck_6733_ = !lean_is_exclusive(v___x_6715_);
if (v_isSharedCheck_6733_ == 0)
{
v___x_6728_ = v___x_6715_;
v_isShared_6729_ = v_isSharedCheck_6733_;
goto v_resetjp_6727_;
}
else
{
lean_inc(v_err_6726_);
lean_inc(v_pos_6725_);
lean_dec(v___x_6715_);
v___x_6728_ = lean_box(0);
v_isShared_6729_ = v_isSharedCheck_6733_;
goto v_resetjp_6727_;
}
v_resetjp_6727_:
{
lean_object* v___x_6731_; 
if (v_isShared_6729_ == 0)
{
v___x_6731_ = v___x_6728_;
goto v_reusejp_6730_;
}
else
{
lean_object* v_reuseFailAlloc_6732_; 
v_reuseFailAlloc_6732_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6732_, 0, v_pos_6725_);
lean_ctor_set(v_reuseFailAlloc_6732_, 1, v_err_6726_);
v___x_6731_ = v_reuseFailAlloc_6732_;
goto v_reusejp_6730_;
}
v_reusejp_6730_:
{
return v___x_6731_;
}
}
}
}
else
{
lean_object* v_modifier_6734_; lean_object* v___x_6735_; 
v_modifier_6734_ = lean_ctor_get(v_mod_6712_, 0);
lean_inc_ref_n(v_modifier_6734_, 2);
lean_dec_ref_known(v_mod_6712_, 1);
v___x_6735_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWith(v_config_6711_, v_modifier_6734_, v_a_6713_);
if (lean_obj_tag(v___x_6735_) == 0)
{
lean_object* v_pos_6736_; lean_object* v_res_6737_; lean_object* v___x_6739_; uint8_t v_isShared_6740_; uint8_t v_isSharedCheck_6745_; 
v_pos_6736_ = lean_ctor_get(v___x_6735_, 0);
v_res_6737_ = lean_ctor_get(v___x_6735_, 1);
v_isSharedCheck_6745_ = !lean_is_exclusive(v___x_6735_);
if (v_isSharedCheck_6745_ == 0)
{
v___x_6739_ = v___x_6735_;
v_isShared_6740_ = v_isSharedCheck_6745_;
goto v_resetjp_6738_;
}
else
{
lean_inc(v_res_6737_);
lean_inc(v_pos_6736_);
lean_dec(v___x_6735_);
v___x_6739_ = lean_box(0);
v_isShared_6740_ = v_isSharedCheck_6745_;
goto v_resetjp_6738_;
}
v_resetjp_6738_:
{
lean_object* v___x_6741_; lean_object* v___x_6743_; 
v___x_6741_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_insert(v_date_6710_, v_modifier_6734_, v_res_6737_);
if (v_isShared_6740_ == 0)
{
lean_ctor_set(v___x_6739_, 1, v___x_6741_);
v___x_6743_ = v___x_6739_;
goto v_reusejp_6742_;
}
else
{
lean_object* v_reuseFailAlloc_6744_; 
v_reuseFailAlloc_6744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6744_, 0, v_pos_6736_);
lean_ctor_set(v_reuseFailAlloc_6744_, 1, v___x_6741_);
v___x_6743_ = v_reuseFailAlloc_6744_;
goto v_reusejp_6742_;
}
v_reusejp_6742_:
{
return v___x_6743_;
}
}
}
else
{
lean_object* v_pos_6746_; lean_object* v_err_6747_; lean_object* v___x_6749_; uint8_t v_isShared_6750_; uint8_t v_isSharedCheck_6754_; 
lean_dec_ref(v_modifier_6734_);
lean_dec_ref(v_date_6710_);
v_pos_6746_ = lean_ctor_get(v___x_6735_, 0);
v_err_6747_ = lean_ctor_get(v___x_6735_, 1);
v_isSharedCheck_6754_ = !lean_is_exclusive(v___x_6735_);
if (v_isSharedCheck_6754_ == 0)
{
v___x_6749_ = v___x_6735_;
v_isShared_6750_ = v_isSharedCheck_6754_;
goto v_resetjp_6748_;
}
else
{
lean_inc(v_err_6747_);
lean_inc(v_pos_6746_);
lean_dec(v___x_6735_);
v___x_6749_ = lean_box(0);
v_isShared_6750_ = v_isSharedCheck_6754_;
goto v_resetjp_6748_;
}
v_resetjp_6748_:
{
lean_object* v___x_6752_; 
if (v_isShared_6750_ == 0)
{
v___x_6752_ = v___x_6749_;
goto v_reusejp_6751_;
}
else
{
lean_object* v_reuseFailAlloc_6753_; 
v_reuseFailAlloc_6753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6753_, 0, v_pos_6746_);
lean_ctor_set(v_reuseFailAlloc_6753_, 1, v_err_6747_);
v___x_6752_ = v_reuseFailAlloc_6753_;
goto v_reusejp_6751_;
}
v_reusejp_6751_:
{
return v___x_6752_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec___redArg(lean_object* v_input_6755_, lean_object* v_config_6756_){
_start:
{
lean_object* v___x_6757_; lean_object* v___x_6758_; 
v___x_6757_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser), 1, 0);
v___x_6758_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___x_6757_, v_input_6755_);
if (lean_obj_tag(v___x_6758_) == 0)
{
lean_object* v_a_6759_; lean_object* v___x_6761_; uint8_t v_isShared_6762_; uint8_t v_isSharedCheck_6766_; 
lean_dec_ref(v_config_6756_);
v_a_6759_ = lean_ctor_get(v___x_6758_, 0);
v_isSharedCheck_6766_ = !lean_is_exclusive(v___x_6758_);
if (v_isSharedCheck_6766_ == 0)
{
v___x_6761_ = v___x_6758_;
v_isShared_6762_ = v_isSharedCheck_6766_;
goto v_resetjp_6760_;
}
else
{
lean_inc(v_a_6759_);
lean_dec(v___x_6758_);
v___x_6761_ = lean_box(0);
v_isShared_6762_ = v_isSharedCheck_6766_;
goto v_resetjp_6760_;
}
v_resetjp_6760_:
{
lean_object* v___x_6764_; 
if (v_isShared_6762_ == 0)
{
v___x_6764_ = v___x_6761_;
goto v_reusejp_6763_;
}
else
{
lean_object* v_reuseFailAlloc_6765_; 
v_reuseFailAlloc_6765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6765_, 0, v_a_6759_);
v___x_6764_ = v_reuseFailAlloc_6765_;
goto v_reusejp_6763_;
}
v_reusejp_6763_:
{
return v___x_6764_;
}
}
}
else
{
lean_object* v_a_6767_; lean_object* v___x_6769_; uint8_t v_isShared_6770_; uint8_t v_isSharedCheck_6775_; 
v_a_6767_ = lean_ctor_get(v___x_6758_, 0);
v_isSharedCheck_6775_ = !lean_is_exclusive(v___x_6758_);
if (v_isSharedCheck_6775_ == 0)
{
v___x_6769_ = v___x_6758_;
v_isShared_6770_ = v_isSharedCheck_6775_;
goto v_resetjp_6768_;
}
else
{
lean_inc(v_a_6767_);
lean_dec(v___x_6758_);
v___x_6769_ = lean_box(0);
v_isShared_6770_ = v_isSharedCheck_6775_;
goto v_resetjp_6768_;
}
v_resetjp_6768_:
{
lean_object* v___x_6771_; lean_object* v___x_6773_; 
v___x_6771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6771_, 0, v_config_6756_);
lean_ctor_set(v___x_6771_, 1, v_a_6767_);
if (v_isShared_6770_ == 0)
{
lean_ctor_set(v___x_6769_, 0, v___x_6771_);
v___x_6773_ = v___x_6769_;
goto v_reusejp_6772_;
}
else
{
lean_object* v_reuseFailAlloc_6774_; 
v_reuseFailAlloc_6774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6774_, 0, v___x_6771_);
v___x_6773_ = v_reuseFailAlloc_6774_;
goto v_reusejp_6772_;
}
v_reusejp_6772_:
{
return v___x_6773_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec(lean_object* v_tz_6776_, lean_object* v_input_6777_, lean_object* v_config_6778_){
_start:
{
lean_object* v___x_6779_; 
v___x_6779_ = l_Std_Time_GenericFormat_spec___redArg(v_input_6777_, v_config_6778_);
return v___x_6779_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec___boxed(lean_object* v_tz_6780_, lean_object* v_input_6781_, lean_object* v_config_6782_){
_start:
{
lean_object* v_res_6783_; 
v_res_6783_ = l_Std_Time_GenericFormat_spec(v_tz_6780_, v_input_6781_, v_config_6782_);
lean_dec(v_tz_6780_);
return v_res_6783_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0___redArg(lean_object* v_msg_6784_){
_start:
{
lean_object* v___x_6785_; lean_object* v___x_6786_; 
v___x_6785_ = lean_obj_once(&l_Std_Time_instInhabitedGenericFormat_default___closed__0, &l_Std_Time_instInhabitedGenericFormat_default___closed__0_once, _init_l_Std_Time_instInhabitedGenericFormat_default___closed__0);
v___x_6786_ = lean_panic_fn_borrowed(v___x_6785_, v_msg_6784_);
return v___x_6786_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0(lean_object* v_tz_6787_, lean_object* v_msg_6788_){
_start:
{
lean_object* v___x_6789_; 
v___x_6789_ = l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0___redArg(v_msg_6788_);
return v___x_6789_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0___boxed(lean_object* v_tz_6790_, lean_object* v_msg_6791_){
_start:
{
lean_object* v_res_6792_; 
v_res_6792_ = l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0(v_tz_6790_, v_msg_6791_);
lean_dec(v_tz_6790_);
return v_res_6792_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec_x21(lean_object* v_tz_6795_, lean_object* v_input_6796_, lean_object* v_config_6797_){
_start:
{
lean_object* v___x_6798_; lean_object* v___x_6799_; 
v___x_6798_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser), 1, 0);
v___x_6799_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___x_6798_, v_input_6796_);
if (lean_obj_tag(v___x_6799_) == 0)
{
lean_object* v_a_6800_; lean_object* v___x_6801_; lean_object* v___x_6802_; lean_object* v___x_6803_; lean_object* v___x_6804_; lean_object* v___x_6805_; lean_object* v___x_6806_; 
lean_dec_ref(v_config_6797_);
v_a_6800_ = lean_ctor_get(v___x_6799_, 0);
lean_inc(v_a_6800_);
lean_dec_ref_known(v___x_6799_, 1);
v___x_6801_ = ((lean_object*)(l_Std_Time_GenericFormat_spec_x21___closed__0));
v___x_6802_ = ((lean_object*)(l_Std_Time_GenericFormat_spec_x21___closed__1));
v___x_6803_ = lean_unsigned_to_nat(1071u);
v___x_6804_ = lean_unsigned_to_nat(18u);
v___x_6805_ = l_mkPanicMessageWithDecl(v___x_6801_, v___x_6802_, v___x_6803_, v___x_6804_, v_a_6800_);
lean_dec(v_a_6800_);
v___x_6806_ = l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0___redArg(v___x_6805_);
return v___x_6806_;
}
else
{
lean_object* v_a_6807_; lean_object* v___x_6808_; 
v_a_6807_ = lean_ctor_get(v___x_6799_, 0);
lean_inc(v_a_6807_);
lean_dec_ref_known(v___x_6799_, 1);
v___x_6808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6808_, 0, v_config_6797_);
lean_ctor_set(v___x_6808_, 1, v_a_6807_);
return v___x_6808_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec_x21___boxed(lean_object* v_tz_6809_, lean_object* v_input_6810_, lean_object* v_config_6811_){
_start:
{
lean_object* v_res_6812_; 
v_res_6812_ = l_Std_Time_GenericFormat_spec_x21(v_tz_6809_, v_input_6810_, v_config_6811_);
lean_dec(v_tz_6809_);
return v_res_6812_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Time_GenericFormat_format_spec__1(lean_object* v_x_6813_, lean_object* v_x_6814_){
_start:
{
if (lean_obj_tag(v_x_6814_) == 0)
{
return v_x_6813_;
}
else
{
lean_object* v_head_6815_; lean_object* v_tail_6816_; lean_object* v___x_6817_; 
v_head_6815_ = lean_ctor_get(v_x_6814_, 0);
v_tail_6816_ = lean_ctor_get(v_x_6814_, 1);
v___x_6817_ = lean_string_append(v_x_6813_, v_head_6815_);
v_x_6813_ = v___x_6817_;
v_x_6814_ = v_tail_6816_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Time_GenericFormat_format_spec__1___boxed(lean_object* v_x_6819_, lean_object* v_x_6820_){
_start:
{
lean_object* v_res_6821_; 
v_res_6821_ = l_List_foldl___at___00Std_Time_GenericFormat_format_spec__1(v_x_6819_, v_x_6820_);
lean_dec(v_x_6820_);
return v_res_6821_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0___lam__0(lean_object* v_tz_6822_, lean_object* v_timestamp_6823_, lean_object* v___x_6824_, lean_object* v_x_6825_){
_start:
{
lean_object* v_offset_6826_; lean_object* v_second_6827_; lean_object* v_nano_6828_; lean_object* v___x_6829_; lean_object* v___x_6830_; lean_object* v___x_6831_; lean_object* v_nanos_6832_; lean_object* v___x_6833_; lean_object* v_nanos_6834_; lean_object* v___x_6835_; lean_object* v___x_6836_; lean_object* v___x_6837_; 
v_offset_6826_ = lean_ctor_get(v_tz_6822_, 0);
v_second_6827_ = lean_ctor_get(v_timestamp_6823_, 0);
v_nano_6828_ = lean_ctor_get(v_timestamp_6823_, 1);
v___x_6829_ = lean_nat_to_int(v___x_6824_);
v___x_6830_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1);
v___x_6831_ = lean_int_mul(v_second_6827_, v___x_6830_);
v_nanos_6832_ = lean_int_add(v___x_6831_, v_nano_6828_);
lean_dec(v___x_6831_);
v___x_6833_ = lean_int_mul(v_offset_6826_, v___x_6830_);
v_nanos_6834_ = lean_int_add(v___x_6833_, v___x_6829_);
lean_dec(v___x_6829_);
lean_dec(v___x_6833_);
v___x_6835_ = lean_int_add(v_nanos_6832_, v_nanos_6834_);
lean_dec(v_nanos_6834_);
lean_dec(v_nanos_6832_);
v___x_6836_ = l_Std_Time_Duration_ofNanoseconds(v___x_6835_);
lean_dec(v___x_6835_);
v___x_6837_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_6836_);
return v___x_6837_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0___lam__0___boxed(lean_object* v_tz_6838_, lean_object* v_timestamp_6839_, lean_object* v___x_6840_, lean_object* v_x_6841_){
_start:
{
lean_object* v_res_6842_; 
v_res_6842_ = l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0___lam__0(v_tz_6838_, v_timestamp_6839_, v___x_6840_, v_x_6841_);
lean_dec_ref(v_timestamp_6839_);
lean_dec_ref(v_tz_6838_);
return v_res_6842_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0_spec__0(lean_object* v_aw_6843_, lean_object* v_date_6844_, lean_object* v_dateformat_6845_, lean_object* v_a_6846_, lean_object* v_a_6847_){
_start:
{
if (lean_obj_tag(v_a_6846_) == 0)
{
lean_object* v___x_6848_; 
lean_dec_ref(v_date_6844_);
v___x_6848_ = l_List_reverse___redArg(v_a_6847_);
return v___x_6848_;
}
else
{
lean_object* v_head_6849_; lean_object* v_tail_6850_; lean_object* v___x_6852_; uint8_t v_isShared_6853_; uint8_t v_isSharedCheck_6879_; 
v_head_6849_ = lean_ctor_get(v_a_6846_, 0);
v_tail_6850_ = lean_ctor_get(v_a_6846_, 1);
v_isSharedCheck_6879_ = !lean_is_exclusive(v_a_6846_);
if (v_isSharedCheck_6879_ == 0)
{
v___x_6852_ = v_a_6846_;
v_isShared_6853_ = v_isSharedCheck_6879_;
goto v_resetjp_6851_;
}
else
{
lean_inc(v_tail_6850_);
lean_inc(v_head_6849_);
lean_dec(v_a_6846_);
v___x_6852_ = lean_box(0);
v_isShared_6853_ = v_isSharedCheck_6879_;
goto v_resetjp_6851_;
}
v_resetjp_6851_:
{
lean_object* v___y_6855_; 
if (lean_obj_tag(v_aw_6843_) == 0)
{
lean_object* v_a_6860_; lean_object* v_offset_6861_; lean_object* v_name_6862_; lean_object* v_abbreviation_6863_; uint8_t v_isDST_6864_; lean_object* v_timestamp_6865_; uint8_t v___x_6866_; uint8_t v___x_6867_; lean_object* v_ltt_6868_; lean_object* v___x_6869_; lean_object* v___x_6870_; lean_object* v___x_6871_; lean_object* v___x_6872_; lean_object* v_tz_6873_; lean_object* v___f_6874_; lean_object* v___x_6875_; lean_object* v___x_6876_; lean_object* v___x_6877_; 
v_a_6860_ = lean_ctor_get(v_aw_6843_, 0);
v_offset_6861_ = lean_ctor_get(v_a_6860_, 0);
v_name_6862_ = lean_ctor_get(v_a_6860_, 1);
v_abbreviation_6863_ = lean_ctor_get(v_a_6860_, 2);
v_isDST_6864_ = lean_ctor_get_uint8(v_a_6860_, sizeof(void*)*3);
v_timestamp_6865_ = lean_ctor_get(v_date_6844_, 1);
v___x_6866_ = 0;
v___x_6867_ = 1;
lean_inc_ref(v_name_6862_);
lean_inc_ref(v_abbreviation_6863_);
lean_inc(v_offset_6861_);
v_ltt_6868_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_ltt_6868_, 0, v_offset_6861_);
lean_ctor_set(v_ltt_6868_, 1, v_abbreviation_6863_);
lean_ctor_set(v_ltt_6868_, 2, v_name_6862_);
lean_ctor_set_uint8(v_ltt_6868_, sizeof(void*)*3, v_isDST_6864_);
lean_ctor_set_uint8(v_ltt_6868_, sizeof(void*)*3 + 1, v___x_6866_);
lean_ctor_set_uint8(v_ltt_6868_, sizeof(void*)*3 + 2, v___x_6867_);
v___x_6869_ = lean_unsigned_to_nat(0u);
v___x_6870_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__0));
v___x_6871_ = lean_box(0);
v___x_6872_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6872_, 0, v_ltt_6868_);
lean_ctor_set(v___x_6872_, 1, v___x_6870_);
lean_ctor_set(v___x_6872_, 2, v___x_6871_);
lean_inc_ref(v___x_6872_);
v_tz_6873_ = l_Std_Time_TimeZone_ZoneRules_timezoneAt(v___x_6872_, v_timestamp_6865_);
lean_inc_ref_n(v_timestamp_6865_, 2);
lean_inc_ref(v_tz_6873_);
v___f_6874_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0___lam__0___boxed), 4, 3);
lean_closure_set(v___f_6874_, 0, v_tz_6873_);
lean_closure_set(v___f_6874_, 1, v_timestamp_6865_);
lean_closure_set(v___f_6874_, 2, v___x_6869_);
v___x_6875_ = lean_mk_thunk(v___f_6874_);
v___x_6876_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6876_, 0, v___x_6875_);
lean_ctor_set(v___x_6876_, 1, v_timestamp_6865_);
lean_ctor_set(v___x_6876_, 2, v___x_6872_);
lean_ctor_set(v___x_6876_, 3, v_tz_6873_);
v___x_6877_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatPartWithDate(v_dateformat_6845_, v___x_6876_, v_head_6849_);
v___y_6855_ = v___x_6877_;
goto v___jp_6854_;
}
else
{
lean_object* v___x_6878_; 
lean_inc_ref(v_date_6844_);
v___x_6878_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatPartWithDate(v_dateformat_6845_, v_date_6844_, v_head_6849_);
v___y_6855_ = v___x_6878_;
goto v___jp_6854_;
}
v___jp_6854_:
{
lean_object* v___x_6857_; 
if (v_isShared_6853_ == 0)
{
lean_ctor_set(v___x_6852_, 1, v_a_6847_);
lean_ctor_set(v___x_6852_, 0, v___y_6855_);
v___x_6857_ = v___x_6852_;
goto v_reusejp_6856_;
}
else
{
lean_object* v_reuseFailAlloc_6859_; 
v_reuseFailAlloc_6859_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6859_, 0, v___y_6855_);
lean_ctor_set(v_reuseFailAlloc_6859_, 1, v_a_6847_);
v___x_6857_ = v_reuseFailAlloc_6859_;
goto v_reusejp_6856_;
}
v_reusejp_6856_:
{
v_a_6846_ = v_tail_6850_;
v_a_6847_ = v___x_6857_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0_spec__0___boxed(lean_object* v_aw_6880_, lean_object* v_date_6881_, lean_object* v_dateformat_6882_, lean_object* v_a_6883_, lean_object* v_a_6884_){
_start:
{
lean_object* v_res_6885_; 
v_res_6885_ = l_List_mapTR_loop___at___00List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0_spec__0(v_aw_6880_, v_date_6881_, v_dateformat_6882_, v_a_6883_, v_a_6884_);
lean_dec_ref(v_dateformat_6882_);
lean_dec(v_aw_6880_);
return v_res_6885_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0(lean_object* v_aw_6886_, lean_object* v_date_6887_, lean_object* v_dateformat_6888_, lean_object* v_a_6889_, lean_object* v_a_6890_){
_start:
{
if (lean_obj_tag(v_a_6889_) == 0)
{
lean_object* v___x_6891_; 
lean_dec_ref(v_date_6887_);
v___x_6891_ = l_List_reverse___redArg(v_a_6890_);
return v___x_6891_;
}
else
{
lean_object* v_head_6892_; lean_object* v_tail_6893_; lean_object* v___x_6895_; uint8_t v_isShared_6896_; uint8_t v_isSharedCheck_6922_; 
v_head_6892_ = lean_ctor_get(v_a_6889_, 0);
v_tail_6893_ = lean_ctor_get(v_a_6889_, 1);
v_isSharedCheck_6922_ = !lean_is_exclusive(v_a_6889_);
if (v_isSharedCheck_6922_ == 0)
{
v___x_6895_ = v_a_6889_;
v_isShared_6896_ = v_isSharedCheck_6922_;
goto v_resetjp_6894_;
}
else
{
lean_inc(v_tail_6893_);
lean_inc(v_head_6892_);
lean_dec(v_a_6889_);
v___x_6895_ = lean_box(0);
v_isShared_6896_ = v_isSharedCheck_6922_;
goto v_resetjp_6894_;
}
v_resetjp_6894_:
{
lean_object* v___y_6898_; 
if (lean_obj_tag(v_aw_6886_) == 0)
{
lean_object* v_a_6903_; lean_object* v_offset_6904_; lean_object* v_name_6905_; lean_object* v_abbreviation_6906_; uint8_t v_isDST_6907_; lean_object* v_timestamp_6908_; uint8_t v___x_6909_; uint8_t v___x_6910_; lean_object* v_ltt_6911_; lean_object* v___x_6912_; lean_object* v___x_6913_; lean_object* v___x_6914_; lean_object* v___x_6915_; lean_object* v_tz_6916_; lean_object* v___f_6917_; lean_object* v___x_6918_; lean_object* v___x_6919_; lean_object* v___x_6920_; 
v_a_6903_ = lean_ctor_get(v_aw_6886_, 0);
v_offset_6904_ = lean_ctor_get(v_a_6903_, 0);
v_name_6905_ = lean_ctor_get(v_a_6903_, 1);
v_abbreviation_6906_ = lean_ctor_get(v_a_6903_, 2);
v_isDST_6907_ = lean_ctor_get_uint8(v_a_6903_, sizeof(void*)*3);
v_timestamp_6908_ = lean_ctor_get(v_date_6887_, 1);
v___x_6909_ = 0;
v___x_6910_ = 1;
lean_inc_ref(v_name_6905_);
lean_inc_ref(v_abbreviation_6906_);
lean_inc(v_offset_6904_);
v_ltt_6911_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_ltt_6911_, 0, v_offset_6904_);
lean_ctor_set(v_ltt_6911_, 1, v_abbreviation_6906_);
lean_ctor_set(v_ltt_6911_, 2, v_name_6905_);
lean_ctor_set_uint8(v_ltt_6911_, sizeof(void*)*3, v_isDST_6907_);
lean_ctor_set_uint8(v_ltt_6911_, sizeof(void*)*3 + 1, v___x_6909_);
lean_ctor_set_uint8(v_ltt_6911_, sizeof(void*)*3 + 2, v___x_6910_);
v___x_6912_ = lean_unsigned_to_nat(0u);
v___x_6913_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__0));
v___x_6914_ = lean_box(0);
v___x_6915_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6915_, 0, v_ltt_6911_);
lean_ctor_set(v___x_6915_, 1, v___x_6913_);
lean_ctor_set(v___x_6915_, 2, v___x_6914_);
lean_inc_ref(v___x_6915_);
v_tz_6916_ = l_Std_Time_TimeZone_ZoneRules_timezoneAt(v___x_6915_, v_timestamp_6908_);
lean_inc_ref_n(v_timestamp_6908_, 2);
lean_inc_ref(v_tz_6916_);
v___f_6917_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0___lam__0___boxed), 4, 3);
lean_closure_set(v___f_6917_, 0, v_tz_6916_);
lean_closure_set(v___f_6917_, 1, v_timestamp_6908_);
lean_closure_set(v___f_6917_, 2, v___x_6912_);
v___x_6918_ = lean_mk_thunk(v___f_6917_);
v___x_6919_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6919_, 0, v___x_6918_);
lean_ctor_set(v___x_6919_, 1, v_timestamp_6908_);
lean_ctor_set(v___x_6919_, 2, v___x_6915_);
lean_ctor_set(v___x_6919_, 3, v_tz_6916_);
v___x_6920_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatPartWithDate(v_dateformat_6888_, v___x_6919_, v_head_6892_);
v___y_6898_ = v___x_6920_;
goto v___jp_6897_;
}
else
{
lean_object* v___x_6921_; 
lean_inc_ref(v_date_6887_);
v___x_6921_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatPartWithDate(v_dateformat_6888_, v_date_6887_, v_head_6892_);
v___y_6898_ = v___x_6921_;
goto v___jp_6897_;
}
v___jp_6897_:
{
lean_object* v___x_6900_; 
if (v_isShared_6896_ == 0)
{
lean_ctor_set(v___x_6895_, 1, v_a_6890_);
lean_ctor_set(v___x_6895_, 0, v___y_6898_);
v___x_6900_ = v___x_6895_;
goto v_reusejp_6899_;
}
else
{
lean_object* v_reuseFailAlloc_6902_; 
v_reuseFailAlloc_6902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6902_, 0, v___y_6898_);
lean_ctor_set(v_reuseFailAlloc_6902_, 1, v_a_6890_);
v___x_6900_ = v_reuseFailAlloc_6902_;
goto v_reusejp_6899_;
}
v_reusejp_6899_:
{
lean_object* v___x_6901_; 
v___x_6901_ = l_List_mapTR_loop___at___00List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0_spec__0(v_aw_6886_, v_date_6887_, v_dateformat_6888_, v_tail_6893_, v___x_6900_);
return v___x_6901_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0___boxed(lean_object* v_aw_6923_, lean_object* v_date_6924_, lean_object* v_dateformat_6925_, lean_object* v_a_6926_, lean_object* v_a_6927_){
_start:
{
lean_object* v_res_6928_; 
v_res_6928_ = l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0(v_aw_6923_, v_date_6924_, v_dateformat_6925_, v_a_6926_, v_a_6927_);
lean_dec_ref(v_dateformat_6925_);
lean_dec(v_aw_6923_);
return v_res_6928_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_format(lean_object* v_aw_6929_, lean_object* v_format_6930_, lean_object* v_date_6931_){
_start:
{
lean_object* v_config_6932_; lean_object* v_string_6933_; lean_object* v_dateformat_6934_; lean_object* v___x_6935_; lean_object* v___x_6936_; lean_object* v___x_6937_; lean_object* v___x_6938_; 
v_config_6932_ = lean_ctor_get(v_format_6930_, 0);
lean_inc_ref(v_config_6932_);
v_string_6933_ = lean_ctor_get(v_format_6930_, 1);
lean_inc(v_string_6933_);
lean_dec_ref(v_format_6930_);
v_dateformat_6934_ = lean_ctor_get(v_config_6932_, 0);
lean_inc_ref(v_dateformat_6934_);
lean_dec_ref(v_config_6932_);
v___x_6935_ = lean_box(0);
v___x_6936_ = l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0(v_aw_6929_, v_date_6931_, v_dateformat_6934_, v_string_6933_, v___x_6935_);
lean_dec_ref(v_dateformat_6934_);
v___x_6937_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_6938_ = l_List_foldl___at___00Std_Time_GenericFormat_format_spec__1(v___x_6937_, v___x_6936_);
lean_dec(v___x_6936_);
return v___x_6938_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_format___boxed(lean_object* v_aw_6939_, lean_object* v_format_6940_, lean_object* v_date_6941_){
_start:
{
lean_object* v_res_6942_; 
v_res_6942_ = l_Std_Time_GenericFormat_format(v_aw_6939_, v_format_6940_, v_date_6941_);
lean_dec(v_aw_6939_);
return v_res_6942_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go(lean_object* v_config_6946_, lean_object* v_aw_6947_, lean_object* v_builder_6948_, lean_object* v_x_6949_, lean_object* v_a_6950_){
_start:
{
if (lean_obj_tag(v_x_6949_) == 0)
{
lean_object* v___x_6951_; 
lean_dec_ref(v_config_6946_);
v___x_6951_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build(v_builder_6948_, v_aw_6947_);
if (lean_obj_tag(v___x_6951_) == 0)
{
lean_object* v___x_6952_; lean_object* v___x_6953_; 
v___x_6952_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__1));
v___x_6953_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6953_, 0, v_a_6950_);
lean_ctor_set(v___x_6953_, 1, v___x_6952_);
return v___x_6953_;
}
else
{
lean_object* v_val_6954_; lean_object* v___x_6955_; 
v_val_6954_ = lean_ctor_get(v___x_6951_, 0);
lean_inc(v_val_6954_);
lean_dec_ref_known(v___x_6951_, 1);
v___x_6955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6955_, 0, v_a_6950_);
lean_ctor_set(v___x_6955_, 1, v_val_6954_);
return v___x_6955_;
}
}
else
{
lean_object* v_head_6956_; lean_object* v_tail_6957_; lean_object* v___x_6958_; 
v_head_6956_ = lean_ctor_get(v_x_6949_, 0);
lean_inc(v_head_6956_);
v_tail_6957_ = lean_ctor_get(v_x_6949_, 1);
lean_inc(v_tail_6957_);
lean_dec_ref_known(v_x_6949_, 2);
lean_inc_ref(v_config_6946_);
v___x_6958_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parseWithDate(v_builder_6948_, v_config_6946_, v_head_6956_, v_a_6950_);
if (lean_obj_tag(v___x_6958_) == 0)
{
lean_object* v_pos_6959_; lean_object* v_res_6960_; 
v_pos_6959_ = lean_ctor_get(v___x_6958_, 0);
lean_inc(v_pos_6959_);
v_res_6960_ = lean_ctor_get(v___x_6958_, 1);
lean_inc(v_res_6960_);
lean_dec_ref_known(v___x_6958_, 2);
v_builder_6948_ = v_res_6960_;
v_x_6949_ = v_tail_6957_;
v_a_6950_ = v_pos_6959_;
goto _start;
}
else
{
lean_object* v_pos_6962_; lean_object* v_err_6963_; lean_object* v___x_6965_; uint8_t v_isShared_6966_; uint8_t v_isSharedCheck_6970_; 
lean_dec(v_tail_6957_);
lean_dec(v_aw_6947_);
lean_dec_ref(v_config_6946_);
v_pos_6962_ = lean_ctor_get(v___x_6958_, 0);
v_err_6963_ = lean_ctor_get(v___x_6958_, 1);
v_isSharedCheck_6970_ = !lean_is_exclusive(v___x_6958_);
if (v_isSharedCheck_6970_ == 0)
{
v___x_6965_ = v___x_6958_;
v_isShared_6966_ = v_isSharedCheck_6970_;
goto v_resetjp_6964_;
}
else
{
lean_inc(v_err_6963_);
lean_inc(v_pos_6962_);
lean_dec(v___x_6958_);
v___x_6965_ = lean_box(0);
v_isShared_6966_ = v_isSharedCheck_6970_;
goto v_resetjp_6964_;
}
v_resetjp_6964_:
{
lean_object* v___x_6968_; 
if (v_isShared_6966_ == 0)
{
v___x_6968_ = v___x_6965_;
goto v_reusejp_6967_;
}
else
{
lean_object* v_reuseFailAlloc_6969_; 
v_reuseFailAlloc_6969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6969_, 0, v_pos_6962_);
lean_ctor_set(v_reuseFailAlloc_6969_, 1, v_err_6963_);
v___x_6968_ = v_reuseFailAlloc_6969_;
goto v_reusejp_6967_;
}
v_reusejp_6967_:
{
return v___x_6968_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser(lean_object* v_format_6973_, lean_object* v_config_6974_, lean_object* v_aw_6975_, lean_object* v_a_6976_){
_start:
{
lean_object* v___x_6977_; lean_object* v___x_6978_; 
v___x_6977_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser___closed__0));
v___x_6978_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go(v_config_6974_, v_aw_6975_, v___x_6977_, v_format_6973_, v_a_6976_);
return v___x_6978_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(lean_object* v_config_6982_, lean_object* v_format_6983_, lean_object* v_func_6984_, lean_object* v_a_6985_){
_start:
{
if (lean_obj_tag(v_format_6983_) == 0)
{
lean_dec_ref(v_config_6982_);
if (lean_obj_tag(v_func_6984_) == 0)
{
lean_object* v___x_6986_; lean_object* v___x_6987_; 
v___x_6986_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__1));
v___x_6987_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6987_, 0, v_a_6985_);
lean_ctor_set(v___x_6987_, 1, v___x_6986_);
return v___x_6987_;
}
else
{
lean_object* v_val_6988_; lean_object* v_fst_6989_; lean_object* v_snd_6990_; lean_object* v___x_6991_; uint8_t v_decide_6992_; 
v_val_6988_ = lean_ctor_get(v_func_6984_, 0);
lean_inc(v_val_6988_);
lean_dec_ref_known(v_func_6984_, 1);
v_fst_6989_ = lean_ctor_get(v_a_6985_, 0);
v_snd_6990_ = lean_ctor_get(v_a_6985_, 1);
v___x_6991_ = lean_string_utf8_byte_size(v_fst_6989_);
v_decide_6992_ = lean_nat_dec_eq(v_snd_6990_, v___x_6991_);
if (v_decide_6992_ == 0)
{
lean_object* v___x_6993_; lean_object* v___x_6994_; 
lean_dec(v_val_6988_);
v___x_6993_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__2));
v___x_6994_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6994_, 0, v_a_6985_);
lean_ctor_set(v___x_6994_, 1, v___x_6993_);
return v___x_6994_;
}
else
{
lean_object* v___x_6995_; 
v___x_6995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6995_, 0, v_a_6985_);
lean_ctor_set(v___x_6995_, 1, v_val_6988_);
return v___x_6995_;
}
}
}
else
{
lean_object* v_head_6996_; 
v_head_6996_ = lean_ctor_get(v_format_6983_, 0);
lean_inc(v_head_6996_);
if (lean_obj_tag(v_head_6996_) == 0)
{
lean_object* v_tail_6997_; lean_object* v_val_6998_; lean_object* v___x_6999_; 
v_tail_6997_ = lean_ctor_get(v_format_6983_, 1);
lean_inc(v_tail_6997_);
lean_dec_ref_known(v_format_6983_, 2);
v_val_6998_ = lean_ctor_get(v_head_6996_, 0);
lean_inc_ref(v_val_6998_);
lean_dec_ref_known(v_head_6996_, 1);
v___x_6999_ = l_Std_Internal_Parsec_String_pstring(v_val_6998_, v_a_6985_);
if (lean_obj_tag(v___x_6999_) == 0)
{
lean_object* v_pos_7000_; 
v_pos_7000_ = lean_ctor_get(v___x_6999_, 0);
lean_inc(v_pos_7000_);
lean_dec_ref_known(v___x_6999_, 2);
v_format_6983_ = v_tail_6997_;
v_a_6985_ = v_pos_7000_;
goto _start;
}
else
{
lean_object* v_pos_7002_; lean_object* v_err_7003_; lean_object* v___x_7005_; uint8_t v_isShared_7006_; uint8_t v_isSharedCheck_7010_; 
lean_dec(v_tail_6997_);
lean_dec(v_func_6984_);
lean_dec_ref(v_config_6982_);
v_pos_7002_ = lean_ctor_get(v___x_6999_, 0);
v_err_7003_ = lean_ctor_get(v___x_6999_, 1);
v_isSharedCheck_7010_ = !lean_is_exclusive(v___x_6999_);
if (v_isSharedCheck_7010_ == 0)
{
v___x_7005_ = v___x_6999_;
v_isShared_7006_ = v_isSharedCheck_7010_;
goto v_resetjp_7004_;
}
else
{
lean_inc(v_err_7003_);
lean_inc(v_pos_7002_);
lean_dec(v___x_6999_);
v___x_7005_ = lean_box(0);
v_isShared_7006_ = v_isSharedCheck_7010_;
goto v_resetjp_7004_;
}
v_resetjp_7004_:
{
lean_object* v___x_7008_; 
if (v_isShared_7006_ == 0)
{
v___x_7008_ = v___x_7005_;
goto v_reusejp_7007_;
}
else
{
lean_object* v_reuseFailAlloc_7009_; 
v_reuseFailAlloc_7009_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7009_, 0, v_pos_7002_);
lean_ctor_set(v_reuseFailAlloc_7009_, 1, v_err_7003_);
v___x_7008_ = v_reuseFailAlloc_7009_;
goto v_reusejp_7007_;
}
v_reusejp_7007_:
{
return v___x_7008_;
}
}
}
}
else
{
lean_object* v_tail_7011_; lean_object* v_modifier_7012_; lean_object* v___x_7013_; 
v_tail_7011_ = lean_ctor_get(v_format_6983_, 1);
lean_inc(v_tail_7011_);
lean_dec_ref_known(v_format_6983_, 2);
v_modifier_7012_ = lean_ctor_get(v_head_6996_, 0);
lean_inc_ref(v_modifier_7012_);
lean_dec_ref_known(v_head_6996_, 1);
lean_inc_ref(v_config_6982_);
v___x_7013_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWith(v_config_6982_, v_modifier_7012_, v_a_6985_);
if (lean_obj_tag(v___x_7013_) == 0)
{
lean_object* v_pos_7014_; lean_object* v_res_7015_; lean_object* v___x_7016_; 
v_pos_7014_ = lean_ctor_get(v___x_7013_, 0);
lean_inc(v_pos_7014_);
v_res_7015_ = lean_ctor_get(v___x_7013_, 1);
lean_inc(v_res_7015_);
lean_dec_ref_known(v___x_7013_, 2);
v___x_7016_ = lean_apply_1(v_func_6984_, v_res_7015_);
v_format_6983_ = v_tail_7011_;
v_func_6984_ = v___x_7016_;
v_a_6985_ = v_pos_7014_;
goto _start;
}
else
{
lean_object* v_pos_7018_; lean_object* v_err_7019_; lean_object* v___x_7021_; uint8_t v_isShared_7022_; uint8_t v_isSharedCheck_7026_; 
lean_dec(v_tail_7011_);
lean_dec(v_func_6984_);
lean_dec_ref(v_config_6982_);
v_pos_7018_ = lean_ctor_get(v___x_7013_, 0);
v_err_7019_ = lean_ctor_get(v___x_7013_, 1);
v_isSharedCheck_7026_ = !lean_is_exclusive(v___x_7013_);
if (v_isSharedCheck_7026_ == 0)
{
v___x_7021_ = v___x_7013_;
v_isShared_7022_ = v_isSharedCheck_7026_;
goto v_resetjp_7020_;
}
else
{
lean_inc(v_err_7019_);
lean_inc(v_pos_7018_);
lean_dec(v___x_7013_);
v___x_7021_ = lean_box(0);
v_isShared_7022_ = v_isSharedCheck_7026_;
goto v_resetjp_7020_;
}
v_resetjp_7020_:
{
lean_object* v___x_7024_; 
if (v_isShared_7022_ == 0)
{
v___x_7024_ = v___x_7021_;
goto v_reusejp_7023_;
}
else
{
lean_object* v_reuseFailAlloc_7025_; 
v_reuseFailAlloc_7025_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7025_, 0, v_pos_7018_);
lean_ctor_set(v_reuseFailAlloc_7025_, 1, v_err_7019_);
v___x_7024_ = v_reuseFailAlloc_7025_;
goto v_reusejp_7023_;
}
v_reusejp_7023_:
{
return v___x_7024_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go(lean_object* v_00_u03b1_7027_, lean_object* v_config_7028_, lean_object* v_format_7029_, lean_object* v_func_7030_, lean_object* v_a_7031_){
_start:
{
lean_object* v___x_7032_; 
v___x_7032_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(v_config_7028_, v_format_7029_, v_func_7030_, v_a_7031_);
return v___x_7032_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_builderParser___redArg(lean_object* v_format_7033_, lean_object* v_config_7034_, lean_object* v_func_7035_, lean_object* v_a_7036_){
_start:
{
lean_object* v___x_7037_; 
v___x_7037_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(v_config_7034_, v_format_7033_, v_func_7035_, v_a_7036_);
return v___x_7037_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_builderParser(lean_object* v_00_u03b1_7038_, lean_object* v_format_7039_, lean_object* v_config_7040_, lean_object* v_func_7041_, lean_object* v_a_7042_){
_start:
{
lean_object* v___x_7043_; 
v___x_7043_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(v_config_7040_, v_format_7039_, v_func_7041_, v_a_7042_);
return v___x_7043_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parse___lam__0(lean_object* v_string_7044_, lean_object* v_config_7045_, lean_object* v_aw_7046_, lean_object* v___y_7047_){
_start:
{
lean_object* v___x_7048_; 
v___x_7048_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser(v_string_7044_, v_config_7045_, v_aw_7046_, v___y_7047_);
if (lean_obj_tag(v___x_7048_) == 0)
{
lean_object* v_pos_7049_; lean_object* v_fst_7050_; lean_object* v_snd_7051_; lean_object* v___x_7052_; uint8_t v_decide_7053_; 
v_pos_7049_ = lean_ctor_get(v___x_7048_, 0);
v_fst_7050_ = lean_ctor_get(v_pos_7049_, 0);
v_snd_7051_ = lean_ctor_get(v_pos_7049_, 1);
v___x_7052_ = lean_string_utf8_byte_size(v_fst_7050_);
v_decide_7053_ = lean_nat_dec_eq(v_snd_7051_, v___x_7052_);
if (v_decide_7053_ == 0)
{
lean_object* v___x_7055_; uint8_t v_isShared_7056_; uint8_t v_isSharedCheck_7061_; 
lean_inc(v_pos_7049_);
v_isSharedCheck_7061_ = !lean_is_exclusive(v___x_7048_);
if (v_isSharedCheck_7061_ == 0)
{
lean_object* v_unused_7062_; lean_object* v_unused_7063_; 
v_unused_7062_ = lean_ctor_get(v___x_7048_, 1);
lean_dec(v_unused_7062_);
v_unused_7063_ = lean_ctor_get(v___x_7048_, 0);
lean_dec(v_unused_7063_);
v___x_7055_ = v___x_7048_;
v_isShared_7056_ = v_isSharedCheck_7061_;
goto v_resetjp_7054_;
}
else
{
lean_dec(v___x_7048_);
v___x_7055_ = lean_box(0);
v_isShared_7056_ = v_isSharedCheck_7061_;
goto v_resetjp_7054_;
}
v_resetjp_7054_:
{
lean_object* v___x_7057_; lean_object* v___x_7059_; 
v___x_7057_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__2));
if (v_isShared_7056_ == 0)
{
lean_ctor_set_tag(v___x_7055_, 1);
lean_ctor_set(v___x_7055_, 1, v___x_7057_);
v___x_7059_ = v___x_7055_;
goto v_reusejp_7058_;
}
else
{
lean_object* v_reuseFailAlloc_7060_; 
v_reuseFailAlloc_7060_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7060_, 0, v_pos_7049_);
lean_ctor_set(v_reuseFailAlloc_7060_, 1, v___x_7057_);
v___x_7059_ = v_reuseFailAlloc_7060_;
goto v_reusejp_7058_;
}
v_reusejp_7058_:
{
return v___x_7059_;
}
}
}
else
{
return v___x_7048_;
}
}
else
{
return v___x_7048_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parse(lean_object* v_aw_7064_, lean_object* v_format_7065_, lean_object* v_input_7066_){
_start:
{
lean_object* v_config_7067_; lean_object* v_string_7068_; lean_object* v___f_7069_; lean_object* v___x_7070_; 
v_config_7067_ = lean_ctor_get(v_format_7065_, 0);
lean_inc_ref(v_config_7067_);
v_string_7068_ = lean_ctor_get(v_format_7065_, 1);
lean_inc(v_string_7068_);
lean_dec_ref(v_format_7065_);
v___f_7069_ = lean_alloc_closure((void*)(l_Std_Time_GenericFormat_parse___lam__0), 4, 3);
lean_closure_set(v___f_7069_, 0, v_string_7068_);
lean_closure_set(v___f_7069_, 1, v_config_7067_);
lean_closure_set(v___f_7069_, 2, v_aw_7064_);
v___x_7070_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___f_7069_, v_input_7066_);
return v___x_7070_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_parse_x21_spec__0(lean_object* v_msg_7071_){
_start:
{
lean_object* v___x_7072_; lean_object* v___x_7073_; 
v___x_7072_ = l_Std_Time_instInhabitedDateTime;
v___x_7073_ = lean_panic_fn_borrowed(v___x_7072_, v_msg_7071_);
return v___x_7073_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parse_x21(lean_object* v_aw_7075_, lean_object* v_format_7076_, lean_object* v_input_7077_){
_start:
{
lean_object* v___x_7078_; 
v___x_7078_ = l_Std_Time_GenericFormat_parse(v_aw_7075_, v_format_7076_, v_input_7077_);
if (lean_obj_tag(v___x_7078_) == 0)
{
lean_object* v_a_7079_; lean_object* v___x_7080_; lean_object* v___x_7081_; lean_object* v___x_7082_; lean_object* v___x_7083_; lean_object* v___x_7084_; lean_object* v___x_7085_; 
v_a_7079_ = lean_ctor_get(v___x_7078_, 0);
lean_inc(v_a_7079_);
lean_dec_ref_known(v___x_7078_, 1);
v___x_7080_ = ((lean_object*)(l_Std_Time_GenericFormat_spec_x21___closed__0));
v___x_7081_ = ((lean_object*)(l_Std_Time_GenericFormat_parse_x21___closed__0));
v___x_7082_ = lean_unsigned_to_nat(1124u);
v___x_7083_ = lean_unsigned_to_nat(18u);
v___x_7084_ = l_mkPanicMessageWithDecl(v___x_7080_, v___x_7081_, v___x_7082_, v___x_7083_, v_a_7079_);
lean_dec(v_a_7079_);
v___x_7085_ = l_panic___at___00Std_Time_GenericFormat_parse_x21_spec__0(v___x_7084_);
return v___x_7085_;
}
else
{
lean_object* v_a_7086_; 
v_a_7086_ = lean_ctor_get(v___x_7078_, 0);
lean_inc(v_a_7086_);
lean_dec_ref_known(v___x_7078_, 1);
return v_a_7086_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder___redArg___lam__0(lean_object* v_config_7087_, lean_object* v_string_7088_, lean_object* v_builder_7089_, lean_object* v___y_7090_){
_start:
{
lean_object* v___x_7091_; 
v___x_7091_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(v_config_7087_, v_string_7088_, v_builder_7089_, v___y_7090_);
return v___x_7091_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder___redArg(lean_object* v_format_7092_, lean_object* v_builder_7093_, lean_object* v_input_7094_){
_start:
{
lean_object* v_config_7095_; lean_object* v_string_7096_; lean_object* v___f_7097_; lean_object* v___x_7098_; 
v_config_7095_ = lean_ctor_get(v_format_7092_, 0);
lean_inc_ref(v_config_7095_);
v_string_7096_ = lean_ctor_get(v_format_7092_, 1);
lean_inc(v_string_7096_);
lean_dec_ref(v_format_7092_);
v___f_7097_ = lean_alloc_closure((void*)(l_Std_Time_GenericFormat_parseBuilder___redArg___lam__0), 4, 3);
lean_closure_set(v___f_7097_, 0, v_config_7095_);
lean_closure_set(v___f_7097_, 1, v_string_7096_);
lean_closure_set(v___f_7097_, 2, v_builder_7093_);
v___x_7098_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___f_7097_, v_input_7094_);
return v___x_7098_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder(lean_object* v_aw_7099_, lean_object* v_00_u03b1_7100_, lean_object* v_format_7101_, lean_object* v_builder_7102_, lean_object* v_input_7103_){
_start:
{
lean_object* v___x_7104_; 
v___x_7104_ = l_Std_Time_GenericFormat_parseBuilder___redArg(v_format_7101_, v_builder_7102_, v_input_7103_);
return v___x_7104_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder___boxed(lean_object* v_aw_7105_, lean_object* v_00_u03b1_7106_, lean_object* v_format_7107_, lean_object* v_builder_7108_, lean_object* v_input_7109_){
_start:
{
lean_object* v_res_7110_; 
v_res_7110_ = l_Std_Time_GenericFormat_parseBuilder(v_aw_7105_, v_00_u03b1_7106_, v_format_7107_, v_builder_7108_, v_input_7109_);
lean_dec(v_aw_7105_);
return v_res_7110_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___redArg(lean_object* v_inst_7112_, lean_object* v_format_7113_, lean_object* v_builder_7114_, lean_object* v_input_7115_){
_start:
{
lean_object* v___x_7116_; 
v___x_7116_ = l_Std_Time_GenericFormat_parseBuilder___redArg(v_format_7113_, v_builder_7114_, v_input_7115_);
if (lean_obj_tag(v___x_7116_) == 0)
{
lean_object* v_a_7117_; lean_object* v___x_7118_; lean_object* v___x_7119_; lean_object* v___x_7120_; lean_object* v___x_7121_; lean_object* v___x_7122_; lean_object* v___x_7123_; 
v_a_7117_ = lean_ctor_get(v___x_7116_, 0);
lean_inc(v_a_7117_);
lean_dec_ref_known(v___x_7116_, 1);
v___x_7118_ = ((lean_object*)(l_Std_Time_GenericFormat_spec_x21___closed__0));
v___x_7119_ = ((lean_object*)(l_Std_Time_GenericFormat_parseBuilder_x21___redArg___closed__0));
v___x_7120_ = lean_unsigned_to_nat(1138u);
v___x_7121_ = lean_unsigned_to_nat(18u);
v___x_7122_ = l_mkPanicMessageWithDecl(v___x_7118_, v___x_7119_, v___x_7120_, v___x_7121_, v_a_7117_);
lean_dec(v_a_7117_);
v___x_7123_ = l_panic___redArg(v_inst_7112_, v___x_7122_);
return v___x_7123_;
}
else
{
lean_object* v_a_7124_; 
v_a_7124_ = lean_ctor_get(v___x_7116_, 0);
lean_inc(v_a_7124_);
lean_dec_ref_known(v___x_7116_, 1);
return v_a_7124_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___redArg___boxed(lean_object* v_inst_7125_, lean_object* v_format_7126_, lean_object* v_builder_7127_, lean_object* v_input_7128_){
_start:
{
lean_object* v_res_7129_; 
v_res_7129_ = l_Std_Time_GenericFormat_parseBuilder_x21___redArg(v_inst_7125_, v_format_7126_, v_builder_7127_, v_input_7128_);
lean_dec(v_inst_7125_);
return v_res_7129_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21(lean_object* v_00_u03b1_7130_, lean_object* v_aw_7131_, lean_object* v_inst_7132_, lean_object* v_format_7133_, lean_object* v_builder_7134_, lean_object* v_input_7135_){
_start:
{
lean_object* v___x_7136_; 
v___x_7136_ = l_Std_Time_GenericFormat_parseBuilder_x21___redArg(v_inst_7132_, v_format_7133_, v_builder_7134_, v_input_7135_);
return v___x_7136_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___boxed(lean_object* v_00_u03b1_7137_, lean_object* v_aw_7138_, lean_object* v_inst_7139_, lean_object* v_format_7140_, lean_object* v_builder_7141_, lean_object* v_input_7142_){
_start:
{
lean_object* v_res_7143_; 
v_res_7143_ = l_Std_Time_GenericFormat_parseBuilder_x21(v_00_u03b1_7137_, v_aw_7138_, v_inst_7139_, v_format_7140_, v_builder_7141_, v_input_7142_);
lean_dec(v_inst_7139_);
lean_dec(v_aw_7138_);
return v_res_7143_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatGeneric_go(lean_object* v_getInfo_7144_, lean_object* v_dateformat_7145_, lean_object* v_data_7146_, lean_object* v_format_7147_){
_start:
{
if (lean_obj_tag(v_format_7147_) == 0)
{
lean_object* v___x_7148_; 
lean_dec_ref(v_getInfo_7144_);
v___x_7148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7148_, 0, v_data_7146_);
return v___x_7148_;
}
else
{
lean_object* v_head_7149_; 
v_head_7149_ = lean_ctor_get(v_format_7147_, 0);
lean_inc(v_head_7149_);
if (lean_obj_tag(v_head_7149_) == 0)
{
lean_object* v_tail_7150_; lean_object* v_val_7151_; lean_object* v___x_7152_; 
v_tail_7150_ = lean_ctor_get(v_format_7147_, 1);
lean_inc(v_tail_7150_);
lean_dec_ref_known(v_format_7147_, 2);
v_val_7151_ = lean_ctor_get(v_head_7149_, 0);
lean_inc_ref(v_val_7151_);
lean_dec_ref_known(v_head_7149_, 1);
v___x_7152_ = lean_string_append(v_data_7146_, v_val_7151_);
lean_dec_ref(v_val_7151_);
v_data_7146_ = v___x_7152_;
v_format_7147_ = v_tail_7150_;
goto _start;
}
else
{
lean_object* v_tail_7154_; lean_object* v_modifier_7155_; lean_object* v___x_7156_; 
v_tail_7154_ = lean_ctor_get(v_format_7147_, 1);
lean_inc(v_tail_7154_);
lean_dec_ref_known(v_format_7147_, 2);
v_modifier_7155_ = lean_ctor_get(v_head_7149_, 0);
lean_inc_ref_n(v_modifier_7155_, 2);
lean_dec_ref_known(v_head_7149_, 1);
lean_inc_ref(v_getInfo_7144_);
v___x_7156_ = lean_apply_1(v_getInfo_7144_, v_modifier_7155_);
if (lean_obj_tag(v___x_7156_) == 0)
{
lean_object* v___x_7157_; 
lean_dec_ref(v_modifier_7155_);
lean_dec(v_tail_7154_);
lean_dec_ref(v_data_7146_);
lean_dec_ref(v_getInfo_7144_);
v___x_7157_ = lean_box(0);
return v___x_7157_;
}
else
{
lean_object* v_val_7158_; lean_object* v___x_7159_; lean_object* v___x_7160_; 
v_val_7158_ = lean_ctor_get(v___x_7156_, 0);
lean_inc(v_val_7158_);
lean_dec_ref_known(v___x_7156_, 1);
v___x_7159_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWith(v_dateformat_7145_, v_modifier_7155_, v_val_7158_);
v___x_7160_ = lean_string_append(v_data_7146_, v___x_7159_);
lean_dec_ref(v___x_7159_);
v_data_7146_ = v___x_7160_;
v_format_7147_ = v_tail_7154_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatGeneric_go___boxed(lean_object* v_getInfo_7162_, lean_object* v_dateformat_7163_, lean_object* v_data_7164_, lean_object* v_format_7165_){
_start:
{
lean_object* v_res_7166_; 
v_res_7166_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatGeneric_go(v_getInfo_7162_, v_dateformat_7163_, v_data_7164_, v_format_7165_);
lean_dec_ref(v_dateformat_7163_);
return v_res_7166_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatGeneric___redArg(lean_object* v_format_7167_, lean_object* v_getInfo_7168_){
_start:
{
lean_object* v_config_7169_; lean_object* v_string_7170_; lean_object* v_dateformat_7171_; lean_object* v___x_7172_; lean_object* v___x_7173_; 
v_config_7169_ = lean_ctor_get(v_format_7167_, 0);
lean_inc_ref(v_config_7169_);
v_string_7170_ = lean_ctor_get(v_format_7167_, 1);
lean_inc(v_string_7170_);
lean_dec_ref(v_format_7167_);
v_dateformat_7171_ = lean_ctor_get(v_config_7169_, 0);
lean_inc_ref(v_dateformat_7171_);
lean_dec_ref(v_config_7169_);
v___x_7172_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_7173_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatGeneric_go(v_getInfo_7168_, v_dateformat_7171_, v___x_7172_, v_string_7170_);
lean_dec_ref(v_dateformat_7171_);
return v___x_7173_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatGeneric(lean_object* v_aw_7174_, lean_object* v_format_7175_, lean_object* v_getInfo_7176_){
_start:
{
lean_object* v___x_7177_; 
v___x_7177_ = l_Std_Time_GenericFormat_formatGeneric___redArg(v_format_7175_, v_getInfo_7176_);
return v___x_7177_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatGeneric___boxed(lean_object* v_aw_7178_, lean_object* v_format_7179_, lean_object* v_getInfo_7180_){
_start:
{
lean_object* v_res_7181_; 
v_res_7181_ = l_Std_Time_GenericFormat_formatGeneric(v_aw_7178_, v_format_7179_, v_getInfo_7180_);
lean_dec(v_aw_7178_);
return v_res_7181_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go(lean_object* v_dateformat_7182_, lean_object* v_data_7183_, lean_object* v_format_7184_){
_start:
{
if (lean_obj_tag(v_format_7184_) == 0)
{
lean_dec_ref(v_dateformat_7182_);
return v_data_7183_;
}
else
{
lean_object* v_head_7185_; 
v_head_7185_ = lean_ctor_get(v_format_7184_, 0);
lean_inc(v_head_7185_);
if (lean_obj_tag(v_head_7185_) == 0)
{
lean_object* v_tail_7186_; lean_object* v_val_7187_; lean_object* v___x_7188_; 
v_tail_7186_ = lean_ctor_get(v_format_7184_, 1);
lean_inc(v_tail_7186_);
lean_dec_ref_known(v_format_7184_, 2);
v_val_7187_ = lean_ctor_get(v_head_7185_, 0);
lean_inc_ref(v_val_7187_);
lean_dec_ref_known(v_head_7185_, 1);
v___x_7188_ = lean_string_append(v_data_7183_, v_val_7187_);
lean_dec_ref(v_val_7187_);
v_data_7183_ = v___x_7188_;
v_format_7184_ = v_tail_7186_;
goto _start;
}
else
{
lean_object* v_tail_7190_; lean_object* v_modifier_7191_; lean_object* v___f_7192_; 
v_tail_7190_ = lean_ctor_get(v_format_7184_, 1);
lean_inc(v_tail_7190_);
lean_dec_ref_known(v_format_7184_, 2);
v_modifier_7191_ = lean_ctor_get(v_head_7185_, 0);
lean_inc_ref(v_modifier_7191_);
lean_dec_ref_known(v_head_7185_, 1);
v___f_7192_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go___lam__0), 5, 4);
lean_closure_set(v___f_7192_, 0, v_dateformat_7182_);
lean_closure_set(v___f_7192_, 1, v_modifier_7191_);
lean_closure_set(v___f_7192_, 2, v_data_7183_);
lean_closure_set(v___f_7192_, 3, v_tail_7190_);
return v___f_7192_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go___lam__0(lean_object* v_dateformat_7193_, lean_object* v_modifier_7194_, lean_object* v_data_7195_, lean_object* v_tail_7196_, lean_object* v___y_7197_){
_start:
{
lean_object* v___x_7198_; lean_object* v___x_7199_; lean_object* v___x_7200_; 
v___x_7198_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWith(v_dateformat_7193_, v_modifier_7194_, v___y_7197_);
v___x_7199_ = lean_string_append(v_data_7195_, v___x_7198_);
lean_dec_ref(v___x_7198_);
v___x_7200_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go(v_dateformat_7193_, v___x_7199_, v_tail_7196_);
return v___x_7200_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatBuilder___redArg(lean_object* v_format_7201_){
_start:
{
lean_object* v_config_7202_; lean_object* v_string_7203_; lean_object* v_dateformat_7204_; lean_object* v___x_7205_; lean_object* v___x_7206_; 
v_config_7202_ = lean_ctor_get(v_format_7201_, 0);
lean_inc_ref(v_config_7202_);
v_string_7203_ = lean_ctor_get(v_format_7201_, 1);
lean_inc(v_string_7203_);
lean_dec_ref(v_format_7201_);
v_dateformat_7204_ = lean_ctor_get(v_config_7202_, 0);
lean_inc_ref(v_dateformat_7204_);
lean_dec_ref(v_config_7202_);
v___x_7205_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_7206_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go(v_dateformat_7204_, v___x_7205_, v_string_7203_);
return v___x_7206_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatBuilder(lean_object* v_aw_7207_, lean_object* v_format_7208_){
_start:
{
lean_object* v___x_7209_; 
v___x_7209_ = l_Std_Time_GenericFormat_formatBuilder___redArg(v_format_7208_);
return v___x_7209_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatBuilder___boxed(lean_object* v_aw_7210_, lean_object* v_format_7211_){
_start:
{
lean_object* v_res_7212_; 
v_res_7212_ = l_Std_Time_GenericFormat_formatBuilder(v_aw_7210_, v_format_7211_);
lean_dec(v_aw_7210_);
return v_res_7212_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instFormatGenericFormatFormatTypeString(lean_object* v_aw_7213_){
_start:
{
lean_object* v___x_7214_; lean_object* v___x_7215_; lean_object* v___x_7216_; 
lean_inc(v_aw_7213_);
v___x_7214_ = lean_alloc_closure((void*)(l_Std_Time_GenericFormat_formatBuilder___boxed), 2, 1);
lean_closure_set(v___x_7214_, 0, v_aw_7213_);
v___x_7215_ = lean_alloc_closure((void*)(l_Std_Time_GenericFormat_parseBuilder___boxed), 5, 1);
lean_closure_set(v___x_7215_, 0, v_aw_7213_);
v___x_7216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7216_, 0, v___x_7214_);
lean_ctor_set(v___x_7216_, 1, v___x_7215_);
return v___x_7216_;
}
}
lean_object* runtime_initialize_Std_Time_Zoned(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Format_Modifier(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Format_DateFormat(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Format_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time_Zoned(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Format_Modifier(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Format_DateFormat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Time_instInhabitedFormatConfig_default = _init_l_Std_Time_instInhabitedFormatConfig_default();
lean_mark_persistent(l_Std_Time_instInhabitedFormatConfig_default);
l_Std_Time_instInhabitedFormatConfig = _init_l_Std_Time_instInhabitedFormatConfig();
lean_mark_persistent(l_Std_Time_instInhabitedFormatConfig);
l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1 = _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1);
l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1 = _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1();
lean_mark_persistent(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1);
l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1 = _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1();
lean_mark_persistent(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Format_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time_Zoned(uint8_t builtin);
lean_object* initialize_Std_Time_Format_Modifier(uint8_t builtin);
lean_object* initialize_Std_Time_Format_DateFormat(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Format_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time_Zoned(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Format_Modifier(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Format_DateFormat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Format_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Format_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Format_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
