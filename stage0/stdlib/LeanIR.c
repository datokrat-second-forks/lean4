// Lean compiler output
// Module: LeanIR
// Imports: public import Init public meta import Init import Lean.CoreM import Lean.Util.ForEachExpr import all Lean.Util.Path import all Lean.Environment import Lean.Compiler.Options import Lean.Compiler.IR.CompilerM import Lean.Compiler.ModPkgExt import all Lean.Compiler.CSimpAttr import Lean.Compiler.LCNF.EmitC import Lean.Language.Lean import Lean.Compiler.LCNF.PhaseExt import Lean.Compiler.LCNF.Main import Lean.Meta.ExprDefEq import Lean.Meta.LevelDefEq import Lean.Meta.Match.MatchEqs import Lean.Elab.PreDefinition.Structural.Eqns import Lean.Parser
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Message_toString(lean_object*, uint8_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stderr();
lean_object* lean_array_uget(lean_object*, size_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Elab_mkMessageCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
uint8_t l_Lean_instOrdOLeanLevel_ord(uint8_t, uint8_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Compiler_LCNF_resumeCompilation(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler_output;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler_serve;
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_String_instHashableRaw_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_String_instDecidableLtRaw(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_String_Slice_toName(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecls();
lean_object* l_Lean_Language_Lean_setOption(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_isConstantReplacement_x3f_spec__0_spec__0_spec__1_spec__6_spec__10_spec__14_spec__16(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_ir_export_entries(lean_object*);
lean_object* l_Lean_mkModuleData(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_get_ir_extra_const_names(lean_object*, uint8_t, uint8_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Compiler_LCNF_emitC(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_io_prim_handle_write(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_println___at___00Lean_Environment_displayStats_spec__1(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg();
extern lean_object* l_Lean_instInhabitedClassState_default;
extern lean_object* l_Lean_Meta_Match_Extension_instInhabitedState;
lean_object* l_Lean_PersistentHashMap_instInhabited___redArg();
lean_object* l_Lean_instInhabitedPersistentEnvExtensionState___redArg(lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_Lean_ModuleSetup_load(lean_object*);
lean_object* l_Lean_LeanOptions_toOptions(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_compiler_inLeanIR;
lean_object* l_Lean_Option_set___at___00Lean_Environment_realizeConst_spec__0(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_maxHeartbeats;
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* l_Lean_Environment_mainModule(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_saveModuleDataParts(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_display_cumulative_profiling_times();
lean_object* l_Lean_Environment_displayStats(lean_object*);
lean_object* l_Lean_Core_getAndEmptyMessageLog___redArg(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
extern lean_object* l_instInhabitedError;
lean_object* l_instInhabitedEIO___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_setState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_init_search_path();
extern lean_object* l_Lean_Compiler_LCNF_postponedCompileDeclsExt;
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedFileMap_default;
extern lean_object* l_Lean_Options_empty;
extern lean_object* l_Lean_NameSet_empty;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_IR_declMapExt;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_name(lean_object*);
uint8_t l_Lean_isExtern(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_setDeclPublic(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_impureSigExt;
extern lean_object* l_Lean_Compiler_CSimp_ext;
extern lean_object* l_Lean_Meta_instanceExtension;
extern lean_object* l_Lean_classExtension;
extern lean_object* l_Lean_Meta_Match_Extension_extension;
lean_object* l_Lean_Environment_getModuleIdx_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedImportState_default;
lean_object* l_Lean_importModulesCore(lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*);
uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*);
lean_object* l_Lean_finalizeImport(lean_object*, lean_object*, lean_object*, uint32_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
lean_object* l_Lean_withImporting___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
lean_object* l_Lean_Environment_setMainModule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRSigData(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRSigData___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_LeanIR_0__mkIRData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_LeanIR_0__mkIRData___closed__0 = (const lean_object*)&l___private_LeanIR_0__mkIRData___closed__0_value;
static const lean_array_object l___private_LeanIR_0__mkIRData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_LeanIR_0__mkIRData___closed__1 = (const lean_object*)&l___private_LeanIR_0__mkIRData___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-D"};
static const lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unknown option '"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__0 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__0_value;
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__1 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__1_value;
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "invalid -D parameter, argument must contain '='"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__2 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__2_value;
static const lean_ctor_object l___private_LeanIR_0__setConfigOption___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_LeanIR_0__setConfigOption___closed__2_value)}};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__3 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__3_value;
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "invalid trailing argument `"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__4 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__4_value;
static const lean_string_object l___private_LeanIR_0__setConfigOption___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "`, expected argument of the form `-Dopt=val`"};
static const lean_object* l___private_LeanIR_0__setConfigOption___closed__5 = (const lean_object*)&l___private_LeanIR_0__setConfigOption___closed__5_value;
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___elam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00main_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00main_spec__5___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_main___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_main___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l_main___lam__2___closed__0 = (const lean_object*)&l_main___lam__2___closed__0_value;
static const lean_string_object l_main___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l_main___lam__2___closed__1 = (const lean_object*)&l_main___lam__2___closed__1_value;
static const lean_string_object l_main___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l_main___lam__2___closed__2 = (const lean_object*)&l_main___lam__2___closed__2_value;
LEAN_EXPORT lean_object* l_main___lam__2(lean_object*, lean_object*, uint16_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_main___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_main___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_main___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00main_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--stat"};
static const lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_boxed"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0;
static lean_once_cell_t l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1;
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "usage: leanir <setup.json> <output.ir> <output.c> [--stat] <-Dopt=val>..."};
static const lean_object* l_main___closed__0 = (const lean_object*)&l_main___closed__0_value;
static lean_once_cell_t l_main___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__1;
static lean_once_cell_t l_main___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__2;
static lean_once_cell_t l_main___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__3;
static lean_once_cell_t l_main___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__4;
static lean_once_cell_t l_main___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__5;
static lean_once_cell_t l_main___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__6;
static lean_once_cell_t l_main___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__7;
static const lean_ctor_object l_main___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_main___closed__8 = (const lean_object*)&l_main___closed__8_value;
static const lean_string_object l_main___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sig"};
static const lean_object* l_main___closed__9 = (const lean_object*)&l_main___closed__9_value;
static const lean_string_object l_main___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ir"};
static const lean_object* l_main___closed__10 = (const lean_object*)&l_main___closed__10_value;
static const lean_ctor_object l_main___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_main___closed__10_value),LEAN_SCALAR_PTR_LITERAL(157, 0, 67, 166, 172, 92, 38, 85)}};
static const lean_object* l_main___closed__11 = (const lean_object*)&l_main___closed__11_value;
static const lean_string_object l_main___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "C code generation"};
static const lean_object* l_main___closed__12 = (const lean_object*)&l_main___closed__12_value;
static const lean_string_object l_main___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "failed to create '"};
static const lean_object* l_main___closed__13 = (const lean_object*)&l_main___closed__13_value;
static const lean_string_object l_main___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "LeanIR"};
static const lean_object* l_main___closed__14 = (const lean_object*)&l_main___closed__14_value;
static const lean_string_object l_main___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "main"};
static const lean_object* l_main___closed__15 = (const lean_object*)&l_main___closed__15_value;
static const lean_string_object l_main___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_main___closed__16 = (const lean_object*)&l_main___closed__16_value;
static lean_once_cell_t l_main___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__17;
static const lean_string_object l_main___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l_main___closed__18 = (const lean_object*)&l_main___closed__18_value;
static lean_once_cell_t l_main___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__19;
static lean_once_cell_t l_main___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__20;
static const lean_string_object l_main___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l_main___closed__21 = (const lean_object*)&l_main___closed__21_value;
static const lean_ctor_object l_main___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_main___closed__21_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l_main___closed__22 = (const lean_object*)&l_main___closed__22_value;
static const lean_ctor_object l_main___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_main___closed__22_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_main___closed__23 = (const lean_object*)&l_main___closed__23_value;
static lean_once_cell_t l_main___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__24;
static lean_once_cell_t l_main___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__25;
static lean_once_cell_t l_main___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__26;
static lean_once_cell_t l_main___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__27;
static const lean_array_object l_main___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_main___closed__28 = (const lean_object*)&l_main___closed__28_value;
static lean_once_cell_t l_main___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__29;
static lean_once_cell_t l_main___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__30;
static lean_once_cell_t l_main___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_main___closed__31;
static const lean_array_object l_main___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_main___closed__32 = (const lean_object*)&l_main___closed__32_value;
static const lean_string_object l_main___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "module '"};
static const lean_object* l_main___closed__33 = (const lean_object*)&l_main___closed__33_value;
static const lean_string_object l_main___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "' not found"};
static const lean_object* l_main___closed__34 = (const lean_object*)&l_main___closed__34_value;
static lean_once_cell_t l_main___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_main___closed__35;
LEAN_EXPORT lean_object* l_main___boxed__const__1;
LEAN_EXPORT lean_object* l_main___boxed__const__2;
LEAN_EXPORT lean_object* _lean_main(lean_object*);
LEAN_EXPORT lean_object* l_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRSigData(lean_object* v_env_1_){
_start:
{
uint8_t v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = 0;
v___x_4_ = lean_box(0);
lean_inc_ref(v_env_1_);
v___x_5_ = l_Lean_mkModuleData(v_env_1_, v___x_3_, v___x_4_);
if (lean_obj_tag(v___x_5_) == 0)
{
lean_object* v_a_6_; lean_object* v___x_8_; uint8_t v_isShared_9_; uint8_t v_isSharedCheck_30_; 
v_a_6_ = lean_ctor_get(v___x_5_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v___x_5_);
if (v_isSharedCheck_30_ == 0)
{
v___x_8_ = v___x_5_;
v_isShared_9_ = v_isSharedCheck_30_;
goto v_resetjp_7_;
}
else
{
lean_inc(v_a_6_);
lean_dec(v___x_5_);
v___x_8_ = lean_box(0);
v_isShared_9_ = v_isSharedCheck_30_;
goto v_resetjp_7_;
}
v_resetjp_7_:
{
uint8_t v_isModule_10_; lean_object* v_imports_11_; lean_object* v_constNames_12_; lean_object* v_constants_13_; lean_object* v_entries_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_26_; 
v_isModule_10_ = lean_ctor_get_uint8(v_a_6_, sizeof(void*)*7);
v_imports_11_ = lean_ctor_get(v_a_6_, 0);
v_constNames_12_ = lean_ctor_get(v_a_6_, 1);
v_constants_13_ = lean_ctor_get(v_a_6_, 2);
v_entries_14_ = lean_ctor_get(v_a_6_, 4);
v_isSharedCheck_26_ = !lean_is_exclusive(v_a_6_);
if (v_isSharedCheck_26_ == 0)
{
lean_object* v_unused_27_; lean_object* v_unused_28_; lean_object* v_unused_29_; 
v_unused_27_ = lean_ctor_get(v_a_6_, 6);
lean_dec(v_unused_27_);
v_unused_28_ = lean_ctor_get(v_a_6_, 5);
lean_dec(v_unused_28_);
v_unused_29_ = lean_ctor_get(v_a_6_, 3);
lean_dec(v_unused_29_);
v___x_16_ = v_a_6_;
v_isShared_17_ = v_isSharedCheck_26_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_entries_14_);
lean_inc(v_constants_13_);
lean_inc(v_constNames_12_);
lean_inc(v_imports_11_);
lean_dec(v_a_6_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_26_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
uint8_t v___x_18_; lean_object* v___x_19_; lean_object* v___x_21_; 
v___x_18_ = 0;
v___x_19_ = lean_get_ir_extra_const_names(v_env_1_, v___x_3_, v___x_18_);
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 6, v___x_4_);
lean_ctor_set(v___x_16_, 5, v___x_4_);
lean_ctor_set(v___x_16_, 3, v___x_19_);
v___x_21_ = v___x_16_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_25_; 
v_reuseFailAlloc_25_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_25_, 0, v_imports_11_);
lean_ctor_set(v_reuseFailAlloc_25_, 1, v_constNames_12_);
lean_ctor_set(v_reuseFailAlloc_25_, 2, v_constants_13_);
lean_ctor_set(v_reuseFailAlloc_25_, 3, v___x_19_);
lean_ctor_set(v_reuseFailAlloc_25_, 4, v_entries_14_);
lean_ctor_set(v_reuseFailAlloc_25_, 5, v___x_4_);
lean_ctor_set(v_reuseFailAlloc_25_, 6, v___x_4_);
lean_ctor_set_uint8(v_reuseFailAlloc_25_, sizeof(void*)*7, v_isModule_10_);
v___x_21_ = v_reuseFailAlloc_25_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_23_; 
if (v_isShared_9_ == 0)
{
lean_ctor_set(v___x_8_, 0, v___x_21_);
v___x_23_ = v___x_8_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v___x_21_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
}
}
else
{
lean_dec_ref(v_env_1_);
return v___x_5_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRSigData___boxed(lean_object* v_env_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l___private_LeanIR_0__mkIRSigData(v_env_31_);
return v_res_33_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(lean_object* v_a_34_, lean_object* v_as_35_, size_t v_i_36_, size_t v_stop_37_){
_start:
{
uint8_t v___x_38_; 
v___x_38_ = lean_usize_dec_eq(v_i_36_, v_stop_37_);
if (v___x_38_ == 0)
{
lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_39_ = lean_array_uget_borrowed(v_as_35_, v_i_36_);
v___x_40_ = lean_name_eq(v_a_34_, v___x_39_);
if (v___x_40_ == 0)
{
size_t v___x_41_; size_t v___x_42_; 
v___x_41_ = ((size_t)1ULL);
v___x_42_ = lean_usize_add(v_i_36_, v___x_41_);
v_i_36_ = v___x_42_;
goto _start;
}
else
{
return v___x_40_;
}
}
else
{
uint8_t v___x_44_; 
v___x_44_ = 0;
return v___x_44_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1___boxed(lean_object* v_a_45_, lean_object* v_as_46_, lean_object* v_i_47_, lean_object* v_stop_48_){
_start:
{
size_t v_i_boxed_49_; size_t v_stop_boxed_50_; uint8_t v_res_51_; lean_object* v_r_52_; 
v_i_boxed_49_ = lean_unbox_usize(v_i_47_);
lean_dec(v_i_47_);
v_stop_boxed_50_ = lean_unbox_usize(v_stop_48_);
lean_dec(v_stop_48_);
v_res_51_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(v_a_45_, v_as_46_, v_i_boxed_49_, v_stop_boxed_50_);
lean_dec_ref(v_as_46_);
lean_dec(v_a_45_);
v_r_52_ = lean_box(v_res_51_);
return v_r_52_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1(lean_object* v_as_53_, lean_object* v_a_54_){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_55_ = lean_unsigned_to_nat(0u);
v___x_56_ = lean_array_get_size(v_as_53_);
v___x_57_ = lean_nat_dec_lt(v___x_55_, v___x_56_);
if (v___x_57_ == 0)
{
return v___x_57_;
}
else
{
size_t v___x_58_; size_t v___x_59_; uint8_t v___x_60_; 
v___x_58_ = ((size_t)0ULL);
v___x_59_ = lean_usize_of_nat(v___x_56_);
v___x_60_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1_spec__1(v_a_54_, v_as_53_, v___x_58_, v___x_59_);
return v___x_60_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1___boxed(lean_object* v_as_61_, lean_object* v_a_62_){
_start:
{
uint8_t v_res_63_; lean_object* v_r_64_; 
v_res_63_ = l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1(v_as_61_, v_a_62_);
lean_dec(v_a_62_);
lean_dec_ref(v_as_61_);
v_r_64_ = lean_box(v_res_63_);
return v_r_64_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(lean_object* v_irExtNames_65_, lean_object* v_as_66_, size_t v_i_67_, size_t v_stop_68_, lean_object* v_b_69_){
_start:
{
lean_object* v___y_71_; uint8_t v___x_75_; 
v___x_75_ = lean_usize_dec_eq(v_i_67_, v_stop_68_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; lean_object* v_fst_77_; uint8_t v___x_78_; 
v___x_76_ = lean_array_uget_borrowed(v_as_66_, v_i_67_);
v_fst_77_ = lean_ctor_get(v___x_76_, 0);
v___x_78_ = l_Array_contains___at___00__private_LeanIR_0__mkIRData_spec__1(v_irExtNames_65_, v_fst_77_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; 
lean_inc(v___x_76_);
v___x_79_ = lean_array_push(v_b_69_, v___x_76_);
v___y_71_ = v___x_79_;
goto v___jp_70_;
}
else
{
v___y_71_ = v_b_69_;
goto v___jp_70_;
}
}
else
{
return v_b_69_;
}
v___jp_70_:
{
size_t v___x_72_; size_t v___x_73_; 
v___x_72_ = ((size_t)1ULL);
v___x_73_ = lean_usize_add(v_i_67_, v___x_72_);
v_i_67_ = v___x_73_;
v_b_69_ = v___y_71_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2___boxed(lean_object* v_irExtNames_80_, lean_object* v_as_81_, lean_object* v_i_82_, lean_object* v_stop_83_, lean_object* v_b_84_){
_start:
{
size_t v_i_boxed_85_; size_t v_stop_boxed_86_; lean_object* v_res_87_; 
v_i_boxed_85_ = lean_unbox_usize(v_i_82_);
lean_dec(v_i_82_);
v_stop_boxed_86_ = lean_unbox_usize(v_stop_83_);
lean_dec(v_stop_83_);
v_res_87_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(v_irExtNames_80_, v_as_81_, v_i_boxed_85_, v_stop_boxed_86_, v_b_84_);
lean_dec_ref(v_as_81_);
lean_dec_ref(v_irExtNames_80_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(size_t v_sz_88_, size_t v_i_89_, lean_object* v_bs_90_){
_start:
{
uint8_t v___x_91_; 
v___x_91_ = lean_usize_dec_lt(v_i_89_, v_sz_88_);
if (v___x_91_ == 0)
{
return v_bs_90_;
}
else
{
lean_object* v_v_92_; lean_object* v_fst_93_; lean_object* v___x_94_; lean_object* v_bs_x27_95_; size_t v___x_96_; size_t v___x_97_; lean_object* v___x_98_; 
v_v_92_ = lean_array_uget_borrowed(v_bs_90_, v_i_89_);
v_fst_93_ = lean_ctor_get(v_v_92_, 0);
lean_inc(v_fst_93_);
v___x_94_ = lean_unsigned_to_nat(0u);
v_bs_x27_95_ = lean_array_uset(v_bs_90_, v_i_89_, v___x_94_);
v___x_96_ = ((size_t)1ULL);
v___x_97_ = lean_usize_add(v_i_89_, v___x_96_);
v___x_98_ = lean_array_uset(v_bs_x27_95_, v_i_89_, v_fst_93_);
v_i_89_ = v___x_97_;
v_bs_90_ = v___x_98_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0___boxed(lean_object* v_sz_100_, lean_object* v_i_101_, lean_object* v_bs_102_){
_start:
{
size_t v_sz_boxed_103_; size_t v_i_boxed_104_; lean_object* v_res_105_; 
v_sz_boxed_103_ = lean_unbox_usize(v_sz_100_);
lean_dec(v_sz_100_);
v_i_boxed_104_ = lean_unbox_usize(v_i_101_);
lean_dec(v_i_101_);
v_res_105_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(v_sz_boxed_103_, v_i_boxed_104_, v_bs_102_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData(lean_object* v_env_110_){
_start:
{
lean_object* v_irEntries_112_; size_t v_sz_113_; size_t v___x_114_; lean_object* v_irExtNames_115_; uint8_t v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
lean_inc_ref_n(v_env_110_, 2);
v_irEntries_112_ = lean_ir_export_entries(v_env_110_);
v_sz_113_ = lean_array_size(v_irEntries_112_);
v___x_114_ = ((size_t)0ULL);
lean_inc_ref(v_irEntries_112_);
v_irExtNames_115_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_LeanIR_0__mkIRData_spec__0(v_sz_113_, v___x_114_, v_irEntries_112_);
v___x_116_ = 2;
v___x_117_ = lean_box(0);
v___x_118_ = l_Lean_mkModuleData(v_env_110_, v___x_116_, v___x_117_);
if (lean_obj_tag(v___x_118_) == 0)
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_143_; 
v_a_119_ = lean_ctor_get(v___x_118_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_143_ == 0)
{
v___x_121_ = v___x_118_;
v_isShared_122_ = v_isSharedCheck_143_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_118_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_143_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___y_124_; lean_object* v_entries_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; uint8_t v___x_140_; 
v_entries_136_ = lean_ctor_get(v_a_119_, 4);
lean_inc_ref(v_entries_136_);
lean_dec(v_a_119_);
v___x_137_ = lean_unsigned_to_nat(0u);
v___x_138_ = lean_array_get_size(v_entries_136_);
v___x_139_ = ((lean_object*)(l___private_LeanIR_0__mkIRData___closed__1));
v___x_140_ = lean_nat_dec_lt(v___x_137_, v___x_138_);
if (v___x_140_ == 0)
{
lean_dec_ref(v_entries_136_);
lean_dec_ref(v_irExtNames_115_);
v___y_124_ = v___x_139_;
goto v___jp_123_;
}
else
{
size_t v___x_141_; lean_object* v___x_142_; 
v___x_141_ = lean_usize_of_nat(v___x_138_);
v___x_142_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_LeanIR_0__mkIRData_spec__2(v_irExtNames_115_, v_entries_136_, v___x_114_, v___x_141_, v___x_139_);
lean_dec_ref(v_entries_136_);
lean_dec_ref(v_irExtNames_115_);
v___y_124_ = v___x_142_;
goto v___jp_123_;
}
v___jp_123_:
{
lean_object* v___x_125_; uint8_t v_isModule_126_; lean_object* v_imports_127_; lean_object* v___x_128_; uint8_t v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_134_; 
v___x_125_ = l_Lean_Environment_header(v_env_110_);
v_isModule_126_ = lean_ctor_get_uint8(v___x_125_, sizeof(void*)*8 + 4);
v_imports_127_ = lean_ctor_get(v___x_125_, 1);
lean_inc_ref(v_imports_127_);
lean_dec_ref(v___x_125_);
v___x_128_ = ((lean_object*)(l___private_LeanIR_0__mkIRData___closed__0));
v___x_129_ = 1;
v___x_130_ = lean_get_ir_extra_const_names(v_env_110_, v___x_116_, v___x_129_);
v___x_131_ = l_Array_append___redArg(v_irEntries_112_, v___y_124_);
lean_dec_ref(v___y_124_);
v___x_132_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_132_, 0, v_imports_127_);
lean_ctor_set(v___x_132_, 1, v___x_128_);
lean_ctor_set(v___x_132_, 2, v___x_128_);
lean_ctor_set(v___x_132_, 3, v___x_130_);
lean_ctor_set(v___x_132_, 4, v___x_131_);
lean_ctor_set(v___x_132_, 5, v___x_117_);
lean_ctor_set(v___x_132_, 6, v___x_117_);
lean_ctor_set_uint8(v___x_132_, sizeof(void*)*7, v_isModule_126_);
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 0, v___x_132_);
v___x_134_ = v___x_121_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v___x_132_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
}
}
else
{
lean_dec_ref(v_irExtNames_115_);
lean_dec_ref(v_irEntries_112_);
lean_dec_ref(v_env_110_);
return v___x_118_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__mkIRData___boxed(lean_object* v_env_144_, lean_object* v_a_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l___private_LeanIR_0__mkIRData(v_env_144_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(lean_object* v_s_148_){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_149_ = lean_string_utf8_byte_size(v_s_148_);
v___x_150_ = lean_unsigned_to_nat(2u);
v___x_151_ = lean_nat_dec_le(v___x_150_, v___x_149_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; 
lean_dec_ref(v_s_148_);
v___x_152_ = lean_box(0);
return v___x_152_;
}
else
{
lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_153_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg___closed__0));
v___x_154_ = lean_unsigned_to_nat(0u);
v___x_155_ = lean_string_memcmp(v_s_148_, v___x_153_, v___x_154_, v___x_154_, v___x_150_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; 
lean_dec_ref(v_s_148_);
v___x_156_ = lean_box(0);
return v___x_156_;
}
else
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
lean_inc_ref(v_s_148_);
v___x_157_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_157_, 0, v_s_148_);
lean_ctor_set(v___x_157_, 1, v___x_154_);
lean_ctor_set(v___x_157_, 2, v___x_149_);
v___x_158_ = l_String_Slice_pos_x21(v___x_157_, v___x_150_);
lean_dec_ref_known(v___x_157_, 3);
v___x_159_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_159_, 0, v_s_148_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
lean_ctor_set(v___x_159_, 2, v___x_149_);
v___x_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
return v___x_160_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0(lean_object* v_s_161_, lean_object* v_pat_162_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(v_s_161_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___boxed(lean_object* v_s_164_, lean_object* v_pat_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0(v_s_164_, v_pat_165_);
lean_dec_ref(v_pat_165_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(lean_object* v_val_167_, lean_object* v_a_168_, lean_object* v_b_169_){
_start:
{
lean_object* v_str_170_; lean_object* v_startInclusive_171_; lean_object* v_endExclusive_172_; lean_object* v___x_173_; uint8_t v_decide_174_; 
v_str_170_ = lean_ctor_get(v_val_167_, 0);
v_startInclusive_171_ = lean_ctor_get(v_val_167_, 1);
v_endExclusive_172_ = lean_ctor_get(v_val_167_, 2);
v___x_173_ = lean_nat_sub(v_endExclusive_172_, v_startInclusive_171_);
v_decide_174_ = lean_nat_dec_eq(v_a_168_, v___x_173_);
lean_dec(v___x_173_);
if (v_decide_174_ == 0)
{
lean_object* v___x_175_; uint32_t v___x_176_; uint32_t v___x_177_; uint8_t v___x_178_; 
v___x_175_ = lean_nat_add(v_startInclusive_171_, v_a_168_);
v___x_176_ = lean_string_utf8_get_fast(v_str_170_, v___x_175_);
v___x_177_ = 61;
v___x_178_ = lean_uint32_dec_eq(v___x_176_, v___x_177_);
if (v___x_178_ == 0)
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
lean_dec(v_a_168_);
v___x_179_ = lean_box(0);
v___x_180_ = lean_string_utf8_next_fast(v_str_170_, v___x_175_);
lean_dec(v___x_175_);
v___x_181_ = lean_nat_sub(v___x_180_, v_startInclusive_171_);
v_a_168_ = v___x_181_;
v_b_169_ = v___x_179_;
goto _start;
}
else
{
lean_object* v___x_183_; 
lean_dec(v___x_175_);
v___x_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_183_, 0, v_a_168_);
return v___x_183_;
}
}
else
{
lean_dec(v_a_168_);
lean_inc(v_b_169_);
return v_b_169_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg___boxed(lean_object* v_val_184_, lean_object* v_a_185_, lean_object* v_b_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(v_val_184_, v_a_185_, v_b_186_);
lean_dec(v_b_186_);
lean_dec_ref(v_val_184_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption(lean_object* v_opts_195_, lean_object* v_arg_196_){
_start:
{
lean_object* v___x_198_; 
lean_inc_ref(v_arg_196_);
v___x_198_ = l_String_dropPrefix_x3f___at___00__private_LeanIR_0__setConfigOption_spec__0___redArg(v_arg_196_);
if (lean_obj_tag(v___x_198_) == 1)
{
lean_object* v_val_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_263_; 
lean_dec_ref(v_arg_196_);
v_val_199_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_263_ == 0)
{
v___x_201_ = v___x_198_;
v_isShared_202_ = v_isSharedCheck_263_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_val_199_);
lean_dec(v___x_198_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_263_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___y_204_; lean_object* v_searcher_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v_searcher_256_ = lean_unsigned_to_nat(0u);
v___x_257_ = lean_box(0);
v___x_258_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(v_val_199_, v_searcher_256_, v___x_257_);
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v_startInclusive_259_; lean_object* v_endExclusive_260_; lean_object* v___x_261_; 
v_startInclusive_259_ = lean_ctor_get(v_val_199_, 1);
v_endExclusive_260_ = lean_ctor_get(v_val_199_, 2);
v___x_261_ = lean_nat_sub(v_endExclusive_260_, v_startInclusive_259_);
v___y_204_ = v___x_261_;
goto v___jp_203_;
}
else
{
lean_object* v_val_262_; 
v_val_262_ = lean_ctor_get(v___x_258_, 0);
lean_inc(v_val_262_);
lean_dec_ref_known(v___x_258_, 1);
v___y_204_ = v_val_262_;
goto v___jp_203_;
}
v___jp_203_:
{
lean_object* v_str_205_; lean_object* v_startInclusive_206_; lean_object* v_endExclusive_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_255_; 
v_str_205_ = lean_ctor_get(v_val_199_, 0);
v_startInclusive_206_ = lean_ctor_get(v_val_199_, 1);
v_endExclusive_207_ = lean_ctor_get(v_val_199_, 2);
v_isSharedCheck_255_ = !lean_is_exclusive(v_val_199_);
if (v_isSharedCheck_255_ == 0)
{
v___x_209_ = v_val_199_;
v_isShared_210_ = v_isSharedCheck_255_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_endExclusive_207_);
lean_inc(v_startInclusive_206_);
lean_inc(v_str_205_);
lean_dec(v_val_199_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_255_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_211_; uint8_t v_decide_212_; 
v___x_211_ = lean_nat_sub(v_endExclusive_207_, v_startInclusive_206_);
v_decide_212_ = lean_nat_dec_eq(v___y_204_, v___x_211_);
lean_dec(v___x_211_);
if (v_decide_212_ == 0)
{
lean_object* v___x_213_; lean_object* v___x_215_; 
v___x_213_ = lean_nat_add(v_startInclusive_206_, v___y_204_);
lean_dec(v___y_204_);
lean_inc(v___x_213_);
lean_inc(v_startInclusive_206_);
lean_inc_ref(v_str_205_);
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 2, v___x_213_);
v___x_215_ = v___x_209_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v_str_205_);
lean_ctor_set(v_reuseFailAlloc_250_, 1, v_startInclusive_206_);
lean_ctor_set(v_reuseFailAlloc_250_, 2, v___x_213_);
v___x_215_ = v_reuseFailAlloc_250_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
lean_object* v_name_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v_val_220_; lean_object* v___x_221_; 
v_name_216_ = l_String_Slice_toName(v___x_215_);
lean_dec_ref(v___x_215_);
v___x_217_ = lean_string_utf8_next_fast(v_str_205_, v___x_213_);
lean_dec(v___x_213_);
v___x_218_ = lean_nat_sub(v___x_217_, v_startInclusive_206_);
v___x_219_ = lean_nat_add(v_startInclusive_206_, v___x_218_);
lean_dec(v___x_218_);
lean_dec(v_startInclusive_206_);
v_val_220_ = lean_string_utf8_extract_fast(v_str_205_, v___x_219_, v_endExclusive_207_);
lean_dec(v_endExclusive_207_);
lean_dec(v___x_219_);
lean_dec_ref(v_str_205_);
v___x_221_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v_a_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_241_; 
v_a_222_ = lean_ctor_get(v___x_221_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_241_ == 0)
{
v___x_224_ = v___x_221_;
v_isShared_225_ = v_isSharedCheck_241_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_a_222_);
lean_dec(v___x_221_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_241_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_226_; 
v___x_226_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_222_, v_name_216_);
lean_dec(v_a_222_);
if (lean_obj_tag(v___x_226_) == 1)
{
lean_object* v_val_227_; lean_object* v___x_228_; 
lean_del_object(v___x_224_);
lean_del_object(v___x_201_);
v_val_227_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_val_227_);
lean_dec_ref_known(v___x_226_, 1);
v___x_228_ = l_Lean_Language_Lean_setOption(v_opts_195_, v_val_227_, v_name_216_, v_val_220_);
return v___x_228_;
}
else
{
lean_object* v___x_229_; uint8_t v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_236_; 
lean_dec(v___x_226_);
lean_dec_ref(v_val_220_);
lean_dec_ref(v_opts_195_);
v___x_229_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__0));
v___x_230_ = 1;
v___x_231_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_216_, v___x_230_);
v___x_232_ = lean_string_append(v___x_229_, v___x_231_);
lean_dec_ref(v___x_231_);
v___x_233_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__1));
v___x_234_ = lean_string_append(v___x_232_, v___x_233_);
if (v_isShared_202_ == 0)
{
lean_ctor_set_tag(v___x_201_, 18);
lean_ctor_set(v___x_201_, 0, v___x_234_);
v___x_236_ = v___x_201_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v___x_234_);
v___x_236_ = v_reuseFailAlloc_240_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
lean_object* v___x_238_; 
if (v_isShared_225_ == 0)
{
lean_ctor_set_tag(v___x_224_, 1);
lean_ctor_set(v___x_224_, 0, v___x_236_);
v___x_238_ = v___x_224_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_236_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
}
else
{
lean_object* v_a_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_249_; 
lean_dec_ref(v_val_220_);
lean_dec(v_name_216_);
lean_del_object(v___x_201_);
lean_dec_ref(v_opts_195_);
v_a_242_ = lean_ctor_get(v___x_221_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_249_ == 0)
{
v___x_244_ = v___x_221_;
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_a_242_);
lean_dec(v___x_221_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_247_; 
if (v_isShared_245_ == 0)
{
v___x_247_ = v___x_244_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_a_242_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
}
}
}
else
{
lean_object* v___x_251_; lean_object* v___x_253_; 
lean_del_object(v___x_209_);
lean_dec(v_endExclusive_207_);
lean_dec(v_startInclusive_206_);
lean_dec_ref(v_str_205_);
lean_dec(v___y_204_);
lean_dec_ref(v_opts_195_);
v___x_251_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__3));
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 0, v___x_251_);
v___x_253_ = v___x_201_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v___x_251_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
}
}
}
else
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
lean_dec(v___x_198_);
lean_dec_ref(v_opts_195_);
v___x_264_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__4));
v___x_265_ = lean_string_append(v___x_264_, v_arg_196_);
lean_dec_ref(v_arg_196_);
v___x_266_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__5));
v___x_267_ = lean_string_append(v___x_265_, v___x_266_);
v___x_268_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
v___x_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
return v___x_269_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanIR_0__setConfigOption___boxed(lean_object* v_opts_270_, lean_object* v_arg_271_, lean_object* v_a_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l___private_LeanIR_0__setConfigOption(v_opts_270_, v_arg_271_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1(lean_object* v_val_274_, lean_object* v_inst_275_, lean_object* v_R_276_, lean_object* v_a_277_, lean_object* v_b_278_, lean_object* v_c_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___redArg(v_val_274_, v_a_277_, v_b_278_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1___boxed(lean_object* v_val_281_, lean_object* v_inst_282_, lean_object* v_R_283_, lean_object* v_a_284_, lean_object* v_b_285_, lean_object* v_c_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_WellFounded_opaqueFix_u2083___at___00__private_LeanIR_0__setConfigOption_spec__1(v_val_281_, v_inst_282_, v_R_283_, v_a_284_, v_b_285_, v_c_286_);
lean_dec(v_b_285_);
lean_dec_ref(v_val_281_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0___redArg___lam__0(lean_object* v___x_288_, lean_object* v_x_289_){
_start:
{
lean_inc_ref(v___x_288_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0___redArg___lam__0___boxed(lean_object* v___x_290_, lean_object* v_x_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_main___elam__0___redArg___lam__0(v___x_290_, v_x_291_);
lean_dec_ref(v_x_291_);
lean_dec_ref(v___x_290_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0___redArg(lean_object* v___x_293_, uint8_t v___x_294_, lean_object* v_inst_295_, lean_object* v_ext_296_, lean_object* v_env_297_){
_start:
{
lean_object* v_toEnvExtension_299_; lean_object* v_addImportedFn_300_; lean_object* v_asyncMode_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v_importedEntries_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_335_; 
v_toEnvExtension_299_ = lean_ctor_get(v_ext_296_, 0);
lean_inc_ref(v_toEnvExtension_299_);
v_addImportedFn_300_ = lean_ctor_get(v_ext_296_, 2);
lean_inc_ref(v_addImportedFn_300_);
lean_dec_ref(v_ext_296_);
v_asyncMode_301_ = lean_ctor_get(v_toEnvExtension_299_, 2);
v___x_302_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v_inst_295_);
lean_inc_ref(v_env_297_);
v___x_303_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_302_, v_toEnvExtension_299_, v_env_297_, v_asyncMode_301_, v___x_293_, v___x_294_);
lean_dec_ref(v___x_302_);
v_importedEntries_304_ = lean_ctor_get(v___x_303_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_335_ == 0)
{
lean_object* v_unused_336_; 
v_unused_336_ = lean_ctor_get(v___x_303_, 1);
lean_dec(v_unused_336_);
v___x_306_ = v___x_303_;
v_isShared_307_ = v_isSharedCheck_335_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_importedEntries_304_);
lean_dec(v___x_303_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_335_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_308_ = l_Lean_Options_empty;
lean_inc_ref(v_env_297_);
v___x_309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_309_, 0, v_env_297_);
lean_ctor_set(v___x_309_, 1, v___x_308_);
lean_inc_ref(v_importedEntries_304_);
v___x_310_ = lean_apply_3(v_addImportedFn_300_, v_importedEntries_304_, v___x_309_, lean_box(0));
if (lean_obj_tag(v___x_310_) == 0)
{
lean_object* v_a_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_326_; 
v_a_311_ = lean_ctor_get(v___x_310_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_310_);
if (v_isSharedCheck_326_ == 0)
{
v___x_313_ = v___x_310_;
v_isShared_314_ = v_isSharedCheck_326_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_a_311_);
lean_dec(v___x_310_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_326_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_316_; 
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 1, v_a_311_);
v___x_316_ = v___x_306_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_importedEntries_304_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v_a_311_);
v___x_316_ = v_reuseFailAlloc_325_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
lean_object* v___f_317_; lean_object* v___x_318_; lean_object* v___x_319_; uint8_t v___x_320_; lean_object* v___x_321_; lean_object* v___x_323_; 
v___f_317_ = lean_alloc_closure((void*)(l_main___elam__0___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_317_, 0, v___x_316_);
v___x_318_ = lean_box(0);
v___x_319_ = lean_box(0);
v___x_320_ = 1;
v___x_321_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_299_, v_env_297_, v___f_317_, v___x_318_, v___x_319_, v___x_320_);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 0, v___x_321_);
v___x_323_ = v___x_313_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v___x_321_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
}
else
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
lean_del_object(v___x_306_);
lean_dec_ref(v_importedEntries_304_);
lean_dec_ref(v_toEnvExtension_299_);
lean_dec_ref(v_env_297_);
v_a_327_ = lean_ctor_get(v___x_310_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_310_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_310_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_310_);
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
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_a_327_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___elam__0___redArg___boxed(lean_object* v___x_337_, lean_object* v___x_338_, lean_object* v_inst_339_, lean_object* v_ext_340_, lean_object* v_env_341_, lean_object* v___y_342_){
_start:
{
uint8_t v___x_36198__boxed_343_; lean_object* v_res_344_; 
v___x_36198__boxed_343_ = lean_unbox(v___x_338_);
v_res_344_ = l_main___elam__0___redArg(v___x_337_, v___x_36198__boxed_343_, v_inst_339_, v_ext_340_, v_env_341_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0(lean_object* v___x_345_, uint8_t v___x_346_, lean_object* v_00_u03b1_347_, lean_object* v_00_u03b2_348_, lean_object* v_00_u03c3_349_, lean_object* v_inst_350_, lean_object* v_ext_351_, lean_object* v_env_352_){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = l_main___elam__0___redArg(v___x_345_, v___x_346_, v_inst_350_, v_ext_351_, v_env_352_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_main___elam__0___boxed(lean_object* v___x_355_, lean_object* v___x_356_, lean_object* v_00_u03b1_357_, lean_object* v_00_u03b2_358_, lean_object* v_00_u03c3_359_, lean_object* v_inst_360_, lean_object* v_ext_361_, lean_object* v_env_362_, lean_object* v___y_363_){
_start:
{
uint8_t v___x_36278__boxed_364_; lean_object* v_res_365_; 
v___x_36278__boxed_364_ = lean_unbox(v___x_356_);
v_res_365_ = l_main___elam__0(v___x_355_, v___x_36278__boxed_364_, v_00_u03b1_357_, v_00_u03b2_358_, v_00_u03c3_359_, v_inst_360_, v_ext_361_, v_env_362_);
return v_res_365_;
}
}
static lean_object* _init_l_panic___at___00main_spec__5___closed__0(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = l_instInhabitedError;
v___x_367_ = lean_alloc_closure((void*)(l_instInhabitedEIO___aux__1___boxed), 4, 3);
lean_closure_set(v___x_367_, 0, lean_box(0));
lean_closure_set(v___x_367_, 1, lean_box(0));
lean_closure_set(v___x_367_, 2, v___x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5(lean_object* v_msg_368_){
_start:
{
lean_object* v___x_370_; lean_object* v___x_19895__overap_371_; lean_object* v___x_372_; 
v___x_370_ = lean_obj_once(&l_panic___at___00main_spec__5___closed__0, &l_panic___at___00main_spec__5___closed__0_once, _init_l_panic___at___00main_spec__5___closed__0);
v___x_19895__overap_371_ = lean_panic_fn_borrowed(v___x_370_, v_msg_368_);
v___x_372_ = lean_apply_1(v___x_19895__overap_371_, lean_box(0));
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00main_spec__5___boxed(lean_object* v_msg_373_, lean_object* v___y_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_panic___at___00main_spec__5(v_msg_373_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__8(lean_object* v_opts_376_, lean_object* v_opt_377_){
_start:
{
lean_object* v_name_378_; lean_object* v_defValue_379_; lean_object* v_map_380_; lean_object* v___x_381_; 
v_name_378_ = lean_ctor_get(v_opt_377_, 0);
v_defValue_379_ = lean_ctor_get(v_opt_377_, 1);
v_map_380_ = lean_ctor_get(v_opts_376_, 0);
v___x_381_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_380_, v_name_378_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_inc(v_defValue_379_);
return v_defValue_379_;
}
else
{
lean_object* v_val_382_; 
v_val_382_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_val_382_);
lean_dec_ref_known(v___x_381_, 1);
if (lean_obj_tag(v_val_382_) == 3)
{
lean_object* v_v_383_; 
v_v_383_ = lean_ctor_get(v_val_382_, 0);
lean_inc(v_v_383_);
lean_dec_ref_known(v_val_382_, 1);
return v_v_383_;
}
else
{
lean_dec(v_val_382_);
lean_inc(v_defValue_379_);
return v_defValue_379_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00main_spec__8___boxed(lean_object* v_opts_384_, lean_object* v_opt_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l_Lean_Option_get___at___00main_spec__8(v_opts_384_, v_opt_385_);
lean_dec_ref(v_opt_385_);
lean_dec_ref(v_opts_384_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_main___lam__0(lean_object* v_package_x3f_387_, lean_object* v_ps_388_){
_start:
{
lean_object* v_importedEntries_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_396_; 
v_importedEntries_389_ = lean_ctor_get(v_ps_388_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v_ps_388_);
if (v_isSharedCheck_396_ == 0)
{
lean_object* v_unused_397_; 
v_unused_397_ = lean_ctor_get(v_ps_388_, 1);
lean_dec(v_unused_397_);
v___x_391_ = v_ps_388_;
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_importedEntries_389_);
lean_dec(v_ps_388_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_394_; 
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 1, v_package_x3f_387_);
v___x_394_ = v___x_391_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_importedEntries_389_);
lean_ctor_set(v_reuseFailAlloc_395_, 1, v_package_x3f_387_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(lean_object* v_a_398_, lean_object* v_x_399_){
_start:
{
if (lean_obj_tag(v_x_399_) == 0)
{
lean_dec(v_a_398_);
return v_x_399_;
}
else
{
lean_object* v_key_400_; lean_object* v_value_401_; lean_object* v_tail_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_435_; 
v_key_400_ = lean_ctor_get(v_x_399_, 0);
v_value_401_ = lean_ctor_get(v_x_399_, 1);
v_tail_402_ = lean_ctor_get(v_x_399_, 2);
v_isSharedCheck_435_ = !lean_is_exclusive(v_x_399_);
if (v_isSharedCheck_435_ == 0)
{
v___x_404_ = v_x_399_;
v_isShared_405_ = v_isSharedCheck_435_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_tail_402_);
lean_inc(v_value_401_);
lean_inc(v_key_400_);
lean_dec(v_x_399_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_435_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
uint8_t v___x_406_; 
v___x_406_ = lean_name_eq(v_key_400_, v_a_398_);
if (v___x_406_ == 0)
{
lean_object* v___x_407_; lean_object* v___x_409_; 
v___x_407_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(v_a_398_, v_tail_402_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 2, v___x_407_);
v___x_409_ = v___x_404_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_key_400_);
lean_ctor_set(v_reuseFailAlloc_410_, 1, v_value_401_);
lean_ctor_set(v_reuseFailAlloc_410_, 2, v___x_407_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
else
{
lean_object* v_toEffectiveImport_411_; lean_object* v_parts_412_; lean_object* v_irParts_413_; uint8_t v_needsIRTrans_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_434_; 
lean_dec(v_key_400_);
v_toEffectiveImport_411_ = lean_ctor_get(v_value_401_, 0);
v_parts_412_ = lean_ctor_get(v_value_401_, 1);
v_irParts_413_ = lean_ctor_get(v_value_401_, 2);
v_needsIRTrans_414_ = lean_ctor_get_uint8(v_value_401_, sizeof(void*)*3);
v_isSharedCheck_434_ = !lean_is_exclusive(v_value_401_);
if (v_isSharedCheck_434_ == 0)
{
v___x_416_ = v_value_401_;
v_isShared_417_ = v_isSharedCheck_434_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_irParts_413_);
lean_inc(v_parts_412_);
lean_inc(v_toEffectiveImport_411_);
lean_dec(v_value_401_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_434_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v_toImport_418_; uint8_t v_hasData_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_433_; 
v_toImport_418_ = lean_ctor_get(v_toEffectiveImport_411_, 0);
v_hasData_419_ = lean_ctor_get_uint8(v_toEffectiveImport_411_, sizeof(void*)*1 + 1);
v_isSharedCheck_433_ = !lean_is_exclusive(v_toEffectiveImport_411_);
if (v_isSharedCheck_433_ == 0)
{
v___x_421_ = v_toEffectiveImport_411_;
v_isShared_422_ = v_isSharedCheck_433_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_toImport_418_);
lean_dec(v_toEffectiveImport_411_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_433_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
uint8_t v___x_423_; lean_object* v___x_425_; 
v___x_423_ = 0;
if (v_isShared_422_ == 0)
{
v___x_425_ = v___x_421_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_toImport_418_);
lean_ctor_set_uint8(v_reuseFailAlloc_432_, sizeof(void*)*1 + 1, v_hasData_419_);
v___x_425_ = v_reuseFailAlloc_432_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
lean_object* v___x_427_; 
lean_ctor_set_uint8(v___x_425_, sizeof(void*)*1, v___x_423_);
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 0, v___x_425_);
v___x_427_ = v___x_416_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v___x_425_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v_parts_412_);
lean_ctor_set(v_reuseFailAlloc_431_, 2, v_irParts_413_);
lean_ctor_set_uint8(v_reuseFailAlloc_431_, sizeof(void*)*3, v_needsIRTrans_414_);
v___x_427_ = v_reuseFailAlloc_431_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
lean_object* v___x_429_; 
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 1, v___x_427_);
lean_ctor_set(v___x_404_, 0, v_a_398_);
v___x_429_ = v___x_404_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_a_398_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v___x_427_);
lean_ctor_set(v_reuseFailAlloc_430_, 2, v_tail_402_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4(lean_object* v_m_436_, lean_object* v_a_437_){
_start:
{
lean_object* v_size_438_; lean_object* v_buckets_439_; lean_object* v___x_440_; uint64_t v___y_442_; 
v_size_438_ = lean_ctor_get(v_m_436_, 0);
v_buckets_439_ = lean_ctor_get(v_m_436_, 1);
v___x_440_ = lean_array_get_size(v_buckets_439_);
if (lean_obj_tag(v_a_437_) == 0)
{
uint64_t v___x_469_; 
v___x_469_ = 1723ULL;
v___y_442_ = v___x_469_;
goto v___jp_441_;
}
else
{
uint64_t v_hash_470_; 
v_hash_470_ = lean_ctor_get_uint64(v_a_437_, sizeof(void*)*2);
v___y_442_ = v_hash_470_;
goto v___jp_441_;
}
v___jp_441_:
{
uint64_t v___x_443_; uint64_t v___x_444_; uint64_t v_fold_445_; uint64_t v___x_446_; uint64_t v___x_447_; uint64_t v___x_448_; size_t v___x_449_; size_t v___x_450_; size_t v___x_451_; size_t v___x_452_; size_t v___x_453_; lean_object* v_bucket_454_; uint8_t v___x_455_; 
v___x_443_ = 32ULL;
v___x_444_ = lean_uint64_shift_right(v___y_442_, v___x_443_);
v_fold_445_ = lean_uint64_xor(v___y_442_, v___x_444_);
v___x_446_ = 16ULL;
v___x_447_ = lean_uint64_shift_right(v_fold_445_, v___x_446_);
v___x_448_ = lean_uint64_xor(v_fold_445_, v___x_447_);
v___x_449_ = lean_uint64_to_usize(v___x_448_);
v___x_450_ = lean_usize_of_nat(v___x_440_);
v___x_451_ = ((size_t)1ULL);
v___x_452_ = lean_usize_sub(v___x_450_, v___x_451_);
v___x_453_ = lean_usize_land(v___x_449_, v___x_452_);
v_bucket_454_ = lean_array_uget_borrowed(v_buckets_439_, v___x_453_);
v___x_455_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(v_a_437_, v_bucket_454_);
if (v___x_455_ == 0)
{
lean_dec(v_a_437_);
return v_m_436_;
}
else
{
lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_466_; 
lean_inc(v_bucket_454_);
lean_inc_ref(v_buckets_439_);
lean_inc(v_size_438_);
v_isSharedCheck_466_ = !lean_is_exclusive(v_m_436_);
if (v_isSharedCheck_466_ == 0)
{
lean_object* v_unused_467_; lean_object* v_unused_468_; 
v_unused_467_ = lean_ctor_get(v_m_436_, 1);
lean_dec(v_unused_467_);
v_unused_468_ = lean_ctor_get(v_m_436_, 0);
lean_dec(v_unused_468_);
v___x_457_ = v_m_436_;
v_isShared_458_ = v_isSharedCheck_466_;
goto v_resetjp_456_;
}
else
{
lean_dec(v_m_436_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_466_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_459_; lean_object* v_buckets_460_; lean_object* v_bucket_461_; lean_object* v___x_462_; lean_object* v___x_464_; 
v___x_459_ = lean_box(0);
v_buckets_460_ = lean_array_uset(v_buckets_439_, v___x_453_, v___x_459_);
v_bucket_461_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4_spec__5(v_a_437_, v_bucket_454_);
v___x_462_ = lean_array_uset(v_buckets_460_, v___x_453_, v_bucket_461_);
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 1, v___x_462_);
v___x_464_ = v___x_457_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_size_438_);
lean_ctor_set(v_reuseFailAlloc_465_, 1, v___x_462_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___lam__1(lean_object* v___x_471_, lean_object* v___x_472_, uint8_t v___x_473_, lean_object* v_importArts_474_, uint8_t v___y_475_, uint8_t v___x_476_, lean_object* v_name_477_, lean_object* v___x_478_, uint8_t v___x_479_){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_481_ = lean_st_mk_ref(v___x_471_);
v___x_482_ = l_Lean_importModulesCore(v___x_472_, v___x_473_, v_importArts_474_, v___y_475_, v___x_476_, v___x_481_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v___x_483_; lean_object* v_moduleNameMap_484_; lean_object* v_moduleNames_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_495_; 
lean_dec_ref_known(v___x_482_, 1);
v___x_483_ = lean_st_ref_get(v___x_481_);
lean_dec(v___x_481_);
v_moduleNameMap_484_ = lean_ctor_get(v___x_483_, 0);
v_moduleNames_485_ = lean_ctor_get(v___x_483_, 1);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_495_ == 0)
{
v___x_487_ = v___x_483_;
v_isShared_488_ = v_isSharedCheck_495_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_moduleNames_485_);
lean_inc(v_moduleNameMap_484_);
lean_dec(v___x_483_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_495_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_489_; lean_object* v___x_491_; 
v___x_489_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00main_spec__4(v_moduleNameMap_484_, v_name_477_);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_489_);
v___x_491_ = v___x_487_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v___x_489_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v_moduleNames_485_);
v___x_491_ = v_reuseFailAlloc_494_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
uint32_t v___x_492_; lean_object* v___x_493_; 
v___x_492_ = 0;
v___x_493_ = l_Lean_finalizeImport(v___x_491_, v___x_472_, v___x_478_, v___x_492_, v___x_476_, v___x_479_, v___x_473_, v___x_476_, v___x_476_);
return v___x_493_;
}
}
}
else
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_503_; 
lean_dec(v___x_481_);
lean_dec_ref(v___x_478_);
lean_dec(v_name_477_);
lean_dec_ref(v___x_472_);
v_a_496_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_503_ == 0)
{
v___x_498_ = v___x_482_;
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_482_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_501_; 
if (v_isShared_499_ == 0)
{
v___x_501_ = v___x_498_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_a_496_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___lam__1___boxed(lean_object* v___x_504_, lean_object* v___x_505_, lean_object* v___x_506_, lean_object* v_importArts_507_, lean_object* v___y_508_, lean_object* v___x_509_, lean_object* v_name_510_, lean_object* v___x_511_, lean_object* v___x_512_, lean_object* v___y_513_){
_start:
{
uint8_t v___x_36446__boxed_514_; uint8_t v___y_36447__boxed_515_; uint8_t v___x_36448__boxed_516_; uint8_t v___x_36450__boxed_517_; lean_object* v_res_518_; 
v___x_36446__boxed_514_ = lean_unbox(v___x_506_);
v___y_36447__boxed_515_ = lean_unbox(v___y_508_);
v___x_36448__boxed_516_ = lean_unbox(v___x_509_);
v___x_36450__boxed_517_ = lean_unbox(v___x_512_);
v_res_518_ = l_main___lam__1(v___x_504_, v___x_505_, v___x_36446__boxed_514_, v_importArts_507_, v___y_36447__boxed_515_, v___x_36448__boxed_516_, v_name_510_, v___x_511_, v___x_36450__boxed_517_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_main___lam__2(lean_object* v___x_522_, lean_object* v___x_523_, uint16_t v___x_524_, lean_object* v_name_525_, lean_object* v_a_526_, uint8_t v___x_527_, lean_object* v___x_528_, lean_object* v_head_529_, lean_object* v___x_530_, lean_object* v___x_531_, lean_object* v___x_532_, lean_object* v___x_533_, lean_object* v___x_534_, lean_object* v___x_535_, lean_object* v___x_536_, lean_object* v___x_537_, uint8_t v___x_538_, uint8_t v___x_539_, uint8_t v___x_540_){
_start:
{
lean_object* v_a_543_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v_fileName_549_; lean_object* v_fileMap_550_; lean_object* v_currNamespace_551_; lean_object* v_openDecls_552_; lean_object* v_initHeartbeats_553_; lean_object* v_maxHeartbeats_554_; lean_object* v_quotContext_555_; lean_object* v_currMacroScope_556_; lean_object* v_cancelTk_x3f_557_; lean_object* v_inheritedTraceOptions_558_; lean_object* v_currRecDepth_559_; lean_object* v_ref_560_; uint8_t v_suppressElabErrors_561_; uint8_t v_checkDeprecated_562_; uint8_t v_isRecordingDeps_563_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; uint8_t v___y_599_; lean_object* v_env_620_; uint8_t v___x_621_; uint16_t v___x_622_; uint16_t v___x_623_; uint16_t v___x_624_; uint8_t v___x_625_; 
v___x_546_ = lean_io_get_num_heartbeats();
v___x_547_ = lean_st_mk_ref(v___x_522_);
v___x_595_ = l_Lean_inheritedTraceOptions;
v___x_596_ = lean_st_ref_get(v___x_595_);
v___x_597_ = lean_st_ref_get(v___x_547_);
v_env_620_ = lean_ctor_get(v___x_597_, 0);
lean_inc_ref(v_env_620_);
lean_dec(v___x_597_);
v___x_621_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_620_);
lean_dec_ref(v_env_620_);
v___x_622_ = 512;
v___x_623_ = lean_uint16_land(v___x_524_, v___x_622_);
v___x_624_ = 0;
v___x_625_ = lean_uint16_dec_eq(v___x_623_, v___x_624_);
if (v___x_625_ == 0)
{
if (v___x_621_ == 0)
{
v___y_599_ = v___x_527_;
goto v___jp_598_;
}
else
{
lean_dec_ref(v___x_528_);
lean_inc(v___x_531_);
v_fileName_549_ = v_head_529_;
v_fileMap_550_ = v___x_530_;
v_currNamespace_551_ = v___x_531_;
v_openDecls_552_ = v___x_532_;
v_initHeartbeats_553_ = v___x_546_;
v_maxHeartbeats_554_ = v___x_533_;
v_quotContext_555_ = v___x_531_;
v_currMacroScope_556_ = v___x_534_;
v_cancelTk_x3f_557_ = v___x_535_;
v_inheritedTraceOptions_558_ = v___x_596_;
v_currRecDepth_559_ = v___x_536_;
v_ref_560_ = v___x_537_;
v_suppressElabErrors_561_ = v___x_538_;
v_checkDeprecated_562_ = v___x_539_;
v_isRecordingDeps_563_ = v___x_538_;
goto v___jp_548_;
}
}
else
{
if (v___x_621_ == 0)
{
lean_dec_ref(v___x_528_);
lean_inc(v___x_531_);
v_fileName_549_ = v_head_529_;
v_fileMap_550_ = v___x_530_;
v_currNamespace_551_ = v___x_531_;
v_openDecls_552_ = v___x_532_;
v_initHeartbeats_553_ = v___x_546_;
v_maxHeartbeats_554_ = v___x_533_;
v_quotContext_555_ = v___x_531_;
v_currMacroScope_556_ = v___x_534_;
v_cancelTk_x3f_557_ = v___x_535_;
v_inheritedTraceOptions_558_ = v___x_596_;
v_currRecDepth_559_ = v___x_536_;
v_ref_560_ = v___x_537_;
v_suppressElabErrors_561_ = v___x_538_;
v_checkDeprecated_562_ = v___x_539_;
v_isRecordingDeps_563_ = v___x_538_;
goto v___jp_548_;
}
else
{
v___y_599_ = v___x_540_;
goto v___jp_598_;
}
}
v___jp_542_:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = lean_mk_io_user_error(v_a_543_);
v___x_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_545_, 0, v___x_544_);
return v___x_545_;
}
v___jp_548_:
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_564_ = l_Lean_maxRecDepth;
v___x_565_ = l_Lean_Option_get___at___00main_spec__8(v___x_523_, v___x_564_);
v___x_566_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_566_, 0, v_fileName_549_);
lean_ctor_set(v___x_566_, 1, v_fileMap_550_);
lean_ctor_set(v___x_566_, 2, v___x_523_);
lean_ctor_set(v___x_566_, 3, v___x_565_);
lean_ctor_set(v___x_566_, 4, v_currNamespace_551_);
lean_ctor_set(v___x_566_, 5, v_openDecls_552_);
lean_ctor_set(v___x_566_, 6, v_initHeartbeats_553_);
lean_ctor_set(v___x_566_, 7, v_maxHeartbeats_554_);
lean_ctor_set(v___x_566_, 8, v_quotContext_555_);
lean_ctor_set(v___x_566_, 9, v_currMacroScope_556_);
lean_ctor_set(v___x_566_, 10, v_cancelTk_x3f_557_);
lean_ctor_set(v___x_566_, 11, v_inheritedTraceOptions_558_);
v___x_567_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_567_, 0, v___x_566_);
lean_ctor_set(v___x_567_, 1, v_currRecDepth_559_);
lean_ctor_set(v___x_567_, 2, v_ref_560_);
lean_ctor_set_uint16(v___x_567_, sizeof(void*)*3, v___x_524_);
lean_ctor_set_uint8(v___x_567_, sizeof(void*)*3 + 2, v_suppressElabErrors_561_);
lean_ctor_set_uint8(v___x_567_, sizeof(void*)*3 + 3, v_checkDeprecated_562_);
lean_ctor_set_uint8(v___x_567_, sizeof(void*)*3 + 4, v_isRecordingDeps_563_);
v___x_568_ = l_Lean_Compiler_LCNF_emitC(v_name_525_, v___x_567_, v___x_547_);
lean_dec_ref_known(v___x_567_, 3);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v_a_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v_a_569_ = lean_ctor_get(v___x_568_, 0);
lean_inc(v_a_569_);
lean_dec_ref_known(v___x_568_, 1);
v___x_570_ = lean_st_ref_get(v___x_547_);
lean_dec(v___x_547_);
lean_dec(v___x_570_);
v___x_571_ = lean_string_to_utf8(v_a_569_);
v___x_572_ = lean_io_prim_handle_write(v_a_526_, v___x_571_);
lean_dec_ref(v___x_571_);
return v___x_572_;
}
else
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_594_; 
lean_dec(v___x_547_);
v_a_573_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_594_ == 0)
{
v___x_575_ = v___x_568_;
v_isShared_576_ = v_isSharedCheck_594_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_568_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_594_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
if (lean_obj_tag(v_a_573_) == 0)
{
lean_object* v_msg_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_581_; 
v_msg_577_ = lean_ctor_get(v_a_573_, 1);
lean_inc_ref(v_msg_577_);
lean_dec_ref_known(v_a_573_, 2);
v___x_578_ = l_Lean_MessageData_toString(v_msg_577_);
v___x_579_ = lean_mk_io_user_error(v___x_578_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 0, v___x_579_);
v___x_581_ = v___x_575_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v___x_579_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
else
{
lean_object* v_id_583_; lean_object* v___x_584_; 
lean_del_object(v___x_575_);
v_id_583_ = lean_ctor_get(v_a_573_, 0);
lean_inc(v_id_583_);
lean_dec_ref_known(v_a_573_, 2);
v___x_584_ = l_Lean_InternalExceptionId_getName(v_id_583_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v_a_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
lean_dec(v_id_583_);
v_a_585_ = lean_ctor_get(v___x_584_, 0);
lean_inc(v_a_585_);
lean_dec_ref_known(v___x_584_, 1);
v___x_586_ = ((lean_object*)(l_main___lam__2___closed__0));
v___x_587_ = l_Lean_Name_toString(v_a_585_, v___x_527_);
v___x_588_ = lean_string_append(v___x_586_, v___x_587_);
lean_dec_ref(v___x_587_);
v_a_543_ = v___x_588_;
goto v___jp_542_;
}
else
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
lean_dec_ref_known(v___x_584_, 1);
v___x_589_ = ((lean_object*)(l_main___lam__2___closed__1));
v___x_590_ = l_Nat_reprFast(v_id_583_);
v___x_591_ = lean_string_append(v___x_589_, v___x_590_);
lean_dec_ref(v___x_590_);
v___x_592_ = ((lean_object*)(l_main___lam__2___closed__2));
v___x_593_ = lean_string_append(v___x_591_, v___x_592_);
v_a_543_ = v___x_593_;
goto v___jp_542_;
}
}
}
}
}
v___jp_598_:
{
lean_object* v___x_600_; lean_object* v_env_601_; lean_object* v_nextMacroScope_602_; lean_object* v_ngen_603_; lean_object* v_auxDeclNGen_604_; lean_object* v_traceState_605_; lean_object* v_recordedDeps_606_; lean_object* v_messages_607_; lean_object* v_infoState_608_; lean_object* v_snapshotTasks_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_618_; 
v___x_600_ = lean_st_ref_take(v___x_547_);
v_env_601_ = lean_ctor_get(v___x_600_, 0);
v_nextMacroScope_602_ = lean_ctor_get(v___x_600_, 1);
v_ngen_603_ = lean_ctor_get(v___x_600_, 2);
v_auxDeclNGen_604_ = lean_ctor_get(v___x_600_, 3);
v_traceState_605_ = lean_ctor_get(v___x_600_, 4);
v_recordedDeps_606_ = lean_ctor_get(v___x_600_, 6);
v_messages_607_ = lean_ctor_get(v___x_600_, 7);
v_infoState_608_ = lean_ctor_get(v___x_600_, 8);
v_snapshotTasks_609_ = lean_ctor_get(v___x_600_, 9);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_618_ == 0)
{
lean_object* v_unused_619_; 
v_unused_619_ = lean_ctor_get(v___x_600_, 5);
lean_dec(v_unused_619_);
v___x_611_ = v___x_600_;
v_isShared_612_ = v_isSharedCheck_618_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_snapshotTasks_609_);
lean_inc(v_infoState_608_);
lean_inc(v_messages_607_);
lean_inc(v_recordedDeps_606_);
lean_inc(v_traceState_605_);
lean_inc(v_auxDeclNGen_604_);
lean_inc(v_ngen_603_);
lean_inc(v_nextMacroScope_602_);
lean_inc(v_env_601_);
lean_dec(v___x_600_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_618_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_613_; lean_object* v___x_615_; 
v___x_613_ = l_Lean_Kernel_enableDiag(v_env_601_, v___y_599_);
if (v_isShared_612_ == 0)
{
lean_ctor_set(v___x_611_, 5, v___x_528_);
lean_ctor_set(v___x_611_, 0, v___x_613_);
v___x_615_ = v___x_611_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v___x_613_);
lean_ctor_set(v_reuseFailAlloc_617_, 1, v_nextMacroScope_602_);
lean_ctor_set(v_reuseFailAlloc_617_, 2, v_ngen_603_);
lean_ctor_set(v_reuseFailAlloc_617_, 3, v_auxDeclNGen_604_);
lean_ctor_set(v_reuseFailAlloc_617_, 4, v_traceState_605_);
lean_ctor_set(v_reuseFailAlloc_617_, 5, v___x_528_);
lean_ctor_set(v_reuseFailAlloc_617_, 6, v_recordedDeps_606_);
lean_ctor_set(v_reuseFailAlloc_617_, 7, v_messages_607_);
lean_ctor_set(v_reuseFailAlloc_617_, 8, v_infoState_608_);
lean_ctor_set(v_reuseFailAlloc_617_, 9, v_snapshotTasks_609_);
v___x_615_ = v_reuseFailAlloc_617_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
lean_object* v___x_616_; 
v___x_616_ = lean_st_ref_put(v___x_547_, v___x_615_);
lean_inc(v___x_531_);
v_fileName_549_ = v_head_529_;
v_fileMap_550_ = v___x_530_;
v_currNamespace_551_ = v___x_531_;
v_openDecls_552_ = v___x_532_;
v_initHeartbeats_553_ = v___x_546_;
v_maxHeartbeats_554_ = v___x_533_;
v_quotContext_555_ = v___x_531_;
v_currMacroScope_556_ = v___x_534_;
v_cancelTk_x3f_557_ = v___x_535_;
v_inheritedTraceOptions_558_ = v___x_596_;
v_currRecDepth_559_ = v___x_536_;
v_ref_560_ = v___x_537_;
v_suppressElabErrors_561_ = v___x_538_;
v_checkDeprecated_562_ = v___x_539_;
v_isRecordingDeps_563_ = v___x_538_;
goto v___jp_548_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_main___lam__2___boxed(lean_object** _args){
lean_object* v___x_626_ = _args[0];
lean_object* v___x_627_ = _args[1];
lean_object* v___x_628_ = _args[2];
lean_object* v_name_629_ = _args[3];
lean_object* v_a_630_ = _args[4];
lean_object* v___x_631_ = _args[5];
lean_object* v___x_632_ = _args[6];
lean_object* v_head_633_ = _args[7];
lean_object* v___x_634_ = _args[8];
lean_object* v___x_635_ = _args[9];
lean_object* v___x_636_ = _args[10];
lean_object* v___x_637_ = _args[11];
lean_object* v___x_638_ = _args[12];
lean_object* v___x_639_ = _args[13];
lean_object* v___x_640_ = _args[14];
lean_object* v___x_641_ = _args[15];
lean_object* v___x_642_ = _args[16];
lean_object* v___x_643_ = _args[17];
lean_object* v___x_644_ = _args[18];
lean_object* v___y_645_ = _args[19];
_start:
{
uint16_t v___x_36519__boxed_646_; uint8_t v___x_36521__boxed_647_; uint8_t v___x_36532__boxed_648_; uint8_t v___x_36533__boxed_649_; uint8_t v___x_36534__boxed_650_; lean_object* v_res_651_; 
v___x_36519__boxed_646_ = lean_unbox(v___x_628_);
v___x_36521__boxed_647_ = lean_unbox(v___x_631_);
v___x_36532__boxed_648_ = lean_unbox(v___x_642_);
v___x_36533__boxed_649_ = lean_unbox(v___x_643_);
v___x_36534__boxed_650_ = lean_unbox(v___x_644_);
v_res_651_ = l_main___lam__2(v___x_626_, v___x_627_, v___x_36519__boxed_646_, v_name_629_, v_a_630_, v___x_36521__boxed_647_, v___x_632_, v_head_633_, v___x_634_, v___x_635_, v___x_636_, v___x_637_, v___x_638_, v___x_639_, v___x_640_, v___x_641_, v___x_36532__boxed_648_, v___x_36533__boxed_649_, v___x_36534__boxed_650_);
lean_dec(v_a_630_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l_main___lam__3(lean_object* v___x_652_, lean_object* v_x_653_){
_start:
{
lean_inc_ref(v___x_652_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_main___lam__3___boxed(lean_object* v___x_654_, lean_object* v_x_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = l_main___lam__3(v___x_654_, v_x_655_);
lean_dec_ref(v_x_655_);
lean_dec_ref(v___x_654_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(lean_object* v_x2_657_, lean_object* v_as_658_, size_t v_i_659_, size_t v_stop_660_, lean_object* v_b_661_){
_start:
{
uint8_t v___x_662_; 
v___x_662_ = lean_usize_dec_eq(v_i_659_, v_stop_660_);
if (v___x_662_ == 0)
{
lean_object* v___x_663_; lean_object* v___x_664_; size_t v___x_665_; size_t v___x_666_; 
v___x_663_ = lean_array_uget_borrowed(v_as_658_, v_i_659_);
lean_inc_ref(v_x2_657_);
lean_inc(v___x_663_);
v___x_664_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_663_, v_x2_657_, v_b_661_);
v___x_665_ = ((size_t)1ULL);
v___x_666_ = lean_usize_add(v_i_659_, v___x_665_);
v_i_659_ = v___x_666_;
v_b_661_ = v___x_664_;
goto _start;
}
else
{
lean_dec_ref(v_x2_657_);
return v_b_661_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2___boxed(lean_object* v_x2_668_, lean_object* v_as_669_, lean_object* v_i_670_, lean_object* v_stop_671_, lean_object* v_b_672_){
_start:
{
size_t v_i_boxed_673_; size_t v_stop_boxed_674_; lean_object* v_res_675_; 
v_i_boxed_673_ = lean_unbox_usize(v_i_670_);
lean_dec(v_i_670_);
v_stop_boxed_674_ = lean_unbox_usize(v_stop_671_);
lean_dec(v_stop_671_);
v_res_675_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(v_x2_668_, v_as_669_, v_i_boxed_673_, v_stop_boxed_674_, v_b_672_);
lean_dec_ref(v_as_669_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14(lean_object* v_as_676_, size_t v_i_677_, size_t v_stop_678_, lean_object* v_b_679_){
_start:
{
lean_object* v___y_681_; uint8_t v___x_685_; 
v___x_685_ = lean_usize_dec_eq(v_i_677_, v_stop_678_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; lean_object* v_declNames_687_; lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_686_ = lean_array_uget_borrowed(v_as_676_, v_i_677_);
v_declNames_687_ = lean_ctor_get(v___x_686_, 0);
v___x_688_ = lean_unsigned_to_nat(0u);
v___x_689_ = lean_array_get_size(v_declNames_687_);
v___x_690_ = lean_nat_dec_lt(v___x_688_, v___x_689_);
if (v___x_690_ == 0)
{
v___y_681_ = v_b_679_;
goto v___jp_680_;
}
else
{
size_t v___x_691_; size_t v___x_692_; lean_object* v___x_693_; 
v___x_691_ = ((size_t)0ULL);
v___x_692_ = lean_usize_of_nat(v___x_689_);
lean_inc(v___x_686_);
v___x_693_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__2(v___x_686_, v_declNames_687_, v___x_691_, v___x_692_, v_b_679_);
v___y_681_ = v___x_693_;
goto v___jp_680_;
}
}
else
{
return v_b_679_;
}
v___jp_680_:
{
size_t v___x_682_; size_t v___x_683_; 
v___x_682_ = ((size_t)1ULL);
v___x_683_ = lean_usize_add(v_i_677_, v___x_682_);
v_i_677_ = v___x_683_;
v_b_679_ = v___y_681_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14___boxed(lean_object* v_as_694_, lean_object* v_i_695_, lean_object* v_stop_696_, lean_object* v_b_697_){
_start:
{
size_t v_i_boxed_698_; size_t v_stop_boxed_699_; lean_object* v_res_700_; 
v_i_boxed_698_ = lean_unbox_usize(v_i_695_);
lean_dec(v_i_695_);
v_stop_boxed_699_ = lean_unbox_usize(v_stop_696_);
lean_dec(v_stop_696_);
v_res_700_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14(v_as_694_, v_i_boxed_698_, v_stop_boxed_699_, v_b_697_);
lean_dec_ref(v_as_694_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(lean_object* v_s_701_){
_start:
{
lean_object* v___x_703_; lean_object* v_putStr_704_; lean_object* v___x_705_; 
v___x_703_ = lean_get_stderr();
v_putStr_704_ = lean_ctor_get(v___x_703_, 4);
lean_inc_ref(v_putStr_704_);
lean_dec_ref(v___x_703_);
v___x_705_ = lean_apply_2(v_putStr_704_, v_s_701_, lean_box(0));
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8___boxed(lean_object* v_s_706_, lean_object* v_a_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(v_s_706_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6(lean_object* v_s_709_){
_start:
{
uint32_t v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_711_ = 10;
v___x_712_ = lean_string_push(v_s_709_, v___x_711_);
v___x_713_ = l_IO_eprint___at___00IO_eprintln___at___00main_spec__6_spec__8(v___x_712_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00main_spec__6___boxed(lean_object* v_s_714_, lean_object* v_a_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_IO_eprintln___at___00main_spec__6(v_s_714_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3(lean_object* v_o_720_, lean_object* v_k_721_, lean_object* v_v_722_){
_start:
{
lean_object* v_map_723_; uint8_t v_hasTrace_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_738_; 
v_map_723_ = lean_ctor_get(v_o_720_, 0);
v_hasTrace_724_ = lean_ctor_get_uint8(v_o_720_, sizeof(void*)*1);
v_isSharedCheck_738_ = !lean_is_exclusive(v_o_720_);
if (v_isSharedCheck_738_ == 0)
{
v___x_726_ = v_o_720_;
v_isShared_727_ = v_isSharedCheck_738_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_map_723_);
lean_dec(v_o_720_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_738_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_728_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_728_, 0, v_v_722_);
lean_inc(v_k_721_);
v___x_729_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_721_, v___x_728_, v_map_723_);
if (v_hasTrace_724_ == 0)
{
lean_object* v___x_730_; uint8_t v___x_731_; lean_object* v___x_733_; 
v___x_730_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1));
v___x_731_ = l_Lean_Name_isPrefixOf(v___x_730_, v_k_721_);
lean_dec(v_k_721_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 0, v___x_729_);
v___x_733_ = v___x_726_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_729_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_ctor_set_uint8(v___x_733_, sizeof(void*)*1, v___x_731_);
return v___x_733_;
}
}
else
{
lean_object* v___x_736_; 
lean_dec(v_k_721_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 0, v___x_729_);
v___x_736_ = v___x_726_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_729_);
lean_ctor_set_uint8(v_reuseFailAlloc_737_, sizeof(void*)*1, v_hasTrace_724_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00main_spec__3(lean_object* v_opts_739_, lean_object* v_opt_740_, lean_object* v_val_741_){
_start:
{
lean_object* v_name_742_; lean_object* v___x_743_; 
v_name_742_ = lean_ctor_get(v_opt_740_, 0);
lean_inc(v_name_742_);
lean_dec_ref(v_opt_740_);
v___x_743_ = l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3(v_opts_739_, v_name_742_, v_val_741_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(lean_object* v_as_744_, size_t v_i_745_, size_t v_stop_746_, lean_object* v_b_747_){
_start:
{
uint8_t v___x_748_; 
v___x_748_ = lean_usize_dec_eq(v_i_745_, v_stop_746_);
if (v___x_748_ == 0)
{
lean_object* v___x_749_; lean_object* v_name_750_; lean_object* v___x_751_; size_t v___x_752_; size_t v___x_753_; 
v___x_749_ = lean_array_uget_borrowed(v_as_744_, v_i_745_);
v_name_750_ = lean_ctor_get(v___x_749_, 0);
lean_inc(v_name_750_);
v___x_751_ = l_Lean_Compiler_LCNF_setDeclPublic(v_b_747_, v_name_750_);
v___x_752_ = ((size_t)1ULL);
v___x_753_ = lean_usize_add(v_i_745_, v___x_752_);
v_i_745_ = v___x_753_;
v_b_747_ = v___x_751_;
goto _start;
}
else
{
return v_b_747_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16___boxed(lean_object* v_as_755_, lean_object* v_i_756_, lean_object* v_stop_757_, lean_object* v_b_758_){
_start:
{
size_t v_i_boxed_759_; size_t v_stop_boxed_760_; lean_object* v_res_761_; 
v_i_boxed_759_ = lean_unbox_usize(v_i_756_);
lean_dec(v_i_756_);
v_stop_boxed_760_ = lean_unbox_usize(v_stop_757_);
lean_dec(v_stop_757_);
v_res_761_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(v_as_755_, v_i_boxed_759_, v_stop_boxed_760_, v_b_758_);
lean_dec_ref(v_as_755_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg(lean_object* v_as_x27_763_, lean_object* v_b_764_){
_start:
{
if (lean_obj_tag(v_as_x27_763_) == 0)
{
lean_object* v___x_766_; 
v___x_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_766_, 0, v_b_764_);
return v___x_766_;
}
else
{
lean_object* v_head_767_; lean_object* v_tail_768_; lean_object* v_fst_769_; lean_object* v_snd_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_795_; 
v_head_767_ = lean_ctor_get(v_as_x27_763_, 0);
v_tail_768_ = lean_ctor_get(v_as_x27_763_, 1);
v_fst_769_ = lean_ctor_get(v_b_764_, 0);
v_snd_770_ = lean_ctor_get(v_b_764_, 1);
v_isSharedCheck_795_ = !lean_is_exclusive(v_b_764_);
if (v_isSharedCheck_795_ == 0)
{
v___x_772_ = v_b_764_;
v_isShared_773_ = v_isSharedCheck_795_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_snd_770_);
lean_inc(v_fst_769_);
lean_dec(v_b_764_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_795_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_774_; uint8_t v___x_775_; 
v___x_774_ = ((lean_object*)(l_List_forIn_x27_loop___at___00main_spec__1___redArg___closed__0));
v___x_775_ = lean_string_dec_eq(v_head_767_, v___x_774_);
if (v___x_775_ == 0)
{
lean_object* v___x_776_; 
lean_inc(v_head_767_);
v___x_776_ = l___private_LeanIR_0__setConfigOption(v_snd_770_, v_head_767_);
if (lean_obj_tag(v___x_776_) == 0)
{
lean_object* v_a_777_; lean_object* v___x_779_; 
v_a_777_ = lean_ctor_get(v___x_776_, 0);
lean_inc(v_a_777_);
lean_dec_ref_known(v___x_776_, 1);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 1, v_a_777_);
v___x_779_ = v___x_772_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_fst_769_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v_a_777_);
v___x_779_ = v_reuseFailAlloc_781_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
v_as_x27_763_ = v_tail_768_;
v_b_764_ = v___x_779_;
goto _start;
}
}
else
{
lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_789_; 
lean_del_object(v___x_772_);
lean_dec(v_fst_769_);
v_a_782_ = lean_ctor_get(v___x_776_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_776_);
if (v_isSharedCheck_789_ == 0)
{
v___x_784_ = v___x_776_;
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___x_776_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_787_; 
if (v_isShared_785_ == 0)
{
v___x_787_ = v___x_784_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_a_782_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
else
{
lean_object* v___x_790_; lean_object* v___x_792_; 
lean_dec(v_fst_769_);
v___x_790_ = lean_box(v___x_775_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 0, v___x_790_);
v___x_792_ = v___x_772_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v___x_790_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v_snd_770_);
v___x_792_ = v_reuseFailAlloc_794_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
v_as_x27_763_ = v_tail_768_;
v_b_764_ = v___x_792_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___redArg___boxed(lean_object* v_as_x27_796_, lean_object* v_b_797_, lean_object* v___y_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_as_x27_796_, v_b_797_);
lean_dec(v_as_x27_796_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(lean_object* v_a_800_, lean_object* v_as_801_, size_t v_i_802_, size_t v_stop_803_, lean_object* v_b_804_){
_start:
{
lean_object* v___y_806_; uint8_t v___x_810_; 
v___x_810_ = lean_usize_dec_eq(v_i_802_, v_stop_803_);
if (v___x_810_ == 0)
{
lean_object* v___x_811_; lean_object* v_name_812_; uint8_t v___x_813_; 
v___x_811_ = lean_array_uget_borrowed(v_as_801_, v_i_802_);
v_name_812_ = lean_ctor_get(v___x_811_, 0);
lean_inc(v_name_812_);
lean_inc_ref(v_a_800_);
v___x_813_ = l_Lean_isExtern(v_a_800_, v_name_812_);
if (v___x_813_ == 0)
{
v___y_806_ = v_b_804_;
goto v___jp_805_;
}
else
{
lean_object* v___x_814_; 
lean_inc(v___x_811_);
v___x_814_ = lean_array_push(v_b_804_, v___x_811_);
v___y_806_ = v___x_814_;
goto v___jp_805_;
}
}
else
{
lean_dec_ref(v_a_800_);
return v_b_804_;
}
v___jp_805_:
{
size_t v___x_807_; size_t v___x_808_; 
v___x_807_ = ((size_t)1ULL);
v___x_808_ = lean_usize_add(v_i_802_, v___x_807_);
v_i_802_ = v___x_808_;
v_b_804_ = v___y_806_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18___boxed(lean_object* v_a_815_, lean_object* v_as_816_, lean_object* v_i_817_, lean_object* v_stop_818_, lean_object* v_b_819_){
_start:
{
size_t v_i_boxed_820_; size_t v_stop_boxed_821_; lean_object* v_res_822_; 
v_i_boxed_820_ = lean_unbox_usize(v_i_817_);
lean_dec(v_i_817_);
v_stop_boxed_821_ = lean_unbox_usize(v_stop_818_);
lean_dec(v_stop_818_);
v_res_822_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(v_a_815_, v_as_816_, v_i_boxed_820_, v_stop_boxed_821_, v_b_819_);
lean_dec_ref(v_as_816_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___lam__0(lean_object* v_addEntryFn_823_, lean_object* v___x_824_, lean_object* v_s_825_){
_start:
{
lean_object* v_importedEntries_826_; lean_object* v_state_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_835_; 
v_importedEntries_826_ = lean_ctor_get(v_s_825_, 0);
v_state_827_ = lean_ctor_get(v_s_825_, 1);
v_isSharedCheck_835_ = !lean_is_exclusive(v_s_825_);
if (v_isSharedCheck_835_ == 0)
{
v___x_829_ = v_s_825_;
v_isShared_830_ = v_isSharedCheck_835_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_state_827_);
lean_inc(v_importedEntries_826_);
lean_dec(v_s_825_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_835_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v_state_831_; lean_object* v___x_833_; 
v_state_831_ = lean_apply_2(v_addEntryFn_823_, v_state_827_, v___x_824_);
if (v_isShared_830_ == 0)
{
lean_ctor_set(v___x_829_, 1, v_state_831_);
v___x_833_ = v___x_829_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_importedEntries_826_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v_state_831_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(lean_object* v_as_836_, size_t v_i_837_, size_t v_stop_838_, lean_object* v_b_839_){
_start:
{
lean_object* v___y_841_; uint8_t v___x_845_; 
v___x_845_ = lean_usize_dec_eq(v_i_837_, v_stop_838_);
if (v___x_845_ == 0)
{
lean_object* v___x_846_; lean_object* v_toEnvExtension_847_; lean_object* v_addEntryFn_848_; lean_object* v_asyncMode_849_; uint8_t v_logWrites_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___f_853_; uint8_t v___x_854_; 
v___x_846_ = l_Lean_Compiler_LCNF_impureSigExt;
v_toEnvExtension_847_ = lean_ctor_get(v___x_846_, 0);
v_addEntryFn_848_ = lean_ctor_get(v___x_846_, 3);
v_asyncMode_849_ = lean_ctor_get(v_toEnvExtension_847_, 2);
v_logWrites_850_ = lean_ctor_get_uint8(v_toEnvExtension_847_, sizeof(void*)*6);
v___x_851_ = lean_box(0);
v___x_852_ = lean_array_uget_borrowed(v_as_836_, v_i_837_);
lean_inc(v___x_852_);
lean_inc(v_addEntryFn_848_);
v___f_853_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___lam__0), 3, 2);
lean_closure_set(v___f_853_, 0, v_addEntryFn_848_);
lean_closure_set(v___f_853_, 1, v___x_852_);
v___x_854_ = 1;
if (v_logWrites_850_ == 0)
{
lean_object* v___x_855_; 
lean_inc_ref(v_toEnvExtension_847_);
v___x_855_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_847_, v_b_839_, v___f_853_, v_asyncMode_849_, v___x_851_, v___x_854_);
v___y_841_ = v___x_855_;
goto v___jp_840_;
}
else
{
lean_object* v___x_856_; lean_object* v___x_857_; 
lean_inc_ref_n(v_toEnvExtension_847_, 2);
v___x_856_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite___redArg(v_toEnvExtension_847_, v_b_839_);
lean_dec_ref(v_b_839_);
v___x_857_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_847_, v___x_856_, v___f_853_, v_asyncMode_849_, v___x_851_, v___x_854_);
v___y_841_ = v___x_857_;
goto v___jp_840_;
}
}
else
{
return v_b_839_;
}
v___jp_840_:
{
size_t v___x_842_; size_t v___x_843_; 
v___x_842_ = ((size_t)1ULL);
v___x_843_ = lean_usize_add(v_i_837_, v___x_842_);
v_i_837_ = v___x_843_;
v_b_839_ = v___y_841_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17___boxed(lean_object* v_as_858_, lean_object* v_i_859_, lean_object* v_stop_860_, lean_object* v_b_861_){
_start:
{
size_t v_i_boxed_862_; size_t v_stop_boxed_863_; lean_object* v_res_864_; 
v_i_boxed_862_ = lean_unbox_usize(v_i_859_);
lean_dec(v_i_859_);
v_stop_boxed_863_ = lean_unbox_usize(v_stop_860_);
lean_dec(v_stop_860_);
v_res_864_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(v_as_858_, v_i_boxed_862_, v_stop_boxed_863_, v_b_861_);
lean_dec_ref(v_as_858_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(lean_object* v___y_866_, lean_object* v_as_867_, size_t v_i_868_, size_t v_stop_869_, lean_object* v_b_870_){
_start:
{
lean_object* v___y_872_; uint8_t v___x_876_; 
v___x_876_ = lean_usize_dec_eq(v_i_868_, v_stop_869_);
if (v___x_876_ == 0)
{
lean_object* v_fst_877_; lean_object* v_snd_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___y_882_; 
v_fst_877_ = lean_ctor_get(v_b_870_, 0);
v_snd_878_ = lean_ctor_get(v_b_870_, 1);
v___x_879_ = lean_array_uget_borrowed(v_as_867_, v_i_868_);
v___x_880_ = l_Lean_IR_Decl_name(v___x_879_);
if (lean_obj_tag(v___x_880_) == 1)
{
lean_object* v_pre_895_; lean_object* v_str_896_; lean_object* v___x_897_; uint8_t v___x_898_; 
v_pre_895_ = lean_ctor_get(v___x_880_, 0);
v_str_896_ = lean_ctor_get(v___x_880_, 1);
v___x_897_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___closed__0));
v___x_898_ = lean_string_dec_eq(v_str_896_, v___x_897_);
if (v___x_898_ == 0)
{
lean_inc_ref(v___x_880_);
v___y_882_ = v___x_880_;
goto v___jp_881_;
}
else
{
lean_inc(v_pre_895_);
v___y_882_ = v_pre_895_;
goto v___jp_881_;
}
}
else
{
lean_inc(v___x_880_);
v___y_882_ = v___x_880_;
goto v___jp_881_;
}
v___jp_881_:
{
uint8_t v___x_883_; 
lean_inc_ref(v___y_866_);
v___x_883_ = l_Lean_isExtern(v___y_866_, v___y_882_);
if (v___x_883_ == 0)
{
lean_dec(v___x_880_);
v___y_872_ = v_b_870_;
goto v___jp_871_;
}
else
{
lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_892_; 
lean_inc(v_snd_878_);
lean_inc(v_fst_877_);
v_isSharedCheck_892_ = !lean_is_exclusive(v_b_870_);
if (v_isSharedCheck_892_ == 0)
{
lean_object* v_unused_893_; lean_object* v_unused_894_; 
v_unused_893_ = lean_ctor_get(v_b_870_, 1);
lean_dec(v_unused_893_);
v_unused_894_ = lean_ctor_get(v_b_870_, 0);
lean_dec(v_unused_894_);
v___x_885_ = v_b_870_;
v_isShared_886_ = v_isSharedCheck_892_;
goto v_resetjp_884_;
}
else
{
lean_dec(v_b_870_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_892_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_890_; 
lean_inc_n(v___x_879_, 2);
v___x_887_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_887_, 0, v___x_879_);
lean_ctor_set(v___x_887_, 1, v_fst_877_);
v___x_888_ = l_Lean_PersistentHashMap_insert___at___00Lean_SMap_insert___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_initFn_00___x40_Lean_Compiler_CSimpAttr_309491121____hygCtx___hyg_2__spec__0_spec__0___redArg(v_snd_878_, v___x_880_, v___x_879_);
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 1, v___x_888_);
lean_ctor_set(v___x_885_, 0, v___x_887_);
v___x_890_ = v___x_885_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_887_);
lean_ctor_set(v_reuseFailAlloc_891_, 1, v___x_888_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
v___y_872_ = v___x_890_;
goto v___jp_871_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_866_);
return v_b_870_;
}
v___jp_871_:
{
size_t v___x_873_; size_t v___x_874_; 
v___x_873_ = ((size_t)1ULL);
v___x_874_ = lean_usize_add(v_i_868_, v___x_873_);
v_i_868_ = v___x_874_;
v_b_870_ = v___y_872_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15___boxed(lean_object* v___y_899_, lean_object* v_as_900_, lean_object* v_i_901_, lean_object* v_stop_902_, lean_object* v_b_903_){
_start:
{
size_t v_i_boxed_904_; size_t v_stop_boxed_905_; lean_object* v_res_906_; 
v_i_boxed_904_ = lean_unbox_usize(v_i_901_);
lean_dec(v_i_901_);
v_stop_boxed_905_ = lean_unbox_usize(v_stop_902_);
lean_dec(v_stop_902_);
v_res_906_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(v___y_899_, v_as_900_, v_i_boxed_904_, v_stop_boxed_905_, v_b_903_);
lean_dec_ref(v_as_900_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27(lean_object* v_as_910_, size_t v_sz_911_, size_t v_i_912_, lean_object* v_b_913_){
_start:
{
uint8_t v___x_915_; 
v___x_915_ = lean_usize_dec_lt(v_i_912_, v_sz_911_);
if (v___x_915_ == 0)
{
lean_object* v___x_916_; 
v___x_916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_916_, 0, v_b_913_);
return v___x_916_;
}
else
{
uint8_t v___x_917_; lean_object* v_a_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
lean_dec_ref(v_b_913_);
v___x_917_ = 0;
v_a_918_ = lean_array_uget_borrowed(v_as_910_, v_i_912_);
lean_inc(v_a_918_);
v___x_919_ = l_Lean_Message_toString(v_a_918_, v___x_917_);
v___x_920_ = l_IO_eprintln___at___00main_spec__6(v___x_919_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v___x_921_; size_t v___x_922_; size_t v___x_923_; 
lean_dec_ref_known(v___x_920_, 1);
v___x_921_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0));
v___x_922_ = ((size_t)1ULL);
v___x_923_ = lean_usize_add(v_i_912_, v___x_922_);
v_i_912_ = v___x_923_;
v_b_913_ = v___x_921_;
goto _start;
}
else
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
v_a_925_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_920_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_920_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_925_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___boxed(lean_object* v_as_933_, lean_object* v_sz_934_, lean_object* v_i_935_, lean_object* v_b_936_, lean_object* v___y_937_){
_start:
{
size_t v_sz_boxed_938_; size_t v_i_boxed_939_; lean_object* v_res_940_; 
v_sz_boxed_938_ = lean_unbox_usize(v_sz_934_);
lean_dec(v_sz_934_);
v_i_boxed_939_ = lean_unbox_usize(v_i_935_);
lean_dec(v_i_935_);
v_res_940_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27(v_as_933_, v_sz_boxed_938_, v_i_boxed_939_, v_b_936_);
lean_dec_ref(v_as_933_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(lean_object* v_as_941_, size_t v_sz_942_, size_t v_i_943_, lean_object* v_b_944_){
_start:
{
uint8_t v___x_946_; 
v___x_946_ = lean_usize_dec_lt(v_i_943_, v_sz_942_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; 
v___x_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_947_, 0, v_b_944_);
return v___x_947_;
}
else
{
uint8_t v___x_948_; lean_object* v_a_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
lean_dec_ref(v_b_944_);
v___x_948_ = 0;
v_a_949_ = lean_array_uget_borrowed(v_as_941_, v_i_943_);
lean_inc(v_a_949_);
v___x_950_ = l_Lean_Message_toString(v_a_949_, v___x_948_);
v___x_951_ = l_IO_eprintln___at___00main_spec__6(v___x_950_);
if (lean_obj_tag(v___x_951_) == 0)
{
lean_object* v___x_952_; size_t v___x_953_; size_t v___x_954_; lean_object* v___x_955_; 
lean_dec_ref_known(v___x_951_, 1);
v___x_952_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0));
v___x_953_ = ((size_t)1ULL);
v___x_954_ = lean_usize_add(v_i_943_, v___x_953_);
v___x_955_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27(v_as_941_, v_sz_942_, v___x_954_, v___x_952_);
return v___x_955_;
}
else
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
v_a_956_ = lean_ctor_get(v___x_951_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_951_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_951_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13___boxed(lean_object* v_as_964_, lean_object* v_sz_965_, lean_object* v_i_966_, lean_object* v_b_967_, lean_object* v___y_968_){
_start:
{
size_t v_sz_boxed_969_; size_t v_i_boxed_970_; lean_object* v_res_971_; 
v_sz_boxed_969_ = lean_unbox_usize(v_sz_965_);
lean_dec(v_sz_965_);
v_i_boxed_970_ = lean_unbox_usize(v_i_966_);
lean_dec(v_i_966_);
v_res_971_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(v_as_964_, v_sz_boxed_969_, v_i_boxed_970_, v_b_967_);
lean_dec_ref(v_as_964_);
return v_res_971_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(lean_object* v_init_972_, lean_object* v_n_973_, lean_object* v_b_974_){
_start:
{
if (lean_obj_tag(v_n_973_) == 0)
{
lean_object* v_cs_976_; lean_object* v___x_977_; lean_object* v___x_978_; size_t v_sz_979_; size_t v___x_980_; lean_object* v___x_981_; 
v_cs_976_ = lean_ctor_get(v_n_973_, 0);
v___x_977_ = lean_box(0);
v___x_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_977_);
lean_ctor_set(v___x_978_, 1, v_b_974_);
v_sz_979_ = lean_array_size(v_cs_976_);
v___x_980_ = ((size_t)0ULL);
v___x_981_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12(v_init_972_, v_cs_976_, v_sz_979_, v___x_980_, v___x_978_);
if (lean_obj_tag(v___x_981_) == 0)
{
lean_object* v_a_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_996_; 
v_a_982_ = lean_ctor_get(v___x_981_, 0);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_996_ == 0)
{
v___x_984_ = v___x_981_;
v_isShared_985_ = v_isSharedCheck_996_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_a_982_);
lean_dec(v___x_981_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_996_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v_fst_986_; 
v_fst_986_ = lean_ctor_get(v_a_982_, 0);
if (lean_obj_tag(v_fst_986_) == 0)
{
lean_object* v_snd_987_; lean_object* v___x_988_; lean_object* v___x_990_; 
v_snd_987_ = lean_ctor_get(v_a_982_, 1);
lean_inc(v_snd_987_);
lean_dec(v_a_982_);
v___x_988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_988_, 0, v_snd_987_);
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 0, v___x_988_);
v___x_990_ = v___x_984_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v___x_988_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
else
{
lean_object* v_val_992_; lean_object* v___x_994_; 
lean_inc_ref(v_fst_986_);
lean_dec(v_a_982_);
v_val_992_ = lean_ctor_get(v_fst_986_, 0);
lean_inc(v_val_992_);
lean_dec_ref_known(v_fst_986_, 1);
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 0, v_val_992_);
v___x_994_ = v___x_984_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_val_992_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
}
else
{
lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1004_; 
v_a_997_ = lean_ctor_get(v___x_981_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_999_ = v___x_981_;
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_dec(v___x_981_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1002_; 
if (v_isShared_1000_ == 0)
{
v___x_1002_ = v___x_999_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_997_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
else
{
lean_object* v_vs_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; size_t v_sz_1008_; size_t v___x_1009_; lean_object* v___x_1010_; 
v_vs_1005_ = lean_ctor_get(v_n_973_, 0);
v___x_1006_ = lean_box(0);
v___x_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1006_);
lean_ctor_set(v___x_1007_, 1, v_b_974_);
v_sz_1008_ = lean_array_size(v_vs_1005_);
v___x_1009_ = ((size_t)0ULL);
v___x_1010_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13(v_vs_1005_, v_sz_1008_, v___x_1009_, v___x_1007_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1025_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1013_ = v___x_1010_;
v_isShared_1014_ = v_isSharedCheck_1025_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_a_1011_);
lean_dec(v___x_1010_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1025_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v_fst_1015_; 
v_fst_1015_ = lean_ctor_get(v_a_1011_, 0);
if (lean_obj_tag(v_fst_1015_) == 0)
{
lean_object* v_snd_1016_; lean_object* v___x_1017_; lean_object* v___x_1019_; 
v_snd_1016_ = lean_ctor_get(v_a_1011_, 1);
lean_inc(v_snd_1016_);
lean_dec(v_a_1011_);
v___x_1017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1017_, 0, v_snd_1016_);
if (v_isShared_1014_ == 0)
{
lean_ctor_set(v___x_1013_, 0, v___x_1017_);
v___x_1019_ = v___x_1013_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1017_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
else
{
lean_object* v_val_1021_; lean_object* v___x_1023_; 
lean_inc_ref(v_fst_1015_);
lean_dec(v_a_1011_);
v_val_1021_ = lean_ctor_get(v_fst_1015_, 0);
lean_inc(v_val_1021_);
lean_dec_ref_known(v_fst_1015_, 1);
if (v_isShared_1014_ == 0)
{
lean_ctor_set(v___x_1013_, 0, v_val_1021_);
v___x_1023_ = v___x_1013_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v_val_1021_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
}
}
else
{
lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1033_; 
v_a_1026_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1028_ = v___x_1010_;
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_1010_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1031_; 
if (v_isShared_1029_ == 0)
{
v___x_1031_ = v___x_1028_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_a_1026_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12(lean_object* v_init_1034_, lean_object* v_as_1035_, size_t v_sz_1036_, size_t v_i_1037_, lean_object* v_b_1038_){
_start:
{
uint8_t v___x_1040_; 
v___x_1040_ = lean_usize_dec_lt(v_i_1037_, v_sz_1036_);
if (v___x_1040_ == 0)
{
lean_object* v___x_1041_; 
v___x_1041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1041_, 0, v_b_1038_);
return v___x_1041_;
}
else
{
lean_object* v_snd_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1076_; 
v_snd_1042_ = lean_ctor_get(v_b_1038_, 1);
v_isSharedCheck_1076_ = !lean_is_exclusive(v_b_1038_);
if (v_isSharedCheck_1076_ == 0)
{
lean_object* v_unused_1077_; 
v_unused_1077_ = lean_ctor_get(v_b_1038_, 0);
lean_dec(v_unused_1077_);
v___x_1044_ = v_b_1038_;
v_isShared_1045_ = v_isSharedCheck_1076_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_snd_1042_);
lean_dec(v_b_1038_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1076_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1046_; lean_object* v_a_1047_; lean_object* v___x_1048_; 
v___x_1046_ = lean_box(0);
v_a_1047_ = lean_array_uget_borrowed(v_as_1035_, v_i_1037_);
lean_inc(v_snd_1042_);
v___x_1048_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(v_init_1034_, v_a_1047_, v_snd_1042_);
if (lean_obj_tag(v___x_1048_) == 0)
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1067_; 
v_a_1049_ = lean_ctor_get(v___x_1048_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1048_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1051_ = v___x_1048_;
v_isShared_1052_ = v_isSharedCheck_1067_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_1048_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1067_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
if (lean_obj_tag(v_a_1049_) == 0)
{
lean_object* v___x_1053_; lean_object* v___x_1055_; 
v___x_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1053_, 0, v_a_1049_);
if (v_isShared_1045_ == 0)
{
lean_ctor_set(v___x_1044_, 0, v___x_1053_);
v___x_1055_ = v___x_1044_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v___x_1053_);
lean_ctor_set(v_reuseFailAlloc_1059_, 1, v_snd_1042_);
v___x_1055_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
lean_object* v___x_1057_; 
if (v_isShared_1052_ == 0)
{
lean_ctor_set(v___x_1051_, 0, v___x_1055_);
v___x_1057_ = v___x_1051_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1055_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
else
{
lean_object* v_a_1060_; lean_object* v___x_1062_; 
lean_del_object(v___x_1051_);
lean_dec(v_snd_1042_);
v_a_1060_ = lean_ctor_get(v_a_1049_, 0);
lean_inc(v_a_1060_);
lean_dec_ref_known(v_a_1049_, 1);
if (v_isShared_1045_ == 0)
{
lean_ctor_set(v___x_1044_, 1, v_a_1060_);
lean_ctor_set(v___x_1044_, 0, v___x_1046_);
v___x_1062_ = v___x_1044_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1046_);
lean_ctor_set(v_reuseFailAlloc_1066_, 1, v_a_1060_);
v___x_1062_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
size_t v___x_1063_; size_t v___x_1064_; 
v___x_1063_ = ((size_t)1ULL);
v___x_1064_ = lean_usize_add(v_i_1037_, v___x_1063_);
v_i_1037_ = v___x_1064_;
v_b_1038_ = v___x_1062_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
lean_del_object(v___x_1044_);
lean_dec(v_snd_1042_);
v_a_1068_ = lean_ctor_get(v___x_1048_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1048_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v___x_1048_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1048_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_a_1068_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12___boxed(lean_object* v_init_1078_, lean_object* v_as_1079_, lean_object* v_sz_1080_, lean_object* v_i_1081_, lean_object* v_b_1082_, lean_object* v___y_1083_){
_start:
{
size_t v_sz_boxed_1084_; size_t v_i_boxed_1085_; lean_object* v_res_1086_; 
v_sz_boxed_1084_ = lean_unbox_usize(v_sz_1080_);
lean_dec(v_sz_1080_);
v_i_boxed_1085_ = lean_unbox_usize(v_i_1081_);
lean_dec(v_i_1081_);
v_res_1086_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__12(v_init_1078_, v_as_1079_, v_sz_boxed_1084_, v_i_boxed_1085_, v_b_1082_);
lean_dec_ref(v_as_1079_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10___boxed(lean_object* v_init_1087_, lean_object* v_n_1088_, lean_object* v_b_1089_, lean_object* v___y_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(v_init_1087_, v_n_1088_, v_b_1089_);
lean_dec_ref(v_n_1088_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15(lean_object* v_as_1095_, size_t v_sz_1096_, size_t v_i_1097_, lean_object* v_b_1098_){
_start:
{
uint8_t v___x_1100_; 
v___x_1100_ = lean_usize_dec_lt(v_i_1097_, v_sz_1096_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; 
v___x_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1101_, 0, v_b_1098_);
return v___x_1101_;
}
else
{
uint8_t v___x_1102_; lean_object* v_a_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
lean_dec_ref(v_b_1098_);
v___x_1102_ = 0;
v_a_1103_ = lean_array_uget_borrowed(v_as_1095_, v_i_1097_);
lean_inc(v_a_1103_);
v___x_1104_ = l_Lean_Message_toString(v_a_1103_, v___x_1102_);
v___x_1105_ = l_IO_eprintln___at___00main_spec__6(v___x_1104_);
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_object* v___x_1106_; size_t v___x_1107_; size_t v___x_1108_; 
lean_dec_ref_known(v___x_1105_, 1);
v___x_1106_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0));
v___x_1107_ = ((size_t)1ULL);
v___x_1108_ = lean_usize_add(v_i_1097_, v___x_1107_);
v_i_1097_ = v___x_1108_;
v_b_1098_ = v___x_1106_;
goto _start;
}
else
{
lean_object* v_a_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1117_; 
v_a_1110_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1112_ = v___x_1105_;
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_a_1110_);
lean_dec(v___x_1105_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1115_; 
if (v_isShared_1113_ == 0)
{
v___x_1115_ = v___x_1112_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_a_1110_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___boxed(lean_object* v_as_1118_, lean_object* v_sz_1119_, lean_object* v_i_1120_, lean_object* v_b_1121_, lean_object* v___y_1122_){
_start:
{
size_t v_sz_boxed_1123_; size_t v_i_boxed_1124_; lean_object* v_res_1125_; 
v_sz_boxed_1123_ = lean_unbox_usize(v_sz_1119_);
lean_dec(v_sz_1119_);
v_i_boxed_1124_ = lean_unbox_usize(v_i_1120_);
lean_dec(v_i_1120_);
v_res_1125_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15(v_as_1118_, v_sz_boxed_1123_, v_i_boxed_1124_, v_b_1121_);
lean_dec_ref(v_as_1118_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(lean_object* v_as_1126_, size_t v_sz_1127_, size_t v_i_1128_, lean_object* v_b_1129_){
_start:
{
uint8_t v___x_1131_; 
v___x_1131_ = lean_usize_dec_lt(v_i_1128_, v_sz_1127_);
if (v___x_1131_ == 0)
{
lean_object* v___x_1132_; 
v___x_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1132_, 0, v_b_1129_);
return v___x_1132_;
}
else
{
uint8_t v___x_1133_; lean_object* v_a_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; 
lean_dec_ref(v_b_1129_);
v___x_1133_ = 0;
v_a_1134_ = lean_array_uget_borrowed(v_as_1126_, v_i_1128_);
lean_inc(v_a_1134_);
v___x_1135_ = l_Lean_Message_toString(v_a_1134_, v___x_1133_);
v___x_1136_ = l_IO_eprintln___at___00main_spec__6(v___x_1135_);
if (lean_obj_tag(v___x_1136_) == 0)
{
lean_object* v___x_1137_; size_t v___x_1138_; size_t v___x_1139_; lean_object* v___x_1140_; 
lean_dec_ref_known(v___x_1136_, 1);
v___x_1137_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0));
v___x_1138_ = ((size_t)1ULL);
v___x_1139_ = lean_usize_add(v_i_1128_, v___x_1138_);
v___x_1140_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15(v_as_1126_, v_sz_1127_, v___x_1139_, v___x_1137_);
return v___x_1140_;
}
else
{
lean_object* v_a_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1148_; 
v_a_1141_ = lean_ctor_get(v___x_1136_, 0);
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1143_ = v___x_1136_;
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_a_1141_);
lean_dec(v___x_1136_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1146_; 
if (v_isShared_1144_ == 0)
{
v___x_1146_ = v___x_1143_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_a_1141_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11___boxed(lean_object* v_as_1149_, lean_object* v_sz_1150_, lean_object* v_i_1151_, lean_object* v_b_1152_, lean_object* v___y_1153_){
_start:
{
size_t v_sz_boxed_1154_; size_t v_i_boxed_1155_; lean_object* v_res_1156_; 
v_sz_boxed_1154_ = lean_unbox_usize(v_sz_1150_);
lean_dec(v_sz_1150_);
v_i_boxed_1155_ = lean_unbox_usize(v_i_1151_);
lean_dec(v_i_1151_);
v_res_1156_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(v_as_1149_, v_sz_boxed_1154_, v_i_boxed_1155_, v_b_1152_);
lean_dec_ref(v_as_1149_);
return v_res_1156_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7(lean_object* v_t_1157_, lean_object* v_init_1158_){
_start:
{
lean_object* v_root_1160_; lean_object* v_tail_1161_; lean_object* v___x_1162_; 
v_root_1160_ = lean_ctor_get(v_t_1157_, 0);
v_tail_1161_ = lean_ctor_get(v_t_1157_, 1);
v___x_1162_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10(v_init_1158_, v_root_1160_, v_init_1158_);
if (lean_obj_tag(v___x_1162_) == 0)
{
lean_object* v_a_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1199_; 
v_a_1163_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1165_ = v___x_1162_;
v_isShared_1166_ = v_isSharedCheck_1199_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_a_1163_);
lean_dec(v___x_1162_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1199_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
if (lean_obj_tag(v_a_1163_) == 0)
{
lean_object* v_a_1167_; lean_object* v___x_1169_; 
v_a_1167_ = lean_ctor_get(v_a_1163_, 0);
lean_inc(v_a_1167_);
lean_dec_ref_known(v_a_1163_, 1);
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 0, v_a_1167_);
v___x_1169_ = v___x_1165_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v_a_1167_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; size_t v_sz_1174_; size_t v___x_1175_; lean_object* v___x_1176_; 
lean_del_object(v___x_1165_);
v_a_1171_ = lean_ctor_get(v_a_1163_, 0);
lean_inc(v_a_1171_);
lean_dec_ref_known(v_a_1163_, 1);
v___x_1172_ = lean_box(0);
v___x_1173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1172_);
lean_ctor_set(v___x_1173_, 1, v_a_1171_);
v_sz_1174_ = lean_array_size(v_tail_1161_);
v___x_1175_ = ((size_t)0ULL);
v___x_1176_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11(v_tail_1161_, v_sz_1174_, v___x_1175_, v___x_1173_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v_a_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1190_; 
v_a_1177_ = lean_ctor_get(v___x_1176_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1179_ = v___x_1176_;
v_isShared_1180_ = v_isSharedCheck_1190_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_a_1177_);
lean_dec(v___x_1176_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1190_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v_fst_1181_; 
v_fst_1181_ = lean_ctor_get(v_a_1177_, 0);
if (lean_obj_tag(v_fst_1181_) == 0)
{
lean_object* v_snd_1182_; lean_object* v___x_1184_; 
v_snd_1182_ = lean_ctor_get(v_a_1177_, 1);
lean_inc(v_snd_1182_);
lean_dec(v_a_1177_);
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 0, v_snd_1182_);
v___x_1184_ = v___x_1179_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_snd_1182_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
else
{
lean_object* v_val_1186_; lean_object* v___x_1188_; 
lean_inc_ref(v_fst_1181_);
lean_dec(v_a_1177_);
v_val_1186_ = lean_ctor_get(v_fst_1181_, 0);
lean_inc(v_val_1186_);
lean_dec_ref_known(v_fst_1181_, 1);
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 0, v_val_1186_);
v___x_1188_ = v___x_1179_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_val_1186_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
}
else
{
lean_object* v_a_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1198_; 
v_a_1191_ = lean_ctor_get(v___x_1176_, 0);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1193_ = v___x_1176_;
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_a_1191_);
lean_dec(v___x_1176_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1196_; 
if (v_isShared_1194_ == 0)
{
v___x_1196_ = v___x_1193_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_a_1191_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
return v___x_1196_;
}
}
}
}
}
}
else
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1207_; 
v_a_1200_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1202_ = v___x_1162_;
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1162_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1205_; 
if (v_isShared_1203_ == 0)
{
v___x_1205_ = v___x_1202_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_a_1200_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__7___boxed(lean_object* v_t_1208_, lean_object* v_init_1209_, lean_object* v___y_1210_){
_start:
{
lean_object* v_res_1211_; 
v_res_1211_ = l_Lean_PersistentArray_forIn___at___00main_spec__7(v_t_1208_, v_init_1209_);
lean_dec_ref(v_t_1208_);
return v_res_1211_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0(uint8_t v_suppressElabErrors_1219_, lean_object* v_x_1220_){
_start:
{
if (lean_obj_tag(v_x_1220_) == 1)
{
lean_object* v_pre_1221_; 
v_pre_1221_ = lean_ctor_get(v_x_1220_, 0);
switch(lean_obj_tag(v_pre_1221_))
{
case 1:
{
lean_object* v_pre_1222_; 
v_pre_1222_ = lean_ctor_get(v_pre_1221_, 0);
switch(lean_obj_tag(v_pre_1222_))
{
case 0:
{
lean_object* v_str_1223_; lean_object* v_str_1224_; lean_object* v___x_1225_; uint8_t v___x_1226_; 
v_str_1223_ = lean_ctor_get(v_x_1220_, 1);
v_str_1224_ = lean_ctor_get(v_pre_1221_, 1);
v___x_1225_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__0));
v___x_1226_ = lean_string_dec_eq(v_str_1224_, v___x_1225_);
if (v___x_1226_ == 0)
{
lean_object* v___x_1227_; uint8_t v___x_1228_; 
v___x_1227_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__1));
v___x_1228_ = lean_string_dec_eq(v_str_1224_, v___x_1227_);
if (v___x_1228_ == 0)
{
return v___x_1228_;
}
else
{
lean_object* v___x_1229_; uint8_t v___x_1230_; 
v___x_1229_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__2));
v___x_1230_ = lean_string_dec_eq(v_str_1223_, v___x_1229_);
if (v___x_1230_ == 0)
{
return v___x_1230_;
}
else
{
return v_suppressElabErrors_1219_;
}
}
}
else
{
lean_object* v___x_1231_; uint8_t v___x_1232_; 
v___x_1231_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__3));
v___x_1232_ = lean_string_dec_eq(v_str_1223_, v___x_1231_);
if (v___x_1232_ == 0)
{
return v___x_1232_;
}
else
{
return v_suppressElabErrors_1219_;
}
}
}
case 1:
{
lean_object* v_pre_1233_; 
v_pre_1233_ = lean_ctor_get(v_pre_1222_, 0);
if (lean_obj_tag(v_pre_1233_) == 0)
{
lean_object* v_str_1234_; lean_object* v_str_1235_; lean_object* v_str_1236_; lean_object* v___x_1237_; uint8_t v___x_1238_; 
v_str_1234_ = lean_ctor_get(v_x_1220_, 1);
v_str_1235_ = lean_ctor_get(v_pre_1221_, 1);
v_str_1236_ = lean_ctor_get(v_pre_1222_, 1);
v___x_1237_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__4));
v___x_1238_ = lean_string_dec_eq(v_str_1236_, v___x_1237_);
if (v___x_1238_ == 0)
{
return v___x_1238_;
}
else
{
lean_object* v___x_1239_; uint8_t v___x_1240_; 
v___x_1239_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__5));
v___x_1240_ = lean_string_dec_eq(v_str_1235_, v___x_1239_);
if (v___x_1240_ == 0)
{
return v___x_1240_;
}
else
{
lean_object* v___x_1241_; uint8_t v___x_1242_; 
v___x_1241_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__6));
v___x_1242_ = lean_string_dec_eq(v_str_1234_, v___x_1241_);
if (v___x_1242_ == 0)
{
return v___x_1242_;
}
else
{
return v_suppressElabErrors_1219_;
}
}
}
}
else
{
uint8_t v___x_1243_; 
v___x_1243_ = 0;
return v___x_1243_;
}
}
default: 
{
uint8_t v___x_1244_; 
v___x_1244_ = 0;
return v___x_1244_;
}
}
}
case 0:
{
lean_object* v_str_1245_; lean_object* v___x_1246_; uint8_t v___x_1247_; 
v_str_1245_ = lean_ctor_get(v_x_1220_, 1);
v___x_1246_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0));
v___x_1247_ = lean_string_dec_eq(v_str_1245_, v___x_1246_);
if (v___x_1247_ == 0)
{
return v___x_1247_;
}
else
{
return v_suppressElabErrors_1219_;
}
}
default: 
{
uint8_t v___x_1248_; 
v___x_1248_ = 0;
return v___x_1248_;
}
}
}
else
{
uint8_t v___x_1249_; 
v___x_1249_ = 0;
return v___x_1249_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___boxed(lean_object* v_suppressElabErrors_1250_, lean_object* v_x_1251_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1252_; uint8_t v_res_1253_; lean_object* v_r_1254_; 
v_suppressElabErrors_boxed_1252_ = lean_unbox(v_suppressElabErrors_1250_);
v_res_1253_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0(v_suppressElabErrors_boxed_1252_, v_x_1251_);
lean_dec(v_x_1251_);
v_r_1254_ = lean_box(v_res_1253_);
return v_r_1254_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15(lean_object* v_opts_1255_, lean_object* v_opt_1256_){
_start:
{
lean_object* v_name_1257_; lean_object* v_defValue_1258_; lean_object* v_map_1259_; lean_object* v___x_1260_; 
v_name_1257_ = lean_ctor_get(v_opt_1256_, 0);
v_defValue_1258_ = lean_ctor_get(v_opt_1256_, 1);
v_map_1259_ = lean_ctor_get(v_opts_1255_, 0);
v___x_1260_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1259_, v_name_1257_);
if (lean_obj_tag(v___x_1260_) == 0)
{
uint8_t v___x_1261_; 
v___x_1261_ = lean_unbox(v_defValue_1258_);
return v___x_1261_;
}
else
{
lean_object* v_val_1262_; 
v_val_1262_ = lean_ctor_get(v___x_1260_, 0);
lean_inc(v_val_1262_);
lean_dec_ref_known(v___x_1260_, 1);
if (lean_obj_tag(v_val_1262_) == 1)
{
uint8_t v_v_1263_; 
v_v_1263_ = lean_ctor_get_uint8(v_val_1262_, 0);
lean_dec_ref_known(v_val_1262_, 0);
return v_v_1263_;
}
else
{
uint8_t v___x_1264_; 
lean_dec(v_val_1262_);
v___x_1264_ = lean_unbox(v_defValue_1258_);
return v___x_1264_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15___boxed(lean_object* v_opts_1265_, lean_object* v_opt_1266_){
_start:
{
uint8_t v_res_1267_; lean_object* v_r_1268_; 
v_res_1267_ = l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15(v_opts_1265_, v_opt_1266_);
lean_dec_ref(v_opt_1266_);
lean_dec_ref(v_opts_1265_);
v_r_1268_ = lean_box(v_res_1267_);
return v_r_1268_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44(lean_object* v_ref_1270_, lean_object* v_msgData_1271_, uint8_t v_severity_1272_, uint8_t v_isSilent_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_){
_start:
{
lean_object* v___y_1278_; lean_object* v___y_1279_; lean_object* v___y_1280_; lean_object* v___y_1281_; lean_object* v___y_1282_; uint8_t v___y_1283_; uint8_t v___y_1284_; lean_object* v_toCold_1285_; lean_object* v___y_1286_; lean_object* v___y_1315_; lean_object* v___y_1316_; uint8_t v___y_1317_; lean_object* v___y_1318_; uint8_t v___y_1319_; uint8_t v___y_1320_; lean_object* v___y_1321_; lean_object* v___y_1322_; uint8_t v___y_1342_; lean_object* v___y_1343_; lean_object* v___y_1344_; uint8_t v___y_1345_; uint8_t v___y_1346_; lean_object* v___y_1347_; lean_object* v___y_1348_; uint8_t v___y_1352_; uint8_t v___y_1353_; uint8_t v___x_1363_; uint8_t v___y_1365_; uint8_t v___x_1371_; 
v___x_1363_ = 2;
v___x_1371_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1272_, v___x_1363_);
if (v___x_1371_ == 0)
{
v___y_1365_ = v___x_1371_;
goto v___jp_1364_;
}
else
{
uint8_t v___x_1372_; 
lean_inc_ref(v_msgData_1271_);
v___x_1372_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1271_);
if (v___x_1372_ == 0)
{
v___y_1365_ = v___x_1372_;
goto v___jp_1364_;
}
else
{
lean_object* v___x_1373_; lean_object* v___x_1374_; 
lean_dec_ref(v_msgData_1271_);
v___x_1373_ = lean_box(0);
v___x_1374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1373_);
return v___x_1374_;
}
}
v___jp_1277_:
{
lean_object* v_currNamespace_1287_; lean_object* v_openDecls_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v_env_1293_; lean_object* v_nextMacroScope_1294_; lean_object* v_ngen_1295_; lean_object* v_auxDeclNGen_1296_; lean_object* v_traceState_1297_; lean_object* v_cache_1298_; lean_object* v_recordedDeps_1299_; lean_object* v_messages_1300_; lean_object* v_infoState_1301_; lean_object* v_snapshotTasks_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1313_; 
v_currNamespace_1287_ = lean_ctor_get(v_toCold_1285_, 4);
v_openDecls_1288_ = lean_ctor_get(v_toCold_1285_, 5);
lean_inc(v_openDecls_1288_);
lean_inc(v_currNamespace_1287_);
v___x_1289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1289_, 0, v_currNamespace_1287_);
lean_ctor_set(v___x_1289_, 1, v_openDecls_1288_);
v___x_1290_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
lean_ctor_set(v___x_1290_, 1, v___y_1282_);
lean_inc_ref(v___y_1278_);
lean_inc_ref(v___y_1281_);
v___x_1291_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1291_, 0, v___y_1281_);
lean_ctor_set(v___x_1291_, 1, v___y_1280_);
lean_ctor_set(v___x_1291_, 2, v___y_1279_);
lean_ctor_set(v___x_1291_, 3, v___y_1278_);
lean_ctor_set(v___x_1291_, 4, v___x_1290_);
lean_ctor_set_uint8(v___x_1291_, sizeof(void*)*5, v___y_1284_);
lean_ctor_set_uint8(v___x_1291_, sizeof(void*)*5 + 1, v___y_1283_);
lean_ctor_set_uint8(v___x_1291_, sizeof(void*)*5 + 2, v_isSilent_1273_);
v___x_1292_ = lean_st_ref_take(v___y_1286_);
v_env_1293_ = lean_ctor_get(v___x_1292_, 0);
v_nextMacroScope_1294_ = lean_ctor_get(v___x_1292_, 1);
v_ngen_1295_ = lean_ctor_get(v___x_1292_, 2);
v_auxDeclNGen_1296_ = lean_ctor_get(v___x_1292_, 3);
v_traceState_1297_ = lean_ctor_get(v___x_1292_, 4);
v_cache_1298_ = lean_ctor_get(v___x_1292_, 5);
v_recordedDeps_1299_ = lean_ctor_get(v___x_1292_, 6);
v_messages_1300_ = lean_ctor_get(v___x_1292_, 7);
v_infoState_1301_ = lean_ctor_get(v___x_1292_, 8);
v_snapshotTasks_1302_ = lean_ctor_get(v___x_1292_, 9);
v_isSharedCheck_1313_ = !lean_is_exclusive(v___x_1292_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1304_ = v___x_1292_;
v_isShared_1305_ = v_isSharedCheck_1313_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_snapshotTasks_1302_);
lean_inc(v_infoState_1301_);
lean_inc(v_messages_1300_);
lean_inc(v_recordedDeps_1299_);
lean_inc(v_cache_1298_);
lean_inc(v_traceState_1297_);
lean_inc(v_auxDeclNGen_1296_);
lean_inc(v_ngen_1295_);
lean_inc(v_nextMacroScope_1294_);
lean_inc(v_env_1293_);
lean_dec(v___x_1292_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1313_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1309_; 
v___x_1306_ = lean_box(0);
v___x_1307_ = l_Lean_MessageLog_add(v___x_1291_, v_messages_1300_);
if (v_isShared_1305_ == 0)
{
lean_ctor_set(v___x_1304_, 7, v___x_1307_);
v___x_1309_ = v___x_1304_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v_env_1293_);
lean_ctor_set(v_reuseFailAlloc_1312_, 1, v_nextMacroScope_1294_);
lean_ctor_set(v_reuseFailAlloc_1312_, 2, v_ngen_1295_);
lean_ctor_set(v_reuseFailAlloc_1312_, 3, v_auxDeclNGen_1296_);
lean_ctor_set(v_reuseFailAlloc_1312_, 4, v_traceState_1297_);
lean_ctor_set(v_reuseFailAlloc_1312_, 5, v_cache_1298_);
lean_ctor_set(v_reuseFailAlloc_1312_, 6, v_recordedDeps_1299_);
lean_ctor_set(v_reuseFailAlloc_1312_, 7, v___x_1307_);
lean_ctor_set(v_reuseFailAlloc_1312_, 8, v_infoState_1301_);
lean_ctor_set(v_reuseFailAlloc_1312_, 9, v_snapshotTasks_1302_);
v___x_1309_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1310_ = lean_st_ref_put(v___y_1286_, v___x_1309_);
v___x_1311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1306_);
return v___x_1311_;
}
}
}
v___jp_1314_:
{
lean_object* v_fileName_1323_; lean_object* v_fileMap_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v_a_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1340_; 
v_fileName_1323_ = lean_ctor_get(v___y_1318_, 0);
v_fileMap_1324_ = lean_ctor_get(v___y_1318_, 1);
v___x_1325_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1271_);
v___x_1326_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Compiler_CSimpAttr_0__Lean_Compiler_CSimp_isConstantReplacement_x3f_spec__0_spec__0_spec__1_spec__6_spec__10_spec__14_spec__16(v___x_1325_, v___y_1274_, v___y_1275_);
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1340_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1329_ = v___x_1326_;
v_isShared_1330_ = v_isSharedCheck_1340_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_a_1327_);
lean_dec(v___x_1326_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1340_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
lean_inc_ref_n(v_fileMap_1324_, 2);
v___x_1331_ = l_Lean_FileMap_toPosition(v_fileMap_1324_, v___y_1321_);
lean_dec(v___y_1321_);
v___x_1332_ = l_Lean_FileMap_toPosition(v_fileMap_1324_, v___y_1322_);
lean_dec(v___y_1322_);
v___x_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1332_);
v___x_1334_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__0));
if (v___y_1317_ == 0)
{
lean_del_object(v___x_1329_);
lean_dec_ref(v___y_1316_);
v___y_1278_ = v___x_1334_;
v___y_1279_ = v___x_1333_;
v___y_1280_ = v___x_1331_;
v___y_1281_ = v_fileName_1323_;
v___y_1282_ = v_a_1327_;
v___y_1283_ = v___y_1319_;
v___y_1284_ = v___y_1320_;
v_toCold_1285_ = v___y_1315_;
v___y_1286_ = v___y_1275_;
goto v___jp_1277_;
}
else
{
uint8_t v___x_1335_; 
lean_inc(v_a_1327_);
v___x_1335_ = l_Lean_MessageData_hasTag(v___y_1316_, v_a_1327_);
if (v___x_1335_ == 0)
{
lean_object* v___x_1336_; lean_object* v___x_1338_; 
lean_dec_ref_known(v___x_1333_, 1);
lean_dec_ref(v___x_1331_);
lean_dec(v_a_1327_);
v___x_1336_ = lean_box(0);
if (v_isShared_1330_ == 0)
{
lean_ctor_set(v___x_1329_, 0, v___x_1336_);
v___x_1338_ = v___x_1329_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v___x_1336_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
else
{
lean_del_object(v___x_1329_);
v___y_1278_ = v___x_1334_;
v___y_1279_ = v___x_1333_;
v___y_1280_ = v___x_1331_;
v___y_1281_ = v_fileName_1323_;
v___y_1282_ = v_a_1327_;
v___y_1283_ = v___y_1319_;
v___y_1284_ = v___y_1320_;
v_toCold_1285_ = v___y_1315_;
v___y_1286_ = v___y_1275_;
goto v___jp_1277_;
}
}
}
}
v___jp_1341_:
{
lean_object* v___x_1349_; 
v___x_1349_ = l_Lean_Syntax_getTailPos_x3f(v___y_1347_, v___y_1346_);
lean_dec(v___y_1347_);
if (lean_obj_tag(v___x_1349_) == 0)
{
lean_inc(v___y_1348_);
v___y_1315_ = v___y_1343_;
v___y_1316_ = v___y_1344_;
v___y_1317_ = v___y_1342_;
v___y_1318_ = v___y_1343_;
v___y_1319_ = v___y_1345_;
v___y_1320_ = v___y_1346_;
v___y_1321_ = v___y_1348_;
v___y_1322_ = v___y_1348_;
goto v___jp_1314_;
}
else
{
lean_object* v_val_1350_; 
v_val_1350_ = lean_ctor_get(v___x_1349_, 0);
lean_inc(v_val_1350_);
lean_dec_ref_known(v___x_1349_, 1);
v___y_1315_ = v___y_1343_;
v___y_1316_ = v___y_1344_;
v___y_1317_ = v___y_1342_;
v___y_1318_ = v___y_1343_;
v___y_1319_ = v___y_1345_;
v___y_1320_ = v___y_1346_;
v___y_1321_ = v___y_1348_;
v___y_1322_ = v_val_1350_;
goto v___jp_1314_;
}
}
v___jp_1351_:
{
lean_object* v_toCold_1354_; lean_object* v_ref_1355_; uint8_t v_suppressElabErrors_1356_; lean_object* v___x_1357_; lean_object* v___f_1358_; lean_object* v_ref_1359_; lean_object* v___x_1360_; 
v_toCold_1354_ = lean_ctor_get(v___y_1274_, 0);
v_ref_1355_ = lean_ctor_get(v___y_1274_, 2);
v_suppressElabErrors_1356_ = lean_ctor_get_uint8(v___y_1274_, sizeof(void*)*3 + 2);
v___x_1357_ = lean_box(v_suppressElabErrors_1356_);
v___f_1358_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1358_, 0, v___x_1357_);
v_ref_1359_ = l_Lean_replaceRef(v_ref_1270_, v_ref_1355_);
v___x_1360_ = l_Lean_Syntax_getPos_x3f(v_ref_1359_, v___y_1352_);
if (lean_obj_tag(v___x_1360_) == 0)
{
lean_object* v___x_1361_; 
v___x_1361_ = lean_unsigned_to_nat(0u);
v___y_1342_ = v_suppressElabErrors_1356_;
v___y_1343_ = v_toCold_1354_;
v___y_1344_ = v___f_1358_;
v___y_1345_ = v___y_1353_;
v___y_1346_ = v___y_1352_;
v___y_1347_ = v_ref_1359_;
v___y_1348_ = v___x_1361_;
goto v___jp_1341_;
}
else
{
lean_object* v_val_1362_; 
v_val_1362_ = lean_ctor_get(v___x_1360_, 0);
lean_inc(v_val_1362_);
lean_dec_ref_known(v___x_1360_, 1);
v___y_1342_ = v_suppressElabErrors_1356_;
v___y_1343_ = v_toCold_1354_;
v___y_1344_ = v___f_1358_;
v___y_1345_ = v___y_1353_;
v___y_1346_ = v___y_1352_;
v___y_1347_ = v_ref_1359_;
v___y_1348_ = v_val_1362_;
goto v___jp_1341_;
}
}
v___jp_1364_:
{
uint8_t v___x_1366_; uint8_t v___x_1367_; 
v___x_1366_ = 1;
v___x_1367_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1272_, v___x_1366_);
if (v___x_1367_ == 0)
{
v___y_1352_ = v___y_1365_;
v___y_1353_ = v_severity_1272_;
goto v___jp_1351_;
}
else
{
lean_object* v___x_1368_; lean_object* v___x_1369_; uint8_t v___x_1370_; 
v___x_1368_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1274_);
v___x_1369_ = l_Lean_warningAsError;
v___x_1370_ = l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15(v___x_1368_, v___x_1369_);
lean_dec_ref(v___x_1368_);
if (v___x_1370_ == 0)
{
v___y_1352_ = v___y_1365_;
v___y_1353_ = v_severity_1272_;
goto v___jp_1351_;
}
else
{
v___y_1352_ = v___y_1365_;
v___y_1353_ = v___x_1363_;
goto v___jp_1351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___boxed(lean_object* v_ref_1375_, lean_object* v_msgData_1376_, lean_object* v_severity_1377_, lean_object* v_isSilent_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_){
_start:
{
uint8_t v_severity_boxed_1382_; uint8_t v_isSilent_boxed_1383_; lean_object* v_res_1384_; 
v_severity_boxed_1382_ = lean_unbox(v_severity_1377_);
v_isSilent_boxed_1383_ = lean_unbox(v_isSilent_1378_);
v_res_1384_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44(v_ref_1375_, v_msgData_1376_, v_severity_boxed_1382_, v_isSilent_boxed_1383_, v___y_1379_, v___y_1380_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
lean_dec(v_ref_1375_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30(lean_object* v_msgData_1385_, uint8_t v_severity_1386_, uint8_t v_isSilent_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_){
_start:
{
lean_object* v_ref_1391_; lean_object* v___x_1392_; 
v_ref_1391_ = lean_ctor_get(v___y_1388_, 2);
v___x_1392_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44(v_ref_1391_, v_msgData_1385_, v_severity_1386_, v_isSilent_1387_, v___y_1388_, v___y_1389_);
return v___x_1392_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30___boxed(lean_object* v_msgData_1393_, lean_object* v_severity_1394_, lean_object* v_isSilent_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_){
_start:
{
uint8_t v_severity_boxed_1399_; uint8_t v_isSilent_boxed_1400_; lean_object* v_res_1401_; 
v_severity_boxed_1399_ = lean_unbox(v_severity_1394_);
v_isSilent_boxed_1400_ = lean_unbox(v_isSilent_1395_);
v_res_1401_ = l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30(v_msgData_1393_, v_severity_boxed_1399_, v_isSilent_boxed_1400_, v___y_1396_, v___y_1397_);
lean_dec(v___y_1397_);
lean_dec_ref(v___y_1396_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__13(lean_object* v_msgData_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
uint8_t v___x_1406_; uint8_t v___x_1407_; lean_object* v___x_1408_; 
v___x_1406_ = 2;
v___x_1407_ = 0;
v___x_1408_ = l_Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30(v_msgData_1402_, v___x_1406_, v___x_1407_, v___y_1403_, v___y_1404_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00main_spec__13___boxed(lean_object* v_msgData_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_){
_start:
{
lean_object* v_res_1413_; 
v_res_1413_ = l_Lean_logError___at___00main_spec__13(v_msgData_1409_, v___y_1410_, v___y_1411_);
lean_dec(v___y_1411_);
lean_dec_ref(v___y_1410_);
return v_res_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14(lean_object* v_opts_1414_, lean_object* v_opt_1415_){
_start:
{
lean_object* v_name_1416_; lean_object* v_map_1417_; lean_object* v___x_1418_; 
v_name_1416_ = lean_ctor_get(v_opt_1415_, 0);
v_map_1417_ = lean_ctor_get(v_opts_1414_, 0);
v___x_1418_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1417_, v_name_1416_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v___x_1419_; 
v___x_1419_ = lean_box(0);
return v___x_1419_;
}
else
{
lean_object* v_val_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1429_; 
v_val_1420_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1422_ = v___x_1418_;
v_isShared_1423_ = v_isSharedCheck_1429_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_val_1420_);
lean_dec(v___x_1418_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1429_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
if (lean_obj_tag(v_val_1420_) == 0)
{
lean_object* v_v_1424_; lean_object* v___x_1426_; 
v_v_1424_ = lean_ctor_get(v_val_1420_, 0);
lean_inc_ref(v_v_1424_);
lean_dec_ref_known(v_val_1420_, 1);
if (v_isShared_1423_ == 0)
{
lean_ctor_set(v___x_1422_, 0, v_v_1424_);
v___x_1426_ = v___x_1422_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_v_1424_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
else
{
lean_object* v___x_1428_; 
lean_del_object(v___x_1422_);
lean_dec(v_val_1420_);
v___x_1428_ = lean_box(0);
return v___x_1428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14___boxed(lean_object* v_opts_1430_, lean_object* v_opt_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14(v_opts_1430_, v_opt_1431_);
lean_dec_ref(v_opt_1431_);
lean_dec_ref(v_opts_1430_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22(lean_object* v_x_1433_, lean_object* v_x_1434_){
_start:
{
if (lean_obj_tag(v_x_1434_) == 0)
{
return v_x_1433_;
}
else
{
lean_object* v_key_1435_; lean_object* v_value_1436_; lean_object* v_tail_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; 
v_key_1435_ = lean_ctor_get(v_x_1434_, 0);
v_value_1436_ = lean_ctor_get(v_x_1434_, 1);
v_tail_1437_ = lean_ctor_get(v_x_1434_, 2);
lean_inc(v_value_1436_);
lean_inc(v_key_1435_);
v___x_1438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1438_, 0, v_key_1435_);
lean_ctor_set(v___x_1438_, 1, v_value_1436_);
v___x_1439_ = lean_array_push(v_x_1433_, v___x_1438_);
v_x_1433_ = v___x_1439_;
v_x_1434_ = v_tail_1437_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22___boxed(lean_object* v_x_1441_, lean_object* v_x_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22(v_x_1441_, v_x_1442_);
lean_dec(v_x_1442_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23(lean_object* v_as_1444_, size_t v_i_1445_, size_t v_stop_1446_, lean_object* v_b_1447_){
_start:
{
uint8_t v___x_1448_; 
v___x_1448_ = lean_usize_dec_eq(v_i_1445_, v_stop_1446_);
if (v___x_1448_ == 0)
{
lean_object* v___x_1449_; lean_object* v___x_1450_; size_t v___x_1451_; size_t v___x_1452_; 
v___x_1449_ = lean_array_uget_borrowed(v_as_1444_, v_i_1445_);
v___x_1450_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__22(v_b_1447_, v___x_1449_);
v___x_1451_ = ((size_t)1ULL);
v___x_1452_ = lean_usize_add(v_i_1445_, v___x_1451_);
v_i_1445_ = v___x_1452_;
v_b_1447_ = v___x_1450_;
goto _start;
}
else
{
return v_b_1447_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23___boxed(lean_object* v_as_1454_, lean_object* v_i_1455_, lean_object* v_stop_1456_, lean_object* v_b_1457_){
_start:
{
size_t v_i_boxed_1458_; size_t v_stop_boxed_1459_; lean_object* v_res_1460_; 
v_i_boxed_1458_ = lean_unbox_usize(v_i_1455_);
lean_dec(v_i_1455_);
v_stop_boxed_1459_ = lean_unbox_usize(v_stop_1456_);
lean_dec(v_stop_1456_);
v_res_1460_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23(v_as_1454_, v_i_boxed_1458_, v_stop_boxed_1459_, v_b_1457_);
lean_dec_ref(v_as_1454_);
return v_res_1460_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(lean_object* v_x_1461_, lean_object* v_x_1462_){
_start:
{
lean_object* v_fst_1463_; lean_object* v_fst_1464_; lean_object* v_fst_1465_; lean_object* v_fst_1466_; uint8_t v___x_1467_; 
v_fst_1463_ = lean_ctor_get(v_x_1461_, 0);
v_fst_1464_ = lean_ctor_get(v_x_1462_, 0);
v_fst_1465_ = lean_ctor_get(v_fst_1463_, 0);
v_fst_1466_ = lean_ctor_get(v_fst_1464_, 0);
v___x_1467_ = l_String_instDecidableLtRaw(v_fst_1465_, v_fst_1466_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0___boxed(lean_object* v_x_1468_, lean_object* v_x_1469_){
_start:
{
uint8_t v_res_1470_; lean_object* v_r_1471_; 
v_res_1470_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(v_x_1468_, v_x_1469_);
lean_dec_ref(v_x_1469_);
lean_dec_ref(v_x_1468_);
v_r_1471_ = lean_box(v_res_1470_);
return v_r_1471_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg(lean_object* v_hi_1472_, lean_object* v_pivot_1473_, lean_object* v_as_1474_, lean_object* v_i_1475_, lean_object* v_k_1476_){
_start:
{
uint8_t v___x_1477_; 
v___x_1477_ = lean_nat_dec_lt(v_k_1476_, v_hi_1472_);
if (v___x_1477_ == 0)
{
lean_object* v___x_1478_; lean_object* v___x_1479_; 
lean_dec(v_k_1476_);
v___x_1478_ = lean_array_fswap(v_as_1474_, v_i_1475_, v_hi_1472_);
v___x_1479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1479_, 0, v_i_1475_);
lean_ctor_set(v___x_1479_, 1, v___x_1478_);
return v___x_1479_;
}
else
{
lean_object* v___x_1480_; lean_object* v_fst_1481_; lean_object* v_fst_1482_; lean_object* v_fst_1483_; lean_object* v_fst_1484_; uint8_t v___x_1485_; 
v___x_1480_ = lean_array_fget_borrowed(v_as_1474_, v_k_1476_);
v_fst_1481_ = lean_ctor_get(v___x_1480_, 0);
v_fst_1482_ = lean_ctor_get(v_pivot_1473_, 0);
v_fst_1483_ = lean_ctor_get(v_fst_1481_, 0);
v_fst_1484_ = lean_ctor_get(v_fst_1482_, 0);
v___x_1485_ = l_String_instDecidableLtRaw(v_fst_1483_, v_fst_1484_);
if (v___x_1485_ == 0)
{
lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1486_ = lean_unsigned_to_nat(1u);
v___x_1487_ = lean_nat_add(v_k_1476_, v___x_1486_);
lean_dec(v_k_1476_);
v_k_1476_ = v___x_1487_;
goto _start;
}
else
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; 
v___x_1489_ = lean_array_fswap(v_as_1474_, v_i_1475_, v_k_1476_);
v___x_1490_ = lean_unsigned_to_nat(1u);
v___x_1491_ = lean_nat_add(v_i_1475_, v___x_1490_);
lean_dec(v_i_1475_);
v___x_1492_ = lean_nat_add(v_k_1476_, v___x_1490_);
lean_dec(v_k_1476_);
v_as_1474_ = v___x_1489_;
v_i_1475_ = v___x_1491_;
v_k_1476_ = v___x_1492_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg___boxed(lean_object* v_hi_1494_, lean_object* v_pivot_1495_, lean_object* v_as_1496_, lean_object* v_i_1497_, lean_object* v_k_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg(v_hi_1494_, v_pivot_1495_, v_as_1496_, v_i_1497_, v_k_1498_);
lean_dec_ref(v_pivot_1495_);
lean_dec(v_hi_1494_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(lean_object* v_n_1500_, lean_object* v_as_1501_, lean_object* v_lo_1502_, lean_object* v_hi_1503_){
_start:
{
lean_object* v___y_1505_; uint8_t v___x_1515_; 
v___x_1515_ = lean_nat_dec_lt(v_lo_1502_, v_hi_1503_);
if (v___x_1515_ == 0)
{
lean_dec(v_lo_1502_);
return v_as_1501_;
}
else
{
lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v_mid_1518_; lean_object* v___y_1520_; lean_object* v___y_1526_; lean_object* v___x_1531_; lean_object* v___x_1532_; uint8_t v___x_1533_; 
v___x_1516_ = lean_nat_add(v_lo_1502_, v_hi_1503_);
v___x_1517_ = lean_unsigned_to_nat(1u);
v_mid_1518_ = lean_nat_shiftr(v___x_1516_, v___x_1517_);
lean_dec(v___x_1516_);
v___x_1531_ = lean_array_fget_borrowed(v_as_1501_, v_mid_1518_);
v___x_1532_ = lean_array_fget_borrowed(v_as_1501_, v_lo_1502_);
v___x_1533_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(v___x_1531_, v___x_1532_);
if (v___x_1533_ == 0)
{
v___y_1526_ = v_as_1501_;
goto v___jp_1525_;
}
else
{
lean_object* v___x_1534_; 
v___x_1534_ = lean_array_fswap(v_as_1501_, v_lo_1502_, v_mid_1518_);
v___y_1526_ = v___x_1534_;
goto v___jp_1525_;
}
v___jp_1519_:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; uint8_t v___x_1523_; 
v___x_1521_ = lean_array_fget_borrowed(v___y_1520_, v_mid_1518_);
v___x_1522_ = lean_array_fget_borrowed(v___y_1520_, v_hi_1503_);
v___x_1523_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(v___x_1521_, v___x_1522_);
if (v___x_1523_ == 0)
{
lean_dec(v_mid_1518_);
v___y_1505_ = v___y_1520_;
goto v___jp_1504_;
}
else
{
lean_object* v___x_1524_; 
v___x_1524_ = lean_array_fswap(v___y_1520_, v_mid_1518_, v_hi_1503_);
lean_dec(v_mid_1518_);
v___y_1505_ = v___x_1524_;
goto v___jp_1504_;
}
}
v___jp_1525_:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; uint8_t v___x_1529_; 
v___x_1527_ = lean_array_fget_borrowed(v___y_1526_, v_hi_1503_);
v___x_1528_ = lean_array_fget_borrowed(v___y_1526_, v_lo_1502_);
v___x_1529_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___lam__0(v___x_1527_, v___x_1528_);
if (v___x_1529_ == 0)
{
v___y_1520_ = v___y_1526_;
goto v___jp_1519_;
}
else
{
lean_object* v___x_1530_; 
v___x_1530_ = lean_array_fswap(v___y_1526_, v_lo_1502_, v_hi_1503_);
v___y_1520_ = v___x_1530_;
goto v___jp_1519_;
}
}
}
v___jp_1504_:
{
lean_object* v_pivot_1506_; lean_object* v___x_1507_; lean_object* v_fst_1508_; lean_object* v_snd_1509_; uint8_t v___x_1510_; 
v_pivot_1506_ = lean_array_fget(v___y_1505_, v_hi_1503_);
lean_inc_n(v_lo_1502_, 2);
v___x_1507_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg(v_hi_1503_, v_pivot_1506_, v___y_1505_, v_lo_1502_, v_lo_1502_);
lean_dec(v_pivot_1506_);
v_fst_1508_ = lean_ctor_get(v___x_1507_, 0);
lean_inc(v_fst_1508_);
v_snd_1509_ = lean_ctor_get(v___x_1507_, 1);
lean_inc(v_snd_1509_);
lean_dec_ref(v___x_1507_);
v___x_1510_ = lean_nat_dec_le(v_hi_1503_, v_fst_1508_);
if (v___x_1510_ == 0)
{
lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1511_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(v_n_1500_, v_snd_1509_, v_lo_1502_, v_fst_1508_);
v___x_1512_ = lean_unsigned_to_nat(1u);
v___x_1513_ = lean_nat_add(v_fst_1508_, v___x_1512_);
lean_dec(v_fst_1508_);
v_as_1501_ = v___x_1511_;
v_lo_1502_ = v___x_1513_;
goto _start;
}
else
{
lean_dec(v_fst_1508_);
lean_dec(v_lo_1502_);
return v_snd_1509_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg___boxed(lean_object* v_n_1535_, lean_object* v_as_1536_, lean_object* v_lo_1537_, lean_object* v_hi_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(v_n_1535_, v_as_1536_, v_lo_1537_, v_hi_1538_);
lean_dec(v_hi_1538_);
lean_dec(v_n_1535_);
return v_res_1539_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0(uint8_t v_suppressElabErrors_1540_, uint8_t v___x_1541_, lean_object* v___x_1542_, lean_object* v_x_1543_){
_start:
{
if (lean_obj_tag(v_x_1543_) == 1)
{
lean_object* v_pre_1544_; 
v_pre_1544_ = lean_ctor_get(v_x_1543_, 0);
switch(lean_obj_tag(v_pre_1544_))
{
case 1:
{
lean_object* v_pre_1545_; 
v_pre_1545_ = lean_ctor_get(v_pre_1544_, 0);
switch(lean_obj_tag(v_pre_1545_))
{
case 0:
{
lean_object* v_str_1546_; lean_object* v_str_1547_; lean_object* v___x_1548_; uint8_t v___x_1549_; 
v_str_1546_ = lean_ctor_get(v_x_1543_, 1);
v_str_1547_ = lean_ctor_get(v_pre_1544_, 1);
v___x_1548_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__0));
v___x_1549_ = lean_string_dec_eq(v_str_1547_, v___x_1548_);
if (v___x_1549_ == 0)
{
lean_object* v___x_1550_; uint8_t v___x_1551_; 
v___x_1550_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__1));
v___x_1551_ = lean_string_dec_eq(v_str_1547_, v___x_1550_);
if (v___x_1551_ == 0)
{
return v___x_1551_;
}
else
{
lean_object* v___x_1552_; uint8_t v___x_1553_; 
v___x_1552_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__2));
v___x_1553_ = lean_string_dec_eq(v_str_1546_, v___x_1552_);
if (v___x_1553_ == 0)
{
return v___x_1553_;
}
else
{
return v_suppressElabErrors_1540_;
}
}
}
else
{
lean_object* v___x_1554_; uint8_t v___x_1555_; 
v___x_1554_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__3));
v___x_1555_ = lean_string_dec_eq(v_str_1546_, v___x_1554_);
if (v___x_1555_ == 0)
{
return v___x_1555_;
}
else
{
return v_suppressElabErrors_1540_;
}
}
}
case 1:
{
lean_object* v_pre_1556_; 
v_pre_1556_ = lean_ctor_get(v_pre_1545_, 0);
if (lean_obj_tag(v_pre_1556_) == 0)
{
lean_object* v_str_1557_; lean_object* v_str_1558_; lean_object* v_str_1559_; lean_object* v___x_1560_; uint8_t v___x_1561_; 
v_str_1557_ = lean_ctor_get(v_x_1543_, 1);
v_str_1558_ = lean_ctor_get(v_pre_1544_, 1);
v_str_1559_ = lean_ctor_get(v_pre_1545_, 1);
v___x_1560_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__4));
v___x_1561_ = lean_string_dec_eq(v_str_1559_, v___x_1560_);
if (v___x_1561_ == 0)
{
return v___x_1561_;
}
else
{
lean_object* v___x_1562_; uint8_t v___x_1563_; 
v___x_1562_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__5));
v___x_1563_ = lean_string_dec_eq(v_str_1558_, v___x_1562_);
if (v___x_1563_ == 0)
{
return v___x_1563_;
}
else
{
lean_object* v___x_1564_; uint8_t v___x_1565_; 
v___x_1564_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___lam__0___closed__6));
v___x_1565_ = lean_string_dec_eq(v_str_1557_, v___x_1564_);
if (v___x_1565_ == 0)
{
return v___x_1565_;
}
else
{
return v_suppressElabErrors_1540_;
}
}
}
}
else
{
return v___x_1541_;
}
}
default: 
{
return v___x_1541_;
}
}
}
case 0:
{
lean_object* v_str_1566_; uint8_t v___x_1567_; 
v_str_1566_ = lean_ctor_get(v_x_1543_, 1);
v___x_1567_ = lean_string_dec_eq(v_str_1566_, v___x_1542_);
if (v___x_1567_ == 0)
{
return v___x_1567_;
}
else
{
return v_suppressElabErrors_1540_;
}
}
default: 
{
return v___x_1541_;
}
}
}
else
{
return v___x_1541_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0___boxed(lean_object* v_suppressElabErrors_1568_, lean_object* v___x_1569_, lean_object* v___x_1570_, lean_object* v_x_1571_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1572_; uint8_t v___x_37919__boxed_1573_; uint8_t v_res_1574_; lean_object* v_r_1575_; 
v_suppressElabErrors_boxed_1572_ = lean_unbox(v_suppressElabErrors_1568_);
v___x_37919__boxed_1573_ = lean_unbox(v___x_1569_);
v_res_1574_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0(v_suppressElabErrors_boxed_1572_, v___x_37919__boxed_1573_, v___x_1570_, v_x_1571_);
lean_dec(v_x_1571_);
lean_dec_ref(v___x_1570_);
v_r_1575_ = lean_box(v_res_1574_);
return v_r_1575_;
}
}
static double _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0(void){
_start:
{
lean_object* v___x_1576_; double v___x_1577_; 
v___x_1576_ = lean_unsigned_to_nat(0u);
v___x_1577_ = lean_float_of_nat(v___x_1576_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20(uint8_t v___x_1578_, lean_object* v_as_1579_, size_t v_sz_1580_, size_t v_i_1581_, lean_object* v_b_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v_a_1587_; uint8_t v___x_1591_; 
v___x_1591_ = lean_usize_dec_lt(v_i_1581_, v_sz_1580_);
if (v___x_1591_ == 0)
{
lean_object* v___x_1592_; 
v___x_1592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1592_, 0, v_b_1582_);
return v___x_1592_;
}
else
{
lean_object* v_a_1593_; lean_object* v_fst_1594_; lean_object* v_snd_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1674_; 
v_a_1593_ = lean_array_uget(v_as_1579_, v_i_1581_);
v_fst_1594_ = lean_ctor_get(v_a_1593_, 0);
v_snd_1595_ = lean_ctor_get(v_a_1593_, 1);
v_isSharedCheck_1674_ = !lean_is_exclusive(v_a_1593_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1597_ = v_a_1593_;
v_isShared_1598_ = v_isSharedCheck_1674_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_snd_1595_);
lean_inc(v_fst_1594_);
lean_dec(v_a_1593_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1674_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v_fst_1599_; lean_object* v_snd_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1673_; 
v_fst_1599_ = lean_ctor_get(v_fst_1594_, 0);
v_snd_1600_ = lean_ctor_get(v_fst_1594_, 1);
v_isSharedCheck_1673_ = !lean_is_exclusive(v_fst_1594_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1602_ = v_fst_1594_;
v_isShared_1603_ = v_isSharedCheck_1673_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_snd_1600_);
lean_inc(v_fst_1599_);
lean_dec(v_fst_1594_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1673_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; double v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v_toCold_1609_; uint8_t v_suppressElabErrors_1610_; lean_object* v_fileName_1611_; lean_object* v_fileMap_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1619_; 
v___x_1604_ = lean_box(0);
v___x_1605_ = lean_box(0);
v___x_1606_ = lean_float_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___closed__0);
v___x_1607_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00main_spec__13_spec__30_spec__44___closed__0));
v___x_1608_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1608_, 0, v___x_1604_);
lean_ctor_set(v___x_1608_, 1, v___x_1605_);
lean_ctor_set(v___x_1608_, 2, v___x_1607_);
lean_ctor_set_float(v___x_1608_, sizeof(void*)*3, v___x_1606_);
lean_ctor_set_float(v___x_1608_, sizeof(void*)*3 + 8, v___x_1606_);
lean_ctor_set_uint8(v___x_1608_, sizeof(void*)*3 + 16, v___x_1591_);
v_toCold_1609_ = lean_ctor_get(v___y_1583_, 0);
v_suppressElabErrors_1610_ = lean_ctor_get_uint8(v___y_1583_, sizeof(void*)*3 + 2);
v_fileName_1611_ = lean_ctor_get(v_toCold_1609_, 0);
v_fileMap_1612_ = lean_ctor_get(v_toCold_1609_, 1);
v___x_1613_ = lean_box(0);
v___x_1614_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__0));
v___x_1615_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00main_spec__3_spec__3___closed__1));
v___x_1616_ = l_Lean_MessageData_nil;
v___x_1617_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1608_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
lean_ctor_set(v___x_1617_, 2, v_snd_1595_);
if (v_isShared_1603_ == 0)
{
lean_ctor_set_tag(v___x_1602_, 8);
lean_ctor_set(v___x_1602_, 1, v___x_1617_);
lean_ctor_set(v___x_1602_, 0, v___x_1615_);
v___x_1619_ = v___x_1602_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v___x_1615_);
lean_ctor_set(v_reuseFailAlloc_1672_, 1, v___x_1617_);
v___x_1619_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
uint8_t v___x_1620_; lean_object* v___x_1621_; lean_object* v___y_1623_; lean_object* v___y_1624_; 
v___x_1620_ = 0;
lean_inc_ref(v_fileMap_1612_);
lean_inc_ref(v_fileName_1611_);
v___x_1621_ = l_Lean_Elab_mkMessageCore(v_fileName_1611_, v_fileMap_1612_, v___x_1619_, v___x_1620_, v_fst_1599_, v_snd_1600_);
lean_dec(v_snd_1600_);
lean_dec(v_fst_1599_);
if (v_suppressElabErrors_1610_ == 0)
{
v___y_1623_ = v___y_1583_;
v___y_1624_ = v___y_1584_;
goto v___jp_1622_;
}
else
{
lean_object* v_data_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___f_1670_; uint8_t v___x_1671_; 
v_data_1667_ = lean_ctor_get(v___x_1621_, 4);
v___x_1668_ = lean_box(v_suppressElabErrors_1610_);
v___x_1669_ = lean_box(v___x_1578_);
v___f_1670_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1670_, 0, v___x_1668_);
lean_closure_set(v___f_1670_, 1, v___x_1669_);
lean_closure_set(v___f_1670_, 2, v___x_1614_);
lean_inc(v_data_1667_);
v___x_1671_ = l_Lean_MessageData_hasTag(v___f_1670_, v_data_1667_);
if (v___x_1671_ == 0)
{
lean_dec_ref(v___x_1621_);
lean_del_object(v___x_1597_);
v_a_1587_ = v___x_1613_;
goto v___jp_1586_;
}
else
{
v___y_1623_ = v___y_1583_;
v___y_1624_ = v___y_1584_;
goto v___jp_1622_;
}
}
v___jp_1622_:
{
lean_object* v_toCold_1625_; lean_object* v_fileName_1626_; lean_object* v_pos_1627_; lean_object* v_endPos_1628_; uint8_t v_keepFullRange_1629_; uint8_t v_severity_1630_; uint8_t v_isSilent_1631_; lean_object* v_caption_1632_; lean_object* v_data_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1666_; 
v_toCold_1625_ = lean_ctor_get(v___y_1623_, 0);
v_fileName_1626_ = lean_ctor_get(v___x_1621_, 0);
v_pos_1627_ = lean_ctor_get(v___x_1621_, 1);
v_endPos_1628_ = lean_ctor_get(v___x_1621_, 2);
v_keepFullRange_1629_ = lean_ctor_get_uint8(v___x_1621_, sizeof(void*)*5);
v_severity_1630_ = lean_ctor_get_uint8(v___x_1621_, sizeof(void*)*5 + 1);
v_isSilent_1631_ = lean_ctor_get_uint8(v___x_1621_, sizeof(void*)*5 + 2);
v_caption_1632_ = lean_ctor_get(v___x_1621_, 3);
v_data_1633_ = lean_ctor_get(v___x_1621_, 4);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1621_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1635_ = v___x_1621_;
v_isShared_1636_ = v_isSharedCheck_1666_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_data_1633_);
lean_inc(v_caption_1632_);
lean_inc(v_endPos_1628_);
lean_inc(v_pos_1627_);
lean_inc(v_fileName_1626_);
lean_dec(v___x_1621_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1666_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v_currNamespace_1637_; lean_object* v_openDecls_1638_; lean_object* v___x_1640_; 
v_currNamespace_1637_ = lean_ctor_get(v_toCold_1625_, 4);
v_openDecls_1638_ = lean_ctor_get(v_toCold_1625_, 5);
lean_inc(v_openDecls_1638_);
lean_inc(v_currNamespace_1637_);
if (v_isShared_1598_ == 0)
{
lean_ctor_set(v___x_1597_, 1, v_openDecls_1638_);
lean_ctor_set(v___x_1597_, 0, v_currNamespace_1637_);
v___x_1640_ = v___x_1597_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_currNamespace_1637_);
lean_ctor_set(v_reuseFailAlloc_1665_, 1, v_openDecls_1638_);
v___x_1640_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
lean_object* v___x_1641_; lean_object* v___x_1643_; 
v___x_1641_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
lean_ctor_set(v___x_1641_, 1, v_data_1633_);
if (v_isShared_1636_ == 0)
{
lean_ctor_set(v___x_1635_, 4, v___x_1641_);
v___x_1643_ = v___x_1635_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_fileName_1626_);
lean_ctor_set(v_reuseFailAlloc_1664_, 1, v_pos_1627_);
lean_ctor_set(v_reuseFailAlloc_1664_, 2, v_endPos_1628_);
lean_ctor_set(v_reuseFailAlloc_1664_, 3, v_caption_1632_);
lean_ctor_set(v_reuseFailAlloc_1664_, 4, v___x_1641_);
lean_ctor_set_uint8(v_reuseFailAlloc_1664_, sizeof(void*)*5, v_keepFullRange_1629_);
lean_ctor_set_uint8(v_reuseFailAlloc_1664_, sizeof(void*)*5 + 1, v_severity_1630_);
lean_ctor_set_uint8(v_reuseFailAlloc_1664_, sizeof(void*)*5 + 2, v_isSilent_1631_);
v___x_1643_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
lean_object* v___x_1644_; lean_object* v_env_1645_; lean_object* v_nextMacroScope_1646_; lean_object* v_ngen_1647_; lean_object* v_auxDeclNGen_1648_; lean_object* v_traceState_1649_; lean_object* v_cache_1650_; lean_object* v_recordedDeps_1651_; lean_object* v_messages_1652_; lean_object* v_infoState_1653_; lean_object* v_snapshotTasks_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1663_; 
v___x_1644_ = lean_st_ref_take(v___y_1624_);
v_env_1645_ = lean_ctor_get(v___x_1644_, 0);
v_nextMacroScope_1646_ = lean_ctor_get(v___x_1644_, 1);
v_ngen_1647_ = lean_ctor_get(v___x_1644_, 2);
v_auxDeclNGen_1648_ = lean_ctor_get(v___x_1644_, 3);
v_traceState_1649_ = lean_ctor_get(v___x_1644_, 4);
v_cache_1650_ = lean_ctor_get(v___x_1644_, 5);
v_recordedDeps_1651_ = lean_ctor_get(v___x_1644_, 6);
v_messages_1652_ = lean_ctor_get(v___x_1644_, 7);
v_infoState_1653_ = lean_ctor_get(v___x_1644_, 8);
v_snapshotTasks_1654_ = lean_ctor_get(v___x_1644_, 9);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1644_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1656_ = v___x_1644_;
v_isShared_1657_ = v_isSharedCheck_1663_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_snapshotTasks_1654_);
lean_inc(v_infoState_1653_);
lean_inc(v_messages_1652_);
lean_inc(v_recordedDeps_1651_);
lean_inc(v_cache_1650_);
lean_inc(v_traceState_1649_);
lean_inc(v_auxDeclNGen_1648_);
lean_inc(v_ngen_1647_);
lean_inc(v_nextMacroScope_1646_);
lean_inc(v_env_1645_);
lean_dec(v___x_1644_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1663_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1658_; lean_object* v___x_1660_; 
v___x_1658_ = l_Lean_MessageLog_add(v___x_1643_, v_messages_1652_);
if (v_isShared_1657_ == 0)
{
lean_ctor_set(v___x_1656_, 7, v___x_1658_);
v___x_1660_ = v___x_1656_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_env_1645_);
lean_ctor_set(v_reuseFailAlloc_1662_, 1, v_nextMacroScope_1646_);
lean_ctor_set(v_reuseFailAlloc_1662_, 2, v_ngen_1647_);
lean_ctor_set(v_reuseFailAlloc_1662_, 3, v_auxDeclNGen_1648_);
lean_ctor_set(v_reuseFailAlloc_1662_, 4, v_traceState_1649_);
lean_ctor_set(v_reuseFailAlloc_1662_, 5, v_cache_1650_);
lean_ctor_set(v_reuseFailAlloc_1662_, 6, v_recordedDeps_1651_);
lean_ctor_set(v_reuseFailAlloc_1662_, 7, v___x_1658_);
lean_ctor_set(v_reuseFailAlloc_1662_, 8, v_infoState_1653_);
lean_ctor_set(v_reuseFailAlloc_1662_, 9, v_snapshotTasks_1654_);
v___x_1660_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
lean_object* v___x_1661_; 
v___x_1661_ = lean_st_ref_put(v___y_1624_, v___x_1660_);
v_a_1587_ = v___x_1613_;
goto v___jp_1586_;
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
v___jp_1586_:
{
size_t v___x_1588_; size_t v___x_1589_; 
v___x_1588_ = ((size_t)1ULL);
v___x_1589_ = lean_usize_add(v_i_1581_, v___x_1588_);
v_i_1581_ = v___x_1589_;
v_b_1582_ = v_a_1587_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20___boxed(lean_object* v___x_1675_, lean_object* v_as_1676_, lean_object* v_sz_1677_, lean_object* v_i_1678_, lean_object* v_b_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
uint8_t v___x_37984__boxed_1683_; size_t v_sz_boxed_1684_; size_t v_i_boxed_1685_; lean_object* v_res_1686_; 
v___x_37984__boxed_1683_ = lean_unbox(v___x_1675_);
v_sz_boxed_1684_ = lean_unbox_usize(v_sz_1677_);
lean_dec(v_sz_1677_);
v_i_boxed_1685_ = lean_unbox_usize(v_i_1678_);
lean_dec(v_i_1678_);
v_res_1686_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20(v___x_37984__boxed_1683_, v_as_1676_, v_sz_boxed_1684_, v_i_boxed_1685_, v_b_1679_, v___y_1680_, v___y_1681_);
lean_dec(v___y_1681_);
lean_dec_ref(v___y_1680_);
lean_dec_ref(v_as_1676_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg(lean_object* v_a_1687_, lean_object* v_fallback_1688_, lean_object* v_x_1689_){
_start:
{
if (lean_obj_tag(v_x_1689_) == 0)
{
lean_inc(v_fallback_1688_);
return v_fallback_1688_;
}
else
{
lean_object* v_key_1690_; lean_object* v_value_1691_; lean_object* v_tail_1692_; lean_object* v_fst_1693_; lean_object* v_snd_1694_; lean_object* v_fst_1695_; lean_object* v_snd_1696_; uint8_t v_decide_1697_; 
v_key_1690_ = lean_ctor_get(v_x_1689_, 0);
v_value_1691_ = lean_ctor_get(v_x_1689_, 1);
v_tail_1692_ = lean_ctor_get(v_x_1689_, 2);
v_fst_1693_ = lean_ctor_get(v_key_1690_, 0);
v_snd_1694_ = lean_ctor_get(v_key_1690_, 1);
v_fst_1695_ = lean_ctor_get(v_a_1687_, 0);
v_snd_1696_ = lean_ctor_get(v_a_1687_, 1);
v_decide_1697_ = lean_nat_dec_eq(v_fst_1693_, v_fst_1695_);
if (v_decide_1697_ == 0)
{
v_x_1689_ = v_tail_1692_;
goto _start;
}
else
{
uint8_t v_decide_1699_; 
v_decide_1699_ = lean_nat_dec_eq(v_snd_1694_, v_snd_1696_);
if (v_decide_1699_ == 0)
{
v_x_1689_ = v_tail_1692_;
goto _start;
}
else
{
lean_inc(v_value_1691_);
return v_value_1691_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg___boxed(lean_object* v_a_1701_, lean_object* v_fallback_1702_, lean_object* v_x_1703_){
_start:
{
lean_object* v_res_1704_; 
v_res_1704_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg(v_a_1701_, v_fallback_1702_, v_x_1703_);
lean_dec(v_x_1703_);
lean_dec(v_fallback_1702_);
lean_dec_ref(v_a_1701_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(lean_object* v_m_1705_, lean_object* v_a_1706_, lean_object* v_fallback_1707_){
_start:
{
lean_object* v_buckets_1708_; lean_object* v_fst_1709_; lean_object* v_snd_1710_; lean_object* v___x_1711_; uint64_t v___x_1712_; uint64_t v___x_1713_; uint64_t v___x_1714_; uint64_t v___x_1715_; uint64_t v___x_1716_; uint64_t v_fold_1717_; uint64_t v___x_1718_; uint64_t v___x_1719_; uint64_t v___x_1720_; size_t v___x_1721_; size_t v___x_1722_; size_t v___x_1723_; size_t v___x_1724_; size_t v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v_buckets_1708_ = lean_ctor_get(v_m_1705_, 1);
v_fst_1709_ = lean_ctor_get(v_a_1706_, 0);
v_snd_1710_ = lean_ctor_get(v_a_1706_, 1);
v___x_1711_ = lean_array_get_size(v_buckets_1708_);
v___x_1712_ = l_String_instHashableRaw_hash(v_fst_1709_);
v___x_1713_ = l_String_instHashableRaw_hash(v_snd_1710_);
v___x_1714_ = lean_uint64_mix_hash(v___x_1712_, v___x_1713_);
v___x_1715_ = 32ULL;
v___x_1716_ = lean_uint64_shift_right(v___x_1714_, v___x_1715_);
v_fold_1717_ = lean_uint64_xor(v___x_1714_, v___x_1716_);
v___x_1718_ = 16ULL;
v___x_1719_ = lean_uint64_shift_right(v_fold_1717_, v___x_1718_);
v___x_1720_ = lean_uint64_xor(v_fold_1717_, v___x_1719_);
v___x_1721_ = lean_uint64_to_usize(v___x_1720_);
v___x_1722_ = lean_usize_of_nat(v___x_1711_);
v___x_1723_ = ((size_t)1ULL);
v___x_1724_ = lean_usize_sub(v___x_1722_, v___x_1723_);
v___x_1725_ = lean_usize_land(v___x_1721_, v___x_1724_);
v___x_1726_ = lean_array_uget_borrowed(v_buckets_1708_, v___x_1725_);
v___x_1727_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg(v_a_1706_, v_fallback_1707_, v___x_1726_);
return v___x_1727_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg___boxed(lean_object* v_m_1728_, lean_object* v_a_1729_, lean_object* v_fallback_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_m_1728_, v_a_1729_, v_fallback_1730_);
lean_dec(v_fallback_1730_);
lean_dec_ref(v_a_1729_);
lean_dec_ref(v_m_1728_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44___redArg(lean_object* v_x_1732_, lean_object* v_x_1733_){
_start:
{
if (lean_obj_tag(v_x_1733_) == 0)
{
return v_x_1732_;
}
else
{
lean_object* v_key_1734_; lean_object* v_value_1735_; lean_object* v_tail_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1763_; 
v_key_1734_ = lean_ctor_get(v_x_1733_, 0);
v_value_1735_ = lean_ctor_get(v_x_1733_, 1);
v_tail_1736_ = lean_ctor_get(v_x_1733_, 2);
v_isSharedCheck_1763_ = !lean_is_exclusive(v_x_1733_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1738_ = v_x_1733_;
v_isShared_1739_ = v_isSharedCheck_1763_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_tail_1736_);
lean_inc(v_value_1735_);
lean_inc(v_key_1734_);
lean_dec(v_x_1733_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1763_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v_fst_1740_; lean_object* v_snd_1741_; lean_object* v___x_1742_; uint64_t v___x_1743_; uint64_t v___x_1744_; uint64_t v___x_1745_; uint64_t v___x_1746_; uint64_t v___x_1747_; uint64_t v_fold_1748_; uint64_t v___x_1749_; uint64_t v___x_1750_; uint64_t v___x_1751_; size_t v___x_1752_; size_t v___x_1753_; size_t v___x_1754_; size_t v___x_1755_; size_t v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1759_; 
v_fst_1740_ = lean_ctor_get(v_key_1734_, 0);
v_snd_1741_ = lean_ctor_get(v_key_1734_, 1);
v___x_1742_ = lean_array_get_size(v_x_1732_);
v___x_1743_ = l_String_instHashableRaw_hash(v_fst_1740_);
v___x_1744_ = l_String_instHashableRaw_hash(v_snd_1741_);
v___x_1745_ = lean_uint64_mix_hash(v___x_1743_, v___x_1744_);
v___x_1746_ = 32ULL;
v___x_1747_ = lean_uint64_shift_right(v___x_1745_, v___x_1746_);
v_fold_1748_ = lean_uint64_xor(v___x_1745_, v___x_1747_);
v___x_1749_ = 16ULL;
v___x_1750_ = lean_uint64_shift_right(v_fold_1748_, v___x_1749_);
v___x_1751_ = lean_uint64_xor(v_fold_1748_, v___x_1750_);
v___x_1752_ = lean_uint64_to_usize(v___x_1751_);
v___x_1753_ = lean_usize_of_nat(v___x_1742_);
v___x_1754_ = ((size_t)1ULL);
v___x_1755_ = lean_usize_sub(v___x_1753_, v___x_1754_);
v___x_1756_ = lean_usize_land(v___x_1752_, v___x_1755_);
v___x_1757_ = lean_array_uget_borrowed(v_x_1732_, v___x_1756_);
lean_inc(v___x_1757_);
if (v_isShared_1739_ == 0)
{
lean_ctor_set(v___x_1738_, 2, v___x_1757_);
v___x_1759_ = v___x_1738_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v_key_1734_);
lean_ctor_set(v_reuseFailAlloc_1762_, 1, v_value_1735_);
lean_ctor_set(v_reuseFailAlloc_1762_, 2, v___x_1757_);
v___x_1759_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
lean_object* v___x_1760_; 
v___x_1760_ = lean_array_uset(v_x_1732_, v___x_1756_, v___x_1759_);
v_x_1732_ = v___x_1760_;
v_x_1733_ = v_tail_1736_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35___redArg(lean_object* v_i_1764_, lean_object* v_source_1765_, lean_object* v_target_1766_){
_start:
{
lean_object* v___x_1767_; uint8_t v___x_1768_; 
v___x_1767_ = lean_array_get_size(v_source_1765_);
v___x_1768_ = lean_nat_dec_lt(v_i_1764_, v___x_1767_);
if (v___x_1768_ == 0)
{
lean_dec_ref(v_source_1765_);
lean_dec(v_i_1764_);
return v_target_1766_;
}
else
{
lean_object* v_es_1769_; lean_object* v___x_1770_; lean_object* v_source_1771_; lean_object* v_target_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
v_es_1769_ = lean_array_fget(v_source_1765_, v_i_1764_);
v___x_1770_ = lean_box(0);
v_source_1771_ = lean_array_fset(v_source_1765_, v_i_1764_, v___x_1770_);
v_target_1772_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44___redArg(v_target_1766_, v_es_1769_);
v___x_1773_ = lean_unsigned_to_nat(1u);
v___x_1774_ = lean_nat_add(v_i_1764_, v___x_1773_);
lean_dec(v_i_1764_);
v_i_1764_ = v___x_1774_;
v_source_1765_ = v_source_1771_;
v_target_1766_ = v_target_1772_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24___redArg(lean_object* v_data_1776_){
_start:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v_nbuckets_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
v___x_1777_ = lean_array_get_size(v_data_1776_);
v___x_1778_ = lean_unsigned_to_nat(2u);
v_nbuckets_1779_ = lean_nat_mul(v___x_1777_, v___x_1778_);
v___x_1780_ = lean_unsigned_to_nat(0u);
v___x_1781_ = lean_box(0);
v___x_1782_ = lean_mk_array(v_nbuckets_1779_, v___x_1781_);
v___x_1783_ = lean_array_propagate_mark(v_data_1776_, v___x_1782_);
v___x_1784_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35___redArg(v___x_1780_, v_data_1776_, v___x_1783_);
return v___x_1784_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25___redArg(lean_object* v_a_1785_, lean_object* v_b_1786_, lean_object* v_x_1787_){
_start:
{
if (lean_obj_tag(v_x_1787_) == 0)
{
lean_dec(v_b_1786_);
lean_dec_ref(v_a_1785_);
return v_x_1787_;
}
else
{
lean_object* v_key_1788_; lean_object* v_value_1789_; lean_object* v_tail_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1806_; 
v_key_1788_ = lean_ctor_get(v_x_1787_, 0);
v_value_1789_ = lean_ctor_get(v_x_1787_, 1);
v_tail_1790_ = lean_ctor_get(v_x_1787_, 2);
v_isSharedCheck_1806_ = !lean_is_exclusive(v_x_1787_);
if (v_isSharedCheck_1806_ == 0)
{
v___x_1792_ = v_x_1787_;
v_isShared_1793_ = v_isSharedCheck_1806_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_tail_1790_);
lean_inc(v_value_1789_);
lean_inc(v_key_1788_);
lean_dec(v_x_1787_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1806_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v_fst_1799_; lean_object* v_snd_1800_; lean_object* v_fst_1801_; lean_object* v_snd_1802_; uint8_t v_decide_1803_; 
v_fst_1799_ = lean_ctor_get(v_key_1788_, 0);
v_snd_1800_ = lean_ctor_get(v_key_1788_, 1);
v_fst_1801_ = lean_ctor_get(v_a_1785_, 0);
v_snd_1802_ = lean_ctor_get(v_a_1785_, 1);
v_decide_1803_ = lean_nat_dec_eq(v_fst_1799_, v_fst_1801_);
if (v_decide_1803_ == 0)
{
goto v___jp_1794_;
}
else
{
uint8_t v_decide_1804_; 
v_decide_1804_ = lean_nat_dec_eq(v_snd_1800_, v_snd_1802_);
if (v_decide_1804_ == 0)
{
goto v___jp_1794_;
}
else
{
lean_object* v___x_1805_; 
lean_del_object(v___x_1792_);
lean_dec(v_value_1789_);
lean_dec(v_key_1788_);
v___x_1805_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1805_, 0, v_a_1785_);
lean_ctor_set(v___x_1805_, 1, v_b_1786_);
lean_ctor_set(v___x_1805_, 2, v_tail_1790_);
return v___x_1805_;
}
}
v___jp_1794_:
{
lean_object* v___x_1795_; lean_object* v___x_1797_; 
v___x_1795_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25___redArg(v_a_1785_, v_b_1786_, v_tail_1790_);
if (v_isShared_1793_ == 0)
{
lean_ctor_set(v___x_1792_, 2, v___x_1795_);
v___x_1797_ = v___x_1792_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v_key_1788_);
lean_ctor_set(v_reuseFailAlloc_1798_, 1, v_value_1789_);
lean_ctor_set(v_reuseFailAlloc_1798_, 2, v___x_1795_);
v___x_1797_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
return v___x_1797_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg(lean_object* v_a_1807_, lean_object* v_x_1808_){
_start:
{
if (lean_obj_tag(v_x_1808_) == 0)
{
uint8_t v___x_1809_; 
v___x_1809_ = 0;
return v___x_1809_;
}
else
{
lean_object* v_key_1810_; lean_object* v_tail_1811_; lean_object* v_fst_1812_; lean_object* v_snd_1813_; lean_object* v_fst_1814_; lean_object* v_snd_1815_; uint8_t v_decide_1816_; 
v_key_1810_ = lean_ctor_get(v_x_1808_, 0);
v_tail_1811_ = lean_ctor_get(v_x_1808_, 2);
v_fst_1812_ = lean_ctor_get(v_key_1810_, 0);
v_snd_1813_ = lean_ctor_get(v_key_1810_, 1);
v_fst_1814_ = lean_ctor_get(v_a_1807_, 0);
v_snd_1815_ = lean_ctor_get(v_a_1807_, 1);
v_decide_1816_ = lean_nat_dec_eq(v_fst_1812_, v_fst_1814_);
if (v_decide_1816_ == 0)
{
v_x_1808_ = v_tail_1811_;
goto _start;
}
else
{
uint8_t v_decide_1818_; 
v_decide_1818_ = lean_nat_dec_eq(v_snd_1813_, v_snd_1815_);
if (v_decide_1818_ == 0)
{
v_x_1808_ = v_tail_1811_;
goto _start;
}
else
{
return v_decide_1818_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg___boxed(lean_object* v_a_1820_, lean_object* v_x_1821_){
_start:
{
uint8_t v_res_1822_; lean_object* v_r_1823_; 
v_res_1822_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg(v_a_1820_, v_x_1821_);
lean_dec(v_x_1821_);
lean_dec_ref(v_a_1820_);
v_r_1823_ = lean_box(v_res_1822_);
return v_r_1823_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(lean_object* v_m_1824_, lean_object* v_a_1825_, lean_object* v_b_1826_){
_start:
{
lean_object* v_size_1827_; lean_object* v_buckets_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1875_; 
v_size_1827_ = lean_ctor_get(v_m_1824_, 0);
v_buckets_1828_ = lean_ctor_get(v_m_1824_, 1);
v_isSharedCheck_1875_ = !lean_is_exclusive(v_m_1824_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1830_ = v_m_1824_;
v_isShared_1831_ = v_isSharedCheck_1875_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_buckets_1828_);
lean_inc(v_size_1827_);
lean_dec(v_m_1824_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1875_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v_fst_1832_; lean_object* v_snd_1833_; lean_object* v___x_1834_; uint64_t v___x_1835_; uint64_t v___x_1836_; uint64_t v___x_1837_; uint64_t v___x_1838_; uint64_t v___x_1839_; uint64_t v_fold_1840_; uint64_t v___x_1841_; uint64_t v___x_1842_; uint64_t v___x_1843_; size_t v___x_1844_; size_t v___x_1845_; size_t v___x_1846_; size_t v___x_1847_; size_t v___x_1848_; lean_object* v_bkt_1849_; uint8_t v___x_1850_; 
v_fst_1832_ = lean_ctor_get(v_a_1825_, 0);
v_snd_1833_ = lean_ctor_get(v_a_1825_, 1);
v___x_1834_ = lean_array_get_size(v_buckets_1828_);
v___x_1835_ = l_String_instHashableRaw_hash(v_fst_1832_);
v___x_1836_ = l_String_instHashableRaw_hash(v_snd_1833_);
v___x_1837_ = lean_uint64_mix_hash(v___x_1835_, v___x_1836_);
v___x_1838_ = 32ULL;
v___x_1839_ = lean_uint64_shift_right(v___x_1837_, v___x_1838_);
v_fold_1840_ = lean_uint64_xor(v___x_1837_, v___x_1839_);
v___x_1841_ = 16ULL;
v___x_1842_ = lean_uint64_shift_right(v_fold_1840_, v___x_1841_);
v___x_1843_ = lean_uint64_xor(v_fold_1840_, v___x_1842_);
v___x_1844_ = lean_uint64_to_usize(v___x_1843_);
v___x_1845_ = lean_usize_of_nat(v___x_1834_);
v___x_1846_ = ((size_t)1ULL);
v___x_1847_ = lean_usize_sub(v___x_1845_, v___x_1846_);
v___x_1848_ = lean_usize_land(v___x_1844_, v___x_1847_);
v_bkt_1849_ = lean_array_uget_borrowed(v_buckets_1828_, v___x_1848_);
v___x_1850_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg(v_a_1825_, v_bkt_1849_);
if (v___x_1850_ == 0)
{
lean_object* v___x_1851_; lean_object* v_size_x27_1852_; lean_object* v___x_1853_; lean_object* v_buckets_x27_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; uint8_t v___x_1860_; 
v___x_1851_ = lean_unsigned_to_nat(1u);
v_size_x27_1852_ = lean_nat_add(v_size_1827_, v___x_1851_);
lean_dec(v_size_1827_);
lean_inc(v_bkt_1849_);
v___x_1853_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1853_, 0, v_a_1825_);
lean_ctor_set(v___x_1853_, 1, v_b_1826_);
lean_ctor_set(v___x_1853_, 2, v_bkt_1849_);
v_buckets_x27_1854_ = lean_array_uset(v_buckets_1828_, v___x_1848_, v___x_1853_);
v___x_1855_ = lean_unsigned_to_nat(4u);
v___x_1856_ = lean_nat_mul(v_size_x27_1852_, v___x_1855_);
v___x_1857_ = lean_unsigned_to_nat(3u);
v___x_1858_ = lean_nat_div(v___x_1856_, v___x_1857_);
lean_dec(v___x_1856_);
v___x_1859_ = lean_array_get_size(v_buckets_x27_1854_);
v___x_1860_ = lean_nat_dec_le(v___x_1858_, v___x_1859_);
lean_dec(v___x_1858_);
if (v___x_1860_ == 0)
{
lean_object* v_val_1861_; lean_object* v___x_1863_; 
v_val_1861_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24___redArg(v_buckets_x27_1854_);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 1, v_val_1861_);
lean_ctor_set(v___x_1830_, 0, v_size_x27_1852_);
v___x_1863_ = v___x_1830_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_size_x27_1852_);
lean_ctor_set(v_reuseFailAlloc_1864_, 1, v_val_1861_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
else
{
lean_object* v___x_1866_; 
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 1, v_buckets_x27_1854_);
lean_ctor_set(v___x_1830_, 0, v_size_x27_1852_);
v___x_1866_ = v___x_1830_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v_size_x27_1852_);
lean_ctor_set(v_reuseFailAlloc_1867_, 1, v_buckets_x27_1854_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
return v___x_1866_;
}
}
}
else
{
lean_object* v___x_1868_; lean_object* v_buckets_x27_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1873_; 
lean_inc(v_bkt_1849_);
v___x_1868_ = lean_box(0);
v_buckets_x27_1869_ = lean_array_uset(v_buckets_1828_, v___x_1848_, v___x_1868_);
v___x_1870_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25___redArg(v_a_1825_, v_b_1826_, v_bkt_1849_);
v___x_1871_ = lean_array_uset(v_buckets_x27_1869_, v___x_1848_, v___x_1870_);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 1, v___x_1871_);
v___x_1873_ = v___x_1830_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_size_1827_);
lean_ctor_set(v_reuseFailAlloc_1874_, 1, v___x_1871_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg(uint8_t v___x_1878_, lean_object* v_as_1879_, size_t v_sz_1880_, size_t v_i_1881_, lean_object* v_b_1882_, lean_object* v___y_1883_){
_start:
{
uint8_t v___x_1885_; 
v___x_1885_ = lean_usize_dec_lt(v_i_1881_, v_sz_1880_);
if (v___x_1885_ == 0)
{
lean_object* v___x_1886_; 
v___x_1886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1886_, 0, v_b_1882_);
return v___x_1886_;
}
else
{
lean_object* v_snd_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1924_; 
v_snd_1887_ = lean_ctor_get(v_b_1882_, 1);
v_isSharedCheck_1924_ = !lean_is_exclusive(v_b_1882_);
if (v_isSharedCheck_1924_ == 0)
{
lean_object* v_unused_1925_; 
v_unused_1925_ = lean_ctor_get(v_b_1882_, 0);
lean_dec(v_unused_1925_);
v___x_1889_ = v_b_1882_;
v_isShared_1890_ = v_isSharedCheck_1924_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_snd_1887_);
lean_dec(v_b_1882_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1924_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v_ref_1891_; lean_object* v_a_1892_; lean_object* v_ref_1893_; lean_object* v_msg_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1923_; 
v_ref_1891_ = lean_ctor_get(v___y_1883_, 2);
v_a_1892_ = lean_array_uget(v_as_1879_, v_i_1881_);
v_ref_1893_ = lean_ctor_get(v_a_1892_, 0);
v_msg_1894_ = lean_ctor_get(v_a_1892_, 1);
v_isSharedCheck_1923_ = !lean_is_exclusive(v_a_1892_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1896_ = v_a_1892_;
v_isShared_1897_ = v_isSharedCheck_1923_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_msg_1894_);
lean_inc(v_ref_1893_);
lean_dec(v_a_1892_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1923_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1898_; lean_object* v___y_1900_; lean_object* v___y_1901_; lean_object* v_ref_1915_; lean_object* v___y_1917_; lean_object* v___x_1920_; 
v___x_1898_ = lean_box(0);
v_ref_1915_ = l_Lean_replaceRef(v_ref_1893_, v_ref_1891_);
lean_dec(v_ref_1893_);
v___x_1920_ = l_Lean_Syntax_getPos_x3f(v_ref_1915_, v___x_1878_);
if (lean_obj_tag(v___x_1920_) == 0)
{
lean_object* v___x_1921_; 
v___x_1921_ = lean_unsigned_to_nat(0u);
v___y_1917_ = v___x_1921_;
goto v___jp_1916_;
}
else
{
lean_object* v_val_1922_; 
v_val_1922_ = lean_ctor_get(v___x_1920_, 0);
lean_inc(v_val_1922_);
lean_dec_ref_known(v___x_1920_, 1);
v___y_1917_ = v_val_1922_;
goto v___jp_1916_;
}
v___jp_1899_:
{
lean_object* v___x_1903_; 
if (v_isShared_1890_ == 0)
{
lean_ctor_set(v___x_1889_, 1, v___y_1901_);
lean_ctor_set(v___x_1889_, 0, v___y_1900_);
v___x_1903_ = v___x_1889_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v___y_1900_);
lean_ctor_set(v_reuseFailAlloc_1914_, 1, v___y_1901_);
v___x_1903_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v_pos2traces_1907_; lean_object* v___x_1909_; 
v___x_1904_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_1905_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_snd_1887_, v___x_1903_, v___x_1904_);
v___x_1906_ = lean_array_push(v___x_1905_, v_msg_1894_);
v_pos2traces_1907_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(v_snd_1887_, v___x_1903_, v___x_1906_);
if (v_isShared_1897_ == 0)
{
lean_ctor_set(v___x_1896_, 1, v_pos2traces_1907_);
lean_ctor_set(v___x_1896_, 0, v___x_1898_);
v___x_1909_ = v___x_1896_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v___x_1898_);
lean_ctor_set(v_reuseFailAlloc_1913_, 1, v_pos2traces_1907_);
v___x_1909_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
size_t v___x_1910_; size_t v___x_1911_; 
v___x_1910_ = ((size_t)1ULL);
v___x_1911_ = lean_usize_add(v_i_1881_, v___x_1910_);
v_i_1881_ = v___x_1911_;
v_b_1882_ = v___x_1909_;
goto _start;
}
}
}
v___jp_1916_:
{
lean_object* v___x_1918_; 
v___x_1918_ = l_Lean_Syntax_getTailPos_x3f(v_ref_1915_, v___x_1878_);
lean_dec(v_ref_1915_);
if (lean_obj_tag(v___x_1918_) == 0)
{
lean_inc(v___y_1917_);
v___y_1900_ = v___y_1917_;
v___y_1901_ = v___y_1917_;
goto v___jp_1899_;
}
else
{
lean_object* v_val_1919_; 
v_val_1919_ = lean_ctor_get(v___x_1918_, 0);
lean_inc(v_val_1919_);
lean_dec_ref_known(v___x_1918_, 1);
v___y_1900_ = v___y_1917_;
v___y_1901_ = v_val_1919_;
goto v___jp_1899_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___boxed(lean_object* v___x_1926_, lean_object* v_as_1927_, lean_object* v_sz_1928_, lean_object* v_i_1929_, lean_object* v_b_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_){
_start:
{
uint8_t v___x_38430__boxed_1933_; size_t v_sz_boxed_1934_; size_t v_i_boxed_1935_; lean_object* v_res_1936_; 
v___x_38430__boxed_1933_ = lean_unbox(v___x_1926_);
v_sz_boxed_1934_ = lean_unbox_usize(v_sz_1928_);
lean_dec(v_sz_1928_);
v_i_boxed_1935_ = lean_unbox_usize(v_i_1929_);
lean_dec(v_i_1929_);
v_res_1936_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg(v___x_38430__boxed_1933_, v_as_1927_, v_sz_boxed_1934_, v_i_boxed_1935_, v_b_1930_, v___y_1931_);
lean_dec_ref(v___y_1931_);
lean_dec_ref(v_as_1927_);
return v_res_1936_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40(uint8_t v___x_1937_, lean_object* v_as_1938_, size_t v_sz_1939_, size_t v_i_1940_, lean_object* v_b_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_){
_start:
{
uint8_t v___x_1945_; 
v___x_1945_ = lean_usize_dec_lt(v_i_1940_, v_sz_1939_);
if (v___x_1945_ == 0)
{
lean_object* v___x_1946_; 
v___x_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1946_, 0, v_b_1941_);
return v___x_1946_;
}
else
{
lean_object* v_snd_1947_; lean_object* v___x_1949_; uint8_t v_isShared_1950_; uint8_t v_isSharedCheck_1984_; 
v_snd_1947_ = lean_ctor_get(v_b_1941_, 1);
v_isSharedCheck_1984_ = !lean_is_exclusive(v_b_1941_);
if (v_isSharedCheck_1984_ == 0)
{
lean_object* v_unused_1985_; 
v_unused_1985_ = lean_ctor_get(v_b_1941_, 0);
lean_dec(v_unused_1985_);
v___x_1949_ = v_b_1941_;
v_isShared_1950_ = v_isSharedCheck_1984_;
goto v_resetjp_1948_;
}
else
{
lean_inc(v_snd_1947_);
lean_dec(v_b_1941_);
v___x_1949_ = lean_box(0);
v_isShared_1950_ = v_isSharedCheck_1984_;
goto v_resetjp_1948_;
}
v_resetjp_1948_:
{
lean_object* v_ref_1951_; lean_object* v_a_1952_; lean_object* v_ref_1953_; lean_object* v_msg_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1983_; 
v_ref_1951_ = lean_ctor_get(v___y_1942_, 2);
v_a_1952_ = lean_array_uget(v_as_1938_, v_i_1940_);
v_ref_1953_ = lean_ctor_get(v_a_1952_, 0);
v_msg_1954_ = lean_ctor_get(v_a_1952_, 1);
v_isSharedCheck_1983_ = !lean_is_exclusive(v_a_1952_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1956_ = v_a_1952_;
v_isShared_1957_ = v_isSharedCheck_1983_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_msg_1954_);
lean_inc(v_ref_1953_);
lean_dec(v_a_1952_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1983_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1958_; lean_object* v___y_1960_; lean_object* v___y_1961_; lean_object* v_ref_1975_; lean_object* v___y_1977_; lean_object* v___x_1980_; 
v___x_1958_ = lean_box(0);
v_ref_1975_ = l_Lean_replaceRef(v_ref_1953_, v_ref_1951_);
lean_dec(v_ref_1953_);
v___x_1980_ = l_Lean_Syntax_getPos_x3f(v_ref_1975_, v___x_1937_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v___x_1981_; 
v___x_1981_ = lean_unsigned_to_nat(0u);
v___y_1977_ = v___x_1981_;
goto v___jp_1976_;
}
else
{
lean_object* v_val_1982_; 
v_val_1982_ = lean_ctor_get(v___x_1980_, 0);
lean_inc(v_val_1982_);
lean_dec_ref_known(v___x_1980_, 1);
v___y_1977_ = v_val_1982_;
goto v___jp_1976_;
}
v___jp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1950_ == 0)
{
lean_ctor_set(v___x_1949_, 1, v___y_1961_);
lean_ctor_set(v___x_1949_, 0, v___y_1960_);
v___x_1963_ = v___x_1949_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1974_; 
v_reuseFailAlloc_1974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1974_, 0, v___y_1960_);
lean_ctor_set(v_reuseFailAlloc_1974_, 1, v___y_1961_);
v___x_1963_ = v_reuseFailAlloc_1974_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v_pos2traces_1967_; lean_object* v___x_1969_; 
v___x_1964_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_1965_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_snd_1947_, v___x_1963_, v___x_1964_);
v___x_1966_ = lean_array_push(v___x_1965_, v_msg_1954_);
v_pos2traces_1967_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(v_snd_1947_, v___x_1963_, v___x_1966_);
if (v_isShared_1957_ == 0)
{
lean_ctor_set(v___x_1956_, 1, v_pos2traces_1967_);
lean_ctor_set(v___x_1956_, 0, v___x_1958_);
v___x_1969_ = v___x_1956_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v___x_1958_);
lean_ctor_set(v_reuseFailAlloc_1973_, 1, v_pos2traces_1967_);
v___x_1969_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
size_t v___x_1970_; size_t v___x_1971_; lean_object* v___x_1972_; 
v___x_1970_ = ((size_t)1ULL);
v___x_1971_ = lean_usize_add(v_i_1940_, v___x_1970_);
v___x_1972_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg(v___x_1937_, v_as_1938_, v_sz_1939_, v___x_1971_, v___x_1969_, v___y_1942_);
return v___x_1972_;
}
}
}
v___jp_1976_:
{
lean_object* v___x_1978_; 
v___x_1978_ = l_Lean_Syntax_getTailPos_x3f(v_ref_1975_, v___x_1937_);
lean_dec(v_ref_1975_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_inc(v___y_1977_);
v___y_1960_ = v___y_1977_;
v___y_1961_ = v___y_1977_;
goto v___jp_1959_;
}
else
{
lean_object* v_val_1979_; 
v_val_1979_ = lean_ctor_get(v___x_1978_, 0);
lean_inc(v_val_1979_);
lean_dec_ref_known(v___x_1978_, 1);
v___y_1960_ = v___y_1977_;
v___y_1961_ = v_val_1979_;
goto v___jp_1959_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40___boxed(lean_object* v___x_1986_, lean_object* v_as_1987_, lean_object* v_sz_1988_, lean_object* v_i_1989_, lean_object* v_b_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_){
_start:
{
uint8_t v___x_38511__boxed_1994_; size_t v_sz_boxed_1995_; size_t v_i_boxed_1996_; lean_object* v_res_1997_; 
v___x_38511__boxed_1994_ = lean_unbox(v___x_1986_);
v_sz_boxed_1995_ = lean_unbox_usize(v_sz_1988_);
lean_dec(v_sz_1988_);
v_i_boxed_1996_ = lean_unbox_usize(v_i_1989_);
lean_dec(v_i_1989_);
v_res_1997_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40(v___x_38511__boxed_1994_, v_as_1987_, v_sz_boxed_1995_, v_i_boxed_1996_, v_b_1990_, v___y_1991_, v___y_1992_);
lean_dec(v___y_1992_);
lean_dec_ref(v___y_1991_);
lean_dec_ref(v_as_1987_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27(lean_object* v_init_1998_, uint8_t v___x_1999_, lean_object* v_n_2000_, lean_object* v_b_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_){
_start:
{
if (lean_obj_tag(v_n_2000_) == 0)
{
lean_object* v_cs_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; size_t v_sz_2008_; size_t v___x_2009_; lean_object* v___x_2010_; 
v_cs_2005_ = lean_ctor_get(v_n_2000_, 0);
v___x_2006_ = lean_box(0);
v___x_2007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2007_, 0, v___x_2006_);
lean_ctor_set(v___x_2007_, 1, v_b_2001_);
v_sz_2008_ = lean_array_size(v_cs_2005_);
v___x_2009_ = ((size_t)0ULL);
v___x_2010_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39(v_init_1998_, v___x_1999_, v_cs_2005_, v_sz_2008_, v___x_2009_, v___x_2007_, v___y_2002_, v___y_2003_);
if (lean_obj_tag(v___x_2010_) == 0)
{
lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2025_; 
v_a_2011_ = lean_ctor_get(v___x_2010_, 0);
v_isSharedCheck_2025_ = !lean_is_exclusive(v___x_2010_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_2013_ = v___x_2010_;
v_isShared_2014_ = v_isSharedCheck_2025_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_dec(v___x_2010_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2025_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v_fst_2015_; 
v_fst_2015_ = lean_ctor_get(v_a_2011_, 0);
if (lean_obj_tag(v_fst_2015_) == 0)
{
lean_object* v_snd_2016_; lean_object* v___x_2017_; lean_object* v___x_2019_; 
v_snd_2016_ = lean_ctor_get(v_a_2011_, 1);
lean_inc(v_snd_2016_);
lean_dec(v_a_2011_);
v___x_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2017_, 0, v_snd_2016_);
if (v_isShared_2014_ == 0)
{
lean_ctor_set(v___x_2013_, 0, v___x_2017_);
v___x_2019_ = v___x_2013_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v___x_2017_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
else
{
lean_object* v_val_2021_; lean_object* v___x_2023_; 
lean_inc_ref(v_fst_2015_);
lean_dec(v_a_2011_);
v_val_2021_ = lean_ctor_get(v_fst_2015_, 0);
lean_inc(v_val_2021_);
lean_dec_ref_known(v_fst_2015_, 1);
if (v_isShared_2014_ == 0)
{
lean_ctor_set(v___x_2013_, 0, v_val_2021_);
v___x_2023_ = v___x_2013_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v_val_2021_);
v___x_2023_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
return v___x_2023_;
}
}
}
}
else
{
lean_object* v_a_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2033_; 
v_a_2026_ = lean_ctor_get(v___x_2010_, 0);
v_isSharedCheck_2033_ = !lean_is_exclusive(v___x_2010_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_2028_ = v___x_2010_;
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_a_2026_);
lean_dec(v___x_2010_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v___x_2031_; 
if (v_isShared_2029_ == 0)
{
v___x_2031_ = v___x_2028_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v_a_2026_);
v___x_2031_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
return v___x_2031_;
}
}
}
}
else
{
lean_object* v_vs_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; size_t v_sz_2037_; size_t v___x_2038_; lean_object* v___x_2039_; 
v_vs_2034_ = lean_ctor_get(v_n_2000_, 0);
v___x_2035_ = lean_box(0);
v___x_2036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2036_, 0, v___x_2035_);
lean_ctor_set(v___x_2036_, 1, v_b_2001_);
v_sz_2037_ = lean_array_size(v_vs_2034_);
v___x_2038_ = ((size_t)0ULL);
v___x_2039_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40(v___x_1999_, v_vs_2034_, v_sz_2037_, v___x_2038_, v___x_2036_, v___y_2002_, v___y_2003_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v_a_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2054_; 
v_a_2040_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2054_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2042_ = v___x_2039_;
v_isShared_2043_ = v_isSharedCheck_2054_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_a_2040_);
lean_dec(v___x_2039_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2054_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v_fst_2044_; 
v_fst_2044_ = lean_ctor_get(v_a_2040_, 0);
if (lean_obj_tag(v_fst_2044_) == 0)
{
lean_object* v_snd_2045_; lean_object* v___x_2046_; lean_object* v___x_2048_; 
v_snd_2045_ = lean_ctor_get(v_a_2040_, 1);
lean_inc(v_snd_2045_);
lean_dec(v_a_2040_);
v___x_2046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2046_, 0, v_snd_2045_);
if (v_isShared_2043_ == 0)
{
lean_ctor_set(v___x_2042_, 0, v___x_2046_);
v___x_2048_ = v___x_2042_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v___x_2046_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
else
{
lean_object* v_val_2050_; lean_object* v___x_2052_; 
lean_inc_ref(v_fst_2044_);
lean_dec(v_a_2040_);
v_val_2050_ = lean_ctor_get(v_fst_2044_, 0);
lean_inc(v_val_2050_);
lean_dec_ref_known(v_fst_2044_, 1);
if (v_isShared_2043_ == 0)
{
lean_ctor_set(v___x_2042_, 0, v_val_2050_);
v___x_2052_ = v___x_2042_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_val_2050_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
}
else
{
lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2062_; 
v_a_2055_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2057_ = v___x_2039_;
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_dec(v___x_2039_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2060_; 
if (v_isShared_2058_ == 0)
{
v___x_2060_ = v___x_2057_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_a_2055_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39(lean_object* v_init_2063_, uint8_t v___x_2064_, lean_object* v_as_2065_, size_t v_sz_2066_, size_t v_i_2067_, lean_object* v_b_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_){
_start:
{
uint8_t v___x_2072_; 
v___x_2072_ = lean_usize_dec_lt(v_i_2067_, v_sz_2066_);
if (v___x_2072_ == 0)
{
lean_object* v___x_2073_; 
v___x_2073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2073_, 0, v_b_2068_);
return v___x_2073_;
}
else
{
lean_object* v_snd_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2108_; 
v_snd_2074_ = lean_ctor_get(v_b_2068_, 1);
v_isSharedCheck_2108_ = !lean_is_exclusive(v_b_2068_);
if (v_isSharedCheck_2108_ == 0)
{
lean_object* v_unused_2109_; 
v_unused_2109_ = lean_ctor_get(v_b_2068_, 0);
lean_dec(v_unused_2109_);
v___x_2076_ = v_b_2068_;
v_isShared_2077_ = v_isSharedCheck_2108_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_snd_2074_);
lean_dec(v_b_2068_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2108_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2078_; lean_object* v_a_2079_; lean_object* v___x_2080_; 
v___x_2078_ = lean_box(0);
v_a_2079_ = lean_array_uget_borrowed(v_as_2065_, v_i_2067_);
lean_inc(v_snd_2074_);
v___x_2080_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27(v_init_2063_, v___x_2064_, v_a_2079_, v_snd_2074_, v___y_2069_, v___y_2070_);
if (lean_obj_tag(v___x_2080_) == 0)
{
lean_object* v_a_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2099_; 
v_a_2081_ = lean_ctor_get(v___x_2080_, 0);
v_isSharedCheck_2099_ = !lean_is_exclusive(v___x_2080_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2083_ = v___x_2080_;
v_isShared_2084_ = v_isSharedCheck_2099_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_a_2081_);
lean_dec(v___x_2080_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2099_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
if (lean_obj_tag(v_a_2081_) == 0)
{
lean_object* v___x_2085_; lean_object* v___x_2087_; 
v___x_2085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2085_, 0, v_a_2081_);
if (v_isShared_2077_ == 0)
{
lean_ctor_set(v___x_2076_, 0, v___x_2085_);
v___x_2087_ = v___x_2076_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v___x_2085_);
lean_ctor_set(v_reuseFailAlloc_2091_, 1, v_snd_2074_);
v___x_2087_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
lean_object* v___x_2089_; 
if (v_isShared_2084_ == 0)
{
lean_ctor_set(v___x_2083_, 0, v___x_2087_);
v___x_2089_ = v___x_2083_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2090_; 
v_reuseFailAlloc_2090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2090_, 0, v___x_2087_);
v___x_2089_ = v_reuseFailAlloc_2090_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
return v___x_2089_;
}
}
}
else
{
lean_object* v_a_2092_; lean_object* v___x_2094_; 
lean_del_object(v___x_2083_);
lean_dec(v_snd_2074_);
v_a_2092_ = lean_ctor_get(v_a_2081_, 0);
lean_inc(v_a_2092_);
lean_dec_ref_known(v_a_2081_, 1);
if (v_isShared_2077_ == 0)
{
lean_ctor_set(v___x_2076_, 1, v_a_2092_);
lean_ctor_set(v___x_2076_, 0, v___x_2078_);
v___x_2094_ = v___x_2076_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v___x_2078_);
lean_ctor_set(v_reuseFailAlloc_2098_, 1, v_a_2092_);
v___x_2094_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
size_t v___x_2095_; size_t v___x_2096_; 
v___x_2095_ = ((size_t)1ULL);
v___x_2096_ = lean_usize_add(v_i_2067_, v___x_2095_);
v_i_2067_ = v___x_2096_;
v_b_2068_ = v___x_2094_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2107_; 
lean_del_object(v___x_2076_);
lean_dec(v_snd_2074_);
v_a_2100_ = lean_ctor_get(v___x_2080_, 0);
v_isSharedCheck_2107_ = !lean_is_exclusive(v___x_2080_);
if (v_isSharedCheck_2107_ == 0)
{
v___x_2102_ = v___x_2080_;
v_isShared_2103_ = v_isSharedCheck_2107_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_a_2100_);
lean_dec(v___x_2080_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2107_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
lean_object* v___x_2105_; 
if (v_isShared_2103_ == 0)
{
v___x_2105_ = v___x_2102_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v_a_2100_);
v___x_2105_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
return v___x_2105_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39___boxed(lean_object* v_init_2110_, lean_object* v___x_2111_, lean_object* v_as_2112_, lean_object* v_sz_2113_, lean_object* v_i_2114_, lean_object* v_b_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_){
_start:
{
uint8_t v___x_38592__boxed_2119_; size_t v_sz_boxed_2120_; size_t v_i_boxed_2121_; lean_object* v_res_2122_; 
v___x_38592__boxed_2119_ = lean_unbox(v___x_2111_);
v_sz_boxed_2120_ = lean_unbox_usize(v_sz_2113_);
lean_dec(v_sz_2113_);
v_i_boxed_2121_ = lean_unbox_usize(v_i_2114_);
lean_dec(v_i_2114_);
v_res_2122_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__39(v_init_2110_, v___x_38592__boxed_2119_, v_as_2112_, v_sz_boxed_2120_, v_i_boxed_2121_, v_b_2115_, v___y_2116_, v___y_2117_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec_ref(v_as_2112_);
lean_dec_ref(v_init_2110_);
return v_res_2122_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27___boxed(lean_object* v_init_2123_, lean_object* v___x_2124_, lean_object* v_n_2125_, lean_object* v_b_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_){
_start:
{
uint8_t v___x_38612__boxed_2130_; lean_object* v_res_2131_; 
v___x_38612__boxed_2130_ = lean_unbox(v___x_2124_);
v_res_2131_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27(v_init_2123_, v___x_38612__boxed_2130_, v_n_2125_, v_b_2126_, v___y_2127_, v___y_2128_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec_ref(v_n_2125_);
lean_dec_ref(v_init_2123_);
return v_res_2131_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg(uint8_t v___x_2132_, lean_object* v_as_2133_, size_t v_sz_2134_, size_t v_i_2135_, lean_object* v_b_2136_, lean_object* v___y_2137_){
_start:
{
uint8_t v___x_2139_; 
v___x_2139_ = lean_usize_dec_lt(v_i_2135_, v_sz_2134_);
if (v___x_2139_ == 0)
{
lean_object* v___x_2140_; 
v___x_2140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2140_, 0, v_b_2136_);
return v___x_2140_;
}
else
{
lean_object* v_snd_2141_; lean_object* v___x_2143_; uint8_t v_isShared_2144_; uint8_t v_isSharedCheck_2178_; 
v_snd_2141_ = lean_ctor_get(v_b_2136_, 1);
v_isSharedCheck_2178_ = !lean_is_exclusive(v_b_2136_);
if (v_isSharedCheck_2178_ == 0)
{
lean_object* v_unused_2179_; 
v_unused_2179_ = lean_ctor_get(v_b_2136_, 0);
lean_dec(v_unused_2179_);
v___x_2143_ = v_b_2136_;
v_isShared_2144_ = v_isSharedCheck_2178_;
goto v_resetjp_2142_;
}
else
{
lean_inc(v_snd_2141_);
lean_dec(v_b_2136_);
v___x_2143_ = lean_box(0);
v_isShared_2144_ = v_isSharedCheck_2178_;
goto v_resetjp_2142_;
}
v_resetjp_2142_:
{
lean_object* v_ref_2145_; lean_object* v_a_2146_; lean_object* v_ref_2147_; lean_object* v_msg_2148_; lean_object* v___x_2150_; uint8_t v_isShared_2151_; uint8_t v_isSharedCheck_2177_; 
v_ref_2145_ = lean_ctor_get(v___y_2137_, 2);
v_a_2146_ = lean_array_uget(v_as_2133_, v_i_2135_);
v_ref_2147_ = lean_ctor_get(v_a_2146_, 0);
v_msg_2148_ = lean_ctor_get(v_a_2146_, 1);
v_isSharedCheck_2177_ = !lean_is_exclusive(v_a_2146_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2150_ = v_a_2146_;
v_isShared_2151_ = v_isSharedCheck_2177_;
goto v_resetjp_2149_;
}
else
{
lean_inc(v_msg_2148_);
lean_inc(v_ref_2147_);
lean_dec(v_a_2146_);
v___x_2150_ = lean_box(0);
v_isShared_2151_ = v_isSharedCheck_2177_;
goto v_resetjp_2149_;
}
v_resetjp_2149_:
{
lean_object* v___x_2152_; lean_object* v___y_2154_; lean_object* v___y_2155_; lean_object* v_ref_2169_; lean_object* v___y_2171_; lean_object* v___x_2174_; 
v___x_2152_ = lean_box(0);
v_ref_2169_ = l_Lean_replaceRef(v_ref_2147_, v_ref_2145_);
lean_dec(v_ref_2147_);
v___x_2174_ = l_Lean_Syntax_getPos_x3f(v_ref_2169_, v___x_2132_);
if (lean_obj_tag(v___x_2174_) == 0)
{
lean_object* v___x_2175_; 
v___x_2175_ = lean_unsigned_to_nat(0u);
v___y_2171_ = v___x_2175_;
goto v___jp_2170_;
}
else
{
lean_object* v_val_2176_; 
v_val_2176_ = lean_ctor_get(v___x_2174_, 0);
lean_inc(v_val_2176_);
lean_dec_ref_known(v___x_2174_, 1);
v___y_2171_ = v_val_2176_;
goto v___jp_2170_;
}
v___jp_2153_:
{
lean_object* v___x_2157_; 
if (v_isShared_2144_ == 0)
{
lean_ctor_set(v___x_2143_, 1, v___y_2155_);
lean_ctor_set(v___x_2143_, 0, v___y_2154_);
v___x_2157_ = v___x_2143_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v___y_2154_);
lean_ctor_set(v_reuseFailAlloc_2168_, 1, v___y_2155_);
v___x_2157_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v_pos2traces_2161_; lean_object* v___x_2163_; 
v___x_2158_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_2159_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_snd_2141_, v___x_2157_, v___x_2158_);
v___x_2160_ = lean_array_push(v___x_2159_, v_msg_2148_);
v_pos2traces_2161_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(v_snd_2141_, v___x_2157_, v___x_2160_);
if (v_isShared_2151_ == 0)
{
lean_ctor_set(v___x_2150_, 1, v_pos2traces_2161_);
lean_ctor_set(v___x_2150_, 0, v___x_2152_);
v___x_2163_ = v___x_2150_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v___x_2152_);
lean_ctor_set(v_reuseFailAlloc_2167_, 1, v_pos2traces_2161_);
v___x_2163_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
size_t v___x_2164_; size_t v___x_2165_; 
v___x_2164_ = ((size_t)1ULL);
v___x_2165_ = lean_usize_add(v_i_2135_, v___x_2164_);
v_i_2135_ = v___x_2165_;
v_b_2136_ = v___x_2163_;
goto _start;
}
}
}
v___jp_2170_:
{
lean_object* v___x_2172_; 
v___x_2172_ = l_Lean_Syntax_getTailPos_x3f(v_ref_2169_, v___x_2132_);
lean_dec(v_ref_2169_);
if (lean_obj_tag(v___x_2172_) == 0)
{
lean_inc(v___y_2171_);
v___y_2154_ = v___y_2171_;
v___y_2155_ = v___y_2171_;
goto v___jp_2153_;
}
else
{
lean_object* v_val_2173_; 
v_val_2173_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_val_2173_);
lean_dec_ref_known(v___x_2172_, 1);
v___y_2154_ = v___y_2171_;
v___y_2155_ = v_val_2173_;
goto v___jp_2153_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg___boxed(lean_object* v___x_2180_, lean_object* v_as_2181_, lean_object* v_sz_2182_, lean_object* v_i_2183_, lean_object* v_b_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_){
_start:
{
uint8_t v___x_38795__boxed_2187_; size_t v_sz_boxed_2188_; size_t v_i_boxed_2189_; lean_object* v_res_2190_; 
v___x_38795__boxed_2187_ = lean_unbox(v___x_2180_);
v_sz_boxed_2188_ = lean_unbox_usize(v_sz_2182_);
lean_dec(v_sz_2182_);
v_i_boxed_2189_ = lean_unbox_usize(v_i_2183_);
lean_dec(v_i_2183_);
v_res_2190_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg(v___x_38795__boxed_2187_, v_as_2181_, v_sz_boxed_2188_, v_i_boxed_2189_, v_b_2184_, v___y_2185_);
lean_dec_ref(v___y_2185_);
lean_dec_ref(v_as_2181_);
return v_res_2190_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28(uint8_t v___x_2191_, lean_object* v_as_2192_, size_t v_sz_2193_, size_t v_i_2194_, lean_object* v_b_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_){
_start:
{
uint8_t v___x_2199_; 
v___x_2199_ = lean_usize_dec_lt(v_i_2194_, v_sz_2193_);
if (v___x_2199_ == 0)
{
lean_object* v___x_2200_; 
v___x_2200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2200_, 0, v_b_2195_);
return v___x_2200_;
}
else
{
lean_object* v_snd_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2238_; 
v_snd_2201_ = lean_ctor_get(v_b_2195_, 1);
v_isSharedCheck_2238_ = !lean_is_exclusive(v_b_2195_);
if (v_isSharedCheck_2238_ == 0)
{
lean_object* v_unused_2239_; 
v_unused_2239_ = lean_ctor_get(v_b_2195_, 0);
lean_dec(v_unused_2239_);
v___x_2203_ = v_b_2195_;
v_isShared_2204_ = v_isSharedCheck_2238_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_snd_2201_);
lean_dec(v_b_2195_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2238_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v_ref_2205_; lean_object* v_a_2206_; lean_object* v_ref_2207_; lean_object* v_msg_2208_; lean_object* v___x_2210_; uint8_t v_isShared_2211_; uint8_t v_isSharedCheck_2237_; 
v_ref_2205_ = lean_ctor_get(v___y_2196_, 2);
v_a_2206_ = lean_array_uget(v_as_2192_, v_i_2194_);
v_ref_2207_ = lean_ctor_get(v_a_2206_, 0);
v_msg_2208_ = lean_ctor_get(v_a_2206_, 1);
v_isSharedCheck_2237_ = !lean_is_exclusive(v_a_2206_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2210_ = v_a_2206_;
v_isShared_2211_ = v_isSharedCheck_2237_;
goto v_resetjp_2209_;
}
else
{
lean_inc(v_msg_2208_);
lean_inc(v_ref_2207_);
lean_dec(v_a_2206_);
v___x_2210_ = lean_box(0);
v_isShared_2211_ = v_isSharedCheck_2237_;
goto v_resetjp_2209_;
}
v_resetjp_2209_:
{
lean_object* v___x_2212_; lean_object* v___y_2214_; lean_object* v___y_2215_; lean_object* v_ref_2229_; lean_object* v___y_2231_; lean_object* v___x_2234_; 
v___x_2212_ = lean_box(0);
v_ref_2229_ = l_Lean_replaceRef(v_ref_2207_, v_ref_2205_);
lean_dec(v_ref_2207_);
v___x_2234_ = l_Lean_Syntax_getPos_x3f(v_ref_2229_, v___x_2191_);
if (lean_obj_tag(v___x_2234_) == 0)
{
lean_object* v___x_2235_; 
v___x_2235_ = lean_unsigned_to_nat(0u);
v___y_2231_ = v___x_2235_;
goto v___jp_2230_;
}
else
{
lean_object* v_val_2236_; 
v_val_2236_ = lean_ctor_get(v___x_2234_, 0);
lean_inc(v_val_2236_);
lean_dec_ref_known(v___x_2234_, 1);
v___y_2231_ = v_val_2236_;
goto v___jp_2230_;
}
v___jp_2213_:
{
lean_object* v___x_2217_; 
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 1, v___y_2215_);
lean_ctor_set(v___x_2203_, 0, v___y_2214_);
v___x_2217_ = v___x_2203_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v___y_2214_);
lean_ctor_set(v_reuseFailAlloc_2228_, 1, v___y_2215_);
v___x_2217_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v_pos2traces_2221_; lean_object* v___x_2223_; 
v___x_2218_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg___closed__0));
v___x_2219_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_snd_2201_, v___x_2217_, v___x_2218_);
v___x_2220_ = lean_array_push(v___x_2219_, v_msg_2208_);
v_pos2traces_2221_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(v_snd_2201_, v___x_2217_, v___x_2220_);
if (v_isShared_2211_ == 0)
{
lean_ctor_set(v___x_2210_, 1, v_pos2traces_2221_);
lean_ctor_set(v___x_2210_, 0, v___x_2212_);
v___x_2223_ = v___x_2210_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2212_);
lean_ctor_set(v_reuseFailAlloc_2227_, 1, v_pos2traces_2221_);
v___x_2223_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
size_t v___x_2224_; size_t v___x_2225_; lean_object* v___x_2226_; 
v___x_2224_ = ((size_t)1ULL);
v___x_2225_ = lean_usize_add(v_i_2194_, v___x_2224_);
v___x_2226_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg(v___x_2191_, v_as_2192_, v_sz_2193_, v___x_2225_, v___x_2223_, v___y_2196_);
return v___x_2226_;
}
}
}
v___jp_2230_:
{
lean_object* v___x_2232_; 
v___x_2232_ = l_Lean_Syntax_getTailPos_x3f(v_ref_2229_, v___x_2191_);
lean_dec(v_ref_2229_);
if (lean_obj_tag(v___x_2232_) == 0)
{
lean_inc(v___y_2231_);
v___y_2214_ = v___y_2231_;
v___y_2215_ = v___y_2231_;
goto v___jp_2213_;
}
else
{
lean_object* v_val_2233_; 
v_val_2233_ = lean_ctor_get(v___x_2232_, 0);
lean_inc(v_val_2233_);
lean_dec_ref_known(v___x_2232_, 1);
v___y_2214_ = v___y_2231_;
v___y_2215_ = v_val_2233_;
goto v___jp_2213_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28___boxed(lean_object* v___x_2240_, lean_object* v_as_2241_, lean_object* v_sz_2242_, lean_object* v_i_2243_, lean_object* v_b_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_){
_start:
{
uint8_t v___x_38875__boxed_2248_; size_t v_sz_boxed_2249_; size_t v_i_boxed_2250_; lean_object* v_res_2251_; 
v___x_38875__boxed_2248_ = lean_unbox(v___x_2240_);
v_sz_boxed_2249_ = lean_unbox_usize(v_sz_2242_);
lean_dec(v_sz_2242_);
v_i_boxed_2250_ = lean_unbox_usize(v_i_2243_);
lean_dec(v_i_2243_);
v_res_2251_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28(v___x_38875__boxed_2248_, v_as_2241_, v_sz_boxed_2249_, v_i_boxed_2250_, v_b_2244_, v___y_2245_, v___y_2246_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
lean_dec_ref(v_as_2241_);
return v_res_2251_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19(uint8_t v___x_2252_, lean_object* v_t_2253_, lean_object* v_init_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_){
_start:
{
lean_object* v_root_2258_; lean_object* v_tail_2259_; lean_object* v___x_2260_; 
v_root_2258_ = lean_ctor_get(v_t_2253_, 0);
v_tail_2259_ = lean_ctor_get(v_t_2253_, 1);
lean_inc_ref(v_init_2254_);
v___x_2260_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27(v_init_2254_, v___x_2252_, v_root_2258_, v_init_2254_, v___y_2255_, v___y_2256_);
lean_dec_ref(v_init_2254_);
if (lean_obj_tag(v___x_2260_) == 0)
{
lean_object* v_a_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2297_; 
v_a_2261_ = lean_ctor_get(v___x_2260_, 0);
v_isSharedCheck_2297_ = !lean_is_exclusive(v___x_2260_);
if (v_isSharedCheck_2297_ == 0)
{
v___x_2263_ = v___x_2260_;
v_isShared_2264_ = v_isSharedCheck_2297_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_a_2261_);
lean_dec(v___x_2260_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2297_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
if (lean_obj_tag(v_a_2261_) == 0)
{
lean_object* v_a_2265_; lean_object* v___x_2267_; 
v_a_2265_ = lean_ctor_get(v_a_2261_, 0);
lean_inc(v_a_2265_);
lean_dec_ref_known(v_a_2261_, 1);
if (v_isShared_2264_ == 0)
{
lean_ctor_set(v___x_2263_, 0, v_a_2265_);
v___x_2267_ = v___x_2263_;
goto v_reusejp_2266_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v_a_2265_);
v___x_2267_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2266_;
}
v_reusejp_2266_:
{
return v___x_2267_;
}
}
else
{
lean_object* v_a_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; size_t v_sz_2272_; size_t v___x_2273_; lean_object* v___x_2274_; 
lean_del_object(v___x_2263_);
v_a_2269_ = lean_ctor_get(v_a_2261_, 0);
lean_inc(v_a_2269_);
lean_dec_ref_known(v_a_2261_, 1);
v___x_2270_ = lean_box(0);
v___x_2271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2270_);
lean_ctor_set(v___x_2271_, 1, v_a_2269_);
v_sz_2272_ = lean_array_size(v_tail_2259_);
v___x_2273_ = ((size_t)0ULL);
v___x_2274_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28(v___x_2252_, v_tail_2259_, v_sz_2272_, v___x_2273_, v___x_2271_, v___y_2255_, v___y_2256_);
if (lean_obj_tag(v___x_2274_) == 0)
{
lean_object* v_a_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2288_; 
v_a_2275_ = lean_ctor_get(v___x_2274_, 0);
v_isSharedCheck_2288_ = !lean_is_exclusive(v___x_2274_);
if (v_isSharedCheck_2288_ == 0)
{
v___x_2277_ = v___x_2274_;
v_isShared_2278_ = v_isSharedCheck_2288_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v___x_2274_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2288_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v_fst_2279_; 
v_fst_2279_ = lean_ctor_get(v_a_2275_, 0);
if (lean_obj_tag(v_fst_2279_) == 0)
{
lean_object* v_snd_2280_; lean_object* v___x_2282_; 
v_snd_2280_ = lean_ctor_get(v_a_2275_, 1);
lean_inc(v_snd_2280_);
lean_dec(v_a_2275_);
if (v_isShared_2278_ == 0)
{
lean_ctor_set(v___x_2277_, 0, v_snd_2280_);
v___x_2282_ = v___x_2277_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v_snd_2280_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
return v___x_2282_;
}
}
else
{
lean_object* v_val_2284_; lean_object* v___x_2286_; 
lean_inc_ref(v_fst_2279_);
lean_dec(v_a_2275_);
v_val_2284_ = lean_ctor_get(v_fst_2279_, 0);
lean_inc(v_val_2284_);
lean_dec_ref_known(v_fst_2279_, 1);
if (v_isShared_2278_ == 0)
{
lean_ctor_set(v___x_2277_, 0, v_val_2284_);
v___x_2286_ = v___x_2277_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v_val_2284_);
v___x_2286_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
return v___x_2286_;
}
}
}
}
else
{
lean_object* v_a_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2296_; 
v_a_2289_ = lean_ctor_get(v___x_2274_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2274_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2291_ = v___x_2274_;
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_a_2289_);
lean_dec(v___x_2274_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2294_; 
if (v_isShared_2292_ == 0)
{
v___x_2294_ = v___x_2291_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_a_2289_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
}
}
}
}
else
{
lean_object* v_a_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2305_; 
v_a_2298_ = lean_ctor_get(v___x_2260_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2260_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2300_ = v___x_2260_;
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_a_2298_);
lean_dec(v___x_2260_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2303_; 
if (v_isShared_2301_ == 0)
{
v___x_2303_ = v___x_2300_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v_a_2298_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19___boxed(lean_object* v___x_2306_, lean_object* v_t_2307_, lean_object* v_init_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_){
_start:
{
uint8_t v___x_38956__boxed_2312_; lean_object* v_res_2313_; 
v___x_38956__boxed_2312_ = lean_unbox(v___x_2306_);
v_res_2313_ = l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19(v___x_38956__boxed_2312_, v_t_2307_, v_init_2308_, v___y_2309_, v___y_2310_);
lean_dec(v___y_2310_);
lean_dec_ref(v___y_2309_);
lean_dec_ref(v_t_2307_);
return v_res_2313_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0(void){
_start:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2314_ = lean_unsigned_to_nat(32u);
v___x_2315_ = lean_mk_empty_array_with_capacity(v___x_2314_);
v___x_2316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2315_);
return v___x_2316_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1(void){
_start:
{
size_t v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2317_ = ((size_t)5ULL);
v___x_2318_ = lean_unsigned_to_nat(0u);
v___x_2319_ = lean_unsigned_to_nat(32u);
v___x_2320_ = lean_mk_empty_array_with_capacity(v___x_2319_);
v___x_2321_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__0);
v___x_2322_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2322_, 0, v___x_2321_);
lean_ctor_set(v___x_2322_, 1, v___x_2320_);
lean_ctor_set(v___x_2322_, 2, v___x_2318_);
lean_ctor_set(v___x_2322_, 3, v___x_2318_);
lean_ctor_set_usize(v___x_2322_, 4, v___x_2317_);
return v___x_2322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg(lean_object* v___y_2323_){
_start:
{
lean_object* v___x_2325_; lean_object* v_traceState_2326_; lean_object* v_traces_2327_; lean_object* v___x_2328_; lean_object* v_traceState_2329_; lean_object* v_env_2330_; lean_object* v_nextMacroScope_2331_; lean_object* v_ngen_2332_; lean_object* v_auxDeclNGen_2333_; lean_object* v_cache_2334_; lean_object* v_recordedDeps_2335_; lean_object* v_messages_2336_; lean_object* v_infoState_2337_; lean_object* v_snapshotTasks_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2357_; 
v___x_2325_ = lean_st_ref_get(v___y_2323_);
v_traceState_2326_ = lean_ctor_get(v___x_2325_, 4);
lean_inc_ref(v_traceState_2326_);
lean_dec(v___x_2325_);
v_traces_2327_ = lean_ctor_get(v_traceState_2326_, 0);
lean_inc_ref(v_traces_2327_);
lean_dec_ref(v_traceState_2326_);
v___x_2328_ = lean_st_ref_take(v___y_2323_);
v_traceState_2329_ = lean_ctor_get(v___x_2328_, 4);
v_env_2330_ = lean_ctor_get(v___x_2328_, 0);
v_nextMacroScope_2331_ = lean_ctor_get(v___x_2328_, 1);
v_ngen_2332_ = lean_ctor_get(v___x_2328_, 2);
v_auxDeclNGen_2333_ = lean_ctor_get(v___x_2328_, 3);
v_cache_2334_ = lean_ctor_get(v___x_2328_, 5);
v_recordedDeps_2335_ = lean_ctor_get(v___x_2328_, 6);
v_messages_2336_ = lean_ctor_get(v___x_2328_, 7);
v_infoState_2337_ = lean_ctor_get(v___x_2328_, 8);
v_snapshotTasks_2338_ = lean_ctor_get(v___x_2328_, 9);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2328_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2340_ = v___x_2328_;
v_isShared_2341_ = v_isSharedCheck_2357_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_snapshotTasks_2338_);
lean_inc(v_infoState_2337_);
lean_inc(v_messages_2336_);
lean_inc(v_recordedDeps_2335_);
lean_inc(v_cache_2334_);
lean_inc(v_traceState_2329_);
lean_inc(v_auxDeclNGen_2333_);
lean_inc(v_ngen_2332_);
lean_inc(v_nextMacroScope_2331_);
lean_inc(v_env_2330_);
lean_dec(v___x_2328_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2357_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
uint64_t v_tid_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2355_; 
v_tid_2342_ = lean_ctor_get_uint64(v_traceState_2329_, sizeof(void*)*1);
v_isSharedCheck_2355_ = !lean_is_exclusive(v_traceState_2329_);
if (v_isSharedCheck_2355_ == 0)
{
lean_object* v_unused_2356_; 
v_unused_2356_ = lean_ctor_get(v_traceState_2329_, 0);
lean_dec(v_unused_2356_);
v___x_2344_ = v_traceState_2329_;
v_isShared_2345_ = v_isSharedCheck_2355_;
goto v_resetjp_2343_;
}
else
{
lean_dec(v_traceState_2329_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2355_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v___x_2346_; lean_object* v___x_2348_; 
v___x_2346_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1);
if (v_isShared_2345_ == 0)
{
lean_ctor_set(v___x_2344_, 0, v___x_2346_);
v___x_2348_ = v___x_2344_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v___x_2346_);
lean_ctor_set_uint64(v_reuseFailAlloc_2354_, sizeof(void*)*1, v_tid_2342_);
v___x_2348_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
lean_object* v___x_2350_; 
if (v_isShared_2341_ == 0)
{
lean_ctor_set(v___x_2340_, 4, v___x_2348_);
v___x_2350_ = v___x_2340_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_env_2330_);
lean_ctor_set(v_reuseFailAlloc_2353_, 1, v_nextMacroScope_2331_);
lean_ctor_set(v_reuseFailAlloc_2353_, 2, v_ngen_2332_);
lean_ctor_set(v_reuseFailAlloc_2353_, 3, v_auxDeclNGen_2333_);
lean_ctor_set(v_reuseFailAlloc_2353_, 4, v___x_2348_);
lean_ctor_set(v_reuseFailAlloc_2353_, 5, v_cache_2334_);
lean_ctor_set(v_reuseFailAlloc_2353_, 6, v_recordedDeps_2335_);
lean_ctor_set(v_reuseFailAlloc_2353_, 7, v_messages_2336_);
lean_ctor_set(v_reuseFailAlloc_2353_, 8, v_infoState_2337_);
lean_ctor_set(v_reuseFailAlloc_2353_, 9, v_snapshotTasks_2338_);
v___x_2350_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2351_ = lean_st_ref_put(v___y_2323_, v___x_2350_);
v___x_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2352_, 0, v_traces_2327_);
return v___x_2352_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___boxed(lean_object* v___y_2358_, lean_object* v___y_2359_){
_start:
{
lean_object* v_res_2360_; 
v_res_2360_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg(v___y_2358_);
lean_dec(v___y_2358_);
return v_res_2360_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0(void){
_start:
{
lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___x_2361_ = lean_box(0);
v___x_2362_ = lean_unsigned_to_nat(16u);
v___x_2363_ = lean_mk_array(v___x_2362_, v___x_2361_);
return v___x_2363_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1(void){
_start:
{
lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v_pos2traces_2366_; 
v___x_2364_ = lean_obj_once(&l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0, &l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0_once, _init_l_Lean_addTraceAsMessages___at___00main_spec__9___closed__0);
v___x_2365_ = lean_unsigned_to_nat(0u);
v_pos2traces_2366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_pos2traces_2366_, 0, v___x_2365_);
lean_ctor_set(v_pos2traces_2366_, 1, v___x_2364_);
return v_pos2traces_2366_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9(lean_object* v___y_2367_, lean_object* v___y_2368_){
_start:
{
lean_object* v_toCold_2373_; lean_object* v_options_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; 
v_toCold_2373_ = lean_ctor_get(v___y_2367_, 0);
v_options_2374_ = lean_ctor_get(v_toCold_2373_, 2);
v___x_2375_ = l_Lean_trace_profiler_output;
v___x_2376_ = l_Lean_Option_get_x3f___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__14(v_options_2374_, v___x_2375_);
if (lean_obj_tag(v___x_2376_) == 0)
{
lean_object* v___x_2377_; uint8_t v___x_2378_; 
v___x_2377_ = l_Lean_trace_profiler_serve;
v___x_2378_ = l_Lean_Option_get___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__15(v_options_2374_, v___x_2377_);
if (v___x_2378_ == 0)
{
lean_object* v___x_2379_; lean_object* v_a_2380_; lean_object* v___x_2382_; uint8_t v_isShared_2383_; uint8_t v_isSharedCheck_2442_; 
v___x_2379_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg(v___y_2368_);
v_a_2380_ = lean_ctor_get(v___x_2379_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2382_ = v___x_2379_;
v_isShared_2383_ = v_isSharedCheck_2442_;
goto v_resetjp_2381_;
}
else
{
lean_inc(v_a_2380_);
lean_dec(v___x_2379_);
v___x_2382_ = lean_box(0);
v_isShared_2383_ = v_isSharedCheck_2442_;
goto v_resetjp_2381_;
}
v_resetjp_2381_:
{
uint8_t v___x_2384_; 
v___x_2384_ = l_Lean_PersistentArray_isEmpty___redArg(v_a_2380_);
if (v___x_2384_ == 0)
{
lean_object* v___x_2385_; lean_object* v_pos2traces_2386_; lean_object* v___x_2387_; 
lean_del_object(v___x_2382_);
v___x_2385_ = lean_unsigned_to_nat(0u);
v_pos2traces_2386_ = lean_obj_once(&l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1, &l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1_once, _init_l_Lean_addTraceAsMessages___at___00main_spec__9___closed__1);
v___x_2387_ = l_Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19(v___x_2384_, v_a_2380_, v_pos2traces_2386_, v___y_2367_, v___y_2368_);
lean_dec(v_a_2380_);
if (lean_obj_tag(v___x_2387_) == 0)
{
lean_object* v_a_2388_; lean_object* v___y_2390_; lean_object* v___y_2404_; lean_object* v___y_2405_; lean_object* v___y_2406_; lean_object* v___y_2407_; lean_object* v___y_2410_; lean_object* v___y_2411_; lean_object* v___y_2412_; lean_object* v___y_2413_; lean_object* v___y_2416_; lean_object* v_size_2422_; lean_object* v_buckets_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; uint8_t v___x_2426_; 
v_a_2388_ = lean_ctor_get(v___x_2387_, 0);
lean_inc(v_a_2388_);
lean_dec_ref_known(v___x_2387_, 1);
v_size_2422_ = lean_ctor_get(v_a_2388_, 0);
lean_inc(v_size_2422_);
v_buckets_2423_ = lean_ctor_get(v_a_2388_, 1);
lean_inc_ref(v_buckets_2423_);
lean_dec(v_a_2388_);
v___x_2424_ = lean_mk_empty_array_with_capacity(v_size_2422_);
lean_dec(v_size_2422_);
v___x_2425_ = lean_array_get_size(v_buckets_2423_);
v___x_2426_ = lean_nat_dec_lt(v___x_2385_, v___x_2425_);
if (v___x_2426_ == 0)
{
lean_dec_ref(v_buckets_2423_);
v___y_2416_ = v___x_2424_;
goto v___jp_2415_;
}
else
{
size_t v___x_2427_; size_t v___x_2428_; lean_object* v___x_2429_; 
v___x_2427_ = ((size_t)0ULL);
v___x_2428_ = lean_usize_of_nat(v___x_2425_);
v___x_2429_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__23(v_buckets_2423_, v___x_2427_, v___x_2428_, v___x_2424_);
lean_dec_ref(v_buckets_2423_);
v___y_2416_ = v___x_2429_;
goto v___jp_2415_;
}
v___jp_2389_:
{
lean_object* v___x_2391_; size_t v_sz_2392_; size_t v___x_2393_; lean_object* v___x_2394_; 
v___x_2391_ = lean_box(0);
v_sz_2392_ = lean_array_size(v___y_2390_);
v___x_2393_ = ((size_t)0ULL);
v___x_2394_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__20(v___x_2378_, v___y_2390_, v_sz_2392_, v___x_2393_, v___x_2391_, v___y_2367_, v___y_2368_);
lean_dec_ref(v___y_2390_);
if (lean_obj_tag(v___x_2394_) == 0)
{
lean_object* v___x_2396_; uint8_t v_isShared_2397_; uint8_t v_isSharedCheck_2401_; 
v_isSharedCheck_2401_ = !lean_is_exclusive(v___x_2394_);
if (v_isSharedCheck_2401_ == 0)
{
lean_object* v_unused_2402_; 
v_unused_2402_ = lean_ctor_get(v___x_2394_, 0);
lean_dec(v_unused_2402_);
v___x_2396_ = v___x_2394_;
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
else
{
lean_dec(v___x_2394_);
v___x_2396_ = lean_box(0);
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
v_resetjp_2395_:
{
lean_object* v___x_2399_; 
if (v_isShared_2397_ == 0)
{
lean_ctor_set(v___x_2396_, 0, v___x_2391_);
v___x_2399_ = v___x_2396_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v___x_2391_);
v___x_2399_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
return v___x_2399_;
}
}
}
else
{
return v___x_2394_;
}
}
v___jp_2403_:
{
lean_object* v___x_2408_; 
v___x_2408_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(v___y_2405_, v___y_2406_, v___y_2404_, v___y_2407_);
lean_dec(v___y_2407_);
lean_dec(v___y_2405_);
v___y_2390_ = v___x_2408_;
goto v___jp_2389_;
}
v___jp_2409_:
{
uint8_t v___x_2414_; 
v___x_2414_ = lean_nat_dec_le(v___y_2413_, v___y_2410_);
if (v___x_2414_ == 0)
{
lean_dec(v___y_2410_);
lean_inc(v___y_2413_);
v___y_2404_ = v___y_2413_;
v___y_2405_ = v___y_2411_;
v___y_2406_ = v___y_2412_;
v___y_2407_ = v___y_2413_;
goto v___jp_2403_;
}
else
{
v___y_2404_ = v___y_2413_;
v___y_2405_ = v___y_2411_;
v___y_2406_ = v___y_2412_;
v___y_2407_ = v___y_2410_;
goto v___jp_2403_;
}
}
v___jp_2415_:
{
lean_object* v___x_2417_; uint8_t v___x_2418_; 
v___x_2417_ = lean_array_get_size(v___y_2416_);
v___x_2418_ = lean_nat_dec_eq(v___x_2417_, v___x_2385_);
if (v___x_2418_ == 0)
{
lean_object* v___x_2419_; lean_object* v___x_2420_; uint8_t v___x_2421_; 
v___x_2419_ = lean_unsigned_to_nat(1u);
v___x_2420_ = lean_nat_sub(v___x_2417_, v___x_2419_);
v___x_2421_ = lean_nat_dec_le(v___x_2385_, v___x_2420_);
if (v___x_2421_ == 0)
{
lean_inc(v___x_2420_);
v___y_2410_ = v___x_2420_;
v___y_2411_ = v___x_2417_;
v___y_2412_ = v___y_2416_;
v___y_2413_ = v___x_2420_;
goto v___jp_2409_;
}
else
{
v___y_2410_ = v___x_2420_;
v___y_2411_ = v___x_2417_;
v___y_2412_ = v___y_2416_;
v___y_2413_ = v___x_2385_;
goto v___jp_2409_;
}
}
else
{
v___y_2390_ = v___y_2416_;
goto v___jp_2389_;
}
}
}
else
{
lean_object* v_a_2430_; lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2437_; 
v_a_2430_ = lean_ctor_get(v___x_2387_, 0);
v_isSharedCheck_2437_ = !lean_is_exclusive(v___x_2387_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2432_ = v___x_2387_;
v_isShared_2433_ = v_isSharedCheck_2437_;
goto v_resetjp_2431_;
}
else
{
lean_inc(v_a_2430_);
lean_dec(v___x_2387_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2437_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
lean_object* v___x_2435_; 
if (v_isShared_2433_ == 0)
{
v___x_2435_ = v___x_2432_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v_a_2430_);
v___x_2435_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
return v___x_2435_;
}
}
}
}
else
{
lean_object* v___x_2438_; lean_object* v___x_2440_; 
lean_dec(v_a_2380_);
v___x_2438_ = lean_box(0);
if (v_isShared_2383_ == 0)
{
lean_ctor_set(v___x_2382_, 0, v___x_2438_);
v___x_2440_ = v___x_2382_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v___x_2438_);
v___x_2440_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
return v___x_2440_;
}
}
}
}
else
{
goto v___jp_2370_;
}
}
else
{
lean_dec_ref_known(v___x_2376_, 1);
goto v___jp_2370_;
}
v___jp_2370_:
{
lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2371_ = lean_box(0);
v___x_2372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2372_, 0, v___x_2371_);
return v___x_2372_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___at___00main_spec__9___boxed(lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_){
_start:
{
lean_object* v_res_2446_; 
v_res_2446_ = l_Lean_addTraceAsMessages___at___00main_spec__9(v___y_2443_, v___y_2444_);
lean_dec(v___y_2444_);
lean_dec_ref(v___y_2443_);
return v_res_2446_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10(lean_object* v_as_2447_, size_t v_sz_2448_, size_t v_i_2449_, lean_object* v_b_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_){
_start:
{
uint8_t v___x_2454_; 
v___x_2454_ = lean_usize_dec_lt(v_i_2449_, v_sz_2448_);
if (v___x_2454_ == 0)
{
lean_object* v___x_2455_; 
v___x_2455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2455_, 0, v_b_2450_);
return v___x_2455_;
}
else
{
lean_object* v___x_2456_; lean_object* v_a_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; 
v___x_2456_ = lean_box(0);
v_a_2457_ = lean_array_uget_borrowed(v_as_2447_, v_i_2449_);
v___x_2458_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2451_);
lean_inc(v_a_2457_);
v___x_2459_ = l_Lean_Compiler_LCNF_resumeCompilation(v_a_2457_, v___x_2458_, v___y_2451_, v___y_2452_);
if (lean_obj_tag(v___x_2459_) == 0)
{
lean_object* v___x_2460_; 
lean_dec_ref_known(v___x_2459_, 1);
v___x_2460_ = l_Lean_addTraceAsMessages___at___00main_spec__9(v___y_2451_, v___y_2452_);
if (lean_obj_tag(v___x_2460_) == 0)
{
size_t v___x_2461_; size_t v___x_2462_; 
lean_dec_ref_known(v___x_2460_, 1);
v___x_2461_ = ((size_t)1ULL);
v___x_2462_ = lean_usize_add(v_i_2449_, v___x_2461_);
v_i_2449_ = v___x_2462_;
v_b_2450_ = v___x_2456_;
goto _start;
}
else
{
return v___x_2460_;
}
}
else
{
lean_object* v_a_2464_; lean_object* v___x_2465_; 
v_a_2464_ = lean_ctor_get(v___x_2459_, 0);
lean_inc(v_a_2464_);
lean_dec_ref_known(v___x_2459_, 1);
v___x_2465_ = l_Lean_addTraceAsMessages___at___00main_spec__9(v___y_2451_, v___y_2452_);
if (lean_obj_tag(v___x_2465_) == 0)
{
lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2472_; 
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2465_);
if (v_isSharedCheck_2472_ == 0)
{
lean_object* v_unused_2473_; 
v_unused_2473_ = lean_ctor_get(v___x_2465_, 0);
lean_dec(v_unused_2473_);
v___x_2467_ = v___x_2465_;
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
else
{
lean_dec(v___x_2465_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v___x_2470_; 
if (v_isShared_2468_ == 0)
{
lean_ctor_set_tag(v___x_2467_, 1);
lean_ctor_set(v___x_2467_, 0, v_a_2464_);
v___x_2470_ = v___x_2467_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_a_2464_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
}
else
{
lean_dec(v_a_2464_);
return v___x_2465_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10___boxed(lean_object* v_as_2474_, lean_object* v_sz_2475_, lean_object* v_i_2476_, lean_object* v_b_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_){
_start:
{
size_t v_sz_boxed_2481_; size_t v_i_boxed_2482_; lean_object* v_res_2483_; 
v_sz_boxed_2481_ = lean_unbox_usize(v_sz_2475_);
lean_dec(v_sz_2475_);
v_i_boxed_2482_ = lean_unbox_usize(v_i_2476_);
lean_dec(v_i_2476_);
v_res_2483_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10(v_as_2474_, v_sz_boxed_2481_, v_i_boxed_2482_, v_b_2477_, v___y_2478_, v___y_2479_);
lean_dec(v___y_2479_);
lean_dec_ref(v___y_2478_);
lean_dec_ref(v_as_2474_);
return v_res_2483_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg(lean_object* v_as_2484_, size_t v_sz_2485_, size_t v_i_2486_, lean_object* v_b_2487_, lean_object* v___y_2488_){
_start:
{
uint8_t v___x_2490_; 
v___x_2490_ = lean_usize_dec_lt(v_i_2486_, v_sz_2485_);
if (v___x_2490_ == 0)
{
lean_object* v___x_2491_; 
v___x_2491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2491_, 0, v_b_2487_);
return v___x_2491_;
}
else
{
uint8_t v___x_2492_; lean_object* v_a_2493_; lean_object* v___x_2494_; lean_object* v_ref_2495_; lean_object* v___x_2496_; 
lean_dec_ref(v_b_2487_);
v___x_2492_ = 0;
v_a_2493_ = lean_array_uget_borrowed(v_as_2484_, v_i_2486_);
lean_inc(v_a_2493_);
v___x_2494_ = l_Lean_Message_toString(v_a_2493_, v___x_2492_);
v_ref_2495_ = lean_ctor_get(v___y_2488_, 2);
v___x_2496_ = l_IO_eprintln___at___00main_spec__6(v___x_2494_);
if (lean_obj_tag(v___x_2496_) == 0)
{
lean_object* v___x_2497_; size_t v___x_2498_; size_t v___x_2499_; 
lean_dec_ref_known(v___x_2496_, 1);
v___x_2497_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0));
v___x_2498_ = ((size_t)1ULL);
v___x_2499_ = lean_usize_add(v_i_2486_, v___x_2498_);
v_i_2486_ = v___x_2499_;
v_b_2487_ = v___x_2497_;
goto _start;
}
else
{
lean_object* v_a_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2512_; 
v_a_2501_ = lean_ctor_get(v___x_2496_, 0);
v_isSharedCheck_2512_ = !lean_is_exclusive(v___x_2496_);
if (v_isSharedCheck_2512_ == 0)
{
v___x_2503_ = v___x_2496_;
v_isShared_2504_ = v_isSharedCheck_2512_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_a_2501_);
lean_dec(v___x_2496_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2512_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2510_; 
v___x_2505_ = lean_io_error_to_string(v_a_2501_);
v___x_2506_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2505_);
v___x_2507_ = l_Lean_MessageData_ofFormat(v___x_2506_);
lean_inc(v_ref_2495_);
v___x_2508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2508_, 0, v_ref_2495_);
lean_ctor_set(v___x_2508_, 1, v___x_2507_);
if (v_isShared_2504_ == 0)
{
lean_ctor_set(v___x_2503_, 0, v___x_2508_);
v___x_2510_ = v___x_2503_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v___x_2508_);
v___x_2510_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
return v___x_2510_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg___boxed(lean_object* v_as_2513_, lean_object* v_sz_2514_, lean_object* v_i_2515_, lean_object* v_b_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_){
_start:
{
size_t v_sz_boxed_2519_; size_t v_i_boxed_2520_; lean_object* v_res_2521_; 
v_sz_boxed_2519_ = lean_unbox_usize(v_sz_2514_);
lean_dec(v_sz_2514_);
v_i_boxed_2520_ = lean_unbox_usize(v_i_2515_);
lean_dec(v_i_2515_);
v_res_2521_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg(v_as_2513_, v_sz_boxed_2519_, v_i_boxed_2520_, v_b_2516_, v___y_2517_);
lean_dec_ref(v___y_2517_);
lean_dec_ref(v_as_2513_);
return v_res_2521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38(lean_object* v_as_2522_, size_t v_sz_2523_, size_t v_i_2524_, lean_object* v_b_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_){
_start:
{
uint8_t v___x_2529_; 
v___x_2529_ = lean_usize_dec_lt(v_i_2524_, v_sz_2523_);
if (v___x_2529_ == 0)
{
lean_object* v___x_2530_; 
v___x_2530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2530_, 0, v_b_2525_);
return v___x_2530_;
}
else
{
uint8_t v___x_2531_; lean_object* v_a_2532_; lean_object* v___x_2533_; lean_object* v_ref_2534_; lean_object* v___x_2535_; 
lean_dec_ref(v_b_2525_);
v___x_2531_ = 0;
v_a_2532_ = lean_array_uget_borrowed(v_as_2522_, v_i_2524_);
lean_inc(v_a_2532_);
v___x_2533_ = l_Lean_Message_toString(v_a_2532_, v___x_2531_);
v_ref_2534_ = lean_ctor_get(v___y_2526_, 2);
v___x_2535_ = l_IO_eprintln___at___00main_spec__6(v___x_2533_);
if (lean_obj_tag(v___x_2535_) == 0)
{
lean_object* v___x_2536_; size_t v___x_2537_; size_t v___x_2538_; lean_object* v___x_2539_; 
lean_dec_ref_known(v___x_2535_, 1);
v___x_2536_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__10_spec__13_spec__27___closed__0));
v___x_2537_ = ((size_t)1ULL);
v___x_2538_ = lean_usize_add(v_i_2524_, v___x_2537_);
v___x_2539_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg(v_as_2522_, v_sz_2523_, v___x_2538_, v___x_2536_, v___y_2526_);
return v___x_2539_;
}
else
{
lean_object* v_a_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2551_; 
v_a_2540_ = lean_ctor_get(v___x_2535_, 0);
v_isSharedCheck_2551_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2551_ == 0)
{
v___x_2542_ = v___x_2535_;
v_isShared_2543_ = v_isSharedCheck_2551_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_a_2540_);
lean_dec(v___x_2535_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2551_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2549_; 
v___x_2544_ = lean_io_error_to_string(v_a_2540_);
v___x_2545_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2545_, 0, v___x_2544_);
v___x_2546_ = l_Lean_MessageData_ofFormat(v___x_2545_);
lean_inc(v_ref_2534_);
v___x_2547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2547_, 0, v_ref_2534_);
lean_ctor_set(v___x_2547_, 1, v___x_2546_);
if (v_isShared_2543_ == 0)
{
lean_ctor_set(v___x_2542_, 0, v___x_2547_);
v___x_2549_ = v___x_2542_;
goto v_reusejp_2548_;
}
else
{
lean_object* v_reuseFailAlloc_2550_; 
v_reuseFailAlloc_2550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2550_, 0, v___x_2547_);
v___x_2549_ = v_reuseFailAlloc_2550_;
goto v_reusejp_2548_;
}
v_reusejp_2548_:
{
return v___x_2549_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38___boxed(lean_object* v_as_2552_, lean_object* v_sz_2553_, lean_object* v_i_2554_, lean_object* v_b_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_){
_start:
{
size_t v_sz_boxed_2559_; size_t v_i_boxed_2560_; lean_object* v_res_2561_; 
v_sz_boxed_2559_ = lean_unbox_usize(v_sz_2553_);
lean_dec(v_sz_2553_);
v_i_boxed_2560_ = lean_unbox_usize(v_i_2554_);
lean_dec(v_i_2554_);
v_res_2561_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38(v_as_2552_, v_sz_boxed_2559_, v_i_boxed_2560_, v_b_2555_, v___y_2556_, v___y_2557_);
lean_dec(v___y_2557_);
lean_dec_ref(v___y_2556_);
lean_dec_ref(v_as_2552_);
return v_res_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26(lean_object* v_init_2562_, lean_object* v_n_2563_, lean_object* v_b_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_){
_start:
{
if (lean_obj_tag(v_n_2563_) == 0)
{
lean_object* v_cs_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; size_t v_sz_2571_; size_t v___x_2572_; lean_object* v___x_2573_; 
v_cs_2568_ = lean_ctor_get(v_n_2563_, 0);
v___x_2569_ = lean_box(0);
v___x_2570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2569_);
lean_ctor_set(v___x_2570_, 1, v_b_2564_);
v_sz_2571_ = lean_array_size(v_cs_2568_);
v___x_2572_ = ((size_t)0ULL);
v___x_2573_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37(v_init_2562_, v_cs_2568_, v_sz_2571_, v___x_2572_, v___x_2570_, v___y_2565_, v___y_2566_);
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_object* v_a_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2588_; 
v_a_2574_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2576_ = v___x_2573_;
v_isShared_2577_ = v_isSharedCheck_2588_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_a_2574_);
lean_dec(v___x_2573_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2588_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v_fst_2578_; 
v_fst_2578_ = lean_ctor_get(v_a_2574_, 0);
if (lean_obj_tag(v_fst_2578_) == 0)
{
lean_object* v_snd_2579_; lean_object* v___x_2580_; lean_object* v___x_2582_; 
v_snd_2579_ = lean_ctor_get(v_a_2574_, 1);
lean_inc(v_snd_2579_);
lean_dec(v_a_2574_);
v___x_2580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2580_, 0, v_snd_2579_);
if (v_isShared_2577_ == 0)
{
lean_ctor_set(v___x_2576_, 0, v___x_2580_);
v___x_2582_ = v___x_2576_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v___x_2580_);
v___x_2582_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
return v___x_2582_;
}
}
else
{
lean_object* v_val_2584_; lean_object* v___x_2586_; 
lean_inc_ref(v_fst_2578_);
lean_dec(v_a_2574_);
v_val_2584_ = lean_ctor_get(v_fst_2578_, 0);
lean_inc(v_val_2584_);
lean_dec_ref_known(v_fst_2578_, 1);
if (v_isShared_2577_ == 0)
{
lean_ctor_set(v___x_2576_, 0, v_val_2584_);
v___x_2586_ = v___x_2576_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v_val_2584_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
}
else
{
lean_object* v_a_2589_; lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2596_; 
v_a_2589_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2596_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2596_ == 0)
{
v___x_2591_ = v___x_2573_;
v_isShared_2592_ = v_isSharedCheck_2596_;
goto v_resetjp_2590_;
}
else
{
lean_inc(v_a_2589_);
lean_dec(v___x_2573_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2596_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
lean_object* v___x_2594_; 
if (v_isShared_2592_ == 0)
{
v___x_2594_ = v___x_2591_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2595_; 
v_reuseFailAlloc_2595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2595_, 0, v_a_2589_);
v___x_2594_ = v_reuseFailAlloc_2595_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
return v___x_2594_;
}
}
}
}
else
{
lean_object* v_vs_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; size_t v_sz_2600_; size_t v___x_2601_; lean_object* v___x_2602_; 
v_vs_2597_ = lean_ctor_get(v_n_2563_, 0);
v___x_2598_ = lean_box(0);
v___x_2599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2599_, 0, v___x_2598_);
lean_ctor_set(v___x_2599_, 1, v_b_2564_);
v_sz_2600_ = lean_array_size(v_vs_2597_);
v___x_2601_ = ((size_t)0ULL);
v___x_2602_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38(v_vs_2597_, v_sz_2600_, v___x_2601_, v___x_2599_, v___y_2565_, v___y_2566_);
if (lean_obj_tag(v___x_2602_) == 0)
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2617_; 
v_a_2603_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_2617_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2617_ == 0)
{
v___x_2605_ = v___x_2602_;
v_isShared_2606_ = v_isSharedCheck_2617_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2602_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2617_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v_fst_2607_; 
v_fst_2607_ = lean_ctor_get(v_a_2603_, 0);
if (lean_obj_tag(v_fst_2607_) == 0)
{
lean_object* v_snd_2608_; lean_object* v___x_2609_; lean_object* v___x_2611_; 
v_snd_2608_ = lean_ctor_get(v_a_2603_, 1);
lean_inc(v_snd_2608_);
lean_dec(v_a_2603_);
v___x_2609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2609_, 0, v_snd_2608_);
if (v_isShared_2606_ == 0)
{
lean_ctor_set(v___x_2605_, 0, v___x_2609_);
v___x_2611_ = v___x_2605_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v___x_2609_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
return v___x_2611_;
}
}
else
{
lean_object* v_val_2613_; lean_object* v___x_2615_; 
lean_inc_ref(v_fst_2607_);
lean_dec(v_a_2603_);
v_val_2613_ = lean_ctor_get(v_fst_2607_, 0);
lean_inc(v_val_2613_);
lean_dec_ref_known(v_fst_2607_, 1);
if (v_isShared_2606_ == 0)
{
lean_ctor_set(v___x_2605_, 0, v_val_2613_);
v___x_2615_ = v___x_2605_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2616_; 
v_reuseFailAlloc_2616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2616_, 0, v_val_2613_);
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
else
{
lean_object* v_a_2618_; lean_object* v___x_2620_; uint8_t v_isShared_2621_; uint8_t v_isSharedCheck_2625_; 
v_a_2618_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_2625_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2625_ == 0)
{
v___x_2620_ = v___x_2602_;
v_isShared_2621_ = v_isSharedCheck_2625_;
goto v_resetjp_2619_;
}
else
{
lean_inc(v_a_2618_);
lean_dec(v___x_2602_);
v___x_2620_ = lean_box(0);
v_isShared_2621_ = v_isSharedCheck_2625_;
goto v_resetjp_2619_;
}
v_resetjp_2619_:
{
lean_object* v___x_2623_; 
if (v_isShared_2621_ == 0)
{
v___x_2623_ = v___x_2620_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v_a_2618_);
v___x_2623_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
return v___x_2623_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37(lean_object* v_init_2626_, lean_object* v_as_2627_, size_t v_sz_2628_, size_t v_i_2629_, lean_object* v_b_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_){
_start:
{
uint8_t v___x_2634_; 
v___x_2634_ = lean_usize_dec_lt(v_i_2629_, v_sz_2628_);
if (v___x_2634_ == 0)
{
lean_object* v___x_2635_; 
v___x_2635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2635_, 0, v_b_2630_);
return v___x_2635_;
}
else
{
lean_object* v_snd_2636_; lean_object* v___x_2638_; uint8_t v_isShared_2639_; uint8_t v_isSharedCheck_2670_; 
v_snd_2636_ = lean_ctor_get(v_b_2630_, 1);
v_isSharedCheck_2670_ = !lean_is_exclusive(v_b_2630_);
if (v_isSharedCheck_2670_ == 0)
{
lean_object* v_unused_2671_; 
v_unused_2671_ = lean_ctor_get(v_b_2630_, 0);
lean_dec(v_unused_2671_);
v___x_2638_ = v_b_2630_;
v_isShared_2639_ = v_isSharedCheck_2670_;
goto v_resetjp_2637_;
}
else
{
lean_inc(v_snd_2636_);
lean_dec(v_b_2630_);
v___x_2638_ = lean_box(0);
v_isShared_2639_ = v_isSharedCheck_2670_;
goto v_resetjp_2637_;
}
v_resetjp_2637_:
{
lean_object* v___x_2640_; lean_object* v_a_2641_; lean_object* v___x_2642_; 
v___x_2640_ = lean_box(0);
v_a_2641_ = lean_array_uget_borrowed(v_as_2627_, v_i_2629_);
lean_inc(v_snd_2636_);
v___x_2642_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26(v_init_2626_, v_a_2641_, v_snd_2636_, v___y_2631_, v___y_2632_);
if (lean_obj_tag(v___x_2642_) == 0)
{
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2661_; 
v_a_2643_ = lean_ctor_get(v___x_2642_, 0);
v_isSharedCheck_2661_ = !lean_is_exclusive(v___x_2642_);
if (v_isSharedCheck_2661_ == 0)
{
v___x_2645_ = v___x_2642_;
v_isShared_2646_ = v_isSharedCheck_2661_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v___x_2642_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2661_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
if (lean_obj_tag(v_a_2643_) == 0)
{
lean_object* v___x_2647_; lean_object* v___x_2649_; 
v___x_2647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2647_, 0, v_a_2643_);
if (v_isShared_2639_ == 0)
{
lean_ctor_set(v___x_2638_, 0, v___x_2647_);
v___x_2649_ = v___x_2638_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v___x_2647_);
lean_ctor_set(v_reuseFailAlloc_2653_, 1, v_snd_2636_);
v___x_2649_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
lean_object* v___x_2651_; 
if (v_isShared_2646_ == 0)
{
lean_ctor_set(v___x_2645_, 0, v___x_2649_);
v___x_2651_ = v___x_2645_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v___x_2649_);
v___x_2651_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
return v___x_2651_;
}
}
}
else
{
lean_object* v_a_2654_; lean_object* v___x_2656_; 
lean_del_object(v___x_2645_);
lean_dec(v_snd_2636_);
v_a_2654_ = lean_ctor_get(v_a_2643_, 0);
lean_inc(v_a_2654_);
lean_dec_ref_known(v_a_2643_, 1);
if (v_isShared_2639_ == 0)
{
lean_ctor_set(v___x_2638_, 1, v_a_2654_);
lean_ctor_set(v___x_2638_, 0, v___x_2640_);
v___x_2656_ = v___x_2638_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v___x_2640_);
lean_ctor_set(v_reuseFailAlloc_2660_, 1, v_a_2654_);
v___x_2656_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
size_t v___x_2657_; size_t v___x_2658_; 
v___x_2657_ = ((size_t)1ULL);
v___x_2658_ = lean_usize_add(v_i_2629_, v___x_2657_);
v_i_2629_ = v___x_2658_;
v_b_2630_ = v___x_2656_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2669_; 
lean_del_object(v___x_2638_);
lean_dec(v_snd_2636_);
v_a_2662_ = lean_ctor_get(v___x_2642_, 0);
v_isSharedCheck_2669_ = !lean_is_exclusive(v___x_2642_);
if (v_isSharedCheck_2669_ == 0)
{
v___x_2664_ = v___x_2642_;
v_isShared_2665_ = v_isSharedCheck_2669_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_a_2662_);
lean_dec(v___x_2642_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2669_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2667_; 
if (v_isShared_2665_ == 0)
{
v___x_2667_ = v___x_2664_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v_a_2662_);
v___x_2667_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
return v___x_2667_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37___boxed(lean_object* v_init_2672_, lean_object* v_as_2673_, lean_object* v_sz_2674_, lean_object* v_i_2675_, lean_object* v_b_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_){
_start:
{
size_t v_sz_boxed_2680_; size_t v_i_boxed_2681_; lean_object* v_res_2682_; 
v_sz_boxed_2680_ = lean_unbox_usize(v_sz_2674_);
lean_dec(v_sz_2674_);
v_i_boxed_2681_ = lean_unbox_usize(v_i_2675_);
lean_dec(v_i_2675_);
v_res_2682_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__37(v_init_2672_, v_as_2673_, v_sz_boxed_2680_, v_i_boxed_2681_, v_b_2676_, v___y_2677_, v___y_2678_);
lean_dec(v___y_2678_);
lean_dec_ref(v___y_2677_);
lean_dec_ref(v_as_2673_);
return v_res_2682_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26___boxed(lean_object* v_init_2683_, lean_object* v_n_2684_, lean_object* v_b_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_){
_start:
{
lean_object* v_res_2689_; 
v_res_2689_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26(v_init_2683_, v_n_2684_, v_b_2685_, v___y_2686_, v___y_2687_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
lean_dec_ref(v_n_2684_);
return v_res_2689_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg(lean_object* v_as_2690_, size_t v_sz_2691_, size_t v_i_2692_, lean_object* v_b_2693_, lean_object* v___y_2694_){
_start:
{
uint8_t v___x_2696_; 
v___x_2696_ = lean_usize_dec_lt(v_i_2692_, v_sz_2691_);
if (v___x_2696_ == 0)
{
lean_object* v___x_2697_; 
v___x_2697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2697_, 0, v_b_2693_);
return v___x_2697_;
}
else
{
uint8_t v___x_2698_; lean_object* v_a_2699_; lean_object* v___x_2700_; lean_object* v_ref_2701_; lean_object* v___x_2702_; 
lean_dec_ref(v_b_2693_);
v___x_2698_ = 0;
v_a_2699_ = lean_array_uget_borrowed(v_as_2690_, v_i_2692_);
lean_inc(v_a_2699_);
v___x_2700_ = l_Lean_Message_toString(v_a_2699_, v___x_2698_);
v_ref_2701_ = lean_ctor_get(v___y_2694_, 2);
v___x_2702_ = l_IO_eprintln___at___00main_spec__6(v___x_2700_);
if (lean_obj_tag(v___x_2702_) == 0)
{
lean_object* v___x_2703_; size_t v___x_2704_; size_t v___x_2705_; 
lean_dec_ref_known(v___x_2702_, 1);
v___x_2703_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0));
v___x_2704_ = ((size_t)1ULL);
v___x_2705_ = lean_usize_add(v_i_2692_, v___x_2704_);
v_i_2692_ = v___x_2705_;
v_b_2693_ = v___x_2703_;
goto _start;
}
else
{
lean_object* v_a_2707_; lean_object* v___x_2709_; uint8_t v_isShared_2710_; uint8_t v_isSharedCheck_2718_; 
v_a_2707_ = lean_ctor_get(v___x_2702_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___x_2702_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2709_ = v___x_2702_;
v_isShared_2710_ = v_isSharedCheck_2718_;
goto v_resetjp_2708_;
}
else
{
lean_inc(v_a_2707_);
lean_dec(v___x_2702_);
v___x_2709_ = lean_box(0);
v_isShared_2710_ = v_isSharedCheck_2718_;
goto v_resetjp_2708_;
}
v_resetjp_2708_:
{
lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2716_; 
v___x_2711_ = lean_io_error_to_string(v_a_2707_);
v___x_2712_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2712_, 0, v___x_2711_);
v___x_2713_ = l_Lean_MessageData_ofFormat(v___x_2712_);
lean_inc(v_ref_2701_);
v___x_2714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2714_, 0, v_ref_2701_);
lean_ctor_set(v___x_2714_, 1, v___x_2713_);
if (v_isShared_2710_ == 0)
{
lean_ctor_set(v___x_2709_, 0, v___x_2714_);
v___x_2716_ = v___x_2709_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v___x_2714_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
return v___x_2716_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg___boxed(lean_object* v_as_2719_, lean_object* v_sz_2720_, lean_object* v_i_2721_, lean_object* v_b_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_){
_start:
{
size_t v_sz_boxed_2725_; size_t v_i_boxed_2726_; lean_object* v_res_2727_; 
v_sz_boxed_2725_ = lean_unbox_usize(v_sz_2720_);
lean_dec(v_sz_2720_);
v_i_boxed_2726_ = lean_unbox_usize(v_i_2721_);
lean_dec(v_i_2721_);
v_res_2727_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg(v_as_2719_, v_sz_boxed_2725_, v_i_boxed_2726_, v_b_2722_, v___y_2723_);
lean_dec_ref(v___y_2723_);
lean_dec_ref(v_as_2719_);
return v_res_2727_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27(lean_object* v_as_2728_, size_t v_sz_2729_, size_t v_i_2730_, lean_object* v_b_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_){
_start:
{
uint8_t v___x_2735_; 
v___x_2735_ = lean_usize_dec_lt(v_i_2730_, v_sz_2729_);
if (v___x_2735_ == 0)
{
lean_object* v___x_2736_; 
v___x_2736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2736_, 0, v_b_2731_);
return v___x_2736_;
}
else
{
uint8_t v___x_2737_; lean_object* v_a_2738_; lean_object* v___x_2739_; lean_object* v_ref_2740_; lean_object* v___x_2741_; 
lean_dec_ref(v_b_2731_);
v___x_2737_ = 0;
v_a_2738_ = lean_array_uget_borrowed(v_as_2728_, v_i_2730_);
lean_inc(v_a_2738_);
v___x_2739_ = l_Lean_Message_toString(v_a_2738_, v___x_2737_);
v_ref_2740_ = lean_ctor_get(v___y_2732_, 2);
v___x_2741_ = l_IO_eprintln___at___00main_spec__6(v___x_2739_);
if (lean_obj_tag(v___x_2741_) == 0)
{
lean_object* v___x_2742_; size_t v___x_2743_; size_t v___x_2744_; lean_object* v___x_2745_; 
lean_dec_ref_known(v___x_2741_, 1);
v___x_2742_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__7_spec__11_spec__15___closed__0));
v___x_2743_ = ((size_t)1ULL);
v___x_2744_ = lean_usize_add(v_i_2730_, v___x_2743_);
v___x_2745_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg(v_as_2728_, v_sz_2729_, v___x_2744_, v___x_2742_, v___y_2732_);
return v___x_2745_;
}
else
{
lean_object* v_a_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2757_; 
v_a_2746_ = lean_ctor_get(v___x_2741_, 0);
v_isSharedCheck_2757_ = !lean_is_exclusive(v___x_2741_);
if (v_isSharedCheck_2757_ == 0)
{
v___x_2748_ = v___x_2741_;
v_isShared_2749_ = v_isSharedCheck_2757_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_a_2746_);
lean_dec(v___x_2741_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2757_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2755_; 
v___x_2750_ = lean_io_error_to_string(v_a_2746_);
v___x_2751_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2750_);
v___x_2752_ = l_Lean_MessageData_ofFormat(v___x_2751_);
lean_inc(v_ref_2740_);
v___x_2753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2753_, 0, v_ref_2740_);
lean_ctor_set(v___x_2753_, 1, v___x_2752_);
if (v_isShared_2749_ == 0)
{
lean_ctor_set(v___x_2748_, 0, v___x_2753_);
v___x_2755_ = v___x_2748_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v___x_2753_);
v___x_2755_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
return v___x_2755_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27___boxed(lean_object* v_as_2758_, lean_object* v_sz_2759_, lean_object* v_i_2760_, lean_object* v_b_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_){
_start:
{
size_t v_sz_boxed_2765_; size_t v_i_boxed_2766_; lean_object* v_res_2767_; 
v_sz_boxed_2765_ = lean_unbox_usize(v_sz_2759_);
lean_dec(v_sz_2759_);
v_i_boxed_2766_ = lean_unbox_usize(v_i_2760_);
lean_dec(v_i_2760_);
v_res_2767_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27(v_as_2758_, v_sz_boxed_2765_, v_i_boxed_2766_, v_b_2761_, v___y_2762_, v___y_2763_);
lean_dec(v___y_2763_);
lean_dec_ref(v___y_2762_);
lean_dec_ref(v_as_2758_);
return v_res_2767_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__11(lean_object* v_t_2768_, lean_object* v_init_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_){
_start:
{
lean_object* v_root_2773_; lean_object* v_tail_2774_; lean_object* v___x_2775_; 
v_root_2773_ = lean_ctor_get(v_t_2768_, 0);
v_tail_2774_ = lean_ctor_get(v_t_2768_, 1);
v___x_2775_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26(v_init_2769_, v_root_2773_, v_init_2769_, v___y_2770_, v___y_2771_);
if (lean_obj_tag(v___x_2775_) == 0)
{
lean_object* v_a_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2812_; 
v_a_2776_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2812_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2812_ == 0)
{
v___x_2778_ = v___x_2775_;
v_isShared_2779_ = v_isSharedCheck_2812_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_a_2776_);
lean_dec(v___x_2775_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2812_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
if (lean_obj_tag(v_a_2776_) == 0)
{
lean_object* v_a_2780_; lean_object* v___x_2782_; 
v_a_2780_ = lean_ctor_get(v_a_2776_, 0);
lean_inc(v_a_2780_);
lean_dec_ref_known(v_a_2776_, 1);
if (v_isShared_2779_ == 0)
{
lean_ctor_set(v___x_2778_, 0, v_a_2780_);
v___x_2782_ = v___x_2778_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v_a_2780_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
return v___x_2782_;
}
}
else
{
lean_object* v_a_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; size_t v_sz_2787_; size_t v___x_2788_; lean_object* v___x_2789_; 
lean_del_object(v___x_2778_);
v_a_2784_ = lean_ctor_get(v_a_2776_, 0);
lean_inc(v_a_2784_);
lean_dec_ref_known(v_a_2776_, 1);
v___x_2785_ = lean_box(0);
v___x_2786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2786_, 0, v___x_2785_);
lean_ctor_set(v___x_2786_, 1, v_a_2784_);
v_sz_2787_ = lean_array_size(v_tail_2774_);
v___x_2788_ = ((size_t)0ULL);
v___x_2789_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27(v_tail_2774_, v_sz_2787_, v___x_2788_, v___x_2786_, v___y_2770_, v___y_2771_);
if (lean_obj_tag(v___x_2789_) == 0)
{
lean_object* v_a_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2803_; 
v_a_2790_ = lean_ctor_get(v___x_2789_, 0);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2789_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2792_ = v___x_2789_;
v_isShared_2793_ = v_isSharedCheck_2803_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_a_2790_);
lean_dec(v___x_2789_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2803_;
goto v_resetjp_2791_;
}
v_resetjp_2791_:
{
lean_object* v_fst_2794_; 
v_fst_2794_ = lean_ctor_get(v_a_2790_, 0);
if (lean_obj_tag(v_fst_2794_) == 0)
{
lean_object* v_snd_2795_; lean_object* v___x_2797_; 
v_snd_2795_ = lean_ctor_get(v_a_2790_, 1);
lean_inc(v_snd_2795_);
lean_dec(v_a_2790_);
if (v_isShared_2793_ == 0)
{
lean_ctor_set(v___x_2792_, 0, v_snd_2795_);
v___x_2797_ = v___x_2792_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v_snd_2795_);
v___x_2797_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
return v___x_2797_;
}
}
else
{
lean_object* v_val_2799_; lean_object* v___x_2801_; 
lean_inc_ref(v_fst_2794_);
lean_dec(v_a_2790_);
v_val_2799_ = lean_ctor_get(v_fst_2794_, 0);
lean_inc(v_val_2799_);
lean_dec_ref_known(v_fst_2794_, 1);
if (v_isShared_2793_ == 0)
{
lean_ctor_set(v___x_2792_, 0, v_val_2799_);
v___x_2801_ = v___x_2792_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v_val_2799_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
}
}
else
{
lean_object* v_a_2804_; lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2811_; 
v_a_2804_ = lean_ctor_get(v___x_2789_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2789_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2806_ = v___x_2789_;
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
else
{
lean_inc(v_a_2804_);
lean_dec(v___x_2789_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v___x_2809_; 
if (v_isShared_2807_ == 0)
{
v___x_2809_ = v___x_2806_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v_a_2804_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
}
}
}
}
}
}
else
{
lean_object* v_a_2813_; lean_object* v___x_2815_; uint8_t v_isShared_2816_; uint8_t v_isSharedCheck_2820_; 
v_a_2813_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2820_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2820_ == 0)
{
v___x_2815_ = v___x_2775_;
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
else
{
lean_inc(v_a_2813_);
lean_dec(v___x_2775_);
v___x_2815_ = lean_box(0);
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
v_resetjp_2814_:
{
lean_object* v___x_2818_; 
if (v_isShared_2816_ == 0)
{
v___x_2818_ = v___x_2815_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v_a_2813_);
v___x_2818_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
return v___x_2818_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00main_spec__11___boxed(lean_object* v_t_2821_, lean_object* v_init_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_){
_start:
{
lean_object* v_res_2826_; 
v_res_2826_ = l_Lean_PersistentArray_forIn___at___00main_spec__11(v_t_2821_, v_init_2822_, v___y_2823_, v___y_2824_);
lean_dec(v___y_2824_);
lean_dec_ref(v___y_2823_);
lean_dec_ref(v_t_2821_);
return v_res_2826_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12(lean_object* v_as_2827_, size_t v_sz_2828_, size_t v_i_2829_, lean_object* v_b_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_){
_start:
{
uint8_t v___x_2834_; 
v___x_2834_ = lean_usize_dec_lt(v_i_2829_, v_sz_2828_);
if (v___x_2834_ == 0)
{
lean_object* v___x_2835_; 
v___x_2835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2835_, 0, v_b_2830_);
return v___x_2835_;
}
else
{
lean_object* v_a_2836_; lean_object* v_declNames_2837_; lean_object* v___x_2838_; size_t v_sz_2839_; size_t v___x_2840_; lean_object* v___x_2841_; 
v_a_2836_ = lean_array_uget_borrowed(v_as_2827_, v_i_2829_);
v_declNames_2837_ = lean_ctor_get(v_a_2836_, 0);
v___x_2838_ = lean_box(0);
v_sz_2839_ = lean_array_size(v_declNames_2837_);
v___x_2840_ = ((size_t)0ULL);
v___x_2841_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__10(v_declNames_2837_, v_sz_2839_, v___x_2840_, v___x_2838_, v___y_2831_, v___y_2832_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_object* v___x_2842_; 
lean_dec_ref_known(v___x_2841_, 1);
v___x_2842_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v___y_2832_);
if (lean_obj_tag(v___x_2842_) == 0)
{
lean_object* v_a_2843_; lean_object* v_unreported_2844_; lean_object* v___x_2845_; 
v_a_2843_ = lean_ctor_get(v___x_2842_, 0);
lean_inc(v_a_2843_);
lean_dec_ref_known(v___x_2842_, 1);
v_unreported_2844_ = lean_ctor_get(v_a_2843_, 1);
lean_inc_ref(v_unreported_2844_);
lean_dec(v_a_2843_);
v___x_2845_ = l_Lean_PersistentArray_forIn___at___00main_spec__11(v_unreported_2844_, v___x_2838_, v___y_2831_, v___y_2832_);
lean_dec_ref(v_unreported_2844_);
if (lean_obj_tag(v___x_2845_) == 0)
{
size_t v___x_2846_; size_t v___x_2847_; 
lean_dec_ref_known(v___x_2845_, 1);
v___x_2846_ = ((size_t)1ULL);
v___x_2847_ = lean_usize_add(v_i_2829_, v___x_2846_);
v_i_2829_ = v___x_2847_;
v_b_2830_ = v___x_2838_;
goto _start;
}
else
{
return v___x_2845_;
}
}
else
{
lean_object* v_a_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2856_; 
v_a_2849_ = lean_ctor_get(v___x_2842_, 0);
v_isSharedCheck_2856_ = !lean_is_exclusive(v___x_2842_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2851_ = v___x_2842_;
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_a_2849_);
lean_dec(v___x_2842_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v___x_2854_; 
if (v_isShared_2852_ == 0)
{
v___x_2854_ = v___x_2851_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_a_2849_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
}
}
else
{
return v___x_2841_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12___boxed(lean_object* v_as_2857_, lean_object* v_sz_2858_, lean_object* v_i_2859_, lean_object* v_b_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_){
_start:
{
size_t v_sz_boxed_2864_; size_t v_i_boxed_2865_; lean_object* v_res_2866_; 
v_sz_boxed_2864_ = lean_unbox_usize(v_sz_2858_);
lean_dec(v_sz_2858_);
v_i_boxed_2865_ = lean_unbox_usize(v_i_2859_);
lean_dec(v_i_2859_);
v_res_2866_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12(v_as_2857_, v_sz_boxed_2864_, v_i_boxed_2865_, v_b_2860_, v___y_2861_, v___y_2862_);
lean_dec(v___y_2862_);
lean_dec_ref(v___y_2861_);
lean_dec_ref(v_as_2857_);
return v_res_2866_;
}
}
static lean_object* _init_l_main___closed__1(void){
_start:
{
lean_object* v___x_2868_; 
v___x_2868_ = l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg();
return v___x_2868_;
}
}
static lean_object* _init_l_main___closed__2(void){
_start:
{
lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
v___x_2869_ = l_Lean_instInhabitedClassState_default;
v___x_2870_ = lean_box(0);
v___x_2871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2870_);
lean_ctor_set(v___x_2871_, 1, v___x_2869_);
return v___x_2871_;
}
}
static lean_object* _init_l_main___closed__3(void){
_start:
{
lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; 
v___x_2872_ = l_Lean_Meta_Match_Extension_instInhabitedState;
v___x_2873_ = lean_box(0);
v___x_2874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2874_, 0, v___x_2873_);
lean_ctor_set(v___x_2874_, 1, v___x_2872_);
return v___x_2874_;
}
}
static lean_object* _init_l_main___closed__4(void){
_start:
{
lean_object* v___x_2875_; 
v___x_2875_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v___x_2875_;
}
}
static lean_object* _init_l_main___closed__5(void){
_start:
{
lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; 
v___x_2876_ = lean_obj_once(&l_main___closed__4, &l_main___closed__4_once, _init_l_main___closed__4);
v___x_2877_ = lean_box(0);
v___x_2878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2878_, 0, v___x_2877_);
lean_ctor_set(v___x_2878_, 1, v___x_2876_);
return v___x_2878_;
}
}
static lean_object* _init_l_main___closed__6(void){
_start:
{
lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2879_ = lean_obj_once(&l_main___closed__5, &l_main___closed__5_once, _init_l_main___closed__5);
v___x_2880_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v___x_2879_);
return v___x_2880_;
}
}
static lean_object* _init_l_main___closed__7(void){
_start:
{
lean_object* v___x_2881_; 
v___x_2881_ = l_Array_instInhabited___redArg();
return v___x_2881_;
}
}
static lean_object* _init_l_main___closed__17(void){
_start:
{
lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; 
v___x_2894_ = ((lean_object*)(l_main___closed__16));
v___x_2895_ = lean_unsigned_to_nat(27u);
v___x_2896_ = lean_unsigned_to_nat(160u);
v___x_2897_ = ((lean_object*)(l_main___closed__15));
v___x_2898_ = ((lean_object*)(l_main___closed__14));
v___x_2899_ = l_mkPanicMessageWithDecl(v___x_2898_, v___x_2897_, v___x_2896_, v___x_2895_, v___x_2894_);
return v___x_2899_;
}
}
static lean_object* _init_l_main___closed__19(void){
_start:
{
lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; 
v___x_2901_ = ((lean_object*)(l_main___closed__16));
v___x_2902_ = lean_unsigned_to_nat(51u);
v___x_2903_ = lean_unsigned_to_nat(133u);
v___x_2904_ = ((lean_object*)(l_main___closed__15));
v___x_2905_ = ((lean_object*)(l_main___closed__14));
v___x_2906_ = l_mkPanicMessageWithDecl(v___x_2905_, v___x_2904_, v___x_2903_, v___x_2902_, v___x_2901_);
return v___x_2906_;
}
}
static lean_object* _init_l_main___closed__20(void){
_start:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; 
v___x_2907_ = lean_unsigned_to_nat(1u);
v___x_2908_ = l_Lean_firstFrontendMacroScope;
v___x_2909_ = lean_nat_add(v___x_2908_, v___x_2907_);
return v___x_2909_;
}
}
static lean_object* _init_l_main___closed__24(void){
_start:
{
lean_object* v___x_2916_; uint64_t v___x_2917_; lean_object* v___x_2918_; 
v___x_2916_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1);
v___x_2917_ = 0ULL;
v___x_2918_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2918_, 0, v___x_2916_);
lean_ctor_set_uint64(v___x_2918_, sizeof(void*)*1, v___x_2917_);
return v___x_2918_;
}
}
static lean_object* _init_l_main___closed__25(void){
_start:
{
lean_object* v___x_2919_; 
v___x_2919_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2919_;
}
}
static lean_object* _init_l_main___closed__26(void){
_start:
{
lean_object* v___x_2920_; lean_object* v___x_2921_; 
v___x_2920_ = lean_obj_once(&l_main___closed__25, &l_main___closed__25_once, _init_l_main___closed__25);
v___x_2921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2920_);
return v___x_2921_;
}
}
static lean_object* _init_l_main___closed__27(void){
_start:
{
lean_object* v___x_2922_; lean_object* v___x_2923_; 
v___x_2922_ = lean_obj_once(&l_main___closed__26, &l_main___closed__26_once, _init_l_main___closed__26);
v___x_2923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2923_, 0, v___x_2922_);
lean_ctor_set(v___x_2923_, 1, v___x_2922_);
return v___x_2923_;
}
}
static lean_object* _init_l_main___closed__29(void){
_start:
{
lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; 
v___x_2926_ = lean_unsigned_to_nat(0u);
v___x_2927_ = l_Lean_Options_empty;
v___x_2928_ = ((lean_object*)(l_main___closed__28));
v___x_2929_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2929_, 0, v___x_2928_);
lean_ctor_set(v___x_2929_, 1, v___x_2927_);
lean_ctor_set(v___x_2929_, 2, v___x_2928_);
lean_ctor_set(v___x_2929_, 3, v___x_2926_);
lean_ctor_set(v___x_2929_, 4, v___x_2926_);
lean_ctor_set(v___x_2929_, 5, v___x_2926_);
return v___x_2929_;
}
}
static lean_object* _init_l_main___closed__30(void){
_start:
{
lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; 
v___x_2930_ = l_Lean_NameSet_empty;
v___x_2931_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1);
v___x_2932_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2931_);
lean_ctor_set(v___x_2932_, 1, v___x_2931_);
lean_ctor_set(v___x_2932_, 2, v___x_2930_);
return v___x_2932_;
}
}
static lean_object* _init_l_main___closed__31(void){
_start:
{
lean_object* v___x_2933_; lean_object* v___x_2934_; uint8_t v___x_2935_; lean_object* v___x_2936_; 
v___x_2933_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg___closed__1);
v___x_2934_ = lean_obj_once(&l_main___closed__26, &l_main___closed__26_once, _init_l_main___closed__26);
v___x_2935_ = 1;
v___x_2936_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2936_, 0, v___x_2934_);
lean_ctor_set(v___x_2936_, 1, v___x_2934_);
lean_ctor_set(v___x_2936_, 2, v___x_2933_);
lean_ctor_set_uint8(v___x_2936_, sizeof(void*)*3, v___x_2935_);
return v___x_2936_;
}
}
static uint8_t _init_l_main___closed__35(void){
_start:
{
uint8_t v___x_2941_; uint8_t v___x_2942_; uint8_t v___x_2943_; 
v___x_2941_ = 2;
v___x_2942_ = 0;
v___x_2943_ = l_Lean_instOrdOLeanLevel_ord(v___x_2942_, v___x_2941_);
return v___x_2943_;
}
}
static lean_object* _init_l_main___boxed__const__1(void){
_start:
{
uint32_t v___x_2944_; lean_object* v___x_2945_; 
v___x_2944_ = 1;
v___x_2945_ = lean_box_uint32(v___x_2944_);
return v___x_2945_;
}
}
static lean_object* _init_l_main___boxed__const__2(void){
_start:
{
uint32_t v___x_2946_; lean_object* v___x_2947_; 
v___x_2946_ = 0;
v___x_2947_ = lean_box_uint32(v___x_2946_);
return v___x_2947_;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_args_2948_){
_start:
{
if (lean_obj_tag(v_args_2948_) == 1)
{
lean_object* v_tail_2973_; 
v_tail_2973_ = lean_ctor_get(v_args_2948_, 1);
lean_inc(v_tail_2973_);
if (lean_obj_tag(v_tail_2973_) == 1)
{
lean_object* v_tail_2974_; 
v_tail_2974_ = lean_ctor_get(v_tail_2973_, 1);
lean_inc(v_tail_2974_);
if (lean_obj_tag(v_tail_2974_) == 1)
{
lean_object* v_head_2975_; lean_object* v___x_2977_; uint8_t v_isShared_2978_; uint8_t v_isSharedCheck_3663_; 
v_head_2975_ = lean_ctor_get(v_args_2948_, 0);
v_isSharedCheck_3663_ = !lean_is_exclusive(v_args_2948_);
if (v_isSharedCheck_3663_ == 0)
{
lean_object* v_unused_3664_; 
v_unused_3664_ = lean_ctor_get(v_args_2948_, 1);
lean_dec(v_unused_3664_);
v___x_2977_ = v_args_2948_;
v_isShared_2978_ = v_isSharedCheck_3663_;
goto v_resetjp_2976_;
}
else
{
lean_inc(v_head_2975_);
lean_dec(v_args_2948_);
v___x_2977_ = lean_box(0);
v_isShared_2978_ = v_isSharedCheck_3663_;
goto v_resetjp_2976_;
}
v_resetjp_2976_:
{
lean_object* v_head_2979_; lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_3661_; 
v_head_2979_ = lean_ctor_get(v_tail_2973_, 0);
v_isSharedCheck_3661_ = !lean_is_exclusive(v_tail_2973_);
if (v_isSharedCheck_3661_ == 0)
{
lean_object* v_unused_3662_; 
v_unused_3662_ = lean_ctor_get(v_tail_2973_, 1);
lean_dec(v_unused_3662_);
v___x_2981_ = v_tail_2973_;
v_isShared_2982_ = v_isSharedCheck_3661_;
goto v_resetjp_2980_;
}
else
{
lean_inc(v_head_2979_);
lean_dec(v_tail_2973_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_3661_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
lean_object* v_head_2983_; lean_object* v_tail_2984_; lean_object* v___x_2986_; uint8_t v_isShared_2987_; uint8_t v_isSharedCheck_3660_; 
v_head_2983_ = lean_ctor_get(v_tail_2974_, 0);
v_tail_2984_ = lean_ctor_get(v_tail_2974_, 1);
v_isSharedCheck_3660_ = !lean_is_exclusive(v_tail_2974_);
if (v_isSharedCheck_3660_ == 0)
{
v___x_2986_ = v_tail_2974_;
v_isShared_2987_ = v_isSharedCheck_3660_;
goto v_resetjp_2985_;
}
else
{
lean_inc(v_tail_2984_);
lean_inc(v_head_2983_);
lean_dec(v_tail_2974_);
v___x_2986_ = lean_box(0);
v_isShared_2987_ = v_isSharedCheck_3660_;
goto v_resetjp_2985_;
}
v_resetjp_2985_:
{
lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; 
v___x_2988_ = lean_obj_once(&l_main___closed__1, &l_main___closed__1_once, _init_l_main___closed__1);
v___x_2989_ = lean_box(0);
v___x_2990_ = lean_obj_once(&l_main___closed__2, &l_main___closed__2_once, _init_l_main___closed__2);
v___x_2991_ = lean_obj_once(&l_main___closed__3, &l_main___closed__3_once, _init_l_main___closed__3);
v___x_2992_ = lean_obj_once(&l_main___closed__4, &l_main___closed__4_once, _init_l_main___closed__4);
v___x_2993_ = lean_obj_once(&l_main___closed__6, &l_main___closed__6_once, _init_l_main___closed__6);
v___x_2994_ = lean_obj_once(&l_main___closed__7, &l_main___closed__7_once, _init_l_main___closed__7);
v___x_2995_ = lean_box(1);
v___x_2996_ = ((lean_object*)(l_main___closed__8));
v___x_2997_ = l_Lean_ModuleSetup_load(v_head_2975_);
lean_dec(v_head_2975_);
if (lean_obj_tag(v___x_2997_) == 0)
{
lean_object* v_a_2998_; lean_object* v_name_2999_; lean_object* v_package_x3f_3000_; lean_object* v_importArts_3001_; lean_object* v_options_3002_; lean_object* v___f_3003_; uint8_t v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3008_; 
v_a_2998_ = lean_ctor_get(v___x_2997_, 0);
lean_inc(v_a_2998_);
lean_dec_ref_known(v___x_2997_, 1);
v_name_2999_ = lean_ctor_get(v_a_2998_, 0);
lean_inc(v_name_2999_);
v_package_x3f_3000_ = lean_ctor_get(v_a_2998_, 1);
lean_inc(v_package_x3f_3000_);
v_importArts_3001_ = lean_ctor_get(v_a_2998_, 3);
lean_inc(v_importArts_3001_);
v_options_3002_ = lean_ctor_get(v_a_2998_, 6);
lean_inc(v_options_3002_);
lean_dec(v_a_2998_);
v___f_3003_ = lean_alloc_closure((void*)(l_main___lam__0), 2, 1);
lean_closure_set(v___f_3003_, 0, v_package_x3f_3000_);
v___x_3004_ = 0;
v___x_3005_ = l_Lean_LeanOptions_toOptions(v_options_3002_);
v___x_3006_ = lean_box(v___x_3004_);
if (v_isShared_2987_ == 0)
{
lean_ctor_set_tag(v___x_2986_, 0);
lean_ctor_set(v___x_2986_, 1, v___x_3005_);
lean_ctor_set(v___x_2986_, 0, v___x_3006_);
v___x_3008_ = v___x_2986_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v___x_3006_);
lean_ctor_set(v_reuseFailAlloc_3651_, 1, v___x_3005_);
v___x_3008_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
lean_object* v___x_3009_; 
v___x_3009_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_tail_2984_, v___x_3008_);
lean_dec(v_tail_2984_);
if (lean_obj_tag(v___x_3009_) == 0)
{
lean_object* v_a_3010_; lean_object* v_fst_3011_; lean_object* v_snd_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3642_; 
v_a_3010_ = lean_ctor_get(v___x_3009_, 0);
lean_inc(v_a_3010_);
lean_dec_ref_known(v___x_3009_, 1);
v_fst_3011_ = lean_ctor_get(v_a_3010_, 0);
v_snd_3012_ = lean_ctor_get(v_a_3010_, 1);
v_isSharedCheck_3642_ = !lean_is_exclusive(v_a_3010_);
if (v_isSharedCheck_3642_ == 0)
{
v___x_3014_ = v_a_3010_;
v_isShared_3015_ = v_isSharedCheck_3642_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_snd_3012_);
lean_inc(v_fst_3011_);
lean_dec(v_a_3010_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3642_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3016_; uint8_t v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___y_3023_; lean_object* v___y_3024_; lean_object* v___y_3025_; lean_object* v___y_3026_; lean_object* v___y_3027_; lean_object* v___y_3028_; lean_object* v___y_3029_; uint8_t v___y_3030_; uint8_t v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3044_; lean_object* v___y_3183_; lean_object* v___y_3184_; lean_object* v___y_3185_; lean_object* v___y_3186_; lean_object* v___y_3187_; lean_object* v___y_3188_; lean_object* v___y_3189_; uint8_t v___y_3190_; uint8_t v___y_3191_; lean_object* v___y_3192_; lean_object* v_nextMacroScope_3193_; lean_object* v_ngen_3194_; lean_object* v_auxDeclNGen_3195_; lean_object* v_traceState_3196_; lean_object* v_recordedDeps_3197_; lean_object* v_messages_3198_; lean_object* v_infoState_3199_; lean_object* v_snapshotTasks_3200_; lean_object* v___y_3201_; lean_object* v___y_3202_; lean_object* v___y_3203_; lean_object* v___y_3204_; lean_object* v___y_3205_; lean_object* v___y_3206_; lean_object* v___y_3207_; lean_object* v___y_3208_; lean_object* v___y_3209_; lean_object* v___y_3210_; lean_object* v___y_3211_; lean_object* v___y_3212_; lean_object* v___y_3213_; lean_object* v___y_3214_; lean_object* v___y_3215_; lean_object* v___y_3216_; lean_object* v___y_3230_; lean_object* v___y_3231_; lean_object* v___y_3232_; lean_object* v___y_3233_; lean_object* v___y_3234_; lean_object* v___y_3235_; lean_object* v___y_3236_; uint8_t v___y_3237_; uint8_t v___y_3238_; lean_object* v___y_3239_; lean_object* v___y_3240_; lean_object* v___y_3241_; lean_object* v___y_3242_; lean_object* v___y_3243_; lean_object* v___y_3244_; lean_object* v___y_3245_; uint16_t v___y_3246_; lean_object* v___y_3247_; lean_object* v___y_3248_; lean_object* v___y_3249_; lean_object* v___y_3250_; lean_object* v___y_3251_; lean_object* v___y_3252_; lean_object* v___y_3253_; lean_object* v___y_3254_; lean_object* v_fileName_3255_; lean_object* v_fileMap_3256_; lean_object* v_currNamespace_3257_; lean_object* v_openDecls_3258_; lean_object* v_initHeartbeats_3259_; lean_object* v_maxHeartbeats_3260_; lean_object* v_quotContext_3261_; lean_object* v_currMacroScope_3262_; lean_object* v_cancelTk_x3f_3263_; lean_object* v_inheritedTraceOptions_3264_; lean_object* v_currRecDepth_3265_; lean_object* v_ref_3266_; uint8_t v_suppressElabErrors_3267_; uint8_t v_checkDeprecated_3268_; uint8_t v_isRecordingDeps_3269_; lean_object* v___y_3270_; lean_object* v___y_3293_; lean_object* v___y_3294_; lean_object* v___y_3295_; lean_object* v___y_3296_; lean_object* v___y_3297_; lean_object* v___y_3298_; lean_object* v___y_3299_; uint8_t v___y_3300_; uint8_t v___y_3301_; lean_object* v___y_3302_; lean_object* v___y_3303_; lean_object* v___y_3304_; lean_object* v___y_3305_; lean_object* v___y_3306_; uint8_t v___y_3307_; lean_object* v___y_3308_; lean_object* v___y_3309_; uint16_t v___y_3310_; lean_object* v___y_3311_; lean_object* v___y_3312_; lean_object* v___y_3313_; lean_object* v___y_3314_; lean_object* v___y_3315_; lean_object* v___y_3316_; lean_object* v___y_3317_; lean_object* v___y_3318_; lean_object* v___y_3319_; lean_object* v___x_3356_; 
v___x_3016_ = l_Lean_Compiler_compiler_inLeanIR;
v___x_3017_ = 1;
v___x_3018_ = l_Lean_Option_set___at___00Lean_Environment_realizeConst_spec__0(v_snd_3012_, v___x_3016_, v___x_3017_);
v___x_3019_ = l_Lean_maxHeartbeats;
v___x_3020_ = lean_unsigned_to_nat(0u);
v___x_3021_ = l_Lean_Option_set___at___00main_spec__3(v___x_3018_, v___x_3019_, v___x_3020_);
v___x_3356_ = lean_init_search_path();
if (lean_obj_tag(v___x_3356_) == 0)
{
lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; uint8_t v___x_3362_; lean_object* v___y_3364_; lean_object* v___y_3365_; lean_object* v___y_3366_; lean_object* v___y_3367_; lean_object* v___y_3477_; lean_object* v___y_3478_; lean_object* v___y_3479_; lean_object* v___y_3480_; lean_object* v___y_3481_; lean_object* v___y_3482_; uint8_t v___y_3483_; lean_object* v___y_3484_; lean_object* v___y_3494_; lean_object* v___y_3495_; lean_object* v___y_3496_; lean_object* v___y_3497_; lean_object* v___y_3512_; lean_object* v___y_3513_; lean_object* v___y_3514_; lean_object* v___y_3515_; lean_object* v___y_3516_; lean_object* v___y_3517_; lean_object* v___y_3523_; lean_object* v___y_3524_; lean_object* v___y_3525_; lean_object* v___y_3526_; lean_object* v___y_3527_; lean_object* v___y_3534_; lean_object* v___y_3535_; uint8_t v___y_3606_; uint8_t v___x_3633_; 
lean_dec_ref_known(v___x_3356_, 1);
v___x_3357_ = ((lean_object*)(l_main___closed__18));
lean_inc(v_name_2999_);
v___x_3358_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_3358_, 0, v_name_2999_);
lean_ctor_set_uint8(v___x_3358_, sizeof(void*)*1, v___x_3017_);
lean_ctor_set_uint8(v___x_3358_, sizeof(void*)*1 + 1, v___x_3017_);
lean_ctor_set_uint8(v___x_3358_, sizeof(void*)*1 + 2, v___x_3004_);
v___x_3359_ = lean_unsigned_to_nat(1u);
v___x_3360_ = lean_mk_empty_array_with_capacity(v___x_3359_);
v___x_3361_ = lean_array_push(v___x_3360_, v___x_3358_);
v___x_3362_ = 0;
v___x_3633_ = lean_uint8_once(&l_main___closed__35, &l_main___closed__35_once, _init_l_main___closed__35);
if (v___x_3633_ == 0)
{
v___y_3606_ = v___x_3017_;
goto v___jp_3605_;
}
else
{
v___y_3606_ = v___x_3004_;
goto v___jp_3605_;
}
v___jp_3363_:
{
lean_object* v___x_3368_; lean_object* v_moduleData_3369_; lean_object* v___x_3370_; uint8_t v___x_3371_; 
v___x_3368_ = l_Lean_Environment_header(v___y_3367_);
v_moduleData_3369_ = lean_ctor_get(v___x_3368_, 7);
lean_inc_ref(v_moduleData_3369_);
lean_dec_ref(v___x_3368_);
v___x_3370_ = lean_array_get_size(v_moduleData_3369_);
v___x_3371_ = lean_nat_dec_lt(v___y_3365_, v___x_3370_);
if (v___x_3371_ == 0)
{
lean_object* v___x_3372_; lean_object* v___x_3373_; 
lean_dec_ref(v_moduleData_3369_);
lean_dec_ref(v___y_3367_);
lean_dec(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec(v___y_3364_);
lean_dec_ref(v___x_3021_);
lean_del_object(v___x_3014_);
lean_dec(v_fst_3011_);
lean_dec(v_name_2999_);
lean_dec(v_head_2983_);
lean_del_object(v___x_2981_);
lean_dec(v_head_2979_);
v___x_3372_ = lean_obj_once(&l_main___closed__19, &l_main___closed__19_once, _init_l_main___closed__19);
v___x_3373_ = l_panic___at___00main_spec__5(v___x_3372_);
return v___x_3373_;
}
else
{
lean_object* v_base_3374_; lean_object* v_private_3375_; lean_object* v_header_3376_; lean_object* v_serverBaseExts_3377_; lean_object* v_checked_3378_; lean_object* v_asyncConstsMap_3379_; lean_object* v_asyncCtx_x3f_3380_; lean_object* v_importRealizationCtx_x3f_3381_; lean_object* v_localRealizationCtxMap_3382_; lean_object* v_allRealizations_3383_; uint8_t v_isExporting_3384_; uint8_t v_isRecordingDeps_3385_; lean_object* v_synthCacheRaw_x3f_3386_; lean_object* v_declChangeLog_3387_; lean_object* v_recordingConstGen_3388_; lean_object* v_constAddedGens_3389_; lean_object* v_constGen_3390_; lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3474_; 
v_base_3374_ = lean_ctor_get(v___y_3367_, 0);
lean_inc_ref(v_base_3374_);
v_private_3375_ = lean_ctor_get(v_base_3374_, 0);
lean_inc(v_private_3375_);
v_header_3376_ = lean_ctor_get(v_private_3375_, 7);
lean_inc_ref(v_header_3376_);
v_serverBaseExts_3377_ = lean_ctor_get(v___y_3367_, 1);
v_checked_3378_ = lean_ctor_get(v___y_3367_, 2);
v_asyncConstsMap_3379_ = lean_ctor_get(v___y_3367_, 3);
v_asyncCtx_x3f_3380_ = lean_ctor_get(v___y_3367_, 4);
v_importRealizationCtx_x3f_3381_ = lean_ctor_get(v___y_3367_, 5);
v_localRealizationCtxMap_3382_ = lean_ctor_get(v___y_3367_, 6);
v_allRealizations_3383_ = lean_ctor_get(v___y_3367_, 7);
v_isExporting_3384_ = lean_ctor_get_uint8(v___y_3367_, sizeof(void*)*13);
v_isRecordingDeps_3385_ = lean_ctor_get_uint8(v___y_3367_, sizeof(void*)*13 + 1);
v_synthCacheRaw_x3f_3386_ = lean_ctor_get(v___y_3367_, 8);
v_declChangeLog_3387_ = lean_ctor_get(v___y_3367_, 9);
v_recordingConstGen_3388_ = lean_ctor_get(v___y_3367_, 10);
v_constAddedGens_3389_ = lean_ctor_get(v___y_3367_, 11);
v_constGen_3390_ = lean_ctor_get(v___y_3367_, 12);
v_isSharedCheck_3474_ = !lean_is_exclusive(v___y_3367_);
if (v_isSharedCheck_3474_ == 0)
{
lean_object* v_unused_3475_; 
v_unused_3475_ = lean_ctor_get(v___y_3367_, 0);
lean_dec(v_unused_3475_);
v___x_3392_ = v___y_3367_;
v_isShared_3393_ = v_isSharedCheck_3474_;
goto v_resetjp_3391_;
}
else
{
lean_inc(v_constGen_3390_);
lean_inc(v_constAddedGens_3389_);
lean_inc(v_recordingConstGen_3388_);
lean_inc(v_declChangeLog_3387_);
lean_inc(v_synthCacheRaw_x3f_3386_);
lean_inc(v_allRealizations_3383_);
lean_inc(v_localRealizationCtxMap_3382_);
lean_inc(v_importRealizationCtx_x3f_3381_);
lean_inc(v_asyncCtx_x3f_3380_);
lean_inc(v_asyncConstsMap_3379_);
lean_inc(v_checked_3378_);
lean_inc(v_serverBaseExts_3377_);
lean_dec(v___y_3367_);
v___x_3392_ = lean_box(0);
v_isShared_3393_ = v_isSharedCheck_3474_;
goto v_resetjp_3391_;
}
v_resetjp_3391_:
{
lean_object* v_public_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3472_; 
v_public_3394_ = lean_ctor_get(v_base_3374_, 1);
v_isSharedCheck_3472_ = !lean_is_exclusive(v_base_3374_);
if (v_isSharedCheck_3472_ == 0)
{
lean_object* v_unused_3473_; 
v_unused_3473_ = lean_ctor_get(v_base_3374_, 0);
lean_dec(v_unused_3473_);
v___x_3396_ = v_base_3374_;
v_isShared_3397_ = v_isSharedCheck_3472_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_public_3394_);
lean_dec(v_base_3374_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3472_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
lean_object* v_constants_3398_; uint8_t v_quotInit_3399_; lean_object* v_diagnostics_3400_; lean_object* v_importedExtraConsts_3401_; lean_object* v_extensions_3402_; lean_object* v_irBaseExts_3403_; lean_object* v_extGens_3404_; lean_object* v_trackedGen_3405_; lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3470_; 
v_constants_3398_ = lean_ctor_get(v_private_3375_, 0);
v_quotInit_3399_ = lean_ctor_get_uint8(v_private_3375_, sizeof(void*)*8);
v_diagnostics_3400_ = lean_ctor_get(v_private_3375_, 1);
v_importedExtraConsts_3401_ = lean_ctor_get(v_private_3375_, 2);
v_extensions_3402_ = lean_ctor_get(v_private_3375_, 3);
v_irBaseExts_3403_ = lean_ctor_get(v_private_3375_, 4);
v_extGens_3404_ = lean_ctor_get(v_private_3375_, 5);
v_trackedGen_3405_ = lean_ctor_get(v_private_3375_, 6);
v_isSharedCheck_3470_ = !lean_is_exclusive(v_private_3375_);
if (v_isSharedCheck_3470_ == 0)
{
lean_object* v_unused_3471_; 
v_unused_3471_ = lean_ctor_get(v_private_3375_, 7);
lean_dec(v_unused_3471_);
v___x_3407_ = v_private_3375_;
v_isShared_3408_ = v_isSharedCheck_3470_;
goto v_resetjp_3406_;
}
else
{
lean_inc(v_trackedGen_3405_);
lean_inc(v_extGens_3404_);
lean_inc(v_irBaseExts_3403_);
lean_inc(v_extensions_3402_);
lean_inc(v_importedExtraConsts_3401_);
lean_inc(v_diagnostics_3400_);
lean_inc(v_constants_3398_);
lean_dec(v_private_3375_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3470_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
uint32_t v_trustLevel_3409_; lean_object* v_mainModule_3410_; uint8_t v_isModule_3411_; lean_object* v_regions_3412_; lean_object* v_modules_3413_; lean_object* v_moduleNames_3414_; lean_object* v_moduleName2Idx_3415_; lean_object* v_importAllModules_3416_; lean_object* v_moduleData_3417_; lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3468_; 
v_trustLevel_3409_ = lean_ctor_get_uint32(v_header_3376_, sizeof(void*)*8);
v_mainModule_3410_ = lean_ctor_get(v_header_3376_, 0);
v_isModule_3411_ = lean_ctor_get_uint8(v_header_3376_, sizeof(void*)*8 + 4);
v_regions_3412_ = lean_ctor_get(v_header_3376_, 2);
v_modules_3413_ = lean_ctor_get(v_header_3376_, 3);
v_moduleNames_3414_ = lean_ctor_get(v_header_3376_, 4);
v_moduleName2Idx_3415_ = lean_ctor_get(v_header_3376_, 5);
v_importAllModules_3416_ = lean_ctor_get(v_header_3376_, 6);
v_moduleData_3417_ = lean_ctor_get(v_header_3376_, 7);
v_isSharedCheck_3468_ = !lean_is_exclusive(v_header_3376_);
if (v_isSharedCheck_3468_ == 0)
{
lean_object* v_unused_3469_; 
v_unused_3469_ = lean_ctor_get(v_header_3376_, 1);
lean_dec(v_unused_3469_);
v___x_3419_ = v_header_3376_;
v_isShared_3420_ = v_isSharedCheck_3468_;
goto v_resetjp_3418_;
}
else
{
lean_inc(v_moduleData_3417_);
lean_inc(v_importAllModules_3416_);
lean_inc(v_moduleName2Idx_3415_);
lean_inc(v_moduleNames_3414_);
lean_inc(v_modules_3413_);
lean_inc(v_regions_3412_);
lean_inc(v_mainModule_3410_);
lean_dec(v_header_3376_);
v___x_3419_ = lean_box(0);
v_isShared_3420_ = v_isSharedCheck_3468_;
goto v_resetjp_3418_;
}
v_resetjp_3418_:
{
lean_object* v___x_3421_; lean_object* v_imports_3422_; lean_object* v___x_3424_; 
v___x_3421_ = lean_array_fget(v_moduleData_3369_, v___y_3365_);
lean_dec_ref(v_moduleData_3369_);
v_imports_3422_ = lean_ctor_get(v___x_3421_, 0);
lean_inc_ref(v_imports_3422_);
lean_dec(v___x_3421_);
if (v_isShared_3420_ == 0)
{
lean_ctor_set(v___x_3419_, 1, v_imports_3422_);
v___x_3424_ = v___x_3419_;
goto v_reusejp_3423_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v_mainModule_3410_);
lean_ctor_set(v_reuseFailAlloc_3467_, 1, v_imports_3422_);
lean_ctor_set(v_reuseFailAlloc_3467_, 2, v_regions_3412_);
lean_ctor_set(v_reuseFailAlloc_3467_, 3, v_modules_3413_);
lean_ctor_set(v_reuseFailAlloc_3467_, 4, v_moduleNames_3414_);
lean_ctor_set(v_reuseFailAlloc_3467_, 5, v_moduleName2Idx_3415_);
lean_ctor_set(v_reuseFailAlloc_3467_, 6, v_importAllModules_3416_);
lean_ctor_set(v_reuseFailAlloc_3467_, 7, v_moduleData_3417_);
lean_ctor_set_uint32(v_reuseFailAlloc_3467_, sizeof(void*)*8, v_trustLevel_3409_);
lean_ctor_set_uint8(v_reuseFailAlloc_3467_, sizeof(void*)*8 + 4, v_isModule_3411_);
v___x_3424_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3423_;
}
v_reusejp_3423_:
{
lean_object* v___x_3426_; 
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 7, v___x_3424_);
v___x_3426_ = v___x_3407_;
goto v_reusejp_3425_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v_constants_3398_);
lean_ctor_set(v_reuseFailAlloc_3466_, 1, v_diagnostics_3400_);
lean_ctor_set(v_reuseFailAlloc_3466_, 2, v_importedExtraConsts_3401_);
lean_ctor_set(v_reuseFailAlloc_3466_, 3, v_extensions_3402_);
lean_ctor_set(v_reuseFailAlloc_3466_, 4, v_irBaseExts_3403_);
lean_ctor_set(v_reuseFailAlloc_3466_, 5, v_extGens_3404_);
lean_ctor_set(v_reuseFailAlloc_3466_, 6, v_trackedGen_3405_);
lean_ctor_set(v_reuseFailAlloc_3466_, 7, v___x_3424_);
lean_ctor_set_uint8(v_reuseFailAlloc_3466_, sizeof(void*)*8, v_quotInit_3399_);
v___x_3426_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3425_;
}
v_reusejp_3425_:
{
lean_object* v___x_3428_; 
if (v_isShared_3397_ == 0)
{
lean_ctor_set(v___x_3396_, 0, v___x_3426_);
v___x_3428_ = v___x_3396_;
goto v_reusejp_3427_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v___x_3426_);
lean_ctor_set(v_reuseFailAlloc_3465_, 1, v_public_3394_);
v___x_3428_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3427_;
}
v_reusejp_3427_:
{
lean_object* v___x_3430_; 
if (v_isShared_3393_ == 0)
{
lean_ctor_set(v___x_3392_, 0, v___x_3428_);
v___x_3430_ = v___x_3392_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(0, 13, 2);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v___x_3428_);
lean_ctor_set(v_reuseFailAlloc_3464_, 1, v_serverBaseExts_3377_);
lean_ctor_set(v_reuseFailAlloc_3464_, 2, v_checked_3378_);
lean_ctor_set(v_reuseFailAlloc_3464_, 3, v_asyncConstsMap_3379_);
lean_ctor_set(v_reuseFailAlloc_3464_, 4, v_asyncCtx_x3f_3380_);
lean_ctor_set(v_reuseFailAlloc_3464_, 5, v_importRealizationCtx_x3f_3381_);
lean_ctor_set(v_reuseFailAlloc_3464_, 6, v_localRealizationCtxMap_3382_);
lean_ctor_set(v_reuseFailAlloc_3464_, 7, v_allRealizations_3383_);
lean_ctor_set(v_reuseFailAlloc_3464_, 8, v_synthCacheRaw_x3f_3386_);
lean_ctor_set(v_reuseFailAlloc_3464_, 9, v_declChangeLog_3387_);
lean_ctor_set(v_reuseFailAlloc_3464_, 10, v_recordingConstGen_3388_);
lean_ctor_set(v_reuseFailAlloc_3464_, 11, v_constAddedGens_3389_);
lean_ctor_set(v_reuseFailAlloc_3464_, 12, v_constGen_3390_);
lean_ctor_set_uint8(v_reuseFailAlloc_3464_, sizeof(void*)*13, v_isExporting_3384_);
lean_ctor_set_uint8(v_reuseFailAlloc_3464_, sizeof(void*)*13 + 1, v_isRecordingDeps_3385_);
v___x_3430_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; uint16_t v___x_3439_; uint8_t v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v_env_3458_; uint8_t v___x_3459_; uint16_t v___x_3460_; uint16_t v___x_3461_; uint16_t v___x_3462_; uint8_t v___x_3463_; 
v___x_3431_ = l_Lean_Compiler_LCNF_postponedCompileDeclsExt;
v___x_3432_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2996_, v___x_3431_, v___x_3430_, v___y_3365_, v___x_3362_);
lean_dec(v___y_3365_);
v___x_3433_ = l_Lean_instInhabitedFileMap_default;
v___x_3434_ = lean_unsigned_to_nat(1000u);
v___x_3435_ = l_Lean_Core_getMaxHeartbeats(v___x_3021_);
v___x_3436_ = l_Lean_firstFrontendMacroScope;
v___x_3437_ = lean_box(0);
v___x_3438_ = lean_box(0);
v___x_3439_ = l_Lean_OptionFlags_ofOptions(v___x_3021_);
v___x_3440_ = 0;
v___x_3441_ = lean_obj_once(&l_main___closed__20, &l_main___closed__20_once, _init_l_main___closed__20);
v___x_3442_ = ((lean_object*)(l_main___closed__23));
lean_inc_n(v___y_3366_, 3);
v___x_3443_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3443_, 0, v___y_3366_);
lean_ctor_set(v___x_3443_, 1, v___x_3359_);
lean_ctor_set(v___x_3443_, 2, v___x_2989_);
v___x_3444_ = lean_obj_once(&l_main___closed__24, &l_main___closed__24_once, _init_l_main___closed__24);
v___x_3445_ = lean_obj_once(&l_main___closed__27, &l_main___closed__27_once, _init_l_main___closed__27);
v___x_3446_ = ((lean_object*)(l_main___closed__28));
v___x_3447_ = l_Lean_Options_empty;
v___x_3448_ = lean_obj_once(&l_main___closed__29, &l_main___closed__29_once, _init_l_main___closed__29);
v___x_3449_ = lean_obj_once(&l_main___closed__30, &l_main___closed__30_once, _init_l_main___closed__30);
v___x_3450_ = lean_obj_once(&l_main___closed__31, &l_main___closed__31_once, _init_l_main___closed__31);
lean_inc_ref(v___x_3443_);
v___x_3451_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3430_);
lean_ctor_set(v___x_3451_, 1, v___x_3441_);
lean_ctor_set(v___x_3451_, 2, v___x_3442_);
lean_ctor_set(v___x_3451_, 3, v___x_3443_);
lean_ctor_set(v___x_3451_, 4, v___x_3444_);
lean_ctor_set(v___x_3451_, 5, v___x_3445_);
lean_ctor_set(v___x_3451_, 6, v___x_3448_);
lean_ctor_set(v___x_3451_, 7, v___x_3449_);
lean_ctor_set(v___x_3451_, 8, v___x_3450_);
lean_ctor_set(v___x_3451_, 9, v___x_3446_);
v___x_3452_ = lean_st_mk_ref(v___x_3451_);
v___x_3453_ = l_Lean_inheritedTraceOptions;
v___x_3454_ = lean_st_ref_get(v___x_3453_);
lean_inc(v___x_3454_);
lean_inc(v___x_3435_);
lean_inc_ref(v___x_3021_);
lean_inc(v_head_2979_);
v___x_3455_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_3455_, 0, v_head_2979_);
lean_ctor_set(v___x_3455_, 1, v___x_3433_);
lean_ctor_set(v___x_3455_, 2, v___x_3021_);
lean_ctor_set(v___x_3455_, 3, v___x_3434_);
lean_ctor_set(v___x_3455_, 4, v___y_3366_);
lean_ctor_set(v___x_3455_, 5, v___x_2989_);
lean_ctor_set(v___x_3455_, 6, v___x_3020_);
lean_ctor_set(v___x_3455_, 7, v___x_3435_);
lean_ctor_set(v___x_3455_, 8, v___y_3366_);
lean_ctor_set(v___x_3455_, 9, v___x_3436_);
lean_ctor_set(v___x_3455_, 10, v___x_3437_);
lean_ctor_set(v___x_3455_, 11, v___x_3454_);
v___x_3456_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3456_, 0, v___x_3455_);
lean_ctor_set(v___x_3456_, 1, v___x_3020_);
lean_ctor_set(v___x_3456_, 2, v___x_3438_);
lean_ctor_set_uint16(v___x_3456_, sizeof(void*)*3, v___x_3439_);
lean_ctor_set_uint8(v___x_3456_, sizeof(void*)*3 + 2, v___x_3004_);
lean_ctor_set_uint8(v___x_3456_, sizeof(void*)*3 + 3, v___x_3440_);
lean_ctor_set_uint8(v___x_3456_, sizeof(void*)*3 + 4, v___x_3004_);
v___x_3457_ = lean_st_ref_get(v___x_3452_);
v_env_3458_ = lean_ctor_get(v___x_3457_, 0);
lean_inc_ref(v_env_3458_);
lean_dec(v___x_3457_);
v___x_3459_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_3458_);
lean_dec_ref(v_env_3458_);
v___x_3460_ = 512;
v___x_3461_ = lean_uint16_land(v___x_3439_, v___x_3460_);
v___x_3462_ = 0;
v___x_3463_ = lean_uint16_dec_eq(v___x_3461_, v___x_3462_);
if (v___x_3463_ == 0)
{
if (v___x_3459_ == 0)
{
lean_dec(v___x_3454_);
lean_dec(v___x_3435_);
v___y_3293_ = v___x_3447_;
v___y_3294_ = v___x_3433_;
v___y_3295_ = v___x_3436_;
v___y_3296_ = v___x_3437_;
v___y_3297_ = v___y_3364_;
v___y_3298_ = v___x_3445_;
v___y_3299_ = v___x_3438_;
v___y_3300_ = v___x_3371_;
v___y_3301_ = v___x_3440_;
v___y_3302_ = v___x_2989_;
v___y_3303_ = v___x_3446_;
v___y_3304_ = v___x_3443_;
v___y_3305_ = v___x_3447_;
v___y_3306_ = v___y_3366_;
v___y_3307_ = v___x_3371_;
v___y_3308_ = v___x_3441_;
v___y_3309_ = v___x_3432_;
v___y_3310_ = v___x_3439_;
v___y_3311_ = v___x_3448_;
v___y_3312_ = v___x_3442_;
v___y_3313_ = v___x_3444_;
v___y_3314_ = v___x_3456_;
v___y_3315_ = v___x_3452_;
v___y_3316_ = v___x_3450_;
v___y_3317_ = v___x_3445_;
v___y_3318_ = v___x_3449_;
v___y_3319_ = v___x_3431_;
goto v___jp_3292_;
}
else
{
lean_dec_ref_known(v___x_3456_, 3);
lean_inc(v_head_2979_);
lean_inc(v___x_3452_);
lean_inc_n(v___y_3366_, 2);
v___y_3230_ = v___x_3436_;
v___y_3231_ = v___x_3433_;
v___y_3232_ = v___x_3447_;
v___y_3233_ = v___x_3437_;
v___y_3234_ = v___y_3364_;
v___y_3235_ = v___x_3445_;
v___y_3236_ = v___x_3438_;
v___y_3237_ = v___x_3440_;
v___y_3238_ = v___x_3371_;
v___y_3239_ = v___x_2989_;
v___y_3240_ = v___x_3446_;
v___y_3241_ = v___x_3443_;
v___y_3242_ = v___x_3447_;
v___y_3243_ = v___y_3366_;
v___y_3244_ = v___x_3441_;
v___y_3245_ = v___x_3432_;
v___y_3246_ = v___x_3439_;
v___y_3247_ = v___x_3448_;
v___y_3248_ = v___x_3442_;
v___y_3249_ = v___x_3444_;
v___y_3250_ = v___x_3452_;
v___y_3251_ = v___x_3450_;
v___y_3252_ = v___x_3445_;
v___y_3253_ = v___x_3449_;
v___y_3254_ = v___x_3431_;
v_fileName_3255_ = v_head_2979_;
v_fileMap_3256_ = v___x_3433_;
v_currNamespace_3257_ = v___y_3366_;
v_openDecls_3258_ = v___x_2989_;
v_initHeartbeats_3259_ = v___x_3020_;
v_maxHeartbeats_3260_ = v___x_3435_;
v_quotContext_3261_ = v___y_3366_;
v_currMacroScope_3262_ = v___x_3436_;
v_cancelTk_x3f_3263_ = v___x_3437_;
v_inheritedTraceOptions_3264_ = v___x_3454_;
v_currRecDepth_3265_ = v___x_3020_;
v_ref_3266_ = v___x_3438_;
v_suppressElabErrors_3267_ = v___x_3004_;
v_checkDeprecated_3268_ = v___x_3440_;
v_isRecordingDeps_3269_ = v___x_3004_;
v___y_3270_ = v___x_3452_;
goto v___jp_3229_;
}
}
else
{
if (v___x_3459_ == 0)
{
lean_dec_ref_known(v___x_3456_, 3);
lean_inc(v_head_2979_);
lean_inc(v___x_3452_);
lean_inc_n(v___y_3366_, 2);
v___y_3230_ = v___x_3436_;
v___y_3231_ = v___x_3433_;
v___y_3232_ = v___x_3447_;
v___y_3233_ = v___x_3437_;
v___y_3234_ = v___y_3364_;
v___y_3235_ = v___x_3445_;
v___y_3236_ = v___x_3438_;
v___y_3237_ = v___x_3440_;
v___y_3238_ = v___x_3371_;
v___y_3239_ = v___x_2989_;
v___y_3240_ = v___x_3446_;
v___y_3241_ = v___x_3443_;
v___y_3242_ = v___x_3447_;
v___y_3243_ = v___y_3366_;
v___y_3244_ = v___x_3441_;
v___y_3245_ = v___x_3432_;
v___y_3246_ = v___x_3439_;
v___y_3247_ = v___x_3448_;
v___y_3248_ = v___x_3442_;
v___y_3249_ = v___x_3444_;
v___y_3250_ = v___x_3452_;
v___y_3251_ = v___x_3450_;
v___y_3252_ = v___x_3445_;
v___y_3253_ = v___x_3449_;
v___y_3254_ = v___x_3431_;
v_fileName_3255_ = v_head_2979_;
v_fileMap_3256_ = v___x_3433_;
v_currNamespace_3257_ = v___y_3366_;
v_openDecls_3258_ = v___x_2989_;
v_initHeartbeats_3259_ = v___x_3020_;
v_maxHeartbeats_3260_ = v___x_3435_;
v_quotContext_3261_ = v___y_3366_;
v_currMacroScope_3262_ = v___x_3436_;
v_cancelTk_x3f_3263_ = v___x_3437_;
v_inheritedTraceOptions_3264_ = v___x_3454_;
v_currRecDepth_3265_ = v___x_3020_;
v_ref_3266_ = v___x_3438_;
v_suppressElabErrors_3267_ = v___x_3004_;
v_checkDeprecated_3268_ = v___x_3440_;
v_isRecordingDeps_3269_ = v___x_3004_;
v___y_3270_ = v___x_3452_;
goto v___jp_3229_;
}
else
{
lean_dec(v___x_3454_);
lean_dec(v___x_3435_);
v___y_3293_ = v___x_3447_;
v___y_3294_ = v___x_3433_;
v___y_3295_ = v___x_3436_;
v___y_3296_ = v___x_3437_;
v___y_3297_ = v___y_3364_;
v___y_3298_ = v___x_3445_;
v___y_3299_ = v___x_3438_;
v___y_3300_ = v___x_3371_;
v___y_3301_ = v___x_3440_;
v___y_3302_ = v___x_2989_;
v___y_3303_ = v___x_3446_;
v___y_3304_ = v___x_3443_;
v___y_3305_ = v___x_3447_;
v___y_3306_ = v___y_3366_;
v___y_3307_ = v___x_3004_;
v___y_3308_ = v___x_3441_;
v___y_3309_ = v___x_3432_;
v___y_3310_ = v___x_3439_;
v___y_3311_ = v___x_3448_;
v___y_3312_ = v___x_3442_;
v___y_3313_ = v___x_3444_;
v___y_3314_ = v___x_3456_;
v___y_3315_ = v___x_3452_;
v___y_3316_ = v___x_3450_;
v___y_3317_ = v___x_3445_;
v___y_3318_ = v___x_3449_;
v___y_3319_ = v___x_3431_;
goto v___jp_3292_;
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
v___jp_3476_:
{
lean_object* v___x_3486_; 
if (v_isShared_2978_ == 0)
{
lean_ctor_set_tag(v___x_2977_, 0);
lean_ctor_set(v___x_2977_, 1, v___y_3484_);
lean_ctor_set(v___x_2977_, 0, v___y_3480_);
v___x_3486_ = v___x_2977_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3492_; 
v_reuseFailAlloc_3492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3492_, 0, v___y_3480_);
lean_ctor_set(v_reuseFailAlloc_3492_, 1, v___y_3484_);
v___x_3486_ = v_reuseFailAlloc_3492_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
lean_object* v___f_3487_; lean_object* v___x_3488_; 
v___f_3487_ = lean_alloc_closure((void*)(l_main___lam__3___boxed), 2, 1);
lean_closure_set(v___f_3487_, 0, v___x_3486_);
v___x_3488_ = lean_box(0);
if (v___y_3483_ == 0)
{
lean_object* v___x_3489_; 
lean_inc(v___y_3481_);
lean_inc_ref(v___y_3482_);
v___x_3489_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v___y_3482_, v___y_3478_, v___f_3487_, v___x_3488_, v___y_3481_, v___x_3017_);
v___y_3364_ = v___y_3477_;
v___y_3365_ = v___y_3479_;
v___y_3366_ = v___y_3481_;
v___y_3367_ = v___x_3489_;
goto v___jp_3363_;
}
else
{
lean_object* v___x_3490_; lean_object* v___x_3491_; 
lean_inc_ref_n(v___y_3482_, 2);
v___x_3490_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite___redArg(v___y_3482_, v___y_3478_);
lean_dec_ref(v___y_3478_);
lean_inc(v___y_3481_);
v___x_3491_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v___y_3482_, v___x_3490_, v___f_3487_, v___x_3488_, v___y_3481_, v___x_3017_);
v___y_3364_ = v___y_3477_;
v___y_3365_ = v___y_3479_;
v___y_3366_ = v___y_3481_;
v___y_3367_ = v___x_3491_;
goto v___jp_3363_;
}
}
}
v___jp_3493_:
{
lean_object* v___x_3498_; lean_object* v_toEnvExtension_3499_; lean_object* v_asyncMode_3500_; uint8_t v_logWrites_3501_; lean_object* v___x_3502_; lean_object* v_importedEntries_3503_; lean_object* v_state_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; uint8_t v___x_3507_; 
v___x_3498_ = l_Lean_IR_declMapExt;
v_toEnvExtension_3499_ = lean_ctor_get(v___x_3498_, 0);
v_asyncMode_3500_ = lean_ctor_get(v_toEnvExtension_3499_, 2);
v_logWrites_3501_ = lean_ctor_get_uint8(v_toEnvExtension_3499_, sizeof(void*)*6);
lean_inc(v___y_3496_);
lean_inc_ref(v___y_3497_);
v___x_3502_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2993_, v_toEnvExtension_3499_, v___y_3497_, v_asyncMode_3500_, v___y_3496_, v___x_3004_);
v_importedEntries_3503_ = lean_ctor_get(v___x_3502_, 0);
lean_inc_ref(v_importedEntries_3503_);
v_state_3504_ = lean_ctor_get(v___x_3502_, 1);
lean_inc(v_state_3504_);
lean_dec(v___x_3502_);
v___x_3505_ = lean_array_get_borrowed(v___x_2994_, v_importedEntries_3503_, v___y_3495_);
v___x_3506_ = lean_array_get_size(v___x_3505_);
v___x_3507_ = lean_nat_dec_lt(v___x_3020_, v___x_3506_);
if (v___x_3507_ == 0)
{
v___y_3477_ = v___y_3494_;
v___y_3478_ = v___y_3497_;
v___y_3479_ = v___y_3495_;
v___y_3480_ = v_importedEntries_3503_;
v___y_3481_ = v___y_3496_;
v___y_3482_ = v_toEnvExtension_3499_;
v___y_3483_ = v_logWrites_3501_;
v___y_3484_ = v_state_3504_;
goto v___jp_3476_;
}
else
{
size_t v___x_3508_; size_t v___x_3509_; lean_object* v___x_3510_; 
v___x_3508_ = ((size_t)0ULL);
v___x_3509_ = lean_usize_of_nat(v___x_3506_);
lean_inc_ref(v___y_3497_);
v___x_3510_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__15(v___y_3497_, v___x_3505_, v___x_3508_, v___x_3509_, v_state_3504_);
v___y_3477_ = v___y_3494_;
v___y_3478_ = v___y_3497_;
v___y_3479_ = v___y_3495_;
v___y_3480_ = v_importedEntries_3503_;
v___y_3481_ = v___y_3496_;
v___y_3482_ = v_toEnvExtension_3499_;
v___y_3483_ = v_logWrites_3501_;
v___y_3484_ = v___x_3510_;
goto v___jp_3476_;
}
}
v___jp_3511_:
{
uint8_t v___x_3518_; 
v___x_3518_ = lean_nat_dec_lt(v___x_3020_, v___y_3516_);
if (v___x_3518_ == 0)
{
lean_dec(v___y_3516_);
lean_dec_ref(v___y_3515_);
v___y_3494_ = v___y_3512_;
v___y_3495_ = v___y_3513_;
v___y_3496_ = v___y_3514_;
v___y_3497_ = v___y_3517_;
goto v___jp_3493_;
}
else
{
size_t v___x_3519_; size_t v___x_3520_; lean_object* v___x_3521_; 
v___x_3519_ = ((size_t)0ULL);
v___x_3520_ = lean_usize_of_nat(v___y_3516_);
lean_dec(v___y_3516_);
v___x_3521_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__16(v___y_3515_, v___x_3519_, v___x_3520_, v___y_3517_);
lean_dec_ref(v___y_3515_);
v___y_3494_ = v___y_3512_;
v___y_3495_ = v___y_3513_;
v___y_3496_ = v___y_3514_;
v___y_3497_ = v___x_3521_;
goto v___jp_3493_;
}
}
v___jp_3522_:
{
lean_object* v___x_3528_; uint8_t v___x_3529_; 
v___x_3528_ = lean_array_get_size(v___y_3527_);
v___x_3529_ = lean_nat_dec_lt(v___x_3020_, v___x_3528_);
if (v___x_3529_ == 0)
{
v___y_3512_ = v___y_3523_;
v___y_3513_ = v___y_3524_;
v___y_3514_ = v___y_3525_;
v___y_3515_ = v___y_3527_;
v___y_3516_ = v___x_3528_;
v___y_3517_ = v___y_3526_;
goto v___jp_3511_;
}
else
{
size_t v___x_3530_; size_t v___x_3531_; lean_object* v___x_3532_; 
v___x_3530_ = ((size_t)0ULL);
v___x_3531_ = lean_usize_of_nat(v___x_3528_);
v___x_3532_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__17(v___y_3527_, v___x_3530_, v___x_3531_, v___y_3526_);
v___y_3512_ = v___y_3523_;
v___y_3513_ = v___y_3524_;
v___y_3514_ = v___y_3525_;
v___y_3515_ = v___y_3527_;
v___y_3516_ = v___x_3528_;
v___y_3517_ = v___x_3532_;
goto v___jp_3511_;
}
}
v___jp_3533_:
{
lean_object* v___x_3536_; lean_object* v_ext_3537_; lean_object* v___x_3538_; 
v___x_3536_ = l_Lean_Compiler_CSimp_ext;
v_ext_3537_ = lean_ctor_get(v___x_3536_, 1);
lean_inc_ref(v_ext_3537_);
lean_inc(v___y_3534_);
v___x_3538_ = l_main___elam__0___redArg(v___y_3534_, v___x_3004_, v___x_2988_, v_ext_3537_, v___y_3535_);
if (lean_obj_tag(v___x_3538_) == 0)
{
lean_object* v_a_3539_; lean_object* v___x_3540_; lean_object* v_ext_3541_; lean_object* v___x_3542_; 
v_a_3539_ = lean_ctor_get(v___x_3538_, 0);
lean_inc(v_a_3539_);
lean_dec_ref_known(v___x_3538_, 1);
v___x_3540_ = l_Lean_Meta_instanceExtension;
v_ext_3541_ = lean_ctor_get(v___x_3540_, 1);
lean_inc_ref(v_ext_3541_);
lean_inc(v___y_3534_);
v___x_3542_ = l_main___elam__0___redArg(v___y_3534_, v___x_3004_, v___x_2988_, v_ext_3541_, v_a_3539_);
if (lean_obj_tag(v___x_3542_) == 0)
{
lean_object* v_a_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; 
v_a_3543_ = lean_ctor_get(v___x_3542_, 0);
lean_inc(v_a_3543_);
lean_dec_ref_known(v___x_3542_, 1);
v___x_3544_ = l_Lean_classExtension;
lean_inc(v___y_3534_);
v___x_3545_ = l_main___elam__0___redArg(v___y_3534_, v___x_3004_, v___x_2990_, v___x_3544_, v_a_3543_);
if (lean_obj_tag(v___x_3545_) == 0)
{
lean_object* v_a_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; 
v_a_3546_ = lean_ctor_get(v___x_3545_, 0);
lean_inc(v_a_3546_);
lean_dec_ref_known(v___x_3545_, 1);
v___x_3547_ = l_Lean_Meta_Match_Extension_extension;
lean_inc(v___y_3534_);
v___x_3548_ = l_main___elam__0___redArg(v___y_3534_, v___x_3004_, v___x_2991_, v___x_3547_, v_a_3546_);
if (lean_obj_tag(v___x_3548_) == 0)
{
lean_object* v_a_3549_; lean_object* v___x_3551_; uint8_t v_isShared_3552_; uint8_t v_isSharedCheck_3572_; 
v_a_3549_ = lean_ctor_get(v___x_3548_, 0);
v_isSharedCheck_3572_ = !lean_is_exclusive(v___x_3548_);
if (v_isSharedCheck_3572_ == 0)
{
v___x_3551_ = v___x_3548_;
v_isShared_3552_ = v_isSharedCheck_3572_;
goto v_resetjp_3550_;
}
else
{
lean_inc(v_a_3549_);
lean_dec(v___x_3548_);
v___x_3551_ = lean_box(0);
v_isShared_3552_ = v_isSharedCheck_3572_;
goto v_resetjp_3550_;
}
v_resetjp_3550_:
{
lean_object* v___x_3553_; 
v___x_3553_ = l_Lean_Environment_getModuleIdx_x3f(v_a_3549_, v_name_2999_);
if (lean_obj_tag(v___x_3553_) == 1)
{
lean_object* v_val_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; uint8_t v___x_3559_; 
lean_del_object(v___x_3551_);
v_val_3554_ = lean_ctor_get(v___x_3553_, 0);
lean_inc(v_val_3554_);
lean_dec_ref_known(v___x_3553_, 1);
v___x_3555_ = l_Lean_Compiler_LCNF_impureSigExt;
v___x_3556_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2992_, v___x_3555_, v_a_3549_, v_val_3554_, v___x_3362_);
v___x_3557_ = lean_array_get_size(v___x_3556_);
v___x_3558_ = ((lean_object*)(l_main___closed__32));
v___x_3559_ = lean_nat_dec_lt(v___x_3020_, v___x_3557_);
if (v___x_3559_ == 0)
{
lean_dec_ref(v___x_3556_);
lean_inc(v___y_3534_);
v___y_3523_ = v___y_3534_;
v___y_3524_ = v_val_3554_;
v___y_3525_ = v___y_3534_;
v___y_3526_ = v_a_3549_;
v___y_3527_ = v___x_3558_;
goto v___jp_3522_;
}
else
{
size_t v___x_3560_; size_t v___x_3561_; lean_object* v___x_3562_; 
v___x_3560_ = ((size_t)0ULL);
v___x_3561_ = lean_usize_of_nat(v___x_3557_);
lean_inc(v_a_3549_);
v___x_3562_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__18(v_a_3549_, v___x_3556_, v___x_3560_, v___x_3561_, v___x_3558_);
lean_dec_ref(v___x_3556_);
lean_inc(v___y_3534_);
v___y_3523_ = v___y_3534_;
v___y_3524_ = v_val_3554_;
v___y_3525_ = v___y_3534_;
v___y_3526_ = v_a_3549_;
v___y_3527_ = v___x_3562_;
goto v___jp_3522_;
}
}
else
{
lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3570_; 
lean_dec(v___x_3553_);
lean_dec(v_a_3549_);
lean_dec(v___y_3534_);
lean_dec_ref(v___x_3021_);
lean_del_object(v___x_3014_);
lean_dec(v_fst_3011_);
lean_dec(v_head_2983_);
lean_del_object(v___x_2981_);
lean_dec(v_head_2979_);
lean_del_object(v___x_2977_);
v___x_3563_ = ((lean_object*)(l_main___closed__33));
v___x_3564_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2999_, v___x_3017_);
v___x_3565_ = lean_string_append(v___x_3563_, v___x_3564_);
lean_dec_ref(v___x_3564_);
v___x_3566_ = ((lean_object*)(l_main___closed__34));
v___x_3567_ = lean_string_append(v___x_3565_, v___x_3566_);
v___x_3568_ = lean_mk_io_user_error(v___x_3567_);
if (v_isShared_3552_ == 0)
{
lean_ctor_set_tag(v___x_3551_, 1);
lean_ctor_set(v___x_3551_, 0, v___x_3568_);
v___x_3570_ = v___x_3551_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v___x_3568_);
v___x_3570_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
return v___x_3570_;
}
}
}
}
else
{
lean_object* v_a_3573_; lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3580_; 
lean_dec(v___y_3534_);
lean_dec_ref(v___x_3021_);
lean_del_object(v___x_3014_);
lean_dec(v_fst_3011_);
lean_dec(v_name_2999_);
lean_dec(v_head_2983_);
lean_del_object(v___x_2981_);
lean_dec(v_head_2979_);
lean_del_object(v___x_2977_);
v_a_3573_ = lean_ctor_get(v___x_3548_, 0);
v_isSharedCheck_3580_ = !lean_is_exclusive(v___x_3548_);
if (v_isSharedCheck_3580_ == 0)
{
v___x_3575_ = v___x_3548_;
v_isShared_3576_ = v_isSharedCheck_3580_;
goto v_resetjp_3574_;
}
else
{
lean_inc(v_a_3573_);
lean_dec(v___x_3548_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3580_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
lean_object* v___x_3578_; 
if (v_isShared_3576_ == 0)
{
v___x_3578_ = v___x_3575_;
goto v_reusejp_3577_;
}
else
{
lean_object* v_reuseFailAlloc_3579_; 
v_reuseFailAlloc_3579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3579_, 0, v_a_3573_);
v___x_3578_ = v_reuseFailAlloc_3579_;
goto v_reusejp_3577_;
}
v_reusejp_3577_:
{
return v___x_3578_;
}
}
}
}
else
{
lean_object* v_a_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3588_; 
lean_dec(v___y_3534_);
lean_dec_ref(v___x_3021_);
lean_del_object(v___x_3014_);
lean_dec(v_fst_3011_);
lean_dec(v_name_2999_);
lean_dec(v_head_2983_);
lean_del_object(v___x_2981_);
lean_dec(v_head_2979_);
lean_del_object(v___x_2977_);
v_a_3581_ = lean_ctor_get(v___x_3545_, 0);
v_isSharedCheck_3588_ = !lean_is_exclusive(v___x_3545_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3583_ = v___x_3545_;
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_a_3581_);
lean_dec(v___x_3545_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
lean_object* v___x_3586_; 
if (v_isShared_3584_ == 0)
{
v___x_3586_ = v___x_3583_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v_a_3581_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
return v___x_3586_;
}
}
}
}
else
{
lean_object* v_a_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3596_; 
lean_dec(v___y_3534_);
lean_dec_ref(v___x_3021_);
lean_del_object(v___x_3014_);
lean_dec(v_fst_3011_);
lean_dec(v_name_2999_);
lean_dec(v_head_2983_);
lean_del_object(v___x_2981_);
lean_dec(v_head_2979_);
lean_del_object(v___x_2977_);
v_a_3589_ = lean_ctor_get(v___x_3542_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v___x_3542_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3591_ = v___x_3542_;
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_a_3589_);
lean_dec(v___x_3542_);
v___x_3591_ = lean_box(0);
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
v_resetjp_3590_:
{
lean_object* v___x_3594_; 
if (v_isShared_3592_ == 0)
{
v___x_3594_ = v___x_3591_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v_a_3589_);
v___x_3594_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
return v___x_3594_;
}
}
}
}
else
{
lean_object* v_a_3597_; lean_object* v___x_3599_; uint8_t v_isShared_3600_; uint8_t v_isSharedCheck_3604_; 
lean_dec(v___y_3534_);
lean_dec_ref(v___x_3021_);
lean_del_object(v___x_3014_);
lean_dec(v_fst_3011_);
lean_dec(v_name_2999_);
lean_dec(v_head_2983_);
lean_del_object(v___x_2981_);
lean_dec(v_head_2979_);
lean_del_object(v___x_2977_);
v_a_3597_ = lean_ctor_get(v___x_3538_, 0);
v_isSharedCheck_3604_ = !lean_is_exclusive(v___x_3538_);
if (v_isSharedCheck_3604_ == 0)
{
v___x_3599_ = v___x_3538_;
v_isShared_3600_ = v_isSharedCheck_3604_;
goto v_resetjp_3598_;
}
else
{
lean_inc(v_a_3597_);
lean_dec(v___x_3538_);
v___x_3599_ = lean_box(0);
v_isShared_3600_ = v_isSharedCheck_3604_;
goto v_resetjp_3598_;
}
v_resetjp_3598_:
{
lean_object* v___x_3602_; 
if (v_isShared_3600_ == 0)
{
v___x_3602_ = v___x_3599_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v_a_3597_);
v___x_3602_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
return v___x_3602_;
}
}
}
}
v___jp_3605_:
{
lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___f_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; 
v___x_3607_ = l_Lean_instInhabitedImportState_default;
v___x_3608_ = lean_box(v___x_3362_);
v___x_3609_ = lean_box(v___y_3606_);
v___x_3610_ = lean_box(v___x_3017_);
v___x_3611_ = lean_box(v___x_3004_);
lean_inc_ref(v___x_3021_);
lean_inc(v_name_2999_);
v___f_3612_ = lean_alloc_closure((void*)(l_main___lam__1___boxed), 10, 9);
lean_closure_set(v___f_3612_, 0, v___x_3607_);
lean_closure_set(v___f_3612_, 1, v___x_3361_);
lean_closure_set(v___f_3612_, 2, v___x_3608_);
lean_closure_set(v___f_3612_, 3, v_importArts_3001_);
lean_closure_set(v___f_3612_, 4, v___x_3609_);
lean_closure_set(v___f_3612_, 5, v___x_3610_);
lean_closure_set(v___f_3612_, 6, v_name_2999_);
lean_closure_set(v___f_3612_, 7, v___x_3021_);
lean_closure_set(v___f_3612_, 8, v___x_3611_);
v___x_3613_ = lean_alloc_closure((void*)(l_Lean_withImporting___boxed), 3, 2);
lean_closure_set(v___x_3613_, 0, lean_box(0));
lean_closure_set(v___x_3613_, 1, v___f_3612_);
v___x_3614_ = lean_box(0);
v___x_3615_ = l_Lean_profileitIOUnsafe___redArg(v___x_3357_, v___x_3021_, v___x_3613_, v___x_3614_);
if (lean_obj_tag(v___x_3615_) == 0)
{
lean_object* v_a_3616_; lean_object* v___x_3617_; lean_object* v_toEnvExtension_3618_; lean_object* v_asyncMode_3619_; uint8_t v_logWrites_3620_; lean_object* v___x_3621_; 
v_a_3616_ = lean_ctor_get(v___x_3615_, 0);
lean_inc(v_a_3616_);
lean_dec_ref_known(v___x_3615_, 1);
v___x_3617_ = l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
v_toEnvExtension_3618_ = lean_ctor_get(v___x_3617_, 0);
v_asyncMode_3619_ = lean_ctor_get(v_toEnvExtension_3618_, 2);
v_logWrites_3620_ = lean_ctor_get_uint8(v_toEnvExtension_3618_, sizeof(void*)*6);
lean_inc(v_name_2999_);
v___x_3621_ = l_Lean_Environment_setMainModule(v_a_3616_, v_name_2999_);
if (v_logWrites_3620_ == 0)
{
lean_object* v___x_3622_; 
lean_inc_ref(v_toEnvExtension_3618_);
v___x_3622_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_3618_, v___x_3621_, v___f_3003_, v_asyncMode_3619_, v___x_3614_, v___x_3017_);
v___y_3534_ = v___x_3614_;
v___y_3535_ = v___x_3622_;
goto v___jp_3533_;
}
else
{
lean_object* v___x_3623_; lean_object* v___x_3624_; 
lean_inc_ref_n(v_toEnvExtension_3618_, 2);
v___x_3623_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite___redArg(v_toEnvExtension_3618_, v___x_3621_);
lean_dec_ref(v___x_3621_);
v___x_3624_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore___redArg(v_toEnvExtension_3618_, v___x_3623_, v___f_3003_, v_asyncMode_3619_, v___x_3614_, v___x_3017_);
v___y_3534_ = v___x_3614_;
v___y_3535_ = v___x_3624_;
goto v___jp_3533_;
}
}
else
{
lean_object* v_a_3625_; lean_object* v___x_3627_; uint8_t v_isShared_3628_; uint8_t v_isSharedCheck_3632_; 
lean_dec_ref(v___x_3021_);
lean_del_object(v___x_3014_);
lean_dec(v_fst_3011_);
lean_dec_ref(v___f_3003_);
lean_dec(v_name_2999_);
lean_dec(v_head_2983_);
lean_del_object(v___x_2981_);
lean_dec(v_head_2979_);
lean_del_object(v___x_2977_);
v_a_3625_ = lean_ctor_get(v___x_3615_, 0);
v_isSharedCheck_3632_ = !lean_is_exclusive(v___x_3615_);
if (v_isSharedCheck_3632_ == 0)
{
v___x_3627_ = v___x_3615_;
v_isShared_3628_ = v_isSharedCheck_3632_;
goto v_resetjp_3626_;
}
else
{
lean_inc(v_a_3625_);
lean_dec(v___x_3615_);
v___x_3627_ = lean_box(0);
v_isShared_3628_ = v_isSharedCheck_3632_;
goto v_resetjp_3626_;
}
v_resetjp_3626_:
{
lean_object* v___x_3630_; 
if (v_isShared_3628_ == 0)
{
v___x_3630_ = v___x_3627_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v_a_3625_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
return v___x_3630_;
}
}
}
}
}
else
{
lean_object* v_a_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3641_; 
lean_dec_ref(v___x_3021_);
lean_del_object(v___x_3014_);
lean_dec(v_fst_3011_);
lean_dec_ref(v___f_3003_);
lean_dec(v_importArts_3001_);
lean_dec(v_name_2999_);
lean_dec(v_head_2983_);
lean_del_object(v___x_2981_);
lean_dec(v_head_2979_);
lean_del_object(v___x_2977_);
v_a_3634_ = lean_ctor_get(v___x_3356_, 0);
v_isSharedCheck_3641_ = !lean_is_exclusive(v___x_3356_);
if (v_isSharedCheck_3641_ == 0)
{
v___x_3636_ = v___x_3356_;
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_a_3634_);
lean_dec(v___x_3356_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v___x_3639_; 
if (v_isShared_3637_ == 0)
{
v___x_3639_ = v___x_3636_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v_a_3634_);
v___x_3639_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
return v___x_3639_;
}
}
}
v___jp_3022_:
{
lean_object* v___x_3045_; lean_object* v_messages_3046_; lean_object* v_env_3047_; lean_object* v___x_3049_; uint8_t v_isShared_3050_; uint8_t v_isSharedCheck_3173_; 
v___x_3045_ = lean_st_ref_get(v___y_3036_);
lean_dec(v___y_3036_);
v_messages_3046_ = lean_ctor_get(v___x_3045_, 7);
v_env_3047_ = lean_ctor_get(v___x_3045_, 0);
v_isSharedCheck_3173_ = !lean_is_exclusive(v___x_3045_);
if (v_isSharedCheck_3173_ == 0)
{
lean_object* v_unused_3174_; lean_object* v_unused_3175_; lean_object* v_unused_3176_; lean_object* v_unused_3177_; lean_object* v_unused_3178_; lean_object* v_unused_3179_; lean_object* v_unused_3180_; lean_object* v_unused_3181_; 
v_unused_3174_ = lean_ctor_get(v___x_3045_, 9);
lean_dec(v_unused_3174_);
v_unused_3175_ = lean_ctor_get(v___x_3045_, 8);
lean_dec(v_unused_3175_);
v_unused_3176_ = lean_ctor_get(v___x_3045_, 6);
lean_dec(v_unused_3176_);
v_unused_3177_ = lean_ctor_get(v___x_3045_, 5);
lean_dec(v_unused_3177_);
v_unused_3178_ = lean_ctor_get(v___x_3045_, 4);
lean_dec(v_unused_3178_);
v_unused_3179_ = lean_ctor_get(v___x_3045_, 3);
lean_dec(v_unused_3179_);
v_unused_3180_ = lean_ctor_get(v___x_3045_, 2);
lean_dec(v_unused_3180_);
v_unused_3181_ = lean_ctor_get(v___x_3045_, 1);
lean_dec(v_unused_3181_);
v___x_3049_ = v___x_3045_;
v_isShared_3050_ = v_isSharedCheck_3173_;
goto v_resetjp_3048_;
}
else
{
lean_inc(v_messages_3046_);
lean_inc(v_env_3047_);
lean_dec(v___x_3045_);
v___x_3049_ = lean_box(0);
v_isShared_3050_ = v_isSharedCheck_3173_;
goto v_resetjp_3048_;
}
v_resetjp_3048_:
{
lean_object* v_unreported_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; 
v_unreported_3051_ = lean_ctor_get(v_messages_3046_, 1);
v___x_3052_ = lean_box(0);
v___x_3053_ = l_Lean_PersistentArray_forIn___at___00main_spec__7(v_unreported_3051_, v___x_3052_);
if (lean_obj_tag(v___x_3053_) == 0)
{
lean_object* v___x_3055_; uint8_t v_isShared_3056_; uint8_t v_isSharedCheck_3163_; 
v_isSharedCheck_3163_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3163_ == 0)
{
lean_object* v_unused_3164_; 
v_unused_3164_ = lean_ctor_get(v___x_3053_, 0);
lean_dec(v_unused_3164_);
v___x_3055_ = v___x_3053_;
v_isShared_3056_ = v_isSharedCheck_3163_;
goto v_resetjp_3054_;
}
else
{
lean_dec(v___x_3053_);
v___x_3055_ = lean_box(0);
v_isShared_3056_ = v_isSharedCheck_3163_;
goto v_resetjp_3054_;
}
v_resetjp_3054_:
{
uint8_t v___x_3057_; 
v___x_3057_ = l_Lean_MessageLog_hasErrors(v_messages_3046_);
lean_dec_ref(v_messages_3046_);
if (v___x_3057_ == 0)
{
lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; 
lean_del_object(v___x_3055_);
v___x_3058_ = ((lean_object*)(l_main___closed__9));
lean_inc(v_head_2979_);
v___x_3059_ = l_System_FilePath_addExtension(v_head_2979_, v___x_3058_);
lean_inc_ref(v_env_3047_);
v___x_3060_ = l___private_LeanIR_0__mkIRSigData(v_env_3047_);
if (lean_obj_tag(v___x_3060_) == 0)
{
lean_object* v_a_3061_; lean_object* v___x_3062_; 
v_a_3061_ = lean_ctor_get(v___x_3060_, 0);
lean_inc(v_a_3061_);
lean_dec_ref_known(v___x_3060_, 1);
lean_inc_ref(v_env_3047_);
v___x_3062_ = l___private_LeanIR_0__mkIRData(v_env_3047_);
if (lean_obj_tag(v___x_3062_) == 0)
{
lean_object* v_a_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3068_; 
v_a_3063_ = lean_ctor_get(v___x_3062_, 0);
lean_inc(v_a_3063_);
lean_dec_ref_known(v___x_3062_, 1);
v___x_3064_ = l_Lean_Environment_mainModule(v_env_3047_);
v___x_3065_ = ((lean_object*)(l_main___closed__11));
v___x_3066_ = l_Lean_Name_append(v___x_3064_, v___x_3065_);
if (v_isShared_3015_ == 0)
{
lean_ctor_set(v___x_3014_, 1, v_a_3061_);
lean_ctor_set(v___x_3014_, 0, v___x_3059_);
v___x_3068_ = v___x_3014_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3142_; 
v_reuseFailAlloc_3142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3142_, 0, v___x_3059_);
lean_ctor_set(v_reuseFailAlloc_3142_, 1, v_a_3061_);
v___x_3068_ = v_reuseFailAlloc_3142_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
lean_object* v___x_3070_; 
lean_inc(v_head_2979_);
if (v_isShared_2982_ == 0)
{
lean_ctor_set_tag(v___x_2981_, 0);
lean_ctor_set(v___x_2981_, 1, v_a_3063_);
v___x_3070_ = v___x_2981_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v_head_2979_);
lean_ctor_set(v_reuseFailAlloc_3141_, 1, v_a_3063_);
v___x_3070_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; 
v___x_3071_ = lean_unsigned_to_nat(2u);
v___x_3072_ = lean_mk_empty_array_with_capacity(v___x_3071_);
v___x_3073_ = lean_array_push(v___x_3072_, v___x_3068_);
v___x_3074_ = lean_array_push(v___x_3073_, v___x_3070_);
v___x_3075_ = l_Lean_saveModuleDataParts(v___x_3066_, v___x_3074_);
lean_dec(v___x_3066_);
if (lean_obj_tag(v___x_3075_) == 0)
{
uint8_t v___x_3076_; lean_object* v___x_3077_; 
lean_dec_ref_known(v___x_3075_, 1);
v___x_3076_ = 1;
v___x_3077_ = lean_io_prim_handle_mk(v_head_2983_, v___x_3076_);
if (lean_obj_tag(v___x_3077_) == 0)
{
lean_object* v_a_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; uint16_t v___x_3081_; lean_object* v___x_3083_; 
lean_dec(v_head_2983_);
v_a_3078_ = lean_ctor_get(v___x_3077_, 0);
lean_inc(v_a_3078_);
lean_dec_ref_known(v___x_3077_, 1);
v___x_3079_ = ((lean_object*)(l_main___closed__12));
v___x_3080_ = l_Lean_Core_getMaxHeartbeats(v___y_3035_);
v___x_3081_ = l_Lean_OptionFlags_ofOptions(v___y_3035_);
lean_inc_ref(v___y_3033_);
lean_inc_ref(v___y_3038_);
lean_inc_ref(v___y_3041_);
lean_inc_ref(v___y_3042_);
lean_inc_ref(v___y_3039_);
lean_inc_ref(v___y_3044_);
lean_inc_ref(v___y_3043_);
lean_inc(v___y_3040_);
lean_inc_ref(v_env_3047_);
if (v_isShared_3050_ == 0)
{
lean_ctor_set(v___x_3049_, 9, v___y_3033_);
lean_ctor_set(v___x_3049_, 8, v___y_3038_);
lean_ctor_set(v___x_3049_, 7, v___y_3041_);
lean_ctor_set(v___x_3049_, 6, v___y_3042_);
lean_ctor_set(v___x_3049_, 5, v___y_3039_);
lean_ctor_set(v___x_3049_, 4, v___y_3044_);
lean_ctor_set(v___x_3049_, 3, v___y_3034_);
lean_ctor_set(v___x_3049_, 2, v___y_3043_);
lean_ctor_set(v___x_3049_, 1, v___y_3040_);
v___x_3083_ = v___x_3049_;
goto v_reusejp_3082_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v_env_3047_);
lean_ctor_set(v_reuseFailAlloc_3110_, 1, v___y_3040_);
lean_ctor_set(v_reuseFailAlloc_3110_, 2, v___y_3043_);
lean_ctor_set(v_reuseFailAlloc_3110_, 3, v___y_3034_);
lean_ctor_set(v_reuseFailAlloc_3110_, 4, v___y_3044_);
lean_ctor_set(v_reuseFailAlloc_3110_, 5, v___y_3039_);
lean_ctor_set(v_reuseFailAlloc_3110_, 6, v___y_3042_);
lean_ctor_set(v_reuseFailAlloc_3110_, 7, v___y_3041_);
lean_ctor_set(v_reuseFailAlloc_3110_, 8, v___y_3038_);
lean_ctor_set(v_reuseFailAlloc_3110_, 9, v___y_3033_);
v___x_3083_ = v_reuseFailAlloc_3110_;
goto v_reusejp_3082_;
}
v_reusejp_3082_:
{
lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___f_3089_; lean_object* v___x_3090_; 
v___x_3084_ = lean_box(v___x_3081_);
v___x_3085_ = lean_box(v___y_3031_);
v___x_3086_ = lean_box(v___x_3004_);
v___x_3087_ = lean_box(v___y_3030_);
v___x_3088_ = lean_box(v___x_3057_);
lean_inc_ref(v___y_3028_);
lean_inc_ref(v___y_3025_);
v___f_3089_ = lean_alloc_closure((void*)(l_main___lam__2___boxed), 20, 19);
lean_closure_set(v___f_3089_, 0, v___x_3083_);
lean_closure_set(v___f_3089_, 1, v___y_3025_);
lean_closure_set(v___f_3089_, 2, v___x_3084_);
lean_closure_set(v___f_3089_, 3, v_name_2999_);
lean_closure_set(v___f_3089_, 4, v_a_3078_);
lean_closure_set(v___f_3089_, 5, v___x_3085_);
lean_closure_set(v___f_3089_, 6, v___y_3028_);
lean_closure_set(v___f_3089_, 7, v_head_2979_);
lean_closure_set(v___f_3089_, 8, v___y_3024_);
lean_closure_set(v___f_3089_, 9, v___y_3027_);
lean_closure_set(v___f_3089_, 10, v___y_3032_);
lean_closure_set(v___f_3089_, 11, v___x_3080_);
lean_closure_set(v___f_3089_, 12, v___y_3023_);
lean_closure_set(v___f_3089_, 13, v___y_3026_);
lean_closure_set(v___f_3089_, 14, v___x_3020_);
lean_closure_set(v___f_3089_, 15, v___y_3029_);
lean_closure_set(v___f_3089_, 16, v___x_3086_);
lean_closure_set(v___f_3089_, 17, v___x_3087_);
lean_closure_set(v___f_3089_, 18, v___x_3088_);
v___x_3090_ = l_Lean_profileitIOUnsafe___redArg(v___x_3079_, v___x_3021_, v___f_3089_, v___y_3037_);
lean_dec_ref(v___x_3021_);
if (lean_obj_tag(v___x_3090_) == 0)
{
lean_object* v___x_3091_; uint8_t v___x_3092_; 
lean_dec_ref_known(v___x_3090_, 1);
v___x_3091_ = lean_display_cumulative_profiling_times();
v___x_3092_ = lean_unbox(v_fst_3011_);
lean_dec(v_fst_3011_);
if (v___x_3092_ == 0)
{
lean_dec_ref(v_env_3047_);
goto v___jp_2970_;
}
else
{
lean_object* v___x_3093_; 
v___x_3093_ = l_Lean_Environment_displayStats(v_env_3047_);
if (lean_obj_tag(v___x_3093_) == 0)
{
lean_dec_ref_known(v___x_3093_, 1);
goto v___jp_2970_;
}
else
{
lean_object* v_a_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3101_; 
v_a_3094_ = lean_ctor_get(v___x_3093_, 0);
v_isSharedCheck_3101_ = !lean_is_exclusive(v___x_3093_);
if (v_isSharedCheck_3101_ == 0)
{
v___x_3096_ = v___x_3093_;
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_a_3094_);
lean_dec(v___x_3093_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v___x_3099_; 
if (v_isShared_3097_ == 0)
{
v___x_3099_ = v___x_3096_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v_a_3094_);
v___x_3099_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
return v___x_3099_;
}
}
}
}
}
else
{
lean_object* v_a_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3109_; 
lean_dec_ref(v_env_3047_);
lean_dec(v_fst_3011_);
v_a_3102_ = lean_ctor_get(v___x_3090_, 0);
v_isSharedCheck_3109_ = !lean_is_exclusive(v___x_3090_);
if (v_isSharedCheck_3109_ == 0)
{
v___x_3104_ = v___x_3090_;
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_a_3102_);
lean_dec(v___x_3090_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3107_; 
if (v_isShared_3105_ == 0)
{
v___x_3107_ = v___x_3104_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v_a_3102_);
v___x_3107_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
return v___x_3107_;
}
}
}
}
}
else
{
lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; 
lean_dec_ref_known(v___x_3077_, 1);
lean_del_object(v___x_3049_);
lean_dec_ref(v_env_3047_);
lean_dec(v___y_3037_);
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3032_);
lean_dec(v___y_3029_);
lean_dec(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec_ref(v___x_3021_);
lean_dec(v_fst_3011_);
lean_dec(v_name_2999_);
lean_dec(v_head_2979_);
v___x_3111_ = ((lean_object*)(l_main___closed__13));
v___x_3112_ = lean_string_append(v___x_3111_, v_head_2983_);
lean_dec(v_head_2983_);
v___x_3113_ = ((lean_object*)(l___private_LeanIR_0__setConfigOption___closed__1));
v___x_3114_ = lean_string_append(v___x_3112_, v___x_3113_);
v___x_3115_ = l_IO_eprintln___at___00main_spec__6(v___x_3114_);
if (lean_obj_tag(v___x_3115_) == 0)
{
lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3123_; 
v_isSharedCheck_3123_ = !lean_is_exclusive(v___x_3115_);
if (v_isSharedCheck_3123_ == 0)
{
lean_object* v_unused_3124_; 
v_unused_3124_ = lean_ctor_get(v___x_3115_, 0);
lean_dec(v_unused_3124_);
v___x_3117_ = v___x_3115_;
v_isShared_3118_ = v_isSharedCheck_3123_;
goto v_resetjp_3116_;
}
else
{
lean_dec(v___x_3115_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3123_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
lean_object* v___x_3119_; lean_object* v___x_3121_; 
v___x_3119_ = l_main___boxed__const__1;
if (v_isShared_3118_ == 0)
{
lean_ctor_set(v___x_3117_, 0, v___x_3119_);
v___x_3121_ = v___x_3117_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3122_; 
v_reuseFailAlloc_3122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3122_, 0, v___x_3119_);
v___x_3121_ = v_reuseFailAlloc_3122_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
return v___x_3121_;
}
}
}
else
{
lean_object* v_a_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3132_; 
v_a_3125_ = lean_ctor_get(v___x_3115_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v___x_3115_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3127_ = v___x_3115_;
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_a_3125_);
lean_dec(v___x_3115_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3130_; 
if (v_isShared_3128_ == 0)
{
v___x_3130_ = v___x_3127_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_a_3125_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
return v___x_3130_;
}
}
}
}
}
else
{
lean_object* v_a_3133_; lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3140_; 
lean_del_object(v___x_3049_);
lean_dec_ref(v_env_3047_);
lean_dec(v___y_3037_);
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3032_);
lean_dec(v___y_3029_);
lean_dec(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec_ref(v___x_3021_);
lean_dec(v_fst_3011_);
lean_dec(v_name_2999_);
lean_dec(v_head_2983_);
lean_dec(v_head_2979_);
v_a_3133_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3140_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3135_ = v___x_3075_;
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
else
{
lean_inc(v_a_3133_);
lean_dec(v___x_3075_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
lean_object* v___x_3138_; 
if (v_isShared_3136_ == 0)
{
v___x_3138_ = v___x_3135_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_a_3133_);
v___x_3138_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
return v___x_3138_;
}
}
}
}
}
}
else
{
lean_object* v_a_3143_; lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3150_; 
lean_dec(v_a_3061_);
lean_dec_ref(v___x_3059_);
lean_del_object(v___x_3049_);
lean_dec_ref(v_env_3047_);
lean_dec(v___y_3037_);
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3032_);
lean_dec(v___y_3029_);
lean_dec(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec_ref(v___x_3021_);
lean_del_object(v___x_3014_);
lean_dec(v_fst_3011_);
lean_dec(v_name_2999_);
lean_dec(v_head_2983_);
lean_del_object(v___x_2981_);
lean_dec(v_head_2979_);
v_a_3143_ = lean_ctor_get(v___x_3062_, 0);
v_isSharedCheck_3150_ = !lean_is_exclusive(v___x_3062_);
if (v_isSharedCheck_3150_ == 0)
{
v___x_3145_ = v___x_3062_;
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
else
{
lean_inc(v_a_3143_);
lean_dec(v___x_3062_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v___x_3148_; 
if (v_isShared_3146_ == 0)
{
v___x_3148_ = v___x_3145_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v_a_3143_);
v___x_3148_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
return v___x_3148_;
}
}
}
}
else
{
lean_object* v_a_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3158_; 
lean_dec_ref(v___x_3059_);
lean_del_object(v___x_3049_);
lean_dec_ref(v_env_3047_);
lean_dec(v___y_3037_);
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3032_);
lean_dec(v___y_3029_);
lean_dec(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec_ref(v___x_3021_);
lean_del_object(v___x_3014_);
lean_dec(v_fst_3011_);
lean_dec(v_name_2999_);
lean_dec(v_head_2983_);
lean_del_object(v___x_2981_);
lean_dec(v_head_2979_);
v_a_3151_ = lean_ctor_get(v___x_3060_, 0);
v_isSharedCheck_3158_ = !lean_is_exclusive(v___x_3060_);
if (v_isSharedCheck_3158_ == 0)
{
v___x_3153_ = v___x_3060_;
v_isShared_3154_ = v_isSharedCheck_3158_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_a_3151_);
lean_dec(v___x_3060_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3158_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
lean_object* v___x_3156_; 
if (v_isShared_3154_ == 0)
{
v___x_3156_ = v___x_3153_;
goto v_reusejp_3155_;
}
else
{
lean_object* v_reuseFailAlloc_3157_; 
v_reuseFailAlloc_3157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3157_, 0, v_a_3151_);
v___x_3156_ = v_reuseFailAlloc_3157_;
goto v_reusejp_3155_;
}
v_reusejp_3155_:
{
return v___x_3156_;
}
}
}
}
else
{
lean_object* v___x_3159_; lean_object* v___x_3161_; 
lean_del_object(v___x_3049_);
lean_dec_ref(v_env_3047_);
lean_dec(v___y_3037_);
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3032_);
lean_dec(v___y_3029_);
lean_dec(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec_ref(v___x_3021_);
lean_del_object(v___x_3014_);
lean_dec(v_fst_3011_);
lean_dec(v_name_2999_);
lean_dec(v_head_2983_);
lean_del_object(v___x_2981_);
lean_dec(v_head_2979_);
v___x_3159_ = l_main___boxed__const__1;
if (v_isShared_3056_ == 0)
{
lean_ctor_set(v___x_3055_, 0, v___x_3159_);
v___x_3161_ = v___x_3055_;
goto v_reusejp_3160_;
}
else
{
lean_object* v_reuseFailAlloc_3162_; 
v_reuseFailAlloc_3162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3162_, 0, v___x_3159_);
v___x_3161_ = v_reuseFailAlloc_3162_;
goto v_reusejp_3160_;
}
v_reusejp_3160_:
{
return v___x_3161_;
}
}
}
}
else
{
lean_object* v_a_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3172_; 
lean_del_object(v___x_3049_);
lean_dec_ref(v_env_3047_);
lean_dec_ref(v_messages_3046_);
lean_dec(v___y_3037_);
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3032_);
lean_dec(v___y_3029_);
lean_dec(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec_ref(v___x_3021_);
lean_del_object(v___x_3014_);
lean_dec(v_fst_3011_);
lean_dec(v_name_2999_);
lean_dec(v_head_2983_);
lean_del_object(v___x_2981_);
lean_dec(v_head_2979_);
v_a_3165_ = lean_ctor_get(v___x_3053_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3167_ = v___x_3053_;
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_a_3165_);
lean_dec(v___x_3053_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
lean_object* v___x_3170_; 
if (v_isShared_3168_ == 0)
{
v___x_3170_ = v___x_3167_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v_a_3165_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
}
}
}
v___jp_3182_:
{
lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; size_t v_sz_3220_; size_t v___x_3221_; lean_object* v___x_3222_; 
lean_inc_ref(v___y_3214_);
v___x_3217_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3217_, 0, v___y_3216_);
lean_ctor_set(v___x_3217_, 1, v_nextMacroScope_3193_);
lean_ctor_set(v___x_3217_, 2, v_ngen_3194_);
lean_ctor_set(v___x_3217_, 3, v_auxDeclNGen_3195_);
lean_ctor_set(v___x_3217_, 4, v_traceState_3196_);
lean_ctor_set(v___x_3217_, 5, v___y_3214_);
lean_ctor_set(v___x_3217_, 6, v_recordedDeps_3197_);
lean_ctor_set(v___x_3217_, 7, v_messages_3198_);
lean_ctor_set(v___x_3217_, 8, v_infoState_3199_);
lean_ctor_set(v___x_3217_, 9, v_snapshotTasks_3200_);
v___x_3218_ = lean_st_ref_put(v___y_3211_, v___x_3217_);
v___x_3219_ = lean_box(0);
v_sz_3220_ = lean_array_size(v___y_3207_);
v___x_3221_ = ((size_t)0ULL);
v___x_3222_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00main_spec__12(v___y_3207_, v_sz_3220_, v___x_3221_, v___x_3219_, v___y_3205_, v___y_3211_);
lean_dec_ref(v___y_3207_);
if (lean_obj_tag(v___x_3222_) == 0)
{
lean_dec_ref_known(v___x_3222_, 1);
lean_dec(v___y_3211_);
lean_dec_ref(v___y_3205_);
v___y_3023_ = v___y_3185_;
v___y_3024_ = v___y_3184_;
v___y_3025_ = v___y_3183_;
v___y_3026_ = v___y_3186_;
v___y_3027_ = v___y_3187_;
v___y_3028_ = v___y_3188_;
v___y_3029_ = v___y_3189_;
v___y_3030_ = v___y_3191_;
v___y_3031_ = v___y_3190_;
v___y_3032_ = v___y_3192_;
v___y_3033_ = v___y_3201_;
v___y_3034_ = v___y_3202_;
v___y_3035_ = v___y_3203_;
v___y_3036_ = v___y_3212_;
v___y_3037_ = v___y_3204_;
v___y_3038_ = v___y_3213_;
v___y_3039_ = v___y_3214_;
v___y_3040_ = v___y_3206_;
v___y_3041_ = v___y_3215_;
v___y_3042_ = v___y_3208_;
v___y_3043_ = v___y_3209_;
v___y_3044_ = v___y_3210_;
goto v___jp_3022_;
}
else
{
lean_object* v_a_3223_; uint8_t v___x_3224_; 
v_a_3223_ = lean_ctor_get(v___x_3222_, 0);
lean_inc(v_a_3223_);
lean_dec_ref_known(v___x_3222_, 1);
v___x_3224_ = l_Lean_Exception_isInterrupt(v_a_3223_);
if (v___x_3224_ == 0)
{
lean_object* v___x_3225_; lean_object* v___x_3226_; 
v___x_3225_ = l_Lean_Exception_toMessageData(v_a_3223_);
v___x_3226_ = l_Lean_logError___at___00main_spec__13(v___x_3225_, v___y_3205_, v___y_3211_);
lean_dec(v___y_3211_);
lean_dec_ref(v___y_3205_);
if (lean_obj_tag(v___x_3226_) == 0)
{
lean_dec_ref_known(v___x_3226_, 1);
v___y_3023_ = v___y_3185_;
v___y_3024_ = v___y_3184_;
v___y_3025_ = v___y_3183_;
v___y_3026_ = v___y_3186_;
v___y_3027_ = v___y_3187_;
v___y_3028_ = v___y_3188_;
v___y_3029_ = v___y_3189_;
v___y_3030_ = v___y_3191_;
v___y_3031_ = v___y_3190_;
v___y_3032_ = v___y_3192_;
v___y_3033_ = v___y_3201_;
v___y_3034_ = v___y_3202_;
v___y_3035_ = v___y_3203_;
v___y_3036_ = v___y_3212_;
v___y_3037_ = v___y_3204_;
v___y_3038_ = v___y_3213_;
v___y_3039_ = v___y_3214_;
v___y_3040_ = v___y_3206_;
v___y_3041_ = v___y_3215_;
v___y_3042_ = v___y_3208_;
v___y_3043_ = v___y_3209_;
v___y_3044_ = v___y_3210_;
goto v___jp_3022_;
}
else
{
lean_object* v___x_3227_; lean_object* v___x_3228_; 
lean_dec_ref_known(v___x_3226_, 1);
lean_dec(v___y_3212_);
lean_dec(v___y_3204_);
lean_dec_ref(v___y_3202_);
lean_dec(v___y_3192_);
lean_dec(v___y_3189_);
lean_dec(v___y_3187_);
lean_dec(v___y_3186_);
lean_dec(v___y_3185_);
lean_dec_ref(v___y_3184_);
lean_dec_ref(v___x_3021_);
lean_del_object(v___x_3014_);
lean_dec(v_fst_3011_);
lean_dec(v_name_2999_);
lean_dec(v_head_2983_);
lean_del_object(v___x_2981_);
lean_dec(v_head_2979_);
v___x_3227_ = lean_obj_once(&l_main___closed__17, &l_main___closed__17_once, _init_l_main___closed__17);
v___x_3228_ = l_panic___at___00main_spec__5(v___x_3227_);
return v___x_3228_;
}
}
else
{
lean_dec(v_a_3223_);
lean_dec(v___y_3211_);
lean_dec_ref(v___y_3205_);
v___y_3023_ = v___y_3185_;
v___y_3024_ = v___y_3184_;
v___y_3025_ = v___y_3183_;
v___y_3026_ = v___y_3186_;
v___y_3027_ = v___y_3187_;
v___y_3028_ = v___y_3188_;
v___y_3029_ = v___y_3189_;
v___y_3030_ = v___y_3191_;
v___y_3031_ = v___y_3190_;
v___y_3032_ = v___y_3192_;
v___y_3033_ = v___y_3201_;
v___y_3034_ = v___y_3202_;
v___y_3035_ = v___y_3203_;
v___y_3036_ = v___y_3212_;
v___y_3037_ = v___y_3204_;
v___y_3038_ = v___y_3213_;
v___y_3039_ = v___y_3214_;
v___y_3040_ = v___y_3206_;
v___y_3041_ = v___y_3215_;
v___y_3042_ = v___y_3208_;
v___y_3043_ = v___y_3209_;
v___y_3044_ = v___y_3210_;
goto v___jp_3022_;
}
}
}
v___jp_3229_:
{
lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v_env_3276_; lean_object* v_nextMacroScope_3277_; lean_object* v_ngen_3278_; lean_object* v_auxDeclNGen_3279_; lean_object* v_traceState_3280_; lean_object* v_recordedDeps_3281_; lean_object* v_messages_3282_; lean_object* v_infoState_3283_; lean_object* v_snapshotTasks_3284_; lean_object* v___x_3285_; uint8_t v___x_3286_; 
v___x_3271_ = l_Lean_maxRecDepth;
v___x_3272_ = l_Lean_Option_get___at___00main_spec__8(v___x_3021_, v___x_3271_);
lean_inc_ref(v___x_3021_);
v___x_3273_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_3273_, 0, v_fileName_3255_);
lean_ctor_set(v___x_3273_, 1, v_fileMap_3256_);
lean_ctor_set(v___x_3273_, 2, v___x_3021_);
lean_ctor_set(v___x_3273_, 3, v___x_3272_);
lean_ctor_set(v___x_3273_, 4, v_currNamespace_3257_);
lean_ctor_set(v___x_3273_, 5, v_openDecls_3258_);
lean_ctor_set(v___x_3273_, 6, v_initHeartbeats_3259_);
lean_ctor_set(v___x_3273_, 7, v_maxHeartbeats_3260_);
lean_ctor_set(v___x_3273_, 8, v_quotContext_3261_);
lean_ctor_set(v___x_3273_, 9, v_currMacroScope_3262_);
lean_ctor_set(v___x_3273_, 10, v_cancelTk_x3f_3263_);
lean_ctor_set(v___x_3273_, 11, v_inheritedTraceOptions_3264_);
v___x_3274_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3274_, 0, v___x_3273_);
lean_ctor_set(v___x_3274_, 1, v_currRecDepth_3265_);
lean_ctor_set(v___x_3274_, 2, v_ref_3266_);
lean_ctor_set_uint16(v___x_3274_, sizeof(void*)*3, v___y_3246_);
lean_ctor_set_uint8(v___x_3274_, sizeof(void*)*3 + 2, v_suppressElabErrors_3267_);
lean_ctor_set_uint8(v___x_3274_, sizeof(void*)*3 + 3, v_checkDeprecated_3268_);
lean_ctor_set_uint8(v___x_3274_, sizeof(void*)*3 + 4, v_isRecordingDeps_3269_);
v___x_3275_ = lean_st_ref_take(v___y_3270_);
v_env_3276_ = lean_ctor_get(v___x_3275_, 0);
lean_inc_ref(v_env_3276_);
v_nextMacroScope_3277_ = lean_ctor_get(v___x_3275_, 1);
lean_inc(v_nextMacroScope_3277_);
v_ngen_3278_ = lean_ctor_get(v___x_3275_, 2);
lean_inc_ref(v_ngen_3278_);
v_auxDeclNGen_3279_ = lean_ctor_get(v___x_3275_, 3);
lean_inc_ref(v_auxDeclNGen_3279_);
v_traceState_3280_ = lean_ctor_get(v___x_3275_, 4);
lean_inc_ref(v_traceState_3280_);
v_recordedDeps_3281_ = lean_ctor_get(v___x_3275_, 6);
lean_inc_ref(v_recordedDeps_3281_);
v_messages_3282_ = lean_ctor_get(v___x_3275_, 7);
lean_inc_ref(v_messages_3282_);
v_infoState_3283_ = lean_ctor_get(v___x_3275_, 8);
lean_inc_ref(v_infoState_3283_);
v_snapshotTasks_3284_ = lean_ctor_get(v___x_3275_, 9);
lean_inc_ref(v_snapshotTasks_3284_);
lean_dec(v___x_3275_);
v___x_3285_ = lean_array_get_size(v___y_3245_);
v___x_3286_ = lean_nat_dec_lt(v___x_3020_, v___x_3285_);
if (v___x_3286_ == 0)
{
lean_object* v___x_3287_; 
lean_inc_ref(v___y_3254_);
v___x_3287_ = l_Lean_SimplePersistentEnvExtension_setState___redArg(v___y_3254_, v_env_3276_, v___x_2995_);
v___y_3183_ = v___y_3232_;
v___y_3184_ = v___y_3231_;
v___y_3185_ = v___y_3230_;
v___y_3186_ = v___y_3233_;
v___y_3187_ = v___y_3234_;
v___y_3188_ = v___y_3235_;
v___y_3189_ = v___y_3236_;
v___y_3190_ = v___y_3238_;
v___y_3191_ = v___y_3237_;
v___y_3192_ = v___y_3239_;
v_nextMacroScope_3193_ = v_nextMacroScope_3277_;
v_ngen_3194_ = v_ngen_3278_;
v_auxDeclNGen_3195_ = v_auxDeclNGen_3279_;
v_traceState_3196_ = v_traceState_3280_;
v_recordedDeps_3197_ = v_recordedDeps_3281_;
v_messages_3198_ = v_messages_3282_;
v_infoState_3199_ = v_infoState_3283_;
v_snapshotTasks_3200_ = v_snapshotTasks_3284_;
v___y_3201_ = v___y_3240_;
v___y_3202_ = v___y_3241_;
v___y_3203_ = v___y_3242_;
v___y_3204_ = v___y_3243_;
v___y_3205_ = v___x_3274_;
v___y_3206_ = v___y_3244_;
v___y_3207_ = v___y_3245_;
v___y_3208_ = v___y_3247_;
v___y_3209_ = v___y_3248_;
v___y_3210_ = v___y_3249_;
v___y_3211_ = v___y_3270_;
v___y_3212_ = v___y_3250_;
v___y_3213_ = v___y_3251_;
v___y_3214_ = v___y_3252_;
v___y_3215_ = v___y_3253_;
v___y_3216_ = v___x_3287_;
goto v___jp_3182_;
}
else
{
size_t v___x_3288_; size_t v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; 
v___x_3288_ = ((size_t)0ULL);
v___x_3289_ = lean_usize_of_nat(v___x_3285_);
v___x_3290_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00main_spec__14(v___y_3245_, v___x_3288_, v___x_3289_, v___x_2995_);
lean_inc_ref(v___y_3254_);
v___x_3291_ = l_Lean_SimplePersistentEnvExtension_setState___redArg(v___y_3254_, v_env_3276_, v___x_3290_);
v___y_3183_ = v___y_3232_;
v___y_3184_ = v___y_3231_;
v___y_3185_ = v___y_3230_;
v___y_3186_ = v___y_3233_;
v___y_3187_ = v___y_3234_;
v___y_3188_ = v___y_3235_;
v___y_3189_ = v___y_3236_;
v___y_3190_ = v___y_3238_;
v___y_3191_ = v___y_3237_;
v___y_3192_ = v___y_3239_;
v_nextMacroScope_3193_ = v_nextMacroScope_3277_;
v_ngen_3194_ = v_ngen_3278_;
v_auxDeclNGen_3195_ = v_auxDeclNGen_3279_;
v_traceState_3196_ = v_traceState_3280_;
v_recordedDeps_3197_ = v_recordedDeps_3281_;
v_messages_3198_ = v_messages_3282_;
v_infoState_3199_ = v_infoState_3283_;
v_snapshotTasks_3200_ = v_snapshotTasks_3284_;
v___y_3201_ = v___y_3240_;
v___y_3202_ = v___y_3241_;
v___y_3203_ = v___y_3242_;
v___y_3204_ = v___y_3243_;
v___y_3205_ = v___x_3274_;
v___y_3206_ = v___y_3244_;
v___y_3207_ = v___y_3245_;
v___y_3208_ = v___y_3247_;
v___y_3209_ = v___y_3248_;
v___y_3210_ = v___y_3249_;
v___y_3211_ = v___y_3270_;
v___y_3212_ = v___y_3250_;
v___y_3213_ = v___y_3251_;
v___y_3214_ = v___y_3252_;
v___y_3215_ = v___y_3253_;
v___y_3216_ = v___x_3291_;
goto v___jp_3182_;
}
}
v___jp_3292_:
{
lean_object* v___x_3320_; lean_object* v_env_3321_; lean_object* v_nextMacroScope_3322_; lean_object* v_ngen_3323_; lean_object* v_auxDeclNGen_3324_; lean_object* v_traceState_3325_; lean_object* v_recordedDeps_3326_; lean_object* v_messages_3327_; lean_object* v_infoState_3328_; lean_object* v_snapshotTasks_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3354_; 
v___x_3320_ = lean_st_ref_take(v___y_3315_);
v_env_3321_ = lean_ctor_get(v___x_3320_, 0);
v_nextMacroScope_3322_ = lean_ctor_get(v___x_3320_, 1);
v_ngen_3323_ = lean_ctor_get(v___x_3320_, 2);
v_auxDeclNGen_3324_ = lean_ctor_get(v___x_3320_, 3);
v_traceState_3325_ = lean_ctor_get(v___x_3320_, 4);
v_recordedDeps_3326_ = lean_ctor_get(v___x_3320_, 6);
v_messages_3327_ = lean_ctor_get(v___x_3320_, 7);
v_infoState_3328_ = lean_ctor_get(v___x_3320_, 8);
v_snapshotTasks_3329_ = lean_ctor_get(v___x_3320_, 9);
v_isSharedCheck_3354_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3354_ == 0)
{
lean_object* v_unused_3355_; 
v_unused_3355_ = lean_ctor_get(v___x_3320_, 5);
lean_dec(v_unused_3355_);
v___x_3331_ = v___x_3320_;
v_isShared_3332_ = v_isSharedCheck_3354_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_snapshotTasks_3329_);
lean_inc(v_infoState_3328_);
lean_inc(v_messages_3327_);
lean_inc(v_recordedDeps_3326_);
lean_inc(v_traceState_3325_);
lean_inc(v_auxDeclNGen_3324_);
lean_inc(v_ngen_3323_);
lean_inc(v_nextMacroScope_3322_);
lean_inc(v_env_3321_);
lean_dec(v___x_3320_);
v___x_3331_ = lean_box(0);
v_isShared_3332_ = v_isSharedCheck_3354_;
goto v_resetjp_3330_;
}
v_resetjp_3330_:
{
lean_object* v___x_3333_; lean_object* v___x_3335_; 
v___x_3333_ = l_Lean_Kernel_enableDiag(v_env_3321_, v___y_3307_);
lean_inc_ref(v___y_3317_);
if (v_isShared_3332_ == 0)
{
lean_ctor_set(v___x_3331_, 5, v___y_3317_);
lean_ctor_set(v___x_3331_, 0, v___x_3333_);
v___x_3335_ = v___x_3331_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v___x_3333_);
lean_ctor_set(v_reuseFailAlloc_3353_, 1, v_nextMacroScope_3322_);
lean_ctor_set(v_reuseFailAlloc_3353_, 2, v_ngen_3323_);
lean_ctor_set(v_reuseFailAlloc_3353_, 3, v_auxDeclNGen_3324_);
lean_ctor_set(v_reuseFailAlloc_3353_, 4, v_traceState_3325_);
lean_ctor_set(v_reuseFailAlloc_3353_, 5, v___y_3317_);
lean_ctor_set(v_reuseFailAlloc_3353_, 6, v_recordedDeps_3326_);
lean_ctor_set(v_reuseFailAlloc_3353_, 7, v_messages_3327_);
lean_ctor_set(v_reuseFailAlloc_3353_, 8, v_infoState_3328_);
lean_ctor_set(v_reuseFailAlloc_3353_, 9, v_snapshotTasks_3329_);
v___x_3335_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
lean_object* v___x_3336_; lean_object* v_toCold_3337_; lean_object* v_currRecDepth_3338_; lean_object* v_ref_3339_; uint8_t v_suppressElabErrors_3340_; uint8_t v_checkDeprecated_3341_; uint8_t v_isRecordingDeps_3342_; lean_object* v_fileName_3343_; lean_object* v_fileMap_3344_; lean_object* v_currNamespace_3345_; lean_object* v_openDecls_3346_; lean_object* v_initHeartbeats_3347_; lean_object* v_maxHeartbeats_3348_; lean_object* v_quotContext_3349_; lean_object* v_currMacroScope_3350_; lean_object* v_cancelTk_x3f_3351_; lean_object* v_inheritedTraceOptions_3352_; 
v___x_3336_ = lean_st_ref_put(v___y_3315_, v___x_3335_);
v_toCold_3337_ = lean_ctor_get(v___y_3314_, 0);
lean_inc_ref(v_toCold_3337_);
v_currRecDepth_3338_ = lean_ctor_get(v___y_3314_, 1);
lean_inc(v_currRecDepth_3338_);
v_ref_3339_ = lean_ctor_get(v___y_3314_, 2);
lean_inc(v_ref_3339_);
v_suppressElabErrors_3340_ = lean_ctor_get_uint8(v___y_3314_, sizeof(void*)*3 + 2);
v_checkDeprecated_3341_ = lean_ctor_get_uint8(v___y_3314_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3342_ = lean_ctor_get_uint8(v___y_3314_, sizeof(void*)*3 + 4);
lean_dec_ref(v___y_3314_);
v_fileName_3343_ = lean_ctor_get(v_toCold_3337_, 0);
lean_inc_ref(v_fileName_3343_);
v_fileMap_3344_ = lean_ctor_get(v_toCold_3337_, 1);
lean_inc_ref(v_fileMap_3344_);
v_currNamespace_3345_ = lean_ctor_get(v_toCold_3337_, 4);
lean_inc(v_currNamespace_3345_);
v_openDecls_3346_ = lean_ctor_get(v_toCold_3337_, 5);
lean_inc(v_openDecls_3346_);
v_initHeartbeats_3347_ = lean_ctor_get(v_toCold_3337_, 6);
lean_inc(v_initHeartbeats_3347_);
v_maxHeartbeats_3348_ = lean_ctor_get(v_toCold_3337_, 7);
lean_inc(v_maxHeartbeats_3348_);
v_quotContext_3349_ = lean_ctor_get(v_toCold_3337_, 8);
lean_inc(v_quotContext_3349_);
v_currMacroScope_3350_ = lean_ctor_get(v_toCold_3337_, 9);
lean_inc(v_currMacroScope_3350_);
v_cancelTk_x3f_3351_ = lean_ctor_get(v_toCold_3337_, 10);
lean_inc(v_cancelTk_x3f_3351_);
v_inheritedTraceOptions_3352_ = lean_ctor_get(v_toCold_3337_, 11);
lean_inc_ref(v_inheritedTraceOptions_3352_);
lean_dec_ref(v_toCold_3337_);
lean_inc(v___y_3315_);
v___y_3230_ = v___y_3295_;
v___y_3231_ = v___y_3294_;
v___y_3232_ = v___y_3293_;
v___y_3233_ = v___y_3296_;
v___y_3234_ = v___y_3297_;
v___y_3235_ = v___y_3298_;
v___y_3236_ = v___y_3299_;
v___y_3237_ = v___y_3301_;
v___y_3238_ = v___y_3300_;
v___y_3239_ = v___y_3302_;
v___y_3240_ = v___y_3303_;
v___y_3241_ = v___y_3304_;
v___y_3242_ = v___y_3305_;
v___y_3243_ = v___y_3306_;
v___y_3244_ = v___y_3308_;
v___y_3245_ = v___y_3309_;
v___y_3246_ = v___y_3310_;
v___y_3247_ = v___y_3311_;
v___y_3248_ = v___y_3312_;
v___y_3249_ = v___y_3313_;
v___y_3250_ = v___y_3315_;
v___y_3251_ = v___y_3316_;
v___y_3252_ = v___y_3317_;
v___y_3253_ = v___y_3318_;
v___y_3254_ = v___y_3319_;
v_fileName_3255_ = v_fileName_3343_;
v_fileMap_3256_ = v_fileMap_3344_;
v_currNamespace_3257_ = v_currNamespace_3345_;
v_openDecls_3258_ = v_openDecls_3346_;
v_initHeartbeats_3259_ = v_initHeartbeats_3347_;
v_maxHeartbeats_3260_ = v_maxHeartbeats_3348_;
v_quotContext_3261_ = v_quotContext_3349_;
v_currMacroScope_3262_ = v_currMacroScope_3350_;
v_cancelTk_x3f_3263_ = v_cancelTk_x3f_3351_;
v_inheritedTraceOptions_3264_ = v_inheritedTraceOptions_3352_;
v_currRecDepth_3265_ = v_currRecDepth_3338_;
v_ref_3266_ = v_ref_3339_;
v_suppressElabErrors_3267_ = v_suppressElabErrors_3340_;
v_checkDeprecated_3268_ = v_checkDeprecated_3341_;
v_isRecordingDeps_3269_ = v_isRecordingDeps_3342_;
v___y_3270_ = v___y_3315_;
goto v___jp_3229_;
}
}
}
}
}
else
{
lean_object* v_a_3643_; lean_object* v___x_3645_; uint8_t v_isShared_3646_; uint8_t v_isSharedCheck_3650_; 
lean_dec_ref(v___f_3003_);
lean_dec(v_importArts_3001_);
lean_dec(v_name_2999_);
lean_dec(v_head_2983_);
lean_del_object(v___x_2981_);
lean_dec(v_head_2979_);
lean_del_object(v___x_2977_);
v_a_3643_ = lean_ctor_get(v___x_3009_, 0);
v_isSharedCheck_3650_ = !lean_is_exclusive(v___x_3009_);
if (v_isSharedCheck_3650_ == 0)
{
v___x_3645_ = v___x_3009_;
v_isShared_3646_ = v_isSharedCheck_3650_;
goto v_resetjp_3644_;
}
else
{
lean_inc(v_a_3643_);
lean_dec(v___x_3009_);
v___x_3645_ = lean_box(0);
v_isShared_3646_ = v_isSharedCheck_3650_;
goto v_resetjp_3644_;
}
v_resetjp_3644_:
{
lean_object* v___x_3648_; 
if (v_isShared_3646_ == 0)
{
v___x_3648_ = v___x_3645_;
goto v_reusejp_3647_;
}
else
{
lean_object* v_reuseFailAlloc_3649_; 
v_reuseFailAlloc_3649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3649_, 0, v_a_3643_);
v___x_3648_ = v_reuseFailAlloc_3649_;
goto v_reusejp_3647_;
}
v_reusejp_3647_:
{
return v___x_3648_;
}
}
}
}
}
else
{
lean_object* v_a_3652_; lean_object* v___x_3654_; uint8_t v_isShared_3655_; uint8_t v_isSharedCheck_3659_; 
lean_del_object(v___x_2986_);
lean_dec(v_tail_2984_);
lean_dec(v_head_2983_);
lean_del_object(v___x_2981_);
lean_dec(v_head_2979_);
lean_del_object(v___x_2977_);
v_a_3652_ = lean_ctor_get(v___x_2997_, 0);
v_isSharedCheck_3659_ = !lean_is_exclusive(v___x_2997_);
if (v_isSharedCheck_3659_ == 0)
{
v___x_3654_ = v___x_2997_;
v_isShared_3655_ = v_isSharedCheck_3659_;
goto v_resetjp_3653_;
}
else
{
lean_inc(v_a_3652_);
lean_dec(v___x_2997_);
v___x_3654_ = lean_box(0);
v_isShared_3655_ = v_isSharedCheck_3659_;
goto v_resetjp_3653_;
}
v_resetjp_3653_:
{
lean_object* v___x_3657_; 
if (v_isShared_3655_ == 0)
{
v___x_3657_ = v___x_3654_;
goto v_reusejp_3656_;
}
else
{
lean_object* v_reuseFailAlloc_3658_; 
v_reuseFailAlloc_3658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3658_, 0, v_a_3652_);
v___x_3657_ = v_reuseFailAlloc_3658_;
goto v_reusejp_3656_;
}
v_reusejp_3656_:
{
return v___x_3657_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_tail_2973_, 2);
lean_dec(v_tail_2974_);
lean_dec_ref_known(v_args_2948_, 2);
goto v___jp_2950_;
}
}
else
{
lean_dec(v_tail_2973_);
lean_dec_ref_known(v_args_2948_, 2);
goto v___jp_2950_;
}
}
else
{
lean_dec(v_args_2948_);
goto v___jp_2950_;
}
v___jp_2950_:
{
lean_object* v___x_2951_; lean_object* v___x_2952_; 
v___x_2951_ = ((lean_object*)(l_main___closed__0));
v___x_2952_ = l_IO_println___at___00Lean_Environment_displayStats_spec__1(v___x_2951_);
if (lean_obj_tag(v___x_2952_) == 0)
{
lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2960_; 
v_isSharedCheck_2960_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_2960_ == 0)
{
lean_object* v_unused_2961_; 
v_unused_2961_ = lean_ctor_get(v___x_2952_, 0);
lean_dec(v_unused_2961_);
v___x_2954_ = v___x_2952_;
v_isShared_2955_ = v_isSharedCheck_2960_;
goto v_resetjp_2953_;
}
else
{
lean_dec(v___x_2952_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2960_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v___x_2956_; lean_object* v___x_2958_; 
v___x_2956_ = l_main___boxed__const__1;
if (v_isShared_2955_ == 0)
{
lean_ctor_set(v___x_2954_, 0, v___x_2956_);
v___x_2958_ = v___x_2954_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v___x_2956_);
v___x_2958_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
return v___x_2958_;
}
}
}
else
{
lean_object* v_a_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2969_; 
v_a_2962_ = lean_ctor_get(v___x_2952_, 0);
v_isSharedCheck_2969_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_2969_ == 0)
{
v___x_2964_ = v___x_2952_;
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_a_2962_);
lean_dec(v___x_2952_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2967_; 
if (v_isShared_2965_ == 0)
{
v___x_2967_ = v___x_2964_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v_a_2962_);
v___x_2967_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
return v___x_2967_;
}
}
}
}
v___jp_2970_:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2971_ = l_main___boxed__const__2;
v___x_2972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2972_, 0, v___x_2971_);
return v___x_2972_;
}
}
}
LEAN_EXPORT lean_object* l_main___boxed(lean_object* v_args_3665_, lean_object* v_a_3666_){
_start:
{
lean_object* v_res_3667_; 
v_res_3667_ = _lean_main(v_args_3665_);
return v_res_3667_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1(lean_object* v_as_3668_, lean_object* v_as_x27_3669_, lean_object* v_b_3670_, lean_object* v_a_3671_){
_start:
{
lean_object* v___x_3673_; 
v___x_3673_ = l_List_forIn_x27_loop___at___00main_spec__1___redArg(v_as_x27_3669_, v_b_3670_);
return v___x_3673_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00main_spec__1___boxed(lean_object* v_as_3674_, lean_object* v_as_x27_3675_, lean_object* v_b_3676_, lean_object* v_a_3677_, lean_object* v___y_3678_){
_start:
{
lean_object* v_res_3679_; 
v_res_3679_ = l_List_forIn_x27_loop___at___00main_spec__1(v_as_3674_, v_as_x27_3675_, v_b_3676_, v_a_3677_);
lean_dec(v_as_x27_3675_);
lean_dec(v_as_3674_);
return v_res_3679_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16(lean_object* v___y_3680_, lean_object* v___y_3681_){
_start:
{
lean_object* v___x_3683_; 
v___x_3683_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___redArg(v___y_3681_);
return v___x_3683_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16___boxed(lean_object* v___y_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_){
_start:
{
lean_object* v_res_3687_; 
v_res_3687_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__16(v___y_3684_, v___y_3685_);
lean_dec(v___y_3685_);
lean_dec_ref(v___y_3684_);
return v_res_3687_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17(lean_object* v_00_u03b2_3688_, lean_object* v_m_3689_, lean_object* v_a_3690_, lean_object* v_fallback_3691_){
_start:
{
lean_object* v___x_3692_; 
v___x_3692_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___redArg(v_m_3689_, v_a_3690_, v_fallback_3691_);
return v___x_3692_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17___boxed(lean_object* v_00_u03b2_3693_, lean_object* v_m_3694_, lean_object* v_a_3695_, lean_object* v_fallback_3696_){
_start:
{
lean_object* v_res_3697_; 
v_res_3697_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17(v_00_u03b2_3693_, v_m_3694_, v_a_3695_, v_fallback_3696_);
lean_dec(v_fallback_3696_);
lean_dec_ref(v_a_3695_);
lean_dec_ref(v_m_3694_);
return v_res_3697_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18(lean_object* v_00_u03b2_3698_, lean_object* v_m_3699_, lean_object* v_a_3700_, lean_object* v_b_3701_){
_start:
{
lean_object* v___x_3702_; 
v___x_3702_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18___redArg(v_m_3699_, v_a_3700_, v_b_3701_);
return v___x_3702_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21(lean_object* v_n_3703_, lean_object* v_as_3704_, lean_object* v_lo_3705_, lean_object* v_hi_3706_, lean_object* v_w_3707_, lean_object* v_hlo_3708_, lean_object* v_hhi_3709_){
_start:
{
lean_object* v___x_3710_; 
v___x_3710_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___redArg(v_n_3703_, v_as_3704_, v_lo_3705_, v_hi_3706_);
return v___x_3710_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21___boxed(lean_object* v_n_3711_, lean_object* v_as_3712_, lean_object* v_lo_3713_, lean_object* v_hi_3714_, lean_object* v_w_3715_, lean_object* v_hlo_3716_, lean_object* v_hhi_3717_){
_start:
{
lean_object* v_res_3718_; 
v_res_3718_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21(v_n_3711_, v_as_3712_, v_lo_3713_, v_hi_3714_, v_w_3715_, v_hlo_3716_, v_hhi_3717_);
lean_dec(v_hi_3714_);
lean_dec(v_n_3711_);
return v_res_3718_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21(lean_object* v_00_u03b2_3719_, lean_object* v_a_3720_, lean_object* v_fallback_3721_, lean_object* v_x_3722_){
_start:
{
lean_object* v___x_3723_; 
v___x_3723_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___redArg(v_a_3720_, v_fallback_3721_, v_x_3722_);
return v___x_3723_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21___boxed(lean_object* v_00_u03b2_3724_, lean_object* v_a_3725_, lean_object* v_fallback_3726_, lean_object* v_x_3727_){
_start:
{
lean_object* v_res_3728_; 
v_res_3728_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__17_spec__21(v_00_u03b2_3724_, v_a_3725_, v_fallback_3726_, v_x_3727_);
lean_dec(v_x_3727_);
lean_dec(v_fallback_3726_);
lean_dec_ref(v_a_3725_);
return v_res_3728_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23(lean_object* v_00_u03b2_3729_, lean_object* v_a_3730_, lean_object* v_x_3731_){
_start:
{
uint8_t v___x_3732_; 
v___x_3732_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___redArg(v_a_3730_, v_x_3731_);
return v___x_3732_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23___boxed(lean_object* v_00_u03b2_3733_, lean_object* v_a_3734_, lean_object* v_x_3735_){
_start:
{
uint8_t v_res_3736_; lean_object* v_r_3737_; 
v_res_3736_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__23(v_00_u03b2_3733_, v_a_3734_, v_x_3735_);
lean_dec(v_x_3735_);
lean_dec_ref(v_a_3734_);
v_r_3737_ = lean_box(v_res_3736_);
return v_r_3737_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24(lean_object* v_00_u03b2_3738_, lean_object* v_data_3739_){
_start:
{
lean_object* v___x_3740_; 
v___x_3740_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24___redArg(v_data_3739_);
return v___x_3740_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25(lean_object* v_00_u03b2_3741_, lean_object* v_a_3742_, lean_object* v_b_3743_, lean_object* v_x_3744_){
_start:
{
lean_object* v___x_3745_; 
v___x_3745_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__25___redArg(v_a_3742_, v_b_3743_, v_x_3744_);
return v___x_3745_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31(lean_object* v_n_3746_, lean_object* v_lo_3747_, lean_object* v_hi_3748_, lean_object* v_hhi_3749_, lean_object* v_pivot_3750_, lean_object* v_as_3751_, lean_object* v_i_3752_, lean_object* v_k_3753_, lean_object* v_ilo_3754_, lean_object* v_ik_3755_, lean_object* v_w_3756_){
_start:
{
lean_object* v___x_3757_; 
v___x_3757_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___redArg(v_hi_3748_, v_pivot_3750_, v_as_3751_, v_i_3752_, v_k_3753_);
return v___x_3757_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31___boxed(lean_object* v_n_3758_, lean_object* v_lo_3759_, lean_object* v_hi_3760_, lean_object* v_hhi_3761_, lean_object* v_pivot_3762_, lean_object* v_as_3763_, lean_object* v_i_3764_, lean_object* v_k_3765_, lean_object* v_ilo_3766_, lean_object* v_ik_3767_, lean_object* v_w_3768_){
_start:
{
lean_object* v_res_3769_; 
v_res_3769_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__21_spec__31(v_n_3758_, v_lo_3759_, v_hi_3760_, v_hhi_3761_, v_pivot_3762_, v_as_3763_, v_i_3764_, v_k_3765_, v_ilo_3766_, v_ik_3767_, v_w_3768_);
lean_dec_ref(v_pivot_3762_);
lean_dec(v_hi_3760_);
lean_dec(v_lo_3759_);
lean_dec(v_n_3758_);
return v_res_3769_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40(lean_object* v_as_3770_, size_t v_sz_3771_, size_t v_i_3772_, lean_object* v_b_3773_, lean_object* v___y_3774_, lean_object* v___y_3775_){
_start:
{
lean_object* v___x_3777_; 
v___x_3777_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___redArg(v_as_3770_, v_sz_3771_, v_i_3772_, v_b_3773_, v___y_3774_);
return v___x_3777_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40___boxed(lean_object* v_as_3778_, lean_object* v_sz_3779_, lean_object* v_i_3780_, lean_object* v_b_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_){
_start:
{
size_t v_sz_boxed_3785_; size_t v_i_boxed_3786_; lean_object* v_res_3787_; 
v_sz_boxed_3785_ = lean_unbox_usize(v_sz_3779_);
lean_dec(v_sz_3779_);
v_i_boxed_3786_ = lean_unbox_usize(v_i_3780_);
lean_dec(v_i_3780_);
v_res_3787_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__27_spec__40(v_as_3778_, v_sz_boxed_3785_, v_i_boxed_3786_, v_b_3781_, v___y_3782_, v___y_3783_);
lean_dec(v___y_3783_);
lean_dec_ref(v___y_3782_);
lean_dec_ref(v_as_3778_);
return v_res_3787_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35(lean_object* v_00_u03b2_3788_, lean_object* v_i_3789_, lean_object* v_source_3790_, lean_object* v_target_3791_){
_start:
{
lean_object* v___x_3792_; 
v___x_3792_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35___redArg(v_i_3789_, v_source_3790_, v_target_3791_);
return v___x_3792_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42(uint8_t v___x_3793_, lean_object* v_as_3794_, size_t v_sz_3795_, size_t v_i_3796_, lean_object* v_b_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_){
_start:
{
lean_object* v___x_3801_; 
v___x_3801_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___redArg(v___x_3793_, v_as_3794_, v_sz_3795_, v_i_3796_, v_b_3797_, v___y_3798_);
return v___x_3801_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42___boxed(lean_object* v___x_3802_, lean_object* v_as_3803_, lean_object* v_sz_3804_, lean_object* v_i_3805_, lean_object* v_b_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_){
_start:
{
uint8_t v___x_41495__boxed_3810_; size_t v_sz_boxed_3811_; size_t v_i_boxed_3812_; lean_object* v_res_3813_; 
v___x_41495__boxed_3810_ = lean_unbox(v___x_3802_);
v_sz_boxed_3811_ = lean_unbox_usize(v_sz_3804_);
lean_dec(v_sz_3804_);
v_i_boxed_3812_ = lean_unbox_usize(v_i_3805_);
lean_dec(v_i_3805_);
v_res_3813_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__28_spec__42(v___x_41495__boxed_3810_, v_as_3803_, v_sz_boxed_3811_, v_i_boxed_3812_, v_b_3806_, v___y_3807_, v___y_3808_);
lean_dec(v___y_3808_);
lean_dec_ref(v___y_3807_);
lean_dec_ref(v_as_3803_);
return v_res_3813_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51(lean_object* v_as_3814_, size_t v_sz_3815_, size_t v_i_3816_, lean_object* v_b_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_){
_start:
{
lean_object* v___x_3821_; 
v___x_3821_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___redArg(v_as_3814_, v_sz_3815_, v_i_3816_, v_b_3817_, v___y_3818_);
return v___x_3821_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51___boxed(lean_object* v_as_3822_, lean_object* v_sz_3823_, lean_object* v_i_3824_, lean_object* v_b_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_){
_start:
{
size_t v_sz_boxed_3829_; size_t v_i_boxed_3830_; lean_object* v_res_3831_; 
v_sz_boxed_3829_ = lean_unbox_usize(v_sz_3823_);
lean_dec(v_sz_3823_);
v_i_boxed_3830_ = lean_unbox_usize(v_i_3824_);
lean_dec(v_i_3824_);
v_res_3831_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00main_spec__11_spec__26_spec__38_spec__51(v_as_3822_, v_sz_boxed_3829_, v_i_boxed_3830_, v_b_3825_, v___y_3826_, v___y_3827_);
lean_dec(v___y_3827_);
lean_dec_ref(v___y_3826_);
lean_dec_ref(v_as_3822_);
return v_res_3831_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44(lean_object* v_00_u03b2_3832_, lean_object* v_x_3833_, lean_object* v_x_3834_){
_start:
{
lean_object* v___x_3835_; 
v___x_3835_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__18_spec__24_spec__35_spec__44___redArg(v_x_3833_, v_x_3834_);
return v___x_3835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49(uint8_t v___x_3836_, lean_object* v_as_3837_, size_t v_sz_3838_, size_t v_i_3839_, lean_object* v_b_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_){
_start:
{
lean_object* v___x_3844_; 
v___x_3844_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___redArg(v___x_3836_, v_as_3837_, v_sz_3838_, v_i_3839_, v_b_3840_, v___y_3841_);
return v___x_3844_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49___boxed(lean_object* v___x_3845_, lean_object* v_as_3846_, lean_object* v_sz_3847_, lean_object* v_i_3848_, lean_object* v_b_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_){
_start:
{
uint8_t v___x_41526__boxed_3853_; size_t v_sz_boxed_3854_; size_t v_i_boxed_3855_; lean_object* v_res_3856_; 
v___x_41526__boxed_3853_ = lean_unbox(v___x_3845_);
v_sz_boxed_3854_ = lean_unbox_usize(v_sz_3847_);
lean_dec(v_sz_3847_);
v_i_boxed_3855_ = lean_unbox_usize(v_i_3848_);
lean_dec(v_i_3848_);
v_res_3856_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_addTraceAsMessages___at___00main_spec__9_spec__19_spec__27_spec__40_spec__49(v___x_41526__boxed_3853_, v_as_3846_, v_sz_boxed_3854_, v_i_boxed_3855_, v_b_3849_, v___y_3850_, v___y_3851_);
lean_dec(v___y_3851_);
lean_dec_ref(v___y_3850_);
lean_dec_ref(v_as_3846_);
return v_res_3856_;
}
}
lean_object* runtime_initialize_Init(uint8_t builtin);
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ForEachExpr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Path(uint8_t builtin);
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ModPkgExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_CSimpAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* runtime_initialize_Lean_Language_Lean(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_ExprDefEq(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LevelDefEq(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatchEqs(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Eqns(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_LeanIR(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Path(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ModPkgExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_CSimpAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ExprDefEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LevelDefEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatchEqs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_main___boxed__const__1 = _init_l_main___boxed__const__1();
lean_mark_persistent(l_main___boxed__const__1);
l_main___boxed__const__2 = _init_l_main___boxed__const__2();
lean_mark_persistent(l_main___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_LeanIR(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Util_ForEachExpr(uint8_t builtin);
lean_object* initialize_Lean_Util_Path(uint8_t builtin);
lean_object* initialize_Lean_Environment(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ModPkgExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_CSimpAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* initialize_Lean_Language_Lean(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_ExprDefEq(uint8_t builtin);
lean_object* initialize_Lean_Meta_LevelDefEq(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatchEqs(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_Eqns(uint8_t builtin);
lean_object* initialize_Lean_Parser(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanIR(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Path(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ModPkgExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_CSimpAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ExprDefEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LevelDefEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatchEqs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_LeanIR(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_LeanIR(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_LeanIR(builtin);
}
char ** lean_setup_args(int argc, char ** argv);
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    lean_object* in = lean_box(0);
    int i = argc;
    while (i > 1) {
      lean_object* n;
      i--;
      n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);
      in = n;
    }
    return _lean_main(in);
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  res = runtime_initialize_LeanIR(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = lean_unbox_uint32(lean_io_result_get_value(res));
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif
