// Lean compiler output
// Module: Lake.Build.Actions
// Imports: public import Lake.Util.Log import Lake.Util.Proc import Lake.Util.FilePath import Lake.Util.IO import Lake.Util.Url import Init.Data.String.Search import Init.Data.String.TakeDrop import Init.System.Platform import Lean.CoreM import Lean.Compiler.Options
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
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_instFromJsonSerialMessage_fromJson(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lake_mkRelPathString(lean_object*);
lean_object* l_Lake_LogEntry_ofSerialMessage(lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_proc(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_array_size(lean_object*);
extern uint8_t l_System_Platform_isOSX;
lean_object* l_Lean_instToJsonModuleSetup_toJson(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* l_System_SearchPath_toString(lean_object*);
lean_object* l_Lake_mkCmdLog(lean_object*);
lean_object* l_IO_Process_output(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_Lean_LeanOptions_toOptions(lean_object*);
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_io_getenv(lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* lean_io_remove_file(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_IO_FS_createDirAll(lean_object*);
lean_object* l_Lake_removeFileIfExists(lean_object*);
static const lean_ctor_object l_Lake_compileLeanIR___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_compileLeanIR___closed__0 = (const lean_object*)&l_Lake_compileLeanIR___closed__0_value;
static const lean_string_object l_Lake_compileLeanIR___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LEAN_PATH"};
static const lean_object* l_Lake_compileLeanIR___closed__1 = (const lean_object*)&l_Lake_compileLeanIR___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_compileLeanIR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileLeanIR___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lake_compileLeanModule_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_compileLeanModule_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_compileLeanModule_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_compileLeanModule_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_compileLeanModule___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean exited with code "};
static const lean_object* l_Lake_compileLeanModule___lam__0___closed__0 = (const lean_object*)&l_Lake_compileLeanModule___lam__0___closed__0_value;
static const lean_string_object l_Lake_compileLeanModule___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "stderr:\n"};
static const lean_object* l_Lake_compileLeanModule___lam__0___closed__1 = (const lean_object*)&l_Lake_compileLeanModule___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__0(uint32_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "stdout:\n"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_compileLeanModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "--setup"};
static const lean_object* l_Lake_compileLeanModule___closed__0 = (const lean_object*)&l_Lake_compileLeanModule___closed__0_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__1;
static const lean_string_object l_Lake_compileLeanModule___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--json"};
static const lean_object* l_Lake_compileLeanModule___closed__2 = (const lean_object*)&l_Lake_compileLeanModule___closed__2_value;
static const lean_string_object l_Lake_compileLeanModule___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_compileLeanModule___closed__3 = (const lean_object*)&l_Lake_compileLeanModule___closed__3_value;
static const lean_string_object l_Lake_compileLeanModule___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "failed to execute '"};
static const lean_object* l_Lake_compileLeanModule___closed__4 = (const lean_object*)&l_Lake_compileLeanModule___closed__4_value;
static const lean_string_object l_Lake_compileLeanModule___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "': "};
static const lean_object* l_Lake_compileLeanModule___closed__5 = (const lean_object*)&l_Lake_compileLeanModule___closed__5_value;
static const lean_string_object l_Lake_compileLeanModule___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-b"};
static const lean_object* l_Lake_compileLeanModule___closed__6 = (const lean_object*)&l_Lake_compileLeanModule___closed__6_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__7;
static const lean_string_object l_Lake_compileLeanModule___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-c"};
static const lean_object* l_Lake_compileLeanModule___closed__8 = (const lean_object*)&l_Lake_compileLeanModule___closed__8_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__9;
static const lean_string_object l_Lake_compileLeanModule___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-i"};
static const lean_object* l_Lake_compileLeanModule___closed__10 = (const lean_object*)&l_Lake_compileLeanModule___closed__10_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__11;
static const lean_string_object l_Lake_compileLeanModule___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-o"};
static const lean_object* l_Lake_compileLeanModule___closed__12 = (const lean_object*)&l_Lake_compileLeanModule___closed__12_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__13;
LEAN_EXPORT lean_object* l_Lake_compileLeanModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_compileO___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileO___closed__0;
static lean_once_cell_t l_Lake_compileO___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileO___closed__1;
static const lean_array_object l_Lake_compileO___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_compileO___closed__2 = (const lean_object*)&l_Lake_compileO___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_compileO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\"\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_mkArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rsp"};
static const lean_object* l_Lake_mkArgs___closed__0 = (const lean_object*)&l_Lake_mkArgs___closed__0_value;
static const lean_string_object l_Lake_mkArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_Lake_mkArgs___closed__1 = (const lean_object*)&l_Lake_mkArgs___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_mkArgs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_compileStaticLib___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rcs"};
static const lean_object* l_Lake_compileStaticLib___closed__0 = (const lean_object*)&l_Lake_compileStaticLib___closed__0_value;
static const lean_array_object l_Lake_compileStaticLib___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lake_compileStaticLib___closed__0_value)}};
static const lean_object* l_Lake_compileStaticLib___closed__1 = (const lean_object*)&l_Lake_compileStaticLib___closed__1_value;
static const lean_string_object l_Lake_compileStaticLib___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--thin"};
static const lean_object* l_Lake_compileStaticLib___closed__2 = (const lean_object*)&l_Lake_compileStaticLib___closed__2_value;
static lean_once_cell_t l_Lake_compileStaticLib___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileStaticLib___closed__3;
LEAN_EXPORT lean_object* l_Lake_compileStaticLib(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileStaticLib___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_compileSharedLib___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "-shared"};
static const lean_object* l_Lake_compileSharedLib___closed__0 = (const lean_object*)&l_Lake_compileSharedLib___closed__0_value;
static lean_once_cell_t l_Lake_compileSharedLib___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileSharedLib___closed__1;
static lean_once_cell_t l_Lake_compileSharedLib___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileSharedLib___closed__2;
static const lean_string_object l_Lake_compileSharedLib___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "MACOSX_DEPLOYMENT_TARGET"};
static const lean_object* l_Lake_compileSharedLib___closed__3 = (const lean_object*)&l_Lake_compileSharedLib___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_compileSharedLib(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileSharedLib___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileExe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileExe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-H"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_download___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "CURL"};
static const lean_object* l_Lake_download___closed__0 = (const lean_object*)&l_Lake_download___closed__0_value;
static const lean_string_object l_Lake_download___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "curl"};
static const lean_object* l_Lake_download___closed__1 = (const lean_object*)&l_Lake_download___closed__1_value;
static const lean_string_object l_Lake_download___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-s"};
static const lean_object* l_Lake_download___closed__2 = (const lean_object*)&l_Lake_download___closed__2_value;
static const lean_string_object l_Lake_download___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-S"};
static const lean_object* l_Lake_download___closed__3 = (const lean_object*)&l_Lake_download___closed__3_value;
static const lean_string_object l_Lake_download___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-f"};
static const lean_object* l_Lake_download___closed__4 = (const lean_object*)&l_Lake_download___closed__4_value;
static const lean_string_object l_Lake_download___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-L"};
static const lean_object* l_Lake_download___closed__5 = (const lean_object*)&l_Lake_download___closed__5_value;
static lean_once_cell_t l_Lake_download___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_download___closed__6;
static lean_once_cell_t l_Lake_download___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_download___closed__7;
static lean_once_cell_t l_Lake_download___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_download___closed__8;
static lean_once_cell_t l_Lake_download___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_download___closed__9;
LEAN_EXPORT lean_object* l_Lake_download(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_download___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_untar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tar"};
static const lean_object* l_Lake_untar___closed__0 = (const lean_object*)&l_Lake_untar___closed__0_value;
static const lean_string_object l_Lake_untar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-C"};
static const lean_object* l_Lake_untar___closed__1 = (const lean_object*)&l_Lake_untar___closed__1_value;
static const lean_string_object l_Lake_untar___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "-xvv"};
static const lean_object* l_Lake_untar___closed__2 = (const lean_object*)&l_Lake_untar___closed__2_value;
static const lean_string_object l_Lake_untar___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "-xvvz"};
static const lean_object* l_Lake_untar___closed__3 = (const lean_object*)&l_Lake_untar___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_untar(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_untar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "--exclude="};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_tar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_tar___closed__0 = (const lean_object*)&l_Lake_tar___closed__0_value;
static lean_once_cell_t l_Lake_tar___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_tar___closed__1;
static const lean_string_object l_Lake_tar___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "COPYFILE_DISABLE"};
static const lean_object* l_Lake_tar___closed__2 = (const lean_object*)&l_Lake_tar___closed__2_value;
static const lean_string_object l_Lake_tar___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lake_tar___closed__3 = (const lean_object*)&l_Lake_tar___closed__3_value;
static const lean_ctor_object l_Lake_tar___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_tar___closed__3_value)}};
static const lean_object* l_Lake_tar___closed__4 = (const lean_object*)&l_Lake_tar___closed__4_value;
static const lean_ctor_object l_Lake_tar___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_tar___closed__2_value),((lean_object*)&l_Lake_tar___closed__4_value)}};
static const lean_object* l_Lake_tar___closed__5 = (const lean_object*)&l_Lake_tar___closed__5_value;
static const lean_array_object l_Lake_tar___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lake_tar___closed__5_value)}};
static const lean_object* l_Lake_tar___closed__6 = (const lean_object*)&l_Lake_tar___closed__6_value;
static const lean_string_object l_Lake_tar___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "-cvv"};
static const lean_object* l_Lake_tar___closed__7 = (const lean_object*)&l_Lake_tar___closed__7_value;
static const lean_array_object l_Lake_tar___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lake_tar___closed__7_value)}};
static const lean_object* l_Lake_tar___closed__8 = (const lean_object*)&l_Lake_tar___closed__8_value;
static const lean_string_object l_Lake_tar___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-z"};
static const lean_object* l_Lake_tar___closed__9 = (const lean_object*)&l_Lake_tar___closed__9_value;
static lean_once_cell_t l_Lake_tar___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_tar___closed__10;
LEAN_EXPORT lean_object* l_Lake_tar(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_tar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileLeanIR(lean_object* v_setupFile_4_, lean_object* v_irFile_5_, lean_object* v_cFile_6_, lean_object* v_leanPath_7_, lean_object* v_leanir_8_, lean_object* v_a_9_){
_start:
{
lean_object* v___x_11_; 
lean_inc_ref(v_irFile_5_);
v___x_11_ = l_Lake_createParentDirs(v_irFile_5_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_12_; 
lean_dec_ref_known(v___x_11_, 1);
lean_inc_ref(v_cFile_6_);
v___x_12_ = l_Lake_createParentDirs(v_cFile_6_);
if (lean_obj_tag(v___x_12_) == 0)
{
lean_object* v___x_14_; uint8_t v_isShared_15_; uint8_t v_isSharedCheck_36_; 
v_isSharedCheck_36_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_36_ == 0)
{
lean_object* v_unused_37_; 
v_unused_37_ = lean_ctor_get(v___x_12_, 0);
lean_dec(v_unused_37_);
v___x_14_ = v___x_12_;
v_isShared_15_ = v_isSharedCheck_36_;
goto v_resetjp_13_;
}
else
{
lean_dec(v___x_12_);
v___x_14_ = lean_box(0);
v_isShared_15_ = v_isSharedCheck_36_;
goto v_resetjp_13_;
}
v_resetjp_13_:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_26_; 
v___x_16_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_17_ = lean_unsigned_to_nat(3u);
v___x_18_ = lean_mk_empty_array_with_capacity(v___x_17_);
v___x_19_ = lean_array_push(v___x_18_, v_setupFile_4_);
v___x_20_ = lean_array_push(v___x_19_, v_irFile_5_);
v___x_21_ = lean_array_push(v___x_20_, v_cFile_6_);
v___x_22_ = lean_box(0);
v___x_23_ = ((lean_object*)(l_Lake_compileLeanIR___closed__1));
v___x_24_ = l_System_SearchPath_toString(v_leanPath_7_);
if (v_isShared_15_ == 0)
{
lean_ctor_set_tag(v___x_14_, 1);
lean_ctor_set(v___x_14_, 0, v___x_24_);
v___x_26_ = v___x_14_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_35_; 
v_reuseFailAlloc_35_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_35_, 0, v___x_24_);
v___x_26_ = v_reuseFailAlloc_35_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; uint8_t v___x_31_; uint8_t v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_27_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_27_, 0, v___x_23_);
lean_ctor_set(v___x_27_, 1, v___x_26_);
v___x_28_ = lean_unsigned_to_nat(1u);
v___x_29_ = lean_mk_empty_array_with_capacity(v___x_28_);
v___x_30_ = lean_array_push(v___x_29_, v___x_27_);
v___x_31_ = 1;
v___x_32_ = 0;
v___x_33_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_33_, 0, v___x_16_);
lean_ctor_set(v___x_33_, 1, v_leanir_8_);
lean_ctor_set(v___x_33_, 2, v___x_21_);
lean_ctor_set(v___x_33_, 3, v___x_22_);
lean_ctor_set(v___x_33_, 4, v___x_30_);
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*5, v___x_31_);
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*5 + 1, v___x_32_);
v___x_34_ = l_Lake_proc(v___x_33_, v___x_32_, v___x_22_, v_a_9_);
return v___x_34_;
}
}
}
else
{
lean_object* v_a_38_; lean_object* v___x_39_; uint8_t v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
lean_dec_ref(v_leanir_8_);
lean_dec(v_leanPath_7_);
lean_dec_ref(v_cFile_6_);
lean_dec_ref(v_irFile_5_);
lean_dec_ref(v_setupFile_4_);
v_a_38_ = lean_ctor_get(v___x_12_, 0);
lean_inc(v_a_38_);
lean_dec_ref_known(v___x_12_, 1);
v___x_39_ = lean_io_error_to_string(v_a_38_);
v___x_40_ = 3;
v___x_41_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_41_, 0, v___x_39_);
lean_ctor_set_uint8(v___x_41_, sizeof(void*)*1, v___x_40_);
v___x_42_ = lean_array_get_size(v_a_9_);
v___x_43_ = lean_array_push(v_a_9_, v___x_41_);
v___x_44_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_42_);
lean_ctor_set(v___x_44_, 1, v___x_43_);
return v___x_44_;
}
}
else
{
lean_object* v_a_45_; lean_object* v___x_46_; uint8_t v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
lean_dec_ref(v_leanir_8_);
lean_dec(v_leanPath_7_);
lean_dec_ref(v_cFile_6_);
lean_dec_ref(v_irFile_5_);
lean_dec_ref(v_setupFile_4_);
v_a_45_ = lean_ctor_get(v___x_11_, 0);
lean_inc(v_a_45_);
lean_dec_ref_known(v___x_11_, 1);
v___x_46_ = lean_io_error_to_string(v_a_45_);
v___x_47_ = 3;
v___x_48_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_48_, 0, v___x_46_);
lean_ctor_set_uint8(v___x_48_, sizeof(void*)*1, v___x_47_);
v___x_49_ = lean_array_get_size(v_a_9_);
v___x_50_ = lean_array_push(v_a_9_, v___x_48_);
v___x_51_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_51_, 0, v___x_49_);
lean_ctor_set(v___x_51_, 1, v___x_50_);
return v___x_51_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanIR___boxed(lean_object* v_setupFile_52_, lean_object* v_irFile_53_, lean_object* v_cFile_54_, lean_object* v_leanPath_55_, lean_object* v_leanir_56_, lean_object* v_a_57_, lean_object* v_a_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_Lake_compileLeanIR(v_setupFile_52_, v_irFile_53_, v_cFile_54_, v_leanPath_55_, v_leanir_56_, v_a_57_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg(){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg___closed__0));
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg___boxed(lean_object* v___dummy_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg();
return v_res_65_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0(void){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg();
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1(lean_object* v_s_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___boxed(lean_object* v_s_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1(v_s_69_);
lean_dec_ref(v_s_69_);
return v_res_70_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lake_compileLeanModule_spec__3(lean_object* v_opts_71_, lean_object* v_opt_72_){
_start:
{
lean_object* v_name_73_; lean_object* v_defValue_74_; lean_object* v_map_75_; lean_object* v___x_76_; 
v_name_73_ = lean_ctor_get(v_opt_72_, 0);
v_defValue_74_ = lean_ctor_get(v_opt_72_, 1);
v_map_75_ = lean_ctor_get(v_opts_71_, 0);
v___x_76_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_75_, v_name_73_);
if (lean_obj_tag(v___x_76_) == 0)
{
uint8_t v___x_77_; 
v___x_77_ = lean_unbox(v_defValue_74_);
return v___x_77_;
}
else
{
lean_object* v_val_78_; 
v_val_78_ = lean_ctor_get(v___x_76_, 0);
lean_inc(v_val_78_);
lean_dec_ref_known(v___x_76_, 1);
if (lean_obj_tag(v_val_78_) == 1)
{
uint8_t v_v_79_; 
v_v_79_ = lean_ctor_get_uint8(v_val_78_, 0);
lean_dec_ref_known(v_val_78_, 0);
return v_v_79_;
}
else
{
uint8_t v___x_80_; 
lean_dec(v_val_78_);
v___x_80_ = lean_unbox(v_defValue_74_);
return v___x_80_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_compileLeanModule_spec__3___boxed(lean_object* v_opts_81_, lean_object* v_opt_82_){
_start:
{
uint8_t v_res_83_; lean_object* v_r_84_; 
v_res_83_ = l_Lean_Option_get___at___00Lake_compileLeanModule_spec__3(v_opts_81_, v_opt_82_);
lean_dec_ref(v_opt_82_);
lean_dec_ref(v_opts_81_);
v_r_84_ = lean_box(v_res_83_);
return v_r_84_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_compileLeanModule_spec__0(lean_object* v_as_85_, size_t v_i_86_, size_t v_stop_87_){
_start:
{
uint8_t v___x_88_; 
v___x_88_ = lean_usize_dec_eq(v_i_86_, v_stop_87_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; uint8_t v_level_90_; 
v___x_89_ = lean_array_uget_borrowed(v_as_85_, v_i_86_);
v_level_90_ = lean_ctor_get_uint8(v___x_89_, sizeof(void*)*1);
if (v_level_90_ == 3)
{
uint8_t v___x_91_; 
v___x_91_ = 1;
return v___x_91_;
}
else
{
size_t v___x_92_; size_t v___x_93_; 
v___x_92_ = ((size_t)1ULL);
v___x_93_ = lean_usize_add(v_i_86_, v___x_92_);
v_i_86_ = v___x_93_;
goto _start;
}
}
else
{
uint8_t v___x_95_; 
v___x_95_ = 0;
return v___x_95_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_compileLeanModule_spec__0___boxed(lean_object* v_as_96_, lean_object* v_i_97_, lean_object* v_stop_98_){
_start:
{
size_t v_i_boxed_99_; size_t v_stop_boxed_100_; uint8_t v_res_101_; lean_object* v_r_102_; 
v_i_boxed_99_ = lean_unbox_usize(v_i_97_);
lean_dec(v_i_97_);
v_stop_boxed_100_ = lean_unbox_usize(v_stop_98_);
lean_dec(v_stop_98_);
v_res_101_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_compileLeanModule_spec__0(v_as_96_, v_i_boxed_99_, v_stop_boxed_100_);
lean_dec_ref(v_as_96_);
v_r_102_ = lean_box(v_res_101_);
return v_r_102_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__0(uint32_t v_exitCode_105_, lean_object* v___x_106_, lean_object* v_stderr_107_, lean_object* v_____r_108_, lean_object* v___y_109_){
_start:
{
lean_object* v___y_112_; uint32_t v___y_113_; lean_object* v___y_124_; uint8_t v___y_125_; uint32_t v___y_126_; uint8_t v___y_127_; lean_object* v___y_133_; uint8_t v___y_134_; lean_object* v___y_140_; lean_object* v___x_149_; lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_149_ = lean_string_utf8_byte_size(v_stderr_107_);
v___x_150_ = lean_unsigned_to_nat(0u);
v___x_151_ = lean_nat_dec_eq(v___x_149_, v___x_150_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_152_ = ((lean_object*)(l_Lake_compileLeanModule___lam__0___closed__1));
v___x_153_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_153_, 0, v_stderr_107_);
lean_ctor_set(v___x_153_, 1, v___x_150_);
lean_ctor_set(v___x_153_, 2, v___x_149_);
v___x_154_ = l_String_Slice_trimAscii(v___x_153_);
v___x_155_ = l_String_Slice_toString(v___x_154_);
lean_dec_ref(v___x_154_);
v___x_156_ = lean_string_append(v___x_152_, v___x_155_);
lean_dec_ref(v___x_155_);
v___x_157_ = 1;
v___x_158_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_158_, 0, v___x_156_);
lean_ctor_set_uint8(v___x_158_, sizeof(void*)*1, v___x_157_);
v___x_159_ = lean_array_push(v___y_109_, v___x_158_);
v___y_140_ = v___x_159_;
goto v___jp_139_;
}
else
{
lean_dec_ref(v_stderr_107_);
v___y_140_ = v___y_109_;
goto v___jp_139_;
}
v___jp_111_:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; uint8_t v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_114_ = ((lean_object*)(l_Lake_compileLeanModule___lam__0___closed__0));
v___x_115_ = lean_uint32_to_nat(v___y_113_);
v___x_116_ = l_Nat_reprFast(v___x_115_);
v___x_117_ = lean_string_append(v___x_114_, v___x_116_);
lean_dec_ref(v___x_116_);
v___x_118_ = 3;
v___x_119_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_119_, 0, v___x_117_);
lean_ctor_set_uint8(v___x_119_, sizeof(void*)*1, v___x_118_);
v___x_120_ = lean_array_get_size(v___y_112_);
v___x_121_ = lean_array_push(v___y_112_, v___x_119_);
v___x_122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_120_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
return v___x_122_;
}
v___jp_123_:
{
uint32_t v___x_128_; uint8_t v___x_129_; 
v___x_128_ = 0;
v___x_129_ = lean_uint32_dec_eq(v___y_126_, v___x_128_);
if (v___x_129_ == 0)
{
v___y_112_ = v___y_124_;
v___y_113_ = v___y_126_;
goto v___jp_111_;
}
else
{
if (v___y_127_ == 0)
{
if (v___y_125_ == 0)
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = lean_box(0);
v___x_131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_130_);
lean_ctor_set(v___x_131_, 1, v___y_124_);
return v___x_131_;
}
else
{
v___y_112_ = v___y_124_;
v___y_113_ = v___y_126_;
goto v___jp_111_;
}
}
else
{
v___y_112_ = v___y_124_;
v___y_113_ = v___y_126_;
goto v___jp_111_;
}
}
}
v___jp_132_:
{
uint32_t v___x_135_; uint8_t v___x_136_; 
v___x_135_ = 1;
v___x_136_ = lean_uint32_dec_eq(v_exitCode_105_, v___x_135_);
if (v___x_136_ == 0)
{
v___y_124_ = v___y_133_;
v___y_125_ = v___y_134_;
v___y_126_ = v_exitCode_105_;
v___y_127_ = v___x_136_;
goto v___jp_123_;
}
else
{
if (v___y_134_ == 0)
{
v___y_124_ = v___y_133_;
v___y_125_ = v___y_134_;
v___y_126_ = v_exitCode_105_;
v___y_127_ = v___y_134_;
goto v___jp_123_;
}
else
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = lean_array_get_size(v___y_133_);
v___x_138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
lean_ctor_set(v___x_138_, 1, v___y_133_);
return v___x_138_;
}
}
}
v___jp_139_:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_141_ = lean_array_get_size(v___y_140_);
v___x_142_ = l_Array_extract___redArg(v___y_140_, v___x_106_, v___x_141_);
v___x_143_ = lean_unsigned_to_nat(0u);
v___x_144_ = lean_array_get_size(v___x_142_);
v___x_145_ = lean_nat_dec_lt(v___x_143_, v___x_144_);
if (v___x_145_ == 0)
{
lean_dec_ref(v___x_142_);
v___y_133_ = v___y_140_;
v___y_134_ = v___x_145_;
goto v___jp_132_;
}
else
{
size_t v___x_146_; size_t v___x_147_; uint8_t v___x_148_; 
v___x_146_ = ((size_t)0ULL);
v___x_147_ = lean_usize_of_nat(v___x_144_);
v___x_148_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_compileLeanModule_spec__0(v___x_142_, v___x_146_, v___x_147_);
lean_dec_ref(v___x_142_);
v___y_133_ = v___y_140_;
v___y_134_ = v___x_148_;
goto v___jp_132_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__0___boxed(lean_object* v_exitCode_160_, lean_object* v___x_161_, lean_object* v_stderr_162_, lean_object* v_____r_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
uint32_t v_exitCode_boxed_166_; lean_object* v_res_167_; 
v_exitCode_boxed_166_ = lean_unbox_uint32(v_exitCode_160_);
lean_dec(v_exitCode_160_);
v_res_167_ = l_Lake_compileLeanModule___lam__0(v_exitCode_boxed_166_, v___x_161_, v_stderr_162_, v_____r_163_, v___y_164_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___lam__0(lean_object* v_a_168_, lean_object* v_b_169_, lean_object* v_relLeanFile_170_, lean_object* v_____r_171_, lean_object* v___y_172_){
_start:
{
lean_object* v_a_175_; lean_object* v_toBaseMessage_177_; uint8_t v_isSilent_178_; 
v_toBaseMessage_177_ = lean_ctor_get(v_a_168_, 0);
lean_inc_ref(v_toBaseMessage_177_);
v_isSilent_178_ = lean_ctor_get_uint8(v_toBaseMessage_177_, sizeof(void*)*5 + 2);
if (v_isSilent_178_ == 0)
{
lean_object* v_kind_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_203_; 
v_kind_179_ = lean_ctor_get(v_a_168_, 1);
v_isSharedCheck_203_ = !lean_is_exclusive(v_a_168_);
if (v_isSharedCheck_203_ == 0)
{
lean_object* v_unused_204_; 
v_unused_204_ = lean_ctor_get(v_a_168_, 0);
lean_dec(v_unused_204_);
v___x_181_ = v_a_168_;
v_isShared_182_ = v_isSharedCheck_203_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_kind_179_);
lean_dec(v_a_168_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_203_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v_pos_183_; lean_object* v_endPos_184_; uint8_t v_keepFullRange_185_; uint8_t v_severity_186_; lean_object* v_caption_187_; lean_object* v_data_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_201_; 
v_pos_183_ = lean_ctor_get(v_toBaseMessage_177_, 1);
v_endPos_184_ = lean_ctor_get(v_toBaseMessage_177_, 2);
v_keepFullRange_185_ = lean_ctor_get_uint8(v_toBaseMessage_177_, sizeof(void*)*5);
v_severity_186_ = lean_ctor_get_uint8(v_toBaseMessage_177_, sizeof(void*)*5 + 1);
v_caption_187_ = lean_ctor_get(v_toBaseMessage_177_, 3);
v_data_188_ = lean_ctor_get(v_toBaseMessage_177_, 4);
v_isSharedCheck_201_ = !lean_is_exclusive(v_toBaseMessage_177_);
if (v_isSharedCheck_201_ == 0)
{
lean_object* v_unused_202_; 
v_unused_202_ = lean_ctor_get(v_toBaseMessage_177_, 0);
lean_dec(v_unused_202_);
v___x_190_ = v_toBaseMessage_177_;
v_isShared_191_ = v_isSharedCheck_201_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_data_188_);
lean_inc(v_caption_187_);
lean_inc(v_endPos_184_);
lean_inc(v_pos_183_);
lean_dec(v_toBaseMessage_177_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_201_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_192_; lean_object* v___x_194_; 
v___x_192_ = l_Lake_mkRelPathString(v_relLeanFile_170_);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 0, v___x_192_);
v___x_194_ = v___x_190_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_192_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v_pos_183_);
lean_ctor_set(v_reuseFailAlloc_200_, 2, v_endPos_184_);
lean_ctor_set(v_reuseFailAlloc_200_, 3, v_caption_187_);
lean_ctor_set(v_reuseFailAlloc_200_, 4, v_data_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_200_, sizeof(void*)*5, v_keepFullRange_185_);
lean_ctor_set_uint8(v_reuseFailAlloc_200_, sizeof(void*)*5 + 1, v_severity_186_);
lean_ctor_set_uint8(v_reuseFailAlloc_200_, sizeof(void*)*5 + 2, v_isSilent_178_);
v___x_194_ = v_reuseFailAlloc_200_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
lean_object* v___x_196_; 
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 0, v___x_194_);
v___x_196_ = v___x_181_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_194_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v_kind_179_);
v___x_196_ = v_reuseFailAlloc_199_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = l_Lake_LogEntry_ofSerialMessage(v___x_196_);
v___x_198_ = lean_array_push(v___y_172_, v___x_197_);
v_a_175_ = v___x_198_;
goto v___jp_174_;
}
}
}
}
}
else
{
lean_dec_ref(v_toBaseMessage_177_);
lean_dec_ref(v_relLeanFile_170_);
lean_dec_ref(v_a_168_);
v_a_175_ = v___y_172_;
goto v___jp_174_;
}
v___jp_174_:
{
lean_object* v___x_176_; 
v___x_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_176_, 0, v_b_169_);
lean_ctor_set(v___x_176_, 1, v_a_175_);
return v___x_176_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___lam__0___boxed(lean_object* v_a_205_, lean_object* v_b_206_, lean_object* v_relLeanFile_207_, lean_object* v_____r_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___lam__0(v_a_205_, v_b_206_, v_relLeanFile_207_, v_____r_208_, v___y_209_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg(lean_object* v_relLeanFile_214_, lean_object* v___x_215_, lean_object* v___x_216_, lean_object* v___x_217_, lean_object* v_a_218_, lean_object* v_b_219_, lean_object* v___y_220_){
_start:
{
lean_object* v___y_223_; lean_object* v___y_224_; lean_object* v___y_230_; lean_object* v___y_231_; lean_object* v___y_239_; lean_object* v___y_240_; lean_object* v_it_245_; lean_object* v_startInclusive_246_; lean_object* v_endExclusive_247_; 
if (lean_obj_tag(v_a_218_) == 0)
{
lean_object* v_currPos_265_; lean_object* v_searcher_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_289_; 
v_currPos_265_ = lean_ctor_get(v_a_218_, 0);
v_searcher_266_ = lean_ctor_get(v_a_218_, 1);
v_isSharedCheck_289_ = !lean_is_exclusive(v_a_218_);
if (v_isSharedCheck_289_ == 0)
{
v___x_268_ = v_a_218_;
v_isShared_269_ = v_isSharedCheck_289_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_searcher_266_);
lean_inc(v_currPos_265_);
lean_dec(v_a_218_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_289_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
uint8_t v_decide_270_; 
v_decide_270_ = lean_nat_dec_eq(v_searcher_266_, v___x_217_);
if (v_decide_270_ == 0)
{
uint32_t v___x_271_; uint32_t v___x_272_; uint8_t v___x_273_; 
v___x_271_ = 10;
v___x_272_ = lean_string_utf8_get_fast(v___x_215_, v_searcher_266_);
v___x_273_ = lean_uint32_dec_eq(v___x_272_, v___x_271_);
if (v___x_273_ == 0)
{
lean_object* v___x_274_; lean_object* v___x_276_; 
v___x_274_ = lean_string_utf8_next_fast(v___x_215_, v_searcher_266_);
lean_dec(v_searcher_266_);
if (v_isShared_269_ == 0)
{
lean_ctor_set(v___x_268_, 1, v___x_274_);
v___x_276_ = v___x_268_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_currPos_265_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v___x_274_);
v___x_276_ = v_reuseFailAlloc_278_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
v_a_218_ = v___x_276_;
goto _start;
}
}
else
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v_slice_282_; lean_object* v_nextIt_284_; 
v___x_279_ = lean_string_utf8_next_fast(v___x_215_, v_searcher_266_);
v___x_280_ = lean_nat_sub(v___x_279_, v_searcher_266_);
v___x_281_ = lean_nat_add(v_searcher_266_, v___x_280_);
lean_dec(v___x_280_);
v_slice_282_ = l_String_Slice_subslice_x21(v___x_216_, v_currPos_265_, v_searcher_266_);
lean_inc(v___x_281_);
if (v_isShared_269_ == 0)
{
lean_ctor_set(v___x_268_, 1, v___x_281_);
lean_ctor_set(v___x_268_, 0, v___x_281_);
v_nextIt_284_ = v___x_268_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_281_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v___x_281_);
v_nextIt_284_ = v_reuseFailAlloc_287_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
lean_object* v_startInclusive_285_; lean_object* v_endExclusive_286_; 
v_startInclusive_285_ = lean_ctor_get(v_slice_282_, 0);
lean_inc(v_startInclusive_285_);
v_endExclusive_286_ = lean_ctor_get(v_slice_282_, 1);
lean_inc(v_endExclusive_286_);
lean_dec_ref(v_slice_282_);
v_it_245_ = v_nextIt_284_;
v_startInclusive_246_ = v_startInclusive_285_;
v_endExclusive_247_ = v_endExclusive_286_;
goto v___jp_244_;
}
}
}
else
{
lean_object* v___x_288_; 
lean_del_object(v___x_268_);
lean_dec(v_searcher_266_);
v___x_288_ = lean_box(1);
lean_inc(v___x_217_);
v_it_245_ = v___x_288_;
v_startInclusive_246_ = v_currPos_265_;
v_endExclusive_247_ = v___x_217_;
goto v___jp_244_;
}
}
}
else
{
lean_object* v___x_290_; 
lean_dec(v___x_217_);
lean_dec_ref(v_relLeanFile_214_);
v___x_290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_290_, 0, v_b_219_);
lean_ctor_set(v___x_290_, 1, v___y_220_);
return v___x_290_;
}
v___jp_222_:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_225_ = lean_string_append(v_b_219_, v___y_223_);
lean_dec_ref(v___y_223_);
v___x_226_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__0));
v___x_227_ = lean_string_append(v___x_225_, v___x_226_);
v_a_218_ = v___y_224_;
v_b_219_ = v___x_227_;
goto _start;
}
v___jp_229_:
{
lean_object* v___x_232_; lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_232_ = lean_string_utf8_byte_size(v_b_219_);
v___x_233_ = lean_unsigned_to_nat(0u);
v___x_234_ = lean_nat_dec_eq(v___x_232_, v___x_233_);
if (v___x_234_ == 0)
{
v___y_223_ = v___y_230_;
v___y_224_ = v___y_231_;
goto v___jp_222_;
}
else
{
lean_object* v___x_235_; uint8_t v___x_236_; 
v___x_235_ = lean_string_utf8_byte_size(v___y_230_);
v___x_236_ = lean_nat_dec_eq(v___x_235_, v___x_233_);
if (v___x_236_ == 0)
{
v___y_223_ = v___y_230_;
v___y_224_ = v___y_231_;
goto v___jp_222_;
}
else
{
lean_dec_ref(v___y_230_);
v_a_218_ = v___y_231_;
goto _start;
}
}
}
v___jp_238_:
{
if (lean_obj_tag(v___y_240_) == 0)
{
lean_object* v_a_241_; lean_object* v_a_242_; 
v_a_241_ = lean_ctor_get(v___y_240_, 0);
lean_inc(v_a_241_);
v_a_242_ = lean_ctor_get(v___y_240_, 1);
lean_inc(v_a_242_);
lean_dec_ref_known(v___y_240_, 2);
v_a_218_ = v___y_239_;
v_b_219_ = v_a_241_;
v___y_220_ = v_a_242_;
goto _start;
}
else
{
lean_dec(v___y_239_);
lean_dec(v___x_217_);
lean_dec_ref(v_relLeanFile_214_);
return v___y_240_;
}
}
v___jp_244_:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_248_ = lean_string_utf8_extract_fast(v___x_215_, v_startInclusive_246_, v_endExclusive_247_);
lean_dec(v_endExclusive_247_);
lean_dec(v_startInclusive_246_);
lean_inc_ref(v___x_248_);
v___x_249_ = l_Lean_Json_parse(v___x_248_);
if (lean_obj_tag(v___x_249_) == 0)
{
lean_dec_ref_known(v___x_249_, 1);
v___y_230_ = v___x_248_;
v___y_231_ = v_it_245_;
goto v___jp_229_;
}
else
{
lean_object* v_a_250_; lean_object* v___x_251_; 
v_a_250_ = lean_ctor_get(v___x_249_, 0);
lean_inc(v_a_250_);
lean_dec_ref_known(v___x_249_, 1);
v___x_251_ = l_Lean_instFromJsonSerialMessage_fromJson(v_a_250_);
if (lean_obj_tag(v___x_251_) == 1)
{
lean_object* v_a_252_; lean_object* v___x_253_; lean_object* v___x_254_; uint8_t v___x_255_; 
lean_dec_ref(v___x_248_);
v_a_252_ = lean_ctor_get(v___x_251_, 0);
lean_inc(v_a_252_);
lean_dec_ref_known(v___x_251_, 1);
v___x_253_ = lean_string_utf8_byte_size(v_b_219_);
v___x_254_ = lean_unsigned_to_nat(0u);
v___x_255_ = lean_nat_dec_eq(v___x_253_, v___x_254_);
if (v___x_255_ == 0)
{
lean_object* v___x_256_; lean_object* v___x_257_; uint8_t v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_256_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__1));
v___x_257_ = lean_string_append(v___x_256_, v_b_219_);
v___x_258_ = 1;
v___x_259_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_259_, 0, v___x_257_);
lean_ctor_set_uint8(v___x_259_, sizeof(void*)*1, v___x_258_);
v___x_260_ = lean_box(0);
v___x_261_ = lean_array_push(v___y_220_, v___x_259_);
lean_inc_ref(v_relLeanFile_214_);
v___x_262_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___lam__0(v_a_252_, v_b_219_, v_relLeanFile_214_, v___x_260_, v___x_261_);
v___y_239_ = v_it_245_;
v___y_240_ = v___x_262_;
goto v___jp_238_;
}
else
{
lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_263_ = lean_box(0);
lean_inc_ref(v_relLeanFile_214_);
v___x_264_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___lam__0(v_a_252_, v_b_219_, v_relLeanFile_214_, v___x_263_, v___y_220_);
v___y_239_ = v_it_245_;
v___y_240_ = v___x_264_;
goto v___jp_238_;
}
}
else
{
lean_dec_ref(v___x_251_);
v___y_230_ = v___x_248_;
v___y_231_ = v_it_245_;
goto v___jp_229_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___boxed(lean_object* v_relLeanFile_291_, lean_object* v___x_292_, lean_object* v___x_293_, lean_object* v___x_294_, lean_object* v_a_295_, lean_object* v_b_296_, lean_object* v___y_297_, lean_object* v___y_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg(v_relLeanFile_291_, v___x_292_, v___x_293_, v___x_294_, v_a_295_, v_b_296_, v___y_297_);
lean_dec_ref(v___x_293_);
lean_dec_ref(v___x_292_);
return v_res_299_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__1(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_301_ = ((lean_object*)(l_Lake_compileLeanModule___closed__0));
v___x_302_ = lean_unsigned_to_nat(2u);
v___x_303_ = lean_mk_empty_array_with_capacity(v___x_302_);
v___x_304_ = lean_array_push(v___x_303_, v___x_301_);
return v___x_304_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__7(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_310_ = ((lean_object*)(l_Lake_compileLeanModule___closed__6));
v___x_311_ = lean_unsigned_to_nat(2u);
v___x_312_ = lean_mk_empty_array_with_capacity(v___x_311_);
v___x_313_ = lean_array_push(v___x_312_, v___x_310_);
return v___x_313_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__9(void){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_315_ = ((lean_object*)(l_Lake_compileLeanModule___closed__8));
v___x_316_ = lean_unsigned_to_nat(2u);
v___x_317_ = lean_mk_empty_array_with_capacity(v___x_316_);
v___x_318_ = lean_array_push(v___x_317_, v___x_315_);
return v___x_318_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__11(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_320_ = ((lean_object*)(l_Lake_compileLeanModule___closed__10));
v___x_321_ = lean_unsigned_to_nat(2u);
v___x_322_ = lean_mk_empty_array_with_capacity(v___x_321_);
v___x_323_ = lean_array_push(v___x_322_, v___x_320_);
return v___x_323_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__13(void){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_325_ = ((lean_object*)(l_Lake_compileLeanModule___closed__12));
v___x_326_ = lean_unsigned_to_nat(2u);
v___x_327_ = lean_mk_empty_array_with_capacity(v___x_326_);
v___x_328_ = lean_array_push(v___x_327_, v___x_325_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule(lean_object* v_leanFile_329_, lean_object* v_relLeanFile_330_, lean_object* v_setup_331_, lean_object* v_setupFile_332_, lean_object* v_arts_333_, lean_object* v_leanArgs_334_, lean_object* v_leanPath_335_, lean_object* v_lean_336_, lean_object* v_a_337_){
_start:
{
lean_object* v___y_340_; lean_object* v_a_341_; lean_object* v___y_344_; lean_object* v___y_345_; lean_object* v_args_348_; lean_object* v___y_349_; lean_object* v_olean_x3f_437_; lean_object* v_ilean_x3f_438_; lean_object* v_c_x3f_439_; lean_object* v_bc_x3f_440_; lean_object* v_args_442_; lean_object* v___y_443_; lean_object* v___y_457_; lean_object* v___y_458_; lean_object* v_args_472_; lean_object* v___y_473_; lean_object* v_args_480_; lean_object* v___y_481_; lean_object* v_args_494_; 
v_olean_x3f_437_ = lean_ctor_get(v_arts_333_, 1);
lean_inc(v_olean_x3f_437_);
v_ilean_x3f_438_ = lean_ctor_get(v_arts_333_, 4);
lean_inc(v_ilean_x3f_438_);
v_c_x3f_439_ = lean_ctor_get(v_arts_333_, 7);
lean_inc(v_c_x3f_439_);
v_bc_x3f_440_ = lean_ctor_get(v_arts_333_, 8);
lean_inc(v_bc_x3f_440_);
lean_dec_ref(v_arts_333_);
v_args_494_ = lean_array_push(v_leanArgs_334_, v_leanFile_329_);
if (lean_obj_tag(v_olean_x3f_437_) == 1)
{
lean_object* v_val_495_; lean_object* v___x_496_; 
v_val_495_ = lean_ctor_get(v_olean_x3f_437_, 0);
lean_inc_n(v_val_495_, 2);
lean_dec_ref_known(v_olean_x3f_437_, 1);
v___x_496_ = l_Lake_createParentDirs(v_val_495_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
lean_dec_ref_known(v___x_496_, 1);
v___x_497_ = lean_obj_once(&l_Lake_compileLeanModule___closed__13, &l_Lake_compileLeanModule___closed__13_once, _init_l_Lake_compileLeanModule___closed__13);
v___x_498_ = lean_array_push(v___x_497_, v_val_495_);
v___x_499_ = l_Array_append___redArg(v_args_494_, v___x_498_);
lean_dec_ref(v___x_498_);
v_args_480_ = v___x_499_;
v___y_481_ = v_a_337_;
goto v___jp_479_;
}
else
{
lean_object* v_a_500_; lean_object* v___x_501_; uint8_t v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
lean_dec(v_val_495_);
lean_dec_ref(v_args_494_);
lean_dec(v_bc_x3f_440_);
lean_dec(v_c_x3f_439_);
lean_dec(v_ilean_x3f_438_);
lean_dec_ref(v_lean_336_);
lean_dec(v_leanPath_335_);
lean_dec_ref(v_setupFile_332_);
lean_dec_ref(v_setup_331_);
lean_dec_ref(v_relLeanFile_330_);
v_a_500_ = lean_ctor_get(v___x_496_, 0);
lean_inc(v_a_500_);
lean_dec_ref_known(v___x_496_, 1);
v___x_501_ = lean_io_error_to_string(v_a_500_);
v___x_502_ = 3;
v___x_503_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_503_, 0, v___x_501_);
lean_ctor_set_uint8(v___x_503_, sizeof(void*)*1, v___x_502_);
v___x_504_ = lean_array_get_size(v_a_337_);
v___x_505_ = lean_array_push(v_a_337_, v___x_503_);
v___x_506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_504_);
lean_ctor_set(v___x_506_, 1, v___x_505_);
return v___x_506_;
}
}
else
{
lean_dec(v_olean_x3f_437_);
v_args_480_ = v_args_494_;
v___y_481_ = v_a_337_;
goto v___jp_479_;
}
v___jp_339_:
{
lean_object* v___x_342_; 
v___x_342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_342_, 0, v___y_340_);
lean_ctor_set(v___x_342_, 1, v_a_341_);
return v___x_342_;
}
v___jp_343_:
{
if (lean_obj_tag(v___y_345_) == 0)
{
lean_dec(v___y_344_);
return v___y_345_;
}
else
{
lean_object* v_a_346_; 
v_a_346_ = lean_ctor_get(v___y_345_, 1);
lean_inc(v_a_346_);
lean_dec_ref_known(v___y_345_, 2);
v___y_340_ = v___y_344_;
v_a_341_ = v_a_346_;
goto v___jp_339_;
}
}
v___jp_347_:
{
lean_object* v___x_350_; 
lean_inc_ref(v_setupFile_332_);
v___x_350_ = l_Lake_createParentDirs(v_setupFile_332_);
if (lean_obj_tag(v___x_350_) == 0)
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
lean_dec_ref_known(v___x_350_, 1);
v___x_351_ = l_Lean_instToJsonModuleSetup_toJson(v_setup_331_);
v___x_352_ = lean_unsigned_to_nat(80u);
v___x_353_ = l_Lean_Json_pretty(v___x_351_, v___x_352_);
v___x_354_ = l_IO_FS_writeFile(v_setupFile_332_, v___x_353_);
lean_dec_ref(v___x_353_);
if (lean_obj_tag(v___x_354_) == 0)
{
lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_421_; 
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_421_ == 0)
{
lean_object* v_unused_422_; 
v_unused_422_ = lean_ctor_get(v___x_354_, 0);
lean_dec(v_unused_422_);
v___x_356_ = v___x_354_;
v_isShared_357_ = v_isSharedCheck_421_;
goto v_resetjp_355_;
}
else
{
lean_dec(v___x_354_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_421_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_368_; 
v___x_358_ = lean_obj_once(&l_Lake_compileLeanModule___closed__1, &l_Lake_compileLeanModule___closed__1_once, _init_l_Lake_compileLeanModule___closed__1);
v___x_359_ = lean_array_push(v___x_358_, v_setupFile_332_);
v___x_360_ = l_Array_append___redArg(v_args_348_, v___x_359_);
lean_dec_ref(v___x_359_);
v___x_361_ = ((lean_object*)(l_Lake_compileLeanModule___closed__2));
v___x_362_ = lean_array_push(v___x_360_, v___x_361_);
v___x_363_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_364_ = lean_box(0);
v___x_365_ = ((lean_object*)(l_Lake_compileLeanIR___closed__1));
v___x_366_ = l_System_SearchPath_toString(v_leanPath_335_);
if (v_isShared_357_ == 0)
{
lean_ctor_set_tag(v___x_356_, 1);
lean_ctor_set(v___x_356_, 0, v___x_366_);
v___x_368_ = v___x_356_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_366_);
v___x_368_ = v_reuseFailAlloc_420_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; uint8_t v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; uint8_t v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_365_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
v___x_370_ = lean_unsigned_to_nat(1u);
v___x_371_ = lean_mk_empty_array_with_capacity(v___x_370_);
v___x_372_ = lean_array_push(v___x_371_, v___x_369_);
v___x_373_ = 1;
v___x_374_ = 0;
lean_inc_ref(v_lean_336_);
v___x_375_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_375_, 0, v___x_363_);
lean_ctor_set(v___x_375_, 1, v_lean_336_);
lean_ctor_set(v___x_375_, 2, v___x_362_);
lean_ctor_set(v___x_375_, 3, v___x_364_);
lean_ctor_set(v___x_375_, 4, v___x_372_);
lean_ctor_set_uint8(v___x_375_, sizeof(void*)*5, v___x_373_);
lean_ctor_set_uint8(v___x_375_, sizeof(void*)*5 + 1, v___x_374_);
v___x_376_ = lean_array_get_size(v___y_349_);
lean_inc_ref(v___x_375_);
v___x_377_ = l_Lake_mkCmdLog(v___x_375_);
v___x_378_ = 0;
v___x_379_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_379_, 0, v___x_377_);
lean_ctor_set_uint8(v___x_379_, sizeof(void*)*1, v___x_378_);
v___x_380_ = lean_array_push(v___y_349_, v___x_379_);
v___x_381_ = l_IO_Process_output(v___x_375_, v___x_364_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_object* v_a_382_; uint32_t v_exitCode_383_; lean_object* v_stdout_384_; lean_object* v_stderr_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; uint8_t v___x_389_; 
lean_dec_ref(v_lean_336_);
v_a_382_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_a_382_);
lean_dec_ref_known(v___x_381_, 1);
v_exitCode_383_ = lean_ctor_get_uint32(v_a_382_, sizeof(void*)*2);
v_stdout_384_ = lean_ctor_get(v_a_382_, 0);
lean_inc_ref(v_stdout_384_);
v_stderr_385_ = lean_ctor_get(v_a_382_, 1);
lean_inc_ref(v_stderr_385_);
lean_dec(v_a_382_);
v___x_386_ = lean_array_get_size(v___x_380_);
v___x_387_ = lean_string_utf8_byte_size(v_stdout_384_);
v___x_388_ = lean_unsigned_to_nat(0u);
v___x_389_ = lean_nat_dec_eq(v___x_387_, v___x_388_);
if (v___x_389_ == 0)
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
lean_inc_ref(v_stdout_384_);
v___x_390_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_390_, 0, v_stdout_384_);
lean_ctor_set(v___x_390_, 1, v___x_388_);
lean_ctor_set(v___x_390_, 2, v___x_387_);
v___x_391_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_392_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0);
v___x_393_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg(v_relLeanFile_330_, v_stdout_384_, v___x_390_, v___x_387_, v___x_392_, v___x_391_, v___x_380_);
lean_dec_ref_known(v___x_390_, 3);
lean_dec_ref(v_stdout_384_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v_a_394_; lean_object* v_a_395_; lean_object* v___x_396_; uint8_t v___x_397_; 
v_a_394_ = lean_ctor_get(v___x_393_, 0);
lean_inc(v_a_394_);
v_a_395_ = lean_ctor_get(v___x_393_, 1);
lean_inc(v_a_395_);
lean_dec_ref_known(v___x_393_, 2);
v___x_396_ = lean_string_utf8_byte_size(v_a_394_);
v___x_397_ = lean_nat_dec_eq(v___x_396_, v___x_388_);
if (v___x_397_ == 0)
{
lean_object* v___x_398_; lean_object* v___x_399_; uint8_t v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_398_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__1));
v___x_399_ = lean_string_append(v___x_398_, v_a_394_);
lean_dec(v_a_394_);
v___x_400_ = 1;
v___x_401_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_401_, 0, v___x_399_);
lean_ctor_set_uint8(v___x_401_, sizeof(void*)*1, v___x_400_);
v___x_402_ = lean_box(0);
v___x_403_ = lean_array_push(v_a_395_, v___x_401_);
v___x_404_ = l_Lake_compileLeanModule___lam__0(v_exitCode_383_, v___x_386_, v_stderr_385_, v___x_402_, v___x_403_);
v___y_344_ = v___x_376_;
v___y_345_ = v___x_404_;
goto v___jp_343_;
}
else
{
lean_object* v___x_405_; lean_object* v___x_406_; 
lean_dec(v_a_394_);
v___x_405_ = lean_box(0);
v___x_406_ = l_Lake_compileLeanModule___lam__0(v_exitCode_383_, v___x_386_, v_stderr_385_, v___x_405_, v_a_395_);
v___y_344_ = v___x_376_;
v___y_345_ = v___x_406_;
goto v___jp_343_;
}
}
else
{
lean_object* v_a_407_; 
lean_dec_ref(v_stderr_385_);
v_a_407_ = lean_ctor_get(v___x_393_, 1);
lean_inc(v_a_407_);
lean_dec_ref_known(v___x_393_, 2);
v___y_340_ = v___x_376_;
v_a_341_ = v_a_407_;
goto v___jp_339_;
}
}
else
{
lean_object* v___x_408_; lean_object* v___x_409_; 
lean_dec_ref(v_stdout_384_);
lean_dec_ref(v_relLeanFile_330_);
v___x_408_ = lean_box(0);
v___x_409_ = l_Lake_compileLeanModule___lam__0(v_exitCode_383_, v___x_386_, v_stderr_385_, v___x_408_, v___x_380_);
v___y_344_ = v___x_376_;
v___y_345_ = v___x_409_;
goto v___jp_343_;
}
}
else
{
lean_object* v_a_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; uint8_t v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
lean_dec_ref(v_relLeanFile_330_);
v_a_410_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_a_410_);
lean_dec_ref_known(v___x_381_, 1);
v___x_411_ = ((lean_object*)(l_Lake_compileLeanModule___closed__4));
v___x_412_ = lean_string_append(v___x_411_, v_lean_336_);
lean_dec_ref(v_lean_336_);
v___x_413_ = ((lean_object*)(l_Lake_compileLeanModule___closed__5));
v___x_414_ = lean_string_append(v___x_412_, v___x_413_);
v___x_415_ = lean_io_error_to_string(v_a_410_);
v___x_416_ = lean_string_append(v___x_414_, v___x_415_);
lean_dec_ref(v___x_415_);
v___x_417_ = 3;
v___x_418_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_418_, 0, v___x_416_);
lean_ctor_set_uint8(v___x_418_, sizeof(void*)*1, v___x_417_);
v___x_419_ = lean_array_push(v___x_380_, v___x_418_);
v___y_340_ = v___x_376_;
v_a_341_ = v___x_419_;
goto v___jp_339_;
}
}
}
}
else
{
lean_object* v_a_423_; lean_object* v___x_424_; uint8_t v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
lean_dec_ref(v_args_348_);
lean_dec_ref(v_lean_336_);
lean_dec(v_leanPath_335_);
lean_dec_ref(v_setupFile_332_);
lean_dec_ref(v_relLeanFile_330_);
v_a_423_ = lean_ctor_get(v___x_354_, 0);
lean_inc(v_a_423_);
lean_dec_ref_known(v___x_354_, 1);
v___x_424_ = lean_io_error_to_string(v_a_423_);
v___x_425_ = 3;
v___x_426_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_426_, 0, v___x_424_);
lean_ctor_set_uint8(v___x_426_, sizeof(void*)*1, v___x_425_);
v___x_427_ = lean_array_get_size(v___y_349_);
v___x_428_ = lean_array_push(v___y_349_, v___x_426_);
v___x_429_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_429_, 0, v___x_427_);
lean_ctor_set(v___x_429_, 1, v___x_428_);
return v___x_429_;
}
}
else
{
lean_object* v_a_430_; lean_object* v___x_431_; uint8_t v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
lean_dec_ref(v_args_348_);
lean_dec_ref(v_lean_336_);
lean_dec(v_leanPath_335_);
lean_dec_ref(v_setupFile_332_);
lean_dec_ref(v_setup_331_);
lean_dec_ref(v_relLeanFile_330_);
v_a_430_ = lean_ctor_get(v___x_350_, 0);
lean_inc(v_a_430_);
lean_dec_ref_known(v___x_350_, 1);
v___x_431_ = lean_io_error_to_string(v_a_430_);
v___x_432_ = 3;
v___x_433_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_433_, 0, v___x_431_);
lean_ctor_set_uint8(v___x_433_, sizeof(void*)*1, v___x_432_);
v___x_434_ = lean_array_get_size(v___y_349_);
v___x_435_ = lean_array_push(v___y_349_, v___x_433_);
v___x_436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_436_, 0, v___x_434_);
lean_ctor_set(v___x_436_, 1, v___x_435_);
return v___x_436_;
}
}
v___jp_441_:
{
if (lean_obj_tag(v_bc_x3f_440_) == 1)
{
lean_object* v_val_444_; lean_object* v___x_445_; 
v_val_444_ = lean_ctor_get(v_bc_x3f_440_, 0);
lean_inc_n(v_val_444_, 2);
lean_dec_ref_known(v_bc_x3f_440_, 1);
v___x_445_ = l_Lake_createParentDirs(v_val_444_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
lean_dec_ref_known(v___x_445_, 1);
v___x_446_ = lean_obj_once(&l_Lake_compileLeanModule___closed__7, &l_Lake_compileLeanModule___closed__7_once, _init_l_Lake_compileLeanModule___closed__7);
v___x_447_ = lean_array_push(v___x_446_, v_val_444_);
v___x_448_ = l_Array_append___redArg(v_args_442_, v___x_447_);
lean_dec_ref(v___x_447_);
v_args_348_ = v___x_448_;
v___y_349_ = v___y_443_;
goto v___jp_347_;
}
else
{
lean_object* v_a_449_; lean_object* v___x_450_; uint8_t v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
lean_dec(v_val_444_);
lean_dec_ref(v_args_442_);
lean_dec_ref(v_lean_336_);
lean_dec(v_leanPath_335_);
lean_dec_ref(v_setupFile_332_);
lean_dec_ref(v_setup_331_);
lean_dec_ref(v_relLeanFile_330_);
v_a_449_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_a_449_);
lean_dec_ref_known(v___x_445_, 1);
v___x_450_ = lean_io_error_to_string(v_a_449_);
v___x_451_ = 3;
v___x_452_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_452_, 0, v___x_450_);
lean_ctor_set_uint8(v___x_452_, sizeof(void*)*1, v___x_451_);
v___x_453_ = lean_array_get_size(v___y_443_);
v___x_454_ = lean_array_push(v___y_443_, v___x_452_);
v___x_455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_453_);
lean_ctor_set(v___x_455_, 1, v___x_454_);
return v___x_455_;
}
}
else
{
lean_dec(v_bc_x3f_440_);
v_args_348_ = v_args_442_;
v___y_349_ = v___y_443_;
goto v___jp_347_;
}
}
v___jp_456_:
{
if (lean_obj_tag(v_c_x3f_439_) == 1)
{
lean_object* v_val_459_; lean_object* v___x_460_; 
v_val_459_ = lean_ctor_get(v_c_x3f_439_, 0);
lean_inc_n(v_val_459_, 2);
lean_dec_ref_known(v_c_x3f_439_, 1);
v___x_460_ = l_Lake_createParentDirs(v_val_459_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
lean_dec_ref_known(v___x_460_, 1);
v___x_461_ = lean_obj_once(&l_Lake_compileLeanModule___closed__9, &l_Lake_compileLeanModule___closed__9_once, _init_l_Lake_compileLeanModule___closed__9);
v___x_462_ = lean_array_push(v___x_461_, v_val_459_);
v___x_463_ = l_Array_append___redArg(v___y_457_, v___x_462_);
lean_dec_ref(v___x_462_);
v_args_442_ = v___x_463_;
v___y_443_ = v___y_458_;
goto v___jp_441_;
}
else
{
lean_object* v_a_464_; lean_object* v___x_465_; uint8_t v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
lean_dec(v_val_459_);
lean_dec_ref(v___y_457_);
lean_dec(v_bc_x3f_440_);
lean_dec_ref(v_lean_336_);
lean_dec(v_leanPath_335_);
lean_dec_ref(v_setupFile_332_);
lean_dec_ref(v_setup_331_);
lean_dec_ref(v_relLeanFile_330_);
v_a_464_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_a_464_);
lean_dec_ref_known(v___x_460_, 1);
v___x_465_ = lean_io_error_to_string(v_a_464_);
v___x_466_ = 3;
v___x_467_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_467_, 0, v___x_465_);
lean_ctor_set_uint8(v___x_467_, sizeof(void*)*1, v___x_466_);
v___x_468_ = lean_array_get_size(v___y_458_);
v___x_469_ = lean_array_push(v___y_458_, v___x_467_);
v___x_470_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_470_, 0, v___x_468_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
return v___x_470_;
}
}
else
{
lean_dec(v_c_x3f_439_);
v_args_442_ = v___y_457_;
v___y_443_ = v___y_458_;
goto v___jp_441_;
}
}
v___jp_471_:
{
uint8_t v_isModule_474_; 
v_isModule_474_ = lean_ctor_get_uint8(v_setup_331_, sizeof(void*)*7);
if (v_isModule_474_ == 0)
{
v___y_457_ = v_args_472_;
v___y_458_ = v___y_473_;
goto v___jp_456_;
}
else
{
lean_object* v_options_475_; lean_object* v_opts_476_; lean_object* v___x_477_; uint8_t v___x_478_; 
v_options_475_ = lean_ctor_get(v_setup_331_, 6);
lean_inc(v_options_475_);
v_opts_476_ = l_Lean_LeanOptions_toOptions(v_options_475_);
v___x_477_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_478_ = l_Lean_Option_get___at___00Lake_compileLeanModule_spec__3(v_opts_476_, v___x_477_);
lean_dec_ref(v_opts_476_);
if (v___x_478_ == 0)
{
v___y_457_ = v_args_472_;
v___y_458_ = v___y_473_;
goto v___jp_456_;
}
else
{
lean_dec(v_c_x3f_439_);
v_args_442_ = v_args_472_;
v___y_443_ = v___y_473_;
goto v___jp_441_;
}
}
}
v___jp_479_:
{
if (lean_obj_tag(v_ilean_x3f_438_) == 1)
{
lean_object* v_val_482_; lean_object* v___x_483_; 
v_val_482_ = lean_ctor_get(v_ilean_x3f_438_, 0);
lean_inc_n(v_val_482_, 2);
lean_dec_ref_known(v_ilean_x3f_438_, 1);
v___x_483_ = l_Lake_createParentDirs(v_val_482_);
if (lean_obj_tag(v___x_483_) == 0)
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
lean_dec_ref_known(v___x_483_, 1);
v___x_484_ = lean_obj_once(&l_Lake_compileLeanModule___closed__11, &l_Lake_compileLeanModule___closed__11_once, _init_l_Lake_compileLeanModule___closed__11);
v___x_485_ = lean_array_push(v___x_484_, v_val_482_);
v___x_486_ = l_Array_append___redArg(v_args_480_, v___x_485_);
lean_dec_ref(v___x_485_);
v_args_472_ = v___x_486_;
v___y_473_ = v___y_481_;
goto v___jp_471_;
}
else
{
lean_object* v_a_487_; lean_object* v___x_488_; uint8_t v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
lean_dec(v_val_482_);
lean_dec_ref(v_args_480_);
lean_dec(v_bc_x3f_440_);
lean_dec(v_c_x3f_439_);
lean_dec_ref(v_lean_336_);
lean_dec(v_leanPath_335_);
lean_dec_ref(v_setupFile_332_);
lean_dec_ref(v_setup_331_);
lean_dec_ref(v_relLeanFile_330_);
v_a_487_ = lean_ctor_get(v___x_483_, 0);
lean_inc(v_a_487_);
lean_dec_ref_known(v___x_483_, 1);
v___x_488_ = lean_io_error_to_string(v_a_487_);
v___x_489_ = 3;
v___x_490_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_490_, 0, v___x_488_);
lean_ctor_set_uint8(v___x_490_, sizeof(void*)*1, v___x_489_);
v___x_491_ = lean_array_get_size(v___y_481_);
v___x_492_ = lean_array_push(v___y_481_, v___x_490_);
v___x_493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_491_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
return v___x_493_;
}
}
else
{
lean_dec(v_ilean_x3f_438_);
v_args_472_ = v_args_480_;
v___y_473_ = v___y_481_;
goto v___jp_471_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___boxed(lean_object* v_leanFile_507_, lean_object* v_relLeanFile_508_, lean_object* v_setup_509_, lean_object* v_setupFile_510_, lean_object* v_arts_511_, lean_object* v_leanArgs_512_, lean_object* v_leanPath_513_, lean_object* v_lean_514_, lean_object* v_a_515_, lean_object* v_a_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lake_compileLeanModule(v_leanFile_507_, v_relLeanFile_508_, v_setup_509_, v_setupFile_510_, v_arts_511_, v_leanArgs_512_, v_leanPath_513_, v_lean_514_, v_a_515_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2(lean_object* v_relLeanFile_518_, lean_object* v___x_519_, lean_object* v___x_520_, lean_object* v___x_521_, lean_object* v_inst_522_, lean_object* v_R_523_, lean_object* v_a_524_, lean_object* v_b_525_, lean_object* v_c_526_, lean_object* v___y_527_){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg(v_relLeanFile_518_, v___x_519_, v___x_520_, v___x_521_, v_a_524_, v_b_525_, v___y_527_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___boxed(lean_object* v_relLeanFile_530_, lean_object* v___x_531_, lean_object* v___x_532_, lean_object* v___x_533_, lean_object* v_inst_534_, lean_object* v_R_535_, lean_object* v_a_536_, lean_object* v_b_537_, lean_object* v_c_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2(v_relLeanFile_530_, v___x_531_, v___x_532_, v___x_533_, v_inst_534_, v_R_535_, v_a_536_, v_b_537_, v_c_538_, v___y_539_);
lean_dec_ref(v___x_532_);
lean_dec_ref(v___x_531_);
return v_res_541_;
}
}
static lean_object* _init_l_Lake_compileO___closed__0(void){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_542_ = ((lean_object*)(l_Lake_compileLeanModule___closed__8));
v___x_543_ = lean_unsigned_to_nat(4u);
v___x_544_ = lean_mk_empty_array_with_capacity(v___x_543_);
v___x_545_ = lean_array_push(v___x_544_, v___x_542_);
return v___x_545_;
}
}
static lean_object* _init_l_Lake_compileO___closed__1(void){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_546_ = ((lean_object*)(l_Lake_compileLeanModule___closed__12));
v___x_547_ = lean_obj_once(&l_Lake_compileO___closed__0, &l_Lake_compileO___closed__0_once, _init_l_Lake_compileO___closed__0);
v___x_548_ = lean_array_push(v___x_547_, v___x_546_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileO(lean_object* v_oFile_551_, lean_object* v_srcFile_552_, lean_object* v_moreArgs_553_, lean_object* v_compiler_554_, lean_object* v_a_555_){
_start:
{
lean_object* v___x_557_; 
lean_inc_ref(v_oFile_551_);
v___x_557_ = l_Lake_createParentDirs(v_oFile_551_);
if (lean_obj_tag(v___x_557_) == 0)
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; uint8_t v___x_565_; uint8_t v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
lean_dec_ref_known(v___x_557_, 1);
v___x_558_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_559_ = lean_obj_once(&l_Lake_compileO___closed__1, &l_Lake_compileO___closed__1_once, _init_l_Lake_compileO___closed__1);
v___x_560_ = lean_array_push(v___x_559_, v_oFile_551_);
v___x_561_ = lean_array_push(v___x_560_, v_srcFile_552_);
v___x_562_ = l_Array_append___redArg(v___x_561_, v_moreArgs_553_);
v___x_563_ = lean_box(0);
v___x_564_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___x_565_ = 1;
v___x_566_ = 0;
v___x_567_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_567_, 0, v___x_558_);
lean_ctor_set(v___x_567_, 1, v_compiler_554_);
lean_ctor_set(v___x_567_, 2, v___x_562_);
lean_ctor_set(v___x_567_, 3, v___x_563_);
lean_ctor_set(v___x_567_, 4, v___x_564_);
lean_ctor_set_uint8(v___x_567_, sizeof(void*)*5, v___x_565_);
lean_ctor_set_uint8(v___x_567_, sizeof(void*)*5 + 1, v___x_566_);
v___x_568_ = l_Lake_proc(v___x_567_, v___x_566_, v___x_563_, v_a_555_);
return v___x_568_;
}
else
{
lean_object* v_a_569_; lean_object* v___x_570_; uint8_t v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
lean_dec_ref(v_compiler_554_);
lean_dec_ref(v_srcFile_552_);
lean_dec_ref(v_oFile_551_);
v_a_569_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_a_569_);
lean_dec_ref_known(v___x_557_, 1);
v___x_570_ = lean_io_error_to_string(v_a_569_);
v___x_571_ = 3;
v___x_572_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_572_, 0, v___x_570_);
lean_ctor_set_uint8(v___x_572_, sizeof(void*)*1, v___x_571_);
v___x_573_ = lean_array_get_size(v_a_555_);
v___x_574_ = lean_array_push(v_a_555_, v___x_572_);
v___x_575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_573_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
return v___x_575_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileO___boxed(lean_object* v_oFile_576_, lean_object* v_srcFile_577_, lean_object* v_moreArgs_578_, lean_object* v_compiler_579_, lean_object* v_a_580_, lean_object* v_a_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lake_compileO(v_oFile_576_, v_srcFile_577_, v_moreArgs_578_, v_compiler_579_, v_a_580_);
lean_dec_ref(v_moreArgs_578_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(lean_object* v___x_583_, lean_object* v___y_584_, lean_object* v_a_585_, lean_object* v_b_586_){
_start:
{
uint8_t v_decide_587_; 
v_decide_587_ = lean_nat_dec_eq(v_a_585_, v___x_583_);
if (v_decide_587_ == 0)
{
uint32_t v___x_588_; lean_object* v___x_589_; uint32_t v___x_590_; uint8_t v___x_595_; 
v___x_588_ = lean_string_utf8_get_fast(v___y_584_, v_a_585_);
v___x_589_ = lean_string_utf8_next_fast(v___y_584_, v_a_585_);
lean_dec(v_a_585_);
v___x_590_ = 92;
v___x_595_ = lean_uint32_dec_eq(v___x_588_, v___x_590_);
if (v___x_595_ == 0)
{
uint32_t v___x_596_; uint8_t v___x_597_; 
v___x_596_ = 34;
v___x_597_ = lean_uint32_dec_eq(v___x_588_, v___x_596_);
if (v___x_597_ == 0)
{
lean_object* v___x_598_; 
v___x_598_ = lean_string_push(v_b_586_, v___x_588_);
v_a_585_ = v___x_589_;
v_b_586_ = v___x_598_;
goto _start;
}
else
{
goto v___jp_591_;
}
}
else
{
goto v___jp_591_;
}
v___jp_591_:
{
lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_592_ = lean_string_push(v_b_586_, v___x_590_);
v___x_593_ = lean_string_push(v___x_592_, v___x_588_);
v_a_585_ = v___x_589_;
v_b_586_ = v___x_593_;
goto _start;
}
}
else
{
lean_dec(v_a_585_);
return v_b_586_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg___boxed(lean_object* v___x_600_, lean_object* v___y_601_, lean_object* v_a_602_, lean_object* v_b_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(v___x_600_, v___y_601_, v_a_602_, v_b_603_);
lean_dec_ref(v___y_601_);
lean_dec(v___x_600_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(lean_object* v_a_607_, lean_object* v_as_608_, size_t v_i_609_, size_t v_stop_610_, lean_object* v_b_611_, lean_object* v___y_612_){
_start:
{
uint8_t v___x_614_; 
v___x_614_ = lean_usize_dec_eq(v_i_609_, v_stop_610_);
if (v___x_614_ == 0)
{
lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_615_ = lean_array_uget_borrowed(v_as_608_, v_i_609_);
v___x_616_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_617_ = lean_string_utf8_byte_size(v___x_615_);
v___x_618_ = lean_unsigned_to_nat(0u);
v___x_619_ = l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(v___x_617_, v___x_615_, v___x_618_, v___x_616_);
v___x_620_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__0));
v___x_621_ = lean_string_append(v___x_620_, v___x_619_);
lean_dec_ref(v___x_619_);
v___x_622_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__1));
v___x_623_ = lean_string_append(v___x_621_, v___x_622_);
v___x_624_ = lean_io_prim_handle_put_str(v_a_607_, v___x_623_);
lean_dec_ref(v___x_623_);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; size_t v___x_626_; size_t v___x_627_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
lean_inc(v_a_625_);
lean_dec_ref_known(v___x_624_, 1);
v___x_626_ = ((size_t)1ULL);
v___x_627_ = lean_usize_add(v_i_609_, v___x_626_);
v_i_609_ = v___x_627_;
v_b_611_ = v_a_625_;
goto _start;
}
else
{
lean_object* v_a_629_; lean_object* v___x_630_; uint8_t v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v_a_629_ = lean_ctor_get(v___x_624_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___x_624_, 1);
v___x_630_ = lean_io_error_to_string(v_a_629_);
v___x_631_ = 3;
v___x_632_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_632_, 0, v___x_630_);
lean_ctor_set_uint8(v___x_632_, sizeof(void*)*1, v___x_631_);
v___x_633_ = lean_array_get_size(v___y_612_);
v___x_634_ = lean_array_push(v___y_612_, v___x_632_);
v___x_635_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_633_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
return v___x_635_;
}
}
else
{
lean_object* v___x_636_; 
v___x_636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_636_, 0, v_b_611_);
lean_ctor_set(v___x_636_, 1, v___y_612_);
return v___x_636_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___boxed(lean_object* v_a_637_, lean_object* v_as_638_, lean_object* v_i_639_, lean_object* v_stop_640_, lean_object* v_b_641_, lean_object* v___y_642_, lean_object* v___y_643_){
_start:
{
size_t v_i_boxed_644_; size_t v_stop_boxed_645_; lean_object* v_res_646_; 
v_i_boxed_644_ = lean_unbox_usize(v_i_639_);
lean_dec(v_i_639_);
v_stop_boxed_645_ = lean_unbox_usize(v_stop_640_);
lean_dec(v_stop_640_);
v_res_646_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(v_a_637_, v_as_638_, v_i_boxed_644_, v_stop_boxed_645_, v_b_641_, v___y_642_);
lean_dec_ref(v_as_638_);
lean_dec(v_a_637_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkArgs(lean_object* v_basePath_649_, lean_object* v_args_650_, lean_object* v_a_651_){
_start:
{
lean_object* v___x_653_; lean_object* v_rspFile_654_; lean_object* v_a_656_; uint8_t v___x_663_; lean_object* v___x_664_; 
v___x_653_ = ((lean_object*)(l_Lake_mkArgs___closed__0));
v_rspFile_654_ = l_System_FilePath_addExtension(v_basePath_649_, v___x_653_);
v___x_663_ = 1;
v___x_664_ = lean_io_prim_handle_mk(v_rspFile_654_, v___x_663_);
if (lean_obj_tag(v___x_664_) == 0)
{
lean_object* v_a_665_; lean_object* v___x_666_; lean_object* v___x_667_; uint8_t v___x_668_; 
v_a_665_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_a_665_);
lean_dec_ref_known(v___x_664_, 1);
v___x_666_ = lean_unsigned_to_nat(0u);
v___x_667_ = lean_array_get_size(v_args_650_);
v___x_668_ = lean_nat_dec_lt(v___x_666_, v___x_667_);
if (v___x_668_ == 0)
{
lean_dec(v_a_665_);
v_a_656_ = v_a_651_;
goto v___jp_655_;
}
else
{
lean_object* v___x_669_; size_t v___x_670_; size_t v___x_671_; lean_object* v___x_672_; 
v___x_669_ = lean_box(0);
v___x_670_ = ((size_t)0ULL);
v___x_671_ = lean_usize_of_nat(v___x_667_);
v___x_672_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(v_a_665_, v_args_650_, v___x_670_, v___x_671_, v___x_669_, v_a_651_);
lean_dec(v_a_665_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; 
v_a_673_ = lean_ctor_get(v___x_672_, 1);
lean_inc(v_a_673_);
lean_dec_ref_known(v___x_672_, 2);
v_a_656_ = v_a_673_;
goto v___jp_655_;
}
else
{
lean_object* v_a_674_; lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_682_; 
lean_dec_ref(v_rspFile_654_);
v_a_674_ = lean_ctor_get(v___x_672_, 0);
v_a_675_ = lean_ctor_get(v___x_672_, 1);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_682_ == 0)
{
v___x_677_ = v___x_672_;
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_inc(v_a_674_);
lean_dec(v___x_672_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_680_; 
if (v_isShared_678_ == 0)
{
v___x_680_ = v___x_677_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_a_674_);
lean_ctor_set(v_reuseFailAlloc_681_, 1, v_a_675_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
}
}
}
else
{
lean_object* v_a_683_; lean_object* v___x_684_; uint8_t v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
lean_dec_ref(v_rspFile_654_);
v_a_683_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_a_683_);
lean_dec_ref_known(v___x_664_, 1);
v___x_684_ = lean_io_error_to_string(v_a_683_);
v___x_685_ = 3;
v___x_686_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_686_, 0, v___x_684_);
lean_ctor_set_uint8(v___x_686_, sizeof(void*)*1, v___x_685_);
v___x_687_ = lean_array_get_size(v_a_651_);
v___x_688_ = lean_array_push(v_a_651_, v___x_686_);
v___x_689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_687_);
lean_ctor_set(v___x_689_, 1, v___x_688_);
return v___x_689_;
}
v___jp_655_:
{
lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_657_ = ((lean_object*)(l_Lake_mkArgs___closed__1));
v___x_658_ = lean_string_append(v___x_657_, v_rspFile_654_);
lean_dec_ref(v_rspFile_654_);
v___x_659_ = lean_unsigned_to_nat(1u);
v___x_660_ = lean_mk_empty_array_with_capacity(v___x_659_);
v___x_661_ = lean_array_push(v___x_660_, v___x_658_);
v___x_662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_662_, 0, v___x_661_);
lean_ctor_set(v___x_662_, 1, v_a_656_);
return v___x_662_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_mkArgs___boxed(lean_object* v_basePath_690_, lean_object* v_args_691_, lean_object* v_a_692_, lean_object* v_a_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Lake_mkArgs(v_basePath_690_, v_args_691_, v_a_692_);
lean_dec_ref(v_args_691_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0(lean_object* v___x_695_, lean_object* v___x_696_, lean_object* v___y_697_, lean_object* v_inst_698_, lean_object* v_R_699_, lean_object* v_a_700_, lean_object* v_b_701_, lean_object* v_c_702_){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(v___x_696_, v___y_697_, v_a_700_, v_b_701_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___boxed(lean_object* v___x_704_, lean_object* v___x_705_, lean_object* v___y_706_, lean_object* v_inst_707_, lean_object* v_R_708_, lean_object* v_a_709_, lean_object* v_b_710_, lean_object* v_c_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0(v___x_704_, v___x_705_, v___y_706_, v_inst_707_, v_R_708_, v_a_709_, v_b_710_, v_c_711_);
lean_dec_ref(v___y_706_);
lean_dec(v___x_705_);
lean_dec_ref(v___x_704_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0(size_t v_sz_713_, size_t v_i_714_, lean_object* v_bs_715_){
_start:
{
uint8_t v___x_716_; 
v___x_716_ = lean_usize_dec_lt(v_i_714_, v_sz_713_);
if (v___x_716_ == 0)
{
return v_bs_715_;
}
else
{
lean_object* v_v_717_; lean_object* v___x_718_; lean_object* v_bs_x27_719_; size_t v___x_720_; size_t v___x_721_; lean_object* v___x_722_; 
v_v_717_ = lean_array_uget(v_bs_715_, v_i_714_);
v___x_718_ = lean_unsigned_to_nat(0u);
v_bs_x27_719_ = lean_array_uset(v_bs_715_, v_i_714_, v___x_718_);
v___x_720_ = ((size_t)1ULL);
v___x_721_ = lean_usize_add(v_i_714_, v___x_720_);
v___x_722_ = lean_array_uset(v_bs_x27_719_, v_i_714_, v_v_717_);
v_i_714_ = v___x_721_;
v_bs_715_ = v___x_722_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0___boxed(lean_object* v_sz_724_, lean_object* v_i_725_, lean_object* v_bs_726_){
_start:
{
size_t v_sz_boxed_727_; size_t v_i_boxed_728_; lean_object* v_res_729_; 
v_sz_boxed_727_ = lean_unbox_usize(v_sz_724_);
lean_dec(v_sz_724_);
v_i_boxed_728_ = lean_unbox_usize(v_i_725_);
lean_dec(v_i_725_);
v_res_729_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0(v_sz_boxed_727_, v_i_boxed_728_, v_bs_726_);
return v_res_729_;
}
}
static lean_object* _init_l_Lake_compileStaticLib___closed__3(void){
_start:
{
lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; 
v___x_736_ = ((lean_object*)(l_Lake_compileStaticLib___closed__2));
v___x_737_ = ((lean_object*)(l_Lake_compileStaticLib___closed__1));
v___x_738_ = lean_array_push(v___x_737_, v___x_736_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileStaticLib(lean_object* v_libFile_739_, lean_object* v_oFiles_740_, lean_object* v_ar_741_, uint8_t v_thin_742_, lean_object* v_a_743_){
_start:
{
lean_object* v___x_745_; 
lean_inc_ref(v_libFile_739_);
v___x_745_ = l_Lake_createParentDirs(v_libFile_739_);
if (lean_obj_tag(v___x_745_) == 0)
{
lean_object* v___x_746_; 
lean_dec_ref_known(v___x_745_, 1);
v___x_746_ = l_Lake_removeFileIfExists(v_libFile_739_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v___x_747_; uint8_t v___x_748_; lean_object* v___y_750_; 
lean_dec_ref_known(v___x_746_, 1);
v___x_747_ = ((lean_object*)(l_Lake_compileStaticLib___closed__1));
v___x_748_ = 1;
if (v_thin_742_ == 0)
{
v___y_750_ = v___x_747_;
goto v___jp_749_;
}
else
{
lean_object* v___x_774_; 
v___x_774_ = lean_obj_once(&l_Lake_compileStaticLib___closed__3, &l_Lake_compileStaticLib___closed__3_once, _init_l_Lake_compileStaticLib___closed__3);
v___y_750_ = v___x_774_;
goto v___jp_749_;
}
v___jp_749_:
{
size_t v_sz_751_; size_t v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v_sz_751_ = lean_array_size(v_oFiles_740_);
v___x_752_ = ((size_t)0ULL);
v___x_753_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0(v_sz_751_, v___x_752_, v_oFiles_740_);
lean_inc_ref(v_libFile_739_);
v___x_754_ = l_Lake_mkArgs(v_libFile_739_, v___x_753_, v_a_743_);
lean_dec_ref(v___x_753_);
if (lean_obj_tag(v___x_754_) == 0)
{
lean_object* v_a_755_; lean_object* v_a_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; uint8_t v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v_a_755_ = lean_ctor_get(v___x_754_, 0);
lean_inc(v_a_755_);
v_a_756_ = lean_ctor_get(v___x_754_, 1);
lean_inc(v_a_756_);
lean_dec_ref_known(v___x_754_, 2);
lean_inc_ref(v___y_750_);
v___x_757_ = lean_array_push(v___y_750_, v_libFile_739_);
v___x_758_ = l_Array_append___redArg(v___x_757_, v_a_755_);
lean_dec(v_a_755_);
v___x_759_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_760_ = lean_box(0);
v___x_761_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___x_762_ = 0;
v___x_763_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_763_, 0, v___x_759_);
lean_ctor_set(v___x_763_, 1, v_ar_741_);
lean_ctor_set(v___x_763_, 2, v___x_758_);
lean_ctor_set(v___x_763_, 3, v___x_760_);
lean_ctor_set(v___x_763_, 4, v___x_761_);
lean_ctor_set_uint8(v___x_763_, sizeof(void*)*5, v___x_748_);
lean_ctor_set_uint8(v___x_763_, sizeof(void*)*5 + 1, v___x_762_);
v___x_764_ = l_Lake_proc(v___x_763_, v___x_762_, v___x_760_, v_a_756_);
return v___x_764_;
}
else
{
lean_object* v_a_765_; lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_773_; 
lean_dec_ref(v_ar_741_);
lean_dec_ref(v_libFile_739_);
v_a_765_ = lean_ctor_get(v___x_754_, 0);
v_a_766_ = lean_ctor_get(v___x_754_, 1);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_773_ == 0)
{
v___x_768_ = v___x_754_;
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_inc(v_a_765_);
lean_dec(v___x_754_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_771_; 
if (v_isShared_769_ == 0)
{
v___x_771_ = v___x_768_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_a_765_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_a_766_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
}
}
else
{
lean_object* v_a_775_; lean_object* v___x_776_; uint8_t v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
lean_dec_ref(v_ar_741_);
lean_dec_ref(v_oFiles_740_);
lean_dec_ref(v_libFile_739_);
v_a_775_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_775_);
lean_dec_ref_known(v___x_746_, 1);
v___x_776_ = lean_io_error_to_string(v_a_775_);
v___x_777_ = 3;
v___x_778_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_778_, 0, v___x_776_);
lean_ctor_set_uint8(v___x_778_, sizeof(void*)*1, v___x_777_);
v___x_779_ = lean_array_get_size(v_a_743_);
v___x_780_ = lean_array_push(v_a_743_, v___x_778_);
v___x_781_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_781_, 0, v___x_779_);
lean_ctor_set(v___x_781_, 1, v___x_780_);
return v___x_781_;
}
}
else
{
lean_object* v_a_782_; lean_object* v___x_783_; uint8_t v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
lean_dec_ref(v_ar_741_);
lean_dec_ref(v_oFiles_740_);
lean_dec_ref(v_libFile_739_);
v_a_782_ = lean_ctor_get(v___x_745_, 0);
lean_inc(v_a_782_);
lean_dec_ref_known(v___x_745_, 1);
v___x_783_ = lean_io_error_to_string(v_a_782_);
v___x_784_ = 3;
v___x_785_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_785_, 0, v___x_783_);
lean_ctor_set_uint8(v___x_785_, sizeof(void*)*1, v___x_784_);
v___x_786_ = lean_array_get_size(v_a_743_);
v___x_787_ = lean_array_push(v_a_743_, v___x_785_);
v___x_788_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_788_, 0, v___x_786_);
lean_ctor_set(v___x_788_, 1, v___x_787_);
return v___x_788_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileStaticLib___boxed(lean_object* v_libFile_789_, lean_object* v_oFiles_790_, lean_object* v_ar_791_, lean_object* v_thin_792_, lean_object* v_a_793_, lean_object* v_a_794_){
_start:
{
uint8_t v_thin_boxed_795_; lean_object* v_res_796_; 
v_thin_boxed_795_ = lean_unbox(v_thin_792_);
v_res_796_ = l_Lake_compileStaticLib(v_libFile_789_, v_oFiles_790_, v_ar_791_, v_thin_boxed_795_, v_a_793_);
return v_res_796_;
}
}
static lean_object* _init_l_Lake_compileSharedLib___closed__1(void){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_798_ = ((lean_object*)(l_Lake_compileSharedLib___closed__0));
v___x_799_ = lean_unsigned_to_nat(3u);
v___x_800_ = lean_mk_empty_array_with_capacity(v___x_799_);
v___x_801_ = lean_array_push(v___x_800_, v___x_798_);
return v___x_801_;
}
}
static lean_object* _init_l_Lake_compileSharedLib___closed__2(void){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_802_ = ((lean_object*)(l_Lake_compileLeanModule___closed__12));
v___x_803_ = lean_obj_once(&l_Lake_compileSharedLib___closed__1, &l_Lake_compileSharedLib___closed__1_once, _init_l_Lake_compileSharedLib___closed__1);
v___x_804_ = lean_array_push(v___x_803_, v___x_802_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileSharedLib(lean_object* v_libFile_806_, lean_object* v_linkArgs_807_, lean_object* v_linker_808_, lean_object* v_macosxDeploymentTarget_x3f_809_, lean_object* v_a_810_){
_start:
{
lean_object* v___x_812_; 
lean_inc_ref(v_libFile_806_);
v___x_812_ = l_Lake_createParentDirs(v_libFile_806_);
if (lean_obj_tag(v___x_812_) == 0)
{
lean_object* v___x_813_; 
lean_dec_ref_known(v___x_812_, 1);
lean_inc_ref(v_libFile_806_);
v___x_813_ = l_Lake_mkArgs(v_libFile_806_, v_linkArgs_807_, v_a_810_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v_a_814_; lean_object* v_a_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___y_822_; 
v_a_814_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_a_814_);
v_a_815_ = lean_ctor_get(v___x_813_, 1);
lean_inc(v_a_815_);
lean_dec_ref_known(v___x_813_, 2);
v___x_816_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_817_ = lean_obj_once(&l_Lake_compileSharedLib___closed__2, &l_Lake_compileSharedLib___closed__2_once, _init_l_Lake_compileSharedLib___closed__2);
v___x_818_ = lean_array_push(v___x_817_, v_libFile_806_);
v___x_819_ = l_Array_append___redArg(v___x_818_, v_a_814_);
lean_dec(v_a_814_);
v___x_820_ = lean_box(0);
if (lean_obj_tag(v_macosxDeploymentTarget_x3f_809_) == 0)
{
lean_object* v___x_827_; 
v___x_827_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___y_822_ = v___x_827_;
goto v___jp_821_;
}
else
{
lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_828_ = ((lean_object*)(l_Lake_compileSharedLib___closed__3));
v___x_829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_829_, 0, v___x_828_);
lean_ctor_set(v___x_829_, 1, v_macosxDeploymentTarget_x3f_809_);
v___x_830_ = lean_unsigned_to_nat(1u);
v___x_831_ = lean_mk_empty_array_with_capacity(v___x_830_);
v___x_832_ = lean_array_push(v___x_831_, v___x_829_);
v___y_822_ = v___x_832_;
goto v___jp_821_;
}
v___jp_821_:
{
uint8_t v___x_823_; uint8_t v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_823_ = 1;
v___x_824_ = 0;
v___x_825_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_825_, 0, v___x_816_);
lean_ctor_set(v___x_825_, 1, v_linker_808_);
lean_ctor_set(v___x_825_, 2, v___x_819_);
lean_ctor_set(v___x_825_, 3, v___x_820_);
lean_ctor_set(v___x_825_, 4, v___y_822_);
lean_ctor_set_uint8(v___x_825_, sizeof(void*)*5, v___x_823_);
lean_ctor_set_uint8(v___x_825_, sizeof(void*)*5 + 1, v___x_824_);
v___x_826_ = l_Lake_proc(v___x_825_, v___x_824_, v___x_820_, v_a_815_);
return v___x_826_;
}
}
else
{
lean_object* v_a_833_; lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_841_; 
lean_dec(v_macosxDeploymentTarget_x3f_809_);
lean_dec_ref(v_linker_808_);
lean_dec_ref(v_libFile_806_);
v_a_833_ = lean_ctor_get(v___x_813_, 0);
v_a_834_ = lean_ctor_get(v___x_813_, 1);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_841_ == 0)
{
v___x_836_ = v___x_813_;
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_inc(v_a_833_);
lean_dec(v___x_813_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_839_; 
if (v_isShared_837_ == 0)
{
v___x_839_ = v___x_836_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_833_);
lean_ctor_set(v_reuseFailAlloc_840_, 1, v_a_834_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
else
{
lean_object* v_a_842_; lean_object* v___x_843_; uint8_t v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
lean_dec(v_macosxDeploymentTarget_x3f_809_);
lean_dec_ref(v_linker_808_);
lean_dec_ref(v_libFile_806_);
v_a_842_ = lean_ctor_get(v___x_812_, 0);
lean_inc(v_a_842_);
lean_dec_ref_known(v___x_812_, 1);
v___x_843_ = lean_io_error_to_string(v_a_842_);
v___x_844_ = 3;
v___x_845_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_845_, 0, v___x_843_);
lean_ctor_set_uint8(v___x_845_, sizeof(void*)*1, v___x_844_);
v___x_846_ = lean_array_get_size(v_a_810_);
v___x_847_ = lean_array_push(v_a_810_, v___x_845_);
v___x_848_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_848_, 0, v___x_846_);
lean_ctor_set(v___x_848_, 1, v___x_847_);
return v___x_848_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileSharedLib___boxed(lean_object* v_libFile_849_, lean_object* v_linkArgs_850_, lean_object* v_linker_851_, lean_object* v_macosxDeploymentTarget_x3f_852_, lean_object* v_a_853_, lean_object* v_a_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Lake_compileSharedLib(v_libFile_849_, v_linkArgs_850_, v_linker_851_, v_macosxDeploymentTarget_x3f_852_, v_a_853_);
lean_dec_ref(v_linkArgs_850_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileExe(lean_object* v_binFile_856_, lean_object* v_linkArgs_857_, lean_object* v_linker_858_, lean_object* v_macosxDeploymentTarget_x3f_859_, lean_object* v_a_860_){
_start:
{
lean_object* v___x_862_; 
lean_inc_ref(v_binFile_856_);
v___x_862_ = l_Lake_createParentDirs(v_binFile_856_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v___x_863_; 
lean_dec_ref_known(v___x_862_, 1);
lean_inc_ref(v_binFile_856_);
v___x_863_ = l_Lake_mkArgs(v_binFile_856_, v_linkArgs_857_, v_a_860_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v_a_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___y_874_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_a_864_);
v_a_865_ = lean_ctor_get(v___x_863_, 1);
lean_inc(v_a_865_);
lean_dec_ref_known(v___x_863_, 2);
v___x_866_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_867_ = lean_unsigned_to_nat(2u);
v___x_868_ = lean_mk_empty_array_with_capacity(v___x_867_);
lean_dec_ref(v___x_868_);
v___x_869_ = lean_obj_once(&l_Lake_compileLeanModule___closed__13, &l_Lake_compileLeanModule___closed__13_once, _init_l_Lake_compileLeanModule___closed__13);
v___x_870_ = lean_array_push(v___x_869_, v_binFile_856_);
v___x_871_ = l_Array_append___redArg(v___x_870_, v_a_864_);
lean_dec(v_a_864_);
v___x_872_ = lean_box(0);
if (lean_obj_tag(v_macosxDeploymentTarget_x3f_859_) == 0)
{
lean_object* v___x_879_; 
v___x_879_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___y_874_ = v___x_879_;
goto v___jp_873_;
}
else
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_880_ = ((lean_object*)(l_Lake_compileSharedLib___closed__3));
v___x_881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_880_);
lean_ctor_set(v___x_881_, 1, v_macosxDeploymentTarget_x3f_859_);
v___x_882_ = lean_unsigned_to_nat(1u);
v___x_883_ = lean_mk_empty_array_with_capacity(v___x_882_);
v___x_884_ = lean_array_push(v___x_883_, v___x_881_);
v___y_874_ = v___x_884_;
goto v___jp_873_;
}
v___jp_873_:
{
uint8_t v___x_875_; uint8_t v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_875_ = 1;
v___x_876_ = 0;
v___x_877_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_877_, 0, v___x_866_);
lean_ctor_set(v___x_877_, 1, v_linker_858_);
lean_ctor_set(v___x_877_, 2, v___x_871_);
lean_ctor_set(v___x_877_, 3, v___x_872_);
lean_ctor_set(v___x_877_, 4, v___y_874_);
lean_ctor_set_uint8(v___x_877_, sizeof(void*)*5, v___x_875_);
lean_ctor_set_uint8(v___x_877_, sizeof(void*)*5 + 1, v___x_876_);
v___x_878_ = l_Lake_proc(v___x_877_, v___x_876_, v___x_872_, v_a_865_);
return v___x_878_;
}
}
else
{
lean_object* v_a_885_; lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_893_; 
lean_dec(v_macosxDeploymentTarget_x3f_859_);
lean_dec_ref(v_linker_858_);
lean_dec_ref(v_binFile_856_);
v_a_885_ = lean_ctor_get(v___x_863_, 0);
v_a_886_ = lean_ctor_get(v___x_863_, 1);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_893_ == 0)
{
v___x_888_ = v___x_863_;
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_inc(v_a_885_);
lean_dec(v___x_863_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_891_; 
if (v_isShared_889_ == 0)
{
v___x_891_ = v___x_888_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_a_885_);
lean_ctor_set(v_reuseFailAlloc_892_, 1, v_a_886_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
else
{
lean_object* v_a_894_; lean_object* v___x_895_; uint8_t v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
lean_dec(v_macosxDeploymentTarget_x3f_859_);
lean_dec_ref(v_linker_858_);
lean_dec_ref(v_binFile_856_);
v_a_894_ = lean_ctor_get(v___x_862_, 0);
lean_inc(v_a_894_);
lean_dec_ref_known(v___x_862_, 1);
v___x_895_ = lean_io_error_to_string(v_a_894_);
v___x_896_ = 3;
v___x_897_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_897_, 0, v___x_895_);
lean_ctor_set_uint8(v___x_897_, sizeof(void*)*1, v___x_896_);
v___x_898_ = lean_array_get_size(v_a_860_);
v___x_899_ = lean_array_push(v_a_860_, v___x_897_);
v___x_900_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_900_, 0, v___x_898_);
lean_ctor_set(v___x_900_, 1, v___x_899_);
return v___x_900_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileExe___boxed(lean_object* v_binFile_901_, lean_object* v_linkArgs_902_, lean_object* v_linker_903_, lean_object* v_macosxDeploymentTarget_x3f_904_, lean_object* v_a_905_, lean_object* v_a_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Lake_compileExe(v_binFile_901_, v_linkArgs_902_, v_linker_903_, v_macosxDeploymentTarget_x3f_904_, v_a_905_);
lean_dec_ref(v_linkArgs_902_);
return v_res_907_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1(void){
_start:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_909_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__0));
v___x_910_ = lean_unsigned_to_nat(2u);
v___x_911_ = lean_mk_empty_array_with_capacity(v___x_910_);
v___x_912_ = lean_array_push(v___x_911_, v___x_909_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(lean_object* v_as_913_, size_t v_i_914_, size_t v_stop_915_, lean_object* v_b_916_){
_start:
{
uint8_t v___x_917_; 
v___x_917_ = lean_usize_dec_eq(v_i_914_, v_stop_915_);
if (v___x_917_ == 0)
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; size_t v___x_922_; size_t v___x_923_; 
v___x_918_ = lean_array_uget_borrowed(v_as_913_, v_i_914_);
v___x_919_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1);
lean_inc(v___x_918_);
v___x_920_ = lean_array_push(v___x_919_, v___x_918_);
v___x_921_ = l_Array_append___redArg(v_b_916_, v___x_920_);
lean_dec_ref(v___x_920_);
v___x_922_ = ((size_t)1ULL);
v___x_923_ = lean_usize_add(v_i_914_, v___x_922_);
v_i_914_ = v___x_923_;
v_b_916_ = v___x_921_;
goto _start;
}
else
{
return v_b_916_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___boxed(lean_object* v_as_925_, lean_object* v_i_926_, lean_object* v_stop_927_, lean_object* v_b_928_){
_start:
{
size_t v_i_boxed_929_; size_t v_stop_boxed_930_; lean_object* v_res_931_; 
v_i_boxed_929_ = lean_unbox_usize(v_i_926_);
lean_dec(v_i_926_);
v_stop_boxed_930_ = lean_unbox_usize(v_stop_927_);
lean_dec(v_stop_927_);
v_res_931_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(v_as_925_, v_i_boxed_929_, v_stop_boxed_930_, v_b_928_);
lean_dec_ref(v_as_925_);
return v_res_931_;
}
}
static lean_object* _init_l_Lake_download___closed__6(void){
_start:
{
lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_938_ = ((lean_object*)(l_Lake_download___closed__2));
v___x_939_ = lean_unsigned_to_nat(7u);
v___x_940_ = lean_mk_empty_array_with_capacity(v___x_939_);
v___x_941_ = lean_array_push(v___x_940_, v___x_938_);
return v___x_941_;
}
}
static lean_object* _init_l_Lake_download___closed__7(void){
_start:
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_942_ = ((lean_object*)(l_Lake_download___closed__3));
v___x_943_ = lean_obj_once(&l_Lake_download___closed__6, &l_Lake_download___closed__6_once, _init_l_Lake_download___closed__6);
v___x_944_ = lean_array_push(v___x_943_, v___x_942_);
return v___x_944_;
}
}
static lean_object* _init_l_Lake_download___closed__8(void){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_945_ = ((lean_object*)(l_Lake_download___closed__4));
v___x_946_ = lean_obj_once(&l_Lake_download___closed__7, &l_Lake_download___closed__7_once, _init_l_Lake_download___closed__7);
v___x_947_ = lean_array_push(v___x_946_, v___x_945_);
return v___x_947_;
}
}
static lean_object* _init_l_Lake_download___closed__9(void){
_start:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_948_ = ((lean_object*)(l_Lake_compileLeanModule___closed__12));
v___x_949_ = lean_obj_once(&l_Lake_download___closed__8, &l_Lake_download___closed__8_once, _init_l_Lake_download___closed__8);
v___x_950_ = lean_array_push(v___x_949_, v___x_948_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l_Lake_download(lean_object* v_url_951_, lean_object* v_file_952_, lean_object* v_headers_953_, lean_object* v_a_954_){
_start:
{
lean_object* v___y_957_; lean_object* v___y_958_; lean_object* v_val_959_; lean_object* v___y_968_; lean_object* v___y_969_; lean_object* v___y_975_; uint8_t v___x_987_; 
v___x_987_ = l_System_FilePath_pathExists(v_file_952_);
if (v___x_987_ == 0)
{
lean_object* v___x_988_; 
lean_inc_ref(v_file_952_);
v___x_988_ = l_Lake_createParentDirs(v_file_952_);
if (lean_obj_tag(v___x_988_) == 0)
{
lean_dec_ref_known(v___x_988_, 1);
v___y_975_ = v_a_954_;
goto v___jp_974_;
}
else
{
lean_object* v_a_989_; lean_object* v___x_990_; uint8_t v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
lean_dec_ref(v_file_952_);
lean_dec_ref(v_url_951_);
v_a_989_ = lean_ctor_get(v___x_988_, 0);
lean_inc(v_a_989_);
lean_dec_ref_known(v___x_988_, 1);
v___x_990_ = lean_io_error_to_string(v_a_989_);
v___x_991_ = 3;
v___x_992_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_992_, 0, v___x_990_);
lean_ctor_set_uint8(v___x_992_, sizeof(void*)*1, v___x_991_);
v___x_993_ = lean_array_get_size(v_a_954_);
v___x_994_ = lean_array_push(v_a_954_, v___x_992_);
v___x_995_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_995_, 0, v___x_993_);
lean_ctor_set(v___x_995_, 1, v___x_994_);
return v___x_995_;
}
}
else
{
lean_object* v___x_996_; 
v___x_996_ = lean_io_remove_file(v_file_952_);
if (lean_obj_tag(v___x_996_) == 0)
{
lean_dec_ref_known(v___x_996_, 1);
v___y_975_ = v_a_954_;
goto v___jp_974_;
}
else
{
lean_object* v_a_997_; lean_object* v___x_998_; uint8_t v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
lean_dec_ref(v_file_952_);
lean_dec_ref(v_url_951_);
v_a_997_ = lean_ctor_get(v___x_996_, 0);
lean_inc(v_a_997_);
lean_dec_ref_known(v___x_996_, 1);
v___x_998_ = lean_io_error_to_string(v_a_997_);
v___x_999_ = 3;
v___x_1000_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1000_, 0, v___x_998_);
lean_ctor_set_uint8(v___x_1000_, sizeof(void*)*1, v___x_999_);
v___x_1001_ = lean_array_get_size(v_a_954_);
v___x_1002_ = lean_array_push(v_a_954_, v___x_1000_);
v___x_1003_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1001_);
lean_ctor_set(v___x_1003_, 1, v___x_1002_);
return v___x_1003_;
}
}
v___jp_956_:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; uint8_t v___x_963_; uint8_t v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_960_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_961_ = lean_box(0);
v___x_962_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___x_963_ = 1;
v___x_964_ = 0;
v___x_965_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_965_, 0, v___x_960_);
lean_ctor_set(v___x_965_, 1, v_val_959_);
lean_ctor_set(v___x_965_, 2, v___y_957_);
lean_ctor_set(v___x_965_, 3, v___x_961_);
lean_ctor_set(v___x_965_, 4, v___x_962_);
lean_ctor_set_uint8(v___x_965_, sizeof(void*)*5, v___x_963_);
lean_ctor_set_uint8(v___x_965_, sizeof(void*)*5 + 1, v___x_964_);
v___x_966_ = l_Lake_proc(v___x_965_, v___x_963_, v___x_961_, v___y_958_);
return v___x_966_;
}
v___jp_967_:
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = ((lean_object*)(l_Lake_download___closed__0));
v___x_971_ = lean_io_getenv(v___x_970_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_object* v___x_972_; 
v___x_972_ = ((lean_object*)(l_Lake_download___closed__1));
v___y_957_ = v___y_969_;
v___y_958_ = v___y_968_;
v_val_959_ = v___x_972_;
goto v___jp_956_;
}
else
{
lean_object* v_val_973_; 
v_val_973_ = lean_ctor_get(v___x_971_, 0);
lean_inc(v_val_973_);
lean_dec_ref_known(v___x_971_, 1);
v___y_957_ = v___y_969_;
v___y_958_ = v___y_968_;
v_val_959_ = v_val_973_;
goto v___jp_956_;
}
}
v___jp_974_:
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; uint8_t v___x_983_; 
v___x_976_ = ((lean_object*)(l_Lake_download___closed__5));
v___x_977_ = lean_obj_once(&l_Lake_download___closed__9, &l_Lake_download___closed__9_once, _init_l_Lake_download___closed__9);
v___x_978_ = lean_array_push(v___x_977_, v_file_952_);
v___x_979_ = lean_array_push(v___x_978_, v___x_976_);
v___x_980_ = lean_array_push(v___x_979_, v_url_951_);
v___x_981_ = lean_unsigned_to_nat(0u);
v___x_982_ = lean_array_get_size(v_headers_953_);
v___x_983_ = lean_nat_dec_lt(v___x_981_, v___x_982_);
if (v___x_983_ == 0)
{
v___y_968_ = v___y_975_;
v___y_969_ = v___x_980_;
goto v___jp_967_;
}
else
{
size_t v___x_984_; size_t v___x_985_; lean_object* v___x_986_; 
v___x_984_ = ((size_t)0ULL);
v___x_985_ = lean_usize_of_nat(v___x_982_);
v___x_986_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(v_headers_953_, v___x_984_, v___x_985_, v___x_980_);
v___y_968_ = v___y_975_;
v___y_969_ = v___x_986_;
goto v___jp_967_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_download___boxed(lean_object* v_url_1004_, lean_object* v_file_1005_, lean_object* v_headers_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l_Lake_download(v_url_1004_, v_file_1005_, v_headers_1006_, v_a_1007_);
lean_dec_ref(v_headers_1006_);
return v_res_1009_;
}
}
LEAN_EXPORT lean_object* l_Lake_untar(lean_object* v_file_1014_, lean_object* v_dir_1015_, uint8_t v_gzip_1016_, lean_object* v_a_1017_){
_start:
{
lean_object* v_opts_1020_; lean_object* v___y_1021_; lean_object* v___x_1039_; 
lean_inc_ref(v_dir_1015_);
v___x_1039_ = l_IO_FS_createDirAll(v_dir_1015_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_dec_ref_known(v___x_1039_, 1);
if (v_gzip_1016_ == 0)
{
lean_object* v___x_1040_; 
v___x_1040_ = ((lean_object*)(l_Lake_untar___closed__2));
v_opts_1020_ = v___x_1040_;
v___y_1021_ = v_a_1017_;
goto v___jp_1019_;
}
else
{
lean_object* v___x_1041_; 
v___x_1041_ = ((lean_object*)(l_Lake_untar___closed__3));
v_opts_1020_ = v___x_1041_;
v___y_1021_ = v_a_1017_;
goto v___jp_1019_;
}
}
else
{
lean_object* v_a_1042_; lean_object* v___x_1043_; uint8_t v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
lean_dec_ref(v_dir_1015_);
lean_dec_ref(v_file_1014_);
v_a_1042_ = lean_ctor_get(v___x_1039_, 0);
lean_inc(v_a_1042_);
lean_dec_ref_known(v___x_1039_, 1);
v___x_1043_ = lean_io_error_to_string(v_a_1042_);
v___x_1044_ = 3;
v___x_1045_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1045_, 0, v___x_1043_);
lean_ctor_set_uint8(v___x_1045_, sizeof(void*)*1, v___x_1044_);
v___x_1046_ = lean_array_get_size(v_a_1017_);
v___x_1047_ = lean_array_push(v_a_1017_, v___x_1045_);
v___x_1048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1046_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
return v___x_1048_;
}
v___jp_1019_:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; uint8_t v___x_1035_; uint8_t v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1022_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_1023_ = ((lean_object*)(l_Lake_untar___closed__0));
v___x_1024_ = ((lean_object*)(l_Lake_download___closed__4));
v___x_1025_ = ((lean_object*)(l_Lake_untar___closed__1));
v___x_1026_ = lean_unsigned_to_nat(5u);
v___x_1027_ = lean_mk_empty_array_with_capacity(v___x_1026_);
lean_inc_ref(v_opts_1020_);
v___x_1028_ = lean_array_push(v___x_1027_, v_opts_1020_);
v___x_1029_ = lean_array_push(v___x_1028_, v___x_1024_);
v___x_1030_ = lean_array_push(v___x_1029_, v_file_1014_);
v___x_1031_ = lean_array_push(v___x_1030_, v___x_1025_);
v___x_1032_ = lean_array_push(v___x_1031_, v_dir_1015_);
v___x_1033_ = lean_box(0);
v___x_1034_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___x_1035_ = 1;
v___x_1036_ = 0;
v___x_1037_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1037_, 0, v___x_1022_);
lean_ctor_set(v___x_1037_, 1, v___x_1023_);
lean_ctor_set(v___x_1037_, 2, v___x_1032_);
lean_ctor_set(v___x_1037_, 3, v___x_1033_);
lean_ctor_set(v___x_1037_, 4, v___x_1034_);
lean_ctor_set_uint8(v___x_1037_, sizeof(void*)*5, v___x_1035_);
lean_ctor_set_uint8(v___x_1037_, sizeof(void*)*5 + 1, v___x_1036_);
v___x_1038_ = l_Lake_proc(v___x_1037_, v___x_1035_, v___x_1033_, v___y_1021_);
return v___x_1038_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_untar___boxed(lean_object* v_file_1049_, lean_object* v_dir_1050_, lean_object* v_gzip_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_){
_start:
{
uint8_t v_gzip_boxed_1054_; lean_object* v_res_1055_; 
v_gzip_boxed_1054_ = lean_unbox(v_gzip_1051_);
v_res_1055_ = l_Lake_untar(v_file_1049_, v_dir_1050_, v_gzip_boxed_1054_, v_a_1052_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0(lean_object* v_as_1057_, size_t v_sz_1058_, size_t v_i_1059_, lean_object* v_b_1060_, lean_object* v___y_1061_){
_start:
{
uint8_t v___x_1063_; 
v___x_1063_ = lean_usize_dec_lt(v_i_1059_, v_sz_1058_);
if (v___x_1063_ == 0)
{
lean_object* v___x_1064_; 
v___x_1064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1064_, 0, v_b_1060_);
lean_ctor_set(v___x_1064_, 1, v___y_1061_);
return v___x_1064_;
}
else
{
lean_object* v_a_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; size_t v___x_1069_; size_t v___x_1070_; 
v_a_1065_ = lean_array_uget_borrowed(v_as_1057_, v_i_1059_);
v___x_1066_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___closed__0));
v___x_1067_ = lean_string_append(v___x_1066_, v_a_1065_);
v___x_1068_ = lean_array_push(v_b_1060_, v___x_1067_);
v___x_1069_ = ((size_t)1ULL);
v___x_1070_ = lean_usize_add(v_i_1059_, v___x_1069_);
v_i_1059_ = v___x_1070_;
v_b_1060_ = v___x_1068_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___boxed(lean_object* v_as_1072_, lean_object* v_sz_1073_, lean_object* v_i_1074_, lean_object* v_b_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_){
_start:
{
size_t v_sz_boxed_1078_; size_t v_i_boxed_1079_; lean_object* v_res_1080_; 
v_sz_boxed_1078_ = lean_unbox_usize(v_sz_1073_);
lean_dec(v_sz_1073_);
v_i_boxed_1079_ = lean_unbox_usize(v_i_1074_);
lean_dec(v_i_1074_);
v_res_1080_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0(v_as_1072_, v_sz_boxed_1078_, v_i_boxed_1079_, v_b_1075_, v___y_1076_);
lean_dec_ref(v_as_1072_);
return v_res_1080_;
}
}
static lean_object* _init_l_Lake_tar___closed__1(void){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1082_ = ((lean_object*)(l_Lake_download___closed__4));
v___x_1083_ = lean_unsigned_to_nat(5u);
v___x_1084_ = lean_mk_empty_array_with_capacity(v___x_1083_);
v___x_1085_ = lean_array_push(v___x_1084_, v___x_1082_);
return v___x_1085_;
}
}
static lean_object* _init_l_Lake_tar___closed__10(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1103_ = ((lean_object*)(l_Lake_tar___closed__9));
v___x_1104_ = ((lean_object*)(l_Lake_tar___closed__8));
v___x_1105_ = lean_array_push(v___x_1104_, v___x_1103_);
return v___x_1105_;
}
}
LEAN_EXPORT lean_object* l_Lake_tar(lean_object* v_dir_1106_, lean_object* v_file_1107_, uint8_t v_gzip_1108_, lean_object* v_excludePaths_1109_, lean_object* v_a_1110_){
_start:
{
lean_object* v___y_1113_; lean_object* v___y_1114_; lean_object* v___y_1115_; lean_object* v___y_1116_; lean_object* v___y_1117_; uint8_t v___y_1118_; lean_object* v___y_1119_; lean_object* v_args_1125_; lean_object* v___y_1126_; lean_object* v___x_1156_; 
lean_inc_ref(v_file_1107_);
v___x_1156_ = l_Lake_createParentDirs(v_file_1107_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v___x_1157_; 
lean_dec_ref_known(v___x_1156_, 1);
v___x_1157_ = ((lean_object*)(l_Lake_tar___closed__8));
if (v_gzip_1108_ == 0)
{
v_args_1125_ = v___x_1157_;
v___y_1126_ = v_a_1110_;
goto v___jp_1124_;
}
else
{
lean_object* v___x_1158_; 
v___x_1158_ = lean_obj_once(&l_Lake_tar___closed__10, &l_Lake_tar___closed__10_once, _init_l_Lake_tar___closed__10);
v_args_1125_ = v___x_1158_;
v___y_1126_ = v_a_1110_;
goto v___jp_1124_;
}
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1160_; uint8_t v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; 
lean_dec_ref(v_file_1107_);
lean_dec_ref(v_dir_1106_);
v_a_1159_ = lean_ctor_get(v___x_1156_, 0);
lean_inc(v_a_1159_);
lean_dec_ref_known(v___x_1156_, 1);
v___x_1160_ = lean_io_error_to_string(v_a_1159_);
v___x_1161_ = 3;
v___x_1162_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1162_, 0, v___x_1160_);
lean_ctor_set_uint8(v___x_1162_, sizeof(void*)*1, v___x_1161_);
v___x_1163_ = lean_array_get_size(v_a_1110_);
v___x_1164_ = lean_array_push(v_a_1110_, v___x_1162_);
v___x_1165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1165_, 0, v___x_1163_);
lean_ctor_set(v___x_1165_, 1, v___x_1164_);
return v___x_1165_;
}
v___jp_1112_:
{
uint8_t v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; 
v___x_1120_ = 0;
lean_inc_ref(v___y_1119_);
lean_inc(v___y_1114_);
lean_inc_ref(v___y_1116_);
lean_inc_ref(v___y_1115_);
v___x_1121_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1121_, 0, v___y_1115_);
lean_ctor_set(v___x_1121_, 1, v___y_1116_);
lean_ctor_set(v___x_1121_, 2, v___y_1113_);
lean_ctor_set(v___x_1121_, 3, v___y_1114_);
lean_ctor_set(v___x_1121_, 4, v___y_1119_);
lean_ctor_set_uint8(v___x_1121_, sizeof(void*)*5, v___y_1118_);
lean_ctor_set_uint8(v___x_1121_, sizeof(void*)*5 + 1, v___x_1120_);
v___x_1122_ = lean_box(0);
v___x_1123_ = l_Lake_proc(v___x_1121_, v___y_1118_, v___x_1122_, v___y_1117_);
return v___x_1123_;
}
v___jp_1124_:
{
size_t v_sz_1127_; size_t v___x_1128_; lean_object* v___x_1129_; 
v_sz_1127_ = lean_array_size(v_excludePaths_1109_);
v___x_1128_ = ((size_t)0ULL);
lean_inc_ref(v_args_1125_);
v___x_1129_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0(v_excludePaths_1109_, v_sz_1127_, v___x_1128_, v_args_1125_, v___y_1126_);
if (lean_obj_tag(v___x_1129_) == 0)
{
lean_object* v_a_1130_; lean_object* v_a_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; uint8_t v___x_1143_; uint8_t v___x_1144_; 
v_a_1130_ = lean_ctor_get(v___x_1129_, 0);
lean_inc(v_a_1130_);
v_a_1131_ = lean_ctor_get(v___x_1129_, 1);
lean_inc(v_a_1131_);
lean_dec_ref_known(v___x_1129_, 2);
v___x_1132_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_1133_ = ((lean_object*)(l_Lake_untar___closed__0));
v___x_1134_ = ((lean_object*)(l_Lake_untar___closed__1));
v___x_1135_ = ((lean_object*)(l_Lake_tar___closed__0));
v___x_1136_ = lean_obj_once(&l_Lake_tar___closed__1, &l_Lake_tar___closed__1_once, _init_l_Lake_tar___closed__1);
v___x_1137_ = lean_array_push(v___x_1136_, v_file_1107_);
v___x_1138_ = lean_array_push(v___x_1137_, v___x_1134_);
v___x_1139_ = lean_array_push(v___x_1138_, v_dir_1106_);
v___x_1140_ = lean_array_push(v___x_1139_, v___x_1135_);
v___x_1141_ = l_Array_append___redArg(v_a_1130_, v___x_1140_);
lean_dec_ref(v___x_1140_);
v___x_1142_ = lean_box(0);
v___x_1143_ = l_System_Platform_isOSX;
v___x_1144_ = 1;
if (v___x_1143_ == 0)
{
lean_object* v___x_1145_; 
v___x_1145_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___y_1113_ = v___x_1141_;
v___y_1114_ = v___x_1142_;
v___y_1115_ = v___x_1132_;
v___y_1116_ = v___x_1133_;
v___y_1117_ = v_a_1131_;
v___y_1118_ = v___x_1144_;
v___y_1119_ = v___x_1145_;
goto v___jp_1112_;
}
else
{
lean_object* v___x_1146_; 
v___x_1146_ = ((lean_object*)(l_Lake_tar___closed__6));
v___y_1113_ = v___x_1141_;
v___y_1114_ = v___x_1142_;
v___y_1115_ = v___x_1132_;
v___y_1116_ = v___x_1133_;
v___y_1117_ = v_a_1131_;
v___y_1118_ = v___x_1144_;
v___y_1119_ = v___x_1146_;
goto v___jp_1112_;
}
}
else
{
lean_object* v_a_1147_; lean_object* v_a_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1155_; 
lean_dec_ref(v_file_1107_);
lean_dec_ref(v_dir_1106_);
v_a_1147_ = lean_ctor_get(v___x_1129_, 0);
v_a_1148_ = lean_ctor_get(v___x_1129_, 1);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1150_ = v___x_1129_;
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_a_1148_);
lean_inc(v_a_1147_);
lean_dec(v___x_1129_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1153_; 
if (v_isShared_1151_ == 0)
{
v___x_1153_ = v___x_1150_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v_a_1147_);
lean_ctor_set(v_reuseFailAlloc_1154_, 1, v_a_1148_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_tar___boxed(lean_object* v_dir_1166_, lean_object* v_file_1167_, lean_object* v_gzip_1168_, lean_object* v_excludePaths_1169_, lean_object* v_a_1170_, lean_object* v_a_1171_){
_start:
{
uint8_t v_gzip_boxed_1172_; lean_object* v_res_1173_; 
v_gzip_boxed_1172_ = lean_unbox(v_gzip_1168_);
v_res_1173_ = l_Lake_tar(v_dir_1166_, v_file_1167_, v_gzip_boxed_1172_, v_excludePaths_1169_, v_a_1170_);
lean_dec_ref(v_excludePaths_1169_);
return v_res_1173_;
}
}
lean_object* runtime_initialize_Lake_Util_Log(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Proc(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_FilePath(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Url(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Actions(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Actions(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Util_Log(uint8_t builtin);
lean_object* initialize_Lake_Util_Proc(uint8_t builtin);
lean_object* initialize_Lake_Util_FilePath(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Lake_Util_Url(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_System_Platform(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Actions(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Actions(builtin);
}
#ifdef __cplusplus
}
#endif
