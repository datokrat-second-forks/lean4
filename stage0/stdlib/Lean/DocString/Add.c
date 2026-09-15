// Lean compiler output
// Module: Lean.DocString.Add
// Imports: import Lean.Elab.DocString public import Lean.DocString.DeferredCheck public import Lean.DocString.Parser public import Lean.Elab.Term.TermElabM
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
extern lean_object* l_Lean_Doc_deferredCheckExt;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_allErrors(lean_object*);
lean_object* l_Lean_Parser_Error_toString(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Doc_Parser_BlockCtxt_forDocString(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserState(lean_object*);
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* l_Lean_Doc_Parser_document(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
lean_object* l_Lean_Parser_ParserFn_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_Parser_block(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_elabModSnippet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_DocM_execForModule___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_getMainVersoModuleDocs(lean_object*);
lean_object* l_Lean_VersoModuleDocs_terminalNesting(lean_object*);
lean_object* l_Lean_getMainModuleDoc(lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_addVersoModuleDocSnippet(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l_Lean_versoDocStringExt;
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_TSyntax_getDocString(lean_object*);
lean_object* l_Lean_rewriteManualLinksCore(lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo_x3f(lean_object*);
lean_object* l_Lean_SourceInfo_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_docStringExt;
lean_object* l_String_removeLeadingSpaces(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_FileMap_ofString(lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
lean_object* l_Lean_Core_getAndEmptyMessageLog___redArg(lean_object*);
lean_object* l_Lean_Core_setMessageLog___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Doc_elabBlocks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_DocM_exec___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_toArray(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_getDocStringText___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getAtomVal(lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isVersoDocComment(lean_object*);
lean_object* l_Lean_findInternalDocString_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_removeBuiltinDocString(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_parseVersoDocString___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "unexpected '"};
static const lean_object* l_Lean_parseVersoDocString___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___lam__5___closed__0_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_parseVersoDocString___redArg___lam__5___closed__1 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___lam__5___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___redArg___lam__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "Documentation comment has no source location, cannot parse"};
static const lean_object* l_Lean_parseVersoDocString___redArg___lam__11___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___lam__11___closed__0_value;
static lean_once_cell_t l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___redArg___lam__11___closed__1;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__0_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__1 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__1_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__2 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__2_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__3 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__3_value;
static const lean_ctor_object l_Lean_parseVersoDocString___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_parseVersoDocString___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_parseVersoDocString___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_parseVersoDocString___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__4_value_aux_2),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__4 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__4_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "versoCommentBody"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__5 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_versoDocStringOfText___closed__0 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__0_value;
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringOfText___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_versoDocStringOfText___closed__1 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__1_value;
static const lean_closure_object l_Lean_versoDocStringOfText___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_document, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_versoDocStringOfText___closed__1_value)} };
static const lean_object* l_Lean_versoDocStringOfText___closed__2 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__2_value;
static const lean_array_object l_Lean_versoDocStringOfText___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_versoDocStringOfText___closed__3 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__3_value;
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_versoDocStringOfText___closed__3_value),((lean_object*)&l_Lean_versoDocStringOfText___closed__3_value)}};
static const lean_object* l_Lean_versoDocStringOfText___closed__4 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__4_value;
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_versoDocStringOfText___closed__4_value),((lean_object*)&l_Lean_versoDocStringOfText___closed__3_value)}};
static const lean_object* l_Lean_versoDocStringOfText___closed__5 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_versoDocString___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_versoDocString___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__0_value_aux_0),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_versoDocString___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__0_value_aux_1),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_versoDocString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__0_value_aux_2),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(13, 150, 193, 173, 39, 149, 4, 235)}};
static const lean_object* l_Lean_versoDocString___closed__0 = (const lean_object*)&l_Lean_versoDocString___closed__0_value;
static const lean_string_object l_Lean_versoDocString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l_Lean_versoDocString___closed__1 = (const lean_object*)&l_Lean_versoDocString___closed__1_value;
static const lean_string_object l_Lean_versoDocString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l_Lean_versoDocString___closed__2 = (const lean_object*)&l_Lean_versoDocString___closed__2_value;
static const lean_string_object l_Lean_versoDocString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "parseFailure"};
static const lean_object* l_Lean_versoDocString___closed__3 = (const lean_object*)&l_Lean_versoDocString___closed__3_value;
static const lean_ctor_object l_Lean_versoDocString___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_versoDocString___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__4_value_aux_0),((lean_object*)&l_Lean_versoDocString___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_versoDocString___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__4_value_aux_1),((lean_object*)&l_Lean_versoDocString___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l_Lean_versoDocString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__4_value_aux_2),((lean_object*)&l_Lean_versoDocString___closed__3_value),LEAN_SCALAR_PTR_LITERAL(229, 162, 159, 121, 181, 7, 46, 32)}};
static const lean_object* l_Lean_versoDocString___closed__4 = (const lean_object*)&l_Lean_versoDocString___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_versoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoModDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoModDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_versoDocStringFromString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_versoDocStringFromString___closed__0 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__0_value;
static const lean_string_object l_Lean_versoDocStringFromString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_versoDocStringFromString___closed__1 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__1_value;
static const lean_ctor_object l_Lean_versoDocStringFromString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringFromString___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_versoDocStringFromString___closed__2 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__2_value;
static const lean_ctor_object l_Lean_versoDocStringFromString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringFromString___closed__2_value),((lean_object*)&l_Lean_versoDocStringFromString___closed__0_value)}};
static const lean_object* l_Lean_versoDocStringFromString___closed__3 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__4(lean_object*, lean_object*);
static const lean_string_object l_Lean_addMarkdownDocString___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "invalid doc string, declaration `"};
static const lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_addMarkdownDocString___redArg___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__1;
static const lean_string_object l_Lean_addMarkdownDocString___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is in an imported module"};
static const lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__2 = (const lean_object*)&l_Lean_addMarkdownDocString___redArg___lam__5___closed__2_value;
static lean_once_cell_t l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__3;
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__5 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__6 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__0_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__1_value)}};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__7 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__7_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__2_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__3_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__4_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__5_value)}};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__8 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_addVersoDocStringCore___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__8_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__6_value)}};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1___closed__9 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoDocStringCore___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "invalid doc string, declaration '"};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__3___closed__0_value;
static const lean_string_object l_Lean_addVersoDocStringCore___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "' is in an imported module"};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Error adding module docs: "};
static const lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "Can't add Verso-format module docs because there is already Markdown-format content present."};
static const lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringOf(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "invalid doc string removal, declaration `"};
static const lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0 = (const lean_object*)&l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_makeDocStringVerso___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Documentation for `"};
static const lean_object* l_Lean_makeDocStringVerso___closed__0 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__0_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__1;
static const lean_string_object l_Lean_makeDocStringVerso___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "` is already in Verso format"};
static const lean_object* l_Lean_makeDocStringVerso___closed__2 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__2_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__3;
static const lean_string_object l_Lean_makeDocStringVerso___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "No documentation found for `"};
static const lean_object* l_Lean_makeDocStringVerso___closed__4 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__4_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__5;
static const lean_string_object l_Lean_makeDocStringVerso___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_makeDocStringVerso___closed__6 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__6_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__7;
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__0(lean_object* v_toPure_1_, lean_object* v_____s_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_box(0);
v___x_4_ = lean_apply_2(v_toPure_1_, lean_box(0), v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__1(lean_object* v___x_5_, lean_object* v_toPure_6_, lean_object* v_r_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_5_);
v___x_9_ = lean_apply_2(v_toPure_6_, lean_box(0), v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3(lean_object* v___y_10_, lean_object* v_str_11_, lean_object* v_inst_12_, lean_object* v_inst_13_, lean_object* v_inst_14_, lean_object* v_inst_15_, lean_object* v_toBind_16_, lean_object* v___f_17_, lean_object* v___f_18_, lean_object* v_a_19_, lean_object* v_x_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_fst_22_; 
v_fst_22_ = lean_ctor_get(v_a_19_, 0);
lean_inc(v_fst_22_);
if (lean_obj_tag(v___y_10_) == 1)
{
lean_object* v_snd_23_; lean_object* v_start_24_; lean_object* v_stop_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_48_; 
lean_dec(v___f_18_);
v_snd_23_ = lean_ctor_get(v_a_19_, 1);
lean_inc(v_snd_23_);
lean_dec_ref(v_a_19_);
v_start_24_ = lean_ctor_get(v_fst_22_, 0);
v_stop_25_ = lean_ctor_get(v_fst_22_, 1);
v_isSharedCheck_48_ = !lean_is_exclusive(v_fst_22_);
if (v_isSharedCheck_48_ == 0)
{
v___x_27_ = v_fst_22_;
v_isShared_28_ = v_isSharedCheck_48_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_stop_25_);
lean_inc(v_start_24_);
lean_dec(v_fst_22_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_48_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v_val_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_47_; 
v_val_29_ = lean_ctor_get(v___y_10_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v___y_10_);
if (v_isSharedCheck_47_ == 0)
{
v___x_31_ = v___y_10_;
v_isShared_32_ = v_isSharedCheck_47_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_val_29_);
lean_dec(v___y_10_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_47_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_33_; lean_object* v___x_34_; uint8_t v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_33_ = lean_nat_add(v_val_29_, v_start_24_);
v___x_34_ = lean_nat_add(v_val_29_, v_stop_25_);
lean_dec(v_val_29_);
v___x_35_ = 0;
v___x_36_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_36_, 0, v___x_33_);
lean_ctor_set(v___x_36_, 1, v___x_34_);
lean_ctor_set_uint8(v___x_36_, sizeof(void*)*2, v___x_35_);
v___x_37_ = lean_string_utf8_extract(v_str_11_, v_start_24_, v_stop_25_);
lean_dec(v_stop_25_);
lean_dec(v_start_24_);
if (v_isShared_28_ == 0)
{
lean_ctor_set_tag(v___x_27_, 2);
lean_ctor_set(v___x_27_, 1, v___x_37_);
lean_ctor_set(v___x_27_, 0, v___x_36_);
v___x_39_ = v___x_27_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v___x_36_);
lean_ctor_set(v_reuseFailAlloc_46_, 1, v___x_37_);
v___x_39_ = v_reuseFailAlloc_46_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
lean_object* v___x_41_; 
if (v_isShared_32_ == 0)
{
lean_ctor_set_tag(v___x_31_, 3);
lean_ctor_set(v___x_31_, 0, v_snd_23_);
v___x_41_ = v___x_31_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_snd_23_);
v___x_41_ = v_reuseFailAlloc_45_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = l_Lean_MessageData_ofFormat(v___x_41_);
v___x_43_ = l_Lean_logErrorAt___redArg(v_inst_12_, v_inst_13_, v_inst_14_, v_inst_15_, v___x_39_, v___x_42_);
v___x_44_ = lean_apply_4(v_toBind_16_, lean_box(0), lean_box(0), v___x_43_, v___f_17_);
return v___x_44_;
}
}
}
}
}
else
{
lean_object* v_snd_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
lean_dec(v_fst_22_);
lean_dec(v___f_17_);
lean_dec(v___y_10_);
v_snd_49_ = lean_ctor_get(v_a_19_, 1);
lean_inc(v_snd_49_);
lean_dec_ref(v_a_19_);
v___x_50_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_50_, 0, v_snd_49_);
v___x_51_ = l_Lean_MessageData_ofFormat(v___x_50_);
v___x_52_ = l_Lean_logError___redArg(v_inst_12_, v_inst_13_, v_inst_14_, v_inst_15_, v___x_51_);
v___x_53_ = lean_apply_4(v_toBind_16_, lean_box(0), lean_box(0), v___x_52_, v___f_18_);
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3___boxed(lean_object* v___y_54_, lean_object* v_str_55_, lean_object* v_inst_56_, lean_object* v_inst_57_, lean_object* v_inst_58_, lean_object* v_inst_59_, lean_object* v_toBind_60_, lean_object* v___f_61_, lean_object* v___f_62_, lean_object* v_a_63_, lean_object* v_x_64_, lean_object* v___y_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_validateDocComment___redArg___lam__3(v___y_54_, v_str_55_, v_inst_56_, v_inst_57_, v_inst_58_, v_inst_59_, v_toBind_60_, v___f_61_, v___f_62_, v_a_63_, v_x_64_, v___y_65_);
lean_dec_ref(v_str_55_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__2(lean_object* v_toPure_67_, lean_object* v___y_68_, lean_object* v_str_69_, lean_object* v_inst_70_, lean_object* v_inst_71_, lean_object* v_inst_72_, lean_object* v_inst_73_, lean_object* v_toBind_74_, lean_object* v___f_75_, lean_object* v_____x_76_){
_start:
{
lean_object* v_fst_77_; lean_object* v___x_78_; lean_object* v___f_79_; lean_object* v___f_80_; size_t v_sz_81_; size_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_fst_77_ = lean_ctor_get(v_____x_76_, 0);
lean_inc(v_fst_77_);
lean_dec_ref(v_____x_76_);
v___x_78_ = lean_box(0);
v___f_79_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__1), 3, 2);
lean_closure_set(v___f_79_, 0, v___x_78_);
lean_closure_set(v___f_79_, 1, v_toPure_67_);
lean_inc_ref(v___f_79_);
lean_inc(v_toBind_74_);
lean_inc_ref(v_inst_70_);
v___f_80_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__3___boxed), 12, 9);
lean_closure_set(v___f_80_, 0, v___y_68_);
lean_closure_set(v___f_80_, 1, v_str_69_);
lean_closure_set(v___f_80_, 2, v_inst_70_);
lean_closure_set(v___f_80_, 3, v_inst_71_);
lean_closure_set(v___f_80_, 4, v_inst_72_);
lean_closure_set(v___f_80_, 5, v_inst_73_);
lean_closure_set(v___f_80_, 6, v_toBind_74_);
lean_closure_set(v___f_80_, 7, v___f_79_);
lean_closure_set(v___f_80_, 8, v___f_79_);
v_sz_81_ = lean_array_size(v_fst_77_);
v___x_82_ = ((size_t)0ULL);
v___x_83_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_70_, v_fst_77_, v___f_80_, v_sz_81_, v___x_82_, v___x_78_);
v___x_84_ = lean_apply_4(v_toBind_74_, lean_box(0), lean_box(0), v___x_83_, v___f_75_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__4(lean_object* v___x_85_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_87_, 0, v___x_85_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__4___boxed(lean_object* v___x_88_, lean_object* v___y_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_validateDocComment___redArg___lam__4(v___x_88_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg(lean_object* v_inst_91_, lean_object* v_inst_92_, lean_object* v_inst_93_, lean_object* v_inst_94_, lean_object* v_inst_95_, lean_object* v_docstring_96_){
_start:
{
lean_object* v_toApplicative_97_; lean_object* v_toBind_98_; lean_object* v_toPure_99_; lean_object* v_str_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___f_104_; lean_object* v___y_106_; 
v_toApplicative_97_ = lean_ctor_get(v_inst_91_, 0);
v_toBind_98_ = lean_ctor_get(v_inst_91_, 1);
lean_inc(v_toBind_98_);
v_toPure_99_ = lean_ctor_get(v_toApplicative_97_, 1);
lean_inc_n(v_toPure_99_, 2);
v_str_100_ = l_Lean_TSyntax_getDocString(v_docstring_96_);
v___x_101_ = lean_unsigned_to_nat(1u);
v___x_102_ = l_Lean_Syntax_getArg(v_docstring_96_, v___x_101_);
v___x_103_ = l_Lean_Syntax_getHeadInfo_x3f(v___x_102_);
lean_dec(v___x_102_);
v___f_104_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__0), 2, 1);
lean_closure_set(v___f_104_, 0, v_toPure_99_);
if (lean_obj_tag(v___x_103_) == 0)
{
lean_object* v___x_112_; 
v___x_112_ = lean_box(0);
v___y_106_ = v___x_112_;
goto v___jp_105_;
}
else
{
lean_object* v_val_113_; uint8_t v___x_114_; lean_object* v___x_115_; 
v_val_113_ = lean_ctor_get(v___x_103_, 0);
lean_inc(v_val_113_);
lean_dec_ref_known(v___x_103_, 1);
v___x_114_ = 0;
v___x_115_ = l_Lean_SourceInfo_getPos_x3f(v_val_113_, v___x_114_);
lean_dec(v_val_113_);
v___y_106_ = v___x_115_;
goto v___jp_105_;
}
v___jp_105_:
{
lean_object* v___f_107_; lean_object* v___x_108_; lean_object* v___f_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
lean_inc(v_toBind_98_);
lean_inc_ref(v_str_100_);
v___f_107_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__2), 10, 9);
lean_closure_set(v___f_107_, 0, v_toPure_99_);
lean_closure_set(v___f_107_, 1, v___y_106_);
lean_closure_set(v___f_107_, 2, v_str_100_);
lean_closure_set(v___f_107_, 3, v_inst_91_);
lean_closure_set(v___f_107_, 4, v_inst_93_);
lean_closure_set(v___f_107_, 5, v_inst_94_);
lean_closure_set(v___f_107_, 6, v_inst_95_);
lean_closure_set(v___f_107_, 7, v_toBind_98_);
lean_closure_set(v___f_107_, 8, v___f_104_);
v___x_108_ = l_Lean_rewriteManualLinksCore(v_str_100_);
v___f_109_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__4___boxed), 2, 1);
lean_closure_set(v___f_109_, 0, v___x_108_);
v___x_110_ = lean_apply_2(v_inst_92_, lean_box(0), v___f_109_);
v___x_111_ = lean_apply_4(v_toBind_98_, lean_box(0), lean_box(0), v___x_110_, v___f_107_);
return v___x_111_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___boxed(lean_object* v_inst_116_, lean_object* v_inst_117_, lean_object* v_inst_118_, lean_object* v_inst_119_, lean_object* v_inst_120_, lean_object* v_docstring_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_validateDocComment___redArg(v_inst_116_, v_inst_117_, v_inst_118_, v_inst_119_, v_inst_120_, v_docstring_121_);
lean_dec(v_docstring_121_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment(lean_object* v_m_123_, lean_object* v_inst_124_, lean_object* v_inst_125_, lean_object* v_inst_126_, lean_object* v_inst_127_, lean_object* v_inst_128_, lean_object* v_docstring_129_){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = l_Lean_validateDocComment___redArg(v_inst_124_, v_inst_125_, v_inst_126_, v_inst_127_, v_inst_128_, v_docstring_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___boxed(lean_object* v_m_131_, lean_object* v_inst_132_, lean_object* v_inst_133_, lean_object* v_inst_134_, lean_object* v_inst_135_, lean_object* v_inst_136_, lean_object* v_docstring_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_validateDocComment(v_m_131_, v_inst_132_, v_inst_133_, v_inst_134_, v_inst_135_, v_inst_136_, v_docstring_137_);
lean_dec(v_docstring_137_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__0(lean_object* v_toPure_139_, lean_object* v_____r_140_){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = lean_box(0);
v___x_142_ = lean_apply_2(v_toPure_139_, lean_box(0), v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__1(lean_object* v_toPure_143_, lean_object* v_____s_144_){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = lean_box(0);
v___x_146_ = lean_apply_2(v_toPure_143_, lean_box(0), v___x_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__2(lean_object* v___x_147_, lean_object* v_toPure_148_, lean_object* v_____r_149_){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_150_, 0, v___x_147_);
v___x_151_ = lean_apply_2(v_toPure_148_, lean_box(0), v___x_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3(lean_object* v_text_153_, lean_object* v_fst_154_, lean_object* v_snd_155_, uint8_t v___x_156_, lean_object* v_logMessage_157_, lean_object* v_toBind_158_, lean_object* v___f_159_, lean_object* v_____do__lift_160_){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_161_ = l_Lean_FileMap_toPosition(v_text_153_, v_fst_154_);
v___x_162_ = lean_box(0);
v___x_163_ = 2;
v___x_164_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_165_ = l_Lean_Parser_Error_toString(v_snd_155_);
v___x_166_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
v___x_167_ = l_Lean_MessageData_ofFormat(v___x_166_);
v___x_168_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_168_, 0, v_____do__lift_160_);
lean_ctor_set(v___x_168_, 1, v___x_161_);
lean_ctor_set(v___x_168_, 2, v___x_162_);
lean_ctor_set(v___x_168_, 3, v___x_164_);
lean_ctor_set(v___x_168_, 4, v___x_167_);
lean_ctor_set_uint8(v___x_168_, sizeof(void*)*5, v___x_156_);
lean_ctor_set_uint8(v___x_168_, sizeof(void*)*5 + 1, v___x_163_);
lean_ctor_set_uint8(v___x_168_, sizeof(void*)*5 + 2, v___x_156_);
v___x_169_ = lean_apply_1(v_logMessage_157_, v___x_168_);
v___x_170_ = lean_apply_4(v_toBind_158_, lean_box(0), lean_box(0), v___x_169_, v___f_159_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3___boxed(lean_object* v_text_171_, lean_object* v_fst_172_, lean_object* v_snd_173_, lean_object* v___x_174_, lean_object* v_logMessage_175_, lean_object* v_toBind_176_, lean_object* v___f_177_, lean_object* v_____do__lift_178_){
_start:
{
uint8_t v___x_1478__boxed_179_; lean_object* v_res_180_; 
v___x_1478__boxed_179_ = lean_unbox(v___x_174_);
v_res_180_ = l_Lean_parseVersoDocString___redArg___lam__3(v_text_171_, v_fst_172_, v_snd_173_, v___x_1478__boxed_179_, v_logMessage_175_, v_toBind_176_, v___f_177_, v_____do__lift_178_);
lean_dec(v_fst_172_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4(lean_object* v_text_181_, uint8_t v___x_182_, lean_object* v_logMessage_183_, lean_object* v_toBind_184_, lean_object* v___f_185_, lean_object* v_getFileName_186_, lean_object* v_a_187_, lean_object* v_x_188_, lean_object* v___y_189_){
_start:
{
lean_object* v_snd_190_; lean_object* v_fst_191_; lean_object* v_snd_192_; lean_object* v___x_193_; lean_object* v___f_194_; lean_object* v___x_195_; 
v_snd_190_ = lean_ctor_get(v_a_187_, 1);
lean_inc(v_snd_190_);
v_fst_191_ = lean_ctor_get(v_a_187_, 0);
lean_inc(v_fst_191_);
lean_dec_ref(v_a_187_);
v_snd_192_ = lean_ctor_get(v_snd_190_, 1);
lean_inc(v_snd_192_);
lean_dec(v_snd_190_);
v___x_193_ = lean_box(v___x_182_);
lean_inc(v_toBind_184_);
v___f_194_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_194_, 0, v_text_181_);
lean_closure_set(v___f_194_, 1, v_fst_191_);
lean_closure_set(v___f_194_, 2, v_snd_192_);
lean_closure_set(v___f_194_, 3, v___x_193_);
lean_closure_set(v___f_194_, 4, v_logMessage_183_);
lean_closure_set(v___f_194_, 5, v_toBind_184_);
lean_closure_set(v___f_194_, 6, v___f_185_);
v___x_195_ = lean_apply_4(v_toBind_184_, lean_box(0), lean_box(0), v_getFileName_186_, v___f_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4___boxed(lean_object* v_text_196_, lean_object* v___x_197_, lean_object* v_logMessage_198_, lean_object* v_toBind_199_, lean_object* v___f_200_, lean_object* v_getFileName_201_, lean_object* v_a_202_, lean_object* v_x_203_, lean_object* v___y_204_){
_start:
{
uint8_t v___x_1512__boxed_205_; lean_object* v_res_206_; 
v___x_1512__boxed_205_ = lean_unbox(v___x_197_);
v_res_206_ = l_Lean_parseVersoDocString___redArg___lam__4(v_text_196_, v___x_1512__boxed_205_, v_logMessage_198_, v_toBind_199_, v___f_200_, v_getFileName_201_, v_a_202_, v_x_203_, v___y_204_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5(lean_object* v_text_209_, lean_object* v_pos_210_, lean_object* v_source_211_, uint8_t v___x_212_, lean_object* v_logMessage_213_, lean_object* v_toBind_214_, lean_object* v___f_215_, lean_object* v_____do__lift_216_){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; uint8_t v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; uint32_t v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_217_ = l_Lean_FileMap_toPosition(v_text_209_, v_pos_210_);
v___x_218_ = lean_box(0);
v___x_219_ = 2;
v___x_220_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_221_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__0));
v___x_222_ = lean_string_utf8_get(v_source_211_, v_pos_210_);
v___x_223_ = lean_string_push(v___x_220_, v___x_222_);
v___x_224_ = lean_string_append(v___x_221_, v___x_223_);
lean_dec_ref(v___x_223_);
v___x_225_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__1));
v___x_226_ = lean_string_append(v___x_224_, v___x_225_);
v___x_227_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
v___x_228_ = l_Lean_MessageData_ofFormat(v___x_227_);
v___x_229_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_229_, 0, v_____do__lift_216_);
lean_ctor_set(v___x_229_, 1, v___x_217_);
lean_ctor_set(v___x_229_, 2, v___x_218_);
lean_ctor_set(v___x_229_, 3, v___x_220_);
lean_ctor_set(v___x_229_, 4, v___x_228_);
lean_ctor_set_uint8(v___x_229_, sizeof(void*)*5, v___x_212_);
lean_ctor_set_uint8(v___x_229_, sizeof(void*)*5 + 1, v___x_219_);
lean_ctor_set_uint8(v___x_229_, sizeof(void*)*5 + 2, v___x_212_);
v___x_230_ = lean_apply_1(v_logMessage_213_, v___x_229_);
v___x_231_ = lean_apply_4(v_toBind_214_, lean_box(0), lean_box(0), v___x_230_, v___f_215_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5___boxed(lean_object* v_text_232_, lean_object* v_pos_233_, lean_object* v_source_234_, lean_object* v___x_235_, lean_object* v_logMessage_236_, lean_object* v_toBind_237_, lean_object* v___f_238_, lean_object* v_____do__lift_239_){
_start:
{
uint8_t v___x_1542__boxed_240_; lean_object* v_res_241_; 
v___x_1542__boxed_240_ = lean_unbox(v___x_235_);
v_res_241_ = l_Lean_parseVersoDocString___redArg___lam__5(v_text_232_, v_pos_233_, v_source_234_, v___x_1542__boxed_240_, v_logMessage_236_, v_toBind_237_, v___f_238_, v_____do__lift_239_);
lean_dec_ref(v_source_234_);
lean_dec(v_pos_233_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6(lean_object* v_toPure_242_, lean_object* v_text_243_, lean_object* v_logMessage_244_, lean_object* v_toBind_245_, lean_object* v_getFileName_246_, lean_object* v_inst_247_, lean_object* v___f_248_, lean_object* v_ictx_249_, lean_object* v_source_250_, lean_object* v___f_251_, lean_object* v_env_252_, lean_object* v_____do__lift_253_, lean_object* v_____do__lift_254_, lean_object* v_val_255_, lean_object* v___y_256_, lean_object* v___x_257_, lean_object* v_____do__lift_258_){
_start:
{
lean_object* v___y_260_; lean_object* v_pmctx_282_; lean_object* v_blockCtxt_283_; lean_object* v___x_284_; lean_object* v_s_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v_s_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; uint8_t v___x_292_; 
lean_inc_ref(v_env_252_);
v_pmctx_282_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_pmctx_282_, 0, v_env_252_);
lean_ctor_set(v_pmctx_282_, 1, v_____do__lift_253_);
lean_ctor_set(v_pmctx_282_, 2, v_____do__lift_254_);
lean_ctor_set(v_pmctx_282_, 3, v_____do__lift_258_);
lean_inc(v_val_255_);
lean_inc_ref(v_text_243_);
v_blockCtxt_283_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v_text_243_, v_val_255_, v___y_256_);
v___x_284_ = l_Lean_Parser_mkParserState(v_source_250_);
lean_inc_ref(v___x_284_);
v_s_285_ = l_Lean_Parser_ParserState_setPos(v___x_284_, v_val_255_);
v___x_286_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document), 3, 1);
lean_closure_set(v___x_286_, 0, v_blockCtxt_283_);
v___x_287_ = l_Lean_Parser_getTokenTable(v_env_252_);
lean_inc_ref(v___x_287_);
lean_inc_ref(v_pmctx_282_);
lean_inc_ref(v_ictx_249_);
v_s_288_ = l_Lean_Parser_ParserFn_run(v___x_286_, v_ictx_249_, v_pmctx_282_, v___x_287_, v_s_285_);
lean_inc_ref(v_s_288_);
v___x_289_ = l_Lean_Parser_ParserState_allErrors(v_s_288_);
v___x_290_ = lean_array_get_size(v___x_289_);
lean_dec_ref(v___x_289_);
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = lean_nat_dec_eq(v___x_290_, v___x_291_);
if (v___x_292_ == 0)
{
lean_dec_ref(v___x_287_);
lean_dec_ref(v___x_284_);
lean_dec_ref_known(v_pmctx_282_, 4);
lean_dec(v___x_257_);
v___y_260_ = v_s_288_;
goto v___jp_259_;
}
else
{
lean_object* v_pos_293_; uint8_t v___x_294_; 
v_pos_293_ = lean_ctor_get(v_s_288_, 2);
lean_inc(v_pos_293_);
v___x_294_ = l_Lean_Parser_InputContext_atEnd(v_ictx_249_, v_pos_293_);
if (v___x_294_ == 0)
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
lean_dec_ref(v_s_288_);
v___x_295_ = lean_box(0);
v___x_296_ = lean_box(0);
v___x_297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_257_);
lean_ctor_set(v___x_297_, 1, v___x_291_);
v___x_298_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_298_, 0, v___x_291_);
lean_ctor_set(v___x_298_, 1, v___x_295_);
lean_ctor_set(v___x_298_, 2, v___x_296_);
lean_ctor_set(v___x_298_, 3, v___x_297_);
lean_ctor_set(v___x_298_, 4, v___x_291_);
v___x_299_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_block), 3, 1);
lean_closure_set(v___x_299_, 0, v___x_298_);
v___x_300_ = l_Lean_Parser_ParserState_setPos(v___x_284_, v_pos_293_);
lean_inc_ref(v_ictx_249_);
v___x_301_ = l_Lean_Parser_ParserFn_run(v___x_299_, v_ictx_249_, v_pmctx_282_, v___x_287_, v___x_300_);
v___y_260_ = v___x_301_;
goto v___jp_259_;
}
else
{
lean_dec(v_pos_293_);
lean_dec_ref(v___x_287_);
lean_dec_ref(v___x_284_);
lean_dec_ref_known(v_pmctx_282_, 4);
lean_dec(v___x_257_);
v___y_260_ = v_s_288_;
goto v___jp_259_;
}
}
v___jp_259_:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; uint8_t v___x_264_; 
lean_inc_ref(v___y_260_);
v___x_261_ = l_Lean_Parser_ParserState_allErrors(v___y_260_);
v___x_262_ = lean_array_get_size(v___x_261_);
v___x_263_ = lean_unsigned_to_nat(0u);
v___x_264_ = lean_nat_dec_eq(v___x_262_, v___x_263_);
if (v___x_264_ == 0)
{
lean_object* v___x_265_; lean_object* v___f_266_; lean_object* v___x_267_; lean_object* v___f_268_; size_t v_sz_269_; size_t v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
lean_dec_ref(v___y_260_);
lean_dec(v___f_251_);
lean_dec_ref(v_source_250_);
lean_dec_ref(v_ictx_249_);
v___x_265_ = lean_box(0);
v___f_266_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__2), 3, 2);
lean_closure_set(v___f_266_, 0, v___x_265_);
lean_closure_set(v___f_266_, 1, v_toPure_242_);
v___x_267_ = lean_box(v___x_264_);
lean_inc(v_toBind_245_);
v___f_268_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__4___boxed), 9, 6);
lean_closure_set(v___f_268_, 0, v_text_243_);
lean_closure_set(v___f_268_, 1, v___x_267_);
lean_closure_set(v___f_268_, 2, v_logMessage_244_);
lean_closure_set(v___f_268_, 3, v_toBind_245_);
lean_closure_set(v___f_268_, 4, v___f_266_);
lean_closure_set(v___f_268_, 5, v_getFileName_246_);
v_sz_269_ = lean_array_size(v___x_261_);
v___x_270_ = ((size_t)0ULL);
v___x_271_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_247_, v___x_261_, v___f_268_, v_sz_269_, v___x_270_, v___x_265_);
v___x_272_ = lean_apply_4(v_toBind_245_, lean_box(0), lean_box(0), v___x_271_, v___f_248_);
return v___x_272_;
}
else
{
lean_object* v_stxStack_273_; lean_object* v_pos_274_; uint8_t v___x_275_; 
lean_dec_ref(v___x_261_);
lean_dec(v___f_248_);
lean_dec_ref(v_inst_247_);
v_stxStack_273_ = lean_ctor_get(v___y_260_, 0);
lean_inc_ref(v_stxStack_273_);
v_pos_274_ = lean_ctor_get(v___y_260_, 2);
lean_inc(v_pos_274_);
lean_dec_ref(v___y_260_);
v___x_275_ = l_Lean_Parser_InputContext_atEnd(v_ictx_249_, v_pos_274_);
lean_dec_ref(v_ictx_249_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; lean_object* v___f_277_; lean_object* v___x_278_; 
lean_dec_ref(v_stxStack_273_);
lean_dec(v_toPure_242_);
v___x_276_ = lean_box(v___x_275_);
lean_inc(v_toBind_245_);
v___f_277_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_277_, 0, v_text_243_);
lean_closure_set(v___f_277_, 1, v_pos_274_);
lean_closure_set(v___f_277_, 2, v_source_250_);
lean_closure_set(v___f_277_, 3, v___x_276_);
lean_closure_set(v___f_277_, 4, v_logMessage_244_);
lean_closure_set(v___f_277_, 5, v_toBind_245_);
lean_closure_set(v___f_277_, 6, v___f_251_);
v___x_278_ = lean_apply_4(v_toBind_245_, lean_box(0), lean_box(0), v_getFileName_246_, v___f_277_);
return v___x_278_;
}
else
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
lean_dec(v_pos_274_);
lean_dec(v___f_251_);
lean_dec_ref(v_source_250_);
lean_dec(v_getFileName_246_);
lean_dec(v_toBind_245_);
lean_dec(v_logMessage_244_);
lean_dec_ref(v_text_243_);
v___x_279_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_273_);
lean_dec_ref(v_stxStack_273_);
v___x_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
v___x_281_ = lean_apply_2(v_toPure_242_, lean_box(0), v___x_280_);
return v___x_281_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_toPure_302_ = _args[0];
lean_object* v_text_303_ = _args[1];
lean_object* v_logMessage_304_ = _args[2];
lean_object* v_toBind_305_ = _args[3];
lean_object* v_getFileName_306_ = _args[4];
lean_object* v_inst_307_ = _args[5];
lean_object* v___f_308_ = _args[6];
lean_object* v_ictx_309_ = _args[7];
lean_object* v_source_310_ = _args[8];
lean_object* v___f_311_ = _args[9];
lean_object* v_env_312_ = _args[10];
lean_object* v_____do__lift_313_ = _args[11];
lean_object* v_____do__lift_314_ = _args[12];
lean_object* v_val_315_ = _args[13];
lean_object* v___y_316_ = _args[14];
lean_object* v___x_317_ = _args[15];
lean_object* v_____do__lift_318_ = _args[16];
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_Lean_parseVersoDocString___redArg___lam__6(v_toPure_302_, v_text_303_, v_logMessage_304_, v_toBind_305_, v_getFileName_306_, v_inst_307_, v___f_308_, v_ictx_309_, v_source_310_, v___f_311_, v_env_312_, v_____do__lift_313_, v_____do__lift_314_, v_val_315_, v___y_316_, v___x_317_, v_____do__lift_318_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7(lean_object* v_toPure_320_, lean_object* v_text_321_, lean_object* v_logMessage_322_, lean_object* v_toBind_323_, lean_object* v_getFileName_324_, lean_object* v_inst_325_, lean_object* v___f_326_, lean_object* v_ictx_327_, lean_object* v_source_328_, lean_object* v___f_329_, lean_object* v_env_330_, lean_object* v_____do__lift_331_, lean_object* v_val_332_, lean_object* v___y_333_, lean_object* v___x_334_, lean_object* v_getOpenDecls_335_, lean_object* v_____do__lift_336_){
_start:
{
lean_object* v___f_337_; lean_object* v___x_338_; 
lean_inc(v_toBind_323_);
v___f_337_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__6___boxed), 17, 16);
lean_closure_set(v___f_337_, 0, v_toPure_320_);
lean_closure_set(v___f_337_, 1, v_text_321_);
lean_closure_set(v___f_337_, 2, v_logMessage_322_);
lean_closure_set(v___f_337_, 3, v_toBind_323_);
lean_closure_set(v___f_337_, 4, v_getFileName_324_);
lean_closure_set(v___f_337_, 5, v_inst_325_);
lean_closure_set(v___f_337_, 6, v___f_326_);
lean_closure_set(v___f_337_, 7, v_ictx_327_);
lean_closure_set(v___f_337_, 8, v_source_328_);
lean_closure_set(v___f_337_, 9, v___f_329_);
lean_closure_set(v___f_337_, 10, v_env_330_);
lean_closure_set(v___f_337_, 11, v_____do__lift_331_);
lean_closure_set(v___f_337_, 12, v_____do__lift_336_);
lean_closure_set(v___f_337_, 13, v_val_332_);
lean_closure_set(v___f_337_, 14, v___y_333_);
lean_closure_set(v___f_337_, 15, v___x_334_);
v___x_338_ = lean_apply_4(v_toBind_323_, lean_box(0), lean_box(0), v_getOpenDecls_335_, v___f_337_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7___boxed(lean_object** _args){
lean_object* v_toPure_339_ = _args[0];
lean_object* v_text_340_ = _args[1];
lean_object* v_logMessage_341_ = _args[2];
lean_object* v_toBind_342_ = _args[3];
lean_object* v_getFileName_343_ = _args[4];
lean_object* v_inst_344_ = _args[5];
lean_object* v___f_345_ = _args[6];
lean_object* v_ictx_346_ = _args[7];
lean_object* v_source_347_ = _args[8];
lean_object* v___f_348_ = _args[9];
lean_object* v_env_349_ = _args[10];
lean_object* v_____do__lift_350_ = _args[11];
lean_object* v_val_351_ = _args[12];
lean_object* v___y_352_ = _args[13];
lean_object* v___x_353_ = _args[14];
lean_object* v_getOpenDecls_354_ = _args[15];
lean_object* v_____do__lift_355_ = _args[16];
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lean_parseVersoDocString___redArg___lam__7(v_toPure_339_, v_text_340_, v_logMessage_341_, v_toBind_342_, v_getFileName_343_, v_inst_344_, v___f_345_, v_ictx_346_, v_source_347_, v___f_348_, v_env_349_, v_____do__lift_350_, v_val_351_, v___y_352_, v___x_353_, v_getOpenDecls_354_, v_____do__lift_355_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__8(lean_object* v_inst_357_, lean_object* v_toPure_358_, lean_object* v_text_359_, lean_object* v_logMessage_360_, lean_object* v_toBind_361_, lean_object* v_getFileName_362_, lean_object* v_inst_363_, lean_object* v___f_364_, lean_object* v_ictx_365_, lean_object* v_source_366_, lean_object* v___f_367_, lean_object* v_env_368_, lean_object* v_val_369_, lean_object* v___y_370_, lean_object* v___x_371_, lean_object* v_____do__lift_372_){
_start:
{
lean_object* v_getCurrNamespace_373_; lean_object* v_getOpenDecls_374_; lean_object* v___f_375_; lean_object* v___x_376_; 
v_getCurrNamespace_373_ = lean_ctor_get(v_inst_357_, 0);
lean_inc(v_getCurrNamespace_373_);
v_getOpenDecls_374_ = lean_ctor_get(v_inst_357_, 1);
lean_inc(v_getOpenDecls_374_);
lean_dec_ref(v_inst_357_);
lean_inc(v_toBind_361_);
v___f_375_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__7___boxed), 17, 16);
lean_closure_set(v___f_375_, 0, v_toPure_358_);
lean_closure_set(v___f_375_, 1, v_text_359_);
lean_closure_set(v___f_375_, 2, v_logMessage_360_);
lean_closure_set(v___f_375_, 3, v_toBind_361_);
lean_closure_set(v___f_375_, 4, v_getFileName_362_);
lean_closure_set(v___f_375_, 5, v_inst_363_);
lean_closure_set(v___f_375_, 6, v___f_364_);
lean_closure_set(v___f_375_, 7, v_ictx_365_);
lean_closure_set(v___f_375_, 8, v_source_366_);
lean_closure_set(v___f_375_, 9, v___f_367_);
lean_closure_set(v___f_375_, 10, v_env_368_);
lean_closure_set(v___f_375_, 11, v_____do__lift_372_);
lean_closure_set(v___f_375_, 12, v_val_369_);
lean_closure_set(v___f_375_, 13, v___y_370_);
lean_closure_set(v___f_375_, 14, v___x_371_);
lean_closure_set(v___f_375_, 15, v_getOpenDecls_374_);
v___x_376_ = lean_apply_4(v_toBind_361_, lean_box(0), lean_box(0), v_getCurrNamespace_373_, v___f_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__9(lean_object* v_source_377_, lean_object* v_text_378_, lean_object* v___y_379_, lean_object* v_inst_380_, lean_object* v_toPure_381_, lean_object* v_logMessage_382_, lean_object* v_toBind_383_, lean_object* v_getFileName_384_, lean_object* v_inst_385_, lean_object* v___f_386_, lean_object* v___f_387_, lean_object* v_env_388_, lean_object* v_val_389_, lean_object* v___x_390_, lean_object* v_inst_391_, lean_object* v_____do__lift_392_){
_start:
{
lean_object* v_ictx_393_; lean_object* v___f_394_; lean_object* v___x_395_; 
lean_inc(v___y_379_);
lean_inc_ref(v_text_378_);
lean_inc_ref(v_source_377_);
v_ictx_393_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_ictx_393_, 0, v_source_377_);
lean_ctor_set(v_ictx_393_, 1, v_____do__lift_392_);
lean_ctor_set(v_ictx_393_, 2, v_text_378_);
lean_ctor_set(v_ictx_393_, 3, v___y_379_);
lean_inc(v_toBind_383_);
v___f_394_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__8), 16, 15);
lean_closure_set(v___f_394_, 0, v_inst_380_);
lean_closure_set(v___f_394_, 1, v_toPure_381_);
lean_closure_set(v___f_394_, 2, v_text_378_);
lean_closure_set(v___f_394_, 3, v_logMessage_382_);
lean_closure_set(v___f_394_, 4, v_toBind_383_);
lean_closure_set(v___f_394_, 5, v_getFileName_384_);
lean_closure_set(v___f_394_, 6, v_inst_385_);
lean_closure_set(v___f_394_, 7, v___f_386_);
lean_closure_set(v___f_394_, 8, v_ictx_393_);
lean_closure_set(v___f_394_, 9, v_source_377_);
lean_closure_set(v___f_394_, 10, v___f_387_);
lean_closure_set(v___f_394_, 11, v_env_388_);
lean_closure_set(v___f_394_, 12, v_val_389_);
lean_closure_set(v___f_394_, 13, v___y_379_);
lean_closure_set(v___f_394_, 14, v___x_390_);
v___x_395_ = lean_apply_4(v_toBind_383_, lean_box(0), lean_box(0), v_inst_391_, v___f_394_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__10(lean_object* v_inst_396_, lean_object* v_source_397_, lean_object* v_text_398_, lean_object* v___y_399_, lean_object* v_inst_400_, lean_object* v_toPure_401_, lean_object* v_toBind_402_, lean_object* v_inst_403_, lean_object* v___f_404_, lean_object* v___f_405_, lean_object* v_val_406_, lean_object* v___x_407_, lean_object* v_inst_408_, lean_object* v_env_409_){
_start:
{
lean_object* v_getFileName_410_; lean_object* v_logMessage_411_; lean_object* v___f_412_; lean_object* v___x_413_; 
v_getFileName_410_ = lean_ctor_get(v_inst_396_, 2);
lean_inc_n(v_getFileName_410_, 2);
v_logMessage_411_ = lean_ctor_get(v_inst_396_, 4);
lean_inc(v_logMessage_411_);
lean_dec_ref(v_inst_396_);
lean_inc(v_toBind_402_);
v___f_412_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__9), 16, 15);
lean_closure_set(v___f_412_, 0, v_source_397_);
lean_closure_set(v___f_412_, 1, v_text_398_);
lean_closure_set(v___f_412_, 2, v___y_399_);
lean_closure_set(v___f_412_, 3, v_inst_400_);
lean_closure_set(v___f_412_, 4, v_toPure_401_);
lean_closure_set(v___f_412_, 5, v_logMessage_411_);
lean_closure_set(v___f_412_, 6, v_toBind_402_);
lean_closure_set(v___f_412_, 7, v_getFileName_410_);
lean_closure_set(v___f_412_, 8, v_inst_403_);
lean_closure_set(v___f_412_, 9, v___f_404_);
lean_closure_set(v___f_412_, 10, v___f_405_);
lean_closure_set(v___f_412_, 11, v_env_409_);
lean_closure_set(v___f_412_, 12, v_val_406_);
lean_closure_set(v___f_412_, 13, v___x_407_);
lean_closure_set(v___f_412_, 14, v_inst_408_);
v___x_413_ = lean_apply_4(v_toBind_402_, lean_box(0), lean_box(0), v_getFileName_410_, v___f_412_);
return v___x_413_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1(void){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__11___closed__0));
v___x_416_ = l_Lean_stringToMessageData(v___x_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__11(lean_object* v_docComment_417_, lean_object* v_inst_418_, lean_object* v_inst_419_, lean_object* v_inst_420_, lean_object* v_toPure_421_, lean_object* v_toBind_422_, lean_object* v_inst_423_, lean_object* v___f_424_, lean_object* v___f_425_, lean_object* v_inst_426_, lean_object* v_inst_427_, lean_object* v_text_428_){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; uint8_t v___x_431_; lean_object* v___x_432_; 
v___x_429_ = lean_unsigned_to_nat(1u);
v___x_430_ = l_Lean_Syntax_getArg(v_docComment_417_, v___x_429_);
v___x_431_ = 1;
v___x_432_ = l_Lean_Syntax_getPos_x3f(v___x_430_, v___x_431_);
if (lean_obj_tag(v___x_432_) == 1)
{
lean_object* v_val_433_; lean_object* v___x_434_; 
v_val_433_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_val_433_);
lean_dec_ref_known(v___x_432_, 1);
v___x_434_ = l_Lean_Syntax_getTailPos_x3f(v___x_430_, v___x_431_);
lean_dec(v___x_430_);
if (lean_obj_tag(v___x_434_) == 1)
{
lean_object* v_val_435_; lean_object* v_source_436_; lean_object* v___y_438_; lean_object* v___x_442_; lean_object* v_endPos_443_; lean_object* v___x_444_; uint8_t v___x_445_; 
lean_dec_ref(v_inst_427_);
lean_dec(v_docComment_417_);
v_val_435_ = lean_ctor_get(v___x_434_, 0);
lean_inc(v_val_435_);
lean_dec_ref_known(v___x_434_, 1);
v_source_436_ = lean_ctor_get(v_text_428_, 0);
lean_inc_ref(v_source_436_);
v___x_442_ = lean_string_utf8_prev(v_source_436_, v_val_435_);
lean_dec(v_val_435_);
v_endPos_443_ = lean_string_utf8_prev(v_source_436_, v___x_442_);
lean_dec(v___x_442_);
v___x_444_ = lean_string_utf8_byte_size(v_source_436_);
v___x_445_ = lean_nat_dec_le(v_endPos_443_, v___x_444_);
if (v___x_445_ == 0)
{
lean_dec(v_endPos_443_);
v___y_438_ = v___x_444_;
goto v___jp_437_;
}
else
{
v___y_438_ = v_endPos_443_;
goto v___jp_437_;
}
v___jp_437_:
{
lean_object* v_getEnv_439_; lean_object* v___f_440_; lean_object* v___x_441_; 
v_getEnv_439_ = lean_ctor_get(v_inst_418_, 0);
lean_inc(v_getEnv_439_);
lean_dec_ref(v_inst_418_);
lean_inc(v_toBind_422_);
v___f_440_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__10), 14, 13);
lean_closure_set(v___f_440_, 0, v_inst_419_);
lean_closure_set(v___f_440_, 1, v_source_436_);
lean_closure_set(v___f_440_, 2, v_text_428_);
lean_closure_set(v___f_440_, 3, v___y_438_);
lean_closure_set(v___f_440_, 4, v_inst_420_);
lean_closure_set(v___f_440_, 5, v_toPure_421_);
lean_closure_set(v___f_440_, 6, v_toBind_422_);
lean_closure_set(v___f_440_, 7, v_inst_423_);
lean_closure_set(v___f_440_, 8, v___f_424_);
lean_closure_set(v___f_440_, 9, v___f_425_);
lean_closure_set(v___f_440_, 10, v_val_433_);
lean_closure_set(v___f_440_, 11, v___x_429_);
lean_closure_set(v___f_440_, 12, v_inst_426_);
v___x_441_ = lean_apply_4(v_toBind_422_, lean_box(0), lean_box(0), v_getEnv_439_, v___f_440_);
return v___x_441_;
}
}
else
{
lean_object* v___x_446_; lean_object* v___x_447_; 
lean_dec(v___x_434_);
lean_dec(v_val_433_);
lean_dec_ref(v_text_428_);
lean_dec(v_inst_426_);
lean_dec(v___f_425_);
lean_dec(v___f_424_);
lean_dec(v_toBind_422_);
lean_dec(v_toPure_421_);
lean_dec_ref(v_inst_420_);
lean_dec_ref(v_inst_419_);
lean_dec_ref(v_inst_418_);
v___x_446_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_447_ = l_Lean_throwErrorAt___redArg(v_inst_423_, v_inst_427_, v_docComment_417_, v___x_446_);
return v___x_447_;
}
}
else
{
lean_object* v___x_448_; lean_object* v___x_449_; 
lean_dec(v___x_432_);
lean_dec(v___x_430_);
lean_dec_ref(v_text_428_);
lean_dec(v_inst_426_);
lean_dec(v___f_425_);
lean_dec(v___f_424_);
lean_dec(v_toBind_422_);
lean_dec(v_toPure_421_);
lean_dec_ref(v_inst_420_);
lean_dec_ref(v_inst_419_);
lean_dec_ref(v_inst_418_);
v___x_448_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_449_ = l_Lean_throwErrorAt___redArg(v_inst_423_, v_inst_427_, v_docComment_417_, v___x_448_);
return v___x_449_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg(lean_object* v_inst_460_, lean_object* v_inst_461_, lean_object* v_inst_462_, lean_object* v_inst_463_, lean_object* v_inst_464_, lean_object* v_inst_465_, lean_object* v_inst_466_, lean_object* v_docComment_467_){
_start:
{
lean_object* v_toApplicative_468_; lean_object* v_toBind_469_; lean_object* v_toPure_470_; lean_object* v___f_471_; lean_object* v___f_472_; lean_object* v___f_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; uint8_t v___x_479_; 
v_toApplicative_468_ = lean_ctor_get(v_inst_460_, 0);
v_toBind_469_ = lean_ctor_get(v_inst_460_, 1);
lean_inc_n(v_toBind_469_, 2);
v_toPure_470_ = lean_ctor_get(v_toApplicative_468_, 1);
lean_inc_n(v_toPure_470_, 4);
v___f_471_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__0), 2, 1);
lean_closure_set(v___f_471_, 0, v_toPure_470_);
v___f_472_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__1), 2, 1);
lean_closure_set(v___f_472_, 0, v_toPure_470_);
lean_inc_n(v_docComment_467_, 2);
v___f_473_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__11), 12, 11);
lean_closure_set(v___f_473_, 0, v_docComment_467_);
lean_closure_set(v___f_473_, 1, v_inst_463_);
lean_closure_set(v___f_473_, 2, v_inst_465_);
lean_closure_set(v___f_473_, 3, v_inst_466_);
lean_closure_set(v___f_473_, 4, v_toPure_470_);
lean_closure_set(v___f_473_, 5, v_toBind_469_);
lean_closure_set(v___f_473_, 6, v_inst_460_);
lean_closure_set(v___f_473_, 7, v___f_472_);
lean_closure_set(v___f_473_, 8, v___f_471_);
lean_closure_set(v___f_473_, 9, v_inst_464_);
lean_closure_set(v___f_473_, 10, v_inst_462_);
v___x_474_ = l_Lean_Syntax_getKind(v_docComment_467_);
v___x_475_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__0));
v___x_476_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__1));
v___x_477_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__2));
v___x_478_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__4));
v___x_479_ = lean_name_eq(v___x_474_, v___x_478_);
lean_dec(v___x_474_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; 
lean_dec(v_toPure_470_);
lean_dec(v_docComment_467_);
v___x_480_ = lean_apply_4(v_toBind_469_, lean_box(0), lean_box(0), v_inst_461_, v___f_473_);
return v___x_480_;
}
else
{
lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_481_ = lean_unsigned_to_nat(0u);
v___x_482_ = l_Lean_Syntax_getArg(v_docComment_467_, v___x_481_);
lean_dec(v_docComment_467_);
if (lean_obj_tag(v___x_482_) == 1)
{
lean_object* v_kind_483_; 
v_kind_483_ = lean_ctor_get(v___x_482_, 1);
lean_inc(v_kind_483_);
if (lean_obj_tag(v_kind_483_) == 1)
{
lean_object* v_pre_484_; 
v_pre_484_ = lean_ctor_get(v_kind_483_, 0);
lean_inc(v_pre_484_);
if (lean_obj_tag(v_pre_484_) == 1)
{
lean_object* v_pre_485_; 
v_pre_485_ = lean_ctor_get(v_pre_484_, 0);
lean_inc(v_pre_485_);
if (lean_obj_tag(v_pre_485_) == 1)
{
lean_object* v_pre_486_; 
v_pre_486_ = lean_ctor_get(v_pre_485_, 0);
lean_inc(v_pre_486_);
if (lean_obj_tag(v_pre_486_) == 1)
{
lean_object* v_pre_487_; 
v_pre_487_ = lean_ctor_get(v_pre_486_, 0);
lean_inc(v_pre_487_);
if (lean_obj_tag(v_pre_487_) == 0)
{
lean_object* v_info_488_; lean_object* v_args_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_517_; 
v_info_488_ = lean_ctor_get(v___x_482_, 0);
v_args_489_ = lean_ctor_get(v___x_482_, 2);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_517_ == 0)
{
lean_object* v_unused_518_; 
v_unused_518_ = lean_ctor_get(v___x_482_, 1);
lean_dec(v_unused_518_);
v___x_491_ = v___x_482_;
v_isShared_492_ = v_isSharedCheck_517_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_args_489_);
lean_inc(v_info_488_);
lean_dec(v___x_482_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_517_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v_str_493_; lean_object* v_str_494_; lean_object* v_str_495_; lean_object* v_str_496_; uint8_t v___x_497_; 
v_str_493_ = lean_ctor_get(v_kind_483_, 1);
lean_inc_ref(v_str_493_);
lean_dec_ref_known(v_kind_483_, 2);
v_str_494_ = lean_ctor_get(v_pre_484_, 1);
lean_inc_ref(v_str_494_);
lean_dec_ref_known(v_pre_484_, 2);
v_str_495_ = lean_ctor_get(v_pre_485_, 1);
lean_inc_ref(v_str_495_);
lean_dec_ref_known(v_pre_485_, 2);
v_str_496_ = lean_ctor_get(v_pre_486_, 1);
lean_inc_ref(v_str_496_);
lean_dec_ref_known(v_pre_486_, 2);
v___x_497_ = lean_string_dec_eq(v_str_496_, v___x_475_);
lean_dec_ref(v_str_496_);
if (v___x_497_ == 0)
{
lean_object* v___x_498_; 
lean_dec_ref(v_str_495_);
lean_dec_ref(v_str_494_);
lean_dec_ref(v_str_493_);
lean_del_object(v___x_491_);
lean_dec_ref(v_args_489_);
lean_dec(v_info_488_);
lean_dec(v_toPure_470_);
v___x_498_ = lean_apply_4(v_toBind_469_, lean_box(0), lean_box(0), v_inst_461_, v___f_473_);
return v___x_498_;
}
else
{
uint8_t v___x_499_; 
v___x_499_ = lean_string_dec_eq(v_str_495_, v___x_476_);
lean_dec_ref(v_str_495_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; 
lean_dec_ref(v_str_494_);
lean_dec_ref(v_str_493_);
lean_del_object(v___x_491_);
lean_dec_ref(v_args_489_);
lean_dec(v_info_488_);
lean_dec(v_toPure_470_);
v___x_500_ = lean_apply_4(v_toBind_469_, lean_box(0), lean_box(0), v_inst_461_, v___f_473_);
return v___x_500_;
}
else
{
uint8_t v___x_501_; 
v___x_501_ = lean_string_dec_eq(v_str_494_, v___x_477_);
lean_dec_ref(v_str_494_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; 
lean_dec_ref(v_str_493_);
lean_del_object(v___x_491_);
lean_dec_ref(v_args_489_);
lean_dec(v_info_488_);
lean_dec(v_toPure_470_);
v___x_502_ = lean_apply_4(v_toBind_469_, lean_box(0), lean_box(0), v_inst_461_, v___f_473_);
return v___x_502_;
}
else
{
lean_object* v___x_503_; uint8_t v___x_504_; 
v___x_503_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__5));
v___x_504_ = lean_string_dec_eq(v_str_493_, v___x_503_);
lean_dec_ref(v_str_493_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; 
lean_del_object(v___x_491_);
lean_dec_ref(v_args_489_);
lean_dec(v_info_488_);
lean_dec(v_toPure_470_);
v___x_505_ = lean_apply_4(v_toBind_469_, lean_box(0), lean_box(0), v_inst_461_, v___f_473_);
return v___x_505_;
}
else
{
lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_511_; 
lean_dec_ref(v___f_473_);
lean_dec(v_toBind_469_);
lean_dec(v_inst_461_);
v___x_506_ = l_Lean_Name_str___override(v_pre_487_, v___x_475_);
v___x_507_ = l_Lean_Name_str___override(v___x_506_, v___x_476_);
v___x_508_ = l_Lean_Name_str___override(v___x_507_, v___x_477_);
v___x_509_ = l_Lean_Name_str___override(v___x_508_, v___x_503_);
if (v_isShared_492_ == 0)
{
lean_ctor_set(v___x_491_, 1, v___x_509_);
v___x_511_ = v___x_491_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_info_488_);
lean_ctor_set(v_reuseFailAlloc_516_, 1, v___x_509_);
lean_ctor_set(v_reuseFailAlloc_516_, 2, v_args_489_);
v___x_511_ = v_reuseFailAlloc_516_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_512_ = lean_unsigned_to_nat(1u);
v___x_513_ = l_Lean_Syntax_getArg(v___x_511_, v___x_512_);
lean_dec_ref(v___x_511_);
v___x_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
v___x_515_ = lean_apply_2(v_toPure_470_, lean_box(0), v___x_514_);
return v___x_515_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_519_; 
lean_dec_ref_known(v_pre_486_, 2);
lean_dec(v_pre_487_);
lean_dec_ref_known(v_pre_485_, 2);
lean_dec_ref_known(v_pre_484_, 2);
lean_dec_ref_known(v_kind_483_, 2);
lean_dec_ref_known(v___x_482_, 3);
lean_dec(v_toPure_470_);
v___x_519_ = lean_apply_4(v_toBind_469_, lean_box(0), lean_box(0), v_inst_461_, v___f_473_);
return v___x_519_;
}
}
else
{
lean_object* v___x_520_; 
lean_dec_ref_known(v_pre_485_, 2);
lean_dec(v_pre_486_);
lean_dec_ref_known(v_pre_484_, 2);
lean_dec_ref_known(v_kind_483_, 2);
lean_dec_ref_known(v___x_482_, 3);
lean_dec(v_toPure_470_);
v___x_520_ = lean_apply_4(v_toBind_469_, lean_box(0), lean_box(0), v_inst_461_, v___f_473_);
return v___x_520_;
}
}
else
{
lean_object* v___x_521_; 
lean_dec_ref_known(v_pre_484_, 2);
lean_dec(v_pre_485_);
lean_dec_ref_known(v_kind_483_, 2);
lean_dec_ref_known(v___x_482_, 3);
lean_dec(v_toPure_470_);
v___x_521_ = lean_apply_4(v_toBind_469_, lean_box(0), lean_box(0), v_inst_461_, v___f_473_);
return v___x_521_;
}
}
else
{
lean_object* v___x_522_; 
lean_dec_ref_known(v_kind_483_, 2);
lean_dec(v_pre_484_);
lean_dec_ref_known(v___x_482_, 3);
lean_dec(v_toPure_470_);
v___x_522_ = lean_apply_4(v_toBind_469_, lean_box(0), lean_box(0), v_inst_461_, v___f_473_);
return v___x_522_;
}
}
else
{
lean_object* v___x_523_; 
lean_dec_ref_known(v___x_482_, 3);
lean_dec(v_kind_483_);
lean_dec(v_toPure_470_);
v___x_523_ = lean_apply_4(v_toBind_469_, lean_box(0), lean_box(0), v_inst_461_, v___f_473_);
return v___x_523_;
}
}
else
{
lean_object* v___x_524_; 
lean_dec(v___x_482_);
lean_dec(v_toPure_470_);
v___x_524_ = lean_apply_4(v_toBind_469_, lean_box(0), lean_box(0), v_inst_461_, v___f_473_);
return v___x_524_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString(lean_object* v_m_525_, lean_object* v_inst_526_, lean_object* v_inst_527_, lean_object* v_inst_528_, lean_object* v_inst_529_, lean_object* v_inst_530_, lean_object* v_inst_531_, lean_object* v_inst_532_, lean_object* v_docComment_533_){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = l_Lean_parseVersoDocString___redArg(v_inst_526_, v_inst_527_, v_inst_528_, v_inst_529_, v_inst_530_, v_inst_531_, v_inst_532_, v_docComment_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0(lean_object* v_text_535_, lean_object* v_pos_536_, lean_object* v_source_537_, uint8_t v___x_538_, lean_object* v_logMessage_539_, lean_object* v_____do__lift_540_){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; uint8_t v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; uint32_t v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_541_ = l_Lean_FileMap_toPosition(v_text_535_, v_pos_536_);
v___x_542_ = lean_box(0);
v___x_543_ = 2;
v___x_544_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_545_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__0));
v___x_546_ = lean_string_utf8_get(v_source_537_, v_pos_536_);
v___x_547_ = lean_string_push(v___x_544_, v___x_546_);
v___x_548_ = lean_string_append(v___x_545_, v___x_547_);
lean_dec_ref(v___x_547_);
v___x_549_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__1));
v___x_550_ = lean_string_append(v___x_548_, v___x_549_);
v___x_551_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
v___x_552_ = l_Lean_MessageData_ofFormat(v___x_551_);
v___x_553_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_553_, 0, v_____do__lift_540_);
lean_ctor_set(v___x_553_, 1, v___x_541_);
lean_ctor_set(v___x_553_, 2, v___x_542_);
lean_ctor_set(v___x_553_, 3, v___x_544_);
lean_ctor_set(v___x_553_, 4, v___x_552_);
lean_ctor_set_uint8(v___x_553_, sizeof(void*)*5, v___x_538_);
lean_ctor_set_uint8(v___x_553_, sizeof(void*)*5 + 1, v___x_543_);
lean_ctor_set_uint8(v___x_553_, sizeof(void*)*5 + 2, v___x_538_);
v___x_554_ = lean_apply_1(v_logMessage_539_, v___x_553_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0___boxed(lean_object* v_text_555_, lean_object* v_pos_556_, lean_object* v_source_557_, lean_object* v___x_558_, lean_object* v_logMessage_559_, lean_object* v_____do__lift_560_){
_start:
{
uint8_t v___x_1167__boxed_561_; lean_object* v_res_562_; 
v___x_1167__boxed_561_ = lean_unbox(v___x_558_);
v_res_562_ = l_Lean_reportVersoParseFailure___redArg___lam__0(v_text_555_, v_pos_556_, v_source_557_, v___x_1167__boxed_561_, v_logMessage_559_, v_____do__lift_560_);
lean_dec_ref(v_source_557_);
lean_dec(v_pos_556_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1(lean_object* v_toPure_563_, lean_object* v___x_564_, lean_object* v___x_565_, lean_object* v___y_566_, lean_object* v_ictx_567_, lean_object* v_text_568_, lean_object* v_source_569_, lean_object* v_logMessage_570_, lean_object* v_toBind_571_, lean_object* v_getFileName_572_, lean_object* v_____s_573_){
_start:
{
lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_577_ = lean_array_get_size(v___x_564_);
v___x_578_ = lean_nat_dec_eq(v___x_577_, v___x_565_);
if (v___x_578_ == 0)
{
lean_dec(v_getFileName_572_);
lean_dec(v_toBind_571_);
lean_dec(v_logMessage_570_);
lean_dec_ref(v_source_569_);
lean_dec_ref(v_text_568_);
lean_dec_ref(v___y_566_);
goto v___jp_574_;
}
else
{
lean_object* v_pos_579_; uint8_t v___x_580_; 
v_pos_579_ = lean_ctor_get(v___y_566_, 2);
lean_inc(v_pos_579_);
lean_dec_ref(v___y_566_);
v___x_580_ = l_Lean_Parser_InputContext_atEnd(v_ictx_567_, v_pos_579_);
if (v___x_580_ == 0)
{
lean_object* v___x_581_; lean_object* v___f_582_; lean_object* v___x_583_; 
lean_dec(v_toPure_563_);
v___x_581_ = lean_box(v___x_580_);
v___f_582_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_582_, 0, v_text_568_);
lean_closure_set(v___f_582_, 1, v_pos_579_);
lean_closure_set(v___f_582_, 2, v_source_569_);
lean_closure_set(v___f_582_, 3, v___x_581_);
lean_closure_set(v___f_582_, 4, v_logMessage_570_);
v___x_583_ = lean_apply_4(v_toBind_571_, lean_box(0), lean_box(0), v_getFileName_572_, v___f_582_);
return v___x_583_;
}
else
{
lean_dec(v_pos_579_);
lean_dec(v_getFileName_572_);
lean_dec(v_toBind_571_);
lean_dec(v_logMessage_570_);
lean_dec_ref(v_source_569_);
lean_dec_ref(v_text_568_);
goto v___jp_574_;
}
}
v___jp_574_:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = lean_box(0);
v___x_576_ = lean_apply_2(v_toPure_563_, lean_box(0), v___x_575_);
return v___x_576_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1___boxed(lean_object* v_toPure_584_, lean_object* v___x_585_, lean_object* v___x_586_, lean_object* v___y_587_, lean_object* v_ictx_588_, lean_object* v_text_589_, lean_object* v_source_590_, lean_object* v_logMessage_591_, lean_object* v_toBind_592_, lean_object* v_getFileName_593_, lean_object* v_____s_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = l_Lean_reportVersoParseFailure___redArg___lam__1(v_toPure_584_, v___x_585_, v___x_586_, v___y_587_, v_ictx_588_, v_text_589_, v_source_590_, v_logMessage_591_, v_toBind_592_, v_getFileName_593_, v_____s_594_);
lean_dec_ref(v_ictx_588_);
lean_dec(v___x_586_);
lean_dec_ref(v___x_585_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3(lean_object* v_text_596_, lean_object* v_fst_597_, lean_object* v_snd_598_, lean_object* v_logMessage_599_, lean_object* v_toBind_600_, lean_object* v___f_601_, lean_object* v_____do__lift_602_){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; uint8_t v___x_605_; uint8_t v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_603_ = l_Lean_FileMap_toPosition(v_text_596_, v_fst_597_);
v___x_604_ = lean_box(0);
v___x_605_ = 0;
v___x_606_ = 2;
v___x_607_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_608_ = l_Lean_Parser_Error_toString(v_snd_598_);
v___x_609_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_609_, 0, v___x_608_);
v___x_610_ = l_Lean_MessageData_ofFormat(v___x_609_);
v___x_611_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_611_, 0, v_____do__lift_602_);
lean_ctor_set(v___x_611_, 1, v___x_603_);
lean_ctor_set(v___x_611_, 2, v___x_604_);
lean_ctor_set(v___x_611_, 3, v___x_607_);
lean_ctor_set(v___x_611_, 4, v___x_610_);
lean_ctor_set_uint8(v___x_611_, sizeof(void*)*5, v___x_605_);
lean_ctor_set_uint8(v___x_611_, sizeof(void*)*5 + 1, v___x_606_);
lean_ctor_set_uint8(v___x_611_, sizeof(void*)*5 + 2, v___x_605_);
v___x_612_ = lean_apply_1(v_logMessage_599_, v___x_611_);
v___x_613_ = lean_apply_4(v_toBind_600_, lean_box(0), lean_box(0), v___x_612_, v___f_601_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3___boxed(lean_object* v_text_614_, lean_object* v_fst_615_, lean_object* v_snd_616_, lean_object* v_logMessage_617_, lean_object* v_toBind_618_, lean_object* v___f_619_, lean_object* v_____do__lift_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l_Lean_reportVersoParseFailure___redArg___lam__3(v_text_614_, v_fst_615_, v_snd_616_, v_logMessage_617_, v_toBind_618_, v___f_619_, v_____do__lift_620_);
lean_dec(v_fst_615_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__2(lean_object* v_text_622_, lean_object* v_logMessage_623_, lean_object* v_toBind_624_, lean_object* v___f_625_, lean_object* v_getFileName_626_, lean_object* v_a_627_, lean_object* v_x_628_, lean_object* v___y_629_){
_start:
{
lean_object* v_snd_630_; lean_object* v_fst_631_; lean_object* v_snd_632_; lean_object* v___f_633_; lean_object* v___x_634_; 
v_snd_630_ = lean_ctor_get(v_a_627_, 1);
lean_inc(v_snd_630_);
v_fst_631_ = lean_ctor_get(v_a_627_, 0);
lean_inc(v_fst_631_);
lean_dec_ref(v_a_627_);
v_snd_632_ = lean_ctor_get(v_snd_630_, 1);
lean_inc(v_snd_632_);
lean_dec(v_snd_630_);
lean_inc(v_toBind_624_);
v___f_633_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_633_, 0, v_text_622_);
lean_closure_set(v___f_633_, 1, v_fst_631_);
lean_closure_set(v___f_633_, 2, v_snd_632_);
lean_closure_set(v___f_633_, 3, v_logMessage_623_);
lean_closure_set(v___f_633_, 4, v_toBind_624_);
lean_closure_set(v___f_633_, 5, v___f_625_);
v___x_634_ = lean_apply_4(v_toBind_624_, lean_box(0), lean_box(0), v_getFileName_626_, v___f_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__4(lean_object* v_toPure_635_, lean_object* v___x_636_, lean_object* v_ictx_637_, lean_object* v_text_638_, lean_object* v_source_639_, lean_object* v_logMessage_640_, lean_object* v_toBind_641_, lean_object* v_getFileName_642_, lean_object* v_inst_643_, lean_object* v_env_644_, lean_object* v_____do__lift_645_, lean_object* v_____do__lift_646_, lean_object* v_val_647_, lean_object* v___y_648_, lean_object* v_____do__lift_649_){
_start:
{
lean_object* v___y_651_; lean_object* v_pmctx_661_; lean_object* v_blockCtxt_662_; lean_object* v___x_663_; lean_object* v_s_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v_s_667_; lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; 
lean_inc_ref(v_env_644_);
v_pmctx_661_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_pmctx_661_, 0, v_env_644_);
lean_ctor_set(v_pmctx_661_, 1, v_____do__lift_645_);
lean_ctor_set(v_pmctx_661_, 2, v_____do__lift_646_);
lean_ctor_set(v_pmctx_661_, 3, v_____do__lift_649_);
lean_inc(v_val_647_);
lean_inc_ref(v_text_638_);
v_blockCtxt_662_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v_text_638_, v_val_647_, v___y_648_);
v___x_663_ = l_Lean_Parser_mkParserState(v_source_639_);
lean_inc_ref(v___x_663_);
v_s_664_ = l_Lean_Parser_ParserState_setPos(v___x_663_, v_val_647_);
v___x_665_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document), 3, 1);
lean_closure_set(v___x_665_, 0, v_blockCtxt_662_);
v___x_666_ = l_Lean_Parser_getTokenTable(v_env_644_);
lean_inc_ref(v___x_666_);
lean_inc_ref(v_pmctx_661_);
lean_inc_ref(v_ictx_637_);
v_s_667_ = l_Lean_Parser_ParserFn_run(v___x_665_, v_ictx_637_, v_pmctx_661_, v___x_666_, v_s_664_);
lean_inc_ref(v_s_667_);
v___x_668_ = l_Lean_Parser_ParserState_allErrors(v_s_667_);
v___x_669_ = lean_array_get_size(v___x_668_);
lean_dec_ref(v___x_668_);
v___x_670_ = lean_nat_dec_eq(v___x_669_, v___x_636_);
if (v___x_670_ == 0)
{
lean_dec_ref(v___x_666_);
lean_dec_ref(v___x_663_);
lean_dec_ref_known(v_pmctx_661_, 4);
v___y_651_ = v_s_667_;
goto v___jp_650_;
}
else
{
lean_object* v_pos_671_; uint8_t v___x_672_; 
v_pos_671_ = lean_ctor_get(v_s_667_, 2);
lean_inc(v_pos_671_);
v___x_672_ = l_Lean_Parser_InputContext_atEnd(v_ictx_637_, v_pos_671_);
if (v___x_672_ == 0)
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
lean_dec_ref(v_s_667_);
v___x_673_ = lean_box(0);
v___x_674_ = lean_box(0);
v___x_675_ = lean_unsigned_to_nat(1u);
lean_inc_n(v___x_636_, 3);
v___x_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_676_, 0, v___x_675_);
lean_ctor_set(v___x_676_, 1, v___x_636_);
v___x_677_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_677_, 0, v___x_636_);
lean_ctor_set(v___x_677_, 1, v___x_673_);
lean_ctor_set(v___x_677_, 2, v___x_674_);
lean_ctor_set(v___x_677_, 3, v___x_676_);
lean_ctor_set(v___x_677_, 4, v___x_636_);
v___x_678_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_block), 3, 1);
lean_closure_set(v___x_678_, 0, v___x_677_);
v___x_679_ = l_Lean_Parser_ParserState_setPos(v___x_663_, v_pos_671_);
lean_inc_ref(v_ictx_637_);
v___x_680_ = l_Lean_Parser_ParserFn_run(v___x_678_, v_ictx_637_, v_pmctx_661_, v___x_666_, v___x_679_);
v___y_651_ = v___x_680_;
goto v___jp_650_;
}
else
{
lean_dec(v_pos_671_);
lean_dec_ref(v___x_666_);
lean_dec_ref(v___x_663_);
lean_dec_ref_known(v_pmctx_661_, 4);
v___y_651_ = v_s_667_;
goto v___jp_650_;
}
}
v___jp_650_:
{
lean_object* v___x_652_; lean_object* v___f_653_; lean_object* v___x_654_; lean_object* v___f_655_; lean_object* v___f_656_; size_t v_sz_657_; size_t v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
lean_inc_ref(v___y_651_);
v___x_652_ = l_Lean_Parser_ParserState_allErrors(v___y_651_);
lean_inc(v_getFileName_642_);
lean_inc_n(v_toBind_641_, 2);
lean_inc(v_logMessage_640_);
lean_inc_ref(v_text_638_);
lean_inc_ref(v___x_652_);
lean_inc(v_toPure_635_);
v___f_653_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__1___boxed), 11, 10);
lean_closure_set(v___f_653_, 0, v_toPure_635_);
lean_closure_set(v___f_653_, 1, v___x_652_);
lean_closure_set(v___f_653_, 2, v___x_636_);
lean_closure_set(v___f_653_, 3, v___y_651_);
lean_closure_set(v___f_653_, 4, v_ictx_637_);
lean_closure_set(v___f_653_, 5, v_text_638_);
lean_closure_set(v___f_653_, 6, v_source_639_);
lean_closure_set(v___f_653_, 7, v_logMessage_640_);
lean_closure_set(v___f_653_, 8, v_toBind_641_);
lean_closure_set(v___f_653_, 9, v_getFileName_642_);
v___x_654_ = lean_box(0);
v___f_655_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__2), 3, 2);
lean_closure_set(v___f_655_, 0, v___x_654_);
lean_closure_set(v___f_655_, 1, v_toPure_635_);
v___f_656_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__2), 8, 5);
lean_closure_set(v___f_656_, 0, v_text_638_);
lean_closure_set(v___f_656_, 1, v_logMessage_640_);
lean_closure_set(v___f_656_, 2, v_toBind_641_);
lean_closure_set(v___f_656_, 3, v___f_655_);
lean_closure_set(v___f_656_, 4, v_getFileName_642_);
v_sz_657_ = lean_array_size(v___x_652_);
v___x_658_ = ((size_t)0ULL);
v___x_659_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_643_, v___x_652_, v___f_656_, v_sz_657_, v___x_658_, v___x_654_);
v___x_660_ = lean_apply_4(v_toBind_641_, lean_box(0), lean_box(0), v___x_659_, v___f_653_);
return v___x_660_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__5(lean_object* v_toPure_681_, lean_object* v___x_682_, lean_object* v_ictx_683_, lean_object* v_text_684_, lean_object* v_source_685_, lean_object* v_logMessage_686_, lean_object* v_toBind_687_, lean_object* v_getFileName_688_, lean_object* v_inst_689_, lean_object* v_env_690_, lean_object* v_____do__lift_691_, lean_object* v_val_692_, lean_object* v___y_693_, lean_object* v_getOpenDecls_694_, lean_object* v_____do__lift_695_){
_start:
{
lean_object* v___f_696_; lean_object* v___x_697_; 
lean_inc(v_toBind_687_);
v___f_696_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__4), 15, 14);
lean_closure_set(v___f_696_, 0, v_toPure_681_);
lean_closure_set(v___f_696_, 1, v___x_682_);
lean_closure_set(v___f_696_, 2, v_ictx_683_);
lean_closure_set(v___f_696_, 3, v_text_684_);
lean_closure_set(v___f_696_, 4, v_source_685_);
lean_closure_set(v___f_696_, 5, v_logMessage_686_);
lean_closure_set(v___f_696_, 6, v_toBind_687_);
lean_closure_set(v___f_696_, 7, v_getFileName_688_);
lean_closure_set(v___f_696_, 8, v_inst_689_);
lean_closure_set(v___f_696_, 9, v_env_690_);
lean_closure_set(v___f_696_, 10, v_____do__lift_691_);
lean_closure_set(v___f_696_, 11, v_____do__lift_695_);
lean_closure_set(v___f_696_, 12, v_val_692_);
lean_closure_set(v___f_696_, 13, v___y_693_);
v___x_697_ = lean_apply_4(v_toBind_687_, lean_box(0), lean_box(0), v_getOpenDecls_694_, v___f_696_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__6(lean_object* v_inst_698_, lean_object* v_toPure_699_, lean_object* v___x_700_, lean_object* v_ictx_701_, lean_object* v_text_702_, lean_object* v_source_703_, lean_object* v_logMessage_704_, lean_object* v_toBind_705_, lean_object* v_getFileName_706_, lean_object* v_inst_707_, lean_object* v_env_708_, lean_object* v_val_709_, lean_object* v___y_710_, lean_object* v_____do__lift_711_){
_start:
{
lean_object* v_getCurrNamespace_712_; lean_object* v_getOpenDecls_713_; lean_object* v___f_714_; lean_object* v___x_715_; 
v_getCurrNamespace_712_ = lean_ctor_get(v_inst_698_, 0);
lean_inc(v_getCurrNamespace_712_);
v_getOpenDecls_713_ = lean_ctor_get(v_inst_698_, 1);
lean_inc(v_getOpenDecls_713_);
lean_dec_ref(v_inst_698_);
lean_inc(v_toBind_705_);
v___f_714_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__5), 15, 14);
lean_closure_set(v___f_714_, 0, v_toPure_699_);
lean_closure_set(v___f_714_, 1, v___x_700_);
lean_closure_set(v___f_714_, 2, v_ictx_701_);
lean_closure_set(v___f_714_, 3, v_text_702_);
lean_closure_set(v___f_714_, 4, v_source_703_);
lean_closure_set(v___f_714_, 5, v_logMessage_704_);
lean_closure_set(v___f_714_, 6, v_toBind_705_);
lean_closure_set(v___f_714_, 7, v_getFileName_706_);
lean_closure_set(v___f_714_, 8, v_inst_707_);
lean_closure_set(v___f_714_, 9, v_env_708_);
lean_closure_set(v___f_714_, 10, v_____do__lift_711_);
lean_closure_set(v___f_714_, 11, v_val_709_);
lean_closure_set(v___f_714_, 12, v___y_710_);
lean_closure_set(v___f_714_, 13, v_getOpenDecls_713_);
v___x_715_ = lean_apply_4(v_toBind_705_, lean_box(0), lean_box(0), v_getCurrNamespace_712_, v___f_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__7(lean_object* v_source_716_, lean_object* v_text_717_, lean_object* v___y_718_, lean_object* v_inst_719_, lean_object* v_toPure_720_, lean_object* v___x_721_, lean_object* v_logMessage_722_, lean_object* v_toBind_723_, lean_object* v_getFileName_724_, lean_object* v_inst_725_, lean_object* v_env_726_, lean_object* v_val_727_, lean_object* v_inst_728_, lean_object* v_____do__lift_729_){
_start:
{
lean_object* v_ictx_730_; lean_object* v___f_731_; lean_object* v___x_732_; 
lean_inc(v___y_718_);
lean_inc_ref(v_text_717_);
lean_inc_ref(v_source_716_);
v_ictx_730_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_ictx_730_, 0, v_source_716_);
lean_ctor_set(v_ictx_730_, 1, v_____do__lift_729_);
lean_ctor_set(v_ictx_730_, 2, v_text_717_);
lean_ctor_set(v_ictx_730_, 3, v___y_718_);
lean_inc(v_toBind_723_);
v___f_731_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__6), 14, 13);
lean_closure_set(v___f_731_, 0, v_inst_719_);
lean_closure_set(v___f_731_, 1, v_toPure_720_);
lean_closure_set(v___f_731_, 2, v___x_721_);
lean_closure_set(v___f_731_, 3, v_ictx_730_);
lean_closure_set(v___f_731_, 4, v_text_717_);
lean_closure_set(v___f_731_, 5, v_source_716_);
lean_closure_set(v___f_731_, 6, v_logMessage_722_);
lean_closure_set(v___f_731_, 7, v_toBind_723_);
lean_closure_set(v___f_731_, 8, v_getFileName_724_);
lean_closure_set(v___f_731_, 9, v_inst_725_);
lean_closure_set(v___f_731_, 10, v_env_726_);
lean_closure_set(v___f_731_, 11, v_val_727_);
lean_closure_set(v___f_731_, 12, v___y_718_);
v___x_732_ = lean_apply_4(v_toBind_723_, lean_box(0), lean_box(0), v_inst_728_, v___f_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__8(lean_object* v_inst_733_, lean_object* v_source_734_, lean_object* v_text_735_, lean_object* v___y_736_, lean_object* v_inst_737_, lean_object* v_toPure_738_, lean_object* v___x_739_, lean_object* v_toBind_740_, lean_object* v_inst_741_, lean_object* v_val_742_, lean_object* v_inst_743_, lean_object* v_env_744_){
_start:
{
lean_object* v_getFileName_745_; lean_object* v_logMessage_746_; lean_object* v___f_747_; lean_object* v___x_748_; 
v_getFileName_745_ = lean_ctor_get(v_inst_733_, 2);
lean_inc_n(v_getFileName_745_, 2);
v_logMessage_746_ = lean_ctor_get(v_inst_733_, 4);
lean_inc(v_logMessage_746_);
lean_dec_ref(v_inst_733_);
lean_inc(v_toBind_740_);
v___f_747_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__7), 14, 13);
lean_closure_set(v___f_747_, 0, v_source_734_);
lean_closure_set(v___f_747_, 1, v_text_735_);
lean_closure_set(v___f_747_, 2, v___y_736_);
lean_closure_set(v___f_747_, 3, v_inst_737_);
lean_closure_set(v___f_747_, 4, v_toPure_738_);
lean_closure_set(v___f_747_, 5, v___x_739_);
lean_closure_set(v___f_747_, 6, v_logMessage_746_);
lean_closure_set(v___f_747_, 7, v_toBind_740_);
lean_closure_set(v___f_747_, 8, v_getFileName_745_);
lean_closure_set(v___f_747_, 9, v_inst_741_);
lean_closure_set(v___f_747_, 10, v_env_744_);
lean_closure_set(v___f_747_, 11, v_val_742_);
lean_closure_set(v___f_747_, 12, v_inst_743_);
v___x_748_ = lean_apply_4(v_toBind_740_, lean_box(0), lean_box(0), v_getFileName_745_, v___f_747_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__9(lean_object* v_inst_749_, lean_object* v_inst_750_, lean_object* v_inst_751_, lean_object* v_toPure_752_, lean_object* v___x_753_, lean_object* v_toBind_754_, lean_object* v_inst_755_, lean_object* v_val_756_, lean_object* v_inst_757_, lean_object* v_val_758_, lean_object* v_text_759_){
_start:
{
lean_object* v_source_760_; lean_object* v___y_762_; lean_object* v___x_766_; uint8_t v___x_767_; 
v_source_760_ = lean_ctor_get(v_text_759_, 0);
lean_inc_ref(v_source_760_);
v___x_766_ = lean_string_utf8_byte_size(v_source_760_);
v___x_767_ = lean_nat_dec_le(v_val_758_, v___x_766_);
if (v___x_767_ == 0)
{
lean_dec(v_val_758_);
v___y_762_ = v___x_766_;
goto v___jp_761_;
}
else
{
v___y_762_ = v_val_758_;
goto v___jp_761_;
}
v___jp_761_:
{
lean_object* v_getEnv_763_; lean_object* v___f_764_; lean_object* v___x_765_; 
v_getEnv_763_ = lean_ctor_get(v_inst_749_, 0);
lean_inc(v_getEnv_763_);
lean_dec_ref(v_inst_749_);
lean_inc(v_toBind_754_);
v___f_764_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__8), 12, 11);
lean_closure_set(v___f_764_, 0, v_inst_750_);
lean_closure_set(v___f_764_, 1, v_source_760_);
lean_closure_set(v___f_764_, 2, v_text_759_);
lean_closure_set(v___f_764_, 3, v___y_762_);
lean_closure_set(v___f_764_, 4, v_inst_751_);
lean_closure_set(v___f_764_, 5, v_toPure_752_);
lean_closure_set(v___f_764_, 6, v___x_753_);
lean_closure_set(v___f_764_, 7, v_toBind_754_);
lean_closure_set(v___f_764_, 8, v_inst_755_);
lean_closure_set(v___f_764_, 9, v_val_756_);
lean_closure_set(v___f_764_, 10, v_inst_757_);
v___x_765_ = lean_apply_4(v_toBind_754_, lean_box(0), lean_box(0), v_getEnv_763_, v___f_764_);
return v___x_765_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg(lean_object* v_inst_768_, lean_object* v_inst_769_, lean_object* v_inst_770_, lean_object* v_inst_771_, lean_object* v_inst_772_, lean_object* v_inst_773_, lean_object* v_parseFailure_774_){
_start:
{
lean_object* v_toApplicative_775_; lean_object* v_toBind_776_; lean_object* v_toPure_777_; lean_object* v___x_778_; lean_object* v___x_779_; uint8_t v___x_780_; lean_object* v___x_781_; 
v_toApplicative_775_ = lean_ctor_get(v_inst_768_, 0);
v_toBind_776_ = lean_ctor_get(v_inst_768_, 1);
lean_inc(v_toBind_776_);
v_toPure_777_ = lean_ctor_get(v_toApplicative_775_, 1);
lean_inc(v_toPure_777_);
v___x_778_ = lean_unsigned_to_nat(0u);
v___x_779_ = l_Lean_Syntax_getArg(v_parseFailure_774_, v___x_778_);
v___x_780_ = 1;
v___x_781_ = l_Lean_Syntax_getPos_x3f(v___x_779_, v___x_780_);
if (lean_obj_tag(v___x_781_) == 1)
{
lean_object* v_val_782_; lean_object* v___x_783_; 
v_val_782_ = lean_ctor_get(v___x_781_, 0);
lean_inc(v_val_782_);
lean_dec_ref_known(v___x_781_, 1);
v___x_783_ = l_Lean_Syntax_getTailPos_x3f(v___x_779_, v___x_780_);
lean_dec(v___x_779_);
if (lean_obj_tag(v___x_783_) == 1)
{
lean_object* v_val_784_; lean_object* v___f_785_; lean_object* v___x_786_; 
v_val_784_ = lean_ctor_get(v___x_783_, 0);
lean_inc(v_val_784_);
lean_dec_ref_known(v___x_783_, 1);
lean_inc(v_toBind_776_);
v___f_785_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__9), 11, 10);
lean_closure_set(v___f_785_, 0, v_inst_770_);
lean_closure_set(v___f_785_, 1, v_inst_772_);
lean_closure_set(v___f_785_, 2, v_inst_773_);
lean_closure_set(v___f_785_, 3, v_toPure_777_);
lean_closure_set(v___f_785_, 4, v___x_778_);
lean_closure_set(v___f_785_, 5, v_toBind_776_);
lean_closure_set(v___f_785_, 6, v_inst_768_);
lean_closure_set(v___f_785_, 7, v_val_782_);
lean_closure_set(v___f_785_, 8, v_inst_771_);
lean_closure_set(v___f_785_, 9, v_val_784_);
v___x_786_ = lean_apply_4(v_toBind_776_, lean_box(0), lean_box(0), v_inst_769_, v___f_785_);
return v___x_786_;
}
else
{
lean_object* v___x_787_; lean_object* v___x_788_; 
lean_dec(v___x_783_);
lean_dec(v_val_782_);
lean_dec(v_toBind_776_);
lean_dec_ref(v_inst_773_);
lean_dec_ref(v_inst_772_);
lean_dec(v_inst_771_);
lean_dec_ref(v_inst_770_);
lean_dec(v_inst_769_);
lean_dec_ref(v_inst_768_);
v___x_787_ = lean_box(0);
v___x_788_ = lean_apply_2(v_toPure_777_, lean_box(0), v___x_787_);
return v___x_788_;
}
}
else
{
lean_object* v___x_789_; lean_object* v___x_790_; 
lean_dec(v___x_781_);
lean_dec(v___x_779_);
lean_dec(v_toBind_776_);
lean_dec_ref(v_inst_773_);
lean_dec_ref(v_inst_772_);
lean_dec(v_inst_771_);
lean_dec_ref(v_inst_770_);
lean_dec(v_inst_769_);
lean_dec_ref(v_inst_768_);
v___x_789_ = lean_box(0);
v___x_790_ = lean_apply_2(v_toPure_777_, lean_box(0), v___x_789_);
return v___x_790_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___boxed(lean_object* v_inst_791_, lean_object* v_inst_792_, lean_object* v_inst_793_, lean_object* v_inst_794_, lean_object* v_inst_795_, lean_object* v_inst_796_, lean_object* v_parseFailure_797_){
_start:
{
lean_object* v_res_798_; 
v_res_798_ = l_Lean_reportVersoParseFailure___redArg(v_inst_791_, v_inst_792_, v_inst_793_, v_inst_794_, v_inst_795_, v_inst_796_, v_parseFailure_797_);
lean_dec(v_parseFailure_797_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure(lean_object* v_m_799_, lean_object* v_inst_800_, lean_object* v_inst_801_, lean_object* v_inst_802_, lean_object* v_inst_803_, lean_object* v_inst_804_, lean_object* v_inst_805_, lean_object* v_inst_806_, lean_object* v_parseFailure_807_){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l_Lean_reportVersoParseFailure___redArg(v_inst_800_, v_inst_801_, v_inst_803_, v_inst_804_, v_inst_805_, v_inst_806_, v_parseFailure_807_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___boxed(lean_object* v_m_809_, lean_object* v_inst_810_, lean_object* v_inst_811_, lean_object* v_inst_812_, lean_object* v_inst_813_, lean_object* v_inst_814_, lean_object* v_inst_815_, lean_object* v_inst_816_, lean_object* v_parseFailure_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Lean_reportVersoParseFailure(v_m_809_, v_inst_810_, v_inst_811_, v_inst_812_, v_inst_813_, v_inst_814_, v_inst_815_, v_inst_816_, v_parseFailure_817_);
lean_dec(v_parseFailure_817_);
lean_dec_ref(v_inst_812_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0(lean_object* v_fileMap_x3f_819_, lean_object* v_declName_820_, lean_object* v_binders_821_, lean_object* v___x_822_, uint8_t v___x_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_){
_start:
{
if (lean_obj_tag(v_fileMap_x3f_819_) == 0)
{
lean_object* v___x_831_; 
v___x_831_ = l_Lean_Doc_DocM_exec___redArg(v_declName_820_, v_binders_821_, v___x_822_, v___x_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_, v___y_829_);
return v___x_831_;
}
else
{
lean_object* v_toCold_832_; lean_object* v_val_833_; lean_object* v_currRecDepth_834_; lean_object* v_ref_835_; uint8_t v_diag_836_; uint8_t v_suppressElabErrors_837_; lean_object* v_fileName_838_; lean_object* v_options_839_; lean_object* v_maxRecDepth_840_; lean_object* v_currNamespace_841_; lean_object* v_openDecls_842_; lean_object* v_initHeartbeats_843_; lean_object* v_maxHeartbeats_844_; lean_object* v_quotContext_845_; lean_object* v_currMacroScope_846_; lean_object* v_cancelTk_x3f_847_; lean_object* v_inheritedTraceOptions_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v_toCold_832_ = lean_ctor_get(v___y_828_, 0);
v_val_833_ = lean_ctor_get(v_fileMap_x3f_819_, 0);
v_currRecDepth_834_ = lean_ctor_get(v___y_828_, 1);
v_ref_835_ = lean_ctor_get(v___y_828_, 2);
v_diag_836_ = lean_ctor_get_uint8(v___y_828_, sizeof(void*)*3);
v_suppressElabErrors_837_ = lean_ctor_get_uint8(v___y_828_, sizeof(void*)*3 + 1);
v_fileName_838_ = lean_ctor_get(v_toCold_832_, 0);
v_options_839_ = lean_ctor_get(v_toCold_832_, 2);
v_maxRecDepth_840_ = lean_ctor_get(v_toCold_832_, 3);
v_currNamespace_841_ = lean_ctor_get(v_toCold_832_, 4);
v_openDecls_842_ = lean_ctor_get(v_toCold_832_, 5);
v_initHeartbeats_843_ = lean_ctor_get(v_toCold_832_, 6);
v_maxHeartbeats_844_ = lean_ctor_get(v_toCold_832_, 7);
v_quotContext_845_ = lean_ctor_get(v_toCold_832_, 8);
v_currMacroScope_846_ = lean_ctor_get(v_toCold_832_, 9);
v_cancelTk_x3f_847_ = lean_ctor_get(v_toCold_832_, 10);
v_inheritedTraceOptions_848_ = lean_ctor_get(v_toCold_832_, 11);
lean_inc_ref(v_inheritedTraceOptions_848_);
lean_inc(v_cancelTk_x3f_847_);
lean_inc(v_currMacroScope_846_);
lean_inc(v_quotContext_845_);
lean_inc(v_maxHeartbeats_844_);
lean_inc(v_initHeartbeats_843_);
lean_inc(v_openDecls_842_);
lean_inc(v_currNamespace_841_);
lean_inc(v_maxRecDepth_840_);
lean_inc_ref(v_options_839_);
lean_inc(v_val_833_);
lean_inc_ref(v_fileName_838_);
v___x_849_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_849_, 0, v_fileName_838_);
lean_ctor_set(v___x_849_, 1, v_val_833_);
lean_ctor_set(v___x_849_, 2, v_options_839_);
lean_ctor_set(v___x_849_, 3, v_maxRecDepth_840_);
lean_ctor_set(v___x_849_, 4, v_currNamespace_841_);
lean_ctor_set(v___x_849_, 5, v_openDecls_842_);
lean_ctor_set(v___x_849_, 6, v_initHeartbeats_843_);
lean_ctor_set(v___x_849_, 7, v_maxHeartbeats_844_);
lean_ctor_set(v___x_849_, 8, v_quotContext_845_);
lean_ctor_set(v___x_849_, 9, v_currMacroScope_846_);
lean_ctor_set(v___x_849_, 10, v_cancelTk_x3f_847_);
lean_ctor_set(v___x_849_, 11, v_inheritedTraceOptions_848_);
lean_inc(v_ref_835_);
lean_inc(v_currRecDepth_834_);
v___x_850_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_850_, 0, v___x_849_);
lean_ctor_set(v___x_850_, 1, v_currRecDepth_834_);
lean_ctor_set(v___x_850_, 2, v_ref_835_);
lean_ctor_set_uint8(v___x_850_, sizeof(void*)*3, v_diag_836_);
lean_ctor_set_uint8(v___x_850_, sizeof(void*)*3 + 1, v_suppressElabErrors_837_);
v___x_851_ = l_Lean_Doc_DocM_exec___redArg(v_declName_820_, v_binders_821_, v___x_822_, v___x_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_, v___x_850_, v___y_829_);
lean_dec_ref_known(v___x_850_, 3);
return v___x_851_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0___boxed(lean_object* v_fileMap_x3f_852_, lean_object* v_declName_853_, lean_object* v_binders_854_, lean_object* v___x_855_, lean_object* v___x_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_){
_start:
{
uint8_t v___x_12120__boxed_864_; lean_object* v_res_865_; 
v___x_12120__boxed_864_ = lean_unbox(v___x_856_);
v_res_865_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0(v_fileMap_x3f_852_, v_declName_853_, v_binders_854_, v___x_855_, v___x_12120__boxed_864_, v___y_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
lean_dec(v_fileMap_x3f_852_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(size_t v_sz_866_, size_t v_i_867_, lean_object* v_bs_868_){
_start:
{
uint8_t v___x_869_; 
v___x_869_ = lean_usize_dec_lt(v_i_867_, v_sz_866_);
if (v___x_869_ == 0)
{
return v_bs_868_;
}
else
{
lean_object* v_v_870_; lean_object* v___x_871_; lean_object* v_bs_x27_872_; size_t v___x_873_; size_t v___x_874_; lean_object* v___x_875_; 
v_v_870_ = lean_array_uget(v_bs_868_, v_i_867_);
v___x_871_ = lean_unsigned_to_nat(0u);
v_bs_x27_872_ = lean_array_uset(v_bs_868_, v_i_867_, v___x_871_);
v___x_873_ = ((size_t)1ULL);
v___x_874_ = lean_usize_add(v_i_867_, v___x_873_);
v___x_875_ = lean_array_uset(v_bs_x27_872_, v_i_867_, v_v_870_);
v_i_867_ = v___x_874_;
v_bs_868_ = v___x_875_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0___boxed(lean_object* v_sz_877_, lean_object* v_i_878_, lean_object* v_bs_879_){
_start:
{
size_t v_sz_boxed_880_; size_t v_i_boxed_881_; lean_object* v_res_882_; 
v_sz_boxed_880_ = lean_unbox_usize(v_sz_877_);
lean_dec(v_sz_877_);
v_i_boxed_881_ = lean_unbox_usize(v_i_878_);
lean_dec(v_i_878_);
v_res_882_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(v_sz_boxed_880_, v_i_boxed_881_, v_bs_879_);
return v_res_882_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(lean_object* v_opts_883_, lean_object* v_opt_884_){
_start:
{
lean_object* v_name_885_; lean_object* v_defValue_886_; lean_object* v_map_887_; lean_object* v___x_888_; 
v_name_885_ = lean_ctor_get(v_opt_884_, 0);
v_defValue_886_ = lean_ctor_get(v_opt_884_, 1);
v_map_887_ = lean_ctor_get(v_opts_883_, 0);
v___x_888_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_887_, v_name_885_);
if (lean_obj_tag(v___x_888_) == 0)
{
uint8_t v___x_889_; 
v___x_889_ = lean_unbox(v_defValue_886_);
return v___x_889_;
}
else
{
lean_object* v_val_890_; 
v_val_890_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_val_890_);
lean_dec_ref_known(v___x_888_, 1);
if (lean_obj_tag(v_val_890_) == 1)
{
uint8_t v_v_891_; 
v_v_891_ = lean_ctor_get_uint8(v_val_890_, 0);
lean_dec_ref_known(v_val_890_, 0);
return v_v_891_;
}
else
{
uint8_t v___x_892_; 
lean_dec(v_val_890_);
v___x_892_ = lean_unbox(v_defValue_886_);
return v___x_892_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4___boxed(lean_object* v_opts_893_, lean_object* v_opt_894_){
_start:
{
uint8_t v_res_895_; lean_object* v_r_896_; 
v_res_895_ = l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(v_opts_893_, v_opt_894_);
lean_dec_ref(v_opt_894_);
lean_dec_ref(v_opts_893_);
v_r_896_ = lean_box(v_res_895_);
return v_r_896_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(lean_object* v_msgData_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_){
_start:
{
lean_object* v___x_903_; lean_object* v_env_904_; lean_object* v___x_905_; lean_object* v_toCold_906_; lean_object* v_mctx_907_; lean_object* v_lctx_908_; lean_object* v_options_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_903_ = lean_st_ref_get(v___y_901_);
v_env_904_ = lean_ctor_get(v___x_903_, 0);
lean_inc_ref(v_env_904_);
lean_dec(v___x_903_);
v___x_905_ = lean_st_ref_get(v___y_899_);
v_toCold_906_ = lean_ctor_get(v___y_900_, 0);
v_mctx_907_ = lean_ctor_get(v___x_905_, 0);
lean_inc_ref(v_mctx_907_);
lean_dec(v___x_905_);
v_lctx_908_ = lean_ctor_get(v___y_898_, 2);
v_options_909_ = lean_ctor_get(v_toCold_906_, 2);
lean_inc_ref(v_options_909_);
lean_inc_ref(v_lctx_908_);
v___x_910_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_910_, 0, v_env_904_);
lean_ctor_set(v___x_910_, 1, v_mctx_907_);
lean_ctor_set(v___x_910_, 2, v_lctx_908_);
lean_ctor_set(v___x_910_, 3, v_options_909_);
v___x_911_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
lean_ctor_set(v___x_911_, 1, v_msgData_897_);
v___x_912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_912_, 0, v___x_911_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3___boxed(lean_object* v_msgData_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
lean_object* v_res_919_; 
v_res_919_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(v_msgData_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
return v_res_919_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0(uint8_t v_suppressElabErrors_928_, uint8_t v___y_929_, lean_object* v_x_930_){
_start:
{
if (lean_obj_tag(v_x_930_) == 1)
{
lean_object* v_pre_931_; 
v_pre_931_ = lean_ctor_get(v_x_930_, 0);
switch(lean_obj_tag(v_pre_931_))
{
case 1:
{
lean_object* v_pre_932_; 
v_pre_932_ = lean_ctor_get(v_pre_931_, 0);
switch(lean_obj_tag(v_pre_932_))
{
case 0:
{
lean_object* v_str_933_; lean_object* v_str_934_; lean_object* v___x_935_; uint8_t v___x_936_; 
v_str_933_ = lean_ctor_get(v_x_930_, 1);
v_str_934_ = lean_ctor_get(v_pre_931_, 1);
v___x_935_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0));
v___x_936_ = lean_string_dec_eq(v_str_934_, v___x_935_);
if (v___x_936_ == 0)
{
lean_object* v___x_937_; uint8_t v___x_938_; 
v___x_937_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1));
v___x_938_ = lean_string_dec_eq(v_str_934_, v___x_937_);
if (v___x_938_ == 0)
{
return v___x_938_;
}
else
{
lean_object* v___x_939_; uint8_t v___x_940_; 
v___x_939_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2));
v___x_940_ = lean_string_dec_eq(v_str_933_, v___x_939_);
if (v___x_940_ == 0)
{
return v___x_940_;
}
else
{
return v_suppressElabErrors_928_;
}
}
}
else
{
lean_object* v___x_941_; uint8_t v___x_942_; 
v___x_941_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3));
v___x_942_ = lean_string_dec_eq(v_str_933_, v___x_941_);
if (v___x_942_ == 0)
{
return v___x_942_;
}
else
{
return v_suppressElabErrors_928_;
}
}
}
case 1:
{
lean_object* v_pre_943_; 
v_pre_943_ = lean_ctor_get(v_pre_932_, 0);
if (lean_obj_tag(v_pre_943_) == 0)
{
lean_object* v_str_944_; lean_object* v_str_945_; lean_object* v_str_946_; lean_object* v___x_947_; uint8_t v___x_948_; 
v_str_944_ = lean_ctor_get(v_x_930_, 1);
v_str_945_ = lean_ctor_get(v_pre_931_, 1);
v_str_946_ = lean_ctor_get(v_pre_932_, 1);
v___x_947_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4));
v___x_948_ = lean_string_dec_eq(v_str_946_, v___x_947_);
if (v___x_948_ == 0)
{
return v___x_948_;
}
else
{
lean_object* v___x_949_; uint8_t v___x_950_; 
v___x_949_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5));
v___x_950_ = lean_string_dec_eq(v_str_945_, v___x_949_);
if (v___x_950_ == 0)
{
return v___x_950_;
}
else
{
lean_object* v___x_951_; uint8_t v___x_952_; 
v___x_951_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6));
v___x_952_ = lean_string_dec_eq(v_str_944_, v___x_951_);
if (v___x_952_ == 0)
{
return v___x_952_;
}
else
{
return v_suppressElabErrors_928_;
}
}
}
}
else
{
return v___y_929_;
}
}
default: 
{
return v___y_929_;
}
}
}
case 0:
{
lean_object* v_str_953_; lean_object* v___x_954_; uint8_t v___x_955_; 
v_str_953_ = lean_ctor_get(v_x_930_, 1);
v___x_954_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7));
v___x_955_ = lean_string_dec_eq(v_str_953_, v___x_954_);
if (v___x_955_ == 0)
{
return v___x_955_;
}
else
{
return v_suppressElabErrors_928_;
}
}
default: 
{
return v___y_929_;
}
}
}
else
{
return v___y_929_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_956_, lean_object* v___y_957_, lean_object* v_x_958_){
_start:
{
uint8_t v_suppressElabErrors_boxed_959_; uint8_t v___y_12219__boxed_960_; uint8_t v_res_961_; lean_object* v_r_962_; 
v_suppressElabErrors_boxed_959_ = lean_unbox(v_suppressElabErrors_956_);
v___y_12219__boxed_960_ = lean_unbox(v___y_957_);
v_res_961_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0(v_suppressElabErrors_boxed_959_, v___y_12219__boxed_960_, v_x_958_);
lean_dec(v_x_958_);
v_r_962_ = lean_box(v_res_961_);
return v_r_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(lean_object* v_ref_963_, lean_object* v_msgData_964_, uint8_t v_severity_965_, uint8_t v_isSilent_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_){
_start:
{
uint8_t v___y_973_; lean_object* v___y_974_; lean_object* v___y_975_; uint8_t v___y_976_; lean_object* v___y_977_; lean_object* v___y_978_; lean_object* v___y_979_; lean_object* v_currNamespace_980_; lean_object* v_openDecls_981_; lean_object* v___y_982_; lean_object* v___y_1008_; lean_object* v___y_1009_; lean_object* v___y_1010_; uint8_t v___y_1011_; uint8_t v___y_1012_; uint8_t v___y_1013_; lean_object* v___y_1014_; lean_object* v___y_1015_; lean_object* v___y_1016_; lean_object* v___y_1017_; lean_object* v___y_1035_; lean_object* v___y_1036_; lean_object* v___y_1037_; uint8_t v___y_1038_; uint8_t v___y_1039_; uint8_t v___y_1040_; lean_object* v___y_1041_; lean_object* v___y_1042_; lean_object* v___y_1043_; lean_object* v___y_1044_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___y_1051_; uint8_t v___y_1052_; uint8_t v___y_1053_; lean_object* v___y_1054_; lean_object* v___y_1055_; uint8_t v___y_1056_; uint8_t v___x_1061_; lean_object* v___y_1063_; lean_object* v___y_1064_; lean_object* v___y_1065_; lean_object* v___y_1066_; lean_object* v___y_1067_; lean_object* v___y_1068_; uint8_t v___y_1069_; uint8_t v___y_1070_; uint8_t v___y_1071_; uint8_t v___y_1073_; uint8_t v___x_1091_; 
v___x_1061_ = 2;
v___x_1091_ = l_Lean_instBEqMessageSeverity_beq(v_severity_965_, v___x_1061_);
if (v___x_1091_ == 0)
{
v___y_1073_ = v___x_1091_;
goto v___jp_1072_;
}
else
{
uint8_t v___x_1092_; 
lean_inc_ref(v_msgData_964_);
v___x_1092_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_964_);
v___y_1073_ = v___x_1092_;
goto v___jp_1072_;
}
v___jp_972_:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v_env_987_; lean_object* v_nextMacroScope_988_; lean_object* v_ngen_989_; lean_object* v_auxDeclNGen_990_; lean_object* v_traceState_991_; lean_object* v_cache_992_; lean_object* v_messages_993_; lean_object* v_infoState_994_; lean_object* v_snapshotTasks_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1006_; 
lean_inc(v_openDecls_981_);
lean_inc(v_currNamespace_980_);
v___x_983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_983_, 0, v_currNamespace_980_);
lean_ctor_set(v___x_983_, 1, v_openDecls_981_);
v___x_984_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_983_);
lean_ctor_set(v___x_984_, 1, v___y_978_);
lean_inc_ref(v___y_977_);
lean_inc_ref(v___y_979_);
v___x_985_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_985_, 0, v___y_979_);
lean_ctor_set(v___x_985_, 1, v___y_975_);
lean_ctor_set(v___x_985_, 2, v___y_974_);
lean_ctor_set(v___x_985_, 3, v___y_977_);
lean_ctor_set(v___x_985_, 4, v___x_984_);
lean_ctor_set_uint8(v___x_985_, sizeof(void*)*5, v___y_976_);
lean_ctor_set_uint8(v___x_985_, sizeof(void*)*5 + 1, v___y_973_);
lean_ctor_set_uint8(v___x_985_, sizeof(void*)*5 + 2, v_isSilent_966_);
v___x_986_ = lean_st_ref_take(v___y_982_);
v_env_987_ = lean_ctor_get(v___x_986_, 0);
v_nextMacroScope_988_ = lean_ctor_get(v___x_986_, 1);
v_ngen_989_ = lean_ctor_get(v___x_986_, 2);
v_auxDeclNGen_990_ = lean_ctor_get(v___x_986_, 3);
v_traceState_991_ = lean_ctor_get(v___x_986_, 4);
v_cache_992_ = lean_ctor_get(v___x_986_, 5);
v_messages_993_ = lean_ctor_get(v___x_986_, 6);
v_infoState_994_ = lean_ctor_get(v___x_986_, 7);
v_snapshotTasks_995_ = lean_ctor_get(v___x_986_, 8);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_997_ = v___x_986_;
v_isShared_998_ = v_isSharedCheck_1006_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_snapshotTasks_995_);
lean_inc(v_infoState_994_);
lean_inc(v_messages_993_);
lean_inc(v_cache_992_);
lean_inc(v_traceState_991_);
lean_inc(v_auxDeclNGen_990_);
lean_inc(v_ngen_989_);
lean_inc(v_nextMacroScope_988_);
lean_inc(v_env_987_);
lean_dec(v___x_986_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1006_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1002_; 
v___x_999_ = lean_box(0);
v___x_1000_ = l_Lean_MessageLog_add(v___x_985_, v_messages_993_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 6, v___x_1000_);
v___x_1002_ = v___x_997_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_env_987_);
lean_ctor_set(v_reuseFailAlloc_1005_, 1, v_nextMacroScope_988_);
lean_ctor_set(v_reuseFailAlloc_1005_, 2, v_ngen_989_);
lean_ctor_set(v_reuseFailAlloc_1005_, 3, v_auxDeclNGen_990_);
lean_ctor_set(v_reuseFailAlloc_1005_, 4, v_traceState_991_);
lean_ctor_set(v_reuseFailAlloc_1005_, 5, v_cache_992_);
lean_ctor_set(v_reuseFailAlloc_1005_, 6, v___x_1000_);
lean_ctor_set(v_reuseFailAlloc_1005_, 7, v_infoState_994_);
lean_ctor_set(v_reuseFailAlloc_1005_, 8, v_snapshotTasks_995_);
v___x_1002_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1003_ = lean_st_ref_put(v___y_982_, v___x_1002_);
v___x_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1004_, 0, v___x_999_);
return v___x_1004_;
}
}
}
v___jp_1007_:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1033_; 
v___x_1018_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_964_);
v___x_1019_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(v___x_1018_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1022_ = v___x_1019_;
v_isShared_1023_ = v_isSharedCheck_1033_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_1019_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1033_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
lean_inc_ref_n(v___y_1016_, 2);
v___x_1024_ = l_Lean_FileMap_toPosition(v___y_1016_, v___y_1014_);
lean_dec(v___y_1014_);
v___x_1025_ = l_Lean_FileMap_toPosition(v___y_1016_, v___y_1017_);
lean_dec(v___y_1017_);
v___x_1026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1025_);
v___x_1027_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
if (v___y_1013_ == 0)
{
lean_del_object(v___x_1022_);
lean_dec_ref(v___y_1009_);
v___y_973_ = v___y_1011_;
v___y_974_ = v___x_1026_;
v___y_975_ = v___x_1024_;
v___y_976_ = v___y_1012_;
v___y_977_ = v___x_1027_;
v___y_978_ = v_a_1020_;
v___y_979_ = v___y_1015_;
v_currNamespace_980_ = v___y_1008_;
v_openDecls_981_ = v___y_1010_;
v___y_982_ = v___y_970_;
goto v___jp_972_;
}
else
{
uint8_t v___x_1028_; 
lean_inc(v_a_1020_);
v___x_1028_ = l_Lean_MessageData_hasTag(v___y_1009_, v_a_1020_);
if (v___x_1028_ == 0)
{
lean_object* v___x_1029_; lean_object* v___x_1031_; 
lean_dec_ref_known(v___x_1026_, 1);
lean_dec_ref(v___x_1024_);
lean_dec(v_a_1020_);
v___x_1029_ = lean_box(0);
if (v_isShared_1023_ == 0)
{
lean_ctor_set(v___x_1022_, 0, v___x_1029_);
v___x_1031_ = v___x_1022_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v___x_1029_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
else
{
lean_del_object(v___x_1022_);
v___y_973_ = v___y_1011_;
v___y_974_ = v___x_1026_;
v___y_975_ = v___x_1024_;
v___y_976_ = v___y_1012_;
v___y_977_ = v___x_1027_;
v___y_978_ = v_a_1020_;
v___y_979_ = v___y_1015_;
v_currNamespace_980_ = v___y_1008_;
v_openDecls_981_ = v___y_1010_;
v___y_982_ = v___y_970_;
goto v___jp_972_;
}
}
}
}
v___jp_1034_:
{
lean_object* v___x_1045_; 
v___x_1045_ = l_Lean_Syntax_getTailPos_x3f(v___y_1041_, v___y_1039_);
lean_dec(v___y_1041_);
if (lean_obj_tag(v___x_1045_) == 0)
{
lean_inc(v___y_1044_);
v___y_1008_ = v___y_1035_;
v___y_1009_ = v___y_1036_;
v___y_1010_ = v___y_1037_;
v___y_1011_ = v___y_1038_;
v___y_1012_ = v___y_1039_;
v___y_1013_ = v___y_1040_;
v___y_1014_ = v___y_1044_;
v___y_1015_ = v___y_1043_;
v___y_1016_ = v___y_1042_;
v___y_1017_ = v___y_1044_;
goto v___jp_1007_;
}
else
{
lean_object* v_val_1046_; 
v_val_1046_ = lean_ctor_get(v___x_1045_, 0);
lean_inc(v_val_1046_);
lean_dec_ref_known(v___x_1045_, 1);
v___y_1008_ = v___y_1035_;
v___y_1009_ = v___y_1036_;
v___y_1010_ = v___y_1037_;
v___y_1011_ = v___y_1038_;
v___y_1012_ = v___y_1039_;
v___y_1013_ = v___y_1040_;
v___y_1014_ = v___y_1044_;
v___y_1015_ = v___y_1043_;
v___y_1016_ = v___y_1042_;
v___y_1017_ = v_val_1046_;
goto v___jp_1007_;
}
}
v___jp_1047_:
{
lean_object* v_ref_1057_; lean_object* v___x_1058_; 
v_ref_1057_ = l_Lean_replaceRef(v_ref_963_, v___y_1051_);
v___x_1058_ = l_Lean_Syntax_getPos_x3f(v_ref_1057_, v___y_1052_);
if (lean_obj_tag(v___x_1058_) == 0)
{
lean_object* v___x_1059_; 
v___x_1059_ = lean_unsigned_to_nat(0u);
v___y_1035_ = v___y_1048_;
v___y_1036_ = v___y_1049_;
v___y_1037_ = v___y_1050_;
v___y_1038_ = v___y_1056_;
v___y_1039_ = v___y_1052_;
v___y_1040_ = v___y_1053_;
v___y_1041_ = v_ref_1057_;
v___y_1042_ = v___y_1055_;
v___y_1043_ = v___y_1054_;
v___y_1044_ = v___x_1059_;
goto v___jp_1034_;
}
else
{
lean_object* v_val_1060_; 
v_val_1060_ = lean_ctor_get(v___x_1058_, 0);
lean_inc(v_val_1060_);
lean_dec_ref_known(v___x_1058_, 1);
v___y_1035_ = v___y_1048_;
v___y_1036_ = v___y_1049_;
v___y_1037_ = v___y_1050_;
v___y_1038_ = v___y_1056_;
v___y_1039_ = v___y_1052_;
v___y_1040_ = v___y_1053_;
v___y_1041_ = v_ref_1057_;
v___y_1042_ = v___y_1055_;
v___y_1043_ = v___y_1054_;
v___y_1044_ = v_val_1060_;
goto v___jp_1034_;
}
}
v___jp_1062_:
{
if (v___y_1071_ == 0)
{
v___y_1048_ = v___y_1063_;
v___y_1049_ = v___y_1064_;
v___y_1050_ = v___y_1065_;
v___y_1051_ = v___y_1068_;
v___y_1052_ = v___y_1069_;
v___y_1053_ = v___y_1070_;
v___y_1054_ = v___y_1067_;
v___y_1055_ = v___y_1066_;
v___y_1056_ = v_severity_965_;
goto v___jp_1047_;
}
else
{
v___y_1048_ = v___y_1063_;
v___y_1049_ = v___y_1064_;
v___y_1050_ = v___y_1065_;
v___y_1051_ = v___y_1068_;
v___y_1052_ = v___y_1069_;
v___y_1053_ = v___y_1070_;
v___y_1054_ = v___y_1067_;
v___y_1055_ = v___y_1066_;
v___y_1056_ = v___x_1061_;
goto v___jp_1047_;
}
}
v___jp_1072_:
{
if (v___y_1073_ == 0)
{
lean_object* v_toCold_1074_; lean_object* v_ref_1075_; uint8_t v_suppressElabErrors_1076_; lean_object* v_fileName_1077_; lean_object* v_fileMap_1078_; lean_object* v_options_1079_; lean_object* v_currNamespace_1080_; lean_object* v_openDecls_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___f_1084_; uint8_t v___x_1085_; uint8_t v___x_1086_; 
v_toCold_1074_ = lean_ctor_get(v___y_969_, 0);
v_ref_1075_ = lean_ctor_get(v___y_969_, 2);
v_suppressElabErrors_1076_ = lean_ctor_get_uint8(v___y_969_, sizeof(void*)*3 + 1);
v_fileName_1077_ = lean_ctor_get(v_toCold_1074_, 0);
v_fileMap_1078_ = lean_ctor_get(v_toCold_1074_, 1);
v_options_1079_ = lean_ctor_get(v_toCold_1074_, 2);
v_currNamespace_1080_ = lean_ctor_get(v_toCold_1074_, 4);
v_openDecls_1081_ = lean_ctor_get(v_toCold_1074_, 5);
v___x_1082_ = lean_box(v_suppressElabErrors_1076_);
v___x_1083_ = lean_box(v___y_1073_);
v___f_1084_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1084_, 0, v___x_1082_);
lean_closure_set(v___f_1084_, 1, v___x_1083_);
v___x_1085_ = 1;
v___x_1086_ = l_Lean_instBEqMessageSeverity_beq(v_severity_965_, v___x_1085_);
if (v___x_1086_ == 0)
{
v___y_1063_ = v_currNamespace_1080_;
v___y_1064_ = v___f_1084_;
v___y_1065_ = v_openDecls_1081_;
v___y_1066_ = v_fileMap_1078_;
v___y_1067_ = v_fileName_1077_;
v___y_1068_ = v_ref_1075_;
v___y_1069_ = v___y_1073_;
v___y_1070_ = v_suppressElabErrors_1076_;
v___y_1071_ = v___x_1086_;
goto v___jp_1062_;
}
else
{
lean_object* v___x_1087_; uint8_t v___x_1088_; 
v___x_1087_ = l_Lean_warningAsError;
v___x_1088_ = l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(v_options_1079_, v___x_1087_);
v___y_1063_ = v_currNamespace_1080_;
v___y_1064_ = v___f_1084_;
v___y_1065_ = v_openDecls_1081_;
v___y_1066_ = v_fileMap_1078_;
v___y_1067_ = v_fileName_1077_;
v___y_1068_ = v_ref_1075_;
v___y_1069_ = v___y_1073_;
v___y_1070_ = v_suppressElabErrors_1076_;
v___y_1071_ = v___x_1088_;
goto v___jp_1062_;
}
}
else
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
lean_dec_ref(v_msgData_964_);
v___x_1089_ = lean_box(0);
v___x_1090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
return v___x_1090_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___boxed(lean_object* v_ref_1093_, lean_object* v_msgData_1094_, lean_object* v_severity_1095_, lean_object* v_isSilent_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
uint8_t v_severity_boxed_1102_; uint8_t v_isSilent_boxed_1103_; lean_object* v_res_1104_; 
v_severity_boxed_1102_ = lean_unbox(v_severity_1095_);
v_isSilent_boxed_1103_ = lean_unbox(v_isSilent_1096_);
v_res_1104_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_1093_, v_msgData_1094_, v_severity_boxed_1102_, v_isSilent_boxed_1103_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v_ref_1093_);
return v_res_1104_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(lean_object* v_as_1105_, size_t v_sz_1106_, size_t v_i_1107_, lean_object* v_b_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_){
_start:
{
uint8_t v___x_1116_; 
v___x_1116_ = lean_usize_dec_lt(v_i_1107_, v_sz_1106_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; 
v___x_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1117_, 0, v_b_1108_);
return v___x_1117_;
}
else
{
lean_object* v_ref_1118_; lean_object* v_a_1119_; uint8_t v_severity_1120_; uint8_t v_isSilent_1121_; lean_object* v_data_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v_ref_1118_ = lean_ctor_get(v___y_1113_, 2);
v_a_1119_ = lean_array_uget_borrowed(v_as_1105_, v_i_1107_);
v_severity_1120_ = lean_ctor_get_uint8(v_a_1119_, sizeof(void*)*5 + 1);
v_isSilent_1121_ = lean_ctor_get_uint8(v_a_1119_, sizeof(void*)*5 + 2);
v_data_1122_ = lean_ctor_get(v_a_1119_, 4);
v___x_1123_ = lean_box(0);
lean_inc(v_data_1122_);
v___x_1124_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_1118_, v_data_1122_, v_severity_1120_, v_isSilent_1121_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_);
if (lean_obj_tag(v___x_1124_) == 0)
{
size_t v___x_1125_; size_t v___x_1126_; 
lean_dec_ref_known(v___x_1124_, 1);
v___x_1125_ = ((size_t)1ULL);
v___x_1126_ = lean_usize_add(v_i_1107_, v___x_1125_);
v_i_1107_ = v___x_1126_;
v_b_1108_ = v___x_1123_;
goto _start;
}
else
{
return v___x_1124_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3___boxed(lean_object* v_as_1128_, lean_object* v_sz_1129_, lean_object* v_i_1130_, lean_object* v_b_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
size_t v_sz_boxed_1139_; size_t v_i_boxed_1140_; lean_object* v_res_1141_; 
v_sz_boxed_1139_ = lean_unbox_usize(v_sz_1129_);
lean_dec(v_sz_1129_);
v_i_boxed_1140_ = lean_unbox_usize(v_i_1130_);
lean_dec(v_i_1130_);
v_res_1141_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(v_as_1128_, v_sz_boxed_1139_, v_i_boxed_1140_, v_b_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v___y_1135_);
lean_dec_ref(v___y_1134_);
lean_dec(v___y_1133_);
lean_dec_ref(v___y_1132_);
lean_dec_ref(v_as_1128_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(uint8_t v_flag_1142_, lean_object* v___y_1143_){
_start:
{
lean_object* v___x_1145_; lean_object* v_infoState_1146_; lean_object* v_env_1147_; lean_object* v_nextMacroScope_1148_; lean_object* v_ngen_1149_; lean_object* v_auxDeclNGen_1150_; lean_object* v_traceState_1151_; lean_object* v_cache_1152_; lean_object* v_messages_1153_; lean_object* v_snapshotTasks_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1174_; 
v___x_1145_ = lean_st_ref_take(v___y_1143_);
v_infoState_1146_ = lean_ctor_get(v___x_1145_, 7);
v_env_1147_ = lean_ctor_get(v___x_1145_, 0);
v_nextMacroScope_1148_ = lean_ctor_get(v___x_1145_, 1);
v_ngen_1149_ = lean_ctor_get(v___x_1145_, 2);
v_auxDeclNGen_1150_ = lean_ctor_get(v___x_1145_, 3);
v_traceState_1151_ = lean_ctor_get(v___x_1145_, 4);
v_cache_1152_ = lean_ctor_get(v___x_1145_, 5);
v_messages_1153_ = lean_ctor_get(v___x_1145_, 6);
v_snapshotTasks_1154_ = lean_ctor_get(v___x_1145_, 8);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1156_ = v___x_1145_;
v_isShared_1157_ = v_isSharedCheck_1174_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_snapshotTasks_1154_);
lean_inc(v_infoState_1146_);
lean_inc(v_messages_1153_);
lean_inc(v_cache_1152_);
lean_inc(v_traceState_1151_);
lean_inc(v_auxDeclNGen_1150_);
lean_inc(v_ngen_1149_);
lean_inc(v_nextMacroScope_1148_);
lean_inc(v_env_1147_);
lean_dec(v___x_1145_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1174_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v_assignment_1158_; lean_object* v_lazyAssignment_1159_; lean_object* v_trees_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1173_; 
v_assignment_1158_ = lean_ctor_get(v_infoState_1146_, 0);
v_lazyAssignment_1159_ = lean_ctor_get(v_infoState_1146_, 1);
v_trees_1160_ = lean_ctor_get(v_infoState_1146_, 2);
v_isSharedCheck_1173_ = !lean_is_exclusive(v_infoState_1146_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1162_ = v_infoState_1146_;
v_isShared_1163_ = v_isSharedCheck_1173_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_trees_1160_);
lean_inc(v_lazyAssignment_1159_);
lean_inc(v_assignment_1158_);
lean_dec(v_infoState_1146_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1173_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v___x_1164_; lean_object* v___x_1166_; 
v___x_1164_ = lean_box(0);
if (v_isShared_1163_ == 0)
{
v___x_1166_ = v___x_1162_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_assignment_1158_);
lean_ctor_set(v_reuseFailAlloc_1172_, 1, v_lazyAssignment_1159_);
lean_ctor_set(v_reuseFailAlloc_1172_, 2, v_trees_1160_);
v___x_1166_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
lean_object* v___x_1168_; 
lean_ctor_set_uint8(v___x_1166_, sizeof(void*)*3, v_flag_1142_);
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 7, v___x_1166_);
v___x_1168_ = v___x_1156_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_env_1147_);
lean_ctor_set(v_reuseFailAlloc_1171_, 1, v_nextMacroScope_1148_);
lean_ctor_set(v_reuseFailAlloc_1171_, 2, v_ngen_1149_);
lean_ctor_set(v_reuseFailAlloc_1171_, 3, v_auxDeclNGen_1150_);
lean_ctor_set(v_reuseFailAlloc_1171_, 4, v_traceState_1151_);
lean_ctor_set(v_reuseFailAlloc_1171_, 5, v_cache_1152_);
lean_ctor_set(v_reuseFailAlloc_1171_, 6, v_messages_1153_);
lean_ctor_set(v_reuseFailAlloc_1171_, 7, v___x_1166_);
lean_ctor_set(v_reuseFailAlloc_1171_, 8, v_snapshotTasks_1154_);
v___x_1168_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1169_ = lean_st_ref_put(v___y_1143_, v___x_1168_);
v___x_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1164_);
return v___x_1170_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg___boxed(lean_object* v_flag_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
uint8_t v_flag_boxed_1178_; lean_object* v_res_1179_; 
v_flag_boxed_1178_ = lean_unbox(v_flag_1175_);
v_res_1179_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_flag_boxed_1178_, v___y_1176_);
lean_dec(v___y_1176_);
return v_res_1179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(uint8_t v_flag_1180_, lean_object* v_x_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_){
_start:
{
lean_object* v___x_1189_; lean_object* v_infoState_1190_; uint8_t v_enabled_1191_; lean_object* v_a_1193_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1189_ = lean_st_ref_get(v___y_1187_);
v_infoState_1190_ = lean_ctor_get(v___x_1189_, 7);
lean_inc_ref(v_infoState_1190_);
lean_dec(v___x_1189_);
v_enabled_1191_ = lean_ctor_get_uint8(v_infoState_1190_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1190_);
v___x_1203_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_flag_1180_, v___y_1187_);
lean_dec_ref(v___x_1203_);
lean_inc(v___y_1187_);
lean_inc_ref(v___y_1186_);
lean_inc(v___y_1185_);
lean_inc_ref(v___y_1184_);
lean_inc(v___y_1183_);
lean_inc_ref(v___y_1182_);
v___x_1204_ = lean_apply_7(v_x_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, lean_box(0));
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1213_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1205_);
lean_dec_ref_known(v___x_1204_, 1);
v___x_1206_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_enabled_1191_, v___y_1187_);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1213_ == 0)
{
lean_object* v_unused_1214_; 
v_unused_1214_ = lean_ctor_get(v___x_1206_, 0);
lean_dec(v_unused_1214_);
v___x_1208_ = v___x_1206_;
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
else
{
lean_dec(v___x_1206_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1213_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
lean_ctor_set(v___x_1208_, 0, v_a_1205_);
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_a_1205_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
else
{
lean_object* v_a_1215_; 
v_a_1215_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1215_);
lean_dec_ref_known(v___x_1204_, 1);
v_a_1193_ = v_a_1215_;
goto v___jp_1192_;
}
v___jp_1192_:
{
lean_object* v___x_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1201_; 
v___x_1194_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_enabled_1191_, v___y_1187_);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1201_ == 0)
{
lean_object* v_unused_1202_; 
v_unused_1202_ = lean_ctor_get(v___x_1194_, 0);
lean_dec(v_unused_1202_);
v___x_1196_ = v___x_1194_;
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
else
{
lean_dec(v___x_1194_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1199_; 
if (v_isShared_1197_ == 0)
{
lean_ctor_set_tag(v___x_1196_, 1);
lean_ctor_set(v___x_1196_, 0, v_a_1193_);
v___x_1199_ = v___x_1196_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_a_1193_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg___boxed(lean_object* v_flag_1216_, lean_object* v_x_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_){
_start:
{
uint8_t v_flag_boxed_1225_; lean_object* v_res_1226_; 
v_flag_boxed_1225_ = lean_unbox(v_flag_1216_);
v_res_1226_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(v_flag_boxed_1225_, v_x_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
lean_dec(v___y_1223_);
lean_dec_ref(v___y_1222_);
lean_dec(v___y_1221_);
lean_dec_ref(v___y_1220_);
lean_dec(v___y_1219_);
lean_dec_ref(v___y_1218_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(lean_object* v_declName_1227_, lean_object* v_binders_1228_, lean_object* v_blocks_1229_, lean_object* v_fileMap_x3f_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_){
_start:
{
lean_object* v___x_1238_; 
v___x_1238_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v___y_1236_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v_a_1239_; lean_object* v_a_1241_; size_t v_sz_1259_; size_t v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; uint8_t v___x_1263_; lean_object* v___x_1264_; lean_object* v___y_1265_; uint8_t v___x_1266_; lean_object* v___x_1267_; 
v_a_1239_ = lean_ctor_get(v___x_1238_, 0);
lean_inc(v_a_1239_);
lean_dec_ref_known(v___x_1238_, 1);
v_sz_1259_ = lean_array_size(v_blocks_1229_);
v___x_1260_ = ((size_t)0ULL);
v___x_1261_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(v_sz_1259_, v___x_1260_, v_blocks_1229_);
v___x_1262_ = lean_alloc_closure((void*)(l_Lean_Doc_elabBlocks___boxed), 11, 1);
lean_closure_set(v___x_1262_, 0, v___x_1261_);
v___x_1263_ = 1;
v___x_1264_ = lean_box(v___x_1263_);
v___y_1265_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0___boxed), 12, 5);
lean_closure_set(v___y_1265_, 0, v_fileMap_x3f_1230_);
lean_closure_set(v___y_1265_, 1, v_declName_1227_);
lean_closure_set(v___y_1265_, 2, v_binders_1228_);
lean_closure_set(v___y_1265_, 3, v___x_1262_);
lean_closure_set(v___y_1265_, 4, v___x_1264_);
v___x_1266_ = 0;
v___x_1267_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(v___x_1266_, v___y_1265_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_);
if (lean_obj_tag(v___x_1267_) == 0)
{
lean_object* v_a_1268_; lean_object* v___x_1269_; 
v_a_1268_ = lean_ctor_get(v___x_1267_, 0);
lean_inc(v_a_1268_);
lean_dec_ref_known(v___x_1267_, 1);
v___x_1269_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v___y_1236_);
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_object* v_a_1270_; lean_object* v___x_1271_; 
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
lean_inc(v_a_1270_);
lean_dec_ref_known(v___x_1269_, 1);
v___x_1271_ = l_Lean_Core_setMessageLog___redArg(v_a_1239_, v___y_1236_);
if (lean_obj_tag(v___x_1271_) == 0)
{
lean_object* v___x_1272_; lean_object* v___x_1273_; size_t v_sz_1274_; lean_object* v___x_1275_; 
lean_dec_ref_known(v___x_1271_, 1);
v___x_1272_ = l_Lean_MessageLog_toArray(v_a_1270_);
lean_dec(v_a_1270_);
v___x_1273_ = lean_box(0);
v_sz_1274_ = lean_array_size(v___x_1272_);
v___x_1275_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(v___x_1272_, v_sz_1274_, v___x_1260_, v___x_1273_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_);
lean_dec_ref(v___x_1272_);
if (lean_obj_tag(v___x_1275_) == 0)
{
lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1300_; 
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1275_);
if (v_isSharedCheck_1300_ == 0)
{
lean_object* v_unused_1301_; 
v_unused_1301_ = lean_ctor_get(v___x_1275_, 0);
lean_dec(v_unused_1301_);
v___x_1277_ = v___x_1275_;
v_isShared_1278_ = v_isSharedCheck_1300_;
goto v_resetjp_1276_;
}
else
{
lean_dec(v___x_1275_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1300_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v_fst_1279_; lean_object* v_snd_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1299_; 
v_fst_1279_ = lean_ctor_get(v_a_1268_, 0);
v_snd_1280_ = lean_ctor_get(v_a_1268_, 1);
v_isSharedCheck_1299_ = !lean_is_exclusive(v_a_1268_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1282_ = v_a_1268_;
v_isShared_1283_ = v_isSharedCheck_1299_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_snd_1280_);
lean_inc(v_fst_1279_);
lean_dec(v_a_1268_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1299_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v_fst_1284_; lean_object* v_snd_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1298_; 
v_fst_1284_ = lean_ctor_get(v_fst_1279_, 0);
v_snd_1285_ = lean_ctor_get(v_fst_1279_, 1);
v_isSharedCheck_1298_ = !lean_is_exclusive(v_fst_1279_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1287_ = v_fst_1279_;
v_isShared_1288_ = v_isSharedCheck_1298_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_snd_1285_);
lean_inc(v_fst_1284_);
lean_dec(v_fst_1279_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1298_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1290_; 
if (v_isShared_1288_ == 0)
{
v___x_1290_ = v___x_1287_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_fst_1284_);
lean_ctor_set(v_reuseFailAlloc_1297_, 1, v_snd_1285_);
v___x_1290_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
lean_object* v___x_1292_; 
if (v_isShared_1283_ == 0)
{
lean_ctor_set(v___x_1282_, 0, v___x_1290_);
v___x_1292_ = v___x_1282_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v___x_1290_);
lean_ctor_set(v_reuseFailAlloc_1296_, 1, v_snd_1280_);
v___x_1292_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
lean_object* v___x_1294_; 
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 0, v___x_1292_);
v___x_1294_ = v___x_1277_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v___x_1292_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1309_; 
lean_dec(v_a_1268_);
v_a_1302_ = lean_ctor_get(v___x_1275_, 0);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1275_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1304_ = v___x_1275_;
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_a_1302_);
lean_dec(v___x_1275_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1307_; 
if (v_isShared_1305_ == 0)
{
v___x_1307_ = v___x_1304_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_a_1302_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
}
}
else
{
lean_object* v_a_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1317_; 
lean_dec(v_a_1270_);
lean_dec(v_a_1268_);
v_a_1310_ = lean_ctor_get(v___x_1271_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1271_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1312_ = v___x_1271_;
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_a_1310_);
lean_dec(v___x_1271_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v___x_1315_; 
if (v_isShared_1313_ == 0)
{
v___x_1315_ = v___x_1312_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_a_1310_);
v___x_1315_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
return v___x_1315_;
}
}
}
}
else
{
lean_object* v_a_1318_; 
lean_dec(v_a_1268_);
v_a_1318_ = lean_ctor_get(v___x_1269_, 0);
lean_inc(v_a_1318_);
lean_dec_ref_known(v___x_1269_, 1);
v_a_1241_ = v_a_1318_;
goto v___jp_1240_;
}
}
else
{
lean_object* v_a_1319_; 
v_a_1319_ = lean_ctor_get(v___x_1267_, 0);
lean_inc(v_a_1319_);
lean_dec_ref_known(v___x_1267_, 1);
v_a_1241_ = v_a_1319_;
goto v___jp_1240_;
}
v___jp_1240_:
{
lean_object* v___x_1242_; 
v___x_1242_ = l_Lean_Core_setMessageLog___redArg(v_a_1239_, v___y_1236_);
if (lean_obj_tag(v___x_1242_) == 0)
{
lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1249_; 
v_isSharedCheck_1249_ = !lean_is_exclusive(v___x_1242_);
if (v_isSharedCheck_1249_ == 0)
{
lean_object* v_unused_1250_; 
v_unused_1250_ = lean_ctor_get(v___x_1242_, 0);
lean_dec(v_unused_1250_);
v___x_1244_ = v___x_1242_;
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
else
{
lean_dec(v___x_1242_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v___x_1247_; 
if (v_isShared_1245_ == 0)
{
lean_ctor_set_tag(v___x_1244_, 1);
lean_ctor_set(v___x_1244_, 0, v_a_1241_);
v___x_1247_ = v___x_1244_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_a_1241_);
v___x_1247_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
return v___x_1247_;
}
}
}
else
{
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1258_; 
lean_dec_ref(v_a_1241_);
v_a_1251_ = lean_ctor_get(v___x_1242_, 0);
v_isSharedCheck_1258_ = !lean_is_exclusive(v___x_1242_);
if (v_isSharedCheck_1258_ == 0)
{
v___x_1253_ = v___x_1242_;
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v___x_1242_);
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
v_reuseFailAlloc_1257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v_a_1251_);
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
}
else
{
lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1327_; 
lean_dec(v_fileMap_x3f_1230_);
lean_dec_ref(v_blocks_1229_);
lean_dec(v_binders_1228_);
lean_dec(v_declName_1227_);
v_a_1320_ = lean_ctor_get(v___x_1238_, 0);
v_isSharedCheck_1327_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1327_ == 0)
{
v___x_1322_ = v___x_1238_;
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_dec(v___x_1238_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1325_; 
if (v_isShared_1323_ == 0)
{
v___x_1325_ = v___x_1322_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v_a_1320_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___boxed(lean_object* v_declName_1328_, lean_object* v_binders_1329_, lean_object* v_blocks_1330_, lean_object* v_fileMap_x3f_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(v_declName_1328_, v_binders_1329_, v_blocks_1330_, v_fileMap_x3f_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1(uint8_t v_flag_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_){
_start:
{
lean_object* v___x_1348_; 
v___x_1348_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_flag_1340_, v___y_1346_);
return v___x_1348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___boxed(lean_object* v_flag_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_){
_start:
{
uint8_t v_flag_boxed_1357_; lean_object* v_res_1358_; 
v_flag_boxed_1357_ = lean_unbox(v_flag_1349_);
v_res_1358_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1(v_flag_boxed_1357_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_);
lean_dec(v___y_1355_);
lean_dec_ref(v___y_1354_);
lean_dec(v___y_1353_);
lean_dec_ref(v___y_1352_);
lean_dec(v___y_1351_);
lean_dec_ref(v___y_1350_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1(lean_object* v_00_u03b1_1359_, uint8_t v_flag_1360_, lean_object* v_x_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
lean_object* v___x_1369_; 
v___x_1369_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(v_flag_1360_, v_x_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_);
return v___x_1369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___boxed(lean_object* v_00_u03b1_1370_, lean_object* v_flag_1371_, lean_object* v_x_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_){
_start:
{
uint8_t v_flag_boxed_1380_; lean_object* v_res_1381_; 
v_flag_boxed_1380_ = lean_unbox(v_flag_1371_);
v_res_1381_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1(v_00_u03b1_1370_, v_flag_boxed_1380_, v_x_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_);
lean_dec(v___y_1378_);
lean_dec_ref(v___y_1377_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
lean_dec(v___y_1374_);
lean_dec_ref(v___y_1373_);
return v_res_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2(lean_object* v_ref_1382_, lean_object* v_msgData_1383_, uint8_t v_severity_1384_, uint8_t v_isSilent_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_){
_start:
{
lean_object* v___x_1393_; 
v___x_1393_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_1382_, v_msgData_1383_, v_severity_1384_, v_isSilent_1385_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___boxed(lean_object* v_ref_1394_, lean_object* v_msgData_1395_, lean_object* v_severity_1396_, lean_object* v_isSilent_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
uint8_t v_severity_boxed_1405_; uint8_t v_isSilent_boxed_1406_; lean_object* v_res_1407_; 
v_severity_boxed_1405_ = lean_unbox(v_severity_1396_);
v_isSilent_boxed_1406_ = lean_unbox(v_isSilent_1397_);
v_res_1407_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2(v_ref_1394_, v_msgData_1395_, v_severity_boxed_1405_, v_isSilent_boxed_1406_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_);
lean_dec(v___y_1403_);
lean_dec_ref(v___y_1402_);
lean_dec(v___y_1401_);
lean_dec_ref(v___y_1400_);
lean_dec(v___y_1399_);
lean_dec_ref(v___y_1398_);
lean_dec(v_ref_1394_);
return v_res_1407_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(lean_object* v_msgData_1408_, uint8_t v_severity_1409_, uint8_t v_isSilent_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v_ref_1416_; lean_object* v___x_1417_; 
v_ref_1416_ = lean_ctor_get(v___y_1413_, 2);
v___x_1417_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_1416_, v_msgData_1408_, v_severity_1409_, v_isSilent_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg___boxed(lean_object* v_msgData_1418_, lean_object* v_severity_1419_, lean_object* v_isSilent_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_){
_start:
{
uint8_t v_severity_boxed_1426_; uint8_t v_isSilent_boxed_1427_; lean_object* v_res_1428_; 
v_severity_boxed_1426_ = lean_unbox(v_severity_1419_);
v_isSilent_boxed_1427_ = lean_unbox(v_isSilent_1420_);
v_res_1428_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(v_msgData_1418_, v_severity_boxed_1426_, v_isSilent_boxed_1427_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
lean_dec(v___y_1424_);
lean_dec_ref(v___y_1423_);
lean_dec(v___y_1422_);
lean_dec_ref(v___y_1421_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(lean_object* v_msgData_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_){
_start:
{
uint8_t v___x_1437_; uint8_t v___x_1438_; lean_object* v___x_1439_; 
v___x_1437_ = 2;
v___x_1438_ = 0;
v___x_1439_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(v_msgData_1429_, v___x_1437_, v___x_1438_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0___boxed(lean_object* v_msgData_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_){
_start:
{
lean_object* v_res_1448_; 
v_res_1448_ = l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(v_msgData_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
lean_dec(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
return v_res_1448_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(lean_object* v_as_1449_, size_t v_sz_1450_, size_t v_i_1451_, lean_object* v_b_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_){
_start:
{
uint8_t v___x_1460_; 
v___x_1460_ = lean_usize_dec_lt(v_i_1451_, v_sz_1450_);
if (v___x_1460_ == 0)
{
lean_object* v___x_1461_; 
v___x_1461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1461_, 0, v_b_1452_);
return v___x_1461_;
}
else
{
lean_object* v_a_1462_; lean_object* v_snd_1463_; lean_object* v_snd_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
v_a_1462_ = lean_array_uget_borrowed(v_as_1449_, v_i_1451_);
v_snd_1463_ = lean_ctor_get(v_a_1462_, 1);
v_snd_1464_ = lean_ctor_get(v_snd_1463_, 1);
v___x_1465_ = lean_box(0);
lean_inc(v_snd_1464_);
v___x_1466_ = l_Lean_Parser_Error_toString(v_snd_1464_);
v___x_1467_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1466_);
v___x_1468_ = l_Lean_MessageData_ofFormat(v___x_1467_);
v___x_1469_ = l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(v___x_1468_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_);
if (lean_obj_tag(v___x_1469_) == 0)
{
size_t v___x_1470_; size_t v___x_1471_; 
lean_dec_ref_known(v___x_1469_, 1);
v___x_1470_ = ((size_t)1ULL);
v___x_1471_ = lean_usize_add(v_i_1451_, v___x_1470_);
v_i_1451_ = v___x_1471_;
v_b_1452_ = v___x_1465_;
goto _start;
}
else
{
return v___x_1469_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1___boxed(lean_object* v_as_1473_, lean_object* v_sz_1474_, lean_object* v_i_1475_, lean_object* v_b_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_){
_start:
{
size_t v_sz_boxed_1484_; size_t v_i_boxed_1485_; lean_object* v_res_1486_; 
v_sz_boxed_1484_ = lean_unbox_usize(v_sz_1474_);
lean_dec(v_sz_1474_);
v_i_boxed_1485_ = lean_unbox_usize(v_i_1475_);
lean_dec(v_i_1475_);
v_res_1486_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(v_as_1473_, v_sz_boxed_1484_, v_i_boxed_1485_, v_b_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec_ref(v_as_1473_);
return v_res_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText(lean_object* v_declName_1504_, lean_object* v_binders_1505_, lean_object* v_docComment_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v___x_1514_; lean_object* v_toCold_1515_; lean_object* v_env_1516_; lean_object* v_fileName_1517_; lean_object* v_options_1518_; lean_object* v_currNamespace_1519_; lean_object* v_openDecls_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; uint8_t v___x_1532_; 
v___x_1514_ = lean_st_ref_get(v___y_1512_);
v_toCold_1515_ = lean_ctor_get(v___y_1511_, 0);
v_env_1516_ = lean_ctor_get(v___x_1514_, 0);
lean_inc_ref_n(v_env_1516_, 2);
lean_dec(v___x_1514_);
v_fileName_1517_ = lean_ctor_get(v_toCold_1515_, 0);
v_options_1518_ = lean_ctor_get(v_toCold_1515_, 2);
v_currNamespace_1519_ = lean_ctor_get(v_toCold_1515_, 4);
v_openDecls_1520_ = lean_ctor_get(v_toCold_1515_, 5);
v___x_1521_ = lean_string_utf8_byte_size(v_docComment_1506_);
lean_inc_ref_n(v_docComment_1506_, 2);
v___x_1522_ = l_Lean_FileMap_ofString(v_docComment_1506_);
lean_inc_ref(v___x_1522_);
lean_inc_ref(v_fileName_1517_);
v___x_1523_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1523_, 0, v_docComment_1506_);
lean_ctor_set(v___x_1523_, 1, v_fileName_1517_);
lean_ctor_set(v___x_1523_, 2, v___x_1522_);
lean_ctor_set(v___x_1523_, 3, v___x_1521_);
lean_inc(v_openDecls_1520_);
lean_inc(v_currNamespace_1519_);
lean_inc_ref(v_options_1518_);
v___x_1524_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1524_, 0, v_env_1516_);
lean_ctor_set(v___x_1524_, 1, v_options_1518_);
lean_ctor_set(v___x_1524_, 2, v_currNamespace_1519_);
lean_ctor_set(v___x_1524_, 3, v_openDecls_1520_);
v___x_1525_ = l_Lean_Parser_mkParserState(v_docComment_1506_);
lean_dec_ref(v_docComment_1506_);
v___x_1526_ = lean_unsigned_to_nat(0u);
v___x_1527_ = ((lean_object*)(l_Lean_versoDocStringOfText___closed__2));
v___x_1528_ = l_Lean_Parser_getTokenTable(v_env_1516_);
v___x_1529_ = l_Lean_Parser_ParserFn_run(v___x_1527_, v___x_1523_, v___x_1524_, v___x_1528_, v___x_1525_);
lean_inc_ref(v___x_1529_);
v___x_1530_ = l_Lean_Parser_ParserState_allErrors(v___x_1529_);
v___x_1531_ = lean_array_get_size(v___x_1530_);
v___x_1532_ = lean_nat_dec_eq(v___x_1531_, v___x_1526_);
if (v___x_1532_ == 0)
{
lean_object* v___x_1533_; size_t v_sz_1534_; size_t v___x_1535_; lean_object* v___x_1536_; 
lean_dec_ref(v___x_1529_);
lean_dec_ref(v___x_1522_);
lean_dec(v_binders_1505_);
lean_dec(v_declName_1504_);
v___x_1533_ = lean_box(0);
v_sz_1534_ = lean_array_size(v___x_1530_);
v___x_1535_ = ((size_t)0ULL);
v___x_1536_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(v___x_1530_, v_sz_1534_, v___x_1535_, v___x_1533_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_);
lean_dec_ref(v___x_1530_);
if (lean_obj_tag(v___x_1536_) == 0)
{
lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1544_; 
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1536_);
if (v_isSharedCheck_1544_ == 0)
{
lean_object* v_unused_1545_; 
v_unused_1545_ = lean_ctor_get(v___x_1536_, 0);
lean_dec(v_unused_1545_);
v___x_1538_ = v___x_1536_;
v_isShared_1539_ = v_isSharedCheck_1544_;
goto v_resetjp_1537_;
}
else
{
lean_dec(v___x_1536_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1544_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v___x_1540_; lean_object* v___x_1542_; 
v___x_1540_ = ((lean_object*)(l_Lean_versoDocStringOfText___closed__5));
if (v_isShared_1539_ == 0)
{
lean_ctor_set(v___x_1538_, 0, v___x_1540_);
v___x_1542_ = v___x_1538_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v___x_1540_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
else
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
v_a_1546_ = lean_ctor_get(v___x_1536_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1536_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1548_ = v___x_1536_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1536_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1549_ == 0)
{
v___x_1551_ = v___x_1548_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_a_1546_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
}
else
{
lean_object* v_stxStack_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
lean_dec_ref(v___x_1530_);
v_stxStack_1554_ = lean_ctor_get(v___x_1529_, 0);
lean_inc_ref(v_stxStack_1554_);
lean_dec_ref(v___x_1529_);
v___x_1555_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1554_);
lean_dec_ref(v_stxStack_1554_);
v___x_1556_ = l_Lean_Syntax_getArgs(v___x_1555_);
lean_dec(v___x_1555_);
v___x_1557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1522_);
v___x_1558_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(v_declName_1504_, v_binders_1505_, v___x_1556_, v___x_1557_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_);
return v___x_1558_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText___boxed(lean_object* v_declName_1559_, lean_object* v_binders_1560_, lean_object* v_docComment_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
lean_object* v_res_1569_; 
v_res_1569_ = l_Lean_versoDocStringOfText(v_declName_1559_, v_binders_1560_, v_docComment_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0(lean_object* v_msgData_1570_, uint8_t v_severity_1571_, uint8_t v_isSilent_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_){
_start:
{
lean_object* v___x_1580_; 
v___x_1580_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(v_msgData_1570_, v_severity_1571_, v_isSilent_1572_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_);
return v___x_1580_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___boxed(lean_object* v_msgData_1581_, lean_object* v_severity_1582_, lean_object* v_isSilent_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
uint8_t v_severity_boxed_1591_; uint8_t v_isSilent_boxed_1592_; lean_object* v_res_1593_; 
v_severity_boxed_1591_ = lean_unbox(v_severity_1582_);
v_isSilent_boxed_1592_ = lean_unbox(v_isSilent_1583_);
v_res_1593_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0(v_msgData_1581_, v_severity_boxed_1591_, v_isSilent_boxed_1592_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v___y_1587_);
lean_dec_ref(v___y_1586_);
lean_dec(v___y_1585_);
lean_dec_ref(v___y_1584_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(size_t v_sz_1594_, size_t v_i_1595_, lean_object* v_bs_1596_){
_start:
{
uint8_t v___x_1597_; 
v___x_1597_ = lean_usize_dec_lt(v_i_1595_, v_sz_1594_);
if (v___x_1597_ == 0)
{
return v_bs_1596_;
}
else
{
lean_object* v_v_1598_; lean_object* v___x_1599_; lean_object* v_bs_x27_1600_; size_t v___x_1601_; size_t v___x_1602_; lean_object* v___x_1603_; 
v_v_1598_ = lean_array_uget(v_bs_1596_, v_i_1595_);
v___x_1599_ = lean_unsigned_to_nat(0u);
v_bs_x27_1600_ = lean_array_uset(v_bs_1596_, v_i_1595_, v___x_1599_);
v___x_1601_ = ((size_t)1ULL);
v___x_1602_ = lean_usize_add(v_i_1595_, v___x_1601_);
v___x_1603_ = lean_array_uset(v_bs_x27_1600_, v_i_1595_, v_v_1598_);
v_i_1595_ = v___x_1602_;
v_bs_1596_ = v___x_1603_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1___boxed(lean_object* v_sz_1605_, lean_object* v_i_1606_, lean_object* v_bs_1607_){
_start:
{
size_t v_sz_boxed_1608_; size_t v_i_boxed_1609_; lean_object* v_res_1610_; 
v_sz_boxed_1608_ = lean_unbox_usize(v_sz_1605_);
lean_dec(v_sz_1605_);
v_i_boxed_1609_ = lean_unbox_usize(v_i_1606_);
lean_dec(v_i_1606_);
v_res_1610_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(v_sz_boxed_1608_, v_i_boxed_1609_, v_bs_1607_);
return v_res_1610_;
}
}
LEAN_EXPORT uint8_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0(uint8_t v_suppressElabErrors_1611_, uint8_t v___x_1612_, lean_object* v_x_1613_){
_start:
{
if (lean_obj_tag(v_x_1613_) == 1)
{
lean_object* v_pre_1614_; 
v_pre_1614_ = lean_ctor_get(v_x_1613_, 0);
switch(lean_obj_tag(v_pre_1614_))
{
case 1:
{
lean_object* v_pre_1615_; 
v_pre_1615_ = lean_ctor_get(v_pre_1614_, 0);
switch(lean_obj_tag(v_pre_1615_))
{
case 0:
{
lean_object* v_str_1616_; lean_object* v_str_1617_; lean_object* v___x_1618_; uint8_t v___x_1619_; 
v_str_1616_ = lean_ctor_get(v_x_1613_, 1);
v_str_1617_ = lean_ctor_get(v_pre_1614_, 1);
v___x_1618_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0));
v___x_1619_ = lean_string_dec_eq(v_str_1617_, v___x_1618_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1620_; uint8_t v___x_1621_; 
v___x_1620_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1));
v___x_1621_ = lean_string_dec_eq(v_str_1617_, v___x_1620_);
if (v___x_1621_ == 0)
{
return v___x_1621_;
}
else
{
lean_object* v___x_1622_; uint8_t v___x_1623_; 
v___x_1622_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2));
v___x_1623_ = lean_string_dec_eq(v_str_1616_, v___x_1622_);
if (v___x_1623_ == 0)
{
return v___x_1623_;
}
else
{
return v_suppressElabErrors_1611_;
}
}
}
else
{
lean_object* v___x_1624_; uint8_t v___x_1625_; 
v___x_1624_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3));
v___x_1625_ = lean_string_dec_eq(v_str_1616_, v___x_1624_);
if (v___x_1625_ == 0)
{
return v___x_1625_;
}
else
{
return v_suppressElabErrors_1611_;
}
}
}
case 1:
{
lean_object* v_pre_1626_; 
v_pre_1626_ = lean_ctor_get(v_pre_1615_, 0);
if (lean_obj_tag(v_pre_1626_) == 0)
{
lean_object* v_str_1627_; lean_object* v_str_1628_; lean_object* v_str_1629_; lean_object* v___x_1630_; uint8_t v___x_1631_; 
v_str_1627_ = lean_ctor_get(v_x_1613_, 1);
v_str_1628_ = lean_ctor_get(v_pre_1614_, 1);
v_str_1629_ = lean_ctor_get(v_pre_1615_, 1);
v___x_1630_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4));
v___x_1631_ = lean_string_dec_eq(v_str_1629_, v___x_1630_);
if (v___x_1631_ == 0)
{
return v___x_1631_;
}
else
{
lean_object* v___x_1632_; uint8_t v___x_1633_; 
v___x_1632_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5));
v___x_1633_ = lean_string_dec_eq(v_str_1628_, v___x_1632_);
if (v___x_1633_ == 0)
{
return v___x_1633_;
}
else
{
lean_object* v___x_1634_; uint8_t v___x_1635_; 
v___x_1634_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6));
v___x_1635_ = lean_string_dec_eq(v_str_1627_, v___x_1634_);
if (v___x_1635_ == 0)
{
return v___x_1635_;
}
else
{
return v_suppressElabErrors_1611_;
}
}
}
}
else
{
return v___x_1612_;
}
}
default: 
{
return v___x_1612_;
}
}
}
case 0:
{
lean_object* v_str_1636_; lean_object* v___x_1637_; uint8_t v___x_1638_; 
v_str_1636_ = lean_ctor_get(v_x_1613_, 1);
v___x_1637_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7));
v___x_1638_ = lean_string_dec_eq(v_str_1636_, v___x_1637_);
if (v___x_1638_ == 0)
{
return v___x_1638_;
}
else
{
return v_suppressElabErrors_1611_;
}
}
default: 
{
return v___x_1612_;
}
}
}
else
{
return v___x_1612_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___boxed(lean_object* v_suppressElabErrors_1639_, lean_object* v___x_1640_, lean_object* v_x_1641_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1642_; uint8_t v___x_11315__boxed_1643_; uint8_t v_res_1644_; lean_object* v_r_1645_; 
v_suppressElabErrors_boxed_1642_ = lean_unbox(v_suppressElabErrors_1639_);
v___x_11315__boxed_1643_ = lean_unbox(v___x_1640_);
v_res_1644_ = l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0(v_suppressElabErrors_boxed_1642_, v___x_11315__boxed_1643_, v_x_1641_);
lean_dec(v_x_1641_);
v_r_1645_ = lean_box(v_res_1644_);
return v_r_1645_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0(uint8_t v_suppressElabErrors_1646_, uint8_t v___x_1647_, lean_object* v_x_1648_){
_start:
{
if (lean_obj_tag(v_x_1648_) == 1)
{
lean_object* v_pre_1649_; 
v_pre_1649_ = lean_ctor_get(v_x_1648_, 0);
switch(lean_obj_tag(v_pre_1649_))
{
case 1:
{
lean_object* v_pre_1650_; 
v_pre_1650_ = lean_ctor_get(v_pre_1649_, 0);
switch(lean_obj_tag(v_pre_1650_))
{
case 0:
{
lean_object* v_str_1651_; lean_object* v_str_1652_; lean_object* v___x_1653_; uint8_t v___x_1654_; 
v_str_1651_ = lean_ctor_get(v_x_1648_, 1);
v_str_1652_ = lean_ctor_get(v_pre_1649_, 1);
v___x_1653_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0));
v___x_1654_ = lean_string_dec_eq(v_str_1652_, v___x_1653_);
if (v___x_1654_ == 0)
{
lean_object* v___x_1655_; uint8_t v___x_1656_; 
v___x_1655_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1));
v___x_1656_ = lean_string_dec_eq(v_str_1652_, v___x_1655_);
if (v___x_1656_ == 0)
{
return v___x_1656_;
}
else
{
lean_object* v___x_1657_; uint8_t v___x_1658_; 
v___x_1657_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2));
v___x_1658_ = lean_string_dec_eq(v_str_1651_, v___x_1657_);
if (v___x_1658_ == 0)
{
return v___x_1658_;
}
else
{
return v_suppressElabErrors_1646_;
}
}
}
else
{
lean_object* v___x_1659_; uint8_t v___x_1660_; 
v___x_1659_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3));
v___x_1660_ = lean_string_dec_eq(v_str_1651_, v___x_1659_);
if (v___x_1660_ == 0)
{
return v___x_1660_;
}
else
{
return v_suppressElabErrors_1646_;
}
}
}
case 1:
{
lean_object* v_pre_1661_; 
v_pre_1661_ = lean_ctor_get(v_pre_1650_, 0);
if (lean_obj_tag(v_pre_1661_) == 0)
{
lean_object* v_str_1662_; lean_object* v_str_1663_; lean_object* v_str_1664_; lean_object* v___x_1665_; uint8_t v___x_1666_; 
v_str_1662_ = lean_ctor_get(v_x_1648_, 1);
v_str_1663_ = lean_ctor_get(v_pre_1649_, 1);
v_str_1664_ = lean_ctor_get(v_pre_1650_, 1);
v___x_1665_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4));
v___x_1666_ = lean_string_dec_eq(v_str_1664_, v___x_1665_);
if (v___x_1666_ == 0)
{
return v___x_1666_;
}
else
{
lean_object* v___x_1667_; uint8_t v___x_1668_; 
v___x_1667_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5));
v___x_1668_ = lean_string_dec_eq(v_str_1663_, v___x_1667_);
if (v___x_1668_ == 0)
{
return v___x_1668_;
}
else
{
lean_object* v___x_1669_; uint8_t v___x_1670_; 
v___x_1669_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6));
v___x_1670_ = lean_string_dec_eq(v_str_1662_, v___x_1669_);
if (v___x_1670_ == 0)
{
return v___x_1670_;
}
else
{
return v_suppressElabErrors_1646_;
}
}
}
}
else
{
return v___x_1647_;
}
}
default: 
{
return v___x_1647_;
}
}
}
case 0:
{
lean_object* v_str_1671_; lean_object* v___x_1672_; uint8_t v___x_1673_; 
v_str_1671_ = lean_ctor_get(v_x_1648_, 1);
v___x_1672_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7));
v___x_1673_ = lean_string_dec_eq(v_str_1671_, v___x_1672_);
if (v___x_1673_ == 0)
{
return v___x_1673_;
}
else
{
return v_suppressElabErrors_1646_;
}
}
default: 
{
return v___x_1647_;
}
}
}
else
{
return v___x_1647_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_1674_, lean_object* v___x_1675_, lean_object* v_x_1676_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1677_; uint8_t v___x_11379__boxed_1678_; uint8_t v_res_1679_; lean_object* v_r_1680_; 
v_suppressElabErrors_boxed_1677_ = lean_unbox(v_suppressElabErrors_1674_);
v___x_11379__boxed_1678_ = lean_unbox(v___x_1675_);
v_res_1679_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0(v_suppressElabErrors_boxed_1677_, v___x_11379__boxed_1678_, v_x_1676_);
lean_dec(v_x_1676_);
v_r_1680_ = lean_box(v_res_1679_);
return v_r_1680_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(lean_object* v___x_1681_, lean_object* v___x_1682_, lean_object* v_as_1683_, size_t v_sz_1684_, size_t v_i_1685_, lean_object* v_b_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_){
_start:
{
lean_object* v_a_1691_; uint8_t v___x_1695_; 
v___x_1695_ = lean_usize_dec_lt(v_i_1685_, v_sz_1684_);
if (v___x_1695_ == 0)
{
lean_object* v___x_1696_; 
lean_dec_ref(v___x_1681_);
v___x_1696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1696_, 0, v_b_1686_);
return v___x_1696_;
}
else
{
lean_object* v_a_1697_; lean_object* v_snd_1698_; lean_object* v_toCold_1699_; lean_object* v_fst_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1758_; 
v_a_1697_ = lean_array_uget(v_as_1683_, v_i_1685_);
v_snd_1698_ = lean_ctor_get(v_a_1697_, 1);
lean_inc(v_snd_1698_);
v_toCold_1699_ = lean_ctor_get(v___y_1687_, 0);
v_fst_1700_ = lean_ctor_get(v_a_1697_, 0);
v_isSharedCheck_1758_ = !lean_is_exclusive(v_a_1697_);
if (v_isSharedCheck_1758_ == 0)
{
lean_object* v_unused_1759_; 
v_unused_1759_ = lean_ctor_get(v_a_1697_, 1);
lean_dec(v_unused_1759_);
v___x_1702_ = v_a_1697_;
v_isShared_1703_ = v_isSharedCheck_1758_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_fst_1700_);
lean_dec(v_a_1697_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1758_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v_snd_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1756_; 
v_snd_1704_ = lean_ctor_get(v_snd_1698_, 1);
v_isSharedCheck_1756_ = !lean_is_exclusive(v_snd_1698_);
if (v_isSharedCheck_1756_ == 0)
{
lean_object* v_unused_1757_; 
v_unused_1757_ = lean_ctor_get(v_snd_1698_, 0);
lean_dec(v_unused_1757_);
v___x_1706_ = v_snd_1698_;
v_isShared_1707_ = v_isSharedCheck_1756_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_snd_1704_);
lean_dec(v_snd_1698_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1756_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
uint8_t v_suppressElabErrors_1708_; lean_object* v_fileName_1709_; lean_object* v_currNamespace_1710_; lean_object* v_openDecls_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; uint8_t v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; uint8_t v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v_currNamespace_1723_; lean_object* v_openDecls_1724_; lean_object* v___y_1725_; 
v_suppressElabErrors_1708_ = lean_ctor_get_uint8(v___y_1687_, sizeof(void*)*3 + 1);
v_fileName_1709_ = lean_ctor_get(v_toCold_1699_, 0);
v_currNamespace_1710_ = lean_ctor_get(v_toCold_1699_, 4);
v_openDecls_1711_ = lean_ctor_get(v_toCold_1699_, 5);
v___x_1712_ = lean_box(0);
v___x_1713_ = lean_unsigned_to_nat(0u);
v___x_1714_ = lean_nat_dec_eq(v___x_1682_, v___x_1713_);
lean_inc_ref(v___x_1681_);
v___x_1715_ = l_Lean_FileMap_toPosition(v___x_1681_, v_fst_1700_);
lean_dec(v_fst_1700_);
v___x_1716_ = lean_box(0);
v___x_1717_ = 2;
v___x_1718_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_1719_ = l_Lean_Parser_Error_toString(v_snd_1704_);
v___x_1720_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1720_, 0, v___x_1719_);
v___x_1721_ = l_Lean_MessageData_ofFormat(v___x_1720_);
if (v_suppressElabErrors_1708_ == 0)
{
v_currNamespace_1723_ = v_currNamespace_1710_;
v_openDecls_1724_ = v_openDecls_1711_;
v___y_1725_ = v___y_1688_;
goto v___jp_1722_;
}
else
{
lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___f_1754_; uint8_t v___x_1755_; 
v___x_1752_ = lean_box(v_suppressElabErrors_1708_);
v___x_1753_ = lean_box(v___x_1714_);
v___f_1754_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1754_, 0, v___x_1752_);
lean_closure_set(v___f_1754_, 1, v___x_1753_);
lean_inc_ref(v___x_1721_);
v___x_1755_ = l_Lean_MessageData_hasTag(v___f_1754_, v___x_1721_);
if (v___x_1755_ == 0)
{
lean_dec_ref(v___x_1721_);
lean_dec_ref(v___x_1715_);
lean_del_object(v___x_1706_);
lean_del_object(v___x_1702_);
v_a_1691_ = v___x_1712_;
goto v___jp_1690_;
}
else
{
v_currNamespace_1723_ = v_currNamespace_1710_;
v_openDecls_1724_ = v_openDecls_1711_;
v___y_1725_ = v___y_1688_;
goto v___jp_1722_;
}
}
v___jp_1722_:
{
lean_object* v___x_1727_; 
lean_inc(v_openDecls_1724_);
lean_inc(v_currNamespace_1723_);
if (v_isShared_1707_ == 0)
{
lean_ctor_set(v___x_1706_, 1, v_openDecls_1724_);
lean_ctor_set(v___x_1706_, 0, v_currNamespace_1723_);
v___x_1727_ = v___x_1706_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v_currNamespace_1723_);
lean_ctor_set(v_reuseFailAlloc_1751_, 1, v_openDecls_1724_);
v___x_1727_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
lean_object* v___x_1729_; 
if (v_isShared_1703_ == 0)
{
lean_ctor_set_tag(v___x_1702_, 4);
lean_ctor_set(v___x_1702_, 1, v___x_1721_);
lean_ctor_set(v___x_1702_, 0, v___x_1727_);
v___x_1729_ = v___x_1702_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v___x_1727_);
lean_ctor_set(v_reuseFailAlloc_1750_, 1, v___x_1721_);
v___x_1729_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v_env_1732_; lean_object* v_nextMacroScope_1733_; lean_object* v_ngen_1734_; lean_object* v_auxDeclNGen_1735_; lean_object* v_traceState_1736_; lean_object* v_cache_1737_; lean_object* v_messages_1738_; lean_object* v_infoState_1739_; lean_object* v_snapshotTasks_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1749_; 
lean_inc_ref(v_fileName_1709_);
v___x_1730_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1730_, 0, v_fileName_1709_);
lean_ctor_set(v___x_1730_, 1, v___x_1715_);
lean_ctor_set(v___x_1730_, 2, v___x_1716_);
lean_ctor_set(v___x_1730_, 3, v___x_1718_);
lean_ctor_set(v___x_1730_, 4, v___x_1729_);
lean_ctor_set_uint8(v___x_1730_, sizeof(void*)*5, v___x_1714_);
lean_ctor_set_uint8(v___x_1730_, sizeof(void*)*5 + 1, v___x_1717_);
lean_ctor_set_uint8(v___x_1730_, sizeof(void*)*5 + 2, v___x_1714_);
v___x_1731_ = lean_st_ref_take(v___y_1725_);
v_env_1732_ = lean_ctor_get(v___x_1731_, 0);
v_nextMacroScope_1733_ = lean_ctor_get(v___x_1731_, 1);
v_ngen_1734_ = lean_ctor_get(v___x_1731_, 2);
v_auxDeclNGen_1735_ = lean_ctor_get(v___x_1731_, 3);
v_traceState_1736_ = lean_ctor_get(v___x_1731_, 4);
v_cache_1737_ = lean_ctor_get(v___x_1731_, 5);
v_messages_1738_ = lean_ctor_get(v___x_1731_, 6);
v_infoState_1739_ = lean_ctor_get(v___x_1731_, 7);
v_snapshotTasks_1740_ = lean_ctor_get(v___x_1731_, 8);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1731_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1742_ = v___x_1731_;
v_isShared_1743_ = v_isSharedCheck_1749_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_snapshotTasks_1740_);
lean_inc(v_infoState_1739_);
lean_inc(v_messages_1738_);
lean_inc(v_cache_1737_);
lean_inc(v_traceState_1736_);
lean_inc(v_auxDeclNGen_1735_);
lean_inc(v_ngen_1734_);
lean_inc(v_nextMacroScope_1733_);
lean_inc(v_env_1732_);
lean_dec(v___x_1731_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1749_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1744_; lean_object* v___x_1746_; 
v___x_1744_ = l_Lean_MessageLog_add(v___x_1730_, v_messages_1738_);
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 6, v___x_1744_);
v___x_1746_ = v___x_1742_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_env_1732_);
lean_ctor_set(v_reuseFailAlloc_1748_, 1, v_nextMacroScope_1733_);
lean_ctor_set(v_reuseFailAlloc_1748_, 2, v_ngen_1734_);
lean_ctor_set(v_reuseFailAlloc_1748_, 3, v_auxDeclNGen_1735_);
lean_ctor_set(v_reuseFailAlloc_1748_, 4, v_traceState_1736_);
lean_ctor_set(v_reuseFailAlloc_1748_, 5, v_cache_1737_);
lean_ctor_set(v_reuseFailAlloc_1748_, 6, v___x_1744_);
lean_ctor_set(v_reuseFailAlloc_1748_, 7, v_infoState_1739_);
lean_ctor_set(v_reuseFailAlloc_1748_, 8, v_snapshotTasks_1740_);
v___x_1746_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
lean_object* v___x_1747_; 
v___x_1747_ = lean_st_ref_put(v___y_1725_, v___x_1746_);
v_a_1691_ = v___x_1712_;
goto v___jp_1690_;
}
}
}
}
}
}
}
}
v___jp_1690_:
{
size_t v___x_1692_; size_t v___x_1693_; 
v___x_1692_ = ((size_t)1ULL);
v___x_1693_ = lean_usize_add(v_i_1685_, v___x_1692_);
v_i_1685_ = v___x_1693_;
v_b_1686_ = v_a_1691_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___boxed(lean_object* v___x_1760_, lean_object* v___x_1761_, lean_object* v_as_1762_, lean_object* v_sz_1763_, lean_object* v_i_1764_, lean_object* v_b_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_){
_start:
{
size_t v_sz_boxed_1769_; size_t v_i_boxed_1770_; lean_object* v_res_1771_; 
v_sz_boxed_1769_ = lean_unbox_usize(v_sz_1763_);
lean_dec(v_sz_1763_);
v_i_boxed_1770_ = lean_unbox_usize(v_i_1764_);
lean_dec(v_i_1764_);
v_res_1771_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(v___x_1760_, v___x_1761_, v_as_1762_, v_sz_boxed_1769_, v_i_boxed_1770_, v_b_1765_, v___y_1766_, v___y_1767_);
lean_dec(v___y_1767_);
lean_dec_ref(v___y_1766_);
lean_dec_ref(v_as_1762_);
lean_dec(v___x_1761_);
return v_res_1771_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1772_ = lean_box(1);
v___x_1773_ = l_Lean_MessageData_ofFormat(v___x_1772_);
return v___x_1773_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3(void){
_start:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; 
v___x_1777_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__2));
v___x_1778_ = l_Lean_MessageData_ofFormat(v___x_1777_);
return v___x_1778_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5(lean_object* v_x_1779_, lean_object* v_x_1780_){
_start:
{
if (lean_obj_tag(v_x_1780_) == 0)
{
return v_x_1779_;
}
else
{
lean_object* v_head_1781_; lean_object* v_tail_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1804_; 
v_head_1781_ = lean_ctor_get(v_x_1780_, 0);
v_tail_1782_ = lean_ctor_get(v_x_1780_, 1);
v_isSharedCheck_1804_ = !lean_is_exclusive(v_x_1780_);
if (v_isSharedCheck_1804_ == 0)
{
v___x_1784_ = v_x_1780_;
v_isShared_1785_ = v_isSharedCheck_1804_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_tail_1782_);
lean_inc(v_head_1781_);
lean_dec(v_x_1780_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1804_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v_before_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1802_; 
v_before_1786_ = lean_ctor_get(v_head_1781_, 0);
v_isSharedCheck_1802_ = !lean_is_exclusive(v_head_1781_);
if (v_isSharedCheck_1802_ == 0)
{
lean_object* v_unused_1803_; 
v_unused_1803_ = lean_ctor_get(v_head_1781_, 1);
lean_dec(v_unused_1803_);
v___x_1788_ = v_head_1781_;
v_isShared_1789_ = v_isSharedCheck_1802_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_before_1786_);
lean_dec(v_head_1781_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1802_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v___x_1790_; lean_object* v___x_1792_; 
v___x_1790_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0);
if (v_isShared_1789_ == 0)
{
lean_ctor_set_tag(v___x_1788_, 7);
lean_ctor_set(v___x_1788_, 1, v___x_1790_);
lean_ctor_set(v___x_1788_, 0, v_x_1779_);
v___x_1792_ = v___x_1788_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_x_1779_);
lean_ctor_set(v_reuseFailAlloc_1801_, 1, v___x_1790_);
v___x_1792_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
lean_object* v___x_1793_; lean_object* v___x_1795_; 
v___x_1793_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3);
if (v_isShared_1785_ == 0)
{
lean_ctor_set_tag(v___x_1784_, 7);
lean_ctor_set(v___x_1784_, 1, v___x_1793_);
lean_ctor_set(v___x_1784_, 0, v___x_1792_);
v___x_1795_ = v___x_1784_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v___x_1792_);
lean_ctor_set(v_reuseFailAlloc_1800_, 1, v___x_1793_);
v___x_1795_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1796_ = l_Lean_MessageData_ofSyntax(v_before_1786_);
v___x_1797_ = l_Lean_indentD(v___x_1796_);
v___x_1798_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1795_);
lean_ctor_set(v___x_1798_, 1, v___x_1797_);
v_x_1779_ = v___x_1798_;
v_x_1780_ = v_tail_1782_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1808_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__1));
v___x_1809_ = l_Lean_MessageData_ofFormat(v___x_1808_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_msgData_1810_, lean_object* v_macroStack_1811_, lean_object* v___y_1812_){
_start:
{
lean_object* v_toCold_1814_; lean_object* v_options_1815_; lean_object* v___x_1816_; uint8_t v___x_1817_; 
v_toCold_1814_ = lean_ctor_get(v___y_1812_, 0);
v_options_1815_ = lean_ctor_get(v_toCold_1814_, 2);
v___x_1816_ = l_Lean_Elab_pp_macroStack;
v___x_1817_ = l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(v_options_1815_, v___x_1816_);
if (v___x_1817_ == 0)
{
lean_object* v___x_1818_; 
lean_dec(v_macroStack_1811_);
v___x_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1818_, 0, v_msgData_1810_);
return v___x_1818_;
}
else
{
if (lean_obj_tag(v_macroStack_1811_) == 0)
{
lean_object* v___x_1819_; 
v___x_1819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1819_, 0, v_msgData_1810_);
return v___x_1819_;
}
else
{
lean_object* v_head_1820_; lean_object* v_after_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1836_; 
v_head_1820_ = lean_ctor_get(v_macroStack_1811_, 0);
lean_inc(v_head_1820_);
v_after_1821_ = lean_ctor_get(v_head_1820_, 1);
v_isSharedCheck_1836_ = !lean_is_exclusive(v_head_1820_);
if (v_isSharedCheck_1836_ == 0)
{
lean_object* v_unused_1837_; 
v_unused_1837_ = lean_ctor_get(v_head_1820_, 0);
lean_dec(v_unused_1837_);
v___x_1823_ = v_head_1820_;
v_isShared_1824_ = v_isSharedCheck_1836_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_after_1821_);
lean_dec(v_head_1820_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1836_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1825_; lean_object* v___x_1827_; 
v___x_1825_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0);
if (v_isShared_1824_ == 0)
{
lean_ctor_set_tag(v___x_1823_, 7);
lean_ctor_set(v___x_1823_, 1, v___x_1825_);
lean_ctor_set(v___x_1823_, 0, v_msgData_1810_);
v___x_1827_ = v___x_1823_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_msgData_1810_);
lean_ctor_set(v_reuseFailAlloc_1835_, 1, v___x_1825_);
v___x_1827_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v_msgData_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1828_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2);
v___x_1829_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1827_);
lean_ctor_set(v___x_1829_, 1, v___x_1828_);
v___x_1830_ = l_Lean_MessageData_ofSyntax(v_after_1821_);
v___x_1831_ = l_Lean_indentD(v___x_1830_);
v_msgData_1832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1832_, 0, v___x_1829_);
lean_ctor_set(v_msgData_1832_, 1, v___x_1831_);
v___x_1833_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5(v_msgData_1832_, v_macroStack_1811_);
v___x_1834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1834_, 0, v___x_1833_);
return v___x_1834_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_msgData_1838_, lean_object* v_macroStack_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_){
_start:
{
lean_object* v_res_1842_; 
v_res_1842_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg(v_msgData_1838_, v_macroStack_1839_, v___y_1840_);
lean_dec_ref(v___y_1840_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(lean_object* v_msg_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_){
_start:
{
lean_object* v_ref_1851_; lean_object* v_macroStack_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v_a_1855_; lean_object* v___x_1856_; lean_object* v_a_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1865_; 
v_ref_1851_ = lean_ctor_get(v___y_1848_, 2);
v_macroStack_1852_ = lean_ctor_get(v___y_1844_, 1);
v___x_1853_ = l_Lean_Elab_getBetterRef(v_ref_1851_, v_macroStack_1852_);
v___x_1854_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(v_msg_1843_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_);
v_a_1855_ = lean_ctor_get(v___x_1854_, 0);
lean_inc(v_a_1855_);
lean_dec_ref(v___x_1854_);
lean_inc(v_macroStack_1852_);
v___x_1856_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg(v_a_1855_, v_macroStack_1852_, v___y_1848_);
v_a_1857_ = lean_ctor_get(v___x_1856_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1856_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1859_ = v___x_1856_;
v_isShared_1860_ = v_isSharedCheck_1865_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_a_1857_);
lean_dec(v___x_1856_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1865_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1861_; lean_object* v___x_1863_; 
v___x_1861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1861_, 0, v___x_1853_);
lean_ctor_set(v___x_1861_, 1, v_a_1857_);
if (v_isShared_1860_ == 0)
{
lean_ctor_set_tag(v___x_1859_, 1);
lean_ctor_set(v___x_1859_, 0, v___x_1861_);
v___x_1863_ = v___x_1859_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v___x_1861_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_msg_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_){
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v_msg_1866_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_);
lean_dec(v___y_1872_);
lean_dec_ref(v___y_1871_);
lean_dec(v___y_1870_);
lean_dec_ref(v___y_1869_);
lean_dec(v___y_1868_);
lean_dec_ref(v___y_1867_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(lean_object* v_ref_1875_, lean_object* v_msg_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_){
_start:
{
lean_object* v_toCold_1884_; lean_object* v_currRecDepth_1885_; lean_object* v_ref_1886_; uint8_t v_diag_1887_; uint8_t v_suppressElabErrors_1888_; lean_object* v_ref_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; 
v_toCold_1884_ = lean_ctor_get(v___y_1881_, 0);
v_currRecDepth_1885_ = lean_ctor_get(v___y_1881_, 1);
v_ref_1886_ = lean_ctor_get(v___y_1881_, 2);
v_diag_1887_ = lean_ctor_get_uint8(v___y_1881_, sizeof(void*)*3);
v_suppressElabErrors_1888_ = lean_ctor_get_uint8(v___y_1881_, sizeof(void*)*3 + 1);
v_ref_1889_ = l_Lean_replaceRef(v_ref_1875_, v_ref_1886_);
lean_inc(v_currRecDepth_1885_);
lean_inc_ref(v_toCold_1884_);
v___x_1890_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1890_, 0, v_toCold_1884_);
lean_ctor_set(v___x_1890_, 1, v_currRecDepth_1885_);
lean_ctor_set(v___x_1890_, 2, v_ref_1889_);
lean_ctor_set_uint8(v___x_1890_, sizeof(void*)*3, v_diag_1887_);
lean_ctor_set_uint8(v___x_1890_, sizeof(void*)*3 + 1, v_suppressElabErrors_1888_);
v___x_1891_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v_msg_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_, v___x_1890_, v___y_1882_);
lean_dec_ref_known(v___x_1890_, 3);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1892_, lean_object* v_msg_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_){
_start:
{
lean_object* v_res_1901_; 
v_res_1901_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_ref_1892_, v_msg_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_);
lean_dec(v___y_1899_);
lean_dec_ref(v___y_1898_);
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v_ref_1892_);
return v_res_1901_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(lean_object* v_docComment_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_){
_start:
{
lean_object* v___y_1914_; lean_object* v___y_1915_; lean_object* v___y_1916_; uint8_t v___y_1917_; uint8_t v___y_1918_; lean_object* v___y_1919_; lean_object* v___y_1920_; lean_object* v_currNamespace_1921_; lean_object* v_openDecls_1922_; lean_object* v___y_1923_; lean_object* v___y_1947_; lean_object* v___y_1948_; uint8_t v___y_1949_; lean_object* v___y_1950_; lean_object* v___y_1951_; lean_object* v___y_1952_; uint8_t v___y_1953_; lean_object* v___y_1954_; lean_object* v___y_1955_; lean_object* v___y_2004_; lean_object* v___y_2005_; lean_object* v___y_2006_; uint8_t v___y_2007_; lean_object* v___y_2008_; lean_object* v___y_2009_; lean_object* v___y_2010_; lean_object* v___y_2011_; lean_object* v___y_2012_; lean_object* v___y_2013_; lean_object* v___y_2014_; uint8_t v___y_2015_; lean_object* v___y_2016_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; uint8_t v___x_2069_; 
lean_inc(v_docComment_1902_);
v___x_2064_ = l_Lean_Syntax_getKind(v_docComment_1902_);
v___x_2065_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__0));
v___x_2066_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__1));
v___x_2067_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__2));
v___x_2068_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__4));
v___x_2069_ = lean_name_eq(v___x_2064_, v___x_2068_);
lean_dec(v___x_2064_);
if (v___x_2069_ == 0)
{
goto v___jp_2040_;
}
else
{
lean_object* v___x_2070_; lean_object* v___x_2071_; 
v___x_2070_ = lean_unsigned_to_nat(0u);
v___x_2071_ = l_Lean_Syntax_getArg(v_docComment_1902_, v___x_2070_);
if (lean_obj_tag(v___x_2071_) == 1)
{
lean_object* v_kind_2072_; 
v_kind_2072_ = lean_ctor_get(v___x_2071_, 1);
lean_inc(v_kind_2072_);
if (lean_obj_tag(v_kind_2072_) == 1)
{
lean_object* v_pre_2073_; 
v_pre_2073_ = lean_ctor_get(v_kind_2072_, 0);
lean_inc(v_pre_2073_);
if (lean_obj_tag(v_pre_2073_) == 1)
{
lean_object* v_pre_2074_; 
v_pre_2074_ = lean_ctor_get(v_pre_2073_, 0);
lean_inc(v_pre_2074_);
if (lean_obj_tag(v_pre_2074_) == 1)
{
lean_object* v_pre_2075_; 
v_pre_2075_ = lean_ctor_get(v_pre_2074_, 0);
lean_inc(v_pre_2075_);
if (lean_obj_tag(v_pre_2075_) == 1)
{
lean_object* v_pre_2076_; 
v_pre_2076_ = lean_ctor_get(v_pre_2075_, 0);
lean_inc(v_pre_2076_);
if (lean_obj_tag(v_pre_2076_) == 0)
{
lean_object* v_info_2077_; lean_object* v_args_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2102_; 
v_info_2077_ = lean_ctor_get(v___x_2071_, 0);
v_args_2078_ = lean_ctor_get(v___x_2071_, 2);
v_isSharedCheck_2102_ = !lean_is_exclusive(v___x_2071_);
if (v_isSharedCheck_2102_ == 0)
{
lean_object* v_unused_2103_; 
v_unused_2103_ = lean_ctor_get(v___x_2071_, 1);
lean_dec(v_unused_2103_);
v___x_2080_ = v___x_2071_;
v_isShared_2081_ = v_isSharedCheck_2102_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_args_2078_);
lean_inc(v_info_2077_);
lean_dec(v___x_2071_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2102_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v_str_2082_; lean_object* v_str_2083_; lean_object* v_str_2084_; lean_object* v_str_2085_; uint8_t v___x_2086_; 
v_str_2082_ = lean_ctor_get(v_kind_2072_, 1);
lean_inc_ref(v_str_2082_);
lean_dec_ref_known(v_kind_2072_, 2);
v_str_2083_ = lean_ctor_get(v_pre_2073_, 1);
lean_inc_ref(v_str_2083_);
lean_dec_ref_known(v_pre_2073_, 2);
v_str_2084_ = lean_ctor_get(v_pre_2074_, 1);
lean_inc_ref(v_str_2084_);
lean_dec_ref_known(v_pre_2074_, 2);
v_str_2085_ = lean_ctor_get(v_pre_2075_, 1);
lean_inc_ref(v_str_2085_);
lean_dec_ref_known(v_pre_2075_, 2);
v___x_2086_ = lean_string_dec_eq(v_str_2085_, v___x_2065_);
lean_dec_ref(v_str_2085_);
if (v___x_2086_ == 0)
{
lean_dec_ref(v_str_2084_);
lean_dec_ref(v_str_2083_);
lean_dec_ref(v_str_2082_);
lean_del_object(v___x_2080_);
lean_dec_ref(v_args_2078_);
lean_dec(v_info_2077_);
goto v___jp_2040_;
}
else
{
uint8_t v___x_2087_; 
v___x_2087_ = lean_string_dec_eq(v_str_2084_, v___x_2066_);
lean_dec_ref(v_str_2084_);
if (v___x_2087_ == 0)
{
lean_dec_ref(v_str_2083_);
lean_dec_ref(v_str_2082_);
lean_del_object(v___x_2080_);
lean_dec_ref(v_args_2078_);
lean_dec(v_info_2077_);
goto v___jp_2040_;
}
else
{
uint8_t v___x_2088_; 
v___x_2088_ = lean_string_dec_eq(v_str_2083_, v___x_2067_);
lean_dec_ref(v_str_2083_);
if (v___x_2088_ == 0)
{
lean_dec_ref(v_str_2082_);
lean_del_object(v___x_2080_);
lean_dec_ref(v_args_2078_);
lean_dec(v_info_2077_);
goto v___jp_2040_;
}
else
{
lean_object* v___x_2089_; uint8_t v___x_2090_; 
v___x_2089_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__5));
v___x_2090_ = lean_string_dec_eq(v_str_2082_, v___x_2089_);
lean_dec_ref(v_str_2082_);
if (v___x_2090_ == 0)
{
lean_del_object(v___x_2080_);
lean_dec_ref(v_args_2078_);
lean_dec(v_info_2077_);
goto v___jp_2040_;
}
else
{
lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2096_; 
lean_dec(v_docComment_1902_);
v___x_2091_ = l_Lean_Name_str___override(v_pre_2076_, v___x_2065_);
v___x_2092_ = l_Lean_Name_str___override(v___x_2091_, v___x_2066_);
v___x_2093_ = l_Lean_Name_str___override(v___x_2092_, v___x_2067_);
v___x_2094_ = l_Lean_Name_str___override(v___x_2093_, v___x_2089_);
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 1, v___x_2094_);
v___x_2096_ = v___x_2080_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v_info_2077_);
lean_ctor_set(v_reuseFailAlloc_2101_, 1, v___x_2094_);
lean_ctor_set(v_reuseFailAlloc_2101_, 2, v_args_2078_);
v___x_2096_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2097_ = lean_unsigned_to_nat(1u);
v___x_2098_ = l_Lean_Syntax_getArg(v___x_2096_, v___x_2097_);
lean_dec_ref(v___x_2096_);
v___x_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2098_);
v___x_2100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2099_);
return v___x_2100_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_2075_, 2);
lean_dec(v_pre_2076_);
lean_dec_ref_known(v_pre_2074_, 2);
lean_dec_ref_known(v_pre_2073_, 2);
lean_dec_ref_known(v_kind_2072_, 2);
lean_dec_ref_known(v___x_2071_, 3);
goto v___jp_2040_;
}
}
else
{
lean_dec(v_pre_2075_);
lean_dec_ref_known(v_pre_2074_, 2);
lean_dec_ref_known(v_pre_2073_, 2);
lean_dec_ref_known(v_kind_2072_, 2);
lean_dec_ref_known(v___x_2071_, 3);
goto v___jp_2040_;
}
}
else
{
lean_dec_ref_known(v_pre_2073_, 2);
lean_dec(v_pre_2074_);
lean_dec_ref_known(v_kind_2072_, 2);
lean_dec_ref_known(v___x_2071_, 3);
goto v___jp_2040_;
}
}
else
{
lean_dec(v_pre_2073_);
lean_dec_ref_known(v_kind_2072_, 2);
lean_dec_ref_known(v___x_2071_, 3);
goto v___jp_2040_;
}
}
else
{
lean_dec_ref_known(v___x_2071_, 3);
lean_dec(v_kind_2072_);
goto v___jp_2040_;
}
}
else
{
lean_dec(v___x_2071_);
goto v___jp_2040_;
}
}
v___jp_1910_:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1911_ = lean_box(0);
v___x_1912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1912_, 0, v___x_1911_);
return v___x_1912_;
}
v___jp_1913_:
{
lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v_env_1928_; lean_object* v_nextMacroScope_1929_; lean_object* v_ngen_1930_; lean_object* v_auxDeclNGen_1931_; lean_object* v_traceState_1932_; lean_object* v_cache_1933_; lean_object* v_messages_1934_; lean_object* v_infoState_1935_; lean_object* v_snapshotTasks_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1945_; 
lean_inc(v_openDecls_1922_);
lean_inc(v_currNamespace_1921_);
v___x_1924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1924_, 0, v_currNamespace_1921_);
lean_ctor_set(v___x_1924_, 1, v_openDecls_1922_);
v___x_1925_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1925_, 0, v___x_1924_);
lean_ctor_set(v___x_1925_, 1, v___y_1919_);
lean_inc(v___y_1914_);
lean_inc_ref(v___y_1916_);
v___x_1926_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1926_, 0, v___y_1916_);
lean_ctor_set(v___x_1926_, 1, v___y_1920_);
lean_ctor_set(v___x_1926_, 2, v___y_1914_);
lean_ctor_set(v___x_1926_, 3, v___y_1915_);
lean_ctor_set(v___x_1926_, 4, v___x_1925_);
lean_ctor_set_uint8(v___x_1926_, sizeof(void*)*5, v___y_1918_);
lean_ctor_set_uint8(v___x_1926_, sizeof(void*)*5 + 1, v___y_1917_);
lean_ctor_set_uint8(v___x_1926_, sizeof(void*)*5 + 2, v___y_1918_);
v___x_1927_ = lean_st_ref_take(v___y_1923_);
v_env_1928_ = lean_ctor_get(v___x_1927_, 0);
v_nextMacroScope_1929_ = lean_ctor_get(v___x_1927_, 1);
v_ngen_1930_ = lean_ctor_get(v___x_1927_, 2);
v_auxDeclNGen_1931_ = lean_ctor_get(v___x_1927_, 3);
v_traceState_1932_ = lean_ctor_get(v___x_1927_, 4);
v_cache_1933_ = lean_ctor_get(v___x_1927_, 5);
v_messages_1934_ = lean_ctor_get(v___x_1927_, 6);
v_infoState_1935_ = lean_ctor_get(v___x_1927_, 7);
v_snapshotTasks_1936_ = lean_ctor_get(v___x_1927_, 8);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1927_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1938_ = v___x_1927_;
v_isShared_1939_ = v_isSharedCheck_1945_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_snapshotTasks_1936_);
lean_inc(v_infoState_1935_);
lean_inc(v_messages_1934_);
lean_inc(v_cache_1933_);
lean_inc(v_traceState_1932_);
lean_inc(v_auxDeclNGen_1931_);
lean_inc(v_ngen_1930_);
lean_inc(v_nextMacroScope_1929_);
lean_inc(v_env_1928_);
lean_dec(v___x_1927_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1945_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1940_; lean_object* v___x_1942_; 
v___x_1940_ = l_Lean_MessageLog_add(v___x_1926_, v_messages_1934_);
if (v_isShared_1939_ == 0)
{
lean_ctor_set(v___x_1938_, 6, v___x_1940_);
v___x_1942_ = v___x_1938_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_env_1928_);
lean_ctor_set(v_reuseFailAlloc_1944_, 1, v_nextMacroScope_1929_);
lean_ctor_set(v_reuseFailAlloc_1944_, 2, v_ngen_1930_);
lean_ctor_set(v_reuseFailAlloc_1944_, 3, v_auxDeclNGen_1931_);
lean_ctor_set(v_reuseFailAlloc_1944_, 4, v_traceState_1932_);
lean_ctor_set(v_reuseFailAlloc_1944_, 5, v_cache_1933_);
lean_ctor_set(v_reuseFailAlloc_1944_, 6, v___x_1940_);
lean_ctor_set(v_reuseFailAlloc_1944_, 7, v_infoState_1935_);
lean_ctor_set(v_reuseFailAlloc_1944_, 8, v_snapshotTasks_1936_);
v___x_1942_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
lean_object* v___x_1943_; 
v___x_1943_ = lean_st_ref_put(v___y_1923_, v___x_1942_);
goto v___jp_1910_;
}
}
}
v___jp_1946_:
{
lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; uint8_t v___x_1959_; 
lean_inc_ref(v___y_1955_);
v___x_1956_ = l_Lean_Parser_ParserState_allErrors(v___y_1955_);
v___x_1957_ = lean_array_get_size(v___x_1956_);
v___x_1958_ = lean_unsigned_to_nat(0u);
v___x_1959_ = lean_nat_dec_eq(v___x_1957_, v___x_1958_);
if (v___x_1959_ == 0)
{
lean_object* v___x_1960_; size_t v_sz_1961_; size_t v___x_1962_; lean_object* v___x_1963_; 
lean_dec_ref(v___y_1955_);
lean_dec_ref(v___y_1954_);
v___x_1960_ = lean_box(0);
v_sz_1961_ = lean_array_size(v___x_1956_);
v___x_1962_ = ((size_t)0ULL);
lean_inc_ref(v___y_1952_);
v___x_1963_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(v___y_1952_, v___x_1957_, v___x_1956_, v_sz_1961_, v___x_1962_, v___x_1960_, v___y_1907_, v___y_1908_);
lean_dec_ref(v___x_1956_);
if (lean_obj_tag(v___x_1963_) == 0)
{
lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1971_; 
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1963_);
if (v_isSharedCheck_1971_ == 0)
{
lean_object* v_unused_1972_; 
v_unused_1972_ = lean_ctor_get(v___x_1963_, 0);
lean_dec(v_unused_1972_);
v___x_1965_ = v___x_1963_;
v_isShared_1966_ = v_isSharedCheck_1971_;
goto v_resetjp_1964_;
}
else
{
lean_dec(v___x_1963_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1971_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v___x_1967_; lean_object* v___x_1969_; 
v___x_1967_ = lean_box(0);
if (v_isShared_1966_ == 0)
{
lean_ctor_set(v___x_1965_, 0, v___x_1967_);
v___x_1969_ = v___x_1965_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v___x_1967_);
v___x_1969_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
return v___x_1969_;
}
}
}
else
{
lean_object* v_a_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1980_; 
v_a_1973_ = lean_ctor_get(v___x_1963_, 0);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1963_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1975_ = v___x_1963_;
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_a_1973_);
lean_dec(v___x_1963_);
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
else
{
lean_object* v_stxStack_1981_; lean_object* v_pos_1982_; uint8_t v___x_1983_; 
lean_dec_ref(v___x_1956_);
v_stxStack_1981_ = lean_ctor_get(v___y_1955_, 0);
lean_inc_ref(v_stxStack_1981_);
v_pos_1982_ = lean_ctor_get(v___y_1955_, 2);
lean_inc(v_pos_1982_);
lean_dec_ref(v___y_1955_);
v___x_1983_ = l_Lean_Parser_InputContext_atEnd(v___y_1954_, v_pos_1982_);
lean_dec_ref(v___y_1954_);
if (v___x_1983_ == 0)
{
lean_object* v___x_1984_; lean_object* v___x_1985_; uint8_t v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; uint32_t v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; 
lean_dec_ref(v_stxStack_1981_);
lean_inc_ref(v___y_1952_);
v___x_1984_ = l_Lean_FileMap_toPosition(v___y_1952_, v_pos_1982_);
v___x_1985_ = lean_box(0);
v___x_1986_ = 2;
v___x_1987_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_1988_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__0));
v___x_1989_ = lean_string_utf8_get(v___y_1951_, v_pos_1982_);
lean_dec(v_pos_1982_);
v___x_1990_ = lean_string_push(v___x_1987_, v___x_1989_);
v___x_1991_ = lean_string_append(v___x_1988_, v___x_1990_);
lean_dec_ref(v___x_1990_);
v___x_1992_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__1));
v___x_1993_ = lean_string_append(v___x_1991_, v___x_1992_);
v___x_1994_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1993_);
v___x_1995_ = l_Lean_MessageData_ofFormat(v___x_1994_);
if (v___y_1953_ == 0)
{
v___y_1914_ = v___x_1985_;
v___y_1915_ = v___x_1987_;
v___y_1916_ = v___y_1950_;
v___y_1917_ = v___x_1986_;
v___y_1918_ = v___x_1983_;
v___y_1919_ = v___x_1995_;
v___y_1920_ = v___x_1984_;
v_currNamespace_1921_ = v___y_1948_;
v_openDecls_1922_ = v___y_1947_;
v___y_1923_ = v___y_1908_;
goto v___jp_1913_;
}
else
{
lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___f_1998_; uint8_t v___x_1999_; 
v___x_1996_ = lean_box(v___y_1949_);
v___x_1997_ = lean_box(v___x_1983_);
v___f_1998_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1998_, 0, v___x_1996_);
lean_closure_set(v___f_1998_, 1, v___x_1997_);
lean_inc_ref(v___x_1995_);
v___x_1999_ = l_Lean_MessageData_hasTag(v___f_1998_, v___x_1995_);
if (v___x_1999_ == 0)
{
lean_dec_ref(v___x_1995_);
lean_dec_ref(v___x_1984_);
goto v___jp_1910_;
}
else
{
v___y_1914_ = v___x_1985_;
v___y_1915_ = v___x_1987_;
v___y_1916_ = v___y_1950_;
v___y_1917_ = v___x_1986_;
v___y_1918_ = v___x_1983_;
v___y_1919_ = v___x_1995_;
v___y_1920_ = v___x_1984_;
v_currNamespace_1921_ = v___y_1948_;
v_openDecls_1922_ = v___y_1947_;
v___y_1923_ = v___y_1908_;
goto v___jp_1913_;
}
}
}
else
{
lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; 
lean_dec(v_pos_1982_);
v___x_2000_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1981_);
lean_dec_ref(v_stxStack_1981_);
v___x_2001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2001_, 0, v___x_2000_);
v___x_2002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2002_, 0, v___x_2001_);
return v___x_2002_;
}
}
}
v___jp_2003_:
{
lean_object* v___x_2017_; lean_object* v_env_2018_; lean_object* v_ictx_2019_; lean_object* v_pmctx_2020_; lean_object* v_blockCtxt_2021_; lean_object* v___x_2022_; lean_object* v_s_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v_s_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; uint8_t v___x_2030_; 
v___x_2017_ = lean_st_ref_get(v___y_1908_);
v_env_2018_ = lean_ctor_get(v___x_2017_, 0);
lean_inc_ref_n(v_env_2018_, 2);
lean_dec(v___x_2017_);
lean_inc(v___y_2016_);
lean_inc_ref_n(v___y_2014_, 2);
lean_inc_ref(v___y_2010_);
lean_inc_ref(v___y_2005_);
v_ictx_2019_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_ictx_2019_, 0, v___y_2005_);
lean_ctor_set(v_ictx_2019_, 1, v___y_2010_);
lean_ctor_set(v_ictx_2019_, 2, v___y_2014_);
lean_ctor_set(v_ictx_2019_, 3, v___y_2016_);
lean_inc(v___y_2008_);
lean_inc(v___y_2013_);
lean_inc_ref(v___y_2011_);
v_pmctx_2020_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_pmctx_2020_, 0, v_env_2018_);
lean_ctor_set(v_pmctx_2020_, 1, v___y_2011_);
lean_ctor_set(v_pmctx_2020_, 2, v___y_2013_);
lean_ctor_set(v_pmctx_2020_, 3, v___y_2008_);
lean_inc(v___y_2012_);
v_blockCtxt_2021_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v___y_2014_, v___y_2012_, v___y_2016_);
v___x_2022_ = l_Lean_Parser_mkParserState(v___y_2005_);
lean_inc_ref(v___x_2022_);
v_s_2023_ = l_Lean_Parser_ParserState_setPos(v___x_2022_, v___y_2012_);
v___x_2024_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document), 3, 1);
lean_closure_set(v___x_2024_, 0, v_blockCtxt_2021_);
v___x_2025_ = l_Lean_Parser_getTokenTable(v_env_2018_);
lean_inc_ref(v___x_2025_);
lean_inc_ref(v_pmctx_2020_);
lean_inc_ref(v_ictx_2019_);
v_s_2026_ = l_Lean_Parser_ParserFn_run(v___x_2024_, v_ictx_2019_, v_pmctx_2020_, v___x_2025_, v_s_2023_);
lean_inc_ref(v_s_2026_);
v___x_2027_ = l_Lean_Parser_ParserState_allErrors(v_s_2026_);
v___x_2028_ = lean_array_get_size(v___x_2027_);
lean_dec_ref(v___x_2027_);
v___x_2029_ = lean_unsigned_to_nat(0u);
v___x_2030_ = lean_nat_dec_eq(v___x_2028_, v___x_2029_);
if (v___x_2030_ == 0)
{
lean_dec_ref(v___x_2025_);
lean_dec_ref(v___x_2022_);
lean_dec_ref_known(v_pmctx_2020_, 4);
lean_dec(v___y_2009_);
v___y_1947_ = v___y_2004_;
v___y_1948_ = v___y_2006_;
v___y_1949_ = v___y_2007_;
v___y_1950_ = v___y_2010_;
v___y_1951_ = v___y_2005_;
v___y_1952_ = v___y_2014_;
v___y_1953_ = v___y_2015_;
v___y_1954_ = v_ictx_2019_;
v___y_1955_ = v_s_2026_;
goto v___jp_1946_;
}
else
{
lean_object* v_pos_2031_; uint8_t v___x_2032_; 
v_pos_2031_ = lean_ctor_get(v_s_2026_, 2);
lean_inc(v_pos_2031_);
v___x_2032_ = l_Lean_Parser_InputContext_atEnd(v_ictx_2019_, v_pos_2031_);
if (v___x_2032_ == 0)
{
lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
lean_dec_ref(v_s_2026_);
v___x_2033_ = lean_box(0);
v___x_2034_ = lean_box(0);
v___x_2035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2035_, 0, v___y_2009_);
lean_ctor_set(v___x_2035_, 1, v___x_2029_);
v___x_2036_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2036_, 0, v___x_2029_);
lean_ctor_set(v___x_2036_, 1, v___x_2033_);
lean_ctor_set(v___x_2036_, 2, v___x_2034_);
lean_ctor_set(v___x_2036_, 3, v___x_2035_);
lean_ctor_set(v___x_2036_, 4, v___x_2029_);
v___x_2037_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_block), 3, 1);
lean_closure_set(v___x_2037_, 0, v___x_2036_);
v___x_2038_ = l_Lean_Parser_ParserState_setPos(v___x_2022_, v_pos_2031_);
lean_inc_ref(v_ictx_2019_);
v___x_2039_ = l_Lean_Parser_ParserFn_run(v___x_2037_, v_ictx_2019_, v_pmctx_2020_, v___x_2025_, v___x_2038_);
v___y_1947_ = v___y_2004_;
v___y_1948_ = v___y_2006_;
v___y_1949_ = v___y_2007_;
v___y_1950_ = v___y_2010_;
v___y_1951_ = v___y_2005_;
v___y_1952_ = v___y_2014_;
v___y_1953_ = v___y_2015_;
v___y_1954_ = v_ictx_2019_;
v___y_1955_ = v___x_2039_;
goto v___jp_1946_;
}
else
{
lean_dec(v_pos_2031_);
lean_dec_ref(v___x_2025_);
lean_dec_ref(v___x_2022_);
lean_dec_ref_known(v_pmctx_2020_, 4);
lean_dec(v___y_2009_);
v___y_1947_ = v___y_2004_;
v___y_1948_ = v___y_2006_;
v___y_1949_ = v___y_2007_;
v___y_1950_ = v___y_2010_;
v___y_1951_ = v___y_2005_;
v___y_1952_ = v___y_2014_;
v___y_1953_ = v___y_2015_;
v___y_1954_ = v_ictx_2019_;
v___y_1955_ = v_s_2026_;
goto v___jp_1946_;
}
}
}
v___jp_2040_:
{
lean_object* v_toCold_2041_; uint8_t v_suppressElabErrors_2042_; lean_object* v_fileName_2043_; lean_object* v_fileMap_2044_; lean_object* v_options_2045_; lean_object* v_currNamespace_2046_; lean_object* v_openDecls_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; uint8_t v___x_2050_; lean_object* v___x_2051_; 
v_toCold_2041_ = lean_ctor_get(v___y_1907_, 0);
v_suppressElabErrors_2042_ = lean_ctor_get_uint8(v___y_1907_, sizeof(void*)*3 + 1);
v_fileName_2043_ = lean_ctor_get(v_toCold_2041_, 0);
v_fileMap_2044_ = lean_ctor_get(v_toCold_2041_, 1);
v_options_2045_ = lean_ctor_get(v_toCold_2041_, 2);
v_currNamespace_2046_ = lean_ctor_get(v_toCold_2041_, 4);
v_openDecls_2047_ = lean_ctor_get(v_toCold_2041_, 5);
v___x_2048_ = lean_unsigned_to_nat(1u);
v___x_2049_ = l_Lean_Syntax_getArg(v_docComment_1902_, v___x_2048_);
v___x_2050_ = 1;
v___x_2051_ = l_Lean_Syntax_getPos_x3f(v___x_2049_, v___x_2050_);
if (lean_obj_tag(v___x_2051_) == 1)
{
lean_object* v_val_2052_; lean_object* v___x_2053_; 
v_val_2052_ = lean_ctor_get(v___x_2051_, 0);
lean_inc(v_val_2052_);
lean_dec_ref_known(v___x_2051_, 1);
v___x_2053_ = l_Lean_Syntax_getTailPos_x3f(v___x_2049_, v___x_2050_);
lean_dec(v___x_2049_);
if (lean_obj_tag(v___x_2053_) == 1)
{
lean_object* v_val_2054_; lean_object* v_source_2055_; lean_object* v___x_2056_; lean_object* v_endPos_2057_; lean_object* v___x_2058_; uint8_t v___x_2059_; 
lean_dec(v_docComment_1902_);
v_val_2054_ = lean_ctor_get(v___x_2053_, 0);
lean_inc(v_val_2054_);
lean_dec_ref_known(v___x_2053_, 1);
v_source_2055_ = lean_ctor_get(v_fileMap_2044_, 0);
v___x_2056_ = lean_string_utf8_prev(v_source_2055_, v_val_2054_);
lean_dec(v_val_2054_);
v_endPos_2057_ = lean_string_utf8_prev(v_source_2055_, v___x_2056_);
lean_dec(v___x_2056_);
v___x_2058_ = lean_string_utf8_byte_size(v_source_2055_);
v___x_2059_ = lean_nat_dec_le(v_endPos_2057_, v___x_2058_);
if (v___x_2059_ == 0)
{
lean_dec(v_endPos_2057_);
v___y_2004_ = v_openDecls_2047_;
v___y_2005_ = v_source_2055_;
v___y_2006_ = v_currNamespace_2046_;
v___y_2007_ = v_suppressElabErrors_2042_;
v___y_2008_ = v_openDecls_2047_;
v___y_2009_ = v___x_2048_;
v___y_2010_ = v_fileName_2043_;
v___y_2011_ = v_options_2045_;
v___y_2012_ = v_val_2052_;
v___y_2013_ = v_currNamespace_2046_;
v___y_2014_ = v_fileMap_2044_;
v___y_2015_ = v_suppressElabErrors_2042_;
v___y_2016_ = v___x_2058_;
goto v___jp_2003_;
}
else
{
v___y_2004_ = v_openDecls_2047_;
v___y_2005_ = v_source_2055_;
v___y_2006_ = v_currNamespace_2046_;
v___y_2007_ = v_suppressElabErrors_2042_;
v___y_2008_ = v_openDecls_2047_;
v___y_2009_ = v___x_2048_;
v___y_2010_ = v_fileName_2043_;
v___y_2011_ = v_options_2045_;
v___y_2012_ = v_val_2052_;
v___y_2013_ = v_currNamespace_2046_;
v___y_2014_ = v_fileMap_2044_;
v___y_2015_ = v_suppressElabErrors_2042_;
v___y_2016_ = v_endPos_2057_;
goto v___jp_2003_;
}
}
else
{
lean_object* v___x_2060_; lean_object* v___x_2061_; 
lean_dec(v___x_2053_);
lean_dec(v_val_2052_);
v___x_2060_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_2061_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_docComment_1902_, v___x_2060_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_);
lean_dec(v_docComment_1902_);
return v___x_2061_;
}
}
else
{
lean_object* v___x_2062_; lean_object* v___x_2063_; 
lean_dec(v___x_2051_);
lean_dec(v___x_2049_);
v___x_2062_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_2063_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_docComment_1902_, v___x_2062_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_);
lean_dec(v_docComment_1902_);
return v___x_2063_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___boxed(lean_object* v_docComment_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_){
_start:
{
lean_object* v_res_2112_; 
v_res_2112_ = l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(v_docComment_2104_, v___y_2105_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_);
lean_dec(v___y_2110_);
lean_dec_ref(v___y_2109_);
lean_dec(v___y_2108_);
lean_dec_ref(v___y_2107_);
lean_dec(v___y_2106_);
lean_dec_ref(v___y_2105_);
return v_res_2112_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocString(lean_object* v_declName_2126_, lean_object* v_binders_2127_, lean_object* v_docComment_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_){
_start:
{
lean_object* v___x_2136_; lean_object* v_body_2137_; uint8_t v___x_2138_; lean_object* v___x_2139_; 
v___x_2136_ = lean_unsigned_to_nat(1u);
v_body_2137_ = l_Lean_Syntax_getArg(v_docComment_2128_, v___x_2136_);
v___x_2138_ = 1;
v___x_2139_ = l_Lean_Syntax_getPos_x3f(v_body_2137_, v___x_2138_);
if (lean_obj_tag(v___x_2139_) == 0)
{
lean_object* v___x_2140_; uint8_t v___x_2141_; 
v___x_2140_ = ((lean_object*)(l_Lean_versoDocString___closed__0));
lean_inc(v_body_2137_);
v___x_2141_ = l_Lean_Syntax_isOfKind(v_body_2137_, v___x_2140_);
if (v___x_2141_ == 0)
{
lean_object* v___x_2142_; lean_object* v___x_2143_; 
lean_dec(v_body_2137_);
v___x_2142_ = l_Lean_TSyntax_getDocString(v_docComment_2128_);
lean_dec(v_docComment_2128_);
v___x_2143_ = l_Lean_versoDocStringOfText(v_declName_2126_, v_binders_2127_, v___x_2142_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
return v___x_2143_;
}
else
{
lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; uint8_t v___x_2147_; 
lean_dec(v_docComment_2128_);
v___x_2144_ = lean_unsigned_to_nat(0u);
v___x_2145_ = l_Lean_Syntax_getArg(v_body_2137_, v___x_2144_);
lean_dec(v_body_2137_);
v___x_2146_ = ((lean_object*)(l_Lean_versoDocString___closed__4));
lean_inc(v___x_2145_);
v___x_2147_ = l_Lean_Syntax_isOfKind(v___x_2145_, v___x_2146_);
if (v___x_2147_ == 0)
{
lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; 
v___x_2148_ = l_Lean_Syntax_getArgs(v___x_2145_);
lean_dec(v___x_2145_);
v___x_2149_ = lean_box(0);
v___x_2150_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(v_declName_2126_, v_binders_2127_, v___x_2148_, v___x_2149_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
return v___x_2150_;
}
else
{
lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2151_ = l_Lean_Syntax_getArg(v___x_2145_, v___x_2144_);
lean_dec(v___x_2145_);
v___x_2152_ = l_Lean_Syntax_getAtomVal(v___x_2151_);
lean_dec(v___x_2151_);
v___x_2153_ = l_Lean_versoDocStringOfText(v_declName_2126_, v_binders_2127_, v___x_2152_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
return v___x_2153_;
}
}
}
else
{
lean_object* v___x_2154_; 
lean_dec_ref_known(v___x_2139_, 1);
lean_dec(v_body_2137_);
v___x_2154_ = l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(v_docComment_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
if (lean_obj_tag(v___x_2154_) == 0)
{
lean_object* v_a_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2205_; 
v_a_2155_ = lean_ctor_get(v___x_2154_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v___x_2154_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2157_ = v___x_2154_;
v_isShared_2158_ = v_isSharedCheck_2205_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_a_2155_);
lean_dec(v___x_2154_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2205_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
if (lean_obj_tag(v_a_2155_) == 1)
{
lean_object* v_val_2159_; lean_object* v___x_2160_; size_t v_sz_2161_; size_t v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; uint8_t v___x_2165_; lean_object* v___x_2166_; 
lean_del_object(v___x_2157_);
v_val_2159_ = lean_ctor_get(v_a_2155_, 0);
lean_inc(v_val_2159_);
lean_dec_ref_known(v_a_2155_, 1);
v___x_2160_ = l_Lean_Syntax_getArgs(v_val_2159_);
lean_dec(v_val_2159_);
v_sz_2161_ = lean_array_size(v___x_2160_);
v___x_2162_ = ((size_t)0ULL);
v___x_2163_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(v_sz_2161_, v___x_2162_, v___x_2160_);
v___x_2164_ = lean_alloc_closure((void*)(l_Lean_Doc_elabBlocks___boxed), 11, 1);
lean_closure_set(v___x_2164_, 0, v___x_2163_);
v___x_2165_ = 0;
v___x_2166_ = l_Lean_Doc_DocM_exec___redArg(v_declName_2126_, v_binders_2127_, v___x_2164_, v___x_2165_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
if (lean_obj_tag(v___x_2166_) == 0)
{
lean_object* v_a_2167_; lean_object* v___x_2169_; uint8_t v_isShared_2170_; uint8_t v_isSharedCheck_2192_; 
v_a_2167_ = lean_ctor_get(v___x_2166_, 0);
v_isSharedCheck_2192_ = !lean_is_exclusive(v___x_2166_);
if (v_isSharedCheck_2192_ == 0)
{
v___x_2169_ = v___x_2166_;
v_isShared_2170_ = v_isSharedCheck_2192_;
goto v_resetjp_2168_;
}
else
{
lean_inc(v_a_2167_);
lean_dec(v___x_2166_);
v___x_2169_ = lean_box(0);
v_isShared_2170_ = v_isSharedCheck_2192_;
goto v_resetjp_2168_;
}
v_resetjp_2168_:
{
lean_object* v_fst_2171_; lean_object* v_snd_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2191_; 
v_fst_2171_ = lean_ctor_get(v_a_2167_, 0);
v_snd_2172_ = lean_ctor_get(v_a_2167_, 1);
v_isSharedCheck_2191_ = !lean_is_exclusive(v_a_2167_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2174_ = v_a_2167_;
v_isShared_2175_ = v_isSharedCheck_2191_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_snd_2172_);
lean_inc(v_fst_2171_);
lean_dec(v_a_2167_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2191_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v_fst_2176_; lean_object* v_snd_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2190_; 
v_fst_2176_ = lean_ctor_get(v_fst_2171_, 0);
v_snd_2177_ = lean_ctor_get(v_fst_2171_, 1);
v_isSharedCheck_2190_ = !lean_is_exclusive(v_fst_2171_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2179_ = v_fst_2171_;
v_isShared_2180_ = v_isSharedCheck_2190_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_snd_2177_);
lean_inc(v_fst_2176_);
lean_dec(v_fst_2171_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2190_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v___x_2182_; 
if (v_isShared_2180_ == 0)
{
v___x_2182_ = v___x_2179_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v_fst_2176_);
lean_ctor_set(v_reuseFailAlloc_2189_, 1, v_snd_2177_);
v___x_2182_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
lean_object* v___x_2184_; 
if (v_isShared_2175_ == 0)
{
lean_ctor_set(v___x_2174_, 0, v___x_2182_);
v___x_2184_ = v___x_2174_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v___x_2182_);
lean_ctor_set(v_reuseFailAlloc_2188_, 1, v_snd_2172_);
v___x_2184_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
lean_object* v___x_2186_; 
if (v_isShared_2170_ == 0)
{
lean_ctor_set(v___x_2169_, 0, v___x_2184_);
v___x_2186_ = v___x_2169_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v___x_2184_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
return v___x_2186_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2193_; lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2200_; 
v_a_2193_ = lean_ctor_get(v___x_2166_, 0);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2166_);
if (v_isSharedCheck_2200_ == 0)
{
v___x_2195_ = v___x_2166_;
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
else
{
lean_inc(v_a_2193_);
lean_dec(v___x_2166_);
v___x_2195_ = lean_box(0);
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
v_resetjp_2194_:
{
lean_object* v___x_2198_; 
if (v_isShared_2196_ == 0)
{
v___x_2198_ = v___x_2195_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v_a_2193_);
v___x_2198_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
return v___x_2198_;
}
}
}
}
else
{
lean_object* v___x_2201_; lean_object* v___x_2203_; 
lean_dec(v_a_2155_);
lean_dec(v_binders_2127_);
lean_dec(v_declName_2126_);
v___x_2201_ = ((lean_object*)(l_Lean_versoDocStringOfText___closed__5));
if (v_isShared_2158_ == 0)
{
lean_ctor_set(v___x_2157_, 0, v___x_2201_);
v___x_2203_ = v___x_2157_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v___x_2201_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
}
}
else
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2213_; 
lean_dec(v_binders_2127_);
lean_dec(v_declName_2126_);
v_a_2206_ = lean_ctor_get(v___x_2154_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2154_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2208_ = v___x_2154_;
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2154_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2209_ == 0)
{
v___x_2211_ = v___x_2208_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_a_2206_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
return v___x_2211_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocString___boxed(lean_object* v_declName_2214_, lean_object* v_binders_2215_, lean_object* v_docComment_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_){
_start:
{
lean_object* v_res_2224_; 
v_res_2224_ = l_Lean_versoDocString(v_declName_2214_, v_binders_2215_, v_docComment_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
lean_dec(v___y_2220_);
lean_dec_ref(v___y_2219_);
lean_dec(v___y_2218_);
lean_dec_ref(v___y_2217_);
return v_res_2224_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0(lean_object* v___x_2225_, lean_object* v___x_2226_, lean_object* v_as_2227_, size_t v_sz_2228_, size_t v_i_2229_, lean_object* v_b_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_){
_start:
{
lean_object* v___x_2238_; 
v___x_2238_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(v___x_2225_, v___x_2226_, v_as_2227_, v_sz_2228_, v_i_2229_, v_b_2230_, v___y_2235_, v___y_2236_);
return v___x_2238_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___boxed(lean_object* v___x_2239_, lean_object* v___x_2240_, lean_object* v_as_2241_, lean_object* v_sz_2242_, lean_object* v_i_2243_, lean_object* v_b_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_){
_start:
{
size_t v_sz_boxed_2252_; size_t v_i_boxed_2253_; lean_object* v_res_2254_; 
v_sz_boxed_2252_ = lean_unbox_usize(v_sz_2242_);
lean_dec(v_sz_2242_);
v_i_boxed_2253_ = lean_unbox_usize(v_i_2243_);
lean_dec(v_i_2243_);
v_res_2254_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0(v___x_2239_, v___x_2240_, v_as_2241_, v_sz_boxed_2252_, v_i_boxed_2253_, v_b_2244_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
lean_dec_ref(v_as_2241_);
lean_dec(v___x_2240_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1(lean_object* v_00_u03b1_2255_, lean_object* v_ref_2256_, lean_object* v_msg_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_){
_start:
{
lean_object* v___x_2265_; 
v___x_2265_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_ref_2256_, v_msg_2257_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_, v___y_2262_, v___y_2263_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2266_, lean_object* v_ref_2267_, lean_object* v_msg_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1(v_00_u03b1_2266_, v_ref_2267_, v_msg_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_);
lean_dec(v___y_2274_);
lean_dec_ref(v___y_2273_);
lean_dec(v___y_2272_);
lean_dec_ref(v___y_2271_);
lean_dec(v___y_2270_);
lean_dec_ref(v___y_2269_);
lean_dec(v_ref_2267_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_2277_, lean_object* v_msg_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_){
_start:
{
lean_object* v___x_2286_; 
v___x_2286_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v_msg_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_);
return v___x_2286_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_2287_, lean_object* v_msg_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2(v_00_u03b1_2287_, v_msg_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
lean_dec(v___y_2294_);
lean_dec_ref(v___y_2293_);
lean_dec(v___y_2292_);
lean_dec_ref(v___y_2291_);
lean_dec(v___y_2290_);
lean_dec_ref(v___y_2289_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(lean_object* v_msgData_2297_, lean_object* v_macroStack_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_){
_start:
{
lean_object* v___x_2306_; 
v___x_2306_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg(v_msgData_2297_, v_macroStack_2298_, v___y_2303_);
return v___x_2306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_msgData_2307_, lean_object* v_macroStack_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_){
_start:
{
lean_object* v_res_2316_; 
v_res_2316_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(v_msgData_2307_, v_macroStack_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_);
lean_dec(v___y_2314_);
lean_dec_ref(v___y_2313_);
lean_dec(v___y_2312_);
lean_dec_ref(v___y_2311_);
lean_dec(v___y_2310_);
lean_dec_ref(v___y_2309_);
return v_res_2316_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoModDocString(lean_object* v_range_2317_, lean_object* v_doc_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_){
_start:
{
lean_object* v___x_2326_; lean_object* v___y_2328_; lean_object* v___y_2329_; lean_object* v___y_2334_; lean_object* v_env_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; 
v___x_2326_ = lean_st_ref_get(v___y_2324_);
v_env_2341_ = lean_ctor_get(v___x_2326_, 0);
lean_inc_ref(v_env_2341_);
lean_dec(v___x_2326_);
v___x_2342_ = l_Lean_getMainVersoModuleDocs(v_env_2341_);
v___x_2343_ = l_Lean_VersoModuleDocs_terminalNesting(v___x_2342_);
lean_dec_ref(v___x_2342_);
if (lean_obj_tag(v___x_2343_) == 0)
{
v___y_2334_ = v___x_2343_;
goto v___jp_2333_;
}
else
{
lean_object* v_val_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2353_; 
v_val_2344_ = lean_ctor_get(v___x_2343_, 0);
v_isSharedCheck_2353_ = !lean_is_exclusive(v___x_2343_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2346_ = v___x_2343_;
v_isShared_2347_ = v_isSharedCheck_2353_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_val_2344_);
lean_dec(v___x_2343_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2353_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2351_; 
v___x_2348_ = lean_unsigned_to_nat(1u);
v___x_2349_ = lean_nat_add(v_val_2344_, v___x_2348_);
lean_dec(v_val_2344_);
if (v_isShared_2347_ == 0)
{
lean_ctor_set(v___x_2346_, 0, v___x_2349_);
v___x_2351_ = v___x_2346_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v___x_2349_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
v___y_2334_ = v___x_2351_;
goto v___jp_2333_;
}
}
}
v___jp_2327_:
{
lean_object* v___x_2330_; uint8_t v___x_2331_; lean_object* v___x_2332_; 
v___x_2330_ = lean_alloc_closure((void*)(l_Lean_Doc_elabModSnippet___boxed), 13, 3);
lean_closure_set(v___x_2330_, 0, v_range_2317_);
lean_closure_set(v___x_2330_, 1, v___y_2328_);
lean_closure_set(v___x_2330_, 2, v___y_2329_);
v___x_2331_ = 0;
v___x_2332_ = l_Lean_Doc_DocM_execForModule___redArg(v___x_2330_, v___x_2331_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_);
return v___x_2332_;
}
v___jp_2333_:
{
lean_object* v___x_2335_; size_t v_sz_2336_; size_t v___x_2337_; lean_object* v___x_2338_; 
v___x_2335_ = l_Lean_Syntax_getArgs(v_doc_2318_);
v_sz_2336_ = lean_array_size(v___x_2335_);
v___x_2337_ = ((size_t)0ULL);
v___x_2338_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(v_sz_2336_, v___x_2337_, v___x_2335_);
if (lean_obj_tag(v___y_2334_) == 0)
{
lean_object* v___x_2339_; 
v___x_2339_ = lean_unsigned_to_nat(0u);
v___y_2328_ = v___x_2338_;
v___y_2329_ = v___x_2339_;
goto v___jp_2327_;
}
else
{
lean_object* v_val_2340_; 
v_val_2340_ = lean_ctor_get(v___y_2334_, 0);
lean_inc(v_val_2340_);
lean_dec_ref_known(v___y_2334_, 1);
v___y_2328_ = v___x_2338_;
v___y_2329_ = v_val_2340_;
goto v___jp_2327_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoModDocString___boxed(lean_object* v_range_2354_, lean_object* v_doc_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l_Lean_versoModDocString(v_range_2354_, v_doc_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
lean_dec(v___y_2361_);
lean_dec_ref(v___y_2360_);
lean_dec(v___y_2359_);
lean_dec_ref(v___y_2358_);
lean_dec(v___y_2357_);
lean_dec_ref(v___y_2356_);
lean_dec(v_doc_2355_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString(lean_object* v_declName_2373_, lean_object* v_docComment_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_){
_start:
{
lean_object* v___x_2382_; lean_object* v___x_2383_; 
v___x_2382_ = ((lean_object*)(l_Lean_versoDocStringFromString___closed__3));
v___x_2383_ = l_Lean_versoDocStringOfText(v_declName_2373_, v___x_2382_, v_docComment_2374_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_);
return v___x_2383_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___boxed(lean_object* v_declName_2384_, lean_object* v_docComment_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = l_Lean_versoDocStringFromString(v_declName_2384_, v_docComment_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
lean_dec(v___y_2389_);
lean_dec_ref(v___y_2388_);
lean_dec(v___y_2387_);
lean_dec_ref(v___y_2386_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__0(lean_object* v_docString_2394_, lean_object* v_declName_2395_, lean_object* v_env_2396_){
_start:
{
lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; 
v___x_2397_ = l_Lean_docStringExt;
v___x_2398_ = l_String_removeLeadingSpaces(v_docString_2394_);
v___x_2399_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2397_, v_env_2396_, v_declName_2395_, v___x_2398_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__1(lean_object* v_declName_2400_, lean_object* v_modifyEnv_2401_, lean_object* v_docString_2402_){
_start:
{
lean_object* v___f_2403_; lean_object* v___x_2404_; 
v___f_2403_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2403_, 0, v_docString_2402_);
lean_closure_set(v___f_2403_, 1, v_declName_2400_);
v___x_2404_ = lean_apply_1(v_modifyEnv_2401_, v___f_2403_);
return v___x_2404_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__2(lean_object* v_inst_2405_, lean_object* v_inst_2406_, lean_object* v_docComment_2407_, lean_object* v_toBind_2408_, lean_object* v___f_2409_, lean_object* v_____r_2410_){
_start:
{
lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2411_ = l_Lean_getDocStringText___redArg(v_inst_2405_, v_inst_2406_, v_docComment_2407_);
v___x_2412_ = lean_apply_4(v_toBind_2408_, lean_box(0), lean_box(0), v___x_2411_, v___f_2409_);
return v___x_2412_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3(lean_object* v_inst_2413_, lean_object* v_inst_2414_, lean_object* v_inst_2415_, lean_object* v_inst_2416_, lean_object* v_inst_2417_, lean_object* v_docComment_2418_, lean_object* v_toBind_2419_, lean_object* v___f_2420_, lean_object* v_____r_2421_){
_start:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; 
v___x_2422_ = l_Lean_validateDocComment___redArg(v_inst_2413_, v_inst_2414_, v_inst_2415_, v_inst_2416_, v_inst_2417_, v_docComment_2418_);
v___x_2423_ = lean_apply_4(v_toBind_2419_, lean_box(0), lean_box(0), v___x_2422_, v___f_2420_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3___boxed(lean_object* v_inst_2424_, lean_object* v_inst_2425_, lean_object* v_inst_2426_, lean_object* v_inst_2427_, lean_object* v_inst_2428_, lean_object* v_docComment_2429_, lean_object* v_toBind_2430_, lean_object* v___f_2431_, lean_object* v_____r_2432_){
_start:
{
lean_object* v_res_2433_; 
v_res_2433_ = l_Lean_addMarkdownDocString___redArg___lam__3(v_inst_2424_, v_inst_2425_, v_inst_2426_, v_inst_2427_, v_inst_2428_, v_docComment_2429_, v_toBind_2430_, v___f_2431_, v_____r_2432_);
lean_dec(v_docComment_2429_);
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__4(lean_object* v___f_2434_, lean_object* v_____r_2435_){
_start:
{
lean_object* v___x_2436_; 
v___x_2436_ = lean_apply_1(v___f_2434_, v_____r_2435_);
return v___x_2436_;
}
}
static lean_object* _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_2438_; lean_object* v___x_2439_; 
v___x_2438_ = ((lean_object*)(l_Lean_addMarkdownDocString___redArg___lam__5___closed__0));
v___x_2439_ = l_Lean_stringToMessageData(v___x_2438_);
return v___x_2439_;
}
}
static lean_object* _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_2441_; lean_object* v___x_2442_; 
v___x_2441_ = ((lean_object*)(l_Lean_addMarkdownDocString___redArg___lam__5___closed__2));
v___x_2442_ = l_Lean_stringToMessageData(v___x_2441_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5(lean_object* v___f_2443_, lean_object* v_declName_2444_, uint8_t v___x_2445_, lean_object* v_inst_2446_, lean_object* v_inst_2447_, lean_object* v_toBind_2448_, lean_object* v___f_2449_, lean_object* v_____do__lift_2450_){
_start:
{
lean_object* v___x_2454_; 
v___x_2454_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_2450_, v_declName_2444_);
if (lean_obj_tag(v___x_2454_) == 0)
{
lean_dec(v___f_2449_);
lean_dec(v_toBind_2448_);
lean_dec_ref(v_inst_2447_);
lean_dec_ref(v_inst_2446_);
lean_dec(v_declName_2444_);
goto v___jp_2451_;
}
else
{
lean_dec_ref_known(v___x_2454_, 1);
if (v___x_2445_ == 0)
{
lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
lean_dec(v___f_2443_);
v___x_2455_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__1, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1);
v___x_2456_ = l_Lean_MessageData_ofConstName(v_declName_2444_, v___x_2445_);
v___x_2457_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2457_, 0, v___x_2455_);
lean_ctor_set(v___x_2457_, 1, v___x_2456_);
v___x_2458_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_2459_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2459_, 0, v___x_2457_);
lean_ctor_set(v___x_2459_, 1, v___x_2458_);
v___x_2460_ = l_Lean_throwError___redArg(v_inst_2446_, v_inst_2447_, v___x_2459_);
v___x_2461_ = lean_apply_4(v_toBind_2448_, lean_box(0), lean_box(0), v___x_2460_, v___f_2449_);
return v___x_2461_;
}
else
{
lean_dec(v___f_2449_);
lean_dec(v_toBind_2448_);
lean_dec_ref(v_inst_2447_);
lean_dec_ref(v_inst_2446_);
lean_dec(v_declName_2444_);
goto v___jp_2451_;
}
}
v___jp_2451_:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2452_ = lean_box(0);
v___x_2453_ = lean_apply_1(v___f_2443_, v___x_2452_);
return v___x_2453_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___boxed(lean_object* v___f_2462_, lean_object* v_declName_2463_, lean_object* v___x_2464_, lean_object* v_inst_2465_, lean_object* v_inst_2466_, lean_object* v_toBind_2467_, lean_object* v___f_2468_, lean_object* v_____do__lift_2469_){
_start:
{
uint8_t v___x_247__boxed_2470_; lean_object* v_res_2471_; 
v___x_247__boxed_2470_ = lean_unbox(v___x_2464_);
v_res_2471_ = l_Lean_addMarkdownDocString___redArg___lam__5(v___f_2462_, v_declName_2463_, v___x_247__boxed_2470_, v_inst_2465_, v_inst_2466_, v_toBind_2467_, v___f_2468_, v_____do__lift_2469_);
lean_dec_ref(v_____do__lift_2469_);
return v_res_2471_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg(lean_object* v_inst_2472_, lean_object* v_inst_2473_, lean_object* v_inst_2474_, lean_object* v_inst_2475_, lean_object* v_inst_2476_, lean_object* v_inst_2477_, lean_object* v_inst_2478_, lean_object* v_declName_2479_, lean_object* v_docComment_2480_){
_start:
{
lean_object* v_toApplicative_2481_; lean_object* v_toBind_2482_; lean_object* v_toPure_2483_; uint8_t v___x_2484_; 
v_toApplicative_2481_ = lean_ctor_get(v_inst_2472_, 0);
v_toBind_2482_ = lean_ctor_get(v_inst_2472_, 1);
lean_inc(v_toBind_2482_);
v_toPure_2483_ = lean_ctor_get(v_toApplicative_2481_, 1);
v___x_2484_ = l_Lean_Name_isAnonymous(v_declName_2479_);
if (v___x_2484_ == 0)
{
lean_object* v_getEnv_2485_; lean_object* v_modifyEnv_2486_; lean_object* v___f_2487_; lean_object* v___f_2488_; lean_object* v___f_2489_; lean_object* v___f_2490_; lean_object* v___x_2491_; lean_object* v___f_2492_; lean_object* v___x_2493_; 
v_getEnv_2485_ = lean_ctor_get(v_inst_2475_, 0);
lean_inc(v_getEnv_2485_);
v_modifyEnv_2486_ = lean_ctor_get(v_inst_2475_, 1);
lean_inc(v_modifyEnv_2486_);
lean_dec_ref(v_inst_2475_);
lean_inc(v_declName_2479_);
v___f_2487_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2487_, 0, v_declName_2479_);
lean_closure_set(v___f_2487_, 1, v_modifyEnv_2486_);
lean_inc_n(v_toBind_2482_, 3);
lean_inc(v_docComment_2480_);
lean_inc_ref(v_inst_2476_);
lean_inc_ref_n(v_inst_2472_, 2);
v___f_2488_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__2), 6, 5);
lean_closure_set(v___f_2488_, 0, v_inst_2472_);
lean_closure_set(v___f_2488_, 1, v_inst_2476_);
lean_closure_set(v___f_2488_, 2, v_docComment_2480_);
lean_closure_set(v___f_2488_, 3, v_toBind_2482_);
lean_closure_set(v___f_2488_, 4, v___f_2487_);
v___f_2489_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__3___boxed), 9, 8);
lean_closure_set(v___f_2489_, 0, v_inst_2472_);
lean_closure_set(v___f_2489_, 1, v_inst_2473_);
lean_closure_set(v___f_2489_, 2, v_inst_2477_);
lean_closure_set(v___f_2489_, 3, v_inst_2478_);
lean_closure_set(v___f_2489_, 4, v_inst_2474_);
lean_closure_set(v___f_2489_, 5, v_docComment_2480_);
lean_closure_set(v___f_2489_, 6, v_toBind_2482_);
lean_closure_set(v___f_2489_, 7, v___f_2488_);
lean_inc_ref(v___f_2489_);
v___f_2490_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__4), 2, 1);
lean_closure_set(v___f_2490_, 0, v___f_2489_);
v___x_2491_ = lean_box(v___x_2484_);
v___f_2492_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_2492_, 0, v___f_2489_);
lean_closure_set(v___f_2492_, 1, v_declName_2479_);
lean_closure_set(v___f_2492_, 2, v___x_2491_);
lean_closure_set(v___f_2492_, 3, v_inst_2472_);
lean_closure_set(v___f_2492_, 4, v_inst_2476_);
lean_closure_set(v___f_2492_, 5, v_toBind_2482_);
lean_closure_set(v___f_2492_, 6, v___f_2490_);
v___x_2493_ = lean_apply_4(v_toBind_2482_, lean_box(0), lean_box(0), v_getEnv_2485_, v___f_2492_);
return v___x_2493_;
}
else
{
lean_object* v___x_2494_; lean_object* v___x_2495_; 
lean_inc(v_toPure_2483_);
lean_dec(v_toBind_2482_);
lean_dec(v_docComment_2480_);
lean_dec(v_declName_2479_);
lean_dec(v_inst_2478_);
lean_dec_ref(v_inst_2477_);
lean_dec_ref(v_inst_2476_);
lean_dec_ref(v_inst_2475_);
lean_dec(v_inst_2474_);
lean_dec(v_inst_2473_);
lean_dec_ref(v_inst_2472_);
v___x_2494_ = lean_box(0);
v___x_2495_ = lean_apply_2(v_toPure_2483_, lean_box(0), v___x_2494_);
return v___x_2495_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString(lean_object* v_m_2496_, lean_object* v_inst_2497_, lean_object* v_inst_2498_, lean_object* v_inst_2499_, lean_object* v_inst_2500_, lean_object* v_inst_2501_, lean_object* v_inst_2502_, lean_object* v_inst_2503_, lean_object* v_declName_2504_, lean_object* v_docComment_2505_){
_start:
{
lean_object* v___x_2506_; 
v___x_2506_ = l_Lean_addMarkdownDocString___redArg(v_inst_2497_, v_inst_2498_, v_inst_2499_, v_inst_2500_, v_inst_2501_, v_inst_2502_, v_inst_2503_, v_declName_2504_, v_docComment_2505_);
return v___x_2506_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__0(lean_object* v_declName_2507_, lean_object* v_x1_2508_, lean_object* v_x2_2509_){
_start:
{
lean_object* v_index_2510_; lean_object* v_sourceString_2511_; lean_object* v_imports_2512_; lean_object* v_currNamespace_2513_; lean_object* v_openDecls_2514_; lean_object* v_options_2515_; lean_object* v_check_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2529_; 
v_index_2510_ = lean_ctor_get(v_x2_2509_, 1);
v_sourceString_2511_ = lean_ctor_get(v_x2_2509_, 2);
v_imports_2512_ = lean_ctor_get(v_x2_2509_, 3);
v_currNamespace_2513_ = lean_ctor_get(v_x2_2509_, 4);
v_openDecls_2514_ = lean_ctor_get(v_x2_2509_, 5);
v_options_2515_ = lean_ctor_get(v_x2_2509_, 6);
v_check_2516_ = lean_ctor_get(v_x2_2509_, 7);
v_isSharedCheck_2529_ = !lean_is_exclusive(v_x2_2509_);
if (v_isSharedCheck_2529_ == 0)
{
lean_object* v_unused_2530_; 
v_unused_2530_ = lean_ctor_get(v_x2_2509_, 0);
lean_dec(v_unused_2530_);
v___x_2518_ = v_x2_2509_;
v_isShared_2519_ = v_isSharedCheck_2529_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_check_2516_);
lean_inc(v_options_2515_);
lean_inc(v_openDecls_2514_);
lean_inc(v_currNamespace_2513_);
lean_inc(v_imports_2512_);
lean_inc(v_sourceString_2511_);
lean_inc(v_index_2510_);
lean_dec(v_x2_2509_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2529_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2520_; lean_object* v_toEnvExtension_2521_; lean_object* v_asyncMode_2522_; lean_object* v___x_2523_; lean_object* v___x_2525_; 
v___x_2520_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_2521_ = lean_ctor_get(v___x_2520_, 0);
v_asyncMode_2522_ = lean_ctor_get(v_toEnvExtension_2521_, 2);
v___x_2523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2523_, 0, v_declName_2507_);
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 0, v___x_2523_);
v___x_2525_ = v___x_2518_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v___x_2523_);
lean_ctor_set(v_reuseFailAlloc_2528_, 1, v_index_2510_);
lean_ctor_set(v_reuseFailAlloc_2528_, 2, v_sourceString_2511_);
lean_ctor_set(v_reuseFailAlloc_2528_, 3, v_imports_2512_);
lean_ctor_set(v_reuseFailAlloc_2528_, 4, v_currNamespace_2513_);
lean_ctor_set(v_reuseFailAlloc_2528_, 5, v_openDecls_2514_);
lean_ctor_set(v_reuseFailAlloc_2528_, 6, v_options_2515_);
lean_ctor_set(v_reuseFailAlloc_2528_, 7, v_check_2516_);
v___x_2525_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2526_ = lean_box(0);
v___x_2527_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2520_, v_x1_2508_, v___x_2525_, v_asyncMode_2522_, v___x_2526_);
return v___x_2527_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1(lean_object* v_declName_2550_, lean_object* v_docs_2551_, lean_object* v_deferred_2552_, lean_object* v___f_2553_, lean_object* v_env_2554_){
_start:
{
lean_object* v___x_2555_; lean_object* v_env_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; uint8_t v___x_2560_; 
v___x_2555_ = l_Lean_versoDocStringExt;
v_env_2556_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2555_, v_env_2554_, v_declName_2550_, v_docs_2551_);
v___x_2557_ = lean_unsigned_to_nat(0u);
v___x_2558_ = lean_array_get_size(v_deferred_2552_);
v___x_2559_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__1___closed__9));
v___x_2560_ = lean_nat_dec_lt(v___x_2557_, v___x_2558_);
if (v___x_2560_ == 0)
{
lean_dec_ref(v___f_2553_);
lean_dec_ref(v_deferred_2552_);
return v_env_2556_;
}
else
{
uint8_t v___x_2561_; 
v___x_2561_ = lean_nat_dec_le(v___x_2558_, v___x_2558_);
if (v___x_2561_ == 0)
{
if (v___x_2560_ == 0)
{
lean_dec_ref(v___f_2553_);
lean_dec_ref(v_deferred_2552_);
return v_env_2556_;
}
else
{
size_t v___x_2562_; size_t v___x_2563_; lean_object* v___x_2564_; 
v___x_2562_ = ((size_t)0ULL);
v___x_2563_ = lean_usize_of_nat(v___x_2558_);
v___x_2564_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2559_, v___f_2553_, v_deferred_2552_, v___x_2562_, v___x_2563_, v_env_2556_);
return v___x_2564_;
}
}
else
{
size_t v___x_2565_; size_t v___x_2566_; lean_object* v___x_2567_; 
v___x_2565_ = ((size_t)0ULL);
v___x_2566_ = lean_usize_of_nat(v___x_2558_);
v___x_2567_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2559_, v___f_2553_, v_deferred_2552_, v___x_2565_, v___x_2566_, v_env_2556_);
return v___x_2567_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2(lean_object* v_modifyEnv_2568_, lean_object* v___f_2569_, lean_object* v_____r_2570_){
_start:
{
lean_object* v___x_2571_; 
v___x_2571_ = lean_apply_1(v_modifyEnv_2568_, v___f_2569_);
return v___x_2571_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__3(lean_object* v_declName_2574_, lean_object* v_modifyEnv_2575_, lean_object* v___f_2576_, uint8_t v___x_2577_, lean_object* v_inst_2578_, lean_object* v_inst_2579_, lean_object* v_toBind_2580_, lean_object* v___f_2581_, lean_object* v_____do__lift_2582_){
_start:
{
lean_object* v___x_2583_; 
v___x_2583_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_2582_, v_declName_2574_);
if (lean_obj_tag(v___x_2583_) == 0)
{
lean_object* v___x_2584_; 
lean_dec(v___f_2581_);
lean_dec(v_toBind_2580_);
lean_dec_ref(v_inst_2579_);
lean_dec_ref(v_inst_2578_);
lean_dec(v_declName_2574_);
v___x_2584_ = lean_apply_1(v_modifyEnv_2575_, v___f_2576_);
return v___x_2584_;
}
else
{
lean_object* v___x_2586_; uint8_t v_isShared_2587_; uint8_t v_isSharedCheck_2601_; 
v_isSharedCheck_2601_ = !lean_is_exclusive(v___x_2583_);
if (v_isSharedCheck_2601_ == 0)
{
lean_object* v_unused_2602_; 
v_unused_2602_ = lean_ctor_get(v___x_2583_, 0);
lean_dec(v_unused_2602_);
v___x_2586_ = v___x_2583_;
v_isShared_2587_ = v_isSharedCheck_2601_;
goto v_resetjp_2585_;
}
else
{
lean_dec(v___x_2583_);
v___x_2586_ = lean_box(0);
v_isShared_2587_ = v_isSharedCheck_2601_;
goto v_resetjp_2585_;
}
v_resetjp_2585_:
{
if (v___x_2577_ == 0)
{
lean_object* v___x_2588_; uint8_t v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2595_; 
lean_dec_ref(v___f_2576_);
lean_dec(v_modifyEnv_2575_);
v___x_2588_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__3___closed__0));
v___x_2589_ = 1;
v___x_2590_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2574_, v___x_2589_);
v___x_2591_ = lean_string_append(v___x_2588_, v___x_2590_);
lean_dec_ref(v___x_2590_);
v___x_2592_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__3___closed__1));
v___x_2593_ = lean_string_append(v___x_2591_, v___x_2592_);
if (v_isShared_2587_ == 0)
{
lean_ctor_set_tag(v___x_2586_, 3);
lean_ctor_set(v___x_2586_, 0, v___x_2593_);
v___x_2595_ = v___x_2586_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v___x_2593_);
v___x_2595_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; 
v___x_2596_ = l_Lean_MessageData_ofFormat(v___x_2595_);
v___x_2597_ = l_Lean_throwError___redArg(v_inst_2578_, v_inst_2579_, v___x_2596_);
v___x_2598_ = lean_apply_4(v_toBind_2580_, lean_box(0), lean_box(0), v___x_2597_, v___f_2581_);
return v___x_2598_;
}
}
else
{
lean_object* v___x_2600_; 
lean_del_object(v___x_2586_);
lean_dec(v___f_2581_);
lean_dec(v_toBind_2580_);
lean_dec_ref(v_inst_2579_);
lean_dec_ref(v_inst_2578_);
lean_dec(v_declName_2574_);
v___x_2600_ = lean_apply_1(v_modifyEnv_2575_, v___f_2576_);
return v___x_2600_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__3___boxed(lean_object* v_declName_2603_, lean_object* v_modifyEnv_2604_, lean_object* v___f_2605_, lean_object* v___x_2606_, lean_object* v_inst_2607_, lean_object* v_inst_2608_, lean_object* v_toBind_2609_, lean_object* v___f_2610_, lean_object* v_____do__lift_2611_){
_start:
{
uint8_t v___x_374__boxed_2612_; lean_object* v_res_2613_; 
v___x_374__boxed_2612_ = lean_unbox(v___x_2606_);
v_res_2613_ = l_Lean_addVersoDocStringCore___redArg___lam__3(v_declName_2603_, v_modifyEnv_2604_, v___f_2605_, v___x_374__boxed_2612_, v_inst_2607_, v_inst_2608_, v_toBind_2609_, v___f_2610_, v_____do__lift_2611_);
lean_dec_ref(v_____do__lift_2611_);
return v_res_2613_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg(lean_object* v_inst_2614_, lean_object* v_inst_2615_, lean_object* v_inst_2616_, lean_object* v_declName_2617_, lean_object* v_docs_2618_, lean_object* v_deferred_2619_){
_start:
{
lean_object* v_toApplicative_2620_; lean_object* v_toBind_2621_; lean_object* v_toPure_2622_; uint8_t v___x_2623_; 
v_toApplicative_2620_ = lean_ctor_get(v_inst_2614_, 0);
v_toBind_2621_ = lean_ctor_get(v_inst_2614_, 1);
lean_inc(v_toBind_2621_);
v_toPure_2622_ = lean_ctor_get(v_toApplicative_2620_, 1);
v___x_2623_ = l_Lean_Name_isAnonymous(v_declName_2617_);
if (v___x_2623_ == 0)
{
lean_object* v_getEnv_2624_; lean_object* v_modifyEnv_2625_; lean_object* v___f_2626_; lean_object* v___f_2627_; lean_object* v___f_2628_; lean_object* v___x_2629_; lean_object* v___f_2630_; lean_object* v___x_2631_; 
v_getEnv_2624_ = lean_ctor_get(v_inst_2615_, 0);
lean_inc(v_getEnv_2624_);
v_modifyEnv_2625_ = lean_ctor_get(v_inst_2615_, 1);
lean_inc_n(v_modifyEnv_2625_, 2);
lean_dec_ref(v_inst_2615_);
lean_inc_n(v_declName_2617_, 2);
v___f_2626_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2626_, 0, v_declName_2617_);
v___f_2627_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2627_, 0, v_declName_2617_);
lean_closure_set(v___f_2627_, 1, v_docs_2618_);
lean_closure_set(v___f_2627_, 2, v_deferred_2619_);
lean_closure_set(v___f_2627_, 3, v___f_2626_);
lean_inc_ref(v___f_2627_);
v___f_2628_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__2), 3, 2);
lean_closure_set(v___f_2628_, 0, v_modifyEnv_2625_);
lean_closure_set(v___f_2628_, 1, v___f_2627_);
v___x_2629_ = lean_box(v___x_2623_);
lean_inc(v_toBind_2621_);
v___f_2630_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__3___boxed), 9, 8);
lean_closure_set(v___f_2630_, 0, v_declName_2617_);
lean_closure_set(v___f_2630_, 1, v_modifyEnv_2625_);
lean_closure_set(v___f_2630_, 2, v___f_2627_);
lean_closure_set(v___f_2630_, 3, v___x_2629_);
lean_closure_set(v___f_2630_, 4, v_inst_2614_);
lean_closure_set(v___f_2630_, 5, v_inst_2616_);
lean_closure_set(v___f_2630_, 6, v_toBind_2621_);
lean_closure_set(v___f_2630_, 7, v___f_2628_);
v___x_2631_ = lean_apply_4(v_toBind_2621_, lean_box(0), lean_box(0), v_getEnv_2624_, v___f_2630_);
return v___x_2631_;
}
else
{
lean_object* v___x_2632_; lean_object* v___x_2633_; 
lean_inc(v_toPure_2622_);
lean_dec(v_toBind_2621_);
lean_dec_ref(v_deferred_2619_);
lean_dec_ref(v_docs_2618_);
lean_dec(v_declName_2617_);
lean_dec_ref(v_inst_2616_);
lean_dec_ref(v_inst_2615_);
lean_dec_ref(v_inst_2614_);
v___x_2632_ = lean_box(0);
v___x_2633_ = lean_apply_2(v_toPure_2622_, lean_box(0), v___x_2632_);
return v___x_2633_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore(lean_object* v_m_2634_, lean_object* v_inst_2635_, lean_object* v_inst_2636_, lean_object* v_inst_2637_, lean_object* v_inst_2638_, lean_object* v_declName_2639_, lean_object* v_docs_2640_, lean_object* v_deferred_2641_){
_start:
{
lean_object* v___x_2642_; 
v___x_2642_ = l_Lean_addVersoDocStringCore___redArg(v_inst_2635_, v_inst_2636_, v_inst_2638_, v_declName_2639_, v_docs_2640_, v_deferred_2641_);
return v___x_2642_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___boxed(lean_object* v_m_2643_, lean_object* v_inst_2644_, lean_object* v_inst_2645_, lean_object* v_inst_2646_, lean_object* v_inst_2647_, lean_object* v_declName_2648_, lean_object* v_docs_2649_, lean_object* v_deferred_2650_){
_start:
{
lean_object* v_res_2651_; 
v_res_2651_ = l_Lean_addVersoDocStringCore(v_m_2643_, v_inst_2644_, v_inst_2645_, v_inst_2646_, v_inst_2647_, v_declName_2648_, v_docs_2649_, v_deferred_2650_);
lean_dec(v_inst_2646_);
return v_res_2651_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0(lean_object* v_size_2652_, lean_object* v_x1_2653_, lean_object* v_x2_2654_){
_start:
{
lean_object* v_index_2655_; lean_object* v_sourceString_2656_; lean_object* v_imports_2657_; lean_object* v_currNamespace_2658_; lean_object* v_openDecls_2659_; lean_object* v_options_2660_; lean_object* v_check_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2674_; 
v_index_2655_ = lean_ctor_get(v_x2_2654_, 1);
v_sourceString_2656_ = lean_ctor_get(v_x2_2654_, 2);
v_imports_2657_ = lean_ctor_get(v_x2_2654_, 3);
v_currNamespace_2658_ = lean_ctor_get(v_x2_2654_, 4);
v_openDecls_2659_ = lean_ctor_get(v_x2_2654_, 5);
v_options_2660_ = lean_ctor_get(v_x2_2654_, 6);
v_check_2661_ = lean_ctor_get(v_x2_2654_, 7);
v_isSharedCheck_2674_ = !lean_is_exclusive(v_x2_2654_);
if (v_isSharedCheck_2674_ == 0)
{
lean_object* v_unused_2675_; 
v_unused_2675_ = lean_ctor_get(v_x2_2654_, 0);
lean_dec(v_unused_2675_);
v___x_2663_ = v_x2_2654_;
v_isShared_2664_ = v_isSharedCheck_2674_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_check_2661_);
lean_inc(v_options_2660_);
lean_inc(v_openDecls_2659_);
lean_inc(v_currNamespace_2658_);
lean_inc(v_imports_2657_);
lean_inc(v_sourceString_2656_);
lean_inc(v_index_2655_);
lean_dec(v_x2_2654_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2674_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2665_; lean_object* v_toEnvExtension_2666_; lean_object* v_asyncMode_2667_; lean_object* v___x_2668_; lean_object* v___x_2670_; 
v___x_2665_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_2666_ = lean_ctor_get(v___x_2665_, 0);
v_asyncMode_2667_ = lean_ctor_get(v_toEnvExtension_2666_, 2);
v___x_2668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2668_, 0, v_size_2652_);
if (v_isShared_2664_ == 0)
{
lean_ctor_set(v___x_2663_, 0, v___x_2668_);
v___x_2670_ = v___x_2663_;
goto v_reusejp_2669_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v___x_2668_);
lean_ctor_set(v_reuseFailAlloc_2673_, 1, v_index_2655_);
lean_ctor_set(v_reuseFailAlloc_2673_, 2, v_sourceString_2656_);
lean_ctor_set(v_reuseFailAlloc_2673_, 3, v_imports_2657_);
lean_ctor_set(v_reuseFailAlloc_2673_, 4, v_currNamespace_2658_);
lean_ctor_set(v_reuseFailAlloc_2673_, 5, v_openDecls_2659_);
lean_ctor_set(v_reuseFailAlloc_2673_, 6, v_options_2660_);
lean_ctor_set(v_reuseFailAlloc_2673_, 7, v_check_2661_);
v___x_2670_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2669_;
}
v_reusejp_2669_:
{
lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2671_ = lean_box(0);
v___x_2672_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2665_, v_x1_2653_, v___x_2670_, v_asyncMode_2667_, v___x_2671_);
return v___x_2672_;
}
}
}
}
static lean_object* _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2677_ = ((lean_object*)(l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0));
v___x_2678_ = l_Lean_stringToMessageData(v___x_2677_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1(lean_object* v_docs_2679_, lean_object* v_inst_2680_, lean_object* v_inst_2681_, lean_object* v_deferred_2682_, lean_object* v_inst_2683_, lean_object* v___f_2684_, lean_object* v_____do__lift_2685_){
_start:
{
lean_object* v___x_2686_; 
v___x_2686_ = l_Lean_addVersoModuleDocSnippet(v_____do__lift_2685_, v_docs_2679_);
if (lean_obj_tag(v___x_2686_) == 0)
{
lean_object* v_a_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; 
lean_dec_ref(v___f_2684_);
lean_dec_ref(v_inst_2683_);
lean_dec_ref(v_deferred_2682_);
v_a_2687_ = lean_ctor_get(v___x_2686_, 0);
lean_inc(v_a_2687_);
lean_dec_ref_known(v___x_2686_, 1);
v___x_2688_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1);
v___x_2689_ = l_Lean_stringToMessageData(v_a_2687_);
v___x_2690_ = l_Lean_indentD(v___x_2689_);
v___x_2691_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2688_);
lean_ctor_set(v___x_2691_, 1, v___x_2690_);
v___x_2692_ = l_Lean_throwError___redArg(v_inst_2680_, v_inst_2681_, v___x_2691_);
return v___x_2692_;
}
else
{
lean_object* v_a_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; uint8_t v___x_2697_; 
lean_dec_ref(v_inst_2681_);
lean_dec_ref(v_inst_2680_);
v_a_2693_ = lean_ctor_get(v___x_2686_, 0);
lean_inc(v_a_2693_);
lean_dec_ref_known(v___x_2686_, 1);
v___x_2694_ = lean_unsigned_to_nat(0u);
v___x_2695_ = lean_array_get_size(v_deferred_2682_);
v___x_2696_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__1___closed__9));
v___x_2697_ = lean_nat_dec_lt(v___x_2694_, v___x_2695_);
if (v___x_2697_ == 0)
{
lean_object* v___x_2698_; 
lean_dec_ref(v___f_2684_);
lean_dec_ref(v_deferred_2682_);
v___x_2698_ = l_Lean_setEnv___redArg(v_inst_2683_, v_a_2693_);
return v___x_2698_;
}
else
{
uint8_t v___x_2699_; 
v___x_2699_ = lean_nat_dec_le(v___x_2695_, v___x_2695_);
if (v___x_2699_ == 0)
{
if (v___x_2697_ == 0)
{
lean_object* v___x_2700_; 
lean_dec_ref(v___f_2684_);
lean_dec_ref(v_deferred_2682_);
v___x_2700_ = l_Lean_setEnv___redArg(v_inst_2683_, v_a_2693_);
return v___x_2700_;
}
else
{
size_t v___x_2701_; size_t v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; 
v___x_2701_ = ((size_t)0ULL);
v___x_2702_ = lean_usize_of_nat(v___x_2695_);
v___x_2703_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2696_, v___f_2684_, v_deferred_2682_, v___x_2701_, v___x_2702_, v_a_2693_);
v___x_2704_ = l_Lean_setEnv___redArg(v_inst_2683_, v___x_2703_);
return v___x_2704_;
}
}
else
{
size_t v___x_2705_; size_t v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2705_ = ((size_t)0ULL);
v___x_2706_ = lean_usize_of_nat(v___x_2695_);
v___x_2707_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2696_, v___f_2684_, v_deferred_2682_, v___x_2705_, v___x_2706_, v_a_2693_);
v___x_2708_ = l_Lean_setEnv___redArg(v_inst_2683_, v___x_2707_);
return v___x_2708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__2(lean_object* v_docs_2709_, lean_object* v_inst_2710_, lean_object* v_inst_2711_, lean_object* v_deferred_2712_, lean_object* v_inst_2713_, lean_object* v_toBind_2714_, lean_object* v_getEnv_2715_, lean_object* v_____do__lift_2716_){
_start:
{
lean_object* v___x_2717_; lean_object* v_size_2718_; lean_object* v___f_2719_; lean_object* v___f_2720_; lean_object* v___x_2721_; 
v___x_2717_ = l_Lean_getMainVersoModuleDocs(v_____do__lift_2716_);
v_size_2718_ = lean_ctor_get(v___x_2717_, 2);
lean_inc(v_size_2718_);
lean_dec_ref(v___x_2717_);
v___f_2719_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2719_, 0, v_size_2718_);
v___f_2720_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__1), 7, 6);
lean_closure_set(v___f_2720_, 0, v_docs_2709_);
lean_closure_set(v___f_2720_, 1, v_inst_2710_);
lean_closure_set(v___f_2720_, 2, v_inst_2711_);
lean_closure_set(v___f_2720_, 3, v_deferred_2712_);
lean_closure_set(v___f_2720_, 4, v_inst_2713_);
lean_closure_set(v___f_2720_, 5, v___f_2719_);
v___x_2721_ = lean_apply_4(v_toBind_2714_, lean_box(0), lean_box(0), v_getEnv_2715_, v___f_2720_);
return v___x_2721_;
}
}
static lean_object* _init_l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2723_ = ((lean_object*)(l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__0));
v___x_2724_ = l_Lean_stringToMessageData(v___x_2723_);
return v___x_2724_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__3(lean_object* v_inst_2725_, lean_object* v_inst_2726_, lean_object* v_toBind_2727_, lean_object* v_getEnv_2728_, lean_object* v___f_2729_, lean_object* v_____do__lift_2730_){
_start:
{
lean_object* v___x_2731_; uint8_t v___x_2732_; 
v___x_2731_ = l_Lean_getMainModuleDoc(v_____do__lift_2730_);
v___x_2732_ = l_Lean_PersistentArray_isEmpty___redArg(v___x_2731_);
lean_dec_ref(v___x_2731_);
if (v___x_2732_ == 0)
{
lean_object* v___x_2733_; lean_object* v___x_2734_; 
lean_dec(v___f_2729_);
lean_dec(v_getEnv_2728_);
lean_dec(v_toBind_2727_);
v___x_2733_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1);
v___x_2734_ = l_Lean_throwError___redArg(v_inst_2725_, v_inst_2726_, v___x_2733_);
return v___x_2734_;
}
else
{
lean_object* v___x_2735_; 
lean_dec_ref(v_inst_2726_);
lean_dec_ref(v_inst_2725_);
v___x_2735_ = lean_apply_4(v_toBind_2727_, lean_box(0), lean_box(0), v_getEnv_2728_, v___f_2729_);
return v___x_2735_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg(lean_object* v_inst_2736_, lean_object* v_inst_2737_, lean_object* v_inst_2738_, lean_object* v_docs_2739_, lean_object* v_deferred_2740_){
_start:
{
lean_object* v_toBind_2741_; lean_object* v_getEnv_2742_; lean_object* v___f_2743_; lean_object* v___f_2744_; lean_object* v___x_2745_; 
v_toBind_2741_ = lean_ctor_get(v_inst_2736_, 1);
lean_inc_n(v_toBind_2741_, 3);
v_getEnv_2742_ = lean_ctor_get(v_inst_2737_, 0);
lean_inc_n(v_getEnv_2742_, 3);
lean_inc_ref(v_inst_2738_);
lean_inc_ref(v_inst_2736_);
v___f_2743_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__2), 8, 7);
lean_closure_set(v___f_2743_, 0, v_docs_2739_);
lean_closure_set(v___f_2743_, 1, v_inst_2736_);
lean_closure_set(v___f_2743_, 2, v_inst_2738_);
lean_closure_set(v___f_2743_, 3, v_deferred_2740_);
lean_closure_set(v___f_2743_, 4, v_inst_2737_);
lean_closure_set(v___f_2743_, 5, v_toBind_2741_);
lean_closure_set(v___f_2743_, 6, v_getEnv_2742_);
v___f_2744_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__3), 6, 5);
lean_closure_set(v___f_2744_, 0, v_inst_2736_);
lean_closure_set(v___f_2744_, 1, v_inst_2738_);
lean_closure_set(v___f_2744_, 2, v_toBind_2741_);
lean_closure_set(v___f_2744_, 3, v_getEnv_2742_);
lean_closure_set(v___f_2744_, 4, v___f_2743_);
v___x_2745_ = lean_apply_4(v_toBind_2741_, lean_box(0), lean_box(0), v_getEnv_2742_, v___f_2744_);
return v___x_2745_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore(lean_object* v_m_2746_, lean_object* v_inst_2747_, lean_object* v_inst_2748_, lean_object* v_inst_2749_, lean_object* v_inst_2750_, lean_object* v_docs_2751_, lean_object* v_deferred_2752_){
_start:
{
lean_object* v___x_2753_; 
v___x_2753_ = l_Lean_addVersoModDocStringCore___redArg(v_inst_2747_, v_inst_2748_, v_inst_2750_, v_docs_2751_, v_deferred_2752_);
return v___x_2753_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___boxed(lean_object* v_m_2754_, lean_object* v_inst_2755_, lean_object* v_inst_2756_, lean_object* v_inst_2757_, lean_object* v_inst_2758_, lean_object* v_docs_2759_, lean_object* v_deferred_2760_){
_start:
{
lean_object* v_res_2761_; 
v_res_2761_ = l_Lean_addVersoModDocStringCore(v_m_2754_, v_inst_2755_, v_inst_2756_, v_inst_2757_, v_inst_2758_, v_docs_2759_, v_deferred_2760_);
lean_dec(v_inst_2757_);
return v_res_2761_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0(lean_object* v_declName_2762_, lean_object* v_as_2763_, size_t v_i_2764_, size_t v_stop_2765_, lean_object* v_b_2766_){
_start:
{
uint8_t v___x_2767_; 
v___x_2767_ = lean_usize_dec_eq(v_i_2764_, v_stop_2765_);
if (v___x_2767_ == 0)
{
lean_object* v___x_2768_; lean_object* v_index_2769_; lean_object* v_sourceString_2770_; lean_object* v_imports_2771_; lean_object* v_currNamespace_2772_; lean_object* v_openDecls_2773_; lean_object* v_options_2774_; lean_object* v_check_2775_; lean_object* v___x_2777_; uint8_t v_isShared_2778_; uint8_t v_isSharedCheck_2791_; 
v___x_2768_ = lean_array_uget(v_as_2763_, v_i_2764_);
v_index_2769_ = lean_ctor_get(v___x_2768_, 1);
v_sourceString_2770_ = lean_ctor_get(v___x_2768_, 2);
v_imports_2771_ = lean_ctor_get(v___x_2768_, 3);
v_currNamespace_2772_ = lean_ctor_get(v___x_2768_, 4);
v_openDecls_2773_ = lean_ctor_get(v___x_2768_, 5);
v_options_2774_ = lean_ctor_get(v___x_2768_, 6);
v_check_2775_ = lean_ctor_get(v___x_2768_, 7);
v_isSharedCheck_2791_ = !lean_is_exclusive(v___x_2768_);
if (v_isSharedCheck_2791_ == 0)
{
lean_object* v_unused_2792_; 
v_unused_2792_ = lean_ctor_get(v___x_2768_, 0);
lean_dec(v_unused_2792_);
v___x_2777_ = v___x_2768_;
v_isShared_2778_ = v_isSharedCheck_2791_;
goto v_resetjp_2776_;
}
else
{
lean_inc(v_check_2775_);
lean_inc(v_options_2774_);
lean_inc(v_openDecls_2773_);
lean_inc(v_currNamespace_2772_);
lean_inc(v_imports_2771_);
lean_inc(v_sourceString_2770_);
lean_inc(v_index_2769_);
lean_dec(v___x_2768_);
v___x_2777_ = lean_box(0);
v_isShared_2778_ = v_isSharedCheck_2791_;
goto v_resetjp_2776_;
}
v_resetjp_2776_:
{
lean_object* v___x_2779_; lean_object* v_toEnvExtension_2780_; lean_object* v_asyncMode_2781_; lean_object* v___x_2782_; lean_object* v___x_2784_; 
v___x_2779_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_2780_ = lean_ctor_get(v___x_2779_, 0);
v_asyncMode_2781_ = lean_ctor_get(v_toEnvExtension_2780_, 2);
lean_inc(v_declName_2762_);
v___x_2782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2782_, 0, v_declName_2762_);
if (v_isShared_2778_ == 0)
{
lean_ctor_set(v___x_2777_, 0, v___x_2782_);
v___x_2784_ = v___x_2777_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2790_; 
v_reuseFailAlloc_2790_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2790_, 0, v___x_2782_);
lean_ctor_set(v_reuseFailAlloc_2790_, 1, v_index_2769_);
lean_ctor_set(v_reuseFailAlloc_2790_, 2, v_sourceString_2770_);
lean_ctor_set(v_reuseFailAlloc_2790_, 3, v_imports_2771_);
lean_ctor_set(v_reuseFailAlloc_2790_, 4, v_currNamespace_2772_);
lean_ctor_set(v_reuseFailAlloc_2790_, 5, v_openDecls_2773_);
lean_ctor_set(v_reuseFailAlloc_2790_, 6, v_options_2774_);
lean_ctor_set(v_reuseFailAlloc_2790_, 7, v_check_2775_);
v___x_2784_ = v_reuseFailAlloc_2790_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
lean_object* v___x_2785_; lean_object* v___x_2786_; size_t v___x_2787_; size_t v___x_2788_; 
v___x_2785_ = lean_box(0);
v___x_2786_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2779_, v_b_2766_, v___x_2784_, v_asyncMode_2781_, v___x_2785_);
v___x_2787_ = ((size_t)1ULL);
v___x_2788_ = lean_usize_add(v_i_2764_, v___x_2787_);
v_i_2764_ = v___x_2788_;
v_b_2766_ = v___x_2786_;
goto _start;
}
}
}
else
{
lean_dec(v_declName_2762_);
return v_b_2766_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0___boxed(lean_object* v_declName_2793_, lean_object* v_as_2794_, lean_object* v_i_2795_, lean_object* v_stop_2796_, lean_object* v_b_2797_){
_start:
{
size_t v_i_boxed_2798_; size_t v_stop_boxed_2799_; lean_object* v_res_2800_; 
v_i_boxed_2798_ = lean_unbox_usize(v_i_2795_);
lean_dec(v_i_2795_);
v_stop_boxed_2799_ = lean_unbox_usize(v_stop_2796_);
lean_dec(v_stop_2796_);
v_res_2800_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0(v_declName_2793_, v_as_2794_, v_i_boxed_2798_, v_stop_boxed_2799_, v_b_2797_);
lean_dec_ref(v_as_2794_);
return v_res_2800_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2801_; 
v___x_2801_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2801_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2802_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0);
v___x_2803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2803_, 0, v___x_2802_);
return v___x_2803_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; 
v___x_2804_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
v___x_2805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2805_, 0, v___x_2804_);
lean_ctor_set(v___x_2805_, 1, v___x_2804_);
return v___x_2805_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2806_; lean_object* v___x_2807_; 
v___x_2806_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
v___x_2807_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2806_);
lean_ctor_set(v___x_2807_, 1, v___x_2806_);
lean_ctor_set(v___x_2807_, 2, v___x_2806_);
lean_ctor_set(v___x_2807_, 3, v___x_2806_);
lean_ctor_set(v___x_2807_, 4, v___x_2806_);
lean_ctor_set(v___x_2807_, 5, v___x_2806_);
return v___x_2807_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(lean_object* v_declName_2808_, lean_object* v_docs_2809_, lean_object* v_deferred_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_){
_start:
{
lean_object* v___y_2819_; lean_object* v___y_2820_; lean_object* v___y_2821_; lean_object* v___y_2822_; lean_object* v___y_2823_; lean_object* v___y_2824_; lean_object* v___y_2825_; lean_object* v___y_2826_; lean_object* v___y_2827_; lean_object* v___y_2828_; lean_object* v___y_2850_; lean_object* v___y_2851_; uint8_t v___x_2869_; 
v___x_2869_ = l_Lean_Name_isAnonymous(v_declName_2808_);
if (v___x_2869_ == 0)
{
lean_object* v___x_2870_; lean_object* v_env_2871_; lean_object* v___x_2872_; 
v___x_2870_ = lean_st_ref_get(v___y_2816_);
v_env_2871_ = lean_ctor_get(v___x_2870_, 0);
lean_inc_ref(v_env_2871_);
lean_dec(v___x_2870_);
v___x_2872_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2871_, v_declName_2808_);
lean_dec_ref(v_env_2871_);
if (lean_obj_tag(v___x_2872_) == 0)
{
v___y_2850_ = v___y_2814_;
v___y_2851_ = v___y_2816_;
goto v___jp_2849_;
}
else
{
lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2887_; 
v_isSharedCheck_2887_ = !lean_is_exclusive(v___x_2872_);
if (v_isSharedCheck_2887_ == 0)
{
lean_object* v_unused_2888_; 
v_unused_2888_ = lean_ctor_get(v___x_2872_, 0);
lean_dec(v_unused_2888_);
v___x_2874_ = v___x_2872_;
v_isShared_2875_ = v_isSharedCheck_2887_;
goto v_resetjp_2873_;
}
else
{
lean_dec(v___x_2872_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2887_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
if (v___x_2869_ == 0)
{
lean_object* v___x_2876_; uint8_t v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2883_; 
lean_dec_ref(v_docs_2809_);
v___x_2876_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__3___closed__0));
v___x_2877_ = 1;
v___x_2878_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2808_, v___x_2877_);
v___x_2879_ = lean_string_append(v___x_2876_, v___x_2878_);
lean_dec_ref(v___x_2878_);
v___x_2880_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__3___closed__1));
v___x_2881_ = lean_string_append(v___x_2879_, v___x_2880_);
if (v_isShared_2875_ == 0)
{
lean_ctor_set_tag(v___x_2874_, 3);
lean_ctor_set(v___x_2874_, 0, v___x_2881_);
v___x_2883_ = v___x_2874_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v___x_2881_);
v___x_2883_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
lean_object* v___x_2884_; lean_object* v___x_2885_; 
v___x_2884_ = l_Lean_MessageData_ofFormat(v___x_2883_);
v___x_2885_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_2884_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_);
return v___x_2885_;
}
}
else
{
lean_del_object(v___x_2874_);
v___y_2850_ = v___y_2814_;
v___y_2851_ = v___y_2816_;
goto v___jp_2849_;
}
}
}
}
else
{
lean_object* v___x_2889_; lean_object* v___x_2890_; 
lean_dec_ref(v_docs_2809_);
lean_dec(v_declName_2808_);
v___x_2889_ = lean_box(0);
v___x_2890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2890_, 0, v___x_2889_);
return v___x_2890_;
}
v___jp_2818_:
{
lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v_mctx_2833_; lean_object* v_zetaDeltaFVarIds_2834_; lean_object* v_postponed_2835_; lean_object* v_diag_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2847_; 
v___x_2829_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
v___x_2830_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2830_, 0, v___y_2828_);
lean_ctor_set(v___x_2830_, 1, v___y_2824_);
lean_ctor_set(v___x_2830_, 2, v___y_2822_);
lean_ctor_set(v___x_2830_, 3, v___y_2827_);
lean_ctor_set(v___x_2830_, 4, v___y_2823_);
lean_ctor_set(v___x_2830_, 5, v___x_2829_);
lean_ctor_set(v___x_2830_, 6, v___y_2826_);
lean_ctor_set(v___x_2830_, 7, v___y_2819_);
lean_ctor_set(v___x_2830_, 8, v___y_2825_);
v___x_2831_ = lean_st_ref_put(v___y_2821_, v___x_2830_);
v___x_2832_ = lean_st_ref_take(v___y_2820_);
v_mctx_2833_ = lean_ctor_get(v___x_2832_, 0);
v_zetaDeltaFVarIds_2834_ = lean_ctor_get(v___x_2832_, 2);
v_postponed_2835_ = lean_ctor_get(v___x_2832_, 3);
v_diag_2836_ = lean_ctor_get(v___x_2832_, 4);
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2832_);
if (v_isSharedCheck_2847_ == 0)
{
lean_object* v_unused_2848_; 
v_unused_2848_ = lean_ctor_get(v___x_2832_, 1);
lean_dec(v_unused_2848_);
v___x_2838_ = v___x_2832_;
v_isShared_2839_ = v_isSharedCheck_2847_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_diag_2836_);
lean_inc(v_postponed_2835_);
lean_inc(v_zetaDeltaFVarIds_2834_);
lean_inc(v_mctx_2833_);
lean_dec(v___x_2832_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2847_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2843_; 
v___x_2840_ = lean_box(0);
v___x_2841_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_2839_ == 0)
{
lean_ctor_set(v___x_2838_, 1, v___x_2841_);
v___x_2843_ = v___x_2838_;
goto v_reusejp_2842_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v_mctx_2833_);
lean_ctor_set(v_reuseFailAlloc_2846_, 1, v___x_2841_);
lean_ctor_set(v_reuseFailAlloc_2846_, 2, v_zetaDeltaFVarIds_2834_);
lean_ctor_set(v_reuseFailAlloc_2846_, 3, v_postponed_2835_);
lean_ctor_set(v_reuseFailAlloc_2846_, 4, v_diag_2836_);
v___x_2843_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2842_;
}
v_reusejp_2842_:
{
lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2844_ = lean_st_ref_put(v___y_2820_, v___x_2843_);
v___x_2845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2840_);
return v___x_2845_;
}
}
}
v___jp_2849_:
{
lean_object* v___x_2852_; lean_object* v_env_2853_; lean_object* v_nextMacroScope_2854_; lean_object* v_ngen_2855_; lean_object* v_auxDeclNGen_2856_; lean_object* v_traceState_2857_; lean_object* v_messages_2858_; lean_object* v_infoState_2859_; lean_object* v_snapshotTasks_2860_; lean_object* v___x_2861_; lean_object* v_env_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; uint8_t v___x_2865_; 
v___x_2852_ = lean_st_ref_take(v___y_2851_);
v_env_2853_ = lean_ctor_get(v___x_2852_, 0);
lean_inc_ref(v_env_2853_);
v_nextMacroScope_2854_ = lean_ctor_get(v___x_2852_, 1);
lean_inc(v_nextMacroScope_2854_);
v_ngen_2855_ = lean_ctor_get(v___x_2852_, 2);
lean_inc_ref(v_ngen_2855_);
v_auxDeclNGen_2856_ = lean_ctor_get(v___x_2852_, 3);
lean_inc_ref(v_auxDeclNGen_2856_);
v_traceState_2857_ = lean_ctor_get(v___x_2852_, 4);
lean_inc_ref(v_traceState_2857_);
v_messages_2858_ = lean_ctor_get(v___x_2852_, 6);
lean_inc_ref(v_messages_2858_);
v_infoState_2859_ = lean_ctor_get(v___x_2852_, 7);
lean_inc_ref(v_infoState_2859_);
v_snapshotTasks_2860_ = lean_ctor_get(v___x_2852_, 8);
lean_inc_ref(v_snapshotTasks_2860_);
lean_dec(v___x_2852_);
v___x_2861_ = l_Lean_versoDocStringExt;
lean_inc(v_declName_2808_);
v_env_2862_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2861_, v_env_2853_, v_declName_2808_, v_docs_2809_);
v___x_2863_ = lean_unsigned_to_nat(0u);
v___x_2864_ = lean_array_get_size(v_deferred_2810_);
v___x_2865_ = lean_nat_dec_lt(v___x_2863_, v___x_2864_);
if (v___x_2865_ == 0)
{
lean_dec(v_declName_2808_);
v___y_2819_ = v_infoState_2859_;
v___y_2820_ = v___y_2850_;
v___y_2821_ = v___y_2851_;
v___y_2822_ = v_ngen_2855_;
v___y_2823_ = v_traceState_2857_;
v___y_2824_ = v_nextMacroScope_2854_;
v___y_2825_ = v_snapshotTasks_2860_;
v___y_2826_ = v_messages_2858_;
v___y_2827_ = v_auxDeclNGen_2856_;
v___y_2828_ = v_env_2862_;
goto v___jp_2818_;
}
else
{
size_t v___x_2866_; size_t v___x_2867_; lean_object* v___x_2868_; 
v___x_2866_ = ((size_t)0ULL);
v___x_2867_ = lean_usize_of_nat(v___x_2864_);
v___x_2868_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0(v_declName_2808_, v_deferred_2810_, v___x_2866_, v___x_2867_, v_env_2862_);
v___y_2819_ = v_infoState_2859_;
v___y_2820_ = v___y_2850_;
v___y_2821_ = v___y_2851_;
v___y_2822_ = v_ngen_2855_;
v___y_2823_ = v_traceState_2857_;
v___y_2824_ = v_nextMacroScope_2854_;
v___y_2825_ = v_snapshotTasks_2860_;
v___y_2826_ = v_messages_2858_;
v___y_2827_ = v_auxDeclNGen_2856_;
v___y_2828_ = v___x_2868_;
goto v___jp_2818_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___boxed(lean_object* v_declName_2891_, lean_object* v_docs_2892_, lean_object* v_deferred_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_){
_start:
{
lean_object* v_res_2901_; 
v_res_2901_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2891_, v_docs_2892_, v_deferred_2893_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
lean_dec(v___y_2899_);
lean_dec_ref(v___y_2898_);
lean_dec(v___y_2897_);
lean_dec_ref(v___y_2896_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
lean_dec_ref(v_deferred_2893_);
return v_res_2901_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocString(lean_object* v_declName_2902_, lean_object* v_binders_2903_, lean_object* v_docComment_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_){
_start:
{
lean_object* v___y_2913_; lean_object* v___y_2914_; lean_object* v___y_2915_; lean_object* v___y_2916_; lean_object* v___y_2917_; lean_object* v___y_2918_; lean_object* v___x_2932_; lean_object* v_env_2933_; lean_object* v___x_2934_; 
v___x_2932_ = lean_st_ref_get(v___y_2910_);
v_env_2933_ = lean_ctor_get(v___x_2932_, 0);
lean_inc_ref(v_env_2933_);
lean_dec(v___x_2932_);
v___x_2934_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2933_, v_declName_2902_);
lean_dec_ref(v_env_2933_);
if (lean_obj_tag(v___x_2934_) == 0)
{
v___y_2913_ = v___y_2905_;
v___y_2914_ = v___y_2906_;
v___y_2915_ = v___y_2907_;
v___y_2916_ = v___y_2908_;
v___y_2917_ = v___y_2909_;
v___y_2918_ = v___y_2910_;
goto v___jp_2912_;
}
else
{
lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_2949_; 
lean_dec(v_docComment_2904_);
lean_dec(v_binders_2903_);
v_isSharedCheck_2949_ = !lean_is_exclusive(v___x_2934_);
if (v_isSharedCheck_2949_ == 0)
{
lean_object* v_unused_2950_; 
v_unused_2950_ = lean_ctor_get(v___x_2934_, 0);
lean_dec(v_unused_2950_);
v___x_2936_ = v___x_2934_;
v_isShared_2937_ = v_isSharedCheck_2949_;
goto v_resetjp_2935_;
}
else
{
lean_dec(v___x_2934_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_2949_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
lean_object* v___x_2938_; uint8_t v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2945_; 
v___x_2938_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__3___closed__0));
v___x_2939_ = 1;
v___x_2940_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2902_, v___x_2939_);
v___x_2941_ = lean_string_append(v___x_2938_, v___x_2940_);
lean_dec_ref(v___x_2940_);
v___x_2942_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__3___closed__1));
v___x_2943_ = lean_string_append(v___x_2941_, v___x_2942_);
if (v_isShared_2937_ == 0)
{
lean_ctor_set_tag(v___x_2936_, 3);
lean_ctor_set(v___x_2936_, 0, v___x_2943_);
v___x_2945_ = v___x_2936_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v___x_2943_);
v___x_2945_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
lean_object* v___x_2946_; lean_object* v___x_2947_; 
v___x_2946_ = l_Lean_MessageData_ofFormat(v___x_2945_);
v___x_2947_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_2946_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_);
return v___x_2947_;
}
}
}
v___jp_2912_:
{
lean_object* v___x_2919_; 
lean_inc(v_declName_2902_);
v___x_2919_ = l_Lean_versoDocString(v_declName_2902_, v_binders_2903_, v_docComment_2904_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_);
if (lean_obj_tag(v___x_2919_) == 0)
{
lean_object* v_a_2920_; lean_object* v_toVersoDocString_2921_; lean_object* v_deferredChecks_2922_; lean_object* v___x_2923_; 
v_a_2920_ = lean_ctor_get(v___x_2919_, 0);
lean_inc(v_a_2920_);
lean_dec_ref_known(v___x_2919_, 1);
v_toVersoDocString_2921_ = lean_ctor_get(v_a_2920_, 0);
lean_inc_ref(v_toVersoDocString_2921_);
v_deferredChecks_2922_ = lean_ctor_get(v_a_2920_, 1);
lean_inc_ref(v_deferredChecks_2922_);
lean_dec(v_a_2920_);
v___x_2923_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2902_, v_toVersoDocString_2921_, v_deferredChecks_2922_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_);
lean_dec_ref(v_deferredChecks_2922_);
return v___x_2923_;
}
else
{
lean_object* v_a_2924_; lean_object* v___x_2926_; uint8_t v_isShared_2927_; uint8_t v_isSharedCheck_2931_; 
lean_dec(v_declName_2902_);
v_a_2924_ = lean_ctor_get(v___x_2919_, 0);
v_isSharedCheck_2931_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2926_ = v___x_2919_;
v_isShared_2927_ = v_isSharedCheck_2931_;
goto v_resetjp_2925_;
}
else
{
lean_inc(v_a_2924_);
lean_dec(v___x_2919_);
v___x_2926_ = lean_box(0);
v_isShared_2927_ = v_isSharedCheck_2931_;
goto v_resetjp_2925_;
}
v_resetjp_2925_:
{
lean_object* v___x_2929_; 
if (v_isShared_2927_ == 0)
{
v___x_2929_ = v___x_2926_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v_a_2924_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
return v___x_2929_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocString___boxed(lean_object* v_declName_2951_, lean_object* v_binders_2952_, lean_object* v_docComment_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l_Lean_addVersoDocString(v_declName_2951_, v_binders_2952_, v_docComment_2953_, v___y_2954_, v___y_2955_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_);
lean_dec(v___y_2959_);
lean_dec_ref(v___y_2958_);
lean_dec(v___y_2957_);
lean_dec_ref(v___y_2956_);
lean_dec(v___y_2955_);
lean_dec_ref(v___y_2954_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString(lean_object* v_declName_2962_, lean_object* v_docComment_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_){
_start:
{
lean_object* v___y_2972_; lean_object* v___y_2973_; lean_object* v___y_2974_; lean_object* v___y_2975_; lean_object* v___y_2976_; lean_object* v___y_2977_; lean_object* v___x_2991_; lean_object* v_env_2992_; lean_object* v___x_2993_; 
v___x_2991_ = lean_st_ref_get(v___y_2969_);
v_env_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc_ref(v_env_2992_);
lean_dec(v___x_2991_);
v___x_2993_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2992_, v_declName_2962_);
lean_dec_ref(v_env_2992_);
if (lean_obj_tag(v___x_2993_) == 0)
{
v___y_2972_ = v___y_2964_;
v___y_2973_ = v___y_2965_;
v___y_2974_ = v___y_2966_;
v___y_2975_ = v___y_2967_;
v___y_2976_ = v___y_2968_;
v___y_2977_ = v___y_2969_;
goto v___jp_2971_;
}
else
{
lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3008_; 
lean_dec_ref(v_docComment_2963_);
v_isSharedCheck_3008_ = !lean_is_exclusive(v___x_2993_);
if (v_isSharedCheck_3008_ == 0)
{
lean_object* v_unused_3009_; 
v_unused_3009_ = lean_ctor_get(v___x_2993_, 0);
lean_dec(v_unused_3009_);
v___x_2995_ = v___x_2993_;
v_isShared_2996_ = v_isSharedCheck_3008_;
goto v_resetjp_2994_;
}
else
{
lean_dec(v___x_2993_);
v___x_2995_ = lean_box(0);
v_isShared_2996_ = v_isSharedCheck_3008_;
goto v_resetjp_2994_;
}
v_resetjp_2994_:
{
lean_object* v___x_2997_; uint8_t v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3004_; 
v___x_2997_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__3___closed__0));
v___x_2998_ = 1;
v___x_2999_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2962_, v___x_2998_);
v___x_3000_ = lean_string_append(v___x_2997_, v___x_2999_);
lean_dec_ref(v___x_2999_);
v___x_3001_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__3___closed__1));
v___x_3002_ = lean_string_append(v___x_3000_, v___x_3001_);
if (v_isShared_2996_ == 0)
{
lean_ctor_set_tag(v___x_2995_, 3);
lean_ctor_set(v___x_2995_, 0, v___x_3002_);
v___x_3004_ = v___x_2995_;
goto v_reusejp_3003_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v___x_3002_);
v___x_3004_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3003_;
}
v_reusejp_3003_:
{
lean_object* v___x_3005_; lean_object* v___x_3006_; 
v___x_3005_ = l_Lean_MessageData_ofFormat(v___x_3004_);
v___x_3006_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3005_, v___y_2964_, v___y_2965_, v___y_2966_, v___y_2967_, v___y_2968_, v___y_2969_);
return v___x_3006_;
}
}
}
v___jp_2971_:
{
lean_object* v___x_2978_; 
lean_inc(v_declName_2962_);
v___x_2978_ = l_Lean_versoDocStringFromString(v_declName_2962_, v_docComment_2963_, v___y_2972_, v___y_2973_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
if (lean_obj_tag(v___x_2978_) == 0)
{
lean_object* v_a_2979_; lean_object* v_toVersoDocString_2980_; lean_object* v_deferredChecks_2981_; lean_object* v___x_2982_; 
v_a_2979_ = lean_ctor_get(v___x_2978_, 0);
lean_inc(v_a_2979_);
lean_dec_ref_known(v___x_2978_, 1);
v_toVersoDocString_2980_ = lean_ctor_get(v_a_2979_, 0);
lean_inc_ref(v_toVersoDocString_2980_);
v_deferredChecks_2981_ = lean_ctor_get(v_a_2979_, 1);
lean_inc_ref(v_deferredChecks_2981_);
lean_dec(v_a_2979_);
v___x_2982_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2962_, v_toVersoDocString_2980_, v_deferredChecks_2981_, v___y_2972_, v___y_2973_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
lean_dec_ref(v_deferredChecks_2981_);
return v___x_2982_;
}
else
{
lean_object* v_a_2983_; lean_object* v___x_2985_; uint8_t v_isShared_2986_; uint8_t v_isSharedCheck_2990_; 
lean_dec(v_declName_2962_);
v_a_2983_ = lean_ctor_get(v___x_2978_, 0);
v_isSharedCheck_2990_ = !lean_is_exclusive(v___x_2978_);
if (v_isSharedCheck_2990_ == 0)
{
v___x_2985_ = v___x_2978_;
v_isShared_2986_ = v_isSharedCheck_2990_;
goto v_resetjp_2984_;
}
else
{
lean_inc(v_a_2983_);
lean_dec(v___x_2978_);
v___x_2985_ = lean_box(0);
v_isShared_2986_ = v_isSharedCheck_2990_;
goto v_resetjp_2984_;
}
v_resetjp_2984_:
{
lean_object* v___x_2988_; 
if (v_isShared_2986_ == 0)
{
v___x_2988_ = v___x_2985_;
goto v_reusejp_2987_;
}
else
{
lean_object* v_reuseFailAlloc_2989_; 
v_reuseFailAlloc_2989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2989_, 0, v_a_2983_);
v___x_2988_ = v_reuseFailAlloc_2989_;
goto v_reusejp_2987_;
}
v_reusejp_2987_:
{
return v___x_2988_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString___boxed(lean_object* v_declName_3010_, lean_object* v_docComment_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_){
_start:
{
lean_object* v_res_3019_; 
v_res_3019_ = l_Lean_addVersoDocStringFromString(v_declName_3010_, v_docComment_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_);
lean_dec(v___y_3017_);
lean_dec_ref(v___y_3016_);
lean_dec(v___y_3015_);
lean_dec_ref(v___y_3014_);
lean_dec(v___y_3013_);
lean_dec_ref(v___y_3012_);
return v_res_3019_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_3020_, lean_object* v_msgData_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_){
_start:
{
uint8_t v___x_3027_; uint8_t v___x_3028_; lean_object* v___x_3029_; 
v___x_3027_ = 2;
v___x_3028_ = 0;
v___x_3029_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_3020_, v_msgData_3021_, v___x_3027_, v___x_3028_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_);
return v___x_3029_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_3030_, lean_object* v_msgData_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_){
_start:
{
lean_object* v_res_3037_; 
v_res_3037_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v_ref_3030_, v_msgData_3031_, v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_);
lean_dec(v___y_3035_);
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3033_);
lean_dec_ref(v___y_3032_);
lean_dec(v_ref_3030_);
return v_res_3037_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(lean_object* v___y_3038_, lean_object* v_str_3039_, lean_object* v_as_3040_, size_t v_sz_3041_, size_t v_i_3042_, lean_object* v_b_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_){
_start:
{
lean_object* v_a_3052_; uint8_t v___x_3056_; 
v___x_3056_ = lean_usize_dec_lt(v_i_3042_, v_sz_3041_);
if (v___x_3056_ == 0)
{
lean_object* v___x_3057_; 
v___x_3057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3057_, 0, v_b_3043_);
return v___x_3057_;
}
else
{
lean_object* v_a_3058_; lean_object* v_fst_3059_; lean_object* v_snd_3060_; lean_object* v_start_3061_; lean_object* v_stop_3062_; lean_object* v___x_3064_; uint8_t v_isShared_3065_; uint8_t v_isSharedCheck_3082_; 
v_a_3058_ = lean_array_uget_borrowed(v_as_3040_, v_i_3042_);
v_fst_3059_ = lean_ctor_get(v_a_3058_, 0);
lean_inc(v_fst_3059_);
v_snd_3060_ = lean_ctor_get(v_a_3058_, 1);
v_start_3061_ = lean_ctor_get(v_fst_3059_, 0);
v_stop_3062_ = lean_ctor_get(v_fst_3059_, 1);
v_isSharedCheck_3082_ = !lean_is_exclusive(v_fst_3059_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_3064_ = v_fst_3059_;
v_isShared_3065_ = v_isSharedCheck_3082_;
goto v_resetjp_3063_;
}
else
{
lean_inc(v_stop_3062_);
lean_inc(v_start_3061_);
lean_dec(v_fst_3059_);
v___x_3064_ = lean_box(0);
v_isShared_3065_ = v_isSharedCheck_3082_;
goto v_resetjp_3063_;
}
v_resetjp_3063_:
{
lean_object* v___x_3066_; 
v___x_3066_ = lean_box(0);
if (lean_obj_tag(v___y_3038_) == 1)
{
lean_object* v_val_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; uint8_t v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3074_; 
v_val_3067_ = lean_ctor_get(v___y_3038_, 0);
v___x_3068_ = lean_nat_add(v_val_3067_, v_start_3061_);
v___x_3069_ = lean_nat_add(v_val_3067_, v_stop_3062_);
v___x_3070_ = 0;
v___x_3071_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_3071_, 0, v___x_3068_);
lean_ctor_set(v___x_3071_, 1, v___x_3069_);
lean_ctor_set_uint8(v___x_3071_, sizeof(void*)*2, v___x_3070_);
v___x_3072_ = lean_string_utf8_extract(v_str_3039_, v_start_3061_, v_stop_3062_);
lean_dec(v_stop_3062_);
lean_dec(v_start_3061_);
if (v_isShared_3065_ == 0)
{
lean_ctor_set_tag(v___x_3064_, 2);
lean_ctor_set(v___x_3064_, 1, v___x_3072_);
lean_ctor_set(v___x_3064_, 0, v___x_3071_);
v___x_3074_ = v___x_3064_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v___x_3071_);
lean_ctor_set(v_reuseFailAlloc_3078_, 1, v___x_3072_);
v___x_3074_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; 
lean_inc(v_snd_3060_);
v___x_3075_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3075_, 0, v_snd_3060_);
v___x_3076_ = l_Lean_MessageData_ofFormat(v___x_3075_);
v___x_3077_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v___x_3074_, v___x_3076_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
lean_dec_ref(v___x_3074_);
if (lean_obj_tag(v___x_3077_) == 0)
{
lean_dec_ref_known(v___x_3077_, 1);
v_a_3052_ = v___x_3066_;
goto v___jp_3051_;
}
else
{
return v___x_3077_;
}
}
}
else
{
lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; 
lean_del_object(v___x_3064_);
lean_dec(v_stop_3062_);
lean_dec(v_start_3061_);
lean_inc(v_snd_3060_);
v___x_3079_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3079_, 0, v_snd_3060_);
v___x_3080_ = l_Lean_MessageData_ofFormat(v___x_3079_);
v___x_3081_ = l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(v___x_3080_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
if (lean_obj_tag(v___x_3081_) == 0)
{
lean_dec_ref_known(v___x_3081_, 1);
v_a_3052_ = v___x_3066_;
goto v___jp_3051_;
}
else
{
return v___x_3081_;
}
}
}
}
v___jp_3051_:
{
size_t v___x_3053_; size_t v___x_3054_; 
v___x_3053_ = ((size_t)1ULL);
v___x_3054_ = lean_usize_add(v_i_3042_, v___x_3053_);
v_i_3042_ = v___x_3054_;
v_b_3043_ = v_a_3052_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2___boxed(lean_object* v___y_3083_, lean_object* v_str_3084_, lean_object* v_as_3085_, lean_object* v_sz_3086_, lean_object* v_i_3087_, lean_object* v_b_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_){
_start:
{
size_t v_sz_boxed_3096_; size_t v_i_boxed_3097_; lean_object* v_res_3098_; 
v_sz_boxed_3096_ = lean_unbox_usize(v_sz_3086_);
lean_dec(v_sz_3086_);
v_i_boxed_3097_ = lean_unbox_usize(v_i_3087_);
lean_dec(v_i_3087_);
v_res_3098_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(v___y_3083_, v_str_3084_, v_as_3085_, v_sz_boxed_3096_, v_i_boxed_3097_, v_b_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_, v___y_3094_);
lean_dec(v___y_3094_);
lean_dec_ref(v___y_3093_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
lean_dec_ref(v_as_3085_);
lean_dec_ref(v_str_3084_);
lean_dec(v___y_3083_);
return v_res_3098_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(lean_object* v_docstring_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_){
_start:
{
lean_object* v_str_3107_; lean_object* v___y_3109_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; 
v_str_3107_ = l_Lean_TSyntax_getDocString(v_docstring_3099_);
v___x_3124_ = lean_unsigned_to_nat(1u);
v___x_3125_ = l_Lean_Syntax_getArg(v_docstring_3099_, v___x_3124_);
v___x_3126_ = l_Lean_Syntax_getHeadInfo_x3f(v___x_3125_);
lean_dec(v___x_3125_);
if (lean_obj_tag(v___x_3126_) == 0)
{
lean_object* v___x_3127_; 
v___x_3127_ = lean_box(0);
v___y_3109_ = v___x_3127_;
goto v___jp_3108_;
}
else
{
lean_object* v_val_3128_; uint8_t v___x_3129_; lean_object* v___x_3130_; 
v_val_3128_ = lean_ctor_get(v___x_3126_, 0);
lean_inc(v_val_3128_);
lean_dec_ref_known(v___x_3126_, 1);
v___x_3129_ = 0;
v___x_3130_ = l_Lean_SourceInfo_getPos_x3f(v_val_3128_, v___x_3129_);
lean_dec(v_val_3128_);
v___y_3109_ = v___x_3130_;
goto v___jp_3108_;
}
v___jp_3108_:
{
lean_object* v___x_3110_; lean_object* v_fst_3111_; lean_object* v___x_3112_; size_t v_sz_3113_; size_t v___x_3114_; lean_object* v___x_3115_; 
lean_inc_ref(v_str_3107_);
v___x_3110_ = l_Lean_rewriteManualLinksCore(v_str_3107_);
v_fst_3111_ = lean_ctor_get(v___x_3110_, 0);
lean_inc(v_fst_3111_);
lean_dec_ref(v___x_3110_);
v___x_3112_ = lean_box(0);
v_sz_3113_ = lean_array_size(v_fst_3111_);
v___x_3114_ = ((size_t)0ULL);
v___x_3115_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(v___y_3109_, v_str_3107_, v_fst_3111_, v_sz_3113_, v___x_3114_, v___x_3112_, v___y_3100_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_);
lean_dec(v_fst_3111_);
lean_dec_ref(v_str_3107_);
lean_dec(v___y_3109_);
if (lean_obj_tag(v___x_3115_) == 0)
{
lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3122_; 
v_isSharedCheck_3122_ = !lean_is_exclusive(v___x_3115_);
if (v_isSharedCheck_3122_ == 0)
{
lean_object* v_unused_3123_; 
v_unused_3123_ = lean_ctor_get(v___x_3115_, 0);
lean_dec(v_unused_3123_);
v___x_3117_ = v___x_3115_;
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
else
{
lean_dec(v___x_3115_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
lean_object* v___x_3120_; 
if (v_isShared_3118_ == 0)
{
lean_ctor_set(v___x_3117_, 0, v___x_3112_);
v___x_3120_ = v___x_3117_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v___x_3112_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
}
else
{
return v___x_3115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0___boxed(lean_object* v_docstring_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_){
_start:
{
lean_object* v_res_3139_; 
v_res_3139_ = l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(v_docstring_3131_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_);
lean_dec(v___y_3137_);
lean_dec_ref(v___y_3136_);
lean_dec(v___y_3135_);
lean_dec_ref(v___y_3134_);
lean_dec(v___y_3133_);
lean_dec_ref(v___y_3132_);
lean_dec(v_docstring_3131_);
return v_res_3139_;
}
}
static lean_object* _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___x_3141_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0));
v___x_3142_ = l_Lean_stringToMessageData(v___x_3141_);
return v___x_3142_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(lean_object* v_stx_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_){
_start:
{
lean_object* v_val_3158_; lean_object* v___x_3165_; lean_object* v___x_3166_; 
v___x_3165_ = lean_unsigned_to_nat(1u);
v___x_3166_ = l_Lean_Syntax_getArg(v_stx_3143_, v___x_3165_);
switch(lean_obj_tag(v___x_3166_))
{
case 2:
{
lean_object* v_val_3167_; 
lean_dec(v_stx_3143_);
v_val_3167_ = lean_ctor_get(v___x_3166_, 1);
lean_inc_ref(v_val_3167_);
lean_dec_ref_known(v___x_3166_, 2);
v_val_3158_ = v_val_3167_;
goto v___jp_3157_;
}
case 1:
{
lean_object* v_kind_3168_; 
v_kind_3168_ = lean_ctor_get(v___x_3166_, 1);
lean_inc(v_kind_3168_);
if (lean_obj_tag(v_kind_3168_) == 1)
{
lean_object* v_pre_3169_; 
v_pre_3169_ = lean_ctor_get(v_kind_3168_, 0);
lean_inc(v_pre_3169_);
if (lean_obj_tag(v_pre_3169_) == 1)
{
lean_object* v_pre_3170_; 
v_pre_3170_ = lean_ctor_get(v_pre_3169_, 0);
lean_inc(v_pre_3170_);
if (lean_obj_tag(v_pre_3170_) == 1)
{
lean_object* v_pre_3171_; 
v_pre_3171_ = lean_ctor_get(v_pre_3170_, 0);
lean_inc(v_pre_3171_);
if (lean_obj_tag(v_pre_3171_) == 1)
{
lean_object* v_pre_3172_; 
v_pre_3172_ = lean_ctor_get(v_pre_3171_, 0);
if (lean_obj_tag(v_pre_3172_) == 0)
{
lean_object* v_str_3173_; lean_object* v_str_3174_; lean_object* v_str_3175_; lean_object* v_str_3176_; lean_object* v___x_3177_; uint8_t v___x_3178_; 
v_str_3173_ = lean_ctor_get(v_kind_3168_, 1);
lean_inc_ref(v_str_3173_);
lean_dec_ref_known(v_kind_3168_, 2);
v_str_3174_ = lean_ctor_get(v_pre_3169_, 1);
lean_inc_ref(v_str_3174_);
lean_dec_ref_known(v_pre_3169_, 2);
v_str_3175_ = lean_ctor_get(v_pre_3170_, 1);
lean_inc_ref(v_str_3175_);
lean_dec_ref_known(v_pre_3170_, 2);
v_str_3176_ = lean_ctor_get(v_pre_3171_, 1);
lean_inc_ref(v_str_3176_);
lean_dec_ref_known(v_pre_3171_, 2);
v___x_3177_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__0));
v___x_3178_ = lean_string_dec_eq(v_str_3176_, v___x_3177_);
lean_dec_ref(v_str_3176_);
if (v___x_3178_ == 0)
{
lean_dec_ref(v_str_3175_);
lean_dec_ref(v_str_3174_);
lean_dec_ref(v_str_3173_);
lean_dec_ref_known(v___x_3166_, 3);
goto v___jp_3151_;
}
else
{
lean_object* v___x_3179_; uint8_t v___x_3180_; 
v___x_3179_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__1));
v___x_3180_ = lean_string_dec_eq(v_str_3175_, v___x_3179_);
lean_dec_ref(v_str_3175_);
if (v___x_3180_ == 0)
{
lean_dec_ref(v_str_3174_);
lean_dec_ref(v_str_3173_);
lean_dec_ref_known(v___x_3166_, 3);
goto v___jp_3151_;
}
else
{
lean_object* v___x_3181_; uint8_t v___x_3182_; 
v___x_3181_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__2));
v___x_3182_ = lean_string_dec_eq(v_str_3174_, v___x_3181_);
lean_dec_ref(v_str_3174_);
if (v___x_3182_ == 0)
{
lean_dec_ref(v_str_3173_);
lean_dec_ref_known(v___x_3166_, 3);
goto v___jp_3151_;
}
else
{
lean_object* v___x_3183_; uint8_t v___x_3184_; 
v___x_3183_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__5));
v___x_3184_ = lean_string_dec_eq(v_str_3173_, v___x_3183_);
lean_dec_ref(v_str_3173_);
if (v___x_3184_ == 0)
{
lean_dec_ref_known(v___x_3166_, 3);
goto v___jp_3151_;
}
else
{
lean_object* v___x_3185_; lean_object* v___x_3186_; 
v___x_3185_ = lean_unsigned_to_nat(0u);
v___x_3186_ = l_Lean_Syntax_getArg(v___x_3166_, v___x_3185_);
lean_dec_ref_known(v___x_3166_, 3);
if (lean_obj_tag(v___x_3186_) == 2)
{
lean_object* v_val_3187_; 
lean_dec(v_stx_3143_);
v_val_3187_ = lean_ctor_get(v___x_3186_, 1);
lean_inc_ref(v_val_3187_);
lean_dec_ref_known(v___x_3186_, 2);
v_val_3158_ = v_val_3187_;
goto v___jp_3157_;
}
else
{
lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; 
lean_dec(v___x_3186_);
v___x_3188_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1, &l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1);
lean_inc(v_stx_3143_);
v___x_3189_ = l_Lean_MessageData_ofSyntax(v_stx_3143_);
v___x_3190_ = l_Lean_indentD(v___x_3189_);
v___x_3191_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3191_, 0, v___x_3188_);
lean_ctor_set(v___x_3191_, 1, v___x_3190_);
v___x_3192_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_stx_3143_, v___x_3191_, v___y_3144_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_);
lean_dec(v_stx_3143_);
return v___x_3192_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_3171_, 2);
lean_dec_ref_known(v_pre_3170_, 2);
lean_dec_ref_known(v_pre_3169_, 2);
lean_dec_ref_known(v_kind_3168_, 2);
lean_dec_ref_known(v___x_3166_, 3);
goto v___jp_3151_;
}
}
else
{
lean_dec(v_pre_3171_);
lean_dec_ref_known(v_pre_3170_, 2);
lean_dec_ref_known(v_pre_3169_, 2);
lean_dec_ref_known(v_kind_3168_, 2);
lean_dec_ref_known(v___x_3166_, 3);
goto v___jp_3151_;
}
}
else
{
lean_dec_ref_known(v_pre_3169_, 2);
lean_dec(v_pre_3170_);
lean_dec_ref_known(v_kind_3168_, 2);
lean_dec_ref_known(v___x_3166_, 3);
goto v___jp_3151_;
}
}
else
{
lean_dec(v_pre_3169_);
lean_dec_ref_known(v_kind_3168_, 2);
lean_dec_ref_known(v___x_3166_, 3);
goto v___jp_3151_;
}
}
else
{
lean_dec_ref_known(v___x_3166_, 3);
lean_dec(v_kind_3168_);
goto v___jp_3151_;
}
}
default: 
{
lean_dec(v___x_3166_);
goto v___jp_3151_;
}
}
v___jp_3151_:
{
lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; 
v___x_3152_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1, &l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1);
lean_inc(v_stx_3143_);
v___x_3153_ = l_Lean_MessageData_ofSyntax(v_stx_3143_);
v___x_3154_ = l_Lean_indentD(v___x_3153_);
v___x_3155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3152_);
lean_ctor_set(v___x_3155_, 1, v___x_3154_);
v___x_3156_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_stx_3143_, v___x_3155_, v___y_3144_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_);
lean_dec(v_stx_3143_);
return v___x_3156_;
}
v___jp_3157_:
{
lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3159_ = lean_unsigned_to_nat(0u);
v___x_3160_ = lean_string_utf8_byte_size(v_val_3158_);
v___x_3161_ = lean_unsigned_to_nat(2u);
v___x_3162_ = lean_nat_sub(v___x_3160_, v___x_3161_);
v___x_3163_ = lean_string_utf8_extract(v_val_3158_, v___x_3159_, v___x_3162_);
lean_dec(v___x_3162_);
lean_dec_ref(v_val_3158_);
v___x_3164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3163_);
return v___x_3164_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___boxed(lean_object* v_stx_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_){
_start:
{
lean_object* v_res_3201_; 
v_res_3201_ = l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(v_stx_3193_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_, v___y_3199_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(lean_object* v_declName_3202_, lean_object* v_docComment_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_){
_start:
{
lean_object* v___y_3212_; lean_object* v___y_3213_; lean_object* v___y_3214_; lean_object* v___y_3215_; lean_object* v___y_3216_; lean_object* v___y_3217_; uint8_t v___x_3274_; 
v___x_3274_ = l_Lean_Name_isAnonymous(v_declName_3202_);
if (v___x_3274_ == 0)
{
lean_object* v___x_3275_; lean_object* v_env_3276_; lean_object* v___x_3277_; 
v___x_3275_ = lean_st_ref_get(v___y_3209_);
v_env_3276_ = lean_ctor_get(v___x_3275_, 0);
lean_inc_ref(v_env_3276_);
lean_dec(v___x_3275_);
v___x_3277_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3276_, v_declName_3202_);
lean_dec_ref(v_env_3276_);
if (lean_obj_tag(v___x_3277_) == 0)
{
v___y_3212_ = v___y_3204_;
v___y_3213_ = v___y_3205_;
v___y_3214_ = v___y_3206_;
v___y_3215_ = v___y_3207_;
v___y_3216_ = v___y_3208_;
v___y_3217_ = v___y_3209_;
goto v___jp_3211_;
}
else
{
lean_dec_ref_known(v___x_3277_, 1);
if (v___x_3274_ == 0)
{
lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; 
lean_dec(v_docComment_3203_);
v___x_3278_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__1, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1);
v___x_3279_ = l_Lean_MessageData_ofConstName(v_declName_3202_, v___x_3274_);
v___x_3280_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3280_, 0, v___x_3278_);
lean_ctor_set(v___x_3280_, 1, v___x_3279_);
v___x_3281_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_3282_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3282_, 0, v___x_3280_);
lean_ctor_set(v___x_3282_, 1, v___x_3281_);
v___x_3283_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3282_, v___y_3204_, v___y_3205_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_);
return v___x_3283_;
}
else
{
v___y_3212_ = v___y_3204_;
v___y_3213_ = v___y_3205_;
v___y_3214_ = v___y_3206_;
v___y_3215_ = v___y_3207_;
v___y_3216_ = v___y_3208_;
v___y_3217_ = v___y_3209_;
goto v___jp_3211_;
}
}
}
else
{
lean_object* v___x_3284_; lean_object* v___x_3285_; 
lean_dec(v_docComment_3203_);
lean_dec(v_declName_3202_);
v___x_3284_ = lean_box(0);
v___x_3285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3285_, 0, v___x_3284_);
return v___x_3285_;
}
v___jp_3211_:
{
lean_object* v___x_3218_; 
v___x_3218_ = l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(v_docComment_3203_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_);
if (lean_obj_tag(v___x_3218_) == 0)
{
lean_object* v___x_3219_; 
lean_dec_ref_known(v___x_3218_, 1);
v___x_3219_ = l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(v_docComment_3203_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_);
if (lean_obj_tag(v___x_3219_) == 0)
{
lean_object* v_a_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3265_; 
v_a_3220_ = lean_ctor_get(v___x_3219_, 0);
v_isSharedCheck_3265_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3265_ == 0)
{
v___x_3222_ = v___x_3219_;
v_isShared_3223_ = v_isSharedCheck_3265_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_a_3220_);
lean_dec(v___x_3219_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3265_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v___x_3224_; lean_object* v_env_3225_; lean_object* v_nextMacroScope_3226_; lean_object* v_ngen_3227_; lean_object* v_auxDeclNGen_3228_; lean_object* v_traceState_3229_; lean_object* v_messages_3230_; lean_object* v_infoState_3231_; lean_object* v_snapshotTasks_3232_; lean_object* v___x_3234_; uint8_t v_isShared_3235_; uint8_t v_isSharedCheck_3263_; 
v___x_3224_ = lean_st_ref_take(v___y_3217_);
v_env_3225_ = lean_ctor_get(v___x_3224_, 0);
v_nextMacroScope_3226_ = lean_ctor_get(v___x_3224_, 1);
v_ngen_3227_ = lean_ctor_get(v___x_3224_, 2);
v_auxDeclNGen_3228_ = lean_ctor_get(v___x_3224_, 3);
v_traceState_3229_ = lean_ctor_get(v___x_3224_, 4);
v_messages_3230_ = lean_ctor_get(v___x_3224_, 6);
v_infoState_3231_ = lean_ctor_get(v___x_3224_, 7);
v_snapshotTasks_3232_ = lean_ctor_get(v___x_3224_, 8);
v_isSharedCheck_3263_ = !lean_is_exclusive(v___x_3224_);
if (v_isSharedCheck_3263_ == 0)
{
lean_object* v_unused_3264_; 
v_unused_3264_ = lean_ctor_get(v___x_3224_, 5);
lean_dec(v_unused_3264_);
v___x_3234_ = v___x_3224_;
v_isShared_3235_ = v_isSharedCheck_3263_;
goto v_resetjp_3233_;
}
else
{
lean_inc(v_snapshotTasks_3232_);
lean_inc(v_infoState_3231_);
lean_inc(v_messages_3230_);
lean_inc(v_traceState_3229_);
lean_inc(v_auxDeclNGen_3228_);
lean_inc(v_ngen_3227_);
lean_inc(v_nextMacroScope_3226_);
lean_inc(v_env_3225_);
lean_dec(v___x_3224_);
v___x_3234_ = lean_box(0);
v_isShared_3235_ = v_isSharedCheck_3263_;
goto v_resetjp_3233_;
}
v_resetjp_3233_:
{
lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3241_; 
v___x_3236_ = l_Lean_docStringExt;
v___x_3237_ = l_String_removeLeadingSpaces(v_a_3220_);
v___x_3238_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_3236_, v_env_3225_, v_declName_3202_, v___x_3237_);
v___x_3239_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_3235_ == 0)
{
lean_ctor_set(v___x_3234_, 5, v___x_3239_);
lean_ctor_set(v___x_3234_, 0, v___x_3238_);
v___x_3241_ = v___x_3234_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3262_; 
v_reuseFailAlloc_3262_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3262_, 0, v___x_3238_);
lean_ctor_set(v_reuseFailAlloc_3262_, 1, v_nextMacroScope_3226_);
lean_ctor_set(v_reuseFailAlloc_3262_, 2, v_ngen_3227_);
lean_ctor_set(v_reuseFailAlloc_3262_, 3, v_auxDeclNGen_3228_);
lean_ctor_set(v_reuseFailAlloc_3262_, 4, v_traceState_3229_);
lean_ctor_set(v_reuseFailAlloc_3262_, 5, v___x_3239_);
lean_ctor_set(v_reuseFailAlloc_3262_, 6, v_messages_3230_);
lean_ctor_set(v_reuseFailAlloc_3262_, 7, v_infoState_3231_);
lean_ctor_set(v_reuseFailAlloc_3262_, 8, v_snapshotTasks_3232_);
v___x_3241_ = v_reuseFailAlloc_3262_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v_mctx_3244_; lean_object* v_zetaDeltaFVarIds_3245_; lean_object* v_postponed_3246_; lean_object* v_diag_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3260_; 
v___x_3242_ = lean_st_ref_put(v___y_3217_, v___x_3241_);
v___x_3243_ = lean_st_ref_take(v___y_3215_);
v_mctx_3244_ = lean_ctor_get(v___x_3243_, 0);
v_zetaDeltaFVarIds_3245_ = lean_ctor_get(v___x_3243_, 2);
v_postponed_3246_ = lean_ctor_get(v___x_3243_, 3);
v_diag_3247_ = lean_ctor_get(v___x_3243_, 4);
v_isSharedCheck_3260_ = !lean_is_exclusive(v___x_3243_);
if (v_isSharedCheck_3260_ == 0)
{
lean_object* v_unused_3261_; 
v_unused_3261_ = lean_ctor_get(v___x_3243_, 1);
lean_dec(v_unused_3261_);
v___x_3249_ = v___x_3243_;
v_isShared_3250_ = v_isSharedCheck_3260_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_diag_3247_);
lean_inc(v_postponed_3246_);
lean_inc(v_zetaDeltaFVarIds_3245_);
lean_inc(v_mctx_3244_);
lean_dec(v___x_3243_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3260_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3254_; 
v___x_3251_ = lean_box(0);
v___x_3252_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_3250_ == 0)
{
lean_ctor_set(v___x_3249_, 1, v___x_3252_);
v___x_3254_ = v___x_3249_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v_mctx_3244_);
lean_ctor_set(v_reuseFailAlloc_3259_, 1, v___x_3252_);
lean_ctor_set(v_reuseFailAlloc_3259_, 2, v_zetaDeltaFVarIds_3245_);
lean_ctor_set(v_reuseFailAlloc_3259_, 3, v_postponed_3246_);
lean_ctor_set(v_reuseFailAlloc_3259_, 4, v_diag_3247_);
v___x_3254_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
lean_object* v___x_3255_; lean_object* v___x_3257_; 
v___x_3255_ = lean_st_ref_put(v___y_3215_, v___x_3254_);
if (v_isShared_3223_ == 0)
{
lean_ctor_set(v___x_3222_, 0, v___x_3251_);
v___x_3257_ = v___x_3222_;
goto v_reusejp_3256_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v___x_3251_);
v___x_3257_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3256_;
}
v_reusejp_3256_:
{
return v___x_3257_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3266_; lean_object* v___x_3268_; uint8_t v_isShared_3269_; uint8_t v_isSharedCheck_3273_; 
lean_dec(v_declName_3202_);
v_a_3266_ = lean_ctor_get(v___x_3219_, 0);
v_isSharedCheck_3273_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3273_ == 0)
{
v___x_3268_ = v___x_3219_;
v_isShared_3269_ = v_isSharedCheck_3273_;
goto v_resetjp_3267_;
}
else
{
lean_inc(v_a_3266_);
lean_dec(v___x_3219_);
v___x_3268_ = lean_box(0);
v_isShared_3269_ = v_isSharedCheck_3273_;
goto v_resetjp_3267_;
}
v_resetjp_3267_:
{
lean_object* v___x_3271_; 
if (v_isShared_3269_ == 0)
{
v___x_3271_ = v___x_3268_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v_a_3266_);
v___x_3271_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
return v___x_3271_;
}
}
}
}
else
{
lean_dec(v_docComment_3203_);
lean_dec(v_declName_3202_);
return v___x_3218_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0___boxed(lean_object* v_declName_3286_, lean_object* v_docComment_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_){
_start:
{
lean_object* v_res_3295_; 
v_res_3295_ = l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(v_declName_3286_, v_docComment_3287_, v___y_3288_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_);
lean_dec(v___y_3293_);
lean_dec_ref(v___y_3292_);
lean_dec(v___y_3291_);
lean_dec_ref(v___y_3290_);
lean_dec(v___y_3289_);
lean_dec_ref(v___y_3288_);
return v_res_3295_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringOf(uint8_t v_isVerso_3296_, lean_object* v_declName_3297_, lean_object* v_binders_3298_, lean_object* v_docComment_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_){
_start:
{
if (v_isVerso_3296_ == 0)
{
lean_object* v___x_3307_; 
lean_dec(v_binders_3298_);
v___x_3307_ = l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(v_declName_3297_, v_docComment_3299_, v___y_3300_, v___y_3301_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_);
return v___x_3307_;
}
else
{
lean_object* v___x_3308_; 
v___x_3308_ = l_Lean_addVersoDocString(v_declName_3297_, v_binders_3298_, v_docComment_3299_, v___y_3300_, v___y_3301_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_);
return v___x_3308_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringOf___boxed(lean_object* v_isVerso_3309_, lean_object* v_declName_3310_, lean_object* v_binders_3311_, lean_object* v_docComment_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_){
_start:
{
uint8_t v_isVerso_boxed_3320_; lean_object* v_res_3321_; 
v_isVerso_boxed_3320_ = lean_unbox(v_isVerso_3309_);
v_res_3321_ = l_Lean_addDocStringOf(v_isVerso_boxed_3320_, v_declName_3310_, v_binders_3311_, v_docComment_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
lean_dec(v___y_3318_);
lean_dec_ref(v___y_3317_);
lean_dec(v___y_3316_);
lean_dec_ref(v___y_3315_);
lean_dec(v___y_3314_);
lean_dec_ref(v___y_3313_);
return v_res_3321_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(lean_object* v_ref_3322_, lean_object* v_msgData_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_){
_start:
{
lean_object* v___x_3331_; 
v___x_3331_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v_ref_3322_, v_msgData_3323_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_);
return v___x_3331_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_3332_, lean_object* v_msgData_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_){
_start:
{
lean_object* v_res_3341_; 
v_res_3341_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(v_ref_3332_, v_msgData_3333_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_, v___y_3338_, v___y_3339_);
lean_dec(v___y_3339_);
lean_dec_ref(v___y_3338_);
lean_dec(v___y_3337_);
lean_dec_ref(v___y_3336_);
lean_dec(v___y_3335_);
lean_dec_ref(v___y_3334_);
lean_dec(v_ref_3332_);
return v_res_3341_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(lean_object* v_declName_3342_, lean_object* v_x_3343_){
_start:
{
lean_object* v___x_3344_; 
v___x_3344_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___redArg(v_declName_3342_, v_x_3343_);
return v___x_3344_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed(lean_object* v_declName_3345_, lean_object* v_x_3346_){
_start:
{
lean_object* v_res_3347_; 
v_res_3347_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(v_declName_3345_, v_x_3346_);
lean_dec(v_declName_3345_);
return v_res_3347_;
}
}
static lean_object* _init_l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3349_; lean_object* v___x_3350_; 
v___x_3349_ = ((lean_object*)(l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0));
v___x_3350_ = l_Lean_stringToMessageData(v___x_3349_);
return v___x_3350_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(lean_object* v_declName_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_){
_start:
{
lean_object* v___f_3359_; lean_object* v___y_3361_; lean_object* v___y_3362_; lean_object* v___x_3403_; lean_object* v_env_3404_; lean_object* v___x_3405_; 
lean_inc(v_declName_3351_);
v___f_3359_ = lean_alloc_closure((void*)(l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3359_, 0, v_declName_3351_);
v___x_3403_ = lean_st_ref_get(v___y_3357_);
v_env_3404_ = lean_ctor_get(v___x_3403_, 0);
lean_inc_ref(v_env_3404_);
lean_dec(v___x_3403_);
v___x_3405_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3404_, v_declName_3351_);
lean_dec_ref(v_env_3404_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_dec(v_declName_3351_);
v___y_3361_ = v___y_3355_;
v___y_3362_ = v___y_3357_;
goto v___jp_3360_;
}
else
{
uint8_t v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; 
lean_dec_ref_known(v___x_3405_, 1);
lean_dec_ref(v___f_3359_);
v___x_3406_ = 0;
v___x_3407_ = lean_obj_once(&l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1, &l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1_once, _init_l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1);
v___x_3408_ = l_Lean_MessageData_ofConstName(v_declName_3351_, v___x_3406_);
v___x_3409_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3409_, 0, v___x_3407_);
lean_ctor_set(v___x_3409_, 1, v___x_3408_);
v___x_3410_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_3411_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3411_, 0, v___x_3409_);
lean_ctor_set(v___x_3411_, 1, v___x_3410_);
v___x_3412_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3411_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_, v___y_3356_, v___y_3357_);
return v___x_3412_;
}
v___jp_3360_:
{
lean_object* v___x_3363_; lean_object* v_env_3364_; lean_object* v_nextMacroScope_3365_; lean_object* v_ngen_3366_; lean_object* v_auxDeclNGen_3367_; lean_object* v_traceState_3368_; lean_object* v_messages_3369_; lean_object* v_infoState_3370_; lean_object* v_snapshotTasks_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3401_; 
v___x_3363_ = lean_st_ref_take(v___y_3362_);
v_env_3364_ = lean_ctor_get(v___x_3363_, 0);
v_nextMacroScope_3365_ = lean_ctor_get(v___x_3363_, 1);
v_ngen_3366_ = lean_ctor_get(v___x_3363_, 2);
v_auxDeclNGen_3367_ = lean_ctor_get(v___x_3363_, 3);
v_traceState_3368_ = lean_ctor_get(v___x_3363_, 4);
v_messages_3369_ = lean_ctor_get(v___x_3363_, 6);
v_infoState_3370_ = lean_ctor_get(v___x_3363_, 7);
v_snapshotTasks_3371_ = lean_ctor_get(v___x_3363_, 8);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3363_);
if (v_isSharedCheck_3401_ == 0)
{
lean_object* v_unused_3402_; 
v_unused_3402_ = lean_ctor_get(v___x_3363_, 5);
lean_dec(v_unused_3402_);
v___x_3373_ = v___x_3363_;
v_isShared_3374_ = v_isSharedCheck_3401_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_snapshotTasks_3371_);
lean_inc(v_infoState_3370_);
lean_inc(v_messages_3369_);
lean_inc(v_traceState_3368_);
lean_inc(v_auxDeclNGen_3367_);
lean_inc(v_ngen_3366_);
lean_inc(v_nextMacroScope_3365_);
lean_inc(v_env_3364_);
lean_dec(v___x_3363_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3401_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3381_; 
v___x_3375_ = l_Lean_docStringExt;
v___x_3376_ = lean_box(2);
v___x_3377_ = lean_box(0);
v___x_3378_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v___x_3375_, v_env_3364_, v___f_3359_, v___x_3376_, v___x_3377_);
v___x_3379_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_3374_ == 0)
{
lean_ctor_set(v___x_3373_, 5, v___x_3379_);
lean_ctor_set(v___x_3373_, 0, v___x_3378_);
v___x_3381_ = v___x_3373_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v___x_3378_);
lean_ctor_set(v_reuseFailAlloc_3400_, 1, v_nextMacroScope_3365_);
lean_ctor_set(v_reuseFailAlloc_3400_, 2, v_ngen_3366_);
lean_ctor_set(v_reuseFailAlloc_3400_, 3, v_auxDeclNGen_3367_);
lean_ctor_set(v_reuseFailAlloc_3400_, 4, v_traceState_3368_);
lean_ctor_set(v_reuseFailAlloc_3400_, 5, v___x_3379_);
lean_ctor_set(v_reuseFailAlloc_3400_, 6, v_messages_3369_);
lean_ctor_set(v_reuseFailAlloc_3400_, 7, v_infoState_3370_);
lean_ctor_set(v_reuseFailAlloc_3400_, 8, v_snapshotTasks_3371_);
v___x_3381_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v_mctx_3384_; lean_object* v_zetaDeltaFVarIds_3385_; lean_object* v_postponed_3386_; lean_object* v_diag_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3398_; 
v___x_3382_ = lean_st_ref_put(v___y_3362_, v___x_3381_);
v___x_3383_ = lean_st_ref_take(v___y_3361_);
v_mctx_3384_ = lean_ctor_get(v___x_3383_, 0);
v_zetaDeltaFVarIds_3385_ = lean_ctor_get(v___x_3383_, 2);
v_postponed_3386_ = lean_ctor_get(v___x_3383_, 3);
v_diag_3387_ = lean_ctor_get(v___x_3383_, 4);
v_isSharedCheck_3398_ = !lean_is_exclusive(v___x_3383_);
if (v_isSharedCheck_3398_ == 0)
{
lean_object* v_unused_3399_; 
v_unused_3399_ = lean_ctor_get(v___x_3383_, 1);
lean_dec(v_unused_3399_);
v___x_3389_ = v___x_3383_;
v_isShared_3390_ = v_isSharedCheck_3398_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_diag_3387_);
lean_inc(v_postponed_3386_);
lean_inc(v_zetaDeltaFVarIds_3385_);
lean_inc(v_mctx_3384_);
lean_dec(v___x_3383_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3398_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3394_; 
v___x_3391_ = lean_box(0);
v___x_3392_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_3390_ == 0)
{
lean_ctor_set(v___x_3389_, 1, v___x_3392_);
v___x_3394_ = v___x_3389_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3397_; 
v_reuseFailAlloc_3397_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3397_, 0, v_mctx_3384_);
lean_ctor_set(v_reuseFailAlloc_3397_, 1, v___x_3392_);
lean_ctor_set(v_reuseFailAlloc_3397_, 2, v_zetaDeltaFVarIds_3385_);
lean_ctor_set(v_reuseFailAlloc_3397_, 3, v_postponed_3386_);
lean_ctor_set(v_reuseFailAlloc_3397_, 4, v_diag_3387_);
v___x_3394_ = v_reuseFailAlloc_3397_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
lean_object* v___x_3395_; lean_object* v___x_3396_; 
v___x_3395_ = lean_st_ref_put(v___y_3361_, v___x_3394_);
v___x_3396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3396_, 0, v___x_3391_);
return v___x_3396_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___boxed(lean_object* v_declName_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_){
_start:
{
lean_object* v_res_3421_; 
v_res_3421_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(v_declName_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_, v___y_3419_);
lean_dec(v___y_3419_);
lean_dec_ref(v___y_3418_);
lean_dec(v___y_3417_);
lean_dec_ref(v___y_3416_);
lean_dec(v___y_3415_);
lean_dec_ref(v___y_3414_);
return v_res_3421_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__1(void){
_start:
{
lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3423_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__0));
v___x_3424_ = l_Lean_stringToMessageData(v___x_3423_);
return v___x_3424_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__3(void){
_start:
{
lean_object* v___x_3426_; lean_object* v___x_3427_; 
v___x_3426_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__2));
v___x_3427_ = l_Lean_stringToMessageData(v___x_3426_);
return v___x_3427_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__5(void){
_start:
{
lean_object* v___x_3429_; lean_object* v___x_3430_; 
v___x_3429_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__4));
v___x_3430_ = l_Lean_stringToMessageData(v___x_3429_);
return v___x_3430_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__7(void){
_start:
{
lean_object* v___x_3432_; lean_object* v___x_3433_; 
v___x_3432_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__6));
v___x_3433_ = l_Lean_stringToMessageData(v___x_3432_);
return v___x_3433_;
}
}
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso(lean_object* v_declName_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_){
_start:
{
lean_object* v___x_3442_; lean_object* v_env_3443_; lean_object* v_ref_3444_; uint8_t v___x_3445_; lean_object* v___x_3446_; 
v___x_3442_ = lean_st_ref_get(v___y_3440_);
v_env_3443_ = lean_ctor_get(v___x_3442_, 0);
lean_inc_ref(v_env_3443_);
lean_dec(v___x_3442_);
v_ref_3444_ = lean_ctor_get(v___y_3439_, 2);
v___x_3445_ = 1;
lean_inc(v_declName_3434_);
v___x_3446_ = l_Lean_findInternalDocString_x3f(v_env_3443_, v_declName_3434_, v___x_3445_);
if (lean_obj_tag(v___x_3446_) == 0)
{
lean_object* v_a_3447_; 
v_a_3447_ = lean_ctor_get(v___x_3446_, 0);
lean_inc(v_a_3447_);
lean_dec_ref_known(v___x_3446_, 1);
if (lean_obj_tag(v_a_3447_) == 1)
{
lean_object* v_val_3448_; 
v_val_3448_ = lean_ctor_get(v_a_3447_, 0);
lean_inc(v_val_3448_);
lean_dec_ref_known(v_a_3447_, 1);
if (lean_obj_tag(v_val_3448_) == 0)
{
lean_object* v_val_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3470_; 
v_val_3449_ = lean_ctor_get(v_val_3448_, 0);
v_isSharedCheck_3470_ = !lean_is_exclusive(v_val_3448_);
if (v_isSharedCheck_3470_ == 0)
{
v___x_3451_ = v_val_3448_;
v_isShared_3452_ = v_isSharedCheck_3470_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_val_3449_);
lean_dec(v_val_3448_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3470_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3453_; 
v___x_3453_ = l_Lean_removeBuiltinDocString(v_declName_3434_);
if (lean_obj_tag(v___x_3453_) == 0)
{
lean_object* v___x_3454_; 
lean_dec_ref_known(v___x_3453_, 1);
lean_del_object(v___x_3451_);
lean_inc(v_declName_3434_);
v___x_3454_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(v_declName_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_, v___y_3439_, v___y_3440_);
if (lean_obj_tag(v___x_3454_) == 0)
{
lean_object* v___x_3455_; 
lean_dec_ref_known(v___x_3454_, 1);
v___x_3455_ = l_Lean_addVersoDocStringFromString(v_declName_3434_, v_val_3449_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_, v___y_3439_, v___y_3440_);
return v___x_3455_;
}
else
{
lean_dec(v_val_3449_);
lean_dec(v_declName_3434_);
return v___x_3454_;
}
}
else
{
lean_object* v_a_3456_; lean_object* v___x_3458_; uint8_t v_isShared_3459_; uint8_t v_isSharedCheck_3469_; 
lean_dec(v_val_3449_);
lean_dec(v_declName_3434_);
v_a_3456_ = lean_ctor_get(v___x_3453_, 0);
v_isSharedCheck_3469_ = !lean_is_exclusive(v___x_3453_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3458_ = v___x_3453_;
v_isShared_3459_ = v_isSharedCheck_3469_;
goto v_resetjp_3457_;
}
else
{
lean_inc(v_a_3456_);
lean_dec(v___x_3453_);
v___x_3458_ = lean_box(0);
v_isShared_3459_ = v_isSharedCheck_3469_;
goto v_resetjp_3457_;
}
v_resetjp_3457_:
{
lean_object* v___x_3460_; lean_object* v___x_3462_; 
v___x_3460_ = lean_io_error_to_string(v_a_3456_);
if (v_isShared_3452_ == 0)
{
lean_ctor_set_tag(v___x_3451_, 3);
lean_ctor_set(v___x_3451_, 0, v___x_3460_);
v___x_3462_ = v___x_3451_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v___x_3460_);
v___x_3462_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3466_; 
v___x_3463_ = l_Lean_MessageData_ofFormat(v___x_3462_);
lean_inc(v_ref_3444_);
v___x_3464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3464_, 0, v_ref_3444_);
lean_ctor_set(v___x_3464_, 1, v___x_3463_);
if (v_isShared_3459_ == 0)
{
lean_ctor_set(v___x_3458_, 0, v___x_3464_);
v___x_3466_ = v___x_3458_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v___x_3464_);
v___x_3466_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
return v___x_3466_;
}
}
}
}
}
}
else
{
lean_object* v___x_3471_; uint8_t v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; 
lean_dec(v_val_3448_);
v___x_3471_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__1, &l_Lean_makeDocStringVerso___closed__1_once, _init_l_Lean_makeDocStringVerso___closed__1);
v___x_3472_ = 0;
v___x_3473_ = l_Lean_MessageData_ofConstName(v_declName_3434_, v___x_3472_);
v___x_3474_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3474_, 0, v___x_3471_);
lean_ctor_set(v___x_3474_, 1, v___x_3473_);
v___x_3475_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__3, &l_Lean_makeDocStringVerso___closed__3_once, _init_l_Lean_makeDocStringVerso___closed__3);
v___x_3476_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3476_, 0, v___x_3474_);
lean_ctor_set(v___x_3476_, 1, v___x_3475_);
v___x_3477_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3476_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_, v___y_3439_, v___y_3440_);
return v___x_3477_;
}
}
else
{
lean_object* v___x_3478_; uint8_t v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; 
lean_dec(v_a_3447_);
v___x_3478_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__5, &l_Lean_makeDocStringVerso___closed__5_once, _init_l_Lean_makeDocStringVerso___closed__5);
v___x_3479_ = 0;
v___x_3480_ = l_Lean_MessageData_ofConstName(v_declName_3434_, v___x_3479_);
v___x_3481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3481_, 0, v___x_3478_);
lean_ctor_set(v___x_3481_, 1, v___x_3480_);
v___x_3482_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__7, &l_Lean_makeDocStringVerso___closed__7_once, _init_l_Lean_makeDocStringVerso___closed__7);
v___x_3483_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3483_, 0, v___x_3481_);
lean_ctor_set(v___x_3483_, 1, v___x_3482_);
v___x_3484_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3483_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_, v___y_3439_, v___y_3440_);
return v___x_3484_;
}
}
else
{
lean_object* v_a_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3496_; 
lean_dec(v_declName_3434_);
v_a_3485_ = lean_ctor_get(v___x_3446_, 0);
v_isSharedCheck_3496_ = !lean_is_exclusive(v___x_3446_);
if (v_isSharedCheck_3496_ == 0)
{
v___x_3487_ = v___x_3446_;
v_isShared_3488_ = v_isSharedCheck_3496_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_a_3485_);
lean_dec(v___x_3446_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3496_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3494_; 
v___x_3489_ = lean_io_error_to_string(v_a_3485_);
v___x_3490_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3490_, 0, v___x_3489_);
v___x_3491_ = l_Lean_MessageData_ofFormat(v___x_3490_);
lean_inc(v_ref_3444_);
v___x_3492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3492_, 0, v_ref_3444_);
lean_ctor_set(v___x_3492_, 1, v___x_3491_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 0, v___x_3492_);
v___x_3494_ = v___x_3487_;
goto v_reusejp_3493_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v___x_3492_);
v___x_3494_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3493_;
}
v_reusejp_3493_:
{
return v___x_3494_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso___boxed(lean_object* v_declName_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_){
_start:
{
lean_object* v_res_3505_; 
v_res_3505_ = l_Lean_makeDocStringVerso(v_declName_3497_, v___y_3498_, v___y_3499_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_);
lean_dec(v___y_3503_);
lean_dec_ref(v___y_3502_);
lean_dec(v___y_3501_);
lean_dec_ref(v___y_3500_);
lean_dec(v___y_3499_);
lean_dec_ref(v___y_3498_);
return v_res_3505_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString(lean_object* v_declName_3506_, lean_object* v_binders_3507_, lean_object* v_docComment_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_){
_start:
{
uint8_t v___x_3516_; lean_object* v___x_3517_; 
v___x_3516_ = l_Lean_isVersoDocComment(v_docComment_3508_);
v___x_3517_ = l_Lean_addDocStringOf(v___x_3516_, v_declName_3506_, v_binders_3507_, v_docComment_3508_, v___y_3509_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_);
return v___x_3517_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString___boxed(lean_object* v_declName_3518_, lean_object* v_binders_3519_, lean_object* v_docComment_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_){
_start:
{
lean_object* v_res_3528_; 
v_res_3528_ = l_Lean_addDocString(v_declName_3518_, v_binders_3519_, v_docComment_3520_, v___y_3521_, v___y_3522_, v___y_3523_, v___y_3524_, v___y_3525_, v___y_3526_);
lean_dec(v___y_3526_);
lean_dec_ref(v___y_3525_);
lean_dec(v___y_3524_);
lean_dec_ref(v___y_3523_);
lean_dec(v___y_3522_);
lean_dec_ref(v___y_3521_);
return v_res_3528_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString_x27(lean_object* v_declName_3529_, lean_object* v_binders_3530_, lean_object* v_docString_x3f_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_){
_start:
{
if (lean_obj_tag(v_docString_x3f_3531_) == 0)
{
lean_object* v___x_3539_; lean_object* v___x_3540_; 
lean_dec(v_binders_3530_);
lean_dec(v_declName_3529_);
v___x_3539_ = lean_box(0);
v___x_3540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3540_, 0, v___x_3539_);
return v___x_3540_;
}
else
{
lean_object* v_val_3541_; lean_object* v___x_3542_; 
v_val_3541_ = lean_ctor_get(v_docString_x3f_3531_, 0);
lean_inc(v_val_3541_);
lean_dec_ref_known(v_docString_x3f_3531_, 1);
v___x_3542_ = l_Lean_addDocString(v_declName_3529_, v_binders_3530_, v_val_3541_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_);
return v___x_3542_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString_x27___boxed(lean_object* v_declName_3543_, lean_object* v_binders_3544_, lean_object* v_docString_x3f_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_){
_start:
{
lean_object* v_res_3553_; 
v_res_3553_ = l_Lean_addDocString_x27(v_declName_3543_, v_binders_3544_, v_docString_x3f_3545_, v___y_3546_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_);
lean_dec(v___y_3551_);
lean_dec_ref(v___y_3550_);
lean_dec(v___y_3549_);
lean_dec_ref(v___y_3548_);
lean_dec(v___y_3547_);
lean_dec_ref(v___y_3546_);
return v_res_3553_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(lean_object* v_env_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_){
_start:
{
lean_object* v___x_3558_; lean_object* v_nextMacroScope_3559_; lean_object* v_ngen_3560_; lean_object* v_auxDeclNGen_3561_; lean_object* v_traceState_3562_; lean_object* v_messages_3563_; lean_object* v_infoState_3564_; lean_object* v_snapshotTasks_3565_; lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3591_; 
v___x_3558_ = lean_st_ref_take(v___y_3556_);
v_nextMacroScope_3559_ = lean_ctor_get(v___x_3558_, 1);
v_ngen_3560_ = lean_ctor_get(v___x_3558_, 2);
v_auxDeclNGen_3561_ = lean_ctor_get(v___x_3558_, 3);
v_traceState_3562_ = lean_ctor_get(v___x_3558_, 4);
v_messages_3563_ = lean_ctor_get(v___x_3558_, 6);
v_infoState_3564_ = lean_ctor_get(v___x_3558_, 7);
v_snapshotTasks_3565_ = lean_ctor_get(v___x_3558_, 8);
v_isSharedCheck_3591_ = !lean_is_exclusive(v___x_3558_);
if (v_isSharedCheck_3591_ == 0)
{
lean_object* v_unused_3592_; lean_object* v_unused_3593_; 
v_unused_3592_ = lean_ctor_get(v___x_3558_, 5);
lean_dec(v_unused_3592_);
v_unused_3593_ = lean_ctor_get(v___x_3558_, 0);
lean_dec(v_unused_3593_);
v___x_3567_ = v___x_3558_;
v_isShared_3568_ = v_isSharedCheck_3591_;
goto v_resetjp_3566_;
}
else
{
lean_inc(v_snapshotTasks_3565_);
lean_inc(v_infoState_3564_);
lean_inc(v_messages_3563_);
lean_inc(v_traceState_3562_);
lean_inc(v_auxDeclNGen_3561_);
lean_inc(v_ngen_3560_);
lean_inc(v_nextMacroScope_3559_);
lean_dec(v___x_3558_);
v___x_3567_ = lean_box(0);
v_isShared_3568_ = v_isSharedCheck_3591_;
goto v_resetjp_3566_;
}
v_resetjp_3566_:
{
lean_object* v___x_3569_; lean_object* v___x_3571_; 
v___x_3569_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_3568_ == 0)
{
lean_ctor_set(v___x_3567_, 5, v___x_3569_);
lean_ctor_set(v___x_3567_, 0, v_env_3554_);
v___x_3571_ = v___x_3567_;
goto v_reusejp_3570_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v_env_3554_);
lean_ctor_set(v_reuseFailAlloc_3590_, 1, v_nextMacroScope_3559_);
lean_ctor_set(v_reuseFailAlloc_3590_, 2, v_ngen_3560_);
lean_ctor_set(v_reuseFailAlloc_3590_, 3, v_auxDeclNGen_3561_);
lean_ctor_set(v_reuseFailAlloc_3590_, 4, v_traceState_3562_);
lean_ctor_set(v_reuseFailAlloc_3590_, 5, v___x_3569_);
lean_ctor_set(v_reuseFailAlloc_3590_, 6, v_messages_3563_);
lean_ctor_set(v_reuseFailAlloc_3590_, 7, v_infoState_3564_);
lean_ctor_set(v_reuseFailAlloc_3590_, 8, v_snapshotTasks_3565_);
v___x_3571_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3570_;
}
v_reusejp_3570_:
{
lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v_mctx_3574_; lean_object* v_zetaDeltaFVarIds_3575_; lean_object* v_postponed_3576_; lean_object* v_diag_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3588_; 
v___x_3572_ = lean_st_ref_put(v___y_3556_, v___x_3571_);
v___x_3573_ = lean_st_ref_take(v___y_3555_);
v_mctx_3574_ = lean_ctor_get(v___x_3573_, 0);
v_zetaDeltaFVarIds_3575_ = lean_ctor_get(v___x_3573_, 2);
v_postponed_3576_ = lean_ctor_get(v___x_3573_, 3);
v_diag_3577_ = lean_ctor_get(v___x_3573_, 4);
v_isSharedCheck_3588_ = !lean_is_exclusive(v___x_3573_);
if (v_isSharedCheck_3588_ == 0)
{
lean_object* v_unused_3589_; 
v_unused_3589_ = lean_ctor_get(v___x_3573_, 1);
lean_dec(v_unused_3589_);
v___x_3579_ = v___x_3573_;
v_isShared_3580_ = v_isSharedCheck_3588_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_diag_3577_);
lean_inc(v_postponed_3576_);
lean_inc(v_zetaDeltaFVarIds_3575_);
lean_inc(v_mctx_3574_);
lean_dec(v___x_3573_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3588_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3584_; 
v___x_3581_ = lean_box(0);
v___x_3582_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_3580_ == 0)
{
lean_ctor_set(v___x_3579_, 1, v___x_3582_);
v___x_3584_ = v___x_3579_;
goto v_reusejp_3583_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v_mctx_3574_);
lean_ctor_set(v_reuseFailAlloc_3587_, 1, v___x_3582_);
lean_ctor_set(v_reuseFailAlloc_3587_, 2, v_zetaDeltaFVarIds_3575_);
lean_ctor_set(v_reuseFailAlloc_3587_, 3, v_postponed_3576_);
lean_ctor_set(v_reuseFailAlloc_3587_, 4, v_diag_3577_);
v___x_3584_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3583_;
}
v_reusejp_3583_:
{
lean_object* v___x_3585_; lean_object* v___x_3586_; 
v___x_3585_ = lean_st_ref_put(v___y_3555_, v___x_3584_);
v___x_3586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3586_, 0, v___x_3581_);
return v___x_3586_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg___boxed(lean_object* v_env_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_){
_start:
{
lean_object* v_res_3598_; 
v_res_3598_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_env_3594_, v___y_3595_, v___y_3596_);
lean_dec(v___y_3596_);
lean_dec(v___y_3595_);
return v_res_3598_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1(lean_object* v_n_3599_, lean_object* v_as_3600_, size_t v_i_3601_, size_t v_stop_3602_, lean_object* v_b_3603_){
_start:
{
uint8_t v___x_3604_; 
v___x_3604_ = lean_usize_dec_eq(v_i_3601_, v_stop_3602_);
if (v___x_3604_ == 0)
{
lean_object* v___x_3605_; lean_object* v_index_3606_; lean_object* v_sourceString_3607_; lean_object* v_imports_3608_; lean_object* v_currNamespace_3609_; lean_object* v_openDecls_3610_; lean_object* v_options_3611_; lean_object* v_check_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3628_; 
v___x_3605_ = lean_array_uget(v_as_3600_, v_i_3601_);
v_index_3606_ = lean_ctor_get(v___x_3605_, 1);
v_sourceString_3607_ = lean_ctor_get(v___x_3605_, 2);
v_imports_3608_ = lean_ctor_get(v___x_3605_, 3);
v_currNamespace_3609_ = lean_ctor_get(v___x_3605_, 4);
v_openDecls_3610_ = lean_ctor_get(v___x_3605_, 5);
v_options_3611_ = lean_ctor_get(v___x_3605_, 6);
v_check_3612_ = lean_ctor_get(v___x_3605_, 7);
v_isSharedCheck_3628_ = !lean_is_exclusive(v___x_3605_);
if (v_isSharedCheck_3628_ == 0)
{
lean_object* v_unused_3629_; 
v_unused_3629_ = lean_ctor_get(v___x_3605_, 0);
lean_dec(v_unused_3629_);
v___x_3614_ = v___x_3605_;
v_isShared_3615_ = v_isSharedCheck_3628_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_check_3612_);
lean_inc(v_options_3611_);
lean_inc(v_openDecls_3610_);
lean_inc(v_currNamespace_3609_);
lean_inc(v_imports_3608_);
lean_inc(v_sourceString_3607_);
lean_inc(v_index_3606_);
lean_dec(v___x_3605_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3628_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v___x_3616_; lean_object* v_toEnvExtension_3617_; lean_object* v_asyncMode_3618_; lean_object* v___x_3619_; lean_object* v___x_3621_; 
v___x_3616_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_3617_ = lean_ctor_get(v___x_3616_, 0);
v_asyncMode_3618_ = lean_ctor_get(v_toEnvExtension_3617_, 2);
lean_inc(v_n_3599_);
v___x_3619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3619_, 0, v_n_3599_);
if (v_isShared_3615_ == 0)
{
lean_ctor_set(v___x_3614_, 0, v___x_3619_);
v___x_3621_ = v___x_3614_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v___x_3619_);
lean_ctor_set(v_reuseFailAlloc_3627_, 1, v_index_3606_);
lean_ctor_set(v_reuseFailAlloc_3627_, 2, v_sourceString_3607_);
lean_ctor_set(v_reuseFailAlloc_3627_, 3, v_imports_3608_);
lean_ctor_set(v_reuseFailAlloc_3627_, 4, v_currNamespace_3609_);
lean_ctor_set(v_reuseFailAlloc_3627_, 5, v_openDecls_3610_);
lean_ctor_set(v_reuseFailAlloc_3627_, 6, v_options_3611_);
lean_ctor_set(v_reuseFailAlloc_3627_, 7, v_check_3612_);
v___x_3621_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3620_;
}
v_reusejp_3620_:
{
lean_object* v___x_3622_; lean_object* v___x_3623_; size_t v___x_3624_; size_t v___x_3625_; 
v___x_3622_ = lean_box(0);
v___x_3623_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_3616_, v_b_3603_, v___x_3621_, v_asyncMode_3618_, v___x_3622_);
v___x_3624_ = ((size_t)1ULL);
v___x_3625_ = lean_usize_add(v_i_3601_, v___x_3624_);
v_i_3601_ = v___x_3625_;
v_b_3603_ = v___x_3623_;
goto _start;
}
}
}
else
{
lean_dec(v_n_3599_);
return v_b_3603_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1___boxed(lean_object* v_n_3630_, lean_object* v_as_3631_, lean_object* v_i_3632_, lean_object* v_stop_3633_, lean_object* v_b_3634_){
_start:
{
size_t v_i_boxed_3635_; size_t v_stop_boxed_3636_; lean_object* v_res_3637_; 
v_i_boxed_3635_ = lean_unbox_usize(v_i_3632_);
lean_dec(v_i_3632_);
v_stop_boxed_3636_ = lean_unbox_usize(v_stop_3633_);
lean_dec(v_stop_3633_);
v_res_3637_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1(v_n_3630_, v_as_3631_, v_i_boxed_3635_, v_stop_boxed_3636_, v_b_3634_);
lean_dec_ref(v_as_3631_);
return v_res_3637_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(lean_object* v_docs_3638_, lean_object* v_deferred_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_){
_start:
{
lean_object* v___x_3647_; lean_object* v_env_3648_; lean_object* v___x_3649_; uint8_t v___x_3650_; 
v___x_3647_ = lean_st_ref_get(v___y_3645_);
v_env_3648_ = lean_ctor_get(v___x_3647_, 0);
lean_inc_ref(v_env_3648_);
lean_dec(v___x_3647_);
v___x_3649_ = l_Lean_getMainModuleDoc(v_env_3648_);
v___x_3650_ = l_Lean_PersistentArray_isEmpty___redArg(v___x_3649_);
lean_dec_ref(v___x_3649_);
if (v___x_3650_ == 0)
{
lean_object* v___x_3651_; lean_object* v___x_3652_; 
lean_dec_ref(v_docs_3638_);
v___x_3651_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1);
v___x_3652_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3651_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_, v___y_3644_, v___y_3645_);
return v___x_3652_;
}
else
{
lean_object* v___x_3653_; lean_object* v_env_3654_; lean_object* v___x_3655_; lean_object* v_size_3656_; lean_object* v___x_3657_; lean_object* v_env_3658_; lean_object* v___x_3659_; 
v___x_3653_ = lean_st_ref_get(v___y_3645_);
v_env_3654_ = lean_ctor_get(v___x_3653_, 0);
lean_inc_ref(v_env_3654_);
lean_dec(v___x_3653_);
v___x_3655_ = l_Lean_getMainVersoModuleDocs(v_env_3654_);
v_size_3656_ = lean_ctor_get(v___x_3655_, 2);
lean_inc(v_size_3656_);
lean_dec_ref(v___x_3655_);
v___x_3657_ = lean_st_ref_get(v___y_3645_);
v_env_3658_ = lean_ctor_get(v___x_3657_, 0);
lean_inc_ref(v_env_3658_);
lean_dec(v___x_3657_);
v___x_3659_ = l_Lean_addVersoModuleDocSnippet(v_env_3658_, v_docs_3638_);
if (lean_obj_tag(v___x_3659_) == 0)
{
lean_object* v_a_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; 
lean_dec(v_size_3656_);
v_a_3660_ = lean_ctor_get(v___x_3659_, 0);
lean_inc(v_a_3660_);
lean_dec_ref_known(v___x_3659_, 1);
v___x_3661_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1);
v___x_3662_ = l_Lean_stringToMessageData(v_a_3660_);
v___x_3663_ = l_Lean_indentD(v___x_3662_);
v___x_3664_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3664_, 0, v___x_3661_);
lean_ctor_set(v___x_3664_, 1, v___x_3663_);
v___x_3665_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3664_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_, v___y_3644_, v___y_3645_);
return v___x_3665_;
}
else
{
lean_object* v_a_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; uint8_t v___x_3669_; 
v_a_3666_ = lean_ctor_get(v___x_3659_, 0);
lean_inc(v_a_3666_);
lean_dec_ref_known(v___x_3659_, 1);
v___x_3667_ = lean_unsigned_to_nat(0u);
v___x_3668_ = lean_array_get_size(v_deferred_3639_);
v___x_3669_ = lean_nat_dec_lt(v___x_3667_, v___x_3668_);
if (v___x_3669_ == 0)
{
lean_object* v___x_3670_; 
lean_dec(v_size_3656_);
v___x_3670_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_a_3666_, v___y_3643_, v___y_3645_);
return v___x_3670_;
}
else
{
size_t v___x_3671_; size_t v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; 
v___x_3671_ = ((size_t)0ULL);
v___x_3672_ = lean_usize_of_nat(v___x_3668_);
v___x_3673_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1(v_size_3656_, v_deferred_3639_, v___x_3671_, v___x_3672_, v_a_3666_);
v___x_3674_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v___x_3673_, v___y_3643_, v___y_3645_);
return v___x_3674_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0___boxed(lean_object* v_docs_3675_, lean_object* v_deferred_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_){
_start:
{
lean_object* v_res_3684_; 
v_res_3684_ = l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(v_docs_3675_, v_deferred_3676_, v___y_3677_, v___y_3678_, v___y_3679_, v___y_3680_, v___y_3681_, v___y_3682_);
lean_dec(v___y_3682_);
lean_dec_ref(v___y_3681_);
lean_dec(v___y_3680_);
lean_dec_ref(v___y_3679_);
lean_dec(v___y_3678_);
lean_dec_ref(v___y_3677_);
lean_dec_ref(v_deferred_3676_);
return v_res_3684_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString(lean_object* v_range_3685_, lean_object* v_docComment_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_){
_start:
{
lean_object* v___x_3694_; 
v___x_3694_ = l_Lean_versoModDocString(v_range_3685_, v_docComment_3686_, v___y_3687_, v___y_3688_, v___y_3689_, v___y_3690_, v___y_3691_, v___y_3692_);
if (lean_obj_tag(v___x_3694_) == 0)
{
lean_object* v_a_3695_; lean_object* v_fst_3696_; lean_object* v_snd_3697_; lean_object* v___x_3698_; 
v_a_3695_ = lean_ctor_get(v___x_3694_, 0);
lean_inc(v_a_3695_);
lean_dec_ref_known(v___x_3694_, 1);
v_fst_3696_ = lean_ctor_get(v_a_3695_, 0);
lean_inc(v_fst_3696_);
v_snd_3697_ = lean_ctor_get(v_a_3695_, 1);
lean_inc(v_snd_3697_);
lean_dec(v_a_3695_);
v___x_3698_ = l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(v_fst_3696_, v_snd_3697_, v___y_3687_, v___y_3688_, v___y_3689_, v___y_3690_, v___y_3691_, v___y_3692_);
lean_dec(v_snd_3697_);
return v___x_3698_;
}
else
{
lean_object* v_a_3699_; lean_object* v___x_3701_; uint8_t v_isShared_3702_; uint8_t v_isSharedCheck_3706_; 
v_a_3699_ = lean_ctor_get(v___x_3694_, 0);
v_isSharedCheck_3706_ = !lean_is_exclusive(v___x_3694_);
if (v_isSharedCheck_3706_ == 0)
{
v___x_3701_ = v___x_3694_;
v_isShared_3702_ = v_isSharedCheck_3706_;
goto v_resetjp_3700_;
}
else
{
lean_inc(v_a_3699_);
lean_dec(v___x_3694_);
v___x_3701_ = lean_box(0);
v_isShared_3702_ = v_isSharedCheck_3706_;
goto v_resetjp_3700_;
}
v_resetjp_3700_:
{
lean_object* v___x_3704_; 
if (v_isShared_3702_ == 0)
{
v___x_3704_ = v___x_3701_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3705_; 
v_reuseFailAlloc_3705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3705_, 0, v_a_3699_);
v___x_3704_ = v_reuseFailAlloc_3705_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
return v___x_3704_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString___boxed(lean_object* v_range_3707_, lean_object* v_docComment_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_){
_start:
{
lean_object* v_res_3716_; 
v_res_3716_ = l_Lean_addVersoModDocString(v_range_3707_, v_docComment_3708_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_, v___y_3713_, v___y_3714_);
lean_dec(v___y_3714_);
lean_dec_ref(v___y_3713_);
lean_dec(v___y_3712_);
lean_dec_ref(v___y_3711_);
lean_dec(v___y_3710_);
lean_dec_ref(v___y_3709_);
lean_dec(v_docComment_3708_);
return v_res_3716_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(lean_object* v_env_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_){
_start:
{
lean_object* v___x_3725_; 
v___x_3725_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_env_3717_, v___y_3721_, v___y_3723_);
return v___x_3725_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___boxed(lean_object* v_env_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_){
_start:
{
lean_object* v_res_3734_; 
v_res_3734_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(v_env_3726_, v___y_3727_, v___y_3728_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_);
lean_dec(v___y_3732_);
lean_dec_ref(v___y_3731_);
lean_dec(v___y_3730_);
lean_dec_ref(v___y_3729_);
lean_dec(v___y_3728_);
lean_dec_ref(v___y_3727_);
return v_res_3734_;
}
}
lean_object* runtime_initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_DeferredCheck(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Parser(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_DeferredCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* initialize_Lean_DocString_DeferredCheck(uint8_t builtin);
lean_object* initialize_Lean_DocString_Parser(uint8_t builtin);
lean_object* initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_DeferredCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DocString_Add(builtin);
}
#ifdef __cplusplus
}
#endif
