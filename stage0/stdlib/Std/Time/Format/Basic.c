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
lean_object* v_fst_212_; lean_object* v_snd_213_; lean_object* v_pos_215_; lean_object* v_snd_216_; lean_object* v_err_217_; lean_object* v___x_221_; uint8_t v___x_222_; 
v_fst_212_ = lean_ctor_get(v_a_211_, 0);
v_snd_213_ = lean_ctor_get(v_a_211_, 1);
lean_inc(v_snd_213_);
v___x_221_ = lean_string_utf8_byte_size(v_fst_212_);
v___x_222_ = lean_nat_dec_eq(v_snd_213_, v___x_221_);
if (v___x_222_ == 0)
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
uint8_t v___x_234_; 
v___x_234_ = lean_nat_dec_eq(v___x_208_, v___x_209_);
v___y_229_ = v___x_234_;
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
lean_object* v___x_235_; 
v___x_235_ = lean_box(0);
lean_inc(v_snd_213_);
v_pos_215_ = v_a_211_;
v_snd_216_ = v_snd_213_;
v_err_217_ = v___x_235_;
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
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___boxed(lean_object* v___x_236_, lean_object* v___x_237_, lean_object* v___x_238_, lean_object* v_acc_239_, lean_object* v_a_240_){
_start:
{
uint32_t v___x_9483__boxed_241_; lean_object* v_res_242_; 
v___x_9483__boxed_241_ = lean_unbox_uint32(v___x_236_);
lean_dec(v___x_236_);
v_res_242_ = l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0(v___x_9483__boxed_241_, v___x_237_, v___x_238_, v_acc_239_, v_a_240_);
lean_dec(v___x_238_);
lean_dec(v___x_237_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0(uint32_t v___x_243_, lean_object* v___x_244_, lean_object* v___x_245_, lean_object* v_acc_246_, lean_object* v_a_247_){
_start:
{
lean_object* v_fst_248_; lean_object* v_snd_249_; lean_object* v_pos_251_; lean_object* v_snd_252_; lean_object* v_err_253_; lean_object* v___x_257_; uint8_t v___x_258_; 
v_fst_248_ = lean_ctor_get(v_a_247_, 0);
v_snd_249_ = lean_ctor_get(v_a_247_, 1);
lean_inc(v_snd_249_);
v___x_257_ = lean_string_utf8_byte_size(v_fst_248_);
v___x_258_ = lean_nat_dec_eq(v_snd_249_, v___x_257_);
if (v___x_258_ == 0)
{
uint32_t v___x_259_; uint8_t v___x_260_; uint32_t v_c_261_; lean_object* v___x_262_; lean_object* v_it_x27_263_; uint8_t v___y_265_; uint8_t v___x_269_; 
v___x_259_ = 34;
v___x_260_ = lean_uint32_dec_eq(v___x_243_, v___x_259_);
v_c_261_ = lean_string_utf8_get_fast(v_fst_248_, v_snd_249_);
v___x_262_ = lean_string_utf8_next_fast(v_fst_248_, v_snd_249_);
lean_inc(v_fst_248_);
v_it_x27_263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_263_, 0, v_fst_248_);
lean_ctor_set(v_it_x27_263_, 1, v___x_262_);
v___x_269_ = lean_uint32_dec_eq(v_c_261_, v___x_259_);
if (v___x_269_ == 0)
{
v___y_265_ = v___x_260_;
goto v___jp_264_;
}
else
{
uint8_t v___x_270_; 
v___x_270_ = lean_nat_dec_eq(v___x_244_, v___x_245_);
v___y_265_ = v___x_270_;
goto v___jp_264_;
}
v___jp_264_:
{
if (v___y_265_ == 0)
{
lean_object* v___x_266_; 
lean_dec_ref_known(v_it_x27_263_, 2);
v___x_266_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_249_);
v_pos_251_ = v_a_247_;
v_snd_252_ = v_snd_249_;
v_err_253_ = v___x_266_;
goto v___jp_250_;
}
else
{
lean_object* v___x_267_; lean_object* v___x_268_; 
lean_dec(v_snd_249_);
lean_dec_ref(v_a_247_);
v___x_267_ = lean_string_push(v_acc_246_, v_c_261_);
v___x_268_ = l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0(v___x_243_, v___x_244_, v___x_245_, v___x_267_, v_it_x27_263_);
return v___x_268_;
}
}
}
else
{
lean_object* v___x_271_; 
v___x_271_ = lean_box(0);
lean_inc(v_snd_249_);
v_pos_251_ = v_a_247_;
v_snd_252_ = v_snd_249_;
v_err_253_ = v___x_271_;
goto v___jp_250_;
}
v___jp_250_:
{
uint8_t v_decide_254_; 
v_decide_254_ = lean_nat_dec_eq(v_snd_249_, v_snd_252_);
lean_dec(v_snd_252_);
lean_dec(v_snd_249_);
if (v_decide_254_ == 0)
{
lean_object* v___x_255_; 
lean_dec_ref(v_acc_246_);
lean_inc(v_err_253_);
v___x_255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_255_, 0, v_pos_251_);
lean_ctor_set(v___x_255_, 1, v_err_253_);
return v___x_255_;
}
else
{
lean_object* v___x_256_; 
v___x_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_256_, 0, v_pos_251_);
lean_ctor_set(v___x_256_, 1, v_acc_246_);
return v___x_256_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0___boxed(lean_object* v___x_272_, lean_object* v___x_273_, lean_object* v___x_274_, lean_object* v_acc_275_, lean_object* v_a_276_){
_start:
{
uint32_t v___x_9539__boxed_277_; lean_object* v_res_278_; 
v___x_9539__boxed_277_ = lean_unbox_uint32(v___x_272_);
lean_dec(v___x_272_);
v_res_278_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0(v___x_9539__boxed_277_, v___x_273_, v___x_274_, v_acc_275_, v_a_276_);
lean_dec(v___x_274_);
lean_dec(v___x_273_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1(uint32_t v___x_283_, lean_object* v___y_284_){
_start:
{
lean_object* v_fst_285_; lean_object* v_snd_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v_fst_285_ = lean_ctor_get(v___y_284_, 0);
v_snd_286_ = lean_ctor_get(v___y_284_, 1);
v___x_287_ = lean_string_utf8_byte_size(v_fst_285_);
v___x_288_ = lean_nat_dec_eq(v_snd_286_, v___x_287_);
if (v___x_288_ == 0)
{
uint32_t v_c_289_; uint8_t v___x_290_; 
v_c_289_ = lean_string_utf8_get_fast(v_fst_285_, v_snd_286_);
v___x_290_ = lean_uint32_dec_eq(v_c_289_, v___x_283_);
if (v___x_290_ == 0)
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__1));
v___x_292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_292_, 0, v___y_284_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
return v___x_292_;
}
else
{
lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_345_; 
lean_inc(v_snd_286_);
lean_inc(v_fst_285_);
v_isSharedCheck_345_ = !lean_is_exclusive(v___y_284_);
if (v_isSharedCheck_345_ == 0)
{
lean_object* v_unused_346_; lean_object* v_unused_347_; 
v_unused_346_ = lean_ctor_get(v___y_284_, 1);
lean_dec(v_unused_346_);
v_unused_347_ = lean_ctor_get(v___y_284_, 0);
lean_dec(v_unused_347_);
v___x_294_ = v___y_284_;
v_isShared_295_ = v_isSharedCheck_345_;
goto v_resetjp_293_;
}
else
{
lean_dec(v___y_284_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_345_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_296_; lean_object* v_it_x27_298_; 
v___x_296_ = lean_string_utf8_next_fast(v_fst_285_, v_snd_286_);
lean_inc(v_fst_285_);
if (v_isShared_295_ == 0)
{
lean_ctor_set(v___x_294_, 1, v___x_296_);
v_it_x27_298_ = v___x_294_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_fst_285_);
lean_ctor_set(v_reuseFailAlloc_344_, 1, v___x_296_);
v_it_x27_298_ = v_reuseFailAlloc_344_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
uint8_t v___x_299_; 
v___x_299_ = lean_nat_dec_eq(v___x_296_, v___x_287_);
if (v___x_299_ == 0)
{
uint32_t v___x_300_; uint8_t v___x_301_; 
v___x_300_ = lean_string_utf8_get_fast(v_fst_285_, v___x_296_);
v___x_301_ = lean_uint32_dec_eq(v___x_300_, v___x_283_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
lean_dec_ref(v_it_x27_298_);
v___x_302_ = lean_string_utf8_next_fast(v_fst_285_, v___x_296_);
v___x_303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_303_, 0, v_fst_285_);
lean_ctor_set(v___x_303_, 1, v___x_302_);
v___x_304_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_305_ = lean_string_push(v___x_304_, v___x_300_);
v___x_306_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0(v_c_289_, v_snd_286_, v___x_287_, v___x_305_, v___x_303_);
lean_dec(v_snd_286_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v_pos_307_; lean_object* v_res_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_339_; 
v_pos_307_ = lean_ctor_get(v___x_306_, 0);
v_res_308_ = lean_ctor_get(v___x_306_, 1);
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_339_ == 0)
{
v___x_310_ = v___x_306_;
v_isShared_311_ = v_isSharedCheck_339_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_res_308_);
lean_inc(v_pos_307_);
lean_dec(v___x_306_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_339_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v_fst_312_; lean_object* v_snd_313_; lean_object* v___x_314_; uint8_t v___x_315_; 
v_fst_312_ = lean_ctor_get(v_pos_307_, 0);
v_snd_313_ = lean_ctor_get(v_pos_307_, 1);
v___x_314_ = lean_string_utf8_byte_size(v_fst_312_);
v___x_315_ = lean_nat_dec_eq(v_snd_313_, v___x_314_);
if (v___x_315_ == 0)
{
uint32_t v_c_316_; uint8_t v___x_317_; 
v_c_316_ = lean_string_utf8_get_fast(v_fst_312_, v_snd_313_);
v___x_317_ = lean_uint32_dec_eq(v_c_316_, v___x_283_);
if (v___x_317_ == 0)
{
lean_object* v___x_318_; lean_object* v___x_320_; 
lean_dec(v_res_308_);
v___x_318_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__1));
if (v_isShared_311_ == 0)
{
lean_ctor_set_tag(v___x_310_, 1);
lean_ctor_set(v___x_310_, 1, v___x_318_);
v___x_320_ = v___x_310_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_pos_307_);
lean_ctor_set(v_reuseFailAlloc_321_, 1, v___x_318_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
else
{
lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_332_; 
lean_inc(v_snd_313_);
lean_inc(v_fst_312_);
v_isSharedCheck_332_ = !lean_is_exclusive(v_pos_307_);
if (v_isSharedCheck_332_ == 0)
{
lean_object* v_unused_333_; lean_object* v_unused_334_; 
v_unused_333_ = lean_ctor_get(v_pos_307_, 1);
lean_dec(v_unused_333_);
v_unused_334_ = lean_ctor_get(v_pos_307_, 0);
lean_dec(v_unused_334_);
v___x_323_ = v_pos_307_;
v_isShared_324_ = v_isSharedCheck_332_;
goto v_resetjp_322_;
}
else
{
lean_dec(v_pos_307_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_332_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_325_; lean_object* v_it_x27_327_; 
v___x_325_ = lean_string_utf8_next_fast(v_fst_312_, v_snd_313_);
lean_dec(v_snd_313_);
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 1, v___x_325_);
v_it_x27_327_ = v___x_323_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_fst_312_);
lean_ctor_set(v_reuseFailAlloc_331_, 1, v___x_325_);
v_it_x27_327_ = v_reuseFailAlloc_331_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
lean_object* v___x_329_; 
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 0, v_it_x27_327_);
v___x_329_ = v___x_310_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_it_x27_327_);
lean_ctor_set(v_reuseFailAlloc_330_, 1, v_res_308_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
}
else
{
lean_object* v___x_335_; lean_object* v___x_337_; 
lean_dec(v_res_308_);
v___x_335_ = lean_box(0);
if (v_isShared_311_ == 0)
{
lean_ctor_set_tag(v___x_310_, 1);
lean_ctor_set(v___x_310_, 1, v___x_335_);
v___x_337_ = v___x_310_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_pos_307_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v___x_335_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
}
else
{
return v___x_306_;
}
}
else
{
lean_object* v___x_340_; lean_object* v___x_341_; 
lean_dec(v_snd_286_);
lean_dec(v_fst_285_);
v___x_340_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_341_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_341_, 0, v_it_x27_298_);
lean_ctor_set(v___x_341_, 1, v___x_340_);
return v___x_341_;
}
}
else
{
lean_object* v___x_342_; lean_object* v___x_343_; 
lean_dec(v_snd_286_);
lean_dec(v_fst_285_);
v___x_342_ = lean_box(0);
v___x_343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_343_, 0, v_it_x27_298_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
return v___x_343_;
}
}
}
}
}
else
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = lean_box(0);
v___x_349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_349_, 0, v___y_284_);
lean_ctor_set(v___x_349_, 1, v___x_348_);
return v___x_349_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___boxed(lean_object* v___x_350_, lean_object* v___y_351_){
_start:
{
uint32_t v___x_9604__boxed_352_; lean_object* v_res_353_; 
v___x_9604__boxed_352_ = lean_unbox_uint32(v___x_350_);
lean_dec(v___x_350_);
v_res_353_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1(v___x_9604__boxed_352_, v___y_351_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2_spec__3(uint32_t v___x_354_, lean_object* v___x_355_, lean_object* v___x_356_, lean_object* v_acc_357_, lean_object* v_a_358_){
_start:
{
lean_object* v_fst_359_; lean_object* v_snd_360_; lean_object* v_pos_362_; lean_object* v_snd_363_; lean_object* v_err_364_; lean_object* v___x_368_; uint8_t v___x_369_; 
v_fst_359_ = lean_ctor_get(v_a_358_, 0);
v_snd_360_ = lean_ctor_get(v_a_358_, 1);
lean_inc(v_snd_360_);
v___x_368_ = lean_string_utf8_byte_size(v_fst_359_);
v___x_369_ = lean_nat_dec_eq(v_snd_360_, v___x_368_);
if (v___x_369_ == 0)
{
uint32_t v___x_370_; uint8_t v___x_371_; uint32_t v_c_372_; lean_object* v___x_373_; lean_object* v_it_x27_374_; uint8_t v___y_376_; uint8_t v___x_380_; 
v___x_370_ = 39;
v___x_371_ = lean_uint32_dec_eq(v___x_354_, v___x_370_);
v_c_372_ = lean_string_utf8_get_fast(v_fst_359_, v_snd_360_);
v___x_373_ = lean_string_utf8_next_fast(v_fst_359_, v_snd_360_);
lean_inc(v_fst_359_);
v_it_x27_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_374_, 0, v_fst_359_);
lean_ctor_set(v_it_x27_374_, 1, v___x_373_);
v___x_380_ = lean_uint32_dec_eq(v_c_372_, v___x_370_);
if (v___x_380_ == 0)
{
v___y_376_ = v___x_371_;
goto v___jp_375_;
}
else
{
uint8_t v___x_381_; 
v___x_381_ = lean_nat_dec_eq(v___x_355_, v___x_356_);
v___y_376_ = v___x_381_;
goto v___jp_375_;
}
v___jp_375_:
{
if (v___y_376_ == 0)
{
lean_object* v___x_377_; 
lean_dec_ref_known(v_it_x27_374_, 2);
v___x_377_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_360_);
v_pos_362_ = v_a_358_;
v_snd_363_ = v_snd_360_;
v_err_364_ = v___x_377_;
goto v___jp_361_;
}
else
{
lean_object* v___x_378_; 
lean_dec(v_snd_360_);
lean_dec_ref(v_a_358_);
v___x_378_ = lean_string_push(v_acc_357_, v_c_372_);
v_acc_357_ = v___x_378_;
v_a_358_ = v_it_x27_374_;
goto _start;
}
}
}
else
{
lean_object* v___x_382_; 
v___x_382_ = lean_box(0);
lean_inc(v_snd_360_);
v_pos_362_ = v_a_358_;
v_snd_363_ = v_snd_360_;
v_err_364_ = v___x_382_;
goto v___jp_361_;
}
v___jp_361_:
{
uint8_t v_decide_365_; 
v_decide_365_ = lean_nat_dec_eq(v_snd_360_, v_snd_363_);
lean_dec(v_snd_363_);
lean_dec(v_snd_360_);
if (v_decide_365_ == 0)
{
lean_object* v___x_366_; 
lean_dec_ref(v_acc_357_);
lean_inc(v_err_364_);
v___x_366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_366_, 0, v_pos_362_);
lean_ctor_set(v___x_366_, 1, v_err_364_);
return v___x_366_;
}
else
{
lean_object* v___x_367_; 
v___x_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_367_, 0, v_pos_362_);
lean_ctor_set(v___x_367_, 1, v_acc_357_);
return v___x_367_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2_spec__3___boxed(lean_object* v___x_383_, lean_object* v___x_384_, lean_object* v___x_385_, lean_object* v_acc_386_, lean_object* v_a_387_){
_start:
{
uint32_t v___x_9733__boxed_388_; lean_object* v_res_389_; 
v___x_9733__boxed_388_ = lean_unbox_uint32(v___x_383_);
lean_dec(v___x_383_);
v_res_389_ = l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2_spec__3(v___x_9733__boxed_388_, v___x_384_, v___x_385_, v_acc_386_, v_a_387_);
lean_dec(v___x_385_);
lean_dec(v___x_384_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2(uint32_t v___x_390_, lean_object* v___x_391_, lean_object* v___x_392_, lean_object* v_acc_393_, lean_object* v_a_394_){
_start:
{
lean_object* v_fst_395_; lean_object* v_snd_396_; lean_object* v_pos_398_; lean_object* v_snd_399_; lean_object* v_err_400_; lean_object* v___x_404_; uint8_t v___x_405_; 
v_fst_395_ = lean_ctor_get(v_a_394_, 0);
v_snd_396_ = lean_ctor_get(v_a_394_, 1);
lean_inc(v_snd_396_);
v___x_404_ = lean_string_utf8_byte_size(v_fst_395_);
v___x_405_ = lean_nat_dec_eq(v_snd_396_, v___x_404_);
if (v___x_405_ == 0)
{
uint32_t v___x_406_; uint8_t v___x_407_; uint32_t v_c_408_; lean_object* v___x_409_; lean_object* v_it_x27_410_; uint8_t v___y_412_; uint8_t v___x_416_; 
v___x_406_ = 39;
v___x_407_ = lean_uint32_dec_eq(v___x_390_, v___x_406_);
v_c_408_ = lean_string_utf8_get_fast(v_fst_395_, v_snd_396_);
v___x_409_ = lean_string_utf8_next_fast(v_fst_395_, v_snd_396_);
lean_inc(v_fst_395_);
v_it_x27_410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_410_, 0, v_fst_395_);
lean_ctor_set(v_it_x27_410_, 1, v___x_409_);
v___x_416_ = lean_uint32_dec_eq(v_c_408_, v___x_406_);
if (v___x_416_ == 0)
{
v___y_412_ = v___x_407_;
goto v___jp_411_;
}
else
{
uint8_t v___x_417_; 
v___x_417_ = lean_nat_dec_eq(v___x_391_, v___x_392_);
v___y_412_ = v___x_417_;
goto v___jp_411_;
}
v___jp_411_:
{
if (v___y_412_ == 0)
{
lean_object* v___x_413_; 
lean_dec_ref_known(v_it_x27_410_, 2);
v___x_413_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_396_);
v_pos_398_ = v_a_394_;
v_snd_399_ = v_snd_396_;
v_err_400_ = v___x_413_;
goto v___jp_397_;
}
else
{
lean_object* v___x_414_; lean_object* v___x_415_; 
lean_dec(v_snd_396_);
lean_dec_ref(v_a_394_);
v___x_414_ = lean_string_push(v_acc_393_, v_c_408_);
v___x_415_ = l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2_spec__3(v___x_390_, v___x_391_, v___x_392_, v___x_414_, v_it_x27_410_);
return v___x_415_;
}
}
}
else
{
lean_object* v___x_418_; 
v___x_418_ = lean_box(0);
lean_inc(v_snd_396_);
v_pos_398_ = v_a_394_;
v_snd_399_ = v_snd_396_;
v_err_400_ = v___x_418_;
goto v___jp_397_;
}
v___jp_397_:
{
uint8_t v_decide_401_; 
v_decide_401_ = lean_nat_dec_eq(v_snd_396_, v_snd_399_);
lean_dec(v_snd_399_);
lean_dec(v_snd_396_);
if (v_decide_401_ == 0)
{
lean_object* v___x_402_; 
lean_dec_ref(v_acc_393_);
lean_inc(v_err_400_);
v___x_402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_402_, 0, v_pos_398_);
lean_ctor_set(v___x_402_, 1, v_err_400_);
return v___x_402_;
}
else
{
lean_object* v___x_403_; 
v___x_403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_403_, 0, v_pos_398_);
lean_ctor_set(v___x_403_, 1, v_acc_393_);
return v___x_403_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2___boxed(lean_object* v___x_419_, lean_object* v___x_420_, lean_object* v___x_421_, lean_object* v_acc_422_, lean_object* v_a_423_){
_start:
{
uint32_t v___x_9787__boxed_424_; lean_object* v_res_425_; 
v___x_9787__boxed_424_ = lean_unbox_uint32(v___x_419_);
lean_dec(v___x_419_);
v_res_425_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2(v___x_9787__boxed_424_, v___x_420_, v___x_421_, v_acc_422_, v_a_423_);
lean_dec(v___x_421_);
lean_dec(v___x_420_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0(uint32_t v___x_429_, lean_object* v___y_430_){
_start:
{
lean_object* v_fst_431_; lean_object* v_snd_432_; lean_object* v___x_433_; uint8_t v___x_434_; 
v_fst_431_ = lean_ctor_get(v___y_430_, 0);
v_snd_432_ = lean_ctor_get(v___y_430_, 1);
v___x_433_ = lean_string_utf8_byte_size(v_fst_431_);
v___x_434_ = lean_nat_dec_eq(v_snd_432_, v___x_433_);
if (v___x_434_ == 0)
{
uint32_t v_c_435_; uint8_t v___x_436_; 
v_c_435_ = lean_string_utf8_get_fast(v_fst_431_, v_snd_432_);
v___x_436_ = lean_uint32_dec_eq(v_c_435_, v___x_429_);
if (v___x_436_ == 0)
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__1));
v___x_438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_438_, 0, v___y_430_);
lean_ctor_set(v___x_438_, 1, v___x_437_);
return v___x_438_;
}
else
{
lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_491_; 
lean_inc(v_snd_432_);
lean_inc(v_fst_431_);
v_isSharedCheck_491_ = !lean_is_exclusive(v___y_430_);
if (v_isSharedCheck_491_ == 0)
{
lean_object* v_unused_492_; lean_object* v_unused_493_; 
v_unused_492_ = lean_ctor_get(v___y_430_, 1);
lean_dec(v_unused_492_);
v_unused_493_ = lean_ctor_get(v___y_430_, 0);
lean_dec(v_unused_493_);
v___x_440_ = v___y_430_;
v_isShared_441_ = v_isSharedCheck_491_;
goto v_resetjp_439_;
}
else
{
lean_dec(v___y_430_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_491_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_442_; lean_object* v_it_x27_444_; 
v___x_442_ = lean_string_utf8_next_fast(v_fst_431_, v_snd_432_);
lean_inc(v_fst_431_);
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 1, v___x_442_);
v_it_x27_444_ = v___x_440_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_fst_431_);
lean_ctor_set(v_reuseFailAlloc_490_, 1, v___x_442_);
v_it_x27_444_ = v_reuseFailAlloc_490_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
uint8_t v___x_445_; 
v___x_445_ = lean_nat_dec_eq(v___x_442_, v___x_433_);
if (v___x_445_ == 0)
{
uint32_t v___x_446_; uint8_t v___x_447_; 
v___x_446_ = lean_string_utf8_get_fast(v_fst_431_, v___x_442_);
v___x_447_ = lean_uint32_dec_eq(v___x_446_, v___x_429_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
lean_dec_ref(v_it_x27_444_);
v___x_448_ = lean_string_utf8_next_fast(v_fst_431_, v___x_442_);
v___x_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_449_, 0, v_fst_431_);
lean_ctor_set(v___x_449_, 1, v___x_448_);
v___x_450_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_451_ = lean_string_push(v___x_450_, v___x_446_);
v___x_452_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__2(v_c_435_, v_snd_432_, v___x_433_, v___x_451_, v___x_449_);
lean_dec(v_snd_432_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v_pos_453_; lean_object* v_res_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_485_; 
v_pos_453_ = lean_ctor_get(v___x_452_, 0);
v_res_454_ = lean_ctor_get(v___x_452_, 1);
v_isSharedCheck_485_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_485_ == 0)
{
v___x_456_ = v___x_452_;
v_isShared_457_ = v_isSharedCheck_485_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_res_454_);
lean_inc(v_pos_453_);
lean_dec(v___x_452_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_485_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v_fst_458_; lean_object* v_snd_459_; lean_object* v___x_460_; uint8_t v___x_461_; 
v_fst_458_ = lean_ctor_get(v_pos_453_, 0);
v_snd_459_ = lean_ctor_get(v_pos_453_, 1);
v___x_460_ = lean_string_utf8_byte_size(v_fst_458_);
v___x_461_ = lean_nat_dec_eq(v_snd_459_, v___x_460_);
if (v___x_461_ == 0)
{
uint32_t v_c_462_; uint8_t v___x_463_; 
v_c_462_ = lean_string_utf8_get_fast(v_fst_458_, v_snd_459_);
v___x_463_ = lean_uint32_dec_eq(v_c_462_, v___x_429_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; lean_object* v___x_466_; 
lean_dec(v_res_454_);
v___x_464_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___closed__1));
if (v_isShared_457_ == 0)
{
lean_ctor_set_tag(v___x_456_, 1);
lean_ctor_set(v___x_456_, 1, v___x_464_);
v___x_466_ = v___x_456_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_pos_453_);
lean_ctor_set(v_reuseFailAlloc_467_, 1, v___x_464_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
else
{
lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_478_; 
lean_inc(v_snd_459_);
lean_inc(v_fst_458_);
v_isSharedCheck_478_ = !lean_is_exclusive(v_pos_453_);
if (v_isSharedCheck_478_ == 0)
{
lean_object* v_unused_479_; lean_object* v_unused_480_; 
v_unused_479_ = lean_ctor_get(v_pos_453_, 1);
lean_dec(v_unused_479_);
v_unused_480_ = lean_ctor_get(v_pos_453_, 0);
lean_dec(v_unused_480_);
v___x_469_ = v_pos_453_;
v_isShared_470_ = v_isSharedCheck_478_;
goto v_resetjp_468_;
}
else
{
lean_dec(v_pos_453_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_478_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_471_; lean_object* v_it_x27_473_; 
v___x_471_ = lean_string_utf8_next_fast(v_fst_458_, v_snd_459_);
lean_dec(v_snd_459_);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 1, v___x_471_);
v_it_x27_473_ = v___x_469_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_fst_458_);
lean_ctor_set(v_reuseFailAlloc_477_, 1, v___x_471_);
v_it_x27_473_ = v_reuseFailAlloc_477_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
lean_object* v___x_475_; 
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v_it_x27_473_);
v___x_475_ = v___x_456_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_it_x27_473_);
lean_ctor_set(v_reuseFailAlloc_476_, 1, v_res_454_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
}
}
else
{
lean_object* v___x_481_; lean_object* v___x_483_; 
lean_dec(v_res_454_);
v___x_481_ = lean_box(0);
if (v_isShared_457_ == 0)
{
lean_ctor_set_tag(v___x_456_, 1);
lean_ctor_set(v___x_456_, 1, v___x_481_);
v___x_483_ = v___x_456_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v_pos_453_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v___x_481_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
}
}
else
{
return v___x_452_;
}
}
else
{
lean_object* v___x_486_; lean_object* v___x_487_; 
lean_dec(v_snd_432_);
lean_dec(v_fst_431_);
v___x_486_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_487_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_487_, 0, v_it_x27_444_);
lean_ctor_set(v___x_487_, 1, v___x_486_);
return v___x_487_;
}
}
else
{
lean_object* v___x_488_; lean_object* v___x_489_; 
lean_dec(v_snd_432_);
lean_dec(v_fst_431_);
v___x_488_ = lean_box(0);
v___x_489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_489_, 0, v_it_x27_444_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
return v___x_489_;
}
}
}
}
}
else
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = lean_box(0);
v___x_495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_495_, 0, v___y_430_);
lean_ctor_set(v___x_495_, 1, v___x_494_);
return v___x_495_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___boxed(lean_object* v___x_496_, lean_object* v___y_497_){
_start:
{
uint32_t v___x_9851__boxed_498_; lean_object* v_res_499_; 
v___x_9851__boxed_498_ = lean_unbox_uint32(v___x_496_);
lean_dec(v___x_496_);
v_res_499_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0(v___x_9851__boxed_498_, v___y_497_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__3(lean_object* v___x_500_, lean_object* v___x_501_, lean_object* v_acc_502_, lean_object* v_a_503_){
_start:
{
lean_object* v_fst_504_; lean_object* v_snd_505_; lean_object* v_pos_507_; lean_object* v_snd_508_; lean_object* v_err_509_; lean_object* v___x_515_; uint8_t v___x_516_; 
v_fst_504_ = lean_ctor_get(v_a_503_, 0);
v_snd_505_ = lean_ctor_get(v_a_503_, 1);
lean_inc(v_snd_505_);
v___x_515_ = lean_string_utf8_byte_size(v_fst_504_);
v___x_516_ = lean_nat_dec_eq(v_snd_505_, v___x_515_);
if (v___x_516_ == 0)
{
uint32_t v___x_517_; uint8_t v_decide_518_; uint32_t v___x_519_; uint32_t v_c_520_; lean_object* v___x_521_; lean_object* v_it_x27_522_; uint8_t v___y_524_; uint8_t v___y_525_; uint8_t v___y_526_; uint8_t v___y_530_; uint8_t v___y_531_; uint8_t v___y_534_; uint32_t v___x_541_; uint8_t v___x_542_; 
v___x_517_ = 34;
v_decide_518_ = lean_nat_dec_eq(v___x_500_, v___x_501_);
v___x_519_ = 39;
v_c_520_ = lean_string_utf8_get_fast(v_fst_504_, v_snd_505_);
v___x_521_ = lean_string_utf8_next_fast(v_fst_504_, v_snd_505_);
lean_inc(v_fst_504_);
v_it_x27_522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_522_, 0, v_fst_504_);
lean_ctor_set(v_it_x27_522_, 1, v___x_521_);
v___x_541_ = 65;
v___x_542_ = lean_uint32_dec_le(v___x_541_, v_c_520_);
if (v___x_542_ == 0)
{
goto v___jp_536_;
}
else
{
uint32_t v___x_543_; uint8_t v___x_544_; 
v___x_543_ = 90;
v___x_544_ = lean_uint32_dec_le(v_c_520_, v___x_543_);
if (v___x_544_ == 0)
{
goto v___jp_536_;
}
else
{
v___y_534_ = v___x_516_;
goto v___jp_533_;
}
}
v___jp_523_:
{
if (v___y_524_ == 0)
{
lean_dec_ref_known(v_it_x27_522_, 2);
goto v___jp_513_;
}
else
{
if (v___y_525_ == 0)
{
lean_dec_ref_known(v_it_x27_522_, 2);
goto v___jp_513_;
}
else
{
if (v___y_526_ == 0)
{
lean_dec_ref_known(v_it_x27_522_, 2);
goto v___jp_513_;
}
else
{
lean_object* v___x_527_; 
lean_dec(v_snd_505_);
lean_dec_ref(v_a_503_);
v___x_527_ = lean_string_push(v_acc_502_, v_c_520_);
v_acc_502_ = v___x_527_;
v_a_503_ = v_it_x27_522_;
goto _start;
}
}
}
}
v___jp_529_:
{
uint8_t v___x_532_; 
v___x_532_ = lean_uint32_dec_eq(v_c_520_, v___x_517_);
if (v___x_532_ == 0)
{
v___y_524_ = v___y_531_;
v___y_525_ = v___y_530_;
v___y_526_ = v_decide_518_;
goto v___jp_523_;
}
else
{
v___y_524_ = v___y_531_;
v___y_525_ = v___y_530_;
v___y_526_ = v___x_516_;
goto v___jp_523_;
}
}
v___jp_533_:
{
uint8_t v___x_535_; 
v___x_535_ = lean_uint32_dec_eq(v_c_520_, v___x_519_);
if (v___x_535_ == 0)
{
v___y_530_ = v___y_534_;
v___y_531_ = v_decide_518_;
goto v___jp_529_;
}
else
{
v___y_530_ = v___y_534_;
v___y_531_ = v___x_516_;
goto v___jp_529_;
}
}
v___jp_536_:
{
uint32_t v___x_537_; uint8_t v___x_538_; 
v___x_537_ = 97;
v___x_538_ = lean_uint32_dec_le(v___x_537_, v_c_520_);
if (v___x_538_ == 0)
{
v___y_534_ = v_decide_518_;
goto v___jp_533_;
}
else
{
uint32_t v___x_539_; uint8_t v___x_540_; 
v___x_539_ = 122;
v___x_540_ = lean_uint32_dec_le(v_c_520_, v___x_539_);
if (v___x_540_ == 0)
{
v___y_534_ = v_decide_518_;
goto v___jp_533_;
}
else
{
v___y_534_ = v___x_516_;
goto v___jp_533_;
}
}
}
}
else
{
lean_object* v___x_545_; 
v___x_545_ = lean_box(0);
lean_inc(v_snd_505_);
v_pos_507_ = v_a_503_;
v_snd_508_ = v_snd_505_;
v_err_509_ = v___x_545_;
goto v___jp_506_;
}
v___jp_506_:
{
uint8_t v_decide_510_; 
v_decide_510_ = lean_nat_dec_eq(v_snd_505_, v_snd_508_);
lean_dec(v_snd_508_);
lean_dec(v_snd_505_);
if (v_decide_510_ == 0)
{
lean_object* v___x_511_; 
lean_dec_ref(v_acc_502_);
lean_inc(v_err_509_);
v___x_511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_511_, 0, v_pos_507_);
lean_ctor_set(v___x_511_, 1, v_err_509_);
return v___x_511_;
}
else
{
lean_object* v___x_512_; 
v___x_512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_512_, 0, v_pos_507_);
lean_ctor_set(v___x_512_, 1, v_acc_502_);
return v___x_512_;
}
}
v___jp_513_:
{
lean_object* v___x_514_; 
v___x_514_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_505_);
v_pos_507_ = v_a_503_;
v_snd_508_ = v_snd_505_;
v_err_509_ = v___x_514_;
goto v___jp_506_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__3___boxed(lean_object* v___x_546_, lean_object* v___x_547_, lean_object* v_acc_548_, lean_object* v_a_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__3(v___x_546_, v___x_547_, v_acc_548_, v_a_549_);
lean_dec(v___x_547_);
lean_dec(v___x_546_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__2(lean_object* v_snd_551_, lean_object* v_snd_552_, uint32_t v___x_553_, uint8_t v_decide_554_, uint32_t v___x_555_, lean_object* v___y_556_){
_start:
{
lean_object* v_fst_560_; lean_object* v_snd_561_; lean_object* v___x_562_; uint8_t v___x_563_; 
v_fst_560_ = lean_ctor_get(v___y_556_, 0);
v_snd_561_ = lean_ctor_get(v___y_556_, 1);
v___x_562_ = lean_string_utf8_byte_size(v_fst_560_);
v___x_563_ = lean_nat_dec_eq(v_snd_561_, v___x_562_);
if (v___x_563_ == 0)
{
uint32_t v_c_564_; lean_object* v___x_565_; lean_object* v_it_x27_566_; uint8_t v___y_568_; uint8_t v___y_569_; uint8_t v___y_570_; uint8_t v___y_575_; uint8_t v___y_576_; uint8_t v___y_579_; uint32_t v___x_586_; uint8_t v___x_587_; 
v_c_564_ = lean_string_utf8_get_fast(v_fst_560_, v_snd_561_);
v___x_565_ = lean_string_utf8_next_fast(v_fst_560_, v_snd_561_);
lean_inc(v_fst_560_);
v_it_x27_566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_566_, 0, v_fst_560_);
lean_ctor_set(v_it_x27_566_, 1, v___x_565_);
v___x_586_ = 65;
v___x_587_ = lean_uint32_dec_le(v___x_586_, v_c_564_);
if (v___x_587_ == 0)
{
goto v___jp_581_;
}
else
{
uint32_t v___x_588_; uint8_t v___x_589_; 
v___x_588_ = 90;
v___x_589_ = lean_uint32_dec_le(v_c_564_, v___x_588_);
if (v___x_589_ == 0)
{
goto v___jp_581_;
}
else
{
v___y_579_ = v___x_563_;
goto v___jp_578_;
}
}
v___jp_567_:
{
if (v___y_569_ == 0)
{
lean_dec_ref_known(v_it_x27_566_, 2);
goto v___jp_557_;
}
else
{
if (v___y_568_ == 0)
{
lean_dec_ref_known(v_it_x27_566_, 2);
goto v___jp_557_;
}
else
{
if (v___y_570_ == 0)
{
lean_dec_ref_known(v_it_x27_566_, 2);
goto v___jp_557_;
}
else
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
lean_dec_ref(v___y_556_);
v___x_571_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_572_ = lean_string_push(v___x_571_, v_c_564_);
v___x_573_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__3(v_snd_551_, v_snd_552_, v___x_572_, v_it_x27_566_);
return v___x_573_;
}
}
}
}
v___jp_574_:
{
uint8_t v___x_577_; 
v___x_577_ = lean_uint32_dec_eq(v_c_564_, v___x_553_);
if (v___x_577_ == 0)
{
v___y_568_ = v___y_575_;
v___y_569_ = v___y_576_;
v___y_570_ = v_decide_554_;
goto v___jp_567_;
}
else
{
v___y_568_ = v___y_575_;
v___y_569_ = v___y_576_;
v___y_570_ = v___x_563_;
goto v___jp_567_;
}
}
v___jp_578_:
{
uint8_t v___x_580_; 
v___x_580_ = lean_uint32_dec_eq(v_c_564_, v___x_555_);
if (v___x_580_ == 0)
{
v___y_575_ = v___y_579_;
v___y_576_ = v_decide_554_;
goto v___jp_574_;
}
else
{
v___y_575_ = v___y_579_;
v___y_576_ = v___x_563_;
goto v___jp_574_;
}
}
v___jp_581_:
{
uint32_t v___x_582_; uint8_t v___x_583_; 
v___x_582_ = 97;
v___x_583_ = lean_uint32_dec_le(v___x_582_, v_c_564_);
if (v___x_583_ == 0)
{
v___y_579_ = v_decide_554_;
goto v___jp_578_;
}
else
{
uint32_t v___x_584_; uint8_t v___x_585_; 
v___x_584_ = 122;
v___x_585_ = lean_uint32_dec_le(v_c_564_, v___x_584_);
if (v___x_585_ == 0)
{
v___y_579_ = v_decide_554_;
goto v___jp_578_;
}
else
{
v___y_579_ = v___x_563_;
goto v___jp_578_;
}
}
}
}
else
{
lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_590_ = lean_box(0);
v___x_591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_591_, 0, v___y_556_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
return v___x_591_;
}
v___jp_557_:
{
lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_558_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_559_, 0, v___y_556_);
lean_ctor_set(v___x_559_, 1, v___x_558_);
return v___x_559_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__2___boxed(lean_object* v_snd_592_, lean_object* v_snd_593_, lean_object* v___x_594_, lean_object* v_decide_595_, lean_object* v___x_596_, lean_object* v___y_597_){
_start:
{
uint32_t v___x_10067__boxed_598_; uint8_t v_decide_10068__boxed_599_; uint32_t v___x_10069__boxed_600_; lean_object* v_res_601_; 
v___x_10067__boxed_598_ = lean_unbox_uint32(v___x_594_);
lean_dec(v___x_594_);
v_decide_10068__boxed_599_ = lean_unbox(v_decide_595_);
v___x_10069__boxed_600_ = lean_unbox_uint32(v___x_596_);
lean_dec(v___x_596_);
v_res_601_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__2(v_snd_592_, v_snd_593_, v___x_10067__boxed_598_, v_decide_10068__boxed_599_, v___x_10069__boxed_600_, v___y_597_);
lean_dec(v_snd_593_);
lean_dec(v_snd_592_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__3(uint32_t v___y_602_){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_603_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_604_ = lean_string_push(v___x_603_, v___y_602_);
v___x_605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_605_, 0, v___x_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__3___boxed(lean_object* v___y_606_){
_start:
{
uint32_t v___y_10143__boxed_607_; lean_object* v_res_608_; 
v___y_10143__boxed_607_ = lean_unbox_uint32(v___y_606_);
lean_dec(v___y_606_);
v_res_608_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__3(v___y_10143__boxed_607_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__4(lean_object* v___y_609_){
_start:
{
lean_object* v_fst_610_; lean_object* v_snd_611_; lean_object* v___x_612_; uint8_t v___x_613_; 
v_fst_610_ = lean_ctor_get(v___y_609_, 0);
v_snd_611_ = lean_ctor_get(v___y_609_, 1);
v___x_612_ = lean_string_utf8_byte_size(v_fst_610_);
v___x_613_ = lean_nat_dec_eq(v_snd_611_, v___x_612_);
if (v___x_613_ == 0)
{
lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_624_; 
lean_inc(v_snd_611_);
lean_inc(v_fst_610_);
v_isSharedCheck_624_ = !lean_is_exclusive(v___y_609_);
if (v_isSharedCheck_624_ == 0)
{
lean_object* v_unused_625_; lean_object* v_unused_626_; 
v_unused_625_ = lean_ctor_get(v___y_609_, 1);
lean_dec(v_unused_625_);
v_unused_626_ = lean_ctor_get(v___y_609_, 0);
lean_dec(v_unused_626_);
v___x_615_ = v___y_609_;
v_isShared_616_ = v_isSharedCheck_624_;
goto v_resetjp_614_;
}
else
{
lean_dec(v___y_609_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_624_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
uint32_t v_c_617_; lean_object* v___x_618_; lean_object* v_it_x27_620_; 
v_c_617_ = lean_string_utf8_get_fast(v_fst_610_, v_snd_611_);
v___x_618_ = lean_string_utf8_next_fast(v_fst_610_, v_snd_611_);
lean_dec(v_snd_611_);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 1, v___x_618_);
v_it_x27_620_ = v___x_615_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_fst_610_);
lean_ctor_set(v_reuseFailAlloc_623_, 1, v___x_618_);
v_it_x27_620_ = v_reuseFailAlloc_623_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_621_ = lean_box_uint32(v_c_617_);
v___x_622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_622_, 0, v_it_x27_620_);
lean_ctor_set(v___x_622_, 1, v___x_621_);
return v___x_622_;
}
}
}
else
{
lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_627_ = lean_box(0);
v___x_628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_628_, 0, v___y_609_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
return v___x_628_;
}
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_629_; lean_object* v___x_630_; 
v___x_629_ = 34;
v___x_630_ = lean_box_uint32(v___x_629_);
return v___x_630_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0(void){
_start:
{
lean_object* v___x_631_; lean_object* v___f_632_; 
v___x_631_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1;
v___f_632_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___boxed), 2, 1);
lean_closure_set(v___f_632_, 0, v___x_631_);
return v___f_632_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_633_; lean_object* v___x_634_; 
v___x_633_ = 39;
v___x_634_ = lean_box_uint32(v___x_633_);
return v___x_634_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1(void){
_start:
{
lean_object* v___x_635_; lean_object* v___f_636_; 
v___x_635_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1;
v___f_636_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__0___boxed), 2, 1);
lean_closure_set(v___f_636_, 0, v___x_635_);
return v___f_636_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart(lean_object* v_a_642_){
_start:
{
lean_object* v___x_643_; 
lean_inc_ref(v_a_642_);
v___x_643_ = l_Std_Time_parseModifier(v_a_642_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v_pos_644_; lean_object* v_res_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_653_; 
lean_dec_ref(v_a_642_);
v_pos_644_ = lean_ctor_get(v___x_643_, 0);
v_res_645_ = lean_ctor_get(v___x_643_, 1);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_653_ == 0)
{
v___x_647_ = v___x_643_;
v_isShared_648_ = v_isSharedCheck_653_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_res_645_);
lean_inc(v_pos_644_);
lean_dec(v___x_643_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_653_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_649_; lean_object* v___x_651_; 
v___x_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_649_, 0, v_res_645_);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 1, v___x_649_);
v___x_651_ = v___x_647_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_pos_644_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v___x_649_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
else
{
lean_object* v_pos_654_; lean_object* v_err_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_715_; 
v_pos_654_ = lean_ctor_get(v___x_643_, 0);
v_err_655_ = lean_ctor_get(v___x_643_, 1);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_715_ == 0)
{
v___x_657_ = v___x_643_;
v_isShared_658_ = v_isSharedCheck_715_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_err_655_);
lean_inc(v_pos_654_);
lean_dec(v___x_643_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_715_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v_snd_659_; lean_object* v_fst_660_; lean_object* v_snd_661_; uint8_t v_decide_662_; 
v_snd_659_ = lean_ctor_get(v_a_642_, 1);
lean_inc(v_snd_659_);
lean_dec_ref(v_a_642_);
v_fst_660_ = lean_ctor_get(v_pos_654_, 0);
v_snd_661_ = lean_ctor_get(v_pos_654_, 1);
v_decide_662_ = lean_nat_dec_eq(v_snd_659_, v_snd_661_);
lean_dec(v_snd_659_);
if (v_decide_662_ == 0)
{
lean_object* v___x_664_; 
if (v_isShared_658_ == 0)
{
v___x_664_ = v___x_657_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_pos_654_);
lean_ctor_set(v_reuseFailAlloc_665_, 1, v_err_655_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
else
{
lean_object* v___f_666_; lean_object* v___y_668_; lean_object* v_pos_669_; lean_object* v_snd_670_; lean_object* v___x_687_; uint8_t v___x_688_; 
lean_inc(v_snd_661_);
lean_dec(v_err_655_);
v___f_666_ = ((lean_object*)(l_Std_Time_instCoeStringFormatPart___closed__0));
v___x_687_ = lean_string_utf8_byte_size(v_fst_660_);
v___x_688_ = lean_nat_dec_eq(v_snd_661_, v___x_687_);
if (v___x_688_ == 0)
{
uint32_t v___x_689_; uint32_t v_c_690_; uint8_t v___x_691_; 
v___x_689_ = 92;
v_c_690_ = lean_string_utf8_get_fast(v_fst_660_, v_snd_661_);
v___x_691_ = lean_uint32_dec_eq(v_c_690_, v___x_689_);
if (v___x_691_ == 0)
{
lean_object* v___x_692_; lean_object* v___x_694_; 
v___x_692_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__3));
lean_inc(v_pos_654_);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 1, v___x_692_);
v___x_694_ = v___x_657_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_pos_654_);
lean_ctor_set(v_reuseFailAlloc_695_, 1, v___x_692_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
lean_inc(v_snd_661_);
v___y_668_ = v___x_694_;
v_pos_669_ = v_pos_654_;
v_snd_670_ = v_snd_661_;
goto v___jp_667_;
}
}
else
{
lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_708_; 
lean_inc(v_fst_660_);
lean_del_object(v___x_657_);
v_isSharedCheck_708_ = !lean_is_exclusive(v_pos_654_);
if (v_isSharedCheck_708_ == 0)
{
lean_object* v_unused_709_; lean_object* v_unused_710_; 
v_unused_709_ = lean_ctor_get(v_pos_654_, 1);
lean_dec(v_unused_709_);
v_unused_710_ = lean_ctor_get(v_pos_654_, 0);
lean_dec(v_unused_710_);
v___x_697_ = v_pos_654_;
v_isShared_698_ = v_isSharedCheck_708_;
goto v_resetjp_696_;
}
else
{
lean_dec(v_pos_654_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_708_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___f_699_; lean_object* v___f_700_; lean_object* v___x_701_; lean_object* v_it_x27_703_; 
v___f_699_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__4));
v___f_700_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__5));
v___x_701_ = lean_string_utf8_next_fast(v_fst_660_, v_snd_661_);
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 1, v___x_701_);
v_it_x27_703_ = v___x_697_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_fst_660_);
lean_ctor_set(v_reuseFailAlloc_707_, 1, v___x_701_);
v_it_x27_703_ = v_reuseFailAlloc_707_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_object* v___x_704_; 
v___x_704_ = l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(v___f_700_, v___f_699_, v_it_x27_703_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_dec(v_snd_661_);
return v___x_704_;
}
else
{
lean_object* v_pos_705_; lean_object* v_snd_706_; 
v_pos_705_ = lean_ctor_get(v___x_704_, 0);
lean_inc(v_pos_705_);
v_snd_706_ = lean_ctor_get(v_pos_705_, 1);
lean_inc(v_snd_706_);
v___y_668_ = v___x_704_;
v_pos_669_ = v_pos_705_;
v_snd_670_ = v_snd_706_;
goto v___jp_667_;
}
}
}
}
}
else
{
lean_object* v___x_711_; lean_object* v___x_713_; 
v___x_711_ = lean_box(0);
lean_inc(v_pos_654_);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 1, v___x_711_);
v___x_713_ = v___x_657_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_pos_654_);
lean_ctor_set(v_reuseFailAlloc_714_, 1, v___x_711_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
lean_inc(v_snd_661_);
v___y_668_ = v___x_713_;
v_pos_669_ = v_pos_654_;
v_snd_670_ = v_snd_661_;
goto v___jp_667_;
}
}
v___jp_667_:
{
uint8_t v_decide_671_; 
v_decide_671_ = lean_nat_dec_eq(v_snd_661_, v_snd_670_);
lean_dec(v_snd_661_);
if (v_decide_671_ == 0)
{
lean_dec(v_snd_670_);
lean_dec_ref(v_pos_669_);
return v___y_668_;
}
else
{
lean_object* v___f_672_; lean_object* v___x_673_; 
lean_dec_ref(v___y_668_);
v___f_672_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0);
v___x_673_ = l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(v___f_672_, v___f_666_, v_pos_669_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_dec(v_snd_670_);
return v___x_673_;
}
else
{
lean_object* v_pos_674_; lean_object* v_snd_675_; uint8_t v_decide_676_; 
v_pos_674_ = lean_ctor_get(v___x_673_, 0);
v_snd_675_ = lean_ctor_get(v_pos_674_, 1);
v_decide_676_ = lean_nat_dec_eq(v_snd_670_, v_snd_675_);
lean_dec(v_snd_670_);
if (v_decide_676_ == 0)
{
return v___x_673_;
}
else
{
lean_object* v___f_677_; lean_object* v___x_678_; 
lean_inc(v_snd_675_);
lean_inc(v_pos_674_);
lean_dec_ref_known(v___x_673_, 2);
v___f_677_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1);
v___x_678_ = l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(v___f_677_, v___f_666_, v_pos_674_);
if (lean_obj_tag(v___x_678_) == 0)
{
lean_dec(v_snd_675_);
return v___x_678_;
}
else
{
lean_object* v_pos_679_; lean_object* v_snd_680_; uint8_t v_decide_681_; 
v_pos_679_ = lean_ctor_get(v___x_678_, 0);
v_snd_680_ = lean_ctor_get(v_pos_679_, 1);
v_decide_681_ = lean_nat_dec_eq(v_snd_675_, v_snd_680_);
if (v_decide_681_ == 0)
{
lean_dec(v_snd_675_);
return v___x_678_;
}
else
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___f_685_; lean_object* v___x_686_; 
lean_inc(v_pos_679_);
lean_dec_ref_known(v___x_678_, 2);
v___x_682_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__0___boxed__const__1;
v___x_683_ = lean_box(v_decide_681_);
v___x_684_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___closed__1___boxed__const__1;
lean_inc(v_snd_680_);
v___f_685_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__2___boxed), 6, 5);
lean_closure_set(v___f_685_, 0, v_snd_675_);
lean_closure_set(v___f_685_, 1, v_snd_680_);
lean_closure_set(v___f_685_, 2, v___x_682_);
lean_closure_set(v___f_685_, 3, v___x_683_);
lean_closure_set(v___f_685_, 4, v___x_684_);
v___x_686_ = l_Functor_mapRev___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__1___redArg(v___f_685_, v___f_666_, v_pos_679_);
return v___x_686_;
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
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_specParser_spec__0(lean_object* v_acc_716_, lean_object* v_a_717_){
_start:
{
lean_object* v___x_718_; 
lean_inc_ref(v_a_717_);
v___x_718_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart(v_a_717_);
if (lean_obj_tag(v___x_718_) == 0)
{
lean_object* v_pos_719_; lean_object* v_res_720_; lean_object* v___x_721_; 
lean_dec_ref(v_a_717_);
v_pos_719_ = lean_ctor_get(v___x_718_, 0);
lean_inc(v_pos_719_);
v_res_720_ = lean_ctor_get(v___x_718_, 1);
lean_inc(v_res_720_);
lean_dec_ref_known(v___x_718_, 2);
v___x_721_ = lean_array_push(v_acc_716_, v_res_720_);
v_acc_716_ = v___x_721_;
v_a_717_ = v_pos_719_;
goto _start;
}
else
{
lean_object* v_pos_723_; lean_object* v_err_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_737_; 
v_pos_723_ = lean_ctor_get(v___x_718_, 0);
v_err_724_ = lean_ctor_get(v___x_718_, 1);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_737_ == 0)
{
v___x_726_ = v___x_718_;
v_isShared_727_ = v_isSharedCheck_737_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_err_724_);
lean_inc(v_pos_723_);
lean_dec(v___x_718_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_737_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v_snd_728_; lean_object* v_snd_729_; uint8_t v_decide_730_; 
v_snd_728_ = lean_ctor_get(v_a_717_, 1);
lean_inc(v_snd_728_);
lean_dec_ref(v_a_717_);
v_snd_729_ = lean_ctor_get(v_pos_723_, 1);
v_decide_730_ = lean_nat_dec_eq(v_snd_728_, v_snd_729_);
lean_dec(v_snd_728_);
if (v_decide_730_ == 0)
{
lean_object* v___x_732_; 
lean_dec_ref(v_acc_716_);
if (v_isShared_727_ == 0)
{
v___x_732_ = v___x_726_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_pos_723_);
lean_ctor_set(v_reuseFailAlloc_733_, 1, v_err_724_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
else
{
lean_object* v___x_735_; 
lean_dec(v_err_724_);
if (v_isShared_727_ == 0)
{
lean_ctor_set_tag(v___x_726_, 0);
lean_ctor_set(v___x_726_, 1, v_acc_716_);
v___x_735_ = v___x_726_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_pos_723_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v_acc_716_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_specParser(lean_object* v_a_743_){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__0));
v___x_745_ = l_Std_Internal_Parsec_manyCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_specParser_spec__0(v___x_744_, v_a_743_);
if (lean_obj_tag(v___x_745_) == 0)
{
lean_object* v_pos_746_; lean_object* v_res_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_763_; 
v_pos_746_ = lean_ctor_get(v___x_745_, 0);
v_res_747_ = lean_ctor_get(v___x_745_, 1);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_745_);
if (v_isSharedCheck_763_ == 0)
{
v___x_749_ = v___x_745_;
v_isShared_750_ = v_isSharedCheck_763_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_res_747_);
lean_inc(v_pos_746_);
lean_dec(v___x_745_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_763_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v_fst_751_; lean_object* v_snd_752_; lean_object* v___x_753_; uint8_t v___x_754_; 
v_fst_751_ = lean_ctor_get(v_pos_746_, 0);
v_snd_752_ = lean_ctor_get(v_pos_746_, 1);
v___x_753_ = lean_string_utf8_byte_size(v_fst_751_);
v___x_754_ = lean_nat_dec_eq(v_snd_752_, v___x_753_);
if (v___x_754_ == 0)
{
lean_object* v___x_755_; lean_object* v___x_757_; 
lean_dec(v_res_747_);
v___x_755_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__2));
if (v_isShared_750_ == 0)
{
lean_ctor_set_tag(v___x_749_, 1);
lean_ctor_set(v___x_749_, 1, v___x_755_);
v___x_757_ = v___x_749_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_pos_746_);
lean_ctor_set(v_reuseFailAlloc_758_, 1, v___x_755_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
else
{
lean_object* v___x_759_; lean_object* v___x_761_; 
v___x_759_ = lean_array_to_list(v_res_747_);
if (v_isShared_750_ == 0)
{
lean_ctor_set(v___x_749_, 1, v___x_759_);
v___x_761_ = v___x_749_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_pos_746_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v___x_759_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
else
{
lean_object* v_pos_764_; lean_object* v_err_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_772_; 
v_pos_764_ = lean_ctor_get(v___x_745_, 0);
v_err_765_ = lean_ctor_get(v___x_745_, 1);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_745_);
if (v_isSharedCheck_772_ == 0)
{
v___x_767_ = v___x_745_;
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_err_765_);
lean_inc(v_pos_764_);
lean_dec(v___x_745_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_pos_764_);
lean_ctor_set(v_reuseFailAlloc_771_, 1, v_err_765_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_specParse(lean_object* v_s_773_){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser), 1, 0);
v___x_775_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___x_774_, v_s_773_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1(uint32_t v_a_776_, lean_object* v_x_777_, lean_object* v_x_778_){
_start:
{
lean_object* v_zero_779_; uint8_t v_isZero_780_; 
v_zero_779_ = lean_unsigned_to_nat(0u);
v_isZero_780_ = lean_nat_dec_eq(v_x_777_, v_zero_779_);
if (v_isZero_780_ == 1)
{
lean_dec(v_x_777_);
return v_x_778_;
}
else
{
lean_object* v_one_781_; lean_object* v_n_782_; lean_object* v___x_783_; 
v_one_781_ = lean_unsigned_to_nat(1u);
v_n_782_ = lean_nat_sub(v_x_777_, v_one_781_);
lean_dec(v_x_777_);
v___x_783_ = lean_string_push(v_x_778_, v_a_776_);
v_x_777_ = v_n_782_;
v_x_778_ = v___x_783_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1___boxed(lean_object* v_a_785_, lean_object* v_x_786_, lean_object* v_x_787_){
_start:
{
uint32_t v_a_boxed_788_; lean_object* v_res_789_; 
v_a_boxed_788_ = lean_unbox_uint32(v_a_785_);
lean_dec(v_a_785_);
v_res_789_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1(v_a_boxed_788_, v_x_786_, v_x_787_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(lean_object* v___x_790_, lean_object* v_s_791_, lean_object* v_a_792_, lean_object* v_b_793_){
_start:
{
uint8_t v_decide_794_; 
v_decide_794_ = lean_nat_dec_eq(v_a_792_, v___x_790_);
if (v_decide_794_ == 0)
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_795_ = lean_string_utf8_next_fast(v_s_791_, v_a_792_);
lean_dec(v_a_792_);
v___x_796_ = lean_unsigned_to_nat(1u);
v___x_797_ = lean_nat_add(v_b_793_, v___x_796_);
lean_dec(v_b_793_);
v_a_792_ = v___x_795_;
v_b_793_ = v___x_797_;
goto _start;
}
else
{
lean_dec(v_a_792_);
return v_b_793_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg___boxed(lean_object* v___x_799_, lean_object* v_s_800_, lean_object* v_a_801_, lean_object* v_b_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(v___x_799_, v_s_800_, v_a_801_, v_b_802_);
lean_dec_ref(v_s_800_);
lean_dec(v___x_799_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(lean_object* v_n_804_, uint32_t v_a_805_, lean_object* v_s_806_){
_start:
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_807_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_808_ = lean_unsigned_to_nat(0u);
v___x_809_ = lean_string_utf8_byte_size(v_s_806_);
v___x_810_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(v___x_809_, v_s_806_, v___x_808_, v___x_808_);
v___x_811_ = lean_nat_sub(v_n_804_, v___x_810_);
lean_dec(v___x_810_);
v___x_812_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1(v_a_805_, v___x_811_, v___x_807_);
v___x_813_ = lean_string_append(v___x_812_, v_s_806_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii___boxed(lean_object* v_n_814_, lean_object* v_a_815_, lean_object* v_s_816_){
_start:
{
uint32_t v_a_boxed_817_; lean_object* v_res_818_; 
v_a_boxed_817_ = lean_unbox_uint32(v_a_815_);
lean_dec(v_a_815_);
v_res_818_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v_n_814_, v_a_boxed_817_, v_s_816_);
lean_dec_ref(v_s_816_);
lean_dec(v_n_814_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0(lean_object* v___x_819_, lean_object* v___x_820_, lean_object* v_s_821_, lean_object* v_inst_822_, lean_object* v_R_823_, lean_object* v_a_824_, lean_object* v_b_825_, lean_object* v_c_826_){
_start:
{
lean_object* v___x_827_; 
v___x_827_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(v___x_819_, v_s_821_, v_a_824_, v_b_825_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___boxed(lean_object* v___x_828_, lean_object* v___x_829_, lean_object* v_s_830_, lean_object* v_inst_831_, lean_object* v_R_832_, lean_object* v_a_833_, lean_object* v_b_834_, lean_object* v_c_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0(v___x_828_, v___x_829_, v_s_830_, v_inst_831_, v_R_832_, v_a_833_, v_b_834_, v_c_835_);
lean_dec_ref(v_s_830_);
lean_dec_ref(v___x_829_);
lean_dec(v___x_828_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii(lean_object* v_n_837_, uint32_t v_a_838_, lean_object* v_s_839_){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_840_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_841_ = lean_unsigned_to_nat(0u);
v___x_842_ = lean_string_utf8_byte_size(v_s_839_);
v___x_843_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__0___redArg(v___x_842_, v_s_839_, v___x_841_, v___x_841_);
v___x_844_ = lean_nat_sub(v_n_837_, v___x_843_);
lean_dec(v___x_843_);
v___x_845_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii_spec__1(v_a_838_, v___x_844_, v___x_840_);
v___x_846_ = lean_string_append(v_s_839_, v___x_845_);
lean_dec_ref(v___x_845_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii___boxed(lean_object* v_n_847_, lean_object* v_a_848_, lean_object* v_s_849_){
_start:
{
uint32_t v_a_boxed_850_; lean_object* v_res_851_; 
v_a_boxed_850_ = lean_unbox_uint32(v_a_848_);
lean_dec(v_a_848_);
v_res_851_ = l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii(v_n_847_, v_a_boxed_850_, v_s_849_);
lean_dec(v_n_847_);
return v_res_851_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0(void){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_852_ = lean_unsigned_to_nat(0u);
v___x_853_ = lean_nat_to_int(v___x_852_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_pad(lean_object* v_size_855_, lean_object* v_n_856_, uint8_t v_cut_857_){
_start:
{
lean_object* v_fst_859_; lean_object* v_snd_860_; lean_object* v___x_874_; uint8_t v___x_875_; 
v___x_874_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_875_ = lean_int_dec_lt(v_n_856_, v___x_874_);
if (v___x_875_ == 0)
{
lean_object* v___x_876_; 
v___x_876_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v_fst_859_ = v___x_876_;
v_snd_860_ = v_n_856_;
goto v___jp_858_;
}
else
{
lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_877_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_878_ = lean_int_neg(v_n_856_);
lean_dec(v_n_856_);
v_fst_859_ = v___x_877_;
v_snd_860_ = v___x_878_;
goto v___jp_858_;
}
v___jp_858_:
{
lean_object* v_numStr_861_; lean_object* v___x_862_; uint8_t v___x_863_; 
v_numStr_861_ = l_Int_repr(v_snd_860_);
lean_dec(v_snd_860_);
v___x_862_ = lean_string_utf8_byte_size(v_numStr_861_);
v___x_863_ = lean_nat_dec_lt(v_size_855_, v___x_862_);
if (v___x_863_ == 0)
{
uint32_t v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_864_ = 48;
v___x_865_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v_size_855_, v___x_864_, v_numStr_861_);
lean_dec_ref(v_numStr_861_);
lean_inc_ref(v_fst_859_);
v___x_866_ = lean_string_append(v_fst_859_, v___x_865_);
lean_dec_ref(v___x_865_);
return v___x_866_;
}
else
{
if (v_cut_857_ == 0)
{
lean_object* v___x_867_; 
lean_inc_ref(v_fst_859_);
v___x_867_ = lean_string_append(v_fst_859_, v_numStr_861_);
lean_dec_ref(v_numStr_861_);
return v___x_867_;
}
else
{
lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_868_ = lean_nat_sub(v___x_862_, v_size_855_);
v___x_869_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_numStr_861_);
v___x_870_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_870_, 0, v_numStr_861_);
lean_ctor_set(v___x_870_, 1, v___x_869_);
lean_ctor_set(v___x_870_, 2, v___x_862_);
v___x_871_ = l_String_Slice_Pos_nextn(v___x_870_, v___x_869_, v___x_868_);
lean_dec_ref_known(v___x_870_, 3);
v___x_872_ = lean_string_utf8_extract_fast(v_numStr_861_, v___x_871_, v___x_862_);
lean_dec(v___x_871_);
lean_dec_ref(v_numStr_861_);
lean_inc_ref(v_fst_859_);
v___x_873_ = lean_string_append(v_fst_859_, v___x_872_);
lean_dec_ref(v___x_872_);
return v___x_873_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_pad___boxed(lean_object* v_size_879_, lean_object* v_n_880_, lean_object* v_cut_881_){
_start:
{
uint8_t v_cut_boxed_882_; lean_object* v_res_883_; 
v_cut_boxed_882_ = lean_unbox(v_cut_881_);
v_res_883_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_size_879_, v_n_880_, v_cut_boxed_882_);
lean_dec(v_size_879_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_rightTruncate(lean_object* v_size_884_, lean_object* v_n_885_, uint8_t v_cut_886_){
_start:
{
lean_object* v_fst_888_; lean_object* v_snd_889_; lean_object* v___x_903_; uint8_t v___x_904_; 
v___x_903_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_904_ = lean_int_dec_lt(v_n_885_, v___x_903_);
if (v___x_904_ == 0)
{
lean_object* v___x_905_; 
v___x_905_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v_fst_888_ = v___x_905_;
v_snd_889_ = v_n_885_;
goto v___jp_887_;
}
else
{
lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_906_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_907_ = lean_int_neg(v_n_885_);
lean_dec(v_n_885_);
v_fst_888_ = v___x_906_;
v_snd_889_ = v___x_907_;
goto v___jp_887_;
}
v___jp_887_:
{
lean_object* v_numStr_890_; lean_object* v___x_891_; uint8_t v___x_892_; 
v_numStr_890_ = l_Int_repr(v_snd_889_);
lean_dec(v_snd_889_);
v___x_891_ = lean_string_length(v_numStr_890_);
v___x_892_ = lean_nat_dec_lt(v_size_884_, v___x_891_);
if (v___x_892_ == 0)
{
uint32_t v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_893_ = 48;
v___x_894_ = l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii(v_size_884_, v___x_893_, v_numStr_890_);
lean_dec(v_size_884_);
lean_inc_ref(v_fst_888_);
v___x_895_ = lean_string_append(v_fst_888_, v___x_894_);
lean_dec_ref(v___x_894_);
return v___x_895_;
}
else
{
if (v_cut_886_ == 0)
{
lean_object* v___x_896_; 
lean_dec(v_size_884_);
lean_inc_ref(v_fst_888_);
v___x_896_ = lean_string_append(v_fst_888_, v_numStr_890_);
lean_dec_ref(v_numStr_890_);
return v___x_896_;
}
else
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_897_ = lean_unsigned_to_nat(0u);
v___x_898_ = lean_string_utf8_byte_size(v_numStr_890_);
lean_inc_ref(v_numStr_890_);
v___x_899_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_899_, 0, v_numStr_890_);
lean_ctor_set(v___x_899_, 1, v___x_897_);
lean_ctor_set(v___x_899_, 2, v___x_898_);
v___x_900_ = l_String_Slice_Pos_nextn(v___x_899_, v___x_897_, v_size_884_);
lean_dec_ref_known(v___x_899_, 3);
v___x_901_ = lean_string_utf8_extract_fast(v_numStr_890_, v___x_897_, v___x_900_);
lean_dec(v___x_900_);
lean_dec_ref(v_numStr_890_);
lean_inc_ref(v_fst_888_);
v___x_902_ = lean_string_append(v_fst_888_, v___x_901_);
lean_dec_ref(v___x_901_);
return v___x_902_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_rightTruncate___boxed(lean_object* v_size_908_, lean_object* v_n_909_, lean_object* v_cut_910_){
_start:
{
uint8_t v_cut_boxed_911_; lean_object* v_res_912_; 
v_cut_boxed_911_ = lean_unbox(v_cut_910_);
v_res_912_ = l___private_Std_Time_Format_Basic_0__Std_Time_rightTruncate(v_size_908_, v_n_909_, v_cut_boxed_911_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex(uint8_t v_x_913_){
_start:
{
if (v_x_913_ == 0)
{
lean_object* v___x_914_; 
v___x_914_ = lean_unsigned_to_nat(0u);
return v___x_914_;
}
else
{
lean_object* v___x_915_; 
v___x_915_ = lean_unsigned_to_nat(1u);
return v___x_915_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex___boxed(lean_object* v_x_916_){
_start:
{
uint8_t v_x_40__boxed_917_; lean_object* v_res_918_; 
v_x_40__boxed_917_ = lean_unbox(v_x_916_);
v_res_918_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex(v_x_40__boxed_917_);
return v_res_918_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0(void){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_919_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_920_ = lean_int_neg(v___x_919_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong(lean_object* v_symbols_921_, lean_object* v_month_922_){
_start:
{
lean_object* v_monthLong_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v_monthLong_923_ = lean_ctor_get(v_symbols_921_, 0);
v___x_924_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_925_ = lean_int_add(v_month_922_, v___x_924_);
v___x_926_ = l_Int_toNat(v___x_925_);
lean_dec(v___x_925_);
v___x_927_ = lean_array_fget_borrowed(v_monthLong_923_, v___x_926_);
lean_dec(v___x_926_);
lean_inc(v___x_927_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___boxed(lean_object* v_symbols_928_, lean_object* v_month_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong(v_symbols_928_, v_month_929_);
lean_dec(v_month_929_);
lean_dec_ref(v_symbols_928_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthShort(lean_object* v_symbols_931_, lean_object* v_month_932_){
_start:
{
lean_object* v_monthShort_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
v_monthShort_933_ = lean_ctor_get(v_symbols_931_, 1);
v___x_934_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_935_ = lean_int_add(v_month_932_, v___x_934_);
v___x_936_ = l_Int_toNat(v___x_935_);
lean_dec(v___x_935_);
v___x_937_ = lean_array_fget_borrowed(v_monthShort_933_, v___x_936_);
lean_dec(v___x_936_);
lean_inc(v___x_937_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthShort___boxed(lean_object* v_symbols_938_, lean_object* v_month_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthShort(v_symbols_938_, v_month_939_);
lean_dec(v_month_939_);
lean_dec_ref(v_symbols_938_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthNarrow(lean_object* v_symbols_941_, lean_object* v_month_942_){
_start:
{
lean_object* v_monthNarrow_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v_monthNarrow_943_ = lean_ctor_get(v_symbols_941_, 2);
v___x_944_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_945_ = lean_int_add(v_month_942_, v___x_944_);
v___x_946_ = l_Int_toNat(v___x_945_);
lean_dec(v___x_945_);
v___x_947_ = lean_array_fget_borrowed(v_monthNarrow_943_, v___x_946_);
lean_dec(v___x_946_);
lean_inc(v___x_947_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthNarrow___boxed(lean_object* v_symbols_948_, lean_object* v_month_949_){
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthNarrow(v_symbols_948_, v_month_949_);
lean_dec(v_month_949_);
lean_dec_ref(v_symbols_948_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayLong(lean_object* v_symbols_951_, uint8_t v_wd_952_){
_start:
{
lean_object* v_weekdayLong_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v_weekdayLong_953_ = lean_ctor_get(v_symbols_951_, 3);
v___x_954_ = l_Std_Time_Weekday_toOrdinal(v_wd_952_);
v___x_955_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_956_ = lean_int_add(v___x_954_, v___x_955_);
lean_dec(v___x_954_);
v___x_957_ = l_Int_toNat(v___x_956_);
lean_dec(v___x_956_);
v___x_958_ = lean_array_fget_borrowed(v_weekdayLong_953_, v___x_957_);
lean_dec(v___x_957_);
lean_inc(v___x_958_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayLong___boxed(lean_object* v_symbols_959_, lean_object* v_wd_960_){
_start:
{
uint8_t v_wd_boxed_961_; lean_object* v_res_962_; 
v_wd_boxed_961_ = lean_unbox(v_wd_960_);
v_res_962_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayLong(v_symbols_959_, v_wd_boxed_961_);
lean_dec_ref(v_symbols_959_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayShort(lean_object* v_symbols_963_, uint8_t v_wd_964_){
_start:
{
lean_object* v_weekdayShort_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v_weekdayShort_965_ = lean_ctor_get(v_symbols_963_, 4);
v___x_966_ = l_Std_Time_Weekday_toOrdinal(v_wd_964_);
v___x_967_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_968_ = lean_int_add(v___x_966_, v___x_967_);
lean_dec(v___x_966_);
v___x_969_ = l_Int_toNat(v___x_968_);
lean_dec(v___x_968_);
v___x_970_ = lean_array_fget_borrowed(v_weekdayShort_965_, v___x_969_);
lean_dec(v___x_969_);
lean_inc(v___x_970_);
return v___x_970_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayShort___boxed(lean_object* v_symbols_971_, lean_object* v_wd_972_){
_start:
{
uint8_t v_wd_boxed_973_; lean_object* v_res_974_; 
v_wd_boxed_973_ = lean_unbox(v_wd_972_);
v_res_974_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayShort(v_symbols_971_, v_wd_boxed_973_);
lean_dec_ref(v_symbols_971_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayNarrow(lean_object* v_symbols_975_, uint8_t v_wd_976_){
_start:
{
lean_object* v_weekdayNarrow_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v_weekdayNarrow_977_ = lean_ctor_get(v_symbols_975_, 5);
v___x_978_ = l_Std_Time_Weekday_toOrdinal(v_wd_976_);
v___x_979_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_980_ = lean_int_add(v___x_978_, v___x_979_);
lean_dec(v___x_978_);
v___x_981_ = l_Int_toNat(v___x_980_);
lean_dec(v___x_980_);
v___x_982_ = lean_array_fget_borrowed(v_weekdayNarrow_977_, v___x_981_);
lean_dec(v___x_981_);
lean_inc(v___x_982_);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayNarrow___boxed(lean_object* v_symbols_983_, lean_object* v_wd_984_){
_start:
{
uint8_t v_wd_boxed_985_; lean_object* v_res_986_; 
v_wd_boxed_985_ = lean_unbox(v_wd_984_);
v_res_986_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayNarrow(v_symbols_983_, v_wd_boxed_985_);
lean_dec_ref(v_symbols_983_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayTwoLetter(lean_object* v_symbols_987_, uint8_t v_wd_988_){
_start:
{
lean_object* v_weekdayTwoLetter_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v_weekdayTwoLetter_989_ = lean_ctor_get(v_symbols_987_, 6);
v___x_990_ = l_Std_Time_Weekday_toOrdinal(v_wd_988_);
v___x_991_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_992_ = lean_int_add(v___x_990_, v___x_991_);
lean_dec(v___x_990_);
v___x_993_ = l_Int_toNat(v___x_992_);
lean_dec(v___x_992_);
v___x_994_ = lean_array_fget_borrowed(v_weekdayTwoLetter_989_, v___x_993_);
lean_dec(v___x_993_);
lean_inc(v___x_994_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayTwoLetter___boxed(lean_object* v_symbols_995_, lean_object* v_wd_996_){
_start:
{
uint8_t v_wd_boxed_997_; lean_object* v_res_998_; 
v_wd_boxed_997_ = lean_unbox(v_wd_996_);
v_res_998_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayTwoLetter(v_symbols_995_, v_wd_boxed_997_);
lean_dec_ref(v_symbols_995_);
return v_res_998_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraShort(lean_object* v_symbols_999_, uint8_t v_era_1000_){
_start:
{
lean_object* v_eraShort_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v_eraShort_1001_ = lean_ctor_get(v_symbols_999_, 7);
v___x_1002_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex(v_era_1000_);
v___x_1003_ = lean_array_fget_borrowed(v_eraShort_1001_, v___x_1002_);
lean_dec(v___x_1002_);
lean_inc(v___x_1003_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraShort___boxed(lean_object* v_symbols_1004_, lean_object* v_era_1005_){
_start:
{
uint8_t v_era_boxed_1006_; lean_object* v_res_1007_; 
v_era_boxed_1006_ = lean_unbox(v_era_1005_);
v_res_1007_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatEraShort(v_symbols_1004_, v_era_boxed_1006_);
lean_dec_ref(v_symbols_1004_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraLong(lean_object* v_symbols_1008_, uint8_t v_era_1009_){
_start:
{
lean_object* v_eraLong_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v_eraLong_1010_ = lean_ctor_get(v_symbols_1008_, 8);
v___x_1011_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex(v_era_1009_);
v___x_1012_ = lean_array_fget_borrowed(v_eraLong_1010_, v___x_1011_);
lean_dec(v___x_1011_);
lean_inc(v___x_1012_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraLong___boxed(lean_object* v_symbols_1013_, lean_object* v_era_1014_){
_start:
{
uint8_t v_era_boxed_1015_; lean_object* v_res_1016_; 
v_era_boxed_1015_ = lean_unbox(v_era_1014_);
v_res_1016_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatEraLong(v_symbols_1013_, v_era_boxed_1015_);
lean_dec_ref(v_symbols_1013_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraNarrow(lean_object* v_symbols_1017_, uint8_t v_era_1018_){
_start:
{
lean_object* v_eraNarrow_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v_eraNarrow_1019_ = lean_ctor_get(v_symbols_1017_, 9);
v___x_1020_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraIndex(v_era_1018_);
v___x_1021_ = lean_array_fget_borrowed(v_eraNarrow_1019_, v___x_1020_);
lean_dec(v___x_1020_);
lean_inc(v___x_1021_);
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatEraNarrow___boxed(lean_object* v_symbols_1022_, lean_object* v_era_1023_){
_start:
{
uint8_t v_era_boxed_1024_; lean_object* v_res_1025_; 
v_era_boxed_1024_ = lean_unbox(v_era_1023_);
v_res_1025_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatEraNarrow(v_symbols_1022_, v_era_boxed_1024_);
lean_dec_ref(v_symbols_1022_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber(lean_object* v_x_1030_){
_start:
{
lean_object* v_natZero_1031_; lean_object* v_intZero_1032_; uint8_t v_isNeg_1033_; lean_object* v_a_1034_; uint8_t v_isZero_1035_; lean_object* v_one_1036_; lean_object* v_n_1037_; uint8_t v_isZero_1038_; 
v_natZero_1031_ = lean_unsigned_to_nat(0u);
v_intZero_1032_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v_isNeg_1033_ = lean_int_dec_lt(v_x_1030_, v_intZero_1032_);
v_a_1034_ = lean_nat_abs(v_x_1030_);
v_isZero_1035_ = lean_nat_dec_eq(v_a_1034_, v_natZero_1031_);
v_one_1036_ = lean_unsigned_to_nat(1u);
v_n_1037_ = lean_nat_sub(v_a_1034_, v_one_1036_);
lean_dec(v_a_1034_);
v_isZero_1038_ = lean_nat_dec_eq(v_n_1037_, v_natZero_1031_);
if (v_isZero_1038_ == 1)
{
lean_object* v___x_1039_; 
lean_dec(v_n_1037_);
v___x_1039_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__0));
return v___x_1039_;
}
else
{
lean_object* v_n_1040_; uint8_t v_isZero_1041_; 
v_n_1040_ = lean_nat_sub(v_n_1037_, v_one_1036_);
lean_dec(v_n_1037_);
v_isZero_1041_ = lean_nat_dec_eq(v_n_1040_, v_natZero_1031_);
if (v_isZero_1041_ == 1)
{
lean_object* v___x_1042_; 
lean_dec(v_n_1040_);
v___x_1042_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__1));
return v___x_1042_;
}
else
{
lean_object* v_n_1043_; uint8_t v_isZero_1044_; 
v_n_1043_ = lean_nat_sub(v_n_1040_, v_one_1036_);
lean_dec(v_n_1040_);
v_isZero_1044_ = lean_nat_dec_eq(v_n_1043_, v_natZero_1031_);
if (v_isZero_1044_ == 1)
{
lean_object* v___x_1045_; 
lean_dec(v_n_1043_);
v___x_1045_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__2));
return v___x_1045_;
}
else
{
lean_object* v_n_1046_; uint8_t v_isZero_1047_; lean_object* v___x_1048_; 
v_n_1046_ = lean_nat_sub(v_n_1043_, v_one_1036_);
lean_dec(v_n_1043_);
v_isZero_1047_ = lean_nat_dec_eq(v_n_1046_, v_natZero_1031_);
lean_dec(v_n_1046_);
v___x_1048_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__3));
return v___x_1048_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___boxed(lean_object* v_x_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber(v_x_1049_);
lean_dec(v_x_1049_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterShort(lean_object* v_symbols_1051_, lean_object* v_q_1052_){
_start:
{
lean_object* v_quarterShort_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v_quarterShort_1053_ = lean_ctor_get(v_symbols_1051_, 10);
v___x_1054_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_1055_ = lean_int_add(v_q_1052_, v___x_1054_);
v___x_1056_ = l_Int_toNat(v___x_1055_);
lean_dec(v___x_1055_);
v___x_1057_ = lean_array_fget_borrowed(v_quarterShort_1053_, v___x_1056_);
lean_dec(v___x_1056_);
lean_inc(v___x_1057_);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterShort___boxed(lean_object* v_symbols_1058_, lean_object* v_q_1059_){
_start:
{
lean_object* v_res_1060_; 
v_res_1060_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterShort(v_symbols_1058_, v_q_1059_);
lean_dec(v_q_1059_);
lean_dec_ref(v_symbols_1058_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterLong(lean_object* v_symbols_1061_, lean_object* v_q_1062_){
_start:
{
lean_object* v_quarterLong_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v_quarterLong_1063_ = lean_ctor_get(v_symbols_1061_, 11);
v___x_1064_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_1065_ = lean_int_add(v_q_1062_, v___x_1064_);
v___x_1066_ = l_Int_toNat(v___x_1065_);
lean_dec(v___x_1065_);
v___x_1067_ = lean_array_fget_borrowed(v_quarterLong_1063_, v___x_1066_);
lean_dec(v___x_1066_);
lean_inc(v___x_1067_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterLong___boxed(lean_object* v_symbols_1068_, lean_object* v_q_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterLong(v_symbols_1068_, v_q_1069_);
lean_dec(v_q_1069_);
lean_dec_ref(v_symbols_1068_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNarrow(lean_object* v_symbols_1071_, lean_object* v_q_1072_){
_start:
{
lean_object* v_quarterNarrow_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v_quarterNarrow_1073_ = lean_ctor_get(v_symbols_1071_, 12);
v___x_1074_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_1075_ = lean_int_add(v_q_1072_, v___x_1074_);
v___x_1076_ = l_Int_toNat(v___x_1075_);
lean_dec(v___x_1075_);
v___x_1077_ = lean_array_fget_borrowed(v_quarterNarrow_1073_, v___x_1076_);
lean_dec(v___x_1076_);
lean_inc(v___x_1077_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNarrow___boxed(lean_object* v_symbols_1078_, lean_object* v_q_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNarrow(v_symbols_1078_, v_q_1079_);
lean_dec(v_q_1079_);
lean_dec_ref(v_symbols_1078_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerShort(lean_object* v_symbols_1081_, uint8_t v_marker_1082_){
_start:
{
if (v_marker_1082_ == 0)
{
lean_object* v_amShort_1083_; 
v_amShort_1083_ = lean_ctor_get(v_symbols_1081_, 13);
lean_inc_ref(v_amShort_1083_);
return v_amShort_1083_;
}
else
{
lean_object* v_pmShort_1084_; 
v_pmShort_1084_ = lean_ctor_get(v_symbols_1081_, 14);
lean_inc_ref(v_pmShort_1084_);
return v_pmShort_1084_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerShort___boxed(lean_object* v_symbols_1085_, lean_object* v_marker_1086_){
_start:
{
uint8_t v_marker_boxed_1087_; lean_object* v_res_1088_; 
v_marker_boxed_1087_ = lean_unbox(v_marker_1086_);
v_res_1088_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerShort(v_symbols_1085_, v_marker_boxed_1087_);
lean_dec_ref(v_symbols_1085_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerLong(lean_object* v_symbols_1089_, uint8_t v_marker_1090_){
_start:
{
if (v_marker_1090_ == 0)
{
lean_object* v_amLong_1091_; 
v_amLong_1091_ = lean_ctor_get(v_symbols_1089_, 15);
lean_inc_ref(v_amLong_1091_);
return v_amLong_1091_;
}
else
{
lean_object* v_pmLong_1092_; 
v_pmLong_1092_ = lean_ctor_get(v_symbols_1089_, 16);
lean_inc_ref(v_pmLong_1092_);
return v_pmLong_1092_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerLong___boxed(lean_object* v_symbols_1093_, lean_object* v_marker_1094_){
_start:
{
uint8_t v_marker_boxed_1095_; lean_object* v_res_1096_; 
v_marker_boxed_1095_ = lean_unbox(v_marker_1094_);
v_res_1096_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerLong(v_symbols_1093_, v_marker_boxed_1095_);
lean_dec_ref(v_symbols_1093_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerNarrow(lean_object* v_symbols_1097_, uint8_t v_marker_1098_){
_start:
{
if (v_marker_1098_ == 0)
{
lean_object* v_amNarrow_1099_; 
v_amNarrow_1099_ = lean_ctor_get(v_symbols_1097_, 17);
lean_inc_ref(v_amNarrow_1099_);
return v_amNarrow_1099_;
}
else
{
lean_object* v_pmNarrow_1100_; 
v_pmNarrow_1100_ = lean_ctor_get(v_symbols_1097_, 18);
lean_inc_ref(v_pmNarrow_1100_);
return v_pmNarrow_1100_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerNarrow___boxed(lean_object* v_symbols_1101_, lean_object* v_marker_1102_){
_start:
{
uint8_t v_marker_boxed_1103_; lean_object* v_res_1104_; 
v_marker_boxed_1103_ = lean_unbox(v_marker_1102_);
v_res_1104_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerNarrow(v_symbols_1101_, v_marker_boxed_1103_);
lean_dec_ref(v_symbols_1101_);
return v_res_1104_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatDayPeriod(lean_object* v_dp_1105_, uint8_t v_period_1106_){
_start:
{
switch(v_period_1106_)
{
case 0:
{
lean_object* v_am_1107_; 
v_am_1107_ = lean_ctor_get(v_dp_1105_, 0);
lean_inc_ref(v_am_1107_);
return v_am_1107_;
}
case 1:
{
lean_object* v_pm_1108_; 
v_pm_1108_ = lean_ctor_get(v_dp_1105_, 1);
lean_inc_ref(v_pm_1108_);
return v_pm_1108_;
}
case 2:
{
lean_object* v_noon_1109_; 
v_noon_1109_ = lean_ctor_get(v_dp_1105_, 2);
lean_inc_ref(v_noon_1109_);
return v_noon_1109_;
}
default: 
{
lean_object* v_midnight_1110_; 
v_midnight_1110_ = lean_ctor_get(v_dp_1105_, 3);
lean_inc_ref(v_midnight_1110_);
return v_midnight_1110_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatDayPeriod___boxed(lean_object* v_dp_1111_, lean_object* v_period_1112_){
_start:
{
uint8_t v_period_boxed_1113_; lean_object* v_res_1114_; 
v_period_boxed_1113_ = lean_unbox(v_period_1112_);
v_res_1114_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatDayPeriod(v_dp_1111_, v_period_boxed_1113_);
lean_dec_ref(v_dp_1111_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodIndex(uint8_t v_x_1115_){
_start:
{
switch(v_x_1115_)
{
case 0:
{
lean_object* v___x_1116_; 
v___x_1116_ = lean_unsigned_to_nat(0u);
return v___x_1116_;
}
case 1:
{
lean_object* v___x_1117_; 
v___x_1117_ = lean_unsigned_to_nat(1u);
return v___x_1117_;
}
case 2:
{
lean_object* v___x_1118_; 
v___x_1118_ = lean_unsigned_to_nat(2u);
return v___x_1118_;
}
case 3:
{
lean_object* v___x_1119_; 
v___x_1119_ = lean_unsigned_to_nat(3u);
return v___x_1119_;
}
case 4:
{
lean_object* v___x_1120_; 
v___x_1120_ = lean_unsigned_to_nat(4u);
return v___x_1120_;
}
default: 
{
lean_object* v___x_1121_; 
v___x_1121_ = lean_unsigned_to_nat(5u);
return v___x_1121_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodIndex___boxed(lean_object* v_x_1122_){
_start:
{
uint8_t v_x_112__boxed_1123_; lean_object* v_res_1124_; 
v_x_112__boxed_1123_ = lean_unbox(v_x_1122_);
v_res_1124_ = l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodIndex(v_x_112__boxed_1123_);
return v_res_1124_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatExtendedDayPeriod(lean_object* v_arr_1125_, uint8_t v_period_1126_){
_start:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1127_ = l___private_Std_Time_Format_Basic_0__Std_Time_extendedDayPeriodIndex(v_period_1126_);
v___x_1128_ = lean_array_fget_borrowed(v_arr_1125_, v___x_1127_);
lean_dec(v___x_1127_);
lean_inc(v___x_1128_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatExtendedDayPeriod___boxed(lean_object* v_arr_1129_, lean_object* v_period_1130_){
_start:
{
uint8_t v_period_boxed_1131_; lean_object* v_res_1132_; 
v_period_boxed_1131_ = lean_unbox(v_period_1130_);
v_res_1132_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatExtendedDayPeriod(v_arr_1129_, v_period_boxed_1131_);
lean_dec_ref(v_arr_1129_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_toSigned(lean_object* v_data_1134_){
_start:
{
lean_object* v___x_1135_; uint8_t v___x_1136_; 
v___x_1135_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1136_ = lean_int_dec_lt(v_data_1134_, v___x_1135_);
if (v___x_1136_ == 0)
{
lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1137_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0));
v___x_1138_ = l_Int_repr(v_data_1134_);
v___x_1139_ = lean_string_append(v___x_1137_, v___x_1138_);
lean_dec_ref(v___x_1138_);
return v___x_1139_;
}
else
{
lean_object* v___x_1140_; 
v___x_1140_ = l_Int_repr(v_data_1134_);
return v___x_1140_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___boxed(lean_object* v_data_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l___private_Std_Time_Format_Basic_0__Std_Time_toSigned(v_data_1141_);
lean_dec(v_data_1141_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorIdx___impl(uint8_t v_x_1143_){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = lean_box(v_x_1143_);
v___x_1145_ = lean_obj_tag_nat(v___x_1144_);
lean_dec(v___x_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorIdx___impl___boxed(lean_object* v_x_1146_){
_start:
{
uint8_t v_x_4__boxed_1147_; lean_object* v_res_1148_; 
v_x_4__boxed_1147_ = lean_unbox(v_x_1146_);
v_res_1148_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorIdx___impl(v_x_4__boxed_1147_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___redArg(lean_object* v_k_1149_){
_start:
{
lean_inc(v_k_1149_);
return v_k_1149_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___redArg___boxed(lean_object* v_k_1150_){
_start:
{
lean_object* v_res_1151_; 
v_res_1151_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___redArg(v_k_1150_);
lean_dec(v_k_1150_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim(lean_object* v_motive_1152_, lean_object* v_ctorIdx_1153_, uint8_t v_t_1154_, lean_object* v_h_1155_, lean_object* v_k_1156_){
_start:
{
lean_inc(v_k_1156_);
return v_k_1156_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim___boxed(lean_object* v_motive_1157_, lean_object* v_ctorIdx_1158_, lean_object* v_t_1159_, lean_object* v_h_1160_, lean_object* v_k_1161_){
_start:
{
uint8_t v_t_boxed_1162_; lean_object* v_res_1163_; 
v_t_boxed_1162_ = lean_unbox(v_t_1159_);
v_res_1163_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_ctorElim(v_motive_1157_, v_ctorIdx_1158_, v_t_boxed_1162_, v_h_1160_, v_k_1161_);
lean_dec(v_k_1161_);
lean_dec(v_ctorIdx_1158_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___redArg(lean_object* v_yes_1164_){
_start:
{
lean_inc(v_yes_1164_);
return v_yes_1164_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___redArg___boxed(lean_object* v_yes_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___redArg(v_yes_1165_);
lean_dec(v_yes_1165_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim(lean_object* v_motive_1167_, uint8_t v_t_1168_, lean_object* v_h_1169_, lean_object* v_yes_1170_){
_start:
{
lean_inc(v_yes_1170_);
return v_yes_1170_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim___boxed(lean_object* v_motive_1171_, lean_object* v_t_1172_, lean_object* v_h_1173_, lean_object* v_yes_1174_){
_start:
{
uint8_t v_t_boxed_1175_; lean_object* v_res_1176_; 
v_t_boxed_1175_ = lean_unbox(v_t_1172_);
v_res_1176_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_yes_elim(v_motive_1171_, v_t_boxed_1175_, v_h_1173_, v_yes_1174_);
lean_dec(v_yes_1174_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___redArg(lean_object* v_no_1177_){
_start:
{
lean_inc(v_no_1177_);
return v_no_1177_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___redArg___boxed(lean_object* v_no_1178_){
_start:
{
lean_object* v_res_1179_; 
v_res_1179_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___redArg(v_no_1178_);
lean_dec(v_no_1178_);
return v_res_1179_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim(lean_object* v_motive_1180_, uint8_t v_t_1181_, lean_object* v_h_1182_, lean_object* v_no_1183_){
_start:
{
lean_inc(v_no_1183_);
return v_no_1183_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim___boxed(lean_object* v_motive_1184_, lean_object* v_t_1185_, lean_object* v_h_1186_, lean_object* v_no_1187_){
_start:
{
uint8_t v_t_boxed_1188_; lean_object* v_res_1189_; 
v_t_boxed_1188_ = lean_unbox(v_t_1185_);
v_res_1189_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_no_elim(v_motive_1184_, v_t_boxed_1188_, v_h_1186_, v_no_1187_);
lean_dec(v_no_1187_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___redArg(lean_object* v_optional_1190_){
_start:
{
lean_inc(v_optional_1190_);
return v_optional_1190_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___redArg___boxed(lean_object* v_optional_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___redArg(v_optional_1191_);
lean_dec(v_optional_1191_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim(lean_object* v_motive_1193_, uint8_t v_t_1194_, lean_object* v_h_1195_, lean_object* v_optional_1196_){
_start:
{
lean_inc(v_optional_1196_);
return v_optional_1196_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim___boxed(lean_object* v_motive_1197_, lean_object* v_t_1198_, lean_object* v_h_1199_, lean_object* v_optional_1200_){
_start:
{
uint8_t v_t_boxed_1201_; lean_object* v_res_1202_; 
v_t_boxed_1201_ = lean_unbox(v_t_1198_);
v_res_1202_ = l___private_Std_Time_Format_Basic_0__Std_Time_Reason_optional_elim(v_motive_1197_, v_t_boxed_1201_, v_h_1199_, v_optional_1200_);
lean_dec(v_optional_1200_);
return v_res_1202_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq(uint8_t v_x_1203_, uint8_t v_y_1204_){
_start:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; uint8_t v___x_1209_; 
v___x_1205_ = lean_box(v_x_1203_);
v___x_1206_ = lean_obj_tag_nat(v___x_1205_);
lean_dec(v___x_1205_);
v___x_1207_ = lean_box(v_y_1204_);
v___x_1208_ = lean_obj_tag_nat(v___x_1207_);
lean_dec(v___x_1207_);
v___x_1209_ = lean_nat_dec_eq(v___x_1206_, v___x_1208_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq___boxed(lean_object* v_x_1210_, lean_object* v_y_1211_){
_start:
{
uint8_t v_x_24__boxed_1212_; uint8_t v_y_25__boxed_1213_; uint8_t v_res_1214_; lean_object* v_r_1215_; 
v_x_24__boxed_1212_ = lean_unbox(v_x_1210_);
v_y_25__boxed_1213_ = lean_unbox(v_y_1211_);
v_res_1214_ = l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq(v_x_24__boxed_1212_, v_y_25__boxed_1213_);
v_r_1215_ = lean_box(v_res_1214_);
return v_r_1215_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_toIsoString_spec__1(lean_object* v_a_1218_){
_start:
{
lean_object* v___x_1219_; 
v___x_1219_ = l_Rat_ofInt(v_a_1218_);
return v___x_1219_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1(void){
_start:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1221_ = lean_unsigned_to_nat(1000000000u);
v___x_1222_ = lean_nat_to_int(v___x_1221_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(lean_object* v_offset_1223_, uint8_t v_withMinutes_1224_, uint8_t v_withSeconds_1225_, uint8_t v_colon_1226_, uint8_t v_padHour_1227_){
_start:
{
lean_object* v___y_1229_; uint32_t v___y_1230_; lean_object* v___y_1231_; lean_object* v___y_1232_; lean_object* v___y_1233_; lean_object* v___y_1240_; lean_object* v___y_1241_; uint32_t v___y_1242_; lean_object* v___y_1243_; lean_object* v___y_1247_; uint8_t v___y_1248_; uint32_t v___y_1249_; lean_object* v___y_1250_; lean_object* v___y_1251_; lean_object* v___y_1259_; lean_object* v___y_1260_; uint8_t v___y_1261_; uint32_t v___y_1262_; lean_object* v___y_1263_; lean_object* v___y_1264_; lean_object* v___y_1271_; lean_object* v___y_1272_; uint8_t v___y_1273_; uint32_t v___y_1274_; lean_object* v___y_1275_; lean_object* v___y_1279_; uint32_t v___y_1280_; lean_object* v___y_1281_; lean_object* v___y_1282_; lean_object* v___y_1283_; lean_object* v_fst_1293_; lean_object* v_snd_1294_; lean_object* v___x_1305_; uint8_t v___x_1306_; 
v___x_1305_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1306_ = lean_int_dec_le(v___x_1305_, v_offset_1223_);
if (v___x_1306_ == 0)
{
lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1307_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_1308_ = lean_int_neg(v_offset_1223_);
lean_dec(v_offset_1223_);
v_fst_1293_ = v___x_1307_;
v_snd_1294_ = v___x_1308_;
goto v___jp_1292_;
}
else
{
lean_object* v___x_1309_; 
v___x_1309_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0));
v_fst_1293_ = v___x_1309_;
v_snd_1294_ = v_offset_1223_;
goto v___jp_1292_;
}
v___jp_1228_:
{
lean_object* v_second_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v_second_1234_ = lean_ctor_get(v___y_1232_, 2);
lean_inc(v_second_1234_);
lean_dec_ref(v___y_1232_);
v___x_1235_ = lean_string_append(v___y_1231_, v___y_1233_);
v___x_1236_ = l_Int_repr(v_second_1234_);
lean_dec(v_second_1234_);
v___x_1237_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v___y_1229_, v___y_1230_, v___x_1236_);
lean_dec_ref(v___x_1236_);
v___x_1238_ = lean_string_append(v___x_1235_, v___x_1237_);
lean_dec_ref(v___x_1237_);
return v___x_1238_;
}
v___jp_1239_:
{
if (v_colon_1226_ == 0)
{
lean_object* v___x_1244_; 
v___x_1244_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___y_1229_ = v___y_1240_;
v___y_1230_ = v___y_1242_;
v___y_1231_ = v___y_1241_;
v___y_1232_ = v___y_1243_;
v___y_1233_ = v___x_1244_;
goto v___jp_1228_;
}
else
{
lean_object* v___x_1245_; 
v___x_1245_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__0));
v___y_1229_ = v___y_1240_;
v___y_1230_ = v___y_1242_;
v___y_1231_ = v___y_1241_;
v___y_1232_ = v___y_1243_;
v___y_1233_ = v___x_1245_;
goto v___jp_1228_;
}
}
v___jp_1246_:
{
uint8_t v___x_1252_; 
v___x_1252_ = l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq(v_withSeconds_1225_, v___y_1248_);
if (v___x_1252_ == 0)
{
uint8_t v___x_1253_; uint8_t v___x_1254_; 
v___x_1253_ = 2;
v___x_1254_ = l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq(v_withSeconds_1225_, v___x_1253_);
if (v___x_1254_ == 0)
{
lean_dec_ref(v___y_1250_);
return v___y_1251_;
}
else
{
lean_object* v_second_1255_; lean_object* v___x_1256_; uint8_t v___x_1257_; 
v_second_1255_ = lean_ctor_get(v___y_1250_, 2);
v___x_1256_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1257_ = lean_int_dec_eq(v_second_1255_, v___x_1256_);
if (v___x_1257_ == 0)
{
v___y_1240_ = v___y_1247_;
v___y_1241_ = v___y_1251_;
v___y_1242_ = v___y_1249_;
v___y_1243_ = v___y_1250_;
goto v___jp_1239_;
}
else
{
lean_dec_ref(v___y_1250_);
return v___y_1251_;
}
}
}
else
{
v___y_1240_ = v___y_1247_;
v___y_1241_ = v___y_1251_;
v___y_1242_ = v___y_1249_;
v___y_1243_ = v___y_1250_;
goto v___jp_1239_;
}
}
v___jp_1258_:
{
lean_object* v_minute_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v_minute_1265_ = lean_ctor_get(v___y_1263_, 1);
v___x_1266_ = lean_string_append(v___y_1260_, v___y_1264_);
v___x_1267_ = l_Int_repr(v_minute_1265_);
v___x_1268_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v___y_1259_, v___y_1262_, v___x_1267_);
lean_dec_ref(v___x_1267_);
v___x_1269_ = lean_string_append(v___x_1266_, v___x_1268_);
lean_dec_ref(v___x_1268_);
v___y_1247_ = v___y_1259_;
v___y_1248_ = v___y_1261_;
v___y_1249_ = v___y_1262_;
v___y_1250_ = v___y_1263_;
v___y_1251_ = v___x_1269_;
goto v___jp_1246_;
}
v___jp_1270_:
{
if (v_colon_1226_ == 0)
{
lean_object* v___x_1276_; 
v___x_1276_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___y_1259_ = v___y_1272_;
v___y_1260_ = v___y_1271_;
v___y_1261_ = v___y_1273_;
v___y_1262_ = v___y_1274_;
v___y_1263_ = v___y_1275_;
v___y_1264_ = v___x_1276_;
goto v___jp_1258_;
}
else
{
lean_object* v___x_1277_; 
v___x_1277_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__0));
v___y_1259_ = v___y_1272_;
v___y_1260_ = v___y_1271_;
v___y_1261_ = v___y_1273_;
v___y_1262_ = v___y_1274_;
v___y_1263_ = v___y_1275_;
v___y_1264_ = v___x_1277_;
goto v___jp_1258_;
}
}
v___jp_1278_:
{
lean_object* v_data_1284_; uint8_t v___x_1285_; uint8_t v___x_1286_; 
lean_inc_ref(v___y_1282_);
v_data_1284_ = lean_string_append(v___y_1282_, v___y_1283_);
lean_dec_ref(v___y_1283_);
v___x_1285_ = 0;
v___x_1286_ = l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq(v_withMinutes_1224_, v___x_1285_);
if (v___x_1286_ == 0)
{
uint8_t v___x_1287_; uint8_t v___x_1288_; 
v___x_1287_ = 2;
v___x_1288_ = l___private_Std_Time_Format_Basic_0__Std_Time_instBEqReason_beq(v_withMinutes_1224_, v___x_1287_);
if (v___x_1288_ == 0)
{
v___y_1247_ = v___y_1279_;
v___y_1248_ = v___x_1285_;
v___y_1249_ = v___y_1280_;
v___y_1250_ = v___y_1281_;
v___y_1251_ = v_data_1284_;
goto v___jp_1246_;
}
else
{
lean_object* v_minute_1289_; lean_object* v___x_1290_; uint8_t v___x_1291_; 
v_minute_1289_ = lean_ctor_get(v___y_1281_, 1);
v___x_1290_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1291_ = lean_int_dec_eq(v_minute_1289_, v___x_1290_);
if (v___x_1291_ == 0)
{
v___y_1271_ = v_data_1284_;
v___y_1272_ = v___y_1279_;
v___y_1273_ = v___x_1285_;
v___y_1274_ = v___y_1280_;
v___y_1275_ = v___y_1281_;
goto v___jp_1270_;
}
else
{
v___y_1247_ = v___y_1279_;
v___y_1248_ = v___x_1285_;
v___y_1249_ = v___y_1280_;
v___y_1250_ = v___y_1281_;
v___y_1251_ = v_data_1284_;
goto v___jp_1246_;
}
}
}
else
{
v___y_1271_ = v_data_1284_;
v___y_1272_ = v___y_1279_;
v___y_1273_ = v___x_1285_;
v___y_1274_ = v___y_1280_;
v___y_1275_ = v___y_1281_;
goto v___jp_1270_;
}
}
v___jp_1292_:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v_time_1297_; lean_object* v___x_1298_; uint32_t v___x_1299_; 
v___x_1295_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1);
v___x_1296_ = lean_int_mul(v_snd_1294_, v___x_1295_);
lean_dec(v_snd_1294_);
v_time_1297_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_1296_);
lean_dec(v___x_1296_);
v___x_1298_ = lean_unsigned_to_nat(2u);
v___x_1299_ = 48;
if (v_padHour_1227_ == 0)
{
lean_object* v_hour_1300_; lean_object* v___x_1301_; 
v_hour_1300_ = lean_ctor_get(v_time_1297_, 0);
v___x_1301_ = l_Int_repr(v_hour_1300_);
v___y_1279_ = v___x_1298_;
v___y_1280_ = v___x_1299_;
v___y_1281_ = v_time_1297_;
v___y_1282_ = v_fst_1293_;
v___y_1283_ = v___x_1301_;
goto v___jp_1278_;
}
else
{
lean_object* v_hour_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
v_hour_1302_ = lean_ctor_get(v_time_1297_, 0);
v___x_1303_ = l_Int_repr(v_hour_1302_);
v___x_1304_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v___x_1298_, v___x_1299_, v___x_1303_);
lean_dec_ref(v___x_1303_);
v___y_1279_ = v___x_1298_;
v___y_1280_ = v___x_1299_;
v___y_1281_ = v_time_1297_;
v___y_1282_ = v_fst_1293_;
v___y_1283_ = v___x_1304_;
goto v___jp_1278_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___boxed(lean_object* v_offset_1310_, lean_object* v_withMinutes_1311_, lean_object* v_withSeconds_1312_, lean_object* v_colon_1313_, lean_object* v_padHour_1314_){
_start:
{
uint8_t v_withMinutes_boxed_1315_; uint8_t v_withSeconds_boxed_1316_; uint8_t v_colon_boxed_1317_; uint8_t v_padHour_boxed_1318_; lean_object* v_res_1319_; 
v_withMinutes_boxed_1315_ = lean_unbox(v_withMinutes_1311_);
v_withSeconds_boxed_1316_ = lean_unbox(v_withSeconds_1312_);
v_colon_boxed_1317_ = lean_unbox(v_colon_1313_);
v_padHour_boxed_1318_ = lean_unbox(v_padHour_1314_);
v_res_1319_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_offset_1310_, v_withMinutes_boxed_1315_, v_withSeconds_boxed_1316_, v_colon_boxed_1317_, v_padHour_boxed_1318_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_toIsoString_spec__0_spec__0(lean_object* v_a_1320_){
_start:
{
lean_object* v___x_1321_; 
v___x_1321_ = lean_nat_to_int(v_a_1320_);
return v___x_1321_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_toIsoString_spec__0(lean_object* v_a_1322_){
_start:
{
lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1323_ = lean_nat_to_int(v_a_1322_);
v___x_1324_ = l_Rat_ofInt(v___x_1323_);
return v___x_1324_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_classifyDayPeriod___lam__0(lean_object* v_minute_1325_, lean_object* v_second_1326_, lean_object* v_00___1327_){
_start:
{
lean_object* v___x_1328_; uint8_t v___x_1329_; 
v___x_1328_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1329_ = lean_int_dec_eq(v_minute_1325_, v___x_1328_);
if (v___x_1329_ == 0)
{
return v___x_1329_;
}
else
{
uint8_t v___x_1330_; 
v___x_1330_ = lean_int_dec_eq(v_second_1326_, v___x_1328_);
return v___x_1330_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_classifyDayPeriod___lam__0___boxed(lean_object* v_minute_1331_, lean_object* v_second_1332_, lean_object* v_00___1333_){
_start:
{
uint8_t v_res_1334_; lean_object* v_r_1335_; 
v_res_1334_ = l_Std_Time_classifyDayPeriod___lam__0(v_minute_1331_, v_second_1332_, v_00___1333_);
lean_dec(v_second_1332_);
lean_dec(v_minute_1331_);
v_r_1335_ = lean_box(v_res_1334_);
return v_r_1335_;
}
}
static lean_object* _init_l_Std_Time_classifyDayPeriod___closed__0(void){
_start:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1336_ = lean_unsigned_to_nat(12u);
v___x_1337_ = lean_nat_to_int(v___x_1336_);
return v___x_1337_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_classifyDayPeriod(lean_object* v_hour_1338_, lean_object* v_minute_1339_, lean_object* v_second_1340_){
_start:
{
lean_object* v___y_1342_; lean_object* v___x_1352_; uint8_t v___x_1353_; 
v___x_1352_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1353_ = lean_int_dec_eq(v_hour_1338_, v___x_1352_);
if (v___x_1353_ == 0)
{
goto v___jp_1346_;
}
else
{
lean_object* v___x_1354_; uint8_t v___x_1355_; 
v___x_1354_ = lean_box(0);
v___x_1355_ = l_Std_Time_classifyDayPeriod___lam__0(v_minute_1339_, v_second_1340_, v___x_1354_);
if (v___x_1355_ == 0)
{
goto v___jp_1346_;
}
else
{
uint8_t v___x_1356_; 
v___x_1356_ = 3;
return v___x_1356_;
}
}
v___jp_1341_:
{
uint8_t v___x_1343_; 
v___x_1343_ = lean_int_dec_lt(v_hour_1338_, v___y_1342_);
if (v___x_1343_ == 0)
{
uint8_t v___x_1344_; 
v___x_1344_ = 1;
return v___x_1344_;
}
else
{
uint8_t v___x_1345_; 
v___x_1345_ = 0;
return v___x_1345_;
}
}
v___jp_1346_:
{
lean_object* v___x_1347_; uint8_t v___x_1348_; 
v___x_1347_ = lean_obj_once(&l_Std_Time_classifyDayPeriod___closed__0, &l_Std_Time_classifyDayPeriod___closed__0_once, _init_l_Std_Time_classifyDayPeriod___closed__0);
v___x_1348_ = lean_int_dec_eq(v_hour_1338_, v___x_1347_);
if (v___x_1348_ == 0)
{
v___y_1342_ = v___x_1347_;
goto v___jp_1341_;
}
else
{
lean_object* v___x_1349_; uint8_t v___x_1350_; 
v___x_1349_ = lean_box(0);
v___x_1350_ = l_Std_Time_classifyDayPeriod___lam__0(v_minute_1339_, v_second_1340_, v___x_1349_);
if (v___x_1350_ == 0)
{
v___y_1342_ = v___x_1347_;
goto v___jp_1341_;
}
else
{
uint8_t v___x_1351_; 
v___x_1351_ = 2;
return v___x_1351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_classifyDayPeriod___boxed(lean_object* v_hour_1357_, lean_object* v_minute_1358_, lean_object* v_second_1359_){
_start:
{
uint8_t v_res_1360_; lean_object* v_r_1361_; 
v_res_1360_ = l_Std_Time_classifyDayPeriod(v_hour_1357_, v_minute_1358_, v_second_1359_);
lean_dec(v_second_1359_);
lean_dec(v_minute_1358_);
lean_dec(v_hour_1357_);
v_r_1361_ = lean_box(v_res_1360_);
return v_r_1361_;
}
}
static lean_object* _init_l_Std_Time_classifyExtendedDayPeriod___closed__0(void){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1362_ = lean_unsigned_to_nat(6u);
v___x_1363_ = lean_nat_to_int(v___x_1362_);
return v___x_1363_;
}
}
static lean_object* _init_l_Std_Time_classifyExtendedDayPeriod___closed__1(void){
_start:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1364_ = lean_unsigned_to_nat(18u);
v___x_1365_ = lean_nat_to_int(v___x_1364_);
return v___x_1365_;
}
}
static lean_object* _init_l_Std_Time_classifyExtendedDayPeriod___closed__2(void){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1366_ = lean_unsigned_to_nat(21u);
v___x_1367_ = lean_nat_to_int(v___x_1366_);
return v___x_1367_;
}
}
LEAN_EXPORT uint8_t l_Std_Time_classifyExtendedDayPeriod(lean_object* v_hour_1368_, lean_object* v_minute_1369_, lean_object* v_second_1370_){
_start:
{
lean_object* v___y_1372_; lean_object* v___x_1391_; uint8_t v___x_1392_; 
v___x_1391_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1392_ = lean_int_dec_eq(v_hour_1368_, v___x_1391_);
if (v___x_1392_ == 0)
{
goto v___jp_1385_;
}
else
{
lean_object* v___x_1393_; uint8_t v___x_1394_; 
v___x_1393_ = lean_box(0);
v___x_1394_ = l_Std_Time_classifyDayPeriod___lam__0(v_minute_1369_, v_second_1370_, v___x_1393_);
if (v___x_1394_ == 0)
{
goto v___jp_1385_;
}
else
{
uint8_t v___x_1395_; 
v___x_1395_ = 0;
return v___x_1395_;
}
}
v___jp_1371_:
{
lean_object* v___x_1373_; uint8_t v___x_1374_; 
v___x_1373_ = lean_obj_once(&l_Std_Time_classifyExtendedDayPeriod___closed__0, &l_Std_Time_classifyExtendedDayPeriod___closed__0_once, _init_l_Std_Time_classifyExtendedDayPeriod___closed__0);
v___x_1374_ = lean_int_dec_lt(v_hour_1368_, v___x_1373_);
if (v___x_1374_ == 0)
{
uint8_t v___x_1375_; 
v___x_1375_ = lean_int_dec_lt(v_hour_1368_, v___y_1372_);
if (v___x_1375_ == 0)
{
lean_object* v___x_1376_; uint8_t v___x_1377_; 
v___x_1376_ = lean_obj_once(&l_Std_Time_classifyExtendedDayPeriod___closed__1, &l_Std_Time_classifyExtendedDayPeriod___closed__1_once, _init_l_Std_Time_classifyExtendedDayPeriod___closed__1);
v___x_1377_ = lean_int_dec_lt(v_hour_1368_, v___x_1376_);
if (v___x_1377_ == 0)
{
lean_object* v___x_1378_; uint8_t v___x_1379_; 
v___x_1378_ = lean_obj_once(&l_Std_Time_classifyExtendedDayPeriod___closed__2, &l_Std_Time_classifyExtendedDayPeriod___closed__2_once, _init_l_Std_Time_classifyExtendedDayPeriod___closed__2);
v___x_1379_ = lean_int_dec_lt(v_hour_1368_, v___x_1378_);
if (v___x_1379_ == 0)
{
uint8_t v___x_1380_; 
v___x_1380_ = 1;
return v___x_1380_;
}
else
{
uint8_t v___x_1381_; 
v___x_1381_ = 5;
return v___x_1381_;
}
}
else
{
uint8_t v___x_1382_; 
v___x_1382_ = 4;
return v___x_1382_;
}
}
else
{
uint8_t v___x_1383_; 
v___x_1383_ = 2;
return v___x_1383_;
}
}
else
{
uint8_t v___x_1384_; 
v___x_1384_ = 1;
return v___x_1384_;
}
}
v___jp_1385_:
{
lean_object* v___x_1386_; uint8_t v___x_1387_; 
v___x_1386_ = lean_obj_once(&l_Std_Time_classifyDayPeriod___closed__0, &l_Std_Time_classifyDayPeriod___closed__0_once, _init_l_Std_Time_classifyDayPeriod___closed__0);
v___x_1387_ = lean_int_dec_eq(v_hour_1368_, v___x_1386_);
if (v___x_1387_ == 0)
{
v___y_1372_ = v___x_1386_;
goto v___jp_1371_;
}
else
{
lean_object* v___x_1388_; uint8_t v___x_1389_; 
v___x_1388_ = lean_box(0);
v___x_1389_ = l_Std_Time_classifyDayPeriod___lam__0(v_minute_1369_, v_second_1370_, v___x_1388_);
if (v___x_1389_ == 0)
{
v___y_1372_ = v___x_1386_;
goto v___jp_1371_;
}
else
{
uint8_t v___x_1390_; 
v___x_1390_ = 3;
return v___x_1390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_classifyExtendedDayPeriod___boxed(lean_object* v_hour_1396_, lean_object* v_minute_1397_, lean_object* v_second_1398_){
_start:
{
uint8_t v_res_1399_; lean_object* v_r_1400_; 
v_res_1399_ = l_Std_Time_classifyExtendedDayPeriod(v_hour_1396_, v_minute_1397_, v_second_1398_);
lean_dec(v_second_1398_);
lean_dec(v_minute_1397_);
lean_dec(v_hour_1396_);
v_r_1400_ = lean_box(v_res_1399_);
return v_r_1400_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0(void){
_start:
{
lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1401_ = lean_unsigned_to_nat(100u);
v___x_1402_ = lean_nat_to_int(v___x_1401_);
return v___x_1402_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1(void){
_start:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1403_ = lean_unsigned_to_nat(7u);
v___x_1404_ = lean_nat_to_int(v___x_1403_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith(lean_object* v_dateformat_1408_, lean_object* v_modifier_1409_, lean_object* v_data_1410_){
_start:
{
switch(lean_obj_tag(v_modifier_1409_))
{
case 0:
{
uint8_t v_presentation_1411_; 
v_presentation_1411_ = lean_ctor_get_uint8(v_modifier_1409_, 0);
lean_dec_ref_known(v_modifier_1409_, 0);
switch(v_presentation_1411_)
{
case 1:
{
lean_object* v_symbols_1412_; uint8_t v___x_1413_; lean_object* v___x_1414_; 
v_symbols_1412_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1413_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1414_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatEraLong(v_symbols_1412_, v___x_1413_);
return v___x_1414_;
}
case 2:
{
lean_object* v_symbols_1415_; uint8_t v___x_1416_; lean_object* v___x_1417_; 
v_symbols_1415_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1416_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1417_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatEraNarrow(v_symbols_1415_, v___x_1416_);
return v___x_1417_;
}
default: 
{
lean_object* v_symbols_1418_; uint8_t v___x_1419_; lean_object* v___x_1420_; 
v_symbols_1418_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1419_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1420_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatEraShort(v_symbols_1418_, v___x_1419_);
return v___x_1420_;
}
}
}
case 1:
{
lean_object* v_presentation_1421_; 
v_presentation_1421_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1421_);
lean_dec_ref_known(v_modifier_1409_, 1);
switch(lean_obj_tag(v_presentation_1421_))
{
case 0:
{
lean_object* v___x_1422_; uint8_t v___x_1423_; lean_object* v___x_1424_; 
v___x_1422_ = lean_unsigned_to_nat(0u);
v___x_1423_ = 0;
v___x_1424_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1422_, v_data_1410_, v___x_1423_);
return v___x_1424_;
}
case 1:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; uint8_t v___x_1428_; lean_object* v___x_1429_; 
v___x_1425_ = lean_unsigned_to_nat(2u);
v___x_1426_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0);
v___x_1427_ = lean_int_emod(v_data_1410_, v___x_1426_);
lean_dec(v_data_1410_);
v___x_1428_ = 0;
v___x_1429_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1425_, v___x_1427_, v___x_1428_);
return v___x_1429_;
}
case 2:
{
lean_object* v___x_1430_; uint8_t v___x_1431_; lean_object* v___x_1432_; 
v___x_1430_ = lean_unsigned_to_nat(4u);
v___x_1431_ = 0;
v___x_1432_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1430_, v_data_1410_, v___x_1431_);
return v___x_1432_;
}
default: 
{
lean_object* v_num_1433_; uint8_t v___x_1434_; lean_object* v___x_1435_; 
v_num_1433_ = lean_ctor_get(v_presentation_1421_, 0);
lean_inc(v_num_1433_);
lean_dec_ref_known(v_presentation_1421_, 1);
v___x_1434_ = 0;
v___x_1435_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_num_1433_, v_data_1410_, v___x_1434_);
lean_dec(v_num_1433_);
return v___x_1435_;
}
}
}
case 2:
{
lean_object* v_presentation_1436_; lean_object* v___x_1437_; lean_object* v___y_1439_; lean_object* v___x_1453_; uint8_t v___x_1454_; 
v_presentation_1436_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1436_);
lean_dec_ref_known(v_modifier_1409_, 1);
v___x_1437_ = lean_unsigned_to_nat(0u);
v___x_1453_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1454_ = lean_int_dec_le(v_data_1410_, v___x_1453_);
if (v___x_1454_ == 0)
{
v___y_1439_ = v_data_1410_;
goto v___jp_1438_;
}
else
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v___x_1455_ = lean_int_neg(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1456_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_1457_ = lean_int_add(v___x_1455_, v___x_1456_);
lean_dec(v___x_1455_);
v___y_1439_ = v___x_1457_;
goto v___jp_1438_;
}
v___jp_1438_:
{
switch(lean_obj_tag(v_presentation_1436_))
{
case 0:
{
uint8_t v___x_1440_; lean_object* v___x_1441_; 
v___x_1440_ = 0;
v___x_1441_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1437_, v___y_1439_, v___x_1440_);
return v___x_1441_;
}
case 1:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; uint8_t v___x_1445_; lean_object* v___x_1446_; 
v___x_1442_ = lean_unsigned_to_nat(2u);
v___x_1443_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0);
v___x_1444_ = lean_int_emod(v___y_1439_, v___x_1443_);
lean_dec(v___y_1439_);
v___x_1445_ = 0;
v___x_1446_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1442_, v___x_1444_, v___x_1445_);
return v___x_1446_;
}
case 2:
{
lean_object* v___x_1447_; uint8_t v___x_1448_; lean_object* v___x_1449_; 
v___x_1447_ = lean_unsigned_to_nat(4u);
v___x_1448_ = 0;
v___x_1449_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1447_, v___y_1439_, v___x_1448_);
return v___x_1449_;
}
default: 
{
lean_object* v_num_1450_; uint8_t v___x_1451_; lean_object* v___x_1452_; 
v_num_1450_ = lean_ctor_get(v_presentation_1436_, 0);
lean_inc(v_num_1450_);
lean_dec_ref_known(v_presentation_1436_, 1);
v___x_1451_ = 0;
v___x_1452_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_num_1450_, v___y_1439_, v___x_1451_);
lean_dec(v_num_1450_);
return v___x_1452_;
}
}
}
}
case 3:
{
lean_object* v_presentation_1458_; lean_object* v_snd_1459_; uint8_t v___x_1460_; lean_object* v___x_1461_; 
v_presentation_1458_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1458_);
lean_dec_ref_known(v_modifier_1409_, 1);
v_snd_1459_ = lean_ctor_get(v_data_1410_, 1);
lean_inc(v_snd_1459_);
lean_dec(v_data_1410_);
v___x_1460_ = 0;
v___x_1461_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1458_, v_snd_1459_, v___x_1460_);
lean_dec(v_presentation_1458_);
return v___x_1461_;
}
case 4:
{
lean_object* v_presentation_1462_; 
v_presentation_1462_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc_ref(v_presentation_1462_);
lean_dec_ref_known(v_modifier_1409_, 1);
if (lean_obj_tag(v_presentation_1462_) == 0)
{
lean_object* v_val_1463_; uint8_t v___x_1464_; lean_object* v___x_1465_; 
v_val_1463_ = lean_ctor_get(v_presentation_1462_, 0);
lean_inc(v_val_1463_);
lean_dec_ref_known(v_presentation_1462_, 1);
v___x_1464_ = 0;
v___x_1465_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1463_, v_data_1410_, v___x_1464_);
lean_dec(v_val_1463_);
return v___x_1465_;
}
else
{
lean_object* v_val_1466_; uint8_t v___x_1467_; 
v_val_1466_ = lean_ctor_get(v_presentation_1462_, 0);
lean_inc(v_val_1466_);
lean_dec_ref_known(v_presentation_1462_, 1);
v___x_1467_ = lean_unbox(v_val_1466_);
lean_dec(v_val_1466_);
switch(v___x_1467_)
{
case 1:
{
lean_object* v_symbols_1468_; lean_object* v___x_1469_; 
v_symbols_1468_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1469_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong(v_symbols_1468_, v_data_1410_);
lean_dec(v_data_1410_);
return v___x_1469_;
}
case 2:
{
lean_object* v_symbols_1470_; lean_object* v___x_1471_; 
v_symbols_1470_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1471_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthNarrow(v_symbols_1470_, v_data_1410_);
lean_dec(v_data_1410_);
return v___x_1471_;
}
default: 
{
lean_object* v_symbols_1472_; lean_object* v___x_1473_; 
v_symbols_1472_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1473_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthShort(v_symbols_1472_, v_data_1410_);
lean_dec(v_data_1410_);
return v___x_1473_;
}
}
}
}
case 5:
{
lean_object* v_presentation_1474_; 
v_presentation_1474_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc_ref(v_presentation_1474_);
lean_dec_ref_known(v_modifier_1409_, 1);
if (lean_obj_tag(v_presentation_1474_) == 0)
{
lean_object* v_val_1475_; uint8_t v___x_1476_; lean_object* v___x_1477_; 
v_val_1475_ = lean_ctor_get(v_presentation_1474_, 0);
lean_inc(v_val_1475_);
lean_dec_ref_known(v_presentation_1474_, 1);
v___x_1476_ = 0;
v___x_1477_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1475_, v_data_1410_, v___x_1476_);
lean_dec(v_val_1475_);
return v___x_1477_;
}
else
{
lean_object* v_val_1478_; uint8_t v___x_1479_; 
v_val_1478_ = lean_ctor_get(v_presentation_1474_, 0);
lean_inc(v_val_1478_);
lean_dec_ref_known(v_presentation_1474_, 1);
v___x_1479_ = lean_unbox(v_val_1478_);
lean_dec(v_val_1478_);
switch(v___x_1479_)
{
case 1:
{
lean_object* v_symbols_1480_; lean_object* v___x_1481_; 
v_symbols_1480_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1481_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong(v_symbols_1480_, v_data_1410_);
lean_dec(v_data_1410_);
return v___x_1481_;
}
case 2:
{
lean_object* v_symbols_1482_; lean_object* v___x_1483_; 
v_symbols_1482_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1483_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthNarrow(v_symbols_1482_, v_data_1410_);
lean_dec(v_data_1410_);
return v___x_1483_;
}
default: 
{
lean_object* v_symbols_1484_; lean_object* v___x_1485_; 
v_symbols_1484_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1485_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthShort(v_symbols_1484_, v_data_1410_);
lean_dec(v_data_1410_);
return v___x_1485_;
}
}
}
}
case 6:
{
lean_object* v_presentation_1486_; uint8_t v___x_1487_; lean_object* v___x_1488_; 
v_presentation_1486_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1486_);
lean_dec_ref_known(v_modifier_1409_, 1);
v___x_1487_ = 0;
v___x_1488_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1486_, v_data_1410_, v___x_1487_);
lean_dec(v_presentation_1486_);
return v___x_1488_;
}
case 7:
{
lean_object* v_presentation_1489_; 
v_presentation_1489_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc_ref(v_presentation_1489_);
lean_dec_ref_known(v_modifier_1409_, 1);
if (lean_obj_tag(v_presentation_1489_) == 0)
{
lean_object* v_val_1490_; uint8_t v___x_1491_; lean_object* v___x_1492_; 
v_val_1490_ = lean_ctor_get(v_presentation_1489_, 0);
lean_inc(v_val_1490_);
lean_dec_ref_known(v_presentation_1489_, 1);
v___x_1491_ = 0;
v___x_1492_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1490_, v_data_1410_, v___x_1491_);
lean_dec(v_val_1490_);
return v___x_1492_;
}
else
{
lean_object* v_val_1493_; uint8_t v___x_1494_; 
v_val_1493_ = lean_ctor_get(v_presentation_1489_, 0);
lean_inc(v_val_1493_);
lean_dec_ref_known(v_presentation_1489_, 1);
v___x_1494_ = lean_unbox(v_val_1493_);
lean_dec(v_val_1493_);
switch(v___x_1494_)
{
case 0:
{
lean_object* v_symbols_1495_; lean_object* v___x_1496_; 
v_symbols_1495_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1496_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterShort(v_symbols_1495_, v_data_1410_);
lean_dec(v_data_1410_);
return v___x_1496_;
}
case 1:
{
lean_object* v_symbols_1497_; lean_object* v___x_1498_; 
v_symbols_1497_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1498_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterLong(v_symbols_1497_, v_data_1410_);
lean_dec(v_data_1410_);
return v___x_1498_;
}
case 2:
{
lean_object* v_symbols_1499_; lean_object* v___x_1500_; 
v_symbols_1499_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1500_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNarrow(v_symbols_1499_, v_data_1410_);
lean_dec(v_data_1410_);
return v___x_1500_;
}
default: 
{
lean_object* v___x_1501_; 
v___x_1501_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber(v_data_1410_);
lean_dec(v_data_1410_);
return v___x_1501_;
}
}
}
}
case 8:
{
lean_object* v_presentation_1502_; 
v_presentation_1502_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc_ref(v_presentation_1502_);
lean_dec_ref_known(v_modifier_1409_, 1);
if (lean_obj_tag(v_presentation_1502_) == 0)
{
lean_object* v_val_1503_; uint8_t v___x_1504_; lean_object* v___x_1505_; 
v_val_1503_ = lean_ctor_get(v_presentation_1502_, 0);
lean_inc(v_val_1503_);
lean_dec_ref_known(v_presentation_1502_, 1);
v___x_1504_ = 0;
v___x_1505_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1503_, v_data_1410_, v___x_1504_);
lean_dec(v_val_1503_);
return v___x_1505_;
}
else
{
lean_object* v_val_1506_; uint8_t v___x_1507_; 
v_val_1506_ = lean_ctor_get(v_presentation_1502_, 0);
lean_inc(v_val_1506_);
lean_dec_ref_known(v_presentation_1502_, 1);
v___x_1507_ = lean_unbox(v_val_1506_);
lean_dec(v_val_1506_);
switch(v___x_1507_)
{
case 0:
{
lean_object* v_symbols_1508_; lean_object* v___x_1509_; 
v_symbols_1508_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1509_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterShort(v_symbols_1508_, v_data_1410_);
lean_dec(v_data_1410_);
return v___x_1509_;
}
case 1:
{
lean_object* v_symbols_1510_; lean_object* v___x_1511_; 
v_symbols_1510_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1511_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterLong(v_symbols_1510_, v_data_1410_);
lean_dec(v_data_1410_);
return v___x_1511_;
}
case 2:
{
lean_object* v_symbols_1512_; lean_object* v___x_1513_; 
v_symbols_1512_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1513_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNarrow(v_symbols_1512_, v_data_1410_);
lean_dec(v_data_1410_);
return v___x_1513_;
}
default: 
{
lean_object* v___x_1514_; 
v___x_1514_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber(v_data_1410_);
lean_dec(v_data_1410_);
return v___x_1514_;
}
}
}
}
case 9:
{
lean_object* v_presentation_1515_; lean_object* v___x_1516_; lean_object* v___y_1518_; lean_object* v___x_1532_; uint8_t v___x_1533_; 
v_presentation_1515_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1515_);
lean_dec_ref_known(v_modifier_1409_, 1);
v___x_1516_ = lean_unsigned_to_nat(0u);
v___x_1532_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1533_ = lean_int_dec_le(v_data_1410_, v___x_1532_);
if (v___x_1533_ == 0)
{
v___y_1518_ = v_data_1410_;
goto v___jp_1517_;
}
else
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1534_ = lean_int_neg(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1535_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_1536_ = lean_int_add(v___x_1534_, v___x_1535_);
lean_dec(v___x_1534_);
v___y_1518_ = v___x_1536_;
goto v___jp_1517_;
}
v___jp_1517_:
{
switch(lean_obj_tag(v_presentation_1515_))
{
case 0:
{
uint8_t v___x_1519_; lean_object* v___x_1520_; 
v___x_1519_ = 0;
v___x_1520_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1516_, v___y_1518_, v___x_1519_);
return v___x_1520_;
}
case 1:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; uint8_t v___x_1524_; lean_object* v___x_1525_; 
v___x_1521_ = lean_unsigned_to_nat(2u);
v___x_1522_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0);
v___x_1523_ = lean_int_emod(v___y_1518_, v___x_1522_);
lean_dec(v___y_1518_);
v___x_1524_ = 0;
v___x_1525_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1521_, v___x_1523_, v___x_1524_);
return v___x_1525_;
}
case 2:
{
lean_object* v___x_1526_; uint8_t v___x_1527_; lean_object* v___x_1528_; 
v___x_1526_ = lean_unsigned_to_nat(4u);
v___x_1527_ = 0;
v___x_1528_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1526_, v___y_1518_, v___x_1527_);
return v___x_1528_;
}
default: 
{
lean_object* v_num_1529_; uint8_t v___x_1530_; lean_object* v___x_1531_; 
v_num_1529_ = lean_ctor_get(v_presentation_1515_, 0);
lean_inc(v_num_1529_);
lean_dec_ref_known(v_presentation_1515_, 1);
v___x_1530_ = 0;
v___x_1531_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_num_1529_, v___y_1518_, v___x_1530_);
lean_dec(v_num_1529_);
return v___x_1531_;
}
}
}
}
case 10:
{
lean_object* v_presentation_1537_; uint8_t v___x_1538_; lean_object* v___x_1539_; 
v_presentation_1537_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1537_);
lean_dec_ref_known(v_modifier_1409_, 1);
v___x_1538_ = 0;
v___x_1539_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1537_, v_data_1410_, v___x_1538_);
lean_dec(v_presentation_1537_);
return v___x_1539_;
}
case 11:
{
lean_object* v_presentation_1540_; uint8_t v___x_1541_; lean_object* v___x_1542_; 
v_presentation_1540_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1540_);
lean_dec_ref_known(v_modifier_1409_, 1);
v___x_1541_ = 0;
v___x_1542_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1540_, v_data_1410_, v___x_1541_);
lean_dec(v_presentation_1540_);
return v___x_1542_;
}
case 12:
{
uint8_t v_presentation_1543_; 
v_presentation_1543_ = lean_ctor_get_uint8(v_modifier_1409_, 0);
lean_dec_ref_known(v_modifier_1409_, 0);
switch(v_presentation_1543_)
{
case 0:
{
lean_object* v_symbols_1544_; uint8_t v___x_1545_; lean_object* v___x_1546_; 
v_symbols_1544_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1545_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1546_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayShort(v_symbols_1544_, v___x_1545_);
return v___x_1546_;
}
case 1:
{
lean_object* v_symbols_1547_; uint8_t v___x_1548_; lean_object* v___x_1549_; 
v_symbols_1547_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1548_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1549_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayLong(v_symbols_1547_, v___x_1548_);
return v___x_1549_;
}
case 2:
{
lean_object* v_symbols_1550_; uint8_t v___x_1551_; lean_object* v___x_1552_; 
v_symbols_1550_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1551_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1552_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayNarrow(v_symbols_1550_, v___x_1551_);
return v___x_1552_;
}
default: 
{
lean_object* v_symbols_1553_; uint8_t v___x_1554_; lean_object* v___x_1555_; 
v_symbols_1553_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1554_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1555_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayTwoLetter(v_symbols_1553_, v___x_1554_);
return v___x_1555_;
}
}
}
case 13:
{
lean_object* v_presentation_1556_; 
v_presentation_1556_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc_ref(v_presentation_1556_);
lean_dec_ref_known(v_modifier_1409_, 1);
if (lean_obj_tag(v_presentation_1556_) == 0)
{
lean_object* v_val_1557_; uint8_t v_firstDayOfWeek_1558_; lean_object* v_firstOrd_1559_; uint8_t v___x_1560_; lean_object* v_dayOrd_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; uint8_t v___x_1568_; lean_object* v___x_1569_; 
v_val_1557_ = lean_ctor_get(v_presentation_1556_, 0);
lean_inc(v_val_1557_);
lean_dec_ref_known(v_presentation_1556_, 1);
v_firstDayOfWeek_1558_ = lean_ctor_get_uint8(v_dateformat_1408_, sizeof(void*)*2);
v_firstOrd_1559_ = l_Std_Time_Weekday_toOrdinal(v_firstDayOfWeek_1558_);
v___x_1560_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v_dayOrd_1561_ = l_Std_Time_Weekday_toOrdinal(v___x_1560_);
v___x_1562_ = lean_int_sub(v_dayOrd_1561_, v_firstOrd_1559_);
lean_dec(v_firstOrd_1559_);
lean_dec(v_dayOrd_1561_);
v___x_1563_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1);
v___x_1564_ = lean_int_add(v___x_1562_, v___x_1563_);
lean_dec(v___x_1562_);
v___x_1565_ = lean_int_emod(v___x_1564_, v___x_1563_);
lean_dec(v___x_1564_);
v___x_1566_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_1567_ = lean_int_add(v___x_1565_, v___x_1566_);
lean_dec(v___x_1565_);
v___x_1568_ = 0;
v___x_1569_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1557_, v___x_1567_, v___x_1568_);
lean_dec(v_val_1557_);
return v___x_1569_;
}
else
{
lean_object* v_val_1570_; uint8_t v___x_1571_; 
v_val_1570_ = lean_ctor_get(v_presentation_1556_, 0);
lean_inc(v_val_1570_);
lean_dec_ref_known(v_presentation_1556_, 1);
v___x_1571_ = lean_unbox(v_val_1570_);
lean_dec(v_val_1570_);
switch(v___x_1571_)
{
case 0:
{
lean_object* v_symbols_1572_; uint8_t v___x_1573_; lean_object* v___x_1574_; 
v_symbols_1572_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1573_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1574_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayShort(v_symbols_1572_, v___x_1573_);
return v___x_1574_;
}
case 1:
{
lean_object* v_symbols_1575_; uint8_t v___x_1576_; lean_object* v___x_1577_; 
v_symbols_1575_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1576_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1577_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayLong(v_symbols_1575_, v___x_1576_);
return v___x_1577_;
}
case 2:
{
lean_object* v_symbols_1578_; uint8_t v___x_1579_; lean_object* v___x_1580_; 
v_symbols_1578_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1579_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1580_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayNarrow(v_symbols_1578_, v___x_1579_);
return v___x_1580_;
}
default: 
{
lean_object* v_symbols_1581_; uint8_t v___x_1582_; lean_object* v___x_1583_; 
v_symbols_1581_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1582_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1583_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayTwoLetter(v_symbols_1581_, v___x_1582_);
return v___x_1583_;
}
}
}
}
case 14:
{
lean_object* v_presentation_1584_; 
v_presentation_1584_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc_ref(v_presentation_1584_);
lean_dec_ref_known(v_modifier_1409_, 1);
if (lean_obj_tag(v_presentation_1584_) == 0)
{
lean_object* v_val_1585_; uint8_t v_firstDayOfWeek_1586_; lean_object* v_firstOrd_1587_; uint8_t v___x_1588_; lean_object* v_dayOrd_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; uint8_t v___x_1596_; lean_object* v___x_1597_; 
v_val_1585_ = lean_ctor_get(v_presentation_1584_, 0);
lean_inc(v_val_1585_);
lean_dec_ref_known(v_presentation_1584_, 1);
v_firstDayOfWeek_1586_ = lean_ctor_get_uint8(v_dateformat_1408_, sizeof(void*)*2);
v_firstOrd_1587_ = l_Std_Time_Weekday_toOrdinal(v_firstDayOfWeek_1586_);
v___x_1588_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v_dayOrd_1589_ = l_Std_Time_Weekday_toOrdinal(v___x_1588_);
v___x_1590_ = lean_int_sub(v_dayOrd_1589_, v_firstOrd_1587_);
lean_dec(v_firstOrd_1587_);
lean_dec(v_dayOrd_1589_);
v___x_1591_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1);
v___x_1592_ = lean_int_add(v___x_1590_, v___x_1591_);
lean_dec(v___x_1590_);
v___x_1593_ = lean_int_emod(v___x_1592_, v___x_1591_);
lean_dec(v___x_1592_);
v___x_1594_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_1595_ = lean_int_add(v___x_1593_, v___x_1594_);
lean_dec(v___x_1593_);
v___x_1596_ = 0;
v___x_1597_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_val_1585_, v___x_1595_, v___x_1596_);
lean_dec(v_val_1585_);
return v___x_1597_;
}
else
{
lean_object* v_val_1598_; uint8_t v___x_1599_; 
v_val_1598_ = lean_ctor_get(v_presentation_1584_, 0);
lean_inc(v_val_1598_);
lean_dec_ref_known(v_presentation_1584_, 1);
v___x_1599_ = lean_unbox(v_val_1598_);
lean_dec(v_val_1598_);
switch(v___x_1599_)
{
case 0:
{
lean_object* v_symbols_1600_; uint8_t v___x_1601_; lean_object* v___x_1602_; 
v_symbols_1600_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1601_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1602_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayShort(v_symbols_1600_, v___x_1601_);
return v___x_1602_;
}
case 1:
{
lean_object* v_symbols_1603_; uint8_t v___x_1604_; lean_object* v___x_1605_; 
v_symbols_1603_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1604_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1605_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayLong(v_symbols_1603_, v___x_1604_);
return v___x_1605_;
}
case 2:
{
lean_object* v_symbols_1606_; uint8_t v___x_1607_; lean_object* v___x_1608_; 
v_symbols_1606_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1607_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1608_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayNarrow(v_symbols_1606_, v___x_1607_);
return v___x_1608_;
}
default: 
{
lean_object* v_symbols_1609_; uint8_t v___x_1610_; lean_object* v___x_1611_; 
v_symbols_1609_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1610_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1611_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWeekdayTwoLetter(v_symbols_1609_, v___x_1610_);
return v___x_1611_;
}
}
}
}
case 15:
{
lean_object* v_presentation_1612_; uint8_t v___x_1613_; lean_object* v___x_1614_; 
v_presentation_1612_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1612_);
lean_dec_ref_known(v_modifier_1409_, 1);
v___x_1613_ = 0;
v___x_1614_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1612_, v_data_1410_, v___x_1613_);
lean_dec(v_presentation_1612_);
return v___x_1614_;
}
case 16:
{
uint8_t v_presentation_1615_; 
v_presentation_1615_ = lean_ctor_get_uint8(v_modifier_1409_, 0);
lean_dec_ref_known(v_modifier_1409_, 0);
if (v_presentation_1615_ == 2)
{
lean_object* v_symbols_1616_; uint8_t v___x_1617_; lean_object* v___x_1618_; 
v_symbols_1616_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1617_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1618_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerNarrow(v_symbols_1616_, v___x_1617_);
return v___x_1618_;
}
else
{
lean_object* v_symbols_1619_; uint8_t v___x_1620_; lean_object* v___x_1621_; 
v_symbols_1619_ = lean_ctor_get(v_dateformat_1408_, 1);
v___x_1620_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1621_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatMarkerShort(v_symbols_1619_, v___x_1620_);
return v___x_1621_;
}
}
case 17:
{
uint8_t v_presentation_1622_; 
v_presentation_1622_ = lean_ctor_get_uint8(v_modifier_1409_, 0);
lean_dec_ref_known(v_modifier_1409_, 0);
switch(v_presentation_1622_)
{
case 1:
{
lean_object* v_symbols_1623_; lean_object* v_dayPeriodLong_1624_; uint8_t v___x_1625_; lean_object* v___x_1626_; 
v_symbols_1623_ = lean_ctor_get(v_dateformat_1408_, 1);
v_dayPeriodLong_1624_ = lean_ctor_get(v_symbols_1623_, 20);
v___x_1625_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1626_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatDayPeriod(v_dayPeriodLong_1624_, v___x_1625_);
return v___x_1626_;
}
case 2:
{
lean_object* v_symbols_1627_; lean_object* v_dayPeriodNarrow_1628_; uint8_t v___x_1629_; lean_object* v___x_1630_; 
v_symbols_1627_ = lean_ctor_get(v_dateformat_1408_, 1);
v_dayPeriodNarrow_1628_ = lean_ctor_get(v_symbols_1627_, 21);
v___x_1629_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1630_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatDayPeriod(v_dayPeriodNarrow_1628_, v___x_1629_);
return v___x_1630_;
}
default: 
{
lean_object* v_symbols_1631_; lean_object* v_dayPeriodShort_1632_; uint8_t v___x_1633_; lean_object* v___x_1634_; 
v_symbols_1631_ = lean_ctor_get(v_dateformat_1408_, 1);
v_dayPeriodShort_1632_ = lean_ctor_get(v_symbols_1631_, 19);
v___x_1633_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1634_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatDayPeriod(v_dayPeriodShort_1632_, v___x_1633_);
return v___x_1634_;
}
}
}
case 18:
{
uint8_t v_presentation_1635_; 
v_presentation_1635_ = lean_ctor_get_uint8(v_modifier_1409_, 0);
lean_dec_ref_known(v_modifier_1409_, 0);
switch(v_presentation_1635_)
{
case 1:
{
lean_object* v_symbols_1636_; lean_object* v_extendedDayPeriodLong_1637_; uint8_t v___x_1638_; lean_object* v___x_1639_; 
v_symbols_1636_ = lean_ctor_get(v_dateformat_1408_, 1);
v_extendedDayPeriodLong_1637_ = lean_ctor_get(v_symbols_1636_, 23);
v___x_1638_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1639_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatExtendedDayPeriod(v_extendedDayPeriodLong_1637_, v___x_1638_);
return v___x_1639_;
}
case 2:
{
lean_object* v_symbols_1640_; lean_object* v_extendedDayPeriodNarrow_1641_; uint8_t v___x_1642_; lean_object* v___x_1643_; 
v_symbols_1640_ = lean_ctor_get(v_dateformat_1408_, 1);
v_extendedDayPeriodNarrow_1641_ = lean_ctor_get(v_symbols_1640_, 24);
v___x_1642_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1643_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatExtendedDayPeriod(v_extendedDayPeriodNarrow_1641_, v___x_1642_);
return v___x_1643_;
}
default: 
{
lean_object* v_symbols_1644_; lean_object* v_extendedDayPeriodShort_1645_; uint8_t v___x_1646_; lean_object* v___x_1647_; 
v_symbols_1644_ = lean_ctor_get(v_dateformat_1408_, 1);
v_extendedDayPeriodShort_1645_ = lean_ctor_get(v_symbols_1644_, 22);
v___x_1646_ = lean_unbox(v_data_1410_);
lean_dec(v_data_1410_);
v___x_1647_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatExtendedDayPeriod(v_extendedDayPeriodShort_1645_, v___x_1646_);
return v___x_1647_;
}
}
}
case 19:
{
lean_object* v_presentation_1648_; uint8_t v___x_1649_; lean_object* v___x_1650_; 
v_presentation_1648_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1648_);
lean_dec_ref_known(v_modifier_1409_, 1);
v___x_1649_ = 0;
v___x_1650_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1648_, v_data_1410_, v___x_1649_);
lean_dec(v_presentation_1648_);
return v___x_1650_;
}
case 20:
{
lean_object* v_presentation_1651_; uint8_t v___x_1652_; lean_object* v___x_1653_; 
v_presentation_1651_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1651_);
lean_dec_ref_known(v_modifier_1409_, 1);
v___x_1652_ = 0;
v___x_1653_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1651_, v_data_1410_, v___x_1652_);
lean_dec(v_presentation_1651_);
return v___x_1653_;
}
case 21:
{
lean_object* v_presentation_1654_; uint8_t v___x_1655_; lean_object* v___x_1656_; 
v_presentation_1654_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1654_);
lean_dec_ref_known(v_modifier_1409_, 1);
v___x_1655_ = 0;
v___x_1656_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1654_, v_data_1410_, v___x_1655_);
lean_dec(v_presentation_1654_);
return v___x_1656_;
}
case 22:
{
lean_object* v_presentation_1657_; uint8_t v___x_1658_; lean_object* v___x_1659_; 
v_presentation_1657_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1657_);
lean_dec_ref_known(v_modifier_1409_, 1);
v___x_1658_ = 0;
v___x_1659_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1657_, v_data_1410_, v___x_1658_);
lean_dec(v_presentation_1657_);
return v___x_1659_;
}
case 23:
{
lean_object* v_presentation_1660_; uint8_t v___x_1661_; lean_object* v___x_1662_; 
v_presentation_1660_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1660_);
lean_dec_ref_known(v_modifier_1409_, 1);
v___x_1661_ = 0;
v___x_1662_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1660_, v_data_1410_, v___x_1661_);
lean_dec(v_presentation_1660_);
return v___x_1662_;
}
case 24:
{
lean_object* v_presentation_1663_; uint8_t v___x_1664_; lean_object* v___x_1665_; 
v_presentation_1663_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1663_);
lean_dec_ref_known(v_modifier_1409_, 1);
v___x_1664_ = 0;
v___x_1665_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1663_, v_data_1410_, v___x_1664_);
lean_dec(v_presentation_1663_);
return v___x_1665_;
}
case 25:
{
lean_object* v_presentation_1666_; 
v_presentation_1666_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1666_);
lean_dec_ref_known(v_modifier_1409_, 1);
if (lean_obj_tag(v_presentation_1666_) == 0)
{
lean_object* v___x_1667_; uint8_t v___x_1668_; lean_object* v___x_1669_; 
v___x_1667_ = lean_unsigned_to_nat(9u);
v___x_1668_ = 0;
v___x_1669_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v___x_1667_, v_data_1410_, v___x_1668_);
return v___x_1669_;
}
else
{
lean_object* v_digits_1670_; lean_object* v___x_1671_; uint32_t v___x_1672_; lean_object* v___x_1673_; lean_object* v_s_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
v_digits_1670_ = lean_ctor_get(v_presentation_1666_, 0);
lean_inc(v_digits_1670_);
lean_dec_ref_known(v_presentation_1666_, 1);
v___x_1671_ = lean_unsigned_to_nat(9u);
v___x_1672_ = 48;
v___x_1673_ = l_Int_repr(v_data_1410_);
lean_dec(v_data_1410_);
v_s_1674_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v___x_1671_, v___x_1672_, v___x_1673_);
lean_dec_ref(v___x_1673_);
v___x_1675_ = lean_unsigned_to_nat(0u);
v___x_1676_ = lean_string_utf8_byte_size(v_s_1674_);
lean_inc_ref(v_s_1674_);
v___x_1677_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1677_, 0, v_s_1674_);
lean_ctor_set(v___x_1677_, 1, v___x_1675_);
lean_ctor_set(v___x_1677_, 2, v___x_1676_);
v___x_1678_ = l_String_Slice_Pos_nextn(v___x_1677_, v___x_1675_, v_digits_1670_);
lean_dec_ref_known(v___x_1677_, 3);
v___x_1679_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1679_, 0, v_s_1674_);
lean_ctor_set(v___x_1679_, 1, v___x_1675_);
lean_ctor_set(v___x_1679_, 2, v___x_1678_);
v___x_1680_ = l_String_Slice_toString(v___x_1679_);
lean_dec_ref_known(v___x_1679_, 3);
return v___x_1680_;
}
}
case 26:
{
lean_object* v_presentation_1681_; uint8_t v___x_1682_; lean_object* v___x_1683_; 
v_presentation_1681_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1681_);
lean_dec_ref_known(v_modifier_1409_, 1);
v___x_1682_ = 0;
v___x_1683_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1681_, v_data_1410_, v___x_1682_);
lean_dec(v_presentation_1681_);
return v___x_1683_;
}
case 27:
{
lean_object* v_presentation_1684_; uint8_t v___x_1685_; lean_object* v___x_1686_; 
v_presentation_1684_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1684_);
lean_dec_ref_known(v_modifier_1409_, 1);
v___x_1685_ = 0;
v___x_1686_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1684_, v_data_1410_, v___x_1685_);
lean_dec(v_presentation_1684_);
return v___x_1686_;
}
case 28:
{
lean_object* v_presentation_1687_; uint8_t v___x_1688_; lean_object* v___x_1689_; 
v_presentation_1687_ = lean_ctor_get(v_modifier_1409_, 0);
lean_inc(v_presentation_1687_);
lean_dec_ref_known(v_modifier_1409_, 1);
v___x_1688_ = 0;
v___x_1689_ = l___private_Std_Time_Format_Basic_0__Std_Time_pad(v_presentation_1687_, v_data_1410_, v___x_1688_);
lean_dec(v_presentation_1687_);
return v___x_1689_;
}
case 29:
{
uint8_t v_presentation_1690_; 
v_presentation_1690_ = lean_ctor_get_uint8(v_modifier_1409_, 0);
lean_dec_ref_known(v_modifier_1409_, 0);
if (v_presentation_1690_ == 0)
{
lean_object* v___x_1691_; 
lean_dec(v_data_1410_);
v___x_1691_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2));
return v___x_1691_;
}
else
{
return v_data_1410_;
}
}
case 32:
{
uint8_t v_presentation_1692_; 
v_presentation_1692_ = lean_ctor_get_uint8(v_modifier_1409_, 0);
lean_dec_ref_known(v_modifier_1409_, 0);
if (v_presentation_1692_ == 0)
{
lean_object* v_fst_1694_; lean_object* v_snd_1695_; lean_object* v___x_1718_; uint8_t v___x_1719_; 
v___x_1718_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1719_ = lean_int_dec_eq(v_data_1410_, v___x_1718_);
if (v___x_1719_ == 0)
{
uint8_t v___x_1720_; 
v___x_1720_ = lean_int_dec_le(v___x_1718_, v_data_1410_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1721_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_1722_ = lean_int_neg(v_data_1410_);
lean_dec(v_data_1410_);
v_fst_1694_ = v___x_1721_;
v_snd_1695_ = v___x_1722_;
goto v___jp_1693_;
}
else
{
lean_object* v___x_1723_; 
v___x_1723_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0));
v_fst_1694_ = v___x_1723_;
v_snd_1695_ = v_data_1410_;
goto v___jp_1693_;
}
}
else
{
lean_object* v___x_1724_; 
lean_dec(v_data_1410_);
v___x_1724_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
return v___x_1724_;
}
v___jp_1693_:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v_t_1698_; lean_object* v_hour_1699_; lean_object* v_minute_1700_; lean_object* v___x_1701_; uint8_t v___x_1702_; 
v___x_1696_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1);
v___x_1697_ = lean_int_mul(v_snd_1695_, v___x_1696_);
lean_dec(v_snd_1695_);
v_t_1698_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_1697_);
lean_dec(v___x_1697_);
v_hour_1699_ = lean_ctor_get(v_t_1698_, 0);
lean_inc(v_hour_1699_);
v_minute_1700_ = lean_ctor_get(v_t_1698_, 1);
lean_inc(v_minute_1700_);
lean_dec_ref(v_t_1698_);
v___x_1701_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1702_ = lean_int_dec_eq(v_minute_1700_, v___x_1701_);
if (v___x_1702_ == 0)
{
lean_object* v___x_1703_; uint32_t v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1703_ = lean_unsigned_to_nat(2u);
v___x_1704_ = 48;
v___x_1705_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_1706_ = lean_string_append(v___x_1705_, v_fst_1694_);
v___x_1707_ = l_Int_repr(v_hour_1699_);
lean_dec(v_hour_1699_);
v___x_1708_ = lean_string_append(v___x_1706_, v___x_1707_);
lean_dec_ref(v___x_1707_);
v___x_1709_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__0));
v___x_1710_ = lean_string_append(v___x_1708_, v___x_1709_);
v___x_1711_ = l_Int_repr(v_minute_1700_);
lean_dec(v_minute_1700_);
v___x_1712_ = l___private_Std_Time_Format_Basic_0__Std_Time_leftPadAscii(v___x_1703_, v___x_1704_, v___x_1711_);
lean_dec_ref(v___x_1711_);
v___x_1713_ = lean_string_append(v___x_1710_, v___x_1712_);
lean_dec_ref(v___x_1712_);
return v___x_1713_;
}
else
{
lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
lean_dec(v_minute_1700_);
v___x_1714_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_1715_ = lean_string_append(v___x_1714_, v_fst_1694_);
v___x_1716_ = l_Int_repr(v_hour_1699_);
lean_dec(v_hour_1699_);
v___x_1717_ = lean_string_append(v___x_1715_, v___x_1716_);
lean_dec_ref(v___x_1716_);
return v___x_1717_;
}
}
}
else
{
lean_object* v___x_1725_; uint8_t v___x_1726_; 
v___x_1725_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1726_ = lean_int_dec_eq(v_data_1410_, v___x_1725_);
if (v___x_1726_ == 0)
{
uint8_t v___x_1727_; lean_object* v___x_1728_; uint8_t v___x_1729_; uint8_t v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1727_ = 1;
v___x_1728_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_1729_ = 0;
v___x_1730_ = 1;
v___x_1731_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1410_, v___x_1729_, v___x_1730_, v___x_1727_, v___x_1727_);
v___x_1732_ = lean_string_append(v___x_1728_, v___x_1731_);
lean_dec_ref(v___x_1731_);
return v___x_1732_;
}
else
{
lean_object* v___x_1733_; 
lean_dec(v_data_1410_);
v___x_1733_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
return v___x_1733_;
}
}
}
case 33:
{
uint8_t v_presentation_1734_; lean_object* v___x_1735_; uint8_t v___x_1736_; 
v_presentation_1734_ = lean_ctor_get_uint8(v_modifier_1409_, 0);
lean_dec_ref_known(v_modifier_1409_, 0);
v___x_1735_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1736_ = lean_int_dec_eq(v_data_1410_, v___x_1735_);
if (v___x_1736_ == 0)
{
uint8_t v___x_1737_; 
v___x_1737_ = 1;
switch(v_presentation_1734_)
{
case 0:
{
uint8_t v___x_1738_; uint8_t v___x_1739_; lean_object* v___x_1740_; 
v___x_1738_ = 2;
v___x_1739_ = 1;
v___x_1740_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1410_, v___x_1738_, v___x_1739_, v___x_1736_, v___x_1737_);
return v___x_1740_;
}
case 1:
{
uint8_t v___x_1741_; uint8_t v___x_1742_; lean_object* v___x_1743_; 
v___x_1741_ = 0;
v___x_1742_ = 1;
v___x_1743_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1410_, v___x_1741_, v___x_1742_, v___x_1736_, v___x_1737_);
return v___x_1743_;
}
case 2:
{
uint8_t v___x_1744_; uint8_t v___x_1745_; lean_object* v___x_1746_; 
v___x_1744_ = 0;
v___x_1745_ = 1;
v___x_1746_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1410_, v___x_1744_, v___x_1745_, v___x_1737_, v___x_1737_);
return v___x_1746_;
}
case 3:
{
uint8_t v___x_1747_; uint8_t v___x_1748_; lean_object* v___x_1749_; 
v___x_1747_ = 0;
v___x_1748_ = 2;
v___x_1749_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1410_, v___x_1747_, v___x_1748_, v___x_1736_, v___x_1737_);
return v___x_1749_;
}
default: 
{
uint8_t v___x_1750_; uint8_t v___x_1751_; lean_object* v___x_1752_; 
v___x_1750_ = 0;
v___x_1751_ = 2;
v___x_1752_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1410_, v___x_1750_, v___x_1751_, v___x_1737_, v___x_1737_);
return v___x_1752_;
}
}
}
else
{
lean_object* v___x_1753_; 
lean_dec(v_data_1410_);
v___x_1753_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4));
return v___x_1753_;
}
}
case 34:
{
uint8_t v_presentation_1754_; 
v_presentation_1754_ = lean_ctor_get_uint8(v_modifier_1409_, 0);
lean_dec_ref_known(v_modifier_1409_, 0);
switch(v_presentation_1754_)
{
case 0:
{
uint8_t v___x_1755_; uint8_t v___x_1756_; uint8_t v___x_1757_; uint8_t v___x_1758_; lean_object* v___x_1759_; 
v___x_1755_ = 2;
v___x_1756_ = 1;
v___x_1757_ = 0;
v___x_1758_ = 1;
v___x_1759_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1410_, v___x_1755_, v___x_1756_, v___x_1757_, v___x_1758_);
return v___x_1759_;
}
case 1:
{
uint8_t v___x_1760_; uint8_t v___x_1761_; uint8_t v___x_1762_; uint8_t v___x_1763_; lean_object* v___x_1764_; 
v___x_1760_ = 0;
v___x_1761_ = 1;
v___x_1762_ = 0;
v___x_1763_ = 1;
v___x_1764_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1410_, v___x_1760_, v___x_1761_, v___x_1762_, v___x_1763_);
return v___x_1764_;
}
case 2:
{
uint8_t v___x_1765_; uint8_t v___x_1766_; uint8_t v___x_1767_; lean_object* v___x_1768_; 
v___x_1765_ = 0;
v___x_1766_ = 1;
v___x_1767_ = 1;
v___x_1768_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1410_, v___x_1765_, v___x_1766_, v___x_1767_, v___x_1767_);
return v___x_1768_;
}
case 3:
{
uint8_t v___x_1769_; uint8_t v___x_1770_; uint8_t v___x_1771_; uint8_t v___x_1772_; lean_object* v___x_1773_; 
v___x_1769_ = 0;
v___x_1770_ = 2;
v___x_1771_ = 0;
v___x_1772_ = 1;
v___x_1773_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1410_, v___x_1769_, v___x_1770_, v___x_1771_, v___x_1772_);
return v___x_1773_;
}
default: 
{
uint8_t v___x_1774_; uint8_t v___x_1775_; uint8_t v___x_1776_; lean_object* v___x_1777_; 
v___x_1774_ = 0;
v___x_1775_ = 2;
v___x_1776_ = 1;
v___x_1777_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1410_, v___x_1774_, v___x_1775_, v___x_1776_, v___x_1776_);
return v___x_1777_;
}
}
}
case 35:
{
uint8_t v_presentation_1778_; 
v_presentation_1778_ = lean_ctor_get_uint8(v_modifier_1409_, 0);
lean_dec_ref_known(v_modifier_1409_, 0);
switch(v_presentation_1778_)
{
case 0:
{
uint8_t v___x_1779_; uint8_t v___x_1780_; uint8_t v___x_1781_; uint8_t v___x_1782_; lean_object* v___x_1783_; 
v___x_1779_ = 0;
v___x_1780_ = 2;
v___x_1781_ = 0;
v___x_1782_ = 1;
v___x_1783_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1410_, v___x_1779_, v___x_1780_, v___x_1781_, v___x_1782_);
return v___x_1783_;
}
case 1:
{
lean_object* v___x_1784_; uint8_t v___x_1785_; 
v___x_1784_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1785_ = lean_int_dec_eq(v_data_1410_, v___x_1784_);
if (v___x_1785_ == 0)
{
lean_object* v___x_1786_; uint8_t v___x_1787_; uint8_t v___x_1788_; uint8_t v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1786_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_1787_ = 0;
v___x_1788_ = 1;
v___x_1789_ = 1;
v___x_1790_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1410_, v___x_1787_, v___x_1788_, v___x_1789_, v___x_1789_);
v___x_1791_ = lean_string_append(v___x_1786_, v___x_1790_);
lean_dec_ref(v___x_1790_);
return v___x_1791_;
}
else
{
lean_object* v___x_1792_; 
lean_dec(v_data_1410_);
v___x_1792_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
return v___x_1792_;
}
}
default: 
{
lean_object* v___x_1793_; uint8_t v___x_1794_; 
v___x_1793_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1794_ = lean_int_dec_eq(v_data_1410_, v___x_1793_);
if (v___x_1794_ == 0)
{
uint8_t v___x_1795_; uint8_t v___x_1796_; uint8_t v___x_1797_; lean_object* v___x_1798_; 
v___x_1795_ = 1;
v___x_1796_ = 0;
v___x_1797_ = 2;
v___x_1798_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_data_1410_, v___x_1796_, v___x_1797_, v___x_1795_, v___x_1795_);
return v___x_1798_;
}
else
{
lean_object* v___x_1799_; 
lean_dec(v_data_1410_);
v___x_1799_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4));
return v___x_1799_;
}
}
}
}
default: 
{
lean_dec_ref(v_modifier_1409_);
return v_data_1410_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___boxed(lean_object* v_dateformat_1800_, lean_object* v_modifier_1801_, lean_object* v_data_1802_){
_start:
{
lean_object* v_res_1803_; 
v_res_1803_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWith(v_dateformat_1800_, v_modifier_1801_, v_data_1802_);
lean_dec_ref(v_dateformat_1800_);
return v_res_1803_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0(void){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1804_ = lean_unsigned_to_nat(4u);
v___x_1805_ = lean_nat_to_int(v___x_1804_);
return v___x_1805_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1(void){
_start:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1806_ = lean_unsigned_to_nat(400u);
v___x_1807_ = lean_nat_to_int(v___x_1806_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier(lean_object* v_modifier_1808_, lean_object* v_dateformat_1809_, lean_object* v_date_1810_){
_start:
{
lean_object* v_month_1812_; lean_object* v_day_1813_; uint8_t v___y_1814_; uint8_t v___y_1815_; uint8_t v_firstDayOfWeek_1820_; lean_object* v_minimalDaysInFirstWeek_1821_; lean_object* v_date_1822_; lean_object* v_timezone_1823_; uint8_t v___y_1825_; 
v_firstDayOfWeek_1820_ = lean_ctor_get_uint8(v_dateformat_1809_, sizeof(void*)*2);
v_minimalDaysInFirstWeek_1821_ = lean_ctor_get(v_dateformat_1809_, 0);
v_date_1822_ = lean_ctor_get(v_date_1810_, 0);
v_timezone_1823_ = lean_ctor_get(v_date_1810_, 3);
switch(lean_obj_tag(v_modifier_1808_))
{
case 0:
{
lean_object* v___x_1858_; lean_object* v_date_1859_; lean_object* v_year_1860_; uint8_t v___x_1861_; lean_object* v___x_1862_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1858_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_date_1859_ = lean_ctor_get(v___x_1858_, 0);
lean_inc_ref(v_date_1859_);
lean_dec(v___x_1858_);
v_year_1860_ = lean_ctor_get(v_date_1859_, 0);
lean_inc(v_year_1860_);
lean_dec_ref(v_date_1859_);
v___x_1861_ = l_Std_Time_Year_Offset_era(v_year_1860_);
lean_dec(v_year_1860_);
v___x_1862_ = lean_box(v___x_1861_);
return v___x_1862_;
}
case 1:
{
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
goto v___jp_1854_;
}
case 2:
{
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
goto v___jp_1854_;
}
case 3:
{
lean_object* v___x_1863_; lean_object* v_date_1864_; lean_object* v_year_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; uint8_t v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; uint8_t v___x_1872_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1863_ = lean_thunk_get_own(v_date_1822_);
v_date_1864_ = lean_ctor_get(v___x_1863_, 0);
lean_inc_ref(v_date_1864_);
lean_dec(v___x_1863_);
v_year_1865_ = lean_ctor_get(v_date_1864_, 0);
lean_inc(v_year_1865_);
lean_dec_ref(v_date_1864_);
v___x_1866_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0);
v___x_1867_ = lean_int_mod(v_year_1865_, v___x_1866_);
v___x_1868_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1869_ = lean_int_dec_eq(v___x_1867_, v___x_1868_);
lean_dec(v___x_1867_);
v___x_1870_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0);
v___x_1871_ = lean_int_mod(v_year_1865_, v___x_1870_);
v___x_1872_ = lean_int_dec_eq(v___x_1871_, v___x_1868_);
lean_dec(v___x_1871_);
if (v___x_1872_ == 0)
{
lean_dec(v_year_1865_);
v___y_1825_ = v___x_1869_;
goto v___jp_1824_;
}
else
{
if (v___x_1869_ == 0)
{
lean_dec(v_year_1865_);
v___y_1825_ = v___x_1869_;
goto v___jp_1824_;
}
else
{
lean_object* v___x_1873_; lean_object* v___x_1874_; uint8_t v___x_1875_; 
v___x_1873_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1);
v___x_1874_ = lean_int_mod(v_year_1865_, v___x_1873_);
lean_dec(v_year_1865_);
v___x_1875_ = lean_int_dec_eq(v___x_1874_, v___x_1868_);
lean_dec(v___x_1874_);
v___y_1825_ = v___x_1875_;
goto v___jp_1824_;
}
}
}
case 4:
{
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
goto v___jp_1850_;
}
case 5:
{
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
goto v___jp_1850_;
}
case 6:
{
lean_object* v___x_1876_; lean_object* v_date_1877_; lean_object* v_day_1878_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1876_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_date_1877_ = lean_ctor_get(v___x_1876_, 0);
lean_inc_ref(v_date_1877_);
lean_dec(v___x_1876_);
v_day_1878_ = lean_ctor_get(v_date_1877_, 2);
lean_inc(v_day_1878_);
lean_dec_ref(v_date_1877_);
return v_day_1878_;
}
case 7:
{
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
goto v___jp_1846_;
}
case 8:
{
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
goto v___jp_1846_;
}
case 9:
{
lean_object* v___x_1879_; lean_object* v_date_1880_; lean_object* v___x_1881_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1879_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_date_1880_ = lean_ctor_get(v___x_1879_, 0);
lean_inc_ref(v_date_1880_);
lean_dec(v___x_1879_);
v___x_1881_ = l_Std_Time_PlainDate_weekYear(v_date_1880_, v_firstDayOfWeek_1820_, v_minimalDaysInFirstWeek_1821_);
return v___x_1881_;
}
case 10:
{
lean_object* v___x_1882_; lean_object* v_date_1883_; lean_object* v___x_1884_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1882_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_date_1883_ = lean_ctor_get(v___x_1882_, 0);
lean_inc_ref(v_date_1883_);
lean_dec(v___x_1882_);
v___x_1884_ = l_Std_Time_PlainDate_weekOfYear(v_date_1883_, v_firstDayOfWeek_1820_, v_minimalDaysInFirstWeek_1821_);
return v___x_1884_;
}
case 11:
{
lean_object* v___x_1885_; lean_object* v_date_1886_; lean_object* v___x_1887_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1885_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_date_1886_ = lean_ctor_get(v___x_1885_, 0);
lean_inc_ref(v_date_1886_);
lean_dec(v___x_1885_);
v___x_1887_ = l_Std_Time_PlainDate_weekOfMonth(v_date_1886_, v_firstDayOfWeek_1820_);
return v___x_1887_;
}
case 12:
{
lean_object* v___x_1888_; lean_object* v_date_1889_; uint8_t v___x_1890_; lean_object* v___x_1891_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1888_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_date_1889_ = lean_ctor_get(v___x_1888_, 0);
lean_inc_ref(v_date_1889_);
lean_dec(v___x_1888_);
v___x_1890_ = l_Std_Time_PlainDate_weekday(v_date_1889_);
v___x_1891_ = lean_box(v___x_1890_);
return v___x_1891_;
}
case 13:
{
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
goto v___jp_1841_;
}
case 14:
{
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
goto v___jp_1841_;
}
case 15:
{
lean_object* v___x_1892_; 
v___x_1892_ = l_Std_Time_DateTime_alignedWeekOfMonth(v_date_1810_);
lean_dec_ref(v_date_1810_);
return v___x_1892_;
}
case 16:
{
lean_object* v___x_1893_; lean_object* v_time_1894_; lean_object* v_hour_1895_; uint8_t v___x_1896_; lean_object* v___x_1897_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1893_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_time_1894_ = lean_ctor_get(v___x_1893_, 1);
lean_inc_ref(v_time_1894_);
lean_dec(v___x_1893_);
v_hour_1895_ = lean_ctor_get(v_time_1894_, 0);
lean_inc(v_hour_1895_);
lean_dec_ref(v_time_1894_);
v___x_1896_ = l_Std_Time_HourMarker_ofOrdinal(v_hour_1895_);
lean_dec(v_hour_1895_);
v___x_1897_ = lean_box(v___x_1896_);
return v___x_1897_;
}
case 17:
{
lean_object* v___x_1898_; lean_object* v_time_1899_; lean_object* v_hour_1900_; lean_object* v_minute_1901_; lean_object* v_second_1902_; uint8_t v___x_1903_; lean_object* v___x_1904_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1898_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_time_1899_ = lean_ctor_get(v___x_1898_, 1);
lean_inc_ref(v_time_1899_);
lean_dec(v___x_1898_);
v_hour_1900_ = lean_ctor_get(v_time_1899_, 0);
lean_inc(v_hour_1900_);
v_minute_1901_ = lean_ctor_get(v_time_1899_, 1);
lean_inc(v_minute_1901_);
v_second_1902_ = lean_ctor_get(v_time_1899_, 2);
lean_inc(v_second_1902_);
lean_dec_ref(v_time_1899_);
v___x_1903_ = l_Std_Time_classifyDayPeriod(v_hour_1900_, v_minute_1901_, v_second_1902_);
lean_dec(v_second_1902_);
lean_dec(v_minute_1901_);
lean_dec(v_hour_1900_);
v___x_1904_ = lean_box(v___x_1903_);
return v___x_1904_;
}
case 18:
{
lean_object* v___x_1905_; lean_object* v_time_1906_; lean_object* v_hour_1907_; lean_object* v_minute_1908_; lean_object* v_second_1909_; uint8_t v___x_1910_; lean_object* v___x_1911_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1905_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_time_1906_ = lean_ctor_get(v___x_1905_, 1);
lean_inc_ref(v_time_1906_);
lean_dec(v___x_1905_);
v_hour_1907_ = lean_ctor_get(v_time_1906_, 0);
lean_inc(v_hour_1907_);
v_minute_1908_ = lean_ctor_get(v_time_1906_, 1);
lean_inc(v_minute_1908_);
v_second_1909_ = lean_ctor_get(v_time_1906_, 2);
lean_inc(v_second_1909_);
lean_dec_ref(v_time_1906_);
v___x_1910_ = l_Std_Time_classifyExtendedDayPeriod(v_hour_1907_, v_minute_1908_, v_second_1909_);
lean_dec(v_second_1909_);
lean_dec(v_minute_1908_);
lean_dec(v_hour_1907_);
v___x_1911_ = lean_box(v___x_1910_);
return v___x_1911_;
}
case 19:
{
lean_object* v___x_1912_; lean_object* v_time_1913_; lean_object* v_hour_1914_; lean_object* v___x_1915_; lean_object* v_fst_1916_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1912_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_time_1913_ = lean_ctor_get(v___x_1912_, 1);
lean_inc_ref(v_time_1913_);
lean_dec(v___x_1912_);
v_hour_1914_ = lean_ctor_get(v_time_1913_, 0);
lean_inc(v_hour_1914_);
lean_dec_ref(v_time_1913_);
v___x_1915_ = l_Std_Time_HourMarker_toRelative(v_hour_1914_);
v_fst_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc(v_fst_1916_);
lean_dec_ref(v___x_1915_);
return v_fst_1916_;
}
case 20:
{
lean_object* v___x_1917_; lean_object* v_time_1918_; lean_object* v_hour_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1917_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_time_1918_ = lean_ctor_get(v___x_1917_, 1);
lean_inc_ref(v_time_1918_);
lean_dec(v___x_1917_);
v_hour_1919_ = lean_ctor_get(v_time_1918_, 0);
lean_inc(v_hour_1919_);
lean_dec_ref(v_time_1918_);
v___x_1920_ = lean_obj_once(&l_Std_Time_classifyDayPeriod___closed__0, &l_Std_Time_classifyDayPeriod___closed__0_once, _init_l_Std_Time_classifyDayPeriod___closed__0);
v___x_1921_ = lean_int_emod(v_hour_1919_, v___x_1920_);
lean_dec(v_hour_1919_);
return v___x_1921_;
}
case 21:
{
lean_object* v___x_1922_; lean_object* v_time_1923_; lean_object* v_hour_1924_; lean_object* v___x_1925_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1922_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_time_1923_ = lean_ctor_get(v___x_1922_, 1);
lean_inc_ref(v_time_1923_);
lean_dec(v___x_1922_);
v_hour_1924_ = lean_ctor_get(v_time_1923_, 0);
lean_inc(v_hour_1924_);
lean_dec_ref(v_time_1923_);
v___x_1925_ = l_Std_Time_Hour_Ordinal_shiftTo1BasedHour(v_hour_1924_);
lean_dec(v_hour_1924_);
return v___x_1925_;
}
case 22:
{
lean_object* v___x_1926_; lean_object* v_time_1927_; lean_object* v_hour_1928_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1926_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_time_1927_ = lean_ctor_get(v___x_1926_, 1);
lean_inc_ref(v_time_1927_);
lean_dec(v___x_1926_);
v_hour_1928_ = lean_ctor_get(v_time_1927_, 0);
lean_inc(v_hour_1928_);
lean_dec_ref(v_time_1927_);
return v_hour_1928_;
}
case 23:
{
lean_object* v___x_1929_; lean_object* v_time_1930_; lean_object* v_minute_1931_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1929_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_time_1930_ = lean_ctor_get(v___x_1929_, 1);
lean_inc_ref(v_time_1930_);
lean_dec(v___x_1929_);
v_minute_1931_ = lean_ctor_get(v_time_1930_, 1);
lean_inc(v_minute_1931_);
lean_dec_ref(v_time_1930_);
return v_minute_1931_;
}
case 24:
{
lean_object* v___x_1932_; lean_object* v_time_1933_; lean_object* v_second_1934_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1932_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_time_1933_ = lean_ctor_get(v___x_1932_, 1);
lean_inc_ref(v_time_1933_);
lean_dec(v___x_1932_);
v_second_1934_ = lean_ctor_get(v_time_1933_, 2);
lean_inc(v_second_1934_);
lean_dec_ref(v_time_1933_);
return v_second_1934_;
}
case 25:
{
lean_object* v___x_1935_; lean_object* v_time_1936_; lean_object* v_nanosecond_1937_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1935_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_time_1936_ = lean_ctor_get(v___x_1935_, 1);
lean_inc_ref(v_time_1936_);
lean_dec(v___x_1935_);
v_nanosecond_1937_ = lean_ctor_get(v_time_1936_, 3);
lean_inc(v_nanosecond_1937_);
lean_dec_ref(v_time_1936_);
return v_nanosecond_1937_;
}
case 26:
{
lean_object* v___x_1938_; lean_object* v_time_1939_; lean_object* v___x_1940_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1938_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_time_1939_ = lean_ctor_get(v___x_1938_, 1);
lean_inc_ref(v_time_1939_);
lean_dec(v___x_1938_);
v___x_1940_ = l_Std_Time_PlainTime_toMilliseconds(v_time_1939_);
lean_dec_ref(v_time_1939_);
return v___x_1940_;
}
case 27:
{
lean_object* v___x_1941_; lean_object* v_time_1942_; lean_object* v_nanosecond_1943_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1941_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_time_1942_ = lean_ctor_get(v___x_1941_, 1);
lean_inc_ref(v_time_1942_);
lean_dec(v___x_1941_);
v_nanosecond_1943_ = lean_ctor_get(v_time_1942_, 3);
lean_inc(v_nanosecond_1943_);
lean_dec_ref(v_time_1942_);
return v_nanosecond_1943_;
}
case 28:
{
lean_object* v___x_1944_; lean_object* v_time_1945_; lean_object* v___x_1946_; 
lean_inc_ref(v_date_1822_);
lean_dec_ref(v_date_1810_);
v___x_1944_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_time_1945_ = lean_ctor_get(v___x_1944_, 1);
lean_inc_ref(v_time_1945_);
lean_dec(v___x_1944_);
v___x_1946_ = l_Std_Time_PlainTime_toNanoseconds(v_time_1945_);
lean_dec_ref(v_time_1945_);
return v___x_1946_;
}
case 29:
{
uint8_t v_presentation_1947_; 
lean_inc_ref(v_timezone_1823_);
lean_dec_ref(v_date_1810_);
v_presentation_1947_ = lean_ctor_get_uint8(v_modifier_1808_, 0);
if (v_presentation_1947_ == 0)
{
lean_object* v___x_1948_; 
lean_dec_ref(v_timezone_1823_);
v___x_1948_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2));
return v___x_1948_;
}
else
{
lean_object* v_offset_1949_; lean_object* v_name_1950_; lean_object* v___x_1965_; lean_object* v___x_1966_; uint8_t v___x_1967_; 
v_offset_1949_ = lean_ctor_get(v_timezone_1823_, 0);
lean_inc(v_offset_1949_);
v_name_1950_ = lean_ctor_get(v_timezone_1823_, 1);
lean_inc_ref(v_name_1950_);
lean_dec_ref(v_timezone_1823_);
v___x_1965_ = lean_string_utf8_byte_size(v_name_1950_);
v___x_1966_ = lean_unsigned_to_nat(1u);
v___x_1967_ = lean_nat_dec_le(v___x_1966_, v___x_1965_);
if (v___x_1967_ == 0)
{
goto v___jp_1958_;
}
else
{
lean_object* v___x_1968_; lean_object* v___x_1969_; uint8_t v___x_1970_; 
v___x_1968_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0));
v___x_1969_ = lean_unsigned_to_nat(0u);
v___x_1970_ = lean_string_memcmp(v_name_1950_, v___x_1968_, v___x_1969_, v___x_1969_, v___x_1966_);
if (v___x_1970_ == 0)
{
goto v___jp_1958_;
}
else
{
lean_dec_ref(v_name_1950_);
goto v___jp_1951_;
}
}
v___jp_1951_:
{
uint8_t v___x_1952_; lean_object* v___x_1953_; uint8_t v___x_1954_; uint8_t v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1952_ = 1;
v___x_1953_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_1954_ = 0;
v___x_1955_ = 1;
v___x_1956_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_offset_1949_, v___x_1954_, v___x_1955_, v___x_1952_, v___x_1952_);
v___x_1957_ = lean_string_append(v___x_1953_, v___x_1956_);
lean_dec_ref(v___x_1956_);
return v___x_1957_;
}
v___jp_1958_:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; uint8_t v___x_1961_; 
v___x_1959_ = lean_string_utf8_byte_size(v_name_1950_);
v___x_1960_ = lean_unsigned_to_nat(1u);
v___x_1961_ = lean_nat_dec_le(v___x_1960_, v___x_1959_);
if (v___x_1961_ == 0)
{
lean_dec(v_offset_1949_);
return v_name_1950_;
}
else
{
lean_object* v___x_1962_; lean_object* v___x_1963_; uint8_t v___x_1964_; 
v___x_1962_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_1963_ = lean_unsigned_to_nat(0u);
v___x_1964_ = lean_string_memcmp(v_name_1950_, v___x_1962_, v___x_1963_, v___x_1963_, v___x_1960_);
if (v___x_1964_ == 0)
{
lean_dec(v_offset_1949_);
return v_name_1950_;
}
else
{
lean_dec_ref(v_name_1950_);
goto v___jp_1951_;
}
}
}
}
}
case 30:
{
uint8_t v_presentation_1971_; 
lean_inc_ref(v_timezone_1823_);
lean_dec_ref(v_date_1810_);
v_presentation_1971_ = lean_ctor_get_uint8(v_modifier_1808_, 0);
if (v_presentation_1971_ == 0)
{
lean_object* v_offset_1972_; lean_object* v_abbreviation_1973_; lean_object* v___x_1988_; lean_object* v___x_1989_; uint8_t v___x_1990_; 
v_offset_1972_ = lean_ctor_get(v_timezone_1823_, 0);
lean_inc(v_offset_1972_);
v_abbreviation_1973_ = lean_ctor_get(v_timezone_1823_, 2);
lean_inc_ref(v_abbreviation_1973_);
lean_dec_ref(v_timezone_1823_);
v___x_1988_ = lean_string_utf8_byte_size(v_abbreviation_1973_);
v___x_1989_ = lean_unsigned_to_nat(1u);
v___x_1990_ = lean_nat_dec_le(v___x_1989_, v___x_1988_);
if (v___x_1990_ == 0)
{
goto v___jp_1981_;
}
else
{
lean_object* v___x_1991_; lean_object* v___x_1992_; uint8_t v___x_1993_; 
v___x_1991_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0));
v___x_1992_ = lean_unsigned_to_nat(0u);
v___x_1993_ = lean_string_memcmp(v_abbreviation_1973_, v___x_1991_, v___x_1992_, v___x_1992_, v___x_1989_);
if (v___x_1993_ == 0)
{
goto v___jp_1981_;
}
else
{
lean_dec_ref(v_abbreviation_1973_);
goto v___jp_1974_;
}
}
v___jp_1974_:
{
uint8_t v___x_1975_; lean_object* v___x_1976_; uint8_t v___x_1977_; uint8_t v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1975_ = 1;
v___x_1976_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_1977_ = 0;
v___x_1978_ = 1;
v___x_1979_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_offset_1972_, v___x_1977_, v___x_1978_, v___x_1975_, v___x_1975_);
v___x_1980_ = lean_string_append(v___x_1976_, v___x_1979_);
lean_dec_ref(v___x_1979_);
return v___x_1980_;
}
v___jp_1981_:
{
lean_object* v___x_1982_; lean_object* v___x_1983_; uint8_t v___x_1984_; 
v___x_1982_ = lean_string_utf8_byte_size(v_abbreviation_1973_);
v___x_1983_ = lean_unsigned_to_nat(1u);
v___x_1984_ = lean_nat_dec_le(v___x_1983_, v___x_1982_);
if (v___x_1984_ == 0)
{
lean_dec(v_offset_1972_);
return v_abbreviation_1973_;
}
else
{
lean_object* v___x_1985_; lean_object* v___x_1986_; uint8_t v___x_1987_; 
v___x_1985_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_1986_ = lean_unsigned_to_nat(0u);
v___x_1987_ = lean_string_memcmp(v_abbreviation_1973_, v___x_1985_, v___x_1986_, v___x_1986_, v___x_1983_);
if (v___x_1987_ == 0)
{
lean_dec(v_offset_1972_);
return v_abbreviation_1973_;
}
else
{
lean_dec_ref(v_abbreviation_1973_);
goto v___jp_1974_;
}
}
}
}
else
{
lean_object* v_offset_1994_; lean_object* v_name_1995_; lean_object* v___x_2010_; lean_object* v___x_2011_; uint8_t v___x_2012_; 
v_offset_1994_ = lean_ctor_get(v_timezone_1823_, 0);
lean_inc(v_offset_1994_);
v_name_1995_ = lean_ctor_get(v_timezone_1823_, 1);
lean_inc_ref(v_name_1995_);
lean_dec_ref(v_timezone_1823_);
v___x_2010_ = lean_string_utf8_byte_size(v_name_1995_);
v___x_2011_ = lean_unsigned_to_nat(1u);
v___x_2012_ = lean_nat_dec_le(v___x_2011_, v___x_2010_);
if (v___x_2012_ == 0)
{
goto v___jp_2003_;
}
else
{
lean_object* v___x_2013_; lean_object* v___x_2014_; uint8_t v___x_2015_; 
v___x_2013_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0));
v___x_2014_ = lean_unsigned_to_nat(0u);
v___x_2015_ = lean_string_memcmp(v_name_1995_, v___x_2013_, v___x_2014_, v___x_2014_, v___x_2011_);
if (v___x_2015_ == 0)
{
goto v___jp_2003_;
}
else
{
lean_dec_ref(v_name_1995_);
goto v___jp_1996_;
}
}
v___jp_1996_:
{
uint8_t v___x_1997_; lean_object* v___x_1998_; uint8_t v___x_1999_; uint8_t v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_1997_ = 1;
v___x_1998_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_1999_ = 0;
v___x_2000_ = 1;
v___x_2001_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_offset_1994_, v___x_1999_, v___x_2000_, v___x_1997_, v___x_1997_);
v___x_2002_ = lean_string_append(v___x_1998_, v___x_2001_);
lean_dec_ref(v___x_2001_);
return v___x_2002_;
}
v___jp_2003_:
{
lean_object* v___x_2004_; lean_object* v___x_2005_; uint8_t v___x_2006_; 
v___x_2004_ = lean_string_utf8_byte_size(v_name_1995_);
v___x_2005_ = lean_unsigned_to_nat(1u);
v___x_2006_ = lean_nat_dec_le(v___x_2005_, v___x_2004_);
if (v___x_2006_ == 0)
{
lean_dec(v_offset_1994_);
return v_name_1995_;
}
else
{
lean_object* v___x_2007_; lean_object* v___x_2008_; uint8_t v___x_2009_; 
v___x_2007_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_2008_ = lean_unsigned_to_nat(0u);
v___x_2009_ = lean_string_memcmp(v_name_1995_, v___x_2007_, v___x_2008_, v___x_2008_, v___x_2005_);
if (v___x_2009_ == 0)
{
lean_dec(v_offset_1994_);
return v_name_1995_;
}
else
{
lean_dec_ref(v_name_1995_);
goto v___jp_1996_;
}
}
}
}
}
case 31:
{
uint8_t v_presentation_2016_; 
lean_inc_ref(v_timezone_1823_);
lean_dec_ref(v_date_1810_);
v_presentation_2016_ = lean_ctor_get_uint8(v_modifier_1808_, 0);
if (v_presentation_2016_ == 0)
{
lean_object* v_offset_2017_; lean_object* v_abbreviation_2018_; lean_object* v___x_2033_; lean_object* v___x_2034_; uint8_t v___x_2035_; 
v_offset_2017_ = lean_ctor_get(v_timezone_1823_, 0);
lean_inc(v_offset_2017_);
v_abbreviation_2018_ = lean_ctor_get(v_timezone_1823_, 2);
lean_inc_ref(v_abbreviation_2018_);
lean_dec_ref(v_timezone_1823_);
v___x_2033_ = lean_string_utf8_byte_size(v_abbreviation_2018_);
v___x_2034_ = lean_unsigned_to_nat(1u);
v___x_2035_ = lean_nat_dec_le(v___x_2034_, v___x_2033_);
if (v___x_2035_ == 0)
{
goto v___jp_2026_;
}
else
{
lean_object* v___x_2036_; lean_object* v___x_2037_; uint8_t v___x_2038_; 
v___x_2036_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0));
v___x_2037_ = lean_unsigned_to_nat(0u);
v___x_2038_ = lean_string_memcmp(v_abbreviation_2018_, v___x_2036_, v___x_2037_, v___x_2037_, v___x_2034_);
if (v___x_2038_ == 0)
{
goto v___jp_2026_;
}
else
{
lean_dec_ref(v_abbreviation_2018_);
goto v___jp_2019_;
}
}
v___jp_2019_:
{
uint8_t v___x_2020_; lean_object* v___x_2021_; uint8_t v___x_2022_; uint8_t v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2020_ = 1;
v___x_2021_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_2022_ = 0;
v___x_2023_ = 1;
v___x_2024_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_offset_2017_, v___x_2022_, v___x_2023_, v___x_2020_, v___x_2020_);
v___x_2025_ = lean_string_append(v___x_2021_, v___x_2024_);
lean_dec_ref(v___x_2024_);
return v___x_2025_;
}
v___jp_2026_:
{
lean_object* v___x_2027_; lean_object* v___x_2028_; uint8_t v___x_2029_; 
v___x_2027_ = lean_string_utf8_byte_size(v_abbreviation_2018_);
v___x_2028_ = lean_unsigned_to_nat(1u);
v___x_2029_ = lean_nat_dec_le(v___x_2028_, v___x_2027_);
if (v___x_2029_ == 0)
{
lean_dec(v_offset_2017_);
return v_abbreviation_2018_;
}
else
{
lean_object* v___x_2030_; lean_object* v___x_2031_; uint8_t v___x_2032_; 
v___x_2030_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_2031_ = lean_unsigned_to_nat(0u);
v___x_2032_ = lean_string_memcmp(v_abbreviation_2018_, v___x_2030_, v___x_2031_, v___x_2031_, v___x_2028_);
if (v___x_2032_ == 0)
{
lean_dec(v_offset_2017_);
return v_abbreviation_2018_;
}
else
{
lean_dec_ref(v_abbreviation_2018_);
goto v___jp_2019_;
}
}
}
}
else
{
lean_object* v_offset_2039_; lean_object* v_name_2040_; lean_object* v___x_2055_; lean_object* v___x_2056_; uint8_t v___x_2057_; 
v_offset_2039_ = lean_ctor_get(v_timezone_1823_, 0);
lean_inc(v_offset_2039_);
v_name_2040_ = lean_ctor_get(v_timezone_1823_, 1);
lean_inc_ref(v_name_2040_);
lean_dec_ref(v_timezone_1823_);
v___x_2055_ = lean_string_utf8_byte_size(v_name_2040_);
v___x_2056_ = lean_unsigned_to_nat(1u);
v___x_2057_ = lean_nat_dec_le(v___x_2056_, v___x_2055_);
if (v___x_2057_ == 0)
{
goto v___jp_2048_;
}
else
{
lean_object* v___x_2058_; lean_object* v___x_2059_; uint8_t v___x_2060_; 
v___x_2058_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_toSigned___closed__0));
v___x_2059_ = lean_unsigned_to_nat(0u);
v___x_2060_ = lean_string_memcmp(v_name_2040_, v___x_2058_, v___x_2059_, v___x_2059_, v___x_2056_);
if (v___x_2060_ == 0)
{
goto v___jp_2048_;
}
else
{
lean_dec_ref(v_name_2040_);
goto v___jp_2041_;
}
}
v___jp_2041_:
{
uint8_t v___x_2042_; lean_object* v___x_2043_; uint8_t v___x_2044_; uint8_t v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; 
v___x_2042_ = 1;
v___x_2043_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_2044_ = 0;
v___x_2045_ = 1;
v___x_2046_ = l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString(v_offset_2039_, v___x_2044_, v___x_2045_, v___x_2042_, v___x_2042_);
v___x_2047_ = lean_string_append(v___x_2043_, v___x_2046_);
lean_dec_ref(v___x_2046_);
return v___x_2047_;
}
v___jp_2048_:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; uint8_t v___x_2051_; 
v___x_2049_ = lean_string_utf8_byte_size(v_name_2040_);
v___x_2050_ = lean_unsigned_to_nat(1u);
v___x_2051_ = lean_nat_dec_le(v___x_2050_, v___x_2049_);
if (v___x_2051_ == 0)
{
lean_dec(v_offset_2039_);
return v_name_2040_;
}
else
{
lean_object* v___x_2052_; lean_object* v___x_2053_; uint8_t v___x_2054_; 
v___x_2052_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
v___x_2053_ = lean_unsigned_to_nat(0u);
v___x_2054_ = lean_string_memcmp(v_name_2040_, v___x_2052_, v___x_2053_, v___x_2053_, v___x_2050_);
if (v___x_2054_ == 0)
{
lean_dec(v_offset_2039_);
return v_name_2040_;
}
else
{
lean_dec_ref(v_name_2040_);
goto v___jp_2041_;
}
}
}
}
}
default: 
{
lean_object* v_offset_2061_; 
lean_inc_ref(v_timezone_1823_);
lean_dec_ref(v_date_1810_);
v_offset_2061_ = lean_ctor_get(v_timezone_1823_, 0);
lean_inc(v_offset_2061_);
lean_dec_ref(v_timezone_1823_);
return v_offset_2061_;
}
}
v___jp_1811_:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1816_, 0, v_month_1812_);
lean_ctor_set(v___x_1816_, 1, v_day_1813_);
v___x_1817_ = l_Std_Time_ValidDate_dayOfYear(v___y_1815_, v___x_1816_);
lean_dec_ref_known(v___x_1816_, 2);
v___x_1818_ = lean_box(v___y_1814_);
v___x_1819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1819_, 0, v___x_1818_);
lean_ctor_set(v___x_1819_, 1, v___x_1817_);
return v___x_1819_;
}
v___jp_1824_:
{
lean_object* v___x_1826_; lean_object* v_date_1827_; lean_object* v_year_1828_; lean_object* v_month_1829_; lean_object* v_day_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; uint8_t v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; uint8_t v___x_1837_; 
v___x_1826_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_date_1827_ = lean_ctor_get(v___x_1826_, 0);
lean_inc_ref(v_date_1827_);
lean_dec(v___x_1826_);
v_year_1828_ = lean_ctor_get(v_date_1827_, 0);
lean_inc(v_year_1828_);
v_month_1829_ = lean_ctor_get(v_date_1827_, 1);
lean_inc(v_month_1829_);
v_day_1830_ = lean_ctor_get(v_date_1827_, 2);
lean_inc(v_day_1830_);
lean_dec_ref(v_date_1827_);
v___x_1831_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0);
v___x_1832_ = lean_int_mod(v_year_1828_, v___x_1831_);
v___x_1833_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_1834_ = lean_int_dec_eq(v___x_1832_, v___x_1833_);
lean_dec(v___x_1832_);
v___x_1835_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0);
v___x_1836_ = lean_int_mod(v_year_1828_, v___x_1835_);
v___x_1837_ = lean_int_dec_eq(v___x_1836_, v___x_1833_);
lean_dec(v___x_1836_);
if (v___x_1837_ == 0)
{
lean_dec(v_year_1828_);
v_month_1812_ = v_month_1829_;
v_day_1813_ = v_day_1830_;
v___y_1814_ = v___y_1825_;
v___y_1815_ = v___x_1834_;
goto v___jp_1811_;
}
else
{
if (v___x_1834_ == 0)
{
lean_dec(v_year_1828_);
v_month_1812_ = v_month_1829_;
v_day_1813_ = v_day_1830_;
v___y_1814_ = v___y_1825_;
v___y_1815_ = v___x_1834_;
goto v___jp_1811_;
}
else
{
lean_object* v___x_1838_; lean_object* v___x_1839_; uint8_t v___x_1840_; 
v___x_1838_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1);
v___x_1839_ = lean_int_mod(v_year_1828_, v___x_1838_);
lean_dec(v_year_1828_);
v___x_1840_ = lean_int_dec_eq(v___x_1839_, v___x_1833_);
lean_dec(v___x_1839_);
v_month_1812_ = v_month_1829_;
v_day_1813_ = v_day_1830_;
v___y_1814_ = v___y_1825_;
v___y_1815_ = v___x_1840_;
goto v___jp_1811_;
}
}
}
v___jp_1841_:
{
lean_object* v___x_1842_; lean_object* v_date_1843_; uint8_t v___x_1844_; lean_object* v___x_1845_; 
v___x_1842_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_date_1843_ = lean_ctor_get(v___x_1842_, 0);
lean_inc_ref(v_date_1843_);
lean_dec(v___x_1842_);
v___x_1844_ = l_Std_Time_PlainDate_weekday(v_date_1843_);
v___x_1845_ = lean_box(v___x_1844_);
return v___x_1845_;
}
v___jp_1846_:
{
lean_object* v___x_1847_; lean_object* v_date_1848_; lean_object* v___x_1849_; 
v___x_1847_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_date_1848_ = lean_ctor_get(v___x_1847_, 0);
lean_inc_ref(v_date_1848_);
lean_dec(v___x_1847_);
v___x_1849_ = l_Std_Time_PlainDate_quarter(v_date_1848_);
lean_dec_ref(v_date_1848_);
return v___x_1849_;
}
v___jp_1850_:
{
lean_object* v___x_1851_; lean_object* v_date_1852_; lean_object* v_month_1853_; 
v___x_1851_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_date_1852_ = lean_ctor_get(v___x_1851_, 0);
lean_inc_ref(v_date_1852_);
lean_dec(v___x_1851_);
v_month_1853_ = lean_ctor_get(v_date_1852_, 1);
lean_inc(v_month_1853_);
lean_dec_ref(v_date_1852_);
return v_month_1853_;
}
v___jp_1854_:
{
lean_object* v___x_1855_; lean_object* v_date_1856_; lean_object* v_year_1857_; 
v___x_1855_ = lean_thunk_get_own(v_date_1822_);
lean_dec_ref(v_date_1822_);
v_date_1856_ = lean_ctor_get(v___x_1855_, 0);
lean_inc_ref(v_date_1856_);
lean_dec(v___x_1855_);
v_year_1857_ = lean_ctor_get(v_date_1856_, 0);
lean_inc(v_year_1857_);
lean_dec_ref(v_date_1856_);
return v_year_1857_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___boxed(lean_object* v_modifier_2062_, lean_object* v_dateformat_2063_, lean_object* v_date_2064_){
_start:
{
lean_object* v_res_2065_; 
v_res_2065_ = l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier(v_modifier_2062_, v_dateformat_2063_, v_date_2064_);
lean_dec_ref(v_dateformat_2063_);
lean_dec_ref(v_modifier_2062_);
return v_res_2065_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___lam__0(lean_object* v___x_2066_, lean_object* v___y_2067_){
_start:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2066_);
v___x_2069_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2069_, 0, v___y_2067_);
lean_ctor_set(v___x_2069_, 1, v___x_2068_);
return v___x_2069_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg___lam__0(lean_object* v___x_2070_, lean_object* v_b_2071_, lean_object* v___y_2072_){
_start:
{
lean_object* v_fst_2073_; lean_object* v_snd_2074_; lean_object* v___x_2075_; 
v_fst_2073_ = lean_ctor_get(v___x_2070_, 0);
lean_inc(v_fst_2073_);
v_snd_2074_ = lean_ctor_get(v___x_2070_, 1);
lean_inc(v_snd_2074_);
lean_dec_ref(v___x_2070_);
lean_inc_ref(v___y_2072_);
v___x_2075_ = lean_apply_1(v_b_2071_, v___y_2072_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_dec(v_snd_2074_);
lean_dec(v_fst_2073_);
lean_dec_ref(v___y_2072_);
return v___x_2075_;
}
else
{
lean_object* v_pos_2076_; lean_object* v_snd_2077_; lean_object* v_snd_2078_; uint8_t v_decide_2079_; 
v_pos_2076_ = lean_ctor_get(v___x_2075_, 0);
lean_inc(v_pos_2076_);
v_snd_2077_ = lean_ctor_get(v___y_2072_, 1);
lean_inc(v_snd_2077_);
lean_dec_ref(v___y_2072_);
v_snd_2078_ = lean_ctor_get(v_pos_2076_, 1);
v_decide_2079_ = lean_nat_dec_eq(v_snd_2077_, v_snd_2078_);
lean_dec(v_snd_2077_);
if (v_decide_2079_ == 0)
{
lean_dec(v_pos_2076_);
lean_dec(v_snd_2074_);
lean_dec(v_fst_2073_);
return v___x_2075_;
}
else
{
lean_object* v___x_2080_; 
lean_dec_ref_known(v___x_2075_, 2);
v___x_2080_ = l_Std_Internal_Parsec_String_pstring(v_fst_2073_, v_pos_2076_);
if (lean_obj_tag(v___x_2080_) == 0)
{
lean_object* v_pos_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2088_; 
v_pos_2081_ = lean_ctor_get(v___x_2080_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___x_2080_);
if (v_isSharedCheck_2088_ == 0)
{
lean_object* v_unused_2089_; 
v_unused_2089_ = lean_ctor_get(v___x_2080_, 1);
lean_dec(v_unused_2089_);
v___x_2083_ = v___x_2080_;
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_pos_2081_);
lean_dec(v___x_2080_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v___x_2086_; 
if (v_isShared_2084_ == 0)
{
lean_ctor_set(v___x_2083_, 1, v_snd_2074_);
v___x_2086_ = v___x_2083_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_pos_2081_);
lean_ctor_set(v_reuseFailAlloc_2087_, 1, v_snd_2074_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
}
else
{
lean_object* v_pos_2090_; lean_object* v_err_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2098_; 
lean_dec(v_snd_2074_);
v_pos_2090_ = lean_ctor_get(v___x_2080_, 0);
v_err_2091_ = lean_ctor_get(v___x_2080_, 1);
v_isSharedCheck_2098_ = !lean_is_exclusive(v___x_2080_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2093_ = v___x_2080_;
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_err_2091_);
lean_inc(v_pos_2090_);
lean_dec(v___x_2080_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2096_; 
if (v_isShared_2094_ == 0)
{
v___x_2096_ = v___x_2093_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v_pos_2090_);
lean_ctor_set(v_reuseFailAlloc_2097_, 1, v_err_2091_);
v___x_2096_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
return v___x_2096_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg(lean_object* v_as_2099_, size_t v_i_2100_, size_t v_stop_2101_, lean_object* v_b_2102_, lean_object* v___y_2103_){
_start:
{
uint8_t v___x_2104_; 
v___x_2104_ = lean_usize_dec_eq(v_i_2100_, v_stop_2101_);
if (v___x_2104_ == 0)
{
lean_object* v___x_2105_; lean_object* v___f_2106_; size_t v___x_2107_; size_t v___x_2108_; 
v___x_2105_ = lean_array_uget_borrowed(v_as_2099_, v_i_2100_);
lean_inc(v___x_2105_);
v___f_2106_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2106_, 0, v___x_2105_);
lean_closure_set(v___f_2106_, 1, v_b_2102_);
v___x_2107_ = ((size_t)1ULL);
v___x_2108_ = lean_usize_add(v_i_2100_, v___x_2107_);
v_i_2100_ = v___x_2108_;
v_b_2102_ = v___f_2106_;
goto _start;
}
else
{
lean_object* v___x_2110_; 
v___x_2110_ = lean_apply_1(v_b_2102_, v___y_2103_);
return v___x_2110_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg___boxed(lean_object* v_as_2111_, lean_object* v_i_2112_, lean_object* v_stop_2113_, lean_object* v_b_2114_, lean_object* v___y_2115_){
_start:
{
size_t v_i_boxed_2116_; size_t v_stop_boxed_2117_; lean_object* v_res_2118_; 
v_i_boxed_2116_ = lean_unbox_usize(v_i_2112_);
lean_dec(v_i_2112_);
v_stop_boxed_2117_ = lean_unbox_usize(v_stop_2113_);
lean_dec(v_stop_2113_);
v_res_2118_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg(v_as_2111_, v_i_boxed_2116_, v_stop_boxed_2117_, v_b_2114_, v___y_2115_);
lean_dec_ref(v_as_2111_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(lean_object* v_pairs_2124_, lean_object* v_a_2125_){
_start:
{
lean_object* v___x_2126_; lean_object* v___x_2127_; uint8_t v___x_2128_; 
v___x_2126_ = lean_unsigned_to_nat(0u);
v___x_2127_ = lean_array_get_size(v_pairs_2124_);
v___x_2128_ = lean_nat_dec_lt(v___x_2126_, v___x_2127_);
if (v___x_2128_ == 0)
{
lean_object* v___x_2129_; lean_object* v___x_2130_; 
v___x_2129_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__1));
v___x_2130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2130_, 0, v_a_2125_);
lean_ctor_set(v___x_2130_, 1, v___x_2129_);
return v___x_2130_;
}
else
{
lean_object* v___f_2131_; size_t v___x_2132_; size_t v___x_2133_; lean_object* v___x_2134_; 
v___f_2131_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___closed__2));
v___x_2132_ = ((size_t)0ULL);
v___x_2133_ = lean_usize_of_nat(v___x_2127_);
v___x_2134_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg(v_pairs_2124_, v___x_2132_, v___x_2133_, v___f_2131_, v_a_2125_);
return v___x_2134_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg___boxed(lean_object* v_pairs_2135_, lean_object* v_a_2136_){
_start:
{
lean_object* v_res_2137_; 
v_res_2137_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v_pairs_2135_, v_a_2136_);
lean_dec_ref(v_pairs_2135_);
return v_res_2137_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols(lean_object* v_00_u03b1_2138_, lean_object* v_pairs_2139_, lean_object* v_a_2140_){
_start:
{
lean_object* v___x_2141_; 
v___x_2141_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v_pairs_2139_, v_a_2140_);
return v___x_2141_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___boxed(lean_object* v_00_u03b1_2142_, lean_object* v_pairs_2143_, lean_object* v_a_2144_){
_start:
{
lean_object* v_res_2145_; 
v_res_2145_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols(v_00_u03b1_2142_, v_pairs_2143_, v_a_2144_);
lean_dec_ref(v_pairs_2143_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0(lean_object* v_00_u03b1_2146_, lean_object* v_as_2147_, size_t v_i_2148_, size_t v_stop_2149_, lean_object* v_b_2150_, lean_object* v___y_2151_){
_start:
{
lean_object* v___x_2152_; 
v___x_2152_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___redArg(v_as_2147_, v_i_2148_, v_stop_2149_, v_b_2150_, v___y_2151_);
return v___x_2152_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0___boxed(lean_object* v_00_u03b1_2153_, lean_object* v_as_2154_, lean_object* v_i_2155_, lean_object* v_stop_2156_, lean_object* v_b_2157_, lean_object* v___y_2158_){
_start:
{
size_t v_i_boxed_2159_; size_t v_stop_boxed_2160_; lean_object* v_res_2161_; 
v_i_boxed_2159_ = lean_unbox_usize(v_i_2155_);
lean_dec(v_i_2155_);
v_stop_boxed_2160_ = lean_unbox_usize(v_stop_2156_);
lean_dec(v_stop_2156_);
v_res_2161_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols_spec__0(v_00_u03b1_2153_, v_as_2154_, v_i_boxed_2159_, v_stop_boxed_2160_, v_b_2157_, v___y_2158_);
lean_dec_ref(v_as_2154_);
return v_res_2161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0___redArg(size_t v_sz_2162_, size_t v_i_2163_, lean_object* v_bs_2164_){
_start:
{
uint8_t v___x_2165_; 
v___x_2165_ = lean_usize_dec_lt(v_i_2163_, v_sz_2162_);
if (v___x_2165_ == 0)
{
return v_bs_2164_;
}
else
{
lean_object* v_v_2166_; lean_object* v___x_2167_; lean_object* v_bs_x27_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; size_t v___x_2174_; size_t v___x_2175_; lean_object* v___x_2176_; 
v_v_2166_ = lean_array_uget(v_bs_2164_, v_i_2163_);
v___x_2167_ = lean_unsigned_to_nat(0u);
v_bs_x27_2168_ = lean_array_uset(v_bs_2164_, v_i_2163_, v___x_2167_);
v___x_2169_ = lean_usize_to_nat(v_i_2163_);
v___x_2170_ = lean_nat_to_int(v___x_2169_);
v___x_2171_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_2172_ = lean_int_add(v___x_2170_, v___x_2171_);
lean_dec(v___x_2170_);
v___x_2173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2173_, 0, v_v_2166_);
lean_ctor_set(v___x_2173_, 1, v___x_2172_);
v___x_2174_ = ((size_t)1ULL);
v___x_2175_ = lean_usize_add(v_i_2163_, v___x_2174_);
v___x_2176_ = lean_array_uset(v_bs_x27_2168_, v_i_2163_, v___x_2173_);
v_i_2163_ = v___x_2175_;
v_bs_2164_ = v___x_2176_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0___redArg___boxed(lean_object* v_sz_2178_, lean_object* v_i_2179_, lean_object* v_bs_2180_){
_start:
{
size_t v_sz_boxed_2181_; size_t v_i_boxed_2182_; lean_object* v_res_2183_; 
v_sz_boxed_2181_ = lean_unbox_usize(v_sz_2178_);
lean_dec(v_sz_2178_);
v_i_boxed_2182_ = lean_unbox_usize(v_i_2179_);
lean_dec(v_i_2179_);
v_res_2183_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0___redArg(v_sz_boxed_2181_, v_i_boxed_2182_, v_bs_2180_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0(lean_object* v_as_2184_, size_t v_sz_2185_, size_t v_i_2186_, lean_object* v_bs_2187_){
_start:
{
uint8_t v___x_2188_; 
v___x_2188_ = lean_usize_dec_lt(v_i_2186_, v_sz_2185_);
if (v___x_2188_ == 0)
{
return v_bs_2187_;
}
else
{
lean_object* v_v_2189_; lean_object* v___x_2190_; lean_object* v_bs_x27_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; size_t v___x_2197_; size_t v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v_v_2189_ = lean_array_uget(v_bs_2187_, v_i_2186_);
v___x_2190_ = lean_unsigned_to_nat(0u);
v_bs_x27_2191_ = lean_array_uset(v_bs_2187_, v_i_2186_, v___x_2190_);
v___x_2192_ = lean_usize_to_nat(v_i_2186_);
v___x_2193_ = lean_nat_to_int(v___x_2192_);
v___x_2194_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_2195_ = lean_int_add(v___x_2193_, v___x_2194_);
lean_dec(v___x_2193_);
v___x_2196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2196_, 0, v_v_2189_);
lean_ctor_set(v___x_2196_, 1, v___x_2195_);
v___x_2197_ = ((size_t)1ULL);
v___x_2198_ = lean_usize_add(v_i_2186_, v___x_2197_);
v___x_2199_ = lean_array_uset(v_bs_x27_2191_, v_i_2186_, v___x_2196_);
v___x_2200_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0___redArg(v_sz_2185_, v___x_2198_, v___x_2199_);
return v___x_2200_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0___boxed(lean_object* v_as_2201_, lean_object* v_sz_2202_, lean_object* v_i_2203_, lean_object* v_bs_2204_){
_start:
{
size_t v_sz_boxed_2205_; size_t v_i_boxed_2206_; lean_object* v_res_2207_; 
v_sz_boxed_2205_ = lean_unbox_usize(v_sz_2202_);
lean_dec(v_sz_2202_);
v_i_boxed_2206_ = lean_unbox_usize(v_i_2203_);
lean_dec(v_i_2203_);
v_res_2207_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0(v_as_2201_, v_sz_boxed_2205_, v_i_boxed_2206_, v_bs_2204_);
lean_dec_ref(v_as_2201_);
return v_res_2207_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_monthPairs(lean_object* v_arr_2208_){
_start:
{
size_t v_sz_2209_; size_t v___x_2210_; lean_object* v___x_2211_; 
v_sz_2209_ = lean_array_size(v_arr_2208_);
v___x_2210_ = ((size_t)0ULL);
lean_inc_ref(v_arr_2208_);
v___x_2211_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0(v_arr_2208_, v_sz_2209_, v___x_2210_, v_arr_2208_);
lean_dec_ref(v_arr_2208_);
return v___x_2211_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0(lean_object* v_as_2212_, size_t v_sz_2213_, size_t v_i_2214_, lean_object* v_bs_2215_){
_start:
{
lean_object* v___x_2216_; 
v___x_2216_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0___redArg(v_sz_2213_, v_i_2214_, v_bs_2215_);
return v___x_2216_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0___boxed(lean_object* v_as_2217_, lean_object* v_sz_2218_, lean_object* v_i_2219_, lean_object* v_bs_2220_){
_start:
{
size_t v_sz_boxed_2221_; size_t v_i_boxed_2222_; lean_object* v_res_2223_; 
v_sz_boxed_2221_ = lean_unbox_usize(v_sz_2218_);
lean_dec(v_sz_2218_);
v_i_boxed_2222_ = lean_unbox_usize(v_i_2219_);
lean_dec(v_i_2219_);
v_res_2223_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0_spec__0(v_as_2217_, v_sz_boxed_2221_, v_i_boxed_2222_, v_bs_2220_);
lean_dec_ref(v_as_2217_);
return v_res_2223_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_weekdayOfIndex(lean_object* v_x_2224_){
_start:
{
lean_object* v___x_2225_; uint8_t v___x_2226_; 
v___x_2225_ = lean_unsigned_to_nat(0u);
v___x_2226_ = lean_nat_dec_eq(v_x_2224_, v___x_2225_);
if (v___x_2226_ == 0)
{
lean_object* v___x_2227_; uint8_t v___x_2228_; 
v___x_2227_ = lean_unsigned_to_nat(1u);
v___x_2228_ = lean_nat_dec_eq(v_x_2224_, v___x_2227_);
if (v___x_2228_ == 0)
{
lean_object* v___x_2229_; uint8_t v___x_2230_; 
v___x_2229_ = lean_unsigned_to_nat(2u);
v___x_2230_ = lean_nat_dec_eq(v_x_2224_, v___x_2229_);
if (v___x_2230_ == 0)
{
lean_object* v___x_2231_; uint8_t v___x_2232_; 
v___x_2231_ = lean_unsigned_to_nat(3u);
v___x_2232_ = lean_nat_dec_eq(v_x_2224_, v___x_2231_);
if (v___x_2232_ == 0)
{
lean_object* v___x_2233_; uint8_t v___x_2234_; 
v___x_2233_ = lean_unsigned_to_nat(4u);
v___x_2234_ = lean_nat_dec_eq(v_x_2224_, v___x_2233_);
if (v___x_2234_ == 0)
{
lean_object* v___x_2235_; uint8_t v___x_2236_; 
v___x_2235_ = lean_unsigned_to_nat(5u);
v___x_2236_ = lean_nat_dec_eq(v_x_2224_, v___x_2235_);
if (v___x_2236_ == 0)
{
uint8_t v___x_2237_; 
v___x_2237_ = 5;
return v___x_2237_;
}
else
{
uint8_t v___x_2238_; 
v___x_2238_ = 4;
return v___x_2238_;
}
}
else
{
uint8_t v___x_2239_; 
v___x_2239_ = 3;
return v___x_2239_;
}
}
else
{
uint8_t v___x_2240_; 
v___x_2240_ = 2;
return v___x_2240_;
}
}
else
{
uint8_t v___x_2241_; 
v___x_2241_ = 1;
return v___x_2241_;
}
}
else
{
uint8_t v___x_2242_; 
v___x_2242_ = 0;
return v___x_2242_;
}
}
else
{
uint8_t v___x_2243_; 
v___x_2243_ = 6;
return v___x_2243_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_weekdayOfIndex___boxed(lean_object* v_x_2244_){
_start:
{
uint8_t v_res_2245_; lean_object* v_r_2246_; 
v_res_2245_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayOfIndex(v_x_2244_);
lean_dec(v_x_2244_);
v_r_2246_ = lean_box(v_res_2245_);
return v_r_2246_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0___redArg(size_t v_sz_2247_, size_t v_i_2248_, lean_object* v_bs_2249_){
_start:
{
uint8_t v___x_2250_; 
v___x_2250_ = lean_usize_dec_lt(v_i_2248_, v_sz_2247_);
if (v___x_2250_ == 0)
{
return v_bs_2249_;
}
else
{
lean_object* v_v_2251_; lean_object* v___x_2252_; lean_object* v_bs_x27_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; uint8_t v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; size_t v___x_2261_; size_t v___x_2262_; lean_object* v___x_2263_; 
v_v_2251_ = lean_array_uget(v_bs_2249_, v_i_2248_);
v___x_2252_ = lean_unsigned_to_nat(0u);
v_bs_x27_2253_ = lean_array_uset(v_bs_2249_, v_i_2248_, v___x_2252_);
v___x_2254_ = lean_usize_to_nat(v_i_2248_);
v___x_2255_ = lean_nat_to_int(v___x_2254_);
v___x_2256_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_2257_ = lean_int_add(v___x_2255_, v___x_2256_);
lean_dec(v___x_2255_);
v___x_2258_ = l_Std_Time_Weekday_ofOrdinal(v___x_2257_);
lean_dec(v___x_2257_);
v___x_2259_ = lean_box(v___x_2258_);
v___x_2260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2260_, 0, v_v_2251_);
lean_ctor_set(v___x_2260_, 1, v___x_2259_);
v___x_2261_ = ((size_t)1ULL);
v___x_2262_ = lean_usize_add(v_i_2248_, v___x_2261_);
v___x_2263_ = lean_array_uset(v_bs_x27_2253_, v_i_2248_, v___x_2260_);
v_i_2248_ = v___x_2262_;
v_bs_2249_ = v___x_2263_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0___redArg___boxed(lean_object* v_sz_2265_, lean_object* v_i_2266_, lean_object* v_bs_2267_){
_start:
{
size_t v_sz_boxed_2268_; size_t v_i_boxed_2269_; lean_object* v_res_2270_; 
v_sz_boxed_2268_ = lean_unbox_usize(v_sz_2265_);
lean_dec(v_sz_2265_);
v_i_boxed_2269_ = lean_unbox_usize(v_i_2266_);
lean_dec(v_i_2266_);
v_res_2270_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0___redArg(v_sz_boxed_2268_, v_i_boxed_2269_, v_bs_2267_);
return v_res_2270_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0(lean_object* v_as_2271_, size_t v_sz_2272_, size_t v_i_2273_, lean_object* v_bs_2274_){
_start:
{
uint8_t v___x_2275_; 
v___x_2275_ = lean_usize_dec_lt(v_i_2273_, v_sz_2272_);
if (v___x_2275_ == 0)
{
return v_bs_2274_;
}
else
{
lean_object* v_v_2276_; lean_object* v___x_2277_; lean_object* v_bs_x27_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; uint8_t v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; size_t v___x_2286_; size_t v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; 
v_v_2276_ = lean_array_uget(v_bs_2274_, v_i_2273_);
v___x_2277_ = lean_unsigned_to_nat(0u);
v_bs_x27_2278_ = lean_array_uset(v_bs_2274_, v_i_2273_, v___x_2277_);
v___x_2279_ = lean_usize_to_nat(v_i_2273_);
v___x_2280_ = lean_nat_to_int(v___x_2279_);
v___x_2281_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_2282_ = lean_int_add(v___x_2280_, v___x_2281_);
lean_dec(v___x_2280_);
v___x_2283_ = l_Std_Time_Weekday_ofOrdinal(v___x_2282_);
lean_dec(v___x_2282_);
v___x_2284_ = lean_box(v___x_2283_);
v___x_2285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2285_, 0, v_v_2276_);
lean_ctor_set(v___x_2285_, 1, v___x_2284_);
v___x_2286_ = ((size_t)1ULL);
v___x_2287_ = lean_usize_add(v_i_2273_, v___x_2286_);
v___x_2288_ = lean_array_uset(v_bs_x27_2278_, v_i_2273_, v___x_2285_);
v___x_2289_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0___redArg(v_sz_2272_, v___x_2287_, v___x_2288_);
return v___x_2289_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0___boxed(lean_object* v_as_2290_, lean_object* v_sz_2291_, lean_object* v_i_2292_, lean_object* v_bs_2293_){
_start:
{
size_t v_sz_boxed_2294_; size_t v_i_boxed_2295_; lean_object* v_res_2296_; 
v_sz_boxed_2294_ = lean_unbox_usize(v_sz_2291_);
lean_dec(v_sz_2291_);
v_i_boxed_2295_ = lean_unbox_usize(v_i_2292_);
lean_dec(v_i_2292_);
v_res_2296_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0(v_as_2290_, v_sz_boxed_2294_, v_i_boxed_2295_, v_bs_2293_);
lean_dec_ref(v_as_2290_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs(lean_object* v_arr_2297_){
_start:
{
size_t v_sz_2298_; size_t v___x_2299_; lean_object* v___x_2300_; 
v_sz_2298_ = lean_array_size(v_arr_2297_);
v___x_2299_ = ((size_t)0ULL);
lean_inc_ref(v_arr_2297_);
v___x_2300_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0(v_arr_2297_, v_sz_2298_, v___x_2299_, v_arr_2297_);
lean_dec_ref(v_arr_2297_);
return v___x_2300_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0(lean_object* v_as_2301_, size_t v_sz_2302_, size_t v_i_2303_, lean_object* v_bs_2304_){
_start:
{
lean_object* v___x_2305_; 
v___x_2305_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0___redArg(v_sz_2302_, v_i_2303_, v_bs_2304_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0___boxed(lean_object* v_as_2306_, lean_object* v_sz_2307_, lean_object* v_i_2308_, lean_object* v_bs_2309_){
_start:
{
size_t v_sz_boxed_2310_; size_t v_i_boxed_2311_; lean_object* v_res_2312_; 
v_sz_boxed_2310_ = lean_unbox_usize(v_sz_2307_);
lean_dec(v_sz_2307_);
v_i_boxed_2311_ = lean_unbox_usize(v_i_2308_);
lean_dec(v_i_2308_);
v_res_2312_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs_spec__0_spec__0(v_as_2306_, v_sz_boxed_2310_, v_i_boxed_2311_, v_bs_2309_);
lean_dec_ref(v_as_2306_);
return v_res_2312_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_eraOfIndex(lean_object* v_x_2313_){
_start:
{
lean_object* v___x_2314_; uint8_t v___x_2315_; 
v___x_2314_ = lean_unsigned_to_nat(0u);
v___x_2315_ = lean_nat_dec_eq(v_x_2313_, v___x_2314_);
if (v___x_2315_ == 0)
{
uint8_t v___x_2316_; 
v___x_2316_ = 1;
return v___x_2316_;
}
else
{
uint8_t v___x_2317_; 
v___x_2317_ = 0;
return v___x_2317_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraOfIndex___boxed(lean_object* v_x_2318_){
_start:
{
uint8_t v_res_2319_; lean_object* v_r_2320_; 
v_res_2319_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraOfIndex(v_x_2318_);
lean_dec(v_x_2318_);
v_r_2320_ = lean_box(v_res_2319_);
return v_r_2320_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0___redArg(size_t v_sz_2321_, size_t v_i_2322_, lean_object* v_bs_2323_){
_start:
{
uint8_t v___x_2324_; 
v___x_2324_ = lean_usize_dec_lt(v_i_2322_, v_sz_2321_);
if (v___x_2324_ == 0)
{
return v_bs_2323_;
}
else
{
lean_object* v_v_2325_; lean_object* v___x_2326_; lean_object* v_bs_x27_2327_; lean_object* v___x_2328_; uint8_t v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; size_t v___x_2332_; size_t v___x_2333_; lean_object* v___x_2334_; 
v_v_2325_ = lean_array_uget(v_bs_2323_, v_i_2322_);
v___x_2326_ = lean_unsigned_to_nat(0u);
v_bs_x27_2327_ = lean_array_uset(v_bs_2323_, v_i_2322_, v___x_2326_);
v___x_2328_ = lean_usize_to_nat(v_i_2322_);
v___x_2329_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraOfIndex(v___x_2328_);
lean_dec(v___x_2328_);
v___x_2330_ = lean_box(v___x_2329_);
v___x_2331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2331_, 0, v_v_2325_);
lean_ctor_set(v___x_2331_, 1, v___x_2330_);
v___x_2332_ = ((size_t)1ULL);
v___x_2333_ = lean_usize_add(v_i_2322_, v___x_2332_);
v___x_2334_ = lean_array_uset(v_bs_x27_2327_, v_i_2322_, v___x_2331_);
v_i_2322_ = v___x_2333_;
v_bs_2323_ = v___x_2334_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0___redArg___boxed(lean_object* v_sz_2336_, lean_object* v_i_2337_, lean_object* v_bs_2338_){
_start:
{
size_t v_sz_boxed_2339_; size_t v_i_boxed_2340_; lean_object* v_res_2341_; 
v_sz_boxed_2339_ = lean_unbox_usize(v_sz_2336_);
lean_dec(v_sz_2336_);
v_i_boxed_2340_ = lean_unbox_usize(v_i_2337_);
lean_dec(v_i_2337_);
v_res_2341_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0___redArg(v_sz_boxed_2339_, v_i_boxed_2340_, v_bs_2338_);
return v_res_2341_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_eraPairs(lean_object* v_arr_2342_){
_start:
{
size_t v_sz_2343_; size_t v___x_2344_; lean_object* v___x_2345_; 
v_sz_2343_ = lean_array_size(v_arr_2342_);
v___x_2344_ = ((size_t)0ULL);
v___x_2345_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0___redArg(v_sz_2343_, v___x_2344_, v_arr_2342_);
return v___x_2345_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0(lean_object* v_as_2346_, size_t v_sz_2347_, size_t v_i_2348_, lean_object* v_bs_2349_){
_start:
{
lean_object* v___x_2350_; 
v___x_2350_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0___redArg(v_sz_2347_, v_i_2348_, v_bs_2349_);
return v___x_2350_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0___boxed(lean_object* v_as_2351_, lean_object* v_sz_2352_, lean_object* v_i_2353_, lean_object* v_bs_2354_){
_start:
{
size_t v_sz_boxed_2355_; size_t v_i_boxed_2356_; lean_object* v_res_2357_; 
v_sz_boxed_2355_ = lean_unbox_usize(v_sz_2352_);
lean_dec(v_sz_2352_);
v_i_boxed_2356_ = lean_unbox_usize(v_i_2353_);
lean_dec(v_i_2353_);
v_res_2357_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_eraPairs_spec__0(v_as_2351_, v_sz_boxed_2355_, v_i_boxed_2356_, v_bs_2354_);
lean_dec_ref(v_as_2351_);
return v_res_2357_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_quarterPairs(lean_object* v_arr_2358_){
_start:
{
size_t v_sz_2359_; size_t v___x_2360_; lean_object* v___x_2361_; 
v_sz_2359_ = lean_array_size(v_arr_2358_);
v___x_2360_ = ((size_t)0ULL);
lean_inc_ref(v_arr_2358_);
v___x_2361_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Std_Time_Format_Basic_0__Std_Time_monthPairs_spec__0(v_arr_2358_, v_sz_2359_, v___x_2360_, v_arr_2358_);
lean_dec_ref(v_arr_2358_);
return v___x_2361_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseMonthLong(lean_object* v_symbols_2362_, lean_object* v_a_2363_){
_start:
{
lean_object* v_monthLong_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
v_monthLong_2364_ = lean_ctor_get(v_symbols_2362_, 0);
lean_inc_ref(v_monthLong_2364_);
lean_dec_ref(v_symbols_2362_);
v___x_2365_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthPairs(v_monthLong_2364_);
v___x_2366_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2365_, v_a_2363_);
lean_dec_ref(v___x_2365_);
return v___x_2366_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_parseMonthShort(lean_object* v_symbols_2367_, lean_object* v_a_2368_){
_start:
{
lean_object* v_monthShort_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v_monthShort_2369_ = lean_ctor_get(v_symbols_2367_, 1);
lean_inc_ref(v_monthShort_2369_);
lean_dec_ref(v_symbols_2367_);
v___x_2370_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthPairs(v_monthShort_2369_);
v___x_2371_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2370_, v_a_2368_);
lean_dec_ref(v___x_2370_);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseMonthNarrow(lean_object* v_symbols_2372_, lean_object* v_a_2373_){
_start:
{
lean_object* v_monthNarrow_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; 
v_monthNarrow_2374_ = lean_ctor_get(v_symbols_2372_, 2);
lean_inc_ref(v_monthNarrow_2374_);
lean_dec_ref(v_symbols_2372_);
v___x_2375_ = l___private_Std_Time_Format_Basic_0__Std_Time_monthPairs(v_monthNarrow_2374_);
v___x_2376_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2375_, v_a_2373_);
lean_dec_ref(v___x_2375_);
return v___x_2376_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayLong(lean_object* v_symbols_2377_, lean_object* v_a_2378_){
_start:
{
lean_object* v_weekdayLong_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
v_weekdayLong_2379_ = lean_ctor_get(v_symbols_2377_, 3);
lean_inc_ref(v_weekdayLong_2379_);
lean_dec_ref(v_symbols_2377_);
v___x_2380_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs(v_weekdayLong_2379_);
v___x_2381_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2380_, v_a_2378_);
lean_dec_ref(v___x_2380_);
return v___x_2381_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayShort(lean_object* v_symbols_2382_, lean_object* v_a_2383_){
_start:
{
lean_object* v_weekdayShort_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; 
v_weekdayShort_2384_ = lean_ctor_get(v_symbols_2382_, 4);
lean_inc_ref(v_weekdayShort_2384_);
lean_dec_ref(v_symbols_2382_);
v___x_2385_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs(v_weekdayShort_2384_);
v___x_2386_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2385_, v_a_2383_);
lean_dec_ref(v___x_2385_);
return v___x_2386_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayNarrow(lean_object* v_symbols_2387_, lean_object* v_a_2388_){
_start:
{
lean_object* v_weekdayNarrow_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; 
v_weekdayNarrow_2389_ = lean_ctor_get(v_symbols_2387_, 5);
lean_inc_ref(v_weekdayNarrow_2389_);
lean_dec_ref(v_symbols_2387_);
v___x_2390_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs(v_weekdayNarrow_2389_);
v___x_2391_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2390_, v_a_2388_);
lean_dec_ref(v___x_2390_);
return v___x_2391_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayTwoLetter(lean_object* v_symbols_2392_, lean_object* v_a_2393_){
_start:
{
lean_object* v_weekdayTwoLetter_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; 
v_weekdayTwoLetter_2394_ = lean_ctor_get(v_symbols_2392_, 6);
lean_inc_ref(v_weekdayTwoLetter_2394_);
lean_dec_ref(v_symbols_2392_);
v___x_2395_ = l___private_Std_Time_Format_Basic_0__Std_Time_weekdayPairs(v_weekdayTwoLetter_2394_);
v___x_2396_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2395_, v_a_2393_);
lean_dec_ref(v___x_2395_);
return v___x_2396_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseEraShort(lean_object* v_symbols_2397_, lean_object* v_a_2398_){
_start:
{
lean_object* v_eraShort_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; 
v_eraShort_2399_ = lean_ctor_get(v_symbols_2397_, 7);
lean_inc_ref(v_eraShort_2399_);
lean_dec_ref(v_symbols_2397_);
v___x_2400_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraPairs(v_eraShort_2399_);
v___x_2401_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2400_, v_a_2398_);
lean_dec_ref(v___x_2400_);
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseEraLong(lean_object* v_symbols_2402_, lean_object* v_a_2403_){
_start:
{
lean_object* v_eraLong_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; 
v_eraLong_2404_ = lean_ctor_get(v_symbols_2402_, 8);
lean_inc_ref(v_eraLong_2404_);
lean_dec_ref(v_symbols_2402_);
v___x_2405_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraPairs(v_eraLong_2404_);
v___x_2406_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2405_, v_a_2403_);
lean_dec_ref(v___x_2405_);
return v___x_2406_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseEraNarrow(lean_object* v_symbols_2407_, lean_object* v_a_2408_){
_start:
{
lean_object* v_eraNarrow_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; 
v_eraNarrow_2409_ = lean_ctor_get(v_symbols_2407_, 9);
lean_inc_ref(v_eraNarrow_2409_);
lean_dec_ref(v_symbols_2407_);
v___x_2410_ = l___private_Std_Time_Format_Basic_0__Std_Time_eraPairs(v_eraNarrow_2409_);
v___x_2411_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2410_, v_a_2408_);
lean_dec_ref(v___x_2410_);
return v___x_2411_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNumber___closed__0(void){
_start:
{
lean_object* v___x_2412_; lean_object* v___x_2413_; 
v___x_2412_ = lean_unsigned_to_nat(3u);
v___x_2413_ = lean_nat_to_int(v___x_2412_);
return v___x_2413_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNumber(lean_object* v_a_2414_){
_start:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; 
v___x_2415_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__0));
lean_inc_ref(v_a_2414_);
v___x_2416_ = l_Std_Internal_Parsec_String_pstring(v___x_2415_, v_a_2414_);
if (lean_obj_tag(v___x_2416_) == 0)
{
lean_object* v_pos_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2425_; 
lean_dec_ref(v_a_2414_);
v_pos_2417_ = lean_ctor_get(v___x_2416_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2425_ == 0)
{
lean_object* v_unused_2426_; 
v_unused_2426_ = lean_ctor_get(v___x_2416_, 1);
lean_dec(v_unused_2426_);
v___x_2419_ = v___x_2416_;
v_isShared_2420_ = v_isSharedCheck_2425_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_pos_2417_);
lean_dec(v___x_2416_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2425_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2421_; lean_object* v___x_2423_; 
v___x_2421_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
if (v_isShared_2420_ == 0)
{
lean_ctor_set(v___x_2419_, 1, v___x_2421_);
v___x_2423_ = v___x_2419_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_pos_2417_);
lean_ctor_set(v_reuseFailAlloc_2424_, 1, v___x_2421_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
else
{
lean_object* v_pos_2427_; lean_object* v_err_2428_; lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2505_; 
v_pos_2427_ = lean_ctor_get(v___x_2416_, 0);
v_err_2428_ = lean_ctor_get(v___x_2416_, 1);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2430_ = v___x_2416_;
v_isShared_2431_ = v_isSharedCheck_2505_;
goto v_resetjp_2429_;
}
else
{
lean_inc(v_err_2428_);
lean_inc(v_pos_2427_);
lean_dec(v___x_2416_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2505_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
lean_object* v_snd_2432_; lean_object* v_snd_2433_; uint8_t v_decide_2434_; 
v_snd_2432_ = lean_ctor_get(v_a_2414_, 1);
lean_inc(v_snd_2432_);
lean_dec_ref(v_a_2414_);
v_snd_2433_ = lean_ctor_get(v_pos_2427_, 1);
v_decide_2434_ = lean_nat_dec_eq(v_snd_2432_, v_snd_2433_);
lean_dec(v_snd_2432_);
if (v_decide_2434_ == 0)
{
lean_object* v___x_2436_; 
if (v_isShared_2431_ == 0)
{
v___x_2436_ = v___x_2430_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v_pos_2427_);
lean_ctor_set(v_reuseFailAlloc_2437_, 1, v_err_2428_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
return v___x_2436_;
}
}
else
{
lean_object* v___x_2438_; lean_object* v___x_2439_; 
lean_inc(v_snd_2433_);
lean_del_object(v___x_2430_);
lean_dec(v_err_2428_);
v___x_2438_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__1));
v___x_2439_ = l_Std_Internal_Parsec_String_pstring(v___x_2438_, v_pos_2427_);
if (lean_obj_tag(v___x_2439_) == 0)
{
lean_object* v_pos_2440_; lean_object* v___x_2442_; uint8_t v_isShared_2443_; uint8_t v_isSharedCheck_2448_; 
lean_dec(v_snd_2433_);
v_pos_2440_ = lean_ctor_get(v___x_2439_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2439_);
if (v_isSharedCheck_2448_ == 0)
{
lean_object* v_unused_2449_; 
v_unused_2449_ = lean_ctor_get(v___x_2439_, 1);
lean_dec(v_unused_2449_);
v___x_2442_ = v___x_2439_;
v_isShared_2443_ = v_isSharedCheck_2448_;
goto v_resetjp_2441_;
}
else
{
lean_inc(v_pos_2440_);
lean_dec(v___x_2439_);
v___x_2442_ = lean_box(0);
v_isShared_2443_ = v_isSharedCheck_2448_;
goto v_resetjp_2441_;
}
v_resetjp_2441_:
{
lean_object* v___x_2444_; lean_object* v___x_2446_; 
v___x_2444_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__3, &l_Std_Time_instReprFormatPart_repr___closed__3_once, _init_l_Std_Time_instReprFormatPart_repr___closed__3);
if (v_isShared_2443_ == 0)
{
lean_ctor_set(v___x_2442_, 1, v___x_2444_);
v___x_2446_ = v___x_2442_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v_pos_2440_);
lean_ctor_set(v_reuseFailAlloc_2447_, 1, v___x_2444_);
v___x_2446_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
return v___x_2446_;
}
}
}
else
{
lean_object* v_pos_2450_; lean_object* v_err_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2504_; 
v_pos_2450_ = lean_ctor_get(v___x_2439_, 0);
v_err_2451_ = lean_ctor_get(v___x_2439_, 1);
v_isSharedCheck_2504_ = !lean_is_exclusive(v___x_2439_);
if (v_isSharedCheck_2504_ == 0)
{
v___x_2453_ = v___x_2439_;
v_isShared_2454_ = v_isSharedCheck_2504_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_err_2451_);
lean_inc(v_pos_2450_);
lean_dec(v___x_2439_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2504_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
lean_object* v_snd_2455_; uint8_t v_decide_2456_; 
v_snd_2455_ = lean_ctor_get(v_pos_2450_, 1);
v_decide_2456_ = lean_nat_dec_eq(v_snd_2433_, v_snd_2455_);
lean_dec(v_snd_2433_);
if (v_decide_2456_ == 0)
{
lean_object* v___x_2458_; 
if (v_isShared_2454_ == 0)
{
v___x_2458_ = v___x_2453_;
goto v_reusejp_2457_;
}
else
{
lean_object* v_reuseFailAlloc_2459_; 
v_reuseFailAlloc_2459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2459_, 0, v_pos_2450_);
lean_ctor_set(v_reuseFailAlloc_2459_, 1, v_err_2451_);
v___x_2458_ = v_reuseFailAlloc_2459_;
goto v_reusejp_2457_;
}
v_reusejp_2457_:
{
return v___x_2458_;
}
}
else
{
lean_object* v___x_2460_; lean_object* v___x_2461_; 
lean_inc(v_snd_2455_);
lean_del_object(v___x_2453_);
lean_dec(v_err_2451_);
v___x_2460_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__2));
v___x_2461_ = l_Std_Internal_Parsec_String_pstring(v___x_2460_, v_pos_2450_);
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_object* v_pos_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2470_; 
lean_dec(v_snd_2455_);
v_pos_2462_ = lean_ctor_get(v___x_2461_, 0);
v_isSharedCheck_2470_ = !lean_is_exclusive(v___x_2461_);
if (v_isSharedCheck_2470_ == 0)
{
lean_object* v_unused_2471_; 
v_unused_2471_ = lean_ctor_get(v___x_2461_, 1);
lean_dec(v_unused_2471_);
v___x_2464_ = v___x_2461_;
v_isShared_2465_ = v_isSharedCheck_2470_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_pos_2462_);
lean_dec(v___x_2461_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2470_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2466_; lean_object* v___x_2468_; 
v___x_2466_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNumber___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNumber___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNumber___closed__0);
if (v_isShared_2465_ == 0)
{
lean_ctor_set(v___x_2464_, 1, v___x_2466_);
v___x_2468_ = v___x_2464_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2469_; 
v_reuseFailAlloc_2469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2469_, 0, v_pos_2462_);
lean_ctor_set(v_reuseFailAlloc_2469_, 1, v___x_2466_);
v___x_2468_ = v_reuseFailAlloc_2469_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
return v___x_2468_;
}
}
}
else
{
lean_object* v_pos_2472_; lean_object* v_err_2473_; lean_object* v___x_2475_; uint8_t v_isShared_2476_; uint8_t v_isSharedCheck_2503_; 
v_pos_2472_ = lean_ctor_get(v___x_2461_, 0);
v_err_2473_ = lean_ctor_get(v___x_2461_, 1);
v_isSharedCheck_2503_ = !lean_is_exclusive(v___x_2461_);
if (v_isSharedCheck_2503_ == 0)
{
v___x_2475_ = v___x_2461_;
v_isShared_2476_ = v_isSharedCheck_2503_;
goto v_resetjp_2474_;
}
else
{
lean_inc(v_err_2473_);
lean_inc(v_pos_2472_);
lean_dec(v___x_2461_);
v___x_2475_ = lean_box(0);
v_isShared_2476_ = v_isSharedCheck_2503_;
goto v_resetjp_2474_;
}
v_resetjp_2474_:
{
lean_object* v_snd_2477_; uint8_t v_decide_2478_; 
v_snd_2477_ = lean_ctor_get(v_pos_2472_, 1);
v_decide_2478_ = lean_nat_dec_eq(v_snd_2455_, v_snd_2477_);
lean_dec(v_snd_2455_);
if (v_decide_2478_ == 0)
{
lean_object* v___x_2480_; 
if (v_isShared_2476_ == 0)
{
v___x_2480_ = v___x_2475_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_pos_2472_);
lean_ctor_set(v_reuseFailAlloc_2481_, 1, v_err_2473_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
else
{
lean_object* v___x_2482_; lean_object* v___x_2483_; 
lean_del_object(v___x_2475_);
lean_dec(v_err_2473_);
v___x_2482_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatQuarterNumber___closed__3));
v___x_2483_ = l_Std_Internal_Parsec_String_pstring(v___x_2482_, v_pos_2472_);
if (lean_obj_tag(v___x_2483_) == 0)
{
lean_object* v_pos_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2492_; 
v_pos_2484_ = lean_ctor_get(v___x_2483_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2483_);
if (v_isSharedCheck_2492_ == 0)
{
lean_object* v_unused_2493_; 
v_unused_2493_ = lean_ctor_get(v___x_2483_, 1);
lean_dec(v_unused_2493_);
v___x_2486_ = v___x_2483_;
v_isShared_2487_ = v_isSharedCheck_2492_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_pos_2484_);
lean_dec(v___x_2483_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2492_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2488_; lean_object* v___x_2490_; 
v___x_2488_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0);
if (v_isShared_2487_ == 0)
{
lean_ctor_set(v___x_2486_, 1, v___x_2488_);
v___x_2490_ = v___x_2486_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v_pos_2484_);
lean_ctor_set(v_reuseFailAlloc_2491_, 1, v___x_2488_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
return v___x_2490_;
}
}
}
else
{
lean_object* v_pos_2494_; lean_object* v_err_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2502_; 
v_pos_2494_ = lean_ctor_get(v___x_2483_, 0);
v_err_2495_ = lean_ctor_get(v___x_2483_, 1);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2483_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2497_ = v___x_2483_;
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_err_2495_);
lean_inc(v_pos_2494_);
lean_dec(v___x_2483_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2500_; 
if (v_isShared_2498_ == 0)
{
v___x_2500_ = v___x_2497_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_pos_2494_);
lean_ctor_set(v_reuseFailAlloc_2501_, 1, v_err_2495_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
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
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterLong(lean_object* v_symbols_2506_, lean_object* v_a_2507_){
_start:
{
lean_object* v_quarterLong_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
v_quarterLong_2508_ = lean_ctor_get(v_symbols_2506_, 11);
lean_inc_ref(v_quarterLong_2508_);
lean_dec_ref(v_symbols_2506_);
v___x_2509_ = l___private_Std_Time_Format_Basic_0__Std_Time_quarterPairs(v_quarterLong_2508_);
v___x_2510_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2509_, v_a_2507_);
lean_dec_ref(v___x_2509_);
return v___x_2510_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterShort(lean_object* v_symbols_2511_, lean_object* v_a_2512_){
_start:
{
lean_object* v_quarterShort_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; 
v_quarterShort_2513_ = lean_ctor_get(v_symbols_2511_, 10);
lean_inc_ref(v_quarterShort_2513_);
lean_dec_ref(v_symbols_2511_);
v___x_2514_ = l___private_Std_Time_Format_Basic_0__Std_Time_quarterPairs(v_quarterShort_2513_);
v___x_2515_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2514_, v_a_2512_);
lean_dec_ref(v___x_2514_);
return v___x_2515_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNarrow(lean_object* v_symbols_2516_, lean_object* v_a_2517_){
_start:
{
lean_object* v_quarterNarrow_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; 
v_quarterNarrow_2518_ = lean_ctor_get(v_symbols_2516_, 12);
lean_inc_ref(v_quarterNarrow_2518_);
lean_dec_ref(v_symbols_2516_);
v___x_2519_ = l___private_Std_Time_Format_Basic_0__Std_Time_quarterPairs(v_quarterNarrow_2518_);
v___x_2520_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v___x_2519_, v_a_2517_);
lean_dec_ref(v___x_2519_);
return v___x_2520_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseMarkerShort(lean_object* v_symbols_2521_, lean_object* v_a_2522_){
_start:
{
lean_object* v_amShort_2523_; lean_object* v_pmShort_2524_; lean_object* v___x_2525_; 
v_amShort_2523_ = lean_ctor_get(v_symbols_2521_, 13);
lean_inc_ref(v_amShort_2523_);
v_pmShort_2524_ = lean_ctor_get(v_symbols_2521_, 14);
lean_inc_ref(v_pmShort_2524_);
lean_dec_ref(v_symbols_2521_);
lean_inc_ref(v_a_2522_);
v___x_2525_ = l_Std_Internal_Parsec_String_pstring(v_amShort_2523_, v_a_2522_);
if (lean_obj_tag(v___x_2525_) == 0)
{
lean_object* v_pos_2526_; lean_object* v___x_2528_; uint8_t v_isShared_2529_; uint8_t v_isSharedCheck_2535_; 
lean_dec_ref(v_pmShort_2524_);
lean_dec_ref(v_a_2522_);
v_pos_2526_ = lean_ctor_get(v___x_2525_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2525_);
if (v_isSharedCheck_2535_ == 0)
{
lean_object* v_unused_2536_; 
v_unused_2536_ = lean_ctor_get(v___x_2525_, 1);
lean_dec(v_unused_2536_);
v___x_2528_ = v___x_2525_;
v_isShared_2529_ = v_isSharedCheck_2535_;
goto v_resetjp_2527_;
}
else
{
lean_inc(v_pos_2526_);
lean_dec(v___x_2525_);
v___x_2528_ = lean_box(0);
v_isShared_2529_ = v_isSharedCheck_2535_;
goto v_resetjp_2527_;
}
v_resetjp_2527_:
{
uint8_t v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2533_; 
v___x_2530_ = 0;
v___x_2531_ = lean_box(v___x_2530_);
if (v_isShared_2529_ == 0)
{
lean_ctor_set(v___x_2528_, 1, v___x_2531_);
v___x_2533_ = v___x_2528_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_pos_2526_);
lean_ctor_set(v_reuseFailAlloc_2534_, 1, v___x_2531_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
return v___x_2533_;
}
}
}
else
{
lean_object* v_pos_2537_; lean_object* v_err_2538_; lean_object* v___x_2540_; uint8_t v_isShared_2541_; uint8_t v_isSharedCheck_2569_; 
v_pos_2537_ = lean_ctor_get(v___x_2525_, 0);
v_err_2538_ = lean_ctor_get(v___x_2525_, 1);
v_isSharedCheck_2569_ = !lean_is_exclusive(v___x_2525_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2540_ = v___x_2525_;
v_isShared_2541_ = v_isSharedCheck_2569_;
goto v_resetjp_2539_;
}
else
{
lean_inc(v_err_2538_);
lean_inc(v_pos_2537_);
lean_dec(v___x_2525_);
v___x_2540_ = lean_box(0);
v_isShared_2541_ = v_isSharedCheck_2569_;
goto v_resetjp_2539_;
}
v_resetjp_2539_:
{
lean_object* v_snd_2542_; lean_object* v_snd_2543_; uint8_t v_decide_2544_; 
v_snd_2542_ = lean_ctor_get(v_a_2522_, 1);
lean_inc(v_snd_2542_);
lean_dec_ref(v_a_2522_);
v_snd_2543_ = lean_ctor_get(v_pos_2537_, 1);
v_decide_2544_ = lean_nat_dec_eq(v_snd_2542_, v_snd_2543_);
lean_dec(v_snd_2542_);
if (v_decide_2544_ == 0)
{
lean_object* v___x_2546_; 
lean_dec_ref(v_pmShort_2524_);
if (v_isShared_2541_ == 0)
{
v___x_2546_ = v___x_2540_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v_pos_2537_);
lean_ctor_set(v_reuseFailAlloc_2547_, 1, v_err_2538_);
v___x_2546_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
return v___x_2546_;
}
}
else
{
lean_object* v___x_2548_; 
lean_del_object(v___x_2540_);
lean_dec(v_err_2538_);
v___x_2548_ = l_Std_Internal_Parsec_String_pstring(v_pmShort_2524_, v_pos_2537_);
if (lean_obj_tag(v___x_2548_) == 0)
{
lean_object* v_pos_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2558_; 
v_pos_2549_ = lean_ctor_get(v___x_2548_, 0);
v_isSharedCheck_2558_ = !lean_is_exclusive(v___x_2548_);
if (v_isSharedCheck_2558_ == 0)
{
lean_object* v_unused_2559_; 
v_unused_2559_ = lean_ctor_get(v___x_2548_, 1);
lean_dec(v_unused_2559_);
v___x_2551_ = v___x_2548_;
v_isShared_2552_ = v_isSharedCheck_2558_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_pos_2549_);
lean_dec(v___x_2548_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2558_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
uint8_t v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2556_; 
v___x_2553_ = 1;
v___x_2554_ = lean_box(v___x_2553_);
if (v_isShared_2552_ == 0)
{
lean_ctor_set(v___x_2551_, 1, v___x_2554_);
v___x_2556_ = v___x_2551_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v_pos_2549_);
lean_ctor_set(v_reuseFailAlloc_2557_, 1, v___x_2554_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
return v___x_2556_;
}
}
}
else
{
lean_object* v_pos_2560_; lean_object* v_err_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2568_; 
v_pos_2560_ = lean_ctor_get(v___x_2548_, 0);
v_err_2561_ = lean_ctor_get(v___x_2548_, 1);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2548_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2563_ = v___x_2548_;
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_err_2561_);
lean_inc(v_pos_2560_);
lean_dec(v___x_2548_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v___x_2566_; 
if (v_isShared_2564_ == 0)
{
v___x_2566_ = v___x_2563_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v_pos_2560_);
lean_ctor_set(v_reuseFailAlloc_2567_, 1, v_err_2561_);
v___x_2566_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
return v___x_2566_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseMarkerLong(lean_object* v_symbols_2570_, lean_object* v_a_2571_){
_start:
{
lean_object* v_amLong_2572_; lean_object* v_pmLong_2573_; lean_object* v___x_2574_; 
v_amLong_2572_ = lean_ctor_get(v_symbols_2570_, 15);
lean_inc_ref(v_amLong_2572_);
v_pmLong_2573_ = lean_ctor_get(v_symbols_2570_, 16);
lean_inc_ref(v_pmLong_2573_);
lean_dec_ref(v_symbols_2570_);
lean_inc_ref(v_a_2571_);
v___x_2574_ = l_Std_Internal_Parsec_String_pstring(v_amLong_2572_, v_a_2571_);
if (lean_obj_tag(v___x_2574_) == 0)
{
lean_object* v_pos_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2584_; 
lean_dec_ref(v_pmLong_2573_);
lean_dec_ref(v_a_2571_);
v_pos_2575_ = lean_ctor_get(v___x_2574_, 0);
v_isSharedCheck_2584_ = !lean_is_exclusive(v___x_2574_);
if (v_isSharedCheck_2584_ == 0)
{
lean_object* v_unused_2585_; 
v_unused_2585_ = lean_ctor_get(v___x_2574_, 1);
lean_dec(v_unused_2585_);
v___x_2577_ = v___x_2574_;
v_isShared_2578_ = v_isSharedCheck_2584_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_pos_2575_);
lean_dec(v___x_2574_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2584_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
uint8_t v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2582_; 
v___x_2579_ = 0;
v___x_2580_ = lean_box(v___x_2579_);
if (v_isShared_2578_ == 0)
{
lean_ctor_set(v___x_2577_, 1, v___x_2580_);
v___x_2582_ = v___x_2577_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v_pos_2575_);
lean_ctor_set(v_reuseFailAlloc_2583_, 1, v___x_2580_);
v___x_2582_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
return v___x_2582_;
}
}
}
else
{
lean_object* v_pos_2586_; lean_object* v_err_2587_; lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2618_; 
v_pos_2586_ = lean_ctor_get(v___x_2574_, 0);
v_err_2587_ = lean_ctor_get(v___x_2574_, 1);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2574_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2589_ = v___x_2574_;
v_isShared_2590_ = v_isSharedCheck_2618_;
goto v_resetjp_2588_;
}
else
{
lean_inc(v_err_2587_);
lean_inc(v_pos_2586_);
lean_dec(v___x_2574_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2618_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
lean_object* v_snd_2591_; lean_object* v_snd_2592_; uint8_t v_decide_2593_; 
v_snd_2591_ = lean_ctor_get(v_a_2571_, 1);
lean_inc(v_snd_2591_);
lean_dec_ref(v_a_2571_);
v_snd_2592_ = lean_ctor_get(v_pos_2586_, 1);
v_decide_2593_ = lean_nat_dec_eq(v_snd_2591_, v_snd_2592_);
lean_dec(v_snd_2591_);
if (v_decide_2593_ == 0)
{
lean_object* v___x_2595_; 
lean_dec_ref(v_pmLong_2573_);
if (v_isShared_2590_ == 0)
{
v___x_2595_ = v___x_2589_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v_pos_2586_);
lean_ctor_set(v_reuseFailAlloc_2596_, 1, v_err_2587_);
v___x_2595_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
return v___x_2595_;
}
}
else
{
lean_object* v___x_2597_; 
lean_del_object(v___x_2589_);
lean_dec(v_err_2587_);
v___x_2597_ = l_Std_Internal_Parsec_String_pstring(v_pmLong_2573_, v_pos_2586_);
if (lean_obj_tag(v___x_2597_) == 0)
{
lean_object* v_pos_2598_; lean_object* v___x_2600_; uint8_t v_isShared_2601_; uint8_t v_isSharedCheck_2607_; 
v_pos_2598_ = lean_ctor_get(v___x_2597_, 0);
v_isSharedCheck_2607_ = !lean_is_exclusive(v___x_2597_);
if (v_isSharedCheck_2607_ == 0)
{
lean_object* v_unused_2608_; 
v_unused_2608_ = lean_ctor_get(v___x_2597_, 1);
lean_dec(v_unused_2608_);
v___x_2600_ = v___x_2597_;
v_isShared_2601_ = v_isSharedCheck_2607_;
goto v_resetjp_2599_;
}
else
{
lean_inc(v_pos_2598_);
lean_dec(v___x_2597_);
v___x_2600_ = lean_box(0);
v_isShared_2601_ = v_isSharedCheck_2607_;
goto v_resetjp_2599_;
}
v_resetjp_2599_:
{
uint8_t v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2605_; 
v___x_2602_ = 1;
v___x_2603_ = lean_box(v___x_2602_);
if (v_isShared_2601_ == 0)
{
lean_ctor_set(v___x_2600_, 1, v___x_2603_);
v___x_2605_ = v___x_2600_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v_pos_2598_);
lean_ctor_set(v_reuseFailAlloc_2606_, 1, v___x_2603_);
v___x_2605_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
return v___x_2605_;
}
}
}
else
{
lean_object* v_pos_2609_; lean_object* v_err_2610_; lean_object* v___x_2612_; uint8_t v_isShared_2613_; uint8_t v_isSharedCheck_2617_; 
v_pos_2609_ = lean_ctor_get(v___x_2597_, 0);
v_err_2610_ = lean_ctor_get(v___x_2597_, 1);
v_isSharedCheck_2617_ = !lean_is_exclusive(v___x_2597_);
if (v_isSharedCheck_2617_ == 0)
{
v___x_2612_ = v___x_2597_;
v_isShared_2613_ = v_isSharedCheck_2617_;
goto v_resetjp_2611_;
}
else
{
lean_inc(v_err_2610_);
lean_inc(v_pos_2609_);
lean_dec(v___x_2597_);
v___x_2612_ = lean_box(0);
v_isShared_2613_ = v_isSharedCheck_2617_;
goto v_resetjp_2611_;
}
v_resetjp_2611_:
{
lean_object* v___x_2615_; 
if (v_isShared_2613_ == 0)
{
v___x_2615_ = v___x_2612_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2616_; 
v_reuseFailAlloc_2616_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2616_, 0, v_pos_2609_);
lean_ctor_set(v_reuseFailAlloc_2616_, 1, v_err_2610_);
v___x_2615_ = v_reuseFailAlloc_2616_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
return v___x_2615_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseMarkerNarrow(lean_object* v_symbols_2619_, lean_object* v_a_2620_){
_start:
{
lean_object* v_amNarrow_2621_; lean_object* v_pmNarrow_2622_; lean_object* v___x_2623_; 
v_amNarrow_2621_ = lean_ctor_get(v_symbols_2619_, 17);
lean_inc_ref(v_amNarrow_2621_);
v_pmNarrow_2622_ = lean_ctor_get(v_symbols_2619_, 18);
lean_inc_ref(v_pmNarrow_2622_);
lean_dec_ref(v_symbols_2619_);
lean_inc_ref(v_a_2620_);
v___x_2623_ = l_Std_Internal_Parsec_String_pstring(v_amNarrow_2621_, v_a_2620_);
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v_pos_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2633_; 
lean_dec_ref(v_pmNarrow_2622_);
lean_dec_ref(v_a_2620_);
v_pos_2624_ = lean_ctor_get(v___x_2623_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2633_ == 0)
{
lean_object* v_unused_2634_; 
v_unused_2634_ = lean_ctor_get(v___x_2623_, 1);
lean_dec(v_unused_2634_);
v___x_2626_ = v___x_2623_;
v_isShared_2627_ = v_isSharedCheck_2633_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_pos_2624_);
lean_dec(v___x_2623_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2633_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
uint8_t v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2631_; 
v___x_2628_ = 0;
v___x_2629_ = lean_box(v___x_2628_);
if (v_isShared_2627_ == 0)
{
lean_ctor_set(v___x_2626_, 1, v___x_2629_);
v___x_2631_ = v___x_2626_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v_pos_2624_);
lean_ctor_set(v_reuseFailAlloc_2632_, 1, v___x_2629_);
v___x_2631_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
return v___x_2631_;
}
}
}
else
{
lean_object* v_pos_2635_; lean_object* v_err_2636_; lean_object* v___x_2638_; uint8_t v_isShared_2639_; uint8_t v_isSharedCheck_2667_; 
v_pos_2635_ = lean_ctor_get(v___x_2623_, 0);
v_err_2636_ = lean_ctor_get(v___x_2623_, 1);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2638_ = v___x_2623_;
v_isShared_2639_ = v_isSharedCheck_2667_;
goto v_resetjp_2637_;
}
else
{
lean_inc(v_err_2636_);
lean_inc(v_pos_2635_);
lean_dec(v___x_2623_);
v___x_2638_ = lean_box(0);
v_isShared_2639_ = v_isSharedCheck_2667_;
goto v_resetjp_2637_;
}
v_resetjp_2637_:
{
lean_object* v_snd_2640_; lean_object* v_snd_2641_; uint8_t v_decide_2642_; 
v_snd_2640_ = lean_ctor_get(v_a_2620_, 1);
lean_inc(v_snd_2640_);
lean_dec_ref(v_a_2620_);
v_snd_2641_ = lean_ctor_get(v_pos_2635_, 1);
v_decide_2642_ = lean_nat_dec_eq(v_snd_2640_, v_snd_2641_);
lean_dec(v_snd_2640_);
if (v_decide_2642_ == 0)
{
lean_object* v___x_2644_; 
lean_dec_ref(v_pmNarrow_2622_);
if (v_isShared_2639_ == 0)
{
v___x_2644_ = v___x_2638_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2645_; 
v_reuseFailAlloc_2645_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2645_, 0, v_pos_2635_);
lean_ctor_set(v_reuseFailAlloc_2645_, 1, v_err_2636_);
v___x_2644_ = v_reuseFailAlloc_2645_;
goto v_reusejp_2643_;
}
v_reusejp_2643_:
{
return v___x_2644_;
}
}
else
{
lean_object* v___x_2646_; 
lean_del_object(v___x_2638_);
lean_dec(v_err_2636_);
v___x_2646_ = l_Std_Internal_Parsec_String_pstring(v_pmNarrow_2622_, v_pos_2635_);
if (lean_obj_tag(v___x_2646_) == 0)
{
lean_object* v_pos_2647_; lean_object* v___x_2649_; uint8_t v_isShared_2650_; uint8_t v_isSharedCheck_2656_; 
v_pos_2647_ = lean_ctor_get(v___x_2646_, 0);
v_isSharedCheck_2656_ = !lean_is_exclusive(v___x_2646_);
if (v_isSharedCheck_2656_ == 0)
{
lean_object* v_unused_2657_; 
v_unused_2657_ = lean_ctor_get(v___x_2646_, 1);
lean_dec(v_unused_2657_);
v___x_2649_ = v___x_2646_;
v_isShared_2650_ = v_isSharedCheck_2656_;
goto v_resetjp_2648_;
}
else
{
lean_inc(v_pos_2647_);
lean_dec(v___x_2646_);
v___x_2649_ = lean_box(0);
v_isShared_2650_ = v_isSharedCheck_2656_;
goto v_resetjp_2648_;
}
v_resetjp_2648_:
{
uint8_t v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2654_; 
v___x_2651_ = 1;
v___x_2652_ = lean_box(v___x_2651_);
if (v_isShared_2650_ == 0)
{
lean_ctor_set(v___x_2649_, 1, v___x_2652_);
v___x_2654_ = v___x_2649_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v_pos_2647_);
lean_ctor_set(v_reuseFailAlloc_2655_, 1, v___x_2652_);
v___x_2654_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
return v___x_2654_;
}
}
}
else
{
lean_object* v_pos_2658_; lean_object* v_err_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2666_; 
v_pos_2658_ = lean_ctor_get(v___x_2646_, 0);
v_err_2659_ = lean_ctor_get(v___x_2646_, 1);
v_isSharedCheck_2666_ = !lean_is_exclusive(v___x_2646_);
if (v_isSharedCheck_2666_ == 0)
{
v___x_2661_ = v___x_2646_;
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_err_2659_);
lean_inc(v_pos_2658_);
lean_dec(v___x_2646_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2664_; 
if (v_isShared_2662_ == 0)
{
v___x_2664_ = v___x_2661_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v_pos_2658_);
lean_ctor_set(v_reuseFailAlloc_2665_, 1, v_err_2659_);
v___x_2664_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
return v___x_2664_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseDayPeriodFrom(lean_object* v_dp_2668_, lean_object* v_a_2669_){
_start:
{
lean_object* v_am_2670_; lean_object* v_pm_2671_; lean_object* v_noon_2672_; lean_object* v_midnight_2673_; lean_object* v___x_2674_; 
v_am_2670_ = lean_ctor_get(v_dp_2668_, 0);
lean_inc_ref(v_am_2670_);
v_pm_2671_ = lean_ctor_get(v_dp_2668_, 1);
lean_inc_ref(v_pm_2671_);
v_noon_2672_ = lean_ctor_get(v_dp_2668_, 2);
lean_inc_ref(v_noon_2672_);
v_midnight_2673_ = lean_ctor_get(v_dp_2668_, 3);
lean_inc_ref(v_midnight_2673_);
lean_dec_ref(v_dp_2668_);
lean_inc_ref(v_a_2669_);
v___x_2674_ = l_Std_Internal_Parsec_String_pstring(v_midnight_2673_, v_a_2669_);
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v_pos_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2684_; 
lean_dec_ref(v_noon_2672_);
lean_dec_ref(v_pm_2671_);
lean_dec_ref(v_am_2670_);
lean_dec_ref(v_a_2669_);
v_pos_2675_ = lean_ctor_get(v___x_2674_, 0);
v_isSharedCheck_2684_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2684_ == 0)
{
lean_object* v_unused_2685_; 
v_unused_2685_ = lean_ctor_get(v___x_2674_, 1);
lean_dec(v_unused_2685_);
v___x_2677_ = v___x_2674_;
v_isShared_2678_ = v_isSharedCheck_2684_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_pos_2675_);
lean_dec(v___x_2674_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2684_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
uint8_t v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2682_; 
v___x_2679_ = 3;
v___x_2680_ = lean_box(v___x_2679_);
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 1, v___x_2680_);
v___x_2682_ = v___x_2677_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v_pos_2675_);
lean_ctor_set(v_reuseFailAlloc_2683_, 1, v___x_2680_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
}
else
{
lean_object* v_pos_2686_; lean_object* v_err_2687_; lean_object* v___x_2689_; uint8_t v_isShared_2690_; uint8_t v_isSharedCheck_2764_; 
v_pos_2686_ = lean_ctor_get(v___x_2674_, 0);
v_err_2687_ = lean_ctor_get(v___x_2674_, 1);
v_isSharedCheck_2764_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2764_ == 0)
{
v___x_2689_ = v___x_2674_;
v_isShared_2690_ = v_isSharedCheck_2764_;
goto v_resetjp_2688_;
}
else
{
lean_inc(v_err_2687_);
lean_inc(v_pos_2686_);
lean_dec(v___x_2674_);
v___x_2689_ = lean_box(0);
v_isShared_2690_ = v_isSharedCheck_2764_;
goto v_resetjp_2688_;
}
v_resetjp_2688_:
{
lean_object* v_snd_2691_; lean_object* v_snd_2692_; uint8_t v_decide_2693_; 
v_snd_2691_ = lean_ctor_get(v_a_2669_, 1);
lean_inc(v_snd_2691_);
lean_dec_ref(v_a_2669_);
v_snd_2692_ = lean_ctor_get(v_pos_2686_, 1);
v_decide_2693_ = lean_nat_dec_eq(v_snd_2691_, v_snd_2692_);
lean_dec(v_snd_2691_);
if (v_decide_2693_ == 0)
{
lean_object* v___x_2695_; 
lean_dec_ref(v_noon_2672_);
lean_dec_ref(v_pm_2671_);
lean_dec_ref(v_am_2670_);
if (v_isShared_2690_ == 0)
{
v___x_2695_ = v___x_2689_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v_pos_2686_);
lean_ctor_set(v_reuseFailAlloc_2696_, 1, v_err_2687_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
return v___x_2695_;
}
}
else
{
lean_object* v___x_2697_; 
lean_inc(v_snd_2692_);
lean_del_object(v___x_2689_);
lean_dec(v_err_2687_);
v___x_2697_ = l_Std_Internal_Parsec_String_pstring(v_noon_2672_, v_pos_2686_);
if (lean_obj_tag(v___x_2697_) == 0)
{
lean_object* v_pos_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2707_; 
lean_dec(v_snd_2692_);
lean_dec_ref(v_pm_2671_);
lean_dec_ref(v_am_2670_);
v_pos_2698_ = lean_ctor_get(v___x_2697_, 0);
v_isSharedCheck_2707_ = !lean_is_exclusive(v___x_2697_);
if (v_isSharedCheck_2707_ == 0)
{
lean_object* v_unused_2708_; 
v_unused_2708_ = lean_ctor_get(v___x_2697_, 1);
lean_dec(v_unused_2708_);
v___x_2700_ = v___x_2697_;
v_isShared_2701_ = v_isSharedCheck_2707_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_pos_2698_);
lean_dec(v___x_2697_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2707_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
uint8_t v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2705_; 
v___x_2702_ = 2;
v___x_2703_ = lean_box(v___x_2702_);
if (v_isShared_2701_ == 0)
{
lean_ctor_set(v___x_2700_, 1, v___x_2703_);
v___x_2705_ = v___x_2700_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v_pos_2698_);
lean_ctor_set(v_reuseFailAlloc_2706_, 1, v___x_2703_);
v___x_2705_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
return v___x_2705_;
}
}
}
else
{
lean_object* v_pos_2709_; lean_object* v_err_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2763_; 
v_pos_2709_ = lean_ctor_get(v___x_2697_, 0);
v_err_2710_ = lean_ctor_get(v___x_2697_, 1);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2697_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2712_ = v___x_2697_;
v_isShared_2713_ = v_isSharedCheck_2763_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_err_2710_);
lean_inc(v_pos_2709_);
lean_dec(v___x_2697_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2763_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v_snd_2714_; uint8_t v_decide_2715_; 
v_snd_2714_ = lean_ctor_get(v_pos_2709_, 1);
v_decide_2715_ = lean_nat_dec_eq(v_snd_2692_, v_snd_2714_);
lean_dec(v_snd_2692_);
if (v_decide_2715_ == 0)
{
lean_object* v___x_2717_; 
lean_dec_ref(v_pm_2671_);
lean_dec_ref(v_am_2670_);
if (v_isShared_2713_ == 0)
{
v___x_2717_ = v___x_2712_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v_pos_2709_);
lean_ctor_set(v_reuseFailAlloc_2718_, 1, v_err_2710_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
else
{
lean_object* v___x_2719_; 
lean_inc(v_snd_2714_);
lean_del_object(v___x_2712_);
lean_dec(v_err_2710_);
v___x_2719_ = l_Std_Internal_Parsec_String_pstring(v_am_2670_, v_pos_2709_);
if (lean_obj_tag(v___x_2719_) == 0)
{
lean_object* v_pos_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2729_; 
lean_dec(v_snd_2714_);
lean_dec_ref(v_pm_2671_);
v_pos_2720_ = lean_ctor_get(v___x_2719_, 0);
v_isSharedCheck_2729_ = !lean_is_exclusive(v___x_2719_);
if (v_isSharedCheck_2729_ == 0)
{
lean_object* v_unused_2730_; 
v_unused_2730_ = lean_ctor_get(v___x_2719_, 1);
lean_dec(v_unused_2730_);
v___x_2722_ = v___x_2719_;
v_isShared_2723_ = v_isSharedCheck_2729_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_pos_2720_);
lean_dec(v___x_2719_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2729_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
uint8_t v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2727_; 
v___x_2724_ = 0;
v___x_2725_ = lean_box(v___x_2724_);
if (v_isShared_2723_ == 0)
{
lean_ctor_set(v___x_2722_, 1, v___x_2725_);
v___x_2727_ = v___x_2722_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2728_; 
v_reuseFailAlloc_2728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2728_, 0, v_pos_2720_);
lean_ctor_set(v_reuseFailAlloc_2728_, 1, v___x_2725_);
v___x_2727_ = v_reuseFailAlloc_2728_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
return v___x_2727_;
}
}
}
else
{
lean_object* v_pos_2731_; lean_object* v_err_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2762_; 
v_pos_2731_ = lean_ctor_get(v___x_2719_, 0);
v_err_2732_ = lean_ctor_get(v___x_2719_, 1);
v_isSharedCheck_2762_ = !lean_is_exclusive(v___x_2719_);
if (v_isSharedCheck_2762_ == 0)
{
v___x_2734_ = v___x_2719_;
v_isShared_2735_ = v_isSharedCheck_2762_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_err_2732_);
lean_inc(v_pos_2731_);
lean_dec(v___x_2719_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2762_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
lean_object* v_snd_2736_; uint8_t v_decide_2737_; 
v_snd_2736_ = lean_ctor_get(v_pos_2731_, 1);
v_decide_2737_ = lean_nat_dec_eq(v_snd_2714_, v_snd_2736_);
lean_dec(v_snd_2714_);
if (v_decide_2737_ == 0)
{
lean_object* v___x_2739_; 
lean_dec_ref(v_pm_2671_);
if (v_isShared_2735_ == 0)
{
v___x_2739_ = v___x_2734_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_pos_2731_);
lean_ctor_set(v_reuseFailAlloc_2740_, 1, v_err_2732_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
else
{
lean_object* v___x_2741_; 
lean_del_object(v___x_2734_);
lean_dec(v_err_2732_);
v___x_2741_ = l_Std_Internal_Parsec_String_pstring(v_pm_2671_, v_pos_2731_);
if (lean_obj_tag(v___x_2741_) == 0)
{
lean_object* v_pos_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2751_; 
v_pos_2742_ = lean_ctor_get(v___x_2741_, 0);
v_isSharedCheck_2751_ = !lean_is_exclusive(v___x_2741_);
if (v_isSharedCheck_2751_ == 0)
{
lean_object* v_unused_2752_; 
v_unused_2752_ = lean_ctor_get(v___x_2741_, 1);
lean_dec(v_unused_2752_);
v___x_2744_ = v___x_2741_;
v_isShared_2745_ = v_isSharedCheck_2751_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_pos_2742_);
lean_dec(v___x_2741_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2751_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
uint8_t v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2749_; 
v___x_2746_ = 1;
v___x_2747_ = lean_box(v___x_2746_);
if (v_isShared_2745_ == 0)
{
lean_ctor_set(v___x_2744_, 1, v___x_2747_);
v___x_2749_ = v___x_2744_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_pos_2742_);
lean_ctor_set(v_reuseFailAlloc_2750_, 1, v___x_2747_);
v___x_2749_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
return v___x_2749_;
}
}
}
else
{
lean_object* v_pos_2753_; lean_object* v_err_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2761_; 
v_pos_2753_ = lean_ctor_get(v___x_2741_, 0);
v_err_2754_ = lean_ctor_get(v___x_2741_, 1);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___x_2741_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2756_ = v___x_2741_;
v_isShared_2757_ = v_isSharedCheck_2761_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_err_2754_);
lean_inc(v_pos_2753_);
lean_dec(v___x_2741_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2761_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2759_; 
if (v_isShared_2757_ == 0)
{
v___x_2759_ = v___x_2756_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v_pos_2753_);
lean_ctor_set(v_reuseFailAlloc_2760_, 1, v_err_2754_);
v___x_2759_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
return v___x_2759_;
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
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseExtendedDayPeriodFrom(lean_object* v_arr_2765_, lean_object* v_a_2766_){
_start:
{
lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; uint8_t v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; uint8_t v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; uint8_t v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; uint8_t v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; uint8_t v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; uint8_t v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v_pairs_2804_; lean_object* v___x_2805_; 
v___x_2767_ = lean_unsigned_to_nat(6u);
v___x_2768_ = lean_unsigned_to_nat(0u);
v___x_2769_ = lean_array_fget_borrowed(v_arr_2765_, v___x_2768_);
v___x_2770_ = 0;
v___x_2771_ = lean_box(v___x_2770_);
lean_inc(v___x_2769_);
v___x_2772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2769_);
lean_ctor_set(v___x_2772_, 1, v___x_2771_);
v___x_2773_ = lean_unsigned_to_nat(1u);
v___x_2774_ = lean_array_fget_borrowed(v_arr_2765_, v___x_2773_);
v___x_2775_ = 1;
v___x_2776_ = lean_box(v___x_2775_);
lean_inc(v___x_2774_);
v___x_2777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2774_);
lean_ctor_set(v___x_2777_, 1, v___x_2776_);
v___x_2778_ = lean_unsigned_to_nat(2u);
v___x_2779_ = lean_array_fget_borrowed(v_arr_2765_, v___x_2778_);
v___x_2780_ = 2;
v___x_2781_ = lean_box(v___x_2780_);
lean_inc(v___x_2779_);
v___x_2782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2782_, 0, v___x_2779_);
lean_ctor_set(v___x_2782_, 1, v___x_2781_);
v___x_2783_ = lean_unsigned_to_nat(3u);
v___x_2784_ = lean_array_fget_borrowed(v_arr_2765_, v___x_2783_);
v___x_2785_ = 3;
v___x_2786_ = lean_box(v___x_2785_);
lean_inc(v___x_2784_);
v___x_2787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2784_);
lean_ctor_set(v___x_2787_, 1, v___x_2786_);
v___x_2788_ = lean_unsigned_to_nat(4u);
v___x_2789_ = lean_array_fget_borrowed(v_arr_2765_, v___x_2788_);
v___x_2790_ = 4;
v___x_2791_ = lean_box(v___x_2790_);
lean_inc(v___x_2789_);
v___x_2792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2792_, 0, v___x_2789_);
lean_ctor_set(v___x_2792_, 1, v___x_2791_);
v___x_2793_ = lean_unsigned_to_nat(5u);
v___x_2794_ = lean_array_fget_borrowed(v_arr_2765_, v___x_2793_);
v___x_2795_ = 5;
v___x_2796_ = lean_box(v___x_2795_);
lean_inc(v___x_2794_);
v___x_2797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2797_, 0, v___x_2794_);
lean_ctor_set(v___x_2797_, 1, v___x_2796_);
v___x_2798_ = lean_mk_empty_array_with_capacity(v___x_2767_);
v___x_2799_ = lean_array_push(v___x_2798_, v___x_2772_);
v___x_2800_ = lean_array_push(v___x_2799_, v___x_2777_);
v___x_2801_ = lean_array_push(v___x_2800_, v___x_2782_);
v___x_2802_ = lean_array_push(v___x_2801_, v___x_2787_);
v___x_2803_ = lean_array_push(v___x_2802_, v___x_2792_);
v_pairs_2804_ = lean_array_push(v___x_2803_, v___x_2797_);
v___x_2805_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFromSymbols___redArg(v_pairs_2804_, v_a_2766_);
lean_dec_ref(v_pairs_2804_);
return v___x_2805_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseExtendedDayPeriodFrom___boxed(lean_object* v_arr_2806_, lean_object* v_a_2807_){
_start:
{
lean_object* v_res_2808_; 
v_res_2808_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseExtendedDayPeriodFrom(v_arr_2806_, v_a_2807_);
lean_dec_ref(v_arr_2806_);
return v_res_2808_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go___redArg(lean_object* v_parse_2809_, lean_object* v_size_2810_, lean_object* v_acc_2811_, lean_object* v_count_2812_, lean_object* v_a_2813_){
_start:
{
uint8_t v___x_2814_; 
v___x_2814_ = lean_nat_dec_le(v_size_2810_, v_count_2812_);
if (v___x_2814_ == 0)
{
lean_object* v___x_2815_; 
lean_inc_ref(v_parse_2809_);
v___x_2815_ = lean_apply_1(v_parse_2809_, v_a_2813_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_object* v_pos_2816_; lean_object* v_res_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; 
v_pos_2816_ = lean_ctor_get(v___x_2815_, 0);
lean_inc(v_pos_2816_);
v_res_2817_ = lean_ctor_get(v___x_2815_, 1);
lean_inc(v_res_2817_);
lean_dec_ref_known(v___x_2815_, 2);
v___x_2818_ = lean_array_push(v_acc_2811_, v_res_2817_);
v___x_2819_ = lean_unsigned_to_nat(1u);
v___x_2820_ = lean_nat_add(v_count_2812_, v___x_2819_);
lean_dec(v_count_2812_);
v_acc_2811_ = v___x_2818_;
v_count_2812_ = v___x_2820_;
v_a_2813_ = v_pos_2816_;
goto _start;
}
else
{
lean_object* v_pos_2822_; lean_object* v_err_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2830_; 
lean_dec(v_count_2812_);
lean_dec_ref(v_acc_2811_);
lean_dec_ref(v_parse_2809_);
v_pos_2822_ = lean_ctor_get(v___x_2815_, 0);
v_err_2823_ = lean_ctor_get(v___x_2815_, 1);
v_isSharedCheck_2830_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2825_ = v___x_2815_;
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_err_2823_);
lean_inc(v_pos_2822_);
lean_dec(v___x_2815_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2828_; 
if (v_isShared_2826_ == 0)
{
v___x_2828_ = v___x_2825_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_pos_2822_);
lean_ctor_set(v_reuseFailAlloc_2829_, 1, v_err_2823_);
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
else
{
lean_object* v___x_2831_; 
lean_dec(v_count_2812_);
lean_dec_ref(v_parse_2809_);
v___x_2831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2831_, 0, v_a_2813_);
lean_ctor_set(v___x_2831_, 1, v_acc_2811_);
return v___x_2831_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go___redArg___boxed(lean_object* v_parse_2832_, lean_object* v_size_2833_, lean_object* v_acc_2834_, lean_object* v_count_2835_, lean_object* v_a_2836_){
_start:
{
lean_object* v_res_2837_; 
v_res_2837_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go___redArg(v_parse_2832_, v_size_2833_, v_acc_2834_, v_count_2835_, v_a_2836_);
lean_dec(v_size_2833_);
return v_res_2837_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go(lean_object* v_00_u03b1_2838_, lean_object* v_parse_2839_, lean_object* v_size_2840_, lean_object* v_acc_2841_, lean_object* v_count_2842_, lean_object* v_a_2843_){
_start:
{
lean_object* v___x_2844_; 
v___x_2844_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go___redArg(v_parse_2839_, v_size_2840_, v_acc_2841_, v_count_2842_, v_a_2843_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go___boxed(lean_object* v_00_u03b1_2845_, lean_object* v_parse_2846_, lean_object* v_size_2847_, lean_object* v_acc_2848_, lean_object* v_count_2849_, lean_object* v_a_2850_){
_start:
{
lean_object* v_res_2851_; 
v_res_2851_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go(v_00_u03b1_2845_, v_parse_2846_, v_size_2847_, v_acc_2848_, v_count_2849_, v_a_2850_);
lean_dec(v_size_2847_);
return v_res_2851_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly___redArg(lean_object* v_parse_2854_, lean_object* v_size_2855_, lean_object* v_a_2856_){
_start:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2857_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_exactly___redArg___closed__0));
v___x_2858_ = lean_unsigned_to_nat(12u);
v___x_2859_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactly_go___redArg(v_parse_2854_, v_size_2855_, v___x_2857_, v___x_2858_, v_a_2856_);
return v___x_2859_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly___redArg___boxed(lean_object* v_parse_2860_, lean_object* v_size_2861_, lean_object* v_a_2862_){
_start:
{
lean_object* v_res_2863_; 
v_res_2863_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactly___redArg(v_parse_2860_, v_size_2861_, v_a_2862_);
lean_dec(v_size_2861_);
return v_res_2863_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly(lean_object* v_00_u03b1_2864_, lean_object* v_parse_2865_, lean_object* v_size_2866_, lean_object* v_a_2867_){
_start:
{
lean_object* v___x_2868_; 
v___x_2868_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactly___redArg(v_parse_2865_, v_size_2866_, v_a_2867_);
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactly___boxed(lean_object* v_00_u03b1_2869_, lean_object* v_parse_2870_, lean_object* v_size_2871_, lean_object* v_a_2872_){
_start:
{
lean_object* v_res_2873_; 
v_res_2873_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactly(v_00_u03b1_2869_, v_parse_2870_, v_size_2871_, v_a_2872_);
lean_dec(v_size_2871_);
return v_res_2873_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars_go(lean_object* v_parse_2874_, lean_object* v_size_2875_, lean_object* v_acc_2876_, lean_object* v_count_2877_, lean_object* v_a_2878_){
_start:
{
uint8_t v___x_2879_; 
v___x_2879_ = lean_nat_dec_le(v_size_2875_, v_count_2877_);
if (v___x_2879_ == 0)
{
lean_object* v___x_2880_; 
lean_inc_ref(v_parse_2874_);
v___x_2880_ = lean_apply_1(v_parse_2874_, v_a_2878_);
if (lean_obj_tag(v___x_2880_) == 0)
{
lean_object* v_pos_2881_; lean_object* v_res_2882_; uint32_t v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; 
v_pos_2881_ = lean_ctor_get(v___x_2880_, 0);
lean_inc(v_pos_2881_);
v_res_2882_ = lean_ctor_get(v___x_2880_, 1);
lean_inc(v_res_2882_);
lean_dec_ref_known(v___x_2880_, 2);
v___x_2883_ = lean_unbox_uint32(v_res_2882_);
lean_dec(v_res_2882_);
v___x_2884_ = lean_string_push(v_acc_2876_, v___x_2883_);
v___x_2885_ = lean_unsigned_to_nat(1u);
v___x_2886_ = lean_nat_add(v_count_2877_, v___x_2885_);
lean_dec(v_count_2877_);
v_acc_2876_ = v___x_2884_;
v_count_2877_ = v___x_2886_;
v_a_2878_ = v_pos_2881_;
goto _start;
}
else
{
lean_object* v_pos_2888_; lean_object* v_err_2889_; lean_object* v___x_2891_; uint8_t v_isShared_2892_; uint8_t v_isSharedCheck_2896_; 
lean_dec(v_count_2877_);
lean_dec_ref(v_acc_2876_);
lean_dec_ref(v_parse_2874_);
v_pos_2888_ = lean_ctor_get(v___x_2880_, 0);
v_err_2889_ = lean_ctor_get(v___x_2880_, 1);
v_isSharedCheck_2896_ = !lean_is_exclusive(v___x_2880_);
if (v_isSharedCheck_2896_ == 0)
{
v___x_2891_ = v___x_2880_;
v_isShared_2892_ = v_isSharedCheck_2896_;
goto v_resetjp_2890_;
}
else
{
lean_inc(v_err_2889_);
lean_inc(v_pos_2888_);
lean_dec(v___x_2880_);
v___x_2891_ = lean_box(0);
v_isShared_2892_ = v_isSharedCheck_2896_;
goto v_resetjp_2890_;
}
v_resetjp_2890_:
{
lean_object* v___x_2894_; 
if (v_isShared_2892_ == 0)
{
v___x_2894_ = v___x_2891_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v_pos_2888_);
lean_ctor_set(v_reuseFailAlloc_2895_, 1, v_err_2889_);
v___x_2894_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
return v___x_2894_;
}
}
}
}
else
{
lean_object* v___x_2897_; 
lean_dec(v_count_2877_);
lean_dec_ref(v_parse_2874_);
v___x_2897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2897_, 0, v_a_2878_);
lean_ctor_set(v___x_2897_, 1, v_acc_2876_);
return v___x_2897_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars_go___boxed(lean_object* v_parse_2898_, lean_object* v_size_2899_, lean_object* v_acc_2900_, lean_object* v_count_2901_, lean_object* v_a_2902_){
_start:
{
lean_object* v_res_2903_; 
v_res_2903_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars_go(v_parse_2898_, v_size_2899_, v_acc_2900_, v_count_2901_, v_a_2902_);
lean_dec(v_size_2899_);
return v_res_2903_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars(lean_object* v_parse_2904_, lean_object* v_size_2905_, lean_object* v_a_2906_){
_start:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; 
v___x_2907_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_2908_ = lean_unsigned_to_nat(0u);
v___x_2909_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars_go(v_parse_2904_, v_size_2905_, v___x_2907_, v___x_2908_, v_a_2906_);
return v___x_2909_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars___boxed(lean_object* v_parse_2910_, lean_object* v_size_2911_, lean_object* v_a_2912_){
_start:
{
lean_object* v_res_2913_; 
v_res_2913_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars(v_parse_2910_, v_size_2911_, v_a_2912_);
lean_dec(v_size_2911_);
return v_res_2913_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(lean_object* v_parser_2914_, lean_object* v_a_2915_){
_start:
{
lean_object* v_pos_2917_; lean_object* v_res_2918_; lean_object* v___x_2950_; lean_object* v___x_2951_; 
v___x_2950_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__1));
lean_inc_ref(v_a_2915_);
v___x_2951_ = l_Std_Internal_Parsec_String_pstring(v___x_2950_, v_a_2915_);
if (lean_obj_tag(v___x_2951_) == 0)
{
lean_object* v_pos_2952_; lean_object* v_res_2953_; lean_object* v___x_2954_; 
lean_dec_ref(v_a_2915_);
v_pos_2952_ = lean_ctor_get(v___x_2951_, 0);
lean_inc(v_pos_2952_);
v_res_2953_ = lean_ctor_get(v___x_2951_, 1);
lean_inc(v_res_2953_);
lean_dec_ref_known(v___x_2951_, 2);
v___x_2954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2954_, 0, v_res_2953_);
v_pos_2917_ = v_pos_2952_;
v_res_2918_ = v___x_2954_;
goto v___jp_2916_;
}
else
{
lean_object* v_pos_2955_; lean_object* v_err_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2967_; 
v_pos_2955_ = lean_ctor_get(v___x_2951_, 0);
v_err_2956_ = lean_ctor_get(v___x_2951_, 1);
v_isSharedCheck_2967_ = !lean_is_exclusive(v___x_2951_);
if (v_isSharedCheck_2967_ == 0)
{
v___x_2958_ = v___x_2951_;
v_isShared_2959_ = v_isSharedCheck_2967_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_err_2956_);
lean_inc(v_pos_2955_);
lean_dec(v___x_2951_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2967_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v_snd_2960_; lean_object* v_snd_2961_; uint8_t v_decide_2962_; 
v_snd_2960_ = lean_ctor_get(v_a_2915_, 1);
lean_inc(v_snd_2960_);
lean_dec_ref(v_a_2915_);
v_snd_2961_ = lean_ctor_get(v_pos_2955_, 1);
v_decide_2962_ = lean_nat_dec_eq(v_snd_2960_, v_snd_2961_);
lean_dec(v_snd_2960_);
if (v_decide_2962_ == 0)
{
lean_object* v___x_2964_; 
lean_dec_ref(v_parser_2914_);
if (v_isShared_2959_ == 0)
{
v___x_2964_ = v___x_2958_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2965_; 
v_reuseFailAlloc_2965_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2965_, 0, v_pos_2955_);
lean_ctor_set(v_reuseFailAlloc_2965_, 1, v_err_2956_);
v___x_2964_ = v_reuseFailAlloc_2965_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
return v___x_2964_;
}
}
else
{
lean_object* v___x_2966_; 
lean_del_object(v___x_2958_);
lean_dec(v_err_2956_);
v___x_2966_ = lean_box(0);
v_pos_2917_ = v_pos_2955_;
v_res_2918_ = v___x_2966_;
goto v___jp_2916_;
}
}
}
v___jp_2916_:
{
lean_object* v___x_2919_; 
v___x_2919_ = lean_apply_1(v_parser_2914_, v_pos_2917_);
if (lean_obj_tag(v___x_2919_) == 0)
{
if (lean_obj_tag(v_res_2918_) == 0)
{
lean_object* v_pos_2920_; lean_object* v_res_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2929_; 
v_pos_2920_ = lean_ctor_get(v___x_2919_, 0);
v_res_2921_ = lean_ctor_get(v___x_2919_, 1);
v_isSharedCheck_2929_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2923_ = v___x_2919_;
v_isShared_2924_ = v_isSharedCheck_2929_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_res_2921_);
lean_inc(v_pos_2920_);
lean_dec(v___x_2919_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2929_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v___x_2925_; lean_object* v___x_2927_; 
v___x_2925_ = lean_nat_to_int(v_res_2921_);
if (v_isShared_2924_ == 0)
{
lean_ctor_set(v___x_2923_, 1, v___x_2925_);
v___x_2927_ = v___x_2923_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_pos_2920_);
lean_ctor_set(v_reuseFailAlloc_2928_, 1, v___x_2925_);
v___x_2927_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
return v___x_2927_;
}
}
}
else
{
lean_object* v_pos_2930_; lean_object* v_res_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2940_; 
lean_dec_ref_known(v_res_2918_, 1);
v_pos_2930_ = lean_ctor_get(v___x_2919_, 0);
v_res_2931_ = lean_ctor_get(v___x_2919_, 1);
v_isSharedCheck_2940_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_2940_ == 0)
{
v___x_2933_ = v___x_2919_;
v_isShared_2934_ = v_isSharedCheck_2940_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_res_2931_);
lean_inc(v_pos_2930_);
lean_dec(v___x_2919_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2940_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2938_; 
v___x_2935_ = lean_nat_to_int(v_res_2931_);
v___x_2936_ = lean_int_neg(v___x_2935_);
lean_dec(v___x_2935_);
if (v_isShared_2934_ == 0)
{
lean_ctor_set(v___x_2933_, 1, v___x_2936_);
v___x_2938_ = v___x_2933_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_pos_2930_);
lean_ctor_set(v_reuseFailAlloc_2939_, 1, v___x_2936_);
v___x_2938_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2937_;
}
v_reusejp_2937_:
{
return v___x_2938_;
}
}
}
}
else
{
lean_object* v_pos_2941_; lean_object* v_err_2942_; lean_object* v___x_2944_; uint8_t v_isShared_2945_; uint8_t v_isSharedCheck_2949_; 
lean_dec(v_res_2918_);
v_pos_2941_ = lean_ctor_get(v___x_2919_, 0);
v_err_2942_ = lean_ctor_get(v___x_2919_, 1);
v_isSharedCheck_2949_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_2949_ == 0)
{
v___x_2944_ = v___x_2919_;
v_isShared_2945_ = v_isSharedCheck_2949_;
goto v_resetjp_2943_;
}
else
{
lean_inc(v_err_2942_);
lean_inc(v_pos_2941_);
lean_dec(v___x_2919_);
v___x_2944_ = lean_box(0);
v_isShared_2945_ = v_isSharedCheck_2949_;
goto v_resetjp_2943_;
}
v_resetjp_2943_:
{
lean_object* v___x_2947_; 
if (v_isShared_2945_ == 0)
{
v___x_2947_ = v___x_2944_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v_pos_2941_);
lean_ctor_set(v_reuseFailAlloc_2948_, 1, v_err_2942_);
v___x_2947_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
return v___x_2947_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___lam__0(lean_object* v___y_2968_){
_start:
{
lean_object* v_fst_2972_; lean_object* v_snd_2973_; lean_object* v___x_2974_; uint8_t v___x_2975_; 
v_fst_2972_ = lean_ctor_get(v___y_2968_, 0);
v_snd_2973_ = lean_ctor_get(v___y_2968_, 1);
v___x_2974_ = lean_string_utf8_byte_size(v_fst_2972_);
v___x_2975_ = lean_nat_dec_eq(v_snd_2973_, v___x_2974_);
if (v___x_2975_ == 0)
{
uint32_t v_c_2976_; lean_object* v___x_2977_; lean_object* v_it_x27_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; uint32_t v___x_2981_; uint8_t v___x_2982_; 
v_c_2976_ = lean_string_utf8_get_fast(v_fst_2972_, v_snd_2973_);
v___x_2977_ = lean_string_utf8_next_fast(v_fst_2972_, v_snd_2973_);
lean_inc(v_fst_2972_);
v_it_x27_2978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_2978_, 0, v_fst_2972_);
lean_ctor_set(v_it_x27_2978_, 1, v___x_2977_);
v___x_2979_ = lean_box_uint32(v_c_2976_);
v___x_2980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2980_, 0, v_it_x27_2978_);
lean_ctor_set(v___x_2980_, 1, v___x_2979_);
v___x_2981_ = 48;
v___x_2982_ = lean_uint32_dec_le(v___x_2981_, v_c_2976_);
if (v___x_2982_ == 0)
{
lean_dec_ref_known(v___x_2980_, 2);
goto v___jp_2969_;
}
else
{
uint32_t v___x_2983_; uint8_t v___x_2984_; 
v___x_2983_ = 57;
v___x_2984_ = lean_uint32_dec_le(v_c_2976_, v___x_2983_);
if (v___x_2984_ == 0)
{
lean_dec_ref_known(v___x_2980_, 2);
goto v___jp_2969_;
}
else
{
lean_dec_ref(v___y_2968_);
return v___x_2980_;
}
}
}
else
{
lean_object* v___x_2985_; lean_object* v___x_2986_; 
v___x_2985_ = lean_box(0);
v___x_2986_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2986_, 0, v___y_2968_);
lean_ctor_set(v___x_2986_, 1, v___x_2985_);
return v___x_2986_;
}
v___jp_2969_:
{
lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2970_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_2971_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2971_, 0, v___y_2968_);
lean_ctor_set(v___x_2971_, 1, v___x_2970_);
return v___x_2971_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(lean_object* v_size_2988_, lean_object* v_a_2989_){
_start:
{
lean_object* v___f_2990_; lean_object* v___x_2991_; 
v___f_2990_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___closed__0));
v___x_2991_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars(v___f_2990_, v_size_2988_, v_a_2989_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_pos_2992_; lean_object* v_res_2993_; lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3004_; 
v_pos_2992_ = lean_ctor_get(v___x_2991_, 0);
v_res_2993_ = lean_ctor_get(v___x_2991_, 1);
v_isSharedCheck_3004_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3004_ == 0)
{
v___x_2995_ = v___x_2991_;
v_isShared_2996_ = v_isSharedCheck_3004_;
goto v_resetjp_2994_;
}
else
{
lean_inc(v_res_2993_);
lean_inc(v_pos_2992_);
lean_dec(v___x_2991_);
v___x_2995_ = lean_box(0);
v_isShared_2996_ = v_isSharedCheck_3004_;
goto v_resetjp_2994_;
}
v_resetjp_2994_:
{
lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3002_; 
v___x_2997_ = lean_unsigned_to_nat(0u);
v___x_2998_ = lean_string_utf8_byte_size(v_res_2993_);
v___x_2999_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2999_, 0, v_res_2993_);
lean_ctor_set(v___x_2999_, 1, v___x_2997_);
lean_ctor_set(v___x_2999_, 2, v___x_2998_);
v___x_3000_ = l_String_Slice_toNat_x21(v___x_2999_);
lean_dec_ref_known(v___x_2999_, 3);
if (v_isShared_2996_ == 0)
{
lean_ctor_set(v___x_2995_, 1, v___x_3000_);
v___x_3002_ = v___x_2995_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v_pos_2992_);
lean_ctor_set(v_reuseFailAlloc_3003_, 1, v___x_3000_);
v___x_3002_ = v_reuseFailAlloc_3003_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
return v___x_3002_;
}
}
}
else
{
lean_object* v_pos_3005_; lean_object* v_err_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3013_; 
v_pos_3005_ = lean_ctor_get(v___x_2991_, 0);
v_err_3006_ = lean_ctor_get(v___x_2991_, 1);
v_isSharedCheck_3013_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3013_ == 0)
{
v___x_3008_ = v___x_2991_;
v_isShared_3009_ = v_isSharedCheck_3013_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_err_3006_);
lean_inc(v_pos_3005_);
lean_dec(v___x_2991_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3013_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v___x_3011_; 
if (v_isShared_3009_ == 0)
{
v___x_3011_ = v___x_3008_;
goto v_reusejp_3010_;
}
else
{
lean_object* v_reuseFailAlloc_3012_; 
v_reuseFailAlloc_3012_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3012_, 0, v_pos_3005_);
lean_ctor_set(v_reuseFailAlloc_3012_, 1, v_err_3006_);
v___x_3011_ = v_reuseFailAlloc_3012_;
goto v_reusejp_3010_;
}
v_reusejp_3010_:
{
return v___x_3011_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___boxed(lean_object* v_size_3014_, lean_object* v_a_3015_){
_start:
{
lean_object* v_res_3016_; 
v_res_3016_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v_size_3014_, v_a_3015_);
lean_dec(v_size_3014_);
return v_res_3016_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum_spec__0(lean_object* v_acc_3017_, lean_object* v_a_3018_){
_start:
{
lean_object* v_fst_3019_; lean_object* v_snd_3020_; lean_object* v_pos_3022_; lean_object* v_snd_3023_; lean_object* v_err_3024_; lean_object* v___x_3030_; uint8_t v___x_3031_; 
v_fst_3019_ = lean_ctor_get(v_a_3018_, 0);
v_snd_3020_ = lean_ctor_get(v_a_3018_, 1);
lean_inc(v_snd_3020_);
v___x_3030_ = lean_string_utf8_byte_size(v_fst_3019_);
v___x_3031_ = lean_nat_dec_eq(v_snd_3020_, v___x_3030_);
if (v___x_3031_ == 0)
{
uint32_t v_c_3032_; uint32_t v___x_3033_; uint8_t v___x_3034_; 
v_c_3032_ = lean_string_utf8_get_fast(v_fst_3019_, v_snd_3020_);
v___x_3033_ = 48;
v___x_3034_ = lean_uint32_dec_le(v___x_3033_, v_c_3032_);
if (v___x_3034_ == 0)
{
goto v___jp_3028_;
}
else
{
uint32_t v___x_3035_; uint8_t v___x_3036_; 
v___x_3035_ = 57;
v___x_3036_ = lean_uint32_dec_le(v_c_3032_, v___x_3035_);
if (v___x_3036_ == 0)
{
goto v___jp_3028_;
}
else
{
lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3046_; 
lean_inc(v_fst_3019_);
v_isSharedCheck_3046_ = !lean_is_exclusive(v_a_3018_);
if (v_isSharedCheck_3046_ == 0)
{
lean_object* v_unused_3047_; lean_object* v_unused_3048_; 
v_unused_3047_ = lean_ctor_get(v_a_3018_, 1);
lean_dec(v_unused_3047_);
v_unused_3048_ = lean_ctor_get(v_a_3018_, 0);
lean_dec(v_unused_3048_);
v___x_3038_ = v_a_3018_;
v_isShared_3039_ = v_isSharedCheck_3046_;
goto v_resetjp_3037_;
}
else
{
lean_dec(v_a_3018_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3046_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3040_; lean_object* v_it_x27_3042_; 
v___x_3040_ = lean_string_utf8_next_fast(v_fst_3019_, v_snd_3020_);
lean_dec(v_snd_3020_);
if (v_isShared_3039_ == 0)
{
lean_ctor_set(v___x_3038_, 1, v___x_3040_);
v_it_x27_3042_ = v___x_3038_;
goto v_reusejp_3041_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_fst_3019_);
lean_ctor_set(v_reuseFailAlloc_3045_, 1, v___x_3040_);
v_it_x27_3042_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3041_;
}
v_reusejp_3041_:
{
lean_object* v___x_3043_; 
v___x_3043_ = lean_string_push(v_acc_3017_, v_c_3032_);
v_acc_3017_ = v___x_3043_;
v_a_3018_ = v_it_x27_3042_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_3049_; 
v___x_3049_ = lean_box(0);
lean_inc(v_snd_3020_);
v_pos_3022_ = v_a_3018_;
v_snd_3023_ = v_snd_3020_;
v_err_3024_ = v___x_3049_;
goto v___jp_3021_;
}
v___jp_3021_:
{
uint8_t v_decide_3025_; 
v_decide_3025_ = lean_nat_dec_eq(v_snd_3020_, v_snd_3023_);
lean_dec(v_snd_3023_);
lean_dec(v_snd_3020_);
if (v_decide_3025_ == 0)
{
lean_object* v___x_3026_; 
lean_dec_ref(v_acc_3017_);
lean_inc(v_err_3024_);
v___x_3026_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3026_, 0, v_pos_3022_);
lean_ctor_set(v___x_3026_, 1, v_err_3024_);
return v___x_3026_;
}
else
{
lean_object* v___x_3027_; 
v___x_3027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3027_, 0, v_pos_3022_);
lean_ctor_set(v___x_3027_, 1, v_acc_3017_);
return v___x_3027_;
}
}
v___jp_3028_:
{
lean_object* v___x_3029_; 
v___x_3029_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_3020_);
v_pos_3022_ = v_a_3018_;
v_snd_3023_ = v_snd_3020_;
v_err_3024_ = v___x_3029_;
goto v___jp_3021_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum(lean_object* v_size_3050_, lean_object* v_a_3051_){
_start:
{
lean_object* v___f_3052_; lean_object* v___x_3053_; 
v___f_3052_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___closed__0));
v___x_3053_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars(v___f_3052_, v_size_3050_, v_a_3051_);
if (lean_obj_tag(v___x_3053_) == 0)
{
lean_object* v_pos_3054_; lean_object* v_res_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; 
v_pos_3054_ = lean_ctor_get(v___x_3053_, 0);
lean_inc(v_pos_3054_);
v_res_3055_ = lean_ctor_get(v___x_3053_, 1);
lean_inc(v_res_3055_);
lean_dec_ref_known(v___x_3053_, 2);
v___x_3056_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_3057_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum_spec__0(v___x_3056_, v_pos_3054_);
if (lean_obj_tag(v___x_3057_) == 0)
{
lean_object* v_pos_3058_; lean_object* v_res_3059_; lean_object* v___x_3061_; uint8_t v_isShared_3062_; uint8_t v_isSharedCheck_3071_; 
v_pos_3058_ = lean_ctor_get(v___x_3057_, 0);
v_res_3059_ = lean_ctor_get(v___x_3057_, 1);
v_isSharedCheck_3071_ = !lean_is_exclusive(v___x_3057_);
if (v_isSharedCheck_3071_ == 0)
{
v___x_3061_ = v___x_3057_;
v_isShared_3062_ = v_isSharedCheck_3071_;
goto v_resetjp_3060_;
}
else
{
lean_inc(v_res_3059_);
lean_inc(v_pos_3058_);
lean_dec(v___x_3057_);
v___x_3061_ = lean_box(0);
v_isShared_3062_ = v_isSharedCheck_3071_;
goto v_resetjp_3060_;
}
v_resetjp_3060_:
{
lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3069_; 
v___x_3063_ = lean_string_append(v_res_3055_, v_res_3059_);
lean_dec(v_res_3059_);
v___x_3064_ = lean_unsigned_to_nat(0u);
v___x_3065_ = lean_string_utf8_byte_size(v___x_3063_);
v___x_3066_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3066_, 0, v___x_3063_);
lean_ctor_set(v___x_3066_, 1, v___x_3064_);
lean_ctor_set(v___x_3066_, 2, v___x_3065_);
v___x_3067_ = l_String_Slice_toNat_x21(v___x_3066_);
lean_dec_ref_known(v___x_3066_, 3);
if (v_isShared_3062_ == 0)
{
lean_ctor_set(v___x_3061_, 1, v___x_3067_);
v___x_3069_ = v___x_3061_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v_pos_3058_);
lean_ctor_set(v_reuseFailAlloc_3070_, 1, v___x_3067_);
v___x_3069_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
return v___x_3069_;
}
}
}
else
{
lean_object* v_pos_3072_; lean_object* v_err_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3080_; 
lean_dec(v_res_3055_);
v_pos_3072_ = lean_ctor_get(v___x_3057_, 0);
v_err_3073_ = lean_ctor_get(v___x_3057_, 1);
v_isSharedCheck_3080_ = !lean_is_exclusive(v___x_3057_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_3075_ = v___x_3057_;
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_err_3073_);
lean_inc(v_pos_3072_);
lean_dec(v___x_3057_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3078_; 
if (v_isShared_3076_ == 0)
{
v___x_3078_ = v___x_3075_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_pos_3072_);
lean_ctor_set(v_reuseFailAlloc_3079_, 1, v_err_3073_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
return v___x_3078_;
}
}
}
}
else
{
lean_object* v_pos_3081_; lean_object* v_err_3082_; lean_object* v___x_3084_; uint8_t v_isShared_3085_; uint8_t v_isSharedCheck_3089_; 
v_pos_3081_ = lean_ctor_get(v___x_3053_, 0);
v_err_3082_ = lean_ctor_get(v___x_3053_, 1);
v_isSharedCheck_3089_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3089_ == 0)
{
v___x_3084_ = v___x_3053_;
v_isShared_3085_ = v_isSharedCheck_3089_;
goto v_resetjp_3083_;
}
else
{
lean_inc(v_err_3082_);
lean_inc(v_pos_3081_);
lean_dec(v___x_3053_);
v___x_3084_ = lean_box(0);
v_isShared_3085_ = v_isSharedCheck_3089_;
goto v_resetjp_3083_;
}
v_resetjp_3083_:
{
lean_object* v___x_3087_; 
if (v_isShared_3085_ == 0)
{
v___x_3087_ = v___x_3084_;
goto v_reusejp_3086_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v_pos_3081_);
lean_ctor_set(v_reuseFailAlloc_3088_, 1, v_err_3082_);
v___x_3087_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3086_;
}
v_reusejp_3086_:
{
return v___x_3087_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum___boxed(lean_object* v_size_3090_, lean_object* v_a_3091_){
_start:
{
lean_object* v_res_3092_; 
v_res_3092_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum(v_size_3090_, v_a_3091_);
lean_dec(v_size_3090_);
return v_res_3092_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum(lean_object* v_size_3093_, lean_object* v_a_3094_){
_start:
{
lean_object* v___x_3095_; uint8_t v___x_3096_; 
v___x_3095_ = lean_unsigned_to_nat(1u);
v___x_3096_ = lean_nat_dec_eq(v_size_3093_, v___x_3095_);
if (v___x_3096_ == 0)
{
lean_object* v___x_3097_; 
v___x_3097_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v_size_3093_, v_a_3094_);
return v___x_3097_;
}
else
{
lean_object* v___x_3098_; 
v___x_3098_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum(v___x_3095_, v_a_3094_);
return v___x_3098_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed(lean_object* v_size_3099_, lean_object* v_a_3100_){
_start:
{
lean_object* v_res_3101_; 
v_res_3101_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum(v_size_3099_, v_a_3100_);
lean_dec(v_size_3099_);
return v_res_3101_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFractionNum(lean_object* v_size_3102_, lean_object* v_pad_3103_, lean_object* v_a_3104_){
_start:
{
lean_object* v___f_3105_; lean_object* v___x_3106_; 
v___f_3105_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___closed__0));
v___x_3106_ = l___private_Std_Time_Format_Basic_0__Std_Time_exactlyChars(v___f_3105_, v_size_3102_, v_a_3104_);
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_object* v_pos_3107_; lean_object* v_res_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3121_; 
v_pos_3107_ = lean_ctor_get(v___x_3106_, 0);
v_res_3108_ = lean_ctor_get(v___x_3106_, 1);
v_isSharedCheck_3121_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3110_ = v___x_3106_;
v_isShared_3111_ = v_isSharedCheck_3121_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_res_3108_);
lean_inc(v_pos_3107_);
lean_dec(v___x_3106_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3121_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
uint32_t v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3119_; 
v___x_3112_ = 48;
v___x_3113_ = l___private_Std_Time_Format_Basic_0__Std_Time_rightPadAscii(v_pad_3103_, v___x_3112_, v_res_3108_);
v___x_3114_ = lean_unsigned_to_nat(0u);
v___x_3115_ = lean_string_utf8_byte_size(v___x_3113_);
v___x_3116_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3113_);
lean_ctor_set(v___x_3116_, 1, v___x_3114_);
lean_ctor_set(v___x_3116_, 2, v___x_3115_);
v___x_3117_ = l_String_Slice_toNat_x21(v___x_3116_);
lean_dec_ref_known(v___x_3116_, 3);
if (v_isShared_3111_ == 0)
{
lean_ctor_set(v___x_3110_, 1, v___x_3117_);
v___x_3119_ = v___x_3110_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v_pos_3107_);
lean_ctor_set(v_reuseFailAlloc_3120_, 1, v___x_3117_);
v___x_3119_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
return v___x_3119_;
}
}
}
else
{
lean_object* v_pos_3122_; lean_object* v_err_3123_; lean_object* v___x_3125_; uint8_t v_isShared_3126_; uint8_t v_isSharedCheck_3130_; 
v_pos_3122_ = lean_ctor_get(v___x_3106_, 0);
v_err_3123_ = lean_ctor_get(v___x_3106_, 1);
v_isSharedCheck_3130_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3130_ == 0)
{
v___x_3125_ = v___x_3106_;
v_isShared_3126_ = v_isSharedCheck_3130_;
goto v_resetjp_3124_;
}
else
{
lean_inc(v_err_3123_);
lean_inc(v_pos_3122_);
lean_dec(v___x_3106_);
v___x_3125_ = lean_box(0);
v_isShared_3126_ = v_isSharedCheck_3130_;
goto v_resetjp_3124_;
}
v_resetjp_3124_:
{
lean_object* v___x_3128_; 
if (v_isShared_3126_ == 0)
{
v___x_3128_ = v___x_3125_;
goto v_reusejp_3127_;
}
else
{
lean_object* v_reuseFailAlloc_3129_; 
v_reuseFailAlloc_3129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3129_, 0, v_pos_3122_);
lean_ctor_set(v_reuseFailAlloc_3129_, 1, v_err_3123_);
v___x_3128_ = v_reuseFailAlloc_3129_;
goto v_reusejp_3127_;
}
v_reusejp_3127_:
{
return v___x_3128_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseFractionNum___boxed(lean_object* v_size_3131_, lean_object* v_pad_3132_, lean_object* v_a_3133_){
_start:
{
lean_object* v_res_3134_; 
v_res_3134_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFractionNum(v_size_3131_, v_pad_3132_, v_a_3133_);
lean_dec(v_pad_3132_);
lean_dec(v_size_3131_);
return v_res_3134_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier_spec__0_spec__0(lean_object* v_acc_3135_, lean_object* v_a_3136_){
_start:
{
lean_object* v_pos_3138_; uint32_t v_res_3139_; lean_object* v_fst_3142_; lean_object* v_snd_3143_; lean_object* v_pos_3145_; lean_object* v_snd_3146_; lean_object* v_err_3147_; lean_object* v___x_3151_; uint8_t v___x_3152_; 
v_fst_3142_ = lean_ctor_get(v_a_3136_, 0);
v_snd_3143_ = lean_ctor_get(v_a_3136_, 1);
lean_inc(v_snd_3143_);
v___x_3151_ = lean_string_utf8_byte_size(v_fst_3142_);
v___x_3152_ = lean_nat_dec_eq(v_snd_3143_, v___x_3151_);
if (v___x_3152_ == 0)
{
uint32_t v_c_3153_; lean_object* v___x_3154_; lean_object* v_it_x27_3155_; uint8_t v___y_3157_; uint8_t v___y_3158_; uint8_t v___y_3159_; uint8_t v___y_3162_; uint8_t v___y_3163_; uint8_t v___y_3164_; uint8_t v___y_3165_; uint8_t v___y_3167_; uint8_t v___y_3168_; uint8_t v___y_3176_; uint8_t v___y_3177_; uint8_t v___y_3185_; uint32_t v___x_3192_; uint8_t v___x_3193_; 
v_c_3153_ = lean_string_utf8_get_fast(v_fst_3142_, v_snd_3143_);
v___x_3154_ = lean_string_utf8_next_fast(v_fst_3142_, v_snd_3143_);
lean_inc(v_fst_3142_);
v_it_x27_3155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_3155_, 0, v_fst_3142_);
lean_ctor_set(v_it_x27_3155_, 1, v___x_3154_);
v___x_3192_ = 65;
v___x_3193_ = lean_uint32_dec_le(v___x_3192_, v_c_3153_);
if (v___x_3193_ == 0)
{
goto v___jp_3187_;
}
else
{
uint32_t v___x_3194_; uint8_t v___x_3195_; 
v___x_3194_ = 90;
v___x_3195_ = lean_uint32_dec_le(v_c_3153_, v___x_3194_);
if (v___x_3195_ == 0)
{
goto v___jp_3187_;
}
else
{
goto v___jp_3182_;
}
}
v___jp_3156_:
{
if (v___y_3157_ == 0)
{
if (v___y_3158_ == 0)
{
if (v___y_3159_ == 0)
{
lean_object* v___x_3160_; 
lean_dec_ref_known(v_it_x27_3155_, 2);
v___x_3160_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_3143_);
v_pos_3145_ = v_a_3136_;
v_snd_3146_ = v_snd_3143_;
v_err_3147_ = v___x_3160_;
goto v___jp_3144_;
}
else
{
lean_dec(v_snd_3143_);
lean_dec_ref(v_a_3136_);
v_pos_3138_ = v_it_x27_3155_;
v_res_3139_ = v_c_3153_;
goto v___jp_3137_;
}
}
else
{
lean_dec(v_snd_3143_);
lean_dec_ref(v_a_3136_);
v_pos_3138_ = v_it_x27_3155_;
v_res_3139_ = v_c_3153_;
goto v___jp_3137_;
}
}
else
{
lean_dec(v_snd_3143_);
lean_dec_ref(v_a_3136_);
v_pos_3138_ = v_it_x27_3155_;
v_res_3139_ = v_c_3153_;
goto v___jp_3137_;
}
}
v___jp_3161_:
{
if (v___y_3164_ == 0)
{
v___y_3157_ = v___y_3162_;
v___y_3158_ = v___y_3163_;
v___y_3159_ = v___y_3165_;
goto v___jp_3156_;
}
else
{
v___y_3157_ = v___y_3162_;
v___y_3158_ = v___y_3163_;
v___y_3159_ = v___y_3164_;
goto v___jp_3156_;
}
}
v___jp_3166_:
{
uint32_t v___x_3169_; uint8_t v___x_3170_; uint32_t v___x_3171_; uint8_t v___x_3172_; 
v___x_3169_ = 95;
v___x_3170_ = lean_uint32_dec_eq(v_c_3153_, v___x_3169_);
v___x_3171_ = 45;
v___x_3172_ = lean_uint32_dec_eq(v_c_3153_, v___x_3171_);
if (v___x_3172_ == 0)
{
uint32_t v___x_3173_; uint8_t v___x_3174_; 
v___x_3173_ = 47;
v___x_3174_ = lean_uint32_dec_eq(v_c_3153_, v___x_3173_);
v___y_3162_ = v___y_3168_;
v___y_3163_ = v___y_3167_;
v___y_3164_ = v___x_3170_;
v___y_3165_ = v___x_3174_;
goto v___jp_3161_;
}
else
{
v___y_3162_ = v___y_3168_;
v___y_3163_ = v___y_3167_;
v___y_3164_ = v___x_3170_;
v___y_3165_ = v___x_3172_;
goto v___jp_3161_;
}
}
v___jp_3175_:
{
uint32_t v___x_3178_; uint8_t v___x_3179_; 
v___x_3178_ = 48;
v___x_3179_ = lean_uint32_dec_le(v___x_3178_, v_c_3153_);
if (v___x_3179_ == 0)
{
v___y_3167_ = v___y_3177_;
v___y_3168_ = v___x_3179_;
goto v___jp_3166_;
}
else
{
uint32_t v___x_3180_; uint8_t v___x_3181_; 
v___x_3180_ = 57;
v___x_3181_ = lean_uint32_dec_le(v_c_3153_, v___x_3180_);
if (v___x_3181_ == 0)
{
v___y_3167_ = v___y_3177_;
v___y_3168_ = v___x_3181_;
goto v___jp_3166_;
}
else
{
v___y_3167_ = v___y_3177_;
v___y_3168_ = v___y_3176_;
goto v___jp_3166_;
}
}
}
v___jp_3182_:
{
uint8_t v___x_3183_; 
v___x_3183_ = 1;
v___y_3176_ = v___x_3183_;
v___y_3177_ = v___x_3183_;
goto v___jp_3175_;
}
v___jp_3184_:
{
uint8_t v___x_3186_; 
v___x_3186_ = 1;
v___y_3176_ = v___x_3186_;
v___y_3177_ = v___y_3185_;
goto v___jp_3175_;
}
v___jp_3187_:
{
uint32_t v___x_3188_; uint8_t v___x_3189_; 
v___x_3188_ = 97;
v___x_3189_ = lean_uint32_dec_le(v___x_3188_, v_c_3153_);
if (v___x_3189_ == 0)
{
v___y_3185_ = v___x_3189_;
goto v___jp_3184_;
}
else
{
uint32_t v___x_3190_; uint8_t v___x_3191_; 
v___x_3190_ = 122;
v___x_3191_ = lean_uint32_dec_le(v_c_3153_, v___x_3190_);
if (v___x_3191_ == 0)
{
v___y_3185_ = v___x_3191_;
goto v___jp_3184_;
}
else
{
goto v___jp_3182_;
}
}
}
}
else
{
lean_object* v___x_3196_; 
v___x_3196_ = lean_box(0);
lean_inc(v_snd_3143_);
v_pos_3145_ = v_a_3136_;
v_snd_3146_ = v_snd_3143_;
v_err_3147_ = v___x_3196_;
goto v___jp_3144_;
}
v___jp_3137_:
{
lean_object* v___x_3140_; 
v___x_3140_ = lean_string_push(v_acc_3135_, v_res_3139_);
v_acc_3135_ = v___x_3140_;
v_a_3136_ = v_pos_3138_;
goto _start;
}
v___jp_3144_:
{
uint8_t v_decide_3148_; 
v_decide_3148_ = lean_nat_dec_eq(v_snd_3143_, v_snd_3146_);
lean_dec(v_snd_3146_);
lean_dec(v_snd_3143_);
if (v_decide_3148_ == 0)
{
lean_object* v___x_3149_; 
lean_dec_ref(v_acc_3135_);
lean_inc(v_err_3147_);
v___x_3149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3149_, 0, v_pos_3145_);
lean_ctor_set(v___x_3149_, 1, v_err_3147_);
return v___x_3149_;
}
else
{
lean_object* v___x_3150_; 
v___x_3150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3150_, 0, v_pos_3145_);
lean_ctor_set(v___x_3150_, 1, v_acc_3135_);
return v___x_3150_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier_spec__0(lean_object* v_acc_3197_, lean_object* v_a_3198_){
_start:
{
lean_object* v_pos_3200_; uint32_t v_res_3201_; lean_object* v_fst_3204_; lean_object* v_snd_3205_; lean_object* v_pos_3207_; lean_object* v_snd_3208_; lean_object* v_err_3209_; lean_object* v___x_3213_; uint8_t v___x_3214_; 
v_fst_3204_ = lean_ctor_get(v_a_3198_, 0);
v_snd_3205_ = lean_ctor_get(v_a_3198_, 1);
lean_inc(v_snd_3205_);
v___x_3213_ = lean_string_utf8_byte_size(v_fst_3204_);
v___x_3214_ = lean_nat_dec_eq(v_snd_3205_, v___x_3213_);
if (v___x_3214_ == 0)
{
uint32_t v_c_3215_; lean_object* v___x_3216_; lean_object* v_it_x27_3217_; uint8_t v___y_3219_; uint8_t v___y_3220_; uint8_t v___y_3221_; uint8_t v___y_3224_; uint8_t v___y_3225_; uint8_t v___y_3226_; uint8_t v___y_3227_; uint8_t v___y_3229_; uint8_t v___y_3230_; uint8_t v___y_3238_; uint8_t v___y_3239_; uint8_t v___y_3247_; uint32_t v___x_3254_; uint8_t v___x_3255_; 
v_c_3215_ = lean_string_utf8_get_fast(v_fst_3204_, v_snd_3205_);
v___x_3216_ = lean_string_utf8_next_fast(v_fst_3204_, v_snd_3205_);
lean_inc(v_fst_3204_);
v_it_x27_3217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_3217_, 0, v_fst_3204_);
lean_ctor_set(v_it_x27_3217_, 1, v___x_3216_);
v___x_3254_ = 65;
v___x_3255_ = lean_uint32_dec_le(v___x_3254_, v_c_3215_);
if (v___x_3255_ == 0)
{
goto v___jp_3249_;
}
else
{
uint32_t v___x_3256_; uint8_t v___x_3257_; 
v___x_3256_ = 90;
v___x_3257_ = lean_uint32_dec_le(v_c_3215_, v___x_3256_);
if (v___x_3257_ == 0)
{
goto v___jp_3249_;
}
else
{
goto v___jp_3244_;
}
}
v___jp_3218_:
{
if (v___y_3219_ == 0)
{
if (v___y_3220_ == 0)
{
if (v___y_3221_ == 0)
{
lean_object* v___x_3222_; 
lean_dec_ref_known(v_it_x27_3217_, 2);
v___x_3222_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
lean_inc(v_snd_3205_);
v_pos_3207_ = v_a_3198_;
v_snd_3208_ = v_snd_3205_;
v_err_3209_ = v___x_3222_;
goto v___jp_3206_;
}
else
{
lean_dec(v_snd_3205_);
lean_dec_ref(v_a_3198_);
v_pos_3200_ = v_it_x27_3217_;
v_res_3201_ = v_c_3215_;
goto v___jp_3199_;
}
}
else
{
lean_dec(v_snd_3205_);
lean_dec_ref(v_a_3198_);
v_pos_3200_ = v_it_x27_3217_;
v_res_3201_ = v_c_3215_;
goto v___jp_3199_;
}
}
else
{
lean_dec(v_snd_3205_);
lean_dec_ref(v_a_3198_);
v_pos_3200_ = v_it_x27_3217_;
v_res_3201_ = v_c_3215_;
goto v___jp_3199_;
}
}
v___jp_3223_:
{
if (v___y_3225_ == 0)
{
v___y_3219_ = v___y_3224_;
v___y_3220_ = v___y_3226_;
v___y_3221_ = v___y_3227_;
goto v___jp_3218_;
}
else
{
v___y_3219_ = v___y_3224_;
v___y_3220_ = v___y_3226_;
v___y_3221_ = v___y_3225_;
goto v___jp_3218_;
}
}
v___jp_3228_:
{
uint32_t v___x_3231_; uint8_t v___x_3232_; uint32_t v___x_3233_; uint8_t v___x_3234_; 
v___x_3231_ = 95;
v___x_3232_ = lean_uint32_dec_eq(v_c_3215_, v___x_3231_);
v___x_3233_ = 45;
v___x_3234_ = lean_uint32_dec_eq(v_c_3215_, v___x_3233_);
if (v___x_3234_ == 0)
{
uint32_t v___x_3235_; uint8_t v___x_3236_; 
v___x_3235_ = 47;
v___x_3236_ = lean_uint32_dec_eq(v_c_3215_, v___x_3235_);
v___y_3224_ = v___y_3230_;
v___y_3225_ = v___x_3232_;
v___y_3226_ = v___y_3229_;
v___y_3227_ = v___x_3236_;
goto v___jp_3223_;
}
else
{
v___y_3224_ = v___y_3230_;
v___y_3225_ = v___x_3232_;
v___y_3226_ = v___y_3229_;
v___y_3227_ = v___x_3234_;
goto v___jp_3223_;
}
}
v___jp_3237_:
{
uint32_t v___x_3240_; uint8_t v___x_3241_; 
v___x_3240_ = 48;
v___x_3241_ = lean_uint32_dec_le(v___x_3240_, v_c_3215_);
if (v___x_3241_ == 0)
{
v___y_3229_ = v___y_3239_;
v___y_3230_ = v___x_3241_;
goto v___jp_3228_;
}
else
{
uint32_t v___x_3242_; uint8_t v___x_3243_; 
v___x_3242_ = 57;
v___x_3243_ = lean_uint32_dec_le(v_c_3215_, v___x_3242_);
if (v___x_3243_ == 0)
{
v___y_3229_ = v___y_3239_;
v___y_3230_ = v___x_3243_;
goto v___jp_3228_;
}
else
{
v___y_3229_ = v___y_3239_;
v___y_3230_ = v___y_3238_;
goto v___jp_3228_;
}
}
}
v___jp_3244_:
{
uint8_t v___x_3245_; 
v___x_3245_ = 1;
v___y_3238_ = v___x_3245_;
v___y_3239_ = v___x_3245_;
goto v___jp_3237_;
}
v___jp_3246_:
{
uint8_t v___x_3248_; 
v___x_3248_ = 1;
v___y_3238_ = v___x_3248_;
v___y_3239_ = v___y_3247_;
goto v___jp_3237_;
}
v___jp_3249_:
{
uint32_t v___x_3250_; uint8_t v___x_3251_; 
v___x_3250_ = 97;
v___x_3251_ = lean_uint32_dec_le(v___x_3250_, v_c_3215_);
if (v___x_3251_ == 0)
{
v___y_3247_ = v___x_3251_;
goto v___jp_3246_;
}
else
{
uint32_t v___x_3252_; uint8_t v___x_3253_; 
v___x_3252_ = 122;
v___x_3253_ = lean_uint32_dec_le(v_c_3215_, v___x_3252_);
if (v___x_3253_ == 0)
{
v___y_3247_ = v___x_3253_;
goto v___jp_3246_;
}
else
{
goto v___jp_3244_;
}
}
}
}
else
{
lean_object* v___x_3258_; 
v___x_3258_ = lean_box(0);
lean_inc(v_snd_3205_);
v_pos_3207_ = v_a_3198_;
v_snd_3208_ = v_snd_3205_;
v_err_3209_ = v___x_3258_;
goto v___jp_3206_;
}
v___jp_3199_:
{
lean_object* v___x_3202_; lean_object* v___x_3203_; 
v___x_3202_ = lean_string_push(v_acc_3197_, v_res_3201_);
v___x_3203_ = l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier_spec__0_spec__0(v___x_3202_, v_pos_3200_);
return v___x_3203_;
}
v___jp_3206_:
{
uint8_t v_decide_3210_; 
v_decide_3210_ = lean_nat_dec_eq(v_snd_3205_, v_snd_3208_);
lean_dec(v_snd_3208_);
lean_dec(v_snd_3205_);
if (v_decide_3210_ == 0)
{
lean_object* v___x_3211_; 
lean_dec_ref(v_acc_3197_);
lean_inc(v_err_3209_);
v___x_3211_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3211_, 0, v_pos_3207_);
lean_ctor_set(v___x_3211_, 1, v_err_3209_);
return v___x_3211_;
}
else
{
lean_object* v___x_3212_; 
v___x_3212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3212_, 0, v_pos_3207_);
lean_ctor_set(v___x_3212_, 1, v_acc_3197_);
return v___x_3212_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier(lean_object* v_a_3259_){
_start:
{
lean_object* v_fst_3260_; lean_object* v_snd_3261_; lean_object* v___x_3262_; uint8_t v___x_3263_; 
v_fst_3260_ = lean_ctor_get(v_a_3259_, 0);
v_snd_3261_ = lean_ctor_get(v_a_3259_, 1);
v___x_3262_ = lean_string_utf8_byte_size(v_fst_3260_);
v___x_3263_ = lean_nat_dec_eq(v_snd_3261_, v___x_3262_);
if (v___x_3263_ == 0)
{
uint32_t v_c_3264_; lean_object* v___x_3265_; uint8_t v___y_3272_; uint8_t v___y_3273_; uint8_t v___y_3274_; uint8_t v___y_3278_; uint8_t v___y_3279_; uint8_t v___y_3280_; uint8_t v___y_3281_; uint8_t v___y_3283_; uint8_t v___y_3284_; uint8_t v___y_3292_; uint8_t v___y_3293_; uint8_t v___y_3299_; uint32_t v___x_3308_; uint8_t v___x_3309_; 
v_c_3264_ = lean_string_utf8_get_fast(v_fst_3260_, v_snd_3261_);
v___x_3265_ = lean_string_utf8_next_fast(v_fst_3260_, v_snd_3261_);
v___x_3308_ = 65;
v___x_3309_ = lean_uint32_dec_le(v___x_3308_, v_c_3264_);
if (v___x_3309_ == 0)
{
goto v___jp_3303_;
}
else
{
uint32_t v___x_3310_; uint8_t v___x_3311_; 
v___x_3310_ = 90;
v___x_3311_ = lean_uint32_dec_le(v_c_3264_, v___x_3310_);
if (v___x_3311_ == 0)
{
goto v___jp_3303_;
}
else
{
goto v___jp_3301_;
}
}
v___jp_3266_:
{
lean_object* v_it_x27_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; 
v_it_x27_3267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_3267_, 0, v_fst_3260_);
lean_ctor_set(v_it_x27_3267_, 1, v___x_3265_);
v___x_3268_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_3269_ = lean_string_push(v___x_3268_, v_c_3264_);
v___x_3270_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier_spec__0(v___x_3269_, v_it_x27_3267_);
return v___x_3270_;
}
v___jp_3271_:
{
if (v___y_3273_ == 0)
{
if (v___y_3272_ == 0)
{
if (v___y_3274_ == 0)
{
lean_object* v___x_3275_; lean_object* v___x_3276_; 
v___x_3275_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_3276_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3276_, 0, v_a_3259_);
lean_ctor_set(v___x_3276_, 1, v___x_3275_);
return v___x_3276_;
}
else
{
lean_inc(v_fst_3260_);
lean_dec_ref(v_a_3259_);
goto v___jp_3266_;
}
}
else
{
lean_inc(v_fst_3260_);
lean_dec_ref(v_a_3259_);
goto v___jp_3266_;
}
}
else
{
lean_inc(v_fst_3260_);
lean_dec_ref(v_a_3259_);
goto v___jp_3266_;
}
}
v___jp_3277_:
{
if (v___y_3279_ == 0)
{
v___y_3272_ = v___y_3278_;
v___y_3273_ = v___y_3280_;
v___y_3274_ = v___y_3281_;
goto v___jp_3271_;
}
else
{
v___y_3272_ = v___y_3278_;
v___y_3273_ = v___y_3280_;
v___y_3274_ = v___y_3279_;
goto v___jp_3271_;
}
}
v___jp_3282_:
{
uint32_t v___x_3285_; uint8_t v___x_3286_; uint32_t v___x_3287_; uint8_t v___x_3288_; 
v___x_3285_ = 95;
v___x_3286_ = lean_uint32_dec_eq(v_c_3264_, v___x_3285_);
v___x_3287_ = 45;
v___x_3288_ = lean_uint32_dec_eq(v_c_3264_, v___x_3287_);
if (v___x_3288_ == 0)
{
uint32_t v___x_3289_; uint8_t v___x_3290_; 
v___x_3289_ = 47;
v___x_3290_ = lean_uint32_dec_eq(v_c_3264_, v___x_3289_);
v___y_3278_ = v___y_3283_;
v___y_3279_ = v___x_3286_;
v___y_3280_ = v___y_3284_;
v___y_3281_ = v___x_3290_;
goto v___jp_3277_;
}
else
{
v___y_3278_ = v___y_3283_;
v___y_3279_ = v___x_3286_;
v___y_3280_ = v___y_3284_;
v___y_3281_ = v___x_3288_;
goto v___jp_3277_;
}
}
v___jp_3291_:
{
uint32_t v___x_3294_; uint8_t v___x_3295_; 
v___x_3294_ = 48;
v___x_3295_ = lean_uint32_dec_le(v___x_3294_, v_c_3264_);
if (v___x_3295_ == 0)
{
v___y_3283_ = v___y_3293_;
v___y_3284_ = v___x_3295_;
goto v___jp_3282_;
}
else
{
uint32_t v___x_3296_; uint8_t v___x_3297_; 
v___x_3296_ = 57;
v___x_3297_ = lean_uint32_dec_le(v_c_3264_, v___x_3296_);
if (v___x_3297_ == 0)
{
v___y_3283_ = v___y_3293_;
v___y_3284_ = v___x_3297_;
goto v___jp_3282_;
}
else
{
v___y_3283_ = v___y_3293_;
v___y_3284_ = v___y_3292_;
goto v___jp_3282_;
}
}
}
v___jp_3298_:
{
uint8_t v___x_3300_; 
v___x_3300_ = 1;
v___y_3292_ = v___x_3300_;
v___y_3293_ = v___y_3299_;
goto v___jp_3291_;
}
v___jp_3301_:
{
uint8_t v___x_3302_; 
v___x_3302_ = 1;
v___y_3292_ = v___x_3302_;
v___y_3293_ = v___x_3302_;
goto v___jp_3291_;
}
v___jp_3303_:
{
uint32_t v___x_3304_; uint8_t v___x_3305_; 
v___x_3304_ = 97;
v___x_3305_ = lean_uint32_dec_le(v___x_3304_, v_c_3264_);
if (v___x_3305_ == 0)
{
v___y_3299_ = v___x_3305_;
goto v___jp_3298_;
}
else
{
uint32_t v___x_3306_; uint8_t v___x_3307_; 
v___x_3306_ = 122;
v___x_3307_ = lean_uint32_dec_le(v_c_3264_, v___x_3306_);
if (v___x_3307_ == 0)
{
v___y_3299_ = v___x_3307_;
goto v___jp_3298_;
}
else
{
goto v___jp_3301_;
}
}
}
}
else
{
lean_object* v___x_3312_; lean_object* v___x_3313_; 
v___x_3312_ = lean_box(0);
v___x_3313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3313_, 0, v_a_3259_);
lean_ctor_set(v___x_3313_, 1, v___x_3312_);
return v___x_3313_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(lean_object* v_n_3316_, lean_object* v_m_3317_, lean_object* v_parser_3318_, lean_object* v_a_3319_){
_start:
{
lean_object* v___x_3320_; 
v___x_3320_ = lean_apply_1(v_parser_3318_, v_a_3319_);
if (lean_obj_tag(v___x_3320_) == 0)
{
lean_object* v_pos_3321_; lean_object* v_res_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3342_; 
v_pos_3321_ = lean_ctor_get(v___x_3320_, 0);
v_res_3322_ = lean_ctor_get(v___x_3320_, 1);
v_isSharedCheck_3342_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3342_ == 0)
{
v___x_3324_ = v___x_3320_;
v_isShared_3325_ = v_isSharedCheck_3342_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_res_3322_);
lean_inc(v_pos_3321_);
lean_dec(v___x_3320_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3342_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
uint8_t v___x_3338_; 
v___x_3338_ = lean_nat_dec_le(v_n_3316_, v_res_3322_);
if (v___x_3338_ == 0)
{
lean_dec(v_res_3322_);
goto v___jp_3326_;
}
else
{
uint8_t v___x_3339_; 
v___x_3339_ = lean_nat_dec_le(v_res_3322_, v_m_3317_);
if (v___x_3339_ == 0)
{
lean_dec(v_res_3322_);
goto v___jp_3326_;
}
else
{
lean_object* v___x_3340_; lean_object* v___x_3341_; 
lean_del_object(v___x_3324_);
lean_dec(v_m_3317_);
lean_dec(v_n_3316_);
v___x_3340_ = lean_nat_to_int(v_res_3322_);
v___x_3341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3341_, 0, v_pos_3321_);
lean_ctor_set(v___x_3341_, 1, v___x_3340_);
return v___x_3341_;
}
}
v___jp_3326_:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3336_; 
v___x_3327_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__0));
v___x_3328_ = l_Nat_reprFast(v_n_3316_);
v___x_3329_ = lean_string_append(v___x_3327_, v___x_3328_);
lean_dec_ref(v___x_3328_);
v___x_3330_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded___closed__1));
v___x_3331_ = lean_string_append(v___x_3329_, v___x_3330_);
v___x_3332_ = l_Nat_reprFast(v_m_3317_);
v___x_3333_ = lean_string_append(v___x_3331_, v___x_3332_);
lean_dec_ref(v___x_3332_);
v___x_3334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3334_, 0, v___x_3333_);
if (v_isShared_3325_ == 0)
{
lean_ctor_set_tag(v___x_3324_, 1);
lean_ctor_set(v___x_3324_, 1, v___x_3334_);
v___x_3336_ = v___x_3324_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v_pos_3321_);
lean_ctor_set(v_reuseFailAlloc_3337_, 1, v___x_3334_);
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
else
{
lean_object* v_pos_3343_; lean_object* v_err_3344_; lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3351_; 
lean_dec(v_m_3317_);
lean_dec(v_n_3316_);
v_pos_3343_ = lean_ctor_get(v___x_3320_, 0);
v_err_3344_ = lean_ctor_get(v___x_3320_, 1);
v_isSharedCheck_3351_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3351_ == 0)
{
v___x_3346_ = v___x_3320_;
v_isShared_3347_ = v_isSharedCheck_3351_;
goto v_resetjp_3345_;
}
else
{
lean_inc(v_err_3344_);
lean_inc(v_pos_3343_);
lean_dec(v___x_3320_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3351_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
lean_object* v___x_3349_; 
if (v_isShared_3347_ == 0)
{
v___x_3349_ = v___x_3346_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3350_; 
v_reuseFailAlloc_3350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3350_, 0, v_pos_3343_);
lean_ctor_set(v_reuseFailAlloc_3350_, 1, v_err_3344_);
v___x_3349_ = v_reuseFailAlloc_3350_;
goto v_reusejp_3348_;
}
v_reusejp_3348_:
{
return v___x_3349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOneOrTwoNum(lean_object* v_a_3352_){
_start:
{
lean_object* v_fst_3356_; lean_object* v_snd_3357_; lean_object* v___x_3358_; uint8_t v___x_3359_; 
v_fst_3356_ = lean_ctor_get(v_a_3352_, 0);
v_snd_3357_ = lean_ctor_get(v_a_3352_, 1);
v___x_3358_ = lean_string_utf8_byte_size(v_fst_3356_);
v___x_3359_ = lean_nat_dec_eq(v_snd_3357_, v___x_3358_);
if (v___x_3359_ == 0)
{
uint32_t v_c_3360_; uint32_t v___x_3361_; uint8_t v___x_3362_; 
v_c_3360_ = lean_string_utf8_get_fast(v_fst_3356_, v_snd_3357_);
v___x_3361_ = 48;
v___x_3362_ = lean_uint32_dec_le(v___x_3361_, v_c_3360_);
if (v___x_3362_ == 0)
{
goto v___jp_3353_;
}
else
{
uint32_t v___x_3363_; uint8_t v___x_3364_; 
v___x_3363_ = 57;
v___x_3364_ = lean_uint32_dec_le(v_c_3360_, v___x_3363_);
if (v___x_3364_ == 0)
{
goto v___jp_3353_;
}
else
{
lean_object* v___x_3366_; uint8_t v_isShared_3367_; uint8_t v_isSharedCheck_3400_; 
lean_inc(v_snd_3357_);
lean_inc(v_fst_3356_);
v_isSharedCheck_3400_ = !lean_is_exclusive(v_a_3352_);
if (v_isSharedCheck_3400_ == 0)
{
lean_object* v_unused_3401_; lean_object* v_unused_3402_; 
v_unused_3401_ = lean_ctor_get(v_a_3352_, 1);
lean_dec(v_unused_3401_);
v_unused_3402_ = lean_ctor_get(v_a_3352_, 0);
lean_dec(v_unused_3402_);
v___x_3366_ = v_a_3352_;
v_isShared_3367_ = v_isSharedCheck_3400_;
goto v_resetjp_3365_;
}
else
{
lean_dec(v_a_3352_);
v___x_3366_ = lean_box(0);
v_isShared_3367_ = v_isSharedCheck_3400_;
goto v_resetjp_3365_;
}
v_resetjp_3365_:
{
lean_object* v___x_3368_; lean_object* v_pos_3370_; lean_object* v_snd_3371_; lean_object* v_err_3372_; lean_object* v_it_x27_3380_; 
v___x_3368_ = lean_string_utf8_next_fast(v_fst_3356_, v_snd_3357_);
lean_dec(v_snd_3357_);
lean_inc(v_fst_3356_);
if (v_isShared_3367_ == 0)
{
lean_ctor_set(v___x_3366_, 1, v___x_3368_);
v_it_x27_3380_ = v___x_3366_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3399_; 
v_reuseFailAlloc_3399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3399_, 0, v_fst_3356_);
lean_ctor_set(v_reuseFailAlloc_3399_, 1, v___x_3368_);
v_it_x27_3380_ = v_reuseFailAlloc_3399_;
goto v_reusejp_3379_;
}
v___jp_3369_:
{
uint8_t v_decide_3373_; 
v_decide_3373_ = lean_nat_dec_eq(v___x_3368_, v_snd_3371_);
lean_dec(v_snd_3371_);
if (v_decide_3373_ == 0)
{
lean_object* v___x_3374_; 
lean_inc(v_err_3372_);
v___x_3374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3374_, 0, v_pos_3370_);
lean_ctor_set(v___x_3374_, 1, v_err_3372_);
return v___x_3374_;
}
else
{
lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; 
v___x_3375_ = lean_uint32_to_nat(v_c_3360_);
v___x_3376_ = lean_unsigned_to_nat(48u);
v___x_3377_ = lean_nat_sub(v___x_3375_, v___x_3376_);
lean_dec(v___x_3375_);
v___x_3378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3378_, 0, v_pos_3370_);
lean_ctor_set(v___x_3378_, 1, v___x_3377_);
return v___x_3378_;
}
}
v_reusejp_3379_:
{
uint8_t v___x_3383_; 
v___x_3383_ = lean_nat_dec_eq(v___x_3368_, v___x_3358_);
if (v___x_3383_ == 0)
{
uint32_t v___x_3384_; uint8_t v___x_3385_; 
v___x_3384_ = lean_string_utf8_get_fast(v_fst_3356_, v___x_3368_);
v___x_3385_ = lean_uint32_dec_le(v___x_3361_, v___x_3384_);
if (v___x_3385_ == 0)
{
lean_dec(v_fst_3356_);
goto v___jp_3381_;
}
else
{
uint8_t v___x_3386_; 
v___x_3386_ = lean_uint32_dec_le(v___x_3384_, v___x_3363_);
if (v___x_3386_ == 0)
{
lean_dec(v_fst_3356_);
goto v___jp_3381_;
}
else
{
lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; 
lean_dec_ref(v_it_x27_3380_);
v___x_3387_ = lean_unsigned_to_nat(48u);
v___x_3388_ = lean_string_utf8_next_fast(v_fst_3356_, v___x_3368_);
v___x_3389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3389_, 0, v_fst_3356_);
lean_ctor_set(v___x_3389_, 1, v___x_3388_);
v___x_3390_ = lean_uint32_to_nat(v_c_3360_);
v___x_3391_ = lean_nat_sub(v___x_3390_, v___x_3387_);
lean_dec(v___x_3390_);
v___x_3392_ = lean_unsigned_to_nat(10u);
v___x_3393_ = lean_nat_mul(v___x_3391_, v___x_3392_);
lean_dec(v___x_3391_);
v___x_3394_ = lean_uint32_to_nat(v___x_3384_);
v___x_3395_ = lean_nat_sub(v___x_3394_, v___x_3387_);
lean_dec(v___x_3394_);
v___x_3396_ = lean_nat_add(v___x_3393_, v___x_3395_);
lean_dec(v___x_3395_);
lean_dec(v___x_3393_);
v___x_3397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3397_, 0, v___x_3389_);
lean_ctor_set(v___x_3397_, 1, v___x_3396_);
return v___x_3397_;
}
}
}
else
{
lean_object* v___x_3398_; 
lean_dec(v_fst_3356_);
v___x_3398_ = lean_box(0);
v_pos_3370_ = v_it_x27_3380_;
v_snd_3371_ = v___x_3368_;
v_err_3372_ = v___x_3398_;
goto v___jp_3369_;
}
v___jp_3381_:
{
lean_object* v___x_3382_; 
v___x_3382_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v_pos_3370_ = v_it_x27_3380_;
v_snd_3371_ = v___x_3368_;
v_err_3372_ = v___x_3382_;
goto v___jp_3369_;
}
}
}
}
}
}
else
{
lean_object* v___x_3403_; lean_object* v___x_3404_; 
v___x_3403_ = lean_box(0);
v___x_3404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3404_, 0, v_a_3352_);
lean_ctor_set(v___x_3404_, 1, v___x_3403_);
return v___x_3404_;
}
v___jp_3353_:
{
lean_object* v___x_3354_; lean_object* v___x_3355_; 
v___x_3354_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart_spec__0_spec__0___closed__1));
v___x_3355_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3355_, 0, v_a_3352_);
lean_ctor_set(v___x_3355_, 1, v___x_3354_);
return v___x_3355_;
}
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1(void){
_start:
{
uint32_t v___x_3408_; lean_object* v___x_3409_; 
v___x_3408_ = 58;
v___x_3409_ = lean_box_uint32(v___x_3408_);
return v___x_3409_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0(uint8_t v_withColon_3410_, lean_object* v___y_3411_){
_start:
{
if (v_withColon_3410_ == 0)
{
lean_object* v___x_3412_; lean_object* v___x_3413_; 
v___x_3412_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1;
v___x_3413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3413_, 0, v___y_3411_);
lean_ctor_set(v___x_3413_, 1, v___x_3412_);
return v___x_3413_;
}
else
{
lean_object* v_fst_3414_; lean_object* v_snd_3415_; lean_object* v___x_3416_; uint8_t v___x_3417_; 
v_fst_3414_ = lean_ctor_get(v___y_3411_, 0);
v_snd_3415_ = lean_ctor_get(v___y_3411_, 1);
v___x_3416_ = lean_string_utf8_byte_size(v_fst_3414_);
v___x_3417_ = lean_nat_dec_eq(v_snd_3415_, v___x_3416_);
if (v___x_3417_ == 0)
{
uint32_t v___x_3418_; uint32_t v_c_3419_; uint8_t v___x_3420_; 
v___x_3418_ = 58;
v_c_3419_ = lean_string_utf8_get_fast(v_fst_3414_, v_snd_3415_);
v___x_3420_ = lean_uint32_dec_eq(v_c_3419_, v___x_3418_);
if (v___x_3420_ == 0)
{
lean_object* v___x_3421_; lean_object* v___x_3422_; 
v___x_3421_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___closed__1));
v___x_3422_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3422_, 0, v___y_3411_);
lean_ctor_set(v___x_3422_, 1, v___x_3421_);
return v___x_3422_;
}
else
{
lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3432_; 
lean_inc(v_snd_3415_);
lean_inc(v_fst_3414_);
v_isSharedCheck_3432_ = !lean_is_exclusive(v___y_3411_);
if (v_isSharedCheck_3432_ == 0)
{
lean_object* v_unused_3433_; lean_object* v_unused_3434_; 
v_unused_3433_ = lean_ctor_get(v___y_3411_, 1);
lean_dec(v_unused_3433_);
v_unused_3434_ = lean_ctor_get(v___y_3411_, 0);
lean_dec(v_unused_3434_);
v___x_3424_ = v___y_3411_;
v_isShared_3425_ = v_isSharedCheck_3432_;
goto v_resetjp_3423_;
}
else
{
lean_dec(v___y_3411_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3432_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v___x_3426_; lean_object* v_it_x27_3428_; 
v___x_3426_ = lean_string_utf8_next_fast(v_fst_3414_, v_snd_3415_);
lean_dec(v_snd_3415_);
if (v_isShared_3425_ == 0)
{
lean_ctor_set(v___x_3424_, 1, v___x_3426_);
v_it_x27_3428_ = v___x_3424_;
goto v_reusejp_3427_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v_fst_3414_);
lean_ctor_set(v_reuseFailAlloc_3431_, 1, v___x_3426_);
v_it_x27_3428_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3427_;
}
v_reusejp_3427_:
{
lean_object* v___x_3429_; lean_object* v___x_3430_; 
v___x_3429_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed__const__1;
v___x_3430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3430_, 0, v_it_x27_3428_);
lean_ctor_set(v___x_3430_, 1, v___x_3429_);
return v___x_3430_;
}
}
}
}
else
{
lean_object* v___x_3435_; lean_object* v___x_3436_; 
v___x_3435_ = lean_box(0);
v___x_3436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3436_, 0, v___y_3411_);
lean_ctor_set(v___x_3436_, 1, v___x_3435_);
return v___x_3436_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed(lean_object* v_withColon_3437_, lean_object* v___y_3438_){
_start:
{
uint8_t v_withColon_boxed_3439_; lean_object* v_res_3440_; 
v_withColon_boxed_3439_ = lean_unbox(v_withColon_3437_);
v_res_3440_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0(v_withColon_boxed_3439_, v___y_3438_);
return v_res_3440_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__1(lean_object* v_a_3441_, lean_object* v___y_3442_){
_start:
{
lean_object* v___x_3443_; lean_object* v___x_3444_; 
v___x_3443_ = lean_nat_to_int(v_a_3441_);
v___x_3444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3444_, 0, v___y_3442_);
lean_ctor_set(v___x_3444_, 1, v___x_3443_);
return v___x_3444_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2(lean_object* v___y_3445_, lean_object* v___f_3446_, lean_object* v_n_3447_, uint8_t v_reason_3448_, lean_object* v___y_3449_){
_start:
{
lean_object* v_pos_3451_; lean_object* v_err_3452_; 
switch(v_reason_3448_)
{
case 0:
{
lean_object* v___x_3468_; 
v___x_3468_ = lean_apply_1(v___y_3445_, v___y_3449_);
if (lean_obj_tag(v___x_3468_) == 0)
{
lean_object* v_pos_3469_; lean_object* v___x_3470_; 
v_pos_3469_ = lean_ctor_get(v___x_3468_, 0);
lean_inc(v_pos_3469_);
lean_dec_ref_known(v___x_3468_, 2);
v___x_3470_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOneOrTwoNum(v_pos_3469_);
if (lean_obj_tag(v___x_3470_) == 0)
{
lean_object* v_pos_3471_; lean_object* v_res_3472_; lean_object* v___x_3473_; 
v_pos_3471_ = lean_ctor_get(v___x_3470_, 0);
lean_inc(v_pos_3471_);
v_res_3472_ = lean_ctor_get(v___x_3470_, 1);
lean_inc(v_res_3472_);
lean_dec_ref_known(v___x_3470_, 2);
v___x_3473_ = lean_apply_2(v___f_3446_, v_res_3472_, v_pos_3471_);
if (lean_obj_tag(v___x_3473_) == 0)
{
lean_object* v_pos_3474_; lean_object* v_res_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3483_; 
v_pos_3474_ = lean_ctor_get(v___x_3473_, 0);
v_res_3475_ = lean_ctor_get(v___x_3473_, 1);
v_isSharedCheck_3483_ = !lean_is_exclusive(v___x_3473_);
if (v_isSharedCheck_3483_ == 0)
{
v___x_3477_ = v___x_3473_;
v_isShared_3478_ = v_isSharedCheck_3483_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_res_3475_);
lean_inc(v_pos_3474_);
lean_dec(v___x_3473_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3483_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
lean_object* v___x_3479_; lean_object* v___x_3481_; 
v___x_3479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3479_, 0, v_res_3475_);
if (v_isShared_3478_ == 0)
{
lean_ctor_set(v___x_3477_, 1, v___x_3479_);
v___x_3481_ = v___x_3477_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v_pos_3474_);
lean_ctor_set(v_reuseFailAlloc_3482_, 1, v___x_3479_);
v___x_3481_ = v_reuseFailAlloc_3482_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
return v___x_3481_;
}
}
}
else
{
lean_object* v_pos_3484_; lean_object* v_err_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3492_; 
v_pos_3484_ = lean_ctor_get(v___x_3473_, 0);
v_err_3485_ = lean_ctor_get(v___x_3473_, 1);
v_isSharedCheck_3492_ = !lean_is_exclusive(v___x_3473_);
if (v_isSharedCheck_3492_ == 0)
{
v___x_3487_ = v___x_3473_;
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_err_3485_);
lean_inc(v_pos_3484_);
lean_dec(v___x_3473_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3490_; 
if (v_isShared_3488_ == 0)
{
v___x_3490_ = v___x_3487_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v_pos_3484_);
lean_ctor_set(v_reuseFailAlloc_3491_, 1, v_err_3485_);
v___x_3490_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
return v___x_3490_;
}
}
}
}
else
{
lean_object* v_pos_3493_; lean_object* v_err_3494_; lean_object* v___x_3496_; uint8_t v_isShared_3497_; uint8_t v_isSharedCheck_3501_; 
lean_dec_ref(v___f_3446_);
v_pos_3493_ = lean_ctor_get(v___x_3470_, 0);
v_err_3494_ = lean_ctor_get(v___x_3470_, 1);
v_isSharedCheck_3501_ = !lean_is_exclusive(v___x_3470_);
if (v_isSharedCheck_3501_ == 0)
{
v___x_3496_ = v___x_3470_;
v_isShared_3497_ = v_isSharedCheck_3501_;
goto v_resetjp_3495_;
}
else
{
lean_inc(v_err_3494_);
lean_inc(v_pos_3493_);
lean_dec(v___x_3470_);
v___x_3496_ = lean_box(0);
v_isShared_3497_ = v_isSharedCheck_3501_;
goto v_resetjp_3495_;
}
v_resetjp_3495_:
{
lean_object* v___x_3499_; 
if (v_isShared_3497_ == 0)
{
v___x_3499_ = v___x_3496_;
goto v_reusejp_3498_;
}
else
{
lean_object* v_reuseFailAlloc_3500_; 
v_reuseFailAlloc_3500_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3500_, 0, v_pos_3493_);
lean_ctor_set(v_reuseFailAlloc_3500_, 1, v_err_3494_);
v___x_3499_ = v_reuseFailAlloc_3500_;
goto v_reusejp_3498_;
}
v_reusejp_3498_:
{
return v___x_3499_;
}
}
}
}
else
{
lean_object* v_pos_3502_; lean_object* v_err_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3510_; 
lean_dec_ref(v___f_3446_);
v_pos_3502_ = lean_ctor_get(v___x_3468_, 0);
v_err_3503_ = lean_ctor_get(v___x_3468_, 1);
v_isSharedCheck_3510_ = !lean_is_exclusive(v___x_3468_);
if (v_isSharedCheck_3510_ == 0)
{
v___x_3505_ = v___x_3468_;
v_isShared_3506_ = v_isSharedCheck_3510_;
goto v_resetjp_3504_;
}
else
{
lean_inc(v_err_3503_);
lean_inc(v_pos_3502_);
lean_dec(v___x_3468_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3510_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v___x_3508_; 
if (v_isShared_3506_ == 0)
{
v___x_3508_ = v___x_3505_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v_pos_3502_);
lean_ctor_set(v_reuseFailAlloc_3509_, 1, v_err_3503_);
v___x_3508_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
return v___x_3508_;
}
}
}
}
case 1:
{
lean_object* v___x_3511_; lean_object* v___x_3512_; 
lean_dec_ref(v___f_3446_);
lean_dec_ref(v___y_3445_);
v___x_3511_ = lean_box(0);
v___x_3512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3512_, 0, v___y_3449_);
lean_ctor_set(v___x_3512_, 1, v___x_3511_);
return v___x_3512_;
}
default: 
{
lean_object* v___x_3513_; 
lean_inc_ref(v___y_3449_);
v___x_3513_ = lean_apply_1(v___y_3445_, v___y_3449_);
if (lean_obj_tag(v___x_3513_) == 0)
{
lean_object* v_pos_3514_; lean_object* v___x_3515_; 
v_pos_3514_ = lean_ctor_get(v___x_3513_, 0);
lean_inc(v_pos_3514_);
lean_dec_ref_known(v___x_3513_, 2);
v___x_3515_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOneOrTwoNum(v_pos_3514_);
if (lean_obj_tag(v___x_3515_) == 0)
{
lean_object* v_pos_3516_; lean_object* v_res_3517_; lean_object* v___x_3518_; 
v_pos_3516_ = lean_ctor_get(v___x_3515_, 0);
lean_inc(v_pos_3516_);
v_res_3517_ = lean_ctor_get(v___x_3515_, 1);
lean_inc(v_res_3517_);
lean_dec_ref_known(v___x_3515_, 2);
v___x_3518_ = lean_apply_2(v___f_3446_, v_res_3517_, v_pos_3516_);
if (lean_obj_tag(v___x_3518_) == 0)
{
lean_object* v_pos_3519_; lean_object* v_res_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3528_; 
lean_dec_ref(v___y_3449_);
v_pos_3519_ = lean_ctor_get(v___x_3518_, 0);
v_res_3520_ = lean_ctor_get(v___x_3518_, 1);
v_isSharedCheck_3528_ = !lean_is_exclusive(v___x_3518_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3522_ = v___x_3518_;
v_isShared_3523_ = v_isSharedCheck_3528_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_res_3520_);
lean_inc(v_pos_3519_);
lean_dec(v___x_3518_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3528_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v___x_3524_; lean_object* v___x_3526_; 
v___x_3524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3524_, 0, v_res_3520_);
if (v_isShared_3523_ == 0)
{
lean_ctor_set(v___x_3522_, 1, v___x_3524_);
v___x_3526_ = v___x_3522_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_pos_3519_);
lean_ctor_set(v_reuseFailAlloc_3527_, 1, v___x_3524_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
return v___x_3526_;
}
}
}
else
{
lean_object* v_pos_3529_; lean_object* v_err_3530_; 
v_pos_3529_ = lean_ctor_get(v___x_3518_, 0);
lean_inc(v_pos_3529_);
v_err_3530_ = lean_ctor_get(v___x_3518_, 1);
lean_inc(v_err_3530_);
lean_dec_ref_known(v___x_3518_, 2);
v_pos_3451_ = v_pos_3529_;
v_err_3452_ = v_err_3530_;
goto v___jp_3450_;
}
}
else
{
lean_object* v_pos_3531_; lean_object* v_err_3532_; 
lean_dec_ref(v___f_3446_);
v_pos_3531_ = lean_ctor_get(v___x_3515_, 0);
lean_inc(v_pos_3531_);
v_err_3532_ = lean_ctor_get(v___x_3515_, 1);
lean_inc(v_err_3532_);
lean_dec_ref_known(v___x_3515_, 2);
v_pos_3451_ = v_pos_3531_;
v_err_3452_ = v_err_3532_;
goto v___jp_3450_;
}
}
else
{
lean_object* v_pos_3533_; lean_object* v_err_3534_; 
lean_dec_ref(v___f_3446_);
v_pos_3533_ = lean_ctor_get(v___x_3513_, 0);
lean_inc(v_pos_3533_);
v_err_3534_ = lean_ctor_get(v___x_3513_, 1);
lean_inc(v_err_3534_);
lean_dec_ref_known(v___x_3513_, 2);
v_pos_3451_ = v_pos_3533_;
v_err_3452_ = v_err_3534_;
goto v___jp_3450_;
}
}
}
v___jp_3450_:
{
lean_object* v_snd_3453_; lean_object* v___x_3455_; uint8_t v_isShared_3456_; uint8_t v_isSharedCheck_3466_; 
v_snd_3453_ = lean_ctor_get(v___y_3449_, 1);
v_isSharedCheck_3466_ = !lean_is_exclusive(v___y_3449_);
if (v_isSharedCheck_3466_ == 0)
{
lean_object* v_unused_3467_; 
v_unused_3467_ = lean_ctor_get(v___y_3449_, 0);
lean_dec(v_unused_3467_);
v___x_3455_ = v___y_3449_;
v_isShared_3456_ = v_isSharedCheck_3466_;
goto v_resetjp_3454_;
}
else
{
lean_inc(v_snd_3453_);
lean_dec(v___y_3449_);
v___x_3455_ = lean_box(0);
v_isShared_3456_ = v_isSharedCheck_3466_;
goto v_resetjp_3454_;
}
v_resetjp_3454_:
{
lean_object* v_snd_3457_; uint8_t v_decide_3458_; 
v_snd_3457_ = lean_ctor_get(v_pos_3451_, 1);
v_decide_3458_ = lean_nat_dec_eq(v_snd_3453_, v_snd_3457_);
lean_dec(v_snd_3453_);
if (v_decide_3458_ == 0)
{
lean_object* v___x_3460_; 
if (v_isShared_3456_ == 0)
{
lean_ctor_set_tag(v___x_3455_, 1);
lean_ctor_set(v___x_3455_, 1, v_err_3452_);
lean_ctor_set(v___x_3455_, 0, v_pos_3451_);
v___x_3460_ = v___x_3455_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_pos_3451_);
lean_ctor_set(v_reuseFailAlloc_3461_, 1, v_err_3452_);
v___x_3460_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
return v___x_3460_;
}
}
else
{
lean_object* v___x_3462_; lean_object* v___x_3464_; 
lean_dec(v_err_3452_);
v___x_3462_ = lean_box(0);
if (v_isShared_3456_ == 0)
{
lean_ctor_set(v___x_3455_, 1, v___x_3462_);
lean_ctor_set(v___x_3455_, 0, v_pos_3451_);
v___x_3464_ = v___x_3455_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v_pos_3451_);
lean_ctor_set(v_reuseFailAlloc_3465_, 1, v___x_3462_);
v___x_3464_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
return v___x_3464_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2___boxed(lean_object* v___y_3535_, lean_object* v___f_3536_, lean_object* v_n_3537_, lean_object* v_reason_3538_, lean_object* v___y_3539_){
_start:
{
uint8_t v_reason_boxed_3540_; lean_object* v_res_3541_; 
v_reason_boxed_3540_ = lean_unbox(v_reason_3538_);
v_res_3541_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2(v___y_3535_, v___f_3536_, v_n_3537_, v_reason_boxed_3540_, v___y_3539_);
lean_dec_ref(v_n_3537_);
return v_res_3541_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__2(void){
_start:
{
lean_object* v___x_3544_; lean_object* v___x_3545_; 
v___x_3544_ = lean_unsigned_to_nat(3600u);
v___x_3545_ = lean_nat_to_int(v___x_3544_);
return v___x_3545_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__4(void){
_start:
{
lean_object* v___x_3547_; lean_object* v___x_3548_; 
v___x_3547_ = lean_unsigned_to_nat(1u);
v___x_3548_ = l_Nat_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_toIsoString_spec__0(v___x_3547_);
return v___x_3548_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5(void){
_start:
{
lean_object* v___x_3549_; lean_object* v___x_3550_; 
v___x_3549_ = lean_unsigned_to_nat(59u);
v___x_3550_ = lean_nat_to_int(v___x_3549_);
return v___x_3550_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__8(void){
_start:
{
lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3553_ = lean_unsigned_to_nat(23u);
v___x_3554_ = lean_nat_to_int(v___x_3553_);
return v___x_3554_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__9(void){
_start:
{
lean_object* v___x_3555_; lean_object* v___x_3556_; 
v___x_3555_ = lean_unsigned_to_nat(60u);
v___x_3556_ = l_Nat_cast___at___00__private_Std_Time_Format_Basic_0__Std_Time_toIsoString_spec__0(v___x_3555_);
return v___x_3556_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(uint8_t v_withMinutes_3564_, uint8_t v_withSeconds_3565_, uint8_t v_withColon_3566_, lean_object* v_a_3567_){
_start:
{
lean_object* v___y_3569_; lean_object* v___y_3570_; lean_object* v___y_3579_; lean_object* v___y_3580_; lean_object* v___y_3581_; lean_object* v___y_3582_; lean_object* v___y_3587_; lean_object* v___y_3588_; lean_object* v___y_3589_; lean_object* v___y_3590_; lean_object* v___y_3591_; lean_object* v___y_3592_; lean_object* v___y_3593_; lean_object* v___y_3599_; lean_object* v___y_3600_; lean_object* v___y_3601_; lean_object* v___y_3602_; lean_object* v___y_3603_; lean_object* v___y_3604_; lean_object* v___y_3605_; lean_object* v_fst_3609_; lean_object* v_snd_3610_; lean_object* v___x_3611_; lean_object* v___y_3612_; lean_object* v___f_3613_; lean_object* v___y_3615_; lean_object* v___y_3616_; lean_object* v___y_3617_; lean_object* v___y_3618_; lean_object* v___y_3619_; lean_object* v___y_3620_; lean_object* v_pos_3660_; lean_object* v_res_3661_; lean_object* v_pos_3719_; lean_object* v_fst_3720_; lean_object* v_snd_3721_; lean_object* v_err_3722_; lean_object* v___x_3737_; uint8_t v___x_3738_; 
v_fst_3609_ = lean_ctor_get(v_a_3567_, 0);
lean_inc(v_fst_3609_);
v_snd_3610_ = lean_ctor_get(v_a_3567_, 1);
lean_inc(v_snd_3610_);
v___x_3611_ = lean_box(v_withColon_3566_);
v___y_3612_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__0___boxed), 2, 1);
lean_closure_set(v___y_3612_, 0, v___x_3611_);
v___f_3613_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__3));
v___x_3737_ = lean_string_utf8_byte_size(v_fst_3609_);
v___x_3738_ = lean_nat_dec_eq(v_snd_3610_, v___x_3737_);
if (v___x_3738_ == 0)
{
uint32_t v___x_3739_; uint32_t v_c_3740_; uint8_t v___x_3741_; 
v___x_3739_ = 43;
v_c_3740_ = lean_string_utf8_get_fast(v_fst_3609_, v_snd_3610_);
v___x_3741_ = lean_uint32_dec_eq(v_c_3740_, v___x_3739_);
if (v___x_3741_ == 0)
{
lean_object* v___x_3742_; 
v___x_3742_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__14));
lean_inc(v_snd_3610_);
v_pos_3719_ = v_a_3567_;
v_fst_3720_ = v_fst_3609_;
v_snd_3721_ = v_snd_3610_;
v_err_3722_ = v___x_3742_;
goto v___jp_3718_;
}
else
{
lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3751_; 
v_isSharedCheck_3751_ = !lean_is_exclusive(v_a_3567_);
if (v_isSharedCheck_3751_ == 0)
{
lean_object* v_unused_3752_; lean_object* v_unused_3753_; 
v_unused_3752_ = lean_ctor_get(v_a_3567_, 1);
lean_dec(v_unused_3752_);
v_unused_3753_ = lean_ctor_get(v_a_3567_, 0);
lean_dec(v_unused_3753_);
v___x_3744_ = v_a_3567_;
v_isShared_3745_ = v_isSharedCheck_3751_;
goto v_resetjp_3743_;
}
else
{
lean_dec(v_a_3567_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3751_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v___x_3746_; lean_object* v_it_x27_3748_; 
v___x_3746_ = lean_string_utf8_next_fast(v_fst_3609_, v_snd_3610_);
lean_dec(v_snd_3610_);
if (v_isShared_3745_ == 0)
{
lean_ctor_set(v___x_3744_, 1, v___x_3746_);
v_it_x27_3748_ = v___x_3744_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3750_; 
v_reuseFailAlloc_3750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3750_, 0, v_fst_3609_);
lean_ctor_set(v_reuseFailAlloc_3750_, 1, v___x_3746_);
v_it_x27_3748_ = v_reuseFailAlloc_3750_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
lean_object* v___x_3749_; 
v___x_3749_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v_pos_3660_ = v_it_x27_3748_;
v_res_3661_ = v___x_3749_;
goto v___jp_3659_;
}
}
}
}
else
{
lean_object* v___x_3754_; 
v___x_3754_ = lean_box(0);
lean_inc(v_snd_3610_);
v_pos_3719_ = v_a_3567_;
v_fst_3720_ = v_fst_3609_;
v_snd_3721_ = v_snd_3610_;
v_err_3722_ = v___x_3754_;
goto v___jp_3718_;
}
v___jp_3568_:
{
lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; 
v___x_3571_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__0));
v___x_3572_ = l_Int_repr(v___y_3569_);
lean_dec(v___y_3569_);
v___x_3573_ = lean_string_append(v___x_3571_, v___x_3572_);
lean_dec_ref(v___x_3572_);
v___x_3574_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__1));
v___x_3575_ = lean_string_append(v___x_3573_, v___x_3574_);
v___x_3576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3576_, 0, v___x_3575_);
v___x_3577_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3577_, 0, v___y_3570_);
lean_ctor_set(v___x_3577_, 1, v___x_3576_);
return v___x_3577_;
}
v___jp_3578_:
{
lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3583_ = lean_int_add(v___y_3580_, v___y_3582_);
lean_dec(v___y_3582_);
lean_dec(v___y_3580_);
v___x_3584_ = lean_int_mul(v___x_3583_, v___y_3581_);
lean_dec(v___x_3583_);
v___x_3585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3585_, 0, v___y_3579_);
lean_ctor_set(v___x_3585_, 1, v___x_3584_);
return v___x_3585_;
}
v___jp_3586_:
{
lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; 
v___x_3594_ = lean_nat_to_int(v___y_3592_);
v___x_3595_ = lean_int_mul(v___y_3593_, v___x_3594_);
lean_dec(v___x_3594_);
lean_dec(v___y_3593_);
v___x_3596_ = lean_int_add(v___y_3587_, v___x_3595_);
lean_dec(v___x_3595_);
lean_dec(v___y_3587_);
if (lean_obj_tag(v___y_3589_) == 0)
{
lean_inc(v___y_3590_);
v___y_3579_ = v___y_3588_;
v___y_3580_ = v___x_3596_;
v___y_3581_ = v___y_3591_;
v___y_3582_ = v___y_3590_;
goto v___jp_3578_;
}
else
{
lean_object* v_val_3597_; 
v_val_3597_ = lean_ctor_get(v___y_3589_, 0);
lean_inc(v_val_3597_);
lean_dec_ref_known(v___y_3589_, 1);
v___y_3579_ = v___y_3588_;
v___y_3580_ = v___x_3596_;
v___y_3581_ = v___y_3591_;
v___y_3582_ = v_val_3597_;
goto v___jp_3578_;
}
}
v___jp_3598_:
{
lean_object* v___x_3606_; lean_object* v___x_3607_; 
v___x_3606_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__2);
v___x_3607_ = lean_int_mul(v___y_3602_, v___x_3606_);
lean_dec(v___y_3602_);
if (lean_obj_tag(v___y_3604_) == 0)
{
lean_inc(v___y_3601_);
v___y_3587_ = v___x_3607_;
v___y_3588_ = v___y_3605_;
v___y_3589_ = v___y_3599_;
v___y_3590_ = v___y_3601_;
v___y_3591_ = v___y_3600_;
v___y_3592_ = v___y_3603_;
v___y_3593_ = v___y_3601_;
goto v___jp_3586_;
}
else
{
lean_object* v_val_3608_; 
v_val_3608_ = lean_ctor_get(v___y_3604_, 0);
lean_inc(v_val_3608_);
lean_dec_ref_known(v___y_3604_, 1);
v___y_3587_ = v___x_3607_;
v___y_3588_ = v___y_3605_;
v___y_3589_ = v___y_3599_;
v___y_3590_ = v___y_3601_;
v___y_3591_ = v___y_3600_;
v___y_3592_ = v___y_3603_;
v___y_3593_ = v_val_3608_;
goto v___jp_3586_;
}
}
v___jp_3614_:
{
lean_object* v___x_3621_; lean_object* v___x_3622_; 
v___x_3621_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__4, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__4_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__4);
v___x_3622_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2(v___y_3612_, v___f_3613_, v___x_3621_, v_withSeconds_3565_, v___y_3620_);
if (lean_obj_tag(v___x_3622_) == 0)
{
lean_object* v_res_3623_; 
v_res_3623_ = lean_ctor_get(v___x_3622_, 1);
lean_inc(v_res_3623_);
if (lean_obj_tag(v_res_3623_) == 1)
{
lean_object* v_pos_3624_; lean_object* v___x_3626_; uint8_t v_isShared_3627_; uint8_t v_isSharedCheck_3647_; 
v_pos_3624_ = lean_ctor_get(v___x_3622_, 0);
v_isSharedCheck_3647_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3647_ == 0)
{
lean_object* v_unused_3648_; 
v_unused_3648_ = lean_ctor_get(v___x_3622_, 1);
lean_dec(v_unused_3648_);
v___x_3626_ = v___x_3622_;
v_isShared_3627_ = v_isSharedCheck_3647_;
goto v_resetjp_3625_;
}
else
{
lean_inc(v_pos_3624_);
lean_dec(v___x_3622_);
v___x_3626_ = lean_box(0);
v_isShared_3627_ = v_isSharedCheck_3647_;
goto v_resetjp_3625_;
}
v_resetjp_3625_:
{
lean_object* v_val_3628_; lean_object* v___x_3629_; uint8_t v___x_3630_; 
v_val_3628_ = lean_ctor_get(v_res_3623_, 0);
v___x_3629_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5);
v___x_3630_ = lean_int_dec_lt(v___x_3629_, v_val_3628_);
if (v___x_3630_ == 0)
{
lean_del_object(v___x_3626_);
v___y_3599_ = v_res_3623_;
v___y_3600_ = v___y_3617_;
v___y_3601_ = v___y_3616_;
v___y_3602_ = v___y_3615_;
v___y_3603_ = v___y_3618_;
v___y_3604_ = v___y_3619_;
v___y_3605_ = v_pos_3624_;
goto v___jp_3598_;
}
else
{
lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3645_; 
lean_inc(v_val_3628_);
lean_dec(v___y_3619_);
lean_dec(v___y_3618_);
lean_dec(v___y_3615_);
v_isSharedCheck_3645_ = !lean_is_exclusive(v_res_3623_);
if (v_isSharedCheck_3645_ == 0)
{
lean_object* v_unused_3646_; 
v_unused_3646_ = lean_ctor_get(v_res_3623_, 0);
lean_dec(v_unused_3646_);
v___x_3632_ = v_res_3623_;
v_isShared_3633_ = v_isSharedCheck_3645_;
goto v_resetjp_3631_;
}
else
{
lean_dec(v_res_3623_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3645_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3640_; 
v___x_3634_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__6));
v___x_3635_ = l_Int_repr(v_val_3628_);
lean_dec(v_val_3628_);
v___x_3636_ = lean_string_append(v___x_3634_, v___x_3635_);
lean_dec_ref(v___x_3635_);
v___x_3637_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__7));
v___x_3638_ = lean_string_append(v___x_3636_, v___x_3637_);
if (v_isShared_3633_ == 0)
{
lean_ctor_set(v___x_3632_, 0, v___x_3638_);
v___x_3640_ = v___x_3632_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3644_; 
v_reuseFailAlloc_3644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3644_, 0, v___x_3638_);
v___x_3640_ = v_reuseFailAlloc_3644_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
lean_object* v___x_3642_; 
if (v_isShared_3627_ == 0)
{
lean_ctor_set_tag(v___x_3626_, 1);
lean_ctor_set(v___x_3626_, 1, v___x_3640_);
v___x_3642_ = v___x_3626_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_pos_3624_);
lean_ctor_set(v_reuseFailAlloc_3643_, 1, v___x_3640_);
v___x_3642_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
return v___x_3642_;
}
}
}
}
}
}
else
{
lean_object* v_pos_3649_; 
v_pos_3649_ = lean_ctor_get(v___x_3622_, 0);
lean_inc(v_pos_3649_);
lean_dec_ref_known(v___x_3622_, 2);
v___y_3599_ = v_res_3623_;
v___y_3600_ = v___y_3617_;
v___y_3601_ = v___y_3616_;
v___y_3602_ = v___y_3615_;
v___y_3603_ = v___y_3618_;
v___y_3604_ = v___y_3619_;
v___y_3605_ = v_pos_3649_;
goto v___jp_3598_;
}
}
else
{
lean_object* v_pos_3650_; lean_object* v_err_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3658_; 
lean_dec(v___y_3619_);
lean_dec(v___y_3618_);
lean_dec(v___y_3615_);
v_pos_3650_ = lean_ctor_get(v___x_3622_, 0);
v_err_3651_ = lean_ctor_get(v___x_3622_, 1);
v_isSharedCheck_3658_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3658_ == 0)
{
v___x_3653_ = v___x_3622_;
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_err_3651_);
lean_inc(v_pos_3650_);
lean_dec(v___x_3622_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3656_; 
if (v_isShared_3654_ == 0)
{
v___x_3656_ = v___x_3653_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v_pos_3650_);
lean_ctor_set(v_reuseFailAlloc_3657_, 1, v_err_3651_);
v___x_3656_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
return v___x_3656_;
}
}
}
}
v___jp_3659_:
{
lean_object* v___x_3662_; 
v___x_3662_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOneOrTwoNum(v_pos_3660_);
if (lean_obj_tag(v___x_3662_) == 0)
{
lean_object* v_pos_3663_; lean_object* v_res_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; uint8_t v___x_3667_; 
v_pos_3663_ = lean_ctor_get(v___x_3662_, 0);
lean_inc(v_pos_3663_);
v_res_3664_ = lean_ctor_get(v___x_3662_, 1);
lean_inc(v_res_3664_);
lean_dec_ref_known(v___x_3662_, 2);
v___x_3665_ = lean_nat_to_int(v_res_3664_);
v___x_3666_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_3667_ = lean_int_dec_lt(v___x_3665_, v___x_3666_);
if (v___x_3667_ == 0)
{
lean_object* v___x_3668_; uint8_t v___x_3669_; 
v___x_3668_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__8, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__8_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__8);
v___x_3669_ = lean_int_dec_lt(v___x_3668_, v___x_3665_);
if (v___x_3669_ == 0)
{
lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; 
v___x_3670_ = lean_unsigned_to_nat(60u);
v___x_3671_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__9, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__9_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__9);
lean_inc_ref(v___y_3612_);
v___x_3672_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___lam__2(v___y_3612_, v___f_3613_, v___x_3671_, v_withMinutes_3564_, v_pos_3663_);
if (lean_obj_tag(v___x_3672_) == 0)
{
lean_object* v_res_3673_; 
v_res_3673_ = lean_ctor_get(v___x_3672_, 1);
lean_inc(v_res_3673_);
if (lean_obj_tag(v_res_3673_) == 1)
{
lean_object* v_pos_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3697_; 
v_pos_3674_ = lean_ctor_get(v___x_3672_, 0);
v_isSharedCheck_3697_ = !lean_is_exclusive(v___x_3672_);
if (v_isSharedCheck_3697_ == 0)
{
lean_object* v_unused_3698_; 
v_unused_3698_ = lean_ctor_get(v___x_3672_, 1);
lean_dec(v_unused_3698_);
v___x_3676_ = v___x_3672_;
v_isShared_3677_ = v_isSharedCheck_3697_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_pos_3674_);
lean_dec(v___x_3672_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3697_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
lean_object* v_val_3678_; lean_object* v___x_3679_; uint8_t v___x_3680_; 
v_val_3678_ = lean_ctor_get(v_res_3673_, 0);
v___x_3679_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5);
v___x_3680_ = lean_int_dec_lt(v___x_3679_, v_val_3678_);
if (v___x_3680_ == 0)
{
lean_del_object(v___x_3676_);
v___y_3615_ = v___x_3665_;
v___y_3616_ = v___x_3666_;
v___y_3617_ = v_res_3661_;
v___y_3618_ = v___x_3670_;
v___y_3619_ = v_res_3673_;
v___y_3620_ = v_pos_3674_;
goto v___jp_3614_;
}
else
{
lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3695_; 
lean_inc(v_val_3678_);
lean_dec(v___x_3665_);
lean_dec_ref(v___y_3612_);
v_isSharedCheck_3695_ = !lean_is_exclusive(v_res_3673_);
if (v_isSharedCheck_3695_ == 0)
{
lean_object* v_unused_3696_; 
v_unused_3696_ = lean_ctor_get(v_res_3673_, 0);
lean_dec(v_unused_3696_);
v___x_3682_ = v_res_3673_;
v_isShared_3683_ = v_isSharedCheck_3695_;
goto v_resetjp_3681_;
}
else
{
lean_dec(v_res_3673_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3695_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3690_; 
v___x_3684_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__10));
v___x_3685_ = l_Int_repr(v_val_3678_);
lean_dec(v_val_3678_);
v___x_3686_ = lean_string_append(v___x_3684_, v___x_3685_);
lean_dec_ref(v___x_3685_);
v___x_3687_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__7));
v___x_3688_ = lean_string_append(v___x_3686_, v___x_3687_);
if (v_isShared_3683_ == 0)
{
lean_ctor_set(v___x_3682_, 0, v___x_3688_);
v___x_3690_ = v___x_3682_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v___x_3688_);
v___x_3690_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
lean_object* v___x_3692_; 
if (v_isShared_3677_ == 0)
{
lean_ctor_set_tag(v___x_3676_, 1);
lean_ctor_set(v___x_3676_, 1, v___x_3690_);
v___x_3692_ = v___x_3676_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3693_, 0, v_pos_3674_);
lean_ctor_set(v_reuseFailAlloc_3693_, 1, v___x_3690_);
v___x_3692_ = v_reuseFailAlloc_3693_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
return v___x_3692_;
}
}
}
}
}
}
else
{
lean_object* v_pos_3699_; 
v_pos_3699_ = lean_ctor_get(v___x_3672_, 0);
lean_inc(v_pos_3699_);
lean_dec_ref_known(v___x_3672_, 2);
v___y_3615_ = v___x_3665_;
v___y_3616_ = v___x_3666_;
v___y_3617_ = v_res_3661_;
v___y_3618_ = v___x_3670_;
v___y_3619_ = v_res_3673_;
v___y_3620_ = v_pos_3699_;
goto v___jp_3614_;
}
}
else
{
lean_object* v_pos_3700_; lean_object* v_err_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3708_; 
lean_dec(v___x_3665_);
lean_dec_ref(v___y_3612_);
v_pos_3700_ = lean_ctor_get(v___x_3672_, 0);
v_err_3701_ = lean_ctor_get(v___x_3672_, 1);
v_isSharedCheck_3708_ = !lean_is_exclusive(v___x_3672_);
if (v_isSharedCheck_3708_ == 0)
{
v___x_3703_ = v___x_3672_;
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_err_3701_);
lean_inc(v_pos_3700_);
lean_dec(v___x_3672_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3706_; 
if (v_isShared_3704_ == 0)
{
v___x_3706_ = v___x_3703_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v_pos_3700_);
lean_ctor_set(v_reuseFailAlloc_3707_, 1, v_err_3701_);
v___x_3706_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
return v___x_3706_;
}
}
}
}
else
{
lean_dec_ref(v___y_3612_);
v___y_3569_ = v___x_3665_;
v___y_3570_ = v_pos_3663_;
goto v___jp_3568_;
}
}
else
{
lean_dec_ref(v___y_3612_);
v___y_3569_ = v___x_3665_;
v___y_3570_ = v_pos_3663_;
goto v___jp_3568_;
}
}
else
{
lean_object* v_pos_3709_; lean_object* v_err_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_3717_; 
lean_dec_ref(v___y_3612_);
v_pos_3709_ = lean_ctor_get(v___x_3662_, 0);
v_err_3710_ = lean_ctor_get(v___x_3662_, 1);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___x_3662_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3712_ = v___x_3662_;
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_err_3710_);
lean_inc(v_pos_3709_);
lean_dec(v___x_3662_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v___x_3715_; 
if (v_isShared_3713_ == 0)
{
v___x_3715_ = v___x_3712_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v_pos_3709_);
lean_ctor_set(v_reuseFailAlloc_3716_, 1, v_err_3710_);
v___x_3715_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
return v___x_3715_;
}
}
}
}
v___jp_3718_:
{
uint8_t v_decide_3723_; 
v_decide_3723_ = lean_nat_dec_eq(v_snd_3610_, v_snd_3721_);
lean_dec(v_snd_3610_);
if (v_decide_3723_ == 0)
{
lean_object* v___x_3724_; 
lean_dec(v_snd_3721_);
lean_dec(v_fst_3720_);
lean_dec_ref(v___y_3612_);
lean_inc(v_err_3722_);
v___x_3724_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3724_, 0, v_pos_3719_);
lean_ctor_set(v___x_3724_, 1, v_err_3722_);
return v___x_3724_;
}
else
{
lean_object* v___x_3725_; uint8_t v___x_3726_; 
v___x_3725_ = lean_string_utf8_byte_size(v_fst_3720_);
v___x_3726_ = lean_nat_dec_eq(v_snd_3721_, v___x_3725_);
if (v___x_3726_ == 0)
{
uint32_t v___x_3727_; uint32_t v_c_3728_; uint8_t v___x_3729_; 
v___x_3727_ = 45;
v_c_3728_ = lean_string_utf8_get_fast(v_fst_3720_, v_snd_3721_);
v___x_3729_ = lean_uint32_dec_eq(v_c_3728_, v___x_3727_);
if (v___x_3729_ == 0)
{
lean_object* v___x_3730_; lean_object* v___x_3731_; 
lean_dec(v_snd_3721_);
lean_dec(v_fst_3720_);
lean_dec_ref(v___y_3612_);
v___x_3730_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__12));
v___x_3731_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3731_, 0, v_pos_3719_);
lean_ctor_set(v___x_3731_, 1, v___x_3730_);
return v___x_3731_;
}
else
{
lean_object* v___x_3732_; lean_object* v_it_x27_3733_; lean_object* v___x_3734_; 
lean_dec_ref(v_pos_3719_);
v___x_3732_ = lean_string_utf8_next_fast(v_fst_3720_, v_snd_3721_);
lean_dec(v_snd_3721_);
v_it_x27_3733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_3733_, 0, v_fst_3720_);
lean_ctor_set(v_it_x27_3733_, 1, v___x_3732_);
v___x_3734_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v_pos_3660_ = v_it_x27_3733_;
v_res_3661_ = v___x_3734_;
goto v___jp_3659_;
}
}
else
{
lean_object* v___x_3735_; lean_object* v___x_3736_; 
lean_dec(v_snd_3721_);
lean_dec(v_fst_3720_);
lean_dec_ref(v___y_3612_);
v___x_3735_ = lean_box(0);
v___x_3736_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3736_, 0, v_pos_3719_);
lean_ctor_set(v___x_3736_, 1, v___x_3735_);
return v___x_3736_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___boxed(lean_object* v_withMinutes_3755_, lean_object* v_withSeconds_3756_, lean_object* v_withColon_3757_, lean_object* v_a_3758_){
_start:
{
uint8_t v_withMinutes_boxed_3759_; uint8_t v_withSeconds_boxed_3760_; uint8_t v_withColon_boxed_3761_; lean_object* v_res_3762_; 
v_withMinutes_boxed_3759_ = lean_unbox(v_withMinutes_3755_);
v_withSeconds_boxed_3760_ = lean_unbox(v_withSeconds_3756_);
v_withColon_boxed_3761_ = lean_unbox(v_withColon_3757_);
v_res_3762_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v_withMinutes_boxed_3759_, v_withSeconds_boxed_3760_, v_withColon_boxed_3761_, v_a_3758_);
return v_res_3762_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1(void){
_start:
{
lean_object* v___x_3765_; lean_object* v___x_3766_; 
v___x_3765_ = lean_unsigned_to_nat(2000u);
v___x_3766_ = lean_nat_to_int(v___x_3765_);
return v___x_3766_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__5(void){
_start:
{
lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; 
v___x_3772_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_3773_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1);
v___x_3774_ = lean_int_sub(v___x_3773_, v___x_3772_);
return v___x_3774_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__6(void){
_start:
{
lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v_range_3777_; 
v___x_3775_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_3776_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__5);
v_range_3777_ = lean_int_add(v___x_3776_, v___x_3775_);
return v_range_3777_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_parseWith(lean_object* v_config_3780_, lean_object* v_x_3781_, lean_object* v_a_3782_){
_start:
{
lean_object* v___y_3784_; lean_object* v___y_3789_; lean_object* v___y_3794_; 
switch(lean_obj_tag(v_x_3781_))
{
case 0:
{
uint8_t v_presentation_3820_; 
v_presentation_3820_ = lean_ctor_get_uint8(v_x_3781_, 0);
lean_dec_ref_known(v_x_3781_, 0);
switch(v_presentation_3820_)
{
case 1:
{
lean_object* v_dateformat_3821_; lean_object* v_symbols_3822_; lean_object* v___x_3823_; 
v_dateformat_3821_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_3821_);
lean_dec_ref(v_config_3780_);
v_symbols_3822_ = lean_ctor_get(v_dateformat_3821_, 1);
lean_inc_ref(v_symbols_3822_);
lean_dec_ref(v_dateformat_3821_);
v___x_3823_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseEraLong(v_symbols_3822_, v_a_3782_);
return v___x_3823_;
}
case 2:
{
lean_object* v_dateformat_3824_; lean_object* v_symbols_3825_; lean_object* v___x_3826_; 
v_dateformat_3824_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_3824_);
lean_dec_ref(v_config_3780_);
v_symbols_3825_ = lean_ctor_get(v_dateformat_3824_, 1);
lean_inc_ref(v_symbols_3825_);
lean_dec_ref(v_dateformat_3824_);
v___x_3826_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseEraNarrow(v_symbols_3825_, v_a_3782_);
return v___x_3826_;
}
default: 
{
lean_object* v_dateformat_3827_; lean_object* v_symbols_3828_; lean_object* v___x_3829_; 
v_dateformat_3827_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_3827_);
lean_dec_ref(v_config_3780_);
v_symbols_3828_ = lean_ctor_get(v_dateformat_3827_, 1);
lean_inc_ref(v_symbols_3828_);
lean_dec_ref(v_dateformat_3827_);
v___x_3829_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseEraShort(v_symbols_3828_, v_a_3782_);
return v___x_3829_;
}
}
}
case 1:
{
lean_object* v_presentation_3830_; 
lean_dec_ref(v_config_3780_);
v_presentation_3830_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_3830_);
lean_dec_ref_known(v_x_3781_, 1);
switch(lean_obj_tag(v_presentation_3830_))
{
case 0:
{
lean_object* v___x_3831_; lean_object* v___x_3832_; 
v___x_3831_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0));
v___x_3832_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(v___x_3831_, v_a_3782_);
return v___x_3832_;
}
case 1:
{
lean_object* v___x_3833_; lean_object* v___x_3834_; 
v___x_3833_ = lean_unsigned_to_nat(2u);
v___x_3834_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v___x_3833_, v_a_3782_);
if (lean_obj_tag(v___x_3834_) == 0)
{
lean_object* v_pos_3835_; lean_object* v_res_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3846_; 
v_pos_3835_ = lean_ctor_get(v___x_3834_, 0);
v_res_3836_ = lean_ctor_get(v___x_3834_, 1);
v_isSharedCheck_3846_ = !lean_is_exclusive(v___x_3834_);
if (v_isSharedCheck_3846_ == 0)
{
v___x_3838_ = v___x_3834_;
v_isShared_3839_ = v_isSharedCheck_3846_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_res_3836_);
lean_inc(v_pos_3835_);
lean_dec(v___x_3834_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3846_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3844_; 
v___x_3840_ = lean_nat_to_int(v_res_3836_);
v___x_3841_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1);
v___x_3842_ = lean_int_add(v___x_3841_, v___x_3840_);
lean_dec(v___x_3840_);
if (v_isShared_3839_ == 0)
{
lean_ctor_set(v___x_3838_, 1, v___x_3842_);
v___x_3844_ = v___x_3838_;
goto v_reusejp_3843_;
}
else
{
lean_object* v_reuseFailAlloc_3845_; 
v_reuseFailAlloc_3845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3845_, 0, v_pos_3835_);
lean_ctor_set(v_reuseFailAlloc_3845_, 1, v___x_3842_);
v___x_3844_ = v_reuseFailAlloc_3845_;
goto v_reusejp_3843_;
}
v_reusejp_3843_:
{
return v___x_3844_;
}
}
}
else
{
lean_object* v_pos_3847_; lean_object* v_err_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3855_; 
v_pos_3847_ = lean_ctor_get(v___x_3834_, 0);
v_err_3848_ = lean_ctor_get(v___x_3834_, 1);
v_isSharedCheck_3855_ = !lean_is_exclusive(v___x_3834_);
if (v_isSharedCheck_3855_ == 0)
{
v___x_3850_ = v___x_3834_;
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_err_3848_);
lean_inc(v_pos_3847_);
lean_dec(v___x_3834_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v___x_3853_; 
if (v_isShared_3851_ == 0)
{
v___x_3853_ = v___x_3850_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v_pos_3847_);
lean_ctor_set(v_reuseFailAlloc_3854_, 1, v_err_3848_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
return v___x_3853_;
}
}
}
}
case 2:
{
lean_object* v___x_3856_; lean_object* v___x_3857_; 
v___x_3856_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__2));
v___x_3857_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(v___x_3856_, v_a_3782_);
return v___x_3857_;
}
default: 
{
lean_object* v_num_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; 
v_num_3858_ = lean_ctor_get(v_presentation_3830_, 0);
lean_inc(v_num_3858_);
lean_dec_ref_known(v_presentation_3830_, 1);
v___x_3859_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___boxed), 2, 1);
lean_closure_set(v___x_3859_, 0, v_num_3858_);
v___x_3860_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(v___x_3859_, v_a_3782_);
return v___x_3860_;
}
}
}
case 2:
{
lean_object* v_presentation_3861_; 
lean_dec_ref(v_config_3780_);
v_presentation_3861_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_3861_);
lean_dec_ref_known(v_x_3781_, 1);
switch(lean_obj_tag(v_presentation_3861_))
{
case 0:
{
lean_object* v___x_3862_; lean_object* v___x_3863_; 
v___x_3862_ = lean_unsigned_to_nat(1u);
v___x_3863_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseAtLeastNum(v___x_3862_, v_a_3782_);
if (lean_obj_tag(v___x_3863_) == 0)
{
lean_object* v_pos_3864_; lean_object* v_res_3865_; lean_object* v___x_3867_; uint8_t v_isShared_3868_; uint8_t v_isSharedCheck_3873_; 
v_pos_3864_ = lean_ctor_get(v___x_3863_, 0);
v_res_3865_ = lean_ctor_get(v___x_3863_, 1);
v_isSharedCheck_3873_ = !lean_is_exclusive(v___x_3863_);
if (v_isSharedCheck_3873_ == 0)
{
v___x_3867_ = v___x_3863_;
v_isShared_3868_ = v_isSharedCheck_3873_;
goto v_resetjp_3866_;
}
else
{
lean_inc(v_res_3865_);
lean_inc(v_pos_3864_);
lean_dec(v___x_3863_);
v___x_3867_ = lean_box(0);
v_isShared_3868_ = v_isSharedCheck_3873_;
goto v_resetjp_3866_;
}
v_resetjp_3866_:
{
lean_object* v___x_3869_; lean_object* v___x_3871_; 
v___x_3869_ = lean_nat_to_int(v_res_3865_);
if (v_isShared_3868_ == 0)
{
lean_ctor_set(v___x_3867_, 1, v___x_3869_);
v___x_3871_ = v___x_3867_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v_pos_3864_);
lean_ctor_set(v_reuseFailAlloc_3872_, 1, v___x_3869_);
v___x_3871_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
return v___x_3871_;
}
}
}
else
{
lean_object* v_pos_3874_; lean_object* v_err_3875_; lean_object* v___x_3877_; uint8_t v_isShared_3878_; uint8_t v_isSharedCheck_3882_; 
v_pos_3874_ = lean_ctor_get(v___x_3863_, 0);
v_err_3875_ = lean_ctor_get(v___x_3863_, 1);
v_isSharedCheck_3882_ = !lean_is_exclusive(v___x_3863_);
if (v_isSharedCheck_3882_ == 0)
{
v___x_3877_ = v___x_3863_;
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
else
{
lean_inc(v_err_3875_);
lean_inc(v_pos_3874_);
lean_dec(v___x_3863_);
v___x_3877_ = lean_box(0);
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
v_resetjp_3876_:
{
lean_object* v___x_3880_; 
if (v_isShared_3878_ == 0)
{
v___x_3880_ = v___x_3877_;
goto v_reusejp_3879_;
}
else
{
lean_object* v_reuseFailAlloc_3881_; 
v_reuseFailAlloc_3881_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3881_, 0, v_pos_3874_);
lean_ctor_set(v_reuseFailAlloc_3881_, 1, v_err_3875_);
v___x_3880_ = v_reuseFailAlloc_3881_;
goto v_reusejp_3879_;
}
v_reusejp_3879_:
{
return v___x_3880_;
}
}
}
}
case 1:
{
lean_object* v___x_3883_; lean_object* v___x_3884_; 
v___x_3883_ = lean_unsigned_to_nat(2u);
v___x_3884_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v___x_3883_, v_a_3782_);
if (lean_obj_tag(v___x_3884_) == 0)
{
lean_object* v_pos_3885_; lean_object* v_res_3886_; lean_object* v___x_3888_; uint8_t v_isShared_3889_; uint8_t v_isSharedCheck_3896_; 
v_pos_3885_ = lean_ctor_get(v___x_3884_, 0);
v_res_3886_ = lean_ctor_get(v___x_3884_, 1);
v_isSharedCheck_3896_ = !lean_is_exclusive(v___x_3884_);
if (v_isSharedCheck_3896_ == 0)
{
v___x_3888_ = v___x_3884_;
v_isShared_3889_ = v_isSharedCheck_3896_;
goto v_resetjp_3887_;
}
else
{
lean_inc(v_res_3886_);
lean_inc(v_pos_3885_);
lean_dec(v___x_3884_);
v___x_3888_ = lean_box(0);
v_isShared_3889_ = v_isSharedCheck_3896_;
goto v_resetjp_3887_;
}
v_resetjp_3887_:
{
lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3894_; 
v___x_3890_ = lean_nat_to_int(v_res_3886_);
v___x_3891_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1);
v___x_3892_ = lean_int_add(v___x_3891_, v___x_3890_);
lean_dec(v___x_3890_);
if (v_isShared_3889_ == 0)
{
lean_ctor_set(v___x_3888_, 1, v___x_3892_);
v___x_3894_ = v___x_3888_;
goto v_reusejp_3893_;
}
else
{
lean_object* v_reuseFailAlloc_3895_; 
v_reuseFailAlloc_3895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3895_, 0, v_pos_3885_);
lean_ctor_set(v_reuseFailAlloc_3895_, 1, v___x_3892_);
v___x_3894_ = v_reuseFailAlloc_3895_;
goto v_reusejp_3893_;
}
v_reusejp_3893_:
{
return v___x_3894_;
}
}
}
else
{
lean_object* v_pos_3897_; lean_object* v_err_3898_; lean_object* v___x_3900_; uint8_t v_isShared_3901_; uint8_t v_isSharedCheck_3905_; 
v_pos_3897_ = lean_ctor_get(v___x_3884_, 0);
v_err_3898_ = lean_ctor_get(v___x_3884_, 1);
v_isSharedCheck_3905_ = !lean_is_exclusive(v___x_3884_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3900_ = v___x_3884_;
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
else
{
lean_inc(v_err_3898_);
lean_inc(v_pos_3897_);
lean_dec(v___x_3884_);
v___x_3900_ = lean_box(0);
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
v_resetjp_3899_:
{
lean_object* v___x_3903_; 
if (v_isShared_3901_ == 0)
{
v___x_3903_ = v___x_3900_;
goto v_reusejp_3902_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v_pos_3897_);
lean_ctor_set(v_reuseFailAlloc_3904_, 1, v_err_3898_);
v___x_3903_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3902_;
}
v_reusejp_3902_:
{
return v___x_3903_;
}
}
}
}
case 2:
{
lean_object* v___x_3906_; lean_object* v___x_3907_; 
v___x_3906_ = lean_unsigned_to_nat(4u);
v___x_3907_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v___x_3906_, v_a_3782_);
if (lean_obj_tag(v___x_3907_) == 0)
{
lean_object* v_pos_3908_; lean_object* v_res_3909_; lean_object* v___x_3911_; uint8_t v_isShared_3912_; uint8_t v_isSharedCheck_3917_; 
v_pos_3908_ = lean_ctor_get(v___x_3907_, 0);
v_res_3909_ = lean_ctor_get(v___x_3907_, 1);
v_isSharedCheck_3917_ = !lean_is_exclusive(v___x_3907_);
if (v_isSharedCheck_3917_ == 0)
{
v___x_3911_ = v___x_3907_;
v_isShared_3912_ = v_isSharedCheck_3917_;
goto v_resetjp_3910_;
}
else
{
lean_inc(v_res_3909_);
lean_inc(v_pos_3908_);
lean_dec(v___x_3907_);
v___x_3911_ = lean_box(0);
v_isShared_3912_ = v_isSharedCheck_3917_;
goto v_resetjp_3910_;
}
v_resetjp_3910_:
{
lean_object* v___x_3913_; lean_object* v___x_3915_; 
v___x_3913_ = lean_nat_to_int(v_res_3909_);
if (v_isShared_3912_ == 0)
{
lean_ctor_set(v___x_3911_, 1, v___x_3913_);
v___x_3915_ = v___x_3911_;
goto v_reusejp_3914_;
}
else
{
lean_object* v_reuseFailAlloc_3916_; 
v_reuseFailAlloc_3916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3916_, 0, v_pos_3908_);
lean_ctor_set(v_reuseFailAlloc_3916_, 1, v___x_3913_);
v___x_3915_ = v_reuseFailAlloc_3916_;
goto v_reusejp_3914_;
}
v_reusejp_3914_:
{
return v___x_3915_;
}
}
}
else
{
lean_object* v_pos_3918_; lean_object* v_err_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3926_; 
v_pos_3918_ = lean_ctor_get(v___x_3907_, 0);
v_err_3919_ = lean_ctor_get(v___x_3907_, 1);
v_isSharedCheck_3926_ = !lean_is_exclusive(v___x_3907_);
if (v_isSharedCheck_3926_ == 0)
{
v___x_3921_ = v___x_3907_;
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_err_3919_);
lean_inc(v_pos_3918_);
lean_dec(v___x_3907_);
v___x_3921_ = lean_box(0);
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
v_resetjp_3920_:
{
lean_object* v___x_3924_; 
if (v_isShared_3922_ == 0)
{
v___x_3924_ = v___x_3921_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v_pos_3918_);
lean_ctor_set(v_reuseFailAlloc_3925_, 1, v_err_3919_);
v___x_3924_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
return v___x_3924_;
}
}
}
}
default: 
{
lean_object* v_num_3927_; lean_object* v___x_3928_; 
v_num_3927_ = lean_ctor_get(v_presentation_3861_, 0);
lean_inc(v_num_3927_);
lean_dec_ref_known(v_presentation_3861_, 1);
v___x_3928_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v_num_3927_, v_a_3782_);
lean_dec(v_num_3927_);
if (lean_obj_tag(v___x_3928_) == 0)
{
lean_object* v_pos_3929_; lean_object* v_res_3930_; lean_object* v___x_3932_; uint8_t v_isShared_3933_; uint8_t v_isSharedCheck_3938_; 
v_pos_3929_ = lean_ctor_get(v___x_3928_, 0);
v_res_3930_ = lean_ctor_get(v___x_3928_, 1);
v_isSharedCheck_3938_ = !lean_is_exclusive(v___x_3928_);
if (v_isSharedCheck_3938_ == 0)
{
v___x_3932_ = v___x_3928_;
v_isShared_3933_ = v_isSharedCheck_3938_;
goto v_resetjp_3931_;
}
else
{
lean_inc(v_res_3930_);
lean_inc(v_pos_3929_);
lean_dec(v___x_3928_);
v___x_3932_ = lean_box(0);
v_isShared_3933_ = v_isSharedCheck_3938_;
goto v_resetjp_3931_;
}
v_resetjp_3931_:
{
lean_object* v___x_3934_; lean_object* v___x_3936_; 
v___x_3934_ = lean_nat_to_int(v_res_3930_);
if (v_isShared_3933_ == 0)
{
lean_ctor_set(v___x_3932_, 1, v___x_3934_);
v___x_3936_ = v___x_3932_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3937_; 
v_reuseFailAlloc_3937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3937_, 0, v_pos_3929_);
lean_ctor_set(v_reuseFailAlloc_3937_, 1, v___x_3934_);
v___x_3936_ = v_reuseFailAlloc_3937_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
return v___x_3936_;
}
}
}
else
{
lean_object* v_pos_3939_; lean_object* v_err_3940_; lean_object* v___x_3942_; uint8_t v_isShared_3943_; uint8_t v_isSharedCheck_3947_; 
v_pos_3939_ = lean_ctor_get(v___x_3928_, 0);
v_err_3940_ = lean_ctor_get(v___x_3928_, 1);
v_isSharedCheck_3947_ = !lean_is_exclusive(v___x_3928_);
if (v_isSharedCheck_3947_ == 0)
{
v___x_3942_ = v___x_3928_;
v_isShared_3943_ = v_isSharedCheck_3947_;
goto v_resetjp_3941_;
}
else
{
lean_inc(v_err_3940_);
lean_inc(v_pos_3939_);
lean_dec(v___x_3928_);
v___x_3942_ = lean_box(0);
v_isShared_3943_ = v_isSharedCheck_3947_;
goto v_resetjp_3941_;
}
v_resetjp_3941_:
{
lean_object* v___x_3945_; 
if (v_isShared_3943_ == 0)
{
v___x_3945_ = v___x_3942_;
goto v_reusejp_3944_;
}
else
{
lean_object* v_reuseFailAlloc_3946_; 
v_reuseFailAlloc_3946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3946_, 0, v_pos_3939_);
lean_ctor_set(v_reuseFailAlloc_3946_, 1, v_err_3940_);
v___x_3945_ = v_reuseFailAlloc_3946_;
goto v_reusejp_3944_;
}
v_reusejp_3944_:
{
return v___x_3945_;
}
}
}
}
}
}
case 3:
{
lean_object* v_presentation_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; 
lean_dec_ref(v_config_3780_);
v_presentation_3948_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_3948_);
lean_dec_ref_known(v_x_3781_, 1);
v___x_3949_ = lean_unsigned_to_nat(1u);
v___x_3950_ = lean_unsigned_to_nat(366u);
v___x_3951_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_3951_, 0, v_presentation_3948_);
v___x_3952_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3949_, v___x_3950_, v___x_3951_, v_a_3782_);
if (lean_obj_tag(v___x_3952_) == 0)
{
lean_object* v_pos_3953_; lean_object* v_res_3954_; lean_object* v___x_3956_; uint8_t v_isShared_3957_; uint8_t v_isSharedCheck_3964_; 
v_pos_3953_ = lean_ctor_get(v___x_3952_, 0);
v_res_3954_ = lean_ctor_get(v___x_3952_, 1);
v_isSharedCheck_3964_ = !lean_is_exclusive(v___x_3952_);
if (v_isSharedCheck_3964_ == 0)
{
v___x_3956_ = v___x_3952_;
v_isShared_3957_ = v_isSharedCheck_3964_;
goto v_resetjp_3955_;
}
else
{
lean_inc(v_res_3954_);
lean_inc(v_pos_3953_);
lean_dec(v___x_3952_);
v___x_3956_ = lean_box(0);
v_isShared_3957_ = v_isSharedCheck_3964_;
goto v_resetjp_3955_;
}
v_resetjp_3955_:
{
uint8_t v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3962_; 
v___x_3958_ = 1;
v___x_3959_ = lean_box(v___x_3958_);
v___x_3960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3960_, 0, v___x_3959_);
lean_ctor_set(v___x_3960_, 1, v_res_3954_);
if (v_isShared_3957_ == 0)
{
lean_ctor_set(v___x_3956_, 1, v___x_3960_);
v___x_3962_ = v___x_3956_;
goto v_reusejp_3961_;
}
else
{
lean_object* v_reuseFailAlloc_3963_; 
v_reuseFailAlloc_3963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3963_, 0, v_pos_3953_);
lean_ctor_set(v_reuseFailAlloc_3963_, 1, v___x_3960_);
v___x_3962_ = v_reuseFailAlloc_3963_;
goto v_reusejp_3961_;
}
v_reusejp_3961_:
{
return v___x_3962_;
}
}
}
else
{
lean_object* v_pos_3965_; lean_object* v_err_3966_; lean_object* v___x_3968_; uint8_t v_isShared_3969_; uint8_t v_isSharedCheck_3973_; 
v_pos_3965_ = lean_ctor_get(v___x_3952_, 0);
v_err_3966_ = lean_ctor_get(v___x_3952_, 1);
v_isSharedCheck_3973_ = !lean_is_exclusive(v___x_3952_);
if (v_isSharedCheck_3973_ == 0)
{
v___x_3968_ = v___x_3952_;
v_isShared_3969_ = v_isSharedCheck_3973_;
goto v_resetjp_3967_;
}
else
{
lean_inc(v_err_3966_);
lean_inc(v_pos_3965_);
lean_dec(v___x_3952_);
v___x_3968_ = lean_box(0);
v_isShared_3969_ = v_isSharedCheck_3973_;
goto v_resetjp_3967_;
}
v_resetjp_3967_:
{
lean_object* v___x_3971_; 
if (v_isShared_3969_ == 0)
{
v___x_3971_ = v___x_3968_;
goto v_reusejp_3970_;
}
else
{
lean_object* v_reuseFailAlloc_3972_; 
v_reuseFailAlloc_3972_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3972_, 0, v_pos_3965_);
lean_ctor_set(v_reuseFailAlloc_3972_, 1, v_err_3966_);
v___x_3971_ = v_reuseFailAlloc_3972_;
goto v_reusejp_3970_;
}
v_reusejp_3970_:
{
return v___x_3971_;
}
}
}
}
case 4:
{
lean_object* v_presentation_3974_; 
v_presentation_3974_ = lean_ctor_get(v_x_3781_, 0);
lean_inc_ref(v_presentation_3974_);
lean_dec_ref_known(v_x_3781_, 1);
if (lean_obj_tag(v_presentation_3974_) == 0)
{
lean_object* v_val_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; 
lean_dec_ref(v_config_3780_);
v_val_3975_ = lean_ctor_get(v_presentation_3974_, 0);
lean_inc(v_val_3975_);
lean_dec_ref_known(v_presentation_3974_, 1);
v___x_3976_ = lean_unsigned_to_nat(1u);
v___x_3977_ = lean_unsigned_to_nat(12u);
v___x_3978_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_3978_, 0, v_val_3975_);
v___x_3979_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3976_, v___x_3977_, v___x_3978_, v_a_3782_);
return v___x_3979_;
}
else
{
lean_object* v_val_3980_; uint8_t v___x_3981_; 
v_val_3980_ = lean_ctor_get(v_presentation_3974_, 0);
lean_inc(v_val_3980_);
lean_dec_ref_known(v_presentation_3974_, 1);
v___x_3981_ = lean_unbox(v_val_3980_);
lean_dec(v_val_3980_);
switch(v___x_3981_)
{
case 1:
{
lean_object* v_dateformat_3982_; lean_object* v_symbols_3983_; lean_object* v___x_3984_; 
v_dateformat_3982_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_3982_);
lean_dec_ref(v_config_3780_);
v_symbols_3983_ = lean_ctor_get(v_dateformat_3982_, 1);
lean_inc_ref(v_symbols_3983_);
lean_dec_ref(v_dateformat_3982_);
v___x_3984_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseMonthLong(v_symbols_3983_, v_a_3782_);
return v___x_3984_;
}
case 2:
{
lean_object* v_dateformat_3985_; lean_object* v_symbols_3986_; lean_object* v___x_3987_; 
v_dateformat_3985_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_3985_);
lean_dec_ref(v_config_3780_);
v_symbols_3986_ = lean_ctor_get(v_dateformat_3985_, 1);
lean_inc_ref(v_symbols_3986_);
lean_dec_ref(v_dateformat_3985_);
v___x_3987_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseMonthNarrow(v_symbols_3986_, v_a_3782_);
return v___x_3987_;
}
default: 
{
lean_object* v_dateformat_3988_; lean_object* v_symbols_3989_; lean_object* v___x_3990_; 
v_dateformat_3988_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_3988_);
lean_dec_ref(v_config_3780_);
v_symbols_3989_ = lean_ctor_get(v_dateformat_3988_, 1);
lean_inc_ref(v_symbols_3989_);
lean_dec_ref(v_dateformat_3988_);
v___x_3990_ = l_Std_Time_parseMonthShort(v_symbols_3989_, v_a_3782_);
return v___x_3990_;
}
}
}
}
case 5:
{
lean_object* v_presentation_3991_; 
v_presentation_3991_ = lean_ctor_get(v_x_3781_, 0);
lean_inc_ref(v_presentation_3991_);
lean_dec_ref_known(v_x_3781_, 1);
if (lean_obj_tag(v_presentation_3991_) == 0)
{
lean_object* v_val_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; 
lean_dec_ref(v_config_3780_);
v_val_3992_ = lean_ctor_get(v_presentation_3991_, 0);
lean_inc(v_val_3992_);
lean_dec_ref_known(v_presentation_3991_, 1);
v___x_3993_ = lean_unsigned_to_nat(1u);
v___x_3994_ = lean_unsigned_to_nat(12u);
v___x_3995_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_3995_, 0, v_val_3992_);
v___x_3996_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_3993_, v___x_3994_, v___x_3995_, v_a_3782_);
return v___x_3996_;
}
else
{
lean_object* v_val_3997_; uint8_t v___x_3998_; 
v_val_3997_ = lean_ctor_get(v_presentation_3991_, 0);
lean_inc(v_val_3997_);
lean_dec_ref_known(v_presentation_3991_, 1);
v___x_3998_ = lean_unbox(v_val_3997_);
lean_dec(v_val_3997_);
switch(v___x_3998_)
{
case 1:
{
lean_object* v_dateformat_3999_; lean_object* v_symbols_4000_; lean_object* v___x_4001_; 
v_dateformat_3999_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_3999_);
lean_dec_ref(v_config_3780_);
v_symbols_4000_ = lean_ctor_get(v_dateformat_3999_, 1);
lean_inc_ref(v_symbols_4000_);
lean_dec_ref(v_dateformat_3999_);
v___x_4001_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseMonthLong(v_symbols_4000_, v_a_3782_);
return v___x_4001_;
}
case 2:
{
lean_object* v_dateformat_4002_; lean_object* v_symbols_4003_; lean_object* v___x_4004_; 
v_dateformat_4002_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4002_);
lean_dec_ref(v_config_3780_);
v_symbols_4003_ = lean_ctor_get(v_dateformat_4002_, 1);
lean_inc_ref(v_symbols_4003_);
lean_dec_ref(v_dateformat_4002_);
v___x_4004_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseMonthNarrow(v_symbols_4003_, v_a_3782_);
return v___x_4004_;
}
default: 
{
lean_object* v_dateformat_4005_; lean_object* v_symbols_4006_; lean_object* v___x_4007_; 
v_dateformat_4005_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4005_);
lean_dec_ref(v_config_3780_);
v_symbols_4006_ = lean_ctor_get(v_dateformat_4005_, 1);
lean_inc_ref(v_symbols_4006_);
lean_dec_ref(v_dateformat_4005_);
v___x_4007_ = l_Std_Time_parseMonthShort(v_symbols_4006_, v_a_3782_);
return v___x_4007_;
}
}
}
}
case 6:
{
lean_object* v_presentation_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; 
lean_dec_ref(v_config_3780_);
v_presentation_4008_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_4008_);
lean_dec_ref_known(v_x_3781_, 1);
v___x_4009_ = lean_unsigned_to_nat(1u);
v___x_4010_ = lean_unsigned_to_nat(31u);
v___x_4011_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4011_, 0, v_presentation_4008_);
v___x_4012_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4009_, v___x_4010_, v___x_4011_, v_a_3782_);
return v___x_4012_;
}
case 7:
{
lean_object* v_presentation_4013_; 
v_presentation_4013_ = lean_ctor_get(v_x_3781_, 0);
lean_inc_ref(v_presentation_4013_);
lean_dec_ref_known(v_x_3781_, 1);
if (lean_obj_tag(v_presentation_4013_) == 0)
{
lean_object* v_val_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; 
lean_dec_ref(v_config_3780_);
v_val_4014_ = lean_ctor_get(v_presentation_4013_, 0);
lean_inc(v_val_4014_);
lean_dec_ref_known(v_presentation_4013_, 1);
v___x_4015_ = lean_unsigned_to_nat(1u);
v___x_4016_ = lean_unsigned_to_nat(4u);
v___x_4017_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4017_, 0, v_val_4014_);
v___x_4018_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4015_, v___x_4016_, v___x_4017_, v_a_3782_);
return v___x_4018_;
}
else
{
lean_object* v_val_4019_; uint8_t v___x_4020_; 
v_val_4019_ = lean_ctor_get(v_presentation_4013_, 0);
lean_inc(v_val_4019_);
lean_dec_ref_known(v_presentation_4013_, 1);
v___x_4020_ = lean_unbox(v_val_4019_);
lean_dec(v_val_4019_);
switch(v___x_4020_)
{
case 0:
{
lean_object* v_dateformat_4021_; lean_object* v_symbols_4022_; lean_object* v___x_4023_; 
v_dateformat_4021_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4021_);
lean_dec_ref(v_config_3780_);
v_symbols_4022_ = lean_ctor_get(v_dateformat_4021_, 1);
lean_inc_ref(v_symbols_4022_);
lean_dec_ref(v_dateformat_4021_);
v___x_4023_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterShort(v_symbols_4022_, v_a_3782_);
return v___x_4023_;
}
case 1:
{
lean_object* v_dateformat_4024_; lean_object* v_symbols_4025_; lean_object* v___x_4026_; 
v_dateformat_4024_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4024_);
lean_dec_ref(v_config_3780_);
v_symbols_4025_ = lean_ctor_get(v_dateformat_4024_, 1);
lean_inc_ref(v_symbols_4025_);
lean_dec_ref(v_dateformat_4024_);
v___x_4026_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterLong(v_symbols_4025_, v_a_3782_);
return v___x_4026_;
}
default: 
{
v___y_3784_ = v_a_3782_;
goto v___jp_3783_;
}
}
}
}
case 8:
{
lean_object* v_presentation_4027_; 
v_presentation_4027_ = lean_ctor_get(v_x_3781_, 0);
lean_inc_ref(v_presentation_4027_);
lean_dec_ref_known(v_x_3781_, 1);
if (lean_obj_tag(v_presentation_4027_) == 0)
{
lean_object* v_val_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; 
lean_dec_ref(v_config_3780_);
v_val_4028_ = lean_ctor_get(v_presentation_4027_, 0);
lean_inc(v_val_4028_);
lean_dec_ref_known(v_presentation_4027_, 1);
v___x_4029_ = lean_unsigned_to_nat(1u);
v___x_4030_ = lean_unsigned_to_nat(4u);
v___x_4031_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4031_, 0, v_val_4028_);
v___x_4032_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4029_, v___x_4030_, v___x_4031_, v_a_3782_);
return v___x_4032_;
}
else
{
lean_object* v_val_4033_; uint8_t v___x_4034_; 
v_val_4033_ = lean_ctor_get(v_presentation_4027_, 0);
lean_inc(v_val_4033_);
lean_dec_ref_known(v_presentation_4027_, 1);
v___x_4034_ = lean_unbox(v_val_4033_);
lean_dec(v_val_4033_);
switch(v___x_4034_)
{
case 0:
{
lean_object* v_dateformat_4035_; lean_object* v_symbols_4036_; lean_object* v___x_4037_; 
v_dateformat_4035_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4035_);
lean_dec_ref(v_config_3780_);
v_symbols_4036_ = lean_ctor_get(v_dateformat_4035_, 1);
lean_inc_ref(v_symbols_4036_);
lean_dec_ref(v_dateformat_4035_);
v___x_4037_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterShort(v_symbols_4036_, v_a_3782_);
return v___x_4037_;
}
case 1:
{
lean_object* v_dateformat_4038_; lean_object* v_symbols_4039_; lean_object* v___x_4040_; 
v_dateformat_4038_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4038_);
lean_dec_ref(v_config_3780_);
v_symbols_4039_ = lean_ctor_get(v_dateformat_4038_, 1);
lean_inc_ref(v_symbols_4039_);
lean_dec_ref(v_dateformat_4038_);
v___x_4040_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterLong(v_symbols_4039_, v_a_3782_);
return v___x_4040_;
}
default: 
{
v___y_3789_ = v_a_3782_;
goto v___jp_3788_;
}
}
}
}
case 9:
{
lean_object* v_presentation_4041_; 
lean_dec_ref(v_config_3780_);
v_presentation_4041_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_4041_);
lean_dec_ref_known(v_x_3781_, 1);
switch(lean_obj_tag(v_presentation_4041_))
{
case 0:
{
lean_object* v___x_4042_; lean_object* v___x_4043_; 
v___x_4042_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__0));
v___x_4043_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(v___x_4042_, v_a_3782_);
return v___x_4043_;
}
case 1:
{
lean_object* v___x_4044_; lean_object* v___x_4045_; 
v___x_4044_ = lean_unsigned_to_nat(2u);
v___x_4045_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNum(v___x_4044_, v_a_3782_);
if (lean_obj_tag(v___x_4045_) == 0)
{
lean_object* v_pos_4046_; lean_object* v_res_4047_; lean_object* v___x_4049_; uint8_t v_isShared_4050_; uint8_t v_isSharedCheck_4057_; 
v_pos_4046_ = lean_ctor_get(v___x_4045_, 0);
v_res_4047_ = lean_ctor_get(v___x_4045_, 1);
v_isSharedCheck_4057_ = !lean_is_exclusive(v___x_4045_);
if (v_isSharedCheck_4057_ == 0)
{
v___x_4049_ = v___x_4045_;
v_isShared_4050_ = v_isSharedCheck_4057_;
goto v_resetjp_4048_;
}
else
{
lean_inc(v_res_4047_);
lean_inc(v_pos_4046_);
lean_dec(v___x_4045_);
v___x_4049_ = lean_box(0);
v_isShared_4050_ = v_isSharedCheck_4057_;
goto v_resetjp_4048_;
}
v_resetjp_4048_:
{
lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4055_; 
v___x_4051_ = lean_nat_to_int(v_res_4047_);
v___x_4052_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__1);
v___x_4053_ = lean_int_add(v___x_4052_, v___x_4051_);
lean_dec(v___x_4051_);
if (v_isShared_4050_ == 0)
{
lean_ctor_set(v___x_4049_, 1, v___x_4053_);
v___x_4055_ = v___x_4049_;
goto v_reusejp_4054_;
}
else
{
lean_object* v_reuseFailAlloc_4056_; 
v_reuseFailAlloc_4056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4056_, 0, v_pos_4046_);
lean_ctor_set(v_reuseFailAlloc_4056_, 1, v___x_4053_);
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
lean_object* v_pos_4058_; lean_object* v_err_4059_; lean_object* v___x_4061_; uint8_t v_isShared_4062_; uint8_t v_isSharedCheck_4066_; 
v_pos_4058_ = lean_ctor_get(v___x_4045_, 0);
v_err_4059_ = lean_ctor_get(v___x_4045_, 1);
v_isSharedCheck_4066_ = !lean_is_exclusive(v___x_4045_);
if (v_isSharedCheck_4066_ == 0)
{
v___x_4061_ = v___x_4045_;
v_isShared_4062_ = v_isSharedCheck_4066_;
goto v_resetjp_4060_;
}
else
{
lean_inc(v_err_4059_);
lean_inc(v_pos_4058_);
lean_dec(v___x_4045_);
v___x_4061_ = lean_box(0);
v_isShared_4062_ = v_isSharedCheck_4066_;
goto v_resetjp_4060_;
}
v_resetjp_4060_:
{
lean_object* v___x_4064_; 
if (v_isShared_4062_ == 0)
{
v___x_4064_ = v___x_4061_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4065_; 
v_reuseFailAlloc_4065_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4065_, 0, v_pos_4058_);
lean_ctor_set(v_reuseFailAlloc_4065_, 1, v_err_4059_);
v___x_4064_ = v_reuseFailAlloc_4065_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
return v___x_4064_;
}
}
}
}
case 2:
{
lean_object* v___x_4067_; lean_object* v___x_4068_; 
v___x_4067_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__2));
v___x_4068_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(v___x_4067_, v_a_3782_);
return v___x_4068_;
}
default: 
{
lean_object* v_num_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; 
v_num_4069_ = lean_ctor_get(v_presentation_4041_, 0);
lean_inc(v_num_4069_);
lean_dec_ref_known(v_presentation_4041_, 1);
v___x_4070_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseNum___boxed), 2, 1);
lean_closure_set(v___x_4070_, 0, v_num_4069_);
v___x_4071_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseSigned(v___x_4070_, v_a_3782_);
return v___x_4071_;
}
}
}
case 10:
{
lean_object* v_presentation_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; 
lean_dec_ref(v_config_3780_);
v_presentation_4072_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_4072_);
lean_dec_ref_known(v_x_3781_, 1);
v___x_4073_ = lean_unsigned_to_nat(1u);
v___x_4074_ = lean_unsigned_to_nat(53u);
v___x_4075_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4075_, 0, v_presentation_4072_);
v___x_4076_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4073_, v___x_4074_, v___x_4075_, v_a_3782_);
return v___x_4076_;
}
case 11:
{
lean_object* v_presentation_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; 
lean_dec_ref(v_config_3780_);
v_presentation_4077_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_4077_);
lean_dec_ref_known(v_x_3781_, 1);
v___x_4078_ = lean_unsigned_to_nat(1u);
v___x_4079_ = lean_unsigned_to_nat(6u);
v___x_4080_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4080_, 0, v_presentation_4077_);
v___x_4081_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4078_, v___x_4079_, v___x_4080_, v_a_3782_);
return v___x_4081_;
}
case 12:
{
uint8_t v_presentation_4082_; 
v_presentation_4082_ = lean_ctor_get_uint8(v_x_3781_, 0);
lean_dec_ref_known(v_x_3781_, 0);
switch(v_presentation_4082_)
{
case 1:
{
lean_object* v_dateformat_4083_; lean_object* v_symbols_4084_; lean_object* v___x_4085_; 
v_dateformat_4083_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4083_);
lean_dec_ref(v_config_3780_);
v_symbols_4084_ = lean_ctor_get(v_dateformat_4083_, 1);
lean_inc_ref(v_symbols_4084_);
lean_dec_ref(v_dateformat_4083_);
v___x_4085_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayLong(v_symbols_4084_, v_a_3782_);
return v___x_4085_;
}
case 2:
{
lean_object* v_dateformat_4086_; lean_object* v_symbols_4087_; lean_object* v___x_4088_; 
v_dateformat_4086_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4086_);
lean_dec_ref(v_config_3780_);
v_symbols_4087_ = lean_ctor_get(v_dateformat_4086_, 1);
lean_inc_ref(v_symbols_4087_);
lean_dec_ref(v_dateformat_4086_);
v___x_4088_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayNarrow(v_symbols_4087_, v_a_3782_);
return v___x_4088_;
}
default: 
{
lean_object* v_dateformat_4089_; lean_object* v_symbols_4090_; lean_object* v___x_4091_; 
v_dateformat_4089_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4089_);
lean_dec_ref(v_config_3780_);
v_symbols_4090_ = lean_ctor_get(v_dateformat_4089_, 1);
lean_inc_ref(v_symbols_4090_);
lean_dec_ref(v_dateformat_4089_);
v___x_4091_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayShort(v_symbols_4090_, v_a_3782_);
return v___x_4091_;
}
}
}
case 13:
{
lean_object* v_presentation_4092_; 
v_presentation_4092_ = lean_ctor_get(v_x_3781_, 0);
lean_inc_ref(v_presentation_4092_);
lean_dec_ref_known(v_x_3781_, 1);
if (lean_obj_tag(v_presentation_4092_) == 0)
{
lean_object* v_val_4093_; lean_object* v___x_4094_; 
v_val_4093_ = lean_ctor_get(v_presentation_4092_, 0);
lean_inc(v_val_4093_);
lean_dec_ref_known(v_presentation_4092_, 1);
v___x_4094_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum(v_val_4093_, v_a_3782_);
lean_dec(v_val_4093_);
if (lean_obj_tag(v___x_4094_) == 0)
{
lean_object* v_pos_4095_; lean_object* v_res_4096_; lean_object* v___x_4098_; uint8_t v_isShared_4099_; uint8_t v_isSharedCheck_4129_; 
v_pos_4095_ = lean_ctor_get(v___x_4094_, 0);
v_res_4096_ = lean_ctor_get(v___x_4094_, 1);
v_isSharedCheck_4129_ = !lean_is_exclusive(v___x_4094_);
if (v_isSharedCheck_4129_ == 0)
{
v___x_4098_ = v___x_4094_;
v_isShared_4099_ = v_isSharedCheck_4129_;
goto v_resetjp_4097_;
}
else
{
lean_inc(v_res_4096_);
lean_inc(v_pos_4095_);
lean_dec(v___x_4094_);
v___x_4098_ = lean_box(0);
v_isShared_4099_ = v_isSharedCheck_4129_;
goto v_resetjp_4097_;
}
v_resetjp_4097_:
{
lean_object* v___x_4105_; uint8_t v___x_4106_; 
v___x_4105_ = lean_unsigned_to_nat(1u);
v___x_4106_ = lean_nat_dec_le(v___x_4105_, v_res_4096_);
if (v___x_4106_ == 0)
{
lean_dec(v_res_4096_);
lean_dec_ref(v_config_3780_);
goto v___jp_4100_;
}
else
{
lean_object* v___x_4107_; uint8_t v___x_4108_; 
v___x_4107_ = lean_unsigned_to_nat(7u);
v___x_4108_ = lean_nat_dec_le(v_res_4096_, v___x_4107_);
if (v___x_4108_ == 0)
{
lean_dec(v_res_4096_);
lean_dec_ref(v_config_3780_);
goto v___jp_4100_;
}
else
{
lean_object* v_dateformat_4109_; uint8_t v_firstDayOfWeek_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v_range_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; uint8_t v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; 
lean_del_object(v___x_4098_);
v_dateformat_4109_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4109_);
lean_dec_ref(v_config_3780_);
v_firstDayOfWeek_4110_ = lean_ctor_get_uint8(v_dateformat_4109_, sizeof(void*)*2);
lean_dec_ref(v_dateformat_4109_);
v___x_4111_ = l_Std_Time_Weekday_toOrdinal(v_firstDayOfWeek_4110_);
v___x_4112_ = lean_nat_to_int(v_res_4096_);
v___x_4113_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_4114_ = lean_int_sub(v___x_4112_, v___x_4113_);
lean_dec(v___x_4112_);
v___x_4115_ = lean_int_add(v___x_4114_, v___x_4111_);
lean_dec(v___x_4111_);
lean_dec(v___x_4114_);
v___x_4116_ = lean_int_sub(v___x_4115_, v___x_4113_);
lean_dec(v___x_4115_);
v___x_4117_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1);
v___x_4118_ = lean_int_emod(v___x_4116_, v___x_4117_);
lean_dec(v___x_4116_);
v___x_4119_ = lean_int_add(v___x_4118_, v___x_4113_);
lean_dec(v___x_4118_);
v_range_4120_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__6, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__6_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__6);
v___x_4121_ = lean_int_sub(v___x_4119_, v___x_4113_);
lean_dec(v___x_4119_);
v___x_4122_ = lean_int_emod(v___x_4121_, v_range_4120_);
lean_dec(v___x_4121_);
v___x_4123_ = lean_int_add(v___x_4122_, v_range_4120_);
lean_dec(v___x_4122_);
v___x_4124_ = lean_int_emod(v___x_4123_, v_range_4120_);
lean_dec(v___x_4123_);
v___x_4125_ = lean_int_add(v___x_4124_, v___x_4113_);
lean_dec(v___x_4124_);
v___x_4126_ = l_Std_Time_Weekday_ofOrdinal(v___x_4125_);
lean_dec(v___x_4125_);
v___x_4127_ = lean_box(v___x_4126_);
v___x_4128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4128_, 0, v_pos_4095_);
lean_ctor_set(v___x_4128_, 1, v___x_4127_);
return v___x_4128_;
}
}
v___jp_4100_:
{
lean_object* v___x_4101_; lean_object* v___x_4103_; 
v___x_4101_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__4));
if (v_isShared_4099_ == 0)
{
lean_ctor_set_tag(v___x_4098_, 1);
lean_ctor_set(v___x_4098_, 1, v___x_4101_);
v___x_4103_ = v___x_4098_;
goto v_reusejp_4102_;
}
else
{
lean_object* v_reuseFailAlloc_4104_; 
v_reuseFailAlloc_4104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4104_, 0, v_pos_4095_);
lean_ctor_set(v_reuseFailAlloc_4104_, 1, v___x_4101_);
v___x_4103_ = v_reuseFailAlloc_4104_;
goto v_reusejp_4102_;
}
v_reusejp_4102_:
{
return v___x_4103_;
}
}
}
}
else
{
lean_object* v_pos_4130_; lean_object* v_err_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4138_; 
lean_dec_ref(v_config_3780_);
v_pos_4130_ = lean_ctor_get(v___x_4094_, 0);
v_err_4131_ = lean_ctor_get(v___x_4094_, 1);
v_isSharedCheck_4138_ = !lean_is_exclusive(v___x_4094_);
if (v_isSharedCheck_4138_ == 0)
{
v___x_4133_ = v___x_4094_;
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_err_4131_);
lean_inc(v_pos_4130_);
lean_dec(v___x_4094_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
lean_object* v___x_4136_; 
if (v_isShared_4134_ == 0)
{
v___x_4136_ = v___x_4133_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4137_; 
v_reuseFailAlloc_4137_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4137_, 0, v_pos_4130_);
lean_ctor_set(v_reuseFailAlloc_4137_, 1, v_err_4131_);
v___x_4136_ = v_reuseFailAlloc_4137_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
return v___x_4136_;
}
}
}
}
else
{
lean_object* v_val_4139_; uint8_t v___x_4140_; 
v_val_4139_ = lean_ctor_get(v_presentation_4092_, 0);
lean_inc(v_val_4139_);
lean_dec_ref_known(v_presentation_4092_, 1);
v___x_4140_ = lean_unbox(v_val_4139_);
lean_dec(v_val_4139_);
switch(v___x_4140_)
{
case 0:
{
lean_object* v_dateformat_4141_; lean_object* v_symbols_4142_; lean_object* v___x_4143_; 
v_dateformat_4141_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4141_);
lean_dec_ref(v_config_3780_);
v_symbols_4142_ = lean_ctor_get(v_dateformat_4141_, 1);
lean_inc_ref(v_symbols_4142_);
lean_dec_ref(v_dateformat_4141_);
v___x_4143_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayShort(v_symbols_4142_, v_a_3782_);
return v___x_4143_;
}
case 1:
{
lean_object* v_dateformat_4144_; lean_object* v_symbols_4145_; lean_object* v___x_4146_; 
v_dateformat_4144_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4144_);
lean_dec_ref(v_config_3780_);
v_symbols_4145_ = lean_ctor_get(v_dateformat_4144_, 1);
lean_inc_ref(v_symbols_4145_);
lean_dec_ref(v_dateformat_4144_);
v___x_4146_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayLong(v_symbols_4145_, v_a_3782_);
return v___x_4146_;
}
case 2:
{
lean_object* v_dateformat_4147_; lean_object* v_symbols_4148_; lean_object* v___x_4149_; 
v_dateformat_4147_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4147_);
lean_dec_ref(v_config_3780_);
v_symbols_4148_ = lean_ctor_get(v_dateformat_4147_, 1);
lean_inc_ref(v_symbols_4148_);
lean_dec_ref(v_dateformat_4147_);
v___x_4149_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayNarrow(v_symbols_4148_, v_a_3782_);
return v___x_4149_;
}
default: 
{
lean_object* v_dateformat_4150_; lean_object* v_symbols_4151_; lean_object* v___x_4152_; 
v_dateformat_4150_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4150_);
lean_dec_ref(v_config_3780_);
v_symbols_4151_ = lean_ctor_get(v_dateformat_4150_, 1);
lean_inc_ref(v_symbols_4151_);
lean_dec_ref(v_dateformat_4150_);
v___x_4152_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayTwoLetter(v_symbols_4151_, v_a_3782_);
return v___x_4152_;
}
}
}
}
case 14:
{
lean_object* v_presentation_4153_; 
v_presentation_4153_ = lean_ctor_get(v_x_3781_, 0);
lean_inc_ref(v_presentation_4153_);
lean_dec_ref_known(v_x_3781_, 1);
if (lean_obj_tag(v_presentation_4153_) == 0)
{
lean_object* v_val_4154_; lean_object* v___x_4155_; 
v_val_4154_ = lean_ctor_get(v_presentation_4153_, 0);
lean_inc(v_val_4154_);
lean_dec_ref_known(v_presentation_4153_, 1);
v___x_4155_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum(v_val_4154_, v_a_3782_);
lean_dec(v_val_4154_);
if (lean_obj_tag(v___x_4155_) == 0)
{
lean_object* v_pos_4156_; lean_object* v_res_4157_; lean_object* v___x_4159_; uint8_t v_isShared_4160_; uint8_t v_isSharedCheck_4190_; 
v_pos_4156_ = lean_ctor_get(v___x_4155_, 0);
v_res_4157_ = lean_ctor_get(v___x_4155_, 1);
v_isSharedCheck_4190_ = !lean_is_exclusive(v___x_4155_);
if (v_isSharedCheck_4190_ == 0)
{
v___x_4159_ = v___x_4155_;
v_isShared_4160_ = v_isSharedCheck_4190_;
goto v_resetjp_4158_;
}
else
{
lean_inc(v_res_4157_);
lean_inc(v_pos_4156_);
lean_dec(v___x_4155_);
v___x_4159_ = lean_box(0);
v_isShared_4160_ = v_isSharedCheck_4190_;
goto v_resetjp_4158_;
}
v_resetjp_4158_:
{
lean_object* v___x_4166_; uint8_t v___x_4167_; 
v___x_4166_ = lean_unsigned_to_nat(1u);
v___x_4167_ = lean_nat_dec_le(v___x_4166_, v_res_4157_);
if (v___x_4167_ == 0)
{
lean_dec(v_res_4157_);
lean_dec_ref(v_config_3780_);
goto v___jp_4161_;
}
else
{
lean_object* v___x_4168_; uint8_t v___x_4169_; 
v___x_4168_ = lean_unsigned_to_nat(7u);
v___x_4169_ = lean_nat_dec_le(v_res_4157_, v___x_4168_);
if (v___x_4169_ == 0)
{
lean_dec(v_res_4157_);
lean_dec_ref(v_config_3780_);
goto v___jp_4161_;
}
else
{
lean_object* v_dateformat_4170_; uint8_t v_firstDayOfWeek_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v_range_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; uint8_t v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; 
lean_del_object(v___x_4159_);
v_dateformat_4170_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4170_);
lean_dec_ref(v_config_3780_);
v_firstDayOfWeek_4171_ = lean_ctor_get_uint8(v_dateformat_4170_, sizeof(void*)*2);
lean_dec_ref(v_dateformat_4170_);
v___x_4172_ = l_Std_Time_Weekday_toOrdinal(v_firstDayOfWeek_4171_);
v___x_4173_ = lean_nat_to_int(v_res_4157_);
v___x_4174_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_4175_ = lean_int_sub(v___x_4173_, v___x_4174_);
lean_dec(v___x_4173_);
v___x_4176_ = lean_int_add(v___x_4175_, v___x_4172_);
lean_dec(v___x_4172_);
lean_dec(v___x_4175_);
v___x_4177_ = lean_int_sub(v___x_4176_, v___x_4174_);
lean_dec(v___x_4176_);
v___x_4178_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__1);
v___x_4179_ = lean_int_emod(v___x_4177_, v___x_4178_);
lean_dec(v___x_4177_);
v___x_4180_ = lean_int_add(v___x_4179_, v___x_4174_);
lean_dec(v___x_4179_);
v_range_4181_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__6, &l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__6_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__6);
v___x_4182_ = lean_int_sub(v___x_4180_, v___x_4174_);
lean_dec(v___x_4180_);
v___x_4183_ = lean_int_emod(v___x_4182_, v_range_4181_);
lean_dec(v___x_4182_);
v___x_4184_ = lean_int_add(v___x_4183_, v_range_4181_);
lean_dec(v___x_4183_);
v___x_4185_ = lean_int_emod(v___x_4184_, v_range_4181_);
lean_dec(v___x_4184_);
v___x_4186_ = lean_int_add(v___x_4185_, v___x_4174_);
lean_dec(v___x_4185_);
v___x_4187_ = l_Std_Time_Weekday_ofOrdinal(v___x_4186_);
lean_dec(v___x_4186_);
v___x_4188_ = lean_box(v___x_4187_);
v___x_4189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4189_, 0, v_pos_4156_);
lean_ctor_set(v___x_4189_, 1, v___x_4188_);
return v___x_4189_;
}
}
v___jp_4161_:
{
lean_object* v___x_4162_; lean_object* v___x_4164_; 
v___x_4162_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__4));
if (v_isShared_4160_ == 0)
{
lean_ctor_set_tag(v___x_4159_, 1);
lean_ctor_set(v___x_4159_, 1, v___x_4162_);
v___x_4164_ = v___x_4159_;
goto v_reusejp_4163_;
}
else
{
lean_object* v_reuseFailAlloc_4165_; 
v_reuseFailAlloc_4165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4165_, 0, v_pos_4156_);
lean_ctor_set(v_reuseFailAlloc_4165_, 1, v___x_4162_);
v___x_4164_ = v_reuseFailAlloc_4165_;
goto v_reusejp_4163_;
}
v_reusejp_4163_:
{
return v___x_4164_;
}
}
}
}
else
{
lean_object* v_pos_4191_; lean_object* v_err_4192_; lean_object* v___x_4194_; uint8_t v_isShared_4195_; uint8_t v_isSharedCheck_4199_; 
lean_dec_ref(v_config_3780_);
v_pos_4191_ = lean_ctor_get(v___x_4155_, 0);
v_err_4192_ = lean_ctor_get(v___x_4155_, 1);
v_isSharedCheck_4199_ = !lean_is_exclusive(v___x_4155_);
if (v_isSharedCheck_4199_ == 0)
{
v___x_4194_ = v___x_4155_;
v_isShared_4195_ = v_isSharedCheck_4199_;
goto v_resetjp_4193_;
}
else
{
lean_inc(v_err_4192_);
lean_inc(v_pos_4191_);
lean_dec(v___x_4155_);
v___x_4194_ = lean_box(0);
v_isShared_4195_ = v_isSharedCheck_4199_;
goto v_resetjp_4193_;
}
v_resetjp_4193_:
{
lean_object* v___x_4197_; 
if (v_isShared_4195_ == 0)
{
v___x_4197_ = v___x_4194_;
goto v_reusejp_4196_;
}
else
{
lean_object* v_reuseFailAlloc_4198_; 
v_reuseFailAlloc_4198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4198_, 0, v_pos_4191_);
lean_ctor_set(v_reuseFailAlloc_4198_, 1, v_err_4192_);
v___x_4197_ = v_reuseFailAlloc_4198_;
goto v_reusejp_4196_;
}
v_reusejp_4196_:
{
return v___x_4197_;
}
}
}
}
else
{
lean_object* v_val_4200_; uint8_t v___x_4201_; 
v_val_4200_ = lean_ctor_get(v_presentation_4153_, 0);
lean_inc(v_val_4200_);
lean_dec_ref_known(v_presentation_4153_, 1);
v___x_4201_ = lean_unbox(v_val_4200_);
lean_dec(v_val_4200_);
switch(v___x_4201_)
{
case 0:
{
lean_object* v_dateformat_4202_; lean_object* v_symbols_4203_; lean_object* v___x_4204_; 
v_dateformat_4202_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4202_);
lean_dec_ref(v_config_3780_);
v_symbols_4203_ = lean_ctor_get(v_dateformat_4202_, 1);
lean_inc_ref(v_symbols_4203_);
lean_dec_ref(v_dateformat_4202_);
v___x_4204_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayShort(v_symbols_4203_, v_a_3782_);
return v___x_4204_;
}
case 1:
{
lean_object* v_dateformat_4205_; lean_object* v_symbols_4206_; lean_object* v___x_4207_; 
v_dateformat_4205_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4205_);
lean_dec_ref(v_config_3780_);
v_symbols_4206_ = lean_ctor_get(v_dateformat_4205_, 1);
lean_inc_ref(v_symbols_4206_);
lean_dec_ref(v_dateformat_4205_);
v___x_4207_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayLong(v_symbols_4206_, v_a_3782_);
return v___x_4207_;
}
case 2:
{
lean_object* v_dateformat_4208_; lean_object* v_symbols_4209_; lean_object* v___x_4210_; 
v_dateformat_4208_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4208_);
lean_dec_ref(v_config_3780_);
v_symbols_4209_ = lean_ctor_get(v_dateformat_4208_, 1);
lean_inc_ref(v_symbols_4209_);
lean_dec_ref(v_dateformat_4208_);
v___x_4210_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayNarrow(v_symbols_4209_, v_a_3782_);
return v___x_4210_;
}
default: 
{
lean_object* v_dateformat_4211_; lean_object* v_symbols_4212_; lean_object* v___x_4213_; 
v_dateformat_4211_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4211_);
lean_dec_ref(v_config_3780_);
v_symbols_4212_ = lean_ctor_get(v_dateformat_4211_, 1);
lean_inc_ref(v_symbols_4212_);
lean_dec_ref(v_dateformat_4211_);
v___x_4213_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWeekdayTwoLetter(v_symbols_4212_, v_a_3782_);
return v___x_4213_;
}
}
}
}
case 15:
{
lean_object* v_presentation_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; 
lean_dec_ref(v_config_3780_);
v_presentation_4214_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_4214_);
lean_dec_ref_known(v_x_3781_, 1);
v___x_4215_ = lean_unsigned_to_nat(1u);
v___x_4216_ = lean_unsigned_to_nat(5u);
v___x_4217_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4217_, 0, v_presentation_4214_);
v___x_4218_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4215_, v___x_4216_, v___x_4217_, v_a_3782_);
return v___x_4218_;
}
case 16:
{
uint8_t v_presentation_4219_; 
v_presentation_4219_ = lean_ctor_get_uint8(v_x_3781_, 0);
lean_dec_ref_known(v_x_3781_, 0);
switch(v_presentation_4219_)
{
case 1:
{
lean_object* v_dateformat_4220_; lean_object* v_symbols_4221_; lean_object* v___x_4222_; 
v_dateformat_4220_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4220_);
lean_dec_ref(v_config_3780_);
v_symbols_4221_ = lean_ctor_get(v_dateformat_4220_, 1);
lean_inc_ref(v_symbols_4221_);
lean_dec_ref(v_dateformat_4220_);
v___x_4222_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseMarkerLong(v_symbols_4221_, v_a_3782_);
return v___x_4222_;
}
case 2:
{
lean_object* v_dateformat_4223_; lean_object* v_symbols_4224_; lean_object* v___x_4225_; 
v_dateformat_4223_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4223_);
lean_dec_ref(v_config_3780_);
v_symbols_4224_ = lean_ctor_get(v_dateformat_4223_, 1);
lean_inc_ref(v_symbols_4224_);
lean_dec_ref(v_dateformat_4223_);
v___x_4225_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseMarkerNarrow(v_symbols_4224_, v_a_3782_);
return v___x_4225_;
}
default: 
{
lean_object* v_dateformat_4226_; lean_object* v_symbols_4227_; lean_object* v___x_4228_; 
v_dateformat_4226_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4226_);
lean_dec_ref(v_config_3780_);
v_symbols_4227_ = lean_ctor_get(v_dateformat_4226_, 1);
lean_inc_ref(v_symbols_4227_);
lean_dec_ref(v_dateformat_4226_);
v___x_4228_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseMarkerShort(v_symbols_4227_, v_a_3782_);
return v___x_4228_;
}
}
}
case 17:
{
uint8_t v_presentation_4229_; 
v_presentation_4229_ = lean_ctor_get_uint8(v_x_3781_, 0);
lean_dec_ref_known(v_x_3781_, 0);
switch(v_presentation_4229_)
{
case 1:
{
lean_object* v_dateformat_4230_; lean_object* v_symbols_4231_; lean_object* v_dayPeriodLong_4232_; lean_object* v___x_4233_; 
v_dateformat_4230_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4230_);
lean_dec_ref(v_config_3780_);
v_symbols_4231_ = lean_ctor_get(v_dateformat_4230_, 1);
lean_inc_ref(v_symbols_4231_);
lean_dec_ref(v_dateformat_4230_);
v_dayPeriodLong_4232_ = lean_ctor_get(v_symbols_4231_, 20);
lean_inc_ref(v_dayPeriodLong_4232_);
lean_dec_ref(v_symbols_4231_);
v___x_4233_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseDayPeriodFrom(v_dayPeriodLong_4232_, v_a_3782_);
return v___x_4233_;
}
case 2:
{
lean_object* v_dateformat_4234_; lean_object* v_symbols_4235_; lean_object* v_dayPeriodNarrow_4236_; lean_object* v___x_4237_; 
v_dateformat_4234_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4234_);
lean_dec_ref(v_config_3780_);
v_symbols_4235_ = lean_ctor_get(v_dateformat_4234_, 1);
lean_inc_ref(v_symbols_4235_);
lean_dec_ref(v_dateformat_4234_);
v_dayPeriodNarrow_4236_ = lean_ctor_get(v_symbols_4235_, 21);
lean_inc_ref(v_dayPeriodNarrow_4236_);
lean_dec_ref(v_symbols_4235_);
v___x_4237_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseDayPeriodFrom(v_dayPeriodNarrow_4236_, v_a_3782_);
return v___x_4237_;
}
default: 
{
lean_object* v_dateformat_4238_; lean_object* v_symbols_4239_; lean_object* v_dayPeriodShort_4240_; lean_object* v___x_4241_; 
v_dateformat_4238_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4238_);
lean_dec_ref(v_config_3780_);
v_symbols_4239_ = lean_ctor_get(v_dateformat_4238_, 1);
lean_inc_ref(v_symbols_4239_);
lean_dec_ref(v_dateformat_4238_);
v_dayPeriodShort_4240_ = lean_ctor_get(v_symbols_4239_, 19);
lean_inc_ref(v_dayPeriodShort_4240_);
lean_dec_ref(v_symbols_4239_);
v___x_4241_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseDayPeriodFrom(v_dayPeriodShort_4240_, v_a_3782_);
return v___x_4241_;
}
}
}
case 18:
{
uint8_t v_presentation_4242_; 
v_presentation_4242_ = lean_ctor_get_uint8(v_x_3781_, 0);
lean_dec_ref_known(v_x_3781_, 0);
switch(v_presentation_4242_)
{
case 1:
{
lean_object* v_dateformat_4243_; lean_object* v_symbols_4244_; lean_object* v_extendedDayPeriodLong_4245_; lean_object* v___x_4246_; 
v_dateformat_4243_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4243_);
lean_dec_ref(v_config_3780_);
v_symbols_4244_ = lean_ctor_get(v_dateformat_4243_, 1);
lean_inc_ref(v_symbols_4244_);
lean_dec_ref(v_dateformat_4243_);
v_extendedDayPeriodLong_4245_ = lean_ctor_get(v_symbols_4244_, 23);
lean_inc_ref(v_extendedDayPeriodLong_4245_);
lean_dec_ref(v_symbols_4244_);
v___x_4246_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseExtendedDayPeriodFrom(v_extendedDayPeriodLong_4245_, v_a_3782_);
lean_dec_ref(v_extendedDayPeriodLong_4245_);
return v___x_4246_;
}
case 2:
{
lean_object* v_dateformat_4247_; lean_object* v_symbols_4248_; lean_object* v_extendedDayPeriodNarrow_4249_; lean_object* v___x_4250_; 
v_dateformat_4247_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4247_);
lean_dec_ref(v_config_3780_);
v_symbols_4248_ = lean_ctor_get(v_dateformat_4247_, 1);
lean_inc_ref(v_symbols_4248_);
lean_dec_ref(v_dateformat_4247_);
v_extendedDayPeriodNarrow_4249_ = lean_ctor_get(v_symbols_4248_, 24);
lean_inc_ref(v_extendedDayPeriodNarrow_4249_);
lean_dec_ref(v_symbols_4248_);
v___x_4250_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseExtendedDayPeriodFrom(v_extendedDayPeriodNarrow_4249_, v_a_3782_);
lean_dec_ref(v_extendedDayPeriodNarrow_4249_);
return v___x_4250_;
}
default: 
{
lean_object* v_dateformat_4251_; lean_object* v_symbols_4252_; lean_object* v_extendedDayPeriodShort_4253_; lean_object* v___x_4254_; 
v_dateformat_4251_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_4251_);
lean_dec_ref(v_config_3780_);
v_symbols_4252_ = lean_ctor_get(v_dateformat_4251_, 1);
lean_inc_ref(v_symbols_4252_);
lean_dec_ref(v_dateformat_4251_);
v_extendedDayPeriodShort_4253_ = lean_ctor_get(v_symbols_4252_, 22);
lean_inc_ref(v_extendedDayPeriodShort_4253_);
lean_dec_ref(v_symbols_4252_);
v___x_4254_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseExtendedDayPeriodFrom(v_extendedDayPeriodShort_4253_, v_a_3782_);
lean_dec_ref(v_extendedDayPeriodShort_4253_);
return v___x_4254_;
}
}
}
case 19:
{
lean_object* v_presentation_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; 
lean_dec_ref(v_config_3780_);
v_presentation_4255_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_4255_);
lean_dec_ref_known(v_x_3781_, 1);
v___x_4256_ = lean_unsigned_to_nat(1u);
v___x_4257_ = lean_unsigned_to_nat(12u);
v___x_4258_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4258_, 0, v_presentation_4255_);
v___x_4259_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4256_, v___x_4257_, v___x_4258_, v_a_3782_);
return v___x_4259_;
}
case 20:
{
lean_object* v_presentation_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; 
lean_dec_ref(v_config_3780_);
v_presentation_4260_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_4260_);
lean_dec_ref_known(v_x_3781_, 1);
v___x_4261_ = lean_unsigned_to_nat(0u);
v___x_4262_ = lean_unsigned_to_nat(11u);
v___x_4263_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4263_, 0, v_presentation_4260_);
v___x_4264_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4261_, v___x_4262_, v___x_4263_, v_a_3782_);
return v___x_4264_;
}
case 21:
{
lean_object* v_presentation_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; 
lean_dec_ref(v_config_3780_);
v_presentation_4265_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_4265_);
lean_dec_ref_known(v_x_3781_, 1);
v___x_4266_ = lean_unsigned_to_nat(1u);
v___x_4267_ = lean_unsigned_to_nat(24u);
v___x_4268_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4268_, 0, v_presentation_4265_);
v___x_4269_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4266_, v___x_4267_, v___x_4268_, v_a_3782_);
return v___x_4269_;
}
case 22:
{
lean_object* v_presentation_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; 
lean_dec_ref(v_config_3780_);
v_presentation_4270_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_4270_);
lean_dec_ref_known(v_x_3781_, 1);
v___x_4271_ = lean_unsigned_to_nat(0u);
v___x_4272_ = lean_unsigned_to_nat(23u);
v___x_4273_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4273_, 0, v_presentation_4270_);
v___x_4274_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4271_, v___x_4272_, v___x_4273_, v_a_3782_);
return v___x_4274_;
}
case 23:
{
lean_object* v_presentation_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; 
lean_dec_ref(v_config_3780_);
v_presentation_4275_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_4275_);
lean_dec_ref_known(v_x_3781_, 1);
v___x_4276_ = lean_unsigned_to_nat(0u);
v___x_4277_ = lean_unsigned_to_nat(59u);
v___x_4278_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4278_, 0, v_presentation_4275_);
v___x_4279_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4276_, v___x_4277_, v___x_4278_, v_a_3782_);
return v___x_4279_;
}
case 24:
{
uint8_t v_allowLeapSeconds_4280_; 
v_allowLeapSeconds_4280_ = lean_ctor_get_uint8(v_config_3780_, sizeof(void*)*1);
lean_dec_ref(v_config_3780_);
if (v_allowLeapSeconds_4280_ == 0)
{
lean_object* v_presentation_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; 
v_presentation_4281_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_4281_);
lean_dec_ref_known(v_x_3781_, 1);
v___x_4282_ = lean_unsigned_to_nat(0u);
v___x_4283_ = lean_unsigned_to_nat(59u);
v___x_4284_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4284_, 0, v_presentation_4281_);
v___x_4285_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4282_, v___x_4283_, v___x_4284_, v_a_3782_);
if (lean_obj_tag(v___x_4285_) == 0)
{
lean_object* v_pos_4286_; lean_object* v_res_4287_; lean_object* v___x_4289_; uint8_t v_isShared_4290_; uint8_t v_isSharedCheck_4294_; 
v_pos_4286_ = lean_ctor_get(v___x_4285_, 0);
v_res_4287_ = lean_ctor_get(v___x_4285_, 1);
v_isSharedCheck_4294_ = !lean_is_exclusive(v___x_4285_);
if (v_isSharedCheck_4294_ == 0)
{
v___x_4289_ = v___x_4285_;
v_isShared_4290_ = v_isSharedCheck_4294_;
goto v_resetjp_4288_;
}
else
{
lean_inc(v_res_4287_);
lean_inc(v_pos_4286_);
lean_dec(v___x_4285_);
v___x_4289_ = lean_box(0);
v_isShared_4290_ = v_isSharedCheck_4294_;
goto v_resetjp_4288_;
}
v_resetjp_4288_:
{
lean_object* v___x_4292_; 
if (v_isShared_4290_ == 0)
{
v___x_4292_ = v___x_4289_;
goto v_reusejp_4291_;
}
else
{
lean_object* v_reuseFailAlloc_4293_; 
v_reuseFailAlloc_4293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4293_, 0, v_pos_4286_);
lean_ctor_set(v_reuseFailAlloc_4293_, 1, v_res_4287_);
v___x_4292_ = v_reuseFailAlloc_4293_;
goto v_reusejp_4291_;
}
v_reusejp_4291_:
{
return v___x_4292_;
}
}
}
else
{
return v___x_4285_;
}
}
else
{
lean_object* v_presentation_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; 
v_presentation_4295_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_4295_);
lean_dec_ref_known(v_x_3781_, 1);
v___x_4296_ = lean_unsigned_to_nat(0u);
v___x_4297_ = lean_unsigned_to_nat(60u);
v___x_4298_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4298_, 0, v_presentation_4295_);
v___x_4299_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4296_, v___x_4297_, v___x_4298_, v_a_3782_);
return v___x_4299_;
}
}
case 25:
{
lean_object* v_presentation_4300_; 
lean_dec_ref(v_config_3780_);
v_presentation_4300_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_4300_);
lean_dec_ref_known(v_x_3781_, 1);
if (lean_obj_tag(v_presentation_4300_) == 0)
{
lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; 
v___x_4301_ = lean_unsigned_to_nat(0u);
v___x_4302_ = lean_unsigned_to_nat(999999999u);
v___x_4303_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseWith___closed__7));
v___x_4304_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4301_, v___x_4302_, v___x_4303_, v_a_3782_);
return v___x_4304_;
}
else
{
lean_object* v_digits_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; 
v_digits_4305_ = lean_ctor_get(v_presentation_4300_, 0);
lean_inc(v_digits_4305_);
lean_dec_ref_known(v_presentation_4300_, 1);
v___x_4306_ = lean_unsigned_to_nat(0u);
v___x_4307_ = lean_unsigned_to_nat(999999999u);
v___x_4308_ = lean_unsigned_to_nat(9u);
v___x_4309_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFractionNum___boxed), 3, 2);
lean_closure_set(v___x_4309_, 0, v_digits_4305_);
lean_closure_set(v___x_4309_, 1, v___x_4308_);
v___x_4310_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4306_, v___x_4307_, v___x_4309_, v_a_3782_);
return v___x_4310_;
}
}
case 26:
{
lean_object* v_presentation_4311_; lean_object* v___x_4312_; 
lean_dec_ref(v_config_3780_);
v_presentation_4311_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_4311_);
lean_dec_ref_known(v_x_3781_, 1);
v___x_4312_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum(v_presentation_4311_, v_a_3782_);
lean_dec(v_presentation_4311_);
if (lean_obj_tag(v___x_4312_) == 0)
{
lean_object* v_pos_4313_; lean_object* v_res_4314_; lean_object* v___x_4316_; uint8_t v_isShared_4317_; uint8_t v_isSharedCheck_4322_; 
v_pos_4313_ = lean_ctor_get(v___x_4312_, 0);
v_res_4314_ = lean_ctor_get(v___x_4312_, 1);
v_isSharedCheck_4322_ = !lean_is_exclusive(v___x_4312_);
if (v_isSharedCheck_4322_ == 0)
{
v___x_4316_ = v___x_4312_;
v_isShared_4317_ = v_isSharedCheck_4322_;
goto v_resetjp_4315_;
}
else
{
lean_inc(v_res_4314_);
lean_inc(v_pos_4313_);
lean_dec(v___x_4312_);
v___x_4316_ = lean_box(0);
v_isShared_4317_ = v_isSharedCheck_4322_;
goto v_resetjp_4315_;
}
v_resetjp_4315_:
{
lean_object* v___x_4318_; lean_object* v___x_4320_; 
v___x_4318_ = lean_nat_to_int(v_res_4314_);
if (v_isShared_4317_ == 0)
{
lean_ctor_set(v___x_4316_, 1, v___x_4318_);
v___x_4320_ = v___x_4316_;
goto v_reusejp_4319_;
}
else
{
lean_object* v_reuseFailAlloc_4321_; 
v_reuseFailAlloc_4321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4321_, 0, v_pos_4313_);
lean_ctor_set(v_reuseFailAlloc_4321_, 1, v___x_4318_);
v___x_4320_ = v_reuseFailAlloc_4321_;
goto v_reusejp_4319_;
}
v_reusejp_4319_:
{
return v___x_4320_;
}
}
}
else
{
lean_object* v_pos_4323_; lean_object* v_err_4324_; lean_object* v___x_4326_; uint8_t v_isShared_4327_; uint8_t v_isSharedCheck_4331_; 
v_pos_4323_ = lean_ctor_get(v___x_4312_, 0);
v_err_4324_ = lean_ctor_get(v___x_4312_, 1);
v_isSharedCheck_4331_ = !lean_is_exclusive(v___x_4312_);
if (v_isSharedCheck_4331_ == 0)
{
v___x_4326_ = v___x_4312_;
v_isShared_4327_ = v_isSharedCheck_4331_;
goto v_resetjp_4325_;
}
else
{
lean_inc(v_err_4324_);
lean_inc(v_pos_4323_);
lean_dec(v___x_4312_);
v___x_4326_ = lean_box(0);
v_isShared_4327_ = v_isSharedCheck_4331_;
goto v_resetjp_4325_;
}
v_resetjp_4325_:
{
lean_object* v___x_4329_; 
if (v_isShared_4327_ == 0)
{
v___x_4329_ = v___x_4326_;
goto v_reusejp_4328_;
}
else
{
lean_object* v_reuseFailAlloc_4330_; 
v_reuseFailAlloc_4330_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4330_, 0, v_pos_4323_);
lean_ctor_set(v_reuseFailAlloc_4330_, 1, v_err_4324_);
v___x_4329_ = v_reuseFailAlloc_4330_;
goto v_reusejp_4328_;
}
v_reusejp_4328_:
{
return v___x_4329_;
}
}
}
}
case 27:
{
lean_object* v_presentation_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; 
lean_dec_ref(v_config_3780_);
v_presentation_4332_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_4332_);
lean_dec_ref_known(v_x_3781_, 1);
v___x_4333_ = lean_unsigned_to_nat(0u);
v___x_4334_ = lean_unsigned_to_nat(999999999u);
v___x_4335_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum___boxed), 2, 1);
lean_closure_set(v___x_4335_, 0, v_presentation_4332_);
v___x_4336_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseNatToBounded(v___x_4333_, v___x_4334_, v___x_4335_, v_a_3782_);
return v___x_4336_;
}
case 28:
{
lean_object* v_presentation_4337_; lean_object* v___x_4338_; 
lean_dec_ref(v_config_3780_);
v_presentation_4337_ = lean_ctor_get(v_x_3781_, 0);
lean_inc(v_presentation_4337_);
lean_dec_ref_known(v_x_3781_, 1);
v___x_4338_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseFlexibleNum(v_presentation_4337_, v_a_3782_);
lean_dec(v_presentation_4337_);
if (lean_obj_tag(v___x_4338_) == 0)
{
lean_object* v_pos_4339_; lean_object* v_res_4340_; lean_object* v___x_4342_; uint8_t v_isShared_4343_; uint8_t v_isSharedCheck_4348_; 
v_pos_4339_ = lean_ctor_get(v___x_4338_, 0);
v_res_4340_ = lean_ctor_get(v___x_4338_, 1);
v_isSharedCheck_4348_ = !lean_is_exclusive(v___x_4338_);
if (v_isSharedCheck_4348_ == 0)
{
v___x_4342_ = v___x_4338_;
v_isShared_4343_ = v_isSharedCheck_4348_;
goto v_resetjp_4341_;
}
else
{
lean_inc(v_res_4340_);
lean_inc(v_pos_4339_);
lean_dec(v___x_4338_);
v___x_4342_ = lean_box(0);
v_isShared_4343_ = v_isSharedCheck_4348_;
goto v_resetjp_4341_;
}
v_resetjp_4341_:
{
lean_object* v___x_4344_; lean_object* v___x_4346_; 
v___x_4344_ = lean_nat_to_int(v_res_4340_);
if (v_isShared_4343_ == 0)
{
lean_ctor_set(v___x_4342_, 1, v___x_4344_);
v___x_4346_ = v___x_4342_;
goto v_reusejp_4345_;
}
else
{
lean_object* v_reuseFailAlloc_4347_; 
v_reuseFailAlloc_4347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4347_, 0, v_pos_4339_);
lean_ctor_set(v_reuseFailAlloc_4347_, 1, v___x_4344_);
v___x_4346_ = v_reuseFailAlloc_4347_;
goto v_reusejp_4345_;
}
v_reusejp_4345_:
{
return v___x_4346_;
}
}
}
else
{
lean_object* v_pos_4349_; lean_object* v_err_4350_; lean_object* v___x_4352_; uint8_t v_isShared_4353_; uint8_t v_isSharedCheck_4357_; 
v_pos_4349_ = lean_ctor_get(v___x_4338_, 0);
v_err_4350_ = lean_ctor_get(v___x_4338_, 1);
v_isSharedCheck_4357_ = !lean_is_exclusive(v___x_4338_);
if (v_isSharedCheck_4357_ == 0)
{
v___x_4352_ = v___x_4338_;
v_isShared_4353_ = v_isSharedCheck_4357_;
goto v_resetjp_4351_;
}
else
{
lean_inc(v_err_4350_);
lean_inc(v_pos_4349_);
lean_dec(v___x_4338_);
v___x_4352_ = lean_box(0);
v_isShared_4353_ = v_isSharedCheck_4357_;
goto v_resetjp_4351_;
}
v_resetjp_4351_:
{
lean_object* v___x_4355_; 
if (v_isShared_4353_ == 0)
{
v___x_4355_ = v___x_4352_;
goto v_reusejp_4354_;
}
else
{
lean_object* v_reuseFailAlloc_4356_; 
v_reuseFailAlloc_4356_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4356_, 0, v_pos_4349_);
lean_ctor_set(v_reuseFailAlloc_4356_, 1, v_err_4350_);
v___x_4355_ = v_reuseFailAlloc_4356_;
goto v_reusejp_4354_;
}
v_reusejp_4354_:
{
return v___x_4355_;
}
}
}
}
case 29:
{
uint8_t v_presentation_4358_; 
lean_dec_ref(v_config_3780_);
v_presentation_4358_ = lean_ctor_get_uint8(v_x_3781_, 0);
lean_dec_ref_known(v_x_3781_, 0);
if (v_presentation_4358_ == 0)
{
lean_object* v___x_4359_; lean_object* v___x_4360_; 
v___x_4359_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__2));
v___x_4360_ = l_Std_Internal_Parsec_String_pstring(v___x_4359_, v_a_3782_);
if (lean_obj_tag(v___x_4360_) == 0)
{
lean_object* v_pos_4361_; lean_object* v___x_4363_; uint8_t v_isShared_4364_; uint8_t v_isSharedCheck_4368_; 
v_pos_4361_ = lean_ctor_get(v___x_4360_, 0);
v_isSharedCheck_4368_ = !lean_is_exclusive(v___x_4360_);
if (v_isSharedCheck_4368_ == 0)
{
lean_object* v_unused_4369_; 
v_unused_4369_ = lean_ctor_get(v___x_4360_, 1);
lean_dec(v_unused_4369_);
v___x_4363_ = v___x_4360_;
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
else
{
lean_inc(v_pos_4361_);
lean_dec(v___x_4360_);
v___x_4363_ = lean_box(0);
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
v_resetjp_4362_:
{
lean_object* v___x_4366_; 
if (v_isShared_4364_ == 0)
{
lean_ctor_set(v___x_4363_, 1, v___x_4359_);
v___x_4366_ = v___x_4363_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4367_; 
v_reuseFailAlloc_4367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4367_, 0, v_pos_4361_);
lean_ctor_set(v_reuseFailAlloc_4367_, 1, v___x_4359_);
v___x_4366_ = v_reuseFailAlloc_4367_;
goto v_reusejp_4365_;
}
v_reusejp_4365_:
{
return v___x_4366_;
}
}
}
else
{
return v___x_4360_;
}
}
else
{
lean_object* v___x_4370_; 
v___x_4370_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier(v_a_3782_);
return v___x_4370_;
}
}
case 32:
{
uint8_t v_presentation_4371_; 
lean_dec_ref(v_config_3780_);
v_presentation_4371_ = lean_ctor_get_uint8(v_x_3781_, 0);
lean_dec_ref_known(v_x_3781_, 0);
if (v_presentation_4371_ == 0)
{
lean_object* v___x_4372_; lean_object* v___x_4373_; 
v___x_4372_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_4373_ = l_Std_Internal_Parsec_String_pstring(v___x_4372_, v_a_3782_);
if (lean_obj_tag(v___x_4373_) == 0)
{
lean_object* v_pos_4374_; uint8_t v___x_4375_; uint8_t v___x_4376_; uint8_t v___x_4377_; lean_object* v___x_4378_; 
v_pos_4374_ = lean_ctor_get(v___x_4373_, 0);
lean_inc(v_pos_4374_);
lean_dec_ref_known(v___x_4373_, 2);
v___x_4375_ = 2;
v___x_4376_ = 1;
v___x_4377_ = 1;
v___x_4378_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4375_, v___x_4376_, v___x_4377_, v_pos_4374_);
return v___x_4378_;
}
else
{
lean_object* v_pos_4379_; lean_object* v_err_4380_; lean_object* v___x_4382_; uint8_t v_isShared_4383_; uint8_t v_isSharedCheck_4387_; 
v_pos_4379_ = lean_ctor_get(v___x_4373_, 0);
v_err_4380_ = lean_ctor_get(v___x_4373_, 1);
v_isSharedCheck_4387_ = !lean_is_exclusive(v___x_4373_);
if (v_isSharedCheck_4387_ == 0)
{
v___x_4382_ = v___x_4373_;
v_isShared_4383_ = v_isSharedCheck_4387_;
goto v_resetjp_4381_;
}
else
{
lean_inc(v_err_4380_);
lean_inc(v_pos_4379_);
lean_dec(v___x_4373_);
v___x_4382_ = lean_box(0);
v_isShared_4383_ = v_isSharedCheck_4387_;
goto v_resetjp_4381_;
}
v_resetjp_4381_:
{
lean_object* v___x_4385_; 
if (v_isShared_4383_ == 0)
{
v___x_4385_ = v___x_4382_;
goto v_reusejp_4384_;
}
else
{
lean_object* v_reuseFailAlloc_4386_; 
v_reuseFailAlloc_4386_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4386_, 0, v_pos_4379_);
lean_ctor_set(v_reuseFailAlloc_4386_, 1, v_err_4380_);
v___x_4385_ = v_reuseFailAlloc_4386_;
goto v_reusejp_4384_;
}
v_reusejp_4384_:
{
return v___x_4385_;
}
}
}
}
else
{
lean_object* v___x_4388_; lean_object* v___x_4389_; 
v___x_4388_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_4389_ = l_Std_Internal_Parsec_String_pstring(v___x_4388_, v_a_3782_);
if (lean_obj_tag(v___x_4389_) == 0)
{
lean_object* v_pos_4390_; uint8_t v___x_4391_; uint8_t v___x_4392_; uint8_t v___x_4393_; lean_object* v___x_4394_; 
v_pos_4390_ = lean_ctor_get(v___x_4389_, 0);
lean_inc(v_pos_4390_);
lean_dec_ref_known(v___x_4389_, 2);
v___x_4391_ = 0;
v___x_4392_ = 2;
v___x_4393_ = 1;
v___x_4394_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4391_, v___x_4392_, v___x_4393_, v_pos_4390_);
return v___x_4394_;
}
else
{
lean_object* v_pos_4395_; lean_object* v_err_4396_; lean_object* v___x_4398_; uint8_t v_isShared_4399_; uint8_t v_isSharedCheck_4403_; 
v_pos_4395_ = lean_ctor_get(v___x_4389_, 0);
v_err_4396_ = lean_ctor_get(v___x_4389_, 1);
v_isSharedCheck_4403_ = !lean_is_exclusive(v___x_4389_);
if (v_isSharedCheck_4403_ == 0)
{
v___x_4398_ = v___x_4389_;
v_isShared_4399_ = v_isSharedCheck_4403_;
goto v_resetjp_4397_;
}
else
{
lean_inc(v_err_4396_);
lean_inc(v_pos_4395_);
lean_dec(v___x_4389_);
v___x_4398_ = lean_box(0);
v_isShared_4399_ = v_isSharedCheck_4403_;
goto v_resetjp_4397_;
}
v_resetjp_4397_:
{
lean_object* v___x_4401_; 
if (v_isShared_4399_ == 0)
{
v___x_4401_ = v___x_4398_;
goto v_reusejp_4400_;
}
else
{
lean_object* v_reuseFailAlloc_4402_; 
v_reuseFailAlloc_4402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4402_, 0, v_pos_4395_);
lean_ctor_set(v_reuseFailAlloc_4402_, 1, v_err_4396_);
v___x_4401_ = v_reuseFailAlloc_4402_;
goto v_reusejp_4400_;
}
v_reusejp_4400_:
{
return v___x_4401_;
}
}
}
}
}
case 33:
{
uint8_t v_presentation_4404_; 
lean_dec_ref(v_config_3780_);
v_presentation_4404_ = lean_ctor_get_uint8(v_x_3781_, 0);
lean_dec_ref_known(v_x_3781_, 0);
switch(v_presentation_4404_)
{
case 0:
{
uint8_t v___x_4405_; uint8_t v___x_4406_; uint8_t v___x_4407_; lean_object* v___x_4408_; 
v___x_4405_ = 2;
v___x_4406_ = 1;
v___x_4407_ = 0;
lean_inc_ref(v_a_3782_);
v___x_4408_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4405_, v___x_4406_, v___x_4407_, v_a_3782_);
v___y_3794_ = v___x_4408_;
goto v___jp_3793_;
}
case 1:
{
uint8_t v___x_4409_; uint8_t v___x_4410_; uint8_t v___x_4411_; lean_object* v___x_4412_; 
v___x_4409_ = 0;
v___x_4410_ = 1;
v___x_4411_ = 0;
lean_inc_ref(v_a_3782_);
v___x_4412_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4409_, v___x_4410_, v___x_4411_, v_a_3782_);
v___y_3794_ = v___x_4412_;
goto v___jp_3793_;
}
case 2:
{
uint8_t v___x_4413_; uint8_t v___x_4414_; uint8_t v___x_4415_; lean_object* v___x_4416_; 
v___x_4413_ = 0;
v___x_4414_ = 1;
v___x_4415_ = 1;
lean_inc_ref(v_a_3782_);
v___x_4416_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4413_, v___x_4414_, v___x_4415_, v_a_3782_);
v___y_3794_ = v___x_4416_;
goto v___jp_3793_;
}
case 3:
{
uint8_t v___x_4417_; uint8_t v___x_4418_; uint8_t v___x_4419_; lean_object* v___x_4420_; 
v___x_4417_ = 0;
v___x_4418_ = 2;
v___x_4419_ = 0;
lean_inc_ref(v_a_3782_);
v___x_4420_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4417_, v___x_4418_, v___x_4419_, v_a_3782_);
v___y_3794_ = v___x_4420_;
goto v___jp_3793_;
}
default: 
{
uint8_t v___x_4421_; uint8_t v___x_4422_; uint8_t v___x_4423_; lean_object* v___x_4424_; 
v___x_4421_ = 0;
v___x_4422_ = 2;
v___x_4423_ = 1;
lean_inc_ref(v_a_3782_);
v___x_4424_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4421_, v___x_4422_, v___x_4423_, v_a_3782_);
v___y_3794_ = v___x_4424_;
goto v___jp_3793_;
}
}
}
case 34:
{
uint8_t v_presentation_4425_; 
lean_dec_ref(v_config_3780_);
v_presentation_4425_ = lean_ctor_get_uint8(v_x_3781_, 0);
lean_dec_ref_known(v_x_3781_, 0);
switch(v_presentation_4425_)
{
case 0:
{
uint8_t v___x_4426_; uint8_t v___x_4427_; uint8_t v___x_4428_; lean_object* v___x_4429_; 
v___x_4426_ = 2;
v___x_4427_ = 1;
v___x_4428_ = 0;
v___x_4429_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4426_, v___x_4427_, v___x_4428_, v_a_3782_);
return v___x_4429_;
}
case 1:
{
uint8_t v___x_4430_; uint8_t v___x_4431_; uint8_t v___x_4432_; lean_object* v___x_4433_; 
v___x_4430_ = 0;
v___x_4431_ = 1;
v___x_4432_ = 0;
v___x_4433_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4430_, v___x_4431_, v___x_4432_, v_a_3782_);
return v___x_4433_;
}
case 2:
{
uint8_t v___x_4434_; uint8_t v___x_4435_; uint8_t v___x_4436_; lean_object* v___x_4437_; 
v___x_4434_ = 0;
v___x_4435_ = 2;
v___x_4436_ = 1;
v___x_4437_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4434_, v___x_4435_, v___x_4436_, v_a_3782_);
return v___x_4437_;
}
case 3:
{
uint8_t v___x_4438_; uint8_t v___x_4439_; uint8_t v___x_4440_; lean_object* v___x_4441_; 
v___x_4438_ = 0;
v___x_4439_ = 2;
v___x_4440_ = 0;
v___x_4441_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4438_, v___x_4439_, v___x_4440_, v_a_3782_);
return v___x_4441_;
}
default: 
{
uint8_t v___x_4442_; uint8_t v___x_4443_; lean_object* v___x_4444_; 
v___x_4442_ = 0;
v___x_4443_ = 1;
v___x_4444_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4442_, v___x_4442_, v___x_4443_, v_a_3782_);
return v___x_4444_;
}
}
}
case 35:
{
uint8_t v_presentation_4445_; 
lean_dec_ref(v_config_3780_);
v_presentation_4445_ = lean_ctor_get_uint8(v_x_3781_, 0);
lean_dec_ref_known(v_x_3781_, 0);
switch(v_presentation_4445_)
{
case 0:
{
uint8_t v___x_4446_; uint8_t v___x_4447_; uint8_t v___x_4448_; lean_object* v___x_4449_; 
v___x_4446_ = 0;
v___x_4447_ = 1;
v___x_4448_ = 0;
v___x_4449_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4446_, v___x_4447_, v___x_4448_, v_a_3782_);
return v___x_4449_;
}
case 1:
{
lean_object* v___x_4450_; lean_object* v___x_4451_; 
v___x_4450_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__3));
v___x_4451_ = l_Std_Internal_Parsec_String_pstring(v___x_4450_, v_a_3782_);
if (lean_obj_tag(v___x_4451_) == 0)
{
lean_object* v_pos_4452_; uint8_t v___x_4453_; uint8_t v___x_4454_; uint8_t v___x_4455_; lean_object* v___x_4456_; 
v_pos_4452_ = lean_ctor_get(v___x_4451_, 0);
lean_inc_n(v_pos_4452_, 2);
lean_dec_ref_known(v___x_4451_, 2);
v___x_4453_ = 0;
v___x_4454_ = 1;
v___x_4455_ = 1;
v___x_4456_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4453_, v___x_4454_, v___x_4455_, v_pos_4452_);
if (lean_obj_tag(v___x_4456_) == 0)
{
lean_dec(v_pos_4452_);
return v___x_4456_;
}
else
{
lean_object* v_pos_4457_; lean_object* v_snd_4458_; lean_object* v_snd_4459_; uint8_t v_decide_4460_; 
v_pos_4457_ = lean_ctor_get(v___x_4456_, 0);
v_snd_4458_ = lean_ctor_get(v_pos_4452_, 1);
lean_inc(v_snd_4458_);
lean_dec(v_pos_4452_);
v_snd_4459_ = lean_ctor_get(v_pos_4457_, 1);
v_decide_4460_ = lean_nat_dec_eq(v_snd_4458_, v_snd_4459_);
lean_dec(v_snd_4458_);
if (v_decide_4460_ == 0)
{
return v___x_4456_;
}
else
{
lean_object* v___x_4462_; uint8_t v_isShared_4463_; uint8_t v_isSharedCheck_4468_; 
lean_inc(v_pos_4457_);
v_isSharedCheck_4468_ = !lean_is_exclusive(v___x_4456_);
if (v_isSharedCheck_4468_ == 0)
{
lean_object* v_unused_4469_; lean_object* v_unused_4470_; 
v_unused_4469_ = lean_ctor_get(v___x_4456_, 1);
lean_dec(v_unused_4469_);
v_unused_4470_ = lean_ctor_get(v___x_4456_, 0);
lean_dec(v_unused_4470_);
v___x_4462_ = v___x_4456_;
v_isShared_4463_ = v_isSharedCheck_4468_;
goto v_resetjp_4461_;
}
else
{
lean_dec(v___x_4456_);
v___x_4462_ = lean_box(0);
v_isShared_4463_ = v_isSharedCheck_4468_;
goto v_resetjp_4461_;
}
v_resetjp_4461_:
{
lean_object* v___x_4464_; lean_object* v___x_4466_; 
v___x_4464_ = l_Std_Time_TimeZone_Offset_zero;
if (v_isShared_4463_ == 0)
{
lean_ctor_set_tag(v___x_4462_, 0);
lean_ctor_set(v___x_4462_, 1, v___x_4464_);
v___x_4466_ = v___x_4462_;
goto v_reusejp_4465_;
}
else
{
lean_object* v_reuseFailAlloc_4467_; 
v_reuseFailAlloc_4467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4467_, 0, v_pos_4457_);
lean_ctor_set(v_reuseFailAlloc_4467_, 1, v___x_4464_);
v___x_4466_ = v_reuseFailAlloc_4467_;
goto v_reusejp_4465_;
}
v_reusejp_4465_:
{
return v___x_4466_;
}
}
}
}
}
else
{
lean_object* v_pos_4471_; lean_object* v_err_4472_; lean_object* v___x_4474_; uint8_t v_isShared_4475_; uint8_t v_isSharedCheck_4479_; 
v_pos_4471_ = lean_ctor_get(v___x_4451_, 0);
v_err_4472_ = lean_ctor_get(v___x_4451_, 1);
v_isSharedCheck_4479_ = !lean_is_exclusive(v___x_4451_);
if (v_isSharedCheck_4479_ == 0)
{
v___x_4474_ = v___x_4451_;
v_isShared_4475_ = v_isSharedCheck_4479_;
goto v_resetjp_4473_;
}
else
{
lean_inc(v_err_4472_);
lean_inc(v_pos_4471_);
lean_dec(v___x_4451_);
v___x_4474_ = lean_box(0);
v_isShared_4475_ = v_isSharedCheck_4479_;
goto v_resetjp_4473_;
}
v_resetjp_4473_:
{
lean_object* v___x_4477_; 
if (v_isShared_4475_ == 0)
{
v___x_4477_ = v___x_4474_;
goto v_reusejp_4476_;
}
else
{
lean_object* v_reuseFailAlloc_4478_; 
v_reuseFailAlloc_4478_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4478_, 0, v_pos_4471_);
lean_ctor_set(v_reuseFailAlloc_4478_, 1, v_err_4472_);
v___x_4477_ = v_reuseFailAlloc_4478_;
goto v_reusejp_4476_;
}
v_reusejp_4476_:
{
return v___x_4477_;
}
}
}
}
default: 
{
lean_object* v___x_4480_; lean_object* v___x_4481_; 
v___x_4480_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4));
lean_inc_ref(v_a_3782_);
v___x_4481_ = l_Std_Internal_Parsec_String_pstring(v___x_4480_, v_a_3782_);
if (lean_obj_tag(v___x_4481_) == 0)
{
lean_object* v_pos_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4490_; 
lean_dec_ref(v_a_3782_);
v_pos_4482_ = lean_ctor_get(v___x_4481_, 0);
v_isSharedCheck_4490_ = !lean_is_exclusive(v___x_4481_);
if (v_isSharedCheck_4490_ == 0)
{
lean_object* v_unused_4491_; 
v_unused_4491_ = lean_ctor_get(v___x_4481_, 1);
lean_dec(v_unused_4491_);
v___x_4484_ = v___x_4481_;
v_isShared_4485_ = v_isSharedCheck_4490_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_pos_4482_);
lean_dec(v___x_4481_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4490_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
lean_object* v___x_4486_; lean_object* v___x_4488_; 
v___x_4486_ = l_Std_Time_TimeZone_Offset_zero;
if (v_isShared_4485_ == 0)
{
lean_ctor_set(v___x_4484_, 1, v___x_4486_);
v___x_4488_ = v___x_4484_;
goto v_reusejp_4487_;
}
else
{
lean_object* v_reuseFailAlloc_4489_; 
v_reuseFailAlloc_4489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4489_, 0, v_pos_4482_);
lean_ctor_set(v_reuseFailAlloc_4489_, 1, v___x_4486_);
v___x_4488_ = v_reuseFailAlloc_4489_;
goto v_reusejp_4487_;
}
v_reusejp_4487_:
{
return v___x_4488_;
}
}
}
else
{
lean_object* v_pos_4492_; lean_object* v_err_4493_; lean_object* v___x_4495_; uint8_t v_isShared_4496_; uint8_t v_isSharedCheck_4506_; 
v_pos_4492_ = lean_ctor_get(v___x_4481_, 0);
v_err_4493_ = lean_ctor_get(v___x_4481_, 1);
v_isSharedCheck_4506_ = !lean_is_exclusive(v___x_4481_);
if (v_isSharedCheck_4506_ == 0)
{
v___x_4495_ = v___x_4481_;
v_isShared_4496_ = v_isSharedCheck_4506_;
goto v_resetjp_4494_;
}
else
{
lean_inc(v_err_4493_);
lean_inc(v_pos_4492_);
lean_dec(v___x_4481_);
v___x_4495_ = lean_box(0);
v_isShared_4496_ = v_isSharedCheck_4506_;
goto v_resetjp_4494_;
}
v_resetjp_4494_:
{
lean_object* v_snd_4497_; lean_object* v_snd_4498_; uint8_t v_decide_4499_; 
v_snd_4497_ = lean_ctor_get(v_a_3782_, 1);
lean_inc(v_snd_4497_);
lean_dec_ref(v_a_3782_);
v_snd_4498_ = lean_ctor_get(v_pos_4492_, 1);
v_decide_4499_ = lean_nat_dec_eq(v_snd_4497_, v_snd_4498_);
lean_dec(v_snd_4497_);
if (v_decide_4499_ == 0)
{
lean_object* v___x_4501_; 
if (v_isShared_4496_ == 0)
{
v___x_4501_ = v___x_4495_;
goto v_reusejp_4500_;
}
else
{
lean_object* v_reuseFailAlloc_4502_; 
v_reuseFailAlloc_4502_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4502_, 0, v_pos_4492_);
lean_ctor_set(v_reuseFailAlloc_4502_, 1, v_err_4493_);
v___x_4501_ = v_reuseFailAlloc_4502_;
goto v_reusejp_4500_;
}
v_reusejp_4500_:
{
return v___x_4501_;
}
}
else
{
uint8_t v___x_4503_; uint8_t v___x_4504_; lean_object* v___x_4505_; 
lean_del_object(v___x_4495_);
lean_dec(v_err_4493_);
v___x_4503_ = 0;
v___x_4504_ = 2;
v___x_4505_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset(v___x_4503_, v___x_4504_, v_decide_4499_, v_pos_4492_);
return v___x_4505_;
}
}
}
}
}
}
default: 
{
lean_object* v___x_4507_; 
lean_dec_ref(v_x_3781_);
lean_dec_ref(v_config_3780_);
v___x_4507_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseIdentifier(v_a_3782_);
return v___x_4507_;
}
}
v___jp_3783_:
{
lean_object* v_dateformat_3785_; lean_object* v_symbols_3786_; lean_object* v___x_3787_; 
v_dateformat_3785_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_3785_);
lean_dec_ref(v_config_3780_);
v_symbols_3786_ = lean_ctor_get(v_dateformat_3785_, 1);
lean_inc_ref(v_symbols_3786_);
lean_dec_ref(v_dateformat_3785_);
v___x_3787_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNarrow(v_symbols_3786_, v___y_3784_);
return v___x_3787_;
}
v___jp_3788_:
{
lean_object* v_dateformat_3790_; lean_object* v_symbols_3791_; lean_object* v___x_3792_; 
v_dateformat_3790_ = lean_ctor_get(v_config_3780_, 0);
lean_inc_ref(v_dateformat_3790_);
lean_dec_ref(v_config_3780_);
v_symbols_3791_ = lean_ctor_get(v_dateformat_3790_, 1);
lean_inc_ref(v_symbols_3791_);
lean_dec_ref(v_dateformat_3790_);
v___x_3792_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseQuarterNarrow(v_symbols_3791_, v___y_3789_);
return v___x_3792_;
}
v___jp_3793_:
{
if (lean_obj_tag(v___y_3794_) == 0)
{
lean_dec_ref(v_a_3782_);
return v___y_3794_;
}
else
{
lean_object* v_pos_3795_; lean_object* v_snd_3796_; lean_object* v_snd_3797_; uint8_t v_decide_3798_; 
v_pos_3795_ = lean_ctor_get(v___y_3794_, 0);
v_snd_3796_ = lean_ctor_get(v_a_3782_, 1);
lean_inc(v_snd_3796_);
lean_dec_ref(v_a_3782_);
v_snd_3797_ = lean_ctor_get(v_pos_3795_, 1);
v_decide_3798_ = lean_nat_dec_eq(v_snd_3796_, v_snd_3797_);
lean_dec(v_snd_3796_);
if (v_decide_3798_ == 0)
{
return v___y_3794_;
}
else
{
lean_object* v___x_3799_; lean_object* v___x_3800_; 
lean_inc(v_pos_3795_);
lean_dec_ref_known(v___y_3794_, 2);
v___x_3799_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__4));
v___x_3800_ = l_Std_Internal_Parsec_String_pstring(v___x_3799_, v_pos_3795_);
if (lean_obj_tag(v___x_3800_) == 0)
{
lean_object* v_pos_3801_; lean_object* v___x_3803_; uint8_t v_isShared_3804_; uint8_t v_isSharedCheck_3809_; 
v_pos_3801_ = lean_ctor_get(v___x_3800_, 0);
v_isSharedCheck_3809_ = !lean_is_exclusive(v___x_3800_);
if (v_isSharedCheck_3809_ == 0)
{
lean_object* v_unused_3810_; 
v_unused_3810_ = lean_ctor_get(v___x_3800_, 1);
lean_dec(v_unused_3810_);
v___x_3803_ = v___x_3800_;
v_isShared_3804_ = v_isSharedCheck_3809_;
goto v_resetjp_3802_;
}
else
{
lean_inc(v_pos_3801_);
lean_dec(v___x_3800_);
v___x_3803_ = lean_box(0);
v_isShared_3804_ = v_isSharedCheck_3809_;
goto v_resetjp_3802_;
}
v_resetjp_3802_:
{
lean_object* v___x_3805_; lean_object* v___x_3807_; 
v___x_3805_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
if (v_isShared_3804_ == 0)
{
lean_ctor_set(v___x_3803_, 1, v___x_3805_);
v___x_3807_ = v___x_3803_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v_pos_3801_);
lean_ctor_set(v_reuseFailAlloc_3808_, 1, v___x_3805_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
}
else
{
lean_object* v_pos_3811_; lean_object* v_err_3812_; lean_object* v___x_3814_; uint8_t v_isShared_3815_; uint8_t v_isSharedCheck_3819_; 
v_pos_3811_ = lean_ctor_get(v___x_3800_, 0);
v_err_3812_ = lean_ctor_get(v___x_3800_, 1);
v_isSharedCheck_3819_ = !lean_is_exclusive(v___x_3800_);
if (v_isSharedCheck_3819_ == 0)
{
v___x_3814_ = v___x_3800_;
v_isShared_3815_ = v_isSharedCheck_3819_;
goto v_resetjp_3813_;
}
else
{
lean_inc(v_err_3812_);
lean_inc(v_pos_3811_);
lean_dec(v___x_3800_);
v___x_3814_ = lean_box(0);
v_isShared_3815_ = v_isSharedCheck_3819_;
goto v_resetjp_3813_;
}
v_resetjp_3813_:
{
lean_object* v___x_3817_; 
if (v_isShared_3815_ == 0)
{
v___x_3817_ = v___x_3814_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3818_; 
v_reuseFailAlloc_3818_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3818_, 0, v_pos_3811_);
lean_ctor_set(v_reuseFailAlloc_3818_, 1, v_err_3812_);
v___x_3817_ = v_reuseFailAlloc_3818_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
return v___x_3817_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatPartWithDate(lean_object* v_dateformat_4508_, lean_object* v_date_4509_, lean_object* v_part_4510_){
_start:
{
if (lean_obj_tag(v_part_4510_) == 0)
{
lean_object* v_val_4511_; 
lean_dec_ref(v_date_4509_);
v_val_4511_ = lean_ctor_get(v_part_4510_, 0);
lean_inc_ref(v_val_4511_);
lean_dec_ref_known(v_part_4510_, 1);
return v_val_4511_;
}
else
{
lean_object* v_modifier_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; 
v_modifier_4512_ = lean_ctor_get(v_part_4510_, 0);
lean_inc_ref(v_modifier_4512_);
lean_dec_ref_known(v_part_4510_, 1);
v___x_4513_ = l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier(v_modifier_4512_, v_dateformat_4508_, v_date_4509_);
v___x_4514_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWith(v_dateformat_4508_, v_modifier_4512_, v___x_4513_);
return v___x_4514_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_formatPartWithDate___boxed(lean_object* v_dateformat_4515_, lean_object* v_date_4516_, lean_object* v_part_4517_){
_start:
{
lean_object* v_res_4518_; 
v_res_4518_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatPartWithDate(v_dateformat_4515_, v_date_4516_, v_part_4517_);
lean_dec_ref(v_dateformat_4515_);
return v_res_4518_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_insert(lean_object* v_date_4519_, lean_object* v_modifier_4520_, lean_object* v_data_4521_){
_start:
{
switch(lean_obj_tag(v_modifier_4520_))
{
case 0:
{
lean_object* v_y_4522_; lean_object* v_u_4523_; lean_object* v_Y_4524_; lean_object* v_D_4525_; lean_object* v_M_4526_; lean_object* v_L_4527_; lean_object* v_d_4528_; lean_object* v_Q_4529_; lean_object* v_q_4530_; lean_object* v_w_4531_; lean_object* v_W_4532_; lean_object* v_E_4533_; lean_object* v_e_4534_; lean_object* v_c_4535_; lean_object* v_F_4536_; lean_object* v_a_4537_; lean_object* v_b_4538_; lean_object* v_B_4539_; lean_object* v_h_4540_; lean_object* v_K_4541_; lean_object* v_k_4542_; lean_object* v_H_4543_; lean_object* v_m_4544_; lean_object* v_s_4545_; lean_object* v_S_4546_; lean_object* v_A_4547_; lean_object* v_n_4548_; lean_object* v_N_4549_; lean_object* v_V_4550_; lean_object* v_z_4551_; lean_object* v_zabbrev_4552_; lean_object* v_v_4553_; lean_object* v_O_4554_; lean_object* v_X_4555_; lean_object* v_x_4556_; lean_object* v_Z_4557_; lean_object* v___x_4559_; uint8_t v_isShared_4560_; uint8_t v_isSharedCheck_4565_; 
lean_dec_ref_known(v_modifier_4520_, 0);
v_y_4522_ = lean_ctor_get(v_date_4519_, 1);
v_u_4523_ = lean_ctor_get(v_date_4519_, 2);
v_Y_4524_ = lean_ctor_get(v_date_4519_, 3);
v_D_4525_ = lean_ctor_get(v_date_4519_, 4);
v_M_4526_ = lean_ctor_get(v_date_4519_, 5);
v_L_4527_ = lean_ctor_get(v_date_4519_, 6);
v_d_4528_ = lean_ctor_get(v_date_4519_, 7);
v_Q_4529_ = lean_ctor_get(v_date_4519_, 8);
v_q_4530_ = lean_ctor_get(v_date_4519_, 9);
v_w_4531_ = lean_ctor_get(v_date_4519_, 10);
v_W_4532_ = lean_ctor_get(v_date_4519_, 11);
v_E_4533_ = lean_ctor_get(v_date_4519_, 12);
v_e_4534_ = lean_ctor_get(v_date_4519_, 13);
v_c_4535_ = lean_ctor_get(v_date_4519_, 14);
v_F_4536_ = lean_ctor_get(v_date_4519_, 15);
v_a_4537_ = lean_ctor_get(v_date_4519_, 16);
v_b_4538_ = lean_ctor_get(v_date_4519_, 17);
v_B_4539_ = lean_ctor_get(v_date_4519_, 18);
v_h_4540_ = lean_ctor_get(v_date_4519_, 19);
v_K_4541_ = lean_ctor_get(v_date_4519_, 20);
v_k_4542_ = lean_ctor_get(v_date_4519_, 21);
v_H_4543_ = lean_ctor_get(v_date_4519_, 22);
v_m_4544_ = lean_ctor_get(v_date_4519_, 23);
v_s_4545_ = lean_ctor_get(v_date_4519_, 24);
v_S_4546_ = lean_ctor_get(v_date_4519_, 25);
v_A_4547_ = lean_ctor_get(v_date_4519_, 26);
v_n_4548_ = lean_ctor_get(v_date_4519_, 27);
v_N_4549_ = lean_ctor_get(v_date_4519_, 28);
v_V_4550_ = lean_ctor_get(v_date_4519_, 29);
v_z_4551_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_4552_ = lean_ctor_get(v_date_4519_, 31);
v_v_4553_ = lean_ctor_get(v_date_4519_, 32);
v_O_4554_ = lean_ctor_get(v_date_4519_, 33);
v_X_4555_ = lean_ctor_get(v_date_4519_, 34);
v_x_4556_ = lean_ctor_get(v_date_4519_, 35);
v_Z_4557_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_4565_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_4565_ == 0)
{
lean_object* v_unused_4566_; 
v_unused_4566_ = lean_ctor_get(v_date_4519_, 0);
lean_dec(v_unused_4566_);
v___x_4559_ = v_date_4519_;
v_isShared_4560_ = v_isSharedCheck_4565_;
goto v_resetjp_4558_;
}
else
{
lean_inc(v_Z_4557_);
lean_inc(v_x_4556_);
lean_inc(v_X_4555_);
lean_inc(v_O_4554_);
lean_inc(v_v_4553_);
lean_inc(v_zabbrev_4552_);
lean_inc(v_z_4551_);
lean_inc(v_V_4550_);
lean_inc(v_N_4549_);
lean_inc(v_n_4548_);
lean_inc(v_A_4547_);
lean_inc(v_S_4546_);
lean_inc(v_s_4545_);
lean_inc(v_m_4544_);
lean_inc(v_H_4543_);
lean_inc(v_k_4542_);
lean_inc(v_K_4541_);
lean_inc(v_h_4540_);
lean_inc(v_B_4539_);
lean_inc(v_b_4538_);
lean_inc(v_a_4537_);
lean_inc(v_F_4536_);
lean_inc(v_c_4535_);
lean_inc(v_e_4534_);
lean_inc(v_E_4533_);
lean_inc(v_W_4532_);
lean_inc(v_w_4531_);
lean_inc(v_q_4530_);
lean_inc(v_Q_4529_);
lean_inc(v_d_4528_);
lean_inc(v_L_4527_);
lean_inc(v_M_4526_);
lean_inc(v_D_4525_);
lean_inc(v_Y_4524_);
lean_inc(v_u_4523_);
lean_inc(v_y_4522_);
lean_dec(v_date_4519_);
v___x_4559_ = lean_box(0);
v_isShared_4560_ = v_isSharedCheck_4565_;
goto v_resetjp_4558_;
}
v_resetjp_4558_:
{
lean_object* v___x_4561_; lean_object* v___x_4563_; 
v___x_4561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4561_, 0, v_data_4521_);
if (v_isShared_4560_ == 0)
{
lean_ctor_set(v___x_4559_, 0, v___x_4561_);
v___x_4563_ = v___x_4559_;
goto v_reusejp_4562_;
}
else
{
lean_object* v_reuseFailAlloc_4564_; 
v_reuseFailAlloc_4564_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4564_, 0, v___x_4561_);
lean_ctor_set(v_reuseFailAlloc_4564_, 1, v_y_4522_);
lean_ctor_set(v_reuseFailAlloc_4564_, 2, v_u_4523_);
lean_ctor_set(v_reuseFailAlloc_4564_, 3, v_Y_4524_);
lean_ctor_set(v_reuseFailAlloc_4564_, 4, v_D_4525_);
lean_ctor_set(v_reuseFailAlloc_4564_, 5, v_M_4526_);
lean_ctor_set(v_reuseFailAlloc_4564_, 6, v_L_4527_);
lean_ctor_set(v_reuseFailAlloc_4564_, 7, v_d_4528_);
lean_ctor_set(v_reuseFailAlloc_4564_, 8, v_Q_4529_);
lean_ctor_set(v_reuseFailAlloc_4564_, 9, v_q_4530_);
lean_ctor_set(v_reuseFailAlloc_4564_, 10, v_w_4531_);
lean_ctor_set(v_reuseFailAlloc_4564_, 11, v_W_4532_);
lean_ctor_set(v_reuseFailAlloc_4564_, 12, v_E_4533_);
lean_ctor_set(v_reuseFailAlloc_4564_, 13, v_e_4534_);
lean_ctor_set(v_reuseFailAlloc_4564_, 14, v_c_4535_);
lean_ctor_set(v_reuseFailAlloc_4564_, 15, v_F_4536_);
lean_ctor_set(v_reuseFailAlloc_4564_, 16, v_a_4537_);
lean_ctor_set(v_reuseFailAlloc_4564_, 17, v_b_4538_);
lean_ctor_set(v_reuseFailAlloc_4564_, 18, v_B_4539_);
lean_ctor_set(v_reuseFailAlloc_4564_, 19, v_h_4540_);
lean_ctor_set(v_reuseFailAlloc_4564_, 20, v_K_4541_);
lean_ctor_set(v_reuseFailAlloc_4564_, 21, v_k_4542_);
lean_ctor_set(v_reuseFailAlloc_4564_, 22, v_H_4543_);
lean_ctor_set(v_reuseFailAlloc_4564_, 23, v_m_4544_);
lean_ctor_set(v_reuseFailAlloc_4564_, 24, v_s_4545_);
lean_ctor_set(v_reuseFailAlloc_4564_, 25, v_S_4546_);
lean_ctor_set(v_reuseFailAlloc_4564_, 26, v_A_4547_);
lean_ctor_set(v_reuseFailAlloc_4564_, 27, v_n_4548_);
lean_ctor_set(v_reuseFailAlloc_4564_, 28, v_N_4549_);
lean_ctor_set(v_reuseFailAlloc_4564_, 29, v_V_4550_);
lean_ctor_set(v_reuseFailAlloc_4564_, 30, v_z_4551_);
lean_ctor_set(v_reuseFailAlloc_4564_, 31, v_zabbrev_4552_);
lean_ctor_set(v_reuseFailAlloc_4564_, 32, v_v_4553_);
lean_ctor_set(v_reuseFailAlloc_4564_, 33, v_O_4554_);
lean_ctor_set(v_reuseFailAlloc_4564_, 34, v_X_4555_);
lean_ctor_set(v_reuseFailAlloc_4564_, 35, v_x_4556_);
lean_ctor_set(v_reuseFailAlloc_4564_, 36, v_Z_4557_);
v___x_4563_ = v_reuseFailAlloc_4564_;
goto v_reusejp_4562_;
}
v_reusejp_4562_:
{
return v___x_4563_;
}
}
}
case 1:
{
lean_object* v___x_4568_; uint8_t v_isShared_4569_; uint8_t v_isSharedCheck_4617_; 
v_isSharedCheck_4617_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_4617_ == 0)
{
lean_object* v_unused_4618_; 
v_unused_4618_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_4618_);
v___x_4568_ = v_modifier_4520_;
v_isShared_4569_ = v_isSharedCheck_4617_;
goto v_resetjp_4567_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_4568_ = lean_box(0);
v_isShared_4569_ = v_isSharedCheck_4617_;
goto v_resetjp_4567_;
}
v_resetjp_4567_:
{
lean_object* v_G_4570_; lean_object* v_y_4571_; lean_object* v_Y_4572_; lean_object* v_D_4573_; lean_object* v_M_4574_; lean_object* v_L_4575_; lean_object* v_d_4576_; lean_object* v_Q_4577_; lean_object* v_q_4578_; lean_object* v_w_4579_; lean_object* v_W_4580_; lean_object* v_E_4581_; lean_object* v_e_4582_; lean_object* v_c_4583_; lean_object* v_F_4584_; lean_object* v_a_4585_; lean_object* v_b_4586_; lean_object* v_B_4587_; lean_object* v_h_4588_; lean_object* v_K_4589_; lean_object* v_k_4590_; lean_object* v_H_4591_; lean_object* v_m_4592_; lean_object* v_s_4593_; lean_object* v_S_4594_; lean_object* v_A_4595_; lean_object* v_n_4596_; lean_object* v_N_4597_; lean_object* v_V_4598_; lean_object* v_z_4599_; lean_object* v_zabbrev_4600_; lean_object* v_v_4601_; lean_object* v_O_4602_; lean_object* v_X_4603_; lean_object* v_x_4604_; lean_object* v_Z_4605_; lean_object* v___x_4607_; uint8_t v_isShared_4608_; uint8_t v_isSharedCheck_4615_; 
v_G_4570_ = lean_ctor_get(v_date_4519_, 0);
v_y_4571_ = lean_ctor_get(v_date_4519_, 1);
v_Y_4572_ = lean_ctor_get(v_date_4519_, 3);
v_D_4573_ = lean_ctor_get(v_date_4519_, 4);
v_M_4574_ = lean_ctor_get(v_date_4519_, 5);
v_L_4575_ = lean_ctor_get(v_date_4519_, 6);
v_d_4576_ = lean_ctor_get(v_date_4519_, 7);
v_Q_4577_ = lean_ctor_get(v_date_4519_, 8);
v_q_4578_ = lean_ctor_get(v_date_4519_, 9);
v_w_4579_ = lean_ctor_get(v_date_4519_, 10);
v_W_4580_ = lean_ctor_get(v_date_4519_, 11);
v_E_4581_ = lean_ctor_get(v_date_4519_, 12);
v_e_4582_ = lean_ctor_get(v_date_4519_, 13);
v_c_4583_ = lean_ctor_get(v_date_4519_, 14);
v_F_4584_ = lean_ctor_get(v_date_4519_, 15);
v_a_4585_ = lean_ctor_get(v_date_4519_, 16);
v_b_4586_ = lean_ctor_get(v_date_4519_, 17);
v_B_4587_ = lean_ctor_get(v_date_4519_, 18);
v_h_4588_ = lean_ctor_get(v_date_4519_, 19);
v_K_4589_ = lean_ctor_get(v_date_4519_, 20);
v_k_4590_ = lean_ctor_get(v_date_4519_, 21);
v_H_4591_ = lean_ctor_get(v_date_4519_, 22);
v_m_4592_ = lean_ctor_get(v_date_4519_, 23);
v_s_4593_ = lean_ctor_get(v_date_4519_, 24);
v_S_4594_ = lean_ctor_get(v_date_4519_, 25);
v_A_4595_ = lean_ctor_get(v_date_4519_, 26);
v_n_4596_ = lean_ctor_get(v_date_4519_, 27);
v_N_4597_ = lean_ctor_get(v_date_4519_, 28);
v_V_4598_ = lean_ctor_get(v_date_4519_, 29);
v_z_4599_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_4600_ = lean_ctor_get(v_date_4519_, 31);
v_v_4601_ = lean_ctor_get(v_date_4519_, 32);
v_O_4602_ = lean_ctor_get(v_date_4519_, 33);
v_X_4603_ = lean_ctor_get(v_date_4519_, 34);
v_x_4604_ = lean_ctor_get(v_date_4519_, 35);
v_Z_4605_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_4615_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_4615_ == 0)
{
lean_object* v_unused_4616_; 
v_unused_4616_ = lean_ctor_get(v_date_4519_, 2);
lean_dec(v_unused_4616_);
v___x_4607_ = v_date_4519_;
v_isShared_4608_ = v_isSharedCheck_4615_;
goto v_resetjp_4606_;
}
else
{
lean_inc(v_Z_4605_);
lean_inc(v_x_4604_);
lean_inc(v_X_4603_);
lean_inc(v_O_4602_);
lean_inc(v_v_4601_);
lean_inc(v_zabbrev_4600_);
lean_inc(v_z_4599_);
lean_inc(v_V_4598_);
lean_inc(v_N_4597_);
lean_inc(v_n_4596_);
lean_inc(v_A_4595_);
lean_inc(v_S_4594_);
lean_inc(v_s_4593_);
lean_inc(v_m_4592_);
lean_inc(v_H_4591_);
lean_inc(v_k_4590_);
lean_inc(v_K_4589_);
lean_inc(v_h_4588_);
lean_inc(v_B_4587_);
lean_inc(v_b_4586_);
lean_inc(v_a_4585_);
lean_inc(v_F_4584_);
lean_inc(v_c_4583_);
lean_inc(v_e_4582_);
lean_inc(v_E_4581_);
lean_inc(v_W_4580_);
lean_inc(v_w_4579_);
lean_inc(v_q_4578_);
lean_inc(v_Q_4577_);
lean_inc(v_d_4576_);
lean_inc(v_L_4575_);
lean_inc(v_M_4574_);
lean_inc(v_D_4573_);
lean_inc(v_Y_4572_);
lean_inc(v_y_4571_);
lean_inc(v_G_4570_);
lean_dec(v_date_4519_);
v___x_4607_ = lean_box(0);
v_isShared_4608_ = v_isSharedCheck_4615_;
goto v_resetjp_4606_;
}
v_resetjp_4606_:
{
lean_object* v___x_4610_; 
if (v_isShared_4569_ == 0)
{
lean_ctor_set(v___x_4568_, 0, v_data_4521_);
v___x_4610_ = v___x_4568_;
goto v_reusejp_4609_;
}
else
{
lean_object* v_reuseFailAlloc_4614_; 
v_reuseFailAlloc_4614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4614_, 0, v_data_4521_);
v___x_4610_ = v_reuseFailAlloc_4614_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
lean_object* v___x_4612_; 
if (v_isShared_4608_ == 0)
{
lean_ctor_set(v___x_4607_, 2, v___x_4610_);
v___x_4612_ = v___x_4607_;
goto v_reusejp_4611_;
}
else
{
lean_object* v_reuseFailAlloc_4613_; 
v_reuseFailAlloc_4613_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4613_, 0, v_G_4570_);
lean_ctor_set(v_reuseFailAlloc_4613_, 1, v_y_4571_);
lean_ctor_set(v_reuseFailAlloc_4613_, 2, v___x_4610_);
lean_ctor_set(v_reuseFailAlloc_4613_, 3, v_Y_4572_);
lean_ctor_set(v_reuseFailAlloc_4613_, 4, v_D_4573_);
lean_ctor_set(v_reuseFailAlloc_4613_, 5, v_M_4574_);
lean_ctor_set(v_reuseFailAlloc_4613_, 6, v_L_4575_);
lean_ctor_set(v_reuseFailAlloc_4613_, 7, v_d_4576_);
lean_ctor_set(v_reuseFailAlloc_4613_, 8, v_Q_4577_);
lean_ctor_set(v_reuseFailAlloc_4613_, 9, v_q_4578_);
lean_ctor_set(v_reuseFailAlloc_4613_, 10, v_w_4579_);
lean_ctor_set(v_reuseFailAlloc_4613_, 11, v_W_4580_);
lean_ctor_set(v_reuseFailAlloc_4613_, 12, v_E_4581_);
lean_ctor_set(v_reuseFailAlloc_4613_, 13, v_e_4582_);
lean_ctor_set(v_reuseFailAlloc_4613_, 14, v_c_4583_);
lean_ctor_set(v_reuseFailAlloc_4613_, 15, v_F_4584_);
lean_ctor_set(v_reuseFailAlloc_4613_, 16, v_a_4585_);
lean_ctor_set(v_reuseFailAlloc_4613_, 17, v_b_4586_);
lean_ctor_set(v_reuseFailAlloc_4613_, 18, v_B_4587_);
lean_ctor_set(v_reuseFailAlloc_4613_, 19, v_h_4588_);
lean_ctor_set(v_reuseFailAlloc_4613_, 20, v_K_4589_);
lean_ctor_set(v_reuseFailAlloc_4613_, 21, v_k_4590_);
lean_ctor_set(v_reuseFailAlloc_4613_, 22, v_H_4591_);
lean_ctor_set(v_reuseFailAlloc_4613_, 23, v_m_4592_);
lean_ctor_set(v_reuseFailAlloc_4613_, 24, v_s_4593_);
lean_ctor_set(v_reuseFailAlloc_4613_, 25, v_S_4594_);
lean_ctor_set(v_reuseFailAlloc_4613_, 26, v_A_4595_);
lean_ctor_set(v_reuseFailAlloc_4613_, 27, v_n_4596_);
lean_ctor_set(v_reuseFailAlloc_4613_, 28, v_N_4597_);
lean_ctor_set(v_reuseFailAlloc_4613_, 29, v_V_4598_);
lean_ctor_set(v_reuseFailAlloc_4613_, 30, v_z_4599_);
lean_ctor_set(v_reuseFailAlloc_4613_, 31, v_zabbrev_4600_);
lean_ctor_set(v_reuseFailAlloc_4613_, 32, v_v_4601_);
lean_ctor_set(v_reuseFailAlloc_4613_, 33, v_O_4602_);
lean_ctor_set(v_reuseFailAlloc_4613_, 34, v_X_4603_);
lean_ctor_set(v_reuseFailAlloc_4613_, 35, v_x_4604_);
lean_ctor_set(v_reuseFailAlloc_4613_, 36, v_Z_4605_);
v___x_4612_ = v_reuseFailAlloc_4613_;
goto v_reusejp_4611_;
}
v_reusejp_4611_:
{
return v___x_4612_;
}
}
}
}
}
case 2:
{
lean_object* v___x_4620_; uint8_t v_isShared_4621_; uint8_t v_isSharedCheck_4669_; 
v_isSharedCheck_4669_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_4669_ == 0)
{
lean_object* v_unused_4670_; 
v_unused_4670_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_4670_);
v___x_4620_ = v_modifier_4520_;
v_isShared_4621_ = v_isSharedCheck_4669_;
goto v_resetjp_4619_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_4620_ = lean_box(0);
v_isShared_4621_ = v_isSharedCheck_4669_;
goto v_resetjp_4619_;
}
v_resetjp_4619_:
{
lean_object* v_G_4622_; lean_object* v_u_4623_; lean_object* v_Y_4624_; lean_object* v_D_4625_; lean_object* v_M_4626_; lean_object* v_L_4627_; lean_object* v_d_4628_; lean_object* v_Q_4629_; lean_object* v_q_4630_; lean_object* v_w_4631_; lean_object* v_W_4632_; lean_object* v_E_4633_; lean_object* v_e_4634_; lean_object* v_c_4635_; lean_object* v_F_4636_; lean_object* v_a_4637_; lean_object* v_b_4638_; lean_object* v_B_4639_; lean_object* v_h_4640_; lean_object* v_K_4641_; lean_object* v_k_4642_; lean_object* v_H_4643_; lean_object* v_m_4644_; lean_object* v_s_4645_; lean_object* v_S_4646_; lean_object* v_A_4647_; lean_object* v_n_4648_; lean_object* v_N_4649_; lean_object* v_V_4650_; lean_object* v_z_4651_; lean_object* v_zabbrev_4652_; lean_object* v_v_4653_; lean_object* v_O_4654_; lean_object* v_X_4655_; lean_object* v_x_4656_; lean_object* v_Z_4657_; lean_object* v___x_4659_; uint8_t v_isShared_4660_; uint8_t v_isSharedCheck_4667_; 
v_G_4622_ = lean_ctor_get(v_date_4519_, 0);
v_u_4623_ = lean_ctor_get(v_date_4519_, 2);
v_Y_4624_ = lean_ctor_get(v_date_4519_, 3);
v_D_4625_ = lean_ctor_get(v_date_4519_, 4);
v_M_4626_ = lean_ctor_get(v_date_4519_, 5);
v_L_4627_ = lean_ctor_get(v_date_4519_, 6);
v_d_4628_ = lean_ctor_get(v_date_4519_, 7);
v_Q_4629_ = lean_ctor_get(v_date_4519_, 8);
v_q_4630_ = lean_ctor_get(v_date_4519_, 9);
v_w_4631_ = lean_ctor_get(v_date_4519_, 10);
v_W_4632_ = lean_ctor_get(v_date_4519_, 11);
v_E_4633_ = lean_ctor_get(v_date_4519_, 12);
v_e_4634_ = lean_ctor_get(v_date_4519_, 13);
v_c_4635_ = lean_ctor_get(v_date_4519_, 14);
v_F_4636_ = lean_ctor_get(v_date_4519_, 15);
v_a_4637_ = lean_ctor_get(v_date_4519_, 16);
v_b_4638_ = lean_ctor_get(v_date_4519_, 17);
v_B_4639_ = lean_ctor_get(v_date_4519_, 18);
v_h_4640_ = lean_ctor_get(v_date_4519_, 19);
v_K_4641_ = lean_ctor_get(v_date_4519_, 20);
v_k_4642_ = lean_ctor_get(v_date_4519_, 21);
v_H_4643_ = lean_ctor_get(v_date_4519_, 22);
v_m_4644_ = lean_ctor_get(v_date_4519_, 23);
v_s_4645_ = lean_ctor_get(v_date_4519_, 24);
v_S_4646_ = lean_ctor_get(v_date_4519_, 25);
v_A_4647_ = lean_ctor_get(v_date_4519_, 26);
v_n_4648_ = lean_ctor_get(v_date_4519_, 27);
v_N_4649_ = lean_ctor_get(v_date_4519_, 28);
v_V_4650_ = lean_ctor_get(v_date_4519_, 29);
v_z_4651_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_4652_ = lean_ctor_get(v_date_4519_, 31);
v_v_4653_ = lean_ctor_get(v_date_4519_, 32);
v_O_4654_ = lean_ctor_get(v_date_4519_, 33);
v_X_4655_ = lean_ctor_get(v_date_4519_, 34);
v_x_4656_ = lean_ctor_get(v_date_4519_, 35);
v_Z_4657_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_4667_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_4667_ == 0)
{
lean_object* v_unused_4668_; 
v_unused_4668_ = lean_ctor_get(v_date_4519_, 1);
lean_dec(v_unused_4668_);
v___x_4659_ = v_date_4519_;
v_isShared_4660_ = v_isSharedCheck_4667_;
goto v_resetjp_4658_;
}
else
{
lean_inc(v_Z_4657_);
lean_inc(v_x_4656_);
lean_inc(v_X_4655_);
lean_inc(v_O_4654_);
lean_inc(v_v_4653_);
lean_inc(v_zabbrev_4652_);
lean_inc(v_z_4651_);
lean_inc(v_V_4650_);
lean_inc(v_N_4649_);
lean_inc(v_n_4648_);
lean_inc(v_A_4647_);
lean_inc(v_S_4646_);
lean_inc(v_s_4645_);
lean_inc(v_m_4644_);
lean_inc(v_H_4643_);
lean_inc(v_k_4642_);
lean_inc(v_K_4641_);
lean_inc(v_h_4640_);
lean_inc(v_B_4639_);
lean_inc(v_b_4638_);
lean_inc(v_a_4637_);
lean_inc(v_F_4636_);
lean_inc(v_c_4635_);
lean_inc(v_e_4634_);
lean_inc(v_E_4633_);
lean_inc(v_W_4632_);
lean_inc(v_w_4631_);
lean_inc(v_q_4630_);
lean_inc(v_Q_4629_);
lean_inc(v_d_4628_);
lean_inc(v_L_4627_);
lean_inc(v_M_4626_);
lean_inc(v_D_4625_);
lean_inc(v_Y_4624_);
lean_inc(v_u_4623_);
lean_inc(v_G_4622_);
lean_dec(v_date_4519_);
v___x_4659_ = lean_box(0);
v_isShared_4660_ = v_isSharedCheck_4667_;
goto v_resetjp_4658_;
}
v_resetjp_4658_:
{
lean_object* v___x_4662_; 
if (v_isShared_4621_ == 0)
{
lean_ctor_set_tag(v___x_4620_, 1);
lean_ctor_set(v___x_4620_, 0, v_data_4521_);
v___x_4662_ = v___x_4620_;
goto v_reusejp_4661_;
}
else
{
lean_object* v_reuseFailAlloc_4666_; 
v_reuseFailAlloc_4666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4666_, 0, v_data_4521_);
v___x_4662_ = v_reuseFailAlloc_4666_;
goto v_reusejp_4661_;
}
v_reusejp_4661_:
{
lean_object* v___x_4664_; 
if (v_isShared_4660_ == 0)
{
lean_ctor_set(v___x_4659_, 1, v___x_4662_);
v___x_4664_ = v___x_4659_;
goto v_reusejp_4663_;
}
else
{
lean_object* v_reuseFailAlloc_4665_; 
v_reuseFailAlloc_4665_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4665_, 0, v_G_4622_);
lean_ctor_set(v_reuseFailAlloc_4665_, 1, v___x_4662_);
lean_ctor_set(v_reuseFailAlloc_4665_, 2, v_u_4623_);
lean_ctor_set(v_reuseFailAlloc_4665_, 3, v_Y_4624_);
lean_ctor_set(v_reuseFailAlloc_4665_, 4, v_D_4625_);
lean_ctor_set(v_reuseFailAlloc_4665_, 5, v_M_4626_);
lean_ctor_set(v_reuseFailAlloc_4665_, 6, v_L_4627_);
lean_ctor_set(v_reuseFailAlloc_4665_, 7, v_d_4628_);
lean_ctor_set(v_reuseFailAlloc_4665_, 8, v_Q_4629_);
lean_ctor_set(v_reuseFailAlloc_4665_, 9, v_q_4630_);
lean_ctor_set(v_reuseFailAlloc_4665_, 10, v_w_4631_);
lean_ctor_set(v_reuseFailAlloc_4665_, 11, v_W_4632_);
lean_ctor_set(v_reuseFailAlloc_4665_, 12, v_E_4633_);
lean_ctor_set(v_reuseFailAlloc_4665_, 13, v_e_4634_);
lean_ctor_set(v_reuseFailAlloc_4665_, 14, v_c_4635_);
lean_ctor_set(v_reuseFailAlloc_4665_, 15, v_F_4636_);
lean_ctor_set(v_reuseFailAlloc_4665_, 16, v_a_4637_);
lean_ctor_set(v_reuseFailAlloc_4665_, 17, v_b_4638_);
lean_ctor_set(v_reuseFailAlloc_4665_, 18, v_B_4639_);
lean_ctor_set(v_reuseFailAlloc_4665_, 19, v_h_4640_);
lean_ctor_set(v_reuseFailAlloc_4665_, 20, v_K_4641_);
lean_ctor_set(v_reuseFailAlloc_4665_, 21, v_k_4642_);
lean_ctor_set(v_reuseFailAlloc_4665_, 22, v_H_4643_);
lean_ctor_set(v_reuseFailAlloc_4665_, 23, v_m_4644_);
lean_ctor_set(v_reuseFailAlloc_4665_, 24, v_s_4645_);
lean_ctor_set(v_reuseFailAlloc_4665_, 25, v_S_4646_);
lean_ctor_set(v_reuseFailAlloc_4665_, 26, v_A_4647_);
lean_ctor_set(v_reuseFailAlloc_4665_, 27, v_n_4648_);
lean_ctor_set(v_reuseFailAlloc_4665_, 28, v_N_4649_);
lean_ctor_set(v_reuseFailAlloc_4665_, 29, v_V_4650_);
lean_ctor_set(v_reuseFailAlloc_4665_, 30, v_z_4651_);
lean_ctor_set(v_reuseFailAlloc_4665_, 31, v_zabbrev_4652_);
lean_ctor_set(v_reuseFailAlloc_4665_, 32, v_v_4653_);
lean_ctor_set(v_reuseFailAlloc_4665_, 33, v_O_4654_);
lean_ctor_set(v_reuseFailAlloc_4665_, 34, v_X_4655_);
lean_ctor_set(v_reuseFailAlloc_4665_, 35, v_x_4656_);
lean_ctor_set(v_reuseFailAlloc_4665_, 36, v_Z_4657_);
v___x_4664_ = v_reuseFailAlloc_4665_;
goto v_reusejp_4663_;
}
v_reusejp_4663_:
{
return v___x_4664_;
}
}
}
}
}
case 3:
{
lean_object* v___x_4672_; uint8_t v_isShared_4673_; uint8_t v_isSharedCheck_4721_; 
v_isSharedCheck_4721_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_4721_ == 0)
{
lean_object* v_unused_4722_; 
v_unused_4722_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_4722_);
v___x_4672_ = v_modifier_4520_;
v_isShared_4673_ = v_isSharedCheck_4721_;
goto v_resetjp_4671_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_4672_ = lean_box(0);
v_isShared_4673_ = v_isSharedCheck_4721_;
goto v_resetjp_4671_;
}
v_resetjp_4671_:
{
lean_object* v_G_4674_; lean_object* v_y_4675_; lean_object* v_u_4676_; lean_object* v_Y_4677_; lean_object* v_M_4678_; lean_object* v_L_4679_; lean_object* v_d_4680_; lean_object* v_Q_4681_; lean_object* v_q_4682_; lean_object* v_w_4683_; lean_object* v_W_4684_; lean_object* v_E_4685_; lean_object* v_e_4686_; lean_object* v_c_4687_; lean_object* v_F_4688_; lean_object* v_a_4689_; lean_object* v_b_4690_; lean_object* v_B_4691_; lean_object* v_h_4692_; lean_object* v_K_4693_; lean_object* v_k_4694_; lean_object* v_H_4695_; lean_object* v_m_4696_; lean_object* v_s_4697_; lean_object* v_S_4698_; lean_object* v_A_4699_; lean_object* v_n_4700_; lean_object* v_N_4701_; lean_object* v_V_4702_; lean_object* v_z_4703_; lean_object* v_zabbrev_4704_; lean_object* v_v_4705_; lean_object* v_O_4706_; lean_object* v_X_4707_; lean_object* v_x_4708_; lean_object* v_Z_4709_; lean_object* v___x_4711_; uint8_t v_isShared_4712_; uint8_t v_isSharedCheck_4719_; 
v_G_4674_ = lean_ctor_get(v_date_4519_, 0);
v_y_4675_ = lean_ctor_get(v_date_4519_, 1);
v_u_4676_ = lean_ctor_get(v_date_4519_, 2);
v_Y_4677_ = lean_ctor_get(v_date_4519_, 3);
v_M_4678_ = lean_ctor_get(v_date_4519_, 5);
v_L_4679_ = lean_ctor_get(v_date_4519_, 6);
v_d_4680_ = lean_ctor_get(v_date_4519_, 7);
v_Q_4681_ = lean_ctor_get(v_date_4519_, 8);
v_q_4682_ = lean_ctor_get(v_date_4519_, 9);
v_w_4683_ = lean_ctor_get(v_date_4519_, 10);
v_W_4684_ = lean_ctor_get(v_date_4519_, 11);
v_E_4685_ = lean_ctor_get(v_date_4519_, 12);
v_e_4686_ = lean_ctor_get(v_date_4519_, 13);
v_c_4687_ = lean_ctor_get(v_date_4519_, 14);
v_F_4688_ = lean_ctor_get(v_date_4519_, 15);
v_a_4689_ = lean_ctor_get(v_date_4519_, 16);
v_b_4690_ = lean_ctor_get(v_date_4519_, 17);
v_B_4691_ = lean_ctor_get(v_date_4519_, 18);
v_h_4692_ = lean_ctor_get(v_date_4519_, 19);
v_K_4693_ = lean_ctor_get(v_date_4519_, 20);
v_k_4694_ = lean_ctor_get(v_date_4519_, 21);
v_H_4695_ = lean_ctor_get(v_date_4519_, 22);
v_m_4696_ = lean_ctor_get(v_date_4519_, 23);
v_s_4697_ = lean_ctor_get(v_date_4519_, 24);
v_S_4698_ = lean_ctor_get(v_date_4519_, 25);
v_A_4699_ = lean_ctor_get(v_date_4519_, 26);
v_n_4700_ = lean_ctor_get(v_date_4519_, 27);
v_N_4701_ = lean_ctor_get(v_date_4519_, 28);
v_V_4702_ = lean_ctor_get(v_date_4519_, 29);
v_z_4703_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_4704_ = lean_ctor_get(v_date_4519_, 31);
v_v_4705_ = lean_ctor_get(v_date_4519_, 32);
v_O_4706_ = lean_ctor_get(v_date_4519_, 33);
v_X_4707_ = lean_ctor_get(v_date_4519_, 34);
v_x_4708_ = lean_ctor_get(v_date_4519_, 35);
v_Z_4709_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_4719_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_4719_ == 0)
{
lean_object* v_unused_4720_; 
v_unused_4720_ = lean_ctor_get(v_date_4519_, 4);
lean_dec(v_unused_4720_);
v___x_4711_ = v_date_4519_;
v_isShared_4712_ = v_isSharedCheck_4719_;
goto v_resetjp_4710_;
}
else
{
lean_inc(v_Z_4709_);
lean_inc(v_x_4708_);
lean_inc(v_X_4707_);
lean_inc(v_O_4706_);
lean_inc(v_v_4705_);
lean_inc(v_zabbrev_4704_);
lean_inc(v_z_4703_);
lean_inc(v_V_4702_);
lean_inc(v_N_4701_);
lean_inc(v_n_4700_);
lean_inc(v_A_4699_);
lean_inc(v_S_4698_);
lean_inc(v_s_4697_);
lean_inc(v_m_4696_);
lean_inc(v_H_4695_);
lean_inc(v_k_4694_);
lean_inc(v_K_4693_);
lean_inc(v_h_4692_);
lean_inc(v_B_4691_);
lean_inc(v_b_4690_);
lean_inc(v_a_4689_);
lean_inc(v_F_4688_);
lean_inc(v_c_4687_);
lean_inc(v_e_4686_);
lean_inc(v_E_4685_);
lean_inc(v_W_4684_);
lean_inc(v_w_4683_);
lean_inc(v_q_4682_);
lean_inc(v_Q_4681_);
lean_inc(v_d_4680_);
lean_inc(v_L_4679_);
lean_inc(v_M_4678_);
lean_inc(v_Y_4677_);
lean_inc(v_u_4676_);
lean_inc(v_y_4675_);
lean_inc(v_G_4674_);
lean_dec(v_date_4519_);
v___x_4711_ = lean_box(0);
v_isShared_4712_ = v_isSharedCheck_4719_;
goto v_resetjp_4710_;
}
v_resetjp_4710_:
{
lean_object* v___x_4714_; 
if (v_isShared_4673_ == 0)
{
lean_ctor_set_tag(v___x_4672_, 1);
lean_ctor_set(v___x_4672_, 0, v_data_4521_);
v___x_4714_ = v___x_4672_;
goto v_reusejp_4713_;
}
else
{
lean_object* v_reuseFailAlloc_4718_; 
v_reuseFailAlloc_4718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4718_, 0, v_data_4521_);
v___x_4714_ = v_reuseFailAlloc_4718_;
goto v_reusejp_4713_;
}
v_reusejp_4713_:
{
lean_object* v___x_4716_; 
if (v_isShared_4712_ == 0)
{
lean_ctor_set(v___x_4711_, 4, v___x_4714_);
v___x_4716_ = v___x_4711_;
goto v_reusejp_4715_;
}
else
{
lean_object* v_reuseFailAlloc_4717_; 
v_reuseFailAlloc_4717_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4717_, 0, v_G_4674_);
lean_ctor_set(v_reuseFailAlloc_4717_, 1, v_y_4675_);
lean_ctor_set(v_reuseFailAlloc_4717_, 2, v_u_4676_);
lean_ctor_set(v_reuseFailAlloc_4717_, 3, v_Y_4677_);
lean_ctor_set(v_reuseFailAlloc_4717_, 4, v___x_4714_);
lean_ctor_set(v_reuseFailAlloc_4717_, 5, v_M_4678_);
lean_ctor_set(v_reuseFailAlloc_4717_, 6, v_L_4679_);
lean_ctor_set(v_reuseFailAlloc_4717_, 7, v_d_4680_);
lean_ctor_set(v_reuseFailAlloc_4717_, 8, v_Q_4681_);
lean_ctor_set(v_reuseFailAlloc_4717_, 9, v_q_4682_);
lean_ctor_set(v_reuseFailAlloc_4717_, 10, v_w_4683_);
lean_ctor_set(v_reuseFailAlloc_4717_, 11, v_W_4684_);
lean_ctor_set(v_reuseFailAlloc_4717_, 12, v_E_4685_);
lean_ctor_set(v_reuseFailAlloc_4717_, 13, v_e_4686_);
lean_ctor_set(v_reuseFailAlloc_4717_, 14, v_c_4687_);
lean_ctor_set(v_reuseFailAlloc_4717_, 15, v_F_4688_);
lean_ctor_set(v_reuseFailAlloc_4717_, 16, v_a_4689_);
lean_ctor_set(v_reuseFailAlloc_4717_, 17, v_b_4690_);
lean_ctor_set(v_reuseFailAlloc_4717_, 18, v_B_4691_);
lean_ctor_set(v_reuseFailAlloc_4717_, 19, v_h_4692_);
lean_ctor_set(v_reuseFailAlloc_4717_, 20, v_K_4693_);
lean_ctor_set(v_reuseFailAlloc_4717_, 21, v_k_4694_);
lean_ctor_set(v_reuseFailAlloc_4717_, 22, v_H_4695_);
lean_ctor_set(v_reuseFailAlloc_4717_, 23, v_m_4696_);
lean_ctor_set(v_reuseFailAlloc_4717_, 24, v_s_4697_);
lean_ctor_set(v_reuseFailAlloc_4717_, 25, v_S_4698_);
lean_ctor_set(v_reuseFailAlloc_4717_, 26, v_A_4699_);
lean_ctor_set(v_reuseFailAlloc_4717_, 27, v_n_4700_);
lean_ctor_set(v_reuseFailAlloc_4717_, 28, v_N_4701_);
lean_ctor_set(v_reuseFailAlloc_4717_, 29, v_V_4702_);
lean_ctor_set(v_reuseFailAlloc_4717_, 30, v_z_4703_);
lean_ctor_set(v_reuseFailAlloc_4717_, 31, v_zabbrev_4704_);
lean_ctor_set(v_reuseFailAlloc_4717_, 32, v_v_4705_);
lean_ctor_set(v_reuseFailAlloc_4717_, 33, v_O_4706_);
lean_ctor_set(v_reuseFailAlloc_4717_, 34, v_X_4707_);
lean_ctor_set(v_reuseFailAlloc_4717_, 35, v_x_4708_);
lean_ctor_set(v_reuseFailAlloc_4717_, 36, v_Z_4709_);
v___x_4716_ = v_reuseFailAlloc_4717_;
goto v_reusejp_4715_;
}
v_reusejp_4715_:
{
return v___x_4716_;
}
}
}
}
}
case 4:
{
lean_object* v___x_4724_; uint8_t v_isShared_4725_; uint8_t v_isSharedCheck_4773_; 
v_isSharedCheck_4773_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_4773_ == 0)
{
lean_object* v_unused_4774_; 
v_unused_4774_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_4774_);
v___x_4724_ = v_modifier_4520_;
v_isShared_4725_ = v_isSharedCheck_4773_;
goto v_resetjp_4723_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_4724_ = lean_box(0);
v_isShared_4725_ = v_isSharedCheck_4773_;
goto v_resetjp_4723_;
}
v_resetjp_4723_:
{
lean_object* v_G_4726_; lean_object* v_y_4727_; lean_object* v_u_4728_; lean_object* v_Y_4729_; lean_object* v_D_4730_; lean_object* v_L_4731_; lean_object* v_d_4732_; lean_object* v_Q_4733_; lean_object* v_q_4734_; lean_object* v_w_4735_; lean_object* v_W_4736_; lean_object* v_E_4737_; lean_object* v_e_4738_; lean_object* v_c_4739_; lean_object* v_F_4740_; lean_object* v_a_4741_; lean_object* v_b_4742_; lean_object* v_B_4743_; lean_object* v_h_4744_; lean_object* v_K_4745_; lean_object* v_k_4746_; lean_object* v_H_4747_; lean_object* v_m_4748_; lean_object* v_s_4749_; lean_object* v_S_4750_; lean_object* v_A_4751_; lean_object* v_n_4752_; lean_object* v_N_4753_; lean_object* v_V_4754_; lean_object* v_z_4755_; lean_object* v_zabbrev_4756_; lean_object* v_v_4757_; lean_object* v_O_4758_; lean_object* v_X_4759_; lean_object* v_x_4760_; lean_object* v_Z_4761_; lean_object* v___x_4763_; uint8_t v_isShared_4764_; uint8_t v_isSharedCheck_4771_; 
v_G_4726_ = lean_ctor_get(v_date_4519_, 0);
v_y_4727_ = lean_ctor_get(v_date_4519_, 1);
v_u_4728_ = lean_ctor_get(v_date_4519_, 2);
v_Y_4729_ = lean_ctor_get(v_date_4519_, 3);
v_D_4730_ = lean_ctor_get(v_date_4519_, 4);
v_L_4731_ = lean_ctor_get(v_date_4519_, 6);
v_d_4732_ = lean_ctor_get(v_date_4519_, 7);
v_Q_4733_ = lean_ctor_get(v_date_4519_, 8);
v_q_4734_ = lean_ctor_get(v_date_4519_, 9);
v_w_4735_ = lean_ctor_get(v_date_4519_, 10);
v_W_4736_ = lean_ctor_get(v_date_4519_, 11);
v_E_4737_ = lean_ctor_get(v_date_4519_, 12);
v_e_4738_ = lean_ctor_get(v_date_4519_, 13);
v_c_4739_ = lean_ctor_get(v_date_4519_, 14);
v_F_4740_ = lean_ctor_get(v_date_4519_, 15);
v_a_4741_ = lean_ctor_get(v_date_4519_, 16);
v_b_4742_ = lean_ctor_get(v_date_4519_, 17);
v_B_4743_ = lean_ctor_get(v_date_4519_, 18);
v_h_4744_ = lean_ctor_get(v_date_4519_, 19);
v_K_4745_ = lean_ctor_get(v_date_4519_, 20);
v_k_4746_ = lean_ctor_get(v_date_4519_, 21);
v_H_4747_ = lean_ctor_get(v_date_4519_, 22);
v_m_4748_ = lean_ctor_get(v_date_4519_, 23);
v_s_4749_ = lean_ctor_get(v_date_4519_, 24);
v_S_4750_ = lean_ctor_get(v_date_4519_, 25);
v_A_4751_ = lean_ctor_get(v_date_4519_, 26);
v_n_4752_ = lean_ctor_get(v_date_4519_, 27);
v_N_4753_ = lean_ctor_get(v_date_4519_, 28);
v_V_4754_ = lean_ctor_get(v_date_4519_, 29);
v_z_4755_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_4756_ = lean_ctor_get(v_date_4519_, 31);
v_v_4757_ = lean_ctor_get(v_date_4519_, 32);
v_O_4758_ = lean_ctor_get(v_date_4519_, 33);
v_X_4759_ = lean_ctor_get(v_date_4519_, 34);
v_x_4760_ = lean_ctor_get(v_date_4519_, 35);
v_Z_4761_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_4771_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_4771_ == 0)
{
lean_object* v_unused_4772_; 
v_unused_4772_ = lean_ctor_get(v_date_4519_, 5);
lean_dec(v_unused_4772_);
v___x_4763_ = v_date_4519_;
v_isShared_4764_ = v_isSharedCheck_4771_;
goto v_resetjp_4762_;
}
else
{
lean_inc(v_Z_4761_);
lean_inc(v_x_4760_);
lean_inc(v_X_4759_);
lean_inc(v_O_4758_);
lean_inc(v_v_4757_);
lean_inc(v_zabbrev_4756_);
lean_inc(v_z_4755_);
lean_inc(v_V_4754_);
lean_inc(v_N_4753_);
lean_inc(v_n_4752_);
lean_inc(v_A_4751_);
lean_inc(v_S_4750_);
lean_inc(v_s_4749_);
lean_inc(v_m_4748_);
lean_inc(v_H_4747_);
lean_inc(v_k_4746_);
lean_inc(v_K_4745_);
lean_inc(v_h_4744_);
lean_inc(v_B_4743_);
lean_inc(v_b_4742_);
lean_inc(v_a_4741_);
lean_inc(v_F_4740_);
lean_inc(v_c_4739_);
lean_inc(v_e_4738_);
lean_inc(v_E_4737_);
lean_inc(v_W_4736_);
lean_inc(v_w_4735_);
lean_inc(v_q_4734_);
lean_inc(v_Q_4733_);
lean_inc(v_d_4732_);
lean_inc(v_L_4731_);
lean_inc(v_D_4730_);
lean_inc(v_Y_4729_);
lean_inc(v_u_4728_);
lean_inc(v_y_4727_);
lean_inc(v_G_4726_);
lean_dec(v_date_4519_);
v___x_4763_ = lean_box(0);
v_isShared_4764_ = v_isSharedCheck_4771_;
goto v_resetjp_4762_;
}
v_resetjp_4762_:
{
lean_object* v___x_4766_; 
if (v_isShared_4725_ == 0)
{
lean_ctor_set_tag(v___x_4724_, 1);
lean_ctor_set(v___x_4724_, 0, v_data_4521_);
v___x_4766_ = v___x_4724_;
goto v_reusejp_4765_;
}
else
{
lean_object* v_reuseFailAlloc_4770_; 
v_reuseFailAlloc_4770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4770_, 0, v_data_4521_);
v___x_4766_ = v_reuseFailAlloc_4770_;
goto v_reusejp_4765_;
}
v_reusejp_4765_:
{
lean_object* v___x_4768_; 
if (v_isShared_4764_ == 0)
{
lean_ctor_set(v___x_4763_, 5, v___x_4766_);
v___x_4768_ = v___x_4763_;
goto v_reusejp_4767_;
}
else
{
lean_object* v_reuseFailAlloc_4769_; 
v_reuseFailAlloc_4769_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4769_, 0, v_G_4726_);
lean_ctor_set(v_reuseFailAlloc_4769_, 1, v_y_4727_);
lean_ctor_set(v_reuseFailAlloc_4769_, 2, v_u_4728_);
lean_ctor_set(v_reuseFailAlloc_4769_, 3, v_Y_4729_);
lean_ctor_set(v_reuseFailAlloc_4769_, 4, v_D_4730_);
lean_ctor_set(v_reuseFailAlloc_4769_, 5, v___x_4766_);
lean_ctor_set(v_reuseFailAlloc_4769_, 6, v_L_4731_);
lean_ctor_set(v_reuseFailAlloc_4769_, 7, v_d_4732_);
lean_ctor_set(v_reuseFailAlloc_4769_, 8, v_Q_4733_);
lean_ctor_set(v_reuseFailAlloc_4769_, 9, v_q_4734_);
lean_ctor_set(v_reuseFailAlloc_4769_, 10, v_w_4735_);
lean_ctor_set(v_reuseFailAlloc_4769_, 11, v_W_4736_);
lean_ctor_set(v_reuseFailAlloc_4769_, 12, v_E_4737_);
lean_ctor_set(v_reuseFailAlloc_4769_, 13, v_e_4738_);
lean_ctor_set(v_reuseFailAlloc_4769_, 14, v_c_4739_);
lean_ctor_set(v_reuseFailAlloc_4769_, 15, v_F_4740_);
lean_ctor_set(v_reuseFailAlloc_4769_, 16, v_a_4741_);
lean_ctor_set(v_reuseFailAlloc_4769_, 17, v_b_4742_);
lean_ctor_set(v_reuseFailAlloc_4769_, 18, v_B_4743_);
lean_ctor_set(v_reuseFailAlloc_4769_, 19, v_h_4744_);
lean_ctor_set(v_reuseFailAlloc_4769_, 20, v_K_4745_);
lean_ctor_set(v_reuseFailAlloc_4769_, 21, v_k_4746_);
lean_ctor_set(v_reuseFailAlloc_4769_, 22, v_H_4747_);
lean_ctor_set(v_reuseFailAlloc_4769_, 23, v_m_4748_);
lean_ctor_set(v_reuseFailAlloc_4769_, 24, v_s_4749_);
lean_ctor_set(v_reuseFailAlloc_4769_, 25, v_S_4750_);
lean_ctor_set(v_reuseFailAlloc_4769_, 26, v_A_4751_);
lean_ctor_set(v_reuseFailAlloc_4769_, 27, v_n_4752_);
lean_ctor_set(v_reuseFailAlloc_4769_, 28, v_N_4753_);
lean_ctor_set(v_reuseFailAlloc_4769_, 29, v_V_4754_);
lean_ctor_set(v_reuseFailAlloc_4769_, 30, v_z_4755_);
lean_ctor_set(v_reuseFailAlloc_4769_, 31, v_zabbrev_4756_);
lean_ctor_set(v_reuseFailAlloc_4769_, 32, v_v_4757_);
lean_ctor_set(v_reuseFailAlloc_4769_, 33, v_O_4758_);
lean_ctor_set(v_reuseFailAlloc_4769_, 34, v_X_4759_);
lean_ctor_set(v_reuseFailAlloc_4769_, 35, v_x_4760_);
lean_ctor_set(v_reuseFailAlloc_4769_, 36, v_Z_4761_);
v___x_4768_ = v_reuseFailAlloc_4769_;
goto v_reusejp_4767_;
}
v_reusejp_4767_:
{
return v___x_4768_;
}
}
}
}
}
case 5:
{
lean_object* v___x_4776_; uint8_t v_isShared_4777_; uint8_t v_isSharedCheck_4825_; 
v_isSharedCheck_4825_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_4825_ == 0)
{
lean_object* v_unused_4826_; 
v_unused_4826_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_4826_);
v___x_4776_ = v_modifier_4520_;
v_isShared_4777_ = v_isSharedCheck_4825_;
goto v_resetjp_4775_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_4776_ = lean_box(0);
v_isShared_4777_ = v_isSharedCheck_4825_;
goto v_resetjp_4775_;
}
v_resetjp_4775_:
{
lean_object* v_G_4778_; lean_object* v_y_4779_; lean_object* v_u_4780_; lean_object* v_Y_4781_; lean_object* v_D_4782_; lean_object* v_M_4783_; lean_object* v_d_4784_; lean_object* v_Q_4785_; lean_object* v_q_4786_; lean_object* v_w_4787_; lean_object* v_W_4788_; lean_object* v_E_4789_; lean_object* v_e_4790_; lean_object* v_c_4791_; lean_object* v_F_4792_; lean_object* v_a_4793_; lean_object* v_b_4794_; lean_object* v_B_4795_; lean_object* v_h_4796_; lean_object* v_K_4797_; lean_object* v_k_4798_; lean_object* v_H_4799_; lean_object* v_m_4800_; lean_object* v_s_4801_; lean_object* v_S_4802_; lean_object* v_A_4803_; lean_object* v_n_4804_; lean_object* v_N_4805_; lean_object* v_V_4806_; lean_object* v_z_4807_; lean_object* v_zabbrev_4808_; lean_object* v_v_4809_; lean_object* v_O_4810_; lean_object* v_X_4811_; lean_object* v_x_4812_; lean_object* v_Z_4813_; lean_object* v___x_4815_; uint8_t v_isShared_4816_; uint8_t v_isSharedCheck_4823_; 
v_G_4778_ = lean_ctor_get(v_date_4519_, 0);
v_y_4779_ = lean_ctor_get(v_date_4519_, 1);
v_u_4780_ = lean_ctor_get(v_date_4519_, 2);
v_Y_4781_ = lean_ctor_get(v_date_4519_, 3);
v_D_4782_ = lean_ctor_get(v_date_4519_, 4);
v_M_4783_ = lean_ctor_get(v_date_4519_, 5);
v_d_4784_ = lean_ctor_get(v_date_4519_, 7);
v_Q_4785_ = lean_ctor_get(v_date_4519_, 8);
v_q_4786_ = lean_ctor_get(v_date_4519_, 9);
v_w_4787_ = lean_ctor_get(v_date_4519_, 10);
v_W_4788_ = lean_ctor_get(v_date_4519_, 11);
v_E_4789_ = lean_ctor_get(v_date_4519_, 12);
v_e_4790_ = lean_ctor_get(v_date_4519_, 13);
v_c_4791_ = lean_ctor_get(v_date_4519_, 14);
v_F_4792_ = lean_ctor_get(v_date_4519_, 15);
v_a_4793_ = lean_ctor_get(v_date_4519_, 16);
v_b_4794_ = lean_ctor_get(v_date_4519_, 17);
v_B_4795_ = lean_ctor_get(v_date_4519_, 18);
v_h_4796_ = lean_ctor_get(v_date_4519_, 19);
v_K_4797_ = lean_ctor_get(v_date_4519_, 20);
v_k_4798_ = lean_ctor_get(v_date_4519_, 21);
v_H_4799_ = lean_ctor_get(v_date_4519_, 22);
v_m_4800_ = lean_ctor_get(v_date_4519_, 23);
v_s_4801_ = lean_ctor_get(v_date_4519_, 24);
v_S_4802_ = lean_ctor_get(v_date_4519_, 25);
v_A_4803_ = lean_ctor_get(v_date_4519_, 26);
v_n_4804_ = lean_ctor_get(v_date_4519_, 27);
v_N_4805_ = lean_ctor_get(v_date_4519_, 28);
v_V_4806_ = lean_ctor_get(v_date_4519_, 29);
v_z_4807_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_4808_ = lean_ctor_get(v_date_4519_, 31);
v_v_4809_ = lean_ctor_get(v_date_4519_, 32);
v_O_4810_ = lean_ctor_get(v_date_4519_, 33);
v_X_4811_ = lean_ctor_get(v_date_4519_, 34);
v_x_4812_ = lean_ctor_get(v_date_4519_, 35);
v_Z_4813_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_4823_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_4823_ == 0)
{
lean_object* v_unused_4824_; 
v_unused_4824_ = lean_ctor_get(v_date_4519_, 6);
lean_dec(v_unused_4824_);
v___x_4815_ = v_date_4519_;
v_isShared_4816_ = v_isSharedCheck_4823_;
goto v_resetjp_4814_;
}
else
{
lean_inc(v_Z_4813_);
lean_inc(v_x_4812_);
lean_inc(v_X_4811_);
lean_inc(v_O_4810_);
lean_inc(v_v_4809_);
lean_inc(v_zabbrev_4808_);
lean_inc(v_z_4807_);
lean_inc(v_V_4806_);
lean_inc(v_N_4805_);
lean_inc(v_n_4804_);
lean_inc(v_A_4803_);
lean_inc(v_S_4802_);
lean_inc(v_s_4801_);
lean_inc(v_m_4800_);
lean_inc(v_H_4799_);
lean_inc(v_k_4798_);
lean_inc(v_K_4797_);
lean_inc(v_h_4796_);
lean_inc(v_B_4795_);
lean_inc(v_b_4794_);
lean_inc(v_a_4793_);
lean_inc(v_F_4792_);
lean_inc(v_c_4791_);
lean_inc(v_e_4790_);
lean_inc(v_E_4789_);
lean_inc(v_W_4788_);
lean_inc(v_w_4787_);
lean_inc(v_q_4786_);
lean_inc(v_Q_4785_);
lean_inc(v_d_4784_);
lean_inc(v_M_4783_);
lean_inc(v_D_4782_);
lean_inc(v_Y_4781_);
lean_inc(v_u_4780_);
lean_inc(v_y_4779_);
lean_inc(v_G_4778_);
lean_dec(v_date_4519_);
v___x_4815_ = lean_box(0);
v_isShared_4816_ = v_isSharedCheck_4823_;
goto v_resetjp_4814_;
}
v_resetjp_4814_:
{
lean_object* v___x_4818_; 
if (v_isShared_4777_ == 0)
{
lean_ctor_set_tag(v___x_4776_, 1);
lean_ctor_set(v___x_4776_, 0, v_data_4521_);
v___x_4818_ = v___x_4776_;
goto v_reusejp_4817_;
}
else
{
lean_object* v_reuseFailAlloc_4822_; 
v_reuseFailAlloc_4822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4822_, 0, v_data_4521_);
v___x_4818_ = v_reuseFailAlloc_4822_;
goto v_reusejp_4817_;
}
v_reusejp_4817_:
{
lean_object* v___x_4820_; 
if (v_isShared_4816_ == 0)
{
lean_ctor_set(v___x_4815_, 6, v___x_4818_);
v___x_4820_ = v___x_4815_;
goto v_reusejp_4819_;
}
else
{
lean_object* v_reuseFailAlloc_4821_; 
v_reuseFailAlloc_4821_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4821_, 0, v_G_4778_);
lean_ctor_set(v_reuseFailAlloc_4821_, 1, v_y_4779_);
lean_ctor_set(v_reuseFailAlloc_4821_, 2, v_u_4780_);
lean_ctor_set(v_reuseFailAlloc_4821_, 3, v_Y_4781_);
lean_ctor_set(v_reuseFailAlloc_4821_, 4, v_D_4782_);
lean_ctor_set(v_reuseFailAlloc_4821_, 5, v_M_4783_);
lean_ctor_set(v_reuseFailAlloc_4821_, 6, v___x_4818_);
lean_ctor_set(v_reuseFailAlloc_4821_, 7, v_d_4784_);
lean_ctor_set(v_reuseFailAlloc_4821_, 8, v_Q_4785_);
lean_ctor_set(v_reuseFailAlloc_4821_, 9, v_q_4786_);
lean_ctor_set(v_reuseFailAlloc_4821_, 10, v_w_4787_);
lean_ctor_set(v_reuseFailAlloc_4821_, 11, v_W_4788_);
lean_ctor_set(v_reuseFailAlloc_4821_, 12, v_E_4789_);
lean_ctor_set(v_reuseFailAlloc_4821_, 13, v_e_4790_);
lean_ctor_set(v_reuseFailAlloc_4821_, 14, v_c_4791_);
lean_ctor_set(v_reuseFailAlloc_4821_, 15, v_F_4792_);
lean_ctor_set(v_reuseFailAlloc_4821_, 16, v_a_4793_);
lean_ctor_set(v_reuseFailAlloc_4821_, 17, v_b_4794_);
lean_ctor_set(v_reuseFailAlloc_4821_, 18, v_B_4795_);
lean_ctor_set(v_reuseFailAlloc_4821_, 19, v_h_4796_);
lean_ctor_set(v_reuseFailAlloc_4821_, 20, v_K_4797_);
lean_ctor_set(v_reuseFailAlloc_4821_, 21, v_k_4798_);
lean_ctor_set(v_reuseFailAlloc_4821_, 22, v_H_4799_);
lean_ctor_set(v_reuseFailAlloc_4821_, 23, v_m_4800_);
lean_ctor_set(v_reuseFailAlloc_4821_, 24, v_s_4801_);
lean_ctor_set(v_reuseFailAlloc_4821_, 25, v_S_4802_);
lean_ctor_set(v_reuseFailAlloc_4821_, 26, v_A_4803_);
lean_ctor_set(v_reuseFailAlloc_4821_, 27, v_n_4804_);
lean_ctor_set(v_reuseFailAlloc_4821_, 28, v_N_4805_);
lean_ctor_set(v_reuseFailAlloc_4821_, 29, v_V_4806_);
lean_ctor_set(v_reuseFailAlloc_4821_, 30, v_z_4807_);
lean_ctor_set(v_reuseFailAlloc_4821_, 31, v_zabbrev_4808_);
lean_ctor_set(v_reuseFailAlloc_4821_, 32, v_v_4809_);
lean_ctor_set(v_reuseFailAlloc_4821_, 33, v_O_4810_);
lean_ctor_set(v_reuseFailAlloc_4821_, 34, v_X_4811_);
lean_ctor_set(v_reuseFailAlloc_4821_, 35, v_x_4812_);
lean_ctor_set(v_reuseFailAlloc_4821_, 36, v_Z_4813_);
v___x_4820_ = v_reuseFailAlloc_4821_;
goto v_reusejp_4819_;
}
v_reusejp_4819_:
{
return v___x_4820_;
}
}
}
}
}
case 6:
{
lean_object* v___x_4828_; uint8_t v_isShared_4829_; uint8_t v_isSharedCheck_4877_; 
v_isSharedCheck_4877_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_4877_ == 0)
{
lean_object* v_unused_4878_; 
v_unused_4878_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_4878_);
v___x_4828_ = v_modifier_4520_;
v_isShared_4829_ = v_isSharedCheck_4877_;
goto v_resetjp_4827_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_4828_ = lean_box(0);
v_isShared_4829_ = v_isSharedCheck_4877_;
goto v_resetjp_4827_;
}
v_resetjp_4827_:
{
lean_object* v_G_4830_; lean_object* v_y_4831_; lean_object* v_u_4832_; lean_object* v_Y_4833_; lean_object* v_D_4834_; lean_object* v_M_4835_; lean_object* v_L_4836_; lean_object* v_Q_4837_; lean_object* v_q_4838_; lean_object* v_w_4839_; lean_object* v_W_4840_; lean_object* v_E_4841_; lean_object* v_e_4842_; lean_object* v_c_4843_; lean_object* v_F_4844_; lean_object* v_a_4845_; lean_object* v_b_4846_; lean_object* v_B_4847_; lean_object* v_h_4848_; lean_object* v_K_4849_; lean_object* v_k_4850_; lean_object* v_H_4851_; lean_object* v_m_4852_; lean_object* v_s_4853_; lean_object* v_S_4854_; lean_object* v_A_4855_; lean_object* v_n_4856_; lean_object* v_N_4857_; lean_object* v_V_4858_; lean_object* v_z_4859_; lean_object* v_zabbrev_4860_; lean_object* v_v_4861_; lean_object* v_O_4862_; lean_object* v_X_4863_; lean_object* v_x_4864_; lean_object* v_Z_4865_; lean_object* v___x_4867_; uint8_t v_isShared_4868_; uint8_t v_isSharedCheck_4875_; 
v_G_4830_ = lean_ctor_get(v_date_4519_, 0);
v_y_4831_ = lean_ctor_get(v_date_4519_, 1);
v_u_4832_ = lean_ctor_get(v_date_4519_, 2);
v_Y_4833_ = lean_ctor_get(v_date_4519_, 3);
v_D_4834_ = lean_ctor_get(v_date_4519_, 4);
v_M_4835_ = lean_ctor_get(v_date_4519_, 5);
v_L_4836_ = lean_ctor_get(v_date_4519_, 6);
v_Q_4837_ = lean_ctor_get(v_date_4519_, 8);
v_q_4838_ = lean_ctor_get(v_date_4519_, 9);
v_w_4839_ = lean_ctor_get(v_date_4519_, 10);
v_W_4840_ = lean_ctor_get(v_date_4519_, 11);
v_E_4841_ = lean_ctor_get(v_date_4519_, 12);
v_e_4842_ = lean_ctor_get(v_date_4519_, 13);
v_c_4843_ = lean_ctor_get(v_date_4519_, 14);
v_F_4844_ = lean_ctor_get(v_date_4519_, 15);
v_a_4845_ = lean_ctor_get(v_date_4519_, 16);
v_b_4846_ = lean_ctor_get(v_date_4519_, 17);
v_B_4847_ = lean_ctor_get(v_date_4519_, 18);
v_h_4848_ = lean_ctor_get(v_date_4519_, 19);
v_K_4849_ = lean_ctor_get(v_date_4519_, 20);
v_k_4850_ = lean_ctor_get(v_date_4519_, 21);
v_H_4851_ = lean_ctor_get(v_date_4519_, 22);
v_m_4852_ = lean_ctor_get(v_date_4519_, 23);
v_s_4853_ = lean_ctor_get(v_date_4519_, 24);
v_S_4854_ = lean_ctor_get(v_date_4519_, 25);
v_A_4855_ = lean_ctor_get(v_date_4519_, 26);
v_n_4856_ = lean_ctor_get(v_date_4519_, 27);
v_N_4857_ = lean_ctor_get(v_date_4519_, 28);
v_V_4858_ = lean_ctor_get(v_date_4519_, 29);
v_z_4859_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_4860_ = lean_ctor_get(v_date_4519_, 31);
v_v_4861_ = lean_ctor_get(v_date_4519_, 32);
v_O_4862_ = lean_ctor_get(v_date_4519_, 33);
v_X_4863_ = lean_ctor_get(v_date_4519_, 34);
v_x_4864_ = lean_ctor_get(v_date_4519_, 35);
v_Z_4865_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_4875_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_4875_ == 0)
{
lean_object* v_unused_4876_; 
v_unused_4876_ = lean_ctor_get(v_date_4519_, 7);
lean_dec(v_unused_4876_);
v___x_4867_ = v_date_4519_;
v_isShared_4868_ = v_isSharedCheck_4875_;
goto v_resetjp_4866_;
}
else
{
lean_inc(v_Z_4865_);
lean_inc(v_x_4864_);
lean_inc(v_X_4863_);
lean_inc(v_O_4862_);
lean_inc(v_v_4861_);
lean_inc(v_zabbrev_4860_);
lean_inc(v_z_4859_);
lean_inc(v_V_4858_);
lean_inc(v_N_4857_);
lean_inc(v_n_4856_);
lean_inc(v_A_4855_);
lean_inc(v_S_4854_);
lean_inc(v_s_4853_);
lean_inc(v_m_4852_);
lean_inc(v_H_4851_);
lean_inc(v_k_4850_);
lean_inc(v_K_4849_);
lean_inc(v_h_4848_);
lean_inc(v_B_4847_);
lean_inc(v_b_4846_);
lean_inc(v_a_4845_);
lean_inc(v_F_4844_);
lean_inc(v_c_4843_);
lean_inc(v_e_4842_);
lean_inc(v_E_4841_);
lean_inc(v_W_4840_);
lean_inc(v_w_4839_);
lean_inc(v_q_4838_);
lean_inc(v_Q_4837_);
lean_inc(v_L_4836_);
lean_inc(v_M_4835_);
lean_inc(v_D_4834_);
lean_inc(v_Y_4833_);
lean_inc(v_u_4832_);
lean_inc(v_y_4831_);
lean_inc(v_G_4830_);
lean_dec(v_date_4519_);
v___x_4867_ = lean_box(0);
v_isShared_4868_ = v_isSharedCheck_4875_;
goto v_resetjp_4866_;
}
v_resetjp_4866_:
{
lean_object* v___x_4870_; 
if (v_isShared_4829_ == 0)
{
lean_ctor_set_tag(v___x_4828_, 1);
lean_ctor_set(v___x_4828_, 0, v_data_4521_);
v___x_4870_ = v___x_4828_;
goto v_reusejp_4869_;
}
else
{
lean_object* v_reuseFailAlloc_4874_; 
v_reuseFailAlloc_4874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4874_, 0, v_data_4521_);
v___x_4870_ = v_reuseFailAlloc_4874_;
goto v_reusejp_4869_;
}
v_reusejp_4869_:
{
lean_object* v___x_4872_; 
if (v_isShared_4868_ == 0)
{
lean_ctor_set(v___x_4867_, 7, v___x_4870_);
v___x_4872_ = v___x_4867_;
goto v_reusejp_4871_;
}
else
{
lean_object* v_reuseFailAlloc_4873_; 
v_reuseFailAlloc_4873_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4873_, 0, v_G_4830_);
lean_ctor_set(v_reuseFailAlloc_4873_, 1, v_y_4831_);
lean_ctor_set(v_reuseFailAlloc_4873_, 2, v_u_4832_);
lean_ctor_set(v_reuseFailAlloc_4873_, 3, v_Y_4833_);
lean_ctor_set(v_reuseFailAlloc_4873_, 4, v_D_4834_);
lean_ctor_set(v_reuseFailAlloc_4873_, 5, v_M_4835_);
lean_ctor_set(v_reuseFailAlloc_4873_, 6, v_L_4836_);
lean_ctor_set(v_reuseFailAlloc_4873_, 7, v___x_4870_);
lean_ctor_set(v_reuseFailAlloc_4873_, 8, v_Q_4837_);
lean_ctor_set(v_reuseFailAlloc_4873_, 9, v_q_4838_);
lean_ctor_set(v_reuseFailAlloc_4873_, 10, v_w_4839_);
lean_ctor_set(v_reuseFailAlloc_4873_, 11, v_W_4840_);
lean_ctor_set(v_reuseFailAlloc_4873_, 12, v_E_4841_);
lean_ctor_set(v_reuseFailAlloc_4873_, 13, v_e_4842_);
lean_ctor_set(v_reuseFailAlloc_4873_, 14, v_c_4843_);
lean_ctor_set(v_reuseFailAlloc_4873_, 15, v_F_4844_);
lean_ctor_set(v_reuseFailAlloc_4873_, 16, v_a_4845_);
lean_ctor_set(v_reuseFailAlloc_4873_, 17, v_b_4846_);
lean_ctor_set(v_reuseFailAlloc_4873_, 18, v_B_4847_);
lean_ctor_set(v_reuseFailAlloc_4873_, 19, v_h_4848_);
lean_ctor_set(v_reuseFailAlloc_4873_, 20, v_K_4849_);
lean_ctor_set(v_reuseFailAlloc_4873_, 21, v_k_4850_);
lean_ctor_set(v_reuseFailAlloc_4873_, 22, v_H_4851_);
lean_ctor_set(v_reuseFailAlloc_4873_, 23, v_m_4852_);
lean_ctor_set(v_reuseFailAlloc_4873_, 24, v_s_4853_);
lean_ctor_set(v_reuseFailAlloc_4873_, 25, v_S_4854_);
lean_ctor_set(v_reuseFailAlloc_4873_, 26, v_A_4855_);
lean_ctor_set(v_reuseFailAlloc_4873_, 27, v_n_4856_);
lean_ctor_set(v_reuseFailAlloc_4873_, 28, v_N_4857_);
lean_ctor_set(v_reuseFailAlloc_4873_, 29, v_V_4858_);
lean_ctor_set(v_reuseFailAlloc_4873_, 30, v_z_4859_);
lean_ctor_set(v_reuseFailAlloc_4873_, 31, v_zabbrev_4860_);
lean_ctor_set(v_reuseFailAlloc_4873_, 32, v_v_4861_);
lean_ctor_set(v_reuseFailAlloc_4873_, 33, v_O_4862_);
lean_ctor_set(v_reuseFailAlloc_4873_, 34, v_X_4863_);
lean_ctor_set(v_reuseFailAlloc_4873_, 35, v_x_4864_);
lean_ctor_set(v_reuseFailAlloc_4873_, 36, v_Z_4865_);
v___x_4872_ = v_reuseFailAlloc_4873_;
goto v_reusejp_4871_;
}
v_reusejp_4871_:
{
return v___x_4872_;
}
}
}
}
}
case 7:
{
lean_object* v___x_4880_; uint8_t v_isShared_4881_; uint8_t v_isSharedCheck_4929_; 
v_isSharedCheck_4929_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_4929_ == 0)
{
lean_object* v_unused_4930_; 
v_unused_4930_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_4930_);
v___x_4880_ = v_modifier_4520_;
v_isShared_4881_ = v_isSharedCheck_4929_;
goto v_resetjp_4879_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_4880_ = lean_box(0);
v_isShared_4881_ = v_isSharedCheck_4929_;
goto v_resetjp_4879_;
}
v_resetjp_4879_:
{
lean_object* v_G_4882_; lean_object* v_y_4883_; lean_object* v_u_4884_; lean_object* v_Y_4885_; lean_object* v_D_4886_; lean_object* v_M_4887_; lean_object* v_L_4888_; lean_object* v_d_4889_; lean_object* v_q_4890_; lean_object* v_w_4891_; lean_object* v_W_4892_; lean_object* v_E_4893_; lean_object* v_e_4894_; lean_object* v_c_4895_; lean_object* v_F_4896_; lean_object* v_a_4897_; lean_object* v_b_4898_; lean_object* v_B_4899_; lean_object* v_h_4900_; lean_object* v_K_4901_; lean_object* v_k_4902_; lean_object* v_H_4903_; lean_object* v_m_4904_; lean_object* v_s_4905_; lean_object* v_S_4906_; lean_object* v_A_4907_; lean_object* v_n_4908_; lean_object* v_N_4909_; lean_object* v_V_4910_; lean_object* v_z_4911_; lean_object* v_zabbrev_4912_; lean_object* v_v_4913_; lean_object* v_O_4914_; lean_object* v_X_4915_; lean_object* v_x_4916_; lean_object* v_Z_4917_; lean_object* v___x_4919_; uint8_t v_isShared_4920_; uint8_t v_isSharedCheck_4927_; 
v_G_4882_ = lean_ctor_get(v_date_4519_, 0);
v_y_4883_ = lean_ctor_get(v_date_4519_, 1);
v_u_4884_ = lean_ctor_get(v_date_4519_, 2);
v_Y_4885_ = lean_ctor_get(v_date_4519_, 3);
v_D_4886_ = lean_ctor_get(v_date_4519_, 4);
v_M_4887_ = lean_ctor_get(v_date_4519_, 5);
v_L_4888_ = lean_ctor_get(v_date_4519_, 6);
v_d_4889_ = lean_ctor_get(v_date_4519_, 7);
v_q_4890_ = lean_ctor_get(v_date_4519_, 9);
v_w_4891_ = lean_ctor_get(v_date_4519_, 10);
v_W_4892_ = lean_ctor_get(v_date_4519_, 11);
v_E_4893_ = lean_ctor_get(v_date_4519_, 12);
v_e_4894_ = lean_ctor_get(v_date_4519_, 13);
v_c_4895_ = lean_ctor_get(v_date_4519_, 14);
v_F_4896_ = lean_ctor_get(v_date_4519_, 15);
v_a_4897_ = lean_ctor_get(v_date_4519_, 16);
v_b_4898_ = lean_ctor_get(v_date_4519_, 17);
v_B_4899_ = lean_ctor_get(v_date_4519_, 18);
v_h_4900_ = lean_ctor_get(v_date_4519_, 19);
v_K_4901_ = lean_ctor_get(v_date_4519_, 20);
v_k_4902_ = lean_ctor_get(v_date_4519_, 21);
v_H_4903_ = lean_ctor_get(v_date_4519_, 22);
v_m_4904_ = lean_ctor_get(v_date_4519_, 23);
v_s_4905_ = lean_ctor_get(v_date_4519_, 24);
v_S_4906_ = lean_ctor_get(v_date_4519_, 25);
v_A_4907_ = lean_ctor_get(v_date_4519_, 26);
v_n_4908_ = lean_ctor_get(v_date_4519_, 27);
v_N_4909_ = lean_ctor_get(v_date_4519_, 28);
v_V_4910_ = lean_ctor_get(v_date_4519_, 29);
v_z_4911_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_4912_ = lean_ctor_get(v_date_4519_, 31);
v_v_4913_ = lean_ctor_get(v_date_4519_, 32);
v_O_4914_ = lean_ctor_get(v_date_4519_, 33);
v_X_4915_ = lean_ctor_get(v_date_4519_, 34);
v_x_4916_ = lean_ctor_get(v_date_4519_, 35);
v_Z_4917_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_4927_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_4927_ == 0)
{
lean_object* v_unused_4928_; 
v_unused_4928_ = lean_ctor_get(v_date_4519_, 8);
lean_dec(v_unused_4928_);
v___x_4919_ = v_date_4519_;
v_isShared_4920_ = v_isSharedCheck_4927_;
goto v_resetjp_4918_;
}
else
{
lean_inc(v_Z_4917_);
lean_inc(v_x_4916_);
lean_inc(v_X_4915_);
lean_inc(v_O_4914_);
lean_inc(v_v_4913_);
lean_inc(v_zabbrev_4912_);
lean_inc(v_z_4911_);
lean_inc(v_V_4910_);
lean_inc(v_N_4909_);
lean_inc(v_n_4908_);
lean_inc(v_A_4907_);
lean_inc(v_S_4906_);
lean_inc(v_s_4905_);
lean_inc(v_m_4904_);
lean_inc(v_H_4903_);
lean_inc(v_k_4902_);
lean_inc(v_K_4901_);
lean_inc(v_h_4900_);
lean_inc(v_B_4899_);
lean_inc(v_b_4898_);
lean_inc(v_a_4897_);
lean_inc(v_F_4896_);
lean_inc(v_c_4895_);
lean_inc(v_e_4894_);
lean_inc(v_E_4893_);
lean_inc(v_W_4892_);
lean_inc(v_w_4891_);
lean_inc(v_q_4890_);
lean_inc(v_d_4889_);
lean_inc(v_L_4888_);
lean_inc(v_M_4887_);
lean_inc(v_D_4886_);
lean_inc(v_Y_4885_);
lean_inc(v_u_4884_);
lean_inc(v_y_4883_);
lean_inc(v_G_4882_);
lean_dec(v_date_4519_);
v___x_4919_ = lean_box(0);
v_isShared_4920_ = v_isSharedCheck_4927_;
goto v_resetjp_4918_;
}
v_resetjp_4918_:
{
lean_object* v___x_4922_; 
if (v_isShared_4881_ == 0)
{
lean_ctor_set_tag(v___x_4880_, 1);
lean_ctor_set(v___x_4880_, 0, v_data_4521_);
v___x_4922_ = v___x_4880_;
goto v_reusejp_4921_;
}
else
{
lean_object* v_reuseFailAlloc_4926_; 
v_reuseFailAlloc_4926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4926_, 0, v_data_4521_);
v___x_4922_ = v_reuseFailAlloc_4926_;
goto v_reusejp_4921_;
}
v_reusejp_4921_:
{
lean_object* v___x_4924_; 
if (v_isShared_4920_ == 0)
{
lean_ctor_set(v___x_4919_, 8, v___x_4922_);
v___x_4924_ = v___x_4919_;
goto v_reusejp_4923_;
}
else
{
lean_object* v_reuseFailAlloc_4925_; 
v_reuseFailAlloc_4925_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4925_, 0, v_G_4882_);
lean_ctor_set(v_reuseFailAlloc_4925_, 1, v_y_4883_);
lean_ctor_set(v_reuseFailAlloc_4925_, 2, v_u_4884_);
lean_ctor_set(v_reuseFailAlloc_4925_, 3, v_Y_4885_);
lean_ctor_set(v_reuseFailAlloc_4925_, 4, v_D_4886_);
lean_ctor_set(v_reuseFailAlloc_4925_, 5, v_M_4887_);
lean_ctor_set(v_reuseFailAlloc_4925_, 6, v_L_4888_);
lean_ctor_set(v_reuseFailAlloc_4925_, 7, v_d_4889_);
lean_ctor_set(v_reuseFailAlloc_4925_, 8, v___x_4922_);
lean_ctor_set(v_reuseFailAlloc_4925_, 9, v_q_4890_);
lean_ctor_set(v_reuseFailAlloc_4925_, 10, v_w_4891_);
lean_ctor_set(v_reuseFailAlloc_4925_, 11, v_W_4892_);
lean_ctor_set(v_reuseFailAlloc_4925_, 12, v_E_4893_);
lean_ctor_set(v_reuseFailAlloc_4925_, 13, v_e_4894_);
lean_ctor_set(v_reuseFailAlloc_4925_, 14, v_c_4895_);
lean_ctor_set(v_reuseFailAlloc_4925_, 15, v_F_4896_);
lean_ctor_set(v_reuseFailAlloc_4925_, 16, v_a_4897_);
lean_ctor_set(v_reuseFailAlloc_4925_, 17, v_b_4898_);
lean_ctor_set(v_reuseFailAlloc_4925_, 18, v_B_4899_);
lean_ctor_set(v_reuseFailAlloc_4925_, 19, v_h_4900_);
lean_ctor_set(v_reuseFailAlloc_4925_, 20, v_K_4901_);
lean_ctor_set(v_reuseFailAlloc_4925_, 21, v_k_4902_);
lean_ctor_set(v_reuseFailAlloc_4925_, 22, v_H_4903_);
lean_ctor_set(v_reuseFailAlloc_4925_, 23, v_m_4904_);
lean_ctor_set(v_reuseFailAlloc_4925_, 24, v_s_4905_);
lean_ctor_set(v_reuseFailAlloc_4925_, 25, v_S_4906_);
lean_ctor_set(v_reuseFailAlloc_4925_, 26, v_A_4907_);
lean_ctor_set(v_reuseFailAlloc_4925_, 27, v_n_4908_);
lean_ctor_set(v_reuseFailAlloc_4925_, 28, v_N_4909_);
lean_ctor_set(v_reuseFailAlloc_4925_, 29, v_V_4910_);
lean_ctor_set(v_reuseFailAlloc_4925_, 30, v_z_4911_);
lean_ctor_set(v_reuseFailAlloc_4925_, 31, v_zabbrev_4912_);
lean_ctor_set(v_reuseFailAlloc_4925_, 32, v_v_4913_);
lean_ctor_set(v_reuseFailAlloc_4925_, 33, v_O_4914_);
lean_ctor_set(v_reuseFailAlloc_4925_, 34, v_X_4915_);
lean_ctor_set(v_reuseFailAlloc_4925_, 35, v_x_4916_);
lean_ctor_set(v_reuseFailAlloc_4925_, 36, v_Z_4917_);
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
case 8:
{
lean_object* v___x_4932_; uint8_t v_isShared_4933_; uint8_t v_isSharedCheck_4981_; 
v_isSharedCheck_4981_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_4981_ == 0)
{
lean_object* v_unused_4982_; 
v_unused_4982_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_4982_);
v___x_4932_ = v_modifier_4520_;
v_isShared_4933_ = v_isSharedCheck_4981_;
goto v_resetjp_4931_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_4932_ = lean_box(0);
v_isShared_4933_ = v_isSharedCheck_4981_;
goto v_resetjp_4931_;
}
v_resetjp_4931_:
{
lean_object* v_G_4934_; lean_object* v_y_4935_; lean_object* v_u_4936_; lean_object* v_Y_4937_; lean_object* v_D_4938_; lean_object* v_M_4939_; lean_object* v_L_4940_; lean_object* v_d_4941_; lean_object* v_Q_4942_; lean_object* v_w_4943_; lean_object* v_W_4944_; lean_object* v_E_4945_; lean_object* v_e_4946_; lean_object* v_c_4947_; lean_object* v_F_4948_; lean_object* v_a_4949_; lean_object* v_b_4950_; lean_object* v_B_4951_; lean_object* v_h_4952_; lean_object* v_K_4953_; lean_object* v_k_4954_; lean_object* v_H_4955_; lean_object* v_m_4956_; lean_object* v_s_4957_; lean_object* v_S_4958_; lean_object* v_A_4959_; lean_object* v_n_4960_; lean_object* v_N_4961_; lean_object* v_V_4962_; lean_object* v_z_4963_; lean_object* v_zabbrev_4964_; lean_object* v_v_4965_; lean_object* v_O_4966_; lean_object* v_X_4967_; lean_object* v_x_4968_; lean_object* v_Z_4969_; lean_object* v___x_4971_; uint8_t v_isShared_4972_; uint8_t v_isSharedCheck_4979_; 
v_G_4934_ = lean_ctor_get(v_date_4519_, 0);
v_y_4935_ = lean_ctor_get(v_date_4519_, 1);
v_u_4936_ = lean_ctor_get(v_date_4519_, 2);
v_Y_4937_ = lean_ctor_get(v_date_4519_, 3);
v_D_4938_ = lean_ctor_get(v_date_4519_, 4);
v_M_4939_ = lean_ctor_get(v_date_4519_, 5);
v_L_4940_ = lean_ctor_get(v_date_4519_, 6);
v_d_4941_ = lean_ctor_get(v_date_4519_, 7);
v_Q_4942_ = lean_ctor_get(v_date_4519_, 8);
v_w_4943_ = lean_ctor_get(v_date_4519_, 10);
v_W_4944_ = lean_ctor_get(v_date_4519_, 11);
v_E_4945_ = lean_ctor_get(v_date_4519_, 12);
v_e_4946_ = lean_ctor_get(v_date_4519_, 13);
v_c_4947_ = lean_ctor_get(v_date_4519_, 14);
v_F_4948_ = lean_ctor_get(v_date_4519_, 15);
v_a_4949_ = lean_ctor_get(v_date_4519_, 16);
v_b_4950_ = lean_ctor_get(v_date_4519_, 17);
v_B_4951_ = lean_ctor_get(v_date_4519_, 18);
v_h_4952_ = lean_ctor_get(v_date_4519_, 19);
v_K_4953_ = lean_ctor_get(v_date_4519_, 20);
v_k_4954_ = lean_ctor_get(v_date_4519_, 21);
v_H_4955_ = lean_ctor_get(v_date_4519_, 22);
v_m_4956_ = lean_ctor_get(v_date_4519_, 23);
v_s_4957_ = lean_ctor_get(v_date_4519_, 24);
v_S_4958_ = lean_ctor_get(v_date_4519_, 25);
v_A_4959_ = lean_ctor_get(v_date_4519_, 26);
v_n_4960_ = lean_ctor_get(v_date_4519_, 27);
v_N_4961_ = lean_ctor_get(v_date_4519_, 28);
v_V_4962_ = lean_ctor_get(v_date_4519_, 29);
v_z_4963_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_4964_ = lean_ctor_get(v_date_4519_, 31);
v_v_4965_ = lean_ctor_get(v_date_4519_, 32);
v_O_4966_ = lean_ctor_get(v_date_4519_, 33);
v_X_4967_ = lean_ctor_get(v_date_4519_, 34);
v_x_4968_ = lean_ctor_get(v_date_4519_, 35);
v_Z_4969_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_4979_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_4979_ == 0)
{
lean_object* v_unused_4980_; 
v_unused_4980_ = lean_ctor_get(v_date_4519_, 9);
lean_dec(v_unused_4980_);
v___x_4971_ = v_date_4519_;
v_isShared_4972_ = v_isSharedCheck_4979_;
goto v_resetjp_4970_;
}
else
{
lean_inc(v_Z_4969_);
lean_inc(v_x_4968_);
lean_inc(v_X_4967_);
lean_inc(v_O_4966_);
lean_inc(v_v_4965_);
lean_inc(v_zabbrev_4964_);
lean_inc(v_z_4963_);
lean_inc(v_V_4962_);
lean_inc(v_N_4961_);
lean_inc(v_n_4960_);
lean_inc(v_A_4959_);
lean_inc(v_S_4958_);
lean_inc(v_s_4957_);
lean_inc(v_m_4956_);
lean_inc(v_H_4955_);
lean_inc(v_k_4954_);
lean_inc(v_K_4953_);
lean_inc(v_h_4952_);
lean_inc(v_B_4951_);
lean_inc(v_b_4950_);
lean_inc(v_a_4949_);
lean_inc(v_F_4948_);
lean_inc(v_c_4947_);
lean_inc(v_e_4946_);
lean_inc(v_E_4945_);
lean_inc(v_W_4944_);
lean_inc(v_w_4943_);
lean_inc(v_Q_4942_);
lean_inc(v_d_4941_);
lean_inc(v_L_4940_);
lean_inc(v_M_4939_);
lean_inc(v_D_4938_);
lean_inc(v_Y_4937_);
lean_inc(v_u_4936_);
lean_inc(v_y_4935_);
lean_inc(v_G_4934_);
lean_dec(v_date_4519_);
v___x_4971_ = lean_box(0);
v_isShared_4972_ = v_isSharedCheck_4979_;
goto v_resetjp_4970_;
}
v_resetjp_4970_:
{
lean_object* v___x_4974_; 
if (v_isShared_4933_ == 0)
{
lean_ctor_set_tag(v___x_4932_, 1);
lean_ctor_set(v___x_4932_, 0, v_data_4521_);
v___x_4974_ = v___x_4932_;
goto v_reusejp_4973_;
}
else
{
lean_object* v_reuseFailAlloc_4978_; 
v_reuseFailAlloc_4978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4978_, 0, v_data_4521_);
v___x_4974_ = v_reuseFailAlloc_4978_;
goto v_reusejp_4973_;
}
v_reusejp_4973_:
{
lean_object* v___x_4976_; 
if (v_isShared_4972_ == 0)
{
lean_ctor_set(v___x_4971_, 9, v___x_4974_);
v___x_4976_ = v___x_4971_;
goto v_reusejp_4975_;
}
else
{
lean_object* v_reuseFailAlloc_4977_; 
v_reuseFailAlloc_4977_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_4977_, 0, v_G_4934_);
lean_ctor_set(v_reuseFailAlloc_4977_, 1, v_y_4935_);
lean_ctor_set(v_reuseFailAlloc_4977_, 2, v_u_4936_);
lean_ctor_set(v_reuseFailAlloc_4977_, 3, v_Y_4937_);
lean_ctor_set(v_reuseFailAlloc_4977_, 4, v_D_4938_);
lean_ctor_set(v_reuseFailAlloc_4977_, 5, v_M_4939_);
lean_ctor_set(v_reuseFailAlloc_4977_, 6, v_L_4940_);
lean_ctor_set(v_reuseFailAlloc_4977_, 7, v_d_4941_);
lean_ctor_set(v_reuseFailAlloc_4977_, 8, v_Q_4942_);
lean_ctor_set(v_reuseFailAlloc_4977_, 9, v___x_4974_);
lean_ctor_set(v_reuseFailAlloc_4977_, 10, v_w_4943_);
lean_ctor_set(v_reuseFailAlloc_4977_, 11, v_W_4944_);
lean_ctor_set(v_reuseFailAlloc_4977_, 12, v_E_4945_);
lean_ctor_set(v_reuseFailAlloc_4977_, 13, v_e_4946_);
lean_ctor_set(v_reuseFailAlloc_4977_, 14, v_c_4947_);
lean_ctor_set(v_reuseFailAlloc_4977_, 15, v_F_4948_);
lean_ctor_set(v_reuseFailAlloc_4977_, 16, v_a_4949_);
lean_ctor_set(v_reuseFailAlloc_4977_, 17, v_b_4950_);
lean_ctor_set(v_reuseFailAlloc_4977_, 18, v_B_4951_);
lean_ctor_set(v_reuseFailAlloc_4977_, 19, v_h_4952_);
lean_ctor_set(v_reuseFailAlloc_4977_, 20, v_K_4953_);
lean_ctor_set(v_reuseFailAlloc_4977_, 21, v_k_4954_);
lean_ctor_set(v_reuseFailAlloc_4977_, 22, v_H_4955_);
lean_ctor_set(v_reuseFailAlloc_4977_, 23, v_m_4956_);
lean_ctor_set(v_reuseFailAlloc_4977_, 24, v_s_4957_);
lean_ctor_set(v_reuseFailAlloc_4977_, 25, v_S_4958_);
lean_ctor_set(v_reuseFailAlloc_4977_, 26, v_A_4959_);
lean_ctor_set(v_reuseFailAlloc_4977_, 27, v_n_4960_);
lean_ctor_set(v_reuseFailAlloc_4977_, 28, v_N_4961_);
lean_ctor_set(v_reuseFailAlloc_4977_, 29, v_V_4962_);
lean_ctor_set(v_reuseFailAlloc_4977_, 30, v_z_4963_);
lean_ctor_set(v_reuseFailAlloc_4977_, 31, v_zabbrev_4964_);
lean_ctor_set(v_reuseFailAlloc_4977_, 32, v_v_4965_);
lean_ctor_set(v_reuseFailAlloc_4977_, 33, v_O_4966_);
lean_ctor_set(v_reuseFailAlloc_4977_, 34, v_X_4967_);
lean_ctor_set(v_reuseFailAlloc_4977_, 35, v_x_4968_);
lean_ctor_set(v_reuseFailAlloc_4977_, 36, v_Z_4969_);
v___x_4976_ = v_reuseFailAlloc_4977_;
goto v_reusejp_4975_;
}
v_reusejp_4975_:
{
return v___x_4976_;
}
}
}
}
}
case 9:
{
lean_object* v___x_4984_; uint8_t v_isShared_4985_; uint8_t v_isSharedCheck_5033_; 
v_isSharedCheck_5033_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_5033_ == 0)
{
lean_object* v_unused_5034_; 
v_unused_5034_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_5034_);
v___x_4984_ = v_modifier_4520_;
v_isShared_4985_ = v_isSharedCheck_5033_;
goto v_resetjp_4983_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_4984_ = lean_box(0);
v_isShared_4985_ = v_isSharedCheck_5033_;
goto v_resetjp_4983_;
}
v_resetjp_4983_:
{
lean_object* v_G_4986_; lean_object* v_y_4987_; lean_object* v_u_4988_; lean_object* v_D_4989_; lean_object* v_M_4990_; lean_object* v_L_4991_; lean_object* v_d_4992_; lean_object* v_Q_4993_; lean_object* v_q_4994_; lean_object* v_w_4995_; lean_object* v_W_4996_; lean_object* v_E_4997_; lean_object* v_e_4998_; lean_object* v_c_4999_; lean_object* v_F_5000_; lean_object* v_a_5001_; lean_object* v_b_5002_; lean_object* v_B_5003_; lean_object* v_h_5004_; lean_object* v_K_5005_; lean_object* v_k_5006_; lean_object* v_H_5007_; lean_object* v_m_5008_; lean_object* v_s_5009_; lean_object* v_S_5010_; lean_object* v_A_5011_; lean_object* v_n_5012_; lean_object* v_N_5013_; lean_object* v_V_5014_; lean_object* v_z_5015_; lean_object* v_zabbrev_5016_; lean_object* v_v_5017_; lean_object* v_O_5018_; lean_object* v_X_5019_; lean_object* v_x_5020_; lean_object* v_Z_5021_; lean_object* v___x_5023_; uint8_t v_isShared_5024_; uint8_t v_isSharedCheck_5031_; 
v_G_4986_ = lean_ctor_get(v_date_4519_, 0);
v_y_4987_ = lean_ctor_get(v_date_4519_, 1);
v_u_4988_ = lean_ctor_get(v_date_4519_, 2);
v_D_4989_ = lean_ctor_get(v_date_4519_, 4);
v_M_4990_ = lean_ctor_get(v_date_4519_, 5);
v_L_4991_ = lean_ctor_get(v_date_4519_, 6);
v_d_4992_ = lean_ctor_get(v_date_4519_, 7);
v_Q_4993_ = lean_ctor_get(v_date_4519_, 8);
v_q_4994_ = lean_ctor_get(v_date_4519_, 9);
v_w_4995_ = lean_ctor_get(v_date_4519_, 10);
v_W_4996_ = lean_ctor_get(v_date_4519_, 11);
v_E_4997_ = lean_ctor_get(v_date_4519_, 12);
v_e_4998_ = lean_ctor_get(v_date_4519_, 13);
v_c_4999_ = lean_ctor_get(v_date_4519_, 14);
v_F_5000_ = lean_ctor_get(v_date_4519_, 15);
v_a_5001_ = lean_ctor_get(v_date_4519_, 16);
v_b_5002_ = lean_ctor_get(v_date_4519_, 17);
v_B_5003_ = lean_ctor_get(v_date_4519_, 18);
v_h_5004_ = lean_ctor_get(v_date_4519_, 19);
v_K_5005_ = lean_ctor_get(v_date_4519_, 20);
v_k_5006_ = lean_ctor_get(v_date_4519_, 21);
v_H_5007_ = lean_ctor_get(v_date_4519_, 22);
v_m_5008_ = lean_ctor_get(v_date_4519_, 23);
v_s_5009_ = lean_ctor_get(v_date_4519_, 24);
v_S_5010_ = lean_ctor_get(v_date_4519_, 25);
v_A_5011_ = lean_ctor_get(v_date_4519_, 26);
v_n_5012_ = lean_ctor_get(v_date_4519_, 27);
v_N_5013_ = lean_ctor_get(v_date_4519_, 28);
v_V_5014_ = lean_ctor_get(v_date_4519_, 29);
v_z_5015_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5016_ = lean_ctor_get(v_date_4519_, 31);
v_v_5017_ = lean_ctor_get(v_date_4519_, 32);
v_O_5018_ = lean_ctor_get(v_date_4519_, 33);
v_X_5019_ = lean_ctor_get(v_date_4519_, 34);
v_x_5020_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5021_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5031_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5031_ == 0)
{
lean_object* v_unused_5032_; 
v_unused_5032_ = lean_ctor_get(v_date_4519_, 3);
lean_dec(v_unused_5032_);
v___x_5023_ = v_date_4519_;
v_isShared_5024_ = v_isSharedCheck_5031_;
goto v_resetjp_5022_;
}
else
{
lean_inc(v_Z_5021_);
lean_inc(v_x_5020_);
lean_inc(v_X_5019_);
lean_inc(v_O_5018_);
lean_inc(v_v_5017_);
lean_inc(v_zabbrev_5016_);
lean_inc(v_z_5015_);
lean_inc(v_V_5014_);
lean_inc(v_N_5013_);
lean_inc(v_n_5012_);
lean_inc(v_A_5011_);
lean_inc(v_S_5010_);
lean_inc(v_s_5009_);
lean_inc(v_m_5008_);
lean_inc(v_H_5007_);
lean_inc(v_k_5006_);
lean_inc(v_K_5005_);
lean_inc(v_h_5004_);
lean_inc(v_B_5003_);
lean_inc(v_b_5002_);
lean_inc(v_a_5001_);
lean_inc(v_F_5000_);
lean_inc(v_c_4999_);
lean_inc(v_e_4998_);
lean_inc(v_E_4997_);
lean_inc(v_W_4996_);
lean_inc(v_w_4995_);
lean_inc(v_q_4994_);
lean_inc(v_Q_4993_);
lean_inc(v_d_4992_);
lean_inc(v_L_4991_);
lean_inc(v_M_4990_);
lean_inc(v_D_4989_);
lean_inc(v_u_4988_);
lean_inc(v_y_4987_);
lean_inc(v_G_4986_);
lean_dec(v_date_4519_);
v___x_5023_ = lean_box(0);
v_isShared_5024_ = v_isSharedCheck_5031_;
goto v_resetjp_5022_;
}
v_resetjp_5022_:
{
lean_object* v___x_5026_; 
if (v_isShared_4985_ == 0)
{
lean_ctor_set_tag(v___x_4984_, 1);
lean_ctor_set(v___x_4984_, 0, v_data_4521_);
v___x_5026_ = v___x_4984_;
goto v_reusejp_5025_;
}
else
{
lean_object* v_reuseFailAlloc_5030_; 
v_reuseFailAlloc_5030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5030_, 0, v_data_4521_);
v___x_5026_ = v_reuseFailAlloc_5030_;
goto v_reusejp_5025_;
}
v_reusejp_5025_:
{
lean_object* v___x_5028_; 
if (v_isShared_5024_ == 0)
{
lean_ctor_set(v___x_5023_, 3, v___x_5026_);
v___x_5028_ = v___x_5023_;
goto v_reusejp_5027_;
}
else
{
lean_object* v_reuseFailAlloc_5029_; 
v_reuseFailAlloc_5029_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5029_, 0, v_G_4986_);
lean_ctor_set(v_reuseFailAlloc_5029_, 1, v_y_4987_);
lean_ctor_set(v_reuseFailAlloc_5029_, 2, v_u_4988_);
lean_ctor_set(v_reuseFailAlloc_5029_, 3, v___x_5026_);
lean_ctor_set(v_reuseFailAlloc_5029_, 4, v_D_4989_);
lean_ctor_set(v_reuseFailAlloc_5029_, 5, v_M_4990_);
lean_ctor_set(v_reuseFailAlloc_5029_, 6, v_L_4991_);
lean_ctor_set(v_reuseFailAlloc_5029_, 7, v_d_4992_);
lean_ctor_set(v_reuseFailAlloc_5029_, 8, v_Q_4993_);
lean_ctor_set(v_reuseFailAlloc_5029_, 9, v_q_4994_);
lean_ctor_set(v_reuseFailAlloc_5029_, 10, v_w_4995_);
lean_ctor_set(v_reuseFailAlloc_5029_, 11, v_W_4996_);
lean_ctor_set(v_reuseFailAlloc_5029_, 12, v_E_4997_);
lean_ctor_set(v_reuseFailAlloc_5029_, 13, v_e_4998_);
lean_ctor_set(v_reuseFailAlloc_5029_, 14, v_c_4999_);
lean_ctor_set(v_reuseFailAlloc_5029_, 15, v_F_5000_);
lean_ctor_set(v_reuseFailAlloc_5029_, 16, v_a_5001_);
lean_ctor_set(v_reuseFailAlloc_5029_, 17, v_b_5002_);
lean_ctor_set(v_reuseFailAlloc_5029_, 18, v_B_5003_);
lean_ctor_set(v_reuseFailAlloc_5029_, 19, v_h_5004_);
lean_ctor_set(v_reuseFailAlloc_5029_, 20, v_K_5005_);
lean_ctor_set(v_reuseFailAlloc_5029_, 21, v_k_5006_);
lean_ctor_set(v_reuseFailAlloc_5029_, 22, v_H_5007_);
lean_ctor_set(v_reuseFailAlloc_5029_, 23, v_m_5008_);
lean_ctor_set(v_reuseFailAlloc_5029_, 24, v_s_5009_);
lean_ctor_set(v_reuseFailAlloc_5029_, 25, v_S_5010_);
lean_ctor_set(v_reuseFailAlloc_5029_, 26, v_A_5011_);
lean_ctor_set(v_reuseFailAlloc_5029_, 27, v_n_5012_);
lean_ctor_set(v_reuseFailAlloc_5029_, 28, v_N_5013_);
lean_ctor_set(v_reuseFailAlloc_5029_, 29, v_V_5014_);
lean_ctor_set(v_reuseFailAlloc_5029_, 30, v_z_5015_);
lean_ctor_set(v_reuseFailAlloc_5029_, 31, v_zabbrev_5016_);
lean_ctor_set(v_reuseFailAlloc_5029_, 32, v_v_5017_);
lean_ctor_set(v_reuseFailAlloc_5029_, 33, v_O_5018_);
lean_ctor_set(v_reuseFailAlloc_5029_, 34, v_X_5019_);
lean_ctor_set(v_reuseFailAlloc_5029_, 35, v_x_5020_);
lean_ctor_set(v_reuseFailAlloc_5029_, 36, v_Z_5021_);
v___x_5028_ = v_reuseFailAlloc_5029_;
goto v_reusejp_5027_;
}
v_reusejp_5027_:
{
return v___x_5028_;
}
}
}
}
}
case 10:
{
lean_object* v___x_5036_; uint8_t v_isShared_5037_; uint8_t v_isSharedCheck_5085_; 
v_isSharedCheck_5085_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_5085_ == 0)
{
lean_object* v_unused_5086_; 
v_unused_5086_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_5086_);
v___x_5036_ = v_modifier_4520_;
v_isShared_5037_ = v_isSharedCheck_5085_;
goto v_resetjp_5035_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_5036_ = lean_box(0);
v_isShared_5037_ = v_isSharedCheck_5085_;
goto v_resetjp_5035_;
}
v_resetjp_5035_:
{
lean_object* v_G_5038_; lean_object* v_y_5039_; lean_object* v_u_5040_; lean_object* v_Y_5041_; lean_object* v_D_5042_; lean_object* v_M_5043_; lean_object* v_L_5044_; lean_object* v_d_5045_; lean_object* v_Q_5046_; lean_object* v_q_5047_; lean_object* v_W_5048_; lean_object* v_E_5049_; lean_object* v_e_5050_; lean_object* v_c_5051_; lean_object* v_F_5052_; lean_object* v_a_5053_; lean_object* v_b_5054_; lean_object* v_B_5055_; lean_object* v_h_5056_; lean_object* v_K_5057_; lean_object* v_k_5058_; lean_object* v_H_5059_; lean_object* v_m_5060_; lean_object* v_s_5061_; lean_object* v_S_5062_; lean_object* v_A_5063_; lean_object* v_n_5064_; lean_object* v_N_5065_; lean_object* v_V_5066_; lean_object* v_z_5067_; lean_object* v_zabbrev_5068_; lean_object* v_v_5069_; lean_object* v_O_5070_; lean_object* v_X_5071_; lean_object* v_x_5072_; lean_object* v_Z_5073_; lean_object* v___x_5075_; uint8_t v_isShared_5076_; uint8_t v_isSharedCheck_5083_; 
v_G_5038_ = lean_ctor_get(v_date_4519_, 0);
v_y_5039_ = lean_ctor_get(v_date_4519_, 1);
v_u_5040_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5041_ = lean_ctor_get(v_date_4519_, 3);
v_D_5042_ = lean_ctor_get(v_date_4519_, 4);
v_M_5043_ = lean_ctor_get(v_date_4519_, 5);
v_L_5044_ = lean_ctor_get(v_date_4519_, 6);
v_d_5045_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5046_ = lean_ctor_get(v_date_4519_, 8);
v_q_5047_ = lean_ctor_get(v_date_4519_, 9);
v_W_5048_ = lean_ctor_get(v_date_4519_, 11);
v_E_5049_ = lean_ctor_get(v_date_4519_, 12);
v_e_5050_ = lean_ctor_get(v_date_4519_, 13);
v_c_5051_ = lean_ctor_get(v_date_4519_, 14);
v_F_5052_ = lean_ctor_get(v_date_4519_, 15);
v_a_5053_ = lean_ctor_get(v_date_4519_, 16);
v_b_5054_ = lean_ctor_get(v_date_4519_, 17);
v_B_5055_ = lean_ctor_get(v_date_4519_, 18);
v_h_5056_ = lean_ctor_get(v_date_4519_, 19);
v_K_5057_ = lean_ctor_get(v_date_4519_, 20);
v_k_5058_ = lean_ctor_get(v_date_4519_, 21);
v_H_5059_ = lean_ctor_get(v_date_4519_, 22);
v_m_5060_ = lean_ctor_get(v_date_4519_, 23);
v_s_5061_ = lean_ctor_get(v_date_4519_, 24);
v_S_5062_ = lean_ctor_get(v_date_4519_, 25);
v_A_5063_ = lean_ctor_get(v_date_4519_, 26);
v_n_5064_ = lean_ctor_get(v_date_4519_, 27);
v_N_5065_ = lean_ctor_get(v_date_4519_, 28);
v_V_5066_ = lean_ctor_get(v_date_4519_, 29);
v_z_5067_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5068_ = lean_ctor_get(v_date_4519_, 31);
v_v_5069_ = lean_ctor_get(v_date_4519_, 32);
v_O_5070_ = lean_ctor_get(v_date_4519_, 33);
v_X_5071_ = lean_ctor_get(v_date_4519_, 34);
v_x_5072_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5073_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5083_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5083_ == 0)
{
lean_object* v_unused_5084_; 
v_unused_5084_ = lean_ctor_get(v_date_4519_, 10);
lean_dec(v_unused_5084_);
v___x_5075_ = v_date_4519_;
v_isShared_5076_ = v_isSharedCheck_5083_;
goto v_resetjp_5074_;
}
else
{
lean_inc(v_Z_5073_);
lean_inc(v_x_5072_);
lean_inc(v_X_5071_);
lean_inc(v_O_5070_);
lean_inc(v_v_5069_);
lean_inc(v_zabbrev_5068_);
lean_inc(v_z_5067_);
lean_inc(v_V_5066_);
lean_inc(v_N_5065_);
lean_inc(v_n_5064_);
lean_inc(v_A_5063_);
lean_inc(v_S_5062_);
lean_inc(v_s_5061_);
lean_inc(v_m_5060_);
lean_inc(v_H_5059_);
lean_inc(v_k_5058_);
lean_inc(v_K_5057_);
lean_inc(v_h_5056_);
lean_inc(v_B_5055_);
lean_inc(v_b_5054_);
lean_inc(v_a_5053_);
lean_inc(v_F_5052_);
lean_inc(v_c_5051_);
lean_inc(v_e_5050_);
lean_inc(v_E_5049_);
lean_inc(v_W_5048_);
lean_inc(v_q_5047_);
lean_inc(v_Q_5046_);
lean_inc(v_d_5045_);
lean_inc(v_L_5044_);
lean_inc(v_M_5043_);
lean_inc(v_D_5042_);
lean_inc(v_Y_5041_);
lean_inc(v_u_5040_);
lean_inc(v_y_5039_);
lean_inc(v_G_5038_);
lean_dec(v_date_4519_);
v___x_5075_ = lean_box(0);
v_isShared_5076_ = v_isSharedCheck_5083_;
goto v_resetjp_5074_;
}
v_resetjp_5074_:
{
lean_object* v___x_5078_; 
if (v_isShared_5037_ == 0)
{
lean_ctor_set_tag(v___x_5036_, 1);
lean_ctor_set(v___x_5036_, 0, v_data_4521_);
v___x_5078_ = v___x_5036_;
goto v_reusejp_5077_;
}
else
{
lean_object* v_reuseFailAlloc_5082_; 
v_reuseFailAlloc_5082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5082_, 0, v_data_4521_);
v___x_5078_ = v_reuseFailAlloc_5082_;
goto v_reusejp_5077_;
}
v_reusejp_5077_:
{
lean_object* v___x_5080_; 
if (v_isShared_5076_ == 0)
{
lean_ctor_set(v___x_5075_, 10, v___x_5078_);
v___x_5080_ = v___x_5075_;
goto v_reusejp_5079_;
}
else
{
lean_object* v_reuseFailAlloc_5081_; 
v_reuseFailAlloc_5081_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5081_, 0, v_G_5038_);
lean_ctor_set(v_reuseFailAlloc_5081_, 1, v_y_5039_);
lean_ctor_set(v_reuseFailAlloc_5081_, 2, v_u_5040_);
lean_ctor_set(v_reuseFailAlloc_5081_, 3, v_Y_5041_);
lean_ctor_set(v_reuseFailAlloc_5081_, 4, v_D_5042_);
lean_ctor_set(v_reuseFailAlloc_5081_, 5, v_M_5043_);
lean_ctor_set(v_reuseFailAlloc_5081_, 6, v_L_5044_);
lean_ctor_set(v_reuseFailAlloc_5081_, 7, v_d_5045_);
lean_ctor_set(v_reuseFailAlloc_5081_, 8, v_Q_5046_);
lean_ctor_set(v_reuseFailAlloc_5081_, 9, v_q_5047_);
lean_ctor_set(v_reuseFailAlloc_5081_, 10, v___x_5078_);
lean_ctor_set(v_reuseFailAlloc_5081_, 11, v_W_5048_);
lean_ctor_set(v_reuseFailAlloc_5081_, 12, v_E_5049_);
lean_ctor_set(v_reuseFailAlloc_5081_, 13, v_e_5050_);
lean_ctor_set(v_reuseFailAlloc_5081_, 14, v_c_5051_);
lean_ctor_set(v_reuseFailAlloc_5081_, 15, v_F_5052_);
lean_ctor_set(v_reuseFailAlloc_5081_, 16, v_a_5053_);
lean_ctor_set(v_reuseFailAlloc_5081_, 17, v_b_5054_);
lean_ctor_set(v_reuseFailAlloc_5081_, 18, v_B_5055_);
lean_ctor_set(v_reuseFailAlloc_5081_, 19, v_h_5056_);
lean_ctor_set(v_reuseFailAlloc_5081_, 20, v_K_5057_);
lean_ctor_set(v_reuseFailAlloc_5081_, 21, v_k_5058_);
lean_ctor_set(v_reuseFailAlloc_5081_, 22, v_H_5059_);
lean_ctor_set(v_reuseFailAlloc_5081_, 23, v_m_5060_);
lean_ctor_set(v_reuseFailAlloc_5081_, 24, v_s_5061_);
lean_ctor_set(v_reuseFailAlloc_5081_, 25, v_S_5062_);
lean_ctor_set(v_reuseFailAlloc_5081_, 26, v_A_5063_);
lean_ctor_set(v_reuseFailAlloc_5081_, 27, v_n_5064_);
lean_ctor_set(v_reuseFailAlloc_5081_, 28, v_N_5065_);
lean_ctor_set(v_reuseFailAlloc_5081_, 29, v_V_5066_);
lean_ctor_set(v_reuseFailAlloc_5081_, 30, v_z_5067_);
lean_ctor_set(v_reuseFailAlloc_5081_, 31, v_zabbrev_5068_);
lean_ctor_set(v_reuseFailAlloc_5081_, 32, v_v_5069_);
lean_ctor_set(v_reuseFailAlloc_5081_, 33, v_O_5070_);
lean_ctor_set(v_reuseFailAlloc_5081_, 34, v_X_5071_);
lean_ctor_set(v_reuseFailAlloc_5081_, 35, v_x_5072_);
lean_ctor_set(v_reuseFailAlloc_5081_, 36, v_Z_5073_);
v___x_5080_ = v_reuseFailAlloc_5081_;
goto v_reusejp_5079_;
}
v_reusejp_5079_:
{
return v___x_5080_;
}
}
}
}
}
case 11:
{
lean_object* v___x_5088_; uint8_t v_isShared_5089_; uint8_t v_isSharedCheck_5137_; 
v_isSharedCheck_5137_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_5137_ == 0)
{
lean_object* v_unused_5138_; 
v_unused_5138_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_5138_);
v___x_5088_ = v_modifier_4520_;
v_isShared_5089_ = v_isSharedCheck_5137_;
goto v_resetjp_5087_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_5088_ = lean_box(0);
v_isShared_5089_ = v_isSharedCheck_5137_;
goto v_resetjp_5087_;
}
v_resetjp_5087_:
{
lean_object* v_G_5090_; lean_object* v_y_5091_; lean_object* v_u_5092_; lean_object* v_Y_5093_; lean_object* v_D_5094_; lean_object* v_M_5095_; lean_object* v_L_5096_; lean_object* v_d_5097_; lean_object* v_Q_5098_; lean_object* v_q_5099_; lean_object* v_w_5100_; lean_object* v_E_5101_; lean_object* v_e_5102_; lean_object* v_c_5103_; lean_object* v_F_5104_; lean_object* v_a_5105_; lean_object* v_b_5106_; lean_object* v_B_5107_; lean_object* v_h_5108_; lean_object* v_K_5109_; lean_object* v_k_5110_; lean_object* v_H_5111_; lean_object* v_m_5112_; lean_object* v_s_5113_; lean_object* v_S_5114_; lean_object* v_A_5115_; lean_object* v_n_5116_; lean_object* v_N_5117_; lean_object* v_V_5118_; lean_object* v_z_5119_; lean_object* v_zabbrev_5120_; lean_object* v_v_5121_; lean_object* v_O_5122_; lean_object* v_X_5123_; lean_object* v_x_5124_; lean_object* v_Z_5125_; lean_object* v___x_5127_; uint8_t v_isShared_5128_; uint8_t v_isSharedCheck_5135_; 
v_G_5090_ = lean_ctor_get(v_date_4519_, 0);
v_y_5091_ = lean_ctor_get(v_date_4519_, 1);
v_u_5092_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5093_ = lean_ctor_get(v_date_4519_, 3);
v_D_5094_ = lean_ctor_get(v_date_4519_, 4);
v_M_5095_ = lean_ctor_get(v_date_4519_, 5);
v_L_5096_ = lean_ctor_get(v_date_4519_, 6);
v_d_5097_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5098_ = lean_ctor_get(v_date_4519_, 8);
v_q_5099_ = lean_ctor_get(v_date_4519_, 9);
v_w_5100_ = lean_ctor_get(v_date_4519_, 10);
v_E_5101_ = lean_ctor_get(v_date_4519_, 12);
v_e_5102_ = lean_ctor_get(v_date_4519_, 13);
v_c_5103_ = lean_ctor_get(v_date_4519_, 14);
v_F_5104_ = lean_ctor_get(v_date_4519_, 15);
v_a_5105_ = lean_ctor_get(v_date_4519_, 16);
v_b_5106_ = lean_ctor_get(v_date_4519_, 17);
v_B_5107_ = lean_ctor_get(v_date_4519_, 18);
v_h_5108_ = lean_ctor_get(v_date_4519_, 19);
v_K_5109_ = lean_ctor_get(v_date_4519_, 20);
v_k_5110_ = lean_ctor_get(v_date_4519_, 21);
v_H_5111_ = lean_ctor_get(v_date_4519_, 22);
v_m_5112_ = lean_ctor_get(v_date_4519_, 23);
v_s_5113_ = lean_ctor_get(v_date_4519_, 24);
v_S_5114_ = lean_ctor_get(v_date_4519_, 25);
v_A_5115_ = lean_ctor_get(v_date_4519_, 26);
v_n_5116_ = lean_ctor_get(v_date_4519_, 27);
v_N_5117_ = lean_ctor_get(v_date_4519_, 28);
v_V_5118_ = lean_ctor_get(v_date_4519_, 29);
v_z_5119_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5120_ = lean_ctor_get(v_date_4519_, 31);
v_v_5121_ = lean_ctor_get(v_date_4519_, 32);
v_O_5122_ = lean_ctor_get(v_date_4519_, 33);
v_X_5123_ = lean_ctor_get(v_date_4519_, 34);
v_x_5124_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5125_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5135_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5135_ == 0)
{
lean_object* v_unused_5136_; 
v_unused_5136_ = lean_ctor_get(v_date_4519_, 11);
lean_dec(v_unused_5136_);
v___x_5127_ = v_date_4519_;
v_isShared_5128_ = v_isSharedCheck_5135_;
goto v_resetjp_5126_;
}
else
{
lean_inc(v_Z_5125_);
lean_inc(v_x_5124_);
lean_inc(v_X_5123_);
lean_inc(v_O_5122_);
lean_inc(v_v_5121_);
lean_inc(v_zabbrev_5120_);
lean_inc(v_z_5119_);
lean_inc(v_V_5118_);
lean_inc(v_N_5117_);
lean_inc(v_n_5116_);
lean_inc(v_A_5115_);
lean_inc(v_S_5114_);
lean_inc(v_s_5113_);
lean_inc(v_m_5112_);
lean_inc(v_H_5111_);
lean_inc(v_k_5110_);
lean_inc(v_K_5109_);
lean_inc(v_h_5108_);
lean_inc(v_B_5107_);
lean_inc(v_b_5106_);
lean_inc(v_a_5105_);
lean_inc(v_F_5104_);
lean_inc(v_c_5103_);
lean_inc(v_e_5102_);
lean_inc(v_E_5101_);
lean_inc(v_w_5100_);
lean_inc(v_q_5099_);
lean_inc(v_Q_5098_);
lean_inc(v_d_5097_);
lean_inc(v_L_5096_);
lean_inc(v_M_5095_);
lean_inc(v_D_5094_);
lean_inc(v_Y_5093_);
lean_inc(v_u_5092_);
lean_inc(v_y_5091_);
lean_inc(v_G_5090_);
lean_dec(v_date_4519_);
v___x_5127_ = lean_box(0);
v_isShared_5128_ = v_isSharedCheck_5135_;
goto v_resetjp_5126_;
}
v_resetjp_5126_:
{
lean_object* v___x_5130_; 
if (v_isShared_5089_ == 0)
{
lean_ctor_set_tag(v___x_5088_, 1);
lean_ctor_set(v___x_5088_, 0, v_data_4521_);
v___x_5130_ = v___x_5088_;
goto v_reusejp_5129_;
}
else
{
lean_object* v_reuseFailAlloc_5134_; 
v_reuseFailAlloc_5134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5134_, 0, v_data_4521_);
v___x_5130_ = v_reuseFailAlloc_5134_;
goto v_reusejp_5129_;
}
v_reusejp_5129_:
{
lean_object* v___x_5132_; 
if (v_isShared_5128_ == 0)
{
lean_ctor_set(v___x_5127_, 11, v___x_5130_);
v___x_5132_ = v___x_5127_;
goto v_reusejp_5131_;
}
else
{
lean_object* v_reuseFailAlloc_5133_; 
v_reuseFailAlloc_5133_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5133_, 0, v_G_5090_);
lean_ctor_set(v_reuseFailAlloc_5133_, 1, v_y_5091_);
lean_ctor_set(v_reuseFailAlloc_5133_, 2, v_u_5092_);
lean_ctor_set(v_reuseFailAlloc_5133_, 3, v_Y_5093_);
lean_ctor_set(v_reuseFailAlloc_5133_, 4, v_D_5094_);
lean_ctor_set(v_reuseFailAlloc_5133_, 5, v_M_5095_);
lean_ctor_set(v_reuseFailAlloc_5133_, 6, v_L_5096_);
lean_ctor_set(v_reuseFailAlloc_5133_, 7, v_d_5097_);
lean_ctor_set(v_reuseFailAlloc_5133_, 8, v_Q_5098_);
lean_ctor_set(v_reuseFailAlloc_5133_, 9, v_q_5099_);
lean_ctor_set(v_reuseFailAlloc_5133_, 10, v_w_5100_);
lean_ctor_set(v_reuseFailAlloc_5133_, 11, v___x_5130_);
lean_ctor_set(v_reuseFailAlloc_5133_, 12, v_E_5101_);
lean_ctor_set(v_reuseFailAlloc_5133_, 13, v_e_5102_);
lean_ctor_set(v_reuseFailAlloc_5133_, 14, v_c_5103_);
lean_ctor_set(v_reuseFailAlloc_5133_, 15, v_F_5104_);
lean_ctor_set(v_reuseFailAlloc_5133_, 16, v_a_5105_);
lean_ctor_set(v_reuseFailAlloc_5133_, 17, v_b_5106_);
lean_ctor_set(v_reuseFailAlloc_5133_, 18, v_B_5107_);
lean_ctor_set(v_reuseFailAlloc_5133_, 19, v_h_5108_);
lean_ctor_set(v_reuseFailAlloc_5133_, 20, v_K_5109_);
lean_ctor_set(v_reuseFailAlloc_5133_, 21, v_k_5110_);
lean_ctor_set(v_reuseFailAlloc_5133_, 22, v_H_5111_);
lean_ctor_set(v_reuseFailAlloc_5133_, 23, v_m_5112_);
lean_ctor_set(v_reuseFailAlloc_5133_, 24, v_s_5113_);
lean_ctor_set(v_reuseFailAlloc_5133_, 25, v_S_5114_);
lean_ctor_set(v_reuseFailAlloc_5133_, 26, v_A_5115_);
lean_ctor_set(v_reuseFailAlloc_5133_, 27, v_n_5116_);
lean_ctor_set(v_reuseFailAlloc_5133_, 28, v_N_5117_);
lean_ctor_set(v_reuseFailAlloc_5133_, 29, v_V_5118_);
lean_ctor_set(v_reuseFailAlloc_5133_, 30, v_z_5119_);
lean_ctor_set(v_reuseFailAlloc_5133_, 31, v_zabbrev_5120_);
lean_ctor_set(v_reuseFailAlloc_5133_, 32, v_v_5121_);
lean_ctor_set(v_reuseFailAlloc_5133_, 33, v_O_5122_);
lean_ctor_set(v_reuseFailAlloc_5133_, 34, v_X_5123_);
lean_ctor_set(v_reuseFailAlloc_5133_, 35, v_x_5124_);
lean_ctor_set(v_reuseFailAlloc_5133_, 36, v_Z_5125_);
v___x_5132_ = v_reuseFailAlloc_5133_;
goto v_reusejp_5131_;
}
v_reusejp_5131_:
{
return v___x_5132_;
}
}
}
}
}
case 12:
{
lean_object* v_G_5139_; lean_object* v_y_5140_; lean_object* v_u_5141_; lean_object* v_Y_5142_; lean_object* v_D_5143_; lean_object* v_M_5144_; lean_object* v_L_5145_; lean_object* v_d_5146_; lean_object* v_Q_5147_; lean_object* v_q_5148_; lean_object* v_w_5149_; lean_object* v_W_5150_; lean_object* v_e_5151_; lean_object* v_c_5152_; lean_object* v_F_5153_; lean_object* v_a_5154_; lean_object* v_b_5155_; lean_object* v_B_5156_; lean_object* v_h_5157_; lean_object* v_K_5158_; lean_object* v_k_5159_; lean_object* v_H_5160_; lean_object* v_m_5161_; lean_object* v_s_5162_; lean_object* v_S_5163_; lean_object* v_A_5164_; lean_object* v_n_5165_; lean_object* v_N_5166_; lean_object* v_V_5167_; lean_object* v_z_5168_; lean_object* v_zabbrev_5169_; lean_object* v_v_5170_; lean_object* v_O_5171_; lean_object* v_X_5172_; lean_object* v_x_5173_; lean_object* v_Z_5174_; lean_object* v___x_5176_; uint8_t v_isShared_5177_; uint8_t v_isSharedCheck_5182_; 
lean_dec_ref_known(v_modifier_4520_, 0);
v_G_5139_ = lean_ctor_get(v_date_4519_, 0);
v_y_5140_ = lean_ctor_get(v_date_4519_, 1);
v_u_5141_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5142_ = lean_ctor_get(v_date_4519_, 3);
v_D_5143_ = lean_ctor_get(v_date_4519_, 4);
v_M_5144_ = lean_ctor_get(v_date_4519_, 5);
v_L_5145_ = lean_ctor_get(v_date_4519_, 6);
v_d_5146_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5147_ = lean_ctor_get(v_date_4519_, 8);
v_q_5148_ = lean_ctor_get(v_date_4519_, 9);
v_w_5149_ = lean_ctor_get(v_date_4519_, 10);
v_W_5150_ = lean_ctor_get(v_date_4519_, 11);
v_e_5151_ = lean_ctor_get(v_date_4519_, 13);
v_c_5152_ = lean_ctor_get(v_date_4519_, 14);
v_F_5153_ = lean_ctor_get(v_date_4519_, 15);
v_a_5154_ = lean_ctor_get(v_date_4519_, 16);
v_b_5155_ = lean_ctor_get(v_date_4519_, 17);
v_B_5156_ = lean_ctor_get(v_date_4519_, 18);
v_h_5157_ = lean_ctor_get(v_date_4519_, 19);
v_K_5158_ = lean_ctor_get(v_date_4519_, 20);
v_k_5159_ = lean_ctor_get(v_date_4519_, 21);
v_H_5160_ = lean_ctor_get(v_date_4519_, 22);
v_m_5161_ = lean_ctor_get(v_date_4519_, 23);
v_s_5162_ = lean_ctor_get(v_date_4519_, 24);
v_S_5163_ = lean_ctor_get(v_date_4519_, 25);
v_A_5164_ = lean_ctor_get(v_date_4519_, 26);
v_n_5165_ = lean_ctor_get(v_date_4519_, 27);
v_N_5166_ = lean_ctor_get(v_date_4519_, 28);
v_V_5167_ = lean_ctor_get(v_date_4519_, 29);
v_z_5168_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5169_ = lean_ctor_get(v_date_4519_, 31);
v_v_5170_ = lean_ctor_get(v_date_4519_, 32);
v_O_5171_ = lean_ctor_get(v_date_4519_, 33);
v_X_5172_ = lean_ctor_get(v_date_4519_, 34);
v_x_5173_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5174_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5182_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5182_ == 0)
{
lean_object* v_unused_5183_; 
v_unused_5183_ = lean_ctor_get(v_date_4519_, 12);
lean_dec(v_unused_5183_);
v___x_5176_ = v_date_4519_;
v_isShared_5177_ = v_isSharedCheck_5182_;
goto v_resetjp_5175_;
}
else
{
lean_inc(v_Z_5174_);
lean_inc(v_x_5173_);
lean_inc(v_X_5172_);
lean_inc(v_O_5171_);
lean_inc(v_v_5170_);
lean_inc(v_zabbrev_5169_);
lean_inc(v_z_5168_);
lean_inc(v_V_5167_);
lean_inc(v_N_5166_);
lean_inc(v_n_5165_);
lean_inc(v_A_5164_);
lean_inc(v_S_5163_);
lean_inc(v_s_5162_);
lean_inc(v_m_5161_);
lean_inc(v_H_5160_);
lean_inc(v_k_5159_);
lean_inc(v_K_5158_);
lean_inc(v_h_5157_);
lean_inc(v_B_5156_);
lean_inc(v_b_5155_);
lean_inc(v_a_5154_);
lean_inc(v_F_5153_);
lean_inc(v_c_5152_);
lean_inc(v_e_5151_);
lean_inc(v_W_5150_);
lean_inc(v_w_5149_);
lean_inc(v_q_5148_);
lean_inc(v_Q_5147_);
lean_inc(v_d_5146_);
lean_inc(v_L_5145_);
lean_inc(v_M_5144_);
lean_inc(v_D_5143_);
lean_inc(v_Y_5142_);
lean_inc(v_u_5141_);
lean_inc(v_y_5140_);
lean_inc(v_G_5139_);
lean_dec(v_date_4519_);
v___x_5176_ = lean_box(0);
v_isShared_5177_ = v_isSharedCheck_5182_;
goto v_resetjp_5175_;
}
v_resetjp_5175_:
{
lean_object* v___x_5178_; lean_object* v___x_5180_; 
v___x_5178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5178_, 0, v_data_4521_);
if (v_isShared_5177_ == 0)
{
lean_ctor_set(v___x_5176_, 12, v___x_5178_);
v___x_5180_ = v___x_5176_;
goto v_reusejp_5179_;
}
else
{
lean_object* v_reuseFailAlloc_5181_; 
v_reuseFailAlloc_5181_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5181_, 0, v_G_5139_);
lean_ctor_set(v_reuseFailAlloc_5181_, 1, v_y_5140_);
lean_ctor_set(v_reuseFailAlloc_5181_, 2, v_u_5141_);
lean_ctor_set(v_reuseFailAlloc_5181_, 3, v_Y_5142_);
lean_ctor_set(v_reuseFailAlloc_5181_, 4, v_D_5143_);
lean_ctor_set(v_reuseFailAlloc_5181_, 5, v_M_5144_);
lean_ctor_set(v_reuseFailAlloc_5181_, 6, v_L_5145_);
lean_ctor_set(v_reuseFailAlloc_5181_, 7, v_d_5146_);
lean_ctor_set(v_reuseFailAlloc_5181_, 8, v_Q_5147_);
lean_ctor_set(v_reuseFailAlloc_5181_, 9, v_q_5148_);
lean_ctor_set(v_reuseFailAlloc_5181_, 10, v_w_5149_);
lean_ctor_set(v_reuseFailAlloc_5181_, 11, v_W_5150_);
lean_ctor_set(v_reuseFailAlloc_5181_, 12, v___x_5178_);
lean_ctor_set(v_reuseFailAlloc_5181_, 13, v_e_5151_);
lean_ctor_set(v_reuseFailAlloc_5181_, 14, v_c_5152_);
lean_ctor_set(v_reuseFailAlloc_5181_, 15, v_F_5153_);
lean_ctor_set(v_reuseFailAlloc_5181_, 16, v_a_5154_);
lean_ctor_set(v_reuseFailAlloc_5181_, 17, v_b_5155_);
lean_ctor_set(v_reuseFailAlloc_5181_, 18, v_B_5156_);
lean_ctor_set(v_reuseFailAlloc_5181_, 19, v_h_5157_);
lean_ctor_set(v_reuseFailAlloc_5181_, 20, v_K_5158_);
lean_ctor_set(v_reuseFailAlloc_5181_, 21, v_k_5159_);
lean_ctor_set(v_reuseFailAlloc_5181_, 22, v_H_5160_);
lean_ctor_set(v_reuseFailAlloc_5181_, 23, v_m_5161_);
lean_ctor_set(v_reuseFailAlloc_5181_, 24, v_s_5162_);
lean_ctor_set(v_reuseFailAlloc_5181_, 25, v_S_5163_);
lean_ctor_set(v_reuseFailAlloc_5181_, 26, v_A_5164_);
lean_ctor_set(v_reuseFailAlloc_5181_, 27, v_n_5165_);
lean_ctor_set(v_reuseFailAlloc_5181_, 28, v_N_5166_);
lean_ctor_set(v_reuseFailAlloc_5181_, 29, v_V_5167_);
lean_ctor_set(v_reuseFailAlloc_5181_, 30, v_z_5168_);
lean_ctor_set(v_reuseFailAlloc_5181_, 31, v_zabbrev_5169_);
lean_ctor_set(v_reuseFailAlloc_5181_, 32, v_v_5170_);
lean_ctor_set(v_reuseFailAlloc_5181_, 33, v_O_5171_);
lean_ctor_set(v_reuseFailAlloc_5181_, 34, v_X_5172_);
lean_ctor_set(v_reuseFailAlloc_5181_, 35, v_x_5173_);
lean_ctor_set(v_reuseFailAlloc_5181_, 36, v_Z_5174_);
v___x_5180_ = v_reuseFailAlloc_5181_;
goto v_reusejp_5179_;
}
v_reusejp_5179_:
{
return v___x_5180_;
}
}
}
case 13:
{
lean_object* v___x_5185_; uint8_t v_isShared_5186_; uint8_t v_isSharedCheck_5234_; 
v_isSharedCheck_5234_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_5234_ == 0)
{
lean_object* v_unused_5235_; 
v_unused_5235_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_5235_);
v___x_5185_ = v_modifier_4520_;
v_isShared_5186_ = v_isSharedCheck_5234_;
goto v_resetjp_5184_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_5185_ = lean_box(0);
v_isShared_5186_ = v_isSharedCheck_5234_;
goto v_resetjp_5184_;
}
v_resetjp_5184_:
{
lean_object* v_G_5187_; lean_object* v_y_5188_; lean_object* v_u_5189_; lean_object* v_Y_5190_; lean_object* v_D_5191_; lean_object* v_M_5192_; lean_object* v_L_5193_; lean_object* v_d_5194_; lean_object* v_Q_5195_; lean_object* v_q_5196_; lean_object* v_w_5197_; lean_object* v_W_5198_; lean_object* v_E_5199_; lean_object* v_c_5200_; lean_object* v_F_5201_; lean_object* v_a_5202_; lean_object* v_b_5203_; lean_object* v_B_5204_; lean_object* v_h_5205_; lean_object* v_K_5206_; lean_object* v_k_5207_; lean_object* v_H_5208_; lean_object* v_m_5209_; lean_object* v_s_5210_; lean_object* v_S_5211_; lean_object* v_A_5212_; lean_object* v_n_5213_; lean_object* v_N_5214_; lean_object* v_V_5215_; lean_object* v_z_5216_; lean_object* v_zabbrev_5217_; lean_object* v_v_5218_; lean_object* v_O_5219_; lean_object* v_X_5220_; lean_object* v_x_5221_; lean_object* v_Z_5222_; lean_object* v___x_5224_; uint8_t v_isShared_5225_; uint8_t v_isSharedCheck_5232_; 
v_G_5187_ = lean_ctor_get(v_date_4519_, 0);
v_y_5188_ = lean_ctor_get(v_date_4519_, 1);
v_u_5189_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5190_ = lean_ctor_get(v_date_4519_, 3);
v_D_5191_ = lean_ctor_get(v_date_4519_, 4);
v_M_5192_ = lean_ctor_get(v_date_4519_, 5);
v_L_5193_ = lean_ctor_get(v_date_4519_, 6);
v_d_5194_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5195_ = lean_ctor_get(v_date_4519_, 8);
v_q_5196_ = lean_ctor_get(v_date_4519_, 9);
v_w_5197_ = lean_ctor_get(v_date_4519_, 10);
v_W_5198_ = lean_ctor_get(v_date_4519_, 11);
v_E_5199_ = lean_ctor_get(v_date_4519_, 12);
v_c_5200_ = lean_ctor_get(v_date_4519_, 14);
v_F_5201_ = lean_ctor_get(v_date_4519_, 15);
v_a_5202_ = lean_ctor_get(v_date_4519_, 16);
v_b_5203_ = lean_ctor_get(v_date_4519_, 17);
v_B_5204_ = lean_ctor_get(v_date_4519_, 18);
v_h_5205_ = lean_ctor_get(v_date_4519_, 19);
v_K_5206_ = lean_ctor_get(v_date_4519_, 20);
v_k_5207_ = lean_ctor_get(v_date_4519_, 21);
v_H_5208_ = lean_ctor_get(v_date_4519_, 22);
v_m_5209_ = lean_ctor_get(v_date_4519_, 23);
v_s_5210_ = lean_ctor_get(v_date_4519_, 24);
v_S_5211_ = lean_ctor_get(v_date_4519_, 25);
v_A_5212_ = lean_ctor_get(v_date_4519_, 26);
v_n_5213_ = lean_ctor_get(v_date_4519_, 27);
v_N_5214_ = lean_ctor_get(v_date_4519_, 28);
v_V_5215_ = lean_ctor_get(v_date_4519_, 29);
v_z_5216_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5217_ = lean_ctor_get(v_date_4519_, 31);
v_v_5218_ = lean_ctor_get(v_date_4519_, 32);
v_O_5219_ = lean_ctor_get(v_date_4519_, 33);
v_X_5220_ = lean_ctor_get(v_date_4519_, 34);
v_x_5221_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5222_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5232_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5232_ == 0)
{
lean_object* v_unused_5233_; 
v_unused_5233_ = lean_ctor_get(v_date_4519_, 13);
lean_dec(v_unused_5233_);
v___x_5224_ = v_date_4519_;
v_isShared_5225_ = v_isSharedCheck_5232_;
goto v_resetjp_5223_;
}
else
{
lean_inc(v_Z_5222_);
lean_inc(v_x_5221_);
lean_inc(v_X_5220_);
lean_inc(v_O_5219_);
lean_inc(v_v_5218_);
lean_inc(v_zabbrev_5217_);
lean_inc(v_z_5216_);
lean_inc(v_V_5215_);
lean_inc(v_N_5214_);
lean_inc(v_n_5213_);
lean_inc(v_A_5212_);
lean_inc(v_S_5211_);
lean_inc(v_s_5210_);
lean_inc(v_m_5209_);
lean_inc(v_H_5208_);
lean_inc(v_k_5207_);
lean_inc(v_K_5206_);
lean_inc(v_h_5205_);
lean_inc(v_B_5204_);
lean_inc(v_b_5203_);
lean_inc(v_a_5202_);
lean_inc(v_F_5201_);
lean_inc(v_c_5200_);
lean_inc(v_E_5199_);
lean_inc(v_W_5198_);
lean_inc(v_w_5197_);
lean_inc(v_q_5196_);
lean_inc(v_Q_5195_);
lean_inc(v_d_5194_);
lean_inc(v_L_5193_);
lean_inc(v_M_5192_);
lean_inc(v_D_5191_);
lean_inc(v_Y_5190_);
lean_inc(v_u_5189_);
lean_inc(v_y_5188_);
lean_inc(v_G_5187_);
lean_dec(v_date_4519_);
v___x_5224_ = lean_box(0);
v_isShared_5225_ = v_isSharedCheck_5232_;
goto v_resetjp_5223_;
}
v_resetjp_5223_:
{
lean_object* v___x_5227_; 
if (v_isShared_5186_ == 0)
{
lean_ctor_set_tag(v___x_5185_, 1);
lean_ctor_set(v___x_5185_, 0, v_data_4521_);
v___x_5227_ = v___x_5185_;
goto v_reusejp_5226_;
}
else
{
lean_object* v_reuseFailAlloc_5231_; 
v_reuseFailAlloc_5231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5231_, 0, v_data_4521_);
v___x_5227_ = v_reuseFailAlloc_5231_;
goto v_reusejp_5226_;
}
v_reusejp_5226_:
{
lean_object* v___x_5229_; 
if (v_isShared_5225_ == 0)
{
lean_ctor_set(v___x_5224_, 13, v___x_5227_);
v___x_5229_ = v___x_5224_;
goto v_reusejp_5228_;
}
else
{
lean_object* v_reuseFailAlloc_5230_; 
v_reuseFailAlloc_5230_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5230_, 0, v_G_5187_);
lean_ctor_set(v_reuseFailAlloc_5230_, 1, v_y_5188_);
lean_ctor_set(v_reuseFailAlloc_5230_, 2, v_u_5189_);
lean_ctor_set(v_reuseFailAlloc_5230_, 3, v_Y_5190_);
lean_ctor_set(v_reuseFailAlloc_5230_, 4, v_D_5191_);
lean_ctor_set(v_reuseFailAlloc_5230_, 5, v_M_5192_);
lean_ctor_set(v_reuseFailAlloc_5230_, 6, v_L_5193_);
lean_ctor_set(v_reuseFailAlloc_5230_, 7, v_d_5194_);
lean_ctor_set(v_reuseFailAlloc_5230_, 8, v_Q_5195_);
lean_ctor_set(v_reuseFailAlloc_5230_, 9, v_q_5196_);
lean_ctor_set(v_reuseFailAlloc_5230_, 10, v_w_5197_);
lean_ctor_set(v_reuseFailAlloc_5230_, 11, v_W_5198_);
lean_ctor_set(v_reuseFailAlloc_5230_, 12, v_E_5199_);
lean_ctor_set(v_reuseFailAlloc_5230_, 13, v___x_5227_);
lean_ctor_set(v_reuseFailAlloc_5230_, 14, v_c_5200_);
lean_ctor_set(v_reuseFailAlloc_5230_, 15, v_F_5201_);
lean_ctor_set(v_reuseFailAlloc_5230_, 16, v_a_5202_);
lean_ctor_set(v_reuseFailAlloc_5230_, 17, v_b_5203_);
lean_ctor_set(v_reuseFailAlloc_5230_, 18, v_B_5204_);
lean_ctor_set(v_reuseFailAlloc_5230_, 19, v_h_5205_);
lean_ctor_set(v_reuseFailAlloc_5230_, 20, v_K_5206_);
lean_ctor_set(v_reuseFailAlloc_5230_, 21, v_k_5207_);
lean_ctor_set(v_reuseFailAlloc_5230_, 22, v_H_5208_);
lean_ctor_set(v_reuseFailAlloc_5230_, 23, v_m_5209_);
lean_ctor_set(v_reuseFailAlloc_5230_, 24, v_s_5210_);
lean_ctor_set(v_reuseFailAlloc_5230_, 25, v_S_5211_);
lean_ctor_set(v_reuseFailAlloc_5230_, 26, v_A_5212_);
lean_ctor_set(v_reuseFailAlloc_5230_, 27, v_n_5213_);
lean_ctor_set(v_reuseFailAlloc_5230_, 28, v_N_5214_);
lean_ctor_set(v_reuseFailAlloc_5230_, 29, v_V_5215_);
lean_ctor_set(v_reuseFailAlloc_5230_, 30, v_z_5216_);
lean_ctor_set(v_reuseFailAlloc_5230_, 31, v_zabbrev_5217_);
lean_ctor_set(v_reuseFailAlloc_5230_, 32, v_v_5218_);
lean_ctor_set(v_reuseFailAlloc_5230_, 33, v_O_5219_);
lean_ctor_set(v_reuseFailAlloc_5230_, 34, v_X_5220_);
lean_ctor_set(v_reuseFailAlloc_5230_, 35, v_x_5221_);
lean_ctor_set(v_reuseFailAlloc_5230_, 36, v_Z_5222_);
v___x_5229_ = v_reuseFailAlloc_5230_;
goto v_reusejp_5228_;
}
v_reusejp_5228_:
{
return v___x_5229_;
}
}
}
}
}
case 14:
{
lean_object* v___x_5237_; uint8_t v_isShared_5238_; uint8_t v_isSharedCheck_5286_; 
v_isSharedCheck_5286_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_5286_ == 0)
{
lean_object* v_unused_5287_; 
v_unused_5287_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_5287_);
v___x_5237_ = v_modifier_4520_;
v_isShared_5238_ = v_isSharedCheck_5286_;
goto v_resetjp_5236_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_5237_ = lean_box(0);
v_isShared_5238_ = v_isSharedCheck_5286_;
goto v_resetjp_5236_;
}
v_resetjp_5236_:
{
lean_object* v_G_5239_; lean_object* v_y_5240_; lean_object* v_u_5241_; lean_object* v_Y_5242_; lean_object* v_D_5243_; lean_object* v_M_5244_; lean_object* v_L_5245_; lean_object* v_d_5246_; lean_object* v_Q_5247_; lean_object* v_q_5248_; lean_object* v_w_5249_; lean_object* v_W_5250_; lean_object* v_E_5251_; lean_object* v_e_5252_; lean_object* v_F_5253_; lean_object* v_a_5254_; lean_object* v_b_5255_; lean_object* v_B_5256_; lean_object* v_h_5257_; lean_object* v_K_5258_; lean_object* v_k_5259_; lean_object* v_H_5260_; lean_object* v_m_5261_; lean_object* v_s_5262_; lean_object* v_S_5263_; lean_object* v_A_5264_; lean_object* v_n_5265_; lean_object* v_N_5266_; lean_object* v_V_5267_; lean_object* v_z_5268_; lean_object* v_zabbrev_5269_; lean_object* v_v_5270_; lean_object* v_O_5271_; lean_object* v_X_5272_; lean_object* v_x_5273_; lean_object* v_Z_5274_; lean_object* v___x_5276_; uint8_t v_isShared_5277_; uint8_t v_isSharedCheck_5284_; 
v_G_5239_ = lean_ctor_get(v_date_4519_, 0);
v_y_5240_ = lean_ctor_get(v_date_4519_, 1);
v_u_5241_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5242_ = lean_ctor_get(v_date_4519_, 3);
v_D_5243_ = lean_ctor_get(v_date_4519_, 4);
v_M_5244_ = lean_ctor_get(v_date_4519_, 5);
v_L_5245_ = lean_ctor_get(v_date_4519_, 6);
v_d_5246_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5247_ = lean_ctor_get(v_date_4519_, 8);
v_q_5248_ = lean_ctor_get(v_date_4519_, 9);
v_w_5249_ = lean_ctor_get(v_date_4519_, 10);
v_W_5250_ = lean_ctor_get(v_date_4519_, 11);
v_E_5251_ = lean_ctor_get(v_date_4519_, 12);
v_e_5252_ = lean_ctor_get(v_date_4519_, 13);
v_F_5253_ = lean_ctor_get(v_date_4519_, 15);
v_a_5254_ = lean_ctor_get(v_date_4519_, 16);
v_b_5255_ = lean_ctor_get(v_date_4519_, 17);
v_B_5256_ = lean_ctor_get(v_date_4519_, 18);
v_h_5257_ = lean_ctor_get(v_date_4519_, 19);
v_K_5258_ = lean_ctor_get(v_date_4519_, 20);
v_k_5259_ = lean_ctor_get(v_date_4519_, 21);
v_H_5260_ = lean_ctor_get(v_date_4519_, 22);
v_m_5261_ = lean_ctor_get(v_date_4519_, 23);
v_s_5262_ = lean_ctor_get(v_date_4519_, 24);
v_S_5263_ = lean_ctor_get(v_date_4519_, 25);
v_A_5264_ = lean_ctor_get(v_date_4519_, 26);
v_n_5265_ = lean_ctor_get(v_date_4519_, 27);
v_N_5266_ = lean_ctor_get(v_date_4519_, 28);
v_V_5267_ = lean_ctor_get(v_date_4519_, 29);
v_z_5268_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5269_ = lean_ctor_get(v_date_4519_, 31);
v_v_5270_ = lean_ctor_get(v_date_4519_, 32);
v_O_5271_ = lean_ctor_get(v_date_4519_, 33);
v_X_5272_ = lean_ctor_get(v_date_4519_, 34);
v_x_5273_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5274_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5284_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5284_ == 0)
{
lean_object* v_unused_5285_; 
v_unused_5285_ = lean_ctor_get(v_date_4519_, 14);
lean_dec(v_unused_5285_);
v___x_5276_ = v_date_4519_;
v_isShared_5277_ = v_isSharedCheck_5284_;
goto v_resetjp_5275_;
}
else
{
lean_inc(v_Z_5274_);
lean_inc(v_x_5273_);
lean_inc(v_X_5272_);
lean_inc(v_O_5271_);
lean_inc(v_v_5270_);
lean_inc(v_zabbrev_5269_);
lean_inc(v_z_5268_);
lean_inc(v_V_5267_);
lean_inc(v_N_5266_);
lean_inc(v_n_5265_);
lean_inc(v_A_5264_);
lean_inc(v_S_5263_);
lean_inc(v_s_5262_);
lean_inc(v_m_5261_);
lean_inc(v_H_5260_);
lean_inc(v_k_5259_);
lean_inc(v_K_5258_);
lean_inc(v_h_5257_);
lean_inc(v_B_5256_);
lean_inc(v_b_5255_);
lean_inc(v_a_5254_);
lean_inc(v_F_5253_);
lean_inc(v_e_5252_);
lean_inc(v_E_5251_);
lean_inc(v_W_5250_);
lean_inc(v_w_5249_);
lean_inc(v_q_5248_);
lean_inc(v_Q_5247_);
lean_inc(v_d_5246_);
lean_inc(v_L_5245_);
lean_inc(v_M_5244_);
lean_inc(v_D_5243_);
lean_inc(v_Y_5242_);
lean_inc(v_u_5241_);
lean_inc(v_y_5240_);
lean_inc(v_G_5239_);
lean_dec(v_date_4519_);
v___x_5276_ = lean_box(0);
v_isShared_5277_ = v_isSharedCheck_5284_;
goto v_resetjp_5275_;
}
v_resetjp_5275_:
{
lean_object* v___x_5279_; 
if (v_isShared_5238_ == 0)
{
lean_ctor_set_tag(v___x_5237_, 1);
lean_ctor_set(v___x_5237_, 0, v_data_4521_);
v___x_5279_ = v___x_5237_;
goto v_reusejp_5278_;
}
else
{
lean_object* v_reuseFailAlloc_5283_; 
v_reuseFailAlloc_5283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5283_, 0, v_data_4521_);
v___x_5279_ = v_reuseFailAlloc_5283_;
goto v_reusejp_5278_;
}
v_reusejp_5278_:
{
lean_object* v___x_5281_; 
if (v_isShared_5277_ == 0)
{
lean_ctor_set(v___x_5276_, 14, v___x_5279_);
v___x_5281_ = v___x_5276_;
goto v_reusejp_5280_;
}
else
{
lean_object* v_reuseFailAlloc_5282_; 
v_reuseFailAlloc_5282_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5282_, 0, v_G_5239_);
lean_ctor_set(v_reuseFailAlloc_5282_, 1, v_y_5240_);
lean_ctor_set(v_reuseFailAlloc_5282_, 2, v_u_5241_);
lean_ctor_set(v_reuseFailAlloc_5282_, 3, v_Y_5242_);
lean_ctor_set(v_reuseFailAlloc_5282_, 4, v_D_5243_);
lean_ctor_set(v_reuseFailAlloc_5282_, 5, v_M_5244_);
lean_ctor_set(v_reuseFailAlloc_5282_, 6, v_L_5245_);
lean_ctor_set(v_reuseFailAlloc_5282_, 7, v_d_5246_);
lean_ctor_set(v_reuseFailAlloc_5282_, 8, v_Q_5247_);
lean_ctor_set(v_reuseFailAlloc_5282_, 9, v_q_5248_);
lean_ctor_set(v_reuseFailAlloc_5282_, 10, v_w_5249_);
lean_ctor_set(v_reuseFailAlloc_5282_, 11, v_W_5250_);
lean_ctor_set(v_reuseFailAlloc_5282_, 12, v_E_5251_);
lean_ctor_set(v_reuseFailAlloc_5282_, 13, v_e_5252_);
lean_ctor_set(v_reuseFailAlloc_5282_, 14, v___x_5279_);
lean_ctor_set(v_reuseFailAlloc_5282_, 15, v_F_5253_);
lean_ctor_set(v_reuseFailAlloc_5282_, 16, v_a_5254_);
lean_ctor_set(v_reuseFailAlloc_5282_, 17, v_b_5255_);
lean_ctor_set(v_reuseFailAlloc_5282_, 18, v_B_5256_);
lean_ctor_set(v_reuseFailAlloc_5282_, 19, v_h_5257_);
lean_ctor_set(v_reuseFailAlloc_5282_, 20, v_K_5258_);
lean_ctor_set(v_reuseFailAlloc_5282_, 21, v_k_5259_);
lean_ctor_set(v_reuseFailAlloc_5282_, 22, v_H_5260_);
lean_ctor_set(v_reuseFailAlloc_5282_, 23, v_m_5261_);
lean_ctor_set(v_reuseFailAlloc_5282_, 24, v_s_5262_);
lean_ctor_set(v_reuseFailAlloc_5282_, 25, v_S_5263_);
lean_ctor_set(v_reuseFailAlloc_5282_, 26, v_A_5264_);
lean_ctor_set(v_reuseFailAlloc_5282_, 27, v_n_5265_);
lean_ctor_set(v_reuseFailAlloc_5282_, 28, v_N_5266_);
lean_ctor_set(v_reuseFailAlloc_5282_, 29, v_V_5267_);
lean_ctor_set(v_reuseFailAlloc_5282_, 30, v_z_5268_);
lean_ctor_set(v_reuseFailAlloc_5282_, 31, v_zabbrev_5269_);
lean_ctor_set(v_reuseFailAlloc_5282_, 32, v_v_5270_);
lean_ctor_set(v_reuseFailAlloc_5282_, 33, v_O_5271_);
lean_ctor_set(v_reuseFailAlloc_5282_, 34, v_X_5272_);
lean_ctor_set(v_reuseFailAlloc_5282_, 35, v_x_5273_);
lean_ctor_set(v_reuseFailAlloc_5282_, 36, v_Z_5274_);
v___x_5281_ = v_reuseFailAlloc_5282_;
goto v_reusejp_5280_;
}
v_reusejp_5280_:
{
return v___x_5281_;
}
}
}
}
}
case 15:
{
lean_object* v___x_5289_; uint8_t v_isShared_5290_; uint8_t v_isSharedCheck_5338_; 
v_isSharedCheck_5338_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_5338_ == 0)
{
lean_object* v_unused_5339_; 
v_unused_5339_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_5339_);
v___x_5289_ = v_modifier_4520_;
v_isShared_5290_ = v_isSharedCheck_5338_;
goto v_resetjp_5288_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_5289_ = lean_box(0);
v_isShared_5290_ = v_isSharedCheck_5338_;
goto v_resetjp_5288_;
}
v_resetjp_5288_:
{
lean_object* v_G_5291_; lean_object* v_y_5292_; lean_object* v_u_5293_; lean_object* v_Y_5294_; lean_object* v_D_5295_; lean_object* v_M_5296_; lean_object* v_L_5297_; lean_object* v_d_5298_; lean_object* v_Q_5299_; lean_object* v_q_5300_; lean_object* v_w_5301_; lean_object* v_W_5302_; lean_object* v_E_5303_; lean_object* v_e_5304_; lean_object* v_c_5305_; lean_object* v_a_5306_; lean_object* v_b_5307_; lean_object* v_B_5308_; lean_object* v_h_5309_; lean_object* v_K_5310_; lean_object* v_k_5311_; lean_object* v_H_5312_; lean_object* v_m_5313_; lean_object* v_s_5314_; lean_object* v_S_5315_; lean_object* v_A_5316_; lean_object* v_n_5317_; lean_object* v_N_5318_; lean_object* v_V_5319_; lean_object* v_z_5320_; lean_object* v_zabbrev_5321_; lean_object* v_v_5322_; lean_object* v_O_5323_; lean_object* v_X_5324_; lean_object* v_x_5325_; lean_object* v_Z_5326_; lean_object* v___x_5328_; uint8_t v_isShared_5329_; uint8_t v_isSharedCheck_5336_; 
v_G_5291_ = lean_ctor_get(v_date_4519_, 0);
v_y_5292_ = lean_ctor_get(v_date_4519_, 1);
v_u_5293_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5294_ = lean_ctor_get(v_date_4519_, 3);
v_D_5295_ = lean_ctor_get(v_date_4519_, 4);
v_M_5296_ = lean_ctor_get(v_date_4519_, 5);
v_L_5297_ = lean_ctor_get(v_date_4519_, 6);
v_d_5298_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5299_ = lean_ctor_get(v_date_4519_, 8);
v_q_5300_ = lean_ctor_get(v_date_4519_, 9);
v_w_5301_ = lean_ctor_get(v_date_4519_, 10);
v_W_5302_ = lean_ctor_get(v_date_4519_, 11);
v_E_5303_ = lean_ctor_get(v_date_4519_, 12);
v_e_5304_ = lean_ctor_get(v_date_4519_, 13);
v_c_5305_ = lean_ctor_get(v_date_4519_, 14);
v_a_5306_ = lean_ctor_get(v_date_4519_, 16);
v_b_5307_ = lean_ctor_get(v_date_4519_, 17);
v_B_5308_ = lean_ctor_get(v_date_4519_, 18);
v_h_5309_ = lean_ctor_get(v_date_4519_, 19);
v_K_5310_ = lean_ctor_get(v_date_4519_, 20);
v_k_5311_ = lean_ctor_get(v_date_4519_, 21);
v_H_5312_ = lean_ctor_get(v_date_4519_, 22);
v_m_5313_ = lean_ctor_get(v_date_4519_, 23);
v_s_5314_ = lean_ctor_get(v_date_4519_, 24);
v_S_5315_ = lean_ctor_get(v_date_4519_, 25);
v_A_5316_ = lean_ctor_get(v_date_4519_, 26);
v_n_5317_ = lean_ctor_get(v_date_4519_, 27);
v_N_5318_ = lean_ctor_get(v_date_4519_, 28);
v_V_5319_ = lean_ctor_get(v_date_4519_, 29);
v_z_5320_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5321_ = lean_ctor_get(v_date_4519_, 31);
v_v_5322_ = lean_ctor_get(v_date_4519_, 32);
v_O_5323_ = lean_ctor_get(v_date_4519_, 33);
v_X_5324_ = lean_ctor_get(v_date_4519_, 34);
v_x_5325_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5326_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5336_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5336_ == 0)
{
lean_object* v_unused_5337_; 
v_unused_5337_ = lean_ctor_get(v_date_4519_, 15);
lean_dec(v_unused_5337_);
v___x_5328_ = v_date_4519_;
v_isShared_5329_ = v_isSharedCheck_5336_;
goto v_resetjp_5327_;
}
else
{
lean_inc(v_Z_5326_);
lean_inc(v_x_5325_);
lean_inc(v_X_5324_);
lean_inc(v_O_5323_);
lean_inc(v_v_5322_);
lean_inc(v_zabbrev_5321_);
lean_inc(v_z_5320_);
lean_inc(v_V_5319_);
lean_inc(v_N_5318_);
lean_inc(v_n_5317_);
lean_inc(v_A_5316_);
lean_inc(v_S_5315_);
lean_inc(v_s_5314_);
lean_inc(v_m_5313_);
lean_inc(v_H_5312_);
lean_inc(v_k_5311_);
lean_inc(v_K_5310_);
lean_inc(v_h_5309_);
lean_inc(v_B_5308_);
lean_inc(v_b_5307_);
lean_inc(v_a_5306_);
lean_inc(v_c_5305_);
lean_inc(v_e_5304_);
lean_inc(v_E_5303_);
lean_inc(v_W_5302_);
lean_inc(v_w_5301_);
lean_inc(v_q_5300_);
lean_inc(v_Q_5299_);
lean_inc(v_d_5298_);
lean_inc(v_L_5297_);
lean_inc(v_M_5296_);
lean_inc(v_D_5295_);
lean_inc(v_Y_5294_);
lean_inc(v_u_5293_);
lean_inc(v_y_5292_);
lean_inc(v_G_5291_);
lean_dec(v_date_4519_);
v___x_5328_ = lean_box(0);
v_isShared_5329_ = v_isSharedCheck_5336_;
goto v_resetjp_5327_;
}
v_resetjp_5327_:
{
lean_object* v___x_5331_; 
if (v_isShared_5290_ == 0)
{
lean_ctor_set_tag(v___x_5289_, 1);
lean_ctor_set(v___x_5289_, 0, v_data_4521_);
v___x_5331_ = v___x_5289_;
goto v_reusejp_5330_;
}
else
{
lean_object* v_reuseFailAlloc_5335_; 
v_reuseFailAlloc_5335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5335_, 0, v_data_4521_);
v___x_5331_ = v_reuseFailAlloc_5335_;
goto v_reusejp_5330_;
}
v_reusejp_5330_:
{
lean_object* v___x_5333_; 
if (v_isShared_5329_ == 0)
{
lean_ctor_set(v___x_5328_, 15, v___x_5331_);
v___x_5333_ = v___x_5328_;
goto v_reusejp_5332_;
}
else
{
lean_object* v_reuseFailAlloc_5334_; 
v_reuseFailAlloc_5334_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5334_, 0, v_G_5291_);
lean_ctor_set(v_reuseFailAlloc_5334_, 1, v_y_5292_);
lean_ctor_set(v_reuseFailAlloc_5334_, 2, v_u_5293_);
lean_ctor_set(v_reuseFailAlloc_5334_, 3, v_Y_5294_);
lean_ctor_set(v_reuseFailAlloc_5334_, 4, v_D_5295_);
lean_ctor_set(v_reuseFailAlloc_5334_, 5, v_M_5296_);
lean_ctor_set(v_reuseFailAlloc_5334_, 6, v_L_5297_);
lean_ctor_set(v_reuseFailAlloc_5334_, 7, v_d_5298_);
lean_ctor_set(v_reuseFailAlloc_5334_, 8, v_Q_5299_);
lean_ctor_set(v_reuseFailAlloc_5334_, 9, v_q_5300_);
lean_ctor_set(v_reuseFailAlloc_5334_, 10, v_w_5301_);
lean_ctor_set(v_reuseFailAlloc_5334_, 11, v_W_5302_);
lean_ctor_set(v_reuseFailAlloc_5334_, 12, v_E_5303_);
lean_ctor_set(v_reuseFailAlloc_5334_, 13, v_e_5304_);
lean_ctor_set(v_reuseFailAlloc_5334_, 14, v_c_5305_);
lean_ctor_set(v_reuseFailAlloc_5334_, 15, v___x_5331_);
lean_ctor_set(v_reuseFailAlloc_5334_, 16, v_a_5306_);
lean_ctor_set(v_reuseFailAlloc_5334_, 17, v_b_5307_);
lean_ctor_set(v_reuseFailAlloc_5334_, 18, v_B_5308_);
lean_ctor_set(v_reuseFailAlloc_5334_, 19, v_h_5309_);
lean_ctor_set(v_reuseFailAlloc_5334_, 20, v_K_5310_);
lean_ctor_set(v_reuseFailAlloc_5334_, 21, v_k_5311_);
lean_ctor_set(v_reuseFailAlloc_5334_, 22, v_H_5312_);
lean_ctor_set(v_reuseFailAlloc_5334_, 23, v_m_5313_);
lean_ctor_set(v_reuseFailAlloc_5334_, 24, v_s_5314_);
lean_ctor_set(v_reuseFailAlloc_5334_, 25, v_S_5315_);
lean_ctor_set(v_reuseFailAlloc_5334_, 26, v_A_5316_);
lean_ctor_set(v_reuseFailAlloc_5334_, 27, v_n_5317_);
lean_ctor_set(v_reuseFailAlloc_5334_, 28, v_N_5318_);
lean_ctor_set(v_reuseFailAlloc_5334_, 29, v_V_5319_);
lean_ctor_set(v_reuseFailAlloc_5334_, 30, v_z_5320_);
lean_ctor_set(v_reuseFailAlloc_5334_, 31, v_zabbrev_5321_);
lean_ctor_set(v_reuseFailAlloc_5334_, 32, v_v_5322_);
lean_ctor_set(v_reuseFailAlloc_5334_, 33, v_O_5323_);
lean_ctor_set(v_reuseFailAlloc_5334_, 34, v_X_5324_);
lean_ctor_set(v_reuseFailAlloc_5334_, 35, v_x_5325_);
lean_ctor_set(v_reuseFailAlloc_5334_, 36, v_Z_5326_);
v___x_5333_ = v_reuseFailAlloc_5334_;
goto v_reusejp_5332_;
}
v_reusejp_5332_:
{
return v___x_5333_;
}
}
}
}
}
case 16:
{
lean_object* v_G_5340_; lean_object* v_y_5341_; lean_object* v_u_5342_; lean_object* v_Y_5343_; lean_object* v_D_5344_; lean_object* v_M_5345_; lean_object* v_L_5346_; lean_object* v_d_5347_; lean_object* v_Q_5348_; lean_object* v_q_5349_; lean_object* v_w_5350_; lean_object* v_W_5351_; lean_object* v_E_5352_; lean_object* v_e_5353_; lean_object* v_c_5354_; lean_object* v_F_5355_; lean_object* v_b_5356_; lean_object* v_B_5357_; lean_object* v_h_5358_; lean_object* v_K_5359_; lean_object* v_k_5360_; lean_object* v_H_5361_; lean_object* v_m_5362_; lean_object* v_s_5363_; lean_object* v_S_5364_; lean_object* v_A_5365_; lean_object* v_n_5366_; lean_object* v_N_5367_; lean_object* v_V_5368_; lean_object* v_z_5369_; lean_object* v_zabbrev_5370_; lean_object* v_v_5371_; lean_object* v_O_5372_; lean_object* v_X_5373_; lean_object* v_x_5374_; lean_object* v_Z_5375_; lean_object* v___x_5377_; uint8_t v_isShared_5378_; uint8_t v_isSharedCheck_5383_; 
lean_dec_ref_known(v_modifier_4520_, 0);
v_G_5340_ = lean_ctor_get(v_date_4519_, 0);
v_y_5341_ = lean_ctor_get(v_date_4519_, 1);
v_u_5342_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5343_ = lean_ctor_get(v_date_4519_, 3);
v_D_5344_ = lean_ctor_get(v_date_4519_, 4);
v_M_5345_ = lean_ctor_get(v_date_4519_, 5);
v_L_5346_ = lean_ctor_get(v_date_4519_, 6);
v_d_5347_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5348_ = lean_ctor_get(v_date_4519_, 8);
v_q_5349_ = lean_ctor_get(v_date_4519_, 9);
v_w_5350_ = lean_ctor_get(v_date_4519_, 10);
v_W_5351_ = lean_ctor_get(v_date_4519_, 11);
v_E_5352_ = lean_ctor_get(v_date_4519_, 12);
v_e_5353_ = lean_ctor_get(v_date_4519_, 13);
v_c_5354_ = lean_ctor_get(v_date_4519_, 14);
v_F_5355_ = lean_ctor_get(v_date_4519_, 15);
v_b_5356_ = lean_ctor_get(v_date_4519_, 17);
v_B_5357_ = lean_ctor_get(v_date_4519_, 18);
v_h_5358_ = lean_ctor_get(v_date_4519_, 19);
v_K_5359_ = lean_ctor_get(v_date_4519_, 20);
v_k_5360_ = lean_ctor_get(v_date_4519_, 21);
v_H_5361_ = lean_ctor_get(v_date_4519_, 22);
v_m_5362_ = lean_ctor_get(v_date_4519_, 23);
v_s_5363_ = lean_ctor_get(v_date_4519_, 24);
v_S_5364_ = lean_ctor_get(v_date_4519_, 25);
v_A_5365_ = lean_ctor_get(v_date_4519_, 26);
v_n_5366_ = lean_ctor_get(v_date_4519_, 27);
v_N_5367_ = lean_ctor_get(v_date_4519_, 28);
v_V_5368_ = lean_ctor_get(v_date_4519_, 29);
v_z_5369_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5370_ = lean_ctor_get(v_date_4519_, 31);
v_v_5371_ = lean_ctor_get(v_date_4519_, 32);
v_O_5372_ = lean_ctor_get(v_date_4519_, 33);
v_X_5373_ = lean_ctor_get(v_date_4519_, 34);
v_x_5374_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5375_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5383_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5383_ == 0)
{
lean_object* v_unused_5384_; 
v_unused_5384_ = lean_ctor_get(v_date_4519_, 16);
lean_dec(v_unused_5384_);
v___x_5377_ = v_date_4519_;
v_isShared_5378_ = v_isSharedCheck_5383_;
goto v_resetjp_5376_;
}
else
{
lean_inc(v_Z_5375_);
lean_inc(v_x_5374_);
lean_inc(v_X_5373_);
lean_inc(v_O_5372_);
lean_inc(v_v_5371_);
lean_inc(v_zabbrev_5370_);
lean_inc(v_z_5369_);
lean_inc(v_V_5368_);
lean_inc(v_N_5367_);
lean_inc(v_n_5366_);
lean_inc(v_A_5365_);
lean_inc(v_S_5364_);
lean_inc(v_s_5363_);
lean_inc(v_m_5362_);
lean_inc(v_H_5361_);
lean_inc(v_k_5360_);
lean_inc(v_K_5359_);
lean_inc(v_h_5358_);
lean_inc(v_B_5357_);
lean_inc(v_b_5356_);
lean_inc(v_F_5355_);
lean_inc(v_c_5354_);
lean_inc(v_e_5353_);
lean_inc(v_E_5352_);
lean_inc(v_W_5351_);
lean_inc(v_w_5350_);
lean_inc(v_q_5349_);
lean_inc(v_Q_5348_);
lean_inc(v_d_5347_);
lean_inc(v_L_5346_);
lean_inc(v_M_5345_);
lean_inc(v_D_5344_);
lean_inc(v_Y_5343_);
lean_inc(v_u_5342_);
lean_inc(v_y_5341_);
lean_inc(v_G_5340_);
lean_dec(v_date_4519_);
v___x_5377_ = lean_box(0);
v_isShared_5378_ = v_isSharedCheck_5383_;
goto v_resetjp_5376_;
}
v_resetjp_5376_:
{
lean_object* v___x_5379_; lean_object* v___x_5381_; 
v___x_5379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5379_, 0, v_data_4521_);
if (v_isShared_5378_ == 0)
{
lean_ctor_set(v___x_5377_, 16, v___x_5379_);
v___x_5381_ = v___x_5377_;
goto v_reusejp_5380_;
}
else
{
lean_object* v_reuseFailAlloc_5382_; 
v_reuseFailAlloc_5382_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5382_, 0, v_G_5340_);
lean_ctor_set(v_reuseFailAlloc_5382_, 1, v_y_5341_);
lean_ctor_set(v_reuseFailAlloc_5382_, 2, v_u_5342_);
lean_ctor_set(v_reuseFailAlloc_5382_, 3, v_Y_5343_);
lean_ctor_set(v_reuseFailAlloc_5382_, 4, v_D_5344_);
lean_ctor_set(v_reuseFailAlloc_5382_, 5, v_M_5345_);
lean_ctor_set(v_reuseFailAlloc_5382_, 6, v_L_5346_);
lean_ctor_set(v_reuseFailAlloc_5382_, 7, v_d_5347_);
lean_ctor_set(v_reuseFailAlloc_5382_, 8, v_Q_5348_);
lean_ctor_set(v_reuseFailAlloc_5382_, 9, v_q_5349_);
lean_ctor_set(v_reuseFailAlloc_5382_, 10, v_w_5350_);
lean_ctor_set(v_reuseFailAlloc_5382_, 11, v_W_5351_);
lean_ctor_set(v_reuseFailAlloc_5382_, 12, v_E_5352_);
lean_ctor_set(v_reuseFailAlloc_5382_, 13, v_e_5353_);
lean_ctor_set(v_reuseFailAlloc_5382_, 14, v_c_5354_);
lean_ctor_set(v_reuseFailAlloc_5382_, 15, v_F_5355_);
lean_ctor_set(v_reuseFailAlloc_5382_, 16, v___x_5379_);
lean_ctor_set(v_reuseFailAlloc_5382_, 17, v_b_5356_);
lean_ctor_set(v_reuseFailAlloc_5382_, 18, v_B_5357_);
lean_ctor_set(v_reuseFailAlloc_5382_, 19, v_h_5358_);
lean_ctor_set(v_reuseFailAlloc_5382_, 20, v_K_5359_);
lean_ctor_set(v_reuseFailAlloc_5382_, 21, v_k_5360_);
lean_ctor_set(v_reuseFailAlloc_5382_, 22, v_H_5361_);
lean_ctor_set(v_reuseFailAlloc_5382_, 23, v_m_5362_);
lean_ctor_set(v_reuseFailAlloc_5382_, 24, v_s_5363_);
lean_ctor_set(v_reuseFailAlloc_5382_, 25, v_S_5364_);
lean_ctor_set(v_reuseFailAlloc_5382_, 26, v_A_5365_);
lean_ctor_set(v_reuseFailAlloc_5382_, 27, v_n_5366_);
lean_ctor_set(v_reuseFailAlloc_5382_, 28, v_N_5367_);
lean_ctor_set(v_reuseFailAlloc_5382_, 29, v_V_5368_);
lean_ctor_set(v_reuseFailAlloc_5382_, 30, v_z_5369_);
lean_ctor_set(v_reuseFailAlloc_5382_, 31, v_zabbrev_5370_);
lean_ctor_set(v_reuseFailAlloc_5382_, 32, v_v_5371_);
lean_ctor_set(v_reuseFailAlloc_5382_, 33, v_O_5372_);
lean_ctor_set(v_reuseFailAlloc_5382_, 34, v_X_5373_);
lean_ctor_set(v_reuseFailAlloc_5382_, 35, v_x_5374_);
lean_ctor_set(v_reuseFailAlloc_5382_, 36, v_Z_5375_);
v___x_5381_ = v_reuseFailAlloc_5382_;
goto v_reusejp_5380_;
}
v_reusejp_5380_:
{
return v___x_5381_;
}
}
}
case 17:
{
lean_object* v_G_5385_; lean_object* v_y_5386_; lean_object* v_u_5387_; lean_object* v_Y_5388_; lean_object* v_D_5389_; lean_object* v_M_5390_; lean_object* v_L_5391_; lean_object* v_d_5392_; lean_object* v_Q_5393_; lean_object* v_q_5394_; lean_object* v_w_5395_; lean_object* v_W_5396_; lean_object* v_E_5397_; lean_object* v_e_5398_; lean_object* v_c_5399_; lean_object* v_F_5400_; lean_object* v_a_5401_; lean_object* v_B_5402_; lean_object* v_h_5403_; lean_object* v_K_5404_; lean_object* v_k_5405_; lean_object* v_H_5406_; lean_object* v_m_5407_; lean_object* v_s_5408_; lean_object* v_S_5409_; lean_object* v_A_5410_; lean_object* v_n_5411_; lean_object* v_N_5412_; lean_object* v_V_5413_; lean_object* v_z_5414_; lean_object* v_zabbrev_5415_; lean_object* v_v_5416_; lean_object* v_O_5417_; lean_object* v_X_5418_; lean_object* v_x_5419_; lean_object* v_Z_5420_; lean_object* v___x_5422_; uint8_t v_isShared_5423_; uint8_t v_isSharedCheck_5428_; 
lean_dec_ref_known(v_modifier_4520_, 0);
v_G_5385_ = lean_ctor_get(v_date_4519_, 0);
v_y_5386_ = lean_ctor_get(v_date_4519_, 1);
v_u_5387_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5388_ = lean_ctor_get(v_date_4519_, 3);
v_D_5389_ = lean_ctor_get(v_date_4519_, 4);
v_M_5390_ = lean_ctor_get(v_date_4519_, 5);
v_L_5391_ = lean_ctor_get(v_date_4519_, 6);
v_d_5392_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5393_ = lean_ctor_get(v_date_4519_, 8);
v_q_5394_ = lean_ctor_get(v_date_4519_, 9);
v_w_5395_ = lean_ctor_get(v_date_4519_, 10);
v_W_5396_ = lean_ctor_get(v_date_4519_, 11);
v_E_5397_ = lean_ctor_get(v_date_4519_, 12);
v_e_5398_ = lean_ctor_get(v_date_4519_, 13);
v_c_5399_ = lean_ctor_get(v_date_4519_, 14);
v_F_5400_ = lean_ctor_get(v_date_4519_, 15);
v_a_5401_ = lean_ctor_get(v_date_4519_, 16);
v_B_5402_ = lean_ctor_get(v_date_4519_, 18);
v_h_5403_ = lean_ctor_get(v_date_4519_, 19);
v_K_5404_ = lean_ctor_get(v_date_4519_, 20);
v_k_5405_ = lean_ctor_get(v_date_4519_, 21);
v_H_5406_ = lean_ctor_get(v_date_4519_, 22);
v_m_5407_ = lean_ctor_get(v_date_4519_, 23);
v_s_5408_ = lean_ctor_get(v_date_4519_, 24);
v_S_5409_ = lean_ctor_get(v_date_4519_, 25);
v_A_5410_ = lean_ctor_get(v_date_4519_, 26);
v_n_5411_ = lean_ctor_get(v_date_4519_, 27);
v_N_5412_ = lean_ctor_get(v_date_4519_, 28);
v_V_5413_ = lean_ctor_get(v_date_4519_, 29);
v_z_5414_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5415_ = lean_ctor_get(v_date_4519_, 31);
v_v_5416_ = lean_ctor_get(v_date_4519_, 32);
v_O_5417_ = lean_ctor_get(v_date_4519_, 33);
v_X_5418_ = lean_ctor_get(v_date_4519_, 34);
v_x_5419_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5420_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5428_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5428_ == 0)
{
lean_object* v_unused_5429_; 
v_unused_5429_ = lean_ctor_get(v_date_4519_, 17);
lean_dec(v_unused_5429_);
v___x_5422_ = v_date_4519_;
v_isShared_5423_ = v_isSharedCheck_5428_;
goto v_resetjp_5421_;
}
else
{
lean_inc(v_Z_5420_);
lean_inc(v_x_5419_);
lean_inc(v_X_5418_);
lean_inc(v_O_5417_);
lean_inc(v_v_5416_);
lean_inc(v_zabbrev_5415_);
lean_inc(v_z_5414_);
lean_inc(v_V_5413_);
lean_inc(v_N_5412_);
lean_inc(v_n_5411_);
lean_inc(v_A_5410_);
lean_inc(v_S_5409_);
lean_inc(v_s_5408_);
lean_inc(v_m_5407_);
lean_inc(v_H_5406_);
lean_inc(v_k_5405_);
lean_inc(v_K_5404_);
lean_inc(v_h_5403_);
lean_inc(v_B_5402_);
lean_inc(v_a_5401_);
lean_inc(v_F_5400_);
lean_inc(v_c_5399_);
lean_inc(v_e_5398_);
lean_inc(v_E_5397_);
lean_inc(v_W_5396_);
lean_inc(v_w_5395_);
lean_inc(v_q_5394_);
lean_inc(v_Q_5393_);
lean_inc(v_d_5392_);
lean_inc(v_L_5391_);
lean_inc(v_M_5390_);
lean_inc(v_D_5389_);
lean_inc(v_Y_5388_);
lean_inc(v_u_5387_);
lean_inc(v_y_5386_);
lean_inc(v_G_5385_);
lean_dec(v_date_4519_);
v___x_5422_ = lean_box(0);
v_isShared_5423_ = v_isSharedCheck_5428_;
goto v_resetjp_5421_;
}
v_resetjp_5421_:
{
lean_object* v___x_5424_; lean_object* v___x_5426_; 
v___x_5424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5424_, 0, v_data_4521_);
if (v_isShared_5423_ == 0)
{
lean_ctor_set(v___x_5422_, 17, v___x_5424_);
v___x_5426_ = v___x_5422_;
goto v_reusejp_5425_;
}
else
{
lean_object* v_reuseFailAlloc_5427_; 
v_reuseFailAlloc_5427_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5427_, 0, v_G_5385_);
lean_ctor_set(v_reuseFailAlloc_5427_, 1, v_y_5386_);
lean_ctor_set(v_reuseFailAlloc_5427_, 2, v_u_5387_);
lean_ctor_set(v_reuseFailAlloc_5427_, 3, v_Y_5388_);
lean_ctor_set(v_reuseFailAlloc_5427_, 4, v_D_5389_);
lean_ctor_set(v_reuseFailAlloc_5427_, 5, v_M_5390_);
lean_ctor_set(v_reuseFailAlloc_5427_, 6, v_L_5391_);
lean_ctor_set(v_reuseFailAlloc_5427_, 7, v_d_5392_);
lean_ctor_set(v_reuseFailAlloc_5427_, 8, v_Q_5393_);
lean_ctor_set(v_reuseFailAlloc_5427_, 9, v_q_5394_);
lean_ctor_set(v_reuseFailAlloc_5427_, 10, v_w_5395_);
lean_ctor_set(v_reuseFailAlloc_5427_, 11, v_W_5396_);
lean_ctor_set(v_reuseFailAlloc_5427_, 12, v_E_5397_);
lean_ctor_set(v_reuseFailAlloc_5427_, 13, v_e_5398_);
lean_ctor_set(v_reuseFailAlloc_5427_, 14, v_c_5399_);
lean_ctor_set(v_reuseFailAlloc_5427_, 15, v_F_5400_);
lean_ctor_set(v_reuseFailAlloc_5427_, 16, v_a_5401_);
lean_ctor_set(v_reuseFailAlloc_5427_, 17, v___x_5424_);
lean_ctor_set(v_reuseFailAlloc_5427_, 18, v_B_5402_);
lean_ctor_set(v_reuseFailAlloc_5427_, 19, v_h_5403_);
lean_ctor_set(v_reuseFailAlloc_5427_, 20, v_K_5404_);
lean_ctor_set(v_reuseFailAlloc_5427_, 21, v_k_5405_);
lean_ctor_set(v_reuseFailAlloc_5427_, 22, v_H_5406_);
lean_ctor_set(v_reuseFailAlloc_5427_, 23, v_m_5407_);
lean_ctor_set(v_reuseFailAlloc_5427_, 24, v_s_5408_);
lean_ctor_set(v_reuseFailAlloc_5427_, 25, v_S_5409_);
lean_ctor_set(v_reuseFailAlloc_5427_, 26, v_A_5410_);
lean_ctor_set(v_reuseFailAlloc_5427_, 27, v_n_5411_);
lean_ctor_set(v_reuseFailAlloc_5427_, 28, v_N_5412_);
lean_ctor_set(v_reuseFailAlloc_5427_, 29, v_V_5413_);
lean_ctor_set(v_reuseFailAlloc_5427_, 30, v_z_5414_);
lean_ctor_set(v_reuseFailAlloc_5427_, 31, v_zabbrev_5415_);
lean_ctor_set(v_reuseFailAlloc_5427_, 32, v_v_5416_);
lean_ctor_set(v_reuseFailAlloc_5427_, 33, v_O_5417_);
lean_ctor_set(v_reuseFailAlloc_5427_, 34, v_X_5418_);
lean_ctor_set(v_reuseFailAlloc_5427_, 35, v_x_5419_);
lean_ctor_set(v_reuseFailAlloc_5427_, 36, v_Z_5420_);
v___x_5426_ = v_reuseFailAlloc_5427_;
goto v_reusejp_5425_;
}
v_reusejp_5425_:
{
return v___x_5426_;
}
}
}
case 18:
{
lean_object* v_G_5430_; lean_object* v_y_5431_; lean_object* v_u_5432_; lean_object* v_Y_5433_; lean_object* v_D_5434_; lean_object* v_M_5435_; lean_object* v_L_5436_; lean_object* v_d_5437_; lean_object* v_Q_5438_; lean_object* v_q_5439_; lean_object* v_w_5440_; lean_object* v_W_5441_; lean_object* v_E_5442_; lean_object* v_e_5443_; lean_object* v_c_5444_; lean_object* v_F_5445_; lean_object* v_a_5446_; lean_object* v_b_5447_; lean_object* v_h_5448_; lean_object* v_K_5449_; lean_object* v_k_5450_; lean_object* v_H_5451_; lean_object* v_m_5452_; lean_object* v_s_5453_; lean_object* v_S_5454_; lean_object* v_A_5455_; lean_object* v_n_5456_; lean_object* v_N_5457_; lean_object* v_V_5458_; lean_object* v_z_5459_; lean_object* v_zabbrev_5460_; lean_object* v_v_5461_; lean_object* v_O_5462_; lean_object* v_X_5463_; lean_object* v_x_5464_; lean_object* v_Z_5465_; lean_object* v___x_5467_; uint8_t v_isShared_5468_; uint8_t v_isSharedCheck_5473_; 
lean_dec_ref_known(v_modifier_4520_, 0);
v_G_5430_ = lean_ctor_get(v_date_4519_, 0);
v_y_5431_ = lean_ctor_get(v_date_4519_, 1);
v_u_5432_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5433_ = lean_ctor_get(v_date_4519_, 3);
v_D_5434_ = lean_ctor_get(v_date_4519_, 4);
v_M_5435_ = lean_ctor_get(v_date_4519_, 5);
v_L_5436_ = lean_ctor_get(v_date_4519_, 6);
v_d_5437_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5438_ = lean_ctor_get(v_date_4519_, 8);
v_q_5439_ = lean_ctor_get(v_date_4519_, 9);
v_w_5440_ = lean_ctor_get(v_date_4519_, 10);
v_W_5441_ = lean_ctor_get(v_date_4519_, 11);
v_E_5442_ = lean_ctor_get(v_date_4519_, 12);
v_e_5443_ = lean_ctor_get(v_date_4519_, 13);
v_c_5444_ = lean_ctor_get(v_date_4519_, 14);
v_F_5445_ = lean_ctor_get(v_date_4519_, 15);
v_a_5446_ = lean_ctor_get(v_date_4519_, 16);
v_b_5447_ = lean_ctor_get(v_date_4519_, 17);
v_h_5448_ = lean_ctor_get(v_date_4519_, 19);
v_K_5449_ = lean_ctor_get(v_date_4519_, 20);
v_k_5450_ = lean_ctor_get(v_date_4519_, 21);
v_H_5451_ = lean_ctor_get(v_date_4519_, 22);
v_m_5452_ = lean_ctor_get(v_date_4519_, 23);
v_s_5453_ = lean_ctor_get(v_date_4519_, 24);
v_S_5454_ = lean_ctor_get(v_date_4519_, 25);
v_A_5455_ = lean_ctor_get(v_date_4519_, 26);
v_n_5456_ = lean_ctor_get(v_date_4519_, 27);
v_N_5457_ = lean_ctor_get(v_date_4519_, 28);
v_V_5458_ = lean_ctor_get(v_date_4519_, 29);
v_z_5459_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5460_ = lean_ctor_get(v_date_4519_, 31);
v_v_5461_ = lean_ctor_get(v_date_4519_, 32);
v_O_5462_ = lean_ctor_get(v_date_4519_, 33);
v_X_5463_ = lean_ctor_get(v_date_4519_, 34);
v_x_5464_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5465_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5473_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5473_ == 0)
{
lean_object* v_unused_5474_; 
v_unused_5474_ = lean_ctor_get(v_date_4519_, 18);
lean_dec(v_unused_5474_);
v___x_5467_ = v_date_4519_;
v_isShared_5468_ = v_isSharedCheck_5473_;
goto v_resetjp_5466_;
}
else
{
lean_inc(v_Z_5465_);
lean_inc(v_x_5464_);
lean_inc(v_X_5463_);
lean_inc(v_O_5462_);
lean_inc(v_v_5461_);
lean_inc(v_zabbrev_5460_);
lean_inc(v_z_5459_);
lean_inc(v_V_5458_);
lean_inc(v_N_5457_);
lean_inc(v_n_5456_);
lean_inc(v_A_5455_);
lean_inc(v_S_5454_);
lean_inc(v_s_5453_);
lean_inc(v_m_5452_);
lean_inc(v_H_5451_);
lean_inc(v_k_5450_);
lean_inc(v_K_5449_);
lean_inc(v_h_5448_);
lean_inc(v_b_5447_);
lean_inc(v_a_5446_);
lean_inc(v_F_5445_);
lean_inc(v_c_5444_);
lean_inc(v_e_5443_);
lean_inc(v_E_5442_);
lean_inc(v_W_5441_);
lean_inc(v_w_5440_);
lean_inc(v_q_5439_);
lean_inc(v_Q_5438_);
lean_inc(v_d_5437_);
lean_inc(v_L_5436_);
lean_inc(v_M_5435_);
lean_inc(v_D_5434_);
lean_inc(v_Y_5433_);
lean_inc(v_u_5432_);
lean_inc(v_y_5431_);
lean_inc(v_G_5430_);
lean_dec(v_date_4519_);
v___x_5467_ = lean_box(0);
v_isShared_5468_ = v_isSharedCheck_5473_;
goto v_resetjp_5466_;
}
v_resetjp_5466_:
{
lean_object* v___x_5469_; lean_object* v___x_5471_; 
v___x_5469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5469_, 0, v_data_4521_);
if (v_isShared_5468_ == 0)
{
lean_ctor_set(v___x_5467_, 18, v___x_5469_);
v___x_5471_ = v___x_5467_;
goto v_reusejp_5470_;
}
else
{
lean_object* v_reuseFailAlloc_5472_; 
v_reuseFailAlloc_5472_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5472_, 0, v_G_5430_);
lean_ctor_set(v_reuseFailAlloc_5472_, 1, v_y_5431_);
lean_ctor_set(v_reuseFailAlloc_5472_, 2, v_u_5432_);
lean_ctor_set(v_reuseFailAlloc_5472_, 3, v_Y_5433_);
lean_ctor_set(v_reuseFailAlloc_5472_, 4, v_D_5434_);
lean_ctor_set(v_reuseFailAlloc_5472_, 5, v_M_5435_);
lean_ctor_set(v_reuseFailAlloc_5472_, 6, v_L_5436_);
lean_ctor_set(v_reuseFailAlloc_5472_, 7, v_d_5437_);
lean_ctor_set(v_reuseFailAlloc_5472_, 8, v_Q_5438_);
lean_ctor_set(v_reuseFailAlloc_5472_, 9, v_q_5439_);
lean_ctor_set(v_reuseFailAlloc_5472_, 10, v_w_5440_);
lean_ctor_set(v_reuseFailAlloc_5472_, 11, v_W_5441_);
lean_ctor_set(v_reuseFailAlloc_5472_, 12, v_E_5442_);
lean_ctor_set(v_reuseFailAlloc_5472_, 13, v_e_5443_);
lean_ctor_set(v_reuseFailAlloc_5472_, 14, v_c_5444_);
lean_ctor_set(v_reuseFailAlloc_5472_, 15, v_F_5445_);
lean_ctor_set(v_reuseFailAlloc_5472_, 16, v_a_5446_);
lean_ctor_set(v_reuseFailAlloc_5472_, 17, v_b_5447_);
lean_ctor_set(v_reuseFailAlloc_5472_, 18, v___x_5469_);
lean_ctor_set(v_reuseFailAlloc_5472_, 19, v_h_5448_);
lean_ctor_set(v_reuseFailAlloc_5472_, 20, v_K_5449_);
lean_ctor_set(v_reuseFailAlloc_5472_, 21, v_k_5450_);
lean_ctor_set(v_reuseFailAlloc_5472_, 22, v_H_5451_);
lean_ctor_set(v_reuseFailAlloc_5472_, 23, v_m_5452_);
lean_ctor_set(v_reuseFailAlloc_5472_, 24, v_s_5453_);
lean_ctor_set(v_reuseFailAlloc_5472_, 25, v_S_5454_);
lean_ctor_set(v_reuseFailAlloc_5472_, 26, v_A_5455_);
lean_ctor_set(v_reuseFailAlloc_5472_, 27, v_n_5456_);
lean_ctor_set(v_reuseFailAlloc_5472_, 28, v_N_5457_);
lean_ctor_set(v_reuseFailAlloc_5472_, 29, v_V_5458_);
lean_ctor_set(v_reuseFailAlloc_5472_, 30, v_z_5459_);
lean_ctor_set(v_reuseFailAlloc_5472_, 31, v_zabbrev_5460_);
lean_ctor_set(v_reuseFailAlloc_5472_, 32, v_v_5461_);
lean_ctor_set(v_reuseFailAlloc_5472_, 33, v_O_5462_);
lean_ctor_set(v_reuseFailAlloc_5472_, 34, v_X_5463_);
lean_ctor_set(v_reuseFailAlloc_5472_, 35, v_x_5464_);
lean_ctor_set(v_reuseFailAlloc_5472_, 36, v_Z_5465_);
v___x_5471_ = v_reuseFailAlloc_5472_;
goto v_reusejp_5470_;
}
v_reusejp_5470_:
{
return v___x_5471_;
}
}
}
case 19:
{
lean_object* v___x_5476_; uint8_t v_isShared_5477_; uint8_t v_isSharedCheck_5525_; 
v_isSharedCheck_5525_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_5525_ == 0)
{
lean_object* v_unused_5526_; 
v_unused_5526_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_5526_);
v___x_5476_ = v_modifier_4520_;
v_isShared_5477_ = v_isSharedCheck_5525_;
goto v_resetjp_5475_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_5476_ = lean_box(0);
v_isShared_5477_ = v_isSharedCheck_5525_;
goto v_resetjp_5475_;
}
v_resetjp_5475_:
{
lean_object* v_G_5478_; lean_object* v_y_5479_; lean_object* v_u_5480_; lean_object* v_Y_5481_; lean_object* v_D_5482_; lean_object* v_M_5483_; lean_object* v_L_5484_; lean_object* v_d_5485_; lean_object* v_Q_5486_; lean_object* v_q_5487_; lean_object* v_w_5488_; lean_object* v_W_5489_; lean_object* v_E_5490_; lean_object* v_e_5491_; lean_object* v_c_5492_; lean_object* v_F_5493_; lean_object* v_a_5494_; lean_object* v_b_5495_; lean_object* v_B_5496_; lean_object* v_K_5497_; lean_object* v_k_5498_; lean_object* v_H_5499_; lean_object* v_m_5500_; lean_object* v_s_5501_; lean_object* v_S_5502_; lean_object* v_A_5503_; lean_object* v_n_5504_; lean_object* v_N_5505_; lean_object* v_V_5506_; lean_object* v_z_5507_; lean_object* v_zabbrev_5508_; lean_object* v_v_5509_; lean_object* v_O_5510_; lean_object* v_X_5511_; lean_object* v_x_5512_; lean_object* v_Z_5513_; lean_object* v___x_5515_; uint8_t v_isShared_5516_; uint8_t v_isSharedCheck_5523_; 
v_G_5478_ = lean_ctor_get(v_date_4519_, 0);
v_y_5479_ = lean_ctor_get(v_date_4519_, 1);
v_u_5480_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5481_ = lean_ctor_get(v_date_4519_, 3);
v_D_5482_ = lean_ctor_get(v_date_4519_, 4);
v_M_5483_ = lean_ctor_get(v_date_4519_, 5);
v_L_5484_ = lean_ctor_get(v_date_4519_, 6);
v_d_5485_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5486_ = lean_ctor_get(v_date_4519_, 8);
v_q_5487_ = lean_ctor_get(v_date_4519_, 9);
v_w_5488_ = lean_ctor_get(v_date_4519_, 10);
v_W_5489_ = lean_ctor_get(v_date_4519_, 11);
v_E_5490_ = lean_ctor_get(v_date_4519_, 12);
v_e_5491_ = lean_ctor_get(v_date_4519_, 13);
v_c_5492_ = lean_ctor_get(v_date_4519_, 14);
v_F_5493_ = lean_ctor_get(v_date_4519_, 15);
v_a_5494_ = lean_ctor_get(v_date_4519_, 16);
v_b_5495_ = lean_ctor_get(v_date_4519_, 17);
v_B_5496_ = lean_ctor_get(v_date_4519_, 18);
v_K_5497_ = lean_ctor_get(v_date_4519_, 20);
v_k_5498_ = lean_ctor_get(v_date_4519_, 21);
v_H_5499_ = lean_ctor_get(v_date_4519_, 22);
v_m_5500_ = lean_ctor_get(v_date_4519_, 23);
v_s_5501_ = lean_ctor_get(v_date_4519_, 24);
v_S_5502_ = lean_ctor_get(v_date_4519_, 25);
v_A_5503_ = lean_ctor_get(v_date_4519_, 26);
v_n_5504_ = lean_ctor_get(v_date_4519_, 27);
v_N_5505_ = lean_ctor_get(v_date_4519_, 28);
v_V_5506_ = lean_ctor_get(v_date_4519_, 29);
v_z_5507_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5508_ = lean_ctor_get(v_date_4519_, 31);
v_v_5509_ = lean_ctor_get(v_date_4519_, 32);
v_O_5510_ = lean_ctor_get(v_date_4519_, 33);
v_X_5511_ = lean_ctor_get(v_date_4519_, 34);
v_x_5512_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5513_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5523_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5523_ == 0)
{
lean_object* v_unused_5524_; 
v_unused_5524_ = lean_ctor_get(v_date_4519_, 19);
lean_dec(v_unused_5524_);
v___x_5515_ = v_date_4519_;
v_isShared_5516_ = v_isSharedCheck_5523_;
goto v_resetjp_5514_;
}
else
{
lean_inc(v_Z_5513_);
lean_inc(v_x_5512_);
lean_inc(v_X_5511_);
lean_inc(v_O_5510_);
lean_inc(v_v_5509_);
lean_inc(v_zabbrev_5508_);
lean_inc(v_z_5507_);
lean_inc(v_V_5506_);
lean_inc(v_N_5505_);
lean_inc(v_n_5504_);
lean_inc(v_A_5503_);
lean_inc(v_S_5502_);
lean_inc(v_s_5501_);
lean_inc(v_m_5500_);
lean_inc(v_H_5499_);
lean_inc(v_k_5498_);
lean_inc(v_K_5497_);
lean_inc(v_B_5496_);
lean_inc(v_b_5495_);
lean_inc(v_a_5494_);
lean_inc(v_F_5493_);
lean_inc(v_c_5492_);
lean_inc(v_e_5491_);
lean_inc(v_E_5490_);
lean_inc(v_W_5489_);
lean_inc(v_w_5488_);
lean_inc(v_q_5487_);
lean_inc(v_Q_5486_);
lean_inc(v_d_5485_);
lean_inc(v_L_5484_);
lean_inc(v_M_5483_);
lean_inc(v_D_5482_);
lean_inc(v_Y_5481_);
lean_inc(v_u_5480_);
lean_inc(v_y_5479_);
lean_inc(v_G_5478_);
lean_dec(v_date_4519_);
v___x_5515_ = lean_box(0);
v_isShared_5516_ = v_isSharedCheck_5523_;
goto v_resetjp_5514_;
}
v_resetjp_5514_:
{
lean_object* v___x_5518_; 
if (v_isShared_5477_ == 0)
{
lean_ctor_set_tag(v___x_5476_, 1);
lean_ctor_set(v___x_5476_, 0, v_data_4521_);
v___x_5518_ = v___x_5476_;
goto v_reusejp_5517_;
}
else
{
lean_object* v_reuseFailAlloc_5522_; 
v_reuseFailAlloc_5522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5522_, 0, v_data_4521_);
v___x_5518_ = v_reuseFailAlloc_5522_;
goto v_reusejp_5517_;
}
v_reusejp_5517_:
{
lean_object* v___x_5520_; 
if (v_isShared_5516_ == 0)
{
lean_ctor_set(v___x_5515_, 19, v___x_5518_);
v___x_5520_ = v___x_5515_;
goto v_reusejp_5519_;
}
else
{
lean_object* v_reuseFailAlloc_5521_; 
v_reuseFailAlloc_5521_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5521_, 0, v_G_5478_);
lean_ctor_set(v_reuseFailAlloc_5521_, 1, v_y_5479_);
lean_ctor_set(v_reuseFailAlloc_5521_, 2, v_u_5480_);
lean_ctor_set(v_reuseFailAlloc_5521_, 3, v_Y_5481_);
lean_ctor_set(v_reuseFailAlloc_5521_, 4, v_D_5482_);
lean_ctor_set(v_reuseFailAlloc_5521_, 5, v_M_5483_);
lean_ctor_set(v_reuseFailAlloc_5521_, 6, v_L_5484_);
lean_ctor_set(v_reuseFailAlloc_5521_, 7, v_d_5485_);
lean_ctor_set(v_reuseFailAlloc_5521_, 8, v_Q_5486_);
lean_ctor_set(v_reuseFailAlloc_5521_, 9, v_q_5487_);
lean_ctor_set(v_reuseFailAlloc_5521_, 10, v_w_5488_);
lean_ctor_set(v_reuseFailAlloc_5521_, 11, v_W_5489_);
lean_ctor_set(v_reuseFailAlloc_5521_, 12, v_E_5490_);
lean_ctor_set(v_reuseFailAlloc_5521_, 13, v_e_5491_);
lean_ctor_set(v_reuseFailAlloc_5521_, 14, v_c_5492_);
lean_ctor_set(v_reuseFailAlloc_5521_, 15, v_F_5493_);
lean_ctor_set(v_reuseFailAlloc_5521_, 16, v_a_5494_);
lean_ctor_set(v_reuseFailAlloc_5521_, 17, v_b_5495_);
lean_ctor_set(v_reuseFailAlloc_5521_, 18, v_B_5496_);
lean_ctor_set(v_reuseFailAlloc_5521_, 19, v___x_5518_);
lean_ctor_set(v_reuseFailAlloc_5521_, 20, v_K_5497_);
lean_ctor_set(v_reuseFailAlloc_5521_, 21, v_k_5498_);
lean_ctor_set(v_reuseFailAlloc_5521_, 22, v_H_5499_);
lean_ctor_set(v_reuseFailAlloc_5521_, 23, v_m_5500_);
lean_ctor_set(v_reuseFailAlloc_5521_, 24, v_s_5501_);
lean_ctor_set(v_reuseFailAlloc_5521_, 25, v_S_5502_);
lean_ctor_set(v_reuseFailAlloc_5521_, 26, v_A_5503_);
lean_ctor_set(v_reuseFailAlloc_5521_, 27, v_n_5504_);
lean_ctor_set(v_reuseFailAlloc_5521_, 28, v_N_5505_);
lean_ctor_set(v_reuseFailAlloc_5521_, 29, v_V_5506_);
lean_ctor_set(v_reuseFailAlloc_5521_, 30, v_z_5507_);
lean_ctor_set(v_reuseFailAlloc_5521_, 31, v_zabbrev_5508_);
lean_ctor_set(v_reuseFailAlloc_5521_, 32, v_v_5509_);
lean_ctor_set(v_reuseFailAlloc_5521_, 33, v_O_5510_);
lean_ctor_set(v_reuseFailAlloc_5521_, 34, v_X_5511_);
lean_ctor_set(v_reuseFailAlloc_5521_, 35, v_x_5512_);
lean_ctor_set(v_reuseFailAlloc_5521_, 36, v_Z_5513_);
v___x_5520_ = v_reuseFailAlloc_5521_;
goto v_reusejp_5519_;
}
v_reusejp_5519_:
{
return v___x_5520_;
}
}
}
}
}
case 20:
{
lean_object* v___x_5528_; uint8_t v_isShared_5529_; uint8_t v_isSharedCheck_5577_; 
v_isSharedCheck_5577_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_5577_ == 0)
{
lean_object* v_unused_5578_; 
v_unused_5578_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_5578_);
v___x_5528_ = v_modifier_4520_;
v_isShared_5529_ = v_isSharedCheck_5577_;
goto v_resetjp_5527_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_5528_ = lean_box(0);
v_isShared_5529_ = v_isSharedCheck_5577_;
goto v_resetjp_5527_;
}
v_resetjp_5527_:
{
lean_object* v_G_5530_; lean_object* v_y_5531_; lean_object* v_u_5532_; lean_object* v_Y_5533_; lean_object* v_D_5534_; lean_object* v_M_5535_; lean_object* v_L_5536_; lean_object* v_d_5537_; lean_object* v_Q_5538_; lean_object* v_q_5539_; lean_object* v_w_5540_; lean_object* v_W_5541_; lean_object* v_E_5542_; lean_object* v_e_5543_; lean_object* v_c_5544_; lean_object* v_F_5545_; lean_object* v_a_5546_; lean_object* v_b_5547_; lean_object* v_B_5548_; lean_object* v_h_5549_; lean_object* v_k_5550_; lean_object* v_H_5551_; lean_object* v_m_5552_; lean_object* v_s_5553_; lean_object* v_S_5554_; lean_object* v_A_5555_; lean_object* v_n_5556_; lean_object* v_N_5557_; lean_object* v_V_5558_; lean_object* v_z_5559_; lean_object* v_zabbrev_5560_; lean_object* v_v_5561_; lean_object* v_O_5562_; lean_object* v_X_5563_; lean_object* v_x_5564_; lean_object* v_Z_5565_; lean_object* v___x_5567_; uint8_t v_isShared_5568_; uint8_t v_isSharedCheck_5575_; 
v_G_5530_ = lean_ctor_get(v_date_4519_, 0);
v_y_5531_ = lean_ctor_get(v_date_4519_, 1);
v_u_5532_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5533_ = lean_ctor_get(v_date_4519_, 3);
v_D_5534_ = lean_ctor_get(v_date_4519_, 4);
v_M_5535_ = lean_ctor_get(v_date_4519_, 5);
v_L_5536_ = lean_ctor_get(v_date_4519_, 6);
v_d_5537_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5538_ = lean_ctor_get(v_date_4519_, 8);
v_q_5539_ = lean_ctor_get(v_date_4519_, 9);
v_w_5540_ = lean_ctor_get(v_date_4519_, 10);
v_W_5541_ = lean_ctor_get(v_date_4519_, 11);
v_E_5542_ = lean_ctor_get(v_date_4519_, 12);
v_e_5543_ = lean_ctor_get(v_date_4519_, 13);
v_c_5544_ = lean_ctor_get(v_date_4519_, 14);
v_F_5545_ = lean_ctor_get(v_date_4519_, 15);
v_a_5546_ = lean_ctor_get(v_date_4519_, 16);
v_b_5547_ = lean_ctor_get(v_date_4519_, 17);
v_B_5548_ = lean_ctor_get(v_date_4519_, 18);
v_h_5549_ = lean_ctor_get(v_date_4519_, 19);
v_k_5550_ = lean_ctor_get(v_date_4519_, 21);
v_H_5551_ = lean_ctor_get(v_date_4519_, 22);
v_m_5552_ = lean_ctor_get(v_date_4519_, 23);
v_s_5553_ = lean_ctor_get(v_date_4519_, 24);
v_S_5554_ = lean_ctor_get(v_date_4519_, 25);
v_A_5555_ = lean_ctor_get(v_date_4519_, 26);
v_n_5556_ = lean_ctor_get(v_date_4519_, 27);
v_N_5557_ = lean_ctor_get(v_date_4519_, 28);
v_V_5558_ = lean_ctor_get(v_date_4519_, 29);
v_z_5559_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5560_ = lean_ctor_get(v_date_4519_, 31);
v_v_5561_ = lean_ctor_get(v_date_4519_, 32);
v_O_5562_ = lean_ctor_get(v_date_4519_, 33);
v_X_5563_ = lean_ctor_get(v_date_4519_, 34);
v_x_5564_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5565_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5575_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5575_ == 0)
{
lean_object* v_unused_5576_; 
v_unused_5576_ = lean_ctor_get(v_date_4519_, 20);
lean_dec(v_unused_5576_);
v___x_5567_ = v_date_4519_;
v_isShared_5568_ = v_isSharedCheck_5575_;
goto v_resetjp_5566_;
}
else
{
lean_inc(v_Z_5565_);
lean_inc(v_x_5564_);
lean_inc(v_X_5563_);
lean_inc(v_O_5562_);
lean_inc(v_v_5561_);
lean_inc(v_zabbrev_5560_);
lean_inc(v_z_5559_);
lean_inc(v_V_5558_);
lean_inc(v_N_5557_);
lean_inc(v_n_5556_);
lean_inc(v_A_5555_);
lean_inc(v_S_5554_);
lean_inc(v_s_5553_);
lean_inc(v_m_5552_);
lean_inc(v_H_5551_);
lean_inc(v_k_5550_);
lean_inc(v_h_5549_);
lean_inc(v_B_5548_);
lean_inc(v_b_5547_);
lean_inc(v_a_5546_);
lean_inc(v_F_5545_);
lean_inc(v_c_5544_);
lean_inc(v_e_5543_);
lean_inc(v_E_5542_);
lean_inc(v_W_5541_);
lean_inc(v_w_5540_);
lean_inc(v_q_5539_);
lean_inc(v_Q_5538_);
lean_inc(v_d_5537_);
lean_inc(v_L_5536_);
lean_inc(v_M_5535_);
lean_inc(v_D_5534_);
lean_inc(v_Y_5533_);
lean_inc(v_u_5532_);
lean_inc(v_y_5531_);
lean_inc(v_G_5530_);
lean_dec(v_date_4519_);
v___x_5567_ = lean_box(0);
v_isShared_5568_ = v_isSharedCheck_5575_;
goto v_resetjp_5566_;
}
v_resetjp_5566_:
{
lean_object* v___x_5570_; 
if (v_isShared_5529_ == 0)
{
lean_ctor_set_tag(v___x_5528_, 1);
lean_ctor_set(v___x_5528_, 0, v_data_4521_);
v___x_5570_ = v___x_5528_;
goto v_reusejp_5569_;
}
else
{
lean_object* v_reuseFailAlloc_5574_; 
v_reuseFailAlloc_5574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5574_, 0, v_data_4521_);
v___x_5570_ = v_reuseFailAlloc_5574_;
goto v_reusejp_5569_;
}
v_reusejp_5569_:
{
lean_object* v___x_5572_; 
if (v_isShared_5568_ == 0)
{
lean_ctor_set(v___x_5567_, 20, v___x_5570_);
v___x_5572_ = v___x_5567_;
goto v_reusejp_5571_;
}
else
{
lean_object* v_reuseFailAlloc_5573_; 
v_reuseFailAlloc_5573_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5573_, 0, v_G_5530_);
lean_ctor_set(v_reuseFailAlloc_5573_, 1, v_y_5531_);
lean_ctor_set(v_reuseFailAlloc_5573_, 2, v_u_5532_);
lean_ctor_set(v_reuseFailAlloc_5573_, 3, v_Y_5533_);
lean_ctor_set(v_reuseFailAlloc_5573_, 4, v_D_5534_);
lean_ctor_set(v_reuseFailAlloc_5573_, 5, v_M_5535_);
lean_ctor_set(v_reuseFailAlloc_5573_, 6, v_L_5536_);
lean_ctor_set(v_reuseFailAlloc_5573_, 7, v_d_5537_);
lean_ctor_set(v_reuseFailAlloc_5573_, 8, v_Q_5538_);
lean_ctor_set(v_reuseFailAlloc_5573_, 9, v_q_5539_);
lean_ctor_set(v_reuseFailAlloc_5573_, 10, v_w_5540_);
lean_ctor_set(v_reuseFailAlloc_5573_, 11, v_W_5541_);
lean_ctor_set(v_reuseFailAlloc_5573_, 12, v_E_5542_);
lean_ctor_set(v_reuseFailAlloc_5573_, 13, v_e_5543_);
lean_ctor_set(v_reuseFailAlloc_5573_, 14, v_c_5544_);
lean_ctor_set(v_reuseFailAlloc_5573_, 15, v_F_5545_);
lean_ctor_set(v_reuseFailAlloc_5573_, 16, v_a_5546_);
lean_ctor_set(v_reuseFailAlloc_5573_, 17, v_b_5547_);
lean_ctor_set(v_reuseFailAlloc_5573_, 18, v_B_5548_);
lean_ctor_set(v_reuseFailAlloc_5573_, 19, v_h_5549_);
lean_ctor_set(v_reuseFailAlloc_5573_, 20, v___x_5570_);
lean_ctor_set(v_reuseFailAlloc_5573_, 21, v_k_5550_);
lean_ctor_set(v_reuseFailAlloc_5573_, 22, v_H_5551_);
lean_ctor_set(v_reuseFailAlloc_5573_, 23, v_m_5552_);
lean_ctor_set(v_reuseFailAlloc_5573_, 24, v_s_5553_);
lean_ctor_set(v_reuseFailAlloc_5573_, 25, v_S_5554_);
lean_ctor_set(v_reuseFailAlloc_5573_, 26, v_A_5555_);
lean_ctor_set(v_reuseFailAlloc_5573_, 27, v_n_5556_);
lean_ctor_set(v_reuseFailAlloc_5573_, 28, v_N_5557_);
lean_ctor_set(v_reuseFailAlloc_5573_, 29, v_V_5558_);
lean_ctor_set(v_reuseFailAlloc_5573_, 30, v_z_5559_);
lean_ctor_set(v_reuseFailAlloc_5573_, 31, v_zabbrev_5560_);
lean_ctor_set(v_reuseFailAlloc_5573_, 32, v_v_5561_);
lean_ctor_set(v_reuseFailAlloc_5573_, 33, v_O_5562_);
lean_ctor_set(v_reuseFailAlloc_5573_, 34, v_X_5563_);
lean_ctor_set(v_reuseFailAlloc_5573_, 35, v_x_5564_);
lean_ctor_set(v_reuseFailAlloc_5573_, 36, v_Z_5565_);
v___x_5572_ = v_reuseFailAlloc_5573_;
goto v_reusejp_5571_;
}
v_reusejp_5571_:
{
return v___x_5572_;
}
}
}
}
}
case 21:
{
lean_object* v___x_5580_; uint8_t v_isShared_5581_; uint8_t v_isSharedCheck_5629_; 
v_isSharedCheck_5629_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_5629_ == 0)
{
lean_object* v_unused_5630_; 
v_unused_5630_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_5630_);
v___x_5580_ = v_modifier_4520_;
v_isShared_5581_ = v_isSharedCheck_5629_;
goto v_resetjp_5579_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_5580_ = lean_box(0);
v_isShared_5581_ = v_isSharedCheck_5629_;
goto v_resetjp_5579_;
}
v_resetjp_5579_:
{
lean_object* v_G_5582_; lean_object* v_y_5583_; lean_object* v_u_5584_; lean_object* v_Y_5585_; lean_object* v_D_5586_; lean_object* v_M_5587_; lean_object* v_L_5588_; lean_object* v_d_5589_; lean_object* v_Q_5590_; lean_object* v_q_5591_; lean_object* v_w_5592_; lean_object* v_W_5593_; lean_object* v_E_5594_; lean_object* v_e_5595_; lean_object* v_c_5596_; lean_object* v_F_5597_; lean_object* v_a_5598_; lean_object* v_b_5599_; lean_object* v_B_5600_; lean_object* v_h_5601_; lean_object* v_K_5602_; lean_object* v_H_5603_; lean_object* v_m_5604_; lean_object* v_s_5605_; lean_object* v_S_5606_; lean_object* v_A_5607_; lean_object* v_n_5608_; lean_object* v_N_5609_; lean_object* v_V_5610_; lean_object* v_z_5611_; lean_object* v_zabbrev_5612_; lean_object* v_v_5613_; lean_object* v_O_5614_; lean_object* v_X_5615_; lean_object* v_x_5616_; lean_object* v_Z_5617_; lean_object* v___x_5619_; uint8_t v_isShared_5620_; uint8_t v_isSharedCheck_5627_; 
v_G_5582_ = lean_ctor_get(v_date_4519_, 0);
v_y_5583_ = lean_ctor_get(v_date_4519_, 1);
v_u_5584_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5585_ = lean_ctor_get(v_date_4519_, 3);
v_D_5586_ = lean_ctor_get(v_date_4519_, 4);
v_M_5587_ = lean_ctor_get(v_date_4519_, 5);
v_L_5588_ = lean_ctor_get(v_date_4519_, 6);
v_d_5589_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5590_ = lean_ctor_get(v_date_4519_, 8);
v_q_5591_ = lean_ctor_get(v_date_4519_, 9);
v_w_5592_ = lean_ctor_get(v_date_4519_, 10);
v_W_5593_ = lean_ctor_get(v_date_4519_, 11);
v_E_5594_ = lean_ctor_get(v_date_4519_, 12);
v_e_5595_ = lean_ctor_get(v_date_4519_, 13);
v_c_5596_ = lean_ctor_get(v_date_4519_, 14);
v_F_5597_ = lean_ctor_get(v_date_4519_, 15);
v_a_5598_ = lean_ctor_get(v_date_4519_, 16);
v_b_5599_ = lean_ctor_get(v_date_4519_, 17);
v_B_5600_ = lean_ctor_get(v_date_4519_, 18);
v_h_5601_ = lean_ctor_get(v_date_4519_, 19);
v_K_5602_ = lean_ctor_get(v_date_4519_, 20);
v_H_5603_ = lean_ctor_get(v_date_4519_, 22);
v_m_5604_ = lean_ctor_get(v_date_4519_, 23);
v_s_5605_ = lean_ctor_get(v_date_4519_, 24);
v_S_5606_ = lean_ctor_get(v_date_4519_, 25);
v_A_5607_ = lean_ctor_get(v_date_4519_, 26);
v_n_5608_ = lean_ctor_get(v_date_4519_, 27);
v_N_5609_ = lean_ctor_get(v_date_4519_, 28);
v_V_5610_ = lean_ctor_get(v_date_4519_, 29);
v_z_5611_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5612_ = lean_ctor_get(v_date_4519_, 31);
v_v_5613_ = lean_ctor_get(v_date_4519_, 32);
v_O_5614_ = lean_ctor_get(v_date_4519_, 33);
v_X_5615_ = lean_ctor_get(v_date_4519_, 34);
v_x_5616_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5617_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5627_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5627_ == 0)
{
lean_object* v_unused_5628_; 
v_unused_5628_ = lean_ctor_get(v_date_4519_, 21);
lean_dec(v_unused_5628_);
v___x_5619_ = v_date_4519_;
v_isShared_5620_ = v_isSharedCheck_5627_;
goto v_resetjp_5618_;
}
else
{
lean_inc(v_Z_5617_);
lean_inc(v_x_5616_);
lean_inc(v_X_5615_);
lean_inc(v_O_5614_);
lean_inc(v_v_5613_);
lean_inc(v_zabbrev_5612_);
lean_inc(v_z_5611_);
lean_inc(v_V_5610_);
lean_inc(v_N_5609_);
lean_inc(v_n_5608_);
lean_inc(v_A_5607_);
lean_inc(v_S_5606_);
lean_inc(v_s_5605_);
lean_inc(v_m_5604_);
lean_inc(v_H_5603_);
lean_inc(v_K_5602_);
lean_inc(v_h_5601_);
lean_inc(v_B_5600_);
lean_inc(v_b_5599_);
lean_inc(v_a_5598_);
lean_inc(v_F_5597_);
lean_inc(v_c_5596_);
lean_inc(v_e_5595_);
lean_inc(v_E_5594_);
lean_inc(v_W_5593_);
lean_inc(v_w_5592_);
lean_inc(v_q_5591_);
lean_inc(v_Q_5590_);
lean_inc(v_d_5589_);
lean_inc(v_L_5588_);
lean_inc(v_M_5587_);
lean_inc(v_D_5586_);
lean_inc(v_Y_5585_);
lean_inc(v_u_5584_);
lean_inc(v_y_5583_);
lean_inc(v_G_5582_);
lean_dec(v_date_4519_);
v___x_5619_ = lean_box(0);
v_isShared_5620_ = v_isSharedCheck_5627_;
goto v_resetjp_5618_;
}
v_resetjp_5618_:
{
lean_object* v___x_5622_; 
if (v_isShared_5581_ == 0)
{
lean_ctor_set_tag(v___x_5580_, 1);
lean_ctor_set(v___x_5580_, 0, v_data_4521_);
v___x_5622_ = v___x_5580_;
goto v_reusejp_5621_;
}
else
{
lean_object* v_reuseFailAlloc_5626_; 
v_reuseFailAlloc_5626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5626_, 0, v_data_4521_);
v___x_5622_ = v_reuseFailAlloc_5626_;
goto v_reusejp_5621_;
}
v_reusejp_5621_:
{
lean_object* v___x_5624_; 
if (v_isShared_5620_ == 0)
{
lean_ctor_set(v___x_5619_, 21, v___x_5622_);
v___x_5624_ = v___x_5619_;
goto v_reusejp_5623_;
}
else
{
lean_object* v_reuseFailAlloc_5625_; 
v_reuseFailAlloc_5625_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5625_, 0, v_G_5582_);
lean_ctor_set(v_reuseFailAlloc_5625_, 1, v_y_5583_);
lean_ctor_set(v_reuseFailAlloc_5625_, 2, v_u_5584_);
lean_ctor_set(v_reuseFailAlloc_5625_, 3, v_Y_5585_);
lean_ctor_set(v_reuseFailAlloc_5625_, 4, v_D_5586_);
lean_ctor_set(v_reuseFailAlloc_5625_, 5, v_M_5587_);
lean_ctor_set(v_reuseFailAlloc_5625_, 6, v_L_5588_);
lean_ctor_set(v_reuseFailAlloc_5625_, 7, v_d_5589_);
lean_ctor_set(v_reuseFailAlloc_5625_, 8, v_Q_5590_);
lean_ctor_set(v_reuseFailAlloc_5625_, 9, v_q_5591_);
lean_ctor_set(v_reuseFailAlloc_5625_, 10, v_w_5592_);
lean_ctor_set(v_reuseFailAlloc_5625_, 11, v_W_5593_);
lean_ctor_set(v_reuseFailAlloc_5625_, 12, v_E_5594_);
lean_ctor_set(v_reuseFailAlloc_5625_, 13, v_e_5595_);
lean_ctor_set(v_reuseFailAlloc_5625_, 14, v_c_5596_);
lean_ctor_set(v_reuseFailAlloc_5625_, 15, v_F_5597_);
lean_ctor_set(v_reuseFailAlloc_5625_, 16, v_a_5598_);
lean_ctor_set(v_reuseFailAlloc_5625_, 17, v_b_5599_);
lean_ctor_set(v_reuseFailAlloc_5625_, 18, v_B_5600_);
lean_ctor_set(v_reuseFailAlloc_5625_, 19, v_h_5601_);
lean_ctor_set(v_reuseFailAlloc_5625_, 20, v_K_5602_);
lean_ctor_set(v_reuseFailAlloc_5625_, 21, v___x_5622_);
lean_ctor_set(v_reuseFailAlloc_5625_, 22, v_H_5603_);
lean_ctor_set(v_reuseFailAlloc_5625_, 23, v_m_5604_);
lean_ctor_set(v_reuseFailAlloc_5625_, 24, v_s_5605_);
lean_ctor_set(v_reuseFailAlloc_5625_, 25, v_S_5606_);
lean_ctor_set(v_reuseFailAlloc_5625_, 26, v_A_5607_);
lean_ctor_set(v_reuseFailAlloc_5625_, 27, v_n_5608_);
lean_ctor_set(v_reuseFailAlloc_5625_, 28, v_N_5609_);
lean_ctor_set(v_reuseFailAlloc_5625_, 29, v_V_5610_);
lean_ctor_set(v_reuseFailAlloc_5625_, 30, v_z_5611_);
lean_ctor_set(v_reuseFailAlloc_5625_, 31, v_zabbrev_5612_);
lean_ctor_set(v_reuseFailAlloc_5625_, 32, v_v_5613_);
lean_ctor_set(v_reuseFailAlloc_5625_, 33, v_O_5614_);
lean_ctor_set(v_reuseFailAlloc_5625_, 34, v_X_5615_);
lean_ctor_set(v_reuseFailAlloc_5625_, 35, v_x_5616_);
lean_ctor_set(v_reuseFailAlloc_5625_, 36, v_Z_5617_);
v___x_5624_ = v_reuseFailAlloc_5625_;
goto v_reusejp_5623_;
}
v_reusejp_5623_:
{
return v___x_5624_;
}
}
}
}
}
case 22:
{
lean_object* v___x_5632_; uint8_t v_isShared_5633_; uint8_t v_isSharedCheck_5681_; 
v_isSharedCheck_5681_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_5681_ == 0)
{
lean_object* v_unused_5682_; 
v_unused_5682_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_5682_);
v___x_5632_ = v_modifier_4520_;
v_isShared_5633_ = v_isSharedCheck_5681_;
goto v_resetjp_5631_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_5632_ = lean_box(0);
v_isShared_5633_ = v_isSharedCheck_5681_;
goto v_resetjp_5631_;
}
v_resetjp_5631_:
{
lean_object* v_G_5634_; lean_object* v_y_5635_; lean_object* v_u_5636_; lean_object* v_Y_5637_; lean_object* v_D_5638_; lean_object* v_M_5639_; lean_object* v_L_5640_; lean_object* v_d_5641_; lean_object* v_Q_5642_; lean_object* v_q_5643_; lean_object* v_w_5644_; lean_object* v_W_5645_; lean_object* v_E_5646_; lean_object* v_e_5647_; lean_object* v_c_5648_; lean_object* v_F_5649_; lean_object* v_a_5650_; lean_object* v_b_5651_; lean_object* v_B_5652_; lean_object* v_h_5653_; lean_object* v_K_5654_; lean_object* v_k_5655_; lean_object* v_m_5656_; lean_object* v_s_5657_; lean_object* v_S_5658_; lean_object* v_A_5659_; lean_object* v_n_5660_; lean_object* v_N_5661_; lean_object* v_V_5662_; lean_object* v_z_5663_; lean_object* v_zabbrev_5664_; lean_object* v_v_5665_; lean_object* v_O_5666_; lean_object* v_X_5667_; lean_object* v_x_5668_; lean_object* v_Z_5669_; lean_object* v___x_5671_; uint8_t v_isShared_5672_; uint8_t v_isSharedCheck_5679_; 
v_G_5634_ = lean_ctor_get(v_date_4519_, 0);
v_y_5635_ = lean_ctor_get(v_date_4519_, 1);
v_u_5636_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5637_ = lean_ctor_get(v_date_4519_, 3);
v_D_5638_ = lean_ctor_get(v_date_4519_, 4);
v_M_5639_ = lean_ctor_get(v_date_4519_, 5);
v_L_5640_ = lean_ctor_get(v_date_4519_, 6);
v_d_5641_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5642_ = lean_ctor_get(v_date_4519_, 8);
v_q_5643_ = lean_ctor_get(v_date_4519_, 9);
v_w_5644_ = lean_ctor_get(v_date_4519_, 10);
v_W_5645_ = lean_ctor_get(v_date_4519_, 11);
v_E_5646_ = lean_ctor_get(v_date_4519_, 12);
v_e_5647_ = lean_ctor_get(v_date_4519_, 13);
v_c_5648_ = lean_ctor_get(v_date_4519_, 14);
v_F_5649_ = lean_ctor_get(v_date_4519_, 15);
v_a_5650_ = lean_ctor_get(v_date_4519_, 16);
v_b_5651_ = lean_ctor_get(v_date_4519_, 17);
v_B_5652_ = lean_ctor_get(v_date_4519_, 18);
v_h_5653_ = lean_ctor_get(v_date_4519_, 19);
v_K_5654_ = lean_ctor_get(v_date_4519_, 20);
v_k_5655_ = lean_ctor_get(v_date_4519_, 21);
v_m_5656_ = lean_ctor_get(v_date_4519_, 23);
v_s_5657_ = lean_ctor_get(v_date_4519_, 24);
v_S_5658_ = lean_ctor_get(v_date_4519_, 25);
v_A_5659_ = lean_ctor_get(v_date_4519_, 26);
v_n_5660_ = lean_ctor_get(v_date_4519_, 27);
v_N_5661_ = lean_ctor_get(v_date_4519_, 28);
v_V_5662_ = lean_ctor_get(v_date_4519_, 29);
v_z_5663_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5664_ = lean_ctor_get(v_date_4519_, 31);
v_v_5665_ = lean_ctor_get(v_date_4519_, 32);
v_O_5666_ = lean_ctor_get(v_date_4519_, 33);
v_X_5667_ = lean_ctor_get(v_date_4519_, 34);
v_x_5668_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5669_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5679_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5679_ == 0)
{
lean_object* v_unused_5680_; 
v_unused_5680_ = lean_ctor_get(v_date_4519_, 22);
lean_dec(v_unused_5680_);
v___x_5671_ = v_date_4519_;
v_isShared_5672_ = v_isSharedCheck_5679_;
goto v_resetjp_5670_;
}
else
{
lean_inc(v_Z_5669_);
lean_inc(v_x_5668_);
lean_inc(v_X_5667_);
lean_inc(v_O_5666_);
lean_inc(v_v_5665_);
lean_inc(v_zabbrev_5664_);
lean_inc(v_z_5663_);
lean_inc(v_V_5662_);
lean_inc(v_N_5661_);
lean_inc(v_n_5660_);
lean_inc(v_A_5659_);
lean_inc(v_S_5658_);
lean_inc(v_s_5657_);
lean_inc(v_m_5656_);
lean_inc(v_k_5655_);
lean_inc(v_K_5654_);
lean_inc(v_h_5653_);
lean_inc(v_B_5652_);
lean_inc(v_b_5651_);
lean_inc(v_a_5650_);
lean_inc(v_F_5649_);
lean_inc(v_c_5648_);
lean_inc(v_e_5647_);
lean_inc(v_E_5646_);
lean_inc(v_W_5645_);
lean_inc(v_w_5644_);
lean_inc(v_q_5643_);
lean_inc(v_Q_5642_);
lean_inc(v_d_5641_);
lean_inc(v_L_5640_);
lean_inc(v_M_5639_);
lean_inc(v_D_5638_);
lean_inc(v_Y_5637_);
lean_inc(v_u_5636_);
lean_inc(v_y_5635_);
lean_inc(v_G_5634_);
lean_dec(v_date_4519_);
v___x_5671_ = lean_box(0);
v_isShared_5672_ = v_isSharedCheck_5679_;
goto v_resetjp_5670_;
}
v_resetjp_5670_:
{
lean_object* v___x_5674_; 
if (v_isShared_5633_ == 0)
{
lean_ctor_set_tag(v___x_5632_, 1);
lean_ctor_set(v___x_5632_, 0, v_data_4521_);
v___x_5674_ = v___x_5632_;
goto v_reusejp_5673_;
}
else
{
lean_object* v_reuseFailAlloc_5678_; 
v_reuseFailAlloc_5678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5678_, 0, v_data_4521_);
v___x_5674_ = v_reuseFailAlloc_5678_;
goto v_reusejp_5673_;
}
v_reusejp_5673_:
{
lean_object* v___x_5676_; 
if (v_isShared_5672_ == 0)
{
lean_ctor_set(v___x_5671_, 22, v___x_5674_);
v___x_5676_ = v___x_5671_;
goto v_reusejp_5675_;
}
else
{
lean_object* v_reuseFailAlloc_5677_; 
v_reuseFailAlloc_5677_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5677_, 0, v_G_5634_);
lean_ctor_set(v_reuseFailAlloc_5677_, 1, v_y_5635_);
lean_ctor_set(v_reuseFailAlloc_5677_, 2, v_u_5636_);
lean_ctor_set(v_reuseFailAlloc_5677_, 3, v_Y_5637_);
lean_ctor_set(v_reuseFailAlloc_5677_, 4, v_D_5638_);
lean_ctor_set(v_reuseFailAlloc_5677_, 5, v_M_5639_);
lean_ctor_set(v_reuseFailAlloc_5677_, 6, v_L_5640_);
lean_ctor_set(v_reuseFailAlloc_5677_, 7, v_d_5641_);
lean_ctor_set(v_reuseFailAlloc_5677_, 8, v_Q_5642_);
lean_ctor_set(v_reuseFailAlloc_5677_, 9, v_q_5643_);
lean_ctor_set(v_reuseFailAlloc_5677_, 10, v_w_5644_);
lean_ctor_set(v_reuseFailAlloc_5677_, 11, v_W_5645_);
lean_ctor_set(v_reuseFailAlloc_5677_, 12, v_E_5646_);
lean_ctor_set(v_reuseFailAlloc_5677_, 13, v_e_5647_);
lean_ctor_set(v_reuseFailAlloc_5677_, 14, v_c_5648_);
lean_ctor_set(v_reuseFailAlloc_5677_, 15, v_F_5649_);
lean_ctor_set(v_reuseFailAlloc_5677_, 16, v_a_5650_);
lean_ctor_set(v_reuseFailAlloc_5677_, 17, v_b_5651_);
lean_ctor_set(v_reuseFailAlloc_5677_, 18, v_B_5652_);
lean_ctor_set(v_reuseFailAlloc_5677_, 19, v_h_5653_);
lean_ctor_set(v_reuseFailAlloc_5677_, 20, v_K_5654_);
lean_ctor_set(v_reuseFailAlloc_5677_, 21, v_k_5655_);
lean_ctor_set(v_reuseFailAlloc_5677_, 22, v___x_5674_);
lean_ctor_set(v_reuseFailAlloc_5677_, 23, v_m_5656_);
lean_ctor_set(v_reuseFailAlloc_5677_, 24, v_s_5657_);
lean_ctor_set(v_reuseFailAlloc_5677_, 25, v_S_5658_);
lean_ctor_set(v_reuseFailAlloc_5677_, 26, v_A_5659_);
lean_ctor_set(v_reuseFailAlloc_5677_, 27, v_n_5660_);
lean_ctor_set(v_reuseFailAlloc_5677_, 28, v_N_5661_);
lean_ctor_set(v_reuseFailAlloc_5677_, 29, v_V_5662_);
lean_ctor_set(v_reuseFailAlloc_5677_, 30, v_z_5663_);
lean_ctor_set(v_reuseFailAlloc_5677_, 31, v_zabbrev_5664_);
lean_ctor_set(v_reuseFailAlloc_5677_, 32, v_v_5665_);
lean_ctor_set(v_reuseFailAlloc_5677_, 33, v_O_5666_);
lean_ctor_set(v_reuseFailAlloc_5677_, 34, v_X_5667_);
lean_ctor_set(v_reuseFailAlloc_5677_, 35, v_x_5668_);
lean_ctor_set(v_reuseFailAlloc_5677_, 36, v_Z_5669_);
v___x_5676_ = v_reuseFailAlloc_5677_;
goto v_reusejp_5675_;
}
v_reusejp_5675_:
{
return v___x_5676_;
}
}
}
}
}
case 23:
{
lean_object* v___x_5684_; uint8_t v_isShared_5685_; uint8_t v_isSharedCheck_5733_; 
v_isSharedCheck_5733_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_5733_ == 0)
{
lean_object* v_unused_5734_; 
v_unused_5734_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_5734_);
v___x_5684_ = v_modifier_4520_;
v_isShared_5685_ = v_isSharedCheck_5733_;
goto v_resetjp_5683_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_5684_ = lean_box(0);
v_isShared_5685_ = v_isSharedCheck_5733_;
goto v_resetjp_5683_;
}
v_resetjp_5683_:
{
lean_object* v_G_5686_; lean_object* v_y_5687_; lean_object* v_u_5688_; lean_object* v_Y_5689_; lean_object* v_D_5690_; lean_object* v_M_5691_; lean_object* v_L_5692_; lean_object* v_d_5693_; lean_object* v_Q_5694_; lean_object* v_q_5695_; lean_object* v_w_5696_; lean_object* v_W_5697_; lean_object* v_E_5698_; lean_object* v_e_5699_; lean_object* v_c_5700_; lean_object* v_F_5701_; lean_object* v_a_5702_; lean_object* v_b_5703_; lean_object* v_B_5704_; lean_object* v_h_5705_; lean_object* v_K_5706_; lean_object* v_k_5707_; lean_object* v_H_5708_; lean_object* v_s_5709_; lean_object* v_S_5710_; lean_object* v_A_5711_; lean_object* v_n_5712_; lean_object* v_N_5713_; lean_object* v_V_5714_; lean_object* v_z_5715_; lean_object* v_zabbrev_5716_; lean_object* v_v_5717_; lean_object* v_O_5718_; lean_object* v_X_5719_; lean_object* v_x_5720_; lean_object* v_Z_5721_; lean_object* v___x_5723_; uint8_t v_isShared_5724_; uint8_t v_isSharedCheck_5731_; 
v_G_5686_ = lean_ctor_get(v_date_4519_, 0);
v_y_5687_ = lean_ctor_get(v_date_4519_, 1);
v_u_5688_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5689_ = lean_ctor_get(v_date_4519_, 3);
v_D_5690_ = lean_ctor_get(v_date_4519_, 4);
v_M_5691_ = lean_ctor_get(v_date_4519_, 5);
v_L_5692_ = lean_ctor_get(v_date_4519_, 6);
v_d_5693_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5694_ = lean_ctor_get(v_date_4519_, 8);
v_q_5695_ = lean_ctor_get(v_date_4519_, 9);
v_w_5696_ = lean_ctor_get(v_date_4519_, 10);
v_W_5697_ = lean_ctor_get(v_date_4519_, 11);
v_E_5698_ = lean_ctor_get(v_date_4519_, 12);
v_e_5699_ = lean_ctor_get(v_date_4519_, 13);
v_c_5700_ = lean_ctor_get(v_date_4519_, 14);
v_F_5701_ = lean_ctor_get(v_date_4519_, 15);
v_a_5702_ = lean_ctor_get(v_date_4519_, 16);
v_b_5703_ = lean_ctor_get(v_date_4519_, 17);
v_B_5704_ = lean_ctor_get(v_date_4519_, 18);
v_h_5705_ = lean_ctor_get(v_date_4519_, 19);
v_K_5706_ = lean_ctor_get(v_date_4519_, 20);
v_k_5707_ = lean_ctor_get(v_date_4519_, 21);
v_H_5708_ = lean_ctor_get(v_date_4519_, 22);
v_s_5709_ = lean_ctor_get(v_date_4519_, 24);
v_S_5710_ = lean_ctor_get(v_date_4519_, 25);
v_A_5711_ = lean_ctor_get(v_date_4519_, 26);
v_n_5712_ = lean_ctor_get(v_date_4519_, 27);
v_N_5713_ = lean_ctor_get(v_date_4519_, 28);
v_V_5714_ = lean_ctor_get(v_date_4519_, 29);
v_z_5715_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5716_ = lean_ctor_get(v_date_4519_, 31);
v_v_5717_ = lean_ctor_get(v_date_4519_, 32);
v_O_5718_ = lean_ctor_get(v_date_4519_, 33);
v_X_5719_ = lean_ctor_get(v_date_4519_, 34);
v_x_5720_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5721_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5731_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5731_ == 0)
{
lean_object* v_unused_5732_; 
v_unused_5732_ = lean_ctor_get(v_date_4519_, 23);
lean_dec(v_unused_5732_);
v___x_5723_ = v_date_4519_;
v_isShared_5724_ = v_isSharedCheck_5731_;
goto v_resetjp_5722_;
}
else
{
lean_inc(v_Z_5721_);
lean_inc(v_x_5720_);
lean_inc(v_X_5719_);
lean_inc(v_O_5718_);
lean_inc(v_v_5717_);
lean_inc(v_zabbrev_5716_);
lean_inc(v_z_5715_);
lean_inc(v_V_5714_);
lean_inc(v_N_5713_);
lean_inc(v_n_5712_);
lean_inc(v_A_5711_);
lean_inc(v_S_5710_);
lean_inc(v_s_5709_);
lean_inc(v_H_5708_);
lean_inc(v_k_5707_);
lean_inc(v_K_5706_);
lean_inc(v_h_5705_);
lean_inc(v_B_5704_);
lean_inc(v_b_5703_);
lean_inc(v_a_5702_);
lean_inc(v_F_5701_);
lean_inc(v_c_5700_);
lean_inc(v_e_5699_);
lean_inc(v_E_5698_);
lean_inc(v_W_5697_);
lean_inc(v_w_5696_);
lean_inc(v_q_5695_);
lean_inc(v_Q_5694_);
lean_inc(v_d_5693_);
lean_inc(v_L_5692_);
lean_inc(v_M_5691_);
lean_inc(v_D_5690_);
lean_inc(v_Y_5689_);
lean_inc(v_u_5688_);
lean_inc(v_y_5687_);
lean_inc(v_G_5686_);
lean_dec(v_date_4519_);
v___x_5723_ = lean_box(0);
v_isShared_5724_ = v_isSharedCheck_5731_;
goto v_resetjp_5722_;
}
v_resetjp_5722_:
{
lean_object* v___x_5726_; 
if (v_isShared_5685_ == 0)
{
lean_ctor_set_tag(v___x_5684_, 1);
lean_ctor_set(v___x_5684_, 0, v_data_4521_);
v___x_5726_ = v___x_5684_;
goto v_reusejp_5725_;
}
else
{
lean_object* v_reuseFailAlloc_5730_; 
v_reuseFailAlloc_5730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5730_, 0, v_data_4521_);
v___x_5726_ = v_reuseFailAlloc_5730_;
goto v_reusejp_5725_;
}
v_reusejp_5725_:
{
lean_object* v___x_5728_; 
if (v_isShared_5724_ == 0)
{
lean_ctor_set(v___x_5723_, 23, v___x_5726_);
v___x_5728_ = v___x_5723_;
goto v_reusejp_5727_;
}
else
{
lean_object* v_reuseFailAlloc_5729_; 
v_reuseFailAlloc_5729_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5729_, 0, v_G_5686_);
lean_ctor_set(v_reuseFailAlloc_5729_, 1, v_y_5687_);
lean_ctor_set(v_reuseFailAlloc_5729_, 2, v_u_5688_);
lean_ctor_set(v_reuseFailAlloc_5729_, 3, v_Y_5689_);
lean_ctor_set(v_reuseFailAlloc_5729_, 4, v_D_5690_);
lean_ctor_set(v_reuseFailAlloc_5729_, 5, v_M_5691_);
lean_ctor_set(v_reuseFailAlloc_5729_, 6, v_L_5692_);
lean_ctor_set(v_reuseFailAlloc_5729_, 7, v_d_5693_);
lean_ctor_set(v_reuseFailAlloc_5729_, 8, v_Q_5694_);
lean_ctor_set(v_reuseFailAlloc_5729_, 9, v_q_5695_);
lean_ctor_set(v_reuseFailAlloc_5729_, 10, v_w_5696_);
lean_ctor_set(v_reuseFailAlloc_5729_, 11, v_W_5697_);
lean_ctor_set(v_reuseFailAlloc_5729_, 12, v_E_5698_);
lean_ctor_set(v_reuseFailAlloc_5729_, 13, v_e_5699_);
lean_ctor_set(v_reuseFailAlloc_5729_, 14, v_c_5700_);
lean_ctor_set(v_reuseFailAlloc_5729_, 15, v_F_5701_);
lean_ctor_set(v_reuseFailAlloc_5729_, 16, v_a_5702_);
lean_ctor_set(v_reuseFailAlloc_5729_, 17, v_b_5703_);
lean_ctor_set(v_reuseFailAlloc_5729_, 18, v_B_5704_);
lean_ctor_set(v_reuseFailAlloc_5729_, 19, v_h_5705_);
lean_ctor_set(v_reuseFailAlloc_5729_, 20, v_K_5706_);
lean_ctor_set(v_reuseFailAlloc_5729_, 21, v_k_5707_);
lean_ctor_set(v_reuseFailAlloc_5729_, 22, v_H_5708_);
lean_ctor_set(v_reuseFailAlloc_5729_, 23, v___x_5726_);
lean_ctor_set(v_reuseFailAlloc_5729_, 24, v_s_5709_);
lean_ctor_set(v_reuseFailAlloc_5729_, 25, v_S_5710_);
lean_ctor_set(v_reuseFailAlloc_5729_, 26, v_A_5711_);
lean_ctor_set(v_reuseFailAlloc_5729_, 27, v_n_5712_);
lean_ctor_set(v_reuseFailAlloc_5729_, 28, v_N_5713_);
lean_ctor_set(v_reuseFailAlloc_5729_, 29, v_V_5714_);
lean_ctor_set(v_reuseFailAlloc_5729_, 30, v_z_5715_);
lean_ctor_set(v_reuseFailAlloc_5729_, 31, v_zabbrev_5716_);
lean_ctor_set(v_reuseFailAlloc_5729_, 32, v_v_5717_);
lean_ctor_set(v_reuseFailAlloc_5729_, 33, v_O_5718_);
lean_ctor_set(v_reuseFailAlloc_5729_, 34, v_X_5719_);
lean_ctor_set(v_reuseFailAlloc_5729_, 35, v_x_5720_);
lean_ctor_set(v_reuseFailAlloc_5729_, 36, v_Z_5721_);
v___x_5728_ = v_reuseFailAlloc_5729_;
goto v_reusejp_5727_;
}
v_reusejp_5727_:
{
return v___x_5728_;
}
}
}
}
}
case 24:
{
lean_object* v___x_5736_; uint8_t v_isShared_5737_; uint8_t v_isSharedCheck_5785_; 
v_isSharedCheck_5785_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_5785_ == 0)
{
lean_object* v_unused_5786_; 
v_unused_5786_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_5786_);
v___x_5736_ = v_modifier_4520_;
v_isShared_5737_ = v_isSharedCheck_5785_;
goto v_resetjp_5735_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_5736_ = lean_box(0);
v_isShared_5737_ = v_isSharedCheck_5785_;
goto v_resetjp_5735_;
}
v_resetjp_5735_:
{
lean_object* v_G_5738_; lean_object* v_y_5739_; lean_object* v_u_5740_; lean_object* v_Y_5741_; lean_object* v_D_5742_; lean_object* v_M_5743_; lean_object* v_L_5744_; lean_object* v_d_5745_; lean_object* v_Q_5746_; lean_object* v_q_5747_; lean_object* v_w_5748_; lean_object* v_W_5749_; lean_object* v_E_5750_; lean_object* v_e_5751_; lean_object* v_c_5752_; lean_object* v_F_5753_; lean_object* v_a_5754_; lean_object* v_b_5755_; lean_object* v_B_5756_; lean_object* v_h_5757_; lean_object* v_K_5758_; lean_object* v_k_5759_; lean_object* v_H_5760_; lean_object* v_m_5761_; lean_object* v_S_5762_; lean_object* v_A_5763_; lean_object* v_n_5764_; lean_object* v_N_5765_; lean_object* v_V_5766_; lean_object* v_z_5767_; lean_object* v_zabbrev_5768_; lean_object* v_v_5769_; lean_object* v_O_5770_; lean_object* v_X_5771_; lean_object* v_x_5772_; lean_object* v_Z_5773_; lean_object* v___x_5775_; uint8_t v_isShared_5776_; uint8_t v_isSharedCheck_5783_; 
v_G_5738_ = lean_ctor_get(v_date_4519_, 0);
v_y_5739_ = lean_ctor_get(v_date_4519_, 1);
v_u_5740_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5741_ = lean_ctor_get(v_date_4519_, 3);
v_D_5742_ = lean_ctor_get(v_date_4519_, 4);
v_M_5743_ = lean_ctor_get(v_date_4519_, 5);
v_L_5744_ = lean_ctor_get(v_date_4519_, 6);
v_d_5745_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5746_ = lean_ctor_get(v_date_4519_, 8);
v_q_5747_ = lean_ctor_get(v_date_4519_, 9);
v_w_5748_ = lean_ctor_get(v_date_4519_, 10);
v_W_5749_ = lean_ctor_get(v_date_4519_, 11);
v_E_5750_ = lean_ctor_get(v_date_4519_, 12);
v_e_5751_ = lean_ctor_get(v_date_4519_, 13);
v_c_5752_ = lean_ctor_get(v_date_4519_, 14);
v_F_5753_ = lean_ctor_get(v_date_4519_, 15);
v_a_5754_ = lean_ctor_get(v_date_4519_, 16);
v_b_5755_ = lean_ctor_get(v_date_4519_, 17);
v_B_5756_ = lean_ctor_get(v_date_4519_, 18);
v_h_5757_ = lean_ctor_get(v_date_4519_, 19);
v_K_5758_ = lean_ctor_get(v_date_4519_, 20);
v_k_5759_ = lean_ctor_get(v_date_4519_, 21);
v_H_5760_ = lean_ctor_get(v_date_4519_, 22);
v_m_5761_ = lean_ctor_get(v_date_4519_, 23);
v_S_5762_ = lean_ctor_get(v_date_4519_, 25);
v_A_5763_ = lean_ctor_get(v_date_4519_, 26);
v_n_5764_ = lean_ctor_get(v_date_4519_, 27);
v_N_5765_ = lean_ctor_get(v_date_4519_, 28);
v_V_5766_ = lean_ctor_get(v_date_4519_, 29);
v_z_5767_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5768_ = lean_ctor_get(v_date_4519_, 31);
v_v_5769_ = lean_ctor_get(v_date_4519_, 32);
v_O_5770_ = lean_ctor_get(v_date_4519_, 33);
v_X_5771_ = lean_ctor_get(v_date_4519_, 34);
v_x_5772_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5773_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5783_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5783_ == 0)
{
lean_object* v_unused_5784_; 
v_unused_5784_ = lean_ctor_get(v_date_4519_, 24);
lean_dec(v_unused_5784_);
v___x_5775_ = v_date_4519_;
v_isShared_5776_ = v_isSharedCheck_5783_;
goto v_resetjp_5774_;
}
else
{
lean_inc(v_Z_5773_);
lean_inc(v_x_5772_);
lean_inc(v_X_5771_);
lean_inc(v_O_5770_);
lean_inc(v_v_5769_);
lean_inc(v_zabbrev_5768_);
lean_inc(v_z_5767_);
lean_inc(v_V_5766_);
lean_inc(v_N_5765_);
lean_inc(v_n_5764_);
lean_inc(v_A_5763_);
lean_inc(v_S_5762_);
lean_inc(v_m_5761_);
lean_inc(v_H_5760_);
lean_inc(v_k_5759_);
lean_inc(v_K_5758_);
lean_inc(v_h_5757_);
lean_inc(v_B_5756_);
lean_inc(v_b_5755_);
lean_inc(v_a_5754_);
lean_inc(v_F_5753_);
lean_inc(v_c_5752_);
lean_inc(v_e_5751_);
lean_inc(v_E_5750_);
lean_inc(v_W_5749_);
lean_inc(v_w_5748_);
lean_inc(v_q_5747_);
lean_inc(v_Q_5746_);
lean_inc(v_d_5745_);
lean_inc(v_L_5744_);
lean_inc(v_M_5743_);
lean_inc(v_D_5742_);
lean_inc(v_Y_5741_);
lean_inc(v_u_5740_);
lean_inc(v_y_5739_);
lean_inc(v_G_5738_);
lean_dec(v_date_4519_);
v___x_5775_ = lean_box(0);
v_isShared_5776_ = v_isSharedCheck_5783_;
goto v_resetjp_5774_;
}
v_resetjp_5774_:
{
lean_object* v___x_5778_; 
if (v_isShared_5737_ == 0)
{
lean_ctor_set_tag(v___x_5736_, 1);
lean_ctor_set(v___x_5736_, 0, v_data_4521_);
v___x_5778_ = v___x_5736_;
goto v_reusejp_5777_;
}
else
{
lean_object* v_reuseFailAlloc_5782_; 
v_reuseFailAlloc_5782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5782_, 0, v_data_4521_);
v___x_5778_ = v_reuseFailAlloc_5782_;
goto v_reusejp_5777_;
}
v_reusejp_5777_:
{
lean_object* v___x_5780_; 
if (v_isShared_5776_ == 0)
{
lean_ctor_set(v___x_5775_, 24, v___x_5778_);
v___x_5780_ = v___x_5775_;
goto v_reusejp_5779_;
}
else
{
lean_object* v_reuseFailAlloc_5781_; 
v_reuseFailAlloc_5781_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5781_, 0, v_G_5738_);
lean_ctor_set(v_reuseFailAlloc_5781_, 1, v_y_5739_);
lean_ctor_set(v_reuseFailAlloc_5781_, 2, v_u_5740_);
lean_ctor_set(v_reuseFailAlloc_5781_, 3, v_Y_5741_);
lean_ctor_set(v_reuseFailAlloc_5781_, 4, v_D_5742_);
lean_ctor_set(v_reuseFailAlloc_5781_, 5, v_M_5743_);
lean_ctor_set(v_reuseFailAlloc_5781_, 6, v_L_5744_);
lean_ctor_set(v_reuseFailAlloc_5781_, 7, v_d_5745_);
lean_ctor_set(v_reuseFailAlloc_5781_, 8, v_Q_5746_);
lean_ctor_set(v_reuseFailAlloc_5781_, 9, v_q_5747_);
lean_ctor_set(v_reuseFailAlloc_5781_, 10, v_w_5748_);
lean_ctor_set(v_reuseFailAlloc_5781_, 11, v_W_5749_);
lean_ctor_set(v_reuseFailAlloc_5781_, 12, v_E_5750_);
lean_ctor_set(v_reuseFailAlloc_5781_, 13, v_e_5751_);
lean_ctor_set(v_reuseFailAlloc_5781_, 14, v_c_5752_);
lean_ctor_set(v_reuseFailAlloc_5781_, 15, v_F_5753_);
lean_ctor_set(v_reuseFailAlloc_5781_, 16, v_a_5754_);
lean_ctor_set(v_reuseFailAlloc_5781_, 17, v_b_5755_);
lean_ctor_set(v_reuseFailAlloc_5781_, 18, v_B_5756_);
lean_ctor_set(v_reuseFailAlloc_5781_, 19, v_h_5757_);
lean_ctor_set(v_reuseFailAlloc_5781_, 20, v_K_5758_);
lean_ctor_set(v_reuseFailAlloc_5781_, 21, v_k_5759_);
lean_ctor_set(v_reuseFailAlloc_5781_, 22, v_H_5760_);
lean_ctor_set(v_reuseFailAlloc_5781_, 23, v_m_5761_);
lean_ctor_set(v_reuseFailAlloc_5781_, 24, v___x_5778_);
lean_ctor_set(v_reuseFailAlloc_5781_, 25, v_S_5762_);
lean_ctor_set(v_reuseFailAlloc_5781_, 26, v_A_5763_);
lean_ctor_set(v_reuseFailAlloc_5781_, 27, v_n_5764_);
lean_ctor_set(v_reuseFailAlloc_5781_, 28, v_N_5765_);
lean_ctor_set(v_reuseFailAlloc_5781_, 29, v_V_5766_);
lean_ctor_set(v_reuseFailAlloc_5781_, 30, v_z_5767_);
lean_ctor_set(v_reuseFailAlloc_5781_, 31, v_zabbrev_5768_);
lean_ctor_set(v_reuseFailAlloc_5781_, 32, v_v_5769_);
lean_ctor_set(v_reuseFailAlloc_5781_, 33, v_O_5770_);
lean_ctor_set(v_reuseFailAlloc_5781_, 34, v_X_5771_);
lean_ctor_set(v_reuseFailAlloc_5781_, 35, v_x_5772_);
lean_ctor_set(v_reuseFailAlloc_5781_, 36, v_Z_5773_);
v___x_5780_ = v_reuseFailAlloc_5781_;
goto v_reusejp_5779_;
}
v_reusejp_5779_:
{
return v___x_5780_;
}
}
}
}
}
case 25:
{
lean_object* v___x_5788_; uint8_t v_isShared_5789_; uint8_t v_isSharedCheck_5837_; 
v_isSharedCheck_5837_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_5837_ == 0)
{
lean_object* v_unused_5838_; 
v_unused_5838_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_5838_);
v___x_5788_ = v_modifier_4520_;
v_isShared_5789_ = v_isSharedCheck_5837_;
goto v_resetjp_5787_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_5788_ = lean_box(0);
v_isShared_5789_ = v_isSharedCheck_5837_;
goto v_resetjp_5787_;
}
v_resetjp_5787_:
{
lean_object* v_G_5790_; lean_object* v_y_5791_; lean_object* v_u_5792_; lean_object* v_Y_5793_; lean_object* v_D_5794_; lean_object* v_M_5795_; lean_object* v_L_5796_; lean_object* v_d_5797_; lean_object* v_Q_5798_; lean_object* v_q_5799_; lean_object* v_w_5800_; lean_object* v_W_5801_; lean_object* v_E_5802_; lean_object* v_e_5803_; lean_object* v_c_5804_; lean_object* v_F_5805_; lean_object* v_a_5806_; lean_object* v_b_5807_; lean_object* v_B_5808_; lean_object* v_h_5809_; lean_object* v_K_5810_; lean_object* v_k_5811_; lean_object* v_H_5812_; lean_object* v_m_5813_; lean_object* v_s_5814_; lean_object* v_A_5815_; lean_object* v_n_5816_; lean_object* v_N_5817_; lean_object* v_V_5818_; lean_object* v_z_5819_; lean_object* v_zabbrev_5820_; lean_object* v_v_5821_; lean_object* v_O_5822_; lean_object* v_X_5823_; lean_object* v_x_5824_; lean_object* v_Z_5825_; lean_object* v___x_5827_; uint8_t v_isShared_5828_; uint8_t v_isSharedCheck_5835_; 
v_G_5790_ = lean_ctor_get(v_date_4519_, 0);
v_y_5791_ = lean_ctor_get(v_date_4519_, 1);
v_u_5792_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5793_ = lean_ctor_get(v_date_4519_, 3);
v_D_5794_ = lean_ctor_get(v_date_4519_, 4);
v_M_5795_ = lean_ctor_get(v_date_4519_, 5);
v_L_5796_ = lean_ctor_get(v_date_4519_, 6);
v_d_5797_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5798_ = lean_ctor_get(v_date_4519_, 8);
v_q_5799_ = lean_ctor_get(v_date_4519_, 9);
v_w_5800_ = lean_ctor_get(v_date_4519_, 10);
v_W_5801_ = lean_ctor_get(v_date_4519_, 11);
v_E_5802_ = lean_ctor_get(v_date_4519_, 12);
v_e_5803_ = lean_ctor_get(v_date_4519_, 13);
v_c_5804_ = lean_ctor_get(v_date_4519_, 14);
v_F_5805_ = lean_ctor_get(v_date_4519_, 15);
v_a_5806_ = lean_ctor_get(v_date_4519_, 16);
v_b_5807_ = lean_ctor_get(v_date_4519_, 17);
v_B_5808_ = lean_ctor_get(v_date_4519_, 18);
v_h_5809_ = lean_ctor_get(v_date_4519_, 19);
v_K_5810_ = lean_ctor_get(v_date_4519_, 20);
v_k_5811_ = lean_ctor_get(v_date_4519_, 21);
v_H_5812_ = lean_ctor_get(v_date_4519_, 22);
v_m_5813_ = lean_ctor_get(v_date_4519_, 23);
v_s_5814_ = lean_ctor_get(v_date_4519_, 24);
v_A_5815_ = lean_ctor_get(v_date_4519_, 26);
v_n_5816_ = lean_ctor_get(v_date_4519_, 27);
v_N_5817_ = lean_ctor_get(v_date_4519_, 28);
v_V_5818_ = lean_ctor_get(v_date_4519_, 29);
v_z_5819_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5820_ = lean_ctor_get(v_date_4519_, 31);
v_v_5821_ = lean_ctor_get(v_date_4519_, 32);
v_O_5822_ = lean_ctor_get(v_date_4519_, 33);
v_X_5823_ = lean_ctor_get(v_date_4519_, 34);
v_x_5824_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5825_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5835_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5835_ == 0)
{
lean_object* v_unused_5836_; 
v_unused_5836_ = lean_ctor_get(v_date_4519_, 25);
lean_dec(v_unused_5836_);
v___x_5827_ = v_date_4519_;
v_isShared_5828_ = v_isSharedCheck_5835_;
goto v_resetjp_5826_;
}
else
{
lean_inc(v_Z_5825_);
lean_inc(v_x_5824_);
lean_inc(v_X_5823_);
lean_inc(v_O_5822_);
lean_inc(v_v_5821_);
lean_inc(v_zabbrev_5820_);
lean_inc(v_z_5819_);
lean_inc(v_V_5818_);
lean_inc(v_N_5817_);
lean_inc(v_n_5816_);
lean_inc(v_A_5815_);
lean_inc(v_s_5814_);
lean_inc(v_m_5813_);
lean_inc(v_H_5812_);
lean_inc(v_k_5811_);
lean_inc(v_K_5810_);
lean_inc(v_h_5809_);
lean_inc(v_B_5808_);
lean_inc(v_b_5807_);
lean_inc(v_a_5806_);
lean_inc(v_F_5805_);
lean_inc(v_c_5804_);
lean_inc(v_e_5803_);
lean_inc(v_E_5802_);
lean_inc(v_W_5801_);
lean_inc(v_w_5800_);
lean_inc(v_q_5799_);
lean_inc(v_Q_5798_);
lean_inc(v_d_5797_);
lean_inc(v_L_5796_);
lean_inc(v_M_5795_);
lean_inc(v_D_5794_);
lean_inc(v_Y_5793_);
lean_inc(v_u_5792_);
lean_inc(v_y_5791_);
lean_inc(v_G_5790_);
lean_dec(v_date_4519_);
v___x_5827_ = lean_box(0);
v_isShared_5828_ = v_isSharedCheck_5835_;
goto v_resetjp_5826_;
}
v_resetjp_5826_:
{
lean_object* v___x_5830_; 
if (v_isShared_5789_ == 0)
{
lean_ctor_set_tag(v___x_5788_, 1);
lean_ctor_set(v___x_5788_, 0, v_data_4521_);
v___x_5830_ = v___x_5788_;
goto v_reusejp_5829_;
}
else
{
lean_object* v_reuseFailAlloc_5834_; 
v_reuseFailAlloc_5834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5834_, 0, v_data_4521_);
v___x_5830_ = v_reuseFailAlloc_5834_;
goto v_reusejp_5829_;
}
v_reusejp_5829_:
{
lean_object* v___x_5832_; 
if (v_isShared_5828_ == 0)
{
lean_ctor_set(v___x_5827_, 25, v___x_5830_);
v___x_5832_ = v___x_5827_;
goto v_reusejp_5831_;
}
else
{
lean_object* v_reuseFailAlloc_5833_; 
v_reuseFailAlloc_5833_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5833_, 0, v_G_5790_);
lean_ctor_set(v_reuseFailAlloc_5833_, 1, v_y_5791_);
lean_ctor_set(v_reuseFailAlloc_5833_, 2, v_u_5792_);
lean_ctor_set(v_reuseFailAlloc_5833_, 3, v_Y_5793_);
lean_ctor_set(v_reuseFailAlloc_5833_, 4, v_D_5794_);
lean_ctor_set(v_reuseFailAlloc_5833_, 5, v_M_5795_);
lean_ctor_set(v_reuseFailAlloc_5833_, 6, v_L_5796_);
lean_ctor_set(v_reuseFailAlloc_5833_, 7, v_d_5797_);
lean_ctor_set(v_reuseFailAlloc_5833_, 8, v_Q_5798_);
lean_ctor_set(v_reuseFailAlloc_5833_, 9, v_q_5799_);
lean_ctor_set(v_reuseFailAlloc_5833_, 10, v_w_5800_);
lean_ctor_set(v_reuseFailAlloc_5833_, 11, v_W_5801_);
lean_ctor_set(v_reuseFailAlloc_5833_, 12, v_E_5802_);
lean_ctor_set(v_reuseFailAlloc_5833_, 13, v_e_5803_);
lean_ctor_set(v_reuseFailAlloc_5833_, 14, v_c_5804_);
lean_ctor_set(v_reuseFailAlloc_5833_, 15, v_F_5805_);
lean_ctor_set(v_reuseFailAlloc_5833_, 16, v_a_5806_);
lean_ctor_set(v_reuseFailAlloc_5833_, 17, v_b_5807_);
lean_ctor_set(v_reuseFailAlloc_5833_, 18, v_B_5808_);
lean_ctor_set(v_reuseFailAlloc_5833_, 19, v_h_5809_);
lean_ctor_set(v_reuseFailAlloc_5833_, 20, v_K_5810_);
lean_ctor_set(v_reuseFailAlloc_5833_, 21, v_k_5811_);
lean_ctor_set(v_reuseFailAlloc_5833_, 22, v_H_5812_);
lean_ctor_set(v_reuseFailAlloc_5833_, 23, v_m_5813_);
lean_ctor_set(v_reuseFailAlloc_5833_, 24, v_s_5814_);
lean_ctor_set(v_reuseFailAlloc_5833_, 25, v___x_5830_);
lean_ctor_set(v_reuseFailAlloc_5833_, 26, v_A_5815_);
lean_ctor_set(v_reuseFailAlloc_5833_, 27, v_n_5816_);
lean_ctor_set(v_reuseFailAlloc_5833_, 28, v_N_5817_);
lean_ctor_set(v_reuseFailAlloc_5833_, 29, v_V_5818_);
lean_ctor_set(v_reuseFailAlloc_5833_, 30, v_z_5819_);
lean_ctor_set(v_reuseFailAlloc_5833_, 31, v_zabbrev_5820_);
lean_ctor_set(v_reuseFailAlloc_5833_, 32, v_v_5821_);
lean_ctor_set(v_reuseFailAlloc_5833_, 33, v_O_5822_);
lean_ctor_set(v_reuseFailAlloc_5833_, 34, v_X_5823_);
lean_ctor_set(v_reuseFailAlloc_5833_, 35, v_x_5824_);
lean_ctor_set(v_reuseFailAlloc_5833_, 36, v_Z_5825_);
v___x_5832_ = v_reuseFailAlloc_5833_;
goto v_reusejp_5831_;
}
v_reusejp_5831_:
{
return v___x_5832_;
}
}
}
}
}
case 26:
{
lean_object* v___x_5840_; uint8_t v_isShared_5841_; uint8_t v_isSharedCheck_5889_; 
v_isSharedCheck_5889_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_5889_ == 0)
{
lean_object* v_unused_5890_; 
v_unused_5890_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_5890_);
v___x_5840_ = v_modifier_4520_;
v_isShared_5841_ = v_isSharedCheck_5889_;
goto v_resetjp_5839_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_5840_ = lean_box(0);
v_isShared_5841_ = v_isSharedCheck_5889_;
goto v_resetjp_5839_;
}
v_resetjp_5839_:
{
lean_object* v_G_5842_; lean_object* v_y_5843_; lean_object* v_u_5844_; lean_object* v_Y_5845_; lean_object* v_D_5846_; lean_object* v_M_5847_; lean_object* v_L_5848_; lean_object* v_d_5849_; lean_object* v_Q_5850_; lean_object* v_q_5851_; lean_object* v_w_5852_; lean_object* v_W_5853_; lean_object* v_E_5854_; lean_object* v_e_5855_; lean_object* v_c_5856_; lean_object* v_F_5857_; lean_object* v_a_5858_; lean_object* v_b_5859_; lean_object* v_B_5860_; lean_object* v_h_5861_; lean_object* v_K_5862_; lean_object* v_k_5863_; lean_object* v_H_5864_; lean_object* v_m_5865_; lean_object* v_s_5866_; lean_object* v_S_5867_; lean_object* v_n_5868_; lean_object* v_N_5869_; lean_object* v_V_5870_; lean_object* v_z_5871_; lean_object* v_zabbrev_5872_; lean_object* v_v_5873_; lean_object* v_O_5874_; lean_object* v_X_5875_; lean_object* v_x_5876_; lean_object* v_Z_5877_; lean_object* v___x_5879_; uint8_t v_isShared_5880_; uint8_t v_isSharedCheck_5887_; 
v_G_5842_ = lean_ctor_get(v_date_4519_, 0);
v_y_5843_ = lean_ctor_get(v_date_4519_, 1);
v_u_5844_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5845_ = lean_ctor_get(v_date_4519_, 3);
v_D_5846_ = lean_ctor_get(v_date_4519_, 4);
v_M_5847_ = lean_ctor_get(v_date_4519_, 5);
v_L_5848_ = lean_ctor_get(v_date_4519_, 6);
v_d_5849_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5850_ = lean_ctor_get(v_date_4519_, 8);
v_q_5851_ = lean_ctor_get(v_date_4519_, 9);
v_w_5852_ = lean_ctor_get(v_date_4519_, 10);
v_W_5853_ = lean_ctor_get(v_date_4519_, 11);
v_E_5854_ = lean_ctor_get(v_date_4519_, 12);
v_e_5855_ = lean_ctor_get(v_date_4519_, 13);
v_c_5856_ = lean_ctor_get(v_date_4519_, 14);
v_F_5857_ = lean_ctor_get(v_date_4519_, 15);
v_a_5858_ = lean_ctor_get(v_date_4519_, 16);
v_b_5859_ = lean_ctor_get(v_date_4519_, 17);
v_B_5860_ = lean_ctor_get(v_date_4519_, 18);
v_h_5861_ = lean_ctor_get(v_date_4519_, 19);
v_K_5862_ = lean_ctor_get(v_date_4519_, 20);
v_k_5863_ = lean_ctor_get(v_date_4519_, 21);
v_H_5864_ = lean_ctor_get(v_date_4519_, 22);
v_m_5865_ = lean_ctor_get(v_date_4519_, 23);
v_s_5866_ = lean_ctor_get(v_date_4519_, 24);
v_S_5867_ = lean_ctor_get(v_date_4519_, 25);
v_n_5868_ = lean_ctor_get(v_date_4519_, 27);
v_N_5869_ = lean_ctor_get(v_date_4519_, 28);
v_V_5870_ = lean_ctor_get(v_date_4519_, 29);
v_z_5871_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5872_ = lean_ctor_get(v_date_4519_, 31);
v_v_5873_ = lean_ctor_get(v_date_4519_, 32);
v_O_5874_ = lean_ctor_get(v_date_4519_, 33);
v_X_5875_ = lean_ctor_get(v_date_4519_, 34);
v_x_5876_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5877_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5887_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5887_ == 0)
{
lean_object* v_unused_5888_; 
v_unused_5888_ = lean_ctor_get(v_date_4519_, 26);
lean_dec(v_unused_5888_);
v___x_5879_ = v_date_4519_;
v_isShared_5880_ = v_isSharedCheck_5887_;
goto v_resetjp_5878_;
}
else
{
lean_inc(v_Z_5877_);
lean_inc(v_x_5876_);
lean_inc(v_X_5875_);
lean_inc(v_O_5874_);
lean_inc(v_v_5873_);
lean_inc(v_zabbrev_5872_);
lean_inc(v_z_5871_);
lean_inc(v_V_5870_);
lean_inc(v_N_5869_);
lean_inc(v_n_5868_);
lean_inc(v_S_5867_);
lean_inc(v_s_5866_);
lean_inc(v_m_5865_);
lean_inc(v_H_5864_);
lean_inc(v_k_5863_);
lean_inc(v_K_5862_);
lean_inc(v_h_5861_);
lean_inc(v_B_5860_);
lean_inc(v_b_5859_);
lean_inc(v_a_5858_);
lean_inc(v_F_5857_);
lean_inc(v_c_5856_);
lean_inc(v_e_5855_);
lean_inc(v_E_5854_);
lean_inc(v_W_5853_);
lean_inc(v_w_5852_);
lean_inc(v_q_5851_);
lean_inc(v_Q_5850_);
lean_inc(v_d_5849_);
lean_inc(v_L_5848_);
lean_inc(v_M_5847_);
lean_inc(v_D_5846_);
lean_inc(v_Y_5845_);
lean_inc(v_u_5844_);
lean_inc(v_y_5843_);
lean_inc(v_G_5842_);
lean_dec(v_date_4519_);
v___x_5879_ = lean_box(0);
v_isShared_5880_ = v_isSharedCheck_5887_;
goto v_resetjp_5878_;
}
v_resetjp_5878_:
{
lean_object* v___x_5882_; 
if (v_isShared_5841_ == 0)
{
lean_ctor_set_tag(v___x_5840_, 1);
lean_ctor_set(v___x_5840_, 0, v_data_4521_);
v___x_5882_ = v___x_5840_;
goto v_reusejp_5881_;
}
else
{
lean_object* v_reuseFailAlloc_5886_; 
v_reuseFailAlloc_5886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5886_, 0, v_data_4521_);
v___x_5882_ = v_reuseFailAlloc_5886_;
goto v_reusejp_5881_;
}
v_reusejp_5881_:
{
lean_object* v___x_5884_; 
if (v_isShared_5880_ == 0)
{
lean_ctor_set(v___x_5879_, 26, v___x_5882_);
v___x_5884_ = v___x_5879_;
goto v_reusejp_5883_;
}
else
{
lean_object* v_reuseFailAlloc_5885_; 
v_reuseFailAlloc_5885_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5885_, 0, v_G_5842_);
lean_ctor_set(v_reuseFailAlloc_5885_, 1, v_y_5843_);
lean_ctor_set(v_reuseFailAlloc_5885_, 2, v_u_5844_);
lean_ctor_set(v_reuseFailAlloc_5885_, 3, v_Y_5845_);
lean_ctor_set(v_reuseFailAlloc_5885_, 4, v_D_5846_);
lean_ctor_set(v_reuseFailAlloc_5885_, 5, v_M_5847_);
lean_ctor_set(v_reuseFailAlloc_5885_, 6, v_L_5848_);
lean_ctor_set(v_reuseFailAlloc_5885_, 7, v_d_5849_);
lean_ctor_set(v_reuseFailAlloc_5885_, 8, v_Q_5850_);
lean_ctor_set(v_reuseFailAlloc_5885_, 9, v_q_5851_);
lean_ctor_set(v_reuseFailAlloc_5885_, 10, v_w_5852_);
lean_ctor_set(v_reuseFailAlloc_5885_, 11, v_W_5853_);
lean_ctor_set(v_reuseFailAlloc_5885_, 12, v_E_5854_);
lean_ctor_set(v_reuseFailAlloc_5885_, 13, v_e_5855_);
lean_ctor_set(v_reuseFailAlloc_5885_, 14, v_c_5856_);
lean_ctor_set(v_reuseFailAlloc_5885_, 15, v_F_5857_);
lean_ctor_set(v_reuseFailAlloc_5885_, 16, v_a_5858_);
lean_ctor_set(v_reuseFailAlloc_5885_, 17, v_b_5859_);
lean_ctor_set(v_reuseFailAlloc_5885_, 18, v_B_5860_);
lean_ctor_set(v_reuseFailAlloc_5885_, 19, v_h_5861_);
lean_ctor_set(v_reuseFailAlloc_5885_, 20, v_K_5862_);
lean_ctor_set(v_reuseFailAlloc_5885_, 21, v_k_5863_);
lean_ctor_set(v_reuseFailAlloc_5885_, 22, v_H_5864_);
lean_ctor_set(v_reuseFailAlloc_5885_, 23, v_m_5865_);
lean_ctor_set(v_reuseFailAlloc_5885_, 24, v_s_5866_);
lean_ctor_set(v_reuseFailAlloc_5885_, 25, v_S_5867_);
lean_ctor_set(v_reuseFailAlloc_5885_, 26, v___x_5882_);
lean_ctor_set(v_reuseFailAlloc_5885_, 27, v_n_5868_);
lean_ctor_set(v_reuseFailAlloc_5885_, 28, v_N_5869_);
lean_ctor_set(v_reuseFailAlloc_5885_, 29, v_V_5870_);
lean_ctor_set(v_reuseFailAlloc_5885_, 30, v_z_5871_);
lean_ctor_set(v_reuseFailAlloc_5885_, 31, v_zabbrev_5872_);
lean_ctor_set(v_reuseFailAlloc_5885_, 32, v_v_5873_);
lean_ctor_set(v_reuseFailAlloc_5885_, 33, v_O_5874_);
lean_ctor_set(v_reuseFailAlloc_5885_, 34, v_X_5875_);
lean_ctor_set(v_reuseFailAlloc_5885_, 35, v_x_5876_);
lean_ctor_set(v_reuseFailAlloc_5885_, 36, v_Z_5877_);
v___x_5884_ = v_reuseFailAlloc_5885_;
goto v_reusejp_5883_;
}
v_reusejp_5883_:
{
return v___x_5884_;
}
}
}
}
}
case 27:
{
lean_object* v___x_5892_; uint8_t v_isShared_5893_; uint8_t v_isSharedCheck_5941_; 
v_isSharedCheck_5941_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_5941_ == 0)
{
lean_object* v_unused_5942_; 
v_unused_5942_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_5942_);
v___x_5892_ = v_modifier_4520_;
v_isShared_5893_ = v_isSharedCheck_5941_;
goto v_resetjp_5891_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_5892_ = lean_box(0);
v_isShared_5893_ = v_isSharedCheck_5941_;
goto v_resetjp_5891_;
}
v_resetjp_5891_:
{
lean_object* v_G_5894_; lean_object* v_y_5895_; lean_object* v_u_5896_; lean_object* v_Y_5897_; lean_object* v_D_5898_; lean_object* v_M_5899_; lean_object* v_L_5900_; lean_object* v_d_5901_; lean_object* v_Q_5902_; lean_object* v_q_5903_; lean_object* v_w_5904_; lean_object* v_W_5905_; lean_object* v_E_5906_; lean_object* v_e_5907_; lean_object* v_c_5908_; lean_object* v_F_5909_; lean_object* v_a_5910_; lean_object* v_b_5911_; lean_object* v_B_5912_; lean_object* v_h_5913_; lean_object* v_K_5914_; lean_object* v_k_5915_; lean_object* v_H_5916_; lean_object* v_m_5917_; lean_object* v_s_5918_; lean_object* v_S_5919_; lean_object* v_A_5920_; lean_object* v_N_5921_; lean_object* v_V_5922_; lean_object* v_z_5923_; lean_object* v_zabbrev_5924_; lean_object* v_v_5925_; lean_object* v_O_5926_; lean_object* v_X_5927_; lean_object* v_x_5928_; lean_object* v_Z_5929_; lean_object* v___x_5931_; uint8_t v_isShared_5932_; uint8_t v_isSharedCheck_5939_; 
v_G_5894_ = lean_ctor_get(v_date_4519_, 0);
v_y_5895_ = lean_ctor_get(v_date_4519_, 1);
v_u_5896_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5897_ = lean_ctor_get(v_date_4519_, 3);
v_D_5898_ = lean_ctor_get(v_date_4519_, 4);
v_M_5899_ = lean_ctor_get(v_date_4519_, 5);
v_L_5900_ = lean_ctor_get(v_date_4519_, 6);
v_d_5901_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5902_ = lean_ctor_get(v_date_4519_, 8);
v_q_5903_ = lean_ctor_get(v_date_4519_, 9);
v_w_5904_ = lean_ctor_get(v_date_4519_, 10);
v_W_5905_ = lean_ctor_get(v_date_4519_, 11);
v_E_5906_ = lean_ctor_get(v_date_4519_, 12);
v_e_5907_ = lean_ctor_get(v_date_4519_, 13);
v_c_5908_ = lean_ctor_get(v_date_4519_, 14);
v_F_5909_ = lean_ctor_get(v_date_4519_, 15);
v_a_5910_ = lean_ctor_get(v_date_4519_, 16);
v_b_5911_ = lean_ctor_get(v_date_4519_, 17);
v_B_5912_ = lean_ctor_get(v_date_4519_, 18);
v_h_5913_ = lean_ctor_get(v_date_4519_, 19);
v_K_5914_ = lean_ctor_get(v_date_4519_, 20);
v_k_5915_ = lean_ctor_get(v_date_4519_, 21);
v_H_5916_ = lean_ctor_get(v_date_4519_, 22);
v_m_5917_ = lean_ctor_get(v_date_4519_, 23);
v_s_5918_ = lean_ctor_get(v_date_4519_, 24);
v_S_5919_ = lean_ctor_get(v_date_4519_, 25);
v_A_5920_ = lean_ctor_get(v_date_4519_, 26);
v_N_5921_ = lean_ctor_get(v_date_4519_, 28);
v_V_5922_ = lean_ctor_get(v_date_4519_, 29);
v_z_5923_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5924_ = lean_ctor_get(v_date_4519_, 31);
v_v_5925_ = lean_ctor_get(v_date_4519_, 32);
v_O_5926_ = lean_ctor_get(v_date_4519_, 33);
v_X_5927_ = lean_ctor_get(v_date_4519_, 34);
v_x_5928_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5929_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5939_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5939_ == 0)
{
lean_object* v_unused_5940_; 
v_unused_5940_ = lean_ctor_get(v_date_4519_, 27);
lean_dec(v_unused_5940_);
v___x_5931_ = v_date_4519_;
v_isShared_5932_ = v_isSharedCheck_5939_;
goto v_resetjp_5930_;
}
else
{
lean_inc(v_Z_5929_);
lean_inc(v_x_5928_);
lean_inc(v_X_5927_);
lean_inc(v_O_5926_);
lean_inc(v_v_5925_);
lean_inc(v_zabbrev_5924_);
lean_inc(v_z_5923_);
lean_inc(v_V_5922_);
lean_inc(v_N_5921_);
lean_inc(v_A_5920_);
lean_inc(v_S_5919_);
lean_inc(v_s_5918_);
lean_inc(v_m_5917_);
lean_inc(v_H_5916_);
lean_inc(v_k_5915_);
lean_inc(v_K_5914_);
lean_inc(v_h_5913_);
lean_inc(v_B_5912_);
lean_inc(v_b_5911_);
lean_inc(v_a_5910_);
lean_inc(v_F_5909_);
lean_inc(v_c_5908_);
lean_inc(v_e_5907_);
lean_inc(v_E_5906_);
lean_inc(v_W_5905_);
lean_inc(v_w_5904_);
lean_inc(v_q_5903_);
lean_inc(v_Q_5902_);
lean_inc(v_d_5901_);
lean_inc(v_L_5900_);
lean_inc(v_M_5899_);
lean_inc(v_D_5898_);
lean_inc(v_Y_5897_);
lean_inc(v_u_5896_);
lean_inc(v_y_5895_);
lean_inc(v_G_5894_);
lean_dec(v_date_4519_);
v___x_5931_ = lean_box(0);
v_isShared_5932_ = v_isSharedCheck_5939_;
goto v_resetjp_5930_;
}
v_resetjp_5930_:
{
lean_object* v___x_5934_; 
if (v_isShared_5893_ == 0)
{
lean_ctor_set_tag(v___x_5892_, 1);
lean_ctor_set(v___x_5892_, 0, v_data_4521_);
v___x_5934_ = v___x_5892_;
goto v_reusejp_5933_;
}
else
{
lean_object* v_reuseFailAlloc_5938_; 
v_reuseFailAlloc_5938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5938_, 0, v_data_4521_);
v___x_5934_ = v_reuseFailAlloc_5938_;
goto v_reusejp_5933_;
}
v_reusejp_5933_:
{
lean_object* v___x_5936_; 
if (v_isShared_5932_ == 0)
{
lean_ctor_set(v___x_5931_, 27, v___x_5934_);
v___x_5936_ = v___x_5931_;
goto v_reusejp_5935_;
}
else
{
lean_object* v_reuseFailAlloc_5937_; 
v_reuseFailAlloc_5937_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5937_, 0, v_G_5894_);
lean_ctor_set(v_reuseFailAlloc_5937_, 1, v_y_5895_);
lean_ctor_set(v_reuseFailAlloc_5937_, 2, v_u_5896_);
lean_ctor_set(v_reuseFailAlloc_5937_, 3, v_Y_5897_);
lean_ctor_set(v_reuseFailAlloc_5937_, 4, v_D_5898_);
lean_ctor_set(v_reuseFailAlloc_5937_, 5, v_M_5899_);
lean_ctor_set(v_reuseFailAlloc_5937_, 6, v_L_5900_);
lean_ctor_set(v_reuseFailAlloc_5937_, 7, v_d_5901_);
lean_ctor_set(v_reuseFailAlloc_5937_, 8, v_Q_5902_);
lean_ctor_set(v_reuseFailAlloc_5937_, 9, v_q_5903_);
lean_ctor_set(v_reuseFailAlloc_5937_, 10, v_w_5904_);
lean_ctor_set(v_reuseFailAlloc_5937_, 11, v_W_5905_);
lean_ctor_set(v_reuseFailAlloc_5937_, 12, v_E_5906_);
lean_ctor_set(v_reuseFailAlloc_5937_, 13, v_e_5907_);
lean_ctor_set(v_reuseFailAlloc_5937_, 14, v_c_5908_);
lean_ctor_set(v_reuseFailAlloc_5937_, 15, v_F_5909_);
lean_ctor_set(v_reuseFailAlloc_5937_, 16, v_a_5910_);
lean_ctor_set(v_reuseFailAlloc_5937_, 17, v_b_5911_);
lean_ctor_set(v_reuseFailAlloc_5937_, 18, v_B_5912_);
lean_ctor_set(v_reuseFailAlloc_5937_, 19, v_h_5913_);
lean_ctor_set(v_reuseFailAlloc_5937_, 20, v_K_5914_);
lean_ctor_set(v_reuseFailAlloc_5937_, 21, v_k_5915_);
lean_ctor_set(v_reuseFailAlloc_5937_, 22, v_H_5916_);
lean_ctor_set(v_reuseFailAlloc_5937_, 23, v_m_5917_);
lean_ctor_set(v_reuseFailAlloc_5937_, 24, v_s_5918_);
lean_ctor_set(v_reuseFailAlloc_5937_, 25, v_S_5919_);
lean_ctor_set(v_reuseFailAlloc_5937_, 26, v_A_5920_);
lean_ctor_set(v_reuseFailAlloc_5937_, 27, v___x_5934_);
lean_ctor_set(v_reuseFailAlloc_5937_, 28, v_N_5921_);
lean_ctor_set(v_reuseFailAlloc_5937_, 29, v_V_5922_);
lean_ctor_set(v_reuseFailAlloc_5937_, 30, v_z_5923_);
lean_ctor_set(v_reuseFailAlloc_5937_, 31, v_zabbrev_5924_);
lean_ctor_set(v_reuseFailAlloc_5937_, 32, v_v_5925_);
lean_ctor_set(v_reuseFailAlloc_5937_, 33, v_O_5926_);
lean_ctor_set(v_reuseFailAlloc_5937_, 34, v_X_5927_);
lean_ctor_set(v_reuseFailAlloc_5937_, 35, v_x_5928_);
lean_ctor_set(v_reuseFailAlloc_5937_, 36, v_Z_5929_);
v___x_5936_ = v_reuseFailAlloc_5937_;
goto v_reusejp_5935_;
}
v_reusejp_5935_:
{
return v___x_5936_;
}
}
}
}
}
case 28:
{
lean_object* v___x_5944_; uint8_t v_isShared_5945_; uint8_t v_isSharedCheck_5993_; 
v_isSharedCheck_5993_ = !lean_is_exclusive(v_modifier_4520_);
if (v_isSharedCheck_5993_ == 0)
{
lean_object* v_unused_5994_; 
v_unused_5994_ = lean_ctor_get(v_modifier_4520_, 0);
lean_dec(v_unused_5994_);
v___x_5944_ = v_modifier_4520_;
v_isShared_5945_ = v_isSharedCheck_5993_;
goto v_resetjp_5943_;
}
else
{
lean_dec(v_modifier_4520_);
v___x_5944_ = lean_box(0);
v_isShared_5945_ = v_isSharedCheck_5993_;
goto v_resetjp_5943_;
}
v_resetjp_5943_:
{
lean_object* v_G_5946_; lean_object* v_y_5947_; lean_object* v_u_5948_; lean_object* v_Y_5949_; lean_object* v_D_5950_; lean_object* v_M_5951_; lean_object* v_L_5952_; lean_object* v_d_5953_; lean_object* v_Q_5954_; lean_object* v_q_5955_; lean_object* v_w_5956_; lean_object* v_W_5957_; lean_object* v_E_5958_; lean_object* v_e_5959_; lean_object* v_c_5960_; lean_object* v_F_5961_; lean_object* v_a_5962_; lean_object* v_b_5963_; lean_object* v_B_5964_; lean_object* v_h_5965_; lean_object* v_K_5966_; lean_object* v_k_5967_; lean_object* v_H_5968_; lean_object* v_m_5969_; lean_object* v_s_5970_; lean_object* v_S_5971_; lean_object* v_A_5972_; lean_object* v_n_5973_; lean_object* v_V_5974_; lean_object* v_z_5975_; lean_object* v_zabbrev_5976_; lean_object* v_v_5977_; lean_object* v_O_5978_; lean_object* v_X_5979_; lean_object* v_x_5980_; lean_object* v_Z_5981_; lean_object* v___x_5983_; uint8_t v_isShared_5984_; uint8_t v_isSharedCheck_5991_; 
v_G_5946_ = lean_ctor_get(v_date_4519_, 0);
v_y_5947_ = lean_ctor_get(v_date_4519_, 1);
v_u_5948_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5949_ = lean_ctor_get(v_date_4519_, 3);
v_D_5950_ = lean_ctor_get(v_date_4519_, 4);
v_M_5951_ = lean_ctor_get(v_date_4519_, 5);
v_L_5952_ = lean_ctor_get(v_date_4519_, 6);
v_d_5953_ = lean_ctor_get(v_date_4519_, 7);
v_Q_5954_ = lean_ctor_get(v_date_4519_, 8);
v_q_5955_ = lean_ctor_get(v_date_4519_, 9);
v_w_5956_ = lean_ctor_get(v_date_4519_, 10);
v_W_5957_ = lean_ctor_get(v_date_4519_, 11);
v_E_5958_ = lean_ctor_get(v_date_4519_, 12);
v_e_5959_ = lean_ctor_get(v_date_4519_, 13);
v_c_5960_ = lean_ctor_get(v_date_4519_, 14);
v_F_5961_ = lean_ctor_get(v_date_4519_, 15);
v_a_5962_ = lean_ctor_get(v_date_4519_, 16);
v_b_5963_ = lean_ctor_get(v_date_4519_, 17);
v_B_5964_ = lean_ctor_get(v_date_4519_, 18);
v_h_5965_ = lean_ctor_get(v_date_4519_, 19);
v_K_5966_ = lean_ctor_get(v_date_4519_, 20);
v_k_5967_ = lean_ctor_get(v_date_4519_, 21);
v_H_5968_ = lean_ctor_get(v_date_4519_, 22);
v_m_5969_ = lean_ctor_get(v_date_4519_, 23);
v_s_5970_ = lean_ctor_get(v_date_4519_, 24);
v_S_5971_ = lean_ctor_get(v_date_4519_, 25);
v_A_5972_ = lean_ctor_get(v_date_4519_, 26);
v_n_5973_ = lean_ctor_get(v_date_4519_, 27);
v_V_5974_ = lean_ctor_get(v_date_4519_, 29);
v_z_5975_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_5976_ = lean_ctor_get(v_date_4519_, 31);
v_v_5977_ = lean_ctor_get(v_date_4519_, 32);
v_O_5978_ = lean_ctor_get(v_date_4519_, 33);
v_X_5979_ = lean_ctor_get(v_date_4519_, 34);
v_x_5980_ = lean_ctor_get(v_date_4519_, 35);
v_Z_5981_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_5991_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_5991_ == 0)
{
lean_object* v_unused_5992_; 
v_unused_5992_ = lean_ctor_get(v_date_4519_, 28);
lean_dec(v_unused_5992_);
v___x_5983_ = v_date_4519_;
v_isShared_5984_ = v_isSharedCheck_5991_;
goto v_resetjp_5982_;
}
else
{
lean_inc(v_Z_5981_);
lean_inc(v_x_5980_);
lean_inc(v_X_5979_);
lean_inc(v_O_5978_);
lean_inc(v_v_5977_);
lean_inc(v_zabbrev_5976_);
lean_inc(v_z_5975_);
lean_inc(v_V_5974_);
lean_inc(v_n_5973_);
lean_inc(v_A_5972_);
lean_inc(v_S_5971_);
lean_inc(v_s_5970_);
lean_inc(v_m_5969_);
lean_inc(v_H_5968_);
lean_inc(v_k_5967_);
lean_inc(v_K_5966_);
lean_inc(v_h_5965_);
lean_inc(v_B_5964_);
lean_inc(v_b_5963_);
lean_inc(v_a_5962_);
lean_inc(v_F_5961_);
lean_inc(v_c_5960_);
lean_inc(v_e_5959_);
lean_inc(v_E_5958_);
lean_inc(v_W_5957_);
lean_inc(v_w_5956_);
lean_inc(v_q_5955_);
lean_inc(v_Q_5954_);
lean_inc(v_d_5953_);
lean_inc(v_L_5952_);
lean_inc(v_M_5951_);
lean_inc(v_D_5950_);
lean_inc(v_Y_5949_);
lean_inc(v_u_5948_);
lean_inc(v_y_5947_);
lean_inc(v_G_5946_);
lean_dec(v_date_4519_);
v___x_5983_ = lean_box(0);
v_isShared_5984_ = v_isSharedCheck_5991_;
goto v_resetjp_5982_;
}
v_resetjp_5982_:
{
lean_object* v___x_5986_; 
if (v_isShared_5945_ == 0)
{
lean_ctor_set_tag(v___x_5944_, 1);
lean_ctor_set(v___x_5944_, 0, v_data_4521_);
v___x_5986_ = v___x_5944_;
goto v_reusejp_5985_;
}
else
{
lean_object* v_reuseFailAlloc_5990_; 
v_reuseFailAlloc_5990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5990_, 0, v_data_4521_);
v___x_5986_ = v_reuseFailAlloc_5990_;
goto v_reusejp_5985_;
}
v_reusejp_5985_:
{
lean_object* v___x_5988_; 
if (v_isShared_5984_ == 0)
{
lean_ctor_set(v___x_5983_, 28, v___x_5986_);
v___x_5988_ = v___x_5983_;
goto v_reusejp_5987_;
}
else
{
lean_object* v_reuseFailAlloc_5989_; 
v_reuseFailAlloc_5989_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_5989_, 0, v_G_5946_);
lean_ctor_set(v_reuseFailAlloc_5989_, 1, v_y_5947_);
lean_ctor_set(v_reuseFailAlloc_5989_, 2, v_u_5948_);
lean_ctor_set(v_reuseFailAlloc_5989_, 3, v_Y_5949_);
lean_ctor_set(v_reuseFailAlloc_5989_, 4, v_D_5950_);
lean_ctor_set(v_reuseFailAlloc_5989_, 5, v_M_5951_);
lean_ctor_set(v_reuseFailAlloc_5989_, 6, v_L_5952_);
lean_ctor_set(v_reuseFailAlloc_5989_, 7, v_d_5953_);
lean_ctor_set(v_reuseFailAlloc_5989_, 8, v_Q_5954_);
lean_ctor_set(v_reuseFailAlloc_5989_, 9, v_q_5955_);
lean_ctor_set(v_reuseFailAlloc_5989_, 10, v_w_5956_);
lean_ctor_set(v_reuseFailAlloc_5989_, 11, v_W_5957_);
lean_ctor_set(v_reuseFailAlloc_5989_, 12, v_E_5958_);
lean_ctor_set(v_reuseFailAlloc_5989_, 13, v_e_5959_);
lean_ctor_set(v_reuseFailAlloc_5989_, 14, v_c_5960_);
lean_ctor_set(v_reuseFailAlloc_5989_, 15, v_F_5961_);
lean_ctor_set(v_reuseFailAlloc_5989_, 16, v_a_5962_);
lean_ctor_set(v_reuseFailAlloc_5989_, 17, v_b_5963_);
lean_ctor_set(v_reuseFailAlloc_5989_, 18, v_B_5964_);
lean_ctor_set(v_reuseFailAlloc_5989_, 19, v_h_5965_);
lean_ctor_set(v_reuseFailAlloc_5989_, 20, v_K_5966_);
lean_ctor_set(v_reuseFailAlloc_5989_, 21, v_k_5967_);
lean_ctor_set(v_reuseFailAlloc_5989_, 22, v_H_5968_);
lean_ctor_set(v_reuseFailAlloc_5989_, 23, v_m_5969_);
lean_ctor_set(v_reuseFailAlloc_5989_, 24, v_s_5970_);
lean_ctor_set(v_reuseFailAlloc_5989_, 25, v_S_5971_);
lean_ctor_set(v_reuseFailAlloc_5989_, 26, v_A_5972_);
lean_ctor_set(v_reuseFailAlloc_5989_, 27, v_n_5973_);
lean_ctor_set(v_reuseFailAlloc_5989_, 28, v___x_5986_);
lean_ctor_set(v_reuseFailAlloc_5989_, 29, v_V_5974_);
lean_ctor_set(v_reuseFailAlloc_5989_, 30, v_z_5975_);
lean_ctor_set(v_reuseFailAlloc_5989_, 31, v_zabbrev_5976_);
lean_ctor_set(v_reuseFailAlloc_5989_, 32, v_v_5977_);
lean_ctor_set(v_reuseFailAlloc_5989_, 33, v_O_5978_);
lean_ctor_set(v_reuseFailAlloc_5989_, 34, v_X_5979_);
lean_ctor_set(v_reuseFailAlloc_5989_, 35, v_x_5980_);
lean_ctor_set(v_reuseFailAlloc_5989_, 36, v_Z_5981_);
v___x_5988_ = v_reuseFailAlloc_5989_;
goto v_reusejp_5987_;
}
v_reusejp_5987_:
{
return v___x_5988_;
}
}
}
}
}
case 29:
{
lean_object* v_G_5995_; lean_object* v_y_5996_; lean_object* v_u_5997_; lean_object* v_Y_5998_; lean_object* v_D_5999_; lean_object* v_M_6000_; lean_object* v_L_6001_; lean_object* v_d_6002_; lean_object* v_Q_6003_; lean_object* v_q_6004_; lean_object* v_w_6005_; lean_object* v_W_6006_; lean_object* v_E_6007_; lean_object* v_e_6008_; lean_object* v_c_6009_; lean_object* v_F_6010_; lean_object* v_a_6011_; lean_object* v_b_6012_; lean_object* v_B_6013_; lean_object* v_h_6014_; lean_object* v_K_6015_; lean_object* v_k_6016_; lean_object* v_H_6017_; lean_object* v_m_6018_; lean_object* v_s_6019_; lean_object* v_S_6020_; lean_object* v_A_6021_; lean_object* v_n_6022_; lean_object* v_N_6023_; lean_object* v_z_6024_; lean_object* v_zabbrev_6025_; lean_object* v_v_6026_; lean_object* v_O_6027_; lean_object* v_X_6028_; lean_object* v_x_6029_; lean_object* v_Z_6030_; lean_object* v___x_6032_; uint8_t v_isShared_6033_; uint8_t v_isSharedCheck_6038_; 
lean_dec_ref_known(v_modifier_4520_, 0);
v_G_5995_ = lean_ctor_get(v_date_4519_, 0);
v_y_5996_ = lean_ctor_get(v_date_4519_, 1);
v_u_5997_ = lean_ctor_get(v_date_4519_, 2);
v_Y_5998_ = lean_ctor_get(v_date_4519_, 3);
v_D_5999_ = lean_ctor_get(v_date_4519_, 4);
v_M_6000_ = lean_ctor_get(v_date_4519_, 5);
v_L_6001_ = lean_ctor_get(v_date_4519_, 6);
v_d_6002_ = lean_ctor_get(v_date_4519_, 7);
v_Q_6003_ = lean_ctor_get(v_date_4519_, 8);
v_q_6004_ = lean_ctor_get(v_date_4519_, 9);
v_w_6005_ = lean_ctor_get(v_date_4519_, 10);
v_W_6006_ = lean_ctor_get(v_date_4519_, 11);
v_E_6007_ = lean_ctor_get(v_date_4519_, 12);
v_e_6008_ = lean_ctor_get(v_date_4519_, 13);
v_c_6009_ = lean_ctor_get(v_date_4519_, 14);
v_F_6010_ = lean_ctor_get(v_date_4519_, 15);
v_a_6011_ = lean_ctor_get(v_date_4519_, 16);
v_b_6012_ = lean_ctor_get(v_date_4519_, 17);
v_B_6013_ = lean_ctor_get(v_date_4519_, 18);
v_h_6014_ = lean_ctor_get(v_date_4519_, 19);
v_K_6015_ = lean_ctor_get(v_date_4519_, 20);
v_k_6016_ = lean_ctor_get(v_date_4519_, 21);
v_H_6017_ = lean_ctor_get(v_date_4519_, 22);
v_m_6018_ = lean_ctor_get(v_date_4519_, 23);
v_s_6019_ = lean_ctor_get(v_date_4519_, 24);
v_S_6020_ = lean_ctor_get(v_date_4519_, 25);
v_A_6021_ = lean_ctor_get(v_date_4519_, 26);
v_n_6022_ = lean_ctor_get(v_date_4519_, 27);
v_N_6023_ = lean_ctor_get(v_date_4519_, 28);
v_z_6024_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_6025_ = lean_ctor_get(v_date_4519_, 31);
v_v_6026_ = lean_ctor_get(v_date_4519_, 32);
v_O_6027_ = lean_ctor_get(v_date_4519_, 33);
v_X_6028_ = lean_ctor_get(v_date_4519_, 34);
v_x_6029_ = lean_ctor_get(v_date_4519_, 35);
v_Z_6030_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_6038_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_6038_ == 0)
{
lean_object* v_unused_6039_; 
v_unused_6039_ = lean_ctor_get(v_date_4519_, 29);
lean_dec(v_unused_6039_);
v___x_6032_ = v_date_4519_;
v_isShared_6033_ = v_isSharedCheck_6038_;
goto v_resetjp_6031_;
}
else
{
lean_inc(v_Z_6030_);
lean_inc(v_x_6029_);
lean_inc(v_X_6028_);
lean_inc(v_O_6027_);
lean_inc(v_v_6026_);
lean_inc(v_zabbrev_6025_);
lean_inc(v_z_6024_);
lean_inc(v_N_6023_);
lean_inc(v_n_6022_);
lean_inc(v_A_6021_);
lean_inc(v_S_6020_);
lean_inc(v_s_6019_);
lean_inc(v_m_6018_);
lean_inc(v_H_6017_);
lean_inc(v_k_6016_);
lean_inc(v_K_6015_);
lean_inc(v_h_6014_);
lean_inc(v_B_6013_);
lean_inc(v_b_6012_);
lean_inc(v_a_6011_);
lean_inc(v_F_6010_);
lean_inc(v_c_6009_);
lean_inc(v_e_6008_);
lean_inc(v_E_6007_);
lean_inc(v_W_6006_);
lean_inc(v_w_6005_);
lean_inc(v_q_6004_);
lean_inc(v_Q_6003_);
lean_inc(v_d_6002_);
lean_inc(v_L_6001_);
lean_inc(v_M_6000_);
lean_inc(v_D_5999_);
lean_inc(v_Y_5998_);
lean_inc(v_u_5997_);
lean_inc(v_y_5996_);
lean_inc(v_G_5995_);
lean_dec(v_date_4519_);
v___x_6032_ = lean_box(0);
v_isShared_6033_ = v_isSharedCheck_6038_;
goto v_resetjp_6031_;
}
v_resetjp_6031_:
{
lean_object* v___x_6034_; lean_object* v___x_6036_; 
v___x_6034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6034_, 0, v_data_4521_);
if (v_isShared_6033_ == 0)
{
lean_ctor_set(v___x_6032_, 29, v___x_6034_);
v___x_6036_ = v___x_6032_;
goto v_reusejp_6035_;
}
else
{
lean_object* v_reuseFailAlloc_6037_; 
v_reuseFailAlloc_6037_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6037_, 0, v_G_5995_);
lean_ctor_set(v_reuseFailAlloc_6037_, 1, v_y_5996_);
lean_ctor_set(v_reuseFailAlloc_6037_, 2, v_u_5997_);
lean_ctor_set(v_reuseFailAlloc_6037_, 3, v_Y_5998_);
lean_ctor_set(v_reuseFailAlloc_6037_, 4, v_D_5999_);
lean_ctor_set(v_reuseFailAlloc_6037_, 5, v_M_6000_);
lean_ctor_set(v_reuseFailAlloc_6037_, 6, v_L_6001_);
lean_ctor_set(v_reuseFailAlloc_6037_, 7, v_d_6002_);
lean_ctor_set(v_reuseFailAlloc_6037_, 8, v_Q_6003_);
lean_ctor_set(v_reuseFailAlloc_6037_, 9, v_q_6004_);
lean_ctor_set(v_reuseFailAlloc_6037_, 10, v_w_6005_);
lean_ctor_set(v_reuseFailAlloc_6037_, 11, v_W_6006_);
lean_ctor_set(v_reuseFailAlloc_6037_, 12, v_E_6007_);
lean_ctor_set(v_reuseFailAlloc_6037_, 13, v_e_6008_);
lean_ctor_set(v_reuseFailAlloc_6037_, 14, v_c_6009_);
lean_ctor_set(v_reuseFailAlloc_6037_, 15, v_F_6010_);
lean_ctor_set(v_reuseFailAlloc_6037_, 16, v_a_6011_);
lean_ctor_set(v_reuseFailAlloc_6037_, 17, v_b_6012_);
lean_ctor_set(v_reuseFailAlloc_6037_, 18, v_B_6013_);
lean_ctor_set(v_reuseFailAlloc_6037_, 19, v_h_6014_);
lean_ctor_set(v_reuseFailAlloc_6037_, 20, v_K_6015_);
lean_ctor_set(v_reuseFailAlloc_6037_, 21, v_k_6016_);
lean_ctor_set(v_reuseFailAlloc_6037_, 22, v_H_6017_);
lean_ctor_set(v_reuseFailAlloc_6037_, 23, v_m_6018_);
lean_ctor_set(v_reuseFailAlloc_6037_, 24, v_s_6019_);
lean_ctor_set(v_reuseFailAlloc_6037_, 25, v_S_6020_);
lean_ctor_set(v_reuseFailAlloc_6037_, 26, v_A_6021_);
lean_ctor_set(v_reuseFailAlloc_6037_, 27, v_n_6022_);
lean_ctor_set(v_reuseFailAlloc_6037_, 28, v_N_6023_);
lean_ctor_set(v_reuseFailAlloc_6037_, 29, v___x_6034_);
lean_ctor_set(v_reuseFailAlloc_6037_, 30, v_z_6024_);
lean_ctor_set(v_reuseFailAlloc_6037_, 31, v_zabbrev_6025_);
lean_ctor_set(v_reuseFailAlloc_6037_, 32, v_v_6026_);
lean_ctor_set(v_reuseFailAlloc_6037_, 33, v_O_6027_);
lean_ctor_set(v_reuseFailAlloc_6037_, 34, v_X_6028_);
lean_ctor_set(v_reuseFailAlloc_6037_, 35, v_x_6029_);
lean_ctor_set(v_reuseFailAlloc_6037_, 36, v_Z_6030_);
v___x_6036_ = v_reuseFailAlloc_6037_;
goto v_reusejp_6035_;
}
v_reusejp_6035_:
{
return v___x_6036_;
}
}
}
case 30:
{
uint8_t v_presentation_6040_; 
v_presentation_6040_ = lean_ctor_get_uint8(v_modifier_4520_, 0);
lean_dec_ref_known(v_modifier_4520_, 0);
if (v_presentation_6040_ == 0)
{
lean_object* v_G_6041_; lean_object* v_y_6042_; lean_object* v_u_6043_; lean_object* v_Y_6044_; lean_object* v_D_6045_; lean_object* v_M_6046_; lean_object* v_L_6047_; lean_object* v_d_6048_; lean_object* v_Q_6049_; lean_object* v_q_6050_; lean_object* v_w_6051_; lean_object* v_W_6052_; lean_object* v_E_6053_; lean_object* v_e_6054_; lean_object* v_c_6055_; lean_object* v_F_6056_; lean_object* v_a_6057_; lean_object* v_b_6058_; lean_object* v_B_6059_; lean_object* v_h_6060_; lean_object* v_K_6061_; lean_object* v_k_6062_; lean_object* v_H_6063_; lean_object* v_m_6064_; lean_object* v_s_6065_; lean_object* v_S_6066_; lean_object* v_A_6067_; lean_object* v_n_6068_; lean_object* v_N_6069_; lean_object* v_V_6070_; lean_object* v_z_6071_; lean_object* v_v_6072_; lean_object* v_O_6073_; lean_object* v_X_6074_; lean_object* v_x_6075_; lean_object* v_Z_6076_; lean_object* v___x_6078_; uint8_t v_isShared_6079_; uint8_t v_isSharedCheck_6084_; 
v_G_6041_ = lean_ctor_get(v_date_4519_, 0);
v_y_6042_ = lean_ctor_get(v_date_4519_, 1);
v_u_6043_ = lean_ctor_get(v_date_4519_, 2);
v_Y_6044_ = lean_ctor_get(v_date_4519_, 3);
v_D_6045_ = lean_ctor_get(v_date_4519_, 4);
v_M_6046_ = lean_ctor_get(v_date_4519_, 5);
v_L_6047_ = lean_ctor_get(v_date_4519_, 6);
v_d_6048_ = lean_ctor_get(v_date_4519_, 7);
v_Q_6049_ = lean_ctor_get(v_date_4519_, 8);
v_q_6050_ = lean_ctor_get(v_date_4519_, 9);
v_w_6051_ = lean_ctor_get(v_date_4519_, 10);
v_W_6052_ = lean_ctor_get(v_date_4519_, 11);
v_E_6053_ = lean_ctor_get(v_date_4519_, 12);
v_e_6054_ = lean_ctor_get(v_date_4519_, 13);
v_c_6055_ = lean_ctor_get(v_date_4519_, 14);
v_F_6056_ = lean_ctor_get(v_date_4519_, 15);
v_a_6057_ = lean_ctor_get(v_date_4519_, 16);
v_b_6058_ = lean_ctor_get(v_date_4519_, 17);
v_B_6059_ = lean_ctor_get(v_date_4519_, 18);
v_h_6060_ = lean_ctor_get(v_date_4519_, 19);
v_K_6061_ = lean_ctor_get(v_date_4519_, 20);
v_k_6062_ = lean_ctor_get(v_date_4519_, 21);
v_H_6063_ = lean_ctor_get(v_date_4519_, 22);
v_m_6064_ = lean_ctor_get(v_date_4519_, 23);
v_s_6065_ = lean_ctor_get(v_date_4519_, 24);
v_S_6066_ = lean_ctor_get(v_date_4519_, 25);
v_A_6067_ = lean_ctor_get(v_date_4519_, 26);
v_n_6068_ = lean_ctor_get(v_date_4519_, 27);
v_N_6069_ = lean_ctor_get(v_date_4519_, 28);
v_V_6070_ = lean_ctor_get(v_date_4519_, 29);
v_z_6071_ = lean_ctor_get(v_date_4519_, 30);
v_v_6072_ = lean_ctor_get(v_date_4519_, 32);
v_O_6073_ = lean_ctor_get(v_date_4519_, 33);
v_X_6074_ = lean_ctor_get(v_date_4519_, 34);
v_x_6075_ = lean_ctor_get(v_date_4519_, 35);
v_Z_6076_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_6084_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_6084_ == 0)
{
lean_object* v_unused_6085_; 
v_unused_6085_ = lean_ctor_get(v_date_4519_, 31);
lean_dec(v_unused_6085_);
v___x_6078_ = v_date_4519_;
v_isShared_6079_ = v_isSharedCheck_6084_;
goto v_resetjp_6077_;
}
else
{
lean_inc(v_Z_6076_);
lean_inc(v_x_6075_);
lean_inc(v_X_6074_);
lean_inc(v_O_6073_);
lean_inc(v_v_6072_);
lean_inc(v_z_6071_);
lean_inc(v_V_6070_);
lean_inc(v_N_6069_);
lean_inc(v_n_6068_);
lean_inc(v_A_6067_);
lean_inc(v_S_6066_);
lean_inc(v_s_6065_);
lean_inc(v_m_6064_);
lean_inc(v_H_6063_);
lean_inc(v_k_6062_);
lean_inc(v_K_6061_);
lean_inc(v_h_6060_);
lean_inc(v_B_6059_);
lean_inc(v_b_6058_);
lean_inc(v_a_6057_);
lean_inc(v_F_6056_);
lean_inc(v_c_6055_);
lean_inc(v_e_6054_);
lean_inc(v_E_6053_);
lean_inc(v_W_6052_);
lean_inc(v_w_6051_);
lean_inc(v_q_6050_);
lean_inc(v_Q_6049_);
lean_inc(v_d_6048_);
lean_inc(v_L_6047_);
lean_inc(v_M_6046_);
lean_inc(v_D_6045_);
lean_inc(v_Y_6044_);
lean_inc(v_u_6043_);
lean_inc(v_y_6042_);
lean_inc(v_G_6041_);
lean_dec(v_date_4519_);
v___x_6078_ = lean_box(0);
v_isShared_6079_ = v_isSharedCheck_6084_;
goto v_resetjp_6077_;
}
v_resetjp_6077_:
{
lean_object* v___x_6080_; lean_object* v___x_6082_; 
v___x_6080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6080_, 0, v_data_4521_);
if (v_isShared_6079_ == 0)
{
lean_ctor_set(v___x_6078_, 31, v___x_6080_);
v___x_6082_ = v___x_6078_;
goto v_reusejp_6081_;
}
else
{
lean_object* v_reuseFailAlloc_6083_; 
v_reuseFailAlloc_6083_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6083_, 0, v_G_6041_);
lean_ctor_set(v_reuseFailAlloc_6083_, 1, v_y_6042_);
lean_ctor_set(v_reuseFailAlloc_6083_, 2, v_u_6043_);
lean_ctor_set(v_reuseFailAlloc_6083_, 3, v_Y_6044_);
lean_ctor_set(v_reuseFailAlloc_6083_, 4, v_D_6045_);
lean_ctor_set(v_reuseFailAlloc_6083_, 5, v_M_6046_);
lean_ctor_set(v_reuseFailAlloc_6083_, 6, v_L_6047_);
lean_ctor_set(v_reuseFailAlloc_6083_, 7, v_d_6048_);
lean_ctor_set(v_reuseFailAlloc_6083_, 8, v_Q_6049_);
lean_ctor_set(v_reuseFailAlloc_6083_, 9, v_q_6050_);
lean_ctor_set(v_reuseFailAlloc_6083_, 10, v_w_6051_);
lean_ctor_set(v_reuseFailAlloc_6083_, 11, v_W_6052_);
lean_ctor_set(v_reuseFailAlloc_6083_, 12, v_E_6053_);
lean_ctor_set(v_reuseFailAlloc_6083_, 13, v_e_6054_);
lean_ctor_set(v_reuseFailAlloc_6083_, 14, v_c_6055_);
lean_ctor_set(v_reuseFailAlloc_6083_, 15, v_F_6056_);
lean_ctor_set(v_reuseFailAlloc_6083_, 16, v_a_6057_);
lean_ctor_set(v_reuseFailAlloc_6083_, 17, v_b_6058_);
lean_ctor_set(v_reuseFailAlloc_6083_, 18, v_B_6059_);
lean_ctor_set(v_reuseFailAlloc_6083_, 19, v_h_6060_);
lean_ctor_set(v_reuseFailAlloc_6083_, 20, v_K_6061_);
lean_ctor_set(v_reuseFailAlloc_6083_, 21, v_k_6062_);
lean_ctor_set(v_reuseFailAlloc_6083_, 22, v_H_6063_);
lean_ctor_set(v_reuseFailAlloc_6083_, 23, v_m_6064_);
lean_ctor_set(v_reuseFailAlloc_6083_, 24, v_s_6065_);
lean_ctor_set(v_reuseFailAlloc_6083_, 25, v_S_6066_);
lean_ctor_set(v_reuseFailAlloc_6083_, 26, v_A_6067_);
lean_ctor_set(v_reuseFailAlloc_6083_, 27, v_n_6068_);
lean_ctor_set(v_reuseFailAlloc_6083_, 28, v_N_6069_);
lean_ctor_set(v_reuseFailAlloc_6083_, 29, v_V_6070_);
lean_ctor_set(v_reuseFailAlloc_6083_, 30, v_z_6071_);
lean_ctor_set(v_reuseFailAlloc_6083_, 31, v___x_6080_);
lean_ctor_set(v_reuseFailAlloc_6083_, 32, v_v_6072_);
lean_ctor_set(v_reuseFailAlloc_6083_, 33, v_O_6073_);
lean_ctor_set(v_reuseFailAlloc_6083_, 34, v_X_6074_);
lean_ctor_set(v_reuseFailAlloc_6083_, 35, v_x_6075_);
lean_ctor_set(v_reuseFailAlloc_6083_, 36, v_Z_6076_);
v___x_6082_ = v_reuseFailAlloc_6083_;
goto v_reusejp_6081_;
}
v_reusejp_6081_:
{
return v___x_6082_;
}
}
}
else
{
lean_object* v_G_6086_; lean_object* v_y_6087_; lean_object* v_u_6088_; lean_object* v_Y_6089_; lean_object* v_D_6090_; lean_object* v_M_6091_; lean_object* v_L_6092_; lean_object* v_d_6093_; lean_object* v_Q_6094_; lean_object* v_q_6095_; lean_object* v_w_6096_; lean_object* v_W_6097_; lean_object* v_E_6098_; lean_object* v_e_6099_; lean_object* v_c_6100_; lean_object* v_F_6101_; lean_object* v_a_6102_; lean_object* v_b_6103_; lean_object* v_B_6104_; lean_object* v_h_6105_; lean_object* v_K_6106_; lean_object* v_k_6107_; lean_object* v_H_6108_; lean_object* v_m_6109_; lean_object* v_s_6110_; lean_object* v_S_6111_; lean_object* v_A_6112_; lean_object* v_n_6113_; lean_object* v_N_6114_; lean_object* v_V_6115_; lean_object* v_zabbrev_6116_; lean_object* v_v_6117_; lean_object* v_O_6118_; lean_object* v_X_6119_; lean_object* v_x_6120_; lean_object* v_Z_6121_; lean_object* v___x_6123_; uint8_t v_isShared_6124_; uint8_t v_isSharedCheck_6129_; 
v_G_6086_ = lean_ctor_get(v_date_4519_, 0);
v_y_6087_ = lean_ctor_get(v_date_4519_, 1);
v_u_6088_ = lean_ctor_get(v_date_4519_, 2);
v_Y_6089_ = lean_ctor_get(v_date_4519_, 3);
v_D_6090_ = lean_ctor_get(v_date_4519_, 4);
v_M_6091_ = lean_ctor_get(v_date_4519_, 5);
v_L_6092_ = lean_ctor_get(v_date_4519_, 6);
v_d_6093_ = lean_ctor_get(v_date_4519_, 7);
v_Q_6094_ = lean_ctor_get(v_date_4519_, 8);
v_q_6095_ = lean_ctor_get(v_date_4519_, 9);
v_w_6096_ = lean_ctor_get(v_date_4519_, 10);
v_W_6097_ = lean_ctor_get(v_date_4519_, 11);
v_E_6098_ = lean_ctor_get(v_date_4519_, 12);
v_e_6099_ = lean_ctor_get(v_date_4519_, 13);
v_c_6100_ = lean_ctor_get(v_date_4519_, 14);
v_F_6101_ = lean_ctor_get(v_date_4519_, 15);
v_a_6102_ = lean_ctor_get(v_date_4519_, 16);
v_b_6103_ = lean_ctor_get(v_date_4519_, 17);
v_B_6104_ = lean_ctor_get(v_date_4519_, 18);
v_h_6105_ = lean_ctor_get(v_date_4519_, 19);
v_K_6106_ = lean_ctor_get(v_date_4519_, 20);
v_k_6107_ = lean_ctor_get(v_date_4519_, 21);
v_H_6108_ = lean_ctor_get(v_date_4519_, 22);
v_m_6109_ = lean_ctor_get(v_date_4519_, 23);
v_s_6110_ = lean_ctor_get(v_date_4519_, 24);
v_S_6111_ = lean_ctor_get(v_date_4519_, 25);
v_A_6112_ = lean_ctor_get(v_date_4519_, 26);
v_n_6113_ = lean_ctor_get(v_date_4519_, 27);
v_N_6114_ = lean_ctor_get(v_date_4519_, 28);
v_V_6115_ = lean_ctor_get(v_date_4519_, 29);
v_zabbrev_6116_ = lean_ctor_get(v_date_4519_, 31);
v_v_6117_ = lean_ctor_get(v_date_4519_, 32);
v_O_6118_ = lean_ctor_get(v_date_4519_, 33);
v_X_6119_ = lean_ctor_get(v_date_4519_, 34);
v_x_6120_ = lean_ctor_get(v_date_4519_, 35);
v_Z_6121_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_6129_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_6129_ == 0)
{
lean_object* v_unused_6130_; 
v_unused_6130_ = lean_ctor_get(v_date_4519_, 30);
lean_dec(v_unused_6130_);
v___x_6123_ = v_date_4519_;
v_isShared_6124_ = v_isSharedCheck_6129_;
goto v_resetjp_6122_;
}
else
{
lean_inc(v_Z_6121_);
lean_inc(v_x_6120_);
lean_inc(v_X_6119_);
lean_inc(v_O_6118_);
lean_inc(v_v_6117_);
lean_inc(v_zabbrev_6116_);
lean_inc(v_V_6115_);
lean_inc(v_N_6114_);
lean_inc(v_n_6113_);
lean_inc(v_A_6112_);
lean_inc(v_S_6111_);
lean_inc(v_s_6110_);
lean_inc(v_m_6109_);
lean_inc(v_H_6108_);
lean_inc(v_k_6107_);
lean_inc(v_K_6106_);
lean_inc(v_h_6105_);
lean_inc(v_B_6104_);
lean_inc(v_b_6103_);
lean_inc(v_a_6102_);
lean_inc(v_F_6101_);
lean_inc(v_c_6100_);
lean_inc(v_e_6099_);
lean_inc(v_E_6098_);
lean_inc(v_W_6097_);
lean_inc(v_w_6096_);
lean_inc(v_q_6095_);
lean_inc(v_Q_6094_);
lean_inc(v_d_6093_);
lean_inc(v_L_6092_);
lean_inc(v_M_6091_);
lean_inc(v_D_6090_);
lean_inc(v_Y_6089_);
lean_inc(v_u_6088_);
lean_inc(v_y_6087_);
lean_inc(v_G_6086_);
lean_dec(v_date_4519_);
v___x_6123_ = lean_box(0);
v_isShared_6124_ = v_isSharedCheck_6129_;
goto v_resetjp_6122_;
}
v_resetjp_6122_:
{
lean_object* v___x_6125_; lean_object* v___x_6127_; 
v___x_6125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6125_, 0, v_data_4521_);
if (v_isShared_6124_ == 0)
{
lean_ctor_set(v___x_6123_, 30, v___x_6125_);
v___x_6127_ = v___x_6123_;
goto v_reusejp_6126_;
}
else
{
lean_object* v_reuseFailAlloc_6128_; 
v_reuseFailAlloc_6128_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6128_, 0, v_G_6086_);
lean_ctor_set(v_reuseFailAlloc_6128_, 1, v_y_6087_);
lean_ctor_set(v_reuseFailAlloc_6128_, 2, v_u_6088_);
lean_ctor_set(v_reuseFailAlloc_6128_, 3, v_Y_6089_);
lean_ctor_set(v_reuseFailAlloc_6128_, 4, v_D_6090_);
lean_ctor_set(v_reuseFailAlloc_6128_, 5, v_M_6091_);
lean_ctor_set(v_reuseFailAlloc_6128_, 6, v_L_6092_);
lean_ctor_set(v_reuseFailAlloc_6128_, 7, v_d_6093_);
lean_ctor_set(v_reuseFailAlloc_6128_, 8, v_Q_6094_);
lean_ctor_set(v_reuseFailAlloc_6128_, 9, v_q_6095_);
lean_ctor_set(v_reuseFailAlloc_6128_, 10, v_w_6096_);
lean_ctor_set(v_reuseFailAlloc_6128_, 11, v_W_6097_);
lean_ctor_set(v_reuseFailAlloc_6128_, 12, v_E_6098_);
lean_ctor_set(v_reuseFailAlloc_6128_, 13, v_e_6099_);
lean_ctor_set(v_reuseFailAlloc_6128_, 14, v_c_6100_);
lean_ctor_set(v_reuseFailAlloc_6128_, 15, v_F_6101_);
lean_ctor_set(v_reuseFailAlloc_6128_, 16, v_a_6102_);
lean_ctor_set(v_reuseFailAlloc_6128_, 17, v_b_6103_);
lean_ctor_set(v_reuseFailAlloc_6128_, 18, v_B_6104_);
lean_ctor_set(v_reuseFailAlloc_6128_, 19, v_h_6105_);
lean_ctor_set(v_reuseFailAlloc_6128_, 20, v_K_6106_);
lean_ctor_set(v_reuseFailAlloc_6128_, 21, v_k_6107_);
lean_ctor_set(v_reuseFailAlloc_6128_, 22, v_H_6108_);
lean_ctor_set(v_reuseFailAlloc_6128_, 23, v_m_6109_);
lean_ctor_set(v_reuseFailAlloc_6128_, 24, v_s_6110_);
lean_ctor_set(v_reuseFailAlloc_6128_, 25, v_S_6111_);
lean_ctor_set(v_reuseFailAlloc_6128_, 26, v_A_6112_);
lean_ctor_set(v_reuseFailAlloc_6128_, 27, v_n_6113_);
lean_ctor_set(v_reuseFailAlloc_6128_, 28, v_N_6114_);
lean_ctor_set(v_reuseFailAlloc_6128_, 29, v_V_6115_);
lean_ctor_set(v_reuseFailAlloc_6128_, 30, v___x_6125_);
lean_ctor_set(v_reuseFailAlloc_6128_, 31, v_zabbrev_6116_);
lean_ctor_set(v_reuseFailAlloc_6128_, 32, v_v_6117_);
lean_ctor_set(v_reuseFailAlloc_6128_, 33, v_O_6118_);
lean_ctor_set(v_reuseFailAlloc_6128_, 34, v_X_6119_);
lean_ctor_set(v_reuseFailAlloc_6128_, 35, v_x_6120_);
lean_ctor_set(v_reuseFailAlloc_6128_, 36, v_Z_6121_);
v___x_6127_ = v_reuseFailAlloc_6128_;
goto v_reusejp_6126_;
}
v_reusejp_6126_:
{
return v___x_6127_;
}
}
}
}
case 31:
{
lean_object* v_G_6131_; lean_object* v_y_6132_; lean_object* v_u_6133_; lean_object* v_Y_6134_; lean_object* v_D_6135_; lean_object* v_M_6136_; lean_object* v_L_6137_; lean_object* v_d_6138_; lean_object* v_Q_6139_; lean_object* v_q_6140_; lean_object* v_w_6141_; lean_object* v_W_6142_; lean_object* v_E_6143_; lean_object* v_e_6144_; lean_object* v_c_6145_; lean_object* v_F_6146_; lean_object* v_a_6147_; lean_object* v_b_6148_; lean_object* v_B_6149_; lean_object* v_h_6150_; lean_object* v_K_6151_; lean_object* v_k_6152_; lean_object* v_H_6153_; lean_object* v_m_6154_; lean_object* v_s_6155_; lean_object* v_S_6156_; lean_object* v_A_6157_; lean_object* v_n_6158_; lean_object* v_N_6159_; lean_object* v_V_6160_; lean_object* v_z_6161_; lean_object* v_zabbrev_6162_; lean_object* v_O_6163_; lean_object* v_X_6164_; lean_object* v_x_6165_; lean_object* v_Z_6166_; lean_object* v___x_6168_; uint8_t v_isShared_6169_; uint8_t v_isSharedCheck_6174_; 
lean_dec_ref_known(v_modifier_4520_, 0);
v_G_6131_ = lean_ctor_get(v_date_4519_, 0);
v_y_6132_ = lean_ctor_get(v_date_4519_, 1);
v_u_6133_ = lean_ctor_get(v_date_4519_, 2);
v_Y_6134_ = lean_ctor_get(v_date_4519_, 3);
v_D_6135_ = lean_ctor_get(v_date_4519_, 4);
v_M_6136_ = lean_ctor_get(v_date_4519_, 5);
v_L_6137_ = lean_ctor_get(v_date_4519_, 6);
v_d_6138_ = lean_ctor_get(v_date_4519_, 7);
v_Q_6139_ = lean_ctor_get(v_date_4519_, 8);
v_q_6140_ = lean_ctor_get(v_date_4519_, 9);
v_w_6141_ = lean_ctor_get(v_date_4519_, 10);
v_W_6142_ = lean_ctor_get(v_date_4519_, 11);
v_E_6143_ = lean_ctor_get(v_date_4519_, 12);
v_e_6144_ = lean_ctor_get(v_date_4519_, 13);
v_c_6145_ = lean_ctor_get(v_date_4519_, 14);
v_F_6146_ = lean_ctor_get(v_date_4519_, 15);
v_a_6147_ = lean_ctor_get(v_date_4519_, 16);
v_b_6148_ = lean_ctor_get(v_date_4519_, 17);
v_B_6149_ = lean_ctor_get(v_date_4519_, 18);
v_h_6150_ = lean_ctor_get(v_date_4519_, 19);
v_K_6151_ = lean_ctor_get(v_date_4519_, 20);
v_k_6152_ = lean_ctor_get(v_date_4519_, 21);
v_H_6153_ = lean_ctor_get(v_date_4519_, 22);
v_m_6154_ = lean_ctor_get(v_date_4519_, 23);
v_s_6155_ = lean_ctor_get(v_date_4519_, 24);
v_S_6156_ = lean_ctor_get(v_date_4519_, 25);
v_A_6157_ = lean_ctor_get(v_date_4519_, 26);
v_n_6158_ = lean_ctor_get(v_date_4519_, 27);
v_N_6159_ = lean_ctor_get(v_date_4519_, 28);
v_V_6160_ = lean_ctor_get(v_date_4519_, 29);
v_z_6161_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_6162_ = lean_ctor_get(v_date_4519_, 31);
v_O_6163_ = lean_ctor_get(v_date_4519_, 33);
v_X_6164_ = lean_ctor_get(v_date_4519_, 34);
v_x_6165_ = lean_ctor_get(v_date_4519_, 35);
v_Z_6166_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_6174_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_6174_ == 0)
{
lean_object* v_unused_6175_; 
v_unused_6175_ = lean_ctor_get(v_date_4519_, 32);
lean_dec(v_unused_6175_);
v___x_6168_ = v_date_4519_;
v_isShared_6169_ = v_isSharedCheck_6174_;
goto v_resetjp_6167_;
}
else
{
lean_inc(v_Z_6166_);
lean_inc(v_x_6165_);
lean_inc(v_X_6164_);
lean_inc(v_O_6163_);
lean_inc(v_zabbrev_6162_);
lean_inc(v_z_6161_);
lean_inc(v_V_6160_);
lean_inc(v_N_6159_);
lean_inc(v_n_6158_);
lean_inc(v_A_6157_);
lean_inc(v_S_6156_);
lean_inc(v_s_6155_);
lean_inc(v_m_6154_);
lean_inc(v_H_6153_);
lean_inc(v_k_6152_);
lean_inc(v_K_6151_);
lean_inc(v_h_6150_);
lean_inc(v_B_6149_);
lean_inc(v_b_6148_);
lean_inc(v_a_6147_);
lean_inc(v_F_6146_);
lean_inc(v_c_6145_);
lean_inc(v_e_6144_);
lean_inc(v_E_6143_);
lean_inc(v_W_6142_);
lean_inc(v_w_6141_);
lean_inc(v_q_6140_);
lean_inc(v_Q_6139_);
lean_inc(v_d_6138_);
lean_inc(v_L_6137_);
lean_inc(v_M_6136_);
lean_inc(v_D_6135_);
lean_inc(v_Y_6134_);
lean_inc(v_u_6133_);
lean_inc(v_y_6132_);
lean_inc(v_G_6131_);
lean_dec(v_date_4519_);
v___x_6168_ = lean_box(0);
v_isShared_6169_ = v_isSharedCheck_6174_;
goto v_resetjp_6167_;
}
v_resetjp_6167_:
{
lean_object* v___x_6170_; lean_object* v___x_6172_; 
v___x_6170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6170_, 0, v_data_4521_);
if (v_isShared_6169_ == 0)
{
lean_ctor_set(v___x_6168_, 32, v___x_6170_);
v___x_6172_ = v___x_6168_;
goto v_reusejp_6171_;
}
else
{
lean_object* v_reuseFailAlloc_6173_; 
v_reuseFailAlloc_6173_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6173_, 0, v_G_6131_);
lean_ctor_set(v_reuseFailAlloc_6173_, 1, v_y_6132_);
lean_ctor_set(v_reuseFailAlloc_6173_, 2, v_u_6133_);
lean_ctor_set(v_reuseFailAlloc_6173_, 3, v_Y_6134_);
lean_ctor_set(v_reuseFailAlloc_6173_, 4, v_D_6135_);
lean_ctor_set(v_reuseFailAlloc_6173_, 5, v_M_6136_);
lean_ctor_set(v_reuseFailAlloc_6173_, 6, v_L_6137_);
lean_ctor_set(v_reuseFailAlloc_6173_, 7, v_d_6138_);
lean_ctor_set(v_reuseFailAlloc_6173_, 8, v_Q_6139_);
lean_ctor_set(v_reuseFailAlloc_6173_, 9, v_q_6140_);
lean_ctor_set(v_reuseFailAlloc_6173_, 10, v_w_6141_);
lean_ctor_set(v_reuseFailAlloc_6173_, 11, v_W_6142_);
lean_ctor_set(v_reuseFailAlloc_6173_, 12, v_E_6143_);
lean_ctor_set(v_reuseFailAlloc_6173_, 13, v_e_6144_);
lean_ctor_set(v_reuseFailAlloc_6173_, 14, v_c_6145_);
lean_ctor_set(v_reuseFailAlloc_6173_, 15, v_F_6146_);
lean_ctor_set(v_reuseFailAlloc_6173_, 16, v_a_6147_);
lean_ctor_set(v_reuseFailAlloc_6173_, 17, v_b_6148_);
lean_ctor_set(v_reuseFailAlloc_6173_, 18, v_B_6149_);
lean_ctor_set(v_reuseFailAlloc_6173_, 19, v_h_6150_);
lean_ctor_set(v_reuseFailAlloc_6173_, 20, v_K_6151_);
lean_ctor_set(v_reuseFailAlloc_6173_, 21, v_k_6152_);
lean_ctor_set(v_reuseFailAlloc_6173_, 22, v_H_6153_);
lean_ctor_set(v_reuseFailAlloc_6173_, 23, v_m_6154_);
lean_ctor_set(v_reuseFailAlloc_6173_, 24, v_s_6155_);
lean_ctor_set(v_reuseFailAlloc_6173_, 25, v_S_6156_);
lean_ctor_set(v_reuseFailAlloc_6173_, 26, v_A_6157_);
lean_ctor_set(v_reuseFailAlloc_6173_, 27, v_n_6158_);
lean_ctor_set(v_reuseFailAlloc_6173_, 28, v_N_6159_);
lean_ctor_set(v_reuseFailAlloc_6173_, 29, v_V_6160_);
lean_ctor_set(v_reuseFailAlloc_6173_, 30, v_z_6161_);
lean_ctor_set(v_reuseFailAlloc_6173_, 31, v_zabbrev_6162_);
lean_ctor_set(v_reuseFailAlloc_6173_, 32, v___x_6170_);
lean_ctor_set(v_reuseFailAlloc_6173_, 33, v_O_6163_);
lean_ctor_set(v_reuseFailAlloc_6173_, 34, v_X_6164_);
lean_ctor_set(v_reuseFailAlloc_6173_, 35, v_x_6165_);
lean_ctor_set(v_reuseFailAlloc_6173_, 36, v_Z_6166_);
v___x_6172_ = v_reuseFailAlloc_6173_;
goto v_reusejp_6171_;
}
v_reusejp_6171_:
{
return v___x_6172_;
}
}
}
case 32:
{
lean_object* v_G_6176_; lean_object* v_y_6177_; lean_object* v_u_6178_; lean_object* v_Y_6179_; lean_object* v_D_6180_; lean_object* v_M_6181_; lean_object* v_L_6182_; lean_object* v_d_6183_; lean_object* v_Q_6184_; lean_object* v_q_6185_; lean_object* v_w_6186_; lean_object* v_W_6187_; lean_object* v_E_6188_; lean_object* v_e_6189_; lean_object* v_c_6190_; lean_object* v_F_6191_; lean_object* v_a_6192_; lean_object* v_b_6193_; lean_object* v_B_6194_; lean_object* v_h_6195_; lean_object* v_K_6196_; lean_object* v_k_6197_; lean_object* v_H_6198_; lean_object* v_m_6199_; lean_object* v_s_6200_; lean_object* v_S_6201_; lean_object* v_A_6202_; lean_object* v_n_6203_; lean_object* v_N_6204_; lean_object* v_V_6205_; lean_object* v_z_6206_; lean_object* v_zabbrev_6207_; lean_object* v_v_6208_; lean_object* v_X_6209_; lean_object* v_x_6210_; lean_object* v_Z_6211_; lean_object* v___x_6213_; uint8_t v_isShared_6214_; uint8_t v_isSharedCheck_6219_; 
lean_dec_ref_known(v_modifier_4520_, 0);
v_G_6176_ = lean_ctor_get(v_date_4519_, 0);
v_y_6177_ = lean_ctor_get(v_date_4519_, 1);
v_u_6178_ = lean_ctor_get(v_date_4519_, 2);
v_Y_6179_ = lean_ctor_get(v_date_4519_, 3);
v_D_6180_ = lean_ctor_get(v_date_4519_, 4);
v_M_6181_ = lean_ctor_get(v_date_4519_, 5);
v_L_6182_ = lean_ctor_get(v_date_4519_, 6);
v_d_6183_ = lean_ctor_get(v_date_4519_, 7);
v_Q_6184_ = lean_ctor_get(v_date_4519_, 8);
v_q_6185_ = lean_ctor_get(v_date_4519_, 9);
v_w_6186_ = lean_ctor_get(v_date_4519_, 10);
v_W_6187_ = lean_ctor_get(v_date_4519_, 11);
v_E_6188_ = lean_ctor_get(v_date_4519_, 12);
v_e_6189_ = lean_ctor_get(v_date_4519_, 13);
v_c_6190_ = lean_ctor_get(v_date_4519_, 14);
v_F_6191_ = lean_ctor_get(v_date_4519_, 15);
v_a_6192_ = lean_ctor_get(v_date_4519_, 16);
v_b_6193_ = lean_ctor_get(v_date_4519_, 17);
v_B_6194_ = lean_ctor_get(v_date_4519_, 18);
v_h_6195_ = lean_ctor_get(v_date_4519_, 19);
v_K_6196_ = lean_ctor_get(v_date_4519_, 20);
v_k_6197_ = lean_ctor_get(v_date_4519_, 21);
v_H_6198_ = lean_ctor_get(v_date_4519_, 22);
v_m_6199_ = lean_ctor_get(v_date_4519_, 23);
v_s_6200_ = lean_ctor_get(v_date_4519_, 24);
v_S_6201_ = lean_ctor_get(v_date_4519_, 25);
v_A_6202_ = lean_ctor_get(v_date_4519_, 26);
v_n_6203_ = lean_ctor_get(v_date_4519_, 27);
v_N_6204_ = lean_ctor_get(v_date_4519_, 28);
v_V_6205_ = lean_ctor_get(v_date_4519_, 29);
v_z_6206_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_6207_ = lean_ctor_get(v_date_4519_, 31);
v_v_6208_ = lean_ctor_get(v_date_4519_, 32);
v_X_6209_ = lean_ctor_get(v_date_4519_, 34);
v_x_6210_ = lean_ctor_get(v_date_4519_, 35);
v_Z_6211_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_6219_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_6219_ == 0)
{
lean_object* v_unused_6220_; 
v_unused_6220_ = lean_ctor_get(v_date_4519_, 33);
lean_dec(v_unused_6220_);
v___x_6213_ = v_date_4519_;
v_isShared_6214_ = v_isSharedCheck_6219_;
goto v_resetjp_6212_;
}
else
{
lean_inc(v_Z_6211_);
lean_inc(v_x_6210_);
lean_inc(v_X_6209_);
lean_inc(v_v_6208_);
lean_inc(v_zabbrev_6207_);
lean_inc(v_z_6206_);
lean_inc(v_V_6205_);
lean_inc(v_N_6204_);
lean_inc(v_n_6203_);
lean_inc(v_A_6202_);
lean_inc(v_S_6201_);
lean_inc(v_s_6200_);
lean_inc(v_m_6199_);
lean_inc(v_H_6198_);
lean_inc(v_k_6197_);
lean_inc(v_K_6196_);
lean_inc(v_h_6195_);
lean_inc(v_B_6194_);
lean_inc(v_b_6193_);
lean_inc(v_a_6192_);
lean_inc(v_F_6191_);
lean_inc(v_c_6190_);
lean_inc(v_e_6189_);
lean_inc(v_E_6188_);
lean_inc(v_W_6187_);
lean_inc(v_w_6186_);
lean_inc(v_q_6185_);
lean_inc(v_Q_6184_);
lean_inc(v_d_6183_);
lean_inc(v_L_6182_);
lean_inc(v_M_6181_);
lean_inc(v_D_6180_);
lean_inc(v_Y_6179_);
lean_inc(v_u_6178_);
lean_inc(v_y_6177_);
lean_inc(v_G_6176_);
lean_dec(v_date_4519_);
v___x_6213_ = lean_box(0);
v_isShared_6214_ = v_isSharedCheck_6219_;
goto v_resetjp_6212_;
}
v_resetjp_6212_:
{
lean_object* v___x_6215_; lean_object* v___x_6217_; 
v___x_6215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6215_, 0, v_data_4521_);
if (v_isShared_6214_ == 0)
{
lean_ctor_set(v___x_6213_, 33, v___x_6215_);
v___x_6217_ = v___x_6213_;
goto v_reusejp_6216_;
}
else
{
lean_object* v_reuseFailAlloc_6218_; 
v_reuseFailAlloc_6218_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6218_, 0, v_G_6176_);
lean_ctor_set(v_reuseFailAlloc_6218_, 1, v_y_6177_);
lean_ctor_set(v_reuseFailAlloc_6218_, 2, v_u_6178_);
lean_ctor_set(v_reuseFailAlloc_6218_, 3, v_Y_6179_);
lean_ctor_set(v_reuseFailAlloc_6218_, 4, v_D_6180_);
lean_ctor_set(v_reuseFailAlloc_6218_, 5, v_M_6181_);
lean_ctor_set(v_reuseFailAlloc_6218_, 6, v_L_6182_);
lean_ctor_set(v_reuseFailAlloc_6218_, 7, v_d_6183_);
lean_ctor_set(v_reuseFailAlloc_6218_, 8, v_Q_6184_);
lean_ctor_set(v_reuseFailAlloc_6218_, 9, v_q_6185_);
lean_ctor_set(v_reuseFailAlloc_6218_, 10, v_w_6186_);
lean_ctor_set(v_reuseFailAlloc_6218_, 11, v_W_6187_);
lean_ctor_set(v_reuseFailAlloc_6218_, 12, v_E_6188_);
lean_ctor_set(v_reuseFailAlloc_6218_, 13, v_e_6189_);
lean_ctor_set(v_reuseFailAlloc_6218_, 14, v_c_6190_);
lean_ctor_set(v_reuseFailAlloc_6218_, 15, v_F_6191_);
lean_ctor_set(v_reuseFailAlloc_6218_, 16, v_a_6192_);
lean_ctor_set(v_reuseFailAlloc_6218_, 17, v_b_6193_);
lean_ctor_set(v_reuseFailAlloc_6218_, 18, v_B_6194_);
lean_ctor_set(v_reuseFailAlloc_6218_, 19, v_h_6195_);
lean_ctor_set(v_reuseFailAlloc_6218_, 20, v_K_6196_);
lean_ctor_set(v_reuseFailAlloc_6218_, 21, v_k_6197_);
lean_ctor_set(v_reuseFailAlloc_6218_, 22, v_H_6198_);
lean_ctor_set(v_reuseFailAlloc_6218_, 23, v_m_6199_);
lean_ctor_set(v_reuseFailAlloc_6218_, 24, v_s_6200_);
lean_ctor_set(v_reuseFailAlloc_6218_, 25, v_S_6201_);
lean_ctor_set(v_reuseFailAlloc_6218_, 26, v_A_6202_);
lean_ctor_set(v_reuseFailAlloc_6218_, 27, v_n_6203_);
lean_ctor_set(v_reuseFailAlloc_6218_, 28, v_N_6204_);
lean_ctor_set(v_reuseFailAlloc_6218_, 29, v_V_6205_);
lean_ctor_set(v_reuseFailAlloc_6218_, 30, v_z_6206_);
lean_ctor_set(v_reuseFailAlloc_6218_, 31, v_zabbrev_6207_);
lean_ctor_set(v_reuseFailAlloc_6218_, 32, v_v_6208_);
lean_ctor_set(v_reuseFailAlloc_6218_, 33, v___x_6215_);
lean_ctor_set(v_reuseFailAlloc_6218_, 34, v_X_6209_);
lean_ctor_set(v_reuseFailAlloc_6218_, 35, v_x_6210_);
lean_ctor_set(v_reuseFailAlloc_6218_, 36, v_Z_6211_);
v___x_6217_ = v_reuseFailAlloc_6218_;
goto v_reusejp_6216_;
}
v_reusejp_6216_:
{
return v___x_6217_;
}
}
}
case 33:
{
lean_object* v_G_6221_; lean_object* v_y_6222_; lean_object* v_u_6223_; lean_object* v_Y_6224_; lean_object* v_D_6225_; lean_object* v_M_6226_; lean_object* v_L_6227_; lean_object* v_d_6228_; lean_object* v_Q_6229_; lean_object* v_q_6230_; lean_object* v_w_6231_; lean_object* v_W_6232_; lean_object* v_E_6233_; lean_object* v_e_6234_; lean_object* v_c_6235_; lean_object* v_F_6236_; lean_object* v_a_6237_; lean_object* v_b_6238_; lean_object* v_B_6239_; lean_object* v_h_6240_; lean_object* v_K_6241_; lean_object* v_k_6242_; lean_object* v_H_6243_; lean_object* v_m_6244_; lean_object* v_s_6245_; lean_object* v_S_6246_; lean_object* v_A_6247_; lean_object* v_n_6248_; lean_object* v_N_6249_; lean_object* v_V_6250_; lean_object* v_z_6251_; lean_object* v_zabbrev_6252_; lean_object* v_v_6253_; lean_object* v_O_6254_; lean_object* v_x_6255_; lean_object* v_Z_6256_; lean_object* v___x_6258_; uint8_t v_isShared_6259_; uint8_t v_isSharedCheck_6264_; 
lean_dec_ref_known(v_modifier_4520_, 0);
v_G_6221_ = lean_ctor_get(v_date_4519_, 0);
v_y_6222_ = lean_ctor_get(v_date_4519_, 1);
v_u_6223_ = lean_ctor_get(v_date_4519_, 2);
v_Y_6224_ = lean_ctor_get(v_date_4519_, 3);
v_D_6225_ = lean_ctor_get(v_date_4519_, 4);
v_M_6226_ = lean_ctor_get(v_date_4519_, 5);
v_L_6227_ = lean_ctor_get(v_date_4519_, 6);
v_d_6228_ = lean_ctor_get(v_date_4519_, 7);
v_Q_6229_ = lean_ctor_get(v_date_4519_, 8);
v_q_6230_ = lean_ctor_get(v_date_4519_, 9);
v_w_6231_ = lean_ctor_get(v_date_4519_, 10);
v_W_6232_ = lean_ctor_get(v_date_4519_, 11);
v_E_6233_ = lean_ctor_get(v_date_4519_, 12);
v_e_6234_ = lean_ctor_get(v_date_4519_, 13);
v_c_6235_ = lean_ctor_get(v_date_4519_, 14);
v_F_6236_ = lean_ctor_get(v_date_4519_, 15);
v_a_6237_ = lean_ctor_get(v_date_4519_, 16);
v_b_6238_ = lean_ctor_get(v_date_4519_, 17);
v_B_6239_ = lean_ctor_get(v_date_4519_, 18);
v_h_6240_ = lean_ctor_get(v_date_4519_, 19);
v_K_6241_ = lean_ctor_get(v_date_4519_, 20);
v_k_6242_ = lean_ctor_get(v_date_4519_, 21);
v_H_6243_ = lean_ctor_get(v_date_4519_, 22);
v_m_6244_ = lean_ctor_get(v_date_4519_, 23);
v_s_6245_ = lean_ctor_get(v_date_4519_, 24);
v_S_6246_ = lean_ctor_get(v_date_4519_, 25);
v_A_6247_ = lean_ctor_get(v_date_4519_, 26);
v_n_6248_ = lean_ctor_get(v_date_4519_, 27);
v_N_6249_ = lean_ctor_get(v_date_4519_, 28);
v_V_6250_ = lean_ctor_get(v_date_4519_, 29);
v_z_6251_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_6252_ = lean_ctor_get(v_date_4519_, 31);
v_v_6253_ = lean_ctor_get(v_date_4519_, 32);
v_O_6254_ = lean_ctor_get(v_date_4519_, 33);
v_x_6255_ = lean_ctor_get(v_date_4519_, 35);
v_Z_6256_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_6264_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_6264_ == 0)
{
lean_object* v_unused_6265_; 
v_unused_6265_ = lean_ctor_get(v_date_4519_, 34);
lean_dec(v_unused_6265_);
v___x_6258_ = v_date_4519_;
v_isShared_6259_ = v_isSharedCheck_6264_;
goto v_resetjp_6257_;
}
else
{
lean_inc(v_Z_6256_);
lean_inc(v_x_6255_);
lean_inc(v_O_6254_);
lean_inc(v_v_6253_);
lean_inc(v_zabbrev_6252_);
lean_inc(v_z_6251_);
lean_inc(v_V_6250_);
lean_inc(v_N_6249_);
lean_inc(v_n_6248_);
lean_inc(v_A_6247_);
lean_inc(v_S_6246_);
lean_inc(v_s_6245_);
lean_inc(v_m_6244_);
lean_inc(v_H_6243_);
lean_inc(v_k_6242_);
lean_inc(v_K_6241_);
lean_inc(v_h_6240_);
lean_inc(v_B_6239_);
lean_inc(v_b_6238_);
lean_inc(v_a_6237_);
lean_inc(v_F_6236_);
lean_inc(v_c_6235_);
lean_inc(v_e_6234_);
lean_inc(v_E_6233_);
lean_inc(v_W_6232_);
lean_inc(v_w_6231_);
lean_inc(v_q_6230_);
lean_inc(v_Q_6229_);
lean_inc(v_d_6228_);
lean_inc(v_L_6227_);
lean_inc(v_M_6226_);
lean_inc(v_D_6225_);
lean_inc(v_Y_6224_);
lean_inc(v_u_6223_);
lean_inc(v_y_6222_);
lean_inc(v_G_6221_);
lean_dec(v_date_4519_);
v___x_6258_ = lean_box(0);
v_isShared_6259_ = v_isSharedCheck_6264_;
goto v_resetjp_6257_;
}
v_resetjp_6257_:
{
lean_object* v___x_6260_; lean_object* v___x_6262_; 
v___x_6260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6260_, 0, v_data_4521_);
if (v_isShared_6259_ == 0)
{
lean_ctor_set(v___x_6258_, 34, v___x_6260_);
v___x_6262_ = v___x_6258_;
goto v_reusejp_6261_;
}
else
{
lean_object* v_reuseFailAlloc_6263_; 
v_reuseFailAlloc_6263_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6263_, 0, v_G_6221_);
lean_ctor_set(v_reuseFailAlloc_6263_, 1, v_y_6222_);
lean_ctor_set(v_reuseFailAlloc_6263_, 2, v_u_6223_);
lean_ctor_set(v_reuseFailAlloc_6263_, 3, v_Y_6224_);
lean_ctor_set(v_reuseFailAlloc_6263_, 4, v_D_6225_);
lean_ctor_set(v_reuseFailAlloc_6263_, 5, v_M_6226_);
lean_ctor_set(v_reuseFailAlloc_6263_, 6, v_L_6227_);
lean_ctor_set(v_reuseFailAlloc_6263_, 7, v_d_6228_);
lean_ctor_set(v_reuseFailAlloc_6263_, 8, v_Q_6229_);
lean_ctor_set(v_reuseFailAlloc_6263_, 9, v_q_6230_);
lean_ctor_set(v_reuseFailAlloc_6263_, 10, v_w_6231_);
lean_ctor_set(v_reuseFailAlloc_6263_, 11, v_W_6232_);
lean_ctor_set(v_reuseFailAlloc_6263_, 12, v_E_6233_);
lean_ctor_set(v_reuseFailAlloc_6263_, 13, v_e_6234_);
lean_ctor_set(v_reuseFailAlloc_6263_, 14, v_c_6235_);
lean_ctor_set(v_reuseFailAlloc_6263_, 15, v_F_6236_);
lean_ctor_set(v_reuseFailAlloc_6263_, 16, v_a_6237_);
lean_ctor_set(v_reuseFailAlloc_6263_, 17, v_b_6238_);
lean_ctor_set(v_reuseFailAlloc_6263_, 18, v_B_6239_);
lean_ctor_set(v_reuseFailAlloc_6263_, 19, v_h_6240_);
lean_ctor_set(v_reuseFailAlloc_6263_, 20, v_K_6241_);
lean_ctor_set(v_reuseFailAlloc_6263_, 21, v_k_6242_);
lean_ctor_set(v_reuseFailAlloc_6263_, 22, v_H_6243_);
lean_ctor_set(v_reuseFailAlloc_6263_, 23, v_m_6244_);
lean_ctor_set(v_reuseFailAlloc_6263_, 24, v_s_6245_);
lean_ctor_set(v_reuseFailAlloc_6263_, 25, v_S_6246_);
lean_ctor_set(v_reuseFailAlloc_6263_, 26, v_A_6247_);
lean_ctor_set(v_reuseFailAlloc_6263_, 27, v_n_6248_);
lean_ctor_set(v_reuseFailAlloc_6263_, 28, v_N_6249_);
lean_ctor_set(v_reuseFailAlloc_6263_, 29, v_V_6250_);
lean_ctor_set(v_reuseFailAlloc_6263_, 30, v_z_6251_);
lean_ctor_set(v_reuseFailAlloc_6263_, 31, v_zabbrev_6252_);
lean_ctor_set(v_reuseFailAlloc_6263_, 32, v_v_6253_);
lean_ctor_set(v_reuseFailAlloc_6263_, 33, v_O_6254_);
lean_ctor_set(v_reuseFailAlloc_6263_, 34, v___x_6260_);
lean_ctor_set(v_reuseFailAlloc_6263_, 35, v_x_6255_);
lean_ctor_set(v_reuseFailAlloc_6263_, 36, v_Z_6256_);
v___x_6262_ = v_reuseFailAlloc_6263_;
goto v_reusejp_6261_;
}
v_reusejp_6261_:
{
return v___x_6262_;
}
}
}
case 34:
{
lean_object* v_G_6266_; lean_object* v_y_6267_; lean_object* v_u_6268_; lean_object* v_Y_6269_; lean_object* v_D_6270_; lean_object* v_M_6271_; lean_object* v_L_6272_; lean_object* v_d_6273_; lean_object* v_Q_6274_; lean_object* v_q_6275_; lean_object* v_w_6276_; lean_object* v_W_6277_; lean_object* v_E_6278_; lean_object* v_e_6279_; lean_object* v_c_6280_; lean_object* v_F_6281_; lean_object* v_a_6282_; lean_object* v_b_6283_; lean_object* v_B_6284_; lean_object* v_h_6285_; lean_object* v_K_6286_; lean_object* v_k_6287_; lean_object* v_H_6288_; lean_object* v_m_6289_; lean_object* v_s_6290_; lean_object* v_S_6291_; lean_object* v_A_6292_; lean_object* v_n_6293_; lean_object* v_N_6294_; lean_object* v_V_6295_; lean_object* v_z_6296_; lean_object* v_zabbrev_6297_; lean_object* v_v_6298_; lean_object* v_O_6299_; lean_object* v_X_6300_; lean_object* v_Z_6301_; lean_object* v___x_6303_; uint8_t v_isShared_6304_; uint8_t v_isSharedCheck_6309_; 
lean_dec_ref_known(v_modifier_4520_, 0);
v_G_6266_ = lean_ctor_get(v_date_4519_, 0);
v_y_6267_ = lean_ctor_get(v_date_4519_, 1);
v_u_6268_ = lean_ctor_get(v_date_4519_, 2);
v_Y_6269_ = lean_ctor_get(v_date_4519_, 3);
v_D_6270_ = lean_ctor_get(v_date_4519_, 4);
v_M_6271_ = lean_ctor_get(v_date_4519_, 5);
v_L_6272_ = lean_ctor_get(v_date_4519_, 6);
v_d_6273_ = lean_ctor_get(v_date_4519_, 7);
v_Q_6274_ = lean_ctor_get(v_date_4519_, 8);
v_q_6275_ = lean_ctor_get(v_date_4519_, 9);
v_w_6276_ = lean_ctor_get(v_date_4519_, 10);
v_W_6277_ = lean_ctor_get(v_date_4519_, 11);
v_E_6278_ = lean_ctor_get(v_date_4519_, 12);
v_e_6279_ = lean_ctor_get(v_date_4519_, 13);
v_c_6280_ = lean_ctor_get(v_date_4519_, 14);
v_F_6281_ = lean_ctor_get(v_date_4519_, 15);
v_a_6282_ = lean_ctor_get(v_date_4519_, 16);
v_b_6283_ = lean_ctor_get(v_date_4519_, 17);
v_B_6284_ = lean_ctor_get(v_date_4519_, 18);
v_h_6285_ = lean_ctor_get(v_date_4519_, 19);
v_K_6286_ = lean_ctor_get(v_date_4519_, 20);
v_k_6287_ = lean_ctor_get(v_date_4519_, 21);
v_H_6288_ = lean_ctor_get(v_date_4519_, 22);
v_m_6289_ = lean_ctor_get(v_date_4519_, 23);
v_s_6290_ = lean_ctor_get(v_date_4519_, 24);
v_S_6291_ = lean_ctor_get(v_date_4519_, 25);
v_A_6292_ = lean_ctor_get(v_date_4519_, 26);
v_n_6293_ = lean_ctor_get(v_date_4519_, 27);
v_N_6294_ = lean_ctor_get(v_date_4519_, 28);
v_V_6295_ = lean_ctor_get(v_date_4519_, 29);
v_z_6296_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_6297_ = lean_ctor_get(v_date_4519_, 31);
v_v_6298_ = lean_ctor_get(v_date_4519_, 32);
v_O_6299_ = lean_ctor_get(v_date_4519_, 33);
v_X_6300_ = lean_ctor_get(v_date_4519_, 34);
v_Z_6301_ = lean_ctor_get(v_date_4519_, 36);
v_isSharedCheck_6309_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_6309_ == 0)
{
lean_object* v_unused_6310_; 
v_unused_6310_ = lean_ctor_get(v_date_4519_, 35);
lean_dec(v_unused_6310_);
v___x_6303_ = v_date_4519_;
v_isShared_6304_ = v_isSharedCheck_6309_;
goto v_resetjp_6302_;
}
else
{
lean_inc(v_Z_6301_);
lean_inc(v_X_6300_);
lean_inc(v_O_6299_);
lean_inc(v_v_6298_);
lean_inc(v_zabbrev_6297_);
lean_inc(v_z_6296_);
lean_inc(v_V_6295_);
lean_inc(v_N_6294_);
lean_inc(v_n_6293_);
lean_inc(v_A_6292_);
lean_inc(v_S_6291_);
lean_inc(v_s_6290_);
lean_inc(v_m_6289_);
lean_inc(v_H_6288_);
lean_inc(v_k_6287_);
lean_inc(v_K_6286_);
lean_inc(v_h_6285_);
lean_inc(v_B_6284_);
lean_inc(v_b_6283_);
lean_inc(v_a_6282_);
lean_inc(v_F_6281_);
lean_inc(v_c_6280_);
lean_inc(v_e_6279_);
lean_inc(v_E_6278_);
lean_inc(v_W_6277_);
lean_inc(v_w_6276_);
lean_inc(v_q_6275_);
lean_inc(v_Q_6274_);
lean_inc(v_d_6273_);
lean_inc(v_L_6272_);
lean_inc(v_M_6271_);
lean_inc(v_D_6270_);
lean_inc(v_Y_6269_);
lean_inc(v_u_6268_);
lean_inc(v_y_6267_);
lean_inc(v_G_6266_);
lean_dec(v_date_4519_);
v___x_6303_ = lean_box(0);
v_isShared_6304_ = v_isSharedCheck_6309_;
goto v_resetjp_6302_;
}
v_resetjp_6302_:
{
lean_object* v___x_6305_; lean_object* v___x_6307_; 
v___x_6305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6305_, 0, v_data_4521_);
if (v_isShared_6304_ == 0)
{
lean_ctor_set(v___x_6303_, 35, v___x_6305_);
v___x_6307_ = v___x_6303_;
goto v_reusejp_6306_;
}
else
{
lean_object* v_reuseFailAlloc_6308_; 
v_reuseFailAlloc_6308_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6308_, 0, v_G_6266_);
lean_ctor_set(v_reuseFailAlloc_6308_, 1, v_y_6267_);
lean_ctor_set(v_reuseFailAlloc_6308_, 2, v_u_6268_);
lean_ctor_set(v_reuseFailAlloc_6308_, 3, v_Y_6269_);
lean_ctor_set(v_reuseFailAlloc_6308_, 4, v_D_6270_);
lean_ctor_set(v_reuseFailAlloc_6308_, 5, v_M_6271_);
lean_ctor_set(v_reuseFailAlloc_6308_, 6, v_L_6272_);
lean_ctor_set(v_reuseFailAlloc_6308_, 7, v_d_6273_);
lean_ctor_set(v_reuseFailAlloc_6308_, 8, v_Q_6274_);
lean_ctor_set(v_reuseFailAlloc_6308_, 9, v_q_6275_);
lean_ctor_set(v_reuseFailAlloc_6308_, 10, v_w_6276_);
lean_ctor_set(v_reuseFailAlloc_6308_, 11, v_W_6277_);
lean_ctor_set(v_reuseFailAlloc_6308_, 12, v_E_6278_);
lean_ctor_set(v_reuseFailAlloc_6308_, 13, v_e_6279_);
lean_ctor_set(v_reuseFailAlloc_6308_, 14, v_c_6280_);
lean_ctor_set(v_reuseFailAlloc_6308_, 15, v_F_6281_);
lean_ctor_set(v_reuseFailAlloc_6308_, 16, v_a_6282_);
lean_ctor_set(v_reuseFailAlloc_6308_, 17, v_b_6283_);
lean_ctor_set(v_reuseFailAlloc_6308_, 18, v_B_6284_);
lean_ctor_set(v_reuseFailAlloc_6308_, 19, v_h_6285_);
lean_ctor_set(v_reuseFailAlloc_6308_, 20, v_K_6286_);
lean_ctor_set(v_reuseFailAlloc_6308_, 21, v_k_6287_);
lean_ctor_set(v_reuseFailAlloc_6308_, 22, v_H_6288_);
lean_ctor_set(v_reuseFailAlloc_6308_, 23, v_m_6289_);
lean_ctor_set(v_reuseFailAlloc_6308_, 24, v_s_6290_);
lean_ctor_set(v_reuseFailAlloc_6308_, 25, v_S_6291_);
lean_ctor_set(v_reuseFailAlloc_6308_, 26, v_A_6292_);
lean_ctor_set(v_reuseFailAlloc_6308_, 27, v_n_6293_);
lean_ctor_set(v_reuseFailAlloc_6308_, 28, v_N_6294_);
lean_ctor_set(v_reuseFailAlloc_6308_, 29, v_V_6295_);
lean_ctor_set(v_reuseFailAlloc_6308_, 30, v_z_6296_);
lean_ctor_set(v_reuseFailAlloc_6308_, 31, v_zabbrev_6297_);
lean_ctor_set(v_reuseFailAlloc_6308_, 32, v_v_6298_);
lean_ctor_set(v_reuseFailAlloc_6308_, 33, v_O_6299_);
lean_ctor_set(v_reuseFailAlloc_6308_, 34, v_X_6300_);
lean_ctor_set(v_reuseFailAlloc_6308_, 35, v___x_6305_);
lean_ctor_set(v_reuseFailAlloc_6308_, 36, v_Z_6301_);
v___x_6307_ = v_reuseFailAlloc_6308_;
goto v_reusejp_6306_;
}
v_reusejp_6306_:
{
return v___x_6307_;
}
}
}
default: 
{
lean_object* v_G_6311_; lean_object* v_y_6312_; lean_object* v_u_6313_; lean_object* v_Y_6314_; lean_object* v_D_6315_; lean_object* v_M_6316_; lean_object* v_L_6317_; lean_object* v_d_6318_; lean_object* v_Q_6319_; lean_object* v_q_6320_; lean_object* v_w_6321_; lean_object* v_W_6322_; lean_object* v_E_6323_; lean_object* v_e_6324_; lean_object* v_c_6325_; lean_object* v_F_6326_; lean_object* v_a_6327_; lean_object* v_b_6328_; lean_object* v_B_6329_; lean_object* v_h_6330_; lean_object* v_K_6331_; lean_object* v_k_6332_; lean_object* v_H_6333_; lean_object* v_m_6334_; lean_object* v_s_6335_; lean_object* v_S_6336_; lean_object* v_A_6337_; lean_object* v_n_6338_; lean_object* v_N_6339_; lean_object* v_V_6340_; lean_object* v_z_6341_; lean_object* v_zabbrev_6342_; lean_object* v_v_6343_; lean_object* v_O_6344_; lean_object* v_X_6345_; lean_object* v_x_6346_; lean_object* v___x_6348_; uint8_t v_isShared_6349_; uint8_t v_isSharedCheck_6354_; 
lean_dec_ref_known(v_modifier_4520_, 0);
v_G_6311_ = lean_ctor_get(v_date_4519_, 0);
v_y_6312_ = lean_ctor_get(v_date_4519_, 1);
v_u_6313_ = lean_ctor_get(v_date_4519_, 2);
v_Y_6314_ = lean_ctor_get(v_date_4519_, 3);
v_D_6315_ = lean_ctor_get(v_date_4519_, 4);
v_M_6316_ = lean_ctor_get(v_date_4519_, 5);
v_L_6317_ = lean_ctor_get(v_date_4519_, 6);
v_d_6318_ = lean_ctor_get(v_date_4519_, 7);
v_Q_6319_ = lean_ctor_get(v_date_4519_, 8);
v_q_6320_ = lean_ctor_get(v_date_4519_, 9);
v_w_6321_ = lean_ctor_get(v_date_4519_, 10);
v_W_6322_ = lean_ctor_get(v_date_4519_, 11);
v_E_6323_ = lean_ctor_get(v_date_4519_, 12);
v_e_6324_ = lean_ctor_get(v_date_4519_, 13);
v_c_6325_ = lean_ctor_get(v_date_4519_, 14);
v_F_6326_ = lean_ctor_get(v_date_4519_, 15);
v_a_6327_ = lean_ctor_get(v_date_4519_, 16);
v_b_6328_ = lean_ctor_get(v_date_4519_, 17);
v_B_6329_ = lean_ctor_get(v_date_4519_, 18);
v_h_6330_ = lean_ctor_get(v_date_4519_, 19);
v_K_6331_ = lean_ctor_get(v_date_4519_, 20);
v_k_6332_ = lean_ctor_get(v_date_4519_, 21);
v_H_6333_ = lean_ctor_get(v_date_4519_, 22);
v_m_6334_ = lean_ctor_get(v_date_4519_, 23);
v_s_6335_ = lean_ctor_get(v_date_4519_, 24);
v_S_6336_ = lean_ctor_get(v_date_4519_, 25);
v_A_6337_ = lean_ctor_get(v_date_4519_, 26);
v_n_6338_ = lean_ctor_get(v_date_4519_, 27);
v_N_6339_ = lean_ctor_get(v_date_4519_, 28);
v_V_6340_ = lean_ctor_get(v_date_4519_, 29);
v_z_6341_ = lean_ctor_get(v_date_4519_, 30);
v_zabbrev_6342_ = lean_ctor_get(v_date_4519_, 31);
v_v_6343_ = lean_ctor_get(v_date_4519_, 32);
v_O_6344_ = lean_ctor_get(v_date_4519_, 33);
v_X_6345_ = lean_ctor_get(v_date_4519_, 34);
v_x_6346_ = lean_ctor_get(v_date_4519_, 35);
v_isSharedCheck_6354_ = !lean_is_exclusive(v_date_4519_);
if (v_isSharedCheck_6354_ == 0)
{
lean_object* v_unused_6355_; 
v_unused_6355_ = lean_ctor_get(v_date_4519_, 36);
lean_dec(v_unused_6355_);
v___x_6348_ = v_date_4519_;
v_isShared_6349_ = v_isSharedCheck_6354_;
goto v_resetjp_6347_;
}
else
{
lean_inc(v_x_6346_);
lean_inc(v_X_6345_);
lean_inc(v_O_6344_);
lean_inc(v_v_6343_);
lean_inc(v_zabbrev_6342_);
lean_inc(v_z_6341_);
lean_inc(v_V_6340_);
lean_inc(v_N_6339_);
lean_inc(v_n_6338_);
lean_inc(v_A_6337_);
lean_inc(v_S_6336_);
lean_inc(v_s_6335_);
lean_inc(v_m_6334_);
lean_inc(v_H_6333_);
lean_inc(v_k_6332_);
lean_inc(v_K_6331_);
lean_inc(v_h_6330_);
lean_inc(v_B_6329_);
lean_inc(v_b_6328_);
lean_inc(v_a_6327_);
lean_inc(v_F_6326_);
lean_inc(v_c_6325_);
lean_inc(v_e_6324_);
lean_inc(v_E_6323_);
lean_inc(v_W_6322_);
lean_inc(v_w_6321_);
lean_inc(v_q_6320_);
lean_inc(v_Q_6319_);
lean_inc(v_d_6318_);
lean_inc(v_L_6317_);
lean_inc(v_M_6316_);
lean_inc(v_D_6315_);
lean_inc(v_Y_6314_);
lean_inc(v_u_6313_);
lean_inc(v_y_6312_);
lean_inc(v_G_6311_);
lean_dec(v_date_4519_);
v___x_6348_ = lean_box(0);
v_isShared_6349_ = v_isSharedCheck_6354_;
goto v_resetjp_6347_;
}
v_resetjp_6347_:
{
lean_object* v___x_6350_; lean_object* v___x_6352_; 
v___x_6350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6350_, 0, v_data_4521_);
if (v_isShared_6349_ == 0)
{
lean_ctor_set(v___x_6348_, 36, v___x_6350_);
v___x_6352_ = v___x_6348_;
goto v_reusejp_6351_;
}
else
{
lean_object* v_reuseFailAlloc_6353_; 
v_reuseFailAlloc_6353_ = lean_alloc_ctor(0, 37, 0);
lean_ctor_set(v_reuseFailAlloc_6353_, 0, v_G_6311_);
lean_ctor_set(v_reuseFailAlloc_6353_, 1, v_y_6312_);
lean_ctor_set(v_reuseFailAlloc_6353_, 2, v_u_6313_);
lean_ctor_set(v_reuseFailAlloc_6353_, 3, v_Y_6314_);
lean_ctor_set(v_reuseFailAlloc_6353_, 4, v_D_6315_);
lean_ctor_set(v_reuseFailAlloc_6353_, 5, v_M_6316_);
lean_ctor_set(v_reuseFailAlloc_6353_, 6, v_L_6317_);
lean_ctor_set(v_reuseFailAlloc_6353_, 7, v_d_6318_);
lean_ctor_set(v_reuseFailAlloc_6353_, 8, v_Q_6319_);
lean_ctor_set(v_reuseFailAlloc_6353_, 9, v_q_6320_);
lean_ctor_set(v_reuseFailAlloc_6353_, 10, v_w_6321_);
lean_ctor_set(v_reuseFailAlloc_6353_, 11, v_W_6322_);
lean_ctor_set(v_reuseFailAlloc_6353_, 12, v_E_6323_);
lean_ctor_set(v_reuseFailAlloc_6353_, 13, v_e_6324_);
lean_ctor_set(v_reuseFailAlloc_6353_, 14, v_c_6325_);
lean_ctor_set(v_reuseFailAlloc_6353_, 15, v_F_6326_);
lean_ctor_set(v_reuseFailAlloc_6353_, 16, v_a_6327_);
lean_ctor_set(v_reuseFailAlloc_6353_, 17, v_b_6328_);
lean_ctor_set(v_reuseFailAlloc_6353_, 18, v_B_6329_);
lean_ctor_set(v_reuseFailAlloc_6353_, 19, v_h_6330_);
lean_ctor_set(v_reuseFailAlloc_6353_, 20, v_K_6331_);
lean_ctor_set(v_reuseFailAlloc_6353_, 21, v_k_6332_);
lean_ctor_set(v_reuseFailAlloc_6353_, 22, v_H_6333_);
lean_ctor_set(v_reuseFailAlloc_6353_, 23, v_m_6334_);
lean_ctor_set(v_reuseFailAlloc_6353_, 24, v_s_6335_);
lean_ctor_set(v_reuseFailAlloc_6353_, 25, v_S_6336_);
lean_ctor_set(v_reuseFailAlloc_6353_, 26, v_A_6337_);
lean_ctor_set(v_reuseFailAlloc_6353_, 27, v_n_6338_);
lean_ctor_set(v_reuseFailAlloc_6353_, 28, v_N_6339_);
lean_ctor_set(v_reuseFailAlloc_6353_, 29, v_V_6340_);
lean_ctor_set(v_reuseFailAlloc_6353_, 30, v_z_6341_);
lean_ctor_set(v_reuseFailAlloc_6353_, 31, v_zabbrev_6342_);
lean_ctor_set(v_reuseFailAlloc_6353_, 32, v_v_6343_);
lean_ctor_set(v_reuseFailAlloc_6353_, 33, v_O_6344_);
lean_ctor_set(v_reuseFailAlloc_6353_, 34, v_X_6345_);
lean_ctor_set(v_reuseFailAlloc_6353_, 35, v_x_6346_);
lean_ctor_set(v_reuseFailAlloc_6353_, 36, v___x_6350_);
v___x_6352_ = v_reuseFailAlloc_6353_;
goto v_reusejp_6351_;
}
v_reusejp_6351_:
{
return v___x_6352_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra(lean_object* v_year_6356_, uint8_t v_x_6357_){
_start:
{
if (v_x_6357_ == 0)
{
lean_object* v___x_6358_; lean_object* v___x_6359_; lean_object* v___x_6360_; 
v___x_6358_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6359_ = lean_int_add(v_year_6356_, v___x_6358_);
v___x_6360_ = lean_int_neg(v___x_6359_);
lean_dec(v___x_6359_);
return v___x_6360_;
}
else
{
lean_inc(v_year_6356_);
return v_year_6356_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra___boxed(lean_object* v_year_6361_, lean_object* v_x_6362_){
_start:
{
uint8_t v_x_42__boxed_6363_; lean_object* v_res_6364_; 
v_x_42__boxed_6363_ = lean_unbox(v_x_6362_);
v_res_6364_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra(v_year_6361_, v_x_42__boxed_6363_);
lean_dec(v_year_6361_);
return v_res_6364_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfDayPeriod(uint8_t v_x_6365_){
_start:
{
switch(v_x_6365_)
{
case 1:
{
uint8_t v___x_6366_; 
v___x_6366_ = 1;
return v___x_6366_;
}
case 2:
{
uint8_t v___x_6367_; 
v___x_6367_ = 1;
return v___x_6367_;
}
default: 
{
uint8_t v___x_6368_; 
v___x_6368_ = 0;
return v___x_6368_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfDayPeriod___boxed(lean_object* v_x_6369_){
_start:
{
uint8_t v_x_28__boxed_6370_; uint8_t v_res_6371_; lean_object* v_r_6372_; 
v_x_28__boxed_6370_ = lean_unbox(v_x_6369_);
v_res_6371_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfDayPeriod(v_x_28__boxed_6370_);
v_r_6372_ = lean_box(v_res_6371_);
return v_r_6372_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfExtendedDayPeriod(uint8_t v_x_6373_){
_start:
{
switch(v_x_6373_)
{
case 3:
{
uint8_t v___x_6374_; 
v___x_6374_ = 1;
return v___x_6374_;
}
case 4:
{
uint8_t v___x_6375_; 
v___x_6375_ = 1;
return v___x_6375_;
}
case 5:
{
uint8_t v___x_6376_; 
v___x_6376_ = 1;
return v___x_6376_;
}
default: 
{
uint8_t v___x_6377_; 
v___x_6377_ = 0;
return v___x_6377_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfExtendedDayPeriod___boxed(lean_object* v_x_6378_){
_start:
{
uint8_t v_x_38__boxed_6379_; uint8_t v_res_6380_; lean_object* v_r_6381_; 
v_x_38__boxed_6379_ = lean_unbox(v_x_6378_);
v_res_6380_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfExtendedDayPeriod(v_x_38__boxed_6379_);
v_r_6381_ = lean_box(v_res_6380_);
return v_r_6381_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0(lean_object* v_val_6382_, lean_object* v_x_6383_){
_start:
{
lean_inc_ref(v_val_6382_);
return v_val_6382_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___boxed(lean_object* v_val_6384_, lean_object* v_x_6385_){
_start:
{
lean_object* v_res_6386_; 
v_res_6386_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0(v_val_6384_, v_x_6385_);
lean_dec_ref(v_val_6384_);
return v_res_6386_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__1(lean_object* v___y_6387_, lean_object* v_00___6388_){
_start:
{
uint8_t v___x_6389_; lean_object* v___x_6390_; 
v___x_6389_ = 1;
v___x_6390_ = l_Std_Time_TimeZone_Offset_toIsoString(v___y_6387_, v___x_6389_);
return v___x_6390_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__1(void){
_start:
{
lean_object* v___x_6393_; lean_object* v___x_6394_; 
v___x_6393_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6394_ = lean_int_neg(v___x_6393_);
return v___x_6394_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__2(void){
_start:
{
lean_object* v___x_6395_; lean_object* v___x_6396_; 
v___x_6395_ = lean_unsigned_to_nat(1000000u);
v___x_6396_ = lean_nat_to_int(v___x_6395_);
return v___x_6396_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__3(void){
_start:
{
lean_object* v___x_6397_; uint8_t v___x_6398_; lean_object* v___x_6399_; 
v___x_6397_ = lean_unsigned_to_nat(0u);
v___x_6398_ = 1;
v___x_6399_ = l_Std_Time_Second_instOfNatOrdinal(v___x_6398_, v___x_6397_);
return v___x_6399_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__4(void){
_start:
{
lean_object* v___x_6400_; lean_object* v___x_6401_; lean_object* v___x_6402_; 
v___x_6400_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_parseOffset___closed__5);
v___x_6401_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6402_ = lean_int_add(v___x_6401_, v___x_6400_);
return v___x_6402_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5(void){
_start:
{
lean_object* v___x_6403_; lean_object* v___x_6404_; lean_object* v___x_6405_; 
v___x_6403_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6404_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__4, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__4_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__4);
v___x_6405_ = lean_int_sub(v___x_6404_, v___x_6403_);
return v___x_6405_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6(void){
_start:
{
lean_object* v___x_6406_; lean_object* v___x_6407_; lean_object* v_range_6408_; 
v___x_6406_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6407_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__5);
v_range_6408_ = lean_int_add(v___x_6407_, v___x_6406_);
return v_range_6408_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__7(void){
_start:
{
lean_object* v___x_6409_; lean_object* v___x_6410_; 
v___x_6409_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6410_ = lean_int_sub(v___x_6409_, v___x_6409_);
return v___x_6410_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__8(void){
_start:
{
lean_object* v_range_6411_; lean_object* v___x_6412_; lean_object* v___x_6413_; 
v_range_6411_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6);
v___x_6412_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__7, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__7_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__7);
v___x_6413_ = lean_int_emod(v___x_6412_, v_range_6411_);
return v___x_6413_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__9(void){
_start:
{
lean_object* v_range_6414_; lean_object* v___x_6415_; lean_object* v___x_6416_; 
v_range_6414_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6);
v___x_6415_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__8, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__8_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__8);
v___x_6416_ = lean_int_add(v___x_6415_, v_range_6414_);
return v___x_6416_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__10(void){
_start:
{
lean_object* v_range_6417_; lean_object* v___x_6418_; lean_object* v___x_6419_; 
v_range_6417_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__6);
v___x_6418_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__9, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__9_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__9);
v___x_6419_ = lean_int_emod(v___x_6418_, v_range_6417_);
return v___x_6419_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__11(void){
_start:
{
lean_object* v___x_6420_; lean_object* v___x_6421_; lean_object* v___x_6422_; 
v___x_6420_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6421_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__10, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__10_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__10);
v___x_6422_ = lean_int_add(v___x_6421_, v___x_6420_);
return v___x_6422_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__12(void){
_start:
{
lean_object* v___x_6423_; lean_object* v___x_6424_; 
v___x_6423_ = lean_unsigned_to_nat(30u);
v___x_6424_ = lean_nat_to_int(v___x_6423_);
return v___x_6424_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__13(void){
_start:
{
lean_object* v___x_6425_; lean_object* v___x_6426_; lean_object* v___x_6427_; 
v___x_6425_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__12, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__12_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__12);
v___x_6426_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6427_ = lean_int_add(v___x_6426_, v___x_6425_);
return v___x_6427_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__14(void){
_start:
{
lean_object* v___x_6428_; lean_object* v___x_6429_; lean_object* v___x_6430_; 
v___x_6428_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6429_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__13, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__13_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__13);
v___x_6430_ = lean_int_sub(v___x_6429_, v___x_6428_);
return v___x_6430_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15(void){
_start:
{
lean_object* v___x_6431_; lean_object* v___x_6432_; lean_object* v_range_6433_; 
v___x_6431_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6432_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__14, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__14_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__14);
v_range_6433_ = lean_int_add(v___x_6432_, v___x_6431_);
return v_range_6433_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16(void){
_start:
{
lean_object* v___x_6434_; lean_object* v___x_6435_; lean_object* v___x_6436_; 
v___x_6434_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6435_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6436_ = lean_int_sub(v___x_6435_, v___x_6434_);
return v___x_6436_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__17(void){
_start:
{
lean_object* v_range_6437_; lean_object* v___x_6438_; lean_object* v___x_6439_; 
v_range_6437_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15);
v___x_6438_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16);
v___x_6439_ = lean_int_emod(v___x_6438_, v_range_6437_);
return v___x_6439_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__18(void){
_start:
{
lean_object* v_range_6440_; lean_object* v___x_6441_; lean_object* v___x_6442_; 
v_range_6440_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15);
v___x_6441_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__17, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__17_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__17);
v___x_6442_ = lean_int_add(v___x_6441_, v_range_6440_);
return v___x_6442_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__19(void){
_start:
{
lean_object* v_range_6443_; lean_object* v___x_6444_; lean_object* v___x_6445_; 
v_range_6443_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__15);
v___x_6444_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__18, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__18_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__18);
v___x_6445_ = lean_int_emod(v___x_6444_, v_range_6443_);
return v___x_6445_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__20(void){
_start:
{
lean_object* v___x_6446_; lean_object* v___x_6447_; lean_object* v___x_6448_; 
v___x_6446_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6447_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__19, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__19_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__19);
v___x_6448_ = lean_int_add(v___x_6447_, v___x_6446_);
return v___x_6448_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__21(void){
_start:
{
lean_object* v___x_6449_; lean_object* v___x_6450_; 
v___x_6449_ = lean_unsigned_to_nat(11u);
v___x_6450_ = lean_nat_to_int(v___x_6449_);
return v___x_6450_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__22(void){
_start:
{
lean_object* v___x_6451_; lean_object* v___x_6452_; lean_object* v___x_6453_; 
v___x_6451_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__21, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__21_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__21);
v___x_6452_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6453_ = lean_int_add(v___x_6452_, v___x_6451_);
return v___x_6453_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__23(void){
_start:
{
lean_object* v___x_6454_; lean_object* v___x_6455_; lean_object* v___x_6456_; 
v___x_6454_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6455_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__22, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__22_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__22);
v___x_6456_ = lean_int_sub(v___x_6455_, v___x_6454_);
return v___x_6456_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24(void){
_start:
{
lean_object* v___x_6457_; lean_object* v___x_6458_; lean_object* v_range_6459_; 
v___x_6457_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6458_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__23, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__23_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__23);
v_range_6459_ = lean_int_add(v___x_6458_, v___x_6457_);
return v_range_6459_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__25(void){
_start:
{
lean_object* v_range_6460_; lean_object* v___x_6461_; lean_object* v___x_6462_; 
v_range_6460_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24);
v___x_6461_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__16);
v___x_6462_ = lean_int_emod(v___x_6461_, v_range_6460_);
return v___x_6462_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__26(void){
_start:
{
lean_object* v_range_6463_; lean_object* v___x_6464_; lean_object* v___x_6465_; 
v_range_6463_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24);
v___x_6464_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__25, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__25_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__25);
v___x_6465_ = lean_int_add(v___x_6464_, v_range_6463_);
return v___x_6465_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__27(void){
_start:
{
lean_object* v_range_6466_; lean_object* v___x_6467_; lean_object* v___x_6468_; 
v_range_6466_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__24);
v___x_6467_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__26, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__26_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__26);
v___x_6468_ = lean_int_emod(v___x_6467_, v_range_6466_);
return v___x_6468_;
}
}
static lean_object* _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__28(void){
_start:
{
lean_object* v___x_6469_; lean_object* v___x_6470_; lean_object* v___x_6471_; 
v___x_6469_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6470_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__27, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__27_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__27);
v___x_6471_ = lean_int_add(v___x_6470_, v___x_6469_);
return v___x_6471_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build(lean_object* v_builder_6472_, lean_object* v_aw_6473_){
_start:
{
lean_object* v___y_6475_; lean_object* v___y_6476_; lean_object* v___y_6515_; lean_object* v___y_6516_; lean_object* v___y_6519_; lean_object* v___y_6520_; lean_object* v___y_6521_; lean_object* v___y_6522_; lean_object* v___y_6523_; uint8_t v___y_6524_; lean_object* v___y_6532_; lean_object* v___y_6533_; lean_object* v___y_6534_; lean_object* v___y_6535_; lean_object* v___y_6536_; lean_object* v_G_6547_; lean_object* v_y_6548_; lean_object* v_u_6549_; lean_object* v_Y_6550_; lean_object* v_M_6551_; lean_object* v_L_6552_; lean_object* v_d_6553_; lean_object* v_a_6554_; lean_object* v_b_6555_; lean_object* v_B_6556_; lean_object* v_h_6557_; lean_object* v_K_6558_; lean_object* v_k_6559_; lean_object* v_H_6560_; lean_object* v_m_6561_; lean_object* v_s_6562_; lean_object* v_S_6563_; lean_object* v_A_6564_; lean_object* v_n_6565_; lean_object* v_N_6566_; lean_object* v_V_6567_; lean_object* v_z_6568_; lean_object* v_zabbrev_6569_; lean_object* v_v_6570_; lean_object* v_O_6571_; lean_object* v_X_6572_; lean_object* v_x_6573_; lean_object* v_Z_6574_; lean_object* v___y_6576_; lean_object* v___y_6577_; lean_object* v___y_6578_; lean_object* v___y_6579_; lean_object* v___y_6580_; lean_object* v___y_6581_; lean_object* v___y_6582_; lean_object* v___y_6583_; lean_object* v___y_6592_; lean_object* v___y_6593_; lean_object* v___y_6594_; lean_object* v___y_6595_; lean_object* v___y_6596_; lean_object* v___y_6597_; lean_object* v___y_6598_; lean_object* v___y_6603_; lean_object* v___y_6604_; lean_object* v___y_6605_; lean_object* v___y_6606_; lean_object* v___y_6607_; lean_object* v___y_6608_; lean_object* v___y_6612_; lean_object* v___y_6613_; lean_object* v___y_6614_; lean_object* v___y_6615_; lean_object* v___y_6616_; lean_object* v___y_6620_; lean_object* v___y_6621_; lean_object* v___y_6622_; lean_object* v___y_6623_; lean_object* v___y_6631_; lean_object* v___y_6632_; lean_object* v___y_6633_; lean_object* v___y_6634_; uint8_t v_val_6635_; lean_object* v___y_6643_; lean_object* v___y_6644_; lean_object* v___y_6645_; lean_object* v___y_6646_; lean_object* v___y_6656_; lean_object* v___y_6657_; lean_object* v___y_6658_; uint8_t v___y_6659_; lean_object* v___y_6666_; lean_object* v___y_6667_; lean_object* v___y_6668_; lean_object* v___y_6673_; lean_object* v___y_6674_; lean_object* v___y_6678_; lean_object* v___y_6679_; lean_object* v___y_6680_; lean_object* v___y_6687_; lean_object* v___y_6688_; lean_object* v___y_6689_; lean_object* v___y_6694_; 
v_G_6547_ = lean_ctor_get(v_builder_6472_, 0);
lean_inc(v_G_6547_);
v_y_6548_ = lean_ctor_get(v_builder_6472_, 1);
lean_inc(v_y_6548_);
v_u_6549_ = lean_ctor_get(v_builder_6472_, 2);
lean_inc(v_u_6549_);
v_Y_6550_ = lean_ctor_get(v_builder_6472_, 3);
lean_inc(v_Y_6550_);
v_M_6551_ = lean_ctor_get(v_builder_6472_, 5);
lean_inc(v_M_6551_);
v_L_6552_ = lean_ctor_get(v_builder_6472_, 6);
lean_inc(v_L_6552_);
v_d_6553_ = lean_ctor_get(v_builder_6472_, 7);
lean_inc(v_d_6553_);
v_a_6554_ = lean_ctor_get(v_builder_6472_, 16);
lean_inc(v_a_6554_);
v_b_6555_ = lean_ctor_get(v_builder_6472_, 17);
lean_inc(v_b_6555_);
v_B_6556_ = lean_ctor_get(v_builder_6472_, 18);
lean_inc(v_B_6556_);
v_h_6557_ = lean_ctor_get(v_builder_6472_, 19);
lean_inc(v_h_6557_);
v_K_6558_ = lean_ctor_get(v_builder_6472_, 20);
lean_inc(v_K_6558_);
v_k_6559_ = lean_ctor_get(v_builder_6472_, 21);
lean_inc(v_k_6559_);
v_H_6560_ = lean_ctor_get(v_builder_6472_, 22);
lean_inc(v_H_6560_);
v_m_6561_ = lean_ctor_get(v_builder_6472_, 23);
lean_inc(v_m_6561_);
v_s_6562_ = lean_ctor_get(v_builder_6472_, 24);
lean_inc(v_s_6562_);
v_S_6563_ = lean_ctor_get(v_builder_6472_, 25);
lean_inc(v_S_6563_);
v_A_6564_ = lean_ctor_get(v_builder_6472_, 26);
lean_inc(v_A_6564_);
v_n_6565_ = lean_ctor_get(v_builder_6472_, 27);
lean_inc(v_n_6565_);
v_N_6566_ = lean_ctor_get(v_builder_6472_, 28);
lean_inc(v_N_6566_);
v_V_6567_ = lean_ctor_get(v_builder_6472_, 29);
lean_inc(v_V_6567_);
v_z_6568_ = lean_ctor_get(v_builder_6472_, 30);
lean_inc(v_z_6568_);
v_zabbrev_6569_ = lean_ctor_get(v_builder_6472_, 31);
lean_inc(v_zabbrev_6569_);
v_v_6570_ = lean_ctor_get(v_builder_6472_, 32);
lean_inc(v_v_6570_);
v_O_6571_ = lean_ctor_get(v_builder_6472_, 33);
lean_inc(v_O_6571_);
v_X_6572_ = lean_ctor_get(v_builder_6472_, 34);
lean_inc(v_X_6572_);
v_x_6573_ = lean_ctor_get(v_builder_6472_, 35);
lean_inc(v_x_6573_);
v_Z_6574_ = lean_ctor_get(v_builder_6472_, 36);
lean_inc(v_Z_6574_);
lean_dec_ref(v_builder_6472_);
if (lean_obj_tag(v_O_6571_) == 0)
{
if (lean_obj_tag(v_X_6572_) == 0)
{
if (lean_obj_tag(v_x_6573_) == 0)
{
if (lean_obj_tag(v_Z_6574_) == 0)
{
lean_object* v___x_6701_; 
v___x_6701_ = l_Std_Time_TimeZone_Offset_zero;
v___y_6694_ = v___x_6701_;
goto v___jp_6693_;
}
else
{
lean_object* v_val_6702_; 
v_val_6702_ = lean_ctor_get(v_Z_6574_, 0);
lean_inc(v_val_6702_);
lean_dec_ref_known(v_Z_6574_, 1);
v___y_6694_ = v_val_6702_;
goto v___jp_6693_;
}
}
else
{
lean_object* v_val_6703_; 
lean_dec(v_Z_6574_);
v_val_6703_ = lean_ctor_get(v_x_6573_, 0);
lean_inc(v_val_6703_);
lean_dec_ref_known(v_x_6573_, 1);
v___y_6694_ = v_val_6703_;
goto v___jp_6693_;
}
}
else
{
lean_object* v_val_6704_; 
lean_dec(v_Z_6574_);
lean_dec(v_x_6573_);
v_val_6704_ = lean_ctor_get(v_X_6572_, 0);
lean_inc(v_val_6704_);
lean_dec_ref_known(v_X_6572_, 1);
v___y_6694_ = v_val_6704_;
goto v___jp_6693_;
}
}
else
{
lean_object* v_val_6705_; 
lean_dec(v_Z_6574_);
lean_dec(v_x_6573_);
lean_dec(v_X_6572_);
v_val_6705_ = lean_ctor_get(v_O_6571_, 0);
lean_inc(v_val_6705_);
lean_dec_ref_known(v_O_6571_, 1);
v___y_6694_ = v_val_6705_;
goto v___jp_6693_;
}
v___jp_6474_:
{
if (lean_obj_tag(v___y_6475_) == 0)
{
lean_object* v___x_6477_; 
lean_dec_ref(v___y_6476_);
v___x_6477_ = lean_box(0);
return v___x_6477_;
}
else
{
lean_object* v_val_6478_; lean_object* v___x_6480_; uint8_t v_isShared_6481_; uint8_t v_isSharedCheck_6513_; 
v_val_6478_ = lean_ctor_get(v___y_6475_, 0);
v_isSharedCheck_6513_ = !lean_is_exclusive(v___y_6475_);
if (v_isSharedCheck_6513_ == 0)
{
v___x_6480_ = v___y_6475_;
v_isShared_6481_ = v_isSharedCheck_6513_;
goto v_resetjp_6479_;
}
else
{
lean_inc(v_val_6478_);
lean_dec(v___y_6475_);
v___x_6480_ = lean_box(0);
v_isShared_6481_ = v_isSharedCheck_6513_;
goto v_resetjp_6479_;
}
v_resetjp_6479_:
{
lean_object* v_offset_6482_; lean_object* v_name_6483_; lean_object* v_abbreviation_6484_; uint8_t v_isDST_6485_; uint8_t v___x_6486_; uint8_t v___x_6487_; lean_object* v_ltt_6488_; lean_object* v___x_6489_; lean_object* v___x_6490_; lean_object* v___x_6491_; lean_object* v_wt_6492_; lean_object* v_ltt_6493_; lean_object* v_tz_6494_; lean_object* v_offset_6495_; lean_object* v_second_6496_; lean_object* v_nano_6497_; lean_object* v___f_6498_; lean_object* v___x_6499_; lean_object* v___x_6500_; lean_object* v___x_6501_; lean_object* v___x_6502_; lean_object* v___x_6503_; lean_object* v_nanos_6504_; lean_object* v___x_6505_; lean_object* v_nanos_6506_; lean_object* v___x_6507_; lean_object* v___x_6508_; lean_object* v___x_6509_; lean_object* v___x_6511_; 
v_offset_6482_ = lean_ctor_get(v___y_6476_, 0);
lean_inc(v_offset_6482_);
v_name_6483_ = lean_ctor_get(v___y_6476_, 1);
lean_inc_ref(v_name_6483_);
v_abbreviation_6484_ = lean_ctor_get(v___y_6476_, 2);
lean_inc_ref(v_abbreviation_6484_);
v_isDST_6485_ = lean_ctor_get_uint8(v___y_6476_, sizeof(void*)*3);
lean_dec_ref(v___y_6476_);
v___x_6486_ = 0;
v___x_6487_ = 1;
v_ltt_6488_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_ltt_6488_, 0, v_offset_6482_);
lean_ctor_set(v_ltt_6488_, 1, v_abbreviation_6484_);
lean_ctor_set(v_ltt_6488_, 2, v_name_6483_);
lean_ctor_set_uint8(v_ltt_6488_, sizeof(void*)*3, v_isDST_6485_);
lean_ctor_set_uint8(v_ltt_6488_, sizeof(void*)*3 + 1, v___x_6486_);
lean_ctor_set_uint8(v_ltt_6488_, sizeof(void*)*3 + 2, v___x_6487_);
v___x_6489_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__0));
v___x_6490_ = lean_box(0);
v___x_6491_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6491_, 0, v_ltt_6488_);
lean_ctor_set(v___x_6491_, 1, v___x_6489_);
lean_ctor_set(v___x_6491_, 2, v___x_6490_);
lean_inc(v_val_6478_);
v_wt_6492_ = l_Std_Time_PlainDateTime_toWallTime(v_val_6478_);
lean_inc_ref(v___x_6491_);
v_ltt_6493_ = l_Std_Time_TimeZone_ZoneRules_findLocalTimeTypeForWallTime(v___x_6491_, v_wt_6492_);
v_tz_6494_ = l_Std_Time_TimeZone_LocalTimeType_getTimeZone(v_ltt_6493_);
lean_dec_ref(v_ltt_6493_);
v_offset_6495_ = lean_ctor_get(v_tz_6494_, 0);
v_second_6496_ = lean_ctor_get(v_wt_6492_, 0);
lean_inc(v_second_6496_);
v_nano_6497_ = lean_ctor_get(v_wt_6492_, 1);
lean_inc(v_nano_6497_);
lean_dec_ref(v_wt_6492_);
v___f_6498_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__0___boxed), 2, 1);
lean_closure_set(v___f_6498_, 0, v_val_6478_);
v___x_6499_ = lean_mk_thunk(v___f_6498_);
v___x_6500_ = lean_int_neg(v_offset_6495_);
v___x_6501_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__1);
v___x_6502_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1);
v___x_6503_ = lean_int_mul(v_second_6496_, v___x_6502_);
lean_dec(v_second_6496_);
v_nanos_6504_ = lean_int_add(v___x_6503_, v_nano_6497_);
lean_dec(v_nano_6497_);
lean_dec(v___x_6503_);
v___x_6505_ = lean_int_mul(v___x_6500_, v___x_6502_);
lean_dec(v___x_6500_);
v_nanos_6506_ = lean_int_add(v___x_6505_, v___x_6501_);
lean_dec(v___x_6505_);
v___x_6507_ = lean_int_add(v_nanos_6504_, v_nanos_6506_);
lean_dec(v_nanos_6506_);
lean_dec(v_nanos_6504_);
v___x_6508_ = l_Std_Time_Duration_ofNanoseconds(v___x_6507_);
lean_dec(v___x_6507_);
v___x_6509_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6509_, 0, v___x_6499_);
lean_ctor_set(v___x_6509_, 1, v___x_6508_);
lean_ctor_set(v___x_6509_, 2, v___x_6491_);
lean_ctor_set(v___x_6509_, 3, v_tz_6494_);
if (v_isShared_6481_ == 0)
{
lean_ctor_set(v___x_6480_, 0, v___x_6509_);
v___x_6511_ = v___x_6480_;
goto v_reusejp_6510_;
}
else
{
lean_object* v_reuseFailAlloc_6512_; 
v_reuseFailAlloc_6512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6512_, 0, v___x_6509_);
v___x_6511_ = v_reuseFailAlloc_6512_;
goto v_reusejp_6510_;
}
v_reusejp_6510_:
{
return v___x_6511_;
}
}
}
}
v___jp_6514_:
{
if (lean_obj_tag(v_aw_6473_) == 0)
{
lean_object* v_a_6517_; 
lean_dec_ref(v___y_6515_);
v_a_6517_ = lean_ctor_get(v_aw_6473_, 0);
lean_inc_ref(v_a_6517_);
lean_dec_ref_known(v_aw_6473_, 1);
v___y_6475_ = v___y_6516_;
v___y_6476_ = v_a_6517_;
goto v___jp_6474_;
}
else
{
v___y_6475_ = v___y_6516_;
v___y_6476_ = v___y_6515_;
goto v___jp_6474_;
}
}
v___jp_6518_:
{
lean_object* v___x_6525_; uint8_t v___x_6526_; 
v___x_6525_ = l_Std_Time_Month_Ordinal_days(v___y_6524_, v___y_6521_);
v___x_6526_ = lean_int_dec_le(v___y_6519_, v___x_6525_);
lean_dec(v___x_6525_);
if (v___x_6526_ == 0)
{
lean_object* v___x_6527_; 
lean_dec_ref(v___y_6522_);
lean_dec(v___y_6521_);
lean_dec(v___y_6520_);
lean_dec(v___y_6519_);
v___x_6527_ = lean_box(0);
v___y_6515_ = v___y_6523_;
v___y_6516_ = v___x_6527_;
goto v___jp_6514_;
}
else
{
lean_object* v_date_6528_; lean_object* v___x_6529_; lean_object* v___x_6530_; 
v_date_6528_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_date_6528_, 0, v___y_6520_);
lean_ctor_set(v_date_6528_, 1, v___y_6521_);
lean_ctor_set(v_date_6528_, 2, v___y_6519_);
v___x_6529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6529_, 0, v_date_6528_);
lean_ctor_set(v___x_6529_, 1, v___y_6522_);
v___x_6530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6530_, 0, v___x_6529_);
v___y_6515_ = v___y_6523_;
v___y_6516_ = v___x_6530_;
goto v___jp_6514_;
}
}
v___jp_6531_:
{
lean_object* v___x_6537_; lean_object* v___x_6538_; lean_object* v___x_6539_; uint8_t v___x_6540_; lean_object* v___x_6541_; lean_object* v___x_6542_; uint8_t v___x_6543_; 
v___x_6537_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__0);
v___x_6538_ = lean_int_mod(v___y_6533_, v___x_6537_);
v___x_6539_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___x_6540_ = lean_int_dec_eq(v___x_6538_, v___x_6539_);
lean_dec(v___x_6538_);
v___x_6541_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatWith___closed__0);
v___x_6542_ = lean_int_mod(v___y_6533_, v___x_6541_);
v___x_6543_ = lean_int_dec_eq(v___x_6542_, v___x_6539_);
lean_dec(v___x_6542_);
if (v___x_6543_ == 0)
{
v___y_6519_ = v___y_6532_;
v___y_6520_ = v___y_6533_;
v___y_6521_ = v___y_6534_;
v___y_6522_ = v___y_6536_;
v___y_6523_ = v___y_6535_;
v___y_6524_ = v___x_6540_;
goto v___jp_6518_;
}
else
{
if (v___x_6540_ == 0)
{
v___y_6519_ = v___y_6532_;
v___y_6520_ = v___y_6533_;
v___y_6521_ = v___y_6534_;
v___y_6522_ = v___y_6536_;
v___y_6523_ = v___y_6535_;
v___y_6524_ = v___x_6540_;
goto v___jp_6518_;
}
else
{
lean_object* v___x_6544_; lean_object* v___x_6545_; uint8_t v___x_6546_; 
v___x_6544_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_dateFromModifier___closed__1);
v___x_6545_ = lean_int_mod(v___y_6533_, v___x_6544_);
v___x_6546_ = lean_int_dec_eq(v___x_6545_, v___x_6539_);
lean_dec(v___x_6545_);
v___y_6519_ = v___y_6532_;
v___y_6520_ = v___y_6533_;
v___y_6521_ = v___y_6534_;
v___y_6522_ = v___y_6536_;
v___y_6523_ = v___y_6535_;
v___y_6524_ = v___x_6546_;
goto v___jp_6518_;
}
}
}
v___jp_6575_:
{
if (lean_obj_tag(v_N_6566_) == 0)
{
if (lean_obj_tag(v_A_6564_) == 0)
{
lean_object* v___x_6584_; 
v___x_6584_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6584_, 0, v___y_6581_);
lean_ctor_set(v___x_6584_, 1, v___y_6578_);
lean_ctor_set(v___x_6584_, 2, v___y_6580_);
lean_ctor_set(v___x_6584_, 3, v___y_6583_);
v___y_6532_ = v___y_6576_;
v___y_6533_ = v___y_6577_;
v___y_6534_ = v___y_6579_;
v___y_6535_ = v___y_6582_;
v___y_6536_ = v___x_6584_;
goto v___jp_6531_;
}
else
{
lean_object* v_val_6585_; lean_object* v___x_6586_; lean_object* v___x_6587_; lean_object* v___x_6588_; 
lean_dec(v___y_6583_);
lean_dec(v___y_6581_);
lean_dec(v___y_6580_);
lean_dec(v___y_6578_);
v_val_6585_ = lean_ctor_get(v_A_6564_, 0);
lean_inc(v_val_6585_);
lean_dec_ref_known(v_A_6564_, 1);
v___x_6586_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__2, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__2_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__2);
v___x_6587_ = lean_int_mul(v_val_6585_, v___x_6586_);
lean_dec(v_val_6585_);
v___x_6588_ = l_Std_Time_PlainTime_ofNanoseconds(v___x_6587_);
lean_dec(v___x_6587_);
v___y_6532_ = v___y_6576_;
v___y_6533_ = v___y_6577_;
v___y_6534_ = v___y_6579_;
v___y_6535_ = v___y_6582_;
v___y_6536_ = v___x_6588_;
goto v___jp_6531_;
}
}
else
{
lean_object* v_val_6589_; lean_object* v___x_6590_; 
lean_dec(v___y_6583_);
lean_dec(v___y_6581_);
lean_dec(v___y_6580_);
lean_dec(v___y_6578_);
lean_dec(v_A_6564_);
v_val_6589_ = lean_ctor_get(v_N_6566_, 0);
lean_inc(v_val_6589_);
lean_dec_ref_known(v_N_6566_, 1);
v___x_6590_ = l_Std_Time_PlainTime_ofNanoseconds(v_val_6589_);
lean_dec(v_val_6589_);
v___y_6532_ = v___y_6576_;
v___y_6533_ = v___y_6577_;
v___y_6534_ = v___y_6579_;
v___y_6535_ = v___y_6582_;
v___y_6536_ = v___x_6590_;
goto v___jp_6531_;
}
}
v___jp_6591_:
{
if (lean_obj_tag(v_n_6565_) == 0)
{
if (lean_obj_tag(v_S_6563_) == 0)
{
lean_object* v___x_6599_; 
v___x_6599_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___y_6576_ = v___y_6592_;
v___y_6577_ = v___y_6593_;
v___y_6578_ = v___y_6594_;
v___y_6579_ = v___y_6595_;
v___y_6580_ = v___y_6598_;
v___y_6581_ = v___y_6596_;
v___y_6582_ = v___y_6597_;
v___y_6583_ = v___x_6599_;
goto v___jp_6575_;
}
else
{
lean_object* v_val_6600_; 
v_val_6600_ = lean_ctor_get(v_S_6563_, 0);
lean_inc(v_val_6600_);
lean_dec_ref_known(v_S_6563_, 1);
v___y_6576_ = v___y_6592_;
v___y_6577_ = v___y_6593_;
v___y_6578_ = v___y_6594_;
v___y_6579_ = v___y_6595_;
v___y_6580_ = v___y_6598_;
v___y_6581_ = v___y_6596_;
v___y_6582_ = v___y_6597_;
v___y_6583_ = v_val_6600_;
goto v___jp_6575_;
}
}
else
{
lean_object* v_val_6601_; 
lean_dec(v_S_6563_);
v_val_6601_ = lean_ctor_get(v_n_6565_, 0);
lean_inc(v_val_6601_);
lean_dec_ref_known(v_n_6565_, 1);
v___y_6576_ = v___y_6592_;
v___y_6577_ = v___y_6593_;
v___y_6578_ = v___y_6594_;
v___y_6579_ = v___y_6595_;
v___y_6580_ = v___y_6598_;
v___y_6581_ = v___y_6596_;
v___y_6582_ = v___y_6597_;
v___y_6583_ = v_val_6601_;
goto v___jp_6575_;
}
}
v___jp_6602_:
{
if (lean_obj_tag(v_s_6562_) == 0)
{
lean_object* v___x_6609_; 
v___x_6609_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__3, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__3_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__3);
v___y_6592_ = v___y_6603_;
v___y_6593_ = v___y_6604_;
v___y_6594_ = v___y_6608_;
v___y_6595_ = v___y_6605_;
v___y_6596_ = v___y_6606_;
v___y_6597_ = v___y_6607_;
v___y_6598_ = v___x_6609_;
goto v___jp_6591_;
}
else
{
lean_object* v_val_6610_; 
v_val_6610_ = lean_ctor_get(v_s_6562_, 0);
lean_inc(v_val_6610_);
lean_dec_ref_known(v_s_6562_, 1);
v___y_6592_ = v___y_6603_;
v___y_6593_ = v___y_6604_;
v___y_6594_ = v___y_6608_;
v___y_6595_ = v___y_6605_;
v___y_6596_ = v___y_6606_;
v___y_6597_ = v___y_6607_;
v___y_6598_ = v_val_6610_;
goto v___jp_6591_;
}
}
v___jp_6611_:
{
if (lean_obj_tag(v_m_6561_) == 0)
{
lean_object* v___x_6617_; 
v___x_6617_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__11, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__11_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__11);
v___y_6603_ = v___y_6612_;
v___y_6604_ = v___y_6613_;
v___y_6605_ = v___y_6614_;
v___y_6606_ = v___y_6616_;
v___y_6607_ = v___y_6615_;
v___y_6608_ = v___x_6617_;
goto v___jp_6602_;
}
else
{
lean_object* v_val_6618_; 
v_val_6618_ = lean_ctor_get(v_m_6561_, 0);
lean_inc(v_val_6618_);
lean_dec_ref_known(v_m_6561_, 1);
v___y_6603_ = v___y_6612_;
v___y_6604_ = v___y_6613_;
v___y_6605_ = v___y_6614_;
v___y_6606_ = v___y_6616_;
v___y_6607_ = v___y_6615_;
v___y_6608_ = v_val_6618_;
goto v___jp_6602_;
}
}
v___jp_6619_:
{
if (lean_obj_tag(v_k_6559_) == 0)
{
if (lean_obj_tag(v_H_6560_) == 0)
{
lean_object* v___x_6624_; 
v___x_6624_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___y_6612_ = v___y_6620_;
v___y_6613_ = v___y_6621_;
v___y_6614_ = v___y_6622_;
v___y_6615_ = v___y_6623_;
v___y_6616_ = v___x_6624_;
goto v___jp_6611_;
}
else
{
lean_object* v_val_6625_; 
v_val_6625_ = lean_ctor_get(v_H_6560_, 0);
lean_inc(v_val_6625_);
lean_dec_ref_known(v_H_6560_, 1);
v___y_6612_ = v___y_6620_;
v___y_6613_ = v___y_6621_;
v___y_6614_ = v___y_6622_;
v___y_6615_ = v___y_6623_;
v___y_6616_ = v_val_6625_;
goto v___jp_6611_;
}
}
else
{
if (lean_obj_tag(v_H_6560_) == 0)
{
lean_object* v_val_6626_; lean_object* v___x_6627_; lean_object* v___x_6628_; 
v_val_6626_ = lean_ctor_get(v_k_6559_, 0);
lean_inc(v_val_6626_);
lean_dec_ref_known(v_k_6559_, 1);
v___x_6627_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_formatMonthLong___closed__0);
v___x_6628_ = lean_int_add(v_val_6626_, v___x_6627_);
lean_dec(v_val_6626_);
v___y_6612_ = v___y_6620_;
v___y_6613_ = v___y_6621_;
v___y_6614_ = v___y_6622_;
v___y_6615_ = v___y_6623_;
v___y_6616_ = v___x_6628_;
goto v___jp_6611_;
}
else
{
lean_object* v_val_6629_; 
lean_dec_ref_known(v_k_6559_, 1);
v_val_6629_ = lean_ctor_get(v_H_6560_, 0);
lean_inc(v_val_6629_);
lean_dec_ref_known(v_H_6560_, 1);
v___y_6612_ = v___y_6620_;
v___y_6613_ = v___y_6621_;
v___y_6614_ = v___y_6622_;
v___y_6615_ = v___y_6623_;
v___y_6616_ = v_val_6629_;
goto v___jp_6611_;
}
}
}
v___jp_6630_:
{
if (lean_obj_tag(v_h_6557_) == 0)
{
if (lean_obj_tag(v_K_6558_) == 0)
{
v___y_6620_ = v___y_6631_;
v___y_6621_ = v___y_6632_;
v___y_6622_ = v___y_6633_;
v___y_6623_ = v___y_6634_;
goto v___jp_6619_;
}
else
{
lean_object* v_val_6636_; lean_object* v___x_6637_; lean_object* v___x_6638_; lean_object* v___x_6639_; 
lean_dec(v_H_6560_);
lean_dec(v_k_6559_);
v_val_6636_ = lean_ctor_get(v_K_6558_, 0);
lean_inc(v_val_6636_);
lean_dec_ref_known(v_K_6558_, 1);
v___x_6637_ = lean_obj_once(&l_Std_Time_instReprFormatPart_repr___closed__4, &l_Std_Time_instReprFormatPart_repr___closed__4_once, _init_l_Std_Time_instReprFormatPart_repr___closed__4);
v___x_6638_ = lean_int_add(v_val_6636_, v___x_6637_);
lean_dec(v_val_6636_);
v___x_6639_ = l_Std_Time_HourMarker_toAbsolute(v_val_6635_, v___x_6638_);
lean_dec(v___x_6638_);
v___y_6612_ = v___y_6631_;
v___y_6613_ = v___y_6632_;
v___y_6614_ = v___y_6633_;
v___y_6615_ = v___y_6634_;
v___y_6616_ = v___x_6639_;
goto v___jp_6611_;
}
}
else
{
lean_object* v_val_6640_; lean_object* v___x_6641_; 
lean_dec(v_H_6560_);
lean_dec(v_k_6559_);
lean_dec(v_K_6558_);
v_val_6640_ = lean_ctor_get(v_h_6557_, 0);
lean_inc(v_val_6640_);
lean_dec_ref_known(v_h_6557_, 1);
v___x_6641_ = l_Std_Time_HourMarker_toAbsolute(v_val_6635_, v_val_6640_);
lean_dec(v_val_6640_);
v___y_6612_ = v___y_6631_;
v___y_6613_ = v___y_6632_;
v___y_6614_ = v___y_6633_;
v___y_6615_ = v___y_6634_;
v___y_6616_ = v___x_6641_;
goto v___jp_6611_;
}
}
v___jp_6642_:
{
if (lean_obj_tag(v_a_6554_) == 0)
{
if (lean_obj_tag(v_b_6555_) == 0)
{
if (lean_obj_tag(v_B_6556_) == 0)
{
lean_dec(v_K_6558_);
lean_dec(v_h_6557_);
v___y_6620_ = v___y_6643_;
v___y_6621_ = v___y_6646_;
v___y_6622_ = v___y_6644_;
v___y_6623_ = v___y_6645_;
goto v___jp_6619_;
}
else
{
lean_object* v_val_6647_; uint8_t v___x_6648_; uint8_t v___x_6649_; 
v_val_6647_ = lean_ctor_get(v_B_6556_, 0);
lean_inc(v_val_6647_);
lean_dec_ref_known(v_B_6556_, 1);
v___x_6648_ = lean_unbox(v_val_6647_);
lean_dec(v_val_6647_);
v___x_6649_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfExtendedDayPeriod(v___x_6648_);
v___y_6631_ = v___y_6643_;
v___y_6632_ = v___y_6646_;
v___y_6633_ = v___y_6644_;
v___y_6634_ = v___y_6645_;
v_val_6635_ = v___x_6649_;
goto v___jp_6630_;
}
}
else
{
lean_object* v_val_6650_; uint8_t v___x_6651_; uint8_t v___x_6652_; 
lean_dec(v_B_6556_);
v_val_6650_ = lean_ctor_get(v_b_6555_, 0);
lean_inc(v_val_6650_);
lean_dec_ref_known(v_b_6555_, 1);
v___x_6651_ = lean_unbox(v_val_6650_);
lean_dec(v_val_6650_);
v___x_6652_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_markerOfDayPeriod(v___x_6651_);
v___y_6631_ = v___y_6643_;
v___y_6632_ = v___y_6646_;
v___y_6633_ = v___y_6644_;
v___y_6634_ = v___y_6645_;
v_val_6635_ = v___x_6652_;
goto v___jp_6630_;
}
}
else
{
lean_object* v_val_6653_; uint8_t v___x_6654_; 
lean_dec(v_B_6556_);
lean_dec(v_b_6555_);
v_val_6653_ = lean_ctor_get(v_a_6554_, 0);
lean_inc(v_val_6653_);
lean_dec_ref_known(v_a_6554_, 1);
v___x_6654_ = lean_unbox(v_val_6653_);
lean_dec(v_val_6653_);
v___y_6631_ = v___y_6643_;
v___y_6632_ = v___y_6646_;
v___y_6633_ = v___y_6644_;
v___y_6634_ = v___y_6645_;
v_val_6635_ = v___x_6654_;
goto v___jp_6630_;
}
}
v___jp_6655_:
{
if (lean_obj_tag(v_u_6549_) == 0)
{
if (lean_obj_tag(v_y_6548_) == 0)
{
if (lean_obj_tag(v_Y_6550_) == 0)
{
lean_object* v___x_6660_; 
v___x_6660_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0, &l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_pad___closed__0);
v___y_6643_ = v___y_6656_;
v___y_6644_ = v___y_6657_;
v___y_6645_ = v___y_6658_;
v___y_6646_ = v___x_6660_;
goto v___jp_6642_;
}
else
{
lean_object* v_val_6661_; 
v_val_6661_ = lean_ctor_get(v_Y_6550_, 0);
lean_inc(v_val_6661_);
lean_dec_ref_known(v_Y_6550_, 1);
v___y_6643_ = v___y_6656_;
v___y_6644_ = v___y_6657_;
v___y_6645_ = v___y_6658_;
v___y_6646_ = v_val_6661_;
goto v___jp_6642_;
}
}
else
{
lean_object* v_val_6662_; lean_object* v___x_6663_; 
lean_dec(v_Y_6550_);
v_val_6662_ = lean_ctor_get(v_y_6548_, 0);
lean_inc(v_val_6662_);
lean_dec_ref_known(v_y_6548_, 1);
v___x_6663_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_convertYearAndEra(v_val_6662_, v___y_6659_);
lean_dec(v_val_6662_);
v___y_6643_ = v___y_6656_;
v___y_6644_ = v___y_6657_;
v___y_6645_ = v___y_6658_;
v___y_6646_ = v___x_6663_;
goto v___jp_6642_;
}
}
else
{
lean_object* v_val_6664_; 
lean_dec(v_Y_6550_);
lean_dec(v_y_6548_);
v_val_6664_ = lean_ctor_get(v_u_6549_, 0);
lean_inc(v_val_6664_);
lean_dec_ref_known(v_u_6549_, 1);
v___y_6643_ = v___y_6656_;
v___y_6644_ = v___y_6657_;
v___y_6645_ = v___y_6658_;
v___y_6646_ = v_val_6664_;
goto v___jp_6642_;
}
}
v___jp_6665_:
{
if (lean_obj_tag(v_G_6547_) == 0)
{
uint8_t v___x_6669_; 
v___x_6669_ = 1;
v___y_6656_ = v___y_6668_;
v___y_6657_ = v___y_6666_;
v___y_6658_ = v___y_6667_;
v___y_6659_ = v___x_6669_;
goto v___jp_6655_;
}
else
{
lean_object* v_val_6670_; uint8_t v___x_6671_; 
v_val_6670_ = lean_ctor_get(v_G_6547_, 0);
lean_inc(v_val_6670_);
lean_dec_ref_known(v_G_6547_, 1);
v___x_6671_ = lean_unbox(v_val_6670_);
lean_dec(v_val_6670_);
v___y_6656_ = v___y_6668_;
v___y_6657_ = v___y_6666_;
v___y_6658_ = v___y_6667_;
v___y_6659_ = v___x_6671_;
goto v___jp_6655_;
}
}
v___jp_6672_:
{
if (lean_obj_tag(v_d_6553_) == 0)
{
lean_object* v___x_6675_; 
v___x_6675_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__20, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__20_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__20);
v___y_6666_ = v___y_6674_;
v___y_6667_ = v___y_6673_;
v___y_6668_ = v___x_6675_;
goto v___jp_6665_;
}
else
{
lean_object* v_val_6676_; 
v_val_6676_ = lean_ctor_get(v_d_6553_, 0);
lean_inc(v_val_6676_);
lean_dec_ref_known(v_d_6553_, 1);
v___y_6666_ = v___y_6674_;
v___y_6667_ = v___y_6673_;
v___y_6668_ = v_val_6676_;
goto v___jp_6665_;
}
}
v___jp_6677_:
{
uint8_t v___x_6681_; lean_object* v_tz_6682_; 
v___x_6681_ = 0;
v_tz_6682_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_tz_6682_, 0, v___y_6679_);
lean_ctor_set(v_tz_6682_, 1, v___y_6678_);
lean_ctor_set(v_tz_6682_, 2, v___y_6680_);
lean_ctor_set_uint8(v_tz_6682_, sizeof(void*)*3, v___x_6681_);
if (lean_obj_tag(v_M_6551_) == 0)
{
if (lean_obj_tag(v_L_6552_) == 0)
{
lean_object* v___x_6683_; 
v___x_6683_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__28, &l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__28_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__28);
v___y_6673_ = v_tz_6682_;
v___y_6674_ = v___x_6683_;
goto v___jp_6672_;
}
else
{
lean_object* v_val_6684_; 
v_val_6684_ = lean_ctor_get(v_L_6552_, 0);
lean_inc(v_val_6684_);
lean_dec_ref_known(v_L_6552_, 1);
v___y_6673_ = v_tz_6682_;
v___y_6674_ = v_val_6684_;
goto v___jp_6672_;
}
}
else
{
lean_object* v_val_6685_; 
lean_dec(v_L_6552_);
v_val_6685_ = lean_ctor_get(v_M_6551_, 0);
lean_inc(v_val_6685_);
lean_dec_ref_known(v_M_6551_, 1);
v___y_6673_ = v_tz_6682_;
v___y_6674_ = v_val_6685_;
goto v___jp_6672_;
}
}
v___jp_6686_:
{
if (lean_obj_tag(v_zabbrev_6569_) == 0)
{
lean_object* v___x_6690_; lean_object* v___x_6691_; 
v___x_6690_ = lean_box(0);
v___x_6691_ = lean_apply_1(v___y_6687_, v___x_6690_);
v___y_6678_ = v___y_6689_;
v___y_6679_ = v___y_6688_;
v___y_6680_ = v___x_6691_;
goto v___jp_6677_;
}
else
{
lean_object* v_val_6692_; 
lean_dec_ref(v___y_6687_);
v_val_6692_ = lean_ctor_get(v_zabbrev_6569_, 0);
lean_inc(v_val_6692_);
lean_dec_ref_known(v_zabbrev_6569_, 1);
v___y_6678_ = v___y_6689_;
v___y_6679_ = v___y_6688_;
v___y_6680_ = v_val_6692_;
goto v___jp_6677_;
}
}
v___jp_6693_:
{
lean_object* v___f_6695_; 
lean_inc(v___y_6694_);
v___f_6695_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__1), 2, 1);
lean_closure_set(v___f_6695_, 0, v___y_6694_);
if (lean_obj_tag(v_V_6567_) == 0)
{
if (lean_obj_tag(v_v_6570_) == 0)
{
if (lean_obj_tag(v_z_6568_) == 0)
{
lean_object* v___x_6696_; lean_object* v___x_6697_; 
v___x_6696_ = lean_box(0);
lean_inc(v___y_6694_);
v___x_6697_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___lam__1(v___y_6694_, v___x_6696_);
v___y_6687_ = v___f_6695_;
v___y_6688_ = v___y_6694_;
v___y_6689_ = v___x_6697_;
goto v___jp_6686_;
}
else
{
lean_object* v_val_6698_; 
v_val_6698_ = lean_ctor_get(v_z_6568_, 0);
lean_inc(v_val_6698_);
lean_dec_ref_known(v_z_6568_, 1);
v___y_6687_ = v___f_6695_;
v___y_6688_ = v___y_6694_;
v___y_6689_ = v_val_6698_;
goto v___jp_6686_;
}
}
else
{
lean_object* v_val_6699_; 
lean_dec(v_z_6568_);
v_val_6699_ = lean_ctor_get(v_v_6570_, 0);
lean_inc(v_val_6699_);
lean_dec_ref_known(v_v_6570_, 1);
v___y_6687_ = v___f_6695_;
v___y_6688_ = v___y_6694_;
v___y_6689_ = v_val_6699_;
goto v___jp_6686_;
}
}
else
{
lean_object* v_val_6700_; 
lean_dec(v_v_6570_);
lean_dec(v_z_6568_);
v_val_6700_ = lean_ctor_get(v_V_6567_, 0);
lean_inc(v_val_6700_);
lean_dec_ref_known(v_V_6567_, 1);
v___y_6687_ = v___f_6695_;
v___y_6688_ = v___y_6694_;
v___y_6689_ = v_val_6700_;
goto v___jp_6686_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parseWithDate(lean_object* v_date_6706_, lean_object* v_config_6707_, lean_object* v_mod_6708_, lean_object* v_a_6709_){
_start:
{
if (lean_obj_tag(v_mod_6708_) == 0)
{
lean_object* v_val_6710_; lean_object* v___x_6711_; 
lean_dec_ref(v_config_6707_);
v_val_6710_ = lean_ctor_get(v_mod_6708_, 0);
lean_inc_ref(v_val_6710_);
lean_dec_ref_known(v_mod_6708_, 1);
v___x_6711_ = l_Std_Internal_Parsec_String_pstring(v_val_6710_, v_a_6709_);
if (lean_obj_tag(v___x_6711_) == 0)
{
lean_object* v_pos_6712_; lean_object* v___x_6714_; uint8_t v_isShared_6715_; uint8_t v_isSharedCheck_6719_; 
v_pos_6712_ = lean_ctor_get(v___x_6711_, 0);
v_isSharedCheck_6719_ = !lean_is_exclusive(v___x_6711_);
if (v_isSharedCheck_6719_ == 0)
{
lean_object* v_unused_6720_; 
v_unused_6720_ = lean_ctor_get(v___x_6711_, 1);
lean_dec(v_unused_6720_);
v___x_6714_ = v___x_6711_;
v_isShared_6715_ = v_isSharedCheck_6719_;
goto v_resetjp_6713_;
}
else
{
lean_inc(v_pos_6712_);
lean_dec(v___x_6711_);
v___x_6714_ = lean_box(0);
v_isShared_6715_ = v_isSharedCheck_6719_;
goto v_resetjp_6713_;
}
v_resetjp_6713_:
{
lean_object* v___x_6717_; 
if (v_isShared_6715_ == 0)
{
lean_ctor_set(v___x_6714_, 1, v_date_6706_);
v___x_6717_ = v___x_6714_;
goto v_reusejp_6716_;
}
else
{
lean_object* v_reuseFailAlloc_6718_; 
v_reuseFailAlloc_6718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6718_, 0, v_pos_6712_);
lean_ctor_set(v_reuseFailAlloc_6718_, 1, v_date_6706_);
v___x_6717_ = v_reuseFailAlloc_6718_;
goto v_reusejp_6716_;
}
v_reusejp_6716_:
{
return v___x_6717_;
}
}
}
else
{
lean_object* v_pos_6721_; lean_object* v_err_6722_; lean_object* v___x_6724_; uint8_t v_isShared_6725_; uint8_t v_isSharedCheck_6729_; 
lean_dec_ref(v_date_6706_);
v_pos_6721_ = lean_ctor_get(v___x_6711_, 0);
v_err_6722_ = lean_ctor_get(v___x_6711_, 1);
v_isSharedCheck_6729_ = !lean_is_exclusive(v___x_6711_);
if (v_isSharedCheck_6729_ == 0)
{
v___x_6724_ = v___x_6711_;
v_isShared_6725_ = v_isSharedCheck_6729_;
goto v_resetjp_6723_;
}
else
{
lean_inc(v_err_6722_);
lean_inc(v_pos_6721_);
lean_dec(v___x_6711_);
v___x_6724_ = lean_box(0);
v_isShared_6725_ = v_isSharedCheck_6729_;
goto v_resetjp_6723_;
}
v_resetjp_6723_:
{
lean_object* v___x_6727_; 
if (v_isShared_6725_ == 0)
{
v___x_6727_ = v___x_6724_;
goto v_reusejp_6726_;
}
else
{
lean_object* v_reuseFailAlloc_6728_; 
v_reuseFailAlloc_6728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6728_, 0, v_pos_6721_);
lean_ctor_set(v_reuseFailAlloc_6728_, 1, v_err_6722_);
v___x_6727_ = v_reuseFailAlloc_6728_;
goto v_reusejp_6726_;
}
v_reusejp_6726_:
{
return v___x_6727_;
}
}
}
}
else
{
lean_object* v_modifier_6730_; lean_object* v___x_6731_; 
v_modifier_6730_ = lean_ctor_get(v_mod_6708_, 0);
lean_inc_ref_n(v_modifier_6730_, 2);
lean_dec_ref_known(v_mod_6708_, 1);
v___x_6731_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWith(v_config_6707_, v_modifier_6730_, v_a_6709_);
if (lean_obj_tag(v___x_6731_) == 0)
{
lean_object* v_pos_6732_; lean_object* v_res_6733_; lean_object* v___x_6735_; uint8_t v_isShared_6736_; uint8_t v_isSharedCheck_6741_; 
v_pos_6732_ = lean_ctor_get(v___x_6731_, 0);
v_res_6733_ = lean_ctor_get(v___x_6731_, 1);
v_isSharedCheck_6741_ = !lean_is_exclusive(v___x_6731_);
if (v_isSharedCheck_6741_ == 0)
{
v___x_6735_ = v___x_6731_;
v_isShared_6736_ = v_isSharedCheck_6741_;
goto v_resetjp_6734_;
}
else
{
lean_inc(v_res_6733_);
lean_inc(v_pos_6732_);
lean_dec(v___x_6731_);
v___x_6735_ = lean_box(0);
v_isShared_6736_ = v_isSharedCheck_6741_;
goto v_resetjp_6734_;
}
v_resetjp_6734_:
{
lean_object* v___x_6737_; lean_object* v___x_6739_; 
v___x_6737_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_insert(v_date_6706_, v_modifier_6730_, v_res_6733_);
if (v_isShared_6736_ == 0)
{
lean_ctor_set(v___x_6735_, 1, v___x_6737_);
v___x_6739_ = v___x_6735_;
goto v_reusejp_6738_;
}
else
{
lean_object* v_reuseFailAlloc_6740_; 
v_reuseFailAlloc_6740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6740_, 0, v_pos_6732_);
lean_ctor_set(v_reuseFailAlloc_6740_, 1, v___x_6737_);
v___x_6739_ = v_reuseFailAlloc_6740_;
goto v_reusejp_6738_;
}
v_reusejp_6738_:
{
return v___x_6739_;
}
}
}
else
{
lean_object* v_pos_6742_; lean_object* v_err_6743_; lean_object* v___x_6745_; uint8_t v_isShared_6746_; uint8_t v_isSharedCheck_6750_; 
lean_dec_ref(v_modifier_6730_);
lean_dec_ref(v_date_6706_);
v_pos_6742_ = lean_ctor_get(v___x_6731_, 0);
v_err_6743_ = lean_ctor_get(v___x_6731_, 1);
v_isSharedCheck_6750_ = !lean_is_exclusive(v___x_6731_);
if (v_isSharedCheck_6750_ == 0)
{
v___x_6745_ = v___x_6731_;
v_isShared_6746_ = v_isSharedCheck_6750_;
goto v_resetjp_6744_;
}
else
{
lean_inc(v_err_6743_);
lean_inc(v_pos_6742_);
lean_dec(v___x_6731_);
v___x_6745_ = lean_box(0);
v_isShared_6746_ = v_isSharedCheck_6750_;
goto v_resetjp_6744_;
}
v_resetjp_6744_:
{
lean_object* v___x_6748_; 
if (v_isShared_6746_ == 0)
{
v___x_6748_ = v___x_6745_;
goto v_reusejp_6747_;
}
else
{
lean_object* v_reuseFailAlloc_6749_; 
v_reuseFailAlloc_6749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6749_, 0, v_pos_6742_);
lean_ctor_set(v_reuseFailAlloc_6749_, 1, v_err_6743_);
v___x_6748_ = v_reuseFailAlloc_6749_;
goto v_reusejp_6747_;
}
v_reusejp_6747_:
{
return v___x_6748_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec___redArg(lean_object* v_input_6751_, lean_object* v_config_6752_){
_start:
{
lean_object* v___x_6753_; lean_object* v___x_6754_; 
v___x_6753_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser), 1, 0);
v___x_6754_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___x_6753_, v_input_6751_);
if (lean_obj_tag(v___x_6754_) == 0)
{
lean_object* v_a_6755_; lean_object* v___x_6757_; uint8_t v_isShared_6758_; uint8_t v_isSharedCheck_6762_; 
lean_dec_ref(v_config_6752_);
v_a_6755_ = lean_ctor_get(v___x_6754_, 0);
v_isSharedCheck_6762_ = !lean_is_exclusive(v___x_6754_);
if (v_isSharedCheck_6762_ == 0)
{
v___x_6757_ = v___x_6754_;
v_isShared_6758_ = v_isSharedCheck_6762_;
goto v_resetjp_6756_;
}
else
{
lean_inc(v_a_6755_);
lean_dec(v___x_6754_);
v___x_6757_ = lean_box(0);
v_isShared_6758_ = v_isSharedCheck_6762_;
goto v_resetjp_6756_;
}
v_resetjp_6756_:
{
lean_object* v___x_6760_; 
if (v_isShared_6758_ == 0)
{
v___x_6760_ = v___x_6757_;
goto v_reusejp_6759_;
}
else
{
lean_object* v_reuseFailAlloc_6761_; 
v_reuseFailAlloc_6761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6761_, 0, v_a_6755_);
v___x_6760_ = v_reuseFailAlloc_6761_;
goto v_reusejp_6759_;
}
v_reusejp_6759_:
{
return v___x_6760_;
}
}
}
else
{
lean_object* v_a_6763_; lean_object* v___x_6765_; uint8_t v_isShared_6766_; uint8_t v_isSharedCheck_6771_; 
v_a_6763_ = lean_ctor_get(v___x_6754_, 0);
v_isSharedCheck_6771_ = !lean_is_exclusive(v___x_6754_);
if (v_isSharedCheck_6771_ == 0)
{
v___x_6765_ = v___x_6754_;
v_isShared_6766_ = v_isSharedCheck_6771_;
goto v_resetjp_6764_;
}
else
{
lean_inc(v_a_6763_);
lean_dec(v___x_6754_);
v___x_6765_ = lean_box(0);
v_isShared_6766_ = v_isSharedCheck_6771_;
goto v_resetjp_6764_;
}
v_resetjp_6764_:
{
lean_object* v___x_6767_; lean_object* v___x_6769_; 
v___x_6767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6767_, 0, v_config_6752_);
lean_ctor_set(v___x_6767_, 1, v_a_6763_);
if (v_isShared_6766_ == 0)
{
lean_ctor_set(v___x_6765_, 0, v___x_6767_);
v___x_6769_ = v___x_6765_;
goto v_reusejp_6768_;
}
else
{
lean_object* v_reuseFailAlloc_6770_; 
v_reuseFailAlloc_6770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6770_, 0, v___x_6767_);
v___x_6769_ = v_reuseFailAlloc_6770_;
goto v_reusejp_6768_;
}
v_reusejp_6768_:
{
return v___x_6769_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec(lean_object* v_tz_6772_, lean_object* v_input_6773_, lean_object* v_config_6774_){
_start:
{
lean_object* v___x_6775_; 
v___x_6775_ = l_Std_Time_GenericFormat_spec___redArg(v_input_6773_, v_config_6774_);
return v___x_6775_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec___boxed(lean_object* v_tz_6776_, lean_object* v_input_6777_, lean_object* v_config_6778_){
_start:
{
lean_object* v_res_6779_; 
v_res_6779_ = l_Std_Time_GenericFormat_spec(v_tz_6776_, v_input_6777_, v_config_6778_);
lean_dec(v_tz_6776_);
return v_res_6779_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0___redArg(lean_object* v_msg_6780_){
_start:
{
lean_object* v___x_6781_; lean_object* v___x_6782_; 
v___x_6781_ = lean_obj_once(&l_Std_Time_instInhabitedGenericFormat_default___closed__0, &l_Std_Time_instInhabitedGenericFormat_default___closed__0_once, _init_l_Std_Time_instInhabitedGenericFormat_default___closed__0);
v___x_6782_ = lean_panic_fn_borrowed(v___x_6781_, v_msg_6780_);
return v___x_6782_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0(lean_object* v_tz_6783_, lean_object* v_msg_6784_){
_start:
{
lean_object* v___x_6785_; 
v___x_6785_ = l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0___redArg(v_msg_6784_);
return v___x_6785_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0___boxed(lean_object* v_tz_6786_, lean_object* v_msg_6787_){
_start:
{
lean_object* v_res_6788_; 
v_res_6788_ = l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0(v_tz_6786_, v_msg_6787_);
lean_dec(v_tz_6786_);
return v_res_6788_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec_x21(lean_object* v_tz_6791_, lean_object* v_input_6792_, lean_object* v_config_6793_){
_start:
{
lean_object* v___x_6794_; lean_object* v___x_6795_; 
v___x_6794_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser), 1, 0);
v___x_6795_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___x_6794_, v_input_6792_);
if (lean_obj_tag(v___x_6795_) == 0)
{
lean_object* v_a_6796_; lean_object* v___x_6797_; lean_object* v___x_6798_; lean_object* v___x_6799_; lean_object* v___x_6800_; lean_object* v___x_6801_; lean_object* v___x_6802_; 
lean_dec_ref(v_config_6793_);
v_a_6796_ = lean_ctor_get(v___x_6795_, 0);
lean_inc(v_a_6796_);
lean_dec_ref_known(v___x_6795_, 1);
v___x_6797_ = ((lean_object*)(l_Std_Time_GenericFormat_spec_x21___closed__0));
v___x_6798_ = ((lean_object*)(l_Std_Time_GenericFormat_spec_x21___closed__1));
v___x_6799_ = lean_unsigned_to_nat(1071u);
v___x_6800_ = lean_unsigned_to_nat(18u);
v___x_6801_ = l_mkPanicMessageWithDecl(v___x_6797_, v___x_6798_, v___x_6799_, v___x_6800_, v_a_6796_);
lean_dec(v_a_6796_);
v___x_6802_ = l_panic___at___00Std_Time_GenericFormat_spec_x21_spec__0___redArg(v___x_6801_);
return v___x_6802_;
}
else
{
lean_object* v_a_6803_; lean_object* v___x_6804_; 
v_a_6803_ = lean_ctor_get(v___x_6795_, 0);
lean_inc(v_a_6803_);
lean_dec_ref_known(v___x_6795_, 1);
v___x_6804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6804_, 0, v_config_6793_);
lean_ctor_set(v___x_6804_, 1, v_a_6803_);
return v___x_6804_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_spec_x21___boxed(lean_object* v_tz_6805_, lean_object* v_input_6806_, lean_object* v_config_6807_){
_start:
{
lean_object* v_res_6808_; 
v_res_6808_ = l_Std_Time_GenericFormat_spec_x21(v_tz_6805_, v_input_6806_, v_config_6807_);
lean_dec(v_tz_6805_);
return v_res_6808_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Time_GenericFormat_format_spec__1(lean_object* v_x_6809_, lean_object* v_x_6810_){
_start:
{
if (lean_obj_tag(v_x_6810_) == 0)
{
return v_x_6809_;
}
else
{
lean_object* v_head_6811_; lean_object* v_tail_6812_; lean_object* v___x_6813_; 
v_head_6811_ = lean_ctor_get(v_x_6810_, 0);
v_tail_6812_ = lean_ctor_get(v_x_6810_, 1);
v___x_6813_ = lean_string_append(v_x_6809_, v_head_6811_);
v_x_6809_ = v___x_6813_;
v_x_6810_ = v_tail_6812_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Time_GenericFormat_format_spec__1___boxed(lean_object* v_x_6815_, lean_object* v_x_6816_){
_start:
{
lean_object* v_res_6817_; 
v_res_6817_ = l_List_foldl___at___00Std_Time_GenericFormat_format_spec__1(v_x_6815_, v_x_6816_);
lean_dec(v_x_6816_);
return v_res_6817_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0___lam__0(lean_object* v_tz_6818_, lean_object* v_timestamp_6819_, lean_object* v___x_6820_, lean_object* v_x_6821_){
_start:
{
lean_object* v_offset_6822_; lean_object* v_second_6823_; lean_object* v_nano_6824_; lean_object* v___x_6825_; lean_object* v___x_6826_; lean_object* v___x_6827_; lean_object* v_nanos_6828_; lean_object* v___x_6829_; lean_object* v_nanos_6830_; lean_object* v___x_6831_; lean_object* v___x_6832_; lean_object* v___x_6833_; 
v_offset_6822_ = lean_ctor_get(v_tz_6818_, 0);
v_second_6823_ = lean_ctor_get(v_timestamp_6819_, 0);
v_nano_6824_ = lean_ctor_get(v_timestamp_6819_, 1);
v___x_6825_ = lean_nat_to_int(v___x_6820_);
v___x_6826_ = lean_obj_once(&l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1, &l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1_once, _init_l___private_Std_Time_Format_Basic_0__Std_Time_toIsoString___closed__1);
v___x_6827_ = lean_int_mul(v_second_6823_, v___x_6826_);
v_nanos_6828_ = lean_int_add(v___x_6827_, v_nano_6824_);
lean_dec(v___x_6827_);
v___x_6829_ = lean_int_mul(v_offset_6822_, v___x_6826_);
v_nanos_6830_ = lean_int_add(v___x_6829_, v___x_6825_);
lean_dec(v___x_6825_);
lean_dec(v___x_6829_);
v___x_6831_ = lean_int_add(v_nanos_6828_, v_nanos_6830_);
lean_dec(v_nanos_6830_);
lean_dec(v_nanos_6828_);
v___x_6832_ = l_Std_Time_Duration_ofNanoseconds(v___x_6831_);
lean_dec(v___x_6831_);
v___x_6833_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_6832_);
return v___x_6833_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0___lam__0___boxed(lean_object* v_tz_6834_, lean_object* v_timestamp_6835_, lean_object* v___x_6836_, lean_object* v_x_6837_){
_start:
{
lean_object* v_res_6838_; 
v_res_6838_ = l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0___lam__0(v_tz_6834_, v_timestamp_6835_, v___x_6836_, v_x_6837_);
lean_dec_ref(v_timestamp_6835_);
lean_dec_ref(v_tz_6834_);
return v_res_6838_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0_spec__0(lean_object* v_aw_6839_, lean_object* v_date_6840_, lean_object* v_dateformat_6841_, lean_object* v_a_6842_, lean_object* v_a_6843_){
_start:
{
if (lean_obj_tag(v_a_6842_) == 0)
{
lean_object* v___x_6844_; 
lean_dec_ref(v_date_6840_);
v___x_6844_ = l_List_reverse___redArg(v_a_6843_);
return v___x_6844_;
}
else
{
lean_object* v_head_6845_; lean_object* v_tail_6846_; lean_object* v___x_6848_; uint8_t v_isShared_6849_; uint8_t v_isSharedCheck_6875_; 
v_head_6845_ = lean_ctor_get(v_a_6842_, 0);
v_tail_6846_ = lean_ctor_get(v_a_6842_, 1);
v_isSharedCheck_6875_ = !lean_is_exclusive(v_a_6842_);
if (v_isSharedCheck_6875_ == 0)
{
v___x_6848_ = v_a_6842_;
v_isShared_6849_ = v_isSharedCheck_6875_;
goto v_resetjp_6847_;
}
else
{
lean_inc(v_tail_6846_);
lean_inc(v_head_6845_);
lean_dec(v_a_6842_);
v___x_6848_ = lean_box(0);
v_isShared_6849_ = v_isSharedCheck_6875_;
goto v_resetjp_6847_;
}
v_resetjp_6847_:
{
lean_object* v___y_6851_; 
if (lean_obj_tag(v_aw_6839_) == 0)
{
lean_object* v_a_6856_; lean_object* v_offset_6857_; lean_object* v_name_6858_; lean_object* v_abbreviation_6859_; uint8_t v_isDST_6860_; lean_object* v_timestamp_6861_; uint8_t v___x_6862_; uint8_t v___x_6863_; lean_object* v_ltt_6864_; lean_object* v___x_6865_; lean_object* v___x_6866_; lean_object* v___x_6867_; lean_object* v___x_6868_; lean_object* v_tz_6869_; lean_object* v___f_6870_; lean_object* v___x_6871_; lean_object* v___x_6872_; lean_object* v___x_6873_; 
v_a_6856_ = lean_ctor_get(v_aw_6839_, 0);
v_offset_6857_ = lean_ctor_get(v_a_6856_, 0);
v_name_6858_ = lean_ctor_get(v_a_6856_, 1);
v_abbreviation_6859_ = lean_ctor_get(v_a_6856_, 2);
v_isDST_6860_ = lean_ctor_get_uint8(v_a_6856_, sizeof(void*)*3);
v_timestamp_6861_ = lean_ctor_get(v_date_6840_, 1);
v___x_6862_ = 0;
v___x_6863_ = 1;
lean_inc_ref(v_name_6858_);
lean_inc_ref(v_abbreviation_6859_);
lean_inc(v_offset_6857_);
v_ltt_6864_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_ltt_6864_, 0, v_offset_6857_);
lean_ctor_set(v_ltt_6864_, 1, v_abbreviation_6859_);
lean_ctor_set(v_ltt_6864_, 2, v_name_6858_);
lean_ctor_set_uint8(v_ltt_6864_, sizeof(void*)*3, v_isDST_6860_);
lean_ctor_set_uint8(v_ltt_6864_, sizeof(void*)*3 + 1, v___x_6862_);
lean_ctor_set_uint8(v_ltt_6864_, sizeof(void*)*3 + 2, v___x_6863_);
v___x_6865_ = lean_unsigned_to_nat(0u);
v___x_6866_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__0));
v___x_6867_ = lean_box(0);
v___x_6868_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6868_, 0, v_ltt_6864_);
lean_ctor_set(v___x_6868_, 1, v___x_6866_);
lean_ctor_set(v___x_6868_, 2, v___x_6867_);
lean_inc_ref(v___x_6868_);
v_tz_6869_ = l_Std_Time_TimeZone_ZoneRules_timezoneAt(v___x_6868_, v_timestamp_6861_);
lean_inc_ref_n(v_timestamp_6861_, 2);
lean_inc_ref(v_tz_6869_);
v___f_6870_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0___lam__0___boxed), 4, 3);
lean_closure_set(v___f_6870_, 0, v_tz_6869_);
lean_closure_set(v___f_6870_, 1, v_timestamp_6861_);
lean_closure_set(v___f_6870_, 2, v___x_6865_);
v___x_6871_ = lean_mk_thunk(v___f_6870_);
v___x_6872_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6872_, 0, v___x_6871_);
lean_ctor_set(v___x_6872_, 1, v_timestamp_6861_);
lean_ctor_set(v___x_6872_, 2, v___x_6868_);
lean_ctor_set(v___x_6872_, 3, v_tz_6869_);
v___x_6873_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatPartWithDate(v_dateformat_6841_, v___x_6872_, v_head_6845_);
v___y_6851_ = v___x_6873_;
goto v___jp_6850_;
}
else
{
lean_object* v___x_6874_; 
lean_inc_ref(v_date_6840_);
v___x_6874_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatPartWithDate(v_dateformat_6841_, v_date_6840_, v_head_6845_);
v___y_6851_ = v___x_6874_;
goto v___jp_6850_;
}
v___jp_6850_:
{
lean_object* v___x_6853_; 
if (v_isShared_6849_ == 0)
{
lean_ctor_set(v___x_6848_, 1, v_a_6843_);
lean_ctor_set(v___x_6848_, 0, v___y_6851_);
v___x_6853_ = v___x_6848_;
goto v_reusejp_6852_;
}
else
{
lean_object* v_reuseFailAlloc_6855_; 
v_reuseFailAlloc_6855_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6855_, 0, v___y_6851_);
lean_ctor_set(v_reuseFailAlloc_6855_, 1, v_a_6843_);
v___x_6853_ = v_reuseFailAlloc_6855_;
goto v_reusejp_6852_;
}
v_reusejp_6852_:
{
v_a_6842_ = v_tail_6846_;
v_a_6843_ = v___x_6853_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0_spec__0___boxed(lean_object* v_aw_6876_, lean_object* v_date_6877_, lean_object* v_dateformat_6878_, lean_object* v_a_6879_, lean_object* v_a_6880_){
_start:
{
lean_object* v_res_6881_; 
v_res_6881_ = l_List_mapTR_loop___at___00List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0_spec__0(v_aw_6876_, v_date_6877_, v_dateformat_6878_, v_a_6879_, v_a_6880_);
lean_dec_ref(v_dateformat_6878_);
lean_dec(v_aw_6876_);
return v_res_6881_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0(lean_object* v_aw_6882_, lean_object* v_date_6883_, lean_object* v_dateformat_6884_, lean_object* v_a_6885_, lean_object* v_a_6886_){
_start:
{
if (lean_obj_tag(v_a_6885_) == 0)
{
lean_object* v___x_6887_; 
lean_dec_ref(v_date_6883_);
v___x_6887_ = l_List_reverse___redArg(v_a_6886_);
return v___x_6887_;
}
else
{
lean_object* v_head_6888_; lean_object* v_tail_6889_; lean_object* v___x_6891_; uint8_t v_isShared_6892_; uint8_t v_isSharedCheck_6918_; 
v_head_6888_ = lean_ctor_get(v_a_6885_, 0);
v_tail_6889_ = lean_ctor_get(v_a_6885_, 1);
v_isSharedCheck_6918_ = !lean_is_exclusive(v_a_6885_);
if (v_isSharedCheck_6918_ == 0)
{
v___x_6891_ = v_a_6885_;
v_isShared_6892_ = v_isSharedCheck_6918_;
goto v_resetjp_6890_;
}
else
{
lean_inc(v_tail_6889_);
lean_inc(v_head_6888_);
lean_dec(v_a_6885_);
v___x_6891_ = lean_box(0);
v_isShared_6892_ = v_isSharedCheck_6918_;
goto v_resetjp_6890_;
}
v_resetjp_6890_:
{
lean_object* v___y_6894_; 
if (lean_obj_tag(v_aw_6882_) == 0)
{
lean_object* v_a_6899_; lean_object* v_offset_6900_; lean_object* v_name_6901_; lean_object* v_abbreviation_6902_; uint8_t v_isDST_6903_; lean_object* v_timestamp_6904_; uint8_t v___x_6905_; uint8_t v___x_6906_; lean_object* v_ltt_6907_; lean_object* v___x_6908_; lean_object* v___x_6909_; lean_object* v___x_6910_; lean_object* v___x_6911_; lean_object* v_tz_6912_; lean_object* v___f_6913_; lean_object* v___x_6914_; lean_object* v___x_6915_; lean_object* v___x_6916_; 
v_a_6899_ = lean_ctor_get(v_aw_6882_, 0);
v_offset_6900_ = lean_ctor_get(v_a_6899_, 0);
v_name_6901_ = lean_ctor_get(v_a_6899_, 1);
v_abbreviation_6902_ = lean_ctor_get(v_a_6899_, 2);
v_isDST_6903_ = lean_ctor_get_uint8(v_a_6899_, sizeof(void*)*3);
v_timestamp_6904_ = lean_ctor_get(v_date_6883_, 1);
v___x_6905_ = 0;
v___x_6906_ = 1;
lean_inc_ref(v_name_6901_);
lean_inc_ref(v_abbreviation_6902_);
lean_inc(v_offset_6900_);
v_ltt_6907_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_ltt_6907_, 0, v_offset_6900_);
lean_ctor_set(v_ltt_6907_, 1, v_abbreviation_6902_);
lean_ctor_set(v_ltt_6907_, 2, v_name_6901_);
lean_ctor_set_uint8(v_ltt_6907_, sizeof(void*)*3, v_isDST_6903_);
lean_ctor_set_uint8(v_ltt_6907_, sizeof(void*)*3 + 1, v___x_6905_);
lean_ctor_set_uint8(v_ltt_6907_, sizeof(void*)*3 + 2, v___x_6906_);
v___x_6908_ = lean_unsigned_to_nat(0u);
v___x_6909_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build___closed__0));
v___x_6910_ = lean_box(0);
v___x_6911_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6911_, 0, v_ltt_6907_);
lean_ctor_set(v___x_6911_, 1, v___x_6909_);
lean_ctor_set(v___x_6911_, 2, v___x_6910_);
lean_inc_ref(v___x_6911_);
v_tz_6912_ = l_Std_Time_TimeZone_ZoneRules_timezoneAt(v___x_6911_, v_timestamp_6904_);
lean_inc_ref_n(v_timestamp_6904_, 2);
lean_inc_ref(v_tz_6912_);
v___f_6913_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0___lam__0___boxed), 4, 3);
lean_closure_set(v___f_6913_, 0, v_tz_6912_);
lean_closure_set(v___f_6913_, 1, v_timestamp_6904_);
lean_closure_set(v___f_6913_, 2, v___x_6908_);
v___x_6914_ = lean_mk_thunk(v___f_6913_);
v___x_6915_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6915_, 0, v___x_6914_);
lean_ctor_set(v___x_6915_, 1, v_timestamp_6904_);
lean_ctor_set(v___x_6915_, 2, v___x_6911_);
lean_ctor_set(v___x_6915_, 3, v_tz_6912_);
v___x_6916_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatPartWithDate(v_dateformat_6884_, v___x_6915_, v_head_6888_);
v___y_6894_ = v___x_6916_;
goto v___jp_6893_;
}
else
{
lean_object* v___x_6917_; 
lean_inc_ref(v_date_6883_);
v___x_6917_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatPartWithDate(v_dateformat_6884_, v_date_6883_, v_head_6888_);
v___y_6894_ = v___x_6917_;
goto v___jp_6893_;
}
v___jp_6893_:
{
lean_object* v___x_6896_; 
if (v_isShared_6892_ == 0)
{
lean_ctor_set(v___x_6891_, 1, v_a_6886_);
lean_ctor_set(v___x_6891_, 0, v___y_6894_);
v___x_6896_ = v___x_6891_;
goto v_reusejp_6895_;
}
else
{
lean_object* v_reuseFailAlloc_6898_; 
v_reuseFailAlloc_6898_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6898_, 0, v___y_6894_);
lean_ctor_set(v_reuseFailAlloc_6898_, 1, v_a_6886_);
v___x_6896_ = v_reuseFailAlloc_6898_;
goto v_reusejp_6895_;
}
v_reusejp_6895_:
{
lean_object* v___x_6897_; 
v___x_6897_ = l_List_mapTR_loop___at___00List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0_spec__0(v_aw_6882_, v_date_6883_, v_dateformat_6884_, v_tail_6889_, v___x_6896_);
return v___x_6897_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0___boxed(lean_object* v_aw_6919_, lean_object* v_date_6920_, lean_object* v_dateformat_6921_, lean_object* v_a_6922_, lean_object* v_a_6923_){
_start:
{
lean_object* v_res_6924_; 
v_res_6924_ = l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0(v_aw_6919_, v_date_6920_, v_dateformat_6921_, v_a_6922_, v_a_6923_);
lean_dec_ref(v_dateformat_6921_);
lean_dec(v_aw_6919_);
return v_res_6924_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_format(lean_object* v_aw_6925_, lean_object* v_format_6926_, lean_object* v_date_6927_){
_start:
{
lean_object* v_config_6928_; lean_object* v_string_6929_; lean_object* v_dateformat_6930_; lean_object* v___x_6931_; lean_object* v___x_6932_; lean_object* v___x_6933_; lean_object* v___x_6934_; 
v_config_6928_ = lean_ctor_get(v_format_6926_, 0);
lean_inc_ref(v_config_6928_);
v_string_6929_ = lean_ctor_get(v_format_6926_, 1);
lean_inc(v_string_6929_);
lean_dec_ref(v_format_6926_);
v_dateformat_6930_ = lean_ctor_get(v_config_6928_, 0);
lean_inc_ref(v_dateformat_6930_);
lean_dec_ref(v_config_6928_);
v___x_6931_ = lean_box(0);
v___x_6932_ = l_List_mapTR_loop___at___00Std_Time_GenericFormat_format_spec__0(v_aw_6925_, v_date_6927_, v_dateformat_6930_, v_string_6929_, v___x_6931_);
lean_dec_ref(v_dateformat_6930_);
v___x_6933_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_6934_ = l_List_foldl___at___00Std_Time_GenericFormat_format_spec__1(v___x_6933_, v___x_6932_);
lean_dec(v___x_6932_);
return v___x_6934_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_format___boxed(lean_object* v_aw_6935_, lean_object* v_format_6936_, lean_object* v_date_6937_){
_start:
{
lean_object* v_res_6938_; 
v_res_6938_ = l_Std_Time_GenericFormat_format(v_aw_6935_, v_format_6936_, v_date_6937_);
lean_dec(v_aw_6935_);
return v_res_6938_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go(lean_object* v_config_6942_, lean_object* v_aw_6943_, lean_object* v_builder_6944_, lean_object* v_x_6945_, lean_object* v_a_6946_){
_start:
{
if (lean_obj_tag(v_x_6945_) == 0)
{
lean_object* v___x_6947_; 
lean_dec_ref(v_config_6942_);
v___x_6947_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_DateBuilder_build(v_builder_6944_, v_aw_6943_);
if (lean_obj_tag(v___x_6947_) == 0)
{
lean_object* v___x_6948_; lean_object* v___x_6949_; 
v___x_6948_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go___closed__1));
v___x_6949_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6949_, 0, v_a_6946_);
lean_ctor_set(v___x_6949_, 1, v___x_6948_);
return v___x_6949_;
}
else
{
lean_object* v_val_6950_; lean_object* v___x_6951_; 
v_val_6950_ = lean_ctor_get(v___x_6947_, 0);
lean_inc(v_val_6950_);
lean_dec_ref_known(v___x_6947_, 1);
v___x_6951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6951_, 0, v_a_6946_);
lean_ctor_set(v___x_6951_, 1, v_val_6950_);
return v___x_6951_;
}
}
else
{
lean_object* v_head_6952_; lean_object* v_tail_6953_; lean_object* v___x_6954_; 
v_head_6952_ = lean_ctor_get(v_x_6945_, 0);
lean_inc(v_head_6952_);
v_tail_6953_ = lean_ctor_get(v_x_6945_, 1);
lean_inc(v_tail_6953_);
lean_dec_ref_known(v_x_6945_, 2);
lean_inc_ref(v_config_6942_);
v___x_6954_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parseWithDate(v_builder_6944_, v_config_6942_, v_head_6952_, v_a_6946_);
if (lean_obj_tag(v___x_6954_) == 0)
{
lean_object* v_pos_6955_; lean_object* v_res_6956_; 
v_pos_6955_ = lean_ctor_get(v___x_6954_, 0);
lean_inc(v_pos_6955_);
v_res_6956_ = lean_ctor_get(v___x_6954_, 1);
lean_inc(v_res_6956_);
lean_dec_ref_known(v___x_6954_, 2);
v_builder_6944_ = v_res_6956_;
v_x_6945_ = v_tail_6953_;
v_a_6946_ = v_pos_6955_;
goto _start;
}
else
{
lean_object* v_pos_6958_; lean_object* v_err_6959_; lean_object* v___x_6961_; uint8_t v_isShared_6962_; uint8_t v_isSharedCheck_6966_; 
lean_dec(v_tail_6953_);
lean_dec(v_aw_6943_);
lean_dec_ref(v_config_6942_);
v_pos_6958_ = lean_ctor_get(v___x_6954_, 0);
v_err_6959_ = lean_ctor_get(v___x_6954_, 1);
v_isSharedCheck_6966_ = !lean_is_exclusive(v___x_6954_);
if (v_isSharedCheck_6966_ == 0)
{
v___x_6961_ = v___x_6954_;
v_isShared_6962_ = v_isSharedCheck_6966_;
goto v_resetjp_6960_;
}
else
{
lean_inc(v_err_6959_);
lean_inc(v_pos_6958_);
lean_dec(v___x_6954_);
v___x_6961_ = lean_box(0);
v_isShared_6962_ = v_isSharedCheck_6966_;
goto v_resetjp_6960_;
}
v_resetjp_6960_:
{
lean_object* v___x_6964_; 
if (v_isShared_6962_ == 0)
{
v___x_6964_ = v___x_6961_;
goto v_reusejp_6963_;
}
else
{
lean_object* v_reuseFailAlloc_6965_; 
v_reuseFailAlloc_6965_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6965_, 0, v_pos_6958_);
lean_ctor_set(v_reuseFailAlloc_6965_, 1, v_err_6959_);
v___x_6964_ = v_reuseFailAlloc_6965_;
goto v_reusejp_6963_;
}
v_reusejp_6963_:
{
return v___x_6964_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser(lean_object* v_format_6969_, lean_object* v_config_6970_, lean_object* v_aw_6971_, lean_object* v_a_6972_){
_start:
{
lean_object* v___x_6973_; lean_object* v___x_6974_; 
v___x_6973_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser___closed__0));
v___x_6974_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser_go(v_config_6970_, v_aw_6971_, v___x_6973_, v_format_6969_, v_a_6972_);
return v___x_6974_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(lean_object* v_config_6978_, lean_object* v_format_6979_, lean_object* v_func_6980_, lean_object* v_a_6981_){
_start:
{
if (lean_obj_tag(v_format_6979_) == 0)
{
lean_dec_ref(v_config_6978_);
if (lean_obj_tag(v_func_6980_) == 0)
{
lean_object* v___x_6982_; lean_object* v___x_6983_; 
v___x_6982_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg___closed__1));
v___x_6983_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6983_, 0, v_a_6981_);
lean_ctor_set(v___x_6983_, 1, v___x_6982_);
return v___x_6983_;
}
else
{
lean_object* v_val_6984_; lean_object* v_fst_6985_; lean_object* v_snd_6986_; lean_object* v___x_6987_; uint8_t v___x_6988_; 
v_val_6984_ = lean_ctor_get(v_func_6980_, 0);
lean_inc(v_val_6984_);
lean_dec_ref_known(v_func_6980_, 1);
v_fst_6985_ = lean_ctor_get(v_a_6981_, 0);
v_snd_6986_ = lean_ctor_get(v_a_6981_, 1);
v___x_6987_ = lean_string_utf8_byte_size(v_fst_6985_);
v___x_6988_ = lean_nat_dec_eq(v_snd_6986_, v___x_6987_);
if (v___x_6988_ == 0)
{
lean_object* v___x_6989_; lean_object* v___x_6990_; 
lean_dec(v_val_6984_);
v___x_6989_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__2));
v___x_6990_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6990_, 0, v_a_6981_);
lean_ctor_set(v___x_6990_, 1, v___x_6989_);
return v___x_6990_;
}
else
{
lean_object* v___x_6991_; 
v___x_6991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6991_, 0, v_a_6981_);
lean_ctor_set(v___x_6991_, 1, v_val_6984_);
return v___x_6991_;
}
}
}
else
{
lean_object* v_head_6992_; 
v_head_6992_ = lean_ctor_get(v_format_6979_, 0);
lean_inc(v_head_6992_);
if (lean_obj_tag(v_head_6992_) == 0)
{
lean_object* v_tail_6993_; lean_object* v_val_6994_; lean_object* v___x_6995_; 
v_tail_6993_ = lean_ctor_get(v_format_6979_, 1);
lean_inc(v_tail_6993_);
lean_dec_ref_known(v_format_6979_, 2);
v_val_6994_ = lean_ctor_get(v_head_6992_, 0);
lean_inc_ref(v_val_6994_);
lean_dec_ref_known(v_head_6992_, 1);
v___x_6995_ = l_Std_Internal_Parsec_String_pstring(v_val_6994_, v_a_6981_);
if (lean_obj_tag(v___x_6995_) == 0)
{
lean_object* v_pos_6996_; 
v_pos_6996_ = lean_ctor_get(v___x_6995_, 0);
lean_inc(v_pos_6996_);
lean_dec_ref_known(v___x_6995_, 2);
v_format_6979_ = v_tail_6993_;
v_a_6981_ = v_pos_6996_;
goto _start;
}
else
{
lean_object* v_pos_6998_; lean_object* v_err_6999_; lean_object* v___x_7001_; uint8_t v_isShared_7002_; uint8_t v_isSharedCheck_7006_; 
lean_dec(v_tail_6993_);
lean_dec(v_func_6980_);
lean_dec_ref(v_config_6978_);
v_pos_6998_ = lean_ctor_get(v___x_6995_, 0);
v_err_6999_ = lean_ctor_get(v___x_6995_, 1);
v_isSharedCheck_7006_ = !lean_is_exclusive(v___x_6995_);
if (v_isSharedCheck_7006_ == 0)
{
v___x_7001_ = v___x_6995_;
v_isShared_7002_ = v_isSharedCheck_7006_;
goto v_resetjp_7000_;
}
else
{
lean_inc(v_err_6999_);
lean_inc(v_pos_6998_);
lean_dec(v___x_6995_);
v___x_7001_ = lean_box(0);
v_isShared_7002_ = v_isSharedCheck_7006_;
goto v_resetjp_7000_;
}
v_resetjp_7000_:
{
lean_object* v___x_7004_; 
if (v_isShared_7002_ == 0)
{
v___x_7004_ = v___x_7001_;
goto v_reusejp_7003_;
}
else
{
lean_object* v_reuseFailAlloc_7005_; 
v_reuseFailAlloc_7005_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7005_, 0, v_pos_6998_);
lean_ctor_set(v_reuseFailAlloc_7005_, 1, v_err_6999_);
v___x_7004_ = v_reuseFailAlloc_7005_;
goto v_reusejp_7003_;
}
v_reusejp_7003_:
{
return v___x_7004_;
}
}
}
}
else
{
lean_object* v_tail_7007_; lean_object* v_modifier_7008_; lean_object* v___x_7009_; 
v_tail_7007_ = lean_ctor_get(v_format_6979_, 1);
lean_inc(v_tail_7007_);
lean_dec_ref_known(v_format_6979_, 2);
v_modifier_7008_ = lean_ctor_get(v_head_6992_, 0);
lean_inc_ref(v_modifier_7008_);
lean_dec_ref_known(v_head_6992_, 1);
lean_inc_ref(v_config_6978_);
v___x_7009_ = l___private_Std_Time_Format_Basic_0__Std_Time_parseWith(v_config_6978_, v_modifier_7008_, v_a_6981_);
if (lean_obj_tag(v___x_7009_) == 0)
{
lean_object* v_pos_7010_; lean_object* v_res_7011_; lean_object* v___x_7012_; 
v_pos_7010_ = lean_ctor_get(v___x_7009_, 0);
lean_inc(v_pos_7010_);
v_res_7011_ = lean_ctor_get(v___x_7009_, 1);
lean_inc(v_res_7011_);
lean_dec_ref_known(v___x_7009_, 2);
v___x_7012_ = lean_apply_1(v_func_6980_, v_res_7011_);
v_format_6979_ = v_tail_7007_;
v_func_6980_ = v___x_7012_;
v_a_6981_ = v_pos_7010_;
goto _start;
}
else
{
lean_object* v_pos_7014_; lean_object* v_err_7015_; lean_object* v___x_7017_; uint8_t v_isShared_7018_; uint8_t v_isSharedCheck_7022_; 
lean_dec(v_tail_7007_);
lean_dec(v_func_6980_);
lean_dec_ref(v_config_6978_);
v_pos_7014_ = lean_ctor_get(v___x_7009_, 0);
v_err_7015_ = lean_ctor_get(v___x_7009_, 1);
v_isSharedCheck_7022_ = !lean_is_exclusive(v___x_7009_);
if (v_isSharedCheck_7022_ == 0)
{
v___x_7017_ = v___x_7009_;
v_isShared_7018_ = v_isSharedCheck_7022_;
goto v_resetjp_7016_;
}
else
{
lean_inc(v_err_7015_);
lean_inc(v_pos_7014_);
lean_dec(v___x_7009_);
v___x_7017_ = lean_box(0);
v_isShared_7018_ = v_isSharedCheck_7022_;
goto v_resetjp_7016_;
}
v_resetjp_7016_:
{
lean_object* v___x_7020_; 
if (v_isShared_7018_ == 0)
{
v___x_7020_ = v___x_7017_;
goto v_reusejp_7019_;
}
else
{
lean_object* v_reuseFailAlloc_7021_; 
v_reuseFailAlloc_7021_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7021_, 0, v_pos_7014_);
lean_ctor_set(v_reuseFailAlloc_7021_, 1, v_err_7015_);
v___x_7020_ = v_reuseFailAlloc_7021_;
goto v_reusejp_7019_;
}
v_reusejp_7019_:
{
return v___x_7020_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go(lean_object* v_00_u03b1_7023_, lean_object* v_config_7024_, lean_object* v_format_7025_, lean_object* v_func_7026_, lean_object* v_a_7027_){
_start:
{
lean_object* v___x_7028_; 
v___x_7028_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(v_config_7024_, v_format_7025_, v_func_7026_, v_a_7027_);
return v___x_7028_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_builderParser___redArg(lean_object* v_format_7029_, lean_object* v_config_7030_, lean_object* v_func_7031_, lean_object* v_a_7032_){
_start:
{
lean_object* v___x_7033_; 
v___x_7033_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(v_config_7030_, v_format_7029_, v_func_7031_, v_a_7032_);
return v___x_7033_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_builderParser(lean_object* v_00_u03b1_7034_, lean_object* v_format_7035_, lean_object* v_config_7036_, lean_object* v_func_7037_, lean_object* v_a_7038_){
_start:
{
lean_object* v___x_7039_; 
v___x_7039_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(v_config_7036_, v_format_7035_, v_func_7037_, v_a_7038_);
return v___x_7039_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parse___lam__0(lean_object* v_string_7040_, lean_object* v_config_7041_, lean_object* v_aw_7042_, lean_object* v___y_7043_){
_start:
{
lean_object* v___x_7044_; 
v___x_7044_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_parser(v_string_7040_, v_config_7041_, v_aw_7042_, v___y_7043_);
if (lean_obj_tag(v___x_7044_) == 0)
{
lean_object* v_pos_7045_; lean_object* v_fst_7046_; lean_object* v_snd_7047_; lean_object* v___x_7048_; uint8_t v___x_7049_; 
v_pos_7045_ = lean_ctor_get(v___x_7044_, 0);
v_fst_7046_ = lean_ctor_get(v_pos_7045_, 0);
v_snd_7047_ = lean_ctor_get(v_pos_7045_, 1);
v___x_7048_ = lean_string_utf8_byte_size(v_fst_7046_);
v___x_7049_ = lean_nat_dec_eq(v_snd_7047_, v___x_7048_);
if (v___x_7049_ == 0)
{
lean_object* v___x_7051_; uint8_t v_isShared_7052_; uint8_t v_isSharedCheck_7057_; 
lean_inc(v_pos_7045_);
v_isSharedCheck_7057_ = !lean_is_exclusive(v___x_7044_);
if (v_isSharedCheck_7057_ == 0)
{
lean_object* v_unused_7058_; lean_object* v_unused_7059_; 
v_unused_7058_ = lean_ctor_get(v___x_7044_, 1);
lean_dec(v_unused_7058_);
v_unused_7059_ = lean_ctor_get(v___x_7044_, 0);
lean_dec(v_unused_7059_);
v___x_7051_ = v___x_7044_;
v_isShared_7052_ = v_isSharedCheck_7057_;
goto v_resetjp_7050_;
}
else
{
lean_dec(v___x_7044_);
v___x_7051_ = lean_box(0);
v_isShared_7052_ = v_isSharedCheck_7057_;
goto v_resetjp_7050_;
}
v_resetjp_7050_:
{
lean_object* v___x_7053_; lean_object* v___x_7055_; 
v___x_7053_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_specParser___closed__2));
if (v_isShared_7052_ == 0)
{
lean_ctor_set_tag(v___x_7051_, 1);
lean_ctor_set(v___x_7051_, 1, v___x_7053_);
v___x_7055_ = v___x_7051_;
goto v_reusejp_7054_;
}
else
{
lean_object* v_reuseFailAlloc_7056_; 
v_reuseFailAlloc_7056_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7056_, 0, v_pos_7045_);
lean_ctor_set(v_reuseFailAlloc_7056_, 1, v___x_7053_);
v___x_7055_ = v_reuseFailAlloc_7056_;
goto v_reusejp_7054_;
}
v_reusejp_7054_:
{
return v___x_7055_;
}
}
}
else
{
return v___x_7044_;
}
}
else
{
return v___x_7044_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parse(lean_object* v_aw_7060_, lean_object* v_format_7061_, lean_object* v_input_7062_){
_start:
{
lean_object* v_config_7063_; lean_object* v_string_7064_; lean_object* v___f_7065_; lean_object* v___x_7066_; 
v_config_7063_ = lean_ctor_get(v_format_7061_, 0);
lean_inc_ref(v_config_7063_);
v_string_7064_ = lean_ctor_get(v_format_7061_, 1);
lean_inc(v_string_7064_);
lean_dec_ref(v_format_7061_);
v___f_7065_ = lean_alloc_closure((void*)(l_Std_Time_GenericFormat_parse___lam__0), 4, 3);
lean_closure_set(v___f_7065_, 0, v_string_7064_);
lean_closure_set(v___f_7065_, 1, v_config_7063_);
lean_closure_set(v___f_7065_, 2, v_aw_7060_);
v___x_7066_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___f_7065_, v_input_7062_);
return v___x_7066_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Time_GenericFormat_parse_x21_spec__0(lean_object* v_msg_7067_){
_start:
{
lean_object* v___x_7068_; lean_object* v___x_7069_; 
v___x_7068_ = l_Std_Time_instInhabitedDateTime;
v___x_7069_ = lean_panic_fn_borrowed(v___x_7068_, v_msg_7067_);
return v___x_7069_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parse_x21(lean_object* v_aw_7071_, lean_object* v_format_7072_, lean_object* v_input_7073_){
_start:
{
lean_object* v___x_7074_; 
v___x_7074_ = l_Std_Time_GenericFormat_parse(v_aw_7071_, v_format_7072_, v_input_7073_);
if (lean_obj_tag(v___x_7074_) == 0)
{
lean_object* v_a_7075_; lean_object* v___x_7076_; lean_object* v___x_7077_; lean_object* v___x_7078_; lean_object* v___x_7079_; lean_object* v___x_7080_; lean_object* v___x_7081_; 
v_a_7075_ = lean_ctor_get(v___x_7074_, 0);
lean_inc(v_a_7075_);
lean_dec_ref_known(v___x_7074_, 1);
v___x_7076_ = ((lean_object*)(l_Std_Time_GenericFormat_spec_x21___closed__0));
v___x_7077_ = ((lean_object*)(l_Std_Time_GenericFormat_parse_x21___closed__0));
v___x_7078_ = lean_unsigned_to_nat(1124u);
v___x_7079_ = lean_unsigned_to_nat(18u);
v___x_7080_ = l_mkPanicMessageWithDecl(v___x_7076_, v___x_7077_, v___x_7078_, v___x_7079_, v_a_7075_);
lean_dec(v_a_7075_);
v___x_7081_ = l_panic___at___00Std_Time_GenericFormat_parse_x21_spec__0(v___x_7080_);
return v___x_7081_;
}
else
{
lean_object* v_a_7082_; 
v_a_7082_ = lean_ctor_get(v___x_7074_, 0);
lean_inc(v_a_7082_);
lean_dec_ref_known(v___x_7074_, 1);
return v_a_7082_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder___redArg___lam__0(lean_object* v_config_7083_, lean_object* v_string_7084_, lean_object* v_builder_7085_, lean_object* v___y_7086_){
_start:
{
lean_object* v___x_7087_; 
v___x_7087_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_builderParser_go___redArg(v_config_7083_, v_string_7084_, v_builder_7085_, v___y_7086_);
return v___x_7087_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder___redArg(lean_object* v_format_7088_, lean_object* v_builder_7089_, lean_object* v_input_7090_){
_start:
{
lean_object* v_config_7091_; lean_object* v_string_7092_; lean_object* v___f_7093_; lean_object* v___x_7094_; 
v_config_7091_ = lean_ctor_get(v_format_7088_, 0);
lean_inc_ref(v_config_7091_);
v_string_7092_ = lean_ctor_get(v_format_7088_, 1);
lean_inc(v_string_7092_);
lean_dec_ref(v_format_7088_);
v___f_7093_ = lean_alloc_closure((void*)(l_Std_Time_GenericFormat_parseBuilder___redArg___lam__0), 4, 3);
lean_closure_set(v___f_7093_, 0, v_config_7091_);
lean_closure_set(v___f_7093_, 1, v_string_7092_);
lean_closure_set(v___f_7093_, 2, v_builder_7089_);
v___x_7094_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___f_7093_, v_input_7090_);
return v___x_7094_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder(lean_object* v_aw_7095_, lean_object* v_00_u03b1_7096_, lean_object* v_format_7097_, lean_object* v_builder_7098_, lean_object* v_input_7099_){
_start:
{
lean_object* v___x_7100_; 
v___x_7100_ = l_Std_Time_GenericFormat_parseBuilder___redArg(v_format_7097_, v_builder_7098_, v_input_7099_);
return v___x_7100_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder___boxed(lean_object* v_aw_7101_, lean_object* v_00_u03b1_7102_, lean_object* v_format_7103_, lean_object* v_builder_7104_, lean_object* v_input_7105_){
_start:
{
lean_object* v_res_7106_; 
v_res_7106_ = l_Std_Time_GenericFormat_parseBuilder(v_aw_7101_, v_00_u03b1_7102_, v_format_7103_, v_builder_7104_, v_input_7105_);
lean_dec(v_aw_7101_);
return v_res_7106_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___redArg(lean_object* v_inst_7108_, lean_object* v_format_7109_, lean_object* v_builder_7110_, lean_object* v_input_7111_){
_start:
{
lean_object* v___x_7112_; 
v___x_7112_ = l_Std_Time_GenericFormat_parseBuilder___redArg(v_format_7109_, v_builder_7110_, v_input_7111_);
if (lean_obj_tag(v___x_7112_) == 0)
{
lean_object* v_a_7113_; lean_object* v___x_7114_; lean_object* v___x_7115_; lean_object* v___x_7116_; lean_object* v___x_7117_; lean_object* v___x_7118_; lean_object* v___x_7119_; 
v_a_7113_ = lean_ctor_get(v___x_7112_, 0);
lean_inc(v_a_7113_);
lean_dec_ref_known(v___x_7112_, 1);
v___x_7114_ = ((lean_object*)(l_Std_Time_GenericFormat_spec_x21___closed__0));
v___x_7115_ = ((lean_object*)(l_Std_Time_GenericFormat_parseBuilder_x21___redArg___closed__0));
v___x_7116_ = lean_unsigned_to_nat(1138u);
v___x_7117_ = lean_unsigned_to_nat(18u);
v___x_7118_ = l_mkPanicMessageWithDecl(v___x_7114_, v___x_7115_, v___x_7116_, v___x_7117_, v_a_7113_);
lean_dec(v_a_7113_);
v___x_7119_ = l_panic___redArg(v_inst_7108_, v___x_7118_);
return v___x_7119_;
}
else
{
lean_object* v_a_7120_; 
v_a_7120_ = lean_ctor_get(v___x_7112_, 0);
lean_inc(v_a_7120_);
lean_dec_ref_known(v___x_7112_, 1);
return v_a_7120_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___redArg___boxed(lean_object* v_inst_7121_, lean_object* v_format_7122_, lean_object* v_builder_7123_, lean_object* v_input_7124_){
_start:
{
lean_object* v_res_7125_; 
v_res_7125_ = l_Std_Time_GenericFormat_parseBuilder_x21___redArg(v_inst_7121_, v_format_7122_, v_builder_7123_, v_input_7124_);
lean_dec(v_inst_7121_);
return v_res_7125_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21(lean_object* v_00_u03b1_7126_, lean_object* v_aw_7127_, lean_object* v_inst_7128_, lean_object* v_format_7129_, lean_object* v_builder_7130_, lean_object* v_input_7131_){
_start:
{
lean_object* v___x_7132_; 
v___x_7132_ = l_Std_Time_GenericFormat_parseBuilder_x21___redArg(v_inst_7128_, v_format_7129_, v_builder_7130_, v_input_7131_);
return v___x_7132_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_parseBuilder_x21___boxed(lean_object* v_00_u03b1_7133_, lean_object* v_aw_7134_, lean_object* v_inst_7135_, lean_object* v_format_7136_, lean_object* v_builder_7137_, lean_object* v_input_7138_){
_start:
{
lean_object* v_res_7139_; 
v_res_7139_ = l_Std_Time_GenericFormat_parseBuilder_x21(v_00_u03b1_7133_, v_aw_7134_, v_inst_7135_, v_format_7136_, v_builder_7137_, v_input_7138_);
lean_dec(v_inst_7135_);
lean_dec(v_aw_7134_);
return v_res_7139_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatGeneric_go(lean_object* v_getInfo_7140_, lean_object* v_dateformat_7141_, lean_object* v_data_7142_, lean_object* v_format_7143_){
_start:
{
if (lean_obj_tag(v_format_7143_) == 0)
{
lean_object* v___x_7144_; 
lean_dec_ref(v_getInfo_7140_);
v___x_7144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7144_, 0, v_data_7142_);
return v___x_7144_;
}
else
{
lean_object* v_head_7145_; 
v_head_7145_ = lean_ctor_get(v_format_7143_, 0);
lean_inc(v_head_7145_);
if (lean_obj_tag(v_head_7145_) == 0)
{
lean_object* v_tail_7146_; lean_object* v_val_7147_; lean_object* v___x_7148_; 
v_tail_7146_ = lean_ctor_get(v_format_7143_, 1);
lean_inc(v_tail_7146_);
lean_dec_ref_known(v_format_7143_, 2);
v_val_7147_ = lean_ctor_get(v_head_7145_, 0);
lean_inc_ref(v_val_7147_);
lean_dec_ref_known(v_head_7145_, 1);
v___x_7148_ = lean_string_append(v_data_7142_, v_val_7147_);
lean_dec_ref(v_val_7147_);
v_data_7142_ = v___x_7148_;
v_format_7143_ = v_tail_7146_;
goto _start;
}
else
{
lean_object* v_tail_7150_; lean_object* v_modifier_7151_; lean_object* v___x_7152_; 
v_tail_7150_ = lean_ctor_get(v_format_7143_, 1);
lean_inc(v_tail_7150_);
lean_dec_ref_known(v_format_7143_, 2);
v_modifier_7151_ = lean_ctor_get(v_head_7145_, 0);
lean_inc_ref_n(v_modifier_7151_, 2);
lean_dec_ref_known(v_head_7145_, 1);
lean_inc_ref(v_getInfo_7140_);
v___x_7152_ = lean_apply_1(v_getInfo_7140_, v_modifier_7151_);
if (lean_obj_tag(v___x_7152_) == 0)
{
lean_object* v___x_7153_; 
lean_dec_ref(v_modifier_7151_);
lean_dec(v_tail_7150_);
lean_dec_ref(v_data_7142_);
lean_dec_ref(v_getInfo_7140_);
v___x_7153_ = lean_box(0);
return v___x_7153_;
}
else
{
lean_object* v_val_7154_; lean_object* v___x_7155_; lean_object* v___x_7156_; 
v_val_7154_ = lean_ctor_get(v___x_7152_, 0);
lean_inc(v_val_7154_);
lean_dec_ref_known(v___x_7152_, 1);
v___x_7155_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWith(v_dateformat_7141_, v_modifier_7151_, v_val_7154_);
v___x_7156_ = lean_string_append(v_data_7142_, v___x_7155_);
lean_dec_ref(v___x_7155_);
v_data_7142_ = v___x_7156_;
v_format_7143_ = v_tail_7150_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatGeneric_go___boxed(lean_object* v_getInfo_7158_, lean_object* v_dateformat_7159_, lean_object* v_data_7160_, lean_object* v_format_7161_){
_start:
{
lean_object* v_res_7162_; 
v_res_7162_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatGeneric_go(v_getInfo_7158_, v_dateformat_7159_, v_data_7160_, v_format_7161_);
lean_dec_ref(v_dateformat_7159_);
return v_res_7162_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatGeneric___redArg(lean_object* v_format_7163_, lean_object* v_getInfo_7164_){
_start:
{
lean_object* v_config_7165_; lean_object* v_string_7166_; lean_object* v_dateformat_7167_; lean_object* v___x_7168_; lean_object* v___x_7169_; 
v_config_7165_ = lean_ctor_get(v_format_7163_, 0);
lean_inc_ref(v_config_7165_);
v_string_7166_ = lean_ctor_get(v_format_7163_, 1);
lean_inc(v_string_7166_);
lean_dec_ref(v_format_7163_);
v_dateformat_7167_ = lean_ctor_get(v_config_7165_, 0);
lean_inc_ref(v_dateformat_7167_);
lean_dec_ref(v_config_7165_);
v___x_7168_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_7169_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatGeneric_go(v_getInfo_7164_, v_dateformat_7167_, v___x_7168_, v_string_7166_);
lean_dec_ref(v_dateformat_7167_);
return v___x_7169_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatGeneric(lean_object* v_aw_7170_, lean_object* v_format_7171_, lean_object* v_getInfo_7172_){
_start:
{
lean_object* v___x_7173_; 
v___x_7173_ = l_Std_Time_GenericFormat_formatGeneric___redArg(v_format_7171_, v_getInfo_7172_);
return v___x_7173_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatGeneric___boxed(lean_object* v_aw_7174_, lean_object* v_format_7175_, lean_object* v_getInfo_7176_){
_start:
{
lean_object* v_res_7177_; 
v_res_7177_ = l_Std_Time_GenericFormat_formatGeneric(v_aw_7174_, v_format_7175_, v_getInfo_7176_);
lean_dec(v_aw_7174_);
return v_res_7177_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go(lean_object* v_dateformat_7178_, lean_object* v_data_7179_, lean_object* v_format_7180_){
_start:
{
if (lean_obj_tag(v_format_7180_) == 0)
{
lean_dec_ref(v_dateformat_7178_);
return v_data_7179_;
}
else
{
lean_object* v_head_7181_; 
v_head_7181_ = lean_ctor_get(v_format_7180_, 0);
lean_inc(v_head_7181_);
if (lean_obj_tag(v_head_7181_) == 0)
{
lean_object* v_tail_7182_; lean_object* v_val_7183_; lean_object* v___x_7184_; 
v_tail_7182_ = lean_ctor_get(v_format_7180_, 1);
lean_inc(v_tail_7182_);
lean_dec_ref_known(v_format_7180_, 2);
v_val_7183_ = lean_ctor_get(v_head_7181_, 0);
lean_inc_ref(v_val_7183_);
lean_dec_ref_known(v_head_7181_, 1);
v___x_7184_ = lean_string_append(v_data_7179_, v_val_7183_);
lean_dec_ref(v_val_7183_);
v_data_7179_ = v___x_7184_;
v_format_7180_ = v_tail_7182_;
goto _start;
}
else
{
lean_object* v_tail_7186_; lean_object* v_modifier_7187_; lean_object* v___f_7188_; 
v_tail_7186_ = lean_ctor_get(v_format_7180_, 1);
lean_inc(v_tail_7186_);
lean_dec_ref_known(v_format_7180_, 2);
v_modifier_7187_ = lean_ctor_get(v_head_7181_, 0);
lean_inc_ref(v_modifier_7187_);
lean_dec_ref_known(v_head_7181_, 1);
v___f_7188_ = lean_alloc_closure((void*)(l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go___lam__0), 5, 4);
lean_closure_set(v___f_7188_, 0, v_dateformat_7178_);
lean_closure_set(v___f_7188_, 1, v_modifier_7187_);
lean_closure_set(v___f_7188_, 2, v_data_7179_);
lean_closure_set(v___f_7188_, 3, v_tail_7186_);
return v___f_7188_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go___lam__0(lean_object* v_dateformat_7189_, lean_object* v_modifier_7190_, lean_object* v_data_7191_, lean_object* v_tail_7192_, lean_object* v___y_7193_){
_start:
{
lean_object* v___x_7194_; lean_object* v___x_7195_; lean_object* v___x_7196_; 
v___x_7194_ = l___private_Std_Time_Format_Basic_0__Std_Time_formatWith(v_dateformat_7189_, v_modifier_7190_, v___y_7193_);
v___x_7195_ = lean_string_append(v_data_7191_, v___x_7194_);
lean_dec_ref(v___x_7194_);
v___x_7196_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go(v_dateformat_7189_, v___x_7195_, v_tail_7192_);
return v___x_7196_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatBuilder___redArg(lean_object* v_format_7197_){
_start:
{
lean_object* v_config_7198_; lean_object* v_string_7199_; lean_object* v_dateformat_7200_; lean_object* v___x_7201_; lean_object* v___x_7202_; 
v_config_7198_ = lean_ctor_get(v_format_7197_, 0);
lean_inc_ref(v_config_7198_);
v_string_7199_ = lean_ctor_get(v_format_7197_, 1);
lean_inc(v_string_7199_);
lean_dec_ref(v_format_7197_);
v_dateformat_7200_ = lean_ctor_get(v_config_7198_, 0);
lean_inc_ref(v_dateformat_7200_);
lean_dec_ref(v_config_7198_);
v___x_7201_ = ((lean_object*)(l___private_Std_Time_Format_Basic_0__Std_Time_parseFormatPart___lam__1___closed__2));
v___x_7202_ = l___private_Std_Time_Format_Basic_0__Std_Time_GenericFormat_formatBuilder_go(v_dateformat_7200_, v___x_7201_, v_string_7199_);
return v___x_7202_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatBuilder(lean_object* v_aw_7203_, lean_object* v_format_7204_){
_start:
{
lean_object* v___x_7205_; 
v___x_7205_ = l_Std_Time_GenericFormat_formatBuilder___redArg(v_format_7204_);
return v___x_7205_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_GenericFormat_formatBuilder___boxed(lean_object* v_aw_7206_, lean_object* v_format_7207_){
_start:
{
lean_object* v_res_7208_; 
v_res_7208_ = l_Std_Time_GenericFormat_formatBuilder(v_aw_7206_, v_format_7207_);
lean_dec(v_aw_7206_);
return v_res_7208_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_instFormatGenericFormatFormatTypeString(lean_object* v_aw_7209_){
_start:
{
lean_object* v___x_7210_; lean_object* v___x_7211_; lean_object* v___x_7212_; 
lean_inc(v_aw_7209_);
v___x_7210_ = lean_alloc_closure((void*)(l_Std_Time_GenericFormat_formatBuilder___boxed), 2, 1);
lean_closure_set(v___x_7210_, 0, v_aw_7209_);
v___x_7211_ = lean_alloc_closure((void*)(l_Std_Time_GenericFormat_parseBuilder___boxed), 5, 1);
lean_closure_set(v___x_7211_, 0, v_aw_7209_);
v___x_7212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7212_, 0, v___x_7210_);
lean_ctor_set(v___x_7212_, 1, v___x_7211_);
return v___x_7212_;
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
