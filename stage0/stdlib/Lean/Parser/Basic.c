// Lean compiler output
// Module: Lean.Parser.Basic
// Imports: public import Lean.Parser.Types
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
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_String_instInhabitedSlice;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailInfo(lean_object*);
uint8_t lean_string_is_valid_pos(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* l_Lean_Data_Trie_matchPrefix___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
extern uint32_t l_Lean_idBeginEscape;
uint8_t l_Lean_isLetterLike(uint32_t);
uint8_t l_Lean_isSubScriptAlnum(uint32_t);
lean_object* l_Lean_Parser_ParserState_next(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_next_x27___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_pushSyntax(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Parser_instBEqError_beq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkErrorAt(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern uint32_t l_Lean_idEndEscape;
lean_object* l_Lean_Parser_ParserState_mkUnexpectedErrorAt(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkLit(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
lean_object* l_Lean_Parser_ParserState_popSyntax(lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkError(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_size(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenError(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Parser_adaptCacheableContext(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_instInhabitedParserFn___lam__0(lean_object*, lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_withCacheFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_adaptCacheableContextFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_Parser_FirstTokens_seq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxNodeKindSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_stackSize(lean_object*);
lean_object* l_Lean_Parser_ParserState_mkNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_FirstTokens_merge(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t l_Lean_Syntax_isAntiquots(lean_object*);
lean_object* l_Lean_Parser_ParserState_restore(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_merge(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_toSubarray(lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lean_Parser_ParserState_shrinkStack(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_maxPrec;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_shrink(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_push(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_flip(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Parser_SyntaxStack_isEmpty(lean_object*);
lean_object* l_Lean_Syntax_setTailInfo(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Parser_FirstTokens_toOptional(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Parser_ParserState_mkTrailingNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_dbg_trace(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_toString(lean_object*);
lean_object* l_addParenHeuristic(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceStateFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceStateFn___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0_spec__0___closed__0 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__0 = (const lean_object*)&l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__0_value;
static const lean_string_object l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__1 = (const lean_object*)&l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__1_value;
static const lean_string_object l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__2 = (const lean_object*)&l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0(lean_object*);
static const lean_string_object l_Lean_Parser_dbgTraceStateFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\n  pos: "};
static const lean_object* l_Lean_Parser_dbgTraceStateFn___closed__0 = (const lean_object*)&l_Lean_Parser_dbgTraceStateFn___closed__0_value;
static const lean_string_object l_Lean_Parser_dbgTraceStateFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\n  err: "};
static const lean_object* l_Lean_Parser_dbgTraceStateFn___closed__1 = (const lean_object*)&l_Lean_Parser_dbgTraceStateFn___closed__1_value;
static const lean_string_object l_Lean_Parser_dbgTraceStateFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\n  out: "};
static const lean_object* l_Lean_Parser_dbgTraceStateFn___closed__2 = (const lean_object*)&l_Lean_Parser_dbgTraceStateFn___closed__2_value;
static const lean_string_object l_Lean_Parser_dbgTraceStateFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Lean_Parser_dbgTraceStateFn___closed__3 = (const lean_object*)&l_Lean_Parser_dbgTraceStateFn___closed__3_value;
static const lean_string_object l_Lean_Parser_dbgTraceStateFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_Parser_dbgTraceStateFn___closed__4 = (const lean_object*)&l_Lean_Parser_dbgTraceStateFn___closed__4_value;
static const lean_string_object l_Lean_Parser_dbgTraceStateFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "(some "};
static const lean_object* l_Lean_Parser_dbgTraceStateFn___closed__5 = (const lean_object*)&l_Lean_Parser_dbgTraceStateFn___closed__5_value;
static const lean_string_object l_Lean_Parser_dbgTraceStateFn___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Parser_dbgTraceStateFn___closed__6 = (const lean_object*)&l_Lean_Parser_dbgTraceStateFn___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceStateFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_epsilonInfo___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_epsilonInfo___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_epsilonInfo___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_epsilonInfo___lam__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_epsilonInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_epsilonInfo___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_epsilonInfo___closed__0 = (const lean_object*)&l_Lean_Parser_epsilonInfo___closed__0_value;
static const lean_closure_object l_Lean_Parser_epsilonInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_epsilonInfo___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_epsilonInfo___closed__1 = (const lean_object*)&l_Lean_Parser_epsilonInfo___closed__1_value;
static const lean_ctor_object l_Lean_Parser_epsilonInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_epsilonInfo___closed__0_value),((lean_object*)&l_Lean_Parser_epsilonInfo___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_epsilonInfo___closed__2 = (const lean_object*)&l_Lean_Parser_epsilonInfo___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_epsilonInfo = (const lean_object*)&l_Lean_Parser_epsilonInfo___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_checkStackTopFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkStackTopFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkStackTopFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkStackTop(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_andthenInfo___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_andthenInfo___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_andthenInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instAndThenParserFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instAndThenParserFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instAndThenParserFn___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instAndThenParserFn___closed__0 = (const lean_object*)&l_Lean_Parser_instAndThenParserFn___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instAndThenParserFn = (const lean_object*)&l_Lean_Parser_instAndThenParserFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instAndThenParser___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instAndThenParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instAndThenParser___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instAndThenParser___closed__0 = (const lean_object*)&l_Lean_Parser_instAndThenParser___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instAndThenParser = (const lean_object*)&l_Lean_Parser_instAndThenParser___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_nodeFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_trailingNodeFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nodeInfo___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nodeInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_node(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_errorFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_errorFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_errorFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_error(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_errorAtSavedPosFn(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_errorAtSavedPosFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Parser_errorAtSavedPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_epsilonInfo___closed__0_value),((lean_object*)&l_Lean_Parser_epsilonInfo___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_errorAtSavedPos___closed__0 = (const lean_object*)&l_Lean_Parser_errorAtSavedPos___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_errorAtSavedPos(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_errorAtSavedPos___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "errorAtSavedPos"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(253, 209, 12, 134, 87, 184, 144, 74)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__3 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__3_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 200, .m_capacity = 200, .m_length = 199, .m_data = "Generate an error at the position saved with the `withPosition` combinator.\nIf `delta == true`, then it reports at saved position+1.\nThis useful to make sure a parser consumed at least one character."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__4 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_checkPrecFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "unexpected token at this precedence level; consider parenthesizing the term"};
static const lean_object* l_Lean_Parser_checkPrecFn___closed__0 = (const lean_object*)&l_Lean_Parser_checkPrecFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_checkPrecFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkPrecFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkPrec(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrecFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrecFn___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrecFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrecFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrec(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setLhsPrecFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setLhsPrecFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setLhsPrecFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setLhsPrec(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_incQuotDepth___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_incQuotDepth___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth(lean_object*);
static lean_once_cell_t l_Lean_Parser_decQuotDepth___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_decQuotDepth___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot___lam__0(lean_object*);
static const lean_closure_object l_Lean_Parser_suppressInsideQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_suppressInsideQuot___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_suppressInsideQuot___closed__0 = (const lean_object*)&l_Lean_Parser_suppressInsideQuot___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_trailingNodeAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_trailingNode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mergeOrElseErrors(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_mergeOrElseErrors___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqOrElseOnAntiquotBehavior_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqOrElseOnAntiquotBehavior_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqOrElseOnAntiquotBehavior___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instBEqOrElseOnAntiquotBehavior_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instBEqOrElseOnAntiquotBehavior___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqOrElseOnAntiquotBehavior___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instBEqOrElseOnAntiquotBehavior = (const lean_object*)&l_Lean_Parser_instBEqOrElseOnAntiquotBehavior___closed__0_value;
static const lean_string_object l_Lean_Parser_orelseFnCore___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l_Lean_Parser_orelseFnCore___lam__0___closed__0 = (const lean_object*)&l_Lean_Parser_orelseFnCore___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Parser_orelseFnCore___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_orelseFnCore___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l_Lean_Parser_orelseFnCore___lam__0___closed__1 = (const lean_object*)&l_Lean_Parser_orelseFnCore___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_orelseFnCore___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_orelseFnCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_orelseFnCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_orelseFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_orelseInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instOrElseParserFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instOrElseParserFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instOrElseParserFn___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instOrElseParserFn___closed__0 = (const lean_object*)&l_Lean_Parser_instOrElseParserFn___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instOrElseParserFn = (const lean_object*)&l_Lean_Parser_instOrElseParserFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_orelse(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orelse"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 70, 47, 117, 238, 126, 239, 49)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 321, .m_capacity = 321, .m_length = 320, .m_data = "Run `p`, falling back to `q` if `p` failed without consuming any input.\n\nNOTE: In order for the pretty printer to retrace an `orelse`, `p` must be a call to `node` or some other parser\nproducing a single node kind. Nested `orelse` calls are flattened for this, i.e. `(node k1 p1 <|> node k2 p2) <|> ...`\nis fine as well."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instOrElseParser___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instOrElseParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instOrElseParser___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instOrElseParser___closed__0 = (const lean_object*)&l_Lean_Parser_instOrElseParser___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instOrElseParser = (const lean_object*)&l_Lean_Parser_instOrElseParser___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_noFirstTokenInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_atomicFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_atomic(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "atomic"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 16, 254, 130, 153, 255, 99, 153)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 458, .m_capacity = 458, .m_length = 457, .m_data = "The `atomic(p)` parser parses `p`, returns the same result as `p` and fails iff `p` fails,\nbut if `p` fails after consuming some tokens `atomic(p)` will fail without consuming tokens.\nThis is important for the `p <|> q` combinator, because it is not backtracking, and will fail if\n`p` fails after consuming some tokens. To get backtracking behavior, use `atomic(p) <|> q` instead.\n\nThis parser has the same arity as `p` - it produces the same result as `p`."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqRecoveryContext_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqRecoveryContext_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqRecoveryContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instBEqRecoveryContext_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instBEqRecoveryContext___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqRecoveryContext___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instBEqRecoveryContext = (const lean_object*)&l_Lean_Parser_instBEqRecoveryContext___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Parser_instDecidableEqRecoveryContext_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instDecidableEqRecoveryContext_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_instDecidableEqRecoveryContext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instDecidableEqRecoveryContext___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "initialPos"};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__7;
static const lean_string_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "{ byteIdx := "};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__9_value;
static const lean_string_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__10 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__11_value;
static const lean_string_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__12_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__13 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__13_value;
static const lean_string_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "initialSize"};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__15 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__15_value;
static lean_once_cell_t l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__16;
static lean_once_cell_t l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__17;
static lean_once_cell_t l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__18;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__19 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__19_value;
LEAN_EXPORT lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instReprRecoveryContext_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instReprRecoveryContext_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instReprRecoveryContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instReprRecoveryContext_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instReprRecoveryContext___closed__0 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instReprRecoveryContext = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_recoverFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_recover_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_recover_x27(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "recover'"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 86, 208, 93, 10, 1, 153, 43)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 454, .m_capacity = 454, .m_length = 453, .m_data = "Recover from errors in `parser` using `handler` to consume input until a known-good state has appeared.\nIf `handler` fails itself, then no recovery is performed.\n\n`handler` is provided with information about the failing parser's effects , and it is run in the\nstate immediately after the failure.\n\nThe interactions between <|> and `recover'` are subtle, especially for syntactic\ncategories that admit user extension. Consider avoiding it in these cases."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_recover___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_recover___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_recover(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "recover"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 137, 49, 69, 62, 133, 213, 34)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 380, .m_capacity = 380, .m_length = 379, .m_data = "Recover from errors in `parser` using `handler` to consume input until a known-good state has appeared.\nIf `handler` fails itself, then no recovery is performed.\n\n`handler` is run in the state immediately after the failure.\n\nThe interactions between <|> and `recover` are subtle, especially for syntactic\ncategories that admit user extension. Consider avoiding it in these cases."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_optionalFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Parser_optionalFn___closed__0 = (const lean_object*)&l_Lean_Parser_optionalFn___closed__0_value;
static const lean_ctor_object l_Lean_Parser_optionalFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_optionalFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Parser_optionalFn___closed__1 = (const lean_object*)&l_Lean_Parser_optionalFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_optionalFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_optionalInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_optionalNoAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_lookaheadFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_lookahead(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lookahead"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 19, 60, 201, 90, 143, 111, 211)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 309, .m_capacity = 309, .m_length = 308, .m_data = "`lookahead(p)` runs `p` and fails if `p` does, but it produces no parse nodes and rewinds the\nposition to the original state on success. So for example `lookahead(\"=>\")` will ensure that the\nnext token is `\"=>\"`, without actually consuming this token.\n\nThis parser has arity 0 - it does not capture anything."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_notFollowedByFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "unexpected "};
static const lean_object* l_Lean_Parser_notFollowedByFn___closed__0 = (const lean_object*)&l_Lean_Parser_notFollowedByFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_notFollowedByFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notFollowedByFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notFollowedBy(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "notFollowedBy"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(26, 0, 133, 48, 146, 73, 208, 113)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 174, .m_capacity = 174, .m_length = 173, .m_data = "`notFollowedBy(p, \"foo\")` succeeds iff `p` fails;\nif `p` succeeds then it fails with the message `\"unexpected foo\"`.\n\nThis parser has arity 0 - it does not capture anything."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_manyAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "invalid 'many' parser combinator application, parser did not consume anything"};
static const lean_object* l_Lean_Parser_manyAux___closed__0 = (const lean_object*)&l_Lean_Parser_manyAux___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_manyAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_manyFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_manyNoAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1Fn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1NoAntiquot(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux_parse(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux_parse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByFn(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Fn(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Fn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Info(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByNoAntiquot(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByNoAntiquot___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1NoAntiquot(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1NoAntiquot___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResultOfFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResultOfInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResultOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1Unbox___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1Unbox___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_many1Unbox___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many1Unbox___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_many1Unbox___closed__0 = (const lean_object*)&l_Lean_Parser_many1Unbox___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_many1Unbox(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_satisfyFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_satisfyFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_takeUntilFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_takeUntilFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_takeWhileFn___lam__0(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhileFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhileFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhileFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhile1Fn(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "unterminated comment"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_finishCommentBlock(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_finishCommentBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_whitespace___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parser_whitespace___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_whitespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_whitespace___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_whitespace___closed__0 = (const lean_object*)&l_Lean_Parser_whitespace___closed__0_value;
static const lean_closure_object l_Lean_Parser_whitespace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_takeUntilFn___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_whitespace___closed__0_value)} };
static const lean_object* l_Lean_Parser_whitespace___closed__1 = (const lean_object*)&l_Lean_Parser_whitespace___closed__1_value;
static const lean_string_object l_Lean_Parser_whitespace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "isolated carriage returns are not allowed"};
static const lean_object* l_Lean_Parser_whitespace___closed__2 = (const lean_object*)&l_Lean_Parser_whitespace___closed__2_value;
static const lean_string_object l_Lean_Parser_whitespace___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "tabs are not allowed; please configure your editor to expand them"};
static const lean_object* l_Lean_Parser_whitespace___closed__3 = (const lean_object*)&l_Lean_Parser_whitespace___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_whitespace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_mkEmptySubstringAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_mkEmptySubstringAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawAux(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawFn(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_chFn___lam__0(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parser_chFn___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_chFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Parser_chFn___closed__0 = (const lean_object*)&l_Lean_Parser_chFn___closed__0_value;
static const lean_string_object l_Lean_Parser_chFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Parser_chFn___closed__1 = (const lean_object*)&l_Lean_Parser_chFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_chFn(uint32_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_chFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawCh(uint32_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_rawCh___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_hexDigitFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "invalid hexadecimal numeral"};
static const lean_object* l_Lean_Parser_hexDigitFn___closed__0 = (const lean_object*)&l_Lean_Parser_hexDigitFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_hexDigitFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_hexDigitFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_stringGapFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "expecting newline in string gap"};
static const lean_object* l_Lean_Parser_stringGapFn___closed__0 = (const lean_object*)&l_Lean_Parser_stringGapFn___closed__0_value;
static const lean_string_object l_Lean_Parser_stringGapFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "unexpected additional newline in string gap"};
static const lean_object* l_Lean_Parser_stringGapFn___closed__1 = (const lean_object*)&l_Lean_Parser_stringGapFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_stringGapFn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_stringGapFn___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_quotedCharCoreFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "invalid escape sequence"};
static const lean_object* l_Lean_Parser_quotedCharCoreFn___closed__0 = (const lean_object*)&l_Lean_Parser_quotedCharCoreFn___closed__0_value;
static lean_once_cell_t l_Lean_Parser_quotedCharCoreFn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_quotedCharCoreFn___closed__1;
static lean_once_cell_t l_Lean_Parser_quotedCharCoreFn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_quotedCharCoreFn___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_quotedCharCoreFn(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_quotedCharCoreFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_isQuotableCharDefault(uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parser_isQuotableCharDefault___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_quotedCharFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_isQuotableCharDefault___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_quotedCharFn___closed__0 = (const lean_object*)&l_Lean_Parser_quotedCharFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_quotedCharFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_quotedStringFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkNodeToken(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkNodeToken___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_charLitFnAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "missing end of character literal"};
static const lean_object* l_Lean_Parser_charLitFnAux___closed__0 = (const lean_object*)&l_Lean_Parser_charLitFnAux___closed__0_value;
static const lean_string_object l_Lean_Parser_charLitFnAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "char"};
static const lean_object* l_Lean_Parser_charLitFnAux___closed__1 = (const lean_object*)&l_Lean_Parser_charLitFnAux___closed__1_value;
static const lean_ctor_object l_Lean_Parser_charLitFnAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_charLitFnAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(43, 243, 213, 66, 253, 140, 152, 232)}};
static const lean_object* l_Lean_Parser_charLitFnAux___closed__2 = (const lean_object*)&l_Lean_Parser_charLitFnAux___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_charLitFnAux(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_strLitFnAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Parser_strLitFnAux___closed__0 = (const lean_object*)&l_Lean_Parser_strLitFnAux___closed__0_value;
static const lean_ctor_object l_Lean_Parser_strLitFnAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_strLitFnAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Parser_strLitFnAux___closed__1 = (const lean_object*)&l_Lean_Parser_strLitFnAux___closed__1_value;
static const lean_string_object l_Lean_Parser_strLitFnAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unterminated string literal"};
static const lean_object* l_Lean_Parser_strLitFnAux___closed__2 = (const lean_object*)&l_Lean_Parser_strLitFnAux___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_strLitFnAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_strLitFnAux(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_isRawStrLitStart(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_isRawStrLitStart___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "unterminated raw string literal"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_closingState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_closingState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_initState(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawStrLitFnAux(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_takeDigitsFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "unexpected character"};
static const lean_object* l_Lean_Parser_takeDigitsFn___closed__0 = (const lean_object*)&l_Lean_Parser_takeDigitsFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_takeDigitsFn(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_takeDigitsFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "missing exponent digits in scientific literal"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "decimal number"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__2_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "unexpected identifier after decimal point; consider parenthesizing the number"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__3 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptDot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptDot___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "scientific"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__0_value),LEAN_SCALAR_PTR_LITERAL(219, 104, 254, 176, 65, 57, 101, 179)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_decimalNumberFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_Parser_decimalNumberFn___closed__0 = (const lean_object*)&l_Lean_Parser_decimalNumberFn___closed__0_value;
static const lean_ctor_object l_Lean_Parser_decimalNumberFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_decimalNumberFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_Parser_decimalNumberFn___closed__1 = (const lean_object*)&l_Lean_Parser_decimalNumberFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_decimalNumberFn(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_decimalNumberFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_binNumberFn___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parser_binNumberFn___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_binNumberFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_binNumberFn___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_binNumberFn___closed__0 = (const lean_object*)&l_Lean_Parser_binNumberFn___closed__0_value;
static const lean_string_object l_Lean_Parser_binNumberFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "binary number"};
static const lean_object* l_Lean_Parser_binNumberFn___closed__1 = (const lean_object*)&l_Lean_Parser_binNumberFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_binNumberFn(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_binNumberFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_octalNumberFn___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parser_octalNumberFn___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_octalNumberFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_octalNumberFn___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_octalNumberFn___closed__0 = (const lean_object*)&l_Lean_Parser_octalNumberFn___closed__0_value;
static const lean_string_object l_Lean_Parser_octalNumberFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "octal number"};
static const lean_object* l_Lean_Parser_octalNumberFn___closed__1 = (const lean_object*)&l_Lean_Parser_octalNumberFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_octalNumberFn(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_octalNumberFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_isHexDigit(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_isHexDigit___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_hexNumberFn___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parser_hexNumberFn___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_hexNumberFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_hexNumberFn___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_hexNumberFn___closed__0 = (const lean_object*)&l_Lean_Parser_hexNumberFn___closed__0_value;
static const lean_string_object l_Lean_Parser_hexNumberFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "hexadecimal number"};
static const lean_object* l_Lean_Parser_hexNumberFn___closed__1 = (const lean_object*)&l_Lean_Parser_hexNumberFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_hexNumberFn(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_hexNumberFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_numberFnAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "numeral"};
static const lean_object* l_Lean_Parser_numberFnAux___closed__0 = (const lean_object*)&l_Lean_Parser_numberFnAux___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_numberFnAux(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_numberFnAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_isIdCont(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_isIdCont___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_isToken(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_isToken___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_mkTokenAndFixPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "token"};
static const lean_object* l_Lean_Parser_mkTokenAndFixPos___closed__0 = (const lean_object*)&l_Lean_Parser_mkTokenAndFixPos___closed__0_value;
static const lean_string_object l_Lean_Parser_mkTokenAndFixPos___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "forbidden token"};
static const lean_object* l_Lean_Parser_mkTokenAndFixPos___closed__1 = (const lean_object*)&l_Lean_Parser_mkTokenAndFixPos___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_mkTokenAndFixPos(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkTokenAndFixPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkIdResult(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkIdResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__1(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__1___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__0_value;
static const lean_closure_object l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unterminated identifier escape"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_identFnAux(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_identFnAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_isIdFirstOrBeginEscape(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_isIdFirstOrBeginEscape___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid Name literal"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_tokenFnAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_updateTokenCache(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_tokenFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_peekTokenAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_peekToken(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdentFn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdentFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_satisfySymbolFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_symbolFnAux___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbolFnAux___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbolFnAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbolInfo___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbolInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbolFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbolNoAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolFnAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolFn(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_nonReservedSymbolInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Parser_nonReservedSymbolInfo___closed__0 = (const lean_object*)&l_Lean_Parser_nonReservedSymbolInfo___closed__0_value;
static const lean_ctor_object l_Lean_Parser_nonReservedSymbolInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_nonReservedSymbolInfo___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_nonReservedSymbolInfo___closed__1 = (const lean_object*)&l_Lean_Parser_nonReservedSymbolInfo___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolInfo(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolNoAntiquot(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolNoAntiquot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_strAux_parse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_strAux_parse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_strAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_strAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_checkTailWs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkTailWs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBeforeFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBeforeFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBeforeFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBefore(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "checkWsBefore"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 180, 243, 53, 77, 82, 55, 205)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 215, .m_capacity = 215, .m_length = 214, .m_data = "The `ws` parser requires that there is some whitespace at this location.\nFor example, the parser `\"foo\" ws \"+\"` parses `foo +` or `foo/- -/+` but not `foo+`.\n\nThis parser has arity 0 - it does not capture anything."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_checkTailLinebreak_spec__0(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_checkTailLinebreak___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Lean_Parser_checkTailLinebreak___closed__0 = (const lean_object*)&l_Lean_Parser_checkTailLinebreak___closed__0_value;
static const lean_string_object l_Lean_Parser_checkTailLinebreak___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Lean_Parser_checkTailLinebreak___closed__1 = (const lean_object*)&l_Lean_Parser_checkTailLinebreak___closed__1_value;
static const lean_string_object l_Lean_Parser_checkTailLinebreak___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Lean_Parser_checkTailLinebreak___closed__2 = (const lean_object*)&l_Lean_Parser_checkTailLinebreak___closed__2_value;
static lean_once_cell_t l_Lean_Parser_checkTailLinebreak___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_checkTailLinebreak___closed__3;
LEAN_EXPORT uint8_t l_Lean_Parser_checkTailLinebreak(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkTailLinebreak___boxed(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBeforeFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBeforeFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBeforeFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBefore(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "checkLinebreakBefore"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(106, 136, 117, 184, 203, 101, 193, 45)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 187, .m_capacity = 187, .m_length = 186, .m_data = "The `linebreak` parser requires that there is at least one line break at this location.\n(The line break may be inside a comment.)\n\nThis parser has arity 0 - it does not capture anything."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_checkTailNoWs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkTailNoWs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBeforeFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBeforeFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBeforeFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBefore(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "checkNoWsBefore"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 175, 148, 38, 136, 238, 167, 124)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 412, .m_capacity = 412, .m_length = 411, .m_data = "The `noWs` parser requires that there is *no* whitespace between the preceding and following\nparsers. For example, the parser `\"foo\" noWs \"+\"` parses `foo+` but not `foo +`.\n\nThis is almost the same as `\"foo+\"`, but using this parser will make `foo+` a token, which may cause\nproblems for the use of `\"foo\"` and `\"+\"` as separate tokens in other parsers.\n\nThis parser has arity 0 - it does not capture anything."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_unicodeSymbolFnAux___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolFnAux___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolFnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolInfo___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolInfo(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_unicodeSymbolFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "', '"};
static const lean_object* l_Lean_Parser_unicodeSymbolFn___closed__0 = (const lean_object*)&l_Lean_Parser_unicodeSymbolFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolNoAntiquot___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolNoAntiquot(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolNoAntiquot___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAtomicInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_expectTokenFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_expectTokenFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_numLitFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_numLitNoAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_numLitNoAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_numLitNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_numLitNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_numLitNoAntiquot;
static const lean_string_object l_Lean_Parser_hexnumFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hexnum"};
static const lean_object* l_Lean_Parser_hexnumFn___closed__0 = (const lean_object*)&l_Lean_Parser_hexnumFn___closed__0_value;
static const lean_ctor_object l_Lean_Parser_hexnumFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_hexnumFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(152, 252, 51, 178, 203, 245, 189, 159)}};
static const lean_object* l_Lean_Parser_hexnumFn___closed__1 = (const lean_object*)&l_Lean_Parser_hexnumFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_hexnumFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_hexnumNoAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hexnumNoAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_hexnumNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hexnumNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_hexnumNoAntiquot;
static const lean_string_object l_Lean_Parser_scientificLitFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "scientific number"};
static const lean_object* l_Lean_Parser_scientificLitFn___closed__0 = (const lean_object*)&l_Lean_Parser_scientificLitFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLitFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_scientificLitNoAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_scientificLitNoAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_scientificLitNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_scientificLitNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLitNoAntiquot;
static const lean_string_object l_Lean_Parser_strLitFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "string literal"};
static const lean_object* l_Lean_Parser_strLitFn___closed__0 = (const lean_object*)&l_Lean_Parser_strLitFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_strLitFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_strLitNoAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_strLitNoAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_strLitNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_strLitNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_strLitNoAntiquot;
static const lean_string_object l_Lean_Parser_charLitFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "character literal"};
static const lean_object* l_Lean_Parser_charLitFn___closed__0 = (const lean_object*)&l_Lean_Parser_charLitFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_charLitFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_charLitNoAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_charLitNoAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_charLitNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_charLitNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_charLitNoAntiquot;
static const lean_string_object l_Lean_Parser_nameLitFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_Parser_nameLitFn___closed__0 = (const lean_object*)&l_Lean_Parser_nameLitFn___closed__0_value;
static const lean_ctor_object l_Lean_Parser_nameLitFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_nameLitFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l_Lean_Parser_nameLitFn___closed__1 = (const lean_object*)&l_Lean_Parser_nameLitFn___closed__1_value;
static const lean_string_object l_Lean_Parser_nameLitFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Name literal"};
static const lean_object* l_Lean_Parser_nameLitFn___closed__2 = (const lean_object*)&l_Lean_Parser_nameLitFn___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_nameLitFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_nameLitNoAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_nameLitNoAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_nameLitNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_nameLitNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_nameLitNoAntiquot;
static const lean_ctor_object l_Lean_Parser_identFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_nonReservedSymbolInfo___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Parser_identFn___closed__0 = (const lean_object*)&l_Lean_Parser_identFn___closed__0_value;
static const lean_string_object l_Lean_Parser_identFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "identifier"};
static const lean_object* l_Lean_Parser_identFn___closed__1 = (const lean_object*)&l_Lean_Parser_identFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_identFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_identNoAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identNoAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_identNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_identNoAntiquot;
static const lean_closure_object l_Lean_Parser_rawIdentNoAntiquot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_rawIdentFn___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Parser_rawIdentNoAntiquot___closed__0 = (const lean_object*)&l_Lean_Parser_rawIdentNoAntiquot___closed__0_value;
static const lean_ctor_object l_Lean_Parser_rawIdentNoAntiquot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_errorAtSavedPos___closed__0_value),((lean_object*)&l_Lean_Parser_rawIdentNoAntiquot___closed__0_value)}};
static const lean_object* l_Lean_Parser_rawIdentNoAntiquot___closed__1 = (const lean_object*)&l_Lean_Parser_rawIdentNoAntiquot___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_rawIdentNoAntiquot = (const lean_object*)&l_Lean_Parser_rawIdentNoAntiquot___closed__1_value;
static const lean_ctor_object l_Lean_Parser_identEqFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_identFn___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_identEqFn___closed__0 = (const lean_object*)&l_Lean_Parser_identEqFn___closed__0_value;
static const lean_string_object l_Lean_Parser_identEqFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "identifier '"};
static const lean_object* l_Lean_Parser_identEqFn___closed__1 = (const lean_object*)&l_Lean_Parser_identEqFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_identEqFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_identEq(lean_object*);
static const lean_string_object l_Lean_Parser_hygieneInfoFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_Parser_hygieneInfoFn___closed__0 = (const lean_object*)&l_Lean_Parser_hygieneInfoFn___closed__0_value;
static const lean_ctor_object l_Lean_Parser_hygieneInfoFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_hygieneInfoFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_Parser_hygieneInfoFn___closed__1 = (const lean_object*)&l_Lean_Parser_hygieneInfoFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfoFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfoFn___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_hygieneInfoNoAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hygieneInfoNoAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_hygieneInfoNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hygieneInfoNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfoNoAntiquot;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepTop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepTop___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepNewError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepNewError___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepPrevError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepPrevError___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mergeErrors(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mergeErrors___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepLatest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepLatest___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_replaceLongest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_replaceLongest___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_invalidLongestMatchParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "longestMatch parsers must generate exactly one Syntax node"};
static const lean_object* l_Lean_Parser_invalidLongestMatchParser___closed__0 = (const lean_object*)&l_Lean_Parser_invalidLongestMatchParser___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_invalidLongestMatchParser(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_runLongestMatchParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchStep___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchStep___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchMkResult(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchMkResult___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFnAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_longestMatchFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "longestMatch: empty list"};
static const lean_object* l_Lean_Parser_longestMatchFn___closed__0 = (const lean_object*)&l_Lean_Parser_longestMatchFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFn(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_anyOfFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "anyOf: empty list"};
static const lean_object* l_Lean_Parser_anyOfFn___closed__0 = (const lean_object*)&l_Lean_Parser_anyOfFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_anyOfFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkColEqFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkColEq(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "checkColEq"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 79, 136, 97, 27, 86, 56, 4)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 298, .m_capacity = 298, .m_length = 297, .m_data = "The `colEq` parser ensures that the next token starts at exactly the column of the saved\nposition (see `withPosition`). This can be used to do whitespace sensitive syntax like\na `by` block or `do` block, where all the lines have to line up.\n\nThis parser has arity 0 - it does not capture anything."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGeFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGe(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "checkColGe"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(133, 21, 222, 233, 68, 88, 239, 150)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 473, .m_capacity = 473, .m_length = 472, .m_data = "The `colGe` parser requires that the next token starts from at least the column of the saved\nposition (see `withPosition`), but allows it to be more indented.\nThis can be used for whitespace sensitive syntax to ensure that a block does not go outside a\ncertain indentation scope. For example it is used in the lean grammar for `else if`, to ensure\nthat the `else` is not less indented than the `if` it matches with.\n\nThis parser has arity 0 - it does not capture anything."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGtFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGt(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "checkColGt"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 27, 6, 116, 51, 223, 220, 245)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 571, .m_capacity = 571, .m_length = 570, .m_data = "The `colGt` parser requires that the next token starts a strictly greater column than the saved\nposition (see `withPosition`). This can be used for whitespace sensitive syntax for the arguments\nto a tactic, to ensure that the following tactic is not interpreted as an argument.\n```\nexample (x : False) : False := by\n  revert x\n  exact id\n```\nHere, the `revert` tactic is followed by a list of `colGt ident`, because otherwise it would\ninterpret `exact` as an identifier and try to revert a variable named `exact`.\n\nThis parser has arity 0 - it does not capture anything."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLineEqFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLineEq(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "checkLineEq"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(238, 130, 255, 142, 22, 38, 200, 197)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 366, .m_capacity = 366, .m_length = 365, .m_data = "The `lineEq` parser requires that the current token is on the same line as the saved position\n(see `withPosition`). This can be used to ensure that composite tokens are not \"broken up\" across\ndifferent lines. For example, `else if` is parsed using `lineEq` to ensure that the two tokens\nare on the same line.\n\nThis parser has arity 0 - it does not capture anything."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "withPosition"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(106, 188, 255, 221, 143, 31, 128, 82)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 760, .m_capacity = 760, .m_length = 759, .m_data = "`withPosition(p)` runs `p` while setting the \"saved position\" to the current position.\nThis has no effect on its own, but various other parsers access this position to achieve some\ncomposite effect:\n\n* `colGt`, `colGe`, `colEq` compare the column of the saved position to the current position,\n  used to implement Python-style indentation sensitive blocks\n* `lineEq` ensures that the current position is still on the same line as the saved position,\n  used to implement composite tokens\n\nThe saved position is only available in the read-only state, which is why this is a scoping parser:\nafter the `withPosition(..)` block the saved position will be restored to its original value.\n\nThis parser has the same arity as `p` - it just forwards the results of `p`."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition___lam__0(lean_object*);
static const lean_closure_object l_Lean_Parser_withoutPosition___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withoutPosition___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_withoutPosition___closed__0 = (const lean_object*)&l_Lean_Parser_withoutPosition___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "withoutPosition"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 222, 221, 61, 47, 46, 252, 242)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 330, .m_capacity = 330, .m_length = 329, .m_data = "`withoutPosition(p)` runs `p` without the saved position, meaning that position-checking\nparsers like `colGt` will have no effect. This is usually used by bracketing constructs like\n`(...)` so that the user can locally override whitespace sensitivity.\n\nThis parser has the same arity as `p` - it just forwards the results of `p`."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "withForbidden"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(96, 169, 160, 142, 191, 14, 119, 146)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 496, .m_capacity = 496, .m_length = 495, .m_data = "`withForbidden tk p` runs `p` with `tk` as a \"forbidden token\". This means that if the token\nappears anywhere in `p` (unless it is nested in `withoutForbidden`), parsing will immediately\nstop there, making `tk` effectively a lowest-precedence operator. This is used for parsers like\n`for x in arr do ...`: `arr` is parsed as `withForbidden \"do\" term` because otherwise `arr do ...`\nwould be treated as an application.\n\nThis parser has the same arity as `p` - it just forwards the results of `p`."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_withForbiddens___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__0 = (const lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__0_value;
static const lean_string_object l_Lean_Parser_withForbiddens___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__1 = (const lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__1_value;
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__2 = (const lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__2_value;
static const lean_array_object l_Lean_Parser_withForbiddens___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__3 = (const lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__3_value;
static const lean_string_object l_Lean_Parser_withForbiddens___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__4 = (const lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__4_value;
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__5_value_aux_1),((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__5_value_aux_2),((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__5 = (const lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__5_value;
static const lean_string_object l_Lean_Parser_withForbiddens___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__6 = (const lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__6_value;
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__7_value_aux_1),((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__7_value_aux_2),((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(53, 158, 1, 232, 101, 200, 191, 197)}};
static const lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__7 = (const lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__7_value;
static lean_once_cell_t l_Lean_Parser_withForbiddens___auto__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__8;
static lean_once_cell_t l_Lean_Parser_withForbiddens___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__9;
static const lean_string_object l_Lean_Parser_withForbiddens___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__10 = (const lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__10_value;
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__11_value_aux_1),((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__11_value_aux_2),((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__11 = (const lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__11_value;
static const lean_ctor_object l_Lean_Parser_withForbiddens___auto__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Parser_optionalFn___closed__1_value),((lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__3_value)}};
static const lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__12 = (const lean_object*)&l_Lean_Parser_withForbiddens___auto__1___closed__12_value;
static lean_once_cell_t l_Lean_Parser_withForbiddens___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__13;
static lean_once_cell_t l_Lean_Parser_withForbiddens___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__14;
static lean_once_cell_t l_Lean_Parser_withForbiddens___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__15;
static lean_once_cell_t l_Lean_Parser_withForbiddens___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__16;
static lean_once_cell_t l_Lean_Parser_withForbiddens___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__17;
static lean_once_cell_t l_Lean_Parser_withForbiddens___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__18;
static lean_once_cell_t l_Lean_Parser_withForbiddens___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__19;
static lean_once_cell_t l_Lean_Parser_withForbiddens___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__20;
static lean_once_cell_t l_Lean_Parser_withForbiddens___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__21;
static lean_once_cell_t l_Lean_Parser_withForbiddens___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_withForbiddens___auto__1___closed__22;
LEAN_EXPORT lean_object* l_Lean_Parser_withForbiddens___auto__1;
LEAN_EXPORT lean_object* l_Lean_Parser_withForbiddens___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbiddens___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbiddens(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "withForbiddens"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 28, 48, 51, 203, 186, 28, 196)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 288, .m_capacity = 288, .m_length = 287, .m_data = "`withForbiddens(tks, p)` runs `p` with every token in `tks` treated as forbidden, i.e. the\ncombined effect of nesting `withForbidden` for each token (see `withForbidden`). The tokens in\n`tks` must be distinct.\n\nThis parser has the same arity as `p` - it just forwards the results of `p`."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___boxed(lean_object*);
static const lean_array_object l_Lean_Parser_withoutForbidden___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_withoutForbidden___lam__0___closed__0 = (const lean_object*)&l_Lean_Parser_withoutForbidden___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden___lam__0(lean_object*);
static const lean_closure_object l_Lean_Parser_withoutForbidden___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withoutForbidden___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_withoutForbidden___closed__0 = (const lean_object*)&l_Lean_Parser_withoutForbidden___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "withoutForbidden"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 23, 219, 174, 6, 42, 106, 219)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 301, .m_capacity = 301, .m_length = 300, .m_data = "`withoutForbidden(p)` runs `p` disabling the \"forbidden token\" (see `withForbidden`), if any.\nThis is usually used by bracketing constructs like `(...)` because there is no parsing ambiguity\ninside these nested constructs.\n\nThis parser has the same arity as `p` - it just forwards the results of `p`."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_eoiFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected end of file"};
static const lean_object* l_Lean_Parser_eoiFn___closed__0 = (const lean_object*)&l_Lean_Parser_eoiFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_eoiFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_eoiFn___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_eoi___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_eoi___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_eoi;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_insert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_insert(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instEmptyCollection___redArg();
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instEmptyCollection___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instEmptyCollection(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Parser_instInhabitedPrattParsingTables___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_instInhabitedPrattParsingTables___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedPrattParsingTables___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedPrattParsingTables = (const lean_object*)&l_Lean_Parser_instInhabitedPrattParsingTables___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_instInhabitedLeadingIdentBehavior_default;
LEAN_EXPORT uint8_t l_Lean_Parser_instInhabitedLeadingIdentBehavior;
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqLeadingIdentBehavior_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqLeadingIdentBehavior_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqLeadingIdentBehavior___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instBEqLeadingIdentBehavior_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instBEqLeadingIdentBehavior___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqLeadingIdentBehavior___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instBEqLeadingIdentBehavior = (const lean_object*)&l_Lean_Parser_instBEqLeadingIdentBehavior___closed__0_value;
static const lean_string_object l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Parser.LeadingIdentBehavior.default"};
static const lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__0 = (const lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__0_value;
static const lean_ctor_object l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__0_value)}};
static const lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__1 = (const lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__1_value;
static const lean_string_object l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Parser.LeadingIdentBehavior.symbol"};
static const lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__2 = (const lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__2_value;
static const lean_ctor_object l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__2_value)}};
static const lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__3 = (const lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__3_value;
static const lean_string_object l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Parser.LeadingIdentBehavior.both"};
static const lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__4 = (const lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__4_value;
static const lean_ctor_object l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__4_value)}};
static const lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__5 = (const lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__5_value;
static lean_once_cell_t l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6;
LEAN_EXPORT lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instReprLeadingIdentBehavior___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instReprLeadingIdentBehavior_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instReprLeadingIdentBehavior___closed__0 = (const lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instReprLeadingIdentBehavior = (const lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior___closed__0_value;
static lean_once_cell_t l_Lean_Parser_instInhabitedParserCategory_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instInhabitedParserCategory_default___closed__0;
static lean_once_cell_t l_Lean_Parser_instInhabitedParserCategory_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instInhabitedParserCategory_default___closed__1;
static lean_once_cell_t l_Lean_Parser_instInhabitedParserCategory_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instInhabitedParserCategory_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserCategory_default;
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserCategory;
LEAN_EXPORT lean_object* l_Lean_Parser_indexed___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_indexed___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_indexed(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_indexed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFnRef;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "categoryParserFnExtension"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(116, 13, 93, 89, 143, 213, 101, 64)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFnExtension;
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFn___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_categoryParserFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_categoryParserFn___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_categoryParserFn___closed__0 = (const lean_object*)&l_Lean_Parser_categoryParserFn___closed__0_value;
static const lean_closure_object l_Lean_Parser_categoryParserFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Pi_instInhabited___redArg___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_categoryParserFn___closed__0_value)} };
static const lean_object* l_Lean_Parser_categoryParserFn___closed__1 = (const lean_object*)&l_Lean_Parser_categoryParserFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParser___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParser(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_termParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Parser_termParser___closed__0 = (const lean_object*)&l_Lean_Parser_termParser___closed__0_value;
static const lean_ctor_object l_Lean_Parser_termParser___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_termParser___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_Parser_termParser___closed__1 = (const lean_object*)&l_Lean_Parser_termParser___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_termParser(lean_object*);
static const lean_string_object l_Lean_Parser_checkNoImmediateColon___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "unexpected ':'"};
static const lean_object* l_Lean_Parser_checkNoImmediateColon___lam__0___closed__0 = (const lean_object*)&l_Lean_Parser_checkNoImmediateColon___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoImmediateColon___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoImmediateColon___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_checkNoImmediateColon___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_checkNoImmediateColon___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_checkNoImmediateColon___closed__0 = (const lean_object*)&l_Lean_Parser_checkNoImmediateColon___closed__0_value;
static const lean_ctor_object l_Lean_Parser_checkNoImmediateColon___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_errorAtSavedPos___closed__0_value),((lean_object*)&l_Lean_Parser_checkNoImmediateColon___closed__0_value)}};
static const lean_object* l_Lean_Parser_checkNoImmediateColon___closed__1 = (const lean_object*)&l_Lean_Parser_checkNoImmediateColon___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_checkNoImmediateColon = (const lean_object*)&l_Lean_Parser_checkNoImmediateColon___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "checkNoImmediateColon"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(106, 36, 224, 107, 75, 228, 108, 120)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Fail if previous token is immediately followed by ':'."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpectedFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_pushNone___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_pushNone___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_pushNone___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_pushNone___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_pushNone___closed__0 = (const lean_object*)&l_Lean_Parser_pushNone___closed__0_value;
static const lean_ctor_object l_Lean_Parser_pushNone___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_errorAtSavedPos___closed__0_value),((lean_object*)&l_Lean_Parser_pushNone___closed__0_value)}};
static const lean_object* l_Lean_Parser_pushNone___closed__1 = (const lean_object*)&l_Lean_Parser_pushNone___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_pushNone = (const lean_object*)&l_Lean_Parser_pushNone___closed__1_value;
static const lean_string_object l_Lean_Parser_antiquotNestedExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "antiquotNestedExpr"};
static const lean_object* l_Lean_Parser_antiquotNestedExpr___closed__0 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr___closed__0_value;
static const lean_ctor_object l_Lean_Parser_antiquotNestedExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_antiquotNestedExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(4, 217, 111, 200, 191, 162, 168, 125)}};
static const lean_object* l_Lean_Parser_antiquotNestedExpr___closed__1 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr___closed__1_value;
static const lean_string_object l_Lean_Parser_antiquotNestedExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Parser_antiquotNestedExpr___closed__2 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr___closed__2_value;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr___closed__3;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr___closed__4;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr___closed__5;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr___closed__6;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr___closed__7;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr___closed__8;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr___closed__9;
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr;
static const lean_string_object l_Lean_Parser_antiquotExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Parser_antiquotExpr___closed__0 = (const lean_object*)&l_Lean_Parser_antiquotExpr___closed__0_value;
static lean_once_cell_t l_Lean_Parser_antiquotExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotExpr___closed__1;
static lean_once_cell_t l_Lean_Parser_antiquotExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotExpr___closed__2;
static lean_once_cell_t l_Lean_Parser_antiquotExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr;
static const lean_string_object l_Lean_Parser_tokenAntiquotFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "no space before"};
static const lean_object* l_Lean_Parser_tokenAntiquotFn___closed__0 = (const lean_object*)&l_Lean_Parser_tokenAntiquotFn___closed__0_value;
static lean_once_cell_t l_Lean_Parser_tokenAntiquotFn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_tokenAntiquotFn___closed__1;
static const lean_string_object l_Lean_Parser_tokenAntiquotFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "%"};
static const lean_object* l_Lean_Parser_tokenAntiquotFn___closed__2 = (const lean_object*)&l_Lean_Parser_tokenAntiquotFn___closed__2_value;
static lean_once_cell_t l_Lean_Parser_tokenAntiquotFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_tokenAntiquotFn___closed__3;
static const lean_string_object l_Lean_Parser_tokenAntiquotFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l_Lean_Parser_tokenAntiquotFn___closed__4 = (const lean_object*)&l_Lean_Parser_tokenAntiquotFn___closed__4_value;
static lean_once_cell_t l_Lean_Parser_tokenAntiquotFn___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_tokenAntiquotFn___closed__5;
static lean_once_cell_t l_Lean_Parser_tokenAntiquotFn___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_tokenAntiquotFn___closed__6;
static lean_once_cell_t l_Lean_Parser_tokenAntiquotFn___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_tokenAntiquotFn___closed__7;
static lean_once_cell_t l_Lean_Parser_tokenAntiquotFn___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_tokenAntiquotFn___closed__8;
static lean_once_cell_t l_Lean_Parser_tokenAntiquotFn___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_tokenAntiquotFn___closed__9;
static const lean_string_object l_Lean_Parser_tokenAntiquotFn___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "token_antiquot"};
static const lean_object* l_Lean_Parser_tokenAntiquotFn___closed__10 = (const lean_object*)&l_Lean_Parser_tokenAntiquotFn___closed__10_value;
static const lean_ctor_object l_Lean_Parser_tokenAntiquotFn___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_tokenAntiquotFn___closed__10_value),LEAN_SCALAR_PTR_LITERAL(33, 159, 231, 44, 235, 156, 55, 135)}};
static const lean_object* l_Lean_Parser_tokenAntiquotFn___closed__11 = (const lean_object*)&l_Lean_Parser_tokenAntiquotFn___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Parser_tokenAntiquotFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_tokenWithAntiquot___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_tokenWithAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbol(lean_object*);
static const lean_closure_object l_Lean_Parser_instCoeStringParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instCoeStringParser___closed__0 = (const lean_object*)&l_Lean_Parser_instCoeStringParser___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instCoeStringParser = (const lean_object*)&l_Lean_Parser_instCoeStringParser___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_mkAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_mkAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot___closed__1;
static lean_once_cell_t l_Lean_Parser_mkAntiquot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot___closed__2;
static lean_once_cell_t l_Lean_Parser_mkAntiquot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot___closed__3;
static lean_once_cell_t l_Lean_Parser_mkAntiquot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot___closed__4;
static const lean_string_object l_Lean_Parser_mkAntiquot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "no space before spliced term"};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__5 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__5_value;
static lean_once_cell_t l_Lean_Parser_mkAntiquot___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot___closed__6;
static const lean_string_object l_Lean_Parser_mkAntiquot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "antiquot"};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__7 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__7_value;
static const lean_ctor_object l_Lean_Parser_mkAntiquot___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkAntiquot___closed__7_value),LEAN_SCALAR_PTR_LITERAL(209, 141, 12, 45, 178, 67, 53, 106)}};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__8 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__8_value;
static const lean_string_object l_Lean_Parser_mkAntiquot___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "antiquotName"};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__9 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__9_value;
static const lean_ctor_object l_Lean_Parser_mkAntiquot___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkAntiquot___closed__9_value),LEAN_SCALAR_PTR_LITERAL(67, 48, 35, 197, 163, 216, 250, 79)}};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__10 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__10_value;
static const lean_string_object l_Lean_Parser_mkAntiquot___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "no space before ':"};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__11 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__11_value;
static const lean_string_object l_Lean_Parser_mkAntiquot___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__12 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__12_value;
static lean_once_cell_t l_Lean_Parser_mkAntiquot___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot___closed__13;
static lean_once_cell_t l_Lean_Parser_mkAntiquot___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot___closed__14;
static const lean_string_object l_Lean_Parser_mkAntiquot___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "pseudo"};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__15 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__15_value;
static const lean_ctor_object l_Lean_Parser_mkAntiquot___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkAntiquot___closed__15_value),LEAN_SCALAR_PTR_LITERAL(246, 255, 48, 87, 29, 98, 48, 237)}};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__16 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mkAntiquot"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(105, 252, 121, 56, 15, 15, 211, 216)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 256, .m_capacity = 256, .m_length = 255, .m_data = "Define parser for `$e` (if `anonymous == true`) and `$e:name`.\n`kind` is embedded in the antiquotation's kind, and checked at syntax `match` unless `isPseudoKind` is true.\nAntiquotations can be escaped as in `$$e`, which produces the syntax tree for `$e`."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotFn(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "withAntiquot"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 88, 47, 17, 27, 77, 70, 127)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Optimized version of `mkAntiquot ... <|> p`."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotAcceptLhs(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "withAntiquotAcceptLhs"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(171, 82, 64, 68, 27, 164, 181, 212)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 283, .m_capacity = 283, .m_length = 282, .m_data = "Like `withAntiquot`, but uses `OrElseOnAntiquotBehavior.acceptLhs` instead of `.takeLongest`.\nThis means that when the antiquotation parser `antiquotP` succeeds, `p` is not tried.\nThis is useful when `p` has side effects on the parser stack that would not be undone by\nbacktracking."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutInfo(lean_object*);
static const lean_string_object l_Lean_Parser_mkAntiquotSplice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "antiquot_scope"};
static const lean_object* l_Lean_Parser_mkAntiquotSplice___closed__0 = (const lean_object*)&l_Lean_Parser_mkAntiquotSplice___closed__0_value;
static const lean_ctor_object l_Lean_Parser_mkAntiquotSplice___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkAntiquotSplice___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 75, 125, 66, 98, 92, 21, 108)}};
static const lean_object* l_Lean_Parser_mkAntiquotSplice___closed__1 = (const lean_object*)&l_Lean_Parser_mkAntiquotSplice___closed__1_value;
static lean_once_cell_t l_Lean_Parser_mkAntiquotSplice___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquotSplice___closed__2;
static lean_once_cell_t l_Lean_Parser_mkAntiquotSplice___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquotSplice___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "mkAntiquotSplice"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(14, 175, 234, 39, 152, 246, 57, 50)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Parse `$[p]suffix`, e.g. `$[p],*`."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "antiquot_suffix_splice"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 22, 214, 220, 194, 127, 23, 217)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSuffixSplice___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSuffixSplice(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "withAntiquotSuffixSplice"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(213, 216, 213, 160, 91, 190, 161, 104)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "Parse `suffix` after an antiquotation, e.g. `$x,*`, and put both into a new node."};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_sepByElemParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sepBy"};
static const lean_object* l_Lean_Parser_sepByElemParser___closed__0 = (const lean_object*)&l_Lean_Parser_sepByElemParser___closed__0_value;
static const lean_ctor_object l_Lean_Parser_sepByElemParser___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_sepByElemParser___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 56, 254, 223, 11, 70, 55, 147)}};
static const lean_object* l_Lean_Parser_sepByElemParser___closed__1 = (const lean_object*)&l_Lean_Parser_sepByElemParser___closed__1_value;
static const lean_string_object l_Lean_Parser_sepByElemParser___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l_Lean_Parser_sepByElemParser___closed__2 = (const lean_object*)&l_Lean_Parser_sepByElemParser___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkResult(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkResult___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParserAux(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParserAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParser(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_trailingLoopStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_trailingLoop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_prattParser(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_prattParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_fieldIdxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "field index"};
static const lean_object* l_Lean_Parser_fieldIdxFn___closed__0 = (const lean_object*)&l_Lean_Parser_fieldIdxFn___closed__0_value;
static const lean_string_object l_Lean_Parser_fieldIdxFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fieldIdx"};
static const lean_object* l_Lean_Parser_fieldIdxFn___closed__1 = (const lean_object*)&l_Lean_Parser_fieldIdxFn___closed__1_value;
static const lean_ctor_object l_Lean_Parser_fieldIdxFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_fieldIdxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(243, 141, 165, 29, 238, 211, 61, 163)}};
static const lean_object* l_Lean_Parser_fieldIdxFn___closed__2 = (const lean_object*)&l_Lean_Parser_fieldIdxFn___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_fieldIdxFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_fieldIdx___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_fieldIdx___closed__0;
static lean_once_cell_t l_Lean_Parser_fieldIdx___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_fieldIdx___closed__1;
static lean_once_cell_t l_Lean_Parser_fieldIdx___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_fieldIdx___closed__2;
static lean_once_cell_t l_Lean_Parser_fieldIdx___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_fieldIdx___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_fieldIdx;
LEAN_EXPORT lean_object* l_Lean_Parser_skip___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_skip___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_skip___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_skip___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_skip___closed__0 = (const lean_object*)&l_Lean_Parser_skip___closed__0_value;
static const lean_ctor_object l_Lean_Parser_skip___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_epsilonInfo___closed__2_value),((lean_object*)&l_Lean_Parser_skip___closed__0_value)}};
static const lean_object* l_Lean_Parser_skip___closed__1 = (const lean_object*)&l_Lean_Parser_skip___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_skip = (const lean_object*)&l_Lean_Parser_skip___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceStateFn___lam__0(lean_object* v_s_x27_1_, lean_object* v_x_2_){
_start:
{
lean_inc_ref(v_s_x27_1_);
return v_s_x27_1_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceStateFn___lam__0___boxed(lean_object* v_s_x27_3_, lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Parser_dbgTraceStateFn___lam__0(v_s_x27_3_, v_x_4_);
lean_dec_ref(v_s_x27_3_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0_spec__0(lean_object* v_x_7_, lean_object* v_x_8_){
_start:
{
if (lean_obj_tag(v_x_8_) == 0)
{
return v_x_7_;
}
else
{
lean_object* v_head_9_; lean_object* v_tail_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v_head_9_ = lean_ctor_get(v_x_8_, 0);
lean_inc(v_head_9_);
v_tail_10_ = lean_ctor_get(v_x_8_, 1);
lean_inc(v_tail_10_);
lean_dec_ref_known(v_x_8_, 2);
v___x_11_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0_spec__0___closed__0));
v___x_12_ = lean_string_append(v_x_7_, v___x_11_);
v___x_13_ = lean_box(0);
v___x_14_ = 0;
v___x_15_ = l_Lean_Syntax_formatStx(v_head_9_, v___x_13_, v___x_14_);
v___x_16_ = l_Std_Format_defWidth;
v___x_17_ = lean_unsigned_to_nat(0u);
v___x_18_ = l_Std_Format_pretty(v___x_15_, v___x_16_, v___x_17_, v___x_17_);
v___x_19_ = lean_string_append(v___x_12_, v___x_18_);
lean_dec_ref(v___x_18_);
v_x_7_ = v___x_19_;
v_x_8_ = v_tail_10_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0(lean_object* v_x_24_){
_start:
{
if (lean_obj_tag(v_x_24_) == 0)
{
lean_object* v___x_25_; 
v___x_25_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__0));
return v___x_25_;
}
else
{
lean_object* v_tail_26_; 
v_tail_26_ = lean_ctor_get(v_x_24_, 1);
if (lean_obj_tag(v_tail_26_) == 0)
{
lean_object* v_head_27_; lean_object* v___x_28_; lean_object* v___x_29_; uint8_t v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v_head_27_ = lean_ctor_get(v_x_24_, 0);
lean_inc(v_head_27_);
lean_dec_ref_known(v_x_24_, 2);
v___x_28_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__1));
v___x_29_ = lean_box(0);
v___x_30_ = 0;
v___x_31_ = l_Lean_Syntax_formatStx(v_head_27_, v___x_29_, v___x_30_);
v___x_32_ = l_Std_Format_defWidth;
v___x_33_ = lean_unsigned_to_nat(0u);
v___x_34_ = l_Std_Format_pretty(v___x_31_, v___x_32_, v___x_33_, v___x_33_);
v___x_35_ = lean_string_append(v___x_28_, v___x_34_);
lean_dec_ref(v___x_34_);
v___x_36_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__2));
v___x_37_ = lean_string_append(v___x_35_, v___x_36_);
return v___x_37_;
}
else
{
lean_object* v_head_38_; lean_object* v___x_39_; lean_object* v___x_40_; uint8_t v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; uint32_t v___x_48_; lean_object* v___x_49_; 
lean_inc(v_tail_26_);
v_head_38_ = lean_ctor_get(v_x_24_, 0);
lean_inc(v_head_38_);
lean_dec_ref_known(v_x_24_, 2);
v___x_39_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__1));
v___x_40_ = lean_box(0);
v___x_41_ = 0;
v___x_42_ = l_Lean_Syntax_formatStx(v_head_38_, v___x_40_, v___x_41_);
v___x_43_ = l_Std_Format_defWidth;
v___x_44_ = lean_unsigned_to_nat(0u);
v___x_45_ = l_Std_Format_pretty(v___x_42_, v___x_43_, v___x_44_, v___x_44_);
v___x_46_ = lean_string_append(v___x_39_, v___x_45_);
lean_dec_ref(v___x_45_);
v___x_47_ = l_List_foldl___at___00List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0_spec__0(v___x_46_, v_tail_26_);
v___x_48_ = 93;
v___x_49_ = lean_string_push(v___x_47_, v___x_48_);
return v___x_49_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceStateFn(lean_object* v_label_57_, lean_object* v_p_58_, lean_object* v_c_59_, lean_object* v_s_60_){
_start:
{
lean_object* v_stxStack_61_; lean_object* v_s_x27_62_; lean_object* v_stxStack_63_; lean_object* v_pos_64_; lean_object* v_errorMsg_65_; lean_object* v_sz_66_; lean_object* v___f_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___y_75_; 
v_stxStack_61_ = lean_ctor_get(v_s_60_, 0);
lean_inc_ref(v_stxStack_61_);
v_s_x27_62_ = lean_apply_2(v_p_58_, v_c_59_, v_s_60_);
v_stxStack_63_ = lean_ctor_get(v_s_x27_62_, 0);
lean_inc_ref(v_stxStack_63_);
v_pos_64_ = lean_ctor_get(v_s_x27_62_, 2);
lean_inc(v_pos_64_);
v_errorMsg_65_ = lean_ctor_get(v_s_x27_62_, 4);
lean_inc(v_errorMsg_65_);
v_sz_66_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_61_);
lean_dec_ref(v_stxStack_61_);
v___f_67_ = lean_alloc_closure((void*)(l_Lean_Parser_dbgTraceStateFn___lam__0___boxed), 2, 1);
lean_closure_set(v___f_67_, 0, v_s_x27_62_);
v___x_68_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__0));
v___x_69_ = lean_string_append(v_label_57_, v___x_68_);
v___x_70_ = l_Nat_reprFast(v_pos_64_);
v___x_71_ = lean_string_append(v___x_69_, v___x_70_);
lean_dec_ref(v___x_70_);
v___x_72_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__1));
v___x_73_ = lean_string_append(v___x_71_, v___x_72_);
if (lean_obj_tag(v_errorMsg_65_) == 0)
{
lean_object* v___x_87_; 
v___x_87_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__4));
v___y_75_ = v___x_87_;
goto v___jp_74_;
}
else
{
lean_object* v_val_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v_val_88_ = lean_ctor_get(v_errorMsg_65_, 0);
lean_inc(v_val_88_);
lean_dec_ref_known(v_errorMsg_65_, 1);
v___x_89_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__5));
v___x_90_ = l_Lean_Parser_Error_toString(v_val_88_);
v___x_91_ = l_addParenHeuristic(v___x_90_);
v___x_92_ = lean_string_append(v___x_89_, v___x_91_);
lean_dec_ref(v___x_91_);
v___x_93_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__6));
v___x_94_ = lean_string_append(v___x_92_, v___x_93_);
v___y_75_ = v___x_94_;
goto v___jp_74_;
}
v___jp_74_:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_76_ = lean_string_append(v___x_73_, v___y_75_);
lean_dec_ref(v___y_75_);
v___x_77_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__2));
v___x_78_ = lean_string_append(v___x_76_, v___x_77_);
v___x_79_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_63_);
v___x_80_ = l_Lean_Parser_SyntaxStack_extract(v_stxStack_63_, v_sz_66_, v___x_79_);
lean_dec(v___x_79_);
lean_dec(v_sz_66_);
lean_dec_ref(v_stxStack_63_);
v___x_81_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__3));
v___x_82_ = lean_array_to_list(v___x_80_);
v___x_83_ = l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0(v___x_82_);
v___x_84_ = lean_string_append(v___x_81_, v___x_83_);
lean_dec_ref(v___x_83_);
v___x_85_ = lean_string_append(v___x_78_, v___x_84_);
lean_dec_ref(v___x_84_);
v___x_86_ = lean_dbg_trace(v___x_85_, v___f_67_);
return v___x_86_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState(lean_object* v_label_95_, lean_object* v_p_96_){
_start:
{
lean_object* v_info_97_; lean_object* v_fn_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_106_; 
v_info_97_ = lean_ctor_get(v_p_96_, 0);
v_fn_98_ = lean_ctor_get(v_p_96_, 1);
v_isSharedCheck_106_ = !lean_is_exclusive(v_p_96_);
if (v_isSharedCheck_106_ == 0)
{
v___x_100_ = v_p_96_;
v_isShared_101_ = v_isSharedCheck_106_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_fn_98_);
lean_inc(v_info_97_);
lean_dec(v_p_96_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_106_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_102_; lean_object* v___x_104_; 
v___x_102_ = lean_alloc_closure((void*)(l_Lean_Parser_dbgTraceStateFn), 4, 2);
lean_closure_set(v___x_102_, 0, v_label_95_);
lean_closure_set(v___x_102_, 1, v_fn_98_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 1, v___x_102_);
v___x_104_ = v___x_100_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v_info_97_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v___x_102_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
return v___x_104_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_epsilonInfo___lam__0(lean_object* v___y_107_){
_start:
{
lean_inc(v___y_107_);
return v___y_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_epsilonInfo___lam__0___boxed(lean_object* v___y_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l_Lean_Parser_epsilonInfo___lam__0(v___y_108_);
lean_dec(v___y_108_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_epsilonInfo___lam__1(lean_object* v___y_110_){
_start:
{
lean_inc_ref(v___y_110_);
return v___y_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_epsilonInfo___lam__1___boxed(lean_object* v___y_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_Lean_Parser_epsilonInfo___lam__1(v___y_111_);
lean_dec_ref(v___y_111_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkStackTopFn___redArg(lean_object* v_p_120_, lean_object* v_msg_121_, lean_object* v_s_122_){
_start:
{
lean_object* v_stxStack_123_; lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; 
v_stxStack_123_ = lean_ctor_get(v_s_122_, 0);
v___x_124_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_123_);
v___x_125_ = lean_apply_1(v_p_120_, v___x_124_);
v___x_126_ = lean_unbox(v___x_125_);
if (v___x_126_ == 0)
{
uint8_t v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_127_ = 1;
v___x_128_ = lean_box(0);
v___x_129_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_122_, v_msg_121_, v___x_128_, v___x_127_);
return v___x_129_;
}
else
{
lean_dec_ref(v_msg_121_);
return v_s_122_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkStackTopFn(lean_object* v_p_130_, lean_object* v_msg_131_, lean_object* v_x_132_, lean_object* v_s_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Lean_Parser_checkStackTopFn___redArg(v_p_130_, v_msg_131_, v_s_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkStackTopFn___boxed(lean_object* v_p_135_, lean_object* v_msg_136_, lean_object* v_x_137_, lean_object* v_s_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lean_Parser_checkStackTopFn(v_p_135_, v_msg_136_, v_x_137_, v_s_138_);
lean_dec_ref(v_x_137_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkStackTop(lean_object* v_p_140_, lean_object* v_msg_141_){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_142_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_143_ = lean_alloc_closure((void*)(l_Lean_Parser_checkStackTopFn___boxed), 4, 2);
lean_closure_set(v___x_143_, 0, v_p_140_);
lean_closure_set(v___x_143_, 1, v_msg_141_);
v___x_144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_142_);
lean_ctor_set(v___x_144_, 1, v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(lean_object* v_x_145_, lean_object* v_x_146_){
_start:
{
if (lean_obj_tag(v_x_145_) == 0)
{
if (lean_obj_tag(v_x_146_) == 0)
{
uint8_t v___x_147_; 
v___x_147_ = 1;
return v___x_147_;
}
else
{
uint8_t v___x_148_; 
v___x_148_ = 0;
return v___x_148_;
}
}
else
{
if (lean_obj_tag(v_x_146_) == 0)
{
uint8_t v___x_149_; 
v___x_149_ = 0;
return v___x_149_;
}
else
{
lean_object* v_val_150_; lean_object* v_val_151_; uint8_t v___x_152_; 
v_val_150_ = lean_ctor_get(v_x_145_, 0);
v_val_151_ = lean_ctor_get(v_x_146_, 0);
v___x_152_ = l_Lean_Parser_instBEqError_beq(v_val_150_, v_val_151_);
return v___x_152_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0___boxed(lean_object* v_x_153_, lean_object* v_x_154_){
_start:
{
uint8_t v_res_155_; lean_object* v_r_156_; 
v_res_155_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_x_153_, v_x_154_);
lean_dec(v_x_154_);
lean_dec(v_x_153_);
v_r_156_ = lean_box(v_res_155_);
return v_r_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_andthenFn(lean_object* v_p_157_, lean_object* v_q_158_, lean_object* v_c_159_, lean_object* v_s_160_){
_start:
{
lean_object* v_s_161_; lean_object* v_errorMsg_162_; lean_object* v___x_163_; uint8_t v___x_164_; 
lean_inc_ref(v_c_159_);
v_s_161_ = lean_apply_2(v_p_157_, v_c_159_, v_s_160_);
v_errorMsg_162_ = lean_ctor_get(v_s_161_, 4);
lean_inc(v_errorMsg_162_);
v___x_163_ = lean_box(0);
v___x_164_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_162_, v___x_163_);
lean_dec(v_errorMsg_162_);
if (v___x_164_ == 0)
{
lean_dec_ref(v_c_159_);
lean_dec_ref(v_q_158_);
return v_s_161_;
}
else
{
lean_object* v___x_165_; 
v___x_165_ = lean_apply_2(v_q_158_, v_c_159_, v_s_161_);
return v___x_165_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_andthenInfo___lam__0(lean_object* v_collectKinds_166_, lean_object* v_collectKinds_167_, lean_object* v___y_168_){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_apply_1(v_collectKinds_166_, v___y_168_);
v___x_170_ = lean_apply_1(v_collectKinds_167_, v___x_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_andthenInfo___lam__1(lean_object* v_collectTokens_171_, lean_object* v_collectTokens_172_, lean_object* v___y_173_){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = lean_apply_1(v_collectTokens_171_, v___y_173_);
v___x_175_ = lean_apply_1(v_collectTokens_172_, v___x_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_andthenInfo(lean_object* v_p_176_, lean_object* v_q_177_){
_start:
{
lean_object* v_collectTokens_178_; lean_object* v_collectKinds_179_; lean_object* v_firstTokens_180_; lean_object* v_collectTokens_181_; lean_object* v_collectKinds_182_; lean_object* v_firstTokens_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_193_; 
v_collectTokens_178_ = lean_ctor_get(v_p_176_, 0);
lean_inc_ref(v_collectTokens_178_);
v_collectKinds_179_ = lean_ctor_get(v_p_176_, 1);
lean_inc_ref(v_collectKinds_179_);
v_firstTokens_180_ = lean_ctor_get(v_p_176_, 2);
lean_inc(v_firstTokens_180_);
lean_dec_ref(v_p_176_);
v_collectTokens_181_ = lean_ctor_get(v_q_177_, 0);
v_collectKinds_182_ = lean_ctor_get(v_q_177_, 1);
v_firstTokens_183_ = lean_ctor_get(v_q_177_, 2);
v_isSharedCheck_193_ = !lean_is_exclusive(v_q_177_);
if (v_isSharedCheck_193_ == 0)
{
v___x_185_ = v_q_177_;
v_isShared_186_ = v_isSharedCheck_193_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_firstTokens_183_);
lean_inc(v_collectKinds_182_);
lean_inc(v_collectTokens_181_);
lean_dec(v_q_177_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_193_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___f_187_; lean_object* v___f_188_; lean_object* v___x_189_; lean_object* v___x_191_; 
v___f_187_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___lam__0), 3, 2);
lean_closure_set(v___f_187_, 0, v_collectKinds_182_);
lean_closure_set(v___f_187_, 1, v_collectKinds_179_);
v___f_188_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___lam__1), 3, 2);
lean_closure_set(v___f_188_, 0, v_collectTokens_181_);
lean_closure_set(v___f_188_, 1, v_collectTokens_178_);
v___x_189_ = l_Lean_Parser_FirstTokens_seq(v_firstTokens_180_, v_firstTokens_183_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 2, v___x_189_);
lean_ctor_set(v___x_185_, 1, v___f_187_);
lean_ctor_set(v___x_185_, 0, v___f_188_);
v___x_191_ = v___x_185_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v___f_188_);
lean_ctor_set(v_reuseFailAlloc_192_, 1, v___f_187_);
lean_ctor_set(v_reuseFailAlloc_192_, 2, v___x_189_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instAndThenParserFn___lam__0(lean_object* v_p1_194_, lean_object* v_p2_195_, lean_object* v___y_196_, lean_object* v___y_197_){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_198_ = lean_box(0);
v___x_199_ = lean_apply_1(v_p2_195_, v___x_198_);
v___x_200_ = l_Lean_Parser_andthenFn(v_p1_194_, v___x_199_, v___y_196_, v___y_197_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_andthen(lean_object* v_p_203_, lean_object* v_q_204_){
_start:
{
lean_object* v_info_205_; lean_object* v_fn_206_; lean_object* v_info_207_; lean_object* v_fn_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_217_; 
v_info_205_ = lean_ctor_get(v_p_203_, 0);
lean_inc_ref(v_info_205_);
v_fn_206_ = lean_ctor_get(v_p_203_, 1);
lean_inc_ref(v_fn_206_);
lean_dec_ref(v_p_203_);
v_info_207_ = lean_ctor_get(v_q_204_, 0);
v_fn_208_ = lean_ctor_get(v_q_204_, 1);
v_isSharedCheck_217_ = !lean_is_exclusive(v_q_204_);
if (v_isSharedCheck_217_ == 0)
{
v___x_210_ = v_q_204_;
v_isShared_211_ = v_isSharedCheck_217_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_fn_208_);
lean_inc(v_info_207_);
lean_dec(v_q_204_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_217_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_215_; 
v___x_212_ = l_Lean_Parser_andthenInfo(v_info_205_, v_info_207_);
v___x_213_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(v___x_213_, 0, v_fn_206_);
lean_closure_set(v___x_213_, 1, v_fn_208_);
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 1, v___x_213_);
lean_ctor_set(v___x_210_, 0, v___x_212_);
v___x_215_ = v___x_210_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v___x_212_);
lean_ctor_set(v_reuseFailAlloc_216_, 1, v___x_213_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
return v___x_215_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instAndThenParser___lam__0(lean_object* v_a_218_, lean_object* v_b_219_){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_220_ = lean_box(0);
v___x_221_ = lean_apply_1(v_b_219_, v___x_220_);
v___x_222_ = l_Lean_Parser_andthen(v_a_218_, v___x_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeFn(lean_object* v_n_225_, lean_object* v_p_226_, lean_object* v_c_227_, lean_object* v_s_228_){
_start:
{
lean_object* v_iniSz_229_; lean_object* v_s_230_; lean_object* v___x_231_; 
v_iniSz_229_ = l_Lean_Parser_ParserState_stackSize(v_s_228_);
v_s_230_ = lean_apply_2(v_p_226_, v_c_227_, v_s_228_);
v___x_231_ = l_Lean_Parser_ParserState_mkNode(v_s_230_, v_n_225_, v_iniSz_229_);
lean_dec(v_iniSz_229_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_trailingNodeFn(lean_object* v_n_232_, lean_object* v_p_233_, lean_object* v_c_234_, lean_object* v_s_235_){
_start:
{
lean_object* v_iniSz_236_; lean_object* v_s_237_; lean_object* v___x_238_; 
v_iniSz_236_ = l_Lean_Parser_ParserState_stackSize(v_s_235_);
v_s_237_ = lean_apply_2(v_p_233_, v_c_234_, v_s_235_);
v___x_238_ = l_Lean_Parser_ParserState_mkTrailingNode(v_s_237_, v_n_232_, v_iniSz_236_);
lean_dec(v_iniSz_236_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeInfo___lam__0(lean_object* v_collectKinds_239_, lean_object* v_n_240_, lean_object* v_s_241_){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = lean_apply_1(v_collectKinds_239_, v_s_241_);
v___x_243_ = l_Lean_Parser_SyntaxNodeKindSet_insert(v___x_242_, v_n_240_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeInfo(lean_object* v_n_244_, lean_object* v_p_245_){
_start:
{
lean_object* v_collectTokens_246_; lean_object* v_collectKinds_247_; lean_object* v_firstTokens_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_256_; 
v_collectTokens_246_ = lean_ctor_get(v_p_245_, 0);
v_collectKinds_247_ = lean_ctor_get(v_p_245_, 1);
v_firstTokens_248_ = lean_ctor_get(v_p_245_, 2);
v_isSharedCheck_256_ = !lean_is_exclusive(v_p_245_);
if (v_isSharedCheck_256_ == 0)
{
v___x_250_ = v_p_245_;
v_isShared_251_ = v_isSharedCheck_256_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_firstTokens_248_);
lean_inc(v_collectKinds_247_);
lean_inc(v_collectTokens_246_);
lean_dec(v_p_245_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_256_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___f_252_; lean_object* v___x_254_; 
v___f_252_ = lean_alloc_closure((void*)(l_Lean_Parser_nodeInfo___lam__0), 3, 2);
lean_closure_set(v___f_252_, 0, v_collectKinds_247_);
lean_closure_set(v___f_252_, 1, v_n_244_);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 1, v___f_252_);
v___x_254_ = v___x_250_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_collectTokens_246_);
lean_ctor_set(v_reuseFailAlloc_255_, 1, v___f_252_);
lean_ctor_set(v_reuseFailAlloc_255_, 2, v_firstTokens_248_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_node(lean_object* v_n_257_, lean_object* v_p_258_){
_start:
{
lean_object* v_info_259_; lean_object* v_fn_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_269_; 
v_info_259_ = lean_ctor_get(v_p_258_, 0);
v_fn_260_ = lean_ctor_get(v_p_258_, 1);
v_isSharedCheck_269_ = !lean_is_exclusive(v_p_258_);
if (v_isSharedCheck_269_ == 0)
{
v___x_262_ = v_p_258_;
v_isShared_263_ = v_isSharedCheck_269_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_fn_260_);
lean_inc(v_info_259_);
lean_dec(v_p_258_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_269_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_267_; 
lean_inc(v_n_257_);
v___x_264_ = l_Lean_Parser_nodeInfo(v_n_257_, v_info_259_);
v___x_265_ = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(v___x_265_, 0, v_n_257_);
lean_closure_set(v___x_265_, 1, v_fn_260_);
if (v_isShared_263_ == 0)
{
lean_ctor_set(v___x_262_, 1, v___x_265_);
lean_ctor_set(v___x_262_, 0, v___x_264_);
v___x_267_ = v___x_262_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_264_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v___x_265_);
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
LEAN_EXPORT lean_object* l_Lean_Parser_errorFn___redArg(lean_object* v_msg_270_, lean_object* v_s_271_){
_start:
{
lean_object* v___x_272_; uint8_t v___x_273_; lean_object* v___x_274_; 
v___x_272_ = lean_box(0);
v___x_273_ = 1;
v___x_274_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_271_, v_msg_270_, v___x_272_, v___x_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_errorFn(lean_object* v_msg_275_, lean_object* v_x_276_, lean_object* v_s_277_){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_Lean_Parser_errorFn___redArg(v_msg_275_, v_s_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_errorFn___boxed(lean_object* v_msg_279_, lean_object* v_x_280_, lean_object* v_s_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_Parser_errorFn(v_msg_279_, v_x_280_, v_s_281_);
lean_dec_ref(v_x_280_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_error(lean_object* v_msg_283_){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_284_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_285_ = lean_alloc_closure((void*)(l_Lean_Parser_errorFn___boxed), 3, 1);
lean_closure_set(v___x_285_, 0, v_msg_283_);
v___x_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_284_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_errorAtSavedPosFn(lean_object* v_msg_287_, uint8_t v_delta_288_, lean_object* v_c_289_, lean_object* v_s_290_){
_start:
{
lean_object* v_toCacheableParserContext_291_; lean_object* v_savedPos_x3f_292_; 
v_toCacheableParserContext_291_ = lean_ctor_get(v_c_289_, 2);
v_savedPos_x3f_292_ = lean_ctor_get(v_toCacheableParserContext_291_, 2);
lean_inc(v_savedPos_x3f_292_);
if (lean_obj_tag(v_savedPos_x3f_292_) == 0)
{
lean_dec_ref(v_c_289_);
lean_dec_ref(v_msg_287_);
return v_s_290_;
}
else
{
if (v_delta_288_ == 0)
{
lean_object* v_val_293_; lean_object* v___x_294_; 
lean_dec_ref(v_c_289_);
v_val_293_ = lean_ctor_get(v_savedPos_x3f_292_, 0);
lean_inc(v_val_293_);
lean_dec_ref_known(v_savedPos_x3f_292_, 1);
v___x_294_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_290_, v_msg_287_, v_val_293_);
return v___x_294_;
}
else
{
lean_object* v_toInputContext_295_; lean_object* v_val_296_; lean_object* v_inputString_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v_toInputContext_295_ = lean_ctor_get(v_c_289_, 0);
lean_inc_ref(v_toInputContext_295_);
lean_dec_ref(v_c_289_);
v_val_296_ = lean_ctor_get(v_savedPos_x3f_292_, 0);
lean_inc(v_val_296_);
lean_dec_ref_known(v_savedPos_x3f_292_, 1);
v_inputString_297_ = lean_ctor_get(v_toInputContext_295_, 0);
lean_inc_ref(v_inputString_297_);
lean_dec_ref(v_toInputContext_295_);
v___x_298_ = lean_string_utf8_next(v_inputString_297_, v_val_296_);
lean_dec(v_val_296_);
lean_dec_ref(v_inputString_297_);
v___x_299_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_290_, v_msg_287_, v___x_298_);
return v___x_299_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_errorAtSavedPosFn___boxed(lean_object* v_msg_300_, lean_object* v_delta_301_, lean_object* v_c_302_, lean_object* v_s_303_){
_start:
{
uint8_t v_delta_boxed_304_; lean_object* v_res_305_; 
v_delta_boxed_304_ = lean_unbox(v_delta_301_);
v_res_305_ = l_Lean_Parser_errorAtSavedPosFn(v_msg_300_, v_delta_boxed_304_, v_c_302_, v_s_303_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_errorAtSavedPos(lean_object* v_msg_310_, uint8_t v_delta_311_){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_312_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_313_ = lean_box(v_delta_311_);
v___x_314_ = lean_alloc_closure((void*)(l_Lean_Parser_errorAtSavedPosFn___boxed), 4, 2);
lean_closure_set(v___x_314_, 0, v_msg_310_);
lean_closure_set(v___x_314_, 1, v___x_313_);
v___x_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_312_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_errorAtSavedPos___boxed(lean_object* v_msg_316_, lean_object* v_delta_317_){
_start:
{
uint8_t v_delta_boxed_318_; lean_object* v_res_319_; 
v_delta_boxed_318_ = lean_unbox(v_delta_317_);
v_res_319_ = l_Lean_Parser_errorAtSavedPos(v_msg_316_, v_delta_boxed_318_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1(){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_329_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__3));
v___x_330_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__4));
v___x_331_ = l_Lean_addBuiltinDocString(v___x_329_, v___x_330_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___boxed(lean_object* v_a_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1();
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkPrecFn(lean_object* v_prec_335_, lean_object* v_c_336_, lean_object* v_s_337_){
_start:
{
lean_object* v_toCacheableParserContext_338_; lean_object* v_prec_339_; uint8_t v___x_340_; 
v_toCacheableParserContext_338_ = lean_ctor_get(v_c_336_, 2);
v_prec_339_ = lean_ctor_get(v_toCacheableParserContext_338_, 0);
v___x_340_ = lean_nat_dec_le(v_prec_339_, v_prec_335_);
if (v___x_340_ == 0)
{
lean_object* v___x_341_; lean_object* v___x_342_; uint8_t v___x_343_; lean_object* v___x_344_; 
v___x_341_ = ((lean_object*)(l_Lean_Parser_checkPrecFn___closed__0));
v___x_342_ = lean_box(0);
v___x_343_ = 1;
v___x_344_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_337_, v___x_341_, v___x_342_, v___x_343_);
return v___x_344_;
}
else
{
return v_s_337_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkPrecFn___boxed(lean_object* v_prec_345_, lean_object* v_c_346_, lean_object* v_s_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lean_Parser_checkPrecFn(v_prec_345_, v_c_346_, v_s_347_);
lean_dec_ref(v_c_346_);
lean_dec(v_prec_345_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkPrec(lean_object* v_prec_349_){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_350_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_351_ = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(v___x_351_, 0, v_prec_349_);
v___x_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_352_, 0, v___x_350_);
lean_ctor_set(v___x_352_, 1, v___x_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrecFn___redArg(lean_object* v_prec_353_, lean_object* v_s_354_){
_start:
{
lean_object* v_lhsPrec_355_; uint8_t v___x_356_; 
v_lhsPrec_355_ = lean_ctor_get(v_s_354_, 1);
v___x_356_ = lean_nat_dec_le(v_prec_353_, v_lhsPrec_355_);
if (v___x_356_ == 0)
{
lean_object* v___x_357_; lean_object* v___x_358_; uint8_t v___x_359_; lean_object* v___x_360_; 
v___x_357_ = ((lean_object*)(l_Lean_Parser_checkPrecFn___closed__0));
v___x_358_ = lean_box(0);
v___x_359_ = 1;
v___x_360_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_354_, v___x_357_, v___x_358_, v___x_359_);
return v___x_360_;
}
else
{
return v_s_354_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrecFn___redArg___boxed(lean_object* v_prec_361_, lean_object* v_s_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lean_Parser_checkLhsPrecFn___redArg(v_prec_361_, v_s_362_);
lean_dec(v_prec_361_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrecFn(lean_object* v_prec_364_, lean_object* v_x_365_, lean_object* v_s_366_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = l_Lean_Parser_checkLhsPrecFn___redArg(v_prec_364_, v_s_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrecFn___boxed(lean_object* v_prec_368_, lean_object* v_x_369_, lean_object* v_s_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Lean_Parser_checkLhsPrecFn(v_prec_368_, v_x_369_, v_s_370_);
lean_dec_ref(v_x_369_);
lean_dec(v_prec_368_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrec(lean_object* v_prec_372_){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_373_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_374_ = lean_alloc_closure((void*)(l_Lean_Parser_checkLhsPrecFn___boxed), 3, 1);
lean_closure_set(v___x_374_, 0, v_prec_372_);
v___x_375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_373_);
lean_ctor_set(v___x_375_, 1, v___x_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setLhsPrecFn___redArg(lean_object* v_prec_376_, lean_object* v_s_377_){
_start:
{
lean_object* v_stxStack_378_; lean_object* v_pos_379_; lean_object* v_cache_380_; lean_object* v_errorMsg_381_; lean_object* v_recoveredErrors_382_; lean_object* v___x_383_; uint8_t v___x_384_; 
v_stxStack_378_ = lean_ctor_get(v_s_377_, 0);
v_pos_379_ = lean_ctor_get(v_s_377_, 2);
v_cache_380_ = lean_ctor_get(v_s_377_, 3);
v_errorMsg_381_ = lean_ctor_get(v_s_377_, 4);
v_recoveredErrors_382_ = lean_ctor_get(v_s_377_, 5);
v___x_383_ = lean_box(0);
v___x_384_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_381_, v___x_383_);
if (v___x_384_ == 0)
{
lean_dec(v_prec_376_);
return v_s_377_;
}
else
{
lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
lean_inc_ref(v_recoveredErrors_382_);
lean_inc(v_errorMsg_381_);
lean_inc_ref(v_cache_380_);
lean_inc(v_pos_379_);
lean_inc_ref(v_stxStack_378_);
v_isSharedCheck_391_ = !lean_is_exclusive(v_s_377_);
if (v_isSharedCheck_391_ == 0)
{
lean_object* v_unused_392_; lean_object* v_unused_393_; lean_object* v_unused_394_; lean_object* v_unused_395_; lean_object* v_unused_396_; lean_object* v_unused_397_; 
v_unused_392_ = lean_ctor_get(v_s_377_, 5);
lean_dec(v_unused_392_);
v_unused_393_ = lean_ctor_get(v_s_377_, 4);
lean_dec(v_unused_393_);
v_unused_394_ = lean_ctor_get(v_s_377_, 3);
lean_dec(v_unused_394_);
v_unused_395_ = lean_ctor_get(v_s_377_, 2);
lean_dec(v_unused_395_);
v_unused_396_ = lean_ctor_get(v_s_377_, 1);
lean_dec(v_unused_396_);
v_unused_397_ = lean_ctor_get(v_s_377_, 0);
lean_dec(v_unused_397_);
v___x_386_ = v_s_377_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_dec(v_s_377_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 1, v_prec_376_);
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_stxStack_378_);
lean_ctor_set(v_reuseFailAlloc_390_, 1, v_prec_376_);
lean_ctor_set(v_reuseFailAlloc_390_, 2, v_pos_379_);
lean_ctor_set(v_reuseFailAlloc_390_, 3, v_cache_380_);
lean_ctor_set(v_reuseFailAlloc_390_, 4, v_errorMsg_381_);
lean_ctor_set(v_reuseFailAlloc_390_, 5, v_recoveredErrors_382_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setLhsPrecFn(lean_object* v_prec_398_, lean_object* v_x_399_, lean_object* v_s_400_){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = l_Lean_Parser_setLhsPrecFn___redArg(v_prec_398_, v_s_400_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setLhsPrecFn___boxed(lean_object* v_prec_402_, lean_object* v_x_403_, lean_object* v_s_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lean_Parser_setLhsPrecFn(v_prec_402_, v_x_403_, v_s_404_);
lean_dec_ref(v_x_403_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setLhsPrec(lean_object* v_prec_406_){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_407_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_408_ = lean_alloc_closure((void*)(l_Lean_Parser_setLhsPrecFn___boxed), 3, 1);
lean_closure_set(v___x_408_, 0, v_prec_406_);
v___x_409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_407_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_spec__0(lean_object* v_a_410_){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = lean_nat_to_int(v_a_410_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth___lam__0(lean_object* v_i_412_, lean_object* v_c_413_){
_start:
{
lean_object* v_prec_414_; lean_object* v_quotDepth_415_; uint8_t v_suppressInsideQuot_416_; lean_object* v_savedPos_x3f_417_; lean_object* v_forbiddenTks_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_428_; 
v_prec_414_ = lean_ctor_get(v_c_413_, 0);
v_quotDepth_415_ = lean_ctor_get(v_c_413_, 1);
v_suppressInsideQuot_416_ = lean_ctor_get_uint8(v_c_413_, sizeof(void*)*4);
v_savedPos_x3f_417_ = lean_ctor_get(v_c_413_, 2);
v_forbiddenTks_418_ = lean_ctor_get(v_c_413_, 3);
v_isSharedCheck_428_ = !lean_is_exclusive(v_c_413_);
if (v_isSharedCheck_428_ == 0)
{
v___x_420_ = v_c_413_;
v_isShared_421_ = v_isSharedCheck_428_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_forbiddenTks_418_);
lean_inc(v_savedPos_x3f_417_);
lean_inc(v_quotDepth_415_);
lean_inc(v_prec_414_);
lean_dec(v_c_413_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_428_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_426_; 
v___x_422_ = lean_nat_to_int(v_quotDepth_415_);
v___x_423_ = lean_int_add(v___x_422_, v_i_412_);
lean_dec(v___x_422_);
v___x_424_ = l_Int_toNat(v___x_423_);
lean_dec(v___x_423_);
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 1, v___x_424_);
v___x_426_ = v___x_420_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_prec_414_);
lean_ctor_set(v_reuseFailAlloc_427_, 1, v___x_424_);
lean_ctor_set(v_reuseFailAlloc_427_, 2, v_savedPos_x3f_417_);
lean_ctor_set(v_reuseFailAlloc_427_, 3, v_forbiddenTks_418_);
lean_ctor_set_uint8(v_reuseFailAlloc_427_, sizeof(void*)*4, v_suppressInsideQuot_416_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth___lam__0___boxed(lean_object* v_i_429_, lean_object* v_c_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth___lam__0(v_i_429_, v_c_430_);
lean_dec(v_i_429_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth(lean_object* v_i_432_, lean_object* v_p_433_){
_start:
{
lean_object* v___f_434_; lean_object* v___x_435_; 
v___f_434_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth___lam__0___boxed), 2, 1);
lean_closure_set(v___f_434_, 0, v_i_432_);
v___x_435_ = l_Lean_Parser_adaptCacheableContext(v___f_434_, v_p_433_);
return v___x_435_;
}
}
static lean_object* _init_l_Lean_Parser_incQuotDepth___closed__0(void){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_436_ = lean_unsigned_to_nat(1u);
v___x_437_ = lean_nat_to_int(v___x_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth(lean_object* v_p_438_){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_439_ = lean_obj_once(&l_Lean_Parser_incQuotDepth___closed__0, &l_Lean_Parser_incQuotDepth___closed__0_once, _init_l_Lean_Parser_incQuotDepth___closed__0);
v___x_440_ = l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth(v___x_439_, v_p_438_);
return v___x_440_;
}
}
static lean_object* _init_l_Lean_Parser_decQuotDepth___closed__0(void){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_441_ = lean_obj_once(&l_Lean_Parser_incQuotDepth___closed__0, &l_Lean_Parser_incQuotDepth___closed__0_once, _init_l_Lean_Parser_incQuotDepth___closed__0);
v___x_442_ = lean_int_neg(v___x_441_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth(lean_object* v_p_443_){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = lean_obj_once(&l_Lean_Parser_decQuotDepth___closed__0, &l_Lean_Parser_decQuotDepth___closed__0_once, _init_l_Lean_Parser_decQuotDepth___closed__0);
v___x_445_ = l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth(v___x_444_, v_p_443_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot___lam__0(lean_object* v_c_446_){
_start:
{
lean_object* v_prec_447_; lean_object* v_quotDepth_448_; lean_object* v_savedPos_x3f_449_; lean_object* v_forbiddenTks_450_; lean_object* v___x_451_; uint8_t v___x_452_; 
v_prec_447_ = lean_ctor_get(v_c_446_, 0);
v_quotDepth_448_ = lean_ctor_get(v_c_446_, 1);
v_savedPos_x3f_449_ = lean_ctor_get(v_c_446_, 2);
v_forbiddenTks_450_ = lean_ctor_get(v_c_446_, 3);
v___x_451_ = lean_unsigned_to_nat(0u);
v___x_452_ = lean_nat_dec_eq(v_quotDepth_448_, v___x_451_);
if (v___x_452_ == 0)
{
return v_c_446_;
}
else
{
lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_459_; 
lean_inc_ref(v_forbiddenTks_450_);
lean_inc(v_savedPos_x3f_449_);
lean_inc(v_quotDepth_448_);
lean_inc(v_prec_447_);
v_isSharedCheck_459_ = !lean_is_exclusive(v_c_446_);
if (v_isSharedCheck_459_ == 0)
{
lean_object* v_unused_460_; lean_object* v_unused_461_; lean_object* v_unused_462_; lean_object* v_unused_463_; 
v_unused_460_ = lean_ctor_get(v_c_446_, 3);
lean_dec(v_unused_460_);
v_unused_461_ = lean_ctor_get(v_c_446_, 2);
lean_dec(v_unused_461_);
v_unused_462_ = lean_ctor_get(v_c_446_, 1);
lean_dec(v_unused_462_);
v_unused_463_ = lean_ctor_get(v_c_446_, 0);
lean_dec(v_unused_463_);
v___x_454_ = v_c_446_;
v_isShared_455_ = v_isSharedCheck_459_;
goto v_resetjp_453_;
}
else
{
lean_dec(v_c_446_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_459_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_457_; 
if (v_isShared_455_ == 0)
{
v___x_457_ = v___x_454_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_prec_447_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v_quotDepth_448_);
lean_ctor_set(v_reuseFailAlloc_458_, 2, v_savedPos_x3f_449_);
lean_ctor_set(v_reuseFailAlloc_458_, 3, v_forbiddenTks_450_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
lean_ctor_set_uint8(v___x_457_, sizeof(void*)*4, v___x_452_);
return v___x_457_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot(lean_object* v_a_465_){
_start:
{
lean_object* v___f_466_; lean_object* v___x_467_; 
v___f_466_ = ((lean_object*)(l_Lean_Parser_suppressInsideQuot___closed__0));
v___x_467_ = l_Lean_Parser_adaptCacheableContext(v___f_466_, v_a_465_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode(lean_object* v_n_468_, lean_object* v_prec_469_, lean_object* v_p_470_){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
lean_inc(v_prec_469_);
v___x_471_ = l_Lean_Parser_checkPrec(v_prec_469_);
v___x_472_ = l_Lean_Parser_node(v_n_468_, v_p_470_);
v___x_473_ = l_Lean_Parser_setLhsPrec(v_prec_469_);
v___x_474_ = l_Lean_Parser_andthen(v___x_472_, v___x_473_);
v___x_475_ = l_Lean_Parser_andthen(v___x_471_, v___x_474_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_trailingNodeAux(lean_object* v_n_476_, lean_object* v_p_477_){
_start:
{
lean_object* v_info_478_; lean_object* v_fn_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_488_; 
v_info_478_ = lean_ctor_get(v_p_477_, 0);
v_fn_479_ = lean_ctor_get(v_p_477_, 1);
v_isSharedCheck_488_ = !lean_is_exclusive(v_p_477_);
if (v_isSharedCheck_488_ == 0)
{
v___x_481_ = v_p_477_;
v_isShared_482_ = v_isSharedCheck_488_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_fn_479_);
lean_inc(v_info_478_);
lean_dec(v_p_477_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_488_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_486_; 
lean_inc(v_n_476_);
v___x_483_ = l_Lean_Parser_nodeInfo(v_n_476_, v_info_478_);
v___x_484_ = lean_alloc_closure((void*)(l_Lean_Parser_trailingNodeFn), 4, 2);
lean_closure_set(v___x_484_, 0, v_n_476_);
lean_closure_set(v___x_484_, 1, v_fn_479_);
if (v_isShared_482_ == 0)
{
lean_ctor_set(v___x_481_, 1, v___x_484_);
lean_ctor_set(v___x_481_, 0, v___x_483_);
v___x_486_ = v___x_481_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_483_);
lean_ctor_set(v_reuseFailAlloc_487_, 1, v___x_484_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_trailingNode(lean_object* v_n_489_, lean_object* v_prec_490_, lean_object* v_lhsPrec_491_, lean_object* v_p_492_){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
lean_inc(v_prec_490_);
v___x_493_ = l_Lean_Parser_checkPrec(v_prec_490_);
v___x_494_ = l_Lean_Parser_checkLhsPrec(v_lhsPrec_491_);
v___x_495_ = l_Lean_Parser_trailingNodeAux(v_n_489_, v_p_492_);
v___x_496_ = l_Lean_Parser_setLhsPrec(v_prec_490_);
v___x_497_ = l_Lean_Parser_andthen(v___x_495_, v___x_496_);
v___x_498_ = l_Lean_Parser_andthen(v___x_494_, v___x_497_);
v___x_499_ = l_Lean_Parser_andthen(v___x_493_, v___x_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mergeOrElseErrors(lean_object* v_s_500_, lean_object* v_error1_501_, lean_object* v_iniPos_502_, uint8_t v_mergeErrors_503_){
_start:
{
lean_object* v_stxStack_504_; lean_object* v_lhsPrec_505_; lean_object* v_pos_506_; lean_object* v_cache_507_; lean_object* v_errorMsg_508_; lean_object* v_recoveredErrors_509_; lean_object* v___y_511_; 
v_stxStack_504_ = lean_ctor_get(v_s_500_, 0);
v_lhsPrec_505_ = lean_ctor_get(v_s_500_, 1);
v_pos_506_ = lean_ctor_get(v_s_500_, 2);
v_cache_507_ = lean_ctor_get(v_s_500_, 3);
v_errorMsg_508_ = lean_ctor_get(v_s_500_, 4);
v_recoveredErrors_509_ = lean_ctor_get(v_s_500_, 5);
if (lean_obj_tag(v_errorMsg_508_) == 1)
{
lean_object* v_val_514_; uint8_t v_decide_515_; 
v_val_514_ = lean_ctor_get(v_errorMsg_508_, 0);
v_decide_515_ = lean_nat_dec_eq(v_pos_506_, v_iniPos_502_);
if (v_decide_515_ == 0)
{
lean_dec_ref(v_error1_501_);
return v_s_500_;
}
else
{
lean_inc(v_val_514_);
lean_inc_ref(v_recoveredErrors_509_);
lean_inc_ref(v_cache_507_);
lean_inc(v_pos_506_);
lean_inc(v_lhsPrec_505_);
lean_inc_ref(v_stxStack_504_);
lean_dec_ref(v_s_500_);
if (v_mergeErrors_503_ == 0)
{
lean_dec_ref(v_error1_501_);
v___y_511_ = v_val_514_;
goto v___jp_510_;
}
else
{
lean_object* v___x_516_; 
v___x_516_ = l_Lean_Parser_Error_merge(v_error1_501_, v_val_514_);
v___y_511_ = v___x_516_;
goto v___jp_510_;
}
}
}
else
{
lean_dec_ref(v_error1_501_);
return v_s_500_;
}
v___jp_510_:
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_512_, 0, v___y_511_);
v___x_513_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_513_, 0, v_stxStack_504_);
lean_ctor_set(v___x_513_, 1, v_lhsPrec_505_);
lean_ctor_set(v___x_513_, 2, v_pos_506_);
lean_ctor_set(v___x_513_, 3, v_cache_507_);
lean_ctor_set(v___x_513_, 4, v___x_512_);
lean_ctor_set(v___x_513_, 5, v_recoveredErrors_509_);
return v___x_513_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mergeOrElseErrors___boxed(lean_object* v_s_517_, lean_object* v_error1_518_, lean_object* v_iniPos_519_, lean_object* v_mergeErrors_520_){
_start:
{
uint8_t v_mergeErrors_boxed_521_; lean_object* v_res_522_; 
v_mergeErrors_boxed_521_ = lean_unbox(v_mergeErrors_520_);
v_res_522_ = l_Lean_Parser_mergeOrElseErrors(v_s_517_, v_error1_518_, v_iniPos_519_, v_mergeErrors_boxed_521_);
lean_dec(v_iniPos_519_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorIdx___impl(uint8_t v_x_523_){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = lean_box(v_x_523_);
v___x_525_ = lean_obj_tag_nat(v___x_524_);
lean_dec(v___x_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorIdx___impl___boxed(lean_object* v_x_526_){
_start:
{
uint8_t v_x_4__boxed_527_; lean_object* v_res_528_; 
v_x_4__boxed_527_ = lean_unbox(v_x_526_);
v_res_528_ = l_Lean_Parser_OrElseOnAntiquotBehavior_ctorIdx___impl(v_x_4__boxed_527_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim___redArg(lean_object* v_k_529_){
_start:
{
lean_inc(v_k_529_);
return v_k_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim___redArg___boxed(lean_object* v_k_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim___redArg(v_k_530_);
lean_dec(v_k_530_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim(lean_object* v_motive_532_, lean_object* v_ctorIdx_533_, uint8_t v_t_534_, lean_object* v_h_535_, lean_object* v_k_536_){
_start:
{
lean_inc(v_k_536_);
return v_k_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim___boxed(lean_object* v_motive_537_, lean_object* v_ctorIdx_538_, lean_object* v_t_539_, lean_object* v_h_540_, lean_object* v_k_541_){
_start:
{
uint8_t v_t_boxed_542_; lean_object* v_res_543_; 
v_t_boxed_542_ = lean_unbox(v_t_539_);
v_res_543_ = l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim(v_motive_537_, v_ctorIdx_538_, v_t_boxed_542_, v_h_540_, v_k_541_);
lean_dec(v_k_541_);
lean_dec(v_ctorIdx_538_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim___redArg(lean_object* v_acceptLhs_544_){
_start:
{
lean_inc(v_acceptLhs_544_);
return v_acceptLhs_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim___redArg___boxed(lean_object* v_acceptLhs_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim___redArg(v_acceptLhs_545_);
lean_dec(v_acceptLhs_545_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim(lean_object* v_motive_547_, uint8_t v_t_548_, lean_object* v_h_549_, lean_object* v_acceptLhs_550_){
_start:
{
lean_inc(v_acceptLhs_550_);
return v_acceptLhs_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim___boxed(lean_object* v_motive_551_, lean_object* v_t_552_, lean_object* v_h_553_, lean_object* v_acceptLhs_554_){
_start:
{
uint8_t v_t_boxed_555_; lean_object* v_res_556_; 
v_t_boxed_555_ = lean_unbox(v_t_552_);
v_res_556_ = l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim(v_motive_551_, v_t_boxed_555_, v_h_553_, v_acceptLhs_554_);
lean_dec(v_acceptLhs_554_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim___redArg(lean_object* v_takeLongest_557_){
_start:
{
lean_inc(v_takeLongest_557_);
return v_takeLongest_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim___redArg___boxed(lean_object* v_takeLongest_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim___redArg(v_takeLongest_558_);
lean_dec(v_takeLongest_558_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim(lean_object* v_motive_560_, uint8_t v_t_561_, lean_object* v_h_562_, lean_object* v_takeLongest_563_){
_start:
{
lean_inc(v_takeLongest_563_);
return v_takeLongest_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim___boxed(lean_object* v_motive_564_, lean_object* v_t_565_, lean_object* v_h_566_, lean_object* v_takeLongest_567_){
_start:
{
uint8_t v_t_boxed_568_; lean_object* v_res_569_; 
v_t_boxed_568_ = lean_unbox(v_t_565_);
v_res_569_ = l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim(v_motive_564_, v_t_boxed_568_, v_h_566_, v_takeLongest_567_);
lean_dec(v_takeLongest_567_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim___redArg(lean_object* v_merge_570_){
_start:
{
lean_inc(v_merge_570_);
return v_merge_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim___redArg___boxed(lean_object* v_merge_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim___redArg(v_merge_571_);
lean_dec(v_merge_571_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim(lean_object* v_motive_573_, uint8_t v_t_574_, lean_object* v_h_575_, lean_object* v_merge_576_){
_start:
{
lean_inc(v_merge_576_);
return v_merge_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim___boxed(lean_object* v_motive_577_, lean_object* v_t_578_, lean_object* v_h_579_, lean_object* v_merge_580_){
_start:
{
uint8_t v_t_boxed_581_; lean_object* v_res_582_; 
v_t_boxed_581_ = lean_unbox(v_t_578_);
v_res_582_ = l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim(v_motive_577_, v_t_boxed_581_, v_h_579_, v_merge_580_);
lean_dec(v_merge_580_);
return v_res_582_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqOrElseOnAntiquotBehavior_beq(uint8_t v_x_583_, uint8_t v_y_584_){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; uint8_t v___x_589_; 
v___x_585_ = lean_box(v_x_583_);
v___x_586_ = lean_obj_tag_nat(v___x_585_);
lean_dec(v___x_585_);
v___x_587_ = lean_box(v_y_584_);
v___x_588_ = lean_obj_tag_nat(v___x_587_);
lean_dec(v___x_587_);
v___x_589_ = lean_nat_dec_eq(v___x_586_, v___x_588_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqOrElseOnAntiquotBehavior_beq___boxed(lean_object* v_x_590_, lean_object* v_y_591_){
_start:
{
uint8_t v_x_24__boxed_592_; uint8_t v_y_25__boxed_593_; uint8_t v_res_594_; lean_object* v_r_595_; 
v_x_24__boxed_592_ = lean_unbox(v_x_590_);
v_y_25__boxed_593_ = lean_unbox(v_y_591_);
v_res_594_ = l_Lean_Parser_instBEqOrElseOnAntiquotBehavior_beq(v_x_24__boxed_592_, v_y_25__boxed_593_);
v_r_595_ = lean_box(v_res_594_);
return v_r_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_orelseFnCore___lam__0(lean_object* v_stx_601_, lean_object* v_s_602_){
_start:
{
lean_object* v___x_603_; uint8_t v___x_604_; 
v___x_603_ = ((lean_object*)(l_Lean_Parser_orelseFnCore___lam__0___closed__1));
lean_inc(v_stx_601_);
v___x_604_ = l_Lean_Syntax_isOfKind(v_stx_601_, v___x_603_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; 
v___x_605_ = l_Lean_Parser_ParserState_pushSyntax(v_s_602_, v_stx_601_);
return v___x_605_;
}
else
{
lean_object* v_stxStack_606_; lean_object* v_lhsPrec_607_; lean_object* v_pos_608_; lean_object* v_cache_609_; lean_object* v_errorMsg_610_; lean_object* v_recoveredErrors_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_629_; 
v_stxStack_606_ = lean_ctor_get(v_s_602_, 0);
v_lhsPrec_607_ = lean_ctor_get(v_s_602_, 1);
v_pos_608_ = lean_ctor_get(v_s_602_, 2);
v_cache_609_ = lean_ctor_get(v_s_602_, 3);
v_errorMsg_610_ = lean_ctor_get(v_s_602_, 4);
v_recoveredErrors_611_ = lean_ctor_get(v_s_602_, 5);
v_isSharedCheck_629_ = !lean_is_exclusive(v_s_602_);
if (v_isSharedCheck_629_ == 0)
{
v___x_613_ = v_s_602_;
v_isShared_614_ = v_isSharedCheck_629_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_recoveredErrors_611_);
lean_inc(v_errorMsg_610_);
lean_inc(v_cache_609_);
lean_inc(v_pos_608_);
lean_inc(v_lhsPrec_607_);
lean_inc(v_stxStack_606_);
lean_dec(v_s_602_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_629_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v_raw_615_; lean_object* v_drop_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_628_; 
v_raw_615_ = lean_ctor_get(v_stxStack_606_, 0);
v_drop_616_ = lean_ctor_get(v_stxStack_606_, 1);
v_isSharedCheck_628_ = !lean_is_exclusive(v_stxStack_606_);
if (v_isSharedCheck_628_ == 0)
{
v___x_618_ = v_stxStack_606_;
v_isShared_619_ = v_isSharedCheck_628_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_drop_616_);
lean_inc(v_raw_615_);
lean_dec(v_stxStack_606_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_628_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_623_; 
v___x_620_ = l_Lean_Syntax_getArgs(v_stx_601_);
lean_dec(v_stx_601_);
v___x_621_ = l_Array_append___redArg(v_raw_615_, v___x_620_);
lean_dec_ref(v___x_620_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v___x_621_);
v___x_623_ = v___x_618_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_621_);
lean_ctor_set(v_reuseFailAlloc_627_, 1, v_drop_616_);
v___x_623_ = v_reuseFailAlloc_627_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
lean_object* v___x_625_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 0, v___x_623_);
v___x_625_ = v___x_613_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_623_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v_lhsPrec_607_);
lean_ctor_set(v_reuseFailAlloc_626_, 2, v_pos_608_);
lean_ctor_set(v_reuseFailAlloc_626_, 3, v_cache_609_);
lean_ctor_set(v_reuseFailAlloc_626_, 4, v_errorMsg_610_);
lean_ctor_set(v_reuseFailAlloc_626_, 5, v_recoveredErrors_611_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_orelseFnCore(lean_object* v_p_630_, lean_object* v_q_631_, uint8_t v_antiquotBehavior_632_, lean_object* v_c_633_, lean_object* v_s_634_){
_start:
{
lean_object* v_pos_635_; lean_object* v_iniSz_636_; lean_object* v_s_637_; lean_object* v_errorMsg_638_; 
v_pos_635_ = lean_ctor_get(v_s_634_, 2);
lean_inc(v_pos_635_);
v_iniSz_636_ = l_Lean_Parser_ParserState_stackSize(v_s_634_);
lean_inc_ref(v_c_633_);
v_s_637_ = lean_apply_2(v_p_630_, v_c_633_, v_s_634_);
v_errorMsg_638_ = lean_ctor_get(v_s_637_, 4);
lean_inc(v_errorMsg_638_);
if (lean_obj_tag(v_errorMsg_638_) == 0)
{
lean_object* v_stxStack_639_; lean_object* v_pos_640_; uint8_t v___x_641_; uint8_t v___x_642_; 
v_stxStack_639_ = lean_ctor_get(v_s_637_, 0);
lean_inc_ref(v_stxStack_639_);
v_pos_640_ = lean_ctor_get(v_s_637_, 2);
lean_inc(v_pos_640_);
v___x_641_ = 0;
v___x_642_ = l_Lean_Parser_instBEqOrElseOnAntiquotBehavior_beq(v_antiquotBehavior_632_, v___x_641_);
if (v___x_642_ == 0)
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; uint8_t v___x_646_; 
v___x_643_ = l_Lean_Parser_ParserState_stackSize(v_s_637_);
v___x_644_ = lean_unsigned_to_nat(1u);
v___x_645_ = lean_nat_add(v_iniSz_636_, v___x_644_);
v___x_646_ = lean_nat_dec_eq(v___x_643_, v___x_645_);
lean_dec(v___x_643_);
if (v___x_646_ == 0)
{
lean_dec(v___x_645_);
lean_dec(v_pos_640_);
lean_dec_ref(v_stxStack_639_);
lean_dec(v_iniSz_636_);
lean_dec(v_pos_635_);
lean_dec_ref(v_c_633_);
lean_dec_ref(v_q_631_);
return v_s_637_;
}
else
{
lean_object* v_pBack_647_; uint8_t v___x_648_; 
v_pBack_647_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_639_);
lean_dec_ref(v_stxStack_639_);
lean_inc(v_pBack_647_);
v___x_648_ = l_Lean_Syntax_isAntiquots(v_pBack_647_);
if (v___x_648_ == 0)
{
lean_dec(v_pBack_647_);
lean_dec(v___x_645_);
lean_dec(v_pos_640_);
lean_dec(v_iniSz_636_);
lean_dec(v_pos_635_);
lean_dec_ref(v_c_633_);
lean_dec_ref(v_q_631_);
return v_s_637_;
}
else
{
lean_object* v_s_649_; lean_object* v_s_650_; lean_object* v_stxStack_654_; lean_object* v_pos_655_; lean_object* v_errorMsg_656_; uint8_t v___x_657_; 
v_s_649_ = l_Lean_Parser_ParserState_restore(v_s_637_, v_iniSz_636_, v_pos_635_);
v_s_650_ = lean_apply_2(v_q_631_, v_c_633_, v_s_649_);
v_stxStack_654_ = lean_ctor_get(v_s_650_, 0);
lean_inc_ref(v_stxStack_654_);
v_pos_655_ = lean_ctor_get(v_s_650_, 2);
lean_inc(v_pos_655_);
v_errorMsg_656_ = lean_ctor_get(v_s_650_, 4);
lean_inc(v_errorMsg_656_);
v___x_657_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_656_, v_errorMsg_638_);
lean_dec(v_errorMsg_656_);
if (v___x_657_ == 0)
{
lean_object* v___x_658_; lean_object* v___x_659_; 
lean_dec(v_pos_655_);
lean_dec_ref(v_stxStack_654_);
lean_dec(v___x_645_);
v___x_658_ = l_Lean_Parser_ParserState_restore(v_s_650_, v_iniSz_636_, v_pos_640_);
lean_dec(v_iniSz_636_);
v___x_659_ = l_Lean_Parser_ParserState_pushSyntax(v___x_658_, v_pBack_647_);
return v___x_659_;
}
else
{
lean_object* v___x_660_; uint8_t v___x_661_; 
v___x_660_ = lean_nat_add(v_pos_640_, v___x_644_);
v___x_661_ = lean_nat_dec_le(v___x_660_, v_pos_655_);
lean_dec(v___x_660_);
if (v___x_661_ == 0)
{
uint8_t v___x_662_; 
v___x_662_ = lean_nat_dec_lt(v_pos_655_, v_pos_640_);
lean_dec(v_pos_655_);
if (v___x_662_ == 0)
{
uint8_t v___x_663_; uint8_t v___x_664_; 
v___x_663_ = 2;
v___x_664_ = l_Lean_Parser_instBEqOrElseOnAntiquotBehavior_beq(v_antiquotBehavior_632_, v___x_663_);
if (v___x_664_ == 0)
{
lean_dec_ref(v_stxStack_654_);
lean_dec(v___x_645_);
goto v___jp_651_;
}
else
{
lean_object* v___x_665_; uint8_t v___x_666_; 
v___x_665_ = l_Lean_Parser_ParserState_stackSize(v_s_650_);
v___x_666_ = lean_nat_dec_eq(v___x_665_, v___x_645_);
lean_dec(v___x_645_);
lean_dec(v___x_665_);
if (v___x_666_ == 0)
{
lean_dec_ref(v_stxStack_654_);
goto v___jp_651_;
}
else
{
lean_object* v___x_667_; uint8_t v___x_668_; 
v___x_667_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_654_);
lean_dec_ref(v_stxStack_654_);
lean_inc(v___x_667_);
v___x_668_ = l_Lean_Syntax_isAntiquots(v___x_667_);
if (v___x_668_ == 0)
{
lean_dec(v___x_667_);
goto v___jp_651_;
}
else
{
lean_object* v_s_669_; lean_object* v_s_670_; lean_object* v_s_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
lean_dec(v_pos_640_);
v_s_669_ = l_Lean_Parser_ParserState_popSyntax(v_s_650_);
v_s_670_ = l_Lean_Parser_orelseFnCore___lam__0(v_pBack_647_, v_s_669_);
v_s_671_ = l_Lean_Parser_orelseFnCore___lam__0(v___x_667_, v_s_670_);
v___x_672_ = ((lean_object*)(l_Lean_Parser_orelseFnCore___lam__0___closed__1));
v___x_673_ = l_Lean_Parser_ParserState_mkNode(v_s_671_, v___x_672_, v_iniSz_636_);
lean_dec(v_iniSz_636_);
return v___x_673_;
}
}
}
}
else
{
lean_dec_ref(v_stxStack_654_);
lean_dec(v___x_645_);
goto v___jp_651_;
}
}
else
{
lean_dec(v_pos_655_);
lean_dec_ref(v_stxStack_654_);
lean_dec(v_pBack_647_);
lean_dec(v___x_645_);
lean_dec(v_pos_640_);
lean_dec(v_iniSz_636_);
return v_s_650_;
}
}
v___jp_651_:
{
lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_652_ = l_Lean_Parser_ParserState_restore(v_s_650_, v_iniSz_636_, v_pos_640_);
lean_dec(v_iniSz_636_);
v___x_653_ = l_Lean_Parser_ParserState_pushSyntax(v___x_652_, v_pBack_647_);
return v___x_653_;
}
}
}
}
else
{
lean_dec(v_pos_640_);
lean_dec_ref(v_stxStack_639_);
lean_dec(v_iniSz_636_);
lean_dec(v_pos_635_);
lean_dec_ref(v_c_633_);
lean_dec_ref(v_q_631_);
return v_s_637_;
}
}
else
{
lean_object* v_pos_674_; lean_object* v_val_675_; uint8_t v_decide_676_; 
v_pos_674_ = lean_ctor_get(v_s_637_, 2);
lean_inc(v_pos_674_);
v_val_675_ = lean_ctor_get(v_errorMsg_638_, 0);
lean_inc(v_val_675_);
lean_dec_ref_known(v_errorMsg_638_, 1);
v_decide_676_ = lean_nat_dec_eq(v_pos_674_, v_pos_635_);
lean_dec(v_pos_674_);
if (v_decide_676_ == 0)
{
lean_dec(v_val_675_);
lean_dec(v_iniSz_636_);
lean_dec(v_pos_635_);
lean_dec_ref(v_c_633_);
lean_dec_ref(v_q_631_);
return v_s_637_;
}
else
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
lean_inc(v_pos_635_);
v___x_677_ = l_Lean_Parser_ParserState_restore(v_s_637_, v_iniSz_636_, v_pos_635_);
lean_dec(v_iniSz_636_);
v___x_678_ = lean_apply_2(v_q_631_, v_c_633_, v___x_677_);
v___x_679_ = l_Lean_Parser_mergeOrElseErrors(v___x_678_, v_val_675_, v_pos_635_, v_decide_676_);
lean_dec(v_pos_635_);
return v___x_679_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_orelseFnCore___boxed(lean_object* v_p_680_, lean_object* v_q_681_, lean_object* v_antiquotBehavior_682_, lean_object* v_c_683_, lean_object* v_s_684_){
_start:
{
uint8_t v_antiquotBehavior_boxed_685_; lean_object* v_res_686_; 
v_antiquotBehavior_boxed_685_ = lean_unbox(v_antiquotBehavior_682_);
v_res_686_ = l_Lean_Parser_orelseFnCore(v_p_680_, v_q_681_, v_antiquotBehavior_boxed_685_, v_c_683_, v_s_684_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_orelseFn(lean_object* v_p_687_, lean_object* v_q_688_, lean_object* v_a_689_, lean_object* v_a_690_){
_start:
{
uint8_t v___x_691_; lean_object* v___x_692_; 
v___x_691_ = 2;
v___x_692_ = l_Lean_Parser_orelseFnCore(v_p_687_, v_q_688_, v___x_691_, v_a_689_, v_a_690_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_orelseInfo(lean_object* v_p_693_, lean_object* v_q_694_){
_start:
{
lean_object* v_collectTokens_695_; lean_object* v_collectKinds_696_; lean_object* v_firstTokens_697_; lean_object* v_collectTokens_698_; lean_object* v_collectKinds_699_; lean_object* v_firstTokens_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_710_; 
v_collectTokens_695_ = lean_ctor_get(v_p_693_, 0);
lean_inc_ref(v_collectTokens_695_);
v_collectKinds_696_ = lean_ctor_get(v_p_693_, 1);
lean_inc_ref(v_collectKinds_696_);
v_firstTokens_697_ = lean_ctor_get(v_p_693_, 2);
lean_inc(v_firstTokens_697_);
lean_dec_ref(v_p_693_);
v_collectTokens_698_ = lean_ctor_get(v_q_694_, 0);
v_collectKinds_699_ = lean_ctor_get(v_q_694_, 1);
v_firstTokens_700_ = lean_ctor_get(v_q_694_, 2);
v_isSharedCheck_710_ = !lean_is_exclusive(v_q_694_);
if (v_isSharedCheck_710_ == 0)
{
v___x_702_ = v_q_694_;
v_isShared_703_ = v_isSharedCheck_710_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_firstTokens_700_);
lean_inc(v_collectKinds_699_);
lean_inc(v_collectTokens_698_);
lean_dec(v_q_694_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_710_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___f_704_; lean_object* v___f_705_; lean_object* v___x_706_; lean_object* v___x_708_; 
v___f_704_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___lam__0), 3, 2);
lean_closure_set(v___f_704_, 0, v_collectKinds_699_);
lean_closure_set(v___f_704_, 1, v_collectKinds_696_);
v___f_705_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___lam__1), 3, 2);
lean_closure_set(v___f_705_, 0, v_collectTokens_698_);
lean_closure_set(v___f_705_, 1, v_collectTokens_695_);
v___x_706_ = l_Lean_Parser_FirstTokens_merge(v_firstTokens_697_, v_firstTokens_700_);
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 2, v___x_706_);
lean_ctor_set(v___x_702_, 1, v___f_704_);
lean_ctor_set(v___x_702_, 0, v___f_705_);
v___x_708_ = v___x_702_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v___f_705_);
lean_ctor_set(v_reuseFailAlloc_709_, 1, v___f_704_);
lean_ctor_set(v_reuseFailAlloc_709_, 2, v___x_706_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instOrElseParserFn___lam__0(lean_object* v_p1_711_, lean_object* v_p2_712_, lean_object* v___y_713_, lean_object* v___y_714_){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_715_ = lean_box(0);
v___x_716_ = lean_apply_1(v_p2_712_, v___x_715_);
v___x_717_ = l_Lean_Parser_orelseFn(v_p1_711_, v___x_716_, v___y_713_, v___y_714_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_orelse(lean_object* v_p_720_, lean_object* v_q_721_){
_start:
{
lean_object* v_info_722_; lean_object* v_fn_723_; lean_object* v_info_724_; lean_object* v_fn_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_734_; 
v_info_722_ = lean_ctor_get(v_p_720_, 0);
lean_inc_ref(v_info_722_);
v_fn_723_ = lean_ctor_get(v_p_720_, 1);
lean_inc_ref(v_fn_723_);
lean_dec_ref(v_p_720_);
v_info_724_ = lean_ctor_get(v_q_721_, 0);
v_fn_725_ = lean_ctor_get(v_q_721_, 1);
v_isSharedCheck_734_ = !lean_is_exclusive(v_q_721_);
if (v_isSharedCheck_734_ == 0)
{
v___x_727_ = v_q_721_;
v_isShared_728_ = v_isSharedCheck_734_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_fn_725_);
lean_inc(v_info_724_);
lean_dec(v_q_721_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_734_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_732_; 
v___x_729_ = l_Lean_Parser_orelseInfo(v_info_722_, v_info_724_);
v___x_730_ = lean_alloc_closure((void*)(l_Lean_Parser_orelseFn), 4, 2);
lean_closure_set(v___x_730_, 0, v_fn_723_);
lean_closure_set(v___x_730_, 1, v_fn_725_);
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 1, v___x_730_);
lean_ctor_set(v___x_727_, 0, v___x_729_);
v___x_732_ = v___x_727_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v___x_729_);
lean_ctor_set(v_reuseFailAlloc_733_, 1, v___x_730_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1(){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_742_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__1));
v___x_743_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__2));
v___x_744_ = l_Lean_addBuiltinDocString(v___x_742_, v___x_743_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___boxed(lean_object* v_a_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1();
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instOrElseParser___lam__0(lean_object* v_a_747_, lean_object* v_b_748_){
_start:
{
lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_749_ = lean_box(0);
v___x_750_ = lean_apply_1(v_b_748_, v___x_749_);
v___x_751_ = l_Lean_Parser_orelse(v_a_747_, v___x_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_noFirstTokenInfo(lean_object* v_info_754_){
_start:
{
lean_object* v_collectTokens_755_; lean_object* v_collectKinds_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_764_; 
v_collectTokens_755_ = lean_ctor_get(v_info_754_, 0);
v_collectKinds_756_ = lean_ctor_get(v_info_754_, 1);
v_isSharedCheck_764_ = !lean_is_exclusive(v_info_754_);
if (v_isSharedCheck_764_ == 0)
{
lean_object* v_unused_765_; 
v_unused_765_ = lean_ctor_get(v_info_754_, 2);
lean_dec(v_unused_765_);
v___x_758_ = v_info_754_;
v_isShared_759_ = v_isSharedCheck_764_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_collectKinds_756_);
lean_inc(v_collectTokens_755_);
lean_dec(v_info_754_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_764_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_760_; lean_object* v___x_762_; 
v___x_760_ = lean_box(1);
if (v_isShared_759_ == 0)
{
lean_ctor_set(v___x_758_, 2, v___x_760_);
v___x_762_ = v___x_758_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_collectTokens_755_);
lean_ctor_set(v_reuseFailAlloc_763_, 1, v_collectKinds_756_);
lean_ctor_set(v_reuseFailAlloc_763_, 2, v___x_760_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_atomicFn(lean_object* v_p_766_, lean_object* v_c_767_, lean_object* v_s_768_){
_start:
{
lean_object* v_pos_769_; lean_object* v___x_770_; lean_object* v_errorMsg_771_; 
v_pos_769_ = lean_ctor_get(v_s_768_, 2);
lean_inc(v_pos_769_);
v___x_770_ = lean_apply_2(v_p_766_, v_c_767_, v_s_768_);
v_errorMsg_771_ = lean_ctor_get(v___x_770_, 4);
lean_inc(v_errorMsg_771_);
if (lean_obj_tag(v_errorMsg_771_) == 1)
{
lean_object* v_stxStack_772_; lean_object* v_lhsPrec_773_; lean_object* v_cache_774_; lean_object* v_recoveredErrors_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
v_stxStack_772_ = lean_ctor_get(v___x_770_, 0);
v_lhsPrec_773_ = lean_ctor_get(v___x_770_, 1);
v_cache_774_ = lean_ctor_get(v___x_770_, 3);
v_recoveredErrors_775_ = lean_ctor_get(v___x_770_, 5);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_782_ == 0)
{
lean_object* v_unused_783_; lean_object* v_unused_784_; 
v_unused_783_ = lean_ctor_get(v___x_770_, 4);
lean_dec(v_unused_783_);
v_unused_784_ = lean_ctor_get(v___x_770_, 2);
lean_dec(v_unused_784_);
v___x_777_ = v___x_770_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_recoveredErrors_775_);
lean_inc(v_cache_774_);
lean_inc(v_lhsPrec_773_);
lean_inc(v_stxStack_772_);
lean_dec(v___x_770_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 2, v_pos_769_);
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_stxStack_772_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v_lhsPrec_773_);
lean_ctor_set(v_reuseFailAlloc_781_, 2, v_pos_769_);
lean_ctor_set(v_reuseFailAlloc_781_, 3, v_cache_774_);
lean_ctor_set(v_reuseFailAlloc_781_, 4, v_errorMsg_771_);
lean_ctor_set(v_reuseFailAlloc_781_, 5, v_recoveredErrors_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
else
{
lean_dec(v_errorMsg_771_);
lean_dec(v_pos_769_);
return v___x_770_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_atomic(lean_object* v_p_785_){
_start:
{
lean_object* v_info_786_; lean_object* v_fn_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_795_; 
v_info_786_ = lean_ctor_get(v_p_785_, 0);
v_fn_787_ = lean_ctor_get(v_p_785_, 1);
v_isSharedCheck_795_ = !lean_is_exclusive(v_p_785_);
if (v_isSharedCheck_795_ == 0)
{
v___x_789_ = v_p_785_;
v_isShared_790_ = v_isSharedCheck_795_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_fn_787_);
lean_inc(v_info_786_);
lean_dec(v_p_785_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_795_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_791_; lean_object* v___x_793_; 
v___x_791_ = lean_alloc_closure((void*)(l_Lean_Parser_atomicFn), 3, 1);
lean_closure_set(v___x_791_, 0, v_fn_787_);
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 1, v___x_791_);
v___x_793_ = v___x_789_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_info_786_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v___x_791_);
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
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1(){
_start:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_803_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__1));
v___x_804_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__2));
v___x_805_ = l_Lean_addBuiltinDocString(v___x_803_, v___x_804_);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___boxed(lean_object* v_a_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1();
return v_res_807_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqRecoveryContext_beq(lean_object* v_x_808_, lean_object* v_x_809_){
_start:
{
lean_object* v_initialPos_810_; lean_object* v_initialSize_811_; lean_object* v_initialPos_812_; lean_object* v_initialSize_813_; uint8_t v_decide_814_; 
v_initialPos_810_ = lean_ctor_get(v_x_808_, 0);
v_initialSize_811_ = lean_ctor_get(v_x_808_, 1);
v_initialPos_812_ = lean_ctor_get(v_x_809_, 0);
v_initialSize_813_ = lean_ctor_get(v_x_809_, 1);
v_decide_814_ = lean_nat_dec_eq(v_initialPos_810_, v_initialPos_812_);
if (v_decide_814_ == 0)
{
return v_decide_814_;
}
else
{
uint8_t v___x_815_; 
v___x_815_ = lean_nat_dec_eq(v_initialSize_811_, v_initialSize_813_);
return v___x_815_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqRecoveryContext_beq___boxed(lean_object* v_x_816_, lean_object* v_x_817_){
_start:
{
uint8_t v_res_818_; lean_object* v_r_819_; 
v_res_818_ = l_Lean_Parser_instBEqRecoveryContext_beq(v_x_816_, v_x_817_);
lean_dec_ref(v_x_817_);
lean_dec_ref(v_x_816_);
v_r_819_ = lean_box(v_res_818_);
return v_r_819_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instDecidableEqRecoveryContext_decEq(lean_object* v_x_822_, lean_object* v_x_823_){
_start:
{
lean_object* v_initialPos_824_; lean_object* v_initialSize_825_; lean_object* v_initialPos_826_; lean_object* v_initialSize_827_; uint8_t v_decide_828_; 
v_initialPos_824_ = lean_ctor_get(v_x_822_, 0);
v_initialSize_825_ = lean_ctor_get(v_x_822_, 1);
v_initialPos_826_ = lean_ctor_get(v_x_823_, 0);
v_initialSize_827_ = lean_ctor_get(v_x_823_, 1);
v_decide_828_ = lean_nat_dec_eq(v_initialPos_824_, v_initialPos_826_);
if (v_decide_828_ == 0)
{
return v_decide_828_;
}
else
{
uint8_t v___x_829_; 
v___x_829_ = lean_nat_dec_eq(v_initialSize_825_, v_initialSize_827_);
return v___x_829_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instDecidableEqRecoveryContext_decEq___boxed(lean_object* v_x_830_, lean_object* v_x_831_){
_start:
{
uint8_t v_res_832_; lean_object* v_r_833_; 
v_res_832_ = l_Lean_Parser_instDecidableEqRecoveryContext_decEq(v_x_830_, v_x_831_);
lean_dec_ref(v_x_831_);
lean_dec_ref(v_x_830_);
v_r_833_ = lean_box(v_res_832_);
return v_r_833_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instDecidableEqRecoveryContext(lean_object* v_x_834_, lean_object* v_x_835_){
_start:
{
uint8_t v___x_836_; 
v___x_836_ = l_Lean_Parser_instDecidableEqRecoveryContext_decEq(v_x_834_, v_x_835_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instDecidableEqRecoveryContext___boxed(lean_object* v_x_837_, lean_object* v_x_838_){
_start:
{
uint8_t v_res_839_; lean_object* v_r_840_; 
v_res_839_ = l_Lean_Parser_instDecidableEqRecoveryContext(v_x_837_, v_x_838_);
lean_dec_ref(v_x_838_);
lean_dec_ref(v_x_837_);
v_r_840_ = lean_box(v_res_839_);
return v_r_840_;
}
}
static lean_object* _init_l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = lean_unsigned_to_nat(14u);
v___x_855_ = lean_nat_to_int(v___x_854_);
return v___x_855_;
}
}
static lean_object* _init_l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_868_ = lean_unsigned_to_nat(15u);
v___x_869_ = lean_nat_to_int(v___x_868_);
return v___x_869_;
}
}
static lean_object* _init_l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_870_ = ((lean_object*)(l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__0));
v___x_871_ = lean_string_length(v___x_870_);
return v___x_871_;
}
}
static lean_object* _init_l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_872_ = lean_obj_once(&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__17, &l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__17_once, _init_l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__17);
v___x_873_ = lean_nat_to_int(v___x_872_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg(lean_object* v_x_876_){
_start:
{
lean_object* v_initialPos_877_; lean_object* v_initialSize_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_916_; 
v_initialPos_877_ = lean_ctor_get(v_x_876_, 0);
v_initialSize_878_ = lean_ctor_get(v_x_876_, 1);
v_isSharedCheck_916_ = !lean_is_exclusive(v_x_876_);
if (v_isSharedCheck_916_ == 0)
{
v___x_880_ = v_x_876_;
v_isShared_881_ = v_isSharedCheck_916_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_initialSize_878_);
lean_inc(v_initialPos_877_);
lean_dec(v_x_876_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_916_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_889_; 
v___x_882_ = ((lean_object*)(l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__5));
v___x_883_ = ((lean_object*)(l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__6));
v___x_884_ = lean_obj_once(&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__7, &l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__7_once, _init_l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__7);
v___x_885_ = ((lean_object*)(l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__9));
v___x_886_ = l_Nat_reprFast(v_initialPos_877_);
v___x_887_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_887_, 0, v___x_886_);
if (v_isShared_881_ == 0)
{
lean_ctor_set_tag(v___x_880_, 5);
lean_ctor_set(v___x_880_, 1, v___x_887_);
lean_ctor_set(v___x_880_, 0, v___x_885_);
v___x_889_ = v___x_880_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_915_, 1, v___x_887_);
v___x_889_ = v_reuseFailAlloc_915_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; uint8_t v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_890_ = ((lean_object*)(l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__11));
v___x_891_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_891_, 0, v___x_889_);
lean_ctor_set(v___x_891_, 1, v___x_890_);
v___x_892_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_892_, 0, v___x_884_);
lean_ctor_set(v___x_892_, 1, v___x_891_);
v___x_893_ = 0;
v___x_894_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_894_, 0, v___x_892_);
lean_ctor_set_uint8(v___x_894_, sizeof(void*)*1, v___x_893_);
v___x_895_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_895_, 0, v___x_883_);
lean_ctor_set(v___x_895_, 1, v___x_894_);
v___x_896_ = ((lean_object*)(l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__13));
v___x_897_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_897_, 0, v___x_895_);
lean_ctor_set(v___x_897_, 1, v___x_896_);
v___x_898_ = lean_box(1);
v___x_899_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_897_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
v___x_900_ = ((lean_object*)(l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__15));
v___x_901_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_899_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
v___x_902_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_901_);
lean_ctor_set(v___x_902_, 1, v___x_882_);
v___x_903_ = lean_obj_once(&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__16, &l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__16_once, _init_l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__16);
v___x_904_ = l_Nat_reprFast(v_initialSize_878_);
v___x_905_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
v___x_906_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_906_, 0, v___x_903_);
lean_ctor_set(v___x_906_, 1, v___x_905_);
v___x_907_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_907_, 0, v___x_906_);
lean_ctor_set_uint8(v___x_907_, sizeof(void*)*1, v___x_893_);
v___x_908_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_908_, 0, v___x_902_);
lean_ctor_set(v___x_908_, 1, v___x_907_);
v___x_909_ = lean_obj_once(&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__18, &l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__18_once, _init_l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__18);
v___x_910_ = ((lean_object*)(l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__19));
v___x_911_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
lean_ctor_set(v___x_911_, 1, v___x_908_);
v___x_912_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_912_, 0, v___x_911_);
lean_ctor_set(v___x_912_, 1, v___x_890_);
v___x_913_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_909_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
v___x_914_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_914_, 0, v___x_913_);
lean_ctor_set_uint8(v___x_914_, sizeof(void*)*1, v___x_893_);
return v___x_914_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instReprRecoveryContext_repr(lean_object* v_x_917_, lean_object* v_prec_918_){
_start:
{
lean_object* v___x_919_; 
v___x_919_ = l_Lean_Parser_instReprRecoveryContext_repr___redArg(v_x_917_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instReprRecoveryContext_repr___boxed(lean_object* v_x_920_, lean_object* v_prec_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_Lean_Parser_instReprRecoveryContext_repr(v_x_920_, v_prec_921_);
lean_dec(v_prec_921_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_recoverFn(lean_object* v_p_925_, lean_object* v_recover_926_, lean_object* v_c_927_, lean_object* v_s_928_){
_start:
{
lean_object* v_stxStack_929_; lean_object* v_pos_930_; lean_object* v_s_931_; lean_object* v_errorMsg_932_; 
v_stxStack_929_ = lean_ctor_get(v_s_928_, 0);
lean_inc_ref(v_stxStack_929_);
v_pos_930_ = lean_ctor_get(v_s_928_, 2);
lean_inc(v_pos_930_);
lean_inc_ref(v_c_927_);
v_s_931_ = lean_apply_2(v_p_925_, v_c_927_, v_s_928_);
v_errorMsg_932_ = lean_ctor_get(v_s_931_, 4);
lean_inc(v_errorMsg_932_);
if (lean_obj_tag(v_errorMsg_932_) == 1)
{
lean_object* v_stxStack_933_; lean_object* v_lhsPrec_934_; lean_object* v_pos_935_; lean_object* v_cache_936_; lean_object* v_recoveredErrors_937_; lean_object* v_val_938_; lean_object* v_iniSz_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v_s_x27_943_; lean_object* v_stxStack_944_; lean_object* v_pos_945_; lean_object* v_errorMsg_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_957_; 
v_stxStack_933_ = lean_ctor_get(v_s_931_, 0);
lean_inc_ref(v_stxStack_933_);
v_lhsPrec_934_ = lean_ctor_get(v_s_931_, 1);
lean_inc_n(v_lhsPrec_934_, 2);
v_pos_935_ = lean_ctor_get(v_s_931_, 2);
lean_inc(v_pos_935_);
v_cache_936_ = lean_ctor_get(v_s_931_, 3);
lean_inc_ref_n(v_cache_936_, 2);
v_recoveredErrors_937_ = lean_ctor_get(v_s_931_, 5);
lean_inc_ref_n(v_recoveredErrors_937_, 2);
v_val_938_ = lean_ctor_get(v_errorMsg_932_, 0);
lean_inc(v_val_938_);
lean_dec_ref_known(v_errorMsg_932_, 1);
v_iniSz_939_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_929_);
lean_dec_ref(v_stxStack_929_);
v___x_940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_940_, 0, v_pos_930_);
lean_ctor_set(v___x_940_, 1, v_iniSz_939_);
v___x_941_ = lean_box(0);
v___x_942_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_942_, 0, v_stxStack_933_);
lean_ctor_set(v___x_942_, 1, v_lhsPrec_934_);
lean_ctor_set(v___x_942_, 2, v_pos_935_);
lean_ctor_set(v___x_942_, 3, v_cache_936_);
lean_ctor_set(v___x_942_, 4, v___x_941_);
lean_ctor_set(v___x_942_, 5, v_recoveredErrors_937_);
v_s_x27_943_ = lean_apply_3(v_recover_926_, v___x_940_, v_c_927_, v___x_942_);
v_stxStack_944_ = lean_ctor_get(v_s_x27_943_, 0);
v_pos_945_ = lean_ctor_get(v_s_x27_943_, 2);
v_errorMsg_946_ = lean_ctor_get(v_s_x27_943_, 4);
v_isSharedCheck_957_ = !lean_is_exclusive(v_s_x27_943_);
if (v_isSharedCheck_957_ == 0)
{
lean_object* v_unused_958_; lean_object* v_unused_959_; lean_object* v_unused_960_; 
v_unused_958_ = lean_ctor_get(v_s_x27_943_, 5);
lean_dec(v_unused_958_);
v_unused_959_ = lean_ctor_get(v_s_x27_943_, 3);
lean_dec(v_unused_959_);
v_unused_960_ = lean_ctor_get(v_s_x27_943_, 1);
lean_dec(v_unused_960_);
v___x_948_ = v_s_x27_943_;
v_isShared_949_ = v_isSharedCheck_957_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_errorMsg_946_);
lean_inc(v_pos_945_);
lean_inc(v_stxStack_944_);
lean_dec(v_s_x27_943_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_957_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
uint8_t v___x_950_; 
v___x_950_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_946_, v___x_941_);
lean_dec(v_errorMsg_946_);
if (v___x_950_ == 0)
{
lean_del_object(v___x_948_);
lean_dec(v_pos_945_);
lean_dec_ref(v_stxStack_944_);
lean_dec(v_val_938_);
lean_dec_ref(v_recoveredErrors_937_);
lean_dec_ref(v_cache_936_);
lean_dec(v_lhsPrec_934_);
return v_s_931_;
}
else
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_955_; 
lean_dec_ref(v_s_931_);
lean_inc_ref(v_stxStack_944_);
v___x_951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_951_, 0, v_stxStack_944_);
lean_ctor_set(v___x_951_, 1, v_val_938_);
lean_inc(v_pos_945_);
v___x_952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_952_, 0, v_pos_945_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
v___x_953_ = lean_array_push(v_recoveredErrors_937_, v___x_952_);
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 5, v___x_953_);
lean_ctor_set(v___x_948_, 4, v___x_941_);
lean_ctor_set(v___x_948_, 3, v_cache_936_);
lean_ctor_set(v___x_948_, 1, v_lhsPrec_934_);
v___x_955_ = v___x_948_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_stxStack_944_);
lean_ctor_set(v_reuseFailAlloc_956_, 1, v_lhsPrec_934_);
lean_ctor_set(v_reuseFailAlloc_956_, 2, v_pos_945_);
lean_ctor_set(v_reuseFailAlloc_956_, 3, v_cache_936_);
lean_ctor_set(v_reuseFailAlloc_956_, 4, v___x_941_);
lean_ctor_set(v_reuseFailAlloc_956_, 5, v___x_953_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
}
else
{
lean_dec(v_errorMsg_932_);
lean_dec(v_pos_930_);
lean_dec_ref(v_stxStack_929_);
lean_dec_ref(v_c_927_);
lean_dec_ref(v_recover_926_);
return v_s_931_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_recover_x27___lam__0(lean_object* v_handler_961_, lean_object* v_s_962_, lean_object* v___y_963_, lean_object* v___y_964_){
_start:
{
lean_object* v___x_965_; lean_object* v_fn_966_; lean_object* v___x_967_; 
v___x_965_ = lean_apply_1(v_handler_961_, v_s_962_);
v_fn_966_ = lean_ctor_get(v___x_965_, 1);
lean_inc_ref(v_fn_966_);
lean_dec_ref(v___x_965_);
v___x_967_ = lean_apply_2(v_fn_966_, v___y_963_, v___y_964_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_recover_x27(lean_object* v_parser_968_, lean_object* v_handler_969_){
_start:
{
lean_object* v_info_970_; lean_object* v_fn_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_980_; 
v_info_970_ = lean_ctor_get(v_parser_968_, 0);
v_fn_971_ = lean_ctor_get(v_parser_968_, 1);
v_isSharedCheck_980_ = !lean_is_exclusive(v_parser_968_);
if (v_isSharedCheck_980_ == 0)
{
v___x_973_ = v_parser_968_;
v_isShared_974_ = v_isSharedCheck_980_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_fn_971_);
lean_inc(v_info_970_);
lean_dec(v_parser_968_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_980_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___f_975_; lean_object* v___x_976_; lean_object* v___x_978_; 
v___f_975_ = lean_alloc_closure((void*)(l_Lean_Parser_recover_x27___lam__0), 4, 1);
lean_closure_set(v___f_975_, 0, v_handler_969_);
v___x_976_ = lean_alloc_closure((void*)(l_Lean_Parser_recoverFn), 4, 2);
lean_closure_set(v___x_976_, 0, v_fn_971_);
lean_closure_set(v___x_976_, 1, v___f_975_);
if (v_isShared_974_ == 0)
{
lean_ctor_set(v___x_973_, 1, v___x_976_);
v___x_978_ = v___x_973_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_info_970_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v___x_976_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1(){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_988_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__1));
v___x_989_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__2));
v___x_990_ = l_Lean_addBuiltinDocString(v___x_988_, v___x_989_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___boxed(lean_object* v_a_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1();
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_recover___lam__0(lean_object* v_handler_993_, lean_object* v_x_994_){
_start:
{
lean_inc_ref(v_handler_993_);
return v_handler_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_recover___lam__0___boxed(lean_object* v_handler_995_, lean_object* v_x_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l_Lean_Parser_recover___lam__0(v_handler_995_, v_x_996_);
lean_dec_ref(v_x_996_);
lean_dec_ref(v_handler_995_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_recover(lean_object* v_parser_998_, lean_object* v_handler_999_){
_start:
{
lean_object* v___f_1000_; lean_object* v___x_1001_; 
v___f_1000_ = lean_alloc_closure((void*)(l_Lean_Parser_recover___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1000_, 0, v_handler_999_);
v___x_1001_ = l_Lean_Parser_recover_x27(v_parser_998_, v___f_1000_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1(){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1009_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__1));
v___x_1010_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__2));
v___x_1011_ = l_Lean_addBuiltinDocString(v___x_1009_, v___x_1010_);
return v___x_1011_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___boxed(lean_object* v_a_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1();
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optionalFn(lean_object* v_p_1017_, lean_object* v_c_1018_, lean_object* v_s_1019_){
_start:
{
lean_object* v_pos_1020_; lean_object* v_iniSz_1021_; lean_object* v___y_1023_; lean_object* v_s_1026_; lean_object* v_pos_1027_; lean_object* v_errorMsg_1028_; lean_object* v___x_1029_; uint8_t v___x_1030_; 
v_pos_1020_ = lean_ctor_get(v_s_1019_, 2);
lean_inc(v_pos_1020_);
v_iniSz_1021_ = l_Lean_Parser_ParserState_stackSize(v_s_1019_);
v_s_1026_ = lean_apply_2(v_p_1017_, v_c_1018_, v_s_1019_);
v_pos_1027_ = lean_ctor_get(v_s_1026_, 2);
lean_inc(v_pos_1027_);
v_errorMsg_1028_ = lean_ctor_get(v_s_1026_, 4);
lean_inc(v_errorMsg_1028_);
v___x_1029_ = lean_box(0);
v___x_1030_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1028_, v___x_1029_);
lean_dec(v_errorMsg_1028_);
if (v___x_1030_ == 0)
{
uint8_t v_decide_1031_; 
v_decide_1031_ = lean_nat_dec_eq(v_pos_1027_, v_pos_1020_);
lean_dec(v_pos_1027_);
if (v_decide_1031_ == 0)
{
lean_dec(v_pos_1020_);
v___y_1023_ = v_s_1026_;
goto v___jp_1022_;
}
else
{
lean_object* v___x_1032_; 
v___x_1032_ = l_Lean_Parser_ParserState_restore(v_s_1026_, v_iniSz_1021_, v_pos_1020_);
v___y_1023_ = v___x_1032_;
goto v___jp_1022_;
}
}
else
{
lean_dec(v_pos_1027_);
lean_dec(v_pos_1020_);
v___y_1023_ = v_s_1026_;
goto v___jp_1022_;
}
v___jp_1022_:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__1));
v___x_1025_ = l_Lean_Parser_ParserState_mkNode(v___y_1023_, v___x_1024_, v_iniSz_1021_);
lean_dec(v_iniSz_1021_);
return v___x_1025_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optionalInfo(lean_object* v_p_1033_){
_start:
{
lean_object* v_collectTokens_1034_; lean_object* v_collectKinds_1035_; lean_object* v_firstTokens_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1044_; 
v_collectTokens_1034_ = lean_ctor_get(v_p_1033_, 0);
v_collectKinds_1035_ = lean_ctor_get(v_p_1033_, 1);
v_firstTokens_1036_ = lean_ctor_get(v_p_1033_, 2);
v_isSharedCheck_1044_ = !lean_is_exclusive(v_p_1033_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1038_ = v_p_1033_;
v_isShared_1039_ = v_isSharedCheck_1044_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_firstTokens_1036_);
lean_inc(v_collectKinds_1035_);
lean_inc(v_collectTokens_1034_);
lean_dec(v_p_1033_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1044_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1040_; lean_object* v___x_1042_; 
v___x_1040_ = l_Lean_Parser_FirstTokens_toOptional(v_firstTokens_1036_);
if (v_isShared_1039_ == 0)
{
lean_ctor_set(v___x_1038_, 2, v___x_1040_);
v___x_1042_ = v___x_1038_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_collectTokens_1034_);
lean_ctor_set(v_reuseFailAlloc_1043_, 1, v_collectKinds_1035_);
lean_ctor_set(v_reuseFailAlloc_1043_, 2, v___x_1040_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optionalNoAntiquot(lean_object* v_p_1045_){
_start:
{
lean_object* v_info_1046_; lean_object* v_fn_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1056_; 
v_info_1046_ = lean_ctor_get(v_p_1045_, 0);
v_fn_1047_ = lean_ctor_get(v_p_1045_, 1);
v_isSharedCheck_1056_ = !lean_is_exclusive(v_p_1045_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1049_ = v_p_1045_;
v_isShared_1050_ = v_isSharedCheck_1056_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_fn_1047_);
lean_inc(v_info_1046_);
lean_dec(v_p_1045_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1056_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1054_; 
v___x_1051_ = l_Lean_Parser_optionalInfo(v_info_1046_);
v___x_1052_ = lean_alloc_closure((void*)(l_Lean_Parser_optionalFn), 3, 1);
lean_closure_set(v___x_1052_, 0, v_fn_1047_);
if (v_isShared_1050_ == 0)
{
lean_ctor_set(v___x_1049_, 1, v___x_1052_);
lean_ctor_set(v___x_1049_, 0, v___x_1051_);
v___x_1054_ = v___x_1049_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v___x_1051_);
lean_ctor_set(v_reuseFailAlloc_1055_, 1, v___x_1052_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_lookaheadFn(lean_object* v_p_1057_, lean_object* v_c_1058_, lean_object* v_s_1059_){
_start:
{
lean_object* v_pos_1060_; lean_object* v_iniSz_1061_; lean_object* v_s_1062_; lean_object* v_errorMsg_1063_; lean_object* v___x_1064_; uint8_t v___x_1065_; 
v_pos_1060_ = lean_ctor_get(v_s_1059_, 2);
lean_inc(v_pos_1060_);
v_iniSz_1061_ = l_Lean_Parser_ParserState_stackSize(v_s_1059_);
v_s_1062_ = lean_apply_2(v_p_1057_, v_c_1058_, v_s_1059_);
v_errorMsg_1063_ = lean_ctor_get(v_s_1062_, 4);
lean_inc(v_errorMsg_1063_);
v___x_1064_ = lean_box(0);
v___x_1065_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1063_, v___x_1064_);
lean_dec(v_errorMsg_1063_);
if (v___x_1065_ == 0)
{
lean_dec(v_iniSz_1061_);
lean_dec(v_pos_1060_);
return v_s_1062_;
}
else
{
lean_object* v___x_1066_; 
v___x_1066_ = l_Lean_Parser_ParserState_restore(v_s_1062_, v_iniSz_1061_, v_pos_1060_);
lean_dec(v_iniSz_1061_);
return v___x_1066_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_lookahead(lean_object* v_p_1067_){
_start:
{
lean_object* v_info_1068_; lean_object* v_fn_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1077_; 
v_info_1068_ = lean_ctor_get(v_p_1067_, 0);
v_fn_1069_ = lean_ctor_get(v_p_1067_, 1);
v_isSharedCheck_1077_ = !lean_is_exclusive(v_p_1067_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_1071_ = v_p_1067_;
v_isShared_1072_ = v_isSharedCheck_1077_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_fn_1069_);
lean_inc(v_info_1068_);
lean_dec(v_p_1067_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1077_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1073_; lean_object* v___x_1075_; 
v___x_1073_ = lean_alloc_closure((void*)(l_Lean_Parser_lookaheadFn), 3, 1);
lean_closure_set(v___x_1073_, 0, v_fn_1069_);
if (v_isShared_1072_ == 0)
{
lean_ctor_set(v___x_1071_, 1, v___x_1073_);
v___x_1075_ = v___x_1071_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v_info_1068_);
lean_ctor_set(v_reuseFailAlloc_1076_, 1, v___x_1073_);
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
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1(){
_start:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1085_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__1));
v___x_1086_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__2));
v___x_1087_ = l_Lean_addBuiltinDocString(v___x_1085_, v___x_1086_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___boxed(lean_object* v_a_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1();
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notFollowedByFn(lean_object* v_p_1091_, lean_object* v_msg_1092_, lean_object* v_c_1093_, lean_object* v_s_1094_){
_start:
{
lean_object* v_pos_1095_; lean_object* v_iniSz_1096_; lean_object* v_s_1097_; lean_object* v_errorMsg_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; 
v_pos_1095_ = lean_ctor_get(v_s_1094_, 2);
lean_inc(v_pos_1095_);
v_iniSz_1096_ = l_Lean_Parser_ParserState_stackSize(v_s_1094_);
v_s_1097_ = lean_apply_2(v_p_1091_, v_c_1093_, v_s_1094_);
v_errorMsg_1098_ = lean_ctor_get(v_s_1097_, 4);
lean_inc(v_errorMsg_1098_);
v___x_1099_ = lean_box(0);
v___x_1100_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1098_, v___x_1099_);
lean_dec(v_errorMsg_1098_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; 
v___x_1101_ = l_Lean_Parser_ParserState_restore(v_s_1097_, v_iniSz_1096_, v_pos_1095_);
lean_dec(v_iniSz_1096_);
return v___x_1101_;
}
else
{
lean_object* v_s_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; 
v_s_1102_ = l_Lean_Parser_ParserState_restore(v_s_1097_, v_iniSz_1096_, v_pos_1095_);
lean_dec(v_iniSz_1096_);
v___x_1103_ = ((lean_object*)(l_Lean_Parser_notFollowedByFn___closed__0));
v___x_1104_ = lean_string_append(v___x_1103_, v_msg_1092_);
v___x_1105_ = lean_box(0);
v___x_1106_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1102_, v___x_1104_, v___x_1105_, v___x_1100_);
return v___x_1106_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notFollowedByFn___boxed(lean_object* v_p_1107_, lean_object* v_msg_1108_, lean_object* v_c_1109_, lean_object* v_s_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l_Lean_Parser_notFollowedByFn(v_p_1107_, v_msg_1108_, v_c_1109_, v_s_1110_);
lean_dec_ref(v_msg_1108_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notFollowedBy(lean_object* v_p_1112_, lean_object* v_msg_1113_){
_start:
{
lean_object* v_fn_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1123_; 
v_fn_1114_ = lean_ctor_get(v_p_1112_, 1);
v_isSharedCheck_1123_ = !lean_is_exclusive(v_p_1112_);
if (v_isSharedCheck_1123_ == 0)
{
lean_object* v_unused_1124_; 
v_unused_1124_ = lean_ctor_get(v_p_1112_, 0);
lean_dec(v_unused_1124_);
v___x_1116_ = v_p_1112_;
v_isShared_1117_ = v_isSharedCheck_1123_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_fn_1114_);
lean_dec(v_p_1112_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1123_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1121_; 
v___x_1118_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_1119_ = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByFn___boxed), 4, 2);
lean_closure_set(v___x_1119_, 0, v_fn_1114_);
lean_closure_set(v___x_1119_, 1, v_msg_1113_);
if (v_isShared_1117_ == 0)
{
lean_ctor_set(v___x_1116_, 1, v___x_1119_);
lean_ctor_set(v___x_1116_, 0, v___x_1118_);
v___x_1121_ = v___x_1116_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v___x_1118_);
lean_ctor_set(v_reuseFailAlloc_1122_, 1, v___x_1119_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1(){
_start:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1132_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__1));
v___x_1133_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__2));
v___x_1134_ = l_Lean_addBuiltinDocString(v___x_1132_, v___x_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___boxed(lean_object* v_a_1135_){
_start:
{
lean_object* v_res_1136_; 
v_res_1136_ = l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1();
return v_res_1136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyAux(lean_object* v_p_1138_, lean_object* v_c_1139_, lean_object* v_s_1140_){
_start:
{
lean_object* v_pos_1141_; lean_object* v_iniSz_1142_; lean_object* v_s_1143_; lean_object* v_pos_1144_; lean_object* v_errorMsg_1145_; lean_object* v___x_1146_; uint8_t v___x_1147_; 
v_pos_1141_ = lean_ctor_get(v_s_1140_, 2);
lean_inc(v_pos_1141_);
v_iniSz_1142_ = l_Lean_Parser_ParserState_stackSize(v_s_1140_);
lean_inc_ref(v_p_1138_);
lean_inc_ref(v_c_1139_);
v_s_1143_ = lean_apply_2(v_p_1138_, v_c_1139_, v_s_1140_);
v_pos_1144_ = lean_ctor_get(v_s_1143_, 2);
lean_inc(v_pos_1144_);
v_errorMsg_1145_ = lean_ctor_get(v_s_1143_, 4);
lean_inc(v_errorMsg_1145_);
v___x_1146_ = lean_box(0);
v___x_1147_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1145_, v___x_1146_);
lean_dec(v_errorMsg_1145_);
if (v___x_1147_ == 0)
{
uint8_t v_decide_1148_; 
lean_dec_ref(v_c_1139_);
lean_dec_ref(v_p_1138_);
v_decide_1148_ = lean_nat_dec_eq(v_pos_1141_, v_pos_1144_);
lean_dec(v_pos_1144_);
if (v_decide_1148_ == 0)
{
lean_dec(v_iniSz_1142_);
lean_dec(v_pos_1141_);
return v_s_1143_;
}
else
{
lean_object* v___x_1149_; 
v___x_1149_ = l_Lean_Parser_ParserState_restore(v_s_1143_, v_iniSz_1142_, v_pos_1141_);
lean_dec(v_iniSz_1142_);
return v___x_1149_;
}
}
else
{
uint8_t v_decide_1150_; 
v_decide_1150_ = lean_nat_dec_eq(v_pos_1141_, v_pos_1144_);
lean_dec(v_pos_1144_);
lean_dec(v_pos_1141_);
if (v_decide_1150_ == 0)
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; uint8_t v___x_1154_; 
v___x_1151_ = lean_unsigned_to_nat(1u);
v___x_1152_ = lean_nat_add(v_iniSz_1142_, v___x_1151_);
v___x_1153_ = l_Lean_Parser_ParserState_stackSize(v_s_1143_);
v___x_1154_ = lean_nat_dec_lt(v___x_1152_, v___x_1153_);
lean_dec(v___x_1153_);
lean_dec(v___x_1152_);
if (v___x_1154_ == 0)
{
lean_dec(v_iniSz_1142_);
v_s_1140_ = v_s_1143_;
goto _start;
}
else
{
lean_object* v___x_1156_; lean_object* v_s_1157_; 
v___x_1156_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__1));
v_s_1157_ = l_Lean_Parser_ParserState_mkNode(v_s_1143_, v___x_1156_, v_iniSz_1142_);
lean_dec(v_iniSz_1142_);
v_s_1140_ = v_s_1157_;
goto _start;
}
}
else
{
lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
lean_dec(v_iniSz_1142_);
lean_dec_ref(v_c_1139_);
lean_dec_ref(v_p_1138_);
v___x_1159_ = ((lean_object*)(l_Lean_Parser_manyAux___closed__0));
v___x_1160_ = lean_box(0);
v___x_1161_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1143_, v___x_1159_, v___x_1160_, v___x_1147_);
return v___x_1161_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyFn(lean_object* v_p_1162_, lean_object* v_c_1163_, lean_object* v_s_1164_){
_start:
{
lean_object* v_iniSz_1165_; lean_object* v_s_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
v_iniSz_1165_ = l_Lean_Parser_ParserState_stackSize(v_s_1164_);
v_s_1166_ = l_Lean_Parser_manyAux(v_p_1162_, v_c_1163_, v_s_1164_);
v___x_1167_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__1));
v___x_1168_ = l_Lean_Parser_ParserState_mkNode(v_s_1166_, v___x_1167_, v_iniSz_1165_);
lean_dec(v_iniSz_1165_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyNoAntiquot(lean_object* v_p_1169_){
_start:
{
lean_object* v_info_1170_; lean_object* v_fn_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1180_; 
v_info_1170_ = lean_ctor_get(v_p_1169_, 0);
v_fn_1171_ = lean_ctor_get(v_p_1169_, 1);
v_isSharedCheck_1180_ = !lean_is_exclusive(v_p_1169_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1173_ = v_p_1169_;
v_isShared_1174_ = v_isSharedCheck_1180_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_fn_1171_);
lean_inc(v_info_1170_);
lean_dec(v_p_1169_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1180_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1178_; 
v___x_1175_ = l_Lean_Parser_noFirstTokenInfo(v_info_1170_);
v___x_1176_ = lean_alloc_closure((void*)(l_Lean_Parser_manyFn), 3, 1);
lean_closure_set(v___x_1176_, 0, v_fn_1171_);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 1, v___x_1176_);
lean_ctor_set(v___x_1173_, 0, v___x_1175_);
v___x_1178_ = v___x_1173_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v___x_1175_);
lean_ctor_set(v_reuseFailAlloc_1179_, 1, v___x_1176_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Fn(lean_object* v_p_1181_, lean_object* v_c_1182_, lean_object* v_s_1183_){
_start:
{
lean_object* v_iniSz_1184_; lean_object* v___x_1185_; lean_object* v_s_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
v_iniSz_1184_ = l_Lean_Parser_ParserState_stackSize(v_s_1183_);
lean_inc_ref(v_p_1181_);
v___x_1185_ = lean_alloc_closure((void*)(l_Lean_Parser_manyAux), 3, 1);
lean_closure_set(v___x_1185_, 0, v_p_1181_);
v_s_1186_ = l_Lean_Parser_andthenFn(v_p_1181_, v___x_1185_, v_c_1182_, v_s_1183_);
v___x_1187_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__1));
v___x_1188_ = l_Lean_Parser_ParserState_mkNode(v_s_1186_, v___x_1187_, v_iniSz_1184_);
lean_dec(v_iniSz_1184_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1NoAntiquot(lean_object* v_p_1189_){
_start:
{
lean_object* v_info_1190_; lean_object* v_fn_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1199_; 
v_info_1190_ = lean_ctor_get(v_p_1189_, 0);
v_fn_1191_ = lean_ctor_get(v_p_1189_, 1);
v_isSharedCheck_1199_ = !lean_is_exclusive(v_p_1189_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1193_ = v_p_1189_;
v_isShared_1194_ = v_isSharedCheck_1199_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_fn_1191_);
lean_inc(v_info_1190_);
lean_dec(v_p_1189_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1199_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1195_; lean_object* v___x_1197_; 
v___x_1195_ = lean_alloc_closure((void*)(l_Lean_Parser_many1Fn), 3, 1);
lean_closure_set(v___x_1195_, 0, v_fn_1191_);
if (v_isShared_1194_ == 0)
{
lean_ctor_set(v___x_1193_, 1, v___x_1195_);
v___x_1197_ = v___x_1193_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_info_1190_);
lean_ctor_set(v_reuseFailAlloc_1198_, 1, v___x_1195_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux_parse(lean_object* v_p_1200_, lean_object* v_sep_1201_, uint8_t v_allowTrailingSep_1202_, lean_object* v_iniSz_1203_, uint8_t v_pOpt_1204_, lean_object* v_c_1205_, lean_object* v_s_1206_){
_start:
{
lean_object* v_s_1208_; lean_object* v_pos_1209_; lean_object* v_pos_1226_; lean_object* v_sz_1227_; lean_object* v_s_1228_; lean_object* v_pos_1229_; lean_object* v_errorMsg_1230_; lean_object* v___x_1231_; uint8_t v___x_1232_; 
v_pos_1226_ = lean_ctor_get(v_s_1206_, 2);
lean_inc(v_pos_1226_);
v_sz_1227_ = l_Lean_Parser_ParserState_stackSize(v_s_1206_);
lean_inc_ref(v_p_1200_);
lean_inc_ref(v_c_1205_);
v_s_1228_ = lean_apply_2(v_p_1200_, v_c_1205_, v_s_1206_);
v_pos_1229_ = lean_ctor_get(v_s_1228_, 2);
lean_inc(v_pos_1229_);
v_errorMsg_1230_ = lean_ctor_get(v_s_1228_, 4);
lean_inc(v_errorMsg_1230_);
v___x_1231_ = lean_box(0);
v___x_1232_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1230_, v___x_1231_);
lean_dec(v_errorMsg_1230_);
if (v___x_1232_ == 0)
{
lean_object* v___x_1233_; lean_object* v___x_1234_; uint8_t v___x_1235_; 
lean_dec_ref(v_c_1205_);
lean_dec_ref(v_sep_1201_);
lean_dec_ref(v_p_1200_);
v___x_1233_ = lean_unsigned_to_nat(1u);
v___x_1234_ = lean_nat_add(v_pos_1226_, v___x_1233_);
v___x_1235_ = lean_nat_dec_le(v___x_1234_, v_pos_1229_);
lean_dec(v_pos_1229_);
lean_dec(v___x_1234_);
if (v___x_1235_ == 0)
{
if (v_pOpt_1204_ == 0)
{
lean_object* v___x_1236_; lean_object* v_s_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
lean_dec(v_sz_1227_);
lean_dec(v_pos_1226_);
v___x_1236_ = lean_box(0);
v_s_1237_ = l_Lean_Parser_ParserState_pushSyntax(v_s_1228_, v___x_1236_);
v___x_1238_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__1));
v___x_1239_ = l_Lean_Parser_ParserState_mkNode(v_s_1237_, v___x_1238_, v_iniSz_1203_);
return v___x_1239_;
}
else
{
lean_object* v_s_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v_s_1240_ = l_Lean_Parser_ParserState_restore(v_s_1228_, v_sz_1227_, v_pos_1226_);
lean_dec(v_sz_1227_);
v___x_1241_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__1));
v___x_1242_ = l_Lean_Parser_ParserState_mkNode(v_s_1240_, v___x_1241_, v_iniSz_1203_);
return v___x_1242_;
}
}
else
{
lean_object* v___x_1243_; lean_object* v___x_1244_; 
lean_dec(v_sz_1227_);
lean_dec(v_pos_1226_);
v___x_1243_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__1));
v___x_1244_ = l_Lean_Parser_ParserState_mkNode(v_s_1228_, v___x_1243_, v_iniSz_1203_);
return v___x_1244_;
}
}
else
{
lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; uint8_t v___x_1248_; 
lean_dec(v_pos_1226_);
v___x_1245_ = lean_unsigned_to_nat(1u);
v___x_1246_ = lean_nat_add(v_sz_1227_, v___x_1245_);
v___x_1247_ = l_Lean_Parser_ParserState_stackSize(v_s_1228_);
v___x_1248_ = lean_nat_dec_lt(v___x_1246_, v___x_1247_);
lean_dec(v___x_1247_);
lean_dec(v___x_1246_);
if (v___x_1248_ == 0)
{
lean_dec(v_sz_1227_);
v_s_1208_ = v_s_1228_;
v_pos_1209_ = v_pos_1229_;
goto v___jp_1207_;
}
else
{
lean_object* v___x_1249_; lean_object* v_s_1250_; lean_object* v_pos_1251_; 
lean_dec(v_pos_1229_);
v___x_1249_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__1));
v_s_1250_ = l_Lean_Parser_ParserState_mkNode(v_s_1228_, v___x_1249_, v_sz_1227_);
lean_dec(v_sz_1227_);
v_pos_1251_ = lean_ctor_get(v_s_1250_, 2);
lean_inc(v_pos_1251_);
v_s_1208_ = v_s_1250_;
v_pos_1209_ = v_pos_1251_;
goto v___jp_1207_;
}
}
v___jp_1207_:
{
lean_object* v_sz_1210_; lean_object* v_s_1211_; lean_object* v_errorMsg_1212_; lean_object* v___x_1213_; uint8_t v___x_1214_; 
v_sz_1210_ = l_Lean_Parser_ParserState_stackSize(v_s_1208_);
lean_inc_ref(v_sep_1201_);
lean_inc_ref(v_c_1205_);
v_s_1211_ = lean_apply_2(v_sep_1201_, v_c_1205_, v_s_1208_);
v_errorMsg_1212_ = lean_ctor_get(v_s_1211_, 4);
lean_inc(v_errorMsg_1212_);
v___x_1213_ = lean_box(0);
v___x_1214_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1212_, v___x_1213_);
lean_dec(v_errorMsg_1212_);
if (v___x_1214_ == 0)
{
lean_object* v_s_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
lean_dec_ref(v_c_1205_);
lean_dec_ref(v_sep_1201_);
lean_dec_ref(v_p_1200_);
v_s_1215_ = l_Lean_Parser_ParserState_restore(v_s_1211_, v_sz_1210_, v_pos_1209_);
lean_dec(v_sz_1210_);
v___x_1216_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__1));
v___x_1217_ = l_Lean_Parser_ParserState_mkNode(v_s_1215_, v___x_1216_, v_iniSz_1203_);
return v___x_1217_;
}
else
{
lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; uint8_t v___x_1221_; 
lean_dec(v_pos_1209_);
v___x_1218_ = lean_unsigned_to_nat(1u);
v___x_1219_ = lean_nat_add(v_sz_1210_, v___x_1218_);
v___x_1220_ = l_Lean_Parser_ParserState_stackSize(v_s_1211_);
v___x_1221_ = lean_nat_dec_lt(v___x_1219_, v___x_1220_);
lean_dec(v___x_1220_);
lean_dec(v___x_1219_);
if (v___x_1221_ == 0)
{
lean_dec(v_sz_1210_);
{
uint8_t _tmp_4 = v_allowTrailingSep_1202_;
lean_object* _tmp_6 = v_s_1211_;
v_pOpt_1204_ = _tmp_4;
v_s_1206_ = _tmp_6;
}
goto _start;
}
else
{
lean_object* v___x_1223_; lean_object* v_s_1224_; 
v___x_1223_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__1));
v_s_1224_ = l_Lean_Parser_ParserState_mkNode(v_s_1211_, v___x_1223_, v_sz_1210_);
lean_dec(v_sz_1210_);
{
uint8_t _tmp_4 = v_allowTrailingSep_1202_;
lean_object* _tmp_6 = v_s_1224_;
v_pOpt_1204_ = _tmp_4;
v_s_1206_ = _tmp_6;
}
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux_parse___boxed(lean_object* v_p_1252_, lean_object* v_sep_1253_, lean_object* v_allowTrailingSep_1254_, lean_object* v_iniSz_1255_, lean_object* v_pOpt_1256_, lean_object* v_c_1257_, lean_object* v_s_1258_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1259_; uint8_t v_pOpt_boxed_1260_; lean_object* v_res_1261_; 
v_allowTrailingSep_boxed_1259_ = lean_unbox(v_allowTrailingSep_1254_);
v_pOpt_boxed_1260_ = lean_unbox(v_pOpt_1256_);
v_res_1261_ = l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux_parse(v_p_1252_, v_sep_1253_, v_allowTrailingSep_boxed_1259_, v_iniSz_1255_, v_pOpt_boxed_1260_, v_c_1257_, v_s_1258_);
lean_dec(v_iniSz_1255_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux(lean_object* v_p_1262_, lean_object* v_sep_1263_, uint8_t v_allowTrailingSep_1264_, lean_object* v_iniSz_1265_, uint8_t v_pOpt_1266_, lean_object* v_c_1267_, lean_object* v_s_1268_){
_start:
{
lean_object* v___x_1269_; 
v___x_1269_ = l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux_parse(v_p_1262_, v_sep_1263_, v_allowTrailingSep_1264_, v_iniSz_1265_, v_pOpt_1266_, v_c_1267_, v_s_1268_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux___boxed(lean_object* v_p_1270_, lean_object* v_sep_1271_, lean_object* v_allowTrailingSep_1272_, lean_object* v_iniSz_1273_, lean_object* v_pOpt_1274_, lean_object* v_c_1275_, lean_object* v_s_1276_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1277_; uint8_t v_pOpt_boxed_1278_; lean_object* v_res_1279_; 
v_allowTrailingSep_boxed_1277_ = lean_unbox(v_allowTrailingSep_1272_);
v_pOpt_boxed_1278_ = lean_unbox(v_pOpt_1274_);
v_res_1279_ = l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux(v_p_1270_, v_sep_1271_, v_allowTrailingSep_boxed_1277_, v_iniSz_1273_, v_pOpt_boxed_1278_, v_c_1275_, v_s_1276_);
lean_dec(v_iniSz_1273_);
return v_res_1279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByFn(uint8_t v_allowTrailingSep_1280_, lean_object* v_p_1281_, lean_object* v_sep_1282_, lean_object* v_c_1283_, lean_object* v_s_1284_){
_start:
{
lean_object* v_iniSz_1285_; uint8_t v___x_1286_; lean_object* v___x_1287_; 
v_iniSz_1285_ = l_Lean_Parser_ParserState_stackSize(v_s_1284_);
v___x_1286_ = 1;
v___x_1287_ = l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux_parse(v_p_1281_, v_sep_1282_, v_allowTrailingSep_1280_, v_iniSz_1285_, v___x_1286_, v_c_1283_, v_s_1284_);
lean_dec(v_iniSz_1285_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByFn___boxed(lean_object* v_allowTrailingSep_1288_, lean_object* v_p_1289_, lean_object* v_sep_1290_, lean_object* v_c_1291_, lean_object* v_s_1292_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1293_; lean_object* v_res_1294_; 
v_allowTrailingSep_boxed_1293_ = lean_unbox(v_allowTrailingSep_1288_);
v_res_1294_ = l_Lean_Parser_sepByFn(v_allowTrailingSep_boxed_1293_, v_p_1289_, v_sep_1290_, v_c_1291_, v_s_1292_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Fn(uint8_t v_allowTrailingSep_1295_, lean_object* v_p_1296_, lean_object* v_sep_1297_, lean_object* v_c_1298_, lean_object* v_s_1299_){
_start:
{
lean_object* v_iniSz_1300_; uint8_t v___x_1301_; lean_object* v___x_1302_; 
v_iniSz_1300_ = l_Lean_Parser_ParserState_stackSize(v_s_1299_);
v___x_1301_ = 0;
v___x_1302_ = l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux_parse(v_p_1296_, v_sep_1297_, v_allowTrailingSep_1295_, v_iniSz_1300_, v___x_1301_, v_c_1298_, v_s_1299_);
lean_dec(v_iniSz_1300_);
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Fn___boxed(lean_object* v_allowTrailingSep_1303_, lean_object* v_p_1304_, lean_object* v_sep_1305_, lean_object* v_c_1306_, lean_object* v_s_1307_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1308_; lean_object* v_res_1309_; 
v_allowTrailingSep_boxed_1308_ = lean_unbox(v_allowTrailingSep_1303_);
v_res_1309_ = l_Lean_Parser_sepBy1Fn(v_allowTrailingSep_boxed_1308_, v_p_1304_, v_sep_1305_, v_c_1306_, v_s_1307_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByInfo(lean_object* v_p_1310_, lean_object* v_sep_1311_){
_start:
{
lean_object* v_collectTokens_1312_; lean_object* v_collectKinds_1313_; lean_object* v_collectTokens_1314_; lean_object* v_collectKinds_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1325_; 
v_collectTokens_1312_ = lean_ctor_get(v_p_1310_, 0);
lean_inc_ref(v_collectTokens_1312_);
v_collectKinds_1313_ = lean_ctor_get(v_p_1310_, 1);
lean_inc_ref(v_collectKinds_1313_);
lean_dec_ref(v_p_1310_);
v_collectTokens_1314_ = lean_ctor_get(v_sep_1311_, 0);
v_collectKinds_1315_ = lean_ctor_get(v_sep_1311_, 1);
v_isSharedCheck_1325_ = !lean_is_exclusive(v_sep_1311_);
if (v_isSharedCheck_1325_ == 0)
{
lean_object* v_unused_1326_; 
v_unused_1326_ = lean_ctor_get(v_sep_1311_, 2);
lean_dec(v_unused_1326_);
v___x_1317_ = v_sep_1311_;
v_isShared_1318_ = v_isSharedCheck_1325_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_collectKinds_1315_);
lean_inc(v_collectTokens_1314_);
lean_dec(v_sep_1311_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1325_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___f_1319_; lean_object* v___f_1320_; lean_object* v___x_1321_; lean_object* v___x_1323_; 
v___f_1319_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___lam__0), 3, 2);
lean_closure_set(v___f_1319_, 0, v_collectKinds_1315_);
lean_closure_set(v___f_1319_, 1, v_collectKinds_1313_);
v___f_1320_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___lam__1), 3, 2);
lean_closure_set(v___f_1320_, 0, v_collectTokens_1314_);
lean_closure_set(v___f_1320_, 1, v_collectTokens_1312_);
v___x_1321_ = lean_box(1);
if (v_isShared_1318_ == 0)
{
lean_ctor_set(v___x_1317_, 2, v___x_1321_);
lean_ctor_set(v___x_1317_, 1, v___f_1319_);
lean_ctor_set(v___x_1317_, 0, v___f_1320_);
v___x_1323_ = v___x_1317_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v___f_1320_);
lean_ctor_set(v_reuseFailAlloc_1324_, 1, v___f_1319_);
lean_ctor_set(v_reuseFailAlloc_1324_, 2, v___x_1321_);
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
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Info(lean_object* v_p_1327_, lean_object* v_sep_1328_){
_start:
{
lean_object* v_collectTokens_1329_; lean_object* v_collectKinds_1330_; lean_object* v_firstTokens_1331_; lean_object* v_collectTokens_1332_; lean_object* v_collectKinds_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1342_; 
v_collectTokens_1329_ = lean_ctor_get(v_p_1327_, 0);
lean_inc_ref(v_collectTokens_1329_);
v_collectKinds_1330_ = lean_ctor_get(v_p_1327_, 1);
lean_inc_ref(v_collectKinds_1330_);
v_firstTokens_1331_ = lean_ctor_get(v_p_1327_, 2);
lean_inc(v_firstTokens_1331_);
lean_dec_ref(v_p_1327_);
v_collectTokens_1332_ = lean_ctor_get(v_sep_1328_, 0);
v_collectKinds_1333_ = lean_ctor_get(v_sep_1328_, 1);
v_isSharedCheck_1342_ = !lean_is_exclusive(v_sep_1328_);
if (v_isSharedCheck_1342_ == 0)
{
lean_object* v_unused_1343_; 
v_unused_1343_ = lean_ctor_get(v_sep_1328_, 2);
lean_dec(v_unused_1343_);
v___x_1335_ = v_sep_1328_;
v_isShared_1336_ = v_isSharedCheck_1342_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_collectKinds_1333_);
lean_inc(v_collectTokens_1332_);
lean_dec(v_sep_1328_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1342_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___f_1337_; lean_object* v___f_1338_; lean_object* v___x_1340_; 
v___f_1337_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___lam__0), 3, 2);
lean_closure_set(v___f_1337_, 0, v_collectKinds_1333_);
lean_closure_set(v___f_1337_, 1, v_collectKinds_1330_);
v___f_1338_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___lam__1), 3, 2);
lean_closure_set(v___f_1338_, 0, v_collectTokens_1332_);
lean_closure_set(v___f_1338_, 1, v_collectTokens_1329_);
if (v_isShared_1336_ == 0)
{
lean_ctor_set(v___x_1335_, 2, v_firstTokens_1331_);
lean_ctor_set(v___x_1335_, 1, v___f_1337_);
lean_ctor_set(v___x_1335_, 0, v___f_1338_);
v___x_1340_ = v___x_1335_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v___f_1338_);
lean_ctor_set(v_reuseFailAlloc_1341_, 1, v___f_1337_);
lean_ctor_set(v_reuseFailAlloc_1341_, 2, v_firstTokens_1331_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByNoAntiquot(lean_object* v_p_1344_, lean_object* v_sep_1345_, uint8_t v_allowTrailingSep_1346_){
_start:
{
lean_object* v_info_1347_; lean_object* v_fn_1348_; lean_object* v_info_1349_; lean_object* v_fn_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1360_; 
v_info_1347_ = lean_ctor_get(v_p_1344_, 0);
lean_inc_ref(v_info_1347_);
v_fn_1348_ = lean_ctor_get(v_p_1344_, 1);
lean_inc_ref(v_fn_1348_);
lean_dec_ref(v_p_1344_);
v_info_1349_ = lean_ctor_get(v_sep_1345_, 0);
v_fn_1350_ = lean_ctor_get(v_sep_1345_, 1);
v_isSharedCheck_1360_ = !lean_is_exclusive(v_sep_1345_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1352_ = v_sep_1345_;
v_isShared_1353_ = v_isSharedCheck_1360_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_fn_1350_);
lean_inc(v_info_1349_);
lean_dec(v_sep_1345_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1360_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1358_; 
v___x_1354_ = l_Lean_Parser_sepByInfo(v_info_1347_, v_info_1349_);
v___x_1355_ = lean_box(v_allowTrailingSep_1346_);
v___x_1356_ = lean_alloc_closure((void*)(l_Lean_Parser_sepByFn___boxed), 5, 3);
lean_closure_set(v___x_1356_, 0, v___x_1355_);
lean_closure_set(v___x_1356_, 1, v_fn_1348_);
lean_closure_set(v___x_1356_, 2, v_fn_1350_);
if (v_isShared_1353_ == 0)
{
lean_ctor_set(v___x_1352_, 1, v___x_1356_);
lean_ctor_set(v___x_1352_, 0, v___x_1354_);
v___x_1358_ = v___x_1352_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v___x_1354_);
lean_ctor_set(v_reuseFailAlloc_1359_, 1, v___x_1356_);
v___x_1358_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
return v___x_1358_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByNoAntiquot___boxed(lean_object* v_p_1361_, lean_object* v_sep_1362_, lean_object* v_allowTrailingSep_1363_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1364_; lean_object* v_res_1365_; 
v_allowTrailingSep_boxed_1364_ = lean_unbox(v_allowTrailingSep_1363_);
v_res_1365_ = l_Lean_Parser_sepByNoAntiquot(v_p_1361_, v_sep_1362_, v_allowTrailingSep_boxed_1364_);
return v_res_1365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1NoAntiquot(lean_object* v_p_1366_, lean_object* v_sep_1367_, uint8_t v_allowTrailingSep_1368_){
_start:
{
lean_object* v_info_1369_; lean_object* v_fn_1370_; lean_object* v_info_1371_; lean_object* v_fn_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1382_; 
v_info_1369_ = lean_ctor_get(v_p_1366_, 0);
lean_inc_ref(v_info_1369_);
v_fn_1370_ = lean_ctor_get(v_p_1366_, 1);
lean_inc_ref(v_fn_1370_);
lean_dec_ref(v_p_1366_);
v_info_1371_ = lean_ctor_get(v_sep_1367_, 0);
v_fn_1372_ = lean_ctor_get(v_sep_1367_, 1);
v_isSharedCheck_1382_ = !lean_is_exclusive(v_sep_1367_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1374_ = v_sep_1367_;
v_isShared_1375_ = v_isSharedCheck_1382_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_fn_1372_);
lean_inc(v_info_1371_);
lean_dec(v_sep_1367_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1382_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1380_; 
v___x_1376_ = l_Lean_Parser_sepBy1Info(v_info_1369_, v_info_1371_);
v___x_1377_ = lean_box(v_allowTrailingSep_1368_);
v___x_1378_ = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1Fn___boxed), 5, 3);
lean_closure_set(v___x_1378_, 0, v___x_1377_);
lean_closure_set(v___x_1378_, 1, v_fn_1370_);
lean_closure_set(v___x_1378_, 2, v_fn_1372_);
if (v_isShared_1375_ == 0)
{
lean_ctor_set(v___x_1374_, 1, v___x_1378_);
lean_ctor_set(v___x_1374_, 0, v___x_1376_);
v___x_1380_ = v___x_1374_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v___x_1376_);
lean_ctor_set(v_reuseFailAlloc_1381_, 1, v___x_1378_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1NoAntiquot___boxed(lean_object* v_p_1383_, lean_object* v_sep_1384_, lean_object* v_allowTrailingSep_1385_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1386_; lean_object* v_res_1387_; 
v_allowTrailingSep_boxed_1386_ = lean_unbox(v_allowTrailingSep_1385_);
v_res_1387_ = l_Lean_Parser_sepBy1NoAntiquot(v_p_1383_, v_sep_1384_, v_allowTrailingSep_boxed_1386_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResultOfFn(lean_object* v_p_1388_, lean_object* v_f_1389_, lean_object* v_c_1390_, lean_object* v_s_1391_){
_start:
{
lean_object* v_s_1392_; lean_object* v_stxStack_1393_; lean_object* v_errorMsg_1394_; lean_object* v___x_1395_; uint8_t v___x_1396_; 
v_s_1392_ = lean_apply_2(v_p_1388_, v_c_1390_, v_s_1391_);
v_stxStack_1393_ = lean_ctor_get(v_s_1392_, 0);
lean_inc_ref(v_stxStack_1393_);
v_errorMsg_1394_ = lean_ctor_get(v_s_1392_, 4);
lean_inc(v_errorMsg_1394_);
v___x_1395_ = lean_box(0);
v___x_1396_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1394_, v___x_1395_);
lean_dec(v_errorMsg_1394_);
if (v___x_1396_ == 0)
{
lean_dec_ref(v_stxStack_1393_);
lean_dec_ref(v_f_1389_);
return v_s_1392_;
}
else
{
lean_object* v_stx_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v_stx_1397_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1393_);
lean_dec_ref(v_stxStack_1393_);
v___x_1398_ = l_Lean_Parser_ParserState_popSyntax(v_s_1392_);
v___x_1399_ = lean_apply_1(v_f_1389_, v_stx_1397_);
v___x_1400_ = l_Lean_Parser_ParserState_pushSyntax(v___x_1398_, v___x_1399_);
return v___x_1400_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResultOfInfo(lean_object* v_p_1401_){
_start:
{
lean_object* v_collectTokens_1402_; lean_object* v_collectKinds_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1411_; 
v_collectTokens_1402_ = lean_ctor_get(v_p_1401_, 0);
v_collectKinds_1403_ = lean_ctor_get(v_p_1401_, 1);
v_isSharedCheck_1411_ = !lean_is_exclusive(v_p_1401_);
if (v_isSharedCheck_1411_ == 0)
{
lean_object* v_unused_1412_; 
v_unused_1412_ = lean_ctor_get(v_p_1401_, 2);
lean_dec(v_unused_1412_);
v___x_1405_ = v_p_1401_;
v_isShared_1406_ = v_isSharedCheck_1411_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_collectKinds_1403_);
lean_inc(v_collectTokens_1402_);
lean_dec(v_p_1401_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1411_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1407_; lean_object* v___x_1409_; 
v___x_1407_ = lean_box(1);
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 2, v___x_1407_);
v___x_1409_ = v___x_1405_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_collectTokens_1402_);
lean_ctor_set(v_reuseFailAlloc_1410_, 1, v_collectKinds_1403_);
lean_ctor_set(v_reuseFailAlloc_1410_, 2, v___x_1407_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResultOf(lean_object* v_p_1413_, lean_object* v_f_1414_){
_start:
{
lean_object* v_info_1415_; lean_object* v_fn_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1425_; 
v_info_1415_ = lean_ctor_get(v_p_1413_, 0);
v_fn_1416_ = lean_ctor_get(v_p_1413_, 1);
v_isSharedCheck_1425_ = !lean_is_exclusive(v_p_1413_);
if (v_isSharedCheck_1425_ == 0)
{
v___x_1418_ = v_p_1413_;
v_isShared_1419_ = v_isSharedCheck_1425_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_fn_1416_);
lean_inc(v_info_1415_);
lean_dec(v_p_1413_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1425_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1423_; 
v___x_1420_ = l_Lean_Parser_withResultOfInfo(v_info_1415_);
v___x_1421_ = lean_alloc_closure((void*)(l_Lean_Parser_withResultOfFn), 4, 2);
lean_closure_set(v___x_1421_, 0, v_fn_1416_);
lean_closure_set(v___x_1421_, 1, v_f_1414_);
if (v_isShared_1419_ == 0)
{
lean_ctor_set(v___x_1418_, 1, v___x_1421_);
lean_ctor_set(v___x_1418_, 0, v___x_1420_);
v___x_1423_ = v___x_1418_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v___x_1420_);
lean_ctor_set(v_reuseFailAlloc_1424_, 1, v___x_1421_);
v___x_1423_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
return v___x_1423_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Unbox___lam__0(lean_object* v_stx_1426_){
_start:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; uint8_t v___x_1429_; 
v___x_1427_ = l_Lean_Syntax_getNumArgs(v_stx_1426_);
v___x_1428_ = lean_unsigned_to_nat(1u);
v___x_1429_ = lean_nat_dec_eq(v___x_1427_, v___x_1428_);
lean_dec(v___x_1427_);
if (v___x_1429_ == 0)
{
lean_inc(v_stx_1426_);
return v_stx_1426_;
}
else
{
lean_object* v___x_1430_; lean_object* v___x_1431_; 
v___x_1430_ = lean_unsigned_to_nat(0u);
v___x_1431_ = l_Lean_Syntax_getArg(v_stx_1426_, v___x_1430_);
return v___x_1431_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Unbox___lam__0___boxed(lean_object* v_stx_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l_Lean_Parser_many1Unbox___lam__0(v_stx_1432_);
lean_dec(v_stx_1432_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Unbox(lean_object* v_p_1435_){
_start:
{
lean_object* v___f_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
v___f_1436_ = ((lean_object*)(l_Lean_Parser_many1Unbox___closed__0));
v___x_1437_ = l_Lean_Parser_many1NoAntiquot(v_p_1435_);
v___x_1438_ = l_Lean_Parser_withResultOf(v___x_1437_, v___f_1436_);
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_satisfyFn(lean_object* v_p_1439_, lean_object* v_errorMsg_1440_, lean_object* v_c_1441_, lean_object* v_s_1442_){
_start:
{
lean_object* v_pos_1443_; lean_object* v_toInputContext_1444_; uint8_t v___x_1445_; 
v_pos_1443_ = lean_ctor_get(v_s_1442_, 2);
v_toInputContext_1444_ = lean_ctor_get(v_c_1441_, 0);
v___x_1445_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1444_, v_pos_1443_);
if (v___x_1445_ == 0)
{
lean_object* v_inputString_1446_; uint32_t v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; uint8_t v___x_1450_; 
v_inputString_1446_ = lean_ctor_get(v_toInputContext_1444_, 0);
v___x_1447_ = lean_string_utf8_get_fast(v_inputString_1446_, v_pos_1443_);
v___x_1448_ = lean_box_uint32(v___x_1447_);
v___x_1449_ = lean_apply_1(v_p_1439_, v___x_1448_);
v___x_1450_ = lean_unbox(v___x_1449_);
if (v___x_1450_ == 0)
{
uint8_t v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___x_1451_ = 1;
v___x_1452_ = lean_box(0);
v___x_1453_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1442_, v_errorMsg_1440_, v___x_1452_, v___x_1451_);
return v___x_1453_;
}
else
{
lean_object* v___x_1454_; 
lean_inc(v_pos_1443_);
lean_dec_ref(v_errorMsg_1440_);
v___x_1454_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1442_, v_c_1441_, v_pos_1443_);
lean_dec(v_pos_1443_);
return v___x_1454_;
}
}
else
{
lean_object* v___x_1455_; lean_object* v___x_1456_; 
lean_dec_ref(v_errorMsg_1440_);
lean_dec_ref(v_p_1439_);
v___x_1455_ = lean_box(0);
v___x_1456_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1442_, v___x_1455_);
return v___x_1456_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_satisfyFn___boxed(lean_object* v_p_1457_, lean_object* v_errorMsg_1458_, lean_object* v_c_1459_, lean_object* v_s_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l_Lean_Parser_satisfyFn(v_p_1457_, v_errorMsg_1458_, v_c_1459_, v_s_1460_);
lean_dec_ref(v_c_1459_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeUntilFn(lean_object* v_p_1462_, lean_object* v_c_1463_, lean_object* v_s_1464_){
_start:
{
lean_object* v_pos_1465_; lean_object* v_toInputContext_1466_; uint8_t v___x_1467_; 
v_pos_1465_ = lean_ctor_get(v_s_1464_, 2);
v_toInputContext_1466_ = lean_ctor_get(v_c_1463_, 0);
v___x_1467_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1466_, v_pos_1465_);
if (v___x_1467_ == 0)
{
lean_object* v_inputString_1468_; uint32_t v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; uint8_t v___x_1472_; 
v_inputString_1468_ = lean_ctor_get(v_toInputContext_1466_, 0);
v___x_1469_ = lean_string_utf8_get_fast(v_inputString_1468_, v_pos_1465_);
v___x_1470_ = lean_box_uint32(v___x_1469_);
lean_inc_ref(v_p_1462_);
v___x_1471_ = lean_apply_1(v_p_1462_, v___x_1470_);
v___x_1472_ = lean_unbox(v___x_1471_);
if (v___x_1472_ == 0)
{
lean_object* v___x_1473_; 
lean_inc(v_pos_1465_);
v___x_1473_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1464_, v_c_1463_, v_pos_1465_);
lean_dec(v_pos_1465_);
v_s_1464_ = v___x_1473_;
goto _start;
}
else
{
lean_dec_ref(v_p_1462_);
return v_s_1464_;
}
}
else
{
lean_dec_ref(v_p_1462_);
return v_s_1464_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeUntilFn___boxed(lean_object* v_p_1475_, lean_object* v_c_1476_, lean_object* v_s_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l_Lean_Parser_takeUntilFn(v_p_1475_, v_c_1476_, v_s_1477_);
lean_dec_ref(v_c_1476_);
return v_res_1478_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_takeWhileFn___lam__0(lean_object* v_p_1479_, uint32_t v_c_1480_){
_start:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; uint8_t v___x_1483_; 
v___x_1481_ = lean_box_uint32(v_c_1480_);
v___x_1482_ = lean_apply_1(v_p_1479_, v___x_1481_);
v___x_1483_ = lean_unbox(v___x_1482_);
if (v___x_1483_ == 0)
{
uint8_t v___x_1484_; 
v___x_1484_ = 1;
return v___x_1484_;
}
else
{
uint8_t v___x_1485_; 
v___x_1485_ = 0;
return v___x_1485_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhileFn___lam__0___boxed(lean_object* v_p_1486_, lean_object* v_c_1487_){
_start:
{
uint32_t v_c_boxed_1488_; uint8_t v_res_1489_; lean_object* v_r_1490_; 
v_c_boxed_1488_ = lean_unbox_uint32(v_c_1487_);
lean_dec(v_c_1487_);
v_res_1489_ = l_Lean_Parser_takeWhileFn___lam__0(v_p_1486_, v_c_boxed_1488_);
v_r_1490_ = lean_box(v_res_1489_);
return v_r_1490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhileFn(lean_object* v_p_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_){
_start:
{
lean_object* v___f_1494_; lean_object* v___x_1495_; 
v___f_1494_ = lean_alloc_closure((void*)(l_Lean_Parser_takeWhileFn___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1494_, 0, v_p_1491_);
v___x_1495_ = l_Lean_Parser_takeUntilFn(v___f_1494_, v_a_1492_, v_a_1493_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhileFn___boxed(lean_object* v_p_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l_Lean_Parser_takeWhileFn(v_p_1496_, v_a_1497_, v_a_1498_);
lean_dec_ref(v_a_1497_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhile1Fn(lean_object* v_p_1500_, lean_object* v_errorMsg_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_){
_start:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
lean_inc_ref(v_p_1500_);
v___x_1504_ = lean_alloc_closure((void*)(l_Lean_Parser_satisfyFn___boxed), 4, 2);
lean_closure_set(v___x_1504_, 0, v_p_1500_);
lean_closure_set(v___x_1504_, 1, v_errorMsg_1501_);
v___x_1505_ = lean_alloc_closure((void*)(l_Lean_Parser_takeWhileFn___boxed), 3, 1);
lean_closure_set(v___x_1505_, 0, v_p_1500_);
v___x_1506_ = l_Lean_Parser_andthenFn(v___x_1504_, v___x_1505_, v_a_1502_, v_a_1503_);
return v___x_1506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(uint8_t v_pushMissingOnError_1508_, lean_object* v_s_1509_){
_start:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; 
v___x_1510_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi___closed__0));
v___x_1511_ = lean_box(0);
v___x_1512_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1509_, v___x_1510_, v___x_1511_, v_pushMissingOnError_1508_);
return v___x_1512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi___boxed(lean_object* v_pushMissingOnError_1513_, lean_object* v_s_1514_){
_start:
{
uint8_t v_pushMissingOnError_boxed_1515_; lean_object* v_res_1516_; 
v_pushMissingOnError_boxed_1515_ = lean_unbox(v_pushMissingOnError_1513_);
v_res_1516_ = l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(v_pushMissingOnError_boxed_1515_, v_s_1514_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_finishCommentBlock(uint8_t v_pushMissingOnError_1517_, lean_object* v_nesting_1518_, lean_object* v_c_1519_, lean_object* v_s_1520_){
_start:
{
lean_object* v_pos_1521_; lean_object* v_toInputContext_1522_; uint8_t v___x_1523_; 
v_pos_1521_ = lean_ctor_get(v_s_1520_, 2);
v_toInputContext_1522_ = lean_ctor_get(v_c_1519_, 0);
v___x_1523_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1522_, v_pos_1521_);
if (v___x_1523_ == 0)
{
lean_object* v_inputString_1524_; uint32_t v_curr_1525_; lean_object* v_i_1526_; uint32_t v___x_1527_; uint8_t v___x_1528_; 
v_inputString_1524_ = lean_ctor_get(v_toInputContext_1522_, 0);
v_curr_1525_ = lean_string_utf8_get_fast(v_inputString_1524_, v_pos_1521_);
v_i_1526_ = lean_string_utf8_next_fast(v_inputString_1524_, v_pos_1521_);
v___x_1527_ = 45;
v___x_1528_ = lean_uint32_dec_eq(v_curr_1525_, v___x_1527_);
if (v___x_1528_ == 0)
{
uint32_t v___x_1529_; uint8_t v___x_1530_; 
v___x_1529_ = 47;
v___x_1530_ = lean_uint32_dec_eq(v_curr_1525_, v___x_1529_);
if (v___x_1530_ == 0)
{
lean_object* v___x_1531_; 
v___x_1531_ = l_Lean_Parser_ParserState_setPos(v_s_1520_, v_i_1526_);
v_s_1520_ = v___x_1531_;
goto _start;
}
else
{
uint8_t v___x_1533_; 
v___x_1533_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1522_, v_i_1526_);
if (v___x_1533_ == 0)
{
uint32_t v_curr_1534_; uint8_t v___x_1535_; 
v_curr_1534_ = lean_string_utf8_get_fast(v_inputString_1524_, v_i_1526_);
v___x_1535_ = lean_uint32_dec_eq(v_curr_1534_, v___x_1527_);
if (v___x_1535_ == 0)
{
lean_object* v___x_1536_; 
v___x_1536_ = l_Lean_Parser_ParserState_setPos(v_s_1520_, v_i_1526_);
v_s_1520_ = v___x_1536_;
goto _start;
}
else
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1538_ = lean_unsigned_to_nat(1u);
v___x_1539_ = lean_nat_add(v_nesting_1518_, v___x_1538_);
lean_dec(v_nesting_1518_);
v___x_1540_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1520_, v_c_1519_, v_i_1526_);
v_nesting_1518_ = v___x_1539_;
v_s_1520_ = v___x_1540_;
goto _start;
}
}
else
{
lean_object* v___x_1542_; 
lean_dec(v_nesting_1518_);
v___x_1542_ = l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(v_pushMissingOnError_1517_, v_s_1520_);
return v___x_1542_;
}
}
}
else
{
uint8_t v___x_1543_; 
v___x_1543_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1522_, v_i_1526_);
if (v___x_1543_ == 0)
{
uint32_t v_curr_1544_; uint32_t v___x_1545_; uint8_t v___x_1546_; 
v_curr_1544_ = lean_string_utf8_get_fast(v_inputString_1524_, v_i_1526_);
v___x_1545_ = 47;
v___x_1546_ = lean_uint32_dec_eq(v_curr_1544_, v___x_1545_);
if (v___x_1546_ == 0)
{
lean_object* v___x_1547_; 
v___x_1547_ = l_Lean_Parser_ParserState_setPos(v_s_1520_, v_i_1526_);
v_s_1520_ = v___x_1547_;
goto _start;
}
else
{
lean_object* v___x_1549_; uint8_t v___x_1550_; 
v___x_1549_ = lean_unsigned_to_nat(1u);
v___x_1550_ = lean_nat_dec_eq(v_nesting_1518_, v___x_1549_);
if (v___x_1550_ == 0)
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
v___x_1551_ = lean_nat_sub(v_nesting_1518_, v___x_1549_);
lean_dec(v_nesting_1518_);
v___x_1552_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1520_, v_c_1519_, v_i_1526_);
v_nesting_1518_ = v___x_1551_;
v_s_1520_ = v___x_1552_;
goto _start;
}
else
{
lean_object* v___x_1554_; 
lean_dec(v_nesting_1518_);
v___x_1554_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1520_, v_c_1519_, v_i_1526_);
return v___x_1554_;
}
}
}
else
{
lean_object* v___x_1555_; 
lean_dec(v_nesting_1518_);
v___x_1555_ = l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(v_pushMissingOnError_1517_, v_s_1520_);
return v___x_1555_;
}
}
}
else
{
lean_object* v___x_1556_; 
lean_dec(v_nesting_1518_);
v___x_1556_ = l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(v_pushMissingOnError_1517_, v_s_1520_);
return v___x_1556_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_finishCommentBlock___boxed(lean_object* v_pushMissingOnError_1557_, lean_object* v_nesting_1558_, lean_object* v_c_1559_, lean_object* v_s_1560_){
_start:
{
uint8_t v_pushMissingOnError_boxed_1561_; lean_object* v_res_1562_; 
v_pushMissingOnError_boxed_1561_ = lean_unbox(v_pushMissingOnError_1557_);
v_res_1562_ = l_Lean_Parser_finishCommentBlock(v_pushMissingOnError_boxed_1561_, v_nesting_1558_, v_c_1559_, v_s_1560_);
lean_dec_ref(v_c_1559_);
return v_res_1562_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_whitespace___lam__0(uint32_t v_c_1563_){
_start:
{
uint32_t v___x_1564_; uint8_t v___x_1565_; 
v___x_1564_ = 10;
v___x_1565_ = lean_uint32_dec_eq(v_c_1563_, v___x_1564_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_whitespace___lam__0___boxed(lean_object* v_c_1566_){
_start:
{
uint32_t v_c_boxed_1567_; uint8_t v_res_1568_; lean_object* v_r_1569_; 
v_c_boxed_1567_ = lean_unbox_uint32(v_c_1566_);
lean_dec(v_c_1566_);
v_res_1568_ = l_Lean_Parser_whitespace___lam__0(v_c_boxed_1567_);
v_r_1569_ = lean_box(v_res_1568_);
return v_r_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_whitespace(lean_object* v_c_1575_, lean_object* v_s_1576_){
_start:
{
lean_object* v_pos_1577_; lean_object* v_toInputContext_1581_; uint8_t v___x_1582_; 
v_pos_1577_ = lean_ctor_get(v_s_1576_, 2);
v_toInputContext_1581_ = lean_ctor_get(v_c_1575_, 0);
v___x_1582_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1581_, v_pos_1577_);
if (v___x_1582_ == 0)
{
lean_object* v_inputString_1583_; uint32_t v_curr_1584_; uint32_t v___x_1585_; uint8_t v___x_1586_; 
v_inputString_1583_ = lean_ctor_get(v_toInputContext_1581_, 0);
v_curr_1584_ = lean_string_utf8_get_fast(v_inputString_1583_, v_pos_1577_);
v___x_1585_ = 9;
v___x_1586_ = lean_uint32_dec_eq(v_curr_1584_, v___x_1585_);
if (v___x_1586_ == 0)
{
uint32_t v___x_1587_; uint8_t v___x_1588_; 
v___x_1587_ = 13;
v___x_1588_ = lean_uint32_dec_eq(v_curr_1584_, v___x_1587_);
if (v___x_1588_ == 0)
{
uint32_t v___x_1589_; uint8_t v___x_1590_; 
v___x_1589_ = 32;
v___x_1590_ = lean_uint32_dec_eq(v_curr_1584_, v___x_1589_);
if (v___x_1590_ == 0)
{
uint32_t v___x_1591_; uint8_t v___x_1592_; 
v___x_1591_ = 10;
v___x_1592_ = lean_uint32_dec_eq(v_curr_1584_, v___x_1591_);
if (v___x_1592_ == 0)
{
uint32_t v___x_1593_; uint8_t v___x_1594_; 
v___x_1593_ = 45;
v___x_1594_ = lean_uint32_dec_eq(v_curr_1584_, v___x_1593_);
if (v___x_1594_ == 0)
{
uint32_t v___x_1595_; uint8_t v___x_1596_; 
v___x_1595_ = 47;
v___x_1596_ = lean_uint32_dec_eq(v_curr_1584_, v___x_1595_);
if (v___x_1596_ == 0)
{
lean_dec_ref(v_c_1575_);
return v_s_1576_;
}
else
{
lean_object* v_i_1597_; uint32_t v_curr_1598_; uint8_t v___x_1599_; 
v_i_1597_ = lean_string_utf8_next_fast(v_inputString_1583_, v_pos_1577_);
v_curr_1598_ = lean_string_utf8_get(v_inputString_1583_, v_i_1597_);
v___x_1599_ = lean_uint32_dec_eq(v_curr_1598_, v___x_1593_);
if (v___x_1599_ == 0)
{
lean_dec_ref(v_c_1575_);
return v_s_1576_;
}
else
{
lean_object* v_i_1600_; uint32_t v_curr_1601_; uint8_t v___x_1602_; 
v_i_1600_ = lean_string_utf8_next(v_inputString_1583_, v_i_1597_);
v_curr_1601_ = lean_string_utf8_get(v_inputString_1583_, v_i_1600_);
v___x_1602_ = lean_uint32_dec_eq(v_curr_1601_, v___x_1593_);
if (v___x_1602_ == 0)
{
uint32_t v___x_1603_; uint8_t v___x_1604_; 
v___x_1603_ = 33;
v___x_1604_ = lean_uint32_dec_eq(v_curr_1601_, v___x_1603_);
if (v___x_1604_ == 0)
{
lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1605_ = lean_unsigned_to_nat(1u);
v___x_1606_ = lean_box(v___x_1604_);
v___x_1607_ = lean_alloc_closure((void*)(l_Lean_Parser_finishCommentBlock___boxed), 4, 2);
lean_closure_set(v___x_1607_, 0, v___x_1606_);
lean_closure_set(v___x_1607_, 1, v___x_1605_);
v___x_1608_ = lean_alloc_closure((void*)(l_Lean_Parser_whitespace), 2, 0);
v___x_1609_ = l_Lean_Parser_ParserState_next(v_s_1576_, v_c_1575_, v_i_1600_);
lean_dec(v_i_1600_);
v___x_1610_ = l_Lean_Parser_andthenFn(v___x_1607_, v___x_1608_, v_c_1575_, v___x_1609_);
return v___x_1610_;
}
else
{
lean_dec(v_i_1600_);
lean_dec_ref(v_c_1575_);
return v_s_1576_;
}
}
else
{
lean_dec(v_i_1600_);
lean_dec_ref(v_c_1575_);
return v_s_1576_;
}
}
}
}
else
{
lean_object* v_i_1611_; uint32_t v_curr_1612_; uint8_t v___x_1613_; 
v_i_1611_ = lean_string_utf8_next_fast(v_inputString_1583_, v_pos_1577_);
v_curr_1612_ = lean_string_utf8_get(v_inputString_1583_, v_i_1611_);
v___x_1613_ = lean_uint32_dec_eq(v_curr_1612_, v___x_1593_);
if (v___x_1613_ == 0)
{
lean_dec_ref(v_c_1575_);
return v_s_1576_;
}
else
{
lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1614_ = ((lean_object*)(l_Lean_Parser_whitespace___closed__1));
v___x_1615_ = lean_alloc_closure((void*)(l_Lean_Parser_whitespace), 2, 0);
v___x_1616_ = l_Lean_Parser_ParserState_next(v_s_1576_, v_c_1575_, v_i_1611_);
v___x_1617_ = l_Lean_Parser_andthenFn(v___x_1614_, v___x_1615_, v_c_1575_, v___x_1616_);
return v___x_1617_;
}
}
}
else
{
lean_inc(v_pos_1577_);
goto v___jp_1578_;
}
}
else
{
lean_inc(v_pos_1577_);
goto v___jp_1578_;
}
}
else
{
lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
lean_dec_ref(v_c_1575_);
v___x_1618_ = ((lean_object*)(l_Lean_Parser_whitespace___closed__2));
v___x_1619_ = lean_box(0);
v___x_1620_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1576_, v___x_1618_, v___x_1619_, v___x_1586_);
return v___x_1620_;
}
}
else
{
lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
lean_dec_ref(v_c_1575_);
v___x_1621_ = ((lean_object*)(l_Lean_Parser_whitespace___closed__3));
v___x_1622_ = lean_box(0);
v___x_1623_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1576_, v___x_1621_, v___x_1622_, v___x_1582_);
return v___x_1623_;
}
}
else
{
lean_dec_ref(v_c_1575_);
return v_s_1576_;
}
v___jp_1578_:
{
lean_object* v___x_1579_; 
v___x_1579_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1576_, v_c_1575_, v_pos_1577_);
lean_dec(v_pos_1577_);
v_s_1576_ = v___x_1579_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_mkEmptySubstringAt(lean_object* v_c_1624_, lean_object* v_p_1625_){
_start:
{
lean_object* v_toInputContext_1626_; lean_object* v_inputString_1627_; lean_object* v_endPos_1628_; uint8_t v___x_1629_; 
v_toInputContext_1626_ = lean_ctor_get(v_c_1624_, 0);
v_inputString_1627_ = lean_ctor_get(v_toInputContext_1626_, 0);
v_endPos_1628_ = lean_ctor_get(v_toInputContext_1626_, 3);
v___x_1629_ = lean_nat_dec_le(v_p_1625_, v_endPos_1628_);
if (v___x_1629_ == 0)
{
lean_object* v___x_1630_; 
lean_inc(v_endPos_1628_);
lean_inc_ref(v_inputString_1627_);
v___x_1630_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1630_, 0, v_inputString_1627_);
lean_ctor_set(v___x_1630_, 1, v_p_1625_);
lean_ctor_set(v___x_1630_, 2, v_endPos_1628_);
return v___x_1630_;
}
else
{
lean_object* v___x_1631_; 
lean_inc(v_p_1625_);
lean_inc_ref(v_inputString_1627_);
v___x_1631_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1631_, 0, v_inputString_1627_);
lean_ctor_set(v___x_1631_, 1, v_p_1625_);
lean_ctor_set(v___x_1631_, 2, v_p_1625_);
return v___x_1631_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_mkEmptySubstringAt___boxed(lean_object* v_c_1632_, lean_object* v_p_1633_){
_start:
{
lean_object* v_res_1634_; 
v_res_1634_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_1632_, v_p_1633_);
lean_dec_ref(v_c_1632_);
return v_res_1634_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawAux(lean_object* v_startPos_1635_, uint8_t v_trailingWs_1636_, lean_object* v_c_1637_, lean_object* v_s_1638_){
_start:
{
lean_object* v_toInputContext_1639_; lean_object* v_pos_1640_; lean_object* v_inputString_1641_; lean_object* v_endPos_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1670_; 
v_toInputContext_1639_ = lean_ctor_get(v_c_1637_, 0);
lean_inc_ref(v_toInputContext_1639_);
v_pos_1640_ = lean_ctor_get(v_s_1638_, 2);
v_inputString_1641_ = lean_ctor_get(v_toInputContext_1639_, 0);
v_endPos_1642_ = lean_ctor_get(v_toInputContext_1639_, 3);
v_isSharedCheck_1670_ = !lean_is_exclusive(v_toInputContext_1639_);
if (v_isSharedCheck_1670_ == 0)
{
lean_object* v_unused_1671_; lean_object* v_unused_1672_; 
v_unused_1671_ = lean_ctor_get(v_toInputContext_1639_, 2);
lean_dec(v_unused_1671_);
v_unused_1672_ = lean_ctor_get(v_toInputContext_1639_, 1);
lean_dec(v_unused_1672_);
v___x_1644_ = v_toInputContext_1639_;
v_isShared_1645_ = v_isSharedCheck_1670_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_endPos_1642_);
lean_inc(v_inputString_1641_);
lean_dec(v_toInputContext_1639_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1670_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v_leading_1646_; lean_object* v_val_1647_; 
lean_inc(v_startPos_1635_);
v_leading_1646_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_1637_, v_startPos_1635_);
v_val_1647_ = lean_string_utf8_extract(v_inputString_1641_, v_startPos_1635_, v_pos_1640_);
if (v_trailingWs_1636_ == 0)
{
lean_object* v_trailing_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1652_; 
lean_dec(v_endPos_1642_);
lean_dec_ref(v_inputString_1641_);
lean_inc(v_pos_1640_);
v_trailing_1648_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_1637_, v_pos_1640_);
lean_dec_ref(v_c_1637_);
v___x_1649_ = lean_string_utf8_byte_size(v_val_1647_);
v___x_1650_ = lean_nat_add(v_startPos_1635_, v___x_1649_);
if (v_isShared_1645_ == 0)
{
lean_ctor_set(v___x_1644_, 3, v___x_1650_);
lean_ctor_set(v___x_1644_, 2, v_trailing_1648_);
lean_ctor_set(v___x_1644_, 1, v_startPos_1635_);
lean_ctor_set(v___x_1644_, 0, v_leading_1646_);
v___x_1652_ = v___x_1644_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_leading_1646_);
lean_ctor_set(v_reuseFailAlloc_1655_, 1, v_startPos_1635_);
lean_ctor_set(v_reuseFailAlloc_1655_, 2, v_trailing_1648_);
lean_ctor_set(v_reuseFailAlloc_1655_, 3, v___x_1650_);
v___x_1652_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
lean_object* v_atom_1653_; lean_object* v___x_1654_; 
v_atom_1653_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_1653_, 0, v___x_1652_);
lean_ctor_set(v_atom_1653_, 1, v_val_1647_);
v___x_1654_ = l_Lean_Parser_ParserState_pushSyntax(v_s_1638_, v_atom_1653_);
return v___x_1654_;
}
}
else
{
lean_object* v_s_1656_; lean_object* v___y_1658_; lean_object* v_pos_1666_; uint8_t v___x_1667_; 
lean_inc(v_pos_1640_);
v_s_1656_ = l_Lean_Parser_whitespace(v_c_1637_, v_s_1638_);
v_pos_1666_ = lean_ctor_get(v_s_1656_, 2);
v___x_1667_ = lean_nat_dec_le(v_pos_1666_, v_endPos_1642_);
if (v___x_1667_ == 0)
{
lean_object* v___x_1668_; 
v___x_1668_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1668_, 0, v_inputString_1641_);
lean_ctor_set(v___x_1668_, 1, v_pos_1640_);
lean_ctor_set(v___x_1668_, 2, v_endPos_1642_);
v___y_1658_ = v___x_1668_;
goto v___jp_1657_;
}
else
{
lean_object* v___x_1669_; 
lean_dec(v_endPos_1642_);
lean_inc(v_pos_1666_);
v___x_1669_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1669_, 0, v_inputString_1641_);
lean_ctor_set(v___x_1669_, 1, v_pos_1640_);
lean_ctor_set(v___x_1669_, 2, v_pos_1666_);
v___y_1658_ = v___x_1669_;
goto v___jp_1657_;
}
v___jp_1657_:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1662_; 
v___x_1659_ = lean_string_utf8_byte_size(v_val_1647_);
v___x_1660_ = lean_nat_add(v_startPos_1635_, v___x_1659_);
if (v_isShared_1645_ == 0)
{
lean_ctor_set(v___x_1644_, 3, v___x_1660_);
lean_ctor_set(v___x_1644_, 2, v___y_1658_);
lean_ctor_set(v___x_1644_, 1, v_startPos_1635_);
lean_ctor_set(v___x_1644_, 0, v_leading_1646_);
v___x_1662_ = v___x_1644_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_leading_1646_);
lean_ctor_set(v_reuseFailAlloc_1665_, 1, v_startPos_1635_);
lean_ctor_set(v_reuseFailAlloc_1665_, 2, v___y_1658_);
lean_ctor_set(v_reuseFailAlloc_1665_, 3, v___x_1660_);
v___x_1662_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
lean_object* v_atom_1663_; lean_object* v___x_1664_; 
v_atom_1663_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_1663_, 0, v___x_1662_);
lean_ctor_set(v_atom_1663_, 1, v_val_1647_);
v___x_1664_ = l_Lean_Parser_ParserState_pushSyntax(v_s_1656_, v_atom_1663_);
return v___x_1664_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawAux___boxed(lean_object* v_startPos_1673_, lean_object* v_trailingWs_1674_, lean_object* v_c_1675_, lean_object* v_s_1676_){
_start:
{
uint8_t v_trailingWs_boxed_1677_; lean_object* v_res_1678_; 
v_trailingWs_boxed_1677_ = lean_unbox(v_trailingWs_1674_);
v_res_1678_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawAux(v_startPos_1673_, v_trailingWs_boxed_1677_, v_c_1675_, v_s_1676_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawFn(lean_object* v_p_1679_, uint8_t v_trailingWs_1680_, lean_object* v_c_1681_, lean_object* v_s_1682_){
_start:
{
lean_object* v_pos_1683_; lean_object* v_s_1684_; lean_object* v_errorMsg_1685_; lean_object* v___x_1686_; uint8_t v___x_1687_; 
v_pos_1683_ = lean_ctor_get(v_s_1682_, 2);
lean_inc(v_pos_1683_);
lean_inc_ref(v_c_1681_);
v_s_1684_ = lean_apply_2(v_p_1679_, v_c_1681_, v_s_1682_);
v_errorMsg_1685_ = lean_ctor_get(v_s_1684_, 4);
lean_inc(v_errorMsg_1685_);
v___x_1686_ = lean_box(0);
v___x_1687_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1685_, v___x_1686_);
lean_dec(v_errorMsg_1685_);
if (v___x_1687_ == 0)
{
lean_dec(v_pos_1683_);
lean_dec_ref(v_c_1681_);
return v_s_1684_;
}
else
{
lean_object* v___x_1688_; 
v___x_1688_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawAux(v_pos_1683_, v_trailingWs_1680_, v_c_1681_, v_s_1684_);
return v___x_1688_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawFn___boxed(lean_object* v_p_1689_, lean_object* v_trailingWs_1690_, lean_object* v_c_1691_, lean_object* v_s_1692_){
_start:
{
uint8_t v_trailingWs_boxed_1693_; lean_object* v_res_1694_; 
v_trailingWs_boxed_1693_ = lean_unbox(v_trailingWs_1690_);
v_res_1694_ = l_Lean_Parser_rawFn(v_p_1689_, v_trailingWs_boxed_1693_, v_c_1691_, v_s_1692_);
return v_res_1694_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_chFn___lam__0(uint32_t v_c_1695_, uint32_t v_d_1696_){
_start:
{
uint8_t v___x_1697_; 
v___x_1697_ = lean_uint32_dec_eq(v_c_1695_, v_d_1696_);
return v___x_1697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_chFn___lam__0___boxed(lean_object* v_c_1698_, lean_object* v_d_1699_){
_start:
{
uint32_t v_c_boxed_1700_; uint32_t v_d_boxed_1701_; uint8_t v_res_1702_; lean_object* v_r_1703_; 
v_c_boxed_1700_ = lean_unbox_uint32(v_c_1698_);
lean_dec(v_c_1698_);
v_d_boxed_1701_ = lean_unbox_uint32(v_d_1699_);
lean_dec(v_d_1699_);
v_res_1702_ = l_Lean_Parser_chFn___lam__0(v_c_boxed_1700_, v_d_boxed_1701_);
v_r_1703_ = lean_box(v_res_1702_);
return v_r_1703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_chFn(uint32_t v_c_1706_, uint8_t v_trailingWs_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_){
_start:
{
lean_object* v___x_1710_; lean_object* v___f_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; 
v___x_1710_ = lean_box_uint32(v_c_1706_);
v___f_1711_ = lean_alloc_closure((void*)(l_Lean_Parser_chFn___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1711_, 0, v___x_1710_);
v___x_1712_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_1713_ = ((lean_object*)(l_Lean_Parser_chFn___closed__1));
v___x_1714_ = lean_string_push(v___x_1713_, v_c_1706_);
v___x_1715_ = lean_string_append(v___x_1712_, v___x_1714_);
lean_dec_ref(v___x_1714_);
v___x_1716_ = lean_string_append(v___x_1715_, v___x_1712_);
v___x_1717_ = lean_alloc_closure((void*)(l_Lean_Parser_satisfyFn___boxed), 4, 2);
lean_closure_set(v___x_1717_, 0, v___f_1711_);
lean_closure_set(v___x_1717_, 1, v___x_1716_);
v___x_1718_ = l_Lean_Parser_rawFn(v___x_1717_, v_trailingWs_1707_, v_a_1708_, v_a_1709_);
return v___x_1718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_chFn___boxed(lean_object* v_c_1719_, lean_object* v_trailingWs_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_){
_start:
{
uint32_t v_c_boxed_1723_; uint8_t v_trailingWs_boxed_1724_; lean_object* v_res_1725_; 
v_c_boxed_1723_ = lean_unbox_uint32(v_c_1719_);
lean_dec(v_c_1719_);
v_trailingWs_boxed_1724_ = lean_unbox(v_trailingWs_1720_);
v_res_1725_ = l_Lean_Parser_chFn(v_c_boxed_1723_, v_trailingWs_boxed_1724_, v_a_1721_, v_a_1722_);
return v_res_1725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawCh(uint32_t v_c_1726_, uint8_t v_trailingWs_1727_){
_start:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1728_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_1729_ = lean_box_uint32(v_c_1726_);
v___x_1730_ = lean_box(v_trailingWs_1727_);
v___x_1731_ = lean_alloc_closure((void*)(l_Lean_Parser_chFn___boxed), 4, 2);
lean_closure_set(v___x_1731_, 0, v___x_1729_);
lean_closure_set(v___x_1731_, 1, v___x_1730_);
v___x_1732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1728_);
lean_ctor_set(v___x_1732_, 1, v___x_1731_);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawCh___boxed(lean_object* v_c_1733_, lean_object* v_trailingWs_1734_){
_start:
{
uint32_t v_c_boxed_1735_; uint8_t v_trailingWs_boxed_1736_; lean_object* v_res_1737_; 
v_c_boxed_1735_ = lean_unbox_uint32(v_c_1733_);
lean_dec(v_c_1733_);
v_trailingWs_boxed_1736_ = lean_unbox(v_trailingWs_1734_);
v_res_1737_ = l_Lean_Parser_rawCh(v_c_boxed_1735_, v_trailingWs_boxed_1736_);
return v_res_1737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hexDigitFn(lean_object* v_c_1739_, lean_object* v_s_1740_){
_start:
{
lean_object* v_pos_1741_; lean_object* v_toInputContext_1742_; uint8_t v___x_1743_; 
v_pos_1741_ = lean_ctor_get(v_s_1740_, 2);
v_toInputContext_1742_ = lean_ctor_get(v_c_1739_, 0);
v___x_1743_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1742_, v_pos_1741_);
if (v___x_1743_ == 0)
{
lean_object* v_inputString_1744_; uint8_t v___x_1745_; uint32_t v_curr_1750_; lean_object* v_i_1751_; uint32_t v___x_1764_; uint8_t v___x_1765_; 
v_inputString_1744_ = lean_ctor_get(v_toInputContext_1742_, 0);
v___x_1745_ = 1;
v_curr_1750_ = lean_string_utf8_get_fast(v_inputString_1744_, v_pos_1741_);
v_i_1751_ = lean_string_utf8_next_fast(v_inputString_1744_, v_pos_1741_);
v___x_1764_ = 48;
v___x_1765_ = lean_uint32_dec_le(v___x_1764_, v_curr_1750_);
if (v___x_1765_ == 0)
{
goto v___jp_1758_;
}
else
{
uint32_t v___x_1766_; uint8_t v___x_1767_; 
v___x_1766_ = 57;
v___x_1767_ = lean_uint32_dec_le(v_curr_1750_, v___x_1766_);
if (v___x_1767_ == 0)
{
goto v___jp_1758_;
}
else
{
lean_object* v___x_1768_; 
v___x_1768_ = l_Lean_Parser_ParserState_setPos(v_s_1740_, v_i_1751_);
return v___x_1768_;
}
}
v___jp_1746_:
{
lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1747_ = ((lean_object*)(l_Lean_Parser_hexDigitFn___closed__0));
v___x_1748_ = lean_box(0);
v___x_1749_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1740_, v___x_1747_, v___x_1748_, v___x_1745_);
return v___x_1749_;
}
v___jp_1752_:
{
uint32_t v___x_1753_; uint8_t v___x_1754_; 
v___x_1753_ = 65;
v___x_1754_ = lean_uint32_dec_le(v___x_1753_, v_curr_1750_);
if (v___x_1754_ == 0)
{
goto v___jp_1746_;
}
else
{
uint32_t v___x_1755_; uint8_t v___x_1756_; 
v___x_1755_ = 70;
v___x_1756_ = lean_uint32_dec_le(v_curr_1750_, v___x_1755_);
if (v___x_1756_ == 0)
{
goto v___jp_1746_;
}
else
{
lean_object* v___x_1757_; 
v___x_1757_ = l_Lean_Parser_ParserState_setPos(v_s_1740_, v_i_1751_);
return v___x_1757_;
}
}
}
v___jp_1758_:
{
uint32_t v___x_1759_; uint8_t v___x_1760_; 
v___x_1759_ = 97;
v___x_1760_ = lean_uint32_dec_le(v___x_1759_, v_curr_1750_);
if (v___x_1760_ == 0)
{
goto v___jp_1752_;
}
else
{
uint32_t v___x_1761_; uint8_t v___x_1762_; 
v___x_1761_ = 102;
v___x_1762_ = lean_uint32_dec_le(v_curr_1750_, v___x_1761_);
if (v___x_1762_ == 0)
{
goto v___jp_1752_;
}
else
{
lean_object* v___x_1763_; 
v___x_1763_ = l_Lean_Parser_ParserState_setPos(v_s_1740_, v_i_1751_);
return v___x_1763_;
}
}
}
}
else
{
lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1769_ = lean_box(0);
v___x_1770_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1740_, v___x_1769_);
return v___x_1770_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hexDigitFn___boxed(lean_object* v_c_1771_, lean_object* v_s_1772_){
_start:
{
lean_object* v_res_1773_; 
v_res_1773_ = l_Lean_Parser_hexDigitFn(v_c_1771_, v_s_1772_);
lean_dec_ref(v_c_1771_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_stringGapFn(uint8_t v_seenNewline_1776_, lean_object* v_c_1777_, lean_object* v_s_1778_){
_start:
{
lean_object* v_pos_1779_; lean_object* v_toInputContext_1783_; uint8_t v___x_1784_; 
v_pos_1779_ = lean_ctor_get(v_s_1778_, 2);
v_toInputContext_1783_ = lean_ctor_get(v_c_1777_, 0);
v___x_1784_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1783_, v_pos_1779_);
if (v___x_1784_ == 0)
{
lean_object* v_inputString_1785_; uint8_t v___x_1786_; uint32_t v_curr_1787_; uint32_t v___x_1788_; uint8_t v___x_1789_; 
v_inputString_1785_ = lean_ctor_get(v_toInputContext_1783_, 0);
v___x_1786_ = 1;
v_curr_1787_ = lean_string_utf8_get_fast(v_inputString_1785_, v_pos_1779_);
v___x_1788_ = 10;
v___x_1789_ = lean_uint32_dec_eq(v_curr_1787_, v___x_1788_);
if (v___x_1789_ == 0)
{
uint32_t v___x_1790_; uint8_t v___x_1791_; 
v___x_1790_ = 32;
v___x_1791_ = lean_uint32_dec_eq(v_curr_1787_, v___x_1790_);
if (v___x_1791_ == 0)
{
uint32_t v___x_1792_; uint8_t v___x_1793_; 
v___x_1792_ = 9;
v___x_1793_ = lean_uint32_dec_eq(v_curr_1787_, v___x_1792_);
if (v___x_1793_ == 0)
{
uint32_t v___x_1794_; uint8_t v___x_1795_; 
v___x_1794_ = 13;
v___x_1795_ = lean_uint32_dec_eq(v_curr_1787_, v___x_1794_);
if (v___x_1795_ == 0)
{
if (v_seenNewline_1776_ == 0)
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1796_ = ((lean_object*)(l_Lean_Parser_stringGapFn___closed__0));
v___x_1797_ = lean_box(0);
v___x_1798_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1778_, v___x_1796_, v___x_1797_, v___x_1786_);
return v___x_1798_;
}
else
{
return v_s_1778_;
}
}
else
{
lean_inc(v_pos_1779_);
goto v___jp_1780_;
}
}
else
{
lean_inc(v_pos_1779_);
goto v___jp_1780_;
}
}
else
{
lean_inc(v_pos_1779_);
goto v___jp_1780_;
}
}
else
{
if (v_seenNewline_1776_ == 0)
{
lean_object* v___x_1799_; 
lean_inc(v_pos_1779_);
v___x_1799_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1778_, v_c_1777_, v_pos_1779_);
lean_dec(v_pos_1779_);
v_seenNewline_1776_ = v___x_1786_;
v_s_1778_ = v___x_1799_;
goto _start;
}
else
{
lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1801_ = ((lean_object*)(l_Lean_Parser_stringGapFn___closed__1));
v___x_1802_ = lean_box(0);
v___x_1803_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1778_, v___x_1801_, v___x_1802_, v___x_1786_);
return v___x_1803_;
}
}
}
else
{
return v_s_1778_;
}
v___jp_1780_:
{
lean_object* v___x_1781_; 
v___x_1781_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1778_, v_c_1777_, v_pos_1779_);
lean_dec(v_pos_1779_);
v_s_1778_ = v___x_1781_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_stringGapFn___boxed(lean_object* v_seenNewline_1804_, lean_object* v_c_1805_, lean_object* v_s_1806_){
_start:
{
uint8_t v_seenNewline_boxed_1807_; lean_object* v_res_1808_; 
v_seenNewline_boxed_1807_ = lean_unbox(v_seenNewline_1804_);
v_res_1808_ = l_Lean_Parser_stringGapFn(v_seenNewline_boxed_1807_, v_c_1805_, v_s_1806_);
lean_dec_ref(v_c_1805_);
return v_res_1808_;
}
}
static lean_object* _init_l_Lean_Parser_quotedCharCoreFn___closed__1(void){
_start:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1810_ = lean_alloc_closure((void*)(l_Lean_Parser_hexDigitFn___boxed), 2, 0);
lean_inc_ref(v___x_1810_);
v___x_1811_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(v___x_1811_, 0, v___x_1810_);
lean_closure_set(v___x_1811_, 1, v___x_1810_);
return v___x_1811_;
}
}
static lean_object* _init_l_Lean_Parser_quotedCharCoreFn___closed__2(void){
_start:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; 
v___x_1812_ = lean_obj_once(&l_Lean_Parser_quotedCharCoreFn___closed__1, &l_Lean_Parser_quotedCharCoreFn___closed__1_once, _init_l_Lean_Parser_quotedCharCoreFn___closed__1);
v___x_1813_ = lean_alloc_closure((void*)(l_Lean_Parser_hexDigitFn___boxed), 2, 0);
v___x_1814_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(v___x_1814_, 0, v___x_1813_);
lean_closure_set(v___x_1814_, 1, v___x_1812_);
return v___x_1814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_quotedCharCoreFn(lean_object* v_isQuotable_1815_, uint8_t v_inString_1816_, lean_object* v_c_1817_, lean_object* v_s_1818_){
_start:
{
lean_object* v_pos_1819_; lean_object* v_toInputContext_1820_; uint8_t v___x_1821_; 
v_pos_1819_ = lean_ctor_get(v_s_1818_, 2);
v_toInputContext_1820_ = lean_ctor_get(v_c_1817_, 0);
v___x_1821_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1820_, v_pos_1819_);
if (v___x_1821_ == 0)
{
lean_object* v_inputString_1822_; uint32_t v_curr_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; uint8_t v___x_1826_; 
v_inputString_1822_ = lean_ctor_get(v_toInputContext_1820_, 0);
v_curr_1823_ = lean_string_utf8_get_fast(v_inputString_1822_, v_pos_1819_);
v___x_1824_ = lean_box_uint32(v_curr_1823_);
v___x_1825_ = lean_apply_1(v_isQuotable_1815_, v___x_1824_);
v___x_1826_ = lean_unbox(v___x_1825_);
if (v___x_1826_ == 0)
{
uint32_t v___x_1827_; uint8_t v___x_1828_; 
v___x_1827_ = 120;
v___x_1828_ = lean_uint32_dec_eq(v_curr_1823_, v___x_1827_);
if (v___x_1828_ == 0)
{
uint32_t v___x_1829_; uint8_t v___x_1830_; 
v___x_1829_ = 117;
v___x_1830_ = lean_uint32_dec_eq(v_curr_1823_, v___x_1829_);
if (v___x_1830_ == 0)
{
uint8_t v___x_1831_; 
v___x_1831_ = 1;
if (v_inString_1816_ == 0)
{
lean_dec_ref(v_c_1817_);
goto v___jp_1832_;
}
else
{
uint32_t v___x_1836_; uint8_t v___x_1837_; 
v___x_1836_ = 10;
v___x_1837_ = lean_uint32_dec_eq(v_curr_1823_, v___x_1836_);
if (v___x_1837_ == 0)
{
lean_dec_ref(v_c_1817_);
goto v___jp_1832_;
}
else
{
lean_object* v___x_1838_; 
v___x_1838_ = l_Lean_Parser_stringGapFn(v___x_1830_, v_c_1817_, v_s_1818_);
lean_dec_ref(v_c_1817_);
return v___x_1838_;
}
}
v___jp_1832_:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1833_ = ((lean_object*)(l_Lean_Parser_quotedCharCoreFn___closed__0));
v___x_1834_ = lean_box(0);
v___x_1835_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1818_, v___x_1833_, v___x_1834_, v___x_1831_);
return v___x_1835_;
}
}
else
{
lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
lean_inc(v_pos_1819_);
v___x_1839_ = lean_alloc_closure((void*)(l_Lean_Parser_hexDigitFn___boxed), 2, 0);
v___x_1840_ = lean_obj_once(&l_Lean_Parser_quotedCharCoreFn___closed__2, &l_Lean_Parser_quotedCharCoreFn___closed__2_once, _init_l_Lean_Parser_quotedCharCoreFn___closed__2);
v___x_1841_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1818_, v_c_1817_, v_pos_1819_);
lean_dec(v_pos_1819_);
v___x_1842_ = l_Lean_Parser_andthenFn(v___x_1839_, v___x_1840_, v_c_1817_, v___x_1841_);
return v___x_1842_;
}
}
else
{
lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; 
lean_inc(v_pos_1819_);
v___x_1843_ = lean_alloc_closure((void*)(l_Lean_Parser_hexDigitFn___boxed), 2, 0);
v___x_1844_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1818_, v_c_1817_, v_pos_1819_);
lean_dec(v_pos_1819_);
lean_inc_ref(v___x_1843_);
v___x_1845_ = l_Lean_Parser_andthenFn(v___x_1843_, v___x_1843_, v_c_1817_, v___x_1844_);
return v___x_1845_;
}
}
else
{
lean_object* v___x_1846_; 
lean_inc(v_pos_1819_);
v___x_1846_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1818_, v_c_1817_, v_pos_1819_);
lean_dec(v_pos_1819_);
lean_dec_ref(v_c_1817_);
return v___x_1846_;
}
}
else
{
lean_object* v___x_1847_; lean_object* v___x_1848_; 
lean_dec_ref(v_c_1817_);
lean_dec_ref(v_isQuotable_1815_);
v___x_1847_ = lean_box(0);
v___x_1848_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1818_, v___x_1847_);
return v___x_1848_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_quotedCharCoreFn___boxed(lean_object* v_isQuotable_1849_, lean_object* v_inString_1850_, lean_object* v_c_1851_, lean_object* v_s_1852_){
_start:
{
uint8_t v_inString_boxed_1853_; lean_object* v_res_1854_; 
v_inString_boxed_1853_ = lean_unbox(v_inString_1850_);
v_res_1854_ = l_Lean_Parser_quotedCharCoreFn(v_isQuotable_1849_, v_inString_boxed_1853_, v_c_1851_, v_s_1852_);
return v_res_1854_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_isQuotableCharDefault(uint32_t v_c_1855_){
_start:
{
uint32_t v___x_1856_; uint8_t v___x_1857_; 
v___x_1856_ = 92;
v___x_1857_ = lean_uint32_dec_eq(v_c_1855_, v___x_1856_);
if (v___x_1857_ == 0)
{
uint32_t v___x_1858_; uint8_t v___x_1859_; 
v___x_1858_ = 34;
v___x_1859_ = lean_uint32_dec_eq(v_c_1855_, v___x_1858_);
if (v___x_1859_ == 0)
{
uint32_t v___x_1860_; uint8_t v___x_1861_; 
v___x_1860_ = 39;
v___x_1861_ = lean_uint32_dec_eq(v_c_1855_, v___x_1860_);
if (v___x_1861_ == 0)
{
uint32_t v___x_1862_; uint8_t v___x_1863_; 
v___x_1862_ = 114;
v___x_1863_ = lean_uint32_dec_eq(v_c_1855_, v___x_1862_);
if (v___x_1863_ == 0)
{
uint32_t v___x_1864_; uint8_t v___x_1865_; 
v___x_1864_ = 110;
v___x_1865_ = lean_uint32_dec_eq(v_c_1855_, v___x_1864_);
if (v___x_1865_ == 0)
{
uint32_t v___x_1866_; uint8_t v___x_1867_; 
v___x_1866_ = 116;
v___x_1867_ = lean_uint32_dec_eq(v_c_1855_, v___x_1866_);
return v___x_1867_;
}
else
{
return v___x_1865_;
}
}
else
{
return v___x_1863_;
}
}
else
{
return v___x_1861_;
}
}
else
{
return v___x_1859_;
}
}
else
{
return v___x_1857_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isQuotableCharDefault___boxed(lean_object* v_c_1868_){
_start:
{
uint32_t v_c_boxed_1869_; uint8_t v_res_1870_; lean_object* v_r_1871_; 
v_c_boxed_1869_ = lean_unbox_uint32(v_c_1868_);
lean_dec(v_c_1868_);
v_res_1870_ = l_Lean_Parser_isQuotableCharDefault(v_c_boxed_1869_);
v_r_1871_ = lean_box(v_res_1870_);
return v_r_1871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_quotedCharFn(lean_object* v_a_1873_, lean_object* v_a_1874_){
_start:
{
lean_object* v___x_1875_; uint8_t v___x_1876_; lean_object* v___x_1877_; 
v___x_1875_ = ((lean_object*)(l_Lean_Parser_quotedCharFn___closed__0));
v___x_1876_ = 0;
v___x_1877_ = l_Lean_Parser_quotedCharCoreFn(v___x_1875_, v___x_1876_, v_a_1873_, v_a_1874_);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_quotedStringFn(lean_object* v_a_1878_, lean_object* v_a_1879_){
_start:
{
lean_object* v___x_1880_; uint8_t v___x_1881_; lean_object* v___x_1882_; 
v___x_1880_ = ((lean_object*)(l_Lean_Parser_quotedCharFn___closed__0));
v___x_1881_ = 1;
v___x_1882_ = l_Lean_Parser_quotedCharCoreFn(v___x_1880_, v___x_1881_, v_a_1878_, v_a_1879_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkNodeToken(lean_object* v_n_1883_, lean_object* v_startPos_1884_, uint8_t v_includeWhitespace_1885_, lean_object* v_c_1886_, lean_object* v_s_1887_){
_start:
{
lean_object* v_pos_1888_; lean_object* v_errorMsg_1889_; lean_object* v___x_1890_; uint8_t v___x_1891_; 
v_pos_1888_ = lean_ctor_get(v_s_1887_, 2);
v_errorMsg_1889_ = lean_ctor_get(v_s_1887_, 4);
v___x_1890_ = lean_box(0);
v___x_1891_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1889_, v___x_1890_);
if (v___x_1891_ == 0)
{
lean_dec_ref(v_c_1886_);
lean_dec(v_startPos_1884_);
lean_dec(v_n_1883_);
return v_s_1887_;
}
else
{
lean_object* v_toInputContext_1892_; lean_object* v_inputString_1893_; lean_object* v_endPos_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1916_; 
lean_inc(v_pos_1888_);
v_toInputContext_1892_ = lean_ctor_get(v_c_1886_, 0);
lean_inc_ref(v_toInputContext_1892_);
v_inputString_1893_ = lean_ctor_get(v_toInputContext_1892_, 0);
v_endPos_1894_ = lean_ctor_get(v_toInputContext_1892_, 3);
v_isSharedCheck_1916_ = !lean_is_exclusive(v_toInputContext_1892_);
if (v_isSharedCheck_1916_ == 0)
{
lean_object* v_unused_1917_; lean_object* v_unused_1918_; 
v_unused_1917_ = lean_ctor_get(v_toInputContext_1892_, 2);
lean_dec(v_unused_1917_);
v_unused_1918_ = lean_ctor_get(v_toInputContext_1892_, 1);
lean_dec(v_unused_1918_);
v___x_1896_ = v_toInputContext_1892_;
v_isShared_1897_ = v_isSharedCheck_1916_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_endPos_1894_);
lean_inc(v_inputString_1893_);
lean_dec(v_toInputContext_1892_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1916_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v_leading_1898_; lean_object* v_val_1899_; lean_object* v___y_1901_; lean_object* v___y_1902_; lean_object* v___y_1909_; lean_object* v_pos_1910_; 
lean_inc(v_startPos_1884_);
v_leading_1898_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_1886_, v_startPos_1884_);
v_val_1899_ = lean_string_utf8_extract(v_inputString_1893_, v_startPos_1884_, v_pos_1888_);
if (v_includeWhitespace_1885_ == 0)
{
lean_dec_ref(v_c_1886_);
lean_inc(v_pos_1888_);
v___y_1909_ = v_s_1887_;
v_pos_1910_ = v_pos_1888_;
goto v___jp_1908_;
}
else
{
lean_object* v___x_1914_; lean_object* v_pos_1915_; 
v___x_1914_ = l_Lean_Parser_whitespace(v_c_1886_, v_s_1887_);
v_pos_1915_ = lean_ctor_get(v___x_1914_, 2);
lean_inc(v_pos_1915_);
v___y_1909_ = v___x_1914_;
v_pos_1910_ = v_pos_1915_;
goto v___jp_1908_;
}
v___jp_1900_:
{
lean_object* v_info_1904_; 
if (v_isShared_1897_ == 0)
{
lean_ctor_set(v___x_1896_, 3, v_pos_1888_);
lean_ctor_set(v___x_1896_, 2, v___y_1902_);
lean_ctor_set(v___x_1896_, 1, v_startPos_1884_);
lean_ctor_set(v___x_1896_, 0, v_leading_1898_);
v_info_1904_ = v___x_1896_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_leading_1898_);
lean_ctor_set(v_reuseFailAlloc_1907_, 1, v_startPos_1884_);
lean_ctor_set(v_reuseFailAlloc_1907_, 2, v___y_1902_);
lean_ctor_set(v_reuseFailAlloc_1907_, 3, v_pos_1888_);
v_info_1904_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
lean_object* v___x_1905_; lean_object* v___x_1906_; 
v___x_1905_ = l_Lean_Syntax_mkLit(v_n_1883_, v_val_1899_, v_info_1904_);
v___x_1906_ = l_Lean_Parser_ParserState_pushSyntax(v___y_1901_, v___x_1905_);
return v___x_1906_;
}
}
v___jp_1908_:
{
uint8_t v___x_1911_; 
v___x_1911_ = lean_nat_dec_le(v_pos_1910_, v_endPos_1894_);
if (v___x_1911_ == 0)
{
lean_object* v___x_1912_; 
lean_dec(v_pos_1910_);
lean_inc(v_pos_1888_);
v___x_1912_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1912_, 0, v_inputString_1893_);
lean_ctor_set(v___x_1912_, 1, v_pos_1888_);
lean_ctor_set(v___x_1912_, 2, v_endPos_1894_);
v___y_1901_ = v___y_1909_;
v___y_1902_ = v___x_1912_;
goto v___jp_1900_;
}
else
{
lean_object* v___x_1913_; 
lean_dec(v_endPos_1894_);
lean_inc(v_pos_1888_);
v___x_1913_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1913_, 0, v_inputString_1893_);
lean_ctor_set(v___x_1913_, 1, v_pos_1888_);
lean_ctor_set(v___x_1913_, 2, v_pos_1910_);
v___y_1901_ = v___y_1909_;
v___y_1902_ = v___x_1913_;
goto v___jp_1900_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkNodeToken___boxed(lean_object* v_n_1919_, lean_object* v_startPos_1920_, lean_object* v_includeWhitespace_1921_, lean_object* v_c_1922_, lean_object* v_s_1923_){
_start:
{
uint8_t v_includeWhitespace_boxed_1924_; lean_object* v_res_1925_; 
v_includeWhitespace_boxed_1924_ = lean_unbox(v_includeWhitespace_1921_);
v_res_1925_ = l_Lean_Parser_mkNodeToken(v_n_1919_, v_startPos_1920_, v_includeWhitespace_boxed_1924_, v_c_1922_, v_s_1923_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_charLitFnAux(lean_object* v_startPos_1930_, lean_object* v_c_1931_, lean_object* v_s_1932_){
_start:
{
lean_object* v_pos_1933_; lean_object* v_toInputContext_1934_; uint8_t v___x_1935_; 
v_pos_1933_ = lean_ctor_get(v_s_1932_, 2);
v_toInputContext_1934_ = lean_ctor_get(v_c_1931_, 0);
v___x_1935_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1934_, v_pos_1933_);
if (v___x_1935_ == 0)
{
lean_object* v_inputString_1936_; uint8_t v___x_1937_; lean_object* v___y_1939_; uint32_t v_curr_1954_; lean_object* v___x_1955_; lean_object* v_s_1956_; uint32_t v___x_1957_; uint8_t v___x_1958_; 
v_inputString_1936_ = lean_ctor_get(v_toInputContext_1934_, 0);
v___x_1937_ = 1;
v_curr_1954_ = lean_string_utf8_get_fast(v_inputString_1936_, v_pos_1933_);
v___x_1955_ = lean_string_utf8_next_fast(v_inputString_1936_, v_pos_1933_);
v_s_1956_ = l_Lean_Parser_ParserState_setPos(v_s_1932_, v___x_1955_);
v___x_1957_ = 92;
v___x_1958_ = lean_uint32_dec_eq(v_curr_1954_, v___x_1957_);
if (v___x_1958_ == 0)
{
v___y_1939_ = v_s_1956_;
goto v___jp_1938_;
}
else
{
lean_object* v___x_1959_; 
lean_inc_ref(v_c_1931_);
v___x_1959_ = l_Lean_Parser_quotedCharFn(v_c_1931_, v_s_1956_);
v___y_1939_ = v___x_1959_;
goto v___jp_1938_;
}
v___jp_1938_:
{
lean_object* v_pos_1940_; lean_object* v_errorMsg_1941_; lean_object* v___x_1942_; uint8_t v___x_1943_; 
v_pos_1940_ = lean_ctor_get(v___y_1939_, 2);
v_errorMsg_1941_ = lean_ctor_get(v___y_1939_, 4);
v___x_1942_ = lean_box(0);
v___x_1943_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1941_, v___x_1942_);
if (v___x_1943_ == 0)
{
lean_dec_ref(v_c_1931_);
lean_dec(v_startPos_1930_);
return v___y_1939_;
}
else
{
uint32_t v_curr_1944_; lean_object* v___x_1945_; lean_object* v_s_1946_; uint32_t v___x_1947_; uint8_t v___x_1948_; 
v_curr_1944_ = lean_string_utf8_get(v_inputString_1936_, v_pos_1940_);
v___x_1945_ = lean_string_utf8_next(v_inputString_1936_, v_pos_1940_);
v_s_1946_ = l_Lean_Parser_ParserState_setPos(v___y_1939_, v___x_1945_);
v___x_1947_ = 39;
v___x_1948_ = lean_uint32_dec_eq(v_curr_1944_, v___x_1947_);
if (v___x_1948_ == 0)
{
lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
lean_dec_ref(v_c_1931_);
lean_dec(v_startPos_1930_);
v___x_1949_ = ((lean_object*)(l_Lean_Parser_charLitFnAux___closed__0));
v___x_1950_ = lean_box(0);
v___x_1951_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1946_, v___x_1949_, v___x_1950_, v___x_1937_);
return v___x_1951_;
}
else
{
lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1952_ = ((lean_object*)(l_Lean_Parser_charLitFnAux___closed__2));
v___x_1953_ = l_Lean_Parser_mkNodeToken(v___x_1952_, v_startPos_1930_, v___x_1937_, v_c_1931_, v_s_1946_);
return v___x_1953_;
}
}
}
}
else
{
lean_object* v___x_1960_; lean_object* v___x_1961_; 
lean_dec_ref(v_c_1931_);
lean_dec(v_startPos_1930_);
v___x_1960_ = lean_box(0);
v___x_1961_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1932_, v___x_1960_);
return v___x_1961_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLitFnAux___boxed(lean_object* v_startPos_1966_, lean_object* v_includeWhitespace_1967_, lean_object* v_c_1968_, lean_object* v_s_1969_){
_start:
{
uint8_t v_includeWhitespace_boxed_1970_; lean_object* v_res_1971_; 
v_includeWhitespace_boxed_1970_ = lean_unbox(v_includeWhitespace_1967_);
v_res_1971_ = l_Lean_Parser_strLitFnAux(v_startPos_1966_, v_includeWhitespace_boxed_1970_, v_c_1968_, v_s_1969_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLitFnAux(lean_object* v_startPos_1972_, uint8_t v_includeWhitespace_1973_, lean_object* v_c_1974_, lean_object* v_s_1975_){
_start:
{
lean_object* v_pos_1976_; lean_object* v_toInputContext_1977_; uint8_t v___x_1978_; 
v_pos_1976_ = lean_ctor_get(v_s_1975_, 2);
v_toInputContext_1977_ = lean_ctor_get(v_c_1974_, 0);
v___x_1978_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1977_, v_pos_1976_);
if (v___x_1978_ == 0)
{
lean_object* v_inputString_1979_; uint32_t v_curr_1980_; lean_object* v___x_1981_; lean_object* v_s_1982_; uint32_t v___x_1983_; uint8_t v___x_1984_; 
v_inputString_1979_ = lean_ctor_get(v_toInputContext_1977_, 0);
v_curr_1980_ = lean_string_utf8_get_fast(v_inputString_1979_, v_pos_1976_);
v___x_1981_ = lean_string_utf8_next_fast(v_inputString_1979_, v_pos_1976_);
v_s_1982_ = l_Lean_Parser_ParserState_setPos(v_s_1975_, v___x_1981_);
v___x_1983_ = 34;
v___x_1984_ = lean_uint32_dec_eq(v_curr_1980_, v___x_1983_);
if (v___x_1984_ == 0)
{
uint32_t v___x_1985_; uint8_t v___x_1986_; 
v___x_1985_ = 92;
v___x_1986_ = lean_uint32_dec_eq(v_curr_1980_, v___x_1985_);
if (v___x_1986_ == 0)
{
v_s_1975_ = v_s_1982_;
goto _start;
}
else
{
lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; 
v___x_1988_ = lean_alloc_closure((void*)(l_Lean_Parser_quotedStringFn), 2, 0);
v___x_1989_ = lean_box(v_includeWhitespace_1973_);
v___x_1990_ = lean_alloc_closure((void*)(l_Lean_Parser_strLitFnAux___boxed), 4, 2);
lean_closure_set(v___x_1990_, 0, v_startPos_1972_);
lean_closure_set(v___x_1990_, 1, v___x_1989_);
v___x_1991_ = l_Lean_Parser_andthenFn(v___x_1988_, v___x_1990_, v_c_1974_, v_s_1982_);
return v___x_1991_;
}
}
else
{
lean_object* v___x_1992_; lean_object* v___x_1993_; 
v___x_1992_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__1));
v___x_1993_ = l_Lean_Parser_mkNodeToken(v___x_1992_, v_startPos_1972_, v_includeWhitespace_1973_, v_c_1974_, v_s_1982_);
return v___x_1993_;
}
}
else
{
lean_object* v___x_1994_; lean_object* v___x_1995_; 
lean_dec_ref(v_c_1974_);
v___x_1994_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__2));
v___x_1995_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_1975_, v___x_1994_, v_startPos_1972_);
return v___x_1995_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_isRawStrLitStart(lean_object* v_c_1996_, lean_object* v_i_1997_){
_start:
{
lean_object* v_toInputContext_1998_; uint8_t v___x_1999_; 
v_toInputContext_1998_ = lean_ctor_get(v_c_1996_, 0);
v___x_1999_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1998_, v_i_1997_);
if (v___x_1999_ == 0)
{
lean_object* v_inputString_2000_; uint32_t v_curr_2001_; uint32_t v___x_2002_; uint8_t v___x_2003_; 
v_inputString_2000_ = lean_ctor_get(v_toInputContext_1998_, 0);
v_curr_2001_ = lean_string_utf8_get_fast(v_inputString_2000_, v_i_1997_);
v___x_2002_ = 35;
v___x_2003_ = lean_uint32_dec_eq(v_curr_2001_, v___x_2002_);
if (v___x_2003_ == 0)
{
uint32_t v___x_2004_; uint8_t v___x_2005_; 
lean_dec(v_i_1997_);
v___x_2004_ = 34;
v___x_2005_ = lean_uint32_dec_eq(v_curr_2001_, v___x_2004_);
return v___x_2005_;
}
else
{
lean_object* v___x_2006_; 
v___x_2006_ = lean_string_utf8_next_fast(v_inputString_2000_, v_i_1997_);
lean_dec(v_i_1997_);
v_i_1997_ = v___x_2006_;
goto _start;
}
}
else
{
uint8_t v___x_2008_; 
lean_dec(v_i_1997_);
v___x_2008_ = 0;
return v___x_2008_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isRawStrLitStart___boxed(lean_object* v_c_2009_, lean_object* v_i_2010_){
_start:
{
uint8_t v_res_2011_; lean_object* v_r_2012_; 
v_res_2011_ = l_Lean_Parser_isRawStrLitStart(v_c_2009_, v_i_2010_);
lean_dec_ref(v_c_2009_);
v_r_2012_ = lean_box(v_res_2011_);
return v_r_2012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(lean_object* v_startPos_2014_, lean_object* v_s_2015_){
_start:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2016_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated___closed__0));
v___x_2017_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_2015_, v___x_2016_, v_startPos_2014_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_closingState(lean_object* v_startPos_2018_, lean_object* v_num_2019_, lean_object* v_closingNum_2020_, lean_object* v_a_2021_, lean_object* v_a_2022_){
_start:
{
lean_object* v_pos_2023_; lean_object* v_toInputContext_2024_; uint8_t v___x_2025_; 
v_pos_2023_ = lean_ctor_get(v_a_2022_, 2);
v_toInputContext_2024_ = lean_ctor_get(v_a_2021_, 0);
v___x_2025_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2024_, v_pos_2023_);
if (v___x_2025_ == 0)
{
lean_object* v_inputString_2026_; uint32_t v_curr_2027_; lean_object* v___x_2028_; lean_object* v_s_2029_; uint32_t v___x_2030_; uint8_t v___x_2031_; 
v_inputString_2026_ = lean_ctor_get(v_toInputContext_2024_, 0);
v_curr_2027_ = lean_string_utf8_get_fast(v_inputString_2026_, v_pos_2023_);
v___x_2028_ = lean_string_utf8_next_fast(v_inputString_2026_, v_pos_2023_);
v_s_2029_ = l_Lean_Parser_ParserState_setPos(v_a_2022_, v___x_2028_);
v___x_2030_ = 35;
v___x_2031_ = lean_uint32_dec_eq(v_curr_2027_, v___x_2030_);
if (v___x_2031_ == 0)
{
uint32_t v___x_2032_; uint8_t v___x_2033_; 
lean_dec(v_closingNum_2020_);
v___x_2032_ = 34;
v___x_2033_ = lean_uint32_dec_eq(v_curr_2027_, v___x_2032_);
if (v___x_2033_ == 0)
{
lean_object* v___x_2034_; 
v___x_2034_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState(v_startPos_2018_, v_num_2019_, v_a_2021_, v_s_2029_);
return v___x_2034_;
}
else
{
lean_object* v___x_2035_; 
v___x_2035_ = lean_unsigned_to_nat(0u);
v_closingNum_2020_ = v___x_2035_;
v_a_2022_ = v_s_2029_;
goto _start;
}
}
else
{
lean_object* v___x_2037_; lean_object* v___x_2038_; uint8_t v___x_2039_; 
v___x_2037_ = lean_unsigned_to_nat(1u);
v___x_2038_ = lean_nat_add(v_closingNum_2020_, v___x_2037_);
lean_dec(v_closingNum_2020_);
v___x_2039_ = lean_nat_dec_eq(v___x_2038_, v_num_2019_);
if (v___x_2039_ == 0)
{
v_closingNum_2020_ = v___x_2038_;
v_a_2022_ = v_s_2029_;
goto _start;
}
else
{
lean_object* v___x_2041_; lean_object* v___x_2042_; 
lean_dec(v___x_2038_);
v___x_2041_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__1));
v___x_2042_ = l_Lean_Parser_mkNodeToken(v___x_2041_, v_startPos_2018_, v___x_2039_, v_a_2021_, v_s_2029_);
return v___x_2042_;
}
}
}
else
{
lean_object* v___x_2043_; 
lean_dec_ref(v_a_2021_);
lean_dec(v_closingNum_2020_);
v___x_2043_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(v_startPos_2018_, v_a_2022_);
return v___x_2043_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState(lean_object* v_startPos_2044_, lean_object* v_num_2045_, lean_object* v_a_2046_, lean_object* v_a_2047_){
_start:
{
lean_object* v_pos_2048_; lean_object* v_toInputContext_2049_; uint8_t v___x_2050_; 
v_pos_2048_ = lean_ctor_get(v_a_2047_, 2);
v_toInputContext_2049_ = lean_ctor_get(v_a_2046_, 0);
v___x_2050_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2049_, v_pos_2048_);
if (v___x_2050_ == 0)
{
lean_object* v_inputString_2051_; uint32_t v_curr_2052_; lean_object* v___x_2053_; lean_object* v_s_2054_; uint32_t v___x_2055_; uint8_t v___x_2056_; 
v_inputString_2051_ = lean_ctor_get(v_toInputContext_2049_, 0);
v_curr_2052_ = lean_string_utf8_get_fast(v_inputString_2051_, v_pos_2048_);
v___x_2053_ = lean_string_utf8_next_fast(v_inputString_2051_, v_pos_2048_);
v_s_2054_ = l_Lean_Parser_ParserState_setPos(v_a_2047_, v___x_2053_);
v___x_2055_ = 34;
v___x_2056_ = lean_uint32_dec_eq(v_curr_2052_, v___x_2055_);
if (v___x_2056_ == 0)
{
v_a_2047_ = v_s_2054_;
goto _start;
}
else
{
lean_object* v___x_2058_; uint8_t v___x_2059_; 
v___x_2058_ = lean_unsigned_to_nat(0u);
v___x_2059_ = lean_nat_dec_eq(v_num_2045_, v___x_2058_);
if (v___x_2059_ == 0)
{
lean_object* v___x_2060_; 
v___x_2060_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_closingState(v_startPos_2044_, v_num_2045_, v___x_2058_, v_a_2046_, v_s_2054_);
return v___x_2060_;
}
else
{
lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2061_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__1));
v___x_2062_ = l_Lean_Parser_mkNodeToken(v___x_2061_, v_startPos_2044_, v___x_2059_, v_a_2046_, v_s_2054_);
return v___x_2062_;
}
}
}
else
{
lean_object* v___x_2063_; 
lean_dec_ref(v_a_2046_);
v___x_2063_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(v_startPos_2044_, v_a_2047_);
return v___x_2063_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState___boxed(lean_object* v_startPos_2064_, lean_object* v_num_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_){
_start:
{
lean_object* v_res_2068_; 
v_res_2068_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState(v_startPos_2064_, v_num_2065_, v_a_2066_, v_a_2067_);
lean_dec(v_num_2065_);
return v_res_2068_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_closingState___boxed(lean_object* v_startPos_2069_, lean_object* v_num_2070_, lean_object* v_closingNum_2071_, lean_object* v_a_2072_, lean_object* v_a_2073_){
_start:
{
lean_object* v_res_2074_; 
v_res_2074_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_closingState(v_startPos_2069_, v_num_2070_, v_closingNum_2071_, v_a_2072_, v_a_2073_);
lean_dec(v_num_2070_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_initState(lean_object* v_startPos_2075_, lean_object* v_num_2076_, lean_object* v_a_2077_, lean_object* v_a_2078_){
_start:
{
lean_object* v_pos_2079_; lean_object* v_toInputContext_2080_; uint8_t v___x_2081_; 
v_pos_2079_ = lean_ctor_get(v_a_2078_, 2);
v_toInputContext_2080_ = lean_ctor_get(v_a_2077_, 0);
v___x_2081_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2080_, v_pos_2079_);
if (v___x_2081_ == 0)
{
lean_object* v_inputString_2082_; uint32_t v_curr_2083_; lean_object* v___x_2084_; lean_object* v_s_2085_; uint32_t v___x_2086_; uint8_t v___x_2087_; 
v_inputString_2082_ = lean_ctor_get(v_toInputContext_2080_, 0);
v_curr_2083_ = lean_string_utf8_get_fast(v_inputString_2082_, v_pos_2079_);
v___x_2084_ = lean_string_utf8_next_fast(v_inputString_2082_, v_pos_2079_);
v_s_2085_ = l_Lean_Parser_ParserState_setPos(v_a_2078_, v___x_2084_);
v___x_2086_ = 35;
v___x_2087_ = lean_uint32_dec_eq(v_curr_2083_, v___x_2086_);
if (v___x_2087_ == 0)
{
uint32_t v___x_2088_; uint8_t v___x_2089_; 
v___x_2088_ = 34;
v___x_2089_ = lean_uint32_dec_eq(v_curr_2083_, v___x_2088_);
if (v___x_2089_ == 0)
{
lean_object* v___x_2090_; 
lean_dec_ref(v_a_2077_);
lean_dec(v_num_2076_);
v___x_2090_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(v_startPos_2075_, v_s_2085_);
return v___x_2090_;
}
else
{
lean_object* v___x_2091_; 
v___x_2091_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState(v_startPos_2075_, v_num_2076_, v_a_2077_, v_s_2085_);
lean_dec(v_num_2076_);
return v___x_2091_;
}
}
else
{
lean_object* v___x_2092_; lean_object* v___x_2093_; 
v___x_2092_ = lean_unsigned_to_nat(1u);
v___x_2093_ = lean_nat_add(v_num_2076_, v___x_2092_);
lean_dec(v_num_2076_);
v_num_2076_ = v___x_2093_;
v_a_2078_ = v_s_2085_;
goto _start;
}
}
else
{
lean_object* v___x_2095_; 
lean_dec_ref(v_a_2077_);
lean_dec(v_num_2076_);
v___x_2095_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(v_startPos_2075_, v_a_2078_);
return v___x_2095_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawStrLitFnAux(lean_object* v_startPos_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_){
_start:
{
lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2099_ = lean_unsigned_to_nat(0u);
v___x_2100_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_initState(v_startPos_2096_, v___x_2099_, v_a_2097_, v_a_2098_);
return v___x_2100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeDigitsFn(lean_object* v_isDigit_2102_, lean_object* v_expecting_2103_, uint8_t v_needDigit_2104_, lean_object* v_c_2105_, lean_object* v_s_2106_){
_start:
{
lean_object* v_pos_2107_; lean_object* v_toInputContext_2108_; uint8_t v___x_2109_; 
v_pos_2107_ = lean_ctor_get(v_s_2106_, 2);
v_toInputContext_2108_ = lean_ctor_get(v_c_2105_, 0);
v___x_2109_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2108_, v_pos_2107_);
if (v___x_2109_ == 0)
{
lean_object* v_inputString_2110_; uint8_t v___x_2111_; uint32_t v_curr_2112_; uint32_t v___x_2113_; uint8_t v___x_2114_; 
v_inputString_2110_ = lean_ctor_get(v_toInputContext_2108_, 0);
v___x_2111_ = 1;
v_curr_2112_ = lean_string_utf8_get_fast(v_inputString_2110_, v_pos_2107_);
v___x_2113_ = 95;
v___x_2114_ = lean_uint32_dec_eq(v_curr_2112_, v___x_2113_);
if (v___x_2114_ == 0)
{
lean_object* v___x_2115_; lean_object* v___x_2116_; uint8_t v___x_2117_; 
v___x_2115_ = lean_box_uint32(v_curr_2112_);
lean_inc_ref(v_isDigit_2102_);
v___x_2116_ = lean_apply_1(v_isDigit_2102_, v___x_2115_);
v___x_2117_ = lean_unbox(v___x_2116_);
if (v___x_2117_ == 0)
{
lean_dec_ref(v_isDigit_2102_);
if (v_needDigit_2104_ == 0)
{
lean_dec_ref(v_expecting_2103_);
return v_s_2106_;
}
else
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
v___x_2118_ = ((lean_object*)(l_Lean_Parser_takeDigitsFn___closed__0));
v___x_2119_ = lean_box(0);
v___x_2120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2120_, 0, v_expecting_2103_);
lean_ctor_set(v___x_2120_, 1, v___x_2119_);
v___x_2121_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_2106_, v___x_2118_, v___x_2120_, v___x_2111_);
return v___x_2121_;
}
}
else
{
lean_object* v___x_2122_; 
lean_inc(v_pos_2107_);
v___x_2122_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_2106_, v_c_2105_, v_pos_2107_);
lean_dec(v_pos_2107_);
v_needDigit_2104_ = v___x_2114_;
v_s_2106_ = v___x_2122_;
goto _start;
}
}
else
{
lean_object* v___x_2124_; 
lean_inc(v_pos_2107_);
v___x_2124_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_2106_, v_c_2105_, v_pos_2107_);
lean_dec(v_pos_2107_);
v_needDigit_2104_ = v___x_2111_;
v_s_2106_ = v___x_2124_;
goto _start;
}
}
else
{
lean_dec_ref(v_isDigit_2102_);
if (v_needDigit_2104_ == 0)
{
lean_dec_ref(v_expecting_2103_);
return v_s_2106_;
}
else
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2126_ = lean_box(0);
v___x_2127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2127_, 0, v_expecting_2103_);
lean_ctor_set(v___x_2127_, 1, v___x_2126_);
v___x_2128_ = l_Lean_Parser_ParserState_mkEOIError(v_s_2106_, v___x_2127_);
return v___x_2128_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeDigitsFn___boxed(lean_object* v_isDigit_2129_, lean_object* v_expecting_2130_, lean_object* v_needDigit_2131_, lean_object* v_c_2132_, lean_object* v_s_2133_){
_start:
{
uint8_t v_needDigit_boxed_2134_; lean_object* v_res_2135_; 
v_needDigit_boxed_2134_ = lean_unbox(v_needDigit_2131_);
v_res_2135_ = l_Lean_Parser_takeDigitsFn(v_isDigit_2129_, v_expecting_2130_, v_needDigit_boxed_2134_, v_c_2132_, v_s_2133_);
lean_dec_ref(v_c_2132_);
return v_res_2135_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___lam__0(uint32_t v_c_2136_){
_start:
{
uint32_t v___x_2137_; uint8_t v___x_2138_; 
v___x_2137_ = 48;
v___x_2138_ = lean_uint32_dec_le(v___x_2137_, v_c_2136_);
if (v___x_2138_ == 0)
{
return v___x_2138_;
}
else
{
uint32_t v___x_2139_; uint8_t v___x_2140_; 
v___x_2139_ = 57;
v___x_2140_ = lean_uint32_dec_le(v_c_2136_, v___x_2139_);
return v___x_2140_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___lam__0___boxed(lean_object* v_c_2141_){
_start:
{
uint32_t v_c_boxed_2142_; uint8_t v_res_2143_; lean_object* v_r_2144_; 
v_c_boxed_2142_ = lean_unbox_uint32(v_c_2141_);
lean_dec(v_c_2141_);
v_res_2143_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___lam__0(v_c_boxed_2142_);
v_r_2144_ = lean_box(v_res_2143_);
return v_r_2144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp(lean_object* v_startPos_2149_, lean_object* v_c_2150_, lean_object* v_s_2151_, uint8_t v_hasBareDot_2152_){
_start:
{
lean_object* v_toInputContext_2153_; lean_object* v_pos_2154_; uint8_t v___x_2155_; 
v_toInputContext_2153_ = lean_ctor_get(v_c_2150_, 0);
v_pos_2154_ = lean_ctor_get(v_s_2151_, 2);
v___x_2155_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2153_, v_pos_2154_);
if (v___x_2155_ == 0)
{
lean_object* v_inputString_2156_; lean_object* v___f_2157_; uint8_t v___x_2158_; lean_object* v___y_2164_; lean_object* v___y_2174_; lean_object* v___y_2175_; uint32_t v_curr_2189_; uint32_t v___x_2201_; uint8_t v___x_2202_; 
v_inputString_2156_ = lean_ctor_get(v_toInputContext_2153_, 0);
v___f_2157_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0));
v___x_2158_ = 1;
v_curr_2189_ = lean_string_utf8_get_fast(v_inputString_2156_, v_pos_2154_);
v___x_2201_ = 101;
v___x_2202_ = lean_uint32_dec_eq(v_curr_2189_, v___x_2201_);
if (v___x_2202_ == 0)
{
uint32_t v___x_2203_; uint8_t v___x_2204_; 
v___x_2203_ = 69;
v___x_2204_ = lean_uint32_dec_eq(v_curr_2189_, v___x_2203_);
if (v___x_2204_ == 0)
{
if (v_hasBareDot_2152_ == 0)
{
lean_dec(v_startPos_2149_);
return v_s_2151_;
}
else
{
uint32_t v___x_2205_; uint8_t v___x_2206_; 
v___x_2205_ = 65;
v___x_2206_ = lean_uint32_dec_le(v___x_2205_, v_curr_2189_);
if (v___x_2206_ == 0)
{
goto v___jp_2196_;
}
else
{
uint32_t v___x_2207_; uint8_t v___x_2208_; 
v___x_2207_ = 90;
v___x_2208_ = lean_uint32_dec_le(v_curr_2189_, v___x_2207_);
if (v___x_2208_ == 0)
{
goto v___jp_2196_;
}
else
{
goto v___jp_2184_;
}
}
}
}
else
{
lean_dec(v_startPos_2149_);
goto v___jp_2177_;
}
}
else
{
lean_dec(v_startPos_2149_);
goto v___jp_2177_;
}
v___jp_2159_:
{
lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; 
v___x_2160_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__1));
v___x_2161_ = lean_box(0);
v___x_2162_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_2151_, v___x_2160_, v___x_2161_, v___x_2158_);
return v___x_2162_;
}
v___jp_2163_:
{
uint32_t v_curr_2165_; uint32_t v___x_2166_; uint8_t v___x_2167_; 
v_curr_2165_ = lean_string_utf8_get(v_inputString_2156_, v___y_2164_);
v___x_2166_ = 48;
v___x_2167_ = lean_uint32_dec_le(v___x_2166_, v_curr_2165_);
if (v___x_2167_ == 0)
{
lean_dec(v___y_2164_);
goto v___jp_2159_;
}
else
{
uint32_t v___x_2168_; uint8_t v___x_2169_; 
v___x_2168_ = 57;
v___x_2169_ = lean_uint32_dec_le(v_curr_2165_, v___x_2168_);
if (v___x_2169_ == 0)
{
lean_dec(v___y_2164_);
goto v___jp_2159_;
}
else
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2170_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__2));
v___x_2171_ = l_Lean_Parser_ParserState_setPos(v_s_2151_, v___y_2164_);
v___x_2172_ = l_Lean_Parser_takeDigitsFn(v___f_2157_, v___x_2170_, v___x_2155_, v_c_2150_, v___x_2171_);
return v___x_2172_;
}
}
}
v___jp_2173_:
{
lean_object* v___x_2176_; 
v___x_2176_ = lean_string_utf8_next(v___y_2175_, v___y_2174_);
lean_dec(v___y_2174_);
v___y_2164_ = v___x_2176_;
goto v___jp_2163_;
}
v___jp_2177_:
{
lean_object* v_i_2178_; uint32_t v___x_2179_; uint32_t v___x_2180_; uint8_t v___x_2181_; 
v_i_2178_ = lean_string_utf8_next(v_inputString_2156_, v_pos_2154_);
v___x_2179_ = lean_string_utf8_get(v_inputString_2156_, v_i_2178_);
v___x_2180_ = 45;
v___x_2181_ = lean_uint32_dec_eq(v___x_2179_, v___x_2180_);
if (v___x_2181_ == 0)
{
uint32_t v___x_2182_; uint8_t v___x_2183_; 
v___x_2182_ = 43;
v___x_2183_ = lean_uint32_dec_eq(v___x_2179_, v___x_2182_);
if (v___x_2183_ == 0)
{
v___y_2164_ = v_i_2178_;
goto v___jp_2163_;
}
else
{
v___y_2174_ = v_i_2178_;
v___y_2175_ = v_inputString_2156_;
goto v___jp_2173_;
}
}
else
{
v___y_2174_ = v_i_2178_;
v___y_2175_ = v_inputString_2156_;
goto v___jp_2173_;
}
}
v___jp_2184_:
{
lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; 
v___x_2185_ = l_Lean_Parser_ParserState_setPos(v_s_2151_, v_startPos_2149_);
v___x_2186_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__3));
v___x_2187_ = lean_box(0);
v___x_2188_ = l_Lean_Parser_ParserState_mkUnexpectedError(v___x_2185_, v___x_2186_, v___x_2187_, v___x_2158_);
return v___x_2188_;
}
v___jp_2190_:
{
uint32_t v___x_2191_; uint8_t v___x_2192_; 
v___x_2191_ = 95;
v___x_2192_ = lean_uint32_dec_eq(v_curr_2189_, v___x_2191_);
if (v___x_2192_ == 0)
{
uint8_t v___x_2193_; 
v___x_2193_ = l_Lean_isLetterLike(v_curr_2189_);
if (v___x_2193_ == 0)
{
uint32_t v___x_2194_; uint8_t v___x_2195_; 
v___x_2194_ = l_Lean_idBeginEscape;
v___x_2195_ = lean_uint32_dec_eq(v_curr_2189_, v___x_2194_);
if (v___x_2195_ == 0)
{
lean_dec(v_startPos_2149_);
return v_s_2151_;
}
else
{
goto v___jp_2184_;
}
}
else
{
goto v___jp_2184_;
}
}
else
{
goto v___jp_2184_;
}
}
v___jp_2196_:
{
uint32_t v___x_2197_; uint8_t v___x_2198_; 
v___x_2197_ = 97;
v___x_2198_ = lean_uint32_dec_le(v___x_2197_, v_curr_2189_);
if (v___x_2198_ == 0)
{
goto v___jp_2190_;
}
else
{
uint32_t v___x_2199_; uint8_t v___x_2200_; 
v___x_2199_ = 122;
v___x_2200_ = lean_uint32_dec_le(v_curr_2189_, v___x_2199_);
if (v___x_2200_ == 0)
{
goto v___jp_2190_;
}
else
{
goto v___jp_2184_;
}
}
}
}
else
{
lean_dec(v_startPos_2149_);
return v_s_2151_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___boxed(lean_object* v_startPos_2209_, lean_object* v_c_2210_, lean_object* v_s_2211_, lean_object* v_hasBareDot_2212_){
_start:
{
uint8_t v_hasBareDot_boxed_2213_; lean_object* v_res_2214_; 
v_hasBareDot_boxed_2213_ = lean_unbox(v_hasBareDot_2212_);
v_res_2214_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp(v_startPos_2209_, v_c_2210_, v_s_2211_, v_hasBareDot_boxed_2213_);
lean_dec_ref(v_c_2210_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptDot(lean_object* v_c_2215_, lean_object* v_s_2216_){
_start:
{
lean_object* v_toInputContext_2217_; lean_object* v_pos_2218_; lean_object* v_inputString_2219_; uint32_t v_curr_2220_; uint32_t v___x_2221_; uint8_t v___x_2222_; 
v_toInputContext_2217_ = lean_ctor_get(v_c_2215_, 0);
v_pos_2218_ = lean_ctor_get(v_s_2216_, 2);
v_inputString_2219_ = lean_ctor_get(v_toInputContext_2217_, 0);
v_curr_2220_ = lean_string_utf8_get(v_inputString_2219_, v_pos_2218_);
v___x_2221_ = 46;
v___x_2222_ = lean_uint32_dec_eq(v_curr_2220_, v___x_2221_);
if (v___x_2222_ == 0)
{
lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2223_ = lean_box(v___x_2222_);
v___x_2224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2224_, 0, v_s_2216_);
lean_ctor_set(v___x_2224_, 1, v___x_2223_);
return v___x_2224_;
}
else
{
lean_object* v_i_2225_; uint32_t v_curr_2230_; uint32_t v___x_2231_; uint8_t v___x_2232_; 
v_i_2225_ = lean_string_utf8_next(v_inputString_2219_, v_pos_2218_);
v_curr_2230_ = lean_string_utf8_get(v_inputString_2219_, v_i_2225_);
v___x_2231_ = 48;
v___x_2232_ = lean_uint32_dec_le(v___x_2231_, v_curr_2230_);
if (v___x_2232_ == 0)
{
goto v___jp_2226_;
}
else
{
uint32_t v___x_2233_; uint8_t v___x_2234_; 
v___x_2233_ = 57;
v___x_2234_ = lean_uint32_dec_le(v_curr_2230_, v___x_2233_);
if (v___x_2234_ == 0)
{
goto v___jp_2226_;
}
else
{
lean_object* v___f_2235_; lean_object* v___x_2236_; uint8_t v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; 
v___f_2235_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0));
v___x_2236_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__2));
v___x_2237_ = 0;
v___x_2238_ = l_Lean_Parser_ParserState_setPos(v_s_2216_, v_i_2225_);
v___x_2239_ = l_Lean_Parser_takeDigitsFn(v___f_2235_, v___x_2236_, v___x_2237_, v_c_2215_, v___x_2238_);
v___x_2240_ = lean_box(v___x_2237_);
v___x_2241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2239_);
lean_ctor_set(v___x_2241_, 1, v___x_2240_);
return v___x_2241_;
}
}
v___jp_2226_:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2227_ = l_Lean_Parser_ParserState_setPos(v_s_2216_, v_i_2225_);
v___x_2228_ = lean_box(v___x_2222_);
v___x_2229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2229_, 0, v___x_2227_);
lean_ctor_set(v___x_2229_, 1, v___x_2228_);
return v___x_2229_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptDot___boxed(lean_object* v_c_2242_, lean_object* v_s_2243_){
_start:
{
lean_object* v_res_2244_; 
v_res_2244_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptDot(v_c_2242_, v_s_2243_);
lean_dec_ref(v_c_2242_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(lean_object* v_startPos_2248_, uint8_t v_includeWhitespace_2249_, lean_object* v_c_2250_, lean_object* v_s_2251_){
_start:
{
lean_object* v___x_2252_; lean_object* v_fst_2253_; lean_object* v_snd_2254_; uint8_t v___x_2255_; lean_object* v_s_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___x_2252_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptDot(v_c_2250_, v_s_2251_);
v_fst_2253_ = lean_ctor_get(v___x_2252_, 0);
lean_inc(v_fst_2253_);
v_snd_2254_ = lean_ctor_get(v___x_2252_, 1);
lean_inc(v_snd_2254_);
lean_dec_ref(v___x_2252_);
v___x_2255_ = lean_unbox(v_snd_2254_);
lean_dec(v_snd_2254_);
lean_inc(v_startPos_2248_);
v_s_2256_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp(v_startPos_2248_, v_c_2250_, v_fst_2253_, v___x_2255_);
v___x_2257_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__1));
v___x_2258_ = l_Lean_Parser_mkNodeToken(v___x_2257_, v_startPos_2248_, v_includeWhitespace_2249_, v_c_2250_, v_s_2256_);
return v___x_2258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___boxed(lean_object* v_startPos_2259_, lean_object* v_includeWhitespace_2260_, lean_object* v_c_2261_, lean_object* v_s_2262_){
_start:
{
uint8_t v_includeWhitespace_boxed_2263_; lean_object* v_res_2264_; 
v_includeWhitespace_boxed_2263_ = lean_unbox(v_includeWhitespace_2260_);
v_res_2264_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(v_startPos_2259_, v_includeWhitespace_boxed_2263_, v_c_2261_, v_s_2262_);
return v_res_2264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_decimalNumberFn(lean_object* v_startPos_2268_, uint8_t v_includeWhitespace_2269_, lean_object* v_c_2270_, lean_object* v_s_2271_){
_start:
{
lean_object* v___f_2272_; lean_object* v___x_2273_; uint8_t v___x_2274_; lean_object* v_s_2275_; lean_object* v_pos_2276_; lean_object* v_toInputContext_2277_; uint8_t v___x_2278_; 
v___f_2272_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0));
v___x_2273_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__2));
v___x_2274_ = 0;
v_s_2275_ = l_Lean_Parser_takeDigitsFn(v___f_2272_, v___x_2273_, v___x_2274_, v_c_2270_, v_s_2271_);
v_pos_2276_ = lean_ctor_get(v_s_2275_, 2);
v_toInputContext_2277_ = lean_ctor_get(v_c_2270_, 0);
v___x_2278_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2277_, v_pos_2276_);
if (v___x_2278_ == 0)
{
lean_object* v_inputString_2279_; uint32_t v_curr_2280_; lean_object* v_j_2293_; uint8_t v___x_2294_; 
v_inputString_2279_ = lean_ctor_get(v_toInputContext_2277_, 0);
v_curr_2280_ = lean_string_utf8_get_fast(v_inputString_2279_, v_pos_2276_);
v_j_2293_ = lean_string_utf8_next(v_inputString_2279_, v_pos_2276_);
v___x_2294_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2277_, v_j_2293_);
if (v___x_2294_ == 0)
{
uint32_t v___x_2295_; uint8_t v___x_2296_; 
v___x_2295_ = 46;
v___x_2296_ = lean_uint32_dec_eq(v_curr_2280_, v___x_2295_);
if (v___x_2296_ == 0)
{
lean_dec(v_j_2293_);
goto v___jp_2281_;
}
else
{
uint32_t v___x_2297_; uint8_t v___x_2298_; 
v___x_2297_ = lean_string_utf8_get_fast(v_inputString_2279_, v_j_2293_);
lean_dec(v_j_2293_);
v___x_2298_ = lean_uint32_dec_eq(v___x_2297_, v___x_2295_);
if (v___x_2298_ == 0)
{
goto v___jp_2281_;
}
else
{
lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2299_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2300_ = l_Lean_Parser_mkNodeToken(v___x_2299_, v_startPos_2268_, v_includeWhitespace_2269_, v_c_2270_, v_s_2275_);
return v___x_2300_;
}
}
}
else
{
lean_dec(v_j_2293_);
goto v___jp_2281_;
}
v___jp_2281_:
{
uint32_t v___x_2282_; uint8_t v___x_2283_; 
v___x_2282_ = 46;
v___x_2283_ = lean_uint32_dec_eq(v_curr_2280_, v___x_2282_);
if (v___x_2283_ == 0)
{
uint32_t v___x_2284_; uint8_t v___x_2285_; 
v___x_2284_ = 101;
v___x_2285_ = lean_uint32_dec_eq(v_curr_2280_, v___x_2284_);
if (v___x_2285_ == 0)
{
uint32_t v___x_2286_; uint8_t v___x_2287_; 
v___x_2286_ = 69;
v___x_2287_ = lean_uint32_dec_eq(v_curr_2280_, v___x_2286_);
if (v___x_2287_ == 0)
{
lean_object* v___x_2288_; lean_object* v___x_2289_; 
v___x_2288_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2289_ = l_Lean_Parser_mkNodeToken(v___x_2288_, v_startPos_2268_, v_includeWhitespace_2269_, v_c_2270_, v_s_2275_);
return v___x_2289_;
}
else
{
lean_object* v___x_2290_; 
v___x_2290_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(v_startPos_2268_, v_includeWhitespace_2269_, v_c_2270_, v_s_2275_);
return v___x_2290_;
}
}
else
{
lean_object* v___x_2291_; 
v___x_2291_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(v_startPos_2268_, v_includeWhitespace_2269_, v_c_2270_, v_s_2275_);
return v___x_2291_;
}
}
else
{
lean_object* v___x_2292_; 
v___x_2292_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(v_startPos_2268_, v_includeWhitespace_2269_, v_c_2270_, v_s_2275_);
return v___x_2292_;
}
}
}
else
{
lean_object* v___x_2301_; lean_object* v___x_2302_; 
v___x_2301_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2302_ = l_Lean_Parser_mkNodeToken(v___x_2301_, v_startPos_2268_, v___x_2278_, v_c_2270_, v_s_2275_);
return v___x_2302_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_decimalNumberFn___boxed(lean_object* v_startPos_2303_, lean_object* v_includeWhitespace_2304_, lean_object* v_c_2305_, lean_object* v_s_2306_){
_start:
{
uint8_t v_includeWhitespace_boxed_2307_; lean_object* v_res_2308_; 
v_includeWhitespace_boxed_2307_ = lean_unbox(v_includeWhitespace_2304_);
v_res_2308_ = l_Lean_Parser_decimalNumberFn(v_startPos_2303_, v_includeWhitespace_boxed_2307_, v_c_2305_, v_s_2306_);
return v_res_2308_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_binNumberFn___lam__0(uint32_t v_c_2309_){
_start:
{
uint32_t v___x_2310_; uint8_t v___x_2311_; 
v___x_2310_ = 48;
v___x_2311_ = lean_uint32_dec_eq(v_c_2309_, v___x_2310_);
if (v___x_2311_ == 0)
{
uint32_t v___x_2312_; uint8_t v___x_2313_; 
v___x_2312_ = 49;
v___x_2313_ = lean_uint32_dec_eq(v_c_2309_, v___x_2312_);
return v___x_2313_;
}
else
{
return v___x_2311_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_binNumberFn___lam__0___boxed(lean_object* v_c_2314_){
_start:
{
uint32_t v_c_boxed_2315_; uint8_t v_res_2316_; lean_object* v_r_2317_; 
v_c_boxed_2315_ = lean_unbox_uint32(v_c_2314_);
lean_dec(v_c_2314_);
v_res_2316_ = l_Lean_Parser_binNumberFn___lam__0(v_c_boxed_2315_);
v_r_2317_ = lean_box(v_res_2316_);
return v_r_2317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_binNumberFn(lean_object* v_startPos_2320_, uint8_t v_includeWhitespace_2321_, lean_object* v_c_2322_, lean_object* v_s_2323_){
_start:
{
lean_object* v___f_2324_; lean_object* v___x_2325_; uint8_t v___x_2326_; lean_object* v_s_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; 
v___f_2324_ = ((lean_object*)(l_Lean_Parser_binNumberFn___closed__0));
v___x_2325_ = ((lean_object*)(l_Lean_Parser_binNumberFn___closed__1));
v___x_2326_ = 1;
v_s_2327_ = l_Lean_Parser_takeDigitsFn(v___f_2324_, v___x_2325_, v___x_2326_, v_c_2322_, v_s_2323_);
v___x_2328_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2329_ = l_Lean_Parser_mkNodeToken(v___x_2328_, v_startPos_2320_, v_includeWhitespace_2321_, v_c_2322_, v_s_2327_);
return v___x_2329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_binNumberFn___boxed(lean_object* v_startPos_2330_, lean_object* v_includeWhitespace_2331_, lean_object* v_c_2332_, lean_object* v_s_2333_){
_start:
{
uint8_t v_includeWhitespace_boxed_2334_; lean_object* v_res_2335_; 
v_includeWhitespace_boxed_2334_ = lean_unbox(v_includeWhitespace_2331_);
v_res_2335_ = l_Lean_Parser_binNumberFn(v_startPos_2330_, v_includeWhitespace_boxed_2334_, v_c_2332_, v_s_2333_);
return v_res_2335_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_octalNumberFn___lam__0(uint32_t v_c_2336_){
_start:
{
uint32_t v___x_2337_; uint8_t v___x_2338_; 
v___x_2337_ = 48;
v___x_2338_ = lean_uint32_dec_le(v___x_2337_, v_c_2336_);
if (v___x_2338_ == 0)
{
return v___x_2338_;
}
else
{
uint32_t v___x_2339_; uint8_t v___x_2340_; 
v___x_2339_ = 55;
v___x_2340_ = lean_uint32_dec_le(v_c_2336_, v___x_2339_);
return v___x_2340_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_octalNumberFn___lam__0___boxed(lean_object* v_c_2341_){
_start:
{
uint32_t v_c_boxed_2342_; uint8_t v_res_2343_; lean_object* v_r_2344_; 
v_c_boxed_2342_ = lean_unbox_uint32(v_c_2341_);
lean_dec(v_c_2341_);
v_res_2343_ = l_Lean_Parser_octalNumberFn___lam__0(v_c_boxed_2342_);
v_r_2344_ = lean_box(v_res_2343_);
return v_r_2344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_octalNumberFn(lean_object* v_startPos_2347_, uint8_t v_includeWhitespace_2348_, lean_object* v_c_2349_, lean_object* v_s_2350_){
_start:
{
lean_object* v___f_2351_; lean_object* v___x_2352_; uint8_t v___x_2353_; lean_object* v_s_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; 
v___f_2351_ = ((lean_object*)(l_Lean_Parser_octalNumberFn___closed__0));
v___x_2352_ = ((lean_object*)(l_Lean_Parser_octalNumberFn___closed__1));
v___x_2353_ = 1;
v_s_2354_ = l_Lean_Parser_takeDigitsFn(v___f_2351_, v___x_2352_, v___x_2353_, v_c_2349_, v_s_2350_);
v___x_2355_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2356_ = l_Lean_Parser_mkNodeToken(v___x_2355_, v_startPos_2347_, v_includeWhitespace_2348_, v_c_2349_, v_s_2354_);
return v___x_2356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_octalNumberFn___boxed(lean_object* v_startPos_2357_, lean_object* v_includeWhitespace_2358_, lean_object* v_c_2359_, lean_object* v_s_2360_){
_start:
{
uint8_t v_includeWhitespace_boxed_2361_; lean_object* v_res_2362_; 
v_includeWhitespace_boxed_2361_ = lean_unbox(v_includeWhitespace_2358_);
v_res_2362_ = l_Lean_Parser_octalNumberFn(v_startPos_2357_, v_includeWhitespace_boxed_2361_, v_c_2359_, v_s_2360_);
return v_res_2362_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_isHexDigit(uint32_t v_c_2363_){
_start:
{
uint32_t v___x_2374_; uint8_t v___x_2375_; 
v___x_2374_ = 48;
v___x_2375_ = lean_uint32_dec_le(v___x_2374_, v_c_2363_);
if (v___x_2375_ == 0)
{
goto v___jp_2369_;
}
else
{
uint32_t v___x_2376_; uint8_t v___x_2377_; 
v___x_2376_ = 57;
v___x_2377_ = lean_uint32_dec_le(v_c_2363_, v___x_2376_);
if (v___x_2377_ == 0)
{
goto v___jp_2369_;
}
else
{
return v___x_2377_;
}
}
v___jp_2364_:
{
uint32_t v___x_2365_; uint8_t v___x_2366_; 
v___x_2365_ = 65;
v___x_2366_ = lean_uint32_dec_le(v___x_2365_, v_c_2363_);
if (v___x_2366_ == 0)
{
return v___x_2366_;
}
else
{
uint32_t v___x_2367_; uint8_t v___x_2368_; 
v___x_2367_ = 70;
v___x_2368_ = lean_uint32_dec_le(v_c_2363_, v___x_2367_);
return v___x_2368_;
}
}
v___jp_2369_:
{
uint32_t v___x_2370_; uint8_t v___x_2371_; 
v___x_2370_ = 97;
v___x_2371_ = lean_uint32_dec_le(v___x_2370_, v_c_2363_);
if (v___x_2371_ == 0)
{
goto v___jp_2364_;
}
else
{
uint32_t v___x_2372_; uint8_t v___x_2373_; 
v___x_2372_ = 102;
v___x_2373_ = lean_uint32_dec_le(v_c_2363_, v___x_2372_);
if (v___x_2373_ == 0)
{
goto v___jp_2364_;
}
else
{
return v___x_2373_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_isHexDigit___boxed(lean_object* v_c_2378_){
_start:
{
uint32_t v_c_boxed_2379_; uint8_t v_res_2380_; lean_object* v_r_2381_; 
v_c_boxed_2379_ = lean_unbox_uint32(v_c_2378_);
lean_dec(v_c_2378_);
v_res_2380_ = l___private_Lean_Parser_Basic_0__Lean_Parser_isHexDigit(v_c_boxed_2379_);
v_r_2381_ = lean_box(v_res_2380_);
return v_r_2381_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_hexNumberFn___lam__0(uint32_t v___y_2382_){
_start:
{
uint32_t v___x_2393_; uint8_t v___x_2394_; 
v___x_2393_ = 48;
v___x_2394_ = lean_uint32_dec_le(v___x_2393_, v___y_2382_);
if (v___x_2394_ == 0)
{
goto v___jp_2388_;
}
else
{
uint32_t v___x_2395_; uint8_t v___x_2396_; 
v___x_2395_ = 57;
v___x_2396_ = lean_uint32_dec_le(v___y_2382_, v___x_2395_);
if (v___x_2396_ == 0)
{
goto v___jp_2388_;
}
else
{
return v___x_2396_;
}
}
v___jp_2383_:
{
uint32_t v___x_2384_; uint8_t v___x_2385_; 
v___x_2384_ = 65;
v___x_2385_ = lean_uint32_dec_le(v___x_2384_, v___y_2382_);
if (v___x_2385_ == 0)
{
return v___x_2385_;
}
else
{
uint32_t v___x_2386_; uint8_t v___x_2387_; 
v___x_2386_ = 70;
v___x_2387_ = lean_uint32_dec_le(v___y_2382_, v___x_2386_);
return v___x_2387_;
}
}
v___jp_2388_:
{
uint32_t v___x_2389_; uint8_t v___x_2390_; 
v___x_2389_ = 97;
v___x_2390_ = lean_uint32_dec_le(v___x_2389_, v___y_2382_);
if (v___x_2390_ == 0)
{
goto v___jp_2383_;
}
else
{
uint32_t v___x_2391_; uint8_t v___x_2392_; 
v___x_2391_ = 102;
v___x_2392_ = lean_uint32_dec_le(v___y_2382_, v___x_2391_);
if (v___x_2392_ == 0)
{
goto v___jp_2383_;
}
else
{
return v___x_2392_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hexNumberFn___lam__0___boxed(lean_object* v___y_2397_){
_start:
{
uint32_t v___y_50__boxed_2398_; uint8_t v_res_2399_; lean_object* v_r_2400_; 
v___y_50__boxed_2398_ = lean_unbox_uint32(v___y_2397_);
lean_dec(v___y_2397_);
v_res_2399_ = l_Lean_Parser_hexNumberFn___lam__0(v___y_50__boxed_2398_);
v_r_2400_ = lean_box(v_res_2399_);
return v_r_2400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hexNumberFn(lean_object* v_startPos_2403_, uint8_t v_includeWhitespace_2404_, lean_object* v_kind_2405_, lean_object* v_c_2406_, lean_object* v_s_2407_){
_start:
{
lean_object* v___f_2408_; lean_object* v___x_2409_; uint8_t v___x_2410_; lean_object* v_s_2411_; lean_object* v___x_2412_; 
v___f_2408_ = ((lean_object*)(l_Lean_Parser_hexNumberFn___closed__0));
v___x_2409_ = ((lean_object*)(l_Lean_Parser_hexNumberFn___closed__1));
v___x_2410_ = 1;
v_s_2411_ = l_Lean_Parser_takeDigitsFn(v___f_2408_, v___x_2409_, v___x_2410_, v_c_2406_, v_s_2407_);
v___x_2412_ = l_Lean_Parser_mkNodeToken(v_kind_2405_, v_startPos_2403_, v_includeWhitespace_2404_, v_c_2406_, v_s_2411_);
return v___x_2412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hexNumberFn___boxed(lean_object* v_startPos_2413_, lean_object* v_includeWhitespace_2414_, lean_object* v_kind_2415_, lean_object* v_c_2416_, lean_object* v_s_2417_){
_start:
{
uint8_t v_includeWhitespace_boxed_2418_; lean_object* v_res_2419_; 
v_includeWhitespace_boxed_2418_ = lean_unbox(v_includeWhitespace_2414_);
v_res_2419_ = l_Lean_Parser_hexNumberFn(v_startPos_2413_, v_includeWhitespace_boxed_2418_, v_kind_2415_, v_c_2416_, v_s_2417_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numberFnAux(uint8_t v_includeWhitespace_2421_, lean_object* v_c_2422_, lean_object* v_s_2423_){
_start:
{
lean_object* v_pos_2427_; lean_object* v_toInputContext_2428_; uint8_t v___x_2429_; 
v_pos_2427_ = lean_ctor_get(v_s_2423_, 2);
v_toInputContext_2428_ = lean_ctor_get(v_c_2422_, 0);
v___x_2429_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2428_, v_pos_2427_);
if (v___x_2429_ == 0)
{
lean_object* v_inputString_2430_; uint32_t v_curr_2431_; uint32_t v___x_2432_; uint8_t v___x_2433_; 
v_inputString_2430_ = lean_ctor_get(v_toInputContext_2428_, 0);
v_curr_2431_ = lean_string_utf8_get_fast(v_inputString_2430_, v_pos_2427_);
v___x_2432_ = 48;
v___x_2433_ = lean_uint32_dec_eq(v_curr_2431_, v___x_2432_);
if (v___x_2433_ == 0)
{
uint8_t v___x_2434_; 
v___x_2434_ = lean_uint32_dec_le(v___x_2432_, v_curr_2431_);
if (v___x_2434_ == 0)
{
lean_dec_ref(v_c_2422_);
goto v___jp_2424_;
}
else
{
uint32_t v___x_2435_; uint8_t v___x_2436_; 
v___x_2435_ = 57;
v___x_2436_ = lean_uint32_dec_le(v_curr_2431_, v___x_2435_);
if (v___x_2436_ == 0)
{
lean_dec_ref(v_c_2422_);
goto v___jp_2424_;
}
else
{
lean_object* v___x_2437_; lean_object* v___x_2438_; 
lean_inc(v_pos_2427_);
v___x_2437_ = l_Lean_Parser_ParserState_next(v_s_2423_, v_c_2422_, v_pos_2427_);
v___x_2438_ = l_Lean_Parser_decimalNumberFn(v_pos_2427_, v_includeWhitespace_2421_, v_c_2422_, v___x_2437_);
return v___x_2438_;
}
}
}
else
{
lean_object* v_i_2439_; uint32_t v_curr_2450_; uint32_t v___x_2451_; uint8_t v___x_2452_; 
lean_inc(v_pos_2427_);
v_i_2439_ = lean_string_utf8_next_fast(v_inputString_2430_, v_pos_2427_);
v_curr_2450_ = lean_string_utf8_get(v_inputString_2430_, v_i_2439_);
v___x_2451_ = 98;
v___x_2452_ = lean_uint32_dec_eq(v_curr_2450_, v___x_2451_);
if (v___x_2452_ == 0)
{
uint32_t v___x_2453_; uint8_t v___x_2454_; 
v___x_2453_ = 66;
v___x_2454_ = lean_uint32_dec_eq(v_curr_2450_, v___x_2453_);
if (v___x_2454_ == 0)
{
uint32_t v___x_2455_; uint8_t v___x_2456_; 
v___x_2455_ = 111;
v___x_2456_ = lean_uint32_dec_eq(v_curr_2450_, v___x_2455_);
if (v___x_2456_ == 0)
{
uint32_t v___x_2457_; uint8_t v___x_2458_; 
v___x_2457_ = 79;
v___x_2458_ = lean_uint32_dec_eq(v_curr_2450_, v___x_2457_);
if (v___x_2458_ == 0)
{
uint32_t v___x_2459_; uint8_t v___x_2460_; 
v___x_2459_ = 120;
v___x_2460_ = lean_uint32_dec_eq(v_curr_2450_, v___x_2459_);
if (v___x_2460_ == 0)
{
uint32_t v___x_2461_; uint8_t v___x_2462_; 
v___x_2461_ = 88;
v___x_2462_ = lean_uint32_dec_eq(v_curr_2450_, v___x_2461_);
if (v___x_2462_ == 0)
{
lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2463_ = l_Lean_Parser_ParserState_setPos(v_s_2423_, v_i_2439_);
v___x_2464_ = l_Lean_Parser_decimalNumberFn(v_pos_2427_, v_includeWhitespace_2421_, v_c_2422_, v___x_2463_);
return v___x_2464_;
}
else
{
goto v___jp_2440_;
}
}
else
{
goto v___jp_2440_;
}
}
else
{
goto v___jp_2444_;
}
}
else
{
goto v___jp_2444_;
}
}
else
{
goto v___jp_2447_;
}
}
else
{
goto v___jp_2447_;
}
v___jp_2440_:
{
lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; 
v___x_2441_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2442_ = l_Lean_Parser_ParserState_next(v_s_2423_, v_c_2422_, v_i_2439_);
v___x_2443_ = l_Lean_Parser_hexNumberFn(v_pos_2427_, v_includeWhitespace_2421_, v___x_2441_, v_c_2422_, v___x_2442_);
return v___x_2443_;
}
v___jp_2444_:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; 
v___x_2445_ = l_Lean_Parser_ParserState_next(v_s_2423_, v_c_2422_, v_i_2439_);
v___x_2446_ = l_Lean_Parser_octalNumberFn(v_pos_2427_, v_includeWhitespace_2421_, v_c_2422_, v___x_2445_);
return v___x_2446_;
}
v___jp_2447_:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2448_ = l_Lean_Parser_ParserState_next(v_s_2423_, v_c_2422_, v_i_2439_);
v___x_2449_ = l_Lean_Parser_binNumberFn(v_pos_2427_, v_includeWhitespace_2421_, v_c_2422_, v___x_2448_);
return v___x_2449_;
}
}
}
else
{
lean_object* v___x_2465_; lean_object* v___x_2466_; 
lean_dec_ref(v_c_2422_);
v___x_2465_ = lean_box(0);
v___x_2466_ = l_Lean_Parser_ParserState_mkEOIError(v_s_2423_, v___x_2465_);
return v___x_2466_;
}
v___jp_2424_:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2425_ = ((lean_object*)(l_Lean_Parser_numberFnAux___closed__0));
v___x_2426_ = l_Lean_Parser_ParserState_mkError(v_s_2423_, v___x_2425_);
return v___x_2426_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numberFnAux___boxed(lean_object* v_includeWhitespace_2467_, lean_object* v_c_2468_, lean_object* v_s_2469_){
_start:
{
uint8_t v_includeWhitespace_boxed_2470_; lean_object* v_res_2471_; 
v_includeWhitespace_boxed_2470_ = lean_unbox(v_includeWhitespace_2467_);
v_res_2471_ = l_Lean_Parser_numberFnAux(v_includeWhitespace_boxed_2470_, v_c_2468_, v_s_2469_);
return v_res_2471_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_isIdCont(lean_object* v_c_2472_, lean_object* v_s_2473_){
_start:
{
lean_object* v_toInputContext_2474_; lean_object* v_pos_2475_; lean_object* v_inputString_2476_; uint32_t v_curr_2477_; uint32_t v___x_2478_; uint8_t v___x_2479_; 
v_toInputContext_2474_ = lean_ctor_get(v_c_2472_, 0);
v_pos_2475_ = lean_ctor_get(v_s_2473_, 2);
v_inputString_2476_ = lean_ctor_get(v_toInputContext_2474_, 0);
v_curr_2477_ = lean_string_utf8_get(v_inputString_2476_, v_pos_2475_);
v___x_2478_ = 46;
v___x_2479_ = lean_uint32_dec_eq(v_curr_2477_, v___x_2478_);
if (v___x_2479_ == 0)
{
return v___x_2479_;
}
else
{
lean_object* v_i_2480_; uint8_t v___x_2481_; 
v_i_2480_ = lean_string_utf8_next(v_inputString_2476_, v_pos_2475_);
v___x_2481_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2474_, v_i_2480_);
if (v___x_2481_ == 0)
{
uint32_t v_curr_2482_; uint32_t v___x_2494_; uint8_t v___x_2495_; 
v_curr_2482_ = lean_string_utf8_get(v_inputString_2476_, v_i_2480_);
lean_dec(v_i_2480_);
v___x_2494_ = 65;
v___x_2495_ = lean_uint32_dec_le(v___x_2494_, v_curr_2482_);
if (v___x_2495_ == 0)
{
goto v___jp_2489_;
}
else
{
uint32_t v___x_2496_; uint8_t v___x_2497_; 
v___x_2496_ = 90;
v___x_2497_ = lean_uint32_dec_le(v_curr_2482_, v___x_2496_);
if (v___x_2497_ == 0)
{
goto v___jp_2489_;
}
else
{
return v___x_2479_;
}
}
v___jp_2483_:
{
uint32_t v___x_2484_; uint8_t v___x_2485_; 
v___x_2484_ = 95;
v___x_2485_ = lean_uint32_dec_eq(v_curr_2482_, v___x_2484_);
if (v___x_2485_ == 0)
{
uint8_t v___x_2486_; 
v___x_2486_ = l_Lean_isLetterLike(v_curr_2482_);
if (v___x_2486_ == 0)
{
uint32_t v___x_2487_; uint8_t v___x_2488_; 
v___x_2487_ = l_Lean_idBeginEscape;
v___x_2488_ = lean_uint32_dec_eq(v_curr_2482_, v___x_2487_);
return v___x_2488_;
}
else
{
return v___x_2479_;
}
}
else
{
return v___x_2479_;
}
}
v___jp_2489_:
{
uint32_t v___x_2490_; uint8_t v___x_2491_; 
v___x_2490_ = 97;
v___x_2491_ = lean_uint32_dec_le(v___x_2490_, v_curr_2482_);
if (v___x_2491_ == 0)
{
goto v___jp_2483_;
}
else
{
uint32_t v___x_2492_; uint8_t v___x_2493_; 
v___x_2492_ = 122;
v___x_2493_ = lean_uint32_dec_le(v_curr_2482_, v___x_2492_);
if (v___x_2493_ == 0)
{
goto v___jp_2483_;
}
else
{
return v___x_2479_;
}
}
}
}
else
{
uint8_t v___x_2498_; 
lean_dec(v_i_2480_);
v___x_2498_ = 0;
return v___x_2498_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isIdCont___boxed(lean_object* v_c_2499_, lean_object* v_s_2500_){
_start:
{
uint8_t v_res_2501_; lean_object* v_r_2502_; 
v_res_2501_ = l_Lean_Parser_isIdCont(v_c_2499_, v_s_2500_);
lean_dec_ref(v_s_2500_);
lean_dec_ref(v_c_2499_);
v_r_2502_ = lean_box(v_res_2501_);
return v_r_2502_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_isToken(lean_object* v_idStartPos_2503_, lean_object* v_idStopPos_2504_, lean_object* v_tk_2505_){
_start:
{
if (lean_obj_tag(v_tk_2505_) == 0)
{
uint8_t v___x_2506_; 
v___x_2506_ = 0;
return v___x_2506_;
}
else
{
lean_object* v_val_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; uint8_t v___x_2510_; 
v_val_2507_ = lean_ctor_get(v_tk_2505_, 0);
v___x_2508_ = lean_nat_sub(v_idStopPos_2504_, v_idStartPos_2503_);
v___x_2509_ = lean_string_utf8_byte_size(v_val_2507_);
v___x_2510_ = lean_nat_dec_le(v___x_2508_, v___x_2509_);
lean_dec(v___x_2508_);
return v___x_2510_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_isToken___boxed(lean_object* v_idStartPos_2511_, lean_object* v_idStopPos_2512_, lean_object* v_tk_2513_){
_start:
{
uint8_t v_res_2514_; lean_object* v_r_2515_; 
v_res_2514_ = l___private_Lean_Parser_Basic_0__Lean_Parser_isToken(v_idStartPos_2511_, v_idStopPos_2512_, v_tk_2513_);
lean_dec(v_tk_2513_);
lean_dec(v_idStopPos_2512_);
lean_dec(v_idStartPos_2511_);
v_r_2515_ = lean_box(v_res_2514_);
return v_r_2515_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0_spec__0(lean_object* v_a_2516_, lean_object* v_as_2517_, size_t v_i_2518_, size_t v_stop_2519_){
_start:
{
uint8_t v___x_2520_; 
v___x_2520_ = lean_usize_dec_eq(v_i_2518_, v_stop_2519_);
if (v___x_2520_ == 0)
{
lean_object* v___x_2521_; uint8_t v___x_2522_; 
v___x_2521_ = lean_array_uget_borrowed(v_as_2517_, v_i_2518_);
v___x_2522_ = lean_string_dec_eq(v_a_2516_, v___x_2521_);
if (v___x_2522_ == 0)
{
size_t v___x_2523_; size_t v___x_2524_; 
v___x_2523_ = ((size_t)1ULL);
v___x_2524_ = lean_usize_add(v_i_2518_, v___x_2523_);
v_i_2518_ = v___x_2524_;
goto _start;
}
else
{
return v___x_2522_;
}
}
else
{
uint8_t v___x_2526_; 
v___x_2526_ = 0;
return v___x_2526_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0_spec__0___boxed(lean_object* v_a_2527_, lean_object* v_as_2528_, lean_object* v_i_2529_, lean_object* v_stop_2530_){
_start:
{
size_t v_i_boxed_2531_; size_t v_stop_boxed_2532_; uint8_t v_res_2533_; lean_object* v_r_2534_; 
v_i_boxed_2531_ = lean_unbox_usize(v_i_2529_);
lean_dec(v_i_2529_);
v_stop_boxed_2532_ = lean_unbox_usize(v_stop_2530_);
lean_dec(v_stop_2530_);
v_res_2533_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0_spec__0(v_a_2527_, v_as_2528_, v_i_boxed_2531_, v_stop_boxed_2532_);
lean_dec_ref(v_as_2528_);
lean_dec_ref(v_a_2527_);
v_r_2534_ = lean_box(v_res_2533_);
return v_r_2534_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0(lean_object* v_as_2535_, lean_object* v_a_2536_){
_start:
{
lean_object* v___x_2537_; lean_object* v___x_2538_; uint8_t v___x_2539_; 
v___x_2537_ = lean_unsigned_to_nat(0u);
v___x_2538_ = lean_array_get_size(v_as_2535_);
v___x_2539_ = lean_nat_dec_lt(v___x_2537_, v___x_2538_);
if (v___x_2539_ == 0)
{
return v___x_2539_;
}
else
{
size_t v___x_2540_; size_t v___x_2541_; uint8_t v___x_2542_; 
v___x_2540_ = ((size_t)0ULL);
v___x_2541_ = lean_usize_of_nat(v___x_2538_);
v___x_2542_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0_spec__0(v_a_2536_, v_as_2535_, v___x_2540_, v___x_2541_);
return v___x_2542_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0___boxed(lean_object* v_as_2543_, lean_object* v_a_2544_){
_start:
{
uint8_t v_res_2545_; lean_object* v_r_2546_; 
v_res_2545_ = l_Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0(v_as_2543_, v_a_2544_);
lean_dec_ref(v_a_2544_);
lean_dec_ref(v_as_2543_);
v_r_2546_ = lean_box(v_res_2545_);
return v_r_2546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkTokenAndFixPos(lean_object* v_startPos_2549_, lean_object* v_tk_2550_, lean_object* v_c_2551_, lean_object* v_s_2552_){
_start:
{
if (lean_obj_tag(v_tk_2550_) == 0)
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; 
lean_dec_ref(v_c_2551_);
v___x_2553_ = ((lean_object*)(l_Lean_Parser_mkTokenAndFixPos___closed__0));
v___x_2554_ = lean_box(0);
v___x_2555_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_2552_, v___x_2553_, v_startPos_2549_, v___x_2554_);
return v___x_2555_;
}
else
{
lean_object* v_toCacheableParserContext_2556_; lean_object* v_val_2557_; lean_object* v_toInputContext_2558_; lean_object* v_forbiddenTks_2559_; uint8_t v___x_2560_; 
v_toCacheableParserContext_2556_ = lean_ctor_get(v_c_2551_, 2);
v_val_2557_ = lean_ctor_get(v_tk_2550_, 0);
v_toInputContext_2558_ = lean_ctor_get(v_c_2551_, 0);
lean_inc_ref(v_toInputContext_2558_);
v_forbiddenTks_2559_ = lean_ctor_get(v_toCacheableParserContext_2556_, 3);
v___x_2560_ = l_Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0(v_forbiddenTks_2559_, v_val_2557_);
if (v___x_2560_ == 0)
{
lean_object* v_leading_2561_; lean_object* v___x_2562_; lean_object* v_stopPos_2563_; lean_object* v_s_2564_; lean_object* v_s_2565_; lean_object* v___y_2567_; lean_object* v_pos_2571_; lean_object* v_inputString_2572_; lean_object* v_endPos_2573_; uint8_t v___x_2574_; 
lean_inc(v_startPos_2549_);
v_leading_2561_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_2551_, v_startPos_2549_);
v___x_2562_ = lean_string_utf8_byte_size(v_val_2557_);
v_stopPos_2563_ = lean_nat_add(v_startPos_2549_, v___x_2562_);
lean_inc(v_stopPos_2563_);
v_s_2564_ = l_Lean_Parser_ParserState_setPos(v_s_2552_, v_stopPos_2563_);
v_s_2565_ = l_Lean_Parser_whitespace(v_c_2551_, v_s_2564_);
v_pos_2571_ = lean_ctor_get(v_s_2565_, 2);
v_inputString_2572_ = lean_ctor_get(v_toInputContext_2558_, 0);
lean_inc_ref(v_inputString_2572_);
v_endPos_2573_ = lean_ctor_get(v_toInputContext_2558_, 3);
lean_inc(v_endPos_2573_);
lean_dec_ref(v_toInputContext_2558_);
v___x_2574_ = lean_nat_dec_le(v_pos_2571_, v_endPos_2573_);
if (v___x_2574_ == 0)
{
lean_object* v___x_2575_; 
lean_inc(v_stopPos_2563_);
v___x_2575_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2575_, 0, v_inputString_2572_);
lean_ctor_set(v___x_2575_, 1, v_stopPos_2563_);
lean_ctor_set(v___x_2575_, 2, v_endPos_2573_);
v___y_2567_ = v___x_2575_;
goto v___jp_2566_;
}
else
{
lean_object* v___x_2576_; 
lean_dec(v_endPos_2573_);
lean_inc(v_pos_2571_);
lean_inc(v_stopPos_2563_);
v___x_2576_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2576_, 0, v_inputString_2572_);
lean_ctor_set(v___x_2576_, 1, v_stopPos_2563_);
lean_ctor_set(v___x_2576_, 2, v_pos_2571_);
v___y_2567_ = v___x_2576_;
goto v___jp_2566_;
}
v___jp_2566_:
{
lean_object* v___x_2568_; lean_object* v_atom_2569_; lean_object* v___x_2570_; 
v___x_2568_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2568_, 0, v_leading_2561_);
lean_ctor_set(v___x_2568_, 1, v_startPos_2549_);
lean_ctor_set(v___x_2568_, 2, v___y_2567_);
lean_ctor_set(v___x_2568_, 3, v_stopPos_2563_);
lean_inc(v_val_2557_);
v_atom_2569_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_2569_, 0, v___x_2568_);
lean_ctor_set(v_atom_2569_, 1, v_val_2557_);
v___x_2570_ = l_Lean_Parser_ParserState_pushSyntax(v_s_2565_, v_atom_2569_);
return v___x_2570_;
}
}
else
{
lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
lean_dec_ref(v_toInputContext_2558_);
lean_dec_ref(v_c_2551_);
v___x_2577_ = ((lean_object*)(l_Lean_Parser_mkTokenAndFixPos___closed__1));
v___x_2578_ = lean_box(0);
v___x_2579_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_2552_, v___x_2577_, v_startPos_2549_, v___x_2578_);
return v___x_2579_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkTokenAndFixPos___boxed(lean_object* v_startPos_2580_, lean_object* v_tk_2581_, lean_object* v_c_2582_, lean_object* v_s_2583_){
_start:
{
lean_object* v_res_2584_; 
v_res_2584_ = l_Lean_Parser_mkTokenAndFixPos(v_startPos_2580_, v_tk_2581_, v_c_2582_, v_s_2583_);
lean_dec(v_tk_2581_);
return v_res_2584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkIdResult(lean_object* v_startPos_2585_, lean_object* v_tk_2586_, lean_object* v_val_2587_, uint8_t v_includeWhitespace_2588_, lean_object* v_c_2589_, lean_object* v_s_2590_){
_start:
{
lean_object* v_pos_2591_; lean_object* v___y_2593_; lean_object* v___y_2594_; lean_object* v___y_2595_; lean_object* v___y_2596_; uint8_t v___x_2601_; 
v_pos_2591_ = lean_ctor_get(v_s_2590_, 2);
v___x_2601_ = l___private_Lean_Parser_Basic_0__Lean_Parser_isToken(v_startPos_2585_, v_pos_2591_, v_tk_2586_);
if (v___x_2601_ == 0)
{
lean_object* v_toInputContext_2602_; lean_object* v_inputString_2603_; lean_object* v_endPos_2604_; lean_object* v___y_2606_; lean_object* v___y_2607_; lean_object* v_pos_2608_; lean_object* v___y_2614_; uint8_t v___x_2617_; 
lean_inc(v_pos_2591_);
v_toInputContext_2602_ = lean_ctor_get(v_c_2589_, 0);
v_inputString_2603_ = lean_ctor_get(v_toInputContext_2602_, 0);
lean_inc_ref(v_inputString_2603_);
v_endPos_2604_ = lean_ctor_get(v_toInputContext_2602_, 3);
lean_inc(v_endPos_2604_);
v___x_2617_ = lean_nat_dec_le(v_pos_2591_, v_endPos_2604_);
if (v___x_2617_ == 0)
{
lean_object* v___x_2618_; 
lean_inc(v_endPos_2604_);
lean_inc(v_startPos_2585_);
lean_inc_ref(v_inputString_2603_);
v___x_2618_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2618_, 0, v_inputString_2603_);
lean_ctor_set(v___x_2618_, 1, v_startPos_2585_);
lean_ctor_set(v___x_2618_, 2, v_endPos_2604_);
v___y_2614_ = v___x_2618_;
goto v___jp_2613_;
}
else
{
lean_object* v___x_2619_; 
lean_inc(v_pos_2591_);
lean_inc(v_startPos_2585_);
lean_inc_ref(v_inputString_2603_);
v___x_2619_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2619_, 0, v_inputString_2603_);
lean_ctor_set(v___x_2619_, 1, v_startPos_2585_);
lean_ctor_set(v___x_2619_, 2, v_pos_2591_);
v___y_2614_ = v___x_2619_;
goto v___jp_2613_;
}
v___jp_2605_:
{
lean_object* v_leading_2609_; uint8_t v___x_2610_; 
lean_inc(v_startPos_2585_);
v_leading_2609_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_2589_, v_startPos_2585_);
lean_dec_ref(v_c_2589_);
v___x_2610_ = lean_nat_dec_le(v_pos_2608_, v_endPos_2604_);
if (v___x_2610_ == 0)
{
lean_object* v___x_2611_; 
lean_dec(v_pos_2608_);
lean_inc(v_pos_2591_);
v___x_2611_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2611_, 0, v_inputString_2603_);
lean_ctor_set(v___x_2611_, 1, v_pos_2591_);
lean_ctor_set(v___x_2611_, 2, v_endPos_2604_);
v___y_2593_ = v___y_2607_;
v___y_2594_ = v___y_2606_;
v___y_2595_ = v_leading_2609_;
v___y_2596_ = v___x_2611_;
goto v___jp_2592_;
}
else
{
lean_object* v___x_2612_; 
lean_dec(v_endPos_2604_);
lean_inc(v_pos_2591_);
v___x_2612_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2612_, 0, v_inputString_2603_);
lean_ctor_set(v___x_2612_, 1, v_pos_2591_);
lean_ctor_set(v___x_2612_, 2, v_pos_2608_);
v___y_2593_ = v___y_2607_;
v___y_2594_ = v___y_2606_;
v___y_2595_ = v_leading_2609_;
v___y_2596_ = v___x_2612_;
goto v___jp_2592_;
}
}
v___jp_2613_:
{
if (v_includeWhitespace_2588_ == 0)
{
lean_inc(v_pos_2591_);
v___y_2606_ = v___y_2614_;
v___y_2607_ = v_s_2590_;
v_pos_2608_ = v_pos_2591_;
goto v___jp_2605_;
}
else
{
lean_object* v___x_2615_; lean_object* v_pos_2616_; 
lean_inc_ref(v_c_2589_);
v___x_2615_ = l_Lean_Parser_whitespace(v_c_2589_, v_s_2590_);
v_pos_2616_ = lean_ctor_get(v___x_2615_, 2);
lean_inc(v_pos_2616_);
v___y_2606_ = v___y_2614_;
v___y_2607_ = v___x_2615_;
v_pos_2608_ = v_pos_2616_;
goto v___jp_2605_;
}
}
}
else
{
lean_object* v___x_2620_; 
lean_dec(v_val_2587_);
v___x_2620_ = l_Lean_Parser_mkTokenAndFixPos(v_startPos_2585_, v_tk_2586_, v_c_2589_, v_s_2590_);
return v___x_2620_;
}
v___jp_2592_:
{
lean_object* v_info_2597_; lean_object* v___x_2598_; lean_object* v_atom_2599_; lean_object* v___x_2600_; 
v_info_2597_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_info_2597_, 0, v___y_2595_);
lean_ctor_set(v_info_2597_, 1, v_startPos_2585_);
lean_ctor_set(v_info_2597_, 2, v___y_2596_);
lean_ctor_set(v_info_2597_, 3, v_pos_2591_);
v___x_2598_ = lean_box(0);
v_atom_2599_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_atom_2599_, 0, v_info_2597_);
lean_ctor_set(v_atom_2599_, 1, v___y_2594_);
lean_ctor_set(v_atom_2599_, 2, v_val_2587_);
lean_ctor_set(v_atom_2599_, 3, v___x_2598_);
v___x_2600_ = l_Lean_Parser_ParserState_pushSyntax(v___y_2593_, v_atom_2599_);
return v___x_2600_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkIdResult___boxed(lean_object* v_startPos_2621_, lean_object* v_tk_2622_, lean_object* v_val_2623_, lean_object* v_includeWhitespace_2624_, lean_object* v_c_2625_, lean_object* v_s_2626_){
_start:
{
uint8_t v_includeWhitespace_boxed_2627_; lean_object* v_res_2628_; 
v_includeWhitespace_boxed_2627_ = lean_unbox(v_includeWhitespace_2624_);
v_res_2628_ = l_Lean_Parser_mkIdResult(v_startPos_2621_, v_tk_2622_, v_val_2623_, v_includeWhitespace_boxed_2627_, v_c_2625_, v_s_2626_);
lean_dec(v_tk_2622_);
return v_res_2628_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__0(uint32_t v___y_2629_){
_start:
{
uint32_t v___x_2651_; uint8_t v___x_2652_; 
v___x_2651_ = 65;
v___x_2652_ = lean_uint32_dec_le(v___x_2651_, v___y_2629_);
if (v___x_2652_ == 0)
{
goto v___jp_2646_;
}
else
{
uint32_t v___x_2653_; uint8_t v___x_2654_; 
v___x_2653_ = 90;
v___x_2654_ = lean_uint32_dec_le(v___y_2629_, v___x_2653_);
if (v___x_2654_ == 0)
{
goto v___jp_2646_;
}
else
{
return v___x_2654_;
}
}
v___jp_2630_:
{
uint32_t v___x_2631_; uint8_t v___x_2632_; 
v___x_2631_ = 95;
v___x_2632_ = lean_uint32_dec_eq(v___y_2629_, v___x_2631_);
if (v___x_2632_ == 0)
{
uint32_t v___x_2633_; uint8_t v___x_2634_; 
v___x_2633_ = 39;
v___x_2634_ = lean_uint32_dec_eq(v___y_2629_, v___x_2633_);
if (v___x_2634_ == 0)
{
uint32_t v___x_2635_; uint8_t v___x_2636_; 
v___x_2635_ = 33;
v___x_2636_ = lean_uint32_dec_eq(v___y_2629_, v___x_2635_);
if (v___x_2636_ == 0)
{
uint32_t v___x_2637_; uint8_t v___x_2638_; 
v___x_2637_ = 63;
v___x_2638_ = lean_uint32_dec_eq(v___y_2629_, v___x_2637_);
if (v___x_2638_ == 0)
{
uint8_t v___x_2639_; 
v___x_2639_ = l_Lean_isLetterLike(v___y_2629_);
if (v___x_2639_ == 0)
{
uint8_t v___x_2640_; 
v___x_2640_ = l_Lean_isSubScriptAlnum(v___y_2629_);
return v___x_2640_;
}
else
{
return v___x_2639_;
}
}
else
{
return v___x_2638_;
}
}
else
{
return v___x_2636_;
}
}
else
{
return v___x_2634_;
}
}
else
{
return v___x_2632_;
}
}
v___jp_2641_:
{
uint32_t v___x_2642_; uint8_t v___x_2643_; 
v___x_2642_ = 48;
v___x_2643_ = lean_uint32_dec_le(v___x_2642_, v___y_2629_);
if (v___x_2643_ == 0)
{
goto v___jp_2630_;
}
else
{
uint32_t v___x_2644_; uint8_t v___x_2645_; 
v___x_2644_ = 57;
v___x_2645_ = lean_uint32_dec_le(v___y_2629_, v___x_2644_);
if (v___x_2645_ == 0)
{
goto v___jp_2630_;
}
else
{
return v___x_2645_;
}
}
}
v___jp_2646_:
{
uint32_t v___x_2647_; uint8_t v___x_2648_; 
v___x_2647_ = 97;
v___x_2648_ = lean_uint32_dec_le(v___x_2647_, v___y_2629_);
if (v___x_2648_ == 0)
{
goto v___jp_2641_;
}
else
{
uint32_t v___x_2649_; uint8_t v___x_2650_; 
v___x_2649_ = 122;
v___x_2650_ = lean_uint32_dec_le(v___y_2629_, v___x_2649_);
if (v___x_2650_ == 0)
{
goto v___jp_2641_;
}
else
{
return v___x_2650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__0___boxed(lean_object* v___y_2655_){
_start:
{
uint32_t v___y_225__boxed_2656_; uint8_t v_res_2657_; lean_object* v_r_2658_; 
v___y_225__boxed_2656_ = lean_unbox_uint32(v___y_2655_);
lean_dec(v___y_2655_);
v_res_2657_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__0(v___y_225__boxed_2656_);
v_r_2658_ = lean_box(v_res_2657_);
return v_r_2658_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__1(uint32_t v___y_2659_){
_start:
{
uint32_t v___x_2660_; uint8_t v___x_2661_; 
v___x_2660_ = l_Lean_idEndEscape;
v___x_2661_ = lean_uint32_dec_eq(v___y_2659_, v___x_2660_);
return v___x_2661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__1___boxed(lean_object* v___y_2662_){
_start:
{
uint32_t v___y_278__boxed_2663_; uint8_t v_res_2664_; lean_object* v_r_2665_; 
v___y_278__boxed_2663_ = lean_unbox_uint32(v___y_2662_);
lean_dec(v___y_2662_);
v_res_2664_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__1(v___y_278__boxed_2663_);
v_r_2665_ = lean_box(v_res_2664_);
return v_r_2665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(lean_object* v_startPos_2669_, lean_object* v_tk_2670_, uint8_t v_includeWhitespace_2671_, lean_object* v_r_2672_, lean_object* v_c_2673_, lean_object* v_s_2674_){
_start:
{
lean_object* v_pos_2675_; lean_object* v_toInputContext_2676_; uint8_t v___x_2677_; 
v_pos_2675_ = lean_ctor_get(v_s_2674_, 2);
v_toInputContext_2676_ = lean_ctor_get(v_c_2673_, 0);
v___x_2677_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2676_, v_pos_2675_);
if (v___x_2677_ == 0)
{
lean_object* v_inputString_2678_; uint32_t v_curr_2679_; uint32_t v___x_2680_; uint8_t v___x_2681_; 
v_inputString_2678_ = lean_ctor_get(v_toInputContext_2676_, 0);
v_curr_2679_ = lean_string_utf8_get_fast(v_inputString_2678_, v_pos_2675_);
v___x_2680_ = l_Lean_idBeginEscape;
v___x_2681_ = lean_uint32_dec_eq(v_curr_2679_, v___x_2680_);
if (v___x_2681_ == 0)
{
lean_object* v___f_2682_; uint32_t v___x_2703_; uint8_t v___x_2704_; 
v___f_2682_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__0));
v___x_2703_ = 65;
v___x_2704_ = lean_uint32_dec_le(v___x_2703_, v_curr_2679_);
if (v___x_2704_ == 0)
{
goto v___jp_2698_;
}
else
{
uint32_t v___x_2705_; uint8_t v___x_2706_; 
v___x_2705_ = 90;
v___x_2706_ = lean_uint32_dec_le(v_curr_2679_, v___x_2705_);
if (v___x_2706_ == 0)
{
goto v___jp_2698_;
}
else
{
lean_inc(v_pos_2675_);
goto v___jp_2683_;
}
}
v___jp_2683_:
{
lean_object* v___x_2684_; lean_object* v_s_2685_; lean_object* v_pos_2686_; lean_object* v___x_2687_; lean_object* v_r_2688_; uint8_t v___x_2689_; 
v___x_2684_ = l_Lean_Parser_ParserState_next(v_s_2674_, v_c_2673_, v_pos_2675_);
v_s_2685_ = l_Lean_Parser_takeWhileFn(v___f_2682_, v_c_2673_, v___x_2684_);
v_pos_2686_ = lean_ctor_get(v_s_2685_, 2);
v___x_2687_ = lean_string_utf8_extract(v_inputString_2678_, v_pos_2675_, v_pos_2686_);
lean_dec(v_pos_2675_);
v_r_2688_ = l_Lean_Name_str___override(v_r_2672_, v___x_2687_);
v___x_2689_ = l_Lean_Parser_isIdCont(v_c_2673_, v_s_2685_);
if (v___x_2689_ == 0)
{
lean_object* v___x_2690_; 
v___x_2690_ = l_Lean_Parser_mkIdResult(v_startPos_2669_, v_tk_2670_, v_r_2688_, v_includeWhitespace_2671_, v_c_2673_, v_s_2685_);
return v___x_2690_;
}
else
{
lean_object* v_s_2691_; 
lean_inc(v_pos_2686_);
v_s_2691_ = l_Lean_Parser_ParserState_next(v_s_2685_, v_c_2673_, v_pos_2686_);
lean_dec(v_pos_2686_);
v_r_2672_ = v_r_2688_;
v_s_2674_ = v_s_2691_;
goto _start;
}
}
v___jp_2693_:
{
uint32_t v___x_2694_; uint8_t v___x_2695_; 
v___x_2694_ = 95;
v___x_2695_ = lean_uint32_dec_eq(v_curr_2679_, v___x_2694_);
if (v___x_2695_ == 0)
{
uint8_t v___x_2696_; 
v___x_2696_ = l_Lean_isLetterLike(v_curr_2679_);
if (v___x_2696_ == 0)
{
lean_object* v___x_2697_; 
lean_dec(v_r_2672_);
v___x_2697_ = l_Lean_Parser_mkTokenAndFixPos(v_startPos_2669_, v_tk_2670_, v_c_2673_, v_s_2674_);
return v___x_2697_;
}
else
{
lean_inc(v_pos_2675_);
goto v___jp_2683_;
}
}
else
{
lean_inc(v_pos_2675_);
goto v___jp_2683_;
}
}
v___jp_2698_:
{
uint32_t v___x_2699_; uint8_t v___x_2700_; 
v___x_2699_ = 97;
v___x_2700_ = lean_uint32_dec_le(v___x_2699_, v_curr_2679_);
if (v___x_2700_ == 0)
{
goto v___jp_2693_;
}
else
{
uint32_t v___x_2701_; uint8_t v___x_2702_; 
v___x_2701_ = 122;
v___x_2702_ = lean_uint32_dec_le(v_curr_2679_, v___x_2701_);
if (v___x_2702_ == 0)
{
goto v___jp_2693_;
}
else
{
lean_inc(v_pos_2675_);
goto v___jp_2683_;
}
}
}
}
else
{
lean_object* v___f_2707_; lean_object* v_startPart_2708_; lean_object* v___x_2709_; lean_object* v_s_2710_; lean_object* v_pos_2711_; uint8_t v___x_2712_; 
v___f_2707_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__1));
v_startPart_2708_ = lean_string_utf8_next_fast(v_inputString_2678_, v_pos_2675_);
v___x_2709_ = l_Lean_Parser_ParserState_setPos(v_s_2674_, v_startPart_2708_);
v_s_2710_ = l_Lean_Parser_takeUntilFn(v___f_2707_, v_c_2673_, v___x_2709_);
v_pos_2711_ = lean_ctor_get(v_s_2710_, 2);
v___x_2712_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2676_, v_pos_2711_);
if (v___x_2712_ == 0)
{
lean_object* v_s_2713_; lean_object* v___x_2714_; lean_object* v_r_2715_; uint8_t v___x_2716_; 
lean_inc(v_pos_2711_);
v_s_2713_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_2710_, v_c_2673_, v_pos_2711_);
v___x_2714_ = lean_string_utf8_extract(v_inputString_2678_, v_startPart_2708_, v_pos_2711_);
lean_dec(v_pos_2711_);
v_r_2715_ = l_Lean_Name_str___override(v_r_2672_, v___x_2714_);
v___x_2716_ = l_Lean_Parser_isIdCont(v_c_2673_, v_s_2713_);
if (v___x_2716_ == 0)
{
lean_object* v___x_2717_; 
v___x_2717_ = l_Lean_Parser_mkIdResult(v_startPos_2669_, v_tk_2670_, v_r_2715_, v_includeWhitespace_2671_, v_c_2673_, v_s_2713_);
return v___x_2717_;
}
else
{
lean_object* v_pos_2718_; lean_object* v_s_2719_; 
v_pos_2718_ = lean_ctor_get(v_s_2713_, 2);
lean_inc(v_pos_2718_);
v_s_2719_ = l_Lean_Parser_ParserState_next(v_s_2713_, v_c_2673_, v_pos_2718_);
lean_dec(v_pos_2718_);
v_r_2672_ = v_r_2715_;
v_s_2674_ = v_s_2719_;
goto _start;
}
}
else
{
lean_object* v___x_2721_; lean_object* v___x_2722_; 
lean_dec_ref(v_c_2673_);
lean_dec(v_r_2672_);
lean_dec(v_startPos_2669_);
v___x_2721_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__2));
v___x_2722_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_2710_, v___x_2721_, v_startPart_2708_);
return v___x_2722_;
}
}
}
else
{
lean_object* v___x_2723_; lean_object* v___x_2724_; 
lean_dec_ref(v_c_2673_);
lean_dec(v_r_2672_);
lean_dec(v_startPos_2669_);
v___x_2723_ = lean_box(0);
v___x_2724_ = l_Lean_Parser_ParserState_mkEOIError(v_s_2674_, v___x_2723_);
return v___x_2724_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___boxed(lean_object* v_startPos_2725_, lean_object* v_tk_2726_, lean_object* v_includeWhitespace_2727_, lean_object* v_r_2728_, lean_object* v_c_2729_, lean_object* v_s_2730_){
_start:
{
uint8_t v_includeWhitespace_boxed_2731_; lean_object* v_res_2732_; 
v_includeWhitespace_boxed_2731_ = lean_unbox(v_includeWhitespace_2727_);
v_res_2732_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(v_startPos_2725_, v_tk_2726_, v_includeWhitespace_boxed_2731_, v_r_2728_, v_c_2729_, v_s_2730_);
lean_dec(v_tk_2726_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identFnAux(lean_object* v_startPos_2733_, lean_object* v_tk_2734_, lean_object* v_r_2735_, uint8_t v_includeWhitespace_2736_, lean_object* v_c_2737_, lean_object* v_s_2738_){
_start:
{
lean_object* v___x_2739_; 
v___x_2739_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(v_startPos_2733_, v_tk_2734_, v_includeWhitespace_2736_, v_r_2735_, v_c_2737_, v_s_2738_);
return v___x_2739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identFnAux___boxed(lean_object* v_startPos_2740_, lean_object* v_tk_2741_, lean_object* v_r_2742_, lean_object* v_includeWhitespace_2743_, lean_object* v_c_2744_, lean_object* v_s_2745_){
_start:
{
uint8_t v_includeWhitespace_boxed_2746_; lean_object* v_res_2747_; 
v_includeWhitespace_boxed_2746_ = lean_unbox(v_includeWhitespace_2743_);
v_res_2747_ = l_Lean_Parser_identFnAux(v_startPos_2740_, v_tk_2741_, v_r_2742_, v_includeWhitespace_boxed_2746_, v_c_2744_, v_s_2745_);
lean_dec(v_tk_2741_);
return v_res_2747_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_isIdFirstOrBeginEscape(uint32_t v_c_2748_){
_start:
{
uint32_t v___x_2760_; uint8_t v___x_2761_; 
v___x_2760_ = 65;
v___x_2761_ = lean_uint32_dec_le(v___x_2760_, v_c_2748_);
if (v___x_2761_ == 0)
{
goto v___jp_2755_;
}
else
{
uint32_t v___x_2762_; uint8_t v___x_2763_; 
v___x_2762_ = 90;
v___x_2763_ = lean_uint32_dec_le(v_c_2748_, v___x_2762_);
if (v___x_2763_ == 0)
{
goto v___jp_2755_;
}
else
{
return v___x_2763_;
}
}
v___jp_2749_:
{
uint32_t v___x_2750_; uint8_t v___x_2751_; 
v___x_2750_ = 95;
v___x_2751_ = lean_uint32_dec_eq(v_c_2748_, v___x_2750_);
if (v___x_2751_ == 0)
{
uint8_t v___x_2752_; 
v___x_2752_ = l_Lean_isLetterLike(v_c_2748_);
if (v___x_2752_ == 0)
{
uint32_t v___x_2753_; uint8_t v___x_2754_; 
v___x_2753_ = l_Lean_idBeginEscape;
v___x_2754_ = lean_uint32_dec_eq(v_c_2748_, v___x_2753_);
return v___x_2754_;
}
else
{
return v___x_2752_;
}
}
else
{
return v___x_2751_;
}
}
v___jp_2755_:
{
uint32_t v___x_2756_; uint8_t v___x_2757_; 
v___x_2756_ = 97;
v___x_2757_ = lean_uint32_dec_le(v___x_2756_, v_c_2748_);
if (v___x_2757_ == 0)
{
goto v___jp_2749_;
}
else
{
uint32_t v___x_2758_; uint8_t v___x_2759_; 
v___x_2758_ = 122;
v___x_2759_ = lean_uint32_dec_le(v_c_2748_, v___x_2758_);
if (v___x_2759_ == 0)
{
goto v___jp_2749_;
}
else
{
return v___x_2759_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_isIdFirstOrBeginEscape___boxed(lean_object* v_c_2764_){
_start:
{
uint32_t v_c_boxed_2765_; uint8_t v_res_2766_; lean_object* v_r_2767_; 
v_c_boxed_2765_ = lean_unbox_uint32(v_c_2764_);
lean_dec(v_c_2764_);
v_res_2766_ = l___private_Lean_Parser_Basic_0__Lean_Parser_isIdFirstOrBeginEscape(v_c_boxed_2765_);
v_r_2767_ = lean_box(v_res_2766_);
return v_r_2767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux(lean_object* v_startPos_2769_, lean_object* v_c_2770_, lean_object* v_s_2771_){
_start:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; uint8_t v___x_2774_; lean_object* v___x_2775_; lean_object* v_s_2776_; lean_object* v_stxStack_2777_; lean_object* v_errorMsg_2778_; uint8_t v___x_2779_; 
v___x_2772_ = lean_box(0);
v___x_2773_ = lean_box(0);
v___x_2774_ = 1;
v___x_2775_ = l_Lean_Parser_ParserState_next(v_s_2771_, v_c_2770_, v_startPos_2769_);
v_s_2776_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(v_startPos_2769_, v___x_2772_, v___x_2774_, v___x_2773_, v_c_2770_, v___x_2775_);
v_stxStack_2777_ = lean_ctor_get(v_s_2776_, 0);
v_errorMsg_2778_ = lean_ctor_get(v_s_2776_, 4);
v___x_2779_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_2778_, v___x_2772_);
if (v___x_2779_ == 0)
{
return v_s_2776_;
}
else
{
lean_object* v_stx_2780_; 
v_stx_2780_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_2777_);
if (lean_obj_tag(v_stx_2780_) == 3)
{
lean_object* v_rawVal_2781_; lean_object* v_info_2782_; lean_object* v_str_2783_; lean_object* v_startPos_2784_; lean_object* v_stopPos_2785_; lean_object* v_s_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; 
v_rawVal_2781_ = lean_ctor_get(v_stx_2780_, 1);
lean_inc_ref(v_rawVal_2781_);
v_info_2782_ = lean_ctor_get(v_stx_2780_, 0);
lean_inc(v_info_2782_);
lean_dec_ref_known(v_stx_2780_, 4);
v_str_2783_ = lean_ctor_get(v_rawVal_2781_, 0);
lean_inc_ref(v_str_2783_);
v_startPos_2784_ = lean_ctor_get(v_rawVal_2781_, 1);
lean_inc(v_startPos_2784_);
v_stopPos_2785_ = lean_ctor_get(v_rawVal_2781_, 2);
lean_inc(v_stopPos_2785_);
lean_dec_ref(v_rawVal_2781_);
v_s_2786_ = l_Lean_Parser_ParserState_popSyntax(v_s_2776_);
v___x_2787_ = lean_string_utf8_extract(v_str_2783_, v_startPos_2784_, v_stopPos_2785_);
lean_dec(v_stopPos_2785_);
lean_dec(v_startPos_2784_);
lean_dec_ref(v_str_2783_);
v___x_2788_ = l_Lean_Syntax_mkNameLit(v___x_2787_, v_info_2782_);
v___x_2789_ = l_Lean_Parser_ParserState_pushSyntax(v_s_2786_, v___x_2788_);
return v___x_2789_;
}
else
{
lean_object* v___x_2790_; lean_object* v___x_2791_; 
lean_dec(v_stx_2780_);
v___x_2790_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux___closed__0));
v___x_2791_ = l_Lean_Parser_ParserState_mkError(v_s_2776_, v___x_2790_);
return v___x_2791_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_tokenFnAux(lean_object* v_c_2792_, lean_object* v_s_2793_){
_start:
{
lean_object* v_toInputContext_2794_; lean_object* v_pos_2795_; lean_object* v_tokens_2796_; lean_object* v_inputString_2797_; lean_object* v_endPos_2798_; uint32_t v_curr_2799_; uint32_t v___x_2800_; uint8_t v___x_2801_; uint8_t v___x_2802_; 
v_toInputContext_2794_ = lean_ctor_get(v_c_2792_, 0);
v_pos_2795_ = lean_ctor_get(v_s_2793_, 2);
v_tokens_2796_ = lean_ctor_get(v_c_2792_, 3);
v_inputString_2797_ = lean_ctor_get(v_toInputContext_2794_, 0);
v_endPos_2798_ = lean_ctor_get(v_toInputContext_2794_, 3);
v_curr_2799_ = lean_string_utf8_get(v_inputString_2797_, v_pos_2795_);
v___x_2800_ = 34;
v___x_2801_ = lean_uint32_dec_eq(v_curr_2799_, v___x_2800_);
v___x_2802_ = 1;
if (v___x_2801_ == 0)
{
uint32_t v___x_2827_; uint8_t v___x_2828_; 
v___x_2827_ = 39;
v___x_2828_ = lean_uint32_dec_eq(v_curr_2799_, v___x_2827_);
if (v___x_2828_ == 0)
{
goto v___jp_2821_;
}
else
{
lean_object* v___x_2829_; uint32_t v___x_2830_; uint8_t v___x_2831_; 
v___x_2829_ = lean_string_utf8_next(v_inputString_2797_, v_pos_2795_);
v___x_2830_ = lean_string_utf8_get(v_inputString_2797_, v___x_2829_);
lean_dec(v___x_2829_);
v___x_2831_ = lean_uint32_dec_eq(v___x_2830_, v___x_2827_);
if (v___x_2831_ == 0)
{
lean_object* v___x_2832_; lean_object* v___x_2833_; 
lean_inc(v_pos_2795_);
v___x_2832_ = l_Lean_Parser_ParserState_next(v_s_2793_, v_c_2792_, v_pos_2795_);
v___x_2833_ = l_Lean_Parser_charLitFnAux(v_pos_2795_, v_c_2792_, v___x_2832_);
return v___x_2833_;
}
else
{
goto v___jp_2821_;
}
}
}
else
{
lean_object* v___x_2834_; lean_object* v___x_2835_; 
lean_inc(v_pos_2795_);
v___x_2834_ = l_Lean_Parser_ParserState_next(v_s_2793_, v_c_2792_, v_pos_2795_);
v___x_2835_ = l_Lean_Parser_strLitFnAux(v_pos_2795_, v___x_2802_, v_c_2792_, v___x_2834_);
return v___x_2835_;
}
v___jp_2803_:
{
lean_object* v_tk_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; 
lean_inc(v_pos_2795_);
v_tk_2804_ = l_Lean_Data_Trie_matchPrefix___redArg(v_inputString_2797_, v_tokens_2796_, v_pos_2795_, v_endPos_2798_);
v___x_2805_ = lean_box(0);
v___x_2806_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(v_pos_2795_, v_tk_2804_, v___x_2802_, v___x_2805_, v_c_2792_, v_s_2793_);
lean_dec(v_tk_2804_);
return v___x_2806_;
}
v___jp_2807_:
{
uint32_t v___x_2808_; uint8_t v___x_2809_; 
v___x_2808_ = 114;
v___x_2809_ = lean_uint32_dec_eq(v_curr_2799_, v___x_2808_);
if (v___x_2809_ == 0)
{
goto v___jp_2803_;
}
else
{
lean_object* v___x_2810_; uint8_t v___x_2811_; 
v___x_2810_ = lean_string_utf8_next(v_inputString_2797_, v_pos_2795_);
v___x_2811_ = l_Lean_Parser_isRawStrLitStart(v_c_2792_, v___x_2810_);
if (v___x_2811_ == 0)
{
goto v___jp_2803_;
}
else
{
lean_object* v___x_2812_; lean_object* v___x_2813_; 
v___x_2812_ = l_Lean_Parser_ParserState_next(v_s_2793_, v_c_2792_, v_pos_2795_);
v___x_2813_ = l_Lean_Parser_rawStrLitFnAux(v_pos_2795_, v_c_2792_, v___x_2812_);
return v___x_2813_;
}
}
}
v___jp_2814_:
{
uint32_t v___x_2815_; uint8_t v___x_2816_; 
v___x_2815_ = 96;
v___x_2816_ = lean_uint32_dec_eq(v_curr_2799_, v___x_2815_);
if (v___x_2816_ == 0)
{
goto v___jp_2807_;
}
else
{
lean_object* v___x_2817_; uint32_t v___x_2818_; uint8_t v___x_2819_; 
v___x_2817_ = lean_string_utf8_next(v_inputString_2797_, v_pos_2795_);
v___x_2818_ = lean_string_utf8_get(v_inputString_2797_, v___x_2817_);
lean_dec(v___x_2817_);
v___x_2819_ = l___private_Lean_Parser_Basic_0__Lean_Parser_isIdFirstOrBeginEscape(v___x_2818_);
if (v___x_2819_ == 0)
{
goto v___jp_2807_;
}
else
{
lean_object* v___x_2820_; 
v___x_2820_ = l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux(v_pos_2795_, v_c_2792_, v_s_2793_);
return v___x_2820_;
}
}
}
v___jp_2821_:
{
uint32_t v___x_2822_; uint8_t v___x_2823_; 
v___x_2822_ = 48;
v___x_2823_ = lean_uint32_dec_le(v___x_2822_, v_curr_2799_);
if (v___x_2823_ == 0)
{
lean_inc(v_pos_2795_);
goto v___jp_2814_;
}
else
{
uint32_t v___x_2824_; uint8_t v___x_2825_; 
v___x_2824_ = 57;
v___x_2825_ = lean_uint32_dec_le(v_curr_2799_, v___x_2824_);
if (v___x_2825_ == 0)
{
lean_inc(v_pos_2795_);
goto v___jp_2814_;
}
else
{
lean_object* v___x_2826_; 
v___x_2826_ = l_Lean_Parser_numberFnAux(v___x_2802_, v_c_2792_, v_s_2793_);
return v___x_2826_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_updateTokenCache(lean_object* v_startPos_2836_, lean_object* v_s_2837_){
_start:
{
lean_object* v_cache_2838_; lean_object* v_errorMsg_2839_; 
v_cache_2838_ = lean_ctor_get(v_s_2837_, 3);
lean_inc_ref(v_cache_2838_);
v_errorMsg_2839_ = lean_ctor_get(v_s_2837_, 4);
if (lean_obj_tag(v_errorMsg_2839_) == 0)
{
lean_object* v_stxStack_2840_; lean_object* v_lhsPrec_2841_; lean_object* v_pos_2842_; lean_object* v_recoveredErrors_2843_; lean_object* v_parserCache_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2869_; 
v_stxStack_2840_ = lean_ctor_get(v_s_2837_, 0);
v_lhsPrec_2841_ = lean_ctor_get(v_s_2837_, 1);
v_pos_2842_ = lean_ctor_get(v_s_2837_, 2);
v_recoveredErrors_2843_ = lean_ctor_get(v_s_2837_, 5);
v_parserCache_2844_ = lean_ctor_get(v_cache_2838_, 1);
v_isSharedCheck_2869_ = !lean_is_exclusive(v_cache_2838_);
if (v_isSharedCheck_2869_ == 0)
{
lean_object* v_unused_2870_; 
v_unused_2870_ = lean_ctor_get(v_cache_2838_, 0);
lean_dec(v_unused_2870_);
v___x_2846_ = v_cache_2838_;
v_isShared_2847_ = v_isSharedCheck_2869_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_parserCache_2844_);
lean_dec(v_cache_2838_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2869_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2848_; lean_object* v___x_2849_; uint8_t v___x_2850_; 
v___x_2848_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_2840_);
v___x_2849_ = lean_unsigned_to_nat(0u);
v___x_2850_ = lean_nat_dec_eq(v___x_2848_, v___x_2849_);
lean_dec(v___x_2848_);
if (v___x_2850_ == 0)
{
lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2862_; 
lean_inc_ref(v_recoveredErrors_2843_);
lean_inc(v_pos_2842_);
lean_inc(v_lhsPrec_2841_);
lean_inc(v_errorMsg_2839_);
lean_inc_ref(v_stxStack_2840_);
v_isSharedCheck_2862_ = !lean_is_exclusive(v_s_2837_);
if (v_isSharedCheck_2862_ == 0)
{
lean_object* v_unused_2863_; lean_object* v_unused_2864_; lean_object* v_unused_2865_; lean_object* v_unused_2866_; lean_object* v_unused_2867_; lean_object* v_unused_2868_; 
v_unused_2863_ = lean_ctor_get(v_s_2837_, 5);
lean_dec(v_unused_2863_);
v_unused_2864_ = lean_ctor_get(v_s_2837_, 4);
lean_dec(v_unused_2864_);
v_unused_2865_ = lean_ctor_get(v_s_2837_, 3);
lean_dec(v_unused_2865_);
v_unused_2866_ = lean_ctor_get(v_s_2837_, 2);
lean_dec(v_unused_2866_);
v_unused_2867_ = lean_ctor_get(v_s_2837_, 1);
lean_dec(v_unused_2867_);
v_unused_2868_ = lean_ctor_get(v_s_2837_, 0);
lean_dec(v_unused_2868_);
v___x_2852_ = v_s_2837_;
v_isShared_2853_ = v_isSharedCheck_2862_;
goto v_resetjp_2851_;
}
else
{
lean_dec(v_s_2837_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2862_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v_tk_2854_; lean_object* v___x_2855_; lean_object* v___x_2857_; 
v_tk_2854_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_2840_);
lean_inc(v_pos_2842_);
v___x_2855_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2855_, 0, v_startPos_2836_);
lean_ctor_set(v___x_2855_, 1, v_pos_2842_);
lean_ctor_set(v___x_2855_, 2, v_tk_2854_);
if (v_isShared_2847_ == 0)
{
lean_ctor_set(v___x_2846_, 0, v___x_2855_);
v___x_2857_ = v___x_2846_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2861_; 
v_reuseFailAlloc_2861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2861_, 0, v___x_2855_);
lean_ctor_set(v_reuseFailAlloc_2861_, 1, v_parserCache_2844_);
v___x_2857_ = v_reuseFailAlloc_2861_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
lean_object* v___x_2859_; 
if (v_isShared_2853_ == 0)
{
lean_ctor_set(v___x_2852_, 3, v___x_2857_);
v___x_2859_ = v___x_2852_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v_stxStack_2840_);
lean_ctor_set(v_reuseFailAlloc_2860_, 1, v_lhsPrec_2841_);
lean_ctor_set(v_reuseFailAlloc_2860_, 2, v_pos_2842_);
lean_ctor_set(v_reuseFailAlloc_2860_, 3, v___x_2857_);
lean_ctor_set(v_reuseFailAlloc_2860_, 4, v_errorMsg_2839_);
lean_ctor_set(v_reuseFailAlloc_2860_, 5, v_recoveredErrors_2843_);
v___x_2859_ = v_reuseFailAlloc_2860_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
return v___x_2859_;
}
}
}
}
else
{
lean_del_object(v___x_2846_);
lean_dec_ref(v_parserCache_2844_);
lean_dec(v_startPos_2836_);
return v_s_2837_;
}
}
}
else
{
lean_dec_ref(v_cache_2838_);
lean_dec(v_startPos_2836_);
return v_s_2837_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tokenFn(lean_object* v_expected_2871_, lean_object* v_c_2872_, lean_object* v_s_2873_){
_start:
{
lean_object* v_pos_2874_; lean_object* v_cache_2875_; lean_object* v_toInputContext_2876_; uint8_t v___x_2877_; 
v_pos_2874_ = lean_ctor_get(v_s_2873_, 2);
v_cache_2875_ = lean_ctor_get(v_s_2873_, 3);
v_toInputContext_2876_ = lean_ctor_get(v_c_2872_, 0);
v___x_2877_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2876_, v_pos_2874_);
if (v___x_2877_ == 0)
{
lean_object* v_tokenCache_2878_; lean_object* v_startPos_2879_; lean_object* v_stopPos_2880_; lean_object* v_token_2881_; uint8_t v_decide_2882_; 
lean_dec(v_expected_2871_);
v_tokenCache_2878_ = lean_ctor_get(v_cache_2875_, 0);
v_startPos_2879_ = lean_ctor_get(v_tokenCache_2878_, 0);
v_stopPos_2880_ = lean_ctor_get(v_tokenCache_2878_, 1);
v_token_2881_ = lean_ctor_get(v_tokenCache_2878_, 2);
v_decide_2882_ = lean_nat_dec_eq(v_startPos_2879_, v_pos_2874_);
if (v_decide_2882_ == 0)
{
lean_object* v_s_2883_; lean_object* v___x_2884_; 
lean_inc(v_pos_2874_);
v_s_2883_ = l___private_Lean_Parser_Basic_0__Lean_Parser_tokenFnAux(v_c_2872_, v_s_2873_);
v___x_2884_ = l___private_Lean_Parser_Basic_0__Lean_Parser_updateTokenCache(v_pos_2874_, v_s_2883_);
return v___x_2884_;
}
else
{
lean_object* v_s_2885_; lean_object* v___x_2886_; 
lean_inc(v_token_2881_);
lean_inc(v_stopPos_2880_);
lean_dec_ref(v_c_2872_);
v_s_2885_ = l_Lean_Parser_ParserState_pushSyntax(v_s_2873_, v_token_2881_);
v___x_2886_ = l_Lean_Parser_ParserState_setPos(v_s_2885_, v_stopPos_2880_);
return v___x_2886_;
}
}
else
{
lean_object* v___x_2887_; 
lean_dec_ref(v_c_2872_);
v___x_2887_ = l_Lean_Parser_ParserState_mkEOIError(v_s_2873_, v_expected_2871_);
return v___x_2887_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_peekTokenAux(lean_object* v_c_2888_, lean_object* v_s_2889_){
_start:
{
lean_object* v_pos_2890_; lean_object* v_iniSz_2891_; lean_object* v___x_2892_; lean_object* v_s_2893_; lean_object* v_errorMsg_2894_; 
v_pos_2890_ = lean_ctor_get(v_s_2889_, 2);
lean_inc(v_pos_2890_);
v_iniSz_2891_ = l_Lean_Parser_ParserState_stackSize(v_s_2889_);
v___x_2892_ = lean_box(0);
v_s_2893_ = l_Lean_Parser_tokenFn(v___x_2892_, v_c_2888_, v_s_2889_);
v_errorMsg_2894_ = lean_ctor_get(v_s_2893_, 4);
lean_inc(v_errorMsg_2894_);
if (lean_obj_tag(v_errorMsg_2894_) == 1)
{
lean_object* v___x_2896_; uint8_t v_isShared_2897_; uint8_t v_isSharedCheck_2903_; 
v_isSharedCheck_2903_ = !lean_is_exclusive(v_errorMsg_2894_);
if (v_isSharedCheck_2903_ == 0)
{
lean_object* v_unused_2904_; 
v_unused_2904_ = lean_ctor_get(v_errorMsg_2894_, 0);
lean_dec(v_unused_2904_);
v___x_2896_ = v_errorMsg_2894_;
v_isShared_2897_ = v_isSharedCheck_2903_;
goto v_resetjp_2895_;
}
else
{
lean_dec(v_errorMsg_2894_);
v___x_2896_ = lean_box(0);
v_isShared_2897_ = v_isSharedCheck_2903_;
goto v_resetjp_2895_;
}
v_resetjp_2895_:
{
lean_object* v___x_2898_; lean_object* v___x_2900_; 
lean_inc_ref(v_s_2893_);
v___x_2898_ = l_Lean_Parser_ParserState_restore(v_s_2893_, v_iniSz_2891_, v_pos_2890_);
lean_dec(v_iniSz_2891_);
if (v_isShared_2897_ == 0)
{
lean_ctor_set_tag(v___x_2896_, 0);
lean_ctor_set(v___x_2896_, 0, v_s_2893_);
v___x_2900_ = v___x_2896_;
goto v_reusejp_2899_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v_s_2893_);
v___x_2900_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2899_;
}
v_reusejp_2899_:
{
lean_object* v___x_2901_; 
v___x_2901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2901_, 0, v___x_2898_);
lean_ctor_set(v___x_2901_, 1, v___x_2900_);
return v___x_2901_;
}
}
}
else
{
lean_object* v_stxStack_2905_; lean_object* v_stx_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; 
lean_dec(v_errorMsg_2894_);
v_stxStack_2905_ = lean_ctor_get(v_s_2893_, 0);
v_stx_2906_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_2905_);
v___x_2907_ = l_Lean_Parser_ParserState_restore(v_s_2893_, v_iniSz_2891_, v_pos_2890_);
lean_dec(v_iniSz_2891_);
v___x_2908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2908_, 0, v_stx_2906_);
v___x_2909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2907_);
lean_ctor_set(v___x_2909_, 1, v___x_2908_);
return v___x_2909_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_peekToken(lean_object* v_c_2910_, lean_object* v_s_2911_){
_start:
{
lean_object* v_cache_2912_; lean_object* v_tokenCache_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2926_; 
v_cache_2912_ = lean_ctor_get(v_s_2911_, 3);
lean_inc_ref(v_cache_2912_);
v_tokenCache_2913_ = lean_ctor_get(v_cache_2912_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v_cache_2912_);
if (v_isSharedCheck_2926_ == 0)
{
lean_object* v_unused_2927_; 
v_unused_2927_ = lean_ctor_get(v_cache_2912_, 1);
lean_dec(v_unused_2927_);
v___x_2915_ = v_cache_2912_;
v_isShared_2916_ = v_isSharedCheck_2926_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_tokenCache_2913_);
lean_dec(v_cache_2912_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2926_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
lean_object* v_pos_2917_; lean_object* v_startPos_2918_; lean_object* v_token_2919_; uint8_t v_decide_2920_; 
v_pos_2917_ = lean_ctor_get(v_s_2911_, 2);
v_startPos_2918_ = lean_ctor_get(v_tokenCache_2913_, 0);
lean_inc(v_startPos_2918_);
v_token_2919_ = lean_ctor_get(v_tokenCache_2913_, 2);
lean_inc(v_token_2919_);
lean_dec_ref(v_tokenCache_2913_);
v_decide_2920_ = lean_nat_dec_eq(v_startPos_2918_, v_pos_2917_);
lean_dec(v_startPos_2918_);
if (v_decide_2920_ == 0)
{
lean_object* v___x_2921_; 
lean_dec(v_token_2919_);
lean_del_object(v___x_2915_);
v___x_2921_ = l_Lean_Parser_peekTokenAux(v_c_2910_, v_s_2911_);
return v___x_2921_;
}
else
{
lean_object* v___x_2922_; lean_object* v___x_2924_; 
lean_dec_ref(v_c_2910_);
v___x_2922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2922_, 0, v_token_2919_);
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 1, v___x_2922_);
lean_ctor_set(v___x_2915_, 0, v_s_2911_);
v___x_2924_ = v___x_2915_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v_s_2911_);
lean_ctor_set(v_reuseFailAlloc_2925_, 1, v___x_2922_);
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
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdentFn(uint8_t v_includeWhitespace_2928_, lean_object* v_c_2929_, lean_object* v_s_2930_){
_start:
{
lean_object* v_pos_2931_; lean_object* v_toInputContext_2932_; uint8_t v___x_2933_; 
v_pos_2931_ = lean_ctor_get(v_s_2930_, 2);
v_toInputContext_2932_ = lean_ctor_get(v_c_2929_, 0);
v___x_2933_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2932_, v_pos_2931_);
if (v___x_2933_ == 0)
{
lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; 
lean_inc(v_pos_2931_);
v___x_2934_ = lean_box(0);
v___x_2935_ = lean_box(0);
v___x_2936_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(v_pos_2931_, v___x_2934_, v_includeWhitespace_2928_, v___x_2935_, v_c_2929_, v_s_2930_);
return v___x_2936_;
}
else
{
lean_object* v___x_2937_; lean_object* v___x_2938_; 
lean_dec_ref(v_c_2929_);
v___x_2937_ = lean_box(0);
v___x_2938_ = l_Lean_Parser_ParserState_mkEOIError(v_s_2930_, v___x_2937_);
return v___x_2938_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdentFn___boxed(lean_object* v_includeWhitespace_2939_, lean_object* v_c_2940_, lean_object* v_s_2941_){
_start:
{
uint8_t v_includeWhitespace_boxed_2942_; lean_object* v_res_2943_; 
v_includeWhitespace_boxed_2942_ = lean_unbox(v_includeWhitespace_2939_);
v_res_2943_ = l_Lean_Parser_rawIdentFn(v_includeWhitespace_boxed_2942_, v_c_2940_, v_s_2941_);
return v_res_2943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_satisfySymbolFn(lean_object* v_p_2944_, lean_object* v_expected_2945_, lean_object* v_c_2946_, lean_object* v_s_2947_){
_start:
{
lean_object* v_pos_2948_; lean_object* v_s_2949_; lean_object* v_stxStack_2950_; lean_object* v_errorMsg_2951_; lean_object* v___x_2952_; uint8_t v___x_2953_; 
v_pos_2948_ = lean_ctor_get(v_s_2947_, 2);
lean_inc(v_pos_2948_);
lean_inc(v_expected_2945_);
v_s_2949_ = l_Lean_Parser_tokenFn(v_expected_2945_, v_c_2946_, v_s_2947_);
v_stxStack_2950_ = lean_ctor_get(v_s_2949_, 0);
v_errorMsg_2951_ = lean_ctor_get(v_s_2949_, 4);
v___x_2952_ = lean_box(0);
v___x_2953_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_2951_, v___x_2952_);
if (v___x_2953_ == 0)
{
lean_dec(v_pos_2948_);
lean_dec(v_expected_2945_);
lean_dec_ref(v_p_2944_);
return v_s_2949_;
}
else
{
lean_object* v___x_2954_; 
v___x_2954_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_2950_);
if (lean_obj_tag(v___x_2954_) == 2)
{
lean_object* v_val_2955_; lean_object* v___x_2956_; uint8_t v___x_2957_; 
v_val_2955_ = lean_ctor_get(v___x_2954_, 1);
lean_inc_ref(v_val_2955_);
lean_dec_ref_known(v___x_2954_, 2);
v___x_2956_ = lean_apply_1(v_p_2944_, v_val_2955_);
v___x_2957_ = lean_unbox(v___x_2956_);
if (v___x_2957_ == 0)
{
lean_object* v___x_2958_; 
v___x_2958_ = l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(v_s_2949_, v_expected_2945_, v_pos_2948_);
return v___x_2958_;
}
else
{
lean_dec(v_pos_2948_);
lean_dec(v_expected_2945_);
return v_s_2949_;
}
}
else
{
lean_object* v___x_2959_; 
lean_dec(v___x_2954_);
lean_dec_ref(v_p_2944_);
v___x_2959_ = l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(v_s_2949_, v_expected_2945_, v_pos_2948_);
return v___x_2959_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_symbolFnAux___lam__0(lean_object* v_sym_2960_, lean_object* v_s_2961_){
_start:
{
uint8_t v___x_2962_; 
v___x_2962_ = lean_string_dec_eq(v_s_2961_, v_sym_2960_);
return v___x_2962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolFnAux___lam__0___boxed(lean_object* v_sym_2963_, lean_object* v_s_2964_){
_start:
{
uint8_t v_res_2965_; lean_object* v_r_2966_; 
v_res_2965_ = l_Lean_Parser_symbolFnAux___lam__0(v_sym_2963_, v_s_2964_);
lean_dec_ref(v_s_2964_);
lean_dec_ref(v_sym_2963_);
v_r_2966_ = lean_box(v_res_2965_);
return v_r_2966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolFnAux(lean_object* v_sym_2967_, lean_object* v_errorMsg_2968_, lean_object* v_a_2969_, lean_object* v_a_2970_){
_start:
{
lean_object* v___f_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___f_2971_ = lean_alloc_closure((void*)(l_Lean_Parser_symbolFnAux___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2971_, 0, v_sym_2967_);
v___x_2972_ = lean_box(0);
v___x_2973_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2973_, 0, v_errorMsg_2968_);
lean_ctor_set(v___x_2973_, 1, v___x_2972_);
v___x_2974_ = l_Lean_Parser_satisfySymbolFn(v___f_2971_, v___x_2973_, v_a_2969_, v_a_2970_);
return v___x_2974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolInfo___lam__0(lean_object* v_sym_2975_, lean_object* v_tks_2976_){
_start:
{
lean_object* v___x_2977_; 
v___x_2977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2977_, 0, v_sym_2975_);
lean_ctor_set(v___x_2977_, 1, v_tks_2976_);
return v___x_2977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolInfo(lean_object* v_sym_2978_){
_start:
{
lean_object* v___f_2979_; lean_object* v___f_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
lean_inc_ref(v_sym_2978_);
v___f_2979_ = lean_alloc_closure((void*)(l_Lean_Parser_symbolInfo___lam__0), 2, 1);
lean_closure_set(v___f_2979_, 0, v_sym_2978_);
v___f_2980_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__1));
v___x_2981_ = lean_box(0);
v___x_2982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2982_, 0, v_sym_2978_);
lean_ctor_set(v___x_2982_, 1, v___x_2981_);
v___x_2983_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2983_, 0, v___x_2982_);
v___x_2984_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2984_, 0, v___f_2979_);
lean_ctor_set(v___x_2984_, 1, v___f_2980_);
lean_ctor_set(v___x_2984_, 2, v___x_2983_);
return v___x_2984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolFn(lean_object* v_sym_2985_, lean_object* v_a_2986_, lean_object* v_a_2987_){
_start:
{
lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2988_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_2989_ = lean_string_append(v___x_2988_, v_sym_2985_);
v___x_2990_ = lean_string_append(v___x_2989_, v___x_2988_);
v___x_2991_ = l_Lean_Parser_symbolFnAux(v_sym_2985_, v___x_2990_, v_a_2986_, v_a_2987_);
return v___x_2991_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolNoAntiquot(lean_object* v_sym_2992_){
_start:
{
lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v_str_2997_; lean_object* v_startInclusive_2998_; lean_object* v_endExclusive_2999_; lean_object* v_sym_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; 
v___x_2993_ = lean_unsigned_to_nat(0u);
v___x_2994_ = lean_string_utf8_byte_size(v_sym_2992_);
v___x_2995_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2995_, 0, v_sym_2992_);
lean_ctor_set(v___x_2995_, 1, v___x_2993_);
lean_ctor_set(v___x_2995_, 2, v___x_2994_);
v___x_2996_ = l_String_Slice_trimAscii(v___x_2995_);
v_str_2997_ = lean_ctor_get(v___x_2996_, 0);
lean_inc_ref(v_str_2997_);
v_startInclusive_2998_ = lean_ctor_get(v___x_2996_, 1);
lean_inc(v_startInclusive_2998_);
v_endExclusive_2999_ = lean_ctor_get(v___x_2996_, 2);
lean_inc(v_endExclusive_2999_);
lean_dec_ref(v___x_2996_);
v_sym_3000_ = lean_string_utf8_extract_fast(v_str_2997_, v_startInclusive_2998_, v_endExclusive_2999_);
lean_dec(v_endExclusive_2999_);
lean_dec(v_startInclusive_2998_);
lean_dec_ref(v_str_2997_);
lean_inc_ref(v_sym_3000_);
v___x_3001_ = l_Lean_Parser_symbolInfo(v_sym_3000_);
v___x_3002_ = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn), 3, 1);
lean_closure_set(v___x_3002_, 0, v_sym_3000_);
v___x_3003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3003_, 0, v___x_3001_);
lean_ctor_set(v___x_3003_, 1, v___x_3002_);
return v___x_3003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolFnAux(lean_object* v_sym_3004_, lean_object* v_errorMsg_3005_, lean_object* v_c_3006_, lean_object* v_s_3007_){
_start:
{
lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v_s_3010_; lean_object* v_stxStack_3014_; lean_object* v_errorMsg_3015_; lean_object* v___x_3016_; uint8_t v___x_3017_; 
v___x_3008_ = lean_box(0);
lean_inc_ref(v_errorMsg_3005_);
v___x_3009_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3009_, 0, v_errorMsg_3005_);
lean_ctor_set(v___x_3009_, 1, v___x_3008_);
v_s_3010_ = l_Lean_Parser_tokenFn(v___x_3009_, v_c_3006_, v_s_3007_);
v_stxStack_3014_ = lean_ctor_get(v_s_3010_, 0);
v_errorMsg_3015_ = lean_ctor_get(v_s_3010_, 4);
v___x_3016_ = lean_box(0);
v___x_3017_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_3015_, v___x_3016_);
if (v___x_3017_ == 0)
{
lean_dec_ref(v_errorMsg_3005_);
lean_dec_ref(v_sym_3004_);
return v_s_3010_;
}
else
{
lean_object* v___x_3018_; 
v___x_3018_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3014_);
switch(lean_obj_tag(v___x_3018_))
{
case 2:
{
lean_object* v_val_3019_; uint8_t v___x_3020_; 
v_val_3019_ = lean_ctor_get(v___x_3018_, 1);
lean_inc_ref(v_val_3019_);
lean_dec_ref_known(v___x_3018_, 2);
v___x_3020_ = lean_string_dec_eq(v_sym_3004_, v_val_3019_);
lean_dec_ref(v_val_3019_);
lean_dec_ref(v_sym_3004_);
if (v___x_3020_ == 0)
{
goto v___jp_3011_;
}
else
{
lean_dec_ref(v_errorMsg_3005_);
return v_s_3010_;
}
}
case 3:
{
lean_object* v_rawVal_3021_; lean_object* v_info_3022_; lean_object* v_str_3023_; lean_object* v_startPos_3024_; lean_object* v_stopPos_3025_; lean_object* v___x_3026_; uint8_t v___x_3027_; 
v_rawVal_3021_ = lean_ctor_get(v___x_3018_, 1);
lean_inc_ref(v_rawVal_3021_);
v_info_3022_ = lean_ctor_get(v___x_3018_, 0);
lean_inc(v_info_3022_);
lean_dec_ref_known(v___x_3018_, 4);
v_str_3023_ = lean_ctor_get(v_rawVal_3021_, 0);
lean_inc_ref(v_str_3023_);
v_startPos_3024_ = lean_ctor_get(v_rawVal_3021_, 1);
lean_inc(v_startPos_3024_);
v_stopPos_3025_ = lean_ctor_get(v_rawVal_3021_, 2);
lean_inc(v_stopPos_3025_);
lean_dec_ref(v_rawVal_3021_);
v___x_3026_ = lean_string_utf8_extract(v_str_3023_, v_startPos_3024_, v_stopPos_3025_);
lean_dec(v_stopPos_3025_);
lean_dec(v_startPos_3024_);
lean_dec_ref(v_str_3023_);
v___x_3027_ = lean_string_dec_eq(v_sym_3004_, v___x_3026_);
lean_dec_ref(v___x_3026_);
if (v___x_3027_ == 0)
{
lean_dec(v_info_3022_);
lean_dec_ref(v_sym_3004_);
goto v___jp_3011_;
}
else
{
lean_object* v_s_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; 
lean_dec_ref(v_errorMsg_3005_);
v_s_3028_ = l_Lean_Parser_ParserState_popSyntax(v_s_3010_);
v___x_3029_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3029_, 0, v_info_3022_);
lean_ctor_set(v___x_3029_, 1, v_sym_3004_);
v___x_3030_ = l_Lean_Parser_ParserState_pushSyntax(v_s_3028_, v___x_3029_);
return v___x_3030_;
}
}
default: 
{
lean_dec(v___x_3018_);
lean_dec_ref(v_sym_3004_);
goto v___jp_3011_;
}
}
}
v___jp_3011_:
{
lean_object* v___x_3012_; lean_object* v___x_3013_; 
v___x_3012_ = lean_unsigned_to_nat(0u);
v___x_3013_ = l_Lean_Parser_ParserState_mkUnexpectedTokenError(v_s_3010_, v_errorMsg_3005_, v___x_3012_);
return v___x_3013_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolFn(lean_object* v_sym_3031_, lean_object* v_a_3032_, lean_object* v_a_3033_){
_start:
{
lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; 
v___x_3034_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_3035_ = lean_string_append(v___x_3034_, v_sym_3031_);
v___x_3036_ = lean_string_append(v___x_3035_, v___x_3034_);
v___x_3037_ = l_Lean_Parser_nonReservedSymbolFnAux(v_sym_3031_, v___x_3036_, v_a_3032_, v_a_3033_);
return v___x_3037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolInfo(lean_object* v_sym_3042_, uint8_t v_includeIdent_3043_){
_start:
{
lean_object* v___f_3044_; lean_object* v___f_3045_; 
v___f_3044_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__0));
v___f_3045_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__1));
if (v_includeIdent_3043_ == 0)
{
lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3046_ = lean_box(0);
v___x_3047_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3047_, 0, v_sym_3042_);
lean_ctor_set(v___x_3047_, 1, v___x_3046_);
v___x_3048_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3048_, 0, v___x_3047_);
v___x_3049_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3049_, 0, v___f_3044_);
lean_ctor_set(v___x_3049_, 1, v___f_3045_);
lean_ctor_set(v___x_3049_, 2, v___x_3048_);
return v___x_3049_;
}
else
{
lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; 
v___x_3050_ = ((lean_object*)(l_Lean_Parser_nonReservedSymbolInfo___closed__1));
v___x_3051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3051_, 0, v_sym_3042_);
lean_ctor_set(v___x_3051_, 1, v___x_3050_);
v___x_3052_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3052_, 0, v___x_3051_);
v___x_3053_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3053_, 0, v___f_3044_);
lean_ctor_set(v___x_3053_, 1, v___f_3045_);
lean_ctor_set(v___x_3053_, 2, v___x_3052_);
return v___x_3053_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolInfo___boxed(lean_object* v_sym_3054_, lean_object* v_includeIdent_3055_){
_start:
{
uint8_t v_includeIdent_boxed_3056_; lean_object* v_res_3057_; 
v_includeIdent_boxed_3056_ = lean_unbox(v_includeIdent_3055_);
v_res_3057_ = l_Lean_Parser_nonReservedSymbolInfo(v_sym_3054_, v_includeIdent_boxed_3056_);
return v_res_3057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolNoAntiquot(lean_object* v_sym_3058_, uint8_t v_includeIdent_3059_){
_start:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v_str_3064_; lean_object* v_startInclusive_3065_; lean_object* v_endExclusive_3066_; lean_object* v_sym_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; 
v___x_3060_ = lean_unsigned_to_nat(0u);
v___x_3061_ = lean_string_utf8_byte_size(v_sym_3058_);
v___x_3062_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3062_, 0, v_sym_3058_);
lean_ctor_set(v___x_3062_, 1, v___x_3060_);
lean_ctor_set(v___x_3062_, 2, v___x_3061_);
v___x_3063_ = l_String_Slice_trimAscii(v___x_3062_);
v_str_3064_ = lean_ctor_get(v___x_3063_, 0);
lean_inc_ref(v_str_3064_);
v_startInclusive_3065_ = lean_ctor_get(v___x_3063_, 1);
lean_inc(v_startInclusive_3065_);
v_endExclusive_3066_ = lean_ctor_get(v___x_3063_, 2);
lean_inc(v_endExclusive_3066_);
lean_dec_ref(v___x_3063_);
v_sym_3067_ = lean_string_utf8_extract_fast(v_str_3064_, v_startInclusive_3065_, v_endExclusive_3066_);
lean_dec(v_endExclusive_3066_);
lean_dec(v_startInclusive_3065_);
lean_dec_ref(v_str_3064_);
lean_inc_ref(v_sym_3067_);
v___x_3068_ = l_Lean_Parser_nonReservedSymbolInfo(v_sym_3067_, v_includeIdent_3059_);
v___x_3069_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbolFn), 3, 1);
lean_closure_set(v___x_3069_, 0, v_sym_3067_);
v___x_3070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3068_);
lean_ctor_set(v___x_3070_, 1, v___x_3069_);
return v___x_3070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolNoAntiquot___boxed(lean_object* v_sym_3071_, lean_object* v_includeIdent_3072_){
_start:
{
uint8_t v_includeIdent_boxed_3073_; lean_object* v_res_3074_; 
v_includeIdent_boxed_3073_ = lean_unbox(v_includeIdent_3072_);
v_res_3074_ = l_Lean_Parser_nonReservedSymbolNoAntiquot(v_sym_3071_, v_includeIdent_boxed_3073_);
return v_res_3074_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_strAux_parse(lean_object* v_sym_3075_, lean_object* v_errorMsg_3076_, lean_object* v_j_3077_, lean_object* v_c_3078_, lean_object* v_s_3079_){
_start:
{
uint8_t v___x_3080_; 
v___x_3080_ = lean_string_utf8_at_end(v_sym_3075_, v_j_3077_);
if (v___x_3080_ == 0)
{
lean_object* v_pos_3081_; lean_object* v_toInputContext_3082_; uint8_t v___x_3083_; 
v_pos_3081_ = lean_ctor_get(v_s_3079_, 2);
v_toInputContext_3082_ = lean_ctor_get(v_c_3078_, 0);
v___x_3083_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_3082_, v_pos_3081_);
if (v___x_3083_ == 0)
{
lean_object* v_inputString_3084_; uint32_t v___x_3085_; uint32_t v___x_3086_; uint8_t v___x_3087_; 
v_inputString_3084_ = lean_ctor_get(v_toInputContext_3082_, 0);
v___x_3085_ = lean_string_utf8_get_fast(v_sym_3075_, v_j_3077_);
v___x_3086_ = lean_string_utf8_get_fast(v_inputString_3084_, v_pos_3081_);
v___x_3087_ = lean_uint32_dec_eq(v___x_3085_, v___x_3086_);
if (v___x_3087_ == 0)
{
lean_object* v___x_3088_; 
lean_dec(v_j_3077_);
v___x_3088_ = l_Lean_Parser_ParserState_mkError(v_s_3079_, v_errorMsg_3076_);
return v___x_3088_;
}
else
{
lean_object* v___x_3089_; lean_object* v___x_3090_; 
lean_inc(v_pos_3081_);
v___x_3089_ = lean_string_utf8_next_fast(v_sym_3075_, v_j_3077_);
lean_dec(v_j_3077_);
v___x_3090_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_3079_, v_c_3078_, v_pos_3081_);
lean_dec(v_pos_3081_);
v_j_3077_ = v___x_3089_;
v_s_3079_ = v___x_3090_;
goto _start;
}
}
else
{
lean_object* v___x_3092_; 
lean_dec(v_j_3077_);
v___x_3092_ = l_Lean_Parser_ParserState_mkError(v_s_3079_, v_errorMsg_3076_);
return v___x_3092_;
}
}
else
{
lean_dec(v_j_3077_);
lean_dec_ref(v_errorMsg_3076_);
return v_s_3079_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_strAux_parse___boxed(lean_object* v_sym_3093_, lean_object* v_errorMsg_3094_, lean_object* v_j_3095_, lean_object* v_c_3096_, lean_object* v_s_3097_){
_start:
{
lean_object* v_res_3098_; 
v_res_3098_ = l___private_Lean_Parser_Basic_0__Lean_Parser_strAux_parse(v_sym_3093_, v_errorMsg_3094_, v_j_3095_, v_c_3096_, v_s_3097_);
lean_dec_ref(v_c_3096_);
lean_dec_ref(v_sym_3093_);
return v_res_3098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strAux(lean_object* v_sym_3099_, lean_object* v_errorMsg_3100_, lean_object* v_j_3101_, lean_object* v_c_3102_, lean_object* v_s_3103_){
_start:
{
lean_object* v___x_3104_; 
v___x_3104_ = l___private_Lean_Parser_Basic_0__Lean_Parser_strAux_parse(v_sym_3099_, v_errorMsg_3100_, v_j_3101_, v_c_3102_, v_s_3103_);
return v___x_3104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strAux___boxed(lean_object* v_sym_3105_, lean_object* v_errorMsg_3106_, lean_object* v_j_3107_, lean_object* v_c_3108_, lean_object* v_s_3109_){
_start:
{
lean_object* v_res_3110_; 
v_res_3110_ = l_Lean_Parser_strAux(v_sym_3105_, v_errorMsg_3106_, v_j_3107_, v_c_3108_, v_s_3109_);
lean_dec_ref(v_c_3108_);
lean_dec_ref(v_sym_3105_);
return v_res_3110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg(lean_object* v_as_3111_, lean_object* v_i_3112_){
_start:
{
lean_object* v_zero_3113_; uint8_t v_isZero_3114_; 
v_zero_3113_ = lean_unsigned_to_nat(0u);
v_isZero_3114_ = lean_nat_dec_eq(v_i_3112_, v_zero_3113_);
if (v_isZero_3114_ == 1)
{
lean_object* v___x_3115_; 
lean_dec(v_i_3112_);
v___x_3115_ = lean_box(0);
return v___x_3115_;
}
else
{
lean_object* v_one_3116_; lean_object* v_n_3117_; lean_object* v___x_3118_; uint8_t v___x_3119_; 
v_one_3116_ = lean_unsigned_to_nat(1u);
v_n_3117_ = lean_nat_sub(v_i_3112_, v_one_3116_);
lean_dec(v_i_3112_);
v___x_3118_ = l_Subarray_get___redArg(v_as_3111_, v_n_3117_);
v___x_3119_ = l_Lean_Syntax_isNone(v___x_3118_);
if (v___x_3119_ == 0)
{
lean_object* v___x_3120_; 
lean_dec(v_n_3117_);
v___x_3120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3120_, 0, v___x_3118_);
return v___x_3120_;
}
else
{
lean_dec(v___x_3118_);
v_i_3112_ = v_n_3117_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg___boxed(lean_object* v_as_3122_, lean_object* v_i_3123_){
_start:
{
lean_object* v_res_3124_; 
v_res_3124_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg(v_as_3122_, v_i_3123_);
lean_dec_ref(v_as_3122_);
return v_res_3124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone(lean_object* v_stack_3125_){
_start:
{
lean_object* v___x_3126_; lean_object* v_start_3127_; lean_object* v_stop_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3126_ = l_Lean_Parser_SyntaxStack_toSubarray(v_stack_3125_);
v_start_3127_ = lean_ctor_get(v___x_3126_, 1);
v_stop_3128_ = lean_ctor_get(v___x_3126_, 2);
v___x_3129_ = lean_nat_sub(v_stop_3128_, v_start_3127_);
v___x_3130_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg(v___x_3126_, v___x_3129_);
lean_dec_ref(v___x_3126_);
if (lean_obj_tag(v___x_3130_) == 0)
{
lean_object* v___x_3131_; 
v___x_3131_ = lean_box(0);
return v___x_3131_;
}
else
{
lean_object* v_val_3132_; 
v_val_3132_ = lean_ctor_get(v___x_3130_, 0);
lean_inc(v_val_3132_);
lean_dec_ref_known(v___x_3130_, 1);
return v_val_3132_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0(lean_object* v_as_3133_, lean_object* v_i_3134_, lean_object* v_a_3135_){
_start:
{
lean_object* v___x_3136_; 
v___x_3136_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg(v_as_3133_, v_i_3134_);
return v___x_3136_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___boxed(lean_object* v_as_3137_, lean_object* v_i_3138_, lean_object* v_a_3139_){
_start:
{
lean_object* v_res_3140_; 
v_res_3140_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0(v_as_3137_, v_i_3138_, v_a_3139_);
lean_dec_ref(v_as_3137_);
return v_res_3140_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_checkTailWs(lean_object* v_prev_3141_){
_start:
{
lean_object* v___x_3142_; 
v___x_3142_ = l_Lean_Syntax_getTailInfo(v_prev_3141_);
if (lean_obj_tag(v___x_3142_) == 0)
{
lean_object* v_trailing_3143_; lean_object* v_startPos_3144_; lean_object* v_stopPos_3145_; uint8_t v___x_3146_; 
v_trailing_3143_ = lean_ctor_get(v___x_3142_, 2);
lean_inc_ref(v_trailing_3143_);
lean_dec_ref_known(v___x_3142_, 4);
v_startPos_3144_ = lean_ctor_get(v_trailing_3143_, 1);
lean_inc(v_startPos_3144_);
v_stopPos_3145_ = lean_ctor_get(v_trailing_3143_, 2);
lean_inc(v_stopPos_3145_);
lean_dec_ref(v_trailing_3143_);
v___x_3146_ = lean_nat_dec_lt(v_startPos_3144_, v_stopPos_3145_);
lean_dec(v_stopPos_3145_);
lean_dec(v_startPos_3144_);
return v___x_3146_;
}
else
{
uint8_t v___x_3147_; 
lean_dec(v___x_3142_);
v___x_3147_ = 0;
return v___x_3147_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkTailWs___boxed(lean_object* v_prev_3148_){
_start:
{
uint8_t v_res_3149_; lean_object* v_r_3150_; 
v_res_3149_ = l_Lean_Parser_checkTailWs(v_prev_3148_);
lean_dec(v_prev_3148_);
v_r_3150_ = lean_box(v_res_3149_);
return v_r_3150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBeforeFn___redArg(lean_object* v_errorMsg_3151_, lean_object* v_s_3152_){
_start:
{
lean_object* v_stxStack_3153_; lean_object* v_prev_3154_; uint8_t v___x_3155_; 
v_stxStack_3153_ = lean_ctor_get(v_s_3152_, 0);
lean_inc_ref(v_stxStack_3153_);
v_prev_3154_ = l___private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone(v_stxStack_3153_);
v___x_3155_ = l_Lean_Parser_checkTailWs(v_prev_3154_);
lean_dec(v_prev_3154_);
if (v___x_3155_ == 0)
{
lean_object* v___x_3156_; 
v___x_3156_ = l_Lean_Parser_ParserState_mkError(v_s_3152_, v_errorMsg_3151_);
return v___x_3156_;
}
else
{
lean_dec_ref(v_errorMsg_3151_);
return v_s_3152_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBeforeFn(lean_object* v_errorMsg_3157_, lean_object* v_x_3158_, lean_object* v_s_3159_){
_start:
{
lean_object* v___x_3160_; 
v___x_3160_ = l_Lean_Parser_checkWsBeforeFn___redArg(v_errorMsg_3157_, v_s_3159_);
return v___x_3160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBeforeFn___boxed(lean_object* v_errorMsg_3161_, lean_object* v_x_3162_, lean_object* v_s_3163_){
_start:
{
lean_object* v_res_3164_; 
v_res_3164_ = l_Lean_Parser_checkWsBeforeFn(v_errorMsg_3161_, v_x_3162_, v_s_3163_);
lean_dec_ref(v_x_3162_);
return v_res_3164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBefore(lean_object* v_errorMsg_3165_){
_start:
{
lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___x_3166_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_3167_ = lean_alloc_closure((void*)(l_Lean_Parser_checkWsBeforeFn___boxed), 3, 1);
lean_closure_set(v___x_3167_, 0, v_errorMsg_3165_);
v___x_3168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3168_, 0, v___x_3166_);
lean_ctor_set(v___x_3168_, 1, v___x_3167_);
return v___x_3168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1(){
_start:
{
lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; 
v___x_3176_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1));
v___x_3177_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__2));
v___x_3178_ = l_Lean_addBuiltinDocString(v___x_3176_, v___x_3177_);
return v___x_3178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___boxed(lean_object* v_a_3179_){
_start:
{
lean_object* v_res_3180_; 
v_res_3180_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1();
return v_res_3180_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_checkTailLinebreak_spec__0(lean_object* v_msg_3181_){
_start:
{
lean_object* v___x_3182_; lean_object* v___x_3183_; 
v___x_3182_ = l_String_instInhabitedSlice;
v___x_3183_ = lean_panic_fn_borrowed(v___x_3182_, v_msg_3181_);
return v___x_3183_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg(lean_object* v_s_3184_, lean_object* v_a_3185_, uint8_t v_b_3186_){
_start:
{
lean_object* v_str_3187_; lean_object* v_startInclusive_3188_; lean_object* v_endExclusive_3189_; lean_object* v___x_3190_; uint8_t v_decide_3191_; 
v_str_3187_ = lean_ctor_get(v_s_3184_, 0);
v_startInclusive_3188_ = lean_ctor_get(v_s_3184_, 1);
v_endExclusive_3189_ = lean_ctor_get(v_s_3184_, 2);
v___x_3190_ = lean_nat_sub(v_endExclusive_3189_, v_startInclusive_3188_);
v_decide_3191_ = lean_nat_dec_eq(v_a_3185_, v___x_3190_);
lean_dec(v___x_3190_);
if (v_decide_3191_ == 0)
{
uint32_t v___x_3192_; lean_object* v___x_3193_; uint32_t v___x_3194_; uint8_t v___x_3195_; 
v___x_3192_ = 10;
v___x_3193_ = lean_nat_add(v_startInclusive_3188_, v_a_3185_);
lean_dec(v_a_3185_);
v___x_3194_ = lean_string_utf8_get_fast(v_str_3187_, v___x_3193_);
v___x_3195_ = lean_uint32_dec_eq(v___x_3194_, v___x_3192_);
if (v___x_3195_ == 0)
{
lean_object* v___x_3196_; lean_object* v___x_3197_; 
v___x_3196_ = lean_string_utf8_next_fast(v_str_3187_, v___x_3193_);
lean_dec(v___x_3193_);
v___x_3197_ = lean_nat_sub(v___x_3196_, v_startInclusive_3188_);
v_a_3185_ = v___x_3197_;
v_b_3186_ = v___x_3195_;
goto _start;
}
else
{
lean_dec(v___x_3193_);
return v___x_3195_;
}
}
else
{
lean_dec(v_a_3185_);
return v_b_3186_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg___boxed(lean_object* v_s_3199_, lean_object* v_a_3200_, lean_object* v_b_3201_){
_start:
{
uint8_t v_b_boxed_3202_; uint8_t v_res_3203_; lean_object* v_r_3204_; 
v_b_boxed_3202_ = lean_unbox(v_b_3201_);
v_res_3203_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg(v_s_3199_, v_a_3200_, v_b_boxed_3202_);
lean_dec_ref(v_s_3199_);
v_r_3204_ = lean_box(v_res_3203_);
return v_r_3204_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1(lean_object* v_s_3205_){
_start:
{
lean_object* v_searcher_3206_; uint8_t v___x_3207_; uint8_t v___x_3208_; 
v_searcher_3206_ = lean_unsigned_to_nat(0u);
v___x_3207_ = 0;
v___x_3208_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg(v_s_3205_, v_searcher_3206_, v___x_3207_);
return v___x_3208_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1___boxed(lean_object* v_s_3209_){
_start:
{
uint8_t v_res_3210_; lean_object* v_r_3211_; 
v_res_3210_ = l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1(v_s_3209_);
lean_dec_ref(v_s_3209_);
v_r_3211_ = lean_box(v_res_3210_);
return v_r_3211_;
}
}
static lean_object* _init_l_Lean_Parser_checkTailLinebreak___closed__3(void){
_start:
{
lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; 
v___x_3215_ = ((lean_object*)(l_Lean_Parser_checkTailLinebreak___closed__2));
v___x_3216_ = lean_unsigned_to_nat(14u);
v___x_3217_ = lean_unsigned_to_nat(22u);
v___x_3218_ = ((lean_object*)(l_Lean_Parser_checkTailLinebreak___closed__1));
v___x_3219_ = ((lean_object*)(l_Lean_Parser_checkTailLinebreak___closed__0));
v___x_3220_ = l_mkPanicMessageWithDecl(v___x_3219_, v___x_3218_, v___x_3217_, v___x_3216_, v___x_3215_);
return v___x_3220_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_checkTailLinebreak(lean_object* v_prev_3221_){
_start:
{
lean_object* v___x_3226_; 
v___x_3226_ = l_Lean_Syntax_getTailInfo(v_prev_3221_);
if (lean_obj_tag(v___x_3226_) == 0)
{
lean_object* v_trailing_3227_; lean_object* v_str_3228_; lean_object* v_startPos_3229_; lean_object* v_stopPos_3230_; lean_object* v___x_3232_; uint8_t v_isShared_3233_; uint8_t v_isSharedCheck_3241_; 
v_trailing_3227_ = lean_ctor_get(v___x_3226_, 2);
lean_inc_ref(v_trailing_3227_);
lean_dec_ref_known(v___x_3226_, 4);
v_str_3228_ = lean_ctor_get(v_trailing_3227_, 0);
v_startPos_3229_ = lean_ctor_get(v_trailing_3227_, 1);
v_stopPos_3230_ = lean_ctor_get(v_trailing_3227_, 2);
v_isSharedCheck_3241_ = !lean_is_exclusive(v_trailing_3227_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3232_ = v_trailing_3227_;
v_isShared_3233_ = v_isSharedCheck_3241_;
goto v_resetjp_3231_;
}
else
{
lean_inc(v_stopPos_3230_);
lean_inc(v_startPos_3229_);
lean_inc(v_str_3228_);
lean_dec(v_trailing_3227_);
v___x_3232_ = lean_box(0);
v_isShared_3233_ = v_isSharedCheck_3241_;
goto v_resetjp_3231_;
}
v_resetjp_3231_:
{
uint8_t v___x_3234_; 
v___x_3234_ = lean_string_is_valid_pos(v_str_3228_, v_startPos_3229_);
if (v___x_3234_ == 0)
{
lean_del_object(v___x_3232_);
lean_dec(v_stopPos_3230_);
lean_dec(v_startPos_3229_);
lean_dec_ref(v_str_3228_);
goto v___jp_3222_;
}
else
{
uint8_t v___x_3235_; 
v___x_3235_ = lean_string_is_valid_pos(v_str_3228_, v_stopPos_3230_);
if (v___x_3235_ == 0)
{
lean_del_object(v___x_3232_);
lean_dec(v_stopPos_3230_);
lean_dec(v_startPos_3229_);
lean_dec_ref(v_str_3228_);
goto v___jp_3222_;
}
else
{
uint8_t v___x_3236_; 
v___x_3236_ = lean_nat_dec_le(v_startPos_3229_, v_stopPos_3230_);
if (v___x_3236_ == 0)
{
lean_del_object(v___x_3232_);
lean_dec(v_stopPos_3230_);
lean_dec(v_startPos_3229_);
lean_dec_ref(v_str_3228_);
goto v___jp_3222_;
}
else
{
lean_object* v___x_3238_; 
if (v_isShared_3233_ == 0)
{
v___x_3238_ = v___x_3232_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3240_; 
v_reuseFailAlloc_3240_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3240_, 0, v_str_3228_);
lean_ctor_set(v_reuseFailAlloc_3240_, 1, v_startPos_3229_);
lean_ctor_set(v_reuseFailAlloc_3240_, 2, v_stopPos_3230_);
v___x_3238_ = v_reuseFailAlloc_3240_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
uint8_t v___x_3239_; 
v___x_3239_ = l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1(v___x_3238_);
lean_dec_ref(v___x_3238_);
return v___x_3239_;
}
}
}
}
}
}
else
{
uint8_t v___x_3242_; 
lean_dec(v___x_3226_);
v___x_3242_ = 0;
return v___x_3242_;
}
v___jp_3222_:
{
lean_object* v___x_3223_; lean_object* v___x_3224_; uint8_t v___x_3225_; 
v___x_3223_ = lean_obj_once(&l_Lean_Parser_checkTailLinebreak___closed__3, &l_Lean_Parser_checkTailLinebreak___closed__3_once, _init_l_Lean_Parser_checkTailLinebreak___closed__3);
v___x_3224_ = l_panic___at___00Lean_Parser_checkTailLinebreak_spec__0(v___x_3223_);
v___x_3225_ = l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1(v___x_3224_);
lean_dec_ref(v___x_3224_);
return v___x_3225_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkTailLinebreak___boxed(lean_object* v_prev_3243_){
_start:
{
uint8_t v_res_3244_; lean_object* v_r_3245_; 
v_res_3244_ = l_Lean_Parser_checkTailLinebreak(v_prev_3243_);
lean_dec(v_prev_3243_);
v_r_3245_ = lean_box(v_res_3244_);
return v_r_3245_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1(lean_object* v_s_3246_, lean_object* v_inst_3247_, lean_object* v_R_3248_, lean_object* v_a_3249_, uint8_t v_b_3250_, lean_object* v_c_3251_){
_start:
{
uint8_t v___x_3252_; 
v___x_3252_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg(v_s_3246_, v_a_3249_, v_b_3250_);
return v___x_3252_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___boxed(lean_object* v_s_3253_, lean_object* v_inst_3254_, lean_object* v_R_3255_, lean_object* v_a_3256_, lean_object* v_b_3257_, lean_object* v_c_3258_){
_start:
{
uint8_t v_b_boxed_3259_; uint8_t v_res_3260_; lean_object* v_r_3261_; 
v_b_boxed_3259_ = lean_unbox(v_b_3257_);
v_res_3260_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1(v_s_3253_, v_inst_3254_, v_R_3255_, v_a_3256_, v_b_boxed_3259_, v_c_3258_);
lean_dec_ref(v_s_3253_);
v_r_3261_ = lean_box(v_res_3260_);
return v_r_3261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBeforeFn___redArg(lean_object* v_errorMsg_3262_, lean_object* v_s_3263_){
_start:
{
lean_object* v_stxStack_3264_; lean_object* v_prev_3265_; uint8_t v___x_3266_; 
v_stxStack_3264_ = lean_ctor_get(v_s_3263_, 0);
v_prev_3265_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3264_);
v___x_3266_ = l_Lean_Parser_checkTailLinebreak(v_prev_3265_);
lean_dec(v_prev_3265_);
if (v___x_3266_ == 0)
{
lean_object* v___x_3267_; 
v___x_3267_ = l_Lean_Parser_ParserState_mkError(v_s_3263_, v_errorMsg_3262_);
return v___x_3267_;
}
else
{
lean_dec_ref(v_errorMsg_3262_);
return v_s_3263_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBeforeFn(lean_object* v_errorMsg_3268_, lean_object* v_x_3269_, lean_object* v_s_3270_){
_start:
{
lean_object* v___x_3271_; 
v___x_3271_ = l_Lean_Parser_checkLinebreakBeforeFn___redArg(v_errorMsg_3268_, v_s_3270_);
return v___x_3271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBeforeFn___boxed(lean_object* v_errorMsg_3272_, lean_object* v_x_3273_, lean_object* v_s_3274_){
_start:
{
lean_object* v_res_3275_; 
v_res_3275_ = l_Lean_Parser_checkLinebreakBeforeFn(v_errorMsg_3272_, v_x_3273_, v_s_3274_);
lean_dec_ref(v_x_3273_);
return v_res_3275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBefore(lean_object* v_errorMsg_3276_){
_start:
{
lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; 
v___x_3277_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_3278_ = lean_alloc_closure((void*)(l_Lean_Parser_checkLinebreakBeforeFn___boxed), 3, 1);
lean_closure_set(v___x_3278_, 0, v_errorMsg_3276_);
v___x_3279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3277_);
lean_ctor_set(v___x_3279_, 1, v___x_3278_);
return v___x_3279_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1(){
_start:
{
lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; 
v___x_3287_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1));
v___x_3288_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__2));
v___x_3289_ = l_Lean_addBuiltinDocString(v___x_3287_, v___x_3288_);
return v___x_3289_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___boxed(lean_object* v_a_3290_){
_start:
{
lean_object* v_res_3291_; 
v_res_3291_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1();
return v_res_3291_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_checkTailNoWs(lean_object* v_prev_3292_){
_start:
{
lean_object* v___x_3293_; 
v___x_3293_ = l_Lean_Syntax_getTailInfo(v_prev_3292_);
if (lean_obj_tag(v___x_3293_) == 0)
{
lean_object* v_trailing_3294_; lean_object* v_startPos_3295_; lean_object* v_stopPos_3296_; uint8_t v_decide_3297_; 
v_trailing_3294_ = lean_ctor_get(v___x_3293_, 2);
lean_inc_ref(v_trailing_3294_);
lean_dec_ref_known(v___x_3293_, 4);
v_startPos_3295_ = lean_ctor_get(v_trailing_3294_, 1);
lean_inc(v_startPos_3295_);
v_stopPos_3296_ = lean_ctor_get(v_trailing_3294_, 2);
lean_inc(v_stopPos_3296_);
lean_dec_ref(v_trailing_3294_);
v_decide_3297_ = lean_nat_dec_eq(v_stopPos_3296_, v_startPos_3295_);
lean_dec(v_startPos_3295_);
lean_dec(v_stopPos_3296_);
return v_decide_3297_;
}
else
{
uint8_t v___x_3298_; 
lean_dec(v___x_3293_);
v___x_3298_ = 0;
return v___x_3298_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkTailNoWs___boxed(lean_object* v_prev_3299_){
_start:
{
uint8_t v_res_3300_; lean_object* v_r_3301_; 
v_res_3300_ = l_Lean_Parser_checkTailNoWs(v_prev_3299_);
lean_dec(v_prev_3299_);
v_r_3301_ = lean_box(v_res_3300_);
return v_r_3301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBeforeFn___redArg(lean_object* v_errorMsg_3302_, lean_object* v_s_3303_){
_start:
{
lean_object* v_stxStack_3304_; lean_object* v_prev_3305_; uint8_t v___x_3306_; 
v_stxStack_3304_ = lean_ctor_get(v_s_3303_, 0);
lean_inc_ref(v_stxStack_3304_);
v_prev_3305_ = l___private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone(v_stxStack_3304_);
v___x_3306_ = l_Lean_Parser_checkTailNoWs(v_prev_3305_);
lean_dec(v_prev_3305_);
if (v___x_3306_ == 0)
{
lean_object* v___x_3307_; 
v___x_3307_ = l_Lean_Parser_ParserState_mkError(v_s_3303_, v_errorMsg_3302_);
return v___x_3307_;
}
else
{
lean_dec_ref(v_errorMsg_3302_);
return v_s_3303_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBeforeFn(lean_object* v_errorMsg_3308_, lean_object* v_x_3309_, lean_object* v_s_3310_){
_start:
{
lean_object* v___x_3311_; 
v___x_3311_ = l_Lean_Parser_checkNoWsBeforeFn___redArg(v_errorMsg_3308_, v_s_3310_);
return v___x_3311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBeforeFn___boxed(lean_object* v_errorMsg_3312_, lean_object* v_x_3313_, lean_object* v_s_3314_){
_start:
{
lean_object* v_res_3315_; 
v_res_3315_ = l_Lean_Parser_checkNoWsBeforeFn(v_errorMsg_3312_, v_x_3313_, v_s_3314_);
lean_dec_ref(v_x_3313_);
return v_res_3315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBefore(lean_object* v_errorMsg_3316_){
_start:
{
lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___x_3317_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_3318_ = lean_alloc_closure((void*)(l_Lean_Parser_checkNoWsBeforeFn___boxed), 3, 1);
lean_closure_set(v___x_3318_, 0, v_errorMsg_3316_);
v___x_3319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3319_, 0, v___x_3317_);
lean_ctor_set(v___x_3319_, 1, v___x_3318_);
return v___x_3319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1(){
_start:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v___x_3327_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1));
v___x_3328_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__2));
v___x_3329_ = l_Lean_addBuiltinDocString(v___x_3327_, v___x_3328_);
return v___x_3329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___boxed(lean_object* v_a_3330_){
_start:
{
lean_object* v_res_3331_; 
v_res_3331_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1();
return v_res_3331_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_unicodeSymbolFnAux___lam__0(lean_object* v_sym_3332_, lean_object* v_asciiSym_3333_, lean_object* v_s_3334_){
_start:
{
uint8_t v___x_3335_; 
v___x_3335_ = lean_string_dec_eq(v_s_3334_, v_sym_3332_);
if (v___x_3335_ == 0)
{
uint8_t v___x_3336_; 
v___x_3336_ = lean_string_dec_eq(v_s_3334_, v_asciiSym_3333_);
return v___x_3336_;
}
else
{
return v___x_3335_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolFnAux___lam__0___boxed(lean_object* v_sym_3337_, lean_object* v_asciiSym_3338_, lean_object* v_s_3339_){
_start:
{
uint8_t v_res_3340_; lean_object* v_r_3341_; 
v_res_3340_ = l_Lean_Parser_unicodeSymbolFnAux___lam__0(v_sym_3337_, v_asciiSym_3338_, v_s_3339_);
lean_dec_ref(v_s_3339_);
lean_dec_ref(v_asciiSym_3338_);
lean_dec_ref(v_sym_3337_);
v_r_3341_ = lean_box(v_res_3340_);
return v_r_3341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolFnAux(lean_object* v_sym_3342_, lean_object* v_asciiSym_3343_, lean_object* v_expected_3344_, lean_object* v_a_3345_, lean_object* v_a_3346_){
_start:
{
lean_object* v___f_3347_; lean_object* v___x_3348_; 
v___f_3347_ = lean_alloc_closure((void*)(l_Lean_Parser_unicodeSymbolFnAux___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3347_, 0, v_sym_3342_);
lean_closure_set(v___f_3347_, 1, v_asciiSym_3343_);
v___x_3348_ = l_Lean_Parser_satisfySymbolFn(v___f_3347_, v_expected_3344_, v_a_3345_, v_a_3346_);
return v___x_3348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolInfo___lam__0(lean_object* v_asciiSym_3349_, lean_object* v_sym_3350_, lean_object* v_tks_3351_){
_start:
{
lean_object* v___x_3352_; lean_object* v___x_3353_; 
v___x_3352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3352_, 0, v_asciiSym_3349_);
lean_ctor_set(v___x_3352_, 1, v_tks_3351_);
v___x_3353_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3353_, 0, v_sym_3350_);
lean_ctor_set(v___x_3353_, 1, v___x_3352_);
return v___x_3353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolInfo(lean_object* v_sym_3354_, lean_object* v_asciiSym_3355_){
_start:
{
lean_object* v___f_3356_; lean_object* v___f_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; 
lean_inc_ref(v_sym_3354_);
lean_inc_ref(v_asciiSym_3355_);
v___f_3356_ = lean_alloc_closure((void*)(l_Lean_Parser_unicodeSymbolInfo___lam__0), 3, 2);
lean_closure_set(v___f_3356_, 0, v_asciiSym_3355_);
lean_closure_set(v___f_3356_, 1, v_sym_3354_);
v___f_3357_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__1));
v___x_3358_ = lean_box(0);
v___x_3359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3359_, 0, v_asciiSym_3355_);
lean_ctor_set(v___x_3359_, 1, v___x_3358_);
v___x_3360_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3360_, 0, v_sym_3354_);
lean_ctor_set(v___x_3360_, 1, v___x_3359_);
v___x_3361_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3360_);
v___x_3362_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3362_, 0, v___f_3356_);
lean_ctor_set(v___x_3362_, 1, v___f_3357_);
lean_ctor_set(v___x_3362_, 2, v___x_3361_);
return v___x_3362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolFn(lean_object* v_sym_3364_, lean_object* v_asciiSym_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_){
_start:
{
lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; 
v___x_3368_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_3369_ = lean_string_append(v___x_3368_, v_sym_3364_);
v___x_3370_ = ((lean_object*)(l_Lean_Parser_unicodeSymbolFn___closed__0));
v___x_3371_ = lean_string_append(v___x_3369_, v___x_3370_);
v___x_3372_ = lean_string_append(v___x_3371_, v_asciiSym_3365_);
v___x_3373_ = lean_string_append(v___x_3372_, v___x_3368_);
v___x_3374_ = lean_box(0);
v___x_3375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3373_);
lean_ctor_set(v___x_3375_, 1, v___x_3374_);
v___x_3376_ = l_Lean_Parser_unicodeSymbolFnAux(v_sym_3364_, v_asciiSym_3365_, v___x_3375_, v_a_3366_, v_a_3367_);
return v___x_3376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolNoAntiquot___redArg(lean_object* v_sym_3377_, lean_object* v_asciiSym_3378_){
_start:
{
lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v_str_3383_; lean_object* v_startInclusive_3384_; lean_object* v_endExclusive_3385_; lean_object* v___x_3387_; uint8_t v_isShared_3388_; uint8_t v_isSharedCheck_3402_; 
v___x_3379_ = lean_unsigned_to_nat(0u);
v___x_3380_ = lean_string_utf8_byte_size(v_sym_3377_);
v___x_3381_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3381_, 0, v_sym_3377_);
lean_ctor_set(v___x_3381_, 1, v___x_3379_);
lean_ctor_set(v___x_3381_, 2, v___x_3380_);
v___x_3382_ = l_String_Slice_trimAscii(v___x_3381_);
v_str_3383_ = lean_ctor_get(v___x_3382_, 0);
v_startInclusive_3384_ = lean_ctor_get(v___x_3382_, 1);
v_endExclusive_3385_ = lean_ctor_get(v___x_3382_, 2);
v_isSharedCheck_3402_ = !lean_is_exclusive(v___x_3382_);
if (v_isSharedCheck_3402_ == 0)
{
v___x_3387_ = v___x_3382_;
v_isShared_3388_ = v_isSharedCheck_3402_;
goto v_resetjp_3386_;
}
else
{
lean_inc(v_endExclusive_3385_);
lean_inc(v_startInclusive_3384_);
lean_inc(v_str_3383_);
lean_dec(v___x_3382_);
v___x_3387_ = lean_box(0);
v_isShared_3388_ = v_isSharedCheck_3402_;
goto v_resetjp_3386_;
}
v_resetjp_3386_:
{
lean_object* v___x_3389_; lean_object* v___x_3391_; 
v___x_3389_ = lean_string_utf8_byte_size(v_asciiSym_3378_);
if (v_isShared_3388_ == 0)
{
lean_ctor_set(v___x_3387_, 2, v___x_3389_);
lean_ctor_set(v___x_3387_, 1, v___x_3379_);
lean_ctor_set(v___x_3387_, 0, v_asciiSym_3378_);
v___x_3391_ = v___x_3387_;
goto v_reusejp_3390_;
}
else
{
lean_object* v_reuseFailAlloc_3401_; 
v_reuseFailAlloc_3401_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3401_, 0, v_asciiSym_3378_);
lean_ctor_set(v_reuseFailAlloc_3401_, 1, v___x_3379_);
lean_ctor_set(v_reuseFailAlloc_3401_, 2, v___x_3389_);
v___x_3391_ = v_reuseFailAlloc_3401_;
goto v_reusejp_3390_;
}
v_reusejp_3390_:
{
lean_object* v___x_3392_; lean_object* v_str_3393_; lean_object* v_startInclusive_3394_; lean_object* v_endExclusive_3395_; lean_object* v_sym_3396_; lean_object* v_asciiSym_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; 
v___x_3392_ = l_String_Slice_trimAscii(v___x_3391_);
v_str_3393_ = lean_ctor_get(v___x_3392_, 0);
lean_inc_ref(v_str_3393_);
v_startInclusive_3394_ = lean_ctor_get(v___x_3392_, 1);
lean_inc(v_startInclusive_3394_);
v_endExclusive_3395_ = lean_ctor_get(v___x_3392_, 2);
lean_inc(v_endExclusive_3395_);
lean_dec_ref(v___x_3392_);
v_sym_3396_ = lean_string_utf8_extract_fast(v_str_3383_, v_startInclusive_3384_, v_endExclusive_3385_);
lean_dec(v_endExclusive_3385_);
lean_dec(v_startInclusive_3384_);
lean_dec_ref(v_str_3383_);
v_asciiSym_3397_ = lean_string_utf8_extract_fast(v_str_3393_, v_startInclusive_3394_, v_endExclusive_3395_);
lean_dec(v_endExclusive_3395_);
lean_dec(v_startInclusive_3394_);
lean_dec_ref(v_str_3393_);
lean_inc_ref(v_asciiSym_3397_);
lean_inc_ref(v_sym_3396_);
v___x_3398_ = l_Lean_Parser_unicodeSymbolInfo(v_sym_3396_, v_asciiSym_3397_);
v___x_3399_ = lean_alloc_closure((void*)(l_Lean_Parser_unicodeSymbolFn), 4, 2);
lean_closure_set(v___x_3399_, 0, v_sym_3396_);
lean_closure_set(v___x_3399_, 1, v_asciiSym_3397_);
v___x_3400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3400_, 0, v___x_3398_);
lean_ctor_set(v___x_3400_, 1, v___x_3399_);
return v___x_3400_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolNoAntiquot(lean_object* v_sym_3403_, lean_object* v_asciiSym_3404_, uint8_t v_preserveForPP_3405_){
_start:
{
lean_object* v___x_3406_; 
v___x_3406_ = l_Lean_Parser_unicodeSymbolNoAntiquot___redArg(v_sym_3403_, v_asciiSym_3404_);
return v___x_3406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolNoAntiquot___boxed(lean_object* v_sym_3407_, lean_object* v_asciiSym_3408_, lean_object* v_preserveForPP_3409_){
_start:
{
uint8_t v_preserveForPP_boxed_3410_; lean_object* v_res_3411_; 
v_preserveForPP_boxed_3410_ = lean_unbox(v_preserveForPP_3409_);
v_res_3411_ = l_Lean_Parser_unicodeSymbolNoAntiquot(v_sym_3407_, v_asciiSym_3408_, v_preserveForPP_boxed_3410_);
return v_res_3411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAtomicInfo(lean_object* v_k_3412_){
_start:
{
lean_object* v___f_3413_; lean_object* v___f_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; 
v___f_3413_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__0));
v___f_3414_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__1));
v___x_3415_ = lean_box(0);
v___x_3416_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3416_, 0, v_k_3412_);
lean_ctor_set(v___x_3416_, 1, v___x_3415_);
v___x_3417_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3417_, 0, v___x_3416_);
v___x_3418_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3418_, 0, v___f_3413_);
lean_ctor_set(v___x_3418_, 1, v___f_3414_);
lean_ctor_set(v___x_3418_, 2, v___x_3417_);
return v___x_3418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_expectTokenFn(lean_object* v_k_3419_, lean_object* v_desc_3420_, lean_object* v_c_3421_, lean_object* v_s_3422_){
_start:
{
lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v_s_3425_; lean_object* v_stxStack_3426_; lean_object* v_errorMsg_3427_; lean_object* v___x_3428_; uint8_t v___x_3429_; 
v___x_3423_ = lean_box(0);
lean_inc_ref(v_desc_3420_);
v___x_3424_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3424_, 0, v_desc_3420_);
lean_ctor_set(v___x_3424_, 1, v___x_3423_);
v_s_3425_ = l_Lean_Parser_tokenFn(v___x_3424_, v_c_3421_, v_s_3422_);
v_stxStack_3426_ = lean_ctor_get(v_s_3425_, 0);
v_errorMsg_3427_ = lean_ctor_get(v_s_3425_, 4);
v___x_3428_ = lean_box(0);
v___x_3429_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_3427_, v___x_3428_);
if (v___x_3429_ == 0)
{
lean_dec_ref(v_desc_3420_);
return v_s_3425_;
}
else
{
lean_object* v___x_3430_; uint8_t v___x_3431_; 
v___x_3430_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3426_);
v___x_3431_ = l_Lean_Syntax_isOfKind(v___x_3430_, v_k_3419_);
if (v___x_3431_ == 0)
{
lean_object* v___x_3432_; lean_object* v___x_3433_; 
v___x_3432_ = lean_unsigned_to_nat(0u);
v___x_3433_ = l_Lean_Parser_ParserState_mkUnexpectedTokenError(v_s_3425_, v_desc_3420_, v___x_3432_);
return v___x_3433_;
}
else
{
lean_dec_ref(v_desc_3420_);
return v_s_3425_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_expectTokenFn___boxed(lean_object* v_k_3434_, lean_object* v_desc_3435_, lean_object* v_c_3436_, lean_object* v_s_3437_){
_start:
{
lean_object* v_res_3438_; 
v_res_3438_ = l_Lean_Parser_expectTokenFn(v_k_3434_, v_desc_3435_, v_c_3436_, v_s_3437_);
lean_dec(v_k_3434_);
return v_res_3438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numLitFn(lean_object* v_a_3439_, lean_object* v_a_3440_){
_start:
{
lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; 
v___x_3441_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_3442_ = ((lean_object*)(l_Lean_Parser_numberFnAux___closed__0));
v___x_3443_ = l_Lean_Parser_expectTokenFn(v___x_3441_, v___x_3442_, v_a_3439_, v_a_3440_);
return v___x_3443_;
}
}
static lean_object* _init_l_Lean_Parser_numLitNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3444_; lean_object* v___x_3445_; 
v___x_3444_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__0));
v___x_3445_ = l_Lean_Parser_mkAtomicInfo(v___x_3444_);
return v___x_3445_;
}
}
static lean_object* _init_l_Lean_Parser_numLitNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; 
v___x_3446_ = lean_alloc_closure((void*)(l_Lean_Parser_numLitFn), 2, 0);
v___x_3447_ = lean_obj_once(&l_Lean_Parser_numLitNoAntiquot___closed__0, &l_Lean_Parser_numLitNoAntiquot___closed__0_once, _init_l_Lean_Parser_numLitNoAntiquot___closed__0);
v___x_3448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3447_);
lean_ctor_set(v___x_3448_, 1, v___x_3446_);
return v___x_3448_;
}
}
static lean_object* _init_l_Lean_Parser_numLitNoAntiquot(void){
_start:
{
lean_object* v___x_3449_; 
v___x_3449_ = lean_obj_once(&l_Lean_Parser_numLitNoAntiquot___closed__1, &l_Lean_Parser_numLitNoAntiquot___closed__1_once, _init_l_Lean_Parser_numLitNoAntiquot___closed__1);
return v___x_3449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hexnumFn(lean_object* v_ctx_3453_, lean_object* v_s_3454_){
_start:
{
lean_object* v_pos_3455_; uint8_t v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; 
v_pos_3455_ = lean_ctor_get(v_s_3454_, 2);
lean_inc(v_pos_3455_);
v___x_3456_ = 1;
v___x_3457_ = ((lean_object*)(l_Lean_Parser_hexnumFn___closed__1));
v___x_3458_ = l_Lean_Parser_hexNumberFn(v_pos_3455_, v___x_3456_, v___x_3457_, v_ctx_3453_, v_s_3454_);
return v___x_3458_;
}
}
static lean_object* _init_l_Lean_Parser_hexnumNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3459_; lean_object* v___x_3460_; 
v___x_3459_ = ((lean_object*)(l_Lean_Parser_hexnumFn___closed__0));
v___x_3460_ = l_Lean_Parser_mkAtomicInfo(v___x_3459_);
return v___x_3460_;
}
}
static lean_object* _init_l_Lean_Parser_hexnumNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; 
v___x_3461_ = lean_alloc_closure((void*)(l_Lean_Parser_hexnumFn), 2, 0);
v___x_3462_ = lean_obj_once(&l_Lean_Parser_hexnumNoAntiquot___closed__0, &l_Lean_Parser_hexnumNoAntiquot___closed__0_once, _init_l_Lean_Parser_hexnumNoAntiquot___closed__0);
v___x_3463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3463_, 0, v___x_3462_);
lean_ctor_set(v___x_3463_, 1, v___x_3461_);
return v___x_3463_;
}
}
static lean_object* _init_l_Lean_Parser_hexnumNoAntiquot(void){
_start:
{
lean_object* v___x_3464_; 
v___x_3464_ = lean_obj_once(&l_Lean_Parser_hexnumNoAntiquot___closed__1, &l_Lean_Parser_hexnumNoAntiquot___closed__1_once, _init_l_Lean_Parser_hexnumNoAntiquot___closed__1);
return v___x_3464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLitFn(lean_object* v_a_3466_, lean_object* v_a_3467_){
_start:
{
lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; 
v___x_3468_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__1));
v___x_3469_ = ((lean_object*)(l_Lean_Parser_scientificLitFn___closed__0));
v___x_3470_ = l_Lean_Parser_expectTokenFn(v___x_3468_, v___x_3469_, v_a_3466_, v_a_3467_);
return v___x_3470_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLitNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3471_; lean_object* v___x_3472_; 
v___x_3471_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__0));
v___x_3472_ = l_Lean_Parser_mkAtomicInfo(v___x_3471_);
return v___x_3472_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLitNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; 
v___x_3473_ = lean_alloc_closure((void*)(l_Lean_Parser_scientificLitFn), 2, 0);
v___x_3474_ = lean_obj_once(&l_Lean_Parser_scientificLitNoAntiquot___closed__0, &l_Lean_Parser_scientificLitNoAntiquot___closed__0_once, _init_l_Lean_Parser_scientificLitNoAntiquot___closed__0);
v___x_3475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3475_, 0, v___x_3474_);
lean_ctor_set(v___x_3475_, 1, v___x_3473_);
return v___x_3475_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLitNoAntiquot(void){
_start:
{
lean_object* v___x_3476_; 
v___x_3476_ = lean_obj_once(&l_Lean_Parser_scientificLitNoAntiquot___closed__1, &l_Lean_Parser_scientificLitNoAntiquot___closed__1_once, _init_l_Lean_Parser_scientificLitNoAntiquot___closed__1);
return v___x_3476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLitFn(lean_object* v_a_3478_, lean_object* v_a_3479_){
_start:
{
lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; 
v___x_3480_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__1));
v___x_3481_ = ((lean_object*)(l_Lean_Parser_strLitFn___closed__0));
v___x_3482_ = l_Lean_Parser_expectTokenFn(v___x_3480_, v___x_3481_, v_a_3478_, v_a_3479_);
return v___x_3482_;
}
}
static lean_object* _init_l_Lean_Parser_strLitNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3483_; lean_object* v___x_3484_; 
v___x_3483_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__0));
v___x_3484_ = l_Lean_Parser_mkAtomicInfo(v___x_3483_);
return v___x_3484_;
}
}
static lean_object* _init_l_Lean_Parser_strLitNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; 
v___x_3485_ = lean_alloc_closure((void*)(l_Lean_Parser_strLitFn), 2, 0);
v___x_3486_ = lean_obj_once(&l_Lean_Parser_strLitNoAntiquot___closed__0, &l_Lean_Parser_strLitNoAntiquot___closed__0_once, _init_l_Lean_Parser_strLitNoAntiquot___closed__0);
v___x_3487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3487_, 0, v___x_3486_);
lean_ctor_set(v___x_3487_, 1, v___x_3485_);
return v___x_3487_;
}
}
static lean_object* _init_l_Lean_Parser_strLitNoAntiquot(void){
_start:
{
lean_object* v___x_3488_; 
v___x_3488_ = lean_obj_once(&l_Lean_Parser_strLitNoAntiquot___closed__1, &l_Lean_Parser_strLitNoAntiquot___closed__1_once, _init_l_Lean_Parser_strLitNoAntiquot___closed__1);
return v___x_3488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_charLitFn(lean_object* v_a_3490_, lean_object* v_a_3491_){
_start:
{
lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; 
v___x_3492_ = ((lean_object*)(l_Lean_Parser_charLitFnAux___closed__2));
v___x_3493_ = ((lean_object*)(l_Lean_Parser_charLitFn___closed__0));
v___x_3494_ = l_Lean_Parser_expectTokenFn(v___x_3492_, v___x_3493_, v_a_3490_, v_a_3491_);
return v___x_3494_;
}
}
static lean_object* _init_l_Lean_Parser_charLitNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3495_; lean_object* v___x_3496_; 
v___x_3495_ = ((lean_object*)(l_Lean_Parser_charLitFnAux___closed__1));
v___x_3496_ = l_Lean_Parser_mkAtomicInfo(v___x_3495_);
return v___x_3496_;
}
}
static lean_object* _init_l_Lean_Parser_charLitNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; 
v___x_3497_ = lean_alloc_closure((void*)(l_Lean_Parser_charLitFn), 2, 0);
v___x_3498_ = lean_obj_once(&l_Lean_Parser_charLitNoAntiquot___closed__0, &l_Lean_Parser_charLitNoAntiquot___closed__0_once, _init_l_Lean_Parser_charLitNoAntiquot___closed__0);
v___x_3499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3499_, 0, v___x_3498_);
lean_ctor_set(v___x_3499_, 1, v___x_3497_);
return v___x_3499_;
}
}
static lean_object* _init_l_Lean_Parser_charLitNoAntiquot(void){
_start:
{
lean_object* v___x_3500_; 
v___x_3500_ = lean_obj_once(&l_Lean_Parser_charLitNoAntiquot___closed__1, &l_Lean_Parser_charLitNoAntiquot___closed__1_once, _init_l_Lean_Parser_charLitNoAntiquot___closed__1);
return v___x_3500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nameLitFn(lean_object* v_a_3505_, lean_object* v_a_3506_){
_start:
{
lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; 
v___x_3507_ = ((lean_object*)(l_Lean_Parser_nameLitFn___closed__1));
v___x_3508_ = ((lean_object*)(l_Lean_Parser_nameLitFn___closed__2));
v___x_3509_ = l_Lean_Parser_expectTokenFn(v___x_3507_, v___x_3508_, v_a_3505_, v_a_3506_);
return v___x_3509_;
}
}
static lean_object* _init_l_Lean_Parser_nameLitNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3510_; lean_object* v___x_3511_; 
v___x_3510_ = ((lean_object*)(l_Lean_Parser_nameLitFn___closed__0));
v___x_3511_ = l_Lean_Parser_mkAtomicInfo(v___x_3510_);
return v___x_3511_;
}
}
static lean_object* _init_l_Lean_Parser_nameLitNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; 
v___x_3512_ = lean_alloc_closure((void*)(l_Lean_Parser_nameLitFn), 2, 0);
v___x_3513_ = lean_obj_once(&l_Lean_Parser_nameLitNoAntiquot___closed__0, &l_Lean_Parser_nameLitNoAntiquot___closed__0_once, _init_l_Lean_Parser_nameLitNoAntiquot___closed__0);
v___x_3514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3514_, 0, v___x_3513_);
lean_ctor_set(v___x_3514_, 1, v___x_3512_);
return v___x_3514_;
}
}
static lean_object* _init_l_Lean_Parser_nameLitNoAntiquot(void){
_start:
{
lean_object* v___x_3515_; 
v___x_3515_ = lean_obj_once(&l_Lean_Parser_nameLitNoAntiquot___closed__1, &l_Lean_Parser_nameLitNoAntiquot___closed__1_once, _init_l_Lean_Parser_nameLitNoAntiquot___closed__1);
return v___x_3515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identFn(lean_object* v_c_3519_, lean_object* v_s_3520_){
_start:
{
lean_object* v_toCacheableParserContext_3521_; lean_object* v_forbiddenTks_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; uint8_t v___x_3525_; 
v_toCacheableParserContext_3521_ = lean_ctor_get(v_c_3519_, 2);
v_forbiddenTks_3522_ = lean_ctor_get(v_toCacheableParserContext_3521_, 3);
v___x_3523_ = lean_array_get_size(v_forbiddenTks_3522_);
v___x_3524_ = lean_unsigned_to_nat(0u);
v___x_3525_ = lean_nat_dec_eq(v___x_3523_, v___x_3524_);
if (v___x_3525_ == 0)
{
lean_object* v_pos_3526_; lean_object* v_iniSz_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v_s_3530_; lean_object* v_stxStack_3531_; lean_object* v_errorMsg_3532_; lean_object* v___x_3533_; uint8_t v___x_3534_; 
lean_inc_ref(v_forbiddenTks_3522_);
v_pos_3526_ = lean_ctor_get(v_s_3520_, 2);
lean_inc(v_pos_3526_);
v_iniSz_3527_ = l_Lean_Parser_ParserState_stackSize(v_s_3520_);
v___x_3528_ = ((lean_object*)(l_Lean_Parser_identFn___closed__0));
v___x_3529_ = ((lean_object*)(l_Lean_Parser_identFn___closed__1));
v_s_3530_ = l_Lean_Parser_expectTokenFn(v___x_3528_, v___x_3529_, v_c_3519_, v_s_3520_);
v_stxStack_3531_ = lean_ctor_get(v_s_3530_, 0);
v_errorMsg_3532_ = lean_ctor_get(v_s_3530_, 4);
v___x_3533_ = lean_box(0);
v___x_3534_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_3532_, v___x_3533_);
if (v___x_3534_ == 0)
{
lean_dec(v_iniSz_3527_);
lean_dec(v_pos_3526_);
lean_dec_ref(v_forbiddenTks_3522_);
return v_s_3530_;
}
else
{
lean_object* v___x_3535_; 
v___x_3535_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3531_);
if (lean_obj_tag(v___x_3535_) == 3)
{
lean_object* v_rawVal_3536_; lean_object* v_str_3537_; lean_object* v_startPos_3538_; lean_object* v_stopPos_3539_; lean_object* v___x_3540_; uint8_t v___x_3541_; 
v_rawVal_3536_ = lean_ctor_get(v___x_3535_, 1);
lean_inc_ref(v_rawVal_3536_);
lean_dec_ref_known(v___x_3535_, 4);
v_str_3537_ = lean_ctor_get(v_rawVal_3536_, 0);
lean_inc_ref(v_str_3537_);
v_startPos_3538_ = lean_ctor_get(v_rawVal_3536_, 1);
lean_inc(v_startPos_3538_);
v_stopPos_3539_ = lean_ctor_get(v_rawVal_3536_, 2);
lean_inc(v_stopPos_3539_);
lean_dec_ref(v_rawVal_3536_);
v___x_3540_ = lean_string_utf8_extract(v_str_3537_, v_startPos_3538_, v_stopPos_3539_);
lean_dec(v_stopPos_3539_);
lean_dec(v_startPos_3538_);
lean_dec_ref(v_str_3537_);
v___x_3541_ = l_Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0(v_forbiddenTks_3522_, v___x_3540_);
lean_dec_ref(v___x_3540_);
lean_dec_ref(v_forbiddenTks_3522_);
if (v___x_3541_ == 0)
{
lean_dec(v_iniSz_3527_);
lean_dec(v_pos_3526_);
return v_s_3530_;
}
else
{
lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; 
v___x_3542_ = ((lean_object*)(l_Lean_Parser_mkTokenAndFixPos___closed__1));
v___x_3543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3543_, 0, v_iniSz_3527_);
v___x_3544_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_3530_, v___x_3542_, v_pos_3526_, v___x_3543_);
lean_dec_ref_known(v___x_3543_, 1);
return v___x_3544_;
}
}
else
{
lean_dec(v___x_3535_);
lean_dec(v_iniSz_3527_);
lean_dec(v_pos_3526_);
lean_dec_ref(v_forbiddenTks_3522_);
return v_s_3530_;
}
}
}
else
{
lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3545_ = ((lean_object*)(l_Lean_Parser_identFn___closed__0));
v___x_3546_ = ((lean_object*)(l_Lean_Parser_identFn___closed__1));
v___x_3547_ = l_Lean_Parser_expectTokenFn(v___x_3545_, v___x_3546_, v_c_3519_, v_s_3520_);
return v___x_3547_;
}
}
}
static lean_object* _init_l_Lean_Parser_identNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3548_; lean_object* v___x_3549_; 
v___x_3548_ = ((lean_object*)(l_Lean_Parser_nonReservedSymbolInfo___closed__0));
v___x_3549_ = l_Lean_Parser_mkAtomicInfo(v___x_3548_);
return v___x_3549_;
}
}
static lean_object* _init_l_Lean_Parser_identNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; 
v___x_3550_ = lean_alloc_closure((void*)(l_Lean_Parser_identFn), 2, 0);
v___x_3551_ = lean_obj_once(&l_Lean_Parser_identNoAntiquot___closed__0, &l_Lean_Parser_identNoAntiquot___closed__0_once, _init_l_Lean_Parser_identNoAntiquot___closed__0);
v___x_3552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3551_);
lean_ctor_set(v___x_3552_, 1, v___x_3550_);
return v___x_3552_;
}
}
static lean_object* _init_l_Lean_Parser_identNoAntiquot(void){
_start:
{
lean_object* v___x_3553_; 
v___x_3553_ = lean_obj_once(&l_Lean_Parser_identNoAntiquot___closed__1, &l_Lean_Parser_identNoAntiquot___closed__1_once, _init_l_Lean_Parser_identNoAntiquot___closed__1);
return v___x_3553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identEqFn(lean_object* v_id_3565_, lean_object* v_c_3566_, lean_object* v_s_3567_){
_start:
{
lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v_s_3570_; lean_object* v_stxStack_3571_; lean_object* v_errorMsg_3572_; lean_object* v___x_3573_; uint8_t v___x_3574_; 
v___x_3568_ = ((lean_object*)(l_Lean_Parser_identFn___closed__1));
v___x_3569_ = ((lean_object*)(l_Lean_Parser_identEqFn___closed__0));
v_s_3570_ = l_Lean_Parser_tokenFn(v___x_3569_, v_c_3566_, v_s_3567_);
v_stxStack_3571_ = lean_ctor_get(v_s_3570_, 0);
v_errorMsg_3572_ = lean_ctor_get(v_s_3570_, 4);
v___x_3573_ = lean_box(0);
v___x_3574_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_3572_, v___x_3573_);
if (v___x_3574_ == 0)
{
lean_dec(v_id_3565_);
return v_s_3570_;
}
else
{
lean_object* v___x_3575_; 
v___x_3575_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3571_);
if (lean_obj_tag(v___x_3575_) == 3)
{
lean_object* v_val_3576_; uint8_t v___x_3577_; 
v_val_3576_ = lean_ctor_get(v___x_3575_, 2);
lean_inc(v_val_3576_);
lean_dec_ref_known(v___x_3575_, 4);
v___x_3577_ = lean_name_eq(v_val_3576_, v_id_3565_);
lean_dec(v_val_3576_);
if (v___x_3577_ == 0)
{
lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; 
v___x_3578_ = ((lean_object*)(l_Lean_Parser_identEqFn___closed__1));
v___x_3579_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_id_3565_, v___x_3574_);
v___x_3580_ = lean_string_append(v___x_3578_, v___x_3579_);
lean_dec_ref(v___x_3579_);
v___x_3581_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_3582_ = lean_string_append(v___x_3580_, v___x_3581_);
v___x_3583_ = lean_unsigned_to_nat(0u);
v___x_3584_ = l_Lean_Parser_ParserState_mkUnexpectedTokenError(v_s_3570_, v___x_3582_, v___x_3583_);
return v___x_3584_;
}
else
{
lean_dec(v_id_3565_);
return v_s_3570_;
}
}
else
{
lean_object* v___x_3585_; lean_object* v___x_3586_; 
lean_dec(v___x_3575_);
lean_dec(v_id_3565_);
v___x_3585_ = lean_unsigned_to_nat(0u);
v___x_3586_ = l_Lean_Parser_ParserState_mkUnexpectedTokenError(v_s_3570_, v___x_3568_, v___x_3585_);
return v___x_3586_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identEq(lean_object* v_id_3587_){
_start:
{
lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; 
v___x_3588_ = lean_obj_once(&l_Lean_Parser_identNoAntiquot___closed__0, &l_Lean_Parser_identNoAntiquot___closed__0_once, _init_l_Lean_Parser_identNoAntiquot___closed__0);
v___x_3589_ = lean_alloc_closure((void*)(l_Lean_Parser_identEqFn), 3, 1);
lean_closure_set(v___x_3589_, 0, v_id_3587_);
v___x_3590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3590_, 0, v___x_3588_);
lean_ctor_set(v___x_3590_, 1, v___x_3589_);
return v___x_3590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfoFn(lean_object* v_c_3594_, lean_object* v_s_3595_){
_start:
{
lean_object* v_pos_3597_; lean_object* v_str_3598_; lean_object* v_trailing_3599_; lean_object* v_s_3600_; lean_object* v_stxStack_3612_; lean_object* v_pos_3613_; uint8_t v___x_3616_; 
v_stxStack_3612_ = lean_ctor_get(v_s_3595_, 0);
v_pos_3613_ = lean_ctor_get(v_s_3595_, 2);
v___x_3616_ = l_Lean_Parser_SyntaxStack_isEmpty(v_stxStack_3612_);
if (v___x_3616_ == 0)
{
lean_object* v_prev_3617_; lean_object* v___x_3618_; 
v_prev_3617_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3612_);
v___x_3618_ = l_Lean_Syntax_getTailInfo(v_prev_3617_);
if (lean_obj_tag(v___x_3618_) == 0)
{
lean_object* v_leading_3619_; lean_object* v_pos_3620_; lean_object* v_trailing_3621_; lean_object* v_endPos_3622_; lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3633_; 
v_leading_3619_ = lean_ctor_get(v___x_3618_, 0);
v_pos_3620_ = lean_ctor_get(v___x_3618_, 1);
v_trailing_3621_ = lean_ctor_get(v___x_3618_, 2);
v_endPos_3622_ = lean_ctor_get(v___x_3618_, 3);
v_isSharedCheck_3633_ = !lean_is_exclusive(v___x_3618_);
if (v_isSharedCheck_3633_ == 0)
{
v___x_3624_ = v___x_3618_;
v_isShared_3625_ = v_isSharedCheck_3633_;
goto v_resetjp_3623_;
}
else
{
lean_inc(v_endPos_3622_);
lean_inc(v_trailing_3621_);
lean_inc(v_pos_3620_);
lean_inc(v_leading_3619_);
lean_dec(v___x_3618_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3633_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
lean_object* v_str_3626_; lean_object* v___x_3627_; lean_object* v___x_3629_; 
lean_inc_n(v_endPos_3622_, 2);
v_str_3626_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_3594_, v_endPos_3622_);
v___x_3627_ = l_Lean_Parser_ParserState_popSyntax(v_s_3595_);
lean_inc_ref(v_str_3626_);
if (v_isShared_3625_ == 0)
{
lean_ctor_set(v___x_3624_, 2, v_str_3626_);
v___x_3629_ = v___x_3624_;
goto v_reusejp_3628_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v_leading_3619_);
lean_ctor_set(v_reuseFailAlloc_3632_, 1, v_pos_3620_);
lean_ctor_set(v_reuseFailAlloc_3632_, 2, v_str_3626_);
lean_ctor_set(v_reuseFailAlloc_3632_, 3, v_endPos_3622_);
v___x_3629_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3628_;
}
v_reusejp_3628_:
{
lean_object* v___x_3630_; lean_object* v_s_3631_; 
v___x_3630_ = l_Lean_Syntax_setTailInfo(v_prev_3617_, v___x_3629_);
v_s_3631_ = l_Lean_Parser_ParserState_pushSyntax(v___x_3627_, v___x_3630_);
v_pos_3597_ = v_endPos_3622_;
v_str_3598_ = v_str_3626_;
v_trailing_3599_ = v_trailing_3621_;
v_s_3600_ = v_s_3631_;
goto v___jp_3596_;
}
}
}
else
{
lean_inc(v_pos_3613_);
lean_dec(v___x_3618_);
lean_dec(v_prev_3617_);
goto v___jp_3614_;
}
}
else
{
lean_inc(v_pos_3613_);
goto v___jp_3614_;
}
v___jp_3596_:
{
lean_object* v_info_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v_ident_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; 
lean_inc(v_pos_3597_);
lean_inc_ref(v_str_3598_);
v_info_3601_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_info_3601_, 0, v_str_3598_);
lean_ctor_set(v_info_3601_, 1, v_pos_3597_);
lean_ctor_set(v_info_3601_, 2, v_trailing_3599_);
lean_ctor_set(v_info_3601_, 3, v_pos_3597_);
v___x_3602_ = lean_box(0);
v___x_3603_ = lean_box(0);
v_ident_3604_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_ident_3604_, 0, v_info_3601_);
lean_ctor_set(v_ident_3604_, 1, v_str_3598_);
lean_ctor_set(v_ident_3604_, 2, v___x_3602_);
lean_ctor_set(v_ident_3604_, 3, v___x_3603_);
v___x_3605_ = ((lean_object*)(l_Lean_Parser_hygieneInfoFn___closed__1));
v___x_3606_ = lean_unsigned_to_nat(1u);
v___x_3607_ = lean_mk_empty_array_with_capacity(v___x_3606_);
v___x_3608_ = lean_array_push(v___x_3607_, v_ident_3604_);
v___x_3609_ = lean_box(2);
v___x_3610_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3610_, 0, v___x_3609_);
lean_ctor_set(v___x_3610_, 1, v___x_3605_);
lean_ctor_set(v___x_3610_, 2, v___x_3608_);
v___x_3611_ = l_Lean_Parser_ParserState_pushSyntax(v_s_3600_, v___x_3610_);
return v___x_3611_;
}
v___jp_3614_:
{
lean_object* v_str_3615_; 
lean_inc(v_pos_3613_);
v_str_3615_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_3594_, v_pos_3613_);
lean_inc_ref(v_str_3615_);
v_pos_3597_ = v_pos_3613_;
v_str_3598_ = v_str_3615_;
v_trailing_3599_ = v_str_3615_;
v_s_3600_ = v_s_3595_;
goto v___jp_3596_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfoFn___boxed(lean_object* v_c_3634_, lean_object* v_s_3635_){
_start:
{
lean_object* v_res_3636_; 
v_res_3636_ = l_Lean_Parser_hygieneInfoFn(v_c_3634_, v_s_3635_);
lean_dec_ref(v_c_3634_);
return v_res_3636_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfoNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; 
v___x_3637_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_3638_ = ((lean_object*)(l_Lean_Parser_hygieneInfoFn___closed__1));
v___x_3639_ = l_Lean_Parser_nodeInfo(v___x_3638_, v___x_3637_);
return v___x_3639_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfoNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; 
v___x_3640_ = lean_alloc_closure((void*)(l_Lean_Parser_hygieneInfoFn___boxed), 2, 0);
v___x_3641_ = lean_obj_once(&l_Lean_Parser_hygieneInfoNoAntiquot___closed__0, &l_Lean_Parser_hygieneInfoNoAntiquot___closed__0_once, _init_l_Lean_Parser_hygieneInfoNoAntiquot___closed__0);
v___x_3642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3642_, 0, v___x_3641_);
lean_ctor_set(v___x_3642_, 1, v___x_3640_);
return v___x_3642_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfoNoAntiquot(void){
_start:
{
lean_object* v___x_3643_; 
v___x_3643_ = lean_obj_once(&l_Lean_Parser_hygieneInfoNoAntiquot___closed__1, &l_Lean_Parser_hygieneInfoNoAntiquot___closed__1_once, _init_l_Lean_Parser_hygieneInfoNoAntiquot___closed__1);
return v___x_3643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepTop(lean_object* v_s_3644_, lean_object* v_startStackSize_3645_){
_start:
{
lean_object* v_node_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; 
v_node_3646_ = l_Lean_Parser_SyntaxStack_back(v_s_3644_);
v___x_3647_ = l_Lean_Parser_SyntaxStack_shrink(v_s_3644_, v_startStackSize_3645_);
v___x_3648_ = l_Lean_Parser_SyntaxStack_push(v___x_3647_, v_node_3646_);
return v___x_3648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepTop___boxed(lean_object* v_s_3649_, lean_object* v_startStackSize_3650_){
_start:
{
lean_object* v_res_3651_; 
v_res_3651_ = l_Lean_Parser_ParserState_keepTop(v_s_3649_, v_startStackSize_3650_);
lean_dec(v_startStackSize_3650_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepNewError(lean_object* v_s_3652_, lean_object* v_oldStackSize_3653_){
_start:
{
lean_object* v_stxStack_3654_; lean_object* v_lhsPrec_3655_; lean_object* v_pos_3656_; lean_object* v_cache_3657_; lean_object* v_errorMsg_3658_; lean_object* v_recoveredErrors_3659_; lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3667_; 
v_stxStack_3654_ = lean_ctor_get(v_s_3652_, 0);
v_lhsPrec_3655_ = lean_ctor_get(v_s_3652_, 1);
v_pos_3656_ = lean_ctor_get(v_s_3652_, 2);
v_cache_3657_ = lean_ctor_get(v_s_3652_, 3);
v_errorMsg_3658_ = lean_ctor_get(v_s_3652_, 4);
v_recoveredErrors_3659_ = lean_ctor_get(v_s_3652_, 5);
v_isSharedCheck_3667_ = !lean_is_exclusive(v_s_3652_);
if (v_isSharedCheck_3667_ == 0)
{
v___x_3661_ = v_s_3652_;
v_isShared_3662_ = v_isSharedCheck_3667_;
goto v_resetjp_3660_;
}
else
{
lean_inc(v_recoveredErrors_3659_);
lean_inc(v_errorMsg_3658_);
lean_inc(v_cache_3657_);
lean_inc(v_pos_3656_);
lean_inc(v_lhsPrec_3655_);
lean_inc(v_stxStack_3654_);
lean_dec(v_s_3652_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3667_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v___x_3663_; lean_object* v___x_3665_; 
v___x_3663_ = l_Lean_Parser_ParserState_keepTop(v_stxStack_3654_, v_oldStackSize_3653_);
if (v_isShared_3662_ == 0)
{
lean_ctor_set(v___x_3661_, 0, v___x_3663_);
v___x_3665_ = v___x_3661_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v___x_3663_);
lean_ctor_set(v_reuseFailAlloc_3666_, 1, v_lhsPrec_3655_);
lean_ctor_set(v_reuseFailAlloc_3666_, 2, v_pos_3656_);
lean_ctor_set(v_reuseFailAlloc_3666_, 3, v_cache_3657_);
lean_ctor_set(v_reuseFailAlloc_3666_, 4, v_errorMsg_3658_);
lean_ctor_set(v_reuseFailAlloc_3666_, 5, v_recoveredErrors_3659_);
v___x_3665_ = v_reuseFailAlloc_3666_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
return v___x_3665_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepNewError___boxed(lean_object* v_s_3668_, lean_object* v_oldStackSize_3669_){
_start:
{
lean_object* v_res_3670_; 
v_res_3670_ = l_Lean_Parser_ParserState_keepNewError(v_s_3668_, v_oldStackSize_3669_);
lean_dec(v_oldStackSize_3669_);
return v_res_3670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepPrevError(lean_object* v_s_3671_, lean_object* v_oldStackSize_3672_, lean_object* v_oldStopPos_3673_, lean_object* v_oldError_3674_, lean_object* v_oldLhsPrec_3675_){
_start:
{
lean_object* v_stxStack_3676_; lean_object* v_cache_3677_; lean_object* v_recoveredErrors_3678_; lean_object* v___x_3680_; uint8_t v_isShared_3681_; uint8_t v_isSharedCheck_3686_; 
v_stxStack_3676_ = lean_ctor_get(v_s_3671_, 0);
v_cache_3677_ = lean_ctor_get(v_s_3671_, 3);
v_recoveredErrors_3678_ = lean_ctor_get(v_s_3671_, 5);
v_isSharedCheck_3686_ = !lean_is_exclusive(v_s_3671_);
if (v_isSharedCheck_3686_ == 0)
{
lean_object* v_unused_3687_; lean_object* v_unused_3688_; lean_object* v_unused_3689_; 
v_unused_3687_ = lean_ctor_get(v_s_3671_, 4);
lean_dec(v_unused_3687_);
v_unused_3688_ = lean_ctor_get(v_s_3671_, 2);
lean_dec(v_unused_3688_);
v_unused_3689_ = lean_ctor_get(v_s_3671_, 1);
lean_dec(v_unused_3689_);
v___x_3680_ = v_s_3671_;
v_isShared_3681_ = v_isSharedCheck_3686_;
goto v_resetjp_3679_;
}
else
{
lean_inc(v_recoveredErrors_3678_);
lean_inc(v_cache_3677_);
lean_inc(v_stxStack_3676_);
lean_dec(v_s_3671_);
v___x_3680_ = lean_box(0);
v_isShared_3681_ = v_isSharedCheck_3686_;
goto v_resetjp_3679_;
}
v_resetjp_3679_:
{
lean_object* v___x_3682_; lean_object* v___x_3684_; 
v___x_3682_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_3676_, v_oldStackSize_3672_);
if (v_isShared_3681_ == 0)
{
lean_ctor_set(v___x_3680_, 4, v_oldError_3674_);
lean_ctor_set(v___x_3680_, 2, v_oldStopPos_3673_);
lean_ctor_set(v___x_3680_, 1, v_oldLhsPrec_3675_);
lean_ctor_set(v___x_3680_, 0, v___x_3682_);
v___x_3684_ = v___x_3680_;
goto v_reusejp_3683_;
}
else
{
lean_object* v_reuseFailAlloc_3685_; 
v_reuseFailAlloc_3685_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3685_, 0, v___x_3682_);
lean_ctor_set(v_reuseFailAlloc_3685_, 1, v_oldLhsPrec_3675_);
lean_ctor_set(v_reuseFailAlloc_3685_, 2, v_oldStopPos_3673_);
lean_ctor_set(v_reuseFailAlloc_3685_, 3, v_cache_3677_);
lean_ctor_set(v_reuseFailAlloc_3685_, 4, v_oldError_3674_);
lean_ctor_set(v_reuseFailAlloc_3685_, 5, v_recoveredErrors_3678_);
v___x_3684_ = v_reuseFailAlloc_3685_;
goto v_reusejp_3683_;
}
v_reusejp_3683_:
{
return v___x_3684_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepPrevError___boxed(lean_object* v_s_3690_, lean_object* v_oldStackSize_3691_, lean_object* v_oldStopPos_3692_, lean_object* v_oldError_3693_, lean_object* v_oldLhsPrec_3694_){
_start:
{
lean_object* v_res_3695_; 
v_res_3695_ = l_Lean_Parser_ParserState_keepPrevError(v_s_3690_, v_oldStackSize_3691_, v_oldStopPos_3692_, v_oldError_3693_, v_oldLhsPrec_3694_);
lean_dec(v_oldStackSize_3691_);
return v_res_3695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mergeErrors(lean_object* v_s_3696_, lean_object* v_oldStackSize_3697_, lean_object* v_oldError_3698_){
_start:
{
lean_object* v_stxStack_3699_; lean_object* v_lhsPrec_3700_; lean_object* v_pos_3701_; lean_object* v_cache_3702_; lean_object* v_errorMsg_3703_; lean_object* v_recoveredErrors_3704_; lean_object* v___y_3706_; 
v_stxStack_3699_ = lean_ctor_get(v_s_3696_, 0);
v_lhsPrec_3700_ = lean_ctor_get(v_s_3696_, 1);
v_pos_3701_ = lean_ctor_get(v_s_3696_, 2);
v_cache_3702_ = lean_ctor_get(v_s_3696_, 3);
v_errorMsg_3703_ = lean_ctor_get(v_s_3696_, 4);
v_recoveredErrors_3704_ = lean_ctor_get(v_s_3696_, 5);
if (lean_obj_tag(v_errorMsg_3703_) == 1)
{
lean_object* v_val_3710_; uint8_t v___x_3711_; 
lean_inc_ref(v_errorMsg_3703_);
lean_inc_ref(v_recoveredErrors_3704_);
lean_inc_ref(v_cache_3702_);
lean_inc(v_pos_3701_);
lean_inc(v_lhsPrec_3700_);
lean_inc_ref(v_stxStack_3699_);
lean_dec_ref(v_s_3696_);
v_val_3710_ = lean_ctor_get(v_errorMsg_3703_, 0);
lean_inc(v_val_3710_);
lean_dec_ref_known(v_errorMsg_3703_, 1);
v___x_3711_ = l_Lean_Parser_instBEqError_beq(v_oldError_3698_, v_val_3710_);
if (v___x_3711_ == 0)
{
lean_object* v___x_3712_; 
v___x_3712_ = l_Lean_Parser_Error_merge(v_oldError_3698_, v_val_3710_);
v___y_3706_ = v___x_3712_;
goto v___jp_3705_;
}
else
{
lean_dec_ref(v_oldError_3698_);
v___y_3706_ = v_val_3710_;
goto v___jp_3705_;
}
}
else
{
lean_dec_ref(v_oldError_3698_);
return v_s_3696_;
}
v___jp_3705_:
{
lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; 
v___x_3707_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_3699_, v_oldStackSize_3697_);
v___x_3708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3708_, 0, v___y_3706_);
v___x_3709_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3709_, 0, v___x_3707_);
lean_ctor_set(v___x_3709_, 1, v_lhsPrec_3700_);
lean_ctor_set(v___x_3709_, 2, v_pos_3701_);
lean_ctor_set(v___x_3709_, 3, v_cache_3702_);
lean_ctor_set(v___x_3709_, 4, v___x_3708_);
lean_ctor_set(v___x_3709_, 5, v_recoveredErrors_3704_);
return v___x_3709_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mergeErrors___boxed(lean_object* v_s_3713_, lean_object* v_oldStackSize_3714_, lean_object* v_oldError_3715_){
_start:
{
lean_object* v_res_3716_; 
v_res_3716_ = l_Lean_Parser_ParserState_mergeErrors(v_s_3713_, v_oldStackSize_3714_, v_oldError_3715_);
lean_dec(v_oldStackSize_3714_);
return v_res_3716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepLatest(lean_object* v_s_3717_, lean_object* v_startStackSize_3718_){
_start:
{
lean_object* v_stxStack_3719_; lean_object* v_lhsPrec_3720_; lean_object* v_pos_3721_; lean_object* v_cache_3722_; lean_object* v_recoveredErrors_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3732_; 
v_stxStack_3719_ = lean_ctor_get(v_s_3717_, 0);
v_lhsPrec_3720_ = lean_ctor_get(v_s_3717_, 1);
v_pos_3721_ = lean_ctor_get(v_s_3717_, 2);
v_cache_3722_ = lean_ctor_get(v_s_3717_, 3);
v_recoveredErrors_3723_ = lean_ctor_get(v_s_3717_, 5);
v_isSharedCheck_3732_ = !lean_is_exclusive(v_s_3717_);
if (v_isSharedCheck_3732_ == 0)
{
lean_object* v_unused_3733_; 
v_unused_3733_ = lean_ctor_get(v_s_3717_, 4);
lean_dec(v_unused_3733_);
v___x_3725_ = v_s_3717_;
v_isShared_3726_ = v_isSharedCheck_3732_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_recoveredErrors_3723_);
lean_inc(v_cache_3722_);
lean_inc(v_pos_3721_);
lean_inc(v_lhsPrec_3720_);
lean_inc(v_stxStack_3719_);
lean_dec(v_s_3717_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3732_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3730_; 
v___x_3727_ = l_Lean_Parser_ParserState_keepTop(v_stxStack_3719_, v_startStackSize_3718_);
v___x_3728_ = lean_box(0);
if (v_isShared_3726_ == 0)
{
lean_ctor_set(v___x_3725_, 4, v___x_3728_);
lean_ctor_set(v___x_3725_, 0, v___x_3727_);
v___x_3730_ = v___x_3725_;
goto v_reusejp_3729_;
}
else
{
lean_object* v_reuseFailAlloc_3731_; 
v_reuseFailAlloc_3731_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3731_, 0, v___x_3727_);
lean_ctor_set(v_reuseFailAlloc_3731_, 1, v_lhsPrec_3720_);
lean_ctor_set(v_reuseFailAlloc_3731_, 2, v_pos_3721_);
lean_ctor_set(v_reuseFailAlloc_3731_, 3, v_cache_3722_);
lean_ctor_set(v_reuseFailAlloc_3731_, 4, v___x_3728_);
lean_ctor_set(v_reuseFailAlloc_3731_, 5, v_recoveredErrors_3723_);
v___x_3730_ = v_reuseFailAlloc_3731_;
goto v_reusejp_3729_;
}
v_reusejp_3729_:
{
return v___x_3730_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepLatest___boxed(lean_object* v_s_3734_, lean_object* v_startStackSize_3735_){
_start:
{
lean_object* v_res_3736_; 
v_res_3736_ = l_Lean_Parser_ParserState_keepLatest(v_s_3734_, v_startStackSize_3735_);
lean_dec(v_startStackSize_3735_);
return v_res_3736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_replaceLongest(lean_object* v_s_3737_, lean_object* v_startStackSize_3738_){
_start:
{
lean_object* v___x_3739_; 
v___x_3739_ = l_Lean_Parser_ParserState_keepLatest(v_s_3737_, v_startStackSize_3738_);
return v___x_3739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_replaceLongest___boxed(lean_object* v_s_3740_, lean_object* v_startStackSize_3741_){
_start:
{
lean_object* v_res_3742_; 
v_res_3742_ = l_Lean_Parser_ParserState_replaceLongest(v_s_3740_, v_startStackSize_3741_);
lean_dec(v_startStackSize_3741_);
return v_res_3742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_invalidLongestMatchParser(lean_object* v_s_3744_){
_start:
{
lean_object* v___x_3745_; lean_object* v___x_3746_; 
v___x_3745_ = ((lean_object*)(l_Lean_Parser_invalidLongestMatchParser___closed__0));
v___x_3746_ = l_Lean_Parser_ParserState_mkError(v_s_3744_, v___x_3745_);
return v___x_3746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_runLongestMatchParser(lean_object* v_left_x3f_3747_, lean_object* v_startLhsPrec_3748_, lean_object* v_p_3749_, lean_object* v_c_3750_, lean_object* v_s_3751_){
_start:
{
lean_object* v___y_3753_; lean_object* v_s_3754_; lean_object* v_stxStack_3767_; lean_object* v_pos_3768_; lean_object* v_cache_3769_; lean_object* v_errorMsg_3770_; lean_object* v_recoveredErrors_3771_; lean_object* v___x_3773_; uint8_t v_isShared_3774_; uint8_t v_isSharedCheck_3784_; 
v_stxStack_3767_ = lean_ctor_get(v_s_3751_, 0);
v_pos_3768_ = lean_ctor_get(v_s_3751_, 2);
v_cache_3769_ = lean_ctor_get(v_s_3751_, 3);
v_errorMsg_3770_ = lean_ctor_get(v_s_3751_, 4);
v_recoveredErrors_3771_ = lean_ctor_get(v_s_3751_, 5);
v_isSharedCheck_3784_ = !lean_is_exclusive(v_s_3751_);
if (v_isSharedCheck_3784_ == 0)
{
lean_object* v_unused_3785_; 
v_unused_3785_ = lean_ctor_get(v_s_3751_, 1);
lean_dec(v_unused_3785_);
v___x_3773_ = v_s_3751_;
v_isShared_3774_ = v_isSharedCheck_3784_;
goto v_resetjp_3772_;
}
else
{
lean_inc(v_recoveredErrors_3771_);
lean_inc(v_errorMsg_3770_);
lean_inc(v_cache_3769_);
lean_inc(v_pos_3768_);
lean_inc(v_stxStack_3767_);
lean_dec(v_s_3751_);
v___x_3773_ = lean_box(0);
v_isShared_3774_ = v_isSharedCheck_3784_;
goto v_resetjp_3772_;
}
v___jp_3752_:
{
lean_object* v_s_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; uint8_t v___x_3759_; 
v_s_3755_ = lean_apply_2(v_p_3749_, v_c_3750_, v_s_3754_);
v___x_3756_ = l_Lean_Parser_ParserState_stackSize(v_s_3755_);
v___x_3757_ = lean_unsigned_to_nat(1u);
v___x_3758_ = lean_nat_add(v___y_3753_, v___x_3757_);
v___x_3759_ = lean_nat_dec_eq(v___x_3756_, v___x_3758_);
lean_dec(v___x_3758_);
lean_dec(v___x_3756_);
if (v___x_3759_ == 0)
{
lean_object* v_errorMsg_3760_; lean_object* v___x_3761_; uint8_t v___x_3762_; 
v_errorMsg_3760_ = lean_ctor_get(v_s_3755_, 4);
lean_inc(v_errorMsg_3760_);
v___x_3761_ = lean_box(0);
v___x_3762_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_3760_, v___x_3761_);
lean_dec(v_errorMsg_3760_);
if (v___x_3762_ == 0)
{
lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; 
v___x_3763_ = l_Lean_Parser_ParserState_shrinkStack(v_s_3755_, v___y_3753_);
lean_dec(v___y_3753_);
v___x_3764_ = lean_box(0);
v___x_3765_ = l_Lean_Parser_ParserState_pushSyntax(v___x_3763_, v___x_3764_);
return v___x_3765_;
}
else
{
lean_object* v___x_3766_; 
lean_dec(v___y_3753_);
v___x_3766_ = l_Lean_Parser_invalidLongestMatchParser(v_s_3755_);
return v___x_3766_;
}
}
else
{
lean_dec(v___y_3753_);
return v_s_3755_;
}
}
v_resetjp_3772_:
{
lean_object* v___y_3776_; 
if (lean_obj_tag(v_left_x3f_3747_) == 0)
{
lean_object* v___x_3783_; 
lean_dec(v_startLhsPrec_3748_);
v___x_3783_ = l_Lean_Parser_maxPrec;
v___y_3776_ = v___x_3783_;
goto v___jp_3775_;
}
else
{
v___y_3776_ = v_startLhsPrec_3748_;
goto v___jp_3775_;
}
v___jp_3775_:
{
lean_object* v_s_3778_; 
if (v_isShared_3774_ == 0)
{
lean_ctor_set(v___x_3773_, 1, v___y_3776_);
v_s_3778_ = v___x_3773_;
goto v_reusejp_3777_;
}
else
{
lean_object* v_reuseFailAlloc_3782_; 
v_reuseFailAlloc_3782_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3782_, 0, v_stxStack_3767_);
lean_ctor_set(v_reuseFailAlloc_3782_, 1, v___y_3776_);
lean_ctor_set(v_reuseFailAlloc_3782_, 2, v_pos_3768_);
lean_ctor_set(v_reuseFailAlloc_3782_, 3, v_cache_3769_);
lean_ctor_set(v_reuseFailAlloc_3782_, 4, v_errorMsg_3770_);
lean_ctor_set(v_reuseFailAlloc_3782_, 5, v_recoveredErrors_3771_);
v_s_3778_ = v_reuseFailAlloc_3782_;
goto v_reusejp_3777_;
}
v_reusejp_3777_:
{
lean_object* v_startSize_3779_; 
v_startSize_3779_ = l_Lean_Parser_ParserState_stackSize(v_s_3778_);
if (lean_obj_tag(v_left_x3f_3747_) == 1)
{
lean_object* v_val_3780_; lean_object* v_s_3781_; 
v_val_3780_ = lean_ctor_get(v_left_x3f_3747_, 0);
lean_inc(v_val_3780_);
lean_dec_ref_known(v_left_x3f_3747_, 1);
v_s_3781_ = l_Lean_Parser_ParserState_pushSyntax(v_s_3778_, v_val_3780_);
v___y_3753_ = v_startSize_3779_;
v_s_3754_ = v_s_3781_;
goto v___jp_3752_;
}
else
{
lean_dec(v_left_x3f_3747_);
v___y_3753_ = v_startSize_3779_;
v_s_3754_ = v_s_3778_;
goto v___jp_3752_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchStep___lam__0(lean_object* v_s_3786_, lean_object* v_prio_3787_){
_start:
{
lean_object* v_pos_3788_; lean_object* v_errorMsg_3789_; lean_object* v___y_3791_; 
v_pos_3788_ = lean_ctor_get(v_s_3786_, 2);
v_errorMsg_3789_ = lean_ctor_get(v_s_3786_, 4);
if (lean_obj_tag(v_errorMsg_3789_) == 0)
{
lean_object* v___x_3794_; 
v___x_3794_ = lean_unsigned_to_nat(1u);
v___y_3791_ = v___x_3794_;
goto v___jp_3790_;
}
else
{
lean_object* v___x_3795_; 
v___x_3795_ = lean_unsigned_to_nat(0u);
v___y_3791_ = v___x_3795_;
goto v___jp_3790_;
}
v___jp_3790_:
{
lean_object* v___x_3792_; lean_object* v___x_3793_; 
v___x_3792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3792_, 0, v___y_3791_);
lean_ctor_set(v___x_3792_, 1, v_prio_3787_);
lean_inc(v_pos_3788_);
v___x_3793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3793_, 0, v_pos_3788_);
lean_ctor_set(v___x_3793_, 1, v___x_3792_);
return v___x_3793_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchStep___lam__0___boxed(lean_object* v_s_3796_, lean_object* v_prio_3797_){
_start:
{
lean_object* v_res_3798_; 
v_res_3798_ = l_Lean_Parser_longestMatchStep___lam__0(v_s_3796_, v_prio_3797_);
lean_dec_ref(v_s_3796_);
return v_res_3798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchStep(lean_object* v_left_x3f_3799_, lean_object* v_startSize_3800_, lean_object* v_startLhsPrec_3801_, lean_object* v_startPos_3802_, lean_object* v_prevPrio_3803_, lean_object* v_prio_3804_, lean_object* v_p_3805_, lean_object* v_c_3806_, lean_object* v_s_3807_){
_start:
{
lean_object* v_lhsPrec_3808_; lean_object* v_pos_3809_; lean_object* v_errorMsg_3810_; lean_object* v_previousScore_3811_; lean_object* v_fst_3812_; lean_object* v_snd_3813_; lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3869_; 
v_lhsPrec_3808_ = lean_ctor_get(v_s_3807_, 1);
lean_inc(v_lhsPrec_3808_);
v_pos_3809_ = lean_ctor_get(v_s_3807_, 2);
lean_inc(v_pos_3809_);
v_errorMsg_3810_ = lean_ctor_get(v_s_3807_, 4);
lean_inc(v_errorMsg_3810_);
lean_inc(v_prevPrio_3803_);
v_previousScore_3811_ = l_Lean_Parser_longestMatchStep___lam__0(v_s_3807_, v_prevPrio_3803_);
v_fst_3812_ = lean_ctor_get(v_previousScore_3811_, 0);
v_snd_3813_ = lean_ctor_get(v_previousScore_3811_, 1);
v_isSharedCheck_3869_ = !lean_is_exclusive(v_previousScore_3811_);
if (v_isSharedCheck_3869_ == 0)
{
v___x_3815_ = v_previousScore_3811_;
v_isShared_3816_ = v_isSharedCheck_3869_;
goto v_resetjp_3814_;
}
else
{
lean_inc(v_snd_3813_);
lean_inc(v_fst_3812_);
lean_dec(v_previousScore_3811_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3869_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v_prevSize_3817_; lean_object* v_s_3818_; lean_object* v_s_3819_; lean_object* v___x_3828_; lean_object* v_fst_3829_; lean_object* v_snd_3830_; uint8_t v___x_3831_; 
v_prevSize_3817_ = l_Lean_Parser_ParserState_stackSize(v_s_3807_);
v_s_3818_ = l_Lean_Parser_ParserState_restore(v_s_3807_, v_prevSize_3817_, v_startPos_3802_);
v_s_3819_ = l_Lean_Parser_runLongestMatchParser(v_left_x3f_3799_, v_startLhsPrec_3801_, v_p_3805_, v_c_3806_, v_s_3818_);
lean_inc(v_prio_3804_);
v___x_3828_ = l_Lean_Parser_longestMatchStep___lam__0(v_s_3819_, v_prio_3804_);
v_fst_3829_ = lean_ctor_get(v___x_3828_, 0);
lean_inc(v_fst_3829_);
v_snd_3830_ = lean_ctor_get(v___x_3828_, 1);
lean_inc(v_snd_3830_);
lean_dec_ref(v___x_3828_);
v___x_3831_ = lean_nat_dec_lt(v_fst_3812_, v_fst_3829_);
if (v___x_3831_ == 0)
{
uint8_t v___x_3832_; 
v___x_3832_ = lean_nat_dec_eq(v_fst_3812_, v_fst_3829_);
lean_dec(v_fst_3829_);
lean_dec(v_fst_3812_);
if (v___x_3832_ == 0)
{
lean_dec(v_snd_3830_);
lean_del_object(v___x_3815_);
lean_dec(v_snd_3813_);
lean_dec(v_prio_3804_);
goto v___jp_3825_;
}
else
{
lean_object* v_fst_3833_; lean_object* v_snd_3834_; lean_object* v_fst_3835_; lean_object* v_snd_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3868_; 
v_fst_3833_ = lean_ctor_get(v_snd_3813_, 0);
lean_inc(v_fst_3833_);
v_snd_3834_ = lean_ctor_get(v_snd_3813_, 1);
lean_inc(v_snd_3834_);
lean_dec(v_snd_3813_);
v_fst_3835_ = lean_ctor_get(v_snd_3830_, 0);
v_snd_3836_ = lean_ctor_get(v_snd_3830_, 1);
v_isSharedCheck_3868_ = !lean_is_exclusive(v_snd_3830_);
if (v_isSharedCheck_3868_ == 0)
{
v___x_3838_ = v_snd_3830_;
v_isShared_3839_ = v_isSharedCheck_3868_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_snd_3836_);
lean_inc(v_fst_3835_);
lean_dec(v_snd_3830_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3868_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
uint8_t v___x_3840_; 
v___x_3840_ = lean_nat_dec_lt(v_fst_3833_, v_fst_3835_);
if (v___x_3840_ == 0)
{
uint8_t v___x_3841_; 
v___x_3841_ = lean_nat_dec_eq(v_fst_3833_, v_fst_3835_);
lean_dec(v_fst_3835_);
lean_dec(v_fst_3833_);
if (v___x_3841_ == 0)
{
lean_del_object(v___x_3838_);
lean_dec(v_snd_3836_);
lean_dec(v_snd_3834_);
lean_del_object(v___x_3815_);
lean_dec(v_prio_3804_);
goto v___jp_3825_;
}
else
{
uint8_t v___x_3842_; 
v___x_3842_ = lean_nat_dec_lt(v_snd_3834_, v_snd_3836_);
if (v___x_3842_ == 0)
{
uint8_t v___x_3843_; 
lean_del_object(v___x_3815_);
v___x_3843_ = lean_nat_dec_eq(v_snd_3834_, v_snd_3836_);
lean_dec(v_snd_3836_);
lean_dec(v_snd_3834_);
if (v___x_3843_ == 0)
{
lean_del_object(v___x_3838_);
lean_dec(v_prio_3804_);
goto v___jp_3825_;
}
else
{
lean_dec(v_pos_3809_);
lean_dec(v_prevPrio_3803_);
if (lean_obj_tag(v_errorMsg_3810_) == 0)
{
lean_object* v_stxStack_3844_; lean_object* v_lhsPrec_3845_; lean_object* v_pos_3846_; lean_object* v_cache_3847_; lean_object* v_errorMsg_3848_; lean_object* v_recoveredErrors_3849_; lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_3862_; 
lean_dec(v_prevSize_3817_);
v_stxStack_3844_ = lean_ctor_get(v_s_3819_, 0);
v_lhsPrec_3845_ = lean_ctor_get(v_s_3819_, 1);
v_pos_3846_ = lean_ctor_get(v_s_3819_, 2);
v_cache_3847_ = lean_ctor_get(v_s_3819_, 3);
v_errorMsg_3848_ = lean_ctor_get(v_s_3819_, 4);
v_recoveredErrors_3849_ = lean_ctor_get(v_s_3819_, 5);
v_isSharedCheck_3862_ = !lean_is_exclusive(v_s_3819_);
if (v_isSharedCheck_3862_ == 0)
{
v___x_3851_ = v_s_3819_;
v_isShared_3852_ = v_isSharedCheck_3862_;
goto v_resetjp_3850_;
}
else
{
lean_inc(v_recoveredErrors_3849_);
lean_inc(v_errorMsg_3848_);
lean_inc(v_cache_3847_);
lean_inc(v_pos_3846_);
lean_inc(v_lhsPrec_3845_);
lean_inc(v_stxStack_3844_);
lean_dec(v_s_3819_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_3862_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
lean_object* v___y_3854_; uint8_t v___x_3861_; 
v___x_3861_ = lean_nat_dec_le(v_lhsPrec_3845_, v_lhsPrec_3808_);
if (v___x_3861_ == 0)
{
lean_dec(v_lhsPrec_3845_);
v___y_3854_ = v_lhsPrec_3808_;
goto v___jp_3853_;
}
else
{
lean_dec(v_lhsPrec_3808_);
v___y_3854_ = v_lhsPrec_3845_;
goto v___jp_3853_;
}
v___jp_3853_:
{
lean_object* v___x_3856_; 
if (v_isShared_3852_ == 0)
{
lean_ctor_set(v___x_3851_, 1, v___y_3854_);
v___x_3856_ = v___x_3851_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3860_; 
v_reuseFailAlloc_3860_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3860_, 0, v_stxStack_3844_);
lean_ctor_set(v_reuseFailAlloc_3860_, 1, v___y_3854_);
lean_ctor_set(v_reuseFailAlloc_3860_, 2, v_pos_3846_);
lean_ctor_set(v_reuseFailAlloc_3860_, 3, v_cache_3847_);
lean_ctor_set(v_reuseFailAlloc_3860_, 4, v_errorMsg_3848_);
lean_ctor_set(v_reuseFailAlloc_3860_, 5, v_recoveredErrors_3849_);
v___x_3856_ = v_reuseFailAlloc_3860_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
lean_object* v___x_3858_; 
if (v_isShared_3839_ == 0)
{
lean_ctor_set(v___x_3838_, 1, v_prio_3804_);
lean_ctor_set(v___x_3838_, 0, v___x_3856_);
v___x_3858_ = v___x_3838_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3859_; 
v_reuseFailAlloc_3859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3859_, 0, v___x_3856_);
lean_ctor_set(v_reuseFailAlloc_3859_, 1, v_prio_3804_);
v___x_3858_ = v_reuseFailAlloc_3859_;
goto v_reusejp_3857_;
}
v_reusejp_3857_:
{
return v___x_3858_;
}
}
}
}
}
else
{
lean_object* v_val_3863_; lean_object* v___x_3864_; lean_object* v___x_3866_; 
lean_dec(v_lhsPrec_3808_);
v_val_3863_ = lean_ctor_get(v_errorMsg_3810_, 0);
lean_inc(v_val_3863_);
lean_dec_ref_known(v_errorMsg_3810_, 1);
v___x_3864_ = l_Lean_Parser_ParserState_mergeErrors(v_s_3819_, v_prevSize_3817_, v_val_3863_);
lean_dec(v_prevSize_3817_);
if (v_isShared_3839_ == 0)
{
lean_ctor_set(v___x_3838_, 1, v_prio_3804_);
lean_ctor_set(v___x_3838_, 0, v___x_3864_);
v___x_3866_ = v___x_3838_;
goto v_reusejp_3865_;
}
else
{
lean_object* v_reuseFailAlloc_3867_; 
v_reuseFailAlloc_3867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3867_, 0, v___x_3864_);
lean_ctor_set(v_reuseFailAlloc_3867_, 1, v_prio_3804_);
v___x_3866_ = v_reuseFailAlloc_3867_;
goto v_reusejp_3865_;
}
v_reusejp_3865_:
{
return v___x_3866_;
}
}
}
}
else
{
lean_del_object(v___x_3838_);
lean_dec(v_snd_3836_);
lean_dec(v_snd_3834_);
lean_dec(v_prevSize_3817_);
lean_dec(v_errorMsg_3810_);
lean_dec(v_pos_3809_);
lean_dec(v_lhsPrec_3808_);
lean_dec(v_prevPrio_3803_);
goto v___jp_3820_;
}
}
}
else
{
lean_del_object(v___x_3838_);
lean_dec(v_snd_3836_);
lean_dec(v_fst_3835_);
lean_dec(v_snd_3834_);
lean_dec(v_fst_3833_);
lean_dec(v_prevSize_3817_);
lean_dec(v_errorMsg_3810_);
lean_dec(v_pos_3809_);
lean_dec(v_lhsPrec_3808_);
lean_dec(v_prevPrio_3803_);
goto v___jp_3820_;
}
}
}
}
else
{
lean_dec(v_snd_3830_);
lean_dec(v_fst_3829_);
lean_dec(v_prevSize_3817_);
lean_dec(v_snd_3813_);
lean_dec(v_fst_3812_);
lean_dec(v_errorMsg_3810_);
lean_dec(v_pos_3809_);
lean_dec(v_lhsPrec_3808_);
lean_dec(v_prevPrio_3803_);
goto v___jp_3820_;
}
v___jp_3820_:
{
lean_object* v___x_3821_; lean_object* v___x_3823_; 
v___x_3821_ = l_Lean_Parser_ParserState_keepNewError(v_s_3819_, v_startSize_3800_);
if (v_isShared_3816_ == 0)
{
lean_ctor_set(v___x_3815_, 1, v_prio_3804_);
lean_ctor_set(v___x_3815_, 0, v___x_3821_);
v___x_3823_ = v___x_3815_;
goto v_reusejp_3822_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v___x_3821_);
lean_ctor_set(v_reuseFailAlloc_3824_, 1, v_prio_3804_);
v___x_3823_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3822_;
}
v_reusejp_3822_:
{
return v___x_3823_;
}
}
v___jp_3825_:
{
lean_object* v___x_3826_; lean_object* v___x_3827_; 
v___x_3826_ = l_Lean_Parser_ParserState_keepPrevError(v_s_3819_, v_prevSize_3817_, v_pos_3809_, v_errorMsg_3810_, v_lhsPrec_3808_);
lean_dec(v_prevSize_3817_);
v___x_3827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3827_, 0, v___x_3826_);
lean_ctor_set(v___x_3827_, 1, v_prevPrio_3803_);
return v___x_3827_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchStep___boxed(lean_object* v_left_x3f_3870_, lean_object* v_startSize_3871_, lean_object* v_startLhsPrec_3872_, lean_object* v_startPos_3873_, lean_object* v_prevPrio_3874_, lean_object* v_prio_3875_, lean_object* v_p_3876_, lean_object* v_c_3877_, lean_object* v_s_3878_){
_start:
{
lean_object* v_res_3879_; 
v_res_3879_ = l_Lean_Parser_longestMatchStep(v_left_x3f_3870_, v_startSize_3871_, v_startLhsPrec_3872_, v_startPos_3873_, v_prevPrio_3874_, v_prio_3875_, v_p_3876_, v_c_3877_, v_s_3878_);
lean_dec(v_startSize_3871_);
return v_res_3879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchMkResult(lean_object* v_startSize_3880_, lean_object* v_s_3881_){
_start:
{
lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; uint8_t v___x_3885_; 
v___x_3882_ = lean_unsigned_to_nat(1u);
v___x_3883_ = lean_nat_add(v_startSize_3880_, v___x_3882_);
v___x_3884_ = l_Lean_Parser_ParserState_stackSize(v_s_3881_);
v___x_3885_ = lean_nat_dec_lt(v___x_3883_, v___x_3884_);
lean_dec(v___x_3884_);
lean_dec(v___x_3883_);
if (v___x_3885_ == 0)
{
return v_s_3881_;
}
else
{
lean_object* v___x_3886_; lean_object* v___x_3887_; 
v___x_3886_ = ((lean_object*)(l_Lean_Parser_orelseFnCore___lam__0___closed__1));
v___x_3887_ = l_Lean_Parser_ParserState_mkNode(v_s_3881_, v___x_3886_, v_startSize_3880_);
return v___x_3887_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchMkResult___boxed(lean_object* v_startSize_3888_, lean_object* v_s_3889_){
_start:
{
lean_object* v_res_3890_; 
v_res_3890_ = l_Lean_Parser_longestMatchMkResult(v_startSize_3888_, v_s_3889_);
lean_dec(v_startSize_3888_);
return v_res_3890_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse(lean_object* v_left_x3f_3891_, lean_object* v_startSize_3892_, lean_object* v_startLhsPrec_3893_, lean_object* v_startPos_3894_, lean_object* v_prevPrio_3895_, lean_object* v_ps_3896_, lean_object* v_a_3897_, lean_object* v_a_3898_){
_start:
{
if (lean_obj_tag(v_ps_3896_) == 0)
{
lean_object* v___x_3899_; 
lean_dec_ref(v_a_3897_);
lean_dec(v_prevPrio_3895_);
lean_dec(v_startPos_3894_);
lean_dec(v_startLhsPrec_3893_);
lean_dec(v_left_x3f_3891_);
v___x_3899_ = l_Lean_Parser_longestMatchMkResult(v_startSize_3892_, v_a_3898_);
return v___x_3899_;
}
else
{
lean_object* v_head_3900_; lean_object* v_fst_3901_; lean_object* v_tail_3902_; lean_object* v_snd_3903_; lean_object* v_fn_3904_; lean_object* v___x_3905_; lean_object* v_fst_3906_; lean_object* v_snd_3907_; 
v_head_3900_ = lean_ctor_get(v_ps_3896_, 0);
lean_inc(v_head_3900_);
v_fst_3901_ = lean_ctor_get(v_head_3900_, 0);
lean_inc(v_fst_3901_);
v_tail_3902_ = lean_ctor_get(v_ps_3896_, 1);
lean_inc(v_tail_3902_);
lean_dec_ref_known(v_ps_3896_, 2);
v_snd_3903_ = lean_ctor_get(v_head_3900_, 1);
lean_inc(v_snd_3903_);
lean_dec(v_head_3900_);
v_fn_3904_ = lean_ctor_get(v_fst_3901_, 1);
lean_inc_ref(v_fn_3904_);
lean_dec(v_fst_3901_);
lean_inc_ref(v_a_3897_);
lean_inc(v_startPos_3894_);
lean_inc(v_startLhsPrec_3893_);
lean_inc(v_left_x3f_3891_);
v___x_3905_ = l_Lean_Parser_longestMatchStep(v_left_x3f_3891_, v_startSize_3892_, v_startLhsPrec_3893_, v_startPos_3894_, v_prevPrio_3895_, v_snd_3903_, v_fn_3904_, v_a_3897_, v_a_3898_);
v_fst_3906_ = lean_ctor_get(v___x_3905_, 0);
lean_inc(v_fst_3906_);
v_snd_3907_ = lean_ctor_get(v___x_3905_, 1);
lean_inc(v_snd_3907_);
lean_dec_ref(v___x_3905_);
v_prevPrio_3895_ = v_snd_3907_;
v_ps_3896_ = v_tail_3902_;
v_a_3898_ = v_fst_3906_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse___boxed(lean_object* v_left_x3f_3909_, lean_object* v_startSize_3910_, lean_object* v_startLhsPrec_3911_, lean_object* v_startPos_3912_, lean_object* v_prevPrio_3913_, lean_object* v_ps_3914_, lean_object* v_a_3915_, lean_object* v_a_3916_){
_start:
{
lean_object* v_res_3917_; 
v_res_3917_ = l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse(v_left_x3f_3909_, v_startSize_3910_, v_startLhsPrec_3911_, v_startPos_3912_, v_prevPrio_3913_, v_ps_3914_, v_a_3915_, v_a_3916_);
lean_dec(v_startSize_3910_);
return v_res_3917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFnAux(lean_object* v_left_x3f_3918_, lean_object* v_startSize_3919_, lean_object* v_startLhsPrec_3920_, lean_object* v_startPos_3921_, lean_object* v_prevPrio_3922_, lean_object* v_ps_3923_, lean_object* v_a_3924_, lean_object* v_a_3925_){
_start:
{
lean_object* v___x_3926_; 
v___x_3926_ = l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse(v_left_x3f_3918_, v_startSize_3919_, v_startLhsPrec_3920_, v_startPos_3921_, v_prevPrio_3922_, v_ps_3923_, v_a_3924_, v_a_3925_);
return v___x_3926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFnAux___boxed(lean_object* v_left_x3f_3927_, lean_object* v_startSize_3928_, lean_object* v_startLhsPrec_3929_, lean_object* v_startPos_3930_, lean_object* v_prevPrio_3931_, lean_object* v_ps_3932_, lean_object* v_a_3933_, lean_object* v_a_3934_){
_start:
{
lean_object* v_res_3935_; 
v_res_3935_ = l_Lean_Parser_longestMatchFnAux(v_left_x3f_3927_, v_startSize_3928_, v_startLhsPrec_3929_, v_startPos_3930_, v_prevPrio_3931_, v_ps_3932_, v_a_3933_, v_a_3934_);
lean_dec(v_startSize_3928_);
return v_res_3935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFn(lean_object* v_left_x3f_3937_, lean_object* v_x_3938_, lean_object* v_a_3939_, lean_object* v_a_3940_){
_start:
{
if (lean_obj_tag(v_x_3938_) == 0)
{
lean_object* v___x_3941_; lean_object* v___x_3942_; 
lean_dec_ref(v_a_3939_);
lean_dec(v_left_x3f_3937_);
v___x_3941_ = ((lean_object*)(l_Lean_Parser_longestMatchFn___closed__0));
v___x_3942_ = l_Lean_Parser_ParserState_mkError(v_a_3940_, v___x_3941_);
return v___x_3942_;
}
else
{
lean_object* v_tail_3943_; 
v_tail_3943_ = lean_ctor_get(v_x_3938_, 1);
if (lean_obj_tag(v_tail_3943_) == 0)
{
lean_object* v_head_3944_; lean_object* v_fst_3945_; lean_object* v_lhsPrec_3946_; lean_object* v_fn_3947_; lean_object* v___x_3948_; 
v_head_3944_ = lean_ctor_get(v_x_3938_, 0);
lean_inc(v_head_3944_);
lean_dec_ref_known(v_x_3938_, 2);
v_fst_3945_ = lean_ctor_get(v_head_3944_, 0);
lean_inc(v_fst_3945_);
lean_dec(v_head_3944_);
v_lhsPrec_3946_ = lean_ctor_get(v_a_3940_, 1);
lean_inc(v_lhsPrec_3946_);
v_fn_3947_ = lean_ctor_get(v_fst_3945_, 1);
lean_inc_ref(v_fn_3947_);
lean_dec(v_fst_3945_);
v___x_3948_ = l_Lean_Parser_runLongestMatchParser(v_left_x3f_3937_, v_lhsPrec_3946_, v_fn_3947_, v_a_3939_, v_a_3940_);
return v___x_3948_;
}
else
{
lean_object* v_head_3949_; lean_object* v_fst_3950_; lean_object* v_lhsPrec_3951_; lean_object* v_pos_3952_; lean_object* v_snd_3953_; lean_object* v_fn_3954_; lean_object* v_startSize_3955_; lean_object* v_s_3956_; lean_object* v___x_3957_; 
lean_inc(v_tail_3943_);
v_head_3949_ = lean_ctor_get(v_x_3938_, 0);
lean_inc(v_head_3949_);
lean_dec_ref_known(v_x_3938_, 2);
v_fst_3950_ = lean_ctor_get(v_head_3949_, 0);
lean_inc(v_fst_3950_);
v_lhsPrec_3951_ = lean_ctor_get(v_a_3940_, 1);
lean_inc_n(v_lhsPrec_3951_, 2);
v_pos_3952_ = lean_ctor_get(v_a_3940_, 2);
lean_inc(v_pos_3952_);
v_snd_3953_ = lean_ctor_get(v_head_3949_, 1);
lean_inc(v_snd_3953_);
lean_dec(v_head_3949_);
v_fn_3954_ = lean_ctor_get(v_fst_3950_, 1);
lean_inc_ref(v_fn_3954_);
lean_dec(v_fst_3950_);
v_startSize_3955_ = l_Lean_Parser_ParserState_stackSize(v_a_3940_);
lean_inc_ref(v_a_3939_);
lean_inc(v_left_x3f_3937_);
v_s_3956_ = l_Lean_Parser_runLongestMatchParser(v_left_x3f_3937_, v_lhsPrec_3951_, v_fn_3954_, v_a_3939_, v_a_3940_);
v___x_3957_ = l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse(v_left_x3f_3937_, v_startSize_3955_, v_lhsPrec_3951_, v_pos_3952_, v_snd_3953_, v_tail_3943_, v_a_3939_, v_s_3956_);
lean_dec(v_startSize_3955_);
return v___x_3957_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_anyOfFn(lean_object* v_x_3959_, lean_object* v_x_3960_, lean_object* v_x_3961_){
_start:
{
if (lean_obj_tag(v_x_3959_) == 0)
{
lean_object* v___x_3962_; lean_object* v___x_3963_; 
lean_dec_ref(v_x_3960_);
v___x_3962_ = ((lean_object*)(l_Lean_Parser_anyOfFn___closed__0));
v___x_3963_ = l_Lean_Parser_ParserState_mkError(v_x_3961_, v___x_3962_);
return v___x_3963_;
}
else
{
lean_object* v_tail_3964_; 
v_tail_3964_ = lean_ctor_get(v_x_3959_, 1);
if (lean_obj_tag(v_tail_3964_) == 0)
{
lean_object* v_head_3965_; lean_object* v_fn_3966_; lean_object* v___x_3967_; 
v_head_3965_ = lean_ctor_get(v_x_3959_, 0);
lean_inc(v_head_3965_);
lean_dec_ref_known(v_x_3959_, 2);
v_fn_3966_ = lean_ctor_get(v_head_3965_, 1);
lean_inc_ref(v_fn_3966_);
lean_dec(v_head_3965_);
v___x_3967_ = lean_apply_2(v_fn_3966_, v_x_3960_, v_x_3961_);
return v___x_3967_;
}
else
{
lean_object* v_head_3968_; lean_object* v_fn_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
lean_inc(v_tail_3964_);
v_head_3968_ = lean_ctor_get(v_x_3959_, 0);
lean_inc(v_head_3968_);
lean_dec_ref_known(v_x_3959_, 2);
v_fn_3969_ = lean_ctor_get(v_head_3968_, 1);
lean_inc_ref(v_fn_3969_);
lean_dec(v_head_3968_);
v___x_3970_ = lean_alloc_closure((void*)(l_Lean_Parser_anyOfFn), 3, 1);
lean_closure_set(v___x_3970_, 0, v_tail_3964_);
v___x_3971_ = l_Lean_Parser_orelseFn(v_fn_3969_, v___x_3970_, v_x_3960_, v_x_3961_);
return v___x_3971_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColEqFn(lean_object* v_errorMsg_3972_, lean_object* v_c_3973_, lean_object* v_s_3974_){
_start:
{
lean_object* v_toCacheableParserContext_3975_; lean_object* v_savedPos_x3f_3976_; 
v_toCacheableParserContext_3975_ = lean_ctor_get(v_c_3973_, 2);
v_savedPos_x3f_3976_ = lean_ctor_get(v_toCacheableParserContext_3975_, 2);
lean_inc(v_savedPos_x3f_3976_);
if (lean_obj_tag(v_savedPos_x3f_3976_) == 0)
{
lean_dec_ref(v_c_3973_);
lean_dec_ref(v_errorMsg_3972_);
return v_s_3974_;
}
else
{
lean_object* v_toInputContext_3977_; lean_object* v_val_3978_; lean_object* v_fileMap_3979_; lean_object* v_pos_3980_; lean_object* v_savedPos_3981_; lean_object* v_pos_3982_; lean_object* v_column_3983_; lean_object* v_column_3984_; uint8_t v___x_3985_; 
v_toInputContext_3977_ = lean_ctor_get(v_c_3973_, 0);
lean_inc_ref(v_toInputContext_3977_);
lean_dec_ref(v_c_3973_);
v_val_3978_ = lean_ctor_get(v_savedPos_x3f_3976_, 0);
lean_inc(v_val_3978_);
lean_dec_ref_known(v_savedPos_x3f_3976_, 1);
v_fileMap_3979_ = lean_ctor_get(v_toInputContext_3977_, 2);
lean_inc_ref_n(v_fileMap_3979_, 2);
lean_dec_ref(v_toInputContext_3977_);
v_pos_3980_ = lean_ctor_get(v_s_3974_, 2);
v_savedPos_3981_ = l_Lean_FileMap_toPosition(v_fileMap_3979_, v_val_3978_);
lean_dec(v_val_3978_);
v_pos_3982_ = l_Lean_FileMap_toPosition(v_fileMap_3979_, v_pos_3980_);
v_column_3983_ = lean_ctor_get(v_pos_3982_, 1);
lean_inc(v_column_3983_);
lean_dec_ref(v_pos_3982_);
v_column_3984_ = lean_ctor_get(v_savedPos_3981_, 1);
lean_inc(v_column_3984_);
lean_dec_ref(v_savedPos_3981_);
v___x_3985_ = lean_nat_dec_eq(v_column_3983_, v_column_3984_);
lean_dec(v_column_3984_);
lean_dec(v_column_3983_);
if (v___x_3985_ == 0)
{
lean_object* v___x_3986_; 
v___x_3986_ = l_Lean_Parser_ParserState_mkError(v_s_3974_, v_errorMsg_3972_);
return v___x_3986_;
}
else
{
lean_dec_ref(v_errorMsg_3972_);
return v_s_3974_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColEq(lean_object* v_errorMsg_3987_){
_start:
{
lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; 
v___x_3988_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_3989_ = lean_alloc_closure((void*)(l_Lean_Parser_checkColEqFn), 3, 1);
lean_closure_set(v___x_3989_, 0, v_errorMsg_3987_);
v___x_3990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3990_, 0, v___x_3988_);
lean_ctor_set(v___x_3990_, 1, v___x_3989_);
return v___x_3990_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1(){
_start:
{
lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; 
v___x_3998_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1));
v___x_3999_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__2));
v___x_4000_ = l_Lean_addBuiltinDocString(v___x_3998_, v___x_3999_);
return v___x_4000_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___boxed(lean_object* v_a_4001_){
_start:
{
lean_object* v_res_4002_; 
v_res_4002_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1();
return v_res_4002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGeFn(lean_object* v_errorMsg_4003_, lean_object* v_c_4004_, lean_object* v_s_4005_){
_start:
{
lean_object* v_toCacheableParserContext_4006_; lean_object* v_savedPos_x3f_4007_; 
v_toCacheableParserContext_4006_ = lean_ctor_get(v_c_4004_, 2);
v_savedPos_x3f_4007_ = lean_ctor_get(v_toCacheableParserContext_4006_, 2);
lean_inc(v_savedPos_x3f_4007_);
if (lean_obj_tag(v_savedPos_x3f_4007_) == 0)
{
lean_dec_ref(v_c_4004_);
lean_dec_ref(v_errorMsg_4003_);
return v_s_4005_;
}
else
{
lean_object* v_toInputContext_4008_; lean_object* v_val_4009_; lean_object* v_fileMap_4010_; lean_object* v_pos_4011_; lean_object* v_savedPos_4012_; lean_object* v_column_4013_; lean_object* v_pos_4014_; lean_object* v_column_4015_; uint8_t v___x_4016_; 
v_toInputContext_4008_ = lean_ctor_get(v_c_4004_, 0);
lean_inc_ref(v_toInputContext_4008_);
lean_dec_ref(v_c_4004_);
v_val_4009_ = lean_ctor_get(v_savedPos_x3f_4007_, 0);
lean_inc(v_val_4009_);
lean_dec_ref_known(v_savedPos_x3f_4007_, 1);
v_fileMap_4010_ = lean_ctor_get(v_toInputContext_4008_, 2);
lean_inc_ref_n(v_fileMap_4010_, 2);
lean_dec_ref(v_toInputContext_4008_);
v_pos_4011_ = lean_ctor_get(v_s_4005_, 2);
v_savedPos_4012_ = l_Lean_FileMap_toPosition(v_fileMap_4010_, v_val_4009_);
lean_dec(v_val_4009_);
v_column_4013_ = lean_ctor_get(v_savedPos_4012_, 1);
lean_inc(v_column_4013_);
lean_dec_ref(v_savedPos_4012_);
v_pos_4014_ = l_Lean_FileMap_toPosition(v_fileMap_4010_, v_pos_4011_);
v_column_4015_ = lean_ctor_get(v_pos_4014_, 1);
lean_inc(v_column_4015_);
lean_dec_ref(v_pos_4014_);
v___x_4016_ = lean_nat_dec_le(v_column_4013_, v_column_4015_);
lean_dec(v_column_4015_);
lean_dec(v_column_4013_);
if (v___x_4016_ == 0)
{
lean_object* v___x_4017_; 
v___x_4017_ = l_Lean_Parser_ParserState_mkError(v_s_4005_, v_errorMsg_4003_);
return v___x_4017_;
}
else
{
lean_dec_ref(v_errorMsg_4003_);
return v_s_4005_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGe(lean_object* v_errorMsg_4018_){
_start:
{
lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; 
v___x_4019_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_4020_ = lean_alloc_closure((void*)(l_Lean_Parser_checkColGeFn), 3, 1);
lean_closure_set(v___x_4020_, 0, v_errorMsg_4018_);
v___x_4021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4021_, 0, v___x_4019_);
lean_ctor_set(v___x_4021_, 1, v___x_4020_);
return v___x_4021_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1(){
_start:
{
lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; 
v___x_4029_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1));
v___x_4030_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__2));
v___x_4031_ = l_Lean_addBuiltinDocString(v___x_4029_, v___x_4030_);
return v___x_4031_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___boxed(lean_object* v_a_4032_){
_start:
{
lean_object* v_res_4033_; 
v_res_4033_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1();
return v_res_4033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGtFn(lean_object* v_errorMsg_4034_, lean_object* v_c_4035_, lean_object* v_s_4036_){
_start:
{
lean_object* v_toCacheableParserContext_4037_; lean_object* v_savedPos_x3f_4038_; 
v_toCacheableParserContext_4037_ = lean_ctor_get(v_c_4035_, 2);
v_savedPos_x3f_4038_ = lean_ctor_get(v_toCacheableParserContext_4037_, 2);
lean_inc(v_savedPos_x3f_4038_);
if (lean_obj_tag(v_savedPos_x3f_4038_) == 0)
{
lean_dec_ref(v_c_4035_);
lean_dec_ref(v_errorMsg_4034_);
return v_s_4036_;
}
else
{
lean_object* v_toInputContext_4039_; lean_object* v_val_4040_; lean_object* v_fileMap_4041_; lean_object* v_pos_4042_; lean_object* v_savedPos_4043_; lean_object* v_column_4044_; lean_object* v_pos_4045_; lean_object* v_column_4046_; uint8_t v___x_4047_; 
v_toInputContext_4039_ = lean_ctor_get(v_c_4035_, 0);
lean_inc_ref(v_toInputContext_4039_);
lean_dec_ref(v_c_4035_);
v_val_4040_ = lean_ctor_get(v_savedPos_x3f_4038_, 0);
lean_inc(v_val_4040_);
lean_dec_ref_known(v_savedPos_x3f_4038_, 1);
v_fileMap_4041_ = lean_ctor_get(v_toInputContext_4039_, 2);
lean_inc_ref_n(v_fileMap_4041_, 2);
lean_dec_ref(v_toInputContext_4039_);
v_pos_4042_ = lean_ctor_get(v_s_4036_, 2);
v_savedPos_4043_ = l_Lean_FileMap_toPosition(v_fileMap_4041_, v_val_4040_);
lean_dec(v_val_4040_);
v_column_4044_ = lean_ctor_get(v_savedPos_4043_, 1);
lean_inc(v_column_4044_);
lean_dec_ref(v_savedPos_4043_);
v_pos_4045_ = l_Lean_FileMap_toPosition(v_fileMap_4041_, v_pos_4042_);
v_column_4046_ = lean_ctor_get(v_pos_4045_, 1);
lean_inc(v_column_4046_);
lean_dec_ref(v_pos_4045_);
v___x_4047_ = lean_nat_dec_lt(v_column_4044_, v_column_4046_);
lean_dec(v_column_4046_);
lean_dec(v_column_4044_);
if (v___x_4047_ == 0)
{
lean_object* v___x_4048_; 
v___x_4048_ = l_Lean_Parser_ParserState_mkError(v_s_4036_, v_errorMsg_4034_);
return v___x_4048_;
}
else
{
lean_dec_ref(v_errorMsg_4034_);
return v_s_4036_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGt(lean_object* v_errorMsg_4049_){
_start:
{
lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; 
v___x_4050_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_4051_ = lean_alloc_closure((void*)(l_Lean_Parser_checkColGtFn), 3, 1);
lean_closure_set(v___x_4051_, 0, v_errorMsg_4049_);
v___x_4052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4052_, 0, v___x_4050_);
lean_ctor_set(v___x_4052_, 1, v___x_4051_);
return v___x_4052_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1(){
_start:
{
lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; 
v___x_4060_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1));
v___x_4061_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__2));
v___x_4062_ = l_Lean_addBuiltinDocString(v___x_4060_, v___x_4061_);
return v___x_4062_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___boxed(lean_object* v_a_4063_){
_start:
{
lean_object* v_res_4064_; 
v_res_4064_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1();
return v_res_4064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLineEqFn(lean_object* v_errorMsg_4065_, lean_object* v_c_4066_, lean_object* v_s_4067_){
_start:
{
lean_object* v_toCacheableParserContext_4068_; lean_object* v_savedPos_x3f_4069_; 
v_toCacheableParserContext_4068_ = lean_ctor_get(v_c_4066_, 2);
v_savedPos_x3f_4069_ = lean_ctor_get(v_toCacheableParserContext_4068_, 2);
lean_inc(v_savedPos_x3f_4069_);
if (lean_obj_tag(v_savedPos_x3f_4069_) == 0)
{
lean_dec_ref(v_c_4066_);
lean_dec_ref(v_errorMsg_4065_);
return v_s_4067_;
}
else
{
lean_object* v_toInputContext_4070_; lean_object* v_val_4071_; lean_object* v_fileMap_4072_; lean_object* v_pos_4073_; lean_object* v_savedPos_4074_; lean_object* v_pos_4075_; lean_object* v_line_4076_; lean_object* v_line_4077_; uint8_t v___x_4078_; 
v_toInputContext_4070_ = lean_ctor_get(v_c_4066_, 0);
lean_inc_ref(v_toInputContext_4070_);
lean_dec_ref(v_c_4066_);
v_val_4071_ = lean_ctor_get(v_savedPos_x3f_4069_, 0);
lean_inc(v_val_4071_);
lean_dec_ref_known(v_savedPos_x3f_4069_, 1);
v_fileMap_4072_ = lean_ctor_get(v_toInputContext_4070_, 2);
lean_inc_ref_n(v_fileMap_4072_, 2);
lean_dec_ref(v_toInputContext_4070_);
v_pos_4073_ = lean_ctor_get(v_s_4067_, 2);
v_savedPos_4074_ = l_Lean_FileMap_toPosition(v_fileMap_4072_, v_val_4071_);
lean_dec(v_val_4071_);
v_pos_4075_ = l_Lean_FileMap_toPosition(v_fileMap_4072_, v_pos_4073_);
v_line_4076_ = lean_ctor_get(v_pos_4075_, 0);
lean_inc(v_line_4076_);
lean_dec_ref(v_pos_4075_);
v_line_4077_ = lean_ctor_get(v_savedPos_4074_, 0);
lean_inc(v_line_4077_);
lean_dec_ref(v_savedPos_4074_);
v___x_4078_ = lean_nat_dec_eq(v_line_4076_, v_line_4077_);
lean_dec(v_line_4077_);
lean_dec(v_line_4076_);
if (v___x_4078_ == 0)
{
lean_object* v___x_4079_; 
v___x_4079_ = l_Lean_Parser_ParserState_mkError(v_s_4067_, v_errorMsg_4065_);
return v___x_4079_;
}
else
{
lean_dec_ref(v_errorMsg_4065_);
return v_s_4067_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLineEq(lean_object* v_errorMsg_4080_){
_start:
{
lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; 
v___x_4081_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_4082_ = lean_alloc_closure((void*)(l_Lean_Parser_checkLineEqFn), 3, 1);
lean_closure_set(v___x_4082_, 0, v_errorMsg_4080_);
v___x_4083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4083_, 0, v___x_4081_);
lean_ctor_set(v___x_4083_, 1, v___x_4082_);
return v___x_4083_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1(){
_start:
{
lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; 
v___x_4091_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1));
v___x_4092_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__2));
v___x_4093_ = l_Lean_addBuiltinDocString(v___x_4091_, v___x_4092_);
return v___x_4093_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___boxed(lean_object* v_a_4094_){
_start:
{
lean_object* v_res_4095_; 
v_res_4095_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1();
return v_res_4095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__0(lean_object* v___y_4096_, lean_object* v_x_4097_){
_start:
{
lean_object* v_prec_4098_; lean_object* v_quotDepth_4099_; uint8_t v_suppressInsideQuot_4100_; lean_object* v_forbiddenTks_4101_; lean_object* v___x_4103_; uint8_t v_isShared_4104_; uint8_t v_isSharedCheck_4110_; 
v_prec_4098_ = lean_ctor_get(v_x_4097_, 0);
v_quotDepth_4099_ = lean_ctor_get(v_x_4097_, 1);
v_suppressInsideQuot_4100_ = lean_ctor_get_uint8(v_x_4097_, sizeof(void*)*4);
v_forbiddenTks_4101_ = lean_ctor_get(v_x_4097_, 3);
v_isSharedCheck_4110_ = !lean_is_exclusive(v_x_4097_);
if (v_isSharedCheck_4110_ == 0)
{
lean_object* v_unused_4111_; 
v_unused_4111_ = lean_ctor_get(v_x_4097_, 2);
lean_dec(v_unused_4111_);
v___x_4103_ = v_x_4097_;
v_isShared_4104_ = v_isSharedCheck_4110_;
goto v_resetjp_4102_;
}
else
{
lean_inc(v_forbiddenTks_4101_);
lean_inc(v_quotDepth_4099_);
lean_inc(v_prec_4098_);
lean_dec(v_x_4097_);
v___x_4103_ = lean_box(0);
v_isShared_4104_ = v_isSharedCheck_4110_;
goto v_resetjp_4102_;
}
v_resetjp_4102_:
{
lean_object* v_pos_4105_; lean_object* v___x_4106_; lean_object* v___x_4108_; 
v_pos_4105_ = lean_ctor_get(v___y_4096_, 2);
lean_inc(v_pos_4105_);
v___x_4106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4106_, 0, v_pos_4105_);
if (v_isShared_4104_ == 0)
{
lean_ctor_set(v___x_4103_, 2, v___x_4106_);
v___x_4108_ = v___x_4103_;
goto v_reusejp_4107_;
}
else
{
lean_object* v_reuseFailAlloc_4109_; 
v_reuseFailAlloc_4109_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4109_, 0, v_prec_4098_);
lean_ctor_set(v_reuseFailAlloc_4109_, 1, v_quotDepth_4099_);
lean_ctor_set(v_reuseFailAlloc_4109_, 2, v___x_4106_);
lean_ctor_set(v_reuseFailAlloc_4109_, 3, v_forbiddenTks_4101_);
lean_ctor_set_uint8(v_reuseFailAlloc_4109_, sizeof(void*)*4, v_suppressInsideQuot_4100_);
v___x_4108_ = v_reuseFailAlloc_4109_;
goto v_reusejp_4107_;
}
v_reusejp_4107_:
{
return v___x_4108_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__0___boxed(lean_object* v___y_4112_, lean_object* v_x_4113_){
_start:
{
lean_object* v_res_4114_; 
v_res_4114_ = l_Lean_Parser_withPosition___lam__0(v___y_4112_, v_x_4113_);
lean_dec_ref(v___y_4112_);
return v_res_4114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__1(lean_object* v_fn_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_){
_start:
{
lean_object* v___f_4118_; lean_object* v___x_4119_; 
lean_inc_ref(v___y_4117_);
v___f_4118_ = lean_alloc_closure((void*)(l_Lean_Parser_withPosition___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4118_, 0, v___y_4117_);
v___x_4119_ = l_Lean_Parser_adaptCacheableContextFn(v___f_4118_, v_fn_4115_, v___y_4116_, v___y_4117_);
return v___x_4119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition(lean_object* v_p_4120_){
_start:
{
lean_object* v_info_4121_; lean_object* v_fn_4122_; lean_object* v___x_4124_; uint8_t v_isShared_4125_; uint8_t v_isSharedCheck_4130_; 
v_info_4121_ = lean_ctor_get(v_p_4120_, 0);
v_fn_4122_ = lean_ctor_get(v_p_4120_, 1);
v_isSharedCheck_4130_ = !lean_is_exclusive(v_p_4120_);
if (v_isSharedCheck_4130_ == 0)
{
v___x_4124_ = v_p_4120_;
v_isShared_4125_ = v_isSharedCheck_4130_;
goto v_resetjp_4123_;
}
else
{
lean_inc(v_fn_4122_);
lean_inc(v_info_4121_);
lean_dec(v_p_4120_);
v___x_4124_ = lean_box(0);
v_isShared_4125_ = v_isSharedCheck_4130_;
goto v_resetjp_4123_;
}
v_resetjp_4123_:
{
lean_object* v___f_4126_; lean_object* v___x_4128_; 
v___f_4126_ = lean_alloc_closure((void*)(l_Lean_Parser_withPosition___lam__1), 3, 1);
lean_closure_set(v___f_4126_, 0, v_fn_4122_);
if (v_isShared_4125_ == 0)
{
lean_ctor_set(v___x_4124_, 1, v___f_4126_);
v___x_4128_ = v___x_4124_;
goto v_reusejp_4127_;
}
else
{
lean_object* v_reuseFailAlloc_4129_; 
v_reuseFailAlloc_4129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4129_, 0, v_info_4121_);
lean_ctor_set(v_reuseFailAlloc_4129_, 1, v___f_4126_);
v___x_4128_ = v_reuseFailAlloc_4129_;
goto v_reusejp_4127_;
}
v_reusejp_4127_:
{
return v___x_4128_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1(){
_start:
{
lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; 
v___x_4138_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__1));
v___x_4139_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__2));
v___x_4140_ = l_Lean_addBuiltinDocString(v___x_4138_, v___x_4139_);
return v___x_4140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___boxed(lean_object* v_a_4141_){
_start:
{
lean_object* v_res_4142_; 
v_res_4142_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1();
return v_res_4142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__0(lean_object* v_prev_4143_, lean_object* v_pos_4144_, lean_object* v_c_4145_){
_start:
{
uint8_t v___x_4146_; 
v___x_4146_ = l_Lean_Parser_checkTailLinebreak(v_prev_4143_);
if (v___x_4146_ == 0)
{
lean_dec(v_pos_4144_);
return v_c_4145_;
}
else
{
lean_object* v_prec_4147_; lean_object* v_quotDepth_4148_; uint8_t v_suppressInsideQuot_4149_; lean_object* v_forbiddenTks_4150_; lean_object* v___x_4152_; uint8_t v_isShared_4153_; uint8_t v_isSharedCheck_4158_; 
v_prec_4147_ = lean_ctor_get(v_c_4145_, 0);
v_quotDepth_4148_ = lean_ctor_get(v_c_4145_, 1);
v_suppressInsideQuot_4149_ = lean_ctor_get_uint8(v_c_4145_, sizeof(void*)*4);
v_forbiddenTks_4150_ = lean_ctor_get(v_c_4145_, 3);
v_isSharedCheck_4158_ = !lean_is_exclusive(v_c_4145_);
if (v_isSharedCheck_4158_ == 0)
{
lean_object* v_unused_4159_; 
v_unused_4159_ = lean_ctor_get(v_c_4145_, 2);
lean_dec(v_unused_4159_);
v___x_4152_ = v_c_4145_;
v_isShared_4153_ = v_isSharedCheck_4158_;
goto v_resetjp_4151_;
}
else
{
lean_inc(v_forbiddenTks_4150_);
lean_inc(v_quotDepth_4148_);
lean_inc(v_prec_4147_);
lean_dec(v_c_4145_);
v___x_4152_ = lean_box(0);
v_isShared_4153_ = v_isSharedCheck_4158_;
goto v_resetjp_4151_;
}
v_resetjp_4151_:
{
lean_object* v___x_4154_; lean_object* v___x_4156_; 
v___x_4154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4154_, 0, v_pos_4144_);
if (v_isShared_4153_ == 0)
{
lean_ctor_set(v___x_4152_, 2, v___x_4154_);
v___x_4156_ = v___x_4152_;
goto v_reusejp_4155_;
}
else
{
lean_object* v_reuseFailAlloc_4157_; 
v_reuseFailAlloc_4157_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4157_, 0, v_prec_4147_);
lean_ctor_set(v_reuseFailAlloc_4157_, 1, v_quotDepth_4148_);
lean_ctor_set(v_reuseFailAlloc_4157_, 2, v___x_4154_);
lean_ctor_set(v_reuseFailAlloc_4157_, 3, v_forbiddenTks_4150_);
lean_ctor_set_uint8(v_reuseFailAlloc_4157_, sizeof(void*)*4, v_suppressInsideQuot_4149_);
v___x_4156_ = v_reuseFailAlloc_4157_;
goto v_reusejp_4155_;
}
v_reusejp_4155_:
{
return v___x_4156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__0___boxed(lean_object* v_prev_4160_, lean_object* v_pos_4161_, lean_object* v_c_4162_){
_start:
{
lean_object* v_res_4163_; 
v_res_4163_ = l_Lean_Parser_withPositionAfterLinebreak___lam__0(v_prev_4160_, v_pos_4161_, v_c_4162_);
lean_dec(v_prev_4160_);
return v_res_4163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__1(lean_object* v_fn_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_){
_start:
{
lean_object* v_stxStack_4167_; lean_object* v_pos_4168_; lean_object* v_prev_4169_; lean_object* v___f_4170_; lean_object* v___x_4171_; 
v_stxStack_4167_ = lean_ctor_get(v___y_4166_, 0);
v_pos_4168_ = lean_ctor_get(v___y_4166_, 2);
v_prev_4169_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_4167_);
lean_inc(v_pos_4168_);
v___f_4170_ = lean_alloc_closure((void*)(l_Lean_Parser_withPositionAfterLinebreak___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4170_, 0, v_prev_4169_);
lean_closure_set(v___f_4170_, 1, v_pos_4168_);
v___x_4171_ = l_Lean_Parser_adaptCacheableContextFn(v___f_4170_, v_fn_4164_, v___y_4165_, v___y_4166_);
return v___x_4171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak(lean_object* v_p_4172_){
_start:
{
lean_object* v_info_4173_; lean_object* v_fn_4174_; lean_object* v___x_4176_; uint8_t v_isShared_4177_; uint8_t v_isSharedCheck_4182_; 
v_info_4173_ = lean_ctor_get(v_p_4172_, 0);
v_fn_4174_ = lean_ctor_get(v_p_4172_, 1);
v_isSharedCheck_4182_ = !lean_is_exclusive(v_p_4172_);
if (v_isSharedCheck_4182_ == 0)
{
v___x_4176_ = v_p_4172_;
v_isShared_4177_ = v_isSharedCheck_4182_;
goto v_resetjp_4175_;
}
else
{
lean_inc(v_fn_4174_);
lean_inc(v_info_4173_);
lean_dec(v_p_4172_);
v___x_4176_ = lean_box(0);
v_isShared_4177_ = v_isSharedCheck_4182_;
goto v_resetjp_4175_;
}
v_resetjp_4175_:
{
lean_object* v___f_4178_; lean_object* v___x_4180_; 
v___f_4178_ = lean_alloc_closure((void*)(l_Lean_Parser_withPositionAfterLinebreak___lam__1), 3, 1);
lean_closure_set(v___f_4178_, 0, v_fn_4174_);
if (v_isShared_4177_ == 0)
{
lean_ctor_set(v___x_4176_, 1, v___f_4178_);
v___x_4180_ = v___x_4176_;
goto v_reusejp_4179_;
}
else
{
lean_object* v_reuseFailAlloc_4181_; 
v_reuseFailAlloc_4181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4181_, 0, v_info_4173_);
lean_ctor_set(v_reuseFailAlloc_4181_, 1, v___f_4178_);
v___x_4180_ = v_reuseFailAlloc_4181_;
goto v_reusejp_4179_;
}
v_reusejp_4179_:
{
return v___x_4180_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition___lam__0(lean_object* v_x_4183_){
_start:
{
lean_object* v_prec_4184_; lean_object* v_quotDepth_4185_; uint8_t v_suppressInsideQuot_4186_; lean_object* v_forbiddenTks_4187_; lean_object* v___x_4189_; uint8_t v_isShared_4190_; uint8_t v_isSharedCheck_4195_; 
v_prec_4184_ = lean_ctor_get(v_x_4183_, 0);
v_quotDepth_4185_ = lean_ctor_get(v_x_4183_, 1);
v_suppressInsideQuot_4186_ = lean_ctor_get_uint8(v_x_4183_, sizeof(void*)*4);
v_forbiddenTks_4187_ = lean_ctor_get(v_x_4183_, 3);
v_isSharedCheck_4195_ = !lean_is_exclusive(v_x_4183_);
if (v_isSharedCheck_4195_ == 0)
{
lean_object* v_unused_4196_; 
v_unused_4196_ = lean_ctor_get(v_x_4183_, 2);
lean_dec(v_unused_4196_);
v___x_4189_ = v_x_4183_;
v_isShared_4190_ = v_isSharedCheck_4195_;
goto v_resetjp_4188_;
}
else
{
lean_inc(v_forbiddenTks_4187_);
lean_inc(v_quotDepth_4185_);
lean_inc(v_prec_4184_);
lean_dec(v_x_4183_);
v___x_4189_ = lean_box(0);
v_isShared_4190_ = v_isSharedCheck_4195_;
goto v_resetjp_4188_;
}
v_resetjp_4188_:
{
lean_object* v___x_4191_; lean_object* v___x_4193_; 
v___x_4191_ = lean_box(0);
if (v_isShared_4190_ == 0)
{
lean_ctor_set(v___x_4189_, 2, v___x_4191_);
v___x_4193_ = v___x_4189_;
goto v_reusejp_4192_;
}
else
{
lean_object* v_reuseFailAlloc_4194_; 
v_reuseFailAlloc_4194_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4194_, 0, v_prec_4184_);
lean_ctor_set(v_reuseFailAlloc_4194_, 1, v_quotDepth_4185_);
lean_ctor_set(v_reuseFailAlloc_4194_, 2, v___x_4191_);
lean_ctor_set(v_reuseFailAlloc_4194_, 3, v_forbiddenTks_4187_);
lean_ctor_set_uint8(v_reuseFailAlloc_4194_, sizeof(void*)*4, v_suppressInsideQuot_4186_);
v___x_4193_ = v_reuseFailAlloc_4194_;
goto v_reusejp_4192_;
}
v_reusejp_4192_:
{
return v___x_4193_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition(lean_object* v_p_4198_){
_start:
{
lean_object* v___f_4199_; lean_object* v___x_4200_; 
v___f_4199_ = ((lean_object*)(l_Lean_Parser_withoutPosition___closed__0));
v___x_4200_ = l_Lean_Parser_adaptCacheableContext(v___f_4199_, v_p_4198_);
return v___x_4200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1(){
_start:
{
lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; 
v___x_4208_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__1));
v___x_4209_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__2));
v___x_4210_ = l_Lean_addBuiltinDocString(v___x_4208_, v___x_4209_);
return v___x_4210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___boxed(lean_object* v_a_4211_){
_start:
{
lean_object* v_res_4212_; 
v_res_4212_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1();
return v_res_4212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden___lam__0(lean_object* v_tk_4213_, lean_object* v_c_4214_){
_start:
{
lean_object* v_prec_4215_; lean_object* v_quotDepth_4216_; uint8_t v_suppressInsideQuot_4217_; lean_object* v_savedPos_x3f_4218_; lean_object* v_forbiddenTks_4219_; uint8_t v___x_4220_; 
v_prec_4215_ = lean_ctor_get(v_c_4214_, 0);
v_quotDepth_4216_ = lean_ctor_get(v_c_4214_, 1);
v_suppressInsideQuot_4217_ = lean_ctor_get_uint8(v_c_4214_, sizeof(void*)*4);
v_savedPos_x3f_4218_ = lean_ctor_get(v_c_4214_, 2);
v_forbiddenTks_4219_ = lean_ctor_get(v_c_4214_, 3);
v___x_4220_ = l_Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0(v_forbiddenTks_4219_, v_tk_4213_);
if (v___x_4220_ == 0)
{
lean_object* v___x_4222_; uint8_t v_isShared_4223_; uint8_t v_isSharedCheck_4228_; 
lean_inc_ref(v_forbiddenTks_4219_);
lean_inc(v_savedPos_x3f_4218_);
lean_inc(v_quotDepth_4216_);
lean_inc(v_prec_4215_);
v_isSharedCheck_4228_ = !lean_is_exclusive(v_c_4214_);
if (v_isSharedCheck_4228_ == 0)
{
lean_object* v_unused_4229_; lean_object* v_unused_4230_; lean_object* v_unused_4231_; lean_object* v_unused_4232_; 
v_unused_4229_ = lean_ctor_get(v_c_4214_, 3);
lean_dec(v_unused_4229_);
v_unused_4230_ = lean_ctor_get(v_c_4214_, 2);
lean_dec(v_unused_4230_);
v_unused_4231_ = lean_ctor_get(v_c_4214_, 1);
lean_dec(v_unused_4231_);
v_unused_4232_ = lean_ctor_get(v_c_4214_, 0);
lean_dec(v_unused_4232_);
v___x_4222_ = v_c_4214_;
v_isShared_4223_ = v_isSharedCheck_4228_;
goto v_resetjp_4221_;
}
else
{
lean_dec(v_c_4214_);
v___x_4222_ = lean_box(0);
v_isShared_4223_ = v_isSharedCheck_4228_;
goto v_resetjp_4221_;
}
v_resetjp_4221_:
{
lean_object* v___x_4224_; lean_object* v___x_4226_; 
v___x_4224_ = lean_array_push(v_forbiddenTks_4219_, v_tk_4213_);
if (v_isShared_4223_ == 0)
{
lean_ctor_set(v___x_4222_, 3, v___x_4224_);
v___x_4226_ = v___x_4222_;
goto v_reusejp_4225_;
}
else
{
lean_object* v_reuseFailAlloc_4227_; 
v_reuseFailAlloc_4227_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4227_, 0, v_prec_4215_);
lean_ctor_set(v_reuseFailAlloc_4227_, 1, v_quotDepth_4216_);
lean_ctor_set(v_reuseFailAlloc_4227_, 2, v_savedPos_x3f_4218_);
lean_ctor_set(v_reuseFailAlloc_4227_, 3, v___x_4224_);
lean_ctor_set_uint8(v_reuseFailAlloc_4227_, sizeof(void*)*4, v_suppressInsideQuot_4217_);
v___x_4226_ = v_reuseFailAlloc_4227_;
goto v_reusejp_4225_;
}
v_reusejp_4225_:
{
return v___x_4226_;
}
}
}
else
{
lean_dec_ref(v_tk_4213_);
return v_c_4214_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden(lean_object* v_tk_4233_, lean_object* v_p_4234_){
_start:
{
lean_object* v___f_4235_; lean_object* v___x_4236_; 
v___f_4235_ = lean_alloc_closure((void*)(l_Lean_Parser_withForbidden___lam__0), 2, 1);
lean_closure_set(v___f_4235_, 0, v_tk_4233_);
v___x_4236_ = l_Lean_Parser_adaptCacheableContext(v___f_4235_, v_p_4234_);
return v___x_4236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1(){
_start:
{
lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; 
v___x_4244_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__1));
v___x_4245_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__2));
v___x_4246_ = l_Lean_addBuiltinDocString(v___x_4244_, v___x_4245_);
return v___x_4246_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___boxed(lean_object* v_a_4247_){
_start:
{
lean_object* v_res_4248_; 
v_res_4248_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1();
return v_res_4248_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__0(lean_object* v_a_4249_, lean_object* v_as_4250_, size_t v_i_4251_, size_t v_stop_4252_){
_start:
{
uint8_t v___x_4253_; 
v___x_4253_ = lean_usize_dec_eq(v_i_4251_, v_stop_4252_);
if (v___x_4253_ == 0)
{
lean_object* v___x_4254_; uint8_t v___x_4255_; 
v___x_4254_ = lean_array_uget_borrowed(v_as_4250_, v_i_4251_);
v___x_4255_ = lean_string_dec_eq(v___x_4254_, v_a_4249_);
if (v___x_4255_ == 0)
{
size_t v___x_4256_; size_t v___x_4257_; 
v___x_4256_ = ((size_t)1ULL);
v___x_4257_ = lean_usize_add(v_i_4251_, v___x_4256_);
v_i_4251_ = v___x_4257_;
goto _start;
}
else
{
return v___x_4255_;
}
}
else
{
uint8_t v___x_4259_; 
v___x_4259_ = 0;
return v___x_4259_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__0___boxed(lean_object* v_a_4260_, lean_object* v_as_4261_, lean_object* v_i_4262_, lean_object* v_stop_4263_){
_start:
{
size_t v_i_boxed_4264_; size_t v_stop_boxed_4265_; uint8_t v_res_4266_; lean_object* v_r_4267_; 
v_i_boxed_4264_ = lean_unbox_usize(v_i_4262_);
lean_dec(v_i_4262_);
v_stop_boxed_4265_ = lean_unbox_usize(v_stop_4263_);
lean_dec(v_stop_4263_);
v_res_4266_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__0(v_a_4260_, v_as_4261_, v_i_boxed_4264_, v_stop_boxed_4265_);
lean_dec_ref(v_as_4261_);
lean_dec_ref(v_a_4260_);
v_r_4267_ = lean_box(v_res_4266_);
return v_r_4267_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__1(lean_object* v_size_4268_, lean_object* v_as_4269_, size_t v_sz_4270_, size_t v_i_4271_, lean_object* v_b_4272_){
_start:
{
lean_object* v_a_4274_; uint8_t v___x_4278_; 
v___x_4278_ = lean_usize_dec_lt(v_i_4271_, v_sz_4270_);
if (v___x_4278_ == 0)
{
lean_dec(v_size_4268_);
return v_b_4272_;
}
else
{
lean_object* v_a_4279_; lean_object* v___x_4282_; lean_object* v___y_4284_; uint8_t v___x_4289_; 
v_a_4279_ = lean_array_uget_borrowed(v_as_4269_, v_i_4271_);
v___x_4282_ = lean_unsigned_to_nat(0u);
v___x_4289_ = lean_nat_dec_lt(v___x_4282_, v_size_4268_);
if (v___x_4289_ == 0)
{
goto v___jp_4280_;
}
else
{
lean_object* v___x_4290_; uint8_t v___x_4291_; 
v___x_4290_ = lean_array_get_size(v_b_4272_);
v___x_4291_ = lean_nat_dec_le(v_size_4268_, v___x_4290_);
if (v___x_4291_ == 0)
{
v___y_4284_ = v___x_4290_;
goto v___jp_4283_;
}
else
{
lean_inc(v_size_4268_);
v___y_4284_ = v_size_4268_;
goto v___jp_4283_;
}
}
v___jp_4280_:
{
lean_object* v___x_4281_; 
lean_inc(v_a_4279_);
v___x_4281_ = lean_array_push(v_b_4272_, v_a_4279_);
v_a_4274_ = v___x_4281_;
goto v___jp_4273_;
}
v___jp_4283_:
{
uint8_t v___x_4285_; 
v___x_4285_ = lean_nat_dec_lt(v___x_4282_, v___y_4284_);
if (v___x_4285_ == 0)
{
lean_dec(v___y_4284_);
goto v___jp_4280_;
}
else
{
size_t v___x_4286_; size_t v___x_4287_; uint8_t v___x_4288_; 
v___x_4286_ = ((size_t)0ULL);
v___x_4287_ = lean_usize_of_nat(v___y_4284_);
lean_dec(v___y_4284_);
v___x_4288_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__0(v_a_4279_, v_b_4272_, v___x_4286_, v___x_4287_);
if (v___x_4288_ == 0)
{
goto v___jp_4280_;
}
else
{
v_a_4274_ = v_b_4272_;
goto v___jp_4273_;
}
}
}
}
v___jp_4273_:
{
size_t v___x_4275_; size_t v___x_4276_; 
v___x_4275_ = ((size_t)1ULL);
v___x_4276_ = lean_usize_add(v_i_4271_, v___x_4275_);
v_i_4271_ = v___x_4276_;
v_b_4272_ = v_a_4274_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__1___boxed(lean_object* v_size_4292_, lean_object* v_as_4293_, lean_object* v_sz_4294_, lean_object* v_i_4295_, lean_object* v_b_4296_){
_start:
{
size_t v_sz_boxed_4297_; size_t v_i_boxed_4298_; lean_object* v_res_4299_; 
v_sz_boxed_4297_ = lean_unbox_usize(v_sz_4294_);
lean_dec(v_sz_4294_);
v_i_boxed_4298_ = lean_unbox_usize(v_i_4295_);
lean_dec(v_i_4295_);
v_res_4299_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__1(v_size_4292_, v_as_4293_, v_sz_boxed_4297_, v_i_boxed_4298_, v_b_4296_);
lean_dec_ref(v_as_4293_);
return v_res_4299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks(lean_object* v_init_4300_, lean_object* v_tks_4301_){
_start:
{
lean_object* v_size_4302_; size_t v_sz_4303_; size_t v___x_4304_; lean_object* v___x_4305_; 
v_size_4302_ = lean_array_get_size(v_init_4300_);
v_sz_4303_ = lean_array_size(v_tks_4301_);
v___x_4304_ = ((size_t)0ULL);
v___x_4305_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__1(v_size_4302_, v_tks_4301_, v_sz_4303_, v___x_4304_, v_init_4300_);
return v___x_4305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks___boxed(lean_object* v_init_4306_, lean_object* v_tks_4307_){
_start:
{
lean_object* v_res_4308_; 
v_res_4308_ = l___private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks(v_init_4306_, v_tks_4307_);
lean_dec_ref(v_tks_4307_);
return v_res_4308_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__8(void){
_start:
{
lean_object* v___x_4330_; lean_object* v___x_4331_; 
v___x_4330_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__6));
v___x_4331_ = l_Lean_mkAtom(v___x_4330_);
return v___x_4331_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__9(void){
_start:
{
lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; 
v___x_4332_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__8, &l_Lean_Parser_withForbiddens___auto__1___closed__8_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__8);
v___x_4333_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__3));
v___x_4334_ = lean_array_push(v___x_4333_, v___x_4332_);
return v___x_4334_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__13(void){
_start:
{
lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; 
v___x_4345_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__12));
v___x_4346_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__3));
v___x_4347_ = lean_array_push(v___x_4346_, v___x_4345_);
return v___x_4347_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__14(void){
_start:
{
lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; 
v___x_4348_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__13, &l_Lean_Parser_withForbiddens___auto__1___closed__13_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__13);
v___x_4349_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__11));
v___x_4350_ = lean_box(2);
v___x_4351_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4351_, 0, v___x_4350_);
lean_ctor_set(v___x_4351_, 1, v___x_4349_);
lean_ctor_set(v___x_4351_, 2, v___x_4348_);
return v___x_4351_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__15(void){
_start:
{
lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; 
v___x_4352_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__14, &l_Lean_Parser_withForbiddens___auto__1___closed__14_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__14);
v___x_4353_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__9, &l_Lean_Parser_withForbiddens___auto__1___closed__9_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__9);
v___x_4354_ = lean_array_push(v___x_4353_, v___x_4352_);
return v___x_4354_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__16(void){
_start:
{
lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; 
v___x_4355_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__15, &l_Lean_Parser_withForbiddens___auto__1___closed__15_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__15);
v___x_4356_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__7));
v___x_4357_ = lean_box(2);
v___x_4358_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4358_, 0, v___x_4357_);
lean_ctor_set(v___x_4358_, 1, v___x_4356_);
lean_ctor_set(v___x_4358_, 2, v___x_4355_);
return v___x_4358_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__17(void){
_start:
{
lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; 
v___x_4359_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__16, &l_Lean_Parser_withForbiddens___auto__1___closed__16_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__16);
v___x_4360_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__3));
v___x_4361_ = lean_array_push(v___x_4360_, v___x_4359_);
return v___x_4361_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__18(void){
_start:
{
lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; 
v___x_4362_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__17, &l_Lean_Parser_withForbiddens___auto__1___closed__17_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__17);
v___x_4363_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__1));
v___x_4364_ = lean_box(2);
v___x_4365_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4365_, 0, v___x_4364_);
lean_ctor_set(v___x_4365_, 1, v___x_4363_);
lean_ctor_set(v___x_4365_, 2, v___x_4362_);
return v___x_4365_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__19(void){
_start:
{
lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; 
v___x_4366_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__18, &l_Lean_Parser_withForbiddens___auto__1___closed__18_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__18);
v___x_4367_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__3));
v___x_4368_ = lean_array_push(v___x_4367_, v___x_4366_);
return v___x_4368_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__20(void){
_start:
{
lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; 
v___x_4369_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__19, &l_Lean_Parser_withForbiddens___auto__1___closed__19_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__19);
v___x_4370_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__5));
v___x_4371_ = lean_box(2);
v___x_4372_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4372_, 0, v___x_4371_);
lean_ctor_set(v___x_4372_, 1, v___x_4370_);
lean_ctor_set(v___x_4372_, 2, v___x_4369_);
return v___x_4372_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__21(void){
_start:
{
lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; 
v___x_4373_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__20, &l_Lean_Parser_withForbiddens___auto__1___closed__20_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__20);
v___x_4374_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__3));
v___x_4375_ = lean_array_push(v___x_4374_, v___x_4373_);
return v___x_4375_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__22(void){
_start:
{
lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; 
v___x_4376_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__21, &l_Lean_Parser_withForbiddens___auto__1___closed__21_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__21);
v___x_4377_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__2));
v___x_4378_ = lean_box(2);
v___x_4379_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4379_, 0, v___x_4378_);
lean_ctor_set(v___x_4379_, 1, v___x_4377_);
lean_ctor_set(v___x_4379_, 2, v___x_4376_);
return v___x_4379_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1(void){
_start:
{
lean_object* v___x_4380_; 
v___x_4380_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__22, &l_Lean_Parser_withForbiddens___auto__1___closed__22_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__22);
return v___x_4380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbiddens___redArg___lam__0(lean_object* v_tks_4381_, lean_object* v_c_4382_){
_start:
{
lean_object* v_prec_4383_; lean_object* v_quotDepth_4384_; uint8_t v_suppressInsideQuot_4385_; lean_object* v_savedPos_x3f_4386_; lean_object* v_forbiddenTks_4387_; lean_object* v___x_4389_; uint8_t v_isShared_4390_; uint8_t v_isSharedCheck_4401_; 
v_prec_4383_ = lean_ctor_get(v_c_4382_, 0);
v_quotDepth_4384_ = lean_ctor_get(v_c_4382_, 1);
v_suppressInsideQuot_4385_ = lean_ctor_get_uint8(v_c_4382_, sizeof(void*)*4);
v_savedPos_x3f_4386_ = lean_ctor_get(v_c_4382_, 2);
v_forbiddenTks_4387_ = lean_ctor_get(v_c_4382_, 3);
v_isSharedCheck_4401_ = !lean_is_exclusive(v_c_4382_);
if (v_isSharedCheck_4401_ == 0)
{
v___x_4389_ = v_c_4382_;
v_isShared_4390_ = v_isSharedCheck_4401_;
goto v_resetjp_4388_;
}
else
{
lean_inc(v_forbiddenTks_4387_);
lean_inc(v_savedPos_x3f_4386_);
lean_inc(v_quotDepth_4384_);
lean_inc(v_prec_4383_);
lean_dec(v_c_4382_);
v___x_4389_ = lean_box(0);
v_isShared_4390_ = v_isSharedCheck_4401_;
goto v_resetjp_4388_;
}
v_resetjp_4388_:
{
lean_object* v___x_4391_; lean_object* v___x_4392_; uint8_t v___x_4393_; 
v___x_4391_ = lean_array_get_size(v_forbiddenTks_4387_);
v___x_4392_ = lean_unsigned_to_nat(0u);
v___x_4393_ = lean_nat_dec_eq(v___x_4391_, v___x_4392_);
if (v___x_4393_ == 0)
{
lean_object* v___x_4394_; lean_object* v___x_4396_; 
v___x_4394_ = l___private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks(v_forbiddenTks_4387_, v_tks_4381_);
lean_dec_ref(v_tks_4381_);
if (v_isShared_4390_ == 0)
{
lean_ctor_set(v___x_4389_, 3, v___x_4394_);
v___x_4396_ = v___x_4389_;
goto v_reusejp_4395_;
}
else
{
lean_object* v_reuseFailAlloc_4397_; 
v_reuseFailAlloc_4397_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4397_, 0, v_prec_4383_);
lean_ctor_set(v_reuseFailAlloc_4397_, 1, v_quotDepth_4384_);
lean_ctor_set(v_reuseFailAlloc_4397_, 2, v_savedPos_x3f_4386_);
lean_ctor_set(v_reuseFailAlloc_4397_, 3, v___x_4394_);
lean_ctor_set_uint8(v_reuseFailAlloc_4397_, sizeof(void*)*4, v_suppressInsideQuot_4385_);
v___x_4396_ = v_reuseFailAlloc_4397_;
goto v_reusejp_4395_;
}
v_reusejp_4395_:
{
return v___x_4396_;
}
}
else
{
lean_object* v___x_4399_; 
lean_dec_ref(v_forbiddenTks_4387_);
if (v_isShared_4390_ == 0)
{
lean_ctor_set(v___x_4389_, 3, v_tks_4381_);
v___x_4399_ = v___x_4389_;
goto v_reusejp_4398_;
}
else
{
lean_object* v_reuseFailAlloc_4400_; 
v_reuseFailAlloc_4400_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4400_, 0, v_prec_4383_);
lean_ctor_set(v_reuseFailAlloc_4400_, 1, v_quotDepth_4384_);
lean_ctor_set(v_reuseFailAlloc_4400_, 2, v_savedPos_x3f_4386_);
lean_ctor_set(v_reuseFailAlloc_4400_, 3, v_tks_4381_);
lean_ctor_set_uint8(v_reuseFailAlloc_4400_, sizeof(void*)*4, v_suppressInsideQuot_4385_);
v___x_4399_ = v_reuseFailAlloc_4400_;
goto v_reusejp_4398_;
}
v_reusejp_4398_:
{
return v___x_4399_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbiddens___redArg(lean_object* v_tks_4402_, lean_object* v_p_4403_){
_start:
{
lean_object* v___f_4404_; lean_object* v___x_4405_; 
v___f_4404_ = lean_alloc_closure((void*)(l_Lean_Parser_withForbiddens___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4404_, 0, v_tks_4402_);
v___x_4405_ = l_Lean_Parser_adaptCacheableContext(v___f_4404_, v_p_4403_);
return v___x_4405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbiddens(lean_object* v_tks_4406_, lean_object* v_p_4407_, lean_object* v___h_4408_){
_start:
{
lean_object* v___x_4409_; 
v___x_4409_ = l_Lean_Parser_withForbiddens___redArg(v_tks_4406_, v_p_4407_);
return v___x_4409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1(){
_start:
{
lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; 
v___x_4417_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__1));
v___x_4418_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__2));
v___x_4419_ = l_Lean_addBuiltinDocString(v___x_4417_, v___x_4418_);
return v___x_4419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___boxed(lean_object* v_a_4420_){
_start:
{
lean_object* v_res_4421_; 
v_res_4421_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1();
return v_res_4421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden___lam__0(lean_object* v_x_4424_){
_start:
{
lean_object* v_prec_4425_; lean_object* v_quotDepth_4426_; uint8_t v_suppressInsideQuot_4427_; lean_object* v_savedPos_x3f_4428_; lean_object* v___x_4430_; uint8_t v_isShared_4431_; uint8_t v_isSharedCheck_4436_; 
v_prec_4425_ = lean_ctor_get(v_x_4424_, 0);
v_quotDepth_4426_ = lean_ctor_get(v_x_4424_, 1);
v_suppressInsideQuot_4427_ = lean_ctor_get_uint8(v_x_4424_, sizeof(void*)*4);
v_savedPos_x3f_4428_ = lean_ctor_get(v_x_4424_, 2);
v_isSharedCheck_4436_ = !lean_is_exclusive(v_x_4424_);
if (v_isSharedCheck_4436_ == 0)
{
lean_object* v_unused_4437_; 
v_unused_4437_ = lean_ctor_get(v_x_4424_, 3);
lean_dec(v_unused_4437_);
v___x_4430_ = v_x_4424_;
v_isShared_4431_ = v_isSharedCheck_4436_;
goto v_resetjp_4429_;
}
else
{
lean_inc(v_savedPos_x3f_4428_);
lean_inc(v_quotDepth_4426_);
lean_inc(v_prec_4425_);
lean_dec(v_x_4424_);
v___x_4430_ = lean_box(0);
v_isShared_4431_ = v_isSharedCheck_4436_;
goto v_resetjp_4429_;
}
v_resetjp_4429_:
{
lean_object* v___x_4432_; lean_object* v___x_4434_; 
v___x_4432_ = ((lean_object*)(l_Lean_Parser_withoutForbidden___lam__0___closed__0));
if (v_isShared_4431_ == 0)
{
lean_ctor_set(v___x_4430_, 3, v___x_4432_);
v___x_4434_ = v___x_4430_;
goto v_reusejp_4433_;
}
else
{
lean_object* v_reuseFailAlloc_4435_; 
v_reuseFailAlloc_4435_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4435_, 0, v_prec_4425_);
lean_ctor_set(v_reuseFailAlloc_4435_, 1, v_quotDepth_4426_);
lean_ctor_set(v_reuseFailAlloc_4435_, 2, v_savedPos_x3f_4428_);
lean_ctor_set(v_reuseFailAlloc_4435_, 3, v___x_4432_);
lean_ctor_set_uint8(v_reuseFailAlloc_4435_, sizeof(void*)*4, v_suppressInsideQuot_4427_);
v___x_4434_ = v_reuseFailAlloc_4435_;
goto v_reusejp_4433_;
}
v_reusejp_4433_:
{
return v___x_4434_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden(lean_object* v_p_4439_){
_start:
{
lean_object* v___f_4440_; lean_object* v___x_4441_; 
v___f_4440_ = ((lean_object*)(l_Lean_Parser_withoutForbidden___closed__0));
v___x_4441_ = l_Lean_Parser_adaptCacheableContext(v___f_4440_, v_p_4439_);
return v___x_4441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1(){
_start:
{
lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; 
v___x_4449_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__1));
v___x_4450_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__2));
v___x_4451_ = l_Lean_addBuiltinDocString(v___x_4449_, v___x_4450_);
return v___x_4451_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___boxed(lean_object* v_a_4452_){
_start:
{
lean_object* v_res_4453_; 
v_res_4453_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1();
return v_res_4453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_eoiFn(lean_object* v_c_4455_, lean_object* v_s_4456_){
_start:
{
lean_object* v_pos_4457_; lean_object* v_toInputContext_4458_; uint8_t v___x_4459_; 
v_pos_4457_ = lean_ctor_get(v_s_4456_, 2);
v_toInputContext_4458_ = lean_ctor_get(v_c_4455_, 0);
v___x_4459_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_4458_, v_pos_4457_);
if (v___x_4459_ == 0)
{
lean_object* v___x_4460_; lean_object* v___x_4461_; 
v___x_4460_ = ((lean_object*)(l_Lean_Parser_eoiFn___closed__0));
v___x_4461_ = l_Lean_Parser_ParserState_mkError(v_s_4456_, v___x_4460_);
return v___x_4461_;
}
else
{
return v_s_4456_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_eoiFn___boxed(lean_object* v_c_4462_, lean_object* v_s_4463_){
_start:
{
lean_object* v_res_4464_; 
v_res_4464_ = l_Lean_Parser_eoiFn(v_c_4462_, v_s_4463_);
lean_dec_ref(v_c_4462_);
return v_res_4464_;
}
}
static lean_object* _init_l_Lean_Parser_eoi___closed__0(void){
_start:
{
lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; 
v___x_4465_ = lean_alloc_closure((void*)(l_Lean_Parser_eoiFn___boxed), 2, 0);
v___x_4466_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_4467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4467_, 0, v___x_4466_);
lean_ctor_set(v___x_4467_, 1, v___x_4465_);
return v___x_4467_;
}
}
static lean_object* _init_l_Lean_Parser_eoi(void){
_start:
{
lean_object* v___x_4468_; 
v___x_4468_ = lean_obj_once(&l_Lean_Parser_eoi___closed__0, &l_Lean_Parser_eoi___closed__0_once, _init_l_Lean_Parser_eoi___closed__0);
return v___x_4468_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(lean_object* v_k_4469_, lean_object* v_v_4470_, lean_object* v_t_4471_){
_start:
{
if (lean_obj_tag(v_t_4471_) == 0)
{
lean_object* v_size_4472_; lean_object* v_k_4473_; lean_object* v_v_4474_; lean_object* v_l_4475_; lean_object* v_r_4476_; lean_object* v___x_4478_; uint8_t v_isShared_4479_; uint8_t v_isSharedCheck_4756_; 
v_size_4472_ = lean_ctor_get(v_t_4471_, 0);
v_k_4473_ = lean_ctor_get(v_t_4471_, 1);
v_v_4474_ = lean_ctor_get(v_t_4471_, 2);
v_l_4475_ = lean_ctor_get(v_t_4471_, 3);
v_r_4476_ = lean_ctor_get(v_t_4471_, 4);
v_isSharedCheck_4756_ = !lean_is_exclusive(v_t_4471_);
if (v_isSharedCheck_4756_ == 0)
{
v___x_4478_ = v_t_4471_;
v_isShared_4479_ = v_isSharedCheck_4756_;
goto v_resetjp_4477_;
}
else
{
lean_inc(v_r_4476_);
lean_inc(v_l_4475_);
lean_inc(v_v_4474_);
lean_inc(v_k_4473_);
lean_inc(v_size_4472_);
lean_dec(v_t_4471_);
v___x_4478_ = lean_box(0);
v_isShared_4479_ = v_isSharedCheck_4756_;
goto v_resetjp_4477_;
}
v_resetjp_4477_:
{
uint8_t v___x_4480_; 
v___x_4480_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_4469_, v_k_4473_);
switch(v___x_4480_)
{
case 0:
{
lean_object* v_impl_4481_; lean_object* v___x_4482_; 
lean_dec(v_size_4472_);
v_impl_4481_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(v_k_4469_, v_v_4470_, v_l_4475_);
v___x_4482_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_4476_) == 0)
{
lean_object* v_size_4483_; lean_object* v_size_4484_; lean_object* v_k_4485_; lean_object* v_v_4486_; lean_object* v_l_4487_; lean_object* v_r_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; uint8_t v___x_4491_; 
v_size_4483_ = lean_ctor_get(v_r_4476_, 0);
v_size_4484_ = lean_ctor_get(v_impl_4481_, 0);
v_k_4485_ = lean_ctor_get(v_impl_4481_, 1);
v_v_4486_ = lean_ctor_get(v_impl_4481_, 2);
v_l_4487_ = lean_ctor_get(v_impl_4481_, 3);
v_r_4488_ = lean_ctor_get(v_impl_4481_, 4);
lean_inc(v_r_4488_);
v___x_4489_ = lean_unsigned_to_nat(3u);
v___x_4490_ = lean_nat_mul(v___x_4489_, v_size_4483_);
v___x_4491_ = lean_nat_dec_lt(v___x_4490_, v_size_4484_);
lean_dec(v___x_4490_);
if (v___x_4491_ == 0)
{
lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4495_; 
lean_dec(v_r_4488_);
v___x_4492_ = lean_nat_add(v___x_4482_, v_size_4484_);
v___x_4493_ = lean_nat_add(v___x_4492_, v_size_4483_);
lean_dec(v___x_4492_);
if (v_isShared_4479_ == 0)
{
lean_ctor_set(v___x_4478_, 3, v_impl_4481_);
lean_ctor_set(v___x_4478_, 0, v___x_4493_);
v___x_4495_ = v___x_4478_;
goto v_reusejp_4494_;
}
else
{
lean_object* v_reuseFailAlloc_4496_; 
v_reuseFailAlloc_4496_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4496_, 0, v___x_4493_);
lean_ctor_set(v_reuseFailAlloc_4496_, 1, v_k_4473_);
lean_ctor_set(v_reuseFailAlloc_4496_, 2, v_v_4474_);
lean_ctor_set(v_reuseFailAlloc_4496_, 3, v_impl_4481_);
lean_ctor_set(v_reuseFailAlloc_4496_, 4, v_r_4476_);
v___x_4495_ = v_reuseFailAlloc_4496_;
goto v_reusejp_4494_;
}
v_reusejp_4494_:
{
return v___x_4495_;
}
}
else
{
lean_object* v___x_4498_; uint8_t v_isShared_4499_; uint8_t v_isSharedCheck_4562_; 
lean_inc(v_l_4487_);
lean_inc(v_v_4486_);
lean_inc(v_k_4485_);
lean_inc(v_size_4484_);
v_isSharedCheck_4562_ = !lean_is_exclusive(v_impl_4481_);
if (v_isSharedCheck_4562_ == 0)
{
lean_object* v_unused_4563_; lean_object* v_unused_4564_; lean_object* v_unused_4565_; lean_object* v_unused_4566_; lean_object* v_unused_4567_; 
v_unused_4563_ = lean_ctor_get(v_impl_4481_, 4);
lean_dec(v_unused_4563_);
v_unused_4564_ = lean_ctor_get(v_impl_4481_, 3);
lean_dec(v_unused_4564_);
v_unused_4565_ = lean_ctor_get(v_impl_4481_, 2);
lean_dec(v_unused_4565_);
v_unused_4566_ = lean_ctor_get(v_impl_4481_, 1);
lean_dec(v_unused_4566_);
v_unused_4567_ = lean_ctor_get(v_impl_4481_, 0);
lean_dec(v_unused_4567_);
v___x_4498_ = v_impl_4481_;
v_isShared_4499_ = v_isSharedCheck_4562_;
goto v_resetjp_4497_;
}
else
{
lean_dec(v_impl_4481_);
v___x_4498_ = lean_box(0);
v_isShared_4499_ = v_isSharedCheck_4562_;
goto v_resetjp_4497_;
}
v_resetjp_4497_:
{
lean_object* v_size_4500_; lean_object* v_size_4501_; lean_object* v_k_4502_; lean_object* v_v_4503_; lean_object* v_l_4504_; lean_object* v_r_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; uint8_t v___x_4508_; 
v_size_4500_ = lean_ctor_get(v_l_4487_, 0);
v_size_4501_ = lean_ctor_get(v_r_4488_, 0);
v_k_4502_ = lean_ctor_get(v_r_4488_, 1);
v_v_4503_ = lean_ctor_get(v_r_4488_, 2);
v_l_4504_ = lean_ctor_get(v_r_4488_, 3);
v_r_4505_ = lean_ctor_get(v_r_4488_, 4);
v___x_4506_ = lean_unsigned_to_nat(2u);
v___x_4507_ = lean_nat_mul(v___x_4506_, v_size_4500_);
v___x_4508_ = lean_nat_dec_lt(v_size_4501_, v___x_4507_);
lean_dec(v___x_4507_);
if (v___x_4508_ == 0)
{
lean_object* v___x_4510_; uint8_t v_isShared_4511_; uint8_t v_isSharedCheck_4537_; 
lean_inc(v_r_4505_);
lean_inc(v_l_4504_);
lean_inc(v_v_4503_);
lean_inc(v_k_4502_);
v_isSharedCheck_4537_ = !lean_is_exclusive(v_r_4488_);
if (v_isSharedCheck_4537_ == 0)
{
lean_object* v_unused_4538_; lean_object* v_unused_4539_; lean_object* v_unused_4540_; lean_object* v_unused_4541_; lean_object* v_unused_4542_; 
v_unused_4538_ = lean_ctor_get(v_r_4488_, 4);
lean_dec(v_unused_4538_);
v_unused_4539_ = lean_ctor_get(v_r_4488_, 3);
lean_dec(v_unused_4539_);
v_unused_4540_ = lean_ctor_get(v_r_4488_, 2);
lean_dec(v_unused_4540_);
v_unused_4541_ = lean_ctor_get(v_r_4488_, 1);
lean_dec(v_unused_4541_);
v_unused_4542_ = lean_ctor_get(v_r_4488_, 0);
lean_dec(v_unused_4542_);
v___x_4510_ = v_r_4488_;
v_isShared_4511_ = v_isSharedCheck_4537_;
goto v_resetjp_4509_;
}
else
{
lean_dec(v_r_4488_);
v___x_4510_ = lean_box(0);
v_isShared_4511_ = v_isSharedCheck_4537_;
goto v_resetjp_4509_;
}
v_resetjp_4509_:
{
lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___y_4515_; lean_object* v___y_4516_; lean_object* v___y_4517_; lean_object* v___x_4525_; lean_object* v___y_4527_; 
v___x_4512_ = lean_nat_add(v___x_4482_, v_size_4484_);
lean_dec(v_size_4484_);
v___x_4513_ = lean_nat_add(v___x_4512_, v_size_4483_);
lean_dec(v___x_4512_);
v___x_4525_ = lean_nat_add(v___x_4482_, v_size_4500_);
if (lean_obj_tag(v_l_4504_) == 0)
{
lean_object* v_size_4535_; 
v_size_4535_ = lean_ctor_get(v_l_4504_, 0);
lean_inc(v_size_4535_);
v___y_4527_ = v_size_4535_;
goto v___jp_4526_;
}
else
{
lean_object* v___x_4536_; 
v___x_4536_ = lean_unsigned_to_nat(0u);
v___y_4527_ = v___x_4536_;
goto v___jp_4526_;
}
v___jp_4514_:
{
lean_object* v___x_4518_; lean_object* v___x_4520_; 
v___x_4518_ = lean_nat_add(v___y_4515_, v___y_4517_);
lean_dec(v___y_4517_);
lean_dec(v___y_4515_);
if (v_isShared_4511_ == 0)
{
lean_ctor_set(v___x_4510_, 4, v_r_4476_);
lean_ctor_set(v___x_4510_, 3, v_r_4505_);
lean_ctor_set(v___x_4510_, 2, v_v_4474_);
lean_ctor_set(v___x_4510_, 1, v_k_4473_);
lean_ctor_set(v___x_4510_, 0, v___x_4518_);
v___x_4520_ = v___x_4510_;
goto v_reusejp_4519_;
}
else
{
lean_object* v_reuseFailAlloc_4524_; 
v_reuseFailAlloc_4524_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4524_, 0, v___x_4518_);
lean_ctor_set(v_reuseFailAlloc_4524_, 1, v_k_4473_);
lean_ctor_set(v_reuseFailAlloc_4524_, 2, v_v_4474_);
lean_ctor_set(v_reuseFailAlloc_4524_, 3, v_r_4505_);
lean_ctor_set(v_reuseFailAlloc_4524_, 4, v_r_4476_);
v___x_4520_ = v_reuseFailAlloc_4524_;
goto v_reusejp_4519_;
}
v_reusejp_4519_:
{
lean_object* v___x_4522_; 
if (v_isShared_4499_ == 0)
{
lean_ctor_set(v___x_4498_, 4, v___x_4520_);
lean_ctor_set(v___x_4498_, 3, v___y_4516_);
lean_ctor_set(v___x_4498_, 2, v_v_4503_);
lean_ctor_set(v___x_4498_, 1, v_k_4502_);
lean_ctor_set(v___x_4498_, 0, v___x_4513_);
v___x_4522_ = v___x_4498_;
goto v_reusejp_4521_;
}
else
{
lean_object* v_reuseFailAlloc_4523_; 
v_reuseFailAlloc_4523_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4523_, 0, v___x_4513_);
lean_ctor_set(v_reuseFailAlloc_4523_, 1, v_k_4502_);
lean_ctor_set(v_reuseFailAlloc_4523_, 2, v_v_4503_);
lean_ctor_set(v_reuseFailAlloc_4523_, 3, v___y_4516_);
lean_ctor_set(v_reuseFailAlloc_4523_, 4, v___x_4520_);
v___x_4522_ = v_reuseFailAlloc_4523_;
goto v_reusejp_4521_;
}
v_reusejp_4521_:
{
return v___x_4522_;
}
}
}
v___jp_4526_:
{
lean_object* v___x_4528_; lean_object* v___x_4530_; 
v___x_4528_ = lean_nat_add(v___x_4525_, v___y_4527_);
lean_dec(v___y_4527_);
lean_dec(v___x_4525_);
if (v_isShared_4479_ == 0)
{
lean_ctor_set(v___x_4478_, 4, v_l_4504_);
lean_ctor_set(v___x_4478_, 3, v_l_4487_);
lean_ctor_set(v___x_4478_, 2, v_v_4486_);
lean_ctor_set(v___x_4478_, 1, v_k_4485_);
lean_ctor_set(v___x_4478_, 0, v___x_4528_);
v___x_4530_ = v___x_4478_;
goto v_reusejp_4529_;
}
else
{
lean_object* v_reuseFailAlloc_4534_; 
v_reuseFailAlloc_4534_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4534_, 0, v___x_4528_);
lean_ctor_set(v_reuseFailAlloc_4534_, 1, v_k_4485_);
lean_ctor_set(v_reuseFailAlloc_4534_, 2, v_v_4486_);
lean_ctor_set(v_reuseFailAlloc_4534_, 3, v_l_4487_);
lean_ctor_set(v_reuseFailAlloc_4534_, 4, v_l_4504_);
v___x_4530_ = v_reuseFailAlloc_4534_;
goto v_reusejp_4529_;
}
v_reusejp_4529_:
{
lean_object* v___x_4531_; 
v___x_4531_ = lean_nat_add(v___x_4482_, v_size_4483_);
if (lean_obj_tag(v_r_4505_) == 0)
{
lean_object* v_size_4532_; 
v_size_4532_ = lean_ctor_get(v_r_4505_, 0);
lean_inc(v_size_4532_);
v___y_4515_ = v___x_4531_;
v___y_4516_ = v___x_4530_;
v___y_4517_ = v_size_4532_;
goto v___jp_4514_;
}
else
{
lean_object* v___x_4533_; 
v___x_4533_ = lean_unsigned_to_nat(0u);
v___y_4515_ = v___x_4531_;
v___y_4516_ = v___x_4530_;
v___y_4517_ = v___x_4533_;
goto v___jp_4514_;
}
}
}
}
}
else
{
lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4548_; 
lean_del_object(v___x_4478_);
v___x_4543_ = lean_nat_add(v___x_4482_, v_size_4484_);
lean_dec(v_size_4484_);
v___x_4544_ = lean_nat_add(v___x_4543_, v_size_4483_);
lean_dec(v___x_4543_);
v___x_4545_ = lean_nat_add(v___x_4482_, v_size_4483_);
v___x_4546_ = lean_nat_add(v___x_4545_, v_size_4501_);
lean_dec(v___x_4545_);
lean_inc_ref(v_r_4476_);
if (v_isShared_4499_ == 0)
{
lean_ctor_set(v___x_4498_, 4, v_r_4476_);
lean_ctor_set(v___x_4498_, 3, v_r_4488_);
lean_ctor_set(v___x_4498_, 2, v_v_4474_);
lean_ctor_set(v___x_4498_, 1, v_k_4473_);
lean_ctor_set(v___x_4498_, 0, v___x_4546_);
v___x_4548_ = v___x_4498_;
goto v_reusejp_4547_;
}
else
{
lean_object* v_reuseFailAlloc_4561_; 
v_reuseFailAlloc_4561_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4561_, 0, v___x_4546_);
lean_ctor_set(v_reuseFailAlloc_4561_, 1, v_k_4473_);
lean_ctor_set(v_reuseFailAlloc_4561_, 2, v_v_4474_);
lean_ctor_set(v_reuseFailAlloc_4561_, 3, v_r_4488_);
lean_ctor_set(v_reuseFailAlloc_4561_, 4, v_r_4476_);
v___x_4548_ = v_reuseFailAlloc_4561_;
goto v_reusejp_4547_;
}
v_reusejp_4547_:
{
lean_object* v___x_4550_; uint8_t v_isShared_4551_; uint8_t v_isSharedCheck_4555_; 
v_isSharedCheck_4555_ = !lean_is_exclusive(v_r_4476_);
if (v_isSharedCheck_4555_ == 0)
{
lean_object* v_unused_4556_; lean_object* v_unused_4557_; lean_object* v_unused_4558_; lean_object* v_unused_4559_; lean_object* v_unused_4560_; 
v_unused_4556_ = lean_ctor_get(v_r_4476_, 4);
lean_dec(v_unused_4556_);
v_unused_4557_ = lean_ctor_get(v_r_4476_, 3);
lean_dec(v_unused_4557_);
v_unused_4558_ = lean_ctor_get(v_r_4476_, 2);
lean_dec(v_unused_4558_);
v_unused_4559_ = lean_ctor_get(v_r_4476_, 1);
lean_dec(v_unused_4559_);
v_unused_4560_ = lean_ctor_get(v_r_4476_, 0);
lean_dec(v_unused_4560_);
v___x_4550_ = v_r_4476_;
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
else
{
lean_dec(v_r_4476_);
v___x_4550_ = lean_box(0);
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
v_resetjp_4549_:
{
lean_object* v___x_4553_; 
if (v_isShared_4551_ == 0)
{
lean_ctor_set(v___x_4550_, 4, v___x_4548_);
lean_ctor_set(v___x_4550_, 3, v_l_4487_);
lean_ctor_set(v___x_4550_, 2, v_v_4486_);
lean_ctor_set(v___x_4550_, 1, v_k_4485_);
lean_ctor_set(v___x_4550_, 0, v___x_4544_);
v___x_4553_ = v___x_4550_;
goto v_reusejp_4552_;
}
else
{
lean_object* v_reuseFailAlloc_4554_; 
v_reuseFailAlloc_4554_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4554_, 0, v___x_4544_);
lean_ctor_set(v_reuseFailAlloc_4554_, 1, v_k_4485_);
lean_ctor_set(v_reuseFailAlloc_4554_, 2, v_v_4486_);
lean_ctor_set(v_reuseFailAlloc_4554_, 3, v_l_4487_);
lean_ctor_set(v_reuseFailAlloc_4554_, 4, v___x_4548_);
v___x_4553_ = v_reuseFailAlloc_4554_;
goto v_reusejp_4552_;
}
v_reusejp_4552_:
{
return v___x_4553_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_4568_; 
v_l_4568_ = lean_ctor_get(v_impl_4481_, 3);
if (lean_obj_tag(v_l_4568_) == 0)
{
lean_object* v_r_4569_; lean_object* v_k_4570_; lean_object* v_v_4571_; lean_object* v___x_4573_; uint8_t v_isShared_4574_; uint8_t v_isSharedCheck_4582_; 
lean_inc_ref(v_l_4568_);
v_r_4569_ = lean_ctor_get(v_impl_4481_, 4);
v_k_4570_ = lean_ctor_get(v_impl_4481_, 1);
v_v_4571_ = lean_ctor_get(v_impl_4481_, 2);
v_isSharedCheck_4582_ = !lean_is_exclusive(v_impl_4481_);
if (v_isSharedCheck_4582_ == 0)
{
lean_object* v_unused_4583_; lean_object* v_unused_4584_; 
v_unused_4583_ = lean_ctor_get(v_impl_4481_, 3);
lean_dec(v_unused_4583_);
v_unused_4584_ = lean_ctor_get(v_impl_4481_, 0);
lean_dec(v_unused_4584_);
v___x_4573_ = v_impl_4481_;
v_isShared_4574_ = v_isSharedCheck_4582_;
goto v_resetjp_4572_;
}
else
{
lean_inc(v_r_4569_);
lean_inc(v_v_4571_);
lean_inc(v_k_4570_);
lean_dec(v_impl_4481_);
v___x_4573_ = lean_box(0);
v_isShared_4574_ = v_isSharedCheck_4582_;
goto v_resetjp_4572_;
}
v_resetjp_4572_:
{
lean_object* v___x_4575_; lean_object* v___x_4577_; 
v___x_4575_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_4569_);
if (v_isShared_4574_ == 0)
{
lean_ctor_set(v___x_4573_, 3, v_r_4569_);
lean_ctor_set(v___x_4573_, 2, v_v_4474_);
lean_ctor_set(v___x_4573_, 1, v_k_4473_);
lean_ctor_set(v___x_4573_, 0, v___x_4482_);
v___x_4577_ = v___x_4573_;
goto v_reusejp_4576_;
}
else
{
lean_object* v_reuseFailAlloc_4581_; 
v_reuseFailAlloc_4581_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4581_, 0, v___x_4482_);
lean_ctor_set(v_reuseFailAlloc_4581_, 1, v_k_4473_);
lean_ctor_set(v_reuseFailAlloc_4581_, 2, v_v_4474_);
lean_ctor_set(v_reuseFailAlloc_4581_, 3, v_r_4569_);
lean_ctor_set(v_reuseFailAlloc_4581_, 4, v_r_4569_);
v___x_4577_ = v_reuseFailAlloc_4581_;
goto v_reusejp_4576_;
}
v_reusejp_4576_:
{
lean_object* v___x_4579_; 
if (v_isShared_4479_ == 0)
{
lean_ctor_set(v___x_4478_, 4, v___x_4577_);
lean_ctor_set(v___x_4478_, 3, v_l_4568_);
lean_ctor_set(v___x_4478_, 2, v_v_4571_);
lean_ctor_set(v___x_4478_, 1, v_k_4570_);
lean_ctor_set(v___x_4478_, 0, v___x_4575_);
v___x_4579_ = v___x_4478_;
goto v_reusejp_4578_;
}
else
{
lean_object* v_reuseFailAlloc_4580_; 
v_reuseFailAlloc_4580_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4580_, 0, v___x_4575_);
lean_ctor_set(v_reuseFailAlloc_4580_, 1, v_k_4570_);
lean_ctor_set(v_reuseFailAlloc_4580_, 2, v_v_4571_);
lean_ctor_set(v_reuseFailAlloc_4580_, 3, v_l_4568_);
lean_ctor_set(v_reuseFailAlloc_4580_, 4, v___x_4577_);
v___x_4579_ = v_reuseFailAlloc_4580_;
goto v_reusejp_4578_;
}
v_reusejp_4578_:
{
return v___x_4579_;
}
}
}
}
else
{
lean_object* v_r_4585_; 
v_r_4585_ = lean_ctor_get(v_impl_4481_, 4);
lean_inc(v_r_4585_);
if (lean_obj_tag(v_r_4585_) == 0)
{
lean_object* v_k_4586_; lean_object* v_v_4587_; lean_object* v___x_4589_; uint8_t v_isShared_4590_; uint8_t v_isSharedCheck_4610_; 
lean_inc(v_l_4568_);
v_k_4586_ = lean_ctor_get(v_impl_4481_, 1);
v_v_4587_ = lean_ctor_get(v_impl_4481_, 2);
v_isSharedCheck_4610_ = !lean_is_exclusive(v_impl_4481_);
if (v_isSharedCheck_4610_ == 0)
{
lean_object* v_unused_4611_; lean_object* v_unused_4612_; lean_object* v_unused_4613_; 
v_unused_4611_ = lean_ctor_get(v_impl_4481_, 4);
lean_dec(v_unused_4611_);
v_unused_4612_ = lean_ctor_get(v_impl_4481_, 3);
lean_dec(v_unused_4612_);
v_unused_4613_ = lean_ctor_get(v_impl_4481_, 0);
lean_dec(v_unused_4613_);
v___x_4589_ = v_impl_4481_;
v_isShared_4590_ = v_isSharedCheck_4610_;
goto v_resetjp_4588_;
}
else
{
lean_inc(v_v_4587_);
lean_inc(v_k_4586_);
lean_dec(v_impl_4481_);
v___x_4589_ = lean_box(0);
v_isShared_4590_ = v_isSharedCheck_4610_;
goto v_resetjp_4588_;
}
v_resetjp_4588_:
{
lean_object* v_k_4591_; lean_object* v_v_4592_; lean_object* v___x_4594_; uint8_t v_isShared_4595_; uint8_t v_isSharedCheck_4606_; 
v_k_4591_ = lean_ctor_get(v_r_4585_, 1);
v_v_4592_ = lean_ctor_get(v_r_4585_, 2);
v_isSharedCheck_4606_ = !lean_is_exclusive(v_r_4585_);
if (v_isSharedCheck_4606_ == 0)
{
lean_object* v_unused_4607_; lean_object* v_unused_4608_; lean_object* v_unused_4609_; 
v_unused_4607_ = lean_ctor_get(v_r_4585_, 4);
lean_dec(v_unused_4607_);
v_unused_4608_ = lean_ctor_get(v_r_4585_, 3);
lean_dec(v_unused_4608_);
v_unused_4609_ = lean_ctor_get(v_r_4585_, 0);
lean_dec(v_unused_4609_);
v___x_4594_ = v_r_4585_;
v_isShared_4595_ = v_isSharedCheck_4606_;
goto v_resetjp_4593_;
}
else
{
lean_inc(v_v_4592_);
lean_inc(v_k_4591_);
lean_dec(v_r_4585_);
v___x_4594_ = lean_box(0);
v_isShared_4595_ = v_isSharedCheck_4606_;
goto v_resetjp_4593_;
}
v_resetjp_4593_:
{
lean_object* v___x_4596_; lean_object* v___x_4598_; 
v___x_4596_ = lean_unsigned_to_nat(3u);
if (v_isShared_4595_ == 0)
{
lean_ctor_set(v___x_4594_, 4, v_l_4568_);
lean_ctor_set(v___x_4594_, 3, v_l_4568_);
lean_ctor_set(v___x_4594_, 2, v_v_4587_);
lean_ctor_set(v___x_4594_, 1, v_k_4586_);
lean_ctor_set(v___x_4594_, 0, v___x_4482_);
v___x_4598_ = v___x_4594_;
goto v_reusejp_4597_;
}
else
{
lean_object* v_reuseFailAlloc_4605_; 
v_reuseFailAlloc_4605_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4605_, 0, v___x_4482_);
lean_ctor_set(v_reuseFailAlloc_4605_, 1, v_k_4586_);
lean_ctor_set(v_reuseFailAlloc_4605_, 2, v_v_4587_);
lean_ctor_set(v_reuseFailAlloc_4605_, 3, v_l_4568_);
lean_ctor_set(v_reuseFailAlloc_4605_, 4, v_l_4568_);
v___x_4598_ = v_reuseFailAlloc_4605_;
goto v_reusejp_4597_;
}
v_reusejp_4597_:
{
lean_object* v___x_4600_; 
if (v_isShared_4590_ == 0)
{
lean_ctor_set(v___x_4589_, 4, v_l_4568_);
lean_ctor_set(v___x_4589_, 2, v_v_4474_);
lean_ctor_set(v___x_4589_, 1, v_k_4473_);
lean_ctor_set(v___x_4589_, 0, v___x_4482_);
v___x_4600_ = v___x_4589_;
goto v_reusejp_4599_;
}
else
{
lean_object* v_reuseFailAlloc_4604_; 
v_reuseFailAlloc_4604_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4604_, 0, v___x_4482_);
lean_ctor_set(v_reuseFailAlloc_4604_, 1, v_k_4473_);
lean_ctor_set(v_reuseFailAlloc_4604_, 2, v_v_4474_);
lean_ctor_set(v_reuseFailAlloc_4604_, 3, v_l_4568_);
lean_ctor_set(v_reuseFailAlloc_4604_, 4, v_l_4568_);
v___x_4600_ = v_reuseFailAlloc_4604_;
goto v_reusejp_4599_;
}
v_reusejp_4599_:
{
lean_object* v___x_4602_; 
if (v_isShared_4479_ == 0)
{
lean_ctor_set(v___x_4478_, 4, v___x_4600_);
lean_ctor_set(v___x_4478_, 3, v___x_4598_);
lean_ctor_set(v___x_4478_, 2, v_v_4592_);
lean_ctor_set(v___x_4478_, 1, v_k_4591_);
lean_ctor_set(v___x_4478_, 0, v___x_4596_);
v___x_4602_ = v___x_4478_;
goto v_reusejp_4601_;
}
else
{
lean_object* v_reuseFailAlloc_4603_; 
v_reuseFailAlloc_4603_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4603_, 0, v___x_4596_);
lean_ctor_set(v_reuseFailAlloc_4603_, 1, v_k_4591_);
lean_ctor_set(v_reuseFailAlloc_4603_, 2, v_v_4592_);
lean_ctor_set(v_reuseFailAlloc_4603_, 3, v___x_4598_);
lean_ctor_set(v_reuseFailAlloc_4603_, 4, v___x_4600_);
v___x_4602_ = v_reuseFailAlloc_4603_;
goto v_reusejp_4601_;
}
v_reusejp_4601_:
{
return v___x_4602_;
}
}
}
}
}
}
else
{
lean_object* v___x_4614_; lean_object* v___x_4616_; 
v___x_4614_ = lean_unsigned_to_nat(2u);
if (v_isShared_4479_ == 0)
{
lean_ctor_set(v___x_4478_, 4, v_r_4585_);
lean_ctor_set(v___x_4478_, 3, v_impl_4481_);
lean_ctor_set(v___x_4478_, 0, v___x_4614_);
v___x_4616_ = v___x_4478_;
goto v_reusejp_4615_;
}
else
{
lean_object* v_reuseFailAlloc_4617_; 
v_reuseFailAlloc_4617_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4617_, 0, v___x_4614_);
lean_ctor_set(v_reuseFailAlloc_4617_, 1, v_k_4473_);
lean_ctor_set(v_reuseFailAlloc_4617_, 2, v_v_4474_);
lean_ctor_set(v_reuseFailAlloc_4617_, 3, v_impl_4481_);
lean_ctor_set(v_reuseFailAlloc_4617_, 4, v_r_4585_);
v___x_4616_ = v_reuseFailAlloc_4617_;
goto v_reusejp_4615_;
}
v_reusejp_4615_:
{
return v___x_4616_;
}
}
}
}
}
case 1:
{
lean_object* v___x_4619_; 
lean_dec(v_v_4474_);
lean_dec(v_k_4473_);
if (v_isShared_4479_ == 0)
{
lean_ctor_set(v___x_4478_, 2, v_v_4470_);
lean_ctor_set(v___x_4478_, 1, v_k_4469_);
v___x_4619_ = v___x_4478_;
goto v_reusejp_4618_;
}
else
{
lean_object* v_reuseFailAlloc_4620_; 
v_reuseFailAlloc_4620_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4620_, 0, v_size_4472_);
lean_ctor_set(v_reuseFailAlloc_4620_, 1, v_k_4469_);
lean_ctor_set(v_reuseFailAlloc_4620_, 2, v_v_4470_);
lean_ctor_set(v_reuseFailAlloc_4620_, 3, v_l_4475_);
lean_ctor_set(v_reuseFailAlloc_4620_, 4, v_r_4476_);
v___x_4619_ = v_reuseFailAlloc_4620_;
goto v_reusejp_4618_;
}
v_reusejp_4618_:
{
return v___x_4619_;
}
}
default: 
{
lean_object* v_impl_4621_; lean_object* v___x_4622_; 
lean_dec(v_size_4472_);
v_impl_4621_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(v_k_4469_, v_v_4470_, v_r_4476_);
v___x_4622_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_4475_) == 0)
{
lean_object* v_size_4623_; lean_object* v_size_4624_; lean_object* v_k_4625_; lean_object* v_v_4626_; lean_object* v_l_4627_; lean_object* v_r_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; uint8_t v___x_4631_; 
v_size_4623_ = lean_ctor_get(v_l_4475_, 0);
v_size_4624_ = lean_ctor_get(v_impl_4621_, 0);
v_k_4625_ = lean_ctor_get(v_impl_4621_, 1);
v_v_4626_ = lean_ctor_get(v_impl_4621_, 2);
v_l_4627_ = lean_ctor_get(v_impl_4621_, 3);
lean_inc(v_l_4627_);
v_r_4628_ = lean_ctor_get(v_impl_4621_, 4);
v___x_4629_ = lean_unsigned_to_nat(3u);
v___x_4630_ = lean_nat_mul(v___x_4629_, v_size_4623_);
v___x_4631_ = lean_nat_dec_lt(v___x_4630_, v_size_4624_);
lean_dec(v___x_4630_);
if (v___x_4631_ == 0)
{
lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4635_; 
lean_dec(v_l_4627_);
v___x_4632_ = lean_nat_add(v___x_4622_, v_size_4623_);
v___x_4633_ = lean_nat_add(v___x_4632_, v_size_4624_);
lean_dec(v___x_4632_);
if (v_isShared_4479_ == 0)
{
lean_ctor_set(v___x_4478_, 4, v_impl_4621_);
lean_ctor_set(v___x_4478_, 0, v___x_4633_);
v___x_4635_ = v___x_4478_;
goto v_reusejp_4634_;
}
else
{
lean_object* v_reuseFailAlloc_4636_; 
v_reuseFailAlloc_4636_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4636_, 0, v___x_4633_);
lean_ctor_set(v_reuseFailAlloc_4636_, 1, v_k_4473_);
lean_ctor_set(v_reuseFailAlloc_4636_, 2, v_v_4474_);
lean_ctor_set(v_reuseFailAlloc_4636_, 3, v_l_4475_);
lean_ctor_set(v_reuseFailAlloc_4636_, 4, v_impl_4621_);
v___x_4635_ = v_reuseFailAlloc_4636_;
goto v_reusejp_4634_;
}
v_reusejp_4634_:
{
return v___x_4635_;
}
}
else
{
lean_object* v___x_4638_; uint8_t v_isShared_4639_; uint8_t v_isSharedCheck_4700_; 
lean_inc(v_r_4628_);
lean_inc(v_v_4626_);
lean_inc(v_k_4625_);
lean_inc(v_size_4624_);
v_isSharedCheck_4700_ = !lean_is_exclusive(v_impl_4621_);
if (v_isSharedCheck_4700_ == 0)
{
lean_object* v_unused_4701_; lean_object* v_unused_4702_; lean_object* v_unused_4703_; lean_object* v_unused_4704_; lean_object* v_unused_4705_; 
v_unused_4701_ = lean_ctor_get(v_impl_4621_, 4);
lean_dec(v_unused_4701_);
v_unused_4702_ = lean_ctor_get(v_impl_4621_, 3);
lean_dec(v_unused_4702_);
v_unused_4703_ = lean_ctor_get(v_impl_4621_, 2);
lean_dec(v_unused_4703_);
v_unused_4704_ = lean_ctor_get(v_impl_4621_, 1);
lean_dec(v_unused_4704_);
v_unused_4705_ = lean_ctor_get(v_impl_4621_, 0);
lean_dec(v_unused_4705_);
v___x_4638_ = v_impl_4621_;
v_isShared_4639_ = v_isSharedCheck_4700_;
goto v_resetjp_4637_;
}
else
{
lean_dec(v_impl_4621_);
v___x_4638_ = lean_box(0);
v_isShared_4639_ = v_isSharedCheck_4700_;
goto v_resetjp_4637_;
}
v_resetjp_4637_:
{
lean_object* v_size_4640_; lean_object* v_k_4641_; lean_object* v_v_4642_; lean_object* v_l_4643_; lean_object* v_r_4644_; lean_object* v_size_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; uint8_t v___x_4648_; 
v_size_4640_ = lean_ctor_get(v_l_4627_, 0);
v_k_4641_ = lean_ctor_get(v_l_4627_, 1);
v_v_4642_ = lean_ctor_get(v_l_4627_, 2);
v_l_4643_ = lean_ctor_get(v_l_4627_, 3);
v_r_4644_ = lean_ctor_get(v_l_4627_, 4);
v_size_4645_ = lean_ctor_get(v_r_4628_, 0);
v___x_4646_ = lean_unsigned_to_nat(2u);
v___x_4647_ = lean_nat_mul(v___x_4646_, v_size_4645_);
v___x_4648_ = lean_nat_dec_lt(v_size_4640_, v___x_4647_);
lean_dec(v___x_4647_);
if (v___x_4648_ == 0)
{
lean_object* v___x_4650_; uint8_t v_isShared_4651_; uint8_t v_isSharedCheck_4676_; 
lean_inc(v_r_4644_);
lean_inc(v_l_4643_);
lean_inc(v_v_4642_);
lean_inc(v_k_4641_);
v_isSharedCheck_4676_ = !lean_is_exclusive(v_l_4627_);
if (v_isSharedCheck_4676_ == 0)
{
lean_object* v_unused_4677_; lean_object* v_unused_4678_; lean_object* v_unused_4679_; lean_object* v_unused_4680_; lean_object* v_unused_4681_; 
v_unused_4677_ = lean_ctor_get(v_l_4627_, 4);
lean_dec(v_unused_4677_);
v_unused_4678_ = lean_ctor_get(v_l_4627_, 3);
lean_dec(v_unused_4678_);
v_unused_4679_ = lean_ctor_get(v_l_4627_, 2);
lean_dec(v_unused_4679_);
v_unused_4680_ = lean_ctor_get(v_l_4627_, 1);
lean_dec(v_unused_4680_);
v_unused_4681_ = lean_ctor_get(v_l_4627_, 0);
lean_dec(v_unused_4681_);
v___x_4650_ = v_l_4627_;
v_isShared_4651_ = v_isSharedCheck_4676_;
goto v_resetjp_4649_;
}
else
{
lean_dec(v_l_4627_);
v___x_4650_ = lean_box(0);
v_isShared_4651_ = v_isSharedCheck_4676_;
goto v_resetjp_4649_;
}
v_resetjp_4649_:
{
lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___y_4655_; lean_object* v___y_4656_; lean_object* v___y_4657_; lean_object* v___y_4666_; 
v___x_4652_ = lean_nat_add(v___x_4622_, v_size_4623_);
v___x_4653_ = lean_nat_add(v___x_4652_, v_size_4624_);
lean_dec(v_size_4624_);
if (lean_obj_tag(v_l_4643_) == 0)
{
lean_object* v_size_4674_; 
v_size_4674_ = lean_ctor_get(v_l_4643_, 0);
lean_inc(v_size_4674_);
v___y_4666_ = v_size_4674_;
goto v___jp_4665_;
}
else
{
lean_object* v___x_4675_; 
v___x_4675_ = lean_unsigned_to_nat(0u);
v___y_4666_ = v___x_4675_;
goto v___jp_4665_;
}
v___jp_4654_:
{
lean_object* v___x_4658_; lean_object* v___x_4660_; 
v___x_4658_ = lean_nat_add(v___y_4655_, v___y_4657_);
lean_dec(v___y_4657_);
lean_dec(v___y_4655_);
if (v_isShared_4651_ == 0)
{
lean_ctor_set(v___x_4650_, 4, v_r_4628_);
lean_ctor_set(v___x_4650_, 3, v_r_4644_);
lean_ctor_set(v___x_4650_, 2, v_v_4626_);
lean_ctor_set(v___x_4650_, 1, v_k_4625_);
lean_ctor_set(v___x_4650_, 0, v___x_4658_);
v___x_4660_ = v___x_4650_;
goto v_reusejp_4659_;
}
else
{
lean_object* v_reuseFailAlloc_4664_; 
v_reuseFailAlloc_4664_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4664_, 0, v___x_4658_);
lean_ctor_set(v_reuseFailAlloc_4664_, 1, v_k_4625_);
lean_ctor_set(v_reuseFailAlloc_4664_, 2, v_v_4626_);
lean_ctor_set(v_reuseFailAlloc_4664_, 3, v_r_4644_);
lean_ctor_set(v_reuseFailAlloc_4664_, 4, v_r_4628_);
v___x_4660_ = v_reuseFailAlloc_4664_;
goto v_reusejp_4659_;
}
v_reusejp_4659_:
{
lean_object* v___x_4662_; 
if (v_isShared_4639_ == 0)
{
lean_ctor_set(v___x_4638_, 4, v___x_4660_);
lean_ctor_set(v___x_4638_, 3, v___y_4656_);
lean_ctor_set(v___x_4638_, 2, v_v_4642_);
lean_ctor_set(v___x_4638_, 1, v_k_4641_);
lean_ctor_set(v___x_4638_, 0, v___x_4653_);
v___x_4662_ = v___x_4638_;
goto v_reusejp_4661_;
}
else
{
lean_object* v_reuseFailAlloc_4663_; 
v_reuseFailAlloc_4663_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4663_, 0, v___x_4653_);
lean_ctor_set(v_reuseFailAlloc_4663_, 1, v_k_4641_);
lean_ctor_set(v_reuseFailAlloc_4663_, 2, v_v_4642_);
lean_ctor_set(v_reuseFailAlloc_4663_, 3, v___y_4656_);
lean_ctor_set(v_reuseFailAlloc_4663_, 4, v___x_4660_);
v___x_4662_ = v_reuseFailAlloc_4663_;
goto v_reusejp_4661_;
}
v_reusejp_4661_:
{
return v___x_4662_;
}
}
}
v___jp_4665_:
{
lean_object* v___x_4667_; lean_object* v___x_4669_; 
v___x_4667_ = lean_nat_add(v___x_4652_, v___y_4666_);
lean_dec(v___y_4666_);
lean_dec(v___x_4652_);
if (v_isShared_4479_ == 0)
{
lean_ctor_set(v___x_4478_, 4, v_l_4643_);
lean_ctor_set(v___x_4478_, 0, v___x_4667_);
v___x_4669_ = v___x_4478_;
goto v_reusejp_4668_;
}
else
{
lean_object* v_reuseFailAlloc_4673_; 
v_reuseFailAlloc_4673_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4673_, 0, v___x_4667_);
lean_ctor_set(v_reuseFailAlloc_4673_, 1, v_k_4473_);
lean_ctor_set(v_reuseFailAlloc_4673_, 2, v_v_4474_);
lean_ctor_set(v_reuseFailAlloc_4673_, 3, v_l_4475_);
lean_ctor_set(v_reuseFailAlloc_4673_, 4, v_l_4643_);
v___x_4669_ = v_reuseFailAlloc_4673_;
goto v_reusejp_4668_;
}
v_reusejp_4668_:
{
lean_object* v___x_4670_; 
v___x_4670_ = lean_nat_add(v___x_4622_, v_size_4645_);
if (lean_obj_tag(v_r_4644_) == 0)
{
lean_object* v_size_4671_; 
v_size_4671_ = lean_ctor_get(v_r_4644_, 0);
lean_inc(v_size_4671_);
v___y_4655_ = v___x_4670_;
v___y_4656_ = v___x_4669_;
v___y_4657_ = v_size_4671_;
goto v___jp_4654_;
}
else
{
lean_object* v___x_4672_; 
v___x_4672_ = lean_unsigned_to_nat(0u);
v___y_4655_ = v___x_4670_;
v___y_4656_ = v___x_4669_;
v___y_4657_ = v___x_4672_;
goto v___jp_4654_;
}
}
}
}
}
else
{
lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4686_; 
lean_del_object(v___x_4478_);
v___x_4682_ = lean_nat_add(v___x_4622_, v_size_4623_);
v___x_4683_ = lean_nat_add(v___x_4682_, v_size_4624_);
lean_dec(v_size_4624_);
v___x_4684_ = lean_nat_add(v___x_4682_, v_size_4640_);
lean_dec(v___x_4682_);
lean_inc_ref(v_l_4475_);
if (v_isShared_4639_ == 0)
{
lean_ctor_set(v___x_4638_, 4, v_l_4627_);
lean_ctor_set(v___x_4638_, 3, v_l_4475_);
lean_ctor_set(v___x_4638_, 2, v_v_4474_);
lean_ctor_set(v___x_4638_, 1, v_k_4473_);
lean_ctor_set(v___x_4638_, 0, v___x_4684_);
v___x_4686_ = v___x_4638_;
goto v_reusejp_4685_;
}
else
{
lean_object* v_reuseFailAlloc_4699_; 
v_reuseFailAlloc_4699_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4699_, 0, v___x_4684_);
lean_ctor_set(v_reuseFailAlloc_4699_, 1, v_k_4473_);
lean_ctor_set(v_reuseFailAlloc_4699_, 2, v_v_4474_);
lean_ctor_set(v_reuseFailAlloc_4699_, 3, v_l_4475_);
lean_ctor_set(v_reuseFailAlloc_4699_, 4, v_l_4627_);
v___x_4686_ = v_reuseFailAlloc_4699_;
goto v_reusejp_4685_;
}
v_reusejp_4685_:
{
lean_object* v___x_4688_; uint8_t v_isShared_4689_; uint8_t v_isSharedCheck_4693_; 
v_isSharedCheck_4693_ = !lean_is_exclusive(v_l_4475_);
if (v_isSharedCheck_4693_ == 0)
{
lean_object* v_unused_4694_; lean_object* v_unused_4695_; lean_object* v_unused_4696_; lean_object* v_unused_4697_; lean_object* v_unused_4698_; 
v_unused_4694_ = lean_ctor_get(v_l_4475_, 4);
lean_dec(v_unused_4694_);
v_unused_4695_ = lean_ctor_get(v_l_4475_, 3);
lean_dec(v_unused_4695_);
v_unused_4696_ = lean_ctor_get(v_l_4475_, 2);
lean_dec(v_unused_4696_);
v_unused_4697_ = lean_ctor_get(v_l_4475_, 1);
lean_dec(v_unused_4697_);
v_unused_4698_ = lean_ctor_get(v_l_4475_, 0);
lean_dec(v_unused_4698_);
v___x_4688_ = v_l_4475_;
v_isShared_4689_ = v_isSharedCheck_4693_;
goto v_resetjp_4687_;
}
else
{
lean_dec(v_l_4475_);
v___x_4688_ = lean_box(0);
v_isShared_4689_ = v_isSharedCheck_4693_;
goto v_resetjp_4687_;
}
v_resetjp_4687_:
{
lean_object* v___x_4691_; 
if (v_isShared_4689_ == 0)
{
lean_ctor_set(v___x_4688_, 4, v_r_4628_);
lean_ctor_set(v___x_4688_, 3, v___x_4686_);
lean_ctor_set(v___x_4688_, 2, v_v_4626_);
lean_ctor_set(v___x_4688_, 1, v_k_4625_);
lean_ctor_set(v___x_4688_, 0, v___x_4683_);
v___x_4691_ = v___x_4688_;
goto v_reusejp_4690_;
}
else
{
lean_object* v_reuseFailAlloc_4692_; 
v_reuseFailAlloc_4692_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4692_, 0, v___x_4683_);
lean_ctor_set(v_reuseFailAlloc_4692_, 1, v_k_4625_);
lean_ctor_set(v_reuseFailAlloc_4692_, 2, v_v_4626_);
lean_ctor_set(v_reuseFailAlloc_4692_, 3, v___x_4686_);
lean_ctor_set(v_reuseFailAlloc_4692_, 4, v_r_4628_);
v___x_4691_ = v_reuseFailAlloc_4692_;
goto v_reusejp_4690_;
}
v_reusejp_4690_:
{
return v___x_4691_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_4706_; 
v_l_4706_ = lean_ctor_get(v_impl_4621_, 3);
lean_inc(v_l_4706_);
if (lean_obj_tag(v_l_4706_) == 0)
{
lean_object* v_r_4707_; lean_object* v_k_4708_; lean_object* v_v_4709_; lean_object* v___x_4711_; uint8_t v_isShared_4712_; uint8_t v_isSharedCheck_4732_; 
v_r_4707_ = lean_ctor_get(v_impl_4621_, 4);
v_k_4708_ = lean_ctor_get(v_impl_4621_, 1);
v_v_4709_ = lean_ctor_get(v_impl_4621_, 2);
v_isSharedCheck_4732_ = !lean_is_exclusive(v_impl_4621_);
if (v_isSharedCheck_4732_ == 0)
{
lean_object* v_unused_4733_; lean_object* v_unused_4734_; 
v_unused_4733_ = lean_ctor_get(v_impl_4621_, 3);
lean_dec(v_unused_4733_);
v_unused_4734_ = lean_ctor_get(v_impl_4621_, 0);
lean_dec(v_unused_4734_);
v___x_4711_ = v_impl_4621_;
v_isShared_4712_ = v_isSharedCheck_4732_;
goto v_resetjp_4710_;
}
else
{
lean_inc(v_r_4707_);
lean_inc(v_v_4709_);
lean_inc(v_k_4708_);
lean_dec(v_impl_4621_);
v___x_4711_ = lean_box(0);
v_isShared_4712_ = v_isSharedCheck_4732_;
goto v_resetjp_4710_;
}
v_resetjp_4710_:
{
lean_object* v_k_4713_; lean_object* v_v_4714_; lean_object* v___x_4716_; uint8_t v_isShared_4717_; uint8_t v_isSharedCheck_4728_; 
v_k_4713_ = lean_ctor_get(v_l_4706_, 1);
v_v_4714_ = lean_ctor_get(v_l_4706_, 2);
v_isSharedCheck_4728_ = !lean_is_exclusive(v_l_4706_);
if (v_isSharedCheck_4728_ == 0)
{
lean_object* v_unused_4729_; lean_object* v_unused_4730_; lean_object* v_unused_4731_; 
v_unused_4729_ = lean_ctor_get(v_l_4706_, 4);
lean_dec(v_unused_4729_);
v_unused_4730_ = lean_ctor_get(v_l_4706_, 3);
lean_dec(v_unused_4730_);
v_unused_4731_ = lean_ctor_get(v_l_4706_, 0);
lean_dec(v_unused_4731_);
v___x_4716_ = v_l_4706_;
v_isShared_4717_ = v_isSharedCheck_4728_;
goto v_resetjp_4715_;
}
else
{
lean_inc(v_v_4714_);
lean_inc(v_k_4713_);
lean_dec(v_l_4706_);
v___x_4716_ = lean_box(0);
v_isShared_4717_ = v_isSharedCheck_4728_;
goto v_resetjp_4715_;
}
v_resetjp_4715_:
{
lean_object* v___x_4718_; lean_object* v___x_4720_; 
v___x_4718_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_4707_, 2);
if (v_isShared_4717_ == 0)
{
lean_ctor_set(v___x_4716_, 4, v_r_4707_);
lean_ctor_set(v___x_4716_, 3, v_r_4707_);
lean_ctor_set(v___x_4716_, 2, v_v_4474_);
lean_ctor_set(v___x_4716_, 1, v_k_4473_);
lean_ctor_set(v___x_4716_, 0, v___x_4622_);
v___x_4720_ = v___x_4716_;
goto v_reusejp_4719_;
}
else
{
lean_object* v_reuseFailAlloc_4727_; 
v_reuseFailAlloc_4727_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4727_, 0, v___x_4622_);
lean_ctor_set(v_reuseFailAlloc_4727_, 1, v_k_4473_);
lean_ctor_set(v_reuseFailAlloc_4727_, 2, v_v_4474_);
lean_ctor_set(v_reuseFailAlloc_4727_, 3, v_r_4707_);
lean_ctor_set(v_reuseFailAlloc_4727_, 4, v_r_4707_);
v___x_4720_ = v_reuseFailAlloc_4727_;
goto v_reusejp_4719_;
}
v_reusejp_4719_:
{
lean_object* v___x_4722_; 
lean_inc(v_r_4707_);
if (v_isShared_4712_ == 0)
{
lean_ctor_set(v___x_4711_, 3, v_r_4707_);
lean_ctor_set(v___x_4711_, 0, v___x_4622_);
v___x_4722_ = v___x_4711_;
goto v_reusejp_4721_;
}
else
{
lean_object* v_reuseFailAlloc_4726_; 
v_reuseFailAlloc_4726_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4726_, 0, v___x_4622_);
lean_ctor_set(v_reuseFailAlloc_4726_, 1, v_k_4708_);
lean_ctor_set(v_reuseFailAlloc_4726_, 2, v_v_4709_);
lean_ctor_set(v_reuseFailAlloc_4726_, 3, v_r_4707_);
lean_ctor_set(v_reuseFailAlloc_4726_, 4, v_r_4707_);
v___x_4722_ = v_reuseFailAlloc_4726_;
goto v_reusejp_4721_;
}
v_reusejp_4721_:
{
lean_object* v___x_4724_; 
if (v_isShared_4479_ == 0)
{
lean_ctor_set(v___x_4478_, 4, v___x_4722_);
lean_ctor_set(v___x_4478_, 3, v___x_4720_);
lean_ctor_set(v___x_4478_, 2, v_v_4714_);
lean_ctor_set(v___x_4478_, 1, v_k_4713_);
lean_ctor_set(v___x_4478_, 0, v___x_4718_);
v___x_4724_ = v___x_4478_;
goto v_reusejp_4723_;
}
else
{
lean_object* v_reuseFailAlloc_4725_; 
v_reuseFailAlloc_4725_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4725_, 0, v___x_4718_);
lean_ctor_set(v_reuseFailAlloc_4725_, 1, v_k_4713_);
lean_ctor_set(v_reuseFailAlloc_4725_, 2, v_v_4714_);
lean_ctor_set(v_reuseFailAlloc_4725_, 3, v___x_4720_);
lean_ctor_set(v_reuseFailAlloc_4725_, 4, v___x_4722_);
v___x_4724_ = v_reuseFailAlloc_4725_;
goto v_reusejp_4723_;
}
v_reusejp_4723_:
{
return v___x_4724_;
}
}
}
}
}
}
else
{
lean_object* v_r_4735_; 
v_r_4735_ = lean_ctor_get(v_impl_4621_, 4);
lean_inc(v_r_4735_);
if (lean_obj_tag(v_r_4735_) == 0)
{
lean_object* v_k_4736_; lean_object* v_v_4737_; lean_object* v___x_4739_; uint8_t v_isShared_4740_; uint8_t v_isSharedCheck_4748_; 
v_k_4736_ = lean_ctor_get(v_impl_4621_, 1);
v_v_4737_ = lean_ctor_get(v_impl_4621_, 2);
v_isSharedCheck_4748_ = !lean_is_exclusive(v_impl_4621_);
if (v_isSharedCheck_4748_ == 0)
{
lean_object* v_unused_4749_; lean_object* v_unused_4750_; lean_object* v_unused_4751_; 
v_unused_4749_ = lean_ctor_get(v_impl_4621_, 4);
lean_dec(v_unused_4749_);
v_unused_4750_ = lean_ctor_get(v_impl_4621_, 3);
lean_dec(v_unused_4750_);
v_unused_4751_ = lean_ctor_get(v_impl_4621_, 0);
lean_dec(v_unused_4751_);
v___x_4739_ = v_impl_4621_;
v_isShared_4740_ = v_isSharedCheck_4748_;
goto v_resetjp_4738_;
}
else
{
lean_inc(v_v_4737_);
lean_inc(v_k_4736_);
lean_dec(v_impl_4621_);
v___x_4739_ = lean_box(0);
v_isShared_4740_ = v_isSharedCheck_4748_;
goto v_resetjp_4738_;
}
v_resetjp_4738_:
{
lean_object* v___x_4741_; lean_object* v___x_4743_; 
v___x_4741_ = lean_unsigned_to_nat(3u);
if (v_isShared_4740_ == 0)
{
lean_ctor_set(v___x_4739_, 4, v_l_4706_);
lean_ctor_set(v___x_4739_, 2, v_v_4474_);
lean_ctor_set(v___x_4739_, 1, v_k_4473_);
lean_ctor_set(v___x_4739_, 0, v___x_4622_);
v___x_4743_ = v___x_4739_;
goto v_reusejp_4742_;
}
else
{
lean_object* v_reuseFailAlloc_4747_; 
v_reuseFailAlloc_4747_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4747_, 0, v___x_4622_);
lean_ctor_set(v_reuseFailAlloc_4747_, 1, v_k_4473_);
lean_ctor_set(v_reuseFailAlloc_4747_, 2, v_v_4474_);
lean_ctor_set(v_reuseFailAlloc_4747_, 3, v_l_4706_);
lean_ctor_set(v_reuseFailAlloc_4747_, 4, v_l_4706_);
v___x_4743_ = v_reuseFailAlloc_4747_;
goto v_reusejp_4742_;
}
v_reusejp_4742_:
{
lean_object* v___x_4745_; 
if (v_isShared_4479_ == 0)
{
lean_ctor_set(v___x_4478_, 4, v_r_4735_);
lean_ctor_set(v___x_4478_, 3, v___x_4743_);
lean_ctor_set(v___x_4478_, 2, v_v_4737_);
lean_ctor_set(v___x_4478_, 1, v_k_4736_);
lean_ctor_set(v___x_4478_, 0, v___x_4741_);
v___x_4745_ = v___x_4478_;
goto v_reusejp_4744_;
}
else
{
lean_object* v_reuseFailAlloc_4746_; 
v_reuseFailAlloc_4746_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4746_, 0, v___x_4741_);
lean_ctor_set(v_reuseFailAlloc_4746_, 1, v_k_4736_);
lean_ctor_set(v_reuseFailAlloc_4746_, 2, v_v_4737_);
lean_ctor_set(v_reuseFailAlloc_4746_, 3, v___x_4743_);
lean_ctor_set(v_reuseFailAlloc_4746_, 4, v_r_4735_);
v___x_4745_ = v_reuseFailAlloc_4746_;
goto v_reusejp_4744_;
}
v_reusejp_4744_:
{
return v___x_4745_;
}
}
}
}
else
{
lean_object* v___x_4752_; lean_object* v___x_4754_; 
v___x_4752_ = lean_unsigned_to_nat(2u);
if (v_isShared_4479_ == 0)
{
lean_ctor_set(v___x_4478_, 4, v_impl_4621_);
lean_ctor_set(v___x_4478_, 3, v_r_4735_);
lean_ctor_set(v___x_4478_, 0, v___x_4752_);
v___x_4754_ = v___x_4478_;
goto v_reusejp_4753_;
}
else
{
lean_object* v_reuseFailAlloc_4755_; 
v_reuseFailAlloc_4755_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4755_, 0, v___x_4752_);
lean_ctor_set(v_reuseFailAlloc_4755_, 1, v_k_4473_);
lean_ctor_set(v_reuseFailAlloc_4755_, 2, v_v_4474_);
lean_ctor_set(v_reuseFailAlloc_4755_, 3, v_r_4735_);
lean_ctor_set(v_reuseFailAlloc_4755_, 4, v_impl_4621_);
v___x_4754_ = v_reuseFailAlloc_4755_;
goto v_reusejp_4753_;
}
v_reusejp_4753_:
{
return v___x_4754_;
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
lean_object* v___x_4757_; lean_object* v___x_4758_; 
v___x_4757_ = lean_unsigned_to_nat(1u);
v___x_4758_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4758_, 0, v___x_4757_);
lean_ctor_set(v___x_4758_, 1, v_k_4469_);
lean_ctor_set(v___x_4758_, 2, v_v_4470_);
lean_ctor_set(v___x_4758_, 3, v_t_4471_);
lean_ctor_set(v___x_4758_, 4, v_t_4471_);
return v___x_4758_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(lean_object* v_t_4759_, lean_object* v_k_4760_){
_start:
{
if (lean_obj_tag(v_t_4759_) == 0)
{
lean_object* v_k_4761_; lean_object* v_v_4762_; lean_object* v_l_4763_; lean_object* v_r_4764_; uint8_t v___x_4765_; 
v_k_4761_ = lean_ctor_get(v_t_4759_, 1);
v_v_4762_ = lean_ctor_get(v_t_4759_, 2);
v_l_4763_ = lean_ctor_get(v_t_4759_, 3);
v_r_4764_ = lean_ctor_get(v_t_4759_, 4);
v___x_4765_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_4760_, v_k_4761_);
switch(v___x_4765_)
{
case 0:
{
v_t_4759_ = v_l_4763_;
goto _start;
}
case 1:
{
lean_object* v___x_4767_; 
lean_inc(v_v_4762_);
v___x_4767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4767_, 0, v_v_4762_);
return v___x_4767_;
}
default: 
{
v_t_4759_ = v_r_4764_;
goto _start;
}
}
}
else
{
lean_object* v___x_4769_; 
v___x_4769_ = lean_box(0);
return v___x_4769_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg___boxed(lean_object* v_t_4770_, lean_object* v_k_4771_){
_start:
{
lean_object* v_res_4772_; 
v_res_4772_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_t_4770_, v_k_4771_);
lean_dec(v_k_4771_);
lean_dec(v_t_4770_);
return v_res_4772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_insert___redArg(lean_object* v_map_4773_, lean_object* v_k_4774_, lean_object* v_v_4775_){
_start:
{
lean_object* v___x_4776_; 
v___x_4776_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_map_4773_, v_k_4774_);
if (lean_obj_tag(v___x_4776_) == 0)
{
lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; 
v___x_4777_ = lean_box(0);
v___x_4778_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4778_, 0, v_v_4775_);
lean_ctor_set(v___x_4778_, 1, v___x_4777_);
v___x_4779_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(v_k_4774_, v___x_4778_, v_map_4773_);
return v___x_4779_;
}
else
{
lean_object* v_val_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; 
v_val_4780_ = lean_ctor_get(v___x_4776_, 0);
lean_inc(v_val_4780_);
lean_dec_ref_known(v___x_4776_, 1);
v___x_4781_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4781_, 0, v_v_4775_);
lean_ctor_set(v___x_4781_, 1, v_val_4780_);
v___x_4782_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(v_k_4774_, v___x_4781_, v_map_4773_);
return v___x_4782_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_insert(lean_object* v_00_u03b1_4783_, lean_object* v_map_4784_, lean_object* v_k_4785_, lean_object* v_v_4786_){
_start:
{
lean_object* v___x_4787_; 
v___x_4787_ = l_Lean_Parser_TokenMap_insert___redArg(v_map_4784_, v_k_4785_, v_v_4786_);
return v___x_4787_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0(lean_object* v_00_u03b4_4788_, lean_object* v_t_4789_, lean_object* v_k_4790_){
_start:
{
lean_object* v___x_4791_; 
v___x_4791_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_t_4789_, v_k_4790_);
return v___x_4791_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___boxed(lean_object* v_00_u03b4_4792_, lean_object* v_t_4793_, lean_object* v_k_4794_){
_start:
{
lean_object* v_res_4795_; 
v_res_4795_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0(v_00_u03b4_4792_, v_t_4793_, v_k_4794_);
lean_dec(v_k_4794_);
lean_dec(v_t_4793_);
return v_res_4795_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1(lean_object* v_00_u03b2_4796_, lean_object* v_k_4797_, lean_object* v_v_4798_, lean_object* v_t_4799_, lean_object* v_hl_4800_){
_start:
{
lean_object* v___x_4801_; 
v___x_4801_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(v_k_4797_, v_v_4798_, v_t_4799_);
return v___x_4801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instInhabited___redArg(){
_start:
{
lean_object* v___x_4803_; 
v___x_4803_ = lean_box(1);
return v___x_4803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instInhabited___redArg___boxed(lean_object* v___dummy_4804_){
_start:
{
lean_object* v_res_4805_; 
v_res_4805_ = l_Lean_Parser_TokenMap_instInhabited___redArg();
return v_res_4805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instInhabited(lean_object* v_00_u03b1_4806_){
_start:
{
lean_object* v___x_4807_; 
v___x_4807_ = lean_box(1);
return v___x_4807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instEmptyCollection___redArg(){
_start:
{
lean_object* v___x_4809_; 
v___x_4809_ = lean_box(1);
return v___x_4809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instEmptyCollection___redArg___boxed(lean_object* v___dummy_4810_){
_start:
{
lean_object* v_res_4811_; 
v_res_4811_ = l_Lean_Parser_TokenMap_instEmptyCollection___redArg();
return v_res_4811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instEmptyCollection(lean_object* v_00_u03b1_4812_){
_start:
{
lean_object* v___x_4813_; 
v___x_4813_ = lean_box(1);
return v___x_4813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__0(lean_object* v_f_4814_, lean_object* v_a_4815_, lean_object* v_b_4816_, lean_object* v_c_4817_){
_start:
{
lean_object* v___x_4818_; lean_object* v___x_4819_; 
v___x_4818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4818_, 0, v_a_4815_);
lean_ctor_set(v___x_4818_, 1, v_b_4816_);
v___x_4819_ = lean_apply_2(v_f_4814_, v___x_4818_, v_c_4817_);
return v___x_4819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__1(lean_object* v_toPure_4820_, lean_object* v_____do__lift_4821_){
_start:
{
lean_object* v_a_4822_; lean_object* v___x_4823_; 
v_a_4822_ = lean_ctor_get(v_____do__lift_4821_, 0);
lean_inc(v_a_4822_);
lean_dec_ref(v_____do__lift_4821_);
v___x_4823_ = lean_apply_2(v_toPure_4820_, lean_box(0), v_a_4822_);
return v___x_4823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg(lean_object* v_inst_4824_, lean_object* v_m_4825_, lean_object* v_init_4826_, lean_object* v_f_4827_){
_start:
{
lean_object* v_toApplicative_4828_; lean_object* v_toBind_4829_; lean_object* v_toPure_4830_; lean_object* v___f_4831_; lean_object* v___x_4832_; lean_object* v___f_4833_; lean_object* v___x_4834_; 
v_toApplicative_4828_ = lean_ctor_get(v_inst_4824_, 0);
v_toBind_4829_ = lean_ctor_get(v_inst_4824_, 1);
lean_inc(v_toBind_4829_);
v_toPure_4830_ = lean_ctor_get(v_toApplicative_4828_, 1);
lean_inc(v_toPure_4830_);
v___f_4831_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_4831_, 0, v_f_4827_);
v___x_4832_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_4824_, v___f_4831_, v_init_4826_, v_m_4825_);
v___f_4833_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_4833_, 0, v_toPure_4830_);
v___x_4834_ = lean_apply_4(v_toBind_4829_, lean_box(0), lean_box(0), v___x_4832_, v___f_4833_);
return v___x_4834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1(lean_object* v_m_4835_, lean_object* v_00_u03b1_4836_, lean_object* v_inst_4837_, lean_object* v_00_u03b2_4838_, lean_object* v_m_4839_, lean_object* v_init_4840_, lean_object* v_f_4841_){
_start:
{
lean_object* v_toApplicative_4842_; lean_object* v_toBind_4843_; lean_object* v_toPure_4844_; lean_object* v___f_4845_; lean_object* v___x_4846_; lean_object* v___f_4847_; lean_object* v___x_4848_; 
v_toApplicative_4842_ = lean_ctor_get(v_inst_4837_, 0);
v_toBind_4843_ = lean_ctor_get(v_inst_4837_, 1);
lean_inc(v_toBind_4843_);
v_toPure_4844_ = lean_ctor_get(v_toApplicative_4842_, 1);
lean_inc(v_toPure_4844_);
v___f_4845_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_4845_, 0, v_f_4841_);
v___x_4846_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_4837_, v___f_4845_, v_init_4840_, v_m_4839_);
v___f_4847_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_4847_, 0, v_toPure_4844_);
v___x_4848_ = lean_apply_4(v_toBind_4843_, lean_box(0), lean_box(0), v___x_4846_, v___f_4847_);
return v___x_4848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___redArg(lean_object* v_inst_4849_){
_start:
{
lean_object* v___x_4850_; 
v___x_4850_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1), 7, 3);
lean_closure_set(v___x_4850_, 0, lean_box(0));
lean_closure_set(v___x_4850_, 1, lean_box(0));
lean_closure_set(v___x_4850_, 2, v_inst_4849_);
return v___x_4850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad(lean_object* v_m_4851_, lean_object* v_00_u03b1_4852_, lean_object* v_inst_4853_){
_start:
{
lean_object* v___x_4854_; 
v___x_4854_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1), 7, 3);
lean_closure_set(v___x_4854_, 0, lean_box(0));
lean_closure_set(v___x_4854_, 1, lean_box(0));
lean_closure_set(v___x_4854_, 2, v_inst_4853_);
return v___x_4854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorIdx___impl(uint8_t v_x_4859_){
_start:
{
lean_object* v___x_4860_; lean_object* v___x_4861_; 
v___x_4860_ = lean_box(v_x_4859_);
v___x_4861_ = lean_obj_tag_nat(v___x_4860_);
lean_dec(v___x_4860_);
return v___x_4861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorIdx___impl___boxed(lean_object* v_x_4862_){
_start:
{
uint8_t v_x_4__boxed_4863_; lean_object* v_res_4864_; 
v_x_4__boxed_4863_ = lean_unbox(v_x_4862_);
v_res_4864_ = l_Lean_Parser_LeadingIdentBehavior_ctorIdx___impl(v_x_4__boxed_4863_);
return v_res_4864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim___redArg(lean_object* v_k_4865_){
_start:
{
lean_inc(v_k_4865_);
return v_k_4865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim___redArg___boxed(lean_object* v_k_4866_){
_start:
{
lean_object* v_res_4867_; 
v_res_4867_ = l_Lean_Parser_LeadingIdentBehavior_ctorElim___redArg(v_k_4866_);
lean_dec(v_k_4866_);
return v_res_4867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim(lean_object* v_motive_4868_, lean_object* v_ctorIdx_4869_, uint8_t v_t_4870_, lean_object* v_h_4871_, lean_object* v_k_4872_){
_start:
{
lean_inc(v_k_4872_);
return v_k_4872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim___boxed(lean_object* v_motive_4873_, lean_object* v_ctorIdx_4874_, lean_object* v_t_4875_, lean_object* v_h_4876_, lean_object* v_k_4877_){
_start:
{
uint8_t v_t_boxed_4878_; lean_object* v_res_4879_; 
v_t_boxed_4878_ = lean_unbox(v_t_4875_);
v_res_4879_ = l_Lean_Parser_LeadingIdentBehavior_ctorElim(v_motive_4873_, v_ctorIdx_4874_, v_t_boxed_4878_, v_h_4876_, v_k_4877_);
lean_dec(v_k_4877_);
lean_dec(v_ctorIdx_4874_);
return v_res_4879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim___redArg(lean_object* v_default_4880_){
_start:
{
lean_inc(v_default_4880_);
return v_default_4880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim___redArg___boxed(lean_object* v_default_4881_){
_start:
{
lean_object* v_res_4882_; 
v_res_4882_ = l_Lean_Parser_LeadingIdentBehavior_default_elim___redArg(v_default_4881_);
lean_dec(v_default_4881_);
return v_res_4882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim(lean_object* v_motive_4883_, uint8_t v_t_4884_, lean_object* v_h_4885_, lean_object* v_default_4886_){
_start:
{
lean_inc(v_default_4886_);
return v_default_4886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim___boxed(lean_object* v_motive_4887_, lean_object* v_t_4888_, lean_object* v_h_4889_, lean_object* v_default_4890_){
_start:
{
uint8_t v_t_boxed_4891_; lean_object* v_res_4892_; 
v_t_boxed_4891_ = lean_unbox(v_t_4888_);
v_res_4892_ = l_Lean_Parser_LeadingIdentBehavior_default_elim(v_motive_4887_, v_t_boxed_4891_, v_h_4889_, v_default_4890_);
lean_dec(v_default_4890_);
return v_res_4892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim___redArg(lean_object* v_symbol_4893_){
_start:
{
lean_inc(v_symbol_4893_);
return v_symbol_4893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim___redArg___boxed(lean_object* v_symbol_4894_){
_start:
{
lean_object* v_res_4895_; 
v_res_4895_ = l_Lean_Parser_LeadingIdentBehavior_symbol_elim___redArg(v_symbol_4894_);
lean_dec(v_symbol_4894_);
return v_res_4895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim(lean_object* v_motive_4896_, uint8_t v_t_4897_, lean_object* v_h_4898_, lean_object* v_symbol_4899_){
_start:
{
lean_inc(v_symbol_4899_);
return v_symbol_4899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim___boxed(lean_object* v_motive_4900_, lean_object* v_t_4901_, lean_object* v_h_4902_, lean_object* v_symbol_4903_){
_start:
{
uint8_t v_t_boxed_4904_; lean_object* v_res_4905_; 
v_t_boxed_4904_ = lean_unbox(v_t_4901_);
v_res_4905_ = l_Lean_Parser_LeadingIdentBehavior_symbol_elim(v_motive_4900_, v_t_boxed_4904_, v_h_4902_, v_symbol_4903_);
lean_dec(v_symbol_4903_);
return v_res_4905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim___redArg(lean_object* v_both_4906_){
_start:
{
lean_inc(v_both_4906_);
return v_both_4906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim___redArg___boxed(lean_object* v_both_4907_){
_start:
{
lean_object* v_res_4908_; 
v_res_4908_ = l_Lean_Parser_LeadingIdentBehavior_both_elim___redArg(v_both_4907_);
lean_dec(v_both_4907_);
return v_res_4908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim(lean_object* v_motive_4909_, uint8_t v_t_4910_, lean_object* v_h_4911_, lean_object* v_both_4912_){
_start:
{
lean_inc(v_both_4912_);
return v_both_4912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim___boxed(lean_object* v_motive_4913_, lean_object* v_t_4914_, lean_object* v_h_4915_, lean_object* v_both_4916_){
_start:
{
uint8_t v_t_boxed_4917_; lean_object* v_res_4918_; 
v_t_boxed_4917_ = lean_unbox(v_t_4914_);
v_res_4918_ = l_Lean_Parser_LeadingIdentBehavior_both_elim(v_motive_4913_, v_t_boxed_4917_, v_h_4915_, v_both_4916_);
lean_dec(v_both_4916_);
return v_res_4918_;
}
}
static uint8_t _init_l_Lean_Parser_instInhabitedLeadingIdentBehavior_default(void){
_start:
{
uint8_t v___x_4919_; 
v___x_4919_ = 0;
return v___x_4919_;
}
}
static uint8_t _init_l_Lean_Parser_instInhabitedLeadingIdentBehavior(void){
_start:
{
uint8_t v___x_4920_; 
v___x_4920_ = 0;
return v___x_4920_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqLeadingIdentBehavior_beq(uint8_t v_x_4921_, uint8_t v_y_4922_){
_start:
{
lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; uint8_t v___x_4927_; 
v___x_4923_ = lean_box(v_x_4921_);
v___x_4924_ = lean_obj_tag_nat(v___x_4923_);
lean_dec(v___x_4923_);
v___x_4925_ = lean_box(v_y_4922_);
v___x_4926_ = lean_obj_tag_nat(v___x_4925_);
lean_dec(v___x_4925_);
v___x_4927_ = lean_nat_dec_eq(v___x_4924_, v___x_4926_);
return v___x_4927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqLeadingIdentBehavior_beq___boxed(lean_object* v_x_4928_, lean_object* v_y_4929_){
_start:
{
uint8_t v_x_24__boxed_4930_; uint8_t v_y_25__boxed_4931_; uint8_t v_res_4932_; lean_object* v_r_4933_; 
v_x_24__boxed_4930_ = lean_unbox(v_x_4928_);
v_y_25__boxed_4931_ = lean_unbox(v_y_4929_);
v_res_4932_ = l_Lean_Parser_instBEqLeadingIdentBehavior_beq(v_x_24__boxed_4930_, v_y_25__boxed_4931_);
v_r_4933_ = lean_box(v_res_4932_);
return v_r_4933_;
}
}
static lean_object* _init_l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6(void){
_start:
{
lean_object* v___x_4945_; lean_object* v___x_4946_; 
v___x_4945_ = lean_unsigned_to_nat(2u);
v___x_4946_ = lean_nat_to_int(v___x_4945_);
return v___x_4946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr(uint8_t v_x_4947_, lean_object* v_prec_4948_){
_start:
{
lean_object* v___y_4950_; lean_object* v___y_4957_; lean_object* v___y_4964_; 
switch(v_x_4947_)
{
case 0:
{
lean_object* v___x_4970_; uint8_t v___x_4971_; 
v___x_4970_ = lean_unsigned_to_nat(1024u);
v___x_4971_ = lean_nat_dec_le(v___x_4970_, v_prec_4948_);
if (v___x_4971_ == 0)
{
lean_object* v___x_4972_; 
v___x_4972_ = lean_obj_once(&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6, &l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6_once, _init_l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6);
v___y_4950_ = v___x_4972_;
goto v___jp_4949_;
}
else
{
lean_object* v___x_4973_; 
v___x_4973_ = lean_obj_once(&l_Lean_Parser_incQuotDepth___closed__0, &l_Lean_Parser_incQuotDepth___closed__0_once, _init_l_Lean_Parser_incQuotDepth___closed__0);
v___y_4950_ = v___x_4973_;
goto v___jp_4949_;
}
}
case 1:
{
lean_object* v___x_4974_; uint8_t v___x_4975_; 
v___x_4974_ = lean_unsigned_to_nat(1024u);
v___x_4975_ = lean_nat_dec_le(v___x_4974_, v_prec_4948_);
if (v___x_4975_ == 0)
{
lean_object* v___x_4976_; 
v___x_4976_ = lean_obj_once(&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6, &l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6_once, _init_l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6);
v___y_4957_ = v___x_4976_;
goto v___jp_4956_;
}
else
{
lean_object* v___x_4977_; 
v___x_4977_ = lean_obj_once(&l_Lean_Parser_incQuotDepth___closed__0, &l_Lean_Parser_incQuotDepth___closed__0_once, _init_l_Lean_Parser_incQuotDepth___closed__0);
v___y_4957_ = v___x_4977_;
goto v___jp_4956_;
}
}
default: 
{
lean_object* v___x_4978_; uint8_t v___x_4979_; 
v___x_4978_ = lean_unsigned_to_nat(1024u);
v___x_4979_ = lean_nat_dec_le(v___x_4978_, v_prec_4948_);
if (v___x_4979_ == 0)
{
lean_object* v___x_4980_; 
v___x_4980_ = lean_obj_once(&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6, &l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6_once, _init_l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6);
v___y_4964_ = v___x_4980_;
goto v___jp_4963_;
}
else
{
lean_object* v___x_4981_; 
v___x_4981_ = lean_obj_once(&l_Lean_Parser_incQuotDepth___closed__0, &l_Lean_Parser_incQuotDepth___closed__0_once, _init_l_Lean_Parser_incQuotDepth___closed__0);
v___y_4964_ = v___x_4981_;
goto v___jp_4963_;
}
}
}
v___jp_4949_:
{
lean_object* v___x_4951_; lean_object* v___x_4952_; uint8_t v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; 
v___x_4951_ = ((lean_object*)(l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__1));
lean_inc(v___y_4950_);
v___x_4952_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4952_, 0, v___y_4950_);
lean_ctor_set(v___x_4952_, 1, v___x_4951_);
v___x_4953_ = 0;
v___x_4954_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4954_, 0, v___x_4952_);
lean_ctor_set_uint8(v___x_4954_, sizeof(void*)*1, v___x_4953_);
v___x_4955_ = l_Repr_addAppParen(v___x_4954_, v_prec_4948_);
return v___x_4955_;
}
v___jp_4956_:
{
lean_object* v___x_4958_; lean_object* v___x_4959_; uint8_t v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; 
v___x_4958_ = ((lean_object*)(l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__3));
lean_inc(v___y_4957_);
v___x_4959_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4959_, 0, v___y_4957_);
lean_ctor_set(v___x_4959_, 1, v___x_4958_);
v___x_4960_ = 0;
v___x_4961_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4961_, 0, v___x_4959_);
lean_ctor_set_uint8(v___x_4961_, sizeof(void*)*1, v___x_4960_);
v___x_4962_ = l_Repr_addAppParen(v___x_4961_, v_prec_4948_);
return v___x_4962_;
}
v___jp_4963_:
{
lean_object* v___x_4965_; lean_object* v___x_4966_; uint8_t v___x_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; 
v___x_4965_ = ((lean_object*)(l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__5));
lean_inc(v___y_4964_);
v___x_4966_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4966_, 0, v___y_4964_);
lean_ctor_set(v___x_4966_, 1, v___x_4965_);
v___x_4967_ = 0;
v___x_4968_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4968_, 0, v___x_4966_);
lean_ctor_set_uint8(v___x_4968_, sizeof(void*)*1, v___x_4967_);
v___x_4969_ = l_Repr_addAppParen(v___x_4968_, v_prec_4948_);
return v___x_4969_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___boxed(lean_object* v_x_4982_, lean_object* v_prec_4983_){
_start:
{
uint8_t v_x_169__boxed_4984_; lean_object* v_res_4985_; 
v_x_169__boxed_4984_ = lean_unbox(v_x_4982_);
v_res_4985_ = l_Lean_Parser_instReprLeadingIdentBehavior_repr(v_x_169__boxed_4984_, v_prec_4983_);
lean_dec(v_prec_4983_);
return v_res_4985_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__0(void){
_start:
{
lean_object* v___x_4988_; 
v___x_4988_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_4988_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__1(void){
_start:
{
lean_object* v___x_4989_; lean_object* v___x_4990_; 
v___x_4989_ = lean_obj_once(&l_Lean_Parser_instInhabitedParserCategory_default___closed__0, &l_Lean_Parser_instInhabitedParserCategory_default___closed__0_once, _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__0);
v___x_4990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4990_, 0, v___x_4989_);
return v___x_4990_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__2(void){
_start:
{
uint8_t v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; 
v___x_4991_ = 0;
v___x_4992_ = ((lean_object*)(l_Lean_Parser_instInhabitedPrattParsingTables___closed__0));
v___x_4993_ = lean_obj_once(&l_Lean_Parser_instInhabitedParserCategory_default___closed__1, &l_Lean_Parser_instInhabitedParserCategory_default___closed__1_once, _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__1);
v___x_4994_ = lean_box(0);
v___x_4995_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_4995_, 0, v___x_4994_);
lean_ctor_set(v___x_4995_, 1, v___x_4993_);
lean_ctor_set(v___x_4995_, 2, v___x_4992_);
lean_ctor_set_uint8(v___x_4995_, sizeof(void*)*3, v___x_4991_);
return v___x_4995_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedParserCategory_default(void){
_start:
{
lean_object* v___x_4996_; 
v___x_4996_ = lean_obj_once(&l_Lean_Parser_instInhabitedParserCategory_default___closed__2, &l_Lean_Parser_instInhabitedParserCategory_default___closed__2_once, _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__2);
return v___x_4996_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedParserCategory(void){
_start:
{
lean_object* v___x_4997_; 
v___x_4997_ = l_Lean_Parser_instInhabitedParserCategory_default;
return v___x_4997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_indexed___redArg(lean_object* v_map_4998_, lean_object* v_c_4999_, lean_object* v_s_5000_, uint8_t v_behavior_5001_){
_start:
{
lean_object* v___x_5002_; lean_object* v_fst_5003_; lean_object* v_snd_5004_; lean_object* v___x_5006_; uint8_t v_isShared_5007_; uint8_t v_isSharedCheck_5046_; 
v___x_5002_ = l_Lean_Parser_peekToken(v_c_4999_, v_s_5000_);
v_fst_5003_ = lean_ctor_get(v___x_5002_, 0);
v_snd_5004_ = lean_ctor_get(v___x_5002_, 1);
v_isSharedCheck_5046_ = !lean_is_exclusive(v___x_5002_);
if (v_isSharedCheck_5046_ == 0)
{
v___x_5006_ = v___x_5002_;
v_isShared_5007_ = v_isSharedCheck_5046_;
goto v_resetjp_5005_;
}
else
{
lean_inc(v_snd_5004_);
lean_inc(v_fst_5003_);
lean_dec(v___x_5002_);
v___x_5006_ = lean_box(0);
v_isShared_5007_ = v_isSharedCheck_5046_;
goto v_resetjp_5005_;
}
v_resetjp_5005_:
{
lean_object* v_n_5009_; 
if (lean_obj_tag(v_snd_5004_) == 0)
{
lean_object* v_a_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; 
lean_del_object(v___x_5006_);
lean_dec(v_fst_5003_);
v_a_5021_ = lean_ctor_get(v_snd_5004_, 0);
lean_inc(v_a_5021_);
lean_dec_ref_known(v_snd_5004_, 1);
v___x_5022_ = lean_box(0);
v___x_5023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5023_, 0, v_a_5021_);
lean_ctor_set(v___x_5023_, 1, v___x_5022_);
return v___x_5023_;
}
else
{
lean_object* v_a_5024_; 
v_a_5024_ = lean_ctor_get(v_snd_5004_, 0);
lean_inc(v_a_5024_);
lean_dec_ref_known(v_snd_5004_, 1);
switch(lean_obj_tag(v_a_5024_))
{
case 2:
{
lean_object* v_val_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; 
v_val_5025_ = lean_ctor_get(v_a_5024_, 1);
lean_inc_ref(v_val_5025_);
lean_dec_ref_known(v_a_5024_, 2);
v___x_5026_ = lean_box(0);
v___x_5027_ = l_Lean_Name_str___override(v___x_5026_, v_val_5025_);
v_n_5009_ = v___x_5027_;
goto v___jp_5008_;
}
case 3:
{
switch(v_behavior_5001_)
{
case 0:
{
lean_dec_ref_known(v_a_5024_, 4);
goto v___jp_5019_;
}
case 1:
{
lean_object* v_val_5028_; lean_object* v___x_5029_; 
v_val_5028_ = lean_ctor_get(v_a_5024_, 2);
lean_inc(v_val_5028_);
lean_dec_ref_known(v_a_5024_, 4);
v___x_5029_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_map_4998_, v_val_5028_);
lean_dec(v_val_5028_);
if (lean_obj_tag(v___x_5029_) == 0)
{
goto v___jp_5019_;
}
else
{
lean_object* v_val_5030_; lean_object* v___x_5031_; 
lean_del_object(v___x_5006_);
v_val_5030_ = lean_ctor_get(v___x_5029_, 0);
lean_inc(v_val_5030_);
lean_dec_ref_known(v___x_5029_, 1);
v___x_5031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5031_, 0, v_fst_5003_);
lean_ctor_set(v___x_5031_, 1, v_val_5030_);
return v___x_5031_;
}
}
default: 
{
lean_object* v_val_5032_; lean_object* v___x_5033_; 
v_val_5032_ = lean_ctor_get(v_a_5024_, 2);
lean_inc(v_val_5032_);
lean_dec_ref_known(v_a_5024_, 4);
v___x_5033_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_map_4998_, v_val_5032_);
if (lean_obj_tag(v___x_5033_) == 0)
{
lean_dec(v_val_5032_);
goto v___jp_5019_;
}
else
{
lean_object* v_val_5034_; lean_object* v___x_5035_; uint8_t v___x_5036_; 
lean_del_object(v___x_5006_);
v_val_5034_ = lean_ctor_get(v___x_5033_, 0);
lean_inc(v_val_5034_);
lean_dec_ref_known(v___x_5033_, 1);
v___x_5035_ = ((lean_object*)(l_Lean_Parser_identFn___closed__0));
v___x_5036_ = lean_name_eq(v_val_5032_, v___x_5035_);
lean_dec(v_val_5032_);
if (v___x_5036_ == 0)
{
lean_object* v___x_5037_; 
v___x_5037_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_map_4998_, v___x_5035_);
if (lean_obj_tag(v___x_5037_) == 1)
{
lean_object* v_val_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; 
v_val_5038_ = lean_ctor_get(v___x_5037_, 0);
lean_inc(v_val_5038_);
lean_dec_ref_known(v___x_5037_, 1);
v___x_5039_ = l_List_appendTR___redArg(v_val_5034_, v_val_5038_);
v___x_5040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5040_, 0, v_fst_5003_);
lean_ctor_set(v___x_5040_, 1, v___x_5039_);
return v___x_5040_;
}
else
{
lean_object* v___x_5041_; 
lean_dec(v___x_5037_);
v___x_5041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5041_, 0, v_fst_5003_);
lean_ctor_set(v___x_5041_, 1, v_val_5034_);
return v___x_5041_;
}
}
else
{
lean_object* v___x_5042_; 
v___x_5042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5042_, 0, v_fst_5003_);
lean_ctor_set(v___x_5042_, 1, v_val_5034_);
return v___x_5042_;
}
}
}
}
}
case 1:
{
lean_object* v_kind_5043_; 
v_kind_5043_ = lean_ctor_get(v_a_5024_, 1);
lean_inc(v_kind_5043_);
lean_dec_ref_known(v_a_5024_, 3);
v_n_5009_ = v_kind_5043_;
goto v___jp_5008_;
}
default: 
{
lean_object* v___x_5044_; lean_object* v___x_5045_; 
lean_dec(v_a_5024_);
lean_del_object(v___x_5006_);
v___x_5044_ = lean_box(0);
v___x_5045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5045_, 0, v_fst_5003_);
lean_ctor_set(v___x_5045_, 1, v___x_5044_);
return v___x_5045_;
}
}
}
v___jp_5008_:
{
lean_object* v___x_5010_; 
v___x_5010_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_map_4998_, v_n_5009_);
lean_dec(v_n_5009_);
if (lean_obj_tag(v___x_5010_) == 1)
{
lean_object* v_val_5011_; lean_object* v___x_5013_; 
v_val_5011_ = lean_ctor_get(v___x_5010_, 0);
lean_inc(v_val_5011_);
lean_dec_ref_known(v___x_5010_, 1);
if (v_isShared_5007_ == 0)
{
lean_ctor_set(v___x_5006_, 1, v_val_5011_);
v___x_5013_ = v___x_5006_;
goto v_reusejp_5012_;
}
else
{
lean_object* v_reuseFailAlloc_5014_; 
v_reuseFailAlloc_5014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5014_, 0, v_fst_5003_);
lean_ctor_set(v_reuseFailAlloc_5014_, 1, v_val_5011_);
v___x_5013_ = v_reuseFailAlloc_5014_;
goto v_reusejp_5012_;
}
v_reusejp_5012_:
{
return v___x_5013_;
}
}
else
{
lean_object* v___x_5015_; lean_object* v___x_5017_; 
lean_dec(v___x_5010_);
v___x_5015_ = lean_box(0);
if (v_isShared_5007_ == 0)
{
lean_ctor_set(v___x_5006_, 1, v___x_5015_);
v___x_5017_ = v___x_5006_;
goto v_reusejp_5016_;
}
else
{
lean_object* v_reuseFailAlloc_5018_; 
v_reuseFailAlloc_5018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5018_, 0, v_fst_5003_);
lean_ctor_set(v_reuseFailAlloc_5018_, 1, v___x_5015_);
v___x_5017_ = v_reuseFailAlloc_5018_;
goto v_reusejp_5016_;
}
v_reusejp_5016_:
{
return v___x_5017_;
}
}
}
v___jp_5019_:
{
lean_object* v___x_5020_; 
v___x_5020_ = ((lean_object*)(l_Lean_Parser_identFn___closed__0));
v_n_5009_ = v___x_5020_;
goto v___jp_5008_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_indexed___redArg___boxed(lean_object* v_map_5047_, lean_object* v_c_5048_, lean_object* v_s_5049_, lean_object* v_behavior_5050_){
_start:
{
uint8_t v_behavior_boxed_5051_; lean_object* v_res_5052_; 
v_behavior_boxed_5051_ = lean_unbox(v_behavior_5050_);
v_res_5052_ = l_Lean_Parser_indexed___redArg(v_map_5047_, v_c_5048_, v_s_5049_, v_behavior_boxed_5051_);
lean_dec(v_map_5047_);
return v_res_5052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_indexed(lean_object* v_00_u03b1_5053_, lean_object* v_map_5054_, lean_object* v_c_5055_, lean_object* v_s_5056_, uint8_t v_behavior_5057_){
_start:
{
lean_object* v___x_5058_; 
v___x_5058_ = l_Lean_Parser_indexed___redArg(v_map_5054_, v_c_5055_, v_s_5056_, v_behavior_5057_);
return v___x_5058_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_indexed___boxed(lean_object* v_00_u03b1_5059_, lean_object* v_map_5060_, lean_object* v_c_5061_, lean_object* v_s_5062_, lean_object* v_behavior_5063_){
_start:
{
uint8_t v_behavior_boxed_5064_; lean_object* v_res_5065_; 
v_behavior_boxed_5064_ = lean_unbox(v_behavior_5063_);
v_res_5065_ = l_Lean_Parser_indexed(v_00_u03b1_5059_, v_map_5060_, v_c_5061_, v_s_5062_, v_behavior_boxed_5064_);
lean_dec(v_map_5060_);
return v_res_5065_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_(lean_object* v_x_5066_, lean_object* v___y_5067_, lean_object* v___y_5068_){
_start:
{
lean_object* v___x_5069_; 
v___x_5069_ = l_Lean_Parser_whitespace(v___y_5067_, v___y_5068_);
return v___x_5069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2____boxed(lean_object* v_x_5070_, lean_object* v___y_5071_, lean_object* v___y_5072_){
_start:
{
lean_object* v_res_5073_; 
v_res_5073_ = l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_(v_x_5070_, v___y_5071_, v___y_5072_);
lean_dec(v_x_5070_);
return v_res_5073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; 
v___f_5076_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_));
v___x_5077_ = lean_st_mk_ref(v___f_5076_);
v___x_5078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5078_, 0, v___x_5077_);
return v___x_5078_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2____boxed(lean_object* v_a_5079_){
_start:
{
lean_object* v_res_5080_; 
v_res_5080_ = l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_();
return v_res_5080_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_(lean_object* v___x_5081_){
_start:
{
lean_object* v___x_5083_; lean_object* v___x_5084_; 
v___x_5083_ = lean_st_ref_get(v___x_5081_);
v___x_5084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5084_, 0, v___x_5083_);
return v___x_5084_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2____boxed(lean_object* v___x_5085_, lean_object* v___y_5086_){
_start:
{
lean_object* v_res_5087_; 
v_res_5087_ = l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_(v___x_5085_);
lean_dec(v___x_5085_);
return v_res_5087_;
}
}
static lean_object* _init_l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5088_; lean_object* v___f_5089_; 
v___x_5088_ = l_Lean_Parser_categoryParserFnRef;
v___f_5089_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_5089_, 0, v___x_5088_);
return v___f_5089_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; uint8_t v___x_5100_; lean_object* v___x_5101_; 
v___f_5096_ = lean_obj_once(&l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_, &l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_);
v___x_5097_ = lean_box(0);
v___x_5098_ = lean_box(2);
v___x_5099_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_));
v___x_5100_ = 0;
v___x_5101_ = l_Lean_registerEnvExtension___redArg(v___f_5096_, v___x_5097_, v___x_5098_, v___x_5099_, v___x_5100_, v___x_5100_);
return v___x_5101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2____boxed(lean_object* v_a_5102_){
_start:
{
lean_object* v_res_5103_; 
v_res_5103_ = l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_();
return v_res_5103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFn___lam__0(lean_object* v_a_5104_, lean_object* v___y_5105_, lean_object* v___y_5106_){
_start:
{
lean_object* v___x_5107_; 
v___x_5107_ = l_Lean_Parser_instInhabitedParserFn___lam__0(v___y_5105_, v___y_5106_);
return v___x_5107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFn___lam__0___boxed(lean_object* v_a_5108_, lean_object* v___y_5109_, lean_object* v___y_5110_){
_start:
{
lean_object* v_res_5111_; 
v_res_5111_ = l_Lean_Parser_categoryParserFn___lam__0(v_a_5108_, v___y_5109_, v___y_5110_);
lean_dec_ref(v___y_5110_);
lean_dec_ref(v___y_5109_);
lean_dec(v_a_5108_);
return v_res_5111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFn(lean_object* v_catName_5115_, lean_object* v_ctx_5116_, lean_object* v_s_5117_){
_start:
{
lean_object* v_toParserModuleContext_5118_; lean_object* v_env_5119_; lean_object* v___x_5120_; lean_object* v_asyncMode_5121_; lean_object* v___f_5122_; lean_object* v___x_5123_; uint8_t v___x_5124_; lean_object* v___x_21__overap_5125_; lean_object* v___x_5126_; 
v_toParserModuleContext_5118_ = lean_ctor_get(v_ctx_5116_, 1);
v_env_5119_ = lean_ctor_get(v_toParserModuleContext_5118_, 0);
v___x_5120_ = l_Lean_Parser_categoryParserFnExtension;
v_asyncMode_5121_ = lean_ctor_get(v___x_5120_, 2);
v___f_5122_ = ((lean_object*)(l_Lean_Parser_categoryParserFn___closed__1));
v___x_5123_ = lean_box(0);
v___x_5124_ = 0;
lean_inc_ref(v_env_5119_);
v___x_21__overap_5125_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___f_5122_, v___x_5120_, v_env_5119_, v_asyncMode_5121_, v___x_5123_, v___x_5124_);
v___x_5126_ = lean_apply_3(v___x_21__overap_5125_, v_catName_5115_, v_ctx_5116_, v_s_5117_);
return v___x_5126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParser___lam__0(lean_object* v_prec_5127_, lean_object* v_x_5128_){
_start:
{
lean_object* v_quotDepth_5129_; uint8_t v_suppressInsideQuot_5130_; lean_object* v_savedPos_x3f_5131_; lean_object* v_forbiddenTks_5132_; lean_object* v___x_5134_; uint8_t v_isShared_5135_; uint8_t v_isSharedCheck_5139_; 
v_quotDepth_5129_ = lean_ctor_get(v_x_5128_, 1);
v_suppressInsideQuot_5130_ = lean_ctor_get_uint8(v_x_5128_, sizeof(void*)*4);
v_savedPos_x3f_5131_ = lean_ctor_get(v_x_5128_, 2);
v_forbiddenTks_5132_ = lean_ctor_get(v_x_5128_, 3);
v_isSharedCheck_5139_ = !lean_is_exclusive(v_x_5128_);
if (v_isSharedCheck_5139_ == 0)
{
lean_object* v_unused_5140_; 
v_unused_5140_ = lean_ctor_get(v_x_5128_, 0);
lean_dec(v_unused_5140_);
v___x_5134_ = v_x_5128_;
v_isShared_5135_ = v_isSharedCheck_5139_;
goto v_resetjp_5133_;
}
else
{
lean_inc(v_forbiddenTks_5132_);
lean_inc(v_savedPos_x3f_5131_);
lean_inc(v_quotDepth_5129_);
lean_dec(v_x_5128_);
v___x_5134_ = lean_box(0);
v_isShared_5135_ = v_isSharedCheck_5139_;
goto v_resetjp_5133_;
}
v_resetjp_5133_:
{
lean_object* v___x_5137_; 
if (v_isShared_5135_ == 0)
{
lean_ctor_set(v___x_5134_, 0, v_prec_5127_);
v___x_5137_ = v___x_5134_;
goto v_reusejp_5136_;
}
else
{
lean_object* v_reuseFailAlloc_5138_; 
v_reuseFailAlloc_5138_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_5138_, 0, v_prec_5127_);
lean_ctor_set(v_reuseFailAlloc_5138_, 1, v_quotDepth_5129_);
lean_ctor_set(v_reuseFailAlloc_5138_, 2, v_savedPos_x3f_5131_);
lean_ctor_set(v_reuseFailAlloc_5138_, 3, v_forbiddenTks_5132_);
lean_ctor_set_uint8(v_reuseFailAlloc_5138_, sizeof(void*)*4, v_suppressInsideQuot_5130_);
v___x_5137_ = v_reuseFailAlloc_5138_;
goto v_reusejp_5136_;
}
v_reusejp_5136_:
{
return v___x_5137_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParser(lean_object* v_catName_5141_, lean_object* v_prec_5142_){
_start:
{
lean_object* v___f_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v___x_5148_; 
v___f_5143_ = lean_alloc_closure((void*)(l_Lean_Parser_categoryParser___lam__0), 2, 1);
lean_closure_set(v___f_5143_, 0, v_prec_5142_);
v___x_5144_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
lean_inc(v_catName_5141_);
v___x_5145_ = lean_alloc_closure((void*)(l_Lean_Parser_categoryParserFn), 3, 1);
lean_closure_set(v___x_5145_, 0, v_catName_5141_);
v___x_5146_ = lean_alloc_closure((void*)(l_Lean_Parser_withCacheFn), 4, 2);
lean_closure_set(v___x_5146_, 0, v_catName_5141_);
lean_closure_set(v___x_5146_, 1, v___x_5145_);
v___x_5147_ = lean_alloc_closure((void*)(l_Lean_Parser_adaptCacheableContextFn), 4, 2);
lean_closure_set(v___x_5147_, 0, v___f_5143_);
lean_closure_set(v___x_5147_, 1, v___x_5146_);
v___x_5148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5148_, 0, v___x_5144_);
lean_ctor_set(v___x_5148_, 1, v___x_5147_);
return v___x_5148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_termParser(lean_object* v_prec_5152_){
_start:
{
lean_object* v___x_5153_; lean_object* v___x_5154_; 
v___x_5153_ = ((lean_object*)(l_Lean_Parser_termParser___closed__1));
v___x_5154_ = l_Lean_Parser_categoryParser(v___x_5153_, v_prec_5152_);
return v___x_5154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoImmediateColon___lam__0(lean_object* v_c_5156_, lean_object* v_s_5157_){
_start:
{
lean_object* v_stxStack_5158_; lean_object* v_pos_5159_; lean_object* v_prev_5160_; uint8_t v___x_5161_; 
v_stxStack_5158_ = lean_ctor_get(v_s_5157_, 0);
v_pos_5159_ = lean_ctor_get(v_s_5157_, 2);
v_prev_5160_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_5158_);
v___x_5161_ = l_Lean_Parser_checkTailNoWs(v_prev_5160_);
lean_dec(v_prev_5160_);
if (v___x_5161_ == 0)
{
return v_s_5157_;
}
else
{
lean_object* v_toInputContext_5162_; uint8_t v___x_5163_; 
v_toInputContext_5162_ = lean_ctor_get(v_c_5156_, 0);
v___x_5163_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_5162_, v_pos_5159_);
if (v___x_5163_ == 0)
{
lean_object* v_inputString_5164_; uint32_t v_curr_5165_; uint32_t v___x_5166_; uint8_t v___x_5167_; 
v_inputString_5164_ = lean_ctor_get(v_toInputContext_5162_, 0);
v_curr_5165_ = lean_string_utf8_get_fast(v_inputString_5164_, v_pos_5159_);
v___x_5166_ = 58;
v___x_5167_ = lean_uint32_dec_eq(v_curr_5165_, v___x_5166_);
if (v___x_5167_ == 0)
{
return v_s_5157_;
}
else
{
lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; 
v___x_5168_ = ((lean_object*)(l_Lean_Parser_checkNoImmediateColon___lam__0___closed__0));
v___x_5169_ = lean_box(0);
v___x_5170_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_5157_, v___x_5168_, v___x_5169_, v___x_5167_);
return v___x_5170_;
}
}
else
{
return v_s_5157_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoImmediateColon___lam__0___boxed(lean_object* v_c_5171_, lean_object* v_s_5172_){
_start:
{
lean_object* v_res_5173_; 
v_res_5173_ = l_Lean_Parser_checkNoImmediateColon___lam__0(v_c_5171_, v_s_5172_);
lean_dec_ref(v_c_5171_);
return v_res_5173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1(){
_start:
{
lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; 
v___x_5186_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1));
v___x_5187_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__2));
v___x_5188_ = l_Lean_addBuiltinDocString(v___x_5186_, v___x_5187_);
return v___x_5188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___boxed(lean_object* v_a_5189_){
_start:
{
lean_object* v_res_5190_; 
v_res_5190_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1();
return v_res_5190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpectedFn(lean_object* v_expected_5191_, lean_object* v_p_5192_, lean_object* v_c_5193_, lean_object* v_s_5194_){
_start:
{
lean_object* v___x_5195_; lean_object* v_errorMsg_5196_; 
v___x_5195_ = lean_apply_2(v_p_5192_, v_c_5193_, v_s_5194_);
v_errorMsg_5196_ = lean_ctor_get(v___x_5195_, 4);
lean_inc(v_errorMsg_5196_);
if (lean_obj_tag(v_errorMsg_5196_) == 1)
{
lean_object* v_val_5197_; lean_object* v___x_5199_; uint8_t v_isShared_5200_; uint8_t v_isSharedCheck_5227_; 
v_val_5197_ = lean_ctor_get(v_errorMsg_5196_, 0);
v_isSharedCheck_5227_ = !lean_is_exclusive(v_errorMsg_5196_);
if (v_isSharedCheck_5227_ == 0)
{
v___x_5199_ = v_errorMsg_5196_;
v_isShared_5200_ = v_isSharedCheck_5227_;
goto v_resetjp_5198_;
}
else
{
lean_inc(v_val_5197_);
lean_dec(v_errorMsg_5196_);
v___x_5199_ = lean_box(0);
v_isShared_5200_ = v_isSharedCheck_5227_;
goto v_resetjp_5198_;
}
v_resetjp_5198_:
{
lean_object* v_stxStack_5201_; lean_object* v_lhsPrec_5202_; lean_object* v_pos_5203_; lean_object* v_cache_5204_; lean_object* v_recoveredErrors_5205_; lean_object* v___x_5207_; uint8_t v_isShared_5208_; uint8_t v_isSharedCheck_5225_; 
v_stxStack_5201_ = lean_ctor_get(v___x_5195_, 0);
v_lhsPrec_5202_ = lean_ctor_get(v___x_5195_, 1);
v_pos_5203_ = lean_ctor_get(v___x_5195_, 2);
v_cache_5204_ = lean_ctor_get(v___x_5195_, 3);
v_recoveredErrors_5205_ = lean_ctor_get(v___x_5195_, 5);
v_isSharedCheck_5225_ = !lean_is_exclusive(v___x_5195_);
if (v_isSharedCheck_5225_ == 0)
{
lean_object* v_unused_5226_; 
v_unused_5226_ = lean_ctor_get(v___x_5195_, 4);
lean_dec(v_unused_5226_);
v___x_5207_ = v___x_5195_;
v_isShared_5208_ = v_isSharedCheck_5225_;
goto v_resetjp_5206_;
}
else
{
lean_inc(v_recoveredErrors_5205_);
lean_inc(v_cache_5204_);
lean_inc(v_pos_5203_);
lean_inc(v_lhsPrec_5202_);
lean_inc(v_stxStack_5201_);
lean_dec(v___x_5195_);
v___x_5207_ = lean_box(0);
v_isShared_5208_ = v_isSharedCheck_5225_;
goto v_resetjp_5206_;
}
v_resetjp_5206_:
{
lean_object* v_unexpectedTk_5209_; lean_object* v_unexpected_5210_; lean_object* v___x_5212_; uint8_t v_isShared_5213_; uint8_t v_isSharedCheck_5223_; 
v_unexpectedTk_5209_ = lean_ctor_get(v_val_5197_, 0);
v_unexpected_5210_ = lean_ctor_get(v_val_5197_, 1);
v_isSharedCheck_5223_ = !lean_is_exclusive(v_val_5197_);
if (v_isSharedCheck_5223_ == 0)
{
lean_object* v_unused_5224_; 
v_unused_5224_ = lean_ctor_get(v_val_5197_, 2);
lean_dec(v_unused_5224_);
v___x_5212_ = v_val_5197_;
v_isShared_5213_ = v_isSharedCheck_5223_;
goto v_resetjp_5211_;
}
else
{
lean_inc(v_unexpected_5210_);
lean_inc(v_unexpectedTk_5209_);
lean_dec(v_val_5197_);
v___x_5212_ = lean_box(0);
v_isShared_5213_ = v_isSharedCheck_5223_;
goto v_resetjp_5211_;
}
v_resetjp_5211_:
{
lean_object* v___x_5215_; 
if (v_isShared_5213_ == 0)
{
lean_ctor_set(v___x_5212_, 2, v_expected_5191_);
v___x_5215_ = v___x_5212_;
goto v_reusejp_5214_;
}
else
{
lean_object* v_reuseFailAlloc_5222_; 
v_reuseFailAlloc_5222_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5222_, 0, v_unexpectedTk_5209_);
lean_ctor_set(v_reuseFailAlloc_5222_, 1, v_unexpected_5210_);
lean_ctor_set(v_reuseFailAlloc_5222_, 2, v_expected_5191_);
v___x_5215_ = v_reuseFailAlloc_5222_;
goto v_reusejp_5214_;
}
v_reusejp_5214_:
{
lean_object* v___x_5217_; 
if (v_isShared_5200_ == 0)
{
lean_ctor_set(v___x_5199_, 0, v___x_5215_);
v___x_5217_ = v___x_5199_;
goto v_reusejp_5216_;
}
else
{
lean_object* v_reuseFailAlloc_5221_; 
v_reuseFailAlloc_5221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5221_, 0, v___x_5215_);
v___x_5217_ = v_reuseFailAlloc_5221_;
goto v_reusejp_5216_;
}
v_reusejp_5216_:
{
lean_object* v___x_5219_; 
if (v_isShared_5208_ == 0)
{
lean_ctor_set(v___x_5207_, 4, v___x_5217_);
v___x_5219_ = v___x_5207_;
goto v_reusejp_5218_;
}
else
{
lean_object* v_reuseFailAlloc_5220_; 
v_reuseFailAlloc_5220_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_5220_, 0, v_stxStack_5201_);
lean_ctor_set(v_reuseFailAlloc_5220_, 1, v_lhsPrec_5202_);
lean_ctor_set(v_reuseFailAlloc_5220_, 2, v_pos_5203_);
lean_ctor_set(v_reuseFailAlloc_5220_, 3, v_cache_5204_);
lean_ctor_set(v_reuseFailAlloc_5220_, 4, v___x_5217_);
lean_ctor_set(v_reuseFailAlloc_5220_, 5, v_recoveredErrors_5205_);
v___x_5219_ = v_reuseFailAlloc_5220_;
goto v_reusejp_5218_;
}
v_reusejp_5218_:
{
return v___x_5219_;
}
}
}
}
}
}
}
else
{
lean_dec(v_errorMsg_5196_);
lean_dec(v_expected_5191_);
return v___x_5195_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected(lean_object* v_expected_5228_, lean_object* v_p_5229_){
_start:
{
lean_object* v_info_5230_; lean_object* v_fn_5231_; lean_object* v___x_5233_; uint8_t v_isShared_5234_; uint8_t v_isSharedCheck_5239_; 
v_info_5230_ = lean_ctor_get(v_p_5229_, 0);
v_fn_5231_ = lean_ctor_get(v_p_5229_, 1);
v_isSharedCheck_5239_ = !lean_is_exclusive(v_p_5229_);
if (v_isSharedCheck_5239_ == 0)
{
v___x_5233_ = v_p_5229_;
v_isShared_5234_ = v_isSharedCheck_5239_;
goto v_resetjp_5232_;
}
else
{
lean_inc(v_fn_5231_);
lean_inc(v_info_5230_);
lean_dec(v_p_5229_);
v___x_5233_ = lean_box(0);
v_isShared_5234_ = v_isSharedCheck_5239_;
goto v_resetjp_5232_;
}
v_resetjp_5232_:
{
lean_object* v___x_5235_; lean_object* v___x_5237_; 
v___x_5235_ = lean_alloc_closure((void*)(l_Lean_Parser_setExpectedFn), 4, 2);
lean_closure_set(v___x_5235_, 0, v_expected_5228_);
lean_closure_set(v___x_5235_, 1, v_fn_5231_);
if (v_isShared_5234_ == 0)
{
lean_ctor_set(v___x_5233_, 1, v___x_5235_);
v___x_5237_ = v___x_5233_;
goto v_reusejp_5236_;
}
else
{
lean_object* v_reuseFailAlloc_5238_; 
v_reuseFailAlloc_5238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5238_, 0, v_info_5230_);
lean_ctor_set(v_reuseFailAlloc_5238_, 1, v___x_5235_);
v___x_5237_ = v_reuseFailAlloc_5238_;
goto v_reusejp_5236_;
}
v_reusejp_5236_:
{
return v___x_5237_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_pushNone___lam__0(lean_object* v_x_5240_, lean_object* v_s_5241_){
_start:
{
lean_object* v___x_5242_; lean_object* v___x_5243_; 
v___x_5242_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__12));
v___x_5243_ = l_Lean_Parser_ParserState_pushSyntax(v_s_5241_, v___x_5242_);
return v___x_5243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_pushNone___lam__0___boxed(lean_object* v_x_5244_, lean_object* v_s_5245_){
_start:
{
lean_object* v_res_5246_; 
v_res_5246_ = l_Lean_Parser_pushNone___lam__0(v_x_5244_, v_s_5245_);
lean_dec_ref(v_x_5244_);
return v_res_5246_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__3(void){
_start:
{
lean_object* v___x_5256_; lean_object* v___x_5257_; 
v___x_5256_ = ((lean_object*)(l_Lean_Parser_antiquotNestedExpr___closed__2));
v___x_5257_ = l_Lean_Parser_symbolNoAntiquot(v___x_5256_);
return v___x_5257_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__4(void){
_start:
{
lean_object* v___x_5258_; lean_object* v___x_5259_; 
v___x_5258_ = lean_unsigned_to_nat(0u);
v___x_5259_ = l_Lean_Parser_termParser(v___x_5258_);
return v___x_5259_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__5(void){
_start:
{
lean_object* v___x_5260_; lean_object* v___x_5261_; 
v___x_5260_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__4, &l_Lean_Parser_antiquotNestedExpr___closed__4_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__4);
v___x_5261_ = l_Lean_Parser_decQuotDepth(v___x_5260_);
return v___x_5261_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__6(void){
_start:
{
lean_object* v___x_5262_; lean_object* v___x_5263_; 
v___x_5262_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__6));
v___x_5263_ = l_Lean_Parser_symbolNoAntiquot(v___x_5262_);
return v___x_5263_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__7(void){
_start:
{
lean_object* v___x_5264_; lean_object* v___x_5265_; lean_object* v___x_5266_; 
v___x_5264_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__6, &l_Lean_Parser_antiquotNestedExpr___closed__6_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__6);
v___x_5265_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__5, &l_Lean_Parser_antiquotNestedExpr___closed__5_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__5);
v___x_5266_ = l_Lean_Parser_andthen(v___x_5265_, v___x_5264_);
return v___x_5266_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__8(void){
_start:
{
lean_object* v___x_5267_; lean_object* v___x_5268_; lean_object* v___x_5269_; 
v___x_5267_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__7, &l_Lean_Parser_antiquotNestedExpr___closed__7_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__7);
v___x_5268_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__3, &l_Lean_Parser_antiquotNestedExpr___closed__3_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__3);
v___x_5269_ = l_Lean_Parser_andthen(v___x_5268_, v___x_5267_);
return v___x_5269_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__9(void){
_start:
{
lean_object* v___x_5270_; lean_object* v___x_5271_; lean_object* v___x_5272_; 
v___x_5270_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__8, &l_Lean_Parser_antiquotNestedExpr___closed__8_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__8);
v___x_5271_ = ((lean_object*)(l_Lean_Parser_antiquotNestedExpr___closed__1));
v___x_5272_ = l_Lean_Parser_node(v___x_5271_, v___x_5270_);
return v___x_5272_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr(void){
_start:
{
lean_object* v___x_5273_; 
v___x_5273_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__9, &l_Lean_Parser_antiquotNestedExpr___closed__9_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__9);
return v___x_5273_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr___closed__1(void){
_start:
{
lean_object* v___x_5275_; lean_object* v___x_5276_; 
v___x_5275_ = ((lean_object*)(l_Lean_Parser_antiquotExpr___closed__0));
v___x_5276_ = l_Lean_Parser_symbolNoAntiquot(v___x_5275_);
return v___x_5276_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr___closed__2(void){
_start:
{
lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5279_; 
v___x_5277_ = l_Lean_Parser_antiquotNestedExpr;
v___x_5278_ = lean_obj_once(&l_Lean_Parser_antiquotExpr___closed__1, &l_Lean_Parser_antiquotExpr___closed__1_once, _init_l_Lean_Parser_antiquotExpr___closed__1);
v___x_5279_ = l_Lean_Parser_orelse(v___x_5278_, v___x_5277_);
return v___x_5279_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr___closed__3(void){
_start:
{
lean_object* v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; 
v___x_5280_ = lean_obj_once(&l_Lean_Parser_antiquotExpr___closed__2, &l_Lean_Parser_antiquotExpr___closed__2_once, _init_l_Lean_Parser_antiquotExpr___closed__2);
v___x_5281_ = l_Lean_Parser_identNoAntiquot;
v___x_5282_ = l_Lean_Parser_orelse(v___x_5281_, v___x_5280_);
return v___x_5282_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr(void){
_start:
{
lean_object* v___x_5283_; 
v___x_5283_ = lean_obj_once(&l_Lean_Parser_antiquotExpr___closed__3, &l_Lean_Parser_antiquotExpr___closed__3_once, _init_l_Lean_Parser_antiquotExpr___closed__3);
return v___x_5283_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__1(void){
_start:
{
lean_object* v___x_5285_; lean_object* v___x_5286_; 
v___x_5285_ = ((lean_object*)(l_Lean_Parser_tokenAntiquotFn___closed__0));
v___x_5286_ = l_Lean_Parser_checkNoWsBefore(v___x_5285_);
return v___x_5286_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__3(void){
_start:
{
lean_object* v___x_5288_; lean_object* v___x_5289_; 
v___x_5288_ = ((lean_object*)(l_Lean_Parser_tokenAntiquotFn___closed__2));
v___x_5289_ = l_Lean_Parser_symbolNoAntiquot(v___x_5288_);
return v___x_5289_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__5(void){
_start:
{
lean_object* v___x_5291_; lean_object* v___x_5292_; 
v___x_5291_ = ((lean_object*)(l_Lean_Parser_tokenAntiquotFn___closed__4));
v___x_5292_ = l_Lean_Parser_symbolNoAntiquot(v___x_5291_);
return v___x_5292_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__6(void){
_start:
{
lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; 
v___x_5293_ = l_Lean_Parser_antiquotExpr;
v___x_5294_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__1, &l_Lean_Parser_tokenAntiquotFn___closed__1_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__1);
v___x_5295_ = l_Lean_Parser_andthen(v___x_5294_, v___x_5293_);
return v___x_5295_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__7(void){
_start:
{
lean_object* v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; 
v___x_5296_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__6, &l_Lean_Parser_tokenAntiquotFn___closed__6_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__6);
v___x_5297_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__5, &l_Lean_Parser_tokenAntiquotFn___closed__5_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__5);
v___x_5298_ = l_Lean_Parser_andthen(v___x_5297_, v___x_5296_);
return v___x_5298_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__8(void){
_start:
{
lean_object* v___x_5299_; lean_object* v___x_5300_; lean_object* v___x_5301_; 
v___x_5299_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__7, &l_Lean_Parser_tokenAntiquotFn___closed__7_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__7);
v___x_5300_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__3, &l_Lean_Parser_tokenAntiquotFn___closed__3_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__3);
v___x_5301_ = l_Lean_Parser_andthen(v___x_5300_, v___x_5299_);
return v___x_5301_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__9(void){
_start:
{
lean_object* v___x_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; 
v___x_5302_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__8, &l_Lean_Parser_tokenAntiquotFn___closed__8_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__8);
v___x_5303_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__1, &l_Lean_Parser_tokenAntiquotFn___closed__1_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__1);
v___x_5304_ = l_Lean_Parser_andthen(v___x_5303_, v___x_5302_);
return v___x_5304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tokenAntiquotFn(lean_object* v_c_5308_, lean_object* v_s_5309_){
_start:
{
lean_object* v_pos_5310_; lean_object* v_errorMsg_5311_; lean_object* v___x_5312_; uint8_t v___x_5313_; 
v_pos_5310_ = lean_ctor_get(v_s_5309_, 2);
v_errorMsg_5311_ = lean_ctor_get(v_s_5309_, 4);
v___x_5312_ = lean_box(0);
v___x_5313_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5311_, v___x_5312_);
if (v___x_5313_ == 0)
{
lean_dec_ref(v_c_5308_);
return v_s_5309_;
}
else
{
lean_object* v___x_5314_; lean_object* v_fn_5315_; lean_object* v_iniSz_5316_; lean_object* v_s_5317_; lean_object* v_errorMsg_5318_; uint8_t v___x_5319_; 
lean_inc(v_pos_5310_);
v___x_5314_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__9, &l_Lean_Parser_tokenAntiquotFn___closed__9_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__9);
v_fn_5315_ = lean_ctor_get(v___x_5314_, 1);
v_iniSz_5316_ = l_Lean_Parser_ParserState_stackSize(v_s_5309_);
lean_inc_ref(v_fn_5315_);
v_s_5317_ = lean_apply_2(v_fn_5315_, v_c_5308_, v_s_5309_);
v_errorMsg_5318_ = lean_ctor_get(v_s_5317_, 4);
lean_inc(v_errorMsg_5318_);
v___x_5319_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5318_, v___x_5312_);
lean_dec(v_errorMsg_5318_);
if (v___x_5319_ == 0)
{
lean_object* v___x_5320_; 
v___x_5320_ = l_Lean_Parser_ParserState_restore(v_s_5317_, v_iniSz_5316_, v_pos_5310_);
lean_dec(v_iniSz_5316_);
return v___x_5320_;
}
else
{
lean_object* v___x_5321_; lean_object* v___x_5322_; lean_object* v___x_5323_; lean_object* v___x_5324_; 
lean_dec(v_pos_5310_);
v___x_5321_ = ((lean_object*)(l_Lean_Parser_tokenAntiquotFn___closed__11));
v___x_5322_ = lean_unsigned_to_nat(1u);
v___x_5323_ = lean_nat_sub(v_iniSz_5316_, v___x_5322_);
lean_dec(v_iniSz_5316_);
v___x_5324_ = l_Lean_Parser_ParserState_mkNode(v_s_5317_, v___x_5321_, v___x_5323_);
lean_dec(v___x_5323_);
return v___x_5324_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tokenWithAntiquot___lam__0(lean_object* v_fn_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_){
_start:
{
lean_object* v_toInputContext_5328_; lean_object* v_s_5329_; lean_object* v_pos_5330_; lean_object* v_inputString_5331_; uint32_t v___x_5332_; uint32_t v___x_5333_; uint8_t v___x_5334_; 
v_toInputContext_5328_ = lean_ctor_get(v___y_5326_, 0);
lean_inc_ref(v___y_5326_);
v_s_5329_ = lean_apply_2(v_fn_5325_, v___y_5326_, v___y_5327_);
v_pos_5330_ = lean_ctor_get(v_s_5329_, 2);
lean_inc(v_pos_5330_);
v_inputString_5331_ = lean_ctor_get(v_toInputContext_5328_, 0);
v___x_5332_ = lean_string_utf8_get(v_inputString_5331_, v_pos_5330_);
lean_dec(v_pos_5330_);
v___x_5333_ = 37;
v___x_5334_ = lean_uint32_dec_eq(v___x_5332_, v___x_5333_);
if (v___x_5334_ == 0)
{
lean_dec_ref(v___y_5326_);
return v_s_5329_;
}
else
{
lean_object* v___x_5335_; 
v___x_5335_ = l_Lean_Parser_tokenAntiquotFn(v___y_5326_, v_s_5329_);
return v___x_5335_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tokenWithAntiquot(lean_object* v_p_5336_){
_start:
{
lean_object* v_info_5337_; lean_object* v_fn_5338_; lean_object* v___x_5340_; uint8_t v_isShared_5341_; uint8_t v_isSharedCheck_5346_; 
v_info_5337_ = lean_ctor_get(v_p_5336_, 0);
v_fn_5338_ = lean_ctor_get(v_p_5336_, 1);
v_isSharedCheck_5346_ = !lean_is_exclusive(v_p_5336_);
if (v_isSharedCheck_5346_ == 0)
{
v___x_5340_ = v_p_5336_;
v_isShared_5341_ = v_isSharedCheck_5346_;
goto v_resetjp_5339_;
}
else
{
lean_inc(v_fn_5338_);
lean_inc(v_info_5337_);
lean_dec(v_p_5336_);
v___x_5340_ = lean_box(0);
v_isShared_5341_ = v_isSharedCheck_5346_;
goto v_resetjp_5339_;
}
v_resetjp_5339_:
{
lean_object* v___f_5342_; lean_object* v___x_5344_; 
v___f_5342_ = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquot___lam__0), 3, 1);
lean_closure_set(v___f_5342_, 0, v_fn_5338_);
if (v_isShared_5341_ == 0)
{
lean_ctor_set(v___x_5340_, 1, v___f_5342_);
v___x_5344_ = v___x_5340_;
goto v_reusejp_5343_;
}
else
{
lean_object* v_reuseFailAlloc_5345_; 
v_reuseFailAlloc_5345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5345_, 0, v_info_5337_);
lean_ctor_set(v_reuseFailAlloc_5345_, 1, v___f_5342_);
v___x_5344_ = v_reuseFailAlloc_5345_;
goto v_reusejp_5343_;
}
v_reusejp_5343_:
{
return v___x_5344_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbol(lean_object* v_sym_5347_){
_start:
{
lean_object* v___x_5348_; lean_object* v___x_5349_; 
v___x_5348_ = l_Lean_Parser_symbolNoAntiquot(v_sym_5347_);
v___x_5349_ = l_Lean_Parser_tokenWithAntiquot(v___x_5348_);
return v___x_5349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol(lean_object* v_sym_5352_, uint8_t v_includeIdent_5353_){
_start:
{
lean_object* v___x_5354_; lean_object* v___x_5355_; 
v___x_5354_ = l_Lean_Parser_nonReservedSymbolNoAntiquot(v_sym_5352_, v_includeIdent_5353_);
v___x_5355_ = l_Lean_Parser_tokenWithAntiquot(v___x_5354_);
return v___x_5355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol___boxed(lean_object* v_sym_5356_, lean_object* v_includeIdent_5357_){
_start:
{
uint8_t v_includeIdent_boxed_5358_; lean_object* v_res_5359_; 
v_includeIdent_boxed_5358_ = lean_unbox(v_includeIdent_5357_);
v_res_5359_ = l_Lean_Parser_nonReservedSymbol(v_sym_5356_, v_includeIdent_boxed_5358_);
return v_res_5359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol___redArg(lean_object* v_sym_5360_, lean_object* v_asciiSym_5361_){
_start:
{
lean_object* v___x_5362_; lean_object* v___x_5363_; 
v___x_5362_ = l_Lean_Parser_unicodeSymbolNoAntiquot___redArg(v_sym_5360_, v_asciiSym_5361_);
v___x_5363_ = l_Lean_Parser_tokenWithAntiquot(v___x_5362_);
return v___x_5363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol(lean_object* v_sym_5364_, lean_object* v_asciiSym_5365_, uint8_t v_preserveForPP_5366_){
_start:
{
lean_object* v___x_5367_; 
v___x_5367_ = l_Lean_Parser_unicodeSymbol___redArg(v_sym_5364_, v_asciiSym_5365_);
return v___x_5367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol___boxed(lean_object* v_sym_5368_, lean_object* v_asciiSym_5369_, lean_object* v_preserveForPP_5370_){
_start:
{
uint8_t v_preserveForPP_boxed_5371_; lean_object* v_res_5372_; 
v_preserveForPP_boxed_5371_ = lean_unbox(v_preserveForPP_5370_);
v_res_5372_ = l_Lean_Parser_unicodeSymbol(v_sym_5368_, v_asciiSym_5369_, v_preserveForPP_boxed_5371_);
return v_res_5372_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__0(void){
_start:
{
lean_object* v___x_5373_; lean_object* v___x_5374_; 
v___x_5373_ = ((lean_object*)(l_Lean_Parser_tokenAntiquotFn___closed__4));
v___x_5374_ = l_Lean_Parser_symbol(v___x_5373_);
return v___x_5374_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__1(void){
_start:
{
lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; 
v___x_5375_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__0, &l_Lean_Parser_mkAntiquot___closed__0_once, _init_l_Lean_Parser_mkAntiquot___closed__0);
v___x_5376_ = lean_box(0);
v___x_5377_ = l_Lean_Parser_setExpected(v___x_5376_, v___x_5375_);
return v___x_5377_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__2(void){
_start:
{
lean_object* v___x_5378_; lean_object* v___x_5379_; 
v___x_5378_ = ((lean_object*)(l_Lean_Parser_chFn___closed__1));
v___x_5379_ = l_Lean_Parser_checkNoWsBefore(v___x_5378_);
return v___x_5379_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__3(void){
_start:
{
lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; 
v___x_5380_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__0, &l_Lean_Parser_mkAntiquot___closed__0_once, _init_l_Lean_Parser_mkAntiquot___closed__0);
v___x_5381_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__2, &l_Lean_Parser_mkAntiquot___closed__2_once, _init_l_Lean_Parser_mkAntiquot___closed__2);
v___x_5382_ = l_Lean_Parser_andthen(v___x_5381_, v___x_5380_);
return v___x_5382_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__4(void){
_start:
{
lean_object* v___x_5383_; lean_object* v___x_5384_; 
v___x_5383_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__3, &l_Lean_Parser_mkAntiquot___closed__3_once, _init_l_Lean_Parser_mkAntiquot___closed__3);
v___x_5384_ = l_Lean_Parser_manyNoAntiquot(v___x_5383_);
return v___x_5384_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__6(void){
_start:
{
lean_object* v___x_5386_; lean_object* v___x_5387_; 
v___x_5386_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__5));
v___x_5387_ = l_Lean_Parser_checkNoWsBefore(v___x_5386_);
return v___x_5387_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__13(void){
_start:
{
lean_object* v___x_5396_; lean_object* v___x_5397_; 
v___x_5396_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__12));
v___x_5397_ = l_Lean_Parser_symbol(v___x_5396_);
return v___x_5397_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__14(void){
_start:
{
lean_object* v___x_5398_; lean_object* v___x_5399_; lean_object* v___x_5400_; 
v___x_5398_ = ((lean_object*)(l_Lean_Parser_pushNone));
v___x_5399_ = ((lean_object*)(l_Lean_Parser_checkNoImmediateColon));
v___x_5400_ = l_Lean_Parser_andthen(v___x_5399_, v___x_5398_);
return v___x_5400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot(lean_object* v_name_5404_, lean_object* v_kind_5405_, uint8_t v_anonymous_5406_, uint8_t v_isPseudoKind_5407_){
_start:
{
lean_object* v___y_5409_; lean_object* v___y_5410_; lean_object* v___y_5423_; 
if (v_isPseudoKind_5407_ == 0)
{
lean_object* v___x_5441_; 
v___x_5441_ = lean_box(0);
v___y_5423_ = v___x_5441_;
goto v___jp_5422_;
}
else
{
lean_object* v___x_5442_; 
v___x_5442_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__16));
v___y_5423_ = v___x_5442_;
goto v___jp_5422_;
}
v___jp_5408_:
{
lean_object* v___x_5411_; lean_object* v___x_5412_; lean_object* v___x_5413_; lean_object* v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; lean_object* v___x_5420_; lean_object* v___x_5421_; 
v___x_5411_ = l_Lean_Parser_maxPrec;
v___x_5412_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__1, &l_Lean_Parser_mkAntiquot___closed__1_once, _init_l_Lean_Parser_mkAntiquot___closed__1);
v___x_5413_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__4, &l_Lean_Parser_mkAntiquot___closed__4_once, _init_l_Lean_Parser_mkAntiquot___closed__4);
v___x_5414_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__6, &l_Lean_Parser_mkAntiquot___closed__6_once, _init_l_Lean_Parser_mkAntiquot___closed__6);
v___x_5415_ = l_Lean_Parser_antiquotExpr;
v___x_5416_ = l_Lean_Parser_andthen(v___x_5415_, v___y_5410_);
v___x_5417_ = l_Lean_Parser_andthen(v___x_5414_, v___x_5416_);
v___x_5418_ = l_Lean_Parser_andthen(v___x_5413_, v___x_5417_);
v___x_5419_ = l_Lean_Parser_andthen(v___x_5412_, v___x_5418_);
v___x_5420_ = l_Lean_Parser_atomic(v___x_5419_);
v___x_5421_ = l_Lean_Parser_leadingNode(v___y_5409_, v___x_5411_, v___x_5420_);
return v___x_5421_;
}
v___jp_5422_:
{
lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v_kind_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; lean_object* v___x_5430_; lean_object* v___x_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; uint8_t v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; lean_object* v_nameP_5438_; 
lean_inc(v___y_5423_);
v___x_5424_ = l_Lean_Name_append(v_kind_5405_, v___y_5423_);
v___x_5425_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__8));
v_kind_5426_ = l_Lean_Name_append(v___x_5424_, v___x_5425_);
v___x_5427_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__10));
v___x_5428_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__11));
v___x_5429_ = lean_string_append(v___x_5428_, v_name_5404_);
v___x_5430_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_5431_ = lean_string_append(v___x_5429_, v___x_5430_);
v___x_5432_ = l_Lean_Parser_checkNoWsBefore(v___x_5431_);
v___x_5433_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__13, &l_Lean_Parser_mkAntiquot___closed__13_once, _init_l_Lean_Parser_mkAntiquot___closed__13);
v___x_5434_ = 0;
v___x_5435_ = l_Lean_Parser_nonReservedSymbol(v_name_5404_, v___x_5434_);
v___x_5436_ = l_Lean_Parser_andthen(v___x_5433_, v___x_5435_);
v___x_5437_ = l_Lean_Parser_andthen(v___x_5432_, v___x_5436_);
v_nameP_5438_ = l_Lean_Parser_node(v___x_5427_, v___x_5437_);
if (v_anonymous_5406_ == 0)
{
v___y_5409_ = v_kind_5426_;
v___y_5410_ = v_nameP_5438_;
goto v___jp_5408_;
}
else
{
lean_object* v___x_5439_; lean_object* v___x_5440_; 
v___x_5439_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__14, &l_Lean_Parser_mkAntiquot___closed__14_once, _init_l_Lean_Parser_mkAntiquot___closed__14);
v___x_5440_ = l_Lean_Parser_orelse(v_nameP_5438_, v___x_5439_);
v___y_5409_ = v_kind_5426_;
v___y_5410_ = v___x_5440_;
goto v___jp_5408_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot___boxed(lean_object* v_name_5443_, lean_object* v_kind_5444_, lean_object* v_anonymous_5445_, lean_object* v_isPseudoKind_5446_){
_start:
{
uint8_t v_anonymous_boxed_5447_; uint8_t v_isPseudoKind_boxed_5448_; lean_object* v_res_5449_; 
v_anonymous_boxed_5447_ = lean_unbox(v_anonymous_5445_);
v_isPseudoKind_boxed_5448_ = lean_unbox(v_isPseudoKind_5446_);
v_res_5449_ = l_Lean_Parser_mkAntiquot(v_name_5443_, v_kind_5444_, v_anonymous_boxed_5447_, v_isPseudoKind_boxed_5448_);
return v_res_5449_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1(){
_start:
{
lean_object* v___x_5457_; lean_object* v___x_5458_; lean_object* v___x_5459_; 
v___x_5457_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1));
v___x_5458_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__2));
v___x_5459_ = l_Lean_addBuiltinDocString(v___x_5457_, v___x_5458_);
return v___x_5459_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___boxed(lean_object* v_a_5460_){
_start:
{
lean_object* v_res_5461_; 
v_res_5461_ = l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1();
return v_res_5461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotFn(lean_object* v_antiquotP_5462_, lean_object* v_p_5463_, uint8_t v_antiquotBehavior_5464_, lean_object* v_c_5465_, lean_object* v_s_5466_){
_start:
{
lean_object* v_toInputContext_5467_; lean_object* v_pos_5468_; lean_object* v_inputString_5469_; uint32_t v___x_5470_; uint32_t v___x_5471_; uint8_t v___x_5472_; 
v_toInputContext_5467_ = lean_ctor_get(v_c_5465_, 0);
v_pos_5468_ = lean_ctor_get(v_s_5466_, 2);
v_inputString_5469_ = lean_ctor_get(v_toInputContext_5467_, 0);
v___x_5470_ = lean_string_utf8_get(v_inputString_5469_, v_pos_5468_);
v___x_5471_ = 36;
v___x_5472_ = lean_uint32_dec_eq(v___x_5470_, v___x_5471_);
if (v___x_5472_ == 0)
{
lean_object* v___x_5473_; 
lean_dec_ref(v_antiquotP_5462_);
v___x_5473_ = lean_apply_2(v_p_5463_, v_c_5465_, v_s_5466_);
return v___x_5473_;
}
else
{
lean_object* v___x_5474_; 
v___x_5474_ = l_Lean_Parser_orelseFnCore(v_antiquotP_5462_, v_p_5463_, v_antiquotBehavior_5464_, v_c_5465_, v_s_5466_);
return v___x_5474_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotFn___boxed(lean_object* v_antiquotP_5475_, lean_object* v_p_5476_, lean_object* v_antiquotBehavior_5477_, lean_object* v_c_5478_, lean_object* v_s_5479_){
_start:
{
uint8_t v_antiquotBehavior_boxed_5480_; lean_object* v_res_5481_; 
v_antiquotBehavior_boxed_5480_ = lean_unbox(v_antiquotBehavior_5477_);
v_res_5481_ = l_Lean_Parser_withAntiquotFn(v_antiquotP_5475_, v_p_5476_, v_antiquotBehavior_boxed_5480_, v_c_5478_, v_s_5479_);
return v_res_5481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquot(lean_object* v_antiquotP_5482_, lean_object* v_p_5483_){
_start:
{
lean_object* v_info_5484_; lean_object* v_fn_5485_; lean_object* v_info_5486_; lean_object* v_fn_5487_; lean_object* v___x_5489_; uint8_t v_isShared_5490_; uint8_t v_isSharedCheck_5498_; 
v_info_5484_ = lean_ctor_get(v_antiquotP_5482_, 0);
lean_inc_ref(v_info_5484_);
v_fn_5485_ = lean_ctor_get(v_antiquotP_5482_, 1);
lean_inc_ref(v_fn_5485_);
lean_dec_ref(v_antiquotP_5482_);
v_info_5486_ = lean_ctor_get(v_p_5483_, 0);
v_fn_5487_ = lean_ctor_get(v_p_5483_, 1);
v_isSharedCheck_5498_ = !lean_is_exclusive(v_p_5483_);
if (v_isSharedCheck_5498_ == 0)
{
v___x_5489_ = v_p_5483_;
v_isShared_5490_ = v_isSharedCheck_5498_;
goto v_resetjp_5488_;
}
else
{
lean_inc(v_fn_5487_);
lean_inc(v_info_5486_);
lean_dec(v_p_5483_);
v___x_5489_ = lean_box(0);
v_isShared_5490_ = v_isSharedCheck_5498_;
goto v_resetjp_5488_;
}
v_resetjp_5488_:
{
lean_object* v___x_5491_; uint8_t v___x_5492_; lean_object* v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5496_; 
v___x_5491_ = l_Lean_Parser_orelseInfo(v_info_5484_, v_info_5486_);
v___x_5492_ = 1;
v___x_5493_ = lean_box(v___x_5492_);
v___x_5494_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotFn___boxed), 5, 3);
lean_closure_set(v___x_5494_, 0, v_fn_5485_);
lean_closure_set(v___x_5494_, 1, v_fn_5487_);
lean_closure_set(v___x_5494_, 2, v___x_5493_);
if (v_isShared_5490_ == 0)
{
lean_ctor_set(v___x_5489_, 1, v___x_5494_);
lean_ctor_set(v___x_5489_, 0, v___x_5491_);
v___x_5496_ = v___x_5489_;
goto v_reusejp_5495_;
}
else
{
lean_object* v_reuseFailAlloc_5497_; 
v_reuseFailAlloc_5497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5497_, 0, v___x_5491_);
lean_ctor_set(v_reuseFailAlloc_5497_, 1, v___x_5494_);
v___x_5496_ = v_reuseFailAlloc_5497_;
goto v_reusejp_5495_;
}
v_reusejp_5495_:
{
return v___x_5496_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1(){
_start:
{
lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; 
v___x_5506_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1));
v___x_5507_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__2));
v___x_5508_ = l_Lean_addBuiltinDocString(v___x_5506_, v___x_5507_);
return v___x_5508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___boxed(lean_object* v_a_5509_){
_start:
{
lean_object* v_res_5510_; 
v_res_5510_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1();
return v_res_5510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotAcceptLhs(lean_object* v_antiquotP_5511_, lean_object* v_p_5512_){
_start:
{
lean_object* v_info_5513_; lean_object* v_fn_5514_; lean_object* v_info_5515_; lean_object* v_fn_5516_; lean_object* v___x_5518_; uint8_t v_isShared_5519_; uint8_t v_isSharedCheck_5527_; 
v_info_5513_ = lean_ctor_get(v_antiquotP_5511_, 0);
lean_inc_ref(v_info_5513_);
v_fn_5514_ = lean_ctor_get(v_antiquotP_5511_, 1);
lean_inc_ref(v_fn_5514_);
lean_dec_ref(v_antiquotP_5511_);
v_info_5515_ = lean_ctor_get(v_p_5512_, 0);
v_fn_5516_ = lean_ctor_get(v_p_5512_, 1);
v_isSharedCheck_5527_ = !lean_is_exclusive(v_p_5512_);
if (v_isSharedCheck_5527_ == 0)
{
v___x_5518_ = v_p_5512_;
v_isShared_5519_ = v_isSharedCheck_5527_;
goto v_resetjp_5517_;
}
else
{
lean_inc(v_fn_5516_);
lean_inc(v_info_5515_);
lean_dec(v_p_5512_);
v___x_5518_ = lean_box(0);
v_isShared_5519_ = v_isSharedCheck_5527_;
goto v_resetjp_5517_;
}
v_resetjp_5517_:
{
lean_object* v___x_5520_; uint8_t v___x_5521_; lean_object* v___x_5522_; lean_object* v___x_5523_; lean_object* v___x_5525_; 
v___x_5520_ = l_Lean_Parser_orelseInfo(v_info_5513_, v_info_5515_);
v___x_5521_ = 0;
v___x_5522_ = lean_box(v___x_5521_);
v___x_5523_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotFn___boxed), 5, 3);
lean_closure_set(v___x_5523_, 0, v_fn_5514_);
lean_closure_set(v___x_5523_, 1, v_fn_5516_);
lean_closure_set(v___x_5523_, 2, v___x_5522_);
if (v_isShared_5519_ == 0)
{
lean_ctor_set(v___x_5518_, 1, v___x_5523_);
lean_ctor_set(v___x_5518_, 0, v___x_5520_);
v___x_5525_ = v___x_5518_;
goto v_reusejp_5524_;
}
else
{
lean_object* v_reuseFailAlloc_5526_; 
v_reuseFailAlloc_5526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5526_, 0, v___x_5520_);
lean_ctor_set(v_reuseFailAlloc_5526_, 1, v___x_5523_);
v___x_5525_ = v_reuseFailAlloc_5526_;
goto v_reusejp_5524_;
}
v_reusejp_5524_:
{
return v___x_5525_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1(){
_start:
{
lean_object* v___x_5535_; lean_object* v___x_5536_; lean_object* v___x_5537_; 
v___x_5535_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__1));
v___x_5536_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__2));
v___x_5537_ = l_Lean_addBuiltinDocString(v___x_5535_, v___x_5536_);
return v___x_5537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___boxed(lean_object* v_a_5538_){
_start:
{
lean_object* v_res_5539_; 
v_res_5539_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1();
return v_res_5539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutInfo(lean_object* v_p_5540_){
_start:
{
lean_object* v_fn_5541_; lean_object* v___x_5543_; uint8_t v_isShared_5544_; uint8_t v_isSharedCheck_5549_; 
v_fn_5541_ = lean_ctor_get(v_p_5540_, 1);
v_isSharedCheck_5549_ = !lean_is_exclusive(v_p_5540_);
if (v_isSharedCheck_5549_ == 0)
{
lean_object* v_unused_5550_; 
v_unused_5550_ = lean_ctor_get(v_p_5540_, 0);
lean_dec(v_unused_5550_);
v___x_5543_ = v_p_5540_;
v_isShared_5544_ = v_isSharedCheck_5549_;
goto v_resetjp_5542_;
}
else
{
lean_inc(v_fn_5541_);
lean_dec(v_p_5540_);
v___x_5543_ = lean_box(0);
v_isShared_5544_ = v_isSharedCheck_5549_;
goto v_resetjp_5542_;
}
v_resetjp_5542_:
{
lean_object* v___x_5545_; lean_object* v___x_5547_; 
v___x_5545_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
if (v_isShared_5544_ == 0)
{
lean_ctor_set(v___x_5543_, 0, v___x_5545_);
v___x_5547_ = v___x_5543_;
goto v_reusejp_5546_;
}
else
{
lean_object* v_reuseFailAlloc_5548_; 
v_reuseFailAlloc_5548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5548_, 0, v___x_5545_);
lean_ctor_set(v_reuseFailAlloc_5548_, 1, v_fn_5541_);
v___x_5547_ = v_reuseFailAlloc_5548_;
goto v_reusejp_5546_;
}
v_reusejp_5546_:
{
return v___x_5547_;
}
}
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice___closed__2(void){
_start:
{
lean_object* v___x_5554_; lean_object* v___x_5555_; 
v___x_5554_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__1));
v___x_5555_ = l_Lean_Parser_symbol(v___x_5554_);
return v___x_5555_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice___closed__3(void){
_start:
{
lean_object* v___x_5556_; lean_object* v___x_5557_; 
v___x_5556_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__2));
v___x_5557_ = l_Lean_Parser_symbol(v___x_5556_);
return v___x_5557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice(lean_object* v_kind_5558_, lean_object* v_p_5559_, lean_object* v_suffix_5560_){
_start:
{
lean_object* v___x_5561_; lean_object* v_kind_5562_; lean_object* v___x_5563_; lean_object* v___x_5564_; lean_object* v___x_5565_; lean_object* v___x_5566_; lean_object* v___x_5567_; lean_object* v___x_5568_; lean_object* v___x_5569_; lean_object* v___x_5570_; lean_object* v___x_5571_; lean_object* v___x_5572_; lean_object* v___x_5573_; lean_object* v___x_5574_; lean_object* v___x_5575_; lean_object* v___x_5576_; lean_object* v___x_5577_; lean_object* v___x_5578_; 
v___x_5561_ = ((lean_object*)(l_Lean_Parser_mkAntiquotSplice___closed__1));
v_kind_5562_ = l_Lean_Name_append(v_kind_5558_, v___x_5561_);
v___x_5563_ = l_Lean_Parser_maxPrec;
v___x_5564_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__1, &l_Lean_Parser_mkAntiquot___closed__1_once, _init_l_Lean_Parser_mkAntiquot___closed__1);
v___x_5565_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__4, &l_Lean_Parser_mkAntiquot___closed__4_once, _init_l_Lean_Parser_mkAntiquot___closed__4);
v___x_5566_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__6, &l_Lean_Parser_mkAntiquot___closed__6_once, _init_l_Lean_Parser_mkAntiquot___closed__6);
v___x_5567_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice___closed__2, &l_Lean_Parser_mkAntiquotSplice___closed__2_once, _init_l_Lean_Parser_mkAntiquotSplice___closed__2);
v___x_5568_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__1));
v___x_5569_ = l_Lean_Parser_node(v___x_5568_, v_p_5559_);
v___x_5570_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice___closed__3, &l_Lean_Parser_mkAntiquotSplice___closed__3_once, _init_l_Lean_Parser_mkAntiquotSplice___closed__3);
v___x_5571_ = l_Lean_Parser_andthen(v___x_5570_, v_suffix_5560_);
v___x_5572_ = l_Lean_Parser_andthen(v___x_5569_, v___x_5571_);
v___x_5573_ = l_Lean_Parser_andthen(v___x_5567_, v___x_5572_);
v___x_5574_ = l_Lean_Parser_andthen(v___x_5566_, v___x_5573_);
v___x_5575_ = l_Lean_Parser_andthen(v___x_5565_, v___x_5574_);
v___x_5576_ = l_Lean_Parser_andthen(v___x_5564_, v___x_5575_);
v___x_5577_ = l_Lean_Parser_atomic(v___x_5576_);
v___x_5578_ = l_Lean_Parser_leadingNode(v_kind_5562_, v___x_5563_, v___x_5577_);
return v___x_5578_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1(){
_start:
{
lean_object* v___x_5586_; lean_object* v___x_5587_; lean_object* v___x_5588_; 
v___x_5586_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1));
v___x_5587_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__2));
v___x_5588_ = l_Lean_addBuiltinDocString(v___x_5586_, v___x_5587_);
return v___x_5588_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___boxed(lean_object* v_a_5589_){
_start:
{
lean_object* v_res_5590_; 
v_res_5590_ = l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1();
return v_res_5590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn(lean_object* v_kind_5594_, lean_object* v_suffix_5595_, lean_object* v_c_5596_, lean_object* v_s_5597_){
_start:
{
lean_object* v_pos_5598_; lean_object* v_iniSz_5599_; lean_object* v_s_5600_; lean_object* v_stxStack_5601_; lean_object* v_errorMsg_5602_; lean_object* v___x_5603_; uint8_t v___x_5604_; 
v_pos_5598_ = lean_ctor_get(v_s_5597_, 2);
lean_inc(v_pos_5598_);
v_iniSz_5599_ = l_Lean_Parser_ParserState_stackSize(v_s_5597_);
v_s_5600_ = lean_apply_2(v_suffix_5595_, v_c_5596_, v_s_5597_);
v_stxStack_5601_ = lean_ctor_get(v_s_5600_, 0);
lean_inc_ref(v_stxStack_5601_);
v_errorMsg_5602_ = lean_ctor_get(v_s_5600_, 4);
lean_inc(v_errorMsg_5602_);
v___x_5603_ = lean_box(0);
v___x_5604_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5602_, v___x_5603_);
lean_dec(v_errorMsg_5602_);
if (v___x_5604_ == 0)
{
lean_object* v___x_5605_; 
lean_dec_ref(v_stxStack_5601_);
lean_dec(v_kind_5594_);
v___x_5605_ = l_Lean_Parser_ParserState_restore(v_s_5600_, v_iniSz_5599_, v_pos_5598_);
lean_dec(v_iniSz_5599_);
return v___x_5605_;
}
else
{
lean_object* v___x_5606_; lean_object* v___x_5607_; lean_object* v___x_5608_; lean_object* v___x_5609_; lean_object* v___x_5610_; lean_object* v___x_5611_; 
lean_dec(v_iniSz_5599_);
lean_dec(v_pos_5598_);
v___x_5606_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__1));
v___x_5607_ = l_Lean_Name_append(v_kind_5594_, v___x_5606_);
v___x_5608_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_5601_);
lean_dec_ref(v_stxStack_5601_);
v___x_5609_ = lean_unsigned_to_nat(2u);
v___x_5610_ = lean_nat_sub(v___x_5608_, v___x_5609_);
lean_dec(v___x_5608_);
v___x_5611_ = l_Lean_Parser_ParserState_mkNode(v_s_5600_, v___x_5607_, v___x_5610_);
lean_dec(v___x_5610_);
return v___x_5611_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSuffixSplice___lam__0(lean_object* v_fn_5612_, lean_object* v_kind_5613_, lean_object* v_fn_5614_, lean_object* v_c_5615_, lean_object* v_s_5616_){
_start:
{
lean_object* v_s_5617_; lean_object* v_stxStack_5618_; lean_object* v_errorMsg_5619_; lean_object* v___x_5620_; uint8_t v___x_5621_; 
lean_inc_ref(v_c_5615_);
v_s_5617_ = lean_apply_2(v_fn_5612_, v_c_5615_, v_s_5616_);
v_stxStack_5618_ = lean_ctor_get(v_s_5617_, 0);
lean_inc_ref(v_stxStack_5618_);
v_errorMsg_5619_ = lean_ctor_get(v_s_5617_, 4);
lean_inc(v_errorMsg_5619_);
v___x_5620_ = lean_box(0);
v___x_5621_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5619_, v___x_5620_);
lean_dec(v_errorMsg_5619_);
if (v___x_5621_ == 0)
{
lean_dec_ref(v_stxStack_5618_);
lean_dec_ref(v_c_5615_);
lean_dec_ref(v_fn_5614_);
lean_dec(v_kind_5613_);
return v_s_5617_;
}
else
{
lean_object* v___x_5622_; uint8_t v___x_5623_; 
v___x_5622_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_5618_);
lean_dec_ref(v_stxStack_5618_);
v___x_5623_ = l_Lean_Syntax_isAntiquots(v___x_5622_);
if (v___x_5623_ == 0)
{
lean_dec_ref(v_c_5615_);
lean_dec_ref(v_fn_5614_);
lean_dec(v_kind_5613_);
return v_s_5617_;
}
else
{
lean_object* v___x_5624_; 
v___x_5624_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn(v_kind_5613_, v_fn_5614_, v_c_5615_, v_s_5617_);
return v___x_5624_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSuffixSplice(lean_object* v_kind_5625_, lean_object* v_p_5626_, lean_object* v_suffix_5627_){
_start:
{
lean_object* v_info_5628_; lean_object* v_fn_5629_; lean_object* v_info_5630_; lean_object* v_fn_5631_; lean_object* v___x_5633_; uint8_t v_isShared_5634_; uint8_t v_isSharedCheck_5640_; 
v_info_5628_ = lean_ctor_get(v_p_5626_, 0);
lean_inc_ref(v_info_5628_);
v_fn_5629_ = lean_ctor_get(v_p_5626_, 1);
lean_inc_ref(v_fn_5629_);
lean_dec_ref(v_p_5626_);
v_info_5630_ = lean_ctor_get(v_suffix_5627_, 0);
v_fn_5631_ = lean_ctor_get(v_suffix_5627_, 1);
v_isSharedCheck_5640_ = !lean_is_exclusive(v_suffix_5627_);
if (v_isSharedCheck_5640_ == 0)
{
v___x_5633_ = v_suffix_5627_;
v_isShared_5634_ = v_isSharedCheck_5640_;
goto v_resetjp_5632_;
}
else
{
lean_inc(v_fn_5631_);
lean_inc(v_info_5630_);
lean_dec(v_suffix_5627_);
v___x_5633_ = lean_box(0);
v_isShared_5634_ = v_isSharedCheck_5640_;
goto v_resetjp_5632_;
}
v_resetjp_5632_:
{
lean_object* v___f_5635_; lean_object* v___x_5636_; lean_object* v___x_5638_; 
v___f_5635_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSuffixSplice___lam__0), 5, 3);
lean_closure_set(v___f_5635_, 0, v_fn_5629_);
lean_closure_set(v___f_5635_, 1, v_kind_5625_);
lean_closure_set(v___f_5635_, 2, v_fn_5631_);
v___x_5636_ = l_Lean_Parser_andthenInfo(v_info_5628_, v_info_5630_);
if (v_isShared_5634_ == 0)
{
lean_ctor_set(v___x_5633_, 1, v___f_5635_);
lean_ctor_set(v___x_5633_, 0, v___x_5636_);
v___x_5638_ = v___x_5633_;
goto v_reusejp_5637_;
}
else
{
lean_object* v_reuseFailAlloc_5639_; 
v_reuseFailAlloc_5639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5639_, 0, v___x_5636_);
lean_ctor_set(v_reuseFailAlloc_5639_, 1, v___f_5635_);
v___x_5638_ = v_reuseFailAlloc_5639_;
goto v_reusejp_5637_;
}
v_reusejp_5637_:
{
return v___x_5638_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1(){
_start:
{
lean_object* v___x_5648_; lean_object* v___x_5649_; lean_object* v___x_5650_; 
v___x_5648_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1));
v___x_5649_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__2));
v___x_5650_ = l_Lean_addBuiltinDocString(v___x_5648_, v___x_5649_);
return v___x_5650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___boxed(lean_object* v_a_5651_){
_start:
{
lean_object* v_res_5652_; 
v_res_5652_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1();
return v_res_5652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix(lean_object* v_kind_5653_, lean_object* v_p_5654_, lean_object* v_suffix_5655_){
_start:
{
lean_object* v___x_5656_; lean_object* v___x_5657_; lean_object* v___x_5658_; lean_object* v___x_5659_; 
lean_inc_ref(v_p_5654_);
v___x_5656_ = l_Lean_Parser_withoutInfo(v_p_5654_);
lean_inc_ref(v_suffix_5655_);
lean_inc(v_kind_5653_);
v___x_5657_ = l_Lean_Parser_mkAntiquotSplice(v_kind_5653_, v___x_5656_, v_suffix_5655_);
v___x_5658_ = l_Lean_Parser_withAntiquotSuffixSplice(v_kind_5653_, v_p_5654_, v_suffix_5655_);
v___x_5659_ = l_Lean_Parser_withAntiquot(v___x_5657_, v___x_5658_);
return v___x_5659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot(lean_object* v_name_5660_, lean_object* v_kind_5661_, lean_object* v_p_5662_, uint8_t v_anonymous_5663_){
_start:
{
uint8_t v___x_5664_; lean_object* v___x_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; 
v___x_5664_ = 0;
lean_inc(v_kind_5661_);
v___x_5665_ = l_Lean_Parser_mkAntiquot(v_name_5660_, v_kind_5661_, v_anonymous_5663_, v___x_5664_);
v___x_5666_ = l_Lean_Parser_node(v_kind_5661_, v_p_5662_);
v___x_5667_ = l_Lean_Parser_withAntiquot(v___x_5665_, v___x_5666_);
return v___x_5667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot___boxed(lean_object* v_name_5668_, lean_object* v_kind_5669_, lean_object* v_p_5670_, lean_object* v_anonymous_5671_){
_start:
{
uint8_t v_anonymous_boxed_5672_; lean_object* v_res_5673_; 
v_anonymous_boxed_5672_ = lean_unbox(v_anonymous_5671_);
v_res_5673_ = l_Lean_Parser_nodeWithAntiquot(v_name_5668_, v_kind_5669_, v_p_5670_, v_anonymous_boxed_5672_);
return v_res_5673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser(lean_object* v_p_5678_, lean_object* v_sep_5679_){
_start:
{
lean_object* v___x_5680_; lean_object* v___x_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v_str_5684_; lean_object* v_startInclusive_5685_; lean_object* v_endExclusive_5686_; lean_object* v___x_5687_; lean_object* v___x_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___x_5691_; lean_object* v___x_5692_; 
v___x_5680_ = lean_unsigned_to_nat(0u);
v___x_5681_ = lean_string_utf8_byte_size(v_sep_5679_);
v___x_5682_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5682_, 0, v_sep_5679_);
lean_ctor_set(v___x_5682_, 1, v___x_5680_);
lean_ctor_set(v___x_5682_, 2, v___x_5681_);
v___x_5683_ = l_String_Slice_trimAscii(v___x_5682_);
v_str_5684_ = lean_ctor_get(v___x_5683_, 0);
lean_inc_ref(v_str_5684_);
v_startInclusive_5685_ = lean_ctor_get(v___x_5683_, 1);
lean_inc(v_startInclusive_5685_);
v_endExclusive_5686_ = lean_ctor_get(v___x_5683_, 2);
lean_inc(v_endExclusive_5686_);
lean_dec_ref(v___x_5683_);
v___x_5687_ = ((lean_object*)(l_Lean_Parser_sepByElemParser___closed__1));
v___x_5688_ = lean_string_utf8_extract_fast(v_str_5684_, v_startInclusive_5685_, v_endExclusive_5686_);
lean_dec(v_endExclusive_5686_);
lean_dec(v_startInclusive_5685_);
lean_dec_ref(v_str_5684_);
v___x_5689_ = ((lean_object*)(l_Lean_Parser_sepByElemParser___closed__2));
v___x_5690_ = lean_string_append(v___x_5688_, v___x_5689_);
v___x_5691_ = l_Lean_Parser_symbol(v___x_5690_);
v___x_5692_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_5687_, v_p_5678_, v___x_5691_);
return v___x_5692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy(lean_object* v_p_5693_, lean_object* v_sep_5694_, lean_object* v_psep_5695_, uint8_t v_allowTrailingSep_5696_){
_start:
{
lean_object* v___x_5697_; lean_object* v___x_5698_; 
v___x_5697_ = l_Lean_Parser_sepByElemParser(v_p_5693_, v_sep_5694_);
v___x_5698_ = l_Lean_Parser_sepByNoAntiquot(v___x_5697_, v_psep_5695_, v_allowTrailingSep_5696_);
return v___x_5698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy___boxed(lean_object* v_p_5699_, lean_object* v_sep_5700_, lean_object* v_psep_5701_, lean_object* v_allowTrailingSep_5702_){
_start:
{
uint8_t v_allowTrailingSep_boxed_5703_; lean_object* v_res_5704_; 
v_allowTrailingSep_boxed_5703_ = lean_unbox(v_allowTrailingSep_5702_);
v_res_5704_ = l_Lean_Parser_sepBy(v_p_5699_, v_sep_5700_, v_psep_5701_, v_allowTrailingSep_boxed_5703_);
return v_res_5704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1(lean_object* v_p_5705_, lean_object* v_sep_5706_, lean_object* v_psep_5707_, uint8_t v_allowTrailingSep_5708_){
_start:
{
lean_object* v___x_5709_; lean_object* v___x_5710_; 
v___x_5709_ = l_Lean_Parser_sepByElemParser(v_p_5705_, v_sep_5706_);
v___x_5710_ = l_Lean_Parser_sepBy1NoAntiquot(v___x_5709_, v_psep_5707_, v_allowTrailingSep_5708_);
return v___x_5710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1___boxed(lean_object* v_p_5711_, lean_object* v_sep_5712_, lean_object* v_psep_5713_, lean_object* v_allowTrailingSep_5714_){
_start:
{
uint8_t v_allowTrailingSep_boxed_5715_; lean_object* v_res_5716_; 
v_allowTrailingSep_boxed_5715_ = lean_unbox(v_allowTrailingSep_5714_);
v_res_5716_ = l_Lean_Parser_sepBy1(v_p_5711_, v_sep_5712_, v_psep_5713_, v_allowTrailingSep_boxed_5715_);
return v_res_5716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkResult(lean_object* v_s_5717_, lean_object* v_iniSz_5718_){
_start:
{
lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; uint8_t v___x_5722_; 
v___x_5719_ = l_Lean_Parser_ParserState_stackSize(v_s_5717_);
v___x_5720_ = lean_unsigned_to_nat(1u);
v___x_5721_ = lean_nat_add(v_iniSz_5718_, v___x_5720_);
v___x_5722_ = lean_nat_dec_eq(v___x_5719_, v___x_5721_);
lean_dec(v___x_5721_);
lean_dec(v___x_5719_);
if (v___x_5722_ == 0)
{
lean_object* v___x_5723_; lean_object* v___x_5724_; 
v___x_5723_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__1));
v___x_5724_ = l_Lean_Parser_ParserState_mkNode(v_s_5717_, v___x_5723_, v_iniSz_5718_);
return v___x_5724_;
}
else
{
return v_s_5717_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkResult___boxed(lean_object* v_s_5725_, lean_object* v_iniSz_5726_){
_start:
{
lean_object* v_res_5727_; 
v_res_5727_ = l___private_Lean_Parser_Basic_0__Lean_Parser_mkResult(v_s_5725_, v_iniSz_5726_);
lean_dec(v_iniSz_5726_);
return v_res_5727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParserAux(lean_object* v_kind_5728_, lean_object* v_tables_5729_, uint8_t v_behavior_5730_, lean_object* v_c_5731_, lean_object* v_s_5732_){
_start:
{
lean_object* v_leadingTable_5733_; lean_object* v_leadingParsers_5734_; lean_object* v_iniSz_5735_; lean_object* v___x_5736_; lean_object* v_fst_5737_; lean_object* v_snd_5738_; lean_object* v___x_5740_; uint8_t v_isShared_5741_; uint8_t v_isSharedCheck_5759_; 
v_leadingTable_5733_ = lean_ctor_get(v_tables_5729_, 0);
lean_inc(v_leadingTable_5733_);
v_leadingParsers_5734_ = lean_ctor_get(v_tables_5729_, 1);
lean_inc(v_leadingParsers_5734_);
lean_dec_ref(v_tables_5729_);
v_iniSz_5735_ = l_Lean_Parser_ParserState_stackSize(v_s_5732_);
lean_inc_ref(v_c_5731_);
v___x_5736_ = l_Lean_Parser_indexed___redArg(v_leadingTable_5733_, v_c_5731_, v_s_5732_, v_behavior_5730_);
lean_dec(v_leadingTable_5733_);
v_fst_5737_ = lean_ctor_get(v___x_5736_, 0);
v_snd_5738_ = lean_ctor_get(v___x_5736_, 1);
v_isSharedCheck_5759_ = !lean_is_exclusive(v___x_5736_);
if (v_isSharedCheck_5759_ == 0)
{
v___x_5740_ = v___x_5736_;
v_isShared_5741_ = v_isSharedCheck_5759_;
goto v_resetjp_5739_;
}
else
{
lean_inc(v_snd_5738_);
lean_inc(v_fst_5737_);
lean_dec(v___x_5736_);
v___x_5740_ = lean_box(0);
v_isShared_5741_ = v_isSharedCheck_5759_;
goto v_resetjp_5739_;
}
v_resetjp_5739_:
{
lean_object* v_errorMsg_5742_; lean_object* v___x_5743_; uint8_t v___x_5744_; 
v_errorMsg_5742_ = lean_ctor_get(v_fst_5737_, 4);
v___x_5743_ = lean_box(0);
v___x_5744_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5742_, v___x_5743_);
if (v___x_5744_ == 0)
{
lean_del_object(v___x_5740_);
lean_dec(v_snd_5738_);
lean_dec(v_iniSz_5735_);
lean_dec(v_leadingParsers_5734_);
lean_dec_ref(v_c_5731_);
lean_dec(v_kind_5728_);
return v_fst_5737_;
}
else
{
lean_object* v_ps_5745_; uint8_t v___x_5746_; 
v_ps_5745_ = l_List_appendTR___redArg(v_leadingParsers_5734_, v_snd_5738_);
v___x_5746_ = l_List_isEmpty___redArg(v_ps_5745_);
if (v___x_5746_ == 0)
{
lean_object* v_s_5747_; lean_object* v___x_5748_; 
lean_del_object(v___x_5740_);
lean_dec(v_kind_5728_);
v_s_5747_ = l_Lean_Parser_longestMatchFn(v___x_5743_, v_ps_5745_, v_c_5731_, v_fst_5737_);
v___x_5748_ = l___private_Lean_Parser_Basic_0__Lean_Parser_mkResult(v_s_5747_, v_iniSz_5735_);
lean_dec(v_iniSz_5735_);
return v___x_5748_;
}
else
{
lean_object* v___x_5749_; lean_object* v___x_5750_; lean_object* v___x_5752_; 
lean_dec(v_ps_5745_);
lean_dec(v_iniSz_5735_);
v___x_5749_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_5728_, v___x_5746_);
v___x_5750_ = lean_box(0);
lean_inc_ref(v___x_5749_);
if (v_isShared_5741_ == 0)
{
lean_ctor_set_tag(v___x_5740_, 1);
lean_ctor_set(v___x_5740_, 1, v___x_5750_);
lean_ctor_set(v___x_5740_, 0, v___x_5749_);
v___x_5752_ = v___x_5740_;
goto v_reusejp_5751_;
}
else
{
lean_object* v_reuseFailAlloc_5758_; 
v_reuseFailAlloc_5758_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5758_, 0, v___x_5749_);
lean_ctor_set(v_reuseFailAlloc_5758_, 1, v___x_5750_);
v___x_5752_ = v_reuseFailAlloc_5758_;
goto v_reusejp_5751_;
}
v_reusejp_5751_:
{
lean_object* v_s_5753_; lean_object* v_errorMsg_5754_; uint8_t v___x_5755_; 
v_s_5753_ = l_Lean_Parser_tokenFn(v___x_5752_, v_c_5731_, v_fst_5737_);
v_errorMsg_5754_ = lean_ctor_get(v_s_5753_, 4);
v___x_5755_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5754_, v___x_5743_);
if (v___x_5755_ == 0)
{
lean_dec_ref(v___x_5749_);
return v_s_5753_;
}
else
{
lean_object* v___x_5756_; lean_object* v___x_5757_; 
v___x_5756_ = lean_unsigned_to_nat(0u);
v___x_5757_ = l_Lean_Parser_ParserState_mkUnexpectedTokenError(v_s_5753_, v___x_5749_, v___x_5756_);
return v___x_5757_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParserAux___boxed(lean_object* v_kind_5760_, lean_object* v_tables_5761_, lean_object* v_behavior_5762_, lean_object* v_c_5763_, lean_object* v_s_5764_){
_start:
{
uint8_t v_behavior_boxed_5765_; lean_object* v_res_5766_; 
v_behavior_boxed_5765_ = lean_unbox(v_behavior_5762_);
v_res_5766_ = l_Lean_Parser_leadingParserAux(v_kind_5760_, v_tables_5761_, v_behavior_boxed_5765_, v_c_5763_, v_s_5764_);
return v_res_5766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParser(lean_object* v_kind_5767_, lean_object* v_tables_5768_, uint8_t v_behavior_5769_, lean_object* v_antiquotParser_5770_, lean_object* v_a_5771_, lean_object* v_a_5772_){
_start:
{
lean_object* v___x_5773_; lean_object* v___x_5774_; uint8_t v___x_5775_; lean_object* v___x_5776_; 
v___x_5773_ = lean_box(v_behavior_5769_);
v___x_5774_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingParserAux___boxed), 5, 3);
lean_closure_set(v___x_5774_, 0, v_kind_5767_);
lean_closure_set(v___x_5774_, 1, v_tables_5768_);
lean_closure_set(v___x_5774_, 2, v___x_5773_);
v___x_5775_ = 0;
v___x_5776_ = l_Lean_Parser_withAntiquotFn(v_antiquotParser_5770_, v___x_5774_, v___x_5775_, v_a_5771_, v_a_5772_);
return v___x_5776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParser___boxed(lean_object* v_kind_5777_, lean_object* v_tables_5778_, lean_object* v_behavior_5779_, lean_object* v_antiquotParser_5780_, lean_object* v_a_5781_, lean_object* v_a_5782_){
_start:
{
uint8_t v_behavior_boxed_5783_; lean_object* v_res_5784_; 
v_behavior_boxed_5783_ = lean_unbox(v_behavior_5779_);
v_res_5784_ = l_Lean_Parser_leadingParser(v_kind_5777_, v_tables_5778_, v_behavior_boxed_5783_, v_antiquotParser_5780_, v_a_5781_, v_a_5782_);
return v_res_5784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_trailingLoopStep(lean_object* v_tables_5785_, lean_object* v_left_5786_, lean_object* v_ps_5787_, lean_object* v_c_5788_, lean_object* v_s_5789_){
_start:
{
lean_object* v_trailingParsers_5790_; lean_object* v___x_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; 
v_trailingParsers_5790_ = lean_ctor_get(v_tables_5785_, 3);
lean_inc(v_trailingParsers_5790_);
lean_dec_ref(v_tables_5785_);
v___x_5791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5791_, 0, v_left_5786_);
v___x_5792_ = l_List_appendTR___redArg(v_ps_5787_, v_trailingParsers_5790_);
v___x_5793_ = l_Lean_Parser_longestMatchFn(v___x_5791_, v___x_5792_, v_c_5788_, v_s_5789_);
return v___x_5793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_trailingLoop(lean_object* v_tables_5794_, lean_object* v_c_5795_, lean_object* v_s_5796_){
_start:
{
lean_object* v_pos_5797_; lean_object* v_trailingTable_5798_; lean_object* v_trailingParsers_5799_; lean_object* v_iniSz_5800_; uint8_t v___x_5801_; lean_object* v___x_5802_; lean_object* v_fst_5803_; lean_object* v_snd_5804_; lean_object* v_stxStack_5805_; lean_object* v_errorMsg_5806_; lean_object* v___x_5821_; uint8_t v___x_5822_; 
v_pos_5797_ = lean_ctor_get(v_s_5796_, 2);
lean_inc(v_pos_5797_);
v_trailingTable_5798_ = lean_ctor_get(v_tables_5794_, 2);
v_trailingParsers_5799_ = lean_ctor_get(v_tables_5794_, 3);
v_iniSz_5800_ = l_Lean_Parser_ParserState_stackSize(v_s_5796_);
v___x_5801_ = 0;
lean_inc_ref(v_c_5795_);
v___x_5802_ = l_Lean_Parser_indexed___redArg(v_trailingTable_5798_, v_c_5795_, v_s_5796_, v___x_5801_);
v_fst_5803_ = lean_ctor_get(v___x_5802_, 0);
lean_inc(v_fst_5803_);
v_snd_5804_ = lean_ctor_get(v___x_5802_, 1);
lean_inc(v_snd_5804_);
lean_dec_ref(v___x_5802_);
v_stxStack_5805_ = lean_ctor_get(v_fst_5803_, 0);
v_errorMsg_5806_ = lean_ctor_get(v_fst_5803_, 4);
v___x_5821_ = lean_box(0);
v___x_5822_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5806_, v___x_5821_);
if (v___x_5822_ == 0)
{
lean_object* v___x_5823_; 
lean_dec(v_snd_5804_);
lean_dec_ref(v_c_5795_);
lean_dec_ref(v_tables_5794_);
v___x_5823_ = l_Lean_Parser_ParserState_restore(v_fst_5803_, v_iniSz_5800_, v_pos_5797_);
lean_dec(v_iniSz_5800_);
return v___x_5823_;
}
else
{
uint8_t v___x_5824_; 
v___x_5824_ = l_List_isEmpty___redArg(v_snd_5804_);
if (v___x_5824_ == 0)
{
goto v___jp_5807_;
}
else
{
uint8_t v___x_5825_; 
v___x_5825_ = l_List_isEmpty___redArg(v_trailingParsers_5799_);
if (v___x_5825_ == 0)
{
goto v___jp_5807_;
}
else
{
lean_dec(v_snd_5804_);
lean_dec(v_iniSz_5800_);
lean_dec(v_pos_5797_);
lean_dec_ref(v_c_5795_);
lean_dec_ref(v_tables_5794_);
return v_fst_5803_;
}
}
}
v___jp_5807_:
{
lean_object* v_left_5808_; lean_object* v_s_5809_; lean_object* v_s_5810_; lean_object* v_pos_5811_; lean_object* v_errorMsg_5812_; lean_object* v___x_5813_; uint8_t v___x_5814_; 
v_left_5808_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_5805_);
v_s_5809_ = l_Lean_Parser_ParserState_popSyntax(v_fst_5803_);
lean_inc_ref(v_c_5795_);
lean_inc(v_left_5808_);
lean_inc_ref(v_tables_5794_);
v_s_5810_ = l_Lean_Parser_trailingLoopStep(v_tables_5794_, v_left_5808_, v_snd_5804_, v_c_5795_, v_s_5809_);
v_pos_5811_ = lean_ctor_get(v_s_5810_, 2);
v_errorMsg_5812_ = lean_ctor_get(v_s_5810_, 4);
v___x_5813_ = lean_box(0);
v___x_5814_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5812_, v___x_5813_);
if (v___x_5814_ == 0)
{
uint8_t v_decide_5815_; 
lean_dec_ref(v_c_5795_);
lean_dec_ref(v_tables_5794_);
v_decide_5815_ = lean_nat_dec_eq(v_pos_5811_, v_pos_5797_);
if (v_decide_5815_ == 0)
{
lean_dec(v_left_5808_);
lean_dec(v_iniSz_5800_);
lean_dec(v_pos_5797_);
return v_s_5810_;
}
else
{
lean_object* v___x_5816_; lean_object* v___x_5817_; lean_object* v___x_5818_; lean_object* v___x_5819_; 
v___x_5816_ = lean_unsigned_to_nat(1u);
v___x_5817_ = lean_nat_sub(v_iniSz_5800_, v___x_5816_);
lean_dec(v_iniSz_5800_);
v___x_5818_ = l_Lean_Parser_ParserState_restore(v_s_5810_, v___x_5817_, v_pos_5797_);
lean_dec(v___x_5817_);
v___x_5819_ = l_Lean_Parser_ParserState_pushSyntax(v___x_5818_, v_left_5808_);
return v___x_5819_;
}
}
else
{
lean_dec(v_left_5808_);
lean_dec(v_iniSz_5800_);
lean_dec(v_pos_5797_);
v_s_5796_ = v_s_5810_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_prattParser(lean_object* v_kind_5826_, lean_object* v_tables_5827_, uint8_t v_behavior_5828_, lean_object* v_antiquotParser_5829_, lean_object* v_c_5830_, lean_object* v_s_5831_){
_start:
{
lean_object* v_s_5832_; lean_object* v_errorMsg_5833_; lean_object* v___x_5834_; uint8_t v___x_5835_; 
lean_inc_ref(v_c_5830_);
lean_inc_ref(v_tables_5827_);
v_s_5832_ = l_Lean_Parser_leadingParser(v_kind_5826_, v_tables_5827_, v_behavior_5828_, v_antiquotParser_5829_, v_c_5830_, v_s_5831_);
v_errorMsg_5833_ = lean_ctor_get(v_s_5832_, 4);
v___x_5834_ = lean_box(0);
v___x_5835_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5833_, v___x_5834_);
if (v___x_5835_ == 0)
{
lean_dec_ref(v_c_5830_);
lean_dec_ref(v_tables_5827_);
return v_s_5832_;
}
else
{
lean_object* v___x_5836_; 
v___x_5836_ = l_Lean_Parser_trailingLoop(v_tables_5827_, v_c_5830_, v_s_5832_);
return v___x_5836_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_prattParser___boxed(lean_object* v_kind_5837_, lean_object* v_tables_5838_, lean_object* v_behavior_5839_, lean_object* v_antiquotParser_5840_, lean_object* v_c_5841_, lean_object* v_s_5842_){
_start:
{
uint8_t v_behavior_boxed_5843_; lean_object* v_res_5844_; 
v_behavior_boxed_5843_ = lean_unbox(v_behavior_5839_);
v_res_5844_ = l_Lean_Parser_prattParser(v_kind_5837_, v_tables_5838_, v_behavior_boxed_5843_, v_antiquotParser_5840_, v_c_5841_, v_s_5842_);
return v_res_5844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_fieldIdxFn(lean_object* v_c_5849_, lean_object* v_s_5850_){
_start:
{
lean_object* v_toInputContext_5851_; lean_object* v_pos_5852_; lean_object* v_inputString_5853_; lean_object* v_initStackSz_5854_; uint32_t v_curr_5859_; uint32_t v___x_5860_; uint8_t v___x_5861_; 
v_toInputContext_5851_ = lean_ctor_get(v_c_5849_, 0);
v_pos_5852_ = lean_ctor_get(v_s_5850_, 2);
lean_inc(v_pos_5852_);
v_inputString_5853_ = lean_ctor_get(v_toInputContext_5851_, 0);
v_initStackSz_5854_ = l_Lean_Parser_ParserState_stackSize(v_s_5850_);
v_curr_5859_ = lean_string_utf8_get(v_inputString_5853_, v_pos_5852_);
v___x_5860_ = 48;
v___x_5861_ = lean_uint32_dec_le(v___x_5860_, v_curr_5859_);
if (v___x_5861_ == 0)
{
lean_dec_ref(v_c_5849_);
goto v___jp_5855_;
}
else
{
uint32_t v___x_5862_; uint8_t v___x_5863_; 
v___x_5862_ = 57;
v___x_5863_ = lean_uint32_dec_le(v_curr_5859_, v___x_5862_);
if (v___x_5863_ == 0)
{
lean_dec_ref(v_c_5849_);
goto v___jp_5855_;
}
else
{
uint8_t v___x_5864_; 
v___x_5864_ = lean_uint32_dec_eq(v_curr_5859_, v___x_5860_);
if (v___x_5864_ == 0)
{
lean_object* v___f_5865_; lean_object* v_s_5866_; lean_object* v___x_5867_; lean_object* v___x_5868_; 
lean_dec(v_initStackSz_5854_);
v___f_5865_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0));
v_s_5866_ = l_Lean_Parser_takeWhileFn(v___f_5865_, v_c_5849_, v_s_5850_);
v___x_5867_ = ((lean_object*)(l_Lean_Parser_fieldIdxFn___closed__2));
v___x_5868_ = l_Lean_Parser_mkNodeToken(v___x_5867_, v_pos_5852_, v___x_5863_, v_c_5849_, v_s_5866_);
return v___x_5868_;
}
else
{
lean_dec_ref(v_c_5849_);
goto v___jp_5855_;
}
}
}
v___jp_5855_:
{
lean_object* v___x_5856_; lean_object* v___x_5857_; lean_object* v___x_5858_; 
v___x_5856_ = ((lean_object*)(l_Lean_Parser_fieldIdxFn___closed__0));
v___x_5857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5857_, 0, v_initStackSz_5854_);
v___x_5858_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_5850_, v___x_5856_, v_pos_5852_, v___x_5857_);
lean_dec_ref_known(v___x_5857_, 1);
return v___x_5858_;
}
}
}
static lean_object* _init_l_Lean_Parser_fieldIdx___closed__0(void){
_start:
{
uint8_t v___x_5869_; uint8_t v___x_5870_; lean_object* v___x_5871_; lean_object* v___x_5872_; lean_object* v___x_5873_; 
v___x_5869_ = 0;
v___x_5870_ = 1;
v___x_5871_ = ((lean_object*)(l_Lean_Parser_fieldIdxFn___closed__2));
v___x_5872_ = ((lean_object*)(l_Lean_Parser_fieldIdxFn___closed__1));
v___x_5873_ = l_Lean_Parser_mkAntiquot(v___x_5872_, v___x_5871_, v___x_5870_, v___x_5869_);
return v___x_5873_;
}
}
static lean_object* _init_l_Lean_Parser_fieldIdx___closed__1(void){
_start:
{
lean_object* v___x_5874_; lean_object* v___x_5875_; 
v___x_5874_ = ((lean_object*)(l_Lean_Parser_fieldIdxFn___closed__1));
v___x_5875_ = l_Lean_Parser_mkAtomicInfo(v___x_5874_);
return v___x_5875_;
}
}
static lean_object* _init_l_Lean_Parser_fieldIdx___closed__2(void){
_start:
{
lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; 
v___x_5876_ = lean_alloc_closure((void*)(l_Lean_Parser_fieldIdxFn), 2, 0);
v___x_5877_ = lean_obj_once(&l_Lean_Parser_fieldIdx___closed__1, &l_Lean_Parser_fieldIdx___closed__1_once, _init_l_Lean_Parser_fieldIdx___closed__1);
v___x_5878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5878_, 0, v___x_5877_);
lean_ctor_set(v___x_5878_, 1, v___x_5876_);
return v___x_5878_;
}
}
static lean_object* _init_l_Lean_Parser_fieldIdx___closed__3(void){
_start:
{
lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; 
v___x_5879_ = lean_obj_once(&l_Lean_Parser_fieldIdx___closed__2, &l_Lean_Parser_fieldIdx___closed__2_once, _init_l_Lean_Parser_fieldIdx___closed__2);
v___x_5880_ = lean_obj_once(&l_Lean_Parser_fieldIdx___closed__0, &l_Lean_Parser_fieldIdx___closed__0_once, _init_l_Lean_Parser_fieldIdx___closed__0);
v___x_5881_ = l_Lean_Parser_withAntiquot(v___x_5880_, v___x_5879_);
return v___x_5881_;
}
}
static lean_object* _init_l_Lean_Parser_fieldIdx(void){
_start:
{
lean_object* v___x_5882_; 
v___x_5882_ = lean_obj_once(&l_Lean_Parser_fieldIdx___closed__3, &l_Lean_Parser_fieldIdx___closed__3_once, _init_l_Lean_Parser_fieldIdx___closed__3);
return v___x_5882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_skip___lam__0(lean_object* v_x_5883_, lean_object* v_s_5884_){
_start:
{
lean_inc_ref(v_s_5884_);
return v_s_5884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_skip___lam__0___boxed(lean_object* v_x_5885_, lean_object* v_s_5886_){
_start:
{
lean_object* v_res_5887_; 
v_res_5887_ = l_Lean_Parser_skip___lam__0(v_x_5885_, v_s_5886_);
lean_dec_ref(v_s_5886_);
lean_dec_ref(v_x_5885_);
return v_res_5887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___redArg(lean_object* v_inst_5893_, lean_object* v_s_5894_, lean_object* v_f_5895_, lean_object* v_b_5896_){
_start:
{
lean_object* v_toApplicative_5897_; lean_object* v_toPure_5898_; lean_object* v___x_5899_; lean_object* v___x_5900_; lean_object* v___x_5901_; uint8_t v___x_5902_; 
v_toApplicative_5897_ = lean_ctor_get(v_inst_5893_, 0);
v_toPure_5898_ = lean_ctor_get(v_toApplicative_5897_, 1);
v___x_5899_ = l_Lean_Syntax_getArgs(v_s_5894_);
v___x_5900_ = lean_unsigned_to_nat(0u);
v___x_5901_ = lean_array_get_size(v___x_5899_);
v___x_5902_ = lean_nat_dec_lt(v___x_5900_, v___x_5901_);
if (v___x_5902_ == 0)
{
lean_object* v___x_5903_; 
lean_inc(v_toPure_5898_);
lean_dec_ref(v___x_5899_);
lean_dec(v_f_5895_);
lean_dec_ref(v_inst_5893_);
v___x_5903_ = lean_apply_2(v_toPure_5898_, lean_box(0), v_b_5896_);
return v___x_5903_;
}
else
{
lean_object* v___x_5904_; size_t v___x_5905_; size_t v___x_5906_; lean_object* v___x_5907_; 
v___x_5904_ = lean_alloc_closure((void*)(l_flip), 6, 4);
lean_closure_set(v___x_5904_, 0, lean_box(0));
lean_closure_set(v___x_5904_, 1, lean_box(0));
lean_closure_set(v___x_5904_, 2, lean_box(0));
lean_closure_set(v___x_5904_, 3, v_f_5895_);
v___x_5905_ = ((size_t)0ULL);
v___x_5906_ = lean_usize_of_nat(v___x_5901_);
v___x_5907_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_5893_, v___x_5904_, v___x_5899_, v___x_5905_, v___x_5906_, v_b_5896_);
return v___x_5907_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___redArg___boxed(lean_object* v_inst_5908_, lean_object* v_s_5909_, lean_object* v_f_5910_, lean_object* v_b_5911_){
_start:
{
lean_object* v_res_5912_; 
v_res_5912_ = l_Lean_Syntax_foldArgsM___redArg(v_inst_5908_, v_s_5909_, v_f_5910_, v_b_5911_);
lean_dec(v_s_5909_);
return v_res_5912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM(lean_object* v_m_5913_, lean_object* v_inst_5914_, lean_object* v_00_u03b2_5915_, lean_object* v_s_5916_, lean_object* v_f_5917_, lean_object* v_b_5918_){
_start:
{
lean_object* v___x_5919_; 
v___x_5919_ = l_Lean_Syntax_foldArgsM___redArg(v_inst_5914_, v_s_5916_, v_f_5917_, v_b_5918_);
return v___x_5919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___boxed(lean_object* v_m_5920_, lean_object* v_inst_5921_, lean_object* v_00_u03b2_5922_, lean_object* v_s_5923_, lean_object* v_f_5924_, lean_object* v_b_5925_){
_start:
{
lean_object* v_res_5926_; 
v_res_5926_ = l_Lean_Syntax_foldArgsM(v_m_5920_, v_inst_5921_, v_00_u03b2_5922_, v_s_5923_, v_f_5924_, v_b_5925_);
lean_dec(v_s_5923_);
return v_res_5926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___redArg___lam__0(lean_object* v_f_5927_, lean_object* v_x1_5928_, lean_object* v_x2_5929_){
_start:
{
lean_object* v___x_5930_; 
v___x_5930_ = lean_apply_2(v_f_5927_, v_x1_5928_, v_x2_5929_);
return v___x_5930_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg(lean_object* v_f_5931_, lean_object* v_as_5932_, size_t v_i_5933_, size_t v_stop_5934_, lean_object* v_b_5935_){
_start:
{
uint8_t v___x_5936_; 
v___x_5936_ = lean_usize_dec_eq(v_i_5933_, v_stop_5934_);
if (v___x_5936_ == 0)
{
lean_object* v___x_5937_; lean_object* v___x_5938_; size_t v___x_5939_; size_t v___x_5940_; 
v___x_5937_ = lean_array_uget_borrowed(v_as_5932_, v_i_5933_);
lean_inc(v_f_5931_);
lean_inc(v___x_5937_);
v___x_5938_ = lean_apply_2(v_f_5931_, v___x_5937_, v_b_5935_);
v___x_5939_ = ((size_t)1ULL);
v___x_5940_ = lean_usize_add(v_i_5933_, v___x_5939_);
v_i_5933_ = v___x_5940_;
v_b_5935_ = v___x_5938_;
goto _start;
}
else
{
lean_dec(v_f_5931_);
return v_b_5935_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg___boxed(lean_object* v_f_5942_, lean_object* v_as_5943_, lean_object* v_i_5944_, lean_object* v_stop_5945_, lean_object* v_b_5946_){
_start:
{
size_t v_i_boxed_5947_; size_t v_stop_boxed_5948_; lean_object* v_res_5949_; 
v_i_boxed_5947_ = lean_unbox_usize(v_i_5944_);
lean_dec(v_i_5944_);
v_stop_boxed_5948_ = lean_unbox_usize(v_stop_5945_);
lean_dec(v_stop_5945_);
v_res_5949_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg(v_f_5942_, v_as_5943_, v_i_boxed_5947_, v_stop_boxed_5948_, v_b_5946_);
lean_dec_ref(v_as_5943_);
return v_res_5949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg(lean_object* v_s_5950_, lean_object* v_f_5951_, lean_object* v_b_5952_){
_start:
{
lean_object* v___x_5953_; lean_object* v___x_5954_; lean_object* v___x_5955_; uint8_t v___x_5956_; 
v___x_5953_ = l_Lean_Syntax_getArgs(v_s_5950_);
v___x_5954_ = lean_unsigned_to_nat(0u);
v___x_5955_ = lean_array_get_size(v___x_5953_);
v___x_5956_ = lean_nat_dec_lt(v___x_5954_, v___x_5955_);
if (v___x_5956_ == 0)
{
lean_dec_ref(v___x_5953_);
lean_dec(v_f_5951_);
return v_b_5952_;
}
else
{
size_t v___x_5957_; size_t v___x_5958_; lean_object* v___x_5959_; 
v___x_5957_ = ((size_t)0ULL);
v___x_5958_ = lean_usize_of_nat(v___x_5955_);
v___x_5959_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg(v_f_5951_, v___x_5953_, v___x_5957_, v___x_5958_, v_b_5952_);
lean_dec_ref(v___x_5953_);
return v___x_5959_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg___boxed(lean_object* v_s_5960_, lean_object* v_f_5961_, lean_object* v_b_5962_){
_start:
{
lean_object* v_res_5963_; 
v_res_5963_ = l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg(v_s_5960_, v_f_5961_, v_b_5962_);
lean_dec(v_s_5960_);
return v_res_5963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___redArg(lean_object* v_s_5964_, lean_object* v_f_5965_, lean_object* v_b_5966_){
_start:
{
lean_object* v___f_5967_; lean_object* v___x_5968_; 
v___f_5967_ = lean_alloc_closure((void*)(l_Lean_Syntax_foldArgs___redArg___lam__0), 3, 1);
lean_closure_set(v___f_5967_, 0, v_f_5965_);
v___x_5968_ = l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg(v_s_5964_, v___f_5967_, v_b_5966_);
return v___x_5968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___redArg___boxed(lean_object* v_s_5969_, lean_object* v_f_5970_, lean_object* v_b_5971_){
_start:
{
lean_object* v_res_5972_; 
v_res_5972_ = l_Lean_Syntax_foldArgs___redArg(v_s_5969_, v_f_5970_, v_b_5971_);
lean_dec(v_s_5969_);
return v_res_5972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs(lean_object* v_00_u03b2_5973_, lean_object* v_s_5974_, lean_object* v_f_5975_, lean_object* v_b_5976_){
_start:
{
lean_object* v___x_5977_; 
v___x_5977_ = l_Lean_Syntax_foldArgs___redArg(v_s_5974_, v_f_5975_, v_b_5976_);
return v___x_5977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___boxed(lean_object* v_00_u03b2_5978_, lean_object* v_s_5979_, lean_object* v_f_5980_, lean_object* v_b_5981_){
_start:
{
lean_object* v_res_5982_; 
v_res_5982_ = l_Lean_Syntax_foldArgs(v_00_u03b2_5978_, v_s_5979_, v_f_5980_, v_b_5981_);
lean_dec(v_s_5979_);
return v_res_5982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0(lean_object* v_00_u03b2_5983_, lean_object* v_s_5984_, lean_object* v_f_5985_, lean_object* v_b_5986_){
_start:
{
lean_object* v___x_5987_; 
v___x_5987_ = l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg(v_s_5984_, v_f_5985_, v_b_5986_);
return v___x_5987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___boxed(lean_object* v_00_u03b2_5988_, lean_object* v_s_5989_, lean_object* v_f_5990_, lean_object* v_b_5991_){
_start:
{
lean_object* v_res_5992_; 
v_res_5992_ = l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0(v_00_u03b2_5988_, v_s_5989_, v_f_5990_, v_b_5991_);
lean_dec(v_s_5989_);
return v_res_5992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0(lean_object* v_00_u03b2_5993_, lean_object* v_f_5994_, lean_object* v_as_5995_, size_t v_i_5996_, size_t v_stop_5997_, lean_object* v_b_5998_){
_start:
{
lean_object* v___x_5999_; 
v___x_5999_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg(v_f_5994_, v_as_5995_, v_i_5996_, v_stop_5997_, v_b_5998_);
return v___x_5999_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___boxed(lean_object* v_00_u03b2_6000_, lean_object* v_f_6001_, lean_object* v_as_6002_, lean_object* v_i_6003_, lean_object* v_stop_6004_, lean_object* v_b_6005_){
_start:
{
size_t v_i_boxed_6006_; size_t v_stop_boxed_6007_; lean_object* v_res_6008_; 
v_i_boxed_6006_ = lean_unbox_usize(v_i_6003_);
lean_dec(v_i_6003_);
v_stop_boxed_6007_ = lean_unbox_usize(v_stop_6004_);
lean_dec(v_stop_6004_);
v_res_6008_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0(v_00_u03b2_6000_, v_f_6001_, v_as_6002_, v_i_boxed_6006_, v_stop_boxed_6007_, v_b_6005_);
lean_dec_ref(v_as_6002_);
return v_res_6008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___redArg___lam__0(lean_object* v_f_6009_, lean_object* v_s_6010_, lean_object* v_x_6011_){
_start:
{
lean_object* v___x_6012_; 
v___x_6012_ = lean_apply_1(v_f_6009_, v_s_6010_);
return v___x_6012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___redArg(lean_object* v_inst_6013_, lean_object* v_s_6014_, lean_object* v_f_6015_){
_start:
{
lean_object* v___f_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; 
v___f_6016_ = lean_alloc_closure((void*)(l_Lean_Syntax_forArgsM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_6016_, 0, v_f_6015_);
v___x_6017_ = lean_box(0);
v___x_6018_ = l_Lean_Syntax_foldArgsM___redArg(v_inst_6013_, v_s_6014_, v___f_6016_, v___x_6017_);
return v___x_6018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___redArg___boxed(lean_object* v_inst_6019_, lean_object* v_s_6020_, lean_object* v_f_6021_){
_start:
{
lean_object* v_res_6022_; 
v_res_6022_ = l_Lean_Syntax_forArgsM___redArg(v_inst_6019_, v_s_6020_, v_f_6021_);
lean_dec(v_s_6020_);
return v_res_6022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM(lean_object* v_m_6023_, lean_object* v_inst_6024_, lean_object* v_s_6025_, lean_object* v_f_6026_){
_start:
{
lean_object* v___x_6027_; 
v___x_6027_ = l_Lean_Syntax_forArgsM___redArg(v_inst_6024_, v_s_6025_, v_f_6026_);
return v___x_6027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___boxed(lean_object* v_m_6028_, lean_object* v_inst_6029_, lean_object* v_s_6030_, lean_object* v_f_6031_){
_start:
{
lean_object* v_res_6032_; 
v_res_6032_ = l_Lean_Syntax_forArgsM(v_m_6028_, v_inst_6029_, v_s_6030_, v_f_6031_);
lean_dec(v_s_6030_);
return v_res_6032_;
}
}
lean_object* runtime_initialize_Lean_Parser_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_numLitNoAntiquot = _init_l_Lean_Parser_numLitNoAntiquot();
lean_mark_persistent(l_Lean_Parser_numLitNoAntiquot);
l_Lean_Parser_hexnumNoAntiquot = _init_l_Lean_Parser_hexnumNoAntiquot();
lean_mark_persistent(l_Lean_Parser_hexnumNoAntiquot);
l_Lean_Parser_scientificLitNoAntiquot = _init_l_Lean_Parser_scientificLitNoAntiquot();
lean_mark_persistent(l_Lean_Parser_scientificLitNoAntiquot);
l_Lean_Parser_strLitNoAntiquot = _init_l_Lean_Parser_strLitNoAntiquot();
lean_mark_persistent(l_Lean_Parser_strLitNoAntiquot);
l_Lean_Parser_charLitNoAntiquot = _init_l_Lean_Parser_charLitNoAntiquot();
lean_mark_persistent(l_Lean_Parser_charLitNoAntiquot);
l_Lean_Parser_nameLitNoAntiquot = _init_l_Lean_Parser_nameLitNoAntiquot();
lean_mark_persistent(l_Lean_Parser_nameLitNoAntiquot);
l_Lean_Parser_identNoAntiquot = _init_l_Lean_Parser_identNoAntiquot();
lean_mark_persistent(l_Lean_Parser_identNoAntiquot);
l_Lean_Parser_hygieneInfoNoAntiquot = _init_l_Lean_Parser_hygieneInfoNoAntiquot();
lean_mark_persistent(l_Lean_Parser_hygieneInfoNoAntiquot);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_eoi = _init_l_Lean_Parser_eoi();
lean_mark_persistent(l_Lean_Parser_eoi);
l_Lean_Parser_instInhabitedLeadingIdentBehavior_default = _init_l_Lean_Parser_instInhabitedLeadingIdentBehavior_default();
l_Lean_Parser_instInhabitedLeadingIdentBehavior = _init_l_Lean_Parser_instInhabitedLeadingIdentBehavior();
l_Lean_Parser_instInhabitedParserCategory_default = _init_l_Lean_Parser_instInhabitedParserCategory_default();
lean_mark_persistent(l_Lean_Parser_instInhabitedParserCategory_default);
l_Lean_Parser_instInhabitedParserCategory = _init_l_Lean_Parser_instInhabitedParserCategory();
lean_mark_persistent(l_Lean_Parser_instInhabitedParserCategory);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_categoryParserFnRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_categoryParserFnRef);
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_categoryParserFnExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_categoryParserFnExtension);
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_antiquotNestedExpr = _init_l_Lean_Parser_antiquotNestedExpr();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr);
l_Lean_Parser_antiquotExpr = _init_l_Lean_Parser_antiquotExpr();
lean_mark_persistent(l_Lean_Parser_antiquotExpr);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_fieldIdx = _init_l_Lean_Parser_fieldIdx();
lean_mark_persistent(l_Lean_Parser_fieldIdx);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Parser_withForbiddens___auto__1 = _init_l_Lean_Parser_withForbiddens___auto__1();
lean_mark_persistent(l_Lean_Parser_withForbiddens___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Types(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
