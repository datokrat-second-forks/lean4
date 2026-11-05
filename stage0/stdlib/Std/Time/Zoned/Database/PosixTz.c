// Lean compiler output
// Module: Std.Time.Zoned.Database.PosixTz
// Imports: public import Std.Internal.Parsec public import Std.Time.Zoned.ZoneRules
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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_digitsCore_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_Std_Internal_Parsec_String_Parser_run___redArg(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "digit expected"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__0_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__1_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__2 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__2_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " out of range"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__3 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '+'"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__1_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__1_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__2 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__2_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '-'"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__3 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__3_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__4 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__4_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__5;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS_spec__2(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "hour "};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__0_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " out of range 0-"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__1_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "167"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__2 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__2_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__4;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: ':'"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__6 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__6_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__6_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__7 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__7_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "second"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__9 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__9_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "minute"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__10 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__10_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseOffset(lean_object*);
static const lean_string_object l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "condition not satisfied"};
static const lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName(lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "ASCII letter expected"};
static const lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '>'"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__1_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__1_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__2 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: 'M'"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__0_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__1_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__2;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "month"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__3 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__3_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '.'"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__4 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__4_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__4_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__5 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__5_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__7;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "week"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__8 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__8_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "day "};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__9 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__9_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = " out of range 0-6"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__10 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__10_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__11;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec(lean_object*);
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: 'J'"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__0_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__0_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__1_value;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Julian day"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__3 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___closed__0 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___closed__0_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "day"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseDstOffset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseDstOffset___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSpec(lean_object*);
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__0;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__1;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '/'"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__2 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__2_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__2_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__3 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: ','"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__1 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__1_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__1_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__2 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__2_value;
static const lean_string_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "empty timezone name"};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__3 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__3_value;
static const lean_ctor_object l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__3_value)}};
static const lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__4 = (const lean_object*)&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__4_value;
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_parsePosixTz(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_parsePosixTz___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(lean_object* v_lo_6_, lean_object* v_hi_7_, lean_object* v_name_8_, lean_object* v_extra_9_, lean_object* v_a_10_){
_start:
{
lean_object* v_fst_14_; lean_object* v_snd_15_; lean_object* v___x_16_; uint8_t v___x_17_; 
v_fst_14_ = lean_ctor_get(v_a_10_, 0);
v_snd_15_ = lean_ctor_get(v_a_10_, 1);
v___x_16_ = lean_string_utf8_byte_size(v_fst_14_);
v___x_17_ = lean_nat_dec_eq(v_snd_15_, v___x_16_);
if (v___x_17_ == 0)
{
uint32_t v_c_18_; uint32_t v___x_19_; uint8_t v___x_20_; 
v_c_18_ = lean_string_utf8_get_fast(v_fst_14_, v_snd_15_);
v___x_19_ = 48;
v___x_20_ = lean_uint32_dec_le(v___x_19_, v_c_18_);
if (v___x_20_ == 0)
{
lean_dec_ref(v_extra_9_);
lean_dec_ref(v_name_8_);
goto v___jp_11_;
}
else
{
uint32_t v___x_21_; uint8_t v___x_22_; 
v___x_21_ = 57;
v___x_22_ = lean_uint32_dec_le(v_c_18_, v___x_21_);
if (v___x_22_ == 0)
{
lean_dec_ref(v_extra_9_);
lean_dec_ref(v_name_8_);
goto v___jp_11_;
}
else
{
lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_65_; 
lean_inc(v_snd_15_);
lean_inc(v_fst_14_);
v_isSharedCheck_65_ = !lean_is_exclusive(v_a_10_);
if (v_isSharedCheck_65_ == 0)
{
lean_object* v_unused_66_; lean_object* v_unused_67_; 
v_unused_66_ = lean_ctor_get(v_a_10_, 1);
lean_dec(v_unused_66_);
v_unused_67_ = lean_ctor_get(v_a_10_, 0);
lean_dec(v_unused_67_);
v___x_24_ = v_a_10_;
v_isShared_25_ = v_isSharedCheck_65_;
goto v_resetjp_23_;
}
else
{
lean_dec(v_a_10_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_65_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v_fst_31_; lean_object* v_snd_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_64_; 
v___x_26_ = lean_string_utf8_next_fast(v_fst_14_, v_snd_15_);
lean_dec(v_snd_15_);
v___x_27_ = lean_uint32_to_nat(v_c_18_);
v___x_28_ = lean_unsigned_to_nat(48u);
v___x_29_ = lean_nat_sub(v___x_27_, v___x_28_);
lean_dec(v___x_27_);
v___x_30_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_digitsCore_go(v_fst_14_, v___x_26_, v___x_29_);
v_fst_31_ = lean_ctor_get(v___x_30_, 0);
v_snd_32_ = lean_ctor_get(v___x_30_, 1);
v_isSharedCheck_64_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_64_ == 0)
{
v___x_34_ = v___x_30_;
v_isShared_35_ = v_isSharedCheck_64_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_snd_32_);
lean_inc(v_fst_31_);
lean_dec(v___x_30_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_64_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_37_; 
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 1, v_snd_32_);
v___x_37_ = v___x_24_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v_fst_14_);
lean_ctor_set(v_reuseFailAlloc_63_, 1, v_snd_32_);
v___x_37_ = v_reuseFailAlloc_63_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
lean_object* v___x_38_; lean_object* v___x_50_; uint8_t v___x_51_; 
v___x_38_ = lean_nat_to_int(v_fst_31_);
lean_inc(v___x_38_);
v___x_50_ = lean_apply_1(v_extra_9_, v___x_38_);
v___x_51_ = lean_unbox(v___x_50_);
if (v___x_51_ == 0)
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
lean_del_object(v___x_34_);
v___x_52_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__2));
v___x_53_ = lean_string_append(v_name_8_, v___x_52_);
v___x_54_ = l_Int_repr(v___x_38_);
lean_dec(v___x_38_);
v___x_55_ = lean_string_append(v___x_53_, v___x_54_);
lean_dec_ref(v___x_54_);
v___x_56_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__3));
v___x_57_ = lean_string_append(v___x_55_, v___x_56_);
v___x_58_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
v___x_59_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_37_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
return v___x_59_;
}
else
{
uint8_t v___x_60_; 
v___x_60_ = lean_int_dec_le(v_lo_6_, v___x_38_);
if (v___x_60_ == 0)
{
goto v___jp_39_;
}
else
{
uint8_t v___x_61_; 
v___x_61_ = lean_int_dec_le(v___x_38_, v_hi_7_);
if (v___x_61_ == 0)
{
goto v___jp_39_;
}
else
{
lean_object* v___x_62_; 
lean_del_object(v___x_34_);
lean_dec_ref(v_name_8_);
v___x_62_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_37_);
lean_ctor_set(v___x_62_, 1, v___x_38_);
return v___x_62_;
}
}
}
v___jp_39_:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_48_; 
v___x_40_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__2));
v___x_41_ = lean_string_append(v_name_8_, v___x_40_);
v___x_42_ = l_Int_repr(v___x_38_);
lean_dec(v___x_38_);
v___x_43_ = lean_string_append(v___x_41_, v___x_42_);
lean_dec_ref(v___x_42_);
v___x_44_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__3));
v___x_45_ = lean_string_append(v___x_43_, v___x_44_);
v___x_46_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
if (v_isShared_35_ == 0)
{
lean_ctor_set_tag(v___x_34_, 1);
lean_ctor_set(v___x_34_, 1, v___x_46_);
lean_ctor_set(v___x_34_, 0, v___x_37_);
v___x_48_ = v___x_34_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v___x_37_);
lean_ctor_set(v_reuseFailAlloc_49_, 1, v___x_46_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
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
lean_object* v___x_68_; lean_object* v___x_69_; 
lean_dec_ref(v_extra_9_);
lean_dec_ref(v_name_8_);
v___x_68_ = lean_box(0);
v___x_69_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_69_, 0, v_a_10_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
return v___x_69_;
}
v___jp_11_:
{
lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_12_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__1));
v___x_13_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_13_, 0, v_a_10_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___boxed(lean_object* v_lo_70_, lean_object* v_hi_71_, lean_object* v_name_72_, lean_object* v_extra_73_, lean_object* v_a_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(v_lo_70_, v_hi_71_, v_name_72_, v_extra_73_, v_a_74_);
lean_dec(v_hi_71_);
lean_dec(v_lo_70_);
return v_res_75_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = lean_unsigned_to_nat(1u);
v___x_77_ = lean_nat_to_int(v___x_76_);
return v___x_77_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__5(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0);
v___x_85_ = lean_int_neg(v___x_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign(lean_object* v_a_86_){
_start:
{
lean_object* v_fst_87_; lean_object* v_snd_88_; lean_object* v_err_90_; lean_object* v_err_96_; lean_object* v___x_118_; uint8_t v___x_119_; 
v_fst_87_ = lean_ctor_get(v_a_86_, 0);
v_snd_88_ = lean_ctor_get(v_a_86_, 1);
v___x_118_ = lean_string_utf8_byte_size(v_fst_87_);
v___x_119_ = lean_nat_dec_eq(v_snd_88_, v___x_118_);
if (v___x_119_ == 0)
{
uint32_t v___x_120_; uint32_t v_c_121_; uint8_t v___x_122_; 
v___x_120_ = 45;
v_c_121_ = lean_string_utf8_get_fast(v_fst_87_, v_snd_88_);
v___x_122_ = lean_uint32_dec_eq(v_c_121_, v___x_120_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; 
v___x_123_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__4));
v_err_96_ = v___x_123_;
goto v___jp_95_;
}
else
{
lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_133_; 
lean_inc(v_snd_88_);
lean_inc(v_fst_87_);
v_isSharedCheck_133_ = !lean_is_exclusive(v_a_86_);
if (v_isSharedCheck_133_ == 0)
{
lean_object* v_unused_134_; lean_object* v_unused_135_; 
v_unused_134_ = lean_ctor_get(v_a_86_, 1);
lean_dec(v_unused_134_);
v_unused_135_ = lean_ctor_get(v_a_86_, 0);
lean_dec(v_unused_135_);
v___x_125_ = v_a_86_;
v_isShared_126_ = v_isSharedCheck_133_;
goto v_resetjp_124_;
}
else
{
lean_dec(v_a_86_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_133_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_127_; lean_object* v_it_x27_129_; 
v___x_127_ = lean_string_utf8_next_fast(v_fst_87_, v_snd_88_);
lean_dec(v_snd_88_);
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 1, v___x_127_);
v_it_x27_129_ = v___x_125_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v_fst_87_);
lean_ctor_set(v_reuseFailAlloc_132_, 1, v___x_127_);
v_it_x27_129_ = v_reuseFailAlloc_132_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__5, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__5_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__5);
v___x_131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_131_, 0, v_it_x27_129_);
lean_ctor_set(v___x_131_, 1, v___x_130_);
return v___x_131_;
}
}
}
}
else
{
lean_object* v___x_136_; 
v___x_136_ = lean_box(0);
v_err_96_ = v___x_136_;
goto v___jp_95_;
}
v___jp_89_:
{
uint8_t v_decide_91_; 
v_decide_91_ = lean_nat_dec_eq(v_snd_88_, v_snd_88_);
if (v_decide_91_ == 0)
{
lean_object* v___x_92_; 
lean_inc(v_err_90_);
v___x_92_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_92_, 0, v_a_86_);
lean_ctor_set(v___x_92_, 1, v_err_90_);
return v___x_92_;
}
else
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0);
v___x_94_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_94_, 0, v_a_86_);
lean_ctor_set(v___x_94_, 1, v___x_93_);
return v___x_94_;
}
}
v___jp_95_:
{
uint8_t v_decide_97_; 
v_decide_97_ = lean_nat_dec_eq(v_snd_88_, v_snd_88_);
if (v_decide_97_ == 0)
{
lean_object* v___x_98_; 
lean_inc(v_err_96_);
v___x_98_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_98_, 0, v_a_86_);
lean_ctor_set(v___x_98_, 1, v_err_96_);
return v___x_98_;
}
else
{
lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_99_ = lean_string_utf8_byte_size(v_fst_87_);
v___x_100_ = lean_nat_dec_eq(v_snd_88_, v___x_99_);
if (v___x_100_ == 0)
{
uint32_t v___x_101_; uint32_t v_c_102_; uint8_t v___x_103_; 
v___x_101_ = 43;
v_c_102_ = lean_string_utf8_get_fast(v_fst_87_, v_snd_88_);
v___x_103_ = lean_uint32_dec_eq(v_c_102_, v___x_101_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; 
v___x_104_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__2));
v_err_90_ = v___x_104_;
goto v___jp_89_;
}
else
{
lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_114_; 
lean_inc(v_snd_88_);
lean_inc(v_fst_87_);
v_isSharedCheck_114_ = !lean_is_exclusive(v_a_86_);
if (v_isSharedCheck_114_ == 0)
{
lean_object* v_unused_115_; lean_object* v_unused_116_; 
v_unused_115_ = lean_ctor_get(v_a_86_, 1);
lean_dec(v_unused_115_);
v_unused_116_ = lean_ctor_get(v_a_86_, 0);
lean_dec(v_unused_116_);
v___x_106_ = v_a_86_;
v_isShared_107_ = v_isSharedCheck_114_;
goto v_resetjp_105_;
}
else
{
lean_dec(v_a_86_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_114_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_108_; lean_object* v_it_x27_110_; 
v___x_108_ = lean_string_utf8_next_fast(v_fst_87_, v_snd_88_);
lean_dec(v_snd_88_);
if (v_isShared_107_ == 0)
{
lean_ctor_set(v___x_106_, 1, v___x_108_);
v_it_x27_110_ = v___x_106_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_fst_87_);
lean_ctor_set(v_reuseFailAlloc_113_, 1, v___x_108_);
v_it_x27_110_ = v_reuseFailAlloc_113_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0);
v___x_112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_112_, 0, v_it_x27_110_);
lean_ctor_set(v___x_112_, 1, v___x_111_);
return v___x_112_;
}
}
}
}
else
{
lean_object* v___x_117_; 
v___x_117_ = lean_box(0);
v_err_90_ = v___x_117_;
goto v___jp_89_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS_spec__0(lean_object* v_a_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lean_nat_to_int(v_a_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS_spec__2(lean_object* v_a_139_){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = l_Rat_ofInt(v_a_139_);
return v___x_140_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0(uint8_t v___x_141_, lean_object* v_x_142_){
_start:
{
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0___boxed(lean_object* v___x_143_, lean_object* v_x_144_){
_start:
{
uint8_t v___x_3597__boxed_145_; uint8_t v_res_146_; lean_object* v_r_147_; 
v___x_3597__boxed_145_ = lean_unbox(v___x_143_);
v_res_146_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0(v___x_3597__boxed_145_, v_x_144_);
lean_dec(v_x_144_);
v_r_147_ = lean_box(v_res_146_);
return v_r_147_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = lean_unsigned_to_nat(3600u);
v___x_152_ = lean_nat_to_int(v___x_151_);
return v___x_152_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__4(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = lean_unsigned_to_nat(60u);
v___x_154_ = lean_nat_to_int(v___x_153_);
return v___x_154_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_unsigned_to_nat(0u);
v___x_156_ = lean_nat_to_int(v___x_155_);
return v___x_156_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lean_unsigned_to_nat(59u);
v___x_161_ = lean_nat_to_int(v___x_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS(lean_object* v_maxHour_164_, lean_object* v_a_165_){
_start:
{
lean_object* v_fst_169_; lean_object* v_snd_170_; lean_object* v___x_171_; uint8_t v___x_172_; 
v_fst_169_ = lean_ctor_get(v_a_165_, 0);
v_snd_170_ = lean_ctor_get(v_a_165_, 1);
v___x_171_ = lean_string_utf8_byte_size(v_fst_169_);
v___x_172_ = lean_nat_dec_eq(v_snd_170_, v___x_171_);
if (v___x_172_ == 0)
{
uint32_t v_c_173_; uint32_t v___x_174_; uint8_t v___x_175_; 
v_c_173_ = lean_string_utf8_get_fast(v_fst_169_, v_snd_170_);
v___x_174_ = 48;
v___x_175_ = lean_uint32_dec_le(v___x_174_, v_c_173_);
if (v___x_175_ == 0)
{
lean_dec(v_maxHour_164_);
goto v___jp_166_;
}
else
{
uint32_t v___x_176_; uint8_t v___x_177_; 
v___x_176_ = 57;
v___x_177_ = lean_uint32_dec_le(v_c_173_, v___x_176_);
if (v___x_177_ == 0)
{
lean_dec(v_maxHour_164_);
goto v___jp_166_;
}
else
{
lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_288_; 
lean_inc(v_snd_170_);
lean_inc(v_fst_169_);
v_isSharedCheck_288_ = !lean_is_exclusive(v_a_165_);
if (v_isSharedCheck_288_ == 0)
{
lean_object* v_unused_289_; lean_object* v_unused_290_; 
v_unused_289_ = lean_ctor_get(v_a_165_, 1);
lean_dec(v_unused_289_);
v_unused_290_ = lean_ctor_get(v_a_165_, 0);
lean_dec(v_unused_290_);
v___x_179_ = v_a_165_;
v_isShared_180_ = v_isSharedCheck_288_;
goto v_resetjp_178_;
}
else
{
lean_dec(v_a_165_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_288_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v_fst_186_; lean_object* v_snd_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_287_; 
v___x_181_ = lean_string_utf8_next_fast(v_fst_169_, v_snd_170_);
lean_dec(v_snd_170_);
v___x_182_ = lean_uint32_to_nat(v_c_173_);
v___x_183_ = lean_unsigned_to_nat(48u);
v___x_184_ = lean_nat_sub(v___x_182_, v___x_183_);
lean_dec(v___x_182_);
v___x_185_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_digitsCore_go(v_fst_169_, v___x_181_, v___x_184_);
v_fst_186_ = lean_ctor_get(v___x_185_, 0);
v_snd_187_ = lean_ctor_get(v___x_185_, 1);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_185_);
if (v_isSharedCheck_287_ == 0)
{
v___x_189_ = v___x_185_;
v_isShared_190_ = v_isSharedCheck_287_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_snd_187_);
lean_inc(v_fst_186_);
lean_dec(v___x_185_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_287_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_192_; 
lean_inc(v_snd_187_);
lean_inc(v_fst_169_);
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 1, v_snd_187_);
v___x_192_ = v___x_179_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_fst_169_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v_snd_187_);
v___x_192_ = v_reuseFailAlloc_286_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
uint8_t v___x_193_; 
v___x_193_ = lean_nat_dec_lt(v_maxHour_164_, v_fst_186_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; uint8_t v___x_195_; 
lean_dec(v_maxHour_164_);
v___x_194_ = lean_unsigned_to_nat(167u);
v___x_195_ = lean_nat_dec_le(v_fst_186_, v___x_194_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_205_; 
lean_dec(v_snd_187_);
lean_dec(v_fst_169_);
v___x_196_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__0));
v___x_197_ = l_Nat_reprFast(v_fst_186_);
v___x_198_ = lean_string_append(v___x_196_, v___x_197_);
lean_dec_ref(v___x_197_);
v___x_199_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__1));
v___x_200_ = lean_string_append(v___x_198_, v___x_199_);
v___x_201_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__2));
v___x_202_ = lean_string_append(v___x_200_, v___x_201_);
v___x_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
if (v_isShared_190_ == 0)
{
lean_ctor_set_tag(v___x_189_, 1);
lean_ctor_set(v___x_189_, 1, v___x_203_);
lean_ctor_set(v___x_189_, 0, v___x_192_);
v___x_205_ = v___x_189_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___x_192_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v___x_203_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
else
{
lean_object* v___x_207_; lean_object* v___y_209_; lean_object* v_pos_210_; lean_object* v_res_211_; lean_object* v___y_222_; lean_object* v_snd_223_; lean_object* v___y_224_; lean_object* v_err_225_; uint32_t v___x_229_; lean_object* v_pos_231_; lean_object* v_fst_232_; lean_object* v_snd_233_; lean_object* v_res_234_; lean_object* v_err_253_; uint8_t v___x_257_; 
v___x_207_ = lean_nat_to_int(v_fst_186_);
v___x_229_ = 58;
v___x_257_ = lean_nat_dec_eq(v_snd_187_, v___x_171_);
if (v___x_257_ == 0)
{
uint32_t v_c_258_; uint8_t v___x_259_; 
v_c_258_ = lean_string_utf8_get_fast(v_fst_169_, v_snd_187_);
v___x_259_ = lean_uint32_dec_eq(v_c_258_, v___x_229_);
if (v___x_259_ == 0)
{
lean_object* v___x_260_; 
v___x_260_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__7));
v_err_253_ = v___x_260_;
goto v___jp_252_;
}
else
{
lean_object* v___x_261_; lean_object* v___f_262_; lean_object* v___x_263_; lean_object* v_it_x27_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_261_ = lean_box(v___x_259_);
v___f_262_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0___boxed), 2, 1);
lean_closure_set(v___f_262_, 0, v___x_261_);
v___x_263_ = lean_string_utf8_next_fast(v_fst_169_, v_snd_187_);
lean_inc(v_fst_169_);
v_it_x27_264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_264_, 0, v_fst_169_);
lean_ctor_set(v_it_x27_264_, 1, v___x_263_);
v___x_265_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5);
v___x_266_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8);
v___x_267_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__10));
v___x_268_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(v___x_265_, v___x_266_, v___x_267_, v___f_262_, v_it_x27_264_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_pos_269_; lean_object* v_res_270_; lean_object* v_fst_271_; lean_object* v_snd_272_; 
lean_dec_ref(v___x_192_);
lean_dec(v_snd_187_);
lean_dec(v_fst_169_);
v_pos_269_ = lean_ctor_get(v___x_268_, 0);
lean_inc(v_pos_269_);
v_res_270_ = lean_ctor_get(v___x_268_, 1);
lean_inc(v_res_270_);
lean_dec_ref_known(v___x_268_, 2);
v_fst_271_ = lean_ctor_get(v_pos_269_, 0);
lean_inc(v_fst_271_);
v_snd_272_ = lean_ctor_get(v_pos_269_, 1);
lean_inc(v_snd_272_);
v_pos_231_ = v_pos_269_;
v_fst_232_ = v_fst_271_;
v_snd_233_ = v_snd_272_;
v_res_234_ = v_res_270_;
goto v___jp_230_;
}
else
{
lean_object* v_err_273_; 
v_err_273_ = lean_ctor_get(v___x_268_, 1);
lean_inc(v_err_273_);
lean_dec_ref_known(v___x_268_, 2);
v_err_253_ = v_err_273_;
goto v___jp_252_;
}
}
}
else
{
lean_object* v___x_274_; 
v___x_274_ = lean_box(0);
v_err_253_ = v___x_274_;
goto v___jp_252_;
}
v___jp_208_:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_219_; 
v___x_212_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3);
v___x_213_ = lean_int_mul(v___x_207_, v___x_212_);
lean_dec(v___x_207_);
v___x_214_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__4, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__4_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__4);
v___x_215_ = lean_int_mul(v___y_209_, v___x_214_);
lean_dec(v___y_209_);
v___x_216_ = lean_int_add(v___x_213_, v___x_215_);
lean_dec(v___x_215_);
lean_dec(v___x_213_);
v___x_217_ = lean_int_add(v___x_216_, v_res_211_);
lean_dec(v_res_211_);
lean_dec(v___x_216_);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 1, v___x_217_);
lean_ctor_set(v___x_189_, 0, v_pos_210_);
v___x_219_ = v___x_189_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_pos_210_);
lean_ctor_set(v_reuseFailAlloc_220_, 1, v___x_217_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
v___jp_221_:
{
uint8_t v_decide_226_; 
v_decide_226_ = lean_nat_dec_eq(v_snd_223_, v_snd_223_);
lean_dec(v_snd_223_);
if (v_decide_226_ == 0)
{
lean_object* v___x_227_; 
lean_dec(v___y_224_);
lean_dec(v___x_207_);
lean_del_object(v___x_189_);
v___x_227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_227_, 0, v___y_222_);
lean_ctor_set(v___x_227_, 1, v_err_225_);
return v___x_227_;
}
else
{
lean_object* v___x_228_; 
lean_dec(v_err_225_);
v___x_228_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5);
v___y_209_ = v___y_224_;
v_pos_210_ = v___y_222_;
v_res_211_ = v___x_228_;
goto v___jp_208_;
}
}
v___jp_230_:
{
lean_object* v___x_235_; uint8_t v___x_236_; 
v___x_235_ = lean_string_utf8_byte_size(v_fst_232_);
v___x_236_ = lean_nat_dec_eq(v_snd_233_, v___x_235_);
if (v___x_236_ == 0)
{
uint32_t v_c_237_; uint8_t v___x_238_; 
v_c_237_ = lean_string_utf8_get_fast(v_fst_232_, v_snd_233_);
v___x_238_ = lean_uint32_dec_eq(v_c_237_, v___x_229_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; 
lean_dec(v_fst_232_);
v___x_239_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__7));
v___y_222_ = v_pos_231_;
v_snd_223_ = v_snd_233_;
v___y_224_ = v_res_234_;
v_err_225_ = v___x_239_;
goto v___jp_221_;
}
else
{
lean_object* v___x_240_; lean_object* v___f_241_; lean_object* v___x_242_; lean_object* v_it_x27_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_240_ = lean_box(v___x_238_);
v___f_241_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0___boxed), 2, 1);
lean_closure_set(v___f_241_, 0, v___x_240_);
v___x_242_ = lean_string_utf8_next_fast(v_fst_232_, v_snd_233_);
v_it_x27_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_243_, 0, v_fst_232_);
lean_ctor_set(v_it_x27_243_, 1, v___x_242_);
v___x_244_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5);
v___x_245_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__8);
v___x_246_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__9));
v___x_247_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(v___x_244_, v___x_245_, v___x_246_, v___f_241_, v_it_x27_243_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v_pos_248_; lean_object* v_res_249_; 
lean_dec(v_snd_233_);
lean_dec_ref(v_pos_231_);
v_pos_248_ = lean_ctor_get(v___x_247_, 0);
lean_inc(v_pos_248_);
v_res_249_ = lean_ctor_get(v___x_247_, 1);
lean_inc(v_res_249_);
lean_dec_ref_known(v___x_247_, 2);
v___y_209_ = v_res_234_;
v_pos_210_ = v_pos_248_;
v_res_211_ = v_res_249_;
goto v___jp_208_;
}
else
{
lean_object* v_err_250_; 
v_err_250_ = lean_ctor_get(v___x_247_, 1);
lean_inc(v_err_250_);
lean_dec_ref_known(v___x_247_, 2);
v___y_222_ = v_pos_231_;
v_snd_223_ = v_snd_233_;
v___y_224_ = v_res_234_;
v_err_225_ = v_err_250_;
goto v___jp_221_;
}
}
}
else
{
lean_object* v___x_251_; 
lean_dec(v_fst_232_);
v___x_251_ = lean_box(0);
v___y_222_ = v_pos_231_;
v_snd_223_ = v_snd_233_;
v___y_224_ = v_res_234_;
v_err_225_ = v___x_251_;
goto v___jp_221_;
}
}
v___jp_252_:
{
uint8_t v_decide_254_; 
v_decide_254_ = lean_nat_dec_eq(v_snd_187_, v_snd_187_);
if (v_decide_254_ == 0)
{
lean_object* v___x_255_; 
lean_dec(v___x_207_);
lean_del_object(v___x_189_);
lean_dec(v_snd_187_);
lean_dec(v_fst_169_);
v___x_255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_192_);
lean_ctor_set(v___x_255_, 1, v_err_253_);
return v___x_255_;
}
else
{
lean_object* v___x_256_; 
lean_dec(v_err_253_);
v___x_256_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5);
v_pos_231_ = v___x_192_;
v_fst_232_ = v_fst_169_;
v_snd_233_ = v_snd_187_;
v_res_234_ = v___x_256_;
goto v___jp_230_;
}
}
}
}
else
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_284_; 
lean_dec(v_snd_187_);
lean_dec(v_fst_169_);
v___x_275_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__0));
v___x_276_ = l_Nat_reprFast(v_fst_186_);
v___x_277_ = lean_string_append(v___x_275_, v___x_276_);
lean_dec_ref(v___x_276_);
v___x_278_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__1));
v___x_279_ = lean_string_append(v___x_277_, v___x_278_);
v___x_280_ = l_Nat_reprFast(v_maxHour_164_);
v___x_281_ = lean_string_append(v___x_279_, v___x_280_);
lean_dec_ref(v___x_280_);
v___x_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
if (v_isShared_190_ == 0)
{
lean_ctor_set_tag(v___x_189_, 1);
lean_ctor_set(v___x_189_, 1, v___x_282_);
lean_ctor_set(v___x_189_, 0, v___x_192_);
v___x_284_ = v___x_189_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_192_);
lean_ctor_set(v_reuseFailAlloc_285_, 1, v___x_282_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
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
lean_object* v___x_291_; lean_object* v___x_292_; 
lean_dec(v_maxHour_164_);
v___x_291_ = lean_box(0);
v___x_292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_292_, 0, v_a_165_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
return v___x_292_;
}
v___jp_166_:
{
lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_167_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__1));
v___x_168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_168_, 0, v_a_165_);
lean_ctor_set(v___x_168_, 1, v___x_167_);
return v___x_168_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS_spec__1(lean_object* v_a_293_){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_nat_to_int(v_a_293_);
v___x_295_ = l_Rat_ofInt(v___x_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseOffset(lean_object* v_a_296_){
_start:
{
lean_object* v___x_297_; 
v___x_297_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign(v_a_296_);
if (lean_obj_tag(v___x_297_) == 0)
{
lean_object* v_pos_298_; lean_object* v_res_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v_pos_298_ = lean_ctor_get(v___x_297_, 0);
lean_inc(v_pos_298_);
v_res_299_ = lean_ctor_get(v___x_297_, 1);
lean_inc(v_res_299_);
lean_dec_ref_known(v___x_297_, 2);
v___x_300_ = lean_unsigned_to_nat(24u);
v___x_301_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS(v___x_300_, v_pos_298_);
if (lean_obj_tag(v___x_301_) == 0)
{
lean_object* v_pos_302_; lean_object* v_res_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_312_; 
v_pos_302_ = lean_ctor_get(v___x_301_, 0);
v_res_303_ = lean_ctor_get(v___x_301_, 1);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_312_ == 0)
{
v___x_305_ = v___x_301_;
v_isShared_306_ = v_isSharedCheck_312_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_res_303_);
lean_inc(v_pos_302_);
lean_dec(v___x_301_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_312_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_310_; 
v___x_307_ = lean_int_neg(v_res_299_);
lean_dec(v_res_299_);
v___x_308_ = lean_int_mul(v___x_307_, v_res_303_);
lean_dec(v_res_303_);
lean_dec(v___x_307_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 1, v___x_308_);
v___x_310_ = v___x_305_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v_pos_302_);
lean_ctor_set(v_reuseFailAlloc_311_, 1, v___x_308_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
else
{
lean_object* v_pos_313_; lean_object* v_err_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_321_; 
lean_dec(v_res_299_);
v_pos_313_ = lean_ctor_get(v___x_301_, 0);
v_err_314_ = lean_ctor_get(v___x_301_, 1);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_321_ == 0)
{
v___x_316_ = v___x_301_;
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_err_314_);
lean_inc(v_pos_313_);
lean_dec(v___x_301_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_319_; 
if (v_isShared_317_ == 0)
{
v___x_319_ = v___x_316_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_pos_313_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v_err_314_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
else
{
lean_object* v_pos_322_; lean_object* v_err_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_330_; 
v_pos_322_ = lean_ctor_get(v___x_297_, 0);
v_err_323_ = lean_ctor_get(v___x_297_, 1);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_330_ == 0)
{
v___x_325_ = v___x_297_;
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_err_323_);
lean_inc(v_pos_322_);
lean_dec(v___x_297_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_pos_322_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v_err_323_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0(lean_object* v_acc_334_, lean_object* v_a_335_){
_start:
{
lean_object* v_pos_337_; uint32_t v_res_338_; lean_object* v_fst_341_; lean_object* v_snd_342_; lean_object* v_pos_344_; lean_object* v_snd_345_; lean_object* v_err_346_; lean_object* v___x_350_; uint8_t v___x_351_; 
v_fst_341_ = lean_ctor_get(v_a_335_, 0);
v_snd_342_ = lean_ctor_get(v_a_335_, 1);
lean_inc(v_snd_342_);
v___x_350_ = lean_string_utf8_byte_size(v_fst_341_);
v___x_351_ = lean_nat_dec_eq(v_snd_342_, v___x_350_);
if (v___x_351_ == 0)
{
uint32_t v_c_352_; lean_object* v___x_353_; lean_object* v_it_x27_354_; uint8_t v___y_356_; uint8_t v___y_357_; uint8_t v___y_358_; uint8_t v___y_361_; uint8_t v___y_362_; uint8_t v___y_363_; uint8_t v___y_367_; uint8_t v___y_368_; uint8_t v___y_372_; uint32_t v___x_386_; uint8_t v___x_387_; 
v_c_352_ = lean_string_utf8_get_fast(v_fst_341_, v_snd_342_);
v___x_353_ = lean_string_utf8_next_fast(v_fst_341_, v_snd_342_);
lean_inc(v_fst_341_);
v_it_x27_354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_354_, 0, v_fst_341_);
lean_ctor_set(v_it_x27_354_, 1, v___x_353_);
v___x_386_ = 65;
v___x_387_ = lean_uint32_dec_le(v___x_386_, v_c_352_);
if (v___x_387_ == 0)
{
goto v___jp_381_;
}
else
{
uint32_t v___x_388_; uint8_t v___x_389_; 
v___x_388_ = 90;
v___x_389_ = lean_uint32_dec_le(v_c_352_, v___x_388_);
if (v___x_389_ == 0)
{
goto v___jp_381_;
}
else
{
goto v___jp_374_;
}
}
v___jp_355_:
{
if (v___y_356_ == 0)
{
if (v___y_357_ == 0)
{
if (v___y_358_ == 0)
{
lean_object* v___x_359_; 
lean_dec_ref_known(v_it_x27_354_, 2);
v___x_359_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0___closed__1));
lean_inc(v_snd_342_);
v_pos_344_ = v_a_335_;
v_snd_345_ = v_snd_342_;
v_err_346_ = v___x_359_;
goto v___jp_343_;
}
else
{
lean_dec(v_snd_342_);
lean_dec_ref(v_a_335_);
v_pos_337_ = v_it_x27_354_;
v_res_338_ = v_c_352_;
goto v___jp_336_;
}
}
else
{
lean_dec(v_snd_342_);
lean_dec_ref(v_a_335_);
v_pos_337_ = v_it_x27_354_;
v_res_338_ = v_c_352_;
goto v___jp_336_;
}
}
else
{
lean_dec(v_snd_342_);
lean_dec_ref(v_a_335_);
v_pos_337_ = v_it_x27_354_;
v_res_338_ = v_c_352_;
goto v___jp_336_;
}
}
v___jp_360_:
{
uint32_t v___x_364_; uint8_t v___x_365_; 
v___x_364_ = 45;
v___x_365_ = lean_uint32_dec_eq(v_c_352_, v___x_364_);
if (v___x_365_ == 0)
{
v___y_356_ = v___y_363_;
v___y_357_ = v___y_362_;
v___y_358_ = v___x_365_;
goto v___jp_355_;
}
else
{
v___y_356_ = v___y_363_;
v___y_357_ = v___y_362_;
v___y_358_ = v___y_361_;
goto v___jp_355_;
}
}
v___jp_366_:
{
uint32_t v___x_369_; uint8_t v___x_370_; 
v___x_369_ = 43;
v___x_370_ = lean_uint32_dec_eq(v_c_352_, v___x_369_);
if (v___x_370_ == 0)
{
v___y_361_ = v___y_367_;
v___y_362_ = v___y_368_;
v___y_363_ = v___x_370_;
goto v___jp_360_;
}
else
{
v___y_361_ = v___y_367_;
v___y_362_ = v___y_368_;
v___y_363_ = v___y_367_;
goto v___jp_360_;
}
}
v___jp_371_:
{
uint8_t v___x_373_; 
v___x_373_ = 1;
v___y_367_ = v___x_373_;
v___y_368_ = v___y_372_;
goto v___jp_366_;
}
v___jp_374_:
{
uint8_t v___x_375_; 
v___x_375_ = 1;
v___y_367_ = v___x_375_;
v___y_368_ = v___x_375_;
goto v___jp_366_;
}
v___jp_376_:
{
uint32_t v___x_377_; uint8_t v___x_378_; 
v___x_377_ = 48;
v___x_378_ = lean_uint32_dec_le(v___x_377_, v_c_352_);
if (v___x_378_ == 0)
{
v___y_372_ = v___x_378_;
goto v___jp_371_;
}
else
{
uint32_t v___x_379_; uint8_t v___x_380_; 
v___x_379_ = 57;
v___x_380_ = lean_uint32_dec_le(v_c_352_, v___x_379_);
if (v___x_380_ == 0)
{
v___y_372_ = v___x_380_;
goto v___jp_371_;
}
else
{
goto v___jp_374_;
}
}
}
v___jp_381_:
{
uint32_t v___x_382_; uint8_t v___x_383_; 
v___x_382_ = 97;
v___x_383_ = lean_uint32_dec_le(v___x_382_, v_c_352_);
if (v___x_383_ == 0)
{
goto v___jp_376_;
}
else
{
uint32_t v___x_384_; uint8_t v___x_385_; 
v___x_384_ = 122;
v___x_385_ = lean_uint32_dec_le(v_c_352_, v___x_384_);
if (v___x_385_ == 0)
{
goto v___jp_376_;
}
else
{
goto v___jp_374_;
}
}
}
}
else
{
lean_object* v___x_390_; 
v___x_390_ = lean_box(0);
lean_inc(v_snd_342_);
v_pos_344_ = v_a_335_;
v_snd_345_ = v_snd_342_;
v_err_346_ = v___x_390_;
goto v___jp_343_;
}
v___jp_336_:
{
lean_object* v___x_339_; 
v___x_339_ = lean_string_push(v_acc_334_, v_res_338_);
v_acc_334_ = v___x_339_;
v_a_335_ = v_pos_337_;
goto _start;
}
v___jp_343_:
{
uint8_t v_decide_347_; 
v_decide_347_ = lean_nat_dec_eq(v_snd_342_, v_snd_345_);
lean_dec(v_snd_345_);
lean_dec(v_snd_342_);
if (v_decide_347_ == 0)
{
lean_object* v___x_348_; 
lean_dec_ref(v_acc_334_);
lean_inc(v_err_346_);
v___x_348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_348_, 0, v_pos_344_);
lean_ctor_set(v___x_348_, 1, v_err_346_);
return v___x_348_;
}
else
{
lean_object* v___x_349_; 
v___x_349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_349_, 0, v_pos_344_);
lean_ctor_set(v___x_349_, 1, v_acc_334_);
return v___x_349_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName(lean_object* v_a_392_){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_393_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName___closed__0));
v___x_394_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName_spec__0(v___x_393_, v_a_392_);
return v___x_394_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__0(lean_object* v_x_395_, lean_object* v_x_396_){
_start:
{
if (lean_obj_tag(v_x_395_) == 0)
{
if (lean_obj_tag(v_x_396_) == 0)
{
uint8_t v___x_397_; 
v___x_397_ = 1;
return v___x_397_;
}
else
{
uint8_t v___x_398_; 
v___x_398_ = 0;
return v___x_398_;
}
}
else
{
if (lean_obj_tag(v_x_396_) == 0)
{
uint8_t v___x_399_; 
v___x_399_ = 0;
return v___x_399_;
}
else
{
lean_object* v_val_400_; lean_object* v_val_401_; uint32_t v___x_402_; uint32_t v___x_403_; uint8_t v___x_404_; 
v_val_400_ = lean_ctor_get(v_x_395_, 0);
v_val_401_ = lean_ctor_get(v_x_396_, 0);
v___x_402_ = lean_unbox_uint32(v_val_400_);
v___x_403_ = lean_unbox_uint32(v_val_401_);
v___x_404_ = lean_uint32_dec_eq(v___x_402_, v___x_403_);
return v___x_404_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__0___boxed(lean_object* v_x_405_, lean_object* v_x_406_){
_start:
{
uint8_t v_res_407_; lean_object* v_r_408_; 
v_res_407_ = l_instBEqOption_beq___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__0(v_x_405_, v_x_406_);
lean_dec(v_x_406_);
lean_dec(v_x_405_);
v_r_408_ = lean_box(v_res_407_);
return v_r_408_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1(lean_object* v_acc_412_, lean_object* v_a_413_){
_start:
{
lean_object* v_pos_415_; uint32_t v_res_416_; lean_object* v_fst_419_; lean_object* v_snd_420_; lean_object* v_pos_422_; lean_object* v_snd_423_; lean_object* v_err_424_; lean_object* v___x_430_; uint8_t v___x_431_; 
v_fst_419_ = lean_ctor_get(v_a_413_, 0);
v_snd_420_ = lean_ctor_get(v_a_413_, 1);
lean_inc(v_snd_420_);
v___x_430_ = lean_string_utf8_byte_size(v_fst_419_);
v___x_431_ = lean_nat_dec_eq(v_snd_420_, v___x_430_);
if (v___x_431_ == 0)
{
uint32_t v_c_432_; lean_object* v___x_433_; lean_object* v_it_x27_434_; uint32_t v___x_440_; uint8_t v___x_441_; 
v_c_432_ = lean_string_utf8_get_fast(v_fst_419_, v_snd_420_);
v___x_433_ = lean_string_utf8_next_fast(v_fst_419_, v_snd_420_);
lean_inc(v_fst_419_);
v_it_x27_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_434_, 0, v_fst_419_);
lean_ctor_set(v_it_x27_434_, 1, v___x_433_);
v___x_440_ = 65;
v___x_441_ = lean_uint32_dec_le(v___x_440_, v_c_432_);
if (v___x_441_ == 0)
{
goto v___jp_435_;
}
else
{
uint32_t v___x_442_; uint8_t v___x_443_; 
v___x_442_ = 90;
v___x_443_ = lean_uint32_dec_le(v_c_432_, v___x_442_);
if (v___x_443_ == 0)
{
goto v___jp_435_;
}
else
{
lean_dec(v_snd_420_);
lean_dec_ref(v_a_413_);
v_pos_415_ = v_it_x27_434_;
v_res_416_ = v_c_432_;
goto v___jp_414_;
}
}
v___jp_435_:
{
uint32_t v___x_436_; uint8_t v___x_437_; 
v___x_436_ = 97;
v___x_437_ = lean_uint32_dec_le(v___x_436_, v_c_432_);
if (v___x_437_ == 0)
{
lean_dec_ref_known(v_it_x27_434_, 2);
goto v___jp_428_;
}
else
{
uint32_t v___x_438_; uint8_t v___x_439_; 
v___x_438_ = 122;
v___x_439_ = lean_uint32_dec_le(v_c_432_, v___x_438_);
if (v___x_439_ == 0)
{
lean_dec_ref_known(v_it_x27_434_, 2);
goto v___jp_428_;
}
else
{
lean_dec(v_snd_420_);
lean_dec_ref(v_a_413_);
v_pos_415_ = v_it_x27_434_;
v_res_416_ = v_c_432_;
goto v___jp_414_;
}
}
}
}
else
{
lean_object* v___x_444_; 
v___x_444_ = lean_box(0);
lean_inc(v_snd_420_);
v_pos_422_ = v_a_413_;
v_snd_423_ = v_snd_420_;
v_err_424_ = v___x_444_;
goto v___jp_421_;
}
v___jp_414_:
{
lean_object* v___x_417_; 
v___x_417_ = lean_string_push(v_acc_412_, v_res_416_);
v_acc_412_ = v___x_417_;
v_a_413_ = v_pos_415_;
goto _start;
}
v___jp_421_:
{
uint8_t v_decide_425_; 
v_decide_425_ = lean_nat_dec_eq(v_snd_420_, v_snd_423_);
lean_dec(v_snd_423_);
lean_dec(v_snd_420_);
if (v_decide_425_ == 0)
{
lean_object* v___x_426_; 
lean_dec_ref(v_acc_412_);
lean_inc(v_err_424_);
v___x_426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_426_, 0, v_pos_422_);
lean_ctor_set(v___x_426_, 1, v_err_424_);
return v___x_426_;
}
else
{
lean_object* v___x_427_; 
v___x_427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_427_, 0, v_pos_422_);
lean_ctor_set(v___x_427_, 1, v_acc_412_);
return v___x_427_;
}
}
v___jp_428_:
{
lean_object* v___x_429_; 
v___x_429_ = ((lean_object*)(l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1___closed__1));
lean_inc(v_snd_420_);
v_pos_422_ = v_a_413_;
v_snd_423_ = v_snd_420_;
v_err_424_ = v___x_429_;
goto v___jp_421_;
}
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_445_; lean_object* v___x_446_; 
v___x_445_ = 60;
v___x_446_ = lean_box_uint32(v___x_445_);
return v___x_446_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0(void){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_447_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0___boxed__const__1;
v___x_448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName(lean_object* v_a_452_){
_start:
{
lean_object* v_pos_454_; lean_object* v_res_455_; lean_object* v_fst_511_; lean_object* v_snd_512_; lean_object* v___x_513_; uint8_t v___x_514_; 
v_fst_511_ = lean_ctor_get(v_a_452_, 0);
v_snd_512_ = lean_ctor_get(v_a_452_, 1);
v___x_513_ = lean_string_utf8_byte_size(v_fst_511_);
v___x_514_ = lean_nat_dec_eq(v_snd_512_, v___x_513_);
if (v___x_514_ == 0)
{
uint32_t v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_515_ = lean_string_utf8_get_fast(v_fst_511_, v_snd_512_);
v___x_516_ = lean_box_uint32(v___x_515_);
v___x_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
v_pos_454_ = v_a_452_;
v_res_455_ = v___x_517_;
goto v___jp_453_;
}
else
{
lean_object* v___x_518_; 
v___x_518_ = lean_box(0);
v_pos_454_ = v_a_452_;
v_res_455_ = v___x_518_;
goto v___jp_453_;
}
v___jp_453_:
{
lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_456_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0);
v___x_457_ = l_instBEqOption_beq___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__0(v_res_455_, v___x_456_);
lean_dec(v_res_455_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName___closed__0));
v___x_459_ = l_Std_Internal_Parsec_manyCharsCore___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__1(v___x_458_, v_pos_454_);
return v___x_459_;
}
else
{
lean_object* v_fst_460_; lean_object* v_snd_461_; lean_object* v___x_462_; uint8_t v___x_463_; 
v_fst_460_ = lean_ctor_get(v_pos_454_, 0);
v_snd_461_ = lean_ctor_get(v_pos_454_, 1);
v___x_462_ = lean_string_utf8_byte_size(v_fst_460_);
v___x_463_ = lean_nat_dec_eq(v_snd_461_, v___x_462_);
if (v___x_463_ == 0)
{
lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_506_; 
lean_inc(v_snd_461_);
lean_inc(v_fst_460_);
v_isSharedCheck_506_ = !lean_is_exclusive(v_pos_454_);
if (v_isSharedCheck_506_ == 0)
{
lean_object* v_unused_507_; lean_object* v_unused_508_; 
v_unused_507_ = lean_ctor_get(v_pos_454_, 1);
lean_dec(v_unused_507_);
v_unused_508_ = lean_ctor_get(v_pos_454_, 0);
lean_dec(v_unused_508_);
v___x_465_ = v_pos_454_;
v_isShared_466_ = v_isSharedCheck_506_;
goto v_resetjp_464_;
}
else
{
lean_dec(v_pos_454_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_506_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_467_; lean_object* v___x_469_; 
v___x_467_ = lean_string_utf8_next_fast(v_fst_460_, v_snd_461_);
lean_dec(v_snd_461_);
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 1, v___x_467_);
v___x_469_ = v___x_465_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_fst_460_);
lean_ctor_set(v_reuseFailAlloc_505_, 1, v___x_467_);
v___x_469_ = v_reuseFailAlloc_505_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
lean_object* v___x_470_; 
v___x_470_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_quotedName(v___x_469_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_pos_471_; lean_object* v_res_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_504_; 
v_pos_471_ = lean_ctor_get(v___x_470_, 0);
v_res_472_ = lean_ctor_get(v___x_470_, 1);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_504_ == 0)
{
v___x_474_ = v___x_470_;
v_isShared_475_ = v_isSharedCheck_504_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_res_472_);
lean_inc(v_pos_471_);
lean_dec(v___x_470_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_504_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v_fst_476_; lean_object* v_snd_477_; lean_object* v___x_478_; uint8_t v___x_479_; 
v_fst_476_ = lean_ctor_get(v_pos_471_, 0);
v_snd_477_ = lean_ctor_get(v_pos_471_, 1);
v___x_478_ = lean_string_utf8_byte_size(v_fst_476_);
v___x_479_ = lean_nat_dec_eq(v_snd_477_, v___x_478_);
if (v___x_479_ == 0)
{
uint32_t v___x_480_; uint32_t v_c_481_; uint8_t v___x_482_; 
v___x_480_ = 62;
v_c_481_ = lean_string_utf8_get_fast(v_fst_476_, v_snd_477_);
v___x_482_ = lean_uint32_dec_eq(v_c_481_, v___x_480_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; lean_object* v___x_485_; 
lean_dec(v_res_472_);
v___x_483_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__2));
if (v_isShared_475_ == 0)
{
lean_ctor_set_tag(v___x_474_, 1);
lean_ctor_set(v___x_474_, 1, v___x_483_);
v___x_485_ = v___x_474_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_pos_471_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v___x_483_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
else
{
lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_497_; 
lean_inc(v_snd_477_);
lean_inc(v_fst_476_);
v_isSharedCheck_497_ = !lean_is_exclusive(v_pos_471_);
if (v_isSharedCheck_497_ == 0)
{
lean_object* v_unused_498_; lean_object* v_unused_499_; 
v_unused_498_ = lean_ctor_get(v_pos_471_, 1);
lean_dec(v_unused_498_);
v_unused_499_ = lean_ctor_get(v_pos_471_, 0);
lean_dec(v_unused_499_);
v___x_488_ = v_pos_471_;
v_isShared_489_ = v_isSharedCheck_497_;
goto v_resetjp_487_;
}
else
{
lean_dec(v_pos_471_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_497_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_490_; lean_object* v_it_x27_492_; 
v___x_490_ = lean_string_utf8_next_fast(v_fst_476_, v_snd_477_);
lean_dec(v_snd_477_);
if (v_isShared_489_ == 0)
{
lean_ctor_set(v___x_488_, 1, v___x_490_);
v_it_x27_492_ = v___x_488_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_fst_476_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v___x_490_);
v_it_x27_492_ = v_reuseFailAlloc_496_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
lean_object* v___x_494_; 
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 0, v_it_x27_492_);
v___x_494_ = v___x_474_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_it_x27_492_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v_res_472_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
}
}
else
{
lean_object* v___x_500_; lean_object* v___x_502_; 
lean_dec(v_res_472_);
v___x_500_ = lean_box(0);
if (v_isShared_475_ == 0)
{
lean_ctor_set_tag(v___x_474_, 1);
lean_ctor_set(v___x_474_, 1, v___x_500_);
v___x_502_ = v___x_474_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_pos_471_);
lean_ctor_set(v_reuseFailAlloc_503_, 1, v___x_500_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
}
else
{
return v___x_470_;
}
}
}
}
else
{
lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_509_ = lean_box(0);
v___x_510_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_510_, 0, v_pos_454_);
lean_ctor_set(v___x_510_, 1, v___x_509_);
return v___x_510_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___lam__1(lean_object* v___x_519_, lean_object* v_x_520_){
_start:
{
uint8_t v___x_521_; 
v___x_521_ = lean_int_dec_le(v_x_520_, v___x_519_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___lam__1___boxed(lean_object* v___x_522_, lean_object* v_x_523_){
_start:
{
uint8_t v_res_524_; lean_object* v_r_525_; 
v_res_524_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___lam__1(v___x_522_, v_x_523_);
lean_dec(v_x_523_);
lean_dec(v___x_522_);
v_r_525_ = lean_box(v_res_524_);
return v_r_525_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__2(void){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_529_ = lean_unsigned_to_nat(12u);
v___x_530_ = lean_nat_to_int(v___x_529_);
return v___x_530_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6(void){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = lean_unsigned_to_nat(5u);
v___x_536_ = lean_nat_to_int(v___x_535_);
return v___x_536_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__7(void){
_start:
{
lean_object* v___x_537_; lean_object* v___f_538_; 
v___x_537_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6);
v___f_538_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___lam__1___boxed), 2, 1);
lean_closure_set(v___f_538_, 0, v___x_537_);
return v___f_538_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__11(void){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = lean_unsigned_to_nat(7u);
v___x_543_ = lean_nat_to_int(v___x_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec(lean_object* v_a_544_){
_start:
{
lean_object* v_fst_545_; lean_object* v_snd_546_; lean_object* v___x_547_; uint8_t v___x_548_; 
v_fst_545_ = lean_ctor_get(v_a_544_, 0);
v_snd_546_ = lean_ctor_get(v_a_544_, 1);
v___x_547_ = lean_string_utf8_byte_size(v_fst_545_);
v___x_548_ = lean_nat_dec_eq(v_snd_546_, v___x_547_);
if (v___x_548_ == 0)
{
uint32_t v___x_549_; uint32_t v_c_550_; uint8_t v___x_551_; 
v___x_549_ = 77;
v_c_550_ = lean_string_utf8_get_fast(v_fst_545_, v_snd_546_);
v___x_551_ = lean_uint32_dec_eq(v_c_550_, v___x_549_);
if (v___x_551_ == 0)
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__1));
v___x_553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_553_, 0, v_a_544_);
lean_ctor_set(v___x_553_, 1, v___x_552_);
return v___x_553_;
}
else
{
lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_708_; 
lean_inc(v_snd_546_);
lean_inc(v_fst_545_);
v_isSharedCheck_708_ = !lean_is_exclusive(v_a_544_);
if (v_isSharedCheck_708_ == 0)
{
lean_object* v_unused_709_; lean_object* v_unused_710_; 
v_unused_709_ = lean_ctor_get(v_a_544_, 1);
lean_dec(v_unused_709_);
v_unused_710_ = lean_ctor_get(v_a_544_, 0);
lean_dec(v_unused_710_);
v___x_555_ = v_a_544_;
v_isShared_556_ = v_isSharedCheck_708_;
goto v_resetjp_554_;
}
else
{
lean_dec(v_a_544_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_708_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_557_; lean_object* v___f_558_; lean_object* v___x_559_; lean_object* v_it_x27_561_; 
v___x_557_ = lean_box(v___x_551_);
v___f_558_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0___boxed), 2, 1);
lean_closure_set(v___f_558_, 0, v___x_557_);
v___x_559_ = lean_string_utf8_next_fast(v_fst_545_, v_snd_546_);
lean_dec(v_snd_546_);
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 1, v___x_559_);
v_it_x27_561_ = v___x_555_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_fst_545_);
lean_ctor_set(v_reuseFailAlloc_707_, 1, v___x_559_);
v_it_x27_561_ = v_reuseFailAlloc_707_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_562_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0);
v___x_563_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__2, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__2_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__2);
v___x_564_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__3));
v___x_565_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(v___x_562_, v___x_563_, v___x_564_, v___f_558_, v_it_x27_561_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_pos_566_; lean_object* v_res_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_697_; 
v_pos_566_ = lean_ctor_get(v___x_565_, 0);
v_res_567_ = lean_ctor_get(v___x_565_, 1);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_697_ == 0)
{
v___x_569_ = v___x_565_;
v_isShared_570_ = v_isSharedCheck_697_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_res_567_);
lean_inc(v_pos_566_);
lean_dec(v___x_565_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_697_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v_fst_571_; lean_object* v_snd_572_; lean_object* v___x_573_; uint8_t v___x_574_; 
v_fst_571_ = lean_ctor_get(v_pos_566_, 0);
v_snd_572_ = lean_ctor_get(v_pos_566_, 1);
v___x_573_ = lean_string_utf8_byte_size(v_fst_571_);
v___x_574_ = lean_nat_dec_eq(v_snd_572_, v___x_573_);
if (v___x_574_ == 0)
{
uint32_t v___x_575_; uint32_t v_c_576_; uint8_t v___x_577_; 
v___x_575_ = 46;
v_c_576_ = lean_string_utf8_get_fast(v_fst_571_, v_snd_572_);
v___x_577_ = lean_uint32_dec_eq(v_c_576_, v___x_575_);
if (v___x_577_ == 0)
{
lean_object* v___x_578_; lean_object* v___x_580_; 
lean_dec(v_res_567_);
v___x_578_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__5));
if (v_isShared_570_ == 0)
{
lean_ctor_set_tag(v___x_569_, 1);
lean_ctor_set(v___x_569_, 1, v___x_578_);
v___x_580_ = v___x_569_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_pos_566_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v___x_578_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
else
{
lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_690_; 
lean_inc(v_snd_572_);
lean_inc(v_fst_571_);
v_isSharedCheck_690_ = !lean_is_exclusive(v_pos_566_);
if (v_isSharedCheck_690_ == 0)
{
lean_object* v_unused_691_; lean_object* v_unused_692_; 
v_unused_691_ = lean_ctor_get(v_pos_566_, 1);
lean_dec(v_unused_691_);
v_unused_692_ = lean_ctor_get(v_pos_566_, 0);
lean_dec(v_unused_692_);
v___x_583_ = v_pos_566_;
v_isShared_584_ = v_isSharedCheck_690_;
goto v_resetjp_582_;
}
else
{
lean_dec(v_pos_566_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_690_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_585_; lean_object* v_it_x27_587_; 
v___x_585_ = lean_string_utf8_next_fast(v_fst_571_, v_snd_572_);
lean_dec(v_snd_572_);
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 1, v___x_585_);
v_it_x27_587_ = v___x_583_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_fst_571_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v___x_585_);
v_it_x27_587_ = v_reuseFailAlloc_689_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_588_; lean_object* v___f_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_588_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__6);
v___f_589_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__7, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__7_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__7);
v___x_590_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__8));
v___x_591_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(v___x_562_, v___x_588_, v___x_590_, v___f_589_, v_it_x27_587_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v_pos_592_; lean_object* v_res_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_679_; 
v_pos_592_ = lean_ctor_get(v___x_591_, 0);
v_res_593_ = lean_ctor_get(v___x_591_, 1);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_679_ == 0)
{
v___x_595_ = v___x_591_;
v_isShared_596_ = v_isSharedCheck_679_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_res_593_);
lean_inc(v_pos_592_);
lean_dec(v___x_591_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_679_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v_fst_597_; lean_object* v_snd_598_; lean_object* v___x_599_; uint8_t v___x_600_; 
v_fst_597_ = lean_ctor_get(v_pos_592_, 0);
v_snd_598_ = lean_ctor_get(v_pos_592_, 1);
v___x_599_ = lean_string_utf8_byte_size(v_fst_597_);
v___x_600_ = lean_nat_dec_eq(v_snd_598_, v___x_599_);
if (v___x_600_ == 0)
{
uint32_t v_c_601_; uint8_t v___x_602_; 
v_c_601_ = lean_string_utf8_get_fast(v_fst_597_, v_snd_598_);
v___x_602_ = lean_uint32_dec_eq(v_c_601_, v___x_575_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; lean_object* v___x_605_; 
lean_dec(v_res_593_);
lean_del_object(v___x_569_);
lean_dec(v_res_567_);
v___x_603_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__5));
if (v_isShared_596_ == 0)
{
lean_ctor_set_tag(v___x_595_, 1);
lean_ctor_set(v___x_595_, 1, v___x_603_);
v___x_605_ = v___x_595_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_pos_592_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v___x_603_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
else
{
lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_672_; 
lean_inc(v_snd_598_);
lean_inc(v_fst_597_);
v_isSharedCheck_672_ = !lean_is_exclusive(v_pos_592_);
if (v_isSharedCheck_672_ == 0)
{
lean_object* v_unused_673_; lean_object* v_unused_674_; 
v_unused_673_ = lean_ctor_get(v_pos_592_, 1);
lean_dec(v_unused_673_);
v_unused_674_ = lean_ctor_get(v_pos_592_, 0);
lean_dec(v_unused_674_);
v___x_608_ = v_pos_592_;
v_isShared_609_ = v_isSharedCheck_672_;
goto v_resetjp_607_;
}
else
{
lean_dec(v_pos_592_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_672_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_610_; lean_object* v_it_x27_612_; 
v___x_610_ = lean_string_utf8_next_fast(v_fst_597_, v_snd_598_);
lean_dec(v_snd_598_);
lean_inc(v_fst_597_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 1, v___x_610_);
v_it_x27_612_ = v___x_608_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_fst_597_);
lean_ctor_set(v_reuseFailAlloc_671_, 1, v___x_610_);
v_it_x27_612_ = v_reuseFailAlloc_671_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
uint8_t v___x_618_; 
v___x_618_ = lean_nat_dec_eq(v___x_610_, v___x_599_);
if (v___x_618_ == 0)
{
uint32_t v_c_619_; uint32_t v___x_620_; uint8_t v___x_621_; 
v_c_619_ = lean_string_utf8_get_fast(v_fst_597_, v___x_610_);
v___x_620_ = 48;
v___x_621_ = lean_uint32_dec_le(v___x_620_, v_c_619_);
if (v___x_621_ == 0)
{
lean_dec(v_fst_597_);
lean_dec(v_res_593_);
lean_del_object(v___x_569_);
lean_dec(v_res_567_);
goto v___jp_613_;
}
else
{
uint32_t v___x_622_; uint8_t v___x_623_; 
v___x_622_ = 57;
v___x_623_ = lean_uint32_dec_le(v_c_619_, v___x_622_);
if (v___x_623_ == 0)
{
lean_dec(v_fst_597_);
lean_dec(v_res_593_);
lean_del_object(v___x_569_);
lean_dec(v_res_567_);
goto v___jp_613_;
}
else
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v_fst_629_; lean_object* v_snd_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_666_; 
lean_dec_ref(v_it_x27_612_);
lean_del_object(v___x_595_);
v___x_624_ = lean_string_utf8_next_fast(v_fst_597_, v___x_610_);
v___x_625_ = lean_uint32_to_nat(v_c_619_);
v___x_626_ = lean_unsigned_to_nat(48u);
v___x_627_ = lean_nat_sub(v___x_625_, v___x_626_);
lean_dec(v___x_625_);
v___x_628_ = l___private_Std_Internal_Parsec_String_0__Std_Internal_Parsec_String_digitsCore_go(v_fst_597_, v___x_624_, v___x_627_);
v_fst_629_ = lean_ctor_get(v___x_628_, 0);
v_snd_630_ = lean_ctor_get(v___x_628_, 1);
v_isSharedCheck_666_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_666_ == 0)
{
v___x_632_ = v___x_628_;
v_isShared_633_ = v_isSharedCheck_666_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_snd_630_);
lean_inc(v_fst_629_);
lean_dec(v___x_628_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_666_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_635_; 
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 0, v_fst_597_);
v___x_635_ = v___x_632_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_fst_597_);
lean_ctor_set(v_reuseFailAlloc_665_, 1, v_snd_630_);
v___x_635_ = v_reuseFailAlloc_665_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
lean_object* v___x_646_; uint8_t v___x_647_; 
v___x_646_ = lean_unsigned_to_nat(6u);
v___x_647_ = lean_nat_dec_lt(v___x_646_, v_fst_629_);
if (v___x_647_ == 0)
{
lean_object* v___x_648_; lean_object* v___y_650_; lean_object* v___x_655_; uint8_t v___x_656_; 
v___x_648_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__11, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__11_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__11);
v___x_655_ = lean_unsigned_to_nat(0u);
v___x_656_ = lean_nat_dec_eq(v_fst_629_, v___x_655_);
if (v___x_656_ == 0)
{
lean_object* v___x_657_; 
lean_inc(v_fst_629_);
v___x_657_ = lean_nat_to_int(v_fst_629_);
v___y_650_ = v___x_657_;
goto v___jp_649_;
}
else
{
v___y_650_ = v___x_648_;
goto v___jp_649_;
}
v___jp_649_:
{
uint8_t v___x_651_; 
v___x_651_ = lean_int_dec_le(v___x_562_, v___y_650_);
if (v___x_651_ == 0)
{
lean_dec(v___y_650_);
lean_dec(v_res_593_);
lean_dec(v_res_567_);
goto v___jp_636_;
}
else
{
uint8_t v___x_652_; 
v___x_652_ = lean_int_dec_le(v___y_650_, v___x_648_);
if (v___x_652_ == 0)
{
lean_dec(v___y_650_);
lean_dec(v_res_593_);
lean_dec(v_res_567_);
goto v___jp_636_;
}
else
{
lean_object* v___x_653_; lean_object* v___x_654_; 
lean_dec(v_fst_629_);
lean_del_object(v___x_569_);
v___x_653_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_653_, 0, v_res_567_);
lean_ctor_set(v___x_653_, 1, v_res_593_);
lean_ctor_set(v___x_653_, 2, v___y_650_);
v___x_654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_635_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
return v___x_654_;
}
}
}
}
else
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
lean_dec(v_res_593_);
lean_del_object(v___x_569_);
lean_dec(v_res_567_);
v___x_658_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__9));
v___x_659_ = l_Nat_reprFast(v_fst_629_);
v___x_660_ = lean_string_append(v___x_658_, v___x_659_);
lean_dec_ref(v___x_659_);
v___x_661_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__10));
v___x_662_ = lean_string_append(v___x_660_, v___x_661_);
v___x_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_663_, 0, v___x_662_);
v___x_664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_664_, 0, v___x_635_);
lean_ctor_set(v___x_664_, 1, v___x_663_);
return v___x_664_;
}
v___jp_636_:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_644_; 
v___x_637_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__9));
v___x_638_ = l_Nat_reprFast(v_fst_629_);
v___x_639_ = lean_string_append(v___x_637_, v___x_638_);
lean_dec_ref(v___x_638_);
v___x_640_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec___closed__10));
v___x_641_ = lean_string_append(v___x_639_, v___x_640_);
v___x_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
if (v_isShared_570_ == 0)
{
lean_ctor_set_tag(v___x_569_, 1);
lean_ctor_set(v___x_569_, 1, v___x_642_);
lean_ctor_set(v___x_569_, 0, v___x_635_);
v___x_644_ = v___x_569_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_645_, 1, v___x_642_);
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
}
}
else
{
lean_object* v___x_667_; lean_object* v___x_669_; 
lean_dec(v_fst_597_);
lean_del_object(v___x_595_);
lean_dec(v_res_593_);
lean_dec(v_res_567_);
v___x_667_ = lean_box(0);
if (v_isShared_570_ == 0)
{
lean_ctor_set_tag(v___x_569_, 1);
lean_ctor_set(v___x_569_, 1, v___x_667_);
lean_ctor_set(v___x_569_, 0, v_it_x27_612_);
v___x_669_ = v___x_569_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_it_x27_612_);
lean_ctor_set(v_reuseFailAlloc_670_, 1, v___x_667_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
v___jp_613_:
{
lean_object* v___x_614_; lean_object* v___x_616_; 
v___x_614_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat___closed__1));
if (v_isShared_596_ == 0)
{
lean_ctor_set_tag(v___x_595_, 1);
lean_ctor_set(v___x_595_, 1, v___x_614_);
lean_ctor_set(v___x_595_, 0, v_it_x27_612_);
v___x_616_ = v___x_595_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_it_x27_612_);
lean_ctor_set(v_reuseFailAlloc_617_, 1, v___x_614_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
}
}
}
}
else
{
lean_object* v___x_675_; lean_object* v___x_677_; 
lean_dec(v_res_593_);
lean_del_object(v___x_569_);
lean_dec(v_res_567_);
v___x_675_ = lean_box(0);
if (v_isShared_596_ == 0)
{
lean_ctor_set_tag(v___x_595_, 1);
lean_ctor_set(v___x_595_, 1, v___x_675_);
v___x_677_ = v___x_595_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_pos_592_);
lean_ctor_set(v_reuseFailAlloc_678_, 1, v___x_675_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
}
else
{
lean_object* v_pos_680_; lean_object* v_err_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_688_; 
lean_del_object(v___x_569_);
lean_dec(v_res_567_);
v_pos_680_ = lean_ctor_get(v___x_591_, 0);
v_err_681_ = lean_ctor_get(v___x_591_, 1);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_688_ == 0)
{
v___x_683_ = v___x_591_;
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_err_681_);
lean_inc(v_pos_680_);
lean_dec(v___x_591_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_pos_680_);
lean_ctor_set(v_reuseFailAlloc_687_, 1, v_err_681_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_693_; lean_object* v___x_695_; 
lean_dec(v_res_567_);
v___x_693_ = lean_box(0);
if (v_isShared_570_ == 0)
{
lean_ctor_set_tag(v___x_569_, 1);
lean_ctor_set(v___x_569_, 1, v___x_693_);
v___x_695_ = v___x_569_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_pos_566_);
lean_ctor_set(v_reuseFailAlloc_696_, 1, v___x_693_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
else
{
lean_object* v_pos_698_; lean_object* v_err_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_706_; 
v_pos_698_ = lean_ctor_get(v___x_565_, 0);
v_err_699_ = lean_ctor_get(v___x_565_, 1);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_706_ == 0)
{
v___x_701_ = v___x_565_;
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_err_699_);
lean_inc(v_pos_698_);
lean_dec(v___x_565_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_704_; 
if (v_isShared_702_ == 0)
{
v___x_704_ = v___x_701_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_pos_698_);
lean_ctor_set(v_reuseFailAlloc_705_, 1, v_err_699_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_711_ = lean_box(0);
v___x_712_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_712_, 0, v_a_544_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
return v___x_712_;
}
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2(void){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_716_ = lean_unsigned_to_nat(365u);
v___x_717_ = lean_nat_to_int(v___x_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec(lean_object* v_a_719_){
_start:
{
lean_object* v_fst_720_; lean_object* v_snd_721_; lean_object* v___x_722_; uint8_t v___x_723_; 
v_fst_720_ = lean_ctor_get(v_a_719_, 0);
v_snd_721_ = lean_ctor_get(v_a_719_, 1);
v___x_722_ = lean_string_utf8_byte_size(v_fst_720_);
v___x_723_ = lean_nat_dec_eq(v_snd_721_, v___x_722_);
if (v___x_723_ == 0)
{
uint32_t v___x_724_; uint32_t v_c_725_; uint8_t v___x_726_; 
v___x_724_ = 74;
v_c_725_ = lean_string_utf8_get_fast(v_fst_720_, v_snd_721_);
v___x_726_ = lean_uint32_dec_eq(v_c_725_, v___x_724_);
if (v___x_726_ == 0)
{
lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_727_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__1));
v___x_728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_728_, 0, v_a_719_);
lean_ctor_set(v___x_728_, 1, v___x_727_);
return v___x_728_;
}
else
{
lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_761_; 
lean_inc(v_snd_721_);
lean_inc(v_fst_720_);
v_isSharedCheck_761_ = !lean_is_exclusive(v_a_719_);
if (v_isSharedCheck_761_ == 0)
{
lean_object* v_unused_762_; lean_object* v_unused_763_; 
v_unused_762_ = lean_ctor_get(v_a_719_, 1);
lean_dec(v_unused_762_);
v_unused_763_ = lean_ctor_get(v_a_719_, 0);
lean_dec(v_unused_763_);
v___x_730_ = v_a_719_;
v_isShared_731_ = v_isSharedCheck_761_;
goto v_resetjp_729_;
}
else
{
lean_dec(v_a_719_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_761_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_732_; lean_object* v___f_733_; lean_object* v___x_734_; lean_object* v_it_x27_736_; 
v___x_732_ = lean_box(v___x_726_);
v___f_733_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___lam__0___boxed), 2, 1);
lean_closure_set(v___f_733_, 0, v___x_732_);
v___x_734_ = lean_string_utf8_next_fast(v_fst_720_, v_snd_721_);
lean_dec(v_snd_721_);
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 1, v___x_734_);
v_it_x27_736_ = v___x_730_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_fst_720_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v___x_734_);
v_it_x27_736_ = v_reuseFailAlloc_760_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_737_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign___closed__0);
v___x_738_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2);
v___x_739_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__3));
v___x_740_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(v___x_737_, v___x_738_, v___x_739_, v___f_733_, v_it_x27_736_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v_pos_741_; lean_object* v_res_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_750_; 
v_pos_741_ = lean_ctor_get(v___x_740_, 0);
v_res_742_ = lean_ctor_get(v___x_740_, 1);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_750_ == 0)
{
v___x_744_ = v___x_740_;
v_isShared_745_ = v_isSharedCheck_750_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_res_742_);
lean_inc(v_pos_741_);
lean_dec(v___x_740_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_750_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_746_; lean_object* v___x_748_; 
v___x_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_746_, 0, v_res_742_);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 1, v___x_746_);
v___x_748_ = v___x_744_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_pos_741_);
lean_ctor_set(v_reuseFailAlloc_749_, 1, v___x_746_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
else
{
lean_object* v_pos_751_; lean_object* v_err_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_759_; 
v_pos_751_ = lean_ctor_get(v___x_740_, 0);
v_err_752_ = lean_ctor_get(v___x_740_, 1);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_759_ == 0)
{
v___x_754_ = v___x_740_;
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_err_752_);
lean_inc(v_pos_751_);
lean_dec(v___x_740_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_757_; 
if (v_isShared_755_ == 0)
{
v___x_757_ = v___x_754_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_pos_751_);
lean_ctor_set(v_reuseFailAlloc_758_, 1, v_err_752_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_764_ = lean_box(0);
v___x_765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_765_, 0, v_a_719_);
lean_ctor_set(v___x_765_, 1, v___x_764_);
return v___x_765_;
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___lam__0(lean_object* v_x_766_){
_start:
{
uint8_t v___x_767_; 
v___x_767_ = 1;
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___lam__0___boxed(lean_object* v_x_768_){
_start:
{
uint8_t v_res_769_; lean_object* v_r_770_; 
v_res_769_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___lam__0(v_x_768_);
lean_dec(v_x_768_);
v_r_770_ = lean_box(v_res_769_);
return v_r_770_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec(lean_object* v_a_773_){
_start:
{
lean_object* v___f_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___f_774_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___closed__0));
v___x_775_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__5);
v___x_776_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec___closed__2);
v___x_777_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec___closed__1));
v___x_778_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parseBoundedNat(v___x_775_, v___x_776_, v___x_777_, v___f_774_, v_a_773_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v_pos_779_; lean_object* v_res_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_788_; 
v_pos_779_ = lean_ctor_get(v___x_778_, 0);
v_res_780_ = lean_ctor_get(v___x_778_, 1);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_788_ == 0)
{
v___x_782_ = v___x_778_;
v_isShared_783_ = v_isSharedCheck_788_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_res_780_);
lean_inc(v_pos_779_);
lean_dec(v___x_778_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_788_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_784_; lean_object* v___x_786_; 
v___x_784_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_784_, 0, v_res_780_);
if (v_isShared_783_ == 0)
{
lean_ctor_set(v___x_782_, 1, v___x_784_);
v___x_786_ = v___x_782_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_pos_779_);
lean_ctor_set(v_reuseFailAlloc_787_, 1, v___x_784_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
else
{
lean_object* v_pos_789_; lean_object* v_err_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
v_pos_789_ = lean_ctor_get(v___x_778_, 0);
v_err_790_ = lean_ctor_get(v___x_778_, 1);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_778_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_err_790_);
lean_inc(v_pos_789_);
lean_dec(v___x_778_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_pos_789_);
lean_ctor_set(v_reuseFailAlloc_796_, 1, v_err_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseDstOffset(lean_object* v_stdOffset_798_, lean_object* v_a_799_){
_start:
{
lean_object* v_fst_800_; lean_object* v_snd_801_; lean_object* v___x_802_; uint8_t v___x_803_; 
v_fst_800_ = lean_ctor_get(v_a_799_, 0);
v_snd_801_ = lean_ctor_get(v_a_799_, 1);
v___x_802_ = lean_string_utf8_byte_size(v_fst_800_);
v___x_803_ = lean_nat_dec_eq(v_snd_801_, v___x_802_);
if (v___x_803_ == 0)
{
uint32_t v___x_804_; uint32_t v___x_815_; uint8_t v___x_816_; 
v___x_804_ = lean_string_utf8_get_fast(v_fst_800_, v_snd_801_);
v___x_815_ = 48;
v___x_816_ = lean_uint32_dec_le(v___x_815_, v___x_804_);
if (v___x_816_ == 0)
{
goto v___jp_805_;
}
else
{
uint32_t v___x_817_; uint8_t v___x_818_; 
v___x_817_ = 57;
v___x_818_ = lean_uint32_dec_le(v___x_804_, v___x_817_);
if (v___x_818_ == 0)
{
goto v___jp_805_;
}
else
{
lean_object* v___x_819_; 
v___x_819_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseOffset(v_a_799_);
return v___x_819_;
}
}
v___jp_805_:
{
uint32_t v___x_806_; uint8_t v___x_807_; 
v___x_806_ = 43;
v___x_807_ = lean_uint32_dec_eq(v___x_804_, v___x_806_);
if (v___x_807_ == 0)
{
uint32_t v___x_808_; uint8_t v___x_809_; 
v___x_808_ = 45;
v___x_809_ = lean_uint32_dec_eq(v___x_804_, v___x_808_);
if (v___x_809_ == 0)
{
lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_810_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3);
v___x_811_ = lean_int_add(v_stdOffset_798_, v___x_810_);
v___x_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_812_, 0, v_a_799_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
return v___x_812_;
}
else
{
lean_object* v___x_813_; 
v___x_813_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseOffset(v_a_799_);
return v___x_813_;
}
}
else
{
lean_object* v___x_814_; 
v___x_814_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseOffset(v_a_799_);
return v___x_814_;
}
}
}
else
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_820_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3);
v___x_821_ = lean_int_add(v_stdOffset_798_, v___x_820_);
v___x_822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_822_, 0, v_a_799_);
lean_ctor_set(v___x_822_, 1, v___x_821_);
return v___x_822_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseDstOffset___boxed(lean_object* v_stdOffset_823_, lean_object* v_a_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseDstOffset(v_stdOffset_823_, v_a_824_);
lean_dec(v_stdOffset_823_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSpec(lean_object* v_a_826_){
_start:
{
lean_object* v___x_827_; 
lean_inc_ref(v_a_826_);
v___x_827_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseMwdSpec(v_a_826_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_dec_ref(v_a_826_);
return v___x_827_;
}
else
{
lean_object* v_err_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_839_; 
v_err_828_ = lean_ctor_get(v___x_827_, 1);
v_isSharedCheck_839_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_839_ == 0)
{
lean_object* v_unused_840_; 
v_unused_840_ = lean_ctor_get(v___x_827_, 0);
lean_dec(v_unused_840_);
v___x_830_ = v___x_827_;
v_isShared_831_ = v_isSharedCheck_839_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_err_828_);
lean_dec(v___x_827_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_839_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v_snd_832_; uint8_t v_decide_833_; 
v_snd_832_ = lean_ctor_get(v_a_826_, 1);
v_decide_833_ = lean_nat_dec_eq(v_snd_832_, v_snd_832_);
if (v_decide_833_ == 0)
{
lean_object* v___x_835_; 
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 0, v_a_826_);
v___x_835_ = v___x_830_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_a_826_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v_err_828_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
else
{
lean_object* v___x_837_; 
lean_del_object(v___x_830_);
lean_dec(v_err_828_);
lean_inc_ref(v_a_826_);
v___x_837_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulianSpec(v_a_826_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_dec_ref(v_a_826_);
return v___x_837_;
}
else
{
lean_object* v___x_838_; 
lean_dec_ref_known(v___x_837_, 2);
v___x_838_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseJulian0Spec(v_a_826_);
return v___x_838_;
}
}
}
}
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__0(void){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_841_ = lean_unsigned_to_nat(2u);
v___x_842_ = lean_nat_to_int(v___x_841_);
return v___x_842_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__1(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_843_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS___closed__3);
v___x_844_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__0, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__0_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__0);
v___x_845_ = lean_int_mul(v___x_844_, v___x_843_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule(uint8_t v_extended_849_, lean_object* v_a_850_){
_start:
{
lean_object* v___x_851_; 
v___x_851_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSpec(v_a_850_);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_object* v_pos_852_; lean_object* v_res_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_895_; 
v_pos_852_ = lean_ctor_get(v___x_851_, 0);
v_res_853_ = lean_ctor_get(v___x_851_, 1);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_895_ == 0)
{
v___x_855_ = v___x_851_;
v_isShared_856_ = v_isSharedCheck_895_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_res_853_);
lean_inc(v_pos_852_);
lean_dec(v___x_851_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_895_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v_pos_858_; lean_object* v_res_859_; lean_object* v_fst_864_; lean_object* v_snd_865_; lean_object* v_pos_867_; lean_object* v_snd_868_; lean_object* v_err_869_; lean_object* v___x_873_; uint8_t v___x_874_; 
v_fst_864_ = lean_ctor_get(v_pos_852_, 0);
v_snd_865_ = lean_ctor_get(v_pos_852_, 1);
lean_inc(v_snd_865_);
v___x_873_ = lean_string_utf8_byte_size(v_fst_864_);
v___x_874_ = lean_nat_dec_eq(v_snd_865_, v___x_873_);
if (v___x_874_ == 0)
{
uint32_t v___x_875_; uint32_t v_c_876_; uint8_t v___x_877_; 
v___x_875_ = 47;
v_c_876_ = lean_string_utf8_get_fast(v_fst_864_, v_snd_865_);
v___x_877_ = lean_uint32_dec_eq(v_c_876_, v___x_875_);
if (v___x_877_ == 0)
{
lean_object* v___x_878_; 
v___x_878_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__3));
lean_inc(v_snd_865_);
v_pos_867_ = v_pos_852_;
v_snd_868_ = v_snd_865_;
v_err_869_ = v___x_878_;
goto v___jp_866_;
}
else
{
lean_object* v___x_879_; lean_object* v_it_x27_880_; lean_object* v___x_881_; 
v___x_879_ = lean_string_utf8_next_fast(v_fst_864_, v_snd_865_);
lean_inc(v_fst_864_);
v_it_x27_880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_880_, 0, v_fst_864_);
lean_ctor_set(v_it_x27_880_, 1, v___x_879_);
v___x_881_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseSign(v_it_x27_880_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_pos_882_; lean_object* v_res_883_; lean_object* v___y_885_; 
v_pos_882_ = lean_ctor_get(v___x_881_, 0);
lean_inc(v_pos_882_);
v_res_883_ = lean_ctor_get(v___x_881_, 1);
lean_inc(v_res_883_);
lean_dec_ref_known(v___x_881_, 2);
if (v_extended_849_ == 0)
{
lean_object* v___x_891_; 
v___x_891_ = lean_unsigned_to_nat(24u);
v___y_885_ = v___x_891_;
goto v___jp_884_;
}
else
{
lean_object* v___x_892_; 
v___x_892_ = lean_unsigned_to_nat(167u);
v___y_885_ = v___x_892_;
goto v___jp_884_;
}
v___jp_884_:
{
lean_object* v___x_886_; 
v___x_886_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseHMS(v___y_885_, v_pos_882_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v_pos_887_; lean_object* v_res_888_; lean_object* v___x_889_; 
lean_dec(v_snd_865_);
lean_dec(v_pos_852_);
v_pos_887_ = lean_ctor_get(v___x_886_, 0);
lean_inc(v_pos_887_);
v_res_888_ = lean_ctor_get(v___x_886_, 1);
lean_inc(v_res_888_);
lean_dec_ref_known(v___x_886_, 2);
v___x_889_ = lean_int_mul(v_res_883_, v_res_888_);
lean_dec(v_res_888_);
lean_dec(v_res_883_);
v_pos_858_ = v_pos_887_;
v_res_859_ = v___x_889_;
goto v___jp_857_;
}
else
{
lean_object* v_err_890_; 
lean_dec(v_res_883_);
v_err_890_ = lean_ctor_get(v___x_886_, 1);
lean_inc(v_err_890_);
lean_dec_ref_known(v___x_886_, 2);
lean_inc(v_snd_865_);
v_pos_867_ = v_pos_852_;
v_snd_868_ = v_snd_865_;
v_err_869_ = v_err_890_;
goto v___jp_866_;
}
}
}
else
{
lean_object* v_err_893_; 
v_err_893_ = lean_ctor_get(v___x_881_, 1);
lean_inc(v_err_893_);
lean_dec_ref_known(v___x_881_, 2);
lean_inc(v_snd_865_);
v_pos_867_ = v_pos_852_;
v_snd_868_ = v_snd_865_;
v_err_869_ = v_err_893_;
goto v___jp_866_;
}
}
}
else
{
lean_object* v___x_894_; 
v___x_894_ = lean_box(0);
lean_inc(v_snd_865_);
v_pos_867_ = v_pos_852_;
v_snd_868_ = v_snd_865_;
v_err_869_ = v___x_894_;
goto v___jp_866_;
}
v___jp_857_:
{
lean_object* v___x_860_; lean_object* v___x_862_; 
v___x_860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_860_, 0, v_res_853_);
lean_ctor_set(v___x_860_, 1, v_res_859_);
if (v_isShared_856_ == 0)
{
lean_ctor_set(v___x_855_, 1, v___x_860_);
lean_ctor_set(v___x_855_, 0, v_pos_858_);
v___x_862_ = v___x_855_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_pos_858_);
lean_ctor_set(v_reuseFailAlloc_863_, 1, v___x_860_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
v___jp_866_:
{
uint8_t v_decide_870_; 
v_decide_870_ = lean_nat_dec_eq(v_snd_865_, v_snd_868_);
lean_dec(v_snd_868_);
lean_dec(v_snd_865_);
if (v_decide_870_ == 0)
{
lean_object* v___x_871_; 
lean_del_object(v___x_855_);
lean_dec(v_res_853_);
v___x_871_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_871_, 0, v_pos_867_);
lean_ctor_set(v___x_871_, 1, v_err_869_);
return v___x_871_;
}
else
{
lean_object* v___x_872_; 
lean_dec(v_err_869_);
v___x_872_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__1, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__1_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___closed__1);
v_pos_858_ = v_pos_867_;
v_res_859_ = v___x_872_;
goto v___jp_857_;
}
}
}
}
else
{
lean_object* v_pos_896_; lean_object* v_err_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_904_; 
v_pos_896_ = lean_ctor_get(v___x_851_, 0);
v_err_897_ = lean_ctor_get(v___x_851_, 1);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_904_ == 0)
{
v___x_899_ = v___x_851_;
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_err_897_);
lean_inc(v_pos_896_);
lean_dec(v___x_851_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_902_; 
if (v_isShared_900_ == 0)
{
v___x_902_ = v___x_899_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_pos_896_);
lean_ctor_set(v_reuseFailAlloc_903_, 1, v_err_897_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule___boxed(lean_object* v_extended_905_, lean_object* v_a_906_){
_start:
{
uint8_t v_extended_boxed_907_; lean_object* v_res_908_; 
v_extended_boxed_907_ = lean_unbox(v_extended_905_);
v_res_908_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule(v_extended_boxed_907_, v_a_906_);
return v_res_908_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_909_; lean_object* v___x_910_; 
v___x_909_ = 44;
v___x_910_ = lean_box_uint32(v___x_909_);
return v___x_910_;
}
}
static lean_object* _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0(void){
_start:
{
lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_911_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0___boxed__const__1;
v___x_912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_912_, 0, v___x_911_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP(uint8_t v_extended_919_, lean_object* v_a_920_){
_start:
{
lean_object* v___x_921_; 
v___x_921_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName(v_a_920_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_pos_922_; lean_object* v_res_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_1101_; 
v_pos_922_ = lean_ctor_get(v___x_921_, 0);
v_res_923_ = lean_ctor_get(v___x_921_, 1);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_925_ = v___x_921_;
v_isShared_926_ = v_isSharedCheck_1101_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_res_923_);
lean_inc(v_pos_922_);
lean_dec(v___x_921_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_1101_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_927_; lean_object* v___x_928_; uint8_t v___x_929_; 
v___x_927_ = lean_string_utf8_byte_size(v_res_923_);
v___x_928_ = lean_unsigned_to_nat(0u);
v___x_929_ = lean_nat_dec_eq(v___x_927_, v___x_928_);
if (v___x_929_ == 0)
{
lean_object* v___x_930_; 
lean_del_object(v___x_925_);
v___x_930_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseOffset(v_pos_922_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v_pos_931_; lean_object* v_res_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_1087_; 
v_pos_931_ = lean_ctor_get(v___x_930_, 0);
v_res_932_ = lean_ctor_get(v___x_930_, 1);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_934_ = v___x_930_;
v_isShared_935_ = v_isSharedCheck_1087_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_res_932_);
lean_inc(v_pos_931_);
lean_dec(v___x_930_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_1087_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v_fst_936_; lean_object* v_snd_937_; lean_object* v___x_938_; uint8_t v___x_939_; 
v_fst_936_ = lean_ctor_get(v_pos_931_, 0);
v_snd_937_ = lean_ctor_get(v_pos_931_, 1);
v___x_938_ = lean_string_utf8_byte_size(v_fst_936_);
v___x_939_ = lean_nat_dec_eq(v_snd_937_, v___x_938_);
if (v___x_939_ == 0)
{
lean_object* v___x_940_; 
lean_del_object(v___x_934_);
v___x_940_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName(v_pos_931_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_pos_941_; lean_object* v_res_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_1072_; 
v_pos_941_ = lean_ctor_get(v___x_940_, 0);
v_res_942_ = lean_ctor_get(v___x_940_, 1);
v_isSharedCheck_1072_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_944_ = v___x_940_;
v_isShared_945_ = v_isSharedCheck_1072_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_res_942_);
lean_inc(v_pos_941_);
lean_dec(v___x_940_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_1072_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_946_; uint8_t v___x_947_; 
v___x_946_ = lean_string_utf8_byte_size(v_res_942_);
v___x_947_ = lean_nat_dec_eq(v___x_946_, v___x_928_);
if (v___x_947_ == 0)
{
lean_object* v___x_948_; 
lean_del_object(v___x_944_);
v___x_948_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseDstOffset(v_res_932_, v_pos_941_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_pos_949_; lean_object* v_res_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_1057_; 
v_pos_949_ = lean_ctor_get(v___x_948_, 0);
v_res_950_ = lean_ctor_get(v___x_948_, 1);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_952_ = v___x_948_;
v_isShared_953_ = v_isSharedCheck_1057_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_res_950_);
lean_inc(v_pos_949_);
lean_dec(v___x_948_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_1057_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v_pos_955_; lean_object* v_res_956_; lean_object* v_fst_1049_; lean_object* v_snd_1050_; lean_object* v___x_1051_; uint8_t v___x_1052_; 
v_fst_1049_ = lean_ctor_get(v_pos_949_, 0);
v_snd_1050_ = lean_ctor_get(v_pos_949_, 1);
v___x_1051_ = lean_string_utf8_byte_size(v_fst_1049_);
v___x_1052_ = lean_nat_dec_eq(v_snd_1050_, v___x_1051_);
if (v___x_1052_ == 0)
{
uint32_t v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1053_ = lean_string_utf8_get_fast(v_fst_1049_, v_snd_1050_);
v___x_1054_ = lean_box_uint32(v___x_1053_);
v___x_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
v_pos_955_ = v_pos_949_;
v_res_956_ = v___x_1055_;
goto v___jp_954_;
}
else
{
lean_object* v___x_1056_; 
v___x_1056_ = lean_box(0);
v_pos_955_ = v_pos_949_;
v_res_956_ = v___x_1056_;
goto v___jp_954_;
}
v___jp_954_:
{
uint32_t v___x_957_; lean_object* v___x_958_; uint8_t v___x_959_; 
v___x_957_ = 44;
v___x_958_ = lean_obj_once(&l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0, &l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0_once, _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0);
v___x_959_ = l_instBEqOption_beq___at___00__private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName_spec__0(v_res_956_, v___x_958_);
lean_dec(v_res_956_);
if (v___x_959_ == 0)
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_965_; 
v___x_960_ = lean_box(0);
v___x_961_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_961_, 0, v_res_942_);
lean_ctor_set(v___x_961_, 1, v_res_950_);
lean_ctor_set(v___x_961_, 2, v___x_960_);
lean_ctor_set(v___x_961_, 3, v___x_960_);
v___x_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_962_, 0, v___x_961_);
v___x_963_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_963_, 0, v_res_923_);
lean_ctor_set(v___x_963_, 1, v_res_932_);
lean_ctor_set(v___x_963_, 2, v___x_962_);
if (v_isShared_953_ == 0)
{
lean_ctor_set(v___x_952_, 1, v___x_963_);
lean_ctor_set(v___x_952_, 0, v_pos_955_);
v___x_965_ = v___x_952_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_pos_955_);
lean_ctor_set(v_reuseFailAlloc_966_, 1, v___x_963_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
else
{
lean_object* v_fst_967_; lean_object* v_snd_968_; lean_object* v___x_969_; uint8_t v___x_970_; 
v_fst_967_ = lean_ctor_get(v_pos_955_, 0);
v_snd_968_ = lean_ctor_get(v_pos_955_, 1);
v___x_969_ = lean_string_utf8_byte_size(v_fst_967_);
v___x_970_ = lean_nat_dec_eq(v_snd_968_, v___x_969_);
if (v___x_970_ == 0)
{
lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_1042_; 
lean_inc(v_snd_968_);
lean_inc(v_fst_967_);
lean_del_object(v___x_952_);
v_isSharedCheck_1042_ = !lean_is_exclusive(v_pos_955_);
if (v_isSharedCheck_1042_ == 0)
{
lean_object* v_unused_1043_; lean_object* v_unused_1044_; 
v_unused_1043_ = lean_ctor_get(v_pos_955_, 1);
lean_dec(v_unused_1043_);
v_unused_1044_ = lean_ctor_get(v_pos_955_, 0);
lean_dec(v_unused_1044_);
v___x_972_ = v_pos_955_;
v_isShared_973_ = v_isSharedCheck_1042_;
goto v_resetjp_971_;
}
else
{
lean_dec(v_pos_955_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_1042_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_974_; lean_object* v___x_976_; 
v___x_974_ = lean_string_utf8_next_fast(v_fst_967_, v_snd_968_);
lean_dec(v_snd_968_);
if (v_isShared_973_ == 0)
{
lean_ctor_set(v___x_972_, 1, v___x_974_);
v___x_976_ = v___x_972_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_fst_967_);
lean_ctor_set(v_reuseFailAlloc_1041_, 1, v___x_974_);
v___x_976_ = v_reuseFailAlloc_1041_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
lean_object* v___x_977_; 
v___x_977_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule(v_extended_919_, v___x_976_);
if (lean_obj_tag(v___x_977_) == 0)
{
lean_object* v_pos_978_; lean_object* v_res_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_1031_; 
v_pos_978_ = lean_ctor_get(v___x_977_, 0);
v_res_979_ = lean_ctor_get(v___x_977_, 1);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_977_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_981_ = v___x_977_;
v_isShared_982_ = v_isSharedCheck_1031_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_res_979_);
lean_inc(v_pos_978_);
lean_dec(v___x_977_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_1031_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v_fst_983_; lean_object* v_snd_984_; lean_object* v___x_985_; uint8_t v___x_986_; 
v_fst_983_ = lean_ctor_get(v_pos_978_, 0);
v_snd_984_ = lean_ctor_get(v_pos_978_, 1);
v___x_985_ = lean_string_utf8_byte_size(v_fst_983_);
v___x_986_ = lean_nat_dec_eq(v_snd_984_, v___x_985_);
if (v___x_986_ == 0)
{
uint32_t v_c_987_; uint8_t v___x_988_; 
v_c_987_ = lean_string_utf8_get_fast(v_fst_983_, v_snd_984_);
v___x_988_ = lean_uint32_dec_eq(v_c_987_, v___x_957_);
if (v___x_988_ == 0)
{
lean_object* v___x_989_; lean_object* v___x_991_; 
lean_dec(v_res_979_);
lean_dec(v_res_950_);
lean_dec(v_res_942_);
lean_dec(v_res_932_);
lean_dec(v_res_923_);
v___x_989_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__2));
if (v_isShared_982_ == 0)
{
lean_ctor_set_tag(v___x_981_, 1);
lean_ctor_set(v___x_981_, 1, v___x_989_);
v___x_991_ = v___x_981_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_pos_978_);
lean_ctor_set(v_reuseFailAlloc_992_, 1, v___x_989_);
v___x_991_ = v_reuseFailAlloc_992_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
return v___x_991_;
}
}
else
{
lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1024_; 
lean_inc(v_snd_984_);
lean_inc(v_fst_983_);
lean_del_object(v___x_981_);
v_isSharedCheck_1024_ = !lean_is_exclusive(v_pos_978_);
if (v_isSharedCheck_1024_ == 0)
{
lean_object* v_unused_1025_; lean_object* v_unused_1026_; 
v_unused_1025_ = lean_ctor_get(v_pos_978_, 1);
lean_dec(v_unused_1025_);
v_unused_1026_ = lean_ctor_get(v_pos_978_, 0);
lean_dec(v_unused_1026_);
v___x_994_ = v_pos_978_;
v_isShared_995_ = v_isSharedCheck_1024_;
goto v_resetjp_993_;
}
else
{
lean_dec(v_pos_978_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1024_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_996_; lean_object* v_it_x27_998_; 
v___x_996_ = lean_string_utf8_next_fast(v_fst_983_, v_snd_984_);
lean_dec(v_snd_984_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 1, v___x_996_);
v_it_x27_998_ = v___x_994_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_fst_983_);
lean_ctor_set(v_reuseFailAlloc_1023_, 1, v___x_996_);
v_it_x27_998_ = v_reuseFailAlloc_1023_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
lean_object* v___x_999_; 
v___x_999_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseRule(v_extended_919_, v_it_x27_998_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_pos_1000_; lean_object* v_res_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1013_; 
v_pos_1000_ = lean_ctor_get(v___x_999_, 0);
v_res_1001_ = lean_ctor_get(v___x_999_, 1);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1003_ = v___x_999_;
v_isShared_1004_ = v_isSharedCheck_1013_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_res_1001_);
lean_inc(v_pos_1000_);
lean_dec(v___x_999_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1013_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1011_; 
v___x_1005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1005_, 0, v_res_979_);
v___x_1006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1006_, 0, v_res_1001_);
v___x_1007_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1007_, 0, v_res_942_);
lean_ctor_set(v___x_1007_, 1, v_res_950_);
lean_ctor_set(v___x_1007_, 2, v___x_1005_);
lean_ctor_set(v___x_1007_, 3, v___x_1006_);
v___x_1008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
v___x_1009_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1009_, 0, v_res_923_);
lean_ctor_set(v___x_1009_, 1, v_res_932_);
lean_ctor_set(v___x_1009_, 2, v___x_1008_);
if (v_isShared_1004_ == 0)
{
lean_ctor_set(v___x_1003_, 1, v___x_1009_);
v___x_1011_ = v___x_1003_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_pos_1000_);
lean_ctor_set(v_reuseFailAlloc_1012_, 1, v___x_1009_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
else
{
lean_object* v_pos_1014_; lean_object* v_err_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1022_; 
lean_dec(v_res_979_);
lean_dec(v_res_950_);
lean_dec(v_res_942_);
lean_dec(v_res_932_);
lean_dec(v_res_923_);
v_pos_1014_ = lean_ctor_get(v___x_999_, 0);
v_err_1015_ = lean_ctor_get(v___x_999_, 1);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1017_ = v___x_999_;
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_err_1015_);
lean_inc(v_pos_1014_);
lean_dec(v___x_999_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_1018_ == 0)
{
v___x_1020_ = v___x_1017_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_pos_1014_);
lean_ctor_set(v_reuseFailAlloc_1021_, 1, v_err_1015_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1027_; lean_object* v___x_1029_; 
lean_dec(v_res_979_);
lean_dec(v_res_950_);
lean_dec(v_res_942_);
lean_dec(v_res_932_);
lean_dec(v_res_923_);
v___x_1027_ = lean_box(0);
if (v_isShared_982_ == 0)
{
lean_ctor_set_tag(v___x_981_, 1);
lean_ctor_set(v___x_981_, 1, v___x_1027_);
v___x_1029_ = v___x_981_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_pos_978_);
lean_ctor_set(v_reuseFailAlloc_1030_, 1, v___x_1027_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
}
else
{
lean_object* v_pos_1032_; lean_object* v_err_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1040_; 
lean_dec(v_res_950_);
lean_dec(v_res_942_);
lean_dec(v_res_932_);
lean_dec(v_res_923_);
v_pos_1032_ = lean_ctor_get(v___x_977_, 0);
v_err_1033_ = lean_ctor_get(v___x_977_, 1);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_977_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1035_ = v___x_977_;
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_err_1033_);
lean_inc(v_pos_1032_);
lean_dec(v___x_977_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1038_; 
if (v_isShared_1036_ == 0)
{
v___x_1038_ = v___x_1035_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_pos_1032_);
lean_ctor_set(v_reuseFailAlloc_1039_, 1, v_err_1033_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
}
}
else
{
lean_object* v___x_1045_; lean_object* v___x_1047_; 
lean_dec(v_res_950_);
lean_dec(v_res_942_);
lean_dec(v_res_932_);
lean_dec(v_res_923_);
v___x_1045_ = lean_box(0);
if (v_isShared_953_ == 0)
{
lean_ctor_set_tag(v___x_952_, 1);
lean_ctor_set(v___x_952_, 1, v___x_1045_);
lean_ctor_set(v___x_952_, 0, v_pos_955_);
v___x_1047_ = v___x_952_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_pos_955_);
lean_ctor_set(v_reuseFailAlloc_1048_, 1, v___x_1045_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
}
}
else
{
lean_object* v_pos_1058_; lean_object* v_err_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1066_; 
lean_dec(v_res_942_);
lean_dec(v_res_932_);
lean_dec(v_res_923_);
v_pos_1058_ = lean_ctor_get(v___x_948_, 0);
v_err_1059_ = lean_ctor_get(v___x_948_, 1);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1061_ = v___x_948_;
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_err_1059_);
lean_inc(v_pos_1058_);
lean_dec(v___x_948_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
v___x_1064_ = v___x_1061_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v_pos_1058_);
lean_ctor_set(v_reuseFailAlloc_1065_, 1, v_err_1059_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
else
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1070_; 
lean_dec(v_res_942_);
v___x_1067_ = lean_box(0);
v___x_1068_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1068_, 0, v_res_923_);
lean_ctor_set(v___x_1068_, 1, v_res_932_);
lean_ctor_set(v___x_1068_, 2, v___x_1067_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 1, v___x_1068_);
v___x_1070_ = v___x_944_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v_pos_941_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v___x_1068_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
}
}
else
{
lean_object* v_pos_1073_; lean_object* v_err_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1081_; 
lean_dec(v_res_932_);
lean_dec(v_res_923_);
v_pos_1073_ = lean_ctor_get(v___x_940_, 0);
v_err_1074_ = lean_ctor_get(v___x_940_, 1);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1076_ = v___x_940_;
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_err_1074_);
lean_inc(v_pos_1073_);
lean_dec(v___x_940_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1079_; 
if (v_isShared_1077_ == 0)
{
v___x_1079_ = v___x_1076_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_pos_1073_);
lean_ctor_set(v_reuseFailAlloc_1080_, 1, v_err_1074_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
}
else
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1085_; 
v___x_1082_ = lean_box(0);
v___x_1083_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1083_, 0, v_res_923_);
lean_ctor_set(v___x_1083_, 1, v_res_932_);
lean_ctor_set(v___x_1083_, 2, v___x_1082_);
if (v_isShared_935_ == 0)
{
lean_ctor_set(v___x_934_, 1, v___x_1083_);
v___x_1085_ = v___x_934_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_pos_931_);
lean_ctor_set(v_reuseFailAlloc_1086_, 1, v___x_1083_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
else
{
lean_object* v_pos_1088_; lean_object* v_err_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
lean_dec(v_res_923_);
v_pos_1088_ = lean_ctor_get(v___x_930_, 0);
v_err_1089_ = lean_ctor_get(v___x_930_, 1);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_930_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_err_1089_);
lean_inc(v_pos_1088_);
lean_dec(v___x_930_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1094_; 
if (v_isShared_1092_ == 0)
{
v___x_1094_ = v___x_1091_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_pos_1088_);
lean_ctor_set(v_reuseFailAlloc_1095_, 1, v_err_1089_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
}
else
{
lean_object* v___x_1097_; lean_object* v___x_1099_; 
lean_dec(v_res_923_);
v___x_1097_ = ((lean_object*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__4));
if (v_isShared_926_ == 0)
{
lean_ctor_set_tag(v___x_925_, 1);
lean_ctor_set(v___x_925_, 1, v___x_1097_);
v___x_1099_ = v___x_925_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v_pos_922_);
lean_ctor_set(v_reuseFailAlloc_1100_, 1, v___x_1097_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
}
}
else
{
lean_object* v_pos_1102_; lean_object* v_err_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
v_pos_1102_ = lean_ctor_get(v___x_921_, 0);
v_err_1103_ = lean_ctor_get(v___x_921_, 1);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_921_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_err_1103_);
lean_inc(v_pos_1102_);
lean_dec(v___x_921_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_pos_1102_);
lean_ctor_set(v_reuseFailAlloc_1109_, 1, v_err_1103_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___boxed(lean_object* v_extended_1111_, lean_object* v_a_1112_){
_start:
{
uint8_t v_extended_boxed_1113_; lean_object* v_res_1114_; 
v_extended_boxed_1113_ = lean_unbox(v_extended_1111_);
v_res_1114_ = l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP(v_extended_boxed_1113_, v_a_1112_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_parsePosixTz(lean_object* v_s_1115_, uint8_t v_extended_1116_){
_start:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1117_ = lean_box(v_extended_1116_);
v___x_1118_ = lean_alloc_closure((void*)(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___boxed), 2, 1);
lean_closure_set(v___x_1118_, 0, v___x_1117_);
v___x_1119_ = l_Std_Internal_Parsec_String_Parser_run___redArg(v___x_1118_, v_s_1115_);
return v___x_1119_;
}
}
LEAN_EXPORT lean_object* l_Std_Time_TimeZone_parsePosixTz___boxed(lean_object* v_s_1120_, lean_object* v_extended_1121_){
_start:
{
uint8_t v_extended_boxed_1122_; lean_object* v_res_1123_; 
v_extended_boxed_1122_ = lean_unbox(v_extended_1121_);
v_res_1123_ = l_Std_Time_TimeZone_parsePosixTz(v_s_1120_, v_extended_boxed_1122_);
return v_res_1123_;
}
}
lean_object* runtime_initialize_Std_Internal_Parsec(uint8_t builtin);
lean_object* runtime_initialize_Std_Time_Zoned_ZoneRules(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Time_Zoned_Database_PosixTz(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Zoned_ZoneRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0___boxed__const__1 = _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_posixParseName___closed__0___boxed__const__1);
l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0___boxed__const__1 = _init_l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Std_Time_Zoned_Database_PosixTz_0__Std_Time_TimeZone_parsePosixTzP___closed__0___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Time_Zoned_Database_PosixTz(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Internal_Parsec(uint8_t builtin);
lean_object* initialize_Std_Time_Zoned_ZoneRules(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Time_Zoned_Database_PosixTz(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time_Zoned_ZoneRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Time_Zoned_Database_PosixTz(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Time_Zoned_Database_PosixTz(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Time_Zoned_Database_PosixTz(builtin);
}
#ifdef __cplusplus
}
#endif
