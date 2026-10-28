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
if (v___x_468_ == 0)
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg___closed__1));
v___x_506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_506_, 0, v_a_456_);
lean_ctor_set(v___x_506_, 1, v___x_505_);
return v___x_506_;
}
else
{
lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_550_; 
lean_inc(v_idx_461_);
lean_inc_ref(v_array_460_);
v_isSharedCheck_550_ = !lean_is_exclusive(v_a_456_);
if (v_isSharedCheck_550_ == 0)
{
lean_object* v_unused_551_; lean_object* v_unused_552_; 
v_unused_551_ = lean_ctor_get(v_a_456_, 1);
lean_dec(v_unused_551_);
v_unused_552_ = lean_ctor_get(v_a_456_, 0);
lean_dec(v_unused_552_);
v___x_508_ = v_a_456_;
v_isShared_509_ = v_isSharedCheck_550_;
goto v_resetjp_507_;
}
else
{
lean_dec(v_a_456_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_550_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_513_; 
v___x_510_ = lean_unsigned_to_nat(1u);
v___x_511_ = lean_nat_add(v_idx_461_, v___x_510_);
lean_dec(v_idx_461_);
lean_inc(v___x_511_);
lean_inc_ref(v_array_460_);
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 1, v___x_511_);
v___x_513_ = v___x_508_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_array_460_);
lean_ctor_set(v_reuseFailAlloc_549_, 1, v___x_511_);
v___x_513_ = v_reuseFailAlloc_549_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
uint8_t v___x_517_; 
v___x_517_ = lean_nat_dec_lt(v___x_511_, v___x_462_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; lean_object* v___x_519_; 
lean_dec(v___x_511_);
lean_dec_ref(v_array_460_);
v___x_518_ = lean_box(0);
v___x_519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_519_, 0, v___x_513_);
lean_ctor_set(v___x_519_, 1, v___x_518_);
return v___x_519_;
}
else
{
uint8_t v_c_520_; uint8_t v___x_521_; uint8_t v___x_522_; 
v_c_520_ = lean_byte_array_fget(v_array_460_, v___x_511_);
v___x_521_ = 48;
v___x_522_ = lean_uint8_dec_le(v___x_521_, v_c_520_);
if (v___x_522_ == 0)
{
lean_dec(v___x_511_);
lean_dec_ref(v_array_460_);
goto v___jp_514_;
}
else
{
uint8_t v___x_523_; uint8_t v___x_524_; 
v___x_523_ = 57;
v___x_524_ = lean_uint8_dec_le(v_c_520_, v___x_523_);
if (v___x_524_ == 0)
{
lean_dec(v___x_511_);
lean_dec_ref(v_array_460_);
goto v___jp_514_;
}
else
{
lean_object* v___x_525_; lean_object* v_it_x27_526_; uint32_t v___x_527_; uint8_t v___x_528_; uint8_t v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v_fst_532_; lean_object* v_snd_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_548_; 
lean_dec_ref(v___x_513_);
v___x_525_ = lean_nat_add(v___x_511_, v___x_510_);
lean_dec(v___x_511_);
v_it_x27_526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_526_, 0, v_array_460_);
lean_ctor_set(v_it_x27_526_, 1, v___x_525_);
v___x_527_ = lean_uint8_to_uint32(v_c_520_);
v___x_528_ = lean_uint32_to_uint8(v___x_527_);
v___x_529_ = lean_uint8_sub(v___x_528_, v___x_521_);
v___x_530_ = lean_uint8_to_nat(v___x_529_);
v___x_531_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_526_, v___x_530_);
v_fst_532_ = lean_ctor_get(v___x_531_, 0);
v_snd_533_ = lean_ctor_get(v___x_531_, 1);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_548_ == 0)
{
v___x_535_ = v___x_531_;
v_isShared_536_ = v_isSharedCheck_548_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_snd_533_);
lean_inc(v_fst_532_);
lean_dec(v___x_531_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_548_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_537_ = lean_unsigned_to_nat(0u);
v___x_538_ = lean_nat_dec_eq(v_fst_532_, v___x_537_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_542_; 
v___x_539_ = lean_nat_to_int(v_fst_532_);
v___x_540_ = lean_int_neg(v___x_539_);
lean_dec(v___x_539_);
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 1, v___x_540_);
lean_ctor_set(v___x_535_, 0, v_snd_533_);
v___x_542_ = v___x_535_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_snd_533_);
lean_ctor_set(v_reuseFailAlloc_543_, 1, v___x_540_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
else
{
lean_object* v___x_544_; lean_object* v___x_546_; 
lean_dec(v_fst_532_);
v___x_544_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
if (v_isShared_536_ == 0)
{
lean_ctor_set_tag(v___x_535_, 1);
lean_ctor_set(v___x_535_, 1, v___x_544_);
lean_ctor_set(v___x_535_, 0, v_snd_533_);
v___x_546_ = v___x_535_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_snd_533_);
lean_ctor_set(v_reuseFailAlloc_547_, 1, v___x_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
}
}
v___jp_514_:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
v___x_516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_513_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
return v___x_516_;
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
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause_litWs(lean_object* v_a_553_){
_start:
{
lean_object* v_pos_555_; lean_object* v_res_556_; lean_object* v_array_586_; lean_object* v_idx_587_; lean_object* v___x_588_; uint8_t v___x_589_; 
v_array_586_ = lean_ctor_get(v_a_553_, 0);
v_idx_587_ = lean_ctor_get(v_a_553_, 1);
v___x_588_ = lean_byte_array_size(v_array_586_);
v___x_589_ = lean_nat_dec_lt(v_idx_587_, v___x_588_);
if (v___x_589_ == 0)
{
lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_590_ = lean_box(0);
v___x_591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_591_, 0, v_a_553_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
return v___x_591_;
}
else
{
uint8_t v___x_592_; uint8_t v___x_593_; uint8_t v___x_594_; 
v___x_592_ = lean_byte_array_fget(v_array_586_, v_idx_587_);
v___x_593_ = 45;
v___x_594_ = lean_uint8_dec_eq(v___x_592_, v___x_593_);
if (v___x_594_ == 0)
{
uint8_t v___x_595_; uint8_t v___x_596_; 
v___x_595_ = 48;
v___x_596_ = lean_uint8_dec_le(v___x_595_, v___x_592_);
if (v___x_596_ == 0)
{
goto v___jp_580_;
}
else
{
uint8_t v___x_597_; uint8_t v___x_598_; 
v___x_597_ = 57;
v___x_598_ = lean_uint8_dec_le(v___x_592_, v___x_597_);
if (v___x_598_ == 0)
{
goto v___jp_580_;
}
else
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v_it_x27_601_; uint32_t v___x_602_; uint8_t v___x_603_; uint8_t v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v_fst_607_; lean_object* v_snd_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_619_; 
v___x_599_ = lean_unsigned_to_nat(1u);
v___x_600_ = lean_nat_add(v_idx_587_, v___x_599_);
lean_inc_ref(v_array_586_);
v_it_x27_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_601_, 0, v_array_586_);
lean_ctor_set(v_it_x27_601_, 1, v___x_600_);
v___x_602_ = lean_uint8_to_uint32(v___x_592_);
v___x_603_ = lean_uint32_to_uint8(v___x_602_);
v___x_604_ = lean_uint8_sub(v___x_603_, v___x_595_);
v___x_605_ = lean_uint8_to_nat(v___x_604_);
v___x_606_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_601_, v___x_605_);
v_fst_607_ = lean_ctor_get(v___x_606_, 0);
v_snd_608_ = lean_ctor_get(v___x_606_, 1);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_619_ == 0)
{
v___x_610_ = v___x_606_;
v_isShared_611_ = v_isSharedCheck_619_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_snd_608_);
lean_inc(v_fst_607_);
lean_dec(v___x_606_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_619_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_612_; uint8_t v___x_613_; 
v___x_612_ = lean_unsigned_to_nat(0u);
v___x_613_ = lean_nat_dec_eq(v_fst_607_, v___x_612_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; 
lean_del_object(v___x_610_);
lean_dec_ref(v_a_553_);
v___x_614_ = lean_nat_to_int(v_fst_607_);
v_pos_555_ = v_snd_608_;
v_res_556_ = v___x_614_;
goto v___jp_554_;
}
else
{
lean_object* v___x_615_; lean_object* v___x_617_; 
lean_dec(v_snd_608_);
lean_dec(v_fst_607_);
v___x_615_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
if (v_isShared_611_ == 0)
{
lean_ctor_set_tag(v___x_610_, 1);
lean_ctor_set(v___x_610_, 1, v___x_615_);
lean_ctor_set(v___x_610_, 0, v_a_553_);
v___x_617_ = v___x_610_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_a_553_);
lean_ctor_set(v_reuseFailAlloc_618_, 1, v___x_615_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
}
}
}
else
{
if (v___x_594_ == 0)
{
lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_620_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg___closed__1));
v___x_621_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_621_, 0, v_a_553_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
return v___x_621_;
}
else
{
lean_object* v___x_622_; lean_object* v___x_623_; uint8_t v___x_624_; 
v___x_622_ = lean_unsigned_to_nat(1u);
v___x_623_ = lean_nat_add(v_idx_587_, v___x_622_);
v___x_624_ = lean_nat_dec_lt(v___x_623_, v___x_588_);
if (v___x_624_ == 0)
{
lean_object* v___x_625_; lean_object* v___x_626_; 
lean_dec(v___x_623_);
v___x_625_ = lean_box(0);
v___x_626_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_626_, 0, v_a_553_);
lean_ctor_set(v___x_626_, 1, v___x_625_);
return v___x_626_;
}
else
{
uint8_t v_c_627_; uint8_t v___x_628_; uint8_t v___x_629_; 
v_c_627_ = lean_byte_array_fget(v_array_586_, v___x_623_);
v___x_628_ = 48;
v___x_629_ = lean_uint8_dec_le(v___x_628_, v_c_627_);
if (v___x_629_ == 0)
{
lean_dec(v___x_623_);
goto v___jp_583_;
}
else
{
uint8_t v___x_630_; uint8_t v___x_631_; 
v___x_630_ = 57;
v___x_631_ = lean_uint8_dec_le(v_c_627_, v___x_630_);
if (v___x_631_ == 0)
{
lean_dec(v___x_623_);
goto v___jp_583_;
}
else
{
lean_object* v___x_632_; lean_object* v_it_x27_633_; uint32_t v___x_634_; uint8_t v___x_635_; uint8_t v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v_fst_639_; lean_object* v_snd_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_652_; 
v___x_632_ = lean_nat_add(v___x_623_, v___x_622_);
lean_dec(v___x_623_);
lean_inc_ref(v_array_586_);
v_it_x27_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_633_, 0, v_array_586_);
lean_ctor_set(v_it_x27_633_, 1, v___x_632_);
v___x_634_ = lean_uint8_to_uint32(v_c_627_);
v___x_635_ = lean_uint32_to_uint8(v___x_634_);
v___x_636_ = lean_uint8_sub(v___x_635_, v___x_628_);
v___x_637_ = lean_uint8_to_nat(v___x_636_);
v___x_638_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_633_, v___x_637_);
v_fst_639_ = lean_ctor_get(v___x_638_, 0);
v_snd_640_ = lean_ctor_get(v___x_638_, 1);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_652_ == 0)
{
v___x_642_ = v___x_638_;
v_isShared_643_ = v_isSharedCheck_652_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_snd_640_);
lean_inc(v_fst_639_);
lean_dec(v___x_638_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_652_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_644_; uint8_t v___x_645_; 
v___x_644_ = lean_unsigned_to_nat(0u);
v___x_645_ = lean_nat_dec_eq(v_fst_639_, v___x_644_);
if (v___x_645_ == 0)
{
lean_object* v___x_646_; lean_object* v___x_647_; 
lean_del_object(v___x_642_);
lean_dec_ref(v_a_553_);
v___x_646_ = lean_nat_to_int(v_fst_639_);
v___x_647_ = lean_int_neg(v___x_646_);
lean_dec(v___x_646_);
v_pos_555_ = v_snd_640_;
v_res_556_ = v___x_647_;
goto v___jp_554_;
}
else
{
lean_object* v___x_648_; lean_object* v___x_650_; 
lean_dec(v_snd_640_);
lean_dec(v_fst_639_);
v___x_648_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
if (v_isShared_643_ == 0)
{
lean_ctor_set_tag(v___x_642_, 1);
lean_ctor_set(v___x_642_, 1, v___x_648_);
lean_ctor_set(v___x_642_, 0, v_a_553_);
v___x_650_ = v___x_642_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_a_553_);
lean_ctor_set(v_reuseFailAlloc_651_, 1, v___x_648_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
}
}
}
}
}
v___jp_554_:
{
lean_object* v_array_557_; lean_object* v_idx_558_; lean_object* v___x_559_; uint8_t v___x_560_; 
v_array_557_ = lean_ctor_get(v_pos_555_, 0);
v_idx_558_ = lean_ctor_get(v_pos_555_, 1);
v___x_559_ = lean_byte_array_size(v_array_557_);
v___x_560_ = lean_nat_dec_lt(v_idx_558_, v___x_559_);
if (v___x_560_ == 0)
{
lean_object* v___x_561_; lean_object* v___x_562_; 
lean_dec(v_res_556_);
v___x_561_ = lean_box(0);
v___x_562_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_562_, 0, v_pos_555_);
lean_ctor_set(v___x_562_, 1, v___x_561_);
return v___x_562_;
}
else
{
uint8_t v___x_563_; uint8_t v_got_564_; uint8_t v___x_565_; 
v___x_563_ = 32;
v_got_564_ = lean_byte_array_fget(v_array_557_, v_idx_558_);
v___x_565_ = lean_uint8_dec_eq(v_got_564_, v___x_563_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; lean_object* v___x_567_; 
lean_dec(v_res_556_);
v___x_566_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__1));
v___x_567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_567_, 0, v_pos_555_);
lean_ctor_set(v___x_567_, 1, v___x_566_);
return v___x_567_;
}
else
{
lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_577_; 
lean_inc(v_idx_558_);
lean_inc_ref(v_array_557_);
v_isSharedCheck_577_ = !lean_is_exclusive(v_pos_555_);
if (v_isSharedCheck_577_ == 0)
{
lean_object* v_unused_578_; lean_object* v_unused_579_; 
v_unused_578_ = lean_ctor_get(v_pos_555_, 1);
lean_dec(v_unused_578_);
v_unused_579_ = lean_ctor_get(v_pos_555_, 0);
lean_dec(v_unused_579_);
v___x_569_ = v_pos_555_;
v_isShared_570_ = v_isSharedCheck_577_;
goto v_resetjp_568_;
}
else
{
lean_dec(v_pos_555_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_577_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_574_; 
v___x_571_ = lean_unsigned_to_nat(1u);
v___x_572_ = lean_nat_add(v_idx_558_, v___x_571_);
lean_dec(v_idx_558_);
if (v_isShared_570_ == 0)
{
lean_ctor_set(v___x_569_, 1, v___x_572_);
v___x_574_ = v___x_569_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_array_557_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v___x_572_);
v___x_574_ = v_reuseFailAlloc_576_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_575_; 
v___x_575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
lean_ctor_set(v___x_575_, 1, v_res_556_);
return v___x_575_;
}
}
}
}
}
v___jp_580_:
{
lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_581_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
v___x_582_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_582_, 0, v_a_553_);
lean_ctor_set(v___x_582_, 1, v___x_581_);
return v___x_582_;
}
v___jp_583_:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
v___x_585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_585_, 0, v_a_553_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
return v___x_585_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause_spec__0(lean_object* v_a_653_){
_start:
{
lean_object* v___x_654_; 
v___x_654_ = lean_nat_to_int(v_a_653_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause_spec__1(lean_object* v_acc_655_, lean_object* v_a_656_){
_start:
{
lean_object* v_array_657_; lean_object* v_idx_658_; lean_object* v_pos_660_; lean_object* v_idx_661_; lean_object* v_err_662_; lean_object* v_pos_671_; lean_object* v_res_672_; lean_object* v___x_695_; uint8_t v___x_696_; 
v_array_657_ = lean_ctor_get(v_a_656_, 0);
v_idx_658_ = lean_ctor_get(v_a_656_, 1);
lean_inc(v_idx_658_);
v___x_695_ = lean_byte_array_size(v_array_657_);
v___x_696_ = lean_nat_dec_lt(v_idx_658_, v___x_695_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; 
v___x_697_ = lean_box(0);
lean_inc(v_idx_658_);
v_pos_660_ = v_a_656_;
v_idx_661_ = v_idx_658_;
v_err_662_ = v___x_697_;
goto v___jp_659_;
}
else
{
uint8_t v___x_698_; uint8_t v___x_699_; uint8_t v___x_700_; 
v___x_698_ = lean_byte_array_fget(v_array_657_, v_idx_658_);
v___x_699_ = 45;
v___x_700_ = lean_uint8_dec_eq(v___x_698_, v___x_699_);
if (v___x_700_ == 0)
{
uint8_t v___x_701_; uint8_t v___x_702_; 
v___x_701_ = 48;
v___x_702_ = lean_uint8_dec_le(v___x_701_, v___x_698_);
if (v___x_702_ == 0)
{
goto v___jp_668_;
}
else
{
uint8_t v___x_703_; uint8_t v___x_704_; 
v___x_703_ = 57;
v___x_704_ = lean_uint8_dec_le(v___x_698_, v___x_703_);
if (v___x_704_ == 0)
{
goto v___jp_668_;
}
else
{
lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v_it_x27_707_; uint32_t v___x_708_; uint8_t v___x_709_; uint8_t v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v_fst_713_; lean_object* v_snd_714_; lean_object* v___x_715_; uint8_t v___x_716_; 
v___x_705_ = lean_unsigned_to_nat(1u);
v___x_706_ = lean_nat_add(v_idx_658_, v___x_705_);
lean_inc_ref(v_array_657_);
v_it_x27_707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_707_, 0, v_array_657_);
lean_ctor_set(v_it_x27_707_, 1, v___x_706_);
v___x_708_ = lean_uint8_to_uint32(v___x_698_);
v___x_709_ = lean_uint32_to_uint8(v___x_708_);
v___x_710_ = lean_uint8_sub(v___x_709_, v___x_701_);
v___x_711_ = lean_uint8_to_nat(v___x_710_);
v___x_712_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_707_, v___x_711_);
v_fst_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_fst_713_);
v_snd_714_ = lean_ctor_get(v___x_712_, 1);
lean_inc(v_snd_714_);
lean_dec_ref(v___x_712_);
v___x_715_ = lean_unsigned_to_nat(0u);
v___x_716_ = lean_nat_dec_eq(v_fst_713_, v___x_715_);
if (v___x_716_ == 0)
{
lean_object* v___x_717_; 
lean_dec_ref(v_a_656_);
v___x_717_ = lean_nat_to_int(v_fst_713_);
v_pos_671_ = v_snd_714_;
v_res_672_ = v___x_717_;
goto v___jp_670_;
}
else
{
lean_object* v___x_718_; 
lean_dec(v_snd_714_);
lean_dec(v_fst_713_);
v___x_718_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
lean_inc(v_idx_658_);
v_pos_660_ = v_a_656_;
v_idx_661_ = v_idx_658_;
v_err_662_ = v___x_718_;
goto v___jp_659_;
}
}
}
}
else
{
if (v___x_700_ == 0)
{
lean_object* v___x_719_; 
v___x_719_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg___closed__1));
lean_inc(v_idx_658_);
v_pos_660_ = v_a_656_;
v_idx_661_ = v_idx_658_;
v_err_662_ = v___x_719_;
goto v___jp_659_;
}
else
{
lean_object* v___x_720_; lean_object* v___x_721_; uint8_t v___x_722_; 
v___x_720_ = lean_unsigned_to_nat(1u);
v___x_721_ = lean_nat_add(v_idx_658_, v___x_720_);
v___x_722_ = lean_nat_dec_lt(v___x_721_, v___x_695_);
if (v___x_722_ == 0)
{
lean_object* v___x_723_; 
lean_dec(v___x_721_);
v___x_723_ = lean_box(0);
lean_inc(v_idx_658_);
v_pos_660_ = v_a_656_;
v_idx_661_ = v_idx_658_;
v_err_662_ = v___x_723_;
goto v___jp_659_;
}
else
{
uint8_t v_c_724_; uint8_t v___x_725_; uint8_t v___x_726_; 
v_c_724_ = lean_byte_array_fget(v_array_657_, v___x_721_);
v___x_725_ = 48;
v___x_726_ = lean_uint8_dec_le(v___x_725_, v_c_724_);
if (v___x_726_ == 0)
{
lean_dec(v___x_721_);
goto v___jp_666_;
}
else
{
uint8_t v___x_727_; uint8_t v___x_728_; 
v___x_727_ = 57;
v___x_728_ = lean_uint8_dec_le(v_c_724_, v___x_727_);
if (v___x_728_ == 0)
{
lean_dec(v___x_721_);
goto v___jp_666_;
}
else
{
lean_object* v___x_729_; lean_object* v_it_x27_730_; uint32_t v___x_731_; uint8_t v___x_732_; uint8_t v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v_fst_736_; lean_object* v_snd_737_; lean_object* v___x_738_; uint8_t v___x_739_; 
v___x_729_ = lean_nat_add(v___x_721_, v___x_720_);
lean_dec(v___x_721_);
lean_inc_ref(v_array_657_);
v_it_x27_730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_730_, 0, v_array_657_);
lean_ctor_set(v_it_x27_730_, 1, v___x_729_);
v___x_731_ = lean_uint8_to_uint32(v_c_724_);
v___x_732_ = lean_uint32_to_uint8(v___x_731_);
v___x_733_ = lean_uint8_sub(v___x_732_, v___x_725_);
v___x_734_ = lean_uint8_to_nat(v___x_733_);
v___x_735_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_730_, v___x_734_);
v_fst_736_ = lean_ctor_get(v___x_735_, 0);
lean_inc(v_fst_736_);
v_snd_737_ = lean_ctor_get(v___x_735_, 1);
lean_inc(v_snd_737_);
lean_dec_ref(v___x_735_);
v___x_738_ = lean_unsigned_to_nat(0u);
v___x_739_ = lean_nat_dec_eq(v_fst_736_, v___x_738_);
if (v___x_739_ == 0)
{
lean_object* v___x_740_; lean_object* v___x_741_; 
lean_dec_ref(v_a_656_);
v___x_740_ = lean_nat_to_int(v_fst_736_);
v___x_741_ = lean_int_neg(v___x_740_);
lean_dec(v___x_740_);
v_pos_671_ = v_snd_737_;
v_res_672_ = v___x_741_;
goto v___jp_670_;
}
else
{
lean_object* v___x_742_; 
lean_dec(v_snd_737_);
lean_dec(v_fst_736_);
v___x_742_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
lean_inc(v_idx_658_);
v_pos_660_ = v_a_656_;
v_idx_661_ = v_idx_658_;
v_err_662_ = v___x_742_;
goto v___jp_659_;
}
}
}
}
}
}
}
v___jp_659_:
{
uint8_t v___x_663_; 
v___x_663_ = lean_nat_dec_eq(v_idx_658_, v_idx_661_);
lean_dec(v_idx_661_);
lean_dec(v_idx_658_);
if (v___x_663_ == 0)
{
lean_object* v___x_664_; 
lean_dec_ref(v_acc_655_);
lean_inc(v_err_662_);
v___x_664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_664_, 0, v_pos_660_);
lean_ctor_set(v___x_664_, 1, v_err_662_);
return v___x_664_;
}
else
{
lean_object* v___x_665_; 
v___x_665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_665_, 0, v_pos_660_);
lean_ctor_set(v___x_665_, 1, v_acc_655_);
return v___x_665_;
}
}
v___jp_666_:
{
lean_object* v___x_667_; 
v___x_667_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
lean_inc(v_idx_658_);
v_pos_660_ = v_a_656_;
v_idx_661_ = v_idx_658_;
v_err_662_ = v___x_667_;
goto v___jp_659_;
}
v___jp_668_:
{
lean_object* v___x_669_; 
v___x_669_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
lean_inc(v_idx_658_);
v_pos_660_ = v_a_656_;
v_idx_661_ = v_idx_658_;
v_err_662_ = v___x_669_;
goto v___jp_659_;
}
v___jp_670_:
{
lean_object* v_array_673_; lean_object* v_idx_674_; lean_object* v___x_675_; uint8_t v___x_676_; 
v_array_673_ = lean_ctor_get(v_pos_671_, 0);
v_idx_674_ = lean_ctor_get(v_pos_671_, 1);
lean_inc(v_idx_674_);
v___x_675_ = lean_byte_array_size(v_array_673_);
v___x_676_ = lean_nat_dec_lt(v_idx_674_, v___x_675_);
if (v___x_676_ == 0)
{
lean_object* v___x_677_; 
lean_dec(v_res_672_);
v___x_677_ = lean_box(0);
v_pos_660_ = v_pos_671_;
v_idx_661_ = v_idx_674_;
v_err_662_ = v___x_677_;
goto v___jp_659_;
}
else
{
uint8_t v___x_678_; uint8_t v_got_679_; uint8_t v___x_680_; 
v___x_678_ = 32;
v_got_679_ = lean_byte_array_fget(v_array_673_, v_idx_674_);
v___x_680_ = lean_uint8_dec_eq(v_got_679_, v___x_678_);
if (v___x_680_ == 0)
{
lean_object* v___x_681_; 
lean_dec(v_res_672_);
v___x_681_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__1));
v_pos_660_ = v_pos_671_;
v_idx_661_ = v_idx_674_;
v_err_662_ = v___x_681_;
goto v___jp_659_;
}
else
{
lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_692_; 
lean_inc_ref(v_array_673_);
lean_dec(v_idx_658_);
v_isSharedCheck_692_ = !lean_is_exclusive(v_pos_671_);
if (v_isSharedCheck_692_ == 0)
{
lean_object* v_unused_693_; lean_object* v_unused_694_; 
v_unused_693_ = lean_ctor_get(v_pos_671_, 1);
lean_dec(v_unused_693_);
v_unused_694_ = lean_ctor_get(v_pos_671_, 0);
lean_dec(v_unused_694_);
v___x_683_ = v_pos_671_;
v_isShared_684_ = v_isSharedCheck_692_;
goto v_resetjp_682_;
}
else
{
lean_dec(v_pos_671_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_692_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_688_; 
v___x_685_ = lean_unsigned_to_nat(1u);
v___x_686_ = lean_nat_add(v_idx_674_, v___x_685_);
lean_dec(v_idx_674_);
if (v_isShared_684_ == 0)
{
lean_ctor_set(v___x_683_, 1, v___x_686_);
v___x_688_ = v___x_683_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_array_673_);
lean_ctor_set(v_reuseFailAlloc_691_, 1, v___x_686_);
v___x_688_ = v_reuseFailAlloc_691_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
lean_object* v___x_689_; 
v___x_689_ = lean_array_push(v_acc_655_, v_res_672_);
v_acc_655_ = v___x_689_;
v_a_656_ = v___x_688_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause(lean_object* v_a_745_){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause___closed__0));
v___x_747_ = l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause_spec__1(v___x_746_, v_a_745_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v_pos_748_; lean_object* v_res_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_782_; 
v_pos_748_ = lean_ctor_get(v___x_747_, 0);
v_res_749_ = lean_ctor_get(v___x_747_, 1);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_747_);
if (v_isSharedCheck_782_ == 0)
{
v___x_751_ = v___x_747_;
v_isShared_752_ = v_isSharedCheck_782_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_res_749_);
lean_inc(v_pos_748_);
lean_dec(v___x_747_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_782_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v_array_753_; lean_object* v_idx_754_; lean_object* v___x_755_; uint8_t v___x_756_; 
v_array_753_ = lean_ctor_get(v_pos_748_, 0);
v_idx_754_ = lean_ctor_get(v_pos_748_, 1);
v___x_755_ = lean_byte_array_size(v_array_753_);
v___x_756_ = lean_nat_dec_lt(v_idx_754_, v___x_755_);
if (v___x_756_ == 0)
{
lean_object* v___x_757_; lean_object* v___x_759_; 
lean_dec(v_res_749_);
v___x_757_ = lean_box(0);
if (v_isShared_752_ == 0)
{
lean_ctor_set_tag(v___x_751_, 1);
lean_ctor_set(v___x_751_, 1, v___x_757_);
v___x_759_ = v___x_751_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_pos_748_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v___x_757_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
else
{
uint8_t v___x_761_; uint8_t v_got_762_; uint8_t v___x_763_; 
v___x_761_ = 48;
v_got_762_ = lean_byte_array_fget(v_array_753_, v_idx_754_);
v___x_763_ = lean_uint8_dec_eq(v_got_762_, v___x_761_);
if (v___x_763_ == 0)
{
lean_object* v___x_764_; lean_object* v___x_766_; 
lean_dec(v_res_749_);
v___x_764_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseZero___closed__1));
if (v_isShared_752_ == 0)
{
lean_ctor_set_tag(v___x_751_, 1);
lean_ctor_set(v___x_751_, 1, v___x_764_);
v___x_766_ = v___x_751_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_pos_748_);
lean_ctor_set(v_reuseFailAlloc_767_, 1, v___x_764_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
else
{
lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_779_; 
lean_inc(v_idx_754_);
lean_inc_ref(v_array_753_);
v_isSharedCheck_779_ = !lean_is_exclusive(v_pos_748_);
if (v_isSharedCheck_779_ == 0)
{
lean_object* v_unused_780_; lean_object* v_unused_781_; 
v_unused_780_ = lean_ctor_get(v_pos_748_, 1);
lean_dec(v_unused_780_);
v_unused_781_ = lean_ctor_get(v_pos_748_, 0);
lean_dec(v_unused_781_);
v___x_769_ = v_pos_748_;
v_isShared_770_ = v_isSharedCheck_779_;
goto v_resetjp_768_;
}
else
{
lean_dec(v_pos_748_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_779_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_774_; 
v___x_771_ = lean_unsigned_to_nat(1u);
v___x_772_ = lean_nat_add(v_idx_754_, v___x_771_);
lean_dec(v_idx_754_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 1, v___x_772_);
v___x_774_ = v___x_769_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_array_753_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v___x_772_);
v___x_774_ = v_reuseFailAlloc_778_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
lean_object* v___x_776_; 
if (v_isShared_752_ == 0)
{
lean_ctor_set(v___x_751_, 0, v___x_774_);
v___x_776_ = v___x_751_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_774_);
lean_ctor_set(v_reuseFailAlloc_777_, 1, v_res_749_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
}
}
}
}
else
{
return v___x_747_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRes(lean_object* v_a_783_){
_start:
{
lean_object* v_array_784_; lean_object* v_idx_785_; lean_object* v___x_786_; uint8_t v___x_787_; 
v_array_784_ = lean_ctor_get(v_a_783_, 0);
v_idx_785_ = lean_ctor_get(v_a_783_, 1);
v___x_786_ = lean_byte_array_size(v_array_784_);
v___x_787_ = lean_nat_dec_lt(v_idx_785_, v___x_786_);
if (v___x_787_ == 0)
{
lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_788_ = lean_box(0);
v___x_789_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_789_, 0, v_a_783_);
lean_ctor_set(v___x_789_, 1, v___x_788_);
return v___x_789_;
}
else
{
uint8_t v___x_790_; uint8_t v_got_791_; uint8_t v___x_792_; 
v___x_790_ = 45;
v_got_791_ = lean_byte_array_fget(v_array_784_, v_idx_785_);
v___x_792_ = lean_uint8_dec_eq(v_got_791_, v___x_790_);
if (v___x_792_ == 0)
{
lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_793_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseNeg___closed__1));
v___x_794_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_794_, 0, v_a_783_);
lean_ctor_set(v___x_794_, 1, v___x_793_);
return v___x_794_;
}
else
{
lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_877_; 
lean_inc(v_idx_785_);
lean_inc_ref(v_array_784_);
v_isSharedCheck_877_ = !lean_is_exclusive(v_a_783_);
if (v_isSharedCheck_877_ == 0)
{
lean_object* v_unused_878_; lean_object* v_unused_879_; 
v_unused_878_ = lean_ctor_get(v_a_783_, 1);
lean_dec(v_unused_878_);
v_unused_879_ = lean_ctor_get(v_a_783_, 0);
lean_dec(v_unused_879_);
v___x_796_ = v_a_783_;
v_isShared_797_ = v_isSharedCheck_877_;
goto v_resetjp_795_;
}
else
{
lean_dec(v_a_783_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_877_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_801_; 
v___x_798_ = lean_unsigned_to_nat(1u);
v___x_799_ = lean_nat_add(v_idx_785_, v___x_798_);
lean_dec(v_idx_785_);
lean_inc(v___x_799_);
lean_inc_ref(v_array_784_);
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 1, v___x_799_);
v___x_801_ = v___x_796_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_array_784_);
lean_ctor_set(v_reuseFailAlloc_876_, 1, v___x_799_);
v___x_801_ = v_reuseFailAlloc_876_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
uint8_t v___x_805_; 
v___x_805_ = lean_nat_dec_lt(v___x_799_, v___x_786_);
if (v___x_805_ == 0)
{
lean_object* v___x_806_; lean_object* v___x_807_; 
lean_dec(v___x_799_);
lean_dec_ref(v_array_784_);
v___x_806_ = lean_box(0);
v___x_807_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_801_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
return v___x_807_;
}
else
{
uint8_t v_c_808_; uint8_t v___x_809_; uint8_t v___x_810_; 
v_c_808_ = lean_byte_array_fget(v_array_784_, v___x_799_);
v___x_809_ = 48;
v___x_810_ = lean_uint8_dec_le(v___x_809_, v_c_808_);
if (v___x_810_ == 0)
{
lean_dec(v___x_799_);
lean_dec_ref(v_array_784_);
goto v___jp_802_;
}
else
{
uint8_t v___x_811_; uint8_t v___x_812_; 
v___x_811_ = 57;
v___x_812_ = lean_uint8_dec_le(v_c_808_, v___x_811_);
if (v___x_812_ == 0)
{
lean_dec(v___x_799_);
lean_dec_ref(v_array_784_);
goto v___jp_802_;
}
else
{
lean_object* v___x_813_; lean_object* v_it_x27_814_; uint32_t v___x_815_; uint8_t v___x_816_; uint8_t v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v_fst_820_; lean_object* v_snd_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_875_; 
lean_dec_ref(v___x_801_);
v___x_813_ = lean_nat_add(v___x_799_, v___x_798_);
lean_dec(v___x_799_);
v_it_x27_814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_814_, 0, v_array_784_);
lean_ctor_set(v_it_x27_814_, 1, v___x_813_);
v___x_815_ = lean_uint8_to_uint32(v_c_808_);
v___x_816_ = lean_uint32_to_uint8(v___x_815_);
v___x_817_ = lean_uint8_sub(v___x_816_, v___x_809_);
v___x_818_ = lean_uint8_to_nat(v___x_817_);
v___x_819_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_814_, v___x_818_);
v_fst_820_ = lean_ctor_get(v___x_819_, 0);
v_snd_821_ = lean_ctor_get(v___x_819_, 1);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_875_ == 0)
{
v___x_823_ = v___x_819_;
v_isShared_824_ = v_isSharedCheck_875_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_snd_821_);
lean_inc(v_fst_820_);
lean_dec(v___x_819_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_875_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_825_ = lean_unsigned_to_nat(0u);
v___x_826_ = lean_nat_dec_eq(v_fst_820_, v___x_825_);
if (v___x_826_ == 0)
{
lean_object* v_array_827_; lean_object* v_idx_828_; lean_object* v___x_829_; uint8_t v___x_830_; 
v_array_827_ = lean_ctor_get(v_snd_821_, 0);
v_idx_828_ = lean_ctor_get(v_snd_821_, 1);
v___x_829_ = lean_byte_array_size(v_array_827_);
v___x_830_ = lean_nat_dec_lt(v_idx_828_, v___x_829_);
if (v___x_830_ == 0)
{
lean_object* v___x_831_; lean_object* v___x_832_; 
lean_del_object(v___x_823_);
lean_dec(v_fst_820_);
v___x_831_ = lean_box(0);
v___x_832_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_832_, 0, v_snd_821_);
lean_ctor_set(v___x_832_, 1, v___x_831_);
return v___x_832_;
}
else
{
uint8_t v___x_833_; uint8_t v_got_834_; uint8_t v___x_835_; 
v___x_833_ = 32;
v_got_834_ = lean_byte_array_fget(v_array_827_, v_idx_828_);
v___x_835_ = lean_uint8_dec_eq(v_got_834_, v___x_833_);
if (v___x_835_ == 0)
{
lean_object* v___x_836_; lean_object* v___x_837_; 
lean_del_object(v___x_823_);
lean_dec(v_fst_820_);
v___x_836_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__1));
v___x_837_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_837_, 0, v_snd_821_);
lean_ctor_set(v___x_837_, 1, v___x_836_);
return v___x_837_;
}
else
{
lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_870_; 
lean_inc(v_idx_828_);
lean_inc_ref(v_array_827_);
v_isSharedCheck_870_ = !lean_is_exclusive(v_snd_821_);
if (v_isSharedCheck_870_ == 0)
{
lean_object* v_unused_871_; lean_object* v_unused_872_; 
v_unused_871_ = lean_ctor_get(v_snd_821_, 1);
lean_dec(v_unused_871_);
v_unused_872_ = lean_ctor_get(v_snd_821_, 0);
lean_dec(v_unused_872_);
v___x_839_ = v_snd_821_;
v_isShared_840_ = v_isSharedCheck_870_;
goto v_resetjp_838_;
}
else
{
lean_dec(v_snd_821_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_870_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_841_; lean_object* v___x_843_; 
v___x_841_ = lean_nat_add(v_idx_828_, v___x_798_);
lean_dec(v_idx_828_);
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 1, v___x_841_);
v___x_843_ = v___x_839_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_array_827_);
lean_ctor_set(v_reuseFailAlloc_869_, 1, v___x_841_);
v___x_843_ = v_reuseFailAlloc_869_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
lean_object* v___x_844_; 
v___x_844_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList(v___x_843_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v_pos_845_; lean_object* v_res_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_859_; 
v_pos_845_ = lean_ctor_get(v___x_844_, 0);
v_res_846_ = lean_ctor_get(v___x_844_, 1);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_859_ == 0)
{
v___x_848_ = v___x_844_;
v_isShared_849_ = v_isSharedCheck_859_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_res_846_);
lean_inc(v_pos_845_);
lean_dec(v___x_844_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_859_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_854_; 
v___x_850_ = lean_nat_to_int(v_fst_820_);
v___x_851_ = lean_int_neg(v___x_850_);
lean_dec(v___x_850_);
v___x_852_ = lean_nat_abs(v___x_851_);
lean_dec(v___x_851_);
if (v_isShared_824_ == 0)
{
lean_ctor_set(v___x_823_, 1, v_res_846_);
lean_ctor_set(v___x_823_, 0, v___x_852_);
v___x_854_ = v___x_823_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v___x_852_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v_res_846_);
v___x_854_ = v_reuseFailAlloc_858_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
lean_object* v___x_856_; 
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 1, v___x_854_);
v___x_856_ = v___x_848_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_pos_845_);
lean_ctor_set(v_reuseFailAlloc_857_, 1, v___x_854_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
}
else
{
lean_object* v_pos_860_; lean_object* v_err_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_868_; 
lean_del_object(v___x_823_);
lean_dec(v_fst_820_);
v_pos_860_ = lean_ctor_get(v___x_844_, 0);
v_err_861_ = lean_ctor_get(v___x_844_, 1);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_868_ == 0)
{
v___x_863_ = v___x_844_;
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_err_861_);
lean_inc(v_pos_860_);
lean_dec(v___x_844_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_866_; 
if (v_isShared_864_ == 0)
{
v___x_866_ = v___x_863_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_pos_860_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v_err_861_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
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
lean_object* v___x_873_; lean_object* v___x_874_; 
lean_del_object(v___x_823_);
lean_dec(v_fst_820_);
v___x_873_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
v___x_874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_874_, 0, v_snd_821_);
lean_ctor_set(v___x_874_, 1, v___x_873_);
return v___x_874_;
}
}
}
}
}
v___jp_802_:
{
lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_803_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
v___x_804_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_804_, 0, v___x_801_);
lean_ctor_set(v___x_804_, 1, v___x_803_);
return v___x_804_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat_spec__0(lean_object* v_acc_880_, lean_object* v_a_881_){
_start:
{
lean_object* v___x_882_; 
lean_inc_ref(v_a_881_);
v___x_882_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRes(v_a_881_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v_pos_883_; lean_object* v_res_884_; lean_object* v___x_885_; 
lean_dec_ref(v_a_881_);
v_pos_883_ = lean_ctor_get(v___x_882_, 0);
lean_inc(v_pos_883_);
v_res_884_ = lean_ctor_get(v___x_882_, 1);
lean_inc(v_res_884_);
lean_dec_ref_known(v___x_882_, 2);
v___x_885_ = lean_array_push(v_acc_880_, v_res_884_);
v_acc_880_ = v___x_885_;
v_a_881_ = v_pos_883_;
goto _start;
}
else
{
lean_object* v_err_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_899_; 
v_err_887_ = lean_ctor_get(v___x_882_, 1);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_899_ == 0)
{
lean_object* v_unused_900_; 
v_unused_900_ = lean_ctor_get(v___x_882_, 0);
lean_dec(v_unused_900_);
v___x_889_ = v___x_882_;
v_isShared_890_ = v_isSharedCheck_899_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_err_887_);
lean_dec(v___x_882_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_899_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v_idx_891_; uint8_t v___x_892_; 
v_idx_891_ = lean_ctor_get(v_a_881_, 1);
v___x_892_ = lean_nat_dec_eq(v_idx_891_, v_idx_891_);
if (v___x_892_ == 0)
{
lean_object* v___x_894_; 
lean_dec_ref(v_acc_880_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 0, v_a_881_);
v___x_894_ = v___x_889_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_a_881_);
lean_ctor_set(v_reuseFailAlloc_895_, 1, v_err_887_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
else
{
lean_object* v___x_897_; 
lean_dec(v_err_887_);
if (v_isShared_890_ == 0)
{
lean_ctor_set_tag(v___x_889_, 0);
lean_ctor_set(v___x_889_, 1, v_acc_880_);
lean_ctor_set(v___x_889_, 0, v_a_881_);
v___x_897_ = v___x_889_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_a_881_);
lean_ctor_set(v_reuseFailAlloc_898_, 1, v_acc_880_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat(lean_object* v_ident_906_, lean_object* v_a_907_){
_start:
{
lean_object* v___x_908_; 
v___x_908_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause(v_a_907_);
if (lean_obj_tag(v___x_908_) == 0)
{
lean_object* v_pos_909_; lean_object* v_res_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_1025_; 
v_pos_909_ = lean_ctor_get(v___x_908_, 0);
v_res_910_ = lean_ctor_get(v___x_908_, 1);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_912_ = v___x_908_;
v_isShared_913_ = v_isSharedCheck_1025_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_res_910_);
lean_inc(v_pos_909_);
lean_dec(v___x_908_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_1025_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v_array_914_; lean_object* v_idx_915_; lean_object* v___x_916_; uint8_t v___x_917_; 
v_array_914_ = lean_ctor_get(v_pos_909_, 0);
v_idx_915_ = lean_ctor_get(v_pos_909_, 1);
v___x_916_ = lean_byte_array_size(v_array_914_);
v___x_917_ = lean_nat_dec_lt(v_idx_915_, v___x_916_);
if (v___x_917_ == 0)
{
lean_object* v___x_918_; lean_object* v___x_920_; 
lean_dec(v_res_910_);
lean_dec(v_ident_906_);
v___x_918_ = lean_box(0);
if (v_isShared_913_ == 0)
{
lean_ctor_set_tag(v___x_912_, 1);
lean_ctor_set(v___x_912_, 1, v___x_918_);
v___x_920_ = v___x_912_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_pos_909_);
lean_ctor_set(v_reuseFailAlloc_921_, 1, v___x_918_);
v___x_920_ = v_reuseFailAlloc_921_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
return v___x_920_;
}
}
else
{
uint8_t v___x_922_; uint8_t v_got_923_; uint8_t v___x_924_; 
v___x_922_ = 32;
v_got_923_ = lean_byte_array_fget(v_array_914_, v_idx_915_);
v___x_924_ = lean_uint8_dec_eq(v_got_923_, v___x_922_);
if (v___x_924_ == 0)
{
lean_object* v___x_925_; lean_object* v___x_927_; 
lean_dec(v_res_910_);
lean_dec(v_ident_906_);
v___x_925_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__1));
if (v_isShared_913_ == 0)
{
lean_ctor_set_tag(v___x_912_, 1);
lean_ctor_set(v___x_912_, 1, v___x_925_);
v___x_927_ = v___x_912_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_pos_909_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v___x_925_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
else
{
lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_1022_; 
lean_inc(v_idx_915_);
lean_inc_ref(v_array_914_);
lean_del_object(v___x_912_);
v_isSharedCheck_1022_ = !lean_is_exclusive(v_pos_909_);
if (v_isSharedCheck_1022_ == 0)
{
lean_object* v_unused_1023_; lean_object* v_unused_1024_; 
v_unused_1023_ = lean_ctor_get(v_pos_909_, 1);
lean_dec(v_unused_1023_);
v_unused_1024_ = lean_ctor_get(v_pos_909_, 0);
lean_dec(v_unused_1024_);
v___x_930_ = v_pos_909_;
v_isShared_931_ = v_isSharedCheck_1022_;
goto v_resetjp_929_;
}
else
{
lean_dec(v_pos_909_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_1022_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_935_; 
v___x_932_ = lean_unsigned_to_nat(1u);
v___x_933_ = lean_nat_add(v_idx_915_, v___x_932_);
lean_dec(v_idx_915_);
if (v_isShared_931_ == 0)
{
lean_ctor_set(v___x_930_, 1, v___x_933_);
v___x_935_ = v___x_930_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_array_914_);
lean_ctor_set(v_reuseFailAlloc_1021_, 1, v___x_933_);
v___x_935_ = v_reuseFailAlloc_1021_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
lean_object* v___x_936_; 
v___x_936_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList(v___x_935_);
if (lean_obj_tag(v___x_936_) == 0)
{
lean_object* v_pos_937_; lean_object* v_res_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v_pos_937_ = lean_ctor_get(v___x_936_, 0);
lean_inc(v_pos_937_);
v_res_938_ = lean_ctor_get(v___x_936_, 1);
lean_inc(v_res_938_);
lean_dec_ref_known(v___x_936_, 2);
v___x_939_ = lean_unsigned_to_nat(0u);
v___x_940_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__0));
v___x_941_ = l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat_spec__0(v___x_940_, v_pos_937_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v_pos_942_; lean_object* v_res_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_1002_; 
v_pos_942_ = lean_ctor_get(v___x_941_, 0);
v_res_943_ = lean_ctor_get(v___x_941_, 1);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_945_ = v___x_941_;
v_isShared_946_ = v_isSharedCheck_1002_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_res_943_);
lean_inc(v_pos_942_);
lean_dec(v___x_941_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_1002_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v_array_947_; lean_object* v_idx_948_; lean_object* v___x_949_; uint8_t v___x_950_; 
v_array_947_ = lean_ctor_get(v_pos_942_, 0);
v_idx_948_ = lean_ctor_get(v_pos_942_, 1);
v___x_949_ = lean_byte_array_size(v_array_947_);
v___x_950_ = lean_nat_dec_lt(v_idx_948_, v___x_949_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; lean_object* v___x_953_; 
lean_dec(v_res_943_);
lean_dec(v_res_938_);
lean_dec(v_res_910_);
lean_dec(v_ident_906_);
v___x_951_ = lean_box(0);
if (v_isShared_946_ == 0)
{
lean_ctor_set_tag(v___x_945_, 1);
lean_ctor_set(v___x_945_, 1, v___x_951_);
v___x_953_ = v___x_945_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_pos_942_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v___x_951_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
else
{
uint8_t v___x_955_; uint8_t v_got_956_; uint8_t v___x_957_; 
v___x_955_ = 48;
v_got_956_ = lean_byte_array_fget(v_array_947_, v_idx_948_);
v___x_957_ = lean_uint8_dec_eq(v_got_956_, v___x_955_);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; lean_object* v___x_960_; 
lean_dec(v_res_943_);
lean_dec(v_res_938_);
lean_dec(v_res_910_);
lean_dec(v_ident_906_);
v___x_958_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseZero___closed__1));
if (v_isShared_946_ == 0)
{
lean_ctor_set_tag(v___x_945_, 1);
lean_ctor_set(v___x_945_, 1, v___x_958_);
v___x_960_ = v___x_945_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_pos_942_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v___x_958_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
else
{
lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_999_; 
lean_inc(v_idx_948_);
lean_inc_ref(v_array_947_);
v_isSharedCheck_999_ = !lean_is_exclusive(v_pos_942_);
if (v_isSharedCheck_999_ == 0)
{
lean_object* v_unused_1000_; lean_object* v_unused_1001_; 
v_unused_1000_ = lean_ctor_get(v_pos_942_, 1);
lean_dec(v_unused_1000_);
v_unused_1001_ = lean_ctor_get(v_pos_942_, 0);
lean_dec(v_unused_1001_);
v___x_963_ = v_pos_942_;
v_isShared_964_ = v_isSharedCheck_999_;
goto v_resetjp_962_;
}
else
{
lean_dec(v_pos_942_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_999_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_965_; lean_object* v___x_967_; 
v___x_965_ = lean_nat_add(v_idx_948_, v___x_932_);
lean_dec(v_idx_948_);
if (v_isShared_964_ == 0)
{
lean_ctor_set(v___x_963_, 1, v___x_965_);
v___x_967_ = v___x_963_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_array_947_);
lean_ctor_set(v_reuseFailAlloc_998_, 1, v___x_965_);
v___x_967_ = v_reuseFailAlloc_998_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
lean_object* v___x_968_; uint8_t v___x_969_; 
v___x_968_ = lean_array_get_size(v_res_910_);
v___x_969_ = lean_nat_dec_eq(v___x_968_, v___x_939_);
if (v___x_969_ == 0)
{
lean_object* v___x_970_; uint8_t v___x_971_; 
v___x_970_ = lean_array_get_size(v_res_943_);
v___x_971_ = lean_nat_dec_eq(v___x_970_, v___x_939_);
if (v___x_971_ == 0)
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_975_; 
v___x_972_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot(v_res_910_);
v___x_973_ = lean_alloc_ctor(2, 5, 0);
lean_ctor_set(v___x_973_, 0, v_ident_906_);
lean_ctor_set(v___x_973_, 1, v_res_910_);
lean_ctor_set(v___x_973_, 2, v___x_972_);
lean_ctor_set(v___x_973_, 3, v_res_938_);
lean_ctor_set(v___x_973_, 4, v_res_943_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 1, v___x_973_);
lean_ctor_set(v___x_945_, 0, v___x_967_);
v___x_975_ = v___x_945_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v___x_967_);
lean_ctor_set(v_reuseFailAlloc_976_, 1, v___x_973_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
else
{
lean_object* v___x_977_; uint8_t v___x_978_; 
lean_dec(v_res_943_);
v___x_977_ = lean_array_get_size(v_res_938_);
v___x_978_ = lean_nat_dec_eq(v___x_977_, v___x_939_);
if (v___x_978_ == 0)
{
lean_object* v___x_979_; lean_object* v___x_981_; 
v___x_979_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_979_, 0, v_ident_906_);
lean_ctor_set(v___x_979_, 1, v_res_910_);
lean_ctor_set(v___x_979_, 2, v_res_938_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 1, v___x_979_);
lean_ctor_set(v___x_945_, 0, v___x_967_);
v___x_981_ = v___x_945_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v___x_967_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v___x_979_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
else
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_986_; 
lean_dec(v_res_938_);
v___x_983_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot(v_res_910_);
v___x_984_ = lean_alloc_ctor(2, 5, 0);
lean_ctor_set(v___x_984_, 0, v_ident_906_);
lean_ctor_set(v___x_984_, 1, v_res_910_);
lean_ctor_set(v___x_984_, 2, v___x_983_);
lean_ctor_set(v___x_984_, 3, v___x_940_);
lean_ctor_set(v___x_984_, 4, v___x_940_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 1, v___x_984_);
lean_ctor_set(v___x_945_, 0, v___x_967_);
v___x_986_ = v___x_945_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v___x_967_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v___x_984_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
}
else
{
lean_object* v___x_988_; uint8_t v___x_989_; 
lean_dec(v_res_910_);
v___x_988_ = lean_array_get_size(v_res_943_);
lean_dec(v_res_943_);
v___x_989_ = lean_nat_dec_eq(v___x_988_, v___x_939_);
if (v___x_989_ == 0)
{
lean_object* v___x_990_; lean_object* v___x_992_; 
lean_dec(v_res_938_);
lean_dec(v_ident_906_);
v___x_990_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__2));
if (v_isShared_946_ == 0)
{
lean_ctor_set_tag(v___x_945_, 1);
lean_ctor_set(v___x_945_, 1, v___x_990_);
lean_ctor_set(v___x_945_, 0, v___x_967_);
v___x_992_ = v___x_945_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v___x_967_);
lean_ctor_set(v_reuseFailAlloc_993_, 1, v___x_990_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
return v___x_992_;
}
}
else
{
lean_object* v___x_994_; lean_object* v___x_996_; 
v___x_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_994_, 0, v_ident_906_);
lean_ctor_set(v___x_994_, 1, v_res_938_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 1, v___x_994_);
lean_ctor_set(v___x_945_, 0, v___x_967_);
v___x_996_ = v___x_945_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v___x_967_);
lean_ctor_set(v_reuseFailAlloc_997_, 1, v___x_994_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
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
lean_object* v_pos_1003_; lean_object* v_err_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1011_; 
lean_dec(v_res_938_);
lean_dec(v_res_910_);
lean_dec(v_ident_906_);
v_pos_1003_ = lean_ctor_get(v___x_941_, 0);
v_err_1004_ = lean_ctor_get(v___x_941_, 1);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1006_ = v___x_941_;
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_err_1004_);
lean_inc(v_pos_1003_);
lean_dec(v___x_941_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_pos_1003_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v_err_1004_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
else
{
lean_object* v_pos_1012_; lean_object* v_err_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
lean_dec(v_res_910_);
lean_dec(v_ident_906_);
v_pos_1012_ = lean_ctor_get(v___x_936_, 0);
v_err_1013_ = lean_ctor_get(v___x_936_, 1);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_936_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_err_1013_);
lean_inc(v_pos_1012_);
lean_dec(v___x_936_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1018_; 
if (v_isShared_1016_ == 0)
{
v___x_1018_ = v___x_1015_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_pos_1012_);
lean_ctor_set(v_reuseFailAlloc_1019_, 1, v_err_1013_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
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
lean_object* v_pos_1026_; lean_object* v_err_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
lean_dec(v_ident_906_);
v_pos_1026_ = lean_ctor_get(v___x_908_, 0);
v_err_1027_ = lean_ctor_get(v___x_908_, 1);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_908_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_err_1027_);
lean_inc(v_pos_1026_);
lean_dec(v___x_908_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_pos_1026_);
lean_ctor_set(v_reuseFailAlloc_1033_, 1, v_err_1027_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseAction(lean_object* v_a_1035_){
_start:
{
lean_object* v_array_1039_; lean_object* v_idx_1040_; lean_object* v___x_1041_; uint8_t v___x_1042_; 
v_array_1039_ = lean_ctor_get(v_a_1035_, 0);
v_idx_1040_ = lean_ctor_get(v_a_1035_, 1);
v___x_1041_ = lean_byte_array_size(v_array_1039_);
v___x_1042_ = lean_nat_dec_lt(v_idx_1040_, v___x_1041_);
if (v___x_1042_ == 0)
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = lean_box(0);
v___x_1044_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1044_, 0, v_a_1035_);
lean_ctor_set(v___x_1044_, 1, v___x_1043_);
return v___x_1044_;
}
else
{
uint8_t v_c_1045_; uint8_t v___x_1046_; uint8_t v___x_1047_; 
v_c_1045_ = lean_byte_array_fget(v_array_1039_, v_idx_1040_);
v___x_1046_ = 48;
v___x_1047_ = lean_uint8_dec_le(v___x_1046_, v_c_1045_);
if (v___x_1047_ == 0)
{
goto v___jp_1036_;
}
else
{
uint8_t v___x_1048_; uint8_t v___x_1049_; 
v___x_1048_ = 57;
v___x_1049_ = lean_uint8_dec_le(v_c_1045_, v___x_1048_);
if (v___x_1049_ == 0)
{
goto v___jp_1036_;
}
else
{
lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1110_; 
lean_inc(v_idx_1040_);
lean_inc_ref(v_array_1039_);
v_isSharedCheck_1110_ = !lean_is_exclusive(v_a_1035_);
if (v_isSharedCheck_1110_ == 0)
{
lean_object* v_unused_1111_; lean_object* v_unused_1112_; 
v_unused_1111_ = lean_ctor_get(v_a_1035_, 1);
lean_dec(v_unused_1111_);
v_unused_1112_ = lean_ctor_get(v_a_1035_, 0);
lean_dec(v_unused_1112_);
v___x_1051_ = v_a_1035_;
v_isShared_1052_ = v_isSharedCheck_1110_;
goto v_resetjp_1050_;
}
else
{
lean_dec(v_a_1035_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1110_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v_it_x27_1056_; 
v___x_1053_ = lean_unsigned_to_nat(1u);
v___x_1054_ = lean_nat_add(v_idx_1040_, v___x_1053_);
lean_dec(v_idx_1040_);
if (v_isShared_1052_ == 0)
{
lean_ctor_set(v___x_1051_, 1, v___x_1054_);
v_it_x27_1056_ = v___x_1051_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_array_1039_);
lean_ctor_set(v_reuseFailAlloc_1109_, 1, v___x_1054_);
v_it_x27_1056_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
uint32_t v___x_1057_; uint8_t v___x_1058_; uint8_t v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v_fst_1062_; lean_object* v_snd_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1108_; 
v___x_1057_ = lean_uint8_to_uint32(v_c_1045_);
v___x_1058_ = lean_uint32_to_uint8(v___x_1057_);
v___x_1059_ = lean_uint8_sub(v___x_1058_, v___x_1046_);
v___x_1060_ = lean_uint8_to_nat(v___x_1059_);
v___x_1061_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_1056_, v___x_1060_);
v_fst_1062_ = lean_ctor_get(v___x_1061_, 0);
v_snd_1063_ = lean_ctor_get(v___x_1061_, 1);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1065_ = v___x_1061_;
v_isShared_1066_ = v_isSharedCheck_1108_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_snd_1063_);
lean_inc(v_fst_1062_);
lean_dec(v___x_1061_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1108_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1067_; uint8_t v___x_1068_; 
v___x_1067_ = lean_unsigned_to_nat(0u);
v___x_1068_ = lean_nat_dec_eq(v_fst_1062_, v___x_1067_);
if (v___x_1068_ == 0)
{
lean_object* v_array_1069_; lean_object* v_idx_1070_; lean_object* v___x_1071_; uint8_t v___x_1072_; 
v_array_1069_ = lean_ctor_get(v_snd_1063_, 0);
v_idx_1070_ = lean_ctor_get(v_snd_1063_, 1);
v___x_1071_ = lean_byte_array_size(v_array_1069_);
v___x_1072_ = lean_nat_dec_lt(v_idx_1070_, v___x_1071_);
if (v___x_1072_ == 0)
{
lean_object* v___x_1073_; lean_object* v___x_1075_; 
lean_dec(v_fst_1062_);
v___x_1073_ = lean_box(0);
if (v_isShared_1066_ == 0)
{
lean_ctor_set_tag(v___x_1065_, 1);
lean_ctor_set(v___x_1065_, 1, v___x_1073_);
lean_ctor_set(v___x_1065_, 0, v_snd_1063_);
v___x_1075_ = v___x_1065_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v_snd_1063_);
lean_ctor_set(v_reuseFailAlloc_1076_, 1, v___x_1073_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
else
{
uint8_t v___x_1077_; uint8_t v_got_1078_; uint8_t v___x_1079_; 
v___x_1077_ = 32;
v_got_1078_ = lean_byte_array_fget(v_array_1069_, v_idx_1070_);
v___x_1079_ = lean_uint8_dec_eq(v_got_1078_, v___x_1077_);
if (v___x_1079_ == 0)
{
lean_object* v___x_1080_; lean_object* v___x_1082_; 
lean_dec(v_fst_1062_);
v___x_1080_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList_idWs___closed__1));
if (v_isShared_1066_ == 0)
{
lean_ctor_set_tag(v___x_1065_, 1);
lean_ctor_set(v___x_1065_, 1, v___x_1080_);
lean_ctor_set(v___x_1065_, 0, v_snd_1063_);
v___x_1082_ = v___x_1065_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_snd_1063_);
lean_ctor_set(v_reuseFailAlloc_1083_, 1, v___x_1080_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
else
{
lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1101_; 
lean_inc(v_idx_1070_);
lean_inc_ref(v_array_1069_);
v_isSharedCheck_1101_ = !lean_is_exclusive(v_snd_1063_);
if (v_isSharedCheck_1101_ == 0)
{
lean_object* v_unused_1102_; lean_object* v_unused_1103_; 
v_unused_1102_ = lean_ctor_get(v_snd_1063_, 1);
lean_dec(v_unused_1102_);
v_unused_1103_ = lean_ctor_get(v_snd_1063_, 0);
lean_dec(v_unused_1103_);
v___x_1085_ = v_snd_1063_;
v_isShared_1086_ = v_isSharedCheck_1101_;
goto v_resetjp_1084_;
}
else
{
lean_dec(v_snd_1063_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1101_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1087_; lean_object* v___x_1089_; 
v___x_1087_ = lean_nat_add(v_idx_1070_, v___x_1053_);
lean_dec(v_idx_1070_);
lean_inc(v___x_1087_);
lean_inc_ref(v_array_1069_);
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 1, v___x_1087_);
v___x_1089_ = v___x_1085_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v_array_1069_);
lean_ctor_set(v_reuseFailAlloc_1100_, 1, v___x_1087_);
v___x_1089_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
uint8_t v___x_1090_; 
v___x_1090_ = lean_nat_dec_lt(v___x_1087_, v___x_1071_);
if (v___x_1090_ == 0)
{
lean_object* v___x_1091_; lean_object* v___x_1093_; 
lean_dec(v___x_1087_);
lean_dec_ref(v_array_1069_);
lean_dec(v_fst_1062_);
v___x_1091_ = lean_box(0);
if (v_isShared_1066_ == 0)
{
lean_ctor_set_tag(v___x_1065_, 1);
lean_ctor_set(v___x_1065_, 1, v___x_1091_);
lean_ctor_set(v___x_1065_, 0, v___x_1089_);
v___x_1093_ = v___x_1065_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1089_);
lean_ctor_set(v_reuseFailAlloc_1094_, 1, v___x_1091_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
else
{
uint8_t v___x_1095_; uint8_t v___x_1096_; uint8_t v___x_1097_; 
lean_del_object(v___x_1065_);
v___x_1095_ = lean_byte_array_fget(v_array_1069_, v___x_1087_);
lean_dec(v___x_1087_);
lean_dec_ref(v_array_1069_);
v___x_1096_ = 100;
v___x_1097_ = lean_uint8_dec_eq(v___x_1095_, v___x_1096_);
if (v___x_1097_ == 0)
{
lean_object* v___x_1098_; 
v___x_1098_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat(v_fst_1062_, v___x_1089_);
return v___x_1098_;
}
else
{
lean_object* v___x_1099_; 
lean_dec(v_fst_1062_);
v___x_1099_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseDelete(v___x_1089_);
return v___x_1099_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1104_; lean_object* v___x_1106_; 
lean_dec(v_fst_1062_);
v___x_1104_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__3));
if (v_isShared_1066_ == 0)
{
lean_ctor_set_tag(v___x_1065_, 1);
lean_ctor_set(v___x_1065_, 1, v___x_1104_);
lean_ctor_set(v___x_1065_, 0, v_snd_1063_);
v___x_1106_ = v___x_1065_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v_snd_1063_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v___x_1104_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
}
}
}
}
}
v___jp_1036_:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parsePos___closed__1));
v___x_1038_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1038_, 0, v_a_1035_);
lean_ctor_set(v___x_1038_, 1, v___x_1037_);
return v___x_1038_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go_spec__0(lean_object* v_acc_1116_, lean_object* v_a_1117_){
_start:
{
lean_object* v_array_1118_; lean_object* v_idx_1119_; lean_object* v_pos_1121_; lean_object* v_idx_1122_; lean_object* v_err_1123_; lean_object* v___x_1129_; uint8_t v___x_1130_; 
v_array_1118_ = lean_ctor_get(v_a_1117_, 0);
v_idx_1119_ = lean_ctor_get(v_a_1117_, 1);
lean_inc(v_idx_1119_);
v___x_1129_ = lean_byte_array_size(v_array_1118_);
v___x_1130_ = lean_nat_dec_lt(v_idx_1119_, v___x_1129_);
if (v___x_1130_ == 0)
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_box(0);
lean_inc(v_idx_1119_);
v_pos_1121_ = v_a_1117_;
v_idx_1122_ = v_idx_1119_;
v_err_1123_ = v___x_1131_;
goto v___jp_1120_;
}
else
{
uint8_t v_c_1132_; uint8_t v___x_1133_; uint8_t v___x_1134_; 
v_c_1132_ = lean_byte_array_fget(v_array_1118_, v_idx_1119_);
v___x_1133_ = 10;
v___x_1134_ = lean_uint8_dec_eq(v_c_1132_, v___x_1133_);
if (v___x_1134_ == 0)
{
uint8_t v___x_1135_; uint8_t v___x_1136_; 
v___x_1135_ = 13;
v___x_1136_ = lean_uint8_dec_eq(v_c_1132_, v___x_1135_);
if (v___x_1136_ == 0)
{
lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1148_; 
lean_inc_ref(v_array_1118_);
v_isSharedCheck_1148_ = !lean_is_exclusive(v_a_1117_);
if (v_isSharedCheck_1148_ == 0)
{
lean_object* v_unused_1149_; lean_object* v_unused_1150_; 
v_unused_1149_ = lean_ctor_get(v_a_1117_, 1);
lean_dec(v_unused_1149_);
v_unused_1150_ = lean_ctor_get(v_a_1117_, 0);
lean_dec(v_unused_1150_);
v___x_1138_ = v_a_1117_;
v_isShared_1139_ = v_isSharedCheck_1148_;
goto v_resetjp_1137_;
}
else
{
lean_dec(v_a_1117_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1148_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v_it_x27_1143_; 
v___x_1140_ = lean_unsigned_to_nat(1u);
v___x_1141_ = lean_nat_add(v_idx_1119_, v___x_1140_);
lean_dec(v_idx_1119_);
if (v_isShared_1139_ == 0)
{
lean_ctor_set(v___x_1138_, 1, v___x_1141_);
v_it_x27_1143_ = v___x_1138_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_array_1118_);
lean_ctor_set(v_reuseFailAlloc_1147_, 1, v___x_1141_);
v_it_x27_1143_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = lean_box(v_c_1132_);
v___x_1145_ = lean_array_push(v_acc_1116_, v___x_1144_);
v_acc_1116_ = v___x_1145_;
v_a_1117_ = v_it_x27_1143_;
goto _start;
}
}
}
else
{
goto v___jp_1127_;
}
}
else
{
goto v___jp_1127_;
}
}
v___jp_1120_:
{
uint8_t v___x_1124_; 
v___x_1124_ = lean_nat_dec_eq(v_idx_1119_, v_idx_1122_);
lean_dec(v_idx_1122_);
lean_dec(v_idx_1119_);
if (v___x_1124_ == 0)
{
lean_object* v___x_1125_; 
lean_dec_ref(v_acc_1116_);
lean_inc(v_err_1123_);
v___x_1125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1125_, 0, v_pos_1121_);
lean_ctor_set(v___x_1125_, 1, v_err_1123_);
return v___x_1125_;
}
else
{
lean_object* v___x_1126_; 
v___x_1126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1126_, 0, v_pos_1121_);
lean_ctor_set(v___x_1126_, 1, v_acc_1116_);
return v___x_1126_;
}
}
v___jp_1127_:
{
lean_object* v___x_1128_; 
v___x_1128_ = ((lean_object*)(l_Std_Internal_Parsec_manyCore___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go_spec__0___closed__1));
lean_inc(v_idx_1119_);
v_pos_1121_ = v_a_1117_;
v_idx_1122_ = v_idx_1119_;
v_err_1123_ = v___x_1128_;
goto v___jp_1120_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go(lean_object* v_actions_1153_, lean_object* v_a_1154_){
_start:
{
lean_object* v_pos_1156_; lean_object* v_array_1157_; lean_object* v_idx_1158_; lean_object* v_pos_1164_; lean_object* v_array_1167_; lean_object* v_idx_1168_; lean_object* v___x_1169_; uint8_t v___x_1170_; 
v_array_1167_ = lean_ctor_get(v_a_1154_, 0);
v_idx_1168_ = lean_ctor_get(v_a_1154_, 1);
v___x_1169_ = lean_byte_array_size(v_array_1167_);
v___x_1170_ = lean_nat_dec_lt(v_idx_1168_, v___x_1169_);
if (v___x_1170_ == 0)
{
lean_object* v___x_1171_; lean_object* v___x_1172_; 
lean_dec_ref(v_actions_1153_);
v___x_1171_ = lean_box(0);
v___x_1172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1172_, 0, v_a_1154_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
return v___x_1172_;
}
else
{
uint8_t v___x_1173_; uint8_t v___x_1174_; uint8_t v___x_1175_; 
v___x_1173_ = lean_byte_array_fget(v_array_1167_, v_idx_1168_);
v___x_1174_ = 99;
v___x_1175_ = lean_uint8_dec_eq(v___x_1173_, v___x_1174_);
if (v___x_1175_ == 0)
{
lean_object* v___x_1176_; 
v___x_1176_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseAction(v_a_1154_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v_pos_1177_; lean_object* v_res_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1246_; 
v_pos_1177_ = lean_ctor_get(v___x_1176_, 0);
v_res_1178_ = lean_ctor_get(v___x_1176_, 1);
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1180_ = v___x_1176_;
v_isShared_1181_ = v_isSharedCheck_1246_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_res_1178_);
lean_inc(v_pos_1177_);
lean_dec(v___x_1176_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1246_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v_pos_1183_; lean_object* v_array_1184_; lean_object* v_idx_1185_; lean_object* v_pos_1194_; lean_object* v_array_1197_; lean_object* v_idx_1198_; lean_object* v___y_1200_; lean_object* v_pos_1201_; lean_object* v_idx_1202_; lean_object* v___x_1226_; uint8_t v___x_1227_; 
v_array_1197_ = lean_ctor_get(v_pos_1177_, 0);
v_idx_1198_ = lean_ctor_get(v_pos_1177_, 1);
lean_inc(v_idx_1198_);
v___x_1226_ = lean_byte_array_size(v_array_1197_);
v___x_1227_ = lean_nat_dec_lt(v_idx_1198_, v___x_1226_);
if (v___x_1227_ == 0)
{
lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1228_ = lean_box(0);
lean_inc(v_pos_1177_);
v___x_1229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1229_, 0, v_pos_1177_);
lean_ctor_set(v___x_1229_, 1, v___x_1228_);
lean_inc(v_idx_1198_);
v___y_1200_ = v___x_1229_;
v_pos_1201_ = v_pos_1177_;
v_idx_1202_ = v_idx_1198_;
goto v___jp_1199_;
}
else
{
uint8_t v___x_1230_; uint8_t v_got_1231_; uint8_t v___x_1232_; 
v___x_1230_ = 10;
v_got_1231_ = lean_byte_array_fget(v_array_1197_, v_idx_1198_);
v___x_1232_ = lean_uint8_dec_eq(v_got_1231_, v___x_1230_);
if (v___x_1232_ == 0)
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1233_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__3));
lean_inc(v_pos_1177_);
v___x_1234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1234_, 0, v_pos_1177_);
lean_ctor_set(v___x_1234_, 1, v___x_1233_);
lean_inc(v_idx_1198_);
v___y_1200_ = v___x_1234_;
v_pos_1201_ = v_pos_1177_;
v_idx_1202_ = v_idx_1198_;
goto v___jp_1199_;
}
else
{
lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1243_; 
lean_inc_ref(v_array_1197_);
v_isSharedCheck_1243_ = !lean_is_exclusive(v_pos_1177_);
if (v_isSharedCheck_1243_ == 0)
{
lean_object* v_unused_1244_; lean_object* v_unused_1245_; 
v_unused_1244_ = lean_ctor_get(v_pos_1177_, 1);
lean_dec(v_unused_1244_);
v_unused_1245_ = lean_ctor_get(v_pos_1177_, 0);
lean_dec(v_unused_1245_);
v___x_1236_ = v_pos_1177_;
v_isShared_1237_ = v_isSharedCheck_1243_;
goto v_resetjp_1235_;
}
else
{
lean_dec(v_pos_1177_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1243_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1241_; 
v___x_1238_ = lean_unsigned_to_nat(1u);
v___x_1239_ = lean_nat_add(v_idx_1198_, v___x_1238_);
lean_dec(v_idx_1198_);
lean_inc(v___x_1239_);
lean_inc_ref(v_array_1197_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 1, v___x_1239_);
v___x_1241_ = v___x_1236_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v_array_1197_);
lean_ctor_set(v_reuseFailAlloc_1242_, 1, v___x_1239_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
v_pos_1183_ = v___x_1241_;
v_array_1184_ = v_array_1197_;
v_idx_1185_ = v___x_1239_;
goto v___jp_1182_;
}
}
}
}
v___jp_1182_:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; uint8_t v___x_1188_; 
v___x_1186_ = lean_array_push(v_actions_1153_, v_res_1178_);
v___x_1187_ = lean_byte_array_size(v_array_1184_);
lean_dec_ref(v_array_1184_);
v___x_1188_ = lean_nat_dec_lt(v_idx_1185_, v___x_1187_);
lean_dec(v_idx_1185_);
if (v___x_1188_ == 0)
{
lean_object* v___x_1190_; 
if (v_isShared_1181_ == 0)
{
lean_ctor_set(v___x_1180_, 1, v___x_1186_);
lean_ctor_set(v___x_1180_, 0, v_pos_1183_);
v___x_1190_ = v___x_1180_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_pos_1183_);
lean_ctor_set(v_reuseFailAlloc_1191_, 1, v___x_1186_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
else
{
lean_del_object(v___x_1180_);
v_actions_1153_ = v___x_1186_;
v_a_1154_ = v_pos_1183_;
goto _start;
}
}
v___jp_1193_:
{
lean_object* v_array_1195_; lean_object* v_idx_1196_; 
v_array_1195_ = lean_ctor_get(v_pos_1194_, 0);
lean_inc_ref(v_array_1195_);
v_idx_1196_ = lean_ctor_get(v_pos_1194_, 1);
lean_inc(v_idx_1196_);
v_pos_1183_ = v_pos_1194_;
v_array_1184_ = v_array_1195_;
v_idx_1185_ = v_idx_1196_;
goto v___jp_1182_;
}
v___jp_1199_:
{
uint8_t v___x_1203_; 
v___x_1203_ = lean_nat_dec_eq(v_idx_1198_, v_idx_1202_);
lean_dec(v_idx_1202_);
lean_dec(v_idx_1198_);
if (v___x_1203_ == 0)
{
lean_dec_ref(v_pos_1201_);
if (lean_obj_tag(v___y_1200_) == 0)
{
lean_object* v_pos_1204_; 
v_pos_1204_ = lean_ctor_get(v___y_1200_, 0);
lean_inc(v_pos_1204_);
lean_dec_ref_known(v___y_1200_, 2);
v_pos_1194_ = v_pos_1204_;
goto v___jp_1193_;
}
else
{
lean_object* v_pos_1205_; lean_object* v_err_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1213_; 
lean_del_object(v___x_1180_);
lean_dec(v_res_1178_);
lean_dec_ref(v_actions_1153_);
v_pos_1205_ = lean_ctor_get(v___y_1200_, 0);
v_err_1206_ = lean_ctor_get(v___y_1200_, 1);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___y_1200_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1208_ = v___y_1200_;
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_err_1206_);
lean_inc(v_pos_1205_);
lean_dec(v___y_1200_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_pos_1205_);
lean_ctor_set(v_reuseFailAlloc_1212_, 1, v_err_1206_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
}
else
{
lean_object* v_utf8_1214_; lean_object* v___x_1215_; 
lean_dec_ref(v___y_1200_);
v_utf8_1214_ = lean_obj_once(&l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1, &l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1_once, _init_l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1);
v___x_1215_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_1214_, v_pos_1201_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v_pos_1216_; 
v_pos_1216_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_pos_1216_);
lean_dec_ref_known(v___x_1215_, 2);
v_pos_1194_ = v_pos_1216_;
goto v___jp_1193_;
}
else
{
lean_object* v_pos_1217_; lean_object* v_err_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1225_; 
lean_del_object(v___x_1180_);
lean_dec(v_res_1178_);
lean_dec_ref(v_actions_1153_);
v_pos_1217_ = lean_ctor_get(v___x_1215_, 0);
v_err_1218_ = lean_ctor_get(v___x_1215_, 1);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1215_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_err_1218_);
lean_inc(v_pos_1217_);
lean_dec(v___x_1215_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1223_; 
if (v_isShared_1221_ == 0)
{
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_pos_1217_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_err_1218_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
}
}
}
}
else
{
lean_object* v_pos_1247_; lean_object* v_err_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1255_; 
lean_dec_ref(v_actions_1153_);
v_pos_1247_ = lean_ctor_get(v___x_1176_, 0);
v_err_1248_ = lean_ctor_get(v___x_1176_, 1);
v_isSharedCheck_1255_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1250_ = v___x_1176_;
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_err_1248_);
lean_inc(v_pos_1247_);
lean_dec(v___x_1176_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1253_; 
if (v_isShared_1251_ == 0)
{
v___x_1253_ = v___x_1250_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_pos_1247_);
lean_ctor_set(v_reuseFailAlloc_1254_, 1, v_err_1248_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
return v___x_1253_;
}
}
}
}
else
{
lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1256_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go___closed__0));
v___x_1257_ = l_Std_Internal_Parsec_manyCore___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go_spec__0(v___x_1256_, v_a_1154_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_pos_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1315_; 
v_pos_1258_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1315_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1315_ == 0)
{
lean_object* v_unused_1316_; 
v_unused_1316_ = lean_ctor_get(v___x_1257_, 1);
lean_dec(v_unused_1316_);
v___x_1260_ = v___x_1257_;
v_isShared_1261_ = v_isSharedCheck_1315_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_pos_1258_);
lean_dec(v___x_1257_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1315_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v_array_1262_; lean_object* v_idx_1263_; lean_object* v___y_1265_; lean_object* v_pos_1266_; lean_object* v_idx_1267_; lean_object* v___x_1291_; uint8_t v___x_1292_; 
v_array_1262_ = lean_ctor_get(v_pos_1258_, 0);
v_idx_1263_ = lean_ctor_get(v_pos_1258_, 1);
lean_inc(v_idx_1263_);
v___x_1291_ = lean_byte_array_size(v_array_1262_);
v___x_1292_ = lean_nat_dec_lt(v_idx_1263_, v___x_1291_);
if (v___x_1292_ == 0)
{
lean_object* v___x_1293_; lean_object* v___x_1295_; 
v___x_1293_ = lean_box(0);
lean_inc(v_pos_1258_);
if (v_isShared_1261_ == 0)
{
lean_ctor_set_tag(v___x_1260_, 1);
lean_ctor_set(v___x_1260_, 1, v___x_1293_);
v___x_1295_ = v___x_1260_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v_pos_1258_);
lean_ctor_set(v_reuseFailAlloc_1296_, 1, v___x_1293_);
v___x_1295_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
lean_inc(v_idx_1263_);
v___y_1265_ = v___x_1295_;
v_pos_1266_ = v_pos_1258_;
v_idx_1267_ = v_idx_1263_;
goto v___jp_1264_;
}
}
else
{
uint8_t v___x_1297_; uint8_t v_got_1298_; uint8_t v___x_1299_; 
v___x_1297_ = 10;
v_got_1298_ = lean_byte_array_fget(v_array_1262_, v_idx_1263_);
v___x_1299_ = lean_uint8_dec_eq(v_got_1298_, v___x_1297_);
if (v___x_1299_ == 0)
{
lean_object* v___x_1300_; lean_object* v___x_1302_; 
v___x_1300_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__3));
lean_inc(v_pos_1258_);
if (v_isShared_1261_ == 0)
{
lean_ctor_set_tag(v___x_1260_, 1);
lean_ctor_set(v___x_1260_, 1, v___x_1300_);
v___x_1302_ = v___x_1260_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_pos_1258_);
lean_ctor_set(v_reuseFailAlloc_1303_, 1, v___x_1300_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
lean_inc(v_idx_1263_);
v___y_1265_ = v___x_1302_;
v_pos_1266_ = v_pos_1258_;
v_idx_1267_ = v_idx_1263_;
goto v___jp_1264_;
}
}
else
{
lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1312_; 
lean_inc_ref(v_array_1262_);
lean_del_object(v___x_1260_);
v_isSharedCheck_1312_ = !lean_is_exclusive(v_pos_1258_);
if (v_isSharedCheck_1312_ == 0)
{
lean_object* v_unused_1313_; lean_object* v_unused_1314_; 
v_unused_1313_ = lean_ctor_get(v_pos_1258_, 1);
lean_dec(v_unused_1313_);
v_unused_1314_ = lean_ctor_get(v_pos_1258_, 0);
lean_dec(v_unused_1314_);
v___x_1305_ = v_pos_1258_;
v_isShared_1306_ = v_isSharedCheck_1312_;
goto v_resetjp_1304_;
}
else
{
lean_dec(v_pos_1258_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1312_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1310_; 
v___x_1307_ = lean_unsigned_to_nat(1u);
v___x_1308_ = lean_nat_add(v_idx_1263_, v___x_1307_);
lean_dec(v_idx_1263_);
lean_inc(v___x_1308_);
lean_inc_ref(v_array_1262_);
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 1, v___x_1308_);
v___x_1310_ = v___x_1305_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v_array_1262_);
lean_ctor_set(v_reuseFailAlloc_1311_, 1, v___x_1308_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
v_pos_1156_ = v___x_1310_;
v_array_1157_ = v_array_1262_;
v_idx_1158_ = v___x_1308_;
goto v___jp_1155_;
}
}
}
}
v___jp_1264_:
{
uint8_t v___x_1268_; 
v___x_1268_ = lean_nat_dec_eq(v_idx_1263_, v_idx_1267_);
lean_dec(v_idx_1267_);
lean_dec(v_idx_1263_);
if (v___x_1268_ == 0)
{
lean_dec_ref(v_pos_1266_);
if (lean_obj_tag(v___y_1265_) == 0)
{
lean_object* v_pos_1269_; 
v_pos_1269_ = lean_ctor_get(v___y_1265_, 0);
lean_inc(v_pos_1269_);
lean_dec_ref_known(v___y_1265_, 2);
v_pos_1164_ = v_pos_1269_;
goto v___jp_1163_;
}
else
{
lean_object* v_pos_1270_; lean_object* v_err_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1278_; 
lean_dec_ref(v_actions_1153_);
v_pos_1270_ = lean_ctor_get(v___y_1265_, 0);
v_err_1271_ = lean_ctor_get(v___y_1265_, 1);
v_isSharedCheck_1278_ = !lean_is_exclusive(v___y_1265_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1273_ = v___y_1265_;
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_err_1271_);
lean_inc(v_pos_1270_);
lean_dec(v___y_1265_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1276_; 
if (v_isShared_1274_ == 0)
{
v___x_1276_ = v___x_1273_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_pos_1270_);
lean_ctor_set(v_reuseFailAlloc_1277_, 1, v_err_1271_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
return v___x_1276_;
}
}
}
}
else
{
lean_object* v_utf8_1279_; lean_object* v___x_1280_; 
lean_dec_ref(v___y_1265_);
v_utf8_1279_ = lean_obj_once(&l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1, &l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1_once, _init_l_Std_Tactic_BVDecide_LRAT_Parser_Text_skipNewline___closed__1);
v___x_1280_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_1279_, v_pos_1266_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_pos_1281_; 
v_pos_1281_ = lean_ctor_get(v___x_1280_, 0);
lean_inc(v_pos_1281_);
lean_dec_ref_known(v___x_1280_, 2);
v_pos_1164_ = v_pos_1281_;
goto v___jp_1163_;
}
else
{
lean_object* v_pos_1282_; lean_object* v_err_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1290_; 
lean_dec_ref(v_actions_1153_);
v_pos_1282_ = lean_ctor_get(v___x_1280_, 0);
v_err_1283_ = lean_ctor_get(v___x_1280_, 1);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1285_ = v___x_1280_;
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_err_1283_);
lean_inc(v_pos_1282_);
lean_dec(v___x_1280_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1288_; 
if (v_isShared_1286_ == 0)
{
v___x_1288_ = v___x_1285_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_pos_1282_);
lean_ctor_set(v_reuseFailAlloc_1289_, 1, v_err_1283_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
}
}
}
}
else
{
lean_object* v_pos_1317_; lean_object* v_err_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
lean_dec_ref(v_actions_1153_);
v_pos_1317_ = lean_ctor_get(v___x_1257_, 0);
v_err_1318_ = lean_ctor_get(v___x_1257_, 1);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1257_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_err_1318_);
lean_inc(v_pos_1317_);
lean_dec(v___x_1257_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_pos_1317_);
lean_ctor_set(v_reuseFailAlloc_1324_, 1, v_err_1318_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
}
v___jp_1155_:
{
lean_object* v___x_1159_; uint8_t v___x_1160_; 
v___x_1159_ = lean_byte_array_size(v_array_1157_);
lean_dec_ref(v_array_1157_);
v___x_1160_ = lean_nat_dec_lt(v_idx_1158_, v___x_1159_);
lean_dec(v_idx_1158_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; 
v___x_1161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1161_, 0, v_pos_1156_);
lean_ctor_set(v___x_1161_, 1, v_actions_1153_);
return v___x_1161_;
}
else
{
v_a_1154_ = v_pos_1156_;
goto _start;
}
}
v___jp_1163_:
{
lean_object* v_array_1165_; lean_object* v_idx_1166_; 
v_array_1165_ = lean_ctor_get(v_pos_1164_, 0);
lean_inc_ref(v_array_1165_);
v_idx_1166_ = lean_ctor_get(v_pos_1164_, 1);
lean_inc(v_idx_1166_);
v_pos_1156_ = v_pos_1164_;
v_array_1157_ = v_array_1165_;
v_idx_1158_ = v_idx_1166_;
goto v___jp_1155_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions(lean_object* v_a_1328_){
_start:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1329_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions___closed__0));
v___x_1330_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions_go(v___x_1329_, v_a_1328_);
return v___x_1330_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero(lean_object* v_a_1334_){
_start:
{
lean_object* v_array_1335_; lean_object* v_idx_1336_; lean_object* v___x_1337_; uint8_t v___x_1338_; 
v_array_1335_ = lean_ctor_get(v_a_1334_, 0);
v_idx_1336_ = lean_ctor_get(v_a_1334_, 1);
v___x_1337_ = lean_byte_array_size(v_array_1335_);
v___x_1338_ = lean_nat_dec_lt(v_idx_1336_, v___x_1337_);
if (v___x_1338_ == 0)
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1339_ = lean_box(0);
v___x_1340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1340_, 0, v_a_1334_);
lean_ctor_set(v___x_1340_, 1, v___x_1339_);
return v___x_1340_;
}
else
{
uint8_t v___x_1341_; uint8_t v_got_1342_; uint8_t v___x_1343_; 
v___x_1341_ = 0;
v_got_1342_ = lean_byte_array_fget(v_array_1335_, v_idx_1336_);
v___x_1343_ = lean_uint8_dec_eq(v_got_1342_, v___x_1341_);
if (v___x_1343_ == 0)
{
lean_object* v___x_1344_; lean_object* v___x_1345_; 
v___x_1344_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero___closed__1));
v___x_1345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1345_, 0, v_a_1334_);
lean_ctor_set(v___x_1345_, 1, v___x_1344_);
return v___x_1345_;
}
else
{
lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1356_; 
lean_inc(v_idx_1336_);
lean_inc_ref(v_array_1335_);
v_isSharedCheck_1356_ = !lean_is_exclusive(v_a_1334_);
if (v_isSharedCheck_1356_ == 0)
{
lean_object* v_unused_1357_; lean_object* v_unused_1358_; 
v_unused_1357_ = lean_ctor_get(v_a_1334_, 1);
lean_dec(v_unused_1357_);
v_unused_1358_ = lean_ctor_get(v_a_1334_, 0);
lean_dec(v_unused_1358_);
v___x_1347_ = v_a_1334_;
v_isShared_1348_ = v_isSharedCheck_1356_;
goto v_resetjp_1346_;
}
else
{
lean_dec(v_a_1334_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1356_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1352_; 
v___x_1349_ = lean_unsigned_to_nat(1u);
v___x_1350_ = lean_nat_add(v_idx_1336_, v___x_1349_);
lean_dec(v_idx_1336_);
if (v_isShared_1348_ == 0)
{
lean_ctor_set(v___x_1347_, 1, v___x_1350_);
v___x_1352_ = v___x_1347_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v_array_1335_);
lean_ctor_set(v_reuseFailAlloc_1355_, 1, v___x_1350_);
v___x_1352_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1353_ = lean_box(0);
v___x_1354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1352_);
lean_ctor_set(v___x_1354_, 1, v___x_1353_);
return v___x_1354_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go(uint64_t v_uidx_1365_, uint64_t v_shift_1366_, lean_object* v_a_1367_){
_start:
{
lean_object* v_array_1368_; lean_object* v_idx_1369_; lean_object* v___x_1370_; uint8_t v___x_1371_; 
v_array_1368_ = lean_ctor_get(v_a_1367_, 0);
v_idx_1369_ = lean_ctor_get(v_a_1367_, 1);
v___x_1370_ = lean_byte_array_size(v_array_1368_);
v___x_1371_ = lean_nat_dec_lt(v_idx_1369_, v___x_1370_);
if (v___x_1371_ == 0)
{
lean_object* v___x_1372_; lean_object* v___x_1373_; 
v___x_1372_ = lean_box(0);
v___x_1373_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1373_, 0, v_a_1367_);
lean_ctor_set(v___x_1373_, 1, v___x_1372_);
return v___x_1373_;
}
else
{
lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1419_; 
lean_inc(v_idx_1369_);
lean_inc_ref(v_array_1368_);
v_isSharedCheck_1419_ = !lean_is_exclusive(v_a_1367_);
if (v_isSharedCheck_1419_ == 0)
{
lean_object* v_unused_1420_; lean_object* v_unused_1421_; 
v_unused_1420_ = lean_ctor_get(v_a_1367_, 1);
lean_dec(v_unused_1420_);
v_unused_1421_ = lean_ctor_get(v_a_1367_, 0);
lean_dec(v_unused_1421_);
v___x_1375_ = v_a_1367_;
v_isShared_1376_ = v_isSharedCheck_1419_;
goto v_resetjp_1374_;
}
else
{
lean_dec(v_a_1367_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1419_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
uint8_t v_c_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v_it_x27_1381_; 
v_c_1377_ = lean_byte_array_fget(v_array_1368_, v_idx_1369_);
v___x_1378_ = lean_unsigned_to_nat(1u);
v___x_1379_ = lean_nat_add(v_idx_1369_, v___x_1378_);
lean_dec(v_idx_1369_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 1, v___x_1379_);
v_it_x27_1381_ = v___x_1375_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_array_1368_);
lean_ctor_set(v_reuseFailAlloc_1418_, 1, v___x_1379_);
v_it_x27_1381_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
uint64_t v___x_1410_; uint8_t v___x_1411_; 
v___x_1410_ = 28ULL;
v___x_1411_ = lean_uint64_dec_eq(v_shift_1366_, v___x_1410_);
if (v___x_1411_ == 0)
{
goto v___jp_1382_;
}
else
{
uint8_t v___x_1412_; uint8_t v___x_1413_; uint8_t v___x_1414_; uint8_t v___x_1415_; 
v___x_1412_ = 240;
v___x_1413_ = lean_uint8_land(v_c_1377_, v___x_1412_);
v___x_1414_ = 0;
v___x_1415_ = lean_uint8_dec_eq(v___x_1413_, v___x_1414_);
if (v___x_1415_ == 0)
{
lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1416_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__3));
v___x_1417_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1417_, 0, v_it_x27_1381_);
lean_ctor_set(v___x_1417_, 1, v___x_1416_);
return v___x_1417_;
}
else
{
goto v___jp_1382_;
}
}
v___jp_1382_:
{
uint8_t v___x_1383_; uint8_t v___x_1384_; 
v___x_1383_ = 0;
v___x_1384_ = lean_uint8_dec_eq(v_c_1377_, v___x_1383_);
if (v___x_1384_ == 0)
{
uint8_t v___x_1385_; uint8_t v___x_1386_; uint64_t v___x_1387_; uint64_t v___x_1388_; uint64_t v___x_1389_; uint8_t v___x_1390_; uint8_t v___x_1391_; uint8_t v___x_1392_; 
v___x_1385_ = 127;
v___x_1386_ = lean_uint8_land(v_c_1377_, v___x_1385_);
v___x_1387_ = lean_uint8_to_uint64(v___x_1386_);
v___x_1388_ = lean_uint64_shift_left(v___x_1387_, v_shift_1366_);
v___x_1389_ = lean_uint64_lor(v_uidx_1365_, v___x_1388_);
v___x_1390_ = 128;
v___x_1391_ = lean_uint8_land(v_c_1377_, v___x_1390_);
v___x_1392_ = lean_uint8_dec_eq(v___x_1391_, v___x_1383_);
if (v___x_1392_ == 0)
{
uint64_t v___x_1393_; uint64_t v___x_1394_; 
v___x_1393_ = 7ULL;
v___x_1394_ = lean_uint64_add(v_shift_1366_, v___x_1393_);
v_uidx_1365_ = v___x_1389_;
v_shift_1366_ = v___x_1394_;
v_a_1367_ = v_it_x27_1381_;
goto _start;
}
else
{
uint64_t v___x_1396_; uint64_t v___x_1397_; uint64_t v___x_1398_; uint64_t v___x_1399_; uint8_t v___x_1400_; 
v___x_1396_ = 1ULL;
v___x_1397_ = lean_uint64_shift_right(v___x_1389_, v___x_1396_);
v___x_1398_ = lean_uint64_land(v___x_1396_, v___x_1389_);
v___x_1399_ = 0ULL;
v___x_1400_ = lean_uint64_dec_eq(v___x_1398_, v___x_1399_);
if (v___x_1400_ == 0)
{
lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1401_ = lean_uint64_to_nat(v___x_1397_);
v___x_1402_ = lean_nat_to_int(v___x_1401_);
v___x_1403_ = lean_int_neg(v___x_1402_);
lean_dec(v___x_1402_);
v___x_1404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1404_, 0, v_it_x27_1381_);
lean_ctor_set(v___x_1404_, 1, v___x_1403_);
return v___x_1404_;
}
else
{
lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1405_ = lean_uint64_to_nat(v___x_1397_);
v___x_1406_ = lean_nat_to_int(v___x_1405_);
v___x_1407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1407_, 0, v_it_x27_1381_);
lean_ctor_set(v___x_1407_, 1, v___x_1406_);
return v___x_1407_;
}
}
}
else
{
lean_object* v___x_1408_; lean_object* v___x_1409_; 
v___x_1408_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___closed__1));
v___x_1409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1409_, 0, v_it_x27_1381_);
lean_ctor_set(v___x_1409_, 1, v___x_1408_);
return v___x_1409_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go___boxed(lean_object* v_uidx_1422_, lean_object* v_shift_1423_, lean_object* v_a_1424_){
_start:
{
uint64_t v_uidx_boxed_1425_; uint64_t v_shift_boxed_1426_; lean_object* v_res_1427_; 
v_uidx_boxed_1425_ = lean_unbox_uint64(v_uidx_1422_);
lean_dec_ref(v_uidx_1422_);
v_shift_boxed_1426_ = lean_unbox_uint64(v_shift_1423_);
lean_dec_ref(v_shift_1423_);
v_res_1427_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go(v_uidx_boxed_1425_, v_shift_boxed_1426_, v_a_1424_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(lean_object* v_a_1428_){
_start:
{
uint64_t v___x_1429_; lean_object* v___x_1430_; 
v___x_1429_ = 0ULL;
v___x_1430_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit_go(v___x_1429_, v___x_1429_, v_a_1428_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseNeg(lean_object* v_a_1434_){
_start:
{
lean_object* v___x_1435_; 
v___x_1435_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(v_a_1434_);
if (lean_obj_tag(v___x_1435_) == 0)
{
lean_object* v_pos_1436_; lean_object* v_res_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1451_; 
v_pos_1436_ = lean_ctor_get(v___x_1435_, 0);
v_res_1437_ = lean_ctor_get(v___x_1435_, 1);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1439_ = v___x_1435_;
v_isShared_1440_ = v_isSharedCheck_1451_;
goto v_resetjp_1438_;
}
else
{
lean_inc(v_res_1437_);
lean_inc(v_pos_1436_);
lean_dec(v___x_1435_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1451_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1441_; uint8_t v___x_1442_; 
v___x_1441_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0);
v___x_1442_ = lean_int_dec_lt(v_res_1437_, v___x_1441_);
if (v___x_1442_ == 0)
{
lean_object* v___x_1443_; lean_object* v___x_1445_; 
lean_dec(v_res_1437_);
v___x_1443_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseNeg___closed__1));
if (v_isShared_1440_ == 0)
{
lean_ctor_set_tag(v___x_1439_, 1);
lean_ctor_set(v___x_1439_, 1, v___x_1443_);
v___x_1445_ = v___x_1439_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v_pos_1436_);
lean_ctor_set(v_reuseFailAlloc_1446_, 1, v___x_1443_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
else
{
lean_object* v___x_1447_; lean_object* v___x_1449_; 
v___x_1447_ = lean_nat_abs(v_res_1437_);
lean_dec(v_res_1437_);
if (v_isShared_1440_ == 0)
{
lean_ctor_set(v___x_1439_, 1, v___x_1447_);
v___x_1449_ = v___x_1439_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_pos_1436_);
lean_ctor_set(v_reuseFailAlloc_1450_, 1, v___x_1447_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
}
}
else
{
lean_object* v_pos_1452_; lean_object* v_err_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1460_; 
v_pos_1452_ = lean_ctor_get(v___x_1435_, 0);
v_err_1453_ = lean_ctor_get(v___x_1435_, 1);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1455_ = v___x_1435_;
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_err_1453_);
lean_inc(v_pos_1452_);
lean_dec(v___x_1435_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1458_; 
if (v_isShared_1456_ == 0)
{
v___x_1458_ = v___x_1455_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_pos_1452_);
lean_ctor_set(v_reuseFailAlloc_1459_, 1, v_err_1453_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos(lean_object* v_a_1464_){
_start:
{
lean_object* v___x_1465_; 
v___x_1465_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(v_a_1464_);
if (lean_obj_tag(v___x_1465_) == 0)
{
lean_object* v_pos_1466_; lean_object* v_res_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1481_; 
v_pos_1466_ = lean_ctor_get(v___x_1465_, 0);
v_res_1467_ = lean_ctor_get(v___x_1465_, 1);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1465_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1469_ = v___x_1465_;
v_isShared_1470_ = v_isSharedCheck_1481_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_res_1467_);
lean_inc(v_pos_1466_);
lean_dec(v___x_1465_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1481_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v___x_1471_; uint8_t v___x_1472_; 
v___x_1471_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0);
v___x_1472_ = lean_int_dec_lt(v___x_1471_, v_res_1467_);
if (v___x_1472_ == 0)
{
lean_object* v___x_1473_; lean_object* v___x_1475_; 
lean_dec(v_res_1467_);
v___x_1473_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos___closed__1));
if (v_isShared_1470_ == 0)
{
lean_ctor_set_tag(v___x_1469_, 1);
lean_ctor_set(v___x_1469_, 1, v___x_1473_);
v___x_1475_ = v___x_1469_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_pos_1466_);
lean_ctor_set(v_reuseFailAlloc_1476_, 1, v___x_1473_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
else
{
lean_object* v___x_1477_; lean_object* v___x_1479_; 
v___x_1477_ = lean_nat_abs(v_res_1467_);
lean_dec(v_res_1467_);
if (v_isShared_1470_ == 0)
{
lean_ctor_set(v___x_1469_, 1, v___x_1477_);
v___x_1479_ = v___x_1469_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_pos_1466_);
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
else
{
lean_object* v_pos_1482_; lean_object* v_err_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1490_; 
v_pos_1482_ = lean_ctor_get(v___x_1465_, 0);
v_err_1483_ = lean_ctor_get(v___x_1465_, 1);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1465_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1485_ = v___x_1465_;
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_err_1483_);
lean_inc(v_pos_1482_);
lean_dec(v___x_1465_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1488_; 
if (v_isShared_1486_ == 0)
{
v___x_1488_ = v___x_1485_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_pos_1482_);
lean_ctor_set(v_reuseFailAlloc_1489_, 1, v_err_1483_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseId(lean_object* v_a_1491_){
_start:
{
lean_object* v___x_1492_; 
v___x_1492_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(v_a_1491_);
if (lean_obj_tag(v___x_1492_) == 0)
{
lean_object* v_pos_1493_; lean_object* v_res_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1508_; 
v_pos_1493_ = lean_ctor_get(v___x_1492_, 0);
v_res_1494_ = lean_ctor_get(v___x_1492_, 1);
v_isSharedCheck_1508_ = !lean_is_exclusive(v___x_1492_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1496_ = v___x_1492_;
v_isShared_1497_ = v_isSharedCheck_1508_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_res_1494_);
lean_inc(v_pos_1493_);
lean_dec(v___x_1492_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1508_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
lean_object* v___x_1498_; uint8_t v___x_1499_; 
v___x_1498_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0);
v___x_1499_ = lean_int_dec_lt(v___x_1498_, v_res_1494_);
if (v___x_1499_ == 0)
{
lean_object* v___x_1500_; lean_object* v___x_1502_; 
lean_dec(v_res_1494_);
v___x_1500_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos___closed__1));
if (v_isShared_1497_ == 0)
{
lean_ctor_set_tag(v___x_1496_, 1);
lean_ctor_set(v___x_1496_, 1, v___x_1500_);
v___x_1502_ = v___x_1496_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_pos_1493_);
lean_ctor_set(v_reuseFailAlloc_1503_, 1, v___x_1500_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
else
{
lean_object* v___x_1504_; lean_object* v___x_1506_; 
v___x_1504_ = lean_nat_abs(v_res_1494_);
lean_dec(v_res_1494_);
if (v_isShared_1497_ == 0)
{
lean_ctor_set(v___x_1496_, 1, v___x_1504_);
v___x_1506_ = v___x_1496_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v_pos_1493_);
lean_ctor_set(v_reuseFailAlloc_1507_, 1, v___x_1504_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
return v___x_1506_;
}
}
}
}
else
{
lean_object* v_pos_1509_; lean_object* v_err_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1517_; 
v_pos_1509_ = lean_ctor_get(v___x_1492_, 0);
v_err_1510_ = lean_ctor_get(v___x_1492_, 1);
v_isSharedCheck_1517_ = !lean_is_exclusive(v___x_1492_);
if (v_isSharedCheck_1517_ == 0)
{
v___x_1512_ = v___x_1492_;
v_isShared_1513_ = v_isSharedCheck_1517_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_err_1510_);
lean_inc(v_pos_1509_);
lean_dec(v___x_1492_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1517_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___x_1515_; 
if (v_isShared_1513_ == 0)
{
v___x_1515_ = v___x_1512_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v_pos_1509_);
lean_ctor_set(v_reuseFailAlloc_1516_, 1, v_err_1510_);
v___x_1515_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
return v___x_1515_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___redArg(lean_object* v_parser_1518_, lean_object* v_acc_1519_, lean_object* v_a_1520_){
_start:
{
lean_object* v_array_1521_; lean_object* v_idx_1522_; lean_object* v___x_1523_; uint8_t v___x_1524_; 
v_array_1521_ = lean_ctor_get(v_a_1520_, 0);
v_idx_1522_ = lean_ctor_get(v_a_1520_, 1);
v___x_1523_ = lean_byte_array_size(v_array_1521_);
v___x_1524_ = lean_nat_dec_lt(v_idx_1522_, v___x_1523_);
if (v___x_1524_ == 0)
{
lean_object* v___x_1525_; lean_object* v___x_1526_; 
lean_dec_ref(v_acc_1519_);
lean_dec_ref(v_parser_1518_);
v___x_1525_ = lean_box(0);
v___x_1526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1526_, 0, v_a_1520_);
lean_ctor_set(v___x_1526_, 1, v___x_1525_);
return v___x_1526_;
}
else
{
uint8_t v___x_1527_; uint8_t v___x_1528_; uint8_t v___x_1529_; 
v___x_1527_ = lean_byte_array_fget(v_array_1521_, v_idx_1522_);
v___x_1528_ = 0;
v___x_1529_ = lean_uint8_dec_eq(v___x_1527_, v___x_1528_);
if (v___x_1529_ == 0)
{
lean_object* v___x_1530_; 
lean_inc_ref(v_parser_1518_);
v___x_1530_ = lean_apply_1(v_parser_1518_, v_a_1520_);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v_pos_1531_; lean_object* v_res_1532_; lean_object* v___x_1533_; 
v_pos_1531_ = lean_ctor_get(v___x_1530_, 0);
lean_inc(v_pos_1531_);
v_res_1532_ = lean_ctor_get(v___x_1530_, 1);
lean_inc(v_res_1532_);
lean_dec_ref_known(v___x_1530_, 2);
v___x_1533_ = lean_array_push(v_acc_1519_, v_res_1532_);
v_acc_1519_ = v___x_1533_;
v_a_1520_ = v_pos_1531_;
goto _start;
}
else
{
lean_object* v_pos_1535_; lean_object* v_err_1536_; lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1543_; 
lean_dec_ref(v_acc_1519_);
lean_dec_ref(v_parser_1518_);
v_pos_1535_ = lean_ctor_get(v___x_1530_, 0);
v_err_1536_ = lean_ctor_get(v___x_1530_, 1);
v_isSharedCheck_1543_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1543_ == 0)
{
v___x_1538_ = v___x_1530_;
v_isShared_1539_ = v_isSharedCheck_1543_;
goto v_resetjp_1537_;
}
else
{
lean_inc(v_err_1536_);
lean_inc(v_pos_1535_);
lean_dec(v___x_1530_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1543_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v___x_1541_; 
if (v_isShared_1539_ == 0)
{
v___x_1541_ = v___x_1538_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v_pos_1535_);
lean_ctor_set(v_reuseFailAlloc_1542_, 1, v_err_1536_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
}
else
{
lean_object* v___x_1544_; 
lean_dec_ref(v_parser_1518_);
v___x_1544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1544_, 0, v_a_1520_);
lean_ctor_set(v___x_1544_, 1, v_acc_1519_);
return v___x_1544_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go(lean_object* v_00_u03b1_1545_, lean_object* v_parser_1546_, lean_object* v_acc_1547_, lean_object* v_a_1548_){
_start:
{
lean_object* v___x_1549_; 
v___x_1549_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___redArg(v_parser_1546_, v_acc_1547_, v_a_1548_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___redArg(lean_object* v_parser_1552_, lean_object* v_a_1553_){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1554_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___redArg___closed__0));
v___x_1555_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___redArg(v_parser_1552_, v___x_1554_, v_a_1553_);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero(lean_object* v_00_u03b1_1556_, lean_object* v_parser_1557_, lean_object* v_a_1558_){
_start:
{
lean_object* v___x_1559_; 
v___x_1559_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___redArg(v_parser_1557_, v_a_1558_);
return v___x_1559_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero_go___redArg(lean_object* v_parser_1560_, lean_object* v_acc_1561_, lean_object* v_a_1562_){
_start:
{
lean_object* v_array_1563_; lean_object* v_idx_1564_; lean_object* v___x_1565_; uint8_t v___x_1566_; 
v_array_1563_ = lean_ctor_get(v_a_1562_, 0);
v_idx_1564_ = lean_ctor_get(v_a_1562_, 1);
v___x_1565_ = lean_byte_array_size(v_array_1563_);
v___x_1566_ = lean_nat_dec_lt(v_idx_1564_, v___x_1565_);
if (v___x_1566_ == 0)
{
lean_object* v___x_1567_; lean_object* v___x_1568_; 
lean_dec_ref(v_acc_1561_);
lean_dec_ref(v_parser_1560_);
v___x_1567_ = lean_box(0);
v___x_1568_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1568_, 0, v_a_1562_);
lean_ctor_set(v___x_1568_, 1, v___x_1567_);
return v___x_1568_;
}
else
{
uint8_t v___x_1569_; uint8_t v___x_1570_; uint8_t v___x_1571_; uint8_t v___x_1572_; uint8_t v___x_1573_; 
v___x_1569_ = lean_byte_array_fget(v_array_1563_, v_idx_1564_);
v___x_1570_ = 1;
v___x_1571_ = lean_uint8_land(v___x_1570_, v___x_1569_);
v___x_1572_ = 0;
v___x_1573_ = lean_uint8_dec_eq(v___x_1571_, v___x_1572_);
if (v___x_1573_ == 0)
{
lean_object* v___x_1574_; 
lean_dec_ref(v_parser_1560_);
v___x_1574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1574_, 0, v_a_1562_);
lean_ctor_set(v___x_1574_, 1, v_acc_1561_);
return v___x_1574_;
}
else
{
uint8_t v___x_1575_; 
v___x_1575_ = lean_uint8_dec_eq(v___x_1569_, v___x_1572_);
if (v___x_1575_ == 0)
{
lean_object* v___x_1576_; 
lean_inc_ref(v_parser_1560_);
v___x_1576_ = lean_apply_1(v_parser_1560_, v_a_1562_);
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_object* v_pos_1577_; lean_object* v_res_1578_; lean_object* v___x_1579_; 
v_pos_1577_ = lean_ctor_get(v___x_1576_, 0);
lean_inc(v_pos_1577_);
v_res_1578_ = lean_ctor_get(v___x_1576_, 1);
lean_inc(v_res_1578_);
lean_dec_ref_known(v___x_1576_, 2);
v___x_1579_ = lean_array_push(v_acc_1561_, v_res_1578_);
v_acc_1561_ = v___x_1579_;
v_a_1562_ = v_pos_1577_;
goto _start;
}
else
{
lean_object* v_pos_1581_; lean_object* v_err_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
lean_dec_ref(v_acc_1561_);
lean_dec_ref(v_parser_1560_);
v_pos_1581_ = lean_ctor_get(v___x_1576_, 0);
v_err_1582_ = lean_ctor_get(v___x_1576_, 1);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___x_1576_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_err_1582_);
lean_inc(v_pos_1581_);
lean_dec(v___x_1576_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_pos_1581_);
lean_ctor_set(v_reuseFailAlloc_1588_, 1, v_err_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
}
else
{
lean_object* v___x_1590_; 
lean_dec_ref(v_parser_1560_);
v___x_1590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1590_, 0, v_a_1562_);
lean_ctor_set(v___x_1590_, 1, v_acc_1561_);
return v___x_1590_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero_go(lean_object* v_00_u03b1_1591_, lean_object* v_parser_1592_, lean_object* v_acc_1593_, lean_object* v_a_1594_){
_start:
{
lean_object* v___x_1595_; 
v___x_1595_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero_go___redArg(v_parser_1592_, v_acc_1593_, v_a_1594_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___redArg(lean_object* v_parser_1596_, lean_object* v_a_1597_){
_start:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1598_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___redArg___closed__0));
v___x_1599_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero_go___redArg(v_parser_1596_, v___x_1598_, v_a_1597_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero(lean_object* v_00_u03b1_1600_, lean_object* v_parser_1601_, lean_object* v_a_1602_){
_start:
{
lean_object* v___x_1603_; 
v___x_1603_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___redArg(v_parser_1601_, v_a_1602_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseIdList(lean_object* v_a_1604_){
_start:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1605_ = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseId), 1, 0);
v___x_1606_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___redArg(v___x_1605_, v_a_1604_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseClause(lean_object* v_a_1607_){
_start:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1608_ = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit), 1, 0);
v___x_1609_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___redArg(v___x_1608_, v_a_1607_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero_go___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes_spec__0_spec__0(lean_object* v_acc_1610_, lean_object* v_a_1611_){
_start:
{
lean_object* v_array_1612_; lean_object* v_idx_1613_; lean_object* v___x_1614_; uint8_t v___x_1615_; 
v_array_1612_ = lean_ctor_get(v_a_1611_, 0);
v_idx_1613_ = lean_ctor_get(v_a_1611_, 1);
v___x_1614_ = lean_byte_array_size(v_array_1612_);
v___x_1615_ = lean_nat_dec_lt(v_idx_1613_, v___x_1614_);
if (v___x_1615_ == 0)
{
lean_object* v___x_1616_; lean_object* v___x_1617_; 
lean_dec_ref(v_acc_1610_);
v___x_1616_ = lean_box(0);
v___x_1617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1617_, 0, v_a_1611_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
return v___x_1617_;
}
else
{
uint8_t v___x_1618_; uint8_t v___x_1619_; uint8_t v___x_1620_; uint8_t v___x_1621_; uint8_t v___x_1622_; 
v___x_1618_ = lean_byte_array_fget(v_array_1612_, v_idx_1613_);
v___x_1619_ = 1;
v___x_1620_ = lean_uint8_land(v___x_1619_, v___x_1618_);
v___x_1621_ = 0;
v___x_1622_ = lean_uint8_dec_eq(v___x_1620_, v___x_1621_);
if (v___x_1622_ == 0)
{
lean_object* v___x_1623_; 
v___x_1623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1623_, 0, v_a_1611_);
lean_ctor_set(v___x_1623_, 1, v_acc_1610_);
return v___x_1623_;
}
else
{
uint8_t v___x_1624_; 
v___x_1624_ = lean_uint8_dec_eq(v___x_1618_, v___x_1621_);
if (v___x_1624_ == 0)
{
lean_object* v___x_1625_; 
v___x_1625_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(v_a_1611_);
if (lean_obj_tag(v___x_1625_) == 0)
{
lean_object* v_pos_1626_; lean_object* v_res_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1640_; 
v_pos_1626_ = lean_ctor_get(v___x_1625_, 0);
v_res_1627_ = lean_ctor_get(v___x_1625_, 1);
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1629_ = v___x_1625_;
v_isShared_1630_ = v_isSharedCheck_1640_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_res_1627_);
lean_inc(v_pos_1626_);
lean_dec(v___x_1625_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1640_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1631_; uint8_t v___x_1632_; 
v___x_1631_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0);
v___x_1632_ = lean_int_dec_lt(v___x_1631_, v_res_1627_);
if (v___x_1632_ == 0)
{
lean_object* v___x_1633_; lean_object* v___x_1635_; 
lean_dec(v_res_1627_);
lean_dec_ref(v_acc_1610_);
v___x_1633_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos___closed__1));
if (v_isShared_1630_ == 0)
{
lean_ctor_set_tag(v___x_1629_, 1);
lean_ctor_set(v___x_1629_, 1, v___x_1633_);
v___x_1635_ = v___x_1629_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v_pos_1626_);
lean_ctor_set(v_reuseFailAlloc_1636_, 1, v___x_1633_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
return v___x_1635_;
}
}
else
{
lean_object* v___x_1637_; lean_object* v___x_1638_; 
lean_del_object(v___x_1629_);
v___x_1637_ = lean_nat_abs(v_res_1627_);
lean_dec(v_res_1627_);
v___x_1638_ = lean_array_push(v_acc_1610_, v___x_1637_);
v_acc_1610_ = v___x_1638_;
v_a_1611_ = v_pos_1626_;
goto _start;
}
}
}
else
{
lean_object* v_pos_1641_; lean_object* v_err_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1649_; 
lean_dec_ref(v_acc_1610_);
v_pos_1641_ = lean_ctor_get(v___x_1625_, 0);
v_err_1642_ = lean_ctor_get(v___x_1625_, 1);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1644_ = v___x_1625_;
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_err_1642_);
lean_inc(v_pos_1641_);
lean_dec(v___x_1625_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1647_; 
if (v_isShared_1645_ == 0)
{
v___x_1647_ = v___x_1644_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_pos_1641_);
lean_ctor_set(v_reuseFailAlloc_1648_, 1, v_err_1642_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
return v___x_1647_;
}
}
}
}
else
{
lean_object* v___x_1650_; 
v___x_1650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1650_, 0, v_a_1611_);
lean_ctor_set(v___x_1650_, 1, v_acc_1610_);
return v___x_1650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes_spec__0(lean_object* v_a_1651_){
_start:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; 
v___x_1652_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList___closed__0));
v___x_1653_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero_go___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes_spec__0_spec__0(v___x_1652_, v_a_1651_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes(lean_object* v_a_1654_){
_start:
{
lean_object* v___x_1655_; 
v___x_1655_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(v_a_1654_);
if (lean_obj_tag(v___x_1655_) == 0)
{
lean_object* v_pos_1656_; lean_object* v_res_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1688_; 
v_pos_1656_ = lean_ctor_get(v___x_1655_, 0);
v_res_1657_ = lean_ctor_get(v___x_1655_, 1);
v_isSharedCheck_1688_ = !lean_is_exclusive(v___x_1655_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1659_ = v___x_1655_;
v_isShared_1660_ = v_isSharedCheck_1688_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_res_1657_);
lean_inc(v_pos_1656_);
lean_dec(v___x_1655_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1688_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1661_; uint8_t v___x_1662_; 
v___x_1661_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0);
v___x_1662_ = lean_int_dec_lt(v_res_1657_, v___x_1661_);
if (v___x_1662_ == 0)
{
lean_object* v___x_1663_; lean_object* v___x_1665_; 
lean_dec(v_res_1657_);
v___x_1663_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseNeg___closed__1));
if (v_isShared_1660_ == 0)
{
lean_ctor_set_tag(v___x_1659_, 1);
lean_ctor_set(v___x_1659_, 1, v___x_1663_);
v___x_1665_ = v___x_1659_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_pos_1656_);
lean_ctor_set(v_reuseFailAlloc_1666_, 1, v___x_1663_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
else
{
lean_object* v___x_1667_; 
lean_del_object(v___x_1659_);
v___x_1667_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes_spec__0(v_pos_1656_);
if (lean_obj_tag(v___x_1667_) == 0)
{
lean_object* v_pos_1668_; lean_object* v_res_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1678_; 
v_pos_1668_ = lean_ctor_get(v___x_1667_, 0);
v_res_1669_ = lean_ctor_get(v___x_1667_, 1);
v_isSharedCheck_1678_ = !lean_is_exclusive(v___x_1667_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1671_ = v___x_1667_;
v_isShared_1672_ = v_isSharedCheck_1678_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_res_1669_);
lean_inc(v_pos_1668_);
lean_dec(v___x_1667_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1678_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1676_; 
v___x_1673_ = lean_nat_abs(v_res_1657_);
lean_dec(v_res_1657_);
v___x_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1673_);
lean_ctor_set(v___x_1674_, 1, v_res_1669_);
if (v_isShared_1672_ == 0)
{
lean_ctor_set(v___x_1671_, 1, v___x_1674_);
v___x_1676_ = v___x_1671_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_pos_1668_);
lean_ctor_set(v_reuseFailAlloc_1677_, 1, v___x_1674_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
return v___x_1676_;
}
}
}
else
{
lean_object* v_pos_1679_; lean_object* v_err_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1687_; 
lean_dec(v_res_1657_);
v_pos_1679_ = lean_ctor_get(v___x_1667_, 0);
v_err_1680_ = lean_ctor_get(v___x_1667_, 1);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1667_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1682_ = v___x_1667_;
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_err_1680_);
lean_inc(v_pos_1679_);
lean_dec(v___x_1667_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___x_1685_; 
if (v_isShared_1683_ == 0)
{
v___x_1685_ = v___x_1682_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v_pos_1679_);
lean_ctor_set(v_reuseFailAlloc_1686_, 1, v_err_1680_);
v___x_1685_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
return v___x_1685_;
}
}
}
}
}
}
else
{
lean_object* v_pos_1689_; lean_object* v_err_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1697_; 
v_pos_1689_ = lean_ctor_get(v___x_1655_, 0);
v_err_1690_ = lean_ctor_get(v___x_1655_, 1);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1655_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1692_ = v___x_1655_;
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_err_1690_);
lean_inc(v_pos_1689_);
lean_dec(v___x_1655_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_pos_1689_);
lean_ctor_set(v_reuseFailAlloc_1696_, 1, v_err_1690_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRatHints(lean_object* v_a_1698_){
_start:
{
lean_object* v___x_1699_; lean_object* v___x_1700_; 
v___x_1699_ = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes), 1, 0);
v___x_1700_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___redArg(v___x_1699_, v_a_1698_);
return v___x_1700_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__0_spec__0(lean_object* v_acc_1701_, lean_object* v_a_1702_){
_start:
{
lean_object* v_array_1703_; lean_object* v_idx_1704_; lean_object* v___x_1705_; uint8_t v___x_1706_; 
v_array_1703_ = lean_ctor_get(v_a_1702_, 0);
v_idx_1704_ = lean_ctor_get(v_a_1702_, 1);
v___x_1705_ = lean_byte_array_size(v_array_1703_);
v___x_1706_ = lean_nat_dec_lt(v_idx_1704_, v___x_1705_);
if (v___x_1706_ == 0)
{
lean_object* v___x_1707_; lean_object* v___x_1708_; 
lean_dec_ref(v_acc_1701_);
v___x_1707_ = lean_box(0);
v___x_1708_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1708_, 0, v_a_1702_);
lean_ctor_set(v___x_1708_, 1, v___x_1707_);
return v___x_1708_;
}
else
{
uint8_t v___x_1709_; uint8_t v___x_1710_; uint8_t v___x_1711_; 
v___x_1709_ = lean_byte_array_fget(v_array_1703_, v_idx_1704_);
v___x_1710_ = 0;
v___x_1711_ = lean_uint8_dec_eq(v___x_1709_, v___x_1710_);
if (v___x_1711_ == 0)
{
lean_object* v___x_1712_; 
v___x_1712_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(v_a_1702_);
if (lean_obj_tag(v___x_1712_) == 0)
{
lean_object* v_pos_1713_; lean_object* v_res_1714_; lean_object* v___x_1715_; 
v_pos_1713_ = lean_ctor_get(v___x_1712_, 0);
lean_inc(v_pos_1713_);
v_res_1714_ = lean_ctor_get(v___x_1712_, 1);
lean_inc(v_res_1714_);
lean_dec_ref_known(v___x_1712_, 2);
v___x_1715_ = lean_array_push(v_acc_1701_, v_res_1714_);
v_acc_1701_ = v___x_1715_;
v_a_1702_ = v_pos_1713_;
goto _start;
}
else
{
lean_object* v_pos_1717_; lean_object* v_err_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1725_; 
lean_dec_ref(v_acc_1701_);
v_pos_1717_ = lean_ctor_get(v___x_1712_, 0);
v_err_1718_ = lean_ctor_get(v___x_1712_, 1);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___x_1712_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1720_ = v___x_1712_;
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_err_1718_);
lean_inc(v_pos_1717_);
lean_dec(v___x_1712_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1723_; 
if (v_isShared_1721_ == 0)
{
v___x_1723_ = v___x_1720_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v_pos_1717_);
lean_ctor_set(v_reuseFailAlloc_1724_, 1, v_err_1718_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
}
}
}
}
else
{
lean_object* v___x_1726_; 
v___x_1726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1726_, 0, v_a_1702_);
lean_ctor_set(v___x_1726_, 1, v_acc_1701_);
return v___x_1726_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__0(lean_object* v_a_1727_){
_start:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1728_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseClause___closed__0));
v___x_1729_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__0_spec__0(v___x_1728_, v_a_1727_);
return v___x_1729_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__1_spec__2(lean_object* v_acc_1730_, lean_object* v_a_1731_){
_start:
{
lean_object* v_array_1732_; lean_object* v_idx_1733_; lean_object* v___x_1734_; uint8_t v___x_1735_; 
v_array_1732_ = lean_ctor_get(v_a_1731_, 0);
v_idx_1733_ = lean_ctor_get(v_a_1731_, 1);
v___x_1734_ = lean_byte_array_size(v_array_1732_);
v___x_1735_ = lean_nat_dec_lt(v_idx_1733_, v___x_1734_);
if (v___x_1735_ == 0)
{
lean_object* v___x_1736_; lean_object* v___x_1737_; 
lean_dec_ref(v_acc_1730_);
v___x_1736_ = lean_box(0);
v___x_1737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1737_, 0, v_a_1731_);
lean_ctor_set(v___x_1737_, 1, v___x_1736_);
return v___x_1737_;
}
else
{
uint8_t v___x_1738_; uint8_t v___x_1739_; uint8_t v___x_1740_; 
v___x_1738_ = lean_byte_array_fget(v_array_1732_, v_idx_1733_);
v___x_1739_ = 0;
v___x_1740_ = lean_uint8_dec_eq(v___x_1738_, v___x_1739_);
if (v___x_1740_ == 0)
{
lean_object* v___x_1741_; 
v___x_1741_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes(v_a_1731_);
if (lean_obj_tag(v___x_1741_) == 0)
{
lean_object* v_pos_1742_; lean_object* v_res_1743_; lean_object* v___x_1744_; 
v_pos_1742_ = lean_ctor_get(v___x_1741_, 0);
lean_inc(v_pos_1742_);
v_res_1743_ = lean_ctor_get(v___x_1741_, 1);
lean_inc(v_res_1743_);
lean_dec_ref_known(v___x_1741_, 2);
v___x_1744_ = lean_array_push(v_acc_1730_, v_res_1743_);
v_acc_1730_ = v___x_1744_;
v_a_1731_ = v_pos_1742_;
goto _start;
}
else
{
lean_object* v_pos_1746_; lean_object* v_err_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1754_; 
lean_dec_ref(v_acc_1730_);
v_pos_1746_ = lean_ctor_get(v___x_1741_, 0);
v_err_1747_ = lean_ctor_get(v___x_1741_, 1);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1741_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1749_ = v___x_1741_;
v_isShared_1750_ = v_isSharedCheck_1754_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_err_1747_);
lean_inc(v_pos_1746_);
lean_dec(v___x_1741_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1754_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
lean_object* v___x_1752_; 
if (v_isShared_1750_ == 0)
{
v___x_1752_ = v___x_1749_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v_pos_1746_);
lean_ctor_set(v_reuseFailAlloc_1753_, 1, v_err_1747_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
}
}
else
{
lean_object* v___x_1755_; 
v___x_1755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1755_, 0, v_a_1731_);
lean_ctor_set(v___x_1755_, 1, v_acc_1730_);
return v___x_1755_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__1(lean_object* v_a_1756_){
_start:
{
lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1757_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__0));
v___x_1758_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero_go___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__1_spec__2(v___x_1757_, v_a_1756_);
return v___x_1758_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd(lean_object* v_a_1759_){
_start:
{
lean_object* v___x_1760_; 
v___x_1760_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseLit(v_a_1759_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_object* v_pos_1761_; lean_object* v_res_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1899_; 
v_pos_1761_ = lean_ctor_get(v___x_1760_, 0);
v_res_1762_ = lean_ctor_get(v___x_1760_, 1);
v_isSharedCheck_1899_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1764_ = v___x_1760_;
v_isShared_1765_ = v_isSharedCheck_1899_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_res_1762_);
lean_inc(v_pos_1761_);
lean_dec(v___x_1760_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1899_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; uint8_t v___x_1768_; 
v___x_1766_ = lean_unsigned_to_nat(0u);
v___x_1767_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0);
v___x_1768_ = lean_int_dec_lt(v___x_1767_, v_res_1762_);
if (v___x_1768_ == 0)
{
lean_object* v___x_1769_; lean_object* v___x_1771_; 
lean_dec(v_res_1762_);
v___x_1769_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parsePos___closed__1));
if (v_isShared_1765_ == 0)
{
lean_ctor_set_tag(v___x_1764_, 1);
lean_ctor_set(v___x_1764_, 1, v___x_1769_);
v___x_1771_ = v___x_1764_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v_pos_1761_);
lean_ctor_set(v_reuseFailAlloc_1772_, 1, v___x_1769_);
v___x_1771_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
return v___x_1771_;
}
}
else
{
lean_object* v___x_1773_; 
lean_del_object(v___x_1764_);
v___x_1773_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__0(v_pos_1761_);
if (lean_obj_tag(v___x_1773_) == 0)
{
lean_object* v_pos_1774_; lean_object* v_res_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1889_; 
v_pos_1774_ = lean_ctor_get(v___x_1773_, 0);
v_res_1775_ = lean_ctor_get(v___x_1773_, 1);
v_isSharedCheck_1889_ = !lean_is_exclusive(v___x_1773_);
if (v_isSharedCheck_1889_ == 0)
{
v___x_1777_ = v___x_1773_;
v_isShared_1778_ = v_isSharedCheck_1889_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_res_1775_);
lean_inc(v_pos_1774_);
lean_dec(v___x_1773_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1889_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v_array_1779_; lean_object* v_idx_1780_; lean_object* v___x_1781_; uint8_t v___x_1782_; 
v_array_1779_ = lean_ctor_get(v_pos_1774_, 0);
v_idx_1780_ = lean_ctor_get(v_pos_1774_, 1);
v___x_1781_ = lean_byte_array_size(v_array_1779_);
v___x_1782_ = lean_nat_dec_lt(v_idx_1780_, v___x_1781_);
if (v___x_1782_ == 0)
{
lean_object* v___x_1783_; lean_object* v___x_1785_; 
lean_dec(v_res_1775_);
lean_dec(v_res_1762_);
v___x_1783_ = lean_box(0);
if (v_isShared_1778_ == 0)
{
lean_ctor_set_tag(v___x_1777_, 1);
lean_ctor_set(v___x_1777_, 1, v___x_1783_);
v___x_1785_ = v___x_1777_;
goto v_reusejp_1784_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v_pos_1774_);
lean_ctor_set(v_reuseFailAlloc_1786_, 1, v___x_1783_);
v___x_1785_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1784_;
}
v_reusejp_1784_:
{
return v___x_1785_;
}
}
else
{
uint8_t v___x_1787_; uint8_t v_got_1788_; uint8_t v___x_1789_; 
v___x_1787_ = 0;
v_got_1788_ = lean_byte_array_fget(v_array_1779_, v_idx_1780_);
v___x_1789_ = lean_uint8_dec_eq(v_got_1788_, v___x_1787_);
if (v___x_1789_ == 0)
{
lean_object* v___x_1790_; lean_object* v___x_1792_; 
lean_dec(v_res_1775_);
lean_dec(v_res_1762_);
v___x_1790_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero___closed__1));
if (v_isShared_1778_ == 0)
{
lean_ctor_set_tag(v___x_1777_, 1);
lean_ctor_set(v___x_1777_, 1, v___x_1790_);
v___x_1792_ = v___x_1777_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_pos_1774_);
lean_ctor_set(v_reuseFailAlloc_1793_, 1, v___x_1790_);
v___x_1792_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
return v___x_1792_;
}
}
else
{
lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1886_; 
lean_inc(v_idx_1780_);
lean_inc_ref(v_array_1779_);
lean_del_object(v___x_1777_);
v_isSharedCheck_1886_ = !lean_is_exclusive(v_pos_1774_);
if (v_isSharedCheck_1886_ == 0)
{
lean_object* v_unused_1887_; lean_object* v_unused_1888_; 
v_unused_1887_ = lean_ctor_get(v_pos_1774_, 1);
lean_dec(v_unused_1887_);
v_unused_1888_ = lean_ctor_get(v_pos_1774_, 0);
lean_dec(v_unused_1888_);
v___x_1795_ = v_pos_1774_;
v_isShared_1796_ = v_isSharedCheck_1886_;
goto v_resetjp_1794_;
}
else
{
lean_dec(v_pos_1774_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1886_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1800_; 
v___x_1797_ = lean_unsigned_to_nat(1u);
v___x_1798_ = lean_nat_add(v_idx_1780_, v___x_1797_);
lean_dec(v_idx_1780_);
if (v_isShared_1796_ == 0)
{
lean_ctor_set(v___x_1795_, 1, v___x_1798_);
v___x_1800_ = v___x_1795_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v_array_1779_);
lean_ctor_set(v_reuseFailAlloc_1885_, 1, v___x_1798_);
v___x_1800_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
lean_object* v___x_1801_; 
v___x_1801_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes_spec__0(v___x_1800_);
if (lean_obj_tag(v___x_1801_) == 0)
{
lean_object* v_pos_1802_; lean_object* v_res_1803_; lean_object* v___x_1804_; 
v_pos_1802_ = lean_ctor_get(v___x_1801_, 0);
lean_inc(v_pos_1802_);
v_res_1803_ = lean_ctor_get(v___x_1801_, 1);
lean_inc(v_res_1803_);
lean_dec_ref_known(v___x_1801_, 2);
v___x_1804_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillZero___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd_spec__1(v_pos_1802_);
if (lean_obj_tag(v___x_1804_) == 0)
{
lean_object* v_pos_1805_; lean_object* v_res_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1866_; 
v_pos_1805_ = lean_ctor_get(v___x_1804_, 0);
v_res_1806_ = lean_ctor_get(v___x_1804_, 1);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1804_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1808_ = v___x_1804_;
v_isShared_1809_ = v_isSharedCheck_1866_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_res_1806_);
lean_inc(v_pos_1805_);
lean_dec(v___x_1804_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1866_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v_array_1810_; lean_object* v_idx_1811_; lean_object* v___x_1812_; uint8_t v___x_1813_; 
v_array_1810_ = lean_ctor_get(v_pos_1805_, 0);
v_idx_1811_ = lean_ctor_get(v_pos_1805_, 1);
v___x_1812_ = lean_byte_array_size(v_array_1810_);
v___x_1813_ = lean_nat_dec_lt(v_idx_1811_, v___x_1812_);
if (v___x_1813_ == 0)
{
lean_object* v___x_1814_; lean_object* v___x_1816_; 
lean_dec(v_res_1806_);
lean_dec(v_res_1803_);
lean_dec(v_res_1775_);
lean_dec(v_res_1762_);
v___x_1814_ = lean_box(0);
if (v_isShared_1809_ == 0)
{
lean_ctor_set_tag(v___x_1808_, 1);
lean_ctor_set(v___x_1808_, 1, v___x_1814_);
v___x_1816_ = v___x_1808_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v_pos_1805_);
lean_ctor_set(v_reuseFailAlloc_1817_, 1, v___x_1814_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
return v___x_1816_;
}
}
else
{
uint8_t v_got_1818_; uint8_t v___x_1819_; 
v_got_1818_ = lean_byte_array_fget(v_array_1810_, v_idx_1811_);
v___x_1819_ = lean_uint8_dec_eq(v_got_1818_, v___x_1787_);
if (v___x_1819_ == 0)
{
lean_object* v___x_1820_; lean_object* v___x_1822_; 
lean_dec(v_res_1806_);
lean_dec(v_res_1803_);
lean_dec(v_res_1775_);
lean_dec(v_res_1762_);
v___x_1820_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero___closed__1));
if (v_isShared_1809_ == 0)
{
lean_ctor_set_tag(v___x_1808_, 1);
lean_ctor_set(v___x_1808_, 1, v___x_1820_);
v___x_1822_ = v___x_1808_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v_pos_1805_);
lean_ctor_set(v_reuseFailAlloc_1823_, 1, v___x_1820_);
v___x_1822_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
return v___x_1822_;
}
}
else
{
lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1863_; 
lean_inc(v_idx_1811_);
lean_inc_ref(v_array_1810_);
v_isSharedCheck_1863_ = !lean_is_exclusive(v_pos_1805_);
if (v_isSharedCheck_1863_ == 0)
{
lean_object* v_unused_1864_; lean_object* v_unused_1865_; 
v_unused_1864_ = lean_ctor_get(v_pos_1805_, 1);
lean_dec(v_unused_1864_);
v_unused_1865_ = lean_ctor_get(v_pos_1805_, 0);
lean_dec(v_unused_1865_);
v___x_1825_ = v_pos_1805_;
v_isShared_1826_ = v_isSharedCheck_1863_;
goto v_resetjp_1824_;
}
else
{
lean_dec(v_pos_1805_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1863_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1830_; 
v___x_1827_ = lean_nat_abs(v_res_1762_);
lean_dec(v_res_1762_);
v___x_1828_ = lean_nat_add(v_idx_1811_, v___x_1797_);
lean_dec(v_idx_1811_);
if (v_isShared_1826_ == 0)
{
lean_ctor_set(v___x_1825_, 1, v___x_1828_);
v___x_1830_ = v___x_1825_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_array_1810_);
lean_ctor_set(v_reuseFailAlloc_1862_, 1, v___x_1828_);
v___x_1830_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
lean_object* v___x_1831_; uint8_t v___x_1832_; 
v___x_1831_ = lean_array_get_size(v_res_1775_);
v___x_1832_ = lean_nat_dec_eq(v___x_1831_, v___x_1766_);
if (v___x_1832_ == 0)
{
lean_object* v___x_1833_; uint8_t v___x_1834_; 
v___x_1833_ = lean_array_get_size(v_res_1806_);
v___x_1834_ = lean_nat_dec_eq(v___x_1833_, v___x_1766_);
if (v___x_1834_ == 0)
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1838_; 
v___x_1835_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot(v_res_1775_);
v___x_1836_ = lean_alloc_ctor(2, 5, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1827_);
lean_ctor_set(v___x_1836_, 1, v_res_1775_);
lean_ctor_set(v___x_1836_, 2, v___x_1835_);
lean_ctor_set(v___x_1836_, 3, v_res_1803_);
lean_ctor_set(v___x_1836_, 4, v_res_1806_);
if (v_isShared_1809_ == 0)
{
lean_ctor_set(v___x_1808_, 1, v___x_1836_);
lean_ctor_set(v___x_1808_, 0, v___x_1830_);
v___x_1838_ = v___x_1808_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v___x_1830_);
lean_ctor_set(v_reuseFailAlloc_1839_, 1, v___x_1836_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
else
{
lean_object* v___x_1840_; uint8_t v___x_1841_; 
lean_dec(v_res_1806_);
v___x_1840_ = lean_array_get_size(v_res_1803_);
v___x_1841_ = lean_nat_dec_eq(v___x_1840_, v___x_1766_);
if (v___x_1841_ == 0)
{
lean_object* v___x_1842_; lean_object* v___x_1844_; 
v___x_1842_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1842_, 0, v___x_1827_);
lean_ctor_set(v___x_1842_, 1, v_res_1775_);
lean_ctor_set(v___x_1842_, 2, v_res_1803_);
if (v_isShared_1809_ == 0)
{
lean_ctor_set(v___x_1808_, 1, v___x_1842_);
lean_ctor_set(v___x_1808_, 0, v___x_1830_);
v___x_1844_ = v___x_1808_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v___x_1830_);
lean_ctor_set(v_reuseFailAlloc_1845_, 1, v___x_1842_);
v___x_1844_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
return v___x_1844_;
}
}
else
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1850_; 
lean_dec(v_res_1803_);
v___x_1846_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot(v_res_1775_);
v___x_1847_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseIdList___closed__0));
v___x_1848_ = lean_alloc_ctor(2, 5, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1827_);
lean_ctor_set(v___x_1848_, 1, v_res_1775_);
lean_ctor_set(v___x_1848_, 2, v___x_1846_);
lean_ctor_set(v___x_1848_, 3, v___x_1847_);
lean_ctor_set(v___x_1848_, 4, v___x_1847_);
if (v_isShared_1809_ == 0)
{
lean_ctor_set(v___x_1808_, 1, v___x_1848_);
lean_ctor_set(v___x_1808_, 0, v___x_1830_);
v___x_1850_ = v___x_1808_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v___x_1830_);
lean_ctor_set(v_reuseFailAlloc_1851_, 1, v___x_1848_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
}
else
{
lean_object* v___x_1852_; uint8_t v___x_1853_; 
lean_dec(v_res_1775_);
v___x_1852_ = lean_array_get_size(v_res_1806_);
lean_dec(v_res_1806_);
v___x_1853_ = lean_nat_dec_eq(v___x_1852_, v___x_1766_);
if (v___x_1853_ == 0)
{
lean_object* v___x_1854_; lean_object* v___x_1856_; 
lean_dec(v___x_1827_);
lean_dec(v_res_1803_);
v___x_1854_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseRat___closed__2));
if (v_isShared_1809_ == 0)
{
lean_ctor_set_tag(v___x_1808_, 1);
lean_ctor_set(v___x_1808_, 1, v___x_1854_);
lean_ctor_set(v___x_1808_, 0, v___x_1830_);
v___x_1856_ = v___x_1808_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v___x_1830_);
lean_ctor_set(v_reuseFailAlloc_1857_, 1, v___x_1854_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
else
{
lean_object* v___x_1858_; lean_object* v___x_1860_; 
v___x_1858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1827_);
lean_ctor_set(v___x_1858_, 1, v_res_1803_);
if (v_isShared_1809_ == 0)
{
lean_ctor_set(v___x_1808_, 1, v___x_1858_);
lean_ctor_set(v___x_1808_, 0, v___x_1830_);
v___x_1860_ = v___x_1808_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v___x_1830_);
lean_ctor_set(v_reuseFailAlloc_1861_, 1, v___x_1858_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
return v___x_1860_;
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
lean_object* v_pos_1867_; lean_object* v_err_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1875_; 
lean_dec(v_res_1803_);
lean_dec(v_res_1775_);
lean_dec(v_res_1762_);
v_pos_1867_ = lean_ctor_get(v___x_1804_, 0);
v_err_1868_ = lean_ctor_get(v___x_1804_, 1);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1804_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1870_ = v___x_1804_;
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_err_1868_);
lean_inc(v_pos_1867_);
lean_dec(v___x_1804_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1873_; 
if (v_isShared_1871_ == 0)
{
v___x_1873_ = v___x_1870_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_pos_1867_);
lean_ctor_set(v_reuseFailAlloc_1874_, 1, v_err_1868_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
}
}
}
}
else
{
lean_object* v_pos_1876_; lean_object* v_err_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1884_; 
lean_dec(v_res_1775_);
lean_dec(v_res_1762_);
v_pos_1876_ = lean_ctor_get(v___x_1801_, 0);
v_err_1877_ = lean_ctor_get(v___x_1801_, 1);
v_isSharedCheck_1884_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1879_ = v___x_1801_;
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_err_1877_);
lean_inc(v_pos_1876_);
lean_dec(v___x_1801_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1882_; 
if (v_isShared_1880_ == 0)
{
v___x_1882_ = v___x_1879_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v_pos_1876_);
lean_ctor_set(v_reuseFailAlloc_1883_, 1, v_err_1877_);
v___x_1882_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
return v___x_1882_;
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
lean_object* v_pos_1890_; lean_object* v_err_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1898_; 
lean_dec(v_res_1762_);
v_pos_1890_ = lean_ctor_get(v___x_1773_, 0);
v_err_1891_ = lean_ctor_get(v___x_1773_, 1);
v_isSharedCheck_1898_ = !lean_is_exclusive(v___x_1773_);
if (v_isSharedCheck_1898_ == 0)
{
v___x_1893_ = v___x_1773_;
v_isShared_1894_ = v_isSharedCheck_1898_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_err_1891_);
lean_inc(v_pos_1890_);
lean_dec(v___x_1773_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1898_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1896_; 
if (v_isShared_1894_ == 0)
{
v___x_1896_ = v___x_1893_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v_pos_1890_);
lean_ctor_set(v_reuseFailAlloc_1897_, 1, v_err_1891_);
v___x_1896_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
return v___x_1896_;
}
}
}
}
}
}
else
{
lean_object* v_pos_1900_; lean_object* v_err_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
v_pos_1900_ = lean_ctor_get(v___x_1760_, 0);
v_err_1901_ = lean_ctor_get(v___x_1760_, 1);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___x_1760_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_err_1901_);
lean_inc(v_pos_1900_);
lean_dec(v___x_1760_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1906_; 
if (v_isShared_1904_ == 0)
{
v___x_1906_ = v___x_1903_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_pos_1900_);
lean_ctor_set(v_reuseFailAlloc_1907_, 1, v_err_1901_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseDelete(lean_object* v_a_1909_){
_start:
{
lean_object* v___x_1910_; 
v___x_1910_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_manyTillNegOrZero___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseRes_spec__0(v_a_1909_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v_pos_1911_; lean_object* v_res_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1946_; 
v_pos_1911_ = lean_ctor_get(v___x_1910_, 0);
v_res_1912_ = lean_ctor_get(v___x_1910_, 1);
v_isSharedCheck_1946_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1946_ == 0)
{
v___x_1914_ = v___x_1910_;
v_isShared_1915_ = v_isSharedCheck_1946_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_res_1912_);
lean_inc(v_pos_1911_);
lean_dec(v___x_1910_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1946_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v_array_1916_; lean_object* v_idx_1917_; lean_object* v___x_1918_; uint8_t v___x_1919_; 
v_array_1916_ = lean_ctor_get(v_pos_1911_, 0);
v_idx_1917_ = lean_ctor_get(v_pos_1911_, 1);
v___x_1918_ = lean_byte_array_size(v_array_1916_);
v___x_1919_ = lean_nat_dec_lt(v_idx_1917_, v___x_1918_);
if (v___x_1919_ == 0)
{
lean_object* v___x_1920_; lean_object* v___x_1922_; 
lean_dec(v_res_1912_);
v___x_1920_ = lean_box(0);
if (v_isShared_1915_ == 0)
{
lean_ctor_set_tag(v___x_1914_, 1);
lean_ctor_set(v___x_1914_, 1, v___x_1920_);
v___x_1922_ = v___x_1914_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_pos_1911_);
lean_ctor_set(v_reuseFailAlloc_1923_, 1, v___x_1920_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
else
{
uint8_t v___x_1924_; uint8_t v_got_1925_; uint8_t v___x_1926_; 
v___x_1924_ = 0;
v_got_1925_ = lean_byte_array_fget(v_array_1916_, v_idx_1917_);
v___x_1926_ = lean_uint8_dec_eq(v_got_1925_, v___x_1924_);
if (v___x_1926_ == 0)
{
lean_object* v___x_1927_; lean_object* v___x_1929_; 
lean_dec(v_res_1912_);
v___x_1927_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseZero___closed__1));
if (v_isShared_1915_ == 0)
{
lean_ctor_set_tag(v___x_1914_, 1);
lean_ctor_set(v___x_1914_, 1, v___x_1927_);
v___x_1929_ = v___x_1914_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_pos_1911_);
lean_ctor_set(v_reuseFailAlloc_1930_, 1, v___x_1927_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
else
{
lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1943_; 
lean_inc(v_idx_1917_);
lean_inc_ref(v_array_1916_);
v_isSharedCheck_1943_ = !lean_is_exclusive(v_pos_1911_);
if (v_isSharedCheck_1943_ == 0)
{
lean_object* v_unused_1944_; lean_object* v_unused_1945_; 
v_unused_1944_ = lean_ctor_get(v_pos_1911_, 1);
lean_dec(v_unused_1944_);
v_unused_1945_ = lean_ctor_get(v_pos_1911_, 0);
lean_dec(v_unused_1945_);
v___x_1932_ = v_pos_1911_;
v_isShared_1933_ = v_isSharedCheck_1943_;
goto v_resetjp_1931_;
}
else
{
lean_dec(v_pos_1911_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1943_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1937_; 
v___x_1934_ = lean_unsigned_to_nat(1u);
v___x_1935_ = lean_nat_add(v_idx_1917_, v___x_1934_);
lean_dec(v_idx_1917_);
if (v_isShared_1933_ == 0)
{
lean_ctor_set(v___x_1932_, 1, v___x_1935_);
v___x_1937_ = v___x_1932_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_array_1916_);
lean_ctor_set(v_reuseFailAlloc_1942_, 1, v___x_1935_);
v___x_1937_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
lean_object* v___x_1938_; lean_object* v___x_1940_; 
v___x_1938_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1938_, 0, v_res_1912_);
if (v_isShared_1915_ == 0)
{
lean_ctor_set(v___x_1914_, 1, v___x_1938_);
lean_ctor_set(v___x_1914_, 0, v___x_1937_);
v___x_1940_ = v___x_1914_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v___x_1937_);
lean_ctor_set(v_reuseFailAlloc_1941_, 1, v___x_1938_);
v___x_1940_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
return v___x_1940_;
}
}
}
}
}
}
}
else
{
lean_object* v_pos_1947_; lean_object* v_err_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1955_; 
v_pos_1947_ = lean_ctor_get(v___x_1910_, 0);
v_err_1948_ = lean_ctor_get(v___x_1910_, 1);
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1950_ = v___x_1910_;
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_err_1948_);
lean_inc(v_pos_1947_);
lean_dec(v___x_1910_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1953_; 
if (v_isShared_1951_ == 0)
{
v___x_1953_ = v___x_1950_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_pos_1947_);
lean_ctor_set(v_reuseFailAlloc_1954_, 1, v_err_1948_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction(lean_object* v_a_1957_){
_start:
{
lean_object* v_array_1958_; lean_object* v_idx_1959_; lean_object* v___x_1960_; uint8_t v___x_1961_; 
v_array_1958_ = lean_ctor_get(v_a_1957_, 0);
v_idx_1959_ = lean_ctor_get(v_a_1957_, 1);
v___x_1960_ = lean_byte_array_size(v_array_1958_);
v___x_1961_ = lean_nat_dec_lt(v_idx_1959_, v___x_1960_);
if (v___x_1961_ == 0)
{
lean_object* v___x_1962_; lean_object* v___x_1963_; 
v___x_1962_ = lean_box(0);
v___x_1963_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1963_, 0, v_a_1957_);
lean_ctor_set(v___x_1963_, 1, v___x_1962_);
return v___x_1963_;
}
else
{
lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1985_; 
lean_inc(v_idx_1959_);
lean_inc_ref(v_array_1958_);
v_isSharedCheck_1985_ = !lean_is_exclusive(v_a_1957_);
if (v_isSharedCheck_1985_ == 0)
{
lean_object* v_unused_1986_; lean_object* v_unused_1987_; 
v_unused_1986_ = lean_ctor_get(v_a_1957_, 1);
lean_dec(v_unused_1986_);
v_unused_1987_ = lean_ctor_get(v_a_1957_, 0);
lean_dec(v_unused_1987_);
v___x_1965_ = v_a_1957_;
v_isShared_1966_ = v_isSharedCheck_1985_;
goto v_resetjp_1964_;
}
else
{
lean_dec(v_a_1957_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1985_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
uint8_t v_c_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v_it_x27_1971_; 
v_c_1967_ = lean_byte_array_fget(v_array_1958_, v_idx_1959_);
v___x_1968_ = lean_unsigned_to_nat(1u);
v___x_1969_ = lean_nat_add(v_idx_1959_, v___x_1968_);
lean_dec(v_idx_1959_);
if (v_isShared_1966_ == 0)
{
lean_ctor_set(v___x_1965_, 1, v___x_1969_);
v_it_x27_1971_ = v___x_1965_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_array_1958_);
lean_ctor_set(v_reuseFailAlloc_1984_, 1, v___x_1969_);
v_it_x27_1971_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
uint8_t v___x_1972_; uint8_t v___x_1973_; 
v___x_1972_ = 97;
v___x_1973_ = lean_uint8_dec_eq(v_c_1967_, v___x_1972_);
if (v___x_1973_ == 0)
{
uint8_t v___x_1974_; uint8_t v___x_1975_; 
v___x_1974_ = 100;
v___x_1975_ = lean_uint8_dec_eq(v_c_1967_, v___x_1974_);
if (v___x_1975_ == 0)
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1976_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction___closed__0));
v___x_1977_ = lean_uint8_to_nat(v_c_1967_);
v___x_1978_ = l_Nat_reprFast(v___x_1977_);
v___x_1979_ = lean_string_append(v___x_1976_, v___x_1978_);
lean_dec_ref(v___x_1978_);
v___x_1980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1979_);
v___x_1981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1981_, 0, v_it_x27_1971_);
lean_ctor_set(v___x_1981_, 1, v___x_1980_);
return v___x_1981_;
}
else
{
lean_object* v___x_1982_; 
v___x_1982_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseDelete(v_it_x27_1971_);
return v___x_1982_;
}
}
else
{
lean_object* v___x_1983_; 
v___x_1983_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction_parseAdd(v_it_x27_1971_);
return v___x_1983_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions_spec__0(lean_object* v_acc_1988_, lean_object* v_a_1989_){
_start:
{
lean_object* v___x_1990_; 
lean_inc_ref(v_a_1989_);
v___x_1990_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseAction(v_a_1989_);
if (lean_obj_tag(v___x_1990_) == 0)
{
lean_object* v_pos_1991_; lean_object* v_res_1992_; lean_object* v___x_1993_; 
lean_dec_ref(v_a_1989_);
v_pos_1991_ = lean_ctor_get(v___x_1990_, 0);
lean_inc(v_pos_1991_);
v_res_1992_ = lean_ctor_get(v___x_1990_, 1);
lean_inc(v_res_1992_);
lean_dec_ref_known(v___x_1990_, 2);
v___x_1993_ = lean_array_push(v_acc_1988_, v_res_1992_);
v_acc_1988_ = v___x_1993_;
v_a_1989_ = v_pos_1991_;
goto _start;
}
else
{
lean_object* v_pos_1995_; lean_object* v_err_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2009_; 
v_pos_1995_ = lean_ctor_get(v___x_1990_, 0);
v_err_1996_ = lean_ctor_get(v___x_1990_, 1);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_1990_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_1998_ = v___x_1990_;
v_isShared_1999_ = v_isSharedCheck_2009_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_err_1996_);
lean_inc(v_pos_1995_);
lean_dec(v___x_1990_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2009_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v_idx_2000_; lean_object* v_idx_2001_; uint8_t v___x_2002_; 
v_idx_2000_ = lean_ctor_get(v_a_1989_, 1);
lean_inc(v_idx_2000_);
lean_dec_ref(v_a_1989_);
v_idx_2001_ = lean_ctor_get(v_pos_1995_, 1);
v___x_2002_ = lean_nat_dec_eq(v_idx_2000_, v_idx_2001_);
lean_dec(v_idx_2000_);
if (v___x_2002_ == 0)
{
lean_object* v___x_2004_; 
lean_dec_ref(v_acc_1988_);
if (v_isShared_1999_ == 0)
{
v___x_2004_ = v___x_1998_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v_pos_1995_);
lean_ctor_set(v_reuseFailAlloc_2005_, 1, v_err_1996_);
v___x_2004_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
return v___x_2004_;
}
}
else
{
lean_object* v___x_2007_; 
lean_dec(v_err_1996_);
if (v_isShared_1999_ == 0)
{
lean_ctor_set_tag(v___x_1998_, 0);
lean_ctor_set(v___x_1998_, 1, v_acc_1988_);
v___x_2007_ = v___x_1998_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v_pos_1995_);
lean_ctor_set(v_reuseFailAlloc_2008_, 1, v_acc_1988_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions(lean_object* v_a_2013_){
_start:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2014_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions___closed__0));
v___x_2015_ = l_Std_Internal_Parsec_manyCore___at___00Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions_spec__0(v___x_2014_, v_a_2013_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_pos_2016_; lean_object* v_array_2017_; lean_object* v_idx_2018_; lean_object* v___x_2019_; uint8_t v___x_2020_; 
v_pos_2016_ = lean_ctor_get(v___x_2015_, 0);
v_array_2017_ = lean_ctor_get(v_pos_2016_, 0);
v_idx_2018_ = lean_ctor_get(v_pos_2016_, 1);
v___x_2019_ = lean_byte_array_size(v_array_2017_);
v___x_2020_ = lean_nat_dec_lt(v_idx_2018_, v___x_2019_);
if (v___x_2020_ == 0)
{
return v___x_2015_;
}
else
{
lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2028_; 
lean_inc(v_pos_2016_);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2028_ == 0)
{
lean_object* v_unused_2029_; lean_object* v_unused_2030_; 
v_unused_2029_ = lean_ctor_get(v___x_2015_, 1);
lean_dec(v_unused_2029_);
v_unused_2030_ = lean_ctor_get(v___x_2015_, 0);
lean_dec(v_unused_2030_);
v___x_2022_ = v___x_2015_;
v_isShared_2023_ = v_isSharedCheck_2028_;
goto v_resetjp_2021_;
}
else
{
lean_dec(v___x_2015_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2028_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2024_; lean_object* v___x_2026_; 
v___x_2024_ = ((lean_object*)(l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions___closed__1));
if (v_isShared_2023_ == 0)
{
lean_ctor_set_tag(v___x_2022_, 1);
lean_ctor_set(v___x_2022_, 1, v___x_2024_);
v___x_2026_ = v___x_2022_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_pos_2016_);
lean_ctor_set(v_reuseFailAlloc_2027_, 1, v___x_2024_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
}
else
{
return v___x_2015_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_parseActions(lean_object* v_a_2031_){
_start:
{
lean_object* v_array_2032_; lean_object* v_idx_2033_; lean_object* v___x_2034_; uint8_t v___x_2035_; 
v_array_2032_ = lean_ctor_get(v_a_2031_, 0);
v_idx_2033_ = lean_ctor_get(v_a_2031_, 1);
v___x_2034_ = lean_byte_array_size(v_array_2032_);
v___x_2035_ = lean_nat_dec_lt(v_idx_2033_, v___x_2034_);
if (v___x_2035_ == 0)
{
lean_object* v___x_2036_; lean_object* v___x_2037_; 
v___x_2036_ = lean_box(0);
v___x_2037_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2037_, 0, v_a_2031_);
lean_ctor_set(v___x_2037_, 1, v___x_2036_);
return v___x_2037_;
}
else
{
uint8_t v___x_2038_; uint8_t v___x_2039_; uint8_t v___x_2040_; 
v___x_2038_ = lean_byte_array_fget(v_array_2032_, v_idx_2033_);
v___x_2039_ = 97;
v___x_2040_ = lean_uint8_dec_eq(v___x_2038_, v___x_2039_);
if (v___x_2040_ == 0)
{
uint8_t v___x_2041_; uint8_t v___x_2042_; 
v___x_2041_ = 100;
v___x_2042_ = lean_uint8_dec_eq(v___x_2038_, v___x_2041_);
if (v___x_2042_ == 0)
{
lean_object* v___x_2043_; 
v___x_2043_ = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseActions(v_a_2031_);
return v___x_2043_;
}
else
{
lean_object* v___x_2044_; 
v___x_2044_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions(v_a_2031_);
return v___x_2044_;
}
}
else
{
lean_object* v___x_2045_; 
v___x_2045_ = l_Std_Tactic_BVDecide_LRAT_Parser_Binary_parseActions(v_a_2031_);
return v___x_2045_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_loadLRATProof(lean_object* v_path_2046_){
_start:
{
lean_object* v___x_2048_; 
v___x_2048_ = l_IO_FS_readBinFile(v_path_2046_);
if (lean_obj_tag(v___x_2048_) == 0)
{
lean_object* v_a_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2070_; 
v_a_2049_ = lean_ctor_get(v___x_2048_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2051_ = v___x_2048_;
v_isShared_2052_ = v_isSharedCheck_2070_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_a_2049_);
lean_dec(v___x_2048_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2070_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2053_; lean_object* v___x_2054_; 
v___x_2053_ = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_LRAT_Parser_parseActions), 1, 0);
v___x_2054_ = l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(v___x_2053_, v_a_2049_);
if (lean_obj_tag(v___x_2054_) == 0)
{
lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2065_; 
v_a_2055_ = lean_ctor_get(v___x_2054_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2057_ = v___x_2054_;
v_isShared_2058_ = v_isSharedCheck_2065_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_dec(v___x_2054_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2065_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2060_; 
if (v_isShared_2058_ == 0)
{
lean_ctor_set_tag(v___x_2057_, 18);
v___x_2060_ = v___x_2057_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_a_2055_);
v___x_2060_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
lean_object* v___x_2062_; 
if (v_isShared_2052_ == 0)
{
lean_ctor_set_tag(v___x_2051_, 1);
lean_ctor_set(v___x_2051_, 0, v___x_2060_);
v___x_2062_ = v___x_2051_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v___x_2060_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
return v___x_2062_;
}
}
}
}
else
{
lean_object* v_a_2066_; lean_object* v___x_2068_; 
v_a_2066_ = lean_ctor_get(v___x_2054_, 0);
lean_inc(v_a_2066_);
lean_dec_ref_known(v___x_2054_, 1);
if (v_isShared_2052_ == 0)
{
lean_ctor_set(v___x_2051_, 0, v_a_2066_);
v___x_2068_ = v___x_2051_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_a_2066_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
}
else
{
lean_object* v_a_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2078_; 
v_a_2071_ = lean_ctor_get(v___x_2048_, 0);
v_isSharedCheck_2078_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2078_ == 0)
{
v___x_2073_ = v___x_2048_;
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_a_2071_);
lean_dec(v___x_2048_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v___x_2076_; 
if (v_isShared_2074_ == 0)
{
v___x_2076_ = v___x_2073_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v_a_2071_);
v___x_2076_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
return v___x_2076_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_loadLRATProof___boxed(lean_object* v_path_2079_, lean_object* v_a_2080_){
_start:
{
lean_object* v_res_2081_; 
v_res_2081_ = l_Std_Tactic_BVDecide_LRAT_loadLRATProof(v_path_2079_);
lean_dec_ref(v_path_2079_);
return v_res_2081_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_parseLRATProof(lean_object* v_proof_2082_){
_start:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2083_ = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_LRAT_Parser_parseActions), 1, 0);
v___x_2084_ = l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(v___x_2083_, v_proof_2082_);
return v___x_2084_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0(lean_object* v_as_2086_, size_t v_i_2087_, size_t v_stop_2088_, lean_object* v_b_2089_){
_start:
{
uint8_t v___x_2090_; 
v___x_2090_ = lean_usize_dec_eq(v_i_2087_, v_stop_2088_);
if (v___x_2090_ == 0)
{
lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; size_t v___x_2096_; size_t v___x_2097_; 
v___x_2091_ = lean_array_uget_borrowed(v_as_2086_, v_i_2087_);
lean_inc(v___x_2091_);
v___x_2092_ = l_Nat_reprFast(v___x_2091_);
v___x_2093_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0___closed__0));
v___x_2094_ = lean_string_append(v___x_2092_, v___x_2093_);
v___x_2095_ = lean_string_append(v_b_2089_, v___x_2094_);
lean_dec_ref(v___x_2094_);
v___x_2096_ = ((size_t)1ULL);
v___x_2097_ = lean_usize_add(v_i_2087_, v___x_2096_);
v_i_2087_ = v___x_2097_;
v_b_2089_ = v___x_2095_;
goto _start;
}
else
{
return v_b_2089_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0___boxed(lean_object* v_as_2099_, lean_object* v_i_2100_, lean_object* v_stop_2101_, lean_object* v_b_2102_){
_start:
{
size_t v_i_boxed_2103_; size_t v_stop_boxed_2104_; lean_object* v_res_2105_; 
v_i_boxed_2103_ = lean_unbox_usize(v_i_2100_);
lean_dec(v_i_2100_);
v_stop_boxed_2104_ = lean_unbox_usize(v_stop_2101_);
lean_dec(v_stop_2101_);
v_res_2105_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0(v_as_2099_, v_i_boxed_2103_, v_stop_boxed_2104_, v_b_2102_);
lean_dec_ref(v_as_2099_);
return v_res_2105_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList(lean_object* v_ids_2107_){
_start:
{
lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; uint8_t v___x_2111_; 
v___x_2108_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList___closed__0));
v___x_2109_ = lean_unsigned_to_nat(0u);
v___x_2110_ = lean_array_get_size(v_ids_2107_);
v___x_2111_ = lean_nat_dec_lt(v___x_2109_, v___x_2110_);
if (v___x_2111_ == 0)
{
return v___x_2108_;
}
else
{
size_t v___x_2112_; size_t v___x_2113_; lean_object* v___x_2114_; 
v___x_2112_ = ((size_t)0ULL);
v___x_2113_ = lean_usize_of_nat(v___x_2110_);
v___x_2114_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0(v_ids_2107_, v___x_2112_, v___x_2113_, v___x_2108_);
return v___x_2114_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList___boxed(lean_object* v_ids_2115_){
_start:
{
lean_object* v_res_2116_; 
v_res_2116_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList(v_ids_2115_);
lean_dec_ref(v_ids_2115_);
return v_res_2116_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHint(lean_object* v_hint_2118_){
_start:
{
lean_object* v_fst_2119_; lean_object* v_snd_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; 
v_fst_2119_ = lean_ctor_get(v_hint_2118_, 0);
lean_inc(v_fst_2119_);
v_snd_2120_ = lean_ctor_get(v_hint_2118_, 1);
lean_inc(v_snd_2120_);
lean_dec_ref(v_hint_2118_);
v___x_2121_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHint___closed__0));
v___x_2122_ = l_Nat_reprFast(v_fst_2119_);
v___x_2123_ = lean_string_append(v___x_2121_, v___x_2122_);
lean_dec_ref(v___x_2122_);
v___x_2124_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0___closed__0));
v___x_2125_ = lean_string_append(v___x_2123_, v___x_2124_);
v___x_2126_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList(v_snd_2120_);
lean_dec(v_snd_2120_);
v___x_2127_ = lean_string_append(v___x_2125_, v___x_2126_);
lean_dec_ref(v___x_2126_);
return v___x_2127_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints_spec__0(lean_object* v_as_2128_, size_t v_i_2129_, size_t v_stop_2130_, lean_object* v_b_2131_){
_start:
{
uint8_t v___x_2132_; 
v___x_2132_ = lean_usize_dec_eq(v_i_2129_, v_stop_2130_);
if (v___x_2132_ == 0)
{
lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; size_t v___x_2136_; size_t v___x_2137_; 
v___x_2133_ = lean_array_uget_borrowed(v_as_2128_, v_i_2129_);
lean_inc(v___x_2133_);
v___x_2134_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHint(v___x_2133_);
v___x_2135_ = lean_string_append(v_b_2131_, v___x_2134_);
lean_dec_ref(v___x_2134_);
v___x_2136_ = ((size_t)1ULL);
v___x_2137_ = lean_usize_add(v_i_2129_, v___x_2136_);
v_i_2129_ = v___x_2137_;
v_b_2131_ = v___x_2135_;
goto _start;
}
else
{
return v_b_2131_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints_spec__0___boxed(lean_object* v_as_2139_, lean_object* v_i_2140_, lean_object* v_stop_2141_, lean_object* v_b_2142_){
_start:
{
size_t v_i_boxed_2143_; size_t v_stop_boxed_2144_; lean_object* v_res_2145_; 
v_i_boxed_2143_ = lean_unbox_usize(v_i_2140_);
lean_dec(v_i_2140_);
v_stop_boxed_2144_ = lean_unbox_usize(v_stop_2141_);
lean_dec(v_stop_2141_);
v_res_2145_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints_spec__0(v_as_2139_, v_i_boxed_2143_, v_stop_boxed_2144_, v_b_2142_);
lean_dec_ref(v_as_2139_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints(lean_object* v_hints_2146_){
_start:
{
lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; uint8_t v___x_2150_; 
v___x_2147_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList___closed__0));
v___x_2148_ = lean_unsigned_to_nat(0u);
v___x_2149_ = lean_array_get_size(v_hints_2146_);
v___x_2150_ = lean_nat_dec_lt(v___x_2148_, v___x_2149_);
if (v___x_2150_ == 0)
{
return v___x_2147_;
}
else
{
size_t v___x_2151_; size_t v___x_2152_; lean_object* v___x_2153_; 
v___x_2151_ = ((size_t)0ULL);
v___x_2152_ = lean_usize_of_nat(v___x_2149_);
v___x_2153_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints_spec__0(v_hints_2146_, v___x_2151_, v___x_2152_, v___x_2147_);
return v___x_2153_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints___boxed(lean_object* v_hints_2154_){
_start:
{
lean_object* v_res_2155_; 
v_res_2155_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints(v_hints_2154_);
lean_dec_ref(v_hints_2154_);
return v_res_2155_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause_spec__0(lean_object* v_as_2156_, size_t v_i_2157_, size_t v_stop_2158_, lean_object* v_b_2159_){
_start:
{
uint8_t v___x_2160_; 
v___x_2160_ = lean_usize_dec_eq(v_i_2157_, v_stop_2158_);
if (v___x_2160_ == 0)
{
lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; size_t v___x_2166_; size_t v___x_2167_; 
v___x_2161_ = lean_array_uget_borrowed(v_as_2156_, v_i_2157_);
v___x_2162_ = l_Int_repr(v___x_2161_);
v___x_2163_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0___closed__0));
v___x_2164_ = lean_string_append(v___x_2162_, v___x_2163_);
v___x_2165_ = lean_string_append(v_b_2159_, v___x_2164_);
lean_dec_ref(v___x_2164_);
v___x_2166_ = ((size_t)1ULL);
v___x_2167_ = lean_usize_add(v_i_2157_, v___x_2166_);
v_i_2157_ = v___x_2167_;
v_b_2159_ = v___x_2165_;
goto _start;
}
else
{
return v_b_2159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause_spec__0___boxed(lean_object* v_as_2169_, lean_object* v_i_2170_, lean_object* v_stop_2171_, lean_object* v_b_2172_){
_start:
{
size_t v_i_boxed_2173_; size_t v_stop_boxed_2174_; lean_object* v_res_2175_; 
v_i_boxed_2173_ = lean_unbox_usize(v_i_2170_);
lean_dec(v_i_2170_);
v_stop_boxed_2174_ = lean_unbox_usize(v_stop_2171_);
lean_dec(v_stop_2171_);
v_res_2175_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause_spec__0(v_as_2169_, v_i_boxed_2173_, v_stop_boxed_2174_, v_b_2172_);
lean_dec_ref(v_as_2169_);
return v_res_2175_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause(lean_object* v_clause_2176_){
_start:
{
lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; uint8_t v___x_2180_; 
v___x_2177_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList___closed__0));
v___x_2178_ = lean_unsigned_to_nat(0u);
v___x_2179_ = lean_array_get_size(v_clause_2176_);
v___x_2180_ = lean_nat_dec_lt(v___x_2178_, v___x_2179_);
if (v___x_2180_ == 0)
{
return v___x_2177_;
}
else
{
size_t v___x_2181_; size_t v___x_2182_; lean_object* v___x_2183_; 
v___x_2181_ = ((size_t)0ULL);
v___x_2182_ = lean_usize_of_nat(v___x_2179_);
v___x_2183_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause_spec__0(v_clause_2176_, v___x_2181_, v___x_2182_, v___x_2177_);
return v___x_2183_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause___boxed(lean_object* v_clause_2184_){
_start:
{
lean_object* v_res_2185_; 
v_res_2185_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause(v_clause_2184_);
lean_dec_ref(v_clause_2184_);
return v_res_2185_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize(lean_object* v_a_2190_){
_start:
{
switch(lean_obj_tag(v_a_2190_))
{
case 0:
{
lean_object* v_id_2191_; lean_object* v_rupHints_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; 
v_id_2191_ = lean_ctor_get(v_a_2190_, 0);
lean_inc(v_id_2191_);
v_rupHints_2192_ = lean_ctor_get(v_a_2190_, 1);
lean_inc_ref(v_rupHints_2192_);
lean_dec_ref_known(v_a_2190_, 2);
v___x_2193_ = l_Nat_reprFast(v_id_2191_);
v___x_2194_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__0));
v___x_2195_ = lean_string_append(v___x_2193_, v___x_2194_);
v___x_2196_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList(v_rupHints_2192_);
lean_dec_ref(v_rupHints_2192_);
v___x_2197_ = lean_string_append(v___x_2195_, v___x_2196_);
lean_dec_ref(v___x_2196_);
v___x_2198_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__1));
v___x_2199_ = lean_string_append(v___x_2197_, v___x_2198_);
return v___x_2199_;
}
case 1:
{
lean_object* v_id_2200_; lean_object* v_c_2201_; lean_object* v_rupHints_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
v_id_2200_ = lean_ctor_get(v_a_2190_, 0);
lean_inc(v_id_2200_);
v_c_2201_ = lean_ctor_get(v_a_2190_, 1);
lean_inc(v_c_2201_);
v_rupHints_2202_ = lean_ctor_get(v_a_2190_, 2);
lean_inc_ref(v_rupHints_2202_);
lean_dec_ref_known(v_a_2190_, 3);
v___x_2203_ = l_Nat_reprFast(v_id_2200_);
v___x_2204_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0___closed__0));
v___x_2205_ = lean_string_append(v___x_2203_, v___x_2204_);
v___x_2206_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause(v_c_2201_);
lean_dec(v_c_2201_);
v___x_2207_ = lean_string_append(v___x_2205_, v___x_2206_);
lean_dec_ref(v___x_2206_);
v___x_2208_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__2));
v___x_2209_ = lean_string_append(v___x_2207_, v___x_2208_);
v___x_2210_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList(v_rupHints_2202_);
lean_dec_ref(v_rupHints_2202_);
v___x_2211_ = lean_string_append(v___x_2209_, v___x_2210_);
lean_dec_ref(v___x_2210_);
v___x_2212_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__1));
v___x_2213_ = lean_string_append(v___x_2211_, v___x_2212_);
return v___x_2213_;
}
case 2:
{
lean_object* v_id_2214_; lean_object* v_c_2215_; lean_object* v_rupHints_2216_; lean_object* v_ratHints_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v_id_2214_ = lean_ctor_get(v_a_2190_, 0);
lean_inc(v_id_2214_);
v_c_2215_ = lean_ctor_get(v_a_2190_, 1);
lean_inc(v_c_2215_);
v_rupHints_2216_ = lean_ctor_get(v_a_2190_, 3);
lean_inc_ref(v_rupHints_2216_);
v_ratHints_2217_ = lean_ctor_get(v_a_2190_, 4);
lean_inc_ref(v_ratHints_2217_);
lean_dec_ref_known(v_a_2190_, 5);
v___x_2218_ = l_Nat_reprFast(v_id_2214_);
v___x_2219_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList_spec__0___closed__0));
v___x_2220_ = lean_string_append(v___x_2218_, v___x_2219_);
v___x_2221_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeClause(v_c_2215_);
lean_dec(v_c_2215_);
v___x_2222_ = lean_string_append(v___x_2220_, v___x_2221_);
lean_dec_ref(v___x_2221_);
v___x_2223_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__2));
v___x_2224_ = lean_string_append(v___x_2222_, v___x_2223_);
v___x_2225_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList(v_rupHints_2216_);
lean_dec_ref(v_rupHints_2216_);
v___x_2226_ = lean_string_append(v___x_2224_, v___x_2225_);
lean_dec_ref(v___x_2225_);
v___x_2227_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeRatHints(v_ratHints_2217_);
lean_dec_ref(v_ratHints_2217_);
v___x_2228_ = lean_string_append(v___x_2226_, v___x_2227_);
lean_dec_ref(v___x_2227_);
v___x_2229_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__1));
v___x_2230_ = lean_string_append(v___x_2228_, v___x_2229_);
return v___x_2230_;
}
default: 
{
lean_object* v_ids_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v_ids_2231_ = lean_ctor_get(v_a_2190_, 0);
lean_inc_ref(v_ids_2231_);
lean_dec_ref_known(v_a_2190_, 1);
v___x_2232_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__3));
v___x_2233_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList(v_ids_2231_);
lean_dec_ref(v_ids_2231_);
v___x_2234_ = lean_string_append(v___x_2232_, v___x_2233_);
lean_dec_ref(v___x_2233_);
v___x_2235_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize___closed__1));
v___x_2236_ = lean_string_append(v___x_2234_, v___x_2235_);
return v___x_2236_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Tactic_BVDecide_LRAT_lratProofToString_spec__0(lean_object* v_as_2238_, size_t v_i_2239_, size_t v_stop_2240_, lean_object* v_b_2241_){
_start:
{
uint8_t v___x_2242_; 
v___x_2242_ = lean_usize_dec_eq(v_i_2239_, v_stop_2240_);
if (v___x_2242_ == 0)
{
lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; size_t v___x_2248_; size_t v___x_2249_; 
v___x_2243_ = lean_array_uget_borrowed(v_as_2238_, v_i_2239_);
lean_inc(v___x_2243_);
v___x_2244_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serialize(v___x_2243_);
v___x_2245_ = lean_string_append(v_b_2241_, v___x_2244_);
lean_dec_ref(v___x_2244_);
v___x_2246_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Tactic_BVDecide_LRAT_lratProofToString_spec__0___closed__0));
v___x_2247_ = lean_string_append(v___x_2245_, v___x_2246_);
v___x_2248_ = ((size_t)1ULL);
v___x_2249_ = lean_usize_add(v_i_2239_, v___x_2248_);
v_i_2239_ = v___x_2249_;
v_b_2241_ = v___x_2247_;
goto _start;
}
else
{
return v_b_2241_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Tactic_BVDecide_LRAT_lratProofToString_spec__0___boxed(lean_object* v_as_2251_, lean_object* v_i_2252_, lean_object* v_stop_2253_, lean_object* v_b_2254_){
_start:
{
size_t v_i_boxed_2255_; size_t v_stop_boxed_2256_; lean_object* v_res_2257_; 
v_i_boxed_2255_ = lean_unbox_usize(v_i_2252_);
lean_dec(v_i_2252_);
v_stop_boxed_2256_ = lean_unbox_usize(v_stop_2253_);
lean_dec(v_stop_2253_);
v_res_2257_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Tactic_BVDecide_LRAT_lratProofToString_spec__0(v_as_2251_, v_i_boxed_2255_, v_stop_boxed_2256_, v_b_2254_);
lean_dec_ref(v_as_2251_);
return v_res_2257_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_lratProofToString(lean_object* v_proof_2258_){
_start:
{
lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; uint8_t v___x_2262_; 
v___x_2259_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToString_serializeIdList___closed__0));
v___x_2260_ = lean_unsigned_to_nat(0u);
v___x_2261_ = lean_array_get_size(v_proof_2258_);
v___x_2262_ = lean_nat_dec_lt(v___x_2260_, v___x_2261_);
if (v___x_2262_ == 0)
{
return v___x_2259_;
}
else
{
size_t v___x_2263_; size_t v___x_2264_; lean_object* v___x_2265_; 
v___x_2263_ = ((size_t)0ULL);
v___x_2264_ = lean_usize_of_nat(v___x_2261_);
v___x_2265_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Tactic_BVDecide_LRAT_lratProofToString_spec__0(v_proof_2258_, v___x_2263_, v___x_2264_, v___x_2259_);
return v___x_2265_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_lratProofToString___boxed(lean_object* v_proof_2266_){
_start:
{
lean_object* v_res_2267_; 
v_res_2267_ = l_Std_Tactic_BVDecide_LRAT_lratProofToString(v_proof_2266_);
lean_dec_ref(v_proof_2266_);
return v_res_2267_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_startDelete(lean_object* v_acc_2268_){
_start:
{
uint8_t v___x_2269_; lean_object* v___x_2270_; 
v___x_2269_ = 100;
v___x_2270_ = lean_byte_array_push(v_acc_2268_, v___x_2269_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_variableLengthEncode(lean_object* v_acc_2271_, uint64_t v_lit_2272_){
_start:
{
uint8_t v___y_2274_; uint64_t v___x_2279_; uint8_t v___x_2280_; 
v___x_2279_ = 0ULL;
v___x_2280_ = lean_uint64_dec_eq(v_lit_2272_, v___x_2279_);
if (v___x_2280_ == 0)
{
uint64_t v___x_2281_; uint8_t v___x_2282_; 
v___x_2281_ = 127ULL;
v___x_2282_ = lean_uint64_dec_lt(v___x_2281_, v_lit_2272_);
if (v___x_2282_ == 0)
{
uint8_t v___x_2283_; uint8_t v___x_2284_; uint8_t v___x_2285_; 
v___x_2283_ = lean_uint64_to_uint8(v_lit_2272_);
v___x_2284_ = 127;
v___x_2285_ = lean_uint8_land(v___x_2283_, v___x_2284_);
v___y_2274_ = v___x_2285_;
goto v___jp_2273_;
}
else
{
uint8_t v___x_2286_; uint8_t v___x_2287_; uint8_t v___x_2288_; uint8_t v___x_2289_; uint8_t v___x_2290_; 
v___x_2286_ = lean_uint64_to_uint8(v_lit_2272_);
v___x_2287_ = 127;
v___x_2288_ = lean_uint8_land(v___x_2286_, v___x_2287_);
v___x_2289_ = 128;
v___x_2290_ = lean_uint8_lor(v___x_2288_, v___x_2289_);
v___y_2274_ = v___x_2290_;
goto v___jp_2273_;
}
}
else
{
return v_acc_2271_;
}
v___jp_2273_:
{
lean_object* v_acc_2275_; uint64_t v___x_2276_; uint64_t v___x_2277_; 
v_acc_2275_ = lean_byte_array_push(v_acc_2271_, v___y_2274_);
v___x_2276_ = 7ULL;
v___x_2277_ = lean_uint64_shift_right(v_lit_2272_, v___x_2276_);
v_acc_2271_ = v_acc_2275_;
v_lit_2272_ = v___x_2277_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_variableLengthEncode___boxed(lean_object* v_acc_2291_, lean_object* v_lit_2292_){
_start:
{
uint64_t v_lit_boxed_2293_; lean_object* v_res_2294_; 
v_lit_boxed_2293_ = lean_unbox_uint64(v_lit_2292_);
lean_dec_ref(v_lit_2292_);
v_res_2294_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_variableLengthEncode(v_acc_2291_, v_lit_boxed_2293_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt_spec__0(lean_object* v_msg_2295_){
_start:
{
lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2296_ = l_ByteArray_empty;
v___x_2297_ = lean_panic_fn_borrowed(v___x_2296_, v_msg_2295_);
return v___x_2297_;
}
}
static lean_object* _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__0(void){
_start:
{
lean_object* v___x_2298_; 
v___x_2298_ = lean_cstr_to_nat("18446744073709551615");
return v___x_2298_;
}
}
static lean_object* _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__4(void){
_start:
{
lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; 
v___x_2302_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__3));
v___x_2303_ = lean_unsigned_to_nat(4u);
v___x_2304_ = lean_unsigned_to_nat(400u);
v___x_2305_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__2));
v___x_2306_ = ((lean_object*)(l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__1));
v___x_2307_ = l_mkPanicMessageWithDecl(v___x_2306_, v___x_2305_, v___x_2304_, v___x_2303_, v___x_2302_);
return v___x_2307_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(lean_object* v_acc_2308_, lean_object* v_lit_2309_){
_start:
{
lean_object* v___y_2311_; lean_object* v___x_2318_; uint8_t v___x_2319_; 
v___x_2318_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_Parser_getPivot___closed__0);
v___x_2319_ = lean_int_dec_lt(v___x_2318_, v_lit_2309_);
if (v___x_2319_ == 0)
{
lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2320_ = lean_unsigned_to_nat(2u);
v___x_2321_ = lean_nat_abs(v_lit_2309_);
v___x_2322_ = lean_nat_mul(v___x_2320_, v___x_2321_);
lean_dec(v___x_2321_);
v___x_2323_ = lean_unsigned_to_nat(1u);
v___x_2324_ = lean_nat_add(v___x_2322_, v___x_2323_);
lean_dec(v___x_2322_);
v___y_2311_ = v___x_2324_;
goto v___jp_2310_;
}
else
{
lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2325_ = lean_unsigned_to_nat(2u);
v___x_2326_ = lean_nat_abs(v_lit_2309_);
v___x_2327_ = lean_nat_mul(v___x_2325_, v___x_2326_);
lean_dec(v___x_2326_);
v___y_2311_ = v___x_2327_;
goto v___jp_2310_;
}
v___jp_2310_:
{
lean_object* v___x_2312_; uint8_t v___x_2313_; 
v___x_2312_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__0, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__0_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__0);
v___x_2313_ = lean_nat_dec_le(v___y_2311_, v___x_2312_);
if (v___x_2313_ == 0)
{
lean_object* v___x_2314_; lean_object* v___x_2315_; 
lean_dec(v___y_2311_);
lean_dec_ref(v_acc_2308_);
v___x_2314_ = lean_obj_once(&l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__4, &l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__4_once, _init_l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___closed__4);
v___x_2315_ = l_panic___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt_spec__0(v___x_2314_);
return v___x_2315_;
}
else
{
uint64_t v_mapped_2316_; lean_object* v___x_2317_; 
v_mapped_2316_ = lean_uint64_of_nat(v___y_2311_);
lean_dec(v___y_2311_);
v___x_2317_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_variableLengthEncode(v_acc_2308_, v_mapped_2316_);
return v___x_2317_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt___boxed(lean_object* v_acc_2328_, lean_object* v_lit_2329_){
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_acc_2328_, v_lit_2329_);
lean_dec(v_lit_2329_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_zeroByte(lean_object* v_acc_2331_){
_start:
{
uint8_t v___x_2332_; lean_object* v___x_2333_; 
v___x_2332_ = 0;
v___x_2333_ = lean_byte_array_push(v_acc_2331_, v___x_2332_);
return v___x_2333_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addNat(lean_object* v_acc_2334_, lean_object* v_n_2335_){
_start:
{
lean_object* v___x_2336_; lean_object* v___x_2337_; 
v___x_2336_ = lean_nat_to_int(v_n_2335_);
v___x_2337_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_acc_2334_, v___x_2336_);
lean_dec(v___x_2336_);
return v___x_2337_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_startAdd(lean_object* v_acc_2338_){
_start:
{
uint8_t v___x_2339_; lean_object* v___x_2340_; 
v___x_2339_ = 97;
v___x_2340_ = lean_byte_array_push(v_acc_2338_, v___x_2339_);
return v___x_2340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0_spec__0(lean_object* v_as_2341_, size_t v_i_2342_, size_t v_stop_2343_, lean_object* v_b_2344_){
_start:
{
uint8_t v___x_2345_; 
v___x_2345_ = lean_usize_dec_eq(v_i_2342_, v_stop_2343_);
if (v___x_2345_ == 0)
{
lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; size_t v___x_2349_; size_t v___x_2350_; 
v___x_2346_ = lean_array_uget_borrowed(v_as_2341_, v_i_2342_);
lean_inc(v___x_2346_);
v___x_2347_ = lean_nat_to_int(v___x_2346_);
v___x_2348_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_b_2344_, v___x_2347_);
lean_dec(v___x_2347_);
v___x_2349_ = ((size_t)1ULL);
v___x_2350_ = lean_usize_add(v_i_2342_, v___x_2349_);
v_i_2342_ = v___x_2350_;
v_b_2344_ = v___x_2348_;
goto _start;
}
else
{
return v_b_2344_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0_spec__0___boxed(lean_object* v_as_2352_, lean_object* v_i_2353_, lean_object* v_stop_2354_, lean_object* v_b_2355_){
_start:
{
size_t v_i_boxed_2356_; size_t v_stop_boxed_2357_; lean_object* v_res_2358_; 
v_i_boxed_2356_ = lean_unbox_usize(v_i_2353_);
lean_dec(v_i_2353_);
v_stop_boxed_2357_ = lean_unbox_usize(v_stop_2354_);
lean_dec(v_stop_2354_);
v_res_2358_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0_spec__0(v_as_2352_, v_i_boxed_2356_, v_stop_boxed_2357_, v_b_2355_);
lean_dec_ref(v_as_2352_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(lean_object* v_as_2359_, size_t v_i_2360_, size_t v_stop_2361_, lean_object* v_b_2362_){
_start:
{
uint8_t v___x_2363_; 
v___x_2363_ = lean_usize_dec_eq(v_i_2360_, v_stop_2361_);
if (v___x_2363_ == 0)
{
lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; size_t v___x_2367_; size_t v___x_2368_; lean_object* v___x_2369_; 
v___x_2364_ = lean_array_uget_borrowed(v_as_2359_, v_i_2360_);
lean_inc(v___x_2364_);
v___x_2365_ = lean_nat_to_int(v___x_2364_);
v___x_2366_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_b_2362_, v___x_2365_);
lean_dec(v___x_2365_);
v___x_2367_ = ((size_t)1ULL);
v___x_2368_ = lean_usize_add(v_i_2360_, v___x_2367_);
v___x_2369_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0_spec__0(v_as_2359_, v___x_2368_, v_stop_2361_, v___x_2366_);
return v___x_2369_;
}
else
{
return v_b_2362_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0___boxed(lean_object* v_as_2370_, lean_object* v_i_2371_, lean_object* v_stop_2372_, lean_object* v_b_2373_){
_start:
{
size_t v_i_boxed_2374_; size_t v_stop_boxed_2375_; lean_object* v_res_2376_; 
v_i_boxed_2374_ = lean_unbox_usize(v_i_2371_);
lean_dec(v_i_2371_);
v_stop_boxed_2375_ = lean_unbox_usize(v_stop_2372_);
lean_dec(v_stop_2372_);
v_res_2376_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(v_as_2370_, v_i_boxed_2374_, v_stop_boxed_2375_, v_b_2373_);
lean_dec_ref(v_as_2370_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2_spec__3(lean_object* v_as_2377_, size_t v_i_2378_, size_t v_stop_2379_, lean_object* v_b_2380_){
_start:
{
lean_object* v___y_2382_; uint8_t v___x_2386_; 
v___x_2386_ = lean_usize_dec_eq(v_i_2378_, v_stop_2379_);
if (v___x_2386_ == 0)
{
lean_object* v___x_2387_; lean_object* v_fst_2388_; lean_object* v_snd_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v_acc_2393_; lean_object* v___x_2394_; uint8_t v___x_2395_; 
v___x_2387_ = lean_array_uget_borrowed(v_as_2377_, v_i_2378_);
v_fst_2388_ = lean_ctor_get(v___x_2387_, 0);
v_snd_2389_ = lean_ctor_get(v___x_2387_, 1);
v___x_2390_ = lean_unsigned_to_nat(0u);
lean_inc(v_fst_2388_);
v___x_2391_ = lean_nat_to_int(v_fst_2388_);
v___x_2392_ = lean_int_neg(v___x_2391_);
lean_dec(v___x_2391_);
v_acc_2393_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_b_2380_, v___x_2392_);
lean_dec(v___x_2392_);
v___x_2394_ = lean_array_get_size(v_snd_2389_);
v___x_2395_ = lean_nat_dec_lt(v___x_2390_, v___x_2394_);
if (v___x_2395_ == 0)
{
v___y_2382_ = v_acc_2393_;
goto v___jp_2381_;
}
else
{
size_t v___x_2396_; size_t v___x_2397_; lean_object* v___x_2398_; 
v___x_2396_ = ((size_t)0ULL);
v___x_2397_ = lean_usize_of_nat(v___x_2394_);
v___x_2398_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(v_snd_2389_, v___x_2396_, v___x_2397_, v_acc_2393_);
v___y_2382_ = v___x_2398_;
goto v___jp_2381_;
}
}
else
{
return v_b_2380_;
}
v___jp_2381_:
{
size_t v___x_2383_; size_t v___x_2384_; 
v___x_2383_ = ((size_t)1ULL);
v___x_2384_ = lean_usize_add(v_i_2378_, v___x_2383_);
v_i_2378_ = v___x_2384_;
v_b_2380_ = v___y_2382_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2_spec__3___boxed(lean_object* v_as_2399_, lean_object* v_i_2400_, lean_object* v_stop_2401_, lean_object* v_b_2402_){
_start:
{
size_t v_i_boxed_2403_; size_t v_stop_boxed_2404_; lean_object* v_res_2405_; 
v_i_boxed_2403_ = lean_unbox_usize(v_i_2400_);
lean_dec(v_i_2400_);
v_stop_boxed_2404_ = lean_unbox_usize(v_stop_2401_);
lean_dec(v_stop_2401_);
v_res_2405_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2_spec__3(v_as_2399_, v_i_boxed_2403_, v_stop_boxed_2404_, v_b_2402_);
lean_dec_ref(v_as_2399_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2(lean_object* v_as_2406_, size_t v_i_2407_, size_t v_stop_2408_, lean_object* v_b_2409_){
_start:
{
lean_object* v___y_2411_; uint8_t v___x_2415_; 
v___x_2415_ = lean_usize_dec_eq(v_i_2407_, v_stop_2408_);
if (v___x_2415_ == 0)
{
lean_object* v___x_2416_; lean_object* v_fst_2417_; lean_object* v_snd_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v_acc_2422_; lean_object* v___x_2423_; uint8_t v___x_2424_; 
v___x_2416_ = lean_array_uget_borrowed(v_as_2406_, v_i_2407_);
v_fst_2417_ = lean_ctor_get(v___x_2416_, 0);
v_snd_2418_ = lean_ctor_get(v___x_2416_, 1);
v___x_2419_ = lean_unsigned_to_nat(0u);
lean_inc(v_fst_2417_);
v___x_2420_ = lean_nat_to_int(v_fst_2417_);
v___x_2421_ = lean_int_neg(v___x_2420_);
lean_dec(v___x_2420_);
v_acc_2422_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_b_2409_, v___x_2421_);
lean_dec(v___x_2421_);
v___x_2423_ = lean_array_get_size(v_snd_2418_);
v___x_2424_ = lean_nat_dec_lt(v___x_2419_, v___x_2423_);
if (v___x_2424_ == 0)
{
v___y_2411_ = v_acc_2422_;
goto v___jp_2410_;
}
else
{
size_t v___x_2425_; size_t v___x_2426_; lean_object* v___x_2427_; 
v___x_2425_ = ((size_t)0ULL);
v___x_2426_ = lean_usize_of_nat(v___x_2423_);
v___x_2427_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(v_snd_2418_, v___x_2425_, v___x_2426_, v_acc_2422_);
v___y_2411_ = v___x_2427_;
goto v___jp_2410_;
}
}
else
{
return v_b_2409_;
}
v___jp_2410_:
{
size_t v___x_2412_; size_t v___x_2413_; lean_object* v___x_2414_; 
v___x_2412_ = ((size_t)1ULL);
v___x_2413_ = lean_usize_add(v_i_2407_, v___x_2412_);
v___x_2414_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2_spec__3(v_as_2406_, v___x_2413_, v_stop_2408_, v___y_2411_);
return v___x_2414_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2___boxed(lean_object* v_as_2428_, lean_object* v_i_2429_, lean_object* v_stop_2430_, lean_object* v_b_2431_){
_start:
{
size_t v_i_boxed_2432_; size_t v_stop_boxed_2433_; lean_object* v_res_2434_; 
v_i_boxed_2432_ = lean_unbox_usize(v_i_2429_);
lean_dec(v_i_2429_);
v_stop_boxed_2433_ = lean_unbox_usize(v_stop_2430_);
lean_dec(v_stop_2430_);
v_res_2434_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2(v_as_2428_, v_i_boxed_2432_, v_stop_boxed_2433_, v_b_2431_);
lean_dec_ref(v_as_2428_);
return v_res_2434_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__1(lean_object* v_as_2435_, size_t v_i_2436_, size_t v_stop_2437_, lean_object* v_b_2438_){
_start:
{
uint8_t v___x_2439_; 
v___x_2439_ = lean_usize_dec_eq(v_i_2436_, v_stop_2437_);
if (v___x_2439_ == 0)
{
lean_object* v___x_2440_; lean_object* v___x_2441_; size_t v___x_2442_; size_t v___x_2443_; 
v___x_2440_ = lean_array_uget_borrowed(v_as_2435_, v_i_2436_);
v___x_2441_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_b_2438_, v___x_2440_);
v___x_2442_ = ((size_t)1ULL);
v___x_2443_ = lean_usize_add(v_i_2436_, v___x_2442_);
v_i_2436_ = v___x_2443_;
v_b_2438_ = v___x_2441_;
goto _start;
}
else
{
return v_b_2438_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__1___boxed(lean_object* v_as_2445_, lean_object* v_i_2446_, lean_object* v_stop_2447_, lean_object* v_b_2448_){
_start:
{
size_t v_i_boxed_2449_; size_t v_stop_boxed_2450_; lean_object* v_res_2451_; 
v_i_boxed_2449_ = lean_unbox_usize(v_i_2446_);
lean_dec(v_i_2446_);
v_stop_boxed_2450_ = lean_unbox_usize(v_stop_2447_);
lean_dec(v_stop_2447_);
v_res_2451_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__1(v_as_2445_, v_i_boxed_2449_, v_stop_boxed_2450_, v_b_2448_);
lean_dec_ref(v_as_2445_);
return v_res_2451_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go(lean_object* v_proof_2452_, lean_object* v_idx_2453_, lean_object* v_acc_2454_){
_start:
{
lean_object* v___y_2456_; lean_object* v___y_2461_; lean_object* v___y_2465_; lean_object* v___y_2469_; lean_object* v___y_2473_; lean_object* v___x_2476_; uint8_t v___x_2477_; 
v___x_2476_ = lean_array_get_size(v_proof_2452_);
v___x_2477_ = lean_nat_dec_lt(v_idx_2453_, v___x_2476_);
if (v___x_2477_ == 0)
{
lean_dec(v_idx_2453_);
return v_acc_2454_;
}
else
{
lean_object* v___x_2478_; 
v___x_2478_ = lean_array_fget_borrowed(v_proof_2452_, v_idx_2453_);
switch(lean_obj_tag(v___x_2478_))
{
case 0:
{
lean_object* v_id_2479_; lean_object* v_rupHints_2480_; uint8_t v___x_2481_; lean_object* v_acc_2482_; lean_object* v___x_2483_; lean_object* v_acc_2484_; uint8_t v___x_2485_; lean_object* v_acc_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; uint8_t v___x_2489_; 
v_id_2479_ = lean_ctor_get(v___x_2478_, 0);
v_rupHints_2480_ = lean_ctor_get(v___x_2478_, 1);
v___x_2481_ = 97;
v_acc_2482_ = lean_byte_array_push(v_acc_2454_, v___x_2481_);
lean_inc(v_id_2479_);
v___x_2483_ = lean_nat_to_int(v_id_2479_);
v_acc_2484_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_acc_2482_, v___x_2483_);
lean_dec(v___x_2483_);
v___x_2485_ = 0;
v_acc_2486_ = lean_byte_array_push(v_acc_2484_, v___x_2485_);
v___x_2487_ = lean_unsigned_to_nat(0u);
v___x_2488_ = lean_array_get_size(v_rupHints_2480_);
v___x_2489_ = lean_nat_dec_lt(v___x_2487_, v___x_2488_);
if (v___x_2489_ == 0)
{
v___y_2465_ = v_acc_2486_;
goto v___jp_2464_;
}
else
{
size_t v___x_2490_; size_t v___x_2491_; lean_object* v___x_2492_; 
v___x_2490_ = ((size_t)0ULL);
v___x_2491_ = lean_usize_of_nat(v___x_2488_);
v___x_2492_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(v_rupHints_2480_, v___x_2490_, v___x_2491_, v_acc_2486_);
v___y_2465_ = v___x_2492_;
goto v___jp_2464_;
}
}
case 1:
{
lean_object* v_id_2493_; lean_object* v_c_2494_; lean_object* v_rupHints_2495_; uint8_t v___x_2496_; lean_object* v_acc_2497_; lean_object* v___x_2498_; lean_object* v_acc_2499_; lean_object* v___x_2500_; lean_object* v___y_2502_; lean_object* v___x_2510_; uint8_t v___x_2511_; 
v_id_2493_ = lean_ctor_get(v___x_2478_, 0);
v_c_2494_ = lean_ctor_get(v___x_2478_, 1);
v_rupHints_2495_ = lean_ctor_get(v___x_2478_, 2);
v___x_2496_ = 97;
v_acc_2497_ = lean_byte_array_push(v_acc_2454_, v___x_2496_);
lean_inc(v_id_2493_);
v___x_2498_ = lean_nat_to_int(v_id_2493_);
v_acc_2499_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_acc_2497_, v___x_2498_);
lean_dec(v___x_2498_);
v___x_2500_ = lean_unsigned_to_nat(0u);
v___x_2510_ = lean_array_get_size(v_c_2494_);
v___x_2511_ = lean_nat_dec_lt(v___x_2500_, v___x_2510_);
if (v___x_2511_ == 0)
{
v___y_2502_ = v_acc_2499_;
goto v___jp_2501_;
}
else
{
size_t v___x_2512_; size_t v___x_2513_; lean_object* v___x_2514_; 
v___x_2512_ = ((size_t)0ULL);
v___x_2513_ = lean_usize_of_nat(v___x_2510_);
v___x_2514_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__1(v_c_2494_, v___x_2512_, v___x_2513_, v_acc_2499_);
v___y_2502_ = v___x_2514_;
goto v___jp_2501_;
}
v___jp_2501_:
{
uint8_t v___x_2503_; lean_object* v_acc_2504_; lean_object* v___x_2505_; uint8_t v___x_2506_; 
v___x_2503_ = 0;
v_acc_2504_ = lean_byte_array_push(v___y_2502_, v___x_2503_);
v___x_2505_ = lean_array_get_size(v_rupHints_2495_);
v___x_2506_ = lean_nat_dec_lt(v___x_2500_, v___x_2505_);
if (v___x_2506_ == 0)
{
v___y_2469_ = v_acc_2504_;
goto v___jp_2468_;
}
else
{
size_t v___x_2507_; size_t v___x_2508_; lean_object* v___x_2509_; 
v___x_2507_ = ((size_t)0ULL);
v___x_2508_ = lean_usize_of_nat(v___x_2505_);
v___x_2509_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(v_rupHints_2495_, v___x_2507_, v___x_2508_, v_acc_2504_);
v___y_2469_ = v___x_2509_;
goto v___jp_2468_;
}
}
}
case 2:
{
lean_object* v_id_2515_; lean_object* v_c_2516_; lean_object* v_rupHints_2517_; lean_object* v_ratHints_2518_; uint8_t v___x_2519_; lean_object* v_acc_2520_; lean_object* v___x_2521_; lean_object* v_acc_2522_; lean_object* v___x_2523_; lean_object* v___y_2525_; lean_object* v___y_2532_; lean_object* v___x_2540_; uint8_t v___x_2541_; 
v_id_2515_ = lean_ctor_get(v___x_2478_, 0);
v_c_2516_ = lean_ctor_get(v___x_2478_, 1);
v_rupHints_2517_ = lean_ctor_get(v___x_2478_, 3);
v_ratHints_2518_ = lean_ctor_get(v___x_2478_, 4);
v___x_2519_ = 97;
v_acc_2520_ = lean_byte_array_push(v_acc_2454_, v___x_2519_);
lean_inc(v_id_2515_);
v___x_2521_ = lean_nat_to_int(v_id_2515_);
v_acc_2522_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_addInt(v_acc_2520_, v___x_2521_);
lean_dec(v___x_2521_);
v___x_2523_ = lean_unsigned_to_nat(0u);
v___x_2540_ = lean_array_get_size(v_c_2516_);
v___x_2541_ = lean_nat_dec_lt(v___x_2523_, v___x_2540_);
if (v___x_2541_ == 0)
{
v___y_2532_ = v_acc_2522_;
goto v___jp_2531_;
}
else
{
size_t v___x_2542_; size_t v___x_2543_; lean_object* v___x_2544_; 
v___x_2542_ = ((size_t)0ULL);
v___x_2543_ = lean_usize_of_nat(v___x_2540_);
v___x_2544_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__1(v_c_2516_, v___x_2542_, v___x_2543_, v_acc_2522_);
v___y_2532_ = v___x_2544_;
goto v___jp_2531_;
}
v___jp_2524_:
{
lean_object* v___x_2526_; uint8_t v___x_2527_; 
v___x_2526_ = lean_array_get_size(v_ratHints_2518_);
v___x_2527_ = lean_nat_dec_lt(v___x_2523_, v___x_2526_);
if (v___x_2527_ == 0)
{
v___y_2461_ = v___y_2525_;
goto v___jp_2460_;
}
else
{
size_t v___x_2528_; size_t v___x_2529_; lean_object* v___x_2530_; 
v___x_2528_ = ((size_t)0ULL);
v___x_2529_ = lean_usize_of_nat(v___x_2526_);
v___x_2530_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__2(v_ratHints_2518_, v___x_2528_, v___x_2529_, v___y_2525_);
v___y_2461_ = v___x_2530_;
goto v___jp_2460_;
}
}
v___jp_2531_:
{
uint8_t v___x_2533_; lean_object* v_acc_2534_; lean_object* v___x_2535_; uint8_t v___x_2536_; 
v___x_2533_ = 0;
v_acc_2534_ = lean_byte_array_push(v___y_2532_, v___x_2533_);
v___x_2535_ = lean_array_get_size(v_rupHints_2517_);
v___x_2536_ = lean_nat_dec_lt(v___x_2523_, v___x_2535_);
if (v___x_2536_ == 0)
{
v___y_2525_ = v_acc_2534_;
goto v___jp_2524_;
}
else
{
size_t v___x_2537_; size_t v___x_2538_; lean_object* v___x_2539_; 
v___x_2537_ = ((size_t)0ULL);
v___x_2538_ = lean_usize_of_nat(v___x_2535_);
v___x_2539_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(v_rupHints_2517_, v___x_2537_, v___x_2538_, v_acc_2534_);
v___y_2525_ = v___x_2539_;
goto v___jp_2524_;
}
}
}
default: 
{
lean_object* v_ids_2545_; uint8_t v___x_2546_; lean_object* v_acc_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; uint8_t v___x_2550_; 
v_ids_2545_ = lean_ctor_get(v___x_2478_, 0);
v___x_2546_ = 100;
v_acc_2547_ = lean_byte_array_push(v_acc_2454_, v___x_2546_);
v___x_2548_ = lean_unsigned_to_nat(0u);
v___x_2549_ = lean_array_get_size(v_ids_2545_);
v___x_2550_ = lean_nat_dec_lt(v___x_2548_, v___x_2549_);
if (v___x_2550_ == 0)
{
v___y_2473_ = v_acc_2547_;
goto v___jp_2472_;
}
else
{
size_t v___x_2551_; size_t v___x_2552_; lean_object* v___x_2553_; 
v___x_2551_ = ((size_t)0ULL);
v___x_2552_ = lean_usize_of_nat(v___x_2549_);
v___x_2553_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go_spec__0(v_ids_2545_, v___x_2551_, v___x_2552_, v_acc_2547_);
v___y_2473_ = v___x_2553_;
goto v___jp_2472_;
}
}
}
}
v___jp_2455_:
{
lean_object* v___x_2457_; lean_object* v___x_2458_; 
v___x_2457_ = lean_unsigned_to_nat(1u);
v___x_2458_ = lean_nat_add(v_idx_2453_, v___x_2457_);
lean_dec(v_idx_2453_);
v_idx_2453_ = v___x_2458_;
v_acc_2454_ = v___y_2456_;
goto _start;
}
v___jp_2460_:
{
uint8_t v___x_2462_; lean_object* v_acc_2463_; 
v___x_2462_ = 0;
v_acc_2463_ = lean_byte_array_push(v___y_2461_, v___x_2462_);
v___y_2456_ = v_acc_2463_;
goto v___jp_2455_;
}
v___jp_2464_:
{
uint8_t v___x_2466_; lean_object* v_acc_2467_; 
v___x_2466_ = 0;
v_acc_2467_ = lean_byte_array_push(v___y_2465_, v___x_2466_);
v___y_2456_ = v_acc_2467_;
goto v___jp_2455_;
}
v___jp_2468_:
{
uint8_t v___x_2470_; lean_object* v_acc_2471_; 
v___x_2470_ = 0;
v_acc_2471_ = lean_byte_array_push(v___y_2469_, v___x_2470_);
v___y_2456_ = v_acc_2471_;
goto v___jp_2455_;
}
v___jp_2472_:
{
uint8_t v___x_2474_; lean_object* v_acc_2475_; 
v___x_2474_ = 0;
v_acc_2475_ = lean_byte_array_push(v___y_2473_, v___x_2474_);
v___y_2456_ = v_acc_2475_;
goto v___jp_2455_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go___boxed(lean_object* v_proof_2554_, lean_object* v_idx_2555_, lean_object* v_acc_2556_){
_start:
{
lean_object* v_res_2557_; 
v_res_2557_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go(v_proof_2554_, v_idx_2555_, v_acc_2556_);
lean_dec_ref(v_proof_2554_);
return v_res_2557_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_lratProofToBinary(lean_object* v_proof_2558_){
_start:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2559_ = lean_unsigned_to_nat(0u);
v___x_2560_ = lean_unsigned_to_nat(4u);
v___x_2561_ = lean_array_get_size(v_proof_2558_);
v___x_2562_ = lean_nat_mul(v___x_2560_, v___x_2561_);
v___x_2563_ = lean_mk_empty_byte_array(v___x_2562_);
lean_dec(v___x_2562_);
v___x_2564_ = l___private_Std_Tactic_BVDecide_LRAT_Parser_0__Std_Tactic_BVDecide_LRAT_lratProofToBinary_go(v_proof_2558_, v___x_2559_, v___x_2563_);
return v___x_2564_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_lratProofToBinary___boxed(lean_object* v_proof_2565_){
_start:
{
lean_object* v_res_2566_; 
v_res_2566_ = l_Std_Tactic_BVDecide_LRAT_lratProofToBinary(v_proof_2565_);
lean_dec_ref(v_proof_2565_);
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_dumpLRATProof(lean_object* v_path_2567_, lean_object* v_proof_2568_, uint8_t v_binaryProofs_2569_){
_start:
{
if (v_binaryProofs_2569_ == 0)
{
lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2571_ = l_Std_Tactic_BVDecide_LRAT_lratProofToString(v_proof_2568_);
v___x_2572_ = lean_string_to_utf8(v___x_2571_);
v___x_2573_ = l_IO_FS_writeBinFile(v_path_2567_, v___x_2572_);
lean_dec_ref(v___x_2572_);
return v___x_2573_;
}
else
{
lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2574_ = l_Std_Tactic_BVDecide_LRAT_lratProofToBinary(v_proof_2568_);
v___x_2575_ = l_IO_FS_writeBinFile(v_path_2567_, v___x_2574_);
lean_dec_ref(v___x_2574_);
return v___x_2575_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_LRAT_dumpLRATProof___boxed(lean_object* v_path_2576_, lean_object* v_proof_2577_, lean_object* v_binaryProofs_2578_, lean_object* v_a_2579_){
_start:
{
uint8_t v_binaryProofs_boxed_2580_; lean_object* v_res_2581_; 
v_binaryProofs_boxed_2580_ = lean_unbox(v_binaryProofs_2578_);
v_res_2581_ = l_Std_Tactic_BVDecide_LRAT_dumpLRATProof(v_path_2576_, v_proof_2577_, v_binaryProofs_boxed_2580_);
lean_dec_ref(v_proof_2577_);
lean_dec_ref(v_path_2576_);
return v_res_2581_;
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
