// Lean compiler output
// Module: Std.Tactic.BVDecide.LRAT.Parser
// Imports: public import Init.System.IO public import Std.Tactic.BVDecide.LRAT.Actions public import Std.Internal.Parsec
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
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
uint8_t lean_uint64_to_uint8(uint64_t);
uint8_t lean_uint8_land(uint8_t, uint8_t);
uint8_t lean_uint8_lor(uint8_t, uint8_t);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
uint32_t lean_uint8_to_uint32(uint8_t);
uint8_t lean_uint32_to_uint8(uint32_t);
uint8_t lean_uint8_sub(uint8_t, uint8_t);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint64_t lean_uint8_to_uint64(uint8_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
uint64_t lean_uint64_add(uint64_t, uint64_t);
uint64_t lean_uint64_land(uint64_t, uint64_t);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_IO_FS_writeBinFile(lean_object*, lean_object*);
lean_object* lean_mk_empty_byte_array(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
extern lean_object* l_Int_instInhabited;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_skipBytes(lean_object*, lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___boxed(lean_object*);
static const lean_string_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\r\n"};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__0_value;
static lean_once_cell_t l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1;
static const lean_string_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '10'"};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__2 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__2_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__2_value)}};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__3 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline(lean_object*);
static const lean_string_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "digit expected"};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__0_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__0_value)}};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1_value;
static const lean_string_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "id was 0"};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__2 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__2_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__2_value)}};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos(lean_object*);
static const lean_string_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '45'"};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg___closed__0_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg___closed__0_value)}};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg___closed__1 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseId(lean_object*);
static const lean_string_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseZero___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '48'"};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseZero___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseZero___closed__0_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseZero___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseZero___closed__0_value)}};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseZero___closed__1 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseZero___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseZero(lean_object*);
static const lean_string_object l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '32'"};
static const lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__0 = (const lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__0_value;
static const lean_ctor_object l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__0_value)}};
static const lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__1 = (const lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_spec__0(lean_object*, lean_object*);
static const lean_array_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList(lean_object*);
static const lean_string_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseDelete___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "expected: '100'"};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseDelete___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseDelete___closed__0_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseDelete___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseDelete___closed__0_value)}};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseDelete___closed__1 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseDelete___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseDelete(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseLit(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause_litWs(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause_spec__1(lean_object*, lean_object*);
static const lean_array_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat_spec__0(lean_object*, lean_object*);
static const lean_array_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__0_value;
static const lean_string_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "There cannot be any ratHints for adding the empty clause"};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__1 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__1_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__1_value)}};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__2 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseAction(lean_object*);
static const lean_string_object l_Std_Internal_Parsec_manyCore___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "condition not satisfied"};
static const lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go_spec__0___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_manyCore___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go_spec__0___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_manyCore___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_manyCore___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go_spec__0___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go_spec__0___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_manyCore___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go_spec__0(lean_object*, lean_object*);
static const lean_array_object l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go___closed__0 = (const lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go(lean_object*, lean_object*);
static const lean_array_object l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions(lean_object*);
static const lean_string_object l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expected: '0'"};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero___closed__0_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero___closed__0_value)}};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero___closed__1 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero(lean_object*);
static const lean_string_object l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Invalid zero byte in literal"};
static const lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__0 = (const lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__0_value;
static const lean_ctor_object l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__0_value)}};
static const lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__1 = (const lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__1_value;
static const lean_string_object l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Excessive literal"};
static const lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__2 = (const lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__2_value;
static const lean_ctor_object l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__2_value)}};
static const lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__3 = (const lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go(uint64_t, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(lean_object*);
static const lean_string_object l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseNeg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "parsed non negative lit where negative was expected"};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseNeg___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseNeg___closed__0_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseNeg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseNeg___closed__0_value)}};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseNeg___closed__1 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseNeg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseNeg(lean_object*);
static const lean_string_object l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "parsed non positive lit where positive was expected"};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos___closed__0_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos___closed__0_value)}};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos___closed__1 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseId(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___redArg___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseIdList(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseClause(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero_go___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRatHints(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseDelete(lean_object*);
static const lean_string_object l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Expected a or d got: "};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "expected end of input"};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions___closed__0_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions___closed__0_value)}};
static const lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions___closed__1 = (const lean_object*)&l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_parseActions(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_loadLRATProof(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_loadLRATProof___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_parseLRATProof(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList___closed__0 = (const lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList___boxed(lean_object*);
static const lean_string_object l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHint___closed__0 = (const lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHint___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHint(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause___boxed(lean_object*);
static const lean_string_object l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " 0 "};
static const lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__0 = (const lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__0_value;
static const lean_string_object l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "0"};
static const lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__1 = (const lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__1_value;
static const lean_string_object l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "0 "};
static const lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__2 = (const lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__2_value;
static const lean_string_object l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "1 d "};
static const lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__3 = (const lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Tactic_BVDecide_LRAT_lratProofToString_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Tactic_BVDecide_LRAT_lratProofToString_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Tactic_BVDecide_LRAT_lratProofToString_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Tactic_BVDecide_LRAT_lratProofToString_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Tactic_BVDecide_LRAT_lratProofToString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_lratProofToString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_lratProofToString___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_startDelete(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_variableLengthEncode(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_variableLengthEncode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt_spec__0(lean_object*);
static lean_once_cell_t l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__0;
static const lean_string_object l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Std.Tactic.BVDecide.LRAT.Parser"};
static const lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__1 = (const lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__1_value;
static const lean_string_object l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "_private.Std.Tactic.BVDecide.LRAT.Parser.0.Std.Tactic.BVDecide.LRAT.lratProofToBinary.addInt"};
static const lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__2 = (const lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__2_value;
static const lean_string_object l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 91, .m_data = "assertion violation: mapped ≤ (2^64 - 1) -- our parser \"only\" supports 64 bit literals\n    "};
static const lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__3 = (const lean_object*)&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__3_value;
static lean_once_cell_t l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__4;
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_zeroByte(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_startAdd(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_lratProofToBinary(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_lratProofToBinary___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_dumpLRATProof(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_dumpLRATProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot(lean_object* v_clause_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v_pivotInt_6_; lean_object* v___x_7_; uint8_t v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_4_ = l_Int_instInhabited;
v___x_5_ = lean_unsigned_to_nat(0u);
v_pivotInt_6_ = lean_array_get_borrowed(v___x_4_, v_clause_3_, v___x_5_);
v___x_7_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0);
v___x_8_ = lean_int_dec_lt(v___x_7_, v_pivotInt_6_);
v___x_9_ = lean_nat_abs(v_pivotInt_6_);
v___x_10_ = lean_box(v___x_8_);
v___x_11_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_11_, 0, v___x_9_);
lean_ctor_set(v___x_11_, 1, v___x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___boxed(lean_object* v_clause_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot(v_clause_12_);
lean_dec_ref(v_clause_12_);
return v_res_13_;
}
}
static lean_object* _init_l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1(void){
_start:
{
lean_object* v___x_15_; lean_object* v_utf8_16_; 
v___x_15_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__0));
v_utf8_16_ = lean_string_to_utf8(v___x_15_);
return v_utf8_16_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline(lean_object* v_a_20_){
_start:
{
lean_object* v_array_21_; lean_object* v_idx_22_; lean_object* v___y_24_; lean_object* v_pos_25_; lean_object* v_idx_26_; lean_object* v___x_40_; uint8_t v___x_41_; 
v_array_21_ = lean_ctor_get(v_a_20_, 0);
v_idx_22_ = lean_ctor_get(v_a_20_, 1);
lean_inc(v_idx_22_);
v___x_40_ = lean_byte_array_size(v_array_21_);
v___x_41_ = lean_nat_dec_lt(v_idx_22_, v___x_40_);
if (v___x_41_ == 0)
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_box(0);
lean_inc_ref(v_a_20_);
v___x_43_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_43_, 0, v_a_20_);
lean_ctor_set(v___x_43_, 1, v___x_42_);
lean_inc(v_idx_22_);
v___y_24_ = v___x_43_;
v_pos_25_ = v_a_20_;
v_idx_26_ = v_idx_22_;
goto v___jp_23_;
}
else
{
uint8_t v___x_44_; uint8_t v_got_45_; uint8_t v___x_46_; 
v___x_44_ = 10;
v_got_45_ = lean_byte_array_fget(v_array_21_, v_idx_22_);
v___x_46_ = lean_uint8_dec_eq(v_got_45_, v___x_44_);
if (v___x_46_ == 0)
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__3));
lean_inc_ref(v_a_20_);
v___x_48_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_48_, 0, v_a_20_);
lean_ctor_set(v___x_48_, 1, v___x_47_);
lean_inc(v_idx_22_);
v___y_24_ = v___x_48_;
v_pos_25_ = v_a_20_;
v_idx_26_ = v_idx_22_;
goto v___jp_23_;
}
else
{
lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_59_; 
lean_inc_ref(v_array_21_);
v_isSharedCheck_59_ = !lean_is_exclusive(v_a_20_);
if (v_isSharedCheck_59_ == 0)
{
lean_object* v_unused_60_; lean_object* v_unused_61_; 
v_unused_60_ = lean_ctor_get(v_a_20_, 1);
lean_dec(v_unused_60_);
v_unused_61_ = lean_ctor_get(v_a_20_, 0);
lean_dec(v_unused_61_);
v___x_50_ = v_a_20_;
v_isShared_51_ = v_isSharedCheck_59_;
goto v_resetjp_49_;
}
else
{
lean_dec(v_a_20_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_59_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_55_; 
v___x_52_ = lean_unsigned_to_nat(1u);
v___x_53_ = lean_nat_add(v_idx_22_, v___x_52_);
lean_dec(v_idx_22_);
if (v_isShared_51_ == 0)
{
lean_ctor_set(v___x_50_, 1, v___x_53_);
v___x_55_ = v___x_50_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v_array_21_);
lean_ctor_set(v_reuseFailAlloc_58_, 1, v___x_53_);
v___x_55_ = v_reuseFailAlloc_58_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_box(0);
v___x_57_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_55_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
return v___x_57_;
}
}
}
}
v___jp_23_:
{
uint8_t v___x_27_; 
v___x_27_ = lean_nat_dec_eq(v_idx_22_, v_idx_26_);
lean_dec(v_idx_26_);
lean_dec(v_idx_22_);
if (v___x_27_ == 0)
{
lean_dec_ref(v_pos_25_);
return v___y_24_;
}
else
{
lean_object* v_utf8_28_; lean_object* v___x_29_; 
lean_dec_ref(v___y_24_);
v_utf8_28_ = lean_obj_once(&l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1, &l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1_once, _init_l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1);
v___x_29_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_28_, v_pos_25_);
if (lean_obj_tag(v___x_29_) == 0)
{
lean_object* v_pos_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_38_; 
v_pos_30_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_38_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_38_ == 0)
{
lean_object* v_unused_39_; 
v_unused_39_ = lean_ctor_get(v___x_29_, 1);
lean_dec(v_unused_39_);
v___x_32_ = v___x_29_;
v_isShared_33_ = v_isSharedCheck_38_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_pos_30_);
lean_dec(v___x_29_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_38_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
lean_object* v___x_34_; lean_object* v___x_36_; 
v___x_34_ = lean_box(0);
if (v_isShared_33_ == 0)
{
lean_ctor_set(v___x_32_, 1, v___x_34_);
v___x_36_ = v___x_32_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v_pos_30_);
lean_ctor_set(v_reuseFailAlloc_37_, 1, v___x_34_);
v___x_36_ = v_reuseFailAlloc_37_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
return v___x_36_;
}
}
}
else
{
return v___x_29_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos(lean_object* v_a_68_){
_start:
{
lean_object* v_array_72_; lean_object* v_idx_73_; lean_object* v___x_74_; uint8_t v___x_75_; 
v_array_72_ = lean_ctor_get(v_a_68_, 0);
v_idx_73_ = lean_ctor_get(v_a_68_, 1);
v___x_74_ = lean_byte_array_size(v_array_72_);
v___x_75_ = lean_nat_dec_lt(v_idx_73_, v___x_74_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = lean_box(0);
v___x_77_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_77_, 0, v_a_68_);
lean_ctor_set(v___x_77_, 1, v___x_76_);
return v___x_77_;
}
else
{
uint8_t v_c_78_; uint8_t v___x_79_; uint8_t v___x_80_; 
v_c_78_ = lean_byte_array_fget(v_array_72_, v_idx_73_);
v___x_79_ = 48;
v___x_80_ = lean_uint8_dec_le(v___x_79_, v_c_78_);
if (v___x_80_ == 0)
{
goto v___jp_69_;
}
else
{
uint8_t v___x_81_; uint8_t v___x_82_; 
v___x_81_ = 57;
v___x_82_ = lean_uint8_dec_le(v_c_78_, v___x_81_);
if (v___x_82_ == 0)
{
goto v___jp_69_;
}
else
{
lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_111_; 
lean_inc(v_idx_73_);
lean_inc_ref(v_array_72_);
v_isSharedCheck_111_ = !lean_is_exclusive(v_a_68_);
if (v_isSharedCheck_111_ == 0)
{
lean_object* v_unused_112_; lean_object* v_unused_113_; 
v_unused_112_ = lean_ctor_get(v_a_68_, 1);
lean_dec(v_unused_112_);
v_unused_113_ = lean_ctor_get(v_a_68_, 0);
lean_dec(v_unused_113_);
v___x_84_ = v_a_68_;
v_isShared_85_ = v_isSharedCheck_111_;
goto v_resetjp_83_;
}
else
{
lean_dec(v_a_68_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_111_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v_it_x27_89_; 
v___x_86_ = lean_unsigned_to_nat(1u);
v___x_87_ = lean_nat_add(v_idx_73_, v___x_86_);
lean_dec(v_idx_73_);
if (v_isShared_85_ == 0)
{
lean_ctor_set(v___x_84_, 1, v___x_87_);
v_it_x27_89_ = v___x_84_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_array_72_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v___x_87_);
v_it_x27_89_ = v_reuseFailAlloc_110_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
uint32_t v___x_90_; uint8_t v___x_91_; uint8_t v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v_fst_95_; lean_object* v_snd_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_109_; 
v___x_90_ = lean_uint8_to_uint32(v_c_78_);
v___x_91_ = lean_uint32_to_uint8(v___x_90_);
v___x_92_ = lean_uint8_sub(v___x_91_, v___x_79_);
v___x_93_ = lean_uint8_to_nat(v___x_92_);
v___x_94_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_89_, v___x_93_);
v_fst_95_ = lean_ctor_get(v___x_94_, 0);
v_snd_96_ = lean_ctor_get(v___x_94_, 1);
v_isSharedCheck_109_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_109_ == 0)
{
v___x_98_ = v___x_94_;
v_isShared_99_ = v_isSharedCheck_109_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_snd_96_);
lean_inc(v_fst_95_);
lean_dec(v___x_94_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_109_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_100_ = lean_unsigned_to_nat(0u);
v___x_101_ = lean_nat_dec_eq(v_fst_95_, v___x_100_);
if (v___x_101_ == 0)
{
lean_object* v___x_103_; 
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 1, v_fst_95_);
lean_ctor_set(v___x_98_, 0, v_snd_96_);
v___x_103_ = v___x_98_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_snd_96_);
lean_ctor_set(v_reuseFailAlloc_104_, 1, v_fst_95_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
return v___x_103_;
}
}
else
{
lean_object* v___x_105_; lean_object* v___x_107_; 
lean_dec(v_fst_95_);
v___x_105_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
if (v_isShared_99_ == 0)
{
lean_ctor_set_tag(v___x_98_, 1);
lean_ctor_set(v___x_98_, 1, v___x_105_);
lean_ctor_set(v___x_98_, 0, v_snd_96_);
v___x_107_ = v___x_98_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_snd_96_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v___x_105_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
}
}
}
}
}
}
v___jp_69_:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
v___x_71_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_71_, 0, v_a_68_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg(lean_object* v_a_117_){
_start:
{
lean_object* v_array_118_; lean_object* v_idx_119_; lean_object* v___x_120_; uint8_t v___x_121_; 
v_array_118_ = lean_ctor_get(v_a_117_, 0);
v_idx_119_ = lean_ctor_get(v_a_117_, 1);
v___x_120_ = lean_byte_array_size(v_array_118_);
v___x_121_ = lean_nat_dec_lt(v_idx_119_, v___x_120_);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = lean_box(0);
v___x_123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_123_, 0, v_a_117_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
return v___x_123_;
}
else
{
uint8_t v___x_124_; uint8_t v_got_125_; uint8_t v___x_126_; 
v___x_124_ = 45;
v_got_125_ = lean_byte_array_fget(v_array_118_, v_idx_119_);
v___x_126_ = lean_uint8_dec_eq(v_got_125_, v___x_124_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg___closed__1));
v___x_128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_128_, 0, v_a_117_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
return v___x_128_;
}
else
{
lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_172_; 
lean_inc(v_idx_119_);
lean_inc_ref(v_array_118_);
v_isSharedCheck_172_ = !lean_is_exclusive(v_a_117_);
if (v_isSharedCheck_172_ == 0)
{
lean_object* v_unused_173_; lean_object* v_unused_174_; 
v_unused_173_ = lean_ctor_get(v_a_117_, 1);
lean_dec(v_unused_173_);
v_unused_174_ = lean_ctor_get(v_a_117_, 0);
lean_dec(v_unused_174_);
v___x_130_ = v_a_117_;
v_isShared_131_ = v_isSharedCheck_172_;
goto v_resetjp_129_;
}
else
{
lean_dec(v_a_117_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_172_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_135_; 
v___x_132_ = lean_unsigned_to_nat(1u);
v___x_133_ = lean_nat_add(v_idx_119_, v___x_132_);
lean_dec(v_idx_119_);
lean_inc(v___x_133_);
lean_inc_ref(v_array_118_);
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 1, v___x_133_);
v___x_135_ = v___x_130_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_array_118_);
lean_ctor_set(v_reuseFailAlloc_171_, 1, v___x_133_);
v___x_135_ = v_reuseFailAlloc_171_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
uint8_t v___x_139_; 
v___x_139_ = lean_nat_dec_lt(v___x_133_, v___x_120_);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; lean_object* v___x_141_; 
lean_dec(v___x_133_);
lean_dec_ref(v_array_118_);
v___x_140_ = lean_box(0);
v___x_141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_135_);
lean_ctor_set(v___x_141_, 1, v___x_140_);
return v___x_141_;
}
else
{
uint8_t v_c_142_; uint8_t v___x_143_; uint8_t v___x_144_; 
v_c_142_ = lean_byte_array_fget(v_array_118_, v___x_133_);
v___x_143_ = 48;
v___x_144_ = lean_uint8_dec_le(v___x_143_, v_c_142_);
if (v___x_144_ == 0)
{
lean_dec(v___x_133_);
lean_dec_ref(v_array_118_);
goto v___jp_136_;
}
else
{
uint8_t v___x_145_; uint8_t v___x_146_; 
v___x_145_ = 57;
v___x_146_ = lean_uint8_dec_le(v_c_142_, v___x_145_);
if (v___x_146_ == 0)
{
lean_dec(v___x_133_);
lean_dec_ref(v_array_118_);
goto v___jp_136_;
}
else
{
lean_object* v___x_147_; lean_object* v_it_x27_148_; uint32_t v___x_149_; uint8_t v___x_150_; uint8_t v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v_fst_154_; lean_object* v_snd_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_170_; 
lean_dec_ref(v___x_135_);
v___x_147_ = lean_nat_add(v___x_133_, v___x_132_);
lean_dec(v___x_133_);
v_it_x27_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_148_, 0, v_array_118_);
lean_ctor_set(v_it_x27_148_, 1, v___x_147_);
v___x_149_ = lean_uint8_to_uint32(v_c_142_);
v___x_150_ = lean_uint32_to_uint8(v___x_149_);
v___x_151_ = lean_uint8_sub(v___x_150_, v___x_143_);
v___x_152_ = lean_uint8_to_nat(v___x_151_);
v___x_153_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_148_, v___x_152_);
v_fst_154_ = lean_ctor_get(v___x_153_, 0);
v_snd_155_ = lean_ctor_get(v___x_153_, 1);
v_isSharedCheck_170_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_170_ == 0)
{
v___x_157_ = v___x_153_;
v_isShared_158_ = v_isSharedCheck_170_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_snd_155_);
lean_inc(v_fst_154_);
lean_dec(v___x_153_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_170_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_159_; uint8_t v___x_160_; 
v___x_159_ = lean_unsigned_to_nat(0u);
v___x_160_ = lean_nat_dec_eq(v_fst_154_, v___x_159_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_164_; 
v___x_161_ = lean_nat_to_int(v_fst_154_);
v___x_162_ = lean_int_neg(v___x_161_);
lean_dec(v___x_161_);
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 1, v___x_162_);
lean_ctor_set(v___x_157_, 0, v_snd_155_);
v___x_164_ = v___x_157_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_snd_155_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v___x_162_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
else
{
lean_object* v___x_166_; lean_object* v___x_168_; 
lean_dec(v_fst_154_);
v___x_166_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
if (v_isShared_158_ == 0)
{
lean_ctor_set_tag(v___x_157_, 1);
lean_ctor_set(v___x_157_, 1, v___x_166_);
lean_ctor_set(v___x_157_, 0, v_snd_155_);
v___x_168_ = v___x_157_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v_snd_155_);
lean_ctor_set(v_reuseFailAlloc_169_, 1, v___x_166_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
}
}
}
}
}
}
v___jp_136_:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
v___x_138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_135_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
return v___x_138_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseId(lean_object* v_a_175_){
_start:
{
lean_object* v_array_179_; lean_object* v_idx_180_; lean_object* v___x_181_; uint8_t v___x_182_; 
v_array_179_ = lean_ctor_get(v_a_175_, 0);
v_idx_180_ = lean_ctor_get(v_a_175_, 1);
v___x_181_ = lean_byte_array_size(v_array_179_);
v___x_182_ = lean_nat_dec_lt(v_idx_180_, v___x_181_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_box(0);
v___x_184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_184_, 0, v_a_175_);
lean_ctor_set(v___x_184_, 1, v___x_183_);
return v___x_184_;
}
else
{
uint8_t v_c_185_; uint8_t v___x_186_; uint8_t v___x_187_; 
v_c_185_ = lean_byte_array_fget(v_array_179_, v_idx_180_);
v___x_186_ = 48;
v___x_187_ = lean_uint8_dec_le(v___x_186_, v_c_185_);
if (v___x_187_ == 0)
{
goto v___jp_176_;
}
else
{
uint8_t v___x_188_; uint8_t v___x_189_; 
v___x_188_ = 57;
v___x_189_ = lean_uint8_dec_le(v_c_185_, v___x_188_);
if (v___x_189_ == 0)
{
goto v___jp_176_;
}
else
{
lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_218_; 
lean_inc(v_idx_180_);
lean_inc_ref(v_array_179_);
v_isSharedCheck_218_ = !lean_is_exclusive(v_a_175_);
if (v_isSharedCheck_218_ == 0)
{
lean_object* v_unused_219_; lean_object* v_unused_220_; 
v_unused_219_ = lean_ctor_get(v_a_175_, 1);
lean_dec(v_unused_219_);
v_unused_220_ = lean_ctor_get(v_a_175_, 0);
lean_dec(v_unused_220_);
v___x_191_ = v_a_175_;
v_isShared_192_ = v_isSharedCheck_218_;
goto v_resetjp_190_;
}
else
{
lean_dec(v_a_175_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_218_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v_it_x27_196_; 
v___x_193_ = lean_unsigned_to_nat(1u);
v___x_194_ = lean_nat_add(v_idx_180_, v___x_193_);
lean_dec(v_idx_180_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 1, v___x_194_);
v_it_x27_196_ = v___x_191_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v_array_179_);
lean_ctor_set(v_reuseFailAlloc_217_, 1, v___x_194_);
v_it_x27_196_ = v_reuseFailAlloc_217_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
uint32_t v___x_197_; uint8_t v___x_198_; uint8_t v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v_fst_202_; lean_object* v_snd_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_216_; 
v___x_197_ = lean_uint8_to_uint32(v_c_185_);
v___x_198_ = lean_uint32_to_uint8(v___x_197_);
v___x_199_ = lean_uint8_sub(v___x_198_, v___x_186_);
v___x_200_ = lean_uint8_to_nat(v___x_199_);
v___x_201_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_196_, v___x_200_);
v_fst_202_ = lean_ctor_get(v___x_201_, 0);
v_snd_203_ = lean_ctor_get(v___x_201_, 1);
v_isSharedCheck_216_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_216_ == 0)
{
v___x_205_ = v___x_201_;
v_isShared_206_ = v_isSharedCheck_216_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_snd_203_);
lean_inc(v_fst_202_);
lean_dec(v___x_201_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_216_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_207_ = lean_unsigned_to_nat(0u);
v___x_208_ = lean_nat_dec_eq(v_fst_202_, v___x_207_);
if (v___x_208_ == 0)
{
lean_object* v___x_210_; 
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 1, v_fst_202_);
lean_ctor_set(v___x_205_, 0, v_snd_203_);
v___x_210_ = v___x_205_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_snd_203_);
lean_ctor_set(v_reuseFailAlloc_211_, 1, v_fst_202_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
else
{
lean_object* v___x_212_; lean_object* v___x_214_; 
lean_dec(v_fst_202_);
v___x_212_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
if (v_isShared_206_ == 0)
{
lean_ctor_set_tag(v___x_205_, 1);
lean_ctor_set(v___x_205_, 1, v___x_212_);
lean_ctor_set(v___x_205_, 0, v_snd_203_);
v___x_214_ = v___x_205_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_snd_203_);
lean_ctor_set(v_reuseFailAlloc_215_, 1, v___x_212_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
return v___x_214_;
}
}
}
}
}
}
}
}
v___jp_176_:
{
lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_177_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
v___x_178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_178_, 0, v_a_175_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
return v___x_178_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseZero(lean_object* v_a_224_){
_start:
{
lean_object* v_array_225_; lean_object* v_idx_226_; lean_object* v___x_227_; uint8_t v___x_228_; 
v_array_225_ = lean_ctor_get(v_a_224_, 0);
v_idx_226_ = lean_ctor_get(v_a_224_, 1);
v___x_227_ = lean_byte_array_size(v_array_225_);
v___x_228_ = lean_nat_dec_lt(v_idx_226_, v___x_227_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = lean_box(0);
v___x_230_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_230_, 0, v_a_224_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
return v___x_230_;
}
else
{
uint8_t v___x_231_; uint8_t v_got_232_; uint8_t v___x_233_; 
v___x_231_ = 48;
v_got_232_ = lean_byte_array_fget(v_array_225_, v_idx_226_);
v___x_233_ = lean_uint8_dec_eq(v_got_232_, v___x_231_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_234_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseZero___closed__1));
v___x_235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_235_, 0, v_a_224_);
lean_ctor_set(v___x_235_, 1, v___x_234_);
return v___x_235_;
}
else
{
lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_246_; 
lean_inc(v_idx_226_);
lean_inc_ref(v_array_225_);
v_isSharedCheck_246_ = !lean_is_exclusive(v_a_224_);
if (v_isSharedCheck_246_ == 0)
{
lean_object* v_unused_247_; lean_object* v_unused_248_; 
v_unused_247_ = lean_ctor_get(v_a_224_, 1);
lean_dec(v_unused_247_);
v_unused_248_ = lean_ctor_get(v_a_224_, 0);
lean_dec(v_unused_248_);
v___x_237_ = v_a_224_;
v_isShared_238_ = v_isSharedCheck_246_;
goto v_resetjp_236_;
}
else
{
lean_dec(v_a_224_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_246_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_242_; 
v___x_239_ = lean_unsigned_to_nat(1u);
v___x_240_ = lean_nat_add(v_idx_226_, v___x_239_);
lean_dec(v_idx_226_);
if (v_isShared_238_ == 0)
{
lean_ctor_set(v___x_237_, 1, v___x_240_);
v___x_242_ = v___x_237_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_array_225_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v___x_240_);
v___x_242_ = v_reuseFailAlloc_245_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = lean_box(0);
v___x_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_242_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
return v___x_244_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs(lean_object* v_a_252_){
_start:
{
lean_object* v_array_256_; lean_object* v_idx_257_; lean_object* v___x_258_; uint8_t v___x_259_; 
v_array_256_ = lean_ctor_get(v_a_252_, 0);
v_idx_257_ = lean_ctor_get(v_a_252_, 1);
v___x_258_ = lean_byte_array_size(v_array_256_);
v___x_259_ = lean_nat_dec_lt(v_idx_257_, v___x_258_);
if (v___x_259_ == 0)
{
lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_260_ = lean_box(0);
v___x_261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_261_, 0, v_a_252_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
return v___x_261_;
}
else
{
uint8_t v_c_262_; uint8_t v___x_263_; uint8_t v___x_264_; 
v_c_262_ = lean_byte_array_fget(v_array_256_, v_idx_257_);
v___x_263_ = 48;
v___x_264_ = lean_uint8_dec_le(v___x_263_, v_c_262_);
if (v___x_264_ == 0)
{
goto v___jp_253_;
}
else
{
uint8_t v___x_265_; uint8_t v___x_266_; 
v___x_265_ = 57;
v___x_266_ = lean_uint8_dec_le(v_c_262_, v___x_265_);
if (v___x_266_ == 0)
{
goto v___jp_253_;
}
else
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v_it_x27_269_; uint32_t v___x_270_; uint8_t v___x_271_; uint8_t v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v_fst_275_; lean_object* v_snd_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_314_; 
v___x_267_ = lean_unsigned_to_nat(1u);
v___x_268_ = lean_nat_add(v_idx_257_, v___x_267_);
lean_inc_ref(v_array_256_);
v_it_x27_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_269_, 0, v_array_256_);
lean_ctor_set(v_it_x27_269_, 1, v___x_268_);
v___x_270_ = lean_uint8_to_uint32(v_c_262_);
v___x_271_ = lean_uint32_to_uint8(v___x_270_);
v___x_272_ = lean_uint8_sub(v___x_271_, v___x_263_);
v___x_273_ = lean_uint8_to_nat(v___x_272_);
v___x_274_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_269_, v___x_273_);
v_fst_275_ = lean_ctor_get(v___x_274_, 0);
v_snd_276_ = lean_ctor_get(v___x_274_, 1);
v_isSharedCheck_314_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_314_ == 0)
{
v___x_278_ = v___x_274_;
v_isShared_279_ = v_isSharedCheck_314_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_snd_276_);
lean_inc(v_fst_275_);
lean_dec(v___x_274_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_314_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_280_ = lean_unsigned_to_nat(0u);
v___x_281_ = lean_nat_dec_eq(v_fst_275_, v___x_280_);
if (v___x_281_ == 0)
{
lean_object* v_array_282_; lean_object* v_idx_283_; lean_object* v___x_284_; uint8_t v___x_285_; 
lean_dec_ref(v_a_252_);
v_array_282_ = lean_ctor_get(v_snd_276_, 0);
v_idx_283_ = lean_ctor_get(v_snd_276_, 1);
v___x_284_ = lean_byte_array_size(v_array_282_);
v___x_285_ = lean_nat_dec_lt(v_idx_283_, v___x_284_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; lean_object* v___x_288_; 
lean_dec(v_fst_275_);
v___x_286_ = lean_box(0);
if (v_isShared_279_ == 0)
{
lean_ctor_set_tag(v___x_278_, 1);
lean_ctor_set(v___x_278_, 1, v___x_286_);
lean_ctor_set(v___x_278_, 0, v_snd_276_);
v___x_288_ = v___x_278_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_snd_276_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v___x_286_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
return v___x_288_;
}
}
else
{
uint8_t v___x_290_; uint8_t v_got_291_; uint8_t v___x_292_; 
v___x_290_ = 32;
v_got_291_ = lean_byte_array_fget(v_array_282_, v_idx_283_);
v___x_292_ = lean_uint8_dec_eq(v_got_291_, v___x_290_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; lean_object* v___x_295_; 
lean_dec(v_fst_275_);
v___x_293_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__1));
if (v_isShared_279_ == 0)
{
lean_ctor_set_tag(v___x_278_, 1);
lean_ctor_set(v___x_278_, 1, v___x_293_);
lean_ctor_set(v___x_278_, 0, v_snd_276_);
v___x_295_ = v___x_278_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_snd_276_);
lean_ctor_set(v_reuseFailAlloc_296_, 1, v___x_293_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
else
{
lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_307_; 
lean_inc(v_idx_283_);
lean_inc_ref(v_array_282_);
v_isSharedCheck_307_ = !lean_is_exclusive(v_snd_276_);
if (v_isSharedCheck_307_ == 0)
{
lean_object* v_unused_308_; lean_object* v_unused_309_; 
v_unused_308_ = lean_ctor_get(v_snd_276_, 1);
lean_dec(v_unused_308_);
v_unused_309_ = lean_ctor_get(v_snd_276_, 0);
lean_dec(v_unused_309_);
v___x_298_ = v_snd_276_;
v_isShared_299_ = v_isSharedCheck_307_;
goto v_resetjp_297_;
}
else
{
lean_dec(v_snd_276_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_307_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_300_; lean_object* v___x_302_; 
v___x_300_ = lean_nat_add(v_idx_283_, v___x_267_);
lean_dec(v_idx_283_);
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 1, v___x_300_);
v___x_302_ = v___x_298_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_array_282_);
lean_ctor_set(v_reuseFailAlloc_306_, 1, v___x_300_);
v___x_302_ = v_reuseFailAlloc_306_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
lean_object* v___x_304_; 
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 1, v_fst_275_);
lean_ctor_set(v___x_278_, 0, v___x_302_);
v___x_304_ = v___x_278_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_302_);
lean_ctor_set(v_reuseFailAlloc_305_, 1, v_fst_275_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
}
}
}
}
else
{
lean_object* v___x_310_; lean_object* v___x_312_; 
lean_dec(v_snd_276_);
lean_dec(v_fst_275_);
v___x_310_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
if (v_isShared_279_ == 0)
{
lean_ctor_set_tag(v___x_278_, 1);
lean_ctor_set(v___x_278_, 1, v___x_310_);
lean_ctor_set(v___x_278_, 0, v_a_252_);
v___x_312_ = v___x_278_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_a_252_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v___x_310_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
}
}
}
v___jp_253_:
{
lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_254_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
v___x_255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_255_, 0, v_a_252_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
return v___x_255_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_spec__0(lean_object* v_acc_315_, lean_object* v_a_316_){
_start:
{
lean_object* v_array_317_; lean_object* v_idx_318_; lean_object* v_pos_320_; lean_object* v_idx_321_; lean_object* v_err_322_; lean_object* v___x_328_; uint8_t v___x_329_; 
v_array_317_ = lean_ctor_get(v_a_316_, 0);
v_idx_318_ = lean_ctor_get(v_a_316_, 1);
lean_inc(v_idx_318_);
v___x_328_ = lean_byte_array_size(v_array_317_);
v___x_329_ = lean_nat_dec_lt(v_idx_318_, v___x_328_);
if (v___x_329_ == 0)
{
lean_object* v___x_330_; 
v___x_330_ = lean_box(0);
lean_inc(v_idx_318_);
v_pos_320_ = v_a_316_;
v_idx_321_ = v_idx_318_;
v_err_322_ = v___x_330_;
goto v___jp_319_;
}
else
{
uint8_t v_c_331_; uint8_t v___x_332_; uint8_t v___x_333_; 
v_c_331_ = lean_byte_array_fget(v_array_317_, v_idx_318_);
v___x_332_ = 48;
v___x_333_ = lean_uint8_dec_le(v___x_332_, v_c_331_);
if (v___x_333_ == 0)
{
goto v___jp_326_;
}
else
{
uint8_t v___x_334_; uint8_t v___x_335_; 
v___x_334_ = 57;
v___x_335_ = lean_uint8_dec_le(v_c_331_, v___x_334_);
if (v___x_335_ == 0)
{
goto v___jp_326_;
}
else
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v_it_x27_338_; uint32_t v___x_339_; uint8_t v___x_340_; uint8_t v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v_fst_344_; lean_object* v_snd_345_; lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_336_ = lean_unsigned_to_nat(1u);
v___x_337_ = lean_nat_add(v_idx_318_, v___x_336_);
lean_inc_ref(v_array_317_);
v_it_x27_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_338_, 0, v_array_317_);
lean_ctor_set(v_it_x27_338_, 1, v___x_337_);
v___x_339_ = lean_uint8_to_uint32(v_c_331_);
v___x_340_ = lean_uint32_to_uint8(v___x_339_);
v___x_341_ = lean_uint8_sub(v___x_340_, v___x_332_);
v___x_342_ = lean_uint8_to_nat(v___x_341_);
v___x_343_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_338_, v___x_342_);
v_fst_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc(v_fst_344_);
v_snd_345_ = lean_ctor_get(v___x_343_, 1);
lean_inc(v_snd_345_);
lean_dec_ref(v___x_343_);
v___x_346_ = lean_unsigned_to_nat(0u);
v___x_347_ = lean_nat_dec_eq(v_fst_344_, v___x_346_);
if (v___x_347_ == 0)
{
lean_object* v_array_348_; lean_object* v_idx_349_; lean_object* v___x_350_; uint8_t v___x_351_; 
lean_dec_ref(v_a_316_);
v_array_348_ = lean_ctor_get(v_snd_345_, 0);
v_idx_349_ = lean_ctor_get(v_snd_345_, 1);
lean_inc(v_idx_349_);
v___x_350_ = lean_byte_array_size(v_array_348_);
v___x_351_ = lean_nat_dec_lt(v_idx_349_, v___x_350_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; 
lean_dec(v_fst_344_);
v___x_352_ = lean_box(0);
v_pos_320_ = v_snd_345_;
v_idx_321_ = v_idx_349_;
v_err_322_ = v___x_352_;
goto v___jp_319_;
}
else
{
uint8_t v___x_353_; uint8_t v_got_354_; uint8_t v___x_355_; 
v___x_353_ = 32;
v_got_354_ = lean_byte_array_fget(v_array_348_, v_idx_349_);
v___x_355_ = lean_uint8_dec_eq(v_got_354_, v___x_353_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; 
lean_dec(v_fst_344_);
v___x_356_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__1));
v_pos_320_ = v_snd_345_;
v_idx_321_ = v_idx_349_;
v_err_322_ = v___x_356_;
goto v___jp_319_;
}
else
{
lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_366_; 
lean_inc_ref(v_array_348_);
lean_dec(v_idx_318_);
v_isSharedCheck_366_ = !lean_is_exclusive(v_snd_345_);
if (v_isSharedCheck_366_ == 0)
{
lean_object* v_unused_367_; lean_object* v_unused_368_; 
v_unused_367_ = lean_ctor_get(v_snd_345_, 1);
lean_dec(v_unused_367_);
v_unused_368_ = lean_ctor_get(v_snd_345_, 0);
lean_dec(v_unused_368_);
v___x_358_ = v_snd_345_;
v_isShared_359_ = v_isSharedCheck_366_;
goto v_resetjp_357_;
}
else
{
lean_dec(v_snd_345_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_366_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_360_; lean_object* v___x_362_; 
v___x_360_ = lean_nat_add(v_idx_349_, v___x_336_);
lean_dec(v_idx_349_);
if (v_isShared_359_ == 0)
{
lean_ctor_set(v___x_358_, 1, v___x_360_);
v___x_362_ = v___x_358_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_array_348_);
lean_ctor_set(v_reuseFailAlloc_365_, 1, v___x_360_);
v___x_362_ = v_reuseFailAlloc_365_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
lean_object* v___x_363_; 
v___x_363_ = lean_array_push(v_acc_315_, v_fst_344_);
v_acc_315_ = v___x_363_;
v_a_316_ = v___x_362_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_369_; 
lean_dec(v_snd_345_);
lean_dec(v_fst_344_);
v___x_369_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
lean_inc(v_idx_318_);
v_pos_320_ = v_a_316_;
v_idx_321_ = v_idx_318_;
v_err_322_ = v___x_369_;
goto v___jp_319_;
}
}
}
}
v___jp_319_:
{
uint8_t v___x_323_; 
v___x_323_ = lean_nat_dec_eq(v_idx_318_, v_idx_321_);
lean_dec(v_idx_321_);
lean_dec(v_idx_318_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; 
lean_dec_ref(v_acc_315_);
lean_inc(v_err_322_);
v___x_324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_324_, 0, v_pos_320_);
lean_ctor_set(v___x_324_, 1, v_err_322_);
return v___x_324_;
}
else
{
lean_object* v___x_325_; 
v___x_325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_325_, 0, v_pos_320_);
lean_ctor_set(v___x_325_, 1, v_acc_315_);
return v___x_325_;
}
}
v___jp_326_:
{
lean_object* v___x_327_; 
v___x_327_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
lean_inc(v_idx_318_);
v_pos_320_ = v_a_316_;
v_idx_321_ = v_idx_318_;
v_err_322_ = v___x_327_;
goto v___jp_319_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList(lean_object* v_a_372_){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList___closed__0));
v___x_374_ = l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_spec__0(v___x_373_, v_a_372_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseDelete(lean_object* v_a_378_){
_start:
{
lean_object* v_array_379_; lean_object* v_idx_380_; lean_object* v___x_381_; uint8_t v___x_382_; 
v_array_379_ = lean_ctor_get(v_a_378_, 0);
v_idx_380_ = lean_ctor_get(v_a_378_, 1);
v___x_381_ = lean_byte_array_size(v_array_379_);
v___x_382_ = lean_nat_dec_lt(v_idx_380_, v___x_381_);
if (v___x_382_ == 0)
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = lean_box(0);
v___x_384_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_384_, 0, v_a_378_);
lean_ctor_set(v___x_384_, 1, v___x_383_);
return v___x_384_;
}
else
{
uint8_t v___x_385_; uint8_t v_got_386_; uint8_t v___x_387_; 
v___x_385_ = 100;
v_got_386_ = lean_byte_array_fget(v_array_379_, v_idx_380_);
v___x_387_ = lean_uint8_dec_eq(v_got_386_, v___x_385_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseDelete___closed__1));
v___x_389_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_389_, 0, v_a_378_);
lean_ctor_set(v___x_389_, 1, v___x_388_);
return v___x_389_;
}
else
{
lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_453_; 
lean_inc(v_idx_380_);
lean_inc_ref(v_array_379_);
v_isSharedCheck_453_ = !lean_is_exclusive(v_a_378_);
if (v_isSharedCheck_453_ == 0)
{
lean_object* v_unused_454_; lean_object* v_unused_455_; 
v_unused_454_ = lean_ctor_get(v_a_378_, 1);
lean_dec(v_unused_454_);
v_unused_455_ = lean_ctor_get(v_a_378_, 0);
lean_dec(v_unused_455_);
v___x_391_ = v_a_378_;
v_isShared_392_ = v_isSharedCheck_453_;
goto v_resetjp_390_;
}
else
{
lean_dec(v_a_378_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_453_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_396_; 
v___x_393_ = lean_unsigned_to_nat(1u);
v___x_394_ = lean_nat_add(v_idx_380_, v___x_393_);
lean_dec(v_idx_380_);
lean_inc(v___x_394_);
lean_inc_ref(v_array_379_);
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 1, v___x_394_);
v___x_396_ = v___x_391_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_array_379_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v___x_394_);
v___x_396_ = v_reuseFailAlloc_452_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
uint8_t v___x_397_; 
v___x_397_ = lean_nat_dec_lt(v___x_394_, v___x_381_);
if (v___x_397_ == 0)
{
lean_object* v___x_398_; lean_object* v___x_399_; 
lean_dec(v___x_394_);
lean_dec_ref(v_array_379_);
v___x_398_ = lean_box(0);
v___x_399_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_396_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
return v___x_399_;
}
else
{
uint8_t v___x_400_; uint8_t v_got_401_; uint8_t v___x_402_; 
v___x_400_ = 32;
v_got_401_ = lean_byte_array_fget(v_array_379_, v___x_394_);
v___x_402_ = lean_uint8_dec_eq(v_got_401_, v___x_400_);
if (v___x_402_ == 0)
{
lean_object* v___x_403_; lean_object* v___x_404_; 
lean_dec(v___x_394_);
lean_dec_ref(v_array_379_);
v___x_403_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__1));
v___x_404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_404_, 0, v___x_396_);
lean_ctor_set(v___x_404_, 1, v___x_403_);
return v___x_404_;
}
else
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
lean_dec_ref(v___x_396_);
v___x_405_ = lean_nat_add(v___x_394_, v___x_393_);
lean_dec(v___x_394_);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v_array_379_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
v___x_407_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList(v___x_406_);
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v_pos_408_; lean_object* v_res_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_442_; 
v_pos_408_ = lean_ctor_get(v___x_407_, 0);
v_res_409_ = lean_ctor_get(v___x_407_, 1);
v_isSharedCheck_442_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_442_ == 0)
{
v___x_411_ = v___x_407_;
v_isShared_412_ = v_isSharedCheck_442_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_res_409_);
lean_inc(v_pos_408_);
lean_dec(v___x_407_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_442_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v_array_413_; lean_object* v_idx_414_; lean_object* v___x_415_; uint8_t v___x_416_; 
v_array_413_ = lean_ctor_get(v_pos_408_, 0);
v_idx_414_ = lean_ctor_get(v_pos_408_, 1);
v___x_415_ = lean_byte_array_size(v_array_413_);
v___x_416_ = lean_nat_dec_lt(v_idx_414_, v___x_415_);
if (v___x_416_ == 0)
{
lean_object* v___x_417_; lean_object* v___x_419_; 
lean_dec(v_res_409_);
v___x_417_ = lean_box(0);
if (v_isShared_412_ == 0)
{
lean_ctor_set_tag(v___x_411_, 1);
lean_ctor_set(v___x_411_, 1, v___x_417_);
v___x_419_ = v___x_411_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v_pos_408_);
lean_ctor_set(v_reuseFailAlloc_420_, 1, v___x_417_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
else
{
uint8_t v___x_421_; uint8_t v_got_422_; uint8_t v___x_423_; 
v___x_421_ = 48;
v_got_422_ = lean_byte_array_fget(v_array_413_, v_idx_414_);
v___x_423_ = lean_uint8_dec_eq(v_got_422_, v___x_421_);
if (v___x_423_ == 0)
{
lean_object* v___x_424_; lean_object* v___x_426_; 
lean_dec(v_res_409_);
v___x_424_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseZero___closed__1));
if (v_isShared_412_ == 0)
{
lean_ctor_set_tag(v___x_411_, 1);
lean_ctor_set(v___x_411_, 1, v___x_424_);
v___x_426_ = v___x_411_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_pos_408_);
lean_ctor_set(v_reuseFailAlloc_427_, 1, v___x_424_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
else
{
lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_439_; 
lean_inc(v_idx_414_);
lean_inc_ref(v_array_413_);
v_isSharedCheck_439_ = !lean_is_exclusive(v_pos_408_);
if (v_isSharedCheck_439_ == 0)
{
lean_object* v_unused_440_; lean_object* v_unused_441_; 
v_unused_440_ = lean_ctor_get(v_pos_408_, 1);
lean_dec(v_unused_440_);
v_unused_441_ = lean_ctor_get(v_pos_408_, 0);
lean_dec(v_unused_441_);
v___x_429_ = v_pos_408_;
v_isShared_430_ = v_isSharedCheck_439_;
goto v_resetjp_428_;
}
else
{
lean_dec(v_pos_408_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_439_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_431_; lean_object* v___x_433_; 
v___x_431_ = lean_nat_add(v_idx_414_, v___x_393_);
lean_dec(v_idx_414_);
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 1, v___x_431_);
v___x_433_ = v___x_429_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_array_413_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v___x_431_);
v___x_433_ = v_reuseFailAlloc_438_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
lean_object* v___x_434_; lean_object* v___x_436_; 
v___x_434_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_434_, 0, v_res_409_);
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 1, v___x_434_);
lean_ctor_set(v___x_411_, 0, v___x_433_);
v___x_436_ = v___x_411_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v___x_433_);
lean_ctor_set(v_reuseFailAlloc_437_, 1, v___x_434_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
}
}
}
}
else
{
lean_object* v_pos_443_; lean_object* v_err_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_451_; 
v_pos_443_ = lean_ctor_get(v___x_407_, 0);
v_err_444_ = lean_ctor_get(v___x_407_, 1);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_451_ == 0)
{
v___x_446_ = v___x_407_;
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_err_444_);
lean_inc(v_pos_443_);
lean_dec(v___x_407_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_449_; 
if (v_isShared_447_ == 0)
{
v___x_449_ = v___x_446_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_pos_443_);
lean_ctor_set(v_reuseFailAlloc_450_, 1, v_err_444_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
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
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseLit(lean_object* v_a_456_){
_start:
{
lean_object* v_array_460_; lean_object* v_idx_461_; lean_object* v___x_462_; uint8_t v___x_463_; 
v_array_460_ = lean_ctor_get(v_a_456_, 0);
v_idx_461_ = lean_ctor_get(v_a_456_, 1);
v___x_462_ = lean_byte_array_size(v_array_460_);
v___x_463_ = lean_nat_dec_lt(v_idx_461_, v___x_462_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = lean_box(0);
v___x_465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_465_, 0, v_a_456_);
lean_ctor_set(v___x_465_, 1, v___x_464_);
return v___x_465_;
}
else
{
uint8_t v___x_466_; uint8_t v___x_467_; uint8_t v___x_468_; 
v___x_466_ = lean_byte_array_fget(v_array_460_, v_idx_461_);
v___x_467_ = 45;
v___x_468_ = lean_uint8_dec_eq(v___x_466_, v___x_467_);
if (v___x_468_ == 0)
{
uint8_t v___x_469_; uint8_t v___x_470_; 
v___x_469_ = 48;
v___x_470_ = lean_uint8_dec_le(v___x_469_, v___x_466_);
if (v___x_470_ == 0)
{
goto v___jp_457_;
}
else
{
uint8_t v___x_471_; uint8_t v___x_472_; 
v___x_471_ = 57;
v___x_472_ = lean_uint8_dec_le(v___x_466_, v___x_471_);
if (v___x_472_ == 0)
{
goto v___jp_457_;
}
else
{
lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_502_; 
lean_inc(v_idx_461_);
lean_inc_ref(v_array_460_);
v_isSharedCheck_502_ = !lean_is_exclusive(v_a_456_);
if (v_isSharedCheck_502_ == 0)
{
lean_object* v_unused_503_; lean_object* v_unused_504_; 
v_unused_503_ = lean_ctor_get(v_a_456_, 1);
lean_dec(v_unused_503_);
v_unused_504_ = lean_ctor_get(v_a_456_, 0);
lean_dec(v_unused_504_);
v___x_474_ = v_a_456_;
v_isShared_475_ = v_isSharedCheck_502_;
goto v_resetjp_473_;
}
else
{
lean_dec(v_a_456_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_502_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v_it_x27_479_; 
v___x_476_ = lean_unsigned_to_nat(1u);
v___x_477_ = lean_nat_add(v_idx_461_, v___x_476_);
lean_dec(v_idx_461_);
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 1, v___x_477_);
v_it_x27_479_ = v___x_474_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_array_460_);
lean_ctor_set(v_reuseFailAlloc_501_, 1, v___x_477_);
v_it_x27_479_ = v_reuseFailAlloc_501_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
uint32_t v___x_480_; uint8_t v___x_481_; uint8_t v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v_fst_485_; lean_object* v_snd_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_500_; 
v___x_480_ = lean_uint8_to_uint32(v___x_466_);
v___x_481_ = lean_uint32_to_uint8(v___x_480_);
v___x_482_ = lean_uint8_sub(v___x_481_, v___x_469_);
v___x_483_ = lean_uint8_to_nat(v___x_482_);
v___x_484_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_479_, v___x_483_);
v_fst_485_ = lean_ctor_get(v___x_484_, 0);
v_snd_486_ = lean_ctor_get(v___x_484_, 1);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_500_ == 0)
{
v___x_488_ = v___x_484_;
v_isShared_489_ = v_isSharedCheck_500_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_snd_486_);
lean_inc(v_fst_485_);
lean_dec(v___x_484_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_500_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_490_; uint8_t v___x_491_; 
v___x_490_ = lean_unsigned_to_nat(0u);
v___x_491_ = lean_nat_dec_eq(v_fst_485_, v___x_490_);
if (v___x_491_ == 0)
{
lean_object* v___x_492_; lean_object* v___x_494_; 
v___x_492_ = lean_nat_to_int(v_fst_485_);
if (v_isShared_489_ == 0)
{
lean_ctor_set(v___x_488_, 1, v___x_492_);
lean_ctor_set(v___x_488_, 0, v_snd_486_);
v___x_494_ = v___x_488_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_snd_486_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v___x_492_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
else
{
lean_object* v___x_496_; lean_object* v___x_498_; 
lean_dec(v_fst_485_);
v___x_496_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
if (v_isShared_489_ == 0)
{
lean_ctor_set_tag(v___x_488_, 1);
lean_ctor_set(v___x_488_, 1, v___x_496_);
lean_ctor_set(v___x_488_, 0, v_snd_486_);
v___x_498_ = v___x_488_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_snd_486_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v___x_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
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
uint8_t v___x_505_; 
v___x_505_ = lean_uint8_dec_eq(v___x_466_, v___x_467_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_506_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg___closed__1));
v___x_507_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_507_, 0, v_a_456_);
lean_ctor_set(v___x_507_, 1, v___x_506_);
return v___x_507_;
}
else
{
lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_551_; 
lean_inc(v_idx_461_);
lean_inc_ref(v_array_460_);
v_isSharedCheck_551_ = !lean_is_exclusive(v_a_456_);
if (v_isSharedCheck_551_ == 0)
{
lean_object* v_unused_552_; lean_object* v_unused_553_; 
v_unused_552_ = lean_ctor_get(v_a_456_, 1);
lean_dec(v_unused_552_);
v_unused_553_ = lean_ctor_get(v_a_456_, 0);
lean_dec(v_unused_553_);
v___x_509_ = v_a_456_;
v_isShared_510_ = v_isSharedCheck_551_;
goto v_resetjp_508_;
}
else
{
lean_dec(v_a_456_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_551_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_514_; 
v___x_511_ = lean_unsigned_to_nat(1u);
v___x_512_ = lean_nat_add(v_idx_461_, v___x_511_);
lean_dec(v_idx_461_);
lean_inc(v___x_512_);
lean_inc_ref(v_array_460_);
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 1, v___x_512_);
v___x_514_ = v___x_509_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v_array_460_);
lean_ctor_set(v_reuseFailAlloc_550_, 1, v___x_512_);
v___x_514_ = v_reuseFailAlloc_550_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
uint8_t v___x_518_; 
v___x_518_ = lean_nat_dec_lt(v___x_512_, v___x_462_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; lean_object* v___x_520_; 
lean_dec(v___x_512_);
lean_dec_ref(v_array_460_);
v___x_519_ = lean_box(0);
v___x_520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_520_, 0, v___x_514_);
lean_ctor_set(v___x_520_, 1, v___x_519_);
return v___x_520_;
}
else
{
uint8_t v_c_521_; uint8_t v___x_522_; uint8_t v___x_523_; 
v_c_521_ = lean_byte_array_fget(v_array_460_, v___x_512_);
v___x_522_ = 48;
v___x_523_ = lean_uint8_dec_le(v___x_522_, v_c_521_);
if (v___x_523_ == 0)
{
lean_dec(v___x_512_);
lean_dec_ref(v_array_460_);
goto v___jp_515_;
}
else
{
uint8_t v___x_524_; uint8_t v___x_525_; 
v___x_524_ = 57;
v___x_525_ = lean_uint8_dec_le(v_c_521_, v___x_524_);
if (v___x_525_ == 0)
{
lean_dec(v___x_512_);
lean_dec_ref(v_array_460_);
goto v___jp_515_;
}
else
{
lean_object* v___x_526_; lean_object* v_it_x27_527_; uint32_t v___x_528_; uint8_t v___x_529_; uint8_t v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v_fst_533_; lean_object* v_snd_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_549_; 
lean_dec_ref(v___x_514_);
v___x_526_ = lean_nat_add(v___x_512_, v___x_511_);
lean_dec(v___x_512_);
v_it_x27_527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_527_, 0, v_array_460_);
lean_ctor_set(v_it_x27_527_, 1, v___x_526_);
v___x_528_ = lean_uint8_to_uint32(v_c_521_);
v___x_529_ = lean_uint32_to_uint8(v___x_528_);
v___x_530_ = lean_uint8_sub(v___x_529_, v___x_522_);
v___x_531_ = lean_uint8_to_nat(v___x_530_);
v___x_532_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_527_, v___x_531_);
v_fst_533_ = lean_ctor_get(v___x_532_, 0);
v_snd_534_ = lean_ctor_get(v___x_532_, 1);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_549_ == 0)
{
v___x_536_ = v___x_532_;
v_isShared_537_ = v_isSharedCheck_549_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_snd_534_);
lean_inc(v_fst_533_);
lean_dec(v___x_532_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_549_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_538_; uint8_t v___x_539_; 
v___x_538_ = lean_unsigned_to_nat(0u);
v___x_539_ = lean_nat_dec_eq(v_fst_533_, v___x_538_);
if (v___x_539_ == 0)
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_543_; 
v___x_540_ = lean_nat_to_int(v_fst_533_);
v___x_541_ = lean_int_neg(v___x_540_);
lean_dec(v___x_540_);
if (v_isShared_537_ == 0)
{
lean_ctor_set(v___x_536_, 1, v___x_541_);
lean_ctor_set(v___x_536_, 0, v_snd_534_);
v___x_543_ = v___x_536_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_snd_534_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v___x_541_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
else
{
lean_object* v___x_545_; lean_object* v___x_547_; 
lean_dec(v_fst_533_);
v___x_545_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
if (v_isShared_537_ == 0)
{
lean_ctor_set_tag(v___x_536_, 1);
lean_ctor_set(v___x_536_, 1, v___x_545_);
lean_ctor_set(v___x_536_, 0, v_snd_534_);
v___x_547_ = v___x_536_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_snd_534_);
lean_ctor_set(v_reuseFailAlloc_548_, 1, v___x_545_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
}
}
}
v___jp_515_:
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
v___x_517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_514_);
lean_ctor_set(v___x_517_, 1, v___x_516_);
return v___x_517_;
}
}
}
}
}
}
v___jp_457_:
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
v___x_459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_459_, 0, v_a_456_);
lean_ctor_set(v___x_459_, 1, v___x_458_);
return v___x_459_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause_litWs(lean_object* v_a_554_){
_start:
{
lean_object* v_pos_556_; lean_object* v_res_557_; lean_object* v_array_587_; lean_object* v_idx_588_; lean_object* v___x_589_; uint8_t v___x_590_; 
v_array_587_ = lean_ctor_get(v_a_554_, 0);
v_idx_588_ = lean_ctor_get(v_a_554_, 1);
v___x_589_ = lean_byte_array_size(v_array_587_);
v___x_590_ = lean_nat_dec_lt(v_idx_588_, v___x_589_);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = lean_box(0);
v___x_592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_592_, 0, v_a_554_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
return v___x_592_;
}
else
{
uint8_t v___x_593_; uint8_t v___x_594_; uint8_t v___x_595_; 
v___x_593_ = lean_byte_array_fget(v_array_587_, v_idx_588_);
v___x_594_ = 45;
v___x_595_ = lean_uint8_dec_eq(v___x_593_, v___x_594_);
if (v___x_595_ == 0)
{
uint8_t v___x_596_; uint8_t v___x_597_; 
v___x_596_ = 48;
v___x_597_ = lean_uint8_dec_le(v___x_596_, v___x_593_);
if (v___x_597_ == 0)
{
goto v___jp_581_;
}
else
{
uint8_t v___x_598_; uint8_t v___x_599_; 
v___x_598_ = 57;
v___x_599_ = lean_uint8_dec_le(v___x_593_, v___x_598_);
if (v___x_599_ == 0)
{
goto v___jp_581_;
}
else
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v_it_x27_602_; uint32_t v___x_603_; uint8_t v___x_604_; uint8_t v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v_fst_608_; lean_object* v_snd_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_620_; 
v___x_600_ = lean_unsigned_to_nat(1u);
v___x_601_ = lean_nat_add(v_idx_588_, v___x_600_);
lean_inc_ref(v_array_587_);
v_it_x27_602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_602_, 0, v_array_587_);
lean_ctor_set(v_it_x27_602_, 1, v___x_601_);
v___x_603_ = lean_uint8_to_uint32(v___x_593_);
v___x_604_ = lean_uint32_to_uint8(v___x_603_);
v___x_605_ = lean_uint8_sub(v___x_604_, v___x_596_);
v___x_606_ = lean_uint8_to_nat(v___x_605_);
v___x_607_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_602_, v___x_606_);
v_fst_608_ = lean_ctor_get(v___x_607_, 0);
v_snd_609_ = lean_ctor_get(v___x_607_, 1);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_620_ == 0)
{
v___x_611_ = v___x_607_;
v_isShared_612_ = v_isSharedCheck_620_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_snd_609_);
lean_inc(v_fst_608_);
lean_dec(v___x_607_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_620_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_613_; uint8_t v___x_614_; 
v___x_613_ = lean_unsigned_to_nat(0u);
v___x_614_ = lean_nat_dec_eq(v_fst_608_, v___x_613_);
if (v___x_614_ == 0)
{
lean_object* v___x_615_; 
lean_del_object(v___x_611_);
lean_dec_ref(v_a_554_);
v___x_615_ = lean_nat_to_int(v_fst_608_);
v_pos_556_ = v_snd_609_;
v_res_557_ = v___x_615_;
goto v___jp_555_;
}
else
{
lean_object* v___x_616_; lean_object* v___x_618_; 
lean_dec(v_snd_609_);
lean_dec(v_fst_608_);
v___x_616_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
if (v_isShared_612_ == 0)
{
lean_ctor_set_tag(v___x_611_, 1);
lean_ctor_set(v___x_611_, 1, v___x_616_);
lean_ctor_set(v___x_611_, 0, v_a_554_);
v___x_618_ = v___x_611_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_554_);
lean_ctor_set(v_reuseFailAlloc_619_, 1, v___x_616_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
}
}
else
{
uint8_t v___x_621_; 
v___x_621_ = lean_uint8_dec_eq(v___x_593_, v___x_594_);
if (v___x_621_ == 0)
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg___closed__1));
v___x_623_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_623_, 0, v_a_554_);
lean_ctor_set(v___x_623_, 1, v___x_622_);
return v___x_623_;
}
else
{
lean_object* v___x_624_; lean_object* v___x_625_; uint8_t v___x_626_; 
v___x_624_ = lean_unsigned_to_nat(1u);
v___x_625_ = lean_nat_add(v_idx_588_, v___x_624_);
v___x_626_ = lean_nat_dec_lt(v___x_625_, v___x_589_);
if (v___x_626_ == 0)
{
lean_object* v___x_627_; lean_object* v___x_628_; 
lean_dec(v___x_625_);
v___x_627_ = lean_box(0);
v___x_628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_628_, 0, v_a_554_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
return v___x_628_;
}
else
{
uint8_t v_c_629_; uint8_t v___x_630_; uint8_t v___x_631_; 
v_c_629_ = lean_byte_array_fget(v_array_587_, v___x_625_);
v___x_630_ = 48;
v___x_631_ = lean_uint8_dec_le(v___x_630_, v_c_629_);
if (v___x_631_ == 0)
{
lean_dec(v___x_625_);
goto v___jp_584_;
}
else
{
uint8_t v___x_632_; uint8_t v___x_633_; 
v___x_632_ = 57;
v___x_633_ = lean_uint8_dec_le(v_c_629_, v___x_632_);
if (v___x_633_ == 0)
{
lean_dec(v___x_625_);
goto v___jp_584_;
}
else
{
lean_object* v___x_634_; lean_object* v_it_x27_635_; uint32_t v___x_636_; uint8_t v___x_637_; uint8_t v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v_fst_641_; lean_object* v_snd_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_654_; 
v___x_634_ = lean_nat_add(v___x_625_, v___x_624_);
lean_dec(v___x_625_);
lean_inc_ref(v_array_587_);
v_it_x27_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_635_, 0, v_array_587_);
lean_ctor_set(v_it_x27_635_, 1, v___x_634_);
v___x_636_ = lean_uint8_to_uint32(v_c_629_);
v___x_637_ = lean_uint32_to_uint8(v___x_636_);
v___x_638_ = lean_uint8_sub(v___x_637_, v___x_630_);
v___x_639_ = lean_uint8_to_nat(v___x_638_);
v___x_640_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_635_, v___x_639_);
v_fst_641_ = lean_ctor_get(v___x_640_, 0);
v_snd_642_ = lean_ctor_get(v___x_640_, 1);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_654_ == 0)
{
v___x_644_ = v___x_640_;
v_isShared_645_ = v_isSharedCheck_654_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_snd_642_);
lean_inc(v_fst_641_);
lean_dec(v___x_640_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_654_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_646_; uint8_t v___x_647_; 
v___x_646_ = lean_unsigned_to_nat(0u);
v___x_647_ = lean_nat_dec_eq(v_fst_641_, v___x_646_);
if (v___x_647_ == 0)
{
lean_object* v___x_648_; lean_object* v___x_649_; 
lean_del_object(v___x_644_);
lean_dec_ref(v_a_554_);
v___x_648_ = lean_nat_to_int(v_fst_641_);
v___x_649_ = lean_int_neg(v___x_648_);
lean_dec(v___x_648_);
v_pos_556_ = v_snd_642_;
v_res_557_ = v___x_649_;
goto v___jp_555_;
}
else
{
lean_object* v___x_650_; lean_object* v___x_652_; 
lean_dec(v_snd_642_);
lean_dec(v_fst_641_);
v___x_650_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
if (v_isShared_645_ == 0)
{
lean_ctor_set_tag(v___x_644_, 1);
lean_ctor_set(v___x_644_, 1, v___x_650_);
lean_ctor_set(v___x_644_, 0, v_a_554_);
v___x_652_ = v___x_644_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_a_554_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v___x_650_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
}
}
}
}
}
v___jp_555_:
{
lean_object* v_array_558_; lean_object* v_idx_559_; lean_object* v___x_560_; uint8_t v___x_561_; 
v_array_558_ = lean_ctor_get(v_pos_556_, 0);
v_idx_559_ = lean_ctor_get(v_pos_556_, 1);
v___x_560_ = lean_byte_array_size(v_array_558_);
v___x_561_ = lean_nat_dec_lt(v_idx_559_, v___x_560_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; lean_object* v___x_563_; 
lean_dec(v_res_557_);
v___x_562_ = lean_box(0);
v___x_563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_563_, 0, v_pos_556_);
lean_ctor_set(v___x_563_, 1, v___x_562_);
return v___x_563_;
}
else
{
uint8_t v___x_564_; uint8_t v_got_565_; uint8_t v___x_566_; 
v___x_564_ = 32;
v_got_565_ = lean_byte_array_fget(v_array_558_, v_idx_559_);
v___x_566_ = lean_uint8_dec_eq(v_got_565_, v___x_564_);
if (v___x_566_ == 0)
{
lean_object* v___x_567_; lean_object* v___x_568_; 
lean_dec(v_res_557_);
v___x_567_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__1));
v___x_568_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_568_, 0, v_pos_556_);
lean_ctor_set(v___x_568_, 1, v___x_567_);
return v___x_568_;
}
else
{
lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_578_; 
lean_inc(v_idx_559_);
lean_inc_ref(v_array_558_);
v_isSharedCheck_578_ = !lean_is_exclusive(v_pos_556_);
if (v_isSharedCheck_578_ == 0)
{
lean_object* v_unused_579_; lean_object* v_unused_580_; 
v_unused_579_ = lean_ctor_get(v_pos_556_, 1);
lean_dec(v_unused_579_);
v_unused_580_ = lean_ctor_get(v_pos_556_, 0);
lean_dec(v_unused_580_);
v___x_570_ = v_pos_556_;
v_isShared_571_ = v_isSharedCheck_578_;
goto v_resetjp_569_;
}
else
{
lean_dec(v_pos_556_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_578_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_575_; 
v___x_572_ = lean_unsigned_to_nat(1u);
v___x_573_ = lean_nat_add(v_idx_559_, v___x_572_);
lean_dec(v_idx_559_);
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 1, v___x_573_);
v___x_575_ = v___x_570_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_array_558_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v___x_573_);
v___x_575_ = v_reuseFailAlloc_577_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
lean_object* v___x_576_; 
v___x_576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
lean_ctor_set(v___x_576_, 1, v_res_557_);
return v___x_576_;
}
}
}
}
}
v___jp_581_:
{
lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_582_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
v___x_583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_583_, 0, v_a_554_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
return v___x_583_;
}
v___jp_584_:
{
lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_585_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
v___x_586_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_586_, 0, v_a_554_);
lean_ctor_set(v___x_586_, 1, v___x_585_);
return v___x_586_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause_spec__0(lean_object* v_a_655_){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = lean_nat_to_int(v_a_655_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause_spec__1(lean_object* v_acc_657_, lean_object* v_a_658_){
_start:
{
lean_object* v_array_659_; lean_object* v_idx_660_; lean_object* v_pos_662_; lean_object* v_idx_663_; lean_object* v_err_664_; lean_object* v_pos_673_; lean_object* v_res_674_; lean_object* v___x_697_; uint8_t v___x_698_; 
v_array_659_ = lean_ctor_get(v_a_658_, 0);
v_idx_660_ = lean_ctor_get(v_a_658_, 1);
lean_inc(v_idx_660_);
v___x_697_ = lean_byte_array_size(v_array_659_);
v___x_698_ = lean_nat_dec_lt(v_idx_660_, v___x_697_);
if (v___x_698_ == 0)
{
lean_object* v___x_699_; 
v___x_699_ = lean_box(0);
lean_inc(v_idx_660_);
v_pos_662_ = v_a_658_;
v_idx_663_ = v_idx_660_;
v_err_664_ = v___x_699_;
goto v___jp_661_;
}
else
{
uint8_t v___x_700_; uint8_t v___x_701_; uint8_t v___x_702_; 
v___x_700_ = lean_byte_array_fget(v_array_659_, v_idx_660_);
v___x_701_ = 45;
v___x_702_ = lean_uint8_dec_eq(v___x_700_, v___x_701_);
if (v___x_702_ == 0)
{
uint8_t v___x_703_; uint8_t v___x_704_; 
v___x_703_ = 48;
v___x_704_ = lean_uint8_dec_le(v___x_703_, v___x_700_);
if (v___x_704_ == 0)
{
goto v___jp_670_;
}
else
{
uint8_t v___x_705_; uint8_t v___x_706_; 
v___x_705_ = 57;
v___x_706_ = lean_uint8_dec_le(v___x_700_, v___x_705_);
if (v___x_706_ == 0)
{
goto v___jp_670_;
}
else
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v_it_x27_709_; uint32_t v___x_710_; uint8_t v___x_711_; uint8_t v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v_fst_715_; lean_object* v_snd_716_; lean_object* v___x_717_; uint8_t v___x_718_; 
v___x_707_ = lean_unsigned_to_nat(1u);
v___x_708_ = lean_nat_add(v_idx_660_, v___x_707_);
lean_inc_ref(v_array_659_);
v_it_x27_709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_709_, 0, v_array_659_);
lean_ctor_set(v_it_x27_709_, 1, v___x_708_);
v___x_710_ = lean_uint8_to_uint32(v___x_700_);
v___x_711_ = lean_uint32_to_uint8(v___x_710_);
v___x_712_ = lean_uint8_sub(v___x_711_, v___x_703_);
v___x_713_ = lean_uint8_to_nat(v___x_712_);
v___x_714_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_709_, v___x_713_);
v_fst_715_ = lean_ctor_get(v___x_714_, 0);
lean_inc(v_fst_715_);
v_snd_716_ = lean_ctor_get(v___x_714_, 1);
lean_inc(v_snd_716_);
lean_dec_ref(v___x_714_);
v___x_717_ = lean_unsigned_to_nat(0u);
v___x_718_ = lean_nat_dec_eq(v_fst_715_, v___x_717_);
if (v___x_718_ == 0)
{
lean_object* v___x_719_; 
lean_dec_ref(v_a_658_);
v___x_719_ = lean_nat_to_int(v_fst_715_);
v_pos_673_ = v_snd_716_;
v_res_674_ = v___x_719_;
goto v___jp_672_;
}
else
{
lean_object* v___x_720_; 
lean_dec(v_snd_716_);
lean_dec(v_fst_715_);
v___x_720_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
lean_inc(v_idx_660_);
v_pos_662_ = v_a_658_;
v_idx_663_ = v_idx_660_;
v_err_664_ = v___x_720_;
goto v___jp_661_;
}
}
}
}
else
{
uint8_t v___x_721_; 
v___x_721_ = lean_uint8_dec_eq(v___x_700_, v___x_701_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; 
v___x_722_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg___closed__1));
lean_inc(v_idx_660_);
v_pos_662_ = v_a_658_;
v_idx_663_ = v_idx_660_;
v_err_664_ = v___x_722_;
goto v___jp_661_;
}
else
{
lean_object* v___x_723_; lean_object* v___x_724_; uint8_t v___x_725_; 
v___x_723_ = lean_unsigned_to_nat(1u);
v___x_724_ = lean_nat_add(v_idx_660_, v___x_723_);
v___x_725_ = lean_nat_dec_lt(v___x_724_, v___x_697_);
if (v___x_725_ == 0)
{
lean_object* v___x_726_; 
lean_dec(v___x_724_);
v___x_726_ = lean_box(0);
lean_inc(v_idx_660_);
v_pos_662_ = v_a_658_;
v_idx_663_ = v_idx_660_;
v_err_664_ = v___x_726_;
goto v___jp_661_;
}
else
{
uint8_t v_c_727_; uint8_t v___x_728_; uint8_t v___x_729_; 
v_c_727_ = lean_byte_array_fget(v_array_659_, v___x_724_);
v___x_728_ = 48;
v___x_729_ = lean_uint8_dec_le(v___x_728_, v_c_727_);
if (v___x_729_ == 0)
{
lean_dec(v___x_724_);
goto v___jp_668_;
}
else
{
uint8_t v___x_730_; uint8_t v___x_731_; 
v___x_730_ = 57;
v___x_731_ = lean_uint8_dec_le(v_c_727_, v___x_730_);
if (v___x_731_ == 0)
{
lean_dec(v___x_724_);
goto v___jp_668_;
}
else
{
lean_object* v___x_732_; lean_object* v_it_x27_733_; uint32_t v___x_734_; uint8_t v___x_735_; uint8_t v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v_fst_739_; lean_object* v_snd_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_732_ = lean_nat_add(v___x_724_, v___x_723_);
lean_dec(v___x_724_);
lean_inc_ref(v_array_659_);
v_it_x27_733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_733_, 0, v_array_659_);
lean_ctor_set(v_it_x27_733_, 1, v___x_732_);
v___x_734_ = lean_uint8_to_uint32(v_c_727_);
v___x_735_ = lean_uint32_to_uint8(v___x_734_);
v___x_736_ = lean_uint8_sub(v___x_735_, v___x_728_);
v___x_737_ = lean_uint8_to_nat(v___x_736_);
v___x_738_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_733_, v___x_737_);
v_fst_739_ = lean_ctor_get(v___x_738_, 0);
lean_inc(v_fst_739_);
v_snd_740_ = lean_ctor_get(v___x_738_, 1);
lean_inc(v_snd_740_);
lean_dec_ref(v___x_738_);
v___x_741_ = lean_unsigned_to_nat(0u);
v___x_742_ = lean_nat_dec_eq(v_fst_739_, v___x_741_);
if (v___x_742_ == 0)
{
lean_object* v___x_743_; lean_object* v___x_744_; 
lean_dec_ref(v_a_658_);
v___x_743_ = lean_nat_to_int(v_fst_739_);
v___x_744_ = lean_int_neg(v___x_743_);
lean_dec(v___x_743_);
v_pos_673_ = v_snd_740_;
v_res_674_ = v___x_744_;
goto v___jp_672_;
}
else
{
lean_object* v___x_745_; 
lean_dec(v_snd_740_);
lean_dec(v_fst_739_);
v___x_745_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
lean_inc(v_idx_660_);
v_pos_662_ = v_a_658_;
v_idx_663_ = v_idx_660_;
v_err_664_ = v___x_745_;
goto v___jp_661_;
}
}
}
}
}
}
}
v___jp_661_:
{
uint8_t v___x_665_; 
v___x_665_ = lean_nat_dec_eq(v_idx_660_, v_idx_663_);
lean_dec(v_idx_663_);
lean_dec(v_idx_660_);
if (v___x_665_ == 0)
{
lean_object* v___x_666_; 
lean_dec_ref(v_acc_657_);
lean_inc(v_err_664_);
v___x_666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_666_, 0, v_pos_662_);
lean_ctor_set(v___x_666_, 1, v_err_664_);
return v___x_666_;
}
else
{
lean_object* v___x_667_; 
v___x_667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_667_, 0, v_pos_662_);
lean_ctor_set(v___x_667_, 1, v_acc_657_);
return v___x_667_;
}
}
v___jp_668_:
{
lean_object* v___x_669_; 
v___x_669_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
lean_inc(v_idx_660_);
v_pos_662_ = v_a_658_;
v_idx_663_ = v_idx_660_;
v_err_664_ = v___x_669_;
goto v___jp_661_;
}
v___jp_670_:
{
lean_object* v___x_671_; 
v___x_671_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
lean_inc(v_idx_660_);
v_pos_662_ = v_a_658_;
v_idx_663_ = v_idx_660_;
v_err_664_ = v___x_671_;
goto v___jp_661_;
}
v___jp_672_:
{
lean_object* v_array_675_; lean_object* v_idx_676_; lean_object* v___x_677_; uint8_t v___x_678_; 
v_array_675_ = lean_ctor_get(v_pos_673_, 0);
v_idx_676_ = lean_ctor_get(v_pos_673_, 1);
lean_inc(v_idx_676_);
v___x_677_ = lean_byte_array_size(v_array_675_);
v___x_678_ = lean_nat_dec_lt(v_idx_676_, v___x_677_);
if (v___x_678_ == 0)
{
lean_object* v___x_679_; 
lean_dec(v_res_674_);
v___x_679_ = lean_box(0);
v_pos_662_ = v_pos_673_;
v_idx_663_ = v_idx_676_;
v_err_664_ = v___x_679_;
goto v___jp_661_;
}
else
{
uint8_t v___x_680_; uint8_t v_got_681_; uint8_t v___x_682_; 
v___x_680_ = 32;
v_got_681_ = lean_byte_array_fget(v_array_675_, v_idx_676_);
v___x_682_ = lean_uint8_dec_eq(v_got_681_, v___x_680_);
if (v___x_682_ == 0)
{
lean_object* v___x_683_; 
lean_dec(v_res_674_);
v___x_683_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__1));
v_pos_662_ = v_pos_673_;
v_idx_663_ = v_idx_676_;
v_err_664_ = v___x_683_;
goto v___jp_661_;
}
else
{
lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_694_; 
lean_inc_ref(v_array_675_);
lean_dec(v_idx_660_);
v_isSharedCheck_694_ = !lean_is_exclusive(v_pos_673_);
if (v_isSharedCheck_694_ == 0)
{
lean_object* v_unused_695_; lean_object* v_unused_696_; 
v_unused_695_ = lean_ctor_get(v_pos_673_, 1);
lean_dec(v_unused_695_);
v_unused_696_ = lean_ctor_get(v_pos_673_, 0);
lean_dec(v_unused_696_);
v___x_685_ = v_pos_673_;
v_isShared_686_ = v_isSharedCheck_694_;
goto v_resetjp_684_;
}
else
{
lean_dec(v_pos_673_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_694_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_687_ = lean_unsigned_to_nat(1u);
v___x_688_ = lean_nat_add(v_idx_676_, v___x_687_);
lean_dec(v_idx_676_);
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 1, v___x_688_);
v___x_690_ = v___x_685_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_array_675_);
lean_ctor_set(v_reuseFailAlloc_693_, 1, v___x_688_);
v___x_690_ = v_reuseFailAlloc_693_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; 
v___x_691_ = lean_array_push(v_acc_657_, v_res_674_);
v_acc_657_ = v___x_691_;
v_a_658_ = v___x_690_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause(lean_object* v_a_748_){
_start:
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause___closed__0));
v___x_750_ = l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause_spec__1(v___x_749_, v_a_748_);
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v_pos_751_; lean_object* v_res_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_785_; 
v_pos_751_ = lean_ctor_get(v___x_750_, 0);
v_res_752_ = lean_ctor_get(v___x_750_, 1);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_785_ == 0)
{
v___x_754_ = v___x_750_;
v_isShared_755_ = v_isSharedCheck_785_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_res_752_);
lean_inc(v_pos_751_);
lean_dec(v___x_750_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_785_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v_array_756_; lean_object* v_idx_757_; lean_object* v___x_758_; uint8_t v___x_759_; 
v_array_756_ = lean_ctor_get(v_pos_751_, 0);
v_idx_757_ = lean_ctor_get(v_pos_751_, 1);
v___x_758_ = lean_byte_array_size(v_array_756_);
v___x_759_ = lean_nat_dec_lt(v_idx_757_, v___x_758_);
if (v___x_759_ == 0)
{
lean_object* v___x_760_; lean_object* v___x_762_; 
lean_dec(v_res_752_);
v___x_760_ = lean_box(0);
if (v_isShared_755_ == 0)
{
lean_ctor_set_tag(v___x_754_, 1);
lean_ctor_set(v___x_754_, 1, v___x_760_);
v___x_762_ = v___x_754_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_pos_751_);
lean_ctor_set(v_reuseFailAlloc_763_, 1, v___x_760_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
else
{
uint8_t v___x_764_; uint8_t v_got_765_; uint8_t v___x_766_; 
v___x_764_ = 48;
v_got_765_ = lean_byte_array_fget(v_array_756_, v_idx_757_);
v___x_766_ = lean_uint8_dec_eq(v_got_765_, v___x_764_);
if (v___x_766_ == 0)
{
lean_object* v___x_767_; lean_object* v___x_769_; 
lean_dec(v_res_752_);
v___x_767_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseZero___closed__1));
if (v_isShared_755_ == 0)
{
lean_ctor_set_tag(v___x_754_, 1);
lean_ctor_set(v___x_754_, 1, v___x_767_);
v___x_769_ = v___x_754_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_pos_751_);
lean_ctor_set(v_reuseFailAlloc_770_, 1, v___x_767_);
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
lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_782_; 
lean_inc(v_idx_757_);
lean_inc_ref(v_array_756_);
v_isSharedCheck_782_ = !lean_is_exclusive(v_pos_751_);
if (v_isSharedCheck_782_ == 0)
{
lean_object* v_unused_783_; lean_object* v_unused_784_; 
v_unused_783_ = lean_ctor_get(v_pos_751_, 1);
lean_dec(v_unused_783_);
v_unused_784_ = lean_ctor_get(v_pos_751_, 0);
lean_dec(v_unused_784_);
v___x_772_ = v_pos_751_;
v_isShared_773_ = v_isSharedCheck_782_;
goto v_resetjp_771_;
}
else
{
lean_dec(v_pos_751_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_782_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_777_; 
v___x_774_ = lean_unsigned_to_nat(1u);
v___x_775_ = lean_nat_add(v_idx_757_, v___x_774_);
lean_dec(v_idx_757_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 1, v___x_775_);
v___x_777_ = v___x_772_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_array_756_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v___x_775_);
v___x_777_ = v_reuseFailAlloc_781_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
lean_object* v___x_779_; 
if (v_isShared_755_ == 0)
{
lean_ctor_set(v___x_754_, 0, v___x_777_);
v___x_779_ = v___x_754_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_777_);
lean_ctor_set(v_reuseFailAlloc_780_, 1, v_res_752_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
}
}
}
}
}
else
{
return v___x_750_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRes(lean_object* v_a_786_){
_start:
{
lean_object* v_array_787_; lean_object* v_idx_788_; lean_object* v___x_789_; uint8_t v___x_790_; 
v_array_787_ = lean_ctor_get(v_a_786_, 0);
v_idx_788_ = lean_ctor_get(v_a_786_, 1);
v___x_789_ = lean_byte_array_size(v_array_787_);
v___x_790_ = lean_nat_dec_lt(v_idx_788_, v___x_789_);
if (v___x_790_ == 0)
{
lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_791_ = lean_box(0);
v___x_792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_792_, 0, v_a_786_);
lean_ctor_set(v___x_792_, 1, v___x_791_);
return v___x_792_;
}
else
{
uint8_t v___x_793_; uint8_t v_got_794_; uint8_t v___x_795_; 
v___x_793_ = 45;
v_got_794_ = lean_byte_array_fget(v_array_787_, v_idx_788_);
v___x_795_ = lean_uint8_dec_eq(v_got_794_, v___x_793_);
if (v___x_795_ == 0)
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg___closed__1));
v___x_797_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_797_, 0, v_a_786_);
lean_ctor_set(v___x_797_, 1, v___x_796_);
return v___x_797_;
}
else
{
lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_880_; 
lean_inc(v_idx_788_);
lean_inc_ref(v_array_787_);
v_isSharedCheck_880_ = !lean_is_exclusive(v_a_786_);
if (v_isSharedCheck_880_ == 0)
{
lean_object* v_unused_881_; lean_object* v_unused_882_; 
v_unused_881_ = lean_ctor_get(v_a_786_, 1);
lean_dec(v_unused_881_);
v_unused_882_ = lean_ctor_get(v_a_786_, 0);
lean_dec(v_unused_882_);
v___x_799_ = v_a_786_;
v_isShared_800_ = v_isSharedCheck_880_;
goto v_resetjp_798_;
}
else
{
lean_dec(v_a_786_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_880_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_804_; 
v___x_801_ = lean_unsigned_to_nat(1u);
v___x_802_ = lean_nat_add(v_idx_788_, v___x_801_);
lean_dec(v_idx_788_);
lean_inc(v___x_802_);
lean_inc_ref(v_array_787_);
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 1, v___x_802_);
v___x_804_ = v___x_799_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_array_787_);
lean_ctor_set(v_reuseFailAlloc_879_, 1, v___x_802_);
v___x_804_ = v_reuseFailAlloc_879_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
uint8_t v___x_808_; 
v___x_808_ = lean_nat_dec_lt(v___x_802_, v___x_789_);
if (v___x_808_ == 0)
{
lean_object* v___x_809_; lean_object* v___x_810_; 
lean_dec(v___x_802_);
lean_dec_ref(v_array_787_);
v___x_809_ = lean_box(0);
v___x_810_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_810_, 0, v___x_804_);
lean_ctor_set(v___x_810_, 1, v___x_809_);
return v___x_810_;
}
else
{
uint8_t v_c_811_; uint8_t v___x_812_; uint8_t v___x_813_; 
v_c_811_ = lean_byte_array_fget(v_array_787_, v___x_802_);
v___x_812_ = 48;
v___x_813_ = lean_uint8_dec_le(v___x_812_, v_c_811_);
if (v___x_813_ == 0)
{
lean_dec(v___x_802_);
lean_dec_ref(v_array_787_);
goto v___jp_805_;
}
else
{
uint8_t v___x_814_; uint8_t v___x_815_; 
v___x_814_ = 57;
v___x_815_ = lean_uint8_dec_le(v_c_811_, v___x_814_);
if (v___x_815_ == 0)
{
lean_dec(v___x_802_);
lean_dec_ref(v_array_787_);
goto v___jp_805_;
}
else
{
lean_object* v___x_816_; lean_object* v_it_x27_817_; uint32_t v___x_818_; uint8_t v___x_819_; uint8_t v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v_fst_823_; lean_object* v_snd_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_878_; 
lean_dec_ref(v___x_804_);
v___x_816_ = lean_nat_add(v___x_802_, v___x_801_);
lean_dec(v___x_802_);
v_it_x27_817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_817_, 0, v_array_787_);
lean_ctor_set(v_it_x27_817_, 1, v___x_816_);
v___x_818_ = lean_uint8_to_uint32(v_c_811_);
v___x_819_ = lean_uint32_to_uint8(v___x_818_);
v___x_820_ = lean_uint8_sub(v___x_819_, v___x_812_);
v___x_821_ = lean_uint8_to_nat(v___x_820_);
v___x_822_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_817_, v___x_821_);
v_fst_823_ = lean_ctor_get(v___x_822_, 0);
v_snd_824_ = lean_ctor_get(v___x_822_, 1);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_878_ == 0)
{
v___x_826_ = v___x_822_;
v_isShared_827_ = v_isSharedCheck_878_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_snd_824_);
lean_inc(v_fst_823_);
lean_dec(v___x_822_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_878_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_828_; uint8_t v___x_829_; 
v___x_828_ = lean_unsigned_to_nat(0u);
v___x_829_ = lean_nat_dec_eq(v_fst_823_, v___x_828_);
if (v___x_829_ == 0)
{
lean_object* v_array_830_; lean_object* v_idx_831_; lean_object* v___x_832_; uint8_t v___x_833_; 
v_array_830_ = lean_ctor_get(v_snd_824_, 0);
v_idx_831_ = lean_ctor_get(v_snd_824_, 1);
v___x_832_ = lean_byte_array_size(v_array_830_);
v___x_833_ = lean_nat_dec_lt(v_idx_831_, v___x_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; lean_object* v___x_835_; 
lean_del_object(v___x_826_);
lean_dec(v_fst_823_);
v___x_834_ = lean_box(0);
v___x_835_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_835_, 0, v_snd_824_);
lean_ctor_set(v___x_835_, 1, v___x_834_);
return v___x_835_;
}
else
{
uint8_t v___x_836_; uint8_t v_got_837_; uint8_t v___x_838_; 
v___x_836_ = 32;
v_got_837_ = lean_byte_array_fget(v_array_830_, v_idx_831_);
v___x_838_ = lean_uint8_dec_eq(v_got_837_, v___x_836_);
if (v___x_838_ == 0)
{
lean_object* v___x_839_; lean_object* v___x_840_; 
lean_del_object(v___x_826_);
lean_dec(v_fst_823_);
v___x_839_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__1));
v___x_840_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_840_, 0, v_snd_824_);
lean_ctor_set(v___x_840_, 1, v___x_839_);
return v___x_840_;
}
else
{
lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_873_; 
lean_inc(v_idx_831_);
lean_inc_ref(v_array_830_);
v_isSharedCheck_873_ = !lean_is_exclusive(v_snd_824_);
if (v_isSharedCheck_873_ == 0)
{
lean_object* v_unused_874_; lean_object* v_unused_875_; 
v_unused_874_ = lean_ctor_get(v_snd_824_, 1);
lean_dec(v_unused_874_);
v_unused_875_ = lean_ctor_get(v_snd_824_, 0);
lean_dec(v_unused_875_);
v___x_842_ = v_snd_824_;
v_isShared_843_ = v_isSharedCheck_873_;
goto v_resetjp_841_;
}
else
{
lean_dec(v_snd_824_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_873_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_844_; lean_object* v___x_846_; 
v___x_844_ = lean_nat_add(v_idx_831_, v___x_801_);
lean_dec(v_idx_831_);
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 1, v___x_844_);
v___x_846_ = v___x_842_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_array_830_);
lean_ctor_set(v_reuseFailAlloc_872_, 1, v___x_844_);
v___x_846_ = v_reuseFailAlloc_872_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
lean_object* v___x_847_; 
v___x_847_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList(v___x_846_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_object* v_pos_848_; lean_object* v_res_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_862_; 
v_pos_848_ = lean_ctor_get(v___x_847_, 0);
v_res_849_ = lean_ctor_get(v___x_847_, 1);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_862_ == 0)
{
v___x_851_ = v___x_847_;
v_isShared_852_ = v_isSharedCheck_862_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_res_849_);
lean_inc(v_pos_848_);
lean_dec(v___x_847_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_862_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_857_; 
v___x_853_ = lean_nat_to_int(v_fst_823_);
v___x_854_ = lean_int_neg(v___x_853_);
lean_dec(v___x_853_);
v___x_855_ = lean_nat_abs(v___x_854_);
lean_dec(v___x_854_);
if (v_isShared_827_ == 0)
{
lean_ctor_set(v___x_826_, 1, v_res_849_);
lean_ctor_set(v___x_826_, 0, v___x_855_);
v___x_857_ = v___x_826_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v___x_855_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v_res_849_);
v___x_857_ = v_reuseFailAlloc_861_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
lean_object* v___x_859_; 
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 1, v___x_857_);
v___x_859_ = v___x_851_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_pos_848_);
lean_ctor_set(v_reuseFailAlloc_860_, 1, v___x_857_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
else
{
lean_object* v_pos_863_; lean_object* v_err_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_871_; 
lean_del_object(v___x_826_);
lean_dec(v_fst_823_);
v_pos_863_ = lean_ctor_get(v___x_847_, 0);
v_err_864_ = lean_ctor_get(v___x_847_, 1);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_871_ == 0)
{
v___x_866_ = v___x_847_;
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_err_864_);
lean_inc(v_pos_863_);
lean_dec(v___x_847_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___x_869_; 
if (v_isShared_867_ == 0)
{
v___x_869_ = v___x_866_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_pos_863_);
lean_ctor_set(v_reuseFailAlloc_870_, 1, v_err_864_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
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
lean_object* v___x_876_; lean_object* v___x_877_; 
lean_del_object(v___x_826_);
lean_dec(v_fst_823_);
v___x_876_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
v___x_877_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_877_, 0, v_snd_824_);
lean_ctor_set(v___x_877_, 1, v___x_876_);
return v___x_877_;
}
}
}
}
}
v___jp_805_:
{
lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_806_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
v___x_807_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_804_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
return v___x_807_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat_spec__0(lean_object* v_acc_883_, lean_object* v_a_884_){
_start:
{
lean_object* v___x_885_; 
lean_inc_ref(v_a_884_);
v___x_885_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRes(v_a_884_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_pos_886_; lean_object* v_res_887_; lean_object* v___x_888_; 
lean_dec_ref(v_a_884_);
v_pos_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_pos_886_);
v_res_887_ = lean_ctor_get(v___x_885_, 1);
lean_inc(v_res_887_);
lean_dec_ref_known(v___x_885_, 2);
v___x_888_ = lean_array_push(v_acc_883_, v_res_887_);
v_acc_883_ = v___x_888_;
v_a_884_ = v_pos_886_;
goto _start;
}
else
{
lean_object* v_err_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_902_; 
v_err_890_ = lean_ctor_get(v___x_885_, 1);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_902_ == 0)
{
lean_object* v_unused_903_; 
v_unused_903_ = lean_ctor_get(v___x_885_, 0);
lean_dec(v_unused_903_);
v___x_892_ = v___x_885_;
v_isShared_893_ = v_isSharedCheck_902_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_err_890_);
lean_dec(v___x_885_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_902_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v_idx_894_; uint8_t v___x_895_; 
v_idx_894_ = lean_ctor_get(v_a_884_, 1);
v___x_895_ = lean_nat_dec_eq(v_idx_894_, v_idx_894_);
if (v___x_895_ == 0)
{
lean_object* v___x_897_; 
lean_dec_ref(v_acc_883_);
if (v_isShared_893_ == 0)
{
lean_ctor_set(v___x_892_, 0, v_a_884_);
v___x_897_ = v___x_892_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_a_884_);
lean_ctor_set(v_reuseFailAlloc_898_, 1, v_err_890_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
else
{
lean_object* v___x_900_; 
lean_dec(v_err_890_);
if (v_isShared_893_ == 0)
{
lean_ctor_set_tag(v___x_892_, 0);
lean_ctor_set(v___x_892_, 1, v_acc_883_);
lean_ctor_set(v___x_892_, 0, v_a_884_);
v___x_900_ = v___x_892_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_a_884_);
lean_ctor_set(v_reuseFailAlloc_901_, 1, v_acc_883_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat(lean_object* v_ident_909_, lean_object* v_a_910_){
_start:
{
lean_object* v___x_911_; 
v___x_911_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause(v_a_910_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_pos_912_; lean_object* v_res_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_1028_; 
v_pos_912_ = lean_ctor_get(v___x_911_, 0);
v_res_913_ = lean_ctor_get(v___x_911_, 1);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_915_ = v___x_911_;
v_isShared_916_ = v_isSharedCheck_1028_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_res_913_);
lean_inc(v_pos_912_);
lean_dec(v___x_911_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_1028_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v_array_917_; lean_object* v_idx_918_; lean_object* v___x_919_; uint8_t v___x_920_; 
v_array_917_ = lean_ctor_get(v_pos_912_, 0);
v_idx_918_ = lean_ctor_get(v_pos_912_, 1);
v___x_919_ = lean_byte_array_size(v_array_917_);
v___x_920_ = lean_nat_dec_lt(v_idx_918_, v___x_919_);
if (v___x_920_ == 0)
{
lean_object* v___x_921_; lean_object* v___x_923_; 
lean_dec(v_res_913_);
lean_dec(v_ident_909_);
v___x_921_ = lean_box(0);
if (v_isShared_916_ == 0)
{
lean_ctor_set_tag(v___x_915_, 1);
lean_ctor_set(v___x_915_, 1, v___x_921_);
v___x_923_ = v___x_915_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_pos_912_);
lean_ctor_set(v_reuseFailAlloc_924_, 1, v___x_921_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
else
{
uint8_t v___x_925_; uint8_t v_got_926_; uint8_t v___x_927_; 
v___x_925_ = 32;
v_got_926_ = lean_byte_array_fget(v_array_917_, v_idx_918_);
v___x_927_ = lean_uint8_dec_eq(v_got_926_, v___x_925_);
if (v___x_927_ == 0)
{
lean_object* v___x_928_; lean_object* v___x_930_; 
lean_dec(v_res_913_);
lean_dec(v_ident_909_);
v___x_928_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__1));
if (v_isShared_916_ == 0)
{
lean_ctor_set_tag(v___x_915_, 1);
lean_ctor_set(v___x_915_, 1, v___x_928_);
v___x_930_ = v___x_915_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_pos_912_);
lean_ctor_set(v_reuseFailAlloc_931_, 1, v___x_928_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
else
{
lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_1025_; 
lean_inc(v_idx_918_);
lean_inc_ref(v_array_917_);
lean_del_object(v___x_915_);
v_isSharedCheck_1025_ = !lean_is_exclusive(v_pos_912_);
if (v_isSharedCheck_1025_ == 0)
{
lean_object* v_unused_1026_; lean_object* v_unused_1027_; 
v_unused_1026_ = lean_ctor_get(v_pos_912_, 1);
lean_dec(v_unused_1026_);
v_unused_1027_ = lean_ctor_get(v_pos_912_, 0);
lean_dec(v_unused_1027_);
v___x_933_ = v_pos_912_;
v_isShared_934_ = v_isSharedCheck_1025_;
goto v_resetjp_932_;
}
else
{
lean_dec(v_pos_912_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_1025_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_938_; 
v___x_935_ = lean_unsigned_to_nat(1u);
v___x_936_ = lean_nat_add(v_idx_918_, v___x_935_);
lean_dec(v_idx_918_);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 1, v___x_936_);
v___x_938_ = v___x_933_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v_array_917_);
lean_ctor_set(v_reuseFailAlloc_1024_, 1, v___x_936_);
v___x_938_ = v_reuseFailAlloc_1024_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
lean_object* v___x_939_; 
v___x_939_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList(v___x_938_);
if (lean_obj_tag(v___x_939_) == 0)
{
lean_object* v_pos_940_; lean_object* v_res_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v_pos_940_ = lean_ctor_get(v___x_939_, 0);
lean_inc(v_pos_940_);
v_res_941_ = lean_ctor_get(v___x_939_, 1);
lean_inc(v_res_941_);
lean_dec_ref_known(v___x_939_, 2);
v___x_942_ = lean_unsigned_to_nat(0u);
v___x_943_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__0));
v___x_944_ = l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat_spec__0(v___x_943_, v_pos_940_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_pos_945_; lean_object* v_res_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_1005_; 
v_pos_945_ = lean_ctor_get(v___x_944_, 0);
v_res_946_ = lean_ctor_get(v___x_944_, 1);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_948_ = v___x_944_;
v_isShared_949_ = v_isSharedCheck_1005_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_res_946_);
lean_inc(v_pos_945_);
lean_dec(v___x_944_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_1005_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v_array_950_; lean_object* v_idx_951_; lean_object* v___x_952_; uint8_t v___x_953_; 
v_array_950_ = lean_ctor_get(v_pos_945_, 0);
v_idx_951_ = lean_ctor_get(v_pos_945_, 1);
v___x_952_ = lean_byte_array_size(v_array_950_);
v___x_953_ = lean_nat_dec_lt(v_idx_951_, v___x_952_);
if (v___x_953_ == 0)
{
lean_object* v___x_954_; lean_object* v___x_956_; 
lean_dec(v_res_946_);
lean_dec(v_res_941_);
lean_dec(v_res_913_);
lean_dec(v_ident_909_);
v___x_954_ = lean_box(0);
if (v_isShared_949_ == 0)
{
lean_ctor_set_tag(v___x_948_, 1);
lean_ctor_set(v___x_948_, 1, v___x_954_);
v___x_956_ = v___x_948_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_pos_945_);
lean_ctor_set(v_reuseFailAlloc_957_, 1, v___x_954_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
else
{
uint8_t v___x_958_; uint8_t v_got_959_; uint8_t v___x_960_; 
v___x_958_ = 48;
v_got_959_ = lean_byte_array_fget(v_array_950_, v_idx_951_);
v___x_960_ = lean_uint8_dec_eq(v_got_959_, v___x_958_);
if (v___x_960_ == 0)
{
lean_object* v___x_961_; lean_object* v___x_963_; 
lean_dec(v_res_946_);
lean_dec(v_res_941_);
lean_dec(v_res_913_);
lean_dec(v_ident_909_);
v___x_961_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseZero___closed__1));
if (v_isShared_949_ == 0)
{
lean_ctor_set_tag(v___x_948_, 1);
lean_ctor_set(v___x_948_, 1, v___x_961_);
v___x_963_ = v___x_948_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_pos_945_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v___x_961_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
else
{
lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_1002_; 
lean_inc(v_idx_951_);
lean_inc_ref(v_array_950_);
v_isSharedCheck_1002_ = !lean_is_exclusive(v_pos_945_);
if (v_isSharedCheck_1002_ == 0)
{
lean_object* v_unused_1003_; lean_object* v_unused_1004_; 
v_unused_1003_ = lean_ctor_get(v_pos_945_, 1);
lean_dec(v_unused_1003_);
v_unused_1004_ = lean_ctor_get(v_pos_945_, 0);
lean_dec(v_unused_1004_);
v___x_966_ = v_pos_945_;
v_isShared_967_ = v_isSharedCheck_1002_;
goto v_resetjp_965_;
}
else
{
lean_dec(v_pos_945_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_1002_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_968_; lean_object* v___x_970_; 
v___x_968_ = lean_nat_add(v_idx_951_, v___x_935_);
lean_dec(v_idx_951_);
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 1, v___x_968_);
v___x_970_ = v___x_966_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_array_950_);
lean_ctor_set(v_reuseFailAlloc_1001_, 1, v___x_968_);
v___x_970_ = v_reuseFailAlloc_1001_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
lean_object* v___x_971_; uint8_t v___x_972_; 
v___x_971_ = lean_array_get_size(v_res_913_);
v___x_972_ = lean_nat_dec_eq(v___x_971_, v___x_942_);
if (v___x_972_ == 0)
{
lean_object* v___x_973_; uint8_t v___x_974_; 
v___x_973_ = lean_array_get_size(v_res_946_);
v___x_974_ = lean_nat_dec_eq(v___x_973_, v___x_942_);
if (v___x_974_ == 0)
{
lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_978_; 
v___x_975_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot(v_res_913_);
v___x_976_ = lean_alloc_ctor(2, 5, 0);
lean_ctor_set(v___x_976_, 0, v_ident_909_);
lean_ctor_set(v___x_976_, 1, v_res_913_);
lean_ctor_set(v___x_976_, 2, v___x_975_);
lean_ctor_set(v___x_976_, 3, v_res_941_);
lean_ctor_set(v___x_976_, 4, v_res_946_);
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 1, v___x_976_);
lean_ctor_set(v___x_948_, 0, v___x_970_);
v___x_978_ = v___x_948_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_970_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v___x_976_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
else
{
lean_object* v___x_980_; uint8_t v___x_981_; 
lean_dec(v_res_946_);
v___x_980_ = lean_array_get_size(v_res_941_);
v___x_981_ = lean_nat_dec_eq(v___x_980_, v___x_942_);
if (v___x_981_ == 0)
{
lean_object* v___x_982_; lean_object* v___x_984_; 
v___x_982_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_982_, 0, v_ident_909_);
lean_ctor_set(v___x_982_, 1, v_res_913_);
lean_ctor_set(v___x_982_, 2, v_res_941_);
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 1, v___x_982_);
lean_ctor_set(v___x_948_, 0, v___x_970_);
v___x_984_ = v___x_948_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v___x_970_);
lean_ctor_set(v_reuseFailAlloc_985_, 1, v___x_982_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
else
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_989_; 
lean_dec(v_res_941_);
v___x_986_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot(v_res_913_);
v___x_987_ = lean_alloc_ctor(2, 5, 0);
lean_ctor_set(v___x_987_, 0, v_ident_909_);
lean_ctor_set(v___x_987_, 1, v_res_913_);
lean_ctor_set(v___x_987_, 2, v___x_986_);
lean_ctor_set(v___x_987_, 3, v___x_943_);
lean_ctor_set(v___x_987_, 4, v___x_943_);
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 1, v___x_987_);
lean_ctor_set(v___x_948_, 0, v___x_970_);
v___x_989_ = v___x_948_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v___x_970_);
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
else
{
lean_object* v___x_991_; uint8_t v___x_992_; 
lean_dec(v_res_913_);
v___x_991_ = lean_array_get_size(v_res_946_);
lean_dec(v_res_946_);
v___x_992_ = lean_nat_dec_eq(v___x_991_, v___x_942_);
if (v___x_992_ == 0)
{
lean_object* v___x_993_; lean_object* v___x_995_; 
lean_dec(v_res_941_);
lean_dec(v_ident_909_);
v___x_993_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__2));
if (v_isShared_949_ == 0)
{
lean_ctor_set_tag(v___x_948_, 1);
lean_ctor_set(v___x_948_, 1, v___x_993_);
lean_ctor_set(v___x_948_, 0, v___x_970_);
v___x_995_ = v___x_948_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v___x_970_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v___x_993_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
else
{
lean_object* v___x_997_; lean_object* v___x_999_; 
v___x_997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_997_, 0, v_ident_909_);
lean_ctor_set(v___x_997_, 1, v_res_941_);
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 1, v___x_997_);
lean_ctor_set(v___x_948_, 0, v___x_970_);
v___x_999_ = v___x_948_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v___x_970_);
lean_ctor_set(v_reuseFailAlloc_1000_, 1, v___x_997_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
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
lean_object* v_pos_1006_; lean_object* v_err_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
lean_dec(v_res_941_);
lean_dec(v_res_913_);
lean_dec(v_ident_909_);
v_pos_1006_ = lean_ctor_get(v___x_944_, 0);
v_err_1007_ = lean_ctor_get(v___x_944_, 1);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_944_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_err_1007_);
lean_inc(v_pos_1006_);
lean_dec(v___x_944_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_pos_1006_);
lean_ctor_set(v_reuseFailAlloc_1013_, 1, v_err_1007_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
}
else
{
lean_object* v_pos_1015_; lean_object* v_err_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
lean_dec(v_res_913_);
lean_dec(v_ident_909_);
v_pos_1015_ = lean_ctor_get(v___x_939_, 0);
v_err_1016_ = lean_ctor_get(v___x_939_, 1);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_939_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_err_1016_);
lean_inc(v_pos_1015_);
lean_dec(v___x_939_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_pos_1015_);
lean_ctor_set(v_reuseFailAlloc_1022_, 1, v_err_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
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
lean_object* v_pos_1029_; lean_object* v_err_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1037_; 
lean_dec(v_ident_909_);
v_pos_1029_ = lean_ctor_get(v___x_911_, 0);
v_err_1030_ = lean_ctor_get(v___x_911_, 1);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1032_ = v___x_911_;
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_err_1030_);
lean_inc(v_pos_1029_);
lean_dec(v___x_911_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1035_; 
if (v_isShared_1033_ == 0)
{
v___x_1035_ = v___x_1032_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_pos_1029_);
lean_ctor_set(v_reuseFailAlloc_1036_, 1, v_err_1030_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseAction(lean_object* v_a_1038_){
_start:
{
lean_object* v_array_1042_; lean_object* v_idx_1043_; lean_object* v___x_1044_; uint8_t v___x_1045_; 
v_array_1042_ = lean_ctor_get(v_a_1038_, 0);
v_idx_1043_ = lean_ctor_get(v_a_1038_, 1);
v___x_1044_ = lean_byte_array_size(v_array_1042_);
v___x_1045_ = lean_nat_dec_lt(v_idx_1043_, v___x_1044_);
if (v___x_1045_ == 0)
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = lean_box(0);
v___x_1047_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1047_, 0, v_a_1038_);
lean_ctor_set(v___x_1047_, 1, v___x_1046_);
return v___x_1047_;
}
else
{
uint8_t v_c_1048_; uint8_t v___x_1049_; uint8_t v___x_1050_; 
v_c_1048_ = lean_byte_array_fget(v_array_1042_, v_idx_1043_);
v___x_1049_ = 48;
v___x_1050_ = lean_uint8_dec_le(v___x_1049_, v_c_1048_);
if (v___x_1050_ == 0)
{
goto v___jp_1039_;
}
else
{
uint8_t v___x_1051_; uint8_t v___x_1052_; 
v___x_1051_ = 57;
v___x_1052_ = lean_uint8_dec_le(v_c_1048_, v___x_1051_);
if (v___x_1052_ == 0)
{
goto v___jp_1039_;
}
else
{
lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1113_; 
lean_inc(v_idx_1043_);
lean_inc_ref(v_array_1042_);
v_isSharedCheck_1113_ = !lean_is_exclusive(v_a_1038_);
if (v_isSharedCheck_1113_ == 0)
{
lean_object* v_unused_1114_; lean_object* v_unused_1115_; 
v_unused_1114_ = lean_ctor_get(v_a_1038_, 1);
lean_dec(v_unused_1114_);
v_unused_1115_ = lean_ctor_get(v_a_1038_, 0);
lean_dec(v_unused_1115_);
v___x_1054_ = v_a_1038_;
v_isShared_1055_ = v_isSharedCheck_1113_;
goto v_resetjp_1053_;
}
else
{
lean_dec(v_a_1038_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1113_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v_it_x27_1059_; 
v___x_1056_ = lean_unsigned_to_nat(1u);
v___x_1057_ = lean_nat_add(v_idx_1043_, v___x_1056_);
lean_dec(v_idx_1043_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 1, v___x_1057_);
v_it_x27_1059_ = v___x_1054_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v_array_1042_);
lean_ctor_set(v_reuseFailAlloc_1112_, 1, v___x_1057_);
v_it_x27_1059_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
uint32_t v___x_1060_; uint8_t v___x_1061_; uint8_t v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v_fst_1065_; lean_object* v_snd_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1111_; 
v___x_1060_ = lean_uint8_to_uint32(v_c_1048_);
v___x_1061_ = lean_uint32_to_uint8(v___x_1060_);
v___x_1062_ = lean_uint8_sub(v___x_1061_, v___x_1049_);
v___x_1063_ = lean_uint8_to_nat(v___x_1062_);
v___x_1064_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_1059_, v___x_1063_);
v_fst_1065_ = lean_ctor_get(v___x_1064_, 0);
v_snd_1066_ = lean_ctor_get(v___x_1064_, 1);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1064_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1068_ = v___x_1064_;
v_isShared_1069_ = v_isSharedCheck_1111_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_snd_1066_);
lean_inc(v_fst_1065_);
lean_dec(v___x_1064_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1111_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1070_; uint8_t v___x_1071_; 
v___x_1070_ = lean_unsigned_to_nat(0u);
v___x_1071_ = lean_nat_dec_eq(v_fst_1065_, v___x_1070_);
if (v___x_1071_ == 0)
{
lean_object* v_array_1072_; lean_object* v_idx_1073_; lean_object* v___x_1074_; uint8_t v___x_1075_; 
v_array_1072_ = lean_ctor_get(v_snd_1066_, 0);
v_idx_1073_ = lean_ctor_get(v_snd_1066_, 1);
v___x_1074_ = lean_byte_array_size(v_array_1072_);
v___x_1075_ = lean_nat_dec_lt(v_idx_1073_, v___x_1074_);
if (v___x_1075_ == 0)
{
lean_object* v___x_1076_; lean_object* v___x_1078_; 
lean_dec(v_fst_1065_);
v___x_1076_ = lean_box(0);
if (v_isShared_1069_ == 0)
{
lean_ctor_set_tag(v___x_1068_, 1);
lean_ctor_set(v___x_1068_, 1, v___x_1076_);
lean_ctor_set(v___x_1068_, 0, v_snd_1066_);
v___x_1078_ = v___x_1068_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_snd_1066_);
lean_ctor_set(v_reuseFailAlloc_1079_, 1, v___x_1076_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
else
{
uint8_t v___x_1080_; uint8_t v_got_1081_; uint8_t v___x_1082_; 
v___x_1080_ = 32;
v_got_1081_ = lean_byte_array_fget(v_array_1072_, v_idx_1073_);
v___x_1082_ = lean_uint8_dec_eq(v_got_1081_, v___x_1080_);
if (v___x_1082_ == 0)
{
lean_object* v___x_1083_; lean_object* v___x_1085_; 
lean_dec(v_fst_1065_);
v___x_1083_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__1));
if (v_isShared_1069_ == 0)
{
lean_ctor_set_tag(v___x_1068_, 1);
lean_ctor_set(v___x_1068_, 1, v___x_1083_);
lean_ctor_set(v___x_1068_, 0, v_snd_1066_);
v___x_1085_ = v___x_1068_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_snd_1066_);
lean_ctor_set(v_reuseFailAlloc_1086_, 1, v___x_1083_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
else
{
lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1104_; 
lean_inc(v_idx_1073_);
lean_inc_ref(v_array_1072_);
v_isSharedCheck_1104_ = !lean_is_exclusive(v_snd_1066_);
if (v_isSharedCheck_1104_ == 0)
{
lean_object* v_unused_1105_; lean_object* v_unused_1106_; 
v_unused_1105_ = lean_ctor_get(v_snd_1066_, 1);
lean_dec(v_unused_1105_);
v_unused_1106_ = lean_ctor_get(v_snd_1066_, 0);
lean_dec(v_unused_1106_);
v___x_1088_ = v_snd_1066_;
v_isShared_1089_ = v_isSharedCheck_1104_;
goto v_resetjp_1087_;
}
else
{
lean_dec(v_snd_1066_);
v___x_1088_ = lean_box(0);
v_isShared_1089_ = v_isSharedCheck_1104_;
goto v_resetjp_1087_;
}
v_resetjp_1087_:
{
lean_object* v___x_1090_; lean_object* v___x_1092_; 
v___x_1090_ = lean_nat_add(v_idx_1073_, v___x_1056_);
lean_dec(v_idx_1073_);
lean_inc(v___x_1090_);
lean_inc_ref(v_array_1072_);
if (v_isShared_1089_ == 0)
{
lean_ctor_set(v___x_1088_, 1, v___x_1090_);
v___x_1092_ = v___x_1088_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v_array_1072_);
lean_ctor_set(v_reuseFailAlloc_1103_, 1, v___x_1090_);
v___x_1092_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
uint8_t v___x_1093_; 
v___x_1093_ = lean_nat_dec_lt(v___x_1090_, v___x_1074_);
if (v___x_1093_ == 0)
{
lean_object* v___x_1094_; lean_object* v___x_1096_; 
lean_dec(v___x_1090_);
lean_dec_ref(v_array_1072_);
lean_dec(v_fst_1065_);
v___x_1094_ = lean_box(0);
if (v_isShared_1069_ == 0)
{
lean_ctor_set_tag(v___x_1068_, 1);
lean_ctor_set(v___x_1068_, 1, v___x_1094_);
lean_ctor_set(v___x_1068_, 0, v___x_1092_);
v___x_1096_ = v___x_1068_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v___x_1092_);
lean_ctor_set(v_reuseFailAlloc_1097_, 1, v___x_1094_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
return v___x_1096_;
}
}
else
{
uint8_t v___x_1098_; uint8_t v___x_1099_; uint8_t v___x_1100_; 
lean_del_object(v___x_1068_);
v___x_1098_ = lean_byte_array_fget(v_array_1072_, v___x_1090_);
lean_dec(v___x_1090_);
lean_dec_ref(v_array_1072_);
v___x_1099_ = 100;
v___x_1100_ = lean_uint8_dec_eq(v___x_1098_, v___x_1099_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; 
v___x_1101_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat(v_fst_1065_, v___x_1092_);
return v___x_1101_;
}
else
{
lean_object* v___x_1102_; 
lean_dec(v_fst_1065_);
v___x_1102_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseDelete(v___x_1092_);
return v___x_1102_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1107_; lean_object* v___x_1109_; 
lean_dec(v_fst_1065_);
v___x_1107_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
if (v_isShared_1069_ == 0)
{
lean_ctor_set_tag(v___x_1068_, 1);
lean_ctor_set(v___x_1068_, 1, v___x_1107_);
lean_ctor_set(v___x_1068_, 0, v_snd_1066_);
v___x_1109_ = v___x_1068_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_snd_1066_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v___x_1107_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
}
}
}
}
v___jp_1039_:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1040_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
v___x_1041_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1041_, 0, v_a_1038_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
return v___x_1041_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go_spec__0(lean_object* v_acc_1119_, lean_object* v_a_1120_){
_start:
{
lean_object* v_array_1121_; lean_object* v_idx_1122_; lean_object* v_pos_1124_; lean_object* v_idx_1125_; lean_object* v_err_1126_; lean_object* v___x_1132_; uint8_t v___x_1133_; 
v_array_1121_ = lean_ctor_get(v_a_1120_, 0);
v_idx_1122_ = lean_ctor_get(v_a_1120_, 1);
lean_inc(v_idx_1122_);
v___x_1132_ = lean_byte_array_size(v_array_1121_);
v___x_1133_ = lean_nat_dec_lt(v_idx_1122_, v___x_1132_);
if (v___x_1133_ == 0)
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_box(0);
lean_inc(v_idx_1122_);
v_pos_1124_ = v_a_1120_;
v_idx_1125_ = v_idx_1122_;
v_err_1126_ = v___x_1134_;
goto v___jp_1123_;
}
else
{
uint8_t v_c_1135_; uint8_t v___x_1136_; uint8_t v___x_1137_; 
v_c_1135_ = lean_byte_array_fget(v_array_1121_, v_idx_1122_);
v___x_1136_ = 10;
v___x_1137_ = lean_uint8_dec_eq(v_c_1135_, v___x_1136_);
if (v___x_1137_ == 0)
{
uint8_t v___x_1138_; uint8_t v___x_1139_; 
v___x_1138_ = 13;
v___x_1139_ = lean_uint8_dec_eq(v_c_1135_, v___x_1138_);
if (v___x_1139_ == 0)
{
lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1151_; 
lean_inc_ref(v_array_1121_);
v_isSharedCheck_1151_ = !lean_is_exclusive(v_a_1120_);
if (v_isSharedCheck_1151_ == 0)
{
lean_object* v_unused_1152_; lean_object* v_unused_1153_; 
v_unused_1152_ = lean_ctor_get(v_a_1120_, 1);
lean_dec(v_unused_1152_);
v_unused_1153_ = lean_ctor_get(v_a_1120_, 0);
lean_dec(v_unused_1153_);
v___x_1141_ = v_a_1120_;
v_isShared_1142_ = v_isSharedCheck_1151_;
goto v_resetjp_1140_;
}
else
{
lean_dec(v_a_1120_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1151_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v_it_x27_1146_; 
v___x_1143_ = lean_unsigned_to_nat(1u);
v___x_1144_ = lean_nat_add(v_idx_1122_, v___x_1143_);
lean_dec(v_idx_1122_);
if (v_isShared_1142_ == 0)
{
lean_ctor_set(v___x_1141_, 1, v___x_1144_);
v_it_x27_1146_ = v___x_1141_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v_array_1121_);
lean_ctor_set(v_reuseFailAlloc_1150_, 1, v___x_1144_);
v_it_x27_1146_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1147_ = lean_box(v_c_1135_);
v___x_1148_ = lean_array_push(v_acc_1119_, v___x_1147_);
v_acc_1119_ = v___x_1148_;
v_a_1120_ = v_it_x27_1146_;
goto _start;
}
}
}
else
{
goto v___jp_1130_;
}
}
else
{
goto v___jp_1130_;
}
}
v___jp_1123_:
{
uint8_t v___x_1127_; 
v___x_1127_ = lean_nat_dec_eq(v_idx_1122_, v_idx_1125_);
lean_dec(v_idx_1125_);
lean_dec(v_idx_1122_);
if (v___x_1127_ == 0)
{
lean_object* v___x_1128_; 
lean_dec_ref(v_acc_1119_);
lean_inc(v_err_1126_);
v___x_1128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1128_, 0, v_pos_1124_);
lean_ctor_set(v___x_1128_, 1, v_err_1126_);
return v___x_1128_;
}
else
{
lean_object* v___x_1129_; 
v___x_1129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1129_, 0, v_pos_1124_);
lean_ctor_set(v___x_1129_, 1, v_acc_1119_);
return v___x_1129_;
}
}
v___jp_1130_:
{
lean_object* v___x_1131_; 
v___x_1131_ = ((lean_object*)(l_Std_Internal_Parsec_manyCore___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go_spec__0___closed__1));
lean_inc(v_idx_1122_);
v_pos_1124_ = v_a_1120_;
v_idx_1125_ = v_idx_1122_;
v_err_1126_ = v___x_1131_;
goto v___jp_1123_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go(lean_object* v_actions_1156_, lean_object* v_a_1157_){
_start:
{
lean_object* v_pos_1159_; lean_object* v_array_1160_; lean_object* v_idx_1161_; lean_object* v_pos_1167_; lean_object* v_array_1170_; lean_object* v_idx_1171_; lean_object* v___x_1172_; uint8_t v___x_1173_; 
v_array_1170_ = lean_ctor_get(v_a_1157_, 0);
v_idx_1171_ = lean_ctor_get(v_a_1157_, 1);
v___x_1172_ = lean_byte_array_size(v_array_1170_);
v___x_1173_ = lean_nat_dec_lt(v_idx_1171_, v___x_1172_);
if (v___x_1173_ == 0)
{
lean_object* v___x_1174_; lean_object* v___x_1175_; 
lean_dec_ref(v_actions_1156_);
v___x_1174_ = lean_box(0);
v___x_1175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1175_, 0, v_a_1157_);
lean_ctor_set(v___x_1175_, 1, v___x_1174_);
return v___x_1175_;
}
else
{
uint8_t v___x_1176_; uint8_t v___x_1177_; uint8_t v___x_1178_; 
v___x_1176_ = lean_byte_array_fget(v_array_1170_, v_idx_1171_);
v___x_1177_ = 99;
v___x_1178_ = lean_uint8_dec_eq(v___x_1176_, v___x_1177_);
if (v___x_1178_ == 0)
{
lean_object* v___x_1179_; 
v___x_1179_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseAction(v_a_1157_);
if (lean_obj_tag(v___x_1179_) == 0)
{
lean_object* v_pos_1180_; lean_object* v_res_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1249_; 
v_pos_1180_ = lean_ctor_get(v___x_1179_, 0);
v_res_1181_ = lean_ctor_get(v___x_1179_, 1);
v_isSharedCheck_1249_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1249_ == 0)
{
v___x_1183_ = v___x_1179_;
v_isShared_1184_ = v_isSharedCheck_1249_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_res_1181_);
lean_inc(v_pos_1180_);
lean_dec(v___x_1179_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1249_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v_pos_1186_; lean_object* v_array_1187_; lean_object* v_idx_1188_; lean_object* v_pos_1197_; lean_object* v_array_1200_; lean_object* v_idx_1201_; lean_object* v___y_1203_; lean_object* v_pos_1204_; lean_object* v_idx_1205_; lean_object* v___x_1229_; uint8_t v___x_1230_; 
v_array_1200_ = lean_ctor_get(v_pos_1180_, 0);
v_idx_1201_ = lean_ctor_get(v_pos_1180_, 1);
lean_inc(v_idx_1201_);
v___x_1229_ = lean_byte_array_size(v_array_1200_);
v___x_1230_ = lean_nat_dec_lt(v_idx_1201_, v___x_1229_);
if (v___x_1230_ == 0)
{
lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1231_ = lean_box(0);
lean_inc(v_pos_1180_);
v___x_1232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1232_, 0, v_pos_1180_);
lean_ctor_set(v___x_1232_, 1, v___x_1231_);
lean_inc(v_idx_1201_);
v___y_1203_ = v___x_1232_;
v_pos_1204_ = v_pos_1180_;
v_idx_1205_ = v_idx_1201_;
goto v___jp_1202_;
}
else
{
uint8_t v___x_1233_; uint8_t v_got_1234_; uint8_t v___x_1235_; 
v___x_1233_ = 10;
v_got_1234_ = lean_byte_array_fget(v_array_1200_, v_idx_1201_);
v___x_1235_ = lean_uint8_dec_eq(v_got_1234_, v___x_1233_);
if (v___x_1235_ == 0)
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1236_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__3));
lean_inc(v_pos_1180_);
v___x_1237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1237_, 0, v_pos_1180_);
lean_ctor_set(v___x_1237_, 1, v___x_1236_);
lean_inc(v_idx_1201_);
v___y_1203_ = v___x_1237_;
v_pos_1204_ = v_pos_1180_;
v_idx_1205_ = v_idx_1201_;
goto v___jp_1202_;
}
else
{
lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1246_; 
lean_inc_ref(v_array_1200_);
v_isSharedCheck_1246_ = !lean_is_exclusive(v_pos_1180_);
if (v_isSharedCheck_1246_ == 0)
{
lean_object* v_unused_1247_; lean_object* v_unused_1248_; 
v_unused_1247_ = lean_ctor_get(v_pos_1180_, 1);
lean_dec(v_unused_1247_);
v_unused_1248_ = lean_ctor_get(v_pos_1180_, 0);
lean_dec(v_unused_1248_);
v___x_1239_ = v_pos_1180_;
v_isShared_1240_ = v_isSharedCheck_1246_;
goto v_resetjp_1238_;
}
else
{
lean_dec(v_pos_1180_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1246_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1244_; 
v___x_1241_ = lean_unsigned_to_nat(1u);
v___x_1242_ = lean_nat_add(v_idx_1201_, v___x_1241_);
lean_dec(v_idx_1201_);
lean_inc(v___x_1242_);
lean_inc_ref(v_array_1200_);
if (v_isShared_1240_ == 0)
{
lean_ctor_set(v___x_1239_, 1, v___x_1242_);
v___x_1244_ = v___x_1239_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v_array_1200_);
lean_ctor_set(v_reuseFailAlloc_1245_, 1, v___x_1242_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
v_pos_1186_ = v___x_1244_;
v_array_1187_ = v_array_1200_;
v_idx_1188_ = v___x_1242_;
goto v___jp_1185_;
}
}
}
}
v___jp_1185_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; uint8_t v___x_1191_; 
v___x_1189_ = lean_array_push(v_actions_1156_, v_res_1181_);
v___x_1190_ = lean_byte_array_size(v_array_1187_);
lean_dec_ref(v_array_1187_);
v___x_1191_ = lean_nat_dec_lt(v_idx_1188_, v___x_1190_);
lean_dec(v_idx_1188_);
if (v___x_1191_ == 0)
{
lean_object* v___x_1193_; 
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 1, v___x_1189_);
lean_ctor_set(v___x_1183_, 0, v_pos_1186_);
v___x_1193_ = v___x_1183_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v_pos_1186_);
lean_ctor_set(v_reuseFailAlloc_1194_, 1, v___x_1189_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
else
{
lean_del_object(v___x_1183_);
v_actions_1156_ = v___x_1189_;
v_a_1157_ = v_pos_1186_;
goto _start;
}
}
v___jp_1196_:
{
lean_object* v_array_1198_; lean_object* v_idx_1199_; 
v_array_1198_ = lean_ctor_get(v_pos_1197_, 0);
lean_inc_ref(v_array_1198_);
v_idx_1199_ = lean_ctor_get(v_pos_1197_, 1);
lean_inc(v_idx_1199_);
v_pos_1186_ = v_pos_1197_;
v_array_1187_ = v_array_1198_;
v_idx_1188_ = v_idx_1199_;
goto v___jp_1185_;
}
v___jp_1202_:
{
uint8_t v___x_1206_; 
v___x_1206_ = lean_nat_dec_eq(v_idx_1201_, v_idx_1205_);
lean_dec(v_idx_1205_);
lean_dec(v_idx_1201_);
if (v___x_1206_ == 0)
{
lean_dec_ref(v_pos_1204_);
if (lean_obj_tag(v___y_1203_) == 0)
{
lean_object* v_pos_1207_; 
v_pos_1207_ = lean_ctor_get(v___y_1203_, 0);
lean_inc(v_pos_1207_);
lean_dec_ref_known(v___y_1203_, 2);
v_pos_1197_ = v_pos_1207_;
goto v___jp_1196_;
}
else
{
lean_object* v_pos_1208_; lean_object* v_err_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
lean_del_object(v___x_1183_);
lean_dec(v_res_1181_);
lean_dec_ref(v_actions_1156_);
v_pos_1208_ = lean_ctor_get(v___y_1203_, 0);
v_err_1209_ = lean_ctor_get(v___y_1203_, 1);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___y_1203_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___y_1203_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_err_1209_);
lean_inc(v_pos_1208_);
lean_dec(v___y_1203_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1214_; 
if (v_isShared_1212_ == 0)
{
v___x_1214_ = v___x_1211_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_pos_1208_);
lean_ctor_set(v_reuseFailAlloc_1215_, 1, v_err_1209_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
}
else
{
lean_object* v_utf8_1217_; lean_object* v___x_1218_; 
lean_dec_ref(v___y_1203_);
v_utf8_1217_ = lean_obj_once(&l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1, &l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1_once, _init_l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1);
v___x_1218_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_1217_, v_pos_1204_);
if (lean_obj_tag(v___x_1218_) == 0)
{
lean_object* v_pos_1219_; 
v_pos_1219_ = lean_ctor_get(v___x_1218_, 0);
lean_inc(v_pos_1219_);
lean_dec_ref_known(v___x_1218_, 2);
v_pos_1197_ = v_pos_1219_;
goto v___jp_1196_;
}
else
{
lean_object* v_pos_1220_; lean_object* v_err_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1228_; 
lean_del_object(v___x_1183_);
lean_dec(v_res_1181_);
lean_dec_ref(v_actions_1156_);
v_pos_1220_ = lean_ctor_get(v___x_1218_, 0);
v_err_1221_ = lean_ctor_get(v___x_1218_, 1);
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1218_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1223_ = v___x_1218_;
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_err_1221_);
lean_inc(v_pos_1220_);
lean_dec(v___x_1218_);
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
else
{
lean_object* v_pos_1250_; lean_object* v_err_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1258_; 
lean_dec_ref(v_actions_1156_);
v_pos_1250_ = lean_ctor_get(v___x_1179_, 0);
v_err_1251_ = lean_ctor_get(v___x_1179_, 1);
v_isSharedCheck_1258_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1258_ == 0)
{
v___x_1253_ = v___x_1179_;
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_err_1251_);
lean_inc(v_pos_1250_);
lean_dec(v___x_1179_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1256_; 
if (v_isShared_1254_ == 0)
{
v___x_1256_ = v___x_1253_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v_pos_1250_);
lean_ctor_set(v_reuseFailAlloc_1257_, 1, v_err_1251_);
v___x_1256_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
return v___x_1256_;
}
}
}
}
else
{
lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1259_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go___closed__0));
v___x_1260_ = l_Std_Internal_Parsec_manyCore___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go_spec__0(v___x_1259_, v_a_1157_);
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v_pos_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1318_; 
v_pos_1261_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1318_ == 0)
{
lean_object* v_unused_1319_; 
v_unused_1319_ = lean_ctor_get(v___x_1260_, 1);
lean_dec(v_unused_1319_);
v___x_1263_ = v___x_1260_;
v_isShared_1264_ = v_isSharedCheck_1318_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_pos_1261_);
lean_dec(v___x_1260_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1318_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v_array_1265_; lean_object* v_idx_1266_; lean_object* v___y_1268_; lean_object* v_pos_1269_; lean_object* v_idx_1270_; lean_object* v___x_1294_; uint8_t v___x_1295_; 
v_array_1265_ = lean_ctor_get(v_pos_1261_, 0);
v_idx_1266_ = lean_ctor_get(v_pos_1261_, 1);
lean_inc(v_idx_1266_);
v___x_1294_ = lean_byte_array_size(v_array_1265_);
v___x_1295_ = lean_nat_dec_lt(v_idx_1266_, v___x_1294_);
if (v___x_1295_ == 0)
{
lean_object* v___x_1296_; lean_object* v___x_1298_; 
v___x_1296_ = lean_box(0);
lean_inc(v_pos_1261_);
if (v_isShared_1264_ == 0)
{
lean_ctor_set_tag(v___x_1263_, 1);
lean_ctor_set(v___x_1263_, 1, v___x_1296_);
v___x_1298_ = v___x_1263_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_pos_1261_);
lean_ctor_set(v_reuseFailAlloc_1299_, 1, v___x_1296_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
lean_inc(v_idx_1266_);
v___y_1268_ = v___x_1298_;
v_pos_1269_ = v_pos_1261_;
v_idx_1270_ = v_idx_1266_;
goto v___jp_1267_;
}
}
else
{
uint8_t v___x_1300_; uint8_t v_got_1301_; uint8_t v___x_1302_; 
v___x_1300_ = 10;
v_got_1301_ = lean_byte_array_fget(v_array_1265_, v_idx_1266_);
v___x_1302_ = lean_uint8_dec_eq(v_got_1301_, v___x_1300_);
if (v___x_1302_ == 0)
{
lean_object* v___x_1303_; lean_object* v___x_1305_; 
v___x_1303_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__3));
lean_inc(v_pos_1261_);
if (v_isShared_1264_ == 0)
{
lean_ctor_set_tag(v___x_1263_, 1);
lean_ctor_set(v___x_1263_, 1, v___x_1303_);
v___x_1305_ = v___x_1263_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v_pos_1261_);
lean_ctor_set(v_reuseFailAlloc_1306_, 1, v___x_1303_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
lean_inc(v_idx_1266_);
v___y_1268_ = v___x_1305_;
v_pos_1269_ = v_pos_1261_;
v_idx_1270_ = v_idx_1266_;
goto v___jp_1267_;
}
}
else
{
lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1315_; 
lean_inc_ref(v_array_1265_);
lean_del_object(v___x_1263_);
v_isSharedCheck_1315_ = !lean_is_exclusive(v_pos_1261_);
if (v_isSharedCheck_1315_ == 0)
{
lean_object* v_unused_1316_; lean_object* v_unused_1317_; 
v_unused_1316_ = lean_ctor_get(v_pos_1261_, 1);
lean_dec(v_unused_1316_);
v_unused_1317_ = lean_ctor_get(v_pos_1261_, 0);
lean_dec(v_unused_1317_);
v___x_1308_ = v_pos_1261_;
v_isShared_1309_ = v_isSharedCheck_1315_;
goto v_resetjp_1307_;
}
else
{
lean_dec(v_pos_1261_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1315_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1313_; 
v___x_1310_ = lean_unsigned_to_nat(1u);
v___x_1311_ = lean_nat_add(v_idx_1266_, v___x_1310_);
lean_dec(v_idx_1266_);
lean_inc(v___x_1311_);
lean_inc_ref(v_array_1265_);
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 1, v___x_1311_);
v___x_1313_ = v___x_1308_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v_array_1265_);
lean_ctor_set(v_reuseFailAlloc_1314_, 1, v___x_1311_);
v___x_1313_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
v_pos_1159_ = v___x_1313_;
v_array_1160_ = v_array_1265_;
v_idx_1161_ = v___x_1311_;
goto v___jp_1158_;
}
}
}
}
v___jp_1267_:
{
uint8_t v___x_1271_; 
v___x_1271_ = lean_nat_dec_eq(v_idx_1266_, v_idx_1270_);
lean_dec(v_idx_1270_);
lean_dec(v_idx_1266_);
if (v___x_1271_ == 0)
{
lean_dec_ref(v_pos_1269_);
if (lean_obj_tag(v___y_1268_) == 0)
{
lean_object* v_pos_1272_; 
v_pos_1272_ = lean_ctor_get(v___y_1268_, 0);
lean_inc(v_pos_1272_);
lean_dec_ref_known(v___y_1268_, 2);
v_pos_1167_ = v_pos_1272_;
goto v___jp_1166_;
}
else
{
lean_object* v_pos_1273_; lean_object* v_err_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1281_; 
lean_dec_ref(v_actions_1156_);
v_pos_1273_ = lean_ctor_get(v___y_1268_, 0);
v_err_1274_ = lean_ctor_get(v___y_1268_, 1);
v_isSharedCheck_1281_ = !lean_is_exclusive(v___y_1268_);
if (v_isSharedCheck_1281_ == 0)
{
v___x_1276_ = v___y_1268_;
v_isShared_1277_ = v_isSharedCheck_1281_;
goto v_resetjp_1275_;
}
else
{
lean_inc(v_err_1274_);
lean_inc(v_pos_1273_);
lean_dec(v___y_1268_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1281_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v___x_1279_; 
if (v_isShared_1277_ == 0)
{
v___x_1279_ = v___x_1276_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v_pos_1273_);
lean_ctor_set(v_reuseFailAlloc_1280_, 1, v_err_1274_);
v___x_1279_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
return v___x_1279_;
}
}
}
}
else
{
lean_object* v_utf8_1282_; lean_object* v___x_1283_; 
lean_dec_ref(v___y_1268_);
v_utf8_1282_ = lean_obj_once(&l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1, &l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1_once, _init_l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1);
v___x_1283_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_1282_, v_pos_1269_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v_pos_1284_; 
v_pos_1284_ = lean_ctor_get(v___x_1283_, 0);
lean_inc(v_pos_1284_);
lean_dec_ref_known(v___x_1283_, 2);
v_pos_1167_ = v_pos_1284_;
goto v___jp_1166_;
}
else
{
lean_object* v_pos_1285_; lean_object* v_err_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1293_; 
lean_dec_ref(v_actions_1156_);
v_pos_1285_ = lean_ctor_get(v___x_1283_, 0);
v_err_1286_ = lean_ctor_get(v___x_1283_, 1);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1288_ = v___x_1283_;
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_err_1286_);
lean_inc(v_pos_1285_);
lean_dec(v___x_1283_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1291_; 
if (v_isShared_1289_ == 0)
{
v___x_1291_ = v___x_1288_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_pos_1285_);
lean_ctor_set(v_reuseFailAlloc_1292_, 1, v_err_1286_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
}
}
}
}
else
{
lean_object* v_pos_1320_; lean_object* v_err_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1328_; 
lean_dec_ref(v_actions_1156_);
v_pos_1320_ = lean_ctor_get(v___x_1260_, 0);
v_err_1321_ = lean_ctor_get(v___x_1260_, 1);
v_isSharedCheck_1328_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1323_ = v___x_1260_;
v_isShared_1324_ = v_isSharedCheck_1328_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_err_1321_);
lean_inc(v_pos_1320_);
lean_dec(v___x_1260_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1328_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1326_; 
if (v_isShared_1324_ == 0)
{
v___x_1326_ = v___x_1323_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_pos_1320_);
lean_ctor_set(v_reuseFailAlloc_1327_, 1, v_err_1321_);
v___x_1326_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
return v___x_1326_;
}
}
}
}
}
v___jp_1158_:
{
lean_object* v___x_1162_; uint8_t v___x_1163_; 
v___x_1162_ = lean_byte_array_size(v_array_1160_);
lean_dec_ref(v_array_1160_);
v___x_1163_ = lean_nat_dec_lt(v_idx_1161_, v___x_1162_);
lean_dec(v_idx_1161_);
if (v___x_1163_ == 0)
{
lean_object* v___x_1164_; 
v___x_1164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1164_, 0, v_pos_1159_);
lean_ctor_set(v___x_1164_, 1, v_actions_1156_);
return v___x_1164_;
}
else
{
v_a_1157_ = v_pos_1159_;
goto _start;
}
}
v___jp_1166_:
{
lean_object* v_array_1168_; lean_object* v_idx_1169_; 
v_array_1168_ = lean_ctor_get(v_pos_1167_, 0);
lean_inc_ref(v_array_1168_);
v_idx_1169_ = lean_ctor_get(v_pos_1167_, 1);
lean_inc(v_idx_1169_);
v_pos_1159_ = v_pos_1167_;
v_array_1160_ = v_array_1168_;
v_idx_1161_ = v_idx_1169_;
goto v___jp_1158_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions(lean_object* v_a_1331_){
_start:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1332_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions___closed__0));
v___x_1333_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go(v___x_1332_, v_a_1331_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero(lean_object* v_a_1337_){
_start:
{
lean_object* v_array_1338_; lean_object* v_idx_1339_; lean_object* v___x_1340_; uint8_t v___x_1341_; 
v_array_1338_ = lean_ctor_get(v_a_1337_, 0);
v_idx_1339_ = lean_ctor_get(v_a_1337_, 1);
v___x_1340_ = lean_byte_array_size(v_array_1338_);
v___x_1341_ = lean_nat_dec_lt(v_idx_1339_, v___x_1340_);
if (v___x_1341_ == 0)
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = lean_box(0);
v___x_1343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1343_, 0, v_a_1337_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
return v___x_1343_;
}
else
{
uint8_t v___x_1344_; uint8_t v_got_1345_; uint8_t v___x_1346_; 
v___x_1344_ = 0;
v_got_1345_ = lean_byte_array_fget(v_array_1338_, v_idx_1339_);
v___x_1346_ = lean_uint8_dec_eq(v_got_1345_, v___x_1344_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1347_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero___closed__1));
v___x_1348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1348_, 0, v_a_1337_);
lean_ctor_set(v___x_1348_, 1, v___x_1347_);
return v___x_1348_;
}
else
{
lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1359_; 
lean_inc(v_idx_1339_);
lean_inc_ref(v_array_1338_);
v_isSharedCheck_1359_ = !lean_is_exclusive(v_a_1337_);
if (v_isSharedCheck_1359_ == 0)
{
lean_object* v_unused_1360_; lean_object* v_unused_1361_; 
v_unused_1360_ = lean_ctor_get(v_a_1337_, 1);
lean_dec(v_unused_1360_);
v_unused_1361_ = lean_ctor_get(v_a_1337_, 0);
lean_dec(v_unused_1361_);
v___x_1350_ = v_a_1337_;
v_isShared_1351_ = v_isSharedCheck_1359_;
goto v_resetjp_1349_;
}
else
{
lean_dec(v_a_1337_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1359_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1355_; 
v___x_1352_ = lean_unsigned_to_nat(1u);
v___x_1353_ = lean_nat_add(v_idx_1339_, v___x_1352_);
lean_dec(v_idx_1339_);
if (v_isShared_1351_ == 0)
{
lean_ctor_set(v___x_1350_, 1, v___x_1353_);
v___x_1355_ = v___x_1350_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_array_1338_);
lean_ctor_set(v_reuseFailAlloc_1358_, 1, v___x_1353_);
v___x_1355_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1356_ = lean_box(0);
v___x_1357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1355_);
lean_ctor_set(v___x_1357_, 1, v___x_1356_);
return v___x_1357_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go(uint64_t v_uidx_1368_, uint64_t v_shift_1369_, lean_object* v_a_1370_){
_start:
{
lean_object* v_array_1371_; lean_object* v_idx_1372_; lean_object* v___x_1373_; uint8_t v___x_1374_; 
v_array_1371_ = lean_ctor_get(v_a_1370_, 0);
v_idx_1372_ = lean_ctor_get(v_a_1370_, 1);
v___x_1373_ = lean_byte_array_size(v_array_1371_);
v___x_1374_ = lean_nat_dec_lt(v_idx_1372_, v___x_1373_);
if (v___x_1374_ == 0)
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1375_ = lean_box(0);
v___x_1376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1376_, 0, v_a_1370_);
lean_ctor_set(v___x_1376_, 1, v___x_1375_);
return v___x_1376_;
}
else
{
lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1422_; 
lean_inc(v_idx_1372_);
lean_inc_ref(v_array_1371_);
v_isSharedCheck_1422_ = !lean_is_exclusive(v_a_1370_);
if (v_isSharedCheck_1422_ == 0)
{
lean_object* v_unused_1423_; lean_object* v_unused_1424_; 
v_unused_1423_ = lean_ctor_get(v_a_1370_, 1);
lean_dec(v_unused_1423_);
v_unused_1424_ = lean_ctor_get(v_a_1370_, 0);
lean_dec(v_unused_1424_);
v___x_1378_ = v_a_1370_;
v_isShared_1379_ = v_isSharedCheck_1422_;
goto v_resetjp_1377_;
}
else
{
lean_dec(v_a_1370_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1422_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
uint8_t v_c_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v_it_x27_1384_; 
v_c_1380_ = lean_byte_array_fget(v_array_1371_, v_idx_1372_);
v___x_1381_ = lean_unsigned_to_nat(1u);
v___x_1382_ = lean_nat_add(v_idx_1372_, v___x_1381_);
lean_dec(v_idx_1372_);
if (v_isShared_1379_ == 0)
{
lean_ctor_set(v___x_1378_, 1, v___x_1382_);
v_it_x27_1384_ = v___x_1378_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_array_1371_);
lean_ctor_set(v_reuseFailAlloc_1421_, 1, v___x_1382_);
v_it_x27_1384_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
uint64_t v___x_1413_; uint8_t v___x_1414_; 
v___x_1413_ = 28ULL;
v___x_1414_ = lean_uint64_dec_eq(v_shift_1369_, v___x_1413_);
if (v___x_1414_ == 0)
{
goto v___jp_1385_;
}
else
{
uint8_t v___x_1415_; uint8_t v___x_1416_; uint8_t v___x_1417_; uint8_t v___x_1418_; 
v___x_1415_ = 240;
v___x_1416_ = lean_uint8_land(v_c_1380_, v___x_1415_);
v___x_1417_ = 0;
v___x_1418_ = lean_uint8_dec_eq(v___x_1416_, v___x_1417_);
if (v___x_1418_ == 0)
{
lean_object* v___x_1419_; lean_object* v___x_1420_; 
v___x_1419_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__3));
v___x_1420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1420_, 0, v_it_x27_1384_);
lean_ctor_set(v___x_1420_, 1, v___x_1419_);
return v___x_1420_;
}
else
{
goto v___jp_1385_;
}
}
v___jp_1385_:
{
uint8_t v___x_1386_; uint8_t v___x_1387_; 
v___x_1386_ = 0;
v___x_1387_ = lean_uint8_dec_eq(v_c_1380_, v___x_1386_);
if (v___x_1387_ == 0)
{
uint8_t v___x_1388_; uint8_t v___x_1389_; uint64_t v___x_1390_; uint64_t v___x_1391_; uint64_t v___x_1392_; uint8_t v___x_1393_; uint8_t v___x_1394_; uint8_t v___x_1395_; 
v___x_1388_ = 127;
v___x_1389_ = lean_uint8_land(v_c_1380_, v___x_1388_);
v___x_1390_ = lean_uint8_to_uint64(v___x_1389_);
v___x_1391_ = lean_uint64_shift_left(v___x_1390_, v_shift_1369_);
v___x_1392_ = lean_uint64_lor(v_uidx_1368_, v___x_1391_);
v___x_1393_ = 128;
v___x_1394_ = lean_uint8_land(v_c_1380_, v___x_1393_);
v___x_1395_ = lean_uint8_dec_eq(v___x_1394_, v___x_1386_);
if (v___x_1395_ == 0)
{
uint64_t v___x_1396_; uint64_t v___x_1397_; 
v___x_1396_ = 7ULL;
v___x_1397_ = lean_uint64_add(v_shift_1369_, v___x_1396_);
v_uidx_1368_ = v___x_1392_;
v_shift_1369_ = v___x_1397_;
v_a_1370_ = v_it_x27_1384_;
goto _start;
}
else
{
uint64_t v___x_1399_; uint64_t v___x_1400_; uint64_t v___x_1401_; uint64_t v___x_1402_; uint8_t v___x_1403_; 
v___x_1399_ = 1ULL;
v___x_1400_ = lean_uint64_shift_right(v___x_1392_, v___x_1399_);
v___x_1401_ = lean_uint64_land(v___x_1399_, v___x_1392_);
v___x_1402_ = 0ULL;
v___x_1403_ = lean_uint64_dec_eq(v___x_1401_, v___x_1402_);
if (v___x_1403_ == 0)
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1404_ = lean_uint64_to_nat(v___x_1400_);
v___x_1405_ = lean_nat_to_int(v___x_1404_);
v___x_1406_ = lean_int_neg(v___x_1405_);
lean_dec(v___x_1405_);
v___x_1407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1407_, 0, v_it_x27_1384_);
lean_ctor_set(v___x_1407_, 1, v___x_1406_);
return v___x_1407_;
}
else
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1408_ = lean_uint64_to_nat(v___x_1400_);
v___x_1409_ = lean_nat_to_int(v___x_1408_);
v___x_1410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1410_, 0, v_it_x27_1384_);
lean_ctor_set(v___x_1410_, 1, v___x_1409_);
return v___x_1410_;
}
}
}
else
{
lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_1411_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__1));
v___x_1412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1412_, 0, v_it_x27_1384_);
lean_ctor_set(v___x_1412_, 1, v___x_1411_);
return v___x_1412_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___boxed(lean_object* v_uidx_1425_, lean_object* v_shift_1426_, lean_object* v_a_1427_){
_start:
{
uint64_t v_uidx_boxed_1428_; uint64_t v_shift_boxed_1429_; lean_object* v_res_1430_; 
v_uidx_boxed_1428_ = lean_unbox_uint64(v_uidx_1425_);
lean_dec_ref(v_uidx_1425_);
v_shift_boxed_1429_ = lean_unbox_uint64(v_shift_1426_);
lean_dec_ref(v_shift_1426_);
v_res_1430_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go(v_uidx_boxed_1428_, v_shift_boxed_1429_, v_a_1427_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(lean_object* v_a_1431_){
_start:
{
uint64_t v___x_1432_; lean_object* v___x_1433_; 
v___x_1432_ = 0ULL;
v___x_1433_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go(v___x_1432_, v___x_1432_, v_a_1431_);
return v___x_1433_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseNeg(lean_object* v_a_1437_){
_start:
{
lean_object* v___x_1438_; 
v___x_1438_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(v_a_1437_);
if (lean_obj_tag(v___x_1438_) == 0)
{
lean_object* v_pos_1439_; lean_object* v_res_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1454_; 
v_pos_1439_ = lean_ctor_get(v___x_1438_, 0);
v_res_1440_ = lean_ctor_get(v___x_1438_, 1);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1442_ = v___x_1438_;
v_isShared_1443_ = v_isSharedCheck_1454_;
goto v_resetjp_1441_;
}
else
{
lean_inc(v_res_1440_);
lean_inc(v_pos_1439_);
lean_dec(v___x_1438_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1454_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v___x_1444_; uint8_t v___x_1445_; 
v___x_1444_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0);
v___x_1445_ = lean_int_dec_lt(v_res_1440_, v___x_1444_);
if (v___x_1445_ == 0)
{
lean_object* v___x_1446_; lean_object* v___x_1448_; 
lean_dec(v_res_1440_);
v___x_1446_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseNeg___closed__1));
if (v_isShared_1443_ == 0)
{
lean_ctor_set_tag(v___x_1442_, 1);
lean_ctor_set(v___x_1442_, 1, v___x_1446_);
v___x_1448_ = v___x_1442_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v_pos_1439_);
lean_ctor_set(v_reuseFailAlloc_1449_, 1, v___x_1446_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
else
{
lean_object* v___x_1450_; lean_object* v___x_1452_; 
v___x_1450_ = lean_nat_abs(v_res_1440_);
lean_dec(v_res_1440_);
if (v_isShared_1443_ == 0)
{
lean_ctor_set(v___x_1442_, 1, v___x_1450_);
v___x_1452_ = v___x_1442_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_pos_1439_);
lean_ctor_set(v_reuseFailAlloc_1453_, 1, v___x_1450_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
}
}
else
{
lean_object* v_pos_1455_; lean_object* v_err_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1463_; 
v_pos_1455_ = lean_ctor_get(v___x_1438_, 0);
v_err_1456_ = lean_ctor_get(v___x_1438_, 1);
v_isSharedCheck_1463_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1458_ = v___x_1438_;
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_err_1456_);
lean_inc(v_pos_1455_);
lean_dec(v___x_1438_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1461_; 
if (v_isShared_1459_ == 0)
{
v___x_1461_ = v___x_1458_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v_pos_1455_);
lean_ctor_set(v_reuseFailAlloc_1462_, 1, v_err_1456_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
return v___x_1461_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos(lean_object* v_a_1467_){
_start:
{
lean_object* v___x_1468_; 
v___x_1468_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(v_a_1467_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_object* v_pos_1469_; lean_object* v_res_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1484_; 
v_pos_1469_ = lean_ctor_get(v___x_1468_, 0);
v_res_1470_ = lean_ctor_get(v___x_1468_, 1);
v_isSharedCheck_1484_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1484_ == 0)
{
v___x_1472_ = v___x_1468_;
v_isShared_1473_ = v_isSharedCheck_1484_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_res_1470_);
lean_inc(v_pos_1469_);
lean_dec(v___x_1468_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1484_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1474_; uint8_t v___x_1475_; 
v___x_1474_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0);
v___x_1475_ = lean_int_dec_lt(v___x_1474_, v_res_1470_);
if (v___x_1475_ == 0)
{
lean_object* v___x_1476_; lean_object* v___x_1478_; 
lean_dec(v_res_1470_);
v___x_1476_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos___closed__1));
if (v_isShared_1473_ == 0)
{
lean_ctor_set_tag(v___x_1472_, 1);
lean_ctor_set(v___x_1472_, 1, v___x_1476_);
v___x_1478_ = v___x_1472_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_pos_1469_);
lean_ctor_set(v_reuseFailAlloc_1479_, 1, v___x_1476_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
else
{
lean_object* v___x_1480_; lean_object* v___x_1482_; 
v___x_1480_ = lean_nat_abs(v_res_1470_);
lean_dec(v_res_1470_);
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 1, v___x_1480_);
v___x_1482_ = v___x_1472_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v_pos_1469_);
lean_ctor_set(v_reuseFailAlloc_1483_, 1, v___x_1480_);
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
lean_object* v_pos_1485_; lean_object* v_err_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1493_; 
v_pos_1485_ = lean_ctor_get(v___x_1468_, 0);
v_err_1486_ = lean_ctor_get(v___x_1468_, 1);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1488_ = v___x_1468_;
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_err_1486_);
lean_inc(v_pos_1485_);
lean_dec(v___x_1468_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1491_; 
if (v_isShared_1489_ == 0)
{
v___x_1491_ = v___x_1488_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_pos_1485_);
lean_ctor_set(v_reuseFailAlloc_1492_, 1, v_err_1486_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseId(lean_object* v_a_1494_){
_start:
{
lean_object* v___x_1495_; 
v___x_1495_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(v_a_1494_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v_pos_1496_; lean_object* v_res_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1511_; 
v_pos_1496_ = lean_ctor_get(v___x_1495_, 0);
v_res_1497_ = lean_ctor_get(v___x_1495_, 1);
v_isSharedCheck_1511_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1499_ = v___x_1495_;
v_isShared_1500_ = v_isSharedCheck_1511_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_res_1497_);
lean_inc(v_pos_1496_);
lean_dec(v___x_1495_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1511_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1501_; uint8_t v___x_1502_; 
v___x_1501_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0);
v___x_1502_ = lean_int_dec_lt(v___x_1501_, v_res_1497_);
if (v___x_1502_ == 0)
{
lean_object* v___x_1503_; lean_object* v___x_1505_; 
lean_dec(v_res_1497_);
v___x_1503_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos___closed__1));
if (v_isShared_1500_ == 0)
{
lean_ctor_set_tag(v___x_1499_, 1);
lean_ctor_set(v___x_1499_, 1, v___x_1503_);
v___x_1505_ = v___x_1499_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v_pos_1496_);
lean_ctor_set(v_reuseFailAlloc_1506_, 1, v___x_1503_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
else
{
lean_object* v___x_1507_; lean_object* v___x_1509_; 
v___x_1507_ = lean_nat_abs(v_res_1497_);
lean_dec(v_res_1497_);
if (v_isShared_1500_ == 0)
{
lean_ctor_set(v___x_1499_, 1, v___x_1507_);
v___x_1509_ = v___x_1499_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v_pos_1496_);
lean_ctor_set(v_reuseFailAlloc_1510_, 1, v___x_1507_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
}
}
else
{
lean_object* v_pos_1512_; lean_object* v_err_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1520_; 
v_pos_1512_ = lean_ctor_get(v___x_1495_, 0);
v_err_1513_ = lean_ctor_get(v___x_1495_, 1);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1515_ = v___x_1495_;
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_err_1513_);
lean_inc(v_pos_1512_);
lean_dec(v___x_1495_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1516_ == 0)
{
v___x_1518_ = v___x_1515_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_pos_1512_);
lean_ctor_set(v_reuseFailAlloc_1519_, 1, v_err_1513_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___redArg(lean_object* v_parser_1521_, lean_object* v_acc_1522_, lean_object* v_a_1523_){
_start:
{
lean_object* v_array_1524_; lean_object* v_idx_1525_; lean_object* v___x_1526_; uint8_t v___x_1527_; 
v_array_1524_ = lean_ctor_get(v_a_1523_, 0);
v_idx_1525_ = lean_ctor_get(v_a_1523_, 1);
v___x_1526_ = lean_byte_array_size(v_array_1524_);
v___x_1527_ = lean_nat_dec_lt(v_idx_1525_, v___x_1526_);
if (v___x_1527_ == 0)
{
lean_object* v___x_1528_; lean_object* v___x_1529_; 
lean_dec_ref(v_acc_1522_);
lean_dec_ref(v_parser_1521_);
v___x_1528_ = lean_box(0);
v___x_1529_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1529_, 0, v_a_1523_);
lean_ctor_set(v___x_1529_, 1, v___x_1528_);
return v___x_1529_;
}
else
{
uint8_t v___x_1530_; uint8_t v___x_1531_; uint8_t v___x_1532_; 
v___x_1530_ = lean_byte_array_fget(v_array_1524_, v_idx_1525_);
v___x_1531_ = 0;
v___x_1532_ = lean_uint8_dec_eq(v___x_1530_, v___x_1531_);
if (v___x_1532_ == 0)
{
lean_object* v___x_1533_; 
lean_inc_ref(v_parser_1521_);
v___x_1533_ = lean_apply_1(v_parser_1521_, v_a_1523_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_pos_1534_; lean_object* v_res_1535_; lean_object* v___x_1536_; 
v_pos_1534_ = lean_ctor_get(v___x_1533_, 0);
lean_inc(v_pos_1534_);
v_res_1535_ = lean_ctor_get(v___x_1533_, 1);
lean_inc(v_res_1535_);
lean_dec_ref_known(v___x_1533_, 2);
v___x_1536_ = lean_array_push(v_acc_1522_, v_res_1535_);
v_acc_1522_ = v___x_1536_;
v_a_1523_ = v_pos_1534_;
goto _start;
}
else
{
lean_object* v_pos_1538_; lean_object* v_err_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1546_; 
lean_dec_ref(v_acc_1522_);
lean_dec_ref(v_parser_1521_);
v_pos_1538_ = lean_ctor_get(v___x_1533_, 0);
v_err_1539_ = lean_ctor_get(v___x_1533_, 1);
v_isSharedCheck_1546_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1541_ = v___x_1533_;
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_err_1539_);
lean_inc(v_pos_1538_);
lean_dec(v___x_1533_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___x_1544_; 
if (v_isShared_1542_ == 0)
{
v___x_1544_ = v___x_1541_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v_pos_1538_);
lean_ctor_set(v_reuseFailAlloc_1545_, 1, v_err_1539_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
}
else
{
lean_object* v___x_1547_; 
lean_dec_ref(v_parser_1521_);
v___x_1547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1547_, 0, v_a_1523_);
lean_ctor_set(v___x_1547_, 1, v_acc_1522_);
return v___x_1547_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go(lean_object* v_00_u03b1_1548_, lean_object* v_parser_1549_, lean_object* v_acc_1550_, lean_object* v_a_1551_){
_start:
{
lean_object* v___x_1552_; 
v___x_1552_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___redArg(v_parser_1549_, v_acc_1550_, v_a_1551_);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___redArg(lean_object* v_parser_1555_, lean_object* v_a_1556_){
_start:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1557_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___redArg___closed__0));
v___x_1558_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___redArg(v_parser_1555_, v___x_1557_, v_a_1556_);
return v___x_1558_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero(lean_object* v_00_u03b1_1559_, lean_object* v_parser_1560_, lean_object* v_a_1561_){
_start:
{
lean_object* v___x_1562_; 
v___x_1562_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___redArg(v_parser_1560_, v_a_1561_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero_go___redArg(lean_object* v_parser_1563_, lean_object* v_acc_1564_, lean_object* v_a_1565_){
_start:
{
lean_object* v_array_1566_; lean_object* v_idx_1567_; lean_object* v___x_1568_; uint8_t v___x_1569_; 
v_array_1566_ = lean_ctor_get(v_a_1565_, 0);
v_idx_1567_ = lean_ctor_get(v_a_1565_, 1);
v___x_1568_ = lean_byte_array_size(v_array_1566_);
v___x_1569_ = lean_nat_dec_lt(v_idx_1567_, v___x_1568_);
if (v___x_1569_ == 0)
{
lean_object* v___x_1570_; lean_object* v___x_1571_; 
lean_dec_ref(v_acc_1564_);
lean_dec_ref(v_parser_1563_);
v___x_1570_ = lean_box(0);
v___x_1571_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1571_, 0, v_a_1565_);
lean_ctor_set(v___x_1571_, 1, v___x_1570_);
return v___x_1571_;
}
else
{
uint8_t v___x_1572_; uint8_t v___x_1573_; uint8_t v___x_1574_; uint8_t v___x_1575_; uint8_t v___x_1576_; 
v___x_1572_ = lean_byte_array_fget(v_array_1566_, v_idx_1567_);
v___x_1573_ = 1;
v___x_1574_ = lean_uint8_land(v___x_1573_, v___x_1572_);
v___x_1575_ = 0;
v___x_1576_ = lean_uint8_dec_eq(v___x_1574_, v___x_1575_);
if (v___x_1576_ == 0)
{
lean_object* v___x_1577_; 
lean_dec_ref(v_parser_1563_);
v___x_1577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1577_, 0, v_a_1565_);
lean_ctor_set(v___x_1577_, 1, v_acc_1564_);
return v___x_1577_;
}
else
{
uint8_t v___x_1578_; 
v___x_1578_ = lean_uint8_dec_eq(v___x_1572_, v___x_1575_);
if (v___x_1578_ == 0)
{
lean_object* v___x_1579_; 
lean_inc_ref(v_parser_1563_);
v___x_1579_ = lean_apply_1(v_parser_1563_, v_a_1565_);
if (lean_obj_tag(v___x_1579_) == 0)
{
lean_object* v_pos_1580_; lean_object* v_res_1581_; lean_object* v___x_1582_; 
v_pos_1580_ = lean_ctor_get(v___x_1579_, 0);
lean_inc(v_pos_1580_);
v_res_1581_ = lean_ctor_get(v___x_1579_, 1);
lean_inc(v_res_1581_);
lean_dec_ref_known(v___x_1579_, 2);
v___x_1582_ = lean_array_push(v_acc_1564_, v_res_1581_);
v_acc_1564_ = v___x_1582_;
v_a_1565_ = v_pos_1580_;
goto _start;
}
else
{
lean_object* v_pos_1584_; lean_object* v_err_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1592_; 
lean_dec_ref(v_acc_1564_);
lean_dec_ref(v_parser_1563_);
v_pos_1584_ = lean_ctor_get(v___x_1579_, 0);
v_err_1585_ = lean_ctor_get(v___x_1579_, 1);
v_isSharedCheck_1592_ = !lean_is_exclusive(v___x_1579_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1587_ = v___x_1579_;
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_err_1585_);
lean_inc(v_pos_1584_);
lean_dec(v___x_1579_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1590_; 
if (v_isShared_1588_ == 0)
{
v___x_1590_ = v___x_1587_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v_pos_1584_);
lean_ctor_set(v_reuseFailAlloc_1591_, 1, v_err_1585_);
v___x_1590_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
return v___x_1590_;
}
}
}
}
else
{
lean_object* v___x_1593_; 
lean_dec_ref(v_parser_1563_);
v___x_1593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1593_, 0, v_a_1565_);
lean_ctor_set(v___x_1593_, 1, v_acc_1564_);
return v___x_1593_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero_go(lean_object* v_00_u03b1_1594_, lean_object* v_parser_1595_, lean_object* v_acc_1596_, lean_object* v_a_1597_){
_start:
{
lean_object* v___x_1598_; 
v___x_1598_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero_go___redArg(v_parser_1595_, v_acc_1596_, v_a_1597_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___redArg(lean_object* v_parser_1599_, lean_object* v_a_1600_){
_start:
{
lean_object* v___x_1601_; lean_object* v___x_1602_; 
v___x_1601_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___redArg___closed__0));
v___x_1602_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero_go___redArg(v_parser_1599_, v___x_1601_, v_a_1600_);
return v___x_1602_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero(lean_object* v_00_u03b1_1603_, lean_object* v_parser_1604_, lean_object* v_a_1605_){
_start:
{
lean_object* v___x_1606_; 
v___x_1606_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___redArg(v_parser_1604_, v_a_1605_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseIdList(lean_object* v_a_1607_){
_start:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1608_ = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseId), 1, 0);
v___x_1609_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___redArg(v___x_1608_, v_a_1607_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseClause(lean_object* v_a_1610_){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1611_ = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit), 1, 0);
v___x_1612_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___redArg(v___x_1611_, v_a_1610_);
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero_go___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes_spec__0_spec__0(lean_object* v_acc_1613_, lean_object* v_a_1614_){
_start:
{
lean_object* v_array_1615_; lean_object* v_idx_1616_; lean_object* v___x_1617_; uint8_t v___x_1618_; 
v_array_1615_ = lean_ctor_get(v_a_1614_, 0);
v_idx_1616_ = lean_ctor_get(v_a_1614_, 1);
v___x_1617_ = lean_byte_array_size(v_array_1615_);
v___x_1618_ = lean_nat_dec_lt(v_idx_1616_, v___x_1617_);
if (v___x_1618_ == 0)
{
lean_object* v___x_1619_; lean_object* v___x_1620_; 
lean_dec_ref(v_acc_1613_);
v___x_1619_ = lean_box(0);
v___x_1620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1620_, 0, v_a_1614_);
lean_ctor_set(v___x_1620_, 1, v___x_1619_);
return v___x_1620_;
}
else
{
uint8_t v___x_1621_; uint8_t v___x_1622_; uint8_t v___x_1623_; uint8_t v___x_1624_; uint8_t v___x_1625_; 
v___x_1621_ = lean_byte_array_fget(v_array_1615_, v_idx_1616_);
v___x_1622_ = 1;
v___x_1623_ = lean_uint8_land(v___x_1622_, v___x_1621_);
v___x_1624_ = 0;
v___x_1625_ = lean_uint8_dec_eq(v___x_1623_, v___x_1624_);
if (v___x_1625_ == 0)
{
lean_object* v___x_1626_; 
v___x_1626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1626_, 0, v_a_1614_);
lean_ctor_set(v___x_1626_, 1, v_acc_1613_);
return v___x_1626_;
}
else
{
uint8_t v___x_1627_; 
v___x_1627_ = lean_uint8_dec_eq(v___x_1621_, v___x_1624_);
if (v___x_1627_ == 0)
{
lean_object* v___x_1628_; 
v___x_1628_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(v_a_1614_);
if (lean_obj_tag(v___x_1628_) == 0)
{
lean_object* v_pos_1629_; lean_object* v_res_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1643_; 
v_pos_1629_ = lean_ctor_get(v___x_1628_, 0);
v_res_1630_ = lean_ctor_get(v___x_1628_, 1);
v_isSharedCheck_1643_ = !lean_is_exclusive(v___x_1628_);
if (v_isSharedCheck_1643_ == 0)
{
v___x_1632_ = v___x_1628_;
v_isShared_1633_ = v_isSharedCheck_1643_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_res_1630_);
lean_inc(v_pos_1629_);
lean_dec(v___x_1628_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1643_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v___x_1634_; uint8_t v___x_1635_; 
v___x_1634_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0);
v___x_1635_ = lean_int_dec_lt(v___x_1634_, v_res_1630_);
if (v___x_1635_ == 0)
{
lean_object* v___x_1636_; lean_object* v___x_1638_; 
lean_dec(v_res_1630_);
lean_dec_ref(v_acc_1613_);
v___x_1636_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos___closed__1));
if (v_isShared_1633_ == 0)
{
lean_ctor_set_tag(v___x_1632_, 1);
lean_ctor_set(v___x_1632_, 1, v___x_1636_);
v___x_1638_ = v___x_1632_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v_pos_1629_);
lean_ctor_set(v_reuseFailAlloc_1639_, 1, v___x_1636_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
return v___x_1638_;
}
}
else
{
lean_object* v___x_1640_; lean_object* v___x_1641_; 
lean_del_object(v___x_1632_);
v___x_1640_ = lean_nat_abs(v_res_1630_);
lean_dec(v_res_1630_);
v___x_1641_ = lean_array_push(v_acc_1613_, v___x_1640_);
v_acc_1613_ = v___x_1641_;
v_a_1614_ = v_pos_1629_;
goto _start;
}
}
}
else
{
lean_object* v_pos_1644_; lean_object* v_err_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1652_; 
lean_dec_ref(v_acc_1613_);
v_pos_1644_ = lean_ctor_get(v___x_1628_, 0);
v_err_1645_ = lean_ctor_get(v___x_1628_, 1);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1628_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1647_ = v___x_1628_;
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_err_1645_);
lean_inc(v_pos_1644_);
lean_dec(v___x_1628_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1650_; 
if (v_isShared_1648_ == 0)
{
v___x_1650_ = v___x_1647_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v_pos_1644_);
lean_ctor_set(v_reuseFailAlloc_1651_, 1, v_err_1645_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
}
else
{
lean_object* v___x_1653_; 
v___x_1653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1653_, 0, v_a_1614_);
lean_ctor_set(v___x_1653_, 1, v_acc_1613_);
return v___x_1653_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes_spec__0(lean_object* v_a_1654_){
_start:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; 
v___x_1655_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList___closed__0));
v___x_1656_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero_go___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes_spec__0_spec__0(v___x_1655_, v_a_1654_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes(lean_object* v_a_1657_){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(v_a_1657_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_object* v_pos_1659_; lean_object* v_res_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1691_; 
v_pos_1659_ = lean_ctor_get(v___x_1658_, 0);
v_res_1660_ = lean_ctor_get(v___x_1658_, 1);
v_isSharedCheck_1691_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1691_ == 0)
{
v___x_1662_ = v___x_1658_;
v_isShared_1663_ = v_isSharedCheck_1691_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_res_1660_);
lean_inc(v_pos_1659_);
lean_dec(v___x_1658_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1691_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1664_; uint8_t v___x_1665_; 
v___x_1664_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0);
v___x_1665_ = lean_int_dec_lt(v_res_1660_, v___x_1664_);
if (v___x_1665_ == 0)
{
lean_object* v___x_1666_; lean_object* v___x_1668_; 
lean_dec(v_res_1660_);
v___x_1666_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseNeg___closed__1));
if (v_isShared_1663_ == 0)
{
lean_ctor_set_tag(v___x_1662_, 1);
lean_ctor_set(v___x_1662_, 1, v___x_1666_);
v___x_1668_ = v___x_1662_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v_pos_1659_);
lean_ctor_set(v_reuseFailAlloc_1669_, 1, v___x_1666_);
v___x_1668_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
return v___x_1668_;
}
}
else
{
lean_object* v___x_1670_; 
lean_del_object(v___x_1662_);
v___x_1670_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes_spec__0(v_pos_1659_);
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_object* v_pos_1671_; lean_object* v_res_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1681_; 
v_pos_1671_ = lean_ctor_get(v___x_1670_, 0);
v_res_1672_ = lean_ctor_get(v___x_1670_, 1);
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1674_ = v___x_1670_;
v_isShared_1675_ = v_isSharedCheck_1681_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_res_1672_);
lean_inc(v_pos_1671_);
lean_dec(v___x_1670_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1681_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1679_; 
v___x_1676_ = lean_nat_abs(v_res_1660_);
lean_dec(v_res_1660_);
v___x_1677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1676_);
lean_ctor_set(v___x_1677_, 1, v_res_1672_);
if (v_isShared_1675_ == 0)
{
lean_ctor_set(v___x_1674_, 1, v___x_1677_);
v___x_1679_ = v___x_1674_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v_pos_1671_);
lean_ctor_set(v_reuseFailAlloc_1680_, 1, v___x_1677_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
}
else
{
lean_object* v_pos_1682_; lean_object* v_err_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1690_; 
lean_dec(v_res_1660_);
v_pos_1682_ = lean_ctor_get(v___x_1670_, 0);
v_err_1683_ = lean_ctor_get(v___x_1670_, 1);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1685_ = v___x_1670_;
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_err_1683_);
lean_inc(v_pos_1682_);
lean_dec(v___x_1670_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v___x_1688_; 
if (v_isShared_1686_ == 0)
{
v___x_1688_ = v___x_1685_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_pos_1682_);
lean_ctor_set(v_reuseFailAlloc_1689_, 1, v_err_1683_);
v___x_1688_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
return v___x_1688_;
}
}
}
}
}
}
else
{
lean_object* v_pos_1692_; lean_object* v_err_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1700_; 
v_pos_1692_ = lean_ctor_get(v___x_1658_, 0);
v_err_1693_ = lean_ctor_get(v___x_1658_, 1);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1695_ = v___x_1658_;
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_err_1693_);
lean_inc(v_pos_1692_);
lean_dec(v___x_1658_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1698_; 
if (v_isShared_1696_ == 0)
{
v___x_1698_ = v___x_1695_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_pos_1692_);
lean_ctor_set(v_reuseFailAlloc_1699_, 1, v_err_1693_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRatHints(lean_object* v_a_1701_){
_start:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; 
v___x_1702_ = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes), 1, 0);
v___x_1703_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___redArg(v___x_1702_, v_a_1701_);
return v___x_1703_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__0_spec__0(lean_object* v_acc_1704_, lean_object* v_a_1705_){
_start:
{
lean_object* v_array_1706_; lean_object* v_idx_1707_; lean_object* v___x_1708_; uint8_t v___x_1709_; 
v_array_1706_ = lean_ctor_get(v_a_1705_, 0);
v_idx_1707_ = lean_ctor_get(v_a_1705_, 1);
v___x_1708_ = lean_byte_array_size(v_array_1706_);
v___x_1709_ = lean_nat_dec_lt(v_idx_1707_, v___x_1708_);
if (v___x_1709_ == 0)
{
lean_object* v___x_1710_; lean_object* v___x_1711_; 
lean_dec_ref(v_acc_1704_);
v___x_1710_ = lean_box(0);
v___x_1711_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1711_, 0, v_a_1705_);
lean_ctor_set(v___x_1711_, 1, v___x_1710_);
return v___x_1711_;
}
else
{
uint8_t v___x_1712_; uint8_t v___x_1713_; uint8_t v___x_1714_; 
v___x_1712_ = lean_byte_array_fget(v_array_1706_, v_idx_1707_);
v___x_1713_ = 0;
v___x_1714_ = lean_uint8_dec_eq(v___x_1712_, v___x_1713_);
if (v___x_1714_ == 0)
{
lean_object* v___x_1715_; 
v___x_1715_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(v_a_1705_);
if (lean_obj_tag(v___x_1715_) == 0)
{
lean_object* v_pos_1716_; lean_object* v_res_1717_; lean_object* v___x_1718_; 
v_pos_1716_ = lean_ctor_get(v___x_1715_, 0);
lean_inc(v_pos_1716_);
v_res_1717_ = lean_ctor_get(v___x_1715_, 1);
lean_inc(v_res_1717_);
lean_dec_ref_known(v___x_1715_, 2);
v___x_1718_ = lean_array_push(v_acc_1704_, v_res_1717_);
v_acc_1704_ = v___x_1718_;
v_a_1705_ = v_pos_1716_;
goto _start;
}
else
{
lean_object* v_pos_1720_; lean_object* v_err_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
lean_dec_ref(v_acc_1704_);
v_pos_1720_ = lean_ctor_get(v___x_1715_, 0);
v_err_1721_ = lean_ctor_get(v___x_1715_, 1);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1723_ = v___x_1715_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_err_1721_);
lean_inc(v_pos_1720_);
lean_dec(v___x_1715_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1726_; 
if (v_isShared_1724_ == 0)
{
v___x_1726_ = v___x_1723_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_pos_1720_);
lean_ctor_set(v_reuseFailAlloc_1727_, 1, v_err_1721_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
}
else
{
lean_object* v___x_1729_; 
v___x_1729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1729_, 0, v_a_1705_);
lean_ctor_set(v___x_1729_, 1, v_acc_1704_);
return v___x_1729_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__0(lean_object* v_a_1730_){
_start:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1731_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause___closed__0));
v___x_1732_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__0_spec__0(v___x_1731_, v_a_1730_);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__1_spec__2(lean_object* v_acc_1733_, lean_object* v_a_1734_){
_start:
{
lean_object* v_array_1735_; lean_object* v_idx_1736_; lean_object* v___x_1737_; uint8_t v___x_1738_; 
v_array_1735_ = lean_ctor_get(v_a_1734_, 0);
v_idx_1736_ = lean_ctor_get(v_a_1734_, 1);
v___x_1737_ = lean_byte_array_size(v_array_1735_);
v___x_1738_ = lean_nat_dec_lt(v_idx_1736_, v___x_1737_);
if (v___x_1738_ == 0)
{
lean_object* v___x_1739_; lean_object* v___x_1740_; 
lean_dec_ref(v_acc_1733_);
v___x_1739_ = lean_box(0);
v___x_1740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1740_, 0, v_a_1734_);
lean_ctor_set(v___x_1740_, 1, v___x_1739_);
return v___x_1740_;
}
else
{
uint8_t v___x_1741_; uint8_t v___x_1742_; uint8_t v___x_1743_; 
v___x_1741_ = lean_byte_array_fget(v_array_1735_, v_idx_1736_);
v___x_1742_ = 0;
v___x_1743_ = lean_uint8_dec_eq(v___x_1741_, v___x_1742_);
if (v___x_1743_ == 0)
{
lean_object* v___x_1744_; 
v___x_1744_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes(v_a_1734_);
if (lean_obj_tag(v___x_1744_) == 0)
{
lean_object* v_pos_1745_; lean_object* v_res_1746_; lean_object* v___x_1747_; 
v_pos_1745_ = lean_ctor_get(v___x_1744_, 0);
lean_inc(v_pos_1745_);
v_res_1746_ = lean_ctor_get(v___x_1744_, 1);
lean_inc(v_res_1746_);
lean_dec_ref_known(v___x_1744_, 2);
v___x_1747_ = lean_array_push(v_acc_1733_, v_res_1746_);
v_acc_1733_ = v___x_1747_;
v_a_1734_ = v_pos_1745_;
goto _start;
}
else
{
lean_object* v_pos_1749_; lean_object* v_err_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
lean_dec_ref(v_acc_1733_);
v_pos_1749_ = lean_ctor_get(v___x_1744_, 0);
v_err_1750_ = lean_ctor_get(v___x_1744_, 1);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1744_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1744_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_err_1750_);
lean_inc(v_pos_1749_);
lean_dec(v___x_1744_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_pos_1749_);
lean_ctor_set(v_reuseFailAlloc_1756_, 1, v_err_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
else
{
lean_object* v___x_1758_; 
v___x_1758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1758_, 0, v_a_1734_);
lean_ctor_set(v___x_1758_, 1, v_acc_1733_);
return v___x_1758_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__1(lean_object* v_a_1759_){
_start:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1760_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__0));
v___x_1761_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__1_spec__2(v___x_1760_, v_a_1759_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd(lean_object* v_a_1762_){
_start:
{
lean_object* v___x_1763_; 
v___x_1763_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(v_a_1762_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v_pos_1764_; lean_object* v_res_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1902_; 
v_pos_1764_ = lean_ctor_get(v___x_1763_, 0);
v_res_1765_ = lean_ctor_get(v___x_1763_, 1);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1767_ = v___x_1763_;
v_isShared_1768_ = v_isSharedCheck_1902_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_res_1765_);
lean_inc(v_pos_1764_);
lean_dec(v___x_1763_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1902_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; uint8_t v___x_1771_; 
v___x_1769_ = lean_unsigned_to_nat(0u);
v___x_1770_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0);
v___x_1771_ = lean_int_dec_lt(v___x_1770_, v_res_1765_);
if (v___x_1771_ == 0)
{
lean_object* v___x_1772_; lean_object* v___x_1774_; 
lean_dec(v_res_1765_);
v___x_1772_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos___closed__1));
if (v_isShared_1768_ == 0)
{
lean_ctor_set_tag(v___x_1767_, 1);
lean_ctor_set(v___x_1767_, 1, v___x_1772_);
v___x_1774_ = v___x_1767_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_pos_1764_);
lean_ctor_set(v_reuseFailAlloc_1775_, 1, v___x_1772_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
else
{
lean_object* v___x_1776_; 
lean_del_object(v___x_1767_);
v___x_1776_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__0(v_pos_1764_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_object* v_pos_1777_; lean_object* v_res_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1892_; 
v_pos_1777_ = lean_ctor_get(v___x_1776_, 0);
v_res_1778_ = lean_ctor_get(v___x_1776_, 1);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1780_ = v___x_1776_;
v_isShared_1781_ = v_isSharedCheck_1892_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_res_1778_);
lean_inc(v_pos_1777_);
lean_dec(v___x_1776_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1892_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v_array_1782_; lean_object* v_idx_1783_; lean_object* v___x_1784_; uint8_t v___x_1785_; 
v_array_1782_ = lean_ctor_get(v_pos_1777_, 0);
v_idx_1783_ = lean_ctor_get(v_pos_1777_, 1);
v___x_1784_ = lean_byte_array_size(v_array_1782_);
v___x_1785_ = lean_nat_dec_lt(v_idx_1783_, v___x_1784_);
if (v___x_1785_ == 0)
{
lean_object* v___x_1786_; lean_object* v___x_1788_; 
lean_dec(v_res_1778_);
lean_dec(v_res_1765_);
v___x_1786_ = lean_box(0);
if (v_isShared_1781_ == 0)
{
lean_ctor_set_tag(v___x_1780_, 1);
lean_ctor_set(v___x_1780_, 1, v___x_1786_);
v___x_1788_ = v___x_1780_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_pos_1777_);
lean_ctor_set(v_reuseFailAlloc_1789_, 1, v___x_1786_);
v___x_1788_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
return v___x_1788_;
}
}
else
{
uint8_t v___x_1790_; uint8_t v_got_1791_; uint8_t v___x_1792_; 
v___x_1790_ = 0;
v_got_1791_ = lean_byte_array_fget(v_array_1782_, v_idx_1783_);
v___x_1792_ = lean_uint8_dec_eq(v_got_1791_, v___x_1790_);
if (v___x_1792_ == 0)
{
lean_object* v___x_1793_; lean_object* v___x_1795_; 
lean_dec(v_res_1778_);
lean_dec(v_res_1765_);
v___x_1793_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero___closed__1));
if (v_isShared_1781_ == 0)
{
lean_ctor_set_tag(v___x_1780_, 1);
lean_ctor_set(v___x_1780_, 1, v___x_1793_);
v___x_1795_ = v___x_1780_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_pos_1777_);
lean_ctor_set(v_reuseFailAlloc_1796_, 1, v___x_1793_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
else
{
lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1889_; 
lean_inc(v_idx_1783_);
lean_inc_ref(v_array_1782_);
lean_del_object(v___x_1780_);
v_isSharedCheck_1889_ = !lean_is_exclusive(v_pos_1777_);
if (v_isSharedCheck_1889_ == 0)
{
lean_object* v_unused_1890_; lean_object* v_unused_1891_; 
v_unused_1890_ = lean_ctor_get(v_pos_1777_, 1);
lean_dec(v_unused_1890_);
v_unused_1891_ = lean_ctor_get(v_pos_1777_, 0);
lean_dec(v_unused_1891_);
v___x_1798_ = v_pos_1777_;
v_isShared_1799_ = v_isSharedCheck_1889_;
goto v_resetjp_1797_;
}
else
{
lean_dec(v_pos_1777_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1889_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1803_; 
v___x_1800_ = lean_unsigned_to_nat(1u);
v___x_1801_ = lean_nat_add(v_idx_1783_, v___x_1800_);
lean_dec(v_idx_1783_);
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 1, v___x_1801_);
v___x_1803_ = v___x_1798_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v_array_1782_);
lean_ctor_set(v_reuseFailAlloc_1888_, 1, v___x_1801_);
v___x_1803_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
lean_object* v___x_1804_; 
v___x_1804_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes_spec__0(v___x_1803_);
if (lean_obj_tag(v___x_1804_) == 0)
{
lean_object* v_pos_1805_; lean_object* v_res_1806_; lean_object* v___x_1807_; 
v_pos_1805_ = lean_ctor_get(v___x_1804_, 0);
lean_inc(v_pos_1805_);
v_res_1806_ = lean_ctor_get(v___x_1804_, 1);
lean_inc(v_res_1806_);
lean_dec_ref_known(v___x_1804_, 2);
v___x_1807_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__1(v_pos_1805_);
if (lean_obj_tag(v___x_1807_) == 0)
{
lean_object* v_pos_1808_; lean_object* v_res_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1869_; 
v_pos_1808_ = lean_ctor_get(v___x_1807_, 0);
v_res_1809_ = lean_ctor_get(v___x_1807_, 1);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1807_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1811_ = v___x_1807_;
v_isShared_1812_ = v_isSharedCheck_1869_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_res_1809_);
lean_inc(v_pos_1808_);
lean_dec(v___x_1807_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1869_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
lean_object* v_array_1813_; lean_object* v_idx_1814_; lean_object* v___x_1815_; uint8_t v___x_1816_; 
v_array_1813_ = lean_ctor_get(v_pos_1808_, 0);
v_idx_1814_ = lean_ctor_get(v_pos_1808_, 1);
v___x_1815_ = lean_byte_array_size(v_array_1813_);
v___x_1816_ = lean_nat_dec_lt(v_idx_1814_, v___x_1815_);
if (v___x_1816_ == 0)
{
lean_object* v___x_1817_; lean_object* v___x_1819_; 
lean_dec(v_res_1809_);
lean_dec(v_res_1806_);
lean_dec(v_res_1778_);
lean_dec(v_res_1765_);
v___x_1817_ = lean_box(0);
if (v_isShared_1812_ == 0)
{
lean_ctor_set_tag(v___x_1811_, 1);
lean_ctor_set(v___x_1811_, 1, v___x_1817_);
v___x_1819_ = v___x_1811_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v_pos_1808_);
lean_ctor_set(v_reuseFailAlloc_1820_, 1, v___x_1817_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
else
{
uint8_t v_got_1821_; uint8_t v___x_1822_; 
v_got_1821_ = lean_byte_array_fget(v_array_1813_, v_idx_1814_);
v___x_1822_ = lean_uint8_dec_eq(v_got_1821_, v___x_1790_);
if (v___x_1822_ == 0)
{
lean_object* v___x_1823_; lean_object* v___x_1825_; 
lean_dec(v_res_1809_);
lean_dec(v_res_1806_);
lean_dec(v_res_1778_);
lean_dec(v_res_1765_);
v___x_1823_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero___closed__1));
if (v_isShared_1812_ == 0)
{
lean_ctor_set_tag(v___x_1811_, 1);
lean_ctor_set(v___x_1811_, 1, v___x_1823_);
v___x_1825_ = v___x_1811_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_pos_1808_);
lean_ctor_set(v_reuseFailAlloc_1826_, 1, v___x_1823_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
else
{
lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1866_; 
lean_inc(v_idx_1814_);
lean_inc_ref(v_array_1813_);
v_isSharedCheck_1866_ = !lean_is_exclusive(v_pos_1808_);
if (v_isSharedCheck_1866_ == 0)
{
lean_object* v_unused_1867_; lean_object* v_unused_1868_; 
v_unused_1867_ = lean_ctor_get(v_pos_1808_, 1);
lean_dec(v_unused_1867_);
v_unused_1868_ = lean_ctor_get(v_pos_1808_, 0);
lean_dec(v_unused_1868_);
v___x_1828_ = v_pos_1808_;
v_isShared_1829_ = v_isSharedCheck_1866_;
goto v_resetjp_1827_;
}
else
{
lean_dec(v_pos_1808_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1866_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1833_; 
v___x_1830_ = lean_nat_abs(v_res_1765_);
lean_dec(v_res_1765_);
v___x_1831_ = lean_nat_add(v_idx_1814_, v___x_1800_);
lean_dec(v_idx_1814_);
if (v_isShared_1829_ == 0)
{
lean_ctor_set(v___x_1828_, 1, v___x_1831_);
v___x_1833_ = v___x_1828_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_array_1813_);
lean_ctor_set(v_reuseFailAlloc_1865_, 1, v___x_1831_);
v___x_1833_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
lean_object* v___x_1834_; uint8_t v___x_1835_; 
v___x_1834_ = lean_array_get_size(v_res_1778_);
v___x_1835_ = lean_nat_dec_eq(v___x_1834_, v___x_1769_);
if (v___x_1835_ == 0)
{
lean_object* v___x_1836_; uint8_t v___x_1837_; 
v___x_1836_ = lean_array_get_size(v_res_1809_);
v___x_1837_ = lean_nat_dec_eq(v___x_1836_, v___x_1769_);
if (v___x_1837_ == 0)
{
lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1841_; 
v___x_1838_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot(v_res_1778_);
v___x_1839_ = lean_alloc_ctor(2, 5, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1830_);
lean_ctor_set(v___x_1839_, 1, v_res_1778_);
lean_ctor_set(v___x_1839_, 2, v___x_1838_);
lean_ctor_set(v___x_1839_, 3, v_res_1806_);
lean_ctor_set(v___x_1839_, 4, v_res_1809_);
if (v_isShared_1812_ == 0)
{
lean_ctor_set(v___x_1811_, 1, v___x_1839_);
lean_ctor_set(v___x_1811_, 0, v___x_1833_);
v___x_1841_ = v___x_1811_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v___x_1833_);
lean_ctor_set(v_reuseFailAlloc_1842_, 1, v___x_1839_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
return v___x_1841_;
}
}
else
{
lean_object* v___x_1843_; uint8_t v___x_1844_; 
lean_dec(v_res_1809_);
v___x_1843_ = lean_array_get_size(v_res_1806_);
v___x_1844_ = lean_nat_dec_eq(v___x_1843_, v___x_1769_);
if (v___x_1844_ == 0)
{
lean_object* v___x_1845_; lean_object* v___x_1847_; 
v___x_1845_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1830_);
lean_ctor_set(v___x_1845_, 1, v_res_1778_);
lean_ctor_set(v___x_1845_, 2, v_res_1806_);
if (v_isShared_1812_ == 0)
{
lean_ctor_set(v___x_1811_, 1, v___x_1845_);
lean_ctor_set(v___x_1811_, 0, v___x_1833_);
v___x_1847_ = v___x_1811_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v___x_1833_);
lean_ctor_set(v_reuseFailAlloc_1848_, 1, v___x_1845_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
else
{
lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1853_; 
lean_dec(v_res_1806_);
v___x_1849_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot(v_res_1778_);
v___x_1850_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList___closed__0));
v___x_1851_ = lean_alloc_ctor(2, 5, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1830_);
lean_ctor_set(v___x_1851_, 1, v_res_1778_);
lean_ctor_set(v___x_1851_, 2, v___x_1849_);
lean_ctor_set(v___x_1851_, 3, v___x_1850_);
lean_ctor_set(v___x_1851_, 4, v___x_1850_);
if (v_isShared_1812_ == 0)
{
lean_ctor_set(v___x_1811_, 1, v___x_1851_);
lean_ctor_set(v___x_1811_, 0, v___x_1833_);
v___x_1853_ = v___x_1811_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v___x_1833_);
lean_ctor_set(v_reuseFailAlloc_1854_, 1, v___x_1851_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
return v___x_1853_;
}
}
}
}
else
{
lean_object* v___x_1855_; uint8_t v___x_1856_; 
lean_dec(v_res_1778_);
v___x_1855_ = lean_array_get_size(v_res_1809_);
lean_dec(v_res_1809_);
v___x_1856_ = lean_nat_dec_eq(v___x_1855_, v___x_1769_);
if (v___x_1856_ == 0)
{
lean_object* v___x_1857_; lean_object* v___x_1859_; 
lean_dec(v___x_1830_);
lean_dec(v_res_1806_);
v___x_1857_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__2));
if (v_isShared_1812_ == 0)
{
lean_ctor_set_tag(v___x_1811_, 1);
lean_ctor_set(v___x_1811_, 1, v___x_1857_);
lean_ctor_set(v___x_1811_, 0, v___x_1833_);
v___x_1859_ = v___x_1811_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v___x_1833_);
lean_ctor_set(v_reuseFailAlloc_1860_, 1, v___x_1857_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
else
{
lean_object* v___x_1861_; lean_object* v___x_1863_; 
v___x_1861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1861_, 0, v___x_1830_);
lean_ctor_set(v___x_1861_, 1, v_res_1806_);
if (v_isShared_1812_ == 0)
{
lean_ctor_set(v___x_1811_, 1, v___x_1861_);
lean_ctor_set(v___x_1811_, 0, v___x_1833_);
v___x_1863_ = v___x_1811_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v___x_1833_);
lean_ctor_set(v_reuseFailAlloc_1864_, 1, v___x_1861_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
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
lean_object* v_pos_1870_; lean_object* v_err_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1878_; 
lean_dec(v_res_1806_);
lean_dec(v_res_1778_);
lean_dec(v_res_1765_);
v_pos_1870_ = lean_ctor_get(v___x_1807_, 0);
v_err_1871_ = lean_ctor_get(v___x_1807_, 1);
v_isSharedCheck_1878_ = !lean_is_exclusive(v___x_1807_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1873_ = v___x_1807_;
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_err_1871_);
lean_inc(v_pos_1870_);
lean_dec(v___x_1807_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1876_; 
if (v_isShared_1874_ == 0)
{
v___x_1876_ = v___x_1873_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v_pos_1870_);
lean_ctor_set(v_reuseFailAlloc_1877_, 1, v_err_1871_);
v___x_1876_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
return v___x_1876_;
}
}
}
}
else
{
lean_object* v_pos_1879_; lean_object* v_err_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1887_; 
lean_dec(v_res_1778_);
lean_dec(v_res_1765_);
v_pos_1879_ = lean_ctor_get(v___x_1804_, 0);
v_err_1880_ = lean_ctor_get(v___x_1804_, 1);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1804_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1882_ = v___x_1804_;
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_err_1880_);
lean_inc(v_pos_1879_);
lean_dec(v___x_1804_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1885_; 
if (v_isShared_1883_ == 0)
{
v___x_1885_ = v___x_1882_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_pos_1879_);
lean_ctor_set(v_reuseFailAlloc_1886_, 1, v_err_1880_);
v___x_1885_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
return v___x_1885_;
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
lean_object* v_pos_1893_; lean_object* v_err_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1901_; 
lean_dec(v_res_1765_);
v_pos_1893_ = lean_ctor_get(v___x_1776_, 0);
v_err_1894_ = lean_ctor_get(v___x_1776_, 1);
v_isSharedCheck_1901_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1901_ == 0)
{
v___x_1896_ = v___x_1776_;
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_err_1894_);
lean_inc(v_pos_1893_);
lean_dec(v___x_1776_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1899_; 
if (v_isShared_1897_ == 0)
{
v___x_1899_ = v___x_1896_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v_pos_1893_);
lean_ctor_set(v_reuseFailAlloc_1900_, 1, v_err_1894_);
v___x_1899_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
return v___x_1899_;
}
}
}
}
}
}
else
{
lean_object* v_pos_1903_; lean_object* v_err_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1911_; 
v_pos_1903_ = lean_ctor_get(v___x_1763_, 0);
v_err_1904_ = lean_ctor_get(v___x_1763_, 1);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1906_ = v___x_1763_;
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_err_1904_);
lean_inc(v_pos_1903_);
lean_dec(v___x_1763_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1909_; 
if (v_isShared_1907_ == 0)
{
v___x_1909_ = v___x_1906_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v_pos_1903_);
lean_ctor_set(v_reuseFailAlloc_1910_, 1, v_err_1904_);
v___x_1909_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
return v___x_1909_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseDelete(lean_object* v_a_1912_){
_start:
{
lean_object* v___x_1913_; 
v___x_1913_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes_spec__0(v_a_1912_);
if (lean_obj_tag(v___x_1913_) == 0)
{
lean_object* v_pos_1914_; lean_object* v_res_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1949_; 
v_pos_1914_ = lean_ctor_get(v___x_1913_, 0);
v_res_1915_ = lean_ctor_get(v___x_1913_, 1);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1913_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1917_ = v___x_1913_;
v_isShared_1918_ = v_isSharedCheck_1949_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_res_1915_);
lean_inc(v_pos_1914_);
lean_dec(v___x_1913_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1949_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v_array_1919_; lean_object* v_idx_1920_; lean_object* v___x_1921_; uint8_t v___x_1922_; 
v_array_1919_ = lean_ctor_get(v_pos_1914_, 0);
v_idx_1920_ = lean_ctor_get(v_pos_1914_, 1);
v___x_1921_ = lean_byte_array_size(v_array_1919_);
v___x_1922_ = lean_nat_dec_lt(v_idx_1920_, v___x_1921_);
if (v___x_1922_ == 0)
{
lean_object* v___x_1923_; lean_object* v___x_1925_; 
lean_dec(v_res_1915_);
v___x_1923_ = lean_box(0);
if (v_isShared_1918_ == 0)
{
lean_ctor_set_tag(v___x_1917_, 1);
lean_ctor_set(v___x_1917_, 1, v___x_1923_);
v___x_1925_ = v___x_1917_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_pos_1914_);
lean_ctor_set(v_reuseFailAlloc_1926_, 1, v___x_1923_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
else
{
uint8_t v___x_1927_; uint8_t v_got_1928_; uint8_t v___x_1929_; 
v___x_1927_ = 0;
v_got_1928_ = lean_byte_array_fget(v_array_1919_, v_idx_1920_);
v___x_1929_ = lean_uint8_dec_eq(v_got_1928_, v___x_1927_);
if (v___x_1929_ == 0)
{
lean_object* v___x_1930_; lean_object* v___x_1932_; 
lean_dec(v_res_1915_);
v___x_1930_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero___closed__1));
if (v_isShared_1918_ == 0)
{
lean_ctor_set_tag(v___x_1917_, 1);
lean_ctor_set(v___x_1917_, 1, v___x_1930_);
v___x_1932_ = v___x_1917_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v_pos_1914_);
lean_ctor_set(v_reuseFailAlloc_1933_, 1, v___x_1930_);
v___x_1932_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
return v___x_1932_;
}
}
else
{
lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1946_; 
lean_inc(v_idx_1920_);
lean_inc_ref(v_array_1919_);
v_isSharedCheck_1946_ = !lean_is_exclusive(v_pos_1914_);
if (v_isSharedCheck_1946_ == 0)
{
lean_object* v_unused_1947_; lean_object* v_unused_1948_; 
v_unused_1947_ = lean_ctor_get(v_pos_1914_, 1);
lean_dec(v_unused_1947_);
v_unused_1948_ = lean_ctor_get(v_pos_1914_, 0);
lean_dec(v_unused_1948_);
v___x_1935_ = v_pos_1914_;
v_isShared_1936_ = v_isSharedCheck_1946_;
goto v_resetjp_1934_;
}
else
{
lean_dec(v_pos_1914_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1946_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1940_; 
v___x_1937_ = lean_unsigned_to_nat(1u);
v___x_1938_ = lean_nat_add(v_idx_1920_, v___x_1937_);
lean_dec(v_idx_1920_);
if (v_isShared_1936_ == 0)
{
lean_ctor_set(v___x_1935_, 1, v___x_1938_);
v___x_1940_ = v___x_1935_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1945_; 
v_reuseFailAlloc_1945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1945_, 0, v_array_1919_);
lean_ctor_set(v_reuseFailAlloc_1945_, 1, v___x_1938_);
v___x_1940_ = v_reuseFailAlloc_1945_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
lean_object* v___x_1941_; lean_object* v___x_1943_; 
v___x_1941_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1941_, 0, v_res_1915_);
if (v_isShared_1918_ == 0)
{
lean_ctor_set(v___x_1917_, 1, v___x_1941_);
lean_ctor_set(v___x_1917_, 0, v___x_1940_);
v___x_1943_ = v___x_1917_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v___x_1940_);
lean_ctor_set(v_reuseFailAlloc_1944_, 1, v___x_1941_);
v___x_1943_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
return v___x_1943_;
}
}
}
}
}
}
}
else
{
lean_object* v_pos_1950_; lean_object* v_err_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1958_; 
v_pos_1950_ = lean_ctor_get(v___x_1913_, 0);
v_err_1951_ = lean_ctor_get(v___x_1913_, 1);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1913_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1953_ = v___x_1913_;
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_err_1951_);
lean_inc(v_pos_1950_);
lean_dec(v___x_1913_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1956_; 
if (v_isShared_1954_ == 0)
{
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_pos_1950_);
lean_ctor_set(v_reuseFailAlloc_1957_, 1, v_err_1951_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction(lean_object* v_a_1960_){
_start:
{
lean_object* v_array_1961_; lean_object* v_idx_1962_; lean_object* v___x_1963_; uint8_t v___x_1964_; 
v_array_1961_ = lean_ctor_get(v_a_1960_, 0);
v_idx_1962_ = lean_ctor_get(v_a_1960_, 1);
v___x_1963_ = lean_byte_array_size(v_array_1961_);
v___x_1964_ = lean_nat_dec_lt(v_idx_1962_, v___x_1963_);
if (v___x_1964_ == 0)
{
lean_object* v___x_1965_; lean_object* v___x_1966_; 
v___x_1965_ = lean_box(0);
v___x_1966_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1966_, 0, v_a_1960_);
lean_ctor_set(v___x_1966_, 1, v___x_1965_);
return v___x_1966_;
}
else
{
lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1988_; 
lean_inc(v_idx_1962_);
lean_inc_ref(v_array_1961_);
v_isSharedCheck_1988_ = !lean_is_exclusive(v_a_1960_);
if (v_isSharedCheck_1988_ == 0)
{
lean_object* v_unused_1989_; lean_object* v_unused_1990_; 
v_unused_1989_ = lean_ctor_get(v_a_1960_, 1);
lean_dec(v_unused_1989_);
v_unused_1990_ = lean_ctor_get(v_a_1960_, 0);
lean_dec(v_unused_1990_);
v___x_1968_ = v_a_1960_;
v_isShared_1969_ = v_isSharedCheck_1988_;
goto v_resetjp_1967_;
}
else
{
lean_dec(v_a_1960_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1988_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
uint8_t v_c_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v_it_x27_1974_; 
v_c_1970_ = lean_byte_array_fget(v_array_1961_, v_idx_1962_);
v___x_1971_ = lean_unsigned_to_nat(1u);
v___x_1972_ = lean_nat_add(v_idx_1962_, v___x_1971_);
lean_dec(v_idx_1962_);
if (v_isShared_1969_ == 0)
{
lean_ctor_set(v___x_1968_, 1, v___x_1972_);
v_it_x27_1974_ = v___x_1968_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1987_; 
v_reuseFailAlloc_1987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1987_, 0, v_array_1961_);
lean_ctor_set(v_reuseFailAlloc_1987_, 1, v___x_1972_);
v_it_x27_1974_ = v_reuseFailAlloc_1987_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
uint8_t v___x_1975_; uint8_t v___x_1976_; 
v___x_1975_ = 97;
v___x_1976_ = lean_uint8_dec_eq(v_c_1970_, v___x_1975_);
if (v___x_1976_ == 0)
{
uint8_t v___x_1977_; uint8_t v___x_1978_; 
v___x_1977_ = 100;
v___x_1978_ = lean_uint8_dec_eq(v_c_1970_, v___x_1977_);
if (v___x_1978_ == 0)
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1979_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction___closed__0));
v___x_1980_ = lean_uint8_to_nat(v_c_1970_);
v___x_1981_ = l_Nat_reprFast(v___x_1980_);
v___x_1982_ = lean_string_append(v___x_1979_, v___x_1981_);
lean_dec_ref(v___x_1981_);
v___x_1983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1982_);
v___x_1984_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1984_, 0, v_it_x27_1974_);
lean_ctor_set(v___x_1984_, 1, v___x_1983_);
return v___x_1984_;
}
else
{
lean_object* v___x_1985_; 
v___x_1985_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseDelete(v_it_x27_1974_);
return v___x_1985_;
}
}
else
{
lean_object* v___x_1986_; 
v___x_1986_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd(v_it_x27_1974_);
return v___x_1986_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions_spec__0(lean_object* v_acc_1991_, lean_object* v_a_1992_){
_start:
{
lean_object* v___x_1993_; 
lean_inc_ref(v_a_1992_);
v___x_1993_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction(v_a_1992_);
if (lean_obj_tag(v___x_1993_) == 0)
{
lean_object* v_pos_1994_; lean_object* v_res_1995_; lean_object* v___x_1996_; 
lean_dec_ref(v_a_1992_);
v_pos_1994_ = lean_ctor_get(v___x_1993_, 0);
lean_inc(v_pos_1994_);
v_res_1995_ = lean_ctor_get(v___x_1993_, 1);
lean_inc(v_res_1995_);
lean_dec_ref_known(v___x_1993_, 2);
v___x_1996_ = lean_array_push(v_acc_1991_, v_res_1995_);
v_acc_1991_ = v___x_1996_;
v_a_1992_ = v_pos_1994_;
goto _start;
}
else
{
lean_object* v_pos_1998_; lean_object* v_err_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2012_; 
v_pos_1998_ = lean_ctor_get(v___x_1993_, 0);
v_err_1999_ = lean_ctor_get(v___x_1993_, 1);
v_isSharedCheck_2012_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2012_ == 0)
{
v___x_2001_ = v___x_1993_;
v_isShared_2002_ = v_isSharedCheck_2012_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_err_1999_);
lean_inc(v_pos_1998_);
lean_dec(v___x_1993_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2012_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v_idx_2003_; lean_object* v_idx_2004_; uint8_t v___x_2005_; 
v_idx_2003_ = lean_ctor_get(v_a_1992_, 1);
lean_inc(v_idx_2003_);
lean_dec_ref(v_a_1992_);
v_idx_2004_ = lean_ctor_get(v_pos_1998_, 1);
v___x_2005_ = lean_nat_dec_eq(v_idx_2003_, v_idx_2004_);
lean_dec(v_idx_2003_);
if (v___x_2005_ == 0)
{
lean_object* v___x_2007_; 
lean_dec_ref(v_acc_1991_);
if (v_isShared_2002_ == 0)
{
v___x_2007_ = v___x_2001_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v_pos_1998_);
lean_ctor_set(v_reuseFailAlloc_2008_, 1, v_err_1999_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
else
{
lean_object* v___x_2010_; 
lean_dec(v_err_1999_);
if (v_isShared_2002_ == 0)
{
lean_ctor_set_tag(v___x_2001_, 0);
lean_ctor_set(v___x_2001_, 1, v_acc_1991_);
v___x_2010_ = v___x_2001_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v_pos_1998_);
lean_ctor_set(v_reuseFailAlloc_2011_, 1, v_acc_1991_);
v___x_2010_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
return v___x_2010_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions(lean_object* v_a_2016_){
_start:
{
lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___x_2017_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions___closed__0));
v___x_2018_ = l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions_spec__0(v___x_2017_, v_a_2016_);
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_object* v_pos_2019_; lean_object* v_array_2020_; lean_object* v_idx_2021_; lean_object* v___x_2022_; uint8_t v___x_2023_; 
v_pos_2019_ = lean_ctor_get(v___x_2018_, 0);
v_array_2020_ = lean_ctor_get(v_pos_2019_, 0);
v_idx_2021_ = lean_ctor_get(v_pos_2019_, 1);
v___x_2022_ = lean_byte_array_size(v_array_2020_);
v___x_2023_ = lean_nat_dec_lt(v_idx_2021_, v___x_2022_);
if (v___x_2023_ == 0)
{
return v___x_2018_;
}
else
{
lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2031_; 
lean_inc(v_pos_2019_);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_2018_);
if (v_isSharedCheck_2031_ == 0)
{
lean_object* v_unused_2032_; lean_object* v_unused_2033_; 
v_unused_2032_ = lean_ctor_get(v___x_2018_, 1);
lean_dec(v_unused_2032_);
v_unused_2033_ = lean_ctor_get(v___x_2018_, 0);
lean_dec(v_unused_2033_);
v___x_2025_ = v___x_2018_;
v_isShared_2026_ = v_isSharedCheck_2031_;
goto v_resetjp_2024_;
}
else
{
lean_dec(v___x_2018_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2031_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
lean_object* v___x_2027_; lean_object* v___x_2029_; 
v___x_2027_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions___closed__1));
if (v_isShared_2026_ == 0)
{
lean_ctor_set_tag(v___x_2025_, 1);
lean_ctor_set(v___x_2025_, 1, v___x_2027_);
v___x_2029_ = v___x_2025_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_pos_2019_);
lean_ctor_set(v_reuseFailAlloc_2030_, 1, v___x_2027_);
v___x_2029_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
return v___x_2029_;
}
}
}
}
else
{
return v___x_2018_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_parseActions(lean_object* v_a_2034_){
_start:
{
lean_object* v_array_2035_; lean_object* v_idx_2036_; lean_object* v___x_2037_; uint8_t v___x_2038_; 
v_array_2035_ = lean_ctor_get(v_a_2034_, 0);
v_idx_2036_ = lean_ctor_get(v_a_2034_, 1);
v___x_2037_ = lean_byte_array_size(v_array_2035_);
v___x_2038_ = lean_nat_dec_lt(v_idx_2036_, v___x_2037_);
if (v___x_2038_ == 0)
{
lean_object* v___x_2039_; lean_object* v___x_2040_; 
v___x_2039_ = lean_box(0);
v___x_2040_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2040_, 0, v_a_2034_);
lean_ctor_set(v___x_2040_, 1, v___x_2039_);
return v___x_2040_;
}
else
{
uint8_t v___x_2041_; uint8_t v___x_2042_; uint8_t v___x_2043_; 
v___x_2041_ = lean_byte_array_fget(v_array_2035_, v_idx_2036_);
v___x_2042_ = 97;
v___x_2043_ = lean_uint8_dec_eq(v___x_2041_, v___x_2042_);
if (v___x_2043_ == 0)
{
uint8_t v___x_2044_; uint8_t v___x_2045_; 
v___x_2044_ = 100;
v___x_2045_ = lean_uint8_dec_eq(v___x_2041_, v___x_2044_);
if (v___x_2045_ == 0)
{
lean_object* v___x_2046_; 
v___x_2046_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions(v_a_2034_);
return v___x_2046_;
}
else
{
lean_object* v___x_2047_; 
v___x_2047_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions(v_a_2034_);
return v___x_2047_;
}
}
else
{
lean_object* v___x_2048_; 
v___x_2048_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions(v_a_2034_);
return v___x_2048_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_loadLRATProof(lean_object* v_path_2049_){
_start:
{
lean_object* v___x_2051_; 
v___x_2051_ = l_IO_FS_readBinFile(v_path_2049_);
if (lean_obj_tag(v___x_2051_) == 0)
{
lean_object* v_a_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2073_; 
v_a_2052_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2054_ = v___x_2051_;
v_isShared_2055_ = v_isSharedCheck_2073_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_a_2052_);
lean_dec(v___x_2051_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2073_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2056_ = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_LRAT_Parser_parseActions), 1, 0);
v___x_2057_ = l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(v___x_2056_, v_a_2052_);
if (lean_obj_tag(v___x_2057_) == 0)
{
lean_object* v_a_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2068_; 
v_a_2058_ = lean_ctor_get(v___x_2057_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2057_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2060_ = v___x_2057_;
v_isShared_2061_ = v_isSharedCheck_2068_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_a_2058_);
lean_dec(v___x_2057_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2068_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2063_; 
if (v_isShared_2061_ == 0)
{
lean_ctor_set_tag(v___x_2060_, 18);
v___x_2063_ = v___x_2060_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_a_2058_);
v___x_2063_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
lean_object* v___x_2065_; 
if (v_isShared_2055_ == 0)
{
lean_ctor_set_tag(v___x_2054_, 1);
lean_ctor_set(v___x_2054_, 0, v___x_2063_);
v___x_2065_ = v___x_2054_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v___x_2063_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
}
else
{
lean_object* v_a_2069_; lean_object* v___x_2071_; 
v_a_2069_ = lean_ctor_get(v___x_2057_, 0);
lean_inc(v_a_2069_);
lean_dec_ref_known(v___x_2057_, 1);
if (v_isShared_2055_ == 0)
{
lean_ctor_set(v___x_2054_, 0, v_a_2069_);
v___x_2071_ = v___x_2054_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2069_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
return v___x_2071_;
}
}
}
}
else
{
lean_object* v_a_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2081_; 
v_a_2074_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2081_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2081_ == 0)
{
v___x_2076_ = v___x_2051_;
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_a_2074_);
lean_dec(v___x_2051_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2079_; 
if (v_isShared_2077_ == 0)
{
v___x_2079_ = v___x_2076_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v_a_2074_);
v___x_2079_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
return v___x_2079_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_loadLRATProof___boxed(lean_object* v_path_2082_, lean_object* v_a_2083_){
_start:
{
lean_object* v_res_2084_; 
v_res_2084_ = l_Std_Tactic_BVDecide_LRAT_loadLRATProof(v_path_2082_);
lean_dec_ref(v_path_2082_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_parseLRATProof(lean_object* v_proof_2085_){
_start:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; 
v___x_2086_ = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_LRAT_Parser_parseActions), 1, 0);
v___x_2087_ = l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(v___x_2086_, v_proof_2085_);
return v___x_2087_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0(lean_object* v_as_2089_, size_t v_i_2090_, size_t v_stop_2091_, lean_object* v_b_2092_){
_start:
{
uint8_t v___x_2093_; 
v___x_2093_ = lean_usize_dec_eq(v_i_2090_, v_stop_2091_);
if (v___x_2093_ == 0)
{
lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; size_t v___x_2099_; size_t v___x_2100_; 
v___x_2094_ = lean_array_uget_borrowed(v_as_2089_, v_i_2090_);
lean_inc(v___x_2094_);
v___x_2095_ = l_Nat_reprFast(v___x_2094_);
v___x_2096_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0___closed__0));
v___x_2097_ = lean_string_append(v___x_2095_, v___x_2096_);
v___x_2098_ = lean_string_append(v_b_2092_, v___x_2097_);
lean_dec_ref(v___x_2097_);
v___x_2099_ = ((size_t)1ULL);
v___x_2100_ = lean_usize_add(v_i_2090_, v___x_2099_);
v_i_2090_ = v___x_2100_;
v_b_2092_ = v___x_2098_;
goto _start;
}
else
{
return v_b_2092_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0___boxed(lean_object* v_as_2102_, lean_object* v_i_2103_, lean_object* v_stop_2104_, lean_object* v_b_2105_){
_start:
{
size_t v_i_boxed_2106_; size_t v_stop_boxed_2107_; lean_object* v_res_2108_; 
v_i_boxed_2106_ = lean_unbox_usize(v_i_2103_);
lean_dec(v_i_2103_);
v_stop_boxed_2107_ = lean_unbox_usize(v_stop_2104_);
lean_dec(v_stop_2104_);
v_res_2108_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0(v_as_2102_, v_i_boxed_2106_, v_stop_boxed_2107_, v_b_2105_);
lean_dec_ref(v_as_2102_);
return v_res_2108_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList(lean_object* v_ids_2110_){
_start:
{
lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; uint8_t v___x_2114_; 
v___x_2111_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList___closed__0));
v___x_2112_ = lean_unsigned_to_nat(0u);
v___x_2113_ = lean_array_get_size(v_ids_2110_);
v___x_2114_ = lean_nat_dec_lt(v___x_2112_, v___x_2113_);
if (v___x_2114_ == 0)
{
return v___x_2111_;
}
else
{
size_t v___x_2115_; size_t v___x_2116_; lean_object* v___x_2117_; 
v___x_2115_ = ((size_t)0ULL);
v___x_2116_ = lean_usize_of_nat(v___x_2113_);
v___x_2117_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0(v_ids_2110_, v___x_2115_, v___x_2116_, v___x_2111_);
return v___x_2117_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList___boxed(lean_object* v_ids_2118_){
_start:
{
lean_object* v_res_2119_; 
v_res_2119_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList(v_ids_2118_);
lean_dec_ref(v_ids_2118_);
return v_res_2119_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHint(lean_object* v_hint_2121_){
_start:
{
lean_object* v_fst_2122_; lean_object* v_snd_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v_fst_2122_ = lean_ctor_get(v_hint_2121_, 0);
lean_inc(v_fst_2122_);
v_snd_2123_ = lean_ctor_get(v_hint_2121_, 1);
lean_inc(v_snd_2123_);
lean_dec_ref(v_hint_2121_);
v___x_2124_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHint___closed__0));
v___x_2125_ = l_Nat_reprFast(v_fst_2122_);
v___x_2126_ = lean_string_append(v___x_2124_, v___x_2125_);
lean_dec_ref(v___x_2125_);
v___x_2127_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0___closed__0));
v___x_2128_ = lean_string_append(v___x_2126_, v___x_2127_);
v___x_2129_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList(v_snd_2123_);
lean_dec(v_snd_2123_);
v___x_2130_ = lean_string_append(v___x_2128_, v___x_2129_);
lean_dec_ref(v___x_2129_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints_spec__0(lean_object* v_as_2131_, size_t v_i_2132_, size_t v_stop_2133_, lean_object* v_b_2134_){
_start:
{
uint8_t v___x_2135_; 
v___x_2135_ = lean_usize_dec_eq(v_i_2132_, v_stop_2133_);
if (v___x_2135_ == 0)
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; size_t v___x_2139_; size_t v___x_2140_; 
v___x_2136_ = lean_array_uget_borrowed(v_as_2131_, v_i_2132_);
lean_inc(v___x_2136_);
v___x_2137_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHint(v___x_2136_);
v___x_2138_ = lean_string_append(v_b_2134_, v___x_2137_);
lean_dec_ref(v___x_2137_);
v___x_2139_ = ((size_t)1ULL);
v___x_2140_ = lean_usize_add(v_i_2132_, v___x_2139_);
v_i_2132_ = v___x_2140_;
v_b_2134_ = v___x_2138_;
goto _start;
}
else
{
return v_b_2134_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints_spec__0___boxed(lean_object* v_as_2142_, lean_object* v_i_2143_, lean_object* v_stop_2144_, lean_object* v_b_2145_){
_start:
{
size_t v_i_boxed_2146_; size_t v_stop_boxed_2147_; lean_object* v_res_2148_; 
v_i_boxed_2146_ = lean_unbox_usize(v_i_2143_);
lean_dec(v_i_2143_);
v_stop_boxed_2147_ = lean_unbox_usize(v_stop_2144_);
lean_dec(v_stop_2144_);
v_res_2148_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints_spec__0(v_as_2142_, v_i_boxed_2146_, v_stop_boxed_2147_, v_b_2145_);
lean_dec_ref(v_as_2142_);
return v_res_2148_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints(lean_object* v_hints_2149_){
_start:
{
lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; uint8_t v___x_2153_; 
v___x_2150_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList___closed__0));
v___x_2151_ = lean_unsigned_to_nat(0u);
v___x_2152_ = lean_array_get_size(v_hints_2149_);
v___x_2153_ = lean_nat_dec_lt(v___x_2151_, v___x_2152_);
if (v___x_2153_ == 0)
{
return v___x_2150_;
}
else
{
size_t v___x_2154_; size_t v___x_2155_; lean_object* v___x_2156_; 
v___x_2154_ = ((size_t)0ULL);
v___x_2155_ = lean_usize_of_nat(v___x_2152_);
v___x_2156_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints_spec__0(v_hints_2149_, v___x_2154_, v___x_2155_, v___x_2150_);
return v___x_2156_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints___boxed(lean_object* v_hints_2157_){
_start:
{
lean_object* v_res_2158_; 
v_res_2158_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints(v_hints_2157_);
lean_dec_ref(v_hints_2157_);
return v_res_2158_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause_spec__0(lean_object* v_as_2159_, size_t v_i_2160_, size_t v_stop_2161_, lean_object* v_b_2162_){
_start:
{
uint8_t v___x_2163_; 
v___x_2163_ = lean_usize_dec_eq(v_i_2160_, v_stop_2161_);
if (v___x_2163_ == 0)
{
lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; size_t v___x_2169_; size_t v___x_2170_; 
v___x_2164_ = lean_array_uget_borrowed(v_as_2159_, v_i_2160_);
v___x_2165_ = l_Int_repr(v___x_2164_);
v___x_2166_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0___closed__0));
v___x_2167_ = lean_string_append(v___x_2165_, v___x_2166_);
v___x_2168_ = lean_string_append(v_b_2162_, v___x_2167_);
lean_dec_ref(v___x_2167_);
v___x_2169_ = ((size_t)1ULL);
v___x_2170_ = lean_usize_add(v_i_2160_, v___x_2169_);
v_i_2160_ = v___x_2170_;
v_b_2162_ = v___x_2168_;
goto _start;
}
else
{
return v_b_2162_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause_spec__0___boxed(lean_object* v_as_2172_, lean_object* v_i_2173_, lean_object* v_stop_2174_, lean_object* v_b_2175_){
_start:
{
size_t v_i_boxed_2176_; size_t v_stop_boxed_2177_; lean_object* v_res_2178_; 
v_i_boxed_2176_ = lean_unbox_usize(v_i_2173_);
lean_dec(v_i_2173_);
v_stop_boxed_2177_ = lean_unbox_usize(v_stop_2174_);
lean_dec(v_stop_2174_);
v_res_2178_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause_spec__0(v_as_2172_, v_i_boxed_2176_, v_stop_boxed_2177_, v_b_2175_);
lean_dec_ref(v_as_2172_);
return v_res_2178_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause(lean_object* v_clause_2179_){
_start:
{
lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; uint8_t v___x_2183_; 
v___x_2180_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList___closed__0));
v___x_2181_ = lean_unsigned_to_nat(0u);
v___x_2182_ = lean_array_get_size(v_clause_2179_);
v___x_2183_ = lean_nat_dec_lt(v___x_2181_, v___x_2182_);
if (v___x_2183_ == 0)
{
return v___x_2180_;
}
else
{
size_t v___x_2184_; size_t v___x_2185_; lean_object* v___x_2186_; 
v___x_2184_ = ((size_t)0ULL);
v___x_2185_ = lean_usize_of_nat(v___x_2182_);
v___x_2186_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause_spec__0(v_clause_2179_, v___x_2184_, v___x_2185_, v___x_2180_);
return v___x_2186_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause___boxed(lean_object* v_clause_2187_){
_start:
{
lean_object* v_res_2188_; 
v_res_2188_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause(v_clause_2187_);
lean_dec_ref(v_clause_2187_);
return v_res_2188_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize(lean_object* v_a_2193_){
_start:
{
switch(lean_obj_tag(v_a_2193_))
{
case 0:
{
lean_object* v_id_2194_; lean_object* v_rupHints_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v_id_2194_ = lean_ctor_get(v_a_2193_, 0);
lean_inc(v_id_2194_);
v_rupHints_2195_ = lean_ctor_get(v_a_2193_, 1);
lean_inc_ref(v_rupHints_2195_);
lean_dec_ref_known(v_a_2193_, 2);
v___x_2196_ = l_Nat_reprFast(v_id_2194_);
v___x_2197_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__0));
v___x_2198_ = lean_string_append(v___x_2196_, v___x_2197_);
v___x_2199_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList(v_rupHints_2195_);
lean_dec_ref(v_rupHints_2195_);
v___x_2200_ = lean_string_append(v___x_2198_, v___x_2199_);
lean_dec_ref(v___x_2199_);
v___x_2201_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__1));
v___x_2202_ = lean_string_append(v___x_2200_, v___x_2201_);
return v___x_2202_;
}
case 1:
{
lean_object* v_id_2203_; lean_object* v_c_2204_; lean_object* v_rupHints_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
v_id_2203_ = lean_ctor_get(v_a_2193_, 0);
lean_inc(v_id_2203_);
v_c_2204_ = lean_ctor_get(v_a_2193_, 1);
lean_inc(v_c_2204_);
v_rupHints_2205_ = lean_ctor_get(v_a_2193_, 2);
lean_inc_ref(v_rupHints_2205_);
lean_dec_ref_known(v_a_2193_, 3);
v___x_2206_ = l_Nat_reprFast(v_id_2203_);
v___x_2207_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0___closed__0));
v___x_2208_ = lean_string_append(v___x_2206_, v___x_2207_);
v___x_2209_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause(v_c_2204_);
lean_dec(v_c_2204_);
v___x_2210_ = lean_string_append(v___x_2208_, v___x_2209_);
lean_dec_ref(v___x_2209_);
v___x_2211_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__2));
v___x_2212_ = lean_string_append(v___x_2210_, v___x_2211_);
v___x_2213_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList(v_rupHints_2205_);
lean_dec_ref(v_rupHints_2205_);
v___x_2214_ = lean_string_append(v___x_2212_, v___x_2213_);
lean_dec_ref(v___x_2213_);
v___x_2215_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__1));
v___x_2216_ = lean_string_append(v___x_2214_, v___x_2215_);
return v___x_2216_;
}
case 2:
{
lean_object* v_id_2217_; lean_object* v_c_2218_; lean_object* v_rupHints_2219_; lean_object* v_ratHints_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
v_id_2217_ = lean_ctor_get(v_a_2193_, 0);
lean_inc(v_id_2217_);
v_c_2218_ = lean_ctor_get(v_a_2193_, 1);
lean_inc(v_c_2218_);
v_rupHints_2219_ = lean_ctor_get(v_a_2193_, 3);
lean_inc_ref(v_rupHints_2219_);
v_ratHints_2220_ = lean_ctor_get(v_a_2193_, 4);
lean_inc_ref(v_ratHints_2220_);
lean_dec_ref_known(v_a_2193_, 5);
v___x_2221_ = l_Nat_reprFast(v_id_2217_);
v___x_2222_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0___closed__0));
v___x_2223_ = lean_string_append(v___x_2221_, v___x_2222_);
v___x_2224_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause(v_c_2218_);
lean_dec(v_c_2218_);
v___x_2225_ = lean_string_append(v___x_2223_, v___x_2224_);
lean_dec_ref(v___x_2224_);
v___x_2226_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__2));
v___x_2227_ = lean_string_append(v___x_2225_, v___x_2226_);
v___x_2228_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList(v_rupHints_2219_);
lean_dec_ref(v_rupHints_2219_);
v___x_2229_ = lean_string_append(v___x_2227_, v___x_2228_);
lean_dec_ref(v___x_2228_);
v___x_2230_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints(v_ratHints_2220_);
lean_dec_ref(v_ratHints_2220_);
v___x_2231_ = lean_string_append(v___x_2229_, v___x_2230_);
lean_dec_ref(v___x_2230_);
v___x_2232_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__1));
v___x_2233_ = lean_string_append(v___x_2231_, v___x_2232_);
return v___x_2233_;
}
default: 
{
lean_object* v_ids_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
v_ids_2234_ = lean_ctor_get(v_a_2193_, 0);
lean_inc_ref(v_ids_2234_);
lean_dec_ref_known(v_a_2193_, 1);
v___x_2235_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__3));
v___x_2236_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList(v_ids_2234_);
lean_dec_ref(v_ids_2234_);
v___x_2237_ = lean_string_append(v___x_2235_, v___x_2236_);
lean_dec_ref(v___x_2236_);
v___x_2238_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__1));
v___x_2239_ = lean_string_append(v___x_2237_, v___x_2238_);
return v___x_2239_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Tactic_BVDecide_LRAT_lratProofToString_spec__0(lean_object* v_as_2241_, size_t v_i_2242_, size_t v_stop_2243_, lean_object* v_b_2244_){
_start:
{
uint8_t v___x_2245_; 
v___x_2245_ = lean_usize_dec_eq(v_i_2242_, v_stop_2243_);
if (v___x_2245_ == 0)
{
lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; size_t v___x_2251_; size_t v___x_2252_; 
v___x_2246_ = lean_array_uget_borrowed(v_as_2241_, v_i_2242_);
lean_inc(v___x_2246_);
v___x_2247_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize(v___x_2246_);
v___x_2248_ = lean_string_append(v_b_2244_, v___x_2247_);
lean_dec_ref(v___x_2247_);
v___x_2249_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Tactic_BVDecide_LRAT_lratProofToString_spec__0___closed__0));
v___x_2250_ = lean_string_append(v___x_2248_, v___x_2249_);
v___x_2251_ = ((size_t)1ULL);
v___x_2252_ = lean_usize_add(v_i_2242_, v___x_2251_);
v_i_2242_ = v___x_2252_;
v_b_2244_ = v___x_2250_;
goto _start;
}
else
{
return v_b_2244_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Tactic_BVDecide_LRAT_lratProofToString_spec__0___boxed(lean_object* v_as_2254_, lean_object* v_i_2255_, lean_object* v_stop_2256_, lean_object* v_b_2257_){
_start:
{
size_t v_i_boxed_2258_; size_t v_stop_boxed_2259_; lean_object* v_res_2260_; 
v_i_boxed_2258_ = lean_unbox_usize(v_i_2255_);
lean_dec(v_i_2255_);
v_stop_boxed_2259_ = lean_unbox_usize(v_stop_2256_);
lean_dec(v_stop_2256_);
v_res_2260_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Tactic_BVDecide_LRAT_lratProofToString_spec__0(v_as_2254_, v_i_boxed_2258_, v_stop_boxed_2259_, v_b_2257_);
lean_dec_ref(v_as_2254_);
return v_res_2260_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_lratProofToString(lean_object* v_proof_2261_){
_start:
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; uint8_t v___x_2265_; 
v___x_2262_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList___closed__0));
v___x_2263_ = lean_unsigned_to_nat(0u);
v___x_2264_ = lean_array_get_size(v_proof_2261_);
v___x_2265_ = lean_nat_dec_lt(v___x_2263_, v___x_2264_);
if (v___x_2265_ == 0)
{
return v___x_2262_;
}
else
{
size_t v___x_2266_; size_t v___x_2267_; lean_object* v___x_2268_; 
v___x_2266_ = ((size_t)0ULL);
v___x_2267_ = lean_usize_of_nat(v___x_2264_);
v___x_2268_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Tactic_BVDecide_LRAT_lratProofToString_spec__0(v_proof_2261_, v___x_2266_, v___x_2267_, v___x_2262_);
return v___x_2268_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_lratProofToString___boxed(lean_object* v_proof_2269_){
_start:
{
lean_object* v_res_2270_; 
v_res_2270_ = l_Std_Tactic_BVDecide_LRAT_lratProofToString(v_proof_2269_);
lean_dec_ref(v_proof_2269_);
return v_res_2270_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_startDelete(lean_object* v_acc_2271_){
_start:
{
uint8_t v___x_2272_; lean_object* v___x_2273_; 
v___x_2272_ = 100;
v___x_2273_ = lean_byte_array_push(v_acc_2271_, v___x_2272_);
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_variableLengthEncode(lean_object* v_acc_2274_, uint64_t v_lit_2275_){
_start:
{
uint8_t v___y_2277_; uint64_t v___x_2282_; uint8_t v___x_2283_; 
v___x_2282_ = 0ULL;
v___x_2283_ = lean_uint64_dec_eq(v_lit_2275_, v___x_2282_);
if (v___x_2283_ == 0)
{
uint64_t v___x_2284_; uint8_t v___x_2285_; 
v___x_2284_ = 127ULL;
v___x_2285_ = lean_uint64_dec_lt(v___x_2284_, v_lit_2275_);
if (v___x_2285_ == 0)
{
uint8_t v___x_2286_; uint8_t v___x_2287_; uint8_t v___x_2288_; 
v___x_2286_ = lean_uint64_to_uint8(v_lit_2275_);
v___x_2287_ = 127;
v___x_2288_ = lean_uint8_land(v___x_2286_, v___x_2287_);
v___y_2277_ = v___x_2288_;
goto v___jp_2276_;
}
else
{
uint8_t v___x_2289_; uint8_t v___x_2290_; uint8_t v___x_2291_; uint8_t v___x_2292_; uint8_t v___x_2293_; 
v___x_2289_ = lean_uint64_to_uint8(v_lit_2275_);
v___x_2290_ = 127;
v___x_2291_ = lean_uint8_land(v___x_2289_, v___x_2290_);
v___x_2292_ = 128;
v___x_2293_ = lean_uint8_lor(v___x_2291_, v___x_2292_);
v___y_2277_ = v___x_2293_;
goto v___jp_2276_;
}
}
else
{
return v_acc_2274_;
}
v___jp_2276_:
{
lean_object* v_acc_2278_; uint64_t v___x_2279_; uint64_t v___x_2280_; 
v_acc_2278_ = lean_byte_array_push(v_acc_2274_, v___y_2277_);
v___x_2279_ = 7ULL;
v___x_2280_ = lean_uint64_shift_right(v_lit_2275_, v___x_2279_);
v_acc_2274_ = v_acc_2278_;
v_lit_2275_ = v___x_2280_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_variableLengthEncode___boxed(lean_object* v_acc_2294_, lean_object* v_lit_2295_){
_start:
{
uint64_t v_lit_boxed_2296_; lean_object* v_res_2297_; 
v_lit_boxed_2296_ = lean_unbox_uint64(v_lit_2295_);
lean_dec_ref(v_lit_2295_);
v_res_2297_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_variableLengthEncode(v_acc_2294_, v_lit_boxed_2296_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt_spec__0(lean_object* v_msg_2298_){
_start:
{
lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2299_ = l_ByteArray_empty;
v___x_2300_ = lean_panic_fn_borrowed(v___x_2299_, v_msg_2298_);
return v___x_2300_;
}
}
static lean_object* _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__0(void){
_start:
{
lean_object* v___x_2301_; 
v___x_2301_ = lean_cstr_to_nat("18446744073709551615");
return v___x_2301_;
}
}
static lean_object* _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__4(void){
_start:
{
lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; 
v___x_2305_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__3));
v___x_2306_ = lean_unsigned_to_nat(4u);
v___x_2307_ = lean_unsigned_to_nat(400u);
v___x_2308_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__2));
v___x_2309_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__1));
v___x_2310_ = l_mkPanicMessageWithDecl(v___x_2309_, v___x_2308_, v___x_2307_, v___x_2306_, v___x_2305_);
return v___x_2310_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(lean_object* v_acc_2311_, lean_object* v_lit_2312_){
_start:
{
lean_object* v___y_2314_; lean_object* v___x_2321_; uint8_t v___x_2322_; 
v___x_2321_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0);
v___x_2322_ = lean_int_dec_lt(v___x_2321_, v_lit_2312_);
if (v___x_2322_ == 0)
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2323_ = lean_unsigned_to_nat(2u);
v___x_2324_ = lean_nat_abs(v_lit_2312_);
v___x_2325_ = lean_nat_mul(v___x_2323_, v___x_2324_);
lean_dec(v___x_2324_);
v___x_2326_ = lean_unsigned_to_nat(1u);
v___x_2327_ = lean_nat_add(v___x_2325_, v___x_2326_);
lean_dec(v___x_2325_);
v___y_2314_ = v___x_2327_;
goto v___jp_2313_;
}
else
{
lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; 
v___x_2328_ = lean_unsigned_to_nat(2u);
v___x_2329_ = lean_nat_abs(v_lit_2312_);
v___x_2330_ = lean_nat_mul(v___x_2328_, v___x_2329_);
lean_dec(v___x_2329_);
v___y_2314_ = v___x_2330_;
goto v___jp_2313_;
}
v___jp_2313_:
{
lean_object* v___x_2315_; uint8_t v___x_2316_; 
v___x_2315_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__0);
v___x_2316_ = lean_nat_dec_le(v___y_2314_, v___x_2315_);
if (v___x_2316_ == 0)
{
lean_object* v___x_2317_; lean_object* v___x_2318_; 
lean_dec(v___y_2314_);
lean_dec_ref(v_acc_2311_);
v___x_2317_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__4, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__4_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__4);
v___x_2318_ = l_panic___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt_spec__0(v___x_2317_);
return v___x_2318_;
}
else
{
uint64_t v_mapped_2319_; lean_object* v___x_2320_; 
v_mapped_2319_ = lean_uint64_of_nat(v___y_2314_);
lean_dec(v___y_2314_);
v___x_2320_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_variableLengthEncode(v_acc_2311_, v_mapped_2319_);
return v___x_2320_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___boxed(lean_object* v_acc_2331_, lean_object* v_lit_2332_){
_start:
{
lean_object* v_res_2333_; 
v_res_2333_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_acc_2331_, v_lit_2332_);
lean_dec(v_lit_2332_);
return v_res_2333_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_zeroByte(lean_object* v_acc_2334_){
_start:
{
uint8_t v___x_2335_; lean_object* v___x_2336_; 
v___x_2335_ = 0;
v___x_2336_ = lean_byte_array_push(v_acc_2334_, v___x_2335_);
return v___x_2336_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addNat(lean_object* v_acc_2337_, lean_object* v_n_2338_){
_start:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2339_ = lean_nat_to_int(v_n_2338_);
v___x_2340_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_acc_2337_, v___x_2339_);
lean_dec(v___x_2339_);
return v___x_2340_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_startAdd(lean_object* v_acc_2341_){
_start:
{
uint8_t v___x_2342_; lean_object* v___x_2343_; 
v___x_2342_ = 97;
v___x_2343_ = lean_byte_array_push(v_acc_2341_, v___x_2342_);
return v___x_2343_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0_spec__0(lean_object* v_as_2344_, size_t v_i_2345_, size_t v_stop_2346_, lean_object* v_b_2347_){
_start:
{
uint8_t v___x_2348_; 
v___x_2348_ = lean_usize_dec_eq(v_i_2345_, v_stop_2346_);
if (v___x_2348_ == 0)
{
lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; size_t v___x_2352_; size_t v___x_2353_; 
v___x_2349_ = lean_array_uget_borrowed(v_as_2344_, v_i_2345_);
lean_inc(v___x_2349_);
v___x_2350_ = lean_nat_to_int(v___x_2349_);
v___x_2351_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_b_2347_, v___x_2350_);
lean_dec(v___x_2350_);
v___x_2352_ = ((size_t)1ULL);
v___x_2353_ = lean_usize_add(v_i_2345_, v___x_2352_);
v_i_2345_ = v___x_2353_;
v_b_2347_ = v___x_2351_;
goto _start;
}
else
{
return v_b_2347_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0_spec__0___boxed(lean_object* v_as_2355_, lean_object* v_i_2356_, lean_object* v_stop_2357_, lean_object* v_b_2358_){
_start:
{
size_t v_i_boxed_2359_; size_t v_stop_boxed_2360_; lean_object* v_res_2361_; 
v_i_boxed_2359_ = lean_unbox_usize(v_i_2356_);
lean_dec(v_i_2356_);
v_stop_boxed_2360_ = lean_unbox_usize(v_stop_2357_);
lean_dec(v_stop_2357_);
v_res_2361_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0_spec__0(v_as_2355_, v_i_boxed_2359_, v_stop_boxed_2360_, v_b_2358_);
lean_dec_ref(v_as_2355_);
return v_res_2361_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(lean_object* v_as_2362_, size_t v_i_2363_, size_t v_stop_2364_, lean_object* v_b_2365_){
_start:
{
uint8_t v___x_2366_; 
v___x_2366_ = lean_usize_dec_eq(v_i_2363_, v_stop_2364_);
if (v___x_2366_ == 0)
{
lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; size_t v___x_2370_; size_t v___x_2371_; lean_object* v___x_2372_; 
v___x_2367_ = lean_array_uget_borrowed(v_as_2362_, v_i_2363_);
lean_inc(v___x_2367_);
v___x_2368_ = lean_nat_to_int(v___x_2367_);
v___x_2369_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_b_2365_, v___x_2368_);
lean_dec(v___x_2368_);
v___x_2370_ = ((size_t)1ULL);
v___x_2371_ = lean_usize_add(v_i_2363_, v___x_2370_);
v___x_2372_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0_spec__0(v_as_2362_, v___x_2371_, v_stop_2364_, v___x_2369_);
return v___x_2372_;
}
else
{
return v_b_2365_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0___boxed(lean_object* v_as_2373_, lean_object* v_i_2374_, lean_object* v_stop_2375_, lean_object* v_b_2376_){
_start:
{
size_t v_i_boxed_2377_; size_t v_stop_boxed_2378_; lean_object* v_res_2379_; 
v_i_boxed_2377_ = lean_unbox_usize(v_i_2374_);
lean_dec(v_i_2374_);
v_stop_boxed_2378_ = lean_unbox_usize(v_stop_2375_);
lean_dec(v_stop_2375_);
v_res_2379_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(v_as_2373_, v_i_boxed_2377_, v_stop_boxed_2378_, v_b_2376_);
lean_dec_ref(v_as_2373_);
return v_res_2379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2_spec__3(lean_object* v_as_2380_, size_t v_i_2381_, size_t v_stop_2382_, lean_object* v_b_2383_){
_start:
{
lean_object* v___y_2385_; uint8_t v___x_2389_; 
v___x_2389_ = lean_usize_dec_eq(v_i_2381_, v_stop_2382_);
if (v___x_2389_ == 0)
{
lean_object* v___x_2390_; lean_object* v_fst_2391_; lean_object* v_snd_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v_acc_2396_; lean_object* v___x_2397_; uint8_t v___x_2398_; 
v___x_2390_ = lean_array_uget_borrowed(v_as_2380_, v_i_2381_);
v_fst_2391_ = lean_ctor_get(v___x_2390_, 0);
v_snd_2392_ = lean_ctor_get(v___x_2390_, 1);
v___x_2393_ = lean_unsigned_to_nat(0u);
lean_inc(v_fst_2391_);
v___x_2394_ = lean_nat_to_int(v_fst_2391_);
v___x_2395_ = lean_int_neg(v___x_2394_);
lean_dec(v___x_2394_);
v_acc_2396_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_b_2383_, v___x_2395_);
lean_dec(v___x_2395_);
v___x_2397_ = lean_array_get_size(v_snd_2392_);
v___x_2398_ = lean_nat_dec_lt(v___x_2393_, v___x_2397_);
if (v___x_2398_ == 0)
{
v___y_2385_ = v_acc_2396_;
goto v___jp_2384_;
}
else
{
size_t v___x_2399_; size_t v___x_2400_; lean_object* v___x_2401_; 
v___x_2399_ = ((size_t)0ULL);
v___x_2400_ = lean_usize_of_nat(v___x_2397_);
v___x_2401_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(v_snd_2392_, v___x_2399_, v___x_2400_, v_acc_2396_);
v___y_2385_ = v___x_2401_;
goto v___jp_2384_;
}
}
else
{
return v_b_2383_;
}
v___jp_2384_:
{
size_t v___x_2386_; size_t v___x_2387_; 
v___x_2386_ = ((size_t)1ULL);
v___x_2387_ = lean_usize_add(v_i_2381_, v___x_2386_);
v_i_2381_ = v___x_2387_;
v_b_2383_ = v___y_2385_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2_spec__3___boxed(lean_object* v_as_2402_, lean_object* v_i_2403_, lean_object* v_stop_2404_, lean_object* v_b_2405_){
_start:
{
size_t v_i_boxed_2406_; size_t v_stop_boxed_2407_; lean_object* v_res_2408_; 
v_i_boxed_2406_ = lean_unbox_usize(v_i_2403_);
lean_dec(v_i_2403_);
v_stop_boxed_2407_ = lean_unbox_usize(v_stop_2404_);
lean_dec(v_stop_2404_);
v_res_2408_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2_spec__3(v_as_2402_, v_i_boxed_2406_, v_stop_boxed_2407_, v_b_2405_);
lean_dec_ref(v_as_2402_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2(lean_object* v_as_2409_, size_t v_i_2410_, size_t v_stop_2411_, lean_object* v_b_2412_){
_start:
{
lean_object* v___y_2414_; uint8_t v___x_2418_; 
v___x_2418_ = lean_usize_dec_eq(v_i_2410_, v_stop_2411_);
if (v___x_2418_ == 0)
{
lean_object* v___x_2419_; lean_object* v_fst_2420_; lean_object* v_snd_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v_acc_2425_; lean_object* v___x_2426_; uint8_t v___x_2427_; 
v___x_2419_ = lean_array_uget_borrowed(v_as_2409_, v_i_2410_);
v_fst_2420_ = lean_ctor_get(v___x_2419_, 0);
v_snd_2421_ = lean_ctor_get(v___x_2419_, 1);
v___x_2422_ = lean_unsigned_to_nat(0u);
lean_inc(v_fst_2420_);
v___x_2423_ = lean_nat_to_int(v_fst_2420_);
v___x_2424_ = lean_int_neg(v___x_2423_);
lean_dec(v___x_2423_);
v_acc_2425_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_b_2412_, v___x_2424_);
lean_dec(v___x_2424_);
v___x_2426_ = lean_array_get_size(v_snd_2421_);
v___x_2427_ = lean_nat_dec_lt(v___x_2422_, v___x_2426_);
if (v___x_2427_ == 0)
{
v___y_2414_ = v_acc_2425_;
goto v___jp_2413_;
}
else
{
size_t v___x_2428_; size_t v___x_2429_; lean_object* v___x_2430_; 
v___x_2428_ = ((size_t)0ULL);
v___x_2429_ = lean_usize_of_nat(v___x_2426_);
v___x_2430_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(v_snd_2421_, v___x_2428_, v___x_2429_, v_acc_2425_);
v___y_2414_ = v___x_2430_;
goto v___jp_2413_;
}
}
else
{
return v_b_2412_;
}
v___jp_2413_:
{
size_t v___x_2415_; size_t v___x_2416_; lean_object* v___x_2417_; 
v___x_2415_ = ((size_t)1ULL);
v___x_2416_ = lean_usize_add(v_i_2410_, v___x_2415_);
v___x_2417_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2_spec__3(v_as_2409_, v___x_2416_, v_stop_2411_, v___y_2414_);
return v___x_2417_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2___boxed(lean_object* v_as_2431_, lean_object* v_i_2432_, lean_object* v_stop_2433_, lean_object* v_b_2434_){
_start:
{
size_t v_i_boxed_2435_; size_t v_stop_boxed_2436_; lean_object* v_res_2437_; 
v_i_boxed_2435_ = lean_unbox_usize(v_i_2432_);
lean_dec(v_i_2432_);
v_stop_boxed_2436_ = lean_unbox_usize(v_stop_2433_);
lean_dec(v_stop_2433_);
v_res_2437_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2(v_as_2431_, v_i_boxed_2435_, v_stop_boxed_2436_, v_b_2434_);
lean_dec_ref(v_as_2431_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__1(lean_object* v_as_2438_, size_t v_i_2439_, size_t v_stop_2440_, lean_object* v_b_2441_){
_start:
{
uint8_t v___x_2442_; 
v___x_2442_ = lean_usize_dec_eq(v_i_2439_, v_stop_2440_);
if (v___x_2442_ == 0)
{
lean_object* v___x_2443_; lean_object* v___x_2444_; size_t v___x_2445_; size_t v___x_2446_; 
v___x_2443_ = lean_array_uget_borrowed(v_as_2438_, v_i_2439_);
v___x_2444_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_b_2441_, v___x_2443_);
v___x_2445_ = ((size_t)1ULL);
v___x_2446_ = lean_usize_add(v_i_2439_, v___x_2445_);
v_i_2439_ = v___x_2446_;
v_b_2441_ = v___x_2444_;
goto _start;
}
else
{
return v_b_2441_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__1___boxed(lean_object* v_as_2448_, lean_object* v_i_2449_, lean_object* v_stop_2450_, lean_object* v_b_2451_){
_start:
{
size_t v_i_boxed_2452_; size_t v_stop_boxed_2453_; lean_object* v_res_2454_; 
v_i_boxed_2452_ = lean_unbox_usize(v_i_2449_);
lean_dec(v_i_2449_);
v_stop_boxed_2453_ = lean_unbox_usize(v_stop_2450_);
lean_dec(v_stop_2450_);
v_res_2454_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__1(v_as_2448_, v_i_boxed_2452_, v_stop_boxed_2453_, v_b_2451_);
lean_dec_ref(v_as_2448_);
return v_res_2454_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go(lean_object* v_proof_2455_, lean_object* v_idx_2456_, lean_object* v_acc_2457_){
_start:
{
lean_object* v___y_2459_; lean_object* v___y_2464_; lean_object* v___y_2468_; lean_object* v___y_2472_; lean_object* v___y_2476_; lean_object* v___x_2479_; uint8_t v___x_2480_; 
v___x_2479_ = lean_array_get_size(v_proof_2455_);
v___x_2480_ = lean_nat_dec_lt(v_idx_2456_, v___x_2479_);
if (v___x_2480_ == 0)
{
lean_dec(v_idx_2456_);
return v_acc_2457_;
}
else
{
lean_object* v___x_2481_; 
v___x_2481_ = lean_array_fget_borrowed(v_proof_2455_, v_idx_2456_);
switch(lean_obj_tag(v___x_2481_))
{
case 0:
{
lean_object* v_id_2482_; lean_object* v_rupHints_2483_; uint8_t v___x_2484_; lean_object* v_acc_2485_; lean_object* v___x_2486_; lean_object* v_acc_2487_; uint8_t v___x_2488_; lean_object* v_acc_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; uint8_t v___x_2492_; 
v_id_2482_ = lean_ctor_get(v___x_2481_, 0);
v_rupHints_2483_ = lean_ctor_get(v___x_2481_, 1);
v___x_2484_ = 97;
v_acc_2485_ = lean_byte_array_push(v_acc_2457_, v___x_2484_);
lean_inc(v_id_2482_);
v___x_2486_ = lean_nat_to_int(v_id_2482_);
v_acc_2487_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_acc_2485_, v___x_2486_);
lean_dec(v___x_2486_);
v___x_2488_ = 0;
v_acc_2489_ = lean_byte_array_push(v_acc_2487_, v___x_2488_);
v___x_2490_ = lean_unsigned_to_nat(0u);
v___x_2491_ = lean_array_get_size(v_rupHints_2483_);
v___x_2492_ = lean_nat_dec_lt(v___x_2490_, v___x_2491_);
if (v___x_2492_ == 0)
{
v___y_2468_ = v_acc_2489_;
goto v___jp_2467_;
}
else
{
size_t v___x_2493_; size_t v___x_2494_; lean_object* v___x_2495_; 
v___x_2493_ = ((size_t)0ULL);
v___x_2494_ = lean_usize_of_nat(v___x_2491_);
v___x_2495_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(v_rupHints_2483_, v___x_2493_, v___x_2494_, v_acc_2489_);
v___y_2468_ = v___x_2495_;
goto v___jp_2467_;
}
}
case 1:
{
lean_object* v_id_2496_; lean_object* v_c_2497_; lean_object* v_rupHints_2498_; uint8_t v___x_2499_; lean_object* v_acc_2500_; lean_object* v___x_2501_; lean_object* v_acc_2502_; lean_object* v___x_2503_; lean_object* v___y_2505_; lean_object* v___x_2513_; uint8_t v___x_2514_; 
v_id_2496_ = lean_ctor_get(v___x_2481_, 0);
v_c_2497_ = lean_ctor_get(v___x_2481_, 1);
v_rupHints_2498_ = lean_ctor_get(v___x_2481_, 2);
v___x_2499_ = 97;
v_acc_2500_ = lean_byte_array_push(v_acc_2457_, v___x_2499_);
lean_inc(v_id_2496_);
v___x_2501_ = lean_nat_to_int(v_id_2496_);
v_acc_2502_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_acc_2500_, v___x_2501_);
lean_dec(v___x_2501_);
v___x_2503_ = lean_unsigned_to_nat(0u);
v___x_2513_ = lean_array_get_size(v_c_2497_);
v___x_2514_ = lean_nat_dec_lt(v___x_2503_, v___x_2513_);
if (v___x_2514_ == 0)
{
v___y_2505_ = v_acc_2502_;
goto v___jp_2504_;
}
else
{
size_t v___x_2515_; size_t v___x_2516_; lean_object* v___x_2517_; 
v___x_2515_ = ((size_t)0ULL);
v___x_2516_ = lean_usize_of_nat(v___x_2513_);
v___x_2517_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__1(v_c_2497_, v___x_2515_, v___x_2516_, v_acc_2502_);
v___y_2505_ = v___x_2517_;
goto v___jp_2504_;
}
v___jp_2504_:
{
uint8_t v___x_2506_; lean_object* v_acc_2507_; lean_object* v___x_2508_; uint8_t v___x_2509_; 
v___x_2506_ = 0;
v_acc_2507_ = lean_byte_array_push(v___y_2505_, v___x_2506_);
v___x_2508_ = lean_array_get_size(v_rupHints_2498_);
v___x_2509_ = lean_nat_dec_lt(v___x_2503_, v___x_2508_);
if (v___x_2509_ == 0)
{
v___y_2472_ = v_acc_2507_;
goto v___jp_2471_;
}
else
{
size_t v___x_2510_; size_t v___x_2511_; lean_object* v___x_2512_; 
v___x_2510_ = ((size_t)0ULL);
v___x_2511_ = lean_usize_of_nat(v___x_2508_);
v___x_2512_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(v_rupHints_2498_, v___x_2510_, v___x_2511_, v_acc_2507_);
v___y_2472_ = v___x_2512_;
goto v___jp_2471_;
}
}
}
case 2:
{
lean_object* v_id_2518_; lean_object* v_c_2519_; lean_object* v_rupHints_2520_; lean_object* v_ratHints_2521_; uint8_t v___x_2522_; lean_object* v_acc_2523_; lean_object* v___x_2524_; lean_object* v_acc_2525_; lean_object* v___x_2526_; lean_object* v___y_2528_; lean_object* v___y_2535_; lean_object* v___x_2543_; uint8_t v___x_2544_; 
v_id_2518_ = lean_ctor_get(v___x_2481_, 0);
v_c_2519_ = lean_ctor_get(v___x_2481_, 1);
v_rupHints_2520_ = lean_ctor_get(v___x_2481_, 3);
v_ratHints_2521_ = lean_ctor_get(v___x_2481_, 4);
v___x_2522_ = 97;
v_acc_2523_ = lean_byte_array_push(v_acc_2457_, v___x_2522_);
lean_inc(v_id_2518_);
v___x_2524_ = lean_nat_to_int(v_id_2518_);
v_acc_2525_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_acc_2523_, v___x_2524_);
lean_dec(v___x_2524_);
v___x_2526_ = lean_unsigned_to_nat(0u);
v___x_2543_ = lean_array_get_size(v_c_2519_);
v___x_2544_ = lean_nat_dec_lt(v___x_2526_, v___x_2543_);
if (v___x_2544_ == 0)
{
v___y_2535_ = v_acc_2525_;
goto v___jp_2534_;
}
else
{
size_t v___x_2545_; size_t v___x_2546_; lean_object* v___x_2547_; 
v___x_2545_ = ((size_t)0ULL);
v___x_2546_ = lean_usize_of_nat(v___x_2543_);
v___x_2547_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__1(v_c_2519_, v___x_2545_, v___x_2546_, v_acc_2525_);
v___y_2535_ = v___x_2547_;
goto v___jp_2534_;
}
v___jp_2527_:
{
lean_object* v___x_2529_; uint8_t v___x_2530_; 
v___x_2529_ = lean_array_get_size(v_ratHints_2521_);
v___x_2530_ = lean_nat_dec_lt(v___x_2526_, v___x_2529_);
if (v___x_2530_ == 0)
{
v___y_2464_ = v___y_2528_;
goto v___jp_2463_;
}
else
{
size_t v___x_2531_; size_t v___x_2532_; lean_object* v___x_2533_; 
v___x_2531_ = ((size_t)0ULL);
v___x_2532_ = lean_usize_of_nat(v___x_2529_);
v___x_2533_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2(v_ratHints_2521_, v___x_2531_, v___x_2532_, v___y_2528_);
v___y_2464_ = v___x_2533_;
goto v___jp_2463_;
}
}
v___jp_2534_:
{
uint8_t v___x_2536_; lean_object* v_acc_2537_; lean_object* v___x_2538_; uint8_t v___x_2539_; 
v___x_2536_ = 0;
v_acc_2537_ = lean_byte_array_push(v___y_2535_, v___x_2536_);
v___x_2538_ = lean_array_get_size(v_rupHints_2520_);
v___x_2539_ = lean_nat_dec_lt(v___x_2526_, v___x_2538_);
if (v___x_2539_ == 0)
{
v___y_2528_ = v_acc_2537_;
goto v___jp_2527_;
}
else
{
size_t v___x_2540_; size_t v___x_2541_; lean_object* v___x_2542_; 
v___x_2540_ = ((size_t)0ULL);
v___x_2541_ = lean_usize_of_nat(v___x_2538_);
v___x_2542_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(v_rupHints_2520_, v___x_2540_, v___x_2541_, v_acc_2537_);
v___y_2528_ = v___x_2542_;
goto v___jp_2527_;
}
}
}
default: 
{
lean_object* v_ids_2548_; uint8_t v___x_2549_; lean_object* v_acc_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; uint8_t v___x_2553_; 
v_ids_2548_ = lean_ctor_get(v___x_2481_, 0);
v___x_2549_ = 100;
v_acc_2550_ = lean_byte_array_push(v_acc_2457_, v___x_2549_);
v___x_2551_ = lean_unsigned_to_nat(0u);
v___x_2552_ = lean_array_get_size(v_ids_2548_);
v___x_2553_ = lean_nat_dec_lt(v___x_2551_, v___x_2552_);
if (v___x_2553_ == 0)
{
v___y_2476_ = v_acc_2550_;
goto v___jp_2475_;
}
else
{
size_t v___x_2554_; size_t v___x_2555_; lean_object* v___x_2556_; 
v___x_2554_ = ((size_t)0ULL);
v___x_2555_ = lean_usize_of_nat(v___x_2552_);
v___x_2556_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(v_ids_2548_, v___x_2554_, v___x_2555_, v_acc_2550_);
v___y_2476_ = v___x_2556_;
goto v___jp_2475_;
}
}
}
}
v___jp_2458_:
{
lean_object* v___x_2460_; lean_object* v___x_2461_; 
v___x_2460_ = lean_unsigned_to_nat(1u);
v___x_2461_ = lean_nat_add(v_idx_2456_, v___x_2460_);
lean_dec(v_idx_2456_);
v_idx_2456_ = v___x_2461_;
v_acc_2457_ = v___y_2459_;
goto _start;
}
v___jp_2463_:
{
uint8_t v___x_2465_; lean_object* v_acc_2466_; 
v___x_2465_ = 0;
v_acc_2466_ = lean_byte_array_push(v___y_2464_, v___x_2465_);
v___y_2459_ = v_acc_2466_;
goto v___jp_2458_;
}
v___jp_2467_:
{
uint8_t v___x_2469_; lean_object* v_acc_2470_; 
v___x_2469_ = 0;
v_acc_2470_ = lean_byte_array_push(v___y_2468_, v___x_2469_);
v___y_2459_ = v_acc_2470_;
goto v___jp_2458_;
}
v___jp_2471_:
{
uint8_t v___x_2473_; lean_object* v_acc_2474_; 
v___x_2473_ = 0;
v_acc_2474_ = lean_byte_array_push(v___y_2472_, v___x_2473_);
v___y_2459_ = v_acc_2474_;
goto v___jp_2458_;
}
v___jp_2475_:
{
uint8_t v___x_2477_; lean_object* v_acc_2478_; 
v___x_2477_ = 0;
v_acc_2478_ = lean_byte_array_push(v___y_2476_, v___x_2477_);
v___y_2459_ = v_acc_2478_;
goto v___jp_2458_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go___boxed(lean_object* v_proof_2557_, lean_object* v_idx_2558_, lean_object* v_acc_2559_){
_start:
{
lean_object* v_res_2560_; 
v_res_2560_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go(v_proof_2557_, v_idx_2558_, v_acc_2559_);
lean_dec_ref(v_proof_2557_);
return v_res_2560_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_lratProofToBinary(lean_object* v_proof_2561_){
_start:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
v___x_2562_ = lean_unsigned_to_nat(0u);
v___x_2563_ = lean_unsigned_to_nat(4u);
v___x_2564_ = lean_array_get_size(v_proof_2561_);
v___x_2565_ = lean_nat_mul(v___x_2563_, v___x_2564_);
v___x_2566_ = lean_mk_empty_byte_array(v___x_2565_);
lean_dec(v___x_2565_);
v___x_2567_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go(v_proof_2561_, v___x_2562_, v___x_2566_);
return v___x_2567_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_lratProofToBinary___boxed(lean_object* v_proof_2568_){
_start:
{
lean_object* v_res_2569_; 
v_res_2569_ = l_Std_Tactic_BVDecide_LRAT_lratProofToBinary(v_proof_2568_);
lean_dec_ref(v_proof_2568_);
return v_res_2569_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_dumpLRATProof(lean_object* v_path_2570_, lean_object* v_proof_2571_, uint8_t v_binaryProofs_2572_){
_start:
{
if (v_binaryProofs_2572_ == 0)
{
lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2574_ = l_Std_Tactic_BVDecide_LRAT_lratProofToString(v_proof_2571_);
v___x_2575_ = lean_string_to_utf8(v___x_2574_);
v___x_2576_ = l_IO_FS_writeBinFile(v_path_2570_, v___x_2575_);
lean_dec_ref(v___x_2575_);
return v___x_2576_;
}
else
{
lean_object* v___x_2577_; lean_object* v___x_2578_; 
v___x_2577_ = l_Std_Tactic_BVDecide_LRAT_lratProofToBinary(v_proof_2571_);
v___x_2578_ = l_IO_FS_writeBinFile(v_path_2570_, v___x_2577_);
lean_dec_ref(v___x_2577_);
return v___x_2578_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_dumpLRATProof___boxed(lean_object* v_path_2579_, lean_object* v_proof_2580_, lean_object* v_binaryProofs_2581_, lean_object* v_a_2582_){
_start:
{
uint8_t v_binaryProofs_boxed_2583_; lean_object* v_res_2584_; 
v_binaryProofs_boxed_2583_ = lean_unbox(v_binaryProofs_2581_);
v_res_2584_ = l_Std_Tactic_BVDecide_LRAT_dumpLRATProof(v_path_2579_, v_proof_2580_, v_binaryProofs_boxed_2583_);
lean_dec_ref(v_proof_2580_);
lean_dec_ref(v_path_2579_);
return v_res_2584_;
}
}
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_BVDecide_LRAT_Actions(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Parsec(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Tactic_BVDecide_LRAT_Parser(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_LRAT_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Tactic_BVDecide_LRAT_Parser(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide_LRAT_Actions(uint8_t builtin);
lean_object* initialize_Std_Internal_Parsec(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Tactic_BVDecide_LRAT_Parser(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_LRAT_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_LRAT_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Tactic_BVDecide_LRAT_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Tactic_BVDecide_LRAT_Parser(builtin);
}
#ifdef __cplusplus
}
#endif
