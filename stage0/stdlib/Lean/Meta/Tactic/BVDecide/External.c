// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.External
// Imports: import Std.Tactic.BVDecide.LRAT.Parser public import Lean.CoreM public import Std.Tactic.BVDecide.Syntax public import Lean.Cadical.Basic
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
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_io_process_spawn(lean_object*);
lean_object* l_IO_FS_Handle_readToEnd(lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_io_process_child_try_wait(lean_object*, lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
lean_object* l_IO_sleep(uint32_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_io_process_child_kill(lean_object*, lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
uint8_t l_Lean_Cadical_Solver_configure(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Cadical_Solver_setLongOption(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Cadical_Solver_setOption(lean_object*, lean_object*, uint32_t);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
uint32_t lean_uint8_to_uint32(uint8_t);
uint8_t lean_uint32_to_uint8(uint32_t);
uint8_t lean_uint8_sub(uint8_t, uint8_t);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_skipBytes(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint32_t lean_bool_to_uint32(uint8_t);
uint32_t lean_int32_of_nat(lean_object*);
lean_object* lean_int32_to_int(uint32_t);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_sat_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_sat_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_unsat_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_unsat_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '32'"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "digit expected"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__2_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "id was 0"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__4_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '45'"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__6_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__0(lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__1(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "expected: '118'"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__1_value;
static const lean_array_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " 0"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__4;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\r\n"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '10'"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__7_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines_go(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "s SATISFIABLE"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parse(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_success_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_success_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_timeout_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_timeout_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_killAndWait(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_killAndWait___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 245, .m_capacity = 245, .m_length = 244, .m_data = "The SAT solver timed out while solving the problem.\nConsider increasing the timeout with the `timeout` config option.\nIf solving your problem relies inherently on using associativity or commutativity, consider enabling the `acNf` config option."};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "shrink"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3___boxed__const__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__4;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unsat"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__5_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sat"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__6_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lrat"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "quiet"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__1_value;
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__0_value),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__1_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__2_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "binary"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ilb"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2___boxed__const__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "--"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flagValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flagValue___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flagValue___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flagValue(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flagValue___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 2, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__0_value;
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__1_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "The external prover produced unexpected output, stdout:\n"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__2_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "\nstderr:\n"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__3_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Error "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__4_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " while parsing:\n"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__5_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "s UNSATISFIABLE"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__6_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Failed to execute external prover:\n"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_satQuery(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_satQuery___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 0)
{
lean_object* v_assignment_7_; lean_object* v___x_8_; 
v_assignment_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_assignment_7_);
lean_dec_ref_known(v_t_5_, 1);
v___x_8_ = lean_apply_1(v_k_6_, v_assignment_7_);
return v___x_8_;
}
else
{
return v_k_6_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorElim(lean_object* v_motive_9_, lean_object* v_ctorIdx_10_, lean_object* v_t_11_, lean_object* v_h_12_, lean_object* v_k_13_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorElim___redArg(v_t_11_, v_k_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_17_, v_h_18_, v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_sat_elim___redArg(lean_object* v_t_21_, lean_object* v_sat_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorElim___redArg(v_t_21_, v_sat_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_sat_elim(lean_object* v_motive_24_, lean_object* v_t_25_, lean_object* v_h_26_, lean_object* v_sat_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorElim___redArg(v_t_25_, v_sat_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_unsat_elim___redArg(lean_object* v_t_29_, lean_object* v_unsat_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorElim___redArg(v_t_29_, v_unsat_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SolverResult_unsat_elim(lean_object* v_motive_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_unsat_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_Meta_Tactic_BVDecide_External_SolverResult_ctorElim___redArg(v_t_33_, v_unsat_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit(lean_object* v_a_49_){
_start:
{
lean_object* v_array_50_; lean_object* v_idx_51_; lean_object* v___x_52_; uint8_t v___x_53_; 
v_array_50_ = lean_ctor_get(v_a_49_, 0);
v_idx_51_ = lean_ctor_get(v_a_49_, 1);
v___x_52_ = lean_byte_array_size(v_array_50_);
v___x_53_ = lean_nat_dec_lt(v_idx_51_, v___x_52_);
if (v___x_53_ == 0)
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_box(0);
v___x_55_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_55_, 0, v_a_49_);
lean_ctor_set(v___x_55_, 1, v___x_54_);
return v___x_55_;
}
else
{
uint8_t v___x_56_; uint8_t v_got_57_; uint8_t v___x_58_; 
v___x_56_ = 32;
v_got_57_ = lean_byte_array_fget(v_array_50_, v_idx_51_);
v___x_58_ = lean_uint8_dec_eq(v_got_57_, v___x_56_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__1));
v___x_60_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_60_, 0, v_a_49_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
return v___x_60_;
}
else
{
lean_object* v___x_62_; uint8_t v_isShared_63_; uint8_t v_isSharedCheck_145_; 
lean_inc(v_idx_51_);
lean_inc_ref(v_array_50_);
v_isSharedCheck_145_ = !lean_is_exclusive(v_a_49_);
if (v_isSharedCheck_145_ == 0)
{
lean_object* v_unused_146_; lean_object* v_unused_147_; 
v_unused_146_ = lean_ctor_get(v_a_49_, 1);
lean_dec(v_unused_146_);
v_unused_147_ = lean_ctor_get(v_a_49_, 0);
lean_dec(v_unused_147_);
v___x_62_ = v_a_49_;
v_isShared_63_ = v_isSharedCheck_145_;
goto v_resetjp_61_;
}
else
{
lean_dec(v_a_49_);
v___x_62_ = lean_box(0);
v_isShared_63_ = v_isSharedCheck_145_;
goto v_resetjp_61_;
}
v_resetjp_61_:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_67_; 
v___x_64_ = lean_unsigned_to_nat(1u);
v___x_65_ = lean_nat_add(v_idx_51_, v___x_64_);
lean_dec(v_idx_51_);
lean_inc(v___x_65_);
lean_inc_ref(v_array_50_);
if (v_isShared_63_ == 0)
{
lean_ctor_set(v___x_62_, 1, v___x_65_);
v___x_67_ = v___x_62_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_array_50_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v___x_65_);
v___x_67_ = v_reuseFailAlloc_144_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
uint8_t v___x_71_; 
v___x_71_ = lean_nat_dec_lt(v___x_65_, v___x_52_);
if (v___x_71_ == 0)
{
lean_object* v___x_72_; lean_object* v___x_73_; 
lean_dec(v___x_65_);
lean_dec_ref(v_array_50_);
v___x_72_ = lean_box(0);
v___x_73_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_67_);
lean_ctor_set(v___x_73_, 1, v___x_72_);
return v___x_73_;
}
else
{
uint8_t v___x_74_; uint8_t v___x_75_; uint8_t v___x_76_; 
v___x_74_ = lean_byte_array_fget(v_array_50_, v___x_65_);
v___x_75_ = 45;
v___x_76_ = lean_uint8_dec_eq(v___x_74_, v___x_75_);
if (v___x_76_ == 0)
{
uint8_t v___x_77_; uint8_t v___x_78_; 
v___x_77_ = 48;
v___x_78_ = lean_uint8_dec_le(v___x_77_, v___x_74_);
if (v___x_78_ == 0)
{
lean_dec(v___x_65_);
lean_dec_ref(v_array_50_);
goto v___jp_68_;
}
else
{
uint8_t v___x_79_; uint8_t v___x_80_; 
v___x_79_ = 57;
v___x_80_ = lean_uint8_dec_le(v___x_74_, v___x_79_);
if (v___x_80_ == 0)
{
lean_dec(v___x_65_);
lean_dec_ref(v_array_50_);
goto v___jp_68_;
}
else
{
lean_object* v___x_81_; lean_object* v_it_x27_82_; uint32_t v___x_83_; uint8_t v___x_84_; uint8_t v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v_fst_88_; lean_object* v_snd_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_103_; 
lean_dec_ref(v___x_67_);
v___x_81_ = lean_nat_add(v___x_65_, v___x_64_);
lean_dec(v___x_65_);
v_it_x27_82_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_82_, 0, v_array_50_);
lean_ctor_set(v_it_x27_82_, 1, v___x_81_);
v___x_83_ = lean_uint8_to_uint32(v___x_74_);
v___x_84_ = lean_uint32_to_uint8(v___x_83_);
v___x_85_ = lean_uint8_sub(v___x_84_, v___x_77_);
v___x_86_ = lean_uint8_to_nat(v___x_85_);
v___x_87_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_82_, v___x_86_);
v_fst_88_ = lean_ctor_get(v___x_87_, 0);
v_snd_89_ = lean_ctor_get(v___x_87_, 1);
v_isSharedCheck_103_ = !lean_is_exclusive(v___x_87_);
if (v_isSharedCheck_103_ == 0)
{
v___x_91_ = v___x_87_;
v_isShared_92_ = v_isSharedCheck_103_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_snd_89_);
lean_inc(v_fst_88_);
lean_dec(v___x_87_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_103_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_93_ = lean_unsigned_to_nat(0u);
v___x_94_ = lean_nat_dec_eq(v_fst_88_, v___x_93_);
if (v___x_94_ == 0)
{
lean_object* v___x_95_; lean_object* v___x_97_; 
v___x_95_ = lean_nat_to_int(v_fst_88_);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 1, v___x_95_);
lean_ctor_set(v___x_91_, 0, v_snd_89_);
v___x_97_ = v___x_91_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_snd_89_);
lean_ctor_set(v_reuseFailAlloc_98_, 1, v___x_95_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
else
{
lean_object* v___x_99_; lean_object* v___x_101_; 
lean_dec(v_fst_88_);
v___x_99_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__5));
if (v_isShared_92_ == 0)
{
lean_ctor_set_tag(v___x_91_, 1);
lean_ctor_set(v___x_91_, 1, v___x_99_);
lean_ctor_set(v___x_91_, 0, v_snd_89_);
v___x_101_ = v___x_91_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_snd_89_);
lean_ctor_set(v_reuseFailAlloc_102_, 1, v___x_99_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
}
}
}
else
{
uint8_t v___x_104_; 
v___x_104_ = lean_uint8_dec_eq(v___x_74_, v___x_75_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; lean_object* v___x_106_; 
lean_dec(v___x_65_);
lean_dec_ref(v_array_50_);
v___x_105_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__7));
v___x_106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_67_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
return v___x_106_;
}
else
{
lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_112_; 
lean_dec_ref(v___x_67_);
v___x_107_ = lean_nat_add(v___x_65_, v___x_64_);
lean_dec(v___x_65_);
lean_inc(v___x_107_);
lean_inc_ref(v_array_50_);
v___x_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_108_, 0, v_array_50_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_112_ = lean_nat_dec_lt(v___x_107_, v___x_52_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; lean_object* v___x_114_; 
lean_dec(v___x_107_);
lean_dec_ref(v_array_50_);
v___x_113_ = lean_box(0);
v___x_114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_108_);
lean_ctor_set(v___x_114_, 1, v___x_113_);
return v___x_114_;
}
else
{
uint8_t v_c_115_; uint8_t v___x_116_; uint8_t v___x_117_; 
v_c_115_ = lean_byte_array_fget(v_array_50_, v___x_107_);
v___x_116_ = 48;
v___x_117_ = lean_uint8_dec_le(v___x_116_, v_c_115_);
if (v___x_117_ == 0)
{
lean_dec(v___x_107_);
lean_dec_ref(v_array_50_);
goto v___jp_109_;
}
else
{
uint8_t v___x_118_; uint8_t v___x_119_; 
v___x_118_ = 57;
v___x_119_ = lean_uint8_dec_le(v_c_115_, v___x_118_);
if (v___x_119_ == 0)
{
lean_dec(v___x_107_);
lean_dec_ref(v_array_50_);
goto v___jp_109_;
}
else
{
lean_object* v___x_120_; lean_object* v_it_x27_121_; uint32_t v___x_122_; uint8_t v___x_123_; uint8_t v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v_fst_127_; lean_object* v_snd_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_143_; 
lean_dec_ref_known(v___x_108_, 2);
v___x_120_ = lean_nat_add(v___x_107_, v___x_64_);
lean_dec(v___x_107_);
v_it_x27_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_121_, 0, v_array_50_);
lean_ctor_set(v_it_x27_121_, 1, v___x_120_);
v___x_122_ = lean_uint8_to_uint32(v_c_115_);
v___x_123_ = lean_uint32_to_uint8(v___x_122_);
v___x_124_ = lean_uint8_sub(v___x_123_, v___x_116_);
v___x_125_ = lean_uint8_to_nat(v___x_124_);
v___x_126_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_121_, v___x_125_);
v_fst_127_ = lean_ctor_get(v___x_126_, 0);
v_snd_128_ = lean_ctor_get(v___x_126_, 1);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_143_ == 0)
{
v___x_130_ = v___x_126_;
v_isShared_131_ = v_isSharedCheck_143_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_snd_128_);
lean_inc(v_fst_127_);
lean_dec(v___x_126_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_143_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_132_ = lean_unsigned_to_nat(0u);
v___x_133_ = lean_nat_dec_eq(v_fst_127_, v___x_132_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_137_; 
v___x_134_ = lean_nat_to_int(v_fst_127_);
v___x_135_ = lean_int_neg(v___x_134_);
lean_dec(v___x_134_);
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 1, v___x_135_);
lean_ctor_set(v___x_130_, 0, v_snd_128_);
v___x_137_ = v___x_130_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_snd_128_);
lean_ctor_set(v_reuseFailAlloc_138_, 1, v___x_135_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
else
{
lean_object* v___x_139_; lean_object* v___x_141_; 
lean_dec(v_fst_127_);
v___x_139_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__5));
if (v_isShared_131_ == 0)
{
lean_ctor_set_tag(v___x_130_, 1);
lean_ctor_set(v___x_130_, 1, v___x_139_);
lean_ctor_set(v___x_130_, 0, v_snd_128_);
v___x_141_ = v___x_130_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_snd_128_);
lean_ctor_set(v_reuseFailAlloc_142_, 1, v___x_139_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
}
}
}
v___jp_109_:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__3));
v___x_111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_108_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
return v___x_111_;
}
}
}
}
v___jp_68_:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__3));
v___x_70_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_67_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
return v___x_70_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__0(lean_object* v_a_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_nat_to_int(v_a_148_);
return v___x_149_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2___closed__0(void){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = lean_unsigned_to_nat(0u);
v___x_151_ = lean_nat_to_int(v___x_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2(size_t v_sz_152_, size_t v_i_153_, lean_object* v_bs_154_){
_start:
{
uint8_t v___x_155_; 
v___x_155_ = lean_usize_dec_lt(v_i_153_, v_sz_152_);
if (v___x_155_ == 0)
{
return v_bs_154_;
}
else
{
lean_object* v_v_156_; lean_object* v___x_157_; lean_object* v_bs_x27_158_; lean_object* v___x_159_; uint8_t v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; size_t v___x_164_; size_t v___x_165_; lean_object* v___x_166_; 
v_v_156_ = lean_array_uget(v_bs_154_, v_i_153_);
v___x_157_ = lean_unsigned_to_nat(0u);
v_bs_x27_158_ = lean_array_uset(v_bs_154_, v_i_153_, v___x_157_);
v___x_159_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2___closed__0);
v___x_160_ = lean_int_dec_lt(v___x_159_, v_v_156_);
v___x_161_ = lean_nat_abs(v_v_156_);
lean_dec(v_v_156_);
v___x_162_ = lean_box(v___x_160_);
v___x_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
lean_ctor_set(v___x_163_, 1, v___x_161_);
v___x_164_ = ((size_t)1ULL);
v___x_165_ = lean_usize_add(v_i_153_, v___x_164_);
v___x_166_ = lean_array_uset(v_bs_x27_158_, v_i_153_, v___x_163_);
v_i_153_ = v___x_165_;
v_bs_154_ = v___x_166_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2___boxed(lean_object* v_sz_168_, lean_object* v_i_169_, lean_object* v_bs_170_){
_start:
{
size_t v_sz_boxed_171_; size_t v_i_boxed_172_; lean_object* v_res_173_; 
v_sz_boxed_171_ = lean_unbox_usize(v_sz_168_);
lean_dec(v_sz_168_);
v_i_boxed_172_ = lean_unbox_usize(v_i_169_);
lean_dec(v_i_169_);
v_res_173_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2(v_sz_boxed_171_, v_i_boxed_172_, v_bs_170_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__1(lean_object* v_acc_174_, lean_object* v_a_175_){
_start:
{
lean_object* v_pos_177_; lean_object* v_res_178_; lean_object* v_array_181_; lean_object* v_idx_182_; lean_object* v_pos_184_; lean_object* v_idx_185_; lean_object* v_err_186_; lean_object* v___x_194_; uint8_t v___x_195_; 
v_array_181_ = lean_ctor_get(v_a_175_, 0);
v_idx_182_ = lean_ctor_get(v_a_175_, 1);
lean_inc(v_idx_182_);
v___x_194_ = lean_byte_array_size(v_array_181_);
v___x_195_ = lean_nat_dec_lt(v_idx_182_, v___x_194_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; 
v___x_196_ = lean_box(0);
lean_inc(v_idx_182_);
v_pos_184_ = v_a_175_;
v_idx_185_ = v_idx_182_;
v_err_186_ = v___x_196_;
goto v___jp_183_;
}
else
{
uint8_t v___x_197_; uint8_t v_got_198_; uint8_t v___x_199_; 
v___x_197_ = 32;
v_got_198_ = lean_byte_array_fget(v_array_181_, v_idx_182_);
v___x_199_ = lean_uint8_dec_eq(v_got_198_, v___x_197_);
if (v___x_199_ == 0)
{
lean_object* v___x_200_; 
v___x_200_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__1));
lean_inc(v_idx_182_);
v_pos_184_ = v_a_175_;
v_idx_185_ = v_idx_182_;
v_err_186_ = v___x_200_;
goto v___jp_183_;
}
else
{
lean_object* v___x_201_; lean_object* v___x_202_; uint8_t v___x_203_; 
v___x_201_ = lean_unsigned_to_nat(1u);
v___x_202_ = lean_nat_add(v_idx_182_, v___x_201_);
v___x_203_ = lean_nat_dec_lt(v___x_202_, v___x_194_);
if (v___x_203_ == 0)
{
lean_object* v___x_204_; 
lean_dec(v___x_202_);
v___x_204_ = lean_box(0);
lean_inc(v_idx_182_);
v_pos_184_ = v_a_175_;
v_idx_185_ = v_idx_182_;
v_err_186_ = v___x_204_;
goto v___jp_183_;
}
else
{
uint8_t v___x_205_; uint8_t v___x_206_; uint8_t v___x_207_; 
v___x_205_ = lean_byte_array_fget(v_array_181_, v___x_202_);
v___x_206_ = 45;
v___x_207_ = lean_uint8_dec_eq(v___x_205_, v___x_206_);
if (v___x_207_ == 0)
{
uint8_t v___x_208_; uint8_t v___x_209_; 
v___x_208_ = 48;
v___x_209_ = lean_uint8_dec_le(v___x_208_, v___x_205_);
if (v___x_209_ == 0)
{
lean_dec(v___x_202_);
goto v___jp_192_;
}
else
{
uint8_t v___x_210_; uint8_t v___x_211_; 
v___x_210_ = 57;
v___x_211_ = lean_uint8_dec_le(v___x_205_, v___x_210_);
if (v___x_211_ == 0)
{
lean_dec(v___x_202_);
goto v___jp_192_;
}
else
{
lean_object* v___x_212_; lean_object* v_it_x27_213_; uint32_t v___x_214_; uint8_t v___x_215_; uint8_t v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v_fst_219_; lean_object* v_snd_220_; lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_212_ = lean_nat_add(v___x_202_, v___x_201_);
lean_dec(v___x_202_);
lean_inc_ref(v_array_181_);
v_it_x27_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_213_, 0, v_array_181_);
lean_ctor_set(v_it_x27_213_, 1, v___x_212_);
v___x_214_ = lean_uint8_to_uint32(v___x_205_);
v___x_215_ = lean_uint32_to_uint8(v___x_214_);
v___x_216_ = lean_uint8_sub(v___x_215_, v___x_208_);
v___x_217_ = lean_uint8_to_nat(v___x_216_);
v___x_218_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_213_, v___x_217_);
v_fst_219_ = lean_ctor_get(v___x_218_, 0);
lean_inc(v_fst_219_);
v_snd_220_ = lean_ctor_get(v___x_218_, 1);
lean_inc(v_snd_220_);
lean_dec_ref(v___x_218_);
v___x_221_ = lean_unsigned_to_nat(0u);
v___x_222_ = lean_nat_dec_eq(v_fst_219_, v___x_221_);
if (v___x_222_ == 0)
{
lean_object* v___x_223_; 
lean_dec(v_idx_182_);
lean_dec_ref(v_a_175_);
v___x_223_ = lean_nat_to_int(v_fst_219_);
v_pos_177_ = v_snd_220_;
v_res_178_ = v___x_223_;
goto v___jp_176_;
}
else
{
lean_object* v___x_224_; 
lean_dec(v_snd_220_);
lean_dec(v_fst_219_);
v___x_224_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__5));
lean_inc(v_idx_182_);
v_pos_184_ = v_a_175_;
v_idx_185_ = v_idx_182_;
v_err_186_ = v___x_224_;
goto v___jp_183_;
}
}
}
}
else
{
uint8_t v___x_225_; 
v___x_225_ = lean_uint8_dec_eq(v___x_205_, v___x_206_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; 
lean_dec(v___x_202_);
v___x_226_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__7));
lean_inc(v_idx_182_);
v_pos_184_ = v_a_175_;
v_idx_185_ = v_idx_182_;
v_err_186_ = v___x_226_;
goto v___jp_183_;
}
else
{
lean_object* v___x_227_; uint8_t v___x_228_; 
v___x_227_ = lean_nat_add(v___x_202_, v___x_201_);
lean_dec(v___x_202_);
v___x_228_ = lean_nat_dec_lt(v___x_227_, v___x_194_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; 
lean_dec(v___x_227_);
v___x_229_ = lean_box(0);
lean_inc(v_idx_182_);
v_pos_184_ = v_a_175_;
v_idx_185_ = v_idx_182_;
v_err_186_ = v___x_229_;
goto v___jp_183_;
}
else
{
uint8_t v_c_230_; uint8_t v___x_231_; uint8_t v___x_232_; 
v_c_230_ = lean_byte_array_fget(v_array_181_, v___x_227_);
v___x_231_ = 48;
v___x_232_ = lean_uint8_dec_le(v___x_231_, v_c_230_);
if (v___x_232_ == 0)
{
lean_dec(v___x_227_);
goto v___jp_190_;
}
else
{
uint8_t v___x_233_; uint8_t v___x_234_; 
v___x_233_ = 57;
v___x_234_ = lean_uint8_dec_le(v_c_230_, v___x_233_);
if (v___x_234_ == 0)
{
lean_dec(v___x_227_);
goto v___jp_190_;
}
else
{
lean_object* v___x_235_; lean_object* v_it_x27_236_; uint32_t v___x_237_; uint8_t v___x_238_; uint8_t v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v_fst_242_; lean_object* v_snd_243_; lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_235_ = lean_nat_add(v___x_227_, v___x_201_);
lean_dec(v___x_227_);
lean_inc_ref(v_array_181_);
v_it_x27_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_236_, 0, v_array_181_);
lean_ctor_set(v_it_x27_236_, 1, v___x_235_);
v___x_237_ = lean_uint8_to_uint32(v_c_230_);
v___x_238_ = lean_uint32_to_uint8(v___x_237_);
v___x_239_ = lean_uint8_sub(v___x_238_, v___x_231_);
v___x_240_ = lean_uint8_to_nat(v___x_239_);
v___x_241_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_236_, v___x_240_);
v_fst_242_ = lean_ctor_get(v___x_241_, 0);
lean_inc(v_fst_242_);
v_snd_243_ = lean_ctor_get(v___x_241_, 1);
lean_inc(v_snd_243_);
lean_dec_ref(v___x_241_);
v___x_244_ = lean_unsigned_to_nat(0u);
v___x_245_ = lean_nat_dec_eq(v_fst_242_, v___x_244_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; 
lean_dec(v_idx_182_);
lean_dec_ref(v_a_175_);
v___x_246_ = lean_nat_to_int(v_fst_242_);
v___x_247_ = lean_int_neg(v___x_246_);
lean_dec(v___x_246_);
v_pos_177_ = v_snd_243_;
v_res_178_ = v___x_247_;
goto v___jp_176_;
}
else
{
lean_object* v___x_248_; 
lean_dec(v_snd_243_);
lean_dec(v_fst_242_);
v___x_248_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__5));
lean_inc(v_idx_182_);
v_pos_184_ = v_a_175_;
v_idx_185_ = v_idx_182_;
v_err_186_ = v___x_248_;
goto v___jp_183_;
}
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
lean_object* v___x_179_; 
v___x_179_ = lean_array_push(v_acc_174_, v_res_178_);
v_acc_174_ = v___x_179_;
v_a_175_ = v_pos_177_;
goto _start;
}
v___jp_183_:
{
uint8_t v___x_187_; 
v___x_187_ = lean_nat_dec_eq(v_idx_182_, v_idx_185_);
lean_dec(v_idx_185_);
lean_dec(v_idx_182_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; 
lean_dec_ref(v_acc_174_);
lean_inc(v_err_186_);
v___x_188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_188_, 0, v_pos_184_);
lean_ctor_set(v___x_188_, 1, v_err_186_);
return v___x_188_;
}
else
{
lean_object* v___x_189_; 
v___x_189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_189_, 0, v_pos_184_);
lean_ctor_set(v___x_189_, 1, v_acc_174_);
return v___x_189_;
}
}
v___jp_190_:
{
lean_object* v___x_191_; 
v___x_191_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__3));
lean_inc(v_idx_182_);
v_pos_184_ = v_a_175_;
v_idx_185_ = v_idx_182_;
v_err_186_ = v___x_191_;
goto v___jp_183_;
}
v___jp_192_:
{
lean_object* v___x_193_; 
v___x_193_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__3));
lean_inc(v_idx_182_);
v_pos_184_ = v_a_175_;
v_idx_185_ = v_idx_182_;
v_err_186_ = v___x_193_;
goto v___jp_183_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__4(void){
_start:
{
lean_object* v___x_255_; lean_object* v_utf8_256_; 
v___x_255_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__3));
v_utf8_256_ = lean_string_to_utf8(v___x_255_);
return v_utf8_256_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6(void){
_start:
{
lean_object* v___x_258_; lean_object* v_utf8_259_; 
v___x_258_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__5));
v_utf8_259_ = lean_string_to_utf8(v___x_258_);
return v_utf8_259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment(lean_object* v_a_263_){
_start:
{
lean_object* v_array_264_; lean_object* v_idx_265_; lean_object* v___x_266_; uint8_t v___x_267_; 
v_array_264_ = lean_ctor_get(v_a_263_, 0);
v_idx_265_ = lean_ctor_get(v_a_263_, 1);
v___x_266_ = lean_byte_array_size(v_array_264_);
v___x_267_ = lean_nat_dec_lt(v_idx_265_, v___x_266_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_268_ = lean_box(0);
v___x_269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_269_, 0, v_a_263_);
lean_ctor_set(v___x_269_, 1, v___x_268_);
return v___x_269_;
}
else
{
uint8_t v___x_270_; uint8_t v_got_271_; uint8_t v___x_272_; 
v___x_270_ = 118;
v_got_271_ = lean_byte_array_fget(v_array_264_, v_idx_265_);
v___x_272_ = lean_uint8_dec_eq(v_got_271_, v___x_270_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__1));
v___x_274_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_274_, 0, v_a_263_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
return v___x_274_;
}
else
{
lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_386_; 
lean_inc(v_idx_265_);
lean_inc_ref(v_array_264_);
v_isSharedCheck_386_ = !lean_is_exclusive(v_a_263_);
if (v_isSharedCheck_386_ == 0)
{
lean_object* v_unused_387_; lean_object* v_unused_388_; 
v_unused_387_ = lean_ctor_get(v_a_263_, 1);
lean_dec(v_unused_387_);
v_unused_388_ = lean_ctor_get(v_a_263_, 0);
lean_dec(v_unused_388_);
v___x_276_ = v_a_263_;
v_isShared_277_ = v_isSharedCheck_386_;
goto v_resetjp_275_;
}
else
{
lean_dec(v_a_263_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_386_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_281_; 
v___x_278_ = lean_unsigned_to_nat(1u);
v___x_279_ = lean_nat_add(v_idx_265_, v___x_278_);
lean_dec(v_idx_265_);
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 1, v___x_279_);
v___x_281_ = v___x_276_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v_array_264_);
lean_ctor_set(v_reuseFailAlloc_385_, 1, v___x_279_);
v___x_281_ = v_reuseFailAlloc_385_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__2));
v___x_283_ = l_Std_Internal_Parsec_manyCore___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__1(v___x_282_, v___x_281_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v_pos_284_; lean_object* v_res_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_375_; 
v_pos_284_ = lean_ctor_get(v___x_283_, 0);
v_res_285_ = lean_ctor_get(v___x_283_, 1);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_375_ == 0)
{
v___x_287_ = v___x_283_;
v_isShared_288_ = v_isSharedCheck_375_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_res_285_);
lean_inc(v_pos_284_);
lean_dec(v___x_283_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_375_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
size_t v_sz_289_; size_t v___x_290_; lean_object* v___x_291_; lean_object* v_pos_293_; lean_object* v_utf8_300_; lean_object* v___x_301_; 
v_sz_289_ = lean_array_size(v_res_285_);
v___x_290_ = ((size_t)0ULL);
v___x_291_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2(v_sz_289_, v___x_290_, v_res_285_);
v_utf8_300_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__4, &l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__4_once, _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__4);
lean_inc(v_pos_284_);
v___x_301_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_300_, v_pos_284_);
if (lean_obj_tag(v___x_301_) == 0)
{
lean_object* v_pos_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_311_; 
lean_del_object(v___x_287_);
lean_dec(v_pos_284_);
v_pos_302_ = lean_ctor_get(v___x_301_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_311_ == 0)
{
lean_object* v_unused_312_; 
v_unused_312_ = lean_ctor_get(v___x_301_, 1);
lean_dec(v_unused_312_);
v___x_304_ = v___x_301_;
v_isShared_305_ = v_isSharedCheck_311_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_pos_302_);
lean_dec(v___x_301_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_311_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_309_; 
v___x_306_ = lean_box(v___x_272_);
v___x_307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
lean_ctor_set(v___x_307_, 1, v___x_291_);
if (v_isShared_305_ == 0)
{
lean_ctor_set(v___x_304_, 1, v___x_307_);
v___x_309_ = v___x_304_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v_pos_302_);
lean_ctor_set(v_reuseFailAlloc_310_, 1, v___x_307_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
else
{
lean_object* v_pos_313_; lean_object* v_err_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_374_; 
v_pos_313_ = lean_ctor_get(v___x_301_, 0);
v_err_314_ = lean_ctor_get(v___x_301_, 1);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_374_ == 0)
{
v___x_316_ = v___x_301_;
v_isShared_317_ = v_isSharedCheck_374_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_err_314_);
lean_inc(v_pos_313_);
lean_dec(v___x_301_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_374_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v_idx_318_; lean_object* v_array_319_; lean_object* v_idx_320_; lean_object* v___y_322_; lean_object* v_pos_323_; lean_object* v_idx_324_; uint8_t v___x_347_; 
v_idx_318_ = lean_ctor_get(v_pos_284_, 1);
lean_inc(v_idx_318_);
lean_dec(v_pos_284_);
v_array_319_ = lean_ctor_get(v_pos_313_, 0);
v_idx_320_ = lean_ctor_get(v_pos_313_, 1);
v___x_347_ = lean_nat_dec_eq(v_idx_318_, v_idx_320_);
lean_dec(v_idx_318_);
if (v___x_347_ == 0)
{
lean_object* v___x_349_; 
lean_dec_ref(v___x_291_);
lean_del_object(v___x_287_);
if (v_isShared_317_ == 0)
{
v___x_349_ = v___x_316_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_pos_313_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v_err_314_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
else
{
lean_object* v___x_351_; uint8_t v___x_352_; 
lean_inc(v_idx_320_);
lean_dec(v_err_314_);
v___x_351_ = lean_byte_array_size(v_array_319_);
v___x_352_ = lean_nat_dec_lt(v_idx_320_, v___x_351_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; lean_object* v___x_355_; 
v___x_353_ = lean_box(0);
lean_inc(v_pos_313_);
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 1, v___x_353_);
v___x_355_ = v___x_316_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_pos_313_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v___x_353_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
lean_inc(v_idx_320_);
v___y_322_ = v___x_355_;
v_pos_323_ = v_pos_313_;
v_idx_324_ = v_idx_320_;
goto v___jp_321_;
}
}
else
{
uint8_t v___x_357_; uint8_t v_got_358_; uint8_t v___x_359_; 
v___x_357_ = 10;
v_got_358_ = lean_byte_array_fget(v_array_319_, v_idx_320_);
v___x_359_ = lean_uint8_dec_eq(v_got_358_, v___x_357_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; lean_object* v___x_362_; 
v___x_360_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8));
lean_inc(v_pos_313_);
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 1, v___x_360_);
v___x_362_ = v___x_316_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_pos_313_);
lean_ctor_set(v_reuseFailAlloc_363_, 1, v___x_360_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
lean_inc(v_idx_320_);
v___y_322_ = v___x_362_;
v_pos_323_ = v_pos_313_;
v_idx_324_ = v_idx_320_;
goto v___jp_321_;
}
}
else
{
lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_371_; 
lean_inc_ref(v_array_319_);
lean_del_object(v___x_316_);
v_isSharedCheck_371_ = !lean_is_exclusive(v_pos_313_);
if (v_isSharedCheck_371_ == 0)
{
lean_object* v_unused_372_; lean_object* v_unused_373_; 
v_unused_372_ = lean_ctor_get(v_pos_313_, 1);
lean_dec(v_unused_372_);
v_unused_373_ = lean_ctor_get(v_pos_313_, 0);
lean_dec(v_unused_373_);
v___x_365_ = v_pos_313_;
v_isShared_366_ = v_isSharedCheck_371_;
goto v_resetjp_364_;
}
else
{
lean_dec(v_pos_313_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_371_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___x_367_; lean_object* v___x_369_; 
v___x_367_ = lean_nat_add(v_idx_320_, v___x_278_);
lean_dec(v_idx_320_);
if (v_isShared_366_ == 0)
{
lean_ctor_set(v___x_365_, 1, v___x_367_);
v___x_369_ = v___x_365_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_array_319_);
lean_ctor_set(v_reuseFailAlloc_370_, 1, v___x_367_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
v_pos_293_ = v___x_369_;
goto v___jp_292_;
}
}
}
}
}
v___jp_321_:
{
uint8_t v___x_325_; 
v___x_325_ = lean_nat_dec_eq(v_idx_320_, v_idx_324_);
lean_dec(v_idx_324_);
lean_dec(v_idx_320_);
if (v___x_325_ == 0)
{
lean_object* v_pos_326_; lean_object* v_err_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
lean_dec_ref(v_pos_323_);
lean_dec_ref(v___x_291_);
lean_del_object(v___x_287_);
v_pos_326_ = lean_ctor_get(v___y_322_, 0);
v_err_327_ = lean_ctor_get(v___y_322_, 1);
v_isSharedCheck_334_ = !lean_is_exclusive(v___y_322_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___y_322_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_err_327_);
lean_inc(v_pos_326_);
lean_dec(v___y_322_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_332_; 
if (v_isShared_330_ == 0)
{
v___x_332_ = v___x_329_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_pos_326_);
lean_ctor_set(v_reuseFailAlloc_333_, 1, v_err_327_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
else
{
lean_object* v_utf8_335_; lean_object* v___x_336_; 
lean_dec_ref(v___y_322_);
v_utf8_335_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6, &l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6_once, _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6);
v___x_336_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_335_, v_pos_323_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_pos_337_; 
v_pos_337_ = lean_ctor_get(v___x_336_, 0);
lean_inc(v_pos_337_);
lean_dec_ref_known(v___x_336_, 2);
v_pos_293_ = v_pos_337_;
goto v___jp_292_;
}
else
{
lean_object* v_pos_338_; lean_object* v_err_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_346_; 
lean_dec_ref(v___x_291_);
lean_del_object(v___x_287_);
v_pos_338_ = lean_ctor_get(v___x_336_, 0);
v_err_339_ = lean_ctor_get(v___x_336_, 1);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_346_ == 0)
{
v___x_341_ = v___x_336_;
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_err_339_);
lean_inc(v_pos_338_);
lean_dec(v___x_336_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_344_; 
if (v_isShared_342_ == 0)
{
v___x_344_ = v___x_341_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_pos_338_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v_err_339_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
}
}
}
}
v___jp_292_:
{
uint8_t v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_298_; 
v___x_294_ = 0;
v___x_295_ = lean_box(v___x_294_);
v___x_296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
lean_ctor_set(v___x_296_, 1, v___x_291_);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 1, v___x_296_);
lean_ctor_set(v___x_287_, 0, v_pos_293_);
v___x_298_ = v___x_287_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_pos_293_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v___x_296_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
else
{
lean_object* v_pos_376_; lean_object* v_err_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
v_pos_376_ = lean_ctor_get(v___x_283_, 0);
v_err_377_ = lean_ctor_get(v___x_283_, 1);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v___x_283_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_err_377_);
lean_inc(v_pos_376_);
lean_dec(v___x_283_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_pos_376_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v_err_377_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines_go(lean_object* v_acc_389_, lean_object* v_a_390_){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment(v_a_390_);
if (lean_obj_tag(v___x_391_) == 0)
{
lean_object* v_res_392_; lean_object* v_pos_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_405_; 
v_res_392_ = lean_ctor_get(v___x_391_, 1);
v_pos_393_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_405_ == 0)
{
v___x_395_ = v___x_391_;
v_isShared_396_ = v_isSharedCheck_405_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_res_392_);
lean_inc(v_pos_393_);
lean_dec(v___x_391_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_405_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v_fst_397_; lean_object* v_snd_398_; lean_object* v___x_399_; uint8_t v___x_400_; 
v_fst_397_ = lean_ctor_get(v_res_392_, 0);
lean_inc(v_fst_397_);
v_snd_398_ = lean_ctor_get(v_res_392_, 1);
lean_inc(v_snd_398_);
lean_dec(v_res_392_);
v___x_399_ = l_Array_append___redArg(v_acc_389_, v_snd_398_);
lean_dec(v_snd_398_);
v___x_400_ = lean_unbox(v_fst_397_);
lean_dec(v_fst_397_);
if (v___x_400_ == 0)
{
lean_del_object(v___x_395_);
v_acc_389_ = v___x_399_;
v_a_390_ = v_pos_393_;
goto _start;
}
else
{
lean_object* v___x_403_; 
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 1, v___x_399_);
v___x_403_ = v___x_395_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_pos_393_);
lean_ctor_set(v_reuseFailAlloc_404_, 1, v___x_399_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
}
else
{
lean_object* v_pos_406_; lean_object* v_err_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_414_; 
lean_dec_ref(v_acc_389_);
v_pos_406_ = lean_ctor_get(v___x_391_, 0);
v_err_407_ = lean_ctor_get(v___x_391_, 1);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_414_ == 0)
{
v___x_409_ = v___x_391_;
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_err_407_);
lean_inc(v_pos_406_);
lean_dec(v___x_391_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_412_; 
if (v_isShared_410_ == 0)
{
v___x_412_ = v___x_409_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_pos_406_);
lean_ctor_set(v_reuseFailAlloc_413_, 1, v_err_407_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines(lean_object* v_a_417_){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines___closed__0));
v___x_419_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines_go(v___x_418_, v_a_417_);
return v___x_419_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1(void){
_start:
{
lean_object* v___x_421_; lean_object* v_utf8_422_; 
v___x_421_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__0));
v_utf8_422_ = lean_string_to_utf8(v___x_421_);
return v_utf8_422_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader(lean_object* v_a_423_){
_start:
{
lean_object* v_utf8_424_; lean_object* v___x_425_; 
v_utf8_424_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1, &l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1_once, _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1);
v___x_425_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_424_, v_a_423_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_pos_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_477_; 
v_pos_426_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_477_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_477_ == 0)
{
lean_object* v_unused_478_; 
v_unused_478_ = lean_ctor_get(v___x_425_, 1);
lean_dec(v_unused_478_);
v___x_428_ = v___x_425_;
v_isShared_429_ = v_isSharedCheck_477_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_pos_426_);
lean_dec(v___x_425_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_477_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v_array_430_; lean_object* v_idx_431_; lean_object* v___y_433_; lean_object* v_pos_434_; lean_object* v_idx_435_; lean_object* v___x_449_; uint8_t v___x_450_; 
v_array_430_ = lean_ctor_get(v_pos_426_, 0);
v_idx_431_ = lean_ctor_get(v_pos_426_, 1);
lean_inc(v_idx_431_);
v___x_449_ = lean_byte_array_size(v_array_430_);
v___x_450_ = lean_nat_dec_lt(v_idx_431_, v___x_449_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; lean_object* v___x_453_; 
v___x_451_ = lean_box(0);
lean_inc(v_pos_426_);
if (v_isShared_429_ == 0)
{
lean_ctor_set_tag(v___x_428_, 1);
lean_ctor_set(v___x_428_, 1, v___x_451_);
v___x_453_ = v___x_428_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_pos_426_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v___x_451_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
lean_inc(v_idx_431_);
v___y_433_ = v___x_453_;
v_pos_434_ = v_pos_426_;
v_idx_435_ = v_idx_431_;
goto v___jp_432_;
}
}
else
{
uint8_t v___x_455_; uint8_t v_got_456_; uint8_t v___x_457_; 
v___x_455_ = 10;
v_got_456_ = lean_byte_array_fget(v_array_430_, v_idx_431_);
v___x_457_ = lean_uint8_dec_eq(v_got_456_, v___x_455_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; lean_object* v___x_460_; 
v___x_458_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8));
lean_inc(v_pos_426_);
if (v_isShared_429_ == 0)
{
lean_ctor_set_tag(v___x_428_, 1);
lean_ctor_set(v___x_428_, 1, v___x_458_);
v___x_460_ = v___x_428_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_pos_426_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v___x_458_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
lean_inc(v_idx_431_);
v___y_433_ = v___x_460_;
v_pos_434_ = v_pos_426_;
v_idx_435_ = v_idx_431_;
goto v___jp_432_;
}
}
else
{
lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_474_; 
lean_inc_ref(v_array_430_);
v_isSharedCheck_474_ = !lean_is_exclusive(v_pos_426_);
if (v_isSharedCheck_474_ == 0)
{
lean_object* v_unused_475_; lean_object* v_unused_476_; 
v_unused_475_ = lean_ctor_get(v_pos_426_, 1);
lean_dec(v_unused_475_);
v_unused_476_ = lean_ctor_get(v_pos_426_, 0);
lean_dec(v_unused_476_);
v___x_463_ = v_pos_426_;
v_isShared_464_ = v_isSharedCheck_474_;
goto v_resetjp_462_;
}
else
{
lean_dec(v_pos_426_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_474_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_468_; 
v___x_465_ = lean_unsigned_to_nat(1u);
v___x_466_ = lean_nat_add(v_idx_431_, v___x_465_);
lean_dec(v_idx_431_);
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 1, v___x_466_);
v___x_468_ = v___x_463_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_array_430_);
lean_ctor_set(v_reuseFailAlloc_473_, 1, v___x_466_);
v___x_468_ = v_reuseFailAlloc_473_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
lean_object* v___x_469_; lean_object* v___x_471_; 
v___x_469_ = lean_box(0);
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 1, v___x_469_);
lean_ctor_set(v___x_428_, 0, v___x_468_);
v___x_471_ = v___x_428_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_468_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v___x_469_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
}
}
v___jp_432_:
{
uint8_t v___x_436_; 
v___x_436_ = lean_nat_dec_eq(v_idx_431_, v_idx_435_);
lean_dec(v_idx_435_);
lean_dec(v_idx_431_);
if (v___x_436_ == 0)
{
lean_dec_ref(v_pos_434_);
return v___y_433_;
}
else
{
lean_object* v_utf8_437_; lean_object* v___x_438_; 
lean_dec_ref(v___y_433_);
v_utf8_437_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6, &l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6_once, _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6);
v___x_438_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_437_, v_pos_434_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_pos_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_447_; 
v_pos_439_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_447_ == 0)
{
lean_object* v_unused_448_; 
v_unused_448_ = lean_ctor_get(v___x_438_, 1);
lean_dec(v_unused_448_);
v___x_441_ = v___x_438_;
v_isShared_442_ = v_isSharedCheck_447_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_pos_439_);
lean_dec(v___x_438_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_447_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_443_; lean_object* v___x_445_; 
v___x_443_ = lean_box(0);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 1, v___x_443_);
v___x_445_ = v___x_441_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_pos_439_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v___x_443_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
else
{
return v___x_438_;
}
}
}
}
}
else
{
return v___x_425_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parse(lean_object* v_a_479_){
_start:
{
lean_object* v_utf8_480_; lean_object* v___x_481_; 
v_utf8_480_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1, &l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1_once, _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1);
v___x_481_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_480_, v_a_479_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_pos_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_540_; 
v_pos_482_ = lean_ctor_get(v___x_481_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_540_ == 0)
{
lean_object* v_unused_541_; 
v_unused_541_ = lean_ctor_get(v___x_481_, 1);
lean_dec(v_unused_541_);
v___x_484_ = v___x_481_;
v_isShared_485_ = v_isSharedCheck_540_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_pos_482_);
lean_dec(v___x_481_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_540_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v_array_486_; lean_object* v_idx_487_; lean_object* v___y_489_; lean_object* v_pos_490_; lean_object* v_idx_491_; lean_object* v___x_515_; uint8_t v___x_516_; 
v_array_486_ = lean_ctor_get(v_pos_482_, 0);
v_idx_487_ = lean_ctor_get(v_pos_482_, 1);
lean_inc(v_idx_487_);
v___x_515_ = lean_byte_array_size(v_array_486_);
v___x_516_ = lean_nat_dec_lt(v_idx_487_, v___x_515_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; lean_object* v___x_519_; 
v___x_517_ = lean_box(0);
lean_inc(v_pos_482_);
if (v_isShared_485_ == 0)
{
lean_ctor_set_tag(v___x_484_, 1);
lean_ctor_set(v___x_484_, 1, v___x_517_);
v___x_519_ = v___x_484_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_pos_482_);
lean_ctor_set(v_reuseFailAlloc_520_, 1, v___x_517_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
lean_inc(v_idx_487_);
v___y_489_ = v___x_519_;
v_pos_490_ = v_pos_482_;
v_idx_491_ = v_idx_487_;
goto v___jp_488_;
}
}
else
{
uint8_t v___x_521_; uint8_t v_got_522_; uint8_t v___x_523_; 
v___x_521_ = 10;
v_got_522_ = lean_byte_array_fget(v_array_486_, v_idx_487_);
v___x_523_ = lean_uint8_dec_eq(v_got_522_, v___x_521_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; lean_object* v___x_526_; 
v___x_524_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8));
lean_inc(v_pos_482_);
if (v_isShared_485_ == 0)
{
lean_ctor_set_tag(v___x_484_, 1);
lean_ctor_set(v___x_484_, 1, v___x_524_);
v___x_526_ = v___x_484_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_pos_482_);
lean_ctor_set(v_reuseFailAlloc_527_, 1, v___x_524_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
lean_inc(v_idx_487_);
v___y_489_ = v___x_526_;
v_pos_490_ = v_pos_482_;
v_idx_491_ = v_idx_487_;
goto v___jp_488_;
}
}
else
{
lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_537_; 
lean_inc_ref(v_array_486_);
lean_del_object(v___x_484_);
v_isSharedCheck_537_ = !lean_is_exclusive(v_pos_482_);
if (v_isSharedCheck_537_ == 0)
{
lean_object* v_unused_538_; lean_object* v_unused_539_; 
v_unused_538_ = lean_ctor_get(v_pos_482_, 1);
lean_dec(v_unused_538_);
v_unused_539_ = lean_ctor_get(v_pos_482_, 0);
lean_dec(v_unused_539_);
v___x_529_ = v_pos_482_;
v_isShared_530_ = v_isSharedCheck_537_;
goto v_resetjp_528_;
}
else
{
lean_dec(v_pos_482_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_537_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_534_; 
v___x_531_ = lean_unsigned_to_nat(1u);
v___x_532_ = lean_nat_add(v_idx_487_, v___x_531_);
lean_dec(v_idx_487_);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 1, v___x_532_);
v___x_534_ = v___x_529_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_array_486_);
lean_ctor_set(v_reuseFailAlloc_536_, 1, v___x_532_);
v___x_534_ = v_reuseFailAlloc_536_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
lean_object* v___x_535_; 
v___x_535_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines(v___x_534_);
return v___x_535_;
}
}
}
}
v___jp_488_:
{
uint8_t v___x_492_; 
v___x_492_ = lean_nat_dec_eq(v_idx_487_, v_idx_491_);
lean_dec(v_idx_491_);
lean_dec(v_idx_487_);
if (v___x_492_ == 0)
{
lean_object* v_pos_493_; lean_object* v_err_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_501_; 
lean_dec_ref(v_pos_490_);
v_pos_493_ = lean_ctor_get(v___y_489_, 0);
v_err_494_ = lean_ctor_get(v___y_489_, 1);
v_isSharedCheck_501_ = !lean_is_exclusive(v___y_489_);
if (v_isSharedCheck_501_ == 0)
{
v___x_496_ = v___y_489_;
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_err_494_);
lean_inc(v_pos_493_);
lean_dec(v___y_489_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_499_; 
if (v_isShared_497_ == 0)
{
v___x_499_ = v___x_496_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_pos_493_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v_err_494_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
else
{
lean_object* v_utf8_502_; lean_object* v___x_503_; 
lean_dec_ref(v___y_489_);
v_utf8_502_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6, &l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6_once, _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6);
v___x_503_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_502_, v_pos_490_);
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_pos_504_; lean_object* v___x_505_; 
v_pos_504_ = lean_ctor_get(v___x_503_, 0);
lean_inc(v_pos_504_);
lean_dec_ref_known(v___x_503_, 2);
v___x_505_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines(v_pos_504_);
return v___x_505_;
}
else
{
lean_object* v_pos_506_; lean_object* v_err_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_514_; 
v_pos_506_ = lean_ctor_get(v___x_503_, 0);
v_err_507_ = lean_ctor_get(v___x_503_, 1);
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_514_ == 0)
{
v___x_509_ = v___x_503_;
v_isShared_510_ = v_isSharedCheck_514_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_err_507_);
lean_inc(v_pos_506_);
lean_dec(v___x_503_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_514_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_512_; 
if (v_isShared_510_ == 0)
{
v___x_512_ = v___x_509_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_pos_506_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_err_507_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
}
}
}
}
else
{
lean_object* v_pos_542_; lean_object* v_err_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_550_; 
v_pos_542_ = lean_ctor_get(v___x_481_, 0);
v_err_543_ = lean_ctor_get(v___x_481_, 1);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_550_ == 0)
{
v___x_545_ = v___x_481_;
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_err_543_);
lean_inc(v_pos_542_);
lean_dec(v___x_481_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_548_; 
if (v_isShared_546_ == 0)
{
v___x_548_ = v___x_545_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_pos_542_);
lean_ctor_set(v_reuseFailAlloc_549_, 1, v_err_543_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorIdx___impl___redArg(lean_object* v_x_551_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = lean_obj_tag_nat(v_x_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorIdx___impl___redArg___boxed(lean_object* v_x_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorIdx___impl___redArg(v_x_553_);
lean_dec(v_x_553_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorIdx___impl(lean_object* v_00_u03b1_555_, lean_object* v_x_556_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = lean_obj_tag_nat(v_x_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorIdx___impl___boxed(lean_object* v_00_u03b1_558_, lean_object* v_x_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorIdx___impl(v_00_u03b1_558_, v_x_559_);
lean_dec(v_x_559_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim___redArg(lean_object* v_t_561_, lean_object* v_k_562_){
_start:
{
if (lean_obj_tag(v_t_561_) == 0)
{
lean_object* v_x_563_; lean_object* v___x_564_; 
v_x_563_ = lean_ctor_get(v_t_561_, 0);
lean_inc(v_x_563_);
lean_dec_ref_known(v_t_561_, 1);
v___x_564_ = lean_apply_1(v_k_562_, v_x_563_);
return v___x_564_;
}
else
{
return v_k_562_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim(lean_object* v_00_u03b1_565_, lean_object* v_motive_566_, lean_object* v_ctorIdx_567_, lean_object* v_t_568_, lean_object* v_h_569_, lean_object* v_k_570_){
_start:
{
lean_object* v___x_571_; 
v___x_571_ = l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim___redArg(v_t_568_, v_k_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim___boxed(lean_object* v_00_u03b1_572_, lean_object* v_motive_573_, lean_object* v_ctorIdx_574_, lean_object* v_t_575_, lean_object* v_h_576_, lean_object* v_k_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim(v_00_u03b1_572_, v_motive_573_, v_ctorIdx_574_, v_t_575_, v_h_576_, v_k_577_);
lean_dec(v_ctorIdx_574_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_success_elim___redArg(lean_object* v_t_579_, lean_object* v_success_580_){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim___redArg(v_t_579_, v_success_580_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_success_elim(lean_object* v_00_u03b1_582_, lean_object* v_motive_583_, lean_object* v_t_584_, lean_object* v_h_585_, lean_object* v_success_586_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim___redArg(v_t_584_, v_success_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_timeout_elim___redArg(lean_object* v_t_588_, lean_object* v_timeout_589_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim___redArg(v_t_588_, v_timeout_589_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_timeout_elim(lean_object* v_00_u03b1_591_, lean_object* v_motive_592_, lean_object* v_t_593_, lean_object* v_h_594_, lean_object* v_timeout_595_){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim___redArg(v_t_593_, v_timeout_595_);
return v___x_596_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_597_ = lean_box(0);
v___x_598_ = l_Lean_interruptExceptionId;
v___x_599_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_599_, 0, v___x_598_);
lean_ctor_set(v___x_599_, 1, v___x_597_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg(){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = lean_obj_once(&l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg___closed__0, &l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg___closed__0);
v___x_602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg___boxed(lean_object* v___y_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg();
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0(lean_object* v_00_u03b1_605_, lean_object* v___y_606_, lean_object* v___y_607_){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg();
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___boxed(lean_object* v_00_u03b1_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0(v_00_u03b1_610_, v___y_611_, v___y_612_);
lean_dec(v___y_612_);
lean_dec_ref(v___y_611_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___redArg(lean_object* v_cleanup_615_, lean_object* v_x_616_, lean_object* v_a_617_, lean_object* v_a_618_){
_start:
{
lean_object* v_toCold_620_; lean_object* v_cancelTk_x3f_621_; 
v_toCold_620_ = lean_ctor_get(v_a_617_, 0);
v_cancelTk_x3f_621_ = lean_ctor_get(v_toCold_620_, 10);
if (lean_obj_tag(v_cancelTk_x3f_621_) == 1)
{
lean_object* v_val_622_; uint8_t v___x_623_; 
v_val_622_ = lean_ctor_get(v_cancelTk_x3f_621_, 0);
v___x_623_ = l_IO_CancelToken_isSet(v_val_622_);
if (v___x_623_ == 0)
{
lean_object* v___x_624_; 
lean_dec_ref(v_cleanup_615_);
lean_inc(v_a_618_);
lean_inc_ref(v_a_617_);
v___x_624_ = lean_apply_3(v_x_616_, v_a_617_, v_a_618_, lean_box(0));
return v___x_624_;
}
else
{
lean_object* v___x_625_; 
lean_dec_ref(v_x_616_);
lean_inc(v_a_618_);
lean_inc_ref(v_a_617_);
v___x_625_ = lean_apply_3(v_cleanup_615_, v_a_617_, v_a_618_, lean_box(0));
if (lean_obj_tag(v___x_625_) == 0)
{
lean_object* v___x_626_; lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_634_; 
lean_dec_ref_known(v___x_625_, 1);
v___x_626_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg();
v_a_627_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_634_ == 0)
{
v___x_629_ = v___x_626_;
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_626_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_627_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
else
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
v_a_635_ = lean_ctor_get(v___x_625_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_625_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_625_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_625_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
}
else
{
lean_object* v___x_643_; 
lean_dec_ref(v_cleanup_615_);
lean_inc(v_a_618_);
lean_inc_ref(v_a_617_);
v___x_643_ = lean_apply_3(v_x_616_, v_a_617_, v_a_618_, lean_box(0));
return v___x_643_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___redArg___boxed(lean_object* v_cleanup_644_, lean_object* v_x_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___redArg(v_cleanup_644_, v_x_645_, v_a_646_, v_a_647_);
lean_dec(v_a_647_);
lean_dec_ref(v_a_646_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck(lean_object* v_00_u03b1_650_, lean_object* v_cleanup_651_, lean_object* v_x_652_, lean_object* v_a_653_, lean_object* v_a_654_){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___redArg(v_cleanup_651_, v_x_652_, v_a_653_, v_a_654_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___boxed(lean_object* v_00_u03b1_657_, lean_object* v_cleanup_658_, lean_object* v_x_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck(v_00_u03b1_657_, v_cleanup_658_, v_x_659_, v_a_660_, v_a_661_);
lean_dec(v_a_661_);
lean_dec_ref(v_a_660_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___redArg(lean_object* v_budgetMs_664_, lean_object* v_cleanup_665_, lean_object* v_x_666_, lean_object* v_a_667_, lean_object* v_a_668_){
_start:
{
lean_object* v___x_670_; uint8_t v___x_671_; 
v___x_670_ = lean_unsigned_to_nat(0u);
v___x_671_ = lean_nat_dec_eq(v_budgetMs_664_, v___x_670_);
if (v___x_671_ == 0)
{
lean_object* v___x_672_; 
lean_dec_ref(v_cleanup_665_);
lean_inc(v_a_668_);
lean_inc_ref(v_a_667_);
v___x_672_ = lean_apply_3(v_x_666_, v_a_667_, v_a_668_, lean_box(0));
return v___x_672_;
}
else
{
lean_object* v___x_673_; 
lean_dec_ref(v_x_666_);
lean_inc(v_a_668_);
lean_inc_ref(v_a_667_);
v___x_673_ = lean_apply_3(v_cleanup_665_, v_a_667_, v_a_668_, lean_box(0));
if (lean_obj_tag(v___x_673_) == 0)
{
lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_681_; 
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_681_ == 0)
{
lean_object* v_unused_682_; 
v_unused_682_ = lean_ctor_get(v___x_673_, 0);
lean_dec(v_unused_682_);
v___x_675_ = v___x_673_;
v_isShared_676_ = v_isSharedCheck_681_;
goto v_resetjp_674_;
}
else
{
lean_dec(v___x_673_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_681_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_677_ = lean_box(1);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v___x_677_);
v___x_679_ = v___x_675_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v___x_677_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
else
{
lean_object* v_a_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_690_; 
v_a_683_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_690_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_690_ == 0)
{
v___x_685_ = v___x_673_;
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_a_683_);
lean_dec(v___x_673_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_688_; 
if (v_isShared_686_ == 0)
{
v___x_688_ = v___x_685_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_a_683_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___redArg___boxed(lean_object* v_budgetMs_691_, lean_object* v_cleanup_692_, lean_object* v_x_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___redArg(v_budgetMs_691_, v_cleanup_692_, v_x_693_, v_a_694_, v_a_695_);
lean_dec(v_a_695_);
lean_dec_ref(v_a_694_);
lean_dec(v_budgetMs_691_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck(lean_object* v_00_u03b1_698_, lean_object* v_budgetMs_699_, lean_object* v_cleanup_700_, lean_object* v_x_701_, lean_object* v_a_702_, lean_object* v_a_703_){
_start:
{
lean_object* v___x_705_; 
v___x_705_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___redArg(v_budgetMs_699_, v_cleanup_700_, v_x_701_, v_a_702_, v_a_703_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___boxed(lean_object* v_00_u03b1_706_, lean_object* v_budgetMs_707_, lean_object* v_cleanup_708_, lean_object* v_x_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck(v_00_u03b1_706_, v_budgetMs_707_, v_cleanup_708_, v_x_709_, v_a_710_, v_a_711_);
lean_dec(v_a_711_);
lean_dec_ref(v_a_710_);
lean_dec(v_budgetMs_707_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_killAndWait(lean_object* v_cfg_714_, lean_object* v_child_715_){
_start:
{
lean_object* v___x_717_; 
v___x_717_ = lean_io_process_child_kill(v_cfg_714_, v_child_715_);
if (lean_obj_tag(v___x_717_) == 0)
{
lean_object* v___x_718_; lean_object* v___x_719_; 
lean_dec_ref_known(v___x_717_, 1);
v___x_718_ = lean_box(0);
v___x_719_ = lean_io_process_child_wait(v_cfg_714_, v_child_715_);
if (lean_obj_tag(v___x_719_) == 0)
{
lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_726_; 
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_726_ == 0)
{
lean_object* v_unused_727_; 
v_unused_727_ = lean_ctor_get(v___x_719_, 0);
lean_dec(v_unused_727_);
v___x_721_ = v___x_719_;
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
else
{
lean_dec(v___x_719_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_724_; 
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 0, v___x_718_);
v___x_724_ = v___x_721_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v___x_718_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
return v___x_724_;
}
}
}
else
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_735_; 
v_a_728_ = lean_ctor_get(v___x_719_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_735_ == 0)
{
v___x_730_ = v___x_719_;
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v___x_719_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_a_728_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
}
else
{
return v___x_717_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_killAndWait___boxed(lean_object* v_cfg_736_, lean_object* v_child_737_, lean_object* v_a_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_killAndWait(v_cfg_736_, v_child_737_);
lean_dec_ref(v_child_737_);
lean_dec_ref(v_cfg_736_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___redArg(lean_object* v_e_740_){
_start:
{
if (lean_obj_tag(v_e_740_) == 0)
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_751_; 
v_a_742_ = lean_ctor_get(v_e_740_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v_e_740_);
if (v_isSharedCheck_751_ == 0)
{
v___x_744_ = v_e_740_;
v_isShared_745_ = v_isSharedCheck_751_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v_e_740_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_751_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_749_; 
v___x_746_ = lean_io_error_to_string(v_a_742_);
v___x_747_ = lean_mk_io_user_error(v___x_746_);
if (v_isShared_745_ == 0)
{
lean_ctor_set_tag(v___x_744_, 1);
lean_ctor_set(v___x_744_, 0, v___x_747_);
v___x_749_ = v___x_744_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v___x_747_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
else
{
lean_object* v_a_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_759_; 
v_a_752_ = lean_ctor_get(v_e_740_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v_e_740_);
if (v_isSharedCheck_759_ == 0)
{
v___x_754_ = v_e_740_;
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_a_752_);
lean_dec(v_e_740_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_757_; 
if (v_isShared_755_ == 0)
{
lean_ctor_set_tag(v___x_754_, 0);
v___x_757_ = v___x_754_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_a_752_);
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
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___redArg___boxed(lean_object* v_e_760_, lean_object* v_a_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___redArg(v_e_760_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0(lean_object* v_00_u03b1_763_, lean_object* v_e_764_){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___redArg(v_e_764_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___boxed(lean_object* v_00_u03b1_767_, lean_object* v_e_768_, lean_object* v_a_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0(v_00_u03b1_767_, v_e_768_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__1(lean_object* v_cfg_771_, lean_object* v_child_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
lean_object* v_ref_776_; lean_object* v___x_777_; 
v_ref_776_ = lean_ctor_get(v___y_773_, 2);
v___x_777_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_killAndWait(v_cfg_771_, v_child_772_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_785_; 
v_a_778_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_785_ == 0)
{
v___x_780_ = v___x_777_;
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___x_777_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_783_; 
if (v_isShared_781_ == 0)
{
v___x_783_ = v___x_780_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_a_778_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
else
{
lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_797_; 
v_a_786_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_797_ == 0)
{
v___x_788_ = v___x_777_;
v_isShared_789_ = v_isSharedCheck_797_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_dec(v___x_777_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_797_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_795_; 
v___x_790_ = lean_io_error_to_string(v_a_786_);
v___x_791_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_791_, 0, v___x_790_);
v___x_792_ = l_Lean_MessageData_ofFormat(v___x_791_);
lean_inc(v_ref_776_);
v___x_793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_793_, 0, v_ref_776_);
lean_ctor_set(v___x_793_, 1, v___x_792_);
if (v_isShared_789_ == 0)
{
lean_ctor_set(v___x_788_, 0, v___x_793_);
v___x_795_ = v___x_788_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v___x_793_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__1___boxed(lean_object* v_cfg_798_, lean_object* v_child_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__1(v_cfg_798_, v_child_799_, v___y_800_, v___y_801_);
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
lean_dec_ref(v_child_799_);
lean_dec_ref(v_cfg_798_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__0(lean_object* v_cfg_804_, lean_object* v_child_805_, lean_object* v_sleepMs_806_, lean_object* v_budgetMs_807_, lean_object* v_maxSleepMs_808_, lean_object* v_stdout_809_, lean_object* v_stderr_810_, lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
lean_object* v_ref_814_; lean_object* v___x_815_; 
v_ref_814_ = lean_ctor_get(v___y_811_, 2);
v___x_815_ = lean_io_process_child_try_wait(v_cfg_804_, v_child_805_);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v_a_816_; 
v_a_816_ = lean_ctor_get(v___x_815_, 0);
lean_inc(v_a_816_);
lean_dec_ref_known(v___x_815_, 1);
if (lean_obj_tag(v_a_816_) == 0)
{
uint32_t v___x_817_; lean_object* v___x_818_; lean_object* v___y_820_; uint8_t v___x_823_; 
v___x_817_ = lean_uint32_of_nat(v_sleepMs_806_);
v___x_818_ = l_IO_sleep(v___x_817_);
v___x_823_ = lean_nat_dec_le(v_maxSleepMs_808_, v_sleepMs_806_);
if (v___x_823_ == 0)
{
lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_824_ = lean_unsigned_to_nat(2u);
v___x_825_ = lean_nat_mul(v_sleepMs_806_, v___x_824_);
v___y_820_ = v___x_825_;
goto v___jp_819_;
}
else
{
lean_inc(v_sleepMs_806_);
v___y_820_ = v_sleepMs_806_;
goto v___jp_819_;
}
v___jp_819_:
{
lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_821_ = lean_nat_sub(v_budgetMs_807_, v_sleepMs_806_);
lean_dec(v_sleepMs_806_);
v___x_822_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go(v_cfg_804_, v___x_821_, v___y_820_, v_maxSleepMs_808_, v_child_805_, v_stdout_809_, v_stderr_810_, v___y_811_, v___y_812_);
return v___x_822_;
}
}
else
{
lean_object* v_val_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_876_; 
lean_dec(v_maxSleepMs_808_);
lean_dec(v_sleepMs_806_);
lean_dec_ref(v_child_805_);
lean_dec_ref(v_cfg_804_);
v_val_826_ = lean_ctor_get(v_a_816_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v_a_816_);
if (v_isSharedCheck_876_ == 0)
{
v___x_828_ = v_a_816_;
v_isShared_829_ = v_isSharedCheck_876_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_val_826_);
lean_dec(v_a_816_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_876_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = lean_task_get_own(v_stdout_809_);
v___x_831_ = l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___redArg(v___x_830_);
if (lean_obj_tag(v___x_831_) == 0)
{
lean_object* v_a_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v_a_832_ = lean_ctor_get(v___x_831_, 0);
lean_inc(v_a_832_);
lean_dec_ref_known(v___x_831_, 1);
v___x_833_ = lean_task_get_own(v_stderr_810_);
v___x_834_ = l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___redArg(v___x_833_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_a_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_847_; 
v_a_835_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_847_ == 0)
{
v___x_837_ = v___x_834_;
v_isShared_838_ = v_isSharedCheck_847_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_a_835_);
lean_dec(v___x_834_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_847_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_839_; uint32_t v___x_840_; lean_object* v___x_842_; 
v___x_839_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_839_, 0, v_a_832_);
lean_ctor_set(v___x_839_, 1, v_a_835_);
v___x_840_ = lean_unbox_uint32(v_val_826_);
lean_dec(v_val_826_);
lean_ctor_set_uint32(v___x_839_, sizeof(void*)*2, v___x_840_);
if (v_isShared_829_ == 0)
{
lean_ctor_set_tag(v___x_828_, 0);
lean_ctor_set(v___x_828_, 0, v___x_839_);
v___x_842_ = v___x_828_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_839_);
v___x_842_ = v_reuseFailAlloc_846_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
lean_object* v___x_844_; 
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 0, v___x_842_);
v___x_844_ = v___x_837_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v___x_842_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
else
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_861_; 
lean_dec(v_a_832_);
lean_dec(v_val_826_);
v_a_848_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_861_ == 0)
{
v___x_850_ = v___x_834_;
v_isShared_851_ = v_isSharedCheck_861_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_834_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_861_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_852_; lean_object* v___x_854_; 
v___x_852_ = lean_io_error_to_string(v_a_848_);
if (v_isShared_829_ == 0)
{
lean_ctor_set_tag(v___x_828_, 3);
lean_ctor_set(v___x_828_, 0, v___x_852_);
v___x_854_ = v___x_828_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v___x_852_);
v___x_854_ = v_reuseFailAlloc_860_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_858_; 
v___x_855_ = l_Lean_MessageData_ofFormat(v___x_854_);
lean_inc(v_ref_814_);
v___x_856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_856_, 0, v_ref_814_);
lean_ctor_set(v___x_856_, 1, v___x_855_);
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 0, v___x_856_);
v___x_858_ = v___x_850_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v___x_856_);
v___x_858_ = v_reuseFailAlloc_859_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
return v___x_858_;
}
}
}
}
}
else
{
lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_875_; 
lean_dec(v_val_826_);
lean_dec_ref(v_stderr_810_);
v_a_862_ = lean_ctor_get(v___x_831_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_831_);
if (v_isSharedCheck_875_ == 0)
{
v___x_864_ = v___x_831_;
v_isShared_865_ = v_isSharedCheck_875_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_831_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_875_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_866_; lean_object* v___x_868_; 
v___x_866_ = lean_io_error_to_string(v_a_862_);
if (v_isShared_829_ == 0)
{
lean_ctor_set_tag(v___x_828_, 3);
lean_ctor_set(v___x_828_, 0, v___x_866_);
v___x_868_ = v___x_828_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v___x_866_);
v___x_868_ = v_reuseFailAlloc_874_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_872_; 
v___x_869_ = l_Lean_MessageData_ofFormat(v___x_868_);
lean_inc(v_ref_814_);
v___x_870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_870_, 0, v_ref_814_);
lean_ctor_set(v___x_870_, 1, v___x_869_);
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 0, v___x_870_);
v___x_872_ = v___x_864_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v___x_870_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_888_; 
lean_dec_ref(v_stderr_810_);
lean_dec_ref(v_stdout_809_);
lean_dec(v_maxSleepMs_808_);
lean_dec(v_sleepMs_806_);
lean_dec_ref(v_child_805_);
lean_dec_ref(v_cfg_804_);
v_a_877_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_888_ == 0)
{
v___x_879_ = v___x_815_;
v_isShared_880_ = v_isSharedCheck_888_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_815_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_888_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_886_; 
v___x_881_ = lean_io_error_to_string(v_a_877_);
v___x_882_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_882_, 0, v___x_881_);
v___x_883_ = l_Lean_MessageData_ofFormat(v___x_882_);
lean_inc(v_ref_814_);
v___x_884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_884_, 0, v_ref_814_);
lean_ctor_set(v___x_884_, 1, v___x_883_);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_884_);
v___x_886_ = v___x_879_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_884_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__0___boxed(lean_object* v_cfg_889_, lean_object* v_child_890_, lean_object* v_sleepMs_891_, lean_object* v_budgetMs_892_, lean_object* v_maxSleepMs_893_, lean_object* v_stdout_894_, lean_object* v_stderr_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__0(v_cfg_889_, v_child_890_, v_sleepMs_891_, v_budgetMs_892_, v_maxSleepMs_893_, v_stdout_894_, v_stderr_895_, v___y_896_, v___y_897_);
lean_dec(v___y_897_);
lean_dec_ref(v___y_896_);
lean_dec(v_budgetMs_892_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go(lean_object* v_cfg_900_, lean_object* v_budgetMs_901_, lean_object* v_sleepMs_902_, lean_object* v_maxSleepMs_903_, lean_object* v_child_904_, lean_object* v_stdout_905_, lean_object* v_stderr_906_, lean_object* v_a_907_, lean_object* v_a_908_){
_start:
{
lean_object* v___f_910_; lean_object* v___f_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
lean_inc(v_budgetMs_901_);
lean_inc_ref(v_child_904_);
lean_inc_ref(v_cfg_900_);
v___f_910_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__0___boxed), 10, 7);
lean_closure_set(v___f_910_, 0, v_cfg_900_);
lean_closure_set(v___f_910_, 1, v_child_904_);
lean_closure_set(v___f_910_, 2, v_sleepMs_902_);
lean_closure_set(v___f_910_, 3, v_budgetMs_901_);
lean_closure_set(v___f_910_, 4, v_maxSleepMs_903_);
lean_closure_set(v___f_910_, 5, v_stdout_905_);
lean_closure_set(v___f_910_, 6, v_stderr_906_);
v___f_911_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__1___boxed), 5, 2);
lean_closure_set(v___f_911_, 0, v_cfg_900_);
lean_closure_set(v___f_911_, 1, v_child_904_);
lean_inc_ref(v___f_911_);
v___x_912_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___boxed), 6, 3);
lean_closure_set(v___x_912_, 0, lean_box(0));
lean_closure_set(v___x_912_, 1, v___f_911_);
lean_closure_set(v___x_912_, 2, v___f_910_);
v___x_913_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___redArg(v_budgetMs_901_, v___f_911_, v___x_912_, v_a_907_, v_a_908_);
lean_dec(v_budgetMs_901_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___boxed(lean_object* v_cfg_914_, lean_object* v_budgetMs_915_, lean_object* v_sleepMs_916_, lean_object* v_maxSleepMs_917_, lean_object* v_child_918_, lean_object* v_stdout_919_, lean_object* v_stderr_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go(v_cfg_914_, v_budgetMs_915_, v_sleepMs_916_, v_maxSleepMs_917_, v_child_918_, v_stdout_919_, v_stderr_920_, v_a_921_, v_a_922_);
lean_dec(v_a_922_);
lean_dec_ref(v_a_921_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__0(lean_object* v_stderr_925_){
_start:
{
lean_object* v___x_927_; 
v___x_927_ = l_IO_FS_Handle_readToEnd(v_stderr_925_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v_a_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_935_; 
v_a_928_ = lean_ctor_get(v___x_927_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_927_);
if (v_isSharedCheck_935_ == 0)
{
v___x_930_ = v___x_927_;
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_a_928_);
lean_dec(v___x_927_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_933_; 
if (v_isShared_931_ == 0)
{
lean_ctor_set_tag(v___x_930_, 1);
v___x_933_ = v___x_930_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_a_928_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
else
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
v_a_936_ = lean_ctor_get(v___x_927_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_927_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v___x_927_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_927_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_941_; 
if (v_isShared_939_ == 0)
{
lean_ctor_set_tag(v___x_938_, 0);
v___x_941_ = v___x_938_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_a_936_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__0___boxed(lean_object* v_stderr_944_, lean_object* v___y_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__0(v_stderr_944_);
lean_dec(v_stderr_944_);
return v_res_946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__1(lean_object* v_stdout_947_){
_start:
{
lean_object* v___x_949_; 
v___x_949_ = l_IO_FS_Handle_readToEnd(v_stdout_947_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_957_; 
v_a_950_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_957_ == 0)
{
v___x_952_ = v___x_949_;
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_949_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_955_; 
if (v_isShared_953_ == 0)
{
lean_ctor_set_tag(v___x_952_, 1);
v___x_955_ = v___x_952_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_a_950_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
else
{
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
v_a_958_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_949_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_949_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
lean_ctor_set_tag(v___x_960_, 0);
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_a_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__1___boxed(lean_object* v_stdout_966_, lean_object* v___y_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__1(v_stdout_966_);
lean_dec(v_stdout_966_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible(lean_object* v_timeout_972_, lean_object* v_args_973_, lean_object* v_a_974_, lean_object* v_a_975_){
_start:
{
lean_object* v___x_977_; lean_object* v_cmd_978_; lean_object* v_args_979_; lean_object* v_cwd_980_; lean_object* v_env_981_; uint8_t v_inheritEnv_982_; uint8_t v_setsid_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_1017_; 
v___x_977_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___closed__0));
v_cmd_978_ = lean_ctor_get(v_args_973_, 1);
v_args_979_ = lean_ctor_get(v_args_973_, 2);
v_cwd_980_ = lean_ctor_get(v_args_973_, 3);
v_env_981_ = lean_ctor_get(v_args_973_, 4);
v_inheritEnv_982_ = lean_ctor_get_uint8(v_args_973_, sizeof(void*)*5);
v_setsid_983_ = lean_ctor_get_uint8(v_args_973_, sizeof(void*)*5 + 1);
v_isSharedCheck_1017_ = !lean_is_exclusive(v_args_973_);
if (v_isSharedCheck_1017_ == 0)
{
lean_object* v_unused_1018_; 
v_unused_1018_ = lean_ctor_get(v_args_973_, 0);
lean_dec(v_unused_1018_);
v___x_985_ = v_args_973_;
v_isShared_986_ = v_isSharedCheck_1017_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_env_981_);
lean_inc(v_cwd_980_);
lean_inc(v_args_979_);
lean_inc(v_cmd_978_);
lean_dec(v_args_973_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_1017_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v_ref_987_; lean_object* v___x_989_; 
v_ref_987_ = lean_ctor_get(v_a_974_, 2);
if (v_isShared_986_ == 0)
{
lean_ctor_set(v___x_985_, 0, v___x_977_);
v___x_989_ = v___x_985_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v___x_977_);
lean_ctor_set(v_reuseFailAlloc_1016_, 1, v_cmd_978_);
lean_ctor_set(v_reuseFailAlloc_1016_, 2, v_args_979_);
lean_ctor_set(v_reuseFailAlloc_1016_, 3, v_cwd_980_);
lean_ctor_set(v_reuseFailAlloc_1016_, 4, v_env_981_);
lean_ctor_set_uint8(v_reuseFailAlloc_1016_, sizeof(void*)*5, v_inheritEnv_982_);
lean_ctor_set_uint8(v_reuseFailAlloc_1016_, sizeof(void*)*5 + 1, v_setsid_983_);
v___x_989_ = v_reuseFailAlloc_1016_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
lean_object* v___x_990_; 
v___x_990_ = lean_io_process_spawn(v___x_989_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v_stdout_992_; lean_object* v_stderr_993_; lean_object* v___f_994_; lean_object* v___f_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
lean_inc(v_a_991_);
lean_dec_ref_known(v___x_990_, 1);
v_stdout_992_ = lean_ctor_get(v_a_991_, 1);
v_stderr_993_ = lean_ctor_get(v_a_991_, 2);
lean_inc(v_stderr_993_);
v___f_994_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__0___boxed), 2, 1);
lean_closure_set(v___f_994_, 0, v_stderr_993_);
lean_inc(v_stdout_992_);
v___f_995_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__1___boxed), 2, 1);
lean_closure_set(v___f_995_, 0, v_stdout_992_);
v___x_996_ = lean_unsigned_to_nat(9u);
v___x_997_ = lean_io_as_task(v___f_995_, v___x_996_);
v___x_998_ = lean_io_as_task(v___f_994_, v___x_996_);
v___x_999_ = lean_unsigned_to_nat(1000u);
v___x_1000_ = lean_nat_mul(v_timeout_972_, v___x_999_);
v___x_1001_ = lean_unsigned_to_nat(1u);
v___x_1002_ = lean_unsigned_to_nat(64u);
v___x_1003_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go(v___x_977_, v___x_1000_, v___x_1001_, v___x_1002_, v_a_991_, v___x_997_, v___x_998_, v_a_974_, v_a_975_);
return v___x_1003_;
}
else
{
lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1015_; 
v_a_1004_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1006_ = v___x_990_;
v_isShared_1007_ = v_isSharedCheck_1015_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_990_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1015_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1013_; 
v___x_1008_ = lean_io_error_to_string(v_a_1004_);
v___x_1009_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1008_);
v___x_1010_ = l_Lean_MessageData_ofFormat(v___x_1009_);
lean_inc(v_ref_987_);
v___x_1011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1011_, 0, v_ref_987_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 0, v___x_1011_);
v___x_1013_ = v___x_1006_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v___x_1011_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___boxed(lean_object* v_timeout_1019_, lean_object* v_args_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l_Lean_Meta_Tactic_BVDecide_External_runInterruptible(v_timeout_1019_, v_args_1020_, v_a_1021_, v_a_1022_);
lean_dec(v_a_1022_);
lean_dec_ref(v_a_1021_);
lean_dec(v_timeout_1019_);
return v_res_1024_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1025_; 
v___x_1025_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1025_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1026_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__0);
v___x_1027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1026_);
return v___x_1027_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1028_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_1029_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__1);
v___x_1030_ = lean_unsigned_to_nat(0u);
v___x_1031_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
lean_ctor_set(v___x_1031_, 1, v___x_1030_);
lean_ctor_set(v___x_1031_, 2, v___x_1030_);
lean_ctor_set(v___x_1031_, 3, v___x_1030_);
lean_ctor_set(v___x_1031_, 4, v___x_1029_);
lean_ctor_set(v___x_1031_, 5, v___x_1029_);
lean_ctor_set(v___x_1031_, 6, v___x_1029_);
lean_ctor_set(v___x_1031_, 7, v___x_1029_);
lean_ctor_set(v___x_1031_, 8, v___x_1029_);
lean_ctor_set(v___x_1031_, 9, v___x_1029_);
lean_ctor_set(v___x_1031_, 10, v___x_1029_);
lean_ctor_set(v___x_1031_, 11, v___x_1028_);
return v___x_1031_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1032_ = lean_unsigned_to_nat(32u);
v___x_1033_ = lean_mk_empty_array_with_capacity(v___x_1032_);
v___x_1034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
return v___x_1034_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1035_ = ((size_t)5ULL);
v___x_1036_ = lean_unsigned_to_nat(0u);
v___x_1037_ = lean_unsigned_to_nat(32u);
v___x_1038_ = lean_mk_empty_array_with_capacity(v___x_1037_);
v___x_1039_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__3);
v___x_1040_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1040_, 0, v___x_1039_);
lean_ctor_set(v___x_1040_, 1, v___x_1038_);
lean_ctor_set(v___x_1040_, 2, v___x_1036_);
lean_ctor_set(v___x_1040_, 3, v___x_1036_);
lean_ctor_set_usize(v___x_1040_, 4, v___x_1035_);
return v___x_1040_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1041_ = lean_box(1);
v___x_1042_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__4);
v___x_1043_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__1);
v___x_1044_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1043_);
lean_ctor_set(v___x_1044_, 1, v___x_1042_);
lean_ctor_set(v___x_1044_, 2, v___x_1041_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0(lean_object* v_msgData_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
lean_object* v___x_1049_; lean_object* v_toCold_1050_; lean_object* v_env_1051_; lean_object* v_options_1052_; uint8_t v___x_1053_; lean_object* v_env_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1049_ = lean_st_ref_get(v___y_1047_);
v_toCold_1050_ = lean_ctor_get(v___y_1046_, 0);
v_env_1051_ = lean_ctor_get(v___x_1049_, 0);
lean_inc_ref(v_env_1051_);
lean_dec(v___x_1049_);
v_options_1052_ = lean_ctor_get(v_toCold_1050_, 2);
v___x_1053_ = 0;
v_env_1054_ = l_Lean_Environment_setRecordingDeps(v_env_1051_, v___x_1053_);
v___x_1055_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__2);
v___x_1056_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_1052_);
v___x_1057_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1057_, 0, v_env_1054_);
lean_ctor_set(v___x_1057_, 1, v___x_1055_);
lean_ctor_set(v___x_1057_, 2, v___x_1056_);
lean_ctor_set(v___x_1057_, 3, v_options_1052_);
v___x_1058_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
lean_ctor_set(v___x_1058_, 1, v_msgData_1045_);
v___x_1059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1058_);
return v___x_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___boxed(lean_object* v_msgData_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0(v_msgData_1060_, v___y_1061_, v___y_1062_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg(lean_object* v_msg_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v_ref_1069_; lean_object* v___x_1070_; lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1079_; 
v_ref_1069_ = lean_ctor_get(v___y_1066_, 2);
v___x_1070_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0(v_msg_1065_, v___y_1066_, v___y_1067_);
v_a_1071_ = lean_ctor_get(v___x_1070_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1073_ = v___x_1070_;
v_isShared_1074_ = v_isSharedCheck_1079_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v___x_1070_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1079_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1075_; lean_object* v___x_1077_; 
lean_inc(v_ref_1069_);
v___x_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1075_, 0, v_ref_1069_);
lean_ctor_set(v___x_1075_, 1, v_a_1071_);
if (v_isShared_1074_ == 0)
{
lean_ctor_set_tag(v___x_1073_, 1);
lean_ctor_set(v___x_1073_, 0, v___x_1075_);
v___x_1077_ = v___x_1073_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1075_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg___boxed(lean_object* v_msg_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg(v_msg_1080_, v___y_1081_, v___y_1082_);
lean_dec(v___y_1082_);
lean_dec_ref(v___y_1081_);
return v_res_1084_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__2(void){
_start:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1088_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__1));
v___x_1089_ = l_Lean_MessageData_ofFormat(v___x_1088_);
return v___x_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg(lean_object* v_a_1090_, lean_object* v_a_1091_){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1093_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__2);
v___x_1094_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg(v___x_1093_, v_a_1090_, v_a_1091_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___boxed(lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg(v_a_1095_, v_a_1096_);
lean_dec(v_a_1096_);
lean_dec_ref(v_a_1095_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout(lean_object* v_00_u03b1_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_){
_start:
{
lean_object* v___x_1103_; 
v___x_1103_ = l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg(v_a_1100_, v_a_1101_);
return v___x_1103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___boxed(lean_object* v_00_u03b1_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_){
_start:
{
lean_object* v_res_1108_; 
v_res_1108_ = l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout(v_00_u03b1_1104_, v_a_1105_, v_a_1106_);
lean_dec(v_a_1106_);
lean_dec_ref(v_a_1105_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0(lean_object* v_00_u03b1_1109_, lean_object* v_msg_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_){
_start:
{
lean_object* v___x_1114_; 
v___x_1114_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg(v_msg_1110_, v___y_1111_, v___y_1112_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___boxed(lean_object* v_00_u03b1_1115_, lean_object* v_msg_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0(v_00_u03b1_1115_, v_msg_1116_, v___y_1117_, v___y_1118_);
lean_dec(v___y_1118_);
lean_dec_ref(v___y_1117_);
return v_res_1120_;
}
}
static uint32_t _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__2(void){
_start:
{
lean_object* v___x_1124_; uint32_t v___x_1125_; 
v___x_1124_ = lean_unsigned_to_nat(0u);
v___x_1125_ = lean_int32_of_nat(v___x_1124_);
return v___x_1125_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3___boxed__const__1(void){
_start:
{
uint32_t v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = lean_uint32_once(&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__2, &l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__2);
v___x_1127_ = lean_box_uint32(v___x_1126_);
return v___x_1127_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3(void){
_start:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1128_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__1));
v___x_1129_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3___boxed__const__1;
v___x_1130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1128_);
lean_ctor_set(v___x_1130_, 1, v___x_1129_);
return v___x_1130_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__4(void){
_start:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1131_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3, &l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3);
v___x_1132_ = lean_unsigned_to_nat(1u);
v___x_1133_ = lean_mk_empty_array_with_capacity(v___x_1132_);
v___x_1134_ = lean_array_push(v___x_1133_, v___x_1131_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode(uint8_t v_mode_1138_){
_start:
{
lean_object* v___y_1140_; 
switch(v_mode_1138_)
{
case 0:
{
lean_object* v___x_1144_; 
v___x_1144_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__5));
v___y_1140_ = v___x_1144_;
goto v___jp_1139_;
}
case 1:
{
lean_object* v___x_1145_; 
v___x_1145_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__6));
v___y_1140_ = v___x_1145_;
goto v___jp_1139_;
}
default: 
{
lean_object* v___x_1146_; 
v___x_1146_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__7));
v___y_1140_ = v___x_1146_;
goto v___jp_1139_;
}
}
v___jp_1139_:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1141_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__0));
v___x_1142_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__4, &l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__4);
lean_inc_ref(v___y_1140_);
v___x_1143_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1143_, 0, v___y_1140_);
lean_ctor_set(v___x_1143_, 1, v___x_1141_);
lean_ctor_set(v___x_1143_, 2, v___x_1142_);
return v___x_1143_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___boxed(lean_object* v_mode_1147_){
_start:
{
uint8_t v_mode_boxed_1148_; lean_object* v_res_1149_; 
v_mode_boxed_1148_ = lean_unbox(v_mode_1147_);
v_res_1149_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode(v_mode_boxed_1148_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat(lean_object* v_opts_1159_, uint8_t v_binary_1160_){
_start:
{
lean_object* v_configuration_1161_; lean_object* v_longOptions_1162_; lean_object* v_options_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1177_; 
v_configuration_1161_ = lean_ctor_get(v_opts_1159_, 0);
v_longOptions_1162_ = lean_ctor_get(v_opts_1159_, 1);
v_options_1163_ = lean_ctor_get(v_opts_1159_, 2);
v_isSharedCheck_1177_ = !lean_is_exclusive(v_opts_1159_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1165_ = v_opts_1159_;
v_isShared_1166_ = v_isSharedCheck_1177_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_options_1163_);
lean_inc(v_longOptions_1162_);
lean_inc(v_configuration_1161_);
lean_dec(v_opts_1159_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1177_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; uint32_t v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1175_; 
v___x_1167_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__2));
v___x_1168_ = l_Array_append___redArg(v_longOptions_1162_, v___x_1167_);
v___x_1169_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__3));
v___x_1170_ = lean_bool_to_uint32(v_binary_1160_);
v___x_1171_ = lean_box_uint32(v___x_1170_);
v___x_1172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1169_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
v___x_1173_ = lean_array_push(v_options_1163_, v___x_1172_);
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 2, v___x_1173_);
lean_ctor_set(v___x_1165_, 1, v___x_1168_);
v___x_1175_ = v___x_1165_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_configuration_1161_);
lean_ctor_set(v_reuseFailAlloc_1176_, 1, v___x_1168_);
lean_ctor_set(v_reuseFailAlloc_1176_, 2, v___x_1173_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
return v___x_1175_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___boxed(lean_object* v_opts_1178_, lean_object* v_binary_1179_){
_start:
{
uint8_t v_binary_boxed_1180_; lean_object* v_res_1181_; 
v_binary_boxed_1180_ = lean_unbox(v_binary_1179_);
v_res_1181_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat(v_opts_1178_, v_binary_boxed_1180_);
return v_res_1181_;
}
}
static uint32_t _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__1(void){
_start:
{
lean_object* v___x_1183_; uint32_t v___x_1184_; 
v___x_1183_ = lean_unsigned_to_nat(2u);
v___x_1184_ = lean_int32_of_nat(v___x_1183_);
return v___x_1184_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2___boxed__const__1(void){
_start:
{
uint32_t v___x_1185_; lean_object* v___x_1186_; 
v___x_1185_ = lean_uint32_once(&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__1, &l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__1);
v___x_1186_ = lean_box_uint32(v___x_1185_);
return v___x_1186_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2(void){
_start:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1187_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__0));
v___x_1188_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2___boxed__const__1;
v___x_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1187_);
lean_ctor_set(v___x_1189_, 1, v___x_1188_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental(lean_object* v_opts_1190_){
_start:
{
lean_object* v_configuration_1191_; lean_object* v_longOptions_1192_; lean_object* v_options_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1202_; 
v_configuration_1191_ = lean_ctor_get(v_opts_1190_, 0);
v_longOptions_1192_ = lean_ctor_get(v_opts_1190_, 1);
v_options_1193_ = lean_ctor_get(v_opts_1190_, 2);
v_isSharedCheck_1202_ = !lean_is_exclusive(v_opts_1190_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1195_ = v_opts_1190_;
v_isShared_1196_ = v_isSharedCheck_1202_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_options_1193_);
lean_inc(v_longOptions_1192_);
lean_inc(v_configuration_1191_);
lean_dec(v_opts_1190_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1202_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1200_; 
v___x_1197_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2, &l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2);
v___x_1198_ = lean_array_push(v_options_1193_, v___x_1197_);
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 2, v___x_1198_);
v___x_1200_ = v___x_1195_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_configuration_1191_);
lean_ctor_set(v_reuseFailAlloc_1201_, 1, v_longOptions_1192_);
lean_ctor_set(v_reuseFailAlloc_1201_, 2, v___x_1198_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag(lean_object* v_opt_1204_){
_start:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1205_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag___closed__0));
v___x_1206_ = lean_string_append(v___x_1205_, v_opt_1204_);
return v___x_1206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag___boxed(lean_object* v_opt_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag(v_opt_1207_);
lean_dec_ref(v_opt_1207_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flagValue(lean_object* v_opt_1210_, uint32_t v_val_1211_){
_start:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1212_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag___closed__0));
v___x_1213_ = lean_string_append(v___x_1212_, v_opt_1210_);
v___x_1214_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flagValue___closed__0));
v___x_1215_ = lean_string_append(v___x_1213_, v___x_1214_);
v___x_1216_ = lean_int32_to_int(v_val_1211_);
v___x_1217_ = l_Int_repr(v___x_1216_);
lean_dec(v___x_1216_);
v___x_1218_ = lean_string_append(v___x_1215_, v___x_1217_);
lean_dec_ref(v___x_1217_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flagValue___boxed(lean_object* v_opt_1219_, lean_object* v_val_1220_){
_start:
{
uint32_t v_val_boxed_1221_; lean_object* v_res_1222_; 
v_val_boxed_1221_ = lean_unbox_uint32(v_val_1220_);
lean_dec(v_val_1220_);
v_res_1222_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flagValue(v_opt_1219_, v_val_boxed_1221_);
lean_dec_ref(v_opt_1219_);
return v_res_1222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__1(lean_object* v_as_1223_, size_t v_sz_1224_, size_t v_i_1225_, lean_object* v_b_1226_){
_start:
{
uint8_t v___x_1227_; 
v___x_1227_ = lean_usize_dec_lt(v_i_1225_, v_sz_1224_);
if (v___x_1227_ == 0)
{
return v_b_1226_;
}
else
{
lean_object* v_a_1228_; lean_object* v_fst_1229_; lean_object* v_snd_1230_; uint32_t v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; size_t v___x_1234_; size_t v___x_1235_; 
v_a_1228_ = lean_array_uget_borrowed(v_as_1223_, v_i_1225_);
v_fst_1229_ = lean_ctor_get(v_a_1228_, 0);
v_snd_1230_ = lean_ctor_get(v_a_1228_, 1);
v___x_1231_ = lean_unbox_uint32(v_snd_1230_);
v___x_1232_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flagValue(v_fst_1229_, v___x_1231_);
v___x_1233_ = lean_array_push(v_b_1226_, v___x_1232_);
v___x_1234_ = ((size_t)1ULL);
v___x_1235_ = lean_usize_add(v_i_1225_, v___x_1234_);
v_i_1225_ = v___x_1235_;
v_b_1226_ = v___x_1233_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__1___boxed(lean_object* v_as_1237_, lean_object* v_sz_1238_, lean_object* v_i_1239_, lean_object* v_b_1240_){
_start:
{
size_t v_sz_boxed_1241_; size_t v_i_boxed_1242_; lean_object* v_res_1243_; 
v_sz_boxed_1241_ = lean_unbox_usize(v_sz_1238_);
lean_dec(v_sz_1238_);
v_i_boxed_1242_ = lean_unbox_usize(v_i_1239_);
lean_dec(v_i_1239_);
v_res_1243_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__1(v_as_1237_, v_sz_boxed_1241_, v_i_boxed_1242_, v_b_1240_);
lean_dec_ref(v_as_1237_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__0(lean_object* v_as_1244_, size_t v_sz_1245_, size_t v_i_1246_, lean_object* v_b_1247_){
_start:
{
uint8_t v___x_1248_; 
v___x_1248_ = lean_usize_dec_lt(v_i_1246_, v_sz_1245_);
if (v___x_1248_ == 0)
{
return v_b_1247_;
}
else
{
lean_object* v_a_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; size_t v___x_1252_; size_t v___x_1253_; 
v_a_1249_ = lean_array_uget_borrowed(v_as_1244_, v_i_1246_);
v___x_1250_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag(v_a_1249_);
v___x_1251_ = lean_array_push(v_b_1247_, v___x_1250_);
v___x_1252_ = ((size_t)1ULL);
v___x_1253_ = lean_usize_add(v_i_1246_, v___x_1252_);
v_i_1246_ = v___x_1253_;
v_b_1247_ = v___x_1251_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__0___boxed(lean_object* v_as_1255_, lean_object* v_sz_1256_, lean_object* v_i_1257_, lean_object* v_b_1258_){
_start:
{
size_t v_sz_boxed_1259_; size_t v_i_boxed_1260_; lean_object* v_res_1261_; 
v_sz_boxed_1259_ = lean_unbox_usize(v_sz_1256_);
lean_dec(v_sz_1256_);
v_i_boxed_1260_ = lean_unbox_usize(v_i_1257_);
lean_dec(v_i_1257_);
v_res_1261_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__0(v_as_1255_, v_sz_boxed_1259_, v_i_boxed_1260_, v_b_1258_);
lean_dec_ref(v_as_1255_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs(lean_object* v_opts_1262_){
_start:
{
lean_object* v_configuration_1263_; lean_object* v_longOptions_1264_; lean_object* v_options_1265_; lean_object* v_args_1266_; lean_object* v___x_1267_; lean_object* v_args_1268_; size_t v_sz_1269_; size_t v___x_1270_; lean_object* v___x_1271_; size_t v_sz_1272_; lean_object* v___x_1273_; 
v_configuration_1263_ = lean_ctor_get(v_opts_1262_, 0);
v_longOptions_1264_ = lean_ctor_get(v_opts_1262_, 1);
v_options_1265_ = lean_ctor_get(v_opts_1262_, 2);
v_args_1266_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__0));
v___x_1267_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag(v_configuration_1263_);
v_args_1268_ = lean_array_push(v_args_1266_, v___x_1267_);
v_sz_1269_ = lean_array_size(v_longOptions_1264_);
v___x_1270_ = ((size_t)0ULL);
v___x_1271_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__0(v_longOptions_1264_, v_sz_1269_, v___x_1270_, v_args_1268_);
v_sz_1272_ = lean_array_size(v_options_1265_);
v___x_1273_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__1(v_options_1265_, v_sz_1272_, v___x_1270_, v___x_1271_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs___boxed(lean_object* v_opts_1274_){
_start:
{
lean_object* v_res_1275_; 
v_res_1275_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs(v_opts_1274_);
lean_dec_ref(v_opts_1274_);
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__1(lean_object* v_solver_1276_, lean_object* v_as_1277_, size_t v_sz_1278_, size_t v_i_1279_, lean_object* v_b_1280_){
_start:
{
uint8_t v___x_1282_; 
v___x_1282_ = lean_usize_dec_lt(v_i_1279_, v_sz_1278_);
if (v___x_1282_ == 0)
{
return v_b_1280_;
}
else
{
lean_object* v_a_1283_; lean_object* v_fst_1284_; lean_object* v_snd_1285_; lean_object* v___x_1286_; uint32_t v___x_1287_; uint8_t v___x_1288_; size_t v___x_1289_; size_t v___x_1290_; 
v_a_1283_ = lean_array_uget_borrowed(v_as_1277_, v_i_1279_);
v_fst_1284_ = lean_ctor_get(v_a_1283_, 0);
v_snd_1285_ = lean_ctor_get(v_a_1283_, 1);
v___x_1286_ = lean_box(0);
v___x_1287_ = lean_unbox_uint32(v_snd_1285_);
v___x_1288_ = l_Lean_Cadical_Solver_setOption(v_solver_1276_, v_fst_1284_, v___x_1287_);
v___x_1289_ = ((size_t)1ULL);
v___x_1290_ = lean_usize_add(v_i_1279_, v___x_1289_);
v_i_1279_ = v___x_1290_;
v_b_1280_ = v___x_1286_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__1___boxed(lean_object* v_solver_1292_, lean_object* v_as_1293_, lean_object* v_sz_1294_, lean_object* v_i_1295_, lean_object* v_b_1296_, lean_object* v___y_1297_){
_start:
{
size_t v_sz_boxed_1298_; size_t v_i_boxed_1299_; lean_object* v_res_1300_; 
v_sz_boxed_1298_ = lean_unbox_usize(v_sz_1294_);
lean_dec(v_sz_1294_);
v_i_boxed_1299_ = lean_unbox_usize(v_i_1295_);
lean_dec(v_i_1295_);
v_res_1300_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__1(v_solver_1292_, v_as_1293_, v_sz_boxed_1298_, v_i_boxed_1299_, v_b_1296_);
lean_dec_ref(v_as_1293_);
lean_dec_ref(v_solver_1292_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__0(lean_object* v_solver_1301_, lean_object* v_as_1302_, size_t v_sz_1303_, size_t v_i_1304_, lean_object* v_b_1305_){
_start:
{
uint8_t v___x_1307_; 
v___x_1307_ = lean_usize_dec_lt(v_i_1304_, v_sz_1303_);
if (v___x_1307_ == 0)
{
return v_b_1305_;
}
else
{
lean_object* v___x_1308_; lean_object* v_a_1309_; uint8_t v___x_1310_; size_t v___x_1311_; size_t v___x_1312_; 
v___x_1308_ = lean_box(0);
v_a_1309_ = lean_array_uget_borrowed(v_as_1302_, v_i_1304_);
v___x_1310_ = l_Lean_Cadical_Solver_setLongOption(v_solver_1301_, v_a_1309_);
v___x_1311_ = ((size_t)1ULL);
v___x_1312_ = lean_usize_add(v_i_1304_, v___x_1311_);
v_i_1304_ = v___x_1312_;
v_b_1305_ = v___x_1308_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__0___boxed(lean_object* v_solver_1314_, lean_object* v_as_1315_, lean_object* v_sz_1316_, lean_object* v_i_1317_, lean_object* v_b_1318_, lean_object* v___y_1319_){
_start:
{
size_t v_sz_boxed_1320_; size_t v_i_boxed_1321_; lean_object* v_res_1322_; 
v_sz_boxed_1320_ = lean_unbox_usize(v_sz_1316_);
lean_dec(v_sz_1316_);
v_i_boxed_1321_ = lean_unbox_usize(v_i_1317_);
lean_dec(v_i_1317_);
v_res_1322_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__0(v_solver_1314_, v_as_1315_, v_sz_boxed_1320_, v_i_boxed_1321_, v_b_1318_);
lean_dec_ref(v_as_1315_);
lean_dec_ref(v_solver_1314_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver(lean_object* v_opts_1323_, lean_object* v_solver_1324_){
_start:
{
lean_object* v_configuration_1326_; lean_object* v_longOptions_1327_; lean_object* v_options_1328_; uint8_t v___x_1329_; lean_object* v___x_1330_; size_t v_sz_1331_; size_t v___x_1332_; lean_object* v___x_1333_; size_t v_sz_1334_; lean_object* v___x_1335_; 
v_configuration_1326_ = lean_ctor_get(v_opts_1323_, 0);
v_longOptions_1327_ = lean_ctor_get(v_opts_1323_, 1);
v_options_1328_ = lean_ctor_get(v_opts_1323_, 2);
v___x_1329_ = l_Lean_Cadical_Solver_configure(v_solver_1324_, v_configuration_1326_);
v___x_1330_ = lean_box(0);
v_sz_1331_ = lean_array_size(v_longOptions_1327_);
v___x_1332_ = ((size_t)0ULL);
v___x_1333_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__0(v_solver_1324_, v_longOptions_1327_, v_sz_1331_, v___x_1332_, v___x_1330_);
v_sz_1334_ = lean_array_size(v_options_1328_);
v___x_1335_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__1(v_solver_1324_, v_options_1328_, v_sz_1334_, v___x_1332_, v___x_1330_);
return v___x_1330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver___boxed(lean_object* v_opts_1336_, lean_object* v_solver_1337_, lean_object* v_a_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver(v_opts_1336_, v_solver_1337_);
lean_dec_ref(v_solver_1337_);
lean_dec_ref(v_opts_1336_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_satQuery(lean_object* v_solverPath_1351_, lean_object* v_problemPath_1352_, lean_object* v_proofOutput_1353_, lean_object* v_timeout_1354_, uint8_t v_binaryProofs_1355_, uint8_t v_mode_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_){
_start:
{
lean_object* v___x_1360_; lean_object* v_options_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v_args_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; uint8_t v___x_1372_; uint8_t v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1360_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode(v_mode_1356_);
v_options_1361_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat(v___x_1360_, v_binaryProofs_1355_);
v___x_1362_ = lean_unsigned_to_nat(2u);
v___x_1363_ = lean_mk_empty_array_with_capacity(v___x_1362_);
v___x_1364_ = lean_array_push(v___x_1363_, v_problemPath_1352_);
v___x_1365_ = lean_array_push(v___x_1364_, v_proofOutput_1353_);
v___x_1366_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs(v_options_1361_);
lean_dec_ref(v_options_1361_);
v_args_1367_ = l_Array_append___redArg(v___x_1365_, v___x_1366_);
lean_dec_ref(v___x_1366_);
v___x_1368_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__0));
v___x_1369_ = lean_box(0);
v___x_1370_ = lean_unsigned_to_nat(0u);
v___x_1371_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__1));
v___x_1372_ = 1;
v___x_1373_ = 0;
v___x_1374_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1374_, 0, v___x_1368_);
lean_ctor_set(v___x_1374_, 1, v_solverPath_1351_);
lean_ctor_set(v___x_1374_, 2, v_args_1367_);
lean_ctor_set(v___x_1374_, 3, v___x_1369_);
lean_ctor_set(v___x_1374_, 4, v___x_1371_);
lean_ctor_set_uint8(v___x_1374_, sizeof(void*)*5, v___x_1372_);
lean_ctor_set_uint8(v___x_1374_, sizeof(void*)*5 + 1, v___x_1373_);
v___x_1375_ = l_Lean_Meta_Tactic_BVDecide_External_runInterruptible(v_timeout_1354_, v___x_1374_, v_a_1357_, v_a_1358_);
if (lean_obj_tag(v___x_1375_) == 0)
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1449_; 
v_a_1376_ = lean_ctor_get(v___x_1375_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1378_ = v___x_1375_;
v_isShared_1379_ = v_isSharedCheck_1449_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1375_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1449_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
if (lean_obj_tag(v_a_1376_) == 0)
{
lean_object* v_x_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1447_; 
v_x_1380_ = lean_ctor_get(v_a_1376_, 0);
v_isSharedCheck_1447_ = !lean_is_exclusive(v_a_1376_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1382_ = v_a_1376_;
v_isShared_1383_ = v_isSharedCheck_1447_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_x_1380_);
lean_dec(v_a_1376_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1447_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
uint32_t v_exitCode_1384_; lean_object* v_stdout_1385_; lean_object* v_stderr_1386_; uint32_t v___x_1433_; uint8_t v___x_1434_; 
v_exitCode_1384_ = lean_ctor_get_uint32(v_x_1380_, sizeof(void*)*2);
v_stdout_1385_ = lean_ctor_get(v_x_1380_, 0);
lean_inc_ref(v_stdout_1385_);
v_stderr_1386_ = lean_ctor_get(v_x_1380_, 1);
lean_inc_ref(v_stderr_1386_);
lean_dec(v_x_1380_);
v___x_1433_ = 255;
v___x_1434_ = lean_uint32_dec_eq(v_exitCode_1384_, v___x_1433_);
if (v___x_1434_ == 0)
{
lean_object* v___x_1435_; lean_object* v___x_1436_; uint8_t v___x_1437_; 
v___x_1435_ = lean_string_utf8_byte_size(v_stdout_1385_);
v___x_1436_ = lean_unsigned_to_nat(15u);
v___x_1437_ = lean_nat_dec_le(v___x_1436_, v___x_1435_);
if (v___x_1437_ == 0)
{
goto v___jp_1398_;
}
else
{
lean_object* v___x_1438_; uint8_t v___x_1439_; 
v___x_1438_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__6));
v___x_1439_ = lean_string_memcmp(v_stdout_1385_, v___x_1438_, v___x_1370_, v___x_1370_, v___x_1436_);
if (v___x_1439_ == 0)
{
goto v___jp_1398_;
}
else
{
lean_object* v___x_1440_; lean_object* v___x_1441_; 
lean_dec_ref(v_stderr_1386_);
lean_dec_ref(v_stdout_1385_);
lean_del_object(v___x_1382_);
lean_del_object(v___x_1378_);
v___x_1440_ = lean_box(1);
v___x_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
return v___x_1441_;
}
}
}
else
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
lean_dec_ref(v_stdout_1385_);
lean_del_object(v___x_1382_);
lean_del_object(v___x_1378_);
v___x_1442_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__7));
v___x_1443_ = lean_string_append(v___x_1442_, v_stderr_1386_);
lean_dec_ref(v_stderr_1386_);
v___x_1444_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
v___x_1445_ = l_Lean_MessageData_ofFormat(v___x_1444_);
v___x_1446_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg(v___x_1445_, v_a_1357_, v_a_1358_);
return v___x_1446_;
}
v___jp_1387_:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1394_; 
v___x_1388_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__2));
v___x_1389_ = lean_string_append(v___x_1388_, v_stdout_1385_);
lean_dec_ref(v_stdout_1385_);
v___x_1390_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__3));
v___x_1391_ = lean_string_append(v___x_1389_, v___x_1390_);
v___x_1392_ = lean_string_append(v___x_1391_, v_stderr_1386_);
lean_dec_ref(v_stderr_1386_);
if (v_isShared_1383_ == 0)
{
lean_ctor_set_tag(v___x_1382_, 3);
lean_ctor_set(v___x_1382_, 0, v___x_1392_);
v___x_1394_ = v___x_1382_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v___x_1392_);
v___x_1394_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
lean_object* v___x_1395_; lean_object* v___x_1396_; 
v___x_1395_ = l_Lean_MessageData_ofFormat(v___x_1394_);
v___x_1396_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg(v___x_1395_, v_a_1357_, v_a_1358_);
return v___x_1396_;
}
}
v___jp_1398_:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; uint8_t v___x_1401_; 
v___x_1399_ = lean_string_utf8_byte_size(v_stdout_1385_);
v___x_1400_ = lean_unsigned_to_nat(13u);
v___x_1401_ = lean_nat_dec_le(v___x_1400_, v___x_1399_);
if (v___x_1401_ == 0)
{
lean_del_object(v___x_1378_);
goto v___jp_1387_;
}
else
{
lean_object* v___x_1402_; uint8_t v___x_1403_; 
v___x_1402_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__0));
v___x_1403_ = lean_string_memcmp(v_stdout_1385_, v___x_1402_, v___x_1370_, v___x_1370_, v___x_1400_);
if (v___x_1403_ == 0)
{
lean_del_object(v___x_1378_);
goto v___jp_1387_;
}
else
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
lean_dec_ref(v_stderr_1386_);
lean_del_object(v___x_1382_);
v___x_1404_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parse), 1, 0);
lean_inc_ref(v_stdout_1385_);
v___x_1405_ = lean_string_to_utf8(v_stdout_1385_);
v___x_1406_ = l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(v___x_1404_, v___x_1405_);
if (lean_obj_tag(v___x_1406_) == 0)
{
lean_object* v_a_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1421_; 
lean_del_object(v___x_1378_);
v_a_1407_ = lean_ctor_get(v___x_1406_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1406_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1409_ = v___x_1406_;
v_isShared_1410_ = v_isSharedCheck_1421_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_a_1407_);
lean_dec(v___x_1406_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1421_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1417_; 
v___x_1411_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__4));
v___x_1412_ = lean_string_append(v___x_1411_, v_a_1407_);
lean_dec(v_a_1407_);
v___x_1413_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__5));
v___x_1414_ = lean_string_append(v___x_1412_, v___x_1413_);
v___x_1415_ = lean_string_append(v___x_1414_, v_stdout_1385_);
lean_dec_ref(v_stdout_1385_);
if (v_isShared_1410_ == 0)
{
lean_ctor_set_tag(v___x_1409_, 3);
lean_ctor_set(v___x_1409_, 0, v___x_1415_);
v___x_1417_ = v___x_1409_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v___x_1415_);
v___x_1417_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1418_ = l_Lean_MessageData_ofFormat(v___x_1417_);
v___x_1419_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg(v___x_1418_, v_a_1357_, v_a_1358_);
return v___x_1419_;
}
}
}
else
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1432_; 
lean_dec_ref(v_stdout_1385_);
v_a_1422_ = lean_ctor_get(v___x_1406_, 0);
v_isSharedCheck_1432_ = !lean_is_exclusive(v___x_1406_);
if (v_isSharedCheck_1432_ == 0)
{
v___x_1424_ = v___x_1406_;
v_isShared_1425_ = v_isSharedCheck_1432_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1406_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1432_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
lean_ctor_set_tag(v___x_1424_, 0);
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
lean_object* v___x_1429_; 
if (v_isShared_1379_ == 0)
{
lean_ctor_set(v___x_1378_, 0, v___x_1427_);
v___x_1429_ = v___x_1378_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v___x_1427_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
return v___x_1429_;
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
lean_object* v___x_1448_; 
lean_del_object(v___x_1378_);
v___x_1448_ = l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg(v_a_1357_, v_a_1358_);
return v___x_1448_;
}
}
}
else
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
v_a_1450_ = lean_ctor_get(v___x_1375_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1375_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1375_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_satQuery___boxed(lean_object* v_solverPath_1458_, lean_object* v_problemPath_1459_, lean_object* v_proofOutput_1460_, lean_object* v_timeout_1461_, lean_object* v_binaryProofs_1462_, lean_object* v_mode_1463_, lean_object* v_a_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_){
_start:
{
uint8_t v_binaryProofs_boxed_1467_; uint8_t v_mode_boxed_1468_; lean_object* v_res_1469_; 
v_binaryProofs_boxed_1467_ = lean_unbox(v_binaryProofs_1462_);
v_mode_boxed_1468_ = lean_unbox(v_mode_1463_);
v_res_1469_ = l_Lean_Meta_Tactic_BVDecide_External_satQuery(v_solverPath_1458_, v_problemPath_1459_, v_proofOutput_1460_, v_timeout_1461_, v_binaryProofs_boxed_1467_, v_mode_boxed_1468_, v_a_1464_, v_a_1465_);
lean_dec(v_a_1465_);
lean_dec_ref(v_a_1464_);
lean_dec(v_timeout_1461_);
return v_res_1469_;
}
}
lean_object* runtime_initialize_Std_Tactic_BVDecide_LRAT_Parser(uint8_t builtin);
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_BVDecide_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Cadical_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_External(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Tactic_BVDecide_LRAT_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Cadical_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3___boxed__const__1 = _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3___boxed__const__1();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3___boxed__const__1);
l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2___boxed__const__1 = _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2___boxed__const__1();
lean_mark_persistent(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_External(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Tactic_BVDecide_LRAT_Parser(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Cadical_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_External(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_BVDecide_LRAT_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Cadical_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_External(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_External(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_External(builtin);
}
#ifdef __cplusplus
}
#endif
