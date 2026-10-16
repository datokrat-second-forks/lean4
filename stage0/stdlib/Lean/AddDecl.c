// Lean compiler output
// Module: Lean.AddDecl
// Imports: public import Lean.Meta.Sorry public import Lean.Util.CollectAxioms public import Lean.OriginalConstKind public import Lean.AutoDecl import Lean.Linter.Init import Lean.Compiler.MetaAttr import Lean.Util.RecDepth import all Lean.OriginalConstKind
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
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getSorry_x3f(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Declaration_getTopLevelNames(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Declaration_getNames(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
extern lean_object* l_Lean_debug_skipKernelTC;
lean_object* l_Lean_Environment_addDeclCore(lean_object*, size_t, size_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Kernel_Exception_toMessageData(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
extern lean_object* l_Lean_interruptExceptionId;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t l_Lean_Expr_isSyntheticSorry(lean_object*);
uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
uint8_t l_Lean_Declaration_hasSorry(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_checkSmartCastTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_of_nat(lean_object*);
double lean_float_div(double, double);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Environment_AddConstAsyncResult_commitCheckEnv(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Environment_registerNamespace(lean_object*, lean_object*);
uint8_t l_Lean_instBEqDefinitionSafety_beq(uint8_t, uint8_t);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_AddConstAsyncResult_commitConst(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_async;
lean_object* l_IO_CancelToken_new();
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Core_wrapAsyncAsSnapshot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Core_logSnapshotTask___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Environment_addConstAsync(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t);
uint8_t l_Lean_ConstantKind_ofConstantInfo(lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
extern lean_object* l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_ResolveName_backward_privateInPublic;
uint8_t l_Lean_Environment_containsOnBranch(lean_object*, lean_object*);
lean_object* lean_elab_environment_to_kernel_env(lean_object*);
lean_object* lean_add_decl(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* lean_add_decl_without_checking(lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_envLinterOptionsRef;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_envLinterSnapshotExt;
lean_object* l_Lean_markMeta(lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_addDecl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_addDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_snapshotEnvLinterOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_snapshotEnvLinterOptions___closed__0;
static lean_once_cell_t l_Lean_snapshotEnvLinterOptions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_snapshotEnvLinterOptions___closed__1;
static lean_once_cell_t l_Lean_snapshotEnvLinterOptions___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_snapshotEnvLinterOptions___closed__2;
LEAN_EXPORT lean_object* l_Lean_snapshotEnvLinterOptions(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_snapshotEnvLinterOptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_AddDecl_0__Lean_isNamespaceName(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_isNamespaceName___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_registerNamePrefixes_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_registerNamePrefixes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "warn"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sorry"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(187, 250, 156, 61, 219, 107, 141, 135)}};
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(122, 28, 133, 152, 90, 118, 109, 25)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "warn about uses of `sorry` in declarations added to the environment"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(218, 70, 28, 226, 178, 151, 16, 11)}};
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(239, 41, 235, 79, 240, 234, 67, 166)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_warn_sorry;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0 = (const lean_object*)&l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0;
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1;
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_warnIfUsesSorry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_warnIfUsesSorry___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_warnIfUsesSorry___closed__0 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__0_value;
static const lean_array_object l_Lean_warnIfUsesSorry___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_warnIfUsesSorry___closed__1 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__1_value;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__2;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__3;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__4;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__5;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__6;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__7;
static const lean_string_object l_Lean_warnIfUsesSorry___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hasSorry"};
static const lean_object* l_Lean_warnIfUsesSorry___closed__8 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__8_value;
static const lean_ctor_object l_Lean_warnIfUsesSorry___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_warnIfUsesSorry___closed__8_value),LEAN_SCALAR_PTR_LITERAL(111, 250, 94, 52, 248, 92, 138, 251)}};
static const lean_object* l_Lean_warnIfUsesSorry___closed__9 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__9_value;
static const lean_string_object l_Lean_warnIfUsesSorry___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "declaration uses `"};
static const lean_object* l_Lean_warnIfUsesSorry___closed__10 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__10_value;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__11;
static const lean_string_object l_Lean_warnIfUsesSorry___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_warnIfUsesSorry___closed__12 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__12_value;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__13;
static const lean_string_object l_Lean_warnIfUsesSorry___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "declaration uses `sorry`"};
static const lean_object* l_Lean_warnIfUsesSorry___closed__14 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__14_value;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__15;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__16;
static const lean_ctor_object l_Lean_warnIfUsesSorry___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_warnIfUsesSorry___closed__17 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "smartCast"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__0___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(57, 170, 136, 5, 11, 194, 178, 182)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__0___closed__1 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__0___closed__1_value;
LEAN_EXPORT uint8_t l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4_spec__6___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "`smartCast` must be applied to the types it casts between"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___closed__1 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___closed__1_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkSmartCasts___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkSmartCasts___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkSmartCasts___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkSmartCasts___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_checkSmartCasts_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_checkSmartCasts_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Lean_checkSmartCasts_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Lean_checkSmartCasts_spec__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_checkSmartCasts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_checkSmartCasts___closed__0 = (const lean_object*)&l_Lean_checkSmartCasts___closed__0_value;
static lean_once_cell_t l_Lean_checkSmartCasts___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_checkSmartCasts___closed__1;
static lean_once_cell_t l_Lean_checkSmartCasts___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkSmartCasts___closed__2;
static const lean_array_object l_Lean_checkSmartCasts___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_checkSmartCasts___closed__3 = (const lean_object*)&l_Lean_checkSmartCasts___closed__3_value;
static lean_once_cell_t l_Lean_checkSmartCasts___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkSmartCasts___closed__4;
static const lean_array_object l_Lean_checkSmartCasts___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_checkSmartCasts___closed__5 = (const lean_object*)&l_Lean_checkSmartCasts___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_checkSmartCasts(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkSmartCasts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "addDecl"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(105, 231, 4, 60, 254, 77, 195, 237)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "AddDecl"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(15, 97, 208, 69, 128, 127, 228, 3)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__7_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(162, 171, 242, 31, 173, 26, 83, 224)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__7_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__7_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__7_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(131, 0, 147, 169, 205, 191, 49, 101)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__9_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__9_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__9_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__10_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__9_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(226, 50, 5, 71, 0, 154, 50, 2)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__10_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__10_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__11_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__11_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__11_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__12_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__10_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__11_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(107, 66, 231, 246, 189, 183, 24, 140)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__12_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__12_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__13_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__12_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(86, 225, 3, 95, 219, 217, 43, 37)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__13_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__13_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__14_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__13_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(11, 165, 226, 64, 111, 214, 252, 38)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__14_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__14_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__15_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__14_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)(((size_t)(337188874) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(137, 24, 7, 166, 250, 194, 253, 69)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__15_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__15_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__16_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__16_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__16_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__17_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__15_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__16_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(26, 77, 113, 4, 170, 120, 135, 144)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__17_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__17_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__18_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__18_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__18_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__19_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__17_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__18_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(102, 231, 39, 100, 49, 121, 171, 214)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__19_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__19_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__20_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__19_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(167, 65, 246, 223, 87, 31, 234, 242)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__20_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__20_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sorryAx"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__1_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(196, 190, 164, 146, 38, 179, 69, 72)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__8 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__8_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__9 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__9_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__13 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__13_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__14 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__14_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "typechecking declarations "};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "type checking"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__0_value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Kernel"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__1 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__1_value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(213, 59, 86, 63, 192, 192, 9, 44)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__2 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "adding declarations "};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "no matching async adding rules, adding synchronously"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "addDeclCore"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__0_value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 15, 132, 113, 234, 47, 152, 164)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1_value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "no matching exporting rules, exporting as is"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__2 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__2_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "not exporting private declaration at all"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__4 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__4_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "private decl under `privateInPublic`, exporting as is"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__6 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__6_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "exporting definition "};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " as axiom"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__2 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__2_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "exporting theorem "};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__1 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__1_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "exporting opaque "};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__3 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__3_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_addDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_addDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addAndCompile(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addAndCompile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(lean_object* v_opts_1_, lean_object* v_opt_2_){
_start:
{
lean_object* v_name_3_; lean_object* v_defValue_4_; lean_object* v_map_5_; lean_object* v___x_6_; 
v_name_3_ = lean_ctor_get(v_opt_2_, 0);
v_defValue_4_ = lean_ctor_get(v_opt_2_, 1);
v_map_5_ = lean_ctor_get(v_opts_1_, 0);
v___x_6_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_5_, v_name_3_);
if (lean_obj_tag(v___x_6_) == 0)
{
uint8_t v___x_7_; 
v___x_7_ = lean_unbox(v_defValue_4_);
return v___x_7_;
}
else
{
lean_object* v_val_8_; 
v_val_8_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_val_8_);
lean_dec_ref_known(v___x_6_, 1);
if (lean_obj_tag(v_val_8_) == 1)
{
uint8_t v_v_9_; 
v_v_9_ = lean_ctor_get_uint8(v_val_8_, 0);
lean_dec_ref_known(v_val_8_, 0);
return v_v_9_;
}
else
{
uint8_t v___x_10_; 
lean_dec(v_val_8_);
v___x_10_ = lean_unbox(v_defValue_4_);
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0___boxed(lean_object* v_opts_11_, lean_object* v_opt_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_opts_11_, v_opt_12_);
lean_dec_ref(v_opt_12_);
lean_dec_ref(v_opts_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(lean_object* v_opts_15_, lean_object* v_opt_16_){
_start:
{
lean_object* v_name_17_; lean_object* v_defValue_18_; lean_object* v_map_19_; lean_object* v___x_20_; 
v_name_17_ = lean_ctor_get(v_opt_16_, 0);
v_defValue_18_ = lean_ctor_get(v_opt_16_, 1);
v_map_19_ = lean_ctor_get(v_opts_15_, 0);
v___x_20_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_19_, v_name_17_);
if (lean_obj_tag(v___x_20_) == 0)
{
lean_inc(v_defValue_18_);
return v_defValue_18_;
}
else
{
lean_object* v_val_21_; 
v_val_21_ = lean_ctor_get(v___x_20_, 0);
lean_inc(v_val_21_);
lean_dec_ref_known(v___x_20_, 1);
if (lean_obj_tag(v_val_21_) == 3)
{
lean_object* v_v_22_; 
v_v_22_ = lean_ctor_get(v_val_21_, 0);
lean_inc(v_v_22_);
lean_dec_ref_known(v_val_21_, 1);
return v_v_22_;
}
else
{
lean_dec(v_val_21_);
lean_inc(v_defValue_18_);
return v_defValue_18_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1___boxed(lean_object* v_opts_23_, lean_object* v_opt_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(v_opts_23_, v_opt_24_);
lean_dec_ref(v_opt_24_);
lean_dec_ref(v_opts_23_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_addDecl(lean_object* v_env_26_, lean_object* v_opts_27_, lean_object* v_decl_28_, lean_object* v_cancelTk_x3f_29_){
_start:
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = l_Lean_debug_skipKernelTC;
v___x_31_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_opts_27_, v___x_30_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; size_t v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; size_t v___x_36_; lean_object* v___x_37_; 
v___x_32_ = l_Lean_Core_getMaxHeartbeats(v_opts_27_);
v___x_33_ = lean_usize_of_nat(v___x_32_);
lean_dec(v___x_32_);
v___x_34_ = l_Lean_maxRecDepth;
v___x_35_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(v_opts_27_, v___x_34_);
v___x_36_ = lean_usize_of_nat(v___x_35_);
lean_dec(v___x_35_);
v___x_37_ = lean_add_decl(v_env_26_, v___x_33_, v___x_36_, v_decl_28_, v_cancelTk_x3f_29_);
return v___x_37_;
}
else
{
lean_object* v___x_38_; 
v___x_38_ = lean_add_decl_without_checking(v_env_26_, v_decl_28_);
return v___x_38_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_addDecl___boxed(lean_object* v_env_39_, lean_object* v_opts_40_, lean_object* v_decl_41_, lean_object* v_cancelTk_x3f_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_Kernel_Environment_addDecl(v_env_39_, v_opts_40_, v_decl_41_, v_cancelTk_x3f_42_);
lean_dec(v_cancelTk_x3f_42_);
lean_dec(v_decl_41_);
lean_dec_ref(v_opts_40_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(lean_object* v_env_44_, lean_object* v_opts_45_, lean_object* v_decl_46_, lean_object* v_cancelTk_x3f_47_){
_start:
{
lean_object* v___x_48_; size_t v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; size_t v___x_52_; lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_48_ = l_Lean_Core_getMaxHeartbeats(v_opts_45_);
v___x_49_ = lean_usize_of_nat(v___x_48_);
lean_dec(v___x_48_);
v___x_50_ = l_Lean_maxRecDepth;
v___x_51_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(v_opts_45_, v___x_50_);
v___x_52_ = lean_usize_of_nat(v___x_51_);
lean_dec(v___x_51_);
v___x_53_ = l_Lean_debug_skipKernelTC;
v___x_54_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_opts_45_, v___x_53_);
if (v___x_54_ == 0)
{
uint8_t v___x_55_; lean_object* v___x_56_; 
v___x_55_ = 1;
v___x_56_ = l_Lean_Environment_addDeclCore(v_env_44_, v___x_49_, v___x_52_, v_decl_46_, v_cancelTk_x3f_47_, v___x_55_);
return v___x_56_;
}
else
{
uint8_t v___x_57_; lean_object* v___x_58_; 
v___x_57_ = 0;
v___x_58_ = l_Lean_Environment_addDeclCore(v_env_44_, v___x_49_, v___x_52_, v_decl_46_, v_cancelTk_x3f_47_, v___x_57_);
return v___x_58_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux___boxed(lean_object* v_env_59_, lean_object* v_opts_60_, lean_object* v_decl_61_, lean_object* v_cancelTk_x3f_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_59_, v_opts_60_, v_decl_61_, v_cancelTk_x3f_62_);
lean_dec(v_cancelTk_x3f_62_);
lean_dec(v_decl_61_);
lean_dec_ref(v_opts_60_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg(lean_object* v_a_64_, lean_object* v_as_65_, size_t v_sz_66_, size_t v_i_67_, lean_object* v_b_68_){
_start:
{
uint8_t v___x_70_; 
v___x_70_ = lean_usize_dec_lt(v_i_67_, v_sz_66_);
if (v___x_70_ == 0)
{
lean_object* v___x_71_; 
v___x_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_71_, 0, v_b_68_);
return v___x_71_;
}
else
{
lean_object* v_a_72_; lean_object* v_name_73_; uint8_t v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; size_t v___x_77_; size_t v___x_78_; 
v_a_72_ = lean_array_uget_borrowed(v_as_65_, v_i_67_);
v_name_73_ = lean_ctor_get(v_a_72_, 0);
v___x_74_ = l_Lean_Linter_getLinterValue(v_a_72_, v_a_64_);
v___x_75_ = lean_box(v___x_74_);
lean_inc(v_name_73_);
v___x_76_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_73_, v___x_75_, v_b_68_);
v___x_77_ = ((size_t)1ULL);
v___x_78_ = lean_usize_add(v_i_67_, v___x_77_);
v_i_67_ = v___x_78_;
v_b_68_ = v___x_76_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg___boxed(lean_object* v_a_80_, lean_object* v_as_81_, lean_object* v_sz_82_, lean_object* v_i_83_, lean_object* v_b_84_, lean_object* v___y_85_){
_start:
{
size_t v_sz_boxed_86_; size_t v_i_boxed_87_; lean_object* v_res_88_; 
v_sz_boxed_86_ = lean_unbox_usize(v_sz_82_);
lean_dec(v_sz_82_);
v_i_boxed_87_ = lean_unbox_usize(v_i_83_);
lean_dec(v_i_83_);
v_res_88_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg(v_a_80_, v_as_81_, v_sz_boxed_86_, v_i_boxed_87_, v_b_84_);
lean_dec_ref(v_as_81_);
lean_dec_ref(v_a_80_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg(lean_object* v_o_89_, lean_object* v___y_90_){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v_env_94_; lean_object* v___x_95_; lean_object* v_toEnvExtension_96_; lean_object* v_asyncMode_97_; lean_object* v___x_98_; uint8_t v___x_99_; lean_object* v___x_100_; lean_object* v_merged_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_109_; 
v___x_92_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_93_ = lean_st_ref_get(v___y_90_);
v_env_94_ = lean_ctor_get(v___x_93_, 0);
lean_inc_ref(v_env_94_);
lean_dec(v___x_93_);
v___x_95_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_96_ = lean_ctor_get(v___x_95_, 0);
v_asyncMode_97_ = lean_ctor_get(v_toEnvExtension_96_, 2);
v___x_98_ = lean_box(0);
v___x_99_ = 0;
v___x_100_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_92_, v___x_95_, v_env_94_, v_asyncMode_97_, v___x_98_, v___x_99_);
v_merged_101_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_109_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_109_ == 0)
{
lean_object* v_unused_110_; 
v_unused_110_ = lean_ctor_get(v___x_100_, 1);
lean_dec(v_unused_110_);
v___x_103_ = v___x_100_;
v_isShared_104_ = v_isSharedCheck_109_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_merged_101_);
lean_dec(v___x_100_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_109_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_106_; 
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 1, v_merged_101_);
lean_ctor_set(v___x_103_, 0, v_o_89_);
v___x_106_ = v___x_103_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_o_89_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v_merged_101_);
v___x_106_ = v_reuseFailAlloc_108_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
lean_object* v___x_107_; 
v___x_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
return v___x_107_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___boxed(lean_object* v_o_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg(v_o_111_, v___y_112_);
lean_dec(v___y_112_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0(lean_object* v___y_115_, lean_object* v___y_116_){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_115_);
v___x_119_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg(v___x_118_, v___y_116_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0___boxed(lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0(v___y_120_, v___y_121_);
lean_dec(v___y_121_);
lean_dec_ref(v___y_120_);
return v_res_123_;
}
}
static lean_object* _init_l_Lean_snapshotEnvLinterOptions___closed__0(void){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_124_;
}
}
static lean_object* _init_l_Lean_snapshotEnvLinterOptions___closed__1(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__0, &l_Lean_snapshotEnvLinterOptions___closed__0_once, _init_l_Lean_snapshotEnvLinterOptions___closed__0);
v___x_126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
return v___x_126_;
}
}
static lean_object* _init_l_Lean_snapshotEnvLinterOptions___closed__2(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__1, &l_Lean_snapshotEnvLinterOptions___closed__1_once, _init_l_Lean_snapshotEnvLinterOptions___closed__1);
v___x_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_snapshotEnvLinterOptions(lean_object* v_declName_129_, lean_object* v_a_130_, lean_object* v_a_131_){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; uint8_t v___x_137_; 
v___x_133_ = l_Lean_Linter_envLinterOptionsRef;
v___x_134_ = lean_st_ref_get(v___x_133_);
v___x_135_ = lean_array_get_size(v___x_134_);
v___x_136_ = lean_unsigned_to_nat(0u);
v___x_137_ = lean_nat_dec_eq(v___x_135_, v___x_136_);
if (v___x_137_ == 0)
{
lean_object* v___x_138_; lean_object* v_a_139_; lean_object* v___x_140_; 
v___x_138_ = l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0(v_a_130_, v_a_131_);
v_a_139_ = lean_ctor_get(v___x_138_, 0);
lean_inc(v_a_139_);
lean_dec_ref(v___x_138_);
lean_inc(v_declName_129_);
v___x_140_ = l_Lean_isAutoDeclOrPrivate__Internal___redArg(v_declName_129_, v_a_131_);
if (lean_obj_tag(v___x_140_) == 0)
{
lean_object* v_a_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_194_; 
v_a_141_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_194_ == 0)
{
v___x_143_ = v___x_140_;
v_isShared_144_ = v_isSharedCheck_194_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_a_141_);
lean_dec(v___x_140_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_194_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
uint8_t v___x_145_; 
v___x_145_ = lean_unbox(v_a_141_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; size_t v_sz_147_; size_t v___x_148_; lean_object* v___x_149_; 
lean_del_object(v___x_143_);
v___x_146_ = lean_box(1);
v_sz_147_ = lean_array_size(v___x_134_);
v___x_148_ = ((size_t)0ULL);
v___x_149_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg(v_a_139_, v___x_134_, v_sz_147_, v___x_148_, v___x_146_);
lean_dec(v___x_134_);
lean_dec(v_a_139_);
if (lean_obj_tag(v___x_149_) == 0)
{
lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_181_; 
v_a_150_ = lean_ctor_get(v___x_149_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_149_);
if (v_isSharedCheck_181_ == 0)
{
v___x_152_ = v___x_149_;
v_isShared_153_ = v_isSharedCheck_181_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v___x_149_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_181_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_154_; lean_object* v_env_155_; lean_object* v_nextMacroScope_156_; lean_object* v_ngen_157_; lean_object* v_auxDeclNGen_158_; lean_object* v_traceState_159_; lean_object* v_recordedDeps_160_; lean_object* v_messages_161_; lean_object* v_infoState_162_; lean_object* v_snapshotTasks_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_179_; 
v___x_154_ = lean_st_ref_take(v_a_131_);
v_env_155_ = lean_ctor_get(v___x_154_, 0);
v_nextMacroScope_156_ = lean_ctor_get(v___x_154_, 1);
v_ngen_157_ = lean_ctor_get(v___x_154_, 2);
v_auxDeclNGen_158_ = lean_ctor_get(v___x_154_, 3);
v_traceState_159_ = lean_ctor_get(v___x_154_, 4);
v_recordedDeps_160_ = lean_ctor_get(v___x_154_, 6);
v_messages_161_ = lean_ctor_get(v___x_154_, 7);
v_infoState_162_ = lean_ctor_get(v___x_154_, 8);
v_snapshotTasks_163_ = lean_ctor_get(v___x_154_, 9);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_179_ == 0)
{
lean_object* v_unused_180_; 
v_unused_180_ = lean_ctor_get(v___x_154_, 5);
lean_dec(v_unused_180_);
v___x_165_ = v___x_154_;
v_isShared_166_ = v_isSharedCheck_179_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_snapshotTasks_163_);
lean_inc(v_infoState_162_);
lean_inc(v_messages_161_);
lean_inc(v_recordedDeps_160_);
lean_inc(v_traceState_159_);
lean_inc(v_auxDeclNGen_158_);
lean_inc(v_ngen_157_);
lean_inc(v_nextMacroScope_156_);
lean_inc(v_env_155_);
lean_dec(v___x_154_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_179_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v___x_167_; lean_object* v___x_168_; uint8_t v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_173_; 
v___x_167_ = lean_box(0);
v___x_168_ = l_Lean_Linter_envLinterSnapshotExt;
v___x_169_ = lean_unbox(v_a_141_);
lean_dec(v_a_141_);
v___x_170_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_168_, v_env_155_, v_declName_129_, v_a_150_, v___x_169_);
v___x_171_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 5, v___x_171_);
lean_ctor_set(v___x_165_, 0, v___x_170_);
v___x_173_ = v___x_165_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_170_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v_nextMacroScope_156_);
lean_ctor_set(v_reuseFailAlloc_178_, 2, v_ngen_157_);
lean_ctor_set(v_reuseFailAlloc_178_, 3, v_auxDeclNGen_158_);
lean_ctor_set(v_reuseFailAlloc_178_, 4, v_traceState_159_);
lean_ctor_set(v_reuseFailAlloc_178_, 5, v___x_171_);
lean_ctor_set(v_reuseFailAlloc_178_, 6, v_recordedDeps_160_);
lean_ctor_set(v_reuseFailAlloc_178_, 7, v_messages_161_);
lean_ctor_set(v_reuseFailAlloc_178_, 8, v_infoState_162_);
lean_ctor_set(v_reuseFailAlloc_178_, 9, v_snapshotTasks_163_);
v___x_173_ = v_reuseFailAlloc_178_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
lean_object* v___x_174_; lean_object* v___x_176_; 
v___x_174_ = lean_st_ref_put(v_a_131_, v___x_173_);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v___x_167_);
v___x_176_ = v___x_152_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v___x_167_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
}
}
else
{
lean_object* v_a_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_189_; 
lean_dec(v_a_141_);
lean_dec(v_declName_129_);
v_a_182_ = lean_ctor_get(v___x_149_, 0);
v_isSharedCheck_189_ = !lean_is_exclusive(v___x_149_);
if (v_isSharedCheck_189_ == 0)
{
v___x_184_ = v___x_149_;
v_isShared_185_ = v_isSharedCheck_189_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_a_182_);
lean_dec(v___x_149_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_189_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_187_; 
if (v_isShared_185_ == 0)
{
v___x_187_ = v___x_184_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_a_182_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
}
else
{
lean_object* v___x_190_; lean_object* v___x_192_; 
lean_dec(v_a_141_);
lean_dec(v_a_139_);
lean_dec(v___x_134_);
lean_dec(v_declName_129_);
v___x_190_ = lean_box(0);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 0, v___x_190_);
v___x_192_ = v___x_143_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v___x_190_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
}
else
{
lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_202_; 
lean_dec(v_a_139_);
lean_dec(v___x_134_);
lean_dec(v_declName_129_);
v_a_195_ = lean_ctor_get(v___x_140_, 0);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_202_ == 0)
{
v___x_197_ = v___x_140_;
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_140_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_200_; 
if (v_isShared_198_ == 0)
{
v___x_200_ = v___x_197_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v_a_195_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
}
else
{
lean_object* v___x_203_; lean_object* v___x_204_; 
lean_dec(v___x_134_);
lean_dec(v_declName_129_);
v___x_203_ = lean_box(0);
v___x_204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
return v___x_204_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_snapshotEnvLinterOptions___boxed(lean_object* v_declName_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lean_snapshotEnvLinterOptions(v_declName_205_, v_a_206_, v_a_207_);
lean_dec(v_a_207_);
lean_dec_ref(v_a_206_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0(lean_object* v_o_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg(v_o_210_, v___y_212_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___boxed(lean_object* v_o_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0(v_o_215_, v___y_216_, v___y_217_);
lean_dec(v___y_217_);
lean_dec_ref(v___y_216_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1(lean_object* v_a_220_, lean_object* v_as_221_, size_t v_sz_222_, size_t v_i_223_, lean_object* v_b_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg(v_a_220_, v_as_221_, v_sz_222_, v_i_223_, v_b_224_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___boxed(lean_object* v_a_229_, lean_object* v_as_230_, lean_object* v_sz_231_, lean_object* v_i_232_, lean_object* v_b_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
size_t v_sz_boxed_237_; size_t v_i_boxed_238_; lean_object* v_res_239_; 
v_sz_boxed_237_ = lean_unbox_usize(v_sz_231_);
lean_dec(v_sz_231_);
v_i_boxed_238_ = lean_unbox_usize(v_i_232_);
lean_dec(v_i_232_);
v_res_239_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1(v_a_229_, v_as_230_, v_sz_boxed_237_, v_i_boxed_238_, v_b_233_, v___y_234_, v___y_235_);
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
lean_dec_ref(v_as_230_);
lean_dec_ref(v_a_229_);
return v_res_239_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_AddDecl_0__Lean_isNamespaceName(lean_object* v_x_240_){
_start:
{
if (lean_obj_tag(v_x_240_) == 1)
{
lean_object* v_pre_241_; 
v_pre_241_ = lean_ctor_get(v_x_240_, 0);
if (lean_obj_tag(v_pre_241_) == 0)
{
uint8_t v___x_242_; 
v___x_242_ = 1;
return v___x_242_;
}
else
{
v_x_240_ = v_pre_241_;
goto _start;
}
}
else
{
uint8_t v___x_244_; 
v___x_244_ = 0;
return v___x_244_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_isNamespaceName___boxed(lean_object* v_x_245_){
_start:
{
uint8_t v_res_246_; lean_object* v_r_247_; 
v_res_246_ = l___private_Lean_AddDecl_0__Lean_isNamespaceName(v_x_245_);
lean_dec(v_x_245_);
v_r_247_ = lean_box(v_res_246_);
return v_r_247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_registerNamePrefixes_go(lean_object* v_env_248_, lean_object* v_x_249_){
_start:
{
if (lean_obj_tag(v_x_249_) == 1)
{
lean_object* v_pre_250_; uint8_t v___x_251_; 
v_pre_250_ = lean_ctor_get(v_x_249_, 0);
lean_inc(v_pre_250_);
lean_dec_ref_known(v_x_249_, 2);
v___x_251_ = l___private_Lean_AddDecl_0__Lean_isNamespaceName(v_pre_250_);
if (v___x_251_ == 0)
{
lean_dec(v_pre_250_);
return v_env_248_;
}
else
{
lean_object* v___x_252_; 
lean_inc(v_pre_250_);
v___x_252_ = l_Lean_Environment_registerNamespace(v_env_248_, v_pre_250_);
v_env_248_ = v___x_252_;
v_x_249_ = v_pre_250_;
goto _start;
}
}
else
{
lean_dec(v_x_249_);
return v_env_248_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_registerNamePrefixes(lean_object* v_env_254_, lean_object* v_name_255_){
_start:
{
lean_object* v_name_256_; uint32_t v___y_258_; 
v_name_256_ = l_Lean_privateToUserName(v_name_255_);
if (lean_obj_tag(v_name_256_) == 1)
{
lean_object* v_str_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v_str_262_ = lean_ctor_get(v_name_256_, 1);
v___x_263_ = lean_unsigned_to_nat(0u);
v___x_264_ = lean_string_utf8_byte_size(v_str_262_);
lean_inc_ref(v_str_262_);
v___x_265_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_265_, 0, v_str_262_);
lean_ctor_set(v___x_265_, 1, v___x_263_);
lean_ctor_set(v___x_265_, 2, v___x_264_);
v___x_266_ = l_String_Slice_Pos_get_x3f(v___x_265_, v___x_263_);
lean_dec_ref_known(v___x_265_, 3);
if (lean_obj_tag(v___x_266_) == 0)
{
uint32_t v___x_267_; 
v___x_267_ = 65;
v___y_258_ = v___x_267_;
goto v___jp_257_;
}
else
{
lean_object* v_val_268_; uint32_t v___x_269_; 
v_val_268_ = lean_ctor_get(v___x_266_, 0);
lean_inc(v_val_268_);
lean_dec_ref_known(v___x_266_, 1);
v___x_269_ = lean_unbox_uint32(v_val_268_);
lean_dec(v_val_268_);
v___y_258_ = v___x_269_;
goto v___jp_257_;
}
}
else
{
lean_dec(v_name_256_);
return v_env_254_;
}
v___jp_257_:
{
uint32_t v___x_259_; uint8_t v___x_260_; 
v___x_259_ = 95;
v___x_260_ = lean_uint32_dec_eq(v___y_258_, v___x_259_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; 
v___x_261_ = l___private_Lean_AddDecl_0__Lean_registerNamePrefixes_go(v_env_254_, v_name_256_);
return v___x_261_;
}
else
{
lean_dec(v_name_256_);
return v_env_254_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0(lean_object* v_name_270_, lean_object* v_decl_271_, lean_object* v_ref_272_){
_start:
{
lean_object* v_defValue_274_; lean_object* v_descr_275_; lean_object* v_deprecation_x3f_276_; lean_object* v___x_277_; uint8_t v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v_defValue_274_ = lean_ctor_get(v_decl_271_, 0);
v_descr_275_ = lean_ctor_get(v_decl_271_, 1);
v_deprecation_x3f_276_ = lean_ctor_get(v_decl_271_, 2);
v___x_277_ = lean_alloc_ctor(1, 0, 1);
v___x_278_ = lean_unbox(v_defValue_274_);
lean_ctor_set_uint8(v___x_277_, 0, v___x_278_);
lean_inc(v_deprecation_x3f_276_);
lean_inc_ref(v_descr_275_);
lean_inc_n(v_name_270_, 2);
v___x_279_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_279_, 0, v_name_270_);
lean_ctor_set(v___x_279_, 1, v_ref_272_);
lean_ctor_set(v___x_279_, 2, v___x_277_);
lean_ctor_set(v___x_279_, 3, v_descr_275_);
lean_ctor_set(v___x_279_, 4, v_deprecation_x3f_276_);
v___x_280_ = lean_register_option(v_name_270_, v___x_279_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_288_; 
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_288_ == 0)
{
lean_object* v_unused_289_; 
v_unused_289_ = lean_ctor_get(v___x_280_, 0);
lean_dec(v_unused_289_);
v___x_282_ = v___x_280_;
v_isShared_283_ = v_isSharedCheck_288_;
goto v_resetjp_281_;
}
else
{
lean_dec(v___x_280_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_288_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_284_; lean_object* v___x_286_; 
lean_inc(v_defValue_274_);
v___x_284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_284_, 0, v_name_270_);
lean_ctor_set(v___x_284_, 1, v_defValue_274_);
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 0, v___x_284_);
v___x_286_ = v___x_282_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_284_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
else
{
lean_object* v_a_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_297_; 
lean_dec(v_name_270_);
v_a_290_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_297_ == 0)
{
v___x_292_ = v___x_280_;
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_a_290_);
lean_dec(v___x_280_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_295_; 
if (v_isShared_293_ == 0)
{
v___x_295_ = v___x_292_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_290_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_298_, lean_object* v_decl_299_, lean_object* v_ref_300_, lean_object* v_a_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0(v_name_298_, v_decl_299_, v_ref_300_);
lean_dec_ref(v_decl_299_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_320_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_));
v___x_321_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_));
v___x_322_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_));
v___x_323_ = l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0(v___x_320_, v___x_321_, v___x_322_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4____boxed(lean_object* v_a_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_();
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0(lean_object* v_msgData_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_){
_start:
{
lean_object* v___x_332_; lean_object* v_env_333_; uint8_t v___x_334_; lean_object* v_env_335_; lean_object* v___x_336_; lean_object* v_toCold_337_; lean_object* v_mctx_338_; lean_object* v_lctx_339_; lean_object* v_options_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_332_ = lean_st_ref_get(v___y_330_);
v_env_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc_ref(v_env_333_);
lean_dec(v___x_332_);
v___x_334_ = 0;
v_env_335_ = l_Lean_Environment_setRecordingDeps(v_env_333_, v___x_334_);
v___x_336_ = lean_st_ref_get(v___y_328_);
v_toCold_337_ = lean_ctor_get(v___y_329_, 0);
v_mctx_338_ = lean_ctor_get(v___x_336_, 0);
lean_inc_ref(v_mctx_338_);
lean_dec(v___x_336_);
v_lctx_339_ = lean_ctor_get(v___y_327_, 2);
v_options_340_ = lean_ctor_get(v_toCold_337_, 2);
lean_inc_ref(v_options_340_);
lean_inc_ref(v_lctx_339_);
v___x_341_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_341_, 0, v_env_335_);
lean_ctor_set(v___x_341_, 1, v_mctx_338_);
lean_ctor_set(v___x_341_, 2, v_lctx_339_);
lean_ctor_set(v___x_341_, 3, v_options_340_);
v___x_342_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
lean_ctor_set(v___x_342_, 1, v_msgData_326_);
v___x_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0___boxed(lean_object* v_msgData_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_){
_start:
{
lean_object* v_res_350_; 
v_res_350_ = l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0(v_msgData_344_, v___y_345_, v___y_346_, v___y_347_, v___y_348_);
lean_dec(v___y_348_);
lean_dec_ref(v___y_347_);
lean_dec(v___y_346_);
lean_dec_ref(v___y_345_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___lam__0(lean_object* v_s_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_374_; 
lean_inc_ref(v_s_351_);
v___x_358_ = l_Lean_MessageData_ofExpr(v_s_351_);
v___x_359_ = l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0(v___x_358_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
v_a_360_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_374_ == 0)
{
v___x_362_ = v___x_359_;
v_isShared_363_ = v_isSharedCheck_374_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_374_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_364_; lean_object* v___x_365_; uint8_t v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_364_ = lean_st_ref_take(v___y_352_);
v___x_365_ = lean_box(0);
v___x_366_ = l_Lean_Expr_isSyntheticSorry(v_s_351_);
lean_dec_ref(v_s_351_);
v___x_367_ = lean_box(v___x_366_);
v___x_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
lean_ctor_set(v___x_368_, 1, v_a_360_);
v___x_369_ = lean_array_push(v___x_364_, v___x_368_);
v___x_370_ = lean_st_ref_put(v___y_352_, v___x_369_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v___x_365_);
v___x_372_ = v___x_362_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_365_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___lam__0___boxed(lean_object* v_s_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l_Lean_warnIfUsesSorry___lam__0(v_s_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_);
lean_dec(v___y_380_);
lean_dec_ref(v___y_379_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
lean_dec(v___y_376_);
return v_res_382_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0(uint8_t v_suppressElabErrors_391_, uint8_t v___y_392_, lean_object* v_x_393_){
_start:
{
if (lean_obj_tag(v_x_393_) == 1)
{
lean_object* v_pre_394_; 
v_pre_394_ = lean_ctor_get(v_x_393_, 0);
switch(lean_obj_tag(v_pre_394_))
{
case 1:
{
lean_object* v_pre_395_; 
v_pre_395_ = lean_ctor_get(v_pre_394_, 0);
switch(lean_obj_tag(v_pre_395_))
{
case 0:
{
lean_object* v_str_396_; lean_object* v_str_397_; lean_object* v___x_398_; uint8_t v___x_399_; 
v_str_396_ = lean_ctor_get(v_x_393_, 1);
v_str_397_ = lean_ctor_get(v_pre_394_, 1);
v___x_398_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__0));
v___x_399_ = lean_string_dec_eq(v_str_397_, v___x_398_);
if (v___x_399_ == 0)
{
lean_object* v___x_400_; uint8_t v___x_401_; 
v___x_400_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__1));
v___x_401_ = lean_string_dec_eq(v_str_397_, v___x_400_);
if (v___x_401_ == 0)
{
return v___x_401_;
}
else
{
lean_object* v___x_402_; uint8_t v___x_403_; 
v___x_402_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__2));
v___x_403_ = lean_string_dec_eq(v_str_396_, v___x_402_);
if (v___x_403_ == 0)
{
return v___x_403_;
}
else
{
return v_suppressElabErrors_391_;
}
}
}
else
{
lean_object* v___x_404_; uint8_t v___x_405_; 
v___x_404_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__3));
v___x_405_ = lean_string_dec_eq(v_str_396_, v___x_404_);
if (v___x_405_ == 0)
{
return v___x_405_;
}
else
{
return v_suppressElabErrors_391_;
}
}
}
case 1:
{
lean_object* v_pre_406_; 
v_pre_406_ = lean_ctor_get(v_pre_395_, 0);
if (lean_obj_tag(v_pre_406_) == 0)
{
lean_object* v_str_407_; lean_object* v_str_408_; lean_object* v_str_409_; lean_object* v___x_410_; uint8_t v___x_411_; 
v_str_407_ = lean_ctor_get(v_x_393_, 1);
v_str_408_ = lean_ctor_get(v_pre_394_, 1);
v_str_409_ = lean_ctor_get(v_pre_395_, 1);
v___x_410_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__4));
v___x_411_ = lean_string_dec_eq(v_str_409_, v___x_410_);
if (v___x_411_ == 0)
{
return v___x_411_;
}
else
{
lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_412_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__5));
v___x_413_ = lean_string_dec_eq(v_str_408_, v___x_412_);
if (v___x_413_ == 0)
{
return v___x_413_;
}
else
{
lean_object* v___x_414_; uint8_t v___x_415_; 
v___x_414_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__6));
v___x_415_ = lean_string_dec_eq(v_str_407_, v___x_414_);
if (v___x_415_ == 0)
{
return v___x_415_;
}
else
{
return v_suppressElabErrors_391_;
}
}
}
}
else
{
return v___y_392_;
}
}
default: 
{
return v___y_392_;
}
}
}
case 0:
{
lean_object* v_str_416_; lean_object* v___x_417_; uint8_t v___x_418_; 
v_str_416_ = lean_ctor_get(v_x_393_, 1);
v___x_417_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__7));
v___x_418_ = lean_string_dec_eq(v_str_416_, v___x_417_);
if (v___x_418_ == 0)
{
return v___x_418_;
}
else
{
return v_suppressElabErrors_391_;
}
}
default: 
{
return v___y_392_;
}
}
}
else
{
return v___y_392_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___boxed(lean_object* v_suppressElabErrors_419_, lean_object* v___y_420_, lean_object* v_x_421_){
_start:
{
uint8_t v_suppressElabErrors_boxed_422_; uint8_t v___y_15084__boxed_423_; uint8_t v_res_424_; lean_object* v_r_425_; 
v_suppressElabErrors_boxed_422_ = lean_unbox(v_suppressElabErrors_419_);
v___y_15084__boxed_423_ = lean_unbox(v___y_420_);
v_res_424_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0(v_suppressElabErrors_boxed_422_, v___y_15084__boxed_423_, v_x_421_);
lean_dec(v_x_421_);
v_r_425_ = lean_box(v_res_424_);
return v_r_425_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0(void){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_426_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__0, &l_Lean_snapshotEnvLinterOptions___closed__0_once, _init_l_Lean_snapshotEnvLinterOptions___closed__0);
v___x_427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_427_, 0, v___x_426_);
return v___x_427_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_428_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_429_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0);
v___x_430_ = lean_unsigned_to_nat(0u);
v___x_431_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
lean_ctor_set(v___x_431_, 1, v___x_430_);
lean_ctor_set(v___x_431_, 2, v___x_430_);
lean_ctor_set(v___x_431_, 3, v___x_430_);
lean_ctor_set(v___x_431_, 4, v___x_429_);
lean_ctor_set(v___x_431_, 5, v___x_429_);
lean_ctor_set(v___x_431_, 6, v___x_429_);
lean_ctor_set(v___x_431_, 7, v___x_429_);
lean_ctor_set(v___x_431_, 8, v___x_429_);
lean_ctor_set(v___x_431_, 9, v___x_429_);
lean_ctor_set(v___x_431_, 10, v___x_429_);
lean_ctor_set(v___x_431_, 11, v___x_428_);
return v___x_431_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2(void){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_432_ = lean_unsigned_to_nat(32u);
v___x_433_ = lean_mk_empty_array_with_capacity(v___x_432_);
v___x_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
return v___x_434_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3(void){
_start:
{
size_t v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_435_ = ((size_t)5ULL);
v___x_436_ = lean_unsigned_to_nat(0u);
v___x_437_ = lean_unsigned_to_nat(32u);
v___x_438_ = lean_mk_empty_array_with_capacity(v___x_437_);
v___x_439_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2);
v___x_440_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_440_, 0, v___x_439_);
lean_ctor_set(v___x_440_, 1, v___x_438_);
lean_ctor_set(v___x_440_, 2, v___x_436_);
lean_ctor_set(v___x_440_, 3, v___x_436_);
lean_ctor_set_usize(v___x_440_, 4, v___x_435_);
return v___x_440_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4(void){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_441_ = lean_box(1);
v___x_442_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3);
v___x_443_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0);
v___x_444_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
lean_ctor_set(v___x_444_, 1, v___x_442_);
lean_ctor_set(v___x_444_, 2, v___x_441_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(lean_object* v_msgData_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v___x_449_; lean_object* v_toCold_450_; lean_object* v_env_451_; lean_object* v_options_452_; uint8_t v___x_453_; lean_object* v_env_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_449_ = lean_st_ref_get(v___y_447_);
v_toCold_450_ = lean_ctor_get(v___y_446_, 0);
v_env_451_ = lean_ctor_get(v___x_449_, 0);
lean_inc_ref(v_env_451_);
lean_dec(v___x_449_);
v_options_452_ = lean_ctor_get(v_toCold_450_, 2);
v___x_453_ = 0;
v_env_454_ = l_Lean_Environment_setRecordingDeps(v_env_451_, v___x_453_);
v___x_455_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1);
v___x_456_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4);
lean_inc_ref(v_options_452_);
v___x_457_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_457_, 0, v_env_454_);
lean_ctor_set(v___x_457_, 1, v___x_455_);
lean_ctor_set(v___x_457_, 2, v___x_456_);
lean_ctor_set(v___x_457_, 3, v_options_452_);
v___x_458_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
lean_ctor_set(v___x_458_, 1, v_msgData_445_);
v___x_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___boxed(lean_object* v_msgData_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(v_msgData_460_, v___y_461_, v___y_462_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9(lean_object* v_ref_466_, lean_object* v_msgData_467_, uint8_t v_severity_468_, uint8_t v_isSilent_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
uint8_t v___y_474_; uint8_t v___y_475_; lean_object* v___y_476_; lean_object* v___y_477_; lean_object* v___y_478_; lean_object* v___y_479_; lean_object* v___y_480_; lean_object* v_toCold_481_; lean_object* v___y_482_; lean_object* v___y_511_; lean_object* v___y_512_; uint8_t v___y_513_; lean_object* v___y_514_; uint8_t v___y_515_; uint8_t v___y_516_; lean_object* v___y_517_; lean_object* v___y_518_; uint8_t v___y_538_; lean_object* v___y_539_; lean_object* v___y_540_; uint8_t v___y_541_; uint8_t v___y_542_; lean_object* v___y_543_; lean_object* v___y_544_; uint8_t v___y_548_; uint8_t v___y_549_; uint8_t v___y_550_; uint8_t v___x_561_; uint8_t v___y_563_; uint8_t v___y_564_; uint8_t v___y_565_; uint8_t v___y_567_; uint8_t v___x_575_; 
v___x_561_ = 2;
v___x_575_ = l_Lean_instBEqMessageSeverity_beq(v_severity_468_, v___x_561_);
if (v___x_575_ == 0)
{
v___y_567_ = v___x_575_;
goto v___jp_566_;
}
else
{
uint8_t v___x_576_; 
lean_inc_ref(v_msgData_467_);
v___x_576_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_467_);
v___y_567_ = v___x_576_;
goto v___jp_566_;
}
v___jp_473_:
{
lean_object* v_currNamespace_483_; lean_object* v_openDecls_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v_env_489_; lean_object* v_nextMacroScope_490_; lean_object* v_ngen_491_; lean_object* v_auxDeclNGen_492_; lean_object* v_traceState_493_; lean_object* v_cache_494_; lean_object* v_recordedDeps_495_; lean_object* v_messages_496_; lean_object* v_infoState_497_; lean_object* v_snapshotTasks_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_509_; 
v_currNamespace_483_ = lean_ctor_get(v_toCold_481_, 4);
v_openDecls_484_ = lean_ctor_get(v_toCold_481_, 5);
lean_inc(v_openDecls_484_);
lean_inc(v_currNamespace_483_);
v___x_485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_485_, 0, v_currNamespace_483_);
lean_ctor_set(v___x_485_, 1, v_openDecls_484_);
v___x_486_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_486_, 0, v___x_485_);
lean_ctor_set(v___x_486_, 1, v___y_476_);
lean_inc_ref(v___y_480_);
lean_inc_ref(v___y_478_);
v___x_487_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_487_, 0, v___y_478_);
lean_ctor_set(v___x_487_, 1, v___y_479_);
lean_ctor_set(v___x_487_, 2, v___y_477_);
lean_ctor_set(v___x_487_, 3, v___y_480_);
lean_ctor_set(v___x_487_, 4, v___x_486_);
lean_ctor_set_uint8(v___x_487_, sizeof(void*)*5, v___y_475_);
lean_ctor_set_uint8(v___x_487_, sizeof(void*)*5 + 1, v___y_474_);
lean_ctor_set_uint8(v___x_487_, sizeof(void*)*5 + 2, v_isSilent_469_);
v___x_488_ = lean_st_ref_take(v___y_482_);
v_env_489_ = lean_ctor_get(v___x_488_, 0);
v_nextMacroScope_490_ = lean_ctor_get(v___x_488_, 1);
v_ngen_491_ = lean_ctor_get(v___x_488_, 2);
v_auxDeclNGen_492_ = lean_ctor_get(v___x_488_, 3);
v_traceState_493_ = lean_ctor_get(v___x_488_, 4);
v_cache_494_ = lean_ctor_get(v___x_488_, 5);
v_recordedDeps_495_ = lean_ctor_get(v___x_488_, 6);
v_messages_496_ = lean_ctor_get(v___x_488_, 7);
v_infoState_497_ = lean_ctor_get(v___x_488_, 8);
v_snapshotTasks_498_ = lean_ctor_get(v___x_488_, 9);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_509_ == 0)
{
v___x_500_ = v___x_488_;
v_isShared_501_ = v_isSharedCheck_509_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_snapshotTasks_498_);
lean_inc(v_infoState_497_);
lean_inc(v_messages_496_);
lean_inc(v_recordedDeps_495_);
lean_inc(v_cache_494_);
lean_inc(v_traceState_493_);
lean_inc(v_auxDeclNGen_492_);
lean_inc(v_ngen_491_);
lean_inc(v_nextMacroScope_490_);
lean_inc(v_env_489_);
lean_dec(v___x_488_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_509_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_505_; 
v___x_502_ = lean_box(0);
v___x_503_ = l_Lean_MessageLog_add(v___x_487_, v_messages_496_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 7, v___x_503_);
v___x_505_ = v___x_500_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_env_489_);
lean_ctor_set(v_reuseFailAlloc_508_, 1, v_nextMacroScope_490_);
lean_ctor_set(v_reuseFailAlloc_508_, 2, v_ngen_491_);
lean_ctor_set(v_reuseFailAlloc_508_, 3, v_auxDeclNGen_492_);
lean_ctor_set(v_reuseFailAlloc_508_, 4, v_traceState_493_);
lean_ctor_set(v_reuseFailAlloc_508_, 5, v_cache_494_);
lean_ctor_set(v_reuseFailAlloc_508_, 6, v_recordedDeps_495_);
lean_ctor_set(v_reuseFailAlloc_508_, 7, v___x_503_);
lean_ctor_set(v_reuseFailAlloc_508_, 8, v_infoState_497_);
lean_ctor_set(v_reuseFailAlloc_508_, 9, v_snapshotTasks_498_);
v___x_505_ = v_reuseFailAlloc_508_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_506_ = lean_st_ref_put(v___y_482_, v___x_505_);
v___x_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_507_, 0, v___x_502_);
return v___x_507_;
}
}
}
v___jp_510_:
{
lean_object* v_fileName_519_; lean_object* v_fileMap_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_536_; 
v_fileName_519_ = lean_ctor_get(v___y_517_, 0);
v_fileMap_520_ = lean_ctor_get(v___y_517_, 1);
v___x_521_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_467_);
v___x_522_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(v___x_521_, v___y_470_, v___y_471_);
v_a_523_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_536_ == 0)
{
v___x_525_ = v___x_522_;
v_isShared_526_ = v_isSharedCheck_536_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_522_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_536_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
lean_inc_ref_n(v_fileMap_520_, 2);
v___x_527_ = l_Lean_FileMap_toPosition(v_fileMap_520_, v___y_514_);
lean_dec(v___y_514_);
v___x_528_ = l_Lean_FileMap_toPosition(v_fileMap_520_, v___y_518_);
lean_dec(v___y_518_);
v___x_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
v___x_530_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0));
if (v___y_513_ == 0)
{
lean_del_object(v___x_525_);
lean_dec_ref(v___y_511_);
v___y_474_ = v___y_516_;
v___y_475_ = v___y_515_;
v___y_476_ = v_a_523_;
v___y_477_ = v___x_529_;
v___y_478_ = v_fileName_519_;
v___y_479_ = v___x_527_;
v___y_480_ = v___x_530_;
v_toCold_481_ = v___y_512_;
v___y_482_ = v___y_471_;
goto v___jp_473_;
}
else
{
uint8_t v___x_531_; 
lean_inc(v_a_523_);
v___x_531_ = l_Lean_MessageData_hasTag(v___y_511_, v_a_523_);
if (v___x_531_ == 0)
{
lean_object* v___x_532_; lean_object* v___x_534_; 
lean_dec_ref_known(v___x_529_, 1);
lean_dec_ref(v___x_527_);
lean_dec(v_a_523_);
v___x_532_ = lean_box(0);
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 0, v___x_532_);
v___x_534_ = v___x_525_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_532_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
else
{
lean_del_object(v___x_525_);
v___y_474_ = v___y_516_;
v___y_475_ = v___y_515_;
v___y_476_ = v_a_523_;
v___y_477_ = v___x_529_;
v___y_478_ = v_fileName_519_;
v___y_479_ = v___x_527_;
v___y_480_ = v___x_530_;
v_toCold_481_ = v___y_512_;
v___y_482_ = v___y_471_;
goto v___jp_473_;
}
}
}
}
v___jp_537_:
{
lean_object* v___x_545_; 
v___x_545_ = l_Lean_Syntax_getTailPos_x3f(v___y_543_, v___y_542_);
lean_dec(v___y_543_);
if (lean_obj_tag(v___x_545_) == 0)
{
lean_inc(v___y_544_);
v___y_511_ = v___y_539_;
v___y_512_ = v___y_540_;
v___y_513_ = v___y_538_;
v___y_514_ = v___y_544_;
v___y_515_ = v___y_542_;
v___y_516_ = v___y_541_;
v___y_517_ = v___y_540_;
v___y_518_ = v___y_544_;
goto v___jp_510_;
}
else
{
lean_object* v_val_546_; 
v_val_546_ = lean_ctor_get(v___x_545_, 0);
lean_inc(v_val_546_);
lean_dec_ref_known(v___x_545_, 1);
v___y_511_ = v___y_539_;
v___y_512_ = v___y_540_;
v___y_513_ = v___y_538_;
v___y_514_ = v___y_544_;
v___y_515_ = v___y_542_;
v___y_516_ = v___y_541_;
v___y_517_ = v___y_540_;
v___y_518_ = v_val_546_;
goto v___jp_510_;
}
}
v___jp_547_:
{
lean_object* v_toCold_551_; lean_object* v_ref_552_; uint8_t v_suppressElabErrors_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___f_556_; lean_object* v_ref_557_; lean_object* v___x_558_; 
v_toCold_551_ = lean_ctor_get(v___y_470_, 0);
v_ref_552_ = lean_ctor_get(v___y_470_, 2);
v_suppressElabErrors_553_ = lean_ctor_get_uint8(v___y_470_, sizeof(void*)*3 + 2);
v___x_554_ = lean_box(v_suppressElabErrors_553_);
v___x_555_ = lean_box(v___y_548_);
v___f_556_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___boxed), 3, 2);
lean_closure_set(v___f_556_, 0, v___x_554_);
lean_closure_set(v___f_556_, 1, v___x_555_);
v_ref_557_ = l_Lean_replaceRef(v_ref_466_, v_ref_552_);
v___x_558_ = l_Lean_Syntax_getPos_x3f(v_ref_557_, v___y_549_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v___x_559_; 
v___x_559_ = lean_unsigned_to_nat(0u);
v___y_538_ = v_suppressElabErrors_553_;
v___y_539_ = v___f_556_;
v___y_540_ = v_toCold_551_;
v___y_541_ = v___y_550_;
v___y_542_ = v___y_549_;
v___y_543_ = v_ref_557_;
v___y_544_ = v___x_559_;
goto v___jp_537_;
}
else
{
lean_object* v_val_560_; 
v_val_560_ = lean_ctor_get(v___x_558_, 0);
lean_inc(v_val_560_);
lean_dec_ref_known(v___x_558_, 1);
v___y_538_ = v_suppressElabErrors_553_;
v___y_539_ = v___f_556_;
v___y_540_ = v_toCold_551_;
v___y_541_ = v___y_550_;
v___y_542_ = v___y_549_;
v___y_543_ = v_ref_557_;
v___y_544_ = v_val_560_;
goto v___jp_537_;
}
}
v___jp_562_:
{
if (v___y_565_ == 0)
{
v___y_548_ = v___y_563_;
v___y_549_ = v___y_564_;
v___y_550_ = v_severity_468_;
goto v___jp_547_;
}
else
{
v___y_548_ = v___y_563_;
v___y_549_ = v___y_564_;
v___y_550_ = v___x_561_;
goto v___jp_547_;
}
}
v___jp_566_:
{
if (v___y_567_ == 0)
{
uint8_t v___x_568_; uint8_t v___x_569_; 
v___x_568_ = 1;
v___x_569_ = l_Lean_instBEqMessageSeverity_beq(v_severity_468_, v___x_568_);
if (v___x_569_ == 0)
{
v___y_563_ = v___y_567_;
v___y_564_ = v___y_567_;
v___y_565_ = v___x_569_;
goto v___jp_562_;
}
else
{
lean_object* v___x_570_; lean_object* v___x_571_; uint8_t v___x_572_; 
v___x_570_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_470_);
v___x_571_ = l_Lean_warningAsError;
v___x_572_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v___x_570_, v___x_571_);
lean_dec_ref(v___x_570_);
v___y_563_ = v___y_567_;
v___y_564_ = v___y_567_;
v___y_565_ = v___x_572_;
goto v___jp_562_;
}
}
else
{
lean_object* v___x_573_; lean_object* v___x_574_; 
lean_dec_ref(v_msgData_467_);
v___x_573_ = lean_box(0);
v___x_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_574_, 0, v___x_573_);
return v___x_574_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___boxed(lean_object* v_ref_577_, lean_object* v_msgData_578_, lean_object* v_severity_579_, lean_object* v_isSilent_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_){
_start:
{
uint8_t v_severity_boxed_584_; uint8_t v_isSilent_boxed_585_; lean_object* v_res_586_; 
v_severity_boxed_584_ = lean_unbox(v_severity_579_);
v_isSilent_boxed_585_ = lean_unbox(v_isSilent_580_);
v_res_586_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9(v_ref_577_, v_msgData_578_, v_severity_boxed_584_, v_isSilent_boxed_585_, v___y_581_, v___y_582_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
lean_dec(v_ref_577_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4(lean_object* v_msgData_587_, uint8_t v_severity_588_, uint8_t v_isSilent_589_, lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
lean_object* v_ref_593_; lean_object* v___x_594_; 
v_ref_593_ = lean_ctor_get(v___y_590_, 2);
v___x_594_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9(v_ref_593_, v_msgData_587_, v_severity_588_, v_isSilent_589_, v___y_590_, v___y_591_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4___boxed(lean_object* v_msgData_595_, lean_object* v_severity_596_, lean_object* v_isSilent_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_){
_start:
{
uint8_t v_severity_boxed_601_; uint8_t v_isSilent_boxed_602_; lean_object* v_res_603_; 
v_severity_boxed_601_ = lean_unbox(v_severity_596_);
v_isSilent_boxed_602_ = lean_unbox(v_isSilent_597_);
v_res_603_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4(v_msgData_595_, v_severity_boxed_601_, v_isSilent_boxed_602_, v___y_598_, v___y_599_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2(lean_object* v_msgData_604_, lean_object* v___y_605_, lean_object* v___y_606_){
_start:
{
uint8_t v___x_608_; uint8_t v___x_609_; lean_object* v___x_610_; 
v___x_608_ = 1;
v___x_609_ = 0;
v___x_610_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4(v_msgData_604_, v___x_608_, v___x_609_, v___y_605_, v___y_606_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2___boxed(lean_object* v_msgData_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2(v_msgData_611_, v___y_612_, v___y_613_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3(lean_object* v_as_619_, size_t v_sz_620_, size_t v_i_621_, lean_object* v_b_622_){
_start:
{
uint8_t v___x_623_; 
v___x_623_ = lean_usize_dec_lt(v_i_621_, v_sz_620_);
if (v___x_623_ == 0)
{
lean_inc_ref(v_b_622_);
return v_b_622_;
}
else
{
lean_object* v_a_624_; lean_object* v_fst_625_; lean_object* v___x_626_; uint8_t v___x_627_; 
v_a_624_ = lean_array_uget_borrowed(v_as_619_, v_i_621_);
v_fst_625_ = lean_ctor_get(v_a_624_, 0);
v___x_626_ = lean_box(0);
v___x_627_ = lean_unbox(v_fst_625_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; size_t v___x_629_; size_t v___x_630_; 
v___x_628_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___closed__0));
v___x_629_ = ((size_t)1ULL);
v___x_630_ = lean_usize_add(v_i_621_, v___x_629_);
v_i_621_ = v___x_630_;
v_b_622_ = v___x_628_;
goto _start;
}
else
{
lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
lean_inc(v_a_624_);
v___x_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_632_, 0, v_a_624_);
v___x_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
v___x_634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
lean_ctor_set(v___x_634_, 1, v___x_626_);
return v___x_634_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___boxed(lean_object* v_as_635_, lean_object* v_sz_636_, lean_object* v_i_637_, lean_object* v_b_638_){
_start:
{
size_t v_sz_boxed_639_; size_t v_i_boxed_640_; lean_object* v_res_641_; 
v_sz_boxed_639_ = lean_unbox_usize(v_sz_636_);
lean_dec(v_sz_636_);
v_i_boxed_640_ = lean_unbox_usize(v_i_637_);
lean_dec(v_i_637_);
v_res_641_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3(v_as_635_, v_sz_boxed_639_, v_i_boxed_640_, v_b_638_);
lean_dec_ref(v_b_638_);
lean_dec_ref(v_as_635_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0(lean_object* v_fn_642_, lean_object* v_e_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_){
_start:
{
lean_object* v___x_650_; 
v___x_650_ = l_Lean_Expr_getSorry_x3f(v_e_643_);
if (lean_obj_tag(v___x_650_) == 1)
{
lean_object* v_val_651_; lean_object* v___x_652_; 
v_val_651_ = lean_ctor_get(v___x_650_, 0);
lean_inc(v_val_651_);
lean_dec_ref_known(v___x_650_, 1);
lean_inc(v___y_648_);
lean_inc_ref(v___y_647_);
lean_inc(v___y_646_);
lean_inc_ref(v___y_645_);
lean_inc(v___y_644_);
v___x_652_ = lean_apply_7(v_fn_642_, v_val_651_, v___y_644_, v___y_645_, v___y_646_, v___y_647_, v___y_648_, lean_box(0));
if (lean_obj_tag(v___x_652_) == 0)
{
lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_661_; 
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_661_ == 0)
{
lean_object* v_unused_662_; 
v_unused_662_ = lean_ctor_get(v___x_652_, 0);
lean_dec(v_unused_662_);
v___x_654_ = v___x_652_;
v_isShared_655_ = v_isSharedCheck_661_;
goto v_resetjp_653_;
}
else
{
lean_dec(v___x_652_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_661_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
uint8_t v___x_656_; lean_object* v___x_657_; lean_object* v___x_659_; 
v___x_656_ = 0;
v___x_657_ = lean_box(v___x_656_);
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 0, v___x_657_);
v___x_659_ = v___x_654_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_657_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
else
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_670_; 
v_a_663_ = lean_ctor_get(v___x_652_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_670_ == 0)
{
v___x_665_ = v___x_652_;
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_652_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_668_; 
if (v_isShared_666_ == 0)
{
v___x_668_ = v___x_665_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_a_663_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
}
else
{
uint8_t v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
lean_dec(v___x_650_);
lean_dec_ref(v_fn_642_);
v___x_671_ = 1;
v___x_672_ = lean_box(v___x_671_);
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
return v___x_673_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0___boxed(lean_object* v_fn_674_, lean_object* v_e_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0(v_fn_674_, v_e_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_);
lean_dec(v___y_680_);
lean_dec_ref(v___y_679_);
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec(v___y_676_);
lean_dec_ref(v_e_675_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0(lean_object* v_00_u03b1_683_, lean_object* v_x_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = lean_apply_1(v_x_684_, lean_box(0));
v___x_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_692_, 0, v___x_691_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0___boxed(lean_object* v_00_u03b1_693_, lean_object* v_x_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0(v_00_u03b1_693_, v_x_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
lean_dec(v___y_697_);
lean_dec_ref(v___y_696_);
lean_dec(v___y_695_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0(lean_object* v_k_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v_b_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_){
_start:
{
lean_object* v___x_711_; 
lean_inc(v___y_709_);
lean_inc_ref(v___y_708_);
lean_inc(v___y_707_);
lean_inc_ref(v___y_706_);
lean_inc(v___y_704_);
lean_inc(v___y_703_);
v___x_711_ = lean_apply_8(v_k_702_, v_b_705_, v___y_703_, v___y_704_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, lean_box(0));
return v___x_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0___boxed(lean_object* v_k_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v_b_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_){
_start:
{
lean_object* v_res_721_; 
v_res_721_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0(v_k_712_, v___y_713_, v___y_714_, v_b_715_, v___y_716_, v___y_717_, v___y_718_, v___y_719_);
lean_dec(v___y_719_);
lean_dec_ref(v___y_718_);
lean_dec(v___y_717_);
lean_dec_ref(v___y_716_);
lean_dec(v___y_714_);
lean_dec(v___y_713_);
return v_res_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg(lean_object* v_name_722_, lean_object* v_type_723_, lean_object* v_val_724_, lean_object* v_k_725_, uint8_t v_nondep_726_, uint8_t v_kind_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_){
_start:
{
lean_object* v___f_735_; lean_object* v___x_736_; 
lean_inc(v___y_729_);
lean_inc(v___y_728_);
v___f_735_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_735_, 0, v_k_725_);
lean_closure_set(v___f_735_, 1, v___y_728_);
lean_closure_set(v___f_735_, 2, v___y_729_);
v___x_736_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_722_, v_type_723_, v_val_724_, v___f_735_, v_nondep_726_, v_kind_727_, v___y_730_, v___y_731_, v___y_732_, v___y_733_);
if (lean_obj_tag(v___x_736_) == 0)
{
return v___x_736_;
}
else
{
lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_744_; 
v_a_737_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_744_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_744_ == 0)
{
v___x_739_ = v___x_736_;
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v___x_736_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_742_; 
if (v_isShared_740_ == 0)
{
v___x_742_ = v___x_739_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_a_737_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
return v___x_742_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg___boxed(lean_object* v_name_745_, lean_object* v_type_746_, lean_object* v_val_747_, lean_object* v_k_748_, lean_object* v_nondep_749_, lean_object* v_kind_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_){
_start:
{
uint8_t v_nondep_boxed_758_; uint8_t v_kind_boxed_759_; lean_object* v_res_760_; 
v_nondep_boxed_758_ = lean_unbox(v_nondep_749_);
v_kind_boxed_759_ = lean_unbox(v_kind_750_);
v_res_760_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg(v_name_745_, v_type_746_, v_val_747_, v_k_748_, v_nondep_boxed_758_, v_kind_boxed_759_, v___y_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_);
lean_dec(v___y_756_);
lean_dec_ref(v___y_755_);
lean_dec(v___y_754_);
lean_dec_ref(v___y_753_);
lean_dec(v___y_752_);
lean_dec(v___y_751_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0___boxed(lean_object* v_fvars_761_, lean_object* v_f_762_, lean_object* v_body_763_, lean_object* v_x_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0(v_fvars_761_, v_f_762_, v_body_763_, v_x_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_, v___y_770_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec(v___y_765_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24(lean_object* v_f_773_, lean_object* v_fvars_774_, lean_object* v_a_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_){
_start:
{
if (lean_obj_tag(v_a_775_) == 8)
{
lean_object* v_declName_783_; lean_object* v_type_784_; lean_object* v_value_785_; lean_object* v_body_786_; lean_object* v___f_787_; lean_object* v_d_788_; lean_object* v_v_789_; lean_object* v___x_790_; 
v_declName_783_ = lean_ctor_get(v_a_775_, 0);
lean_inc(v_declName_783_);
v_type_784_ = lean_ctor_get(v_a_775_, 1);
lean_inc_ref(v_type_784_);
v_value_785_ = lean_ctor_get(v_a_775_, 2);
lean_inc_ref(v_value_785_);
v_body_786_ = lean_ctor_get(v_a_775_, 3);
lean_inc_ref(v_body_786_);
lean_dec_ref_known(v_a_775_, 4);
lean_inc_ref_n(v_f_773_, 2);
lean_inc_ref(v_fvars_774_);
v___f_787_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0___boxed), 11, 3);
lean_closure_set(v___f_787_, 0, v_fvars_774_);
lean_closure_set(v___f_787_, 1, v_f_773_);
lean_closure_set(v___f_787_, 2, v_body_786_);
v_d_788_ = lean_expr_instantiate_rev(v_type_784_, v_fvars_774_);
lean_dec_ref(v_type_784_);
v_v_789_ = lean_expr_instantiate_rev(v_value_785_, v_fvars_774_);
lean_dec_ref(v_fvars_774_);
lean_dec_ref(v_value_785_);
lean_inc(v___y_781_);
lean_inc_ref(v___y_780_);
lean_inc(v___y_779_);
lean_inc_ref(v___y_778_);
lean_inc(v___y_777_);
lean_inc(v___y_776_);
lean_inc_ref(v_d_788_);
v___x_790_ = lean_apply_8(v_f_773_, v_d_788_, v___y_776_, v___y_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_, lean_box(0));
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v___x_791_; 
lean_dec_ref_known(v___x_790_, 1);
lean_inc(v___y_781_);
lean_inc_ref(v___y_780_);
lean_inc(v___y_779_);
lean_inc_ref(v___y_778_);
lean_inc(v___y_777_);
lean_inc(v___y_776_);
lean_inc_ref(v_v_789_);
v___x_791_ = lean_apply_8(v_f_773_, v_v_789_, v___y_776_, v___y_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_, lean_box(0));
if (lean_obj_tag(v___x_791_) == 0)
{
uint8_t v___x_792_; uint8_t v___x_793_; lean_object* v___x_794_; 
lean_dec_ref_known(v___x_791_, 1);
v___x_792_ = 0;
v___x_793_ = 0;
v___x_794_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg(v_declName_783_, v_d_788_, v_v_789_, v___f_787_, v___x_792_, v___x_793_, v___y_776_, v___y_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_);
return v___x_794_;
}
else
{
lean_dec_ref(v_v_789_);
lean_dec_ref(v_d_788_);
lean_dec_ref(v___f_787_);
lean_dec(v_declName_783_);
return v___x_791_;
}
}
else
{
lean_dec_ref(v_v_789_);
lean_dec_ref(v_d_788_);
lean_dec_ref(v___f_787_);
lean_dec(v_declName_783_);
lean_dec_ref(v_f_773_);
return v___x_790_;
}
}
else
{
lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_795_ = lean_expr_instantiate_rev(v_a_775_, v_fvars_774_);
lean_dec_ref(v_fvars_774_);
lean_dec_ref(v_a_775_);
lean_inc(v___y_781_);
lean_inc_ref(v___y_780_);
lean_inc(v___y_779_);
lean_inc_ref(v___y_778_);
lean_inc(v___y_777_);
lean_inc(v___y_776_);
v___x_796_ = lean_apply_8(v_f_773_, v___x_795_, v___y_776_, v___y_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_, lean_box(0));
return v___x_796_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0(lean_object* v_fvars_797_, lean_object* v_f_798_, lean_object* v_body_799_, lean_object* v_x_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_808_ = lean_array_push(v_fvars_797_, v_x_800_);
v___x_809_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24(v_f_798_, v___x_808_, v_body_799_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___boxed(lean_object* v_f_810_, lean_object* v_fvars_811_, lean_object* v_a_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24(v_f_810_, v_fvars_811_, v_a_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec(v___y_816_);
lean_dec_ref(v___y_815_);
lean_dec(v___y_814_);
lean_dec(v___y_813_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12(lean_object* v_f_823_, lean_object* v_e_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_832_ = ((lean_object*)(l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0));
v___x_833_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24(v_f_823_, v___x_832_, v_e_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_, v___y_829_, v___y_830_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___boxed(lean_object* v_f_834_, lean_object* v_e_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12(v_f_834_, v_e_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_);
lean_dec(v___y_841_);
lean_dec_ref(v___y_840_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
lean_dec(v___y_837_);
lean_dec(v___y_836_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(lean_object* v_name_844_, uint8_t v_bi_845_, lean_object* v_type_846_, lean_object* v_k_847_, uint8_t v_kind_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_){
_start:
{
lean_object* v___f_856_; lean_object* v___x_857_; 
lean_inc(v___y_850_);
lean_inc(v___y_849_);
v___f_856_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_856_, 0, v_k_847_);
lean_closure_set(v___f_856_, 1, v___y_849_);
lean_closure_set(v___f_856_, 2, v___y_850_);
v___x_857_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_844_, v_bi_845_, v_type_846_, v___f_856_, v_kind_848_, v___y_851_, v___y_852_, v___y_853_, v___y_854_);
if (lean_obj_tag(v___x_857_) == 0)
{
return v___x_857_;
}
else
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_865_; 
v_a_858_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_865_ == 0)
{
v___x_860_ = v___x_857_;
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_857_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_863_; 
if (v_isShared_861_ == 0)
{
v___x_863_ = v___x_860_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_a_858_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___boxed(lean_object* v_name_866_, lean_object* v_bi_867_, lean_object* v_type_868_, lean_object* v_k_869_, lean_object* v_kind_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
uint8_t v_bi_boxed_878_; uint8_t v_kind_boxed_879_; lean_object* v_res_880_; 
v_bi_boxed_878_ = lean_unbox(v_bi_867_);
v_kind_boxed_879_ = lean_unbox(v_kind_870_);
v_res_880_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(v_name_866_, v_bi_boxed_878_, v_type_868_, v_k_869_, v_kind_boxed_879_, v___y_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_);
lean_dec(v___y_876_);
lean_dec_ref(v___y_875_);
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec(v___y_871_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0___boxed(lean_object* v_fvars_881_, lean_object* v_f_882_, lean_object* v_body_883_, lean_object* v_x_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0(v_fvars_881_, v_f_882_, v_body_883_, v_x_884_, v___y_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_);
lean_dec(v___y_890_);
lean_dec_ref(v___y_889_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
lean_dec(v___y_886_);
lean_dec(v___y_885_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20(lean_object* v_f_893_, lean_object* v_fvars_894_, lean_object* v_a_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_){
_start:
{
if (lean_obj_tag(v_a_895_) == 7)
{
lean_object* v_binderName_903_; lean_object* v_binderType_904_; lean_object* v_body_905_; uint8_t v_binderInfo_906_; lean_object* v___f_907_; lean_object* v_d_908_; lean_object* v___x_909_; 
v_binderName_903_ = lean_ctor_get(v_a_895_, 0);
lean_inc(v_binderName_903_);
v_binderType_904_ = lean_ctor_get(v_a_895_, 1);
lean_inc_ref(v_binderType_904_);
v_body_905_ = lean_ctor_get(v_a_895_, 2);
lean_inc_ref(v_body_905_);
v_binderInfo_906_ = lean_ctor_get_uint8(v_a_895_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_895_, 3);
lean_inc_ref(v_f_893_);
lean_inc_ref(v_fvars_894_);
v___f_907_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0___boxed), 11, 3);
lean_closure_set(v___f_907_, 0, v_fvars_894_);
lean_closure_set(v___f_907_, 1, v_f_893_);
lean_closure_set(v___f_907_, 2, v_body_905_);
v_d_908_ = lean_expr_instantiate_rev(v_binderType_904_, v_fvars_894_);
lean_dec_ref(v_fvars_894_);
lean_dec_ref(v_binderType_904_);
lean_inc(v___y_901_);
lean_inc_ref(v___y_900_);
lean_inc(v___y_899_);
lean_inc_ref(v___y_898_);
lean_inc(v___y_897_);
lean_inc(v___y_896_);
lean_inc_ref(v_d_908_);
v___x_909_ = lean_apply_8(v_f_893_, v_d_908_, v___y_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, lean_box(0));
if (lean_obj_tag(v___x_909_) == 0)
{
uint8_t v___x_910_; lean_object* v___x_911_; 
lean_dec_ref_known(v___x_909_, 1);
v___x_910_ = 0;
v___x_911_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(v_binderName_903_, v_binderInfo_906_, v_d_908_, v___f_907_, v___x_910_, v___y_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_);
return v___x_911_;
}
else
{
lean_dec_ref(v_d_908_);
lean_dec_ref(v___f_907_);
lean_dec(v_binderName_903_);
return v___x_909_;
}
}
else
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = lean_expr_instantiate_rev(v_a_895_, v_fvars_894_);
lean_dec_ref(v_fvars_894_);
lean_dec_ref(v_a_895_);
lean_inc(v___y_901_);
lean_inc_ref(v___y_900_);
lean_inc(v___y_899_);
lean_inc_ref(v___y_898_);
lean_inc(v___y_897_);
lean_inc(v___y_896_);
v___x_913_ = lean_apply_8(v_f_893_, v___x_912_, v___y_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, lean_box(0));
return v___x_913_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0(lean_object* v_fvars_914_, lean_object* v_f_915_, lean_object* v_body_916_, lean_object* v_x_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_925_ = lean_array_push(v_fvars_914_, v_x_917_);
v___x_926_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20(v_f_915_, v___x_925_, v_body_916_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___boxed(lean_object* v_f_927_, lean_object* v_fvars_928_, lean_object* v_a_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20(v_f_927_, v_fvars_928_, v_a_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
lean_dec(v___y_935_);
lean_dec_ref(v___y_934_);
lean_dec(v___y_933_);
lean_dec_ref(v___y_932_);
lean_dec(v___y_931_);
lean_dec(v___y_930_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10(lean_object* v_f_938_, lean_object* v_e_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_){
_start:
{
lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_947_ = ((lean_object*)(l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0));
v___x_948_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20(v_f_938_, v___x_947_, v_e_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10___boxed(lean_object* v_f_949_, lean_object* v_e_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
lean_object* v_res_958_; 
v_res_958_ = l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10(v_f_949_, v_e_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_);
lean_dec(v___y_956_);
lean_dec_ref(v___y_955_);
lean_dec(v___y_954_);
lean_dec_ref(v___y_953_);
lean_dec(v___y_952_);
lean_dec(v___y_951_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0___boxed(lean_object* v_fvars_959_, lean_object* v_f_960_, lean_object* v_body_961_, lean_object* v_x_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0(v_fvars_959_, v_f_960_, v_body_961_, v_x_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
lean_dec(v___y_964_);
lean_dec(v___y_963_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22(lean_object* v_f_971_, lean_object* v_fvars_972_, lean_object* v_a_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_){
_start:
{
if (lean_obj_tag(v_a_973_) == 6)
{
lean_object* v_binderName_981_; lean_object* v_binderType_982_; lean_object* v_body_983_; uint8_t v_binderInfo_984_; lean_object* v___f_985_; lean_object* v_d_986_; lean_object* v___x_987_; 
v_binderName_981_ = lean_ctor_get(v_a_973_, 0);
lean_inc(v_binderName_981_);
v_binderType_982_ = lean_ctor_get(v_a_973_, 1);
lean_inc_ref(v_binderType_982_);
v_body_983_ = lean_ctor_get(v_a_973_, 2);
lean_inc_ref(v_body_983_);
v_binderInfo_984_ = lean_ctor_get_uint8(v_a_973_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_973_, 3);
lean_inc_ref(v_f_971_);
lean_inc_ref(v_fvars_972_);
v___f_985_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0___boxed), 11, 3);
lean_closure_set(v___f_985_, 0, v_fvars_972_);
lean_closure_set(v___f_985_, 1, v_f_971_);
lean_closure_set(v___f_985_, 2, v_body_983_);
v_d_986_ = lean_expr_instantiate_rev(v_binderType_982_, v_fvars_972_);
lean_dec_ref(v_fvars_972_);
lean_dec_ref(v_binderType_982_);
lean_inc(v___y_979_);
lean_inc_ref(v___y_978_);
lean_inc(v___y_977_);
lean_inc_ref(v___y_976_);
lean_inc(v___y_975_);
lean_inc(v___y_974_);
lean_inc_ref(v_d_986_);
v___x_987_ = lean_apply_8(v_f_971_, v_d_986_, v___y_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_, lean_box(0));
if (lean_obj_tag(v___x_987_) == 0)
{
uint8_t v___x_988_; lean_object* v___x_989_; 
lean_dec_ref_known(v___x_987_, 1);
v___x_988_ = 0;
v___x_989_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(v_binderName_981_, v_binderInfo_984_, v_d_986_, v___f_985_, v___x_988_, v___y_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_);
return v___x_989_;
}
else
{
lean_dec_ref(v_d_986_);
lean_dec_ref(v___f_985_);
lean_dec(v_binderName_981_);
return v___x_987_;
}
}
else
{
lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_990_ = lean_expr_instantiate_rev(v_a_973_, v_fvars_972_);
lean_dec_ref(v_fvars_972_);
lean_dec_ref(v_a_973_);
lean_inc(v___y_979_);
lean_inc_ref(v___y_978_);
lean_inc(v___y_977_);
lean_inc_ref(v___y_976_);
lean_inc(v___y_975_);
lean_inc(v___y_974_);
v___x_991_ = lean_apply_8(v_f_971_, v___x_990_, v___y_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_, lean_box(0));
return v___x_991_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0(lean_object* v_fvars_992_, lean_object* v_f_993_, lean_object* v_body_994_, lean_object* v_x_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1003_ = lean_array_push(v_fvars_992_, v_x_995_);
v___x_1004_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22(v_f_993_, v___x_1003_, v_body_994_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___boxed(lean_object* v_f_1005_, lean_object* v_fvars_1006_, lean_object* v_a_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_){
_start:
{
lean_object* v_res_1015_; 
v_res_1015_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22(v_f_1005_, v_fvars_1006_, v_a_1007_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
lean_dec(v___y_1009_);
lean_dec(v___y_1008_);
return v_res_1015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11(lean_object* v_f_1016_, lean_object* v_e_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_){
_start:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = ((lean_object*)(l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0));
v___x_1026_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22(v_f_1016_, v___x_1025_, v_e_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11___boxed(lean_object* v_f_1027_, lean_object* v_e_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11(v_f_1027_, v_e_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_);
lean_dec(v___y_1034_);
lean_dec_ref(v___y_1033_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v___y_1030_);
lean_dec(v___y_1029_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg(lean_object* v_a_1037_, lean_object* v_x_1038_){
_start:
{
if (lean_obj_tag(v_x_1038_) == 0)
{
lean_object* v___x_1039_; 
v___x_1039_ = lean_box(0);
return v___x_1039_;
}
else
{
lean_object* v_key_1040_; lean_object* v_value_1041_; lean_object* v_tail_1042_; uint8_t v___x_1043_; 
v_key_1040_ = lean_ctor_get(v_x_1038_, 0);
v_value_1041_ = lean_ctor_get(v_x_1038_, 1);
v_tail_1042_ = lean_ctor_get(v_x_1038_, 2);
v___x_1043_ = lean_expr_eqv(v_key_1040_, v_a_1037_);
if (v___x_1043_ == 0)
{
v_x_1038_ = v_tail_1042_;
goto _start;
}
else
{
lean_object* v___x_1045_; 
lean_inc(v_value_1041_);
v___x_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1045_, 0, v_value_1041_);
return v___x_1045_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg___boxed(lean_object* v_a_1046_, lean_object* v_x_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg(v_a_1046_, v_x_1047_);
lean_dec(v_x_1047_);
lean_dec_ref(v_a_1046_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(lean_object* v_m_1049_, lean_object* v_a_1050_){
_start:
{
lean_object* v_buckets_1051_; lean_object* v___x_1052_; uint64_t v___x_1053_; uint64_t v___x_1054_; uint64_t v___x_1055_; uint64_t v_fold_1056_; uint64_t v___x_1057_; uint64_t v___x_1058_; uint64_t v___x_1059_; size_t v___x_1060_; size_t v___x_1061_; size_t v___x_1062_; size_t v___x_1063_; size_t v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v_buckets_1051_ = lean_ctor_get(v_m_1049_, 1);
v___x_1052_ = lean_array_get_size(v_buckets_1051_);
v___x_1053_ = l_Lean_Expr_hash(v_a_1050_);
v___x_1054_ = 32ULL;
v___x_1055_ = lean_uint64_shift_right(v___x_1053_, v___x_1054_);
v_fold_1056_ = lean_uint64_xor(v___x_1053_, v___x_1055_);
v___x_1057_ = 16ULL;
v___x_1058_ = lean_uint64_shift_right(v_fold_1056_, v___x_1057_);
v___x_1059_ = lean_uint64_xor(v_fold_1056_, v___x_1058_);
v___x_1060_ = lean_uint64_to_usize(v___x_1059_);
v___x_1061_ = lean_usize_of_nat(v___x_1052_);
v___x_1062_ = ((size_t)1ULL);
v___x_1063_ = lean_usize_sub(v___x_1061_, v___x_1062_);
v___x_1064_ = lean_usize_land(v___x_1060_, v___x_1063_);
v___x_1065_ = lean_array_uget_borrowed(v_buckets_1051_, v___x_1064_);
v___x_1066_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg(v_a_1050_, v___x_1065_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg___boxed(lean_object* v_m_1067_, lean_object* v_a_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(v_m_1067_, v_a_1068_);
lean_dec_ref(v_a_1068_);
lean_dec_ref(v_m_1067_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0(lean_object* v_00_u03b1_1070_, lean_object* v_x_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1078_ = lean_apply_1(v_x_1071_, lean_box(0));
v___x_1079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1078_);
return v___x_1079_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0___boxed(lean_object* v_00_u03b1_1080_, lean_object* v_x_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_){
_start:
{
lean_object* v_res_1088_; 
v_res_1088_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0(v_00_u03b1_1080_, v_x_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_);
lean_dec(v___y_1086_);
lean_dec_ref(v___y_1085_);
lean_dec(v___y_1084_);
lean_dec_ref(v___y_1083_);
lean_dec(v___y_1082_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22___redArg(lean_object* v_x_1089_, lean_object* v_x_1090_){
_start:
{
if (lean_obj_tag(v_x_1090_) == 0)
{
return v_x_1089_;
}
else
{
lean_object* v_key_1091_; lean_object* v_value_1092_; lean_object* v_tail_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1116_; 
v_key_1091_ = lean_ctor_get(v_x_1090_, 0);
v_value_1092_ = lean_ctor_get(v_x_1090_, 1);
v_tail_1093_ = lean_ctor_get(v_x_1090_, 2);
v_isSharedCheck_1116_ = !lean_is_exclusive(v_x_1090_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1095_ = v_x_1090_;
v_isShared_1096_ = v_isSharedCheck_1116_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_tail_1093_);
lean_inc(v_value_1092_);
lean_inc(v_key_1091_);
lean_dec(v_x_1090_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1116_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1097_; uint64_t v___x_1098_; uint64_t v___x_1099_; uint64_t v___x_1100_; uint64_t v_fold_1101_; uint64_t v___x_1102_; uint64_t v___x_1103_; uint64_t v___x_1104_; size_t v___x_1105_; size_t v___x_1106_; size_t v___x_1107_; size_t v___x_1108_; size_t v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1112_; 
v___x_1097_ = lean_array_get_size(v_x_1089_);
v___x_1098_ = l_Lean_Expr_hash(v_key_1091_);
v___x_1099_ = 32ULL;
v___x_1100_ = lean_uint64_shift_right(v___x_1098_, v___x_1099_);
v_fold_1101_ = lean_uint64_xor(v___x_1098_, v___x_1100_);
v___x_1102_ = 16ULL;
v___x_1103_ = lean_uint64_shift_right(v_fold_1101_, v___x_1102_);
v___x_1104_ = lean_uint64_xor(v_fold_1101_, v___x_1103_);
v___x_1105_ = lean_uint64_to_usize(v___x_1104_);
v___x_1106_ = lean_usize_of_nat(v___x_1097_);
v___x_1107_ = ((size_t)1ULL);
v___x_1108_ = lean_usize_sub(v___x_1106_, v___x_1107_);
v___x_1109_ = lean_usize_land(v___x_1105_, v___x_1108_);
v___x_1110_ = lean_array_uget_borrowed(v_x_1089_, v___x_1109_);
lean_inc(v___x_1110_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 2, v___x_1110_);
v___x_1112_ = v___x_1095_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_key_1091_);
lean_ctor_set(v_reuseFailAlloc_1115_, 1, v_value_1092_);
lean_ctor_set(v_reuseFailAlloc_1115_, 2, v___x_1110_);
v___x_1112_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
lean_object* v___x_1113_; 
v___x_1113_ = lean_array_uset(v_x_1089_, v___x_1109_, v___x_1112_);
v_x_1089_ = v___x_1113_;
v_x_1090_ = v_tail_1093_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18___redArg(lean_object* v_i_1117_, lean_object* v_source_1118_, lean_object* v_target_1119_){
_start:
{
lean_object* v___x_1120_; uint8_t v___x_1121_; 
v___x_1120_ = lean_array_get_size(v_source_1118_);
v___x_1121_ = lean_nat_dec_lt(v_i_1117_, v___x_1120_);
if (v___x_1121_ == 0)
{
lean_dec_ref(v_source_1118_);
lean_dec(v_i_1117_);
return v_target_1119_;
}
else
{
lean_object* v_es_1122_; lean_object* v___x_1123_; lean_object* v_source_1124_; lean_object* v_target_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v_es_1122_ = lean_array_fget(v_source_1118_, v_i_1117_);
v___x_1123_ = lean_box(0);
v_source_1124_ = lean_array_fset(v_source_1118_, v_i_1117_, v___x_1123_);
v_target_1125_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22___redArg(v_target_1119_, v_es_1122_);
v___x_1126_ = lean_unsigned_to_nat(1u);
v___x_1127_ = lean_nat_add(v_i_1117_, v___x_1126_);
lean_dec(v_i_1117_);
v_i_1117_ = v___x_1127_;
v_source_1118_ = v_source_1124_;
v_target_1119_ = v_target_1125_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17___redArg(lean_object* v_data_1129_){
_start:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v_nbuckets_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1130_ = lean_array_get_size(v_data_1129_);
v___x_1131_ = lean_unsigned_to_nat(2u);
v_nbuckets_1132_ = lean_nat_mul(v___x_1130_, v___x_1131_);
v___x_1133_ = lean_unsigned_to_nat(0u);
v___x_1134_ = lean_box(0);
v___x_1135_ = lean_mk_array(v_nbuckets_1132_, v___x_1134_);
v___x_1136_ = lean_array_propagate_mark(v_data_1129_, v___x_1135_);
v___x_1137_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18___redArg(v___x_1133_, v_data_1129_, v___x_1136_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18___redArg(lean_object* v_a_1138_, lean_object* v_b_1139_, lean_object* v_x_1140_){
_start:
{
if (lean_obj_tag(v_x_1140_) == 0)
{
lean_dec(v_b_1139_);
lean_dec_ref(v_a_1138_);
return v_x_1140_;
}
else
{
lean_object* v_key_1141_; lean_object* v_value_1142_; lean_object* v_tail_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1155_; 
v_key_1141_ = lean_ctor_get(v_x_1140_, 0);
v_value_1142_ = lean_ctor_get(v_x_1140_, 1);
v_tail_1143_ = lean_ctor_get(v_x_1140_, 2);
v_isSharedCheck_1155_ = !lean_is_exclusive(v_x_1140_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1145_ = v_x_1140_;
v_isShared_1146_ = v_isSharedCheck_1155_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_tail_1143_);
lean_inc(v_value_1142_);
lean_inc(v_key_1141_);
lean_dec(v_x_1140_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1155_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
uint8_t v___x_1147_; 
v___x_1147_ = lean_expr_eqv(v_key_1141_, v_a_1138_);
if (v___x_1147_ == 0)
{
lean_object* v___x_1148_; lean_object* v___x_1150_; 
v___x_1148_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18___redArg(v_a_1138_, v_b_1139_, v_tail_1143_);
if (v_isShared_1146_ == 0)
{
lean_ctor_set(v___x_1145_, 2, v___x_1148_);
v___x_1150_ = v___x_1145_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_key_1141_);
lean_ctor_set(v_reuseFailAlloc_1151_, 1, v_value_1142_);
lean_ctor_set(v_reuseFailAlloc_1151_, 2, v___x_1148_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
else
{
lean_object* v___x_1153_; 
lean_dec(v_value_1142_);
lean_dec(v_key_1141_);
if (v_isShared_1146_ == 0)
{
lean_ctor_set(v___x_1145_, 1, v_b_1139_);
lean_ctor_set(v___x_1145_, 0, v_a_1138_);
v___x_1153_ = v___x_1145_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v_a_1138_);
lean_ctor_set(v_reuseFailAlloc_1154_, 1, v_b_1139_);
lean_ctor_set(v_reuseFailAlloc_1154_, 2, v_tail_1143_);
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
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg(lean_object* v_a_1156_, lean_object* v_x_1157_){
_start:
{
if (lean_obj_tag(v_x_1157_) == 0)
{
uint8_t v___x_1158_; 
v___x_1158_ = 0;
return v___x_1158_;
}
else
{
lean_object* v_key_1159_; lean_object* v_tail_1160_; uint8_t v___x_1161_; 
v_key_1159_ = lean_ctor_get(v_x_1157_, 0);
v_tail_1160_ = lean_ctor_get(v_x_1157_, 2);
v___x_1161_ = lean_expr_eqv(v_key_1159_, v_a_1156_);
if (v___x_1161_ == 0)
{
v_x_1157_ = v_tail_1160_;
goto _start;
}
else
{
return v___x_1161_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg___boxed(lean_object* v_a_1163_, lean_object* v_x_1164_){
_start:
{
uint8_t v_res_1165_; lean_object* v_r_1166_; 
v_res_1165_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg(v_a_1163_, v_x_1164_);
lean_dec(v_x_1164_);
lean_dec_ref(v_a_1163_);
v_r_1166_ = lean_box(v_res_1165_);
return v_r_1166_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(lean_object* v_m_1167_, lean_object* v_a_1168_, lean_object* v_b_1169_){
_start:
{
lean_object* v_size_1170_; lean_object* v_buckets_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1214_; 
v_size_1170_ = lean_ctor_get(v_m_1167_, 0);
v_buckets_1171_ = lean_ctor_get(v_m_1167_, 1);
v_isSharedCheck_1214_ = !lean_is_exclusive(v_m_1167_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1173_ = v_m_1167_;
v_isShared_1174_ = v_isSharedCheck_1214_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_buckets_1171_);
lean_inc(v_size_1170_);
lean_dec(v_m_1167_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1214_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1175_; uint64_t v___x_1176_; uint64_t v___x_1177_; uint64_t v___x_1178_; uint64_t v_fold_1179_; uint64_t v___x_1180_; uint64_t v___x_1181_; uint64_t v___x_1182_; size_t v___x_1183_; size_t v___x_1184_; size_t v___x_1185_; size_t v___x_1186_; size_t v___x_1187_; lean_object* v_bkt_1188_; uint8_t v___x_1189_; 
v___x_1175_ = lean_array_get_size(v_buckets_1171_);
v___x_1176_ = l_Lean_Expr_hash(v_a_1168_);
v___x_1177_ = 32ULL;
v___x_1178_ = lean_uint64_shift_right(v___x_1176_, v___x_1177_);
v_fold_1179_ = lean_uint64_xor(v___x_1176_, v___x_1178_);
v___x_1180_ = 16ULL;
v___x_1181_ = lean_uint64_shift_right(v_fold_1179_, v___x_1180_);
v___x_1182_ = lean_uint64_xor(v_fold_1179_, v___x_1181_);
v___x_1183_ = lean_uint64_to_usize(v___x_1182_);
v___x_1184_ = lean_usize_of_nat(v___x_1175_);
v___x_1185_ = ((size_t)1ULL);
v___x_1186_ = lean_usize_sub(v___x_1184_, v___x_1185_);
v___x_1187_ = lean_usize_land(v___x_1183_, v___x_1186_);
v_bkt_1188_ = lean_array_uget_borrowed(v_buckets_1171_, v___x_1187_);
v___x_1189_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg(v_a_1168_, v_bkt_1188_);
if (v___x_1189_ == 0)
{
lean_object* v___x_1190_; lean_object* v_size_x27_1191_; lean_object* v___x_1192_; lean_object* v_buckets_x27_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; uint8_t v___x_1199_; 
v___x_1190_ = lean_unsigned_to_nat(1u);
v_size_x27_1191_ = lean_nat_add(v_size_1170_, v___x_1190_);
lean_dec(v_size_1170_);
lean_inc(v_bkt_1188_);
v___x_1192_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1192_, 0, v_a_1168_);
lean_ctor_set(v___x_1192_, 1, v_b_1169_);
lean_ctor_set(v___x_1192_, 2, v_bkt_1188_);
v_buckets_x27_1193_ = lean_array_uset(v_buckets_1171_, v___x_1187_, v___x_1192_);
v___x_1194_ = lean_unsigned_to_nat(4u);
v___x_1195_ = lean_nat_mul(v_size_x27_1191_, v___x_1194_);
v___x_1196_ = lean_unsigned_to_nat(3u);
v___x_1197_ = lean_nat_div(v___x_1195_, v___x_1196_);
lean_dec(v___x_1195_);
v___x_1198_ = lean_array_get_size(v_buckets_x27_1193_);
v___x_1199_ = lean_nat_dec_le(v___x_1197_, v___x_1198_);
lean_dec(v___x_1197_);
if (v___x_1199_ == 0)
{
lean_object* v_val_1200_; lean_object* v___x_1202_; 
v_val_1200_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17___redArg(v_buckets_x27_1193_);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 1, v_val_1200_);
lean_ctor_set(v___x_1173_, 0, v_size_x27_1191_);
v___x_1202_ = v___x_1173_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_size_x27_1191_);
lean_ctor_set(v_reuseFailAlloc_1203_, 1, v_val_1200_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
return v___x_1202_;
}
}
else
{
lean_object* v___x_1205_; 
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 1, v_buckets_x27_1193_);
lean_ctor_set(v___x_1173_, 0, v_size_x27_1191_);
v___x_1205_ = v___x_1173_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_size_x27_1191_);
lean_ctor_set(v_reuseFailAlloc_1206_, 1, v_buckets_x27_1193_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
else
{
lean_object* v___x_1207_; lean_object* v_buckets_x27_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1212_; 
lean_inc(v_bkt_1188_);
v___x_1207_ = lean_box(0);
v_buckets_x27_1208_ = lean_array_uset(v_buckets_1171_, v___x_1187_, v___x_1207_);
v___x_1209_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18___redArg(v_a_1168_, v_b_1169_, v_bkt_1188_);
v___x_1210_ = lean_array_uset(v_buckets_x27_1208_, v___x_1187_, v___x_1209_);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 1, v___x_1210_);
v___x_1212_ = v___x_1173_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_size_1170_);
lean_ctor_set(v_reuseFailAlloc_1213_, 1, v___x_1210_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
return v___x_1212_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1(lean_object* v_a_1215_, lean_object* v_e_1216_, lean_object* v_a_1217_){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1219_ = lean_st_ref_take(v_a_1215_);
v___x_1220_ = lean_box(0);
v___x_1221_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(v___x_1219_, v_e_1216_, v_a_1217_);
v___x_1222_ = lean_st_ref_put(v_a_1215_, v___x_1221_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1___boxed(lean_object* v_a_1223_, lean_object* v_e_1224_, lean_object* v_a_1225_, lean_object* v___y_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1(v_a_1223_, v_e_1224_, v_a_1225_);
lean_dec(v_a_1223_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___boxed(lean_object* v_fn_1228_, lean_object* v_e_1229_, lean_object* v_a_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1228_, v_e_1229_, v_a_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_);
lean_dec(v___y_1235_);
lean_dec_ref(v___y_1234_);
lean_dec(v___y_1233_);
lean_dec_ref(v___y_1232_);
lean_dec(v___y_1231_);
lean_dec(v_a_1230_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(lean_object* v_fn_1238_, lean_object* v_e_1239_, lean_object* v_a_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v_a_1248_; lean_object* v___y_1260_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
lean_inc(v_a_1240_);
v___x_1262_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1262_, 0, lean_box(0));
lean_closure_set(v___x_1262_, 1, lean_box(0));
lean_closure_set(v___x_1262_, 2, v_a_1240_);
v___x_1263_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0(lean_box(0), v___x_1262_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
if (lean_obj_tag(v___x_1263_) == 0)
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1300_; 
v_a_1264_ = lean_ctor_get(v___x_1263_, 0);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1263_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1266_ = v___x_1263_;
v_isShared_1267_ = v_isSharedCheck_1300_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1263_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1300_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1268_; 
v___x_1268_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(v_a_1264_, v_e_1239_);
lean_dec(v_a_1264_);
if (lean_obj_tag(v___x_1268_) == 0)
{
lean_object* v___x_1269_; 
lean_del_object(v___x_1266_);
lean_inc_ref(v_fn_1238_);
lean_inc(v___y_1245_);
lean_inc_ref(v___y_1244_);
lean_inc(v___y_1243_);
lean_inc_ref(v___y_1242_);
lean_inc(v___y_1241_);
lean_inc_ref(v_e_1239_);
v___x_1269_ = lean_apply_7(v_fn_1238_, v_e_1239_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_, lean_box(0));
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_object* v_a_1270_; uint8_t v___x_1271_; 
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
lean_inc(v_a_1270_);
lean_dec_ref_known(v___x_1269_, 1);
v___x_1271_ = lean_unbox(v_a_1270_);
lean_dec(v_a_1270_);
if (v___x_1271_ == 0)
{
lean_object* v___x_1272_; 
lean_dec_ref(v_fn_1238_);
v___x_1272_ = lean_box(0);
v_a_1248_ = v___x_1272_;
goto v___jp_1247_;
}
else
{
switch(lean_obj_tag(v_e_1239_))
{
case 7:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1273_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___boxed), 9, 1);
lean_closure_set(v___x_1273_, 0, v_fn_1238_);
lean_inc_ref(v_e_1239_);
v___x_1274_ = l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10(v___x_1273_, v_e_1239_, v_a_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
v___y_1260_ = v___x_1274_;
goto v___jp_1259_;
}
case 6:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1275_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___boxed), 9, 1);
lean_closure_set(v___x_1275_, 0, v_fn_1238_);
lean_inc_ref(v_e_1239_);
v___x_1276_ = l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11(v___x_1275_, v_e_1239_, v_a_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
v___y_1260_ = v___x_1276_;
goto v___jp_1259_;
}
case 8:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1277_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___boxed), 9, 1);
lean_closure_set(v___x_1277_, 0, v_fn_1238_);
lean_inc_ref(v_e_1239_);
v___x_1278_ = l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12(v___x_1277_, v_e_1239_, v_a_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
v___y_1260_ = v___x_1278_;
goto v___jp_1259_;
}
case 5:
{
lean_object* v_fn_1279_; lean_object* v_arg_1280_; lean_object* v___x_1281_; 
v_fn_1279_ = lean_ctor_get(v_e_1239_, 0);
v_arg_1280_ = lean_ctor_get(v_e_1239_, 1);
lean_inc_ref(v_fn_1279_);
lean_inc_ref(v_fn_1238_);
v___x_1281_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1238_, v_fn_1279_, v_a_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
if (lean_obj_tag(v___x_1281_) == 0)
{
lean_object* v___x_1282_; 
lean_dec_ref_known(v___x_1281_, 1);
lean_inc_ref(v_arg_1280_);
v___x_1282_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1238_, v_arg_1280_, v_a_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
v___y_1260_ = v___x_1282_;
goto v___jp_1259_;
}
else
{
lean_dec_ref(v_fn_1238_);
v___y_1260_ = v___x_1281_;
goto v___jp_1259_;
}
}
case 10:
{
lean_object* v_expr_1283_; lean_object* v___x_1284_; 
v_expr_1283_ = lean_ctor_get(v_e_1239_, 1);
lean_inc_ref(v_expr_1283_);
v___x_1284_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1238_, v_expr_1283_, v_a_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
v___y_1260_ = v___x_1284_;
goto v___jp_1259_;
}
case 11:
{
lean_object* v_struct_1285_; lean_object* v___x_1286_; 
v_struct_1285_ = lean_ctor_get(v_e_1239_, 2);
lean_inc_ref(v_struct_1285_);
v___x_1286_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1238_, v_struct_1285_, v_a_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
v___y_1260_ = v___x_1286_;
goto v___jp_1259_;
}
default: 
{
lean_object* v___x_1287_; 
lean_dec_ref(v_fn_1238_);
v___x_1287_ = lean_box(0);
v_a_1248_ = v___x_1287_;
goto v___jp_1247_;
}
}
}
}
else
{
lean_object* v_a_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1295_; 
lean_dec_ref(v_e_1239_);
lean_dec_ref(v_fn_1238_);
v_a_1288_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1290_ = v___x_1269_;
v_isShared_1291_ = v_isSharedCheck_1295_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_a_1288_);
lean_dec(v___x_1269_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1295_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v___x_1293_; 
if (v_isShared_1291_ == 0)
{
v___x_1293_ = v___x_1290_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v_a_1288_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
}
}
else
{
lean_object* v_val_1296_; lean_object* v___x_1298_; 
lean_dec_ref(v_e_1239_);
lean_dec_ref(v_fn_1238_);
v_val_1296_ = lean_ctor_get(v___x_1268_, 0);
lean_inc(v_val_1296_);
lean_dec_ref_known(v___x_1268_, 1);
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 0, v_val_1296_);
v___x_1298_ = v___x_1266_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_val_1296_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
}
}
else
{
lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1308_; 
lean_dec_ref(v_e_1239_);
lean_dec_ref(v_fn_1238_);
v_a_1301_ = lean_ctor_get(v___x_1263_, 0);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1263_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1303_ = v___x_1263_;
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v___x_1263_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1306_; 
if (v_isShared_1304_ == 0)
{
v___x_1306_ = v___x_1303_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_a_1301_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
v___jp_1247_:
{
lean_object* v___f_1249_; lean_object* v___x_1250_; 
lean_inc(v_a_1240_);
v___f_1249_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1249_, 0, v_a_1240_);
lean_closure_set(v___f_1249_, 1, v_e_1239_);
lean_closure_set(v___f_1249_, 2, v_a_1248_);
v___x_1250_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0(lean_box(0), v___f_1249_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1257_ == 0)
{
lean_object* v_unused_1258_; 
v_unused_1258_ = lean_ctor_get(v___x_1250_, 0);
lean_dec(v_unused_1258_);
v___x_1252_ = v___x_1250_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_dec(v___x_1250_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 0, v_a_1248_);
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_a_1248_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
else
{
return v___x_1250_;
}
}
v___jp_1259_:
{
if (lean_obj_tag(v___y_1260_) == 0)
{
lean_object* v_a_1261_; 
v_a_1261_ = lean_ctor_get(v___y_1260_, 0);
lean_inc(v_a_1261_);
lean_dec_ref_known(v___y_1260_, 1);
v_a_1248_ = v_a_1261_;
goto v___jp_1247_;
}
else
{
lean_dec_ref(v_e_1239_);
return v___y_1260_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1309_ = lean_box(0);
v___x_1310_ = lean_unsigned_to_nat(16u);
v___x_1311_ = lean_mk_array(v___x_1310_, v___x_1309_);
return v___x_1311_;
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1312_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0, &l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0_once, _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0);
v___x_1313_ = lean_unsigned_to_nat(0u);
v___x_1314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1313_);
lean_ctor_set(v___x_1314_, 1, v___x_1312_);
return v___x_1314_;
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2(void){
_start:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1315_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1, &l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1_once, _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1);
v___x_1316_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_1316_, 0, lean_box(0));
lean_closure_set(v___x_1316_, 1, lean_box(0));
lean_closure_set(v___x_1316_, 2, v___x_1315_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2(lean_object* v_input_1317_, lean_object* v_fn_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_){
_start:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v_a_1327_; lean_object* v___x_1328_; 
v___x_1325_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2, &l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2_once, _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2);
v___x_1326_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0(lean_box(0), v___x_1325_, v___y_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_);
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
lean_inc(v_a_1327_);
lean_dec_ref(v___x_1326_);
v___x_1328_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1318_, v_input_1317_, v_a_1327_, v___y_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1338_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc(v_a_1329_);
lean_dec_ref_known(v___x_1328_, 1);
v___x_1330_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1330_, 0, lean_box(0));
lean_closure_set(v___x_1330_, 1, lean_box(0));
lean_closure_set(v___x_1330_, 2, v_a_1327_);
v___x_1331_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0(lean_box(0), v___x_1330_, v___y_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_);
v_isSharedCheck_1338_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1338_ == 0)
{
lean_object* v_unused_1339_; 
v_unused_1339_ = lean_ctor_get(v___x_1331_, 0);
lean_dec(v_unused_1339_);
v___x_1333_ = v___x_1331_;
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
else
{
lean_dec(v___x_1331_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v___x_1336_; 
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 0, v_a_1329_);
v___x_1336_ = v___x_1333_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v_a_1329_);
v___x_1336_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
return v___x_1336_;
}
}
}
else
{
lean_dec(v_a_1327_);
return v___x_1328_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___boxed(lean_object* v_input_1340_, lean_object* v_fn_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2(v_input_1340_, v_fn_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
lean_dec(v___y_1346_);
lean_dec_ref(v___y_1345_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
lean_dec(v___y_1342_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(lean_object* v_input_1349_, lean_object* v_fn_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v___f_1357_; lean_object* v___x_1358_; 
v___f_1357_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1357_, 0, v_fn_1350_);
v___x_1358_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2(v_input_1349_, v___f_1357_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___boxed(lean_object* v_input_1359_, lean_object* v_fn_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
lean_object* v_res_1367_; 
v_res_1367_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_input_1359_, v_fn_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_);
lean_dec(v___y_1365_);
lean_dec_ref(v___y_1364_);
lean_dec(v___y_1363_);
lean_dec_ref(v___y_1362_);
lean_dec(v___y_1361_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4(lean_object* v_fn_1368_, lean_object* v_x_1369_, lean_object* v_x_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_){
_start:
{
if (lean_obj_tag(v_x_1370_) == 0)
{
lean_object* v___x_1377_; 
lean_dec_ref(v_fn_1368_);
v___x_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1377_, 0, v_x_1369_);
return v___x_1377_;
}
else
{
lean_object* v_head_1378_; lean_object* v_tail_1379_; lean_object* v_type_1380_; lean_object* v___x_1381_; 
v_head_1378_ = lean_ctor_get(v_x_1370_, 0);
lean_inc(v_head_1378_);
v_tail_1379_ = lean_ctor_get(v_x_1370_, 1);
lean_inc(v_tail_1379_);
lean_dec_ref_known(v_x_1370_, 2);
v_type_1380_ = lean_ctor_get(v_head_1378_, 1);
lean_inc_ref(v_type_1380_);
lean_dec(v_head_1378_);
lean_inc_ref(v_fn_1368_);
v___x_1381_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_type_1380_, v_fn_1368_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
if (lean_obj_tag(v___x_1381_) == 0)
{
lean_object* v_a_1382_; 
v_a_1382_ = lean_ctor_get(v___x_1381_, 0);
lean_inc(v_a_1382_);
lean_dec_ref_known(v___x_1381_, 1);
v_x_1369_ = v_a_1382_;
v_x_1370_ = v_tail_1379_;
goto _start;
}
else
{
lean_dec(v_tail_1379_);
lean_dec_ref(v_fn_1368_);
return v___x_1381_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4___boxed(lean_object* v_fn_1384_, lean_object* v_x_1385_, lean_object* v_x_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v_res_1393_; 
v_res_1393_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4(v_fn_1384_, v_x_1385_, v_x_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_);
lean_dec(v___y_1391_);
lean_dec_ref(v___y_1390_);
lean_dec(v___y_1389_);
lean_dec_ref(v___y_1388_);
lean_dec(v___y_1387_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6(lean_object* v_fn_1394_, lean_object* v_x_1395_, lean_object* v_x_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
if (lean_obj_tag(v_x_1396_) == 0)
{
lean_object* v___x_1403_; 
lean_dec_ref(v_fn_1394_);
v___x_1403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1403_, 0, v_x_1395_);
return v___x_1403_;
}
else
{
lean_object* v_head_1404_; lean_object* v_tail_1405_; lean_object* v___y_1407_; lean_object* v_type_1410_; lean_object* v_ctors_1411_; lean_object* v___x_1412_; 
v_head_1404_ = lean_ctor_get(v_x_1396_, 0);
lean_inc(v_head_1404_);
v_tail_1405_ = lean_ctor_get(v_x_1396_, 1);
lean_inc(v_tail_1405_);
lean_dec_ref_known(v_x_1396_, 2);
v_type_1410_ = lean_ctor_get(v_head_1404_, 1);
lean_inc_ref(v_type_1410_);
v_ctors_1411_ = lean_ctor_get(v_head_1404_, 2);
lean_inc(v_ctors_1411_);
lean_dec(v_head_1404_);
lean_inc_ref(v_fn_1394_);
v___x_1412_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_type_1410_, v_fn_1394_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
if (lean_obj_tag(v___x_1412_) == 0)
{
lean_object* v_a_1413_; lean_object* v___x_1414_; 
v_a_1413_ = lean_ctor_get(v___x_1412_, 0);
lean_inc(v_a_1413_);
lean_dec_ref_known(v___x_1412_, 1);
lean_inc_ref(v_fn_1394_);
v___x_1414_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4(v_fn_1394_, v_a_1413_, v_ctors_1411_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
v___y_1407_ = v___x_1414_;
goto v___jp_1406_;
}
else
{
lean_dec(v_ctors_1411_);
v___y_1407_ = v___x_1412_;
goto v___jp_1406_;
}
v___jp_1406_:
{
if (lean_obj_tag(v___y_1407_) == 0)
{
lean_object* v_a_1408_; 
v_a_1408_ = lean_ctor_get(v___y_1407_, 0);
lean_inc(v_a_1408_);
lean_dec_ref_known(v___y_1407_, 1);
v_x_1395_ = v_a_1408_;
v_x_1396_ = v_tail_1405_;
goto _start;
}
else
{
lean_dec(v_tail_1405_);
lean_dec_ref(v_fn_1394_);
return v___y_1407_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6___boxed(lean_object* v_fn_1415_, lean_object* v_x_1416_, lean_object* v_x_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_){
_start:
{
lean_object* v_res_1424_; 
v_res_1424_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6(v_fn_1415_, v_x_1416_, v_x_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_);
lean_dec(v___y_1422_);
lean_dec_ref(v___y_1421_);
lean_dec(v___y_1420_);
lean_dec_ref(v___y_1419_);
lean_dec(v___y_1418_);
return v_res_1424_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5(lean_object* v_fn_1425_, lean_object* v_x_1426_, lean_object* v_x_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_){
_start:
{
if (lean_obj_tag(v_x_1427_) == 0)
{
lean_object* v___x_1434_; 
lean_dec_ref(v_fn_1425_);
v___x_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1434_, 0, v_x_1426_);
return v___x_1434_;
}
else
{
lean_object* v_head_1435_; lean_object* v_tail_1436_; lean_object* v___y_1438_; lean_object* v_toConstantVal_1441_; lean_object* v_value_1442_; lean_object* v_type_1443_; lean_object* v___x_1444_; 
v_head_1435_ = lean_ctor_get(v_x_1427_, 0);
lean_inc(v_head_1435_);
v_tail_1436_ = lean_ctor_get(v_x_1427_, 1);
lean_inc(v_tail_1436_);
lean_dec_ref_known(v_x_1427_, 2);
v_toConstantVal_1441_ = lean_ctor_get(v_head_1435_, 0);
lean_inc_ref(v_toConstantVal_1441_);
v_value_1442_ = lean_ctor_get(v_head_1435_, 1);
lean_inc_ref(v_value_1442_);
lean_dec(v_head_1435_);
v_type_1443_ = lean_ctor_get(v_toConstantVal_1441_, 2);
lean_inc_ref(v_type_1443_);
lean_dec_ref(v_toConstantVal_1441_);
lean_inc_ref(v_fn_1425_);
v___x_1444_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_type_1443_, v_fn_1425_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
if (lean_obj_tag(v___x_1444_) == 0)
{
lean_object* v___x_1445_; 
lean_dec_ref_known(v___x_1444_, 1);
lean_inc_ref(v_fn_1425_);
v___x_1445_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_value_1442_, v_fn_1425_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
v___y_1438_ = v___x_1445_;
goto v___jp_1437_;
}
else
{
lean_dec_ref(v_value_1442_);
v___y_1438_ = v___x_1444_;
goto v___jp_1437_;
}
v___jp_1437_:
{
if (lean_obj_tag(v___y_1438_) == 0)
{
lean_object* v_a_1439_; 
v_a_1439_ = lean_ctor_get(v___y_1438_, 0);
lean_inc(v_a_1439_);
lean_dec_ref_known(v___y_1438_, 1);
v_x_1426_ = v_a_1439_;
v_x_1427_ = v_tail_1436_;
goto _start;
}
else
{
lean_dec(v_tail_1436_);
lean_dec_ref(v_fn_1425_);
return v___y_1438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5___boxed(lean_object* v_fn_1446_, lean_object* v_x_1447_, lean_object* v_x_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_){
_start:
{
lean_object* v_res_1455_; 
v_res_1455_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5(v_fn_1446_, v_x_1447_, v_x_1448_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
lean_dec(v___y_1449_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2(lean_object* v_fn_1456_, lean_object* v_d_1457_, lean_object* v_a_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_){
_start:
{
switch(lean_obj_tag(v_d_1457_))
{
case 0:
{
lean_object* v_val_1465_; lean_object* v_toConstantVal_1466_; lean_object* v_type_1467_; lean_object* v___x_1468_; 
v_val_1465_ = lean_ctor_get(v_d_1457_, 0);
lean_inc_ref(v_val_1465_);
lean_dec_ref_known(v_d_1457_, 1);
v_toConstantVal_1466_ = lean_ctor_get(v_val_1465_, 0);
lean_inc_ref(v_toConstantVal_1466_);
lean_dec_ref(v_val_1465_);
v_type_1467_ = lean_ctor_get(v_toConstantVal_1466_, 2);
lean_inc_ref(v_type_1467_);
lean_dec_ref(v_toConstantVal_1466_);
v___x_1468_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_type_1467_, v_fn_1456_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
return v___x_1468_;
}
case 4:
{
lean_object* v___x_1469_; 
lean_dec_ref(v_fn_1456_);
v___x_1469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1469_, 0, v_a_1458_);
return v___x_1469_;
}
case 5:
{
lean_object* v_defns_1470_; lean_object* v___x_1471_; 
v_defns_1470_ = lean_ctor_get(v_d_1457_, 0);
lean_inc(v_defns_1470_);
lean_dec_ref_known(v_d_1457_, 1);
v___x_1471_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5(v_fn_1456_, v_a_1458_, v_defns_1470_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
return v___x_1471_;
}
case 6:
{
lean_object* v_types_1472_; lean_object* v___x_1473_; 
v_types_1472_ = lean_ctor_get(v_d_1457_, 2);
lean_inc(v_types_1472_);
lean_dec_ref_known(v_d_1457_, 3);
v___x_1473_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6(v_fn_1456_, v_a_1458_, v_types_1472_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
return v___x_1473_;
}
default: 
{
lean_object* v_val_1474_; lean_object* v_toConstantVal_1475_; lean_object* v_value_1476_; lean_object* v_type_1477_; lean_object* v___x_1478_; 
v_val_1474_ = lean_ctor_get(v_d_1457_, 0);
lean_inc_ref(v_val_1474_);
lean_dec(v_d_1457_);
v_toConstantVal_1475_ = lean_ctor_get(v_val_1474_, 0);
lean_inc_ref(v_toConstantVal_1475_);
v_value_1476_ = lean_ctor_get(v_val_1474_, 1);
lean_inc_ref(v_value_1476_);
lean_dec_ref(v_val_1474_);
v_type_1477_ = lean_ctor_get(v_toConstantVal_1475_, 2);
lean_inc_ref(v_type_1477_);
lean_dec_ref(v_toConstantVal_1475_);
lean_inc_ref(v_fn_1456_);
v___x_1478_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_type_1477_, v_fn_1456_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
if (lean_obj_tag(v___x_1478_) == 0)
{
lean_object* v___x_1479_; 
lean_dec_ref_known(v___x_1478_, 1);
v___x_1479_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_value_1476_, v_fn_1456_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
return v___x_1479_;
}
else
{
lean_dec_ref(v_value_1476_);
lean_dec_ref(v_fn_1456_);
return v___x_1478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2___boxed(lean_object* v_fn_1480_, lean_object* v_d_1481_, lean_object* v_a_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_){
_start:
{
lean_object* v_res_1489_; 
v_res_1489_ = l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2(v_fn_1480_, v_d_1481_, v_a_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_);
lean_dec(v___y_1487_);
lean_dec_ref(v___y_1486_);
lean_dec(v___y_1485_);
lean_dec_ref(v___y_1484_);
lean_dec(v___y_1483_);
return v_res_1489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1(lean_object* v_decl_1490_, lean_object* v_fn_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_){
_start:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1498_ = lean_box(0);
v___x_1499_ = l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2(v_fn_1491_, v_decl_1490_, v___x_1498_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1___boxed(lean_object* v_decl_1500_, lean_object* v_fn_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_){
_start:
{
lean_object* v_res_1508_; 
v_res_1508_ = l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1(v_decl_1500_, v_fn_1501_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_);
lean_dec(v___y_1506_);
lean_dec_ref(v___y_1505_);
lean_dec(v___y_1504_);
lean_dec_ref(v___y_1503_);
lean_dec(v___y_1502_);
return v_res_1508_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__2(void){
_start:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__0, &l_Lean_snapshotEnvLinterOptions___closed__0_once, _init_l_Lean_snapshotEnvLinterOptions___closed__0);
v___x_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1512_);
return v___x_1513_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__3(void){
_start:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1514_ = lean_box(1);
v___x_1515_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3);
v___x_1516_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__2, &l_Lean_warnIfUsesSorry___closed__2_once, _init_l_Lean_warnIfUsesSorry___closed__2);
v___x_1517_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1516_);
lean_ctor_set(v___x_1517_, 1, v___x_1515_);
lean_ctor_set(v___x_1517_, 2, v___x_1514_);
return v___x_1517_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__4(void){
_start:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; 
v___x_1518_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_1519_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__2, &l_Lean_warnIfUsesSorry___closed__2_once, _init_l_Lean_warnIfUsesSorry___closed__2);
v___x_1520_ = lean_unsigned_to_nat(0u);
v___x_1521_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1520_);
lean_ctor_set(v___x_1521_, 1, v___x_1520_);
lean_ctor_set(v___x_1521_, 2, v___x_1520_);
lean_ctor_set(v___x_1521_, 3, v___x_1520_);
lean_ctor_set(v___x_1521_, 4, v___x_1519_);
lean_ctor_set(v___x_1521_, 5, v___x_1519_);
lean_ctor_set(v___x_1521_, 6, v___x_1519_);
lean_ctor_set(v___x_1521_, 7, v___x_1519_);
lean_ctor_set(v___x_1521_, 8, v___x_1519_);
lean_ctor_set(v___x_1521_, 9, v___x_1519_);
lean_ctor_set(v___x_1521_, 10, v___x_1519_);
lean_ctor_set(v___x_1521_, 11, v___x_1518_);
return v___x_1521_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__5(void){
_start:
{
lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1522_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__2, &l_Lean_warnIfUsesSorry___closed__2_once, _init_l_Lean_warnIfUsesSorry___closed__2);
v___x_1523_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1522_);
lean_ctor_set(v___x_1523_, 1, v___x_1522_);
lean_ctor_set(v___x_1523_, 2, v___x_1522_);
lean_ctor_set(v___x_1523_, 3, v___x_1522_);
lean_ctor_set(v___x_1523_, 4, v___x_1522_);
lean_ctor_set(v___x_1523_, 5, v___x_1522_);
return v___x_1523_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__6(void){
_start:
{
lean_object* v___x_1524_; lean_object* v___x_1525_; 
v___x_1524_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__2, &l_Lean_warnIfUsesSorry___closed__2_once, _init_l_Lean_warnIfUsesSorry___closed__2);
v___x_1525_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1524_);
lean_ctor_set(v___x_1525_, 1, v___x_1524_);
lean_ctor_set(v___x_1525_, 2, v___x_1524_);
lean_ctor_set(v___x_1525_, 3, v___x_1524_);
lean_ctor_set(v___x_1525_, 4, v___x_1524_);
return v___x_1525_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__7(void){
_start:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
v___x_1526_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__6, &l_Lean_warnIfUsesSorry___closed__6_once, _init_l_Lean_warnIfUsesSorry___closed__6);
v___x_1527_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3);
v___x_1528_ = lean_box(1);
v___x_1529_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__5, &l_Lean_warnIfUsesSorry___closed__5_once, _init_l_Lean_warnIfUsesSorry___closed__5);
v___x_1530_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__4, &l_Lean_warnIfUsesSorry___closed__4_once, _init_l_Lean_warnIfUsesSorry___closed__4);
v___x_1531_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1530_);
lean_ctor_set(v___x_1531_, 1, v___x_1529_);
lean_ctor_set(v___x_1531_, 2, v___x_1528_);
lean_ctor_set(v___x_1531_, 3, v___x_1527_);
lean_ctor_set(v___x_1531_, 4, v___x_1526_);
return v___x_1531_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__11(void){
_start:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1536_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__10));
v___x_1537_ = l_Lean_stringToMessageData(v___x_1536_);
return v___x_1537_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__13(void){
_start:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1539_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__12));
v___x_1540_ = l_Lean_stringToMessageData(v___x_1539_);
return v___x_1540_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__15(void){
_start:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; 
v___x_1542_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__14));
v___x_1543_ = l_Lean_stringToMessageData(v___x_1542_);
return v___x_1543_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__16(void){
_start:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1544_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__15, &l_Lean_warnIfUsesSorry___closed__15_once, _init_l_Lean_warnIfUsesSorry___closed__15);
v___x_1545_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__9));
v___x_1546_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1545_);
lean_ctor_set(v___x_1546_, 1, v___x_1544_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry(lean_object* v_decl_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; uint8_t v___x_1556_; 
v___x_1554_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_1551_);
v___x_1555_ = l_Lean_warn_sorry;
v___x_1556_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v___x_1554_, v___x_1555_);
lean_dec_ref(v___x_1554_);
if (v___x_1556_ == 0)
{
lean_object* v___x_1557_; lean_object* v___x_1558_; 
lean_dec(v_decl_1550_);
v___x_1557_ = lean_box(0);
v___x_1558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1557_);
return v___x_1558_;
}
else
{
lean_object* v___f_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v_messages_1565_; uint8_t v___x_1566_; 
v___f_1559_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__0));
v___x_1560_ = lean_box(1);
v___x_1561_ = lean_st_ref_get(v_a_1552_);
v_messages_1565_ = lean_ctor_get(v___x_1561_, 7);
lean_inc_ref(v_messages_1565_);
lean_dec(v___x_1561_);
v___x_1566_ = l_Lean_MessageLog_hasErrors(v_messages_1565_);
lean_dec_ref(v_messages_1565_);
if (v___x_1566_ == 0)
{
if (v___x_1556_ == 0)
{
lean_dec(v_decl_1550_);
goto v___jp_1562_;
}
else
{
uint8_t v___x_1567_; 
v___x_1567_ = l_Lean_Declaration_hasSorry(v_decl_1550_);
if (v___x_1567_ == 0)
{
lean_dec(v_decl_1550_);
goto v___jp_1562_;
}
else
{
lean_object* v___x_1568_; lean_object* v___x_1569_; uint8_t v___x_1570_; uint8_t v___x_1571_; uint8_t v___x_1572_; lean_object* v___x_1573_; uint64_t v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; 
v___x_1568_ = lean_unsigned_to_nat(0u);
v___x_1569_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__1));
v___x_1570_ = 1;
v___x_1571_ = 0;
v___x_1572_ = 2;
v___x_1573_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_1573_, 0, v___x_1566_);
lean_ctor_set_uint8(v___x_1573_, 1, v___x_1566_);
lean_ctor_set_uint8(v___x_1573_, 2, v___x_1566_);
lean_ctor_set_uint8(v___x_1573_, 3, v___x_1566_);
lean_ctor_set_uint8(v___x_1573_, 4, v___x_1566_);
lean_ctor_set_uint8(v___x_1573_, 5, v___x_1567_);
lean_ctor_set_uint8(v___x_1573_, 6, v___x_1567_);
lean_ctor_set_uint8(v___x_1573_, 7, v___x_1566_);
lean_ctor_set_uint8(v___x_1573_, 8, v___x_1567_);
lean_ctor_set_uint8(v___x_1573_, 9, v___x_1570_);
lean_ctor_set_uint8(v___x_1573_, 10, v___x_1571_);
lean_ctor_set_uint8(v___x_1573_, 11, v___x_1567_);
lean_ctor_set_uint8(v___x_1573_, 12, v___x_1567_);
lean_ctor_set_uint8(v___x_1573_, 13, v___x_1567_);
lean_ctor_set_uint8(v___x_1573_, 14, v___x_1572_);
lean_ctor_set_uint8(v___x_1573_, 15, v___x_1567_);
lean_ctor_set_uint8(v___x_1573_, 16, v___x_1567_);
lean_ctor_set_uint8(v___x_1573_, 17, v___x_1567_);
lean_ctor_set_uint8(v___x_1573_, 18, v___x_1567_);
lean_ctor_set_uint8(v___x_1573_, 19, v___x_1566_);
v___x_1574_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1573_);
v___x_1575_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1575_, 0, v___x_1573_);
lean_ctor_set_uint64(v___x_1575_, sizeof(void*)*1, v___x_1574_);
v___x_1576_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__3, &l_Lean_warnIfUsesSorry___closed__3_once, _init_l_Lean_warnIfUsesSorry___closed__3);
v___x_1577_ = lean_box(0);
v___x_1578_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1578_, 0, v___x_1575_);
lean_ctor_set(v___x_1578_, 1, v___x_1560_);
lean_ctor_set(v___x_1578_, 2, v___x_1576_);
lean_ctor_set(v___x_1578_, 3, v___x_1569_);
lean_ctor_set(v___x_1578_, 4, v___x_1577_);
lean_ctor_set(v___x_1578_, 5, v___x_1568_);
lean_ctor_set(v___x_1578_, 6, v___x_1577_);
lean_ctor_set_uint8(v___x_1578_, sizeof(void*)*7, v___x_1566_);
lean_ctor_set_uint8(v___x_1578_, sizeof(void*)*7 + 1, v___x_1566_);
lean_ctor_set_uint8(v___x_1578_, sizeof(void*)*7 + 2, v___x_1566_);
lean_ctor_set_uint8(v___x_1578_, sizeof(void*)*7 + 3, v___x_1556_);
v___x_1579_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__7, &l_Lean_warnIfUsesSorry___closed__7_once, _init_l_Lean_warnIfUsesSorry___closed__7);
v___x_1580_ = lean_st_mk_ref(v___x_1579_);
v___x_1581_ = lean_st_mk_ref(v___x_1569_);
v___x_1582_ = l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1(v_decl_1550_, v___f_1559_, v___x_1581_, v___x_1578_, v___x_1580_, v_a_1551_, v_a_1552_);
lean_dec_ref_known(v___x_1578_, 7);
if (lean_obj_tag(v___x_1582_) == 0)
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v_val_1586_; lean_object* v___x_1608_; size_t v_sz_1609_; size_t v___x_1610_; lean_object* v___x_1611_; lean_object* v_fst_1612_; 
lean_dec_ref_known(v___x_1582_, 1);
v___x_1583_ = lean_st_ref_get(v___x_1581_);
lean_dec(v___x_1581_);
v___x_1584_ = lean_st_ref_get(v___x_1580_);
lean_dec(v___x_1580_);
lean_dec(v___x_1584_);
v___x_1608_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__17));
v_sz_1609_ = lean_array_size(v___x_1583_);
v___x_1610_ = ((size_t)0ULL);
v___x_1611_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3(v___x_1583_, v_sz_1609_, v___x_1610_, v___x_1608_);
v_fst_1612_ = lean_ctor_get(v___x_1611_, 0);
lean_inc(v_fst_1612_);
lean_dec_ref(v___x_1611_);
if (lean_obj_tag(v_fst_1612_) == 0)
{
goto v___jp_1602_;
}
else
{
lean_object* v_val_1613_; 
v_val_1613_ = lean_ctor_get(v_fst_1612_, 0);
lean_inc(v_val_1613_);
lean_dec_ref_known(v_fst_1612_, 1);
if (lean_obj_tag(v_val_1613_) == 0)
{
goto v___jp_1602_;
}
else
{
lean_object* v_val_1614_; 
lean_dec(v___x_1583_);
v_val_1614_ = lean_ctor_get(v_val_1613_, 0);
lean_inc(v_val_1614_);
lean_dec_ref_known(v_val_1613_, 1);
v_val_1586_ = v_val_1614_;
goto v___jp_1585_;
}
}
v___jp_1585_:
{
lean_object* v_snd_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1600_; 
v_snd_1587_ = lean_ctor_get(v_val_1586_, 1);
v_isSharedCheck_1600_ = !lean_is_exclusive(v_val_1586_);
if (v_isSharedCheck_1600_ == 0)
{
lean_object* v_unused_1601_; 
v_unused_1601_ = lean_ctor_get(v_val_1586_, 0);
lean_dec(v_unused_1601_);
v___x_1589_ = v_val_1586_;
v_isShared_1590_ = v_isSharedCheck_1600_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_snd_1587_);
lean_dec(v_val_1586_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1600_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1594_; 
v___x_1591_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__9));
v___x_1592_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__11, &l_Lean_warnIfUsesSorry___closed__11_once, _init_l_Lean_warnIfUsesSorry___closed__11);
if (v_isShared_1590_ == 0)
{
lean_ctor_set_tag(v___x_1589_, 7);
lean_ctor_set(v___x_1589_, 0, v___x_1592_);
v___x_1594_ = v___x_1589_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v___x_1592_);
lean_ctor_set(v_reuseFailAlloc_1599_, 1, v_snd_1587_);
v___x_1594_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1595_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__13, &l_Lean_warnIfUsesSorry___closed__13_once, _init_l_Lean_warnIfUsesSorry___closed__13);
v___x_1596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1594_);
lean_ctor_set(v___x_1596_, 1, v___x_1595_);
v___x_1597_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1591_);
lean_ctor_set(v___x_1597_, 1, v___x_1596_);
v___x_1598_ = l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2(v___x_1597_, v_a_1551_, v_a_1552_);
return v___x_1598_;
}
}
}
v___jp_1602_:
{
lean_object* v___x_1603_; uint8_t v___x_1604_; 
v___x_1603_ = lean_array_get_size(v___x_1583_);
v___x_1604_ = lean_nat_dec_lt(v___x_1568_, v___x_1603_);
if (v___x_1604_ == 0)
{
lean_object* v___x_1605_; lean_object* v___x_1606_; 
lean_dec(v___x_1583_);
v___x_1605_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__16, &l_Lean_warnIfUsesSorry___closed__16_once, _init_l_Lean_warnIfUsesSorry___closed__16);
v___x_1606_ = l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2(v___x_1605_, v_a_1551_, v_a_1552_);
return v___x_1606_;
}
else
{
lean_object* v___x_1607_; 
v___x_1607_ = lean_array_fget(v___x_1583_, v___x_1568_);
lean_dec(v___x_1583_);
v_val_1586_ = v___x_1607_;
goto v___jp_1585_;
}
}
}
else
{
lean_dec(v___x_1581_);
lean_dec(v___x_1580_);
return v___x_1582_;
}
}
}
}
else
{
lean_dec(v_decl_1550_);
goto v___jp_1562_;
}
v___jp_1562_:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1563_ = lean_box(0);
v___x_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1563_);
return v___x_1564_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___boxed(lean_object* v_decl_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Lean_warnIfUsesSorry(v_decl_1615_, v_a_1616_, v_a_1617_);
lean_dec(v_a_1617_);
lean_dec_ref(v_a_1616_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8(lean_object* v_00_u03b2_1620_, lean_object* v_m_1621_, lean_object* v_a_1622_){
_start:
{
lean_object* v___x_1623_; 
v___x_1623_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(v_m_1621_, v_a_1622_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___boxed(lean_object* v_00_u03b2_1624_, lean_object* v_m_1625_, lean_object* v_a_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8(v_00_u03b2_1624_, v_m_1625_, v_a_1626_);
lean_dec_ref(v_a_1626_);
lean_dec_ref(v_m_1625_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9(lean_object* v_00_u03b2_1628_, lean_object* v_m_1629_, lean_object* v_a_1630_, lean_object* v_b_1631_){
_start:
{
lean_object* v___x_1632_; 
v___x_1632_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(v_m_1629_, v_a_1630_, v_b_1631_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14(lean_object* v_00_u03b2_1633_, lean_object* v_a_1634_, lean_object* v_x_1635_){
_start:
{
lean_object* v___x_1636_; 
v___x_1636_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg(v_a_1634_, v_x_1635_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___boxed(lean_object* v_00_u03b2_1637_, lean_object* v_a_1638_, lean_object* v_x_1639_){
_start:
{
lean_object* v_res_1640_; 
v_res_1640_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14(v_00_u03b2_1637_, v_a_1638_, v_x_1639_);
lean_dec(v_x_1639_);
lean_dec_ref(v_a_1638_);
return v_res_1640_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16(lean_object* v_00_u03b2_1641_, lean_object* v_a_1642_, lean_object* v_x_1643_){
_start:
{
uint8_t v___x_1644_; 
v___x_1644_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg(v_a_1642_, v_x_1643_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___boxed(lean_object* v_00_u03b2_1645_, lean_object* v_a_1646_, lean_object* v_x_1647_){
_start:
{
uint8_t v_res_1648_; lean_object* v_r_1649_; 
v_res_1648_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16(v_00_u03b2_1645_, v_a_1646_, v_x_1647_);
lean_dec(v_x_1647_);
lean_dec_ref(v_a_1646_);
v_r_1649_ = lean_box(v_res_1648_);
return v_r_1649_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17(lean_object* v_00_u03b2_1650_, lean_object* v_data_1651_){
_start:
{
lean_object* v___x_1652_; 
v___x_1652_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17___redArg(v_data_1651_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18(lean_object* v_00_u03b2_1653_, lean_object* v_a_1654_, lean_object* v_b_1655_, lean_object* v_x_1656_){
_start:
{
lean_object* v___x_1657_; 
v___x_1657_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18___redArg(v_a_1654_, v_b_1655_, v_x_1656_);
return v___x_1657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22(lean_object* v_00_u03b1_1658_, lean_object* v_name_1659_, uint8_t v_bi_1660_, lean_object* v_type_1661_, lean_object* v_k_1662_, uint8_t v_kind_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_){
_start:
{
lean_object* v___x_1671_; 
v___x_1671_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(v_name_1659_, v_bi_1660_, v_type_1661_, v_k_1662_, v_kind_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___boxed(lean_object* v_00_u03b1_1672_, lean_object* v_name_1673_, lean_object* v_bi_1674_, lean_object* v_type_1675_, lean_object* v_k_1676_, lean_object* v_kind_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_){
_start:
{
uint8_t v_bi_boxed_1685_; uint8_t v_kind_boxed_1686_; lean_object* v_res_1687_; 
v_bi_boxed_1685_ = lean_unbox(v_bi_1674_);
v_kind_boxed_1686_ = lean_unbox(v_kind_1677_);
v_res_1687_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22(v_00_u03b1_1672_, v_name_1673_, v_bi_boxed_1685_, v_type_1675_, v_k_1676_, v_kind_boxed_1686_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_);
lean_dec(v___y_1683_);
lean_dec_ref(v___y_1682_);
lean_dec(v___y_1681_);
lean_dec_ref(v___y_1680_);
lean_dec(v___y_1679_);
lean_dec(v___y_1678_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27(lean_object* v_00_u03b1_1688_, lean_object* v_name_1689_, lean_object* v_type_1690_, lean_object* v_val_1691_, lean_object* v_k_1692_, uint8_t v_nondep_1693_, uint8_t v_kind_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_){
_start:
{
lean_object* v___x_1702_; 
v___x_1702_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg(v_name_1689_, v_type_1690_, v_val_1691_, v_k_1692_, v_nondep_1693_, v_kind_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_);
return v___x_1702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___boxed(lean_object* v_00_u03b1_1703_, lean_object* v_name_1704_, lean_object* v_type_1705_, lean_object* v_val_1706_, lean_object* v_k_1707_, lean_object* v_nondep_1708_, lean_object* v_kind_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
uint8_t v_nondep_boxed_1717_; uint8_t v_kind_boxed_1718_; lean_object* v_res_1719_; 
v_nondep_boxed_1717_ = lean_unbox(v_nondep_1708_);
v_kind_boxed_1718_ = lean_unbox(v_kind_1709_);
v_res_1719_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27(v_00_u03b1_1703_, v_name_1704_, v_type_1705_, v_val_1706_, v_k_1707_, v_nondep_boxed_1717_, v_kind_boxed_1718_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v___y_1711_);
lean_dec(v___y_1710_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18(lean_object* v_00_u03b2_1720_, lean_object* v_i_1721_, lean_object* v_source_1722_, lean_object* v_target_1723_){
_start:
{
lean_object* v___x_1724_; 
v___x_1724_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18___redArg(v_i_1721_, v_source_1722_, v_target_1723_);
return v___x_1724_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22(lean_object* v_00_u03b2_1725_, lean_object* v_x_1726_, lean_object* v_x_1727_){
_start:
{
lean_object* v___x_1728_; 
v___x_1728_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22___redArg(v_x_1726_, v_x_1727_);
return v___x_1728_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__0(lean_object* v_x_1732_){
_start:
{
lean_object* v___x_1733_; uint8_t v___x_1734_; 
v___x_1733_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__0___closed__1));
v___x_1734_ = l_Lean_Expr_isConstOf(v_x_1732_, v___x_1733_);
return v___x_1734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__0___boxed(lean_object* v_x_1735_){
_start:
{
uint8_t v_res_1736_; lean_object* v_r_1737_; 
v_res_1736_ = l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__0(v_x_1735_);
lean_dec_ref(v_x_1735_);
v_r_1737_ = lean_box(v_res_1736_);
return v_r_1737_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__1___redArg(lean_object* v_msg_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_){
_start:
{
lean_object* v_ref_1744_; lean_object* v___x_1745_; lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1754_; 
v_ref_1744_ = lean_ctor_get(v___y_1741_, 2);
v___x_1745_ = l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0(v_msg_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_);
v_a_1746_ = lean_ctor_get(v___x_1745_, 0);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1745_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1748_ = v___x_1745_;
v_isShared_1749_ = v_isSharedCheck_1754_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1745_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1754_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1750_; lean_object* v___x_1752_; 
lean_inc(v_ref_1744_);
v___x_1750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1750_, 0, v_ref_1744_);
lean_ctor_set(v___x_1750_, 1, v_a_1746_);
if (v_isShared_1749_ == 0)
{
lean_ctor_set_tag(v___x_1748_, 1);
lean_ctor_set(v___x_1748_, 0, v___x_1750_);
v___x_1752_ = v___x_1748_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v___x_1750_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__1___redArg___boxed(lean_object* v_msg_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_){
_start:
{
lean_object* v_res_1761_; 
v_res_1761_ = l_Lean_throwError___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__1___redArg(v_msg_1755_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_);
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
lean_dec(v___y_1757_);
lean_dec_ref(v___y_1756_);
return v_res_1761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___redArg___lam__0(lean_object* v_k_1762_, lean_object* v___y_1763_, lean_object* v_b_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_){
_start:
{
lean_object* v___x_1770_; 
lean_inc(v___y_1768_);
lean_inc_ref(v___y_1767_);
lean_inc(v___y_1766_);
lean_inc_ref(v___y_1765_);
lean_inc(v___y_1763_);
v___x_1770_ = lean_apply_7(v_k_1762_, v_b_1764_, v___y_1763_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_, lean_box(0));
return v___x_1770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___redArg___lam__0___boxed(lean_object* v_k_1771_, lean_object* v___y_1772_, lean_object* v_b_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_){
_start:
{
lean_object* v_res_1779_; 
v_res_1779_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___redArg___lam__0(v_k_1771_, v___y_1772_, v_b_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_);
lean_dec(v___y_1777_);
lean_dec_ref(v___y_1776_);
lean_dec(v___y_1775_);
lean_dec_ref(v___y_1774_);
lean_dec(v___y_1772_);
return v_res_1779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___redArg(lean_object* v_name_1780_, uint8_t v_bi_1781_, lean_object* v_type_1782_, lean_object* v_k_1783_, uint8_t v_kind_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_){
_start:
{
lean_object* v___f_1791_; lean_object* v___x_1792_; 
lean_inc(v___y_1785_);
v___f_1791_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1791_, 0, v_k_1783_);
lean_closure_set(v___f_1791_, 1, v___y_1785_);
v___x_1792_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1780_, v_bi_1781_, v_type_1782_, v___f_1791_, v_kind_1784_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_);
if (lean_obj_tag(v___x_1792_) == 0)
{
return v___x_1792_;
}
else
{
lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1800_; 
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1792_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1795_ = v___x_1792_;
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_dec(v___x_1792_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1793_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___redArg___boxed(lean_object* v_name_1801_, lean_object* v_bi_1802_, lean_object* v_type_1803_, lean_object* v_k_1804_, lean_object* v_kind_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_){
_start:
{
uint8_t v_bi_boxed_1812_; uint8_t v_kind_boxed_1813_; lean_object* v_res_1814_; 
v_bi_boxed_1812_ = lean_unbox(v_bi_1802_);
v_kind_boxed_1813_ = lean_unbox(v_kind_1805_);
v_res_1814_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___redArg(v_name_1801_, v_bi_boxed_1812_, v_type_1803_, v_k_1804_, v_kind_boxed_1813_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
lean_dec(v___y_1808_);
lean_dec_ref(v___y_1807_);
lean_dec(v___y_1806_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4_spec__6___lam__0___boxed(lean_object* v_fvars_1815_, lean_object* v_f_1816_, lean_object* v_body_1817_, lean_object* v_x_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_){
_start:
{
lean_object* v_res_1825_; 
v_res_1825_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4_spec__6___lam__0(v_fvars_1815_, v_f_1816_, v_body_1817_, v_x_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_);
lean_dec(v___y_1823_);
lean_dec_ref(v___y_1822_);
lean_dec(v___y_1821_);
lean_dec_ref(v___y_1820_);
lean_dec(v___y_1819_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4_spec__6(lean_object* v_f_1826_, lean_object* v_fvars_1827_, lean_object* v_a_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_){
_start:
{
if (lean_obj_tag(v_a_1828_) == 6)
{
lean_object* v_binderName_1835_; lean_object* v_binderType_1836_; lean_object* v_body_1837_; uint8_t v_binderInfo_1838_; lean_object* v___f_1839_; lean_object* v_d_1840_; lean_object* v___x_1841_; 
v_binderName_1835_ = lean_ctor_get(v_a_1828_, 0);
lean_inc(v_binderName_1835_);
v_binderType_1836_ = lean_ctor_get(v_a_1828_, 1);
lean_inc_ref(v_binderType_1836_);
v_body_1837_ = lean_ctor_get(v_a_1828_, 2);
lean_inc_ref(v_body_1837_);
v_binderInfo_1838_ = lean_ctor_get_uint8(v_a_1828_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_1828_, 3);
lean_inc_ref(v_f_1826_);
lean_inc_ref(v_fvars_1827_);
v___f_1839_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4_spec__6___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1839_, 0, v_fvars_1827_);
lean_closure_set(v___f_1839_, 1, v_f_1826_);
lean_closure_set(v___f_1839_, 2, v_body_1837_);
v_d_1840_ = lean_expr_instantiate_rev(v_binderType_1836_, v_fvars_1827_);
lean_dec_ref(v_fvars_1827_);
lean_dec_ref(v_binderType_1836_);
lean_inc(v___y_1833_);
lean_inc_ref(v___y_1832_);
lean_inc(v___y_1831_);
lean_inc_ref(v___y_1830_);
lean_inc(v___y_1829_);
lean_inc_ref(v_d_1840_);
v___x_1841_ = lean_apply_7(v_f_1826_, v_d_1840_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_, lean_box(0));
if (lean_obj_tag(v___x_1841_) == 0)
{
uint8_t v___x_1842_; lean_object* v___x_1843_; 
lean_dec_ref_known(v___x_1841_, 1);
v___x_1842_ = 0;
v___x_1843_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___redArg(v_binderName_1835_, v_binderInfo_1838_, v_d_1840_, v___f_1839_, v___x_1842_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_);
return v___x_1843_;
}
else
{
lean_dec_ref(v_d_1840_);
lean_dec_ref(v___f_1839_);
lean_dec(v_binderName_1835_);
return v___x_1841_;
}
}
else
{
lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1844_ = lean_expr_instantiate_rev(v_a_1828_, v_fvars_1827_);
lean_dec_ref(v_fvars_1827_);
lean_dec_ref(v_a_1828_);
lean_inc(v___y_1833_);
lean_inc_ref(v___y_1832_);
lean_inc(v___y_1831_);
lean_inc_ref(v___y_1830_);
lean_inc(v___y_1829_);
v___x_1845_ = lean_apply_7(v_f_1826_, v___x_1844_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_, lean_box(0));
return v___x_1845_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4_spec__6___lam__0(lean_object* v_fvars_1846_, lean_object* v_f_1847_, lean_object* v_body_1848_, lean_object* v_x_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_){
_start:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; 
v___x_1856_ = lean_array_push(v_fvars_1846_, v_x_1849_);
v___x_1857_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4_spec__6(v_f_1847_, v___x_1856_, v_body_1848_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4_spec__6___boxed(lean_object* v_f_1858_, lean_object* v_fvars_1859_, lean_object* v_a_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_){
_start:
{
lean_object* v_res_1867_; 
v_res_1867_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4_spec__6(v_f_1858_, v_fvars_1859_, v_a_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_);
lean_dec(v___y_1865_);
lean_dec_ref(v___y_1864_);
lean_dec(v___y_1863_);
lean_dec_ref(v___y_1862_);
lean_dec(v___y_1861_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4(lean_object* v_f_1868_, lean_object* v_e_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1876_ = ((lean_object*)(l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0));
v___x_1877_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4_spec__6(v_f_1868_, v___x_1876_, v_e_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4___boxed(lean_object* v_f_1878_, lean_object* v_e_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_){
_start:
{
lean_object* v_res_1886_; 
v_res_1886_ = l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4(v_f_1878_, v_e_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_);
lean_dec(v___y_1884_);
lean_dec_ref(v___y_1883_);
lean_dec(v___y_1882_);
lean_dec_ref(v___y_1881_);
lean_dec(v___y_1880_);
return v_res_1886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4___lam__0___boxed(lean_object* v_fvars_1887_, lean_object* v_f_1888_, lean_object* v_body_1889_, lean_object* v_x_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4___lam__0(v_fvars_1887_, v_f_1888_, v_body_1889_, v_x_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
lean_dec(v___y_1891_);
return v_res_1897_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4(lean_object* v_f_1898_, lean_object* v_fvars_1899_, lean_object* v_a_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_){
_start:
{
if (lean_obj_tag(v_a_1900_) == 7)
{
lean_object* v_binderName_1907_; lean_object* v_binderType_1908_; lean_object* v_body_1909_; uint8_t v_binderInfo_1910_; lean_object* v___f_1911_; lean_object* v_d_1912_; lean_object* v___x_1913_; 
v_binderName_1907_ = lean_ctor_get(v_a_1900_, 0);
lean_inc(v_binderName_1907_);
v_binderType_1908_ = lean_ctor_get(v_a_1900_, 1);
lean_inc_ref(v_binderType_1908_);
v_body_1909_ = lean_ctor_get(v_a_1900_, 2);
lean_inc_ref(v_body_1909_);
v_binderInfo_1910_ = lean_ctor_get_uint8(v_a_1900_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_1900_, 3);
lean_inc_ref(v_f_1898_);
lean_inc_ref(v_fvars_1899_);
v___f_1911_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1911_, 0, v_fvars_1899_);
lean_closure_set(v___f_1911_, 1, v_f_1898_);
lean_closure_set(v___f_1911_, 2, v_body_1909_);
v_d_1912_ = lean_expr_instantiate_rev(v_binderType_1908_, v_fvars_1899_);
lean_dec_ref(v_fvars_1899_);
lean_dec_ref(v_binderType_1908_);
lean_inc(v___y_1905_);
lean_inc_ref(v___y_1904_);
lean_inc(v___y_1903_);
lean_inc_ref(v___y_1902_);
lean_inc(v___y_1901_);
lean_inc_ref(v_d_1912_);
v___x_1913_ = lean_apply_7(v_f_1898_, v_d_1912_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_, lean_box(0));
if (lean_obj_tag(v___x_1913_) == 0)
{
uint8_t v___x_1914_; lean_object* v___x_1915_; 
lean_dec_ref_known(v___x_1913_, 1);
v___x_1914_ = 0;
v___x_1915_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___redArg(v_binderName_1907_, v_binderInfo_1910_, v_d_1912_, v___f_1911_, v___x_1914_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_);
return v___x_1915_;
}
else
{
lean_dec_ref(v_d_1912_);
lean_dec_ref(v___f_1911_);
lean_dec(v_binderName_1907_);
return v___x_1913_;
}
}
else
{
lean_object* v___x_1916_; lean_object* v___x_1917_; 
v___x_1916_ = lean_expr_instantiate_rev(v_a_1900_, v_fvars_1899_);
lean_dec_ref(v_fvars_1899_);
lean_dec_ref(v_a_1900_);
lean_inc(v___y_1905_);
lean_inc_ref(v___y_1904_);
lean_inc(v___y_1903_);
lean_inc_ref(v___y_1902_);
lean_inc(v___y_1901_);
v___x_1917_ = lean_apply_7(v_f_1898_, v___x_1916_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_, lean_box(0));
return v___x_1917_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4___lam__0(lean_object* v_fvars_1918_, lean_object* v_f_1919_, lean_object* v_body_1920_, lean_object* v_x_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_){
_start:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1928_ = lean_array_push(v_fvars_1918_, v_x_1921_);
v___x_1929_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4(v_f_1919_, v___x_1928_, v_body_1920_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4___boxed(lean_object* v_f_1930_, lean_object* v_fvars_1931_, lean_object* v_a_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_){
_start:
{
lean_object* v_res_1939_; 
v_res_1939_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4(v_f_1930_, v_fvars_1931_, v_a_1932_, v___y_1933_, v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_);
lean_dec(v___y_1937_);
lean_dec_ref(v___y_1936_);
lean_dec(v___y_1935_);
lean_dec_ref(v___y_1934_);
lean_dec(v___y_1933_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3(lean_object* v_f_1940_, lean_object* v_e_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_){
_start:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1948_ = ((lean_object*)(l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0));
v___x_1949_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4(v_f_1940_, v___x_1948_, v_e_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3___boxed(lean_object* v_f_1950_, lean_object* v_e_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_){
_start:
{
lean_object* v_res_1958_; 
v_res_1958_ = l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3(v_f_1950_, v_e_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_);
lean_dec(v___y_1956_);
lean_dec_ref(v___y_1955_);
lean_dec(v___y_1954_);
lean_dec_ref(v___y_1953_);
lean_dec(v___y_1952_);
return v_res_1958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8_spec__10___redArg(lean_object* v_name_1959_, lean_object* v_type_1960_, lean_object* v_val_1961_, lean_object* v_k_1962_, uint8_t v_nondep_1963_, uint8_t v_kind_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_){
_start:
{
lean_object* v___f_1971_; lean_object* v___x_1972_; 
lean_inc(v___y_1965_);
v___f_1971_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1971_, 0, v_k_1962_);
lean_closure_set(v___f_1971_, 1, v___y_1965_);
v___x_1972_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1959_, v_type_1960_, v_val_1961_, v___f_1971_, v_nondep_1963_, v_kind_1964_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_);
if (lean_obj_tag(v___x_1972_) == 0)
{
return v___x_1972_;
}
else
{
lean_object* v_a_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1980_; 
v_a_1973_ = lean_ctor_get(v___x_1972_, 0);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1972_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1975_ = v___x_1972_;
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_a_1973_);
lean_dec(v___x_1972_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___x_1978_; 
if (v_isShared_1976_ == 0)
{
v___x_1978_ = v___x_1975_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v_a_1973_);
v___x_1978_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
return v___x_1978_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8_spec__10___redArg___boxed(lean_object* v_name_1981_, lean_object* v_type_1982_, lean_object* v_val_1983_, lean_object* v_k_1984_, lean_object* v_nondep_1985_, lean_object* v_kind_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_){
_start:
{
uint8_t v_nondep_boxed_1993_; uint8_t v_kind_boxed_1994_; lean_object* v_res_1995_; 
v_nondep_boxed_1993_ = lean_unbox(v_nondep_1985_);
v_kind_boxed_1994_ = lean_unbox(v_kind_1986_);
v_res_1995_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8_spec__10___redArg(v_name_1981_, v_type_1982_, v_val_1983_, v_k_1984_, v_nondep_boxed_1993_, v_kind_boxed_1994_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_);
lean_dec(v___y_1991_);
lean_dec_ref(v___y_1990_);
lean_dec(v___y_1989_);
lean_dec_ref(v___y_1988_);
lean_dec(v___y_1987_);
return v_res_1995_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8___lam__0___boxed(lean_object* v_fvars_1996_, lean_object* v_f_1997_, lean_object* v_body_1998_, lean_object* v_x_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_){
_start:
{
lean_object* v_res_2006_; 
v_res_2006_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8___lam__0(v_fvars_1996_, v_f_1997_, v_body_1998_, v_x_1999_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_);
lean_dec(v___y_2004_);
lean_dec_ref(v___y_2003_);
lean_dec(v___y_2002_);
lean_dec_ref(v___y_2001_);
lean_dec(v___y_2000_);
return v_res_2006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8(lean_object* v_f_2007_, lean_object* v_fvars_2008_, lean_object* v_a_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_){
_start:
{
if (lean_obj_tag(v_a_2009_) == 8)
{
lean_object* v_declName_2016_; lean_object* v_type_2017_; lean_object* v_value_2018_; lean_object* v_body_2019_; lean_object* v___f_2020_; lean_object* v_d_2021_; lean_object* v_v_2022_; lean_object* v___x_2023_; 
v_declName_2016_ = lean_ctor_get(v_a_2009_, 0);
lean_inc(v_declName_2016_);
v_type_2017_ = lean_ctor_get(v_a_2009_, 1);
lean_inc_ref(v_type_2017_);
v_value_2018_ = lean_ctor_get(v_a_2009_, 2);
lean_inc_ref(v_value_2018_);
v_body_2019_ = lean_ctor_get(v_a_2009_, 3);
lean_inc_ref(v_body_2019_);
lean_dec_ref_known(v_a_2009_, 4);
lean_inc_ref_n(v_f_2007_, 2);
lean_inc_ref(v_fvars_2008_);
v___f_2020_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8___lam__0___boxed), 10, 3);
lean_closure_set(v___f_2020_, 0, v_fvars_2008_);
lean_closure_set(v___f_2020_, 1, v_f_2007_);
lean_closure_set(v___f_2020_, 2, v_body_2019_);
v_d_2021_ = lean_expr_instantiate_rev(v_type_2017_, v_fvars_2008_);
lean_dec_ref(v_type_2017_);
v_v_2022_ = lean_expr_instantiate_rev(v_value_2018_, v_fvars_2008_);
lean_dec_ref(v_fvars_2008_);
lean_dec_ref(v_value_2018_);
lean_inc(v___y_2014_);
lean_inc_ref(v___y_2013_);
lean_inc(v___y_2012_);
lean_inc_ref(v___y_2011_);
lean_inc(v___y_2010_);
lean_inc_ref(v_d_2021_);
v___x_2023_ = lean_apply_7(v_f_2007_, v_d_2021_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_, lean_box(0));
if (lean_obj_tag(v___x_2023_) == 0)
{
lean_object* v___x_2024_; 
lean_dec_ref_known(v___x_2023_, 1);
lean_inc(v___y_2014_);
lean_inc_ref(v___y_2013_);
lean_inc(v___y_2012_);
lean_inc_ref(v___y_2011_);
lean_inc(v___y_2010_);
lean_inc_ref(v_v_2022_);
v___x_2024_ = lean_apply_7(v_f_2007_, v_v_2022_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_, lean_box(0));
if (lean_obj_tag(v___x_2024_) == 0)
{
uint8_t v___x_2025_; uint8_t v___x_2026_; lean_object* v___x_2027_; 
lean_dec_ref_known(v___x_2024_, 1);
v___x_2025_ = 0;
v___x_2026_ = 0;
v___x_2027_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8_spec__10___redArg(v_declName_2016_, v_d_2021_, v_v_2022_, v___f_2020_, v___x_2025_, v___x_2026_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_);
return v___x_2027_;
}
else
{
lean_dec_ref(v_v_2022_);
lean_dec_ref(v_d_2021_);
lean_dec_ref(v___f_2020_);
lean_dec(v_declName_2016_);
return v___x_2024_;
}
}
else
{
lean_dec_ref(v_v_2022_);
lean_dec_ref(v_d_2021_);
lean_dec_ref(v___f_2020_);
lean_dec(v_declName_2016_);
lean_dec_ref(v_f_2007_);
return v___x_2023_;
}
}
else
{
lean_object* v___x_2028_; lean_object* v___x_2029_; 
v___x_2028_ = lean_expr_instantiate_rev(v_a_2009_, v_fvars_2008_);
lean_dec_ref(v_fvars_2008_);
lean_dec_ref(v_a_2009_);
lean_inc(v___y_2014_);
lean_inc_ref(v___y_2013_);
lean_inc(v___y_2012_);
lean_inc_ref(v___y_2011_);
lean_inc(v___y_2010_);
v___x_2029_ = lean_apply_7(v_f_2007_, v___x_2028_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_, lean_box(0));
return v___x_2029_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8___lam__0(lean_object* v_fvars_2030_, lean_object* v_f_2031_, lean_object* v_body_2032_, lean_object* v_x_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_){
_start:
{
lean_object* v___x_2040_; lean_object* v___x_2041_; 
v___x_2040_ = lean_array_push(v_fvars_2030_, v_x_2033_);
v___x_2041_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8(v_f_2031_, v___x_2040_, v_body_2032_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_);
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8___boxed(lean_object* v_f_2042_, lean_object* v_fvars_2043_, lean_object* v_a_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_){
_start:
{
lean_object* v_res_2051_; 
v_res_2051_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8(v_f_2042_, v_fvars_2043_, v_a_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_);
lean_dec(v___y_2049_);
lean_dec_ref(v___y_2048_);
lean_dec(v___y_2047_);
lean_dec_ref(v___y_2046_);
lean_dec(v___y_2045_);
return v_res_2051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5(lean_object* v_f_2052_, lean_object* v_e_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_){
_start:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; 
v___x_2060_ = ((lean_object*)(l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0));
v___x_2061_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8(v_f_2052_, v___x_2060_, v_e_2053_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_);
return v___x_2061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5___boxed(lean_object* v_f_2062_, lean_object* v_e_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_){
_start:
{
lean_object* v_res_2070_; 
v_res_2070_ = l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5(v_f_2062_, v_e_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_);
lean_dec(v___y_2068_);
lean_dec_ref(v___y_2067_);
lean_dec(v___y_2066_);
lean_dec_ref(v___y_2065_);
lean_dec(v___y_2064_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2___lam__0(lean_object* v_00_u03b1_2071_, lean_object* v_x_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_){
_start:
{
lean_object* v___x_2078_; lean_object* v___x_2079_; 
v___x_2078_ = lean_apply_1(v_x_2072_, lean_box(0));
v___x_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2078_);
return v___x_2079_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2___lam__0___boxed(lean_object* v_00_u03b1_2080_, lean_object* v_x_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2___lam__0(v_00_u03b1_2080_, v_x_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_);
lean_dec(v___y_2085_);
lean_dec_ref(v___y_2084_);
lean_dec(v___y_2083_);
lean_dec_ref(v___y_2082_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2___boxed(lean_object* v_fn_2088_, lean_object* v_e_2089_, lean_object* v_a_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_){
_start:
{
lean_object* v_res_2096_; 
v_res_2096_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2(v_fn_2088_, v_e_2089_, v_a_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
lean_dec(v___y_2094_);
lean_dec_ref(v___y_2093_);
lean_dec(v___y_2092_);
lean_dec_ref(v___y_2091_);
lean_dec(v_a_2090_);
return v_res_2096_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2(lean_object* v_fn_2097_, lean_object* v_e_2098_, lean_object* v_a_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
lean_object* v_a_2106_; lean_object* v___y_2118_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
lean_inc(v_a_2099_);
v___x_2120_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2120_, 0, lean_box(0));
lean_closure_set(v___x_2120_, 1, lean_box(0));
lean_closure_set(v___x_2120_, 2, v_a_2099_);
v___x_2121_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2___lam__0(lean_box(0), v___x_2120_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
if (lean_obj_tag(v___x_2121_) == 0)
{
lean_object* v_a_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2158_; 
v_a_2122_ = lean_ctor_get(v___x_2121_, 0);
v_isSharedCheck_2158_ = !lean_is_exclusive(v___x_2121_);
if (v_isSharedCheck_2158_ == 0)
{
v___x_2124_ = v___x_2121_;
v_isShared_2125_ = v_isSharedCheck_2158_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_a_2122_);
lean_dec(v___x_2121_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2158_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
lean_object* v___x_2126_; 
v___x_2126_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(v_a_2122_, v_e_2098_);
lean_dec(v_a_2122_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_object* v___x_2127_; 
lean_del_object(v___x_2124_);
lean_inc_ref(v_fn_2097_);
lean_inc(v___y_2103_);
lean_inc_ref(v___y_2102_);
lean_inc(v___y_2101_);
lean_inc_ref(v___y_2100_);
lean_inc_ref(v_e_2098_);
v___x_2127_ = lean_apply_6(v_fn_2097_, v_e_2098_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_, lean_box(0));
if (lean_obj_tag(v___x_2127_) == 0)
{
lean_object* v_a_2128_; uint8_t v___x_2129_; 
v_a_2128_ = lean_ctor_get(v___x_2127_, 0);
lean_inc(v_a_2128_);
lean_dec_ref_known(v___x_2127_, 1);
v___x_2129_ = lean_unbox(v_a_2128_);
lean_dec(v_a_2128_);
if (v___x_2129_ == 0)
{
lean_object* v___x_2130_; 
lean_dec_ref(v_fn_2097_);
v___x_2130_ = lean_box(0);
v_a_2106_ = v___x_2130_;
goto v___jp_2105_;
}
else
{
switch(lean_obj_tag(v_e_2098_))
{
case 7:
{
lean_object* v___x_2131_; lean_object* v___x_2132_; 
v___x_2131_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2___boxed), 8, 1);
lean_closure_set(v___x_2131_, 0, v_fn_2097_);
lean_inc_ref(v_e_2098_);
v___x_2132_ = l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3(v___x_2131_, v_e_2098_, v_a_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
v___y_2118_ = v___x_2132_;
goto v___jp_2117_;
}
case 6:
{
lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2133_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2___boxed), 8, 1);
lean_closure_set(v___x_2133_, 0, v_fn_2097_);
lean_inc_ref(v_e_2098_);
v___x_2134_ = l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__4(v___x_2133_, v_e_2098_, v_a_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
v___y_2118_ = v___x_2134_;
goto v___jp_2117_;
}
case 8:
{
lean_object* v___x_2135_; lean_object* v___x_2136_; 
v___x_2135_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2___boxed), 8, 1);
lean_closure_set(v___x_2135_, 0, v_fn_2097_);
lean_inc_ref(v_e_2098_);
v___x_2136_ = l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5(v___x_2135_, v_e_2098_, v_a_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
v___y_2118_ = v___x_2136_;
goto v___jp_2117_;
}
case 5:
{
lean_object* v_fn_2137_; lean_object* v_arg_2138_; lean_object* v___x_2139_; 
v_fn_2137_ = lean_ctor_get(v_e_2098_, 0);
v_arg_2138_ = lean_ctor_get(v_e_2098_, 1);
lean_inc_ref(v_fn_2137_);
lean_inc_ref(v_fn_2097_);
v___x_2139_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2(v_fn_2097_, v_fn_2137_, v_a_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
if (lean_obj_tag(v___x_2139_) == 0)
{
lean_object* v___x_2140_; 
lean_dec_ref_known(v___x_2139_, 1);
lean_inc_ref(v_arg_2138_);
v___x_2140_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2(v_fn_2097_, v_arg_2138_, v_a_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
v___y_2118_ = v___x_2140_;
goto v___jp_2117_;
}
else
{
lean_dec_ref(v_fn_2097_);
v___y_2118_ = v___x_2139_;
goto v___jp_2117_;
}
}
case 10:
{
lean_object* v_expr_2141_; lean_object* v___x_2142_; 
v_expr_2141_ = lean_ctor_get(v_e_2098_, 1);
lean_inc_ref(v_expr_2141_);
v___x_2142_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2(v_fn_2097_, v_expr_2141_, v_a_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
v___y_2118_ = v___x_2142_;
goto v___jp_2117_;
}
case 11:
{
lean_object* v_struct_2143_; lean_object* v___x_2144_; 
v_struct_2143_ = lean_ctor_get(v_e_2098_, 2);
lean_inc_ref(v_struct_2143_);
v___x_2144_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2(v_fn_2097_, v_struct_2143_, v_a_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
v___y_2118_ = v___x_2144_;
goto v___jp_2117_;
}
default: 
{
lean_object* v___x_2145_; 
lean_dec_ref(v_fn_2097_);
v___x_2145_ = lean_box(0);
v_a_2106_ = v___x_2145_;
goto v___jp_2105_;
}
}
}
}
else
{
lean_object* v_a_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2153_; 
lean_dec_ref(v_e_2098_);
lean_dec_ref(v_fn_2097_);
v_a_2146_ = lean_ctor_get(v___x_2127_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2127_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2148_ = v___x_2127_;
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_a_2146_);
lean_dec(v___x_2127_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v___x_2151_; 
if (v_isShared_2149_ == 0)
{
v___x_2151_ = v___x_2148_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_a_2146_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
return v___x_2151_;
}
}
}
}
else
{
lean_object* v_val_2154_; lean_object* v___x_2156_; 
lean_dec_ref(v_e_2098_);
lean_dec_ref(v_fn_2097_);
v_val_2154_ = lean_ctor_get(v___x_2126_, 0);
lean_inc(v_val_2154_);
lean_dec_ref_known(v___x_2126_, 1);
if (v_isShared_2125_ == 0)
{
lean_ctor_set(v___x_2124_, 0, v_val_2154_);
v___x_2156_ = v___x_2124_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v_val_2154_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
return v___x_2156_;
}
}
}
}
else
{
lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2166_; 
lean_dec_ref(v_e_2098_);
lean_dec_ref(v_fn_2097_);
v_a_2159_ = lean_ctor_get(v___x_2121_, 0);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2121_);
if (v_isSharedCheck_2166_ == 0)
{
v___x_2161_ = v___x_2121_;
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_dec(v___x_2121_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2164_; 
if (v_isShared_2162_ == 0)
{
v___x_2164_ = v___x_2161_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_a_2159_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
}
v___jp_2105_:
{
lean_object* v___f_2107_; lean_object* v___x_2108_; 
lean_inc(v_a_2099_);
v___f_2107_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2107_, 0, v_a_2099_);
lean_closure_set(v___f_2107_, 1, v_e_2098_);
lean_closure_set(v___f_2107_, 2, v_a_2106_);
v___x_2108_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2___lam__0(lean_box(0), v___f_2107_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2115_; 
v_isSharedCheck_2115_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2115_ == 0)
{
lean_object* v_unused_2116_; 
v_unused_2116_ = lean_ctor_get(v___x_2108_, 0);
lean_dec(v_unused_2116_);
v___x_2110_ = v___x_2108_;
v_isShared_2111_ = v_isSharedCheck_2115_;
goto v_resetjp_2109_;
}
else
{
lean_dec(v___x_2108_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2115_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
lean_object* v___x_2113_; 
if (v_isShared_2111_ == 0)
{
lean_ctor_set(v___x_2110_, 0, v_a_2106_);
v___x_2113_ = v___x_2110_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v_a_2106_);
v___x_2113_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
return v___x_2113_;
}
}
}
else
{
return v___x_2108_;
}
}
v___jp_2117_:
{
if (lean_obj_tag(v___y_2118_) == 0)
{
lean_object* v_a_2119_; 
v_a_2119_ = lean_ctor_get(v___y_2118_, 0);
lean_inc(v_a_2119_);
lean_dec_ref_known(v___y_2118_, 1);
v_a_2106_ = v_a_2119_;
goto v___jp_2105_;
}
else
{
lean_dec_ref(v_e_2098_);
return v___y_2118_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2___lam__0(lean_object* v_00_u03b1_2167_, lean_object* v_x_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_){
_start:
{
lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2174_ = lean_apply_1(v_x_2168_, lean_box(0));
v___x_2175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2175_, 0, v___x_2174_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2___lam__0___boxed(lean_object* v_00_u03b1_2176_, lean_object* v_x_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_){
_start:
{
lean_object* v_res_2183_; 
v_res_2183_ = l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2___lam__0(v_00_u03b1_2176_, v_x_2177_, v___y_2178_, v___y_2179_, v___y_2180_, v___y_2181_);
lean_dec(v___y_2181_);
lean_dec_ref(v___y_2180_);
lean_dec(v___y_2179_);
lean_dec_ref(v___y_2178_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2(lean_object* v_input_2184_, lean_object* v_fn_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_){
_start:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v_a_2193_; lean_object* v___x_2194_; 
v___x_2191_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2, &l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2_once, _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2);
v___x_2192_ = l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2___lam__0(lean_box(0), v___x_2191_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_);
v_a_2193_ = lean_ctor_get(v___x_2192_, 0);
lean_inc(v_a_2193_);
lean_dec_ref(v___x_2192_);
v___x_2194_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2(v_fn_2185_, v_input_2184_, v_a_2193_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_);
if (lean_obj_tag(v___x_2194_) == 0)
{
lean_object* v_a_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2204_; 
v_a_2195_ = lean_ctor_get(v___x_2194_, 0);
lean_inc(v_a_2195_);
lean_dec_ref_known(v___x_2194_, 1);
v___x_2196_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2196_, 0, lean_box(0));
lean_closure_set(v___x_2196_, 1, lean_box(0));
lean_closure_set(v___x_2196_, 2, v_a_2193_);
v___x_2197_ = l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2___lam__0(lean_box(0), v___x_2196_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2197_);
if (v_isSharedCheck_2204_ == 0)
{
lean_object* v_unused_2205_; 
v_unused_2205_ = lean_ctor_get(v___x_2197_, 0);
lean_dec(v_unused_2205_);
v___x_2199_ = v___x_2197_;
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
else
{
lean_dec(v___x_2197_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2202_; 
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 0, v_a_2195_);
v___x_2202_ = v___x_2199_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v_a_2195_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
}
else
{
lean_dec(v_a_2193_);
return v___x_2194_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2___boxed(lean_object* v_input_2206_, lean_object* v_fn_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_){
_start:
{
lean_object* v_res_2213_; 
v_res_2213_ = l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2(v_input_2206_, v_fn_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_);
lean_dec(v___y_2211_);
lean_dec_ref(v___y_2210_);
lean_dec(v___y_2209_);
lean_dec_ref(v___y_2208_);
return v_res_2213_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2215_; lean_object* v_dummy_2216_; 
v___x_2215_ = lean_box(0);
v_dummy_2216_ = l_Lean_Expr_sort___override(v___x_2215_);
return v_dummy_2216_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__0(lean_object* v_as_2217_, size_t v_i_2218_, size_t v_stop_2219_, lean_object* v_b_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_){
_start:
{
uint8_t v___x_2226_; 
v___x_2226_ = lean_usize_dec_eq(v_i_2218_, v_stop_2219_);
if (v___x_2226_ == 0)
{
lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2227_ = lean_array_uget_borrowed(v_as_2217_, v_i_2218_);
lean_inc(v___x_2227_);
v___x_2228_ = l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn(v___x_2227_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_);
if (lean_obj_tag(v___x_2228_) == 0)
{
lean_object* v_a_2229_; size_t v___x_2230_; size_t v___x_2231_; 
v_a_2229_ = lean_ctor_get(v___x_2228_, 0);
lean_inc(v_a_2229_);
lean_dec_ref_known(v___x_2228_, 1);
v___x_2230_ = ((size_t)1ULL);
v___x_2231_ = lean_usize_add(v_i_2218_, v___x_2230_);
v_i_2218_ = v___x_2231_;
v_b_2220_ = v_a_2229_;
goto _start;
}
else
{
return v___x_2228_;
}
}
else
{
lean_object* v___x_2233_; 
v___x_2233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2233_, 0, v_b_2220_);
return v___x_2233_;
}
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___closed__2(void){
_start:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2235_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___closed__1));
v___x_2236_ = l_Lean_stringToMessageData(v___x_2235_);
return v___x_2236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1(uint8_t v___x_2237_, lean_object* v___x_2238_, lean_object* v_e_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_){
_start:
{
lean_object* v___y_2250_; lean_object* v___x_2259_; uint8_t v___x_2260_; 
v___x_2259_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__0___closed__1));
v___x_2260_ = l_Lean_Expr_isAppOf(v_e_2239_, v___x_2259_);
if (v___x_2260_ == 0)
{
lean_object* v___x_2261_; lean_object* v___x_2262_; 
lean_dec_ref(v_e_2239_);
v___x_2261_ = lean_box(v___x_2237_);
v___x_2262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2261_);
return v___x_2262_;
}
else
{
lean_object* v_dummy_2263_; lean_object* v_nargs_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v_args_2268_; lean_object* v___y_2270_; lean_object* v___y_2271_; lean_object* v___y_2272_; lean_object* v___y_2273_; lean_object* v___x_2296_; lean_object* v___x_2297_; uint8_t v___x_2298_; 
v_dummy_2263_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___closed__0, &l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___closed__0);
v_nargs_2264_ = l_Lean_Expr_getAppNumArgs(v_e_2239_);
lean_inc(v_nargs_2264_);
v___x_2265_ = lean_mk_array(v_nargs_2264_, v_dummy_2263_);
v___x_2266_ = lean_unsigned_to_nat(1u);
v___x_2267_ = lean_nat_sub(v_nargs_2264_, v___x_2266_);
lean_dec(v_nargs_2264_);
v_args_2268_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2239_, v___x_2265_, v___x_2267_);
v___x_2296_ = lean_unsigned_to_nat(2u);
v___x_2297_ = lean_array_get_size(v_args_2268_);
v___x_2298_ = lean_nat_dec_le(v___x_2296_, v___x_2297_);
if (v___x_2298_ == 0)
{
lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2299_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___closed__2, &l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___closed__2_once, _init_l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___closed__2);
v___x_2300_ = l_Lean_throwError___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__1___redArg(v___x_2299_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
if (lean_obj_tag(v___x_2300_) == 0)
{
lean_dec_ref_known(v___x_2300_, 1);
v___y_2270_ = v___y_2240_;
v___y_2271_ = v___y_2241_;
v___y_2272_ = v___y_2242_;
v___y_2273_ = v___y_2243_;
goto v___jp_2269_;
}
else
{
lean_object* v_a_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2308_; 
lean_dec_ref(v_args_2268_);
v_a_2301_ = lean_ctor_get(v___x_2300_, 0);
v_isSharedCheck_2308_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2308_ == 0)
{
v___x_2303_ = v___x_2300_;
v_isShared_2304_ = v_isSharedCheck_2308_;
goto v_resetjp_2302_;
}
else
{
lean_inc(v_a_2301_);
lean_dec(v___x_2300_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2308_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
lean_object* v___x_2306_; 
if (v_isShared_2304_ == 0)
{
v___x_2306_ = v___x_2303_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v_a_2301_);
v___x_2306_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
return v___x_2306_;
}
}
}
}
else
{
v___y_2270_ = v___y_2240_;
v___y_2271_ = v___y_2241_;
v___y_2272_ = v___y_2242_;
v___y_2273_ = v___y_2243_;
goto v___jp_2269_;
}
v___jp_2269_:
{
lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2274_ = lean_unsigned_to_nat(0u);
v___x_2275_ = lean_array_get_borrowed(v___x_2238_, v_args_2268_, v___x_2274_);
v___x_2276_ = lean_array_get_borrowed(v___x_2238_, v_args_2268_, v___x_2266_);
lean_inc(v___x_2276_);
lean_inc(v___x_2275_);
v___x_2277_ = l_Lean_Meta_checkSmartCastTypes(v___x_2275_, v___x_2276_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_);
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_object* v___x_2278_; uint8_t v___x_2279_; 
lean_dec_ref_known(v___x_2277_, 1);
v___x_2278_ = lean_array_get_size(v_args_2268_);
v___x_2279_ = lean_nat_dec_lt(v___x_2274_, v___x_2278_);
if (v___x_2279_ == 0)
{
lean_dec_ref(v_args_2268_);
goto v___jp_2245_;
}
else
{
lean_object* v___x_2280_; uint8_t v___x_2281_; 
v___x_2280_ = lean_box(0);
v___x_2281_ = lean_nat_dec_le(v___x_2278_, v___x_2278_);
if (v___x_2281_ == 0)
{
if (v___x_2279_ == 0)
{
lean_dec_ref(v_args_2268_);
goto v___jp_2245_;
}
else
{
size_t v___x_2282_; size_t v___x_2283_; lean_object* v___x_2284_; 
v___x_2282_ = ((size_t)0ULL);
v___x_2283_ = lean_usize_of_nat(v___x_2278_);
v___x_2284_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__0(v_args_2268_, v___x_2282_, v___x_2283_, v___x_2280_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_);
lean_dec_ref(v_args_2268_);
v___y_2250_ = v___x_2284_;
goto v___jp_2249_;
}
}
else
{
size_t v___x_2285_; size_t v___x_2286_; lean_object* v___x_2287_; 
v___x_2285_ = ((size_t)0ULL);
v___x_2286_ = lean_usize_of_nat(v___x_2278_);
v___x_2287_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__0(v_args_2268_, v___x_2285_, v___x_2286_, v___x_2280_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_);
lean_dec_ref(v_args_2268_);
v___y_2250_ = v___x_2287_;
goto v___jp_2249_;
}
}
}
else
{
lean_object* v_a_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2295_; 
lean_dec_ref(v_args_2268_);
v_a_2288_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2295_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2295_ == 0)
{
v___x_2290_ = v___x_2277_;
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_a_2288_);
lean_dec(v___x_2277_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v___x_2293_; 
if (v_isShared_2291_ == 0)
{
v___x_2293_ = v___x_2290_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v_a_2288_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
}
}
}
v___jp_2245_:
{
uint8_t v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2246_ = 0;
v___x_2247_ = lean_box(v___x_2246_);
v___x_2248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2247_);
return v___x_2248_;
}
v___jp_2249_:
{
if (lean_obj_tag(v___y_2250_) == 0)
{
lean_dec_ref_known(v___y_2250_, 1);
goto v___jp_2245_;
}
else
{
lean_object* v_a_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2258_; 
v_a_2251_ = lean_ctor_get(v___y_2250_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___y_2250_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2253_ = v___y_2250_;
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_a_2251_);
lean_dec(v___y_2250_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v___x_2256_; 
if (v_isShared_2254_ == 0)
{
v___x_2256_ = v___x_2253_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v_a_2251_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
return v___x_2256_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___boxed(lean_object* v___x_2309_, lean_object* v___x_2310_, lean_object* v_e_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_){
_start:
{
uint8_t v___x_6485__boxed_2317_; lean_object* v_res_2318_; 
v___x_6485__boxed_2317_ = lean_unbox(v___x_2309_);
v_res_2318_ = l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1(v___x_6485__boxed_2317_, v___x_2310_, v_e_2311_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_);
lean_dec(v___y_2315_);
lean_dec_ref(v___y_2314_);
lean_dec(v___y_2313_);
lean_dec_ref(v___y_2312_);
lean_dec_ref(v___x_2310_);
return v_res_2318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn(lean_object* v_e_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_, lean_object* v_a_2323_){
_start:
{
lean_object* v___f_2325_; lean_object* v___x_2326_; 
v___f_2325_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___closed__0));
v___x_2326_ = lean_find_expr(v___f_2325_, v_e_2319_);
if (lean_obj_tag(v___x_2326_) == 0)
{
lean_object* v___x_2327_; lean_object* v___x_2328_; 
lean_dec_ref(v_e_2319_);
v___x_2327_ = lean_box(0);
v___x_2328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2328_, 0, v___x_2327_);
return v___x_2328_;
}
else
{
lean_object* v___x_2329_; uint8_t v___x_2330_; lean_object* v___x_2331_; lean_object* v___f_2332_; lean_object* v___x_2333_; 
lean_dec_ref_known(v___x_2326_, 1);
v___x_2329_ = l_Lean_instInhabitedExpr;
v___x_2330_ = 1;
v___x_2331_ = lean_box(v___x_2330_);
v___f_2332_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___lam__1___boxed), 8, 2);
lean_closure_set(v___f_2332_, 0, v___x_2331_);
lean_closure_set(v___f_2332_, 1, v___x_2329_);
v___x_2333_ = l_Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2(v_e_2319_, v___f_2332_, v_a_2320_, v_a_2321_, v_a_2322_, v_a_2323_);
return v___x_2333_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn___boxed(lean_object* v_e_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_){
_start:
{
lean_object* v_res_2340_; 
v_res_2340_ = l___private_Lean_AddDecl_0__Lean_checkSmartCastsIn(v_e_2334_, v_a_2335_, v_a_2336_, v_a_2337_, v_a_2338_);
lean_dec(v_a_2338_);
lean_dec_ref(v_a_2337_);
lean_dec(v_a_2336_);
lean_dec_ref(v_a_2335_);
return v_res_2340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__0___boxed(lean_object* v_as_2341_, lean_object* v_i_2342_, lean_object* v_stop_2343_, lean_object* v_b_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_){
_start:
{
size_t v_i_boxed_2350_; size_t v_stop_boxed_2351_; lean_object* v_res_2352_; 
v_i_boxed_2350_ = lean_unbox_usize(v_i_2342_);
lean_dec(v_i_2342_);
v_stop_boxed_2351_ = lean_unbox_usize(v_stop_2343_);
lean_dec(v_stop_2343_);
v_res_2352_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__0(v_as_2341_, v_i_boxed_2350_, v_stop_boxed_2351_, v_b_2344_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_);
lean_dec(v___y_2348_);
lean_dec_ref(v___y_2347_);
lean_dec(v___y_2346_);
lean_dec_ref(v___y_2345_);
lean_dec_ref(v_as_2341_);
return v_res_2352_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__1(lean_object* v_00_u03b1_2353_, lean_object* v_msg_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_){
_start:
{
lean_object* v___x_2360_; 
v___x_2360_ = l_Lean_throwError___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__1___redArg(v_msg_2354_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_);
return v___x_2360_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__1___boxed(lean_object* v_00_u03b1_2361_, lean_object* v_msg_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_){
_start:
{
lean_object* v_res_2368_; 
v_res_2368_ = l_Lean_throwError___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__1(v_00_u03b1_2361_, v_msg_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_);
lean_dec(v___y_2366_);
lean_dec_ref(v___y_2365_);
lean_dec(v___y_2364_);
lean_dec_ref(v___y_2363_);
return v_res_2368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5(lean_object* v_00_u03b1_2369_, lean_object* v_name_2370_, uint8_t v_bi_2371_, lean_object* v_type_2372_, lean_object* v_k_2373_, uint8_t v_kind_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_){
_start:
{
lean_object* v___x_2381_; 
v___x_2381_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___redArg(v_name_2370_, v_bi_2371_, v_type_2372_, v_k_2373_, v_kind_2374_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_);
return v___x_2381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5___boxed(lean_object* v_00_u03b1_2382_, lean_object* v_name_2383_, lean_object* v_bi_2384_, lean_object* v_type_2385_, lean_object* v_k_2386_, lean_object* v_kind_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_){
_start:
{
uint8_t v_bi_boxed_2394_; uint8_t v_kind_boxed_2395_; lean_object* v_res_2396_; 
v_bi_boxed_2394_ = lean_unbox(v_bi_2384_);
v_kind_boxed_2395_ = lean_unbox(v_kind_2387_);
v_res_2396_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__3_spec__4_spec__5(v_00_u03b1_2382_, v_name_2383_, v_bi_boxed_2394_, v_type_2385_, v_k_2386_, v_kind_boxed_2395_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
lean_dec(v___y_2388_);
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8_spec__10(lean_object* v_00_u03b1_2397_, lean_object* v_name_2398_, lean_object* v_type_2399_, lean_object* v_val_2400_, lean_object* v_k_2401_, uint8_t v_nondep_2402_, uint8_t v_kind_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_){
_start:
{
lean_object* v___x_2410_; 
v___x_2410_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8_spec__10___redArg(v_name_2398_, v_type_2399_, v_val_2400_, v_k_2401_, v_nondep_2402_, v_kind_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
return v___x_2410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8_spec__10___boxed(lean_object* v_00_u03b1_2411_, lean_object* v_name_2412_, lean_object* v_type_2413_, lean_object* v_val_2414_, lean_object* v_k_2415_, lean_object* v_nondep_2416_, lean_object* v_kind_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_){
_start:
{
uint8_t v_nondep_boxed_2424_; uint8_t v_kind_boxed_2425_; lean_object* v_res_2426_; 
v_nondep_boxed_2424_ = lean_unbox(v_nondep_2416_);
v_kind_boxed_2425_ = lean_unbox(v_kind_2417_);
v_res_2426_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__2_spec__2_spec__5_spec__8_spec__10(v_00_u03b1_2411_, v_name_2412_, v_type_2413_, v_val_2414_, v_k_2415_, v_nondep_boxed_2424_, v_kind_boxed_2425_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_);
lean_dec(v___y_2422_);
lean_dec_ref(v___y_2421_);
lean_dec(v___y_2420_);
lean_dec_ref(v___y_2419_);
lean_dec(v___y_2418_);
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg___lam__0(lean_object* v___y_2427_, uint8_t v_isExporting_2428_, lean_object* v___x_2429_, lean_object* v_a_x3f_2430_){
_start:
{
lean_object* v___x_2432_; lean_object* v_env_2433_; lean_object* v_nextMacroScope_2434_; lean_object* v_ngen_2435_; lean_object* v_auxDeclNGen_2436_; lean_object* v_traceState_2437_; lean_object* v_recordedDeps_2438_; lean_object* v_messages_2439_; lean_object* v_infoState_2440_; lean_object* v_snapshotTasks_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2452_; 
v___x_2432_ = lean_st_ref_take(v___y_2427_);
v_env_2433_ = lean_ctor_get(v___x_2432_, 0);
v_nextMacroScope_2434_ = lean_ctor_get(v___x_2432_, 1);
v_ngen_2435_ = lean_ctor_get(v___x_2432_, 2);
v_auxDeclNGen_2436_ = lean_ctor_get(v___x_2432_, 3);
v_traceState_2437_ = lean_ctor_get(v___x_2432_, 4);
v_recordedDeps_2438_ = lean_ctor_get(v___x_2432_, 6);
v_messages_2439_ = lean_ctor_get(v___x_2432_, 7);
v_infoState_2440_ = lean_ctor_get(v___x_2432_, 8);
v_snapshotTasks_2441_ = lean_ctor_get(v___x_2432_, 9);
v_isSharedCheck_2452_ = !lean_is_exclusive(v___x_2432_);
if (v_isSharedCheck_2452_ == 0)
{
lean_object* v_unused_2453_; 
v_unused_2453_ = lean_ctor_get(v___x_2432_, 5);
lean_dec(v_unused_2453_);
v___x_2443_ = v___x_2432_;
v_isShared_2444_ = v_isSharedCheck_2452_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_snapshotTasks_2441_);
lean_inc(v_infoState_2440_);
lean_inc(v_messages_2439_);
lean_inc(v_recordedDeps_2438_);
lean_inc(v_traceState_2437_);
lean_inc(v_auxDeclNGen_2436_);
lean_inc(v_ngen_2435_);
lean_inc(v_nextMacroScope_2434_);
lean_inc(v_env_2433_);
lean_dec(v___x_2432_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2452_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2448_; 
v___x_2445_ = lean_box(0);
v___x_2446_ = l_Lean_Environment_setExporting(v_env_2433_, v_isExporting_2428_);
if (v_isShared_2444_ == 0)
{
lean_ctor_set(v___x_2443_, 5, v___x_2429_);
lean_ctor_set(v___x_2443_, 0, v___x_2446_);
v___x_2448_ = v___x_2443_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2451_; 
v_reuseFailAlloc_2451_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2451_, 0, v___x_2446_);
lean_ctor_set(v_reuseFailAlloc_2451_, 1, v_nextMacroScope_2434_);
lean_ctor_set(v_reuseFailAlloc_2451_, 2, v_ngen_2435_);
lean_ctor_set(v_reuseFailAlloc_2451_, 3, v_auxDeclNGen_2436_);
lean_ctor_set(v_reuseFailAlloc_2451_, 4, v_traceState_2437_);
lean_ctor_set(v_reuseFailAlloc_2451_, 5, v___x_2429_);
lean_ctor_set(v_reuseFailAlloc_2451_, 6, v_recordedDeps_2438_);
lean_ctor_set(v_reuseFailAlloc_2451_, 7, v_messages_2439_);
lean_ctor_set(v_reuseFailAlloc_2451_, 8, v_infoState_2440_);
lean_ctor_set(v_reuseFailAlloc_2451_, 9, v_snapshotTasks_2441_);
v___x_2448_ = v_reuseFailAlloc_2451_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; 
v___x_2449_ = lean_st_ref_put(v___y_2427_, v___x_2448_);
v___x_2450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2450_, 0, v___x_2445_);
return v___x_2450_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg___lam__0___boxed(lean_object* v___y_2454_, lean_object* v_isExporting_2455_, lean_object* v___x_2456_, lean_object* v_a_x3f_2457_, lean_object* v___y_2458_){
_start:
{
uint8_t v_isExporting_boxed_2459_; lean_object* v_res_2460_; 
v_isExporting_boxed_2459_ = lean_unbox(v_isExporting_2455_);
v_res_2460_ = l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg___lam__0(v___y_2454_, v_isExporting_boxed_2459_, v___x_2456_, v_a_x3f_2457_);
lean_dec(v_a_x3f_2457_);
lean_dec(v___y_2454_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg(lean_object* v_x_2461_, uint8_t v_isExporting_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_){
_start:
{
lean_object* v___x_2466_; lean_object* v_env_2467_; lean_object* v___x_2468_; uint8_t v_isModule_2469_; 
v___x_2466_ = lean_st_ref_get(v___y_2464_);
v_env_2467_ = lean_ctor_get(v___x_2466_, 0);
lean_inc_ref(v_env_2467_);
lean_dec(v___x_2466_);
v___x_2468_ = l_Lean_Environment_header(v_env_2467_);
v_isModule_2469_ = lean_ctor_get_uint8(v___x_2468_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2468_);
if (v_isModule_2469_ == 0)
{
lean_object* v___x_2470_; 
lean_dec_ref(v_env_2467_);
lean_inc(v___y_2464_);
lean_inc_ref(v___y_2463_);
v___x_2470_ = lean_apply_3(v_x_2461_, v___y_2463_, v___y_2464_, lean_box(0));
return v___x_2470_;
}
else
{
uint8_t v_isExporting_2471_; 
v_isExporting_2471_ = lean_ctor_get_uint8(v_env_2467_, sizeof(void*)*13);
lean_dec_ref(v_env_2467_);
if (v_isExporting_2462_ == 0)
{
if (v_isExporting_2471_ == 0)
{
lean_object* v___x_2523_; 
lean_inc(v___y_2464_);
lean_inc_ref(v___y_2463_);
v___x_2523_ = lean_apply_3(v_x_2461_, v___y_2463_, v___y_2464_, lean_box(0));
return v___x_2523_;
}
else
{
goto v___jp_2472_;
}
}
else
{
if (v_isExporting_2471_ == 0)
{
goto v___jp_2472_;
}
else
{
lean_object* v___x_2524_; 
lean_inc(v___y_2464_);
lean_inc_ref(v___y_2463_);
v___x_2524_ = lean_apply_3(v_x_2461_, v___y_2463_, v___y_2464_, lean_box(0));
return v___x_2524_;
}
}
v___jp_2472_:
{
lean_object* v___x_2473_; lean_object* v_env_2474_; lean_object* v_nextMacroScope_2475_; lean_object* v_ngen_2476_; lean_object* v_auxDeclNGen_2477_; lean_object* v_traceState_2478_; lean_object* v_recordedDeps_2479_; lean_object* v_messages_2480_; lean_object* v_infoState_2481_; lean_object* v_snapshotTasks_2482_; lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2521_; 
v___x_2473_ = lean_st_ref_take(v___y_2464_);
v_env_2474_ = lean_ctor_get(v___x_2473_, 0);
v_nextMacroScope_2475_ = lean_ctor_get(v___x_2473_, 1);
v_ngen_2476_ = lean_ctor_get(v___x_2473_, 2);
v_auxDeclNGen_2477_ = lean_ctor_get(v___x_2473_, 3);
v_traceState_2478_ = lean_ctor_get(v___x_2473_, 4);
v_recordedDeps_2479_ = lean_ctor_get(v___x_2473_, 6);
v_messages_2480_ = lean_ctor_get(v___x_2473_, 7);
v_infoState_2481_ = lean_ctor_get(v___x_2473_, 8);
v_snapshotTasks_2482_ = lean_ctor_get(v___x_2473_, 9);
v_isSharedCheck_2521_ = !lean_is_exclusive(v___x_2473_);
if (v_isSharedCheck_2521_ == 0)
{
lean_object* v_unused_2522_; 
v_unused_2522_ = lean_ctor_get(v___x_2473_, 5);
lean_dec(v_unused_2522_);
v___x_2484_ = v___x_2473_;
v_isShared_2485_ = v_isSharedCheck_2521_;
goto v_resetjp_2483_;
}
else
{
lean_inc(v_snapshotTasks_2482_);
lean_inc(v_infoState_2481_);
lean_inc(v_messages_2480_);
lean_inc(v_recordedDeps_2479_);
lean_inc(v_traceState_2478_);
lean_inc(v_auxDeclNGen_2477_);
lean_inc(v_ngen_2476_);
lean_inc(v_nextMacroScope_2475_);
lean_inc(v_env_2474_);
lean_dec(v___x_2473_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2521_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2489_; 
v___x_2486_ = l_Lean_Environment_setExporting(v_env_2474_, v_isExporting_2462_);
v___x_2487_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_2485_ == 0)
{
lean_ctor_set(v___x_2484_, 5, v___x_2487_);
lean_ctor_set(v___x_2484_, 0, v___x_2486_);
v___x_2489_ = v___x_2484_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v___x_2486_);
lean_ctor_set(v_reuseFailAlloc_2520_, 1, v_nextMacroScope_2475_);
lean_ctor_set(v_reuseFailAlloc_2520_, 2, v_ngen_2476_);
lean_ctor_set(v_reuseFailAlloc_2520_, 3, v_auxDeclNGen_2477_);
lean_ctor_set(v_reuseFailAlloc_2520_, 4, v_traceState_2478_);
lean_ctor_set(v_reuseFailAlloc_2520_, 5, v___x_2487_);
lean_ctor_set(v_reuseFailAlloc_2520_, 6, v_recordedDeps_2479_);
lean_ctor_set(v_reuseFailAlloc_2520_, 7, v_messages_2480_);
lean_ctor_set(v_reuseFailAlloc_2520_, 8, v_infoState_2481_);
lean_ctor_set(v_reuseFailAlloc_2520_, 9, v_snapshotTasks_2482_);
v___x_2489_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
lean_object* v___x_2490_; lean_object* v_r_2491_; 
v___x_2490_ = lean_st_ref_put(v___y_2464_, v___x_2489_);
lean_inc(v___y_2464_);
lean_inc_ref(v___y_2463_);
v_r_2491_ = lean_apply_3(v_x_2461_, v___y_2463_, v___y_2464_, lean_box(0));
if (lean_obj_tag(v_r_2491_) == 0)
{
lean_object* v_a_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2508_; 
v_a_2492_ = lean_ctor_get(v_r_2491_, 0);
v_isSharedCheck_2508_ = !lean_is_exclusive(v_r_2491_);
if (v_isSharedCheck_2508_ == 0)
{
v___x_2494_ = v_r_2491_;
v_isShared_2495_ = v_isSharedCheck_2508_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_a_2492_);
lean_dec(v_r_2491_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2508_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v___x_2497_; 
lean_inc(v_a_2492_);
if (v_isShared_2495_ == 0)
{
lean_ctor_set_tag(v___x_2494_, 1);
v___x_2497_ = v___x_2494_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v_a_2492_);
v___x_2497_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
lean_object* v___x_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2505_; 
v___x_2498_ = l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg___lam__0(v___y_2464_, v_isExporting_2471_, v___x_2487_, v___x_2497_);
lean_dec_ref(v___x_2497_);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2498_);
if (v_isSharedCheck_2505_ == 0)
{
lean_object* v_unused_2506_; 
v_unused_2506_ = lean_ctor_get(v___x_2498_, 0);
lean_dec(v_unused_2506_);
v___x_2500_ = v___x_2498_;
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
else
{
lean_dec(v___x_2498_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2503_; 
if (v_isShared_2501_ == 0)
{
lean_ctor_set(v___x_2500_, 0, v_a_2492_);
v___x_2503_ = v___x_2500_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_a_2492_);
v___x_2503_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
return v___x_2503_;
}
}
}
}
}
else
{
lean_object* v_a_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2513_; uint8_t v_isShared_2514_; uint8_t v_isSharedCheck_2518_; 
v_a_2509_ = lean_ctor_get(v_r_2491_, 0);
lean_inc(v_a_2509_);
lean_dec_ref_known(v_r_2491_, 1);
v___x_2510_ = lean_box(0);
v___x_2511_ = l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg___lam__0(v___y_2464_, v_isExporting_2471_, v___x_2487_, v___x_2510_);
v_isSharedCheck_2518_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2518_ == 0)
{
lean_object* v_unused_2519_; 
v_unused_2519_ = lean_ctor_get(v___x_2511_, 0);
lean_dec(v_unused_2519_);
v___x_2513_ = v___x_2511_;
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
else
{
lean_dec(v___x_2511_);
v___x_2513_ = lean_box(0);
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
v_resetjp_2512_:
{
lean_object* v___x_2516_; 
if (v_isShared_2514_ == 0)
{
lean_ctor_set_tag(v___x_2513_, 1);
lean_ctor_set(v___x_2513_, 0, v_a_2509_);
v___x_2516_ = v___x_2513_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v_a_2509_);
v___x_2516_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
return v___x_2516_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg___boxed(lean_object* v_x_2525_, lean_object* v_isExporting_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_){
_start:
{
uint8_t v_isExporting_boxed_2530_; lean_object* v_res_2531_; 
v_isExporting_boxed_2530_ = lean_unbox(v_isExporting_2526_);
v_res_2531_ = l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg(v_x_2525_, v_isExporting_boxed_2530_, v___y_2527_, v___y_2528_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1(lean_object* v_00_u03b1_2532_, lean_object* v_x_2533_, uint8_t v_isExporting_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_){
_start:
{
lean_object* v___x_2538_; 
v___x_2538_ = l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg(v_x_2533_, v_isExporting_2534_, v___y_2535_, v___y_2536_);
return v___x_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___boxed(lean_object* v_00_u03b1_2539_, lean_object* v_x_2540_, lean_object* v_isExporting_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_){
_start:
{
uint8_t v_isExporting_boxed_2545_; lean_object* v_res_2546_; 
v_isExporting_boxed_2545_ = lean_unbox(v_isExporting_2541_);
v_res_2546_ = l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1(v_00_u03b1_2539_, v_x_2540_, v_isExporting_boxed_2545_, v___y_2542_, v___y_2543_);
lean_dec(v___y_2543_);
lean_dec_ref(v___y_2542_);
return v_res_2546_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkSmartCasts___lam__0(lean_object* v___x_2547_, lean_object* v___x_2548_, lean_object* v___x_2549_, lean_object* v_fst_2550_, lean_object* v___x_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_){
_start:
{
lean_object* v___x_2555_; lean_object* v_a_2557_; lean_object* v___y_2561_; lean_object* v___x_2563_; uint8_t v___x_2564_; 
v___x_2555_ = lean_st_mk_ref(v___x_2547_);
v___x_2563_ = lean_box(0);
v___x_2564_ = lean_nat_dec_lt(v___x_2548_, v___x_2549_);
if (v___x_2564_ == 0)
{
v_a_2557_ = v___x_2563_;
goto v___jp_2556_;
}
else
{
uint8_t v___x_2565_; 
v___x_2565_ = lean_nat_dec_le(v___x_2549_, v___x_2549_);
if (v___x_2565_ == 0)
{
if (v___x_2564_ == 0)
{
v_a_2557_ = v___x_2563_;
goto v___jp_2556_;
}
else
{
size_t v___x_2566_; size_t v___x_2567_; lean_object* v___x_2568_; 
v___x_2566_ = ((size_t)0ULL);
v___x_2567_ = lean_usize_of_nat(v___x_2549_);
v___x_2568_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__0(v_fst_2550_, v___x_2566_, v___x_2567_, v___x_2563_, v___x_2551_, v___x_2555_, v___y_2552_, v___y_2553_);
v___y_2561_ = v___x_2568_;
goto v___jp_2560_;
}
}
else
{
size_t v___x_2569_; size_t v___x_2570_; lean_object* v___x_2571_; 
v___x_2569_ = ((size_t)0ULL);
v___x_2570_ = lean_usize_of_nat(v___x_2549_);
v___x_2571_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__0(v_fst_2550_, v___x_2569_, v___x_2570_, v___x_2563_, v___x_2551_, v___x_2555_, v___y_2552_, v___y_2553_);
v___y_2561_ = v___x_2571_;
goto v___jp_2560_;
}
}
v___jp_2556_:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; 
v___x_2558_ = lean_st_ref_get(v___x_2555_);
lean_dec(v___x_2555_);
lean_dec(v___x_2558_);
v___x_2559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2559_, 0, v_a_2557_);
return v___x_2559_;
}
v___jp_2560_:
{
if (lean_obj_tag(v___y_2561_) == 0)
{
lean_object* v_a_2562_; 
v_a_2562_ = lean_ctor_get(v___y_2561_, 0);
lean_inc(v_a_2562_);
lean_dec_ref_known(v___y_2561_, 1);
v_a_2557_ = v_a_2562_;
goto v___jp_2556_;
}
else
{
lean_dec(v___x_2555_);
return v___y_2561_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkSmartCasts___lam__0___boxed(lean_object* v___x_2572_, lean_object* v___x_2573_, lean_object* v___x_2574_, lean_object* v_fst_2575_, lean_object* v___x_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_){
_start:
{
lean_object* v_res_2580_; 
v_res_2580_ = l_Lean_checkSmartCasts___lam__0(v___x_2572_, v___x_2573_, v___x_2574_, v_fst_2575_, v___x_2576_, v___y_2577_, v___y_2578_);
lean_dec(v___y_2578_);
lean_dec_ref(v___y_2577_);
lean_dec_ref(v___x_2576_);
lean_dec_ref(v_fst_2575_);
lean_dec(v___x_2574_);
lean_dec(v___x_2573_);
return v_res_2580_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkSmartCasts___lam__1(lean_object* v___x_2581_, lean_object* v___x_2582_, lean_object* v___x_2583_, lean_object* v_snd_2584_, lean_object* v___x_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_){
_start:
{
lean_object* v___x_2589_; lean_object* v_a_2591_; lean_object* v___y_2595_; lean_object* v___x_2597_; uint8_t v___x_2598_; 
v___x_2589_ = lean_st_mk_ref(v___x_2581_);
v___x_2597_ = lean_box(0);
v___x_2598_ = lean_nat_dec_lt(v___x_2582_, v___x_2583_);
if (v___x_2598_ == 0)
{
v_a_2591_ = v___x_2597_;
goto v___jp_2590_;
}
else
{
uint8_t v___x_2599_; 
v___x_2599_ = lean_nat_dec_le(v___x_2583_, v___x_2583_);
if (v___x_2599_ == 0)
{
if (v___x_2598_ == 0)
{
v_a_2591_ = v___x_2597_;
goto v___jp_2590_;
}
else
{
size_t v___x_2600_; size_t v___x_2601_; lean_object* v___x_2602_; 
v___x_2600_ = ((size_t)0ULL);
v___x_2601_ = lean_usize_of_nat(v___x_2583_);
v___x_2602_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__0(v_snd_2584_, v___x_2600_, v___x_2601_, v___x_2597_, v___x_2585_, v___x_2589_, v___y_2586_, v___y_2587_);
v___y_2595_ = v___x_2602_;
goto v___jp_2594_;
}
}
else
{
size_t v___x_2603_; size_t v___x_2604_; lean_object* v___x_2605_; 
v___x_2603_ = ((size_t)0ULL);
v___x_2604_ = lean_usize_of_nat(v___x_2583_);
v___x_2605_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_AddDecl_0__Lean_checkSmartCastsIn_spec__0(v_snd_2584_, v___x_2603_, v___x_2604_, v___x_2597_, v___x_2585_, v___x_2589_, v___y_2586_, v___y_2587_);
v___y_2595_ = v___x_2605_;
goto v___jp_2594_;
}
}
v___jp_2590_:
{
lean_object* v___x_2592_; lean_object* v___x_2593_; 
v___x_2592_ = lean_st_ref_get(v___x_2589_);
lean_dec(v___x_2589_);
lean_dec(v___x_2592_);
v___x_2593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2593_, 0, v_a_2591_);
return v___x_2593_;
}
v___jp_2594_:
{
if (lean_obj_tag(v___y_2595_) == 0)
{
lean_object* v_a_2596_; 
v_a_2596_ = lean_ctor_get(v___y_2595_, 0);
lean_inc(v_a_2596_);
lean_dec_ref_known(v___y_2595_, 1);
v_a_2591_ = v_a_2596_;
goto v___jp_2590_;
}
else
{
lean_dec(v___x_2589_);
return v___y_2595_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkSmartCasts___lam__1___boxed(lean_object* v___x_2606_, lean_object* v___x_2607_, lean_object* v___x_2608_, lean_object* v_snd_2609_, lean_object* v___x_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_){
_start:
{
lean_object* v_res_2614_; 
v_res_2614_ = l_Lean_checkSmartCasts___lam__1(v___x_2606_, v___x_2607_, v___x_2608_, v_snd_2609_, v___x_2610_, v___y_2611_, v___y_2612_);
lean_dec(v___y_2612_);
lean_dec_ref(v___y_2611_);
lean_dec_ref(v___x_2610_);
lean_dec_ref(v_snd_2609_);
lean_dec(v___x_2608_);
lean_dec(v___x_2607_);
return v_res_2614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__2(size_t v_sz_2615_, size_t v_i_2616_, lean_object* v_bs_2617_){
_start:
{
uint8_t v___x_2618_; 
v___x_2618_ = lean_usize_dec_lt(v_i_2616_, v_sz_2615_);
if (v___x_2618_ == 0)
{
return v_bs_2617_;
}
else
{
lean_object* v_v_2619_; lean_object* v_toConstantVal_2620_; lean_object* v_type_2621_; lean_object* v___x_2622_; lean_object* v_bs_x27_2623_; size_t v___x_2624_; size_t v___x_2625_; lean_object* v___x_2626_; 
v_v_2619_ = lean_array_uget_borrowed(v_bs_2617_, v_i_2616_);
v_toConstantVal_2620_ = lean_ctor_get(v_v_2619_, 0);
v_type_2621_ = lean_ctor_get(v_toConstantVal_2620_, 2);
lean_inc_ref(v_type_2621_);
v___x_2622_ = lean_unsigned_to_nat(0u);
v_bs_x27_2623_ = lean_array_uset(v_bs_2617_, v_i_2616_, v___x_2622_);
v___x_2624_ = ((size_t)1ULL);
v___x_2625_ = lean_usize_add(v_i_2616_, v___x_2624_);
v___x_2626_ = lean_array_uset(v_bs_x27_2623_, v_i_2616_, v_type_2621_);
v_i_2616_ = v___x_2625_;
v_bs_2617_ = v___x_2626_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__2___boxed(lean_object* v_sz_2628_, lean_object* v_i_2629_, lean_object* v_bs_2630_){
_start:
{
size_t v_sz_boxed_2631_; size_t v_i_boxed_2632_; lean_object* v_res_2633_; 
v_sz_boxed_2631_ = lean_unbox_usize(v_sz_2628_);
lean_dec(v_sz_2628_);
v_i_boxed_2632_ = lean_unbox_usize(v_i_2629_);
lean_dec(v_i_2629_);
v_res_2633_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__2(v_sz_boxed_2631_, v_i_boxed_2632_, v_bs_2630_);
return v_res_2633_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__0(size_t v_sz_2634_, size_t v_i_2635_, lean_object* v_bs_2636_){
_start:
{
uint8_t v___x_2637_; 
v___x_2637_ = lean_usize_dec_lt(v_i_2635_, v_sz_2634_);
if (v___x_2637_ == 0)
{
return v_bs_2636_;
}
else
{
lean_object* v_v_2638_; lean_object* v_type_2639_; lean_object* v___x_2640_; lean_object* v_bs_x27_2641_; size_t v___x_2642_; size_t v___x_2643_; lean_object* v___x_2644_; 
v_v_2638_ = lean_array_uget_borrowed(v_bs_2636_, v_i_2635_);
v_type_2639_ = lean_ctor_get(v_v_2638_, 1);
lean_inc_ref(v_type_2639_);
v___x_2640_ = lean_unsigned_to_nat(0u);
v_bs_x27_2641_ = lean_array_uset(v_bs_2636_, v_i_2635_, v___x_2640_);
v___x_2642_ = ((size_t)1ULL);
v___x_2643_ = lean_usize_add(v_i_2635_, v___x_2642_);
v___x_2644_ = lean_array_uset(v_bs_x27_2641_, v_i_2635_, v_type_2639_);
v_i_2635_ = v___x_2643_;
v_bs_2636_ = v___x_2644_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__0___boxed(lean_object* v_sz_2646_, lean_object* v_i_2647_, lean_object* v_bs_2648_){
_start:
{
size_t v_sz_boxed_2649_; size_t v_i_boxed_2650_; lean_object* v_res_2651_; 
v_sz_boxed_2649_ = lean_unbox_usize(v_sz_2646_);
lean_dec(v_sz_2646_);
v_i_boxed_2650_ = lean_unbox_usize(v_i_2647_);
lean_dec(v_i_2647_);
v_res_2651_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__0(v_sz_boxed_2649_, v_i_boxed_2650_, v_bs_2648_);
return v_res_2651_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_checkSmartCasts_spec__4(lean_object* v_as_2652_, size_t v_i_2653_, size_t v_stop_2654_, lean_object* v_b_2655_){
_start:
{
uint8_t v___x_2656_; 
v___x_2656_ = lean_usize_dec_eq(v_i_2653_, v_stop_2654_);
if (v___x_2656_ == 0)
{
lean_object* v___x_2657_; lean_object* v_type_2658_; lean_object* v_ctors_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; size_t v_sz_2664_; size_t v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; size_t v___x_2669_; size_t v___x_2670_; 
v___x_2657_ = lean_array_uget_borrowed(v_as_2652_, v_i_2653_);
v_type_2658_ = lean_ctor_get(v___x_2657_, 1);
v_ctors_2659_ = lean_ctor_get(v___x_2657_, 2);
v___x_2660_ = lean_unsigned_to_nat(1u);
v___x_2661_ = lean_mk_empty_array_with_capacity(v___x_2660_);
lean_inc_ref(v_type_2658_);
v___x_2662_ = lean_array_push(v___x_2661_, v_type_2658_);
lean_inc(v_ctors_2659_);
v___x_2663_ = lean_array_mk(v_ctors_2659_);
v_sz_2664_ = lean_array_size(v___x_2663_);
v___x_2665_ = ((size_t)0ULL);
v___x_2666_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__0(v_sz_2664_, v___x_2665_, v___x_2663_);
v___x_2667_ = l_Array_append___redArg(v___x_2662_, v___x_2666_);
lean_dec_ref(v___x_2666_);
v___x_2668_ = l_Array_append___redArg(v_b_2655_, v___x_2667_);
lean_dec_ref(v___x_2667_);
v___x_2669_ = ((size_t)1ULL);
v___x_2670_ = lean_usize_add(v_i_2653_, v___x_2669_);
v_i_2653_ = v___x_2670_;
v_b_2655_ = v___x_2668_;
goto _start;
}
else
{
return v_b_2655_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_checkSmartCasts_spec__4___boxed(lean_object* v_as_2672_, lean_object* v_i_2673_, lean_object* v_stop_2674_, lean_object* v_b_2675_){
_start:
{
size_t v_i_boxed_2676_; size_t v_stop_boxed_2677_; lean_object* v_res_2678_; 
v_i_boxed_2676_ = lean_unbox_usize(v_i_2673_);
lean_dec(v_i_2673_);
v_stop_boxed_2677_ = lean_unbox_usize(v_stop_2674_);
lean_dec(v_stop_2674_);
v_res_2678_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_checkSmartCasts_spec__4(v_as_2672_, v_i_boxed_2676_, v_stop_boxed_2677_, v_b_2675_);
lean_dec_ref(v_as_2672_);
return v_res_2678_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Lean_checkSmartCasts_spec__5(lean_object* v_x_2679_){
_start:
{
if (lean_obj_tag(v_x_2679_) == 0)
{
uint8_t v___x_2680_; 
v___x_2680_ = 1;
return v___x_2680_;
}
else
{
lean_object* v_head_2681_; lean_object* v_tail_2682_; uint8_t v___x_2683_; 
v_head_2681_ = lean_ctor_get(v_x_2679_, 0);
v_tail_2682_ = lean_ctor_get(v_x_2679_, 1);
v___x_2683_ = l_Lean_isPrivateName(v_head_2681_);
if (v___x_2683_ == 0)
{
return v___x_2683_;
}
else
{
v_x_2679_ = v_tail_2682_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Lean_checkSmartCasts_spec__5___boxed(lean_object* v_x_2685_){
_start:
{
uint8_t v_res_2686_; lean_object* v_r_2687_; 
v_res_2686_ = l_List_all___at___00Lean_checkSmartCasts_spec__5(v_x_2685_);
lean_dec(v_x_2685_);
v_r_2687_ = lean_box(v_res_2686_);
return v_r_2687_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__3(size_t v_sz_2688_, size_t v_i_2689_, lean_object* v_bs_2690_){
_start:
{
uint8_t v___x_2691_; 
v___x_2691_ = lean_usize_dec_lt(v_i_2689_, v_sz_2688_);
if (v___x_2691_ == 0)
{
return v_bs_2690_;
}
else
{
lean_object* v_v_2692_; lean_object* v_value_2693_; lean_object* v___x_2694_; lean_object* v_bs_x27_2695_; size_t v___x_2696_; size_t v___x_2697_; lean_object* v___x_2698_; 
v_v_2692_ = lean_array_uget_borrowed(v_bs_2690_, v_i_2689_);
v_value_2693_ = lean_ctor_get(v_v_2692_, 1);
lean_inc_ref(v_value_2693_);
v___x_2694_ = lean_unsigned_to_nat(0u);
v_bs_x27_2695_ = lean_array_uset(v_bs_2690_, v_i_2689_, v___x_2694_);
v___x_2696_ = ((size_t)1ULL);
v___x_2697_ = lean_usize_add(v_i_2689_, v___x_2696_);
v___x_2698_ = lean_array_uset(v_bs_x27_2695_, v_i_2689_, v_value_2693_);
v_i_2689_ = v___x_2697_;
v_bs_2690_ = v___x_2698_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__3___boxed(lean_object* v_sz_2700_, lean_object* v_i_2701_, lean_object* v_bs_2702_){
_start:
{
size_t v_sz_boxed_2703_; size_t v_i_boxed_2704_; lean_object* v_res_2705_; 
v_sz_boxed_2703_ = lean_unbox_usize(v_sz_2700_);
lean_dec(v_sz_2700_);
v_i_boxed_2704_ = lean_unbox_usize(v_i_2701_);
lean_dec(v_i_2701_);
v_res_2705_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__3(v_sz_boxed_2703_, v_i_boxed_2704_, v_bs_2702_);
return v_res_2705_;
}
}
static uint64_t _init_l_Lean_checkSmartCasts___closed__1(void){
_start:
{
lean_object* v___x_2712_; uint64_t v___x_2713_; 
v___x_2712_ = ((lean_object*)(l_Lean_checkSmartCasts___closed__0));
v___x_2713_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2712_);
return v___x_2713_;
}
}
static lean_object* _init_l_Lean_checkSmartCasts___closed__2(void){
_start:
{
uint64_t v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2714_ = lean_uint64_once(&l_Lean_checkSmartCasts___closed__1, &l_Lean_checkSmartCasts___closed__1_once, _init_l_Lean_checkSmartCasts___closed__1);
v___x_2715_ = ((lean_object*)(l_Lean_checkSmartCasts___closed__0));
v___x_2716_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2716_, 0, v___x_2715_);
lean_ctor_set_uint64(v___x_2716_, sizeof(void*)*1, v___x_2714_);
return v___x_2716_;
}
}
static lean_object* _init_l_Lean_checkSmartCasts___closed__4(void){
_start:
{
uint8_t v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; uint8_t v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; 
v___x_2719_ = 1;
v___x_2720_ = lean_unsigned_to_nat(0u);
v___x_2721_ = lean_box(0);
v___x_2722_ = ((lean_object*)(l_Lean_checkSmartCasts___closed__3));
v___x_2723_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__3, &l_Lean_warnIfUsesSorry___closed__3_once, _init_l_Lean_warnIfUsesSorry___closed__3);
v___x_2724_ = lean_box(1);
v___x_2725_ = 0;
v___x_2726_ = lean_obj_once(&l_Lean_checkSmartCasts___closed__2, &l_Lean_checkSmartCasts___closed__2_once, _init_l_Lean_checkSmartCasts___closed__2);
v___x_2727_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2727_, 0, v___x_2726_);
lean_ctor_set(v___x_2727_, 1, v___x_2724_);
lean_ctor_set(v___x_2727_, 2, v___x_2723_);
lean_ctor_set(v___x_2727_, 3, v___x_2722_);
lean_ctor_set(v___x_2727_, 4, v___x_2721_);
lean_ctor_set(v___x_2727_, 5, v___x_2720_);
lean_ctor_set(v___x_2727_, 6, v___x_2721_);
lean_ctor_set_uint8(v___x_2727_, sizeof(void*)*7, v___x_2725_);
lean_ctor_set_uint8(v___x_2727_, sizeof(void*)*7 + 1, v___x_2725_);
lean_ctor_set_uint8(v___x_2727_, sizeof(void*)*7 + 2, v___x_2725_);
lean_ctor_set_uint8(v___x_2727_, sizeof(void*)*7 + 3, v___x_2719_);
return v___x_2727_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkSmartCasts(lean_object* v_decl_2730_, uint8_t v_forceExpose_2731_, lean_object* v_a_2732_, lean_object* v_a_2733_){
_start:
{
lean_object* v___x_2735_; lean_object* v_env_2736_; uint8_t v___y_2738_; lean_object* v_fst_2739_; lean_object* v_snd_2740_; uint8_t v___y_2755_; lean_object* v___y_2756_; uint8_t v___y_2759_; lean_object* v___x_2798_; uint8_t v_isModule_2799_; 
v___x_2735_ = lean_st_ref_get(v_a_2733_);
v_env_2736_ = lean_ctor_get(v___x_2735_, 0);
lean_inc_ref(v_env_2736_);
lean_dec(v___x_2735_);
v___x_2798_ = l_Lean_Environment_header(v_env_2736_);
v_isModule_2799_ = lean_ctor_get_uint8(v___x_2798_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2798_);
if (v_isModule_2799_ == 0)
{
v___y_2759_ = v_isModule_2799_;
goto v___jp_2758_;
}
else
{
lean_object* v___x_2800_; uint8_t v___x_2801_; 
lean_inc(v_decl_2730_);
v___x_2800_ = l_Lean_Declaration_getTopLevelNames(v_decl_2730_);
v___x_2801_ = l_List_all___at___00Lean_checkSmartCasts_spec__5(v___x_2800_);
lean_dec(v___x_2800_);
if (v___x_2801_ == 0)
{
v___y_2759_ = v_isModule_2799_;
goto v___jp_2758_;
}
else
{
uint8_t v___x_2802_; 
v___x_2802_ = 0;
v___y_2759_ = v___x_2802_;
goto v___jp_2758_;
}
}
v___jp_2737_:
{
lean_object* v___x_2741_; lean_object* v___x_2742_; uint8_t v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___f_2746_; lean_object* v___x_2747_; 
v___x_2741_ = lean_unsigned_to_nat(0u);
v___x_2742_ = lean_array_get_size(v_fst_2739_);
v___x_2743_ = 1;
v___x_2744_ = lean_obj_once(&l_Lean_checkSmartCasts___closed__4, &l_Lean_checkSmartCasts___closed__4_once, _init_l_Lean_checkSmartCasts___closed__4);
v___x_2745_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__7, &l_Lean_warnIfUsesSorry___closed__7_once, _init_l_Lean_warnIfUsesSorry___closed__7);
v___f_2746_ = lean_alloc_closure((void*)(l_Lean_checkSmartCasts___lam__0___boxed), 8, 5);
lean_closure_set(v___f_2746_, 0, v___x_2745_);
lean_closure_set(v___f_2746_, 1, v___x_2741_);
lean_closure_set(v___f_2746_, 2, v___x_2742_);
lean_closure_set(v___f_2746_, 3, v_fst_2739_);
lean_closure_set(v___f_2746_, 4, v___x_2744_);
v___x_2747_ = l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg(v___f_2746_, v___y_2738_, v_a_2732_, v_a_2733_);
if (lean_obj_tag(v___x_2747_) == 0)
{
lean_object* v___x_2748_; lean_object* v___f_2749_; 
lean_dec_ref_known(v___x_2747_, 1);
v___x_2748_ = lean_array_get_size(v_snd_2740_);
v___f_2749_ = lean_alloc_closure((void*)(l_Lean_checkSmartCasts___lam__1___boxed), 8, 5);
lean_closure_set(v___f_2749_, 0, v___x_2745_);
lean_closure_set(v___f_2749_, 1, v___x_2741_);
lean_closure_set(v___f_2749_, 2, v___x_2748_);
lean_closure_set(v___f_2749_, 3, v_snd_2740_);
lean_closure_set(v___f_2749_, 4, v___x_2744_);
if (v___y_2738_ == 0)
{
lean_object* v___x_2750_; 
lean_dec_ref(v_env_2736_);
v___x_2750_ = l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg(v___f_2749_, v___y_2738_, v_a_2732_, v_a_2733_);
return v___x_2750_;
}
else
{
if (v_forceExpose_2731_ == 0)
{
uint8_t v_isExporting_2751_; lean_object* v___x_2752_; 
v_isExporting_2751_ = lean_ctor_get_uint8(v_env_2736_, sizeof(void*)*13);
lean_dec_ref(v_env_2736_);
v___x_2752_ = l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg(v___f_2749_, v_isExporting_2751_, v_a_2732_, v_a_2733_);
return v___x_2752_;
}
else
{
lean_object* v___x_2753_; 
lean_dec_ref(v_env_2736_);
v___x_2753_ = l_Lean_withExporting___at___00Lean_checkSmartCasts_spec__1___redArg(v___f_2749_, v___x_2743_, v_a_2732_, v_a_2733_);
return v___x_2753_;
}
}
}
else
{
lean_dec_ref(v_snd_2740_);
lean_dec_ref(v_env_2736_);
return v___x_2747_;
}
}
v___jp_2754_:
{
lean_object* v___x_2757_; 
v___x_2757_ = ((lean_object*)(l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0));
v___y_2738_ = v___y_2755_;
v_fst_2739_ = v___y_2756_;
v_snd_2740_ = v___x_2757_;
goto v___jp_2737_;
}
v___jp_2758_:
{
switch(lean_obj_tag(v_decl_2730_))
{
case 0:
{
lean_object* v_val_2760_; lean_object* v_toConstantVal_2761_; lean_object* v_type_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; 
v_val_2760_ = lean_ctor_get(v_decl_2730_, 0);
lean_inc_ref(v_val_2760_);
lean_dec_ref_known(v_decl_2730_, 1);
v_toConstantVal_2761_ = lean_ctor_get(v_val_2760_, 0);
lean_inc_ref(v_toConstantVal_2761_);
lean_dec_ref(v_val_2760_);
v_type_2762_ = lean_ctor_get(v_toConstantVal_2761_, 2);
lean_inc_ref(v_type_2762_);
lean_dec_ref(v_toConstantVal_2761_);
v___x_2763_ = lean_unsigned_to_nat(1u);
v___x_2764_ = lean_mk_empty_array_with_capacity(v___x_2763_);
v___x_2765_ = lean_array_push(v___x_2764_, v_type_2762_);
v___x_2766_ = ((lean_object*)(l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0));
v___y_2738_ = v___y_2759_;
v_fst_2739_ = v___x_2765_;
v_snd_2740_ = v___x_2766_;
goto v___jp_2737_;
}
case 1:
{
lean_object* v_val_2767_; lean_object* v_toConstantVal_2768_; lean_object* v_value_2769_; lean_object* v_type_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; 
v_val_2767_ = lean_ctor_get(v_decl_2730_, 0);
lean_inc_ref(v_val_2767_);
lean_dec_ref_known(v_decl_2730_, 1);
v_toConstantVal_2768_ = lean_ctor_get(v_val_2767_, 0);
lean_inc_ref(v_toConstantVal_2768_);
v_value_2769_ = lean_ctor_get(v_val_2767_, 1);
lean_inc_ref(v_value_2769_);
lean_dec_ref(v_val_2767_);
v_type_2770_ = lean_ctor_get(v_toConstantVal_2768_, 2);
lean_inc_ref(v_type_2770_);
lean_dec_ref(v_toConstantVal_2768_);
v___x_2771_ = lean_unsigned_to_nat(1u);
v___x_2772_ = lean_mk_empty_array_with_capacity(v___x_2771_);
lean_inc_ref(v___x_2772_);
v___x_2773_ = lean_array_push(v___x_2772_, v_type_2770_);
v___x_2774_ = lean_array_push(v___x_2772_, v_value_2769_);
v___y_2738_ = v___y_2759_;
v_fst_2739_ = v___x_2773_;
v_snd_2740_ = v___x_2774_;
goto v___jp_2737_;
}
case 3:
{
lean_object* v_val_2775_; lean_object* v_toConstantVal_2776_; lean_object* v_type_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; 
v_val_2775_ = lean_ctor_get(v_decl_2730_, 0);
lean_inc_ref(v_val_2775_);
lean_dec_ref_known(v_decl_2730_, 1);
v_toConstantVal_2776_ = lean_ctor_get(v_val_2775_, 0);
lean_inc_ref(v_toConstantVal_2776_);
lean_dec_ref(v_val_2775_);
v_type_2777_ = lean_ctor_get(v_toConstantVal_2776_, 2);
lean_inc_ref(v_type_2777_);
lean_dec_ref(v_toConstantVal_2776_);
v___x_2778_ = lean_unsigned_to_nat(1u);
v___x_2779_ = lean_mk_empty_array_with_capacity(v___x_2778_);
v___x_2780_ = lean_array_push(v___x_2779_, v_type_2777_);
v___x_2781_ = ((lean_object*)(l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0));
v___y_2738_ = v___y_2759_;
v_fst_2739_ = v___x_2780_;
v_snd_2740_ = v___x_2781_;
goto v___jp_2737_;
}
case 5:
{
lean_object* v_defns_2782_; lean_object* v___x_2783_; size_t v_sz_2784_; size_t v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; 
v_defns_2782_ = lean_ctor_get(v_decl_2730_, 0);
lean_inc(v_defns_2782_);
lean_dec_ref_known(v_decl_2730_, 1);
v___x_2783_ = lean_array_mk(v_defns_2782_);
v_sz_2784_ = lean_array_size(v___x_2783_);
v___x_2785_ = ((size_t)0ULL);
lean_inc_ref(v___x_2783_);
v___x_2786_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__2(v_sz_2784_, v___x_2785_, v___x_2783_);
v___x_2787_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_checkSmartCasts_spec__3(v_sz_2784_, v___x_2785_, v___x_2783_);
v___y_2738_ = v___y_2759_;
v_fst_2739_ = v___x_2786_;
v_snd_2740_ = v___x_2787_;
goto v___jp_2737_;
}
case 6:
{
lean_object* v_types_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; uint8_t v___x_2793_; 
v_types_2788_ = lean_ctor_get(v_decl_2730_, 2);
lean_inc(v_types_2788_);
lean_dec_ref_known(v_decl_2730_, 3);
v___x_2789_ = lean_array_mk(v_types_2788_);
v___x_2790_ = lean_unsigned_to_nat(0u);
v___x_2791_ = ((lean_object*)(l_Lean_checkSmartCasts___closed__5));
v___x_2792_ = lean_array_get_size(v___x_2789_);
v___x_2793_ = lean_nat_dec_lt(v___x_2790_, v___x_2792_);
if (v___x_2793_ == 0)
{
lean_dec_ref(v___x_2789_);
v___y_2755_ = v___y_2759_;
v___y_2756_ = v___x_2791_;
goto v___jp_2754_;
}
else
{
size_t v___x_2794_; size_t v___x_2795_; lean_object* v___x_2796_; 
v___x_2794_ = ((size_t)0ULL);
v___x_2795_ = lean_usize_of_nat(v___x_2792_);
v___x_2796_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_checkSmartCasts_spec__4(v___x_2789_, v___x_2794_, v___x_2795_, v___x_2791_);
lean_dec_ref(v___x_2789_);
v___y_2755_ = v___y_2759_;
v___y_2756_ = v___x_2796_;
goto v___jp_2754_;
}
}
default: 
{
lean_object* v___x_2797_; 
lean_dec(v_decl_2730_);
v___x_2797_ = ((lean_object*)(l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0));
v___y_2738_ = v___y_2759_;
v_fst_2739_ = v___x_2797_;
v_snd_2740_ = v___x_2797_;
goto v___jp_2737_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkSmartCasts___boxed(lean_object* v_decl_2803_, lean_object* v_forceExpose_2804_, lean_object* v_a_2805_, lean_object* v_a_2806_, lean_object* v_a_2807_){
_start:
{
uint8_t v_forceExpose_boxed_2808_; lean_object* v_res_2809_; 
v_forceExpose_boxed_2808_ = lean_unbox(v_forceExpose_2804_);
v_res_2809_ = l_Lean_checkSmartCasts(v_decl_2803_, v_forceExpose_boxed_2808_, v_a_2805_, v_a_2806_);
lean_dec(v_a_2806_);
lean_dec_ref(v_a_2805_);
return v_res_2809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2859_; uint8_t v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; 
v___x_2859_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
v___x_2860_ = 0;
v___x_2861_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__20_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
v___x_2862_ = l_Lean_registerTraceClass(v___x_2859_, v___x_2860_, v___x_2861_);
return v___x_2862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2____boxed(lean_object* v_a_2863_){
_start:
{
lean_object* v_res_2864_; 
v_res_2864_ = l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_();
return v_res_2864_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(lean_object* v_env_2865_, lean_object* v___y_2866_){
_start:
{
lean_object* v___x_2868_; lean_object* v_nextMacroScope_2869_; lean_object* v_ngen_2870_; lean_object* v_auxDeclNGen_2871_; lean_object* v_traceState_2872_; lean_object* v_recordedDeps_2873_; lean_object* v_messages_2874_; lean_object* v_infoState_2875_; lean_object* v_snapshotTasks_2876_; lean_object* v___x_2878_; uint8_t v_isShared_2879_; uint8_t v_isSharedCheck_2887_; 
v___x_2868_ = lean_st_ref_take(v___y_2866_);
v_nextMacroScope_2869_ = lean_ctor_get(v___x_2868_, 1);
v_ngen_2870_ = lean_ctor_get(v___x_2868_, 2);
v_auxDeclNGen_2871_ = lean_ctor_get(v___x_2868_, 3);
v_traceState_2872_ = lean_ctor_get(v___x_2868_, 4);
v_recordedDeps_2873_ = lean_ctor_get(v___x_2868_, 6);
v_messages_2874_ = lean_ctor_get(v___x_2868_, 7);
v_infoState_2875_ = lean_ctor_get(v___x_2868_, 8);
v_snapshotTasks_2876_ = lean_ctor_get(v___x_2868_, 9);
v_isSharedCheck_2887_ = !lean_is_exclusive(v___x_2868_);
if (v_isSharedCheck_2887_ == 0)
{
lean_object* v_unused_2888_; lean_object* v_unused_2889_; 
v_unused_2888_ = lean_ctor_get(v___x_2868_, 5);
lean_dec(v_unused_2888_);
v_unused_2889_ = lean_ctor_get(v___x_2868_, 0);
lean_dec(v_unused_2889_);
v___x_2878_ = v___x_2868_;
v_isShared_2879_ = v_isSharedCheck_2887_;
goto v_resetjp_2877_;
}
else
{
lean_inc(v_snapshotTasks_2876_);
lean_inc(v_infoState_2875_);
lean_inc(v_messages_2874_);
lean_inc(v_recordedDeps_2873_);
lean_inc(v_traceState_2872_);
lean_inc(v_auxDeclNGen_2871_);
lean_inc(v_ngen_2870_);
lean_inc(v_nextMacroScope_2869_);
lean_dec(v___x_2868_);
v___x_2878_ = lean_box(0);
v_isShared_2879_ = v_isSharedCheck_2887_;
goto v_resetjp_2877_;
}
v_resetjp_2877_:
{
lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2883_; 
v___x_2880_ = lean_box(0);
v___x_2881_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_2879_ == 0)
{
lean_ctor_set(v___x_2878_, 5, v___x_2881_);
lean_ctor_set(v___x_2878_, 0, v_env_2865_);
v___x_2883_ = v___x_2878_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v_env_2865_);
lean_ctor_set(v_reuseFailAlloc_2886_, 1, v_nextMacroScope_2869_);
lean_ctor_set(v_reuseFailAlloc_2886_, 2, v_ngen_2870_);
lean_ctor_set(v_reuseFailAlloc_2886_, 3, v_auxDeclNGen_2871_);
lean_ctor_set(v_reuseFailAlloc_2886_, 4, v_traceState_2872_);
lean_ctor_set(v_reuseFailAlloc_2886_, 5, v___x_2881_);
lean_ctor_set(v_reuseFailAlloc_2886_, 6, v_recordedDeps_2873_);
lean_ctor_set(v_reuseFailAlloc_2886_, 7, v_messages_2874_);
lean_ctor_set(v_reuseFailAlloc_2886_, 8, v_infoState_2875_);
lean_ctor_set(v_reuseFailAlloc_2886_, 9, v_snapshotTasks_2876_);
v___x_2883_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
lean_object* v___x_2884_; lean_object* v___x_2885_; 
v___x_2884_ = lean_st_ref_put(v___y_2866_, v___x_2883_);
v___x_2885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2885_, 0, v___x_2880_);
return v___x_2885_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg___boxed(lean_object* v_env_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_){
_start:
{
lean_object* v_res_2893_; 
v_res_2893_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_env_2890_, v___y_2891_);
lean_dec(v___y_2891_);
return v_res_2893_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1(lean_object* v_env_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_){
_start:
{
lean_object* v___x_2898_; 
v___x_2898_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_env_2894_, v___y_2896_);
return v___x_2898_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___boxed(lean_object* v_env_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_){
_start:
{
lean_object* v_res_2903_; 
v_res_2903_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1(v_env_2899_, v___y_2900_, v___y_2901_);
lean_dec(v___y_2901_);
lean_dec_ref(v___y_2900_);
return v_res_2903_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; 
v___x_2904_ = lean_box(0);
v___x_2905_ = l_Lean_interruptExceptionId;
v___x_2906_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2905_);
lean_ctor_set(v___x_2906_, 1, v___x_2904_);
return v___x_2906_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg(){
_start:
{
lean_object* v___x_2908_; lean_object* v___x_2909_; 
v___x_2908_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0);
v___x_2909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2908_);
return v___x_2909_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v___y_2910_){
_start:
{
lean_object* v_res_2911_; 
v_res_2911_ = l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg();
return v_res_2911_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg(lean_object* v_msg_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_){
_start:
{
lean_object* v_ref_2916_; lean_object* v___x_2917_; lean_object* v_a_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2926_; 
v_ref_2916_ = lean_ctor_get(v___y_2913_, 2);
v___x_2917_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(v_msg_2912_, v___y_2913_, v___y_2914_);
v_a_2918_ = lean_ctor_get(v___x_2917_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2917_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2920_ = v___x_2917_;
v_isShared_2921_ = v_isSharedCheck_2926_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_a_2918_);
lean_dec(v___x_2917_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2926_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v___x_2922_; lean_object* v___x_2924_; 
lean_inc(v_ref_2916_);
v___x_2922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2922_, 0, v_ref_2916_);
lean_ctor_set(v___x_2922_, 1, v_a_2918_);
if (v_isShared_2921_ == 0)
{
lean_ctor_set_tag(v___x_2920_, 1);
lean_ctor_set(v___x_2920_, 0, v___x_2922_);
v___x_2924_ = v___x_2920_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v___x_2922_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_msg_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_){
_start:
{
lean_object* v_res_2931_; 
v_res_2931_ = l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg(v_msg_2927_, v___y_2928_, v___y_2929_);
lean_dec(v___y_2929_);
lean_dec_ref(v___y_2928_);
return v_res_2931_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(lean_object* v_ex_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_){
_start:
{
lean_object* v___y_2937_; lean_object* v___y_2938_; 
if (lean_obj_tag(v_ex_2932_) == 16)
{
lean_object* v___x_2942_; lean_object* v_a_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2950_; 
v___x_2942_ = l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg();
v_a_2943_ = lean_ctor_get(v___x_2942_, 0);
v_isSharedCheck_2950_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_2950_ == 0)
{
v___x_2945_ = v___x_2942_;
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_a_2943_);
lean_dec(v___x_2942_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2948_; 
if (v_isShared_2946_ == 0)
{
v___x_2948_ = v___x_2945_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v_a_2943_);
v___x_2948_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
return v___x_2948_;
}
}
}
else
{
v___y_2937_ = v___y_2933_;
v___y_2938_ = v___y_2934_;
goto v___jp_2936_;
}
v___jp_2936_:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; 
v___x_2939_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2937_);
v___x_2940_ = l_Lean_Kernel_Exception_toMessageData(v_ex_2932_, v___x_2939_);
v___x_2941_ = l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg(v___x_2940_, v___y_2937_, v___y_2938_);
return v___x_2941_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg___boxed(lean_object* v_ex_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_){
_start:
{
lean_object* v_res_2955_; 
v_res_2955_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v_ex_2951_, v___y_2952_, v___y_2953_);
lean_dec(v___y_2953_);
lean_dec_ref(v___y_2952_);
return v_res_2955_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(lean_object* v_x_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_){
_start:
{
if (lean_obj_tag(v_x_2956_) == 0)
{
lean_object* v_a_2960_; lean_object* v___x_2961_; 
v_a_2960_ = lean_ctor_get(v_x_2956_, 0);
lean_inc(v_a_2960_);
lean_dec_ref_known(v_x_2956_, 1);
v___x_2961_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v_a_2960_, v___y_2957_, v___y_2958_);
return v___x_2961_;
}
else
{
lean_object* v_a_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2969_; 
v_a_2962_ = lean_ctor_get(v_x_2956_, 0);
v_isSharedCheck_2969_ = !lean_is_exclusive(v_x_2956_);
if (v_isSharedCheck_2969_ == 0)
{
v___x_2964_ = v_x_2956_;
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_a_2962_);
lean_dec(v_x_2956_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2967_; 
if (v_isShared_2965_ == 0)
{
lean_ctor_set_tag(v___x_2964_, 0);
v___x_2967_ = v___x_2964_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(0, 1, 0);
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
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg___boxed(lean_object* v_x_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_){
_start:
{
lean_object* v_res_2974_; 
v_res_2974_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v_x_2970_, v___y_2971_, v___y_2972_);
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
return v_res_2974_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___x_2981_ = lean_unsigned_to_nat(1u);
v___x_2982_ = l_Lean_Level_ofNat(v___x_2981_);
return v___x_2982_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; 
v___x_2983_ = lean_box(0);
v___x_2984_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3);
v___x_2985_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2985_, 0, v___x_2984_);
lean_ctor_set(v___x_2985_, 1, v___x_2983_);
return v___x_2985_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; 
v___x_2986_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4);
v___x_2987_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__2));
v___x_2988_ = l_Lean_mkConst(v___x_2987_, v___x_2986_);
return v___x_2988_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6(void){
_start:
{
lean_object* v___x_2989_; lean_object* v___x_2990_; 
v___x_2989_ = lean_unsigned_to_nat(0u);
v___x_2990_ = l_Lean_Level_ofNat(v___x_2989_);
return v___x_2990_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7(void){
_start:
{
lean_object* v___x_2991_; lean_object* v___x_2992_; 
v___x_2991_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6);
v___x_2992_ = l_Lean_mkSort(v___x_2991_);
return v___x_2992_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11(void){
_start:
{
lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; 
v___x_2998_ = lean_box(0);
v___x_2999_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10));
v___x_3000_ = l_Lean_mkConst(v___x_2999_, v___x_2998_);
return v___x_3000_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12(void){
_start:
{
lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_3001_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11);
v___x_3002_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7);
v___x_3003_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5);
v___x_3004_ = l_Lean_mkAppB(v___x_3003_, v___x_3002_, v___x_3001_);
return v___x_3004_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg(lean_object* v_as_x27_3010_, lean_object* v_b_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_){
_start:
{
if (lean_obj_tag(v_as_x27_3010_) == 0)
{
lean_object* v___x_3015_; 
v___x_3015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3015_, 0, v_b_3011_);
return v___x_3015_;
}
else
{
lean_object* v_head_3016_; lean_object* v_tail_3017_; lean_object* v___x_3018_; lean_object* v___y_3020_; uint8_t v___y_3021_; lean_object* v_a_3025_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; uint8_t v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v_toCold_3035_; lean_object* v_env_3036_; lean_object* v_cancelTk_x3f_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; 
lean_dec_ref(v_b_3011_);
v_head_3016_ = lean_ctor_get(v_as_x27_3010_, 0);
v_tail_3017_ = lean_ctor_get(v_as_x27_3010_, 1);
v___x_3018_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__0));
v___x_3028_ = lean_box(0);
v___x_3029_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12);
lean_inc(v_head_3016_);
v___x_3030_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3030_, 0, v_head_3016_);
lean_ctor_set(v___x_3030_, 1, v___x_3028_);
lean_ctor_set(v___x_3030_, 2, v___x_3029_);
v___x_3031_ = 0;
v___x_3032_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3032_, 0, v___x_3030_);
lean_ctor_set_uint8(v___x_3032_, sizeof(void*)*1, v___x_3031_);
v___x_3033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3033_, 0, v___x_3032_);
v___x_3034_ = lean_st_ref_get(v___y_3013_);
v_toCold_3035_ = lean_ctor_get(v___y_3012_, 0);
v_env_3036_ = lean_ctor_get(v___x_3034_, 0);
lean_inc_ref(v_env_3036_);
lean_dec(v___x_3034_);
v_cancelTk_x3f_3037_ = lean_ctor_get(v_toCold_3035_, 10);
v___x_3038_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3012_);
v___x_3039_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_3036_, v___x_3038_, v___x_3033_, v_cancelTk_x3f_3037_);
lean_dec_ref_known(v___x_3033_, 1);
lean_dec_ref(v___x_3038_);
v___x_3040_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_3039_, v___y_3012_, v___y_3013_);
if (lean_obj_tag(v___x_3040_) == 0)
{
lean_object* v_a_3041_; lean_object* v___x_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3050_; 
v_a_3041_ = lean_ctor_get(v___x_3040_, 0);
lean_inc(v_a_3041_);
lean_dec_ref_known(v___x_3040_, 1);
v___x_3042_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_3041_, v___y_3013_);
v_isSharedCheck_3050_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3050_ == 0)
{
lean_object* v_unused_3051_; 
v_unused_3051_ = lean_ctor_get(v___x_3042_, 0);
lean_dec(v_unused_3051_);
v___x_3044_ = v___x_3042_;
v_isShared_3045_ = v_isSharedCheck_3050_;
goto v_resetjp_3043_;
}
else
{
lean_dec(v___x_3042_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3050_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3046_; lean_object* v___x_3048_; 
v___x_3046_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__14));
if (v_isShared_3045_ == 0)
{
lean_ctor_set(v___x_3044_, 0, v___x_3046_);
v___x_3048_ = v___x_3044_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v___x_3046_);
v___x_3048_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
return v___x_3048_;
}
}
}
else
{
lean_object* v_a_3052_; 
v_a_3052_ = lean_ctor_get(v___x_3040_, 0);
lean_inc(v_a_3052_);
lean_dec_ref_known(v___x_3040_, 1);
v_a_3025_ = v_a_3052_;
goto v___jp_3024_;
}
v___jp_3019_:
{
if (v___y_3021_ == 0)
{
lean_dec_ref(v___y_3020_);
v_as_x27_3010_ = v_tail_3017_;
v_b_3011_ = v___x_3018_;
goto _start;
}
else
{
lean_object* v___x_3023_; 
v___x_3023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3023_, 0, v___y_3020_);
return v___x_3023_;
}
}
v___jp_3024_:
{
uint8_t v___x_3026_; 
v___x_3026_ = l_Lean_Exception_isInterrupt(v_a_3025_);
if (v___x_3026_ == 0)
{
uint8_t v___x_3027_; 
lean_inc_ref(v_a_3025_);
v___x_3027_ = l_Lean_Exception_isRuntime(v_a_3025_);
v___y_3020_ = v_a_3025_;
v___y_3021_ = v___x_3027_;
goto v___jp_3019_;
}
else
{
v___y_3020_ = v_a_3025_;
v___y_3021_ = v___x_3026_;
goto v___jp_3019_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___boxed(lean_object* v_as_x27_3053_, lean_object* v_b_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_){
_start:
{
lean_object* v_res_3058_; 
v_res_3058_ = l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg(v_as_x27_3053_, v_b_3054_, v___y_3055_, v___y_3056_);
lean_dec(v___y_3056_);
lean_dec_ref(v___y_3055_);
lean_dec(v_as_x27_3053_);
return v_res_3058_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(lean_object* v_decl_3059_, lean_object* v_a_3060_, lean_object* v_a_3061_){
_start:
{
lean_object* v___y_3064_; lean_object* v___y_3065_; lean_object* v___y_3092_; uint8_t v___y_3093_; lean_object* v_a_3096_; lean_object* v___y_3100_; uint8_t v___y_3101_; lean_object* v_a_3104_; 
switch(lean_obj_tag(v_decl_3059_))
{
case 1:
{
lean_object* v_val_3107_; lean_object* v_toConstantVal_3108_; uint8_t v___x_3109_; lean_object* v___x_3110_; lean_object* v_fallbackDecl_3111_; lean_object* v___x_3112_; lean_object* v_toCold_3113_; lean_object* v_env_3114_; lean_object* v_cancelTk_x3f_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
v_val_3107_ = lean_ctor_get(v_decl_3059_, 0);
v_toConstantVal_3108_ = lean_ctor_get(v_val_3107_, 0);
v___x_3109_ = 0;
lean_inc_ref(v_toConstantVal_3108_);
v___x_3110_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3110_, 0, v_toConstantVal_3108_);
lean_ctor_set_uint8(v___x_3110_, sizeof(void*)*1, v___x_3109_);
v_fallbackDecl_3111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_fallbackDecl_3111_, 0, v___x_3110_);
v___x_3112_ = lean_st_ref_get(v_a_3061_);
v_toCold_3113_ = lean_ctor_get(v_a_3060_, 0);
v_env_3114_ = lean_ctor_get(v___x_3112_, 0);
lean_inc_ref(v_env_3114_);
lean_dec(v___x_3112_);
v_cancelTk_x3f_3115_ = lean_ctor_get(v_toCold_3113_, 10);
v___x_3116_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_3060_);
v___x_3117_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_3114_, v___x_3116_, v_fallbackDecl_3111_, v_cancelTk_x3f_3115_);
lean_dec_ref_known(v_fallbackDecl_3111_, 1);
lean_dec_ref(v___x_3116_);
v___x_3118_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_3117_, v_a_3060_, v_a_3061_);
if (lean_obj_tag(v___x_3118_) == 0)
{
lean_object* v_a_3119_; lean_object* v___x_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3128_; 
lean_dec_ref_known(v_decl_3059_, 1);
v_a_3119_ = lean_ctor_get(v___x_3118_, 0);
lean_inc(v_a_3119_);
lean_dec_ref_known(v___x_3118_, 1);
v___x_3120_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_3119_, v_a_3061_);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3120_);
if (v_isSharedCheck_3128_ == 0)
{
lean_object* v_unused_3129_; 
v_unused_3129_ = lean_ctor_get(v___x_3120_, 0);
lean_dec(v_unused_3129_);
v___x_3122_ = v___x_3120_;
v_isShared_3123_ = v_isSharedCheck_3128_;
goto v_resetjp_3121_;
}
else
{
lean_dec(v___x_3120_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3128_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3124_; lean_object* v___x_3126_; 
v___x_3124_ = lean_box(0);
if (v_isShared_3123_ == 0)
{
lean_ctor_set(v___x_3122_, 0, v___x_3124_);
v___x_3126_ = v___x_3122_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v___x_3124_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
else
{
lean_object* v_a_3130_; 
v_a_3130_ = lean_ctor_get(v___x_3118_, 0);
lean_inc(v_a_3130_);
lean_dec_ref_known(v___x_3118_, 1);
v_a_3096_ = v_a_3130_;
goto v___jp_3095_;
}
}
case 2:
{
lean_object* v_val_3131_; lean_object* v_toConstantVal_3132_; uint8_t v___x_3133_; lean_object* v___x_3134_; lean_object* v_fallbackDecl_3135_; lean_object* v___x_3136_; lean_object* v_toCold_3137_; lean_object* v_env_3138_; lean_object* v_cancelTk_x3f_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; 
v_val_3131_ = lean_ctor_get(v_decl_3059_, 0);
v_toConstantVal_3132_ = lean_ctor_get(v_val_3131_, 0);
v___x_3133_ = 0;
lean_inc_ref(v_toConstantVal_3132_);
v___x_3134_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3134_, 0, v_toConstantVal_3132_);
lean_ctor_set_uint8(v___x_3134_, sizeof(void*)*1, v___x_3133_);
v_fallbackDecl_3135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_fallbackDecl_3135_, 0, v___x_3134_);
v___x_3136_ = lean_st_ref_get(v_a_3061_);
v_toCold_3137_ = lean_ctor_get(v_a_3060_, 0);
v_env_3138_ = lean_ctor_get(v___x_3136_, 0);
lean_inc_ref(v_env_3138_);
lean_dec(v___x_3136_);
v_cancelTk_x3f_3139_ = lean_ctor_get(v_toCold_3137_, 10);
v___x_3140_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_3060_);
v___x_3141_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_3138_, v___x_3140_, v_fallbackDecl_3135_, v_cancelTk_x3f_3139_);
lean_dec_ref_known(v_fallbackDecl_3135_, 1);
lean_dec_ref(v___x_3140_);
v___x_3142_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_3141_, v_a_3060_, v_a_3061_);
if (lean_obj_tag(v___x_3142_) == 0)
{
lean_object* v_a_3143_; lean_object* v___x_3144_; lean_object* v___x_3146_; uint8_t v_isShared_3147_; uint8_t v_isSharedCheck_3152_; 
lean_dec_ref_known(v_decl_3059_, 1);
v_a_3143_ = lean_ctor_get(v___x_3142_, 0);
lean_inc(v_a_3143_);
lean_dec_ref_known(v___x_3142_, 1);
v___x_3144_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_3143_, v_a_3061_);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3152_ == 0)
{
lean_object* v_unused_3153_; 
v_unused_3153_ = lean_ctor_get(v___x_3144_, 0);
lean_dec(v_unused_3153_);
v___x_3146_ = v___x_3144_;
v_isShared_3147_ = v_isSharedCheck_3152_;
goto v_resetjp_3145_;
}
else
{
lean_dec(v___x_3144_);
v___x_3146_ = lean_box(0);
v_isShared_3147_ = v_isSharedCheck_3152_;
goto v_resetjp_3145_;
}
v_resetjp_3145_:
{
lean_object* v___x_3148_; lean_object* v___x_3150_; 
v___x_3148_ = lean_box(0);
if (v_isShared_3147_ == 0)
{
lean_ctor_set(v___x_3146_, 0, v___x_3148_);
v___x_3150_ = v___x_3146_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v___x_3148_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
}
else
{
lean_object* v_a_3154_; 
v_a_3154_ = lean_ctor_get(v___x_3142_, 0);
lean_inc(v_a_3154_);
lean_dec_ref_known(v___x_3142_, 1);
v_a_3104_ = v_a_3154_;
goto v___jp_3103_;
}
}
default: 
{
v___y_3064_ = v_a_3060_;
v___y_3065_ = v_a_3061_;
goto v___jp_3063_;
}
}
v___jp_3063_:
{
lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; 
v___x_3066_ = l_Lean_Declaration_getNames(v_decl_3059_);
v___x_3067_ = lean_box(0);
v___x_3068_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__0));
v___x_3069_ = l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg(v___x_3066_, v___x_3068_, v___y_3064_, v___y_3065_);
lean_dec(v___x_3066_);
if (lean_obj_tag(v___x_3069_) == 0)
{
lean_object* v_a_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3082_; 
v_a_3070_ = lean_ctor_get(v___x_3069_, 0);
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_3069_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_3072_ = v___x_3069_;
v_isShared_3073_ = v_isSharedCheck_3082_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_a_3070_);
lean_dec(v___x_3069_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3082_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v_fst_3074_; 
v_fst_3074_ = lean_ctor_get(v_a_3070_, 0);
lean_inc(v_fst_3074_);
lean_dec(v_a_3070_);
if (lean_obj_tag(v_fst_3074_) == 0)
{
lean_object* v___x_3076_; 
if (v_isShared_3073_ == 0)
{
lean_ctor_set(v___x_3072_, 0, v___x_3067_);
v___x_3076_ = v___x_3072_;
goto v_reusejp_3075_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v___x_3067_);
v___x_3076_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3075_;
}
v_reusejp_3075_:
{
return v___x_3076_;
}
}
else
{
lean_object* v_val_3078_; lean_object* v___x_3080_; 
v_val_3078_ = lean_ctor_get(v_fst_3074_, 0);
lean_inc(v_val_3078_);
lean_dec_ref_known(v_fst_3074_, 1);
if (v_isShared_3073_ == 0)
{
lean_ctor_set(v___x_3072_, 0, v_val_3078_);
v___x_3080_ = v___x_3072_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v_val_3078_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
}
}
else
{
lean_object* v_a_3083_; lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3090_; 
v_a_3083_ = lean_ctor_get(v___x_3069_, 0);
v_isSharedCheck_3090_ = !lean_is_exclusive(v___x_3069_);
if (v_isSharedCheck_3090_ == 0)
{
v___x_3085_ = v___x_3069_;
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
else
{
lean_inc(v_a_3083_);
lean_dec(v___x_3069_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v___x_3088_; 
if (v_isShared_3086_ == 0)
{
v___x_3088_ = v___x_3085_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v_a_3083_);
v___x_3088_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
return v___x_3088_;
}
}
}
}
v___jp_3091_:
{
if (v___y_3093_ == 0)
{
lean_dec_ref(v___y_3092_);
v___y_3064_ = v_a_3060_;
v___y_3065_ = v_a_3061_;
goto v___jp_3063_;
}
else
{
lean_object* v___x_3094_; 
lean_dec(v_decl_3059_);
v___x_3094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3094_, 0, v___y_3092_);
return v___x_3094_;
}
}
v___jp_3095_:
{
uint8_t v___x_3097_; 
v___x_3097_ = l_Lean_Exception_isInterrupt(v_a_3096_);
if (v___x_3097_ == 0)
{
uint8_t v___x_3098_; 
lean_inc_ref(v_a_3096_);
v___x_3098_ = l_Lean_Exception_isRuntime(v_a_3096_);
v___y_3092_ = v_a_3096_;
v___y_3093_ = v___x_3098_;
goto v___jp_3091_;
}
else
{
v___y_3092_ = v_a_3096_;
v___y_3093_ = v___x_3097_;
goto v___jp_3091_;
}
}
v___jp_3099_:
{
if (v___y_3101_ == 0)
{
lean_dec_ref(v___y_3100_);
v___y_3064_ = v_a_3060_;
v___y_3065_ = v_a_3061_;
goto v___jp_3063_;
}
else
{
lean_object* v___x_3102_; 
lean_dec(v_decl_3059_);
v___x_3102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3102_, 0, v___y_3100_);
return v___x_3102_;
}
}
v___jp_3103_:
{
uint8_t v___x_3105_; 
v___x_3105_ = l_Lean_Exception_isInterrupt(v_a_3104_);
if (v___x_3105_ == 0)
{
uint8_t v___x_3106_; 
lean_inc_ref(v_a_3104_);
v___x_3106_ = l_Lean_Exception_isRuntime(v_a_3104_);
v___y_3100_ = v_a_3104_;
v___y_3101_ = v___x_3106_;
goto v___jp_3099_;
}
else
{
v___y_3100_ = v_a_3104_;
v___y_3101_ = v___x_3105_;
goto v___jp_3099_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom___boxed(lean_object* v_decl_3155_, lean_object* v_a_3156_, lean_object* v_a_3157_, lean_object* v_a_3158_){
_start:
{
lean_object* v_res_3159_; 
v_res_3159_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(v_decl_3155_, v_a_3156_, v_a_3157_);
lean_dec(v_a_3157_);
lean_dec_ref(v_a_3156_);
return v_res_3159_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0(lean_object* v_00_u03b1_3160_, lean_object* v_x_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_){
_start:
{
lean_object* v___x_3165_; 
v___x_3165_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v_x_3161_, v___y_3162_, v___y_3163_);
return v___x_3165_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___boxed(lean_object* v_00_u03b1_3166_, lean_object* v_x_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_){
_start:
{
lean_object* v_res_3171_; 
v_res_3171_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0(v_00_u03b1_3166_, v_x_3167_, v___y_3168_, v___y_3169_);
lean_dec(v___y_3169_);
lean_dec_ref(v___y_3168_);
return v_res_3171_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2(lean_object* v_as_3172_, lean_object* v_as_x27_3173_, lean_object* v_b_3174_, lean_object* v_a_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_){
_start:
{
lean_object* v___x_3179_; 
v___x_3179_ = l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg(v_as_x27_3173_, v_b_3174_, v___y_3176_, v___y_3177_);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___boxed(lean_object* v_as_3180_, lean_object* v_as_x27_3181_, lean_object* v_b_3182_, lean_object* v_a_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_){
_start:
{
lean_object* v_res_3187_; 
v_res_3187_ = l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2(v_as_3180_, v_as_x27_3181_, v_b_3182_, v_a_3183_, v___y_3184_, v___y_3185_);
lean_dec(v___y_3185_);
lean_dec_ref(v___y_3184_);
lean_dec(v_as_x27_3181_);
lean_dec(v_as_3180_);
return v_res_3187_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3(lean_object* v_00_u03b1_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_){
_start:
{
lean_object* v___x_3192_; 
v___x_3192_ = l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg();
return v___x_3192_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b1_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_){
_start:
{
lean_object* v_res_3197_; 
v_res_3197_ = l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3(v_00_u03b1_3193_, v___y_3194_, v___y_3195_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
return v_res_3197_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0(lean_object* v_00_u03b1_3198_, lean_object* v_ex_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_){
_start:
{
lean_object* v___x_3203_; 
v___x_3203_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v_ex_3199_, v___y_3200_, v___y_3201_);
return v___x_3203_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3204_, lean_object* v_ex_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_){
_start:
{
lean_object* v_res_3209_; 
v_res_3209_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0(v_00_u03b1_3204_, v_ex_3205_, v___y_3206_, v___y_3207_);
lean_dec(v___y_3207_);
lean_dec_ref(v___y_3206_);
return v_res_3209_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_3210_, lean_object* v_msg_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_){
_start:
{
lean_object* v___x_3215_; 
v___x_3215_ = l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg(v_msg_3211_, v___y_3212_, v___y_3213_);
return v___x_3215_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_3216_, lean_object* v_msg_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_){
_start:
{
lean_object* v_res_3221_; 
v_res_3221_ = l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2(v_00_u03b1_3216_, v_msg_3217_, v___y_3218_, v___y_3219_);
lean_dec(v___y_3219_);
lean_dec_ref(v___y_3218_);
return v_res_3221_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; 
v___x_3222_ = lean_unsigned_to_nat(32u);
v___x_3223_ = lean_mk_empty_array_with_capacity(v___x_3222_);
v___x_3224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3224_, 0, v___x_3223_);
return v___x_3224_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; 
v___x_3225_ = ((size_t)5ULL);
v___x_3226_ = lean_unsigned_to_nat(0u);
v___x_3227_ = lean_unsigned_to_nat(32u);
v___x_3228_ = lean_mk_empty_array_with_capacity(v___x_3227_);
v___x_3229_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0);
v___x_3230_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3230_, 0, v___x_3229_);
lean_ctor_set(v___x_3230_, 1, v___x_3228_);
lean_ctor_set(v___x_3230_, 2, v___x_3226_);
lean_ctor_set(v___x_3230_, 3, v___x_3226_);
lean_ctor_set_usize(v___x_3230_, 4, v___x_3225_);
return v___x_3230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(lean_object* v___y_3231_){
_start:
{
lean_object* v___x_3233_; lean_object* v_traceState_3234_; lean_object* v_traces_3235_; lean_object* v___x_3236_; lean_object* v_traceState_3237_; lean_object* v_env_3238_; lean_object* v_nextMacroScope_3239_; lean_object* v_ngen_3240_; lean_object* v_auxDeclNGen_3241_; lean_object* v_cache_3242_; lean_object* v_recordedDeps_3243_; lean_object* v_messages_3244_; lean_object* v_infoState_3245_; lean_object* v_snapshotTasks_3246_; lean_object* v___x_3248_; uint8_t v_isShared_3249_; uint8_t v_isSharedCheck_3265_; 
v___x_3233_ = lean_st_ref_get(v___y_3231_);
v_traceState_3234_ = lean_ctor_get(v___x_3233_, 4);
lean_inc_ref(v_traceState_3234_);
lean_dec(v___x_3233_);
v_traces_3235_ = lean_ctor_get(v_traceState_3234_, 0);
lean_inc_ref(v_traces_3235_);
lean_dec_ref(v_traceState_3234_);
v___x_3236_ = lean_st_ref_take(v___y_3231_);
v_traceState_3237_ = lean_ctor_get(v___x_3236_, 4);
v_env_3238_ = lean_ctor_get(v___x_3236_, 0);
v_nextMacroScope_3239_ = lean_ctor_get(v___x_3236_, 1);
v_ngen_3240_ = lean_ctor_get(v___x_3236_, 2);
v_auxDeclNGen_3241_ = lean_ctor_get(v___x_3236_, 3);
v_cache_3242_ = lean_ctor_get(v___x_3236_, 5);
v_recordedDeps_3243_ = lean_ctor_get(v___x_3236_, 6);
v_messages_3244_ = lean_ctor_get(v___x_3236_, 7);
v_infoState_3245_ = lean_ctor_get(v___x_3236_, 8);
v_snapshotTasks_3246_ = lean_ctor_get(v___x_3236_, 9);
v_isSharedCheck_3265_ = !lean_is_exclusive(v___x_3236_);
if (v_isSharedCheck_3265_ == 0)
{
v___x_3248_ = v___x_3236_;
v_isShared_3249_ = v_isSharedCheck_3265_;
goto v_resetjp_3247_;
}
else
{
lean_inc(v_snapshotTasks_3246_);
lean_inc(v_infoState_3245_);
lean_inc(v_messages_3244_);
lean_inc(v_recordedDeps_3243_);
lean_inc(v_cache_3242_);
lean_inc(v_traceState_3237_);
lean_inc(v_auxDeclNGen_3241_);
lean_inc(v_ngen_3240_);
lean_inc(v_nextMacroScope_3239_);
lean_inc(v_env_3238_);
lean_dec(v___x_3236_);
v___x_3248_ = lean_box(0);
v_isShared_3249_ = v_isSharedCheck_3265_;
goto v_resetjp_3247_;
}
v_resetjp_3247_:
{
uint64_t v_tid_3250_; lean_object* v___x_3252_; uint8_t v_isShared_3253_; uint8_t v_isSharedCheck_3263_; 
v_tid_3250_ = lean_ctor_get_uint64(v_traceState_3237_, sizeof(void*)*1);
v_isSharedCheck_3263_ = !lean_is_exclusive(v_traceState_3237_);
if (v_isSharedCheck_3263_ == 0)
{
lean_object* v_unused_3264_; 
v_unused_3264_ = lean_ctor_get(v_traceState_3237_, 0);
lean_dec(v_unused_3264_);
v___x_3252_ = v_traceState_3237_;
v_isShared_3253_ = v_isSharedCheck_3263_;
goto v_resetjp_3251_;
}
else
{
lean_dec(v_traceState_3237_);
v___x_3252_ = lean_box(0);
v_isShared_3253_ = v_isSharedCheck_3263_;
goto v_resetjp_3251_;
}
v_resetjp_3251_:
{
lean_object* v___x_3254_; lean_object* v___x_3256_; 
v___x_3254_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1);
if (v_isShared_3253_ == 0)
{
lean_ctor_set(v___x_3252_, 0, v___x_3254_);
v___x_3256_ = v___x_3252_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3262_; 
v_reuseFailAlloc_3262_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3262_, 0, v___x_3254_);
lean_ctor_set_uint64(v_reuseFailAlloc_3262_, sizeof(void*)*1, v_tid_3250_);
v___x_3256_ = v_reuseFailAlloc_3262_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
lean_object* v___x_3258_; 
if (v_isShared_3249_ == 0)
{
lean_ctor_set(v___x_3248_, 4, v___x_3256_);
v___x_3258_ = v___x_3248_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v_env_3238_);
lean_ctor_set(v_reuseFailAlloc_3261_, 1, v_nextMacroScope_3239_);
lean_ctor_set(v_reuseFailAlloc_3261_, 2, v_ngen_3240_);
lean_ctor_set(v_reuseFailAlloc_3261_, 3, v_auxDeclNGen_3241_);
lean_ctor_set(v_reuseFailAlloc_3261_, 4, v___x_3256_);
lean_ctor_set(v_reuseFailAlloc_3261_, 5, v_cache_3242_);
lean_ctor_set(v_reuseFailAlloc_3261_, 6, v_recordedDeps_3243_);
lean_ctor_set(v_reuseFailAlloc_3261_, 7, v_messages_3244_);
lean_ctor_set(v_reuseFailAlloc_3261_, 8, v_infoState_3245_);
lean_ctor_set(v_reuseFailAlloc_3261_, 9, v_snapshotTasks_3246_);
v___x_3258_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
lean_object* v___x_3259_; lean_object* v___x_3260_; 
v___x_3259_ = lean_st_ref_put(v___y_3231_, v___x_3258_);
v___x_3260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3260_, 0, v_traces_3235_);
return v___x_3260_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___boxed(lean_object* v___y_3266_, lean_object* v___y_3267_){
_start:
{
lean_object* v_res_3268_; 
v_res_3268_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(v___y_3266_);
lean_dec(v___y_3266_);
return v_res_3268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1(lean_object* v___y_3269_, lean_object* v___y_3270_){
_start:
{
lean_object* v___x_3272_; 
v___x_3272_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(v___y_3270_);
return v___x_3272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___boxed(lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_){
_start:
{
lean_object* v_res_3276_; 
v_res_3276_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1(v___y_3273_, v___y_3274_);
lean_dec(v___y_3274_);
lean_dec_ref(v___y_3273_);
return v_res_3276_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg(lean_object* v_category_3277_, lean_object* v_opts_3278_, lean_object* v_act_3279_, lean_object* v_decl_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_){
_start:
{
lean_object* v___x_3284_; lean_object* v___x_3285_; 
lean_inc(v___y_3282_);
lean_inc_ref(v___y_3281_);
v___x_3284_ = lean_apply_2(v_act_3279_, v___y_3281_, v___y_3282_);
v___x_3285_ = l_Lean_profileitIOUnsafe___redArg(v_category_3277_, v_opts_3278_, v___x_3284_, v_decl_3280_);
return v___x_3285_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg___boxed(lean_object* v_category_3286_, lean_object* v_opts_3287_, lean_object* v_act_3288_, lean_object* v_decl_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_){
_start:
{
lean_object* v_res_3293_; 
v_res_3293_ = l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg(v_category_3286_, v_opts_3287_, v_act_3288_, v_decl_3289_, v___y_3290_, v___y_3291_);
lean_dec(v___y_3291_);
lean_dec_ref(v___y_3290_);
lean_dec_ref(v_opts_3287_);
lean_dec_ref(v_category_3286_);
return v_res_3293_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3(lean_object* v_00_u03b1_3294_, lean_object* v_category_3295_, lean_object* v_opts_3296_, lean_object* v_act_3297_, lean_object* v_decl_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_){
_start:
{
lean_object* v___x_3302_; 
v___x_3302_ = l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg(v_category_3295_, v_opts_3296_, v_act_3297_, v_decl_3298_, v___y_3299_, v___y_3300_);
return v___x_3302_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___boxed(lean_object* v_00_u03b1_3303_, lean_object* v_category_3304_, lean_object* v_opts_3305_, lean_object* v_act_3306_, lean_object* v_decl_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_){
_start:
{
lean_object* v_res_3311_; 
v_res_3311_ = l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3(v_00_u03b1_3303_, v_category_3304_, v_opts_3305_, v_act_3306_, v_decl_3307_, v___y_3308_, v___y_3309_);
lean_dec(v___y_3309_);
lean_dec_ref(v___y_3308_);
lean_dec_ref(v_opts_3305_);
lean_dec_ref(v_category_3304_);
return v_res_3311_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__0(lean_object* v_a_3312_, lean_object* v_a_3313_){
_start:
{
if (lean_obj_tag(v_a_3312_) == 0)
{
lean_object* v___x_3314_; 
v___x_3314_ = l_List_reverse___redArg(v_a_3313_);
return v___x_3314_;
}
else
{
lean_object* v_head_3315_; lean_object* v_tail_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3325_; 
v_head_3315_ = lean_ctor_get(v_a_3312_, 0);
v_tail_3316_ = lean_ctor_get(v_a_3312_, 1);
v_isSharedCheck_3325_ = !lean_is_exclusive(v_a_3312_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3318_ = v_a_3312_;
v_isShared_3319_ = v_isSharedCheck_3325_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_tail_3316_);
lean_inc(v_head_3315_);
lean_dec(v_a_3312_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3325_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v___x_3320_; lean_object* v___x_3322_; 
v___x_3320_ = l_Lean_MessageData_ofName(v_head_3315_);
if (v_isShared_3319_ == 0)
{
lean_ctor_set(v___x_3318_, 1, v_a_3313_);
lean_ctor_set(v___x_3318_, 0, v___x_3320_);
v___x_3322_ = v___x_3318_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v___x_3320_);
lean_ctor_set(v_reuseFailAlloc_3324_, 1, v_a_3313_);
v___x_3322_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
v_a_3312_ = v_tail_3316_;
v_a_3313_ = v___x_3322_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; 
v___x_3327_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__0));
v___x_3328_ = l_Lean_stringToMessageData(v___x_3327_);
return v___x_3328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0(lean_object* v_decl_3329_, lean_object* v_x_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_){
_start:
{
lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; 
v___x_3334_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1);
v___x_3335_ = l_Lean_Declaration_getTopLevelNames(v_decl_3329_);
v___x_3336_ = lean_box(0);
v___x_3337_ = l_List_mapTR_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__0(v___x_3335_, v___x_3336_);
v___x_3338_ = l_Lean_MessageData_ofList(v___x_3337_);
v___x_3339_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3334_);
lean_ctor_set(v___x_3339_, 1, v___x_3338_);
v___x_3340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3339_);
return v___x_3340_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___boxed(lean_object* v_decl_3341_, lean_object* v_x_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_){
_start:
{
lean_object* v_res_3346_; 
v_res_3346_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0(v_decl_3341_, v_x_3342_, v___y_3343_, v___y_3344_);
lean_dec(v___y_3344_);
lean_dec_ref(v___y_3343_);
lean_dec_ref(v_x_3342_);
return v_res_3346_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4(size_t v_sz_3347_, size_t v_i_3348_, lean_object* v_bs_3349_){
_start:
{
uint8_t v___x_3350_; 
v___x_3350_ = lean_usize_dec_lt(v_i_3348_, v_sz_3347_);
if (v___x_3350_ == 0)
{
return v_bs_3349_;
}
else
{
lean_object* v_v_3351_; lean_object* v_msg_3352_; lean_object* v___x_3353_; lean_object* v_bs_x27_3354_; size_t v___x_3355_; size_t v___x_3356_; lean_object* v___x_3357_; 
v_v_3351_ = lean_array_uget_borrowed(v_bs_3349_, v_i_3348_);
v_msg_3352_ = lean_ctor_get(v_v_3351_, 1);
lean_inc_ref(v_msg_3352_);
v___x_3353_ = lean_unsigned_to_nat(0u);
v_bs_x27_3354_ = lean_array_uset(v_bs_3349_, v_i_3348_, v___x_3353_);
v___x_3355_ = ((size_t)1ULL);
v___x_3356_ = lean_usize_add(v_i_3348_, v___x_3355_);
v___x_3357_ = lean_array_uset(v_bs_x27_3354_, v_i_3348_, v_msg_3352_);
v_i_3348_ = v___x_3356_;
v_bs_3349_ = v___x_3357_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4___boxed(lean_object* v_sz_3359_, lean_object* v_i_3360_, lean_object* v_bs_3361_){
_start:
{
size_t v_sz_boxed_3362_; size_t v_i_boxed_3363_; lean_object* v_res_3364_; 
v_sz_boxed_3362_ = lean_unbox_usize(v_sz_3359_);
lean_dec(v_sz_3359_);
v_i_boxed_3363_ = lean_unbox_usize(v_i_3360_);
lean_dec(v_i_3360_);
v_res_3364_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4(v_sz_boxed_3362_, v_i_boxed_3363_, v_bs_3361_);
return v_res_3364_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2(lean_object* v_oldTraces_3365_, lean_object* v_data_3366_, lean_object* v_ref_3367_, lean_object* v_msg_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_){
_start:
{
lean_object* v_toCold_3372_; lean_object* v_currRecDepth_3373_; lean_object* v_ref_3374_; uint16_t v_optionFlags_3375_; uint8_t v_suppressElabErrors_3376_; uint8_t v_isRecordingDeps_3377_; lean_object* v_ref_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v_traceState_3381_; lean_object* v_traces_3382_; lean_object* v___x_3383_; size_t v_sz_3384_; size_t v___x_3385_; lean_object* v___x_3386_; lean_object* v_msg_3387_; lean_object* v___x_3388_; lean_object* v_a_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3427_; 
v_toCold_3372_ = lean_ctor_get(v___y_3369_, 0);
v_currRecDepth_3373_ = lean_ctor_get(v___y_3369_, 1);
v_ref_3374_ = lean_ctor_get(v___y_3369_, 2);
v_optionFlags_3375_ = lean_ctor_get_uint16(v___y_3369_, sizeof(void*)*3);
v_suppressElabErrors_3376_ = lean_ctor_get_uint8(v___y_3369_, sizeof(void*)*3 + 2);
v_isRecordingDeps_3377_ = lean_ctor_get_uint8(v___y_3369_, sizeof(void*)*3 + 3);
v_ref_3378_ = l_Lean_replaceRef(v_ref_3367_, v_ref_3374_);
lean_inc(v_currRecDepth_3373_);
lean_inc_ref(v_toCold_3372_);
v___x_3379_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_3379_, 0, v_toCold_3372_);
lean_ctor_set(v___x_3379_, 1, v_currRecDepth_3373_);
lean_ctor_set(v___x_3379_, 2, v_ref_3378_);
lean_ctor_set_uint16(v___x_3379_, sizeof(void*)*3, v_optionFlags_3375_);
lean_ctor_set_uint8(v___x_3379_, sizeof(void*)*3 + 2, v_suppressElabErrors_3376_);
lean_ctor_set_uint8(v___x_3379_, sizeof(void*)*3 + 3, v_isRecordingDeps_3377_);
v___x_3380_ = lean_st_ref_get(v___y_3370_);
v_traceState_3381_ = lean_ctor_get(v___x_3380_, 4);
lean_inc_ref(v_traceState_3381_);
lean_dec(v___x_3380_);
v_traces_3382_ = lean_ctor_get(v_traceState_3381_, 0);
lean_inc_ref(v_traces_3382_);
lean_dec_ref(v_traceState_3381_);
v___x_3383_ = l_Lean_PersistentArray_toArray___redArg(v_traces_3382_);
lean_dec_ref(v_traces_3382_);
v_sz_3384_ = lean_array_size(v___x_3383_);
v___x_3385_ = ((size_t)0ULL);
v___x_3386_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4(v_sz_3384_, v___x_3385_, v___x_3383_);
v_msg_3387_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_3387_, 0, v_data_3366_);
lean_ctor_set(v_msg_3387_, 1, v_msg_3368_);
lean_ctor_set(v_msg_3387_, 2, v___x_3386_);
v___x_3388_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(v_msg_3387_, v___x_3379_, v___y_3370_);
lean_dec_ref_known(v___x_3379_, 3);
v_a_3389_ = lean_ctor_get(v___x_3388_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3388_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3391_ = v___x_3388_;
v_isShared_3392_ = v_isSharedCheck_3427_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_a_3389_);
lean_dec(v___x_3388_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3427_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3393_; lean_object* v_traceState_3394_; lean_object* v_env_3395_; lean_object* v_nextMacroScope_3396_; lean_object* v_ngen_3397_; lean_object* v_auxDeclNGen_3398_; lean_object* v_cache_3399_; lean_object* v_recordedDeps_3400_; lean_object* v_messages_3401_; lean_object* v_infoState_3402_; lean_object* v_snapshotTasks_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3426_; 
v___x_3393_ = lean_st_ref_take(v___y_3370_);
v_traceState_3394_ = lean_ctor_get(v___x_3393_, 4);
v_env_3395_ = lean_ctor_get(v___x_3393_, 0);
v_nextMacroScope_3396_ = lean_ctor_get(v___x_3393_, 1);
v_ngen_3397_ = lean_ctor_get(v___x_3393_, 2);
v_auxDeclNGen_3398_ = lean_ctor_get(v___x_3393_, 3);
v_cache_3399_ = lean_ctor_get(v___x_3393_, 5);
v_recordedDeps_3400_ = lean_ctor_get(v___x_3393_, 6);
v_messages_3401_ = lean_ctor_get(v___x_3393_, 7);
v_infoState_3402_ = lean_ctor_get(v___x_3393_, 8);
v_snapshotTasks_3403_ = lean_ctor_get(v___x_3393_, 9);
v_isSharedCheck_3426_ = !lean_is_exclusive(v___x_3393_);
if (v_isSharedCheck_3426_ == 0)
{
v___x_3405_ = v___x_3393_;
v_isShared_3406_ = v_isSharedCheck_3426_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_snapshotTasks_3403_);
lean_inc(v_infoState_3402_);
lean_inc(v_messages_3401_);
lean_inc(v_recordedDeps_3400_);
lean_inc(v_cache_3399_);
lean_inc(v_traceState_3394_);
lean_inc(v_auxDeclNGen_3398_);
lean_inc(v_ngen_3397_);
lean_inc(v_nextMacroScope_3396_);
lean_inc(v_env_3395_);
lean_dec(v___x_3393_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3426_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
uint64_t v_tid_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3424_; 
v_tid_3407_ = lean_ctor_get_uint64(v_traceState_3394_, sizeof(void*)*1);
v_isSharedCheck_3424_ = !lean_is_exclusive(v_traceState_3394_);
if (v_isSharedCheck_3424_ == 0)
{
lean_object* v_unused_3425_; 
v_unused_3425_ = lean_ctor_get(v_traceState_3394_, 0);
lean_dec(v_unused_3425_);
v___x_3409_ = v_traceState_3394_;
v_isShared_3410_ = v_isSharedCheck_3424_;
goto v_resetjp_3408_;
}
else
{
lean_dec(v_traceState_3394_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3424_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3415_; 
v___x_3411_ = lean_box(0);
v___x_3412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3412_, 0, v_ref_3367_);
lean_ctor_set(v___x_3412_, 1, v_a_3389_);
v___x_3413_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_3365_, v___x_3412_);
if (v_isShared_3410_ == 0)
{
lean_ctor_set(v___x_3409_, 0, v___x_3413_);
v___x_3415_ = v___x_3409_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3423_; 
v_reuseFailAlloc_3423_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3423_, 0, v___x_3413_);
lean_ctor_set_uint64(v_reuseFailAlloc_3423_, sizeof(void*)*1, v_tid_3407_);
v___x_3415_ = v_reuseFailAlloc_3423_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
lean_object* v___x_3417_; 
if (v_isShared_3406_ == 0)
{
lean_ctor_set(v___x_3405_, 4, v___x_3415_);
v___x_3417_ = v___x_3405_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3422_; 
v_reuseFailAlloc_3422_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3422_, 0, v_env_3395_);
lean_ctor_set(v_reuseFailAlloc_3422_, 1, v_nextMacroScope_3396_);
lean_ctor_set(v_reuseFailAlloc_3422_, 2, v_ngen_3397_);
lean_ctor_set(v_reuseFailAlloc_3422_, 3, v_auxDeclNGen_3398_);
lean_ctor_set(v_reuseFailAlloc_3422_, 4, v___x_3415_);
lean_ctor_set(v_reuseFailAlloc_3422_, 5, v_cache_3399_);
lean_ctor_set(v_reuseFailAlloc_3422_, 6, v_recordedDeps_3400_);
lean_ctor_set(v_reuseFailAlloc_3422_, 7, v_messages_3401_);
lean_ctor_set(v_reuseFailAlloc_3422_, 8, v_infoState_3402_);
lean_ctor_set(v_reuseFailAlloc_3422_, 9, v_snapshotTasks_3403_);
v___x_3417_ = v_reuseFailAlloc_3422_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
lean_object* v___x_3418_; lean_object* v___x_3420_; 
v___x_3418_ = lean_st_ref_put(v___y_3370_, v___x_3417_);
if (v_isShared_3392_ == 0)
{
lean_ctor_set(v___x_3391_, 0, v___x_3411_);
v___x_3420_ = v___x_3391_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v___x_3411_);
v___x_3420_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
return v___x_3420_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2___boxed(lean_object* v_oldTraces_3428_, lean_object* v_data_3429_, lean_object* v_ref_3430_, lean_object* v_msg_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_){
_start:
{
lean_object* v_res_3435_; 
v_res_3435_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2(v_oldTraces_3428_, v_data_3429_, v_ref_3430_, v_msg_3431_, v___y_3432_, v___y_3433_);
lean_dec(v___y_3433_);
lean_dec_ref(v___y_3432_);
return v_res_3435_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(lean_object* v_x_3436_){
_start:
{
if (lean_obj_tag(v_x_3436_) == 0)
{
lean_object* v_a_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3445_; 
v_a_3438_ = lean_ctor_get(v_x_3436_, 0);
v_isSharedCheck_3445_ = !lean_is_exclusive(v_x_3436_);
if (v_isSharedCheck_3445_ == 0)
{
v___x_3440_ = v_x_3436_;
v_isShared_3441_ = v_isSharedCheck_3445_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_a_3438_);
lean_dec(v_x_3436_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3445_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v___x_3443_; 
if (v_isShared_3441_ == 0)
{
lean_ctor_set_tag(v___x_3440_, 1);
v___x_3443_ = v___x_3440_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3444_; 
v_reuseFailAlloc_3444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3444_, 0, v_a_3438_);
v___x_3443_ = v_reuseFailAlloc_3444_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
return v___x_3443_;
}
}
}
else
{
lean_object* v_a_3446_; lean_object* v___x_3448_; uint8_t v_isShared_3449_; uint8_t v_isSharedCheck_3453_; 
v_a_3446_ = lean_ctor_get(v_x_3436_, 0);
v_isSharedCheck_3453_ = !lean_is_exclusive(v_x_3436_);
if (v_isSharedCheck_3453_ == 0)
{
v___x_3448_ = v_x_3436_;
v_isShared_3449_ = v_isSharedCheck_3453_;
goto v_resetjp_3447_;
}
else
{
lean_inc(v_a_3446_);
lean_dec(v_x_3436_);
v___x_3448_ = lean_box(0);
v_isShared_3449_ = v_isSharedCheck_3453_;
goto v_resetjp_3447_;
}
v_resetjp_3447_:
{
lean_object* v___x_3451_; 
if (v_isShared_3449_ == 0)
{
lean_ctor_set_tag(v___x_3448_, 0);
v___x_3451_ = v___x_3448_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v_a_3446_);
v___x_3451_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
return v___x_3451_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg___boxed(lean_object* v_x_3454_, lean_object* v___y_3455_){
_start:
{
lean_object* v_res_3456_; 
v_res_3456_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(v_x_3454_);
return v_res_3456_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4(lean_object* v_e_3457_){
_start:
{
if (lean_obj_tag(v_e_3457_) == 0)
{
uint8_t v___x_3458_; 
v___x_3458_ = 2;
return v___x_3458_;
}
else
{
uint8_t v___x_3459_; 
v___x_3459_ = 0;
return v___x_3459_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4___boxed(lean_object* v_e_3460_){
_start:
{
uint8_t v_res_3461_; lean_object* v_r_3462_; 
v_res_3461_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4(v_e_3460_);
lean_dec_ref(v_e_3460_);
v_r_3462_ = lean_box(v_res_3461_);
return v_r_3462_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0(void){
_start:
{
lean_object* v___x_3463_; double v___x_3464_; 
v___x_3463_ = lean_unsigned_to_nat(0u);
v___x_3464_ = lean_float_of_nat(v___x_3463_);
return v___x_3464_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2(void){
_start:
{
lean_object* v___x_3466_; lean_object* v___x_3467_; 
v___x_3466_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__1));
v___x_3467_ = l_Lean_stringToMessageData(v___x_3466_);
return v___x_3467_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3(void){
_start:
{
lean_object* v___x_3468_; double v___x_3469_; 
v___x_3468_ = lean_unsigned_to_nat(1000u);
v___x_3469_ = lean_float_of_nat(v___x_3468_);
return v___x_3469_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(lean_object* v_cls_3470_, uint8_t v_collapsed_3471_, lean_object* v_tag_3472_, lean_object* v_opts_3473_, uint8_t v_clsEnabled_3474_, lean_object* v_oldTraces_3475_, lean_object* v_msg_3476_, lean_object* v_resStartStop_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_){
_start:
{
lean_object* v_fst_3481_; lean_object* v_snd_3482_; lean_object* v___y_3484_; lean_object* v___y_3485_; lean_object* v_data_3486_; lean_object* v_fst_3489_; lean_object* v_snd_3490_; lean_object* v___x_3491_; uint8_t v___x_3492_; lean_object* v___y_3494_; lean_object* v_a_3495_; uint8_t v___y_3510_; double v___y_3542_; 
v_fst_3481_ = lean_ctor_get(v_resStartStop_3477_, 0);
lean_inc(v_fst_3481_);
v_snd_3482_ = lean_ctor_get(v_resStartStop_3477_, 1);
lean_inc(v_snd_3482_);
lean_dec_ref(v_resStartStop_3477_);
v_fst_3489_ = lean_ctor_get(v_snd_3482_, 0);
lean_inc(v_fst_3489_);
v_snd_3490_ = lean_ctor_get(v_snd_3482_, 1);
lean_inc(v_snd_3490_);
lean_dec(v_snd_3482_);
v___x_3491_ = l_Lean_trace_profiler;
v___x_3492_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_opts_3473_, v___x_3491_);
if (v___x_3492_ == 0)
{
v___y_3510_ = v___x_3492_;
goto v___jp_3509_;
}
else
{
lean_object* v___x_3547_; uint8_t v___x_3548_; 
v___x_3547_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3548_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_opts_3473_, v___x_3547_);
if (v___x_3548_ == 0)
{
lean_object* v___x_3549_; lean_object* v___x_3550_; double v___x_3551_; double v___x_3552_; double v___x_3553_; 
v___x_3549_ = l_Lean_trace_profiler_threshold;
v___x_3550_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(v_opts_3473_, v___x_3549_);
v___x_3551_ = lean_float_of_nat(v___x_3550_);
v___x_3552_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3);
v___x_3553_ = lean_float_div(v___x_3551_, v___x_3552_);
v___y_3542_ = v___x_3553_;
goto v___jp_3541_;
}
else
{
lean_object* v___x_3554_; lean_object* v___x_3555_; double v___x_3556_; 
v___x_3554_ = l_Lean_trace_profiler_threshold;
v___x_3555_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(v_opts_3473_, v___x_3554_);
v___x_3556_ = lean_float_of_nat(v___x_3555_);
v___y_3542_ = v___x_3556_;
goto v___jp_3541_;
}
}
v___jp_3483_:
{
lean_object* v___x_3487_; 
lean_inc(v___y_3484_);
v___x_3487_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2(v_oldTraces_3475_, v_data_3486_, v___y_3484_, v___y_3485_, v___y_3478_, v___y_3479_);
if (lean_obj_tag(v___x_3487_) == 0)
{
lean_object* v___x_3488_; 
lean_dec_ref_known(v___x_3487_, 1);
v___x_3488_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(v_fst_3481_);
return v___x_3488_;
}
else
{
lean_dec(v_fst_3481_);
return v___x_3487_;
}
}
v___jp_3493_:
{
uint8_t v_result_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; double v___x_3499_; lean_object* v_data_3500_; 
v_result_3496_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4(v_fst_3481_);
v___x_3497_ = lean_box(v_result_3496_);
v___x_3498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3498_, 0, v___x_3497_);
v___x_3499_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0);
lean_inc_ref(v_tag_3472_);
lean_inc_ref(v___x_3498_);
lean_inc(v_cls_3470_);
v_data_3500_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3500_, 0, v_cls_3470_);
lean_ctor_set(v_data_3500_, 1, v___x_3498_);
lean_ctor_set(v_data_3500_, 2, v_tag_3472_);
lean_ctor_set_float(v_data_3500_, sizeof(void*)*3, v___x_3499_);
lean_ctor_set_float(v_data_3500_, sizeof(void*)*3 + 8, v___x_3499_);
lean_ctor_set_uint8(v_data_3500_, sizeof(void*)*3 + 16, v_collapsed_3471_);
if (v___x_3492_ == 0)
{
lean_dec_ref_known(v___x_3498_, 1);
lean_dec(v_snd_3490_);
lean_dec(v_fst_3489_);
lean_dec_ref(v_tag_3472_);
lean_dec(v_cls_3470_);
v___y_3484_ = v___y_3494_;
v___y_3485_ = v_a_3495_;
v_data_3486_ = v_data_3500_;
goto v___jp_3483_;
}
else
{
lean_object* v_data_3501_; double v___x_3502_; double v___x_3503_; 
lean_dec_ref_known(v_data_3500_, 3);
v_data_3501_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3501_, 0, v_cls_3470_);
lean_ctor_set(v_data_3501_, 1, v___x_3498_);
lean_ctor_set(v_data_3501_, 2, v_tag_3472_);
v___x_3502_ = lean_unbox_float(v_fst_3489_);
lean_dec(v_fst_3489_);
lean_ctor_set_float(v_data_3501_, sizeof(void*)*3, v___x_3502_);
v___x_3503_ = lean_unbox_float(v_snd_3490_);
lean_dec(v_snd_3490_);
lean_ctor_set_float(v_data_3501_, sizeof(void*)*3 + 8, v___x_3503_);
lean_ctor_set_uint8(v_data_3501_, sizeof(void*)*3 + 16, v_collapsed_3471_);
v___y_3484_ = v___y_3494_;
v___y_3485_ = v_a_3495_;
v_data_3486_ = v_data_3501_;
goto v___jp_3483_;
}
}
v___jp_3504_:
{
lean_object* v_ref_3505_; lean_object* v___x_3506_; 
v_ref_3505_ = lean_ctor_get(v___y_3478_, 2);
lean_inc(v___y_3479_);
lean_inc_ref(v___y_3478_);
lean_inc(v_fst_3481_);
v___x_3506_ = lean_apply_4(v_msg_3476_, v_fst_3481_, v___y_3478_, v___y_3479_, lean_box(0));
if (lean_obj_tag(v___x_3506_) == 0)
{
lean_object* v_a_3507_; 
v_a_3507_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_a_3507_);
lean_dec_ref_known(v___x_3506_, 1);
v___y_3494_ = v_ref_3505_;
v_a_3495_ = v_a_3507_;
goto v___jp_3493_;
}
else
{
lean_object* v___x_3508_; 
lean_dec_ref_known(v___x_3506_, 1);
v___x_3508_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2);
v___y_3494_ = v_ref_3505_;
v_a_3495_ = v___x_3508_;
goto v___jp_3493_;
}
}
v___jp_3509_:
{
if (v_clsEnabled_3474_ == 0)
{
if (v___y_3510_ == 0)
{
lean_object* v___x_3511_; lean_object* v_traceState_3512_; lean_object* v_env_3513_; lean_object* v_nextMacroScope_3514_; lean_object* v_ngen_3515_; lean_object* v_auxDeclNGen_3516_; lean_object* v_cache_3517_; lean_object* v_recordedDeps_3518_; lean_object* v_messages_3519_; lean_object* v_infoState_3520_; lean_object* v_snapshotTasks_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3540_; 
lean_dec(v_snd_3490_);
lean_dec(v_fst_3489_);
lean_dec_ref(v_msg_3476_);
lean_dec_ref(v_tag_3472_);
lean_dec(v_cls_3470_);
v___x_3511_ = lean_st_ref_take(v___y_3479_);
v_traceState_3512_ = lean_ctor_get(v___x_3511_, 4);
v_env_3513_ = lean_ctor_get(v___x_3511_, 0);
v_nextMacroScope_3514_ = lean_ctor_get(v___x_3511_, 1);
v_ngen_3515_ = lean_ctor_get(v___x_3511_, 2);
v_auxDeclNGen_3516_ = lean_ctor_get(v___x_3511_, 3);
v_cache_3517_ = lean_ctor_get(v___x_3511_, 5);
v_recordedDeps_3518_ = lean_ctor_get(v___x_3511_, 6);
v_messages_3519_ = lean_ctor_get(v___x_3511_, 7);
v_infoState_3520_ = lean_ctor_get(v___x_3511_, 8);
v_snapshotTasks_3521_ = lean_ctor_get(v___x_3511_, 9);
v_isSharedCheck_3540_ = !lean_is_exclusive(v___x_3511_);
if (v_isSharedCheck_3540_ == 0)
{
v___x_3523_ = v___x_3511_;
v_isShared_3524_ = v_isSharedCheck_3540_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_snapshotTasks_3521_);
lean_inc(v_infoState_3520_);
lean_inc(v_messages_3519_);
lean_inc(v_recordedDeps_3518_);
lean_inc(v_cache_3517_);
lean_inc(v_traceState_3512_);
lean_inc(v_auxDeclNGen_3516_);
lean_inc(v_ngen_3515_);
lean_inc(v_nextMacroScope_3514_);
lean_inc(v_env_3513_);
lean_dec(v___x_3511_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3540_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
uint64_t v_tid_3525_; lean_object* v_traces_3526_; lean_object* v___x_3528_; uint8_t v_isShared_3529_; uint8_t v_isSharedCheck_3539_; 
v_tid_3525_ = lean_ctor_get_uint64(v_traceState_3512_, sizeof(void*)*1);
v_traces_3526_ = lean_ctor_get(v_traceState_3512_, 0);
v_isSharedCheck_3539_ = !lean_is_exclusive(v_traceState_3512_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3528_ = v_traceState_3512_;
v_isShared_3529_ = v_isSharedCheck_3539_;
goto v_resetjp_3527_;
}
else
{
lean_inc(v_traces_3526_);
lean_dec(v_traceState_3512_);
v___x_3528_ = lean_box(0);
v_isShared_3529_ = v_isSharedCheck_3539_;
goto v_resetjp_3527_;
}
v_resetjp_3527_:
{
lean_object* v___x_3530_; lean_object* v___x_3532_; 
v___x_3530_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_3475_, v_traces_3526_);
lean_dec_ref(v_traces_3526_);
if (v_isShared_3529_ == 0)
{
lean_ctor_set(v___x_3528_, 0, v___x_3530_);
v___x_3532_ = v___x_3528_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v___x_3530_);
lean_ctor_set_uint64(v_reuseFailAlloc_3538_, sizeof(void*)*1, v_tid_3525_);
v___x_3532_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
lean_object* v___x_3534_; 
if (v_isShared_3524_ == 0)
{
lean_ctor_set(v___x_3523_, 4, v___x_3532_);
v___x_3534_ = v___x_3523_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v_env_3513_);
lean_ctor_set(v_reuseFailAlloc_3537_, 1, v_nextMacroScope_3514_);
lean_ctor_set(v_reuseFailAlloc_3537_, 2, v_ngen_3515_);
lean_ctor_set(v_reuseFailAlloc_3537_, 3, v_auxDeclNGen_3516_);
lean_ctor_set(v_reuseFailAlloc_3537_, 4, v___x_3532_);
lean_ctor_set(v_reuseFailAlloc_3537_, 5, v_cache_3517_);
lean_ctor_set(v_reuseFailAlloc_3537_, 6, v_recordedDeps_3518_);
lean_ctor_set(v_reuseFailAlloc_3537_, 7, v_messages_3519_);
lean_ctor_set(v_reuseFailAlloc_3537_, 8, v_infoState_3520_);
lean_ctor_set(v_reuseFailAlloc_3537_, 9, v_snapshotTasks_3521_);
v___x_3534_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; 
v___x_3535_ = lean_st_ref_put(v___y_3479_, v___x_3534_);
v___x_3536_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(v_fst_3481_);
return v___x_3536_;
}
}
}
}
}
else
{
goto v___jp_3504_;
}
}
else
{
goto v___jp_3504_;
}
}
v___jp_3541_:
{
double v___x_3543_; double v___x_3544_; double v___x_3545_; uint8_t v___x_3546_; 
v___x_3543_ = lean_unbox_float(v_snd_3490_);
v___x_3544_ = lean_unbox_float(v_fst_3489_);
v___x_3545_ = lean_float_sub(v___x_3543_, v___x_3544_);
v___x_3546_ = lean_float_decLt(v___y_3542_, v___x_3545_);
v___y_3510_ = v___x_3546_;
goto v___jp_3509_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___boxed(lean_object* v_cls_3557_, lean_object* v_collapsed_3558_, lean_object* v_tag_3559_, lean_object* v_opts_3560_, lean_object* v_clsEnabled_3561_, lean_object* v_oldTraces_3562_, lean_object* v_msg_3563_, lean_object* v_resStartStop_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_){
_start:
{
uint8_t v_collapsed_boxed_3568_; uint8_t v_clsEnabled_boxed_3569_; lean_object* v_res_3570_; 
v_collapsed_boxed_3568_ = lean_unbox(v_collapsed_3558_);
v_clsEnabled_boxed_3569_ = lean_unbox(v_clsEnabled_3561_);
v_res_3570_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(v_cls_3557_, v_collapsed_boxed_3568_, v_tag_3559_, v_opts_3560_, v_clsEnabled_boxed_3569_, v_oldTraces_3562_, v_msg_3563_, v_resStartStop_3564_, v___y_3565_, v___y_3566_);
lean_dec(v___y_3566_);
lean_dec_ref(v___y_3565_);
lean_dec_ref(v_opts_3560_);
return v_res_3570_;
}
}
static double _init_l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3573_; double v___x_3574_; 
v___x_3573_ = lean_unsigned_to_nat(1000000000u);
v___x_3574_ = lean_float_of_nat(v___x_3573_);
return v___x_3574_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1(lean_object* v_decl_3575_, uint8_t v_forceExpose_3576_, lean_object* v___x_3577_, uint8_t v___x_3578_, lean_object* v___x_3579_, lean_object* v___f_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_){
_start:
{
lean_object* v___y_3585_; lean_object* v___y_3586_; uint8_t v___y_3587_; lean_object* v___y_3598_; lean_object* v_a_3599_; lean_object* v___y_3603_; lean_object* v___y_3606_; lean_object* v___y_3607_; uint8_t v___y_3608_; lean_object* v___y_3619_; lean_object* v_a_3620_; lean_object* v___y_3624_; lean_object* v_toCold_3626_; lean_object* v_options_3627_; uint8_t v_hasTrace_3628_; 
v_toCold_3626_ = lean_ctor_get(v___y_3581_, 0);
v_options_3627_ = lean_ctor_get(v_toCold_3626_, 2);
v_hasTrace_3628_ = lean_ctor_get_uint8(v_options_3627_, sizeof(void*)*1);
if (v_hasTrace_3628_ == 0)
{
lean_object* v_cancelTk_x3f_3629_; lean_object* v___x_3630_; 
lean_dec_ref(v___f_3580_);
lean_dec_ref(v___x_3579_);
lean_dec(v___x_3577_);
v_cancelTk_x3f_3629_ = lean_ctor_get(v_toCold_3626_, 10);
lean_inc(v_decl_3575_);
v___x_3630_ = l_Lean_warnIfUsesSorry(v_decl_3575_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3630_) == 0)
{
lean_object* v___x_3631_; 
lean_dec_ref_known(v___x_3630_, 1);
lean_inc(v_decl_3575_);
v___x_3631_ = l_Lean_checkSmartCasts(v_decl_3575_, v_forceExpose_3576_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3631_) == 0)
{
lean_object* v___x_3632_; lean_object* v_env_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
lean_dec_ref_known(v___x_3631_, 1);
v___x_3632_ = lean_st_ref_get(v___y_3582_);
v_env_3633_ = lean_ctor_get(v___x_3632_, 0);
lean_inc_ref(v_env_3633_);
lean_dec(v___x_3632_);
v___x_3634_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3581_);
v___x_3635_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_3633_, v___x_3634_, v_decl_3575_, v_cancelTk_x3f_3629_);
lean_dec_ref(v___x_3634_);
v___x_3636_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_3635_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; lean_object* v___x_3638_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_a_3637_);
lean_dec_ref_known(v___x_3636_, 1);
v___x_3638_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_3637_, v___y_3582_);
v___y_3624_ = v___x_3638_;
goto v___jp_3623_;
}
else
{
lean_object* v_a_3639_; lean_object* v___x_3641_; uint8_t v_isShared_3642_; uint8_t v_isSharedCheck_3646_; 
v_a_3639_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3646_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3646_ == 0)
{
v___x_3641_ = v___x_3636_;
v_isShared_3642_ = v_isSharedCheck_3646_;
goto v_resetjp_3640_;
}
else
{
lean_inc(v_a_3639_);
lean_dec(v___x_3636_);
v___x_3641_ = lean_box(0);
v_isShared_3642_ = v_isSharedCheck_3646_;
goto v_resetjp_3640_;
}
v_resetjp_3640_:
{
lean_object* v___x_3644_; 
lean_inc(v_a_3639_);
if (v_isShared_3642_ == 0)
{
v___x_3644_ = v___x_3641_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3645_; 
v_reuseFailAlloc_3645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3645_, 0, v_a_3639_);
v___x_3644_ = v_reuseFailAlloc_3645_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
v___y_3619_ = v___x_3644_;
v_a_3620_ = v_a_3639_;
goto v___jp_3618_;
}
}
}
}
else
{
v___y_3624_ = v___x_3631_;
goto v___jp_3623_;
}
}
else
{
lean_dec(v_decl_3575_);
return v___x_3630_;
}
}
else
{
lean_object* v_cancelTk_x3f_3647_; lean_object* v_inheritedTraceOptions_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; uint8_t v___x_3651_; lean_object* v___y_3653_; lean_object* v___y_3654_; lean_object* v_a_3655_; lean_object* v___y_3668_; lean_object* v___y_3669_; lean_object* v_a_3670_; lean_object* v___y_3673_; lean_object* v___y_3674_; lean_object* v_a_3675_; lean_object* v___y_3678_; lean_object* v___y_3679_; lean_object* v___y_3680_; lean_object* v___y_3684_; lean_object* v___y_3685_; lean_object* v___y_3686_; uint8_t v___y_3687_; lean_object* v___y_3690_; lean_object* v___y_3691_; lean_object* v_a_3692_; lean_object* v___y_3696_; lean_object* v___y_3697_; lean_object* v___y_3698_; lean_object* v___y_3702_; lean_object* v___y_3703_; lean_object* v_a_3704_; lean_object* v___y_3714_; lean_object* v___y_3715_; lean_object* v_a_3716_; lean_object* v___y_3719_; lean_object* v___y_3720_; lean_object* v_a_3721_; lean_object* v___y_3724_; lean_object* v___y_3725_; lean_object* v___y_3726_; lean_object* v___y_3730_; lean_object* v___y_3731_; lean_object* v___y_3732_; uint8_t v___y_3733_; lean_object* v___y_3736_; lean_object* v___y_3737_; lean_object* v_a_3738_; lean_object* v___y_3742_; lean_object* v___y_3743_; lean_object* v___y_3744_; 
v_cancelTk_x3f_3647_ = lean_ctor_get(v_toCold_3626_, 10);
v_inheritedTraceOptions_3648_ = lean_ctor_get(v_toCold_3626_, 11);
v___x_3649_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v___x_3577_);
v___x_3650_ = l_Lean_Name_append(v___x_3649_, v___x_3577_);
v___x_3651_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3648_, v_options_3627_, v___x_3650_);
lean_dec(v___x_3650_);
if (v___x_3651_ == 0)
{
lean_object* v___x_3774_; uint8_t v___x_3775_; 
v___x_3774_ = l_Lean_trace_profiler;
v___x_3775_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_3627_, v___x_3774_);
if (v___x_3775_ == 0)
{
lean_object* v___x_3776_; 
lean_dec_ref(v___f_3580_);
lean_dec_ref(v___x_3579_);
lean_dec(v___x_3577_);
lean_inc(v_decl_3575_);
v___x_3776_ = l_Lean_warnIfUsesSorry(v_decl_3575_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3776_) == 0)
{
lean_object* v___x_3777_; 
lean_dec_ref_known(v___x_3776_, 1);
lean_inc(v_decl_3575_);
v___x_3777_ = l_Lean_checkSmartCasts(v_decl_3575_, v_forceExpose_3576_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3777_) == 0)
{
lean_object* v___x_3778_; lean_object* v_env_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; 
lean_dec_ref_known(v___x_3777_, 1);
v___x_3778_ = lean_st_ref_get(v___y_3582_);
v_env_3779_ = lean_ctor_get(v___x_3778_, 0);
lean_inc_ref(v_env_3779_);
lean_dec(v___x_3778_);
v___x_3780_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3581_);
v___x_3781_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_3779_, v___x_3780_, v_decl_3575_, v_cancelTk_x3f_3647_);
lean_dec_ref(v___x_3780_);
v___x_3782_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_3781_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3782_) == 0)
{
lean_object* v_a_3783_; lean_object* v___x_3784_; 
v_a_3783_ = lean_ctor_get(v___x_3782_, 0);
lean_inc(v_a_3783_);
lean_dec_ref_known(v___x_3782_, 1);
v___x_3784_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_3783_, v___y_3582_);
v___y_3603_ = v___x_3784_;
goto v___jp_3602_;
}
else
{
lean_object* v_a_3785_; lean_object* v___x_3787_; uint8_t v_isShared_3788_; uint8_t v_isSharedCheck_3792_; 
v_a_3785_ = lean_ctor_get(v___x_3782_, 0);
v_isSharedCheck_3792_ = !lean_is_exclusive(v___x_3782_);
if (v_isSharedCheck_3792_ == 0)
{
v___x_3787_ = v___x_3782_;
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
else
{
lean_inc(v_a_3785_);
lean_dec(v___x_3782_);
v___x_3787_ = lean_box(0);
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
v_resetjp_3786_:
{
lean_object* v___x_3790_; 
lean_inc(v_a_3785_);
if (v_isShared_3788_ == 0)
{
v___x_3790_ = v___x_3787_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3791_; 
v_reuseFailAlloc_3791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3791_, 0, v_a_3785_);
v___x_3790_ = v_reuseFailAlloc_3791_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
v___y_3598_ = v___x_3790_;
v_a_3599_ = v_a_3785_;
goto v___jp_3597_;
}
}
}
}
else
{
v___y_3603_ = v___x_3777_;
goto v___jp_3602_;
}
}
else
{
lean_dec(v_decl_3575_);
return v___x_3776_;
}
}
else
{
goto v___jp_3747_;
}
}
else
{
goto v___jp_3747_;
}
v___jp_3652_:
{
lean_object* v___x_3656_; double v___x_3657_; double v___x_3658_; double v___x_3659_; double v___x_3660_; double v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; 
v___x_3656_ = lean_io_mono_nanos_now();
v___x_3657_ = lean_float_of_nat(v___y_3653_);
v___x_3658_ = lean_float_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1);
v___x_3659_ = lean_float_div(v___x_3657_, v___x_3658_);
v___x_3660_ = lean_float_of_nat(v___x_3656_);
v___x_3661_ = lean_float_div(v___x_3660_, v___x_3658_);
v___x_3662_ = lean_box_float(v___x_3659_);
v___x_3663_ = lean_box_float(v___x_3661_);
v___x_3664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3664_, 0, v___x_3662_);
lean_ctor_set(v___x_3664_, 1, v___x_3663_);
v___x_3665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3665_, 0, v_a_3655_);
lean_ctor_set(v___x_3665_, 1, v___x_3664_);
v___x_3666_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(v___x_3577_, v___x_3578_, v___x_3579_, v_options_3627_, v___x_3651_, v___y_3654_, v___f_3580_, v___x_3665_, v___y_3581_, v___y_3582_);
return v___x_3666_;
}
v___jp_3667_:
{
lean_object* v___x_3671_; 
v___x_3671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3671_, 0, v_a_3670_);
v___y_3653_ = v___y_3668_;
v___y_3654_ = v___y_3669_;
v_a_3655_ = v___x_3671_;
goto v___jp_3652_;
}
v___jp_3672_:
{
lean_object* v___x_3676_; 
v___x_3676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3676_, 0, v_a_3675_);
v___y_3653_ = v___y_3673_;
v___y_3654_ = v___y_3674_;
v_a_3655_ = v___x_3676_;
goto v___jp_3652_;
}
v___jp_3677_:
{
if (lean_obj_tag(v___y_3680_) == 0)
{
lean_object* v_a_3681_; 
v_a_3681_ = lean_ctor_get(v___y_3680_, 0);
lean_inc(v_a_3681_);
lean_dec_ref_known(v___y_3680_, 1);
v___y_3673_ = v___y_3678_;
v___y_3674_ = v___y_3679_;
v_a_3675_ = v_a_3681_;
goto v___jp_3672_;
}
else
{
lean_object* v_a_3682_; 
v_a_3682_ = lean_ctor_get(v___y_3680_, 0);
lean_inc(v_a_3682_);
lean_dec_ref_known(v___y_3680_, 1);
v___y_3668_ = v___y_3678_;
v___y_3669_ = v___y_3679_;
v_a_3670_ = v_a_3682_;
goto v___jp_3667_;
}
}
v___jp_3683_:
{
if (v___y_3687_ == 0)
{
lean_object* v___x_3688_; 
v___x_3688_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(v_decl_3575_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3688_) == 0)
{
lean_dec_ref_known(v___x_3688_, 1);
v___y_3668_ = v___y_3684_;
v___y_3669_ = v___y_3686_;
v_a_3670_ = v___y_3685_;
goto v___jp_3667_;
}
else
{
lean_dec_ref(v___y_3685_);
v___y_3678_ = v___y_3684_;
v___y_3679_ = v___y_3686_;
v___y_3680_ = v___x_3688_;
goto v___jp_3677_;
}
}
else
{
lean_dec(v_decl_3575_);
v___y_3668_ = v___y_3684_;
v___y_3669_ = v___y_3686_;
v_a_3670_ = v___y_3685_;
goto v___jp_3667_;
}
}
v___jp_3689_:
{
uint8_t v___x_3693_; 
v___x_3693_ = l_Lean_Exception_isInterrupt(v_a_3692_);
if (v___x_3693_ == 0)
{
uint8_t v___x_3694_; 
lean_inc_ref(v_a_3692_);
v___x_3694_ = l_Lean_Exception_isRuntime(v_a_3692_);
v___y_3684_ = v___y_3690_;
v___y_3685_ = v_a_3692_;
v___y_3686_ = v___y_3691_;
v___y_3687_ = v___x_3694_;
goto v___jp_3683_;
}
else
{
v___y_3684_ = v___y_3690_;
v___y_3685_ = v_a_3692_;
v___y_3686_ = v___y_3691_;
v___y_3687_ = v___x_3693_;
goto v___jp_3683_;
}
}
v___jp_3695_:
{
if (lean_obj_tag(v___y_3698_) == 0)
{
lean_object* v_a_3699_; 
lean_dec(v_decl_3575_);
v_a_3699_ = lean_ctor_get(v___y_3698_, 0);
lean_inc(v_a_3699_);
lean_dec_ref_known(v___y_3698_, 1);
v___y_3673_ = v___y_3696_;
v___y_3674_ = v___y_3697_;
v_a_3675_ = v_a_3699_;
goto v___jp_3672_;
}
else
{
lean_object* v_a_3700_; 
v_a_3700_ = lean_ctor_get(v___y_3698_, 0);
lean_inc(v_a_3700_);
lean_dec_ref_known(v___y_3698_, 1);
v___y_3690_ = v___y_3696_;
v___y_3691_ = v___y_3697_;
v_a_3692_ = v_a_3700_;
goto v___jp_3689_;
}
}
v___jp_3701_:
{
lean_object* v___x_3705_; double v___x_3706_; double v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; 
v___x_3705_ = lean_io_get_num_heartbeats();
v___x_3706_ = lean_float_of_nat(v___y_3702_);
v___x_3707_ = lean_float_of_nat(v___x_3705_);
v___x_3708_ = lean_box_float(v___x_3706_);
v___x_3709_ = lean_box_float(v___x_3707_);
v___x_3710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3710_, 0, v___x_3708_);
lean_ctor_set(v___x_3710_, 1, v___x_3709_);
v___x_3711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3711_, 0, v_a_3704_);
lean_ctor_set(v___x_3711_, 1, v___x_3710_);
v___x_3712_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(v___x_3577_, v___x_3578_, v___x_3579_, v_options_3627_, v___x_3651_, v___y_3703_, v___f_3580_, v___x_3711_, v___y_3581_, v___y_3582_);
return v___x_3712_;
}
v___jp_3713_:
{
lean_object* v___x_3717_; 
v___x_3717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3717_, 0, v_a_3716_);
v___y_3702_ = v___y_3714_;
v___y_3703_ = v___y_3715_;
v_a_3704_ = v___x_3717_;
goto v___jp_3701_;
}
v___jp_3718_:
{
lean_object* v___x_3722_; 
v___x_3722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3722_, 0, v_a_3721_);
v___y_3702_ = v___y_3719_;
v___y_3703_ = v___y_3720_;
v_a_3704_ = v___x_3722_;
goto v___jp_3701_;
}
v___jp_3723_:
{
if (lean_obj_tag(v___y_3726_) == 0)
{
lean_object* v_a_3727_; 
v_a_3727_ = lean_ctor_get(v___y_3726_, 0);
lean_inc(v_a_3727_);
lean_dec_ref_known(v___y_3726_, 1);
v___y_3719_ = v___y_3724_;
v___y_3720_ = v___y_3725_;
v_a_3721_ = v_a_3727_;
goto v___jp_3718_;
}
else
{
lean_object* v_a_3728_; 
v_a_3728_ = lean_ctor_get(v___y_3726_, 0);
lean_inc(v_a_3728_);
lean_dec_ref_known(v___y_3726_, 1);
v___y_3714_ = v___y_3724_;
v___y_3715_ = v___y_3725_;
v_a_3716_ = v_a_3728_;
goto v___jp_3713_;
}
}
v___jp_3729_:
{
if (v___y_3733_ == 0)
{
lean_object* v___x_3734_; 
v___x_3734_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(v_decl_3575_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3734_) == 0)
{
lean_dec_ref_known(v___x_3734_, 1);
v___y_3714_ = v___y_3731_;
v___y_3715_ = v___y_3732_;
v_a_3716_ = v___y_3730_;
goto v___jp_3713_;
}
else
{
lean_dec_ref(v___y_3730_);
v___y_3724_ = v___y_3731_;
v___y_3725_ = v___y_3732_;
v___y_3726_ = v___x_3734_;
goto v___jp_3723_;
}
}
else
{
lean_dec(v_decl_3575_);
v___y_3714_ = v___y_3731_;
v___y_3715_ = v___y_3732_;
v_a_3716_ = v___y_3730_;
goto v___jp_3713_;
}
}
v___jp_3735_:
{
uint8_t v___x_3739_; 
v___x_3739_ = l_Lean_Exception_isInterrupt(v_a_3738_);
if (v___x_3739_ == 0)
{
uint8_t v___x_3740_; 
lean_inc_ref(v_a_3738_);
v___x_3740_ = l_Lean_Exception_isRuntime(v_a_3738_);
v___y_3730_ = v_a_3738_;
v___y_3731_ = v___y_3736_;
v___y_3732_ = v___y_3737_;
v___y_3733_ = v___x_3740_;
goto v___jp_3729_;
}
else
{
v___y_3730_ = v_a_3738_;
v___y_3731_ = v___y_3736_;
v___y_3732_ = v___y_3737_;
v___y_3733_ = v___x_3739_;
goto v___jp_3729_;
}
}
v___jp_3741_:
{
if (lean_obj_tag(v___y_3744_) == 0)
{
lean_object* v_a_3745_; 
lean_dec(v_decl_3575_);
v_a_3745_ = lean_ctor_get(v___y_3744_, 0);
lean_inc(v_a_3745_);
lean_dec_ref_known(v___y_3744_, 1);
v___y_3719_ = v___y_3742_;
v___y_3720_ = v___y_3743_;
v_a_3721_ = v_a_3745_;
goto v___jp_3718_;
}
else
{
lean_object* v_a_3746_; 
v_a_3746_ = lean_ctor_get(v___y_3744_, 0);
lean_inc(v_a_3746_);
lean_dec_ref_known(v___y_3744_, 1);
v___y_3736_ = v___y_3742_;
v___y_3737_ = v___y_3743_;
v_a_3738_ = v_a_3746_;
goto v___jp_3735_;
}
}
v___jp_3747_:
{
lean_object* v___x_3748_; lean_object* v_a_3749_; lean_object* v___x_3750_; uint8_t v___x_3751_; 
v___x_3748_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(v___y_3582_);
v_a_3749_ = lean_ctor_get(v___x_3748_, 0);
lean_inc(v_a_3749_);
lean_dec_ref(v___x_3748_);
v___x_3750_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3751_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_3627_, v___x_3750_);
if (v___x_3751_ == 0)
{
lean_object* v___x_3752_; lean_object* v___x_3753_; 
v___x_3752_ = lean_io_mono_nanos_now();
lean_inc(v_decl_3575_);
v___x_3753_ = l_Lean_warnIfUsesSorry(v_decl_3575_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3753_) == 0)
{
lean_object* v___x_3754_; 
lean_dec_ref_known(v___x_3753_, 1);
lean_inc(v_decl_3575_);
v___x_3754_ = l_Lean_checkSmartCasts(v_decl_3575_, v_forceExpose_3576_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3754_) == 0)
{
lean_object* v___x_3755_; lean_object* v_env_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; 
lean_dec_ref_known(v___x_3754_, 1);
v___x_3755_ = lean_st_ref_get(v___y_3582_);
v_env_3756_ = lean_ctor_get(v___x_3755_, 0);
lean_inc_ref(v_env_3756_);
lean_dec(v___x_3755_);
v___x_3757_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3581_);
v___x_3758_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_3756_, v___x_3757_, v_decl_3575_, v_cancelTk_x3f_3647_);
lean_dec_ref(v___x_3757_);
v___x_3759_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_3758_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3759_) == 0)
{
lean_object* v_a_3760_; lean_object* v___x_3761_; 
v_a_3760_ = lean_ctor_get(v___x_3759_, 0);
lean_inc(v_a_3760_);
lean_dec_ref_known(v___x_3759_, 1);
v___x_3761_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_3760_, v___y_3582_);
v___y_3696_ = v___x_3752_;
v___y_3697_ = v_a_3749_;
v___y_3698_ = v___x_3761_;
goto v___jp_3695_;
}
else
{
lean_object* v_a_3762_; 
v_a_3762_ = lean_ctor_get(v___x_3759_, 0);
lean_inc(v_a_3762_);
lean_dec_ref_known(v___x_3759_, 1);
v___y_3690_ = v___x_3752_;
v___y_3691_ = v_a_3749_;
v_a_3692_ = v_a_3762_;
goto v___jp_3689_;
}
}
else
{
v___y_3696_ = v___x_3752_;
v___y_3697_ = v_a_3749_;
v___y_3698_ = v___x_3754_;
goto v___jp_3695_;
}
}
else
{
lean_dec(v_decl_3575_);
v___y_3678_ = v___x_3752_;
v___y_3679_ = v_a_3749_;
v___y_3680_ = v___x_3753_;
goto v___jp_3677_;
}
}
else
{
lean_object* v___x_3763_; lean_object* v___x_3764_; 
v___x_3763_ = lean_io_get_num_heartbeats();
lean_inc(v_decl_3575_);
v___x_3764_ = l_Lean_warnIfUsesSorry(v_decl_3575_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3764_) == 0)
{
lean_object* v___x_3765_; 
lean_dec_ref_known(v___x_3764_, 1);
lean_inc(v_decl_3575_);
v___x_3765_ = l_Lean_checkSmartCasts(v_decl_3575_, v_forceExpose_3576_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3765_) == 0)
{
lean_object* v___x_3766_; lean_object* v_env_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; 
lean_dec_ref_known(v___x_3765_, 1);
v___x_3766_ = lean_st_ref_get(v___y_3582_);
v_env_3767_ = lean_ctor_get(v___x_3766_, 0);
lean_inc_ref(v_env_3767_);
lean_dec(v___x_3766_);
v___x_3768_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3581_);
v___x_3769_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_3767_, v___x_3768_, v_decl_3575_, v_cancelTk_x3f_3647_);
lean_dec_ref(v___x_3768_);
v___x_3770_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_3769_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3770_) == 0)
{
lean_object* v_a_3771_; lean_object* v___x_3772_; 
v_a_3771_ = lean_ctor_get(v___x_3770_, 0);
lean_inc(v_a_3771_);
lean_dec_ref_known(v___x_3770_, 1);
v___x_3772_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_3771_, v___y_3582_);
v___y_3742_ = v___x_3763_;
v___y_3743_ = v_a_3749_;
v___y_3744_ = v___x_3772_;
goto v___jp_3741_;
}
else
{
lean_object* v_a_3773_; 
v_a_3773_ = lean_ctor_get(v___x_3770_, 0);
lean_inc(v_a_3773_);
lean_dec_ref_known(v___x_3770_, 1);
v___y_3736_ = v___x_3763_;
v___y_3737_ = v_a_3749_;
v_a_3738_ = v_a_3773_;
goto v___jp_3735_;
}
}
else
{
v___y_3742_ = v___x_3763_;
v___y_3743_ = v_a_3749_;
v___y_3744_ = v___x_3765_;
goto v___jp_3741_;
}
}
else
{
lean_dec(v_decl_3575_);
v___y_3724_ = v___x_3763_;
v___y_3725_ = v_a_3749_;
v___y_3726_ = v___x_3764_;
goto v___jp_3723_;
}
}
}
}
v___jp_3584_:
{
if (v___y_3587_ == 0)
{
lean_object* v___x_3588_; 
lean_dec_ref(v___y_3586_);
v___x_3588_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(v_decl_3575_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3588_) == 0)
{
lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3595_; 
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3588_);
if (v_isSharedCheck_3595_ == 0)
{
lean_object* v_unused_3596_; 
v_unused_3596_ = lean_ctor_get(v___x_3588_, 0);
lean_dec(v_unused_3596_);
v___x_3590_ = v___x_3588_;
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
else
{
lean_dec(v___x_3588_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3593_; 
if (v_isShared_3591_ == 0)
{
lean_ctor_set_tag(v___x_3590_, 1);
lean_ctor_set(v___x_3590_, 0, v___y_3585_);
v___x_3593_ = v___x_3590_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v___y_3585_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
else
{
lean_dec_ref(v___y_3585_);
return v___x_3588_;
}
}
else
{
lean_dec_ref(v___y_3585_);
lean_dec(v_decl_3575_);
return v___y_3586_;
}
}
v___jp_3597_:
{
uint8_t v___x_3600_; 
v___x_3600_ = l_Lean_Exception_isInterrupt(v_a_3599_);
if (v___x_3600_ == 0)
{
uint8_t v___x_3601_; 
lean_inc_ref(v_a_3599_);
v___x_3601_ = l_Lean_Exception_isRuntime(v_a_3599_);
v___y_3585_ = v_a_3599_;
v___y_3586_ = v___y_3598_;
v___y_3587_ = v___x_3601_;
goto v___jp_3584_;
}
else
{
v___y_3585_ = v_a_3599_;
v___y_3586_ = v___y_3598_;
v___y_3587_ = v___x_3600_;
goto v___jp_3584_;
}
}
v___jp_3602_:
{
if (lean_obj_tag(v___y_3603_) == 0)
{
lean_dec(v_decl_3575_);
return v___y_3603_;
}
else
{
lean_object* v_a_3604_; 
v_a_3604_ = lean_ctor_get(v___y_3603_, 0);
lean_inc(v_a_3604_);
v___y_3598_ = v___y_3603_;
v_a_3599_ = v_a_3604_;
goto v___jp_3597_;
}
}
v___jp_3605_:
{
if (v___y_3608_ == 0)
{
lean_object* v___x_3609_; 
lean_dec_ref(v___y_3606_);
v___x_3609_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(v_decl_3575_, v___y_3581_, v___y_3582_);
if (lean_obj_tag(v___x_3609_) == 0)
{
lean_object* v___x_3611_; uint8_t v_isShared_3612_; uint8_t v_isSharedCheck_3616_; 
v_isSharedCheck_3616_ = !lean_is_exclusive(v___x_3609_);
if (v_isSharedCheck_3616_ == 0)
{
lean_object* v_unused_3617_; 
v_unused_3617_ = lean_ctor_get(v___x_3609_, 0);
lean_dec(v_unused_3617_);
v___x_3611_ = v___x_3609_;
v_isShared_3612_ = v_isSharedCheck_3616_;
goto v_resetjp_3610_;
}
else
{
lean_dec(v___x_3609_);
v___x_3611_ = lean_box(0);
v_isShared_3612_ = v_isSharedCheck_3616_;
goto v_resetjp_3610_;
}
v_resetjp_3610_:
{
lean_object* v___x_3614_; 
if (v_isShared_3612_ == 0)
{
lean_ctor_set_tag(v___x_3611_, 1);
lean_ctor_set(v___x_3611_, 0, v___y_3607_);
v___x_3614_ = v___x_3611_;
goto v_reusejp_3613_;
}
else
{
lean_object* v_reuseFailAlloc_3615_; 
v_reuseFailAlloc_3615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3615_, 0, v___y_3607_);
v___x_3614_ = v_reuseFailAlloc_3615_;
goto v_reusejp_3613_;
}
v_reusejp_3613_:
{
return v___x_3614_;
}
}
}
else
{
lean_dec_ref(v___y_3607_);
return v___x_3609_;
}
}
else
{
lean_dec_ref(v___y_3607_);
lean_dec(v_decl_3575_);
return v___y_3606_;
}
}
v___jp_3618_:
{
uint8_t v___x_3621_; 
v___x_3621_ = l_Lean_Exception_isInterrupt(v_a_3620_);
if (v___x_3621_ == 0)
{
uint8_t v___x_3622_; 
lean_inc_ref(v_a_3620_);
v___x_3622_ = l_Lean_Exception_isRuntime(v_a_3620_);
v___y_3606_ = v___y_3619_;
v___y_3607_ = v_a_3620_;
v___y_3608_ = v___x_3622_;
goto v___jp_3605_;
}
else
{
v___y_3606_ = v___y_3619_;
v___y_3607_ = v_a_3620_;
v___y_3608_ = v___x_3621_;
goto v___jp_3605_;
}
}
v___jp_3623_:
{
if (lean_obj_tag(v___y_3624_) == 0)
{
lean_dec(v_decl_3575_);
return v___y_3624_;
}
else
{
lean_object* v_a_3625_; 
v_a_3625_ = lean_ctor_get(v___y_3624_, 0);
lean_inc(v_a_3625_);
v___y_3619_ = v___y_3624_;
v_a_3620_ = v_a_3625_;
goto v___jp_3618_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___boxed(lean_object* v_decl_3793_, lean_object* v_forceExpose_3794_, lean_object* v___x_3795_, lean_object* v___x_3796_, lean_object* v___x_3797_, lean_object* v___f_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_){
_start:
{
uint8_t v_forceExpose_boxed_3802_; uint8_t v___x_8238__boxed_3803_; lean_object* v_res_3804_; 
v_forceExpose_boxed_3802_ = lean_unbox(v_forceExpose_3794_);
v___x_8238__boxed_3803_ = lean_unbox(v___x_3796_);
v_res_3804_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1(v_decl_3793_, v_forceExpose_boxed_3802_, v___x_3795_, v___x_8238__boxed_3803_, v___x_3797_, v___f_3798_, v___y_3799_, v___y_3800_);
lean_dec(v___y_3800_);
lean_dec_ref(v___y_3799_);
return v_res_3804_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(lean_object* v_decl_3809_, uint8_t v_forceExpose_3810_, lean_object* v_a_3811_, lean_object* v_a_3812_){
_start:
{
lean_object* v___f_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; uint8_t v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___f_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; 
lean_inc(v_decl_3809_);
v___f_3814_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___boxed), 5, 1);
lean_closure_set(v___f_3814_, 0, v_decl_3809_);
v___x_3815_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_3811_);
v___x_3816_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__0));
v___x_3817_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__2));
v___x_3818_ = 1;
v___x_3819_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0));
v___x_3820_ = lean_box(v_forceExpose_3810_);
v___x_3821_ = lean_box(v___x_3818_);
v___f_3822_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___boxed), 9, 6);
lean_closure_set(v___f_3822_, 0, v_decl_3809_);
lean_closure_set(v___f_3822_, 1, v___x_3820_);
lean_closure_set(v___f_3822_, 2, v___x_3817_);
lean_closure_set(v___f_3822_, 3, v___x_3821_);
lean_closure_set(v___f_3822_, 4, v___x_3819_);
lean_closure_set(v___f_3822_, 5, v___f_3814_);
v___x_3823_ = lean_box(0);
v___x_3824_ = l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg(v___x_3816_, v___x_3815_, v___f_3822_, v___x_3823_, v_a_3811_, v_a_3812_);
lean_dec_ref(v___x_3815_);
return v___x_3824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___boxed(lean_object* v_decl_3825_, lean_object* v_forceExpose_3826_, lean_object* v_a_3827_, lean_object* v_a_3828_, lean_object* v_a_3829_){
_start:
{
uint8_t v_forceExpose_boxed_3830_; lean_object* v_res_3831_; 
v_forceExpose_boxed_3830_ = lean_unbox(v_forceExpose_3826_);
v_res_3831_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3825_, v_forceExpose_boxed_3830_, v_a_3827_, v_a_3828_);
lean_dec(v_a_3828_);
lean_dec_ref(v_a_3827_);
return v_res_3831_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3(lean_object* v_00_u03b1_3832_, lean_object* v_x_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_){
_start:
{
lean_object* v___x_3837_; 
v___x_3837_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(v_x_3833_);
return v___x_3837_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___boxed(lean_object* v_00_u03b1_3838_, lean_object* v_x_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_){
_start:
{
lean_object* v_res_3843_; 
v_res_3843_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3(v_00_u03b1_3838_, v_x_3839_, v___y_3840_, v___y_3841_);
lean_dec(v___y_3841_);
lean_dec_ref(v___y_3840_);
return v_res_3843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0(lean_object* v___y_3844_, lean_object* v_a_3845_, lean_object* v_ref_3846_, lean_object* v_a_x3f_3847_){
_start:
{
lean_object* v___x_3849_; lean_object* v_env_3850_; lean_object* v___x_3851_; 
v___x_3849_ = lean_st_ref_get(v___y_3844_);
v_env_3850_ = lean_ctor_get(v___x_3849_, 0);
lean_inc_ref(v_env_3850_);
lean_dec(v___x_3849_);
v___x_3851_ = l_Lean_Environment_AddConstAsyncResult_commitCheckEnv(v_a_3845_, v_env_3850_);
if (lean_obj_tag(v___x_3851_) == 0)
{
lean_object* v_a_3852_; lean_object* v___x_3854_; uint8_t v_isShared_3855_; uint8_t v_isSharedCheck_3859_; 
lean_dec(v_ref_3846_);
v_a_3852_ = lean_ctor_get(v___x_3851_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___x_3851_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3854_ = v___x_3851_;
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
else
{
lean_inc(v_a_3852_);
lean_dec(v___x_3851_);
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
v_reuseFailAlloc_3858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_a_3852_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
}
else
{
lean_object* v_a_3860_; lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3871_; 
v_a_3860_ = lean_ctor_get(v___x_3851_, 0);
v_isSharedCheck_3871_ = !lean_is_exclusive(v___x_3851_);
if (v_isSharedCheck_3871_ == 0)
{
v___x_3862_ = v___x_3851_;
v_isShared_3863_ = v_isSharedCheck_3871_;
goto v_resetjp_3861_;
}
else
{
lean_inc(v_a_3860_);
lean_dec(v___x_3851_);
v___x_3862_ = lean_box(0);
v_isShared_3863_ = v_isSharedCheck_3871_;
goto v_resetjp_3861_;
}
v_resetjp_3861_:
{
lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3869_; 
v___x_3864_ = lean_io_error_to_string(v_a_3860_);
v___x_3865_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3865_, 0, v___x_3864_);
v___x_3866_ = l_Lean_MessageData_ofFormat(v___x_3865_);
v___x_3867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3867_, 0, v_ref_3846_);
lean_ctor_set(v___x_3867_, 1, v___x_3866_);
if (v_isShared_3863_ == 0)
{
lean_ctor_set(v___x_3862_, 0, v___x_3867_);
v___x_3869_ = v___x_3862_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3870_; 
v_reuseFailAlloc_3870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3870_, 0, v___x_3867_);
v___x_3869_ = v_reuseFailAlloc_3870_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
return v___x_3869_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed(lean_object* v___y_3872_, lean_object* v_a_3873_, lean_object* v_ref_3874_, lean_object* v_a_x3f_3875_, lean_object* v___y_3876_){
_start:
{
lean_object* v_res_3877_; 
v_res_3877_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0(v___y_3872_, v_a_3873_, v_ref_3874_, v_a_x3f_3875_);
lean_dec(v_a_x3f_3875_);
lean_dec(v___y_3872_);
return v_res_3877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1(lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v_a_3880_, lean_object* v_a_x3f_3881_){
_start:
{
lean_object* v___x_3883_; lean_object* v_env_3884_; lean_object* v_ref_3885_; lean_object* v___x_3886_; 
v___x_3883_ = lean_st_ref_get(v___y_3878_);
v_env_3884_ = lean_ctor_get(v___x_3883_, 0);
lean_inc_ref(v_env_3884_);
lean_dec(v___x_3883_);
v_ref_3885_ = lean_ctor_get(v___y_3879_, 2);
v___x_3886_ = l_Lean_Environment_AddConstAsyncResult_commitCheckEnv(v_a_3880_, v_env_3884_);
if (lean_obj_tag(v___x_3886_) == 0)
{
lean_object* v_a_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3894_; 
v_a_3887_ = lean_ctor_get(v___x_3886_, 0);
v_isSharedCheck_3894_ = !lean_is_exclusive(v___x_3886_);
if (v_isSharedCheck_3894_ == 0)
{
v___x_3889_ = v___x_3886_;
v_isShared_3890_ = v_isSharedCheck_3894_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_a_3887_);
lean_dec(v___x_3886_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3894_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
lean_object* v___x_3892_; 
if (v_isShared_3890_ == 0)
{
v___x_3892_ = v___x_3889_;
goto v_reusejp_3891_;
}
else
{
lean_object* v_reuseFailAlloc_3893_; 
v_reuseFailAlloc_3893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3893_, 0, v_a_3887_);
v___x_3892_ = v_reuseFailAlloc_3893_;
goto v_reusejp_3891_;
}
v_reusejp_3891_:
{
return v___x_3892_;
}
}
}
else
{
lean_object* v_a_3895_; lean_object* v___x_3897_; uint8_t v_isShared_3898_; uint8_t v_isSharedCheck_3906_; 
v_a_3895_ = lean_ctor_get(v___x_3886_, 0);
v_isSharedCheck_3906_ = !lean_is_exclusive(v___x_3886_);
if (v_isSharedCheck_3906_ == 0)
{
v___x_3897_ = v___x_3886_;
v_isShared_3898_ = v_isSharedCheck_3906_;
goto v_resetjp_3896_;
}
else
{
lean_inc(v_a_3895_);
lean_dec(v___x_3886_);
v___x_3897_ = lean_box(0);
v_isShared_3898_ = v_isSharedCheck_3906_;
goto v_resetjp_3896_;
}
v_resetjp_3896_:
{
lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3904_; 
v___x_3899_ = lean_io_error_to_string(v_a_3895_);
v___x_3900_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3900_, 0, v___x_3899_);
v___x_3901_ = l_Lean_MessageData_ofFormat(v___x_3900_);
lean_inc(v_ref_3885_);
v___x_3902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3902_, 0, v_ref_3885_);
lean_ctor_set(v___x_3902_, 1, v___x_3901_);
if (v_isShared_3898_ == 0)
{
lean_ctor_set(v___x_3897_, 0, v___x_3902_);
v___x_3904_ = v___x_3897_;
goto v_reusejp_3903_;
}
else
{
lean_object* v_reuseFailAlloc_3905_; 
v_reuseFailAlloc_3905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3905_, 0, v___x_3902_);
v___x_3904_ = v_reuseFailAlloc_3905_;
goto v_reusejp_3903_;
}
v_reusejp_3903_:
{
return v___x_3904_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1___boxed(lean_object* v___y_3907_, lean_object* v___y_3908_, lean_object* v_a_3909_, lean_object* v_a_x3f_3910_, lean_object* v___y_3911_){
_start:
{
lean_object* v_res_3912_; 
v_res_3912_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1(v___y_3907_, v___y_3908_, v_a_3909_, v_a_x3f_3910_);
lean_dec(v_a_x3f_3910_);
lean_dec_ref(v___y_3908_);
lean_dec(v___y_3907_);
return v_res_3912_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2(lean_object* v_a_3913_, lean_object* v_asyncEnv_3914_, lean_object* v_decl_3915_, uint8_t v_forceExpose_3916_, lean_object* v_x_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_){
_start:
{
lean_object* v___x_3921_; lean_object* v_r_3922_; 
v___x_3921_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_asyncEnv_3914_, v___y_3919_);
lean_dec_ref(v___x_3921_);
v_r_3922_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3915_, v_forceExpose_3916_, v___y_3918_, v___y_3919_);
if (lean_obj_tag(v_r_3922_) == 0)
{
lean_object* v_a_3923_; lean_object* v___x_3925_; uint8_t v_isShared_3926_; uint8_t v_isSharedCheck_3939_; 
v_a_3923_ = lean_ctor_get(v_r_3922_, 0);
v_isSharedCheck_3939_ = !lean_is_exclusive(v_r_3922_);
if (v_isSharedCheck_3939_ == 0)
{
v___x_3925_ = v_r_3922_;
v_isShared_3926_ = v_isSharedCheck_3939_;
goto v_resetjp_3924_;
}
else
{
lean_inc(v_a_3923_);
lean_dec(v_r_3922_);
v___x_3925_ = lean_box(0);
v_isShared_3926_ = v_isSharedCheck_3939_;
goto v_resetjp_3924_;
}
v_resetjp_3924_:
{
lean_object* v___x_3928_; 
lean_inc(v_a_3923_);
if (v_isShared_3926_ == 0)
{
lean_ctor_set_tag(v___x_3925_, 1);
v___x_3928_ = v___x_3925_;
goto v_reusejp_3927_;
}
else
{
lean_object* v_reuseFailAlloc_3938_; 
v_reuseFailAlloc_3938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3938_, 0, v_a_3923_);
v___x_3928_ = v_reuseFailAlloc_3938_;
goto v_reusejp_3927_;
}
v_reusejp_3927_:
{
lean_object* v___x_3929_; 
v___x_3929_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1(v___y_3919_, v___y_3918_, v_a_3913_, v___x_3928_);
lean_dec_ref(v___x_3928_);
if (lean_obj_tag(v___x_3929_) == 0)
{
lean_object* v___x_3931_; uint8_t v_isShared_3932_; uint8_t v_isSharedCheck_3936_; 
v_isSharedCheck_3936_ = !lean_is_exclusive(v___x_3929_);
if (v_isSharedCheck_3936_ == 0)
{
lean_object* v_unused_3937_; 
v_unused_3937_ = lean_ctor_get(v___x_3929_, 0);
lean_dec(v_unused_3937_);
v___x_3931_ = v___x_3929_;
v_isShared_3932_ = v_isSharedCheck_3936_;
goto v_resetjp_3930_;
}
else
{
lean_dec(v___x_3929_);
v___x_3931_ = lean_box(0);
v_isShared_3932_ = v_isSharedCheck_3936_;
goto v_resetjp_3930_;
}
v_resetjp_3930_:
{
lean_object* v___x_3934_; 
if (v_isShared_3932_ == 0)
{
lean_ctor_set(v___x_3931_, 0, v_a_3923_);
v___x_3934_ = v___x_3931_;
goto v_reusejp_3933_;
}
else
{
lean_object* v_reuseFailAlloc_3935_; 
v_reuseFailAlloc_3935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3935_, 0, v_a_3923_);
v___x_3934_ = v_reuseFailAlloc_3935_;
goto v_reusejp_3933_;
}
v_reusejp_3933_:
{
return v___x_3934_;
}
}
}
else
{
lean_dec(v_a_3923_);
return v___x_3929_;
}
}
}
}
else
{
lean_object* v_a_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; 
v_a_3940_ = lean_ctor_get(v_r_3922_, 0);
lean_inc(v_a_3940_);
lean_dec_ref_known(v_r_3922_, 1);
v___x_3941_ = lean_box(0);
v___x_3942_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1(v___y_3919_, v___y_3918_, v_a_3913_, v___x_3941_);
if (lean_obj_tag(v___x_3942_) == 0)
{
lean_object* v___x_3944_; uint8_t v_isShared_3945_; uint8_t v_isSharedCheck_3949_; 
v_isSharedCheck_3949_ = !lean_is_exclusive(v___x_3942_);
if (v_isSharedCheck_3949_ == 0)
{
lean_object* v_unused_3950_; 
v_unused_3950_ = lean_ctor_get(v___x_3942_, 0);
lean_dec(v_unused_3950_);
v___x_3944_ = v___x_3942_;
v_isShared_3945_ = v_isSharedCheck_3949_;
goto v_resetjp_3943_;
}
else
{
lean_dec(v___x_3942_);
v___x_3944_ = lean_box(0);
v_isShared_3945_ = v_isSharedCheck_3949_;
goto v_resetjp_3943_;
}
v_resetjp_3943_:
{
lean_object* v___x_3947_; 
if (v_isShared_3945_ == 0)
{
lean_ctor_set_tag(v___x_3944_, 1);
lean_ctor_set(v___x_3944_, 0, v_a_3940_);
v___x_3947_ = v___x_3944_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3948_; 
v_reuseFailAlloc_3948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3948_, 0, v_a_3940_);
v___x_3947_ = v_reuseFailAlloc_3948_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
return v___x_3947_;
}
}
}
else
{
lean_dec(v_a_3940_);
return v___x_3942_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed(lean_object* v_a_3951_, lean_object* v_asyncEnv_3952_, lean_object* v_decl_3953_, lean_object* v_forceExpose_3954_, lean_object* v_x_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_){
_start:
{
uint8_t v_forceExpose_boxed_3959_; lean_object* v_res_3960_; 
v_forceExpose_boxed_3959_ = lean_unbox(v_forceExpose_3954_);
v_res_3960_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2(v_a_3951_, v_asyncEnv_3952_, v_decl_3953_, v_forceExpose_boxed_3959_, v_x_3955_, v___y_3956_, v___y_3957_);
lean_dec(v___y_3957_);
lean_dec_ref(v___y_3956_);
lean_dec_ref(v_x_3955_);
return v_res_3960_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1(void){
_start:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; 
v___x_3962_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__0));
v___x_3963_ = l_Lean_stringToMessageData(v___x_3962_);
return v___x_3963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3(lean_object* v_decl_3964_, lean_object* v_x_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_){
_start:
{
lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; 
v___x_3969_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1);
v___x_3970_ = l_Lean_Declaration_getNames(v_decl_3964_);
v___x_3971_ = lean_box(0);
v___x_3972_ = l_List_mapTR_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__0(v___x_3970_, v___x_3971_);
v___x_3973_ = l_Lean_MessageData_ofList(v___x_3972_);
v___x_3974_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3974_, 0, v___x_3969_);
lean_ctor_set(v___x_3974_, 1, v___x_3973_);
v___x_3975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3975_, 0, v___x_3974_);
return v___x_3975_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___boxed(lean_object* v_decl_3976_, lean_object* v_x_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_){
_start:
{
lean_object* v_res_3981_; 
v_res_3981_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3(v_decl_3976_, v_x_3977_, v___y_3978_, v___y_3979_);
lean_dec(v___y_3979_);
lean_dec_ref(v___y_3978_);
lean_dec_ref(v_x_3977_);
return v_res_3981_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(lean_object* v_cls_3984_, lean_object* v_msg_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_){
_start:
{
lean_object* v_ref_3989_; lean_object* v___x_3990_; lean_object* v_a_3991_; lean_object* v___x_3993_; uint8_t v_isShared_3994_; uint8_t v_isSharedCheck_4036_; 
v_ref_3989_ = lean_ctor_get(v___y_3986_, 2);
v___x_3990_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(v_msg_3985_, v___y_3986_, v___y_3987_);
v_a_3991_ = lean_ctor_get(v___x_3990_, 0);
v_isSharedCheck_4036_ = !lean_is_exclusive(v___x_3990_);
if (v_isSharedCheck_4036_ == 0)
{
v___x_3993_ = v___x_3990_;
v_isShared_3994_ = v_isSharedCheck_4036_;
goto v_resetjp_3992_;
}
else
{
lean_inc(v_a_3991_);
lean_dec(v___x_3990_);
v___x_3993_ = lean_box(0);
v_isShared_3994_ = v_isSharedCheck_4036_;
goto v_resetjp_3992_;
}
v_resetjp_3992_:
{
lean_object* v___x_3995_; lean_object* v_traceState_3996_; lean_object* v_env_3997_; lean_object* v_nextMacroScope_3998_; lean_object* v_ngen_3999_; lean_object* v_auxDeclNGen_4000_; lean_object* v_cache_4001_; lean_object* v_recordedDeps_4002_; lean_object* v_messages_4003_; lean_object* v_infoState_4004_; lean_object* v_snapshotTasks_4005_; lean_object* v___x_4007_; uint8_t v_isShared_4008_; uint8_t v_isSharedCheck_4035_; 
v___x_3995_ = lean_st_ref_take(v___y_3987_);
v_traceState_3996_ = lean_ctor_get(v___x_3995_, 4);
v_env_3997_ = lean_ctor_get(v___x_3995_, 0);
v_nextMacroScope_3998_ = lean_ctor_get(v___x_3995_, 1);
v_ngen_3999_ = lean_ctor_get(v___x_3995_, 2);
v_auxDeclNGen_4000_ = lean_ctor_get(v___x_3995_, 3);
v_cache_4001_ = lean_ctor_get(v___x_3995_, 5);
v_recordedDeps_4002_ = lean_ctor_get(v___x_3995_, 6);
v_messages_4003_ = lean_ctor_get(v___x_3995_, 7);
v_infoState_4004_ = lean_ctor_get(v___x_3995_, 8);
v_snapshotTasks_4005_ = lean_ctor_get(v___x_3995_, 9);
v_isSharedCheck_4035_ = !lean_is_exclusive(v___x_3995_);
if (v_isSharedCheck_4035_ == 0)
{
v___x_4007_ = v___x_3995_;
v_isShared_4008_ = v_isSharedCheck_4035_;
goto v_resetjp_4006_;
}
else
{
lean_inc(v_snapshotTasks_4005_);
lean_inc(v_infoState_4004_);
lean_inc(v_messages_4003_);
lean_inc(v_recordedDeps_4002_);
lean_inc(v_cache_4001_);
lean_inc(v_traceState_3996_);
lean_inc(v_auxDeclNGen_4000_);
lean_inc(v_ngen_3999_);
lean_inc(v_nextMacroScope_3998_);
lean_inc(v_env_3997_);
lean_dec(v___x_3995_);
v___x_4007_ = lean_box(0);
v_isShared_4008_ = v_isSharedCheck_4035_;
goto v_resetjp_4006_;
}
v_resetjp_4006_:
{
uint64_t v_tid_4009_; lean_object* v_traces_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4034_; 
v_tid_4009_ = lean_ctor_get_uint64(v_traceState_3996_, sizeof(void*)*1);
v_traces_4010_ = lean_ctor_get(v_traceState_3996_, 0);
v_isSharedCheck_4034_ = !lean_is_exclusive(v_traceState_3996_);
if (v_isSharedCheck_4034_ == 0)
{
v___x_4012_ = v_traceState_3996_;
v_isShared_4013_ = v_isSharedCheck_4034_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_traces_4010_);
lean_dec(v_traceState_3996_);
v___x_4012_ = lean_box(0);
v_isShared_4013_ = v_isSharedCheck_4034_;
goto v_resetjp_4011_;
}
v_resetjp_4011_:
{
lean_object* v___x_4014_; lean_object* v___x_4015_; double v___x_4016_; uint8_t v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4025_; 
v___x_4014_ = lean_box(0);
v___x_4015_ = lean_box(0);
v___x_4016_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0);
v___x_4017_ = 0;
v___x_4018_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0));
v___x_4019_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4019_, 0, v_cls_3984_);
lean_ctor_set(v___x_4019_, 1, v___x_4015_);
lean_ctor_set(v___x_4019_, 2, v___x_4018_);
lean_ctor_set_float(v___x_4019_, sizeof(void*)*3, v___x_4016_);
lean_ctor_set_float(v___x_4019_, sizeof(void*)*3 + 8, v___x_4016_);
lean_ctor_set_uint8(v___x_4019_, sizeof(void*)*3 + 16, v___x_4017_);
v___x_4020_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___closed__0));
v___x_4021_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4021_, 0, v___x_4019_);
lean_ctor_set(v___x_4021_, 1, v_a_3991_);
lean_ctor_set(v___x_4021_, 2, v___x_4020_);
lean_inc(v_ref_3989_);
v___x_4022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4022_, 0, v_ref_3989_);
lean_ctor_set(v___x_4022_, 1, v___x_4021_);
v___x_4023_ = l_Lean_PersistentArray_push___redArg(v_traces_4010_, v___x_4022_);
if (v_isShared_4013_ == 0)
{
lean_ctor_set(v___x_4012_, 0, v___x_4023_);
v___x_4025_ = v___x_4012_;
goto v_reusejp_4024_;
}
else
{
lean_object* v_reuseFailAlloc_4033_; 
v_reuseFailAlloc_4033_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4033_, 0, v___x_4023_);
lean_ctor_set_uint64(v_reuseFailAlloc_4033_, sizeof(void*)*1, v_tid_4009_);
v___x_4025_ = v_reuseFailAlloc_4033_;
goto v_reusejp_4024_;
}
v_reusejp_4024_:
{
lean_object* v___x_4027_; 
if (v_isShared_4008_ == 0)
{
lean_ctor_set(v___x_4007_, 4, v___x_4025_);
v___x_4027_ = v___x_4007_;
goto v_reusejp_4026_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v_env_3997_);
lean_ctor_set(v_reuseFailAlloc_4032_, 1, v_nextMacroScope_3998_);
lean_ctor_set(v_reuseFailAlloc_4032_, 2, v_ngen_3999_);
lean_ctor_set(v_reuseFailAlloc_4032_, 3, v_auxDeclNGen_4000_);
lean_ctor_set(v_reuseFailAlloc_4032_, 4, v___x_4025_);
lean_ctor_set(v_reuseFailAlloc_4032_, 5, v_cache_4001_);
lean_ctor_set(v_reuseFailAlloc_4032_, 6, v_recordedDeps_4002_);
lean_ctor_set(v_reuseFailAlloc_4032_, 7, v_messages_4003_);
lean_ctor_set(v_reuseFailAlloc_4032_, 8, v_infoState_4004_);
lean_ctor_set(v_reuseFailAlloc_4032_, 9, v_snapshotTasks_4005_);
v___x_4027_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4026_;
}
v_reusejp_4026_:
{
lean_object* v___x_4028_; lean_object* v___x_4030_; 
v___x_4028_ = lean_st_ref_put(v___y_3987_, v___x_4027_);
if (v_isShared_3994_ == 0)
{
lean_ctor_set(v___x_3993_, 0, v___x_4014_);
v___x_4030_ = v___x_3993_;
goto v_reusejp_4029_;
}
else
{
lean_object* v_reuseFailAlloc_4031_; 
v_reuseFailAlloc_4031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4031_, 0, v___x_4014_);
v___x_4030_ = v_reuseFailAlloc_4031_;
goto v_reusejp_4029_;
}
v_reusejp_4029_:
{
return v___x_4030_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___boxed(lean_object* v_cls_4037_, lean_object* v_msg_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_){
_start:
{
lean_object* v_res_4042_; 
v_res_4042_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_4037_, v_msg_4038_, v___y_4039_, v___y_4040_);
lean_dec(v___y_4040_);
lean_dec_ref(v___y_4039_);
return v_res_4042_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1(void){
_start:
{
lean_object* v___x_4044_; lean_object* v___x_4045_; 
v___x_4044_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__0));
v___x_4045_ = l_Lean_stringToMessageData(v___x_4044_);
return v___x_4045_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(lean_object* v_decl_4046_, uint8_t v_forceExpose_4047_, lean_object* v_cls_4048_, lean_object* v_x_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_){
_start:
{
lean_object* v_toCold_4053_; lean_object* v_options_4054_; uint8_t v_hasTrace_4055_; 
v_toCold_4053_ = lean_ctor_get(v___y_4050_, 0);
v_options_4054_ = lean_ctor_get(v_toCold_4053_, 2);
v_hasTrace_4055_ = lean_ctor_get_uint8(v_options_4054_, sizeof(void*)*1);
if (v_hasTrace_4055_ == 0)
{
lean_object* v___x_4056_; 
lean_dec(v_cls_4048_);
v___x_4056_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_4046_, v_forceExpose_4047_, v___y_4050_, v___y_4051_);
return v___x_4056_;
}
else
{
lean_object* v_inheritedTraceOptions_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; uint8_t v___x_4060_; 
v_inheritedTraceOptions_4057_ = lean_ctor_get(v_toCold_4053_, 11);
v___x_4058_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_4048_);
v___x_4059_ = l_Lean_Name_append(v___x_4058_, v_cls_4048_);
v___x_4060_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4057_, v_options_4054_, v___x_4059_);
lean_dec(v___x_4059_);
if (v___x_4060_ == 0)
{
lean_object* v___x_4061_; 
lean_dec(v_cls_4048_);
v___x_4061_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_4046_, v_forceExpose_4047_, v___y_4050_, v___y_4051_);
return v___x_4061_;
}
else
{
lean_object* v___x_4062_; lean_object* v___x_4063_; 
v___x_4062_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1);
v___x_4063_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_4048_, v___x_4062_, v___y_4050_, v___y_4051_);
if (lean_obj_tag(v___x_4063_) == 0)
{
lean_object* v___x_4064_; 
lean_dec_ref_known(v___x_4063_, 1);
v___x_4064_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_4046_, v_forceExpose_4047_, v___y_4050_, v___y_4051_);
return v___x_4064_;
}
else
{
lean_dec(v_decl_4046_);
return v___x_4063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___boxed(lean_object* v_decl_4065_, lean_object* v_forceExpose_4066_, lean_object* v_cls_4067_, lean_object* v_x_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_){
_start:
{
uint8_t v_forceExpose_boxed_4072_; lean_object* v_res_4073_; 
v_forceExpose_boxed_4072_ = lean_unbox(v_forceExpose_4066_);
v_res_4073_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_4065_, v_forceExpose_boxed_4072_, v_cls_4067_, v_x_4068_, v___y_4069_, v___y_4070_);
lean_dec(v___y_4070_);
lean_dec_ref(v___y_4069_);
lean_dec(v_x_4068_);
return v_res_4073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2___redArg(lean_object* v_opt_4074_, lean_object* v___y_4075_){
_start:
{
lean_object* v___x_4077_; uint8_t v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; 
v___x_4077_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4075_);
v___x_4078_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v___x_4077_, v_opt_4074_);
lean_dec_ref(v___x_4077_);
v___x_4079_ = lean_box(v___x_4078_);
v___x_4080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4080_, 0, v___x_4079_);
return v___x_4080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2___redArg___boxed(lean_object* v_opt_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_){
_start:
{
lean_object* v_res_4084_; 
v_res_4084_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2___redArg(v_opt_4081_, v___y_4082_);
lean_dec_ref(v___y_4082_);
lean_dec_ref(v_opt_4081_);
return v_res_4084_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3(void){
_start:
{
lean_object* v___x_4090_; lean_object* v___x_4091_; 
v___x_4090_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__2));
v___x_4091_ = l_Lean_stringToMessageData(v___x_4090_);
return v___x_4091_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5(void){
_start:
{
lean_object* v___x_4093_; lean_object* v___x_4094_; 
v___x_4093_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__4));
v___x_4094_ = l_Lean_stringToMessageData(v___x_4093_);
return v___x_4094_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7(void){
_start:
{
lean_object* v___x_4096_; lean_object* v___x_4097_; 
v___x_4096_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__6));
v___x_4097_ = l_Lean_stringToMessageData(v___x_4096_);
return v___x_4097_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9(lean_object* v_decl_4098_, uint8_t v_forceExpose_4099_, uint8_t v_hasTrace_4100_, uint8_t v___x_4101_, lean_object* v___x_4102_, lean_object* v_cls_4103_, lean_object* v___x_4104_, lean_object* v_____x_4105_, lean_object* v_exportedInfo_x3f_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_){
_start:
{
lean_object* v___y_4111_; lean_object* v___y_4112_; lean_object* v_a_4113_; lean_object* v___y_4124_; lean_object* v___y_4125_; lean_object* v_a_4126_; lean_object* v___y_4137_; lean_object* v___y_4138_; lean_object* v___y_4139_; lean_object* v___y_4140_; lean_object* v___y_4141_; lean_object* v___y_4142_; lean_object* v___y_4143_; lean_object* v___y_4144_; lean_object* v___y_4145_; lean_object* v___y_4146_; lean_object* v___y_4147_; lean_object* v_snd_4209_; lean_object* v_fst_4210_; lean_object* v___x_4212_; uint8_t v_isShared_4213_; uint8_t v_isSharedCheck_4341_; 
v_snd_4209_ = lean_ctor_get(v_____x_4105_, 1);
v_fst_4210_ = lean_ctor_get(v_____x_4105_, 0);
v_isSharedCheck_4341_ = !lean_is_exclusive(v_____x_4105_);
if (v_isSharedCheck_4341_ == 0)
{
v___x_4212_ = v_____x_4105_;
v_isShared_4213_ = v_isSharedCheck_4341_;
goto v_resetjp_4211_;
}
else
{
lean_inc(v_snd_4209_);
lean_inc(v_fst_4210_);
lean_dec(v_____x_4105_);
v___x_4212_ = lean_box(0);
v_isShared_4213_ = v_isSharedCheck_4341_;
goto v_resetjp_4211_;
}
v___jp_4110_:
{
lean_object* v___x_4114_; lean_object* v___x_4116_; uint8_t v_isShared_4117_; uint8_t v_isSharedCheck_4121_; 
v___x_4114_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4111_, v___y_4112_);
v_isSharedCheck_4121_ = !lean_is_exclusive(v___x_4114_);
if (v_isSharedCheck_4121_ == 0)
{
lean_object* v_unused_4122_; 
v_unused_4122_ = lean_ctor_get(v___x_4114_, 0);
lean_dec(v_unused_4122_);
v___x_4116_ = v___x_4114_;
v_isShared_4117_ = v_isSharedCheck_4121_;
goto v_resetjp_4115_;
}
else
{
lean_dec(v___x_4114_);
v___x_4116_ = lean_box(0);
v_isShared_4117_ = v_isSharedCheck_4121_;
goto v_resetjp_4115_;
}
v_resetjp_4115_:
{
lean_object* v___x_4119_; 
if (v_isShared_4117_ == 0)
{
lean_ctor_set_tag(v___x_4116_, 1);
lean_ctor_set(v___x_4116_, 0, v_a_4113_);
v___x_4119_ = v___x_4116_;
goto v_reusejp_4118_;
}
else
{
lean_object* v_reuseFailAlloc_4120_; 
v_reuseFailAlloc_4120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4120_, 0, v_a_4113_);
v___x_4119_ = v_reuseFailAlloc_4120_;
goto v_reusejp_4118_;
}
v_reusejp_4118_:
{
return v___x_4119_;
}
}
}
v___jp_4123_:
{
lean_object* v___x_4127_; lean_object* v___x_4129_; uint8_t v_isShared_4130_; uint8_t v_isSharedCheck_4134_; 
v___x_4127_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4124_, v___y_4125_);
v_isSharedCheck_4134_ = !lean_is_exclusive(v___x_4127_);
if (v_isSharedCheck_4134_ == 0)
{
lean_object* v_unused_4135_; 
v_unused_4135_ = lean_ctor_get(v___x_4127_, 0);
lean_dec(v_unused_4135_);
v___x_4129_ = v___x_4127_;
v_isShared_4130_ = v_isSharedCheck_4134_;
goto v_resetjp_4128_;
}
else
{
lean_dec(v___x_4127_);
v___x_4129_ = lean_box(0);
v_isShared_4130_ = v_isSharedCheck_4134_;
goto v_resetjp_4128_;
}
v_resetjp_4128_:
{
lean_object* v___x_4132_; 
if (v_isShared_4130_ == 0)
{
lean_ctor_set(v___x_4129_, 0, v_a_4126_);
v___x_4132_ = v___x_4129_;
goto v_reusejp_4131_;
}
else
{
lean_object* v_reuseFailAlloc_4133_; 
v_reuseFailAlloc_4133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4133_, 0, v_a_4126_);
v___x_4132_ = v_reuseFailAlloc_4133_;
goto v_reusejp_4131_;
}
v_reusejp_4131_:
{
return v___x_4132_;
}
}
}
v___jp_4136_:
{
lean_object* v___x_4148_; 
lean_inc_ref(v___y_4144_);
v___x_4148_ = l_Lean_Environment_AddConstAsyncResult_commitConst(v___y_4141_, v___y_4144_, v___y_4143_, v___y_4147_);
if (lean_obj_tag(v___x_4148_) == 0)
{
lean_object* v___x_4149_; lean_object* v___x_4151_; uint8_t v_isShared_4152_; uint8_t v_isSharedCheck_4195_; 
lean_dec_ref_known(v___x_4148_, 1);
lean_dec(v___y_4146_);
lean_inc_ref(v___y_4140_);
v___x_4149_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4140_, v___y_4145_);
v_isSharedCheck_4195_ = !lean_is_exclusive(v___x_4149_);
if (v_isSharedCheck_4195_ == 0)
{
lean_object* v_unused_4196_; 
v_unused_4196_ = lean_ctor_get(v___x_4149_, 0);
lean_dec(v_unused_4196_);
v___x_4151_ = v___x_4149_;
v_isShared_4152_ = v_isSharedCheck_4195_;
goto v_resetjp_4150_;
}
else
{
lean_dec(v___x_4149_);
v___x_4151_ = lean_box(0);
v_isShared_4152_ = v_isSharedCheck_4195_;
goto v_resetjp_4150_;
}
v_resetjp_4150_:
{
lean_object* v___x_4153_; lean_object* v___x_4154_; uint8_t v___x_4155_; 
v___x_4153_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4137_);
v___x_4154_ = l_Lean_Elab_async;
v___x_4155_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v___x_4153_, v___x_4154_);
lean_dec_ref(v___x_4153_);
if (v___x_4155_ == 0)
{
lean_object* v___x_4156_; lean_object* v_r_4157_; 
lean_del_object(v___x_4151_);
lean_dec_ref(v___y_4142_);
lean_dec_ref(v___y_4138_);
v___x_4156_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4144_, v___y_4145_);
lean_dec_ref(v___x_4156_);
v_r_4157_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_4098_, v_forceExpose_4099_, v___y_4137_, v___y_4145_);
if (lean_obj_tag(v_r_4157_) == 0)
{
lean_object* v_a_4158_; lean_object* v___x_4160_; uint8_t v_isShared_4161_; uint8_t v_isSharedCheck_4167_; 
v_a_4158_ = lean_ctor_get(v_r_4157_, 0);
v_isSharedCheck_4167_ = !lean_is_exclusive(v_r_4157_);
if (v_isSharedCheck_4167_ == 0)
{
v___x_4160_ = v_r_4157_;
v_isShared_4161_ = v_isSharedCheck_4167_;
goto v_resetjp_4159_;
}
else
{
lean_inc(v_a_4158_);
lean_dec(v_r_4157_);
v___x_4160_ = lean_box(0);
v_isShared_4161_ = v_isSharedCheck_4167_;
goto v_resetjp_4159_;
}
v_resetjp_4159_:
{
lean_object* v___x_4163_; 
lean_inc(v_a_4158_);
if (v_isShared_4161_ == 0)
{
lean_ctor_set_tag(v___x_4160_, 1);
v___x_4163_ = v___x_4160_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4166_; 
v_reuseFailAlloc_4166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4166_, 0, v_a_4158_);
v___x_4163_ = v_reuseFailAlloc_4166_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
lean_object* v___x_4164_; 
v___x_4164_ = lean_apply_2(v___y_4139_, v___x_4163_, lean_box(0));
if (lean_obj_tag(v___x_4164_) == 0)
{
lean_dec_ref_known(v___x_4164_, 1);
v___y_4124_ = v___y_4140_;
v___y_4125_ = v___y_4145_;
v_a_4126_ = v_a_4158_;
goto v___jp_4123_;
}
else
{
lean_object* v_a_4165_; 
lean_dec(v_a_4158_);
v_a_4165_ = lean_ctor_get(v___x_4164_, 0);
lean_inc(v_a_4165_);
lean_dec_ref_known(v___x_4164_, 1);
v___y_4111_ = v___y_4140_;
v___y_4112_ = v___y_4145_;
v_a_4113_ = v_a_4165_;
goto v___jp_4110_;
}
}
}
}
else
{
lean_object* v_a_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; 
v_a_4168_ = lean_ctor_get(v_r_4157_, 0);
lean_inc(v_a_4168_);
lean_dec_ref_known(v_r_4157_, 1);
v___x_4169_ = lean_box(0);
v___x_4170_ = lean_apply_2(v___y_4139_, v___x_4169_, lean_box(0));
if (lean_obj_tag(v___x_4170_) == 0)
{
lean_dec_ref_known(v___x_4170_, 1);
v___y_4111_ = v___y_4140_;
v___y_4112_ = v___y_4145_;
v_a_4113_ = v_a_4168_;
goto v___jp_4110_;
}
else
{
lean_object* v_a_4171_; 
lean_dec(v_a_4168_);
v_a_4171_ = lean_ctor_get(v___x_4170_, 0);
lean_inc(v_a_4171_);
lean_dec_ref_known(v___x_4170_, 1);
v___y_4111_ = v___y_4140_;
v___y_4112_ = v___y_4145_;
v_a_4113_ = v_a_4171_;
goto v___jp_4110_;
}
}
}
else
{
lean_object* v___x_4172_; lean_object* v___x_4174_; 
lean_dec_ref(v___y_4144_);
lean_dec_ref(v___y_4140_);
lean_dec_ref(v___y_4139_);
lean_dec(v_decl_4098_);
v___x_4172_ = l_IO_CancelToken_new();
if (v_isShared_4152_ == 0)
{
lean_ctor_set_tag(v___x_4151_, 1);
lean_ctor_set(v___x_4151_, 0, v___x_4172_);
v___x_4174_ = v___x_4151_;
goto v_reusejp_4173_;
}
else
{
lean_object* v_reuseFailAlloc_4194_; 
v_reuseFailAlloc_4194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4194_, 0, v___x_4172_);
v___x_4174_ = v_reuseFailAlloc_4194_;
goto v_reusejp_4173_;
}
v_reusejp_4173_:
{
lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; 
v___x_4175_ = lean_unsigned_to_nat(0u);
v___x_4176_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1));
v___x_4177_ = l_Lean_Name_toString(v___x_4176_, v_hasTrace_4100_);
lean_inc_ref(v___x_4174_);
v___x_4178_ = l_Lean_Core_wrapAsyncAsSnapshot___redArg(v___y_4142_, v___x_4174_, v___x_4177_, v___y_4137_, v___y_4145_);
if (lean_obj_tag(v___x_4178_) == 0)
{
lean_object* v_a_4179_; lean_object* v_checked_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; 
v_a_4179_ = lean_ctor_get(v___x_4178_, 0);
lean_inc(v_a_4179_);
lean_dec_ref_known(v___x_4178_, 1);
v_checked_4180_ = lean_ctor_get(v___y_4138_, 2);
lean_inc_ref(v_checked_4180_);
lean_dec_ref(v___y_4138_);
v___x_4181_ = lean_io_map_task(v_a_4179_, v_checked_4180_, v___x_4175_, v___x_4101_);
v___x_4182_ = lean_box(0);
v___x_4183_ = lean_box(2);
v___x_4184_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4184_, 0, v___x_4182_);
lean_ctor_set(v___x_4184_, 1, v___x_4183_);
lean_ctor_set(v___x_4184_, 2, v___x_4174_);
lean_ctor_set(v___x_4184_, 3, v___x_4181_);
v___x_4185_ = l_Lean_Core_logSnapshotTask___redArg(v___x_4184_, v___y_4145_);
return v___x_4185_;
}
else
{
lean_object* v_a_4186_; lean_object* v___x_4188_; uint8_t v_isShared_4189_; uint8_t v_isSharedCheck_4193_; 
lean_dec_ref(v___x_4174_);
lean_dec_ref(v___y_4138_);
v_a_4186_ = lean_ctor_get(v___x_4178_, 0);
v_isSharedCheck_4193_ = !lean_is_exclusive(v___x_4178_);
if (v_isSharedCheck_4193_ == 0)
{
v___x_4188_ = v___x_4178_;
v_isShared_4189_ = v_isSharedCheck_4193_;
goto v_resetjp_4187_;
}
else
{
lean_inc(v_a_4186_);
lean_dec(v___x_4178_);
v___x_4188_ = lean_box(0);
v_isShared_4189_ = v_isSharedCheck_4193_;
goto v_resetjp_4187_;
}
v_resetjp_4187_:
{
lean_object* v___x_4191_; 
if (v_isShared_4189_ == 0)
{
v___x_4191_ = v___x_4188_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4192_; 
v_reuseFailAlloc_4192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4192_, 0, v_a_4186_);
v___x_4191_ = v_reuseFailAlloc_4192_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
return v___x_4191_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4197_; lean_object* v___x_4199_; uint8_t v_isShared_4200_; uint8_t v_isSharedCheck_4208_; 
lean_dec_ref(v___y_4144_);
lean_dec_ref(v___y_4142_);
lean_dec_ref(v___y_4140_);
lean_dec_ref(v___y_4139_);
lean_dec_ref(v___y_4138_);
lean_dec(v_decl_4098_);
v_a_4197_ = lean_ctor_get(v___x_4148_, 0);
v_isSharedCheck_4208_ = !lean_is_exclusive(v___x_4148_);
if (v_isSharedCheck_4208_ == 0)
{
v___x_4199_ = v___x_4148_;
v_isShared_4200_ = v_isSharedCheck_4208_;
goto v_resetjp_4198_;
}
else
{
lean_inc(v_a_4197_);
lean_dec(v___x_4148_);
v___x_4199_ = lean_box(0);
v_isShared_4200_ = v_isSharedCheck_4208_;
goto v_resetjp_4198_;
}
v_resetjp_4198_:
{
lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4206_; 
v___x_4201_ = lean_io_error_to_string(v_a_4197_);
v___x_4202_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4202_, 0, v___x_4201_);
v___x_4203_ = l_Lean_MessageData_ofFormat(v___x_4202_);
v___x_4204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4204_, 0, v___y_4146_);
lean_ctor_set(v___x_4204_, 1, v___x_4203_);
if (v_isShared_4200_ == 0)
{
lean_ctor_set(v___x_4199_, 0, v___x_4204_);
v___x_4206_ = v___x_4199_;
goto v_reusejp_4205_;
}
else
{
lean_object* v_reuseFailAlloc_4207_; 
v_reuseFailAlloc_4207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4207_, 0, v___x_4204_);
v___x_4206_ = v_reuseFailAlloc_4207_;
goto v_reusejp_4205_;
}
v_reusejp_4205_:
{
return v___x_4206_;
}
}
}
}
v_resetjp_4211_:
{
lean_object* v_fst_4214_; lean_object* v_snd_4215_; lean_object* v___x_4217_; uint8_t v_isShared_4218_; uint8_t v_isSharedCheck_4340_; 
v_fst_4214_ = lean_ctor_get(v_snd_4209_, 0);
v_snd_4215_ = lean_ctor_get(v_snd_4209_, 1);
v_isSharedCheck_4340_ = !lean_is_exclusive(v_snd_4209_);
if (v_isSharedCheck_4340_ == 0)
{
v___x_4217_ = v_snd_4209_;
v_isShared_4218_ = v_isSharedCheck_4340_;
goto v_resetjp_4216_;
}
else
{
lean_inc(v_snd_4215_);
lean_inc(v_fst_4214_);
lean_dec(v_snd_4209_);
v___x_4217_ = lean_box(0);
v_isShared_4218_ = v_isSharedCheck_4340_;
goto v_resetjp_4216_;
}
v_resetjp_4216_:
{
lean_object* v___y_4220_; lean_object* v___y_4221_; lean_object* v___y_4222_; lean_object* v___y_4223_; lean_object* v___y_4224_; lean_object* v_exportedInfo_x3f_4250_; lean_object* v___y_4251_; lean_object* v___y_4252_; lean_object* v___y_4262_; lean_object* v___y_4263_; lean_object* v___y_4266_; lean_object* v___y_4267_; lean_object* v___y_4270_; uint8_t v___y_4271_; lean_object* v___y_4272_; lean_object* v___y_4295_; lean_object* v___y_4296_; lean_object* v___x_4330_; lean_object* v_env_4331_; uint8_t v___x_4332_; 
v___x_4330_ = lean_st_ref_get(v___y_4108_);
v_env_4331_ = lean_ctor_get(v___x_4330_, 0);
lean_inc_ref(v_env_4331_);
lean_dec(v___x_4330_);
v___x_4332_ = l_Lean_Environment_containsOnBranch(v_env_4331_, v_fst_4210_);
lean_dec_ref(v_env_4331_);
if (v___x_4332_ == 0)
{
lean_del_object(v___x_4212_);
v___y_4295_ = v___y_4107_;
v___y_4296_ = v___y_4108_;
goto v___jp_4294_;
}
else
{
lean_object* v___x_4333_; lean_object* v_env_4334_; lean_object* v___x_4335_; lean_object* v___x_4337_; 
lean_del_object(v___x_4217_);
lean_dec(v_snd_4215_);
lean_dec(v_fst_4214_);
lean_dec(v_exportedInfo_x3f_4106_);
lean_dec(v___x_4104_);
lean_dec(v_cls_4103_);
lean_dec_ref(v___x_4102_);
lean_dec(v_decl_4098_);
v___x_4333_ = lean_st_ref_get(v___y_4108_);
v_env_4334_ = lean_ctor_get(v___x_4333_, 0);
lean_inc_ref(v_env_4334_);
lean_dec(v___x_4333_);
v___x_4335_ = lean_elab_environment_to_kernel_env(v_env_4334_);
if (v_isShared_4213_ == 0)
{
lean_ctor_set_tag(v___x_4212_, 1);
lean_ctor_set(v___x_4212_, 1, v_fst_4210_);
lean_ctor_set(v___x_4212_, 0, v___x_4335_);
v___x_4337_ = v___x_4212_;
goto v_reusejp_4336_;
}
else
{
lean_object* v_reuseFailAlloc_4339_; 
v_reuseFailAlloc_4339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4339_, 0, v___x_4335_);
lean_ctor_set(v_reuseFailAlloc_4339_, 1, v_fst_4210_);
v___x_4337_ = v_reuseFailAlloc_4339_;
goto v_reusejp_4336_;
}
v_reusejp_4336_:
{
lean_object* v___x_4338_; 
v___x_4338_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v___x_4337_, v___y_4107_, v___y_4108_);
return v___x_4338_;
}
}
v___jp_4219_:
{
lean_object* v_ref_4225_; uint8_t v___x_4226_; lean_object* v___x_4227_; 
v_ref_4225_ = lean_ctor_get(v___y_4220_, 2);
v___x_4226_ = lean_unbox(v_snd_4215_);
lean_dec(v_snd_4215_);
lean_inc_ref(v___y_4223_);
v___x_4227_ = l_Lean_Environment_addConstAsync(v___y_4223_, v_fst_4210_, v___x_4226_, v___y_4224_, v___x_4101_, v_hasTrace_4100_);
if (lean_obj_tag(v___x_4227_) == 0)
{
lean_object* v_a_4228_; lean_object* v_mainEnv_4229_; lean_object* v_asyncEnv_4230_; lean_object* v___f_4231_; lean_object* v___x_4232_; lean_object* v___f_4233_; lean_object* v___x_4234_; 
lean_del_object(v___x_4217_);
v_a_4228_ = lean_ctor_get(v___x_4227_, 0);
lean_inc_n(v_a_4228_, 3);
lean_dec_ref_known(v___x_4227_, 1);
v_mainEnv_4229_ = lean_ctor_get(v_a_4228_, 0);
lean_inc_ref(v_mainEnv_4229_);
v_asyncEnv_4230_ = lean_ctor_get(v_a_4228_, 1);
lean_inc_ref_n(v_asyncEnv_4230_, 2);
lean_inc(v_ref_4225_);
lean_inc(v___y_4221_);
v___f_4231_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4231_, 0, v___y_4221_);
lean_closure_set(v___f_4231_, 1, v_a_4228_);
lean_closure_set(v___f_4231_, 2, v_ref_4225_);
v___x_4232_ = lean_box(v_forceExpose_4099_);
lean_inc(v_decl_4098_);
v___f_4233_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed), 8, 4);
lean_closure_set(v___f_4233_, 0, v_a_4228_);
lean_closure_set(v___f_4233_, 1, v_asyncEnv_4230_);
lean_closure_set(v___f_4233_, 2, v_decl_4098_);
lean_closure_set(v___f_4233_, 3, v___x_4232_);
v___x_4234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4234_, 0, v_fst_4214_);
if (lean_obj_tag(v___y_4222_) == 0)
{
lean_inc(v_ref_4225_);
lean_inc_ref(v___x_4234_);
v___y_4137_ = v___y_4220_;
v___y_4138_ = v___y_4223_;
v___y_4139_ = v___f_4231_;
v___y_4140_ = v_mainEnv_4229_;
v___y_4141_ = v_a_4228_;
v___y_4142_ = v___f_4233_;
v___y_4143_ = v___x_4234_;
v___y_4144_ = v_asyncEnv_4230_;
v___y_4145_ = v___y_4221_;
v___y_4146_ = v_ref_4225_;
v___y_4147_ = v___x_4234_;
goto v___jp_4136_;
}
else
{
lean_inc(v_ref_4225_);
v___y_4137_ = v___y_4220_;
v___y_4138_ = v___y_4223_;
v___y_4139_ = v___f_4231_;
v___y_4140_ = v_mainEnv_4229_;
v___y_4141_ = v_a_4228_;
v___y_4142_ = v___f_4233_;
v___y_4143_ = v___x_4234_;
v___y_4144_ = v_asyncEnv_4230_;
v___y_4145_ = v___y_4221_;
v___y_4146_ = v_ref_4225_;
v___y_4147_ = v___y_4222_;
goto v___jp_4136_;
}
}
else
{
lean_object* v_a_4235_; lean_object* v___x_4237_; uint8_t v_isShared_4238_; uint8_t v_isSharedCheck_4248_; 
lean_dec_ref(v___y_4223_);
lean_dec(v___y_4222_);
lean_dec(v_fst_4214_);
lean_dec(v_decl_4098_);
v_a_4235_ = lean_ctor_get(v___x_4227_, 0);
v_isSharedCheck_4248_ = !lean_is_exclusive(v___x_4227_);
if (v_isSharedCheck_4248_ == 0)
{
v___x_4237_ = v___x_4227_;
v_isShared_4238_ = v_isSharedCheck_4248_;
goto v_resetjp_4236_;
}
else
{
lean_inc(v_a_4235_);
lean_dec(v___x_4227_);
v___x_4237_ = lean_box(0);
v_isShared_4238_ = v_isSharedCheck_4248_;
goto v_resetjp_4236_;
}
v_resetjp_4236_:
{
lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4243_; 
v___x_4239_ = lean_io_error_to_string(v_a_4235_);
v___x_4240_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4240_, 0, v___x_4239_);
v___x_4241_ = l_Lean_MessageData_ofFormat(v___x_4240_);
lean_inc(v_ref_4225_);
if (v_isShared_4218_ == 0)
{
lean_ctor_set(v___x_4217_, 1, v___x_4241_);
lean_ctor_set(v___x_4217_, 0, v_ref_4225_);
v___x_4243_ = v___x_4217_;
goto v_reusejp_4242_;
}
else
{
lean_object* v_reuseFailAlloc_4247_; 
v_reuseFailAlloc_4247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4247_, 0, v_ref_4225_);
lean_ctor_set(v_reuseFailAlloc_4247_, 1, v___x_4241_);
v___x_4243_ = v_reuseFailAlloc_4247_;
goto v_reusejp_4242_;
}
v_reusejp_4242_:
{
lean_object* v___x_4245_; 
if (v_isShared_4238_ == 0)
{
lean_ctor_set(v___x_4237_, 0, v___x_4243_);
v___x_4245_ = v___x_4237_;
goto v_reusejp_4244_;
}
else
{
lean_object* v_reuseFailAlloc_4246_; 
v_reuseFailAlloc_4246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4246_, 0, v___x_4243_);
v___x_4245_ = v_reuseFailAlloc_4246_;
goto v_reusejp_4244_;
}
v_reusejp_4244_:
{
return v___x_4245_;
}
}
}
}
}
v___jp_4249_:
{
lean_object* v___x_4253_; 
v___x_4253_ = lean_st_ref_get(v___y_4252_);
if (lean_obj_tag(v_exportedInfo_x3f_4250_) == 0)
{
lean_object* v_env_4254_; lean_object* v___x_4255_; 
v_env_4254_ = lean_ctor_get(v___x_4253_, 0);
lean_inc_ref(v_env_4254_);
lean_dec(v___x_4253_);
v___x_4255_ = lean_box(0);
v___y_4220_ = v___y_4251_;
v___y_4221_ = v___y_4252_;
v___y_4222_ = v_exportedInfo_x3f_4250_;
v___y_4223_ = v_env_4254_;
v___y_4224_ = v___x_4255_;
goto v___jp_4219_;
}
else
{
lean_object* v_env_4256_; lean_object* v_val_4257_; uint8_t v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; 
v_env_4256_ = lean_ctor_get(v___x_4253_, 0);
lean_inc_ref(v_env_4256_);
lean_dec(v___x_4253_);
v_val_4257_ = lean_ctor_get(v_exportedInfo_x3f_4250_, 0);
v___x_4258_ = l_Lean_ConstantKind_ofConstantInfo(v_val_4257_);
v___x_4259_ = lean_box(v___x_4258_);
v___x_4260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4260_, 0, v___x_4259_);
v___y_4220_ = v___y_4251_;
v___y_4221_ = v___y_4252_;
v___y_4222_ = v_exportedInfo_x3f_4250_;
v___y_4223_ = v_env_4256_;
v___y_4224_ = v___x_4260_;
goto v___jp_4219_;
}
}
v___jp_4261_:
{
lean_object* v___x_4264_; 
lean_inc(v_fst_4214_);
v___x_4264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4264_, 0, v_fst_4214_);
v_exportedInfo_x3f_4250_ = v___x_4264_;
v___y_4251_ = v___y_4262_;
v___y_4252_ = v___y_4263_;
goto v___jp_4249_;
}
v___jp_4265_:
{
lean_object* v___x_4268_; 
lean_inc(v_fst_4214_);
v___x_4268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4268_, 0, v_fst_4214_);
v_exportedInfo_x3f_4250_ = v___x_4268_;
v___y_4251_ = v___y_4266_;
v___y_4252_ = v___y_4267_;
goto v___jp_4249_;
}
v___jp_4269_:
{
lean_object* v___x_4273_; lean_object* v_env_4274_; lean_object* v_nextMacroScope_4275_; lean_object* v_ngen_4276_; lean_object* v_auxDeclNGen_4277_; lean_object* v_traceState_4278_; lean_object* v_recordedDeps_4279_; lean_object* v_messages_4280_; lean_object* v_infoState_4281_; lean_object* v_snapshotTasks_4282_; lean_object* v___x_4284_; uint8_t v_isShared_4285_; uint8_t v_isSharedCheck_4292_; 
v___x_4273_ = lean_st_ref_take(v___y_4272_);
v_env_4274_ = lean_ctor_get(v___x_4273_, 0);
v_nextMacroScope_4275_ = lean_ctor_get(v___x_4273_, 1);
v_ngen_4276_ = lean_ctor_get(v___x_4273_, 2);
v_auxDeclNGen_4277_ = lean_ctor_get(v___x_4273_, 3);
v_traceState_4278_ = lean_ctor_get(v___x_4273_, 4);
v_recordedDeps_4279_ = lean_ctor_get(v___x_4273_, 6);
v_messages_4280_ = lean_ctor_get(v___x_4273_, 7);
v_infoState_4281_ = lean_ctor_get(v___x_4273_, 8);
v_snapshotTasks_4282_ = lean_ctor_get(v___x_4273_, 9);
v_isSharedCheck_4292_ = !lean_is_exclusive(v___x_4273_);
if (v_isSharedCheck_4292_ == 0)
{
lean_object* v_unused_4293_; 
v_unused_4293_ = lean_ctor_get(v___x_4273_, 5);
lean_dec(v_unused_4293_);
v___x_4284_ = v___x_4273_;
v_isShared_4285_ = v_isSharedCheck_4292_;
goto v_resetjp_4283_;
}
else
{
lean_inc(v_snapshotTasks_4282_);
lean_inc(v_infoState_4281_);
lean_inc(v_messages_4280_);
lean_inc(v_recordedDeps_4279_);
lean_inc(v_traceState_4278_);
lean_inc(v_auxDeclNGen_4277_);
lean_inc(v_ngen_4276_);
lean_inc(v_nextMacroScope_4275_);
lean_inc(v_env_4274_);
lean_dec(v___x_4273_);
v___x_4284_ = lean_box(0);
v_isShared_4285_ = v_isSharedCheck_4292_;
goto v_resetjp_4283_;
}
v_resetjp_4283_:
{
lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4289_; 
v___x_4286_ = l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
lean_inc(v_snd_4215_);
lean_inc(v_fst_4210_);
v___x_4287_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_4286_, v_env_4274_, v_fst_4210_, v_snd_4215_, v___y_4271_);
if (v_isShared_4285_ == 0)
{
lean_ctor_set(v___x_4284_, 5, v___x_4102_);
lean_ctor_set(v___x_4284_, 0, v___x_4287_);
v___x_4289_ = v___x_4284_;
goto v_reusejp_4288_;
}
else
{
lean_object* v_reuseFailAlloc_4291_; 
v_reuseFailAlloc_4291_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4291_, 0, v___x_4287_);
lean_ctor_set(v_reuseFailAlloc_4291_, 1, v_nextMacroScope_4275_);
lean_ctor_set(v_reuseFailAlloc_4291_, 2, v_ngen_4276_);
lean_ctor_set(v_reuseFailAlloc_4291_, 3, v_auxDeclNGen_4277_);
lean_ctor_set(v_reuseFailAlloc_4291_, 4, v_traceState_4278_);
lean_ctor_set(v_reuseFailAlloc_4291_, 5, v___x_4102_);
lean_ctor_set(v_reuseFailAlloc_4291_, 6, v_recordedDeps_4279_);
lean_ctor_set(v_reuseFailAlloc_4291_, 7, v_messages_4280_);
lean_ctor_set(v_reuseFailAlloc_4291_, 8, v_infoState_4281_);
lean_ctor_set(v_reuseFailAlloc_4291_, 9, v_snapshotTasks_4282_);
v___x_4289_ = v_reuseFailAlloc_4291_;
goto v_reusejp_4288_;
}
v_reusejp_4288_:
{
lean_object* v___x_4290_; 
v___x_4290_ = lean_st_ref_put(v___y_4272_, v___x_4289_);
v_exportedInfo_x3f_4250_ = v_exportedInfo_x3f_4106_;
v___y_4251_ = v___y_4270_;
v___y_4252_ = v___y_4272_;
goto v___jp_4249_;
}
}
}
v___jp_4294_:
{
lean_object* v___x_4297_; uint8_t v___x_4298_; 
lean_inc(v_decl_4098_);
v___x_4297_ = l_Lean_Declaration_getTopLevelNames(v_decl_4098_);
v___x_4298_ = l_List_all___at___00Lean_checkSmartCasts_spec__5(v___x_4297_);
lean_dec(v___x_4297_);
if (v___x_4298_ == 0)
{
lean_dec(v___x_4104_);
if (lean_obj_tag(v_exportedInfo_x3f_4106_) == 0)
{
if (v___x_4298_ == 0)
{
lean_object* v_toCold_4299_; lean_object* v_options_4300_; uint8_t v_hasTrace_4301_; 
lean_dec_ref(v___x_4102_);
v_toCold_4299_ = lean_ctor_get(v___y_4295_, 0);
v_options_4300_ = lean_ctor_get(v_toCold_4299_, 2);
v_hasTrace_4301_ = lean_ctor_get_uint8(v_options_4300_, sizeof(void*)*1);
if (v_hasTrace_4301_ == 0)
{
lean_dec(v_cls_4103_);
v___y_4266_ = v___y_4295_;
v___y_4267_ = v___y_4296_;
goto v___jp_4265_;
}
else
{
lean_object* v_inheritedTraceOptions_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; uint8_t v___x_4305_; 
v_inheritedTraceOptions_4302_ = lean_ctor_get(v_toCold_4299_, 11);
v___x_4303_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_4103_);
v___x_4304_ = l_Lean_Name_append(v___x_4303_, v_cls_4103_);
v___x_4305_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4302_, v_options_4300_, v___x_4304_);
lean_dec(v___x_4304_);
if (v___x_4305_ == 0)
{
lean_dec(v_cls_4103_);
v___y_4266_ = v___y_4295_;
v___y_4267_ = v___y_4296_;
goto v___jp_4265_;
}
else
{
lean_object* v___x_4306_; lean_object* v___x_4307_; 
v___x_4306_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3);
v___x_4307_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_4103_, v___x_4306_, v___y_4295_, v___y_4296_);
if (lean_obj_tag(v___x_4307_) == 0)
{
lean_dec_ref_known(v___x_4307_, 1);
v___y_4266_ = v___y_4295_;
v___y_4267_ = v___y_4296_;
goto v___jp_4265_;
}
else
{
lean_del_object(v___x_4217_);
lean_dec(v_snd_4215_);
lean_dec(v_fst_4214_);
lean_dec(v_fst_4210_);
lean_dec(v_decl_4098_);
return v___x_4307_;
}
}
}
}
else
{
lean_dec(v_cls_4103_);
v___y_4270_ = v___y_4295_;
v___y_4271_ = v___x_4298_;
v___y_4272_ = v___y_4296_;
goto v___jp_4269_;
}
}
else
{
lean_dec(v_cls_4103_);
v___y_4270_ = v___y_4295_;
v___y_4271_ = v___x_4298_;
v___y_4272_ = v___y_4296_;
goto v___jp_4269_;
}
}
else
{
lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v_a_4310_; uint8_t v___x_4311_; 
lean_dec(v_exportedInfo_x3f_4106_);
lean_dec_ref(v___x_4102_);
v___x_4308_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_4309_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2___redArg(v___x_4308_, v___y_4295_);
v_a_4310_ = lean_ctor_get(v___x_4309_, 0);
lean_inc(v_a_4310_);
lean_dec_ref(v___x_4309_);
v___x_4311_ = lean_unbox(v_a_4310_);
lean_dec(v_a_4310_);
if (v___x_4311_ == 0)
{
lean_object* v_toCold_4312_; lean_object* v_options_4313_; uint8_t v_hasTrace_4314_; 
v_toCold_4312_ = lean_ctor_get(v___y_4295_, 0);
v_options_4313_ = lean_ctor_get(v_toCold_4312_, 2);
v_hasTrace_4314_ = lean_ctor_get_uint8(v_options_4313_, sizeof(void*)*1);
if (v_hasTrace_4314_ == 0)
{
lean_dec(v_cls_4103_);
v_exportedInfo_x3f_4250_ = v___x_4104_;
v___y_4251_ = v___y_4295_;
v___y_4252_ = v___y_4296_;
goto v___jp_4249_;
}
else
{
lean_object* v_inheritedTraceOptions_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; uint8_t v___x_4318_; 
v_inheritedTraceOptions_4315_ = lean_ctor_get(v_toCold_4312_, 11);
v___x_4316_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_4103_);
v___x_4317_ = l_Lean_Name_append(v___x_4316_, v_cls_4103_);
v___x_4318_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4315_, v_options_4313_, v___x_4317_);
lean_dec(v___x_4317_);
if (v___x_4318_ == 0)
{
lean_dec(v_cls_4103_);
v_exportedInfo_x3f_4250_ = v___x_4104_;
v___y_4251_ = v___y_4295_;
v___y_4252_ = v___y_4296_;
goto v___jp_4249_;
}
else
{
lean_object* v___x_4319_; lean_object* v___x_4320_; 
v___x_4319_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5);
v___x_4320_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_4103_, v___x_4319_, v___y_4295_, v___y_4296_);
if (lean_obj_tag(v___x_4320_) == 0)
{
lean_dec_ref_known(v___x_4320_, 1);
v_exportedInfo_x3f_4250_ = v___x_4104_;
v___y_4251_ = v___y_4295_;
v___y_4252_ = v___y_4296_;
goto v___jp_4249_;
}
else
{
lean_del_object(v___x_4217_);
lean_dec(v_snd_4215_);
lean_dec(v_fst_4214_);
lean_dec(v_fst_4210_);
lean_dec(v___x_4104_);
lean_dec(v_decl_4098_);
return v___x_4320_;
}
}
}
}
else
{
lean_object* v_toCold_4321_; lean_object* v_options_4322_; uint8_t v_hasTrace_4323_; 
lean_dec(v___x_4104_);
v_toCold_4321_ = lean_ctor_get(v___y_4295_, 0);
v_options_4322_ = lean_ctor_get(v_toCold_4321_, 2);
v_hasTrace_4323_ = lean_ctor_get_uint8(v_options_4322_, sizeof(void*)*1);
if (v_hasTrace_4323_ == 0)
{
lean_dec(v_cls_4103_);
v___y_4262_ = v___y_4295_;
v___y_4263_ = v___y_4296_;
goto v___jp_4261_;
}
else
{
lean_object* v_inheritedTraceOptions_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; uint8_t v___x_4327_; 
v_inheritedTraceOptions_4324_ = lean_ctor_get(v_toCold_4321_, 11);
v___x_4325_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_4103_);
v___x_4326_ = l_Lean_Name_append(v___x_4325_, v_cls_4103_);
v___x_4327_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4324_, v_options_4322_, v___x_4326_);
lean_dec(v___x_4326_);
if (v___x_4327_ == 0)
{
lean_dec(v_cls_4103_);
v___y_4262_ = v___y_4295_;
v___y_4263_ = v___y_4296_;
goto v___jp_4261_;
}
else
{
lean_object* v___x_4328_; lean_object* v___x_4329_; 
v___x_4328_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7);
v___x_4329_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_4103_, v___x_4328_, v___y_4295_, v___y_4296_);
if (lean_obj_tag(v___x_4329_) == 0)
{
lean_dec_ref_known(v___x_4329_, 1);
v___y_4262_ = v___y_4295_;
v___y_4263_ = v___y_4296_;
goto v___jp_4261_;
}
else
{
lean_del_object(v___x_4217_);
lean_dec(v_snd_4215_);
lean_dec(v_fst_4214_);
lean_dec(v_fst_4210_);
lean_dec(v_decl_4098_);
return v___x_4329_;
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
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___boxed(lean_object* v_decl_4342_, lean_object* v_forceExpose_4343_, lean_object* v_hasTrace_4344_, lean_object* v___x_4345_, lean_object* v___x_4346_, lean_object* v_cls_4347_, lean_object* v___x_4348_, lean_object* v_____x_4349_, lean_object* v_exportedInfo_x3f_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_){
_start:
{
uint8_t v_forceExpose_boxed_4354_; uint8_t v_hasTrace_boxed_4355_; uint8_t v___x_53237__boxed_4356_; lean_object* v_res_4357_; 
v_forceExpose_boxed_4354_ = lean_unbox(v_forceExpose_4343_);
v_hasTrace_boxed_4355_ = lean_unbox(v_hasTrace_4344_);
v___x_53237__boxed_4356_ = lean_unbox(v___x_4345_);
v_res_4357_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9(v_decl_4342_, v_forceExpose_boxed_4354_, v_hasTrace_boxed_4355_, v___x_53237__boxed_4356_, v___x_4346_, v_cls_4347_, v___x_4348_, v_____x_4349_, v_exportedInfo_x3f_4350_, v___y_4351_, v___y_4352_);
lean_dec(v___y_4352_);
lean_dec_ref(v___y_4351_);
return v_res_4357_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1(void){
_start:
{
lean_object* v___x_4359_; lean_object* v___x_4360_; 
v___x_4359_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__0));
v___x_4360_ = l_Lean_stringToMessageData(v___x_4359_);
return v___x_4360_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3(void){
_start:
{
lean_object* v___x_4362_; lean_object* v___x_4363_; 
v___x_4362_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__2));
v___x_4363_ = l_Lean_stringToMessageData(v___x_4362_);
return v___x_4363_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5(lean_object* v___f_4364_, uint8_t v___x_4365_, lean_object* v_cls_4366_, lean_object* v___x_4367_, uint8_t v_forceExpose_4368_, lean_object* v_defn_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_){
_start:
{
lean_object* v_exportedInfo_x3f_4374_; lean_object* v___y_4375_; lean_object* v___y_4376_; lean_object* v___y_4386_; lean_object* v___y_4387_; lean_object* v___y_4388_; uint8_t v___y_4389_; uint8_t v___y_4394_; lean_object* v___x_4399_; lean_object* v_env_4400_; lean_object* v___x_4401_; uint8_t v___y_4403_; lean_object* v_env_4419_; 
v___x_4399_ = lean_st_ref_get(v___y_4371_);
v_env_4400_ = lean_ctor_get(v___x_4399_, 0);
lean_inc_ref(v_env_4400_);
lean_dec(v___x_4399_);
v___x_4401_ = lean_st_ref_get(v___y_4371_);
v_env_4419_ = lean_ctor_get(v___x_4401_, 0);
lean_inc_ref(v_env_4419_);
lean_dec(v___x_4401_);
if (v_forceExpose_4368_ == 0)
{
goto v___jp_4420_;
}
else
{
if (v___x_4365_ == 0)
{
lean_dec_ref(v_env_4419_);
lean_dec_ref(v_env_4400_);
lean_dec(v_cls_4366_);
v_exportedInfo_x3f_4374_ = v___x_4367_;
v___y_4375_ = v___y_4370_;
v___y_4376_ = v___y_4371_;
goto v___jp_4373_;
}
else
{
goto v___jp_4420_;
}
}
v___jp_4373_:
{
lean_object* v_toConstantVal_4377_; lean_object* v_name_4378_; lean_object* v___x_4379_; uint8_t v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; 
v_toConstantVal_4377_ = lean_ctor_get(v_defn_4369_, 0);
v_name_4378_ = lean_ctor_get(v_toConstantVal_4377_, 0);
lean_inc(v_name_4378_);
v___x_4379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4379_, 0, v_defn_4369_);
v___x_4380_ = 0;
v___x_4381_ = lean_box(v___x_4380_);
v___x_4382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4382_, 0, v___x_4379_);
lean_ctor_set(v___x_4382_, 1, v___x_4381_);
v___x_4383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4383_, 0, v_name_4378_);
lean_ctor_set(v___x_4383_, 1, v___x_4382_);
lean_inc(v___y_4376_);
lean_inc_ref(v___y_4375_);
v___x_4384_ = lean_apply_5(v___f_4364_, v___x_4383_, v_exportedInfo_x3f_4374_, v___y_4375_, v___y_4376_, lean_box(0));
return v___x_4384_;
}
v___jp_4385_:
{
lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; 
v___x_4390_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4390_, 0, v___y_4386_);
lean_ctor_set_uint8(v___x_4390_, sizeof(void*)*1, v___y_4389_);
v___x_4391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4391_, 0, v___x_4390_);
v___x_4392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4392_, 0, v___x_4391_);
v_exportedInfo_x3f_4374_ = v___x_4392_;
v___y_4375_ = v___y_4387_;
v___y_4376_ = v___y_4388_;
goto v___jp_4373_;
}
v___jp_4393_:
{
lean_object* v_toConstantVal_4395_; uint8_t v_safety_4396_; uint8_t v___x_4397_; uint8_t v___x_4398_; 
v_toConstantVal_4395_ = lean_ctor_get(v_defn_4369_, 0);
v_safety_4396_ = lean_ctor_get_uint8(v_defn_4369_, sizeof(void*)*4);
v___x_4397_ = 1;
v___x_4398_ = l_Lean_instBEqDefinitionSafety_beq(v_safety_4396_, v___x_4397_);
if (v___x_4398_ == 0)
{
lean_inc_ref(v_toConstantVal_4395_);
v___y_4386_ = v_toConstantVal_4395_;
v___y_4387_ = v___y_4370_;
v___y_4388_ = v___y_4371_;
v___y_4389_ = v___y_4394_;
goto v___jp_4385_;
}
else
{
lean_inc_ref(v_toConstantVal_4395_);
v___y_4386_ = v_toConstantVal_4395_;
v___y_4387_ = v___y_4370_;
v___y_4388_ = v___y_4371_;
v___y_4389_ = v___x_4365_;
goto v___jp_4385_;
}
}
v___jp_4402_:
{
lean_object* v_toCold_4404_; lean_object* v_options_4405_; uint8_t v_hasTrace_4406_; 
v_toCold_4404_ = lean_ctor_get(v___y_4370_, 0);
v_options_4405_ = lean_ctor_get(v_toCold_4404_, 2);
v_hasTrace_4406_ = lean_ctor_get_uint8(v_options_4405_, sizeof(void*)*1);
if (v_hasTrace_4406_ == 0)
{
lean_dec(v_cls_4366_);
v___y_4394_ = v___y_4403_;
goto v___jp_4393_;
}
else
{
lean_object* v_inheritedTraceOptions_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; uint8_t v___x_4410_; 
v_inheritedTraceOptions_4407_ = lean_ctor_get(v_toCold_4404_, 11);
v___x_4408_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_4366_);
v___x_4409_ = l_Lean_Name_append(v___x_4408_, v_cls_4366_);
v___x_4410_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4407_, v_options_4405_, v___x_4409_);
lean_dec(v___x_4409_);
if (v___x_4410_ == 0)
{
lean_dec(v_cls_4366_);
v___y_4394_ = v___y_4403_;
goto v___jp_4393_;
}
else
{
lean_object* v_toConstantVal_4411_; lean_object* v_name_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; 
v_toConstantVal_4411_ = lean_ctor_get(v_defn_4369_, 0);
v_name_4412_ = lean_ctor_get(v_toConstantVal_4411_, 0);
v___x_4413_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1);
lean_inc(v_name_4412_);
v___x_4414_ = l_Lean_MessageData_ofName(v_name_4412_);
v___x_4415_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4415_, 0, v___x_4413_);
lean_ctor_set(v___x_4415_, 1, v___x_4414_);
v___x_4416_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4417_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4417_, 0, v___x_4415_);
lean_ctor_set(v___x_4417_, 1, v___x_4416_);
v___x_4418_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_4366_, v___x_4417_, v___y_4370_, v___y_4371_);
if (lean_obj_tag(v___x_4418_) == 0)
{
lean_dec_ref_known(v___x_4418_, 1);
v___y_4394_ = v___y_4403_;
goto v___jp_4393_;
}
else
{
lean_dec_ref(v_defn_4369_);
lean_dec_ref(v___f_4364_);
return v___x_4418_;
}
}
}
}
v___jp_4420_:
{
lean_object* v___x_4421_; uint8_t v_isModule_4422_; 
v___x_4421_ = l_Lean_Environment_header(v_env_4400_);
lean_dec_ref(v_env_4400_);
v_isModule_4422_ = lean_ctor_get_uint8(v___x_4421_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4421_);
if (v_isModule_4422_ == 0)
{
lean_dec_ref(v_env_4419_);
lean_dec(v_cls_4366_);
v_exportedInfo_x3f_4374_ = v___x_4367_;
v___y_4375_ = v___y_4370_;
v___y_4376_ = v___y_4371_;
goto v___jp_4373_;
}
else
{
uint8_t v_isExporting_4423_; 
v_isExporting_4423_ = lean_ctor_get_uint8(v_env_4419_, sizeof(void*)*13);
lean_dec_ref(v_env_4419_);
if (v_isExporting_4423_ == 0)
{
lean_dec(v___x_4367_);
v___y_4403_ = v_isModule_4422_;
goto v___jp_4402_;
}
else
{
if (v___x_4365_ == 0)
{
lean_dec(v_cls_4366_);
v_exportedInfo_x3f_4374_ = v___x_4367_;
v___y_4375_ = v___y_4370_;
v___y_4376_ = v___y_4371_;
goto v___jp_4373_;
}
else
{
lean_dec(v___x_4367_);
v___y_4403_ = v___x_4365_;
goto v___jp_4402_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___boxed(lean_object* v___f_4424_, lean_object* v___x_4425_, lean_object* v_cls_4426_, lean_object* v___x_4427_, lean_object* v_forceExpose_4428_, lean_object* v_defn_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_){
_start:
{
uint8_t v___x_53714__boxed_4433_; uint8_t v_forceExpose_boxed_4434_; lean_object* v_res_4435_; 
v___x_53714__boxed_4433_ = lean_unbox(v___x_4425_);
v_forceExpose_boxed_4434_ = lean_unbox(v_forceExpose_4428_);
v_res_4435_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5(v___f_4424_, v___x_53714__boxed_4433_, v_cls_4426_, v___x_4427_, v_forceExpose_boxed_4434_, v_defn_4429_, v___y_4430_, v___y_4431_);
lean_dec(v___y_4431_);
lean_dec_ref(v___y_4430_);
return v_res_4435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6(lean_object* v_val_4436_, lean_object* v___f_4437_, lean_object* v_____r_4438_, lean_object* v_exportedInfo_x3f_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_){
_start:
{
lean_object* v_toConstantVal_4443_; lean_object* v_name_4444_; lean_object* v___x_4445_; uint8_t v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; 
v_toConstantVal_4443_ = lean_ctor_get(v_val_4436_, 0);
v_name_4444_ = lean_ctor_get(v_toConstantVal_4443_, 0);
lean_inc(v_name_4444_);
v___x_4445_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4445_, 0, v_val_4436_);
v___x_4446_ = 1;
v___x_4447_ = lean_box(v___x_4446_);
v___x_4448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4448_, 0, v___x_4445_);
lean_ctor_set(v___x_4448_, 1, v___x_4447_);
v___x_4449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4449_, 0, v_name_4444_);
lean_ctor_set(v___x_4449_, 1, v___x_4448_);
lean_inc(v___y_4441_);
lean_inc_ref(v___y_4440_);
v___x_4450_ = lean_apply_5(v___f_4437_, v___x_4449_, v_exportedInfo_x3f_4439_, v___y_4440_, v___y_4441_, lean_box(0));
return v___x_4450_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6___boxed(lean_object* v_val_4451_, lean_object* v___f_4452_, lean_object* v_____r_4453_, lean_object* v_exportedInfo_x3f_4454_, lean_object* v___y_4455_, lean_object* v___y_4456_, lean_object* v___y_4457_){
_start:
{
lean_object* v_res_4458_; 
v_res_4458_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6(v_val_4451_, v___f_4452_, v_____r_4453_, v_exportedInfo_x3f_4454_, v___y_4455_, v___y_4456_);
lean_dec(v___y_4456_);
lean_dec_ref(v___y_4455_);
return v_res_4458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7(lean_object* v_val_4459_, uint8_t v___x_4460_, lean_object* v___f_4461_, lean_object* v_____r_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_){
_start:
{
lean_object* v_toConstantVal_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; 
v_toConstantVal_4466_ = lean_ctor_get(v_val_4459_, 0);
lean_inc_ref(v_toConstantVal_4466_);
v___x_4467_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4467_, 0, v_toConstantVal_4466_);
lean_ctor_set_uint8(v___x_4467_, sizeof(void*)*1, v___x_4460_);
v___x_4468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4468_, 0, v___x_4467_);
v___x_4469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4469_, 0, v___x_4468_);
v___x_4470_ = lean_box(0);
lean_inc(v___y_4464_);
lean_inc_ref(v___y_4463_);
v___x_4471_ = lean_apply_5(v___f_4461_, v___x_4470_, v___x_4469_, v___y_4463_, v___y_4464_, lean_box(0));
return v___x_4471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7___boxed(lean_object* v_val_4472_, lean_object* v___x_4473_, lean_object* v___f_4474_, lean_object* v_____r_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_){
_start:
{
uint8_t v___x_53845__boxed_4479_; lean_object* v_res_4480_; 
v___x_53845__boxed_4479_ = lean_unbox(v___x_4473_);
v_res_4480_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7(v_val_4472_, v___x_53845__boxed_4479_, v___f_4474_, v_____r_4475_, v___y_4476_, v___y_4477_);
lean_dec(v___y_4477_);
lean_dec_ref(v___y_4476_);
lean_dec_ref(v_val_4472_);
return v_res_4480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8(lean_object* v_val_4481_, lean_object* v___f_4482_, lean_object* v_____r_4483_, lean_object* v_exportedInfo_x3f_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_){
_start:
{
lean_object* v_toConstantVal_4488_; lean_object* v_name_4489_; lean_object* v___x_4490_; uint8_t v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; 
v_toConstantVal_4488_ = lean_ctor_get(v_val_4481_, 0);
v_name_4489_ = lean_ctor_get(v_toConstantVal_4488_, 0);
lean_inc(v_name_4489_);
v___x_4490_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4490_, 0, v_val_4481_);
v___x_4491_ = 3;
v___x_4492_ = lean_box(v___x_4491_);
v___x_4493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4493_, 0, v___x_4490_);
lean_ctor_set(v___x_4493_, 1, v___x_4492_);
v___x_4494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4494_, 0, v_name_4489_);
lean_ctor_set(v___x_4494_, 1, v___x_4493_);
lean_inc(v___y_4486_);
lean_inc_ref(v___y_4485_);
v___x_4495_ = lean_apply_5(v___f_4482_, v___x_4494_, v_exportedInfo_x3f_4484_, v___y_4485_, v___y_4486_, lean_box(0));
return v___x_4495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8___boxed(lean_object* v_val_4496_, lean_object* v___f_4497_, lean_object* v_____r_4498_, lean_object* v_exportedInfo_x3f_4499_, lean_object* v___y_4500_, lean_object* v___y_4501_, lean_object* v___y_4502_){
_start:
{
lean_object* v_res_4503_; 
v_res_4503_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8(v_val_4496_, v___f_4497_, v_____r_4498_, v_exportedInfo_x3f_4499_, v___y_4500_, v___y_4501_);
lean_dec(v___y_4501_);
lean_dec_ref(v___y_4500_);
return v_res_4503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(lean_object* v_val_4504_, lean_object* v___f_4505_, lean_object* v_____r_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_){
_start:
{
lean_object* v_toConstantVal_4510_; uint8_t v_isUnsafe_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; 
v_toConstantVal_4510_ = lean_ctor_get(v_val_4504_, 0);
v_isUnsafe_4511_ = lean_ctor_get_uint8(v_val_4504_, sizeof(void*)*3);
lean_inc_ref(v_toConstantVal_4510_);
v___x_4512_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4512_, 0, v_toConstantVal_4510_);
lean_ctor_set_uint8(v___x_4512_, sizeof(void*)*1, v_isUnsafe_4511_);
v___x_4513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4513_, 0, v___x_4512_);
v___x_4514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4514_, 0, v___x_4513_);
v___x_4515_ = lean_box(0);
lean_inc(v___y_4508_);
lean_inc_ref(v___y_4507_);
v___x_4516_ = lean_apply_5(v___f_4505_, v___x_4515_, v___x_4514_, v___y_4507_, v___y_4508_, lean_box(0));
return v___x_4516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10___boxed(lean_object* v_val_4517_, lean_object* v___f_4518_, lean_object* v_____r_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_){
_start:
{
lean_object* v_res_4523_; 
v_res_4523_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(v_val_4517_, v___f_4518_, v_____r_4519_, v___y_4520_, v___y_4521_);
lean_dec(v___y_4521_);
lean_dec_ref(v___y_4520_);
lean_dec_ref(v_val_4517_);
return v_res_4523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14(lean_object* v_decl_4524_, uint8_t v_forceExpose_4525_, uint8_t v___x_4526_, lean_object* v_cls_4527_, lean_object* v___x_4528_, lean_object* v___x_4529_, lean_object* v_____x_4530_, lean_object* v_exportedInfo_x3f_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_){
_start:
{
lean_object* v___y_4536_; lean_object* v___y_4537_; lean_object* v_a_4538_; lean_object* v___y_4549_; lean_object* v___y_4550_; lean_object* v_a_4551_; lean_object* v___y_4562_; lean_object* v___y_4563_; uint8_t v___y_4564_; lean_object* v___y_4565_; lean_object* v___y_4566_; lean_object* v___y_4567_; lean_object* v___y_4568_; lean_object* v___y_4569_; lean_object* v___y_4570_; lean_object* v___y_4571_; lean_object* v___y_4572_; lean_object* v___y_4573_; lean_object* v_snd_4635_; lean_object* v_fst_4636_; lean_object* v___x_4638_; uint8_t v_isShared_4639_; uint8_t v_isSharedCheck_4769_; 
v_snd_4635_ = lean_ctor_get(v_____x_4530_, 1);
v_fst_4636_ = lean_ctor_get(v_____x_4530_, 0);
v_isSharedCheck_4769_ = !lean_is_exclusive(v_____x_4530_);
if (v_isSharedCheck_4769_ == 0)
{
v___x_4638_ = v_____x_4530_;
v_isShared_4639_ = v_isSharedCheck_4769_;
goto v_resetjp_4637_;
}
else
{
lean_inc(v_snd_4635_);
lean_inc(v_fst_4636_);
lean_dec(v_____x_4530_);
v___x_4638_ = lean_box(0);
v_isShared_4639_ = v_isSharedCheck_4769_;
goto v_resetjp_4637_;
}
v___jp_4535_:
{
lean_object* v___x_4539_; lean_object* v___x_4541_; uint8_t v_isShared_4542_; uint8_t v_isSharedCheck_4546_; 
v___x_4539_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4536_, v___y_4537_);
v_isSharedCheck_4546_ = !lean_is_exclusive(v___x_4539_);
if (v_isSharedCheck_4546_ == 0)
{
lean_object* v_unused_4547_; 
v_unused_4547_ = lean_ctor_get(v___x_4539_, 0);
lean_dec(v_unused_4547_);
v___x_4541_ = v___x_4539_;
v_isShared_4542_ = v_isSharedCheck_4546_;
goto v_resetjp_4540_;
}
else
{
lean_dec(v___x_4539_);
v___x_4541_ = lean_box(0);
v_isShared_4542_ = v_isSharedCheck_4546_;
goto v_resetjp_4540_;
}
v_resetjp_4540_:
{
lean_object* v___x_4544_; 
if (v_isShared_4542_ == 0)
{
lean_ctor_set_tag(v___x_4541_, 1);
lean_ctor_set(v___x_4541_, 0, v_a_4538_);
v___x_4544_ = v___x_4541_;
goto v_reusejp_4543_;
}
else
{
lean_object* v_reuseFailAlloc_4545_; 
v_reuseFailAlloc_4545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4545_, 0, v_a_4538_);
v___x_4544_ = v_reuseFailAlloc_4545_;
goto v_reusejp_4543_;
}
v_reusejp_4543_:
{
return v___x_4544_;
}
}
}
v___jp_4548_:
{
lean_object* v___x_4552_; lean_object* v___x_4554_; uint8_t v_isShared_4555_; uint8_t v_isSharedCheck_4559_; 
v___x_4552_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4549_, v___y_4550_);
v_isSharedCheck_4559_ = !lean_is_exclusive(v___x_4552_);
if (v_isSharedCheck_4559_ == 0)
{
lean_object* v_unused_4560_; 
v_unused_4560_ = lean_ctor_get(v___x_4552_, 0);
lean_dec(v_unused_4560_);
v___x_4554_ = v___x_4552_;
v_isShared_4555_ = v_isSharedCheck_4559_;
goto v_resetjp_4553_;
}
else
{
lean_dec(v___x_4552_);
v___x_4554_ = lean_box(0);
v_isShared_4555_ = v_isSharedCheck_4559_;
goto v_resetjp_4553_;
}
v_resetjp_4553_:
{
lean_object* v___x_4557_; 
if (v_isShared_4555_ == 0)
{
lean_ctor_set(v___x_4554_, 0, v_a_4551_);
v___x_4557_ = v___x_4554_;
goto v_reusejp_4556_;
}
else
{
lean_object* v_reuseFailAlloc_4558_; 
v_reuseFailAlloc_4558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4558_, 0, v_a_4551_);
v___x_4557_ = v_reuseFailAlloc_4558_;
goto v_reusejp_4556_;
}
v_reusejp_4556_:
{
return v___x_4557_;
}
}
}
v___jp_4561_:
{
lean_object* v___x_4574_; 
lean_inc_ref(v___y_4566_);
v___x_4574_ = l_Lean_Environment_AddConstAsyncResult_commitConst(v___y_4569_, v___y_4566_, v___y_4572_, v___y_4573_);
if (lean_obj_tag(v___x_4574_) == 0)
{
lean_object* v___x_4575_; lean_object* v___x_4577_; uint8_t v_isShared_4578_; uint8_t v_isSharedCheck_4621_; 
lean_dec_ref_known(v___x_4574_, 1);
lean_dec(v___y_4562_);
lean_inc_ref(v___y_4568_);
v___x_4575_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4568_, v___y_4571_);
v_isSharedCheck_4621_ = !lean_is_exclusive(v___x_4575_);
if (v_isSharedCheck_4621_ == 0)
{
lean_object* v_unused_4622_; 
v_unused_4622_ = lean_ctor_get(v___x_4575_, 0);
lean_dec(v_unused_4622_);
v___x_4577_ = v___x_4575_;
v_isShared_4578_ = v_isSharedCheck_4621_;
goto v_resetjp_4576_;
}
else
{
lean_dec(v___x_4575_);
v___x_4577_ = lean_box(0);
v_isShared_4578_ = v_isSharedCheck_4621_;
goto v_resetjp_4576_;
}
v_resetjp_4576_:
{
lean_object* v___x_4579_; lean_object* v___x_4580_; uint8_t v___x_4581_; 
v___x_4579_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4570_);
v___x_4580_ = l_Lean_Elab_async;
v___x_4581_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v___x_4579_, v___x_4580_);
lean_dec_ref(v___x_4579_);
if (v___x_4581_ == 0)
{
lean_object* v___x_4582_; lean_object* v_r_4583_; 
lean_del_object(v___x_4577_);
lean_dec_ref(v___y_4567_);
lean_dec_ref(v___y_4565_);
v___x_4582_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4566_, v___y_4571_);
lean_dec_ref(v___x_4582_);
v_r_4583_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_4524_, v_forceExpose_4525_, v___y_4570_, v___y_4571_);
if (lean_obj_tag(v_r_4583_) == 0)
{
lean_object* v_a_4584_; lean_object* v___x_4586_; uint8_t v_isShared_4587_; uint8_t v_isSharedCheck_4593_; 
v_a_4584_ = lean_ctor_get(v_r_4583_, 0);
v_isSharedCheck_4593_ = !lean_is_exclusive(v_r_4583_);
if (v_isSharedCheck_4593_ == 0)
{
v___x_4586_ = v_r_4583_;
v_isShared_4587_ = v_isSharedCheck_4593_;
goto v_resetjp_4585_;
}
else
{
lean_inc(v_a_4584_);
lean_dec(v_r_4583_);
v___x_4586_ = lean_box(0);
v_isShared_4587_ = v_isSharedCheck_4593_;
goto v_resetjp_4585_;
}
v_resetjp_4585_:
{
lean_object* v___x_4589_; 
lean_inc(v_a_4584_);
if (v_isShared_4587_ == 0)
{
lean_ctor_set_tag(v___x_4586_, 1);
v___x_4589_ = v___x_4586_;
goto v_reusejp_4588_;
}
else
{
lean_object* v_reuseFailAlloc_4592_; 
v_reuseFailAlloc_4592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4592_, 0, v_a_4584_);
v___x_4589_ = v_reuseFailAlloc_4592_;
goto v_reusejp_4588_;
}
v_reusejp_4588_:
{
lean_object* v___x_4590_; 
v___x_4590_ = lean_apply_2(v___y_4563_, v___x_4589_, lean_box(0));
if (lean_obj_tag(v___x_4590_) == 0)
{
lean_dec_ref_known(v___x_4590_, 1);
v___y_4549_ = v___y_4568_;
v___y_4550_ = v___y_4571_;
v_a_4551_ = v_a_4584_;
goto v___jp_4548_;
}
else
{
lean_object* v_a_4591_; 
lean_dec(v_a_4584_);
v_a_4591_ = lean_ctor_get(v___x_4590_, 0);
lean_inc(v_a_4591_);
lean_dec_ref_known(v___x_4590_, 1);
v___y_4536_ = v___y_4568_;
v___y_4537_ = v___y_4571_;
v_a_4538_ = v_a_4591_;
goto v___jp_4535_;
}
}
}
}
else
{
lean_object* v_a_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; 
v_a_4594_ = lean_ctor_get(v_r_4583_, 0);
lean_inc(v_a_4594_);
lean_dec_ref_known(v_r_4583_, 1);
v___x_4595_ = lean_box(0);
v___x_4596_ = lean_apply_2(v___y_4563_, v___x_4595_, lean_box(0));
if (lean_obj_tag(v___x_4596_) == 0)
{
lean_dec_ref_known(v___x_4596_, 1);
v___y_4536_ = v___y_4568_;
v___y_4537_ = v___y_4571_;
v_a_4538_ = v_a_4594_;
goto v___jp_4535_;
}
else
{
lean_object* v_a_4597_; 
lean_dec(v_a_4594_);
v_a_4597_ = lean_ctor_get(v___x_4596_, 0);
lean_inc(v_a_4597_);
lean_dec_ref_known(v___x_4596_, 1);
v___y_4536_ = v___y_4568_;
v___y_4537_ = v___y_4571_;
v_a_4538_ = v_a_4597_;
goto v___jp_4535_;
}
}
}
else
{
lean_object* v___x_4598_; lean_object* v___x_4600_; 
lean_dec_ref(v___y_4568_);
lean_dec_ref(v___y_4566_);
lean_dec_ref(v___y_4563_);
lean_dec(v_decl_4524_);
v___x_4598_ = l_IO_CancelToken_new();
if (v_isShared_4578_ == 0)
{
lean_ctor_set_tag(v___x_4577_, 1);
lean_ctor_set(v___x_4577_, 0, v___x_4598_);
v___x_4600_ = v___x_4577_;
goto v_reusejp_4599_;
}
else
{
lean_object* v_reuseFailAlloc_4620_; 
v_reuseFailAlloc_4620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4620_, 0, v___x_4598_);
v___x_4600_ = v_reuseFailAlloc_4620_;
goto v_reusejp_4599_;
}
v_reusejp_4599_:
{
lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; 
v___x_4601_ = lean_unsigned_to_nat(0u);
v___x_4602_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1));
v___x_4603_ = l_Lean_Name_toString(v___x_4602_, v___x_4526_);
lean_inc_ref(v___x_4600_);
v___x_4604_ = l_Lean_Core_wrapAsyncAsSnapshot___redArg(v___y_4565_, v___x_4600_, v___x_4603_, v___y_4570_, v___y_4571_);
if (lean_obj_tag(v___x_4604_) == 0)
{
lean_object* v_a_4605_; lean_object* v_checked_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; 
v_a_4605_ = lean_ctor_get(v___x_4604_, 0);
lean_inc(v_a_4605_);
lean_dec_ref_known(v___x_4604_, 1);
v_checked_4606_ = lean_ctor_get(v___y_4567_, 2);
lean_inc_ref(v_checked_4606_);
lean_dec_ref(v___y_4567_);
v___x_4607_ = lean_io_map_task(v_a_4605_, v_checked_4606_, v___x_4601_, v___y_4564_);
v___x_4608_ = lean_box(0);
v___x_4609_ = lean_box(2);
v___x_4610_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4610_, 0, v___x_4608_);
lean_ctor_set(v___x_4610_, 1, v___x_4609_);
lean_ctor_set(v___x_4610_, 2, v___x_4600_);
lean_ctor_set(v___x_4610_, 3, v___x_4607_);
v___x_4611_ = l_Lean_Core_logSnapshotTask___redArg(v___x_4610_, v___y_4571_);
return v___x_4611_;
}
else
{
lean_object* v_a_4612_; lean_object* v___x_4614_; uint8_t v_isShared_4615_; uint8_t v_isSharedCheck_4619_; 
lean_dec_ref(v___x_4600_);
lean_dec_ref(v___y_4567_);
v_a_4612_ = lean_ctor_get(v___x_4604_, 0);
v_isSharedCheck_4619_ = !lean_is_exclusive(v___x_4604_);
if (v_isSharedCheck_4619_ == 0)
{
v___x_4614_ = v___x_4604_;
v_isShared_4615_ = v_isSharedCheck_4619_;
goto v_resetjp_4613_;
}
else
{
lean_inc(v_a_4612_);
lean_dec(v___x_4604_);
v___x_4614_ = lean_box(0);
v_isShared_4615_ = v_isSharedCheck_4619_;
goto v_resetjp_4613_;
}
v_resetjp_4613_:
{
lean_object* v___x_4617_; 
if (v_isShared_4615_ == 0)
{
v___x_4617_ = v___x_4614_;
goto v_reusejp_4616_;
}
else
{
lean_object* v_reuseFailAlloc_4618_; 
v_reuseFailAlloc_4618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4618_, 0, v_a_4612_);
v___x_4617_ = v_reuseFailAlloc_4618_;
goto v_reusejp_4616_;
}
v_reusejp_4616_:
{
return v___x_4617_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4623_; lean_object* v___x_4625_; uint8_t v_isShared_4626_; uint8_t v_isSharedCheck_4634_; 
lean_dec_ref(v___y_4568_);
lean_dec_ref(v___y_4567_);
lean_dec_ref(v___y_4566_);
lean_dec_ref(v___y_4565_);
lean_dec_ref(v___y_4563_);
lean_dec(v_decl_4524_);
v_a_4623_ = lean_ctor_get(v___x_4574_, 0);
v_isSharedCheck_4634_ = !lean_is_exclusive(v___x_4574_);
if (v_isSharedCheck_4634_ == 0)
{
v___x_4625_ = v___x_4574_;
v_isShared_4626_ = v_isSharedCheck_4634_;
goto v_resetjp_4624_;
}
else
{
lean_inc(v_a_4623_);
lean_dec(v___x_4574_);
v___x_4625_ = lean_box(0);
v_isShared_4626_ = v_isSharedCheck_4634_;
goto v_resetjp_4624_;
}
v_resetjp_4624_:
{
lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4632_; 
v___x_4627_ = lean_io_error_to_string(v_a_4623_);
v___x_4628_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4628_, 0, v___x_4627_);
v___x_4629_ = l_Lean_MessageData_ofFormat(v___x_4628_);
v___x_4630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4630_, 0, v___y_4562_);
lean_ctor_set(v___x_4630_, 1, v___x_4629_);
if (v_isShared_4626_ == 0)
{
lean_ctor_set(v___x_4625_, 0, v___x_4630_);
v___x_4632_ = v___x_4625_;
goto v_reusejp_4631_;
}
else
{
lean_object* v_reuseFailAlloc_4633_; 
v_reuseFailAlloc_4633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4633_, 0, v___x_4630_);
v___x_4632_ = v_reuseFailAlloc_4633_;
goto v_reusejp_4631_;
}
v_reusejp_4631_:
{
return v___x_4632_;
}
}
}
}
v_resetjp_4637_:
{
lean_object* v_fst_4640_; lean_object* v_snd_4641_; lean_object* v___x_4643_; uint8_t v_isShared_4644_; uint8_t v_isSharedCheck_4768_; 
v_fst_4640_ = lean_ctor_get(v_snd_4635_, 0);
v_snd_4641_ = lean_ctor_get(v_snd_4635_, 1);
v_isSharedCheck_4768_ = !lean_is_exclusive(v_snd_4635_);
if (v_isSharedCheck_4768_ == 0)
{
v___x_4643_ = v_snd_4635_;
v_isShared_4644_ = v_isSharedCheck_4768_;
goto v_resetjp_4642_;
}
else
{
lean_inc(v_snd_4641_);
lean_inc(v_fst_4640_);
lean_dec(v_snd_4635_);
v___x_4643_ = lean_box(0);
v_isShared_4644_ = v_isSharedCheck_4768_;
goto v_resetjp_4642_;
}
v_resetjp_4642_:
{
lean_object* v___y_4646_; lean_object* v___y_4647_; lean_object* v___y_4648_; lean_object* v___y_4649_; lean_object* v___y_4650_; lean_object* v_exportedInfo_x3f_4677_; lean_object* v___y_4678_; lean_object* v___y_4679_; lean_object* v___y_4689_; lean_object* v___y_4690_; lean_object* v___y_4693_; lean_object* v___y_4694_; lean_object* v___y_4697_; uint8_t v___y_4698_; lean_object* v___y_4699_; uint8_t v___y_4700_; lean_object* v___y_4732_; lean_object* v___y_4733_; lean_object* v___x_4758_; lean_object* v_env_4759_; uint8_t v___x_4760_; 
v___x_4758_ = lean_st_ref_get(v___y_4533_);
v_env_4759_ = lean_ctor_get(v___x_4758_, 0);
lean_inc_ref(v_env_4759_);
lean_dec(v___x_4758_);
v___x_4760_ = l_Lean_Environment_containsOnBranch(v_env_4759_, v_fst_4636_);
lean_dec_ref(v_env_4759_);
if (v___x_4760_ == 0)
{
lean_del_object(v___x_4638_);
v___y_4732_ = v___y_4532_;
v___y_4733_ = v___y_4533_;
goto v___jp_4731_;
}
else
{
lean_object* v___x_4761_; lean_object* v_env_4762_; lean_object* v___x_4763_; lean_object* v___x_4765_; 
lean_del_object(v___x_4643_);
lean_dec(v_snd_4641_);
lean_dec(v_fst_4640_);
lean_dec(v_exportedInfo_x3f_4531_);
lean_dec(v___x_4529_);
lean_dec_ref(v___x_4528_);
lean_dec(v_cls_4527_);
lean_dec(v_decl_4524_);
v___x_4761_ = lean_st_ref_get(v___y_4533_);
v_env_4762_ = lean_ctor_get(v___x_4761_, 0);
lean_inc_ref(v_env_4762_);
lean_dec(v___x_4761_);
v___x_4763_ = lean_elab_environment_to_kernel_env(v_env_4762_);
if (v_isShared_4639_ == 0)
{
lean_ctor_set_tag(v___x_4638_, 1);
lean_ctor_set(v___x_4638_, 1, v_fst_4636_);
lean_ctor_set(v___x_4638_, 0, v___x_4763_);
v___x_4765_ = v___x_4638_;
goto v_reusejp_4764_;
}
else
{
lean_object* v_reuseFailAlloc_4767_; 
v_reuseFailAlloc_4767_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4767_, 0, v___x_4763_);
lean_ctor_set(v_reuseFailAlloc_4767_, 1, v_fst_4636_);
v___x_4765_ = v_reuseFailAlloc_4767_;
goto v_reusejp_4764_;
}
v_reusejp_4764_:
{
lean_object* v___x_4766_; 
v___x_4766_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v___x_4765_, v___y_4532_, v___y_4533_);
return v___x_4766_;
}
}
v___jp_4645_:
{
lean_object* v_ref_4651_; uint8_t v___x_4652_; uint8_t v___x_4653_; lean_object* v___x_4654_; 
v_ref_4651_ = lean_ctor_get(v___y_4647_, 2);
v___x_4652_ = 0;
v___x_4653_ = lean_unbox(v_snd_4641_);
lean_dec(v_snd_4641_);
lean_inc_ref(v___y_4649_);
v___x_4654_ = l_Lean_Environment_addConstAsync(v___y_4649_, v_fst_4636_, v___x_4653_, v___y_4650_, v___x_4652_, v___x_4526_);
if (lean_obj_tag(v___x_4654_) == 0)
{
lean_object* v_a_4655_; lean_object* v_mainEnv_4656_; lean_object* v_asyncEnv_4657_; lean_object* v___f_4658_; lean_object* v___x_4659_; lean_object* v___f_4660_; lean_object* v___x_4661_; 
lean_del_object(v___x_4643_);
v_a_4655_ = lean_ctor_get(v___x_4654_, 0);
lean_inc_n(v_a_4655_, 3);
lean_dec_ref_known(v___x_4654_, 1);
v_mainEnv_4656_ = lean_ctor_get(v_a_4655_, 0);
lean_inc_ref(v_mainEnv_4656_);
v_asyncEnv_4657_ = lean_ctor_get(v_a_4655_, 1);
lean_inc_ref_n(v_asyncEnv_4657_, 2);
lean_inc(v_ref_4651_);
lean_inc(v___y_4648_);
v___f_4658_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4658_, 0, v___y_4648_);
lean_closure_set(v___f_4658_, 1, v_a_4655_);
lean_closure_set(v___f_4658_, 2, v_ref_4651_);
v___x_4659_ = lean_box(v_forceExpose_4525_);
lean_inc(v_decl_4524_);
v___f_4660_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed), 8, 4);
lean_closure_set(v___f_4660_, 0, v_a_4655_);
lean_closure_set(v___f_4660_, 1, v_asyncEnv_4657_);
lean_closure_set(v___f_4660_, 2, v_decl_4524_);
lean_closure_set(v___f_4660_, 3, v___x_4659_);
v___x_4661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4661_, 0, v_fst_4640_);
if (lean_obj_tag(v___y_4646_) == 0)
{
lean_inc_ref(v___x_4661_);
lean_inc(v_ref_4651_);
v___y_4562_ = v_ref_4651_;
v___y_4563_ = v___f_4658_;
v___y_4564_ = v___x_4652_;
v___y_4565_ = v___f_4660_;
v___y_4566_ = v_asyncEnv_4657_;
v___y_4567_ = v___y_4649_;
v___y_4568_ = v_mainEnv_4656_;
v___y_4569_ = v_a_4655_;
v___y_4570_ = v___y_4647_;
v___y_4571_ = v___y_4648_;
v___y_4572_ = v___x_4661_;
v___y_4573_ = v___x_4661_;
goto v___jp_4561_;
}
else
{
lean_inc(v_ref_4651_);
v___y_4562_ = v_ref_4651_;
v___y_4563_ = v___f_4658_;
v___y_4564_ = v___x_4652_;
v___y_4565_ = v___f_4660_;
v___y_4566_ = v_asyncEnv_4657_;
v___y_4567_ = v___y_4649_;
v___y_4568_ = v_mainEnv_4656_;
v___y_4569_ = v_a_4655_;
v___y_4570_ = v___y_4647_;
v___y_4571_ = v___y_4648_;
v___y_4572_ = v___x_4661_;
v___y_4573_ = v___y_4646_;
goto v___jp_4561_;
}
}
else
{
lean_object* v_a_4662_; lean_object* v___x_4664_; uint8_t v_isShared_4665_; uint8_t v_isSharedCheck_4675_; 
lean_dec_ref(v___y_4649_);
lean_dec(v___y_4646_);
lean_dec(v_fst_4640_);
lean_dec(v_decl_4524_);
v_a_4662_ = lean_ctor_get(v___x_4654_, 0);
v_isSharedCheck_4675_ = !lean_is_exclusive(v___x_4654_);
if (v_isSharedCheck_4675_ == 0)
{
v___x_4664_ = v___x_4654_;
v_isShared_4665_ = v_isSharedCheck_4675_;
goto v_resetjp_4663_;
}
else
{
lean_inc(v_a_4662_);
lean_dec(v___x_4654_);
v___x_4664_ = lean_box(0);
v_isShared_4665_ = v_isSharedCheck_4675_;
goto v_resetjp_4663_;
}
v_resetjp_4663_:
{
lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4670_; 
v___x_4666_ = lean_io_error_to_string(v_a_4662_);
v___x_4667_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4667_, 0, v___x_4666_);
v___x_4668_ = l_Lean_MessageData_ofFormat(v___x_4667_);
lean_inc(v_ref_4651_);
if (v_isShared_4644_ == 0)
{
lean_ctor_set(v___x_4643_, 1, v___x_4668_);
lean_ctor_set(v___x_4643_, 0, v_ref_4651_);
v___x_4670_ = v___x_4643_;
goto v_reusejp_4669_;
}
else
{
lean_object* v_reuseFailAlloc_4674_; 
v_reuseFailAlloc_4674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4674_, 0, v_ref_4651_);
lean_ctor_set(v_reuseFailAlloc_4674_, 1, v___x_4668_);
v___x_4670_ = v_reuseFailAlloc_4674_;
goto v_reusejp_4669_;
}
v_reusejp_4669_:
{
lean_object* v___x_4672_; 
if (v_isShared_4665_ == 0)
{
lean_ctor_set(v___x_4664_, 0, v___x_4670_);
v___x_4672_ = v___x_4664_;
goto v_reusejp_4671_;
}
else
{
lean_object* v_reuseFailAlloc_4673_; 
v_reuseFailAlloc_4673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4673_, 0, v___x_4670_);
v___x_4672_ = v_reuseFailAlloc_4673_;
goto v_reusejp_4671_;
}
v_reusejp_4671_:
{
return v___x_4672_;
}
}
}
}
}
v___jp_4676_:
{
lean_object* v___x_4680_; 
v___x_4680_ = lean_st_ref_get(v___y_4679_);
if (lean_obj_tag(v_exportedInfo_x3f_4677_) == 0)
{
lean_object* v_env_4681_; lean_object* v___x_4682_; 
v_env_4681_ = lean_ctor_get(v___x_4680_, 0);
lean_inc_ref(v_env_4681_);
lean_dec(v___x_4680_);
v___x_4682_ = lean_box(0);
v___y_4646_ = v_exportedInfo_x3f_4677_;
v___y_4647_ = v___y_4678_;
v___y_4648_ = v___y_4679_;
v___y_4649_ = v_env_4681_;
v___y_4650_ = v___x_4682_;
goto v___jp_4645_;
}
else
{
lean_object* v_env_4683_; lean_object* v_val_4684_; uint8_t v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; 
v_env_4683_ = lean_ctor_get(v___x_4680_, 0);
lean_inc_ref(v_env_4683_);
lean_dec(v___x_4680_);
v_val_4684_ = lean_ctor_get(v_exportedInfo_x3f_4677_, 0);
v___x_4685_ = l_Lean_ConstantKind_ofConstantInfo(v_val_4684_);
v___x_4686_ = lean_box(v___x_4685_);
v___x_4687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4687_, 0, v___x_4686_);
v___y_4646_ = v_exportedInfo_x3f_4677_;
v___y_4647_ = v___y_4678_;
v___y_4648_ = v___y_4679_;
v___y_4649_ = v_env_4683_;
v___y_4650_ = v___x_4687_;
goto v___jp_4645_;
}
}
v___jp_4688_:
{
lean_object* v___x_4691_; 
lean_inc(v_fst_4640_);
v___x_4691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4691_, 0, v_fst_4640_);
v_exportedInfo_x3f_4677_ = v___x_4691_;
v___y_4678_ = v___y_4689_;
v___y_4679_ = v___y_4690_;
goto v___jp_4676_;
}
v___jp_4692_:
{
lean_object* v___x_4695_; 
lean_inc(v_fst_4640_);
v___x_4695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4695_, 0, v_fst_4640_);
v_exportedInfo_x3f_4677_ = v___x_4695_;
v___y_4678_ = v___y_4693_;
v___y_4679_ = v___y_4694_;
goto v___jp_4676_;
}
v___jp_4696_:
{
if (v___y_4700_ == 0)
{
lean_object* v_toCold_4701_; lean_object* v_options_4702_; uint8_t v_hasTrace_4703_; 
lean_dec(v_exportedInfo_x3f_4531_);
lean_dec_ref(v___x_4528_);
v_toCold_4701_ = lean_ctor_get(v___y_4697_, 0);
v_options_4702_ = lean_ctor_get(v_toCold_4701_, 2);
v_hasTrace_4703_ = lean_ctor_get_uint8(v_options_4702_, sizeof(void*)*1);
if (v_hasTrace_4703_ == 0)
{
lean_dec(v_cls_4527_);
v___y_4693_ = v___y_4697_;
v___y_4694_ = v___y_4699_;
goto v___jp_4692_;
}
else
{
lean_object* v_inheritedTraceOptions_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; uint8_t v___x_4707_; 
v_inheritedTraceOptions_4704_ = lean_ctor_get(v_toCold_4701_, 11);
v___x_4705_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_4527_);
v___x_4706_ = l_Lean_Name_append(v___x_4705_, v_cls_4527_);
v___x_4707_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4704_, v_options_4702_, v___x_4706_);
lean_dec(v___x_4706_);
if (v___x_4707_ == 0)
{
lean_dec(v_cls_4527_);
v___y_4693_ = v___y_4697_;
v___y_4694_ = v___y_4699_;
goto v___jp_4692_;
}
else
{
lean_object* v___x_4708_; lean_object* v___x_4709_; 
v___x_4708_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3);
v___x_4709_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_4527_, v___x_4708_, v___y_4697_, v___y_4699_);
if (lean_obj_tag(v___x_4709_) == 0)
{
lean_dec_ref_known(v___x_4709_, 1);
v___y_4693_ = v___y_4697_;
v___y_4694_ = v___y_4699_;
goto v___jp_4692_;
}
else
{
lean_del_object(v___x_4643_);
lean_dec(v_snd_4641_);
lean_dec(v_fst_4640_);
lean_dec(v_fst_4636_);
lean_dec(v_decl_4524_);
return v___x_4709_;
}
}
}
}
else
{
lean_object* v___x_4710_; lean_object* v_env_4711_; lean_object* v_nextMacroScope_4712_; lean_object* v_ngen_4713_; lean_object* v_auxDeclNGen_4714_; lean_object* v_traceState_4715_; lean_object* v_recordedDeps_4716_; lean_object* v_messages_4717_; lean_object* v_infoState_4718_; lean_object* v_snapshotTasks_4719_; lean_object* v___x_4721_; uint8_t v_isShared_4722_; uint8_t v_isSharedCheck_4729_; 
lean_dec(v_cls_4527_);
v___x_4710_ = lean_st_ref_take(v___y_4699_);
v_env_4711_ = lean_ctor_get(v___x_4710_, 0);
v_nextMacroScope_4712_ = lean_ctor_get(v___x_4710_, 1);
v_ngen_4713_ = lean_ctor_get(v___x_4710_, 2);
v_auxDeclNGen_4714_ = lean_ctor_get(v___x_4710_, 3);
v_traceState_4715_ = lean_ctor_get(v___x_4710_, 4);
v_recordedDeps_4716_ = lean_ctor_get(v___x_4710_, 6);
v_messages_4717_ = lean_ctor_get(v___x_4710_, 7);
v_infoState_4718_ = lean_ctor_get(v___x_4710_, 8);
v_snapshotTasks_4719_ = lean_ctor_get(v___x_4710_, 9);
v_isSharedCheck_4729_ = !lean_is_exclusive(v___x_4710_);
if (v_isSharedCheck_4729_ == 0)
{
lean_object* v_unused_4730_; 
v_unused_4730_ = lean_ctor_get(v___x_4710_, 5);
lean_dec(v_unused_4730_);
v___x_4721_ = v___x_4710_;
v_isShared_4722_ = v_isSharedCheck_4729_;
goto v_resetjp_4720_;
}
else
{
lean_inc(v_snapshotTasks_4719_);
lean_inc(v_infoState_4718_);
lean_inc(v_messages_4717_);
lean_inc(v_recordedDeps_4716_);
lean_inc(v_traceState_4715_);
lean_inc(v_auxDeclNGen_4714_);
lean_inc(v_ngen_4713_);
lean_inc(v_nextMacroScope_4712_);
lean_inc(v_env_4711_);
lean_dec(v___x_4710_);
v___x_4721_ = lean_box(0);
v_isShared_4722_ = v_isSharedCheck_4729_;
goto v_resetjp_4720_;
}
v_resetjp_4720_:
{
lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4726_; 
v___x_4723_ = l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
lean_inc(v_snd_4641_);
lean_inc(v_fst_4636_);
v___x_4724_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_4723_, v_env_4711_, v_fst_4636_, v_snd_4641_, v___y_4698_);
if (v_isShared_4722_ == 0)
{
lean_ctor_set(v___x_4721_, 5, v___x_4528_);
lean_ctor_set(v___x_4721_, 0, v___x_4724_);
v___x_4726_ = v___x_4721_;
goto v_reusejp_4725_;
}
else
{
lean_object* v_reuseFailAlloc_4728_; 
v_reuseFailAlloc_4728_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4728_, 0, v___x_4724_);
lean_ctor_set(v_reuseFailAlloc_4728_, 1, v_nextMacroScope_4712_);
lean_ctor_set(v_reuseFailAlloc_4728_, 2, v_ngen_4713_);
lean_ctor_set(v_reuseFailAlloc_4728_, 3, v_auxDeclNGen_4714_);
lean_ctor_set(v_reuseFailAlloc_4728_, 4, v_traceState_4715_);
lean_ctor_set(v_reuseFailAlloc_4728_, 5, v___x_4528_);
lean_ctor_set(v_reuseFailAlloc_4728_, 6, v_recordedDeps_4716_);
lean_ctor_set(v_reuseFailAlloc_4728_, 7, v_messages_4717_);
lean_ctor_set(v_reuseFailAlloc_4728_, 8, v_infoState_4718_);
lean_ctor_set(v_reuseFailAlloc_4728_, 9, v_snapshotTasks_4719_);
v___x_4726_ = v_reuseFailAlloc_4728_;
goto v_reusejp_4725_;
}
v_reusejp_4725_:
{
lean_object* v___x_4727_; 
v___x_4727_ = lean_st_ref_put(v___y_4699_, v___x_4726_);
v_exportedInfo_x3f_4677_ = v_exportedInfo_x3f_4531_;
v___y_4678_ = v___y_4697_;
v___y_4679_ = v___y_4699_;
goto v___jp_4676_;
}
}
}
}
v___jp_4731_:
{
lean_object* v___x_4734_; uint8_t v___x_4735_; 
lean_inc(v_decl_4524_);
v___x_4734_ = l_Lean_Declaration_getTopLevelNames(v_decl_4524_);
v___x_4735_ = l_List_all___at___00Lean_checkSmartCasts_spec__5(v___x_4734_);
lean_dec(v___x_4734_);
if (v___x_4735_ == 0)
{
lean_dec(v___x_4529_);
if (lean_obj_tag(v_exportedInfo_x3f_4531_) == 0)
{
v___y_4697_ = v___y_4732_;
v___y_4698_ = v___x_4735_;
v___y_4699_ = v___y_4733_;
v___y_4700_ = v___x_4735_;
goto v___jp_4696_;
}
else
{
v___y_4697_ = v___y_4732_;
v___y_4698_ = v___x_4735_;
v___y_4699_ = v___y_4733_;
v___y_4700_ = v___x_4526_;
goto v___jp_4696_;
}
}
else
{
lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v_a_4738_; uint8_t v___x_4739_; 
lean_dec(v_exportedInfo_x3f_4531_);
lean_dec_ref(v___x_4528_);
v___x_4736_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_4737_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2___redArg(v___x_4736_, v___y_4732_);
v_a_4738_ = lean_ctor_get(v___x_4737_, 0);
lean_inc(v_a_4738_);
lean_dec_ref(v___x_4737_);
v___x_4739_ = lean_unbox(v_a_4738_);
lean_dec(v_a_4738_);
if (v___x_4739_ == 0)
{
lean_object* v_toCold_4740_; lean_object* v_options_4741_; uint8_t v_hasTrace_4742_; 
v_toCold_4740_ = lean_ctor_get(v___y_4732_, 0);
v_options_4741_ = lean_ctor_get(v_toCold_4740_, 2);
v_hasTrace_4742_ = lean_ctor_get_uint8(v_options_4741_, sizeof(void*)*1);
if (v_hasTrace_4742_ == 0)
{
lean_dec(v_cls_4527_);
v_exportedInfo_x3f_4677_ = v___x_4529_;
v___y_4678_ = v___y_4732_;
v___y_4679_ = v___y_4733_;
goto v___jp_4676_;
}
else
{
lean_object* v_inheritedTraceOptions_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; uint8_t v___x_4746_; 
v_inheritedTraceOptions_4743_ = lean_ctor_get(v_toCold_4740_, 11);
v___x_4744_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_4527_);
v___x_4745_ = l_Lean_Name_append(v___x_4744_, v_cls_4527_);
v___x_4746_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4743_, v_options_4741_, v___x_4745_);
lean_dec(v___x_4745_);
if (v___x_4746_ == 0)
{
lean_dec(v_cls_4527_);
v_exportedInfo_x3f_4677_ = v___x_4529_;
v___y_4678_ = v___y_4732_;
v___y_4679_ = v___y_4733_;
goto v___jp_4676_;
}
else
{
lean_object* v___x_4747_; lean_object* v___x_4748_; 
v___x_4747_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5);
v___x_4748_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_4527_, v___x_4747_, v___y_4732_, v___y_4733_);
if (lean_obj_tag(v___x_4748_) == 0)
{
lean_dec_ref_known(v___x_4748_, 1);
v_exportedInfo_x3f_4677_ = v___x_4529_;
v___y_4678_ = v___y_4732_;
v___y_4679_ = v___y_4733_;
goto v___jp_4676_;
}
else
{
lean_del_object(v___x_4643_);
lean_dec(v_snd_4641_);
lean_dec(v_fst_4640_);
lean_dec(v_fst_4636_);
lean_dec(v___x_4529_);
lean_dec(v_decl_4524_);
return v___x_4748_;
}
}
}
}
else
{
lean_object* v_toCold_4749_; lean_object* v_options_4750_; uint8_t v_hasTrace_4751_; 
lean_dec(v___x_4529_);
v_toCold_4749_ = lean_ctor_get(v___y_4732_, 0);
v_options_4750_ = lean_ctor_get(v_toCold_4749_, 2);
v_hasTrace_4751_ = lean_ctor_get_uint8(v_options_4750_, sizeof(void*)*1);
if (v_hasTrace_4751_ == 0)
{
lean_dec(v_cls_4527_);
v___y_4689_ = v___y_4732_;
v___y_4690_ = v___y_4733_;
goto v___jp_4688_;
}
else
{
lean_object* v_inheritedTraceOptions_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; uint8_t v___x_4755_; 
v_inheritedTraceOptions_4752_ = lean_ctor_get(v_toCold_4749_, 11);
v___x_4753_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_4527_);
v___x_4754_ = l_Lean_Name_append(v___x_4753_, v_cls_4527_);
v___x_4755_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4752_, v_options_4750_, v___x_4754_);
lean_dec(v___x_4754_);
if (v___x_4755_ == 0)
{
lean_dec(v_cls_4527_);
v___y_4689_ = v___y_4732_;
v___y_4690_ = v___y_4733_;
goto v___jp_4688_;
}
else
{
lean_object* v___x_4756_; lean_object* v___x_4757_; 
v___x_4756_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7);
v___x_4757_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_4527_, v___x_4756_, v___y_4732_, v___y_4733_);
if (lean_obj_tag(v___x_4757_) == 0)
{
lean_dec_ref_known(v___x_4757_, 1);
v___y_4689_ = v___y_4732_;
v___y_4690_ = v___y_4733_;
goto v___jp_4688_;
}
else
{
lean_del_object(v___x_4643_);
lean_dec(v_snd_4641_);
lean_dec(v_fst_4640_);
lean_dec(v_fst_4636_);
lean_dec(v_decl_4524_);
return v___x_4757_;
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
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14___boxed(lean_object* v_decl_4770_, lean_object* v_forceExpose_4771_, lean_object* v___x_4772_, lean_object* v_cls_4773_, lean_object* v___x_4774_, lean_object* v___x_4775_, lean_object* v_____x_4776_, lean_object* v_exportedInfo_x3f_4777_, lean_object* v___y_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_){
_start:
{
uint8_t v_forceExpose_boxed_4781_; uint8_t v___x_53976__boxed_4782_; lean_object* v_res_4783_; 
v_forceExpose_boxed_4781_ = lean_unbox(v_forceExpose_4771_);
v___x_53976__boxed_4782_ = lean_unbox(v___x_4772_);
v_res_4783_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14(v_decl_4770_, v_forceExpose_boxed_4781_, v___x_53976__boxed_4782_, v_cls_4773_, v___x_4774_, v___x_4775_, v_____x_4776_, v_exportedInfo_x3f_4777_, v___y_4778_, v___y_4779_);
lean_dec(v___y_4779_);
lean_dec_ref(v___y_4778_);
return v_res_4783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11(lean_object* v___f_4784_, uint8_t v_forceExpose_4785_, uint8_t v___x_4786_, lean_object* v___x_4787_, lean_object* v_cls_4788_, lean_object* v_defn_4789_, lean_object* v___y_4790_, lean_object* v___y_4791_){
_start:
{
lean_object* v_exportedInfo_x3f_4794_; lean_object* v___y_4795_; lean_object* v___y_4796_; lean_object* v___y_4806_; lean_object* v___y_4807_; lean_object* v___y_4808_; uint8_t v___y_4809_; lean_object* v___x_4813_; lean_object* v_env_4814_; lean_object* v___x_4815_; 
v___x_4813_ = lean_st_ref_get(v___y_4791_);
v_env_4814_ = lean_ctor_get(v___x_4813_, 0);
lean_inc_ref(v_env_4814_);
lean_dec(v___x_4813_);
v___x_4815_ = lean_st_ref_get(v___y_4791_);
if (v_forceExpose_4785_ == 0)
{
if (v___x_4786_ == 0)
{
lean_dec(v___x_4815_);
lean_dec_ref(v_env_4814_);
lean_dec(v_cls_4788_);
v_exportedInfo_x3f_4794_ = v___x_4787_;
v___y_4795_ = v___y_4790_;
v___y_4796_ = v___y_4791_;
goto v___jp_4793_;
}
else
{
lean_object* v_env_4816_; lean_object* v___x_4817_; uint8_t v_isModule_4818_; 
v_env_4816_ = lean_ctor_get(v___x_4815_, 0);
lean_inc_ref(v_env_4816_);
lean_dec(v___x_4815_);
v___x_4817_ = l_Lean_Environment_header(v_env_4814_);
lean_dec_ref(v_env_4814_);
v_isModule_4818_ = lean_ctor_get_uint8(v___x_4817_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4817_);
if (v_isModule_4818_ == 0)
{
lean_dec_ref(v_env_4816_);
lean_dec(v_cls_4788_);
v_exportedInfo_x3f_4794_ = v___x_4787_;
v___y_4795_ = v___y_4790_;
v___y_4796_ = v___y_4791_;
goto v___jp_4793_;
}
else
{
uint8_t v_isExporting_4819_; lean_object* v___y_4821_; lean_object* v___y_4822_; 
v_isExporting_4819_ = lean_ctor_get_uint8(v_env_4816_, sizeof(void*)*13);
lean_dec_ref(v_env_4816_);
if (v_isExporting_4819_ == 0)
{
lean_object* v_toCold_4827_; lean_object* v_options_4828_; uint8_t v_hasTrace_4829_; 
lean_dec(v___x_4787_);
v_toCold_4827_ = lean_ctor_get(v___y_4790_, 0);
v_options_4828_ = lean_ctor_get(v_toCold_4827_, 2);
v_hasTrace_4829_ = lean_ctor_get_uint8(v_options_4828_, sizeof(void*)*1);
if (v_hasTrace_4829_ == 0)
{
lean_dec(v_cls_4788_);
v___y_4821_ = v___y_4790_;
v___y_4822_ = v___y_4791_;
goto v___jp_4820_;
}
else
{
lean_object* v_inheritedTraceOptions_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; uint8_t v___x_4833_; 
v_inheritedTraceOptions_4830_ = lean_ctor_get(v_toCold_4827_, 11);
v___x_4831_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_4788_);
v___x_4832_ = l_Lean_Name_append(v___x_4831_, v_cls_4788_);
v___x_4833_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4830_, v_options_4828_, v___x_4832_);
lean_dec(v___x_4832_);
if (v___x_4833_ == 0)
{
lean_dec(v_cls_4788_);
v___y_4821_ = v___y_4790_;
v___y_4822_ = v___y_4791_;
goto v___jp_4820_;
}
else
{
lean_object* v_toConstantVal_4834_; lean_object* v_name_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; 
v_toConstantVal_4834_ = lean_ctor_get(v_defn_4789_, 0);
v_name_4835_ = lean_ctor_get(v_toConstantVal_4834_, 0);
v___x_4836_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1);
lean_inc(v_name_4835_);
v___x_4837_ = l_Lean_MessageData_ofName(v_name_4835_);
v___x_4838_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4838_, 0, v___x_4836_);
lean_ctor_set(v___x_4838_, 1, v___x_4837_);
v___x_4839_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4840_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4840_, 0, v___x_4838_);
lean_ctor_set(v___x_4840_, 1, v___x_4839_);
v___x_4841_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_4788_, v___x_4840_, v___y_4790_, v___y_4791_);
if (lean_obj_tag(v___x_4841_) == 0)
{
lean_dec_ref_known(v___x_4841_, 1);
v___y_4821_ = v___y_4790_;
v___y_4822_ = v___y_4791_;
goto v___jp_4820_;
}
else
{
lean_dec_ref(v_defn_4789_);
lean_dec_ref(v___f_4784_);
return v___x_4841_;
}
}
}
}
else
{
lean_dec(v_cls_4788_);
v_exportedInfo_x3f_4794_ = v___x_4787_;
v___y_4795_ = v___y_4790_;
v___y_4796_ = v___y_4791_;
goto v___jp_4793_;
}
v___jp_4820_:
{
lean_object* v_toConstantVal_4823_; uint8_t v_safety_4824_; uint8_t v___x_4825_; uint8_t v___x_4826_; 
v_toConstantVal_4823_ = lean_ctor_get(v_defn_4789_, 0);
v_safety_4824_ = lean_ctor_get_uint8(v_defn_4789_, sizeof(void*)*4);
v___x_4825_ = 1;
v___x_4826_ = l_Lean_instBEqDefinitionSafety_beq(v_safety_4824_, v___x_4825_);
if (v___x_4826_ == 0)
{
lean_inc_ref(v_toConstantVal_4823_);
v___y_4806_ = v_toConstantVal_4823_;
v___y_4807_ = v___y_4822_;
v___y_4808_ = v___y_4821_;
v___y_4809_ = v_isModule_4818_;
goto v___jp_4805_;
}
else
{
lean_inc_ref(v_toConstantVal_4823_);
v___y_4806_ = v_toConstantVal_4823_;
v___y_4807_ = v___y_4822_;
v___y_4808_ = v___y_4821_;
v___y_4809_ = v_isExporting_4819_;
goto v___jp_4805_;
}
}
}
}
}
else
{
lean_dec(v___x_4815_);
lean_dec_ref(v_env_4814_);
lean_dec(v_cls_4788_);
v_exportedInfo_x3f_4794_ = v___x_4787_;
v___y_4795_ = v___y_4790_;
v___y_4796_ = v___y_4791_;
goto v___jp_4793_;
}
v___jp_4793_:
{
lean_object* v_toConstantVal_4797_; lean_object* v_name_4798_; lean_object* v___x_4799_; uint8_t v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; 
v_toConstantVal_4797_ = lean_ctor_get(v_defn_4789_, 0);
v_name_4798_ = lean_ctor_get(v_toConstantVal_4797_, 0);
lean_inc(v_name_4798_);
v___x_4799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4799_, 0, v_defn_4789_);
v___x_4800_ = 0;
v___x_4801_ = lean_box(v___x_4800_);
v___x_4802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4802_, 0, v___x_4799_);
lean_ctor_set(v___x_4802_, 1, v___x_4801_);
v___x_4803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4803_, 0, v_name_4798_);
lean_ctor_set(v___x_4803_, 1, v___x_4802_);
lean_inc(v___y_4796_);
lean_inc_ref(v___y_4795_);
v___x_4804_ = lean_apply_5(v___f_4784_, v___x_4803_, v_exportedInfo_x3f_4794_, v___y_4795_, v___y_4796_, lean_box(0));
return v___x_4804_;
}
v___jp_4805_:
{
lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; 
v___x_4810_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4810_, 0, v___y_4806_);
lean_ctor_set_uint8(v___x_4810_, sizeof(void*)*1, v___y_4809_);
v___x_4811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4811_, 0, v___x_4810_);
v___x_4812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4812_, 0, v___x_4811_);
v_exportedInfo_x3f_4794_ = v___x_4812_;
v___y_4795_ = v___y_4808_;
v___y_4796_ = v___y_4807_;
goto v___jp_4793_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11___boxed(lean_object* v___f_4842_, lean_object* v_forceExpose_4843_, lean_object* v___x_4844_, lean_object* v___x_4845_, lean_object* v_cls_4846_, lean_object* v_defn_4847_, lean_object* v___y_4848_, lean_object* v___y_4849_, lean_object* v___y_4850_){
_start:
{
uint8_t v_forceExpose_boxed_4851_; uint8_t v___x_54456__boxed_4852_; lean_object* v_res_4853_; 
v_forceExpose_boxed_4851_ = lean_unbox(v_forceExpose_4843_);
v___x_54456__boxed_4852_ = lean_unbox(v___x_4844_);
v_res_4853_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11(v___f_4842_, v_forceExpose_boxed_4851_, v___x_54456__boxed_4852_, v___x_4845_, v_cls_4846_, v_defn_4847_, v___y_4848_, v___y_4849_);
lean_dec(v___y_4849_);
lean_dec_ref(v___y_4848_);
return v_res_4853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13(lean_object* v_val_4854_, lean_object* v___f_4855_, lean_object* v_____r_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_){
_start:
{
lean_object* v_toConstantVal_4860_; uint8_t v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; 
v_toConstantVal_4860_ = lean_ctor_get(v_val_4854_, 0);
v___x_4861_ = 0;
lean_inc_ref(v_toConstantVal_4860_);
v___x_4862_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4862_, 0, v_toConstantVal_4860_);
lean_ctor_set_uint8(v___x_4862_, sizeof(void*)*1, v___x_4861_);
v___x_4863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4863_, 0, v___x_4862_);
v___x_4864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4864_, 0, v___x_4863_);
v___x_4865_ = lean_box(0);
lean_inc(v___y_4858_);
lean_inc_ref(v___y_4857_);
v___x_4866_ = lean_apply_5(v___f_4855_, v___x_4865_, v___x_4864_, v___y_4857_, v___y_4858_, lean_box(0));
return v___x_4866_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13___boxed(lean_object* v_val_4867_, lean_object* v___f_4868_, lean_object* v_____r_4869_, lean_object* v___y_4870_, lean_object* v___y_4871_, lean_object* v___y_4872_){
_start:
{
lean_object* v_res_4873_; 
v_res_4873_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13(v_val_4867_, v___f_4868_, v_____r_4869_, v___y_4870_, v___y_4871_);
lean_dec(v___y_4871_);
lean_dec_ref(v___y_4870_);
lean_dec_ref(v_val_4867_);
return v_res_4873_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(lean_object* v_x_4874_, lean_object* v_x_4875_){
_start:
{
if (lean_obj_tag(v_x_4875_) == 0)
{
return v_x_4874_;
}
else
{
lean_object* v_head_4876_; lean_object* v_tail_4877_; lean_object* v___x_4878_; 
v_head_4876_ = lean_ctor_get(v_x_4875_, 0);
lean_inc(v_head_4876_);
v_tail_4877_ = lean_ctor_get(v_x_4875_, 1);
lean_inc(v_tail_4877_);
lean_dec_ref_known(v_x_4875_, 2);
v___x_4878_ = l___private_Lean_AddDecl_0__Lean_registerNamePrefixes(v_x_4874_, v_head_4876_);
v_x_4874_ = v___x_4878_;
v_x_4875_ = v_tail_4877_;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0(void){
_start:
{
lean_object* v_cls_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; 
v_cls_4880_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
v___x_4881_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
v___x_4882_ = l_Lean_Name_append(v___x_4881_, v_cls_4880_);
return v___x_4882_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2(void){
_start:
{
lean_object* v___x_4884_; lean_object* v___x_4885_; 
v___x_4884_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__1));
v___x_4885_ = l_Lean_stringToMessageData(v___x_4884_);
return v___x_4885_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4(void){
_start:
{
lean_object* v___x_4887_; lean_object* v___x_4888_; 
v___x_4887_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__3));
v___x_4888_ = l_Lean_stringToMessageData(v___x_4887_);
return v___x_4888_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore(lean_object* v_decl_4889_, uint8_t v_forceExpose_4890_, lean_object* v_a_4891_, lean_object* v_a_4892_){
_start:
{
lean_object* v___y_4895_; lean_object* v___y_4896_; lean_object* v_a_4897_; lean_object* v___y_4908_; lean_object* v___y_4909_; lean_object* v_a_4910_; lean_object* v___y_4921_; lean_object* v___y_4922_; lean_object* v_a_4923_; lean_object* v___y_4934_; lean_object* v___y_4935_; lean_object* v_a_4936_; lean_object* v_toCold_4946_; lean_object* v_options_4947_; lean_object* v_inheritedTraceOptions_4948_; uint8_t v_hasTrace_4949_; lean_object* v___y_4951_; lean_object* v___y_4952_; uint8_t v___y_4953_; lean_object* v___y_4954_; lean_object* v___y_4955_; lean_object* v___y_4956_; lean_object* v___y_4957_; lean_object* v___y_4958_; lean_object* v___y_4959_; lean_object* v___y_4960_; lean_object* v___y_4961_; lean_object* v___y_4962_; lean_object* v___y_5025_; lean_object* v___y_5026_; lean_object* v___y_5027_; lean_object* v___y_5028_; lean_object* v___y_5029_; uint8_t v___y_5030_; lean_object* v___y_5031_; lean_object* v___y_5032_; lean_object* v___y_5056_; lean_object* v___y_5057_; uint8_t v___y_5058_; lean_object* v_exportedInfo_x3f_5059_; lean_object* v___y_5060_; lean_object* v___y_5061_; lean_object* v___y_5071_; lean_object* v___y_5072_; uint8_t v___y_5073_; lean_object* v___y_5074_; lean_object* v___y_5075_; lean_object* v___y_5078_; lean_object* v___y_5079_; uint8_t v___y_5080_; lean_object* v___y_5081_; lean_object* v___y_5082_; lean_object* v_cls_5084_; lean_object* v___y_5086_; lean_object* v_options_5087_; lean_object* v_inheritedTraceOptions_5088_; lean_object* v___y_5089_; 
v_toCold_4946_ = lean_ctor_get(v_a_4891_, 0);
v_options_4947_ = lean_ctor_get(v_toCold_4946_, 2);
v_inheritedTraceOptions_4948_ = lean_ctor_get(v_toCold_4946_, 11);
v_hasTrace_4949_ = lean_ctor_get_uint8(v_options_4947_, sizeof(void*)*1);
v_cls_5084_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
if (v_hasTrace_4949_ == 0)
{
lean_object* v___x_5096_; lean_object* v_env_5097_; lean_object* v_nextMacroScope_5098_; lean_object* v_ngen_5099_; lean_object* v_auxDeclNGen_5100_; lean_object* v_traceState_5101_; lean_object* v_recordedDeps_5102_; lean_object* v_messages_5103_; lean_object* v_infoState_5104_; lean_object* v_snapshotTasks_5105_; lean_object* v___x_5107_; uint8_t v_isShared_5108_; uint8_t v_isSharedCheck_5309_; 
v___x_5096_ = lean_st_ref_take(v_a_4892_);
v_env_5097_ = lean_ctor_get(v___x_5096_, 0);
v_nextMacroScope_5098_ = lean_ctor_get(v___x_5096_, 1);
v_ngen_5099_ = lean_ctor_get(v___x_5096_, 2);
v_auxDeclNGen_5100_ = lean_ctor_get(v___x_5096_, 3);
v_traceState_5101_ = lean_ctor_get(v___x_5096_, 4);
v_recordedDeps_5102_ = lean_ctor_get(v___x_5096_, 6);
v_messages_5103_ = lean_ctor_get(v___x_5096_, 7);
v_infoState_5104_ = lean_ctor_get(v___x_5096_, 8);
v_snapshotTasks_5105_ = lean_ctor_get(v___x_5096_, 9);
v_isSharedCheck_5309_ = !lean_is_exclusive(v___x_5096_);
if (v_isSharedCheck_5309_ == 0)
{
lean_object* v_unused_5310_; 
v_unused_5310_ = lean_ctor_get(v___x_5096_, 5);
lean_dec(v_unused_5310_);
v___x_5107_ = v___x_5096_;
v_isShared_5108_ = v_isSharedCheck_5309_;
goto v_resetjp_5106_;
}
else
{
lean_inc(v_snapshotTasks_5105_);
lean_inc(v_infoState_5104_);
lean_inc(v_messages_5103_);
lean_inc(v_recordedDeps_5102_);
lean_inc(v_traceState_5101_);
lean_inc(v_auxDeclNGen_5100_);
lean_inc(v_ngen_5099_);
lean_inc(v_nextMacroScope_5098_);
lean_inc(v_env_5097_);
lean_dec(v___x_5096_);
v___x_5107_ = lean_box(0);
v_isShared_5108_ = v_isSharedCheck_5309_;
goto v_resetjp_5106_;
}
v_resetjp_5106_:
{
lean_object* v___x_5109_; lean_object* v___x_5110_; lean_object* v___x_5111_; lean_object* v___y_5113_; uint8_t v___y_5114_; lean_object* v___y_5115_; uint8_t v___y_5116_; lean_object* v___y_5117_; lean_object* v___y_5118_; lean_object* v___y_5119_; lean_object* v___x_5143_; 
lean_inc(v_decl_4889_);
v___x_5109_ = l_Lean_Declaration_getNames(v_decl_4889_);
v___x_5110_ = l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(v_env_5097_, v___x_5109_);
v___x_5111_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_5108_ == 0)
{
lean_ctor_set(v___x_5107_, 5, v___x_5111_);
lean_ctor_set(v___x_5107_, 0, v___x_5110_);
v___x_5143_ = v___x_5107_;
goto v_reusejp_5142_;
}
else
{
lean_object* v_reuseFailAlloc_5308_; 
v_reuseFailAlloc_5308_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5308_, 0, v___x_5110_);
lean_ctor_set(v_reuseFailAlloc_5308_, 1, v_nextMacroScope_5098_);
lean_ctor_set(v_reuseFailAlloc_5308_, 2, v_ngen_5099_);
lean_ctor_set(v_reuseFailAlloc_5308_, 3, v_auxDeclNGen_5100_);
lean_ctor_set(v_reuseFailAlloc_5308_, 4, v_traceState_5101_);
lean_ctor_set(v_reuseFailAlloc_5308_, 5, v___x_5111_);
lean_ctor_set(v_reuseFailAlloc_5308_, 6, v_recordedDeps_5102_);
lean_ctor_set(v_reuseFailAlloc_5308_, 7, v_messages_5103_);
lean_ctor_set(v_reuseFailAlloc_5308_, 8, v_infoState_5104_);
lean_ctor_set(v_reuseFailAlloc_5308_, 9, v_snapshotTasks_5105_);
v___x_5143_ = v_reuseFailAlloc_5308_;
goto v_reusejp_5142_;
}
v___jp_5112_:
{
lean_object* v___x_5120_; lean_object* v_env_5121_; lean_object* v_nextMacroScope_5122_; lean_object* v_ngen_5123_; lean_object* v_auxDeclNGen_5124_; lean_object* v_traceState_5125_; lean_object* v_recordedDeps_5126_; lean_object* v_messages_5127_; lean_object* v_infoState_5128_; lean_object* v_snapshotTasks_5129_; lean_object* v___x_5131_; uint8_t v_isShared_5132_; uint8_t v_isSharedCheck_5140_; 
v___x_5120_ = lean_st_ref_take(v___y_5117_);
v_env_5121_ = lean_ctor_get(v___x_5120_, 0);
v_nextMacroScope_5122_ = lean_ctor_get(v___x_5120_, 1);
v_ngen_5123_ = lean_ctor_get(v___x_5120_, 2);
v_auxDeclNGen_5124_ = lean_ctor_get(v___x_5120_, 3);
v_traceState_5125_ = lean_ctor_get(v___x_5120_, 4);
v_recordedDeps_5126_ = lean_ctor_get(v___x_5120_, 6);
v_messages_5127_ = lean_ctor_get(v___x_5120_, 7);
v_infoState_5128_ = lean_ctor_get(v___x_5120_, 8);
v_snapshotTasks_5129_ = lean_ctor_get(v___x_5120_, 9);
v_isSharedCheck_5140_ = !lean_is_exclusive(v___x_5120_);
if (v_isSharedCheck_5140_ == 0)
{
lean_object* v_unused_5141_; 
v_unused_5141_ = lean_ctor_get(v___x_5120_, 5);
lean_dec(v_unused_5141_);
v___x_5131_ = v___x_5120_;
v_isShared_5132_ = v_isSharedCheck_5140_;
goto v_resetjp_5130_;
}
else
{
lean_inc(v_snapshotTasks_5129_);
lean_inc(v_infoState_5128_);
lean_inc(v_messages_5127_);
lean_inc(v_recordedDeps_5126_);
lean_inc(v_traceState_5125_);
lean_inc(v_auxDeclNGen_5124_);
lean_inc(v_ngen_5123_);
lean_inc(v_nextMacroScope_5122_);
lean_inc(v_env_5121_);
lean_dec(v___x_5120_);
v___x_5131_ = lean_box(0);
v_isShared_5132_ = v_isSharedCheck_5140_;
goto v_resetjp_5130_;
}
v_resetjp_5130_:
{
lean_object* v___x_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v___x_5137_; 
v___x_5133_ = l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
v___x_5134_ = lean_box(v___y_5116_);
lean_inc(v___y_5115_);
v___x_5135_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_5133_, v_env_5121_, v___y_5115_, v___x_5134_, v___y_5114_);
if (v_isShared_5132_ == 0)
{
lean_ctor_set(v___x_5131_, 5, v___x_5111_);
lean_ctor_set(v___x_5131_, 0, v___x_5135_);
v___x_5137_ = v___x_5131_;
goto v_reusejp_5136_;
}
else
{
lean_object* v_reuseFailAlloc_5139_; 
v_reuseFailAlloc_5139_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5139_, 0, v___x_5135_);
lean_ctor_set(v_reuseFailAlloc_5139_, 1, v_nextMacroScope_5122_);
lean_ctor_set(v_reuseFailAlloc_5139_, 2, v_ngen_5123_);
lean_ctor_set(v_reuseFailAlloc_5139_, 3, v_auxDeclNGen_5124_);
lean_ctor_set(v_reuseFailAlloc_5139_, 4, v_traceState_5125_);
lean_ctor_set(v_reuseFailAlloc_5139_, 5, v___x_5111_);
lean_ctor_set(v_reuseFailAlloc_5139_, 6, v_recordedDeps_5126_);
lean_ctor_set(v_reuseFailAlloc_5139_, 7, v_messages_5127_);
lean_ctor_set(v_reuseFailAlloc_5139_, 8, v_infoState_5128_);
lean_ctor_set(v_reuseFailAlloc_5139_, 9, v_snapshotTasks_5129_);
v___x_5137_ = v_reuseFailAlloc_5139_;
goto v_reusejp_5136_;
}
v_reusejp_5136_:
{
lean_object* v___x_5138_; 
v___x_5138_ = lean_st_ref_put(v___y_5117_, v___x_5137_);
v___y_5056_ = v___y_5113_;
v___y_5057_ = v___y_5115_;
v___y_5058_ = v___y_5116_;
v_exportedInfo_x3f_5059_ = v___y_5119_;
v___y_5060_ = v___y_5118_;
v___y_5061_ = v___y_5117_;
goto v___jp_5055_;
}
}
}
v_reusejp_5142_:
{
lean_object* v___x_5144_; lean_object* v___x_5145_; lean_object* v___y_5147_; lean_object* v___y_5148_; uint8_t v___y_5149_; lean_object* v___y_5150_; lean_object* v___y_5151_; lean_object* v___y_5152_; lean_object* v_fst_5184_; lean_object* v_fst_5185_; uint8_t v_snd_5186_; lean_object* v_exportedInfo_x3f_5187_; lean_object* v___y_5188_; lean_object* v___y_5189_; lean_object* v___y_5199_; lean_object* v_exportedInfo_x3f_5200_; lean_object* v___y_5201_; lean_object* v___y_5202_; lean_object* v___y_5208_; lean_object* v___y_5209_; lean_object* v___y_5210_; lean_object* v___y_5211_; uint8_t v___y_5212_; uint8_t v___y_5217_; lean_object* v___y_5218_; lean_object* v_toConstantVal_5219_; uint8_t v_safety_5220_; lean_object* v___y_5221_; lean_object* v___y_5222_; uint8_t v___y_5226_; lean_object* v___y_5227_; lean_object* v___y_5228_; lean_object* v___y_5229_; lean_object* v_defn_5233_; lean_object* v___y_5234_; lean_object* v___y_5235_; 
v___x_5144_ = lean_st_ref_put(v_a_4892_, v___x_5143_);
v___x_5145_ = lean_box(0);
switch(lean_obj_tag(v_decl_4889_))
{
case 2:
{
lean_object* v_val_5258_; lean_object* v_exportedInfo_x3f_5260_; lean_object* v___y_5261_; lean_object* v___y_5262_; lean_object* v___x_5267_; 
v_val_5258_ = lean_ctor_get(v_decl_4889_, 0);
v___x_5267_ = lean_st_ref_get(v_a_4892_);
if (v_forceExpose_4890_ == 0)
{
lean_object* v_env_5268_; lean_object* v___x_5269_; uint8_t v_isModule_5270_; 
v_env_5268_ = lean_ctor_get(v___x_5267_, 0);
lean_inc_ref(v_env_5268_);
lean_dec(v___x_5267_);
v___x_5269_ = l_Lean_Environment_header(v_env_5268_);
lean_dec_ref(v_env_5268_);
v_isModule_5270_ = lean_ctor_get_uint8(v___x_5269_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_5269_);
if (v_isModule_5270_ == 0)
{
v_exportedInfo_x3f_5260_ = v___x_5145_;
v___y_5261_ = v_a_4891_;
v___y_5262_ = v_a_4892_;
goto v___jp_5259_;
}
else
{
lean_object* v_toConstantVal_5271_; lean_object* v___x_5272_; lean_object* v___x_5273_; lean_object* v___x_5274_; 
v_toConstantVal_5271_ = lean_ctor_get(v_val_5258_, 0);
lean_inc_ref(v_toConstantVal_5271_);
v___x_5272_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5272_, 0, v_toConstantVal_5271_);
lean_ctor_set_uint8(v___x_5272_, sizeof(void*)*1, v_hasTrace_4949_);
v___x_5273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5273_, 0, v___x_5272_);
v___x_5274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5274_, 0, v___x_5273_);
v_exportedInfo_x3f_5260_ = v___x_5274_;
v___y_5261_ = v_a_4891_;
v___y_5262_ = v_a_4892_;
goto v___jp_5259_;
}
}
else
{
lean_dec(v___x_5267_);
v_exportedInfo_x3f_5260_ = v___x_5145_;
v___y_5261_ = v_a_4891_;
v___y_5262_ = v_a_4892_;
goto v___jp_5259_;
}
v___jp_5259_:
{
lean_object* v_toConstantVal_5263_; lean_object* v_name_5264_; lean_object* v___x_5265_; uint8_t v___x_5266_; 
v_toConstantVal_5263_ = lean_ctor_get(v_val_5258_, 0);
v_name_5264_ = lean_ctor_get(v_toConstantVal_5263_, 0);
lean_inc_ref(v_val_5258_);
v___x_5265_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_5265_, 0, v_val_5258_);
v___x_5266_ = 1;
lean_inc(v_name_5264_);
v_fst_5184_ = v_name_5264_;
v_fst_5185_ = v___x_5265_;
v_snd_5186_ = v___x_5266_;
v_exportedInfo_x3f_5187_ = v_exportedInfo_x3f_5260_;
v___y_5188_ = v___y_5261_;
v___y_5189_ = v___y_5262_;
goto v___jp_5183_;
}
}
case 1:
{
lean_object* v_val_5275_; 
v_val_5275_ = lean_ctor_get(v_decl_4889_, 0);
lean_inc_ref(v_val_5275_);
v_defn_5233_ = v_val_5275_;
v___y_5234_ = v_a_4891_;
v___y_5235_ = v_a_4892_;
goto v___jp_5232_;
}
case 5:
{
lean_object* v_defns_5276_; 
v_defns_5276_ = lean_ctor_get(v_decl_4889_, 0);
if (lean_obj_tag(v_defns_5276_) == 1)
{
lean_object* v_tail_5277_; 
v_tail_5277_ = lean_ctor_get(v_defns_5276_, 1);
if (lean_obj_tag(v_tail_5277_) == 0)
{
lean_object* v_head_5278_; 
v_head_5278_ = lean_ctor_get(v_defns_5276_, 0);
lean_inc(v_head_5278_);
v_defn_5233_ = v_head_5278_;
v___y_5234_ = v_a_4891_;
v___y_5235_ = v_a_4892_;
goto v___jp_5232_;
}
else
{
lean_object* v___x_5279_; 
v___x_5279_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_4889_, v_forceExpose_4890_, v_a_4891_, v_a_4892_);
return v___x_5279_;
}
}
else
{
lean_object* v___x_5280_; 
v___x_5280_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_4889_, v_forceExpose_4890_, v_a_4891_, v_a_4892_);
return v___x_5280_;
}
}
case 3:
{
lean_object* v_val_5281_; lean_object* v_exportedInfo_x3f_5283_; lean_object* v___y_5284_; lean_object* v___y_5285_; lean_object* v___x_5290_; lean_object* v_env_5291_; lean_object* v___x_5292_; 
v_val_5281_ = lean_ctor_get(v_decl_4889_, 0);
v___x_5290_ = lean_st_ref_get(v_a_4892_);
v_env_5291_ = lean_ctor_get(v___x_5290_, 0);
lean_inc_ref(v_env_5291_);
lean_dec(v___x_5290_);
v___x_5292_ = lean_st_ref_get(v_a_4892_);
if (v_forceExpose_4890_ == 0)
{
lean_object* v_env_5293_; lean_object* v___x_5294_; uint8_t v_isModule_5295_; 
v_env_5293_ = lean_ctor_get(v___x_5292_, 0);
lean_inc_ref(v_env_5293_);
lean_dec(v___x_5292_);
v___x_5294_ = l_Lean_Environment_header(v_env_5291_);
lean_dec_ref(v_env_5291_);
v_isModule_5295_ = lean_ctor_get_uint8(v___x_5294_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_5294_);
if (v_isModule_5295_ == 0)
{
lean_dec_ref(v_env_5293_);
v_exportedInfo_x3f_5283_ = v___x_5145_;
v___y_5284_ = v_a_4891_;
v___y_5285_ = v_a_4892_;
goto v___jp_5282_;
}
else
{
uint8_t v_isExporting_5296_; 
v_isExporting_5296_ = lean_ctor_get_uint8(v_env_5293_, sizeof(void*)*13);
lean_dec_ref(v_env_5293_);
if (v_isExporting_5296_ == 0)
{
lean_object* v_toConstantVal_5297_; uint8_t v_isUnsafe_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; lean_object* v___x_5301_; 
v_toConstantVal_5297_ = lean_ctor_get(v_val_5281_, 0);
v_isUnsafe_5298_ = lean_ctor_get_uint8(v_val_5281_, sizeof(void*)*3);
lean_inc_ref(v_toConstantVal_5297_);
v___x_5299_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5299_, 0, v_toConstantVal_5297_);
lean_ctor_set_uint8(v___x_5299_, sizeof(void*)*1, v_isUnsafe_5298_);
v___x_5300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5300_, 0, v___x_5299_);
v___x_5301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5301_, 0, v___x_5300_);
v_exportedInfo_x3f_5283_ = v___x_5301_;
v___y_5284_ = v_a_4891_;
v___y_5285_ = v_a_4892_;
goto v___jp_5282_;
}
else
{
v_exportedInfo_x3f_5283_ = v___x_5145_;
v___y_5284_ = v_a_4891_;
v___y_5285_ = v_a_4892_;
goto v___jp_5282_;
}
}
}
else
{
lean_dec(v___x_5292_);
lean_dec_ref(v_env_5291_);
v_exportedInfo_x3f_5283_ = v___x_5145_;
v___y_5284_ = v_a_4891_;
v___y_5285_ = v_a_4892_;
goto v___jp_5282_;
}
v___jp_5282_:
{
lean_object* v_toConstantVal_5286_; lean_object* v_name_5287_; lean_object* v___x_5288_; uint8_t v___x_5289_; 
v_toConstantVal_5286_ = lean_ctor_get(v_val_5281_, 0);
v_name_5287_ = lean_ctor_get(v_toConstantVal_5286_, 0);
lean_inc_ref(v_val_5281_);
v___x_5288_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5288_, 0, v_val_5281_);
v___x_5289_ = 3;
lean_inc(v_name_5287_);
v_fst_5184_ = v_name_5287_;
v_fst_5185_ = v___x_5288_;
v_snd_5186_ = v___x_5289_;
v_exportedInfo_x3f_5187_ = v_exportedInfo_x3f_5283_;
v___y_5188_ = v___y_5284_;
v___y_5189_ = v___y_5285_;
goto v___jp_5183_;
}
}
case 0:
{
lean_object* v_val_5302_; lean_object* v_toConstantVal_5303_; lean_object* v_name_5304_; lean_object* v___x_5305_; uint8_t v___x_5306_; 
v_val_5302_ = lean_ctor_get(v_decl_4889_, 0);
v_toConstantVal_5303_ = lean_ctor_get(v_val_5302_, 0);
v_name_5304_ = lean_ctor_get(v_toConstantVal_5303_, 0);
lean_inc_ref(v_val_5302_);
v___x_5305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5305_, 0, v_val_5302_);
v___x_5306_ = 2;
lean_inc(v_name_5304_);
v_fst_5184_ = v_name_5304_;
v_fst_5185_ = v___x_5305_;
v_snd_5186_ = v___x_5306_;
v_exportedInfo_x3f_5187_ = v___x_5145_;
v___y_5188_ = v_a_4891_;
v___y_5189_ = v_a_4892_;
goto v___jp_5183_;
}
default: 
{
lean_object* v___x_5307_; 
v___x_5307_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_4889_, v_forceExpose_4890_, v_a_4891_, v_a_4892_);
return v___x_5307_;
}
}
v___jp_5146_:
{
lean_object* v___x_5153_; uint8_t v___x_5154_; 
lean_inc(v_decl_4889_);
v___x_5153_ = l_Lean_Declaration_getTopLevelNames(v_decl_4889_);
v___x_5154_ = l_List_all___at___00Lean_checkSmartCasts_spec__5(v___x_5153_);
lean_dec(v___x_5153_);
if (v___x_5154_ == 0)
{
if (lean_obj_tag(v___y_5150_) == 0)
{
if (v___x_5154_ == 0)
{
lean_object* v_toCold_5155_; lean_object* v_options_5156_; uint8_t v_hasTrace_5157_; 
v_toCold_5155_ = lean_ctor_get(v___y_5151_, 0);
v_options_5156_ = lean_ctor_get(v_toCold_5155_, 2);
v_hasTrace_5157_ = lean_ctor_get_uint8(v_options_5156_, sizeof(void*)*1);
if (v_hasTrace_5157_ == 0)
{
v___y_5071_ = v___y_5147_;
v___y_5072_ = v___y_5148_;
v___y_5073_ = v___y_5149_;
v___y_5074_ = v___y_5151_;
v___y_5075_ = v___y_5152_;
goto v___jp_5070_;
}
else
{
lean_object* v_inheritedTraceOptions_5158_; lean_object* v___x_5159_; uint8_t v___x_5160_; 
v_inheritedTraceOptions_5158_ = lean_ctor_get(v_toCold_5155_, 11);
v___x_5159_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_5160_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5158_, v_options_5156_, v___x_5159_);
if (v___x_5160_ == 0)
{
v___y_5071_ = v___y_5147_;
v___y_5072_ = v___y_5148_;
v___y_5073_ = v___y_5149_;
v___y_5074_ = v___y_5151_;
v___y_5075_ = v___y_5152_;
goto v___jp_5070_;
}
else
{
lean_object* v___x_5161_; lean_object* v___x_5162_; 
v___x_5161_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3);
v___x_5162_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_5084_, v___x_5161_, v___y_5151_, v___y_5152_);
if (lean_obj_tag(v___x_5162_) == 0)
{
lean_dec_ref_known(v___x_5162_, 1);
v___y_5071_ = v___y_5147_;
v___y_5072_ = v___y_5148_;
v___y_5073_ = v___y_5149_;
v___y_5074_ = v___y_5151_;
v___y_5075_ = v___y_5152_;
goto v___jp_5070_;
}
else
{
lean_dec(v___y_5148_);
lean_dec_ref(v___y_5147_);
lean_dec(v_decl_4889_);
return v___x_5162_;
}
}
}
}
else
{
v___y_5113_ = v___y_5147_;
v___y_5114_ = v___x_5154_;
v___y_5115_ = v___y_5148_;
v___y_5116_ = v___y_5149_;
v___y_5117_ = v___y_5152_;
v___y_5118_ = v___y_5151_;
v___y_5119_ = v___y_5150_;
goto v___jp_5112_;
}
}
else
{
v___y_5113_ = v___y_5147_;
v___y_5114_ = v___x_5154_;
v___y_5115_ = v___y_5148_;
v___y_5116_ = v___y_5149_;
v___y_5117_ = v___y_5152_;
v___y_5118_ = v___y_5151_;
v___y_5119_ = v___y_5150_;
goto v___jp_5112_;
}
}
else
{
lean_object* v___x_5163_; lean_object* v___x_5164_; lean_object* v_a_5165_; uint8_t v___x_5166_; 
lean_dec(v___y_5150_);
v___x_5163_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_5164_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2___redArg(v___x_5163_, v___y_5151_);
v_a_5165_ = lean_ctor_get(v___x_5164_, 0);
lean_inc(v_a_5165_);
lean_dec_ref(v___x_5164_);
v___x_5166_ = lean_unbox(v_a_5165_);
lean_dec(v_a_5165_);
if (v___x_5166_ == 0)
{
lean_object* v_toCold_5167_; lean_object* v_options_5168_; uint8_t v_hasTrace_5169_; 
v_toCold_5167_ = lean_ctor_get(v___y_5151_, 0);
v_options_5168_ = lean_ctor_get(v_toCold_5167_, 2);
v_hasTrace_5169_ = lean_ctor_get_uint8(v_options_5168_, sizeof(void*)*1);
if (v_hasTrace_5169_ == 0)
{
v___y_5056_ = v___y_5147_;
v___y_5057_ = v___y_5148_;
v___y_5058_ = v___y_5149_;
v_exportedInfo_x3f_5059_ = v___x_5145_;
v___y_5060_ = v___y_5151_;
v___y_5061_ = v___y_5152_;
goto v___jp_5055_;
}
else
{
lean_object* v_inheritedTraceOptions_5170_; lean_object* v___x_5171_; uint8_t v___x_5172_; 
v_inheritedTraceOptions_5170_ = lean_ctor_get(v_toCold_5167_, 11);
v___x_5171_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_5172_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5170_, v_options_5168_, v___x_5171_);
if (v___x_5172_ == 0)
{
v___y_5056_ = v___y_5147_;
v___y_5057_ = v___y_5148_;
v___y_5058_ = v___y_5149_;
v_exportedInfo_x3f_5059_ = v___x_5145_;
v___y_5060_ = v___y_5151_;
v___y_5061_ = v___y_5152_;
goto v___jp_5055_;
}
else
{
lean_object* v___x_5173_; lean_object* v___x_5174_; 
v___x_5173_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5);
v___x_5174_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_5084_, v___x_5173_, v___y_5151_, v___y_5152_);
if (lean_obj_tag(v___x_5174_) == 0)
{
lean_dec_ref_known(v___x_5174_, 1);
v___y_5056_ = v___y_5147_;
v___y_5057_ = v___y_5148_;
v___y_5058_ = v___y_5149_;
v_exportedInfo_x3f_5059_ = v___x_5145_;
v___y_5060_ = v___y_5151_;
v___y_5061_ = v___y_5152_;
goto v___jp_5055_;
}
else
{
lean_dec(v___y_5148_);
lean_dec_ref(v___y_5147_);
lean_dec(v_decl_4889_);
return v___x_5174_;
}
}
}
}
else
{
lean_object* v_toCold_5175_; lean_object* v_options_5176_; uint8_t v_hasTrace_5177_; 
v_toCold_5175_ = lean_ctor_get(v___y_5151_, 0);
v_options_5176_ = lean_ctor_get(v_toCold_5175_, 2);
v_hasTrace_5177_ = lean_ctor_get_uint8(v_options_5176_, sizeof(void*)*1);
if (v_hasTrace_5177_ == 0)
{
v___y_5078_ = v___y_5147_;
v___y_5079_ = v___y_5148_;
v___y_5080_ = v___y_5149_;
v___y_5081_ = v___y_5151_;
v___y_5082_ = v___y_5152_;
goto v___jp_5077_;
}
else
{
lean_object* v_inheritedTraceOptions_5178_; lean_object* v___x_5179_; uint8_t v___x_5180_; 
v_inheritedTraceOptions_5178_ = lean_ctor_get(v_toCold_5175_, 11);
v___x_5179_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_5180_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5178_, v_options_5176_, v___x_5179_);
if (v___x_5180_ == 0)
{
v___y_5078_ = v___y_5147_;
v___y_5079_ = v___y_5148_;
v___y_5080_ = v___y_5149_;
v___y_5081_ = v___y_5151_;
v___y_5082_ = v___y_5152_;
goto v___jp_5077_;
}
else
{
lean_object* v___x_5181_; lean_object* v___x_5182_; 
v___x_5181_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7);
v___x_5182_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_5084_, v___x_5181_, v___y_5151_, v___y_5152_);
if (lean_obj_tag(v___x_5182_) == 0)
{
lean_dec_ref_known(v___x_5182_, 1);
v___y_5078_ = v___y_5147_;
v___y_5079_ = v___y_5148_;
v___y_5080_ = v___y_5149_;
v___y_5081_ = v___y_5151_;
v___y_5082_ = v___y_5152_;
goto v___jp_5077_;
}
else
{
lean_dec(v___y_5148_);
lean_dec_ref(v___y_5147_);
lean_dec(v_decl_4889_);
return v___x_5182_;
}
}
}
}
}
}
v___jp_5183_:
{
lean_object* v___x_5190_; lean_object* v_env_5191_; uint8_t v___x_5192_; 
v___x_5190_ = lean_st_ref_get(v___y_5189_);
v_env_5191_ = lean_ctor_get(v___x_5190_, 0);
lean_inc_ref(v_env_5191_);
lean_dec(v___x_5190_);
v___x_5192_ = l_Lean_Environment_containsOnBranch(v_env_5191_, v_fst_5184_);
lean_dec_ref(v_env_5191_);
if (v___x_5192_ == 0)
{
v___y_5147_ = v_fst_5185_;
v___y_5148_ = v_fst_5184_;
v___y_5149_ = v_snd_5186_;
v___y_5150_ = v_exportedInfo_x3f_5187_;
v___y_5151_ = v___y_5188_;
v___y_5152_ = v___y_5189_;
goto v___jp_5146_;
}
else
{
lean_object* v___x_5193_; lean_object* v_env_5194_; lean_object* v___x_5195_; lean_object* v___x_5196_; lean_object* v___x_5197_; 
lean_dec(v_exportedInfo_x3f_5187_);
lean_dec_ref(v_fst_5185_);
lean_dec(v_decl_4889_);
v___x_5193_ = lean_st_ref_get(v___y_5189_);
v_env_5194_ = lean_ctor_get(v___x_5193_, 0);
lean_inc_ref(v_env_5194_);
lean_dec(v___x_5193_);
v___x_5195_ = lean_elab_environment_to_kernel_env(v_env_5194_);
v___x_5196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5196_, 0, v___x_5195_);
lean_ctor_set(v___x_5196_, 1, v_fst_5184_);
v___x_5197_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v___x_5196_, v___y_5188_, v___y_5189_);
return v___x_5197_;
}
}
v___jp_5198_:
{
lean_object* v_toConstantVal_5203_; lean_object* v_name_5204_; lean_object* v___x_5205_; uint8_t v___x_5206_; 
v_toConstantVal_5203_ = lean_ctor_get(v___y_5199_, 0);
v_name_5204_ = lean_ctor_get(v_toConstantVal_5203_, 0);
lean_inc(v_name_5204_);
v___x_5205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5205_, 0, v___y_5199_);
v___x_5206_ = 0;
v_fst_5184_ = v_name_5204_;
v_fst_5185_ = v___x_5205_;
v_snd_5186_ = v___x_5206_;
v_exportedInfo_x3f_5187_ = v_exportedInfo_x3f_5200_;
v___y_5188_ = v___y_5201_;
v___y_5189_ = v___y_5202_;
goto v___jp_5183_;
}
v___jp_5207_:
{
lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; 
v___x_5213_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5213_, 0, v___y_5209_);
lean_ctor_set_uint8(v___x_5213_, sizeof(void*)*1, v___y_5212_);
v___x_5214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5214_, 0, v___x_5213_);
v___x_5215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5215_, 0, v___x_5214_);
v___y_5199_ = v___y_5208_;
v_exportedInfo_x3f_5200_ = v___x_5215_;
v___y_5201_ = v___y_5210_;
v___y_5202_ = v___y_5211_;
goto v___jp_5198_;
}
v___jp_5216_:
{
uint8_t v___x_5223_; uint8_t v___x_5224_; 
v___x_5223_ = 1;
v___x_5224_ = l_Lean_instBEqDefinitionSafety_beq(v_safety_5220_, v___x_5223_);
if (v___x_5224_ == 0)
{
v___y_5208_ = v___y_5218_;
v___y_5209_ = v_toConstantVal_5219_;
v___y_5210_ = v___y_5221_;
v___y_5211_ = v___y_5222_;
v___y_5212_ = v___y_5217_;
goto v___jp_5207_;
}
else
{
v___y_5208_ = v___y_5218_;
v___y_5209_ = v_toConstantVal_5219_;
v___y_5210_ = v___y_5221_;
v___y_5211_ = v___y_5222_;
v___y_5212_ = v_hasTrace_4949_;
goto v___jp_5207_;
}
}
v___jp_5225_:
{
lean_object* v_toConstantVal_5230_; uint8_t v_safety_5231_; 
v_toConstantVal_5230_ = lean_ctor_get(v___y_5227_, 0);
lean_inc_ref(v_toConstantVal_5230_);
v_safety_5231_ = lean_ctor_get_uint8(v___y_5227_, sizeof(void*)*4);
v___y_5217_ = v___y_5226_;
v___y_5218_ = v___y_5227_;
v_toConstantVal_5219_ = v_toConstantVal_5230_;
v_safety_5220_ = v_safety_5231_;
v___y_5221_ = v___y_5228_;
v___y_5222_ = v___y_5229_;
goto v___jp_5216_;
}
v___jp_5232_:
{
lean_object* v___x_5236_; lean_object* v_env_5237_; lean_object* v___x_5238_; 
v___x_5236_ = lean_st_ref_get(v___y_5235_);
v_env_5237_ = lean_ctor_get(v___x_5236_, 0);
lean_inc_ref(v_env_5237_);
lean_dec(v___x_5236_);
v___x_5238_ = lean_st_ref_get(v___y_5235_);
if (v_forceExpose_4890_ == 0)
{
lean_object* v_env_5239_; lean_object* v___x_5240_; uint8_t v_isModule_5241_; 
v_env_5239_ = lean_ctor_get(v___x_5238_, 0);
lean_inc_ref(v_env_5239_);
lean_dec(v___x_5238_);
v___x_5240_ = l_Lean_Environment_header(v_env_5237_);
lean_dec_ref(v_env_5237_);
v_isModule_5241_ = lean_ctor_get_uint8(v___x_5240_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_5240_);
if (v_isModule_5241_ == 0)
{
lean_dec_ref(v_env_5239_);
v___y_5199_ = v_defn_5233_;
v_exportedInfo_x3f_5200_ = v___x_5145_;
v___y_5201_ = v___y_5234_;
v___y_5202_ = v___y_5235_;
goto v___jp_5198_;
}
else
{
uint8_t v_isExporting_5242_; 
v_isExporting_5242_ = lean_ctor_get_uint8(v_env_5239_, sizeof(void*)*13);
lean_dec_ref(v_env_5239_);
if (v_isExporting_5242_ == 0)
{
lean_object* v_toCold_5243_; lean_object* v_options_5244_; uint8_t v_hasTrace_5245_; 
v_toCold_5243_ = lean_ctor_get(v___y_5234_, 0);
v_options_5244_ = lean_ctor_get(v_toCold_5243_, 2);
v_hasTrace_5245_ = lean_ctor_get_uint8(v_options_5244_, sizeof(void*)*1);
if (v_hasTrace_5245_ == 0)
{
v___y_5226_ = v_isModule_5241_;
v___y_5227_ = v_defn_5233_;
v___y_5228_ = v___y_5234_;
v___y_5229_ = v___y_5235_;
goto v___jp_5225_;
}
else
{
lean_object* v_inheritedTraceOptions_5246_; lean_object* v___x_5247_; uint8_t v___x_5248_; 
v_inheritedTraceOptions_5246_ = lean_ctor_get(v_toCold_5243_, 11);
v___x_5247_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_5248_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5246_, v_options_5244_, v___x_5247_);
if (v___x_5248_ == 0)
{
v___y_5226_ = v_isModule_5241_;
v___y_5227_ = v_defn_5233_;
v___y_5228_ = v___y_5234_;
v___y_5229_ = v___y_5235_;
goto v___jp_5225_;
}
else
{
lean_object* v_toConstantVal_5249_; uint8_t v_safety_5250_; lean_object* v_name_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; lean_object* v___x_5254_; lean_object* v___x_5255_; lean_object* v___x_5256_; lean_object* v___x_5257_; 
v_toConstantVal_5249_ = lean_ctor_get(v_defn_5233_, 0);
lean_inc_ref(v_toConstantVal_5249_);
v_safety_5250_ = lean_ctor_get_uint8(v_defn_5233_, sizeof(void*)*4);
v_name_5251_ = lean_ctor_get(v_toConstantVal_5249_, 0);
v___x_5252_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1);
lean_inc(v_name_5251_);
v___x_5253_ = l_Lean_MessageData_ofName(v_name_5251_);
v___x_5254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5254_, 0, v___x_5252_);
lean_ctor_set(v___x_5254_, 1, v___x_5253_);
v___x_5255_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_5256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5256_, 0, v___x_5254_);
lean_ctor_set(v___x_5256_, 1, v___x_5255_);
v___x_5257_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_5084_, v___x_5256_, v___y_5234_, v___y_5235_);
if (lean_obj_tag(v___x_5257_) == 0)
{
lean_dec_ref_known(v___x_5257_, 1);
v___y_5217_ = v_isModule_5241_;
v___y_5218_ = v_defn_5233_;
v_toConstantVal_5219_ = v_toConstantVal_5249_;
v_safety_5220_ = v_safety_5250_;
v___y_5221_ = v___y_5234_;
v___y_5222_ = v___y_5235_;
goto v___jp_5216_;
}
else
{
lean_dec_ref(v_toConstantVal_5249_);
lean_dec_ref(v_defn_5233_);
lean_dec(v_decl_4889_);
return v___x_5257_;
}
}
}
}
else
{
v___y_5199_ = v_defn_5233_;
v_exportedInfo_x3f_5200_ = v___x_5145_;
v___y_5201_ = v___y_5234_;
v___y_5202_ = v___y_5235_;
goto v___jp_5198_;
}
}
}
else
{
lean_dec(v___x_5238_);
lean_dec_ref(v_env_5237_);
v___y_5199_ = v_defn_5233_;
v_exportedInfo_x3f_5200_ = v___x_5145_;
v___y_5201_ = v___y_5234_;
v___y_5202_ = v___y_5235_;
goto v___jp_5198_;
}
}
}
}
}
else
{
lean_object* v___f_5311_; lean_object* v___x_5312_; lean_object* v___x_5313_; uint8_t v___x_5314_; lean_object* v___y_5316_; lean_object* v___y_5317_; lean_object* v_a_5318_; lean_object* v___y_5331_; lean_object* v___y_5332_; lean_object* v___y_5333_; lean_object* v___y_5351_; lean_object* v___y_5352_; lean_object* v___y_5353_; lean_object* v___y_5354_; lean_object* v___y_5358_; lean_object* v___y_5359_; lean_object* v___y_5360_; lean_object* v___y_5361_; lean_object* v___y_5362_; lean_object* v___y_5363_; lean_object* v___y_5364_; lean_object* v___y_5380_; lean_object* v___y_5381_; lean_object* v___y_5382_; lean_object* v___y_5383_; lean_object* v___y_5397_; lean_object* v___y_5398_; lean_object* v___y_5399_; lean_object* v___y_5400_; lean_object* v___y_5404_; lean_object* v___y_5405_; lean_object* v___y_5406_; lean_object* v___y_5407_; lean_object* v___y_5408_; uint8_t v___y_5409_; lean_object* v___y_5410_; lean_object* v___y_5411_; lean_object* v___y_5412_; lean_object* v___y_5417_; lean_object* v___y_5418_; lean_object* v_a_5419_; lean_object* v___y_5429_; lean_object* v___y_5430_; lean_object* v___y_5431_; lean_object* v___y_5449_; lean_object* v___y_5450_; lean_object* v___y_5451_; lean_object* v___y_5452_; lean_object* v___y_5456_; lean_object* v___y_5457_; lean_object* v___y_5458_; lean_object* v___y_5459_; 
lean_inc(v_decl_4889_);
v___f_5311_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___boxed), 5, 1);
lean_closure_set(v___f_5311_, 0, v_decl_4889_);
v___x_5312_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0));
v___x_5313_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_5314_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4948_, v_options_4947_, v___x_5313_);
if (v___x_5314_ == 0)
{
lean_object* v___x_5620_; uint8_t v___x_5621_; lean_object* v___y_5623_; lean_object* v___y_5624_; lean_object* v___y_5625_; lean_object* v___y_5626_; lean_object* v___y_5627_; lean_object* v___y_5628_; lean_object* v___y_5629_; lean_object* v___y_5630_; lean_object* v___y_5631_; lean_object* v___y_5632_; lean_object* v___y_5633_; lean_object* v___y_5696_; lean_object* v___y_5697_; lean_object* v___y_5698_; lean_object* v___y_5699_; lean_object* v___y_5700_; uint8_t v___y_5701_; lean_object* v___y_5702_; lean_object* v___y_5703_; lean_object* v___y_5726_; uint8_t v___y_5727_; lean_object* v___y_5728_; lean_object* v_exportedInfo_x3f_5729_; lean_object* v___y_5730_; lean_object* v___y_5731_; lean_object* v___y_5741_; uint8_t v___y_5742_; lean_object* v___y_5743_; lean_object* v___y_5744_; lean_object* v___y_5745_; lean_object* v___y_5748_; uint8_t v___y_5749_; lean_object* v___y_5750_; lean_object* v___y_5751_; lean_object* v___y_5752_; 
v___x_5620_ = l_Lean_trace_profiler;
v___x_5621_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_4947_, v___x_5620_);
if (v___x_5621_ == 0)
{
lean_object* v___x_5754_; lean_object* v_env_5755_; lean_object* v_nextMacroScope_5756_; lean_object* v_ngen_5757_; lean_object* v_auxDeclNGen_5758_; lean_object* v_traceState_5759_; lean_object* v_recordedDeps_5760_; lean_object* v_messages_5761_; lean_object* v_infoState_5762_; lean_object* v_snapshotTasks_5763_; lean_object* v___x_5765_; uint8_t v_isShared_5766_; uint8_t v_isSharedCheck_5997_; 
lean_dec_ref(v___f_5311_);
v___x_5754_ = lean_st_ref_take(v_a_4892_);
v_env_5755_ = lean_ctor_get(v___x_5754_, 0);
v_nextMacroScope_5756_ = lean_ctor_get(v___x_5754_, 1);
v_ngen_5757_ = lean_ctor_get(v___x_5754_, 2);
v_auxDeclNGen_5758_ = lean_ctor_get(v___x_5754_, 3);
v_traceState_5759_ = lean_ctor_get(v___x_5754_, 4);
v_recordedDeps_5760_ = lean_ctor_get(v___x_5754_, 6);
v_messages_5761_ = lean_ctor_get(v___x_5754_, 7);
v_infoState_5762_ = lean_ctor_get(v___x_5754_, 8);
v_snapshotTasks_5763_ = lean_ctor_get(v___x_5754_, 9);
v_isSharedCheck_5997_ = !lean_is_exclusive(v___x_5754_);
if (v_isSharedCheck_5997_ == 0)
{
lean_object* v_unused_5998_; 
v_unused_5998_ = lean_ctor_get(v___x_5754_, 5);
lean_dec(v_unused_5998_);
v___x_5765_ = v___x_5754_;
v_isShared_5766_ = v_isSharedCheck_5997_;
goto v_resetjp_5764_;
}
else
{
lean_inc(v_snapshotTasks_5763_);
lean_inc(v_infoState_5762_);
lean_inc(v_messages_5761_);
lean_inc(v_recordedDeps_5760_);
lean_inc(v_traceState_5759_);
lean_inc(v_auxDeclNGen_5758_);
lean_inc(v_ngen_5757_);
lean_inc(v_nextMacroScope_5756_);
lean_inc(v_env_5755_);
lean_dec(v___x_5754_);
v___x_5765_ = lean_box(0);
v_isShared_5766_ = v_isSharedCheck_5997_;
goto v_resetjp_5764_;
}
v_resetjp_5764_:
{
lean_object* v___x_5767_; lean_object* v___x_5768_; lean_object* v___x_5769_; lean_object* v___y_5771_; lean_object* v___y_5772_; lean_object* v___y_5773_; uint8_t v___y_5774_; lean_object* v___y_5775_; uint8_t v___y_5776_; lean_object* v___y_5777_; lean_object* v___x_5801_; 
lean_inc(v_decl_4889_);
v___x_5767_ = l_Lean_Declaration_getNames(v_decl_4889_);
v___x_5768_ = l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(v_env_5755_, v___x_5767_);
v___x_5769_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_5766_ == 0)
{
lean_ctor_set(v___x_5765_, 5, v___x_5769_);
lean_ctor_set(v___x_5765_, 0, v___x_5768_);
v___x_5801_ = v___x_5765_;
goto v_reusejp_5800_;
}
else
{
lean_object* v_reuseFailAlloc_5996_; 
v_reuseFailAlloc_5996_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5996_, 0, v___x_5768_);
lean_ctor_set(v_reuseFailAlloc_5996_, 1, v_nextMacroScope_5756_);
lean_ctor_set(v_reuseFailAlloc_5996_, 2, v_ngen_5757_);
lean_ctor_set(v_reuseFailAlloc_5996_, 3, v_auxDeclNGen_5758_);
lean_ctor_set(v_reuseFailAlloc_5996_, 4, v_traceState_5759_);
lean_ctor_set(v_reuseFailAlloc_5996_, 5, v___x_5769_);
lean_ctor_set(v_reuseFailAlloc_5996_, 6, v_recordedDeps_5760_);
lean_ctor_set(v_reuseFailAlloc_5996_, 7, v_messages_5761_);
lean_ctor_set(v_reuseFailAlloc_5996_, 8, v_infoState_5762_);
lean_ctor_set(v_reuseFailAlloc_5996_, 9, v_snapshotTasks_5763_);
v___x_5801_ = v_reuseFailAlloc_5996_;
goto v_reusejp_5800_;
}
v___jp_5770_:
{
lean_object* v___x_5778_; lean_object* v_env_5779_; lean_object* v_nextMacroScope_5780_; lean_object* v_ngen_5781_; lean_object* v_auxDeclNGen_5782_; lean_object* v_traceState_5783_; lean_object* v_recordedDeps_5784_; lean_object* v_messages_5785_; lean_object* v_infoState_5786_; lean_object* v_snapshotTasks_5787_; lean_object* v___x_5789_; uint8_t v_isShared_5790_; uint8_t v_isSharedCheck_5798_; 
v___x_5778_ = lean_st_ref_take(v___y_5777_);
v_env_5779_ = lean_ctor_get(v___x_5778_, 0);
v_nextMacroScope_5780_ = lean_ctor_get(v___x_5778_, 1);
v_ngen_5781_ = lean_ctor_get(v___x_5778_, 2);
v_auxDeclNGen_5782_ = lean_ctor_get(v___x_5778_, 3);
v_traceState_5783_ = lean_ctor_get(v___x_5778_, 4);
v_recordedDeps_5784_ = lean_ctor_get(v___x_5778_, 6);
v_messages_5785_ = lean_ctor_get(v___x_5778_, 7);
v_infoState_5786_ = lean_ctor_get(v___x_5778_, 8);
v_snapshotTasks_5787_ = lean_ctor_get(v___x_5778_, 9);
v_isSharedCheck_5798_ = !lean_is_exclusive(v___x_5778_);
if (v_isSharedCheck_5798_ == 0)
{
lean_object* v_unused_5799_; 
v_unused_5799_ = lean_ctor_get(v___x_5778_, 5);
lean_dec(v_unused_5799_);
v___x_5789_ = v___x_5778_;
v_isShared_5790_ = v_isSharedCheck_5798_;
goto v_resetjp_5788_;
}
else
{
lean_inc(v_snapshotTasks_5787_);
lean_inc(v_infoState_5786_);
lean_inc(v_messages_5785_);
lean_inc(v_recordedDeps_5784_);
lean_inc(v_traceState_5783_);
lean_inc(v_auxDeclNGen_5782_);
lean_inc(v_ngen_5781_);
lean_inc(v_nextMacroScope_5780_);
lean_inc(v_env_5779_);
lean_dec(v___x_5778_);
v___x_5789_ = lean_box(0);
v_isShared_5790_ = v_isSharedCheck_5798_;
goto v_resetjp_5788_;
}
v_resetjp_5788_:
{
lean_object* v___x_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5795_; 
v___x_5791_ = l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
v___x_5792_ = lean_box(v___y_5774_);
lean_inc(v___y_5775_);
v___x_5793_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_5791_, v_env_5779_, v___y_5775_, v___x_5792_, v___y_5776_);
if (v_isShared_5790_ == 0)
{
lean_ctor_set(v___x_5789_, 5, v___x_5769_);
lean_ctor_set(v___x_5789_, 0, v___x_5793_);
v___x_5795_ = v___x_5789_;
goto v_reusejp_5794_;
}
else
{
lean_object* v_reuseFailAlloc_5797_; 
v_reuseFailAlloc_5797_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5797_, 0, v___x_5793_);
lean_ctor_set(v_reuseFailAlloc_5797_, 1, v_nextMacroScope_5780_);
lean_ctor_set(v_reuseFailAlloc_5797_, 2, v_ngen_5781_);
lean_ctor_set(v_reuseFailAlloc_5797_, 3, v_auxDeclNGen_5782_);
lean_ctor_set(v_reuseFailAlloc_5797_, 4, v_traceState_5783_);
lean_ctor_set(v_reuseFailAlloc_5797_, 5, v___x_5769_);
lean_ctor_set(v_reuseFailAlloc_5797_, 6, v_recordedDeps_5784_);
lean_ctor_set(v_reuseFailAlloc_5797_, 7, v_messages_5785_);
lean_ctor_set(v_reuseFailAlloc_5797_, 8, v_infoState_5786_);
lean_ctor_set(v_reuseFailAlloc_5797_, 9, v_snapshotTasks_5787_);
v___x_5795_ = v_reuseFailAlloc_5797_;
goto v_reusejp_5794_;
}
v_reusejp_5794_:
{
lean_object* v___x_5796_; 
v___x_5796_ = lean_st_ref_put(v___y_5777_, v___x_5795_);
v___y_5726_ = v___y_5771_;
v___y_5727_ = v___y_5774_;
v___y_5728_ = v___y_5775_;
v_exportedInfo_x3f_5729_ = v___y_5773_;
v___y_5730_ = v___y_5772_;
v___y_5731_ = v___y_5777_;
goto v___jp_5725_;
}
}
}
v_reusejp_5800_:
{
lean_object* v___x_5802_; lean_object* v___x_5803_; lean_object* v___y_5805_; lean_object* v___y_5806_; uint8_t v___y_5807_; lean_object* v___y_5808_; lean_object* v___y_5809_; lean_object* v___y_5810_; lean_object* v_fst_5839_; lean_object* v_fst_5840_; uint8_t v_snd_5841_; lean_object* v_exportedInfo_x3f_5842_; lean_object* v___y_5843_; lean_object* v___y_5844_; lean_object* v___y_5854_; lean_object* v_exportedInfo_x3f_5855_; lean_object* v___y_5856_; lean_object* v___y_5857_; lean_object* v___y_5863_; lean_object* v___y_5864_; lean_object* v___y_5865_; lean_object* v___y_5866_; uint8_t v___y_5867_; uint8_t v___y_5872_; lean_object* v___y_5873_; lean_object* v_toConstantVal_5874_; uint8_t v_safety_5875_; lean_object* v___y_5876_; lean_object* v___y_5877_; uint8_t v___y_5881_; lean_object* v___y_5882_; lean_object* v___y_5883_; lean_object* v___y_5884_; lean_object* v___y_5888_; lean_object* v___y_5889_; lean_object* v___y_5890_; uint8_t v___y_5891_; lean_object* v___y_5907_; lean_object* v___y_5908_; lean_object* v___y_5909_; lean_object* v___y_5910_; lean_object* v___y_5911_; lean_object* v_defn_5916_; lean_object* v___y_5917_; lean_object* v___y_5918_; 
v___x_5802_ = lean_st_ref_put(v_a_4892_, v___x_5801_);
v___x_5803_ = lean_box(0);
switch(lean_obj_tag(v_decl_4889_))
{
case 2:
{
lean_object* v_val_5924_; lean_object* v_exportedInfo_x3f_5926_; lean_object* v___y_5927_; lean_object* v___y_5928_; lean_object* v___y_5934_; lean_object* v___y_5935_; lean_object* v___x_5940_; lean_object* v_env_5941_; 
v_val_5924_ = lean_ctor_get(v_decl_4889_, 0);
v___x_5940_ = lean_st_ref_get(v_a_4892_);
v_env_5941_ = lean_ctor_get(v___x_5940_, 0);
lean_inc_ref(v_env_5941_);
lean_dec(v___x_5940_);
if (v_forceExpose_4890_ == 0)
{
goto v___jp_5942_;
}
else
{
if (v___x_5621_ == 0)
{
lean_dec_ref(v_env_5941_);
v_exportedInfo_x3f_5926_ = v___x_5803_;
v___y_5927_ = v_a_4891_;
v___y_5928_ = v_a_4892_;
goto v___jp_5925_;
}
else
{
goto v___jp_5942_;
}
}
v___jp_5925_:
{
lean_object* v_toConstantVal_5929_; lean_object* v_name_5930_; lean_object* v___x_5931_; uint8_t v___x_5932_; 
v_toConstantVal_5929_ = lean_ctor_get(v_val_5924_, 0);
v_name_5930_ = lean_ctor_get(v_toConstantVal_5929_, 0);
lean_inc_ref(v_val_5924_);
v___x_5931_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_5931_, 0, v_val_5924_);
v___x_5932_ = 1;
lean_inc(v_name_5930_);
v_fst_5839_ = v_name_5930_;
v_fst_5840_ = v___x_5931_;
v_snd_5841_ = v___x_5932_;
v_exportedInfo_x3f_5842_ = v_exportedInfo_x3f_5926_;
v___y_5843_ = v___y_5927_;
v___y_5844_ = v___y_5928_;
goto v___jp_5838_;
}
v___jp_5933_:
{
lean_object* v_toConstantVal_5936_; lean_object* v___x_5937_; lean_object* v___x_5938_; lean_object* v___x_5939_; 
v_toConstantVal_5936_ = lean_ctor_get(v_val_5924_, 0);
lean_inc_ref(v_toConstantVal_5936_);
v___x_5937_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5937_, 0, v_toConstantVal_5936_);
lean_ctor_set_uint8(v___x_5937_, sizeof(void*)*1, v___x_5621_);
v___x_5938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5938_, 0, v___x_5937_);
v___x_5939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5939_, 0, v___x_5938_);
v_exportedInfo_x3f_5926_ = v___x_5939_;
v___y_5927_ = v___y_5934_;
v___y_5928_ = v___y_5935_;
goto v___jp_5925_;
}
v___jp_5942_:
{
lean_object* v___x_5943_; uint8_t v_isModule_5944_; 
v___x_5943_ = l_Lean_Environment_header(v_env_5941_);
lean_dec_ref(v_env_5941_);
v_isModule_5944_ = lean_ctor_get_uint8(v___x_5943_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_5943_);
if (v_isModule_5944_ == 0)
{
v_exportedInfo_x3f_5926_ = v___x_5803_;
v___y_5927_ = v_a_4891_;
v___y_5928_ = v_a_4892_;
goto v___jp_5925_;
}
else
{
if (v___x_5314_ == 0)
{
v___y_5934_ = v_a_4891_;
v___y_5935_ = v_a_4892_;
goto v___jp_5933_;
}
else
{
lean_object* v_toConstantVal_5945_; lean_object* v_name_5946_; lean_object* v___x_5947_; lean_object* v___x_5948_; lean_object* v___x_5949_; lean_object* v___x_5950_; lean_object* v___x_5951_; lean_object* v___x_5952_; 
v_toConstantVal_5945_ = lean_ctor_get(v_val_5924_, 0);
v_name_5946_ = lean_ctor_get(v_toConstantVal_5945_, 0);
v___x_5947_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2);
lean_inc(v_name_5946_);
v___x_5948_ = l_Lean_MessageData_ofName(v_name_5946_);
v___x_5949_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5949_, 0, v___x_5947_);
lean_ctor_set(v___x_5949_, 1, v___x_5948_);
v___x_5950_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_5951_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5951_, 0, v___x_5949_);
lean_ctor_set(v___x_5951_, 1, v___x_5950_);
v___x_5952_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_5084_, v___x_5951_, v_a_4891_, v_a_4892_);
if (lean_obj_tag(v___x_5952_) == 0)
{
lean_dec_ref_known(v___x_5952_, 1);
v___y_5934_ = v_a_4891_;
v___y_5935_ = v_a_4892_;
goto v___jp_5933_;
}
else
{
lean_dec_ref_known(v_decl_4889_, 1);
return v___x_5952_;
}
}
}
}
}
case 1:
{
lean_object* v_val_5953_; 
v_val_5953_ = lean_ctor_get(v_decl_4889_, 0);
lean_inc_ref(v_val_5953_);
v_defn_5916_ = v_val_5953_;
v___y_5917_ = v_a_4891_;
v___y_5918_ = v_a_4892_;
goto v___jp_5915_;
}
case 5:
{
lean_object* v_defns_5954_; 
v_defns_5954_ = lean_ctor_get(v_decl_4889_, 0);
if (lean_obj_tag(v_defns_5954_) == 1)
{
lean_object* v_tail_5955_; 
v_tail_5955_ = lean_ctor_get(v_defns_5954_, 1);
if (lean_obj_tag(v_tail_5955_) == 0)
{
lean_object* v_head_5956_; 
v_head_5956_ = lean_ctor_get(v_defns_5954_, 0);
lean_inc(v_head_5956_);
v_defn_5916_ = v_head_5956_;
v___y_5917_ = v_a_4891_;
v___y_5918_ = v_a_4892_;
goto v___jp_5915_;
}
else
{
v___y_5086_ = v_a_4891_;
v_options_5087_ = v_options_4947_;
v_inheritedTraceOptions_5088_ = v_inheritedTraceOptions_4948_;
v___y_5089_ = v_a_4892_;
goto v___jp_5085_;
}
}
else
{
v___y_5086_ = v_a_4891_;
v_options_5087_ = v_options_4947_;
v_inheritedTraceOptions_5088_ = v_inheritedTraceOptions_4948_;
v___y_5089_ = v_a_4892_;
goto v___jp_5085_;
}
}
case 3:
{
lean_object* v_val_5957_; lean_object* v_exportedInfo_x3f_5959_; lean_object* v___y_5960_; lean_object* v___y_5961_; lean_object* v___y_5967_; lean_object* v___y_5968_; lean_object* v___x_5974_; lean_object* v_env_5975_; lean_object* v___x_5976_; lean_object* v_env_5986_; 
v_val_5957_ = lean_ctor_get(v_decl_4889_, 0);
v___x_5974_ = lean_st_ref_get(v_a_4892_);
v_env_5975_ = lean_ctor_get(v___x_5974_, 0);
lean_inc_ref(v_env_5975_);
lean_dec(v___x_5974_);
v___x_5976_ = lean_st_ref_get(v_a_4892_);
v_env_5986_ = lean_ctor_get(v___x_5976_, 0);
lean_inc_ref(v_env_5986_);
lean_dec(v___x_5976_);
if (v_forceExpose_4890_ == 0)
{
goto v___jp_5987_;
}
else
{
if (v___x_5621_ == 0)
{
lean_dec_ref(v_env_5986_);
lean_dec_ref(v_env_5975_);
v_exportedInfo_x3f_5959_ = v___x_5803_;
v___y_5960_ = v_a_4891_;
v___y_5961_ = v_a_4892_;
goto v___jp_5958_;
}
else
{
goto v___jp_5987_;
}
}
v___jp_5958_:
{
lean_object* v_toConstantVal_5962_; lean_object* v_name_5963_; lean_object* v___x_5964_; uint8_t v___x_5965_; 
v_toConstantVal_5962_ = lean_ctor_get(v_val_5957_, 0);
v_name_5963_ = lean_ctor_get(v_toConstantVal_5962_, 0);
lean_inc_ref(v_val_5957_);
v___x_5964_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5964_, 0, v_val_5957_);
v___x_5965_ = 3;
lean_inc(v_name_5963_);
v_fst_5839_ = v_name_5963_;
v_fst_5840_ = v___x_5964_;
v_snd_5841_ = v___x_5965_;
v_exportedInfo_x3f_5842_ = v_exportedInfo_x3f_5959_;
v___y_5843_ = v___y_5960_;
v___y_5844_ = v___y_5961_;
goto v___jp_5838_;
}
v___jp_5966_:
{
lean_object* v_toConstantVal_5969_; uint8_t v_isUnsafe_5970_; lean_object* v___x_5971_; lean_object* v___x_5972_; lean_object* v___x_5973_; 
v_toConstantVal_5969_ = lean_ctor_get(v_val_5957_, 0);
v_isUnsafe_5970_ = lean_ctor_get_uint8(v_val_5957_, sizeof(void*)*3);
lean_inc_ref(v_toConstantVal_5969_);
v___x_5971_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5971_, 0, v_toConstantVal_5969_);
lean_ctor_set_uint8(v___x_5971_, sizeof(void*)*1, v_isUnsafe_5970_);
v___x_5972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5972_, 0, v___x_5971_);
v___x_5973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5973_, 0, v___x_5972_);
v_exportedInfo_x3f_5959_ = v___x_5973_;
v___y_5960_ = v___y_5967_;
v___y_5961_ = v___y_5968_;
goto v___jp_5958_;
}
v___jp_5977_:
{
if (v___x_5314_ == 0)
{
v___y_5967_ = v_a_4891_;
v___y_5968_ = v_a_4892_;
goto v___jp_5966_;
}
else
{
lean_object* v_toConstantVal_5978_; lean_object* v_name_5979_; lean_object* v___x_5980_; lean_object* v___x_5981_; lean_object* v___x_5982_; lean_object* v___x_5983_; lean_object* v___x_5984_; lean_object* v___x_5985_; 
v_toConstantVal_5978_ = lean_ctor_get(v_val_5957_, 0);
v_name_5979_ = lean_ctor_get(v_toConstantVal_5978_, 0);
v___x_5980_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4);
lean_inc(v_name_5979_);
v___x_5981_ = l_Lean_MessageData_ofName(v_name_5979_);
v___x_5982_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5982_, 0, v___x_5980_);
lean_ctor_set(v___x_5982_, 1, v___x_5981_);
v___x_5983_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_5984_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5984_, 0, v___x_5982_);
lean_ctor_set(v___x_5984_, 1, v___x_5983_);
v___x_5985_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_5084_, v___x_5984_, v_a_4891_, v_a_4892_);
if (lean_obj_tag(v___x_5985_) == 0)
{
lean_dec_ref_known(v___x_5985_, 1);
v___y_5967_ = v_a_4891_;
v___y_5968_ = v_a_4892_;
goto v___jp_5966_;
}
else
{
lean_dec_ref_known(v_decl_4889_, 1);
return v___x_5985_;
}
}
}
v___jp_5987_:
{
lean_object* v___x_5988_; uint8_t v_isModule_5989_; 
v___x_5988_ = l_Lean_Environment_header(v_env_5975_);
lean_dec_ref(v_env_5975_);
v_isModule_5989_ = lean_ctor_get_uint8(v___x_5988_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_5988_);
if (v_isModule_5989_ == 0)
{
lean_dec_ref(v_env_5986_);
v_exportedInfo_x3f_5959_ = v___x_5803_;
v___y_5960_ = v_a_4891_;
v___y_5961_ = v_a_4892_;
goto v___jp_5958_;
}
else
{
uint8_t v_isExporting_5990_; 
v_isExporting_5990_ = lean_ctor_get_uint8(v_env_5986_, sizeof(void*)*13);
lean_dec_ref(v_env_5986_);
if (v_isExporting_5990_ == 0)
{
goto v___jp_5977_;
}
else
{
if (v___x_5621_ == 0)
{
v_exportedInfo_x3f_5959_ = v___x_5803_;
v___y_5960_ = v_a_4891_;
v___y_5961_ = v_a_4892_;
goto v___jp_5958_;
}
else
{
goto v___jp_5977_;
}
}
}
}
}
case 0:
{
lean_object* v_val_5991_; lean_object* v_toConstantVal_5992_; lean_object* v_name_5993_; lean_object* v___x_5994_; uint8_t v___x_5995_; 
v_val_5991_ = lean_ctor_get(v_decl_4889_, 0);
v_toConstantVal_5992_ = lean_ctor_get(v_val_5991_, 0);
v_name_5993_ = lean_ctor_get(v_toConstantVal_5992_, 0);
lean_inc_ref(v_val_5991_);
v___x_5994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5994_, 0, v_val_5991_);
v___x_5995_ = 2;
lean_inc(v_name_5993_);
v_fst_5839_ = v_name_5993_;
v_fst_5840_ = v___x_5994_;
v_snd_5841_ = v___x_5995_;
v_exportedInfo_x3f_5842_ = v___x_5803_;
v___y_5843_ = v_a_4891_;
v___y_5844_ = v_a_4892_;
goto v___jp_5838_;
}
default: 
{
v___y_5086_ = v_a_4891_;
v_options_5087_ = v_options_4947_;
v_inheritedTraceOptions_5088_ = v_inheritedTraceOptions_4948_;
v___y_5089_ = v_a_4892_;
goto v___jp_5085_;
}
}
v___jp_5804_:
{
lean_object* v___x_5811_; uint8_t v___x_5812_; 
lean_inc(v_decl_4889_);
v___x_5811_ = l_Lean_Declaration_getTopLevelNames(v_decl_4889_);
v___x_5812_ = l_List_all___at___00Lean_checkSmartCasts_spec__5(v___x_5811_);
lean_dec(v___x_5811_);
if (v___x_5812_ == 0)
{
if (lean_obj_tag(v___y_5806_) == 0)
{
if (v___x_5812_ == 0)
{
lean_object* v_toCold_5813_; lean_object* v_options_5814_; uint8_t v_hasTrace_5815_; 
v_toCold_5813_ = lean_ctor_get(v___y_5809_, 0);
v_options_5814_ = lean_ctor_get(v_toCold_5813_, 2);
v_hasTrace_5815_ = lean_ctor_get_uint8(v_options_5814_, sizeof(void*)*1);
if (v_hasTrace_5815_ == 0)
{
v___y_5741_ = v___y_5805_;
v___y_5742_ = v___y_5807_;
v___y_5743_ = v___y_5808_;
v___y_5744_ = v___y_5809_;
v___y_5745_ = v___y_5810_;
goto v___jp_5740_;
}
else
{
lean_object* v_inheritedTraceOptions_5816_; uint8_t v___x_5817_; 
v_inheritedTraceOptions_5816_ = lean_ctor_get(v_toCold_5813_, 11);
v___x_5817_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5816_, v_options_5814_, v___x_5313_);
if (v___x_5817_ == 0)
{
v___y_5741_ = v___y_5805_;
v___y_5742_ = v___y_5807_;
v___y_5743_ = v___y_5808_;
v___y_5744_ = v___y_5809_;
v___y_5745_ = v___y_5810_;
goto v___jp_5740_;
}
else
{
lean_object* v___x_5818_; lean_object* v___x_5819_; 
v___x_5818_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3);
v___x_5819_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_5084_, v___x_5818_, v___y_5809_, v___y_5810_);
if (lean_obj_tag(v___x_5819_) == 0)
{
lean_dec_ref_known(v___x_5819_, 1);
v___y_5741_ = v___y_5805_;
v___y_5742_ = v___y_5807_;
v___y_5743_ = v___y_5808_;
v___y_5744_ = v___y_5809_;
v___y_5745_ = v___y_5810_;
goto v___jp_5740_;
}
else
{
lean_dec(v___y_5808_);
lean_dec_ref(v___y_5805_);
lean_dec(v_decl_4889_);
return v___x_5819_;
}
}
}
}
else
{
v___y_5771_ = v___y_5805_;
v___y_5772_ = v___y_5809_;
v___y_5773_ = v___y_5806_;
v___y_5774_ = v___y_5807_;
v___y_5775_ = v___y_5808_;
v___y_5776_ = v___x_5812_;
v___y_5777_ = v___y_5810_;
goto v___jp_5770_;
}
}
else
{
v___y_5771_ = v___y_5805_;
v___y_5772_ = v___y_5809_;
v___y_5773_ = v___y_5806_;
v___y_5774_ = v___y_5807_;
v___y_5775_ = v___y_5808_;
v___y_5776_ = v___x_5812_;
v___y_5777_ = v___y_5810_;
goto v___jp_5770_;
}
}
else
{
lean_object* v___x_5820_; lean_object* v___x_5821_; lean_object* v_a_5822_; uint8_t v___x_5823_; 
lean_dec(v___y_5806_);
v___x_5820_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_5821_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2___redArg(v___x_5820_, v___y_5809_);
v_a_5822_ = lean_ctor_get(v___x_5821_, 0);
lean_inc(v_a_5822_);
lean_dec_ref(v___x_5821_);
v___x_5823_ = lean_unbox(v_a_5822_);
lean_dec(v_a_5822_);
if (v___x_5823_ == 0)
{
lean_object* v_toCold_5824_; lean_object* v_options_5825_; uint8_t v_hasTrace_5826_; 
v_toCold_5824_ = lean_ctor_get(v___y_5809_, 0);
v_options_5825_ = lean_ctor_get(v_toCold_5824_, 2);
v_hasTrace_5826_ = lean_ctor_get_uint8(v_options_5825_, sizeof(void*)*1);
if (v_hasTrace_5826_ == 0)
{
v___y_5726_ = v___y_5805_;
v___y_5727_ = v___y_5807_;
v___y_5728_ = v___y_5808_;
v_exportedInfo_x3f_5729_ = v___x_5803_;
v___y_5730_ = v___y_5809_;
v___y_5731_ = v___y_5810_;
goto v___jp_5725_;
}
else
{
lean_object* v_inheritedTraceOptions_5827_; uint8_t v___x_5828_; 
v_inheritedTraceOptions_5827_ = lean_ctor_get(v_toCold_5824_, 11);
v___x_5828_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5827_, v_options_5825_, v___x_5313_);
if (v___x_5828_ == 0)
{
v___y_5726_ = v___y_5805_;
v___y_5727_ = v___y_5807_;
v___y_5728_ = v___y_5808_;
v_exportedInfo_x3f_5729_ = v___x_5803_;
v___y_5730_ = v___y_5809_;
v___y_5731_ = v___y_5810_;
goto v___jp_5725_;
}
else
{
lean_object* v___x_5829_; lean_object* v___x_5830_; 
v___x_5829_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5);
v___x_5830_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_5084_, v___x_5829_, v___y_5809_, v___y_5810_);
if (lean_obj_tag(v___x_5830_) == 0)
{
lean_dec_ref_known(v___x_5830_, 1);
v___y_5726_ = v___y_5805_;
v___y_5727_ = v___y_5807_;
v___y_5728_ = v___y_5808_;
v_exportedInfo_x3f_5729_ = v___x_5803_;
v___y_5730_ = v___y_5809_;
v___y_5731_ = v___y_5810_;
goto v___jp_5725_;
}
else
{
lean_dec(v___y_5808_);
lean_dec_ref(v___y_5805_);
lean_dec(v_decl_4889_);
return v___x_5830_;
}
}
}
}
else
{
lean_object* v_toCold_5831_; lean_object* v_options_5832_; uint8_t v_hasTrace_5833_; 
v_toCold_5831_ = lean_ctor_get(v___y_5809_, 0);
v_options_5832_ = lean_ctor_get(v_toCold_5831_, 2);
v_hasTrace_5833_ = lean_ctor_get_uint8(v_options_5832_, sizeof(void*)*1);
if (v_hasTrace_5833_ == 0)
{
v___y_5748_ = v___y_5805_;
v___y_5749_ = v___y_5807_;
v___y_5750_ = v___y_5808_;
v___y_5751_ = v___y_5809_;
v___y_5752_ = v___y_5810_;
goto v___jp_5747_;
}
else
{
lean_object* v_inheritedTraceOptions_5834_; uint8_t v___x_5835_; 
v_inheritedTraceOptions_5834_ = lean_ctor_get(v_toCold_5831_, 11);
v___x_5835_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5834_, v_options_5832_, v___x_5313_);
if (v___x_5835_ == 0)
{
v___y_5748_ = v___y_5805_;
v___y_5749_ = v___y_5807_;
v___y_5750_ = v___y_5808_;
v___y_5751_ = v___y_5809_;
v___y_5752_ = v___y_5810_;
goto v___jp_5747_;
}
else
{
lean_object* v___x_5836_; lean_object* v___x_5837_; 
v___x_5836_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7);
v___x_5837_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_5084_, v___x_5836_, v___y_5809_, v___y_5810_);
if (lean_obj_tag(v___x_5837_) == 0)
{
lean_dec_ref_known(v___x_5837_, 1);
v___y_5748_ = v___y_5805_;
v___y_5749_ = v___y_5807_;
v___y_5750_ = v___y_5808_;
v___y_5751_ = v___y_5809_;
v___y_5752_ = v___y_5810_;
goto v___jp_5747_;
}
else
{
lean_dec(v___y_5808_);
lean_dec_ref(v___y_5805_);
lean_dec(v_decl_4889_);
return v___x_5837_;
}
}
}
}
}
}
v___jp_5838_:
{
lean_object* v___x_5845_; lean_object* v_env_5846_; uint8_t v___x_5847_; 
v___x_5845_ = lean_st_ref_get(v___y_5844_);
v_env_5846_ = lean_ctor_get(v___x_5845_, 0);
lean_inc_ref(v_env_5846_);
lean_dec(v___x_5845_);
v___x_5847_ = l_Lean_Environment_containsOnBranch(v_env_5846_, v_fst_5839_);
lean_dec_ref(v_env_5846_);
if (v___x_5847_ == 0)
{
v___y_5805_ = v_fst_5840_;
v___y_5806_ = v_exportedInfo_x3f_5842_;
v___y_5807_ = v_snd_5841_;
v___y_5808_ = v_fst_5839_;
v___y_5809_ = v___y_5843_;
v___y_5810_ = v___y_5844_;
goto v___jp_5804_;
}
else
{
lean_object* v___x_5848_; lean_object* v_env_5849_; lean_object* v___x_5850_; lean_object* v___x_5851_; lean_object* v___x_5852_; 
lean_dec(v_exportedInfo_x3f_5842_);
lean_dec_ref(v_fst_5840_);
lean_dec(v_decl_4889_);
v___x_5848_ = lean_st_ref_get(v___y_5844_);
v_env_5849_ = lean_ctor_get(v___x_5848_, 0);
lean_inc_ref(v_env_5849_);
lean_dec(v___x_5848_);
v___x_5850_ = lean_elab_environment_to_kernel_env(v_env_5849_);
v___x_5851_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5851_, 0, v___x_5850_);
lean_ctor_set(v___x_5851_, 1, v_fst_5839_);
v___x_5852_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v___x_5851_, v___y_5843_, v___y_5844_);
return v___x_5852_;
}
}
v___jp_5853_:
{
lean_object* v_toConstantVal_5858_; lean_object* v_name_5859_; lean_object* v___x_5860_; uint8_t v___x_5861_; 
v_toConstantVal_5858_ = lean_ctor_get(v___y_5854_, 0);
v_name_5859_ = lean_ctor_get(v_toConstantVal_5858_, 0);
lean_inc(v_name_5859_);
v___x_5860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5860_, 0, v___y_5854_);
v___x_5861_ = 0;
v_fst_5839_ = v_name_5859_;
v_fst_5840_ = v___x_5860_;
v_snd_5841_ = v___x_5861_;
v_exportedInfo_x3f_5842_ = v_exportedInfo_x3f_5855_;
v___y_5843_ = v___y_5856_;
v___y_5844_ = v___y_5857_;
goto v___jp_5838_;
}
v___jp_5862_:
{
lean_object* v___x_5868_; lean_object* v___x_5869_; lean_object* v___x_5870_; 
v___x_5868_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5868_, 0, v___y_5863_);
lean_ctor_set_uint8(v___x_5868_, sizeof(void*)*1, v___y_5867_);
v___x_5869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5869_, 0, v___x_5868_);
v___x_5870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5870_, 0, v___x_5869_);
v___y_5854_ = v___y_5866_;
v_exportedInfo_x3f_5855_ = v___x_5870_;
v___y_5856_ = v___y_5865_;
v___y_5857_ = v___y_5864_;
goto v___jp_5853_;
}
v___jp_5871_:
{
uint8_t v___x_5878_; uint8_t v___x_5879_; 
v___x_5878_ = 1;
v___x_5879_ = l_Lean_instBEqDefinitionSafety_beq(v_safety_5875_, v___x_5878_);
if (v___x_5879_ == 0)
{
v___y_5863_ = v_toConstantVal_5874_;
v___y_5864_ = v___y_5877_;
v___y_5865_ = v___y_5876_;
v___y_5866_ = v___y_5873_;
v___y_5867_ = v___y_5872_;
goto v___jp_5862_;
}
else
{
v___y_5863_ = v_toConstantVal_5874_;
v___y_5864_ = v___y_5877_;
v___y_5865_ = v___y_5876_;
v___y_5866_ = v___y_5873_;
v___y_5867_ = v___x_5621_;
goto v___jp_5862_;
}
}
v___jp_5880_:
{
lean_object* v_toConstantVal_5885_; uint8_t v_safety_5886_; 
v_toConstantVal_5885_ = lean_ctor_get(v___y_5882_, 0);
lean_inc_ref(v_toConstantVal_5885_);
v_safety_5886_ = lean_ctor_get_uint8(v___y_5882_, sizeof(void*)*4);
v___y_5872_ = v___y_5881_;
v___y_5873_ = v___y_5882_;
v_toConstantVal_5874_ = v_toConstantVal_5885_;
v_safety_5875_ = v_safety_5886_;
v___y_5876_ = v___y_5883_;
v___y_5877_ = v___y_5884_;
goto v___jp_5871_;
}
v___jp_5887_:
{
lean_object* v_toCold_5892_; lean_object* v_options_5893_; uint8_t v_hasTrace_5894_; 
v_toCold_5892_ = lean_ctor_get(v___y_5889_, 0);
v_options_5893_ = lean_ctor_get(v_toCold_5892_, 2);
v_hasTrace_5894_ = lean_ctor_get_uint8(v_options_5893_, sizeof(void*)*1);
if (v_hasTrace_5894_ == 0)
{
v___y_5881_ = v___y_5891_;
v___y_5882_ = v___y_5890_;
v___y_5883_ = v___y_5889_;
v___y_5884_ = v___y_5888_;
goto v___jp_5880_;
}
else
{
lean_object* v_inheritedTraceOptions_5895_; uint8_t v___x_5896_; 
v_inheritedTraceOptions_5895_ = lean_ctor_get(v_toCold_5892_, 11);
v___x_5896_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5895_, v_options_5893_, v___x_5313_);
if (v___x_5896_ == 0)
{
v___y_5881_ = v___y_5891_;
v___y_5882_ = v___y_5890_;
v___y_5883_ = v___y_5889_;
v___y_5884_ = v___y_5888_;
goto v___jp_5880_;
}
else
{
lean_object* v_toConstantVal_5897_; uint8_t v_safety_5898_; lean_object* v_name_5899_; lean_object* v___x_5900_; lean_object* v___x_5901_; lean_object* v___x_5902_; lean_object* v___x_5903_; lean_object* v___x_5904_; lean_object* v___x_5905_; 
v_toConstantVal_5897_ = lean_ctor_get(v___y_5890_, 0);
lean_inc_ref(v_toConstantVal_5897_);
v_safety_5898_ = lean_ctor_get_uint8(v___y_5890_, sizeof(void*)*4);
v_name_5899_ = lean_ctor_get(v_toConstantVal_5897_, 0);
v___x_5900_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1);
lean_inc(v_name_5899_);
v___x_5901_ = l_Lean_MessageData_ofName(v_name_5899_);
v___x_5902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5902_, 0, v___x_5900_);
lean_ctor_set(v___x_5902_, 1, v___x_5901_);
v___x_5903_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_5904_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5904_, 0, v___x_5902_);
lean_ctor_set(v___x_5904_, 1, v___x_5903_);
v___x_5905_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_5084_, v___x_5904_, v___y_5889_, v___y_5888_);
if (lean_obj_tag(v___x_5905_) == 0)
{
lean_dec_ref_known(v___x_5905_, 1);
v___y_5872_ = v___y_5891_;
v___y_5873_ = v___y_5890_;
v_toConstantVal_5874_ = v_toConstantVal_5897_;
v_safety_5875_ = v_safety_5898_;
v___y_5876_ = v___y_5889_;
v___y_5877_ = v___y_5888_;
goto v___jp_5871_;
}
else
{
lean_dec_ref(v_toConstantVal_5897_);
lean_dec_ref(v___y_5890_);
lean_dec(v_decl_4889_);
return v___x_5905_;
}
}
}
}
v___jp_5906_:
{
lean_object* v___x_5912_; uint8_t v_isModule_5913_; 
v___x_5912_ = l_Lean_Environment_header(v___y_5908_);
lean_dec_ref(v___y_5908_);
v_isModule_5913_ = lean_ctor_get_uint8(v___x_5912_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_5912_);
if (v_isModule_5913_ == 0)
{
lean_dec_ref(v___y_5909_);
v___y_5854_ = v___y_5911_;
v_exportedInfo_x3f_5855_ = v___x_5803_;
v___y_5856_ = v___y_5910_;
v___y_5857_ = v___y_5907_;
goto v___jp_5853_;
}
else
{
uint8_t v_isExporting_5914_; 
v_isExporting_5914_ = lean_ctor_get_uint8(v___y_5909_, sizeof(void*)*13);
lean_dec_ref(v___y_5909_);
if (v_isExporting_5914_ == 0)
{
v___y_5888_ = v___y_5907_;
v___y_5889_ = v___y_5910_;
v___y_5890_ = v___y_5911_;
v___y_5891_ = v_isModule_5913_;
goto v___jp_5887_;
}
else
{
if (v___x_5621_ == 0)
{
v___y_5854_ = v___y_5911_;
v_exportedInfo_x3f_5855_ = v___x_5803_;
v___y_5856_ = v___y_5910_;
v___y_5857_ = v___y_5907_;
goto v___jp_5853_;
}
else
{
v___y_5888_ = v___y_5907_;
v___y_5889_ = v___y_5910_;
v___y_5890_ = v___y_5911_;
v___y_5891_ = v___x_5621_;
goto v___jp_5887_;
}
}
}
}
v___jp_5915_:
{
lean_object* v___x_5919_; lean_object* v_env_5920_; lean_object* v___x_5921_; 
v___x_5919_ = lean_st_ref_get(v___y_5918_);
v_env_5920_ = lean_ctor_get(v___x_5919_, 0);
lean_inc_ref(v_env_5920_);
lean_dec(v___x_5919_);
v___x_5921_ = lean_st_ref_get(v___y_5918_);
if (v_forceExpose_4890_ == 0)
{
lean_object* v_env_5922_; 
v_env_5922_ = lean_ctor_get(v___x_5921_, 0);
lean_inc_ref(v_env_5922_);
lean_dec(v___x_5921_);
v___y_5907_ = v___y_5918_;
v___y_5908_ = v_env_5920_;
v___y_5909_ = v_env_5922_;
v___y_5910_ = v___y_5917_;
v___y_5911_ = v_defn_5916_;
goto v___jp_5906_;
}
else
{
if (v___x_5621_ == 0)
{
lean_dec(v___x_5921_);
lean_dec_ref(v_env_5920_);
v___y_5854_ = v_defn_5916_;
v_exportedInfo_x3f_5855_ = v___x_5803_;
v___y_5856_ = v___y_5917_;
v___y_5857_ = v___y_5918_;
goto v___jp_5853_;
}
else
{
lean_object* v_env_5923_; 
v_env_5923_ = lean_ctor_get(v___x_5921_, 0);
lean_inc_ref(v_env_5923_);
lean_dec(v___x_5921_);
v___y_5907_ = v___y_5918_;
v___y_5908_ = v_env_5920_;
v___y_5909_ = v_env_5923_;
v___y_5910_ = v___y_5917_;
v___y_5911_ = v_defn_5916_;
goto v___jp_5906_;
}
}
}
}
}
}
else
{
goto v___jp_5462_;
}
v___jp_5622_:
{
lean_object* v___x_5634_; 
lean_inc_ref(v___y_5627_);
v___x_5634_ = l_Lean_Environment_AddConstAsyncResult_commitConst(v___y_5631_, v___y_5627_, v___y_5632_, v___y_5633_);
if (lean_obj_tag(v___x_5634_) == 0)
{
lean_object* v___x_5635_; lean_object* v___x_5637_; uint8_t v_isShared_5638_; uint8_t v_isSharedCheck_5681_; 
lean_dec_ref_known(v___x_5634_, 1);
lean_dec(v___y_5626_);
lean_inc_ref(v___y_5629_);
v___x_5635_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_5629_, v___y_5624_);
v_isSharedCheck_5681_ = !lean_is_exclusive(v___x_5635_);
if (v_isSharedCheck_5681_ == 0)
{
lean_object* v_unused_5682_; 
v_unused_5682_ = lean_ctor_get(v___x_5635_, 0);
lean_dec(v_unused_5682_);
v___x_5637_ = v___x_5635_;
v_isShared_5638_ = v_isSharedCheck_5681_;
goto v_resetjp_5636_;
}
else
{
lean_dec(v___x_5635_);
v___x_5637_ = lean_box(0);
v_isShared_5638_ = v_isSharedCheck_5681_;
goto v_resetjp_5636_;
}
v_resetjp_5636_:
{
lean_object* v___x_5639_; lean_object* v___x_5640_; uint8_t v___x_5641_; 
v___x_5639_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_5630_);
v___x_5640_ = l_Lean_Elab_async;
v___x_5641_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v___x_5639_, v___x_5640_);
lean_dec_ref(v___x_5639_);
if (v___x_5641_ == 0)
{
lean_object* v___x_5642_; lean_object* v_r_5643_; 
lean_del_object(v___x_5637_);
lean_dec_ref(v___y_5628_);
lean_dec_ref(v___y_5625_);
v___x_5642_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_5627_, v___y_5624_);
lean_dec_ref(v___x_5642_);
v_r_5643_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_4889_, v_forceExpose_4890_, v___y_5630_, v___y_5624_);
if (lean_obj_tag(v_r_5643_) == 0)
{
lean_object* v_a_5644_; lean_object* v___x_5646_; uint8_t v_isShared_5647_; uint8_t v_isSharedCheck_5653_; 
v_a_5644_ = lean_ctor_get(v_r_5643_, 0);
v_isSharedCheck_5653_ = !lean_is_exclusive(v_r_5643_);
if (v_isSharedCheck_5653_ == 0)
{
v___x_5646_ = v_r_5643_;
v_isShared_5647_ = v_isSharedCheck_5653_;
goto v_resetjp_5645_;
}
else
{
lean_inc(v_a_5644_);
lean_dec(v_r_5643_);
v___x_5646_ = lean_box(0);
v_isShared_5647_ = v_isSharedCheck_5653_;
goto v_resetjp_5645_;
}
v_resetjp_5645_:
{
lean_object* v___x_5649_; 
lean_inc(v_a_5644_);
if (v_isShared_5647_ == 0)
{
lean_ctor_set_tag(v___x_5646_, 1);
v___x_5649_ = v___x_5646_;
goto v_reusejp_5648_;
}
else
{
lean_object* v_reuseFailAlloc_5652_; 
v_reuseFailAlloc_5652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5652_, 0, v_a_5644_);
v___x_5649_ = v_reuseFailAlloc_5652_;
goto v_reusejp_5648_;
}
v_reusejp_5648_:
{
lean_object* v___x_5650_; 
v___x_5650_ = lean_apply_2(v___y_5623_, v___x_5649_, lean_box(0));
if (lean_obj_tag(v___x_5650_) == 0)
{
lean_dec_ref_known(v___x_5650_, 1);
v___y_4895_ = v___y_5624_;
v___y_4896_ = v___y_5629_;
v_a_4897_ = v_a_5644_;
goto v___jp_4894_;
}
else
{
lean_object* v_a_5651_; 
lean_dec(v_a_5644_);
v_a_5651_ = lean_ctor_get(v___x_5650_, 0);
lean_inc(v_a_5651_);
lean_dec_ref_known(v___x_5650_, 1);
v___y_4908_ = v___y_5624_;
v___y_4909_ = v___y_5629_;
v_a_4910_ = v_a_5651_;
goto v___jp_4907_;
}
}
}
}
else
{
lean_object* v_a_5654_; lean_object* v___x_5655_; lean_object* v___x_5656_; 
v_a_5654_ = lean_ctor_get(v_r_5643_, 0);
lean_inc(v_a_5654_);
lean_dec_ref_known(v_r_5643_, 1);
v___x_5655_ = lean_box(0);
v___x_5656_ = lean_apply_2(v___y_5623_, v___x_5655_, lean_box(0));
if (lean_obj_tag(v___x_5656_) == 0)
{
lean_dec_ref_known(v___x_5656_, 1);
v___y_4908_ = v___y_5624_;
v___y_4909_ = v___y_5629_;
v_a_4910_ = v_a_5654_;
goto v___jp_4907_;
}
else
{
lean_object* v_a_5657_; 
lean_dec(v_a_5654_);
v_a_5657_ = lean_ctor_get(v___x_5656_, 0);
lean_inc(v_a_5657_);
lean_dec_ref_known(v___x_5656_, 1);
v___y_4908_ = v___y_5624_;
v___y_4909_ = v___y_5629_;
v_a_4910_ = v_a_5657_;
goto v___jp_4907_;
}
}
}
else
{
lean_object* v___x_5658_; lean_object* v___x_5660_; 
lean_dec_ref(v___y_5629_);
lean_dec_ref(v___y_5627_);
lean_dec_ref(v___y_5623_);
lean_dec(v_decl_4889_);
v___x_5658_ = l_IO_CancelToken_new();
if (v_isShared_5638_ == 0)
{
lean_ctor_set_tag(v___x_5637_, 1);
lean_ctor_set(v___x_5637_, 0, v___x_5658_);
v___x_5660_ = v___x_5637_;
goto v_reusejp_5659_;
}
else
{
lean_object* v_reuseFailAlloc_5680_; 
v_reuseFailAlloc_5680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5680_, 0, v___x_5658_);
v___x_5660_ = v_reuseFailAlloc_5680_;
goto v_reusejp_5659_;
}
v_reusejp_5659_:
{
lean_object* v___x_5661_; lean_object* v___x_5662_; lean_object* v___x_5663_; lean_object* v___x_5664_; 
v___x_5661_ = lean_unsigned_to_nat(0u);
v___x_5662_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1));
v___x_5663_ = l_Lean_Name_toString(v___x_5662_, v_hasTrace_4949_);
lean_inc_ref(v___x_5660_);
v___x_5664_ = l_Lean_Core_wrapAsyncAsSnapshot___redArg(v___y_5625_, v___x_5660_, v___x_5663_, v___y_5630_, v___y_5624_);
if (lean_obj_tag(v___x_5664_) == 0)
{
lean_object* v_a_5665_; lean_object* v_checked_5666_; lean_object* v___x_5667_; lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; lean_object* v___x_5671_; 
v_a_5665_ = lean_ctor_get(v___x_5664_, 0);
lean_inc(v_a_5665_);
lean_dec_ref_known(v___x_5664_, 1);
v_checked_5666_ = lean_ctor_get(v___y_5628_, 2);
lean_inc_ref(v_checked_5666_);
lean_dec_ref(v___y_5628_);
v___x_5667_ = lean_io_map_task(v_a_5665_, v_checked_5666_, v___x_5661_, v___x_5621_);
v___x_5668_ = lean_box(0);
v___x_5669_ = lean_box(2);
v___x_5670_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5670_, 0, v___x_5668_);
lean_ctor_set(v___x_5670_, 1, v___x_5669_);
lean_ctor_set(v___x_5670_, 2, v___x_5660_);
lean_ctor_set(v___x_5670_, 3, v___x_5667_);
v___x_5671_ = l_Lean_Core_logSnapshotTask___redArg(v___x_5670_, v___y_5624_);
return v___x_5671_;
}
else
{
lean_object* v_a_5672_; lean_object* v___x_5674_; uint8_t v_isShared_5675_; uint8_t v_isSharedCheck_5679_; 
lean_dec_ref(v___x_5660_);
lean_dec_ref(v___y_5628_);
v_a_5672_ = lean_ctor_get(v___x_5664_, 0);
v_isSharedCheck_5679_ = !lean_is_exclusive(v___x_5664_);
if (v_isSharedCheck_5679_ == 0)
{
v___x_5674_ = v___x_5664_;
v_isShared_5675_ = v_isSharedCheck_5679_;
goto v_resetjp_5673_;
}
else
{
lean_inc(v_a_5672_);
lean_dec(v___x_5664_);
v___x_5674_ = lean_box(0);
v_isShared_5675_ = v_isSharedCheck_5679_;
goto v_resetjp_5673_;
}
v_resetjp_5673_:
{
lean_object* v___x_5677_; 
if (v_isShared_5675_ == 0)
{
v___x_5677_ = v___x_5674_;
goto v_reusejp_5676_;
}
else
{
lean_object* v_reuseFailAlloc_5678_; 
v_reuseFailAlloc_5678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5678_, 0, v_a_5672_);
v___x_5677_ = v_reuseFailAlloc_5678_;
goto v_reusejp_5676_;
}
v_reusejp_5676_:
{
return v___x_5677_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5683_; lean_object* v___x_5685_; uint8_t v_isShared_5686_; uint8_t v_isSharedCheck_5694_; 
lean_dec_ref(v___y_5629_);
lean_dec_ref(v___y_5628_);
lean_dec_ref(v___y_5627_);
lean_dec_ref(v___y_5625_);
lean_dec_ref(v___y_5623_);
lean_dec(v_decl_4889_);
v_a_5683_ = lean_ctor_get(v___x_5634_, 0);
v_isSharedCheck_5694_ = !lean_is_exclusive(v___x_5634_);
if (v_isSharedCheck_5694_ == 0)
{
v___x_5685_ = v___x_5634_;
v_isShared_5686_ = v_isSharedCheck_5694_;
goto v_resetjp_5684_;
}
else
{
lean_inc(v_a_5683_);
lean_dec(v___x_5634_);
v___x_5685_ = lean_box(0);
v_isShared_5686_ = v_isSharedCheck_5694_;
goto v_resetjp_5684_;
}
v_resetjp_5684_:
{
lean_object* v___x_5687_; lean_object* v___x_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___x_5692_; 
v___x_5687_ = lean_io_error_to_string(v_a_5683_);
v___x_5688_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5688_, 0, v___x_5687_);
v___x_5689_ = l_Lean_MessageData_ofFormat(v___x_5688_);
v___x_5690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5690_, 0, v___y_5626_);
lean_ctor_set(v___x_5690_, 1, v___x_5689_);
if (v_isShared_5686_ == 0)
{
lean_ctor_set(v___x_5685_, 0, v___x_5690_);
v___x_5692_ = v___x_5685_;
goto v_reusejp_5691_;
}
else
{
lean_object* v_reuseFailAlloc_5693_; 
v_reuseFailAlloc_5693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5693_, 0, v___x_5690_);
v___x_5692_ = v_reuseFailAlloc_5693_;
goto v_reusejp_5691_;
}
v_reusejp_5691_:
{
return v___x_5692_;
}
}
}
}
v___jp_5695_:
{
lean_object* v_ref_5704_; lean_object* v___x_5705_; 
v_ref_5704_ = lean_ctor_get(v___y_5699_, 2);
lean_inc_ref(v___y_5702_);
v___x_5705_ = l_Lean_Environment_addConstAsync(v___y_5702_, v___y_5697_, v___y_5701_, v___y_5703_, v___x_5621_, v_hasTrace_4949_);
if (lean_obj_tag(v___x_5705_) == 0)
{
lean_object* v_a_5706_; lean_object* v_mainEnv_5707_; lean_object* v_asyncEnv_5708_; lean_object* v___f_5709_; lean_object* v___x_5710_; lean_object* v___f_5711_; lean_object* v___x_5712_; 
v_a_5706_ = lean_ctor_get(v___x_5705_, 0);
lean_inc_n(v_a_5706_, 3);
lean_dec_ref_known(v___x_5705_, 1);
v_mainEnv_5707_ = lean_ctor_get(v_a_5706_, 0);
lean_inc_ref(v_mainEnv_5707_);
v_asyncEnv_5708_ = lean_ctor_get(v_a_5706_, 1);
lean_inc_ref_n(v_asyncEnv_5708_, 2);
lean_inc(v_ref_5704_);
lean_inc(v___y_5696_);
v___f_5709_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed), 5, 3);
lean_closure_set(v___f_5709_, 0, v___y_5696_);
lean_closure_set(v___f_5709_, 1, v_a_5706_);
lean_closure_set(v___f_5709_, 2, v_ref_5704_);
v___x_5710_ = lean_box(v_forceExpose_4890_);
lean_inc(v_decl_4889_);
v___f_5711_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed), 8, 4);
lean_closure_set(v___f_5711_, 0, v_a_5706_);
lean_closure_set(v___f_5711_, 1, v_asyncEnv_5708_);
lean_closure_set(v___f_5711_, 2, v_decl_4889_);
lean_closure_set(v___f_5711_, 3, v___x_5710_);
v___x_5712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5712_, 0, v___y_5700_);
if (lean_obj_tag(v___y_5698_) == 0)
{
lean_inc_ref(v___x_5712_);
lean_inc(v_ref_5704_);
v___y_5623_ = v___f_5709_;
v___y_5624_ = v___y_5696_;
v___y_5625_ = v___f_5711_;
v___y_5626_ = v_ref_5704_;
v___y_5627_ = v_asyncEnv_5708_;
v___y_5628_ = v___y_5702_;
v___y_5629_ = v_mainEnv_5707_;
v___y_5630_ = v___y_5699_;
v___y_5631_ = v_a_5706_;
v___y_5632_ = v___x_5712_;
v___y_5633_ = v___x_5712_;
goto v___jp_5622_;
}
else
{
lean_inc(v_ref_5704_);
v___y_5623_ = v___f_5709_;
v___y_5624_ = v___y_5696_;
v___y_5625_ = v___f_5711_;
v___y_5626_ = v_ref_5704_;
v___y_5627_ = v_asyncEnv_5708_;
v___y_5628_ = v___y_5702_;
v___y_5629_ = v_mainEnv_5707_;
v___y_5630_ = v___y_5699_;
v___y_5631_ = v_a_5706_;
v___y_5632_ = v___x_5712_;
v___y_5633_ = v___y_5698_;
goto v___jp_5622_;
}
}
else
{
lean_object* v_a_5713_; lean_object* v___x_5715_; uint8_t v_isShared_5716_; uint8_t v_isSharedCheck_5724_; 
lean_dec_ref(v___y_5702_);
lean_dec_ref(v___y_5700_);
lean_dec(v___y_5698_);
lean_dec(v_decl_4889_);
v_a_5713_ = lean_ctor_get(v___x_5705_, 0);
v_isSharedCheck_5724_ = !lean_is_exclusive(v___x_5705_);
if (v_isSharedCheck_5724_ == 0)
{
v___x_5715_ = v___x_5705_;
v_isShared_5716_ = v_isSharedCheck_5724_;
goto v_resetjp_5714_;
}
else
{
lean_inc(v_a_5713_);
lean_dec(v___x_5705_);
v___x_5715_ = lean_box(0);
v_isShared_5716_ = v_isSharedCheck_5724_;
goto v_resetjp_5714_;
}
v_resetjp_5714_:
{
lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5722_; 
v___x_5717_ = lean_io_error_to_string(v_a_5713_);
v___x_5718_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5718_, 0, v___x_5717_);
v___x_5719_ = l_Lean_MessageData_ofFormat(v___x_5718_);
lean_inc(v_ref_5704_);
v___x_5720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5720_, 0, v_ref_5704_);
lean_ctor_set(v___x_5720_, 1, v___x_5719_);
if (v_isShared_5716_ == 0)
{
lean_ctor_set(v___x_5715_, 0, v___x_5720_);
v___x_5722_ = v___x_5715_;
goto v_reusejp_5721_;
}
else
{
lean_object* v_reuseFailAlloc_5723_; 
v_reuseFailAlloc_5723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5723_, 0, v___x_5720_);
v___x_5722_ = v_reuseFailAlloc_5723_;
goto v_reusejp_5721_;
}
v_reusejp_5721_:
{
return v___x_5722_;
}
}
}
}
v___jp_5725_:
{
lean_object* v___x_5732_; 
v___x_5732_ = lean_st_ref_get(v___y_5731_);
if (lean_obj_tag(v_exportedInfo_x3f_5729_) == 0)
{
lean_object* v_env_5733_; lean_object* v___x_5734_; 
v_env_5733_ = lean_ctor_get(v___x_5732_, 0);
lean_inc_ref(v_env_5733_);
lean_dec(v___x_5732_);
v___x_5734_ = lean_box(0);
v___y_5696_ = v___y_5731_;
v___y_5697_ = v___y_5728_;
v___y_5698_ = v_exportedInfo_x3f_5729_;
v___y_5699_ = v___y_5730_;
v___y_5700_ = v___y_5726_;
v___y_5701_ = v___y_5727_;
v___y_5702_ = v_env_5733_;
v___y_5703_ = v___x_5734_;
goto v___jp_5695_;
}
else
{
lean_object* v_env_5735_; lean_object* v_val_5736_; uint8_t v___x_5737_; lean_object* v___x_5738_; lean_object* v___x_5739_; 
v_env_5735_ = lean_ctor_get(v___x_5732_, 0);
lean_inc_ref(v_env_5735_);
lean_dec(v___x_5732_);
v_val_5736_ = lean_ctor_get(v_exportedInfo_x3f_5729_, 0);
v___x_5737_ = l_Lean_ConstantKind_ofConstantInfo(v_val_5736_);
v___x_5738_ = lean_box(v___x_5737_);
v___x_5739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5739_, 0, v___x_5738_);
v___y_5696_ = v___y_5731_;
v___y_5697_ = v___y_5728_;
v___y_5698_ = v_exportedInfo_x3f_5729_;
v___y_5699_ = v___y_5730_;
v___y_5700_ = v___y_5726_;
v___y_5701_ = v___y_5727_;
v___y_5702_ = v_env_5735_;
v___y_5703_ = v___x_5739_;
goto v___jp_5695_;
}
}
v___jp_5740_:
{
lean_object* v___x_5746_; 
lean_inc_ref(v___y_5741_);
v___x_5746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5746_, 0, v___y_5741_);
v___y_5726_ = v___y_5741_;
v___y_5727_ = v___y_5742_;
v___y_5728_ = v___y_5743_;
v_exportedInfo_x3f_5729_ = v___x_5746_;
v___y_5730_ = v___y_5744_;
v___y_5731_ = v___y_5745_;
goto v___jp_5725_;
}
v___jp_5747_:
{
lean_object* v___x_5753_; 
lean_inc_ref(v___y_5748_);
v___x_5753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5753_, 0, v___y_5748_);
v___y_5726_ = v___y_5748_;
v___y_5727_ = v___y_5749_;
v___y_5728_ = v___y_5750_;
v_exportedInfo_x3f_5729_ = v___x_5753_;
v___y_5730_ = v___y_5751_;
v___y_5731_ = v___y_5752_;
goto v___jp_5725_;
}
}
else
{
goto v___jp_5462_;
}
v___jp_5315_:
{
lean_object* v___x_5319_; double v___x_5320_; double v___x_5321_; double v___x_5322_; double v___x_5323_; double v___x_5324_; lean_object* v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5327_; lean_object* v___x_5328_; lean_object* v___x_5329_; 
v___x_5319_ = lean_io_mono_nanos_now();
v___x_5320_ = lean_float_of_nat(v___y_5316_);
v___x_5321_ = lean_float_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1);
v___x_5322_ = lean_float_div(v___x_5320_, v___x_5321_);
v___x_5323_ = lean_float_of_nat(v___x_5319_);
v___x_5324_ = lean_float_div(v___x_5323_, v___x_5321_);
v___x_5325_ = lean_box_float(v___x_5322_);
v___x_5326_ = lean_box_float(v___x_5324_);
v___x_5327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5327_, 0, v___x_5325_);
lean_ctor_set(v___x_5327_, 1, v___x_5326_);
v___x_5328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5328_, 0, v_a_5318_);
lean_ctor_set(v___x_5328_, 1, v___x_5327_);
v___x_5329_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(v_cls_5084_, v_hasTrace_4949_, v___x_5312_, v_options_4947_, v___x_5314_, v___y_5317_, v___f_5311_, v___x_5328_, v_a_4891_, v_a_4892_);
return v___x_5329_;
}
v___jp_5330_:
{
if (lean_obj_tag(v___y_5333_) == 0)
{
lean_object* v_a_5334_; lean_object* v___x_5336_; uint8_t v_isShared_5337_; uint8_t v_isSharedCheck_5341_; 
v_a_5334_ = lean_ctor_get(v___y_5333_, 0);
v_isSharedCheck_5341_ = !lean_is_exclusive(v___y_5333_);
if (v_isSharedCheck_5341_ == 0)
{
v___x_5336_ = v___y_5333_;
v_isShared_5337_ = v_isSharedCheck_5341_;
goto v_resetjp_5335_;
}
else
{
lean_inc(v_a_5334_);
lean_dec(v___y_5333_);
v___x_5336_ = lean_box(0);
v_isShared_5337_ = v_isSharedCheck_5341_;
goto v_resetjp_5335_;
}
v_resetjp_5335_:
{
lean_object* v___x_5339_; 
if (v_isShared_5337_ == 0)
{
lean_ctor_set_tag(v___x_5336_, 1);
v___x_5339_ = v___x_5336_;
goto v_reusejp_5338_;
}
else
{
lean_object* v_reuseFailAlloc_5340_; 
v_reuseFailAlloc_5340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5340_, 0, v_a_5334_);
v___x_5339_ = v_reuseFailAlloc_5340_;
goto v_reusejp_5338_;
}
v_reusejp_5338_:
{
v___y_5316_ = v___y_5331_;
v___y_5317_ = v___y_5332_;
v_a_5318_ = v___x_5339_;
goto v___jp_5315_;
}
}
}
else
{
lean_object* v_a_5342_; lean_object* v___x_5344_; uint8_t v_isShared_5345_; uint8_t v_isSharedCheck_5349_; 
v_a_5342_ = lean_ctor_get(v___y_5333_, 0);
v_isSharedCheck_5349_ = !lean_is_exclusive(v___y_5333_);
if (v_isSharedCheck_5349_ == 0)
{
v___x_5344_ = v___y_5333_;
v_isShared_5345_ = v_isSharedCheck_5349_;
goto v_resetjp_5343_;
}
else
{
lean_inc(v_a_5342_);
lean_dec(v___y_5333_);
v___x_5344_ = lean_box(0);
v_isShared_5345_ = v_isSharedCheck_5349_;
goto v_resetjp_5343_;
}
v_resetjp_5343_:
{
lean_object* v___x_5347_; 
if (v_isShared_5345_ == 0)
{
lean_ctor_set_tag(v___x_5344_, 0);
v___x_5347_ = v___x_5344_;
goto v_reusejp_5346_;
}
else
{
lean_object* v_reuseFailAlloc_5348_; 
v_reuseFailAlloc_5348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5348_, 0, v_a_5342_);
v___x_5347_ = v_reuseFailAlloc_5348_;
goto v_reusejp_5346_;
}
v_reusejp_5346_:
{
v___y_5316_ = v___y_5331_;
v___y_5317_ = v___y_5332_;
v_a_5318_ = v___x_5347_;
goto v___jp_5315_;
}
}
}
}
v___jp_5350_:
{
lean_object* v___x_5355_; lean_object* v___x_5356_; 
v___x_5355_ = lean_box(0);
lean_inc(v_a_4892_);
lean_inc_ref(v_a_4891_);
v___x_5356_ = lean_apply_5(v___y_5353_, v___x_5355_, v___y_5352_, v_a_4891_, v_a_4892_, lean_box(0));
v___y_5331_ = v___y_5351_;
v___y_5332_ = v___y_5354_;
v___y_5333_ = v___x_5356_;
goto v___jp_5330_;
}
v___jp_5357_:
{
lean_object* v___x_5365_; uint8_t v_isModule_5366_; 
v___x_5365_ = l_Lean_Environment_header(v___y_5362_);
lean_dec_ref(v___y_5362_);
v_isModule_5366_ = lean_ctor_get_uint8(v___x_5365_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_5365_);
if (v_isModule_5366_ == 0)
{
lean_dec_ref(v___y_5363_);
lean_dec_ref(v___y_5359_);
v___y_5351_ = v___y_5358_;
v___y_5352_ = v___y_5360_;
v___y_5353_ = v___y_5361_;
v___y_5354_ = v___y_5364_;
goto v___jp_5350_;
}
else
{
lean_dec_ref(v___y_5361_);
lean_dec(v___y_5360_);
if (v___x_5314_ == 0)
{
lean_object* v___x_5367_; lean_object* v___x_5368_; 
lean_dec_ref(v___y_5359_);
v___x_5367_ = lean_box(0);
lean_inc(v_a_4892_);
lean_inc_ref(v_a_4891_);
v___x_5368_ = lean_apply_4(v___y_5363_, v___x_5367_, v_a_4891_, v_a_4892_, lean_box(0));
v___y_5331_ = v___y_5358_;
v___y_5332_ = v___y_5364_;
v___y_5333_ = v___x_5368_;
goto v___jp_5330_;
}
else
{
lean_object* v_toConstantVal_5369_; lean_object* v_name_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; 
v_toConstantVal_5369_ = lean_ctor_get(v___y_5359_, 0);
lean_inc_ref(v_toConstantVal_5369_);
lean_dec_ref(v___y_5359_);
v_name_5370_ = lean_ctor_get(v_toConstantVal_5369_, 0);
lean_inc(v_name_5370_);
lean_dec_ref(v_toConstantVal_5369_);
v___x_5371_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2);
v___x_5372_ = l_Lean_MessageData_ofName(v_name_5370_);
v___x_5373_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5373_, 0, v___x_5371_);
lean_ctor_set(v___x_5373_, 1, v___x_5372_);
v___x_5374_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_5375_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5375_, 0, v___x_5373_);
lean_ctor_set(v___x_5375_, 1, v___x_5374_);
v___x_5376_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_5084_, v___x_5375_, v_a_4891_, v_a_4892_);
if (lean_obj_tag(v___x_5376_) == 0)
{
lean_object* v_a_5377_; lean_object* v___x_5378_; 
v_a_5377_ = lean_ctor_get(v___x_5376_, 0);
lean_inc(v_a_5377_);
lean_dec_ref_known(v___x_5376_, 1);
lean_inc(v_a_4892_);
lean_inc_ref(v_a_4891_);
v___x_5378_ = lean_apply_4(v___y_5363_, v_a_5377_, v_a_4891_, v_a_4892_, lean_box(0));
v___y_5331_ = v___y_5358_;
v___y_5332_ = v___y_5364_;
v___y_5333_ = v___x_5378_;
goto v___jp_5330_;
}
else
{
lean_dec_ref(v___y_5363_);
v___y_5331_ = v___y_5358_;
v___y_5332_ = v___y_5364_;
v___y_5333_ = v___x_5376_;
goto v___jp_5330_;
}
}
}
}
v___jp_5379_:
{
if (v___x_5314_ == 0)
{
lean_object* v___x_5384_; lean_object* v___x_5385_; 
lean_dec_ref(v___y_5381_);
v___x_5384_ = lean_box(0);
lean_inc(v_a_4892_);
lean_inc_ref(v_a_4891_);
v___x_5385_ = lean_apply_4(v___y_5382_, v___x_5384_, v_a_4891_, v_a_4892_, lean_box(0));
v___y_5331_ = v___y_5380_;
v___y_5332_ = v___y_5383_;
v___y_5333_ = v___x_5385_;
goto v___jp_5330_;
}
else
{
lean_object* v_toConstantVal_5386_; lean_object* v_name_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; 
v_toConstantVal_5386_ = lean_ctor_get(v___y_5381_, 0);
lean_inc_ref(v_toConstantVal_5386_);
lean_dec_ref(v___y_5381_);
v_name_5387_ = lean_ctor_get(v_toConstantVal_5386_, 0);
lean_inc(v_name_5387_);
lean_dec_ref(v_toConstantVal_5386_);
v___x_5388_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4);
v___x_5389_ = l_Lean_MessageData_ofName(v_name_5387_);
v___x_5390_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5390_, 0, v___x_5388_);
lean_ctor_set(v___x_5390_, 1, v___x_5389_);
v___x_5391_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_5392_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5392_, 0, v___x_5390_);
lean_ctor_set(v___x_5392_, 1, v___x_5391_);
v___x_5393_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_5084_, v___x_5392_, v_a_4891_, v_a_4892_);
if (lean_obj_tag(v___x_5393_) == 0)
{
lean_object* v_a_5394_; lean_object* v___x_5395_; 
v_a_5394_ = lean_ctor_get(v___x_5393_, 0);
lean_inc(v_a_5394_);
lean_dec_ref_known(v___x_5393_, 1);
lean_inc(v_a_4892_);
lean_inc_ref(v_a_4891_);
v___x_5395_ = lean_apply_4(v___y_5382_, v_a_5394_, v_a_4891_, v_a_4892_, lean_box(0));
v___y_5331_ = v___y_5380_;
v___y_5332_ = v___y_5383_;
v___y_5333_ = v___x_5395_;
goto v___jp_5330_;
}
else
{
lean_dec_ref(v___y_5382_);
v___y_5331_ = v___y_5380_;
v___y_5332_ = v___y_5383_;
v___y_5333_ = v___x_5393_;
goto v___jp_5330_;
}
}
}
v___jp_5396_:
{
lean_object* v___x_5401_; lean_object* v___x_5402_; 
v___x_5401_ = lean_box(0);
lean_inc(v_a_4892_);
lean_inc_ref(v_a_4891_);
v___x_5402_ = lean_apply_5(v___y_5398_, v___x_5401_, v___y_5399_, v_a_4891_, v_a_4892_, lean_box(0));
v___y_5331_ = v___y_5397_;
v___y_5332_ = v___y_5400_;
v___y_5333_ = v___x_5402_;
goto v___jp_5330_;
}
v___jp_5403_:
{
lean_object* v___x_5413_; uint8_t v_isModule_5414_; 
v___x_5413_ = l_Lean_Environment_header(v___y_5408_);
lean_dec_ref(v___y_5408_);
v_isModule_5414_ = lean_ctor_get_uint8(v___x_5413_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_5413_);
if (v_isModule_5414_ == 0)
{
lean_dec_ref(v___y_5411_);
lean_dec_ref(v___y_5410_);
lean_dec_ref(v___y_5406_);
v___y_5397_ = v___y_5405_;
v___y_5398_ = v___y_5404_;
v___y_5399_ = v___y_5407_;
v___y_5400_ = v___y_5412_;
goto v___jp_5396_;
}
else
{
uint8_t v_isExporting_5415_; 
v_isExporting_5415_ = lean_ctor_get_uint8(v___y_5411_, sizeof(void*)*13);
lean_dec_ref(v___y_5411_);
if (v_isExporting_5415_ == 0)
{
lean_dec(v___y_5407_);
lean_dec_ref(v___y_5404_);
v___y_5380_ = v___y_5405_;
v___y_5381_ = v___y_5406_;
v___y_5382_ = v___y_5410_;
v___y_5383_ = v___y_5412_;
goto v___jp_5379_;
}
else
{
if (v___y_5409_ == 0)
{
lean_dec_ref(v___y_5410_);
lean_dec_ref(v___y_5406_);
v___y_5397_ = v___y_5405_;
v___y_5398_ = v___y_5404_;
v___y_5399_ = v___y_5407_;
v___y_5400_ = v___y_5412_;
goto v___jp_5396_;
}
else
{
lean_dec(v___y_5407_);
lean_dec_ref(v___y_5404_);
v___y_5380_ = v___y_5405_;
v___y_5381_ = v___y_5406_;
v___y_5382_ = v___y_5410_;
v___y_5383_ = v___y_5412_;
goto v___jp_5379_;
}
}
}
}
v___jp_5416_:
{
lean_object* v___x_5420_; double v___x_5421_; double v___x_5422_; lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; 
v___x_5420_ = lean_io_get_num_heartbeats();
v___x_5421_ = lean_float_of_nat(v___y_5417_);
v___x_5422_ = lean_float_of_nat(v___x_5420_);
v___x_5423_ = lean_box_float(v___x_5421_);
v___x_5424_ = lean_box_float(v___x_5422_);
v___x_5425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5425_, 0, v___x_5423_);
lean_ctor_set(v___x_5425_, 1, v___x_5424_);
v___x_5426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5426_, 0, v_a_5419_);
lean_ctor_set(v___x_5426_, 1, v___x_5425_);
v___x_5427_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(v_cls_5084_, v_hasTrace_4949_, v___x_5312_, v_options_4947_, v___x_5314_, v___y_5418_, v___f_5311_, v___x_5426_, v_a_4891_, v_a_4892_);
return v___x_5427_;
}
v___jp_5428_:
{
if (lean_obj_tag(v___y_5431_) == 0)
{
lean_object* v_a_5432_; lean_object* v___x_5434_; uint8_t v_isShared_5435_; uint8_t v_isSharedCheck_5439_; 
v_a_5432_ = lean_ctor_get(v___y_5431_, 0);
v_isSharedCheck_5439_ = !lean_is_exclusive(v___y_5431_);
if (v_isSharedCheck_5439_ == 0)
{
v___x_5434_ = v___y_5431_;
v_isShared_5435_ = v_isSharedCheck_5439_;
goto v_resetjp_5433_;
}
else
{
lean_inc(v_a_5432_);
lean_dec(v___y_5431_);
v___x_5434_ = lean_box(0);
v_isShared_5435_ = v_isSharedCheck_5439_;
goto v_resetjp_5433_;
}
v_resetjp_5433_:
{
lean_object* v___x_5437_; 
if (v_isShared_5435_ == 0)
{
lean_ctor_set_tag(v___x_5434_, 1);
v___x_5437_ = v___x_5434_;
goto v_reusejp_5436_;
}
else
{
lean_object* v_reuseFailAlloc_5438_; 
v_reuseFailAlloc_5438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5438_, 0, v_a_5432_);
v___x_5437_ = v_reuseFailAlloc_5438_;
goto v_reusejp_5436_;
}
v_reusejp_5436_:
{
v___y_5417_ = v___y_5429_;
v___y_5418_ = v___y_5430_;
v_a_5419_ = v___x_5437_;
goto v___jp_5416_;
}
}
}
else
{
lean_object* v_a_5440_; lean_object* v___x_5442_; uint8_t v_isShared_5443_; uint8_t v_isSharedCheck_5447_; 
v_a_5440_ = lean_ctor_get(v___y_5431_, 0);
v_isSharedCheck_5447_ = !lean_is_exclusive(v___y_5431_);
if (v_isSharedCheck_5447_ == 0)
{
v___x_5442_ = v___y_5431_;
v_isShared_5443_ = v_isSharedCheck_5447_;
goto v_resetjp_5441_;
}
else
{
lean_inc(v_a_5440_);
lean_dec(v___y_5431_);
v___x_5442_ = lean_box(0);
v_isShared_5443_ = v_isSharedCheck_5447_;
goto v_resetjp_5441_;
}
v_resetjp_5441_:
{
lean_object* v___x_5445_; 
if (v_isShared_5443_ == 0)
{
lean_ctor_set_tag(v___x_5442_, 0);
v___x_5445_ = v___x_5442_;
goto v_reusejp_5444_;
}
else
{
lean_object* v_reuseFailAlloc_5446_; 
v_reuseFailAlloc_5446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5446_, 0, v_a_5440_);
v___x_5445_ = v_reuseFailAlloc_5446_;
goto v_reusejp_5444_;
}
v_reusejp_5444_:
{
v___y_5417_ = v___y_5429_;
v___y_5418_ = v___y_5430_;
v_a_5419_ = v___x_5445_;
goto v___jp_5416_;
}
}
}
}
v___jp_5448_:
{
lean_object* v___x_5453_; lean_object* v___x_5454_; 
v___x_5453_ = lean_box(0);
lean_inc(v_a_4892_);
lean_inc_ref(v_a_4891_);
v___x_5454_ = lean_apply_5(v___y_5451_, v___x_5453_, v___y_5449_, v_a_4891_, v_a_4892_, lean_box(0));
v___y_5429_ = v___y_5450_;
v___y_5430_ = v___y_5452_;
v___y_5431_ = v___x_5454_;
goto v___jp_5428_;
}
v___jp_5455_:
{
lean_object* v___x_5460_; lean_object* v___x_5461_; 
v___x_5460_ = lean_box(0);
lean_inc(v_a_4892_);
lean_inc_ref(v_a_4891_);
v___x_5461_ = lean_apply_5(v___y_5458_, v___x_5460_, v___y_5456_, v_a_4891_, v_a_4892_, lean_box(0));
v___y_5429_ = v___y_5457_;
v___y_5430_ = v___y_5459_;
v___y_5431_ = v___x_5461_;
goto v___jp_5428_;
}
v___jp_5462_:
{
lean_object* v___x_5463_; lean_object* v_a_5464_; lean_object* v___x_5466_; uint8_t v_isShared_5467_; uint8_t v_isSharedCheck_5619_; 
v___x_5463_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(v_a_4892_);
v_a_5464_ = lean_ctor_get(v___x_5463_, 0);
v_isSharedCheck_5619_ = !lean_is_exclusive(v___x_5463_);
if (v_isSharedCheck_5619_ == 0)
{
v___x_5466_ = v___x_5463_;
v_isShared_5467_ = v_isSharedCheck_5619_;
goto v_resetjp_5465_;
}
else
{
lean_inc(v_a_5464_);
lean_dec(v___x_5463_);
v___x_5466_ = lean_box(0);
v_isShared_5467_ = v_isSharedCheck_5619_;
goto v_resetjp_5465_;
}
v_resetjp_5465_:
{
lean_object* v___x_5468_; uint8_t v___x_5469_; 
v___x_5468_ = l_Lean_trace_profiler_useHeartbeats;
v___x_5469_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_4947_, v___x_5468_);
if (v___x_5469_ == 0)
{
lean_object* v___x_5470_; lean_object* v___x_5471_; lean_object* v_env_5472_; lean_object* v_nextMacroScope_5473_; lean_object* v_ngen_5474_; lean_object* v_auxDeclNGen_5475_; lean_object* v_traceState_5476_; lean_object* v_recordedDeps_5477_; lean_object* v_messages_5478_; lean_object* v_infoState_5479_; lean_object* v_snapshotTasks_5480_; lean_object* v___x_5482_; uint8_t v_isShared_5483_; uint8_t v_isSharedCheck_5531_; 
v___x_5470_ = lean_io_mono_nanos_now();
v___x_5471_ = lean_st_ref_take(v_a_4892_);
v_env_5472_ = lean_ctor_get(v___x_5471_, 0);
v_nextMacroScope_5473_ = lean_ctor_get(v___x_5471_, 1);
v_ngen_5474_ = lean_ctor_get(v___x_5471_, 2);
v_auxDeclNGen_5475_ = lean_ctor_get(v___x_5471_, 3);
v_traceState_5476_ = lean_ctor_get(v___x_5471_, 4);
v_recordedDeps_5477_ = lean_ctor_get(v___x_5471_, 6);
v_messages_5478_ = lean_ctor_get(v___x_5471_, 7);
v_infoState_5479_ = lean_ctor_get(v___x_5471_, 8);
v_snapshotTasks_5480_ = lean_ctor_get(v___x_5471_, 9);
v_isSharedCheck_5531_ = !lean_is_exclusive(v___x_5471_);
if (v_isSharedCheck_5531_ == 0)
{
lean_object* v_unused_5532_; 
v_unused_5532_ = lean_ctor_get(v___x_5471_, 5);
lean_dec(v_unused_5532_);
v___x_5482_ = v___x_5471_;
v_isShared_5483_ = v_isSharedCheck_5531_;
goto v_resetjp_5481_;
}
else
{
lean_inc(v_snapshotTasks_5480_);
lean_inc(v_infoState_5479_);
lean_inc(v_messages_5478_);
lean_inc(v_recordedDeps_5477_);
lean_inc(v_traceState_5476_);
lean_inc(v_auxDeclNGen_5475_);
lean_inc(v_ngen_5474_);
lean_inc(v_nextMacroScope_5473_);
lean_inc(v_env_5472_);
lean_dec(v___x_5471_);
v___x_5482_ = lean_box(0);
v_isShared_5483_ = v_isSharedCheck_5531_;
goto v_resetjp_5481_;
}
v_resetjp_5481_:
{
lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5486_; lean_object* v___x_5488_; 
lean_inc(v_decl_4889_);
v___x_5484_ = l_Lean_Declaration_getNames(v_decl_4889_);
v___x_5485_ = l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(v_env_5472_, v___x_5484_);
v___x_5486_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_5483_ == 0)
{
lean_ctor_set(v___x_5482_, 5, v___x_5486_);
lean_ctor_set(v___x_5482_, 0, v___x_5485_);
v___x_5488_ = v___x_5482_;
goto v_reusejp_5487_;
}
else
{
lean_object* v_reuseFailAlloc_5530_; 
v_reuseFailAlloc_5530_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5530_, 0, v___x_5485_);
lean_ctor_set(v_reuseFailAlloc_5530_, 1, v_nextMacroScope_5473_);
lean_ctor_set(v_reuseFailAlloc_5530_, 2, v_ngen_5474_);
lean_ctor_set(v_reuseFailAlloc_5530_, 3, v_auxDeclNGen_5475_);
lean_ctor_set(v_reuseFailAlloc_5530_, 4, v_traceState_5476_);
lean_ctor_set(v_reuseFailAlloc_5530_, 5, v___x_5486_);
lean_ctor_set(v_reuseFailAlloc_5530_, 6, v_recordedDeps_5477_);
lean_ctor_set(v_reuseFailAlloc_5530_, 7, v_messages_5478_);
lean_ctor_set(v_reuseFailAlloc_5530_, 8, v_infoState_5479_);
lean_ctor_set(v_reuseFailAlloc_5530_, 9, v_snapshotTasks_5480_);
v___x_5488_ = v_reuseFailAlloc_5530_;
goto v_reusejp_5487_;
}
v_reusejp_5487_:
{
lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5492_; lean_object* v___x_5493_; lean_object* v___f_5494_; 
v___x_5489_ = lean_st_ref_put(v_a_4892_, v___x_5488_);
v___x_5490_ = lean_box(0);
v___x_5491_ = lean_box(v_forceExpose_4890_);
v___x_5492_ = lean_box(v_hasTrace_4949_);
v___x_5493_ = lean_box(v___x_5469_);
lean_inc(v_decl_4889_);
v___f_5494_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___boxed), 12, 7);
lean_closure_set(v___f_5494_, 0, v_decl_4889_);
lean_closure_set(v___f_5494_, 1, v___x_5491_);
lean_closure_set(v___f_5494_, 2, v___x_5492_);
lean_closure_set(v___f_5494_, 3, v___x_5493_);
lean_closure_set(v___f_5494_, 4, v___x_5486_);
lean_closure_set(v___f_5494_, 5, v_cls_5084_);
lean_closure_set(v___f_5494_, 6, v___x_5490_);
switch(lean_obj_tag(v_decl_4889_))
{
case 2:
{
lean_object* v_val_5495_; lean_object* v___f_5496_; lean_object* v___x_5497_; lean_object* v___f_5498_; lean_object* v___x_5499_; 
lean_del_object(v___x_5466_);
v_val_5495_ = lean_ctor_get(v_decl_4889_, 0);
lean_inc_ref_n(v_val_5495_, 3);
lean_dec_ref_known(v_decl_4889_, 1);
v___f_5496_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6___boxed), 7, 2);
lean_closure_set(v___f_5496_, 0, v_val_5495_);
lean_closure_set(v___f_5496_, 1, v___f_5494_);
v___x_5497_ = lean_box(v___x_5469_);
lean_inc_ref(v___f_5496_);
v___f_5498_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7___boxed), 7, 3);
lean_closure_set(v___f_5498_, 0, v_val_5495_);
lean_closure_set(v___f_5498_, 1, v___x_5497_);
lean_closure_set(v___f_5498_, 2, v___f_5496_);
v___x_5499_ = lean_st_ref_get(v_a_4892_);
if (v_forceExpose_4890_ == 0)
{
lean_object* v_env_5500_; 
v_env_5500_ = lean_ctor_get(v___x_5499_, 0);
lean_inc_ref(v_env_5500_);
lean_dec(v___x_5499_);
v___y_5358_ = v___x_5470_;
v___y_5359_ = v_val_5495_;
v___y_5360_ = v___x_5490_;
v___y_5361_ = v___f_5496_;
v___y_5362_ = v_env_5500_;
v___y_5363_ = v___f_5498_;
v___y_5364_ = v_a_5464_;
goto v___jp_5357_;
}
else
{
if (v___x_5469_ == 0)
{
lean_dec(v___x_5499_);
lean_dec_ref(v___f_5498_);
lean_dec_ref(v_val_5495_);
v___y_5351_ = v___x_5470_;
v___y_5352_ = v___x_5490_;
v___y_5353_ = v___f_5496_;
v___y_5354_ = v_a_5464_;
goto v___jp_5350_;
}
else
{
lean_object* v_env_5501_; 
v_env_5501_ = lean_ctor_get(v___x_5499_, 0);
lean_inc_ref(v_env_5501_);
lean_dec(v___x_5499_);
v___y_5358_ = v___x_5470_;
v___y_5359_ = v_val_5495_;
v___y_5360_ = v___x_5490_;
v___y_5361_ = v___f_5496_;
v___y_5362_ = v_env_5501_;
v___y_5363_ = v___f_5498_;
v___y_5364_ = v_a_5464_;
goto v___jp_5357_;
}
}
}
case 1:
{
lean_object* v_val_5502_; lean_object* v___x_5503_; 
lean_del_object(v___x_5466_);
v_val_5502_ = lean_ctor_get(v_decl_4889_, 0);
lean_inc_ref(v_val_5502_);
lean_dec_ref_known(v_decl_4889_, 1);
v___x_5503_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5(v___f_5494_, v___x_5469_, v_cls_5084_, v___x_5490_, v_forceExpose_4890_, v_val_5502_, v_a_4891_, v_a_4892_);
v___y_5331_ = v___x_5470_;
v___y_5332_ = v_a_5464_;
v___y_5333_ = v___x_5503_;
goto v___jp_5330_;
}
case 5:
{
lean_object* v_defns_5504_; 
lean_del_object(v___x_5466_);
v_defns_5504_ = lean_ctor_get(v_decl_4889_, 0);
if (lean_obj_tag(v_defns_5504_) == 1)
{
lean_object* v_tail_5505_; 
v_tail_5505_ = lean_ctor_get(v_defns_5504_, 1);
if (lean_obj_tag(v_tail_5505_) == 0)
{
lean_object* v_head_5506_; lean_object* v___x_5507_; 
lean_inc_ref(v_defns_5504_);
lean_dec_ref_known(v_decl_4889_, 1);
v_head_5506_ = lean_ctor_get(v_defns_5504_, 0);
lean_inc(v_head_5506_);
lean_dec_ref_known(v_defns_5504_, 2);
v___x_5507_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5(v___f_5494_, v___x_5469_, v_cls_5084_, v___x_5490_, v_forceExpose_4890_, v_head_5506_, v_a_4891_, v_a_4892_);
v___y_5331_ = v___x_5470_;
v___y_5332_ = v_a_5464_;
v___y_5333_ = v___x_5507_;
goto v___jp_5330_;
}
else
{
lean_object* v___x_5508_; 
lean_dec_ref(v___f_5494_);
lean_inc_ref(v_decl_4889_);
v___x_5508_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_4889_, v_forceExpose_4890_, v_cls_5084_, v_decl_4889_, v_a_4891_, v_a_4892_);
lean_dec_ref_known(v_decl_4889_, 1);
v___y_5331_ = v___x_5470_;
v___y_5332_ = v_a_5464_;
v___y_5333_ = v___x_5508_;
goto v___jp_5330_;
}
}
else
{
lean_object* v___x_5509_; 
lean_dec_ref(v___f_5494_);
lean_inc_ref(v_decl_4889_);
v___x_5509_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_4889_, v_forceExpose_4890_, v_cls_5084_, v_decl_4889_, v_a_4891_, v_a_4892_);
lean_dec_ref_known(v_decl_4889_, 1);
v___y_5331_ = v___x_5470_;
v___y_5332_ = v_a_5464_;
v___y_5333_ = v___x_5509_;
goto v___jp_5330_;
}
}
case 3:
{
lean_object* v_val_5510_; lean_object* v___f_5511_; lean_object* v___f_5512_; lean_object* v___x_5513_; lean_object* v_env_5514_; lean_object* v___x_5515_; 
lean_del_object(v___x_5466_);
v_val_5510_ = lean_ctor_get(v_decl_4889_, 0);
lean_inc_ref_n(v_val_5510_, 3);
lean_dec_ref_known(v_decl_4889_, 1);
v___f_5511_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8___boxed), 7, 2);
lean_closure_set(v___f_5511_, 0, v_val_5510_);
lean_closure_set(v___f_5511_, 1, v___f_5494_);
lean_inc_ref(v___f_5511_);
v___f_5512_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10___boxed), 6, 2);
lean_closure_set(v___f_5512_, 0, v_val_5510_);
lean_closure_set(v___f_5512_, 1, v___f_5511_);
v___x_5513_ = lean_st_ref_get(v_a_4892_);
v_env_5514_ = lean_ctor_get(v___x_5513_, 0);
lean_inc_ref(v_env_5514_);
lean_dec(v___x_5513_);
v___x_5515_ = lean_st_ref_get(v_a_4892_);
if (v_forceExpose_4890_ == 0)
{
lean_object* v_env_5516_; 
v_env_5516_ = lean_ctor_get(v___x_5515_, 0);
lean_inc_ref(v_env_5516_);
lean_dec(v___x_5515_);
v___y_5404_ = v___f_5511_;
v___y_5405_ = v___x_5470_;
v___y_5406_ = v_val_5510_;
v___y_5407_ = v___x_5490_;
v___y_5408_ = v_env_5514_;
v___y_5409_ = v___x_5469_;
v___y_5410_ = v___f_5512_;
v___y_5411_ = v_env_5516_;
v___y_5412_ = v_a_5464_;
goto v___jp_5403_;
}
else
{
if (v___x_5469_ == 0)
{
lean_dec(v___x_5515_);
lean_dec_ref(v_env_5514_);
lean_dec_ref(v___f_5512_);
lean_dec_ref(v_val_5510_);
v___y_5397_ = v___x_5470_;
v___y_5398_ = v___f_5511_;
v___y_5399_ = v___x_5490_;
v___y_5400_ = v_a_5464_;
goto v___jp_5396_;
}
else
{
lean_object* v_env_5517_; 
v_env_5517_ = lean_ctor_get(v___x_5515_, 0);
lean_inc_ref(v_env_5517_);
lean_dec(v___x_5515_);
v___y_5404_ = v___f_5511_;
v___y_5405_ = v___x_5470_;
v___y_5406_ = v_val_5510_;
v___y_5407_ = v___x_5490_;
v___y_5408_ = v_env_5514_;
v___y_5409_ = v___x_5469_;
v___y_5410_ = v___f_5512_;
v___y_5411_ = v_env_5517_;
v___y_5412_ = v_a_5464_;
goto v___jp_5403_;
}
}
}
case 0:
{
lean_object* v_val_5518_; lean_object* v_toConstantVal_5519_; lean_object* v_name_5520_; lean_object* v___x_5522_; 
lean_dec_ref(v___f_5494_);
v_val_5518_ = lean_ctor_get(v_decl_4889_, 0);
v_toConstantVal_5519_ = lean_ctor_get(v_val_5518_, 0);
v_name_5520_ = lean_ctor_get(v_toConstantVal_5519_, 0);
lean_inc_ref(v_val_5518_);
if (v_isShared_5467_ == 0)
{
lean_ctor_set(v___x_5466_, 0, v_val_5518_);
v___x_5522_ = v___x_5466_;
goto v_reusejp_5521_;
}
else
{
lean_object* v_reuseFailAlloc_5528_; 
v_reuseFailAlloc_5528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5528_, 0, v_val_5518_);
v___x_5522_ = v_reuseFailAlloc_5528_;
goto v_reusejp_5521_;
}
v_reusejp_5521_:
{
uint8_t v___x_5523_; lean_object* v___x_5524_; lean_object* v___x_5525_; lean_object* v___x_5526_; lean_object* v___x_5527_; 
v___x_5523_ = 2;
v___x_5524_ = lean_box(v___x_5523_);
v___x_5525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5525_, 0, v___x_5522_);
lean_ctor_set(v___x_5525_, 1, v___x_5524_);
lean_inc(v_name_5520_);
v___x_5526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5526_, 0, v_name_5520_);
lean_ctor_set(v___x_5526_, 1, v___x_5525_);
v___x_5527_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9(v_decl_4889_, v_forceExpose_4890_, v_hasTrace_4949_, v___x_5469_, v___x_5486_, v_cls_5084_, v___x_5490_, v___x_5526_, v___x_5490_, v_a_4891_, v_a_4892_);
v___y_5331_ = v___x_5470_;
v___y_5332_ = v_a_5464_;
v___y_5333_ = v___x_5527_;
goto v___jp_5330_;
}
}
default: 
{
lean_object* v___x_5529_; 
lean_dec_ref(v___f_5494_);
lean_del_object(v___x_5466_);
lean_inc(v_decl_4889_);
v___x_5529_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_4889_, v_forceExpose_4890_, v_cls_5084_, v_decl_4889_, v_a_4891_, v_a_4892_);
lean_dec(v_decl_4889_);
v___y_5331_ = v___x_5470_;
v___y_5332_ = v_a_5464_;
v___y_5333_ = v___x_5529_;
goto v___jp_5330_;
}
}
}
}
}
else
{
lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v_env_5535_; lean_object* v_nextMacroScope_5536_; lean_object* v_ngen_5537_; lean_object* v_auxDeclNGen_5538_; lean_object* v_traceState_5539_; lean_object* v_recordedDeps_5540_; lean_object* v_messages_5541_; lean_object* v_infoState_5542_; lean_object* v_snapshotTasks_5543_; lean_object* v___x_5545_; uint8_t v_isShared_5546_; uint8_t v_isSharedCheck_5617_; 
v___x_5533_ = lean_io_get_num_heartbeats();
v___x_5534_ = lean_st_ref_take(v_a_4892_);
v_env_5535_ = lean_ctor_get(v___x_5534_, 0);
v_nextMacroScope_5536_ = lean_ctor_get(v___x_5534_, 1);
v_ngen_5537_ = lean_ctor_get(v___x_5534_, 2);
v_auxDeclNGen_5538_ = lean_ctor_get(v___x_5534_, 3);
v_traceState_5539_ = lean_ctor_get(v___x_5534_, 4);
v_recordedDeps_5540_ = lean_ctor_get(v___x_5534_, 6);
v_messages_5541_ = lean_ctor_get(v___x_5534_, 7);
v_infoState_5542_ = lean_ctor_get(v___x_5534_, 8);
v_snapshotTasks_5543_ = lean_ctor_get(v___x_5534_, 9);
v_isSharedCheck_5617_ = !lean_is_exclusive(v___x_5534_);
if (v_isSharedCheck_5617_ == 0)
{
lean_object* v_unused_5618_; 
v_unused_5618_ = lean_ctor_get(v___x_5534_, 5);
lean_dec(v_unused_5618_);
v___x_5545_ = v___x_5534_;
v_isShared_5546_ = v_isSharedCheck_5617_;
goto v_resetjp_5544_;
}
else
{
lean_inc(v_snapshotTasks_5543_);
lean_inc(v_infoState_5542_);
lean_inc(v_messages_5541_);
lean_inc(v_recordedDeps_5540_);
lean_inc(v_traceState_5539_);
lean_inc(v_auxDeclNGen_5538_);
lean_inc(v_ngen_5537_);
lean_inc(v_nextMacroScope_5536_);
lean_inc(v_env_5535_);
lean_dec(v___x_5534_);
v___x_5545_ = lean_box(0);
v_isShared_5546_ = v_isSharedCheck_5617_;
goto v_resetjp_5544_;
}
v_resetjp_5544_:
{
lean_object* v___x_5547_; lean_object* v___x_5548_; lean_object* v___x_5549_; lean_object* v___x_5551_; 
lean_inc(v_decl_4889_);
v___x_5547_ = l_Lean_Declaration_getNames(v_decl_4889_);
v___x_5548_ = l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(v_env_5535_, v___x_5547_);
v___x_5549_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_5546_ == 0)
{
lean_ctor_set(v___x_5545_, 5, v___x_5549_);
lean_ctor_set(v___x_5545_, 0, v___x_5548_);
v___x_5551_ = v___x_5545_;
goto v_reusejp_5550_;
}
else
{
lean_object* v_reuseFailAlloc_5616_; 
v_reuseFailAlloc_5616_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5616_, 0, v___x_5548_);
lean_ctor_set(v_reuseFailAlloc_5616_, 1, v_nextMacroScope_5536_);
lean_ctor_set(v_reuseFailAlloc_5616_, 2, v_ngen_5537_);
lean_ctor_set(v_reuseFailAlloc_5616_, 3, v_auxDeclNGen_5538_);
lean_ctor_set(v_reuseFailAlloc_5616_, 4, v_traceState_5539_);
lean_ctor_set(v_reuseFailAlloc_5616_, 5, v___x_5549_);
lean_ctor_set(v_reuseFailAlloc_5616_, 6, v_recordedDeps_5540_);
lean_ctor_set(v_reuseFailAlloc_5616_, 7, v_messages_5541_);
lean_ctor_set(v_reuseFailAlloc_5616_, 8, v_infoState_5542_);
lean_ctor_set(v_reuseFailAlloc_5616_, 9, v_snapshotTasks_5543_);
v___x_5551_ = v_reuseFailAlloc_5616_;
goto v_reusejp_5550_;
}
v_reusejp_5550_:
{
lean_object* v___x_5552_; lean_object* v___x_5553_; lean_object* v___x_5554_; lean_object* v___x_5555_; lean_object* v___f_5556_; 
v___x_5552_ = lean_st_ref_put(v_a_4892_, v___x_5551_);
v___x_5553_ = lean_box(0);
v___x_5554_ = lean_box(v_forceExpose_4890_);
v___x_5555_ = lean_box(v___x_5469_);
lean_inc(v_decl_4889_);
v___f_5556_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14___boxed), 11, 6);
lean_closure_set(v___f_5556_, 0, v_decl_4889_);
lean_closure_set(v___f_5556_, 1, v___x_5554_);
lean_closure_set(v___f_5556_, 2, v___x_5555_);
lean_closure_set(v___f_5556_, 3, v_cls_5084_);
lean_closure_set(v___f_5556_, 4, v___x_5549_);
lean_closure_set(v___f_5556_, 5, v___x_5553_);
switch(lean_obj_tag(v_decl_4889_))
{
case 2:
{
lean_object* v_val_5557_; lean_object* v___f_5558_; lean_object* v___x_5559_; 
lean_del_object(v___x_5466_);
v_val_5557_ = lean_ctor_get(v_decl_4889_, 0);
lean_inc_ref_n(v_val_5557_, 2);
lean_dec_ref_known(v_decl_4889_, 1);
v___f_5558_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6___boxed), 7, 2);
lean_closure_set(v___f_5558_, 0, v_val_5557_);
lean_closure_set(v___f_5558_, 1, v___f_5556_);
v___x_5559_ = lean_st_ref_get(v_a_4892_);
if (v_forceExpose_4890_ == 0)
{
if (v___x_5469_ == 0)
{
lean_dec(v___x_5559_);
lean_dec_ref(v_val_5557_);
v___y_5456_ = v___x_5553_;
v___y_5457_ = v___x_5533_;
v___y_5458_ = v___f_5558_;
v___y_5459_ = v_a_5464_;
goto v___jp_5455_;
}
else
{
lean_object* v_env_5560_; lean_object* v___x_5561_; uint8_t v_isModule_5562_; 
v_env_5560_ = lean_ctor_get(v___x_5559_, 0);
lean_inc_ref(v_env_5560_);
lean_dec(v___x_5559_);
v___x_5561_ = l_Lean_Environment_header(v_env_5560_);
lean_dec_ref(v_env_5560_);
v_isModule_5562_ = lean_ctor_get_uint8(v___x_5561_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_5561_);
if (v_isModule_5562_ == 0)
{
lean_dec_ref(v_val_5557_);
v___y_5456_ = v___x_5553_;
v___y_5457_ = v___x_5533_;
v___y_5458_ = v___f_5558_;
v___y_5459_ = v_a_5464_;
goto v___jp_5455_;
}
else
{
if (v___x_5314_ == 0)
{
lean_object* v___x_5563_; lean_object* v___x_5564_; 
v___x_5563_ = lean_box(0);
v___x_5564_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13(v_val_5557_, v___f_5558_, v___x_5563_, v_a_4891_, v_a_4892_);
lean_dec_ref(v_val_5557_);
v___y_5429_ = v___x_5533_;
v___y_5430_ = v_a_5464_;
v___y_5431_ = v___x_5564_;
goto v___jp_5428_;
}
else
{
lean_object* v_toConstantVal_5565_; lean_object* v_name_5566_; lean_object* v___x_5567_; lean_object* v___x_5568_; lean_object* v___x_5569_; lean_object* v___x_5570_; lean_object* v___x_5571_; lean_object* v___x_5572_; 
v_toConstantVal_5565_ = lean_ctor_get(v_val_5557_, 0);
v_name_5566_ = lean_ctor_get(v_toConstantVal_5565_, 0);
v___x_5567_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2);
lean_inc(v_name_5566_);
v___x_5568_ = l_Lean_MessageData_ofName(v_name_5566_);
v___x_5569_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5569_, 0, v___x_5567_);
lean_ctor_set(v___x_5569_, 1, v___x_5568_);
v___x_5570_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_5571_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5571_, 0, v___x_5569_);
lean_ctor_set(v___x_5571_, 1, v___x_5570_);
v___x_5572_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_5084_, v___x_5571_, v_a_4891_, v_a_4892_);
if (lean_obj_tag(v___x_5572_) == 0)
{
lean_object* v_a_5573_; lean_object* v___x_5574_; 
v_a_5573_ = lean_ctor_get(v___x_5572_, 0);
lean_inc(v_a_5573_);
lean_dec_ref_known(v___x_5572_, 1);
v___x_5574_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13(v_val_5557_, v___f_5558_, v_a_5573_, v_a_4891_, v_a_4892_);
lean_dec_ref(v_val_5557_);
v___y_5429_ = v___x_5533_;
v___y_5430_ = v_a_5464_;
v___y_5431_ = v___x_5574_;
goto v___jp_5428_;
}
else
{
lean_dec_ref(v___f_5558_);
lean_dec_ref(v_val_5557_);
v___y_5429_ = v___x_5533_;
v___y_5430_ = v_a_5464_;
v___y_5431_ = v___x_5572_;
goto v___jp_5428_;
}
}
}
}
}
else
{
lean_dec(v___x_5559_);
lean_dec_ref(v_val_5557_);
v___y_5456_ = v___x_5553_;
v___y_5457_ = v___x_5533_;
v___y_5458_ = v___f_5558_;
v___y_5459_ = v_a_5464_;
goto v___jp_5455_;
}
}
case 1:
{
lean_object* v_val_5575_; lean_object* v___x_5576_; 
lean_del_object(v___x_5466_);
v_val_5575_ = lean_ctor_get(v_decl_4889_, 0);
lean_inc_ref(v_val_5575_);
lean_dec_ref_known(v_decl_4889_, 1);
v___x_5576_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11(v___f_5556_, v_forceExpose_4890_, v___x_5469_, v___x_5553_, v_cls_5084_, v_val_5575_, v_a_4891_, v_a_4892_);
v___y_5429_ = v___x_5533_;
v___y_5430_ = v_a_5464_;
v___y_5431_ = v___x_5576_;
goto v___jp_5428_;
}
case 5:
{
lean_object* v_defns_5577_; 
lean_del_object(v___x_5466_);
v_defns_5577_ = lean_ctor_get(v_decl_4889_, 0);
if (lean_obj_tag(v_defns_5577_) == 1)
{
lean_object* v_tail_5578_; 
v_tail_5578_ = lean_ctor_get(v_defns_5577_, 1);
if (lean_obj_tag(v_tail_5578_) == 0)
{
lean_object* v_head_5579_; lean_object* v___x_5580_; 
lean_inc_ref(v_defns_5577_);
lean_dec_ref_known(v_decl_4889_, 1);
v_head_5579_ = lean_ctor_get(v_defns_5577_, 0);
lean_inc(v_head_5579_);
lean_dec_ref_known(v_defns_5577_, 2);
v___x_5580_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11(v___f_5556_, v_forceExpose_4890_, v___x_5469_, v___x_5553_, v_cls_5084_, v_head_5579_, v_a_4891_, v_a_4892_);
v___y_5429_ = v___x_5533_;
v___y_5430_ = v_a_5464_;
v___y_5431_ = v___x_5580_;
goto v___jp_5428_;
}
else
{
lean_object* v___x_5581_; 
lean_dec_ref(v___f_5556_);
lean_inc_ref(v_decl_4889_);
v___x_5581_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_4889_, v_forceExpose_4890_, v_cls_5084_, v_decl_4889_, v_a_4891_, v_a_4892_);
lean_dec_ref_known(v_decl_4889_, 1);
v___y_5429_ = v___x_5533_;
v___y_5430_ = v_a_5464_;
v___y_5431_ = v___x_5581_;
goto v___jp_5428_;
}
}
else
{
lean_object* v___x_5582_; 
lean_dec_ref(v___f_5556_);
lean_inc_ref(v_decl_4889_);
v___x_5582_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_4889_, v_forceExpose_4890_, v_cls_5084_, v_decl_4889_, v_a_4891_, v_a_4892_);
lean_dec_ref_known(v_decl_4889_, 1);
v___y_5429_ = v___x_5533_;
v___y_5430_ = v_a_5464_;
v___y_5431_ = v___x_5582_;
goto v___jp_5428_;
}
}
case 3:
{
lean_object* v_val_5583_; lean_object* v___f_5584_; lean_object* v___x_5585_; lean_object* v_env_5586_; lean_object* v___x_5587_; 
lean_del_object(v___x_5466_);
v_val_5583_ = lean_ctor_get(v_decl_4889_, 0);
lean_inc_ref_n(v_val_5583_, 2);
lean_dec_ref_known(v_decl_4889_, 1);
v___f_5584_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8___boxed), 7, 2);
lean_closure_set(v___f_5584_, 0, v_val_5583_);
lean_closure_set(v___f_5584_, 1, v___f_5556_);
v___x_5585_ = lean_st_ref_get(v_a_4892_);
v_env_5586_ = lean_ctor_get(v___x_5585_, 0);
lean_inc_ref(v_env_5586_);
lean_dec(v___x_5585_);
v___x_5587_ = lean_st_ref_get(v_a_4892_);
if (v_forceExpose_4890_ == 0)
{
if (v___x_5469_ == 0)
{
lean_dec(v___x_5587_);
lean_dec_ref(v_env_5586_);
lean_dec_ref(v_val_5583_);
v___y_5449_ = v___x_5553_;
v___y_5450_ = v___x_5533_;
v___y_5451_ = v___f_5584_;
v___y_5452_ = v_a_5464_;
goto v___jp_5448_;
}
else
{
lean_object* v_env_5588_; lean_object* v___x_5589_; uint8_t v_isModule_5590_; 
v_env_5588_ = lean_ctor_get(v___x_5587_, 0);
lean_inc_ref(v_env_5588_);
lean_dec(v___x_5587_);
v___x_5589_ = l_Lean_Environment_header(v_env_5586_);
lean_dec_ref(v_env_5586_);
v_isModule_5590_ = lean_ctor_get_uint8(v___x_5589_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_5589_);
if (v_isModule_5590_ == 0)
{
lean_dec_ref(v_env_5588_);
lean_dec_ref(v_val_5583_);
v___y_5449_ = v___x_5553_;
v___y_5450_ = v___x_5533_;
v___y_5451_ = v___f_5584_;
v___y_5452_ = v_a_5464_;
goto v___jp_5448_;
}
else
{
uint8_t v_isExporting_5591_; 
v_isExporting_5591_ = lean_ctor_get_uint8(v_env_5588_, sizeof(void*)*13);
lean_dec_ref(v_env_5588_);
if (v_isExporting_5591_ == 0)
{
if (v___x_5314_ == 0)
{
lean_object* v___x_5592_; lean_object* v___x_5593_; 
v___x_5592_ = lean_box(0);
v___x_5593_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(v_val_5583_, v___f_5584_, v___x_5592_, v_a_4891_, v_a_4892_);
lean_dec_ref(v_val_5583_);
v___y_5429_ = v___x_5533_;
v___y_5430_ = v_a_5464_;
v___y_5431_ = v___x_5593_;
goto v___jp_5428_;
}
else
{
lean_object* v_toConstantVal_5594_; lean_object* v_name_5595_; lean_object* v___x_5596_; lean_object* v___x_5597_; lean_object* v___x_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; 
v_toConstantVal_5594_ = lean_ctor_get(v_val_5583_, 0);
v_name_5595_ = lean_ctor_get(v_toConstantVal_5594_, 0);
v___x_5596_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4);
lean_inc(v_name_5595_);
v___x_5597_ = l_Lean_MessageData_ofName(v_name_5595_);
v___x_5598_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5598_, 0, v___x_5596_);
lean_ctor_set(v___x_5598_, 1, v___x_5597_);
v___x_5599_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_5600_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5600_, 0, v___x_5598_);
lean_ctor_set(v___x_5600_, 1, v___x_5599_);
v___x_5601_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_5084_, v___x_5600_, v_a_4891_, v_a_4892_);
if (lean_obj_tag(v___x_5601_) == 0)
{
lean_object* v_a_5602_; lean_object* v___x_5603_; 
v_a_5602_ = lean_ctor_get(v___x_5601_, 0);
lean_inc(v_a_5602_);
lean_dec_ref_known(v___x_5601_, 1);
v___x_5603_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(v_val_5583_, v___f_5584_, v_a_5602_, v_a_4891_, v_a_4892_);
lean_dec_ref(v_val_5583_);
v___y_5429_ = v___x_5533_;
v___y_5430_ = v_a_5464_;
v___y_5431_ = v___x_5603_;
goto v___jp_5428_;
}
else
{
lean_dec_ref(v___f_5584_);
lean_dec_ref(v_val_5583_);
v___y_5429_ = v___x_5533_;
v___y_5430_ = v_a_5464_;
v___y_5431_ = v___x_5601_;
goto v___jp_5428_;
}
}
}
else
{
lean_dec_ref(v_val_5583_);
v___y_5449_ = v___x_5553_;
v___y_5450_ = v___x_5533_;
v___y_5451_ = v___f_5584_;
v___y_5452_ = v_a_5464_;
goto v___jp_5448_;
}
}
}
}
else
{
lean_dec(v___x_5587_);
lean_dec_ref(v_env_5586_);
lean_dec_ref(v_val_5583_);
v___y_5449_ = v___x_5553_;
v___y_5450_ = v___x_5533_;
v___y_5451_ = v___f_5584_;
v___y_5452_ = v_a_5464_;
goto v___jp_5448_;
}
}
case 0:
{
lean_object* v_val_5604_; lean_object* v_toConstantVal_5605_; lean_object* v_name_5606_; lean_object* v___x_5608_; 
lean_dec_ref(v___f_5556_);
v_val_5604_ = lean_ctor_get(v_decl_4889_, 0);
v_toConstantVal_5605_ = lean_ctor_get(v_val_5604_, 0);
v_name_5606_ = lean_ctor_get(v_toConstantVal_5605_, 0);
lean_inc_ref(v_val_5604_);
if (v_isShared_5467_ == 0)
{
lean_ctor_set(v___x_5466_, 0, v_val_5604_);
v___x_5608_ = v___x_5466_;
goto v_reusejp_5607_;
}
else
{
lean_object* v_reuseFailAlloc_5614_; 
v_reuseFailAlloc_5614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5614_, 0, v_val_5604_);
v___x_5608_ = v_reuseFailAlloc_5614_;
goto v_reusejp_5607_;
}
v_reusejp_5607_:
{
uint8_t v___x_5609_; lean_object* v___x_5610_; lean_object* v___x_5611_; lean_object* v___x_5612_; lean_object* v___x_5613_; 
v___x_5609_ = 2;
v___x_5610_ = lean_box(v___x_5609_);
v___x_5611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5611_, 0, v___x_5608_);
lean_ctor_set(v___x_5611_, 1, v___x_5610_);
lean_inc(v_name_5606_);
v___x_5612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5612_, 0, v_name_5606_);
lean_ctor_set(v___x_5612_, 1, v___x_5611_);
v___x_5613_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14(v_decl_4889_, v_forceExpose_4890_, v___x_5469_, v_cls_5084_, v___x_5549_, v___x_5553_, v___x_5612_, v___x_5553_, v_a_4891_, v_a_4892_);
v___y_5429_ = v___x_5533_;
v___y_5430_ = v_a_5464_;
v___y_5431_ = v___x_5613_;
goto v___jp_5428_;
}
}
default: 
{
lean_object* v___x_5615_; 
lean_dec_ref(v___f_5556_);
lean_del_object(v___x_5466_);
lean_inc(v_decl_4889_);
v___x_5615_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_4889_, v_forceExpose_4890_, v_cls_5084_, v_decl_4889_, v_a_4891_, v_a_4892_);
lean_dec(v_decl_4889_);
v___y_5429_ = v___x_5533_;
v___y_5430_ = v_a_5464_;
v___y_5431_ = v___x_5615_;
goto v___jp_5428_;
}
}
}
}
}
}
}
}
v___jp_4894_:
{
lean_object* v___x_4898_; lean_object* v___x_4900_; uint8_t v_isShared_4901_; uint8_t v_isSharedCheck_4905_; 
v___x_4898_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4896_, v___y_4895_);
v_isSharedCheck_4905_ = !lean_is_exclusive(v___x_4898_);
if (v_isSharedCheck_4905_ == 0)
{
lean_object* v_unused_4906_; 
v_unused_4906_ = lean_ctor_get(v___x_4898_, 0);
lean_dec(v_unused_4906_);
v___x_4900_ = v___x_4898_;
v_isShared_4901_ = v_isSharedCheck_4905_;
goto v_resetjp_4899_;
}
else
{
lean_dec(v___x_4898_);
v___x_4900_ = lean_box(0);
v_isShared_4901_ = v_isSharedCheck_4905_;
goto v_resetjp_4899_;
}
v_resetjp_4899_:
{
lean_object* v___x_4903_; 
if (v_isShared_4901_ == 0)
{
lean_ctor_set(v___x_4900_, 0, v_a_4897_);
v___x_4903_ = v___x_4900_;
goto v_reusejp_4902_;
}
else
{
lean_object* v_reuseFailAlloc_4904_; 
v_reuseFailAlloc_4904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4904_, 0, v_a_4897_);
v___x_4903_ = v_reuseFailAlloc_4904_;
goto v_reusejp_4902_;
}
v_reusejp_4902_:
{
return v___x_4903_;
}
}
}
v___jp_4907_:
{
lean_object* v___x_4911_; lean_object* v___x_4913_; uint8_t v_isShared_4914_; uint8_t v_isSharedCheck_4918_; 
v___x_4911_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4909_, v___y_4908_);
v_isSharedCheck_4918_ = !lean_is_exclusive(v___x_4911_);
if (v_isSharedCheck_4918_ == 0)
{
lean_object* v_unused_4919_; 
v_unused_4919_ = lean_ctor_get(v___x_4911_, 0);
lean_dec(v_unused_4919_);
v___x_4913_ = v___x_4911_;
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
else
{
lean_dec(v___x_4911_);
v___x_4913_ = lean_box(0);
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
v_resetjp_4912_:
{
lean_object* v___x_4916_; 
if (v_isShared_4914_ == 0)
{
lean_ctor_set_tag(v___x_4913_, 1);
lean_ctor_set(v___x_4913_, 0, v_a_4910_);
v___x_4916_ = v___x_4913_;
goto v_reusejp_4915_;
}
else
{
lean_object* v_reuseFailAlloc_4917_; 
v_reuseFailAlloc_4917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4917_, 0, v_a_4910_);
v___x_4916_ = v_reuseFailAlloc_4917_;
goto v_reusejp_4915_;
}
v_reusejp_4915_:
{
return v___x_4916_;
}
}
}
v___jp_4920_:
{
lean_object* v___x_4924_; lean_object* v___x_4926_; uint8_t v_isShared_4927_; uint8_t v_isSharedCheck_4931_; 
v___x_4924_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4922_, v___y_4921_);
v_isSharedCheck_4931_ = !lean_is_exclusive(v___x_4924_);
if (v_isSharedCheck_4931_ == 0)
{
lean_object* v_unused_4932_; 
v_unused_4932_ = lean_ctor_get(v___x_4924_, 0);
lean_dec(v_unused_4932_);
v___x_4926_ = v___x_4924_;
v_isShared_4927_ = v_isSharedCheck_4931_;
goto v_resetjp_4925_;
}
else
{
lean_dec(v___x_4924_);
v___x_4926_ = lean_box(0);
v_isShared_4927_ = v_isSharedCheck_4931_;
goto v_resetjp_4925_;
}
v_resetjp_4925_:
{
lean_object* v___x_4929_; 
if (v_isShared_4927_ == 0)
{
lean_ctor_set(v___x_4926_, 0, v_a_4923_);
v___x_4929_ = v___x_4926_;
goto v_reusejp_4928_;
}
else
{
lean_object* v_reuseFailAlloc_4930_; 
v_reuseFailAlloc_4930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4930_, 0, v_a_4923_);
v___x_4929_ = v_reuseFailAlloc_4930_;
goto v_reusejp_4928_;
}
v_reusejp_4928_:
{
return v___x_4929_;
}
}
}
v___jp_4933_:
{
lean_object* v___x_4937_; lean_object* v___x_4939_; uint8_t v_isShared_4940_; uint8_t v_isSharedCheck_4944_; 
v___x_4937_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4935_, v___y_4934_);
v_isSharedCheck_4944_ = !lean_is_exclusive(v___x_4937_);
if (v_isSharedCheck_4944_ == 0)
{
lean_object* v_unused_4945_; 
v_unused_4945_ = lean_ctor_get(v___x_4937_, 0);
lean_dec(v_unused_4945_);
v___x_4939_ = v___x_4937_;
v_isShared_4940_ = v_isSharedCheck_4944_;
goto v_resetjp_4938_;
}
else
{
lean_dec(v___x_4937_);
v___x_4939_ = lean_box(0);
v_isShared_4940_ = v_isSharedCheck_4944_;
goto v_resetjp_4938_;
}
v_resetjp_4938_:
{
lean_object* v___x_4942_; 
if (v_isShared_4940_ == 0)
{
lean_ctor_set_tag(v___x_4939_, 1);
lean_ctor_set(v___x_4939_, 0, v_a_4936_);
v___x_4942_ = v___x_4939_;
goto v_reusejp_4941_;
}
else
{
lean_object* v_reuseFailAlloc_4943_; 
v_reuseFailAlloc_4943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4943_, 0, v_a_4936_);
v___x_4942_ = v_reuseFailAlloc_4943_;
goto v_reusejp_4941_;
}
v_reusejp_4941_:
{
return v___x_4942_;
}
}
}
v___jp_4950_:
{
lean_object* v___x_4963_; 
lean_inc_ref(v___y_4951_);
v___x_4963_ = l_Lean_Environment_AddConstAsyncResult_commitConst(v___y_4954_, v___y_4951_, v___y_4961_, v___y_4962_);
if (lean_obj_tag(v___x_4963_) == 0)
{
lean_object* v___x_4964_; lean_object* v___x_4966_; uint8_t v_isShared_4967_; uint8_t v_isSharedCheck_5010_; 
lean_dec_ref_known(v___x_4963_, 1);
lean_dec(v___y_4952_);
lean_inc_ref(v___y_4957_);
v___x_4964_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4957_, v___y_4955_);
v_isSharedCheck_5010_ = !lean_is_exclusive(v___x_4964_);
if (v_isSharedCheck_5010_ == 0)
{
lean_object* v_unused_5011_; 
v_unused_5011_ = lean_ctor_get(v___x_4964_, 0);
lean_dec(v_unused_5011_);
v___x_4966_ = v___x_4964_;
v_isShared_4967_ = v_isSharedCheck_5010_;
goto v_resetjp_4965_;
}
else
{
lean_dec(v___x_4964_);
v___x_4966_ = lean_box(0);
v_isShared_4967_ = v_isSharedCheck_5010_;
goto v_resetjp_4965_;
}
v_resetjp_4965_:
{
lean_object* v___x_4968_; lean_object* v___x_4969_; uint8_t v___x_4970_; 
v___x_4968_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4958_);
v___x_4969_ = l_Lean_Elab_async;
v___x_4970_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v___x_4968_, v___x_4969_);
lean_dec_ref(v___x_4968_);
if (v___x_4970_ == 0)
{
lean_object* v___x_4971_; lean_object* v_r_4972_; 
lean_del_object(v___x_4966_);
lean_dec_ref(v___y_4960_);
lean_dec_ref(v___y_4959_);
v___x_4971_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4951_, v___y_4955_);
lean_dec_ref(v___x_4971_);
v_r_4972_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_4889_, v_forceExpose_4890_, v___y_4958_, v___y_4955_);
if (lean_obj_tag(v_r_4972_) == 0)
{
lean_object* v_a_4973_; lean_object* v___x_4975_; uint8_t v_isShared_4976_; uint8_t v_isSharedCheck_4982_; 
v_a_4973_ = lean_ctor_get(v_r_4972_, 0);
v_isSharedCheck_4982_ = !lean_is_exclusive(v_r_4972_);
if (v_isSharedCheck_4982_ == 0)
{
v___x_4975_ = v_r_4972_;
v_isShared_4976_ = v_isSharedCheck_4982_;
goto v_resetjp_4974_;
}
else
{
lean_inc(v_a_4973_);
lean_dec(v_r_4972_);
v___x_4975_ = lean_box(0);
v_isShared_4976_ = v_isSharedCheck_4982_;
goto v_resetjp_4974_;
}
v_resetjp_4974_:
{
lean_object* v___x_4978_; 
lean_inc(v_a_4973_);
if (v_isShared_4976_ == 0)
{
lean_ctor_set_tag(v___x_4975_, 1);
v___x_4978_ = v___x_4975_;
goto v_reusejp_4977_;
}
else
{
lean_object* v_reuseFailAlloc_4981_; 
v_reuseFailAlloc_4981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4981_, 0, v_a_4973_);
v___x_4978_ = v_reuseFailAlloc_4981_;
goto v_reusejp_4977_;
}
v_reusejp_4977_:
{
lean_object* v___x_4979_; 
v___x_4979_ = lean_apply_2(v___y_4956_, v___x_4978_, lean_box(0));
if (lean_obj_tag(v___x_4979_) == 0)
{
lean_dec_ref_known(v___x_4979_, 1);
v___y_4921_ = v___y_4955_;
v___y_4922_ = v___y_4957_;
v_a_4923_ = v_a_4973_;
goto v___jp_4920_;
}
else
{
lean_object* v_a_4980_; 
lean_dec(v_a_4973_);
v_a_4980_ = lean_ctor_get(v___x_4979_, 0);
lean_inc(v_a_4980_);
lean_dec_ref_known(v___x_4979_, 1);
v___y_4934_ = v___y_4955_;
v___y_4935_ = v___y_4957_;
v_a_4936_ = v_a_4980_;
goto v___jp_4933_;
}
}
}
}
else
{
lean_object* v_a_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; 
v_a_4983_ = lean_ctor_get(v_r_4972_, 0);
lean_inc(v_a_4983_);
lean_dec_ref_known(v_r_4972_, 1);
v___x_4984_ = lean_box(0);
v___x_4985_ = lean_apply_2(v___y_4956_, v___x_4984_, lean_box(0));
if (lean_obj_tag(v___x_4985_) == 0)
{
lean_dec_ref_known(v___x_4985_, 1);
v___y_4934_ = v___y_4955_;
v___y_4935_ = v___y_4957_;
v_a_4936_ = v_a_4983_;
goto v___jp_4933_;
}
else
{
lean_object* v_a_4986_; 
lean_dec(v_a_4983_);
v_a_4986_ = lean_ctor_get(v___x_4985_, 0);
lean_inc(v_a_4986_);
lean_dec_ref_known(v___x_4985_, 1);
v___y_4934_ = v___y_4955_;
v___y_4935_ = v___y_4957_;
v_a_4936_ = v_a_4986_;
goto v___jp_4933_;
}
}
}
else
{
lean_object* v___x_4987_; lean_object* v___x_4989_; 
lean_dec_ref(v___y_4957_);
lean_dec_ref(v___y_4956_);
lean_dec_ref(v___y_4951_);
lean_dec(v_decl_4889_);
v___x_4987_ = l_IO_CancelToken_new();
if (v_isShared_4967_ == 0)
{
lean_ctor_set_tag(v___x_4966_, 1);
lean_ctor_set(v___x_4966_, 0, v___x_4987_);
v___x_4989_ = v___x_4966_;
goto v_reusejp_4988_;
}
else
{
lean_object* v_reuseFailAlloc_5009_; 
v_reuseFailAlloc_5009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5009_, 0, v___x_4987_);
v___x_4989_ = v_reuseFailAlloc_5009_;
goto v_reusejp_4988_;
}
v_reusejp_4988_:
{
lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; 
v___x_4990_ = lean_unsigned_to_nat(0u);
v___x_4991_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1));
v___x_4992_ = l_Lean_Name_toString(v___x_4991_, v___y_4953_);
lean_inc_ref(v___x_4989_);
v___x_4993_ = l_Lean_Core_wrapAsyncAsSnapshot___redArg(v___y_4959_, v___x_4989_, v___x_4992_, v___y_4958_, v___y_4955_);
if (lean_obj_tag(v___x_4993_) == 0)
{
lean_object* v_a_4994_; lean_object* v_checked_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; lean_object* v___x_5000_; 
v_a_4994_ = lean_ctor_get(v___x_4993_, 0);
lean_inc(v_a_4994_);
lean_dec_ref_known(v___x_4993_, 1);
v_checked_4995_ = lean_ctor_get(v___y_4960_, 2);
lean_inc_ref(v_checked_4995_);
lean_dec_ref(v___y_4960_);
v___x_4996_ = lean_io_map_task(v_a_4994_, v_checked_4995_, v___x_4990_, v_hasTrace_4949_);
v___x_4997_ = lean_box(0);
v___x_4998_ = lean_box(2);
v___x_4999_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4999_, 0, v___x_4997_);
lean_ctor_set(v___x_4999_, 1, v___x_4998_);
lean_ctor_set(v___x_4999_, 2, v___x_4989_);
lean_ctor_set(v___x_4999_, 3, v___x_4996_);
v___x_5000_ = l_Lean_Core_logSnapshotTask___redArg(v___x_4999_, v___y_4955_);
return v___x_5000_;
}
else
{
lean_object* v_a_5001_; lean_object* v___x_5003_; uint8_t v_isShared_5004_; uint8_t v_isSharedCheck_5008_; 
lean_dec_ref(v___x_4989_);
lean_dec_ref(v___y_4960_);
v_a_5001_ = lean_ctor_get(v___x_4993_, 0);
v_isSharedCheck_5008_ = !lean_is_exclusive(v___x_4993_);
if (v_isSharedCheck_5008_ == 0)
{
v___x_5003_ = v___x_4993_;
v_isShared_5004_ = v_isSharedCheck_5008_;
goto v_resetjp_5002_;
}
else
{
lean_inc(v_a_5001_);
lean_dec(v___x_4993_);
v___x_5003_ = lean_box(0);
v_isShared_5004_ = v_isSharedCheck_5008_;
goto v_resetjp_5002_;
}
v_resetjp_5002_:
{
lean_object* v___x_5006_; 
if (v_isShared_5004_ == 0)
{
v___x_5006_ = v___x_5003_;
goto v_reusejp_5005_;
}
else
{
lean_object* v_reuseFailAlloc_5007_; 
v_reuseFailAlloc_5007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5007_, 0, v_a_5001_);
v___x_5006_ = v_reuseFailAlloc_5007_;
goto v_reusejp_5005_;
}
v_reusejp_5005_:
{
return v___x_5006_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5012_; lean_object* v___x_5014_; uint8_t v_isShared_5015_; uint8_t v_isSharedCheck_5023_; 
lean_dec_ref(v___y_4960_);
lean_dec_ref(v___y_4959_);
lean_dec_ref(v___y_4957_);
lean_dec_ref(v___y_4956_);
lean_dec_ref(v___y_4951_);
lean_dec(v_decl_4889_);
v_a_5012_ = lean_ctor_get(v___x_4963_, 0);
v_isSharedCheck_5023_ = !lean_is_exclusive(v___x_4963_);
if (v_isSharedCheck_5023_ == 0)
{
v___x_5014_ = v___x_4963_;
v_isShared_5015_ = v_isSharedCheck_5023_;
goto v_resetjp_5013_;
}
else
{
lean_inc(v_a_5012_);
lean_dec(v___x_4963_);
v___x_5014_ = lean_box(0);
v_isShared_5015_ = v_isSharedCheck_5023_;
goto v_resetjp_5013_;
}
v_resetjp_5013_:
{
lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; lean_object* v___x_5019_; lean_object* v___x_5021_; 
v___x_5016_ = lean_io_error_to_string(v_a_5012_);
v___x_5017_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5017_, 0, v___x_5016_);
v___x_5018_ = l_Lean_MessageData_ofFormat(v___x_5017_);
v___x_5019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5019_, 0, v___y_4952_);
lean_ctor_set(v___x_5019_, 1, v___x_5018_);
if (v_isShared_5015_ == 0)
{
lean_ctor_set(v___x_5014_, 0, v___x_5019_);
v___x_5021_ = v___x_5014_;
goto v_reusejp_5020_;
}
else
{
lean_object* v_reuseFailAlloc_5022_; 
v_reuseFailAlloc_5022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5022_, 0, v___x_5019_);
v___x_5021_ = v_reuseFailAlloc_5022_;
goto v_reusejp_5020_;
}
v_reusejp_5020_:
{
return v___x_5021_;
}
}
}
}
v___jp_5024_:
{
lean_object* v_ref_5033_; uint8_t v___x_5034_; lean_object* v___x_5035_; 
v_ref_5033_ = lean_ctor_get(v___y_5029_, 2);
v___x_5034_ = 1;
lean_inc_ref(v___y_5031_);
v___x_5035_ = l_Lean_Environment_addConstAsync(v___y_5031_, v___y_5025_, v___y_5030_, v___y_5032_, v_hasTrace_4949_, v___x_5034_);
if (lean_obj_tag(v___x_5035_) == 0)
{
lean_object* v_a_5036_; lean_object* v_mainEnv_5037_; lean_object* v_asyncEnv_5038_; lean_object* v___f_5039_; lean_object* v___x_5040_; lean_object* v___f_5041_; lean_object* v___x_5042_; 
v_a_5036_ = lean_ctor_get(v___x_5035_, 0);
lean_inc_n(v_a_5036_, 3);
lean_dec_ref_known(v___x_5035_, 1);
v_mainEnv_5037_ = lean_ctor_get(v_a_5036_, 0);
lean_inc_ref(v_mainEnv_5037_);
v_asyncEnv_5038_ = lean_ctor_get(v_a_5036_, 1);
lean_inc_ref_n(v_asyncEnv_5038_, 2);
lean_inc(v_ref_5033_);
lean_inc(v___y_5027_);
v___f_5039_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed), 5, 3);
lean_closure_set(v___f_5039_, 0, v___y_5027_);
lean_closure_set(v___f_5039_, 1, v_a_5036_);
lean_closure_set(v___f_5039_, 2, v_ref_5033_);
v___x_5040_ = lean_box(v_forceExpose_4890_);
lean_inc(v_decl_4889_);
v___f_5041_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed), 8, 4);
lean_closure_set(v___f_5041_, 0, v_a_5036_);
lean_closure_set(v___f_5041_, 1, v_asyncEnv_5038_);
lean_closure_set(v___f_5041_, 2, v_decl_4889_);
lean_closure_set(v___f_5041_, 3, v___x_5040_);
v___x_5042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5042_, 0, v___y_5026_);
if (lean_obj_tag(v___y_5028_) == 0)
{
lean_inc_ref(v___x_5042_);
lean_inc(v_ref_5033_);
v___y_4951_ = v_asyncEnv_5038_;
v___y_4952_ = v_ref_5033_;
v___y_4953_ = v___x_5034_;
v___y_4954_ = v_a_5036_;
v___y_4955_ = v___y_5027_;
v___y_4956_ = v___f_5039_;
v___y_4957_ = v_mainEnv_5037_;
v___y_4958_ = v___y_5029_;
v___y_4959_ = v___f_5041_;
v___y_4960_ = v___y_5031_;
v___y_4961_ = v___x_5042_;
v___y_4962_ = v___x_5042_;
goto v___jp_4950_;
}
else
{
lean_inc(v_ref_5033_);
v___y_4951_ = v_asyncEnv_5038_;
v___y_4952_ = v_ref_5033_;
v___y_4953_ = v___x_5034_;
v___y_4954_ = v_a_5036_;
v___y_4955_ = v___y_5027_;
v___y_4956_ = v___f_5039_;
v___y_4957_ = v_mainEnv_5037_;
v___y_4958_ = v___y_5029_;
v___y_4959_ = v___f_5041_;
v___y_4960_ = v___y_5031_;
v___y_4961_ = v___x_5042_;
v___y_4962_ = v___y_5028_;
goto v___jp_4950_;
}
}
else
{
lean_object* v_a_5043_; lean_object* v___x_5045_; uint8_t v_isShared_5046_; uint8_t v_isSharedCheck_5054_; 
lean_dec_ref(v___y_5031_);
lean_dec(v___y_5028_);
lean_dec_ref(v___y_5026_);
lean_dec(v_decl_4889_);
v_a_5043_ = lean_ctor_get(v___x_5035_, 0);
v_isSharedCheck_5054_ = !lean_is_exclusive(v___x_5035_);
if (v_isSharedCheck_5054_ == 0)
{
v___x_5045_ = v___x_5035_;
v_isShared_5046_ = v_isSharedCheck_5054_;
goto v_resetjp_5044_;
}
else
{
lean_inc(v_a_5043_);
lean_dec(v___x_5035_);
v___x_5045_ = lean_box(0);
v_isShared_5046_ = v_isSharedCheck_5054_;
goto v_resetjp_5044_;
}
v_resetjp_5044_:
{
lean_object* v___x_5047_; lean_object* v___x_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; lean_object* v___x_5052_; 
v___x_5047_ = lean_io_error_to_string(v_a_5043_);
v___x_5048_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5048_, 0, v___x_5047_);
v___x_5049_ = l_Lean_MessageData_ofFormat(v___x_5048_);
lean_inc(v_ref_5033_);
v___x_5050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5050_, 0, v_ref_5033_);
lean_ctor_set(v___x_5050_, 1, v___x_5049_);
if (v_isShared_5046_ == 0)
{
lean_ctor_set(v___x_5045_, 0, v___x_5050_);
v___x_5052_ = v___x_5045_;
goto v_reusejp_5051_;
}
else
{
lean_object* v_reuseFailAlloc_5053_; 
v_reuseFailAlloc_5053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5053_, 0, v___x_5050_);
v___x_5052_ = v_reuseFailAlloc_5053_;
goto v_reusejp_5051_;
}
v_reusejp_5051_:
{
return v___x_5052_;
}
}
}
}
v___jp_5055_:
{
lean_object* v___x_5062_; 
v___x_5062_ = lean_st_ref_get(v___y_5061_);
if (lean_obj_tag(v_exportedInfo_x3f_5059_) == 0)
{
lean_object* v_env_5063_; lean_object* v___x_5064_; 
v_env_5063_ = lean_ctor_get(v___x_5062_, 0);
lean_inc_ref(v_env_5063_);
lean_dec(v___x_5062_);
v___x_5064_ = lean_box(0);
v___y_5025_ = v___y_5057_;
v___y_5026_ = v___y_5056_;
v___y_5027_ = v___y_5061_;
v___y_5028_ = v_exportedInfo_x3f_5059_;
v___y_5029_ = v___y_5060_;
v___y_5030_ = v___y_5058_;
v___y_5031_ = v_env_5063_;
v___y_5032_ = v___x_5064_;
goto v___jp_5024_;
}
else
{
lean_object* v_env_5065_; lean_object* v_val_5066_; uint8_t v___x_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; 
v_env_5065_ = lean_ctor_get(v___x_5062_, 0);
lean_inc_ref(v_env_5065_);
lean_dec(v___x_5062_);
v_val_5066_ = lean_ctor_get(v_exportedInfo_x3f_5059_, 0);
v___x_5067_ = l_Lean_ConstantKind_ofConstantInfo(v_val_5066_);
v___x_5068_ = lean_box(v___x_5067_);
v___x_5069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5069_, 0, v___x_5068_);
v___y_5025_ = v___y_5057_;
v___y_5026_ = v___y_5056_;
v___y_5027_ = v___y_5061_;
v___y_5028_ = v_exportedInfo_x3f_5059_;
v___y_5029_ = v___y_5060_;
v___y_5030_ = v___y_5058_;
v___y_5031_ = v_env_5065_;
v___y_5032_ = v___x_5069_;
goto v___jp_5024_;
}
}
v___jp_5070_:
{
lean_object* v___x_5076_; 
lean_inc_ref(v___y_5071_);
v___x_5076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5076_, 0, v___y_5071_);
v___y_5056_ = v___y_5071_;
v___y_5057_ = v___y_5072_;
v___y_5058_ = v___y_5073_;
v_exportedInfo_x3f_5059_ = v___x_5076_;
v___y_5060_ = v___y_5074_;
v___y_5061_ = v___y_5075_;
goto v___jp_5055_;
}
v___jp_5077_:
{
lean_object* v___x_5083_; 
lean_inc_ref(v___y_5078_);
v___x_5083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5083_, 0, v___y_5078_);
v___y_5056_ = v___y_5078_;
v___y_5057_ = v___y_5079_;
v___y_5058_ = v___y_5080_;
v_exportedInfo_x3f_5059_ = v___x_5083_;
v___y_5060_ = v___y_5081_;
v___y_5061_ = v___y_5082_;
goto v___jp_5055_;
}
v___jp_5085_:
{
lean_object* v___x_5090_; uint8_t v___x_5091_; 
v___x_5090_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_5091_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5088_, v_options_5087_, v___x_5090_);
if (v___x_5091_ == 0)
{
lean_object* v___x_5092_; 
v___x_5092_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_4889_, v_forceExpose_4890_, v___y_5086_, v___y_5089_);
return v___x_5092_;
}
else
{
lean_object* v___x_5093_; lean_object* v___x_5094_; 
v___x_5093_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1);
v___x_5094_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_5084_, v___x_5093_, v___y_5086_, v___y_5089_);
if (lean_obj_tag(v___x_5094_) == 0)
{
lean_object* v___x_5095_; 
lean_dec_ref_known(v___x_5094_, 1);
v___x_5095_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_4889_, v_forceExpose_4890_, v___y_5086_, v___y_5089_);
return v___x_5095_;
}
else
{
lean_dec(v_decl_4889_);
return v___x_5094_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___boxed(lean_object* v_decl_5999_, lean_object* v_forceExpose_6000_, lean_object* v_a_6001_, lean_object* v_a_6002_, lean_object* v_a_6003_){
_start:
{
uint8_t v_forceExpose_boxed_6004_; lean_object* v_res_6005_; 
v_forceExpose_boxed_6004_ = lean_unbox(v_forceExpose_6000_);
v_res_6005_ = l___private_Lean_AddDecl_0__Lean_addDeclCore(v_decl_5999_, v_forceExpose_boxed_6004_, v_a_6001_, v_a_6002_);
lean_dec(v_a_6002_);
lean_dec_ref(v_a_6001_);
return v_res_6005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(lean_object* v_opt_6006_, lean_object* v___y_6007_, lean_object* v___y_6008_){
_start:
{
lean_object* v___x_6010_; 
v___x_6010_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2___redArg(v_opt_6006_, v___y_6007_);
return v___x_6010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2___boxed(lean_object* v_opt_6011_, lean_object* v___y_6012_, lean_object* v___y_6013_, lean_object* v___y_6014_){
_start:
{
lean_object* v_res_6015_; 
v_res_6015_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(v_opt_6011_, v___y_6012_, v___y_6013_);
lean_dec(v___y_6013_);
lean_dec_ref(v___y_6012_);
lean_dec_ref(v_opt_6011_);
return v_res_6015_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_addDecl_spec__0(lean_object* v_x_6016_, lean_object* v_x_6017_, lean_object* v___y_6018_, lean_object* v___y_6019_){
_start:
{
if (lean_obj_tag(v_x_6016_) == 0)
{
lean_object* v___x_6021_; lean_object* v___x_6022_; 
v___x_6021_ = l_List_reverse___redArg(v_x_6017_);
v___x_6022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6022_, 0, v___x_6021_);
return v___x_6022_;
}
else
{
lean_object* v_head_6023_; lean_object* v_tail_6024_; lean_object* v___x_6026_; uint8_t v_isShared_6027_; uint8_t v_isSharedCheck_6042_; 
v_head_6023_ = lean_ctor_get(v_x_6016_, 0);
v_tail_6024_ = lean_ctor_get(v_x_6016_, 1);
v_isSharedCheck_6042_ = !lean_is_exclusive(v_x_6016_);
if (v_isSharedCheck_6042_ == 0)
{
v___x_6026_ = v_x_6016_;
v_isShared_6027_ = v_isSharedCheck_6042_;
goto v_resetjp_6025_;
}
else
{
lean_inc(v_tail_6024_);
lean_inc(v_head_6023_);
lean_dec(v_x_6016_);
v___x_6026_ = lean_box(0);
v_isShared_6027_ = v_isSharedCheck_6042_;
goto v_resetjp_6025_;
}
v_resetjp_6025_:
{
lean_object* v___x_6028_; 
v___x_6028_ = l_Lean_snapshotEnvLinterOptions(v_head_6023_, v___y_6018_, v___y_6019_);
if (lean_obj_tag(v___x_6028_) == 0)
{
lean_object* v_a_6029_; lean_object* v___x_6031_; 
v_a_6029_ = lean_ctor_get(v___x_6028_, 0);
lean_inc(v_a_6029_);
lean_dec_ref_known(v___x_6028_, 1);
if (v_isShared_6027_ == 0)
{
lean_ctor_set(v___x_6026_, 1, v_x_6017_);
lean_ctor_set(v___x_6026_, 0, v_a_6029_);
v___x_6031_ = v___x_6026_;
goto v_reusejp_6030_;
}
else
{
lean_object* v_reuseFailAlloc_6033_; 
v_reuseFailAlloc_6033_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6033_, 0, v_a_6029_);
lean_ctor_set(v_reuseFailAlloc_6033_, 1, v_x_6017_);
v___x_6031_ = v_reuseFailAlloc_6033_;
goto v_reusejp_6030_;
}
v_reusejp_6030_:
{
v_x_6016_ = v_tail_6024_;
v_x_6017_ = v___x_6031_;
goto _start;
}
}
else
{
lean_object* v_a_6034_; lean_object* v___x_6036_; uint8_t v_isShared_6037_; uint8_t v_isSharedCheck_6041_; 
lean_del_object(v___x_6026_);
lean_dec(v_tail_6024_);
lean_dec(v_x_6017_);
v_a_6034_ = lean_ctor_get(v___x_6028_, 0);
v_isSharedCheck_6041_ = !lean_is_exclusive(v___x_6028_);
if (v_isSharedCheck_6041_ == 0)
{
v___x_6036_ = v___x_6028_;
v_isShared_6037_ = v_isSharedCheck_6041_;
goto v_resetjp_6035_;
}
else
{
lean_inc(v_a_6034_);
lean_dec(v___x_6028_);
v___x_6036_ = lean_box(0);
v_isShared_6037_ = v_isSharedCheck_6041_;
goto v_resetjp_6035_;
}
v_resetjp_6035_:
{
lean_object* v___x_6039_; 
if (v_isShared_6037_ == 0)
{
v___x_6039_ = v___x_6036_;
goto v_reusejp_6038_;
}
else
{
lean_object* v_reuseFailAlloc_6040_; 
v_reuseFailAlloc_6040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6040_, 0, v_a_6034_);
v___x_6039_ = v_reuseFailAlloc_6040_;
goto v_reusejp_6038_;
}
v_reusejp_6038_:
{
return v___x_6039_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_addDecl_spec__0___boxed(lean_object* v_x_6043_, lean_object* v_x_6044_, lean_object* v___y_6045_, lean_object* v___y_6046_, lean_object* v___y_6047_){
_start:
{
lean_object* v_res_6048_; 
v_res_6048_ = l_List_mapM_loop___at___00Lean_addDecl_spec__0(v_x_6043_, v_x_6044_, v___y_6045_, v___y_6046_);
lean_dec(v___y_6046_);
lean_dec_ref(v___y_6045_);
return v_res_6048_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDecl(lean_object* v_decl_6049_, uint8_t v_forceExpose_6050_, lean_object* v_a_6051_, lean_object* v_a_6052_){
_start:
{
lean_object* v___x_6054_; 
lean_inc(v_decl_6049_);
v___x_6054_ = l___private_Lean_AddDecl_0__Lean_addDeclCore(v_decl_6049_, v_forceExpose_6050_, v_a_6051_, v_a_6052_);
if (lean_obj_tag(v___x_6054_) == 0)
{
lean_object* v___x_6055_; lean_object* v___x_6056_; lean_object* v___x_6057_; lean_object* v___x_6058_; 
lean_dec_ref_known(v___x_6054_, 1);
v___x_6055_ = l_Lean_Declaration_getTopLevelNames(v_decl_6049_);
v___x_6056_ = lean_box(0);
v___x_6057_ = lean_box(0);
v___x_6058_ = l_List_mapM_loop___at___00Lean_addDecl_spec__0(v___x_6055_, v___x_6056_, v_a_6051_, v_a_6052_);
if (lean_obj_tag(v___x_6058_) == 0)
{
lean_object* v___x_6060_; uint8_t v_isShared_6061_; uint8_t v_isSharedCheck_6065_; 
v_isSharedCheck_6065_ = !lean_is_exclusive(v___x_6058_);
if (v_isSharedCheck_6065_ == 0)
{
lean_object* v_unused_6066_; 
v_unused_6066_ = lean_ctor_get(v___x_6058_, 0);
lean_dec(v_unused_6066_);
v___x_6060_ = v___x_6058_;
v_isShared_6061_ = v_isSharedCheck_6065_;
goto v_resetjp_6059_;
}
else
{
lean_dec(v___x_6058_);
v___x_6060_ = lean_box(0);
v_isShared_6061_ = v_isSharedCheck_6065_;
goto v_resetjp_6059_;
}
v_resetjp_6059_:
{
lean_object* v___x_6063_; 
if (v_isShared_6061_ == 0)
{
lean_ctor_set(v___x_6060_, 0, v___x_6057_);
v___x_6063_ = v___x_6060_;
goto v_reusejp_6062_;
}
else
{
lean_object* v_reuseFailAlloc_6064_; 
v_reuseFailAlloc_6064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6064_, 0, v___x_6057_);
v___x_6063_ = v_reuseFailAlloc_6064_;
goto v_reusejp_6062_;
}
v_reusejp_6062_:
{
return v___x_6063_;
}
}
}
else
{
lean_object* v_a_6067_; lean_object* v___x_6069_; uint8_t v_isShared_6070_; uint8_t v_isSharedCheck_6074_; 
v_a_6067_ = lean_ctor_get(v___x_6058_, 0);
v_isSharedCheck_6074_ = !lean_is_exclusive(v___x_6058_);
if (v_isSharedCheck_6074_ == 0)
{
v___x_6069_ = v___x_6058_;
v_isShared_6070_ = v_isSharedCheck_6074_;
goto v_resetjp_6068_;
}
else
{
lean_inc(v_a_6067_);
lean_dec(v___x_6058_);
v___x_6069_ = lean_box(0);
v_isShared_6070_ = v_isSharedCheck_6074_;
goto v_resetjp_6068_;
}
v_resetjp_6068_:
{
lean_object* v___x_6072_; 
if (v_isShared_6070_ == 0)
{
v___x_6072_ = v___x_6069_;
goto v_reusejp_6071_;
}
else
{
lean_object* v_reuseFailAlloc_6073_; 
v_reuseFailAlloc_6073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6073_, 0, v_a_6067_);
v___x_6072_ = v_reuseFailAlloc_6073_;
goto v_reusejp_6071_;
}
v_reusejp_6071_:
{
return v___x_6072_;
}
}
}
}
else
{
lean_dec(v_decl_6049_);
return v___x_6054_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDecl___boxed(lean_object* v_decl_6075_, lean_object* v_forceExpose_6076_, lean_object* v_a_6077_, lean_object* v_a_6078_, lean_object* v_a_6079_){
_start:
{
uint8_t v_forceExpose_boxed_6080_; lean_object* v_res_6081_; 
v_forceExpose_boxed_6080_ = lean_unbox(v_forceExpose_6076_);
v_res_6081_ = l_Lean_addDecl(v_decl_6075_, v_forceExpose_boxed_6080_, v_a_6077_, v_a_6078_);
lean_dec(v_a_6078_);
lean_dec_ref(v_a_6077_);
return v_res_6081_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg(lean_object* v_as_x27_6082_, lean_object* v_b_6083_, lean_object* v___y_6084_){
_start:
{
if (lean_obj_tag(v_as_x27_6082_) == 0)
{
lean_object* v___x_6086_; 
v___x_6086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6086_, 0, v_b_6083_);
return v___x_6086_;
}
else
{
lean_object* v_head_6087_; lean_object* v_tail_6088_; lean_object* v___x_6089_; lean_object* v___x_6090_; lean_object* v_env_6091_; lean_object* v_nextMacroScope_6092_; lean_object* v_ngen_6093_; lean_object* v_auxDeclNGen_6094_; lean_object* v_traceState_6095_; lean_object* v_recordedDeps_6096_; lean_object* v_messages_6097_; lean_object* v_infoState_6098_; lean_object* v_snapshotTasks_6099_; lean_object* v___x_6101_; uint8_t v_isShared_6102_; uint8_t v_isSharedCheck_6110_; 
v_head_6087_ = lean_ctor_get(v_as_x27_6082_, 0);
v_tail_6088_ = lean_ctor_get(v_as_x27_6082_, 1);
v___x_6089_ = lean_box(0);
v___x_6090_ = lean_st_ref_take(v___y_6084_);
v_env_6091_ = lean_ctor_get(v___x_6090_, 0);
v_nextMacroScope_6092_ = lean_ctor_get(v___x_6090_, 1);
v_ngen_6093_ = lean_ctor_get(v___x_6090_, 2);
v_auxDeclNGen_6094_ = lean_ctor_get(v___x_6090_, 3);
v_traceState_6095_ = lean_ctor_get(v___x_6090_, 4);
v_recordedDeps_6096_ = lean_ctor_get(v___x_6090_, 6);
v_messages_6097_ = lean_ctor_get(v___x_6090_, 7);
v_infoState_6098_ = lean_ctor_get(v___x_6090_, 8);
v_snapshotTasks_6099_ = lean_ctor_get(v___x_6090_, 9);
v_isSharedCheck_6110_ = !lean_is_exclusive(v___x_6090_);
if (v_isSharedCheck_6110_ == 0)
{
lean_object* v_unused_6111_; 
v_unused_6111_ = lean_ctor_get(v___x_6090_, 5);
lean_dec(v_unused_6111_);
v___x_6101_ = v___x_6090_;
v_isShared_6102_ = v_isSharedCheck_6110_;
goto v_resetjp_6100_;
}
else
{
lean_inc(v_snapshotTasks_6099_);
lean_inc(v_infoState_6098_);
lean_inc(v_messages_6097_);
lean_inc(v_recordedDeps_6096_);
lean_inc(v_traceState_6095_);
lean_inc(v_auxDeclNGen_6094_);
lean_inc(v_ngen_6093_);
lean_inc(v_nextMacroScope_6092_);
lean_inc(v_env_6091_);
lean_dec(v___x_6090_);
v___x_6101_ = lean_box(0);
v_isShared_6102_ = v_isSharedCheck_6110_;
goto v_resetjp_6100_;
}
v_resetjp_6100_:
{
lean_object* v___x_6103_; lean_object* v___x_6104_; lean_object* v___x_6106_; 
lean_inc(v_head_6087_);
v___x_6103_ = l_Lean_markMeta(v_env_6091_, v_head_6087_);
v___x_6104_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_6102_ == 0)
{
lean_ctor_set(v___x_6101_, 5, v___x_6104_);
lean_ctor_set(v___x_6101_, 0, v___x_6103_);
v___x_6106_ = v___x_6101_;
goto v_reusejp_6105_;
}
else
{
lean_object* v_reuseFailAlloc_6109_; 
v_reuseFailAlloc_6109_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6109_, 0, v___x_6103_);
lean_ctor_set(v_reuseFailAlloc_6109_, 1, v_nextMacroScope_6092_);
lean_ctor_set(v_reuseFailAlloc_6109_, 2, v_ngen_6093_);
lean_ctor_set(v_reuseFailAlloc_6109_, 3, v_auxDeclNGen_6094_);
lean_ctor_set(v_reuseFailAlloc_6109_, 4, v_traceState_6095_);
lean_ctor_set(v_reuseFailAlloc_6109_, 5, v___x_6104_);
lean_ctor_set(v_reuseFailAlloc_6109_, 6, v_recordedDeps_6096_);
lean_ctor_set(v_reuseFailAlloc_6109_, 7, v_messages_6097_);
lean_ctor_set(v_reuseFailAlloc_6109_, 8, v_infoState_6098_);
lean_ctor_set(v_reuseFailAlloc_6109_, 9, v_snapshotTasks_6099_);
v___x_6106_ = v_reuseFailAlloc_6109_;
goto v_reusejp_6105_;
}
v_reusejp_6105_:
{
lean_object* v___x_6107_; 
v___x_6107_ = lean_st_ref_put(v___y_6084_, v___x_6106_);
v_as_x27_6082_ = v_tail_6088_;
v_b_6083_ = v___x_6089_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg___boxed(lean_object* v_as_x27_6112_, lean_object* v_b_6113_, lean_object* v___y_6114_, lean_object* v___y_6115_){
_start:
{
lean_object* v_res_6116_; 
v_res_6116_ = l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg(v_as_x27_6112_, v_b_6113_, v___y_6114_);
lean_dec(v___y_6114_);
lean_dec(v_as_x27_6112_);
return v_res_6116_;
}
}
LEAN_EXPORT lean_object* l_Lean_addAndCompile(lean_object* v_decl_6117_, uint8_t v_logCompileErrors_6118_, uint8_t v_markMeta_6119_, lean_object* v_a_6120_, lean_object* v_a_6121_){
_start:
{
uint8_t v___x_6123_; lean_object* v___x_6124_; 
v___x_6123_ = 0;
lean_inc(v_decl_6117_);
v___x_6124_ = l_Lean_addDecl(v_decl_6117_, v___x_6123_, v_a_6120_, v_a_6121_);
if (lean_obj_tag(v___x_6124_) == 0)
{
lean_dec_ref_known(v___x_6124_, 1);
if (v_markMeta_6119_ == 0)
{
lean_object* v___x_6125_; 
v___x_6125_ = l_Lean_compileDecl(v_decl_6117_, v_logCompileErrors_6118_, v_a_6120_, v_a_6121_);
return v___x_6125_;
}
else
{
lean_object* v___x_6126_; lean_object* v___x_6127_; lean_object* v___x_6128_; lean_object* v___x_6129_; 
lean_inc(v_decl_6117_);
v___x_6126_ = l_Lean_Declaration_getNames(v_decl_6117_);
v___x_6127_ = lean_box(0);
v___x_6128_ = l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg(v___x_6126_, v___x_6127_, v_a_6121_);
lean_dec(v___x_6126_);
lean_dec_ref(v___x_6128_);
v___x_6129_ = l_Lean_compileDecl(v_decl_6117_, v_logCompileErrors_6118_, v_a_6120_, v_a_6121_);
return v___x_6129_;
}
}
else
{
lean_dec(v_decl_6117_);
return v___x_6124_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addAndCompile___boxed(lean_object* v_decl_6130_, lean_object* v_logCompileErrors_6131_, lean_object* v_markMeta_6132_, lean_object* v_a_6133_, lean_object* v_a_6134_, lean_object* v_a_6135_){
_start:
{
uint8_t v_logCompileErrors_boxed_6136_; uint8_t v_markMeta_boxed_6137_; lean_object* v_res_6138_; 
v_logCompileErrors_boxed_6136_ = lean_unbox(v_logCompileErrors_6131_);
v_markMeta_boxed_6137_ = lean_unbox(v_markMeta_6132_);
v_res_6138_ = l_Lean_addAndCompile(v_decl_6130_, v_logCompileErrors_boxed_6136_, v_markMeta_boxed_6137_, v_a_6133_, v_a_6134_);
lean_dec(v_a_6134_);
lean_dec_ref(v_a_6133_);
return v_res_6138_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0(lean_object* v_as_6139_, lean_object* v_as_x27_6140_, lean_object* v_b_6141_, lean_object* v_a_6142_, lean_object* v___y_6143_, lean_object* v___y_6144_){
_start:
{
lean_object* v___x_6146_; 
v___x_6146_ = l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg(v_as_x27_6140_, v_b_6141_, v___y_6144_);
return v___x_6146_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___boxed(lean_object* v_as_6147_, lean_object* v_as_x27_6148_, lean_object* v_b_6149_, lean_object* v_a_6150_, lean_object* v___y_6151_, lean_object* v___y_6152_, lean_object* v___y_6153_){
_start:
{
lean_object* v_res_6154_; 
v_res_6154_ = l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0(v_as_6147_, v_as_x27_6148_, v_b_6149_, v_a_6150_, v___y_6151_, v___y_6152_);
lean_dec(v___y_6152_);
lean_dec_ref(v___y_6151_);
lean_dec(v_as_x27_6148_);
lean_dec(v_as_6147_);
return v_res_6154_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sorry(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectAxioms(uint8_t builtin);
lean_object* runtime_initialize_Lean_OriginalConstKind(uint8_t builtin);
lean_object* runtime_initialize_Lean_AutoDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_RecDepth(uint8_t builtin);
lean_object* runtime_initialize_Lean_OriginalConstKind(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sorry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectAxioms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_AutoDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_RecDepth(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_warn_sorry = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_warn_sorry);
lean_dec_ref(res);
res = l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_AddDecl(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sorry(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectAxioms(uint8_t builtin);
lean_object* initialize_Lean_OriginalConstKind(uint8_t builtin);
lean_object* initialize_Lean_AutoDecl(uint8_t builtin);
lean_object* initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
lean_object* initialize_Lean_Util_RecDepth(uint8_t builtin);
lean_object* initialize_Lean_OriginalConstKind(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_AddDecl(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sorry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectAxioms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_AutoDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_RecDepth(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_AddDecl(builtin);
}
#ifdef __cplusplus
}
#endif
