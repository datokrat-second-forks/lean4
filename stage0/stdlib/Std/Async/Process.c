// Lean compiler output
// Module: Std.Async.Process
// Imports: public import Std.Time public import Std.Internal.UV.System public import Std.Data.HashMap import Init.Data.Ord.UInt
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
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_uv_chdir(lean_object*);
lean_object* lean_uv_set_process_title(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_uv_get_free_memory();
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Internal_UV_System_getrusage___boxed(lean_object*);
lean_object* l_Functor_mapRev___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_uv_get_process_title();
lean_object* lean_uv_os_getpid();
lean_object* lean_uv_cwd();
lean_object* lean_uv_get_total_memory();
lean_object* lean_uv_os_getpriority(uint64_t);
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
lean_object* lean_uv_exepath();
lean_object* lean_uv_os_getppid();
lean_object* lean_uv_get_available_memory();
lean_object* l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
lean_object* lean_uv_get_constrained_memory();
lean_object* lean_uv_os_setpriority(uint64_t, uint64_t);
lean_object* l_Rat_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_IO_Process_instReprResourceUsageStats_repr_spec__0(lean_object*);
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__0 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__0_value;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "cpuUserTime"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__1 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__2 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__3 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__3_value;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__4 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__5 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__5_value;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "peakResidentSetSizeKb"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__6 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__6_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__6_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__7 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__7_value;
static lean_once_cell_t l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__8;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "sharedMemorySizeKb"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__9 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__9_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__9_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__10 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__10_value;
static lean_once_cell_t l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__11;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "unsharedDataSizeKb"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__12 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__12_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__12_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__13 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__13_value;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "unsharedStackSizeKb"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__14 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__14_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__14_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__15 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__15_value;
static lean_once_cell_t l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__16;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "minorPageFaults"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__17 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__17_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__17_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__18 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__18_value;
static lean_once_cell_t l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__19;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "majorPageFaults"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__20 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__20_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__20_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__21 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__21_value;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "swapOperations"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__22 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__22_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__22_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__23 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__23_value;
static lean_once_cell_t l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__24;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "blockInputOps"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__25 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__25_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__25_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__26 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__26_value;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "blockOutputOps"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__27 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__27_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__27_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__28 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__28_value;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "messagesSent"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__29 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__29_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__29_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__30 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__30_value;
static lean_once_cell_t l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__31;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "messagesReceived"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__32 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__32_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__32_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__33 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__33_value;
static lean_once_cell_t l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__34;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "signalsReceived"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__35 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__35_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__35_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__36 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__36_value;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "voluntaryContextSwitches"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__37 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__37_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__37_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__38 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__38_value;
static lean_once_cell_t l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__39;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "involuntaryContextSwitches"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__40 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__40_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__40_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__41 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__41_value;
static lean_once_cell_t l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__42;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__43 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__43_value;
static lean_once_cell_t l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__44;
static lean_once_cell_t l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__45;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__46 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__46_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__43_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__47 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__47_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__3_value),((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__48 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__48_value;
static lean_once_cell_t l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__49;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__50 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__50_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__50_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__51 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__51_value;
static const lean_string_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "cpuSystemTime"};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__52 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__52_value;
static const lean_ctor_object l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__52_value)}};
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__53 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__53_value;
static lean_once_cell_t l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__54;
static lean_once_cell_t l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__55;
LEAN_EXPORT lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_IO_Process_instReprResourceUsageStats___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_IO_Process_instReprResourceUsageStats_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_IO_Process_instReprResourceUsageStats___closed__0 = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_IO_Process_instReprResourceUsageStats = (const lean_object*)&l_Std_IO_Process_instReprResourceUsageStats___closed__0_value;
static lean_once_cell_t l_Std_IO_Process_instInhabitedResourceUsageStats_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_IO_Process_instInhabitedResourceUsageStats_default___closed__0;
static lean_once_cell_t l_Std_IO_Process_instInhabitedResourceUsageStats_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_IO_Process_instInhabitedResourceUsageStats_default___closed__1;
LEAN_EXPORT lean_object* l_Std_IO_Process_instInhabitedResourceUsageStats_default;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_IO_Process_instInhabitedResourceUsageStats_default_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_instInhabitedResourceUsageStats;
LEAN_EXPORT uint64_t l_Std_IO_Process_instInhabitedPId_default;
LEAN_EXPORT uint64_t l_Std_IO_Process_instInhabitedPId;
LEAN_EXPORT uint8_t l_Std_IO_Process_instDecidableEqPId_decEq(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Std_IO_Process_instDecidableEqPId_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_IO_Process_instDecidableEqPId(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Std_IO_Process_instDecidableEqPId___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_IO_Process_instOrdPId_ord(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Std_IO_Process_instOrdPId_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_IO_Process_instOrdPId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_IO_Process_instOrdPId_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_IO_Process_instOrdPId___closed__0 = (const lean_object*)&l_Std_IO_Process_instOrdPId___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_IO_Process_instOrdPId = (const lean_object*)&l_Std_IO_Process_instOrdPId___closed__0_value;
static const lean_string_object l_Std_IO_Process_instReprPId___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "PId.mk "};
static const lean_object* l_Std_IO_Process_instReprPId___lam__0___closed__0 = (const lean_object*)&l_Std_IO_Process_instReprPId___lam__0___closed__0_value;
static const lean_ctor_object l_Std_IO_Process_instReprPId___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_IO_Process_instReprPId___lam__0___closed__0_value)}};
static const lean_object* l_Std_IO_Process_instReprPId___lam__0___closed__1 = (const lean_object*)&l_Std_IO_Process_instReprPId___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_IO_Process_instReprPId___lam__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_instReprPId___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_IO_Process_instReprPId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_IO_Process_instReprPId___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_IO_Process_instReprPId___closed__0 = (const lean_object*)&l_Std_IO_Process_instReprPId___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_IO_Process_instReprPId = (const lean_object*)&l_Std_IO_Process_instReprPId___closed__0_value;
LEAN_EXPORT lean_object* l_Std_IO_Process_getProcessTitle();
LEAN_EXPORT lean_object* l_Std_IO_Process_getProcessTitle___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_setProcessTitle(lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_setProcessTitle___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_getId();
LEAN_EXPORT lean_object* l_Std_IO_Process_getId___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_getParentId();
LEAN_EXPORT lean_object* l_Std_IO_Process_getParentId___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_getCwd();
LEAN_EXPORT lean_object* l_Std_IO_Process_getCwd___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_setCwd(lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_setCwd___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_getPriority(uint64_t);
LEAN_EXPORT lean_object* l_Std_IO_Process_getPriority___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_setPriority(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Std_IO_Process_setPriority___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_getResourceUsage___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_getResourceUsage___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_IO_Process_getResourceUsage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_IO_Process_getResourceUsage___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_IO_Process_getResourceUsage___closed__0 = (const lean_object*)&l_Std_IO_Process_getResourceUsage___closed__0_value;
static const lean_closure_object l_Std_IO_Process_getResourceUsage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_IO_Process_getResourceUsage___closed__1 = (const lean_object*)&l_Std_IO_Process_getResourceUsage___closed__1_value;
static const lean_closure_object l_Std_IO_Process_getResourceUsage___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_IO_Process_getResourceUsage___closed__2 = (const lean_object*)&l_Std_IO_Process_getResourceUsage___closed__2_value;
static const lean_ctor_object l_Std_IO_Process_getResourceUsage___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_IO_Process_getResourceUsage___closed__1_value),((lean_object*)&l_Std_IO_Process_getResourceUsage___closed__2_value)}};
static const lean_object* l_Std_IO_Process_getResourceUsage___closed__3 = (const lean_object*)&l_Std_IO_Process_getResourceUsage___closed__3_value;
static const lean_closure_object l_Std_IO_Process_getResourceUsage___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_UV_System_getrusage___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_IO_Process_getResourceUsage___closed__4 = (const lean_object*)&l_Std_IO_Process_getResourceUsage___closed__4_value;
LEAN_EXPORT lean_object* l_Std_IO_Process_getResourceUsage();
LEAN_EXPORT lean_object* l_Std_IO_Process_getResourceUsage___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_getExecutablePath();
LEAN_EXPORT lean_object* l_Std_IO_Process_getExecutablePath___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_freeMemory();
LEAN_EXPORT lean_object* l_Std_IO_Process_freeMemory___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_totalMemory();
LEAN_EXPORT lean_object* l_Std_IO_Process_totalMemory___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_constrainedMemory();
LEAN_EXPORT lean_object* l_Std_IO_Process_constrainedMemory___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IO_Process_availableMemory();
LEAN_EXPORT lean_object* l_Std_IO_Process_availableMemory___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_IO_Process_instReprResourceUsageStats_repr_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_unsigned_to_nat(25u);
v___x_17_ = lean_nat_to_int(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_unsigned_to_nat(22u);
v___x_22_ = lean_nat_to_int(v___x_21_);
return v___x_22_;
}
}
static lean_object* _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_29_ = lean_unsigned_to_nat(23u);
v___x_30_ = lean_nat_to_int(v___x_29_);
return v___x_30_;
}
}
static lean_object* _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = lean_unsigned_to_nat(19u);
v___x_35_ = lean_nat_to_int(v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_unsigned_to_nat(18u);
v___x_43_ = lean_nat_to_int(v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__31(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = lean_unsigned_to_nat(16u);
v___x_54_ = lean_nat_to_int(v___x_53_);
return v___x_54_;
}
}
static lean_object* _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__34(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_unsigned_to_nat(20u);
v___x_59_ = lean_nat_to_int(v___x_58_);
return v___x_59_;
}
}
static lean_object* _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__39(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = lean_unsigned_to_nat(28u);
v___x_67_ = lean_nat_to_int(v___x_66_);
return v___x_67_;
}
}
static lean_object* _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__42(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_unsigned_to_nat(30u);
v___x_72_ = lean_nat_to_int(v___x_71_);
return v___x_72_;
}
}
static lean_object* _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__44(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__0));
v___x_75_ = lean_string_length(v___x_74_);
return v___x_75_;
}
}
static lean_object* _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__45(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = lean_obj_once(&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__44, &l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__44_once, _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__44);
v___x_77_ = lean_nat_to_int(v___x_76_);
return v___x_77_;
}
}
static lean_object* _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__49(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_unsigned_to_nat(15u);
v___x_86_ = lean_nat_to_int(v___x_85_);
return v___x_86_;
}
}
static lean_object* _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__54(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = lean_unsigned_to_nat(17u);
v___x_94_ = lean_nat_to_int(v___x_93_);
return v___x_94_;
}
}
static lean_object* _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__55(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = lean_unsigned_to_nat(0u);
v___x_96_ = lean_nat_to_int(v___x_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg(lean_object* v_x_97_){
_start:
{
lean_object* v_cpuUserTime_98_; lean_object* v_cpuSystemTime_99_; uint64_t v_peakResidentSetSizeKb_100_; uint64_t v_sharedMemorySizeKb_101_; uint64_t v_unsharedDataSizeKb_102_; uint64_t v_unsharedStackSizeKb_103_; uint64_t v_minorPageFaults_104_; uint64_t v_majorPageFaults_105_; uint64_t v_swapOperations_106_; uint64_t v_blockInputOps_107_; uint64_t v_blockOutputOps_108_; uint64_t v_messagesSent_109_; uint64_t v_messagesReceived_110_; uint64_t v_signalsReceived_111_; uint64_t v_voluntaryContextSwitches_112_; uint64_t v_involuntaryContextSwitches_113_; lean_object* v___x_114_; lean_object* v___y_116_; lean_object* v___y_117_; uint8_t v___y_118_; lean_object* v___y_119_; lean_object* v___y_120_; lean_object* v___y_121_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___y_298_; lean_object* v___x_319_; lean_object* v___x_320_; uint8_t v___x_321_; 
v_cpuUserTime_98_ = lean_ctor_get(v_x_97_, 0);
v_cpuSystemTime_99_ = lean_ctor_get(v_x_97_, 1);
v_peakResidentSetSizeKb_100_ = lean_ctor_get_uint64(v_x_97_, sizeof(void*)*2);
v_sharedMemorySizeKb_101_ = lean_ctor_get_uint64(v_x_97_, sizeof(void*)*2 + 8);
v_unsharedDataSizeKb_102_ = lean_ctor_get_uint64(v_x_97_, sizeof(void*)*2 + 16);
v_unsharedStackSizeKb_103_ = lean_ctor_get_uint64(v_x_97_, sizeof(void*)*2 + 24);
v_minorPageFaults_104_ = lean_ctor_get_uint64(v_x_97_, sizeof(void*)*2 + 32);
v_majorPageFaults_105_ = lean_ctor_get_uint64(v_x_97_, sizeof(void*)*2 + 40);
v_swapOperations_106_ = lean_ctor_get_uint64(v_x_97_, sizeof(void*)*2 + 48);
v_blockInputOps_107_ = lean_ctor_get_uint64(v_x_97_, sizeof(void*)*2 + 56);
v_blockOutputOps_108_ = lean_ctor_get_uint64(v_x_97_, sizeof(void*)*2 + 64);
v_messagesSent_109_ = lean_ctor_get_uint64(v_x_97_, sizeof(void*)*2 + 72);
v_messagesReceived_110_ = lean_ctor_get_uint64(v_x_97_, sizeof(void*)*2 + 80);
v_signalsReceived_111_ = lean_ctor_get_uint64(v_x_97_, sizeof(void*)*2 + 88);
v_voluntaryContextSwitches_112_ = lean_ctor_get_uint64(v_x_97_, sizeof(void*)*2 + 96);
v_involuntaryContextSwitches_113_ = lean_ctor_get_uint64(v_x_97_, sizeof(void*)*2 + 104);
v___x_114_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__5));
v___x_295_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__48));
v___x_296_ = lean_obj_once(&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__49, &l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__49_once, _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__49);
v___x_319_ = lean_unsigned_to_nat(0u);
v___x_320_ = lean_obj_once(&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__55, &l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__55_once, _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__55);
v___x_321_ = lean_int_dec_lt(v_cpuUserTime_98_, v___x_320_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = l_Int_repr(v_cpuUserTime_98_);
v___x_323_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
v___y_298_ = v___x_323_;
goto v___jp_297_;
}
else
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_324_ = l_Int_repr(v_cpuUserTime_98_);
v___x_325_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
v___x_326_ = l_Repr_addAppParen(v___x_325_, v___x_319_);
v___y_298_ = v___x_326_;
goto v___jp_297_;
}
v___jp_115_:
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
lean_inc_n(v___y_120_, 2);
v___x_122_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_122_, 0, v___y_120_);
lean_ctor_set(v___x_122_, 1, v___y_121_);
v___x_123_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_123_, 0, v___x_122_);
lean_ctor_set_uint8(v___x_123_, sizeof(void*)*1, v___y_118_);
v___x_124_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_124_, 0, v___y_116_);
lean_ctor_set(v___x_124_, 1, v___x_123_);
lean_inc_n(v___y_119_, 14);
v___x_125_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
lean_ctor_set(v___x_125_, 1, v___y_119_);
lean_inc_n(v___y_117_, 14);
v___x_126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v___y_117_);
v___x_127_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__7));
v___x_128_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_126_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
v___x_129_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
lean_ctor_set(v___x_129_, 1, v___x_114_);
v___x_130_ = lean_obj_once(&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__8, &l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__8_once, _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__8);
v___x_131_ = lean_uint64_to_nat(v_peakResidentSetSizeKb_100_);
v___x_132_ = l_Nat_reprFast(v___x_131_);
v___x_133_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
v___x_134_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_130_);
lean_ctor_set(v___x_134_, 1, v___x_133_);
v___x_135_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set_uint8(v___x_135_, sizeof(void*)*1, v___y_118_);
v___x_136_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_129_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___x_137_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_137_, 0, v___x_136_);
lean_ctor_set(v___x_137_, 1, v___y_119_);
v___x_138_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
lean_ctor_set(v___x_138_, 1, v___y_117_);
v___x_139_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__10));
v___x_140_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_140_, 0, v___x_138_);
lean_ctor_set(v___x_140_, 1, v___x_139_);
v___x_141_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
lean_ctor_set(v___x_141_, 1, v___x_114_);
v___x_142_ = lean_obj_once(&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__11, &l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__11_once, _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__11);
v___x_143_ = lean_uint64_to_nat(v_sharedMemorySizeKb_101_);
v___x_144_ = l_Nat_reprFast(v___x_143_);
v___x_145_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
v___x_146_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_142_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
v___x_147_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_147_, 0, v___x_146_);
lean_ctor_set_uint8(v___x_147_, sizeof(void*)*1, v___y_118_);
v___x_148_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_148_, 0, v___x_141_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
lean_ctor_set(v___x_149_, 1, v___y_119_);
v___x_150_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v___y_117_);
v___x_151_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__13));
v___x_152_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_152_, 0, v___x_150_);
lean_ctor_set(v___x_152_, 1, v___x_151_);
v___x_153_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
lean_ctor_set(v___x_153_, 1, v___x_114_);
v___x_154_ = lean_uint64_to_nat(v_unsharedDataSizeKb_102_);
v___x_155_ = l_Nat_reprFast(v___x_154_);
v___x_156_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
v___x_157_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_142_);
lean_ctor_set(v___x_157_, 1, v___x_156_);
v___x_158_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_158_, 0, v___x_157_);
lean_ctor_set_uint8(v___x_158_, sizeof(void*)*1, v___y_118_);
v___x_159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_153_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
v___x_160_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
lean_ctor_set(v___x_160_, 1, v___y_119_);
v___x_161_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set(v___x_161_, 1, v___y_117_);
v___x_162_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__15));
v___x_163_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_161_);
lean_ctor_set(v___x_163_, 1, v___x_162_);
v___x_164_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
lean_ctor_set(v___x_164_, 1, v___x_114_);
v___x_165_ = lean_obj_once(&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__16, &l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__16_once, _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__16);
v___x_166_ = lean_uint64_to_nat(v_unsharedStackSizeKb_103_);
v___x_167_ = l_Nat_reprFast(v___x_166_);
v___x_168_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
v___x_169_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_165_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
v___x_170_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_170_, 0, v___x_169_);
lean_ctor_set_uint8(v___x_170_, sizeof(void*)*1, v___y_118_);
v___x_171_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_164_);
lean_ctor_set(v___x_171_, 1, v___x_170_);
v___x_172_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
lean_ctor_set(v___x_172_, 1, v___y_119_);
v___x_173_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
lean_ctor_set(v___x_173_, 1, v___y_117_);
v___x_174_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__18));
v___x_175_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_175_, 0, v___x_173_);
lean_ctor_set(v___x_175_, 1, v___x_174_);
v___x_176_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
lean_ctor_set(v___x_176_, 1, v___x_114_);
v___x_177_ = lean_obj_once(&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__19, &l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__19_once, _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__19);
v___x_178_ = lean_uint64_to_nat(v_minorPageFaults_104_);
v___x_179_ = l_Nat_reprFast(v___x_178_);
v___x_180_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
v___x_181_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_177_);
lean_ctor_set(v___x_181_, 1, v___x_180_);
v___x_182_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_182_, 0, v___x_181_);
lean_ctor_set_uint8(v___x_182_, sizeof(void*)*1, v___y_118_);
v___x_183_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_183_, 0, v___x_176_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
v___x_184_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
lean_ctor_set(v___x_184_, 1, v___y_119_);
v___x_185_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
lean_ctor_set(v___x_185_, 1, v___y_117_);
v___x_186_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__21));
v___x_187_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_185_);
lean_ctor_set(v___x_187_, 1, v___x_186_);
v___x_188_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
lean_ctor_set(v___x_188_, 1, v___x_114_);
v___x_189_ = lean_uint64_to_nat(v_majorPageFaults_105_);
v___x_190_ = l_Nat_reprFast(v___x_189_);
v___x_191_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
v___x_192_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_177_);
lean_ctor_set(v___x_192_, 1, v___x_191_);
v___x_193_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set_uint8(v___x_193_, sizeof(void*)*1, v___y_118_);
v___x_194_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_188_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
v___x_195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
lean_ctor_set(v___x_195_, 1, v___y_119_);
v___x_196_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
lean_ctor_set(v___x_196_, 1, v___y_117_);
v___x_197_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__23));
v___x_198_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_196_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v___x_199_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_199_, 0, v___x_198_);
lean_ctor_set(v___x_199_, 1, v___x_114_);
v___x_200_ = lean_obj_once(&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__24, &l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__24_once, _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__24);
v___x_201_ = lean_uint64_to_nat(v_swapOperations_106_);
v___x_202_ = l_Nat_reprFast(v___x_201_);
v___x_203_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
v___x_204_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_204_, 0, v___x_200_);
lean_ctor_set(v___x_204_, 1, v___x_203_);
v___x_205_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_205_, 0, v___x_204_);
lean_ctor_set_uint8(v___x_205_, sizeof(void*)*1, v___y_118_);
v___x_206_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_199_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
v___x_207_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
lean_ctor_set(v___x_207_, 1, v___y_119_);
v___x_208_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
lean_ctor_set(v___x_208_, 1, v___y_117_);
v___x_209_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__26));
v___x_210_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_208_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v___x_211_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
lean_ctor_set(v___x_211_, 1, v___x_114_);
v___x_212_ = lean_uint64_to_nat(v_blockInputOps_107_);
v___x_213_ = l_Nat_reprFast(v___x_212_);
v___x_214_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
v___x_215_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_215_, 0, v___y_120_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
v___x_216_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_216_, 0, v___x_215_);
lean_ctor_set_uint8(v___x_216_, sizeof(void*)*1, v___y_118_);
v___x_217_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_211_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
lean_ctor_set(v___x_218_, 1, v___y_119_);
v___x_219_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
lean_ctor_set(v___x_219_, 1, v___y_117_);
v___x_220_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__28));
v___x_221_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_219_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
v___x_222_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v___x_114_);
v___x_223_ = lean_uint64_to_nat(v_blockOutputOps_108_);
v___x_224_ = l_Nat_reprFast(v___x_223_);
v___x_225_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
v___x_226_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_200_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_227_, 0, v___x_226_);
lean_ctor_set_uint8(v___x_227_, sizeof(void*)*1, v___y_118_);
v___x_228_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_228_, 0, v___x_222_);
lean_ctor_set(v___x_228_, 1, v___x_227_);
v___x_229_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
lean_ctor_set(v___x_229_, 1, v___y_119_);
v___x_230_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
lean_ctor_set(v___x_230_, 1, v___y_117_);
v___x_231_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__30));
v___x_232_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_230_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
lean_ctor_set(v___x_233_, 1, v___x_114_);
v___x_234_ = lean_obj_once(&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__31, &l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__31_once, _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__31);
v___x_235_ = lean_uint64_to_nat(v_messagesSent_109_);
v___x_236_ = l_Nat_reprFast(v___x_235_);
v___x_237_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
v___x_238_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_234_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_239_, 0, v___x_238_);
lean_ctor_set_uint8(v___x_239_, sizeof(void*)*1, v___y_118_);
v___x_240_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_233_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
lean_ctor_set(v___x_241_, 1, v___y_119_);
v___x_242_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
lean_ctor_set(v___x_242_, 1, v___y_117_);
v___x_243_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__33));
v___x_244_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_242_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
lean_ctor_set(v___x_245_, 1, v___x_114_);
v___x_246_ = lean_obj_once(&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__34, &l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__34_once, _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__34);
v___x_247_ = lean_uint64_to_nat(v_messagesReceived_110_);
v___x_248_ = l_Nat_reprFast(v___x_247_);
v___x_249_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
v___x_250_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_246_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_251_, 0, v___x_250_);
lean_ctor_set_uint8(v___x_251_, sizeof(void*)*1, v___y_118_);
v___x_252_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_245_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
lean_ctor_set(v___x_253_, 1, v___y_119_);
v___x_254_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
lean_ctor_set(v___x_254_, 1, v___y_117_);
v___x_255_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__36));
v___x_256_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_254_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
lean_ctor_set(v___x_257_, 1, v___x_114_);
v___x_258_ = lean_uint64_to_nat(v_signalsReceived_111_);
v___x_259_ = l_Nat_reprFast(v___x_258_);
v___x_260_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
v___x_261_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_177_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
v___x_262_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_262_, 0, v___x_261_);
lean_ctor_set_uint8(v___x_262_, sizeof(void*)*1, v___y_118_);
v___x_263_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_257_);
lean_ctor_set(v___x_263_, 1, v___x_262_);
v___x_264_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
lean_ctor_set(v___x_264_, 1, v___y_119_);
v___x_265_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
lean_ctor_set(v___x_265_, 1, v___y_117_);
v___x_266_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__38));
v___x_267_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_267_, 0, v___x_265_);
lean_ctor_set(v___x_267_, 1, v___x_266_);
v___x_268_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
lean_ctor_set(v___x_268_, 1, v___x_114_);
v___x_269_ = lean_obj_once(&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__39, &l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__39_once, _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__39);
v___x_270_ = lean_uint64_to_nat(v_voluntaryContextSwitches_112_);
v___x_271_ = l_Nat_reprFast(v___x_270_);
v___x_272_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
v___x_273_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_273_, 0, v___x_269_);
lean_ctor_set(v___x_273_, 1, v___x_272_);
v___x_274_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_274_, 0, v___x_273_);
lean_ctor_set_uint8(v___x_274_, sizeof(void*)*1, v___y_118_);
v___x_275_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_268_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
v___x_276_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set(v___x_276_, 1, v___y_119_);
v___x_277_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v___y_117_);
v___x_278_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__41));
v___x_279_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_279_, 0, v___x_277_);
lean_ctor_set(v___x_279_, 1, v___x_278_);
v___x_280_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
lean_ctor_set(v___x_280_, 1, v___x_114_);
v___x_281_ = lean_obj_once(&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__42, &l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__42_once, _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__42);
v___x_282_ = lean_uint64_to_nat(v_involuntaryContextSwitches_113_);
v___x_283_ = l_Nat_reprFast(v___x_282_);
v___x_284_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
v___x_285_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_281_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_286_, 0, v___x_285_);
lean_ctor_set_uint8(v___x_286_, sizeof(void*)*1, v___y_118_);
v___x_287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_280_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
v___x_288_ = lean_obj_once(&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__45, &l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__45_once, _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__45);
v___x_289_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__46));
v___x_290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v___x_287_);
v___x_291_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__47));
v___x_292_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_290_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_288_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_294_, 0, v___x_293_);
lean_ctor_set_uint8(v___x_294_, sizeof(void*)*1, v___y_118_);
return v___x_294_;
}
v___jp_297_:
{
lean_object* v___x_299_; uint8_t v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; uint8_t v___x_313_; 
v___x_299_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_296_);
lean_ctor_set(v___x_299_, 1, v___y_298_);
v___x_300_ = 0;
v___x_301_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_301_, 0, v___x_299_);
lean_ctor_set_uint8(v___x_301_, sizeof(void*)*1, v___x_300_);
v___x_302_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_295_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__51));
v___x_304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_302_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
v___x_305_ = lean_box(1);
v___x_306_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_306_, 0, v___x_304_);
lean_ctor_set(v___x_306_, 1, v___x_305_);
v___x_307_ = ((lean_object*)(l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__53));
v___x_308_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_308_, 0, v___x_306_);
lean_ctor_set(v___x_308_, 1, v___x_307_);
v___x_309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
lean_ctor_set(v___x_309_, 1, v___x_114_);
v___x_310_ = lean_obj_once(&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__54, &l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__54_once, _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__54);
v___x_311_ = lean_unsigned_to_nat(0u);
v___x_312_ = lean_obj_once(&l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__55, &l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__55_once, _init_l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___closed__55);
v___x_313_ = lean_int_dec_lt(v_cpuSystemTime_99_, v___x_312_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = l_Int_repr(v_cpuSystemTime_99_);
v___x_315_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
v___y_116_ = v___x_309_;
v___y_117_ = v___x_305_;
v___y_118_ = v___x_300_;
v___y_119_ = v___x_303_;
v___y_120_ = v___x_310_;
v___y_121_ = v___x_315_;
goto v___jp_115_;
}
else
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_316_ = l_Int_repr(v_cpuSystemTime_99_);
v___x_317_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
v___x_318_ = l_Repr_addAppParen(v___x_317_, v___x_311_);
v___y_116_ = v___x_309_;
v___y_117_ = v___x_305_;
v___y_118_ = v___x_300_;
v___y_119_ = v___x_303_;
v___y_120_ = v___x_310_;
v___y_121_ = v___x_318_;
goto v___jp_115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___redArg___boxed(lean_object* v_x_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Std_IO_Process_instReprResourceUsageStats_repr___redArg(v_x_327_);
lean_dec_ref(v_x_327_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr(lean_object* v_x_329_, lean_object* v_prec_330_){
_start:
{
lean_object* v___x_331_; 
v___x_331_ = l_Std_IO_Process_instReprResourceUsageStats_repr___redArg(v_x_329_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_instReprResourceUsageStats_repr___boxed(lean_object* v_x_332_, lean_object* v_prec_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Std_IO_Process_instReprResourceUsageStats_repr(v_x_332_, v_prec_333_);
lean_dec(v_prec_333_);
lean_dec_ref(v_x_332_);
return v_res_334_;
}
}
static lean_object* _init_l_Std_IO_Process_instInhabitedResourceUsageStats_default___closed__0(void){
_start:
{
lean_object* v___x_337_; 
v___x_337_ = l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
return v___x_337_;
}
}
static lean_object* _init_l_Std_IO_Process_instInhabitedResourceUsageStats_default___closed__1(void){
_start:
{
uint64_t v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_338_ = 0ULL;
v___x_339_ = lean_obj_once(&l_Std_IO_Process_instInhabitedResourceUsageStats_default___closed__0, &l_Std_IO_Process_instInhabitedResourceUsageStats_default___closed__0_once, _init_l_Std_IO_Process_instInhabitedResourceUsageStats_default___closed__0);
v___x_340_ = lean_alloc_ctor(0, 2, 112);
lean_ctor_set(v___x_340_, 0, v___x_339_);
lean_ctor_set(v___x_340_, 1, v___x_339_);
lean_ctor_set_uint64(v___x_340_, sizeof(void*)*2, v___x_338_);
lean_ctor_set_uint64(v___x_340_, sizeof(void*)*2 + 8, v___x_338_);
lean_ctor_set_uint64(v___x_340_, sizeof(void*)*2 + 16, v___x_338_);
lean_ctor_set_uint64(v___x_340_, sizeof(void*)*2 + 24, v___x_338_);
lean_ctor_set_uint64(v___x_340_, sizeof(void*)*2 + 32, v___x_338_);
lean_ctor_set_uint64(v___x_340_, sizeof(void*)*2 + 40, v___x_338_);
lean_ctor_set_uint64(v___x_340_, sizeof(void*)*2 + 48, v___x_338_);
lean_ctor_set_uint64(v___x_340_, sizeof(void*)*2 + 56, v___x_338_);
lean_ctor_set_uint64(v___x_340_, sizeof(void*)*2 + 64, v___x_338_);
lean_ctor_set_uint64(v___x_340_, sizeof(void*)*2 + 72, v___x_338_);
lean_ctor_set_uint64(v___x_340_, sizeof(void*)*2 + 80, v___x_338_);
lean_ctor_set_uint64(v___x_340_, sizeof(void*)*2 + 88, v___x_338_);
lean_ctor_set_uint64(v___x_340_, sizeof(void*)*2 + 96, v___x_338_);
lean_ctor_set_uint64(v___x_340_, sizeof(void*)*2 + 104, v___x_338_);
return v___x_340_;
}
}
static lean_object* _init_l_Std_IO_Process_instInhabitedResourceUsageStats_default(void){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = lean_obj_once(&l_Std_IO_Process_instInhabitedResourceUsageStats_default___closed__1, &l_Std_IO_Process_instInhabitedResourceUsageStats_default___closed__1_once, _init_l_Std_IO_Process_instInhabitedResourceUsageStats_default___closed__1);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_IO_Process_instInhabitedResourceUsageStats_default_spec__0(lean_object* v_a_342_){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = lean_nat_to_int(v_a_342_);
v___x_344_ = l_Rat_ofInt(v___x_343_);
return v___x_344_;
}
}
static lean_object* _init_l_Std_IO_Process_instInhabitedResourceUsageStats(void){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = l_Std_IO_Process_instInhabitedResourceUsageStats_default;
return v___x_345_;
}
}
static uint64_t _init_l_Std_IO_Process_instInhabitedPId_default(void){
_start:
{
uint64_t v___x_346_; 
v___x_346_ = 0ULL;
return v___x_346_;
}
}
static uint64_t _init_l_Std_IO_Process_instInhabitedPId(void){
_start:
{
uint64_t v___x_347_; 
v___x_347_ = 0ULL;
return v___x_347_;
}
}
LEAN_EXPORT uint8_t l_Std_IO_Process_instDecidableEqPId_decEq(uint64_t v_x_348_, uint64_t v_x_349_){
_start:
{
uint8_t v___x_350_; 
v___x_350_ = lean_uint64_dec_eq(v_x_348_, v_x_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_instDecidableEqPId_decEq___boxed(lean_object* v_x_351_, lean_object* v_x_352_){
_start:
{
uint64_t v_x_31__boxed_353_; uint64_t v_x_32__boxed_354_; uint8_t v_res_355_; lean_object* v_r_356_; 
v_x_31__boxed_353_ = lean_unbox_uint64(v_x_351_);
lean_dec_ref(v_x_351_);
v_x_32__boxed_354_ = lean_unbox_uint64(v_x_352_);
lean_dec_ref(v_x_352_);
v_res_355_ = l_Std_IO_Process_instDecidableEqPId_decEq(v_x_31__boxed_353_, v_x_32__boxed_354_);
v_r_356_ = lean_box(v_res_355_);
return v_r_356_;
}
}
LEAN_EXPORT uint8_t l_Std_IO_Process_instDecidableEqPId(uint64_t v_x_357_, uint64_t v_x_358_){
_start:
{
uint8_t v___x_359_; 
v___x_359_ = lean_uint64_dec_eq(v_x_357_, v_x_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_instDecidableEqPId___boxed(lean_object* v_x_360_, lean_object* v_x_361_){
_start:
{
uint64_t v_x_6__boxed_362_; uint64_t v_x_7__boxed_363_; uint8_t v_res_364_; lean_object* v_r_365_; 
v_x_6__boxed_362_ = lean_unbox_uint64(v_x_360_);
lean_dec_ref(v_x_360_);
v_x_7__boxed_363_ = lean_unbox_uint64(v_x_361_);
lean_dec_ref(v_x_361_);
v_res_364_ = l_Std_IO_Process_instDecidableEqPId(v_x_6__boxed_362_, v_x_7__boxed_363_);
v_r_365_ = lean_box(v_res_364_);
return v_r_365_;
}
}
LEAN_EXPORT uint8_t l_Std_IO_Process_instOrdPId_ord(uint64_t v_x_366_, uint64_t v_x_367_){
_start:
{
uint8_t v___x_368_; 
v___x_368_ = lean_uint64_dec_lt(v_x_366_, v_x_367_);
if (v___x_368_ == 0)
{
uint8_t v___x_369_; 
v___x_369_ = lean_uint64_dec_eq(v_x_366_, v_x_367_);
if (v___x_369_ == 0)
{
uint8_t v___x_370_; 
v___x_370_ = 2;
return v___x_370_;
}
else
{
uint8_t v___x_371_; 
v___x_371_ = 1;
return v___x_371_;
}
}
else
{
uint8_t v___x_372_; 
v___x_372_ = 0;
return v___x_372_;
}
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_instOrdPId_ord___boxed(lean_object* v_x_373_, lean_object* v_x_374_){
_start:
{
uint64_t v_x_70__boxed_375_; uint64_t v_x_71__boxed_376_; uint8_t v_res_377_; lean_object* v_r_378_; 
v_x_70__boxed_375_ = lean_unbox_uint64(v_x_373_);
lean_dec_ref(v_x_373_);
v_x_71__boxed_376_ = lean_unbox_uint64(v_x_374_);
lean_dec_ref(v_x_374_);
v_res_377_ = l_Std_IO_Process_instOrdPId_ord(v_x_70__boxed_375_, v_x_71__boxed_376_);
v_r_378_ = lean_box(v_res_377_);
return v_r_378_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_instReprPId___lam__0(uint64_t v_u_384_, lean_object* v___y_385_){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_386_ = ((lean_object*)(l_Std_IO_Process_instReprPId___lam__0___closed__1));
v___x_387_ = lean_uint64_to_nat(v_u_384_);
v___x_388_ = l_Nat_reprFast(v___x_387_);
v___x_389_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_389_, 0, v___x_388_);
v___x_390_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_390_, 0, v___x_386_);
lean_ctor_set(v___x_390_, 1, v___x_389_);
v___x_391_ = l_Repr_addAppParen(v___x_390_, v___y_385_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_instReprPId___lam__0___boxed(lean_object* v_u_392_, lean_object* v___y_393_){
_start:
{
uint64_t v_u_boxed_394_; lean_object* v_res_395_; 
v_u_boxed_394_ = lean_unbox_uint64(v_u_392_);
lean_dec_ref(v_u_392_);
v_res_395_ = l_Std_IO_Process_instReprPId___lam__0(v_u_boxed_394_, v___y_393_);
lean_dec(v___y_393_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_getProcessTitle(){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = lean_uv_get_process_title();
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_getProcessTitle___boxed(lean_object* v___y_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Std_IO_Process_getProcessTitle();
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_setProcessTitle(lean_object* v_title_402_){
_start:
{
lean_object* v___x_404_; 
v___x_404_ = lean_uv_set_process_title(v_title_402_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_setProcessTitle___boxed(lean_object* v_title_405_, lean_object* v___y_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Std_IO_Process_setProcessTitle(v_title_405_);
lean_dec_ref(v_title_405_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_getId(){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = lean_uv_os_getpid();
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_417_; 
v_a_410_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_417_ == 0)
{
v___x_412_ = v___x_409_;
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_409_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_413_ == 0)
{
v___x_415_ = v___x_412_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_a_410_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
else
{
lean_object* v_a_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_425_; 
v_a_418_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_425_ == 0)
{
v___x_420_ = v___x_409_;
v_isShared_421_ = v_isSharedCheck_425_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_a_418_);
lean_dec(v___x_409_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_425_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_423_; 
if (v_isShared_421_ == 0)
{
v___x_423_ = v___x_420_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_a_418_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_getId___boxed(lean_object* v___y_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Std_IO_Process_getId();
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_getParentId(){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = lean_uv_os_getppid();
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_437_; 
v_a_430_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_437_ == 0)
{
v___x_432_ = v___x_429_;
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v___x_429_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_430_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
else
{
lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_445_; 
v_a_438_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_445_ == 0)
{
v___x_440_ = v___x_429_;
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_dec(v___x_429_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_441_ == 0)
{
v___x_443_ = v___x_440_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_a_438_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_getParentId___boxed(lean_object* v___y_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Std_IO_Process_getParentId();
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_getCwd(){
_start:
{
lean_object* v___x_449_; 
v___x_449_ = lean_uv_cwd();
if (lean_obj_tag(v___x_449_) == 0)
{
lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_457_; 
v_a_450_ = lean_ctor_get(v___x_449_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_457_ == 0)
{
v___x_452_ = v___x_449_;
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v___x_449_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
if (v_isShared_453_ == 0)
{
v___x_455_ = v___x_452_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_a_450_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
else
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
v_a_458_ = lean_ctor_get(v___x_449_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_449_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_449_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_getCwd___boxed(lean_object* v___y_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Std_IO_Process_getCwd();
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_setCwd(lean_object* v_path_468_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = lean_uv_chdir(v_path_468_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_setCwd___boxed(lean_object* v_path_471_, lean_object* v___y_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Std_IO_Process_setCwd(v_path_471_);
lean_dec_ref(v_path_471_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_getPriority(uint64_t v_pid_474_){
_start:
{
lean_object* v___x_476_; 
v___x_476_ = lean_uv_os_getpriority(v_pid_474_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_getPriority___boxed(lean_object* v_pid_477_, lean_object* v___y_478_){
_start:
{
uint64_t v_pid_boxed_479_; lean_object* v_res_480_; 
v_pid_boxed_479_ = lean_unbox_uint64(v_pid_477_);
lean_dec_ref(v_pid_477_);
v_res_480_ = l_Std_IO_Process_getPriority(v_pid_boxed_479_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_setPriority(uint64_t v_pid_481_, uint64_t v_priority_482_){
_start:
{
lean_object* v___x_484_; 
v___x_484_ = lean_uv_os_setpriority(v_pid_481_, v_priority_482_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_setPriority___boxed(lean_object* v_pid_485_, lean_object* v_priority_486_, lean_object* v___y_487_){
_start:
{
uint64_t v_pid_boxed_488_; uint64_t v_priority_boxed_489_; lean_object* v_res_490_; 
v_pid_boxed_488_ = lean_unbox_uint64(v_pid_485_);
lean_dec_ref(v_pid_485_);
v_priority_boxed_489_ = lean_unbox_uint64(v_priority_486_);
lean_dec_ref(v_priority_486_);
v_res_490_ = l_Std_IO_Process_setPriority(v_pid_boxed_488_, v_priority_boxed_489_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_getResourceUsage___lam__0(lean_object* v_rusage_491_){
_start:
{
uint64_t v_userTime_492_; uint64_t v_systemTime_493_; uint64_t v_maxRSS_494_; uint64_t v_ixRSS_495_; uint64_t v_idRSS_496_; uint64_t v_isRSS_497_; uint64_t v_minFlt_498_; uint64_t v_majFlt_499_; uint64_t v_nSwap_500_; uint64_t v_inBlock_501_; uint64_t v_outBlock_502_; uint64_t v_msgSent_503_; uint64_t v_msgRecv_504_; uint64_t v_signals_505_; uint64_t v_voluntaryCS_506_; uint64_t v_involuntaryCS_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v_userTime_492_ = lean_ctor_get_uint64(v_rusage_491_, 0);
v_systemTime_493_ = lean_ctor_get_uint64(v_rusage_491_, 8);
v_maxRSS_494_ = lean_ctor_get_uint64(v_rusage_491_, 16);
v_ixRSS_495_ = lean_ctor_get_uint64(v_rusage_491_, 24);
v_idRSS_496_ = lean_ctor_get_uint64(v_rusage_491_, 32);
v_isRSS_497_ = lean_ctor_get_uint64(v_rusage_491_, 40);
v_minFlt_498_ = lean_ctor_get_uint64(v_rusage_491_, 48);
v_majFlt_499_ = lean_ctor_get_uint64(v_rusage_491_, 56);
v_nSwap_500_ = lean_ctor_get_uint64(v_rusage_491_, 64);
v_inBlock_501_ = lean_ctor_get_uint64(v_rusage_491_, 72);
v_outBlock_502_ = lean_ctor_get_uint64(v_rusage_491_, 80);
v_msgSent_503_ = lean_ctor_get_uint64(v_rusage_491_, 88);
v_msgRecv_504_ = lean_ctor_get_uint64(v_rusage_491_, 96);
v_signals_505_ = lean_ctor_get_uint64(v_rusage_491_, 104);
v_voluntaryCS_506_ = lean_ctor_get_uint64(v_rusage_491_, 112);
v_involuntaryCS_507_ = lean_ctor_get_uint64(v_rusage_491_, 120);
v___x_508_ = lean_uint64_to_nat(v_userTime_492_);
v___x_509_ = lean_nat_to_int(v___x_508_);
v___x_510_ = lean_uint64_to_nat(v_systemTime_493_);
v___x_511_ = lean_nat_to_int(v___x_510_);
v___x_512_ = lean_alloc_ctor(0, 2, 112);
lean_ctor_set(v___x_512_, 0, v___x_509_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
lean_ctor_set_uint64(v___x_512_, sizeof(void*)*2, v_maxRSS_494_);
lean_ctor_set_uint64(v___x_512_, sizeof(void*)*2 + 8, v_ixRSS_495_);
lean_ctor_set_uint64(v___x_512_, sizeof(void*)*2 + 16, v_idRSS_496_);
lean_ctor_set_uint64(v___x_512_, sizeof(void*)*2 + 24, v_isRSS_497_);
lean_ctor_set_uint64(v___x_512_, sizeof(void*)*2 + 32, v_minFlt_498_);
lean_ctor_set_uint64(v___x_512_, sizeof(void*)*2 + 40, v_majFlt_499_);
lean_ctor_set_uint64(v___x_512_, sizeof(void*)*2 + 48, v_nSwap_500_);
lean_ctor_set_uint64(v___x_512_, sizeof(void*)*2 + 56, v_inBlock_501_);
lean_ctor_set_uint64(v___x_512_, sizeof(void*)*2 + 64, v_outBlock_502_);
lean_ctor_set_uint64(v___x_512_, sizeof(void*)*2 + 72, v_msgSent_503_);
lean_ctor_set_uint64(v___x_512_, sizeof(void*)*2 + 80, v_msgRecv_504_);
lean_ctor_set_uint64(v___x_512_, sizeof(void*)*2 + 88, v_signals_505_);
lean_ctor_set_uint64(v___x_512_, sizeof(void*)*2 + 96, v_voluntaryCS_506_);
lean_ctor_set_uint64(v___x_512_, sizeof(void*)*2 + 104, v_involuntaryCS_507_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_getResourceUsage___lam__0___boxed(lean_object* v_rusage_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l_Std_IO_Process_getResourceUsage___lam__0(v_rusage_513_);
lean_dec_ref(v_rusage_513_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_getResourceUsage(){
_start:
{
lean_object* v___f_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_66__overap_526_; lean_object* v___x_527_; 
v___f_523_ = ((lean_object*)(l_Std_IO_Process_getResourceUsage___closed__0));
v___x_524_ = ((lean_object*)(l_Std_IO_Process_getResourceUsage___closed__3));
v___x_525_ = ((lean_object*)(l_Std_IO_Process_getResourceUsage___closed__4));
v___x_66__overap_526_ = l_Functor_mapRev___redArg(v___x_524_, v___x_525_, v___f_523_);
v___x_527_ = lean_apply_1(v___x_66__overap_526_, lean_box(0));
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_getResourceUsage___boxed(lean_object* v___y_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Std_IO_Process_getResourceUsage();
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_getExecutablePath(){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = lean_uv_exepath();
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_531_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_531_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
else
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_547_; 
v_a_540_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_547_ == 0)
{
v___x_542_ = v___x_531_;
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_531_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_545_; 
if (v_isShared_543_ == 0)
{
v___x_545_ = v___x_542_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_a_540_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_getExecutablePath___boxed(lean_object* v___y_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_Std_IO_Process_getExecutablePath();
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_freeMemory(){
_start:
{
lean_object* v___x_551_; 
v___x_551_ = lean_uv_get_free_memory();
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_freeMemory___boxed(lean_object* v___y_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = l_Std_IO_Process_freeMemory();
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_totalMemory(){
_start:
{
lean_object* v___x_555_; 
v___x_555_ = lean_uv_get_total_memory();
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_totalMemory___boxed(lean_object* v___y_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_Std_IO_Process_totalMemory();
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_constrainedMemory(){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = lean_uv_get_constrained_memory();
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_constrainedMemory___boxed(lean_object* v___y_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l_Std_IO_Process_constrainedMemory();
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_availableMemory(){
_start:
{
lean_object* v___x_563_; 
v___x_563_ = lean_uv_get_available_memory();
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Std_IO_Process_availableMemory___boxed(lean_object* v___y_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_Std_IO_Process_availableMemory();
return v_res_565_;
}
}
lean_object* runtime_initialize_Std_Time(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_UV_System(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashMap(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord_UInt(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Async_Process(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_UV_System(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Ord_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_IO_Process_instInhabitedResourceUsageStats_default = _init_l_Std_IO_Process_instInhabitedResourceUsageStats_default();
lean_mark_persistent(l_Std_IO_Process_instInhabitedResourceUsageStats_default);
l_Std_IO_Process_instInhabitedResourceUsageStats = _init_l_Std_IO_Process_instInhabitedResourceUsageStats();
lean_mark_persistent(l_Std_IO_Process_instInhabitedResourceUsageStats);
l_Std_IO_Process_instInhabitedPId_default = _init_l_Std_IO_Process_instInhabitedPId_default();
l_Std_IO_Process_instInhabitedPId = _init_l_Std_IO_Process_instInhabitedPId();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Async_Process(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time(uint8_t builtin);
lean_object* initialize_Std_Internal_UV_System(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap(uint8_t builtin);
lean_object* initialize_Init_Data_Ord_UInt(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Async_Process(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_UV_System(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_Process(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Async_Process(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Async_Process(builtin);
}
#ifdef __cplusplus
}
#endif
