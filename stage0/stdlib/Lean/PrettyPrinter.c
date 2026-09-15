// Lean compiler output
// Module: Lean.PrettyPrinter
// Imports: public import Lean.PrettyPrinter.Delaborator.Basic import Lean.PrettyPrinter.Delaborator public import Lean.Parser.Module public import Lean.ParserCompiler public import Lean.Util.NumObjs public import Lean.Util.ShareCommon
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_sanitizeSyntax(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_parenthesizeCategory(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_formatCategory(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_PPContext_runCoreM___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
extern lean_object* l_Lean_pp_raw;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_delabConstWithSignature___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_delabCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_PrettyPrinter_delabLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PPContext_runMetaM___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_module_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_module_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_parenthesize(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_format(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_combinatorParenthesizerAttribute;
extern lean_object* l_Lean_PrettyPrinter_parenthesizerAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_sanitizeNames(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_registerParserCompiler___redArg(lean_object*);
extern lean_object* l_Lean_PrettyPrinter_combinatorFormatterAttribute;
extern lean_object* l_Lean_PrettyPrinter_formatterAttribute;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Expr_numObjs(lean_object*);
lean_object* lean_sharecommon_quick(lean_object*);
lean_object* l_Lean_Expr_sizeWithoutSharing(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_ppGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_delabConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_delab___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
extern lean_object* l_Lean_diagnostics;
lean_object* lean_mk_io_user_error(lean_object*);
extern lean_object* l_Lean_instInhabitedFileMap_default;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_PrettyPrinter_delab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
extern lean_object* l_Lean_maxRecDepth;
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_lazy(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
extern lean_object* l_Lean_ppFnsRef;
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCategory(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCategory___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_ppTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_PrettyPrinter_ppTerm___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppTerm___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_ppTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_PrettyPrinter_ppTerm___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_ppTerm___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTerm(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "pp"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "exprSizes"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(158, 227, 30, 94, 230, 5, 70, 204)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 146, .m_capacity = 146, .m_length = 145, .m_data = "(pretty printer) prefix each embedded expression with its sizes in the format (size disregarding sharing/size with sharing/size with max sharing)"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PrettyPrinter"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(206, 56, 205, 124, 93, 150, 76, 120)}};
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(101, 167, 20, 28, 221, 60, 140, 8)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_pp_exprSizes;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "[size "};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__0_value)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__1 = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__1_value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__2 = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__2_value)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__3 = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__3_value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "] "};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__4 = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__4_value)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__5 = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_ppExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_ppExpr___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_ppExpr___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppExpr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_InfoPerPos_ofPosMap_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_PrettyPrinter_InfoPerPos_ofPosMap_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_InfoPerPos_ofPosMap(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_InfoPerPos_ofPosMap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_PrettyPrinter_InfoPerPos_ofPosMap_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_PrettyPrinter_ppConstNameWithInfos_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tagAppFns"};
static const lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1_value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__0_value),LEAN_SCALAR_PTR_LITERAL(171, 223, 163, 149, 215, 109, 16, 158)}};
static const lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__2_value;
static const lean_closure_object l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_delabConst___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__3_value;
static const lean_closure_object l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos___boxed, .m_arity = 11, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1_value),((lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__2_value),((lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__3_value)} };
static const lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__4 = (const lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_PrettyPrinter_ppExprLegacy_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_PrettyPrinter_ppExprLegacy_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_PrettyPrinter_ppExprLegacy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__0_value;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_PrettyPrinter_ppExprLegacy___closed__1;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__2;
static const lean_array_object l_Lean_PrettyPrinter_ppExprLegacy___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__3_value;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__4;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__5;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__6;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__7;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__8;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__9;
static const lean_string_object l_Lean_PrettyPrinter_ppExprLegacy___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "<PrettyPrinter>"};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__10 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__10_value;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__11;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__12;
static const lean_string_object l_Lean_PrettyPrinter_ppExprLegacy___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__13 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__13_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppExprLegacy___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__13_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__14 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__14_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppExprLegacy___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__14_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__15 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__15_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppExprLegacy___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__16 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__16_value;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__17;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__18;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__19;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__20;
static const lean_string_object l_Lean_PrettyPrinter_ppExprLegacy___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__21 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__21_value;
static const lean_string_object l_Lean_PrettyPrinter_ppExprLegacy___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__22 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__22_value;
static const lean_string_object l_Lean_PrettyPrinter_ppExprLegacy___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__23 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__23_value;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_PrettyPrinter_ppExprLegacy___closed__24;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__25;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprLegacy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprLegacy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_ppLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "level"};
static const lean_object* l_Lean_PrettyPrinter_ppLevel___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppLevel___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppLevel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_ppLevel___closed__0_value),LEAN_SCALAR_PTR_LITERAL(248, 87, 114, 95, 43, 103, 70, 253)}};
static const lean_object* l_Lean_PrettyPrinter_ppLevel___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_ppLevel___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_ppTactic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l_Lean_PrettyPrinter_ppTactic___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppTactic___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppTactic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_ppTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l_Lean_PrettyPrinter_ppTactic___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_ppTactic___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTactic(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_ppCommand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "command"};
static const lean_object* l_Lean_PrettyPrinter_ppCommand___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppCommand___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppCommand___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_ppCommand___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 69, 134, 125, 237, 175, 69, 70)}};
static const lean_object* l_Lean_PrettyPrinter_ppCommand___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_ppCommand___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCommand(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCommand___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_ppModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Module_module_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_ppModule___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppModule___closed__0_value;
static const lean_closure_object l_Lean_PrettyPrinter_ppModule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Module_module_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_ppModule___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_ppModule___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppModule(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_ppSignature___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_delabConstWithSignature___boxed, .m_arity = 8, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_PrettyPrinter_ppSignature___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppSignature___closed__0_value;
static const lean_string_object l_Lean_PrettyPrinter_ppSignature___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_PrettyPrinter_ppSignature___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_ppSignature___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppSignature(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppSignature___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__0___closed__0_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_delab___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__0___closed__0_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__0___closed__0_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__0_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__0_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__1_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__1_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__2_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__2_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__3_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__3_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__4_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__4_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__0_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__1_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__2_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__3_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__4_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed(lean_object*);
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(201, 243, 163, 104, 244, 197, 219, 0)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(212, 152, 45, 136, 43, 176, 59, 135)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(213, 19, 19, 182, 49, 68, 234, 74)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(192, 190, 227, 235, 144, 88, 78, 130)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(118, 83, 13, 207, 210, 46, 52, 166)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__8_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__8_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__8_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__9_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__8_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(91, 39, 49, 159, 123, 145, 147, 151)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__9_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__9_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__10_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__10_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__10_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__11_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__9_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__10_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(190, 228, 156, 77, 208, 58, 186, 72)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__11_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__11_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__12_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__11_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(135, 58, 92, 96, 45, 63, 110, 211)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__12_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__12_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__13_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__12_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(205, 84, 7, 14, 127, 142, 94, 81)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__13_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__13_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__14_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__13_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)(((size_t)(675687902) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(242, 80, 98, 162, 118, 230, 218, 64)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__14_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__14_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__15_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__15_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__15_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__16_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__14_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__15_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(125, 177, 19, 210, 185, 194, 23, 23)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__16_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__16_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__17_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__17_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__17_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__18_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__16_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__17_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(221, 88, 4, 103, 22, 42, 47, 115)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__18_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__18_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__19_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__18_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(176, 211, 139, 245, 118, 121, 217, 117)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__19_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__19_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_registerParserCompilers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "parenthesizer"};
static const lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_registerParserCompilers___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_registerParserCompilers___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_registerParserCompilers___closed__0_value),LEAN_SCALAR_PTR_LITERAL(50, 187, 150, 116, 216, 103, 117, 60)}};
static const lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_registerParserCompilers___closed__1_value;
static lean_once_cell_t l_Lean_PrettyPrinter_registerParserCompilers___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__2;
static const lean_string_object l_Lean_PrettyPrinter_registerParserCompilers___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "formatter"};
static const lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_registerParserCompilers___closed__3_value;
static const lean_ctor_object l_Lean_PrettyPrinter_registerParserCompilers___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_registerParserCompilers___closed__3_value),LEAN_SCALAR_PTR_LITERAL(126, 243, 114, 121, 141, 142, 42, 100)}};
static const lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__4 = (const lean_object*)&l_Lean_PrettyPrinter_registerParserCompilers___closed__4_value;
static lean_once_cell_t l_Lean_PrettyPrinter_registerParserCompilers___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__5;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_registerParserCompilers();
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_registerParserCompilers___boxed(lean_object*);
static const lean_string_object l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "[Error pretty printing: "};
static const lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__0 = (const lean_object*)&l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__1;
static const lean_string_object l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__2 = (const lean_object*)&l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_ofFormatWithInfosM___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__1___boxed(lean_object*);
static const lean_string_object l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "(invalid MessageData.lazy, missing context)"};
static const lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__0 = (const lean_object*)&l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__0_value)}};
static const lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__1 = (const lean_object*)&l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_MessageData_ofFormatWithInfosM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofFormatWithInfosM___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_ofFormatWithInfosM___closed__0 = (const lean_object*)&l_Lean_MessageData_ofFormatWithInfosM___closed__0_value;
static const lean_closure_object l_Lean_MessageData_ofFormatWithInfosM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofFormatWithInfosM___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_ofFormatWithInfosM___closed__1 = (const lean_object*)&l_Lean_MessageData_ofFormatWithInfosM___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_ofConst_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_ofConst_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_MessageData_ofConst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "[Error pretty printing: expression not a constant]"};
static const lean_object* l_Lean_MessageData_ofConst___closed__0 = (const lean_object*)&l_Lean_MessageData_ofConst___closed__0_value;
static lean_once_cell_t l_Lean_MessageData_ofConst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofConst___closed__1;
static lean_once_cell_t l_Lean_MessageData_ofConst___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofConst___closed__2;
static lean_once_cell_t l_Lean_MessageData_ofConst___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofConst___closed__3;
static const lean_string_object l_Lean_MessageData_ofConst___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.PrettyPrinter"};
static const lean_object* l_Lean_MessageData_ofConst___closed__4 = (const lean_object*)&l_Lean_MessageData_ofConst___closed__4_value;
static const lean_string_object l_Lean_MessageData_ofConst___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.MessageData.ofConst"};
static const lean_object* l_Lean_MessageData_ofConst___closed__5 = (const lean_object*)&l_Lean_MessageData_ofConst___closed__5_value;
static const lean_string_object l_Lean_MessageData_ofConst___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not a constant"};
static const lean_object* l_Lean_MessageData_ofConst___closed__6 = (const lean_object*)&l_Lean_MessageData_ofConst___closed__6_value;
static lean_once_cell_t l_Lean_MessageData_ofConst___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofConst___closed__7;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConst(lean_object*);
static const lean_string_object l_Lean_MessageData_signature___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "[Error pretty printing signature: "};
static const lean_object* l_Lean_MessageData_signature___lam__0___closed__0 = (const lean_object*)&l_Lean_MessageData_signature___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_MessageData_signature___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_signature___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_MessageData_signature___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_signature___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_signature(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCategory(lean_object* v_cat_1_, lean_object* v_stx_2_, lean_object* v___y_3_, lean_object* v___y_4_){
_start:
{
lean_object* v_toCold_6_; lean_object* v_options_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v_fst_11_; lean_object* v___x_12_; 
v_toCold_6_ = lean_ctor_get(v___y_3_, 0);
v_options_7_ = lean_ctor_get(v_toCold_6_, 2);
v___x_8_ = lean_box(1);
lean_inc_ref(v_options_7_);
v___x_9_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_9_, 0, v_options_7_);
lean_ctor_set(v___x_9_, 1, v___x_8_);
lean_ctor_set(v___x_9_, 2, v___x_8_);
v___x_10_ = l_Lean_sanitizeSyntax(v_stx_2_, v___x_9_);
v_fst_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc(v_fst_11_);
lean_dec_ref(v___x_10_);
lean_inc(v_cat_1_);
v___x_12_ = l_Lean_PrettyPrinter_parenthesizeCategory(v_cat_1_, v_fst_11_, v___y_3_, v___y_4_);
if (lean_obj_tag(v___x_12_) == 0)
{
lean_object* v_a_13_; lean_object* v___x_14_; 
v_a_13_ = lean_ctor_get(v___x_12_, 0);
lean_inc(v_a_13_);
lean_dec_ref_known(v___x_12_, 1);
v___x_14_ = l_Lean_PrettyPrinter_formatCategory(v_cat_1_, v_a_13_, v___y_3_, v___y_4_);
return v___x_14_;
}
else
{
lean_object* v_a_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_22_; 
lean_dec(v_cat_1_);
v_a_15_ = lean_ctor_get(v___x_12_, 0);
v_isSharedCheck_22_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_22_ == 0)
{
v___x_17_ = v___x_12_;
v_isShared_18_ = v_isSharedCheck_22_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_a_15_);
lean_dec(v___x_12_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_22_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v_a_15_);
v___x_20_ = v_reuseFailAlloc_21_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
return v___x_20_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCategory___boxed(lean_object* v_cat_23_, lean_object* v_stx_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_PrettyPrinter_ppCategory(v_cat_23_, v_stx_24_, v___y_25_, v___y_26_);
lean_dec(v___y_26_);
lean_dec_ref(v___y_25_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTerm(lean_object* v_stx_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = ((lean_object*)(l_Lean_PrettyPrinter_ppTerm___closed__1));
v___x_37_ = l_Lean_PrettyPrinter_ppCategory(v___x_36_, v_stx_32_, v___y_33_, v___y_34_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTerm___boxed(lean_object* v_stx_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Lean_PrettyPrinter_ppTerm(v_stx_38_, v___y_39_, v___y_40_);
lean_dec(v___y_40_);
lean_dec_ref(v___y_39_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___redArg(lean_object* v_lctx_43_, lean_object* v_x_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v_keyedConfig_50_; uint8_t v_trackZetaDelta_51_; lean_object* v_zetaDeltaSet_52_; lean_object* v_localInstances_53_; lean_object* v_defEqCtx_x3f_54_; lean_object* v_synthPendingDepth_55_; lean_object* v_customCanUnfoldPredicate_x3f_56_; uint8_t v_univApprox_57_; uint8_t v_inTypeClassResolution_58_; uint8_t v_cacheInferType_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v_keyedConfig_50_ = lean_ctor_get(v___y_45_, 0);
v_trackZetaDelta_51_ = lean_ctor_get_uint8(v___y_45_, sizeof(void*)*7);
v_zetaDeltaSet_52_ = lean_ctor_get(v___y_45_, 1);
v_localInstances_53_ = lean_ctor_get(v___y_45_, 3);
v_defEqCtx_x3f_54_ = lean_ctor_get(v___y_45_, 4);
v_synthPendingDepth_55_ = lean_ctor_get(v___y_45_, 5);
v_customCanUnfoldPredicate_x3f_56_ = lean_ctor_get(v___y_45_, 6);
v_univApprox_57_ = lean_ctor_get_uint8(v___y_45_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_58_ = lean_ctor_get_uint8(v___y_45_, sizeof(void*)*7 + 2);
v_cacheInferType_59_ = lean_ctor_get_uint8(v___y_45_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_56_);
lean_inc(v_synthPendingDepth_55_);
lean_inc(v_defEqCtx_x3f_54_);
lean_inc_ref(v_localInstances_53_);
lean_inc(v_zetaDeltaSet_52_);
lean_inc_ref(v_keyedConfig_50_);
v___x_60_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_60_, 0, v_keyedConfig_50_);
lean_ctor_set(v___x_60_, 1, v_zetaDeltaSet_52_);
lean_ctor_set(v___x_60_, 2, v_lctx_43_);
lean_ctor_set(v___x_60_, 3, v_localInstances_53_);
lean_ctor_set(v___x_60_, 4, v_defEqCtx_x3f_54_);
lean_ctor_set(v___x_60_, 5, v_synthPendingDepth_55_);
lean_ctor_set(v___x_60_, 6, v_customCanUnfoldPredicate_x3f_56_);
lean_ctor_set_uint8(v___x_60_, sizeof(void*)*7, v_trackZetaDelta_51_);
lean_ctor_set_uint8(v___x_60_, sizeof(void*)*7 + 1, v_univApprox_57_);
lean_ctor_set_uint8(v___x_60_, sizeof(void*)*7 + 2, v_inTypeClassResolution_58_);
lean_ctor_set_uint8(v___x_60_, sizeof(void*)*7 + 3, v_cacheInferType_59_);
lean_inc(v___y_48_);
lean_inc_ref(v___y_47_);
lean_inc(v___y_46_);
v___x_61_ = lean_apply_5(v_x_44_, v___x_60_, v___y_46_, v___y_47_, v___y_48_, lean_box(0));
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___redArg___boxed(lean_object* v_lctx_62_, lean_object* v_x_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___redArg(v_lctx_62_, v_x_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_);
lean_dec(v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0(lean_object* v_00_u03b1_70_, lean_object* v_lctx_71_, lean_object* v_x_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___redArg(v_lctx_71_, v_x_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___boxed(lean_object* v_00_u03b1_79_, lean_object* v_lctx_80_, lean_object* v_x_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0(v_00_u03b1_79_, v_lctx_80_, v_x_81_, v___y_82_, v___y_83_, v___y_84_, v___y_85_);
lean_dec(v___y_85_);
lean_dec_ref(v___y_84_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing___lam__0(lean_object* v_delab_88_, lean_object* v_e_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
lean_object* v___x_95_; 
lean_inc(v___y_93_);
lean_inc_ref(v___y_92_);
v___x_95_ = lean_apply_6(v_delab_88_, v_e_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, lean_box(0));
if (lean_obj_tag(v___x_95_) == 0)
{
lean_object* v_a_96_; lean_object* v___x_97_; 
v_a_96_ = lean_ctor_get(v___x_95_, 0);
lean_inc(v_a_96_);
lean_dec_ref_known(v___x_95_, 1);
v___x_97_ = l_Lean_PrettyPrinter_ppTerm(v_a_96_, v___y_92_, v___y_93_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
return v___x_97_;
}
else
{
lean_object* v_a_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_105_; 
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
v_a_98_ = lean_ctor_get(v___x_95_, 0);
v_isSharedCheck_105_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_105_ == 0)
{
v___x_100_ = v___x_95_;
v_isShared_101_ = v_isSharedCheck_105_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_a_98_);
lean_dec(v___x_95_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_105_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_103_; 
if (v_isShared_101_ == 0)
{
v___x_103_ = v___x_100_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_a_98_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
return v___x_103_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing___lam__0___boxed(lean_object* v_delab_106_, lean_object* v_e_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lean_PrettyPrinter_ppUsing___lam__0(v_delab_106_, v_e_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing(lean_object* v_e_114_, lean_object* v_delab_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_){
_start:
{
lean_object* v_toCold_121_; lean_object* v_lctx_122_; lean_object* v_options_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v_fst_127_; lean_object* v___f_128_; lean_object* v___x_129_; 
v_toCold_121_ = lean_ctor_get(v___y_118_, 0);
v_lctx_122_ = lean_ctor_get(v___y_116_, 2);
v_options_123_ = lean_ctor_get(v_toCold_121_, 2);
v___x_124_ = lean_box(1);
lean_inc_ref(v_options_123_);
v___x_125_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_125_, 0, v_options_123_);
lean_ctor_set(v___x_125_, 1, v___x_124_);
lean_ctor_set(v___x_125_, 2, v___x_124_);
lean_inc_ref(v_lctx_122_);
v___x_126_ = l_Lean_LocalContext_sanitizeNames(v_lctx_122_, v___x_125_);
v_fst_127_ = lean_ctor_get(v___x_126_, 0);
lean_inc(v_fst_127_);
lean_dec_ref(v___x_126_);
v___f_128_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppUsing___lam__0___boxed), 7, 2);
lean_closure_set(v___f_128_, 0, v_delab_115_);
lean_closure_set(v___f_128_, 1, v_e_114_);
v___x_129_ = l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___redArg(v_fst_127_, v___f_128_, v___y_116_, v___y_117_, v___y_118_, v___y_119_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing___boxed(lean_object* v_e_130_, lean_object* v_delab_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lean_PrettyPrinter_ppUsing(v_e_130_, v_delab_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
lean_dec(v___y_133_);
lean_dec_ref(v___y_132_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__spec__0(lean_object* v_name_138_, lean_object* v_decl_139_, lean_object* v_ref_140_){
_start:
{
lean_object* v_defValue_142_; lean_object* v_descr_143_; lean_object* v_deprecation_x3f_144_; lean_object* v___x_145_; uint8_t v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v_defValue_142_ = lean_ctor_get(v_decl_139_, 0);
v_descr_143_ = lean_ctor_get(v_decl_139_, 1);
v_deprecation_x3f_144_ = lean_ctor_get(v_decl_139_, 2);
v___x_145_ = lean_alloc_ctor(1, 0, 1);
v___x_146_ = lean_unbox(v_defValue_142_);
lean_ctor_set_uint8(v___x_145_, 0, v___x_146_);
lean_inc(v_deprecation_x3f_144_);
lean_inc_ref(v_descr_143_);
lean_inc_n(v_name_138_, 2);
v___x_147_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_147_, 0, v_name_138_);
lean_ctor_set(v___x_147_, 1, v_ref_140_);
lean_ctor_set(v___x_147_, 2, v___x_145_);
lean_ctor_set(v___x_147_, 3, v_descr_143_);
lean_ctor_set(v___x_147_, 4, v_deprecation_x3f_144_);
v___x_148_ = lean_register_option(v_name_138_, v___x_147_);
if (lean_obj_tag(v___x_148_) == 0)
{
lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_156_; 
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_148_);
if (v_isSharedCheck_156_ == 0)
{
lean_object* v_unused_157_; 
v_unused_157_ = lean_ctor_get(v___x_148_, 0);
lean_dec(v_unused_157_);
v___x_150_ = v___x_148_;
v_isShared_151_ = v_isSharedCheck_156_;
goto v_resetjp_149_;
}
else
{
lean_dec(v___x_148_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_156_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_152_; lean_object* v___x_154_; 
lean_inc(v_defValue_142_);
v___x_152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_152_, 0, v_name_138_);
lean_ctor_set(v___x_152_, 1, v_defValue_142_);
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 0, v___x_152_);
v___x_154_ = v___x_150_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v___x_152_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
}
else
{
lean_object* v_a_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_165_; 
lean_dec(v_name_138_);
v_a_158_ = lean_ctor_get(v___x_148_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v___x_148_);
if (v_isSharedCheck_165_ == 0)
{
v___x_160_ = v___x_148_;
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_a_158_);
lean_dec(v___x_148_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_163_; 
if (v_isShared_161_ == 0)
{
v___x_163_ = v___x_160_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_a_158_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_166_, lean_object* v_decl_167_, lean_object* v_ref_168_, lean_object* v___y_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lean_Option_register___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__spec__0(v_name_166_, v_decl_167_, v_ref_168_);
lean_dec_ref(v_decl_167_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_190_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_));
v___x_191_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_));
v___x_192_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_));
v___x_193_ = l_Lean_Option_register___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__spec__0(v___x_190_, v___x_191_, v___x_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4____boxed(lean_object* v___y_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_();
return v_res_195_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0(lean_object* v_opts_196_, lean_object* v_opt_197_){
_start:
{
lean_object* v_name_198_; lean_object* v_defValue_199_; lean_object* v_map_200_; lean_object* v___x_201_; 
v_name_198_ = lean_ctor_get(v_opt_197_, 0);
v_defValue_199_ = lean_ctor_get(v_opt_197_, 1);
v_map_200_ = lean_ctor_get(v_opts_196_, 0);
v___x_201_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_200_, v_name_198_);
if (lean_obj_tag(v___x_201_) == 0)
{
uint8_t v___x_202_; 
v___x_202_ = lean_unbox(v_defValue_199_);
return v___x_202_;
}
else
{
lean_object* v_val_203_; 
v_val_203_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_val_203_);
lean_dec_ref_known(v___x_201_, 1);
if (lean_obj_tag(v_val_203_) == 1)
{
uint8_t v_v_204_; 
v_v_204_ = lean_ctor_get_uint8(v_val_203_, 0);
lean_dec_ref_known(v_val_203_, 0);
return v_v_204_;
}
else
{
uint8_t v___x_205_; 
lean_dec(v_val_203_);
v___x_205_ = lean_unbox(v_defValue_199_);
return v___x_205_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0___boxed(lean_object* v_opts_206_, lean_object* v_opt_207_){
_start:
{
uint8_t v_res_208_; lean_object* v_r_209_; 
v_res_208_ = l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0(v_opts_206_, v_opt_207_);
lean_dec_ref(v_opt_207_);
lean_dec_ref(v_opts_206_);
v_r_209_ = lean_box(v_res_208_);
return v_r_209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg(lean_object* v_e_219_, lean_object* v_f_220_, lean_object* v___y_221_){
_start:
{
lean_object* v_toCold_223_; lean_object* v_ref_224_; lean_object* v_options_225_; lean_object* v___x_226_; uint8_t v___x_227_; 
v_toCold_223_ = lean_ctor_get(v___y_221_, 0);
v_ref_224_ = lean_ctor_get(v___y_221_, 2);
v_options_225_ = lean_ctor_get(v_toCold_223_, 2);
v___x_226_ = l_Lean_PrettyPrinter_pp_exprSizes;
v___x_227_ = l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0(v_options_225_, v___x_226_);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; 
lean_dec_ref(v_e_219_);
v___x_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_228_, 0, v_f_220_);
return v___x_228_;
}
else
{
lean_object* v___x_229_; 
lean_inc_ref(v_e_219_);
v___x_229_ = l_Lean_Expr_numObjs(v_e_219_);
if (lean_obj_tag(v___x_229_) == 0)
{
lean_object* v_a_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v_a_230_ = lean_ctor_get(v___x_229_, 0);
lean_inc(v_a_230_);
lean_dec_ref_known(v___x_229_, 1);
v___x_231_ = lean_sharecommon_quick(v_e_219_);
v___x_232_ = l_Lean_Expr_numObjs(v___x_231_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v_a_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_257_; 
v_a_233_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_257_ == 0)
{
v___x_235_ = v___x_232_;
v_isShared_236_ = v_isSharedCheck_257_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_a_233_);
lean_dec(v___x_232_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_257_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_255_; 
v___x_237_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__1));
v___x_238_ = l_Lean_Expr_sizeWithoutSharing(v_e_219_);
lean_dec_ref(v_e_219_);
v___x_239_ = l_Nat_reprFast(v___x_238_);
v___x_240_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
v___x_241_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_237_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__3));
v___x_243_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_241_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = l_Nat_reprFast(v_a_230_);
v___x_245_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
v___x_246_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_243_);
lean_ctor_set(v___x_246_, 1, v___x_245_);
v___x_247_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
lean_ctor_set(v___x_247_, 1, v___x_242_);
v___x_248_ = l_Nat_reprFast(v_a_233_);
v___x_249_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
v___x_250_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_247_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__5));
v___x_252_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_250_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
lean_ctor_set(v___x_253_, 1, v_f_220_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 0, v___x_253_);
v___x_255_ = v___x_235_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v___x_253_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
else
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_269_; 
lean_dec(v_a_230_);
lean_dec(v_f_220_);
lean_dec_ref(v_e_219_);
v_a_258_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_269_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_269_ == 0)
{
v___x_260_ = v___x_232_;
v_isShared_261_ = v_isSharedCheck_269_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_232_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_269_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_267_; 
v___x_262_ = lean_io_error_to_string(v_a_258_);
v___x_263_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
v___x_264_ = l_Lean_MessageData_ofFormat(v___x_263_);
lean_inc(v_ref_224_);
v___x_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_265_, 0, v_ref_224_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 0, v___x_265_);
v___x_267_ = v___x_260_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_265_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
}
else
{
lean_object* v_a_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_281_; 
lean_dec(v_f_220_);
lean_dec_ref(v_e_219_);
v_a_270_ = lean_ctor_get(v___x_229_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_229_);
if (v_isSharedCheck_281_ == 0)
{
v___x_272_ = v___x_229_;
v_isShared_273_ = v_isSharedCheck_281_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_a_270_);
lean_dec(v___x_229_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_281_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_279_; 
v___x_274_ = lean_io_error_to_string(v_a_270_);
v___x_275_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
v___x_276_ = l_Lean_MessageData_ofFormat(v___x_275_);
lean_inc(v_ref_224_);
v___x_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_277_, 0, v_ref_224_);
lean_ctor_set(v___x_277_, 1, v___x_276_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 0, v___x_277_);
v___x_279_ = v___x_272_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v___x_277_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___boxed(lean_object* v_e_282_, lean_object* v_f_283_, lean_object* v___y_284_, lean_object* v___y_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg(v_e_282_, v_f_283_, v___y_284_);
lean_dec_ref(v___y_284_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes(lean_object* v_e_287_, lean_object* v_f_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_){
_start:
{
lean_object* v___x_294_; 
v___x_294_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg(v_e_287_, v_f_288_, v___y_291_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___boxed(lean_object* v_e_295_, lean_object* v_f_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes(v_e_295_, v_f_296_, v___y_297_, v___y_298_, v___y_299_, v___y_300_);
lean_dec(v___y_300_);
lean_dec_ref(v___y_299_);
lean_dec(v___y_298_);
lean_dec_ref(v___y_297_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr___lam__0(lean_object* v_e_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = lean_box(1);
v___x_310_ = l_Lean_PrettyPrinter_delab(v_e_303_, v___x_309_, v___y_304_, v___y_305_, v___y_306_, v___y_307_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr___lam__0___boxed(lean_object* v_e_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Lean_PrettyPrinter_ppExpr___lam__0(v_e_311_, v___y_312_, v___y_313_, v___y_314_, v___y_315_);
lean_dec(v___y_315_);
lean_dec_ref(v___y_314_);
lean_dec(v___y_313_);
lean_dec_ref(v___y_312_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr(lean_object* v_e_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_){
_start:
{
lean_object* v___f_325_; lean_object* v___x_326_; 
v___f_325_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExpr___closed__0));
lean_inc_ref(v_e_319_);
v___x_326_ = l_Lean_PrettyPrinter_ppUsing(v_e_319_, v___f_325_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
if (lean_obj_tag(v___x_326_) == 0)
{
lean_object* v_a_327_; lean_object* v___x_328_; 
v_a_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_a_327_);
lean_dec_ref_known(v___x_326_, 1);
v___x_328_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg(v_e_319_, v_a_327_, v___y_322_);
return v___x_328_;
}
else
{
lean_dec_ref(v_e_319_);
return v___x_326_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr___boxed(lean_object* v_e_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_){
_start:
{
lean_object* v_res_335_; 
v_res_335_ = l_Lean_PrettyPrinter_ppExpr(v_e_329_, v___y_330_, v___y_331_, v___y_332_, v___y_333_);
lean_dec(v___y_333_);
lean_dec_ref(v___y_332_);
lean_dec(v___y_331_);
lean_dec_ref(v___y_330_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_InfoPerPos_ofPosMap_spec__0___redArg(lean_object* v_k_336_, lean_object* v_v_337_, lean_object* v_t_338_){
_start:
{
if (lean_obj_tag(v_t_338_) == 0)
{
lean_object* v_size_339_; lean_object* v_k_340_; lean_object* v_v_341_; lean_object* v_l_342_; lean_object* v_r_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_624_; 
v_size_339_ = lean_ctor_get(v_t_338_, 0);
v_k_340_ = lean_ctor_get(v_t_338_, 1);
v_v_341_ = lean_ctor_get(v_t_338_, 2);
v_l_342_ = lean_ctor_get(v_t_338_, 3);
v_r_343_ = lean_ctor_get(v_t_338_, 4);
v_isSharedCheck_624_ = !lean_is_exclusive(v_t_338_);
if (v_isSharedCheck_624_ == 0)
{
v___x_345_ = v_t_338_;
v_isShared_346_ = v_isSharedCheck_624_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_r_343_);
lean_inc(v_l_342_);
lean_inc(v_v_341_);
lean_inc(v_k_340_);
lean_inc(v_size_339_);
lean_dec(v_t_338_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_624_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
uint8_t v___x_347_; 
v___x_347_ = lean_nat_dec_lt(v_k_336_, v_k_340_);
if (v___x_347_ == 0)
{
uint8_t v___x_348_; 
v___x_348_ = lean_nat_dec_eq(v_k_336_, v_k_340_);
if (v___x_348_ == 0)
{
lean_object* v_impl_349_; lean_object* v___x_350_; 
lean_dec(v_size_339_);
v_impl_349_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_InfoPerPos_ofPosMap_spec__0___redArg(v_k_336_, v_v_337_, v_r_343_);
v___x_350_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_342_) == 0)
{
lean_object* v_size_351_; lean_object* v_size_352_; lean_object* v_k_353_; lean_object* v_v_354_; lean_object* v_l_355_; lean_object* v_r_356_; lean_object* v___x_357_; lean_object* v___x_358_; uint8_t v___x_359_; 
v_size_351_ = lean_ctor_get(v_l_342_, 0);
v_size_352_ = lean_ctor_get(v_impl_349_, 0);
lean_inc(v_size_352_);
v_k_353_ = lean_ctor_get(v_impl_349_, 1);
lean_inc(v_k_353_);
v_v_354_ = lean_ctor_get(v_impl_349_, 2);
lean_inc(v_v_354_);
v_l_355_ = lean_ctor_get(v_impl_349_, 3);
lean_inc(v_l_355_);
v_r_356_ = lean_ctor_get(v_impl_349_, 4);
lean_inc(v_r_356_);
v___x_357_ = lean_unsigned_to_nat(3u);
v___x_358_ = lean_nat_mul(v___x_357_, v_size_351_);
v___x_359_ = lean_nat_dec_lt(v___x_358_, v_size_352_);
lean_dec(v___x_358_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_363_; 
lean_dec(v_r_356_);
lean_dec(v_l_355_);
lean_dec(v_v_354_);
lean_dec(v_k_353_);
v___x_360_ = lean_nat_add(v___x_350_, v_size_351_);
v___x_361_ = lean_nat_add(v___x_360_, v_size_352_);
lean_dec(v_size_352_);
lean_dec(v___x_360_);
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 4, v_impl_349_);
lean_ctor_set(v___x_345_, 0, v___x_361_);
v___x_363_ = v___x_345_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_361_);
lean_ctor_set(v_reuseFailAlloc_364_, 1, v_k_340_);
lean_ctor_set(v_reuseFailAlloc_364_, 2, v_v_341_);
lean_ctor_set(v_reuseFailAlloc_364_, 3, v_l_342_);
lean_ctor_set(v_reuseFailAlloc_364_, 4, v_impl_349_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
else
{
lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_428_; 
v_isSharedCheck_428_ = !lean_is_exclusive(v_impl_349_);
if (v_isSharedCheck_428_ == 0)
{
lean_object* v_unused_429_; lean_object* v_unused_430_; lean_object* v_unused_431_; lean_object* v_unused_432_; lean_object* v_unused_433_; 
v_unused_429_ = lean_ctor_get(v_impl_349_, 4);
lean_dec(v_unused_429_);
v_unused_430_ = lean_ctor_get(v_impl_349_, 3);
lean_dec(v_unused_430_);
v_unused_431_ = lean_ctor_get(v_impl_349_, 2);
lean_dec(v_unused_431_);
v_unused_432_ = lean_ctor_get(v_impl_349_, 1);
lean_dec(v_unused_432_);
v_unused_433_ = lean_ctor_get(v_impl_349_, 0);
lean_dec(v_unused_433_);
v___x_366_ = v_impl_349_;
v_isShared_367_ = v_isSharedCheck_428_;
goto v_resetjp_365_;
}
else
{
lean_dec(v_impl_349_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_428_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v_size_368_; lean_object* v_k_369_; lean_object* v_v_370_; lean_object* v_l_371_; lean_object* v_r_372_; lean_object* v_size_373_; lean_object* v___x_374_; lean_object* v___x_375_; uint8_t v___x_376_; 
v_size_368_ = lean_ctor_get(v_l_355_, 0);
v_k_369_ = lean_ctor_get(v_l_355_, 1);
v_v_370_ = lean_ctor_get(v_l_355_, 2);
v_l_371_ = lean_ctor_get(v_l_355_, 3);
v_r_372_ = lean_ctor_get(v_l_355_, 4);
v_size_373_ = lean_ctor_get(v_r_356_, 0);
v___x_374_ = lean_unsigned_to_nat(2u);
v___x_375_ = lean_nat_mul(v___x_374_, v_size_373_);
v___x_376_ = lean_nat_dec_lt(v_size_368_, v___x_375_);
lean_dec(v___x_375_);
if (v___x_376_ == 0)
{
lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_404_; 
lean_inc(v_r_372_);
lean_inc(v_l_371_);
lean_inc(v_v_370_);
lean_inc(v_k_369_);
v_isSharedCheck_404_ = !lean_is_exclusive(v_l_355_);
if (v_isSharedCheck_404_ == 0)
{
lean_object* v_unused_405_; lean_object* v_unused_406_; lean_object* v_unused_407_; lean_object* v_unused_408_; lean_object* v_unused_409_; 
v_unused_405_ = lean_ctor_get(v_l_355_, 4);
lean_dec(v_unused_405_);
v_unused_406_ = lean_ctor_get(v_l_355_, 3);
lean_dec(v_unused_406_);
v_unused_407_ = lean_ctor_get(v_l_355_, 2);
lean_dec(v_unused_407_);
v_unused_408_ = lean_ctor_get(v_l_355_, 1);
lean_dec(v_unused_408_);
v_unused_409_ = lean_ctor_get(v_l_355_, 0);
lean_dec(v_unused_409_);
v___x_378_ = v_l_355_;
v_isShared_379_ = v_isSharedCheck_404_;
goto v_resetjp_377_;
}
else
{
lean_dec(v_l_355_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_404_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___y_383_; lean_object* v___y_384_; lean_object* v___y_385_; lean_object* v___y_394_; 
v___x_380_ = lean_nat_add(v___x_350_, v_size_351_);
v___x_381_ = lean_nat_add(v___x_380_, v_size_352_);
lean_dec(v_size_352_);
if (lean_obj_tag(v_l_371_) == 0)
{
lean_object* v_size_402_; 
v_size_402_ = lean_ctor_get(v_l_371_, 0);
lean_inc(v_size_402_);
v___y_394_ = v_size_402_;
goto v___jp_393_;
}
else
{
lean_object* v___x_403_; 
v___x_403_ = lean_unsigned_to_nat(0u);
v___y_394_ = v___x_403_;
goto v___jp_393_;
}
v___jp_382_:
{
lean_object* v___x_386_; lean_object* v___x_388_; 
v___x_386_ = lean_nat_add(v___y_383_, v___y_385_);
lean_dec(v___y_385_);
lean_dec(v___y_383_);
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 4, v_r_356_);
lean_ctor_set(v___x_378_, 3, v_r_372_);
lean_ctor_set(v___x_378_, 2, v_v_354_);
lean_ctor_set(v___x_378_, 1, v_k_353_);
lean_ctor_set(v___x_378_, 0, v___x_386_);
v___x_388_ = v___x_378_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_386_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v_k_353_);
lean_ctor_set(v_reuseFailAlloc_392_, 2, v_v_354_);
lean_ctor_set(v_reuseFailAlloc_392_, 3, v_r_372_);
lean_ctor_set(v_reuseFailAlloc_392_, 4, v_r_356_);
v___x_388_ = v_reuseFailAlloc_392_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
lean_object* v___x_390_; 
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 4, v___x_388_);
lean_ctor_set(v___x_366_, 3, v___y_384_);
lean_ctor_set(v___x_366_, 2, v_v_370_);
lean_ctor_set(v___x_366_, 1, v_k_369_);
lean_ctor_set(v___x_366_, 0, v___x_381_);
v___x_390_ = v___x_366_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v___x_381_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v_k_369_);
lean_ctor_set(v_reuseFailAlloc_391_, 2, v_v_370_);
lean_ctor_set(v_reuseFailAlloc_391_, 3, v___y_384_);
lean_ctor_set(v_reuseFailAlloc_391_, 4, v___x_388_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
v___jp_393_:
{
lean_object* v___x_395_; lean_object* v___x_397_; 
v___x_395_ = lean_nat_add(v___x_380_, v___y_394_);
lean_dec(v___y_394_);
lean_dec(v___x_380_);
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 4, v_l_371_);
lean_ctor_set(v___x_345_, 0, v___x_395_);
v___x_397_ = v___x_345_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v___x_395_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v_k_340_);
lean_ctor_set(v_reuseFailAlloc_401_, 2, v_v_341_);
lean_ctor_set(v_reuseFailAlloc_401_, 3, v_l_342_);
lean_ctor_set(v_reuseFailAlloc_401_, 4, v_l_371_);
v___x_397_ = v_reuseFailAlloc_401_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
lean_object* v___x_398_; 
v___x_398_ = lean_nat_add(v___x_350_, v_size_373_);
if (lean_obj_tag(v_r_372_) == 0)
{
lean_object* v_size_399_; 
v_size_399_ = lean_ctor_get(v_r_372_, 0);
lean_inc(v_size_399_);
v___y_383_ = v___x_398_;
v___y_384_ = v___x_397_;
v___y_385_ = v_size_399_;
goto v___jp_382_;
}
else
{
lean_object* v___x_400_; 
v___x_400_ = lean_unsigned_to_nat(0u);
v___y_383_ = v___x_398_;
v___y_384_ = v___x_397_;
v___y_385_ = v___x_400_;
goto v___jp_382_;
}
}
}
}
}
else
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_414_; 
lean_del_object(v___x_345_);
v___x_410_ = lean_nat_add(v___x_350_, v_size_351_);
v___x_411_ = lean_nat_add(v___x_410_, v_size_352_);
lean_dec(v_size_352_);
v___x_412_ = lean_nat_add(v___x_410_, v_size_368_);
lean_dec(v___x_410_);
lean_inc_ref(v_l_342_);
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 4, v_l_355_);
lean_ctor_set(v___x_366_, 3, v_l_342_);
lean_ctor_set(v___x_366_, 2, v_v_341_);
lean_ctor_set(v___x_366_, 1, v_k_340_);
lean_ctor_set(v___x_366_, 0, v___x_412_);
v___x_414_ = v___x_366_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v___x_412_);
lean_ctor_set(v_reuseFailAlloc_427_, 1, v_k_340_);
lean_ctor_set(v_reuseFailAlloc_427_, 2, v_v_341_);
lean_ctor_set(v_reuseFailAlloc_427_, 3, v_l_342_);
lean_ctor_set(v_reuseFailAlloc_427_, 4, v_l_355_);
v___x_414_ = v_reuseFailAlloc_427_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_421_; 
v_isSharedCheck_421_ = !lean_is_exclusive(v_l_342_);
if (v_isSharedCheck_421_ == 0)
{
lean_object* v_unused_422_; lean_object* v_unused_423_; lean_object* v_unused_424_; lean_object* v_unused_425_; lean_object* v_unused_426_; 
v_unused_422_ = lean_ctor_get(v_l_342_, 4);
lean_dec(v_unused_422_);
v_unused_423_ = lean_ctor_get(v_l_342_, 3);
lean_dec(v_unused_423_);
v_unused_424_ = lean_ctor_get(v_l_342_, 2);
lean_dec(v_unused_424_);
v_unused_425_ = lean_ctor_get(v_l_342_, 1);
lean_dec(v_unused_425_);
v_unused_426_ = lean_ctor_get(v_l_342_, 0);
lean_dec(v_unused_426_);
v___x_416_ = v_l_342_;
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
else
{
lean_dec(v_l_342_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_419_; 
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 4, v_r_356_);
lean_ctor_set(v___x_416_, 3, v___x_414_);
lean_ctor_set(v___x_416_, 2, v_v_354_);
lean_ctor_set(v___x_416_, 1, v_k_353_);
lean_ctor_set(v___x_416_, 0, v___x_411_);
v___x_419_ = v___x_416_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_411_);
lean_ctor_set(v_reuseFailAlloc_420_, 1, v_k_353_);
lean_ctor_set(v_reuseFailAlloc_420_, 2, v_v_354_);
lean_ctor_set(v_reuseFailAlloc_420_, 3, v___x_414_);
lean_ctor_set(v_reuseFailAlloc_420_, 4, v_r_356_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_434_; 
v_l_434_ = lean_ctor_get(v_impl_349_, 3);
lean_inc(v_l_434_);
if (lean_obj_tag(v_l_434_) == 0)
{
lean_object* v_r_435_; lean_object* v_k_436_; lean_object* v_v_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_460_; 
v_r_435_ = lean_ctor_get(v_impl_349_, 4);
v_k_436_ = lean_ctor_get(v_impl_349_, 1);
v_v_437_ = lean_ctor_get(v_impl_349_, 2);
v_isSharedCheck_460_ = !lean_is_exclusive(v_impl_349_);
if (v_isSharedCheck_460_ == 0)
{
lean_object* v_unused_461_; lean_object* v_unused_462_; 
v_unused_461_ = lean_ctor_get(v_impl_349_, 3);
lean_dec(v_unused_461_);
v_unused_462_ = lean_ctor_get(v_impl_349_, 0);
lean_dec(v_unused_462_);
v___x_439_ = v_impl_349_;
v_isShared_440_ = v_isSharedCheck_460_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_r_435_);
lean_inc(v_v_437_);
lean_inc(v_k_436_);
lean_dec(v_impl_349_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_460_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v_k_441_; lean_object* v_v_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_456_; 
v_k_441_ = lean_ctor_get(v_l_434_, 1);
v_v_442_ = lean_ctor_get(v_l_434_, 2);
v_isSharedCheck_456_ = !lean_is_exclusive(v_l_434_);
if (v_isSharedCheck_456_ == 0)
{
lean_object* v_unused_457_; lean_object* v_unused_458_; lean_object* v_unused_459_; 
v_unused_457_ = lean_ctor_get(v_l_434_, 4);
lean_dec(v_unused_457_);
v_unused_458_ = lean_ctor_get(v_l_434_, 3);
lean_dec(v_unused_458_);
v_unused_459_ = lean_ctor_get(v_l_434_, 0);
lean_dec(v_unused_459_);
v___x_444_ = v_l_434_;
v_isShared_445_ = v_isSharedCheck_456_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_v_442_);
lean_inc(v_k_441_);
lean_dec(v_l_434_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_456_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_446_; lean_object* v___x_448_; 
v___x_446_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_435_, 2);
if (v_isShared_445_ == 0)
{
lean_ctor_set(v___x_444_, 4, v_r_435_);
lean_ctor_set(v___x_444_, 3, v_r_435_);
lean_ctor_set(v___x_444_, 2, v_v_341_);
lean_ctor_set(v___x_444_, 1, v_k_340_);
lean_ctor_set(v___x_444_, 0, v___x_350_);
v___x_448_ = v___x_444_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_350_);
lean_ctor_set(v_reuseFailAlloc_455_, 1, v_k_340_);
lean_ctor_set(v_reuseFailAlloc_455_, 2, v_v_341_);
lean_ctor_set(v_reuseFailAlloc_455_, 3, v_r_435_);
lean_ctor_set(v_reuseFailAlloc_455_, 4, v_r_435_);
v___x_448_ = v_reuseFailAlloc_455_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
lean_object* v___x_450_; 
lean_inc(v_r_435_);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 3, v_r_435_);
lean_ctor_set(v___x_439_, 0, v___x_350_);
v___x_450_ = v___x_439_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v___x_350_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v_k_436_);
lean_ctor_set(v_reuseFailAlloc_454_, 2, v_v_437_);
lean_ctor_set(v_reuseFailAlloc_454_, 3, v_r_435_);
lean_ctor_set(v_reuseFailAlloc_454_, 4, v_r_435_);
v___x_450_ = v_reuseFailAlloc_454_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
lean_object* v___x_452_; 
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 4, v___x_450_);
lean_ctor_set(v___x_345_, 3, v___x_448_);
lean_ctor_set(v___x_345_, 2, v_v_442_);
lean_ctor_set(v___x_345_, 1, v_k_441_);
lean_ctor_set(v___x_345_, 0, v___x_446_);
v___x_452_ = v___x_345_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v___x_446_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v_k_441_);
lean_ctor_set(v_reuseFailAlloc_453_, 2, v_v_442_);
lean_ctor_set(v_reuseFailAlloc_453_, 3, v___x_448_);
lean_ctor_set(v_reuseFailAlloc_453_, 4, v___x_450_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
}
}
else
{
lean_object* v_r_463_; 
v_r_463_ = lean_ctor_get(v_impl_349_, 4);
lean_inc(v_r_463_);
if (lean_obj_tag(v_r_463_) == 0)
{
lean_object* v_k_464_; lean_object* v_v_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_476_; 
v_k_464_ = lean_ctor_get(v_impl_349_, 1);
v_v_465_ = lean_ctor_get(v_impl_349_, 2);
v_isSharedCheck_476_ = !lean_is_exclusive(v_impl_349_);
if (v_isSharedCheck_476_ == 0)
{
lean_object* v_unused_477_; lean_object* v_unused_478_; lean_object* v_unused_479_; 
v_unused_477_ = lean_ctor_get(v_impl_349_, 4);
lean_dec(v_unused_477_);
v_unused_478_ = lean_ctor_get(v_impl_349_, 3);
lean_dec(v_unused_478_);
v_unused_479_ = lean_ctor_get(v_impl_349_, 0);
lean_dec(v_unused_479_);
v___x_467_ = v_impl_349_;
v_isShared_468_ = v_isSharedCheck_476_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_v_465_);
lean_inc(v_k_464_);
lean_dec(v_impl_349_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_476_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_469_; lean_object* v___x_471_; 
v___x_469_ = lean_unsigned_to_nat(3u);
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 4, v_l_434_);
lean_ctor_set(v___x_467_, 2, v_v_341_);
lean_ctor_set(v___x_467_, 1, v_k_340_);
lean_ctor_set(v___x_467_, 0, v___x_350_);
v___x_471_ = v___x_467_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v___x_350_);
lean_ctor_set(v_reuseFailAlloc_475_, 1, v_k_340_);
lean_ctor_set(v_reuseFailAlloc_475_, 2, v_v_341_);
lean_ctor_set(v_reuseFailAlloc_475_, 3, v_l_434_);
lean_ctor_set(v_reuseFailAlloc_475_, 4, v_l_434_);
v___x_471_ = v_reuseFailAlloc_475_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
lean_object* v___x_473_; 
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 4, v_r_463_);
lean_ctor_set(v___x_345_, 3, v___x_471_);
lean_ctor_set(v___x_345_, 2, v_v_465_);
lean_ctor_set(v___x_345_, 1, v_k_464_);
lean_ctor_set(v___x_345_, 0, v___x_469_);
v___x_473_ = v___x_345_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v___x_469_);
lean_ctor_set(v_reuseFailAlloc_474_, 1, v_k_464_);
lean_ctor_set(v_reuseFailAlloc_474_, 2, v_v_465_);
lean_ctor_set(v_reuseFailAlloc_474_, 3, v___x_471_);
lean_ctor_set(v_reuseFailAlloc_474_, 4, v_r_463_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
}
else
{
lean_object* v___x_480_; lean_object* v___x_482_; 
v___x_480_ = lean_unsigned_to_nat(2u);
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 4, v_impl_349_);
lean_ctor_set(v___x_345_, 3, v_r_463_);
lean_ctor_set(v___x_345_, 0, v___x_480_);
v___x_482_ = v___x_345_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_480_);
lean_ctor_set(v_reuseFailAlloc_483_, 1, v_k_340_);
lean_ctor_set(v_reuseFailAlloc_483_, 2, v_v_341_);
lean_ctor_set(v_reuseFailAlloc_483_, 3, v_r_463_);
lean_ctor_set(v_reuseFailAlloc_483_, 4, v_impl_349_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
}
else
{
lean_object* v___x_485_; 
lean_dec(v_v_341_);
lean_dec(v_k_340_);
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 2, v_v_337_);
lean_ctor_set(v___x_345_, 1, v_k_336_);
v___x_485_ = v___x_345_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_size_339_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v_k_336_);
lean_ctor_set(v_reuseFailAlloc_486_, 2, v_v_337_);
lean_ctor_set(v_reuseFailAlloc_486_, 3, v_l_342_);
lean_ctor_set(v_reuseFailAlloc_486_, 4, v_r_343_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
else
{
lean_object* v_impl_487_; lean_object* v___x_488_; 
lean_dec(v_size_339_);
v_impl_487_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_InfoPerPos_ofPosMap_spec__0___redArg(v_k_336_, v_v_337_, v_l_342_);
v___x_488_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_343_) == 0)
{
lean_object* v_size_489_; lean_object* v_size_490_; lean_object* v_k_491_; lean_object* v_v_492_; lean_object* v_l_493_; lean_object* v_r_494_; lean_object* v___x_495_; lean_object* v___x_496_; uint8_t v___x_497_; 
v_size_489_ = lean_ctor_get(v_r_343_, 0);
v_size_490_ = lean_ctor_get(v_impl_487_, 0);
lean_inc(v_size_490_);
v_k_491_ = lean_ctor_get(v_impl_487_, 1);
lean_inc(v_k_491_);
v_v_492_ = lean_ctor_get(v_impl_487_, 2);
lean_inc(v_v_492_);
v_l_493_ = lean_ctor_get(v_impl_487_, 3);
lean_inc(v_l_493_);
v_r_494_ = lean_ctor_get(v_impl_487_, 4);
lean_inc(v_r_494_);
v___x_495_ = lean_unsigned_to_nat(3u);
v___x_496_ = lean_nat_mul(v___x_495_, v_size_489_);
v___x_497_ = lean_nat_dec_lt(v___x_496_, v_size_490_);
lean_dec(v___x_496_);
if (v___x_497_ == 0)
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_501_; 
lean_dec(v_r_494_);
lean_dec(v_l_493_);
lean_dec(v_v_492_);
lean_dec(v_k_491_);
v___x_498_ = lean_nat_add(v___x_488_, v_size_490_);
lean_dec(v_size_490_);
v___x_499_ = lean_nat_add(v___x_498_, v_size_489_);
lean_dec(v___x_498_);
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 3, v_impl_487_);
lean_ctor_set(v___x_345_, 0, v___x_499_);
v___x_501_ = v___x_345_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v___x_499_);
lean_ctor_set(v_reuseFailAlloc_502_, 1, v_k_340_);
lean_ctor_set(v_reuseFailAlloc_502_, 2, v_v_341_);
lean_ctor_set(v_reuseFailAlloc_502_, 3, v_impl_487_);
lean_ctor_set(v_reuseFailAlloc_502_, 4, v_r_343_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
else
{
lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_568_; 
v_isSharedCheck_568_ = !lean_is_exclusive(v_impl_487_);
if (v_isSharedCheck_568_ == 0)
{
lean_object* v_unused_569_; lean_object* v_unused_570_; lean_object* v_unused_571_; lean_object* v_unused_572_; lean_object* v_unused_573_; 
v_unused_569_ = lean_ctor_get(v_impl_487_, 4);
lean_dec(v_unused_569_);
v_unused_570_ = lean_ctor_get(v_impl_487_, 3);
lean_dec(v_unused_570_);
v_unused_571_ = lean_ctor_get(v_impl_487_, 2);
lean_dec(v_unused_571_);
v_unused_572_ = lean_ctor_get(v_impl_487_, 1);
lean_dec(v_unused_572_);
v_unused_573_ = lean_ctor_get(v_impl_487_, 0);
lean_dec(v_unused_573_);
v___x_504_ = v_impl_487_;
v_isShared_505_ = v_isSharedCheck_568_;
goto v_resetjp_503_;
}
else
{
lean_dec(v_impl_487_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_568_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v_size_506_; lean_object* v_size_507_; lean_object* v_k_508_; lean_object* v_v_509_; lean_object* v_l_510_; lean_object* v_r_511_; lean_object* v___x_512_; lean_object* v___x_513_; uint8_t v___x_514_; 
v_size_506_ = lean_ctor_get(v_l_493_, 0);
v_size_507_ = lean_ctor_get(v_r_494_, 0);
v_k_508_ = lean_ctor_get(v_r_494_, 1);
v_v_509_ = lean_ctor_get(v_r_494_, 2);
v_l_510_ = lean_ctor_get(v_r_494_, 3);
v_r_511_ = lean_ctor_get(v_r_494_, 4);
v___x_512_ = lean_unsigned_to_nat(2u);
v___x_513_ = lean_nat_mul(v___x_512_, v_size_506_);
v___x_514_ = lean_nat_dec_lt(v_size_507_, v___x_513_);
lean_dec(v___x_513_);
if (v___x_514_ == 0)
{
lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_543_; 
lean_inc(v_r_511_);
lean_inc(v_l_510_);
lean_inc(v_v_509_);
lean_inc(v_k_508_);
v_isSharedCheck_543_ = !lean_is_exclusive(v_r_494_);
if (v_isSharedCheck_543_ == 0)
{
lean_object* v_unused_544_; lean_object* v_unused_545_; lean_object* v_unused_546_; lean_object* v_unused_547_; lean_object* v_unused_548_; 
v_unused_544_ = lean_ctor_get(v_r_494_, 4);
lean_dec(v_unused_544_);
v_unused_545_ = lean_ctor_get(v_r_494_, 3);
lean_dec(v_unused_545_);
v_unused_546_ = lean_ctor_get(v_r_494_, 2);
lean_dec(v_unused_546_);
v_unused_547_ = lean_ctor_get(v_r_494_, 1);
lean_dec(v_unused_547_);
v_unused_548_ = lean_ctor_get(v_r_494_, 0);
lean_dec(v_unused_548_);
v___x_516_ = v_r_494_;
v_isShared_517_ = v_isSharedCheck_543_;
goto v_resetjp_515_;
}
else
{
lean_dec(v_r_494_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_543_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___y_521_; lean_object* v___y_522_; lean_object* v___y_523_; lean_object* v___x_531_; lean_object* v___y_533_; 
v___x_518_ = lean_nat_add(v___x_488_, v_size_490_);
lean_dec(v_size_490_);
v___x_519_ = lean_nat_add(v___x_518_, v_size_489_);
lean_dec(v___x_518_);
v___x_531_ = lean_nat_add(v___x_488_, v_size_506_);
if (lean_obj_tag(v_l_510_) == 0)
{
lean_object* v_size_541_; 
v_size_541_ = lean_ctor_get(v_l_510_, 0);
lean_inc(v_size_541_);
v___y_533_ = v_size_541_;
goto v___jp_532_;
}
else
{
lean_object* v___x_542_; 
v___x_542_ = lean_unsigned_to_nat(0u);
v___y_533_ = v___x_542_;
goto v___jp_532_;
}
v___jp_520_:
{
lean_object* v___x_524_; lean_object* v___x_526_; 
v___x_524_ = lean_nat_add(v___y_521_, v___y_523_);
lean_dec(v___y_523_);
lean_dec(v___y_521_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 4, v_r_343_);
lean_ctor_set(v___x_516_, 3, v_r_511_);
lean_ctor_set(v___x_516_, 2, v_v_341_);
lean_ctor_set(v___x_516_, 1, v_k_340_);
lean_ctor_set(v___x_516_, 0, v___x_524_);
v___x_526_ = v___x_516_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_524_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v_k_340_);
lean_ctor_set(v_reuseFailAlloc_530_, 2, v_v_341_);
lean_ctor_set(v_reuseFailAlloc_530_, 3, v_r_511_);
lean_ctor_set(v_reuseFailAlloc_530_, 4, v_r_343_);
v___x_526_ = v_reuseFailAlloc_530_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
lean_object* v___x_528_; 
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 4, v___x_526_);
lean_ctor_set(v___x_504_, 3, v___y_522_);
lean_ctor_set(v___x_504_, 2, v_v_509_);
lean_ctor_set(v___x_504_, 1, v_k_508_);
lean_ctor_set(v___x_504_, 0, v___x_519_);
v___x_528_ = v___x_504_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v___x_519_);
lean_ctor_set(v_reuseFailAlloc_529_, 1, v_k_508_);
lean_ctor_set(v_reuseFailAlloc_529_, 2, v_v_509_);
lean_ctor_set(v_reuseFailAlloc_529_, 3, v___y_522_);
lean_ctor_set(v_reuseFailAlloc_529_, 4, v___x_526_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
v___jp_532_:
{
lean_object* v___x_534_; lean_object* v___x_536_; 
v___x_534_ = lean_nat_add(v___x_531_, v___y_533_);
lean_dec(v___y_533_);
lean_dec(v___x_531_);
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 4, v_l_510_);
lean_ctor_set(v___x_345_, 3, v_l_493_);
lean_ctor_set(v___x_345_, 2, v_v_492_);
lean_ctor_set(v___x_345_, 1, v_k_491_);
lean_ctor_set(v___x_345_, 0, v___x_534_);
v___x_536_ = v___x_345_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v___x_534_);
lean_ctor_set(v_reuseFailAlloc_540_, 1, v_k_491_);
lean_ctor_set(v_reuseFailAlloc_540_, 2, v_v_492_);
lean_ctor_set(v_reuseFailAlloc_540_, 3, v_l_493_);
lean_ctor_set(v_reuseFailAlloc_540_, 4, v_l_510_);
v___x_536_ = v_reuseFailAlloc_540_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
lean_object* v___x_537_; 
v___x_537_ = lean_nat_add(v___x_488_, v_size_489_);
if (lean_obj_tag(v_r_511_) == 0)
{
lean_object* v_size_538_; 
v_size_538_ = lean_ctor_get(v_r_511_, 0);
lean_inc(v_size_538_);
v___y_521_ = v___x_537_;
v___y_522_ = v___x_536_;
v___y_523_ = v_size_538_;
goto v___jp_520_;
}
else
{
lean_object* v___x_539_; 
v___x_539_ = lean_unsigned_to_nat(0u);
v___y_521_ = v___x_537_;
v___y_522_ = v___x_536_;
v___y_523_ = v___x_539_;
goto v___jp_520_;
}
}
}
}
}
else
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_554_; 
lean_del_object(v___x_345_);
v___x_549_ = lean_nat_add(v___x_488_, v_size_490_);
lean_dec(v_size_490_);
v___x_550_ = lean_nat_add(v___x_549_, v_size_489_);
lean_dec(v___x_549_);
v___x_551_ = lean_nat_add(v___x_488_, v_size_489_);
v___x_552_ = lean_nat_add(v___x_551_, v_size_507_);
lean_dec(v___x_551_);
lean_inc_ref(v_r_343_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 4, v_r_343_);
lean_ctor_set(v___x_504_, 3, v_r_494_);
lean_ctor_set(v___x_504_, 2, v_v_341_);
lean_ctor_set(v___x_504_, 1, v_k_340_);
lean_ctor_set(v___x_504_, 0, v___x_552_);
v___x_554_ = v___x_504_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v___x_552_);
lean_ctor_set(v_reuseFailAlloc_567_, 1, v_k_340_);
lean_ctor_set(v_reuseFailAlloc_567_, 2, v_v_341_);
lean_ctor_set(v_reuseFailAlloc_567_, 3, v_r_494_);
lean_ctor_set(v_reuseFailAlloc_567_, 4, v_r_343_);
v___x_554_ = v_reuseFailAlloc_567_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
v_isSharedCheck_561_ = !lean_is_exclusive(v_r_343_);
if (v_isSharedCheck_561_ == 0)
{
lean_object* v_unused_562_; lean_object* v_unused_563_; lean_object* v_unused_564_; lean_object* v_unused_565_; lean_object* v_unused_566_; 
v_unused_562_ = lean_ctor_get(v_r_343_, 4);
lean_dec(v_unused_562_);
v_unused_563_ = lean_ctor_get(v_r_343_, 3);
lean_dec(v_unused_563_);
v_unused_564_ = lean_ctor_get(v_r_343_, 2);
lean_dec(v_unused_564_);
v_unused_565_ = lean_ctor_get(v_r_343_, 1);
lean_dec(v_unused_565_);
v_unused_566_ = lean_ctor_get(v_r_343_, 0);
lean_dec(v_unused_566_);
v___x_556_ = v_r_343_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_dec(v_r_343_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 4, v___x_554_);
lean_ctor_set(v___x_556_, 3, v_l_493_);
lean_ctor_set(v___x_556_, 2, v_v_492_);
lean_ctor_set(v___x_556_, 1, v_k_491_);
lean_ctor_set(v___x_556_, 0, v___x_550_);
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v___x_550_);
lean_ctor_set(v_reuseFailAlloc_560_, 1, v_k_491_);
lean_ctor_set(v_reuseFailAlloc_560_, 2, v_v_492_);
lean_ctor_set(v_reuseFailAlloc_560_, 3, v_l_493_);
lean_ctor_set(v_reuseFailAlloc_560_, 4, v___x_554_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_574_; 
v_l_574_ = lean_ctor_get(v_impl_487_, 3);
lean_inc(v_l_574_);
if (lean_obj_tag(v_l_574_) == 0)
{
lean_object* v_r_575_; lean_object* v_k_576_; lean_object* v_v_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_588_; 
v_r_575_ = lean_ctor_get(v_impl_487_, 4);
v_k_576_ = lean_ctor_get(v_impl_487_, 1);
v_v_577_ = lean_ctor_get(v_impl_487_, 2);
v_isSharedCheck_588_ = !lean_is_exclusive(v_impl_487_);
if (v_isSharedCheck_588_ == 0)
{
lean_object* v_unused_589_; lean_object* v_unused_590_; 
v_unused_589_ = lean_ctor_get(v_impl_487_, 3);
lean_dec(v_unused_589_);
v_unused_590_ = lean_ctor_get(v_impl_487_, 0);
lean_dec(v_unused_590_);
v___x_579_ = v_impl_487_;
v_isShared_580_ = v_isSharedCheck_588_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_r_575_);
lean_inc(v_v_577_);
lean_inc(v_k_576_);
lean_dec(v_impl_487_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_588_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_581_; lean_object* v___x_583_; 
v___x_581_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_575_);
if (v_isShared_580_ == 0)
{
lean_ctor_set(v___x_579_, 3, v_r_575_);
lean_ctor_set(v___x_579_, 2, v_v_341_);
lean_ctor_set(v___x_579_, 1, v_k_340_);
lean_ctor_set(v___x_579_, 0, v___x_488_);
v___x_583_ = v___x_579_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v___x_488_);
lean_ctor_set(v_reuseFailAlloc_587_, 1, v_k_340_);
lean_ctor_set(v_reuseFailAlloc_587_, 2, v_v_341_);
lean_ctor_set(v_reuseFailAlloc_587_, 3, v_r_575_);
lean_ctor_set(v_reuseFailAlloc_587_, 4, v_r_575_);
v___x_583_ = v_reuseFailAlloc_587_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
lean_object* v___x_585_; 
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 4, v___x_583_);
lean_ctor_set(v___x_345_, 3, v_l_574_);
lean_ctor_set(v___x_345_, 2, v_v_577_);
lean_ctor_set(v___x_345_, 1, v_k_576_);
lean_ctor_set(v___x_345_, 0, v___x_581_);
v___x_585_ = v___x_345_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v___x_581_);
lean_ctor_set(v_reuseFailAlloc_586_, 1, v_k_576_);
lean_ctor_set(v_reuseFailAlloc_586_, 2, v_v_577_);
lean_ctor_set(v_reuseFailAlloc_586_, 3, v_l_574_);
lean_ctor_set(v_reuseFailAlloc_586_, 4, v___x_583_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
return v___x_585_;
}
}
}
}
else
{
lean_object* v_r_591_; 
v_r_591_ = lean_ctor_get(v_impl_487_, 4);
lean_inc(v_r_591_);
if (lean_obj_tag(v_r_591_) == 0)
{
lean_object* v_k_592_; lean_object* v_v_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_616_; 
v_k_592_ = lean_ctor_get(v_impl_487_, 1);
v_v_593_ = lean_ctor_get(v_impl_487_, 2);
v_isSharedCheck_616_ = !lean_is_exclusive(v_impl_487_);
if (v_isSharedCheck_616_ == 0)
{
lean_object* v_unused_617_; lean_object* v_unused_618_; lean_object* v_unused_619_; 
v_unused_617_ = lean_ctor_get(v_impl_487_, 4);
lean_dec(v_unused_617_);
v_unused_618_ = lean_ctor_get(v_impl_487_, 3);
lean_dec(v_unused_618_);
v_unused_619_ = lean_ctor_get(v_impl_487_, 0);
lean_dec(v_unused_619_);
v___x_595_ = v_impl_487_;
v_isShared_596_ = v_isSharedCheck_616_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_v_593_);
lean_inc(v_k_592_);
lean_dec(v_impl_487_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_616_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v_k_597_; lean_object* v_v_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_612_; 
v_k_597_ = lean_ctor_get(v_r_591_, 1);
v_v_598_ = lean_ctor_get(v_r_591_, 2);
v_isSharedCheck_612_ = !lean_is_exclusive(v_r_591_);
if (v_isSharedCheck_612_ == 0)
{
lean_object* v_unused_613_; lean_object* v_unused_614_; lean_object* v_unused_615_; 
v_unused_613_ = lean_ctor_get(v_r_591_, 4);
lean_dec(v_unused_613_);
v_unused_614_ = lean_ctor_get(v_r_591_, 3);
lean_dec(v_unused_614_);
v_unused_615_ = lean_ctor_get(v_r_591_, 0);
lean_dec(v_unused_615_);
v___x_600_ = v_r_591_;
v_isShared_601_ = v_isSharedCheck_612_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_v_598_);
lean_inc(v_k_597_);
lean_dec(v_r_591_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_612_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v___x_604_; 
v___x_602_ = lean_unsigned_to_nat(3u);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 4, v_l_574_);
lean_ctor_set(v___x_600_, 3, v_l_574_);
lean_ctor_set(v___x_600_, 2, v_v_593_);
lean_ctor_set(v___x_600_, 1, v_k_592_);
lean_ctor_set(v___x_600_, 0, v___x_488_);
v___x_604_ = v___x_600_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_488_);
lean_ctor_set(v_reuseFailAlloc_611_, 1, v_k_592_);
lean_ctor_set(v_reuseFailAlloc_611_, 2, v_v_593_);
lean_ctor_set(v_reuseFailAlloc_611_, 3, v_l_574_);
lean_ctor_set(v_reuseFailAlloc_611_, 4, v_l_574_);
v___x_604_ = v_reuseFailAlloc_611_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
lean_object* v___x_606_; 
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 4, v_l_574_);
lean_ctor_set(v___x_595_, 2, v_v_341_);
lean_ctor_set(v___x_595_, 1, v_k_340_);
lean_ctor_set(v___x_595_, 0, v___x_488_);
v___x_606_ = v___x_595_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v___x_488_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v_k_340_);
lean_ctor_set(v_reuseFailAlloc_610_, 2, v_v_341_);
lean_ctor_set(v_reuseFailAlloc_610_, 3, v_l_574_);
lean_ctor_set(v_reuseFailAlloc_610_, 4, v_l_574_);
v___x_606_ = v_reuseFailAlloc_610_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
lean_object* v___x_608_; 
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 4, v___x_606_);
lean_ctor_set(v___x_345_, 3, v___x_604_);
lean_ctor_set(v___x_345_, 2, v_v_598_);
lean_ctor_set(v___x_345_, 1, v_k_597_);
lean_ctor_set(v___x_345_, 0, v___x_602_);
v___x_608_ = v___x_345_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v___x_602_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v_k_597_);
lean_ctor_set(v_reuseFailAlloc_609_, 2, v_v_598_);
lean_ctor_set(v_reuseFailAlloc_609_, 3, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_609_, 4, v___x_606_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
}
}
else
{
lean_object* v___x_620_; lean_object* v___x_622_; 
v___x_620_ = lean_unsigned_to_nat(2u);
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 4, v_r_591_);
lean_ctor_set(v___x_345_, 3, v_impl_487_);
lean_ctor_set(v___x_345_, 0, v___x_620_);
v___x_622_ = v___x_345_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_620_);
lean_ctor_set(v_reuseFailAlloc_623_, 1, v_k_340_);
lean_ctor_set(v_reuseFailAlloc_623_, 2, v_v_341_);
lean_ctor_set(v_reuseFailAlloc_623_, 3, v_impl_487_);
lean_ctor_set(v_reuseFailAlloc_623_, 4, v_r_591_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_unsigned_to_nat(1u);
v___x_626_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
lean_ctor_set(v___x_626_, 1, v_k_336_);
lean_ctor_set(v___x_626_, 2, v_v_337_);
lean_ctor_set(v___x_626_, 3, v_t_338_);
lean_ctor_set(v___x_626_, 4, v_t_338_);
return v___x_626_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_PrettyPrinter_InfoPerPos_ofPosMap_spec__1_spec__1(lean_object* v_init_627_, lean_object* v_x_628_){
_start:
{
if (lean_obj_tag(v_x_628_) == 0)
{
lean_object* v_k_629_; lean_object* v_v_630_; lean_object* v_l_631_; lean_object* v_r_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v_k_629_ = lean_ctor_get(v_x_628_, 1);
lean_inc(v_k_629_);
v_v_630_ = lean_ctor_get(v_x_628_, 2);
lean_inc(v_v_630_);
v_l_631_ = lean_ctor_get(v_x_628_, 3);
lean_inc(v_l_631_);
v_r_632_ = lean_ctor_get(v_x_628_, 4);
lean_inc(v_r_632_);
lean_dec_ref_known(v_x_628_, 5);
v___x_633_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_PrettyPrinter_InfoPerPos_ofPosMap_spec__1_spec__1(v_init_627_, v_l_631_);
v___x_634_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_InfoPerPos_ofPosMap_spec__0___redArg(v_k_629_, v_v_630_, v___x_633_);
v_init_627_ = v___x_634_;
v_x_628_ = v_r_632_;
goto _start;
}
else
{
return v_init_627_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_InfoPerPos_ofPosMap(lean_object* v_infos_636_){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = lean_box(1);
v___x_638_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_PrettyPrinter_InfoPerPos_ofPosMap_spec__1_spec__1(v___x_637_, v_infos_636_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_InfoPerPos_ofPosMap_spec__0(lean_object* v_00_u03b2_639_, lean_object* v_k_640_, lean_object* v_v_641_, lean_object* v_t_642_, lean_object* v_hl_643_){
_start:
{
lean_object* v___x_644_; 
v___x_644_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_InfoPerPos_ofPosMap_spec__0___redArg(v_k_640_, v_v_641_, v_t_642_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_PrettyPrinter_InfoPerPos_ofPosMap_spec__1(lean_object* v_init_645_, lean_object* v_t_646_){
_start:
{
lean_object* v___x_647_; 
v___x_647_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_PrettyPrinter_InfoPerPos_ofPosMap_spec__1_spec__1(v_init_645_, v_t_646_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos___lam__0(lean_object* v_e_648_, lean_object* v_optsPerPos_649_, lean_object* v_delab_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
lean_object* v___x_656_; 
lean_inc_ref(v_e_648_);
v___x_656_ = l_Lean_PrettyPrinter_delabCore___redArg(v_e_648_, v_optsPerPos_649_, v_delab_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_);
if (lean_obj_tag(v___x_656_) == 0)
{
lean_object* v_a_657_; lean_object* v_fst_658_; lean_object* v_snd_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_688_; 
v_a_657_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_a_657_);
lean_dec_ref_known(v___x_656_, 1);
v_fst_658_ = lean_ctor_get(v_a_657_, 0);
v_snd_659_ = lean_ctor_get(v_a_657_, 1);
v_isSharedCheck_688_ = !lean_is_exclusive(v_a_657_);
if (v_isSharedCheck_688_ == 0)
{
v___x_661_ = v_a_657_;
v_isShared_662_ = v_isSharedCheck_688_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_snd_659_);
lean_inc(v_fst_658_);
lean_dec(v_a_657_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_688_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___y_664_; lean_object* v___x_685_; 
v___x_685_ = l_Lean_PrettyPrinter_ppTerm(v_fst_658_, v___y_653_, v___y_654_);
if (lean_obj_tag(v___x_685_) == 0)
{
lean_object* v_a_686_; lean_object* v___x_687_; 
v_a_686_ = lean_ctor_get(v___x_685_, 0);
lean_inc(v_a_686_);
lean_dec_ref_known(v___x_685_, 1);
v___x_687_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg(v_e_648_, v_a_686_, v___y_653_);
v___y_664_ = v___x_687_;
goto v___jp_663_;
}
else
{
lean_dec_ref(v_e_648_);
v___y_664_ = v___x_685_;
goto v___jp_663_;
}
v___jp_663_:
{
if (lean_obj_tag(v___y_664_) == 0)
{
lean_object* v_a_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_676_; 
v_a_665_ = lean_ctor_get(v___y_664_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___y_664_);
if (v_isSharedCheck_676_ == 0)
{
v___x_667_ = v___y_664_;
v_isShared_668_ = v_isSharedCheck_676_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_a_665_);
lean_dec(v___y_664_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_676_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_669_; lean_object* v___x_671_; 
v___x_669_ = l_Lean_PrettyPrinter_InfoPerPos_ofPosMap(v_snd_659_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 1, v___x_669_);
lean_ctor_set(v___x_661_, 0, v_a_665_);
v___x_671_ = v___x_661_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_a_665_);
lean_ctor_set(v_reuseFailAlloc_675_, 1, v___x_669_);
v___x_671_ = v_reuseFailAlloc_675_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
lean_object* v___x_673_; 
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 0, v___x_671_);
v___x_673_ = v___x_667_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v___x_671_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
}
else
{
lean_object* v_a_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_684_; 
lean_del_object(v___x_661_);
lean_dec(v_snd_659_);
v_a_677_ = lean_ctor_get(v___y_664_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v___y_664_);
if (v_isSharedCheck_684_ == 0)
{
v___x_679_ = v___y_664_;
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_a_677_);
lean_dec(v___y_664_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_682_; 
if (v_isShared_680_ == 0)
{
v___x_682_ = v___x_679_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_a_677_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
}
}
}
else
{
lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_696_; 
lean_dec_ref(v_e_648_);
v_a_689_ = lean_ctor_get(v___x_656_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_696_ == 0)
{
v___x_691_ = v___x_656_;
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v___x_656_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_694_; 
if (v_isShared_692_ == 0)
{
v___x_694_ = v___x_691_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_a_689_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos___lam__0___boxed(lean_object* v_e_697_, lean_object* v_optsPerPos_698_, lean_object* v_delab_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_Lean_PrettyPrinter_ppExprWithInfos___lam__0(v_e_697_, v_optsPerPos_698_, v_delab_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_);
lean_dec(v___y_703_);
lean_dec_ref(v___y_702_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos(lean_object* v_e_706_, lean_object* v_optsPerPos_707_, lean_object* v_delab_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v_toCold_714_; lean_object* v_lctx_715_; lean_object* v_options_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v_fst_720_; lean_object* v___f_721_; lean_object* v___x_722_; 
v_toCold_714_ = lean_ctor_get(v___y_711_, 0);
v_lctx_715_ = lean_ctor_get(v___y_709_, 2);
v_options_716_ = lean_ctor_get(v_toCold_714_, 2);
v___x_717_ = lean_box(1);
lean_inc_ref(v_options_716_);
v___x_718_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_718_, 0, v_options_716_);
lean_ctor_set(v___x_718_, 1, v___x_717_);
lean_ctor_set(v___x_718_, 2, v___x_717_);
lean_inc_ref(v_lctx_715_);
v___x_719_ = l_Lean_LocalContext_sanitizeNames(v_lctx_715_, v___x_718_);
v_fst_720_ = lean_ctor_get(v___x_719_, 0);
lean_inc(v_fst_720_);
lean_dec_ref(v___x_719_);
v___f_721_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppExprWithInfos___lam__0___boxed), 8, 3);
lean_closure_set(v___f_721_, 0, v_e_706_);
lean_closure_set(v___f_721_, 1, v_optsPerPos_707_);
lean_closure_set(v___f_721_, 2, v_delab_708_);
v___x_722_ = l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___redArg(v_fst_720_, v___f_721_, v___y_709_, v___y_710_, v___y_711_, v___y_712_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos___boxed(lean_object* v_e_723_, lean_object* v_optsPerPos_724_, lean_object* v_delab_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l_Lean_PrettyPrinter_ppExprWithInfos(v_e_723_, v_optsPerPos_724_, v_delab_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_PrettyPrinter_ppConstNameWithInfos_spec__0(lean_object* v_a_732_, lean_object* v_a_733_){
_start:
{
if (lean_obj_tag(v_a_732_) == 0)
{
lean_object* v___x_734_; 
v___x_734_ = l_List_reverse___redArg(v_a_733_);
return v___x_734_;
}
else
{
lean_object* v_head_735_; lean_object* v_tail_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_745_; 
v_head_735_ = lean_ctor_get(v_a_732_, 0);
v_tail_736_ = lean_ctor_get(v_a_732_, 1);
v_isSharedCheck_745_ = !lean_is_exclusive(v_a_732_);
if (v_isSharedCheck_745_ == 0)
{
v___x_738_ = v_a_732_;
v_isShared_739_ = v_isSharedCheck_745_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_tail_736_);
lean_inc(v_head_735_);
lean_dec(v_a_732_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_745_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_740_; lean_object* v___x_742_; 
v___x_740_ = l_Lean_mkLevelParam(v_head_735_);
if (v_isShared_739_ == 0)
{
lean_ctor_set(v___x_738_, 1, v_a_733_);
lean_ctor_set(v___x_738_, 0, v___x_740_);
v___x_742_ = v___x_738_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_740_);
lean_ctor_set(v_reuseFailAlloc_744_, 1, v_a_733_);
v___x_742_ = v_reuseFailAlloc_744_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
v_a_732_ = v_tail_736_;
v_a_733_ = v___x_742_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos(lean_object* v_constName_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_){
_start:
{
lean_object* v___x_763_; lean_object* v_env_764_; uint8_t v___x_765_; lean_object* v___x_766_; 
v___x_763_ = lean_st_ref_get(v___y_761_);
v_env_764_ = lean_ctor_get(v___x_763_, 0);
lean_inc_ref(v_env_764_);
lean_dec(v___x_763_);
v___x_765_ = 0;
lean_inc(v_constName_757_);
v___x_766_ = l_Lean_Environment_find_x3f(v_env_764_, v_constName_757_, v___x_765_);
if (lean_obj_tag(v___x_766_) == 1)
{
lean_object* v_val_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v_val_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_val_767_);
lean_dec_ref_known(v___x_766_, 1);
v___x_768_ = ((lean_object*)(l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__4));
v___x_769_ = l_Lean_ConstantInfo_levelParams(v_val_767_);
lean_dec(v_val_767_);
v___x_770_ = lean_box(0);
v___x_771_ = l_List_mapTR_loop___at___00Lean_PrettyPrinter_ppConstNameWithInfos_spec__0(v___x_769_, v___x_770_);
v___x_772_ = l_Lean_Expr_const___override(v_constName_757_, v___x_771_);
v___x_773_ = lean_box(1);
v___x_774_ = l_Lean_PrettyPrinter_ppExprWithInfos(v___x_772_, v___x_773_, v___x_768_, v___y_758_, v___y_759_, v___y_760_, v___y_761_);
return v___x_774_;
}
else
{
lean_object* v_toCold_775_; lean_object* v_options_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v_fst_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_806_; 
lean_dec(v___x_766_);
v_toCold_775_ = lean_ctor_get(v___y_760_, 0);
v_options_776_ = lean_ctor_get(v_toCold_775_, 2);
v___x_777_ = l_Lean_mkIdent(v_constName_757_);
v___x_778_ = lean_box(1);
lean_inc_ref(v_options_776_);
v___x_779_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_779_, 0, v_options_776_);
lean_ctor_set(v___x_779_, 1, v___x_778_);
lean_ctor_set(v___x_779_, 2, v___x_778_);
v___x_780_ = l_Lean_sanitizeSyntax(v___x_777_, v___x_779_);
v_fst_781_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_806_ == 0)
{
lean_object* v_unused_807_; 
v_unused_807_ = lean_ctor_get(v___x_780_, 1);
lean_dec(v_unused_807_);
v___x_783_ = v___x_780_;
v_isShared_784_ = v_isSharedCheck_806_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_fst_781_);
lean_dec(v___x_780_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_806_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_785_ = ((lean_object*)(l_Lean_PrettyPrinter_ppTerm___closed__1));
v___x_786_ = l_Lean_PrettyPrinter_formatCategory(v___x_785_, v_fst_781_, v___y_760_, v___y_761_);
if (lean_obj_tag(v___x_786_) == 0)
{
lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_797_; 
v_a_787_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_797_ == 0)
{
v___x_789_ = v___x_786_;
v_isShared_790_ = v_isSharedCheck_797_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_786_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_797_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_792_; 
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 1, v___x_778_);
lean_ctor_set(v___x_783_, 0, v_a_787_);
v___x_792_ = v___x_783_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_787_);
lean_ctor_set(v_reuseFailAlloc_796_, 1, v___x_778_);
v___x_792_ = v_reuseFailAlloc_796_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
lean_object* v___x_794_; 
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 0, v___x_792_);
v___x_794_ = v___x_789_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_792_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
else
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
lean_del_object(v___x_783_);
v_a_798_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v___x_786_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_786_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_803_; 
if (v_isShared_801_ == 0)
{
v___x_803_ = v___x_800_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_a_798_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___boxed(lean_object* v_constName_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l_Lean_PrettyPrinter_ppConstNameWithInfos(v_constName_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
lean_dec(v___y_812_);
lean_dec_ref(v___y_811_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_PrettyPrinter_ppExprLegacy_spec__0(lean_object* v_opts_815_, lean_object* v_opt_816_){
_start:
{
lean_object* v_name_817_; lean_object* v_defValue_818_; lean_object* v_map_819_; lean_object* v___x_820_; 
v_name_817_ = lean_ctor_get(v_opt_816_, 0);
v_defValue_818_ = lean_ctor_get(v_opt_816_, 1);
v_map_819_ = lean_ctor_get(v_opts_815_, 0);
v___x_820_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_819_, v_name_817_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_inc(v_defValue_818_);
return v_defValue_818_;
}
else
{
lean_object* v_val_821_; 
v_val_821_ = lean_ctor_get(v___x_820_, 0);
lean_inc(v_val_821_);
lean_dec_ref_known(v___x_820_, 1);
if (lean_obj_tag(v_val_821_) == 3)
{
lean_object* v_v_822_; 
v_v_822_ = lean_ctor_get(v_val_821_, 0);
lean_inc(v_v_822_);
lean_dec_ref_known(v_val_821_, 1);
return v_v_822_;
}
else
{
lean_dec(v_val_821_);
lean_inc(v_defValue_818_);
return v_defValue_818_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_PrettyPrinter_ppExprLegacy_spec__0___boxed(lean_object* v_opts_823_, lean_object* v_opt_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lean_Option_get___at___00Lean_PrettyPrinter_ppExprLegacy_spec__0(v_opts_823_, v_opt_824_);
lean_dec_ref(v_opt_824_);
lean_dec_ref(v_opts_823_);
return v_res_825_;
}
}
static uint64_t _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__1(void){
_start:
{
lean_object* v___x_832_; uint64_t v___x_833_; 
v___x_832_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExprLegacy___closed__0));
v___x_833_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_832_);
return v___x_833_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__2(void){
_start:
{
uint64_t v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_834_ = lean_uint64_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__1, &l_Lean_PrettyPrinter_ppExprLegacy___closed__1_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__1);
v___x_835_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExprLegacy___closed__0));
v___x_836_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_836_, 0, v___x_835_);
lean_ctor_set_uint64(v___x_836_, sizeof(void*)*1, v___x_834_);
return v___x_836_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__4(void){
_start:
{
lean_object* v___x_839_; 
v___x_839_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_839_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__5(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__4, &l_Lean_PrettyPrinter_ppExprLegacy___closed__4_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__4);
v___x_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
return v___x_841_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__6(void){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_842_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__5, &l_Lean_PrettyPrinter_ppExprLegacy___closed__5_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__5);
v___x_843_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_843_, 0, v___x_842_);
lean_ctor_set(v___x_843_, 1, v___x_842_);
lean_ctor_set(v___x_843_, 2, v___x_842_);
lean_ctor_set(v___x_843_, 3, v___x_842_);
lean_ctor_set(v___x_843_, 4, v___x_842_);
lean_ctor_set(v___x_843_, 5, v___x_842_);
return v___x_843_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__7(void){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_844_ = lean_unsigned_to_nat(32u);
v___x_845_ = lean_mk_empty_array_with_capacity(v___x_844_);
v___x_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_846_, 0, v___x_845_);
return v___x_846_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__8(void){
_start:
{
size_t v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_847_ = ((size_t)5ULL);
v___x_848_ = lean_unsigned_to_nat(0u);
v___x_849_ = lean_unsigned_to_nat(32u);
v___x_850_ = lean_mk_empty_array_with_capacity(v___x_849_);
v___x_851_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__7, &l_Lean_PrettyPrinter_ppExprLegacy___closed__7_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__7);
v___x_852_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_852_, 0, v___x_851_);
lean_ctor_set(v___x_852_, 1, v___x_850_);
lean_ctor_set(v___x_852_, 2, v___x_848_);
lean_ctor_set(v___x_852_, 3, v___x_848_);
lean_ctor_set_usize(v___x_852_, 4, v___x_847_);
return v___x_852_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__9(void){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_853_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__5, &l_Lean_PrettyPrinter_ppExprLegacy___closed__5_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__5);
v___x_854_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
lean_ctor_set(v___x_854_, 1, v___x_853_);
lean_ctor_set(v___x_854_, 2, v___x_853_);
lean_ctor_set(v___x_854_, 3, v___x_853_);
lean_ctor_set(v___x_854_, 4, v___x_853_);
return v___x_854_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__11(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = l_Lean_Options_empty;
v___x_857_ = l_Lean_Core_getMaxHeartbeats(v___x_856_);
return v___x_857_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__12(void){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_858_ = lean_unsigned_to_nat(1u);
v___x_859_ = l_Lean_firstFrontendMacroScope;
v___x_860_ = lean_nat_add(v___x_859_, v___x_858_);
return v___x_860_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__17(void){
_start:
{
lean_object* v___x_871_; uint64_t v___x_872_; lean_object* v___x_873_; 
v___x_871_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__8, &l_Lean_PrettyPrinter_ppExprLegacy___closed__8_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__8);
v___x_872_ = 0ULL;
v___x_873_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_873_, 0, v___x_871_);
lean_ctor_set_uint64(v___x_873_, sizeof(void*)*1, v___x_872_);
return v___x_873_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__18(void){
_start:
{
lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_874_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__5, &l_Lean_PrettyPrinter_ppExprLegacy___closed__5_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__5);
v___x_875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_875_, 0, v___x_874_);
lean_ctor_set(v___x_875_, 1, v___x_874_);
return v___x_875_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__19(void){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_876_ = l_Lean_NameSet_empty;
v___x_877_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__8, &l_Lean_PrettyPrinter_ppExprLegacy___closed__8_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__8);
v___x_878_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_878_, 0, v___x_877_);
lean_ctor_set(v___x_878_, 1, v___x_877_);
lean_ctor_set(v___x_878_, 2, v___x_876_);
return v___x_878_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__20(void){
_start:
{
lean_object* v___x_879_; lean_object* v___x_880_; uint8_t v___x_881_; lean_object* v___x_882_; 
v___x_879_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__8, &l_Lean_PrettyPrinter_ppExprLegacy___closed__8_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__8);
v___x_880_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__5, &l_Lean_PrettyPrinter_ppExprLegacy___closed__5_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__5);
v___x_881_ = 1;
v___x_882_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_882_, 0, v___x_880_);
lean_ctor_set(v___x_882_, 1, v___x_880_);
lean_ctor_set(v___x_882_, 2, v___x_879_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*3, v___x_881_);
return v___x_882_;
}
}
static uint8_t _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__24(void){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; uint8_t v___x_888_; 
v___x_886_ = l_Lean_diagnostics;
v___x_887_ = l_Lean_Options_empty;
v___x_888_ = l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0(v___x_887_, v___x_886_);
return v___x_888_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__25(void){
_start:
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_889_ = l_Lean_maxRecDepth;
v___x_890_ = l_Lean_Options_empty;
v___x_891_ = l_Lean_Option_get___at___00Lean_PrettyPrinter_ppExprLegacy_spec__0(v___x_890_, v___x_889_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprLegacy(lean_object* v_env_892_, lean_object* v_mctx_893_, lean_object* v_lctx_894_, lean_object* v_opts_895_, lean_object* v_e_896_){
_start:
{
lean_object* v_a_899_; uint8_t v___x_902_; uint8_t v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v_a_933_; uint8_t v___y_937_; lean_object* v___y_938_; lean_object* v___y_939_; lean_object* v_fileName_940_; lean_object* v_fileMap_941_; lean_object* v_currNamespace_942_; lean_object* v_openDecls_943_; lean_object* v_initHeartbeats_944_; lean_object* v_maxHeartbeats_945_; lean_object* v_quotContext_946_; lean_object* v_currMacroScope_947_; lean_object* v_cancelTk_x3f_948_; lean_object* v_inheritedTraceOptions_949_; lean_object* v_currRecDepth_950_; lean_object* v_ref_951_; uint8_t v_suppressElabErrors_952_; lean_object* v___y_953_; uint8_t v___y_984_; lean_object* v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___y_988_; uint8_t v___y_1004_; lean_object* v___y_1005_; lean_object* v___y_1006_; lean_object* v___y_1007_; lean_object* v___y_1008_; uint8_t v___y_1009_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; uint8_t v___x_1032_; lean_object* v___y_1034_; lean_object* v___x_1044_; uint8_t v___y_1046_; lean_object* v_env_1066_; uint8_t v___x_1067_; 
v___x_902_ = 0;
v___x_903_ = 1;
v___x_904_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__2, &l_Lean_PrettyPrinter_ppExprLegacy___closed__2_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__2);
v___x_905_ = lean_box(1);
v___x_906_ = lean_unsigned_to_nat(0u);
v___x_907_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExprLegacy___closed__3));
v___x_908_ = lean_box(0);
v___x_909_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_909_, 0, v___x_904_);
lean_ctor_set(v___x_909_, 1, v___x_905_);
lean_ctor_set(v___x_909_, 2, v_lctx_894_);
lean_ctor_set(v___x_909_, 3, v___x_907_);
lean_ctor_set(v___x_909_, 4, v___x_908_);
lean_ctor_set(v___x_909_, 5, v___x_906_);
lean_ctor_set(v___x_909_, 6, v___x_908_);
lean_ctor_set_uint8(v___x_909_, sizeof(void*)*7, v___x_902_);
lean_ctor_set_uint8(v___x_909_, sizeof(void*)*7 + 1, v___x_902_);
lean_ctor_set_uint8(v___x_909_, sizeof(void*)*7 + 2, v___x_902_);
lean_ctor_set_uint8(v___x_909_, sizeof(void*)*7 + 3, v___x_903_);
v___x_910_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__6, &l_Lean_PrettyPrinter_ppExprLegacy___closed__6_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__6);
v___x_911_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__8, &l_Lean_PrettyPrinter_ppExprLegacy___closed__8_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__8);
v___x_912_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__9, &l_Lean_PrettyPrinter_ppExprLegacy___closed__9_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__9);
v___x_913_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_913_, 0, v_mctx_893_);
lean_ctor_set(v___x_913_, 1, v___x_910_);
lean_ctor_set(v___x_913_, 2, v___x_905_);
lean_ctor_set(v___x_913_, 3, v___x_911_);
lean_ctor_set(v___x_913_, 4, v___x_912_);
v___x_914_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExprLegacy___closed__10));
v___x_915_ = l_Lean_instInhabitedFileMap_default;
v___x_916_ = l_Lean_Options_empty;
v___x_917_ = lean_box(0);
v___x_918_ = lean_box(0);
v___x_919_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__11, &l_Lean_PrettyPrinter_ppExprLegacy___closed__11_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__11);
v___x_920_ = l_Lean_firstFrontendMacroScope;
v___x_921_ = lean_box(0);
v___x_922_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__12, &l_Lean_PrettyPrinter_ppExprLegacy___closed__12_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__12);
v___x_923_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExprLegacy___closed__15));
v___x_924_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExprLegacy___closed__16));
v___x_925_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__17, &l_Lean_PrettyPrinter_ppExprLegacy___closed__17_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__17);
v___x_926_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__18, &l_Lean_PrettyPrinter_ppExprLegacy___closed__18_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__18);
v___x_927_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__19, &l_Lean_PrettyPrinter_ppExprLegacy___closed__19_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__19);
v___x_928_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__20, &l_Lean_PrettyPrinter_ppExprLegacy___closed__20_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__20);
v___x_929_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_929_, 0, v_env_892_);
lean_ctor_set(v___x_929_, 1, v___x_922_);
lean_ctor_set(v___x_929_, 2, v___x_923_);
lean_ctor_set(v___x_929_, 3, v___x_924_);
lean_ctor_set(v___x_929_, 4, v___x_925_);
lean_ctor_set(v___x_929_, 5, v___x_926_);
lean_ctor_set(v___x_929_, 6, v___x_927_);
lean_ctor_set(v___x_929_, 7, v___x_928_);
lean_ctor_set(v___x_929_, 8, v___x_907_);
v___x_930_ = lean_io_get_num_heartbeats();
v___x_931_ = lean_st_mk_ref(v___x_929_);
v___x_1029_ = l_Lean_inheritedTraceOptions;
v___x_1030_ = lean_st_ref_get(v___x_1029_);
v___x_1031_ = l_Lean_diagnostics;
v___x_1032_ = lean_uint8_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__24, &l_Lean_PrettyPrinter_ppExprLegacy___closed__24_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__24);
v___x_1044_ = lean_st_ref_get(v___x_931_);
v_env_1066_ = lean_ctor_get(v___x_1044_, 0);
lean_inc_ref(v_env_1066_);
lean_dec(v___x_1044_);
v___x_1067_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_1066_);
lean_dec_ref(v_env_1066_);
if (v___x_1032_ == 0)
{
if (v___x_1067_ == 0)
{
lean_inc(v___x_931_);
v___y_1034_ = v___x_931_;
goto v___jp_1033_;
}
else
{
v___y_1046_ = v___x_1032_;
goto v___jp_1045_;
}
}
else
{
v___y_1046_ = v___x_1067_;
goto v___jp_1045_;
}
v___jp_898_:
{
lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_900_ = lean_mk_io_user_error(v_a_899_);
v___x_901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_901_, 0, v___x_900_);
return v___x_901_;
}
v___jp_932_:
{
lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_934_ = lean_st_ref_get(v___x_931_);
lean_dec(v___x_931_);
lean_dec(v___x_934_);
v___x_935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_935_, 0, v_a_933_);
return v___x_935_;
}
v___jp_936_:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_954_ = l_Lean_Option_get___at___00Lean_PrettyPrinter_ppExprLegacy_spec__0(v_opts_895_, v___y_938_);
v___x_955_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_955_, 0, v_fileName_940_);
lean_ctor_set(v___x_955_, 1, v_fileMap_941_);
lean_ctor_set(v___x_955_, 2, v_opts_895_);
lean_ctor_set(v___x_955_, 3, v___x_954_);
lean_ctor_set(v___x_955_, 4, v_currNamespace_942_);
lean_ctor_set(v___x_955_, 5, v_openDecls_943_);
lean_ctor_set(v___x_955_, 6, v_initHeartbeats_944_);
lean_ctor_set(v___x_955_, 7, v_maxHeartbeats_945_);
lean_ctor_set(v___x_955_, 8, v_quotContext_946_);
lean_ctor_set(v___x_955_, 9, v_currMacroScope_947_);
lean_ctor_set(v___x_955_, 10, v_cancelTk_x3f_948_);
lean_ctor_set(v___x_955_, 11, v_inheritedTraceOptions_949_);
v___x_956_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_956_, 0, v___x_955_);
lean_ctor_set(v___x_956_, 1, v_currRecDepth_950_);
lean_ctor_set(v___x_956_, 2, v_ref_951_);
lean_ctor_set_uint8(v___x_956_, sizeof(void*)*3, v___y_937_);
lean_ctor_set_uint8(v___x_956_, sizeof(void*)*3 + 1, v_suppressElabErrors_952_);
v___x_957_ = l_Lean_PrettyPrinter_ppExpr(v_e_896_, v___x_909_, v___y_939_, v___x_956_, v___y_953_);
lean_dec(v___y_953_);
lean_dec_ref_known(v___x_956_, 3);
lean_dec_ref_known(v___x_909_, 7);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_958_; lean_object* v___x_959_; 
v_a_958_ = lean_ctor_get(v___x_957_, 0);
lean_inc(v_a_958_);
lean_dec_ref_known(v___x_957_, 1);
v___x_959_ = lean_st_ref_get(v___y_939_);
lean_dec(v___y_939_);
lean_dec(v___x_959_);
v_a_933_ = v_a_958_;
goto v___jp_932_;
}
else
{
lean_dec(v___y_939_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_960_; 
v_a_960_ = lean_ctor_get(v___x_957_, 0);
lean_inc(v_a_960_);
lean_dec_ref_known(v___x_957_, 1);
v_a_933_ = v_a_960_;
goto v___jp_932_;
}
else
{
lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_982_; 
lean_dec(v___x_931_);
v_a_961_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_982_ == 0)
{
v___x_963_ = v___x_957_;
v_isShared_964_ = v_isSharedCheck_982_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_dec(v___x_957_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_982_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
if (lean_obj_tag(v_a_961_) == 0)
{
lean_object* v_msg_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_969_; 
v_msg_965_ = lean_ctor_get(v_a_961_, 1);
lean_inc_ref(v_msg_965_);
lean_dec_ref_known(v_a_961_, 2);
v___x_966_ = l_Lean_MessageData_toString(v_msg_965_);
v___x_967_ = lean_mk_io_user_error(v___x_966_);
if (v_isShared_964_ == 0)
{
lean_ctor_set(v___x_963_, 0, v___x_967_);
v___x_969_ = v___x_963_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v___x_967_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
else
{
lean_object* v_id_971_; lean_object* v___x_972_; 
lean_del_object(v___x_963_);
v_id_971_ = lean_ctor_get(v_a_961_, 0);
lean_inc(v_id_971_);
lean_dec_ref_known(v_a_961_, 2);
v___x_972_ = l_Lean_InternalExceptionId_getName(v_id_971_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
lean_dec(v_id_971_);
v_a_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc(v_a_973_);
lean_dec_ref_known(v___x_972_, 1);
v___x_974_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExprLegacy___closed__21));
v___x_975_ = l_Lean_Name_toString(v_a_973_, v___x_903_);
v___x_976_ = lean_string_append(v___x_974_, v___x_975_);
lean_dec_ref(v___x_975_);
v_a_899_ = v___x_976_;
goto v___jp_898_;
}
else
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
lean_dec_ref_known(v___x_972_, 1);
v___x_977_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExprLegacy___closed__22));
v___x_978_ = l_Nat_reprFast(v_id_971_);
v___x_979_ = lean_string_append(v___x_977_, v___x_978_);
lean_dec_ref(v___x_978_);
v___x_980_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExprLegacy___closed__23));
v___x_981_ = lean_string_append(v___x_979_, v___x_980_);
v_a_899_ = v___x_981_;
goto v___jp_898_;
}
}
}
}
}
}
v___jp_983_:
{
lean_object* v_toCold_989_; lean_object* v_currRecDepth_990_; lean_object* v_ref_991_; uint8_t v_suppressElabErrors_992_; lean_object* v_fileName_993_; lean_object* v_fileMap_994_; lean_object* v_currNamespace_995_; lean_object* v_openDecls_996_; lean_object* v_initHeartbeats_997_; lean_object* v_maxHeartbeats_998_; lean_object* v_quotContext_999_; lean_object* v_currMacroScope_1000_; lean_object* v_cancelTk_x3f_1001_; lean_object* v_inheritedTraceOptions_1002_; 
v_toCold_989_ = lean_ctor_get(v___y_987_, 0);
lean_inc_ref(v_toCold_989_);
v_currRecDepth_990_ = lean_ctor_get(v___y_987_, 1);
lean_inc(v_currRecDepth_990_);
v_ref_991_ = lean_ctor_get(v___y_987_, 2);
lean_inc(v_ref_991_);
v_suppressElabErrors_992_ = lean_ctor_get_uint8(v___y_987_, sizeof(void*)*3 + 1);
lean_dec_ref(v___y_987_);
v_fileName_993_ = lean_ctor_get(v_toCold_989_, 0);
lean_inc_ref(v_fileName_993_);
v_fileMap_994_ = lean_ctor_get(v_toCold_989_, 1);
lean_inc_ref(v_fileMap_994_);
v_currNamespace_995_ = lean_ctor_get(v_toCold_989_, 4);
lean_inc(v_currNamespace_995_);
v_openDecls_996_ = lean_ctor_get(v_toCold_989_, 5);
lean_inc(v_openDecls_996_);
v_initHeartbeats_997_ = lean_ctor_get(v_toCold_989_, 6);
lean_inc(v_initHeartbeats_997_);
v_maxHeartbeats_998_ = lean_ctor_get(v_toCold_989_, 7);
lean_inc(v_maxHeartbeats_998_);
v_quotContext_999_ = lean_ctor_get(v_toCold_989_, 8);
lean_inc(v_quotContext_999_);
v_currMacroScope_1000_ = lean_ctor_get(v_toCold_989_, 9);
lean_inc(v_currMacroScope_1000_);
v_cancelTk_x3f_1001_ = lean_ctor_get(v_toCold_989_, 10);
lean_inc(v_cancelTk_x3f_1001_);
v_inheritedTraceOptions_1002_ = lean_ctor_get(v_toCold_989_, 11);
lean_inc_ref(v_inheritedTraceOptions_1002_);
lean_dec_ref(v_toCold_989_);
v___y_937_ = v___y_984_;
v___y_938_ = v___y_985_;
v___y_939_ = v___y_986_;
v_fileName_940_ = v_fileName_993_;
v_fileMap_941_ = v_fileMap_994_;
v_currNamespace_942_ = v_currNamespace_995_;
v_openDecls_943_ = v_openDecls_996_;
v_initHeartbeats_944_ = v_initHeartbeats_997_;
v_maxHeartbeats_945_ = v_maxHeartbeats_998_;
v_quotContext_946_ = v_quotContext_999_;
v_currMacroScope_947_ = v_currMacroScope_1000_;
v_cancelTk_x3f_948_ = v_cancelTk_x3f_1001_;
v_inheritedTraceOptions_949_ = v_inheritedTraceOptions_1002_;
v_currRecDepth_950_ = v_currRecDepth_990_;
v_ref_951_ = v_ref_991_;
v_suppressElabErrors_952_ = v_suppressElabErrors_992_;
v___y_953_ = v___y_988_;
goto v___jp_936_;
}
v___jp_1003_:
{
if (v___y_1009_ == 0)
{
lean_object* v___x_1010_; lean_object* v_env_1011_; lean_object* v_nextMacroScope_1012_; lean_object* v_ngen_1013_; lean_object* v_auxDeclNGen_1014_; lean_object* v_traceState_1015_; lean_object* v_messages_1016_; lean_object* v_infoState_1017_; lean_object* v_snapshotTasks_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1027_; 
v___x_1010_ = lean_st_ref_take(v___y_1006_);
v_env_1011_ = lean_ctor_get(v___x_1010_, 0);
v_nextMacroScope_1012_ = lean_ctor_get(v___x_1010_, 1);
v_ngen_1013_ = lean_ctor_get(v___x_1010_, 2);
v_auxDeclNGen_1014_ = lean_ctor_get(v___x_1010_, 3);
v_traceState_1015_ = lean_ctor_get(v___x_1010_, 4);
v_messages_1016_ = lean_ctor_get(v___x_1010_, 6);
v_infoState_1017_ = lean_ctor_get(v___x_1010_, 7);
v_snapshotTasks_1018_ = lean_ctor_get(v___x_1010_, 8);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1027_ == 0)
{
lean_object* v_unused_1028_; 
v_unused_1028_ = lean_ctor_get(v___x_1010_, 5);
lean_dec(v_unused_1028_);
v___x_1020_ = v___x_1010_;
v_isShared_1021_ = v_isSharedCheck_1027_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_snapshotTasks_1018_);
lean_inc(v_infoState_1017_);
lean_inc(v_messages_1016_);
lean_inc(v_traceState_1015_);
lean_inc(v_auxDeclNGen_1014_);
lean_inc(v_ngen_1013_);
lean_inc(v_nextMacroScope_1012_);
lean_inc(v_env_1011_);
lean_dec(v___x_1010_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1027_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1022_; lean_object* v___x_1024_; 
v___x_1022_ = l_Lean_Kernel_enableDiag(v_env_1011_, v___y_1004_);
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 5, v___x_926_);
lean_ctor_set(v___x_1020_, 0, v___x_1022_);
v___x_1024_ = v___x_1020_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v___x_1022_);
lean_ctor_set(v_reuseFailAlloc_1026_, 1, v_nextMacroScope_1012_);
lean_ctor_set(v_reuseFailAlloc_1026_, 2, v_ngen_1013_);
lean_ctor_set(v_reuseFailAlloc_1026_, 3, v_auxDeclNGen_1014_);
lean_ctor_set(v_reuseFailAlloc_1026_, 4, v_traceState_1015_);
lean_ctor_set(v_reuseFailAlloc_1026_, 5, v___x_926_);
lean_ctor_set(v_reuseFailAlloc_1026_, 6, v_messages_1016_);
lean_ctor_set(v_reuseFailAlloc_1026_, 7, v_infoState_1017_);
lean_ctor_set(v_reuseFailAlloc_1026_, 8, v_snapshotTasks_1018_);
v___x_1024_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
lean_object* v___x_1025_; 
v___x_1025_ = lean_st_ref_put(v___y_1006_, v___x_1024_);
v___y_984_ = v___y_1004_;
v___y_985_ = v___y_1007_;
v___y_986_ = v___y_1008_;
v___y_987_ = v___y_1005_;
v___y_988_ = v___y_1006_;
goto v___jp_983_;
}
}
}
else
{
v___y_984_ = v___y_1004_;
v___y_985_ = v___y_1007_;
v___y_986_ = v___y_1008_;
v___y_987_ = v___y_1005_;
v___y_988_ = v___y_1006_;
goto v___jp_983_;
}
}
v___jp_1033_:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; uint8_t v___x_1040_; lean_object* v___x_1041_; lean_object* v_env_1042_; uint8_t v___x_1043_; 
v___x_1035_ = l_Lean_maxRecDepth;
v___x_1036_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__25, &l_Lean_PrettyPrinter_ppExprLegacy___closed__25_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__25);
lean_inc(v___x_1030_);
lean_inc(v___x_930_);
v___x_1037_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1037_, 0, v___x_914_);
lean_ctor_set(v___x_1037_, 1, v___x_915_);
lean_ctor_set(v___x_1037_, 2, v___x_916_);
lean_ctor_set(v___x_1037_, 3, v___x_1036_);
lean_ctor_set(v___x_1037_, 4, v___x_917_);
lean_ctor_set(v___x_1037_, 5, v___x_918_);
lean_ctor_set(v___x_1037_, 6, v___x_930_);
lean_ctor_set(v___x_1037_, 7, v___x_919_);
lean_ctor_set(v___x_1037_, 8, v___x_917_);
lean_ctor_set(v___x_1037_, 9, v___x_920_);
lean_ctor_set(v___x_1037_, 10, v___x_908_);
lean_ctor_set(v___x_1037_, 11, v___x_1030_);
v___x_1038_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1038_, 0, v___x_1037_);
lean_ctor_set(v___x_1038_, 1, v___x_906_);
lean_ctor_set(v___x_1038_, 2, v___x_921_);
lean_ctor_set_uint8(v___x_1038_, sizeof(void*)*3, v___x_1032_);
lean_ctor_set_uint8(v___x_1038_, sizeof(void*)*3 + 1, v___x_902_);
v___x_1039_ = lean_st_mk_ref(v___x_913_);
v___x_1040_ = l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0(v_opts_895_, v___x_1031_);
v___x_1041_ = lean_st_ref_get(v___y_1034_);
v_env_1042_ = lean_ctor_get(v___x_1041_, 0);
lean_inc_ref(v_env_1042_);
lean_dec(v___x_1041_);
v___x_1043_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_1042_);
lean_dec_ref(v_env_1042_);
if (v___x_1040_ == 0)
{
if (v___x_1043_ == 0)
{
lean_dec_ref_known(v___x_1038_, 3);
v___y_937_ = v___x_1040_;
v___y_938_ = v___x_1035_;
v___y_939_ = v___x_1039_;
v_fileName_940_ = v___x_914_;
v_fileMap_941_ = v___x_915_;
v_currNamespace_942_ = v___x_917_;
v_openDecls_943_ = v___x_918_;
v_initHeartbeats_944_ = v___x_930_;
v_maxHeartbeats_945_ = v___x_919_;
v_quotContext_946_ = v___x_917_;
v_currMacroScope_947_ = v___x_920_;
v_cancelTk_x3f_948_ = v___x_908_;
v_inheritedTraceOptions_949_ = v___x_1030_;
v_currRecDepth_950_ = v___x_906_;
v_ref_951_ = v___x_921_;
v_suppressElabErrors_952_ = v___x_902_;
v___y_953_ = v___y_1034_;
goto v___jp_936_;
}
else
{
lean_dec(v___x_1030_);
lean_dec(v___x_930_);
v___y_1004_ = v___x_1040_;
v___y_1005_ = v___x_1038_;
v___y_1006_ = v___y_1034_;
v___y_1007_ = v___x_1035_;
v___y_1008_ = v___x_1039_;
v___y_1009_ = v___x_1040_;
goto v___jp_1003_;
}
}
else
{
lean_dec(v___x_1030_);
lean_dec(v___x_930_);
v___y_1004_ = v___x_1040_;
v___y_1005_ = v___x_1038_;
v___y_1006_ = v___y_1034_;
v___y_1007_ = v___x_1035_;
v___y_1008_ = v___x_1039_;
v___y_1009_ = v___x_1043_;
goto v___jp_1003_;
}
}
v___jp_1045_:
{
if (v___y_1046_ == 0)
{
lean_object* v___x_1047_; lean_object* v_env_1048_; lean_object* v_nextMacroScope_1049_; lean_object* v_ngen_1050_; lean_object* v_auxDeclNGen_1051_; lean_object* v_traceState_1052_; lean_object* v_messages_1053_; lean_object* v_infoState_1054_; lean_object* v_snapshotTasks_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1064_; 
v___x_1047_ = lean_st_ref_take(v___x_931_);
v_env_1048_ = lean_ctor_get(v___x_1047_, 0);
v_nextMacroScope_1049_ = lean_ctor_get(v___x_1047_, 1);
v_ngen_1050_ = lean_ctor_get(v___x_1047_, 2);
v_auxDeclNGen_1051_ = lean_ctor_get(v___x_1047_, 3);
v_traceState_1052_ = lean_ctor_get(v___x_1047_, 4);
v_messages_1053_ = lean_ctor_get(v___x_1047_, 6);
v_infoState_1054_ = lean_ctor_get(v___x_1047_, 7);
v_snapshotTasks_1055_ = lean_ctor_get(v___x_1047_, 8);
v_isSharedCheck_1064_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1064_ == 0)
{
lean_object* v_unused_1065_; 
v_unused_1065_ = lean_ctor_get(v___x_1047_, 5);
lean_dec(v_unused_1065_);
v___x_1057_ = v___x_1047_;
v_isShared_1058_ = v_isSharedCheck_1064_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_snapshotTasks_1055_);
lean_inc(v_infoState_1054_);
lean_inc(v_messages_1053_);
lean_inc(v_traceState_1052_);
lean_inc(v_auxDeclNGen_1051_);
lean_inc(v_ngen_1050_);
lean_inc(v_nextMacroScope_1049_);
lean_inc(v_env_1048_);
lean_dec(v___x_1047_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1064_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1059_; lean_object* v___x_1061_; 
v___x_1059_ = l_Lean_Kernel_enableDiag(v_env_1048_, v___x_1032_);
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 5, v___x_926_);
lean_ctor_set(v___x_1057_, 0, v___x_1059_);
v___x_1061_ = v___x_1057_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v___x_1059_);
lean_ctor_set(v_reuseFailAlloc_1063_, 1, v_nextMacroScope_1049_);
lean_ctor_set(v_reuseFailAlloc_1063_, 2, v_ngen_1050_);
lean_ctor_set(v_reuseFailAlloc_1063_, 3, v_auxDeclNGen_1051_);
lean_ctor_set(v_reuseFailAlloc_1063_, 4, v_traceState_1052_);
lean_ctor_set(v_reuseFailAlloc_1063_, 5, v___x_926_);
lean_ctor_set(v_reuseFailAlloc_1063_, 6, v_messages_1053_);
lean_ctor_set(v_reuseFailAlloc_1063_, 7, v_infoState_1054_);
lean_ctor_set(v_reuseFailAlloc_1063_, 8, v_snapshotTasks_1055_);
v___x_1061_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
lean_object* v___x_1062_; 
v___x_1062_ = lean_st_ref_put(v___x_931_, v___x_1061_);
lean_inc(v___x_931_);
v___y_1034_ = v___x_931_;
goto v___jp_1033_;
}
}
}
else
{
lean_inc(v___x_931_);
v___y_1034_ = v___x_931_;
goto v___jp_1033_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprLegacy___boxed(lean_object* v_env_1068_, lean_object* v_mctx_1069_, lean_object* v_lctx_1070_, lean_object* v_opts_1071_, lean_object* v_e_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = l_Lean_PrettyPrinter_ppExprLegacy(v_env_1068_, v_mctx_1069_, v_lctx_1070_, v_opts_1071_, v_e_1072_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppLevel(lean_object* v_l_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1084_ = lean_unsigned_to_nat(0u);
v___x_1085_ = l_Lean_PrettyPrinter_delabLevel(v_l_1078_, v___x_1084_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
if (lean_obj_tag(v___x_1085_) == 0)
{
lean_object* v_a_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v_a_1086_ = lean_ctor_get(v___x_1085_, 0);
lean_inc(v_a_1086_);
lean_dec_ref_known(v___x_1085_, 1);
v___x_1087_ = ((lean_object*)(l_Lean_PrettyPrinter_ppLevel___closed__1));
v___x_1088_ = l_Lean_PrettyPrinter_ppCategory(v___x_1087_, v_a_1086_, v___y_1081_, v___y_1082_);
return v___x_1088_;
}
else
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
v_a_1089_ = lean_ctor_get(v___x_1085_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1085_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_1085_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1085_);
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
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1089_);
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
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppLevel___boxed(lean_object* v_l_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_){
_start:
{
lean_object* v_res_1103_; 
v_res_1103_ = l_Lean_PrettyPrinter_ppLevel(v_l_1097_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_);
lean_dec(v___y_1101_);
lean_dec_ref(v___y_1100_);
lean_dec(v___y_1099_);
lean_dec_ref(v___y_1098_);
return v_res_1103_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTactic(lean_object* v_stx_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1111_ = ((lean_object*)(l_Lean_PrettyPrinter_ppTactic___closed__1));
v___x_1112_ = l_Lean_PrettyPrinter_ppCategory(v___x_1111_, v_stx_1107_, v___y_1108_, v___y_1109_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTactic___boxed(lean_object* v_stx_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_){
_start:
{
lean_object* v_res_1117_; 
v_res_1117_ = l_Lean_PrettyPrinter_ppTactic(v_stx_1113_, v___y_1114_, v___y_1115_);
lean_dec(v___y_1115_);
lean_dec_ref(v___y_1114_);
return v_res_1117_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCommand(lean_object* v_stx_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = ((lean_object*)(l_Lean_PrettyPrinter_ppCommand___closed__1));
v___x_1126_ = l_Lean_PrettyPrinter_ppCategory(v___x_1125_, v_stx_1121_, v___y_1122_, v___y_1123_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCommand___boxed(lean_object* v_stx_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l_Lean_PrettyPrinter_ppCommand(v_stx_1127_, v___y_1128_, v___y_1129_);
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1128_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppModule(lean_object* v_stx_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1138_ = ((lean_object*)(l_Lean_PrettyPrinter_ppModule___closed__0));
v___x_1139_ = ((lean_object*)(l_Lean_PrettyPrinter_ppModule___closed__1));
v___x_1140_ = l_Lean_PrettyPrinter_parenthesize(v___x_1138_, v_stx_1134_, v___y_1135_, v___y_1136_);
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v_a_1141_; lean_object* v___x_1142_; 
v_a_1141_ = lean_ctor_get(v___x_1140_, 0);
lean_inc(v_a_1141_);
lean_dec_ref_known(v___x_1140_, 1);
v___x_1142_ = l_Lean_PrettyPrinter_format(v___x_1139_, v_a_1141_, v___y_1135_, v___y_1136_);
return v___x_1142_;
}
else
{
lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1150_; 
v_a_1143_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1145_ = v___x_1140_;
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v___x_1140_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1146_ == 0)
{
v___x_1148_ = v___x_1145_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_a_1143_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppModule___boxed(lean_object* v_stx_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l_Lean_PrettyPrinter_ppModule(v_stx_1151_, v___y_1152_, v___y_1153_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
return v_res_1155_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1156_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__4, &l_Lean_PrettyPrinter_ppExprLegacy___closed__4_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__4);
v___x_1157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1156_);
return v___x_1157_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1158_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_1159_ = lean_unsigned_to_nat(0u);
v___x_1160_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1159_);
lean_ctor_set(v___x_1160_, 1, v___x_1159_);
lean_ctor_set(v___x_1160_, 2, v___x_1159_);
lean_ctor_set(v___x_1160_, 3, v___x_1159_);
lean_ctor_set(v___x_1160_, 4, v___x_1158_);
lean_ctor_set(v___x_1160_, 5, v___x_1158_);
lean_ctor_set(v___x_1160_, 6, v___x_1158_);
lean_ctor_set(v___x_1160_, 7, v___x_1158_);
lean_ctor_set(v___x_1160_, 8, v___x_1158_);
lean_ctor_set(v___x_1160_, 9, v___x_1158_);
lean_ctor_set(v___x_1160_, 10, v___x_1158_);
return v___x_1160_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1161_ = lean_unsigned_to_nat(32u);
v___x_1162_ = lean_mk_empty_array_with_capacity(v___x_1161_);
v___x_1163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1162_);
return v___x_1163_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3(void){
_start:
{
size_t v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1164_ = ((size_t)5ULL);
v___x_1165_ = lean_unsigned_to_nat(0u);
v___x_1166_ = lean_unsigned_to_nat(32u);
v___x_1167_ = lean_mk_empty_array_with_capacity(v___x_1166_);
v___x_1168_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2);
v___x_1169_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1169_, 0, v___x_1168_);
lean_ctor_set(v___x_1169_, 1, v___x_1167_);
lean_ctor_set(v___x_1169_, 2, v___x_1165_);
lean_ctor_set(v___x_1169_, 3, v___x_1165_);
lean_ctor_set_usize(v___x_1169_, 4, v___x_1164_);
return v___x_1169_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4(void){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1170_ = lean_box(1);
v___x_1171_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_1172_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_1173_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1172_);
lean_ctor_set(v___x_1173_, 1, v___x_1171_);
lean_ctor_set(v___x_1173_, 2, v___x_1170_);
return v___x_1173_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6(void){
_start:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1175_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5));
v___x_1176_ = l_Lean_stringToMessageData(v___x_1175_);
return v___x_1176_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8(void){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1178_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7));
v___x_1179_ = l_Lean_stringToMessageData(v___x_1178_);
return v___x_1179_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10(void){
_start:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1181_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9));
v___x_1182_ = l_Lean_stringToMessageData(v___x_1181_);
return v___x_1182_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12(void){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1184_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11));
v___x_1185_ = l_Lean_stringToMessageData(v___x_1184_);
return v___x_1185_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14(void){
_start:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1187_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13));
v___x_1188_ = l_Lean_stringToMessageData(v___x_1187_);
return v___x_1188_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16(void){
_start:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1190_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15));
v___x_1191_ = l_Lean_stringToMessageData(v___x_1190_);
return v___x_1191_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18(void){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17));
v___x_1194_ = l_Lean_stringToMessageData(v___x_1193_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_msg_1195_, lean_object* v_declHint_1196_, lean_object* v___y_1197_){
_start:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v_env_1201_; uint8_t v___x_1202_; 
v___x_1199_ = lean_box(0);
v___x_1200_ = lean_st_ref_get(v___y_1197_);
v_env_1201_ = lean_ctor_get(v___x_1200_, 0);
lean_inc_ref(v_env_1201_);
lean_dec(v___x_1200_);
v___x_1202_ = l_Lean_Name_isAnonymous(v_declHint_1196_);
if (v___x_1202_ == 0)
{
uint8_t v_isExporting_1203_; 
v_isExporting_1203_ = lean_ctor_get_uint8(v_env_1201_, sizeof(void*)*8);
if (v_isExporting_1203_ == 0)
{
lean_object* v___x_1204_; 
lean_dec_ref(v_env_1201_);
lean_dec(v_declHint_1196_);
v___x_1204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1204_, 0, v_msg_1195_);
return v___x_1204_;
}
else
{
lean_object* v___x_1205_; uint8_t v___x_1206_; 
lean_inc_ref(v_env_1201_);
v___x_1205_ = l_Lean_Environment_setExporting(v_env_1201_, v___x_1202_);
lean_inc(v_declHint_1196_);
lean_inc_ref(v___x_1205_);
v___x_1206_ = l_Lean_Environment_contains(v___x_1205_, v_declHint_1196_, v_isExporting_1203_);
if (v___x_1206_ == 0)
{
lean_object* v___x_1207_; 
lean_dec_ref(v___x_1205_);
lean_dec_ref(v_env_1201_);
lean_dec(v_declHint_1196_);
v___x_1207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1207_, 0, v_msg_1195_);
return v___x_1207_;
}
else
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v_c_1213_; lean_object* v___x_1214_; 
v___x_1208_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_1209_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4);
v___x_1210_ = l_Lean_Options_empty;
v___x_1211_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1205_);
lean_ctor_set(v___x_1211_, 1, v___x_1208_);
lean_ctor_set(v___x_1211_, 2, v___x_1209_);
lean_ctor_set(v___x_1211_, 3, v___x_1210_);
lean_inc(v_declHint_1196_);
v___x_1212_ = l_Lean_MessageData_ofConstName(v_declHint_1196_, v___x_1202_);
v_c_1213_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1213_, 0, v___x_1211_);
lean_ctor_set(v_c_1213_, 1, v___x_1212_);
v___x_1214_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1201_, v_declHint_1196_);
if (lean_obj_tag(v___x_1214_) == 0)
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
lean_dec_ref(v_env_1201_);
lean_dec(v_declHint_1196_);
v___x_1215_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6);
v___x_1216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1215_);
lean_ctor_set(v___x_1216_, 1, v_c_1213_);
v___x_1217_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8);
v___x_1218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1216_);
lean_ctor_set(v___x_1218_, 1, v___x_1217_);
v___x_1219_ = l_Lean_MessageData_note(v___x_1218_);
v___x_1220_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1220_, 0, v_msg_1195_);
lean_ctor_set(v___x_1220_, 1, v___x_1219_);
v___x_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1220_);
return v___x_1221_;
}
else
{
lean_object* v_val_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1256_; 
v_val_1222_ = lean_ctor_get(v___x_1214_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1224_ = v___x_1214_;
v_isShared_1225_ = v_isSharedCheck_1256_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_val_1222_);
lean_dec(v___x_1214_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1256_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v_mod_1228_; uint8_t v___x_1229_; 
v___x_1226_ = l_Lean_Environment_header(v_env_1201_);
lean_dec_ref(v_env_1201_);
v___x_1227_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1226_);
v_mod_1228_ = lean_array_get(v___x_1199_, v___x_1227_, v_val_1222_);
lean_dec(v_val_1222_);
lean_dec_ref(v___x_1227_);
v___x_1229_ = l_Lean_isPrivateName(v_declHint_1196_);
lean_dec(v_declHint_1196_);
if (v___x_1229_ == 0)
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1241_; 
v___x_1230_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10);
v___x_1231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1230_);
lean_ctor_set(v___x_1231_, 1, v_c_1213_);
v___x_1232_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12);
v___x_1233_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1233_, 0, v___x_1231_);
lean_ctor_set(v___x_1233_, 1, v___x_1232_);
v___x_1234_ = l_Lean_MessageData_ofName(v_mod_1228_);
v___x_1235_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1233_);
lean_ctor_set(v___x_1235_, 1, v___x_1234_);
v___x_1236_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14);
v___x_1237_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1235_);
lean_ctor_set(v___x_1237_, 1, v___x_1236_);
v___x_1238_ = l_Lean_MessageData_note(v___x_1237_);
v___x_1239_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1239_, 0, v_msg_1195_);
lean_ctor_set(v___x_1239_, 1, v___x_1238_);
if (v_isShared_1225_ == 0)
{
lean_ctor_set_tag(v___x_1224_, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1239_);
v___x_1241_ = v___x_1224_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v___x_1239_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
return v___x_1241_;
}
}
else
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1254_; 
v___x_1243_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6);
v___x_1244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1243_);
lean_ctor_set(v___x_1244_, 1, v_c_1213_);
v___x_1245_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16);
v___x_1246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1244_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = l_Lean_MessageData_ofName(v_mod_1228_);
v___x_1248_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1246_);
lean_ctor_set(v___x_1248_, 1, v___x_1247_);
v___x_1249_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18);
v___x_1250_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1248_);
lean_ctor_set(v___x_1250_, 1, v___x_1249_);
v___x_1251_ = l_Lean_MessageData_note(v___x_1250_);
v___x_1252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1252_, 0, v_msg_1195_);
lean_ctor_set(v___x_1252_, 1, v___x_1251_);
if (v_isShared_1225_ == 0)
{
lean_ctor_set_tag(v___x_1224_, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1252_);
v___x_1254_ = v___x_1224_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v___x_1252_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1257_; 
lean_dec_ref(v_env_1201_);
lean_dec(v_declHint_1196_);
v___x_1257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1257_, 0, v_msg_1195_);
return v___x_1257_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_msg_1258_, lean_object* v_declHint_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_1258_, v_declHint_1259_, v___y_1260_);
lean_dec(v___y_1260_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_msg_1263_, lean_object* v_declHint_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_){
_start:
{
lean_object* v___x_1270_; lean_object* v_a_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1280_; 
v___x_1270_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_1263_, v_declHint_1264_, v___y_1268_);
v_a_1271_ = lean_ctor_get(v___x_1270_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1270_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1273_ = v___x_1270_;
v_isShared_1274_ = v_isSharedCheck_1280_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_a_1271_);
lean_dec(v___x_1270_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1280_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1278_; 
v___x_1275_ = l_Lean_unknownIdentifierMessageTag;
v___x_1276_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1275_);
lean_ctor_set(v___x_1276_, 1, v_a_1271_);
if (v_isShared_1274_ == 0)
{
lean_ctor_set(v___x_1273_, 0, v___x_1276_);
v___x_1278_ = v___x_1273_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v___x_1276_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_msg_1281_, lean_object* v_declHint_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_){
_start:
{
lean_object* v_res_1288_; 
v_res_1288_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3(v_msg_1281_, v_declHint_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_);
lean_dec(v___y_1286_);
lean_dec_ref(v___y_1285_);
lean_dec(v___y_1284_);
lean_dec_ref(v___y_1283_);
return v_res_1288_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7(lean_object* v_msgData_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
lean_object* v___x_1295_; lean_object* v_env_1296_; lean_object* v___x_1297_; lean_object* v_toCold_1298_; lean_object* v_mctx_1299_; lean_object* v_lctx_1300_; lean_object* v_options_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1295_ = lean_st_ref_get(v___y_1293_);
v_env_1296_ = lean_ctor_get(v___x_1295_, 0);
lean_inc_ref(v_env_1296_);
lean_dec(v___x_1295_);
v___x_1297_ = lean_st_ref_get(v___y_1291_);
v_toCold_1298_ = lean_ctor_get(v___y_1292_, 0);
v_mctx_1299_ = lean_ctor_get(v___x_1297_, 0);
lean_inc_ref(v_mctx_1299_);
lean_dec(v___x_1297_);
v_lctx_1300_ = lean_ctor_get(v___y_1290_, 2);
v_options_1301_ = lean_ctor_get(v_toCold_1298_, 2);
lean_inc_ref(v_options_1301_);
lean_inc_ref(v_lctx_1300_);
v___x_1302_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1302_, 0, v_env_1296_);
lean_ctor_set(v___x_1302_, 1, v_mctx_1299_);
lean_ctor_set(v___x_1302_, 2, v_lctx_1300_);
lean_ctor_set(v___x_1302_, 3, v_options_1301_);
v___x_1303_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1302_);
lean_ctor_set(v___x_1303_, 1, v_msgData_1289_);
v___x_1304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7___boxed(lean_object* v_msgData_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_){
_start:
{
lean_object* v_res_1311_; 
v_res_1311_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7(v_msgData_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
return v_res_1311_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(lean_object* v_msg_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_){
_start:
{
lean_object* v_ref_1318_; lean_object* v___x_1319_; lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1328_; 
v_ref_1318_ = lean_ctor_get(v___y_1315_, 2);
v___x_1319_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7(v_msg_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_);
v_a_1320_ = lean_ctor_get(v___x_1319_, 0);
v_isSharedCheck_1328_ = !lean_is_exclusive(v___x_1319_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1322_ = v___x_1319_;
v_isShared_1323_ = v_isSharedCheck_1328_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_dec(v___x_1319_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1328_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1324_; lean_object* v___x_1326_; 
lean_inc(v_ref_1318_);
v___x_1324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1324_, 0, v_ref_1318_);
lean_ctor_set(v___x_1324_, 1, v_a_1320_);
if (v_isShared_1323_ == 0)
{
lean_ctor_set_tag(v___x_1322_, 1);
lean_ctor_set(v___x_1322_, 0, v___x_1324_);
v___x_1326_ = v___x_1322_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v___x_1324_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v_msg_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(v_msg_1329_, v___y_1330_, v___y_1331_, v___y_1332_, v___y_1333_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
lean_dec(v___y_1331_);
lean_dec_ref(v___y_1330_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_ref_1336_, lean_object* v_msg_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_){
_start:
{
lean_object* v_toCold_1343_; lean_object* v_currRecDepth_1344_; lean_object* v_ref_1345_; uint8_t v_diag_1346_; uint8_t v_suppressElabErrors_1347_; lean_object* v_ref_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v_toCold_1343_ = lean_ctor_get(v___y_1340_, 0);
v_currRecDepth_1344_ = lean_ctor_get(v___y_1340_, 1);
v_ref_1345_ = lean_ctor_get(v___y_1340_, 2);
v_diag_1346_ = lean_ctor_get_uint8(v___y_1340_, sizeof(void*)*3);
v_suppressElabErrors_1347_ = lean_ctor_get_uint8(v___y_1340_, sizeof(void*)*3 + 1);
v_ref_1348_ = l_Lean_replaceRef(v_ref_1336_, v_ref_1345_);
lean_inc(v_currRecDepth_1344_);
lean_inc_ref(v_toCold_1343_);
v___x_1349_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1349_, 0, v_toCold_1343_);
lean_ctor_set(v___x_1349_, 1, v_currRecDepth_1344_);
lean_ctor_set(v___x_1349_, 2, v_ref_1348_);
lean_ctor_set_uint8(v___x_1349_, sizeof(void*)*3, v_diag_1346_);
lean_ctor_set_uint8(v___x_1349_, sizeof(void*)*3 + 1, v_suppressElabErrors_1347_);
v___x_1350_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(v_msg_1337_, v___y_1338_, v___y_1339_, v___x_1349_, v___y_1341_);
lean_dec_ref_known(v___x_1349_, 3);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_ref_1351_, lean_object* v_msg_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1351_, v_msg_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v_ref_1351_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_ref_1359_, lean_object* v_msg_1360_, lean_object* v_declHint_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_){
_start:
{
lean_object* v___x_1367_; lean_object* v_a_1368_; lean_object* v___x_1369_; 
v___x_1367_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3(v_msg_1360_, v_declHint_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_);
v_a_1368_ = lean_ctor_get(v___x_1367_, 0);
lean_inc(v_a_1368_);
lean_dec_ref(v___x_1367_);
v___x_1369_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1359_, v_a_1368_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_);
return v___x_1369_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_ref_1370_, lean_object* v_msg_1371_, lean_object* v_declHint_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
lean_object* v_res_1378_; 
v_res_1378_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1370_, v_msg_1371_, v_declHint_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
lean_dec(v___y_1374_);
lean_dec_ref(v___y_1373_);
lean_dec(v_ref_1370_);
return v_res_1378_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1380_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_1381_ = l_Lean_stringToMessageData(v___x_1380_);
return v___x_1381_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1383_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__2));
v___x_1384_ = l_Lean_stringToMessageData(v___x_1383_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_1385_, lean_object* v_constName_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
lean_object* v___x_1392_; uint8_t v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1392_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1393_ = 0;
lean_inc(v_constName_1386_);
v___x_1394_ = l_Lean_MessageData_ofConstName(v_constName_1386_, v___x_1393_);
v___x_1395_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1392_);
lean_ctor_set(v___x_1395_, 1, v___x_1394_);
v___x_1396_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__3);
v___x_1397_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1397_, 0, v___x_1395_);
lean_ctor_set(v___x_1397_, 1, v___x_1396_);
v___x_1398_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1385_, v___x_1397_, v_constName_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_);
return v___x_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1399_, lean_object* v_constName_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_){
_start:
{
lean_object* v_res_1406_; 
v_res_1406_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg(v_ref_1399_, v_constName_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
lean_dec(v___y_1404_);
lean_dec_ref(v___y_1403_);
lean_dec(v___y_1402_);
lean_dec_ref(v___y_1401_);
lean_dec(v_ref_1399_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___redArg(lean_object* v_constName_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
lean_object* v_ref_1413_; lean_object* v___x_1414_; 
v_ref_1413_ = lean_ctor_get(v___y_1410_, 2);
v___x_1414_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg(v_ref_1413_, v_constName_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
return v___x_1414_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_){
_start:
{
lean_object* v_res_1421_; 
v_res_1421_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___redArg(v_constName_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_);
lean_dec(v___y_1419_);
lean_dec_ref(v___y_1418_);
lean_dec(v___y_1417_);
lean_dec_ref(v___y_1416_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0(lean_object* v_constName_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_){
_start:
{
lean_object* v___x_1428_; lean_object* v_env_1429_; uint8_t v___x_1430_; lean_object* v___x_1431_; 
v___x_1428_ = lean_st_ref_get(v___y_1426_);
v_env_1429_ = lean_ctor_get(v___x_1428_, 0);
lean_inc_ref(v_env_1429_);
lean_dec(v___x_1428_);
v___x_1430_ = 0;
lean_inc(v_constName_1422_);
v___x_1431_ = l_Lean_Environment_find_x3f(v_env_1429_, v_constName_1422_, v___x_1430_);
if (lean_obj_tag(v___x_1431_) == 0)
{
lean_object* v___x_1432_; 
v___x_1432_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___redArg(v_constName_1422_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_);
return v___x_1432_;
}
else
{
lean_object* v_val_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1440_; 
lean_dec(v_constName_1422_);
v_val_1433_ = lean_ctor_get(v___x_1431_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1431_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1435_ = v___x_1431_;
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_val_1433_);
lean_dec(v___x_1431_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v___x_1438_; 
if (v_isShared_1436_ == 0)
{
lean_ctor_set_tag(v___x_1435_, 0);
v___x_1438_ = v___x_1435_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_val_1433_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0___boxed(lean_object* v_constName_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0(v_constName_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_);
lean_dec(v___y_1445_);
lean_dec_ref(v___y_1444_);
lean_dec(v___y_1443_);
lean_dec_ref(v___y_1442_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppSignature(lean_object* v_c_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_){
_start:
{
lean_object* v___x_1458_; 
lean_inc(v_c_1452_);
v___x_1458_ = l_Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0(v_c_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_);
if (lean_obj_tag(v___x_1458_) == 0)
{
lean_object* v_toCold_1459_; lean_object* v_a_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1522_; 
v_toCold_1459_ = lean_ctor_get(v___y_1455_, 0);
v_a_1460_ = lean_ctor_get(v___x_1458_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1458_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1462_ = v___x_1458_;
v_isShared_1463_ = v_isSharedCheck_1522_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_a_1460_);
lean_dec(v___x_1458_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1522_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v_options_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; uint8_t v___x_1470_; 
v_options_1464_ = lean_ctor_get(v_toCold_1459_, 2);
v___x_1465_ = l_Lean_ConstantInfo_levelParams(v_a_1460_);
v___x_1466_ = lean_box(0);
v___x_1467_ = l_List_mapTR_loop___at___00Lean_PrettyPrinter_ppConstNameWithInfos_spec__0(v___x_1465_, v___x_1466_);
v___x_1468_ = l_Lean_Expr_const___override(v_c_1452_, v___x_1467_);
v___x_1469_ = l_Lean_pp_raw;
v___x_1470_ = l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0(v_options_1464_, v___x_1469_);
if (v___x_1470_ == 0)
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
lean_del_object(v___x_1462_);
lean_dec(v_a_1460_);
v___x_1471_ = lean_box(1);
v___x_1472_ = ((lean_object*)(l_Lean_PrettyPrinter_ppSignature___closed__0));
v___x_1473_ = l_Lean_PrettyPrinter_delabCore___redArg(v___x_1468_, v___x_1471_, v___x_1472_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_);
if (lean_obj_tag(v___x_1473_) == 0)
{
lean_object* v_a_1474_; lean_object* v_fst_1475_; lean_object* v_snd_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1501_; 
v_a_1474_ = lean_ctor_get(v___x_1473_, 0);
lean_inc(v_a_1474_);
lean_dec_ref_known(v___x_1473_, 1);
v_fst_1475_ = lean_ctor_get(v_a_1474_, 0);
v_snd_1476_ = lean_ctor_get(v_a_1474_, 1);
v_isSharedCheck_1501_ = !lean_is_exclusive(v_a_1474_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1478_ = v_a_1474_;
v_isShared_1479_ = v_isSharedCheck_1501_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_snd_1476_);
lean_inc(v_fst_1475_);
lean_dec(v_a_1474_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1501_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1480_; 
v___x_1480_ = l_Lean_PrettyPrinter_ppTerm(v_fst_1475_, v___y_1455_, v___y_1456_);
if (lean_obj_tag(v___x_1480_) == 0)
{
lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1492_; 
v_a_1481_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1483_ = v___x_1480_;
v_isShared_1484_ = v_isSharedCheck_1492_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v___x_1480_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1492_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1485_; lean_object* v___x_1487_; 
v___x_1485_ = l_Lean_PrettyPrinter_InfoPerPos_ofPosMap(v_snd_1476_);
if (v_isShared_1479_ == 0)
{
lean_ctor_set(v___x_1478_, 1, v___x_1485_);
lean_ctor_set(v___x_1478_, 0, v_a_1481_);
v___x_1487_ = v___x_1478_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_a_1481_);
lean_ctor_set(v_reuseFailAlloc_1491_, 1, v___x_1485_);
v___x_1487_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
lean_object* v___x_1489_; 
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 0, v___x_1487_);
v___x_1489_ = v___x_1483_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v___x_1487_);
v___x_1489_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
return v___x_1489_;
}
}
}
}
else
{
lean_object* v_a_1493_; lean_object* v___x_1495_; uint8_t v_isShared_1496_; uint8_t v_isSharedCheck_1500_; 
lean_del_object(v___x_1478_);
lean_dec(v_snd_1476_);
v_a_1493_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1500_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1500_ == 0)
{
v___x_1495_ = v___x_1480_;
v_isShared_1496_ = v_isSharedCheck_1500_;
goto v_resetjp_1494_;
}
else
{
lean_inc(v_a_1493_);
lean_dec(v___x_1480_);
v___x_1495_ = lean_box(0);
v_isShared_1496_ = v_isSharedCheck_1500_;
goto v_resetjp_1494_;
}
v_resetjp_1494_:
{
lean_object* v___x_1498_; 
if (v_isShared_1496_ == 0)
{
v___x_1498_ = v___x_1495_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v_a_1493_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
return v___x_1498_;
}
}
}
}
}
else
{
lean_object* v_a_1502_; lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1509_; 
v_a_1502_ = lean_ctor_get(v___x_1473_, 0);
v_isSharedCheck_1509_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1509_ == 0)
{
v___x_1504_ = v___x_1473_;
v_isShared_1505_ = v_isSharedCheck_1509_;
goto v_resetjp_1503_;
}
else
{
lean_inc(v_a_1502_);
lean_dec(v___x_1473_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1509_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
lean_object* v___x_1507_; 
if (v_isShared_1505_ == 0)
{
v___x_1507_ = v___x_1504_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v_a_1502_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
}
}
else
{
lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1520_; 
v___x_1510_ = lean_expr_dbg_to_string(v___x_1468_);
lean_dec_ref(v___x_1468_);
v___x_1511_ = ((lean_object*)(l_Lean_PrettyPrinter_ppSignature___closed__1));
v___x_1512_ = lean_string_append(v___x_1510_, v___x_1511_);
v___x_1513_ = l_Lean_ConstantInfo_type(v_a_1460_);
lean_dec(v_a_1460_);
v___x_1514_ = lean_expr_dbg_to_string(v___x_1513_);
lean_dec_ref(v___x_1513_);
v___x_1515_ = lean_string_append(v___x_1512_, v___x_1514_);
lean_dec_ref(v___x_1514_);
v___x_1516_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1515_);
v___x_1517_ = lean_box(1);
v___x_1518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1518_, 0, v___x_1516_);
lean_ctor_set(v___x_1518_, 1, v___x_1517_);
if (v_isShared_1463_ == 0)
{
lean_ctor_set(v___x_1462_, 0, v___x_1518_);
v___x_1520_ = v___x_1462_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v___x_1518_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
}
else
{
lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1530_; 
lean_dec(v_c_1452_);
v_a_1523_ = lean_ctor_get(v___x_1458_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1458_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1525_ = v___x_1458_;
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___x_1458_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1528_; 
if (v_isShared_1526_ == 0)
{
v___x_1528_ = v___x_1525_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_a_1523_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppSignature___boxed(lean_object* v_c_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_){
_start:
{
lean_object* v_res_1537_; 
v_res_1537_ = l_Lean_PrettyPrinter_ppSignature(v_c_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0(lean_object* v_00_u03b1_1538_, lean_object* v_constName_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_){
_start:
{
lean_object* v___x_1545_; 
v___x_1545_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___redArg(v_constName_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1546_, lean_object* v_constName_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_){
_start:
{
lean_object* v_res_1553_; 
v_res_1553_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0(v_00_u03b1_1546_, v_constName_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
lean_dec(v___y_1551_);
lean_dec_ref(v___y_1550_);
lean_dec(v___y_1549_);
lean_dec_ref(v___y_1548_);
return v_res_1553_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_1554_, lean_object* v_ref_1555_, lean_object* v_constName_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_){
_start:
{
lean_object* v___x_1562_; 
v___x_1562_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg(v_ref_1555_, v_constName_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1563_, lean_object* v_ref_1564_, lean_object* v_constName_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_){
_start:
{
lean_object* v_res_1571_; 
v_res_1571_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1(v_00_u03b1_1563_, v_ref_1564_, v_constName_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_);
lean_dec(v___y_1569_);
lean_dec_ref(v___y_1568_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
lean_dec(v_ref_1564_);
return v_res_1571_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_1572_, lean_object* v_ref_1573_, lean_object* v_msg_1574_, lean_object* v_declHint_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_){
_start:
{
lean_object* v___x_1581_; 
v___x_1581_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1573_, v_msg_1574_, v_declHint_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1582_, lean_object* v_ref_1583_, lean_object* v_msg_1584_, lean_object* v_declHint_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_1582_, v_ref_1583_, v_msg_1584_, v_declHint_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v___y_1587_);
lean_dec_ref(v___y_1586_);
lean_dec(v_ref_1583_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_msg_1592_, lean_object* v_declHint_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_){
_start:
{
lean_object* v___x_1599_; 
v___x_1599_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_1592_, v_declHint_1593_, v___y_1597_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_msg_1600_, lean_object* v_declHint_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_msg_1600_, v_declHint_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec(v___y_1603_);
lean_dec_ref(v___y_1602_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b1_1608_, lean_object* v_ref_1609_, lean_object* v_msg_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
lean_object* v___x_1616_; 
v___x_1616_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1609_, v_msg_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b1_1617_, lean_object* v_ref_1618_, lean_object* v_msg_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_){
_start:
{
lean_object* v_res_1625_; 
v_res_1625_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4(v_00_u03b1_1617_, v_ref_1618_, v_msg_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_);
lean_dec(v___y_1623_);
lean_dec_ref(v___y_1622_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
lean_dec(v_ref_1618_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6(lean_object* v_00_u03b1_1626_, lean_object* v_msg_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_){
_start:
{
lean_object* v___x_1633_; 
v___x_1633_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(v_msg_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_);
return v___x_1633_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___boxed(lean_object* v_00_u03b1_1634_, lean_object* v_msg_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_){
_start:
{
lean_object* v_res_1641_; 
v_res_1641_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6(v_00_u03b1_1634_, v_msg_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_);
lean_dec(v___y_1639_);
lean_dec_ref(v___y_1638_);
lean_dec(v___y_1637_);
lean_dec_ref(v___y_1636_);
return v_res_1641_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(lean_object* v_x_1642_){
_start:
{
switch(lean_obj_tag(v_x_1642_))
{
case 3:
{
lean_object* v_a_1643_; 
v_a_1643_ = lean_ctor_get(v_x_1642_, 1);
lean_inc_ref(v_a_1643_);
lean_dec_ref_known(v_x_1642_, 2);
v_x_1642_ = v_a_1643_;
goto _start;
}
case 4:
{
lean_object* v_a_1645_; lean_object* v_a_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1654_; 
v_a_1645_ = lean_ctor_get(v_x_1642_, 0);
v_a_1646_ = lean_ctor_get(v_x_1642_, 1);
v_isSharedCheck_1654_ = !lean_is_exclusive(v_x_1642_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1648_ = v_x_1642_;
v_isShared_1649_ = v_isSharedCheck_1654_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_a_1646_);
lean_inc(v_a_1645_);
lean_dec(v_x_1642_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1654_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___x_1650_; lean_object* v___x_1652_; 
v___x_1650_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_a_1646_);
if (v_isShared_1649_ == 0)
{
lean_ctor_set(v___x_1648_, 1, v___x_1650_);
v___x_1652_ = v___x_1648_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_a_1645_);
lean_ctor_set(v_reuseFailAlloc_1653_, 1, v___x_1650_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
case 5:
{
lean_object* v_a_1655_; lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1664_; 
v_a_1655_ = lean_ctor_get(v_x_1642_, 0);
v_a_1656_ = lean_ctor_get(v_x_1642_, 1);
v_isSharedCheck_1664_ = !lean_is_exclusive(v_x_1642_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1658_ = v_x_1642_;
v_isShared_1659_ = v_isSharedCheck_1664_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_inc(v_a_1655_);
lean_dec(v_x_1642_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1664_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1660_; lean_object* v___x_1662_; 
v___x_1660_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_a_1656_);
if (v_isShared_1659_ == 0)
{
lean_ctor_set(v___x_1658_, 1, v___x_1660_);
v___x_1662_ = v___x_1658_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v_a_1655_);
lean_ctor_set(v_reuseFailAlloc_1663_, 1, v___x_1660_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
case 6:
{
lean_object* v_a_1665_; lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1673_; 
v_a_1665_ = lean_ctor_get(v_x_1642_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v_x_1642_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1667_ = v_x_1642_;
v_isShared_1668_ = v_isSharedCheck_1673_;
goto v_resetjp_1666_;
}
else
{
lean_inc(v_a_1665_);
lean_dec(v_x_1642_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1673_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
lean_object* v___x_1669_; lean_object* v___x_1671_; 
v___x_1669_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_a_1665_);
if (v_isShared_1668_ == 0)
{
lean_ctor_set(v___x_1667_, 0, v___x_1669_);
v___x_1671_ = v___x_1667_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v___x_1669_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
}
}
}
case 7:
{
lean_object* v_a_1674_; lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1684_; 
v_a_1674_ = lean_ctor_get(v_x_1642_, 0);
v_a_1675_ = lean_ctor_get(v_x_1642_, 1);
v_isSharedCheck_1684_ = !lean_is_exclusive(v_x_1642_);
if (v_isSharedCheck_1684_ == 0)
{
v___x_1677_ = v_x_1642_;
v_isShared_1678_ = v_isSharedCheck_1684_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_inc(v_a_1674_);
lean_dec(v_x_1642_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1684_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1682_; 
v___x_1679_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_a_1674_);
v___x_1680_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_a_1675_);
if (v_isShared_1678_ == 0)
{
lean_ctor_set(v___x_1677_, 1, v___x_1680_);
lean_ctor_set(v___x_1677_, 0, v___x_1679_);
v___x_1682_ = v___x_1677_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v___x_1679_);
lean_ctor_set(v_reuseFailAlloc_1683_, 1, v___x_1680_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
case 8:
{
lean_object* v_a_1685_; lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1694_; 
v_a_1685_ = lean_ctor_get(v_x_1642_, 0);
v_a_1686_ = lean_ctor_get(v_x_1642_, 1);
v_isSharedCheck_1694_ = !lean_is_exclusive(v_x_1642_);
if (v_isSharedCheck_1694_ == 0)
{
v___x_1688_ = v_x_1642_;
v_isShared_1689_ = v_isSharedCheck_1694_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_inc(v_a_1685_);
lean_dec(v_x_1642_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1694_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1690_; lean_object* v___x_1692_; 
v___x_1690_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_a_1686_);
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 1, v___x_1690_);
v___x_1692_ = v___x_1688_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v_a_1685_);
lean_ctor_set(v_reuseFailAlloc_1693_, 1, v___x_1690_);
v___x_1692_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
return v___x_1692_;
}
}
}
case 9:
{
lean_object* v_data_1695_; lean_object* v_msg_1696_; lean_object* v_children_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1708_; 
v_data_1695_ = lean_ctor_get(v_x_1642_, 0);
v_msg_1696_ = lean_ctor_get(v_x_1642_, 1);
v_children_1697_ = lean_ctor_get(v_x_1642_, 2);
v_isSharedCheck_1708_ = !lean_is_exclusive(v_x_1642_);
if (v_isSharedCheck_1708_ == 0)
{
v___x_1699_ = v_x_1642_;
v_isShared_1700_ = v_isSharedCheck_1708_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_children_1697_);
lean_inc(v_msg_1696_);
lean_inc(v_data_1695_);
lean_dec(v_x_1642_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1708_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1701_; size_t v_sz_1702_; size_t v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1706_; 
v___x_1701_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_msg_1696_);
v_sz_1702_ = lean_array_size(v_children_1697_);
v___x_1703_ = ((size_t)0ULL);
v___x_1704_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext_spec__0(v_sz_1702_, v___x_1703_, v_children_1697_);
if (v_isShared_1700_ == 0)
{
lean_ctor_set(v___x_1699_, 2, v___x_1704_);
lean_ctor_set(v___x_1699_, 1, v___x_1701_);
v___x_1706_ = v___x_1699_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v_data_1695_);
lean_ctor_set(v_reuseFailAlloc_1707_, 1, v___x_1701_);
lean_ctor_set(v_reuseFailAlloc_1707_, 2, v___x_1704_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
return v___x_1706_;
}
}
}
default: 
{
return v_x_1642_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext_spec__0(size_t v_sz_1709_, size_t v_i_1710_, lean_object* v_bs_1711_){
_start:
{
uint8_t v___x_1712_; 
v___x_1712_ = lean_usize_dec_lt(v_i_1710_, v_sz_1709_);
if (v___x_1712_ == 0)
{
return v_bs_1711_;
}
else
{
lean_object* v_v_1713_; lean_object* v___x_1714_; lean_object* v_bs_x27_1715_; lean_object* v___x_1716_; size_t v___x_1717_; size_t v___x_1718_; lean_object* v___x_1719_; 
v_v_1713_ = lean_array_uget(v_bs_1711_, v_i_1710_);
v___x_1714_ = lean_unsigned_to_nat(0u);
v_bs_x27_1715_ = lean_array_uset(v_bs_1711_, v_i_1710_, v___x_1714_);
v___x_1716_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_v_1713_);
v___x_1717_ = ((size_t)1ULL);
v___x_1718_ = lean_usize_add(v_i_1710_, v___x_1717_);
v___x_1719_ = lean_array_uset(v_bs_x27_1715_, v_i_1710_, v___x_1716_);
v_i_1710_ = v___x_1718_;
v_bs_1711_ = v___x_1719_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext_spec__0___boxed(lean_object* v_sz_1721_, lean_object* v_i_1722_, lean_object* v_bs_1723_){
_start:
{
size_t v_sz_boxed_1724_; size_t v_i_boxed_1725_; lean_object* v_res_1726_; 
v_sz_boxed_1724_ = lean_unbox_usize(v_sz_1721_);
lean_dec(v_sz_1721_);
v_i_boxed_1725_ = lean_unbox_usize(v_i_1722_);
lean_dec(v_i_1722_);
v_res_1726_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext_spec__0(v_sz_boxed_1724_, v_i_boxed_1725_, v_bs_1723_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___redArg___lam__0(lean_object* v_throw_1727_, lean_object* v_x_1728_){
_start:
{
if (lean_obj_tag(v_x_1728_) == 0)
{
lean_object* v_ref_1729_; lean_object* v_msg_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1739_; 
v_ref_1729_ = lean_ctor_get(v_x_1728_, 0);
v_msg_1730_ = lean_ctor_get(v_x_1728_, 1);
v_isSharedCheck_1739_ = !lean_is_exclusive(v_x_1728_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1732_ = v_x_1728_;
v_isShared_1733_ = v_isSharedCheck_1739_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_msg_1730_);
lean_inc(v_ref_1729_);
lean_dec(v_x_1728_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1739_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___x_1734_; lean_object* v___x_1736_; 
v___x_1734_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_msg_1730_);
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 1, v___x_1734_);
v___x_1736_ = v___x_1732_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_ref_1729_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v___x_1734_);
v___x_1736_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
lean_object* v___x_1737_; 
v___x_1737_ = lean_apply_2(v_throw_1727_, lean_box(0), v___x_1736_);
return v___x_1737_;
}
}
}
else
{
lean_object* v___x_1740_; 
v___x_1740_ = lean_apply_2(v_throw_1727_, lean_box(0), v_x_1728_);
return v___x_1740_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___redArg(lean_object* v_inst_1741_, lean_object* v_x_1742_){
_start:
{
lean_object* v_throw_1743_; lean_object* v_tryCatch_1744_; lean_object* v___f_1745_; lean_object* v___x_1746_; 
v_throw_1743_ = lean_ctor_get(v_inst_1741_, 0);
lean_inc(v_throw_1743_);
v_tryCatch_1744_ = lean_ctor_get(v_inst_1741_, 1);
lean_inc(v_tryCatch_1744_);
lean_dec_ref(v_inst_1741_);
v___f_1745_ = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1745_, 0, v_throw_1743_);
v___x_1746_ = lean_apply_3(v_tryCatch_1744_, lean_box(0), v_x_1742_, v___f_1745_);
return v___x_1746_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext(lean_object* v_00_u03b1_1747_, lean_object* v_m_1748_, lean_object* v_inst_1749_, lean_object* v_x_1750_){
_start:
{
lean_object* v___x_1751_; 
v___x_1751_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___redArg(v_inst_1749_, v_x_1750_);
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__0___redArg(lean_object* v_x_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_){
_start:
{
lean_object* v___x_1758_; 
lean_inc(v___y_1756_);
lean_inc_ref(v___y_1755_);
lean_inc(v___y_1754_);
lean_inc_ref(v___y_1753_);
v___x_1758_ = lean_apply_5(v_x_1752_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_, lean_box(0));
if (lean_obj_tag(v___x_1758_) == 0)
{
return v___x_1758_;
}
else
{
lean_object* v_a_1759_; uint8_t v___y_1761_; uint8_t v___x_1780_; 
v_a_1759_ = lean_ctor_get(v___x_1758_, 0);
lean_inc(v_a_1759_);
v___x_1780_ = l_Lean_Exception_isInterrupt(v_a_1759_);
if (v___x_1780_ == 0)
{
uint8_t v___x_1781_; 
lean_inc(v_a_1759_);
v___x_1781_ = l_Lean_Exception_isRuntime(v_a_1759_);
v___y_1761_ = v___x_1781_;
goto v___jp_1760_;
}
else
{
v___y_1761_ = v___x_1780_;
goto v___jp_1760_;
}
v___jp_1760_:
{
if (v___y_1761_ == 0)
{
if (lean_obj_tag(v_a_1759_) == 0)
{
lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1778_; 
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1758_);
if (v_isSharedCheck_1778_ == 0)
{
lean_object* v_unused_1779_; 
v_unused_1779_ = lean_ctor_get(v___x_1758_, 0);
lean_dec(v_unused_1779_);
v___x_1763_ = v___x_1758_;
v_isShared_1764_ = v_isSharedCheck_1778_;
goto v_resetjp_1762_;
}
else
{
lean_dec(v___x_1758_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1778_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v_ref_1765_; lean_object* v_msg_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1777_; 
v_ref_1765_ = lean_ctor_get(v_a_1759_, 0);
v_msg_1766_ = lean_ctor_get(v_a_1759_, 1);
v_isSharedCheck_1777_ = !lean_is_exclusive(v_a_1759_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1768_ = v_a_1759_;
v_isShared_1769_ = v_isSharedCheck_1777_;
goto v_resetjp_1767_;
}
else
{
lean_inc(v_msg_1766_);
lean_inc(v_ref_1765_);
lean_dec(v_a_1759_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1777_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1770_; lean_object* v___x_1772_; 
v___x_1770_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_msg_1766_);
if (v_isShared_1769_ == 0)
{
lean_ctor_set(v___x_1768_, 1, v___x_1770_);
v___x_1772_ = v___x_1768_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_ref_1765_);
lean_ctor_set(v_reuseFailAlloc_1776_, 1, v___x_1770_);
v___x_1772_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
lean_object* v___x_1774_; 
if (v_isShared_1764_ == 0)
{
lean_ctor_set(v___x_1763_, 0, v___x_1772_);
v___x_1774_ = v___x_1763_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v___x_1772_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
}
else
{
lean_dec(v_a_1759_);
return v___x_1758_;
}
}
else
{
lean_dec(v_a_1759_);
return v___x_1758_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_x_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__0___redArg(v_x_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_);
lean_dec(v___y_1786_);
lean_dec_ref(v___y_1785_);
lean_dec(v___y_1784_);
lean_dec_ref(v___y_1783_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_1789_, lean_object* v_x_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_){
_start:
{
lean_object* v___x_1796_; 
v___x_1796_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__0___redArg(v_x_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_1797_, lean_object* v_x_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_){
_start:
{
lean_object* v_res_1804_; 
v_res_1804_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__0(v_00_u03b1_1797_, v_x_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
lean_dec(v___y_1802_);
lean_dec_ref(v___y_1801_);
lean_dec(v___y_1800_);
lean_dec_ref(v___y_1799_);
return v_res_1804_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__1___redArg(lean_object* v_x_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
lean_object* v___x_1809_; 
lean_inc(v___y_1807_);
lean_inc_ref(v___y_1806_);
v___x_1809_ = lean_apply_3(v_x_1805_, v___y_1806_, v___y_1807_, lean_box(0));
if (lean_obj_tag(v___x_1809_) == 0)
{
return v___x_1809_;
}
else
{
lean_object* v_a_1810_; uint8_t v___y_1812_; uint8_t v___x_1831_; 
v_a_1810_ = lean_ctor_get(v___x_1809_, 0);
lean_inc(v_a_1810_);
v___x_1831_ = l_Lean_Exception_isInterrupt(v_a_1810_);
if (v___x_1831_ == 0)
{
uint8_t v___x_1832_; 
lean_inc(v_a_1810_);
v___x_1832_ = l_Lean_Exception_isRuntime(v_a_1810_);
v___y_1812_ = v___x_1832_;
goto v___jp_1811_;
}
else
{
v___y_1812_ = v___x_1831_;
goto v___jp_1811_;
}
v___jp_1811_:
{
if (v___y_1812_ == 0)
{
if (lean_obj_tag(v_a_1810_) == 0)
{
lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1829_; 
v_isSharedCheck_1829_ = !lean_is_exclusive(v___x_1809_);
if (v_isSharedCheck_1829_ == 0)
{
lean_object* v_unused_1830_; 
v_unused_1830_ = lean_ctor_get(v___x_1809_, 0);
lean_dec(v_unused_1830_);
v___x_1814_ = v___x_1809_;
v_isShared_1815_ = v_isSharedCheck_1829_;
goto v_resetjp_1813_;
}
else
{
lean_dec(v___x_1809_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1829_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v_ref_1816_; lean_object* v_msg_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1828_; 
v_ref_1816_ = lean_ctor_get(v_a_1810_, 0);
v_msg_1817_ = lean_ctor_get(v_a_1810_, 1);
v_isSharedCheck_1828_ = !lean_is_exclusive(v_a_1810_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1819_ = v_a_1810_;
v_isShared_1820_ = v_isSharedCheck_1828_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_msg_1817_);
lean_inc(v_ref_1816_);
lean_dec(v_a_1810_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1828_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
lean_object* v___x_1821_; lean_object* v___x_1823_; 
v___x_1821_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_msg_1817_);
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 1, v___x_1821_);
v___x_1823_ = v___x_1819_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_ref_1816_);
lean_ctor_set(v_reuseFailAlloc_1827_, 1, v___x_1821_);
v___x_1823_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
lean_object* v___x_1825_; 
if (v_isShared_1815_ == 0)
{
lean_ctor_set(v___x_1814_, 0, v___x_1823_);
v___x_1825_ = v___x_1814_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v___x_1823_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
}
}
else
{
lean_dec(v_a_1810_);
return v___x_1809_;
}
}
else
{
lean_dec(v_a_1810_);
return v___x_1809_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_x_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_){
_start:
{
lean_object* v_res_1837_; 
v_res_1837_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__1___redArg(v_x_1833_, v___y_1834_, v___y_1835_);
lean_dec(v___y_1835_);
lean_dec_ref(v___y_1834_);
return v_res_1837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b1_1838_, lean_object* v_x_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_){
_start:
{
lean_object* v___x_1843_; 
v___x_1843_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__1___redArg(v_x_1839_, v___y_1840_, v___y_1841_);
return v___x_1843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__1___boxed(lean_object* v_00_u03b1_1844_, lean_object* v_x_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_){
_start:
{
lean_object* v_res_1849_; 
v_res_1849_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__1(v_00_u03b1_1844_, v_x_1845_, v___y_1846_, v___y_1847_);
lean_dec(v___y_1847_);
lean_dec_ref(v___y_1846_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__0_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_(lean_object* v_ctx_1851_, lean_object* v_e_1852_){
_start:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; 
v___x_1854_ = lean_box(1);
v___x_1855_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__0___closed__0_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_));
v___x_1856_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppExprWithInfos___boxed), 8, 3);
lean_closure_set(v___x_1856_, 0, v_e_1852_);
lean_closure_set(v___x_1856_, 1, v___x_1854_);
lean_closure_set(v___x_1856_, 2, v___x_1855_);
v___x_1857_ = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__0___boxed), 7, 2);
lean_closure_set(v___x_1857_, 0, lean_box(0));
lean_closure_set(v___x_1857_, 1, v___x_1856_);
v___x_1858_ = l_Lean_PPContext_runMetaM___redArg(v_ctx_1851_, v___x_1857_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__0_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed(lean_object* v_ctx_1859_, lean_object* v_e_1860_, lean_object* v___y_1861_){
_start:
{
lean_object* v_res_1862_; 
v_res_1862_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__0_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_(v_ctx_1859_, v_e_1860_);
lean_dec_ref(v_ctx_1859_);
return v_res_1862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__1_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_(lean_object* v_ctx_1863_, lean_object* v_n_1864_){
_start:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1866_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppConstNameWithInfos___boxed), 6, 1);
lean_closure_set(v___x_1866_, 0, v_n_1864_);
v___x_1867_ = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__0___boxed), 7, 2);
lean_closure_set(v___x_1867_, 0, lean_box(0));
lean_closure_set(v___x_1867_, 1, v___x_1866_);
v___x_1868_ = l_Lean_PPContext_runMetaM___redArg(v_ctx_1863_, v___x_1867_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__1_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed(lean_object* v_ctx_1869_, lean_object* v_n_1870_, lean_object* v___y_1871_){
_start:
{
lean_object* v_res_1872_; 
v_res_1872_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__1_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_(v_ctx_1869_, v_n_1870_);
lean_dec_ref(v_ctx_1869_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__2_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_(lean_object* v_ctx_1873_, lean_object* v_l_1874_){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1876_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppLevel___boxed), 6, 1);
lean_closure_set(v___x_1876_, 0, v_l_1874_);
v___x_1877_ = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__0___boxed), 7, 2);
lean_closure_set(v___x_1877_, 0, lean_box(0));
lean_closure_set(v___x_1877_, 1, v___x_1876_);
v___x_1878_ = l_Lean_PPContext_runMetaM___redArg(v_ctx_1873_, v___x_1877_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__2_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed(lean_object* v_ctx_1879_, lean_object* v_l_1880_, lean_object* v___y_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__2_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_(v_ctx_1879_, v_l_1880_);
lean_dec_ref(v_ctx_1879_);
return v_res_1882_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__3_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_(lean_object* v_ctx_1883_, lean_object* v_mvarId_1884_){
_start:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1886_ = lean_alloc_closure((void*)(l_Lean_Meta_ppGoal___boxed), 6, 1);
lean_closure_set(v___x_1886_, 0, v_mvarId_1884_);
v___x_1887_ = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__0___boxed), 7, 2);
lean_closure_set(v___x_1887_, 0, lean_box(0));
lean_closure_set(v___x_1887_, 1, v___x_1886_);
v___x_1888_ = l_Lean_PPContext_runMetaM___redArg(v_ctx_1883_, v___x_1887_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__3_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed(lean_object* v_ctx_1889_, lean_object* v_mvarId_1890_, lean_object* v___y_1891_){
_start:
{
lean_object* v_res_1892_; 
v_res_1892_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__3_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_(v_ctx_1889_, v_mvarId_1890_);
lean_dec_ref(v_ctx_1889_);
return v_res_1892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__4_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_(lean_object* v_ctx_1893_, lean_object* v_stx_1894_){
_start:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; 
v___x_1896_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppTerm___boxed), 4, 1);
lean_closure_set(v___x_1896_, 0, v_stx_1894_);
v___x_1897_ = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2__spec__1___boxed), 5, 2);
lean_closure_set(v___x_1897_, 0, lean_box(0));
lean_closure_set(v___x_1897_, 1, v___x_1896_);
v___x_1898_ = l_Lean_PPContext_runCoreM___redArg(v_ctx_1893_, v___x_1897_);
return v___x_1898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__4_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed(lean_object* v_ctx_1899_, lean_object* v_stx_1900_, lean_object* v___y_1901_){
_start:
{
lean_object* v_res_1902_; 
v_res_1902_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__4_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_(v_ctx_1899_, v_stx_1900_);
lean_dec_ref(v_ctx_1899_);
return v_res_1902_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1915_ = l_Lean_ppFnsRef;
v___x_1916_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_));
v___x_1917_ = lean_box(0);
v___x_1918_ = lean_st_ref_swap(v___x_1915_, v___x_1916_);
lean_dec(v___x_1918_);
v___x_1919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1917_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2____boxed(lean_object* v___y_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_();
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1972_; uint8_t v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1972_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_));
v___x_1973_ = 0;
v___x_1974_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__19_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_));
v___x_1975_ = l_Lean_registerTraceClass(v___x_1972_, v___x_1973_, v___x_1974_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2____boxed(lean_object* v___y_1976_){
_start:
{
lean_object* v_res_1977_; 
v_res_1977_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_();
return v_res_1977_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__2(void){
_start:
{
lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1981_ = l_Lean_PrettyPrinter_combinatorParenthesizerAttribute;
v___x_1982_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1983_ = ((lean_object*)(l_Lean_PrettyPrinter_registerParserCompilers___closed__1));
v___x_1984_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1984_, 0, v___x_1983_);
lean_ctor_set(v___x_1984_, 1, v___x_1982_);
lean_ctor_set(v___x_1984_, 2, v___x_1981_);
return v___x_1984_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__5(void){
_start:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; 
v___x_1988_ = l_Lean_PrettyPrinter_combinatorFormatterAttribute;
v___x_1989_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1990_ = ((lean_object*)(l_Lean_PrettyPrinter_registerParserCompilers___closed__4));
v___x_1991_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1991_, 0, v___x_1990_);
lean_ctor_set(v___x_1991_, 1, v___x_1989_);
lean_ctor_set(v___x_1991_, 2, v___x_1988_);
return v___x_1991_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_registerParserCompilers(){
_start:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1993_ = lean_obj_once(&l_Lean_PrettyPrinter_registerParserCompilers___closed__2, &l_Lean_PrettyPrinter_registerParserCompilers___closed__2_once, _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__2);
v___x_1994_ = l_Lean_ParserCompiler_registerParserCompiler___redArg(v___x_1993_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_object* v___x_1995_; lean_object* v___x_1996_; 
lean_dec_ref_known(v___x_1994_, 1);
v___x_1995_ = lean_obj_once(&l_Lean_PrettyPrinter_registerParserCompilers___closed__5, &l_Lean_PrettyPrinter_registerParserCompilers___closed__5_once, _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__5);
v___x_1996_ = l_Lean_ParserCompiler_registerParserCompiler___redArg(v___x_1995_);
return v___x_1996_;
}
else
{
return v___x_1994_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_registerParserCompilers___boxed(lean_object* v___y_1997_){
_start:
{
lean_object* v_res_1998_; 
v_res_1998_ = l_Lean_PrettyPrinter_registerParserCompilers();
return v_res_1998_;
}
}
static lean_object* _init_l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_2000_ = ((lean_object*)(l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__0));
v___x_2001_ = l_Lean_stringToMessageData(v___x_2000_);
return v___x_2001_;
}
}
static lean_object* _init_l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2003_; lean_object* v___x_2004_; 
v___x_2003_ = ((lean_object*)(l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__2));
v___x_2004_ = l_Lean_stringToMessageData(v___x_2003_);
return v___x_2004_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__0(lean_object* v_fmt_2005_, lean_object* v_ctx_2006_){
_start:
{
lean_object* v___x_2008_; 
v___x_2008_ = l_Lean_PPContext_runMetaM___redArg(v_ctx_2006_, v_fmt_2005_);
if (lean_obj_tag(v___x_2008_) == 0)
{
lean_object* v_a_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2016_; 
v_a_2009_ = lean_ctor_get(v___x_2008_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_2008_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_2011_ = v___x_2008_;
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_a_2009_);
lean_dec(v___x_2008_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v___x_2014_; 
if (v_isShared_2012_ == 0)
{
v___x_2014_ = v___x_2011_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v_a_2009_);
v___x_2014_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
return v___x_2014_;
}
}
}
else
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2030_; 
v_a_2017_ = lean_ctor_get(v___x_2008_, 0);
v_isSharedCheck_2030_ = !lean_is_exclusive(v___x_2008_);
if (v_isSharedCheck_2030_ == 0)
{
v___x_2019_ = v___x_2008_;
v_isShared_2020_ = v_isSharedCheck_2030_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2008_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2030_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2024_; 
v___x_2021_ = lean_obj_once(&l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__1, &l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__1_once, _init_l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__1);
v___x_2022_ = lean_io_error_to_string(v_a_2017_);
if (v_isShared_2020_ == 0)
{
lean_ctor_set_tag(v___x_2019_, 3);
lean_ctor_set(v___x_2019_, 0, v___x_2022_);
v___x_2024_ = v___x_2019_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v___x_2022_);
v___x_2024_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2025_ = l_Lean_MessageData_ofFormat(v___x_2024_);
v___x_2026_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2026_, 0, v___x_2021_);
lean_ctor_set(v___x_2026_, 1, v___x_2025_);
v___x_2027_ = lean_obj_once(&l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3, &l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3_once, _init_l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3);
v___x_2028_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2028_, 0, v___x_2026_);
lean_ctor_set(v___x_2028_, 1, v___x_2027_);
return v___x_2028_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__0___boxed(lean_object* v_fmt_2031_, lean_object* v_ctx_2032_, lean_object* v___y_2033_){
_start:
{
lean_object* v_res_2034_; 
v_res_2034_ = l_Lean_MessageData_ofFormatWithInfosM___lam__0(v_fmt_2031_, v_ctx_2032_);
lean_dec_ref(v_ctx_2032_);
return v_res_2034_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_ofFormatWithInfosM___lam__1(lean_object* v_x_2035_){
_start:
{
uint8_t v___x_2036_; 
v___x_2036_ = 0;
return v___x_2036_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__1___boxed(lean_object* v_x_2037_){
_start:
{
uint8_t v_res_2038_; lean_object* v_r_2039_; 
v_res_2038_ = l_Lean_MessageData_ofFormatWithInfosM___lam__1(v_x_2037_);
lean_dec_ref(v_x_2037_);
v_r_2039_ = lean_box(v_res_2038_);
return v_r_2039_;
}
}
static lean_object* _init_l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__2(void){
_start:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2043_ = ((lean_object*)(l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__1));
v___x_2044_ = l_Lean_MessageData_ofFormat(v___x_2043_);
return v___x_2044_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__2(lean_object* v_x_2045_){
_start:
{
lean_object* v___x_2047_; 
v___x_2047_ = lean_obj_once(&l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__2, &l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__2_once, _init_l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__2);
return v___x_2047_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__2___boxed(lean_object* v_x_2048_, lean_object* v___y_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l_Lean_MessageData_ofFormatWithInfosM___lam__2(v_x_2048_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM(lean_object* v_fmt_2053_){
_start:
{
lean_object* v___f_2054_; lean_object* v___f_2055_; lean_object* v___f_2056_; lean_object* v___x_2057_; 
v___f_2054_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofFormatWithInfosM___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2054_, 0, v_fmt_2053_);
v___f_2055_ = ((lean_object*)(l_Lean_MessageData_ofFormatWithInfosM___closed__0));
v___f_2056_ = ((lean_object*)(l_Lean_MessageData_ofFormatWithInfosM___closed__1));
v___x_2057_ = l_Lean_MessageData_lazy(v___f_2054_, v___f_2055_, v___f_2056_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_ofConst_spec__0(lean_object* v___x_2058_, lean_object* v_msg_2059_){
_start:
{
lean_object* v___x_2060_; 
v___x_2060_ = lean_panic_fn_borrowed(v___x_2058_, v_msg_2059_);
return v___x_2060_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_ofConst_spec__0___boxed(lean_object* v___x_2061_, lean_object* v_msg_2062_){
_start:
{
lean_object* v_res_2063_; 
v_res_2063_ = l_panic___at___00Lean_MessageData_ofConst_spec__0(v___x_2061_, v_msg_2062_);
lean_dec_ref(v___x_2061_);
return v_res_2063_;
}
}
static lean_object* _init_l_Lean_MessageData_ofConst___closed__1(void){
_start:
{
lean_object* v___x_2065_; lean_object* v___x_2066_; 
v___x_2065_ = ((lean_object*)(l_Lean_MessageData_ofConst___closed__0));
v___x_2066_ = l_Lean_stringToMessageData(v___x_2065_);
return v___x_2066_;
}
}
static lean_object* _init_l_Lean_MessageData_ofConst___closed__2(void){
_start:
{
lean_object* v___x_2067_; lean_object* v___x_2068_; 
v___x_2067_ = lean_box(1);
v___x_2068_ = l_Lean_MessageData_ofFormat(v___x_2067_);
return v___x_2068_;
}
}
static lean_object* _init_l_Lean_MessageData_ofConst___closed__3(void){
_start:
{
lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; 
v___x_2069_ = lean_obj_once(&l_Lean_MessageData_ofConst___closed__2, &l_Lean_MessageData_ofConst___closed__2_once, _init_l_Lean_MessageData_ofConst___closed__2);
v___x_2070_ = lean_obj_once(&l_Lean_MessageData_ofConst___closed__1, &l_Lean_MessageData_ofConst___closed__1_once, _init_l_Lean_MessageData_ofConst___closed__1);
v___x_2071_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2070_);
lean_ctor_set(v___x_2071_, 1, v___x_2069_);
return v___x_2071_;
}
}
static lean_object* _init_l_Lean_MessageData_ofConst___closed__7(void){
_start:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___x_2075_ = ((lean_object*)(l_Lean_MessageData_ofConst___closed__6));
v___x_2076_ = lean_unsigned_to_nat(4u);
v___x_2077_ = lean_unsigned_to_nat(160u);
v___x_2078_ = ((lean_object*)(l_Lean_MessageData_ofConst___closed__5));
v___x_2079_ = ((lean_object*)(l_Lean_MessageData_ofConst___closed__4));
v___x_2080_ = l_mkPanicMessageWithDecl(v___x_2079_, v___x_2078_, v___x_2077_, v___x_2076_, v___x_2075_);
return v___x_2080_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConst(lean_object* v_e_2081_){
_start:
{
uint8_t v___x_2082_; 
v___x_2082_ = l_Lean_Expr_isConst(v_e_2081_);
if (v___x_2082_ == 0)
{
lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; 
v___x_2083_ = lean_obj_once(&l_Lean_MessageData_ofConst___closed__3, &l_Lean_MessageData_ofConst___closed__3_once, _init_l_Lean_MessageData_ofConst___closed__3);
v___x_2084_ = l_Lean_MessageData_ofExpr(v_e_2081_);
v___x_2085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2085_, 0, v___x_2083_);
lean_ctor_set(v___x_2085_, 1, v___x_2084_);
v___x_2086_ = lean_obj_once(&l_Lean_MessageData_ofConst___closed__7, &l_Lean_MessageData_ofConst___closed__7_once, _init_l_Lean_MessageData_ofConst___closed__7);
v___x_2087_ = lean_panic_fn_borrowed(v___x_2085_, v___x_2086_);
lean_dec_ref_known(v___x_2085_, 2);
return v___x_2087_;
}
else
{
lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v_delab_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2088_ = ((lean_object*)(l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1));
v___x_2089_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2089_, 0, v___x_2082_);
v___x_2090_ = ((lean_object*)(l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__3));
v_delab_2091_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos___boxed), 11, 4);
lean_closure_set(v_delab_2091_, 0, lean_box(0));
lean_closure_set(v_delab_2091_, 1, v___x_2088_);
lean_closure_set(v_delab_2091_, 2, v___x_2089_);
lean_closure_set(v_delab_2091_, 3, v___x_2090_);
v___x_2092_ = lean_box(1);
v___x_2093_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppExprWithInfos___boxed), 8, 3);
lean_closure_set(v___x_2093_, 0, v_e_2081_);
lean_closure_set(v___x_2093_, 1, v___x_2092_);
lean_closure_set(v___x_2093_, 2, v_delab_2091_);
v___x_2094_ = l_Lean_MessageData_ofFormatWithInfosM(v___x_2093_);
return v___x_2094_;
}
}
}
static lean_object* _init_l_Lean_MessageData_signature___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; 
v___x_2096_ = ((lean_object*)(l_Lean_MessageData_signature___lam__0___closed__0));
v___x_2097_ = l_Lean_stringToMessageData(v___x_2096_);
return v___x_2097_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_signature___lam__0(lean_object* v_c_2098_, lean_object* v_ctx_2099_){
_start:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; 
lean_inc(v_c_2098_);
v___x_2101_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppSignature___boxed), 6, 1);
lean_closure_set(v___x_2101_, 0, v_c_2098_);
v___x_2102_ = l_Lean_PPContext_runMetaM___redArg(v_ctx_2099_, v___x_2101_);
if (lean_obj_tag(v___x_2102_) == 0)
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2110_; 
lean_dec(v_c_2098_);
v_a_2103_ = lean_ctor_get(v___x_2102_, 0);
v_isSharedCheck_2110_ = !lean_is_exclusive(v___x_2102_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2105_ = v___x_2102_;
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_2102_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2108_; 
if (v_isShared_2106_ == 0)
{
v___x_2108_ = v___x_2105_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_a_2103_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
return v___x_2108_;
}
}
}
else
{
lean_object* v_a_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2128_; 
v_a_2111_ = lean_ctor_get(v___x_2102_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2102_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2113_ = v___x_2102_;
v_isShared_2114_ = v_isSharedCheck_2128_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_a_2111_);
lean_dec(v___x_2102_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2128_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2118_; 
v___x_2115_ = lean_obj_once(&l_Lean_MessageData_signature___lam__0___closed__1, &l_Lean_MessageData_signature___lam__0___closed__1_once, _init_l_Lean_MessageData_signature___lam__0___closed__1);
v___x_2116_ = lean_io_error_to_string(v_a_2111_);
if (v_isShared_2114_ == 0)
{
lean_ctor_set_tag(v___x_2113_, 3);
lean_ctor_set(v___x_2113_, 0, v___x_2116_);
v___x_2118_ = v___x_2113_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v___x_2116_);
v___x_2118_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2119_ = l_Lean_MessageData_ofFormat(v___x_2118_);
v___x_2120_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2115_);
lean_ctor_set(v___x_2120_, 1, v___x_2119_);
v___x_2121_ = lean_obj_once(&l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3, &l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3_once, _init_l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3);
v___x_2122_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2120_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
v___x_2123_ = lean_obj_once(&l_Lean_MessageData_ofConst___closed__2, &l_Lean_MessageData_ofConst___closed__2_once, _init_l_Lean_MessageData_ofConst___closed__2);
v___x_2124_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2122_);
lean_ctor_set(v___x_2124_, 1, v___x_2123_);
v___x_2125_ = l_Lean_MessageData_ofName(v_c_2098_);
v___x_2126_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2124_);
lean_ctor_set(v___x_2126_, 1, v___x_2125_);
return v___x_2126_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_signature___lam__0___boxed(lean_object* v_c_2129_, lean_object* v_ctx_2130_, lean_object* v___y_2131_){
_start:
{
lean_object* v_res_2132_; 
v_res_2132_ = l_Lean_MessageData_signature___lam__0(v_c_2129_, v_ctx_2130_);
lean_dec_ref(v_ctx_2130_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_signature(lean_object* v_c_2133_){
_start:
{
lean_object* v___f_2134_; lean_object* v___f_2135_; lean_object* v___f_2136_; lean_object* v___x_2137_; 
v___f_2134_ = lean_alloc_closure((void*)(l_Lean_MessageData_signature___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2134_, 0, v_c_2133_);
v___f_2135_ = ((lean_object*)(l_Lean_MessageData_ofFormatWithInfosM___closed__0));
v___f_2136_ = ((lean_object*)(l_Lean_MessageData_ofFormatWithInfosM___closed__1));
v___x_2137_ = l_Lean_MessageData_lazy(v___f_2134_, v___f_2135_, v___f_2136_);
return v___x_2137_;
}
}
lean_object* runtime_initialize_Lean_PrettyPrinter_Delaborator_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter_Delaborator(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin);
lean_object* runtime_initialize_Lean_ParserCompiler(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_NumObjs(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ShareCommon(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_PrettyPrinter(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_PrettyPrinter_Delaborator_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter_Delaborator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ParserCompiler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_NumObjs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_PrettyPrinter_pp_exprSizes = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_PrettyPrinter_pp_exprSizes);
lean_dec_ref(res);
res = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_4173001584____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_PrettyPrinter_registerParserCompilers();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_PrettyPrinter(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_PrettyPrinter_Delaborator_Basic(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter_Delaborator(uint8_t builtin);
lean_object* initialize_Lean_Parser_Module(uint8_t builtin);
lean_object* initialize_Lean_ParserCompiler(uint8_t builtin);
lean_object* initialize_Lean_Util_NumObjs(uint8_t builtin);
lean_object* initialize_Lean_Util_ShareCommon(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_PrettyPrinter(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_PrettyPrinter_Delaborator_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Delaborator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ParserCompiler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_NumObjs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_PrettyPrinter(builtin);
}
#ifdef __cplusplus
}
#endif
