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
lean_object* v___x_62_; uint8_t v_isShared_63_; uint8_t v_isSharedCheck_144_; 
lean_inc(v_idx_51_);
lean_inc_ref(v_array_50_);
v_isSharedCheck_144_ = !lean_is_exclusive(v_a_49_);
if (v_isSharedCheck_144_ == 0)
{
lean_object* v_unused_145_; lean_object* v_unused_146_; 
v_unused_145_ = lean_ctor_get(v_a_49_, 1);
lean_dec(v_unused_145_);
v_unused_146_ = lean_ctor_get(v_a_49_, 0);
lean_dec(v_unused_146_);
v___x_62_ = v_a_49_;
v_isShared_63_ = v_isSharedCheck_144_;
goto v_resetjp_61_;
}
else
{
lean_dec(v_a_49_);
v___x_62_ = lean_box(0);
v_isShared_63_ = v_isSharedCheck_144_;
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
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v_array_50_);
lean_ctor_set(v_reuseFailAlloc_143_, 1, v___x_65_);
v___x_67_ = v_reuseFailAlloc_143_;
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
if (v___x_76_ == 0)
{
lean_object* v___x_104_; lean_object* v___x_105_; 
lean_dec(v___x_65_);
lean_dec_ref(v_array_50_);
v___x_104_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__7));
v___x_105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_67_);
lean_ctor_set(v___x_105_, 1, v___x_104_);
return v___x_105_;
}
else
{
lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_111_; 
lean_dec_ref(v___x_67_);
v___x_106_ = lean_nat_add(v___x_65_, v___x_64_);
lean_dec(v___x_65_);
lean_inc(v___x_106_);
lean_inc_ref(v_array_50_);
v___x_107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_107_, 0, v_array_50_);
lean_ctor_set(v___x_107_, 1, v___x_106_);
v___x_111_ = lean_nat_dec_lt(v___x_106_, v___x_52_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; lean_object* v___x_113_; 
lean_dec(v___x_106_);
lean_dec_ref(v_array_50_);
v___x_112_ = lean_box(0);
v___x_113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_107_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
return v___x_113_;
}
else
{
uint8_t v_c_114_; uint8_t v___x_115_; uint8_t v___x_116_; 
v_c_114_ = lean_byte_array_fget(v_array_50_, v___x_106_);
v___x_115_ = 48;
v___x_116_ = lean_uint8_dec_le(v___x_115_, v_c_114_);
if (v___x_116_ == 0)
{
lean_dec(v___x_106_);
lean_dec_ref(v_array_50_);
goto v___jp_108_;
}
else
{
uint8_t v___x_117_; uint8_t v___x_118_; 
v___x_117_ = 57;
v___x_118_ = lean_uint8_dec_le(v_c_114_, v___x_117_);
if (v___x_118_ == 0)
{
lean_dec(v___x_106_);
lean_dec_ref(v_array_50_);
goto v___jp_108_;
}
else
{
lean_object* v___x_119_; lean_object* v_it_x27_120_; uint32_t v___x_121_; uint8_t v___x_122_; uint8_t v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v_fst_126_; lean_object* v_snd_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_142_; 
lean_dec_ref_known(v___x_107_, 2);
v___x_119_ = lean_nat_add(v___x_106_, v___x_64_);
lean_dec(v___x_106_);
v_it_x27_120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_120_, 0, v_array_50_);
lean_ctor_set(v_it_x27_120_, 1, v___x_119_);
v___x_121_ = lean_uint8_to_uint32(v_c_114_);
v___x_122_ = lean_uint32_to_uint8(v___x_121_);
v___x_123_ = lean_uint8_sub(v___x_122_, v___x_115_);
v___x_124_ = lean_uint8_to_nat(v___x_123_);
v___x_125_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_120_, v___x_124_);
v_fst_126_ = lean_ctor_get(v___x_125_, 0);
v_snd_127_ = lean_ctor_get(v___x_125_, 1);
v_isSharedCheck_142_ = !lean_is_exclusive(v___x_125_);
if (v_isSharedCheck_142_ == 0)
{
v___x_129_ = v___x_125_;
v_isShared_130_ = v_isSharedCheck_142_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_snd_127_);
lean_inc(v_fst_126_);
lean_dec(v___x_125_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_142_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_131_ = lean_unsigned_to_nat(0u);
v___x_132_ = lean_nat_dec_eq(v_fst_126_, v___x_131_);
if (v___x_132_ == 0)
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_136_; 
v___x_133_ = lean_nat_to_int(v_fst_126_);
v___x_134_ = lean_int_neg(v___x_133_);
lean_dec(v___x_133_);
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 1, v___x_134_);
lean_ctor_set(v___x_129_, 0, v_snd_127_);
v___x_136_ = v___x_129_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_snd_127_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v___x_134_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
else
{
lean_object* v___x_138_; lean_object* v___x_140_; 
lean_dec(v_fst_126_);
v___x_138_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__5));
if (v_isShared_130_ == 0)
{
lean_ctor_set_tag(v___x_129_, 1);
lean_ctor_set(v___x_129_, 1, v___x_138_);
lean_ctor_set(v___x_129_, 0, v_snd_127_);
v___x_140_ = v___x_129_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v_snd_127_);
lean_ctor_set(v_reuseFailAlloc_141_, 1, v___x_138_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
}
}
}
v___jp_108_:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__3));
v___x_110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_107_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
return v___x_110_;
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
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__0(lean_object* v_a_147_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = lean_nat_to_int(v_a_147_);
return v___x_148_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2___closed__0(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_unsigned_to_nat(0u);
v___x_150_ = lean_nat_to_int(v___x_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2(size_t v_sz_151_, size_t v_i_152_, lean_object* v_bs_153_){
_start:
{
uint8_t v___x_154_; 
v___x_154_ = lean_usize_dec_lt(v_i_152_, v_sz_151_);
if (v___x_154_ == 0)
{
return v_bs_153_;
}
else
{
lean_object* v_v_155_; lean_object* v___x_156_; lean_object* v_bs_x27_157_; lean_object* v___x_158_; uint8_t v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; size_t v___x_163_; size_t v___x_164_; lean_object* v___x_165_; 
v_v_155_ = lean_array_uget(v_bs_153_, v_i_152_);
v___x_156_ = lean_unsigned_to_nat(0u);
v_bs_x27_157_ = lean_array_uset(v_bs_153_, v_i_152_, v___x_156_);
v___x_158_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2___closed__0);
v___x_159_ = lean_int_dec_lt(v___x_158_, v_v_155_);
v___x_160_ = lean_nat_abs(v_v_155_);
lean_dec(v_v_155_);
v___x_161_ = lean_box(v___x_159_);
v___x_162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
lean_ctor_set(v___x_162_, 1, v___x_160_);
v___x_163_ = ((size_t)1ULL);
v___x_164_ = lean_usize_add(v_i_152_, v___x_163_);
v___x_165_ = lean_array_uset(v_bs_x27_157_, v_i_152_, v___x_162_);
v_i_152_ = v___x_164_;
v_bs_153_ = v___x_165_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2___boxed(lean_object* v_sz_167_, lean_object* v_i_168_, lean_object* v_bs_169_){
_start:
{
size_t v_sz_boxed_170_; size_t v_i_boxed_171_; lean_object* v_res_172_; 
v_sz_boxed_170_ = lean_unbox_usize(v_sz_167_);
lean_dec(v_sz_167_);
v_i_boxed_171_ = lean_unbox_usize(v_i_168_);
lean_dec(v_i_168_);
v_res_172_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2(v_sz_boxed_170_, v_i_boxed_171_, v_bs_169_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__1(lean_object* v_acc_173_, lean_object* v_a_174_){
_start:
{
lean_object* v_pos_176_; lean_object* v_res_177_; lean_object* v_array_180_; lean_object* v_idx_181_; lean_object* v_pos_183_; lean_object* v_idx_184_; lean_object* v_err_185_; lean_object* v___x_193_; uint8_t v___x_194_; 
v_array_180_ = lean_ctor_get(v_a_174_, 0);
v_idx_181_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_idx_181_);
v___x_193_ = lean_byte_array_size(v_array_180_);
v___x_194_ = lean_nat_dec_lt(v_idx_181_, v___x_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; 
v___x_195_ = lean_box(0);
lean_inc(v_idx_181_);
v_pos_183_ = v_a_174_;
v_idx_184_ = v_idx_181_;
v_err_185_ = v___x_195_;
goto v___jp_182_;
}
else
{
uint8_t v___x_196_; uint8_t v_got_197_; uint8_t v___x_198_; 
v___x_196_ = 32;
v_got_197_ = lean_byte_array_fget(v_array_180_, v_idx_181_);
v___x_198_ = lean_uint8_dec_eq(v_got_197_, v___x_196_);
if (v___x_198_ == 0)
{
lean_object* v___x_199_; 
v___x_199_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__1));
lean_inc(v_idx_181_);
v_pos_183_ = v_a_174_;
v_idx_184_ = v_idx_181_;
v_err_185_ = v___x_199_;
goto v___jp_182_;
}
else
{
lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_200_ = lean_unsigned_to_nat(1u);
v___x_201_ = lean_nat_add(v_idx_181_, v___x_200_);
v___x_202_ = lean_nat_dec_lt(v___x_201_, v___x_193_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; 
lean_dec(v___x_201_);
v___x_203_ = lean_box(0);
lean_inc(v_idx_181_);
v_pos_183_ = v_a_174_;
v_idx_184_ = v_idx_181_;
v_err_185_ = v___x_203_;
goto v___jp_182_;
}
else
{
uint8_t v___x_204_; uint8_t v___x_205_; uint8_t v___x_206_; 
v___x_204_ = lean_byte_array_fget(v_array_180_, v___x_201_);
v___x_205_ = 45;
v___x_206_ = lean_uint8_dec_eq(v___x_204_, v___x_205_);
if (v___x_206_ == 0)
{
uint8_t v___x_207_; uint8_t v___x_208_; 
v___x_207_ = 48;
v___x_208_ = lean_uint8_dec_le(v___x_207_, v___x_204_);
if (v___x_208_ == 0)
{
lean_dec(v___x_201_);
goto v___jp_191_;
}
else
{
uint8_t v___x_209_; uint8_t v___x_210_; 
v___x_209_ = 57;
v___x_210_ = lean_uint8_dec_le(v___x_204_, v___x_209_);
if (v___x_210_ == 0)
{
lean_dec(v___x_201_);
goto v___jp_191_;
}
else
{
lean_object* v___x_211_; lean_object* v_it_x27_212_; uint32_t v___x_213_; uint8_t v___x_214_; uint8_t v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v_fst_218_; lean_object* v_snd_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_211_ = lean_nat_add(v___x_201_, v___x_200_);
lean_dec(v___x_201_);
lean_inc_ref(v_array_180_);
v_it_x27_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_212_, 0, v_array_180_);
lean_ctor_set(v_it_x27_212_, 1, v___x_211_);
v___x_213_ = lean_uint8_to_uint32(v___x_204_);
v___x_214_ = lean_uint32_to_uint8(v___x_213_);
v___x_215_ = lean_uint8_sub(v___x_214_, v___x_207_);
v___x_216_ = lean_uint8_to_nat(v___x_215_);
v___x_217_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_212_, v___x_216_);
v_fst_218_ = lean_ctor_get(v___x_217_, 0);
lean_inc(v_fst_218_);
v_snd_219_ = lean_ctor_get(v___x_217_, 1);
lean_inc(v_snd_219_);
lean_dec_ref(v___x_217_);
v___x_220_ = lean_unsigned_to_nat(0u);
v___x_221_ = lean_nat_dec_eq(v_fst_218_, v___x_220_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; 
lean_dec(v_idx_181_);
lean_dec_ref(v_a_174_);
v___x_222_ = lean_nat_to_int(v_fst_218_);
v_pos_176_ = v_snd_219_;
v_res_177_ = v___x_222_;
goto v___jp_175_;
}
else
{
lean_object* v___x_223_; 
lean_dec(v_snd_219_);
lean_dec(v_fst_218_);
v___x_223_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__5));
lean_inc(v_idx_181_);
v_pos_183_ = v_a_174_;
v_idx_184_ = v_idx_181_;
v_err_185_ = v___x_223_;
goto v___jp_182_;
}
}
}
}
else
{
if (v___x_206_ == 0)
{
lean_object* v___x_224_; 
lean_dec(v___x_201_);
v___x_224_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__7));
lean_inc(v_idx_181_);
v_pos_183_ = v_a_174_;
v_idx_184_ = v_idx_181_;
v_err_185_ = v___x_224_;
goto v___jp_182_;
}
else
{
lean_object* v___x_225_; uint8_t v___x_226_; 
v___x_225_ = lean_nat_add(v___x_201_, v___x_200_);
lean_dec(v___x_201_);
v___x_226_ = lean_nat_dec_lt(v___x_225_, v___x_193_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; 
lean_dec(v___x_225_);
v___x_227_ = lean_box(0);
lean_inc(v_idx_181_);
v_pos_183_ = v_a_174_;
v_idx_184_ = v_idx_181_;
v_err_185_ = v___x_227_;
goto v___jp_182_;
}
else
{
uint8_t v_c_228_; uint8_t v___x_229_; uint8_t v___x_230_; 
v_c_228_ = lean_byte_array_fget(v_array_180_, v___x_225_);
v___x_229_ = 48;
v___x_230_ = lean_uint8_dec_le(v___x_229_, v_c_228_);
if (v___x_230_ == 0)
{
lean_dec(v___x_225_);
goto v___jp_189_;
}
else
{
uint8_t v___x_231_; uint8_t v___x_232_; 
v___x_231_ = 57;
v___x_232_ = lean_uint8_dec_le(v_c_228_, v___x_231_);
if (v___x_232_ == 0)
{
lean_dec(v___x_225_);
goto v___jp_189_;
}
else
{
lean_object* v___x_233_; lean_object* v_it_x27_234_; uint32_t v___x_235_; uint8_t v___x_236_; uint8_t v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v_fst_240_; lean_object* v_snd_241_; lean_object* v___x_242_; uint8_t v___x_243_; 
v___x_233_ = lean_nat_add(v___x_225_, v___x_200_);
lean_dec(v___x_225_);
lean_inc_ref(v_array_180_);
v_it_x27_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_234_, 0, v_array_180_);
lean_ctor_set(v_it_x27_234_, 1, v___x_233_);
v___x_235_ = lean_uint8_to_uint32(v_c_228_);
v___x_236_ = lean_uint32_to_uint8(v___x_235_);
v___x_237_ = lean_uint8_sub(v___x_236_, v___x_229_);
v___x_238_ = lean_uint8_to_nat(v___x_237_);
v___x_239_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_digitsCore_go(v_it_x27_234_, v___x_238_);
v_fst_240_ = lean_ctor_get(v___x_239_, 0);
lean_inc(v_fst_240_);
v_snd_241_ = lean_ctor_get(v___x_239_, 1);
lean_inc(v_snd_241_);
lean_dec_ref(v___x_239_);
v___x_242_ = lean_unsigned_to_nat(0u);
v___x_243_ = lean_nat_dec_eq(v_fst_240_, v___x_242_);
if (v___x_243_ == 0)
{
lean_object* v___x_244_; lean_object* v___x_245_; 
lean_dec(v_idx_181_);
lean_dec_ref(v_a_174_);
v___x_244_ = lean_nat_to_int(v_fst_240_);
v___x_245_ = lean_int_neg(v___x_244_);
lean_dec(v___x_244_);
v_pos_176_ = v_snd_241_;
v_res_177_ = v___x_245_;
goto v___jp_175_;
}
else
{
lean_object* v___x_246_; 
lean_dec(v_snd_241_);
lean_dec(v_fst_240_);
v___x_246_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__5));
lean_inc(v_idx_181_);
v_pos_183_ = v_a_174_;
v_idx_184_ = v_idx_181_;
v_err_185_ = v___x_246_;
goto v___jp_182_;
}
}
}
}
}
}
}
}
}
v___jp_175_:
{
lean_object* v___x_178_; 
v___x_178_ = lean_array_push(v_acc_173_, v_res_177_);
v_acc_173_ = v___x_178_;
v_a_174_ = v_pos_176_;
goto _start;
}
v___jp_182_:
{
uint8_t v___x_186_; 
v___x_186_ = lean_nat_dec_eq(v_idx_181_, v_idx_184_);
lean_dec(v_idx_184_);
lean_dec(v_idx_181_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; 
lean_dec_ref(v_acc_173_);
lean_inc(v_err_185_);
v___x_187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_187_, 0, v_pos_183_);
lean_ctor_set(v___x_187_, 1, v_err_185_);
return v___x_187_;
}
else
{
lean_object* v___x_188_; 
v___x_188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_188_, 0, v_pos_183_);
lean_ctor_set(v___x_188_, 1, v_acc_173_);
return v___x_188_;
}
}
v___jp_189_:
{
lean_object* v___x_190_; 
v___x_190_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__3));
lean_inc(v_idx_181_);
v_pos_183_ = v_a_174_;
v_idx_184_ = v_idx_181_;
v_err_185_ = v___x_190_;
goto v___jp_182_;
}
v___jp_191_:
{
lean_object* v___x_192_; 
v___x_192_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__3));
lean_inc(v_idx_181_);
v_pos_183_ = v_a_174_;
v_idx_184_ = v_idx_181_;
v_err_185_ = v___x_192_;
goto v___jp_182_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__4(void){
_start:
{
lean_object* v___x_253_; lean_object* v_utf8_254_; 
v___x_253_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__3));
v_utf8_254_ = lean_string_to_utf8(v___x_253_);
return v_utf8_254_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6(void){
_start:
{
lean_object* v___x_256_; lean_object* v_utf8_257_; 
v___x_256_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__5));
v_utf8_257_ = lean_string_to_utf8(v___x_256_);
return v_utf8_257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment(lean_object* v_a_261_){
_start:
{
lean_object* v_array_262_; lean_object* v_idx_263_; lean_object* v___x_264_; uint8_t v___x_265_; 
v_array_262_ = lean_ctor_get(v_a_261_, 0);
v_idx_263_ = lean_ctor_get(v_a_261_, 1);
v___x_264_ = lean_byte_array_size(v_array_262_);
v___x_265_ = lean_nat_dec_lt(v_idx_263_, v___x_264_);
if (v___x_265_ == 0)
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = lean_box(0);
v___x_267_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_267_, 0, v_a_261_);
lean_ctor_set(v___x_267_, 1, v___x_266_);
return v___x_267_;
}
else
{
uint8_t v___x_268_; uint8_t v_got_269_; uint8_t v___x_270_; 
v___x_268_ = 118;
v_got_269_ = lean_byte_array_fget(v_array_262_, v_idx_263_);
v___x_270_ = lean_uint8_dec_eq(v_got_269_, v___x_268_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_271_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__1));
v___x_272_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_272_, 0, v_a_261_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
return v___x_272_;
}
else
{
lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_384_; 
lean_inc(v_idx_263_);
lean_inc_ref(v_array_262_);
v_isSharedCheck_384_ = !lean_is_exclusive(v_a_261_);
if (v_isSharedCheck_384_ == 0)
{
lean_object* v_unused_385_; lean_object* v_unused_386_; 
v_unused_385_ = lean_ctor_get(v_a_261_, 1);
lean_dec(v_unused_385_);
v_unused_386_ = lean_ctor_get(v_a_261_, 0);
lean_dec(v_unused_386_);
v___x_274_ = v_a_261_;
v_isShared_275_ = v_isSharedCheck_384_;
goto v_resetjp_273_;
}
else
{
lean_dec(v_a_261_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_384_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_279_; 
v___x_276_ = lean_unsigned_to_nat(1u);
v___x_277_ = lean_nat_add(v_idx_263_, v___x_276_);
lean_dec(v_idx_263_);
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 1, v___x_277_);
v___x_279_ = v___x_274_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_array_262_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v___x_277_);
v___x_279_ = v_reuseFailAlloc_383_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__2));
v___x_281_ = l_Std_Internal_Parsec_manyCore___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__1(v___x_280_, v___x_279_);
if (lean_obj_tag(v___x_281_) == 0)
{
lean_object* v_pos_282_; lean_object* v_res_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_373_; 
v_pos_282_ = lean_ctor_get(v___x_281_, 0);
v_res_283_ = lean_ctor_get(v___x_281_, 1);
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_281_);
if (v_isSharedCheck_373_ == 0)
{
v___x_285_ = v___x_281_;
v_isShared_286_ = v_isSharedCheck_373_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_res_283_);
lean_inc(v_pos_282_);
lean_dec(v___x_281_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_373_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
size_t v_sz_287_; size_t v___x_288_; lean_object* v___x_289_; lean_object* v_pos_291_; lean_object* v_utf8_298_; lean_object* v___x_299_; 
v_sz_287_ = lean_array_size(v_res_283_);
v___x_288_ = ((size_t)0ULL);
v___x_289_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_spec__2(v_sz_287_, v___x_288_, v_res_283_);
v_utf8_298_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__4, &l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__4_once, _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__4);
lean_inc(v_pos_282_);
v___x_299_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_298_, v_pos_282_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v_pos_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_309_; 
lean_del_object(v___x_285_);
lean_dec(v_pos_282_);
v_pos_300_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_309_ == 0)
{
lean_object* v_unused_310_; 
v_unused_310_ = lean_ctor_get(v___x_299_, 1);
lean_dec(v_unused_310_);
v___x_302_ = v___x_299_;
v_isShared_303_ = v_isSharedCheck_309_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_pos_300_);
lean_dec(v___x_299_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_309_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_307_; 
v___x_304_ = lean_box(v___x_270_);
v___x_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v___x_289_);
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 1, v___x_305_);
v___x_307_ = v___x_302_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_pos_300_);
lean_ctor_set(v_reuseFailAlloc_308_, 1, v___x_305_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
else
{
lean_object* v_pos_311_; lean_object* v_err_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_372_; 
v_pos_311_ = lean_ctor_get(v___x_299_, 0);
v_err_312_ = lean_ctor_get(v___x_299_, 1);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_372_ == 0)
{
v___x_314_ = v___x_299_;
v_isShared_315_ = v_isSharedCheck_372_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_err_312_);
lean_inc(v_pos_311_);
lean_dec(v___x_299_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_372_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v_idx_316_; lean_object* v_array_317_; lean_object* v_idx_318_; lean_object* v___y_320_; lean_object* v_pos_321_; lean_object* v_idx_322_; uint8_t v___x_345_; 
v_idx_316_ = lean_ctor_get(v_pos_282_, 1);
lean_inc(v_idx_316_);
lean_dec(v_pos_282_);
v_array_317_ = lean_ctor_get(v_pos_311_, 0);
v_idx_318_ = lean_ctor_get(v_pos_311_, 1);
v___x_345_ = lean_nat_dec_eq(v_idx_316_, v_idx_318_);
lean_dec(v_idx_316_);
if (v___x_345_ == 0)
{
lean_object* v___x_347_; 
lean_dec_ref(v___x_289_);
lean_del_object(v___x_285_);
if (v_isShared_315_ == 0)
{
v___x_347_ = v___x_314_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_pos_311_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v_err_312_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
else
{
lean_object* v___x_349_; uint8_t v___x_350_; 
lean_inc(v_idx_318_);
lean_dec(v_err_312_);
v___x_349_ = lean_byte_array_size(v_array_317_);
v___x_350_ = lean_nat_dec_lt(v_idx_318_, v___x_349_);
if (v___x_350_ == 0)
{
lean_object* v___x_351_; lean_object* v___x_353_; 
v___x_351_ = lean_box(0);
lean_inc(v_pos_311_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v___x_351_);
v___x_353_ = v___x_314_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_pos_311_);
lean_ctor_set(v_reuseFailAlloc_354_, 1, v___x_351_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
lean_inc(v_idx_318_);
v___y_320_ = v___x_353_;
v_pos_321_ = v_pos_311_;
v_idx_322_ = v_idx_318_;
goto v___jp_319_;
}
}
else
{
uint8_t v___x_355_; uint8_t v_got_356_; uint8_t v___x_357_; 
v___x_355_ = 10;
v_got_356_ = lean_byte_array_fget(v_array_317_, v_idx_318_);
v___x_357_ = lean_uint8_dec_eq(v_got_356_, v___x_355_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; lean_object* v___x_360_; 
v___x_358_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8));
lean_inc(v_pos_311_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v___x_358_);
v___x_360_ = v___x_314_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_pos_311_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v___x_358_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
lean_inc(v_idx_318_);
v___y_320_ = v___x_360_;
v_pos_321_ = v_pos_311_;
v_idx_322_ = v_idx_318_;
goto v___jp_319_;
}
}
else
{
lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_369_; 
lean_inc_ref(v_array_317_);
lean_del_object(v___x_314_);
v_isSharedCheck_369_ = !lean_is_exclusive(v_pos_311_);
if (v_isSharedCheck_369_ == 0)
{
lean_object* v_unused_370_; lean_object* v_unused_371_; 
v_unused_370_ = lean_ctor_get(v_pos_311_, 1);
lean_dec(v_unused_370_);
v_unused_371_ = lean_ctor_get(v_pos_311_, 0);
lean_dec(v_unused_371_);
v___x_363_ = v_pos_311_;
v_isShared_364_ = v_isSharedCheck_369_;
goto v_resetjp_362_;
}
else
{
lean_dec(v_pos_311_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_369_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v___x_365_; lean_object* v___x_367_; 
v___x_365_ = lean_nat_add(v_idx_318_, v___x_276_);
lean_dec(v_idx_318_);
if (v_isShared_364_ == 0)
{
lean_ctor_set(v___x_363_, 1, v___x_365_);
v___x_367_ = v___x_363_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_array_317_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v___x_365_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
v_pos_291_ = v___x_367_;
goto v___jp_290_;
}
}
}
}
}
v___jp_319_:
{
uint8_t v___x_323_; 
v___x_323_ = lean_nat_dec_eq(v_idx_318_, v_idx_322_);
lean_dec(v_idx_322_);
lean_dec(v_idx_318_);
if (v___x_323_ == 0)
{
lean_object* v_pos_324_; lean_object* v_err_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_332_; 
lean_dec_ref(v_pos_321_);
lean_dec_ref(v___x_289_);
lean_del_object(v___x_285_);
v_pos_324_ = lean_ctor_get(v___y_320_, 0);
v_err_325_ = lean_ctor_get(v___y_320_, 1);
v_isSharedCheck_332_ = !lean_is_exclusive(v___y_320_);
if (v_isSharedCheck_332_ == 0)
{
v___x_327_ = v___y_320_;
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_err_325_);
lean_inc(v_pos_324_);
lean_dec(v___y_320_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_pos_324_);
lean_ctor_set(v_reuseFailAlloc_331_, 1, v_err_325_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
else
{
lean_object* v_utf8_333_; lean_object* v___x_334_; 
lean_dec_ref(v___y_320_);
v_utf8_333_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6, &l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6_once, _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6);
v___x_334_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_333_, v_pos_321_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_pos_335_; 
v_pos_335_ = lean_ctor_get(v___x_334_, 0);
lean_inc(v_pos_335_);
lean_dec_ref_known(v___x_334_, 2);
v_pos_291_ = v_pos_335_;
goto v___jp_290_;
}
else
{
lean_object* v_pos_336_; lean_object* v_err_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_344_; 
lean_dec_ref(v___x_289_);
lean_del_object(v___x_285_);
v_pos_336_ = lean_ctor_get(v___x_334_, 0);
v_err_337_ = lean_ctor_get(v___x_334_, 1);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_344_ == 0)
{
v___x_339_ = v___x_334_;
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_err_337_);
lean_inc(v_pos_336_);
lean_dec(v___x_334_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_342_; 
if (v_isShared_340_ == 0)
{
v___x_342_ = v___x_339_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_pos_336_);
lean_ctor_set(v_reuseFailAlloc_343_, 1, v_err_337_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
}
}
}
}
v___jp_290_:
{
uint8_t v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_296_; 
v___x_292_ = 0;
v___x_293_ = lean_box(v___x_292_);
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
lean_ctor_set(v___x_294_, 1, v___x_289_);
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 1, v___x_294_);
lean_ctor_set(v___x_285_, 0, v_pos_291_);
v___x_296_ = v___x_285_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_pos_291_);
lean_ctor_set(v_reuseFailAlloc_297_, 1, v___x_294_);
v___x_296_ = v_reuseFailAlloc_297_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
return v___x_296_;
}
}
}
}
else
{
lean_object* v_pos_374_; lean_object* v_err_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_382_; 
v_pos_374_ = lean_ctor_get(v___x_281_, 0);
v_err_375_ = lean_ctor_get(v___x_281_, 1);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_281_);
if (v_isSharedCheck_382_ == 0)
{
v___x_377_ = v___x_281_;
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_err_375_);
lean_inc(v_pos_374_);
lean_dec(v___x_281_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_380_; 
if (v_isShared_378_ == 0)
{
v___x_380_ = v___x_377_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_pos_374_);
lean_ctor_set(v_reuseFailAlloc_381_, 1, v_err_375_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines_go(lean_object* v_acc_387_, lean_object* v_a_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment(v_a_388_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v_res_390_; lean_object* v_pos_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_403_; 
v_res_390_ = lean_ctor_get(v___x_389_, 1);
v_pos_391_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_403_ == 0)
{
v___x_393_ = v___x_389_;
v_isShared_394_ = v_isSharedCheck_403_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_res_390_);
lean_inc(v_pos_391_);
lean_dec(v___x_389_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_403_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v_fst_395_; lean_object* v_snd_396_; lean_object* v___x_397_; uint8_t v___x_398_; 
v_fst_395_ = lean_ctor_get(v_res_390_, 0);
lean_inc(v_fst_395_);
v_snd_396_ = lean_ctor_get(v_res_390_, 1);
lean_inc(v_snd_396_);
lean_dec(v_res_390_);
v___x_397_ = l_Array_append___redArg(v_acc_387_, v_snd_396_);
lean_dec(v_snd_396_);
v___x_398_ = lean_unbox(v_fst_395_);
lean_dec(v_fst_395_);
if (v___x_398_ == 0)
{
lean_del_object(v___x_393_);
v_acc_387_ = v___x_397_;
v_a_388_ = v_pos_391_;
goto _start;
}
else
{
lean_object* v___x_401_; 
if (v_isShared_394_ == 0)
{
lean_ctor_set(v___x_393_, 1, v___x_397_);
v___x_401_ = v___x_393_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_pos_391_);
lean_ctor_set(v_reuseFailAlloc_402_, 1, v___x_397_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
}
else
{
lean_object* v_pos_404_; lean_object* v_err_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_412_; 
lean_dec_ref(v_acc_387_);
v_pos_404_ = lean_ctor_get(v___x_389_, 0);
v_err_405_ = lean_ctor_get(v___x_389_, 1);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_412_ == 0)
{
v___x_407_ = v___x_389_;
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_err_405_);
lean_inc(v_pos_404_);
lean_dec(v___x_389_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_410_; 
if (v_isShared_408_ == 0)
{
v___x_410_ = v___x_407_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_pos_404_);
lean_ctor_set(v_reuseFailAlloc_411_, 1, v_err_405_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines(lean_object* v_a_415_){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines___closed__0));
v___x_417_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines_go(v___x_416_, v_a_415_);
return v___x_417_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1(void){
_start:
{
lean_object* v___x_419_; lean_object* v_utf8_420_; 
v___x_419_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__0));
v_utf8_420_ = lean_string_to_utf8(v___x_419_);
return v_utf8_420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader(lean_object* v_a_421_){
_start:
{
lean_object* v_utf8_422_; lean_object* v___x_423_; 
v_utf8_422_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1, &l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1_once, _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1);
v___x_423_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_422_, v_a_421_);
if (lean_obj_tag(v___x_423_) == 0)
{
lean_object* v_pos_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_475_; 
v_pos_424_ = lean_ctor_get(v___x_423_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_475_ == 0)
{
lean_object* v_unused_476_; 
v_unused_476_ = lean_ctor_get(v___x_423_, 1);
lean_dec(v_unused_476_);
v___x_426_ = v___x_423_;
v_isShared_427_ = v_isSharedCheck_475_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_pos_424_);
lean_dec(v___x_423_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_475_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v_array_428_; lean_object* v_idx_429_; lean_object* v___y_431_; lean_object* v_pos_432_; lean_object* v_idx_433_; lean_object* v___x_447_; uint8_t v___x_448_; 
v_array_428_ = lean_ctor_get(v_pos_424_, 0);
v_idx_429_ = lean_ctor_get(v_pos_424_, 1);
lean_inc(v_idx_429_);
v___x_447_ = lean_byte_array_size(v_array_428_);
v___x_448_ = lean_nat_dec_lt(v_idx_429_, v___x_447_);
if (v___x_448_ == 0)
{
lean_object* v___x_449_; lean_object* v___x_451_; 
v___x_449_ = lean_box(0);
lean_inc(v_pos_424_);
if (v_isShared_427_ == 0)
{
lean_ctor_set_tag(v___x_426_, 1);
lean_ctor_set(v___x_426_, 1, v___x_449_);
v___x_451_ = v___x_426_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_pos_424_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v___x_449_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
lean_inc(v_idx_429_);
v___y_431_ = v___x_451_;
v_pos_432_ = v_pos_424_;
v_idx_433_ = v_idx_429_;
goto v___jp_430_;
}
}
else
{
uint8_t v___x_453_; uint8_t v_got_454_; uint8_t v___x_455_; 
v___x_453_ = 10;
v_got_454_ = lean_byte_array_fget(v_array_428_, v_idx_429_);
v___x_455_ = lean_uint8_dec_eq(v_got_454_, v___x_453_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; lean_object* v___x_458_; 
v___x_456_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8));
lean_inc(v_pos_424_);
if (v_isShared_427_ == 0)
{
lean_ctor_set_tag(v___x_426_, 1);
lean_ctor_set(v___x_426_, 1, v___x_456_);
v___x_458_ = v___x_426_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_pos_424_);
lean_ctor_set(v_reuseFailAlloc_459_, 1, v___x_456_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
lean_inc(v_idx_429_);
v___y_431_ = v___x_458_;
v_pos_432_ = v_pos_424_;
v_idx_433_ = v_idx_429_;
goto v___jp_430_;
}
}
else
{
lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_472_; 
lean_inc_ref(v_array_428_);
v_isSharedCheck_472_ = !lean_is_exclusive(v_pos_424_);
if (v_isSharedCheck_472_ == 0)
{
lean_object* v_unused_473_; lean_object* v_unused_474_; 
v_unused_473_ = lean_ctor_get(v_pos_424_, 1);
lean_dec(v_unused_473_);
v_unused_474_ = lean_ctor_get(v_pos_424_, 0);
lean_dec(v_unused_474_);
v___x_461_ = v_pos_424_;
v_isShared_462_ = v_isSharedCheck_472_;
goto v_resetjp_460_;
}
else
{
lean_dec(v_pos_424_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_472_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_466_; 
v___x_463_ = lean_unsigned_to_nat(1u);
v___x_464_ = lean_nat_add(v_idx_429_, v___x_463_);
lean_dec(v_idx_429_);
if (v_isShared_462_ == 0)
{
lean_ctor_set(v___x_461_, 1, v___x_464_);
v___x_466_ = v___x_461_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_array_428_);
lean_ctor_set(v_reuseFailAlloc_471_, 1, v___x_464_);
v___x_466_ = v_reuseFailAlloc_471_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
lean_object* v___x_467_; lean_object* v___x_469_; 
v___x_467_ = lean_box(0);
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 1, v___x_467_);
lean_ctor_set(v___x_426_, 0, v___x_466_);
v___x_469_ = v___x_426_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v___x_466_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v___x_467_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
}
}
v___jp_430_:
{
uint8_t v___x_434_; 
v___x_434_ = lean_nat_dec_eq(v_idx_429_, v_idx_433_);
lean_dec(v_idx_433_);
lean_dec(v_idx_429_);
if (v___x_434_ == 0)
{
lean_dec_ref(v_pos_432_);
return v___y_431_;
}
else
{
lean_object* v_utf8_435_; lean_object* v___x_436_; 
lean_dec_ref(v___y_431_);
v_utf8_435_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6, &l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6_once, _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6);
v___x_436_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_435_, v_pos_432_);
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v_pos_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_445_; 
v_pos_437_ = lean_ctor_get(v___x_436_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_445_ == 0)
{
lean_object* v_unused_446_; 
v_unused_446_ = lean_ctor_get(v___x_436_, 1);
lean_dec(v_unused_446_);
v___x_439_ = v___x_436_;
v_isShared_440_ = v_isSharedCheck_445_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_pos_437_);
lean_dec(v___x_436_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_445_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_441_; lean_object* v___x_443_; 
v___x_441_ = lean_box(0);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 1, v___x_441_);
v___x_443_ = v___x_439_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_pos_437_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v___x_441_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
else
{
return v___x_436_;
}
}
}
}
}
else
{
return v___x_423_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parse(lean_object* v_a_477_){
_start:
{
lean_object* v_utf8_478_; lean_object* v___x_479_; 
v_utf8_478_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1, &l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1_once, _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1);
v___x_479_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_478_, v_a_477_);
if (lean_obj_tag(v___x_479_) == 0)
{
lean_object* v_pos_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_538_; 
v_pos_480_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_538_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_538_ == 0)
{
lean_object* v_unused_539_; 
v_unused_539_ = lean_ctor_get(v___x_479_, 1);
lean_dec(v_unused_539_);
v___x_482_ = v___x_479_;
v_isShared_483_ = v_isSharedCheck_538_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_pos_480_);
lean_dec(v___x_479_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_538_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v_array_484_; lean_object* v_idx_485_; lean_object* v___y_487_; lean_object* v_pos_488_; lean_object* v_idx_489_; lean_object* v___x_513_; uint8_t v___x_514_; 
v_array_484_ = lean_ctor_get(v_pos_480_, 0);
v_idx_485_ = lean_ctor_get(v_pos_480_, 1);
lean_inc(v_idx_485_);
v___x_513_ = lean_byte_array_size(v_array_484_);
v___x_514_ = lean_nat_dec_lt(v_idx_485_, v___x_513_);
if (v___x_514_ == 0)
{
lean_object* v___x_515_; lean_object* v___x_517_; 
v___x_515_ = lean_box(0);
lean_inc(v_pos_480_);
if (v_isShared_483_ == 0)
{
lean_ctor_set_tag(v___x_482_, 1);
lean_ctor_set(v___x_482_, 1, v___x_515_);
v___x_517_ = v___x_482_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_pos_480_);
lean_ctor_set(v_reuseFailAlloc_518_, 1, v___x_515_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
lean_inc(v_idx_485_);
v___y_487_ = v___x_517_;
v_pos_488_ = v_pos_480_;
v_idx_489_ = v_idx_485_;
goto v___jp_486_;
}
}
else
{
uint8_t v___x_519_; uint8_t v_got_520_; uint8_t v___x_521_; 
v___x_519_ = 10;
v_got_520_ = lean_byte_array_fget(v_array_484_, v_idx_485_);
v___x_521_ = lean_uint8_dec_eq(v_got_520_, v___x_519_);
if (v___x_521_ == 0)
{
lean_object* v___x_522_; lean_object* v___x_524_; 
v___x_522_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8));
lean_inc(v_pos_480_);
if (v_isShared_483_ == 0)
{
lean_ctor_set_tag(v___x_482_, 1);
lean_ctor_set(v___x_482_, 1, v___x_522_);
v___x_524_ = v___x_482_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_pos_480_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v___x_522_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
lean_inc(v_idx_485_);
v___y_487_ = v___x_524_;
v_pos_488_ = v_pos_480_;
v_idx_489_ = v_idx_485_;
goto v___jp_486_;
}
}
else
{
lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_535_; 
lean_inc_ref(v_array_484_);
lean_del_object(v___x_482_);
v_isSharedCheck_535_ = !lean_is_exclusive(v_pos_480_);
if (v_isSharedCheck_535_ == 0)
{
lean_object* v_unused_536_; lean_object* v_unused_537_; 
v_unused_536_ = lean_ctor_get(v_pos_480_, 1);
lean_dec(v_unused_536_);
v_unused_537_ = lean_ctor_get(v_pos_480_, 0);
lean_dec(v_unused_537_);
v___x_527_ = v_pos_480_;
v_isShared_528_ = v_isSharedCheck_535_;
goto v_resetjp_526_;
}
else
{
lean_dec(v_pos_480_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_535_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_532_; 
v___x_529_ = lean_unsigned_to_nat(1u);
v___x_530_ = lean_nat_add(v_idx_485_, v___x_529_);
lean_dec(v_idx_485_);
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 1, v___x_530_);
v___x_532_ = v___x_527_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_array_484_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v___x_530_);
v___x_532_ = v_reuseFailAlloc_534_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
lean_object* v___x_533_; 
v___x_533_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines(v___x_532_);
return v___x_533_;
}
}
}
}
v___jp_486_:
{
uint8_t v___x_490_; 
v___x_490_ = lean_nat_dec_eq(v_idx_485_, v_idx_489_);
lean_dec(v_idx_489_);
lean_dec(v_idx_485_);
if (v___x_490_ == 0)
{
lean_object* v_pos_491_; lean_object* v_err_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_499_; 
lean_dec_ref(v_pos_488_);
v_pos_491_ = lean_ctor_get(v___y_487_, 0);
v_err_492_ = lean_ctor_get(v___y_487_, 1);
v_isSharedCheck_499_ = !lean_is_exclusive(v___y_487_);
if (v_isSharedCheck_499_ == 0)
{
v___x_494_ = v___y_487_;
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_err_492_);
lean_inc(v_pos_491_);
lean_dec(v___y_487_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_497_; 
if (v_isShared_495_ == 0)
{
v___x_497_ = v___x_494_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_pos_491_);
lean_ctor_set(v_reuseFailAlloc_498_, 1, v_err_492_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
else
{
lean_object* v_utf8_500_; lean_object* v___x_501_; 
lean_dec_ref(v___y_487_);
v_utf8_500_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6, &l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6_once, _init_l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6);
v___x_501_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_500_, v_pos_488_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_pos_502_; lean_object* v___x_503_; 
v_pos_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_pos_502_);
lean_dec_ref_known(v___x_501_, 2);
v___x_503_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseLines(v_pos_502_);
return v___x_503_;
}
else
{
lean_object* v_pos_504_; lean_object* v_err_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_512_; 
v_pos_504_ = lean_ctor_get(v___x_501_, 0);
v_err_505_ = lean_ctor_get(v___x_501_, 1);
v_isSharedCheck_512_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_512_ == 0)
{
v___x_507_ = v___x_501_;
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_err_505_);
lean_inc(v_pos_504_);
lean_dec(v___x_501_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_510_; 
if (v_isShared_508_ == 0)
{
v___x_510_ = v___x_507_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v_pos_504_);
lean_ctor_set(v_reuseFailAlloc_511_, 1, v_err_505_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
}
}
}
}
else
{
lean_object* v_pos_540_; lean_object* v_err_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
v_pos_540_ = lean_ctor_get(v___x_479_, 0);
v_err_541_ = lean_ctor_get(v___x_479_, 1);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_479_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_err_541_);
lean_inc(v_pos_540_);
lean_dec(v___x_479_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_pos_540_);
lean_ctor_set(v_reuseFailAlloc_547_, 1, v_err_541_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorIdx___impl___redArg(lean_object* v_x_549_){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = lean_obj_tag_nat(v_x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorIdx___impl___redArg___boxed(lean_object* v_x_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorIdx___impl___redArg(v_x_551_);
lean_dec(v_x_551_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorIdx___impl(lean_object* v_00_u03b1_553_, lean_object* v_x_554_){
_start:
{
lean_object* v___x_555_; 
v___x_555_ = lean_obj_tag_nat(v_x_554_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorIdx___impl___boxed(lean_object* v_00_u03b1_556_, lean_object* v_x_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorIdx___impl(v_00_u03b1_556_, v_x_557_);
lean_dec(v_x_557_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim___redArg(lean_object* v_t_559_, lean_object* v_k_560_){
_start:
{
if (lean_obj_tag(v_t_559_) == 0)
{
lean_object* v_x_561_; lean_object* v___x_562_; 
v_x_561_ = lean_ctor_get(v_t_559_, 0);
lean_inc(v_x_561_);
lean_dec_ref_known(v_t_559_, 1);
v___x_562_ = lean_apply_1(v_k_560_, v_x_561_);
return v___x_562_;
}
else
{
return v_k_560_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim(lean_object* v_00_u03b1_563_, lean_object* v_motive_564_, lean_object* v_ctorIdx_565_, lean_object* v_t_566_, lean_object* v_h_567_, lean_object* v_k_568_){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim___redArg(v_t_566_, v_k_568_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim___boxed(lean_object* v_00_u03b1_570_, lean_object* v_motive_571_, lean_object* v_ctorIdx_572_, lean_object* v_t_573_, lean_object* v_h_574_, lean_object* v_k_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim(v_00_u03b1_570_, v_motive_571_, v_ctorIdx_572_, v_t_573_, v_h_574_, v_k_575_);
lean_dec(v_ctorIdx_572_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_success_elim___redArg(lean_object* v_t_577_, lean_object* v_success_578_){
_start:
{
lean_object* v___x_579_; 
v___x_579_ = l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim___redArg(v_t_577_, v_success_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_success_elim(lean_object* v_00_u03b1_580_, lean_object* v_motive_581_, lean_object* v_t_582_, lean_object* v_h_583_, lean_object* v_success_584_){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim___redArg(v_t_582_, v_success_584_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_timeout_elim___redArg(lean_object* v_t_586_, lean_object* v_timeout_587_){
_start:
{
lean_object* v___x_588_; 
v___x_588_ = l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim___redArg(v_t_586_, v_timeout_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_TimedOut_timeout_elim(lean_object* v_00_u03b1_589_, lean_object* v_motive_590_, lean_object* v_t_591_, lean_object* v_h_592_, lean_object* v_timeout_593_){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = l_Lean_Meta_Tactic_BVDecide_External_TimedOut_ctorElim___redArg(v_t_591_, v_timeout_593_);
return v___x_594_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_595_ = lean_box(0);
v___x_596_ = l_Lean_interruptExceptionId;
v___x_597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_596_);
lean_ctor_set(v___x_597_, 1, v___x_595_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg(){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = lean_obj_once(&l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg___closed__0, &l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg___closed__0);
v___x_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_600_, 0, v___x_599_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg___boxed(lean_object* v___y_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg();
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0(lean_object* v_00_u03b1_603_, lean_object* v___y_604_, lean_object* v___y_605_){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg();
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___boxed(lean_object* v_00_u03b1_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0(v_00_u03b1_608_, v___y_609_, v___y_610_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___redArg(lean_object* v_cleanup_613_, lean_object* v_x_614_, lean_object* v_a_615_, lean_object* v_a_616_){
_start:
{
lean_object* v_toCold_618_; lean_object* v_cancelTk_x3f_619_; 
v_toCold_618_ = lean_ctor_get(v_a_615_, 0);
v_cancelTk_x3f_619_ = lean_ctor_get(v_toCold_618_, 10);
if (lean_obj_tag(v_cancelTk_x3f_619_) == 1)
{
lean_object* v_val_620_; uint8_t v___x_621_; 
v_val_620_ = lean_ctor_get(v_cancelTk_x3f_619_, 0);
v___x_621_ = l_IO_CancelToken_isSet(v_val_620_);
if (v___x_621_ == 0)
{
lean_object* v___x_622_; 
lean_dec_ref(v_cleanup_613_);
lean_inc(v_a_616_);
lean_inc_ref(v_a_615_);
v___x_622_ = lean_apply_3(v_x_614_, v_a_615_, v_a_616_, lean_box(0));
return v___x_622_;
}
else
{
lean_object* v___x_623_; 
lean_dec_ref(v_x_614_);
lean_inc(v_a_616_);
lean_inc_ref(v_a_615_);
v___x_623_ = lean_apply_3(v_cleanup_613_, v_a_615_, v_a_616_, lean_box(0));
if (lean_obj_tag(v___x_623_) == 0)
{
lean_object* v___x_624_; lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
lean_dec_ref_known(v___x_623_, 1);
v___x_624_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck_spec__0___redArg();
v_a_625_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_624_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_624_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
else
{
lean_object* v_a_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_640_; 
v_a_633_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_640_ == 0)
{
v___x_635_ = v___x_623_;
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_a_633_);
lean_dec(v___x_623_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_638_; 
if (v_isShared_636_ == 0)
{
v___x_638_ = v___x_635_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_a_633_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
}
}
else
{
lean_object* v___x_641_; 
lean_dec_ref(v_cleanup_613_);
lean_inc(v_a_616_);
lean_inc_ref(v_a_615_);
v___x_641_ = lean_apply_3(v_x_614_, v_a_615_, v_a_616_, lean_box(0));
return v___x_641_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___redArg___boxed(lean_object* v_cleanup_642_, lean_object* v_x_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___redArg(v_cleanup_642_, v_x_643_, v_a_644_, v_a_645_);
lean_dec(v_a_645_);
lean_dec_ref(v_a_644_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck(lean_object* v_00_u03b1_648_, lean_object* v_cleanup_649_, lean_object* v_x_650_, lean_object* v_a_651_, lean_object* v_a_652_){
_start:
{
lean_object* v___x_654_; 
v___x_654_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___redArg(v_cleanup_649_, v_x_650_, v_a_651_, v_a_652_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___boxed(lean_object* v_00_u03b1_655_, lean_object* v_cleanup_656_, lean_object* v_x_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck(v_00_u03b1_655_, v_cleanup_656_, v_x_657_, v_a_658_, v_a_659_);
lean_dec(v_a_659_);
lean_dec_ref(v_a_658_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___redArg(lean_object* v_budgetMs_662_, lean_object* v_cleanup_663_, lean_object* v_x_664_, lean_object* v_a_665_, lean_object* v_a_666_){
_start:
{
lean_object* v___x_668_; uint8_t v___x_669_; 
v___x_668_ = lean_unsigned_to_nat(0u);
v___x_669_ = lean_nat_dec_eq(v_budgetMs_662_, v___x_668_);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; 
lean_dec_ref(v_cleanup_663_);
lean_inc(v_a_666_);
lean_inc_ref(v_a_665_);
v___x_670_ = lean_apply_3(v_x_664_, v_a_665_, v_a_666_, lean_box(0));
return v___x_670_;
}
else
{
lean_object* v___x_671_; 
lean_dec_ref(v_x_664_);
lean_inc(v_a_666_);
lean_inc_ref(v_a_665_);
v___x_671_ = lean_apply_3(v_cleanup_663_, v_a_665_, v_a_666_, lean_box(0));
if (lean_obj_tag(v___x_671_) == 0)
{
lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_679_; 
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_671_);
if (v_isSharedCheck_679_ == 0)
{
lean_object* v_unused_680_; 
v_unused_680_ = lean_ctor_get(v___x_671_, 0);
lean_dec(v_unused_680_);
v___x_673_ = v___x_671_;
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
else
{
lean_dec(v___x_671_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_675_ = lean_box(1);
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 0, v___x_675_);
v___x_677_ = v___x_673_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_675_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
else
{
lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_688_; 
v_a_681_ = lean_ctor_get(v___x_671_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_671_);
if (v_isSharedCheck_688_ == 0)
{
v___x_683_ = v___x_671_;
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v___x_671_);
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
v_reuseFailAlloc_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_a_681_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___redArg___boxed(lean_object* v_budgetMs_689_, lean_object* v_cleanup_690_, lean_object* v_x_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___redArg(v_budgetMs_689_, v_cleanup_690_, v_x_691_, v_a_692_, v_a_693_);
lean_dec(v_a_693_);
lean_dec_ref(v_a_692_);
lean_dec(v_budgetMs_689_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck(lean_object* v_00_u03b1_696_, lean_object* v_budgetMs_697_, lean_object* v_cleanup_698_, lean_object* v_x_699_, lean_object* v_a_700_, lean_object* v_a_701_){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___redArg(v_budgetMs_697_, v_cleanup_698_, v_x_699_, v_a_700_, v_a_701_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___boxed(lean_object* v_00_u03b1_704_, lean_object* v_budgetMs_705_, lean_object* v_cleanup_706_, lean_object* v_x_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck(v_00_u03b1_704_, v_budgetMs_705_, v_cleanup_706_, v_x_707_, v_a_708_, v_a_709_);
lean_dec(v_a_709_);
lean_dec_ref(v_a_708_);
lean_dec(v_budgetMs_705_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_killAndWait(lean_object* v_cfg_712_, lean_object* v_child_713_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = lean_io_process_child_kill(v_cfg_712_, v_child_713_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v___x_716_; lean_object* v___x_717_; 
lean_dec_ref_known(v___x_715_, 1);
v___x_716_ = lean_box(0);
v___x_717_ = lean_io_process_child_wait(v_cfg_712_, v_child_713_);
if (lean_obj_tag(v___x_717_) == 0)
{
lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_724_; 
v_isSharedCheck_724_ = !lean_is_exclusive(v___x_717_);
if (v_isSharedCheck_724_ == 0)
{
lean_object* v_unused_725_; 
v_unused_725_ = lean_ctor_get(v___x_717_, 0);
lean_dec(v_unused_725_);
v___x_719_ = v___x_717_;
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
else
{
lean_dec(v___x_717_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_722_; 
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 0, v___x_716_);
v___x_722_ = v___x_719_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_716_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
}
else
{
lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_733_; 
v_a_726_ = lean_ctor_get(v___x_717_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_717_);
if (v_isSharedCheck_733_ == 0)
{
v___x_728_ = v___x_717_;
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v___x_717_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_731_; 
if (v_isShared_729_ == 0)
{
v___x_731_ = v___x_728_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_a_726_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
}
}
else
{
return v___x_715_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_killAndWait___boxed(lean_object* v_cfg_734_, lean_object* v_child_735_, lean_object* v_a_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_killAndWait(v_cfg_734_, v_child_735_);
lean_dec_ref(v_child_735_);
lean_dec_ref(v_cfg_734_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___redArg(lean_object* v_e_738_){
_start:
{
if (lean_obj_tag(v_e_738_) == 0)
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_749_; 
v_a_740_ = lean_ctor_get(v_e_738_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v_e_738_);
if (v_isSharedCheck_749_ == 0)
{
v___x_742_ = v_e_738_;
v_isShared_743_ = v_isSharedCheck_749_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v_e_738_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_749_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_747_; 
v___x_744_ = lean_io_error_to_string(v_a_740_);
v___x_745_ = lean_mk_io_user_error(v___x_744_);
if (v_isShared_743_ == 0)
{
lean_ctor_set_tag(v___x_742_, 1);
lean_ctor_set(v___x_742_, 0, v___x_745_);
v___x_747_ = v___x_742_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v___x_745_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
else
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_757_; 
v_a_750_ = lean_ctor_get(v_e_738_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v_e_738_);
if (v_isSharedCheck_757_ == 0)
{
v___x_752_ = v_e_738_;
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v_e_738_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
lean_ctor_set_tag(v___x_752_, 0);
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_a_750_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___redArg___boxed(lean_object* v_e_758_, lean_object* v_a_759_){
_start:
{
lean_object* v_res_760_; 
v_res_760_ = l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___redArg(v_e_758_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0(lean_object* v_00_u03b1_761_, lean_object* v_e_762_){
_start:
{
lean_object* v___x_764_; 
v___x_764_ = l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___redArg(v_e_762_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___boxed(lean_object* v_00_u03b1_765_, lean_object* v_e_766_, lean_object* v_a_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0(v_00_u03b1_765_, v_e_766_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__1(lean_object* v_cfg_769_, lean_object* v_child_770_, lean_object* v___y_771_, lean_object* v___y_772_){
_start:
{
lean_object* v_ref_774_; lean_object* v___x_775_; 
v_ref_774_ = lean_ctor_get(v___y_771_, 2);
v___x_775_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_killAndWait(v_cfg_769_, v_child_770_);
if (lean_obj_tag(v___x_775_) == 0)
{
lean_object* v_a_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_783_; 
v_a_776_ = lean_ctor_get(v___x_775_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_783_ == 0)
{
v___x_778_ = v___x_775_;
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_a_776_);
lean_dec(v___x_775_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___x_781_; 
if (v_isShared_779_ == 0)
{
v___x_781_ = v___x_778_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_a_776_);
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
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_795_; 
v_a_784_ = lean_ctor_get(v___x_775_, 0);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_795_ == 0)
{
v___x_786_ = v___x_775_;
v_isShared_787_ = v_isSharedCheck_795_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_775_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_795_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_793_; 
v___x_788_ = lean_io_error_to_string(v_a_784_);
v___x_789_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_789_, 0, v___x_788_);
v___x_790_ = l_Lean_MessageData_ofFormat(v___x_789_);
lean_inc(v_ref_774_);
v___x_791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_791_, 0, v_ref_774_);
lean_ctor_set(v___x_791_, 1, v___x_790_);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 0, v___x_791_);
v___x_793_ = v___x_786_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v___x_791_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
return v___x_793_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__1___boxed(lean_object* v_cfg_796_, lean_object* v_child_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__1(v_cfg_796_, v_child_797_, v___y_798_, v___y_799_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec_ref(v_child_797_);
lean_dec_ref(v_cfg_796_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__0(lean_object* v_cfg_802_, lean_object* v_child_803_, lean_object* v_sleepMs_804_, lean_object* v_budgetMs_805_, lean_object* v_maxSleepMs_806_, lean_object* v_stdout_807_, lean_object* v_stderr_808_, lean_object* v___y_809_, lean_object* v___y_810_){
_start:
{
lean_object* v_ref_812_; lean_object* v___x_813_; 
v_ref_812_ = lean_ctor_get(v___y_809_, 2);
v___x_813_ = lean_io_process_child_try_wait(v_cfg_802_, v_child_803_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v_a_814_; 
v_a_814_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_a_814_);
lean_dec_ref_known(v___x_813_, 1);
if (lean_obj_tag(v_a_814_) == 0)
{
uint32_t v___x_815_; lean_object* v___x_816_; lean_object* v___y_818_; uint8_t v___x_821_; 
v___x_815_ = lean_uint32_of_nat(v_sleepMs_804_);
v___x_816_ = l_IO_sleep(v___x_815_);
v___x_821_ = lean_nat_dec_le(v_maxSleepMs_806_, v_sleepMs_804_);
if (v___x_821_ == 0)
{
lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_822_ = lean_unsigned_to_nat(2u);
v___x_823_ = lean_nat_mul(v_sleepMs_804_, v___x_822_);
v___y_818_ = v___x_823_;
goto v___jp_817_;
}
else
{
lean_inc(v_sleepMs_804_);
v___y_818_ = v_sleepMs_804_;
goto v___jp_817_;
}
v___jp_817_:
{
lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_819_ = lean_nat_sub(v_budgetMs_805_, v_sleepMs_804_);
lean_dec(v_sleepMs_804_);
v___x_820_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go(v_cfg_802_, v___x_819_, v___y_818_, v_maxSleepMs_806_, v_child_803_, v_stdout_807_, v_stderr_808_, v___y_809_, v___y_810_);
return v___x_820_;
}
}
else
{
lean_object* v_val_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_874_; 
lean_dec(v_maxSleepMs_806_);
lean_dec(v_sleepMs_804_);
lean_dec_ref(v_child_803_);
lean_dec_ref(v_cfg_802_);
v_val_824_ = lean_ctor_get(v_a_814_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v_a_814_);
if (v_isSharedCheck_874_ == 0)
{
v___x_826_ = v_a_814_;
v_isShared_827_ = v_isSharedCheck_874_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_val_824_);
lean_dec(v_a_814_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_874_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_828_ = lean_task_get_own(v_stdout_807_);
v___x_829_ = l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___redArg(v___x_828_);
if (lean_obj_tag(v___x_829_) == 0)
{
lean_object* v_a_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v_a_830_ = lean_ctor_get(v___x_829_, 0);
lean_inc(v_a_830_);
lean_dec_ref_known(v___x_829_, 1);
v___x_831_ = lean_task_get_own(v_stderr_808_);
v___x_832_ = l_IO_ofExcept___at___00__private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go_spec__0___redArg(v___x_831_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_845_; 
v_a_833_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_845_ == 0)
{
v___x_835_ = v___x_832_;
v_isShared_836_ = v_isSharedCheck_845_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_832_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_845_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_837_; uint32_t v___x_838_; lean_object* v___x_840_; 
v___x_837_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_837_, 0, v_a_830_);
lean_ctor_set(v___x_837_, 1, v_a_833_);
v___x_838_ = lean_unbox_uint32(v_val_824_);
lean_dec(v_val_824_);
lean_ctor_set_uint32(v___x_837_, sizeof(void*)*2, v___x_838_);
if (v_isShared_827_ == 0)
{
lean_ctor_set_tag(v___x_826_, 0);
lean_ctor_set(v___x_826_, 0, v___x_837_);
v___x_840_ = v___x_826_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v___x_837_);
v___x_840_ = v_reuseFailAlloc_844_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
lean_object* v___x_842_; 
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 0, v___x_840_);
v___x_842_ = v___x_835_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v___x_840_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
}
else
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_859_; 
lean_dec(v_a_830_);
lean_dec(v_val_824_);
v_a_846_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_859_ == 0)
{
v___x_848_ = v___x_832_;
v_isShared_849_ = v_isSharedCheck_859_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v___x_832_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_859_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_850_; lean_object* v___x_852_; 
v___x_850_ = lean_io_error_to_string(v_a_846_);
if (v_isShared_827_ == 0)
{
lean_ctor_set_tag(v___x_826_, 3);
lean_ctor_set(v___x_826_, 0, v___x_850_);
v___x_852_ = v___x_826_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v___x_850_);
v___x_852_ = v_reuseFailAlloc_858_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_856_; 
v___x_853_ = l_Lean_MessageData_ofFormat(v___x_852_);
lean_inc(v_ref_812_);
v___x_854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_854_, 0, v_ref_812_);
lean_ctor_set(v___x_854_, 1, v___x_853_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 0, v___x_854_);
v___x_856_ = v___x_848_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v___x_854_);
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
}
else
{
lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_873_; 
lean_dec(v_val_824_);
lean_dec_ref(v_stderr_808_);
v_a_860_ = lean_ctor_get(v___x_829_, 0);
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_829_);
if (v_isSharedCheck_873_ == 0)
{
v___x_862_ = v___x_829_;
v_isShared_863_ = v_isSharedCheck_873_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v___x_829_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_873_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_864_; lean_object* v___x_866_; 
v___x_864_ = lean_io_error_to_string(v_a_860_);
if (v_isShared_827_ == 0)
{
lean_ctor_set_tag(v___x_826_, 3);
lean_ctor_set(v___x_826_, 0, v___x_864_);
v___x_866_ = v___x_826_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v___x_864_);
v___x_866_ = v_reuseFailAlloc_872_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_870_; 
v___x_867_ = l_Lean_MessageData_ofFormat(v___x_866_);
lean_inc(v_ref_812_);
v___x_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_868_, 0, v_ref_812_);
lean_ctor_set(v___x_868_, 1, v___x_867_);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 0, v___x_868_);
v___x_870_ = v___x_862_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v___x_868_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_886_; 
lean_dec_ref(v_stderr_808_);
lean_dec_ref(v_stdout_807_);
lean_dec(v_maxSleepMs_806_);
lean_dec(v_sleepMs_804_);
lean_dec_ref(v_child_803_);
lean_dec_ref(v_cfg_802_);
v_a_875_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_886_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_886_ == 0)
{
v___x_877_ = v___x_813_;
v_isShared_878_ = v_isSharedCheck_886_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_a_875_);
lean_dec(v___x_813_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_886_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_884_; 
v___x_879_ = lean_io_error_to_string(v_a_875_);
v___x_880_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_880_, 0, v___x_879_);
v___x_881_ = l_Lean_MessageData_ofFormat(v___x_880_);
lean_inc(v_ref_812_);
v___x_882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_882_, 0, v_ref_812_);
lean_ctor_set(v___x_882_, 1, v___x_881_);
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 0, v___x_882_);
v___x_884_ = v___x_877_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v___x_882_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__0___boxed(lean_object* v_cfg_887_, lean_object* v_child_888_, lean_object* v_sleepMs_889_, lean_object* v_budgetMs_890_, lean_object* v_maxSleepMs_891_, lean_object* v_stdout_892_, lean_object* v_stderr_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__0(v_cfg_887_, v_child_888_, v_sleepMs_889_, v_budgetMs_890_, v_maxSleepMs_891_, v_stdout_892_, v_stderr_893_, v___y_894_, v___y_895_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v_budgetMs_890_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go(lean_object* v_cfg_898_, lean_object* v_budgetMs_899_, lean_object* v_sleepMs_900_, lean_object* v_maxSleepMs_901_, lean_object* v_child_902_, lean_object* v_stdout_903_, lean_object* v_stderr_904_, lean_object* v_a_905_, lean_object* v_a_906_){
_start:
{
lean_object* v___f_908_; lean_object* v___f_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
lean_inc(v_budgetMs_899_);
lean_inc_ref(v_child_902_);
lean_inc_ref(v_cfg_898_);
v___f_908_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__0___boxed), 10, 7);
lean_closure_set(v___f_908_, 0, v_cfg_898_);
lean_closure_set(v___f_908_, 1, v_child_902_);
lean_closure_set(v___f_908_, 2, v_sleepMs_900_);
lean_closure_set(v___f_908_, 3, v_budgetMs_899_);
lean_closure_set(v___f_908_, 4, v_maxSleepMs_901_);
lean_closure_set(v___f_908_, 5, v_stdout_903_);
lean_closure_set(v___f_908_, 6, v_stderr_904_);
v___f_909_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___lam__1___boxed), 5, 2);
lean_closure_set(v___f_909_, 0, v_cfg_898_);
lean_closure_set(v___f_909_, 1, v_child_902_);
lean_inc_ref(v___f_909_);
v___x_910_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___boxed), 6, 3);
lean_closure_set(v___x_910_, 0, lean_box(0));
lean_closure_set(v___x_910_, 1, v___f_909_);
lean_closure_set(v___x_910_, 2, v___f_908_);
v___x_911_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___redArg(v_budgetMs_899_, v___f_909_, v___x_910_, v_a_905_, v_a_906_);
lean_dec(v_budgetMs_899_);
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go___boxed(lean_object* v_cfg_912_, lean_object* v_budgetMs_913_, lean_object* v_sleepMs_914_, lean_object* v_maxSleepMs_915_, lean_object* v_child_916_, lean_object* v_stdout_917_, lean_object* v_stderr_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go(v_cfg_912_, v_budgetMs_913_, v_sleepMs_914_, v_maxSleepMs_915_, v_child_916_, v_stdout_917_, v_stderr_918_, v_a_919_, v_a_920_);
lean_dec(v_a_920_);
lean_dec_ref(v_a_919_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__0(lean_object* v_stderr_923_){
_start:
{
lean_object* v___x_925_; 
v___x_925_ = l_IO_FS_Handle_readToEnd(v_stderr_923_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
v_a_926_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_925_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_925_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
lean_ctor_set_tag(v___x_928_, 1);
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
else
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
v_a_934_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_925_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_925_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
if (v_isShared_937_ == 0)
{
lean_ctor_set_tag(v___x_936_, 0);
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_a_934_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__0___boxed(lean_object* v_stderr_942_, lean_object* v___y_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__0(v_stderr_942_);
lean_dec(v_stderr_942_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__1(lean_object* v_stdout_945_){
_start:
{
lean_object* v___x_947_; 
v___x_947_ = l_IO_FS_Handle_readToEnd(v_stdout_945_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_955_; 
v_a_948_ = lean_ctor_get(v___x_947_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_947_);
if (v_isSharedCheck_955_ == 0)
{
v___x_950_ = v___x_947_;
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v___x_947_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_953_; 
if (v_isShared_951_ == 0)
{
lean_ctor_set_tag(v___x_950_, 1);
v___x_953_ = v___x_950_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_a_948_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
else
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
v_a_956_ = lean_ctor_get(v___x_947_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_947_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_947_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_947_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
lean_ctor_set_tag(v___x_958_, 0);
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__1___boxed(lean_object* v_stdout_964_, lean_object* v___y_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__1(v_stdout_964_);
lean_dec(v_stdout_964_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible(lean_object* v_timeout_970_, lean_object* v_args_971_, lean_object* v_a_972_, lean_object* v_a_973_){
_start:
{
lean_object* v___x_975_; lean_object* v_cmd_976_; lean_object* v_args_977_; lean_object* v_cwd_978_; lean_object* v_env_979_; uint8_t v_inheritEnv_980_; uint8_t v_setsid_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_1015_; 
v___x_975_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___closed__0));
v_cmd_976_ = lean_ctor_get(v_args_971_, 1);
v_args_977_ = lean_ctor_get(v_args_971_, 2);
v_cwd_978_ = lean_ctor_get(v_args_971_, 3);
v_env_979_ = lean_ctor_get(v_args_971_, 4);
v_inheritEnv_980_ = lean_ctor_get_uint8(v_args_971_, sizeof(void*)*5);
v_setsid_981_ = lean_ctor_get_uint8(v_args_971_, sizeof(void*)*5 + 1);
v_isSharedCheck_1015_ = !lean_is_exclusive(v_args_971_);
if (v_isSharedCheck_1015_ == 0)
{
lean_object* v_unused_1016_; 
v_unused_1016_ = lean_ctor_get(v_args_971_, 0);
lean_dec(v_unused_1016_);
v___x_983_ = v_args_971_;
v_isShared_984_ = v_isSharedCheck_1015_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_env_979_);
lean_inc(v_cwd_978_);
lean_inc(v_args_977_);
lean_inc(v_cmd_976_);
lean_dec(v_args_971_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_1015_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v_ref_985_; lean_object* v___x_987_; 
v_ref_985_ = lean_ctor_get(v_a_972_, 2);
if (v_isShared_984_ == 0)
{
lean_ctor_set(v___x_983_, 0, v___x_975_);
v___x_987_ = v___x_983_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v___x_975_);
lean_ctor_set(v_reuseFailAlloc_1014_, 1, v_cmd_976_);
lean_ctor_set(v_reuseFailAlloc_1014_, 2, v_args_977_);
lean_ctor_set(v_reuseFailAlloc_1014_, 3, v_cwd_978_);
lean_ctor_set(v_reuseFailAlloc_1014_, 4, v_env_979_);
lean_ctor_set_uint8(v_reuseFailAlloc_1014_, sizeof(void*)*5, v_inheritEnv_980_);
lean_ctor_set_uint8(v_reuseFailAlloc_1014_, sizeof(void*)*5 + 1, v_setsid_981_);
v___x_987_ = v_reuseFailAlloc_1014_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
lean_object* v___x_988_; 
v___x_988_ = lean_io_process_spawn(v___x_987_);
if (lean_obj_tag(v___x_988_) == 0)
{
lean_object* v_a_989_; lean_object* v_stdout_990_; lean_object* v_stderr_991_; lean_object* v___f_992_; lean_object* v___f_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
v_a_989_ = lean_ctor_get(v___x_988_, 0);
lean_inc(v_a_989_);
lean_dec_ref_known(v___x_988_, 1);
v_stdout_990_ = lean_ctor_get(v_a_989_, 1);
v_stderr_991_ = lean_ctor_get(v_a_989_, 2);
lean_inc(v_stderr_991_);
v___f_992_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__0___boxed), 2, 1);
lean_closure_set(v___f_992_, 0, v_stderr_991_);
lean_inc(v_stdout_990_);
v___f_993_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___lam__1___boxed), 2, 1);
lean_closure_set(v___f_993_, 0, v_stdout_990_);
v___x_994_ = lean_unsigned_to_nat(9u);
v___x_995_ = lean_io_as_task(v___f_993_, v___x_994_);
v___x_996_ = lean_io_as_task(v___f_992_, v___x_994_);
v___x_997_ = lean_unsigned_to_nat(1000u);
v___x_998_ = lean_nat_mul(v_timeout_970_, v___x_997_);
v___x_999_ = lean_unsigned_to_nat(1u);
v___x_1000_ = lean_unsigned_to_nat(64u);
v___x_1001_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_runInterruptible_go(v___x_975_, v___x_998_, v___x_999_, v___x_1000_, v_a_989_, v___x_995_, v___x_996_, v_a_972_, v_a_973_);
return v___x_1001_;
}
else
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1013_; 
v_a_1002_ = lean_ctor_get(v___x_988_, 0);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1004_ = v___x_988_;
v_isShared_1005_ = v_isSharedCheck_1013_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_988_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1013_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1011_; 
v___x_1006_ = lean_io_error_to_string(v_a_1002_);
v___x_1007_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1006_);
v___x_1008_ = l_Lean_MessageData_ofFormat(v___x_1007_);
lean_inc(v_ref_985_);
v___x_1009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1009_, 0, v_ref_985_);
lean_ctor_set(v___x_1009_, 1, v___x_1008_);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 0, v___x_1009_);
v___x_1011_ = v___x_1004_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v___x_1009_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_runInterruptible___boxed(lean_object* v_timeout_1017_, lean_object* v_args_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_){
_start:
{
lean_object* v_res_1022_; 
v_res_1022_ = l_Lean_Meta_Tactic_BVDecide_External_runInterruptible(v_timeout_1017_, v_args_1018_, v_a_1019_, v_a_1020_);
lean_dec(v_a_1020_);
lean_dec_ref(v_a_1019_);
lean_dec(v_timeout_1017_);
return v_res_1022_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1023_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__0);
v___x_1025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1024_);
return v___x_1025_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1026_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_1027_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__1);
v___x_1028_ = lean_unsigned_to_nat(0u);
v___x_1029_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
lean_ctor_set(v___x_1029_, 2, v___x_1028_);
lean_ctor_set(v___x_1029_, 3, v___x_1028_);
lean_ctor_set(v___x_1029_, 4, v___x_1027_);
lean_ctor_set(v___x_1029_, 5, v___x_1027_);
lean_ctor_set(v___x_1029_, 6, v___x_1027_);
lean_ctor_set(v___x_1029_, 7, v___x_1027_);
lean_ctor_set(v___x_1029_, 8, v___x_1027_);
lean_ctor_set(v___x_1029_, 9, v___x_1027_);
lean_ctor_set(v___x_1029_, 10, v___x_1027_);
lean_ctor_set(v___x_1029_, 11, v___x_1026_);
return v___x_1029_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1030_ = lean_unsigned_to_nat(32u);
v___x_1031_ = lean_mk_empty_array_with_capacity(v___x_1030_);
v___x_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
return v___x_1032_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1033_ = ((size_t)5ULL);
v___x_1034_ = lean_unsigned_to_nat(0u);
v___x_1035_ = lean_unsigned_to_nat(32u);
v___x_1036_ = lean_mk_empty_array_with_capacity(v___x_1035_);
v___x_1037_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__3);
v___x_1038_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1038_, 0, v___x_1037_);
lean_ctor_set(v___x_1038_, 1, v___x_1036_);
lean_ctor_set(v___x_1038_, 2, v___x_1034_);
lean_ctor_set(v___x_1038_, 3, v___x_1034_);
lean_ctor_set_usize(v___x_1038_, 4, v___x_1033_);
return v___x_1038_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1039_ = lean_box(1);
v___x_1040_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__4);
v___x_1041_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__1);
v___x_1042_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1041_);
lean_ctor_set(v___x_1042_, 1, v___x_1040_);
lean_ctor_set(v___x_1042_, 2, v___x_1039_);
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0(lean_object* v_msgData_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_){
_start:
{
lean_object* v___x_1047_; lean_object* v_toCold_1048_; lean_object* v_env_1049_; lean_object* v_options_1050_; uint8_t v___x_1051_; lean_object* v_env_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1047_ = lean_st_ref_get(v___y_1045_);
v_toCold_1048_ = lean_ctor_get(v___y_1044_, 0);
v_env_1049_ = lean_ctor_get(v___x_1047_, 0);
lean_inc_ref(v_env_1049_);
lean_dec(v___x_1047_);
v_options_1050_ = lean_ctor_get(v_toCold_1048_, 2);
v___x_1051_ = 0;
v_env_1052_ = l_Lean_Environment_setRecordingDeps(v_env_1049_, v___x_1051_);
v___x_1053_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__2);
v___x_1054_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_1050_);
v___x_1055_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1055_, 0, v_env_1052_);
lean_ctor_set(v___x_1055_, 1, v___x_1053_);
lean_ctor_set(v___x_1055_, 2, v___x_1054_);
lean_ctor_set(v___x_1055_, 3, v_options_1050_);
v___x_1056_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1055_);
lean_ctor_set(v___x_1056_, 1, v_msgData_1043_);
v___x_1057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1056_);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0___boxed(lean_object* v_msgData_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0(v_msgData_1058_, v___y_1059_, v___y_1060_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg(lean_object* v_msg_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v_ref_1067_; lean_object* v___x_1068_; lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1077_; 
v_ref_1067_ = lean_ctor_get(v___y_1064_, 2);
v___x_1068_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0_spec__0(v_msg_1063_, v___y_1064_, v___y_1065_);
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1077_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_1071_ = v___x_1068_;
v_isShared_1072_ = v_isSharedCheck_1077_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1068_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1077_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1073_; lean_object* v___x_1075_; 
lean_inc(v_ref_1067_);
v___x_1073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1073_, 0, v_ref_1067_);
lean_ctor_set(v___x_1073_, 1, v_a_1069_);
if (v_isShared_1072_ == 0)
{
lean_ctor_set_tag(v___x_1071_, 1);
lean_ctor_set(v___x_1071_, 0, v___x_1073_);
v___x_1075_ = v___x_1071_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v___x_1073_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg___boxed(lean_object* v_msg_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
lean_object* v_res_1082_; 
v_res_1082_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg(v_msg_1078_, v___y_1079_, v___y_1080_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
return v_res_1082_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__2(void){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1086_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__1));
v___x_1087_ = l_Lean_MessageData_ofFormat(v___x_1086_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg(lean_object* v_a_1088_, lean_object* v_a_1089_){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1091_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__2, &l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___closed__2);
v___x_1092_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg(v___x_1091_, v_a_1088_, v_a_1089_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg___boxed(lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg(v_a_1093_, v_a_1094_);
lean_dec(v_a_1094_);
lean_dec_ref(v_a_1093_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout(lean_object* v_00_u03b1_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_){
_start:
{
lean_object* v___x_1101_; 
v___x_1101_ = l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg(v_a_1098_, v_a_1099_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___boxed(lean_object* v_00_u03b1_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout(v_00_u03b1_1102_, v_a_1103_, v_a_1104_);
lean_dec(v_a_1104_);
lean_dec_ref(v_a_1103_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0(lean_object* v_00_u03b1_1107_, lean_object* v_msg_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v___x_1112_; 
v___x_1112_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg(v_msg_1108_, v___y_1109_, v___y_1110_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___boxed(lean_object* v_00_u03b1_1113_, lean_object* v_msg_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0(v_00_u03b1_1113_, v_msg_1114_, v___y_1115_, v___y_1116_);
lean_dec(v___y_1116_);
lean_dec_ref(v___y_1115_);
return v_res_1118_;
}
}
static uint32_t _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__2(void){
_start:
{
lean_object* v___x_1122_; uint32_t v___x_1123_; 
v___x_1122_ = lean_unsigned_to_nat(0u);
v___x_1123_ = lean_int32_of_nat(v___x_1122_);
return v___x_1123_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3___boxed__const__1(void){
_start:
{
uint32_t v___x_1124_; lean_object* v___x_1125_; 
v___x_1124_ = lean_uint32_once(&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__2, &l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__2);
v___x_1125_ = lean_box_uint32(v___x_1124_);
return v___x_1125_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3(void){
_start:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1126_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__1));
v___x_1127_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3___boxed__const__1;
v___x_1128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1126_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
return v___x_1128_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__4(void){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1129_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3, &l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__3);
v___x_1130_ = lean_unsigned_to_nat(1u);
v___x_1131_ = lean_mk_empty_array_with_capacity(v___x_1130_);
v___x_1132_ = lean_array_push(v___x_1131_, v___x_1129_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode(uint8_t v_mode_1136_){
_start:
{
lean_object* v___y_1138_; 
switch(v_mode_1136_)
{
case 0:
{
lean_object* v___x_1142_; 
v___x_1142_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__5));
v___y_1138_ = v___x_1142_;
goto v___jp_1137_;
}
case 1:
{
lean_object* v___x_1143_; 
v___x_1143_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__6));
v___y_1138_ = v___x_1143_;
goto v___jp_1137_;
}
default: 
{
lean_object* v___x_1144_; 
v___x_1144_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__7));
v___y_1138_ = v___x_1144_;
goto v___jp_1137_;
}
}
v___jp_1137_:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; 
v___x_1139_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__0));
v___x_1140_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__4, &l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__4);
lean_inc_ref(v___y_1138_);
v___x_1141_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1141_, 0, v___y_1138_);
lean_ctor_set(v___x_1141_, 1, v___x_1139_);
lean_ctor_set(v___x_1141_, 2, v___x_1140_);
return v___x_1141_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___boxed(lean_object* v_mode_1145_){
_start:
{
uint8_t v_mode_boxed_1146_; lean_object* v_res_1147_; 
v_mode_boxed_1146_ = lean_unbox(v_mode_1145_);
v_res_1147_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode(v_mode_boxed_1146_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat(lean_object* v_opts_1157_, uint8_t v_binary_1158_){
_start:
{
lean_object* v_configuration_1159_; lean_object* v_longOptions_1160_; lean_object* v_options_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1175_; 
v_configuration_1159_ = lean_ctor_get(v_opts_1157_, 0);
v_longOptions_1160_ = lean_ctor_get(v_opts_1157_, 1);
v_options_1161_ = lean_ctor_get(v_opts_1157_, 2);
v_isSharedCheck_1175_ = !lean_is_exclusive(v_opts_1157_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1163_ = v_opts_1157_;
v_isShared_1164_ = v_isSharedCheck_1175_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_options_1161_);
lean_inc(v_longOptions_1160_);
lean_inc(v_configuration_1159_);
lean_dec(v_opts_1157_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1175_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; uint32_t v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1173_; 
v___x_1165_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__2));
v___x_1166_ = l_Array_append___redArg(v_longOptions_1160_, v___x_1165_);
v___x_1167_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___closed__3));
v___x_1168_ = lean_bool_to_uint32(v_binary_1158_);
v___x_1169_ = lean_box_uint32(v___x_1168_);
v___x_1170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1167_);
lean_ctor_set(v___x_1170_, 1, v___x_1169_);
v___x_1171_ = lean_array_push(v_options_1161_, v___x_1170_);
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 2, v___x_1171_);
lean_ctor_set(v___x_1163_, 1, v___x_1166_);
v___x_1173_ = v___x_1163_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v_configuration_1159_);
lean_ctor_set(v_reuseFailAlloc_1174_, 1, v___x_1166_);
lean_ctor_set(v_reuseFailAlloc_1174_, 2, v___x_1171_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat___boxed(lean_object* v_opts_1176_, lean_object* v_binary_1177_){
_start:
{
uint8_t v_binary_boxed_1178_; lean_object* v_res_1179_; 
v_binary_boxed_1178_ = lean_unbox(v_binary_1177_);
v_res_1179_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat(v_opts_1176_, v_binary_boxed_1178_);
return v_res_1179_;
}
}
static uint32_t _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__1(void){
_start:
{
lean_object* v___x_1181_; uint32_t v___x_1182_; 
v___x_1181_ = lean_unsigned_to_nat(2u);
v___x_1182_ = lean_int32_of_nat(v___x_1181_);
return v___x_1182_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2___boxed__const__1(void){
_start:
{
uint32_t v___x_1183_; lean_object* v___x_1184_; 
v___x_1183_ = lean_uint32_once(&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__1, &l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__1);
v___x_1184_ = lean_box_uint32(v___x_1183_);
return v___x_1184_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2(void){
_start:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1185_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__0));
v___x_1186_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2___boxed__const__1;
v___x_1187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1187_, 0, v___x_1185_);
lean_ctor_set(v___x_1187_, 1, v___x_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental(lean_object* v_opts_1188_){
_start:
{
lean_object* v_configuration_1189_; lean_object* v_longOptions_1190_; lean_object* v_options_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1200_; 
v_configuration_1189_ = lean_ctor_get(v_opts_1188_, 0);
v_longOptions_1190_ = lean_ctor_get(v_opts_1188_, 1);
v_options_1191_ = lean_ctor_get(v_opts_1188_, 2);
v_isSharedCheck_1200_ = !lean_is_exclusive(v_opts_1188_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1193_ = v_opts_1188_;
v_isShared_1194_ = v_isSharedCheck_1200_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_options_1191_);
lean_inc(v_longOptions_1190_);
lean_inc(v_configuration_1189_);
lean_dec(v_opts_1188_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1200_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1198_; 
v___x_1195_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2, &l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addIncremental___closed__2);
v___x_1196_ = lean_array_push(v_options_1191_, v___x_1195_);
if (v_isShared_1194_ == 0)
{
lean_ctor_set(v___x_1193_, 2, v___x_1196_);
v___x_1198_ = v___x_1193_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v_configuration_1189_);
lean_ctor_set(v_reuseFailAlloc_1199_, 1, v_longOptions_1190_);
lean_ctor_set(v_reuseFailAlloc_1199_, 2, v___x_1196_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag(lean_object* v_opt_1202_){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1203_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag___closed__0));
v___x_1204_ = lean_string_append(v___x_1203_, v_opt_1202_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag___boxed(lean_object* v_opt_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag(v_opt_1205_);
lean_dec_ref(v_opt_1205_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flagValue(lean_object* v_opt_1208_, uint32_t v_val_1209_){
_start:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1210_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag___closed__0));
v___x_1211_ = lean_string_append(v___x_1210_, v_opt_1208_);
v___x_1212_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flagValue___closed__0));
v___x_1213_ = lean_string_append(v___x_1211_, v___x_1212_);
v___x_1214_ = lean_int32_to_int(v_val_1209_);
v___x_1215_ = l_Int_repr(v___x_1214_);
lean_dec(v___x_1214_);
v___x_1216_ = lean_string_append(v___x_1213_, v___x_1215_);
lean_dec_ref(v___x_1215_);
return v___x_1216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flagValue___boxed(lean_object* v_opt_1217_, lean_object* v_val_1218_){
_start:
{
uint32_t v_val_boxed_1219_; lean_object* v_res_1220_; 
v_val_boxed_1219_ = lean_unbox_uint32(v_val_1218_);
lean_dec(v_val_1218_);
v_res_1220_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flagValue(v_opt_1217_, v_val_boxed_1219_);
lean_dec_ref(v_opt_1217_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__1(lean_object* v_as_1221_, size_t v_sz_1222_, size_t v_i_1223_, lean_object* v_b_1224_){
_start:
{
uint8_t v___x_1225_; 
v___x_1225_ = lean_usize_dec_lt(v_i_1223_, v_sz_1222_);
if (v___x_1225_ == 0)
{
return v_b_1224_;
}
else
{
lean_object* v_a_1226_; lean_object* v_fst_1227_; lean_object* v_snd_1228_; uint32_t v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; size_t v___x_1232_; size_t v___x_1233_; 
v_a_1226_ = lean_array_uget_borrowed(v_as_1221_, v_i_1223_);
v_fst_1227_ = lean_ctor_get(v_a_1226_, 0);
v_snd_1228_ = lean_ctor_get(v_a_1226_, 1);
v___x_1229_ = lean_unbox_uint32(v_snd_1228_);
v___x_1230_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flagValue(v_fst_1227_, v___x_1229_);
v___x_1231_ = lean_array_push(v_b_1224_, v___x_1230_);
v___x_1232_ = ((size_t)1ULL);
v___x_1233_ = lean_usize_add(v_i_1223_, v___x_1232_);
v_i_1223_ = v___x_1233_;
v_b_1224_ = v___x_1231_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__1___boxed(lean_object* v_as_1235_, lean_object* v_sz_1236_, lean_object* v_i_1237_, lean_object* v_b_1238_){
_start:
{
size_t v_sz_boxed_1239_; size_t v_i_boxed_1240_; lean_object* v_res_1241_; 
v_sz_boxed_1239_ = lean_unbox_usize(v_sz_1236_);
lean_dec(v_sz_1236_);
v_i_boxed_1240_ = lean_unbox_usize(v_i_1237_);
lean_dec(v_i_1237_);
v_res_1241_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__1(v_as_1235_, v_sz_boxed_1239_, v_i_boxed_1240_, v_b_1238_);
lean_dec_ref(v_as_1235_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__0(lean_object* v_as_1242_, size_t v_sz_1243_, size_t v_i_1244_, lean_object* v_b_1245_){
_start:
{
uint8_t v___x_1246_; 
v___x_1246_ = lean_usize_dec_lt(v_i_1244_, v_sz_1243_);
if (v___x_1246_ == 0)
{
return v_b_1245_;
}
else
{
lean_object* v_a_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; size_t v___x_1250_; size_t v___x_1251_; 
v_a_1247_ = lean_array_uget_borrowed(v_as_1242_, v_i_1244_);
v___x_1248_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag(v_a_1247_);
v___x_1249_ = lean_array_push(v_b_1245_, v___x_1248_);
v___x_1250_ = ((size_t)1ULL);
v___x_1251_ = lean_usize_add(v_i_1244_, v___x_1250_);
v_i_1244_ = v___x_1251_;
v_b_1245_ = v___x_1249_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__0___boxed(lean_object* v_as_1253_, lean_object* v_sz_1254_, lean_object* v_i_1255_, lean_object* v_b_1256_){
_start:
{
size_t v_sz_boxed_1257_; size_t v_i_boxed_1258_; lean_object* v_res_1259_; 
v_sz_boxed_1257_ = lean_unbox_usize(v_sz_1254_);
lean_dec(v_sz_1254_);
v_i_boxed_1258_ = lean_unbox_usize(v_i_1255_);
lean_dec(v_i_1255_);
v_res_1259_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__0(v_as_1253_, v_sz_boxed_1257_, v_i_boxed_1258_, v_b_1256_);
lean_dec_ref(v_as_1253_);
return v_res_1259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs(lean_object* v_opts_1260_){
_start:
{
lean_object* v_configuration_1261_; lean_object* v_longOptions_1262_; lean_object* v_options_1263_; lean_object* v_args_1264_; lean_object* v___x_1265_; lean_object* v_args_1266_; size_t v_sz_1267_; size_t v___x_1268_; lean_object* v___x_1269_; size_t v_sz_1270_; lean_object* v___x_1271_; 
v_configuration_1261_ = lean_ctor_get(v_opts_1260_, 0);
v_longOptions_1262_ = lean_ctor_get(v_opts_1260_, 1);
v_options_1263_ = lean_ctor_get(v_opts_1260_, 2);
v_args_1264_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode___closed__0));
v___x_1265_ = l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_flag(v_configuration_1261_);
v_args_1266_ = lean_array_push(v_args_1264_, v___x_1265_);
v_sz_1267_ = lean_array_size(v_longOptions_1262_);
v___x_1268_ = ((size_t)0ULL);
v___x_1269_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__0(v_longOptions_1262_, v_sz_1267_, v___x_1268_, v_args_1266_);
v_sz_1270_ = lean_array_size(v_options_1263_);
v___x_1271_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs_spec__1(v_options_1263_, v_sz_1270_, v___x_1268_, v___x_1269_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs___boxed(lean_object* v_opts_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs(v_opts_1272_);
lean_dec_ref(v_opts_1272_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__1(lean_object* v_solver_1274_, lean_object* v_as_1275_, size_t v_sz_1276_, size_t v_i_1277_, lean_object* v_b_1278_){
_start:
{
uint8_t v___x_1280_; 
v___x_1280_ = lean_usize_dec_lt(v_i_1277_, v_sz_1276_);
if (v___x_1280_ == 0)
{
return v_b_1278_;
}
else
{
lean_object* v_a_1281_; lean_object* v_fst_1282_; lean_object* v_snd_1283_; lean_object* v___x_1284_; uint32_t v___x_1285_; uint8_t v___x_1286_; size_t v___x_1287_; size_t v___x_1288_; 
v_a_1281_ = lean_array_uget_borrowed(v_as_1275_, v_i_1277_);
v_fst_1282_ = lean_ctor_get(v_a_1281_, 0);
v_snd_1283_ = lean_ctor_get(v_a_1281_, 1);
v___x_1284_ = lean_box(0);
v___x_1285_ = lean_unbox_uint32(v_snd_1283_);
v___x_1286_ = l_Lean_Cadical_Solver_setOption(v_solver_1274_, v_fst_1282_, v___x_1285_);
v___x_1287_ = ((size_t)1ULL);
v___x_1288_ = lean_usize_add(v_i_1277_, v___x_1287_);
v_i_1277_ = v___x_1288_;
v_b_1278_ = v___x_1284_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__1___boxed(lean_object* v_solver_1290_, lean_object* v_as_1291_, lean_object* v_sz_1292_, lean_object* v_i_1293_, lean_object* v_b_1294_, lean_object* v___y_1295_){
_start:
{
size_t v_sz_boxed_1296_; size_t v_i_boxed_1297_; lean_object* v_res_1298_; 
v_sz_boxed_1296_ = lean_unbox_usize(v_sz_1292_);
lean_dec(v_sz_1292_);
v_i_boxed_1297_ = lean_unbox_usize(v_i_1293_);
lean_dec(v_i_1293_);
v_res_1298_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__1(v_solver_1290_, v_as_1291_, v_sz_boxed_1296_, v_i_boxed_1297_, v_b_1294_);
lean_dec_ref(v_as_1291_);
lean_dec_ref(v_solver_1290_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__0(lean_object* v_solver_1299_, lean_object* v_as_1300_, size_t v_sz_1301_, size_t v_i_1302_, lean_object* v_b_1303_){
_start:
{
uint8_t v___x_1305_; 
v___x_1305_ = lean_usize_dec_lt(v_i_1302_, v_sz_1301_);
if (v___x_1305_ == 0)
{
return v_b_1303_;
}
else
{
lean_object* v___x_1306_; lean_object* v_a_1307_; uint8_t v___x_1308_; size_t v___x_1309_; size_t v___x_1310_; 
v___x_1306_ = lean_box(0);
v_a_1307_ = lean_array_uget_borrowed(v_as_1300_, v_i_1302_);
v___x_1308_ = l_Lean_Cadical_Solver_setLongOption(v_solver_1299_, v_a_1307_);
v___x_1309_ = ((size_t)1ULL);
v___x_1310_ = lean_usize_add(v_i_1302_, v___x_1309_);
v_i_1302_ = v___x_1310_;
v_b_1303_ = v___x_1306_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__0___boxed(lean_object* v_solver_1312_, lean_object* v_as_1313_, lean_object* v_sz_1314_, lean_object* v_i_1315_, lean_object* v_b_1316_, lean_object* v___y_1317_){
_start:
{
size_t v_sz_boxed_1318_; size_t v_i_boxed_1319_; lean_object* v_res_1320_; 
v_sz_boxed_1318_ = lean_unbox_usize(v_sz_1314_);
lean_dec(v_sz_1314_);
v_i_boxed_1319_ = lean_unbox_usize(v_i_1315_);
lean_dec(v_i_1315_);
v_res_1320_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__0(v_solver_1312_, v_as_1313_, v_sz_boxed_1318_, v_i_boxed_1319_, v_b_1316_);
lean_dec_ref(v_as_1313_);
lean_dec_ref(v_solver_1312_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver(lean_object* v_opts_1321_, lean_object* v_solver_1322_){
_start:
{
lean_object* v_configuration_1324_; lean_object* v_longOptions_1325_; lean_object* v_options_1326_; uint8_t v___x_1327_; lean_object* v___x_1328_; size_t v_sz_1329_; size_t v___x_1330_; lean_object* v___x_1331_; size_t v_sz_1332_; lean_object* v___x_1333_; 
v_configuration_1324_ = lean_ctor_get(v_opts_1321_, 0);
v_longOptions_1325_ = lean_ctor_get(v_opts_1321_, 1);
v_options_1326_ = lean_ctor_get(v_opts_1321_, 2);
v___x_1327_ = l_Lean_Cadical_Solver_configure(v_solver_1322_, v_configuration_1324_);
v___x_1328_ = lean_box(0);
v_sz_1329_ = lean_array_size(v_longOptions_1325_);
v___x_1330_ = ((size_t)0ULL);
v___x_1331_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__0(v_solver_1322_, v_longOptions_1325_, v_sz_1329_, v___x_1330_, v___x_1328_);
v_sz_1332_ = lean_array_size(v_options_1326_);
v___x_1333_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver_spec__1(v_solver_1322_, v_options_1326_, v_sz_1332_, v___x_1330_, v___x_1328_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver___boxed(lean_object* v_opts_1334_, lean_object* v_solver_1335_, lean_object* v_a_1336_){
_start:
{
lean_object* v_res_1337_; 
v_res_1337_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_configureSolver(v_opts_1334_, v_solver_1335_);
lean_dec_ref(v_solver_1335_);
lean_dec_ref(v_opts_1334_);
return v_res_1337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_satQuery(lean_object* v_solverPath_1349_, lean_object* v_problemPath_1350_, lean_object* v_proofOutput_1351_, lean_object* v_timeout_1352_, uint8_t v_binaryProofs_1353_, uint8_t v_mode_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_){
_start:
{
lean_object* v___x_1358_; lean_object* v_options_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v_args_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; uint8_t v___x_1370_; uint8_t v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; 
v___x_1358_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_ofMode(v_mode_1354_);
v_options_1359_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_addLrat(v___x_1358_, v_binaryProofs_1353_);
v___x_1360_ = lean_unsigned_to_nat(2u);
v___x_1361_ = lean_mk_empty_array_with_capacity(v___x_1360_);
v___x_1362_ = lean_array_push(v___x_1361_, v_problemPath_1350_);
v___x_1363_ = lean_array_push(v___x_1362_, v_proofOutput_1351_);
v___x_1364_ = l_Lean_Meta_Tactic_BVDecide_External_SatOptions_toArgs(v_options_1359_);
lean_dec_ref(v_options_1359_);
v_args_1365_ = l_Array_append___redArg(v___x_1363_, v___x_1364_);
lean_dec_ref(v___x_1364_);
v___x_1366_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__0));
v___x_1367_ = lean_box(0);
v___x_1368_ = lean_unsigned_to_nat(0u);
v___x_1369_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__1));
v___x_1370_ = 1;
v___x_1371_ = 0;
v___x_1372_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1372_, 0, v___x_1366_);
lean_ctor_set(v___x_1372_, 1, v_solverPath_1349_);
lean_ctor_set(v___x_1372_, 2, v_args_1365_);
lean_ctor_set(v___x_1372_, 3, v___x_1367_);
lean_ctor_set(v___x_1372_, 4, v___x_1369_);
lean_ctor_set_uint8(v___x_1372_, sizeof(void*)*5, v___x_1370_);
lean_ctor_set_uint8(v___x_1372_, sizeof(void*)*5 + 1, v___x_1371_);
v___x_1373_ = l_Lean_Meta_Tactic_BVDecide_External_runInterruptible(v_timeout_1352_, v___x_1372_, v_a_1355_, v_a_1356_);
if (lean_obj_tag(v___x_1373_) == 0)
{
lean_object* v_a_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1447_; 
v_a_1374_ = lean_ctor_get(v___x_1373_, 0);
v_isSharedCheck_1447_ = !lean_is_exclusive(v___x_1373_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1376_ = v___x_1373_;
v_isShared_1377_ = v_isSharedCheck_1447_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_a_1374_);
lean_dec(v___x_1373_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1447_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
if (lean_obj_tag(v_a_1374_) == 0)
{
lean_object* v_x_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1445_; 
v_x_1378_ = lean_ctor_get(v_a_1374_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v_a_1374_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1380_ = v_a_1374_;
v_isShared_1381_ = v_isSharedCheck_1445_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_x_1378_);
lean_dec(v_a_1374_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1445_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
uint32_t v_exitCode_1382_; lean_object* v_stdout_1383_; lean_object* v_stderr_1384_; uint32_t v___x_1431_; uint8_t v___x_1432_; 
v_exitCode_1382_ = lean_ctor_get_uint32(v_x_1378_, sizeof(void*)*2);
v_stdout_1383_ = lean_ctor_get(v_x_1378_, 0);
lean_inc_ref(v_stdout_1383_);
v_stderr_1384_ = lean_ctor_get(v_x_1378_, 1);
lean_inc_ref(v_stderr_1384_);
lean_dec(v_x_1378_);
v___x_1431_ = 255;
v___x_1432_ = lean_uint32_dec_eq(v_exitCode_1382_, v___x_1431_);
if (v___x_1432_ == 0)
{
lean_object* v___x_1433_; lean_object* v___x_1434_; uint8_t v___x_1435_; 
v___x_1433_ = lean_string_utf8_byte_size(v_stdout_1383_);
v___x_1434_ = lean_unsigned_to_nat(15u);
v___x_1435_ = lean_nat_dec_le(v___x_1434_, v___x_1433_);
if (v___x_1435_ == 0)
{
goto v___jp_1396_;
}
else
{
lean_object* v___x_1436_; uint8_t v___x_1437_; 
v___x_1436_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__6));
v___x_1437_ = lean_string_memcmp(v_stdout_1383_, v___x_1436_, v___x_1368_, v___x_1368_, v___x_1434_);
if (v___x_1437_ == 0)
{
goto v___jp_1396_;
}
else
{
lean_object* v___x_1438_; lean_object* v___x_1439_; 
lean_dec_ref(v_stderr_1384_);
lean_dec_ref(v_stdout_1383_);
lean_del_object(v___x_1380_);
lean_del_object(v___x_1376_);
v___x_1438_ = lean_box(1);
v___x_1439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1438_);
return v___x_1439_;
}
}
}
else
{
lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
lean_dec_ref(v_stdout_1383_);
lean_del_object(v___x_1380_);
lean_del_object(v___x_1376_);
v___x_1440_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__7));
v___x_1441_ = lean_string_append(v___x_1440_, v_stderr_1384_);
lean_dec_ref(v_stderr_1384_);
v___x_1442_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1442_, 0, v___x_1441_);
v___x_1443_ = l_Lean_MessageData_ofFormat(v___x_1442_);
v___x_1444_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg(v___x_1443_, v_a_1355_, v_a_1356_);
return v___x_1444_;
}
v___jp_1385_:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1392_; 
v___x_1386_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__2));
v___x_1387_ = lean_string_append(v___x_1386_, v_stdout_1383_);
lean_dec_ref(v_stdout_1383_);
v___x_1388_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__3));
v___x_1389_ = lean_string_append(v___x_1387_, v___x_1388_);
v___x_1390_ = lean_string_append(v___x_1389_, v_stderr_1384_);
lean_dec_ref(v_stderr_1384_);
if (v_isShared_1381_ == 0)
{
lean_ctor_set_tag(v___x_1380_, 3);
lean_ctor_set(v___x_1380_, 0, v___x_1390_);
v___x_1392_ = v___x_1380_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v___x_1390_);
v___x_1392_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1393_ = l_Lean_MessageData_ofFormat(v___x_1392_);
v___x_1394_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg(v___x_1393_, v_a_1355_, v_a_1356_);
return v___x_1394_;
}
}
v___jp_1396_:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; uint8_t v___x_1399_; 
v___x_1397_ = lean_string_utf8_byte_size(v_stdout_1383_);
v___x_1398_ = lean_unsigned_to_nat(13u);
v___x_1399_ = lean_nat_dec_le(v___x_1398_, v___x_1397_);
if (v___x_1399_ == 0)
{
lean_del_object(v___x_1376_);
goto v___jp_1385_;
}
else
{
lean_object* v___x_1400_; uint8_t v___x_1401_; 
v___x_1400_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parseHeader___closed__0));
v___x_1401_ = lean_string_memcmp(v_stdout_1383_, v___x_1400_, v___x_1368_, v___x_1368_, v___x_1398_);
if (v___x_1401_ == 0)
{
lean_del_object(v___x_1376_);
goto v___jp_1385_;
}
else
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; 
lean_dec_ref(v_stderr_1384_);
lean_del_object(v___x_1380_);
v___x_1402_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_External_0__Lean_Meta_Tactic_BVDecide_External_ModelParser_parse), 1, 0);
lean_inc_ref(v_stdout_1383_);
v___x_1403_ = lean_string_to_utf8(v_stdout_1383_);
v___x_1404_ = l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(v___x_1402_, v___x_1403_);
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_object* v_a_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1419_; 
lean_del_object(v___x_1376_);
v_a_1405_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1407_ = v___x_1404_;
v_isShared_1408_ = v_isSharedCheck_1419_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_a_1405_);
lean_dec(v___x_1404_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1419_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1415_; 
v___x_1409_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__4));
v___x_1410_ = lean_string_append(v___x_1409_, v_a_1405_);
lean_dec(v_a_1405_);
v___x_1411_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_External_satQuery___closed__5));
v___x_1412_ = lean_string_append(v___x_1410_, v___x_1411_);
v___x_1413_ = lean_string_append(v___x_1412_, v_stdout_1383_);
lean_dec_ref(v_stdout_1383_);
if (v_isShared_1408_ == 0)
{
lean_ctor_set_tag(v___x_1407_, 3);
lean_ctor_set(v___x_1407_, 0, v___x_1413_);
v___x_1415_ = v___x_1407_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v___x_1413_);
v___x_1415_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1416_ = l_Lean_MessageData_ofFormat(v___x_1415_);
v___x_1417_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_External_throwSatTimeout_spec__0___redArg(v___x_1416_, v_a_1355_, v_a_1356_);
return v___x_1417_;
}
}
}
else
{
lean_object* v_a_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1430_; 
lean_dec_ref(v_stdout_1383_);
v_a_1420_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1422_ = v___x_1404_;
v_isShared_1423_ = v_isSharedCheck_1430_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_a_1420_);
lean_dec(v___x_1404_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1430_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1425_; 
if (v_isShared_1423_ == 0)
{
lean_ctor_set_tag(v___x_1422_, 0);
v___x_1425_ = v___x_1422_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1420_);
v___x_1425_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
lean_object* v___x_1427_; 
if (v_isShared_1377_ == 0)
{
lean_ctor_set(v___x_1376_, 0, v___x_1425_);
v___x_1427_ = v___x_1376_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v___x_1425_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
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
lean_object* v___x_1446_; 
lean_del_object(v___x_1376_);
v___x_1446_ = l_Lean_Meta_Tactic_BVDecide_External_throwSatTimeout___redArg(v_a_1355_, v_a_1356_);
return v___x_1446_;
}
}
}
else
{
lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1455_; 
v_a_1448_ = lean_ctor_get(v___x_1373_, 0);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1373_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1450_ = v___x_1373_;
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___x_1373_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1453_; 
if (v_isShared_1451_ == 0)
{
v___x_1453_ = v___x_1450_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_a_1448_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_External_satQuery___boxed(lean_object* v_solverPath_1456_, lean_object* v_problemPath_1457_, lean_object* v_proofOutput_1458_, lean_object* v_timeout_1459_, lean_object* v_binaryProofs_1460_, lean_object* v_mode_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_, lean_object* v_a_1464_){
_start:
{
uint8_t v_binaryProofs_boxed_1465_; uint8_t v_mode_boxed_1466_; lean_object* v_res_1467_; 
v_binaryProofs_boxed_1465_ = lean_unbox(v_binaryProofs_1460_);
v_mode_boxed_1466_ = lean_unbox(v_mode_1461_);
v_res_1467_ = l_Lean_Meta_Tactic_BVDecide_External_satQuery(v_solverPath_1456_, v_problemPath_1457_, v_proofOutput_1458_, v_timeout_1459_, v_binaryProofs_boxed_1465_, v_mode_boxed_1466_, v_a_1462_, v_a_1463_);
lean_dec(v_a_1463_);
lean_dec_ref(v_a_1462_);
lean_dec(v_timeout_1459_);
return v_res_1467_;
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
