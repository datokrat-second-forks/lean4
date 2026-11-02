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
uint8_t l_String_instDecidableLtRaw(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Parser_takeUntilFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_takeWhileFn___lam__0(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhileFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhileFn(lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l_Lean_Parser_whitespace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_takeUntilFn, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_whitespace___closed__0_value)} };
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
static const lean_closure_object l_Lean_Parser_checkNoImmediateColon___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_checkNoImmediateColon___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
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
v___x_662_ = l_String_instDecidableLtRaw(v_pos_655_, v_pos_640_);
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
lean_inc(v_pos_1443_);
lean_inc_ref(v_toInputContext_1444_);
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
lean_dec_ref(v_c_1441_);
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
lean_dec_ref(v_c_1441_);
return v___x_1454_;
}
}
else
{
lean_object* v___x_1455_; lean_object* v___x_1456_; 
lean_dec_ref(v_c_1441_);
lean_dec_ref(v_errorMsg_1440_);
lean_dec_ref(v_p_1439_);
v___x_1455_ = lean_box(0);
v___x_1456_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1442_, v___x_1455_);
return v___x_1456_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeUntilFn(lean_object* v_p_1457_, lean_object* v_c_1458_, lean_object* v_s_1459_){
_start:
{
lean_object* v_pos_1460_; lean_object* v_toInputContext_1461_; uint8_t v___x_1462_; 
v_pos_1460_ = lean_ctor_get(v_s_1459_, 2);
v_toInputContext_1461_ = lean_ctor_get(v_c_1458_, 0);
lean_inc(v_pos_1460_);
lean_inc_ref(v_toInputContext_1461_);
v___x_1462_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1461_, v_pos_1460_);
if (v___x_1462_ == 0)
{
lean_object* v_inputString_1463_; uint32_t v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; uint8_t v___x_1467_; 
v_inputString_1463_ = lean_ctor_get(v_toInputContext_1461_, 0);
v___x_1464_ = lean_string_utf8_get_fast(v_inputString_1463_, v_pos_1460_);
v___x_1465_ = lean_box_uint32(v___x_1464_);
lean_inc_ref(v_p_1457_);
v___x_1466_ = lean_apply_1(v_p_1457_, v___x_1465_);
v___x_1467_ = lean_unbox(v___x_1466_);
if (v___x_1467_ == 0)
{
lean_object* v___x_1468_; 
lean_inc(v_pos_1460_);
v___x_1468_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1459_, v_c_1458_, v_pos_1460_);
lean_dec(v_pos_1460_);
v_s_1459_ = v___x_1468_;
goto _start;
}
else
{
lean_dec_ref(v_c_1458_);
lean_dec_ref(v_p_1457_);
return v_s_1459_;
}
}
else
{
lean_dec_ref(v_c_1458_);
lean_dec_ref(v_p_1457_);
return v_s_1459_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_takeWhileFn___lam__0(lean_object* v_p_1470_, uint32_t v_c_1471_){
_start:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; uint8_t v___x_1474_; 
v___x_1472_ = lean_box_uint32(v_c_1471_);
v___x_1473_ = lean_apply_1(v_p_1470_, v___x_1472_);
v___x_1474_ = lean_unbox(v___x_1473_);
if (v___x_1474_ == 0)
{
uint8_t v___x_1475_; 
v___x_1475_ = 1;
return v___x_1475_;
}
else
{
uint8_t v___x_1476_; 
v___x_1476_ = 0;
return v___x_1476_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhileFn___lam__0___boxed(lean_object* v_p_1477_, lean_object* v_c_1478_){
_start:
{
uint32_t v_c_boxed_1479_; uint8_t v_res_1480_; lean_object* v_r_1481_; 
v_c_boxed_1479_ = lean_unbox_uint32(v_c_1478_);
lean_dec(v_c_1478_);
v_res_1480_ = l_Lean_Parser_takeWhileFn___lam__0(v_p_1477_, v_c_boxed_1479_);
v_r_1481_ = lean_box(v_res_1480_);
return v_r_1481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhileFn(lean_object* v_p_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_){
_start:
{
lean_object* v___f_1485_; lean_object* v___x_1486_; 
v___f_1485_ = lean_alloc_closure((void*)(l_Lean_Parser_takeWhileFn___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1485_, 0, v_p_1482_);
v___x_1486_ = l_Lean_Parser_takeUntilFn(v___f_1485_, v_a_1483_, v_a_1484_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhile1Fn(lean_object* v_p_1487_, lean_object* v_errorMsg_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_){
_start:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
lean_inc_ref(v_p_1487_);
v___x_1491_ = lean_alloc_closure((void*)(l_Lean_Parser_satisfyFn), 4, 2);
lean_closure_set(v___x_1491_, 0, v_p_1487_);
lean_closure_set(v___x_1491_, 1, v_errorMsg_1488_);
v___x_1492_ = lean_alloc_closure((void*)(l_Lean_Parser_takeWhileFn), 3, 1);
lean_closure_set(v___x_1492_, 0, v_p_1487_);
v___x_1493_ = l_Lean_Parser_andthenFn(v___x_1491_, v___x_1492_, v_a_1489_, v_a_1490_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(uint8_t v_pushMissingOnError_1495_, lean_object* v_s_1496_){
_start:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1497_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi___closed__0));
v___x_1498_ = lean_box(0);
v___x_1499_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1496_, v___x_1497_, v___x_1498_, v_pushMissingOnError_1495_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi___boxed(lean_object* v_pushMissingOnError_1500_, lean_object* v_s_1501_){
_start:
{
uint8_t v_pushMissingOnError_boxed_1502_; lean_object* v_res_1503_; 
v_pushMissingOnError_boxed_1502_ = lean_unbox(v_pushMissingOnError_1500_);
v_res_1503_ = l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(v_pushMissingOnError_boxed_1502_, v_s_1501_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_finishCommentBlock(uint8_t v_pushMissingOnError_1504_, lean_object* v_nesting_1505_, lean_object* v_c_1506_, lean_object* v_s_1507_){
_start:
{
lean_object* v_pos_1508_; lean_object* v_toInputContext_1509_; uint8_t v___x_1510_; 
v_pos_1508_ = lean_ctor_get(v_s_1507_, 2);
v_toInputContext_1509_ = lean_ctor_get(v_c_1506_, 0);
lean_inc(v_pos_1508_);
lean_inc_ref(v_toInputContext_1509_);
v___x_1510_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1509_, v_pos_1508_);
if (v___x_1510_ == 0)
{
lean_object* v_inputString_1511_; uint32_t v_curr_1512_; lean_object* v_i_1513_; uint32_t v___x_1514_; uint8_t v___x_1515_; 
v_inputString_1511_ = lean_ctor_get(v_toInputContext_1509_, 0);
v_curr_1512_ = lean_string_utf8_get_fast(v_inputString_1511_, v_pos_1508_);
v_i_1513_ = lean_string_utf8_next_fast(v_inputString_1511_, v_pos_1508_);
v___x_1514_ = 45;
v___x_1515_ = lean_uint32_dec_eq(v_curr_1512_, v___x_1514_);
if (v___x_1515_ == 0)
{
uint32_t v___x_1516_; uint8_t v___x_1517_; 
v___x_1516_ = 47;
v___x_1517_ = lean_uint32_dec_eq(v_curr_1512_, v___x_1516_);
if (v___x_1517_ == 0)
{
lean_object* v___x_1518_; 
v___x_1518_ = l_Lean_Parser_ParserState_setPos(v_s_1507_, v_i_1513_);
v_s_1507_ = v___x_1518_;
goto _start;
}
else
{
uint8_t v___x_1520_; 
lean_inc_ref(v_toInputContext_1509_);
v___x_1520_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1509_, v_i_1513_);
if (v___x_1520_ == 0)
{
uint32_t v_curr_1521_; uint8_t v___x_1522_; 
v_curr_1521_ = lean_string_utf8_get_fast(v_inputString_1511_, v_i_1513_);
v___x_1522_ = lean_uint32_dec_eq(v_curr_1521_, v___x_1514_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1523_; 
v___x_1523_ = l_Lean_Parser_ParserState_setPos(v_s_1507_, v_i_1513_);
v_s_1507_ = v___x_1523_;
goto _start;
}
else
{
lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1525_ = lean_unsigned_to_nat(1u);
v___x_1526_ = lean_nat_add(v_nesting_1505_, v___x_1525_);
lean_dec(v_nesting_1505_);
v___x_1527_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1507_, v_c_1506_, v_i_1513_);
v_nesting_1505_ = v___x_1526_;
v_s_1507_ = v___x_1527_;
goto _start;
}
}
else
{
lean_object* v___x_1529_; 
lean_dec_ref(v_c_1506_);
lean_dec(v_nesting_1505_);
v___x_1529_ = l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(v_pushMissingOnError_1504_, v_s_1507_);
return v___x_1529_;
}
}
}
else
{
uint8_t v___x_1530_; 
lean_inc_ref(v_toInputContext_1509_);
v___x_1530_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1509_, v_i_1513_);
if (v___x_1530_ == 0)
{
uint32_t v_curr_1531_; uint32_t v___x_1532_; uint8_t v___x_1533_; 
v_curr_1531_ = lean_string_utf8_get_fast(v_inputString_1511_, v_i_1513_);
v___x_1532_ = 47;
v___x_1533_ = lean_uint32_dec_eq(v_curr_1531_, v___x_1532_);
if (v___x_1533_ == 0)
{
lean_object* v___x_1534_; 
v___x_1534_ = l_Lean_Parser_ParserState_setPos(v_s_1507_, v_i_1513_);
v_s_1507_ = v___x_1534_;
goto _start;
}
else
{
lean_object* v___x_1536_; uint8_t v___x_1537_; 
v___x_1536_ = lean_unsigned_to_nat(1u);
v___x_1537_ = lean_nat_dec_eq(v_nesting_1505_, v___x_1536_);
if (v___x_1537_ == 0)
{
lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1538_ = lean_nat_sub(v_nesting_1505_, v___x_1536_);
lean_dec(v_nesting_1505_);
v___x_1539_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1507_, v_c_1506_, v_i_1513_);
v_nesting_1505_ = v___x_1538_;
v_s_1507_ = v___x_1539_;
goto _start;
}
else
{
lean_object* v___x_1541_; 
lean_dec(v_nesting_1505_);
v___x_1541_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1507_, v_c_1506_, v_i_1513_);
lean_dec_ref(v_c_1506_);
return v___x_1541_;
}
}
}
else
{
lean_object* v___x_1542_; 
lean_dec_ref(v_c_1506_);
lean_dec(v_nesting_1505_);
v___x_1542_ = l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(v_pushMissingOnError_1504_, v_s_1507_);
return v___x_1542_;
}
}
}
else
{
lean_object* v___x_1543_; 
lean_dec_ref(v_c_1506_);
lean_dec(v_nesting_1505_);
v___x_1543_ = l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(v_pushMissingOnError_1504_, v_s_1507_);
return v___x_1543_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_finishCommentBlock___boxed(lean_object* v_pushMissingOnError_1544_, lean_object* v_nesting_1545_, lean_object* v_c_1546_, lean_object* v_s_1547_){
_start:
{
uint8_t v_pushMissingOnError_boxed_1548_; lean_object* v_res_1549_; 
v_pushMissingOnError_boxed_1548_ = lean_unbox(v_pushMissingOnError_1544_);
v_res_1549_ = l_Lean_Parser_finishCommentBlock(v_pushMissingOnError_boxed_1548_, v_nesting_1545_, v_c_1546_, v_s_1547_);
return v_res_1549_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_whitespace___lam__0(uint32_t v_c_1550_){
_start:
{
uint32_t v___x_1551_; uint8_t v___x_1552_; 
v___x_1551_ = 10;
v___x_1552_ = lean_uint32_dec_eq(v_c_1550_, v___x_1551_);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_whitespace___lam__0___boxed(lean_object* v_c_1553_){
_start:
{
uint32_t v_c_boxed_1554_; uint8_t v_res_1555_; lean_object* v_r_1556_; 
v_c_boxed_1554_ = lean_unbox_uint32(v_c_1553_);
lean_dec(v_c_1553_);
v_res_1555_ = l_Lean_Parser_whitespace___lam__0(v_c_boxed_1554_);
v_r_1556_ = lean_box(v_res_1555_);
return v_r_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_whitespace(lean_object* v_c_1562_, lean_object* v_s_1563_){
_start:
{
lean_object* v_pos_1564_; lean_object* v_toInputContext_1568_; uint8_t v___x_1569_; 
v_pos_1564_ = lean_ctor_get(v_s_1563_, 2);
v_toInputContext_1568_ = lean_ctor_get(v_c_1562_, 0);
lean_inc(v_pos_1564_);
lean_inc_ref(v_toInputContext_1568_);
v___x_1569_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1568_, v_pos_1564_);
if (v___x_1569_ == 0)
{
lean_object* v_inputString_1570_; uint32_t v_curr_1571_; uint32_t v___x_1572_; uint8_t v___x_1573_; 
v_inputString_1570_ = lean_ctor_get(v_toInputContext_1568_, 0);
v_curr_1571_ = lean_string_utf8_get_fast(v_inputString_1570_, v_pos_1564_);
v___x_1572_ = 9;
v___x_1573_ = lean_uint32_dec_eq(v_curr_1571_, v___x_1572_);
if (v___x_1573_ == 0)
{
uint32_t v___x_1574_; uint8_t v___x_1575_; 
v___x_1574_ = 13;
v___x_1575_ = lean_uint32_dec_eq(v_curr_1571_, v___x_1574_);
if (v___x_1575_ == 0)
{
uint32_t v___x_1576_; uint8_t v___x_1577_; 
v___x_1576_ = 32;
v___x_1577_ = lean_uint32_dec_eq(v_curr_1571_, v___x_1576_);
if (v___x_1577_ == 0)
{
uint32_t v___x_1578_; uint8_t v___x_1579_; 
v___x_1578_ = 10;
v___x_1579_ = lean_uint32_dec_eq(v_curr_1571_, v___x_1578_);
if (v___x_1579_ == 0)
{
uint32_t v___x_1580_; uint8_t v___x_1581_; 
v___x_1580_ = 45;
v___x_1581_ = lean_uint32_dec_eq(v_curr_1571_, v___x_1580_);
if (v___x_1581_ == 0)
{
uint32_t v___x_1582_; uint8_t v___x_1583_; 
v___x_1582_ = 47;
v___x_1583_ = lean_uint32_dec_eq(v_curr_1571_, v___x_1582_);
if (v___x_1583_ == 0)
{
lean_dec_ref(v_c_1562_);
return v_s_1563_;
}
else
{
lean_object* v_i_1584_; uint32_t v_curr_1585_; uint8_t v___x_1586_; 
v_i_1584_ = lean_string_utf8_next_fast(v_inputString_1570_, v_pos_1564_);
v_curr_1585_ = lean_string_utf8_get(v_inputString_1570_, v_i_1584_);
v___x_1586_ = lean_uint32_dec_eq(v_curr_1585_, v___x_1580_);
if (v___x_1586_ == 0)
{
lean_dec_ref(v_c_1562_);
return v_s_1563_;
}
else
{
lean_object* v_i_1587_; uint32_t v_curr_1588_; uint8_t v___x_1589_; 
v_i_1587_ = lean_string_utf8_next(v_inputString_1570_, v_i_1584_);
v_curr_1588_ = lean_string_utf8_get(v_inputString_1570_, v_i_1587_);
v___x_1589_ = lean_uint32_dec_eq(v_curr_1588_, v___x_1580_);
if (v___x_1589_ == 0)
{
uint32_t v___x_1590_; uint8_t v___x_1591_; 
v___x_1590_ = 33;
v___x_1591_ = lean_uint32_dec_eq(v_curr_1588_, v___x_1590_);
if (v___x_1591_ == 0)
{
lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1592_ = lean_unsigned_to_nat(1u);
v___x_1593_ = lean_box(v___x_1591_);
v___x_1594_ = lean_alloc_closure((void*)(l_Lean_Parser_finishCommentBlock___boxed), 4, 2);
lean_closure_set(v___x_1594_, 0, v___x_1593_);
lean_closure_set(v___x_1594_, 1, v___x_1592_);
v___x_1595_ = lean_alloc_closure((void*)(l_Lean_Parser_whitespace), 2, 0);
v___x_1596_ = l_Lean_Parser_ParserState_next(v_s_1563_, v_c_1562_, v_i_1587_);
lean_dec(v_i_1587_);
v___x_1597_ = l_Lean_Parser_andthenFn(v___x_1594_, v___x_1595_, v_c_1562_, v___x_1596_);
return v___x_1597_;
}
else
{
lean_dec(v_i_1587_);
lean_dec_ref(v_c_1562_);
return v_s_1563_;
}
}
else
{
lean_dec(v_i_1587_);
lean_dec_ref(v_c_1562_);
return v_s_1563_;
}
}
}
}
else
{
lean_object* v_i_1598_; uint32_t v_curr_1599_; uint8_t v___x_1600_; 
v_i_1598_ = lean_string_utf8_next_fast(v_inputString_1570_, v_pos_1564_);
v_curr_1599_ = lean_string_utf8_get(v_inputString_1570_, v_i_1598_);
v___x_1600_ = lean_uint32_dec_eq(v_curr_1599_, v___x_1580_);
if (v___x_1600_ == 0)
{
lean_dec_ref(v_c_1562_);
return v_s_1563_;
}
else
{
lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1601_ = ((lean_object*)(l_Lean_Parser_whitespace___closed__1));
v___x_1602_ = lean_alloc_closure((void*)(l_Lean_Parser_whitespace), 2, 0);
v___x_1603_ = l_Lean_Parser_ParserState_next(v_s_1563_, v_c_1562_, v_i_1598_);
v___x_1604_ = l_Lean_Parser_andthenFn(v___x_1601_, v___x_1602_, v_c_1562_, v___x_1603_);
return v___x_1604_;
}
}
}
else
{
lean_inc(v_pos_1564_);
goto v___jp_1565_;
}
}
else
{
lean_inc(v_pos_1564_);
goto v___jp_1565_;
}
}
else
{
lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
lean_dec_ref(v_c_1562_);
v___x_1605_ = ((lean_object*)(l_Lean_Parser_whitespace___closed__2));
v___x_1606_ = lean_box(0);
v___x_1607_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1563_, v___x_1605_, v___x_1606_, v___x_1573_);
return v___x_1607_;
}
}
else
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
lean_dec_ref(v_c_1562_);
v___x_1608_ = ((lean_object*)(l_Lean_Parser_whitespace___closed__3));
v___x_1609_ = lean_box(0);
v___x_1610_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1563_, v___x_1608_, v___x_1609_, v___x_1569_);
return v___x_1610_;
}
}
else
{
lean_dec_ref(v_c_1562_);
return v_s_1563_;
}
v___jp_1565_:
{
lean_object* v___x_1566_; 
v___x_1566_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1563_, v_c_1562_, v_pos_1564_);
lean_dec(v_pos_1564_);
v_s_1563_ = v___x_1566_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_mkEmptySubstringAt(lean_object* v_c_1611_, lean_object* v_p_1612_){
_start:
{
lean_object* v_toInputContext_1613_; lean_object* v_inputString_1614_; lean_object* v_endPos_1615_; uint8_t v___x_1616_; 
v_toInputContext_1613_ = lean_ctor_get(v_c_1611_, 0);
v_inputString_1614_ = lean_ctor_get(v_toInputContext_1613_, 0);
v_endPos_1615_ = lean_ctor_get(v_toInputContext_1613_, 3);
v___x_1616_ = lean_nat_dec_le(v_p_1612_, v_endPos_1615_);
if (v___x_1616_ == 0)
{
lean_object* v___x_1617_; 
lean_inc(v_endPos_1615_);
lean_inc_ref(v_inputString_1614_);
v___x_1617_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1617_, 0, v_inputString_1614_);
lean_ctor_set(v___x_1617_, 1, v_p_1612_);
lean_ctor_set(v___x_1617_, 2, v_endPos_1615_);
return v___x_1617_;
}
else
{
lean_object* v___x_1618_; 
lean_inc(v_p_1612_);
lean_inc_ref(v_inputString_1614_);
v___x_1618_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1618_, 0, v_inputString_1614_);
lean_ctor_set(v___x_1618_, 1, v_p_1612_);
lean_ctor_set(v___x_1618_, 2, v_p_1612_);
return v___x_1618_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_mkEmptySubstringAt___boxed(lean_object* v_c_1619_, lean_object* v_p_1620_){
_start:
{
lean_object* v_res_1621_; 
v_res_1621_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_1619_, v_p_1620_);
lean_dec_ref(v_c_1619_);
return v_res_1621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawAux(lean_object* v_startPos_1622_, uint8_t v_trailingWs_1623_, lean_object* v_c_1624_, lean_object* v_s_1625_){
_start:
{
lean_object* v_toInputContext_1626_; lean_object* v_pos_1627_; lean_object* v_inputString_1628_; lean_object* v_endPos_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1657_; 
v_toInputContext_1626_ = lean_ctor_get(v_c_1624_, 0);
lean_inc_ref(v_toInputContext_1626_);
v_pos_1627_ = lean_ctor_get(v_s_1625_, 2);
v_inputString_1628_ = lean_ctor_get(v_toInputContext_1626_, 0);
v_endPos_1629_ = lean_ctor_get(v_toInputContext_1626_, 3);
v_isSharedCheck_1657_ = !lean_is_exclusive(v_toInputContext_1626_);
if (v_isSharedCheck_1657_ == 0)
{
lean_object* v_unused_1658_; lean_object* v_unused_1659_; 
v_unused_1658_ = lean_ctor_get(v_toInputContext_1626_, 2);
lean_dec(v_unused_1658_);
v_unused_1659_ = lean_ctor_get(v_toInputContext_1626_, 1);
lean_dec(v_unused_1659_);
v___x_1631_ = v_toInputContext_1626_;
v_isShared_1632_ = v_isSharedCheck_1657_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_endPos_1629_);
lean_inc(v_inputString_1628_);
lean_dec(v_toInputContext_1626_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1657_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v_leading_1633_; lean_object* v_val_1634_; 
lean_inc(v_startPos_1622_);
v_leading_1633_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_1624_, v_startPos_1622_);
v_val_1634_ = lean_string_utf8_extract(v_inputString_1628_, v_startPos_1622_, v_pos_1627_);
if (v_trailingWs_1623_ == 0)
{
lean_object* v_trailing_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1639_; 
lean_dec(v_endPos_1629_);
lean_dec_ref(v_inputString_1628_);
lean_inc(v_pos_1627_);
v_trailing_1635_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_1624_, v_pos_1627_);
lean_dec_ref(v_c_1624_);
v___x_1636_ = lean_string_utf8_byte_size(v_val_1634_);
v___x_1637_ = lean_nat_add(v_startPos_1622_, v___x_1636_);
if (v_isShared_1632_ == 0)
{
lean_ctor_set(v___x_1631_, 3, v___x_1637_);
lean_ctor_set(v___x_1631_, 2, v_trailing_1635_);
lean_ctor_set(v___x_1631_, 1, v_startPos_1622_);
lean_ctor_set(v___x_1631_, 0, v_leading_1633_);
v___x_1639_ = v___x_1631_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_leading_1633_);
lean_ctor_set(v_reuseFailAlloc_1642_, 1, v_startPos_1622_);
lean_ctor_set(v_reuseFailAlloc_1642_, 2, v_trailing_1635_);
lean_ctor_set(v_reuseFailAlloc_1642_, 3, v___x_1637_);
v___x_1639_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
lean_object* v_atom_1640_; lean_object* v___x_1641_; 
v_atom_1640_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_1640_, 0, v___x_1639_);
lean_ctor_set(v_atom_1640_, 1, v_val_1634_);
v___x_1641_ = l_Lean_Parser_ParserState_pushSyntax(v_s_1625_, v_atom_1640_);
return v___x_1641_;
}
}
else
{
lean_object* v_s_1643_; lean_object* v___y_1645_; lean_object* v_pos_1653_; uint8_t v___x_1654_; 
lean_inc(v_pos_1627_);
v_s_1643_ = l_Lean_Parser_whitespace(v_c_1624_, v_s_1625_);
v_pos_1653_ = lean_ctor_get(v_s_1643_, 2);
v___x_1654_ = lean_nat_dec_le(v_pos_1653_, v_endPos_1629_);
if (v___x_1654_ == 0)
{
lean_object* v___x_1655_; 
v___x_1655_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1655_, 0, v_inputString_1628_);
lean_ctor_set(v___x_1655_, 1, v_pos_1627_);
lean_ctor_set(v___x_1655_, 2, v_endPos_1629_);
v___y_1645_ = v___x_1655_;
goto v___jp_1644_;
}
else
{
lean_object* v___x_1656_; 
lean_dec(v_endPos_1629_);
lean_inc(v_pos_1653_);
v___x_1656_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1656_, 0, v_inputString_1628_);
lean_ctor_set(v___x_1656_, 1, v_pos_1627_);
lean_ctor_set(v___x_1656_, 2, v_pos_1653_);
v___y_1645_ = v___x_1656_;
goto v___jp_1644_;
}
v___jp_1644_:
{
lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1649_; 
v___x_1646_ = lean_string_utf8_byte_size(v_val_1634_);
v___x_1647_ = lean_nat_add(v_startPos_1622_, v___x_1646_);
if (v_isShared_1632_ == 0)
{
lean_ctor_set(v___x_1631_, 3, v___x_1647_);
lean_ctor_set(v___x_1631_, 2, v___y_1645_);
lean_ctor_set(v___x_1631_, 1, v_startPos_1622_);
lean_ctor_set(v___x_1631_, 0, v_leading_1633_);
v___x_1649_ = v___x_1631_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v_leading_1633_);
lean_ctor_set(v_reuseFailAlloc_1652_, 1, v_startPos_1622_);
lean_ctor_set(v_reuseFailAlloc_1652_, 2, v___y_1645_);
lean_ctor_set(v_reuseFailAlloc_1652_, 3, v___x_1647_);
v___x_1649_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
lean_object* v_atom_1650_; lean_object* v___x_1651_; 
v_atom_1650_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_1650_, 0, v___x_1649_);
lean_ctor_set(v_atom_1650_, 1, v_val_1634_);
v___x_1651_ = l_Lean_Parser_ParserState_pushSyntax(v_s_1643_, v_atom_1650_);
return v___x_1651_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawAux___boxed(lean_object* v_startPos_1660_, lean_object* v_trailingWs_1661_, lean_object* v_c_1662_, lean_object* v_s_1663_){
_start:
{
uint8_t v_trailingWs_boxed_1664_; lean_object* v_res_1665_; 
v_trailingWs_boxed_1664_ = lean_unbox(v_trailingWs_1661_);
v_res_1665_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawAux(v_startPos_1660_, v_trailingWs_boxed_1664_, v_c_1662_, v_s_1663_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawFn(lean_object* v_p_1666_, uint8_t v_trailingWs_1667_, lean_object* v_c_1668_, lean_object* v_s_1669_){
_start:
{
lean_object* v_pos_1670_; lean_object* v_s_1671_; lean_object* v_errorMsg_1672_; lean_object* v___x_1673_; uint8_t v___x_1674_; 
v_pos_1670_ = lean_ctor_get(v_s_1669_, 2);
lean_inc(v_pos_1670_);
lean_inc_ref(v_c_1668_);
v_s_1671_ = lean_apply_2(v_p_1666_, v_c_1668_, v_s_1669_);
v_errorMsg_1672_ = lean_ctor_get(v_s_1671_, 4);
lean_inc(v_errorMsg_1672_);
v___x_1673_ = lean_box(0);
v___x_1674_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1672_, v___x_1673_);
lean_dec(v_errorMsg_1672_);
if (v___x_1674_ == 0)
{
lean_dec(v_pos_1670_);
lean_dec_ref(v_c_1668_);
return v_s_1671_;
}
else
{
lean_object* v___x_1675_; 
v___x_1675_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawAux(v_pos_1670_, v_trailingWs_1667_, v_c_1668_, v_s_1671_);
return v___x_1675_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawFn___boxed(lean_object* v_p_1676_, lean_object* v_trailingWs_1677_, lean_object* v_c_1678_, lean_object* v_s_1679_){
_start:
{
uint8_t v_trailingWs_boxed_1680_; lean_object* v_res_1681_; 
v_trailingWs_boxed_1680_ = lean_unbox(v_trailingWs_1677_);
v_res_1681_ = l_Lean_Parser_rawFn(v_p_1676_, v_trailingWs_boxed_1680_, v_c_1678_, v_s_1679_);
return v_res_1681_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_chFn___lam__0(uint32_t v_c_1682_, uint32_t v_d_1683_){
_start:
{
uint8_t v___x_1684_; 
v___x_1684_ = lean_uint32_dec_eq(v_c_1682_, v_d_1683_);
return v___x_1684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_chFn___lam__0___boxed(lean_object* v_c_1685_, lean_object* v_d_1686_){
_start:
{
uint32_t v_c_boxed_1687_; uint32_t v_d_boxed_1688_; uint8_t v_res_1689_; lean_object* v_r_1690_; 
v_c_boxed_1687_ = lean_unbox_uint32(v_c_1685_);
lean_dec(v_c_1685_);
v_d_boxed_1688_ = lean_unbox_uint32(v_d_1686_);
lean_dec(v_d_1686_);
v_res_1689_ = l_Lean_Parser_chFn___lam__0(v_c_boxed_1687_, v_d_boxed_1688_);
v_r_1690_ = lean_box(v_res_1689_);
return v_r_1690_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_chFn(uint32_t v_c_1693_, uint8_t v_trailingWs_1694_, lean_object* v_a_1695_, lean_object* v_a_1696_){
_start:
{
lean_object* v___x_1697_; lean_object* v___f_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1697_ = lean_box_uint32(v_c_1693_);
v___f_1698_ = lean_alloc_closure((void*)(l_Lean_Parser_chFn___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1698_, 0, v___x_1697_);
v___x_1699_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_1700_ = ((lean_object*)(l_Lean_Parser_chFn___closed__1));
v___x_1701_ = lean_string_push(v___x_1700_, v_c_1693_);
v___x_1702_ = lean_string_append(v___x_1699_, v___x_1701_);
lean_dec_ref(v___x_1701_);
v___x_1703_ = lean_string_append(v___x_1702_, v___x_1699_);
v___x_1704_ = lean_alloc_closure((void*)(l_Lean_Parser_satisfyFn), 4, 2);
lean_closure_set(v___x_1704_, 0, v___f_1698_);
lean_closure_set(v___x_1704_, 1, v___x_1703_);
v___x_1705_ = l_Lean_Parser_rawFn(v___x_1704_, v_trailingWs_1694_, v_a_1695_, v_a_1696_);
return v___x_1705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_chFn___boxed(lean_object* v_c_1706_, lean_object* v_trailingWs_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_){
_start:
{
uint32_t v_c_boxed_1710_; uint8_t v_trailingWs_boxed_1711_; lean_object* v_res_1712_; 
v_c_boxed_1710_ = lean_unbox_uint32(v_c_1706_);
lean_dec(v_c_1706_);
v_trailingWs_boxed_1711_ = lean_unbox(v_trailingWs_1707_);
v_res_1712_ = l_Lean_Parser_chFn(v_c_boxed_1710_, v_trailingWs_boxed_1711_, v_a_1708_, v_a_1709_);
return v_res_1712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawCh(uint32_t v_c_1713_, uint8_t v_trailingWs_1714_){
_start:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1715_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_1716_ = lean_box_uint32(v_c_1713_);
v___x_1717_ = lean_box(v_trailingWs_1714_);
v___x_1718_ = lean_alloc_closure((void*)(l_Lean_Parser_chFn___boxed), 4, 2);
lean_closure_set(v___x_1718_, 0, v___x_1716_);
lean_closure_set(v___x_1718_, 1, v___x_1717_);
v___x_1719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1719_, 0, v___x_1715_);
lean_ctor_set(v___x_1719_, 1, v___x_1718_);
return v___x_1719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawCh___boxed(lean_object* v_c_1720_, lean_object* v_trailingWs_1721_){
_start:
{
uint32_t v_c_boxed_1722_; uint8_t v_trailingWs_boxed_1723_; lean_object* v_res_1724_; 
v_c_boxed_1722_ = lean_unbox_uint32(v_c_1720_);
lean_dec(v_c_1720_);
v_trailingWs_boxed_1723_ = lean_unbox(v_trailingWs_1721_);
v_res_1724_ = l_Lean_Parser_rawCh(v_c_boxed_1722_, v_trailingWs_boxed_1723_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hexDigitFn(lean_object* v_c_1726_, lean_object* v_s_1727_){
_start:
{
lean_object* v_pos_1728_; lean_object* v_toInputContext_1729_; uint8_t v___x_1730_; 
v_pos_1728_ = lean_ctor_get(v_s_1727_, 2);
v_toInputContext_1729_ = lean_ctor_get(v_c_1726_, 0);
lean_inc_ref_n(v_toInputContext_1729_, 2);
lean_dec_ref(v_c_1726_);
lean_inc(v_pos_1728_);
v___x_1730_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1729_, v_pos_1728_);
if (v___x_1730_ == 0)
{
lean_object* v_inputString_1731_; uint8_t v___x_1732_; uint32_t v_curr_1737_; lean_object* v_i_1738_; uint32_t v___x_1751_; uint8_t v___x_1752_; 
v_inputString_1731_ = lean_ctor_get(v_toInputContext_1729_, 0);
lean_inc_ref(v_inputString_1731_);
lean_dec_ref(v_toInputContext_1729_);
v___x_1732_ = 1;
v_curr_1737_ = lean_string_utf8_get_fast(v_inputString_1731_, v_pos_1728_);
v_i_1738_ = lean_string_utf8_next_fast(v_inputString_1731_, v_pos_1728_);
lean_dec_ref(v_inputString_1731_);
v___x_1751_ = 48;
v___x_1752_ = lean_uint32_dec_le(v___x_1751_, v_curr_1737_);
if (v___x_1752_ == 0)
{
goto v___jp_1745_;
}
else
{
uint32_t v___x_1753_; uint8_t v___x_1754_; 
v___x_1753_ = 57;
v___x_1754_ = lean_uint32_dec_le(v_curr_1737_, v___x_1753_);
if (v___x_1754_ == 0)
{
goto v___jp_1745_;
}
else
{
lean_object* v___x_1755_; 
v___x_1755_ = l_Lean_Parser_ParserState_setPos(v_s_1727_, v_i_1738_);
return v___x_1755_;
}
}
v___jp_1733_:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1734_ = ((lean_object*)(l_Lean_Parser_hexDigitFn___closed__0));
v___x_1735_ = lean_box(0);
v___x_1736_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1727_, v___x_1734_, v___x_1735_, v___x_1732_);
return v___x_1736_;
}
v___jp_1739_:
{
uint32_t v___x_1740_; uint8_t v___x_1741_; 
v___x_1740_ = 65;
v___x_1741_ = lean_uint32_dec_le(v___x_1740_, v_curr_1737_);
if (v___x_1741_ == 0)
{
goto v___jp_1733_;
}
else
{
uint32_t v___x_1742_; uint8_t v___x_1743_; 
v___x_1742_ = 70;
v___x_1743_ = lean_uint32_dec_le(v_curr_1737_, v___x_1742_);
if (v___x_1743_ == 0)
{
goto v___jp_1733_;
}
else
{
lean_object* v___x_1744_; 
v___x_1744_ = l_Lean_Parser_ParserState_setPos(v_s_1727_, v_i_1738_);
return v___x_1744_;
}
}
}
v___jp_1745_:
{
uint32_t v___x_1746_; uint8_t v___x_1747_; 
v___x_1746_ = 97;
v___x_1747_ = lean_uint32_dec_le(v___x_1746_, v_curr_1737_);
if (v___x_1747_ == 0)
{
goto v___jp_1739_;
}
else
{
uint32_t v___x_1748_; uint8_t v___x_1749_; 
v___x_1748_ = 102;
v___x_1749_ = lean_uint32_dec_le(v_curr_1737_, v___x_1748_);
if (v___x_1749_ == 0)
{
goto v___jp_1739_;
}
else
{
lean_object* v___x_1750_; 
v___x_1750_ = l_Lean_Parser_ParserState_setPos(v_s_1727_, v_i_1738_);
return v___x_1750_;
}
}
}
}
else
{
lean_object* v___x_1756_; lean_object* v___x_1757_; 
lean_dec_ref(v_toInputContext_1729_);
v___x_1756_ = lean_box(0);
v___x_1757_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1727_, v___x_1756_);
return v___x_1757_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_stringGapFn(uint8_t v_seenNewline_1760_, lean_object* v_c_1761_, lean_object* v_s_1762_){
_start:
{
lean_object* v_pos_1763_; lean_object* v_toInputContext_1767_; uint8_t v___x_1768_; 
v_pos_1763_ = lean_ctor_get(v_s_1762_, 2);
v_toInputContext_1767_ = lean_ctor_get(v_c_1761_, 0);
lean_inc(v_pos_1763_);
lean_inc_ref(v_toInputContext_1767_);
v___x_1768_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1767_, v_pos_1763_);
if (v___x_1768_ == 0)
{
lean_object* v_inputString_1769_; uint8_t v___x_1770_; uint32_t v_curr_1771_; uint32_t v___x_1772_; uint8_t v___x_1773_; 
v_inputString_1769_ = lean_ctor_get(v_toInputContext_1767_, 0);
v___x_1770_ = 1;
v_curr_1771_ = lean_string_utf8_get_fast(v_inputString_1769_, v_pos_1763_);
v___x_1772_ = 10;
v___x_1773_ = lean_uint32_dec_eq(v_curr_1771_, v___x_1772_);
if (v___x_1773_ == 0)
{
uint32_t v___x_1774_; uint8_t v___x_1775_; 
v___x_1774_ = 32;
v___x_1775_ = lean_uint32_dec_eq(v_curr_1771_, v___x_1774_);
if (v___x_1775_ == 0)
{
uint32_t v___x_1776_; uint8_t v___x_1777_; 
v___x_1776_ = 9;
v___x_1777_ = lean_uint32_dec_eq(v_curr_1771_, v___x_1776_);
if (v___x_1777_ == 0)
{
uint32_t v___x_1778_; uint8_t v___x_1779_; 
v___x_1778_ = 13;
v___x_1779_ = lean_uint32_dec_eq(v_curr_1771_, v___x_1778_);
if (v___x_1779_ == 0)
{
lean_dec_ref(v_c_1761_);
if (v_seenNewline_1760_ == 0)
{
lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1780_ = ((lean_object*)(l_Lean_Parser_stringGapFn___closed__0));
v___x_1781_ = lean_box(0);
v___x_1782_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1762_, v___x_1780_, v___x_1781_, v___x_1770_);
return v___x_1782_;
}
else
{
return v_s_1762_;
}
}
else
{
lean_inc(v_pos_1763_);
goto v___jp_1764_;
}
}
else
{
lean_inc(v_pos_1763_);
goto v___jp_1764_;
}
}
else
{
lean_inc(v_pos_1763_);
goto v___jp_1764_;
}
}
else
{
if (v_seenNewline_1760_ == 0)
{
lean_object* v___x_1783_; 
lean_inc(v_pos_1763_);
v___x_1783_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1762_, v_c_1761_, v_pos_1763_);
lean_dec(v_pos_1763_);
v_seenNewline_1760_ = v___x_1770_;
v_s_1762_ = v___x_1783_;
goto _start;
}
else
{
lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; 
lean_dec_ref(v_c_1761_);
v___x_1785_ = ((lean_object*)(l_Lean_Parser_stringGapFn___closed__1));
v___x_1786_ = lean_box(0);
v___x_1787_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1762_, v___x_1785_, v___x_1786_, v___x_1770_);
return v___x_1787_;
}
}
}
else
{
lean_dec_ref(v_c_1761_);
return v_s_1762_;
}
v___jp_1764_:
{
lean_object* v___x_1765_; 
v___x_1765_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1762_, v_c_1761_, v_pos_1763_);
lean_dec(v_pos_1763_);
v_s_1762_ = v___x_1765_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_stringGapFn___boxed(lean_object* v_seenNewline_1788_, lean_object* v_c_1789_, lean_object* v_s_1790_){
_start:
{
uint8_t v_seenNewline_boxed_1791_; lean_object* v_res_1792_; 
v_seenNewline_boxed_1791_ = lean_unbox(v_seenNewline_1788_);
v_res_1792_ = l_Lean_Parser_stringGapFn(v_seenNewline_boxed_1791_, v_c_1789_, v_s_1790_);
return v_res_1792_;
}
}
static lean_object* _init_l_Lean_Parser_quotedCharCoreFn___closed__1(void){
_start:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1794_ = lean_alloc_closure((void*)(l_Lean_Parser_hexDigitFn), 2, 0);
lean_inc_ref(v___x_1794_);
v___x_1795_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(v___x_1795_, 0, v___x_1794_);
lean_closure_set(v___x_1795_, 1, v___x_1794_);
return v___x_1795_;
}
}
static lean_object* _init_l_Lean_Parser_quotedCharCoreFn___closed__2(void){
_start:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1796_ = lean_obj_once(&l_Lean_Parser_quotedCharCoreFn___closed__1, &l_Lean_Parser_quotedCharCoreFn___closed__1_once, _init_l_Lean_Parser_quotedCharCoreFn___closed__1);
v___x_1797_ = lean_alloc_closure((void*)(l_Lean_Parser_hexDigitFn), 2, 0);
v___x_1798_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(v___x_1798_, 0, v___x_1797_);
lean_closure_set(v___x_1798_, 1, v___x_1796_);
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_quotedCharCoreFn(lean_object* v_isQuotable_1799_, uint8_t v_inString_1800_, lean_object* v_c_1801_, lean_object* v_s_1802_){
_start:
{
lean_object* v_pos_1803_; lean_object* v_toInputContext_1804_; uint8_t v___x_1805_; 
v_pos_1803_ = lean_ctor_get(v_s_1802_, 2);
v_toInputContext_1804_ = lean_ctor_get(v_c_1801_, 0);
lean_inc(v_pos_1803_);
lean_inc_ref(v_toInputContext_1804_);
v___x_1805_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1804_, v_pos_1803_);
if (v___x_1805_ == 0)
{
lean_object* v_inputString_1806_; uint32_t v_curr_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; uint8_t v___x_1810_; 
v_inputString_1806_ = lean_ctor_get(v_toInputContext_1804_, 0);
v_curr_1807_ = lean_string_utf8_get_fast(v_inputString_1806_, v_pos_1803_);
v___x_1808_ = lean_box_uint32(v_curr_1807_);
v___x_1809_ = lean_apply_1(v_isQuotable_1799_, v___x_1808_);
v___x_1810_ = lean_unbox(v___x_1809_);
if (v___x_1810_ == 0)
{
uint32_t v___x_1811_; uint8_t v___x_1812_; 
v___x_1811_ = 120;
v___x_1812_ = lean_uint32_dec_eq(v_curr_1807_, v___x_1811_);
if (v___x_1812_ == 0)
{
uint32_t v___x_1813_; uint8_t v___x_1814_; 
v___x_1813_ = 117;
v___x_1814_ = lean_uint32_dec_eq(v_curr_1807_, v___x_1813_);
if (v___x_1814_ == 0)
{
uint8_t v___x_1815_; 
v___x_1815_ = 1;
if (v_inString_1800_ == 0)
{
lean_dec_ref(v_c_1801_);
goto v___jp_1816_;
}
else
{
uint32_t v___x_1820_; uint8_t v___x_1821_; 
v___x_1820_ = 10;
v___x_1821_ = lean_uint32_dec_eq(v_curr_1807_, v___x_1820_);
if (v___x_1821_ == 0)
{
lean_dec_ref(v_c_1801_);
goto v___jp_1816_;
}
else
{
lean_object* v___x_1822_; 
v___x_1822_ = l_Lean_Parser_stringGapFn(v___x_1814_, v_c_1801_, v_s_1802_);
return v___x_1822_;
}
}
v___jp_1816_:
{
lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1817_ = ((lean_object*)(l_Lean_Parser_quotedCharCoreFn___closed__0));
v___x_1818_ = lean_box(0);
v___x_1819_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1802_, v___x_1817_, v___x_1818_, v___x_1815_);
return v___x_1819_;
}
}
else
{
lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
lean_inc(v_pos_1803_);
v___x_1823_ = lean_alloc_closure((void*)(l_Lean_Parser_hexDigitFn), 2, 0);
v___x_1824_ = lean_obj_once(&l_Lean_Parser_quotedCharCoreFn___closed__2, &l_Lean_Parser_quotedCharCoreFn___closed__2_once, _init_l_Lean_Parser_quotedCharCoreFn___closed__2);
v___x_1825_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1802_, v_c_1801_, v_pos_1803_);
lean_dec(v_pos_1803_);
v___x_1826_ = l_Lean_Parser_andthenFn(v___x_1823_, v___x_1824_, v_c_1801_, v___x_1825_);
return v___x_1826_;
}
}
else
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
lean_inc(v_pos_1803_);
v___x_1827_ = lean_alloc_closure((void*)(l_Lean_Parser_hexDigitFn), 2, 0);
v___x_1828_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1802_, v_c_1801_, v_pos_1803_);
lean_dec(v_pos_1803_);
lean_inc_ref(v___x_1827_);
v___x_1829_ = l_Lean_Parser_andthenFn(v___x_1827_, v___x_1827_, v_c_1801_, v___x_1828_);
return v___x_1829_;
}
}
else
{
lean_object* v___x_1830_; 
lean_inc(v_pos_1803_);
v___x_1830_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1802_, v_c_1801_, v_pos_1803_);
lean_dec(v_pos_1803_);
lean_dec_ref(v_c_1801_);
return v___x_1830_;
}
}
else
{
lean_object* v___x_1831_; lean_object* v___x_1832_; 
lean_dec_ref(v_c_1801_);
lean_dec_ref(v_isQuotable_1799_);
v___x_1831_ = lean_box(0);
v___x_1832_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1802_, v___x_1831_);
return v___x_1832_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_quotedCharCoreFn___boxed(lean_object* v_isQuotable_1833_, lean_object* v_inString_1834_, lean_object* v_c_1835_, lean_object* v_s_1836_){
_start:
{
uint8_t v_inString_boxed_1837_; lean_object* v_res_1838_; 
v_inString_boxed_1837_ = lean_unbox(v_inString_1834_);
v_res_1838_ = l_Lean_Parser_quotedCharCoreFn(v_isQuotable_1833_, v_inString_boxed_1837_, v_c_1835_, v_s_1836_);
return v_res_1838_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_isQuotableCharDefault(uint32_t v_c_1839_){
_start:
{
uint32_t v___x_1840_; uint8_t v___x_1841_; 
v___x_1840_ = 92;
v___x_1841_ = lean_uint32_dec_eq(v_c_1839_, v___x_1840_);
if (v___x_1841_ == 0)
{
uint32_t v___x_1842_; uint8_t v___x_1843_; 
v___x_1842_ = 34;
v___x_1843_ = lean_uint32_dec_eq(v_c_1839_, v___x_1842_);
if (v___x_1843_ == 0)
{
uint32_t v___x_1844_; uint8_t v___x_1845_; 
v___x_1844_ = 39;
v___x_1845_ = lean_uint32_dec_eq(v_c_1839_, v___x_1844_);
if (v___x_1845_ == 0)
{
uint32_t v___x_1846_; uint8_t v___x_1847_; 
v___x_1846_ = 114;
v___x_1847_ = lean_uint32_dec_eq(v_c_1839_, v___x_1846_);
if (v___x_1847_ == 0)
{
uint32_t v___x_1848_; uint8_t v___x_1849_; 
v___x_1848_ = 110;
v___x_1849_ = lean_uint32_dec_eq(v_c_1839_, v___x_1848_);
if (v___x_1849_ == 0)
{
uint32_t v___x_1850_; uint8_t v___x_1851_; 
v___x_1850_ = 116;
v___x_1851_ = lean_uint32_dec_eq(v_c_1839_, v___x_1850_);
return v___x_1851_;
}
else
{
return v___x_1849_;
}
}
else
{
return v___x_1847_;
}
}
else
{
return v___x_1845_;
}
}
else
{
return v___x_1843_;
}
}
else
{
return v___x_1841_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isQuotableCharDefault___boxed(lean_object* v_c_1852_){
_start:
{
uint32_t v_c_boxed_1853_; uint8_t v_res_1854_; lean_object* v_r_1855_; 
v_c_boxed_1853_ = lean_unbox_uint32(v_c_1852_);
lean_dec(v_c_1852_);
v_res_1854_ = l_Lean_Parser_isQuotableCharDefault(v_c_boxed_1853_);
v_r_1855_ = lean_box(v_res_1854_);
return v_r_1855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_quotedCharFn(lean_object* v_a_1857_, lean_object* v_a_1858_){
_start:
{
lean_object* v___x_1859_; uint8_t v___x_1860_; lean_object* v___x_1861_; 
v___x_1859_ = ((lean_object*)(l_Lean_Parser_quotedCharFn___closed__0));
v___x_1860_ = 0;
v___x_1861_ = l_Lean_Parser_quotedCharCoreFn(v___x_1859_, v___x_1860_, v_a_1857_, v_a_1858_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_quotedStringFn(lean_object* v_a_1862_, lean_object* v_a_1863_){
_start:
{
lean_object* v___x_1864_; uint8_t v___x_1865_; lean_object* v___x_1866_; 
v___x_1864_ = ((lean_object*)(l_Lean_Parser_quotedCharFn___closed__0));
v___x_1865_ = 1;
v___x_1866_ = l_Lean_Parser_quotedCharCoreFn(v___x_1864_, v___x_1865_, v_a_1862_, v_a_1863_);
return v___x_1866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkNodeToken(lean_object* v_n_1867_, lean_object* v_startPos_1868_, uint8_t v_includeWhitespace_1869_, lean_object* v_c_1870_, lean_object* v_s_1871_){
_start:
{
lean_object* v_pos_1872_; lean_object* v_errorMsg_1873_; lean_object* v___x_1874_; uint8_t v___x_1875_; 
v_pos_1872_ = lean_ctor_get(v_s_1871_, 2);
v_errorMsg_1873_ = lean_ctor_get(v_s_1871_, 4);
v___x_1874_ = lean_box(0);
v___x_1875_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1873_, v___x_1874_);
if (v___x_1875_ == 0)
{
lean_dec_ref(v_c_1870_);
lean_dec(v_startPos_1868_);
lean_dec(v_n_1867_);
return v_s_1871_;
}
else
{
lean_object* v_toInputContext_1876_; lean_object* v_inputString_1877_; lean_object* v_endPos_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1900_; 
lean_inc(v_pos_1872_);
v_toInputContext_1876_ = lean_ctor_get(v_c_1870_, 0);
lean_inc_ref(v_toInputContext_1876_);
v_inputString_1877_ = lean_ctor_get(v_toInputContext_1876_, 0);
v_endPos_1878_ = lean_ctor_get(v_toInputContext_1876_, 3);
v_isSharedCheck_1900_ = !lean_is_exclusive(v_toInputContext_1876_);
if (v_isSharedCheck_1900_ == 0)
{
lean_object* v_unused_1901_; lean_object* v_unused_1902_; 
v_unused_1901_ = lean_ctor_get(v_toInputContext_1876_, 2);
lean_dec(v_unused_1901_);
v_unused_1902_ = lean_ctor_get(v_toInputContext_1876_, 1);
lean_dec(v_unused_1902_);
v___x_1880_ = v_toInputContext_1876_;
v_isShared_1881_ = v_isSharedCheck_1900_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_endPos_1878_);
lean_inc(v_inputString_1877_);
lean_dec(v_toInputContext_1876_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1900_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v_leading_1882_; lean_object* v_val_1883_; lean_object* v___y_1885_; lean_object* v___y_1886_; lean_object* v___y_1893_; lean_object* v_pos_1894_; 
lean_inc(v_startPos_1868_);
v_leading_1882_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_1870_, v_startPos_1868_);
v_val_1883_ = lean_string_utf8_extract(v_inputString_1877_, v_startPos_1868_, v_pos_1872_);
if (v_includeWhitespace_1869_ == 0)
{
lean_dec_ref(v_c_1870_);
lean_inc(v_pos_1872_);
v___y_1893_ = v_s_1871_;
v_pos_1894_ = v_pos_1872_;
goto v___jp_1892_;
}
else
{
lean_object* v___x_1898_; lean_object* v_pos_1899_; 
v___x_1898_ = l_Lean_Parser_whitespace(v_c_1870_, v_s_1871_);
v_pos_1899_ = lean_ctor_get(v___x_1898_, 2);
lean_inc(v_pos_1899_);
v___y_1893_ = v___x_1898_;
v_pos_1894_ = v_pos_1899_;
goto v___jp_1892_;
}
v___jp_1884_:
{
lean_object* v_info_1888_; 
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 3, v_pos_1872_);
lean_ctor_set(v___x_1880_, 2, v___y_1886_);
lean_ctor_set(v___x_1880_, 1, v_startPos_1868_);
lean_ctor_set(v___x_1880_, 0, v_leading_1882_);
v_info_1888_ = v___x_1880_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_leading_1882_);
lean_ctor_set(v_reuseFailAlloc_1891_, 1, v_startPos_1868_);
lean_ctor_set(v_reuseFailAlloc_1891_, 2, v___y_1886_);
lean_ctor_set(v_reuseFailAlloc_1891_, 3, v_pos_1872_);
v_info_1888_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; 
v___x_1889_ = l_Lean_Syntax_mkLit(v_n_1867_, v_val_1883_, v_info_1888_);
v___x_1890_ = l_Lean_Parser_ParserState_pushSyntax(v___y_1885_, v___x_1889_);
return v___x_1890_;
}
}
v___jp_1892_:
{
uint8_t v___x_1895_; 
v___x_1895_ = lean_nat_dec_le(v_pos_1894_, v_endPos_1878_);
if (v___x_1895_ == 0)
{
lean_object* v___x_1896_; 
lean_dec(v_pos_1894_);
lean_inc(v_pos_1872_);
v___x_1896_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1896_, 0, v_inputString_1877_);
lean_ctor_set(v___x_1896_, 1, v_pos_1872_);
lean_ctor_set(v___x_1896_, 2, v_endPos_1878_);
v___y_1885_ = v___y_1893_;
v___y_1886_ = v___x_1896_;
goto v___jp_1884_;
}
else
{
lean_object* v___x_1897_; 
lean_dec(v_endPos_1878_);
lean_inc(v_pos_1872_);
v___x_1897_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1897_, 0, v_inputString_1877_);
lean_ctor_set(v___x_1897_, 1, v_pos_1872_);
lean_ctor_set(v___x_1897_, 2, v_pos_1894_);
v___y_1885_ = v___y_1893_;
v___y_1886_ = v___x_1897_;
goto v___jp_1884_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkNodeToken___boxed(lean_object* v_n_1903_, lean_object* v_startPos_1904_, lean_object* v_includeWhitespace_1905_, lean_object* v_c_1906_, lean_object* v_s_1907_){
_start:
{
uint8_t v_includeWhitespace_boxed_1908_; lean_object* v_res_1909_; 
v_includeWhitespace_boxed_1908_ = lean_unbox(v_includeWhitespace_1905_);
v_res_1909_ = l_Lean_Parser_mkNodeToken(v_n_1903_, v_startPos_1904_, v_includeWhitespace_boxed_1908_, v_c_1906_, v_s_1907_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_charLitFnAux(lean_object* v_startPos_1914_, lean_object* v_c_1915_, lean_object* v_s_1916_){
_start:
{
lean_object* v_pos_1917_; lean_object* v_toInputContext_1918_; uint8_t v___x_1919_; 
v_pos_1917_ = lean_ctor_get(v_s_1916_, 2);
v_toInputContext_1918_ = lean_ctor_get(v_c_1915_, 0);
lean_inc(v_pos_1917_);
lean_inc_ref(v_toInputContext_1918_);
v___x_1919_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1918_, v_pos_1917_);
if (v___x_1919_ == 0)
{
lean_object* v_inputString_1920_; uint8_t v___x_1921_; lean_object* v___y_1923_; uint32_t v_curr_1938_; lean_object* v___x_1939_; lean_object* v_s_1940_; uint32_t v___x_1941_; uint8_t v___x_1942_; 
v_inputString_1920_ = lean_ctor_get(v_toInputContext_1918_, 0);
v___x_1921_ = 1;
v_curr_1938_ = lean_string_utf8_get_fast(v_inputString_1920_, v_pos_1917_);
v___x_1939_ = lean_string_utf8_next_fast(v_inputString_1920_, v_pos_1917_);
v_s_1940_ = l_Lean_Parser_ParserState_setPos(v_s_1916_, v___x_1939_);
v___x_1941_ = 92;
v___x_1942_ = lean_uint32_dec_eq(v_curr_1938_, v___x_1941_);
if (v___x_1942_ == 0)
{
v___y_1923_ = v_s_1940_;
goto v___jp_1922_;
}
else
{
lean_object* v___x_1943_; 
lean_inc_ref(v_c_1915_);
v___x_1943_ = l_Lean_Parser_quotedCharFn(v_c_1915_, v_s_1940_);
v___y_1923_ = v___x_1943_;
goto v___jp_1922_;
}
v___jp_1922_:
{
lean_object* v_pos_1924_; lean_object* v_errorMsg_1925_; lean_object* v___x_1926_; uint8_t v___x_1927_; 
v_pos_1924_ = lean_ctor_get(v___y_1923_, 2);
v_errorMsg_1925_ = lean_ctor_get(v___y_1923_, 4);
v___x_1926_ = lean_box(0);
v___x_1927_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1925_, v___x_1926_);
if (v___x_1927_ == 0)
{
lean_dec_ref(v_c_1915_);
lean_dec(v_startPos_1914_);
return v___y_1923_;
}
else
{
uint32_t v_curr_1928_; lean_object* v___x_1929_; lean_object* v_s_1930_; uint32_t v___x_1931_; uint8_t v___x_1932_; 
v_curr_1928_ = lean_string_utf8_get(v_inputString_1920_, v_pos_1924_);
v___x_1929_ = lean_string_utf8_next(v_inputString_1920_, v_pos_1924_);
v_s_1930_ = l_Lean_Parser_ParserState_setPos(v___y_1923_, v___x_1929_);
v___x_1931_ = 39;
v___x_1932_ = lean_uint32_dec_eq(v_curr_1928_, v___x_1931_);
if (v___x_1932_ == 0)
{
lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
lean_dec_ref(v_c_1915_);
lean_dec(v_startPos_1914_);
v___x_1933_ = ((lean_object*)(l_Lean_Parser_charLitFnAux___closed__0));
v___x_1934_ = lean_box(0);
v___x_1935_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1930_, v___x_1933_, v___x_1934_, v___x_1921_);
return v___x_1935_;
}
else
{
lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1936_ = ((lean_object*)(l_Lean_Parser_charLitFnAux___closed__2));
v___x_1937_ = l_Lean_Parser_mkNodeToken(v___x_1936_, v_startPos_1914_, v___x_1921_, v_c_1915_, v_s_1930_);
return v___x_1937_;
}
}
}
}
else
{
lean_object* v___x_1944_; lean_object* v___x_1945_; 
lean_dec_ref(v_c_1915_);
lean_dec(v_startPos_1914_);
v___x_1944_ = lean_box(0);
v___x_1945_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1916_, v___x_1944_);
return v___x_1945_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLitFnAux___boxed(lean_object* v_startPos_1950_, lean_object* v_includeWhitespace_1951_, lean_object* v_c_1952_, lean_object* v_s_1953_){
_start:
{
uint8_t v_includeWhitespace_boxed_1954_; lean_object* v_res_1955_; 
v_includeWhitespace_boxed_1954_ = lean_unbox(v_includeWhitespace_1951_);
v_res_1955_ = l_Lean_Parser_strLitFnAux(v_startPos_1950_, v_includeWhitespace_boxed_1954_, v_c_1952_, v_s_1953_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLitFnAux(lean_object* v_startPos_1956_, uint8_t v_includeWhitespace_1957_, lean_object* v_c_1958_, lean_object* v_s_1959_){
_start:
{
lean_object* v_pos_1960_; lean_object* v_toInputContext_1961_; uint8_t v___x_1962_; 
v_pos_1960_ = lean_ctor_get(v_s_1959_, 2);
v_toInputContext_1961_ = lean_ctor_get(v_c_1958_, 0);
lean_inc(v_pos_1960_);
lean_inc_ref(v_toInputContext_1961_);
v___x_1962_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1961_, v_pos_1960_);
if (v___x_1962_ == 0)
{
lean_object* v_inputString_1963_; uint32_t v_curr_1964_; lean_object* v___x_1965_; lean_object* v_s_1966_; uint32_t v___x_1967_; uint8_t v___x_1968_; 
v_inputString_1963_ = lean_ctor_get(v_toInputContext_1961_, 0);
v_curr_1964_ = lean_string_utf8_get_fast(v_inputString_1963_, v_pos_1960_);
v___x_1965_ = lean_string_utf8_next_fast(v_inputString_1963_, v_pos_1960_);
v_s_1966_ = l_Lean_Parser_ParserState_setPos(v_s_1959_, v___x_1965_);
v___x_1967_ = 34;
v___x_1968_ = lean_uint32_dec_eq(v_curr_1964_, v___x_1967_);
if (v___x_1968_ == 0)
{
uint32_t v___x_1969_; uint8_t v___x_1970_; 
v___x_1969_ = 92;
v___x_1970_ = lean_uint32_dec_eq(v_curr_1964_, v___x_1969_);
if (v___x_1970_ == 0)
{
v_s_1959_ = v_s_1966_;
goto _start;
}
else
{
lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1972_ = lean_alloc_closure((void*)(l_Lean_Parser_quotedStringFn), 2, 0);
v___x_1973_ = lean_box(v_includeWhitespace_1957_);
v___x_1974_ = lean_alloc_closure((void*)(l_Lean_Parser_strLitFnAux___boxed), 4, 2);
lean_closure_set(v___x_1974_, 0, v_startPos_1956_);
lean_closure_set(v___x_1974_, 1, v___x_1973_);
v___x_1975_ = l_Lean_Parser_andthenFn(v___x_1972_, v___x_1974_, v_c_1958_, v_s_1966_);
return v___x_1975_;
}
}
else
{
lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1976_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__1));
v___x_1977_ = l_Lean_Parser_mkNodeToken(v___x_1976_, v_startPos_1956_, v_includeWhitespace_1957_, v_c_1958_, v_s_1966_);
return v___x_1977_;
}
}
else
{
lean_object* v___x_1978_; lean_object* v___x_1979_; 
lean_dec_ref(v_c_1958_);
v___x_1978_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__2));
v___x_1979_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_1959_, v___x_1978_, v_startPos_1956_);
return v___x_1979_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_isRawStrLitStart(lean_object* v_c_1980_, lean_object* v_i_1981_){
_start:
{
lean_object* v_toInputContext_1982_; uint8_t v___x_1983_; 
v_toInputContext_1982_ = lean_ctor_get(v_c_1980_, 0);
lean_inc(v_i_1981_);
lean_inc_ref(v_toInputContext_1982_);
v___x_1983_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1982_, v_i_1981_);
if (v___x_1983_ == 0)
{
lean_object* v_inputString_1984_; uint32_t v_curr_1985_; uint32_t v___x_1986_; uint8_t v___x_1987_; 
v_inputString_1984_ = lean_ctor_get(v_toInputContext_1982_, 0);
v_curr_1985_ = lean_string_utf8_get_fast(v_inputString_1984_, v_i_1981_);
v___x_1986_ = 35;
v___x_1987_ = lean_uint32_dec_eq(v_curr_1985_, v___x_1986_);
if (v___x_1987_ == 0)
{
uint32_t v___x_1988_; uint8_t v___x_1989_; 
lean_dec(v_i_1981_);
lean_dec_ref(v_c_1980_);
v___x_1988_ = 34;
v___x_1989_ = lean_uint32_dec_eq(v_curr_1985_, v___x_1988_);
return v___x_1989_;
}
else
{
lean_object* v___x_1990_; 
v___x_1990_ = lean_string_utf8_next_fast(v_inputString_1984_, v_i_1981_);
lean_dec(v_i_1981_);
v_i_1981_ = v___x_1990_;
goto _start;
}
}
else
{
uint8_t v___x_1992_; 
lean_dec(v_i_1981_);
lean_dec_ref(v_c_1980_);
v___x_1992_ = 0;
return v___x_1992_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isRawStrLitStart___boxed(lean_object* v_c_1993_, lean_object* v_i_1994_){
_start:
{
uint8_t v_res_1995_; lean_object* v_r_1996_; 
v_res_1995_ = l_Lean_Parser_isRawStrLitStart(v_c_1993_, v_i_1994_);
v_r_1996_ = lean_box(v_res_1995_);
return v_r_1996_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(lean_object* v_startPos_1998_, lean_object* v_s_1999_){
_start:
{
lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_2000_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated___closed__0));
v___x_2001_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_1999_, v___x_2000_, v_startPos_1998_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_closingState(lean_object* v_startPos_2002_, lean_object* v_num_2003_, lean_object* v_closingNum_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_){
_start:
{
lean_object* v_pos_2007_; lean_object* v_toInputContext_2008_; uint8_t v___x_2009_; 
v_pos_2007_ = lean_ctor_get(v_a_2006_, 2);
v_toInputContext_2008_ = lean_ctor_get(v_a_2005_, 0);
lean_inc(v_pos_2007_);
lean_inc_ref(v_toInputContext_2008_);
v___x_2009_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2008_, v_pos_2007_);
if (v___x_2009_ == 0)
{
lean_object* v_inputString_2010_; uint32_t v_curr_2011_; lean_object* v___x_2012_; lean_object* v_s_2013_; uint32_t v___x_2014_; uint8_t v___x_2015_; 
v_inputString_2010_ = lean_ctor_get(v_toInputContext_2008_, 0);
v_curr_2011_ = lean_string_utf8_get_fast(v_inputString_2010_, v_pos_2007_);
v___x_2012_ = lean_string_utf8_next_fast(v_inputString_2010_, v_pos_2007_);
v_s_2013_ = l_Lean_Parser_ParserState_setPos(v_a_2006_, v___x_2012_);
v___x_2014_ = 35;
v___x_2015_ = lean_uint32_dec_eq(v_curr_2011_, v___x_2014_);
if (v___x_2015_ == 0)
{
uint32_t v___x_2016_; uint8_t v___x_2017_; 
lean_dec(v_closingNum_2004_);
v___x_2016_ = 34;
v___x_2017_ = lean_uint32_dec_eq(v_curr_2011_, v___x_2016_);
if (v___x_2017_ == 0)
{
lean_object* v___x_2018_; 
v___x_2018_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState(v_startPos_2002_, v_num_2003_, v_a_2005_, v_s_2013_);
return v___x_2018_;
}
else
{
lean_object* v___x_2019_; 
v___x_2019_ = lean_unsigned_to_nat(0u);
v_closingNum_2004_ = v___x_2019_;
v_a_2006_ = v_s_2013_;
goto _start;
}
}
else
{
lean_object* v___x_2021_; lean_object* v___x_2022_; uint8_t v___x_2023_; 
v___x_2021_ = lean_unsigned_to_nat(1u);
v___x_2022_ = lean_nat_add(v_closingNum_2004_, v___x_2021_);
lean_dec(v_closingNum_2004_);
v___x_2023_ = lean_nat_dec_eq(v___x_2022_, v_num_2003_);
if (v___x_2023_ == 0)
{
v_closingNum_2004_ = v___x_2022_;
v_a_2006_ = v_s_2013_;
goto _start;
}
else
{
lean_object* v___x_2025_; lean_object* v___x_2026_; 
lean_dec(v___x_2022_);
v___x_2025_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__1));
v___x_2026_ = l_Lean_Parser_mkNodeToken(v___x_2025_, v_startPos_2002_, v___x_2023_, v_a_2005_, v_s_2013_);
return v___x_2026_;
}
}
}
else
{
lean_object* v___x_2027_; 
lean_dec_ref(v_a_2005_);
lean_dec(v_closingNum_2004_);
v___x_2027_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(v_startPos_2002_, v_a_2006_);
return v___x_2027_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState(lean_object* v_startPos_2028_, lean_object* v_num_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_){
_start:
{
lean_object* v_pos_2032_; lean_object* v_toInputContext_2033_; uint8_t v___x_2034_; 
v_pos_2032_ = lean_ctor_get(v_a_2031_, 2);
v_toInputContext_2033_ = lean_ctor_get(v_a_2030_, 0);
lean_inc(v_pos_2032_);
lean_inc_ref(v_toInputContext_2033_);
v___x_2034_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2033_, v_pos_2032_);
if (v___x_2034_ == 0)
{
lean_object* v_inputString_2035_; uint32_t v_curr_2036_; lean_object* v___x_2037_; lean_object* v_s_2038_; uint32_t v___x_2039_; uint8_t v___x_2040_; 
v_inputString_2035_ = lean_ctor_get(v_toInputContext_2033_, 0);
v_curr_2036_ = lean_string_utf8_get_fast(v_inputString_2035_, v_pos_2032_);
v___x_2037_ = lean_string_utf8_next_fast(v_inputString_2035_, v_pos_2032_);
v_s_2038_ = l_Lean_Parser_ParserState_setPos(v_a_2031_, v___x_2037_);
v___x_2039_ = 34;
v___x_2040_ = lean_uint32_dec_eq(v_curr_2036_, v___x_2039_);
if (v___x_2040_ == 0)
{
v_a_2031_ = v_s_2038_;
goto _start;
}
else
{
lean_object* v___x_2042_; uint8_t v___x_2043_; 
v___x_2042_ = lean_unsigned_to_nat(0u);
v___x_2043_ = lean_nat_dec_eq(v_num_2029_, v___x_2042_);
if (v___x_2043_ == 0)
{
lean_object* v___x_2044_; 
v___x_2044_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_closingState(v_startPos_2028_, v_num_2029_, v___x_2042_, v_a_2030_, v_s_2038_);
return v___x_2044_;
}
else
{
lean_object* v___x_2045_; lean_object* v___x_2046_; 
v___x_2045_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__1));
v___x_2046_ = l_Lean_Parser_mkNodeToken(v___x_2045_, v_startPos_2028_, v___x_2043_, v_a_2030_, v_s_2038_);
return v___x_2046_;
}
}
}
else
{
lean_object* v___x_2047_; 
lean_dec_ref(v_a_2030_);
v___x_2047_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(v_startPos_2028_, v_a_2031_);
return v___x_2047_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState___boxed(lean_object* v_startPos_2048_, lean_object* v_num_2049_, lean_object* v_a_2050_, lean_object* v_a_2051_){
_start:
{
lean_object* v_res_2052_; 
v_res_2052_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState(v_startPos_2048_, v_num_2049_, v_a_2050_, v_a_2051_);
lean_dec(v_num_2049_);
return v_res_2052_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_closingState___boxed(lean_object* v_startPos_2053_, lean_object* v_num_2054_, lean_object* v_closingNum_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_){
_start:
{
lean_object* v_res_2058_; 
v_res_2058_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_closingState(v_startPos_2053_, v_num_2054_, v_closingNum_2055_, v_a_2056_, v_a_2057_);
lean_dec(v_num_2054_);
return v_res_2058_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_initState(lean_object* v_startPos_2059_, lean_object* v_num_2060_, lean_object* v_a_2061_, lean_object* v_a_2062_){
_start:
{
lean_object* v_pos_2063_; lean_object* v_toInputContext_2064_; uint8_t v___x_2065_; 
v_pos_2063_ = lean_ctor_get(v_a_2062_, 2);
v_toInputContext_2064_ = lean_ctor_get(v_a_2061_, 0);
lean_inc(v_pos_2063_);
lean_inc_ref(v_toInputContext_2064_);
v___x_2065_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2064_, v_pos_2063_);
if (v___x_2065_ == 0)
{
lean_object* v_inputString_2066_; uint32_t v_curr_2067_; lean_object* v___x_2068_; lean_object* v_s_2069_; uint32_t v___x_2070_; uint8_t v___x_2071_; 
v_inputString_2066_ = lean_ctor_get(v_toInputContext_2064_, 0);
v_curr_2067_ = lean_string_utf8_get_fast(v_inputString_2066_, v_pos_2063_);
v___x_2068_ = lean_string_utf8_next_fast(v_inputString_2066_, v_pos_2063_);
v_s_2069_ = l_Lean_Parser_ParserState_setPos(v_a_2062_, v___x_2068_);
v___x_2070_ = 35;
v___x_2071_ = lean_uint32_dec_eq(v_curr_2067_, v___x_2070_);
if (v___x_2071_ == 0)
{
uint32_t v___x_2072_; uint8_t v___x_2073_; 
v___x_2072_ = 34;
v___x_2073_ = lean_uint32_dec_eq(v_curr_2067_, v___x_2072_);
if (v___x_2073_ == 0)
{
lean_object* v___x_2074_; 
lean_dec_ref(v_a_2061_);
lean_dec(v_num_2060_);
v___x_2074_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(v_startPos_2059_, v_s_2069_);
return v___x_2074_;
}
else
{
lean_object* v___x_2075_; 
v___x_2075_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState(v_startPos_2059_, v_num_2060_, v_a_2061_, v_s_2069_);
lean_dec(v_num_2060_);
return v___x_2075_;
}
}
else
{
lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2076_ = lean_unsigned_to_nat(1u);
v___x_2077_ = lean_nat_add(v_num_2060_, v___x_2076_);
lean_dec(v_num_2060_);
v_num_2060_ = v___x_2077_;
v_a_2062_ = v_s_2069_;
goto _start;
}
}
else
{
lean_object* v___x_2079_; 
lean_dec_ref(v_a_2061_);
lean_dec(v_num_2060_);
v___x_2079_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(v_startPos_2059_, v_a_2062_);
return v___x_2079_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawStrLitFnAux(lean_object* v_startPos_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_){
_start:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2083_ = lean_unsigned_to_nat(0u);
v___x_2084_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_initState(v_startPos_2080_, v___x_2083_, v_a_2081_, v_a_2082_);
return v___x_2084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeDigitsFn(lean_object* v_isDigit_2086_, lean_object* v_expecting_2087_, uint8_t v_needDigit_2088_, lean_object* v_c_2089_, lean_object* v_s_2090_){
_start:
{
lean_object* v_pos_2091_; lean_object* v_toInputContext_2092_; uint8_t v___x_2093_; 
v_pos_2091_ = lean_ctor_get(v_s_2090_, 2);
v_toInputContext_2092_ = lean_ctor_get(v_c_2089_, 0);
lean_inc(v_pos_2091_);
lean_inc_ref(v_toInputContext_2092_);
v___x_2093_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2092_, v_pos_2091_);
if (v___x_2093_ == 0)
{
lean_object* v_inputString_2094_; uint8_t v___x_2095_; uint32_t v_curr_2096_; uint32_t v___x_2097_; uint8_t v___x_2098_; 
v_inputString_2094_ = lean_ctor_get(v_toInputContext_2092_, 0);
v___x_2095_ = 1;
v_curr_2096_ = lean_string_utf8_get_fast(v_inputString_2094_, v_pos_2091_);
v___x_2097_ = 95;
v___x_2098_ = lean_uint32_dec_eq(v_curr_2096_, v___x_2097_);
if (v___x_2098_ == 0)
{
lean_object* v___x_2099_; lean_object* v___x_2100_; uint8_t v___x_2101_; 
v___x_2099_ = lean_box_uint32(v_curr_2096_);
lean_inc_ref(v_isDigit_2086_);
v___x_2100_ = lean_apply_1(v_isDigit_2086_, v___x_2099_);
v___x_2101_ = lean_unbox(v___x_2100_);
if (v___x_2101_ == 0)
{
lean_dec_ref(v_c_2089_);
lean_dec_ref(v_isDigit_2086_);
if (v_needDigit_2088_ == 0)
{
lean_dec_ref(v_expecting_2087_);
return v_s_2090_;
}
else
{
lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2102_ = ((lean_object*)(l_Lean_Parser_takeDigitsFn___closed__0));
v___x_2103_ = lean_box(0);
v___x_2104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2104_, 0, v_expecting_2087_);
lean_ctor_set(v___x_2104_, 1, v___x_2103_);
v___x_2105_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_2090_, v___x_2102_, v___x_2104_, v___x_2095_);
return v___x_2105_;
}
}
else
{
lean_object* v___x_2106_; 
lean_inc(v_pos_2091_);
v___x_2106_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_2090_, v_c_2089_, v_pos_2091_);
lean_dec(v_pos_2091_);
v_needDigit_2088_ = v___x_2098_;
v_s_2090_ = v___x_2106_;
goto _start;
}
}
else
{
lean_object* v___x_2108_; 
lean_inc(v_pos_2091_);
v___x_2108_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_2090_, v_c_2089_, v_pos_2091_);
lean_dec(v_pos_2091_);
v_needDigit_2088_ = v___x_2095_;
v_s_2090_ = v___x_2108_;
goto _start;
}
}
else
{
lean_dec_ref(v_c_2089_);
lean_dec_ref(v_isDigit_2086_);
if (v_needDigit_2088_ == 0)
{
lean_dec_ref(v_expecting_2087_);
return v_s_2090_;
}
else
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2110_ = lean_box(0);
v___x_2111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2111_, 0, v_expecting_2087_);
lean_ctor_set(v___x_2111_, 1, v___x_2110_);
v___x_2112_ = l_Lean_Parser_ParserState_mkEOIError(v_s_2090_, v___x_2111_);
return v___x_2112_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeDigitsFn___boxed(lean_object* v_isDigit_2113_, lean_object* v_expecting_2114_, lean_object* v_needDigit_2115_, lean_object* v_c_2116_, lean_object* v_s_2117_){
_start:
{
uint8_t v_needDigit_boxed_2118_; lean_object* v_res_2119_; 
v_needDigit_boxed_2118_ = lean_unbox(v_needDigit_2115_);
v_res_2119_ = l_Lean_Parser_takeDigitsFn(v_isDigit_2113_, v_expecting_2114_, v_needDigit_boxed_2118_, v_c_2116_, v_s_2117_);
return v_res_2119_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___lam__0(uint32_t v_c_2120_){
_start:
{
uint32_t v___x_2121_; uint8_t v___x_2122_; 
v___x_2121_ = 48;
v___x_2122_ = lean_uint32_dec_le(v___x_2121_, v_c_2120_);
if (v___x_2122_ == 0)
{
return v___x_2122_;
}
else
{
uint32_t v___x_2123_; uint8_t v___x_2124_; 
v___x_2123_ = 57;
v___x_2124_ = lean_uint32_dec_le(v_c_2120_, v___x_2123_);
return v___x_2124_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___lam__0___boxed(lean_object* v_c_2125_){
_start:
{
uint32_t v_c_boxed_2126_; uint8_t v_res_2127_; lean_object* v_r_2128_; 
v_c_boxed_2126_ = lean_unbox_uint32(v_c_2125_);
lean_dec(v_c_2125_);
v_res_2127_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___lam__0(v_c_boxed_2126_);
v_r_2128_ = lean_box(v_res_2127_);
return v_r_2128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp(lean_object* v_startPos_2133_, lean_object* v_c_2134_, lean_object* v_s_2135_, uint8_t v_hasBareDot_2136_){
_start:
{
lean_object* v_toInputContext_2137_; lean_object* v_pos_2138_; uint8_t v___x_2139_; 
v_toInputContext_2137_ = lean_ctor_get(v_c_2134_, 0);
v_pos_2138_ = lean_ctor_get(v_s_2135_, 2);
lean_inc(v_pos_2138_);
lean_inc_ref(v_toInputContext_2137_);
v___x_2139_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2137_, v_pos_2138_);
if (v___x_2139_ == 0)
{
lean_object* v_inputString_2140_; lean_object* v___f_2141_; uint8_t v___x_2142_; lean_object* v___y_2148_; lean_object* v___y_2158_; lean_object* v___y_2159_; uint32_t v_curr_2173_; uint32_t v___x_2185_; uint8_t v___x_2186_; 
v_inputString_2140_ = lean_ctor_get(v_toInputContext_2137_, 0);
v___f_2141_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0));
v___x_2142_ = 1;
v_curr_2173_ = lean_string_utf8_get_fast(v_inputString_2140_, v_pos_2138_);
v___x_2185_ = 101;
v___x_2186_ = lean_uint32_dec_eq(v_curr_2173_, v___x_2185_);
if (v___x_2186_ == 0)
{
uint32_t v___x_2187_; uint8_t v___x_2188_; 
v___x_2187_ = 69;
v___x_2188_ = lean_uint32_dec_eq(v_curr_2173_, v___x_2187_);
if (v___x_2188_ == 0)
{
lean_dec_ref(v_c_2134_);
if (v_hasBareDot_2136_ == 0)
{
lean_dec(v_startPos_2133_);
return v_s_2135_;
}
else
{
uint32_t v___x_2189_; uint8_t v___x_2190_; 
v___x_2189_ = 65;
v___x_2190_ = lean_uint32_dec_le(v___x_2189_, v_curr_2173_);
if (v___x_2190_ == 0)
{
goto v___jp_2180_;
}
else
{
uint32_t v___x_2191_; uint8_t v___x_2192_; 
v___x_2191_ = 90;
v___x_2192_ = lean_uint32_dec_le(v_curr_2173_, v___x_2191_);
if (v___x_2192_ == 0)
{
goto v___jp_2180_;
}
else
{
goto v___jp_2168_;
}
}
}
}
else
{
lean_dec(v_startPos_2133_);
goto v___jp_2161_;
}
}
else
{
lean_dec(v_startPos_2133_);
goto v___jp_2161_;
}
v___jp_2143_:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; 
v___x_2144_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__1));
v___x_2145_ = lean_box(0);
v___x_2146_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_2135_, v___x_2144_, v___x_2145_, v___x_2142_);
return v___x_2146_;
}
v___jp_2147_:
{
uint32_t v_curr_2149_; uint32_t v___x_2150_; uint8_t v___x_2151_; 
v_curr_2149_ = lean_string_utf8_get(v_inputString_2140_, v___y_2148_);
v___x_2150_ = 48;
v___x_2151_ = lean_uint32_dec_le(v___x_2150_, v_curr_2149_);
if (v___x_2151_ == 0)
{
lean_dec(v___y_2148_);
lean_dec_ref(v_c_2134_);
goto v___jp_2143_;
}
else
{
uint32_t v___x_2152_; uint8_t v___x_2153_; 
v___x_2152_ = 57;
v___x_2153_ = lean_uint32_dec_le(v_curr_2149_, v___x_2152_);
if (v___x_2153_ == 0)
{
lean_dec(v___y_2148_);
lean_dec_ref(v_c_2134_);
goto v___jp_2143_;
}
else
{
lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; 
v___x_2154_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__2));
v___x_2155_ = l_Lean_Parser_ParserState_setPos(v_s_2135_, v___y_2148_);
v___x_2156_ = l_Lean_Parser_takeDigitsFn(v___f_2141_, v___x_2154_, v___x_2139_, v_c_2134_, v___x_2155_);
return v___x_2156_;
}
}
}
v___jp_2157_:
{
lean_object* v___x_2160_; 
v___x_2160_ = lean_string_utf8_next(v___y_2159_, v___y_2158_);
lean_dec(v___y_2158_);
lean_dec_ref(v___y_2159_);
v___y_2148_ = v___x_2160_;
goto v___jp_2147_;
}
v___jp_2161_:
{
lean_object* v_i_2162_; uint32_t v___x_2163_; uint32_t v___x_2164_; uint8_t v___x_2165_; 
v_i_2162_ = lean_string_utf8_next(v_inputString_2140_, v_pos_2138_);
v___x_2163_ = lean_string_utf8_get(v_inputString_2140_, v_i_2162_);
v___x_2164_ = 45;
v___x_2165_ = lean_uint32_dec_eq(v___x_2163_, v___x_2164_);
if (v___x_2165_ == 0)
{
uint32_t v___x_2166_; uint8_t v___x_2167_; 
v___x_2166_ = 43;
v___x_2167_ = lean_uint32_dec_eq(v___x_2163_, v___x_2166_);
if (v___x_2167_ == 0)
{
v___y_2148_ = v_i_2162_;
goto v___jp_2147_;
}
else
{
lean_inc_ref(v_inputString_2140_);
v___y_2158_ = v_i_2162_;
v___y_2159_ = v_inputString_2140_;
goto v___jp_2157_;
}
}
else
{
lean_inc_ref(v_inputString_2140_);
v___y_2158_ = v_i_2162_;
v___y_2159_ = v_inputString_2140_;
goto v___jp_2157_;
}
}
v___jp_2168_:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2169_ = l_Lean_Parser_ParserState_setPos(v_s_2135_, v_startPos_2133_);
v___x_2170_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__3));
v___x_2171_ = lean_box(0);
v___x_2172_ = l_Lean_Parser_ParserState_mkUnexpectedError(v___x_2169_, v___x_2170_, v___x_2171_, v___x_2142_);
return v___x_2172_;
}
v___jp_2174_:
{
uint32_t v___x_2175_; uint8_t v___x_2176_; 
v___x_2175_ = 95;
v___x_2176_ = lean_uint32_dec_eq(v_curr_2173_, v___x_2175_);
if (v___x_2176_ == 0)
{
uint8_t v___x_2177_; 
v___x_2177_ = l_Lean_isLetterLike(v_curr_2173_);
if (v___x_2177_ == 0)
{
uint32_t v___x_2178_; uint8_t v___x_2179_; 
v___x_2178_ = l_Lean_idBeginEscape;
v___x_2179_ = lean_uint32_dec_eq(v_curr_2173_, v___x_2178_);
if (v___x_2179_ == 0)
{
lean_dec(v_startPos_2133_);
return v_s_2135_;
}
else
{
goto v___jp_2168_;
}
}
else
{
goto v___jp_2168_;
}
}
else
{
goto v___jp_2168_;
}
}
v___jp_2180_:
{
uint32_t v___x_2181_; uint8_t v___x_2182_; 
v___x_2181_ = 97;
v___x_2182_ = lean_uint32_dec_le(v___x_2181_, v_curr_2173_);
if (v___x_2182_ == 0)
{
goto v___jp_2174_;
}
else
{
uint32_t v___x_2183_; uint8_t v___x_2184_; 
v___x_2183_ = 122;
v___x_2184_ = lean_uint32_dec_le(v_curr_2173_, v___x_2183_);
if (v___x_2184_ == 0)
{
goto v___jp_2174_;
}
else
{
goto v___jp_2168_;
}
}
}
}
else
{
lean_dec_ref(v_c_2134_);
lean_dec(v_startPos_2133_);
return v_s_2135_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___boxed(lean_object* v_startPos_2193_, lean_object* v_c_2194_, lean_object* v_s_2195_, lean_object* v_hasBareDot_2196_){
_start:
{
uint8_t v_hasBareDot_boxed_2197_; lean_object* v_res_2198_; 
v_hasBareDot_boxed_2197_ = lean_unbox(v_hasBareDot_2196_);
v_res_2198_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp(v_startPos_2193_, v_c_2194_, v_s_2195_, v_hasBareDot_boxed_2197_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptDot(lean_object* v_c_2199_, lean_object* v_s_2200_){
_start:
{
lean_object* v_toInputContext_2201_; lean_object* v_pos_2202_; lean_object* v_inputString_2203_; uint32_t v_curr_2204_; uint32_t v___x_2205_; uint8_t v___x_2206_; 
v_toInputContext_2201_ = lean_ctor_get(v_c_2199_, 0);
v_pos_2202_ = lean_ctor_get(v_s_2200_, 2);
v_inputString_2203_ = lean_ctor_get(v_toInputContext_2201_, 0);
v_curr_2204_ = lean_string_utf8_get(v_inputString_2203_, v_pos_2202_);
v___x_2205_ = 46;
v___x_2206_ = lean_uint32_dec_eq(v_curr_2204_, v___x_2205_);
if (v___x_2206_ == 0)
{
lean_object* v___x_2207_; lean_object* v___x_2208_; 
lean_dec_ref(v_c_2199_);
v___x_2207_ = lean_box(v___x_2206_);
v___x_2208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2208_, 0, v_s_2200_);
lean_ctor_set(v___x_2208_, 1, v___x_2207_);
return v___x_2208_;
}
else
{
lean_object* v_i_2209_; uint32_t v_curr_2214_; uint32_t v___x_2215_; uint8_t v___x_2216_; 
v_i_2209_ = lean_string_utf8_next(v_inputString_2203_, v_pos_2202_);
v_curr_2214_ = lean_string_utf8_get(v_inputString_2203_, v_i_2209_);
v___x_2215_ = 48;
v___x_2216_ = lean_uint32_dec_le(v___x_2215_, v_curr_2214_);
if (v___x_2216_ == 0)
{
lean_dec_ref(v_c_2199_);
goto v___jp_2210_;
}
else
{
uint32_t v___x_2217_; uint8_t v___x_2218_; 
v___x_2217_ = 57;
v___x_2218_ = lean_uint32_dec_le(v_curr_2214_, v___x_2217_);
if (v___x_2218_ == 0)
{
lean_dec_ref(v_c_2199_);
goto v___jp_2210_;
}
else
{
lean_object* v___f_2219_; lean_object* v___x_2220_; uint8_t v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___f_2219_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0));
v___x_2220_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__2));
v___x_2221_ = 0;
v___x_2222_ = l_Lean_Parser_ParserState_setPos(v_s_2200_, v_i_2209_);
v___x_2223_ = l_Lean_Parser_takeDigitsFn(v___f_2219_, v___x_2220_, v___x_2221_, v_c_2199_, v___x_2222_);
v___x_2224_ = lean_box(v___x_2221_);
v___x_2225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2223_);
lean_ctor_set(v___x_2225_, 1, v___x_2224_);
return v___x_2225_;
}
}
v___jp_2210_:
{
lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2211_ = l_Lean_Parser_ParserState_setPos(v_s_2200_, v_i_2209_);
v___x_2212_ = lean_box(v___x_2206_);
v___x_2213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2213_, 0, v___x_2211_);
lean_ctor_set(v___x_2213_, 1, v___x_2212_);
return v___x_2213_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(lean_object* v_startPos_2229_, uint8_t v_includeWhitespace_2230_, lean_object* v_c_2231_, lean_object* v_s_2232_){
_start:
{
lean_object* v___x_2233_; lean_object* v_fst_2234_; lean_object* v_snd_2235_; uint8_t v___x_2236_; lean_object* v_s_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
lean_inc_ref_n(v_c_2231_, 2);
v___x_2233_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptDot(v_c_2231_, v_s_2232_);
v_fst_2234_ = lean_ctor_get(v___x_2233_, 0);
lean_inc(v_fst_2234_);
v_snd_2235_ = lean_ctor_get(v___x_2233_, 1);
lean_inc(v_snd_2235_);
lean_dec_ref(v___x_2233_);
v___x_2236_ = lean_unbox(v_snd_2235_);
lean_dec(v_snd_2235_);
lean_inc(v_startPos_2229_);
v_s_2237_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp(v_startPos_2229_, v_c_2231_, v_fst_2234_, v___x_2236_);
v___x_2238_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__1));
v___x_2239_ = l_Lean_Parser_mkNodeToken(v___x_2238_, v_startPos_2229_, v_includeWhitespace_2230_, v_c_2231_, v_s_2237_);
return v___x_2239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___boxed(lean_object* v_startPos_2240_, lean_object* v_includeWhitespace_2241_, lean_object* v_c_2242_, lean_object* v_s_2243_){
_start:
{
uint8_t v_includeWhitespace_boxed_2244_; lean_object* v_res_2245_; 
v_includeWhitespace_boxed_2244_ = lean_unbox(v_includeWhitespace_2241_);
v_res_2245_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(v_startPos_2240_, v_includeWhitespace_boxed_2244_, v_c_2242_, v_s_2243_);
return v_res_2245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_decimalNumberFn(lean_object* v_startPos_2249_, uint8_t v_includeWhitespace_2250_, lean_object* v_c_2251_, lean_object* v_s_2252_){
_start:
{
lean_object* v___f_2253_; lean_object* v___x_2254_; uint8_t v___x_2255_; lean_object* v_s_2256_; lean_object* v_pos_2257_; lean_object* v_toInputContext_2258_; uint8_t v___x_2259_; 
v___f_2253_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0));
v___x_2254_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__2));
v___x_2255_ = 0;
lean_inc_ref(v_c_2251_);
v_s_2256_ = l_Lean_Parser_takeDigitsFn(v___f_2253_, v___x_2254_, v___x_2255_, v_c_2251_, v_s_2252_);
v_pos_2257_ = lean_ctor_get(v_s_2256_, 2);
v_toInputContext_2258_ = lean_ctor_get(v_c_2251_, 0);
lean_inc(v_pos_2257_);
lean_inc_ref(v_toInputContext_2258_);
v___x_2259_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2258_, v_pos_2257_);
if (v___x_2259_ == 0)
{
lean_object* v_inputString_2260_; uint32_t v_curr_2261_; lean_object* v_j_2274_; uint8_t v___x_2275_; 
v_inputString_2260_ = lean_ctor_get(v_toInputContext_2258_, 0);
v_curr_2261_ = lean_string_utf8_get_fast(v_inputString_2260_, v_pos_2257_);
v_j_2274_ = lean_string_utf8_next(v_inputString_2260_, v_pos_2257_);
lean_inc(v_j_2274_);
lean_inc_ref(v_toInputContext_2258_);
v___x_2275_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2258_, v_j_2274_);
if (v___x_2275_ == 0)
{
uint32_t v___x_2276_; uint8_t v___x_2277_; 
v___x_2276_ = 46;
v___x_2277_ = lean_uint32_dec_eq(v_curr_2261_, v___x_2276_);
if (v___x_2277_ == 0)
{
lean_dec(v_j_2274_);
goto v___jp_2262_;
}
else
{
uint32_t v___x_2278_; uint8_t v___x_2279_; 
v___x_2278_ = lean_string_utf8_get_fast(v_inputString_2260_, v_j_2274_);
lean_dec(v_j_2274_);
v___x_2279_ = lean_uint32_dec_eq(v___x_2278_, v___x_2276_);
if (v___x_2279_ == 0)
{
goto v___jp_2262_;
}
else
{
lean_object* v___x_2280_; lean_object* v___x_2281_; 
v___x_2280_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2281_ = l_Lean_Parser_mkNodeToken(v___x_2280_, v_startPos_2249_, v_includeWhitespace_2250_, v_c_2251_, v_s_2256_);
return v___x_2281_;
}
}
}
else
{
lean_dec(v_j_2274_);
goto v___jp_2262_;
}
v___jp_2262_:
{
uint32_t v___x_2263_; uint8_t v___x_2264_; 
v___x_2263_ = 46;
v___x_2264_ = lean_uint32_dec_eq(v_curr_2261_, v___x_2263_);
if (v___x_2264_ == 0)
{
uint32_t v___x_2265_; uint8_t v___x_2266_; 
v___x_2265_ = 101;
v___x_2266_ = lean_uint32_dec_eq(v_curr_2261_, v___x_2265_);
if (v___x_2266_ == 0)
{
uint32_t v___x_2267_; uint8_t v___x_2268_; 
v___x_2267_ = 69;
v___x_2268_ = lean_uint32_dec_eq(v_curr_2261_, v___x_2267_);
if (v___x_2268_ == 0)
{
lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2269_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2270_ = l_Lean_Parser_mkNodeToken(v___x_2269_, v_startPos_2249_, v_includeWhitespace_2250_, v_c_2251_, v_s_2256_);
return v___x_2270_;
}
else
{
lean_object* v___x_2271_; 
v___x_2271_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(v_startPos_2249_, v_includeWhitespace_2250_, v_c_2251_, v_s_2256_);
return v___x_2271_;
}
}
else
{
lean_object* v___x_2272_; 
v___x_2272_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(v_startPos_2249_, v_includeWhitespace_2250_, v_c_2251_, v_s_2256_);
return v___x_2272_;
}
}
else
{
lean_object* v___x_2273_; 
v___x_2273_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(v_startPos_2249_, v_includeWhitespace_2250_, v_c_2251_, v_s_2256_);
return v___x_2273_;
}
}
}
else
{
lean_object* v___x_2282_; lean_object* v___x_2283_; 
v___x_2282_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2283_ = l_Lean_Parser_mkNodeToken(v___x_2282_, v_startPos_2249_, v___x_2259_, v_c_2251_, v_s_2256_);
return v___x_2283_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_decimalNumberFn___boxed(lean_object* v_startPos_2284_, lean_object* v_includeWhitespace_2285_, lean_object* v_c_2286_, lean_object* v_s_2287_){
_start:
{
uint8_t v_includeWhitespace_boxed_2288_; lean_object* v_res_2289_; 
v_includeWhitespace_boxed_2288_ = lean_unbox(v_includeWhitespace_2285_);
v_res_2289_ = l_Lean_Parser_decimalNumberFn(v_startPos_2284_, v_includeWhitespace_boxed_2288_, v_c_2286_, v_s_2287_);
return v_res_2289_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_binNumberFn___lam__0(uint32_t v_c_2290_){
_start:
{
uint32_t v___x_2291_; uint8_t v___x_2292_; 
v___x_2291_ = 48;
v___x_2292_ = lean_uint32_dec_eq(v_c_2290_, v___x_2291_);
if (v___x_2292_ == 0)
{
uint32_t v___x_2293_; uint8_t v___x_2294_; 
v___x_2293_ = 49;
v___x_2294_ = lean_uint32_dec_eq(v_c_2290_, v___x_2293_);
return v___x_2294_;
}
else
{
return v___x_2292_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_binNumberFn___lam__0___boxed(lean_object* v_c_2295_){
_start:
{
uint32_t v_c_boxed_2296_; uint8_t v_res_2297_; lean_object* v_r_2298_; 
v_c_boxed_2296_ = lean_unbox_uint32(v_c_2295_);
lean_dec(v_c_2295_);
v_res_2297_ = l_Lean_Parser_binNumberFn___lam__0(v_c_boxed_2296_);
v_r_2298_ = lean_box(v_res_2297_);
return v_r_2298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_binNumberFn(lean_object* v_startPos_2301_, uint8_t v_includeWhitespace_2302_, lean_object* v_c_2303_, lean_object* v_s_2304_){
_start:
{
lean_object* v___f_2305_; lean_object* v___x_2306_; uint8_t v___x_2307_; lean_object* v_s_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; 
v___f_2305_ = ((lean_object*)(l_Lean_Parser_binNumberFn___closed__0));
v___x_2306_ = ((lean_object*)(l_Lean_Parser_binNumberFn___closed__1));
v___x_2307_ = 1;
lean_inc_ref(v_c_2303_);
v_s_2308_ = l_Lean_Parser_takeDigitsFn(v___f_2305_, v___x_2306_, v___x_2307_, v_c_2303_, v_s_2304_);
v___x_2309_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2310_ = l_Lean_Parser_mkNodeToken(v___x_2309_, v_startPos_2301_, v_includeWhitespace_2302_, v_c_2303_, v_s_2308_);
return v___x_2310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_binNumberFn___boxed(lean_object* v_startPos_2311_, lean_object* v_includeWhitespace_2312_, lean_object* v_c_2313_, lean_object* v_s_2314_){
_start:
{
uint8_t v_includeWhitespace_boxed_2315_; lean_object* v_res_2316_; 
v_includeWhitespace_boxed_2315_ = lean_unbox(v_includeWhitespace_2312_);
v_res_2316_ = l_Lean_Parser_binNumberFn(v_startPos_2311_, v_includeWhitespace_boxed_2315_, v_c_2313_, v_s_2314_);
return v_res_2316_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_octalNumberFn___lam__0(uint32_t v_c_2317_){
_start:
{
uint32_t v___x_2318_; uint8_t v___x_2319_; 
v___x_2318_ = 48;
v___x_2319_ = lean_uint32_dec_le(v___x_2318_, v_c_2317_);
if (v___x_2319_ == 0)
{
return v___x_2319_;
}
else
{
uint32_t v___x_2320_; uint8_t v___x_2321_; 
v___x_2320_ = 55;
v___x_2321_ = lean_uint32_dec_le(v_c_2317_, v___x_2320_);
return v___x_2321_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_octalNumberFn___lam__0___boxed(lean_object* v_c_2322_){
_start:
{
uint32_t v_c_boxed_2323_; uint8_t v_res_2324_; lean_object* v_r_2325_; 
v_c_boxed_2323_ = lean_unbox_uint32(v_c_2322_);
lean_dec(v_c_2322_);
v_res_2324_ = l_Lean_Parser_octalNumberFn___lam__0(v_c_boxed_2323_);
v_r_2325_ = lean_box(v_res_2324_);
return v_r_2325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_octalNumberFn(lean_object* v_startPos_2328_, uint8_t v_includeWhitespace_2329_, lean_object* v_c_2330_, lean_object* v_s_2331_){
_start:
{
lean_object* v___f_2332_; lean_object* v___x_2333_; uint8_t v___x_2334_; lean_object* v_s_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; 
v___f_2332_ = ((lean_object*)(l_Lean_Parser_octalNumberFn___closed__0));
v___x_2333_ = ((lean_object*)(l_Lean_Parser_octalNumberFn___closed__1));
v___x_2334_ = 1;
lean_inc_ref(v_c_2330_);
v_s_2335_ = l_Lean_Parser_takeDigitsFn(v___f_2332_, v___x_2333_, v___x_2334_, v_c_2330_, v_s_2331_);
v___x_2336_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2337_ = l_Lean_Parser_mkNodeToken(v___x_2336_, v_startPos_2328_, v_includeWhitespace_2329_, v_c_2330_, v_s_2335_);
return v___x_2337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_octalNumberFn___boxed(lean_object* v_startPos_2338_, lean_object* v_includeWhitespace_2339_, lean_object* v_c_2340_, lean_object* v_s_2341_){
_start:
{
uint8_t v_includeWhitespace_boxed_2342_; lean_object* v_res_2343_; 
v_includeWhitespace_boxed_2342_ = lean_unbox(v_includeWhitespace_2339_);
v_res_2343_ = l_Lean_Parser_octalNumberFn(v_startPos_2338_, v_includeWhitespace_boxed_2342_, v_c_2340_, v_s_2341_);
return v_res_2343_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_isHexDigit(uint32_t v_c_2344_){
_start:
{
uint32_t v___x_2355_; uint8_t v___x_2356_; 
v___x_2355_ = 48;
v___x_2356_ = lean_uint32_dec_le(v___x_2355_, v_c_2344_);
if (v___x_2356_ == 0)
{
goto v___jp_2350_;
}
else
{
uint32_t v___x_2357_; uint8_t v___x_2358_; 
v___x_2357_ = 57;
v___x_2358_ = lean_uint32_dec_le(v_c_2344_, v___x_2357_);
if (v___x_2358_ == 0)
{
goto v___jp_2350_;
}
else
{
return v___x_2358_;
}
}
v___jp_2345_:
{
uint32_t v___x_2346_; uint8_t v___x_2347_; 
v___x_2346_ = 65;
v___x_2347_ = lean_uint32_dec_le(v___x_2346_, v_c_2344_);
if (v___x_2347_ == 0)
{
return v___x_2347_;
}
else
{
uint32_t v___x_2348_; uint8_t v___x_2349_; 
v___x_2348_ = 70;
v___x_2349_ = lean_uint32_dec_le(v_c_2344_, v___x_2348_);
return v___x_2349_;
}
}
v___jp_2350_:
{
uint32_t v___x_2351_; uint8_t v___x_2352_; 
v___x_2351_ = 97;
v___x_2352_ = lean_uint32_dec_le(v___x_2351_, v_c_2344_);
if (v___x_2352_ == 0)
{
goto v___jp_2345_;
}
else
{
uint32_t v___x_2353_; uint8_t v___x_2354_; 
v___x_2353_ = 102;
v___x_2354_ = lean_uint32_dec_le(v_c_2344_, v___x_2353_);
if (v___x_2354_ == 0)
{
goto v___jp_2345_;
}
else
{
return v___x_2354_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_isHexDigit___boxed(lean_object* v_c_2359_){
_start:
{
uint32_t v_c_boxed_2360_; uint8_t v_res_2361_; lean_object* v_r_2362_; 
v_c_boxed_2360_ = lean_unbox_uint32(v_c_2359_);
lean_dec(v_c_2359_);
v_res_2361_ = l___private_Lean_Parser_Basic_0__Lean_Parser_isHexDigit(v_c_boxed_2360_);
v_r_2362_ = lean_box(v_res_2361_);
return v_r_2362_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_hexNumberFn___lam__0(uint32_t v___y_2363_){
_start:
{
uint32_t v___x_2374_; uint8_t v___x_2375_; 
v___x_2374_ = 48;
v___x_2375_ = lean_uint32_dec_le(v___x_2374_, v___y_2363_);
if (v___x_2375_ == 0)
{
goto v___jp_2369_;
}
else
{
uint32_t v___x_2376_; uint8_t v___x_2377_; 
v___x_2376_ = 57;
v___x_2377_ = lean_uint32_dec_le(v___y_2363_, v___x_2376_);
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
v___x_2366_ = lean_uint32_dec_le(v___x_2365_, v___y_2363_);
if (v___x_2366_ == 0)
{
return v___x_2366_;
}
else
{
uint32_t v___x_2367_; uint8_t v___x_2368_; 
v___x_2367_ = 70;
v___x_2368_ = lean_uint32_dec_le(v___y_2363_, v___x_2367_);
return v___x_2368_;
}
}
v___jp_2369_:
{
uint32_t v___x_2370_; uint8_t v___x_2371_; 
v___x_2370_ = 97;
v___x_2371_ = lean_uint32_dec_le(v___x_2370_, v___y_2363_);
if (v___x_2371_ == 0)
{
goto v___jp_2364_;
}
else
{
uint32_t v___x_2372_; uint8_t v___x_2373_; 
v___x_2372_ = 102;
v___x_2373_ = lean_uint32_dec_le(v___y_2363_, v___x_2372_);
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
LEAN_EXPORT lean_object* l_Lean_Parser_hexNumberFn___lam__0___boxed(lean_object* v___y_2378_){
_start:
{
uint32_t v___y_50__boxed_2379_; uint8_t v_res_2380_; lean_object* v_r_2381_; 
v___y_50__boxed_2379_ = lean_unbox_uint32(v___y_2378_);
lean_dec(v___y_2378_);
v_res_2380_ = l_Lean_Parser_hexNumberFn___lam__0(v___y_50__boxed_2379_);
v_r_2381_ = lean_box(v_res_2380_);
return v_r_2381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hexNumberFn(lean_object* v_startPos_2384_, uint8_t v_includeWhitespace_2385_, lean_object* v_kind_2386_, lean_object* v_c_2387_, lean_object* v_s_2388_){
_start:
{
lean_object* v___f_2389_; lean_object* v___x_2390_; uint8_t v___x_2391_; lean_object* v_s_2392_; lean_object* v___x_2393_; 
v___f_2389_ = ((lean_object*)(l_Lean_Parser_hexNumberFn___closed__0));
v___x_2390_ = ((lean_object*)(l_Lean_Parser_hexNumberFn___closed__1));
v___x_2391_ = 1;
lean_inc_ref(v_c_2387_);
v_s_2392_ = l_Lean_Parser_takeDigitsFn(v___f_2389_, v___x_2390_, v___x_2391_, v_c_2387_, v_s_2388_);
v___x_2393_ = l_Lean_Parser_mkNodeToken(v_kind_2386_, v_startPos_2384_, v_includeWhitespace_2385_, v_c_2387_, v_s_2392_);
return v___x_2393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hexNumberFn___boxed(lean_object* v_startPos_2394_, lean_object* v_includeWhitespace_2395_, lean_object* v_kind_2396_, lean_object* v_c_2397_, lean_object* v_s_2398_){
_start:
{
uint8_t v_includeWhitespace_boxed_2399_; lean_object* v_res_2400_; 
v_includeWhitespace_boxed_2399_ = lean_unbox(v_includeWhitespace_2395_);
v_res_2400_ = l_Lean_Parser_hexNumberFn(v_startPos_2394_, v_includeWhitespace_boxed_2399_, v_kind_2396_, v_c_2397_, v_s_2398_);
return v_res_2400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numberFnAux(uint8_t v_includeWhitespace_2402_, lean_object* v_c_2403_, lean_object* v_s_2404_){
_start:
{
lean_object* v_pos_2408_; lean_object* v_toInputContext_2409_; uint8_t v___x_2410_; 
v_pos_2408_ = lean_ctor_get(v_s_2404_, 2);
v_toInputContext_2409_ = lean_ctor_get(v_c_2403_, 0);
lean_inc(v_pos_2408_);
lean_inc_ref(v_toInputContext_2409_);
v___x_2410_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2409_, v_pos_2408_);
if (v___x_2410_ == 0)
{
lean_object* v_inputString_2411_; uint32_t v_curr_2412_; uint32_t v___x_2413_; uint8_t v___x_2414_; 
v_inputString_2411_ = lean_ctor_get(v_toInputContext_2409_, 0);
v_curr_2412_ = lean_string_utf8_get_fast(v_inputString_2411_, v_pos_2408_);
v___x_2413_ = 48;
v___x_2414_ = lean_uint32_dec_eq(v_curr_2412_, v___x_2413_);
if (v___x_2414_ == 0)
{
uint8_t v___x_2415_; 
v___x_2415_ = lean_uint32_dec_le(v___x_2413_, v_curr_2412_);
if (v___x_2415_ == 0)
{
lean_dec_ref(v_c_2403_);
goto v___jp_2405_;
}
else
{
uint32_t v___x_2416_; uint8_t v___x_2417_; 
v___x_2416_ = 57;
v___x_2417_ = lean_uint32_dec_le(v_curr_2412_, v___x_2416_);
if (v___x_2417_ == 0)
{
lean_dec_ref(v_c_2403_);
goto v___jp_2405_;
}
else
{
lean_object* v___x_2418_; lean_object* v___x_2419_; 
lean_inc(v_pos_2408_);
v___x_2418_ = l_Lean_Parser_ParserState_next(v_s_2404_, v_c_2403_, v_pos_2408_);
v___x_2419_ = l_Lean_Parser_decimalNumberFn(v_pos_2408_, v_includeWhitespace_2402_, v_c_2403_, v___x_2418_);
return v___x_2419_;
}
}
}
else
{
lean_object* v_i_2420_; uint32_t v_curr_2431_; uint32_t v___x_2432_; uint8_t v___x_2433_; 
lean_inc(v_pos_2408_);
v_i_2420_ = lean_string_utf8_next_fast(v_inputString_2411_, v_pos_2408_);
v_curr_2431_ = lean_string_utf8_get(v_inputString_2411_, v_i_2420_);
v___x_2432_ = 98;
v___x_2433_ = lean_uint32_dec_eq(v_curr_2431_, v___x_2432_);
if (v___x_2433_ == 0)
{
uint32_t v___x_2434_; uint8_t v___x_2435_; 
v___x_2434_ = 66;
v___x_2435_ = lean_uint32_dec_eq(v_curr_2431_, v___x_2434_);
if (v___x_2435_ == 0)
{
uint32_t v___x_2436_; uint8_t v___x_2437_; 
v___x_2436_ = 111;
v___x_2437_ = lean_uint32_dec_eq(v_curr_2431_, v___x_2436_);
if (v___x_2437_ == 0)
{
uint32_t v___x_2438_; uint8_t v___x_2439_; 
v___x_2438_ = 79;
v___x_2439_ = lean_uint32_dec_eq(v_curr_2431_, v___x_2438_);
if (v___x_2439_ == 0)
{
uint32_t v___x_2440_; uint8_t v___x_2441_; 
v___x_2440_ = 120;
v___x_2441_ = lean_uint32_dec_eq(v_curr_2431_, v___x_2440_);
if (v___x_2441_ == 0)
{
uint32_t v___x_2442_; uint8_t v___x_2443_; 
v___x_2442_ = 88;
v___x_2443_ = lean_uint32_dec_eq(v_curr_2431_, v___x_2442_);
if (v___x_2443_ == 0)
{
lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2444_ = l_Lean_Parser_ParserState_setPos(v_s_2404_, v_i_2420_);
v___x_2445_ = l_Lean_Parser_decimalNumberFn(v_pos_2408_, v_includeWhitespace_2402_, v_c_2403_, v___x_2444_);
return v___x_2445_;
}
else
{
goto v___jp_2421_;
}
}
else
{
goto v___jp_2421_;
}
}
else
{
goto v___jp_2425_;
}
}
else
{
goto v___jp_2425_;
}
}
else
{
goto v___jp_2428_;
}
}
else
{
goto v___jp_2428_;
}
v___jp_2421_:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2422_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2423_ = l_Lean_Parser_ParserState_next(v_s_2404_, v_c_2403_, v_i_2420_);
v___x_2424_ = l_Lean_Parser_hexNumberFn(v_pos_2408_, v_includeWhitespace_2402_, v___x_2422_, v_c_2403_, v___x_2423_);
return v___x_2424_;
}
v___jp_2425_:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; 
v___x_2426_ = l_Lean_Parser_ParserState_next(v_s_2404_, v_c_2403_, v_i_2420_);
v___x_2427_ = l_Lean_Parser_octalNumberFn(v_pos_2408_, v_includeWhitespace_2402_, v_c_2403_, v___x_2426_);
return v___x_2427_;
}
v___jp_2428_:
{
lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2429_ = l_Lean_Parser_ParserState_next(v_s_2404_, v_c_2403_, v_i_2420_);
v___x_2430_ = l_Lean_Parser_binNumberFn(v_pos_2408_, v_includeWhitespace_2402_, v_c_2403_, v___x_2429_);
return v___x_2430_;
}
}
}
else
{
lean_object* v___x_2446_; lean_object* v___x_2447_; 
lean_dec_ref(v_c_2403_);
v___x_2446_ = lean_box(0);
v___x_2447_ = l_Lean_Parser_ParserState_mkEOIError(v_s_2404_, v___x_2446_);
return v___x_2447_;
}
v___jp_2405_:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2406_ = ((lean_object*)(l_Lean_Parser_numberFnAux___closed__0));
v___x_2407_ = l_Lean_Parser_ParserState_mkError(v_s_2404_, v___x_2406_);
return v___x_2407_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numberFnAux___boxed(lean_object* v_includeWhitespace_2448_, lean_object* v_c_2449_, lean_object* v_s_2450_){
_start:
{
uint8_t v_includeWhitespace_boxed_2451_; lean_object* v_res_2452_; 
v_includeWhitespace_boxed_2451_ = lean_unbox(v_includeWhitespace_2448_);
v_res_2452_ = l_Lean_Parser_numberFnAux(v_includeWhitespace_boxed_2451_, v_c_2449_, v_s_2450_);
return v_res_2452_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_isIdCont(lean_object* v_c_2453_, lean_object* v_s_2454_){
_start:
{
lean_object* v_toInputContext_2455_; lean_object* v_pos_2456_; lean_object* v_inputString_2457_; uint32_t v_curr_2458_; uint32_t v___x_2459_; uint8_t v___x_2460_; 
v_toInputContext_2455_ = lean_ctor_get(v_c_2453_, 0);
lean_inc_ref(v_toInputContext_2455_);
lean_dec_ref(v_c_2453_);
v_pos_2456_ = lean_ctor_get(v_s_2454_, 2);
v_inputString_2457_ = lean_ctor_get(v_toInputContext_2455_, 0);
lean_inc_ref(v_inputString_2457_);
v_curr_2458_ = lean_string_utf8_get(v_inputString_2457_, v_pos_2456_);
v___x_2459_ = 46;
v___x_2460_ = lean_uint32_dec_eq(v_curr_2458_, v___x_2459_);
if (v___x_2460_ == 0)
{
lean_dec_ref(v_inputString_2457_);
lean_dec_ref(v_toInputContext_2455_);
return v___x_2460_;
}
else
{
lean_object* v_i_2461_; uint8_t v___x_2462_; 
v_i_2461_ = lean_string_utf8_next(v_inputString_2457_, v_pos_2456_);
lean_inc(v_i_2461_);
v___x_2462_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2455_, v_i_2461_);
if (v___x_2462_ == 0)
{
uint32_t v_curr_2463_; uint32_t v___x_2475_; uint8_t v___x_2476_; 
v_curr_2463_ = lean_string_utf8_get(v_inputString_2457_, v_i_2461_);
lean_dec(v_i_2461_);
lean_dec_ref(v_inputString_2457_);
v___x_2475_ = 65;
v___x_2476_ = lean_uint32_dec_le(v___x_2475_, v_curr_2463_);
if (v___x_2476_ == 0)
{
goto v___jp_2470_;
}
else
{
uint32_t v___x_2477_; uint8_t v___x_2478_; 
v___x_2477_ = 90;
v___x_2478_ = lean_uint32_dec_le(v_curr_2463_, v___x_2477_);
if (v___x_2478_ == 0)
{
goto v___jp_2470_;
}
else
{
return v___x_2460_;
}
}
v___jp_2464_:
{
uint32_t v___x_2465_; uint8_t v___x_2466_; 
v___x_2465_ = 95;
v___x_2466_ = lean_uint32_dec_eq(v_curr_2463_, v___x_2465_);
if (v___x_2466_ == 0)
{
uint8_t v___x_2467_; 
v___x_2467_ = l_Lean_isLetterLike(v_curr_2463_);
if (v___x_2467_ == 0)
{
uint32_t v___x_2468_; uint8_t v___x_2469_; 
v___x_2468_ = l_Lean_idBeginEscape;
v___x_2469_ = lean_uint32_dec_eq(v_curr_2463_, v___x_2468_);
return v___x_2469_;
}
else
{
return v___x_2460_;
}
}
else
{
return v___x_2460_;
}
}
v___jp_2470_:
{
uint32_t v___x_2471_; uint8_t v___x_2472_; 
v___x_2471_ = 97;
v___x_2472_ = lean_uint32_dec_le(v___x_2471_, v_curr_2463_);
if (v___x_2472_ == 0)
{
goto v___jp_2464_;
}
else
{
uint32_t v___x_2473_; uint8_t v___x_2474_; 
v___x_2473_ = 122;
v___x_2474_ = lean_uint32_dec_le(v_curr_2463_, v___x_2473_);
if (v___x_2474_ == 0)
{
goto v___jp_2464_;
}
else
{
return v___x_2460_;
}
}
}
}
else
{
uint8_t v___x_2479_; 
lean_dec(v_i_2461_);
lean_dec_ref(v_inputString_2457_);
v___x_2479_ = 0;
return v___x_2479_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isIdCont___boxed(lean_object* v_c_2480_, lean_object* v_s_2481_){
_start:
{
uint8_t v_res_2482_; lean_object* v_r_2483_; 
v_res_2482_ = l_Lean_Parser_isIdCont(v_c_2480_, v_s_2481_);
lean_dec_ref(v_s_2481_);
v_r_2483_ = lean_box(v_res_2482_);
return v_r_2483_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_isToken(lean_object* v_idStartPos_2484_, lean_object* v_idStopPos_2485_, lean_object* v_tk_2486_){
_start:
{
if (lean_obj_tag(v_tk_2486_) == 0)
{
uint8_t v___x_2487_; 
v___x_2487_ = 0;
return v___x_2487_;
}
else
{
lean_object* v_val_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; uint8_t v___x_2491_; 
v_val_2488_ = lean_ctor_get(v_tk_2486_, 0);
v___x_2489_ = lean_nat_sub(v_idStopPos_2485_, v_idStartPos_2484_);
v___x_2490_ = lean_string_utf8_byte_size(v_val_2488_);
v___x_2491_ = lean_nat_dec_le(v___x_2489_, v___x_2490_);
lean_dec(v___x_2489_);
return v___x_2491_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_isToken___boxed(lean_object* v_idStartPos_2492_, lean_object* v_idStopPos_2493_, lean_object* v_tk_2494_){
_start:
{
uint8_t v_res_2495_; lean_object* v_r_2496_; 
v_res_2495_ = l___private_Lean_Parser_Basic_0__Lean_Parser_isToken(v_idStartPos_2492_, v_idStopPos_2493_, v_tk_2494_);
lean_dec(v_tk_2494_);
lean_dec(v_idStopPos_2493_);
lean_dec(v_idStartPos_2492_);
v_r_2496_ = lean_box(v_res_2495_);
return v_r_2496_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0_spec__0(lean_object* v_a_2497_, lean_object* v_as_2498_, size_t v_i_2499_, size_t v_stop_2500_){
_start:
{
uint8_t v___x_2501_; 
v___x_2501_ = lean_usize_dec_eq(v_i_2499_, v_stop_2500_);
if (v___x_2501_ == 0)
{
lean_object* v___x_2502_; uint8_t v___x_2503_; 
v___x_2502_ = lean_array_uget_borrowed(v_as_2498_, v_i_2499_);
v___x_2503_ = lean_string_dec_eq(v_a_2497_, v___x_2502_);
if (v___x_2503_ == 0)
{
size_t v___x_2504_; size_t v___x_2505_; 
v___x_2504_ = ((size_t)1ULL);
v___x_2505_ = lean_usize_add(v_i_2499_, v___x_2504_);
v_i_2499_ = v___x_2505_;
goto _start;
}
else
{
return v___x_2503_;
}
}
else
{
uint8_t v___x_2507_; 
v___x_2507_ = 0;
return v___x_2507_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0_spec__0___boxed(lean_object* v_a_2508_, lean_object* v_as_2509_, lean_object* v_i_2510_, lean_object* v_stop_2511_){
_start:
{
size_t v_i_boxed_2512_; size_t v_stop_boxed_2513_; uint8_t v_res_2514_; lean_object* v_r_2515_; 
v_i_boxed_2512_ = lean_unbox_usize(v_i_2510_);
lean_dec(v_i_2510_);
v_stop_boxed_2513_ = lean_unbox_usize(v_stop_2511_);
lean_dec(v_stop_2511_);
v_res_2514_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0_spec__0(v_a_2508_, v_as_2509_, v_i_boxed_2512_, v_stop_boxed_2513_);
lean_dec_ref(v_as_2509_);
lean_dec_ref(v_a_2508_);
v_r_2515_ = lean_box(v_res_2514_);
return v_r_2515_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0(lean_object* v_as_2516_, lean_object* v_a_2517_){
_start:
{
lean_object* v___x_2518_; lean_object* v___x_2519_; uint8_t v___x_2520_; 
v___x_2518_ = lean_unsigned_to_nat(0u);
v___x_2519_ = lean_array_get_size(v_as_2516_);
v___x_2520_ = lean_nat_dec_lt(v___x_2518_, v___x_2519_);
if (v___x_2520_ == 0)
{
return v___x_2520_;
}
else
{
size_t v___x_2521_; size_t v___x_2522_; uint8_t v___x_2523_; 
v___x_2521_ = ((size_t)0ULL);
v___x_2522_ = lean_usize_of_nat(v___x_2519_);
v___x_2523_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0_spec__0(v_a_2517_, v_as_2516_, v___x_2521_, v___x_2522_);
return v___x_2523_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0___boxed(lean_object* v_as_2524_, lean_object* v_a_2525_){
_start:
{
uint8_t v_res_2526_; lean_object* v_r_2527_; 
v_res_2526_ = l_Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0(v_as_2524_, v_a_2525_);
lean_dec_ref(v_a_2525_);
lean_dec_ref(v_as_2524_);
v_r_2527_ = lean_box(v_res_2526_);
return v_r_2527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkTokenAndFixPos(lean_object* v_startPos_2530_, lean_object* v_tk_2531_, lean_object* v_c_2532_, lean_object* v_s_2533_){
_start:
{
if (lean_obj_tag(v_tk_2531_) == 0)
{
lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
lean_dec_ref(v_c_2532_);
v___x_2534_ = ((lean_object*)(l_Lean_Parser_mkTokenAndFixPos___closed__0));
v___x_2535_ = lean_box(0);
v___x_2536_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_2533_, v___x_2534_, v_startPos_2530_, v___x_2535_);
return v___x_2536_;
}
else
{
lean_object* v_toCacheableParserContext_2537_; lean_object* v_val_2538_; lean_object* v_toInputContext_2539_; lean_object* v_forbiddenTks_2540_; uint8_t v___x_2541_; 
v_toCacheableParserContext_2537_ = lean_ctor_get(v_c_2532_, 2);
v_val_2538_ = lean_ctor_get(v_tk_2531_, 0);
v_toInputContext_2539_ = lean_ctor_get(v_c_2532_, 0);
lean_inc_ref(v_toInputContext_2539_);
v_forbiddenTks_2540_ = lean_ctor_get(v_toCacheableParserContext_2537_, 3);
v___x_2541_ = l_Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0(v_forbiddenTks_2540_, v_val_2538_);
if (v___x_2541_ == 0)
{
lean_object* v_leading_2542_; lean_object* v___x_2543_; lean_object* v_stopPos_2544_; lean_object* v_s_2545_; lean_object* v_s_2546_; lean_object* v___y_2548_; lean_object* v_pos_2552_; lean_object* v_inputString_2553_; lean_object* v_endPos_2554_; uint8_t v___x_2555_; 
lean_inc(v_startPos_2530_);
v_leading_2542_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_2532_, v_startPos_2530_);
v___x_2543_ = lean_string_utf8_byte_size(v_val_2538_);
v_stopPos_2544_ = lean_nat_add(v_startPos_2530_, v___x_2543_);
lean_inc(v_stopPos_2544_);
v_s_2545_ = l_Lean_Parser_ParserState_setPos(v_s_2533_, v_stopPos_2544_);
v_s_2546_ = l_Lean_Parser_whitespace(v_c_2532_, v_s_2545_);
v_pos_2552_ = lean_ctor_get(v_s_2546_, 2);
v_inputString_2553_ = lean_ctor_get(v_toInputContext_2539_, 0);
lean_inc_ref(v_inputString_2553_);
v_endPos_2554_ = lean_ctor_get(v_toInputContext_2539_, 3);
lean_inc(v_endPos_2554_);
lean_dec_ref(v_toInputContext_2539_);
v___x_2555_ = lean_nat_dec_le(v_pos_2552_, v_endPos_2554_);
if (v___x_2555_ == 0)
{
lean_object* v___x_2556_; 
lean_inc(v_stopPos_2544_);
v___x_2556_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2556_, 0, v_inputString_2553_);
lean_ctor_set(v___x_2556_, 1, v_stopPos_2544_);
lean_ctor_set(v___x_2556_, 2, v_endPos_2554_);
v___y_2548_ = v___x_2556_;
goto v___jp_2547_;
}
else
{
lean_object* v___x_2557_; 
lean_dec(v_endPos_2554_);
lean_inc(v_pos_2552_);
lean_inc(v_stopPos_2544_);
v___x_2557_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2557_, 0, v_inputString_2553_);
lean_ctor_set(v___x_2557_, 1, v_stopPos_2544_);
lean_ctor_set(v___x_2557_, 2, v_pos_2552_);
v___y_2548_ = v___x_2557_;
goto v___jp_2547_;
}
v___jp_2547_:
{
lean_object* v___x_2549_; lean_object* v_atom_2550_; lean_object* v___x_2551_; 
v___x_2549_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2549_, 0, v_leading_2542_);
lean_ctor_set(v___x_2549_, 1, v_startPos_2530_);
lean_ctor_set(v___x_2549_, 2, v___y_2548_);
lean_ctor_set(v___x_2549_, 3, v_stopPos_2544_);
lean_inc(v_val_2538_);
v_atom_2550_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_2550_, 0, v___x_2549_);
lean_ctor_set(v_atom_2550_, 1, v_val_2538_);
v___x_2551_ = l_Lean_Parser_ParserState_pushSyntax(v_s_2546_, v_atom_2550_);
return v___x_2551_;
}
}
else
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; 
lean_dec_ref(v_toInputContext_2539_);
lean_dec_ref(v_c_2532_);
v___x_2558_ = ((lean_object*)(l_Lean_Parser_mkTokenAndFixPos___closed__1));
v___x_2559_ = lean_box(0);
v___x_2560_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_2533_, v___x_2558_, v_startPos_2530_, v___x_2559_);
return v___x_2560_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkTokenAndFixPos___boxed(lean_object* v_startPos_2561_, lean_object* v_tk_2562_, lean_object* v_c_2563_, lean_object* v_s_2564_){
_start:
{
lean_object* v_res_2565_; 
v_res_2565_ = l_Lean_Parser_mkTokenAndFixPos(v_startPos_2561_, v_tk_2562_, v_c_2563_, v_s_2564_);
lean_dec(v_tk_2562_);
return v_res_2565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkIdResult(lean_object* v_startPos_2566_, lean_object* v_tk_2567_, lean_object* v_val_2568_, uint8_t v_includeWhitespace_2569_, lean_object* v_c_2570_, lean_object* v_s_2571_){
_start:
{
lean_object* v_pos_2572_; lean_object* v___y_2574_; lean_object* v___y_2575_; lean_object* v___y_2576_; lean_object* v___y_2577_; uint8_t v___x_2582_; 
v_pos_2572_ = lean_ctor_get(v_s_2571_, 2);
v___x_2582_ = l___private_Lean_Parser_Basic_0__Lean_Parser_isToken(v_startPos_2566_, v_pos_2572_, v_tk_2567_);
if (v___x_2582_ == 0)
{
lean_object* v_toInputContext_2583_; lean_object* v_inputString_2584_; lean_object* v_endPos_2585_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v_pos_2589_; lean_object* v___y_2595_; uint8_t v___x_2598_; 
lean_inc(v_pos_2572_);
v_toInputContext_2583_ = lean_ctor_get(v_c_2570_, 0);
v_inputString_2584_ = lean_ctor_get(v_toInputContext_2583_, 0);
lean_inc_ref(v_inputString_2584_);
v_endPos_2585_ = lean_ctor_get(v_toInputContext_2583_, 3);
lean_inc(v_endPos_2585_);
v___x_2598_ = lean_nat_dec_le(v_pos_2572_, v_endPos_2585_);
if (v___x_2598_ == 0)
{
lean_object* v___x_2599_; 
lean_inc(v_endPos_2585_);
lean_inc(v_startPos_2566_);
lean_inc_ref(v_inputString_2584_);
v___x_2599_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2599_, 0, v_inputString_2584_);
lean_ctor_set(v___x_2599_, 1, v_startPos_2566_);
lean_ctor_set(v___x_2599_, 2, v_endPos_2585_);
v___y_2595_ = v___x_2599_;
goto v___jp_2594_;
}
else
{
lean_object* v___x_2600_; 
lean_inc(v_pos_2572_);
lean_inc(v_startPos_2566_);
lean_inc_ref(v_inputString_2584_);
v___x_2600_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2600_, 0, v_inputString_2584_);
lean_ctor_set(v___x_2600_, 1, v_startPos_2566_);
lean_ctor_set(v___x_2600_, 2, v_pos_2572_);
v___y_2595_ = v___x_2600_;
goto v___jp_2594_;
}
v___jp_2586_:
{
lean_object* v_leading_2590_; uint8_t v___x_2591_; 
lean_inc(v_startPos_2566_);
v_leading_2590_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_2570_, v_startPos_2566_);
lean_dec_ref(v_c_2570_);
v___x_2591_ = lean_nat_dec_le(v_pos_2589_, v_endPos_2585_);
if (v___x_2591_ == 0)
{
lean_object* v___x_2592_; 
lean_dec(v_pos_2589_);
lean_inc(v_pos_2572_);
v___x_2592_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2592_, 0, v_inputString_2584_);
lean_ctor_set(v___x_2592_, 1, v_pos_2572_);
lean_ctor_set(v___x_2592_, 2, v_endPos_2585_);
v___y_2574_ = v___y_2587_;
v___y_2575_ = v_leading_2590_;
v___y_2576_ = v___y_2588_;
v___y_2577_ = v___x_2592_;
goto v___jp_2573_;
}
else
{
lean_object* v___x_2593_; 
lean_dec(v_endPos_2585_);
lean_inc(v_pos_2572_);
v___x_2593_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2593_, 0, v_inputString_2584_);
lean_ctor_set(v___x_2593_, 1, v_pos_2572_);
lean_ctor_set(v___x_2593_, 2, v_pos_2589_);
v___y_2574_ = v___y_2587_;
v___y_2575_ = v_leading_2590_;
v___y_2576_ = v___y_2588_;
v___y_2577_ = v___x_2593_;
goto v___jp_2573_;
}
}
v___jp_2594_:
{
if (v_includeWhitespace_2569_ == 0)
{
lean_inc(v_pos_2572_);
v___y_2587_ = v___y_2595_;
v___y_2588_ = v_s_2571_;
v_pos_2589_ = v_pos_2572_;
goto v___jp_2586_;
}
else
{
lean_object* v___x_2596_; lean_object* v_pos_2597_; 
lean_inc_ref(v_c_2570_);
v___x_2596_ = l_Lean_Parser_whitespace(v_c_2570_, v_s_2571_);
v_pos_2597_ = lean_ctor_get(v___x_2596_, 2);
lean_inc(v_pos_2597_);
v___y_2587_ = v___y_2595_;
v___y_2588_ = v___x_2596_;
v_pos_2589_ = v_pos_2597_;
goto v___jp_2586_;
}
}
}
else
{
lean_object* v___x_2601_; 
lean_dec(v_val_2568_);
v___x_2601_ = l_Lean_Parser_mkTokenAndFixPos(v_startPos_2566_, v_tk_2567_, v_c_2570_, v_s_2571_);
return v___x_2601_;
}
v___jp_2573_:
{
lean_object* v_info_2578_; lean_object* v___x_2579_; lean_object* v_atom_2580_; lean_object* v___x_2581_; 
v_info_2578_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_info_2578_, 0, v___y_2575_);
lean_ctor_set(v_info_2578_, 1, v_startPos_2566_);
lean_ctor_set(v_info_2578_, 2, v___y_2577_);
lean_ctor_set(v_info_2578_, 3, v_pos_2572_);
v___x_2579_ = lean_box(0);
v_atom_2580_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_atom_2580_, 0, v_info_2578_);
lean_ctor_set(v_atom_2580_, 1, v___y_2574_);
lean_ctor_set(v_atom_2580_, 2, v_val_2568_);
lean_ctor_set(v_atom_2580_, 3, v___x_2579_);
v___x_2581_ = l_Lean_Parser_ParserState_pushSyntax(v___y_2576_, v_atom_2580_);
return v___x_2581_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkIdResult___boxed(lean_object* v_startPos_2602_, lean_object* v_tk_2603_, lean_object* v_val_2604_, lean_object* v_includeWhitespace_2605_, lean_object* v_c_2606_, lean_object* v_s_2607_){
_start:
{
uint8_t v_includeWhitespace_boxed_2608_; lean_object* v_res_2609_; 
v_includeWhitespace_boxed_2608_ = lean_unbox(v_includeWhitespace_2605_);
v_res_2609_ = l_Lean_Parser_mkIdResult(v_startPos_2602_, v_tk_2603_, v_val_2604_, v_includeWhitespace_boxed_2608_, v_c_2606_, v_s_2607_);
lean_dec(v_tk_2603_);
return v_res_2609_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__0(uint32_t v___y_2610_){
_start:
{
uint32_t v___x_2632_; uint8_t v___x_2633_; 
v___x_2632_ = 65;
v___x_2633_ = lean_uint32_dec_le(v___x_2632_, v___y_2610_);
if (v___x_2633_ == 0)
{
goto v___jp_2627_;
}
else
{
uint32_t v___x_2634_; uint8_t v___x_2635_; 
v___x_2634_ = 90;
v___x_2635_ = lean_uint32_dec_le(v___y_2610_, v___x_2634_);
if (v___x_2635_ == 0)
{
goto v___jp_2627_;
}
else
{
return v___x_2635_;
}
}
v___jp_2611_:
{
uint32_t v___x_2612_; uint8_t v___x_2613_; 
v___x_2612_ = 95;
v___x_2613_ = lean_uint32_dec_eq(v___y_2610_, v___x_2612_);
if (v___x_2613_ == 0)
{
uint32_t v___x_2614_; uint8_t v___x_2615_; 
v___x_2614_ = 39;
v___x_2615_ = lean_uint32_dec_eq(v___y_2610_, v___x_2614_);
if (v___x_2615_ == 0)
{
uint32_t v___x_2616_; uint8_t v___x_2617_; 
v___x_2616_ = 33;
v___x_2617_ = lean_uint32_dec_eq(v___y_2610_, v___x_2616_);
if (v___x_2617_ == 0)
{
uint32_t v___x_2618_; uint8_t v___x_2619_; 
v___x_2618_ = 63;
v___x_2619_ = lean_uint32_dec_eq(v___y_2610_, v___x_2618_);
if (v___x_2619_ == 0)
{
uint8_t v___x_2620_; 
v___x_2620_ = l_Lean_isLetterLike(v___y_2610_);
if (v___x_2620_ == 0)
{
uint8_t v___x_2621_; 
v___x_2621_ = l_Lean_isSubScriptAlnum(v___y_2610_);
return v___x_2621_;
}
else
{
return v___x_2620_;
}
}
else
{
return v___x_2619_;
}
}
else
{
return v___x_2617_;
}
}
else
{
return v___x_2615_;
}
}
else
{
return v___x_2613_;
}
}
v___jp_2622_:
{
uint32_t v___x_2623_; uint8_t v___x_2624_; 
v___x_2623_ = 48;
v___x_2624_ = lean_uint32_dec_le(v___x_2623_, v___y_2610_);
if (v___x_2624_ == 0)
{
goto v___jp_2611_;
}
else
{
uint32_t v___x_2625_; uint8_t v___x_2626_; 
v___x_2625_ = 57;
v___x_2626_ = lean_uint32_dec_le(v___y_2610_, v___x_2625_);
if (v___x_2626_ == 0)
{
goto v___jp_2611_;
}
else
{
return v___x_2626_;
}
}
}
v___jp_2627_:
{
uint32_t v___x_2628_; uint8_t v___x_2629_; 
v___x_2628_ = 97;
v___x_2629_ = lean_uint32_dec_le(v___x_2628_, v___y_2610_);
if (v___x_2629_ == 0)
{
goto v___jp_2622_;
}
else
{
uint32_t v___x_2630_; uint8_t v___x_2631_; 
v___x_2630_ = 122;
v___x_2631_ = lean_uint32_dec_le(v___y_2610_, v___x_2630_);
if (v___x_2631_ == 0)
{
goto v___jp_2622_;
}
else
{
return v___x_2631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__0___boxed(lean_object* v___y_2636_){
_start:
{
uint32_t v___y_225__boxed_2637_; uint8_t v_res_2638_; lean_object* v_r_2639_; 
v___y_225__boxed_2637_ = lean_unbox_uint32(v___y_2636_);
lean_dec(v___y_2636_);
v_res_2638_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__0(v___y_225__boxed_2637_);
v_r_2639_ = lean_box(v_res_2638_);
return v_r_2639_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__1(uint32_t v___y_2640_){
_start:
{
uint32_t v___x_2641_; uint8_t v___x_2642_; 
v___x_2641_ = l_Lean_idEndEscape;
v___x_2642_ = lean_uint32_dec_eq(v___y_2640_, v___x_2641_);
return v___x_2642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__1___boxed(lean_object* v___y_2643_){
_start:
{
uint32_t v___y_278__boxed_2644_; uint8_t v_res_2645_; lean_object* v_r_2646_; 
v___y_278__boxed_2644_ = lean_unbox_uint32(v___y_2643_);
lean_dec(v___y_2643_);
v_res_2645_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__1(v___y_278__boxed_2644_);
v_r_2646_ = lean_box(v_res_2645_);
return v_r_2646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(lean_object* v_startPos_2650_, lean_object* v_tk_2651_, uint8_t v_includeWhitespace_2652_, lean_object* v_r_2653_, lean_object* v_c_2654_, lean_object* v_s_2655_){
_start:
{
lean_object* v_pos_2656_; lean_object* v_toInputContext_2657_; uint8_t v___x_2658_; 
v_pos_2656_ = lean_ctor_get(v_s_2655_, 2);
v_toInputContext_2657_ = lean_ctor_get(v_c_2654_, 0);
lean_inc(v_pos_2656_);
lean_inc_ref(v_toInputContext_2657_);
v___x_2658_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2657_, v_pos_2656_);
if (v___x_2658_ == 0)
{
lean_object* v_inputString_2659_; uint32_t v_curr_2660_; uint32_t v___x_2661_; uint8_t v___x_2662_; 
v_inputString_2659_ = lean_ctor_get(v_toInputContext_2657_, 0);
v_curr_2660_ = lean_string_utf8_get_fast(v_inputString_2659_, v_pos_2656_);
v___x_2661_ = l_Lean_idBeginEscape;
v___x_2662_ = lean_uint32_dec_eq(v_curr_2660_, v___x_2661_);
if (v___x_2662_ == 0)
{
lean_object* v___f_2663_; uint32_t v___x_2684_; uint8_t v___x_2685_; 
v___f_2663_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__0));
v___x_2684_ = 65;
v___x_2685_ = lean_uint32_dec_le(v___x_2684_, v_curr_2660_);
if (v___x_2685_ == 0)
{
goto v___jp_2679_;
}
else
{
uint32_t v___x_2686_; uint8_t v___x_2687_; 
v___x_2686_ = 90;
v___x_2687_ = lean_uint32_dec_le(v_curr_2660_, v___x_2686_);
if (v___x_2687_ == 0)
{
goto v___jp_2679_;
}
else
{
lean_inc(v_pos_2656_);
goto v___jp_2664_;
}
}
v___jp_2664_:
{
lean_object* v___x_2665_; lean_object* v_s_2666_; lean_object* v_pos_2667_; lean_object* v___x_2668_; lean_object* v_r_2669_; uint8_t v___x_2670_; 
v___x_2665_ = l_Lean_Parser_ParserState_next(v_s_2655_, v_c_2654_, v_pos_2656_);
lean_inc_ref_n(v_c_2654_, 2);
v_s_2666_ = l_Lean_Parser_takeWhileFn(v___f_2663_, v_c_2654_, v___x_2665_);
v_pos_2667_ = lean_ctor_get(v_s_2666_, 2);
v___x_2668_ = lean_string_utf8_extract(v_inputString_2659_, v_pos_2656_, v_pos_2667_);
lean_dec(v_pos_2656_);
v_r_2669_ = l_Lean_Name_str___override(v_r_2653_, v___x_2668_);
v___x_2670_ = l_Lean_Parser_isIdCont(v_c_2654_, v_s_2666_);
if (v___x_2670_ == 0)
{
lean_object* v___x_2671_; 
v___x_2671_ = l_Lean_Parser_mkIdResult(v_startPos_2650_, v_tk_2651_, v_r_2669_, v_includeWhitespace_2652_, v_c_2654_, v_s_2666_);
return v___x_2671_;
}
else
{
lean_object* v_s_2672_; 
lean_inc(v_pos_2667_);
v_s_2672_ = l_Lean_Parser_ParserState_next(v_s_2666_, v_c_2654_, v_pos_2667_);
lean_dec(v_pos_2667_);
v_r_2653_ = v_r_2669_;
v_s_2655_ = v_s_2672_;
goto _start;
}
}
v___jp_2674_:
{
uint32_t v___x_2675_; uint8_t v___x_2676_; 
v___x_2675_ = 95;
v___x_2676_ = lean_uint32_dec_eq(v_curr_2660_, v___x_2675_);
if (v___x_2676_ == 0)
{
uint8_t v___x_2677_; 
v___x_2677_ = l_Lean_isLetterLike(v_curr_2660_);
if (v___x_2677_ == 0)
{
lean_object* v___x_2678_; 
lean_dec(v_r_2653_);
v___x_2678_ = l_Lean_Parser_mkTokenAndFixPos(v_startPos_2650_, v_tk_2651_, v_c_2654_, v_s_2655_);
return v___x_2678_;
}
else
{
lean_inc(v_pos_2656_);
goto v___jp_2664_;
}
}
else
{
lean_inc(v_pos_2656_);
goto v___jp_2664_;
}
}
v___jp_2679_:
{
uint32_t v___x_2680_; uint8_t v___x_2681_; 
v___x_2680_ = 97;
v___x_2681_ = lean_uint32_dec_le(v___x_2680_, v_curr_2660_);
if (v___x_2681_ == 0)
{
goto v___jp_2674_;
}
else
{
uint32_t v___x_2682_; uint8_t v___x_2683_; 
v___x_2682_ = 122;
v___x_2683_ = lean_uint32_dec_le(v_curr_2660_, v___x_2682_);
if (v___x_2683_ == 0)
{
goto v___jp_2674_;
}
else
{
lean_inc(v_pos_2656_);
goto v___jp_2664_;
}
}
}
}
else
{
lean_object* v___f_2688_; lean_object* v_startPart_2689_; lean_object* v___x_2690_; lean_object* v_s_2691_; lean_object* v_pos_2692_; uint8_t v___x_2693_; 
v___f_2688_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__1));
v_startPart_2689_ = lean_string_utf8_next_fast(v_inputString_2659_, v_pos_2656_);
v___x_2690_ = l_Lean_Parser_ParserState_setPos(v_s_2655_, v_startPart_2689_);
lean_inc_ref(v_c_2654_);
v_s_2691_ = l_Lean_Parser_takeUntilFn(v___f_2688_, v_c_2654_, v___x_2690_);
v_pos_2692_ = lean_ctor_get(v_s_2691_, 2);
lean_inc(v_pos_2692_);
lean_inc_ref(v_toInputContext_2657_);
v___x_2693_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2657_, v_pos_2692_);
if (v___x_2693_ == 0)
{
lean_object* v_s_2694_; lean_object* v___x_2695_; lean_object* v_r_2696_; uint8_t v___x_2697_; 
lean_inc(v_pos_2692_);
v_s_2694_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_2691_, v_c_2654_, v_pos_2692_);
v___x_2695_ = lean_string_utf8_extract(v_inputString_2659_, v_startPart_2689_, v_pos_2692_);
lean_dec(v_pos_2692_);
v_r_2696_ = l_Lean_Name_str___override(v_r_2653_, v___x_2695_);
lean_inc_ref(v_c_2654_);
v___x_2697_ = l_Lean_Parser_isIdCont(v_c_2654_, v_s_2694_);
if (v___x_2697_ == 0)
{
lean_object* v___x_2698_; 
v___x_2698_ = l_Lean_Parser_mkIdResult(v_startPos_2650_, v_tk_2651_, v_r_2696_, v_includeWhitespace_2652_, v_c_2654_, v_s_2694_);
return v___x_2698_;
}
else
{
lean_object* v_pos_2699_; lean_object* v_s_2700_; 
v_pos_2699_ = lean_ctor_get(v_s_2694_, 2);
lean_inc(v_pos_2699_);
v_s_2700_ = l_Lean_Parser_ParserState_next(v_s_2694_, v_c_2654_, v_pos_2699_);
lean_dec(v_pos_2699_);
v_r_2653_ = v_r_2696_;
v_s_2655_ = v_s_2700_;
goto _start;
}
}
else
{
lean_object* v___x_2702_; lean_object* v___x_2703_; 
lean_dec_ref(v_c_2654_);
lean_dec(v_r_2653_);
lean_dec(v_startPos_2650_);
v___x_2702_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__2));
v___x_2703_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_2691_, v___x_2702_, v_startPart_2689_);
return v___x_2703_;
}
}
}
else
{
lean_object* v___x_2704_; lean_object* v___x_2705_; 
lean_dec_ref(v_c_2654_);
lean_dec(v_r_2653_);
lean_dec(v_startPos_2650_);
v___x_2704_ = lean_box(0);
v___x_2705_ = l_Lean_Parser_ParserState_mkEOIError(v_s_2655_, v___x_2704_);
return v___x_2705_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___boxed(lean_object* v_startPos_2706_, lean_object* v_tk_2707_, lean_object* v_includeWhitespace_2708_, lean_object* v_r_2709_, lean_object* v_c_2710_, lean_object* v_s_2711_){
_start:
{
uint8_t v_includeWhitespace_boxed_2712_; lean_object* v_res_2713_; 
v_includeWhitespace_boxed_2712_ = lean_unbox(v_includeWhitespace_2708_);
v_res_2713_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(v_startPos_2706_, v_tk_2707_, v_includeWhitespace_boxed_2712_, v_r_2709_, v_c_2710_, v_s_2711_);
lean_dec(v_tk_2707_);
return v_res_2713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identFnAux(lean_object* v_startPos_2714_, lean_object* v_tk_2715_, lean_object* v_r_2716_, uint8_t v_includeWhitespace_2717_, lean_object* v_c_2718_, lean_object* v_s_2719_){
_start:
{
lean_object* v___x_2720_; 
v___x_2720_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(v_startPos_2714_, v_tk_2715_, v_includeWhitespace_2717_, v_r_2716_, v_c_2718_, v_s_2719_);
return v___x_2720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identFnAux___boxed(lean_object* v_startPos_2721_, lean_object* v_tk_2722_, lean_object* v_r_2723_, lean_object* v_includeWhitespace_2724_, lean_object* v_c_2725_, lean_object* v_s_2726_){
_start:
{
uint8_t v_includeWhitespace_boxed_2727_; lean_object* v_res_2728_; 
v_includeWhitespace_boxed_2727_ = lean_unbox(v_includeWhitespace_2724_);
v_res_2728_ = l_Lean_Parser_identFnAux(v_startPos_2721_, v_tk_2722_, v_r_2723_, v_includeWhitespace_boxed_2727_, v_c_2725_, v_s_2726_);
lean_dec(v_tk_2722_);
return v_res_2728_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_isIdFirstOrBeginEscape(uint32_t v_c_2729_){
_start:
{
uint32_t v___x_2741_; uint8_t v___x_2742_; 
v___x_2741_ = 65;
v___x_2742_ = lean_uint32_dec_le(v___x_2741_, v_c_2729_);
if (v___x_2742_ == 0)
{
goto v___jp_2736_;
}
else
{
uint32_t v___x_2743_; uint8_t v___x_2744_; 
v___x_2743_ = 90;
v___x_2744_ = lean_uint32_dec_le(v_c_2729_, v___x_2743_);
if (v___x_2744_ == 0)
{
goto v___jp_2736_;
}
else
{
return v___x_2744_;
}
}
v___jp_2730_:
{
uint32_t v___x_2731_; uint8_t v___x_2732_; 
v___x_2731_ = 95;
v___x_2732_ = lean_uint32_dec_eq(v_c_2729_, v___x_2731_);
if (v___x_2732_ == 0)
{
uint8_t v___x_2733_; 
v___x_2733_ = l_Lean_isLetterLike(v_c_2729_);
if (v___x_2733_ == 0)
{
uint32_t v___x_2734_; uint8_t v___x_2735_; 
v___x_2734_ = l_Lean_idBeginEscape;
v___x_2735_ = lean_uint32_dec_eq(v_c_2729_, v___x_2734_);
return v___x_2735_;
}
else
{
return v___x_2733_;
}
}
else
{
return v___x_2732_;
}
}
v___jp_2736_:
{
uint32_t v___x_2737_; uint8_t v___x_2738_; 
v___x_2737_ = 97;
v___x_2738_ = lean_uint32_dec_le(v___x_2737_, v_c_2729_);
if (v___x_2738_ == 0)
{
goto v___jp_2730_;
}
else
{
uint32_t v___x_2739_; uint8_t v___x_2740_; 
v___x_2739_ = 122;
v___x_2740_ = lean_uint32_dec_le(v_c_2729_, v___x_2739_);
if (v___x_2740_ == 0)
{
goto v___jp_2730_;
}
else
{
return v___x_2740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_isIdFirstOrBeginEscape___boxed(lean_object* v_c_2745_){
_start:
{
uint32_t v_c_boxed_2746_; uint8_t v_res_2747_; lean_object* v_r_2748_; 
v_c_boxed_2746_ = lean_unbox_uint32(v_c_2745_);
lean_dec(v_c_2745_);
v_res_2747_ = l___private_Lean_Parser_Basic_0__Lean_Parser_isIdFirstOrBeginEscape(v_c_boxed_2746_);
v_r_2748_ = lean_box(v_res_2747_);
return v_r_2748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux(lean_object* v_startPos_2750_, lean_object* v_c_2751_, lean_object* v_s_2752_){
_start:
{
lean_object* v___x_2753_; lean_object* v___x_2754_; uint8_t v___x_2755_; lean_object* v___x_2756_; lean_object* v_s_2757_; lean_object* v_stxStack_2758_; lean_object* v_errorMsg_2759_; uint8_t v___x_2760_; 
v___x_2753_ = lean_box(0);
v___x_2754_ = lean_box(0);
v___x_2755_ = 1;
v___x_2756_ = l_Lean_Parser_ParserState_next(v_s_2752_, v_c_2751_, v_startPos_2750_);
v_s_2757_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(v_startPos_2750_, v___x_2753_, v___x_2755_, v___x_2754_, v_c_2751_, v___x_2756_);
v_stxStack_2758_ = lean_ctor_get(v_s_2757_, 0);
v_errorMsg_2759_ = lean_ctor_get(v_s_2757_, 4);
v___x_2760_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_2759_, v___x_2753_);
if (v___x_2760_ == 0)
{
return v_s_2757_;
}
else
{
lean_object* v_stx_2761_; 
v_stx_2761_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_2758_);
if (lean_obj_tag(v_stx_2761_) == 3)
{
lean_object* v_rawVal_2762_; lean_object* v_info_2763_; lean_object* v_str_2764_; lean_object* v_startPos_2765_; lean_object* v_stopPos_2766_; lean_object* v_s_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; 
v_rawVal_2762_ = lean_ctor_get(v_stx_2761_, 1);
lean_inc_ref(v_rawVal_2762_);
v_info_2763_ = lean_ctor_get(v_stx_2761_, 0);
lean_inc(v_info_2763_);
lean_dec_ref_known(v_stx_2761_, 4);
v_str_2764_ = lean_ctor_get(v_rawVal_2762_, 0);
lean_inc_ref(v_str_2764_);
v_startPos_2765_ = lean_ctor_get(v_rawVal_2762_, 1);
lean_inc(v_startPos_2765_);
v_stopPos_2766_ = lean_ctor_get(v_rawVal_2762_, 2);
lean_inc(v_stopPos_2766_);
lean_dec_ref(v_rawVal_2762_);
v_s_2767_ = l_Lean_Parser_ParserState_popSyntax(v_s_2757_);
v___x_2768_ = lean_string_utf8_extract(v_str_2764_, v_startPos_2765_, v_stopPos_2766_);
lean_dec(v_stopPos_2766_);
lean_dec(v_startPos_2765_);
lean_dec_ref(v_str_2764_);
v___x_2769_ = l_Lean_Syntax_mkNameLit(v___x_2768_, v_info_2763_);
v___x_2770_ = l_Lean_Parser_ParserState_pushSyntax(v_s_2767_, v___x_2769_);
return v___x_2770_;
}
else
{
lean_object* v___x_2771_; lean_object* v___x_2772_; 
lean_dec(v_stx_2761_);
v___x_2771_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux___closed__0));
v___x_2772_ = l_Lean_Parser_ParserState_mkError(v_s_2757_, v___x_2771_);
return v___x_2772_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_tokenFnAux(lean_object* v_c_2773_, lean_object* v_s_2774_){
_start:
{
lean_object* v_toInputContext_2775_; lean_object* v_pos_2776_; lean_object* v_tokens_2777_; lean_object* v_inputString_2778_; lean_object* v_endPos_2779_; uint32_t v_curr_2780_; uint32_t v___x_2781_; uint8_t v___x_2782_; uint8_t v___x_2783_; 
v_toInputContext_2775_ = lean_ctor_get(v_c_2773_, 0);
v_pos_2776_ = lean_ctor_get(v_s_2774_, 2);
v_tokens_2777_ = lean_ctor_get(v_c_2773_, 3);
v_inputString_2778_ = lean_ctor_get(v_toInputContext_2775_, 0);
v_endPos_2779_ = lean_ctor_get(v_toInputContext_2775_, 3);
v_curr_2780_ = lean_string_utf8_get(v_inputString_2778_, v_pos_2776_);
v___x_2781_ = 34;
v___x_2782_ = lean_uint32_dec_eq(v_curr_2780_, v___x_2781_);
v___x_2783_ = 1;
if (v___x_2782_ == 0)
{
uint32_t v___x_2808_; uint8_t v___x_2809_; 
v___x_2808_ = 39;
v___x_2809_ = lean_uint32_dec_eq(v_curr_2780_, v___x_2808_);
if (v___x_2809_ == 0)
{
goto v___jp_2802_;
}
else
{
lean_object* v___x_2810_; uint32_t v___x_2811_; uint8_t v___x_2812_; 
v___x_2810_ = lean_string_utf8_next(v_inputString_2778_, v_pos_2776_);
v___x_2811_ = lean_string_utf8_get(v_inputString_2778_, v___x_2810_);
lean_dec(v___x_2810_);
v___x_2812_ = lean_uint32_dec_eq(v___x_2811_, v___x_2808_);
if (v___x_2812_ == 0)
{
lean_object* v___x_2813_; lean_object* v___x_2814_; 
lean_inc(v_pos_2776_);
v___x_2813_ = l_Lean_Parser_ParserState_next(v_s_2774_, v_c_2773_, v_pos_2776_);
v___x_2814_ = l_Lean_Parser_charLitFnAux(v_pos_2776_, v_c_2773_, v___x_2813_);
return v___x_2814_;
}
else
{
goto v___jp_2802_;
}
}
}
else
{
lean_object* v___x_2815_; lean_object* v___x_2816_; 
lean_inc(v_pos_2776_);
v___x_2815_ = l_Lean_Parser_ParserState_next(v_s_2774_, v_c_2773_, v_pos_2776_);
v___x_2816_ = l_Lean_Parser_strLitFnAux(v_pos_2776_, v___x_2783_, v_c_2773_, v___x_2815_);
return v___x_2816_;
}
v___jp_2784_:
{
lean_object* v_tk_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; 
lean_inc(v_pos_2776_);
v_tk_2785_ = l_Lean_Data_Trie_matchPrefix___redArg(v_inputString_2778_, v_tokens_2777_, v_pos_2776_, v_endPos_2779_);
v___x_2786_ = lean_box(0);
v___x_2787_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(v_pos_2776_, v_tk_2785_, v___x_2783_, v___x_2786_, v_c_2773_, v_s_2774_);
lean_dec(v_tk_2785_);
return v___x_2787_;
}
v___jp_2788_:
{
uint32_t v___x_2789_; uint8_t v___x_2790_; 
v___x_2789_ = 114;
v___x_2790_ = lean_uint32_dec_eq(v_curr_2780_, v___x_2789_);
if (v___x_2790_ == 0)
{
goto v___jp_2784_;
}
else
{
lean_object* v___x_2791_; uint8_t v___x_2792_; 
v___x_2791_ = lean_string_utf8_next(v_inputString_2778_, v_pos_2776_);
lean_inc_ref(v_c_2773_);
v___x_2792_ = l_Lean_Parser_isRawStrLitStart(v_c_2773_, v___x_2791_);
if (v___x_2792_ == 0)
{
goto v___jp_2784_;
}
else
{
lean_object* v___x_2793_; lean_object* v___x_2794_; 
v___x_2793_ = l_Lean_Parser_ParserState_next(v_s_2774_, v_c_2773_, v_pos_2776_);
v___x_2794_ = l_Lean_Parser_rawStrLitFnAux(v_pos_2776_, v_c_2773_, v___x_2793_);
return v___x_2794_;
}
}
}
v___jp_2795_:
{
uint32_t v___x_2796_; uint8_t v___x_2797_; 
v___x_2796_ = 96;
v___x_2797_ = lean_uint32_dec_eq(v_curr_2780_, v___x_2796_);
if (v___x_2797_ == 0)
{
goto v___jp_2788_;
}
else
{
lean_object* v___x_2798_; uint32_t v___x_2799_; uint8_t v___x_2800_; 
v___x_2798_ = lean_string_utf8_next(v_inputString_2778_, v_pos_2776_);
v___x_2799_ = lean_string_utf8_get(v_inputString_2778_, v___x_2798_);
lean_dec(v___x_2798_);
v___x_2800_ = l___private_Lean_Parser_Basic_0__Lean_Parser_isIdFirstOrBeginEscape(v___x_2799_);
if (v___x_2800_ == 0)
{
goto v___jp_2788_;
}
else
{
lean_object* v___x_2801_; 
v___x_2801_ = l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux(v_pos_2776_, v_c_2773_, v_s_2774_);
return v___x_2801_;
}
}
}
v___jp_2802_:
{
uint32_t v___x_2803_; uint8_t v___x_2804_; 
v___x_2803_ = 48;
v___x_2804_ = lean_uint32_dec_le(v___x_2803_, v_curr_2780_);
if (v___x_2804_ == 0)
{
lean_inc(v_pos_2776_);
goto v___jp_2795_;
}
else
{
uint32_t v___x_2805_; uint8_t v___x_2806_; 
v___x_2805_ = 57;
v___x_2806_ = lean_uint32_dec_le(v_curr_2780_, v___x_2805_);
if (v___x_2806_ == 0)
{
lean_inc(v_pos_2776_);
goto v___jp_2795_;
}
else
{
lean_object* v___x_2807_; 
v___x_2807_ = l_Lean_Parser_numberFnAux(v___x_2783_, v_c_2773_, v_s_2774_);
return v___x_2807_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_updateTokenCache(lean_object* v_startPos_2817_, lean_object* v_s_2818_){
_start:
{
lean_object* v_cache_2819_; lean_object* v_errorMsg_2820_; 
v_cache_2819_ = lean_ctor_get(v_s_2818_, 3);
lean_inc_ref(v_cache_2819_);
v_errorMsg_2820_ = lean_ctor_get(v_s_2818_, 4);
if (lean_obj_tag(v_errorMsg_2820_) == 0)
{
lean_object* v_stxStack_2821_; lean_object* v_lhsPrec_2822_; lean_object* v_pos_2823_; lean_object* v_recoveredErrors_2824_; lean_object* v_parserCache_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2850_; 
v_stxStack_2821_ = lean_ctor_get(v_s_2818_, 0);
v_lhsPrec_2822_ = lean_ctor_get(v_s_2818_, 1);
v_pos_2823_ = lean_ctor_get(v_s_2818_, 2);
v_recoveredErrors_2824_ = lean_ctor_get(v_s_2818_, 5);
v_parserCache_2825_ = lean_ctor_get(v_cache_2819_, 1);
v_isSharedCheck_2850_ = !lean_is_exclusive(v_cache_2819_);
if (v_isSharedCheck_2850_ == 0)
{
lean_object* v_unused_2851_; 
v_unused_2851_ = lean_ctor_get(v_cache_2819_, 0);
lean_dec(v_unused_2851_);
v___x_2827_ = v_cache_2819_;
v_isShared_2828_ = v_isSharedCheck_2850_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_parserCache_2825_);
lean_dec(v_cache_2819_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2850_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2829_; lean_object* v___x_2830_; uint8_t v___x_2831_; 
v___x_2829_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_2821_);
v___x_2830_ = lean_unsigned_to_nat(0u);
v___x_2831_ = lean_nat_dec_eq(v___x_2829_, v___x_2830_);
lean_dec(v___x_2829_);
if (v___x_2831_ == 0)
{
lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2843_; 
lean_inc_ref(v_recoveredErrors_2824_);
lean_inc(v_pos_2823_);
lean_inc(v_lhsPrec_2822_);
lean_inc_ref(v_stxStack_2821_);
lean_inc(v_errorMsg_2820_);
v_isSharedCheck_2843_ = !lean_is_exclusive(v_s_2818_);
if (v_isSharedCheck_2843_ == 0)
{
lean_object* v_unused_2844_; lean_object* v_unused_2845_; lean_object* v_unused_2846_; lean_object* v_unused_2847_; lean_object* v_unused_2848_; lean_object* v_unused_2849_; 
v_unused_2844_ = lean_ctor_get(v_s_2818_, 5);
lean_dec(v_unused_2844_);
v_unused_2845_ = lean_ctor_get(v_s_2818_, 4);
lean_dec(v_unused_2845_);
v_unused_2846_ = lean_ctor_get(v_s_2818_, 3);
lean_dec(v_unused_2846_);
v_unused_2847_ = lean_ctor_get(v_s_2818_, 2);
lean_dec(v_unused_2847_);
v_unused_2848_ = lean_ctor_get(v_s_2818_, 1);
lean_dec(v_unused_2848_);
v_unused_2849_ = lean_ctor_get(v_s_2818_, 0);
lean_dec(v_unused_2849_);
v___x_2833_ = v_s_2818_;
v_isShared_2834_ = v_isSharedCheck_2843_;
goto v_resetjp_2832_;
}
else
{
lean_dec(v_s_2818_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2843_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
lean_object* v_tk_2835_; lean_object* v___x_2836_; lean_object* v___x_2838_; 
v_tk_2835_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_2821_);
lean_inc(v_pos_2823_);
v___x_2836_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2836_, 0, v_startPos_2817_);
lean_ctor_set(v___x_2836_, 1, v_pos_2823_);
lean_ctor_set(v___x_2836_, 2, v_tk_2835_);
if (v_isShared_2828_ == 0)
{
lean_ctor_set(v___x_2827_, 0, v___x_2836_);
v___x_2838_ = v___x_2827_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v___x_2836_);
lean_ctor_set(v_reuseFailAlloc_2842_, 1, v_parserCache_2825_);
v___x_2838_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
lean_object* v___x_2840_; 
if (v_isShared_2834_ == 0)
{
lean_ctor_set(v___x_2833_, 3, v___x_2838_);
v___x_2840_ = v___x_2833_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v_stxStack_2821_);
lean_ctor_set(v_reuseFailAlloc_2841_, 1, v_lhsPrec_2822_);
lean_ctor_set(v_reuseFailAlloc_2841_, 2, v_pos_2823_);
lean_ctor_set(v_reuseFailAlloc_2841_, 3, v___x_2838_);
lean_ctor_set(v_reuseFailAlloc_2841_, 4, v_errorMsg_2820_);
lean_ctor_set(v_reuseFailAlloc_2841_, 5, v_recoveredErrors_2824_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
return v___x_2840_;
}
}
}
}
else
{
lean_del_object(v___x_2827_);
lean_dec_ref(v_parserCache_2825_);
lean_dec(v_startPos_2817_);
return v_s_2818_;
}
}
}
else
{
lean_dec_ref(v_cache_2819_);
lean_dec(v_startPos_2817_);
return v_s_2818_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tokenFn(lean_object* v_expected_2852_, lean_object* v_c_2853_, lean_object* v_s_2854_){
_start:
{
lean_object* v_pos_2855_; lean_object* v_cache_2856_; lean_object* v_toInputContext_2857_; uint8_t v___x_2858_; 
v_pos_2855_ = lean_ctor_get(v_s_2854_, 2);
v_cache_2856_ = lean_ctor_get(v_s_2854_, 3);
v_toInputContext_2857_ = lean_ctor_get(v_c_2853_, 0);
lean_inc(v_pos_2855_);
lean_inc_ref(v_toInputContext_2857_);
v___x_2858_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2857_, v_pos_2855_);
if (v___x_2858_ == 0)
{
lean_object* v_tokenCache_2859_; lean_object* v_startPos_2860_; lean_object* v_stopPos_2861_; lean_object* v_token_2862_; uint8_t v_decide_2863_; 
lean_dec(v_expected_2852_);
v_tokenCache_2859_ = lean_ctor_get(v_cache_2856_, 0);
v_startPos_2860_ = lean_ctor_get(v_tokenCache_2859_, 0);
v_stopPos_2861_ = lean_ctor_get(v_tokenCache_2859_, 1);
v_token_2862_ = lean_ctor_get(v_tokenCache_2859_, 2);
v_decide_2863_ = lean_nat_dec_eq(v_startPos_2860_, v_pos_2855_);
if (v_decide_2863_ == 0)
{
lean_object* v_s_2864_; lean_object* v___x_2865_; 
lean_inc(v_pos_2855_);
v_s_2864_ = l___private_Lean_Parser_Basic_0__Lean_Parser_tokenFnAux(v_c_2853_, v_s_2854_);
v___x_2865_ = l___private_Lean_Parser_Basic_0__Lean_Parser_updateTokenCache(v_pos_2855_, v_s_2864_);
return v___x_2865_;
}
else
{
lean_object* v_s_2866_; lean_object* v___x_2867_; 
lean_inc(v_token_2862_);
lean_inc(v_stopPos_2861_);
lean_dec_ref(v_c_2853_);
v_s_2866_ = l_Lean_Parser_ParserState_pushSyntax(v_s_2854_, v_token_2862_);
v___x_2867_ = l_Lean_Parser_ParserState_setPos(v_s_2866_, v_stopPos_2861_);
return v___x_2867_;
}
}
else
{
lean_object* v___x_2868_; 
lean_dec_ref(v_c_2853_);
v___x_2868_ = l_Lean_Parser_ParserState_mkEOIError(v_s_2854_, v_expected_2852_);
return v___x_2868_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_peekTokenAux(lean_object* v_c_2869_, lean_object* v_s_2870_){
_start:
{
lean_object* v_pos_2871_; lean_object* v_iniSz_2872_; lean_object* v___x_2873_; lean_object* v_s_2874_; lean_object* v_errorMsg_2875_; 
v_pos_2871_ = lean_ctor_get(v_s_2870_, 2);
lean_inc(v_pos_2871_);
v_iniSz_2872_ = l_Lean_Parser_ParserState_stackSize(v_s_2870_);
v___x_2873_ = lean_box(0);
v_s_2874_ = l_Lean_Parser_tokenFn(v___x_2873_, v_c_2869_, v_s_2870_);
v_errorMsg_2875_ = lean_ctor_get(v_s_2874_, 4);
lean_inc(v_errorMsg_2875_);
if (lean_obj_tag(v_errorMsg_2875_) == 1)
{
lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2884_; 
v_isSharedCheck_2884_ = !lean_is_exclusive(v_errorMsg_2875_);
if (v_isSharedCheck_2884_ == 0)
{
lean_object* v_unused_2885_; 
v_unused_2885_ = lean_ctor_get(v_errorMsg_2875_, 0);
lean_dec(v_unused_2885_);
v___x_2877_ = v_errorMsg_2875_;
v_isShared_2878_ = v_isSharedCheck_2884_;
goto v_resetjp_2876_;
}
else
{
lean_dec(v_errorMsg_2875_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2884_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2879_; lean_object* v___x_2881_; 
lean_inc_ref(v_s_2874_);
v___x_2879_ = l_Lean_Parser_ParserState_restore(v_s_2874_, v_iniSz_2872_, v_pos_2871_);
lean_dec(v_iniSz_2872_);
if (v_isShared_2878_ == 0)
{
lean_ctor_set_tag(v___x_2877_, 0);
lean_ctor_set(v___x_2877_, 0, v_s_2874_);
v___x_2881_ = v___x_2877_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v_s_2874_);
v___x_2881_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
lean_object* v___x_2882_; 
v___x_2882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2882_, 0, v___x_2879_);
lean_ctor_set(v___x_2882_, 1, v___x_2881_);
return v___x_2882_;
}
}
}
else
{
lean_object* v_stxStack_2886_; lean_object* v_stx_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; 
lean_dec(v_errorMsg_2875_);
v_stxStack_2886_ = lean_ctor_get(v_s_2874_, 0);
v_stx_2887_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_2886_);
v___x_2888_ = l_Lean_Parser_ParserState_restore(v_s_2874_, v_iniSz_2872_, v_pos_2871_);
lean_dec(v_iniSz_2872_);
v___x_2889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2889_, 0, v_stx_2887_);
v___x_2890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2890_, 0, v___x_2888_);
lean_ctor_set(v___x_2890_, 1, v___x_2889_);
return v___x_2890_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_peekToken(lean_object* v_c_2891_, lean_object* v_s_2892_){
_start:
{
lean_object* v_cache_2893_; lean_object* v_tokenCache_2894_; lean_object* v___x_2896_; uint8_t v_isShared_2897_; uint8_t v_isSharedCheck_2907_; 
v_cache_2893_ = lean_ctor_get(v_s_2892_, 3);
lean_inc_ref(v_cache_2893_);
v_tokenCache_2894_ = lean_ctor_get(v_cache_2893_, 0);
v_isSharedCheck_2907_ = !lean_is_exclusive(v_cache_2893_);
if (v_isSharedCheck_2907_ == 0)
{
lean_object* v_unused_2908_; 
v_unused_2908_ = lean_ctor_get(v_cache_2893_, 1);
lean_dec(v_unused_2908_);
v___x_2896_ = v_cache_2893_;
v_isShared_2897_ = v_isSharedCheck_2907_;
goto v_resetjp_2895_;
}
else
{
lean_inc(v_tokenCache_2894_);
lean_dec(v_cache_2893_);
v___x_2896_ = lean_box(0);
v_isShared_2897_ = v_isSharedCheck_2907_;
goto v_resetjp_2895_;
}
v_resetjp_2895_:
{
lean_object* v_pos_2898_; lean_object* v_startPos_2899_; lean_object* v_token_2900_; uint8_t v_decide_2901_; 
v_pos_2898_ = lean_ctor_get(v_s_2892_, 2);
v_startPos_2899_ = lean_ctor_get(v_tokenCache_2894_, 0);
lean_inc(v_startPos_2899_);
v_token_2900_ = lean_ctor_get(v_tokenCache_2894_, 2);
lean_inc(v_token_2900_);
lean_dec_ref(v_tokenCache_2894_);
v_decide_2901_ = lean_nat_dec_eq(v_startPos_2899_, v_pos_2898_);
lean_dec(v_startPos_2899_);
if (v_decide_2901_ == 0)
{
lean_object* v___x_2902_; 
lean_dec(v_token_2900_);
lean_del_object(v___x_2896_);
v___x_2902_ = l_Lean_Parser_peekTokenAux(v_c_2891_, v_s_2892_);
return v___x_2902_;
}
else
{
lean_object* v___x_2903_; lean_object* v___x_2905_; 
lean_dec_ref(v_c_2891_);
v___x_2903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2903_, 0, v_token_2900_);
if (v_isShared_2897_ == 0)
{
lean_ctor_set(v___x_2896_, 1, v___x_2903_);
lean_ctor_set(v___x_2896_, 0, v_s_2892_);
v___x_2905_ = v___x_2896_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2906_; 
v_reuseFailAlloc_2906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2906_, 0, v_s_2892_);
lean_ctor_set(v_reuseFailAlloc_2906_, 1, v___x_2903_);
v___x_2905_ = v_reuseFailAlloc_2906_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
return v___x_2905_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdentFn(uint8_t v_includeWhitespace_2909_, lean_object* v_c_2910_, lean_object* v_s_2911_){
_start:
{
lean_object* v_pos_2912_; lean_object* v_toInputContext_2913_; uint8_t v___x_2914_; 
v_pos_2912_ = lean_ctor_get(v_s_2911_, 2);
v_toInputContext_2913_ = lean_ctor_get(v_c_2910_, 0);
lean_inc(v_pos_2912_);
lean_inc_ref(v_toInputContext_2913_);
v___x_2914_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2913_, v_pos_2912_);
if (v___x_2914_ == 0)
{
lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; 
lean_inc(v_pos_2912_);
v___x_2915_ = lean_box(0);
v___x_2916_ = lean_box(0);
v___x_2917_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(v_pos_2912_, v___x_2915_, v_includeWhitespace_2909_, v___x_2916_, v_c_2910_, v_s_2911_);
return v___x_2917_;
}
else
{
lean_object* v___x_2918_; lean_object* v___x_2919_; 
lean_dec_ref(v_c_2910_);
v___x_2918_ = lean_box(0);
v___x_2919_ = l_Lean_Parser_ParserState_mkEOIError(v_s_2911_, v___x_2918_);
return v___x_2919_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdentFn___boxed(lean_object* v_includeWhitespace_2920_, lean_object* v_c_2921_, lean_object* v_s_2922_){
_start:
{
uint8_t v_includeWhitespace_boxed_2923_; lean_object* v_res_2924_; 
v_includeWhitespace_boxed_2923_ = lean_unbox(v_includeWhitespace_2920_);
v_res_2924_ = l_Lean_Parser_rawIdentFn(v_includeWhitespace_boxed_2923_, v_c_2921_, v_s_2922_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_satisfySymbolFn(lean_object* v_p_2925_, lean_object* v_expected_2926_, lean_object* v_c_2927_, lean_object* v_s_2928_){
_start:
{
lean_object* v_pos_2929_; lean_object* v_s_2930_; lean_object* v_stxStack_2931_; lean_object* v_errorMsg_2932_; lean_object* v___x_2933_; uint8_t v___x_2934_; 
v_pos_2929_ = lean_ctor_get(v_s_2928_, 2);
lean_inc(v_pos_2929_);
lean_inc(v_expected_2926_);
v_s_2930_ = l_Lean_Parser_tokenFn(v_expected_2926_, v_c_2927_, v_s_2928_);
v_stxStack_2931_ = lean_ctor_get(v_s_2930_, 0);
v_errorMsg_2932_ = lean_ctor_get(v_s_2930_, 4);
v___x_2933_ = lean_box(0);
v___x_2934_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_2932_, v___x_2933_);
if (v___x_2934_ == 0)
{
lean_dec(v_pos_2929_);
lean_dec(v_expected_2926_);
lean_dec_ref(v_p_2925_);
return v_s_2930_;
}
else
{
lean_object* v___x_2935_; 
v___x_2935_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_2931_);
if (lean_obj_tag(v___x_2935_) == 2)
{
lean_object* v_val_2936_; lean_object* v___x_2937_; uint8_t v___x_2938_; 
v_val_2936_ = lean_ctor_get(v___x_2935_, 1);
lean_inc_ref(v_val_2936_);
lean_dec_ref_known(v___x_2935_, 2);
v___x_2937_ = lean_apply_1(v_p_2925_, v_val_2936_);
v___x_2938_ = lean_unbox(v___x_2937_);
if (v___x_2938_ == 0)
{
lean_object* v___x_2939_; 
v___x_2939_ = l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(v_s_2930_, v_expected_2926_, v_pos_2929_);
return v___x_2939_;
}
else
{
lean_dec(v_pos_2929_);
lean_dec(v_expected_2926_);
return v_s_2930_;
}
}
else
{
lean_object* v___x_2940_; 
lean_dec(v___x_2935_);
lean_dec_ref(v_p_2925_);
v___x_2940_ = l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(v_s_2930_, v_expected_2926_, v_pos_2929_);
return v___x_2940_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_symbolFnAux___lam__0(lean_object* v_sym_2941_, lean_object* v_s_2942_){
_start:
{
uint8_t v___x_2943_; 
v___x_2943_ = lean_string_dec_eq(v_s_2942_, v_sym_2941_);
return v___x_2943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolFnAux___lam__0___boxed(lean_object* v_sym_2944_, lean_object* v_s_2945_){
_start:
{
uint8_t v_res_2946_; lean_object* v_r_2947_; 
v_res_2946_ = l_Lean_Parser_symbolFnAux___lam__0(v_sym_2944_, v_s_2945_);
lean_dec_ref(v_s_2945_);
lean_dec_ref(v_sym_2944_);
v_r_2947_ = lean_box(v_res_2946_);
return v_r_2947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolFnAux(lean_object* v_sym_2948_, lean_object* v_errorMsg_2949_, lean_object* v_a_2950_, lean_object* v_a_2951_){
_start:
{
lean_object* v___f_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___f_2952_ = lean_alloc_closure((void*)(l_Lean_Parser_symbolFnAux___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2952_, 0, v_sym_2948_);
v___x_2953_ = lean_box(0);
v___x_2954_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2954_, 0, v_errorMsg_2949_);
lean_ctor_set(v___x_2954_, 1, v___x_2953_);
v___x_2955_ = l_Lean_Parser_satisfySymbolFn(v___f_2952_, v___x_2954_, v_a_2950_, v_a_2951_);
return v___x_2955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolInfo___lam__0(lean_object* v_sym_2956_, lean_object* v_tks_2957_){
_start:
{
lean_object* v___x_2958_; 
v___x_2958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2958_, 0, v_sym_2956_);
lean_ctor_set(v___x_2958_, 1, v_tks_2957_);
return v___x_2958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolInfo(lean_object* v_sym_2959_){
_start:
{
lean_object* v___f_2960_; lean_object* v___f_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
lean_inc_ref(v_sym_2959_);
v___f_2960_ = lean_alloc_closure((void*)(l_Lean_Parser_symbolInfo___lam__0), 2, 1);
lean_closure_set(v___f_2960_, 0, v_sym_2959_);
v___f_2961_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__1));
v___x_2962_ = lean_box(0);
v___x_2963_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2963_, 0, v_sym_2959_);
lean_ctor_set(v___x_2963_, 1, v___x_2962_);
v___x_2964_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2964_, 0, v___x_2963_);
v___x_2965_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2965_, 0, v___f_2960_);
lean_ctor_set(v___x_2965_, 1, v___f_2961_);
lean_ctor_set(v___x_2965_, 2, v___x_2964_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolFn(lean_object* v_sym_2966_, lean_object* v_a_2967_, lean_object* v_a_2968_){
_start:
{
lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2969_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_2970_ = lean_string_append(v___x_2969_, v_sym_2966_);
v___x_2971_ = lean_string_append(v___x_2970_, v___x_2969_);
v___x_2972_ = l_Lean_Parser_symbolFnAux(v_sym_2966_, v___x_2971_, v_a_2967_, v_a_2968_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolNoAntiquot(lean_object* v_sym_2973_){
_start:
{
lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v_str_2978_; lean_object* v_startInclusive_2979_; lean_object* v_endExclusive_2980_; lean_object* v_sym_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
v___x_2974_ = lean_unsigned_to_nat(0u);
v___x_2975_ = lean_string_utf8_byte_size(v_sym_2973_);
v___x_2976_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2976_, 0, v_sym_2973_);
lean_ctor_set(v___x_2976_, 1, v___x_2974_);
lean_ctor_set(v___x_2976_, 2, v___x_2975_);
v___x_2977_ = l_String_Slice_trimAscii(v___x_2976_);
v_str_2978_ = lean_ctor_get(v___x_2977_, 0);
lean_inc_ref(v_str_2978_);
v_startInclusive_2979_ = lean_ctor_get(v___x_2977_, 1);
lean_inc(v_startInclusive_2979_);
v_endExclusive_2980_ = lean_ctor_get(v___x_2977_, 2);
lean_inc(v_endExclusive_2980_);
lean_dec_ref(v___x_2977_);
v_sym_2981_ = lean_string_utf8_extract_fast(v_str_2978_, v_startInclusive_2979_, v_endExclusive_2980_);
lean_dec(v_endExclusive_2980_);
lean_dec(v_startInclusive_2979_);
lean_dec_ref(v_str_2978_);
lean_inc_ref(v_sym_2981_);
v___x_2982_ = l_Lean_Parser_symbolInfo(v_sym_2981_);
v___x_2983_ = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn), 3, 1);
lean_closure_set(v___x_2983_, 0, v_sym_2981_);
v___x_2984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2984_, 0, v___x_2982_);
lean_ctor_set(v___x_2984_, 1, v___x_2983_);
return v___x_2984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolFnAux(lean_object* v_sym_2985_, lean_object* v_errorMsg_2986_, lean_object* v_c_2987_, lean_object* v_s_2988_){
_start:
{
lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v_s_2991_; lean_object* v_stxStack_2995_; lean_object* v_errorMsg_2996_; lean_object* v___x_2997_; uint8_t v___x_2998_; 
v___x_2989_ = lean_box(0);
lean_inc_ref(v_errorMsg_2986_);
v___x_2990_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2990_, 0, v_errorMsg_2986_);
lean_ctor_set(v___x_2990_, 1, v___x_2989_);
v_s_2991_ = l_Lean_Parser_tokenFn(v___x_2990_, v_c_2987_, v_s_2988_);
v_stxStack_2995_ = lean_ctor_get(v_s_2991_, 0);
v_errorMsg_2996_ = lean_ctor_get(v_s_2991_, 4);
v___x_2997_ = lean_box(0);
v___x_2998_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_2996_, v___x_2997_);
if (v___x_2998_ == 0)
{
lean_dec_ref(v_errorMsg_2986_);
lean_dec_ref(v_sym_2985_);
return v_s_2991_;
}
else
{
lean_object* v___x_2999_; 
v___x_2999_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_2995_);
switch(lean_obj_tag(v___x_2999_))
{
case 2:
{
lean_object* v_val_3000_; uint8_t v___x_3001_; 
v_val_3000_ = lean_ctor_get(v___x_2999_, 1);
lean_inc_ref(v_val_3000_);
lean_dec_ref_known(v___x_2999_, 2);
v___x_3001_ = lean_string_dec_eq(v_sym_2985_, v_val_3000_);
lean_dec_ref(v_val_3000_);
lean_dec_ref(v_sym_2985_);
if (v___x_3001_ == 0)
{
goto v___jp_2992_;
}
else
{
lean_dec_ref(v_errorMsg_2986_);
return v_s_2991_;
}
}
case 3:
{
lean_object* v_rawVal_3002_; lean_object* v_info_3003_; lean_object* v_str_3004_; lean_object* v_startPos_3005_; lean_object* v_stopPos_3006_; lean_object* v___x_3007_; uint8_t v___x_3008_; 
v_rawVal_3002_ = lean_ctor_get(v___x_2999_, 1);
lean_inc_ref(v_rawVal_3002_);
v_info_3003_ = lean_ctor_get(v___x_2999_, 0);
lean_inc(v_info_3003_);
lean_dec_ref_known(v___x_2999_, 4);
v_str_3004_ = lean_ctor_get(v_rawVal_3002_, 0);
lean_inc_ref(v_str_3004_);
v_startPos_3005_ = lean_ctor_get(v_rawVal_3002_, 1);
lean_inc(v_startPos_3005_);
v_stopPos_3006_ = lean_ctor_get(v_rawVal_3002_, 2);
lean_inc(v_stopPos_3006_);
lean_dec_ref(v_rawVal_3002_);
v___x_3007_ = lean_string_utf8_extract(v_str_3004_, v_startPos_3005_, v_stopPos_3006_);
lean_dec(v_stopPos_3006_);
lean_dec(v_startPos_3005_);
lean_dec_ref(v_str_3004_);
v___x_3008_ = lean_string_dec_eq(v_sym_2985_, v___x_3007_);
lean_dec_ref(v___x_3007_);
if (v___x_3008_ == 0)
{
lean_dec(v_info_3003_);
lean_dec_ref(v_sym_2985_);
goto v___jp_2992_;
}
else
{
lean_object* v_s_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; 
lean_dec_ref(v_errorMsg_2986_);
v_s_3009_ = l_Lean_Parser_ParserState_popSyntax(v_s_2991_);
v___x_3010_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3010_, 0, v_info_3003_);
lean_ctor_set(v___x_3010_, 1, v_sym_2985_);
v___x_3011_ = l_Lean_Parser_ParserState_pushSyntax(v_s_3009_, v___x_3010_);
return v___x_3011_;
}
}
default: 
{
lean_dec(v___x_2999_);
lean_dec_ref(v_sym_2985_);
goto v___jp_2992_;
}
}
}
v___jp_2992_:
{
lean_object* v___x_2993_; lean_object* v___x_2994_; 
v___x_2993_ = lean_unsigned_to_nat(0u);
v___x_2994_ = l_Lean_Parser_ParserState_mkUnexpectedTokenError(v_s_2991_, v_errorMsg_2986_, v___x_2993_);
return v___x_2994_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolFn(lean_object* v_sym_3012_, lean_object* v_a_3013_, lean_object* v_a_3014_){
_start:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; 
v___x_3015_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_3016_ = lean_string_append(v___x_3015_, v_sym_3012_);
v___x_3017_ = lean_string_append(v___x_3016_, v___x_3015_);
v___x_3018_ = l_Lean_Parser_nonReservedSymbolFnAux(v_sym_3012_, v___x_3017_, v_a_3013_, v_a_3014_);
return v___x_3018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolInfo(lean_object* v_sym_3023_, uint8_t v_includeIdent_3024_){
_start:
{
lean_object* v___f_3025_; lean_object* v___f_3026_; 
v___f_3025_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__0));
v___f_3026_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__1));
if (v_includeIdent_3024_ == 0)
{
lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; 
v___x_3027_ = lean_box(0);
v___x_3028_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3028_, 0, v_sym_3023_);
lean_ctor_set(v___x_3028_, 1, v___x_3027_);
v___x_3029_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3029_, 0, v___x_3028_);
v___x_3030_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3030_, 0, v___f_3025_);
lean_ctor_set(v___x_3030_, 1, v___f_3026_);
lean_ctor_set(v___x_3030_, 2, v___x_3029_);
return v___x_3030_;
}
else
{
lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; 
v___x_3031_ = ((lean_object*)(l_Lean_Parser_nonReservedSymbolInfo___closed__1));
v___x_3032_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3032_, 0, v_sym_3023_);
lean_ctor_set(v___x_3032_, 1, v___x_3031_);
v___x_3033_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3033_, 0, v___x_3032_);
v___x_3034_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3034_, 0, v___f_3025_);
lean_ctor_set(v___x_3034_, 1, v___f_3026_);
lean_ctor_set(v___x_3034_, 2, v___x_3033_);
return v___x_3034_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolInfo___boxed(lean_object* v_sym_3035_, lean_object* v_includeIdent_3036_){
_start:
{
uint8_t v_includeIdent_boxed_3037_; lean_object* v_res_3038_; 
v_includeIdent_boxed_3037_ = lean_unbox(v_includeIdent_3036_);
v_res_3038_ = l_Lean_Parser_nonReservedSymbolInfo(v_sym_3035_, v_includeIdent_boxed_3037_);
return v_res_3038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolNoAntiquot(lean_object* v_sym_3039_, uint8_t v_includeIdent_3040_){
_start:
{
lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v_str_3045_; lean_object* v_startInclusive_3046_; lean_object* v_endExclusive_3047_; lean_object* v_sym_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; 
v___x_3041_ = lean_unsigned_to_nat(0u);
v___x_3042_ = lean_string_utf8_byte_size(v_sym_3039_);
v___x_3043_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3043_, 0, v_sym_3039_);
lean_ctor_set(v___x_3043_, 1, v___x_3041_);
lean_ctor_set(v___x_3043_, 2, v___x_3042_);
v___x_3044_ = l_String_Slice_trimAscii(v___x_3043_);
v_str_3045_ = lean_ctor_get(v___x_3044_, 0);
lean_inc_ref(v_str_3045_);
v_startInclusive_3046_ = lean_ctor_get(v___x_3044_, 1);
lean_inc(v_startInclusive_3046_);
v_endExclusive_3047_ = lean_ctor_get(v___x_3044_, 2);
lean_inc(v_endExclusive_3047_);
lean_dec_ref(v___x_3044_);
v_sym_3048_ = lean_string_utf8_extract_fast(v_str_3045_, v_startInclusive_3046_, v_endExclusive_3047_);
lean_dec(v_endExclusive_3047_);
lean_dec(v_startInclusive_3046_);
lean_dec_ref(v_str_3045_);
lean_inc_ref(v_sym_3048_);
v___x_3049_ = l_Lean_Parser_nonReservedSymbolInfo(v_sym_3048_, v_includeIdent_3040_);
v___x_3050_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbolFn), 3, 1);
lean_closure_set(v___x_3050_, 0, v_sym_3048_);
v___x_3051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3051_, 0, v___x_3049_);
lean_ctor_set(v___x_3051_, 1, v___x_3050_);
return v___x_3051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolNoAntiquot___boxed(lean_object* v_sym_3052_, lean_object* v_includeIdent_3053_){
_start:
{
uint8_t v_includeIdent_boxed_3054_; lean_object* v_res_3055_; 
v_includeIdent_boxed_3054_ = lean_unbox(v_includeIdent_3053_);
v_res_3055_ = l_Lean_Parser_nonReservedSymbolNoAntiquot(v_sym_3052_, v_includeIdent_boxed_3054_);
return v_res_3055_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_strAux_parse(lean_object* v_sym_3056_, lean_object* v_errorMsg_3057_, lean_object* v_j_3058_, lean_object* v_c_3059_, lean_object* v_s_3060_){
_start:
{
uint8_t v___x_3061_; 
v___x_3061_ = lean_string_utf8_at_end(v_sym_3056_, v_j_3058_);
if (v___x_3061_ == 0)
{
lean_object* v_pos_3062_; lean_object* v_toInputContext_3063_; uint8_t v___x_3064_; 
v_pos_3062_ = lean_ctor_get(v_s_3060_, 2);
v_toInputContext_3063_ = lean_ctor_get(v_c_3059_, 0);
lean_inc(v_pos_3062_);
lean_inc_ref(v_toInputContext_3063_);
v___x_3064_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_3063_, v_pos_3062_);
if (v___x_3064_ == 0)
{
lean_object* v_inputString_3065_; uint32_t v___x_3066_; uint32_t v___x_3067_; uint8_t v___x_3068_; 
v_inputString_3065_ = lean_ctor_get(v_toInputContext_3063_, 0);
v___x_3066_ = lean_string_utf8_get_fast(v_sym_3056_, v_j_3058_);
v___x_3067_ = lean_string_utf8_get_fast(v_inputString_3065_, v_pos_3062_);
v___x_3068_ = lean_uint32_dec_eq(v___x_3066_, v___x_3067_);
if (v___x_3068_ == 0)
{
lean_object* v___x_3069_; 
lean_dec_ref(v_c_3059_);
lean_dec(v_j_3058_);
v___x_3069_ = l_Lean_Parser_ParserState_mkError(v_s_3060_, v_errorMsg_3057_);
return v___x_3069_;
}
else
{
lean_object* v___x_3070_; lean_object* v___x_3071_; 
lean_inc(v_pos_3062_);
v___x_3070_ = lean_string_utf8_next_fast(v_sym_3056_, v_j_3058_);
lean_dec(v_j_3058_);
v___x_3071_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_3060_, v_c_3059_, v_pos_3062_);
lean_dec(v_pos_3062_);
v_j_3058_ = v___x_3070_;
v_s_3060_ = v___x_3071_;
goto _start;
}
}
else
{
lean_object* v___x_3073_; 
lean_dec_ref(v_c_3059_);
lean_dec(v_j_3058_);
v___x_3073_ = l_Lean_Parser_ParserState_mkError(v_s_3060_, v_errorMsg_3057_);
return v___x_3073_;
}
}
else
{
lean_dec_ref(v_c_3059_);
lean_dec(v_j_3058_);
lean_dec_ref(v_errorMsg_3057_);
return v_s_3060_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_strAux_parse___boxed(lean_object* v_sym_3074_, lean_object* v_errorMsg_3075_, lean_object* v_j_3076_, lean_object* v_c_3077_, lean_object* v_s_3078_){
_start:
{
lean_object* v_res_3079_; 
v_res_3079_ = l___private_Lean_Parser_Basic_0__Lean_Parser_strAux_parse(v_sym_3074_, v_errorMsg_3075_, v_j_3076_, v_c_3077_, v_s_3078_);
lean_dec_ref(v_sym_3074_);
return v_res_3079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strAux(lean_object* v_sym_3080_, lean_object* v_errorMsg_3081_, lean_object* v_j_3082_, lean_object* v_c_3083_, lean_object* v_s_3084_){
_start:
{
lean_object* v___x_3085_; 
v___x_3085_ = l___private_Lean_Parser_Basic_0__Lean_Parser_strAux_parse(v_sym_3080_, v_errorMsg_3081_, v_j_3082_, v_c_3083_, v_s_3084_);
return v___x_3085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strAux___boxed(lean_object* v_sym_3086_, lean_object* v_errorMsg_3087_, lean_object* v_j_3088_, lean_object* v_c_3089_, lean_object* v_s_3090_){
_start:
{
lean_object* v_res_3091_; 
v_res_3091_ = l_Lean_Parser_strAux(v_sym_3086_, v_errorMsg_3087_, v_j_3088_, v_c_3089_, v_s_3090_);
lean_dec_ref(v_sym_3086_);
return v_res_3091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg(lean_object* v_as_3092_, lean_object* v_i_3093_){
_start:
{
lean_object* v_zero_3094_; uint8_t v_isZero_3095_; 
v_zero_3094_ = lean_unsigned_to_nat(0u);
v_isZero_3095_ = lean_nat_dec_eq(v_i_3093_, v_zero_3094_);
if (v_isZero_3095_ == 1)
{
lean_object* v___x_3096_; 
lean_dec(v_i_3093_);
v___x_3096_ = lean_box(0);
return v___x_3096_;
}
else
{
lean_object* v_one_3097_; lean_object* v_n_3098_; lean_object* v___x_3099_; uint8_t v___x_3100_; 
v_one_3097_ = lean_unsigned_to_nat(1u);
v_n_3098_ = lean_nat_sub(v_i_3093_, v_one_3097_);
lean_dec(v_i_3093_);
v___x_3099_ = l_Subarray_get___redArg(v_as_3092_, v_n_3098_);
v___x_3100_ = l_Lean_Syntax_isNone(v___x_3099_);
if (v___x_3100_ == 0)
{
lean_object* v___x_3101_; 
lean_dec(v_n_3098_);
v___x_3101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3101_, 0, v___x_3099_);
return v___x_3101_;
}
else
{
lean_dec(v___x_3099_);
v_i_3093_ = v_n_3098_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg___boxed(lean_object* v_as_3103_, lean_object* v_i_3104_){
_start:
{
lean_object* v_res_3105_; 
v_res_3105_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg(v_as_3103_, v_i_3104_);
lean_dec_ref(v_as_3103_);
return v_res_3105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone(lean_object* v_stack_3106_){
_start:
{
lean_object* v___x_3107_; lean_object* v_start_3108_; lean_object* v_stop_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___x_3107_ = l_Lean_Parser_SyntaxStack_toSubarray(v_stack_3106_);
v_start_3108_ = lean_ctor_get(v___x_3107_, 1);
v_stop_3109_ = lean_ctor_get(v___x_3107_, 2);
v___x_3110_ = lean_nat_sub(v_stop_3109_, v_start_3108_);
v___x_3111_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg(v___x_3107_, v___x_3110_);
lean_dec_ref(v___x_3107_);
if (lean_obj_tag(v___x_3111_) == 0)
{
lean_object* v___x_3112_; 
v___x_3112_ = lean_box(0);
return v___x_3112_;
}
else
{
lean_object* v_val_3113_; 
v_val_3113_ = lean_ctor_get(v___x_3111_, 0);
lean_inc(v_val_3113_);
lean_dec_ref_known(v___x_3111_, 1);
return v_val_3113_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0(lean_object* v_as_3114_, lean_object* v_i_3115_, lean_object* v_a_3116_){
_start:
{
lean_object* v___x_3117_; 
v___x_3117_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg(v_as_3114_, v_i_3115_);
return v___x_3117_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___boxed(lean_object* v_as_3118_, lean_object* v_i_3119_, lean_object* v_a_3120_){
_start:
{
lean_object* v_res_3121_; 
v_res_3121_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0(v_as_3118_, v_i_3119_, v_a_3120_);
lean_dec_ref(v_as_3118_);
return v_res_3121_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_checkTailWs(lean_object* v_prev_3122_){
_start:
{
lean_object* v___x_3123_; 
v___x_3123_ = l_Lean_Syntax_getTailInfo(v_prev_3122_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_object* v_trailing_3124_; lean_object* v_startPos_3125_; lean_object* v_stopPos_3126_; uint8_t v___x_3127_; 
v_trailing_3124_ = lean_ctor_get(v___x_3123_, 2);
lean_inc_ref(v_trailing_3124_);
lean_dec_ref_known(v___x_3123_, 4);
v_startPos_3125_ = lean_ctor_get(v_trailing_3124_, 1);
lean_inc(v_startPos_3125_);
v_stopPos_3126_ = lean_ctor_get(v_trailing_3124_, 2);
lean_inc(v_stopPos_3126_);
lean_dec_ref(v_trailing_3124_);
v___x_3127_ = l_String_instDecidableLtRaw(v_startPos_3125_, v_stopPos_3126_);
lean_dec(v_stopPos_3126_);
lean_dec(v_startPos_3125_);
return v___x_3127_;
}
else
{
uint8_t v___x_3128_; 
lean_dec(v___x_3123_);
v___x_3128_ = 0;
return v___x_3128_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkTailWs___boxed(lean_object* v_prev_3129_){
_start:
{
uint8_t v_res_3130_; lean_object* v_r_3131_; 
v_res_3130_ = l_Lean_Parser_checkTailWs(v_prev_3129_);
lean_dec(v_prev_3129_);
v_r_3131_ = lean_box(v_res_3130_);
return v_r_3131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBeforeFn___redArg(lean_object* v_errorMsg_3132_, lean_object* v_s_3133_){
_start:
{
lean_object* v_stxStack_3134_; lean_object* v_prev_3135_; uint8_t v___x_3136_; 
v_stxStack_3134_ = lean_ctor_get(v_s_3133_, 0);
lean_inc_ref(v_stxStack_3134_);
v_prev_3135_ = l___private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone(v_stxStack_3134_);
v___x_3136_ = l_Lean_Parser_checkTailWs(v_prev_3135_);
lean_dec(v_prev_3135_);
if (v___x_3136_ == 0)
{
lean_object* v___x_3137_; 
v___x_3137_ = l_Lean_Parser_ParserState_mkError(v_s_3133_, v_errorMsg_3132_);
return v___x_3137_;
}
else
{
lean_dec_ref(v_errorMsg_3132_);
return v_s_3133_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBeforeFn(lean_object* v_errorMsg_3138_, lean_object* v_x_3139_, lean_object* v_s_3140_){
_start:
{
lean_object* v___x_3141_; 
v___x_3141_ = l_Lean_Parser_checkWsBeforeFn___redArg(v_errorMsg_3138_, v_s_3140_);
return v___x_3141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBeforeFn___boxed(lean_object* v_errorMsg_3142_, lean_object* v_x_3143_, lean_object* v_s_3144_){
_start:
{
lean_object* v_res_3145_; 
v_res_3145_ = l_Lean_Parser_checkWsBeforeFn(v_errorMsg_3142_, v_x_3143_, v_s_3144_);
lean_dec_ref(v_x_3143_);
return v_res_3145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBefore(lean_object* v_errorMsg_3146_){
_start:
{
lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3147_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_3148_ = lean_alloc_closure((void*)(l_Lean_Parser_checkWsBeforeFn___boxed), 3, 1);
lean_closure_set(v___x_3148_, 0, v_errorMsg_3146_);
v___x_3149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3147_);
lean_ctor_set(v___x_3149_, 1, v___x_3148_);
return v___x_3149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1(){
_start:
{
lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; 
v___x_3157_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1));
v___x_3158_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__2));
v___x_3159_ = l_Lean_addBuiltinDocString(v___x_3157_, v___x_3158_);
return v___x_3159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___boxed(lean_object* v_a_3160_){
_start:
{
lean_object* v_res_3161_; 
v_res_3161_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1();
return v_res_3161_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_checkTailLinebreak_spec__0(lean_object* v_msg_3162_){
_start:
{
lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3163_ = l_String_instInhabitedSlice;
v___x_3164_ = lean_panic_fn_borrowed(v___x_3163_, v_msg_3162_);
return v___x_3164_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg(lean_object* v_s_3165_, lean_object* v_a_3166_, uint8_t v_b_3167_){
_start:
{
lean_object* v_str_3168_; lean_object* v_startInclusive_3169_; lean_object* v_endExclusive_3170_; lean_object* v___x_3171_; uint8_t v_decide_3172_; 
v_str_3168_ = lean_ctor_get(v_s_3165_, 0);
v_startInclusive_3169_ = lean_ctor_get(v_s_3165_, 1);
v_endExclusive_3170_ = lean_ctor_get(v_s_3165_, 2);
v___x_3171_ = lean_nat_sub(v_endExclusive_3170_, v_startInclusive_3169_);
v_decide_3172_ = lean_nat_dec_eq(v_a_3166_, v___x_3171_);
lean_dec(v___x_3171_);
if (v_decide_3172_ == 0)
{
uint32_t v___x_3173_; lean_object* v___x_3174_; uint32_t v___x_3175_; uint8_t v___x_3176_; 
v___x_3173_ = 10;
v___x_3174_ = lean_nat_add(v_startInclusive_3169_, v_a_3166_);
lean_dec(v_a_3166_);
v___x_3175_ = lean_string_utf8_get_fast(v_str_3168_, v___x_3174_);
v___x_3176_ = lean_uint32_dec_eq(v___x_3175_, v___x_3173_);
if (v___x_3176_ == 0)
{
lean_object* v___x_3177_; lean_object* v___x_3178_; 
v___x_3177_ = lean_string_utf8_next_fast(v_str_3168_, v___x_3174_);
lean_dec(v___x_3174_);
v___x_3178_ = lean_nat_sub(v___x_3177_, v_startInclusive_3169_);
v_a_3166_ = v___x_3178_;
v_b_3167_ = v___x_3176_;
goto _start;
}
else
{
lean_dec(v___x_3174_);
return v___x_3176_;
}
}
else
{
lean_dec(v_a_3166_);
return v_b_3167_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg___boxed(lean_object* v_s_3180_, lean_object* v_a_3181_, lean_object* v_b_3182_){
_start:
{
uint8_t v_b_boxed_3183_; uint8_t v_res_3184_; lean_object* v_r_3185_; 
v_b_boxed_3183_ = lean_unbox(v_b_3182_);
v_res_3184_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg(v_s_3180_, v_a_3181_, v_b_boxed_3183_);
lean_dec_ref(v_s_3180_);
v_r_3185_ = lean_box(v_res_3184_);
return v_r_3185_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1(lean_object* v_s_3186_){
_start:
{
lean_object* v_searcher_3187_; uint8_t v___x_3188_; uint8_t v___x_3189_; 
v_searcher_3187_ = lean_unsigned_to_nat(0u);
v___x_3188_ = 0;
v___x_3189_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg(v_s_3186_, v_searcher_3187_, v___x_3188_);
return v___x_3189_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1___boxed(lean_object* v_s_3190_){
_start:
{
uint8_t v_res_3191_; lean_object* v_r_3192_; 
v_res_3191_ = l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1(v_s_3190_);
lean_dec_ref(v_s_3190_);
v_r_3192_ = lean_box(v_res_3191_);
return v_r_3192_;
}
}
static lean_object* _init_l_Lean_Parser_checkTailLinebreak___closed__3(void){
_start:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; 
v___x_3196_ = ((lean_object*)(l_Lean_Parser_checkTailLinebreak___closed__2));
v___x_3197_ = lean_unsigned_to_nat(14u);
v___x_3198_ = lean_unsigned_to_nat(22u);
v___x_3199_ = ((lean_object*)(l_Lean_Parser_checkTailLinebreak___closed__1));
v___x_3200_ = ((lean_object*)(l_Lean_Parser_checkTailLinebreak___closed__0));
v___x_3201_ = l_mkPanicMessageWithDecl(v___x_3200_, v___x_3199_, v___x_3198_, v___x_3197_, v___x_3196_);
return v___x_3201_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_checkTailLinebreak(lean_object* v_prev_3202_){
_start:
{
lean_object* v___x_3207_; 
v___x_3207_ = l_Lean_Syntax_getTailInfo(v_prev_3202_);
if (lean_obj_tag(v___x_3207_) == 0)
{
lean_object* v_trailing_3208_; lean_object* v_str_3209_; lean_object* v_startPos_3210_; lean_object* v_stopPos_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3222_; 
v_trailing_3208_ = lean_ctor_get(v___x_3207_, 2);
lean_inc_ref(v_trailing_3208_);
lean_dec_ref_known(v___x_3207_, 4);
v_str_3209_ = lean_ctor_get(v_trailing_3208_, 0);
v_startPos_3210_ = lean_ctor_get(v_trailing_3208_, 1);
v_stopPos_3211_ = lean_ctor_get(v_trailing_3208_, 2);
v_isSharedCheck_3222_ = !lean_is_exclusive(v_trailing_3208_);
if (v_isSharedCheck_3222_ == 0)
{
v___x_3213_ = v_trailing_3208_;
v_isShared_3214_ = v_isSharedCheck_3222_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_stopPos_3211_);
lean_inc(v_startPos_3210_);
lean_inc(v_str_3209_);
lean_dec(v_trailing_3208_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3222_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
uint8_t v___x_3215_; 
v___x_3215_ = lean_string_is_valid_pos(v_str_3209_, v_startPos_3210_);
if (v___x_3215_ == 0)
{
lean_del_object(v___x_3213_);
lean_dec(v_stopPos_3211_);
lean_dec(v_startPos_3210_);
lean_dec_ref(v_str_3209_);
goto v___jp_3203_;
}
else
{
uint8_t v___x_3216_; 
v___x_3216_ = lean_string_is_valid_pos(v_str_3209_, v_stopPos_3211_);
if (v___x_3216_ == 0)
{
lean_del_object(v___x_3213_);
lean_dec(v_stopPos_3211_);
lean_dec(v_startPos_3210_);
lean_dec_ref(v_str_3209_);
goto v___jp_3203_;
}
else
{
uint8_t v___x_3217_; 
v___x_3217_ = lean_nat_dec_le(v_startPos_3210_, v_stopPos_3211_);
if (v___x_3217_ == 0)
{
lean_del_object(v___x_3213_);
lean_dec(v_stopPos_3211_);
lean_dec(v_startPos_3210_);
lean_dec_ref(v_str_3209_);
goto v___jp_3203_;
}
else
{
lean_object* v___x_3219_; 
if (v_isShared_3214_ == 0)
{
v___x_3219_ = v___x_3213_;
goto v_reusejp_3218_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v_str_3209_);
lean_ctor_set(v_reuseFailAlloc_3221_, 1, v_startPos_3210_);
lean_ctor_set(v_reuseFailAlloc_3221_, 2, v_stopPos_3211_);
v___x_3219_ = v_reuseFailAlloc_3221_;
goto v_reusejp_3218_;
}
v_reusejp_3218_:
{
uint8_t v___x_3220_; 
v___x_3220_ = l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1(v___x_3219_);
lean_dec_ref(v___x_3219_);
return v___x_3220_;
}
}
}
}
}
}
else
{
uint8_t v___x_3223_; 
lean_dec(v___x_3207_);
v___x_3223_ = 0;
return v___x_3223_;
}
v___jp_3203_:
{
lean_object* v___x_3204_; lean_object* v___x_3205_; uint8_t v___x_3206_; 
v___x_3204_ = lean_obj_once(&l_Lean_Parser_checkTailLinebreak___closed__3, &l_Lean_Parser_checkTailLinebreak___closed__3_once, _init_l_Lean_Parser_checkTailLinebreak___closed__3);
v___x_3205_ = l_panic___at___00Lean_Parser_checkTailLinebreak_spec__0(v___x_3204_);
v___x_3206_ = l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1(v___x_3205_);
lean_dec_ref(v___x_3205_);
return v___x_3206_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkTailLinebreak___boxed(lean_object* v_prev_3224_){
_start:
{
uint8_t v_res_3225_; lean_object* v_r_3226_; 
v_res_3225_ = l_Lean_Parser_checkTailLinebreak(v_prev_3224_);
lean_dec(v_prev_3224_);
v_r_3226_ = lean_box(v_res_3225_);
return v_r_3226_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1(lean_object* v_s_3227_, lean_object* v_inst_3228_, lean_object* v_R_3229_, lean_object* v_a_3230_, uint8_t v_b_3231_, lean_object* v_c_3232_){
_start:
{
uint8_t v___x_3233_; 
v___x_3233_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg(v_s_3227_, v_a_3230_, v_b_3231_);
return v___x_3233_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___boxed(lean_object* v_s_3234_, lean_object* v_inst_3235_, lean_object* v_R_3236_, lean_object* v_a_3237_, lean_object* v_b_3238_, lean_object* v_c_3239_){
_start:
{
uint8_t v_b_boxed_3240_; uint8_t v_res_3241_; lean_object* v_r_3242_; 
v_b_boxed_3240_ = lean_unbox(v_b_3238_);
v_res_3241_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1(v_s_3234_, v_inst_3235_, v_R_3236_, v_a_3237_, v_b_boxed_3240_, v_c_3239_);
lean_dec_ref(v_s_3234_);
v_r_3242_ = lean_box(v_res_3241_);
return v_r_3242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBeforeFn___redArg(lean_object* v_errorMsg_3243_, lean_object* v_s_3244_){
_start:
{
lean_object* v_stxStack_3245_; lean_object* v_prev_3246_; uint8_t v___x_3247_; 
v_stxStack_3245_ = lean_ctor_get(v_s_3244_, 0);
v_prev_3246_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3245_);
v___x_3247_ = l_Lean_Parser_checkTailLinebreak(v_prev_3246_);
lean_dec(v_prev_3246_);
if (v___x_3247_ == 0)
{
lean_object* v___x_3248_; 
v___x_3248_ = l_Lean_Parser_ParserState_mkError(v_s_3244_, v_errorMsg_3243_);
return v___x_3248_;
}
else
{
lean_dec_ref(v_errorMsg_3243_);
return v_s_3244_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBeforeFn(lean_object* v_errorMsg_3249_, lean_object* v_x_3250_, lean_object* v_s_3251_){
_start:
{
lean_object* v___x_3252_; 
v___x_3252_ = l_Lean_Parser_checkLinebreakBeforeFn___redArg(v_errorMsg_3249_, v_s_3251_);
return v___x_3252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBeforeFn___boxed(lean_object* v_errorMsg_3253_, lean_object* v_x_3254_, lean_object* v_s_3255_){
_start:
{
lean_object* v_res_3256_; 
v_res_3256_ = l_Lean_Parser_checkLinebreakBeforeFn(v_errorMsg_3253_, v_x_3254_, v_s_3255_);
lean_dec_ref(v_x_3254_);
return v_res_3256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBefore(lean_object* v_errorMsg_3257_){
_start:
{
lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; 
v___x_3258_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_3259_ = lean_alloc_closure((void*)(l_Lean_Parser_checkLinebreakBeforeFn___boxed), 3, 1);
lean_closure_set(v___x_3259_, 0, v_errorMsg_3257_);
v___x_3260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3260_, 0, v___x_3258_);
lean_ctor_set(v___x_3260_, 1, v___x_3259_);
return v___x_3260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1(){
_start:
{
lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; 
v___x_3268_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1));
v___x_3269_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__2));
v___x_3270_ = l_Lean_addBuiltinDocString(v___x_3268_, v___x_3269_);
return v___x_3270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___boxed(lean_object* v_a_3271_){
_start:
{
lean_object* v_res_3272_; 
v_res_3272_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1();
return v_res_3272_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_checkTailNoWs(lean_object* v_prev_3273_){
_start:
{
lean_object* v___x_3274_; 
v___x_3274_ = l_Lean_Syntax_getTailInfo(v_prev_3273_);
if (lean_obj_tag(v___x_3274_) == 0)
{
lean_object* v_trailing_3275_; lean_object* v_startPos_3276_; lean_object* v_stopPos_3277_; uint8_t v_decide_3278_; 
v_trailing_3275_ = lean_ctor_get(v___x_3274_, 2);
lean_inc_ref(v_trailing_3275_);
lean_dec_ref_known(v___x_3274_, 4);
v_startPos_3276_ = lean_ctor_get(v_trailing_3275_, 1);
lean_inc(v_startPos_3276_);
v_stopPos_3277_ = lean_ctor_get(v_trailing_3275_, 2);
lean_inc(v_stopPos_3277_);
lean_dec_ref(v_trailing_3275_);
v_decide_3278_ = lean_nat_dec_eq(v_stopPos_3277_, v_startPos_3276_);
lean_dec(v_startPos_3276_);
lean_dec(v_stopPos_3277_);
return v_decide_3278_;
}
else
{
uint8_t v___x_3279_; 
lean_dec(v___x_3274_);
v___x_3279_ = 0;
return v___x_3279_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkTailNoWs___boxed(lean_object* v_prev_3280_){
_start:
{
uint8_t v_res_3281_; lean_object* v_r_3282_; 
v_res_3281_ = l_Lean_Parser_checkTailNoWs(v_prev_3280_);
lean_dec(v_prev_3280_);
v_r_3282_ = lean_box(v_res_3281_);
return v_r_3282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBeforeFn___redArg(lean_object* v_errorMsg_3283_, lean_object* v_s_3284_){
_start:
{
lean_object* v_stxStack_3285_; lean_object* v_prev_3286_; uint8_t v___x_3287_; 
v_stxStack_3285_ = lean_ctor_get(v_s_3284_, 0);
lean_inc_ref(v_stxStack_3285_);
v_prev_3286_ = l___private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone(v_stxStack_3285_);
v___x_3287_ = l_Lean_Parser_checkTailNoWs(v_prev_3286_);
lean_dec(v_prev_3286_);
if (v___x_3287_ == 0)
{
lean_object* v___x_3288_; 
v___x_3288_ = l_Lean_Parser_ParserState_mkError(v_s_3284_, v_errorMsg_3283_);
return v___x_3288_;
}
else
{
lean_dec_ref(v_errorMsg_3283_);
return v_s_3284_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBeforeFn(lean_object* v_errorMsg_3289_, lean_object* v_x_3290_, lean_object* v_s_3291_){
_start:
{
lean_object* v___x_3292_; 
v___x_3292_ = l_Lean_Parser_checkNoWsBeforeFn___redArg(v_errorMsg_3289_, v_s_3291_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBeforeFn___boxed(lean_object* v_errorMsg_3293_, lean_object* v_x_3294_, lean_object* v_s_3295_){
_start:
{
lean_object* v_res_3296_; 
v_res_3296_ = l_Lean_Parser_checkNoWsBeforeFn(v_errorMsg_3293_, v_x_3294_, v_s_3295_);
lean_dec_ref(v_x_3294_);
return v_res_3296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBefore(lean_object* v_errorMsg_3297_){
_start:
{
lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
v___x_3298_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_3299_ = lean_alloc_closure((void*)(l_Lean_Parser_checkNoWsBeforeFn___boxed), 3, 1);
lean_closure_set(v___x_3299_, 0, v_errorMsg_3297_);
v___x_3300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3300_, 0, v___x_3298_);
lean_ctor_set(v___x_3300_, 1, v___x_3299_);
return v___x_3300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1(){
_start:
{
lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3308_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1));
v___x_3309_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__2));
v___x_3310_ = l_Lean_addBuiltinDocString(v___x_3308_, v___x_3309_);
return v___x_3310_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___boxed(lean_object* v_a_3311_){
_start:
{
lean_object* v_res_3312_; 
v_res_3312_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1();
return v_res_3312_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_unicodeSymbolFnAux___lam__0(lean_object* v_sym_3313_, lean_object* v_asciiSym_3314_, lean_object* v_s_3315_){
_start:
{
uint8_t v___x_3316_; 
v___x_3316_ = lean_string_dec_eq(v_s_3315_, v_sym_3313_);
if (v___x_3316_ == 0)
{
uint8_t v___x_3317_; 
v___x_3317_ = lean_string_dec_eq(v_s_3315_, v_asciiSym_3314_);
return v___x_3317_;
}
else
{
return v___x_3316_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolFnAux___lam__0___boxed(lean_object* v_sym_3318_, lean_object* v_asciiSym_3319_, lean_object* v_s_3320_){
_start:
{
uint8_t v_res_3321_; lean_object* v_r_3322_; 
v_res_3321_ = l_Lean_Parser_unicodeSymbolFnAux___lam__0(v_sym_3318_, v_asciiSym_3319_, v_s_3320_);
lean_dec_ref(v_s_3320_);
lean_dec_ref(v_asciiSym_3319_);
lean_dec_ref(v_sym_3318_);
v_r_3322_ = lean_box(v_res_3321_);
return v_r_3322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolFnAux(lean_object* v_sym_3323_, lean_object* v_asciiSym_3324_, lean_object* v_expected_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_){
_start:
{
lean_object* v___f_3328_; lean_object* v___x_3329_; 
v___f_3328_ = lean_alloc_closure((void*)(l_Lean_Parser_unicodeSymbolFnAux___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3328_, 0, v_sym_3323_);
lean_closure_set(v___f_3328_, 1, v_asciiSym_3324_);
v___x_3329_ = l_Lean_Parser_satisfySymbolFn(v___f_3328_, v_expected_3325_, v_a_3326_, v_a_3327_);
return v___x_3329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolInfo___lam__0(lean_object* v_asciiSym_3330_, lean_object* v_sym_3331_, lean_object* v_tks_3332_){
_start:
{
lean_object* v___x_3333_; lean_object* v___x_3334_; 
v___x_3333_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3333_, 0, v_asciiSym_3330_);
lean_ctor_set(v___x_3333_, 1, v_tks_3332_);
v___x_3334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3334_, 0, v_sym_3331_);
lean_ctor_set(v___x_3334_, 1, v___x_3333_);
return v___x_3334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolInfo(lean_object* v_sym_3335_, lean_object* v_asciiSym_3336_){
_start:
{
lean_object* v___f_3337_; lean_object* v___f_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
lean_inc_ref(v_sym_3335_);
lean_inc_ref(v_asciiSym_3336_);
v___f_3337_ = lean_alloc_closure((void*)(l_Lean_Parser_unicodeSymbolInfo___lam__0), 3, 2);
lean_closure_set(v___f_3337_, 0, v_asciiSym_3336_);
lean_closure_set(v___f_3337_, 1, v_sym_3335_);
v___f_3338_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__1));
v___x_3339_ = lean_box(0);
v___x_3340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3340_, 0, v_asciiSym_3336_);
lean_ctor_set(v___x_3340_, 1, v___x_3339_);
v___x_3341_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3341_, 0, v_sym_3335_);
lean_ctor_set(v___x_3341_, 1, v___x_3340_);
v___x_3342_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3341_);
v___x_3343_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3343_, 0, v___f_3337_);
lean_ctor_set(v___x_3343_, 1, v___f_3338_);
lean_ctor_set(v___x_3343_, 2, v___x_3342_);
return v___x_3343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolFn(lean_object* v_sym_3345_, lean_object* v_asciiSym_3346_, lean_object* v_a_3347_, lean_object* v_a_3348_){
_start:
{
lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; 
v___x_3349_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_3350_ = lean_string_append(v___x_3349_, v_sym_3345_);
v___x_3351_ = ((lean_object*)(l_Lean_Parser_unicodeSymbolFn___closed__0));
v___x_3352_ = lean_string_append(v___x_3350_, v___x_3351_);
v___x_3353_ = lean_string_append(v___x_3352_, v_asciiSym_3346_);
v___x_3354_ = lean_string_append(v___x_3353_, v___x_3349_);
v___x_3355_ = lean_box(0);
v___x_3356_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3356_, 0, v___x_3354_);
lean_ctor_set(v___x_3356_, 1, v___x_3355_);
v___x_3357_ = l_Lean_Parser_unicodeSymbolFnAux(v_sym_3345_, v_asciiSym_3346_, v___x_3356_, v_a_3347_, v_a_3348_);
return v___x_3357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolNoAntiquot___redArg(lean_object* v_sym_3358_, lean_object* v_asciiSym_3359_){
_start:
{
lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v_str_3364_; lean_object* v_startInclusive_3365_; lean_object* v_endExclusive_3366_; lean_object* v___x_3368_; uint8_t v_isShared_3369_; uint8_t v_isSharedCheck_3383_; 
v___x_3360_ = lean_unsigned_to_nat(0u);
v___x_3361_ = lean_string_utf8_byte_size(v_sym_3358_);
v___x_3362_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3362_, 0, v_sym_3358_);
lean_ctor_set(v___x_3362_, 1, v___x_3360_);
lean_ctor_set(v___x_3362_, 2, v___x_3361_);
v___x_3363_ = l_String_Slice_trimAscii(v___x_3362_);
v_str_3364_ = lean_ctor_get(v___x_3363_, 0);
v_startInclusive_3365_ = lean_ctor_get(v___x_3363_, 1);
v_endExclusive_3366_ = lean_ctor_get(v___x_3363_, 2);
v_isSharedCheck_3383_ = !lean_is_exclusive(v___x_3363_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3368_ = v___x_3363_;
v_isShared_3369_ = v_isSharedCheck_3383_;
goto v_resetjp_3367_;
}
else
{
lean_inc(v_endExclusive_3366_);
lean_inc(v_startInclusive_3365_);
lean_inc(v_str_3364_);
lean_dec(v___x_3363_);
v___x_3368_ = lean_box(0);
v_isShared_3369_ = v_isSharedCheck_3383_;
goto v_resetjp_3367_;
}
v_resetjp_3367_:
{
lean_object* v___x_3370_; lean_object* v___x_3372_; 
v___x_3370_ = lean_string_utf8_byte_size(v_asciiSym_3359_);
if (v_isShared_3369_ == 0)
{
lean_ctor_set(v___x_3368_, 2, v___x_3370_);
lean_ctor_set(v___x_3368_, 1, v___x_3360_);
lean_ctor_set(v___x_3368_, 0, v_asciiSym_3359_);
v___x_3372_ = v___x_3368_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v_asciiSym_3359_);
lean_ctor_set(v_reuseFailAlloc_3382_, 1, v___x_3360_);
lean_ctor_set(v_reuseFailAlloc_3382_, 2, v___x_3370_);
v___x_3372_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
lean_object* v___x_3373_; lean_object* v_str_3374_; lean_object* v_startInclusive_3375_; lean_object* v_endExclusive_3376_; lean_object* v_sym_3377_; lean_object* v_asciiSym_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; 
v___x_3373_ = l_String_Slice_trimAscii(v___x_3372_);
v_str_3374_ = lean_ctor_get(v___x_3373_, 0);
lean_inc_ref(v_str_3374_);
v_startInclusive_3375_ = lean_ctor_get(v___x_3373_, 1);
lean_inc(v_startInclusive_3375_);
v_endExclusive_3376_ = lean_ctor_get(v___x_3373_, 2);
lean_inc(v_endExclusive_3376_);
lean_dec_ref(v___x_3373_);
v_sym_3377_ = lean_string_utf8_extract_fast(v_str_3364_, v_startInclusive_3365_, v_endExclusive_3366_);
lean_dec(v_endExclusive_3366_);
lean_dec(v_startInclusive_3365_);
lean_dec_ref(v_str_3364_);
v_asciiSym_3378_ = lean_string_utf8_extract_fast(v_str_3374_, v_startInclusive_3375_, v_endExclusive_3376_);
lean_dec(v_endExclusive_3376_);
lean_dec(v_startInclusive_3375_);
lean_dec_ref(v_str_3374_);
lean_inc_ref(v_asciiSym_3378_);
lean_inc_ref(v_sym_3377_);
v___x_3379_ = l_Lean_Parser_unicodeSymbolInfo(v_sym_3377_, v_asciiSym_3378_);
v___x_3380_ = lean_alloc_closure((void*)(l_Lean_Parser_unicodeSymbolFn), 4, 2);
lean_closure_set(v___x_3380_, 0, v_sym_3377_);
lean_closure_set(v___x_3380_, 1, v_asciiSym_3378_);
v___x_3381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3381_, 0, v___x_3379_);
lean_ctor_set(v___x_3381_, 1, v___x_3380_);
return v___x_3381_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolNoAntiquot(lean_object* v_sym_3384_, lean_object* v_asciiSym_3385_, uint8_t v_preserveForPP_3386_){
_start:
{
lean_object* v___x_3387_; 
v___x_3387_ = l_Lean_Parser_unicodeSymbolNoAntiquot___redArg(v_sym_3384_, v_asciiSym_3385_);
return v___x_3387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolNoAntiquot___boxed(lean_object* v_sym_3388_, lean_object* v_asciiSym_3389_, lean_object* v_preserveForPP_3390_){
_start:
{
uint8_t v_preserveForPP_boxed_3391_; lean_object* v_res_3392_; 
v_preserveForPP_boxed_3391_ = lean_unbox(v_preserveForPP_3390_);
v_res_3392_ = l_Lean_Parser_unicodeSymbolNoAntiquot(v_sym_3388_, v_asciiSym_3389_, v_preserveForPP_boxed_3391_);
return v_res_3392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAtomicInfo(lean_object* v_k_3393_){
_start:
{
lean_object* v___f_3394_; lean_object* v___f_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___f_3394_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__0));
v___f_3395_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__1));
v___x_3396_ = lean_box(0);
v___x_3397_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3397_, 0, v_k_3393_);
lean_ctor_set(v___x_3397_, 1, v___x_3396_);
v___x_3398_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3398_, 0, v___x_3397_);
v___x_3399_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3399_, 0, v___f_3394_);
lean_ctor_set(v___x_3399_, 1, v___f_3395_);
lean_ctor_set(v___x_3399_, 2, v___x_3398_);
return v___x_3399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_expectTokenFn(lean_object* v_k_3400_, lean_object* v_desc_3401_, lean_object* v_c_3402_, lean_object* v_s_3403_){
_start:
{
lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v_s_3406_; lean_object* v_stxStack_3407_; lean_object* v_errorMsg_3408_; lean_object* v___x_3409_; uint8_t v___x_3410_; 
v___x_3404_ = lean_box(0);
lean_inc_ref(v_desc_3401_);
v___x_3405_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3405_, 0, v_desc_3401_);
lean_ctor_set(v___x_3405_, 1, v___x_3404_);
v_s_3406_ = l_Lean_Parser_tokenFn(v___x_3405_, v_c_3402_, v_s_3403_);
v_stxStack_3407_ = lean_ctor_get(v_s_3406_, 0);
v_errorMsg_3408_ = lean_ctor_get(v_s_3406_, 4);
v___x_3409_ = lean_box(0);
v___x_3410_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_3408_, v___x_3409_);
if (v___x_3410_ == 0)
{
lean_dec_ref(v_desc_3401_);
return v_s_3406_;
}
else
{
lean_object* v___x_3411_; uint8_t v___x_3412_; 
v___x_3411_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3407_);
v___x_3412_ = l_Lean_Syntax_isOfKind(v___x_3411_, v_k_3400_);
if (v___x_3412_ == 0)
{
lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3413_ = lean_unsigned_to_nat(0u);
v___x_3414_ = l_Lean_Parser_ParserState_mkUnexpectedTokenError(v_s_3406_, v_desc_3401_, v___x_3413_);
return v___x_3414_;
}
else
{
lean_dec_ref(v_desc_3401_);
return v_s_3406_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_expectTokenFn___boxed(lean_object* v_k_3415_, lean_object* v_desc_3416_, lean_object* v_c_3417_, lean_object* v_s_3418_){
_start:
{
lean_object* v_res_3419_; 
v_res_3419_ = l_Lean_Parser_expectTokenFn(v_k_3415_, v_desc_3416_, v_c_3417_, v_s_3418_);
lean_dec(v_k_3415_);
return v_res_3419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numLitFn(lean_object* v_a_3420_, lean_object* v_a_3421_){
_start:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3422_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_3423_ = ((lean_object*)(l_Lean_Parser_numberFnAux___closed__0));
v___x_3424_ = l_Lean_Parser_expectTokenFn(v___x_3422_, v___x_3423_, v_a_3420_, v_a_3421_);
return v___x_3424_;
}
}
static lean_object* _init_l_Lean_Parser_numLitNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3425_; lean_object* v___x_3426_; 
v___x_3425_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__0));
v___x_3426_ = l_Lean_Parser_mkAtomicInfo(v___x_3425_);
return v___x_3426_;
}
}
static lean_object* _init_l_Lean_Parser_numLitNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; 
v___x_3427_ = lean_alloc_closure((void*)(l_Lean_Parser_numLitFn), 2, 0);
v___x_3428_ = lean_obj_once(&l_Lean_Parser_numLitNoAntiquot___closed__0, &l_Lean_Parser_numLitNoAntiquot___closed__0_once, _init_l_Lean_Parser_numLitNoAntiquot___closed__0);
v___x_3429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3429_, 0, v___x_3428_);
lean_ctor_set(v___x_3429_, 1, v___x_3427_);
return v___x_3429_;
}
}
static lean_object* _init_l_Lean_Parser_numLitNoAntiquot(void){
_start:
{
lean_object* v___x_3430_; 
v___x_3430_ = lean_obj_once(&l_Lean_Parser_numLitNoAntiquot___closed__1, &l_Lean_Parser_numLitNoAntiquot___closed__1_once, _init_l_Lean_Parser_numLitNoAntiquot___closed__1);
return v___x_3430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hexnumFn(lean_object* v_ctx_3434_, lean_object* v_s_3435_){
_start:
{
lean_object* v_pos_3436_; uint8_t v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; 
v_pos_3436_ = lean_ctor_get(v_s_3435_, 2);
lean_inc(v_pos_3436_);
v___x_3437_ = 1;
v___x_3438_ = ((lean_object*)(l_Lean_Parser_hexnumFn___closed__1));
v___x_3439_ = l_Lean_Parser_hexNumberFn(v_pos_3436_, v___x_3437_, v___x_3438_, v_ctx_3434_, v_s_3435_);
return v___x_3439_;
}
}
static lean_object* _init_l_Lean_Parser_hexnumNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3440_; lean_object* v___x_3441_; 
v___x_3440_ = ((lean_object*)(l_Lean_Parser_hexnumFn___closed__0));
v___x_3441_ = l_Lean_Parser_mkAtomicInfo(v___x_3440_);
return v___x_3441_;
}
}
static lean_object* _init_l_Lean_Parser_hexnumNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; 
v___x_3442_ = lean_alloc_closure((void*)(l_Lean_Parser_hexnumFn), 2, 0);
v___x_3443_ = lean_obj_once(&l_Lean_Parser_hexnumNoAntiquot___closed__0, &l_Lean_Parser_hexnumNoAntiquot___closed__0_once, _init_l_Lean_Parser_hexnumNoAntiquot___closed__0);
v___x_3444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3444_, 0, v___x_3443_);
lean_ctor_set(v___x_3444_, 1, v___x_3442_);
return v___x_3444_;
}
}
static lean_object* _init_l_Lean_Parser_hexnumNoAntiquot(void){
_start:
{
lean_object* v___x_3445_; 
v___x_3445_ = lean_obj_once(&l_Lean_Parser_hexnumNoAntiquot___closed__1, &l_Lean_Parser_hexnumNoAntiquot___closed__1_once, _init_l_Lean_Parser_hexnumNoAntiquot___closed__1);
return v___x_3445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLitFn(lean_object* v_a_3447_, lean_object* v_a_3448_){
_start:
{
lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; 
v___x_3449_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__1));
v___x_3450_ = ((lean_object*)(l_Lean_Parser_scientificLitFn___closed__0));
v___x_3451_ = l_Lean_Parser_expectTokenFn(v___x_3449_, v___x_3450_, v_a_3447_, v_a_3448_);
return v___x_3451_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLitNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3452_; lean_object* v___x_3453_; 
v___x_3452_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__0));
v___x_3453_ = l_Lean_Parser_mkAtomicInfo(v___x_3452_);
return v___x_3453_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLitNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; 
v___x_3454_ = lean_alloc_closure((void*)(l_Lean_Parser_scientificLitFn), 2, 0);
v___x_3455_ = lean_obj_once(&l_Lean_Parser_scientificLitNoAntiquot___closed__0, &l_Lean_Parser_scientificLitNoAntiquot___closed__0_once, _init_l_Lean_Parser_scientificLitNoAntiquot___closed__0);
v___x_3456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3456_, 0, v___x_3455_);
lean_ctor_set(v___x_3456_, 1, v___x_3454_);
return v___x_3456_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLitNoAntiquot(void){
_start:
{
lean_object* v___x_3457_; 
v___x_3457_ = lean_obj_once(&l_Lean_Parser_scientificLitNoAntiquot___closed__1, &l_Lean_Parser_scientificLitNoAntiquot___closed__1_once, _init_l_Lean_Parser_scientificLitNoAntiquot___closed__1);
return v___x_3457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLitFn(lean_object* v_a_3459_, lean_object* v_a_3460_){
_start:
{
lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; 
v___x_3461_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__1));
v___x_3462_ = ((lean_object*)(l_Lean_Parser_strLitFn___closed__0));
v___x_3463_ = l_Lean_Parser_expectTokenFn(v___x_3461_, v___x_3462_, v_a_3459_, v_a_3460_);
return v___x_3463_;
}
}
static lean_object* _init_l_Lean_Parser_strLitNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3464_; lean_object* v___x_3465_; 
v___x_3464_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__0));
v___x_3465_ = l_Lean_Parser_mkAtomicInfo(v___x_3464_);
return v___x_3465_;
}
}
static lean_object* _init_l_Lean_Parser_strLitNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; 
v___x_3466_ = lean_alloc_closure((void*)(l_Lean_Parser_strLitFn), 2, 0);
v___x_3467_ = lean_obj_once(&l_Lean_Parser_strLitNoAntiquot___closed__0, &l_Lean_Parser_strLitNoAntiquot___closed__0_once, _init_l_Lean_Parser_strLitNoAntiquot___closed__0);
v___x_3468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3468_, 0, v___x_3467_);
lean_ctor_set(v___x_3468_, 1, v___x_3466_);
return v___x_3468_;
}
}
static lean_object* _init_l_Lean_Parser_strLitNoAntiquot(void){
_start:
{
lean_object* v___x_3469_; 
v___x_3469_ = lean_obj_once(&l_Lean_Parser_strLitNoAntiquot___closed__1, &l_Lean_Parser_strLitNoAntiquot___closed__1_once, _init_l_Lean_Parser_strLitNoAntiquot___closed__1);
return v___x_3469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_charLitFn(lean_object* v_a_3471_, lean_object* v_a_3472_){
_start:
{
lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; 
v___x_3473_ = ((lean_object*)(l_Lean_Parser_charLitFnAux___closed__2));
v___x_3474_ = ((lean_object*)(l_Lean_Parser_charLitFn___closed__0));
v___x_3475_ = l_Lean_Parser_expectTokenFn(v___x_3473_, v___x_3474_, v_a_3471_, v_a_3472_);
return v___x_3475_;
}
}
static lean_object* _init_l_Lean_Parser_charLitNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3476_; lean_object* v___x_3477_; 
v___x_3476_ = ((lean_object*)(l_Lean_Parser_charLitFnAux___closed__1));
v___x_3477_ = l_Lean_Parser_mkAtomicInfo(v___x_3476_);
return v___x_3477_;
}
}
static lean_object* _init_l_Lean_Parser_charLitNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; 
v___x_3478_ = lean_alloc_closure((void*)(l_Lean_Parser_charLitFn), 2, 0);
v___x_3479_ = lean_obj_once(&l_Lean_Parser_charLitNoAntiquot___closed__0, &l_Lean_Parser_charLitNoAntiquot___closed__0_once, _init_l_Lean_Parser_charLitNoAntiquot___closed__0);
v___x_3480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3480_, 0, v___x_3479_);
lean_ctor_set(v___x_3480_, 1, v___x_3478_);
return v___x_3480_;
}
}
static lean_object* _init_l_Lean_Parser_charLitNoAntiquot(void){
_start:
{
lean_object* v___x_3481_; 
v___x_3481_ = lean_obj_once(&l_Lean_Parser_charLitNoAntiquot___closed__1, &l_Lean_Parser_charLitNoAntiquot___closed__1_once, _init_l_Lean_Parser_charLitNoAntiquot___closed__1);
return v___x_3481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nameLitFn(lean_object* v_a_3486_, lean_object* v_a_3487_){
_start:
{
lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; 
v___x_3488_ = ((lean_object*)(l_Lean_Parser_nameLitFn___closed__1));
v___x_3489_ = ((lean_object*)(l_Lean_Parser_nameLitFn___closed__2));
v___x_3490_ = l_Lean_Parser_expectTokenFn(v___x_3488_, v___x_3489_, v_a_3486_, v_a_3487_);
return v___x_3490_;
}
}
static lean_object* _init_l_Lean_Parser_nameLitNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3491_; lean_object* v___x_3492_; 
v___x_3491_ = ((lean_object*)(l_Lean_Parser_nameLitFn___closed__0));
v___x_3492_ = l_Lean_Parser_mkAtomicInfo(v___x_3491_);
return v___x_3492_;
}
}
static lean_object* _init_l_Lean_Parser_nameLitNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; 
v___x_3493_ = lean_alloc_closure((void*)(l_Lean_Parser_nameLitFn), 2, 0);
v___x_3494_ = lean_obj_once(&l_Lean_Parser_nameLitNoAntiquot___closed__0, &l_Lean_Parser_nameLitNoAntiquot___closed__0_once, _init_l_Lean_Parser_nameLitNoAntiquot___closed__0);
v___x_3495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3495_, 0, v___x_3494_);
lean_ctor_set(v___x_3495_, 1, v___x_3493_);
return v___x_3495_;
}
}
static lean_object* _init_l_Lean_Parser_nameLitNoAntiquot(void){
_start:
{
lean_object* v___x_3496_; 
v___x_3496_ = lean_obj_once(&l_Lean_Parser_nameLitNoAntiquot___closed__1, &l_Lean_Parser_nameLitNoAntiquot___closed__1_once, _init_l_Lean_Parser_nameLitNoAntiquot___closed__1);
return v___x_3496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identFn(lean_object* v_c_3500_, lean_object* v_s_3501_){
_start:
{
lean_object* v_toCacheableParserContext_3502_; lean_object* v_forbiddenTks_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; uint8_t v___x_3506_; 
v_toCacheableParserContext_3502_ = lean_ctor_get(v_c_3500_, 2);
v_forbiddenTks_3503_ = lean_ctor_get(v_toCacheableParserContext_3502_, 3);
v___x_3504_ = lean_array_get_size(v_forbiddenTks_3503_);
v___x_3505_ = lean_unsigned_to_nat(0u);
v___x_3506_ = lean_nat_dec_eq(v___x_3504_, v___x_3505_);
if (v___x_3506_ == 0)
{
lean_object* v_pos_3507_; lean_object* v_iniSz_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v_s_3511_; lean_object* v_stxStack_3512_; lean_object* v_errorMsg_3513_; lean_object* v___x_3514_; uint8_t v___x_3515_; 
lean_inc_ref(v_forbiddenTks_3503_);
v_pos_3507_ = lean_ctor_get(v_s_3501_, 2);
lean_inc(v_pos_3507_);
v_iniSz_3508_ = l_Lean_Parser_ParserState_stackSize(v_s_3501_);
v___x_3509_ = ((lean_object*)(l_Lean_Parser_identFn___closed__0));
v___x_3510_ = ((lean_object*)(l_Lean_Parser_identFn___closed__1));
v_s_3511_ = l_Lean_Parser_expectTokenFn(v___x_3509_, v___x_3510_, v_c_3500_, v_s_3501_);
v_stxStack_3512_ = lean_ctor_get(v_s_3511_, 0);
v_errorMsg_3513_ = lean_ctor_get(v_s_3511_, 4);
v___x_3514_ = lean_box(0);
v___x_3515_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_3513_, v___x_3514_);
if (v___x_3515_ == 0)
{
lean_dec(v_iniSz_3508_);
lean_dec(v_pos_3507_);
lean_dec_ref(v_forbiddenTks_3503_);
return v_s_3511_;
}
else
{
lean_object* v___x_3516_; 
v___x_3516_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3512_);
if (lean_obj_tag(v___x_3516_) == 3)
{
lean_object* v_rawVal_3517_; lean_object* v_str_3518_; lean_object* v_startPos_3519_; lean_object* v_stopPos_3520_; lean_object* v___x_3521_; uint8_t v___x_3522_; 
v_rawVal_3517_ = lean_ctor_get(v___x_3516_, 1);
lean_inc_ref(v_rawVal_3517_);
lean_dec_ref_known(v___x_3516_, 4);
v_str_3518_ = lean_ctor_get(v_rawVal_3517_, 0);
lean_inc_ref(v_str_3518_);
v_startPos_3519_ = lean_ctor_get(v_rawVal_3517_, 1);
lean_inc(v_startPos_3519_);
v_stopPos_3520_ = lean_ctor_get(v_rawVal_3517_, 2);
lean_inc(v_stopPos_3520_);
lean_dec_ref(v_rawVal_3517_);
v___x_3521_ = lean_string_utf8_extract(v_str_3518_, v_startPos_3519_, v_stopPos_3520_);
lean_dec(v_stopPos_3520_);
lean_dec(v_startPos_3519_);
lean_dec_ref(v_str_3518_);
v___x_3522_ = l_Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0(v_forbiddenTks_3503_, v___x_3521_);
lean_dec_ref(v___x_3521_);
lean_dec_ref(v_forbiddenTks_3503_);
if (v___x_3522_ == 0)
{
lean_dec(v_iniSz_3508_);
lean_dec(v_pos_3507_);
return v_s_3511_;
}
else
{
lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; 
v___x_3523_ = ((lean_object*)(l_Lean_Parser_mkTokenAndFixPos___closed__1));
v___x_3524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3524_, 0, v_iniSz_3508_);
v___x_3525_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_3511_, v___x_3523_, v_pos_3507_, v___x_3524_);
lean_dec_ref_known(v___x_3524_, 1);
return v___x_3525_;
}
}
else
{
lean_dec(v___x_3516_);
lean_dec(v_iniSz_3508_);
lean_dec(v_pos_3507_);
lean_dec_ref(v_forbiddenTks_3503_);
return v_s_3511_;
}
}
}
else
{
lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; 
v___x_3526_ = ((lean_object*)(l_Lean_Parser_identFn___closed__0));
v___x_3527_ = ((lean_object*)(l_Lean_Parser_identFn___closed__1));
v___x_3528_ = l_Lean_Parser_expectTokenFn(v___x_3526_, v___x_3527_, v_c_3500_, v_s_3501_);
return v___x_3528_;
}
}
}
static lean_object* _init_l_Lean_Parser_identNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3529_; lean_object* v___x_3530_; 
v___x_3529_ = ((lean_object*)(l_Lean_Parser_nonReservedSymbolInfo___closed__0));
v___x_3530_ = l_Lean_Parser_mkAtomicInfo(v___x_3529_);
return v___x_3530_;
}
}
static lean_object* _init_l_Lean_Parser_identNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; 
v___x_3531_ = lean_alloc_closure((void*)(l_Lean_Parser_identFn), 2, 0);
v___x_3532_ = lean_obj_once(&l_Lean_Parser_identNoAntiquot___closed__0, &l_Lean_Parser_identNoAntiquot___closed__0_once, _init_l_Lean_Parser_identNoAntiquot___closed__0);
v___x_3533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3532_);
lean_ctor_set(v___x_3533_, 1, v___x_3531_);
return v___x_3533_;
}
}
static lean_object* _init_l_Lean_Parser_identNoAntiquot(void){
_start:
{
lean_object* v___x_3534_; 
v___x_3534_ = lean_obj_once(&l_Lean_Parser_identNoAntiquot___closed__1, &l_Lean_Parser_identNoAntiquot___closed__1_once, _init_l_Lean_Parser_identNoAntiquot___closed__1);
return v___x_3534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identEqFn(lean_object* v_id_3546_, lean_object* v_c_3547_, lean_object* v_s_3548_){
_start:
{
lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v_s_3551_; lean_object* v_stxStack_3552_; lean_object* v_errorMsg_3553_; lean_object* v___x_3554_; uint8_t v___x_3555_; 
v___x_3549_ = ((lean_object*)(l_Lean_Parser_identFn___closed__1));
v___x_3550_ = ((lean_object*)(l_Lean_Parser_identEqFn___closed__0));
v_s_3551_ = l_Lean_Parser_tokenFn(v___x_3550_, v_c_3547_, v_s_3548_);
v_stxStack_3552_ = lean_ctor_get(v_s_3551_, 0);
v_errorMsg_3553_ = lean_ctor_get(v_s_3551_, 4);
v___x_3554_ = lean_box(0);
v___x_3555_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_3553_, v___x_3554_);
if (v___x_3555_ == 0)
{
lean_dec(v_id_3546_);
return v_s_3551_;
}
else
{
lean_object* v___x_3556_; 
v___x_3556_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3552_);
if (lean_obj_tag(v___x_3556_) == 3)
{
lean_object* v_val_3557_; uint8_t v___x_3558_; 
v_val_3557_ = lean_ctor_get(v___x_3556_, 2);
lean_inc(v_val_3557_);
lean_dec_ref_known(v___x_3556_, 4);
v___x_3558_ = lean_name_eq(v_val_3557_, v_id_3546_);
lean_dec(v_val_3557_);
if (v___x_3558_ == 0)
{
lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; 
v___x_3559_ = ((lean_object*)(l_Lean_Parser_identEqFn___closed__1));
v___x_3560_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_id_3546_, v___x_3555_);
v___x_3561_ = lean_string_append(v___x_3559_, v___x_3560_);
lean_dec_ref(v___x_3560_);
v___x_3562_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_3563_ = lean_string_append(v___x_3561_, v___x_3562_);
v___x_3564_ = lean_unsigned_to_nat(0u);
v___x_3565_ = l_Lean_Parser_ParserState_mkUnexpectedTokenError(v_s_3551_, v___x_3563_, v___x_3564_);
return v___x_3565_;
}
else
{
lean_dec(v_id_3546_);
return v_s_3551_;
}
}
else
{
lean_object* v___x_3566_; lean_object* v___x_3567_; 
lean_dec(v___x_3556_);
lean_dec(v_id_3546_);
v___x_3566_ = lean_unsigned_to_nat(0u);
v___x_3567_ = l_Lean_Parser_ParserState_mkUnexpectedTokenError(v_s_3551_, v___x_3549_, v___x_3566_);
return v___x_3567_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identEq(lean_object* v_id_3568_){
_start:
{
lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; 
v___x_3569_ = lean_obj_once(&l_Lean_Parser_identNoAntiquot___closed__0, &l_Lean_Parser_identNoAntiquot___closed__0_once, _init_l_Lean_Parser_identNoAntiquot___closed__0);
v___x_3570_ = lean_alloc_closure((void*)(l_Lean_Parser_identEqFn), 3, 1);
lean_closure_set(v___x_3570_, 0, v_id_3568_);
v___x_3571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3571_, 0, v___x_3569_);
lean_ctor_set(v___x_3571_, 1, v___x_3570_);
return v___x_3571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfoFn(lean_object* v_c_3575_, lean_object* v_s_3576_){
_start:
{
lean_object* v_pos_3578_; lean_object* v_str_3579_; lean_object* v_trailing_3580_; lean_object* v_s_3581_; lean_object* v_stxStack_3593_; lean_object* v_pos_3594_; uint8_t v___x_3597_; 
v_stxStack_3593_ = lean_ctor_get(v_s_3576_, 0);
v_pos_3594_ = lean_ctor_get(v_s_3576_, 2);
v___x_3597_ = l_Lean_Parser_SyntaxStack_isEmpty(v_stxStack_3593_);
if (v___x_3597_ == 0)
{
lean_object* v_prev_3598_; lean_object* v___x_3599_; 
v_prev_3598_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3593_);
v___x_3599_ = l_Lean_Syntax_getTailInfo(v_prev_3598_);
if (lean_obj_tag(v___x_3599_) == 0)
{
lean_object* v_leading_3600_; lean_object* v_pos_3601_; lean_object* v_trailing_3602_; lean_object* v_endPos_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3614_; 
v_leading_3600_ = lean_ctor_get(v___x_3599_, 0);
v_pos_3601_ = lean_ctor_get(v___x_3599_, 1);
v_trailing_3602_ = lean_ctor_get(v___x_3599_, 2);
v_endPos_3603_ = lean_ctor_get(v___x_3599_, 3);
v_isSharedCheck_3614_ = !lean_is_exclusive(v___x_3599_);
if (v_isSharedCheck_3614_ == 0)
{
v___x_3605_ = v___x_3599_;
v_isShared_3606_ = v_isSharedCheck_3614_;
goto v_resetjp_3604_;
}
else
{
lean_inc(v_endPos_3603_);
lean_inc(v_trailing_3602_);
lean_inc(v_pos_3601_);
lean_inc(v_leading_3600_);
lean_dec(v___x_3599_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3614_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v_str_3607_; lean_object* v___x_3608_; lean_object* v___x_3610_; 
lean_inc_n(v_endPos_3603_, 2);
v_str_3607_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_3575_, v_endPos_3603_);
v___x_3608_ = l_Lean_Parser_ParserState_popSyntax(v_s_3576_);
lean_inc_ref(v_str_3607_);
if (v_isShared_3606_ == 0)
{
lean_ctor_set(v___x_3605_, 2, v_str_3607_);
v___x_3610_ = v___x_3605_;
goto v_reusejp_3609_;
}
else
{
lean_object* v_reuseFailAlloc_3613_; 
v_reuseFailAlloc_3613_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3613_, 0, v_leading_3600_);
lean_ctor_set(v_reuseFailAlloc_3613_, 1, v_pos_3601_);
lean_ctor_set(v_reuseFailAlloc_3613_, 2, v_str_3607_);
lean_ctor_set(v_reuseFailAlloc_3613_, 3, v_endPos_3603_);
v___x_3610_ = v_reuseFailAlloc_3613_;
goto v_reusejp_3609_;
}
v_reusejp_3609_:
{
lean_object* v___x_3611_; lean_object* v_s_3612_; 
v___x_3611_ = l_Lean_Syntax_setTailInfo(v_prev_3598_, v___x_3610_);
v_s_3612_ = l_Lean_Parser_ParserState_pushSyntax(v___x_3608_, v___x_3611_);
v_pos_3578_ = v_endPos_3603_;
v_str_3579_ = v_str_3607_;
v_trailing_3580_ = v_trailing_3602_;
v_s_3581_ = v_s_3612_;
goto v___jp_3577_;
}
}
}
else
{
lean_inc(v_pos_3594_);
lean_dec(v___x_3599_);
lean_dec(v_prev_3598_);
goto v___jp_3595_;
}
}
else
{
lean_inc(v_pos_3594_);
goto v___jp_3595_;
}
v___jp_3577_:
{
lean_object* v_info_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v_ident_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; 
lean_inc(v_pos_3578_);
lean_inc_ref(v_str_3579_);
v_info_3582_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_info_3582_, 0, v_str_3579_);
lean_ctor_set(v_info_3582_, 1, v_pos_3578_);
lean_ctor_set(v_info_3582_, 2, v_trailing_3580_);
lean_ctor_set(v_info_3582_, 3, v_pos_3578_);
v___x_3583_ = lean_box(0);
v___x_3584_ = lean_box(0);
v_ident_3585_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_ident_3585_, 0, v_info_3582_);
lean_ctor_set(v_ident_3585_, 1, v_str_3579_);
lean_ctor_set(v_ident_3585_, 2, v___x_3583_);
lean_ctor_set(v_ident_3585_, 3, v___x_3584_);
v___x_3586_ = ((lean_object*)(l_Lean_Parser_hygieneInfoFn___closed__1));
v___x_3587_ = lean_unsigned_to_nat(1u);
v___x_3588_ = lean_mk_empty_array_with_capacity(v___x_3587_);
v___x_3589_ = lean_array_push(v___x_3588_, v_ident_3585_);
v___x_3590_ = lean_box(2);
v___x_3591_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3591_, 0, v___x_3590_);
lean_ctor_set(v___x_3591_, 1, v___x_3586_);
lean_ctor_set(v___x_3591_, 2, v___x_3589_);
v___x_3592_ = l_Lean_Parser_ParserState_pushSyntax(v_s_3581_, v___x_3591_);
return v___x_3592_;
}
v___jp_3595_:
{
lean_object* v_str_3596_; 
lean_inc(v_pos_3594_);
v_str_3596_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_3575_, v_pos_3594_);
lean_inc_ref(v_str_3596_);
v_pos_3578_ = v_pos_3594_;
v_str_3579_ = v_str_3596_;
v_trailing_3580_ = v_str_3596_;
v_s_3581_ = v_s_3576_;
goto v___jp_3577_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfoFn___boxed(lean_object* v_c_3615_, lean_object* v_s_3616_){
_start:
{
lean_object* v_res_3617_; 
v_res_3617_ = l_Lean_Parser_hygieneInfoFn(v_c_3615_, v_s_3616_);
lean_dec_ref(v_c_3615_);
return v_res_3617_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfoNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; 
v___x_3618_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_3619_ = ((lean_object*)(l_Lean_Parser_hygieneInfoFn___closed__1));
v___x_3620_ = l_Lean_Parser_nodeInfo(v___x_3619_, v___x_3618_);
return v___x_3620_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfoNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; 
v___x_3621_ = lean_alloc_closure((void*)(l_Lean_Parser_hygieneInfoFn___boxed), 2, 0);
v___x_3622_ = lean_obj_once(&l_Lean_Parser_hygieneInfoNoAntiquot___closed__0, &l_Lean_Parser_hygieneInfoNoAntiquot___closed__0_once, _init_l_Lean_Parser_hygieneInfoNoAntiquot___closed__0);
v___x_3623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3623_, 0, v___x_3622_);
lean_ctor_set(v___x_3623_, 1, v___x_3621_);
return v___x_3623_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfoNoAntiquot(void){
_start:
{
lean_object* v___x_3624_; 
v___x_3624_ = lean_obj_once(&l_Lean_Parser_hygieneInfoNoAntiquot___closed__1, &l_Lean_Parser_hygieneInfoNoAntiquot___closed__1_once, _init_l_Lean_Parser_hygieneInfoNoAntiquot___closed__1);
return v___x_3624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepTop(lean_object* v_s_3625_, lean_object* v_startStackSize_3626_){
_start:
{
lean_object* v_node_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; 
v_node_3627_ = l_Lean_Parser_SyntaxStack_back(v_s_3625_);
v___x_3628_ = l_Lean_Parser_SyntaxStack_shrink(v_s_3625_, v_startStackSize_3626_);
v___x_3629_ = l_Lean_Parser_SyntaxStack_push(v___x_3628_, v_node_3627_);
return v___x_3629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepTop___boxed(lean_object* v_s_3630_, lean_object* v_startStackSize_3631_){
_start:
{
lean_object* v_res_3632_; 
v_res_3632_ = l_Lean_Parser_ParserState_keepTop(v_s_3630_, v_startStackSize_3631_);
lean_dec(v_startStackSize_3631_);
return v_res_3632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepNewError(lean_object* v_s_3633_, lean_object* v_oldStackSize_3634_){
_start:
{
lean_object* v_stxStack_3635_; lean_object* v_lhsPrec_3636_; lean_object* v_pos_3637_; lean_object* v_cache_3638_; lean_object* v_errorMsg_3639_; lean_object* v_recoveredErrors_3640_; lean_object* v___x_3642_; uint8_t v_isShared_3643_; uint8_t v_isSharedCheck_3648_; 
v_stxStack_3635_ = lean_ctor_get(v_s_3633_, 0);
v_lhsPrec_3636_ = lean_ctor_get(v_s_3633_, 1);
v_pos_3637_ = lean_ctor_get(v_s_3633_, 2);
v_cache_3638_ = lean_ctor_get(v_s_3633_, 3);
v_errorMsg_3639_ = lean_ctor_get(v_s_3633_, 4);
v_recoveredErrors_3640_ = lean_ctor_get(v_s_3633_, 5);
v_isSharedCheck_3648_ = !lean_is_exclusive(v_s_3633_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3642_ = v_s_3633_;
v_isShared_3643_ = v_isSharedCheck_3648_;
goto v_resetjp_3641_;
}
else
{
lean_inc(v_recoveredErrors_3640_);
lean_inc(v_errorMsg_3639_);
lean_inc(v_cache_3638_);
lean_inc(v_pos_3637_);
lean_inc(v_lhsPrec_3636_);
lean_inc(v_stxStack_3635_);
lean_dec(v_s_3633_);
v___x_3642_ = lean_box(0);
v_isShared_3643_ = v_isSharedCheck_3648_;
goto v_resetjp_3641_;
}
v_resetjp_3641_:
{
lean_object* v___x_3644_; lean_object* v___x_3646_; 
v___x_3644_ = l_Lean_Parser_ParserState_keepTop(v_stxStack_3635_, v_oldStackSize_3634_);
if (v_isShared_3643_ == 0)
{
lean_ctor_set(v___x_3642_, 0, v___x_3644_);
v___x_3646_ = v___x_3642_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v___x_3644_);
lean_ctor_set(v_reuseFailAlloc_3647_, 1, v_lhsPrec_3636_);
lean_ctor_set(v_reuseFailAlloc_3647_, 2, v_pos_3637_);
lean_ctor_set(v_reuseFailAlloc_3647_, 3, v_cache_3638_);
lean_ctor_set(v_reuseFailAlloc_3647_, 4, v_errorMsg_3639_);
lean_ctor_set(v_reuseFailAlloc_3647_, 5, v_recoveredErrors_3640_);
v___x_3646_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
return v___x_3646_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepNewError___boxed(lean_object* v_s_3649_, lean_object* v_oldStackSize_3650_){
_start:
{
lean_object* v_res_3651_; 
v_res_3651_ = l_Lean_Parser_ParserState_keepNewError(v_s_3649_, v_oldStackSize_3650_);
lean_dec(v_oldStackSize_3650_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepPrevError(lean_object* v_s_3652_, lean_object* v_oldStackSize_3653_, lean_object* v_oldStopPos_3654_, lean_object* v_oldError_3655_, lean_object* v_oldLhsPrec_3656_){
_start:
{
lean_object* v_stxStack_3657_; lean_object* v_cache_3658_; lean_object* v_recoveredErrors_3659_; lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3667_; 
v_stxStack_3657_ = lean_ctor_get(v_s_3652_, 0);
v_cache_3658_ = lean_ctor_get(v_s_3652_, 3);
v_recoveredErrors_3659_ = lean_ctor_get(v_s_3652_, 5);
v_isSharedCheck_3667_ = !lean_is_exclusive(v_s_3652_);
if (v_isSharedCheck_3667_ == 0)
{
lean_object* v_unused_3668_; lean_object* v_unused_3669_; lean_object* v_unused_3670_; 
v_unused_3668_ = lean_ctor_get(v_s_3652_, 4);
lean_dec(v_unused_3668_);
v_unused_3669_ = lean_ctor_get(v_s_3652_, 2);
lean_dec(v_unused_3669_);
v_unused_3670_ = lean_ctor_get(v_s_3652_, 1);
lean_dec(v_unused_3670_);
v___x_3661_ = v_s_3652_;
v_isShared_3662_ = v_isSharedCheck_3667_;
goto v_resetjp_3660_;
}
else
{
lean_inc(v_recoveredErrors_3659_);
lean_inc(v_cache_3658_);
lean_inc(v_stxStack_3657_);
lean_dec(v_s_3652_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3667_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v___x_3663_; lean_object* v___x_3665_; 
v___x_3663_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_3657_, v_oldStackSize_3653_);
if (v_isShared_3662_ == 0)
{
lean_ctor_set(v___x_3661_, 4, v_oldError_3655_);
lean_ctor_set(v___x_3661_, 2, v_oldStopPos_3654_);
lean_ctor_set(v___x_3661_, 1, v_oldLhsPrec_3656_);
lean_ctor_set(v___x_3661_, 0, v___x_3663_);
v___x_3665_ = v___x_3661_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v___x_3663_);
lean_ctor_set(v_reuseFailAlloc_3666_, 1, v_oldLhsPrec_3656_);
lean_ctor_set(v_reuseFailAlloc_3666_, 2, v_oldStopPos_3654_);
lean_ctor_set(v_reuseFailAlloc_3666_, 3, v_cache_3658_);
lean_ctor_set(v_reuseFailAlloc_3666_, 4, v_oldError_3655_);
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
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepPrevError___boxed(lean_object* v_s_3671_, lean_object* v_oldStackSize_3672_, lean_object* v_oldStopPos_3673_, lean_object* v_oldError_3674_, lean_object* v_oldLhsPrec_3675_){
_start:
{
lean_object* v_res_3676_; 
v_res_3676_ = l_Lean_Parser_ParserState_keepPrevError(v_s_3671_, v_oldStackSize_3672_, v_oldStopPos_3673_, v_oldError_3674_, v_oldLhsPrec_3675_);
lean_dec(v_oldStackSize_3672_);
return v_res_3676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mergeErrors(lean_object* v_s_3677_, lean_object* v_oldStackSize_3678_, lean_object* v_oldError_3679_){
_start:
{
lean_object* v_stxStack_3680_; lean_object* v_lhsPrec_3681_; lean_object* v_pos_3682_; lean_object* v_cache_3683_; lean_object* v_errorMsg_3684_; lean_object* v_recoveredErrors_3685_; lean_object* v___y_3687_; 
v_stxStack_3680_ = lean_ctor_get(v_s_3677_, 0);
v_lhsPrec_3681_ = lean_ctor_get(v_s_3677_, 1);
v_pos_3682_ = lean_ctor_get(v_s_3677_, 2);
v_cache_3683_ = lean_ctor_get(v_s_3677_, 3);
v_errorMsg_3684_ = lean_ctor_get(v_s_3677_, 4);
v_recoveredErrors_3685_ = lean_ctor_get(v_s_3677_, 5);
if (lean_obj_tag(v_errorMsg_3684_) == 1)
{
lean_object* v_val_3691_; uint8_t v___x_3692_; 
lean_inc_ref(v_errorMsg_3684_);
lean_inc_ref(v_recoveredErrors_3685_);
lean_inc_ref(v_cache_3683_);
lean_inc(v_pos_3682_);
lean_inc(v_lhsPrec_3681_);
lean_inc_ref(v_stxStack_3680_);
lean_dec_ref(v_s_3677_);
v_val_3691_ = lean_ctor_get(v_errorMsg_3684_, 0);
lean_inc(v_val_3691_);
lean_dec_ref_known(v_errorMsg_3684_, 1);
v___x_3692_ = l_Lean_Parser_instBEqError_beq(v_oldError_3679_, v_val_3691_);
if (v___x_3692_ == 0)
{
lean_object* v___x_3693_; 
v___x_3693_ = l_Lean_Parser_Error_merge(v_oldError_3679_, v_val_3691_);
v___y_3687_ = v___x_3693_;
goto v___jp_3686_;
}
else
{
lean_dec_ref(v_oldError_3679_);
v___y_3687_ = v_val_3691_;
goto v___jp_3686_;
}
}
else
{
lean_dec_ref(v_oldError_3679_);
return v_s_3677_;
}
v___jp_3686_:
{
lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; 
v___x_3688_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_3680_, v_oldStackSize_3678_);
v___x_3689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3689_, 0, v___y_3687_);
v___x_3690_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3690_, 0, v___x_3688_);
lean_ctor_set(v___x_3690_, 1, v_lhsPrec_3681_);
lean_ctor_set(v___x_3690_, 2, v_pos_3682_);
lean_ctor_set(v___x_3690_, 3, v_cache_3683_);
lean_ctor_set(v___x_3690_, 4, v___x_3689_);
lean_ctor_set(v___x_3690_, 5, v_recoveredErrors_3685_);
return v___x_3690_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mergeErrors___boxed(lean_object* v_s_3694_, lean_object* v_oldStackSize_3695_, lean_object* v_oldError_3696_){
_start:
{
lean_object* v_res_3697_; 
v_res_3697_ = l_Lean_Parser_ParserState_mergeErrors(v_s_3694_, v_oldStackSize_3695_, v_oldError_3696_);
lean_dec(v_oldStackSize_3695_);
return v_res_3697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepLatest(lean_object* v_s_3698_, lean_object* v_startStackSize_3699_){
_start:
{
lean_object* v_stxStack_3700_; lean_object* v_lhsPrec_3701_; lean_object* v_pos_3702_; lean_object* v_cache_3703_; lean_object* v_recoveredErrors_3704_; lean_object* v___x_3706_; uint8_t v_isShared_3707_; uint8_t v_isSharedCheck_3713_; 
v_stxStack_3700_ = lean_ctor_get(v_s_3698_, 0);
v_lhsPrec_3701_ = lean_ctor_get(v_s_3698_, 1);
v_pos_3702_ = lean_ctor_get(v_s_3698_, 2);
v_cache_3703_ = lean_ctor_get(v_s_3698_, 3);
v_recoveredErrors_3704_ = lean_ctor_get(v_s_3698_, 5);
v_isSharedCheck_3713_ = !lean_is_exclusive(v_s_3698_);
if (v_isSharedCheck_3713_ == 0)
{
lean_object* v_unused_3714_; 
v_unused_3714_ = lean_ctor_get(v_s_3698_, 4);
lean_dec(v_unused_3714_);
v___x_3706_ = v_s_3698_;
v_isShared_3707_ = v_isSharedCheck_3713_;
goto v_resetjp_3705_;
}
else
{
lean_inc(v_recoveredErrors_3704_);
lean_inc(v_cache_3703_);
lean_inc(v_pos_3702_);
lean_inc(v_lhsPrec_3701_);
lean_inc(v_stxStack_3700_);
lean_dec(v_s_3698_);
v___x_3706_ = lean_box(0);
v_isShared_3707_ = v_isSharedCheck_3713_;
goto v_resetjp_3705_;
}
v_resetjp_3705_:
{
lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3711_; 
v___x_3708_ = l_Lean_Parser_ParserState_keepTop(v_stxStack_3700_, v_startStackSize_3699_);
v___x_3709_ = lean_box(0);
if (v_isShared_3707_ == 0)
{
lean_ctor_set(v___x_3706_, 4, v___x_3709_);
lean_ctor_set(v___x_3706_, 0, v___x_3708_);
v___x_3711_ = v___x_3706_;
goto v_reusejp_3710_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v___x_3708_);
lean_ctor_set(v_reuseFailAlloc_3712_, 1, v_lhsPrec_3701_);
lean_ctor_set(v_reuseFailAlloc_3712_, 2, v_pos_3702_);
lean_ctor_set(v_reuseFailAlloc_3712_, 3, v_cache_3703_);
lean_ctor_set(v_reuseFailAlloc_3712_, 4, v___x_3709_);
lean_ctor_set(v_reuseFailAlloc_3712_, 5, v_recoveredErrors_3704_);
v___x_3711_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3710_;
}
v_reusejp_3710_:
{
return v___x_3711_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepLatest___boxed(lean_object* v_s_3715_, lean_object* v_startStackSize_3716_){
_start:
{
lean_object* v_res_3717_; 
v_res_3717_ = l_Lean_Parser_ParserState_keepLatest(v_s_3715_, v_startStackSize_3716_);
lean_dec(v_startStackSize_3716_);
return v_res_3717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_replaceLongest(lean_object* v_s_3718_, lean_object* v_startStackSize_3719_){
_start:
{
lean_object* v___x_3720_; 
v___x_3720_ = l_Lean_Parser_ParserState_keepLatest(v_s_3718_, v_startStackSize_3719_);
return v___x_3720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_replaceLongest___boxed(lean_object* v_s_3721_, lean_object* v_startStackSize_3722_){
_start:
{
lean_object* v_res_3723_; 
v_res_3723_ = l_Lean_Parser_ParserState_replaceLongest(v_s_3721_, v_startStackSize_3722_);
lean_dec(v_startStackSize_3722_);
return v_res_3723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_invalidLongestMatchParser(lean_object* v_s_3725_){
_start:
{
lean_object* v___x_3726_; lean_object* v___x_3727_; 
v___x_3726_ = ((lean_object*)(l_Lean_Parser_invalidLongestMatchParser___closed__0));
v___x_3727_ = l_Lean_Parser_ParserState_mkError(v_s_3725_, v___x_3726_);
return v___x_3727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_runLongestMatchParser(lean_object* v_left_x3f_3728_, lean_object* v_startLhsPrec_3729_, lean_object* v_p_3730_, lean_object* v_c_3731_, lean_object* v_s_3732_){
_start:
{
lean_object* v___y_3734_; lean_object* v_s_3735_; lean_object* v_stxStack_3748_; lean_object* v_pos_3749_; lean_object* v_cache_3750_; lean_object* v_errorMsg_3751_; lean_object* v_recoveredErrors_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3765_; 
v_stxStack_3748_ = lean_ctor_get(v_s_3732_, 0);
v_pos_3749_ = lean_ctor_get(v_s_3732_, 2);
v_cache_3750_ = lean_ctor_get(v_s_3732_, 3);
v_errorMsg_3751_ = lean_ctor_get(v_s_3732_, 4);
v_recoveredErrors_3752_ = lean_ctor_get(v_s_3732_, 5);
v_isSharedCheck_3765_ = !lean_is_exclusive(v_s_3732_);
if (v_isSharedCheck_3765_ == 0)
{
lean_object* v_unused_3766_; 
v_unused_3766_ = lean_ctor_get(v_s_3732_, 1);
lean_dec(v_unused_3766_);
v___x_3754_ = v_s_3732_;
v_isShared_3755_ = v_isSharedCheck_3765_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_recoveredErrors_3752_);
lean_inc(v_errorMsg_3751_);
lean_inc(v_cache_3750_);
lean_inc(v_pos_3749_);
lean_inc(v_stxStack_3748_);
lean_dec(v_s_3732_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3765_;
goto v_resetjp_3753_;
}
v___jp_3733_:
{
lean_object* v_s_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; uint8_t v___x_3740_; 
v_s_3736_ = lean_apply_2(v_p_3730_, v_c_3731_, v_s_3735_);
v___x_3737_ = l_Lean_Parser_ParserState_stackSize(v_s_3736_);
v___x_3738_ = lean_unsigned_to_nat(1u);
v___x_3739_ = lean_nat_add(v___y_3734_, v___x_3738_);
v___x_3740_ = lean_nat_dec_eq(v___x_3737_, v___x_3739_);
lean_dec(v___x_3739_);
lean_dec(v___x_3737_);
if (v___x_3740_ == 0)
{
lean_object* v_errorMsg_3741_; lean_object* v___x_3742_; uint8_t v___x_3743_; 
v_errorMsg_3741_ = lean_ctor_get(v_s_3736_, 4);
lean_inc(v_errorMsg_3741_);
v___x_3742_ = lean_box(0);
v___x_3743_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_3741_, v___x_3742_);
lean_dec(v_errorMsg_3741_);
if (v___x_3743_ == 0)
{
lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; 
v___x_3744_ = l_Lean_Parser_ParserState_shrinkStack(v_s_3736_, v___y_3734_);
lean_dec(v___y_3734_);
v___x_3745_ = lean_box(0);
v___x_3746_ = l_Lean_Parser_ParserState_pushSyntax(v___x_3744_, v___x_3745_);
return v___x_3746_;
}
else
{
lean_object* v___x_3747_; 
lean_dec(v___y_3734_);
v___x_3747_ = l_Lean_Parser_invalidLongestMatchParser(v_s_3736_);
return v___x_3747_;
}
}
else
{
lean_dec(v___y_3734_);
return v_s_3736_;
}
}
v_resetjp_3753_:
{
lean_object* v___y_3757_; 
if (lean_obj_tag(v_left_x3f_3728_) == 0)
{
lean_object* v___x_3764_; 
lean_dec(v_startLhsPrec_3729_);
v___x_3764_ = l_Lean_Parser_maxPrec;
v___y_3757_ = v___x_3764_;
goto v___jp_3756_;
}
else
{
v___y_3757_ = v_startLhsPrec_3729_;
goto v___jp_3756_;
}
v___jp_3756_:
{
lean_object* v_s_3759_; 
if (v_isShared_3755_ == 0)
{
lean_ctor_set(v___x_3754_, 1, v___y_3757_);
v_s_3759_ = v___x_3754_;
goto v_reusejp_3758_;
}
else
{
lean_object* v_reuseFailAlloc_3763_; 
v_reuseFailAlloc_3763_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3763_, 0, v_stxStack_3748_);
lean_ctor_set(v_reuseFailAlloc_3763_, 1, v___y_3757_);
lean_ctor_set(v_reuseFailAlloc_3763_, 2, v_pos_3749_);
lean_ctor_set(v_reuseFailAlloc_3763_, 3, v_cache_3750_);
lean_ctor_set(v_reuseFailAlloc_3763_, 4, v_errorMsg_3751_);
lean_ctor_set(v_reuseFailAlloc_3763_, 5, v_recoveredErrors_3752_);
v_s_3759_ = v_reuseFailAlloc_3763_;
goto v_reusejp_3758_;
}
v_reusejp_3758_:
{
lean_object* v_startSize_3760_; 
v_startSize_3760_ = l_Lean_Parser_ParserState_stackSize(v_s_3759_);
if (lean_obj_tag(v_left_x3f_3728_) == 1)
{
lean_object* v_val_3761_; lean_object* v_s_3762_; 
v_val_3761_ = lean_ctor_get(v_left_x3f_3728_, 0);
lean_inc(v_val_3761_);
lean_dec_ref_known(v_left_x3f_3728_, 1);
v_s_3762_ = l_Lean_Parser_ParserState_pushSyntax(v_s_3759_, v_val_3761_);
v___y_3734_ = v_startSize_3760_;
v_s_3735_ = v_s_3762_;
goto v___jp_3733_;
}
else
{
lean_dec(v_left_x3f_3728_);
v___y_3734_ = v_startSize_3760_;
v_s_3735_ = v_s_3759_;
goto v___jp_3733_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchStep___lam__0(lean_object* v_s_3767_, lean_object* v_prio_3768_){
_start:
{
lean_object* v_pos_3769_; lean_object* v_errorMsg_3770_; lean_object* v___y_3772_; 
v_pos_3769_ = lean_ctor_get(v_s_3767_, 2);
v_errorMsg_3770_ = lean_ctor_get(v_s_3767_, 4);
if (lean_obj_tag(v_errorMsg_3770_) == 0)
{
lean_object* v___x_3775_; 
v___x_3775_ = lean_unsigned_to_nat(1u);
v___y_3772_ = v___x_3775_;
goto v___jp_3771_;
}
else
{
lean_object* v___x_3776_; 
v___x_3776_ = lean_unsigned_to_nat(0u);
v___y_3772_ = v___x_3776_;
goto v___jp_3771_;
}
v___jp_3771_:
{
lean_object* v___x_3773_; lean_object* v___x_3774_; 
v___x_3773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3773_, 0, v___y_3772_);
lean_ctor_set(v___x_3773_, 1, v_prio_3768_);
lean_inc(v_pos_3769_);
v___x_3774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3774_, 0, v_pos_3769_);
lean_ctor_set(v___x_3774_, 1, v___x_3773_);
return v___x_3774_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchStep___lam__0___boxed(lean_object* v_s_3777_, lean_object* v_prio_3778_){
_start:
{
lean_object* v_res_3779_; 
v_res_3779_ = l_Lean_Parser_longestMatchStep___lam__0(v_s_3777_, v_prio_3778_);
lean_dec_ref(v_s_3777_);
return v_res_3779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchStep(lean_object* v_left_x3f_3780_, lean_object* v_startSize_3781_, lean_object* v_startLhsPrec_3782_, lean_object* v_startPos_3783_, lean_object* v_prevPrio_3784_, lean_object* v_prio_3785_, lean_object* v_p_3786_, lean_object* v_c_3787_, lean_object* v_s_3788_){
_start:
{
lean_object* v_lhsPrec_3789_; lean_object* v_pos_3790_; lean_object* v_errorMsg_3791_; lean_object* v_previousScore_3792_; lean_object* v_fst_3793_; lean_object* v_snd_3794_; lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3850_; 
v_lhsPrec_3789_ = lean_ctor_get(v_s_3788_, 1);
lean_inc(v_lhsPrec_3789_);
v_pos_3790_ = lean_ctor_get(v_s_3788_, 2);
lean_inc(v_pos_3790_);
v_errorMsg_3791_ = lean_ctor_get(v_s_3788_, 4);
lean_inc(v_errorMsg_3791_);
lean_inc(v_prevPrio_3784_);
v_previousScore_3792_ = l_Lean_Parser_longestMatchStep___lam__0(v_s_3788_, v_prevPrio_3784_);
v_fst_3793_ = lean_ctor_get(v_previousScore_3792_, 0);
v_snd_3794_ = lean_ctor_get(v_previousScore_3792_, 1);
v_isSharedCheck_3850_ = !lean_is_exclusive(v_previousScore_3792_);
if (v_isSharedCheck_3850_ == 0)
{
v___x_3796_ = v_previousScore_3792_;
v_isShared_3797_ = v_isSharedCheck_3850_;
goto v_resetjp_3795_;
}
else
{
lean_inc(v_snd_3794_);
lean_inc(v_fst_3793_);
lean_dec(v_previousScore_3792_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3850_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v_prevSize_3798_; lean_object* v_s_3799_; lean_object* v_s_3800_; lean_object* v___x_3809_; lean_object* v_fst_3810_; lean_object* v_snd_3811_; uint8_t v___x_3812_; 
v_prevSize_3798_ = l_Lean_Parser_ParserState_stackSize(v_s_3788_);
v_s_3799_ = l_Lean_Parser_ParserState_restore(v_s_3788_, v_prevSize_3798_, v_startPos_3783_);
v_s_3800_ = l_Lean_Parser_runLongestMatchParser(v_left_x3f_3780_, v_startLhsPrec_3782_, v_p_3786_, v_c_3787_, v_s_3799_);
lean_inc(v_prio_3785_);
v___x_3809_ = l_Lean_Parser_longestMatchStep___lam__0(v_s_3800_, v_prio_3785_);
v_fst_3810_ = lean_ctor_get(v___x_3809_, 0);
lean_inc(v_fst_3810_);
v_snd_3811_ = lean_ctor_get(v___x_3809_, 1);
lean_inc(v_snd_3811_);
lean_dec_ref(v___x_3809_);
v___x_3812_ = lean_nat_dec_lt(v_fst_3793_, v_fst_3810_);
if (v___x_3812_ == 0)
{
uint8_t v___x_3813_; 
v___x_3813_ = lean_nat_dec_eq(v_fst_3793_, v_fst_3810_);
lean_dec(v_fst_3810_);
lean_dec(v_fst_3793_);
if (v___x_3813_ == 0)
{
lean_dec(v_snd_3811_);
lean_del_object(v___x_3796_);
lean_dec(v_snd_3794_);
lean_dec(v_prio_3785_);
goto v___jp_3806_;
}
else
{
lean_object* v_fst_3814_; lean_object* v_snd_3815_; lean_object* v_fst_3816_; lean_object* v_snd_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3849_; 
v_fst_3814_ = lean_ctor_get(v_snd_3794_, 0);
lean_inc(v_fst_3814_);
v_snd_3815_ = lean_ctor_get(v_snd_3794_, 1);
lean_inc(v_snd_3815_);
lean_dec(v_snd_3794_);
v_fst_3816_ = lean_ctor_get(v_snd_3811_, 0);
v_snd_3817_ = lean_ctor_get(v_snd_3811_, 1);
v_isSharedCheck_3849_ = !lean_is_exclusive(v_snd_3811_);
if (v_isSharedCheck_3849_ == 0)
{
v___x_3819_ = v_snd_3811_;
v_isShared_3820_ = v_isSharedCheck_3849_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_snd_3817_);
lean_inc(v_fst_3816_);
lean_dec(v_snd_3811_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3849_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
uint8_t v___x_3821_; 
v___x_3821_ = lean_nat_dec_lt(v_fst_3814_, v_fst_3816_);
if (v___x_3821_ == 0)
{
uint8_t v___x_3822_; 
v___x_3822_ = lean_nat_dec_eq(v_fst_3814_, v_fst_3816_);
lean_dec(v_fst_3816_);
lean_dec(v_fst_3814_);
if (v___x_3822_ == 0)
{
lean_del_object(v___x_3819_);
lean_dec(v_snd_3817_);
lean_dec(v_snd_3815_);
lean_del_object(v___x_3796_);
lean_dec(v_prio_3785_);
goto v___jp_3806_;
}
else
{
uint8_t v___x_3823_; 
v___x_3823_ = lean_nat_dec_lt(v_snd_3815_, v_snd_3817_);
if (v___x_3823_ == 0)
{
uint8_t v___x_3824_; 
lean_del_object(v___x_3796_);
v___x_3824_ = lean_nat_dec_eq(v_snd_3815_, v_snd_3817_);
lean_dec(v_snd_3817_);
lean_dec(v_snd_3815_);
if (v___x_3824_ == 0)
{
lean_del_object(v___x_3819_);
lean_dec(v_prio_3785_);
goto v___jp_3806_;
}
else
{
lean_dec(v_pos_3790_);
lean_dec(v_prevPrio_3784_);
if (lean_obj_tag(v_errorMsg_3791_) == 0)
{
lean_object* v_stxStack_3825_; lean_object* v_lhsPrec_3826_; lean_object* v_pos_3827_; lean_object* v_cache_3828_; lean_object* v_errorMsg_3829_; lean_object* v_recoveredErrors_3830_; lean_object* v___x_3832_; uint8_t v_isShared_3833_; uint8_t v_isSharedCheck_3843_; 
lean_dec(v_prevSize_3798_);
v_stxStack_3825_ = lean_ctor_get(v_s_3800_, 0);
v_lhsPrec_3826_ = lean_ctor_get(v_s_3800_, 1);
v_pos_3827_ = lean_ctor_get(v_s_3800_, 2);
v_cache_3828_ = lean_ctor_get(v_s_3800_, 3);
v_errorMsg_3829_ = lean_ctor_get(v_s_3800_, 4);
v_recoveredErrors_3830_ = lean_ctor_get(v_s_3800_, 5);
v_isSharedCheck_3843_ = !lean_is_exclusive(v_s_3800_);
if (v_isSharedCheck_3843_ == 0)
{
v___x_3832_ = v_s_3800_;
v_isShared_3833_ = v_isSharedCheck_3843_;
goto v_resetjp_3831_;
}
else
{
lean_inc(v_recoveredErrors_3830_);
lean_inc(v_errorMsg_3829_);
lean_inc(v_cache_3828_);
lean_inc(v_pos_3827_);
lean_inc(v_lhsPrec_3826_);
lean_inc(v_stxStack_3825_);
lean_dec(v_s_3800_);
v___x_3832_ = lean_box(0);
v_isShared_3833_ = v_isSharedCheck_3843_;
goto v_resetjp_3831_;
}
v_resetjp_3831_:
{
lean_object* v___y_3835_; uint8_t v___x_3842_; 
v___x_3842_ = lean_nat_dec_le(v_lhsPrec_3826_, v_lhsPrec_3789_);
if (v___x_3842_ == 0)
{
lean_dec(v_lhsPrec_3826_);
v___y_3835_ = v_lhsPrec_3789_;
goto v___jp_3834_;
}
else
{
lean_dec(v_lhsPrec_3789_);
v___y_3835_ = v_lhsPrec_3826_;
goto v___jp_3834_;
}
v___jp_3834_:
{
lean_object* v___x_3837_; 
if (v_isShared_3833_ == 0)
{
lean_ctor_set(v___x_3832_, 1, v___y_3835_);
v___x_3837_ = v___x_3832_;
goto v_reusejp_3836_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v_stxStack_3825_);
lean_ctor_set(v_reuseFailAlloc_3841_, 1, v___y_3835_);
lean_ctor_set(v_reuseFailAlloc_3841_, 2, v_pos_3827_);
lean_ctor_set(v_reuseFailAlloc_3841_, 3, v_cache_3828_);
lean_ctor_set(v_reuseFailAlloc_3841_, 4, v_errorMsg_3829_);
lean_ctor_set(v_reuseFailAlloc_3841_, 5, v_recoveredErrors_3830_);
v___x_3837_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3836_;
}
v_reusejp_3836_:
{
lean_object* v___x_3839_; 
if (v_isShared_3820_ == 0)
{
lean_ctor_set(v___x_3819_, 1, v_prio_3785_);
lean_ctor_set(v___x_3819_, 0, v___x_3837_);
v___x_3839_ = v___x_3819_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3840_; 
v_reuseFailAlloc_3840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3840_, 0, v___x_3837_);
lean_ctor_set(v_reuseFailAlloc_3840_, 1, v_prio_3785_);
v___x_3839_ = v_reuseFailAlloc_3840_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
return v___x_3839_;
}
}
}
}
}
else
{
lean_object* v_val_3844_; lean_object* v___x_3845_; lean_object* v___x_3847_; 
lean_dec(v_lhsPrec_3789_);
v_val_3844_ = lean_ctor_get(v_errorMsg_3791_, 0);
lean_inc(v_val_3844_);
lean_dec_ref_known(v_errorMsg_3791_, 1);
v___x_3845_ = l_Lean_Parser_ParserState_mergeErrors(v_s_3800_, v_prevSize_3798_, v_val_3844_);
lean_dec(v_prevSize_3798_);
if (v_isShared_3820_ == 0)
{
lean_ctor_set(v___x_3819_, 1, v_prio_3785_);
lean_ctor_set(v___x_3819_, 0, v___x_3845_);
v___x_3847_ = v___x_3819_;
goto v_reusejp_3846_;
}
else
{
lean_object* v_reuseFailAlloc_3848_; 
v_reuseFailAlloc_3848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3848_, 0, v___x_3845_);
lean_ctor_set(v_reuseFailAlloc_3848_, 1, v_prio_3785_);
v___x_3847_ = v_reuseFailAlloc_3848_;
goto v_reusejp_3846_;
}
v_reusejp_3846_:
{
return v___x_3847_;
}
}
}
}
else
{
lean_del_object(v___x_3819_);
lean_dec(v_snd_3817_);
lean_dec(v_snd_3815_);
lean_dec(v_prevSize_3798_);
lean_dec(v_errorMsg_3791_);
lean_dec(v_pos_3790_);
lean_dec(v_lhsPrec_3789_);
lean_dec(v_prevPrio_3784_);
goto v___jp_3801_;
}
}
}
else
{
lean_del_object(v___x_3819_);
lean_dec(v_snd_3817_);
lean_dec(v_fst_3816_);
lean_dec(v_snd_3815_);
lean_dec(v_fst_3814_);
lean_dec(v_prevSize_3798_);
lean_dec(v_errorMsg_3791_);
lean_dec(v_pos_3790_);
lean_dec(v_lhsPrec_3789_);
lean_dec(v_prevPrio_3784_);
goto v___jp_3801_;
}
}
}
}
else
{
lean_dec(v_snd_3811_);
lean_dec(v_fst_3810_);
lean_dec(v_prevSize_3798_);
lean_dec(v_snd_3794_);
lean_dec(v_fst_3793_);
lean_dec(v_errorMsg_3791_);
lean_dec(v_pos_3790_);
lean_dec(v_lhsPrec_3789_);
lean_dec(v_prevPrio_3784_);
goto v___jp_3801_;
}
v___jp_3801_:
{
lean_object* v___x_3802_; lean_object* v___x_3804_; 
v___x_3802_ = l_Lean_Parser_ParserState_keepNewError(v_s_3800_, v_startSize_3781_);
if (v_isShared_3797_ == 0)
{
lean_ctor_set(v___x_3796_, 1, v_prio_3785_);
lean_ctor_set(v___x_3796_, 0, v___x_3802_);
v___x_3804_ = v___x_3796_;
goto v_reusejp_3803_;
}
else
{
lean_object* v_reuseFailAlloc_3805_; 
v_reuseFailAlloc_3805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3805_, 0, v___x_3802_);
lean_ctor_set(v_reuseFailAlloc_3805_, 1, v_prio_3785_);
v___x_3804_ = v_reuseFailAlloc_3805_;
goto v_reusejp_3803_;
}
v_reusejp_3803_:
{
return v___x_3804_;
}
}
v___jp_3806_:
{
lean_object* v___x_3807_; lean_object* v___x_3808_; 
v___x_3807_ = l_Lean_Parser_ParserState_keepPrevError(v_s_3800_, v_prevSize_3798_, v_pos_3790_, v_errorMsg_3791_, v_lhsPrec_3789_);
lean_dec(v_prevSize_3798_);
v___x_3808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3807_);
lean_ctor_set(v___x_3808_, 1, v_prevPrio_3784_);
return v___x_3808_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchStep___boxed(lean_object* v_left_x3f_3851_, lean_object* v_startSize_3852_, lean_object* v_startLhsPrec_3853_, lean_object* v_startPos_3854_, lean_object* v_prevPrio_3855_, lean_object* v_prio_3856_, lean_object* v_p_3857_, lean_object* v_c_3858_, lean_object* v_s_3859_){
_start:
{
lean_object* v_res_3860_; 
v_res_3860_ = l_Lean_Parser_longestMatchStep(v_left_x3f_3851_, v_startSize_3852_, v_startLhsPrec_3853_, v_startPos_3854_, v_prevPrio_3855_, v_prio_3856_, v_p_3857_, v_c_3858_, v_s_3859_);
lean_dec(v_startSize_3852_);
return v_res_3860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchMkResult(lean_object* v_startSize_3861_, lean_object* v_s_3862_){
_start:
{
lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; uint8_t v___x_3866_; 
v___x_3863_ = lean_unsigned_to_nat(1u);
v___x_3864_ = lean_nat_add(v_startSize_3861_, v___x_3863_);
v___x_3865_ = l_Lean_Parser_ParserState_stackSize(v_s_3862_);
v___x_3866_ = lean_nat_dec_lt(v___x_3864_, v___x_3865_);
lean_dec(v___x_3865_);
lean_dec(v___x_3864_);
if (v___x_3866_ == 0)
{
return v_s_3862_;
}
else
{
lean_object* v___x_3867_; lean_object* v___x_3868_; 
v___x_3867_ = ((lean_object*)(l_Lean_Parser_orelseFnCore___lam__0___closed__1));
v___x_3868_ = l_Lean_Parser_ParserState_mkNode(v_s_3862_, v___x_3867_, v_startSize_3861_);
return v___x_3868_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchMkResult___boxed(lean_object* v_startSize_3869_, lean_object* v_s_3870_){
_start:
{
lean_object* v_res_3871_; 
v_res_3871_ = l_Lean_Parser_longestMatchMkResult(v_startSize_3869_, v_s_3870_);
lean_dec(v_startSize_3869_);
return v_res_3871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse(lean_object* v_left_x3f_3872_, lean_object* v_startSize_3873_, lean_object* v_startLhsPrec_3874_, lean_object* v_startPos_3875_, lean_object* v_prevPrio_3876_, lean_object* v_ps_3877_, lean_object* v_a_3878_, lean_object* v_a_3879_){
_start:
{
if (lean_obj_tag(v_ps_3877_) == 0)
{
lean_object* v___x_3880_; 
lean_dec_ref(v_a_3878_);
lean_dec(v_prevPrio_3876_);
lean_dec(v_startPos_3875_);
lean_dec(v_startLhsPrec_3874_);
lean_dec(v_left_x3f_3872_);
v___x_3880_ = l_Lean_Parser_longestMatchMkResult(v_startSize_3873_, v_a_3879_);
return v___x_3880_;
}
else
{
lean_object* v_head_3881_; lean_object* v_fst_3882_; lean_object* v_tail_3883_; lean_object* v_snd_3884_; lean_object* v_fn_3885_; lean_object* v___x_3886_; lean_object* v_fst_3887_; lean_object* v_snd_3888_; 
v_head_3881_ = lean_ctor_get(v_ps_3877_, 0);
lean_inc(v_head_3881_);
v_fst_3882_ = lean_ctor_get(v_head_3881_, 0);
lean_inc(v_fst_3882_);
v_tail_3883_ = lean_ctor_get(v_ps_3877_, 1);
lean_inc(v_tail_3883_);
lean_dec_ref_known(v_ps_3877_, 2);
v_snd_3884_ = lean_ctor_get(v_head_3881_, 1);
lean_inc(v_snd_3884_);
lean_dec(v_head_3881_);
v_fn_3885_ = lean_ctor_get(v_fst_3882_, 1);
lean_inc_ref(v_fn_3885_);
lean_dec(v_fst_3882_);
lean_inc_ref(v_a_3878_);
lean_inc(v_startPos_3875_);
lean_inc(v_startLhsPrec_3874_);
lean_inc(v_left_x3f_3872_);
v___x_3886_ = l_Lean_Parser_longestMatchStep(v_left_x3f_3872_, v_startSize_3873_, v_startLhsPrec_3874_, v_startPos_3875_, v_prevPrio_3876_, v_snd_3884_, v_fn_3885_, v_a_3878_, v_a_3879_);
v_fst_3887_ = lean_ctor_get(v___x_3886_, 0);
lean_inc(v_fst_3887_);
v_snd_3888_ = lean_ctor_get(v___x_3886_, 1);
lean_inc(v_snd_3888_);
lean_dec_ref(v___x_3886_);
v_prevPrio_3876_ = v_snd_3888_;
v_ps_3877_ = v_tail_3883_;
v_a_3879_ = v_fst_3887_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse___boxed(lean_object* v_left_x3f_3890_, lean_object* v_startSize_3891_, lean_object* v_startLhsPrec_3892_, lean_object* v_startPos_3893_, lean_object* v_prevPrio_3894_, lean_object* v_ps_3895_, lean_object* v_a_3896_, lean_object* v_a_3897_){
_start:
{
lean_object* v_res_3898_; 
v_res_3898_ = l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse(v_left_x3f_3890_, v_startSize_3891_, v_startLhsPrec_3892_, v_startPos_3893_, v_prevPrio_3894_, v_ps_3895_, v_a_3896_, v_a_3897_);
lean_dec(v_startSize_3891_);
return v_res_3898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFnAux(lean_object* v_left_x3f_3899_, lean_object* v_startSize_3900_, lean_object* v_startLhsPrec_3901_, lean_object* v_startPos_3902_, lean_object* v_prevPrio_3903_, lean_object* v_ps_3904_, lean_object* v_a_3905_, lean_object* v_a_3906_){
_start:
{
lean_object* v___x_3907_; 
v___x_3907_ = l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse(v_left_x3f_3899_, v_startSize_3900_, v_startLhsPrec_3901_, v_startPos_3902_, v_prevPrio_3903_, v_ps_3904_, v_a_3905_, v_a_3906_);
return v___x_3907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFnAux___boxed(lean_object* v_left_x3f_3908_, lean_object* v_startSize_3909_, lean_object* v_startLhsPrec_3910_, lean_object* v_startPos_3911_, lean_object* v_prevPrio_3912_, lean_object* v_ps_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_){
_start:
{
lean_object* v_res_3916_; 
v_res_3916_ = l_Lean_Parser_longestMatchFnAux(v_left_x3f_3908_, v_startSize_3909_, v_startLhsPrec_3910_, v_startPos_3911_, v_prevPrio_3912_, v_ps_3913_, v_a_3914_, v_a_3915_);
lean_dec(v_startSize_3909_);
return v_res_3916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFn(lean_object* v_left_x3f_3918_, lean_object* v_x_3919_, lean_object* v_a_3920_, lean_object* v_a_3921_){
_start:
{
if (lean_obj_tag(v_x_3919_) == 0)
{
lean_object* v___x_3922_; lean_object* v___x_3923_; 
lean_dec_ref(v_a_3920_);
lean_dec(v_left_x3f_3918_);
v___x_3922_ = ((lean_object*)(l_Lean_Parser_longestMatchFn___closed__0));
v___x_3923_ = l_Lean_Parser_ParserState_mkError(v_a_3921_, v___x_3922_);
return v___x_3923_;
}
else
{
lean_object* v_tail_3924_; 
v_tail_3924_ = lean_ctor_get(v_x_3919_, 1);
if (lean_obj_tag(v_tail_3924_) == 0)
{
lean_object* v_head_3925_; lean_object* v_fst_3926_; lean_object* v_lhsPrec_3927_; lean_object* v_fn_3928_; lean_object* v___x_3929_; 
v_head_3925_ = lean_ctor_get(v_x_3919_, 0);
lean_inc(v_head_3925_);
lean_dec_ref_known(v_x_3919_, 2);
v_fst_3926_ = lean_ctor_get(v_head_3925_, 0);
lean_inc(v_fst_3926_);
lean_dec(v_head_3925_);
v_lhsPrec_3927_ = lean_ctor_get(v_a_3921_, 1);
lean_inc(v_lhsPrec_3927_);
v_fn_3928_ = lean_ctor_get(v_fst_3926_, 1);
lean_inc_ref(v_fn_3928_);
lean_dec(v_fst_3926_);
v___x_3929_ = l_Lean_Parser_runLongestMatchParser(v_left_x3f_3918_, v_lhsPrec_3927_, v_fn_3928_, v_a_3920_, v_a_3921_);
return v___x_3929_;
}
else
{
lean_object* v_head_3930_; lean_object* v_fst_3931_; lean_object* v_lhsPrec_3932_; lean_object* v_pos_3933_; lean_object* v_snd_3934_; lean_object* v_fn_3935_; lean_object* v_startSize_3936_; lean_object* v_s_3937_; lean_object* v___x_3938_; 
lean_inc(v_tail_3924_);
v_head_3930_ = lean_ctor_get(v_x_3919_, 0);
lean_inc(v_head_3930_);
lean_dec_ref_known(v_x_3919_, 2);
v_fst_3931_ = lean_ctor_get(v_head_3930_, 0);
lean_inc(v_fst_3931_);
v_lhsPrec_3932_ = lean_ctor_get(v_a_3921_, 1);
lean_inc_n(v_lhsPrec_3932_, 2);
v_pos_3933_ = lean_ctor_get(v_a_3921_, 2);
lean_inc(v_pos_3933_);
v_snd_3934_ = lean_ctor_get(v_head_3930_, 1);
lean_inc(v_snd_3934_);
lean_dec(v_head_3930_);
v_fn_3935_ = lean_ctor_get(v_fst_3931_, 1);
lean_inc_ref(v_fn_3935_);
lean_dec(v_fst_3931_);
v_startSize_3936_ = l_Lean_Parser_ParserState_stackSize(v_a_3921_);
lean_inc_ref(v_a_3920_);
lean_inc(v_left_x3f_3918_);
v_s_3937_ = l_Lean_Parser_runLongestMatchParser(v_left_x3f_3918_, v_lhsPrec_3932_, v_fn_3935_, v_a_3920_, v_a_3921_);
v___x_3938_ = l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse(v_left_x3f_3918_, v_startSize_3936_, v_lhsPrec_3932_, v_pos_3933_, v_snd_3934_, v_tail_3924_, v_a_3920_, v_s_3937_);
lean_dec(v_startSize_3936_);
return v___x_3938_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_anyOfFn(lean_object* v_x_3940_, lean_object* v_x_3941_, lean_object* v_x_3942_){
_start:
{
if (lean_obj_tag(v_x_3940_) == 0)
{
lean_object* v___x_3943_; lean_object* v___x_3944_; 
lean_dec_ref(v_x_3941_);
v___x_3943_ = ((lean_object*)(l_Lean_Parser_anyOfFn___closed__0));
v___x_3944_ = l_Lean_Parser_ParserState_mkError(v_x_3942_, v___x_3943_);
return v___x_3944_;
}
else
{
lean_object* v_tail_3945_; 
v_tail_3945_ = lean_ctor_get(v_x_3940_, 1);
if (lean_obj_tag(v_tail_3945_) == 0)
{
lean_object* v_head_3946_; lean_object* v_fn_3947_; lean_object* v___x_3948_; 
v_head_3946_ = lean_ctor_get(v_x_3940_, 0);
lean_inc(v_head_3946_);
lean_dec_ref_known(v_x_3940_, 2);
v_fn_3947_ = lean_ctor_get(v_head_3946_, 1);
lean_inc_ref(v_fn_3947_);
lean_dec(v_head_3946_);
v___x_3948_ = lean_apply_2(v_fn_3947_, v_x_3941_, v_x_3942_);
return v___x_3948_;
}
else
{
lean_object* v_head_3949_; lean_object* v_fn_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; 
lean_inc(v_tail_3945_);
v_head_3949_ = lean_ctor_get(v_x_3940_, 0);
lean_inc(v_head_3949_);
lean_dec_ref_known(v_x_3940_, 2);
v_fn_3950_ = lean_ctor_get(v_head_3949_, 1);
lean_inc_ref(v_fn_3950_);
lean_dec(v_head_3949_);
v___x_3951_ = lean_alloc_closure((void*)(l_Lean_Parser_anyOfFn), 3, 1);
lean_closure_set(v___x_3951_, 0, v_tail_3945_);
v___x_3952_ = l_Lean_Parser_orelseFn(v_fn_3950_, v___x_3951_, v_x_3941_, v_x_3942_);
return v___x_3952_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColEqFn(lean_object* v_errorMsg_3953_, lean_object* v_c_3954_, lean_object* v_s_3955_){
_start:
{
lean_object* v_toCacheableParserContext_3956_; lean_object* v_savedPos_x3f_3957_; 
v_toCacheableParserContext_3956_ = lean_ctor_get(v_c_3954_, 2);
v_savedPos_x3f_3957_ = lean_ctor_get(v_toCacheableParserContext_3956_, 2);
lean_inc(v_savedPos_x3f_3957_);
if (lean_obj_tag(v_savedPos_x3f_3957_) == 0)
{
lean_dec_ref(v_c_3954_);
lean_dec_ref(v_errorMsg_3953_);
return v_s_3955_;
}
else
{
lean_object* v_toInputContext_3958_; lean_object* v_val_3959_; lean_object* v_fileMap_3960_; lean_object* v_pos_3961_; lean_object* v_savedPos_3962_; lean_object* v_pos_3963_; lean_object* v_column_3964_; lean_object* v_column_3965_; uint8_t v___x_3966_; 
v_toInputContext_3958_ = lean_ctor_get(v_c_3954_, 0);
lean_inc_ref(v_toInputContext_3958_);
lean_dec_ref(v_c_3954_);
v_val_3959_ = lean_ctor_get(v_savedPos_x3f_3957_, 0);
lean_inc(v_val_3959_);
lean_dec_ref_known(v_savedPos_x3f_3957_, 1);
v_fileMap_3960_ = lean_ctor_get(v_toInputContext_3958_, 2);
lean_inc_ref_n(v_fileMap_3960_, 2);
lean_dec_ref(v_toInputContext_3958_);
v_pos_3961_ = lean_ctor_get(v_s_3955_, 2);
v_savedPos_3962_ = l_Lean_FileMap_toPosition(v_fileMap_3960_, v_val_3959_);
lean_dec(v_val_3959_);
v_pos_3963_ = l_Lean_FileMap_toPosition(v_fileMap_3960_, v_pos_3961_);
v_column_3964_ = lean_ctor_get(v_pos_3963_, 1);
lean_inc(v_column_3964_);
lean_dec_ref(v_pos_3963_);
v_column_3965_ = lean_ctor_get(v_savedPos_3962_, 1);
lean_inc(v_column_3965_);
lean_dec_ref(v_savedPos_3962_);
v___x_3966_ = lean_nat_dec_eq(v_column_3964_, v_column_3965_);
lean_dec(v_column_3965_);
lean_dec(v_column_3964_);
if (v___x_3966_ == 0)
{
lean_object* v___x_3967_; 
v___x_3967_ = l_Lean_Parser_ParserState_mkError(v_s_3955_, v_errorMsg_3953_);
return v___x_3967_;
}
else
{
lean_dec_ref(v_errorMsg_3953_);
return v_s_3955_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColEq(lean_object* v_errorMsg_3968_){
_start:
{
lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
v___x_3969_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_3970_ = lean_alloc_closure((void*)(l_Lean_Parser_checkColEqFn), 3, 1);
lean_closure_set(v___x_3970_, 0, v_errorMsg_3968_);
v___x_3971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3971_, 0, v___x_3969_);
lean_ctor_set(v___x_3971_, 1, v___x_3970_);
return v___x_3971_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1(){
_start:
{
lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; 
v___x_3979_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1));
v___x_3980_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__2));
v___x_3981_ = l_Lean_addBuiltinDocString(v___x_3979_, v___x_3980_);
return v___x_3981_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___boxed(lean_object* v_a_3982_){
_start:
{
lean_object* v_res_3983_; 
v_res_3983_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1();
return v_res_3983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGeFn(lean_object* v_errorMsg_3984_, lean_object* v_c_3985_, lean_object* v_s_3986_){
_start:
{
lean_object* v_toCacheableParserContext_3987_; lean_object* v_savedPos_x3f_3988_; 
v_toCacheableParserContext_3987_ = lean_ctor_get(v_c_3985_, 2);
v_savedPos_x3f_3988_ = lean_ctor_get(v_toCacheableParserContext_3987_, 2);
lean_inc(v_savedPos_x3f_3988_);
if (lean_obj_tag(v_savedPos_x3f_3988_) == 0)
{
lean_dec_ref(v_c_3985_);
lean_dec_ref(v_errorMsg_3984_);
return v_s_3986_;
}
else
{
lean_object* v_toInputContext_3989_; lean_object* v_val_3990_; lean_object* v_fileMap_3991_; lean_object* v_pos_3992_; lean_object* v_savedPos_3993_; lean_object* v_column_3994_; lean_object* v_pos_3995_; lean_object* v_column_3996_; uint8_t v___x_3997_; 
v_toInputContext_3989_ = lean_ctor_get(v_c_3985_, 0);
lean_inc_ref(v_toInputContext_3989_);
lean_dec_ref(v_c_3985_);
v_val_3990_ = lean_ctor_get(v_savedPos_x3f_3988_, 0);
lean_inc(v_val_3990_);
lean_dec_ref_known(v_savedPos_x3f_3988_, 1);
v_fileMap_3991_ = lean_ctor_get(v_toInputContext_3989_, 2);
lean_inc_ref_n(v_fileMap_3991_, 2);
lean_dec_ref(v_toInputContext_3989_);
v_pos_3992_ = lean_ctor_get(v_s_3986_, 2);
v_savedPos_3993_ = l_Lean_FileMap_toPosition(v_fileMap_3991_, v_val_3990_);
lean_dec(v_val_3990_);
v_column_3994_ = lean_ctor_get(v_savedPos_3993_, 1);
lean_inc(v_column_3994_);
lean_dec_ref(v_savedPos_3993_);
v_pos_3995_ = l_Lean_FileMap_toPosition(v_fileMap_3991_, v_pos_3992_);
v_column_3996_ = lean_ctor_get(v_pos_3995_, 1);
lean_inc(v_column_3996_);
lean_dec_ref(v_pos_3995_);
v___x_3997_ = lean_nat_dec_le(v_column_3994_, v_column_3996_);
lean_dec(v_column_3996_);
lean_dec(v_column_3994_);
if (v___x_3997_ == 0)
{
lean_object* v___x_3998_; 
v___x_3998_ = l_Lean_Parser_ParserState_mkError(v_s_3986_, v_errorMsg_3984_);
return v___x_3998_;
}
else
{
lean_dec_ref(v_errorMsg_3984_);
return v_s_3986_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGe(lean_object* v_errorMsg_3999_){
_start:
{
lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; 
v___x_4000_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_4001_ = lean_alloc_closure((void*)(l_Lean_Parser_checkColGeFn), 3, 1);
lean_closure_set(v___x_4001_, 0, v_errorMsg_3999_);
v___x_4002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4002_, 0, v___x_4000_);
lean_ctor_set(v___x_4002_, 1, v___x_4001_);
return v___x_4002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1(){
_start:
{
lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; 
v___x_4010_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1));
v___x_4011_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__2));
v___x_4012_ = l_Lean_addBuiltinDocString(v___x_4010_, v___x_4011_);
return v___x_4012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___boxed(lean_object* v_a_4013_){
_start:
{
lean_object* v_res_4014_; 
v_res_4014_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1();
return v_res_4014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGtFn(lean_object* v_errorMsg_4015_, lean_object* v_c_4016_, lean_object* v_s_4017_){
_start:
{
lean_object* v_toCacheableParserContext_4018_; lean_object* v_savedPos_x3f_4019_; 
v_toCacheableParserContext_4018_ = lean_ctor_get(v_c_4016_, 2);
v_savedPos_x3f_4019_ = lean_ctor_get(v_toCacheableParserContext_4018_, 2);
lean_inc(v_savedPos_x3f_4019_);
if (lean_obj_tag(v_savedPos_x3f_4019_) == 0)
{
lean_dec_ref(v_c_4016_);
lean_dec_ref(v_errorMsg_4015_);
return v_s_4017_;
}
else
{
lean_object* v_toInputContext_4020_; lean_object* v_val_4021_; lean_object* v_fileMap_4022_; lean_object* v_pos_4023_; lean_object* v_savedPos_4024_; lean_object* v_column_4025_; lean_object* v_pos_4026_; lean_object* v_column_4027_; uint8_t v___x_4028_; 
v_toInputContext_4020_ = lean_ctor_get(v_c_4016_, 0);
lean_inc_ref(v_toInputContext_4020_);
lean_dec_ref(v_c_4016_);
v_val_4021_ = lean_ctor_get(v_savedPos_x3f_4019_, 0);
lean_inc(v_val_4021_);
lean_dec_ref_known(v_savedPos_x3f_4019_, 1);
v_fileMap_4022_ = lean_ctor_get(v_toInputContext_4020_, 2);
lean_inc_ref_n(v_fileMap_4022_, 2);
lean_dec_ref(v_toInputContext_4020_);
v_pos_4023_ = lean_ctor_get(v_s_4017_, 2);
v_savedPos_4024_ = l_Lean_FileMap_toPosition(v_fileMap_4022_, v_val_4021_);
lean_dec(v_val_4021_);
v_column_4025_ = lean_ctor_get(v_savedPos_4024_, 1);
lean_inc(v_column_4025_);
lean_dec_ref(v_savedPos_4024_);
v_pos_4026_ = l_Lean_FileMap_toPosition(v_fileMap_4022_, v_pos_4023_);
v_column_4027_ = lean_ctor_get(v_pos_4026_, 1);
lean_inc(v_column_4027_);
lean_dec_ref(v_pos_4026_);
v___x_4028_ = lean_nat_dec_lt(v_column_4025_, v_column_4027_);
lean_dec(v_column_4027_);
lean_dec(v_column_4025_);
if (v___x_4028_ == 0)
{
lean_object* v___x_4029_; 
v___x_4029_ = l_Lean_Parser_ParserState_mkError(v_s_4017_, v_errorMsg_4015_);
return v___x_4029_;
}
else
{
lean_dec_ref(v_errorMsg_4015_);
return v_s_4017_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGt(lean_object* v_errorMsg_4030_){
_start:
{
lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; 
v___x_4031_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_4032_ = lean_alloc_closure((void*)(l_Lean_Parser_checkColGtFn), 3, 1);
lean_closure_set(v___x_4032_, 0, v_errorMsg_4030_);
v___x_4033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4033_, 0, v___x_4031_);
lean_ctor_set(v___x_4033_, 1, v___x_4032_);
return v___x_4033_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1(){
_start:
{
lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; 
v___x_4041_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1));
v___x_4042_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__2));
v___x_4043_ = l_Lean_addBuiltinDocString(v___x_4041_, v___x_4042_);
return v___x_4043_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___boxed(lean_object* v_a_4044_){
_start:
{
lean_object* v_res_4045_; 
v_res_4045_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1();
return v_res_4045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLineEqFn(lean_object* v_errorMsg_4046_, lean_object* v_c_4047_, lean_object* v_s_4048_){
_start:
{
lean_object* v_toCacheableParserContext_4049_; lean_object* v_savedPos_x3f_4050_; 
v_toCacheableParserContext_4049_ = lean_ctor_get(v_c_4047_, 2);
v_savedPos_x3f_4050_ = lean_ctor_get(v_toCacheableParserContext_4049_, 2);
lean_inc(v_savedPos_x3f_4050_);
if (lean_obj_tag(v_savedPos_x3f_4050_) == 0)
{
lean_dec_ref(v_c_4047_);
lean_dec_ref(v_errorMsg_4046_);
return v_s_4048_;
}
else
{
lean_object* v_toInputContext_4051_; lean_object* v_val_4052_; lean_object* v_fileMap_4053_; lean_object* v_pos_4054_; lean_object* v_savedPos_4055_; lean_object* v_pos_4056_; lean_object* v_line_4057_; lean_object* v_line_4058_; uint8_t v___x_4059_; 
v_toInputContext_4051_ = lean_ctor_get(v_c_4047_, 0);
lean_inc_ref(v_toInputContext_4051_);
lean_dec_ref(v_c_4047_);
v_val_4052_ = lean_ctor_get(v_savedPos_x3f_4050_, 0);
lean_inc(v_val_4052_);
lean_dec_ref_known(v_savedPos_x3f_4050_, 1);
v_fileMap_4053_ = lean_ctor_get(v_toInputContext_4051_, 2);
lean_inc_ref_n(v_fileMap_4053_, 2);
lean_dec_ref(v_toInputContext_4051_);
v_pos_4054_ = lean_ctor_get(v_s_4048_, 2);
v_savedPos_4055_ = l_Lean_FileMap_toPosition(v_fileMap_4053_, v_val_4052_);
lean_dec(v_val_4052_);
v_pos_4056_ = l_Lean_FileMap_toPosition(v_fileMap_4053_, v_pos_4054_);
v_line_4057_ = lean_ctor_get(v_pos_4056_, 0);
lean_inc(v_line_4057_);
lean_dec_ref(v_pos_4056_);
v_line_4058_ = lean_ctor_get(v_savedPos_4055_, 0);
lean_inc(v_line_4058_);
lean_dec_ref(v_savedPos_4055_);
v___x_4059_ = lean_nat_dec_eq(v_line_4057_, v_line_4058_);
lean_dec(v_line_4058_);
lean_dec(v_line_4057_);
if (v___x_4059_ == 0)
{
lean_object* v___x_4060_; 
v___x_4060_ = l_Lean_Parser_ParserState_mkError(v_s_4048_, v_errorMsg_4046_);
return v___x_4060_;
}
else
{
lean_dec_ref(v_errorMsg_4046_);
return v_s_4048_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLineEq(lean_object* v_errorMsg_4061_){
_start:
{
lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; 
v___x_4062_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_4063_ = lean_alloc_closure((void*)(l_Lean_Parser_checkLineEqFn), 3, 1);
lean_closure_set(v___x_4063_, 0, v_errorMsg_4061_);
v___x_4064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4064_, 0, v___x_4062_);
lean_ctor_set(v___x_4064_, 1, v___x_4063_);
return v___x_4064_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1(){
_start:
{
lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; 
v___x_4072_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1));
v___x_4073_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__2));
v___x_4074_ = l_Lean_addBuiltinDocString(v___x_4072_, v___x_4073_);
return v___x_4074_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___boxed(lean_object* v_a_4075_){
_start:
{
lean_object* v_res_4076_; 
v_res_4076_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1();
return v_res_4076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__0(lean_object* v___y_4077_, lean_object* v_x_4078_){
_start:
{
lean_object* v_prec_4079_; lean_object* v_quotDepth_4080_; uint8_t v_suppressInsideQuot_4081_; lean_object* v_forbiddenTks_4082_; lean_object* v___x_4084_; uint8_t v_isShared_4085_; uint8_t v_isSharedCheck_4091_; 
v_prec_4079_ = lean_ctor_get(v_x_4078_, 0);
v_quotDepth_4080_ = lean_ctor_get(v_x_4078_, 1);
v_suppressInsideQuot_4081_ = lean_ctor_get_uint8(v_x_4078_, sizeof(void*)*4);
v_forbiddenTks_4082_ = lean_ctor_get(v_x_4078_, 3);
v_isSharedCheck_4091_ = !lean_is_exclusive(v_x_4078_);
if (v_isSharedCheck_4091_ == 0)
{
lean_object* v_unused_4092_; 
v_unused_4092_ = lean_ctor_get(v_x_4078_, 2);
lean_dec(v_unused_4092_);
v___x_4084_ = v_x_4078_;
v_isShared_4085_ = v_isSharedCheck_4091_;
goto v_resetjp_4083_;
}
else
{
lean_inc(v_forbiddenTks_4082_);
lean_inc(v_quotDepth_4080_);
lean_inc(v_prec_4079_);
lean_dec(v_x_4078_);
v___x_4084_ = lean_box(0);
v_isShared_4085_ = v_isSharedCheck_4091_;
goto v_resetjp_4083_;
}
v_resetjp_4083_:
{
lean_object* v_pos_4086_; lean_object* v___x_4087_; lean_object* v___x_4089_; 
v_pos_4086_ = lean_ctor_get(v___y_4077_, 2);
lean_inc(v_pos_4086_);
v___x_4087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4087_, 0, v_pos_4086_);
if (v_isShared_4085_ == 0)
{
lean_ctor_set(v___x_4084_, 2, v___x_4087_);
v___x_4089_ = v___x_4084_;
goto v_reusejp_4088_;
}
else
{
lean_object* v_reuseFailAlloc_4090_; 
v_reuseFailAlloc_4090_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4090_, 0, v_prec_4079_);
lean_ctor_set(v_reuseFailAlloc_4090_, 1, v_quotDepth_4080_);
lean_ctor_set(v_reuseFailAlloc_4090_, 2, v___x_4087_);
lean_ctor_set(v_reuseFailAlloc_4090_, 3, v_forbiddenTks_4082_);
lean_ctor_set_uint8(v_reuseFailAlloc_4090_, sizeof(void*)*4, v_suppressInsideQuot_4081_);
v___x_4089_ = v_reuseFailAlloc_4090_;
goto v_reusejp_4088_;
}
v_reusejp_4088_:
{
return v___x_4089_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__0___boxed(lean_object* v___y_4093_, lean_object* v_x_4094_){
_start:
{
lean_object* v_res_4095_; 
v_res_4095_ = l_Lean_Parser_withPosition___lam__0(v___y_4093_, v_x_4094_);
lean_dec_ref(v___y_4093_);
return v_res_4095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__1(lean_object* v_fn_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_){
_start:
{
lean_object* v___f_4099_; lean_object* v___x_4100_; 
lean_inc_ref(v___y_4098_);
v___f_4099_ = lean_alloc_closure((void*)(l_Lean_Parser_withPosition___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4099_, 0, v___y_4098_);
v___x_4100_ = l_Lean_Parser_adaptCacheableContextFn(v___f_4099_, v_fn_4096_, v___y_4097_, v___y_4098_);
return v___x_4100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition(lean_object* v_p_4101_){
_start:
{
lean_object* v_info_4102_; lean_object* v_fn_4103_; lean_object* v___x_4105_; uint8_t v_isShared_4106_; uint8_t v_isSharedCheck_4111_; 
v_info_4102_ = lean_ctor_get(v_p_4101_, 0);
v_fn_4103_ = lean_ctor_get(v_p_4101_, 1);
v_isSharedCheck_4111_ = !lean_is_exclusive(v_p_4101_);
if (v_isSharedCheck_4111_ == 0)
{
v___x_4105_ = v_p_4101_;
v_isShared_4106_ = v_isSharedCheck_4111_;
goto v_resetjp_4104_;
}
else
{
lean_inc(v_fn_4103_);
lean_inc(v_info_4102_);
lean_dec(v_p_4101_);
v___x_4105_ = lean_box(0);
v_isShared_4106_ = v_isSharedCheck_4111_;
goto v_resetjp_4104_;
}
v_resetjp_4104_:
{
lean_object* v___f_4107_; lean_object* v___x_4109_; 
v___f_4107_ = lean_alloc_closure((void*)(l_Lean_Parser_withPosition___lam__1), 3, 1);
lean_closure_set(v___f_4107_, 0, v_fn_4103_);
if (v_isShared_4106_ == 0)
{
lean_ctor_set(v___x_4105_, 1, v___f_4107_);
v___x_4109_ = v___x_4105_;
goto v_reusejp_4108_;
}
else
{
lean_object* v_reuseFailAlloc_4110_; 
v_reuseFailAlloc_4110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4110_, 0, v_info_4102_);
lean_ctor_set(v_reuseFailAlloc_4110_, 1, v___f_4107_);
v___x_4109_ = v_reuseFailAlloc_4110_;
goto v_reusejp_4108_;
}
v_reusejp_4108_:
{
return v___x_4109_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1(){
_start:
{
lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; 
v___x_4119_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__1));
v___x_4120_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__2));
v___x_4121_ = l_Lean_addBuiltinDocString(v___x_4119_, v___x_4120_);
return v___x_4121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___boxed(lean_object* v_a_4122_){
_start:
{
lean_object* v_res_4123_; 
v_res_4123_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1();
return v_res_4123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__0(lean_object* v_prev_4124_, lean_object* v_pos_4125_, lean_object* v_c_4126_){
_start:
{
uint8_t v___x_4127_; 
v___x_4127_ = l_Lean_Parser_checkTailLinebreak(v_prev_4124_);
if (v___x_4127_ == 0)
{
lean_dec(v_pos_4125_);
return v_c_4126_;
}
else
{
lean_object* v_prec_4128_; lean_object* v_quotDepth_4129_; uint8_t v_suppressInsideQuot_4130_; lean_object* v_forbiddenTks_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4139_; 
v_prec_4128_ = lean_ctor_get(v_c_4126_, 0);
v_quotDepth_4129_ = lean_ctor_get(v_c_4126_, 1);
v_suppressInsideQuot_4130_ = lean_ctor_get_uint8(v_c_4126_, sizeof(void*)*4);
v_forbiddenTks_4131_ = lean_ctor_get(v_c_4126_, 3);
v_isSharedCheck_4139_ = !lean_is_exclusive(v_c_4126_);
if (v_isSharedCheck_4139_ == 0)
{
lean_object* v_unused_4140_; 
v_unused_4140_ = lean_ctor_get(v_c_4126_, 2);
lean_dec(v_unused_4140_);
v___x_4133_ = v_c_4126_;
v_isShared_4134_ = v_isSharedCheck_4139_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_forbiddenTks_4131_);
lean_inc(v_quotDepth_4129_);
lean_inc(v_prec_4128_);
lean_dec(v_c_4126_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4139_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
lean_object* v___x_4135_; lean_object* v___x_4137_; 
v___x_4135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4135_, 0, v_pos_4125_);
if (v_isShared_4134_ == 0)
{
lean_ctor_set(v___x_4133_, 2, v___x_4135_);
v___x_4137_ = v___x_4133_;
goto v_reusejp_4136_;
}
else
{
lean_object* v_reuseFailAlloc_4138_; 
v_reuseFailAlloc_4138_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4138_, 0, v_prec_4128_);
lean_ctor_set(v_reuseFailAlloc_4138_, 1, v_quotDepth_4129_);
lean_ctor_set(v_reuseFailAlloc_4138_, 2, v___x_4135_);
lean_ctor_set(v_reuseFailAlloc_4138_, 3, v_forbiddenTks_4131_);
lean_ctor_set_uint8(v_reuseFailAlloc_4138_, sizeof(void*)*4, v_suppressInsideQuot_4130_);
v___x_4137_ = v_reuseFailAlloc_4138_;
goto v_reusejp_4136_;
}
v_reusejp_4136_:
{
return v___x_4137_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__0___boxed(lean_object* v_prev_4141_, lean_object* v_pos_4142_, lean_object* v_c_4143_){
_start:
{
lean_object* v_res_4144_; 
v_res_4144_ = l_Lean_Parser_withPositionAfterLinebreak___lam__0(v_prev_4141_, v_pos_4142_, v_c_4143_);
lean_dec(v_prev_4141_);
return v_res_4144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__1(lean_object* v_fn_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_){
_start:
{
lean_object* v_stxStack_4148_; lean_object* v_pos_4149_; lean_object* v_prev_4150_; lean_object* v___f_4151_; lean_object* v___x_4152_; 
v_stxStack_4148_ = lean_ctor_get(v___y_4147_, 0);
v_pos_4149_ = lean_ctor_get(v___y_4147_, 2);
v_prev_4150_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_4148_);
lean_inc(v_pos_4149_);
v___f_4151_ = lean_alloc_closure((void*)(l_Lean_Parser_withPositionAfterLinebreak___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4151_, 0, v_prev_4150_);
lean_closure_set(v___f_4151_, 1, v_pos_4149_);
v___x_4152_ = l_Lean_Parser_adaptCacheableContextFn(v___f_4151_, v_fn_4145_, v___y_4146_, v___y_4147_);
return v___x_4152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak(lean_object* v_p_4153_){
_start:
{
lean_object* v_info_4154_; lean_object* v_fn_4155_; lean_object* v___x_4157_; uint8_t v_isShared_4158_; uint8_t v_isSharedCheck_4163_; 
v_info_4154_ = lean_ctor_get(v_p_4153_, 0);
v_fn_4155_ = lean_ctor_get(v_p_4153_, 1);
v_isSharedCheck_4163_ = !lean_is_exclusive(v_p_4153_);
if (v_isSharedCheck_4163_ == 0)
{
v___x_4157_ = v_p_4153_;
v_isShared_4158_ = v_isSharedCheck_4163_;
goto v_resetjp_4156_;
}
else
{
lean_inc(v_fn_4155_);
lean_inc(v_info_4154_);
lean_dec(v_p_4153_);
v___x_4157_ = lean_box(0);
v_isShared_4158_ = v_isSharedCheck_4163_;
goto v_resetjp_4156_;
}
v_resetjp_4156_:
{
lean_object* v___f_4159_; lean_object* v___x_4161_; 
v___f_4159_ = lean_alloc_closure((void*)(l_Lean_Parser_withPositionAfterLinebreak___lam__1), 3, 1);
lean_closure_set(v___f_4159_, 0, v_fn_4155_);
if (v_isShared_4158_ == 0)
{
lean_ctor_set(v___x_4157_, 1, v___f_4159_);
v___x_4161_ = v___x_4157_;
goto v_reusejp_4160_;
}
else
{
lean_object* v_reuseFailAlloc_4162_; 
v_reuseFailAlloc_4162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4162_, 0, v_info_4154_);
lean_ctor_set(v_reuseFailAlloc_4162_, 1, v___f_4159_);
v___x_4161_ = v_reuseFailAlloc_4162_;
goto v_reusejp_4160_;
}
v_reusejp_4160_:
{
return v___x_4161_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition___lam__0(lean_object* v_x_4164_){
_start:
{
lean_object* v_prec_4165_; lean_object* v_quotDepth_4166_; uint8_t v_suppressInsideQuot_4167_; lean_object* v_forbiddenTks_4168_; lean_object* v___x_4170_; uint8_t v_isShared_4171_; uint8_t v_isSharedCheck_4176_; 
v_prec_4165_ = lean_ctor_get(v_x_4164_, 0);
v_quotDepth_4166_ = lean_ctor_get(v_x_4164_, 1);
v_suppressInsideQuot_4167_ = lean_ctor_get_uint8(v_x_4164_, sizeof(void*)*4);
v_forbiddenTks_4168_ = lean_ctor_get(v_x_4164_, 3);
v_isSharedCheck_4176_ = !lean_is_exclusive(v_x_4164_);
if (v_isSharedCheck_4176_ == 0)
{
lean_object* v_unused_4177_; 
v_unused_4177_ = lean_ctor_get(v_x_4164_, 2);
lean_dec(v_unused_4177_);
v___x_4170_ = v_x_4164_;
v_isShared_4171_ = v_isSharedCheck_4176_;
goto v_resetjp_4169_;
}
else
{
lean_inc(v_forbiddenTks_4168_);
lean_inc(v_quotDepth_4166_);
lean_inc(v_prec_4165_);
lean_dec(v_x_4164_);
v___x_4170_ = lean_box(0);
v_isShared_4171_ = v_isSharedCheck_4176_;
goto v_resetjp_4169_;
}
v_resetjp_4169_:
{
lean_object* v___x_4172_; lean_object* v___x_4174_; 
v___x_4172_ = lean_box(0);
if (v_isShared_4171_ == 0)
{
lean_ctor_set(v___x_4170_, 2, v___x_4172_);
v___x_4174_ = v___x_4170_;
goto v_reusejp_4173_;
}
else
{
lean_object* v_reuseFailAlloc_4175_; 
v_reuseFailAlloc_4175_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4175_, 0, v_prec_4165_);
lean_ctor_set(v_reuseFailAlloc_4175_, 1, v_quotDepth_4166_);
lean_ctor_set(v_reuseFailAlloc_4175_, 2, v___x_4172_);
lean_ctor_set(v_reuseFailAlloc_4175_, 3, v_forbiddenTks_4168_);
lean_ctor_set_uint8(v_reuseFailAlloc_4175_, sizeof(void*)*4, v_suppressInsideQuot_4167_);
v___x_4174_ = v_reuseFailAlloc_4175_;
goto v_reusejp_4173_;
}
v_reusejp_4173_:
{
return v___x_4174_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition(lean_object* v_p_4179_){
_start:
{
lean_object* v___f_4180_; lean_object* v___x_4181_; 
v___f_4180_ = ((lean_object*)(l_Lean_Parser_withoutPosition___closed__0));
v___x_4181_ = l_Lean_Parser_adaptCacheableContext(v___f_4180_, v_p_4179_);
return v___x_4181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1(){
_start:
{
lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; 
v___x_4189_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__1));
v___x_4190_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__2));
v___x_4191_ = l_Lean_addBuiltinDocString(v___x_4189_, v___x_4190_);
return v___x_4191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___boxed(lean_object* v_a_4192_){
_start:
{
lean_object* v_res_4193_; 
v_res_4193_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1();
return v_res_4193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden___lam__0(lean_object* v_tk_4194_, lean_object* v_c_4195_){
_start:
{
lean_object* v_prec_4196_; lean_object* v_quotDepth_4197_; uint8_t v_suppressInsideQuot_4198_; lean_object* v_savedPos_x3f_4199_; lean_object* v_forbiddenTks_4200_; uint8_t v___x_4201_; 
v_prec_4196_ = lean_ctor_get(v_c_4195_, 0);
v_quotDepth_4197_ = lean_ctor_get(v_c_4195_, 1);
v_suppressInsideQuot_4198_ = lean_ctor_get_uint8(v_c_4195_, sizeof(void*)*4);
v_savedPos_x3f_4199_ = lean_ctor_get(v_c_4195_, 2);
v_forbiddenTks_4200_ = lean_ctor_get(v_c_4195_, 3);
v___x_4201_ = l_Array_contains___at___00Lean_Parser_mkTokenAndFixPos_spec__0(v_forbiddenTks_4200_, v_tk_4194_);
if (v___x_4201_ == 0)
{
lean_object* v___x_4203_; uint8_t v_isShared_4204_; uint8_t v_isSharedCheck_4209_; 
lean_inc_ref(v_forbiddenTks_4200_);
lean_inc(v_savedPos_x3f_4199_);
lean_inc(v_quotDepth_4197_);
lean_inc(v_prec_4196_);
v_isSharedCheck_4209_ = !lean_is_exclusive(v_c_4195_);
if (v_isSharedCheck_4209_ == 0)
{
lean_object* v_unused_4210_; lean_object* v_unused_4211_; lean_object* v_unused_4212_; lean_object* v_unused_4213_; 
v_unused_4210_ = lean_ctor_get(v_c_4195_, 3);
lean_dec(v_unused_4210_);
v_unused_4211_ = lean_ctor_get(v_c_4195_, 2);
lean_dec(v_unused_4211_);
v_unused_4212_ = lean_ctor_get(v_c_4195_, 1);
lean_dec(v_unused_4212_);
v_unused_4213_ = lean_ctor_get(v_c_4195_, 0);
lean_dec(v_unused_4213_);
v___x_4203_ = v_c_4195_;
v_isShared_4204_ = v_isSharedCheck_4209_;
goto v_resetjp_4202_;
}
else
{
lean_dec(v_c_4195_);
v___x_4203_ = lean_box(0);
v_isShared_4204_ = v_isSharedCheck_4209_;
goto v_resetjp_4202_;
}
v_resetjp_4202_:
{
lean_object* v___x_4205_; lean_object* v___x_4207_; 
v___x_4205_ = lean_array_push(v_forbiddenTks_4200_, v_tk_4194_);
if (v_isShared_4204_ == 0)
{
lean_ctor_set(v___x_4203_, 3, v___x_4205_);
v___x_4207_ = v___x_4203_;
goto v_reusejp_4206_;
}
else
{
lean_object* v_reuseFailAlloc_4208_; 
v_reuseFailAlloc_4208_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4208_, 0, v_prec_4196_);
lean_ctor_set(v_reuseFailAlloc_4208_, 1, v_quotDepth_4197_);
lean_ctor_set(v_reuseFailAlloc_4208_, 2, v_savedPos_x3f_4199_);
lean_ctor_set(v_reuseFailAlloc_4208_, 3, v___x_4205_);
lean_ctor_set_uint8(v_reuseFailAlloc_4208_, sizeof(void*)*4, v_suppressInsideQuot_4198_);
v___x_4207_ = v_reuseFailAlloc_4208_;
goto v_reusejp_4206_;
}
v_reusejp_4206_:
{
return v___x_4207_;
}
}
}
else
{
lean_dec_ref(v_tk_4194_);
return v_c_4195_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden(lean_object* v_tk_4214_, lean_object* v_p_4215_){
_start:
{
lean_object* v___f_4216_; lean_object* v___x_4217_; 
v___f_4216_ = lean_alloc_closure((void*)(l_Lean_Parser_withForbidden___lam__0), 2, 1);
lean_closure_set(v___f_4216_, 0, v_tk_4214_);
v___x_4217_ = l_Lean_Parser_adaptCacheableContext(v___f_4216_, v_p_4215_);
return v___x_4217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1(){
_start:
{
lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; 
v___x_4225_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__1));
v___x_4226_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__2));
v___x_4227_ = l_Lean_addBuiltinDocString(v___x_4225_, v___x_4226_);
return v___x_4227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___boxed(lean_object* v_a_4228_){
_start:
{
lean_object* v_res_4229_; 
v_res_4229_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1();
return v_res_4229_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__0(lean_object* v_a_4230_, lean_object* v_as_4231_, size_t v_i_4232_, size_t v_stop_4233_){
_start:
{
uint8_t v___x_4234_; 
v___x_4234_ = lean_usize_dec_eq(v_i_4232_, v_stop_4233_);
if (v___x_4234_ == 0)
{
lean_object* v___x_4235_; uint8_t v___x_4236_; 
v___x_4235_ = lean_array_uget_borrowed(v_as_4231_, v_i_4232_);
v___x_4236_ = lean_string_dec_eq(v___x_4235_, v_a_4230_);
if (v___x_4236_ == 0)
{
size_t v___x_4237_; size_t v___x_4238_; 
v___x_4237_ = ((size_t)1ULL);
v___x_4238_ = lean_usize_add(v_i_4232_, v___x_4237_);
v_i_4232_ = v___x_4238_;
goto _start;
}
else
{
return v___x_4236_;
}
}
else
{
uint8_t v___x_4240_; 
v___x_4240_ = 0;
return v___x_4240_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__0___boxed(lean_object* v_a_4241_, lean_object* v_as_4242_, lean_object* v_i_4243_, lean_object* v_stop_4244_){
_start:
{
size_t v_i_boxed_4245_; size_t v_stop_boxed_4246_; uint8_t v_res_4247_; lean_object* v_r_4248_; 
v_i_boxed_4245_ = lean_unbox_usize(v_i_4243_);
lean_dec(v_i_4243_);
v_stop_boxed_4246_ = lean_unbox_usize(v_stop_4244_);
lean_dec(v_stop_4244_);
v_res_4247_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__0(v_a_4241_, v_as_4242_, v_i_boxed_4245_, v_stop_boxed_4246_);
lean_dec_ref(v_as_4242_);
lean_dec_ref(v_a_4241_);
v_r_4248_ = lean_box(v_res_4247_);
return v_r_4248_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__1(lean_object* v_size_4249_, lean_object* v_as_4250_, size_t v_sz_4251_, size_t v_i_4252_, lean_object* v_b_4253_){
_start:
{
lean_object* v_a_4255_; uint8_t v___x_4259_; 
v___x_4259_ = lean_usize_dec_lt(v_i_4252_, v_sz_4251_);
if (v___x_4259_ == 0)
{
lean_dec(v_size_4249_);
return v_b_4253_;
}
else
{
lean_object* v_a_4260_; lean_object* v___x_4263_; lean_object* v___y_4265_; uint8_t v___x_4270_; 
v_a_4260_ = lean_array_uget_borrowed(v_as_4250_, v_i_4252_);
v___x_4263_ = lean_unsigned_to_nat(0u);
v___x_4270_ = lean_nat_dec_lt(v___x_4263_, v_size_4249_);
if (v___x_4270_ == 0)
{
goto v___jp_4261_;
}
else
{
lean_object* v___x_4271_; uint8_t v___x_4272_; 
v___x_4271_ = lean_array_get_size(v_b_4253_);
v___x_4272_ = lean_nat_dec_le(v_size_4249_, v___x_4271_);
if (v___x_4272_ == 0)
{
v___y_4265_ = v___x_4271_;
goto v___jp_4264_;
}
else
{
lean_inc(v_size_4249_);
v___y_4265_ = v_size_4249_;
goto v___jp_4264_;
}
}
v___jp_4261_:
{
lean_object* v___x_4262_; 
lean_inc(v_a_4260_);
v___x_4262_ = lean_array_push(v_b_4253_, v_a_4260_);
v_a_4255_ = v___x_4262_;
goto v___jp_4254_;
}
v___jp_4264_:
{
uint8_t v___x_4266_; 
v___x_4266_ = lean_nat_dec_lt(v___x_4263_, v___y_4265_);
if (v___x_4266_ == 0)
{
lean_dec(v___y_4265_);
goto v___jp_4261_;
}
else
{
size_t v___x_4267_; size_t v___x_4268_; uint8_t v___x_4269_; 
v___x_4267_ = ((size_t)0ULL);
v___x_4268_ = lean_usize_of_nat(v___y_4265_);
lean_dec(v___y_4265_);
v___x_4269_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__0(v_a_4260_, v_b_4253_, v___x_4267_, v___x_4268_);
if (v___x_4269_ == 0)
{
goto v___jp_4261_;
}
else
{
v_a_4255_ = v_b_4253_;
goto v___jp_4254_;
}
}
}
}
v___jp_4254_:
{
size_t v___x_4256_; size_t v___x_4257_; 
v___x_4256_ = ((size_t)1ULL);
v___x_4257_ = lean_usize_add(v_i_4252_, v___x_4256_);
v_i_4252_ = v___x_4257_;
v_b_4253_ = v_a_4255_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__1___boxed(lean_object* v_size_4273_, lean_object* v_as_4274_, lean_object* v_sz_4275_, lean_object* v_i_4276_, lean_object* v_b_4277_){
_start:
{
size_t v_sz_boxed_4278_; size_t v_i_boxed_4279_; lean_object* v_res_4280_; 
v_sz_boxed_4278_ = lean_unbox_usize(v_sz_4275_);
lean_dec(v_sz_4275_);
v_i_boxed_4279_ = lean_unbox_usize(v_i_4276_);
lean_dec(v_i_4276_);
v_res_4280_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__1(v_size_4273_, v_as_4274_, v_sz_boxed_4278_, v_i_boxed_4279_, v_b_4277_);
lean_dec_ref(v_as_4274_);
return v_res_4280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks(lean_object* v_init_4281_, lean_object* v_tks_4282_){
_start:
{
lean_object* v_size_4283_; size_t v_sz_4284_; size_t v___x_4285_; lean_object* v___x_4286_; 
v_size_4283_ = lean_array_get_size(v_init_4281_);
v_sz_4284_ = lean_array_size(v_tks_4282_);
v___x_4285_ = ((size_t)0ULL);
v___x_4286_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks_spec__1(v_size_4283_, v_tks_4282_, v_sz_4284_, v___x_4285_, v_init_4281_);
return v___x_4286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks___boxed(lean_object* v_init_4287_, lean_object* v_tks_4288_){
_start:
{
lean_object* v_res_4289_; 
v_res_4289_ = l___private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks(v_init_4287_, v_tks_4288_);
lean_dec_ref(v_tks_4288_);
return v_res_4289_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__8(void){
_start:
{
lean_object* v___x_4311_; lean_object* v___x_4312_; 
v___x_4311_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__6));
v___x_4312_ = l_Lean_mkAtom(v___x_4311_);
return v___x_4312_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__9(void){
_start:
{
lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; 
v___x_4313_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__8, &l_Lean_Parser_withForbiddens___auto__1___closed__8_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__8);
v___x_4314_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__3));
v___x_4315_ = lean_array_push(v___x_4314_, v___x_4313_);
return v___x_4315_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__13(void){
_start:
{
lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; 
v___x_4326_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__12));
v___x_4327_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__3));
v___x_4328_ = lean_array_push(v___x_4327_, v___x_4326_);
return v___x_4328_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__14(void){
_start:
{
lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; 
v___x_4329_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__13, &l_Lean_Parser_withForbiddens___auto__1___closed__13_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__13);
v___x_4330_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__11));
v___x_4331_ = lean_box(2);
v___x_4332_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4332_, 0, v___x_4331_);
lean_ctor_set(v___x_4332_, 1, v___x_4330_);
lean_ctor_set(v___x_4332_, 2, v___x_4329_);
return v___x_4332_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__15(void){
_start:
{
lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; 
v___x_4333_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__14, &l_Lean_Parser_withForbiddens___auto__1___closed__14_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__14);
v___x_4334_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__9, &l_Lean_Parser_withForbiddens___auto__1___closed__9_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__9);
v___x_4335_ = lean_array_push(v___x_4334_, v___x_4333_);
return v___x_4335_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__16(void){
_start:
{
lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; 
v___x_4336_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__15, &l_Lean_Parser_withForbiddens___auto__1___closed__15_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__15);
v___x_4337_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__7));
v___x_4338_ = lean_box(2);
v___x_4339_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4339_, 0, v___x_4338_);
lean_ctor_set(v___x_4339_, 1, v___x_4337_);
lean_ctor_set(v___x_4339_, 2, v___x_4336_);
return v___x_4339_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__17(void){
_start:
{
lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; 
v___x_4340_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__16, &l_Lean_Parser_withForbiddens___auto__1___closed__16_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__16);
v___x_4341_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__3));
v___x_4342_ = lean_array_push(v___x_4341_, v___x_4340_);
return v___x_4342_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__18(void){
_start:
{
lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; 
v___x_4343_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__17, &l_Lean_Parser_withForbiddens___auto__1___closed__17_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__17);
v___x_4344_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__1));
v___x_4345_ = lean_box(2);
v___x_4346_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4346_, 0, v___x_4345_);
lean_ctor_set(v___x_4346_, 1, v___x_4344_);
lean_ctor_set(v___x_4346_, 2, v___x_4343_);
return v___x_4346_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__19(void){
_start:
{
lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; 
v___x_4347_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__18, &l_Lean_Parser_withForbiddens___auto__1___closed__18_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__18);
v___x_4348_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__3));
v___x_4349_ = lean_array_push(v___x_4348_, v___x_4347_);
return v___x_4349_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__20(void){
_start:
{
lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; 
v___x_4350_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__19, &l_Lean_Parser_withForbiddens___auto__1___closed__19_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__19);
v___x_4351_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__5));
v___x_4352_ = lean_box(2);
v___x_4353_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4353_, 0, v___x_4352_);
lean_ctor_set(v___x_4353_, 1, v___x_4351_);
lean_ctor_set(v___x_4353_, 2, v___x_4350_);
return v___x_4353_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__21(void){
_start:
{
lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; 
v___x_4354_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__20, &l_Lean_Parser_withForbiddens___auto__1___closed__20_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__20);
v___x_4355_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__3));
v___x_4356_ = lean_array_push(v___x_4355_, v___x_4354_);
return v___x_4356_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1___closed__22(void){
_start:
{
lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; 
v___x_4357_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__21, &l_Lean_Parser_withForbiddens___auto__1___closed__21_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__21);
v___x_4358_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__2));
v___x_4359_ = lean_box(2);
v___x_4360_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4360_, 0, v___x_4359_);
lean_ctor_set(v___x_4360_, 1, v___x_4358_);
lean_ctor_set(v___x_4360_, 2, v___x_4357_);
return v___x_4360_;
}
}
static lean_object* _init_l_Lean_Parser_withForbiddens___auto__1(void){
_start:
{
lean_object* v___x_4361_; 
v___x_4361_ = lean_obj_once(&l_Lean_Parser_withForbiddens___auto__1___closed__22, &l_Lean_Parser_withForbiddens___auto__1___closed__22_once, _init_l_Lean_Parser_withForbiddens___auto__1___closed__22);
return v___x_4361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbiddens___redArg___lam__0(lean_object* v_tks_4362_, lean_object* v_c_4363_){
_start:
{
lean_object* v_prec_4364_; lean_object* v_quotDepth_4365_; uint8_t v_suppressInsideQuot_4366_; lean_object* v_savedPos_x3f_4367_; lean_object* v_forbiddenTks_4368_; lean_object* v___x_4370_; uint8_t v_isShared_4371_; uint8_t v_isSharedCheck_4382_; 
v_prec_4364_ = lean_ctor_get(v_c_4363_, 0);
v_quotDepth_4365_ = lean_ctor_get(v_c_4363_, 1);
v_suppressInsideQuot_4366_ = lean_ctor_get_uint8(v_c_4363_, sizeof(void*)*4);
v_savedPos_x3f_4367_ = lean_ctor_get(v_c_4363_, 2);
v_forbiddenTks_4368_ = lean_ctor_get(v_c_4363_, 3);
v_isSharedCheck_4382_ = !lean_is_exclusive(v_c_4363_);
if (v_isSharedCheck_4382_ == 0)
{
v___x_4370_ = v_c_4363_;
v_isShared_4371_ = v_isSharedCheck_4382_;
goto v_resetjp_4369_;
}
else
{
lean_inc(v_forbiddenTks_4368_);
lean_inc(v_savedPos_x3f_4367_);
lean_inc(v_quotDepth_4365_);
lean_inc(v_prec_4364_);
lean_dec(v_c_4363_);
v___x_4370_ = lean_box(0);
v_isShared_4371_ = v_isSharedCheck_4382_;
goto v_resetjp_4369_;
}
v_resetjp_4369_:
{
lean_object* v___x_4372_; lean_object* v___x_4373_; uint8_t v___x_4374_; 
v___x_4372_ = lean_array_get_size(v_forbiddenTks_4368_);
v___x_4373_ = lean_unsigned_to_nat(0u);
v___x_4374_ = lean_nat_dec_eq(v___x_4372_, v___x_4373_);
if (v___x_4374_ == 0)
{
lean_object* v___x_4375_; lean_object* v___x_4377_; 
v___x_4375_ = l___private_Lean_Parser_Basic_0__Lean_Parser_mergeForbiddenTks(v_forbiddenTks_4368_, v_tks_4362_);
lean_dec_ref(v_tks_4362_);
if (v_isShared_4371_ == 0)
{
lean_ctor_set(v___x_4370_, 3, v___x_4375_);
v___x_4377_ = v___x_4370_;
goto v_reusejp_4376_;
}
else
{
lean_object* v_reuseFailAlloc_4378_; 
v_reuseFailAlloc_4378_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4378_, 0, v_prec_4364_);
lean_ctor_set(v_reuseFailAlloc_4378_, 1, v_quotDepth_4365_);
lean_ctor_set(v_reuseFailAlloc_4378_, 2, v_savedPos_x3f_4367_);
lean_ctor_set(v_reuseFailAlloc_4378_, 3, v___x_4375_);
lean_ctor_set_uint8(v_reuseFailAlloc_4378_, sizeof(void*)*4, v_suppressInsideQuot_4366_);
v___x_4377_ = v_reuseFailAlloc_4378_;
goto v_reusejp_4376_;
}
v_reusejp_4376_:
{
return v___x_4377_;
}
}
else
{
lean_object* v___x_4380_; 
lean_dec_ref(v_forbiddenTks_4368_);
if (v_isShared_4371_ == 0)
{
lean_ctor_set(v___x_4370_, 3, v_tks_4362_);
v___x_4380_ = v___x_4370_;
goto v_reusejp_4379_;
}
else
{
lean_object* v_reuseFailAlloc_4381_; 
v_reuseFailAlloc_4381_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4381_, 0, v_prec_4364_);
lean_ctor_set(v_reuseFailAlloc_4381_, 1, v_quotDepth_4365_);
lean_ctor_set(v_reuseFailAlloc_4381_, 2, v_savedPos_x3f_4367_);
lean_ctor_set(v_reuseFailAlloc_4381_, 3, v_tks_4362_);
lean_ctor_set_uint8(v_reuseFailAlloc_4381_, sizeof(void*)*4, v_suppressInsideQuot_4366_);
v___x_4380_ = v_reuseFailAlloc_4381_;
goto v_reusejp_4379_;
}
v_reusejp_4379_:
{
return v___x_4380_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbiddens___redArg(lean_object* v_tks_4383_, lean_object* v_p_4384_){
_start:
{
lean_object* v___f_4385_; lean_object* v___x_4386_; 
v___f_4385_ = lean_alloc_closure((void*)(l_Lean_Parser_withForbiddens___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4385_, 0, v_tks_4383_);
v___x_4386_ = l_Lean_Parser_adaptCacheableContext(v___f_4385_, v_p_4384_);
return v___x_4386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbiddens(lean_object* v_tks_4387_, lean_object* v_p_4388_, lean_object* v___h_4389_){
_start:
{
lean_object* v___x_4390_; 
v___x_4390_ = l_Lean_Parser_withForbiddens___redArg(v_tks_4387_, v_p_4388_);
return v___x_4390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1(){
_start:
{
lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4400_; 
v___x_4398_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__1));
v___x_4399_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___closed__2));
v___x_4400_ = l_Lean_addBuiltinDocString(v___x_4398_, v___x_4399_);
return v___x_4400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1___boxed(lean_object* v_a_4401_){
_start:
{
lean_object* v_res_4402_; 
v_res_4402_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withForbiddens___regBuiltin_Lean_Parser_withForbiddens_docString__1();
return v_res_4402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden___lam__0(lean_object* v_x_4405_){
_start:
{
lean_object* v_prec_4406_; lean_object* v_quotDepth_4407_; uint8_t v_suppressInsideQuot_4408_; lean_object* v_savedPos_x3f_4409_; lean_object* v___x_4411_; uint8_t v_isShared_4412_; uint8_t v_isSharedCheck_4417_; 
v_prec_4406_ = lean_ctor_get(v_x_4405_, 0);
v_quotDepth_4407_ = lean_ctor_get(v_x_4405_, 1);
v_suppressInsideQuot_4408_ = lean_ctor_get_uint8(v_x_4405_, sizeof(void*)*4);
v_savedPos_x3f_4409_ = lean_ctor_get(v_x_4405_, 2);
v_isSharedCheck_4417_ = !lean_is_exclusive(v_x_4405_);
if (v_isSharedCheck_4417_ == 0)
{
lean_object* v_unused_4418_; 
v_unused_4418_ = lean_ctor_get(v_x_4405_, 3);
lean_dec(v_unused_4418_);
v___x_4411_ = v_x_4405_;
v_isShared_4412_ = v_isSharedCheck_4417_;
goto v_resetjp_4410_;
}
else
{
lean_inc(v_savedPos_x3f_4409_);
lean_inc(v_quotDepth_4407_);
lean_inc(v_prec_4406_);
lean_dec(v_x_4405_);
v___x_4411_ = lean_box(0);
v_isShared_4412_ = v_isSharedCheck_4417_;
goto v_resetjp_4410_;
}
v_resetjp_4410_:
{
lean_object* v___x_4413_; lean_object* v___x_4415_; 
v___x_4413_ = ((lean_object*)(l_Lean_Parser_withoutForbidden___lam__0___closed__0));
if (v_isShared_4412_ == 0)
{
lean_ctor_set(v___x_4411_, 3, v___x_4413_);
v___x_4415_ = v___x_4411_;
goto v_reusejp_4414_;
}
else
{
lean_object* v_reuseFailAlloc_4416_; 
v_reuseFailAlloc_4416_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4416_, 0, v_prec_4406_);
lean_ctor_set(v_reuseFailAlloc_4416_, 1, v_quotDepth_4407_);
lean_ctor_set(v_reuseFailAlloc_4416_, 2, v_savedPos_x3f_4409_);
lean_ctor_set(v_reuseFailAlloc_4416_, 3, v___x_4413_);
lean_ctor_set_uint8(v_reuseFailAlloc_4416_, sizeof(void*)*4, v_suppressInsideQuot_4408_);
v___x_4415_ = v_reuseFailAlloc_4416_;
goto v_reusejp_4414_;
}
v_reusejp_4414_:
{
return v___x_4415_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden(lean_object* v_p_4420_){
_start:
{
lean_object* v___f_4421_; lean_object* v___x_4422_; 
v___f_4421_ = ((lean_object*)(l_Lean_Parser_withoutForbidden___closed__0));
v___x_4422_ = l_Lean_Parser_adaptCacheableContext(v___f_4421_, v_p_4420_);
return v___x_4422_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1(){
_start:
{
lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; 
v___x_4430_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__1));
v___x_4431_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__2));
v___x_4432_ = l_Lean_addBuiltinDocString(v___x_4430_, v___x_4431_);
return v___x_4432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___boxed(lean_object* v_a_4433_){
_start:
{
lean_object* v_res_4434_; 
v_res_4434_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1();
return v_res_4434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_eoiFn(lean_object* v_c_4436_, lean_object* v_s_4437_){
_start:
{
lean_object* v_pos_4438_; lean_object* v_toInputContext_4439_; uint8_t v___x_4440_; 
v_pos_4438_ = lean_ctor_get(v_s_4437_, 2);
v_toInputContext_4439_ = lean_ctor_get(v_c_4436_, 0);
lean_inc_ref(v_toInputContext_4439_);
lean_dec_ref(v_c_4436_);
lean_inc(v_pos_4438_);
v___x_4440_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_4439_, v_pos_4438_);
if (v___x_4440_ == 0)
{
lean_object* v___x_4441_; lean_object* v___x_4442_; 
v___x_4441_ = ((lean_object*)(l_Lean_Parser_eoiFn___closed__0));
v___x_4442_ = l_Lean_Parser_ParserState_mkError(v_s_4437_, v___x_4441_);
return v___x_4442_;
}
else
{
return v_s_4437_;
}
}
}
static lean_object* _init_l_Lean_Parser_eoi___closed__0(void){
_start:
{
lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; 
v___x_4443_ = lean_alloc_closure((void*)(l_Lean_Parser_eoiFn), 2, 0);
v___x_4444_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_4445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4445_, 0, v___x_4444_);
lean_ctor_set(v___x_4445_, 1, v___x_4443_);
return v___x_4445_;
}
}
static lean_object* _init_l_Lean_Parser_eoi(void){
_start:
{
lean_object* v___x_4446_; 
v___x_4446_ = lean_obj_once(&l_Lean_Parser_eoi___closed__0, &l_Lean_Parser_eoi___closed__0_once, _init_l_Lean_Parser_eoi___closed__0);
return v___x_4446_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(lean_object* v_k_4447_, lean_object* v_v_4448_, lean_object* v_t_4449_){
_start:
{
if (lean_obj_tag(v_t_4449_) == 0)
{
lean_object* v_size_4450_; lean_object* v_k_4451_; lean_object* v_v_4452_; lean_object* v_l_4453_; lean_object* v_r_4454_; lean_object* v___x_4456_; uint8_t v_isShared_4457_; uint8_t v_isSharedCheck_4734_; 
v_size_4450_ = lean_ctor_get(v_t_4449_, 0);
v_k_4451_ = lean_ctor_get(v_t_4449_, 1);
v_v_4452_ = lean_ctor_get(v_t_4449_, 2);
v_l_4453_ = lean_ctor_get(v_t_4449_, 3);
v_r_4454_ = lean_ctor_get(v_t_4449_, 4);
v_isSharedCheck_4734_ = !lean_is_exclusive(v_t_4449_);
if (v_isSharedCheck_4734_ == 0)
{
v___x_4456_ = v_t_4449_;
v_isShared_4457_ = v_isSharedCheck_4734_;
goto v_resetjp_4455_;
}
else
{
lean_inc(v_r_4454_);
lean_inc(v_l_4453_);
lean_inc(v_v_4452_);
lean_inc(v_k_4451_);
lean_inc(v_size_4450_);
lean_dec(v_t_4449_);
v___x_4456_ = lean_box(0);
v_isShared_4457_ = v_isSharedCheck_4734_;
goto v_resetjp_4455_;
}
v_resetjp_4455_:
{
uint8_t v___x_4458_; 
v___x_4458_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_4447_, v_k_4451_);
switch(v___x_4458_)
{
case 0:
{
lean_object* v_impl_4459_; lean_object* v___x_4460_; 
lean_dec(v_size_4450_);
v_impl_4459_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(v_k_4447_, v_v_4448_, v_l_4453_);
v___x_4460_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_4454_) == 0)
{
lean_object* v_size_4461_; lean_object* v_size_4462_; lean_object* v_k_4463_; lean_object* v_v_4464_; lean_object* v_l_4465_; lean_object* v_r_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; uint8_t v___x_4469_; 
v_size_4461_ = lean_ctor_get(v_r_4454_, 0);
v_size_4462_ = lean_ctor_get(v_impl_4459_, 0);
v_k_4463_ = lean_ctor_get(v_impl_4459_, 1);
v_v_4464_ = lean_ctor_get(v_impl_4459_, 2);
v_l_4465_ = lean_ctor_get(v_impl_4459_, 3);
v_r_4466_ = lean_ctor_get(v_impl_4459_, 4);
lean_inc(v_r_4466_);
v___x_4467_ = lean_unsigned_to_nat(3u);
v___x_4468_ = lean_nat_mul(v___x_4467_, v_size_4461_);
v___x_4469_ = lean_nat_dec_lt(v___x_4468_, v_size_4462_);
lean_dec(v___x_4468_);
if (v___x_4469_ == 0)
{
lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4473_; 
lean_dec(v_r_4466_);
v___x_4470_ = lean_nat_add(v___x_4460_, v_size_4462_);
v___x_4471_ = lean_nat_add(v___x_4470_, v_size_4461_);
lean_dec(v___x_4470_);
if (v_isShared_4457_ == 0)
{
lean_ctor_set(v___x_4456_, 3, v_impl_4459_);
lean_ctor_set(v___x_4456_, 0, v___x_4471_);
v___x_4473_ = v___x_4456_;
goto v_reusejp_4472_;
}
else
{
lean_object* v_reuseFailAlloc_4474_; 
v_reuseFailAlloc_4474_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4474_, 0, v___x_4471_);
lean_ctor_set(v_reuseFailAlloc_4474_, 1, v_k_4451_);
lean_ctor_set(v_reuseFailAlloc_4474_, 2, v_v_4452_);
lean_ctor_set(v_reuseFailAlloc_4474_, 3, v_impl_4459_);
lean_ctor_set(v_reuseFailAlloc_4474_, 4, v_r_4454_);
v___x_4473_ = v_reuseFailAlloc_4474_;
goto v_reusejp_4472_;
}
v_reusejp_4472_:
{
return v___x_4473_;
}
}
else
{
lean_object* v___x_4476_; uint8_t v_isShared_4477_; uint8_t v_isSharedCheck_4540_; 
lean_inc(v_l_4465_);
lean_inc(v_v_4464_);
lean_inc(v_k_4463_);
lean_inc(v_size_4462_);
v_isSharedCheck_4540_ = !lean_is_exclusive(v_impl_4459_);
if (v_isSharedCheck_4540_ == 0)
{
lean_object* v_unused_4541_; lean_object* v_unused_4542_; lean_object* v_unused_4543_; lean_object* v_unused_4544_; lean_object* v_unused_4545_; 
v_unused_4541_ = lean_ctor_get(v_impl_4459_, 4);
lean_dec(v_unused_4541_);
v_unused_4542_ = lean_ctor_get(v_impl_4459_, 3);
lean_dec(v_unused_4542_);
v_unused_4543_ = lean_ctor_get(v_impl_4459_, 2);
lean_dec(v_unused_4543_);
v_unused_4544_ = lean_ctor_get(v_impl_4459_, 1);
lean_dec(v_unused_4544_);
v_unused_4545_ = lean_ctor_get(v_impl_4459_, 0);
lean_dec(v_unused_4545_);
v___x_4476_ = v_impl_4459_;
v_isShared_4477_ = v_isSharedCheck_4540_;
goto v_resetjp_4475_;
}
else
{
lean_dec(v_impl_4459_);
v___x_4476_ = lean_box(0);
v_isShared_4477_ = v_isSharedCheck_4540_;
goto v_resetjp_4475_;
}
v_resetjp_4475_:
{
lean_object* v_size_4478_; lean_object* v_size_4479_; lean_object* v_k_4480_; lean_object* v_v_4481_; lean_object* v_l_4482_; lean_object* v_r_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; uint8_t v___x_4486_; 
v_size_4478_ = lean_ctor_get(v_l_4465_, 0);
v_size_4479_ = lean_ctor_get(v_r_4466_, 0);
v_k_4480_ = lean_ctor_get(v_r_4466_, 1);
v_v_4481_ = lean_ctor_get(v_r_4466_, 2);
v_l_4482_ = lean_ctor_get(v_r_4466_, 3);
v_r_4483_ = lean_ctor_get(v_r_4466_, 4);
v___x_4484_ = lean_unsigned_to_nat(2u);
v___x_4485_ = lean_nat_mul(v___x_4484_, v_size_4478_);
v___x_4486_ = lean_nat_dec_lt(v_size_4479_, v___x_4485_);
lean_dec(v___x_4485_);
if (v___x_4486_ == 0)
{
lean_object* v___x_4488_; uint8_t v_isShared_4489_; uint8_t v_isSharedCheck_4515_; 
lean_inc(v_r_4483_);
lean_inc(v_l_4482_);
lean_inc(v_v_4481_);
lean_inc(v_k_4480_);
v_isSharedCheck_4515_ = !lean_is_exclusive(v_r_4466_);
if (v_isSharedCheck_4515_ == 0)
{
lean_object* v_unused_4516_; lean_object* v_unused_4517_; lean_object* v_unused_4518_; lean_object* v_unused_4519_; lean_object* v_unused_4520_; 
v_unused_4516_ = lean_ctor_get(v_r_4466_, 4);
lean_dec(v_unused_4516_);
v_unused_4517_ = lean_ctor_get(v_r_4466_, 3);
lean_dec(v_unused_4517_);
v_unused_4518_ = lean_ctor_get(v_r_4466_, 2);
lean_dec(v_unused_4518_);
v_unused_4519_ = lean_ctor_get(v_r_4466_, 1);
lean_dec(v_unused_4519_);
v_unused_4520_ = lean_ctor_get(v_r_4466_, 0);
lean_dec(v_unused_4520_);
v___x_4488_ = v_r_4466_;
v_isShared_4489_ = v_isSharedCheck_4515_;
goto v_resetjp_4487_;
}
else
{
lean_dec(v_r_4466_);
v___x_4488_ = lean_box(0);
v_isShared_4489_ = v_isSharedCheck_4515_;
goto v_resetjp_4487_;
}
v_resetjp_4487_:
{
lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___y_4493_; lean_object* v___y_4494_; lean_object* v___y_4495_; lean_object* v___x_4503_; lean_object* v___y_4505_; 
v___x_4490_ = lean_nat_add(v___x_4460_, v_size_4462_);
lean_dec(v_size_4462_);
v___x_4491_ = lean_nat_add(v___x_4490_, v_size_4461_);
lean_dec(v___x_4490_);
v___x_4503_ = lean_nat_add(v___x_4460_, v_size_4478_);
if (lean_obj_tag(v_l_4482_) == 0)
{
lean_object* v_size_4513_; 
v_size_4513_ = lean_ctor_get(v_l_4482_, 0);
lean_inc(v_size_4513_);
v___y_4505_ = v_size_4513_;
goto v___jp_4504_;
}
else
{
lean_object* v___x_4514_; 
v___x_4514_ = lean_unsigned_to_nat(0u);
v___y_4505_ = v___x_4514_;
goto v___jp_4504_;
}
v___jp_4492_:
{
lean_object* v___x_4496_; lean_object* v___x_4498_; 
v___x_4496_ = lean_nat_add(v___y_4493_, v___y_4495_);
lean_dec(v___y_4495_);
lean_dec(v___y_4493_);
if (v_isShared_4489_ == 0)
{
lean_ctor_set(v___x_4488_, 4, v_r_4454_);
lean_ctor_set(v___x_4488_, 3, v_r_4483_);
lean_ctor_set(v___x_4488_, 2, v_v_4452_);
lean_ctor_set(v___x_4488_, 1, v_k_4451_);
lean_ctor_set(v___x_4488_, 0, v___x_4496_);
v___x_4498_ = v___x_4488_;
goto v_reusejp_4497_;
}
else
{
lean_object* v_reuseFailAlloc_4502_; 
v_reuseFailAlloc_4502_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4502_, 0, v___x_4496_);
lean_ctor_set(v_reuseFailAlloc_4502_, 1, v_k_4451_);
lean_ctor_set(v_reuseFailAlloc_4502_, 2, v_v_4452_);
lean_ctor_set(v_reuseFailAlloc_4502_, 3, v_r_4483_);
lean_ctor_set(v_reuseFailAlloc_4502_, 4, v_r_4454_);
v___x_4498_ = v_reuseFailAlloc_4502_;
goto v_reusejp_4497_;
}
v_reusejp_4497_:
{
lean_object* v___x_4500_; 
if (v_isShared_4477_ == 0)
{
lean_ctor_set(v___x_4476_, 4, v___x_4498_);
lean_ctor_set(v___x_4476_, 3, v___y_4494_);
lean_ctor_set(v___x_4476_, 2, v_v_4481_);
lean_ctor_set(v___x_4476_, 1, v_k_4480_);
lean_ctor_set(v___x_4476_, 0, v___x_4491_);
v___x_4500_ = v___x_4476_;
goto v_reusejp_4499_;
}
else
{
lean_object* v_reuseFailAlloc_4501_; 
v_reuseFailAlloc_4501_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4501_, 0, v___x_4491_);
lean_ctor_set(v_reuseFailAlloc_4501_, 1, v_k_4480_);
lean_ctor_set(v_reuseFailAlloc_4501_, 2, v_v_4481_);
lean_ctor_set(v_reuseFailAlloc_4501_, 3, v___y_4494_);
lean_ctor_set(v_reuseFailAlloc_4501_, 4, v___x_4498_);
v___x_4500_ = v_reuseFailAlloc_4501_;
goto v_reusejp_4499_;
}
v_reusejp_4499_:
{
return v___x_4500_;
}
}
}
v___jp_4504_:
{
lean_object* v___x_4506_; lean_object* v___x_4508_; 
v___x_4506_ = lean_nat_add(v___x_4503_, v___y_4505_);
lean_dec(v___y_4505_);
lean_dec(v___x_4503_);
if (v_isShared_4457_ == 0)
{
lean_ctor_set(v___x_4456_, 4, v_l_4482_);
lean_ctor_set(v___x_4456_, 3, v_l_4465_);
lean_ctor_set(v___x_4456_, 2, v_v_4464_);
lean_ctor_set(v___x_4456_, 1, v_k_4463_);
lean_ctor_set(v___x_4456_, 0, v___x_4506_);
v___x_4508_ = v___x_4456_;
goto v_reusejp_4507_;
}
else
{
lean_object* v_reuseFailAlloc_4512_; 
v_reuseFailAlloc_4512_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4512_, 0, v___x_4506_);
lean_ctor_set(v_reuseFailAlloc_4512_, 1, v_k_4463_);
lean_ctor_set(v_reuseFailAlloc_4512_, 2, v_v_4464_);
lean_ctor_set(v_reuseFailAlloc_4512_, 3, v_l_4465_);
lean_ctor_set(v_reuseFailAlloc_4512_, 4, v_l_4482_);
v___x_4508_ = v_reuseFailAlloc_4512_;
goto v_reusejp_4507_;
}
v_reusejp_4507_:
{
lean_object* v___x_4509_; 
v___x_4509_ = lean_nat_add(v___x_4460_, v_size_4461_);
if (lean_obj_tag(v_r_4483_) == 0)
{
lean_object* v_size_4510_; 
v_size_4510_ = lean_ctor_get(v_r_4483_, 0);
lean_inc(v_size_4510_);
v___y_4493_ = v___x_4509_;
v___y_4494_ = v___x_4508_;
v___y_4495_ = v_size_4510_;
goto v___jp_4492_;
}
else
{
lean_object* v___x_4511_; 
v___x_4511_ = lean_unsigned_to_nat(0u);
v___y_4493_ = v___x_4509_;
v___y_4494_ = v___x_4508_;
v___y_4495_ = v___x_4511_;
goto v___jp_4492_;
}
}
}
}
}
else
{
lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4526_; 
lean_del_object(v___x_4456_);
v___x_4521_ = lean_nat_add(v___x_4460_, v_size_4462_);
lean_dec(v_size_4462_);
v___x_4522_ = lean_nat_add(v___x_4521_, v_size_4461_);
lean_dec(v___x_4521_);
v___x_4523_ = lean_nat_add(v___x_4460_, v_size_4461_);
v___x_4524_ = lean_nat_add(v___x_4523_, v_size_4479_);
lean_dec(v___x_4523_);
lean_inc_ref(v_r_4454_);
if (v_isShared_4477_ == 0)
{
lean_ctor_set(v___x_4476_, 4, v_r_4454_);
lean_ctor_set(v___x_4476_, 3, v_r_4466_);
lean_ctor_set(v___x_4476_, 2, v_v_4452_);
lean_ctor_set(v___x_4476_, 1, v_k_4451_);
lean_ctor_set(v___x_4476_, 0, v___x_4524_);
v___x_4526_ = v___x_4476_;
goto v_reusejp_4525_;
}
else
{
lean_object* v_reuseFailAlloc_4539_; 
v_reuseFailAlloc_4539_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4539_, 0, v___x_4524_);
lean_ctor_set(v_reuseFailAlloc_4539_, 1, v_k_4451_);
lean_ctor_set(v_reuseFailAlloc_4539_, 2, v_v_4452_);
lean_ctor_set(v_reuseFailAlloc_4539_, 3, v_r_4466_);
lean_ctor_set(v_reuseFailAlloc_4539_, 4, v_r_4454_);
v___x_4526_ = v_reuseFailAlloc_4539_;
goto v_reusejp_4525_;
}
v_reusejp_4525_:
{
lean_object* v___x_4528_; uint8_t v_isShared_4529_; uint8_t v_isSharedCheck_4533_; 
v_isSharedCheck_4533_ = !lean_is_exclusive(v_r_4454_);
if (v_isSharedCheck_4533_ == 0)
{
lean_object* v_unused_4534_; lean_object* v_unused_4535_; lean_object* v_unused_4536_; lean_object* v_unused_4537_; lean_object* v_unused_4538_; 
v_unused_4534_ = lean_ctor_get(v_r_4454_, 4);
lean_dec(v_unused_4534_);
v_unused_4535_ = lean_ctor_get(v_r_4454_, 3);
lean_dec(v_unused_4535_);
v_unused_4536_ = lean_ctor_get(v_r_4454_, 2);
lean_dec(v_unused_4536_);
v_unused_4537_ = lean_ctor_get(v_r_4454_, 1);
lean_dec(v_unused_4537_);
v_unused_4538_ = lean_ctor_get(v_r_4454_, 0);
lean_dec(v_unused_4538_);
v___x_4528_ = v_r_4454_;
v_isShared_4529_ = v_isSharedCheck_4533_;
goto v_resetjp_4527_;
}
else
{
lean_dec(v_r_4454_);
v___x_4528_ = lean_box(0);
v_isShared_4529_ = v_isSharedCheck_4533_;
goto v_resetjp_4527_;
}
v_resetjp_4527_:
{
lean_object* v___x_4531_; 
if (v_isShared_4529_ == 0)
{
lean_ctor_set(v___x_4528_, 4, v___x_4526_);
lean_ctor_set(v___x_4528_, 3, v_l_4465_);
lean_ctor_set(v___x_4528_, 2, v_v_4464_);
lean_ctor_set(v___x_4528_, 1, v_k_4463_);
lean_ctor_set(v___x_4528_, 0, v___x_4522_);
v___x_4531_ = v___x_4528_;
goto v_reusejp_4530_;
}
else
{
lean_object* v_reuseFailAlloc_4532_; 
v_reuseFailAlloc_4532_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4532_, 0, v___x_4522_);
lean_ctor_set(v_reuseFailAlloc_4532_, 1, v_k_4463_);
lean_ctor_set(v_reuseFailAlloc_4532_, 2, v_v_4464_);
lean_ctor_set(v_reuseFailAlloc_4532_, 3, v_l_4465_);
lean_ctor_set(v_reuseFailAlloc_4532_, 4, v___x_4526_);
v___x_4531_ = v_reuseFailAlloc_4532_;
goto v_reusejp_4530_;
}
v_reusejp_4530_:
{
return v___x_4531_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_4546_; 
v_l_4546_ = lean_ctor_get(v_impl_4459_, 3);
if (lean_obj_tag(v_l_4546_) == 0)
{
lean_object* v_r_4547_; lean_object* v_k_4548_; lean_object* v_v_4549_; lean_object* v___x_4551_; uint8_t v_isShared_4552_; uint8_t v_isSharedCheck_4560_; 
lean_inc_ref(v_l_4546_);
v_r_4547_ = lean_ctor_get(v_impl_4459_, 4);
v_k_4548_ = lean_ctor_get(v_impl_4459_, 1);
v_v_4549_ = lean_ctor_get(v_impl_4459_, 2);
v_isSharedCheck_4560_ = !lean_is_exclusive(v_impl_4459_);
if (v_isSharedCheck_4560_ == 0)
{
lean_object* v_unused_4561_; lean_object* v_unused_4562_; 
v_unused_4561_ = lean_ctor_get(v_impl_4459_, 3);
lean_dec(v_unused_4561_);
v_unused_4562_ = lean_ctor_get(v_impl_4459_, 0);
lean_dec(v_unused_4562_);
v___x_4551_ = v_impl_4459_;
v_isShared_4552_ = v_isSharedCheck_4560_;
goto v_resetjp_4550_;
}
else
{
lean_inc(v_r_4547_);
lean_inc(v_v_4549_);
lean_inc(v_k_4548_);
lean_dec(v_impl_4459_);
v___x_4551_ = lean_box(0);
v_isShared_4552_ = v_isSharedCheck_4560_;
goto v_resetjp_4550_;
}
v_resetjp_4550_:
{
lean_object* v___x_4553_; lean_object* v___x_4555_; 
v___x_4553_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_4547_);
if (v_isShared_4552_ == 0)
{
lean_ctor_set(v___x_4551_, 3, v_r_4547_);
lean_ctor_set(v___x_4551_, 2, v_v_4452_);
lean_ctor_set(v___x_4551_, 1, v_k_4451_);
lean_ctor_set(v___x_4551_, 0, v___x_4460_);
v___x_4555_ = v___x_4551_;
goto v_reusejp_4554_;
}
else
{
lean_object* v_reuseFailAlloc_4559_; 
v_reuseFailAlloc_4559_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4559_, 0, v___x_4460_);
lean_ctor_set(v_reuseFailAlloc_4559_, 1, v_k_4451_);
lean_ctor_set(v_reuseFailAlloc_4559_, 2, v_v_4452_);
lean_ctor_set(v_reuseFailAlloc_4559_, 3, v_r_4547_);
lean_ctor_set(v_reuseFailAlloc_4559_, 4, v_r_4547_);
v___x_4555_ = v_reuseFailAlloc_4559_;
goto v_reusejp_4554_;
}
v_reusejp_4554_:
{
lean_object* v___x_4557_; 
if (v_isShared_4457_ == 0)
{
lean_ctor_set(v___x_4456_, 4, v___x_4555_);
lean_ctor_set(v___x_4456_, 3, v_l_4546_);
lean_ctor_set(v___x_4456_, 2, v_v_4549_);
lean_ctor_set(v___x_4456_, 1, v_k_4548_);
lean_ctor_set(v___x_4456_, 0, v___x_4553_);
v___x_4557_ = v___x_4456_;
goto v_reusejp_4556_;
}
else
{
lean_object* v_reuseFailAlloc_4558_; 
v_reuseFailAlloc_4558_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4558_, 0, v___x_4553_);
lean_ctor_set(v_reuseFailAlloc_4558_, 1, v_k_4548_);
lean_ctor_set(v_reuseFailAlloc_4558_, 2, v_v_4549_);
lean_ctor_set(v_reuseFailAlloc_4558_, 3, v_l_4546_);
lean_ctor_set(v_reuseFailAlloc_4558_, 4, v___x_4555_);
v___x_4557_ = v_reuseFailAlloc_4558_;
goto v_reusejp_4556_;
}
v_reusejp_4556_:
{
return v___x_4557_;
}
}
}
}
else
{
lean_object* v_r_4563_; 
v_r_4563_ = lean_ctor_get(v_impl_4459_, 4);
lean_inc(v_r_4563_);
if (lean_obj_tag(v_r_4563_) == 0)
{
lean_object* v_k_4564_; lean_object* v_v_4565_; lean_object* v___x_4567_; uint8_t v_isShared_4568_; uint8_t v_isSharedCheck_4588_; 
lean_inc(v_l_4546_);
v_k_4564_ = lean_ctor_get(v_impl_4459_, 1);
v_v_4565_ = lean_ctor_get(v_impl_4459_, 2);
v_isSharedCheck_4588_ = !lean_is_exclusive(v_impl_4459_);
if (v_isSharedCheck_4588_ == 0)
{
lean_object* v_unused_4589_; lean_object* v_unused_4590_; lean_object* v_unused_4591_; 
v_unused_4589_ = lean_ctor_get(v_impl_4459_, 4);
lean_dec(v_unused_4589_);
v_unused_4590_ = lean_ctor_get(v_impl_4459_, 3);
lean_dec(v_unused_4590_);
v_unused_4591_ = lean_ctor_get(v_impl_4459_, 0);
lean_dec(v_unused_4591_);
v___x_4567_ = v_impl_4459_;
v_isShared_4568_ = v_isSharedCheck_4588_;
goto v_resetjp_4566_;
}
else
{
lean_inc(v_v_4565_);
lean_inc(v_k_4564_);
lean_dec(v_impl_4459_);
v___x_4567_ = lean_box(0);
v_isShared_4568_ = v_isSharedCheck_4588_;
goto v_resetjp_4566_;
}
v_resetjp_4566_:
{
lean_object* v_k_4569_; lean_object* v_v_4570_; lean_object* v___x_4572_; uint8_t v_isShared_4573_; uint8_t v_isSharedCheck_4584_; 
v_k_4569_ = lean_ctor_get(v_r_4563_, 1);
v_v_4570_ = lean_ctor_get(v_r_4563_, 2);
v_isSharedCheck_4584_ = !lean_is_exclusive(v_r_4563_);
if (v_isSharedCheck_4584_ == 0)
{
lean_object* v_unused_4585_; lean_object* v_unused_4586_; lean_object* v_unused_4587_; 
v_unused_4585_ = lean_ctor_get(v_r_4563_, 4);
lean_dec(v_unused_4585_);
v_unused_4586_ = lean_ctor_get(v_r_4563_, 3);
lean_dec(v_unused_4586_);
v_unused_4587_ = lean_ctor_get(v_r_4563_, 0);
lean_dec(v_unused_4587_);
v___x_4572_ = v_r_4563_;
v_isShared_4573_ = v_isSharedCheck_4584_;
goto v_resetjp_4571_;
}
else
{
lean_inc(v_v_4570_);
lean_inc(v_k_4569_);
lean_dec(v_r_4563_);
v___x_4572_ = lean_box(0);
v_isShared_4573_ = v_isSharedCheck_4584_;
goto v_resetjp_4571_;
}
v_resetjp_4571_:
{
lean_object* v___x_4574_; lean_object* v___x_4576_; 
v___x_4574_ = lean_unsigned_to_nat(3u);
if (v_isShared_4573_ == 0)
{
lean_ctor_set(v___x_4572_, 4, v_l_4546_);
lean_ctor_set(v___x_4572_, 3, v_l_4546_);
lean_ctor_set(v___x_4572_, 2, v_v_4565_);
lean_ctor_set(v___x_4572_, 1, v_k_4564_);
lean_ctor_set(v___x_4572_, 0, v___x_4460_);
v___x_4576_ = v___x_4572_;
goto v_reusejp_4575_;
}
else
{
lean_object* v_reuseFailAlloc_4583_; 
v_reuseFailAlloc_4583_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4583_, 0, v___x_4460_);
lean_ctor_set(v_reuseFailAlloc_4583_, 1, v_k_4564_);
lean_ctor_set(v_reuseFailAlloc_4583_, 2, v_v_4565_);
lean_ctor_set(v_reuseFailAlloc_4583_, 3, v_l_4546_);
lean_ctor_set(v_reuseFailAlloc_4583_, 4, v_l_4546_);
v___x_4576_ = v_reuseFailAlloc_4583_;
goto v_reusejp_4575_;
}
v_reusejp_4575_:
{
lean_object* v___x_4578_; 
if (v_isShared_4568_ == 0)
{
lean_ctor_set(v___x_4567_, 4, v_l_4546_);
lean_ctor_set(v___x_4567_, 2, v_v_4452_);
lean_ctor_set(v___x_4567_, 1, v_k_4451_);
lean_ctor_set(v___x_4567_, 0, v___x_4460_);
v___x_4578_ = v___x_4567_;
goto v_reusejp_4577_;
}
else
{
lean_object* v_reuseFailAlloc_4582_; 
v_reuseFailAlloc_4582_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4582_, 0, v___x_4460_);
lean_ctor_set(v_reuseFailAlloc_4582_, 1, v_k_4451_);
lean_ctor_set(v_reuseFailAlloc_4582_, 2, v_v_4452_);
lean_ctor_set(v_reuseFailAlloc_4582_, 3, v_l_4546_);
lean_ctor_set(v_reuseFailAlloc_4582_, 4, v_l_4546_);
v___x_4578_ = v_reuseFailAlloc_4582_;
goto v_reusejp_4577_;
}
v_reusejp_4577_:
{
lean_object* v___x_4580_; 
if (v_isShared_4457_ == 0)
{
lean_ctor_set(v___x_4456_, 4, v___x_4578_);
lean_ctor_set(v___x_4456_, 3, v___x_4576_);
lean_ctor_set(v___x_4456_, 2, v_v_4570_);
lean_ctor_set(v___x_4456_, 1, v_k_4569_);
lean_ctor_set(v___x_4456_, 0, v___x_4574_);
v___x_4580_ = v___x_4456_;
goto v_reusejp_4579_;
}
else
{
lean_object* v_reuseFailAlloc_4581_; 
v_reuseFailAlloc_4581_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4581_, 0, v___x_4574_);
lean_ctor_set(v_reuseFailAlloc_4581_, 1, v_k_4569_);
lean_ctor_set(v_reuseFailAlloc_4581_, 2, v_v_4570_);
lean_ctor_set(v_reuseFailAlloc_4581_, 3, v___x_4576_);
lean_ctor_set(v_reuseFailAlloc_4581_, 4, v___x_4578_);
v___x_4580_ = v_reuseFailAlloc_4581_;
goto v_reusejp_4579_;
}
v_reusejp_4579_:
{
return v___x_4580_;
}
}
}
}
}
}
else
{
lean_object* v___x_4592_; lean_object* v___x_4594_; 
v___x_4592_ = lean_unsigned_to_nat(2u);
if (v_isShared_4457_ == 0)
{
lean_ctor_set(v___x_4456_, 4, v_r_4563_);
lean_ctor_set(v___x_4456_, 3, v_impl_4459_);
lean_ctor_set(v___x_4456_, 0, v___x_4592_);
v___x_4594_ = v___x_4456_;
goto v_reusejp_4593_;
}
else
{
lean_object* v_reuseFailAlloc_4595_; 
v_reuseFailAlloc_4595_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4595_, 0, v___x_4592_);
lean_ctor_set(v_reuseFailAlloc_4595_, 1, v_k_4451_);
lean_ctor_set(v_reuseFailAlloc_4595_, 2, v_v_4452_);
lean_ctor_set(v_reuseFailAlloc_4595_, 3, v_impl_4459_);
lean_ctor_set(v_reuseFailAlloc_4595_, 4, v_r_4563_);
v___x_4594_ = v_reuseFailAlloc_4595_;
goto v_reusejp_4593_;
}
v_reusejp_4593_:
{
return v___x_4594_;
}
}
}
}
}
case 1:
{
lean_object* v___x_4597_; 
lean_dec(v_v_4452_);
lean_dec(v_k_4451_);
if (v_isShared_4457_ == 0)
{
lean_ctor_set(v___x_4456_, 2, v_v_4448_);
lean_ctor_set(v___x_4456_, 1, v_k_4447_);
v___x_4597_ = v___x_4456_;
goto v_reusejp_4596_;
}
else
{
lean_object* v_reuseFailAlloc_4598_; 
v_reuseFailAlloc_4598_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4598_, 0, v_size_4450_);
lean_ctor_set(v_reuseFailAlloc_4598_, 1, v_k_4447_);
lean_ctor_set(v_reuseFailAlloc_4598_, 2, v_v_4448_);
lean_ctor_set(v_reuseFailAlloc_4598_, 3, v_l_4453_);
lean_ctor_set(v_reuseFailAlloc_4598_, 4, v_r_4454_);
v___x_4597_ = v_reuseFailAlloc_4598_;
goto v_reusejp_4596_;
}
v_reusejp_4596_:
{
return v___x_4597_;
}
}
default: 
{
lean_object* v_impl_4599_; lean_object* v___x_4600_; 
lean_dec(v_size_4450_);
v_impl_4599_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(v_k_4447_, v_v_4448_, v_r_4454_);
v___x_4600_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_4453_) == 0)
{
lean_object* v_size_4601_; lean_object* v_size_4602_; lean_object* v_k_4603_; lean_object* v_v_4604_; lean_object* v_l_4605_; lean_object* v_r_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; uint8_t v___x_4609_; 
v_size_4601_ = lean_ctor_get(v_l_4453_, 0);
v_size_4602_ = lean_ctor_get(v_impl_4599_, 0);
v_k_4603_ = lean_ctor_get(v_impl_4599_, 1);
v_v_4604_ = lean_ctor_get(v_impl_4599_, 2);
v_l_4605_ = lean_ctor_get(v_impl_4599_, 3);
lean_inc(v_l_4605_);
v_r_4606_ = lean_ctor_get(v_impl_4599_, 4);
v___x_4607_ = lean_unsigned_to_nat(3u);
v___x_4608_ = lean_nat_mul(v___x_4607_, v_size_4601_);
v___x_4609_ = lean_nat_dec_lt(v___x_4608_, v_size_4602_);
lean_dec(v___x_4608_);
if (v___x_4609_ == 0)
{
lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4613_; 
lean_dec(v_l_4605_);
v___x_4610_ = lean_nat_add(v___x_4600_, v_size_4601_);
v___x_4611_ = lean_nat_add(v___x_4610_, v_size_4602_);
lean_dec(v___x_4610_);
if (v_isShared_4457_ == 0)
{
lean_ctor_set(v___x_4456_, 4, v_impl_4599_);
lean_ctor_set(v___x_4456_, 0, v___x_4611_);
v___x_4613_ = v___x_4456_;
goto v_reusejp_4612_;
}
else
{
lean_object* v_reuseFailAlloc_4614_; 
v_reuseFailAlloc_4614_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4614_, 0, v___x_4611_);
lean_ctor_set(v_reuseFailAlloc_4614_, 1, v_k_4451_);
lean_ctor_set(v_reuseFailAlloc_4614_, 2, v_v_4452_);
lean_ctor_set(v_reuseFailAlloc_4614_, 3, v_l_4453_);
lean_ctor_set(v_reuseFailAlloc_4614_, 4, v_impl_4599_);
v___x_4613_ = v_reuseFailAlloc_4614_;
goto v_reusejp_4612_;
}
v_reusejp_4612_:
{
return v___x_4613_;
}
}
else
{
lean_object* v___x_4616_; uint8_t v_isShared_4617_; uint8_t v_isSharedCheck_4678_; 
lean_inc(v_r_4606_);
lean_inc(v_v_4604_);
lean_inc(v_k_4603_);
lean_inc(v_size_4602_);
v_isSharedCheck_4678_ = !lean_is_exclusive(v_impl_4599_);
if (v_isSharedCheck_4678_ == 0)
{
lean_object* v_unused_4679_; lean_object* v_unused_4680_; lean_object* v_unused_4681_; lean_object* v_unused_4682_; lean_object* v_unused_4683_; 
v_unused_4679_ = lean_ctor_get(v_impl_4599_, 4);
lean_dec(v_unused_4679_);
v_unused_4680_ = lean_ctor_get(v_impl_4599_, 3);
lean_dec(v_unused_4680_);
v_unused_4681_ = lean_ctor_get(v_impl_4599_, 2);
lean_dec(v_unused_4681_);
v_unused_4682_ = lean_ctor_get(v_impl_4599_, 1);
lean_dec(v_unused_4682_);
v_unused_4683_ = lean_ctor_get(v_impl_4599_, 0);
lean_dec(v_unused_4683_);
v___x_4616_ = v_impl_4599_;
v_isShared_4617_ = v_isSharedCheck_4678_;
goto v_resetjp_4615_;
}
else
{
lean_dec(v_impl_4599_);
v___x_4616_ = lean_box(0);
v_isShared_4617_ = v_isSharedCheck_4678_;
goto v_resetjp_4615_;
}
v_resetjp_4615_:
{
lean_object* v_size_4618_; lean_object* v_k_4619_; lean_object* v_v_4620_; lean_object* v_l_4621_; lean_object* v_r_4622_; lean_object* v_size_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; uint8_t v___x_4626_; 
v_size_4618_ = lean_ctor_get(v_l_4605_, 0);
v_k_4619_ = lean_ctor_get(v_l_4605_, 1);
v_v_4620_ = lean_ctor_get(v_l_4605_, 2);
v_l_4621_ = lean_ctor_get(v_l_4605_, 3);
v_r_4622_ = lean_ctor_get(v_l_4605_, 4);
v_size_4623_ = lean_ctor_get(v_r_4606_, 0);
v___x_4624_ = lean_unsigned_to_nat(2u);
v___x_4625_ = lean_nat_mul(v___x_4624_, v_size_4623_);
v___x_4626_ = lean_nat_dec_lt(v_size_4618_, v___x_4625_);
lean_dec(v___x_4625_);
if (v___x_4626_ == 0)
{
lean_object* v___x_4628_; uint8_t v_isShared_4629_; uint8_t v_isSharedCheck_4654_; 
lean_inc(v_r_4622_);
lean_inc(v_l_4621_);
lean_inc(v_v_4620_);
lean_inc(v_k_4619_);
v_isSharedCheck_4654_ = !lean_is_exclusive(v_l_4605_);
if (v_isSharedCheck_4654_ == 0)
{
lean_object* v_unused_4655_; lean_object* v_unused_4656_; lean_object* v_unused_4657_; lean_object* v_unused_4658_; lean_object* v_unused_4659_; 
v_unused_4655_ = lean_ctor_get(v_l_4605_, 4);
lean_dec(v_unused_4655_);
v_unused_4656_ = lean_ctor_get(v_l_4605_, 3);
lean_dec(v_unused_4656_);
v_unused_4657_ = lean_ctor_get(v_l_4605_, 2);
lean_dec(v_unused_4657_);
v_unused_4658_ = lean_ctor_get(v_l_4605_, 1);
lean_dec(v_unused_4658_);
v_unused_4659_ = lean_ctor_get(v_l_4605_, 0);
lean_dec(v_unused_4659_);
v___x_4628_ = v_l_4605_;
v_isShared_4629_ = v_isSharedCheck_4654_;
goto v_resetjp_4627_;
}
else
{
lean_dec(v_l_4605_);
v___x_4628_ = lean_box(0);
v_isShared_4629_ = v_isSharedCheck_4654_;
goto v_resetjp_4627_;
}
v_resetjp_4627_:
{
lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___y_4633_; lean_object* v___y_4634_; lean_object* v___y_4635_; lean_object* v___y_4644_; 
v___x_4630_ = lean_nat_add(v___x_4600_, v_size_4601_);
v___x_4631_ = lean_nat_add(v___x_4630_, v_size_4602_);
lean_dec(v_size_4602_);
if (lean_obj_tag(v_l_4621_) == 0)
{
lean_object* v_size_4652_; 
v_size_4652_ = lean_ctor_get(v_l_4621_, 0);
lean_inc(v_size_4652_);
v___y_4644_ = v_size_4652_;
goto v___jp_4643_;
}
else
{
lean_object* v___x_4653_; 
v___x_4653_ = lean_unsigned_to_nat(0u);
v___y_4644_ = v___x_4653_;
goto v___jp_4643_;
}
v___jp_4632_:
{
lean_object* v___x_4636_; lean_object* v___x_4638_; 
v___x_4636_ = lean_nat_add(v___y_4633_, v___y_4635_);
lean_dec(v___y_4635_);
lean_dec(v___y_4633_);
if (v_isShared_4629_ == 0)
{
lean_ctor_set(v___x_4628_, 4, v_r_4606_);
lean_ctor_set(v___x_4628_, 3, v_r_4622_);
lean_ctor_set(v___x_4628_, 2, v_v_4604_);
lean_ctor_set(v___x_4628_, 1, v_k_4603_);
lean_ctor_set(v___x_4628_, 0, v___x_4636_);
v___x_4638_ = v___x_4628_;
goto v_reusejp_4637_;
}
else
{
lean_object* v_reuseFailAlloc_4642_; 
v_reuseFailAlloc_4642_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4642_, 0, v___x_4636_);
lean_ctor_set(v_reuseFailAlloc_4642_, 1, v_k_4603_);
lean_ctor_set(v_reuseFailAlloc_4642_, 2, v_v_4604_);
lean_ctor_set(v_reuseFailAlloc_4642_, 3, v_r_4622_);
lean_ctor_set(v_reuseFailAlloc_4642_, 4, v_r_4606_);
v___x_4638_ = v_reuseFailAlloc_4642_;
goto v_reusejp_4637_;
}
v_reusejp_4637_:
{
lean_object* v___x_4640_; 
if (v_isShared_4617_ == 0)
{
lean_ctor_set(v___x_4616_, 4, v___x_4638_);
lean_ctor_set(v___x_4616_, 3, v___y_4634_);
lean_ctor_set(v___x_4616_, 2, v_v_4620_);
lean_ctor_set(v___x_4616_, 1, v_k_4619_);
lean_ctor_set(v___x_4616_, 0, v___x_4631_);
v___x_4640_ = v___x_4616_;
goto v_reusejp_4639_;
}
else
{
lean_object* v_reuseFailAlloc_4641_; 
v_reuseFailAlloc_4641_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4641_, 0, v___x_4631_);
lean_ctor_set(v_reuseFailAlloc_4641_, 1, v_k_4619_);
lean_ctor_set(v_reuseFailAlloc_4641_, 2, v_v_4620_);
lean_ctor_set(v_reuseFailAlloc_4641_, 3, v___y_4634_);
lean_ctor_set(v_reuseFailAlloc_4641_, 4, v___x_4638_);
v___x_4640_ = v_reuseFailAlloc_4641_;
goto v_reusejp_4639_;
}
v_reusejp_4639_:
{
return v___x_4640_;
}
}
}
v___jp_4643_:
{
lean_object* v___x_4645_; lean_object* v___x_4647_; 
v___x_4645_ = lean_nat_add(v___x_4630_, v___y_4644_);
lean_dec(v___y_4644_);
lean_dec(v___x_4630_);
if (v_isShared_4457_ == 0)
{
lean_ctor_set(v___x_4456_, 4, v_l_4621_);
lean_ctor_set(v___x_4456_, 0, v___x_4645_);
v___x_4647_ = v___x_4456_;
goto v_reusejp_4646_;
}
else
{
lean_object* v_reuseFailAlloc_4651_; 
v_reuseFailAlloc_4651_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4651_, 0, v___x_4645_);
lean_ctor_set(v_reuseFailAlloc_4651_, 1, v_k_4451_);
lean_ctor_set(v_reuseFailAlloc_4651_, 2, v_v_4452_);
lean_ctor_set(v_reuseFailAlloc_4651_, 3, v_l_4453_);
lean_ctor_set(v_reuseFailAlloc_4651_, 4, v_l_4621_);
v___x_4647_ = v_reuseFailAlloc_4651_;
goto v_reusejp_4646_;
}
v_reusejp_4646_:
{
lean_object* v___x_4648_; 
v___x_4648_ = lean_nat_add(v___x_4600_, v_size_4623_);
if (lean_obj_tag(v_r_4622_) == 0)
{
lean_object* v_size_4649_; 
v_size_4649_ = lean_ctor_get(v_r_4622_, 0);
lean_inc(v_size_4649_);
v___y_4633_ = v___x_4648_;
v___y_4634_ = v___x_4647_;
v___y_4635_ = v_size_4649_;
goto v___jp_4632_;
}
else
{
lean_object* v___x_4650_; 
v___x_4650_ = lean_unsigned_to_nat(0u);
v___y_4633_ = v___x_4648_;
v___y_4634_ = v___x_4647_;
v___y_4635_ = v___x_4650_;
goto v___jp_4632_;
}
}
}
}
}
else
{
lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4664_; 
lean_del_object(v___x_4456_);
v___x_4660_ = lean_nat_add(v___x_4600_, v_size_4601_);
v___x_4661_ = lean_nat_add(v___x_4660_, v_size_4602_);
lean_dec(v_size_4602_);
v___x_4662_ = lean_nat_add(v___x_4660_, v_size_4618_);
lean_dec(v___x_4660_);
lean_inc_ref(v_l_4453_);
if (v_isShared_4617_ == 0)
{
lean_ctor_set(v___x_4616_, 4, v_l_4605_);
lean_ctor_set(v___x_4616_, 3, v_l_4453_);
lean_ctor_set(v___x_4616_, 2, v_v_4452_);
lean_ctor_set(v___x_4616_, 1, v_k_4451_);
lean_ctor_set(v___x_4616_, 0, v___x_4662_);
v___x_4664_ = v___x_4616_;
goto v_reusejp_4663_;
}
else
{
lean_object* v_reuseFailAlloc_4677_; 
v_reuseFailAlloc_4677_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4677_, 0, v___x_4662_);
lean_ctor_set(v_reuseFailAlloc_4677_, 1, v_k_4451_);
lean_ctor_set(v_reuseFailAlloc_4677_, 2, v_v_4452_);
lean_ctor_set(v_reuseFailAlloc_4677_, 3, v_l_4453_);
lean_ctor_set(v_reuseFailAlloc_4677_, 4, v_l_4605_);
v___x_4664_ = v_reuseFailAlloc_4677_;
goto v_reusejp_4663_;
}
v_reusejp_4663_:
{
lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4671_; 
v_isSharedCheck_4671_ = !lean_is_exclusive(v_l_4453_);
if (v_isSharedCheck_4671_ == 0)
{
lean_object* v_unused_4672_; lean_object* v_unused_4673_; lean_object* v_unused_4674_; lean_object* v_unused_4675_; lean_object* v_unused_4676_; 
v_unused_4672_ = lean_ctor_get(v_l_4453_, 4);
lean_dec(v_unused_4672_);
v_unused_4673_ = lean_ctor_get(v_l_4453_, 3);
lean_dec(v_unused_4673_);
v_unused_4674_ = lean_ctor_get(v_l_4453_, 2);
lean_dec(v_unused_4674_);
v_unused_4675_ = lean_ctor_get(v_l_4453_, 1);
lean_dec(v_unused_4675_);
v_unused_4676_ = lean_ctor_get(v_l_4453_, 0);
lean_dec(v_unused_4676_);
v___x_4666_ = v_l_4453_;
v_isShared_4667_ = v_isSharedCheck_4671_;
goto v_resetjp_4665_;
}
else
{
lean_dec(v_l_4453_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4671_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
lean_object* v___x_4669_; 
if (v_isShared_4667_ == 0)
{
lean_ctor_set(v___x_4666_, 4, v_r_4606_);
lean_ctor_set(v___x_4666_, 3, v___x_4664_);
lean_ctor_set(v___x_4666_, 2, v_v_4604_);
lean_ctor_set(v___x_4666_, 1, v_k_4603_);
lean_ctor_set(v___x_4666_, 0, v___x_4661_);
v___x_4669_ = v___x_4666_;
goto v_reusejp_4668_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v___x_4661_);
lean_ctor_set(v_reuseFailAlloc_4670_, 1, v_k_4603_);
lean_ctor_set(v_reuseFailAlloc_4670_, 2, v_v_4604_);
lean_ctor_set(v_reuseFailAlloc_4670_, 3, v___x_4664_);
lean_ctor_set(v_reuseFailAlloc_4670_, 4, v_r_4606_);
v___x_4669_ = v_reuseFailAlloc_4670_;
goto v_reusejp_4668_;
}
v_reusejp_4668_:
{
return v___x_4669_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_4684_; 
v_l_4684_ = lean_ctor_get(v_impl_4599_, 3);
lean_inc(v_l_4684_);
if (lean_obj_tag(v_l_4684_) == 0)
{
lean_object* v_r_4685_; lean_object* v_k_4686_; lean_object* v_v_4687_; lean_object* v___x_4689_; uint8_t v_isShared_4690_; uint8_t v_isSharedCheck_4710_; 
v_r_4685_ = lean_ctor_get(v_impl_4599_, 4);
v_k_4686_ = lean_ctor_get(v_impl_4599_, 1);
v_v_4687_ = lean_ctor_get(v_impl_4599_, 2);
v_isSharedCheck_4710_ = !lean_is_exclusive(v_impl_4599_);
if (v_isSharedCheck_4710_ == 0)
{
lean_object* v_unused_4711_; lean_object* v_unused_4712_; 
v_unused_4711_ = lean_ctor_get(v_impl_4599_, 3);
lean_dec(v_unused_4711_);
v_unused_4712_ = lean_ctor_get(v_impl_4599_, 0);
lean_dec(v_unused_4712_);
v___x_4689_ = v_impl_4599_;
v_isShared_4690_ = v_isSharedCheck_4710_;
goto v_resetjp_4688_;
}
else
{
lean_inc(v_r_4685_);
lean_inc(v_v_4687_);
lean_inc(v_k_4686_);
lean_dec(v_impl_4599_);
v___x_4689_ = lean_box(0);
v_isShared_4690_ = v_isSharedCheck_4710_;
goto v_resetjp_4688_;
}
v_resetjp_4688_:
{
lean_object* v_k_4691_; lean_object* v_v_4692_; lean_object* v___x_4694_; uint8_t v_isShared_4695_; uint8_t v_isSharedCheck_4706_; 
v_k_4691_ = lean_ctor_get(v_l_4684_, 1);
v_v_4692_ = lean_ctor_get(v_l_4684_, 2);
v_isSharedCheck_4706_ = !lean_is_exclusive(v_l_4684_);
if (v_isSharedCheck_4706_ == 0)
{
lean_object* v_unused_4707_; lean_object* v_unused_4708_; lean_object* v_unused_4709_; 
v_unused_4707_ = lean_ctor_get(v_l_4684_, 4);
lean_dec(v_unused_4707_);
v_unused_4708_ = lean_ctor_get(v_l_4684_, 3);
lean_dec(v_unused_4708_);
v_unused_4709_ = lean_ctor_get(v_l_4684_, 0);
lean_dec(v_unused_4709_);
v___x_4694_ = v_l_4684_;
v_isShared_4695_ = v_isSharedCheck_4706_;
goto v_resetjp_4693_;
}
else
{
lean_inc(v_v_4692_);
lean_inc(v_k_4691_);
lean_dec(v_l_4684_);
v___x_4694_ = lean_box(0);
v_isShared_4695_ = v_isSharedCheck_4706_;
goto v_resetjp_4693_;
}
v_resetjp_4693_:
{
lean_object* v___x_4696_; lean_object* v___x_4698_; 
v___x_4696_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_4685_, 2);
if (v_isShared_4695_ == 0)
{
lean_ctor_set(v___x_4694_, 4, v_r_4685_);
lean_ctor_set(v___x_4694_, 3, v_r_4685_);
lean_ctor_set(v___x_4694_, 2, v_v_4452_);
lean_ctor_set(v___x_4694_, 1, v_k_4451_);
lean_ctor_set(v___x_4694_, 0, v___x_4600_);
v___x_4698_ = v___x_4694_;
goto v_reusejp_4697_;
}
else
{
lean_object* v_reuseFailAlloc_4705_; 
v_reuseFailAlloc_4705_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4705_, 0, v___x_4600_);
lean_ctor_set(v_reuseFailAlloc_4705_, 1, v_k_4451_);
lean_ctor_set(v_reuseFailAlloc_4705_, 2, v_v_4452_);
lean_ctor_set(v_reuseFailAlloc_4705_, 3, v_r_4685_);
lean_ctor_set(v_reuseFailAlloc_4705_, 4, v_r_4685_);
v___x_4698_ = v_reuseFailAlloc_4705_;
goto v_reusejp_4697_;
}
v_reusejp_4697_:
{
lean_object* v___x_4700_; 
lean_inc(v_r_4685_);
if (v_isShared_4690_ == 0)
{
lean_ctor_set(v___x_4689_, 3, v_r_4685_);
lean_ctor_set(v___x_4689_, 0, v___x_4600_);
v___x_4700_ = v___x_4689_;
goto v_reusejp_4699_;
}
else
{
lean_object* v_reuseFailAlloc_4704_; 
v_reuseFailAlloc_4704_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4704_, 0, v___x_4600_);
lean_ctor_set(v_reuseFailAlloc_4704_, 1, v_k_4686_);
lean_ctor_set(v_reuseFailAlloc_4704_, 2, v_v_4687_);
lean_ctor_set(v_reuseFailAlloc_4704_, 3, v_r_4685_);
lean_ctor_set(v_reuseFailAlloc_4704_, 4, v_r_4685_);
v___x_4700_ = v_reuseFailAlloc_4704_;
goto v_reusejp_4699_;
}
v_reusejp_4699_:
{
lean_object* v___x_4702_; 
if (v_isShared_4457_ == 0)
{
lean_ctor_set(v___x_4456_, 4, v___x_4700_);
lean_ctor_set(v___x_4456_, 3, v___x_4698_);
lean_ctor_set(v___x_4456_, 2, v_v_4692_);
lean_ctor_set(v___x_4456_, 1, v_k_4691_);
lean_ctor_set(v___x_4456_, 0, v___x_4696_);
v___x_4702_ = v___x_4456_;
goto v_reusejp_4701_;
}
else
{
lean_object* v_reuseFailAlloc_4703_; 
v_reuseFailAlloc_4703_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4703_, 0, v___x_4696_);
lean_ctor_set(v_reuseFailAlloc_4703_, 1, v_k_4691_);
lean_ctor_set(v_reuseFailAlloc_4703_, 2, v_v_4692_);
lean_ctor_set(v_reuseFailAlloc_4703_, 3, v___x_4698_);
lean_ctor_set(v_reuseFailAlloc_4703_, 4, v___x_4700_);
v___x_4702_ = v_reuseFailAlloc_4703_;
goto v_reusejp_4701_;
}
v_reusejp_4701_:
{
return v___x_4702_;
}
}
}
}
}
}
else
{
lean_object* v_r_4713_; 
v_r_4713_ = lean_ctor_get(v_impl_4599_, 4);
lean_inc(v_r_4713_);
if (lean_obj_tag(v_r_4713_) == 0)
{
lean_object* v_k_4714_; lean_object* v_v_4715_; lean_object* v___x_4717_; uint8_t v_isShared_4718_; uint8_t v_isSharedCheck_4726_; 
v_k_4714_ = lean_ctor_get(v_impl_4599_, 1);
v_v_4715_ = lean_ctor_get(v_impl_4599_, 2);
v_isSharedCheck_4726_ = !lean_is_exclusive(v_impl_4599_);
if (v_isSharedCheck_4726_ == 0)
{
lean_object* v_unused_4727_; lean_object* v_unused_4728_; lean_object* v_unused_4729_; 
v_unused_4727_ = lean_ctor_get(v_impl_4599_, 4);
lean_dec(v_unused_4727_);
v_unused_4728_ = lean_ctor_get(v_impl_4599_, 3);
lean_dec(v_unused_4728_);
v_unused_4729_ = lean_ctor_get(v_impl_4599_, 0);
lean_dec(v_unused_4729_);
v___x_4717_ = v_impl_4599_;
v_isShared_4718_ = v_isSharedCheck_4726_;
goto v_resetjp_4716_;
}
else
{
lean_inc(v_v_4715_);
lean_inc(v_k_4714_);
lean_dec(v_impl_4599_);
v___x_4717_ = lean_box(0);
v_isShared_4718_ = v_isSharedCheck_4726_;
goto v_resetjp_4716_;
}
v_resetjp_4716_:
{
lean_object* v___x_4719_; lean_object* v___x_4721_; 
v___x_4719_ = lean_unsigned_to_nat(3u);
if (v_isShared_4718_ == 0)
{
lean_ctor_set(v___x_4717_, 4, v_l_4684_);
lean_ctor_set(v___x_4717_, 2, v_v_4452_);
lean_ctor_set(v___x_4717_, 1, v_k_4451_);
lean_ctor_set(v___x_4717_, 0, v___x_4600_);
v___x_4721_ = v___x_4717_;
goto v_reusejp_4720_;
}
else
{
lean_object* v_reuseFailAlloc_4725_; 
v_reuseFailAlloc_4725_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4725_, 0, v___x_4600_);
lean_ctor_set(v_reuseFailAlloc_4725_, 1, v_k_4451_);
lean_ctor_set(v_reuseFailAlloc_4725_, 2, v_v_4452_);
lean_ctor_set(v_reuseFailAlloc_4725_, 3, v_l_4684_);
lean_ctor_set(v_reuseFailAlloc_4725_, 4, v_l_4684_);
v___x_4721_ = v_reuseFailAlloc_4725_;
goto v_reusejp_4720_;
}
v_reusejp_4720_:
{
lean_object* v___x_4723_; 
if (v_isShared_4457_ == 0)
{
lean_ctor_set(v___x_4456_, 4, v_r_4713_);
lean_ctor_set(v___x_4456_, 3, v___x_4721_);
lean_ctor_set(v___x_4456_, 2, v_v_4715_);
lean_ctor_set(v___x_4456_, 1, v_k_4714_);
lean_ctor_set(v___x_4456_, 0, v___x_4719_);
v___x_4723_ = v___x_4456_;
goto v_reusejp_4722_;
}
else
{
lean_object* v_reuseFailAlloc_4724_; 
v_reuseFailAlloc_4724_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4724_, 0, v___x_4719_);
lean_ctor_set(v_reuseFailAlloc_4724_, 1, v_k_4714_);
lean_ctor_set(v_reuseFailAlloc_4724_, 2, v_v_4715_);
lean_ctor_set(v_reuseFailAlloc_4724_, 3, v___x_4721_);
lean_ctor_set(v_reuseFailAlloc_4724_, 4, v_r_4713_);
v___x_4723_ = v_reuseFailAlloc_4724_;
goto v_reusejp_4722_;
}
v_reusejp_4722_:
{
return v___x_4723_;
}
}
}
}
else
{
lean_object* v___x_4730_; lean_object* v___x_4732_; 
v___x_4730_ = lean_unsigned_to_nat(2u);
if (v_isShared_4457_ == 0)
{
lean_ctor_set(v___x_4456_, 4, v_impl_4599_);
lean_ctor_set(v___x_4456_, 3, v_r_4713_);
lean_ctor_set(v___x_4456_, 0, v___x_4730_);
v___x_4732_ = v___x_4456_;
goto v_reusejp_4731_;
}
else
{
lean_object* v_reuseFailAlloc_4733_; 
v_reuseFailAlloc_4733_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4733_, 0, v___x_4730_);
lean_ctor_set(v_reuseFailAlloc_4733_, 1, v_k_4451_);
lean_ctor_set(v_reuseFailAlloc_4733_, 2, v_v_4452_);
lean_ctor_set(v_reuseFailAlloc_4733_, 3, v_r_4713_);
lean_ctor_set(v_reuseFailAlloc_4733_, 4, v_impl_4599_);
v___x_4732_ = v_reuseFailAlloc_4733_;
goto v_reusejp_4731_;
}
v_reusejp_4731_:
{
return v___x_4732_;
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
lean_object* v___x_4735_; lean_object* v___x_4736_; 
v___x_4735_ = lean_unsigned_to_nat(1u);
v___x_4736_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4736_, 0, v___x_4735_);
lean_ctor_set(v___x_4736_, 1, v_k_4447_);
lean_ctor_set(v___x_4736_, 2, v_v_4448_);
lean_ctor_set(v___x_4736_, 3, v_t_4449_);
lean_ctor_set(v___x_4736_, 4, v_t_4449_);
return v___x_4736_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(lean_object* v_t_4737_, lean_object* v_k_4738_){
_start:
{
if (lean_obj_tag(v_t_4737_) == 0)
{
lean_object* v_k_4739_; lean_object* v_v_4740_; lean_object* v_l_4741_; lean_object* v_r_4742_; uint8_t v___x_4743_; 
v_k_4739_ = lean_ctor_get(v_t_4737_, 1);
v_v_4740_ = lean_ctor_get(v_t_4737_, 2);
v_l_4741_ = lean_ctor_get(v_t_4737_, 3);
v_r_4742_ = lean_ctor_get(v_t_4737_, 4);
v___x_4743_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_4738_, v_k_4739_);
switch(v___x_4743_)
{
case 0:
{
v_t_4737_ = v_l_4741_;
goto _start;
}
case 1:
{
lean_object* v___x_4745_; 
lean_inc(v_v_4740_);
v___x_4745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4745_, 0, v_v_4740_);
return v___x_4745_;
}
default: 
{
v_t_4737_ = v_r_4742_;
goto _start;
}
}
}
else
{
lean_object* v___x_4747_; 
v___x_4747_ = lean_box(0);
return v___x_4747_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg___boxed(lean_object* v_t_4748_, lean_object* v_k_4749_){
_start:
{
lean_object* v_res_4750_; 
v_res_4750_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_t_4748_, v_k_4749_);
lean_dec(v_k_4749_);
lean_dec(v_t_4748_);
return v_res_4750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_insert___redArg(lean_object* v_map_4751_, lean_object* v_k_4752_, lean_object* v_v_4753_){
_start:
{
lean_object* v___x_4754_; 
v___x_4754_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_map_4751_, v_k_4752_);
if (lean_obj_tag(v___x_4754_) == 0)
{
lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; 
v___x_4755_ = lean_box(0);
v___x_4756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4756_, 0, v_v_4753_);
lean_ctor_set(v___x_4756_, 1, v___x_4755_);
v___x_4757_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(v_k_4752_, v___x_4756_, v_map_4751_);
return v___x_4757_;
}
else
{
lean_object* v_val_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; 
v_val_4758_ = lean_ctor_get(v___x_4754_, 0);
lean_inc(v_val_4758_);
lean_dec_ref_known(v___x_4754_, 1);
v___x_4759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4759_, 0, v_v_4753_);
lean_ctor_set(v___x_4759_, 1, v_val_4758_);
v___x_4760_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(v_k_4752_, v___x_4759_, v_map_4751_);
return v___x_4760_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_insert(lean_object* v_00_u03b1_4761_, lean_object* v_map_4762_, lean_object* v_k_4763_, lean_object* v_v_4764_){
_start:
{
lean_object* v___x_4765_; 
v___x_4765_ = l_Lean_Parser_TokenMap_insert___redArg(v_map_4762_, v_k_4763_, v_v_4764_);
return v___x_4765_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0(lean_object* v_00_u03b4_4766_, lean_object* v_t_4767_, lean_object* v_k_4768_){
_start:
{
lean_object* v___x_4769_; 
v___x_4769_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_t_4767_, v_k_4768_);
return v___x_4769_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___boxed(lean_object* v_00_u03b4_4770_, lean_object* v_t_4771_, lean_object* v_k_4772_){
_start:
{
lean_object* v_res_4773_; 
v_res_4773_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0(v_00_u03b4_4770_, v_t_4771_, v_k_4772_);
lean_dec(v_k_4772_);
lean_dec(v_t_4771_);
return v_res_4773_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1(lean_object* v_00_u03b2_4774_, lean_object* v_k_4775_, lean_object* v_v_4776_, lean_object* v_t_4777_, lean_object* v_hl_4778_){
_start:
{
lean_object* v___x_4779_; 
v___x_4779_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(v_k_4775_, v_v_4776_, v_t_4777_);
return v___x_4779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instInhabited___redArg(){
_start:
{
lean_object* v___x_4781_; 
v___x_4781_ = lean_box(1);
return v___x_4781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instInhabited___redArg___boxed(lean_object* v___dummy_4782_){
_start:
{
lean_object* v_res_4783_; 
v_res_4783_ = l_Lean_Parser_TokenMap_instInhabited___redArg();
return v_res_4783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instInhabited(lean_object* v_00_u03b1_4784_){
_start:
{
lean_object* v___x_4785_; 
v___x_4785_ = lean_box(1);
return v___x_4785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instEmptyCollection___redArg(){
_start:
{
lean_object* v___x_4787_; 
v___x_4787_ = lean_box(1);
return v___x_4787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instEmptyCollection___redArg___boxed(lean_object* v___dummy_4788_){
_start:
{
lean_object* v_res_4789_; 
v_res_4789_ = l_Lean_Parser_TokenMap_instEmptyCollection___redArg();
return v_res_4789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instEmptyCollection(lean_object* v_00_u03b1_4790_){
_start:
{
lean_object* v___x_4791_; 
v___x_4791_ = lean_box(1);
return v___x_4791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__0(lean_object* v_f_4792_, lean_object* v_a_4793_, lean_object* v_b_4794_, lean_object* v_c_4795_){
_start:
{
lean_object* v___x_4796_; lean_object* v___x_4797_; 
v___x_4796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4796_, 0, v_a_4793_);
lean_ctor_set(v___x_4796_, 1, v_b_4794_);
v___x_4797_ = lean_apply_2(v_f_4792_, v___x_4796_, v_c_4795_);
return v___x_4797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__1(lean_object* v_toPure_4798_, lean_object* v_____do__lift_4799_){
_start:
{
lean_object* v_a_4800_; lean_object* v___x_4801_; 
v_a_4800_ = lean_ctor_get(v_____do__lift_4799_, 0);
lean_inc(v_a_4800_);
lean_dec_ref(v_____do__lift_4799_);
v___x_4801_ = lean_apply_2(v_toPure_4798_, lean_box(0), v_a_4800_);
return v___x_4801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg(lean_object* v_inst_4802_, lean_object* v_m_4803_, lean_object* v_init_4804_, lean_object* v_f_4805_){
_start:
{
lean_object* v_toApplicative_4806_; lean_object* v_toBind_4807_; lean_object* v_toPure_4808_; lean_object* v___f_4809_; lean_object* v___x_4810_; lean_object* v___f_4811_; lean_object* v___x_4812_; 
v_toApplicative_4806_ = lean_ctor_get(v_inst_4802_, 0);
v_toBind_4807_ = lean_ctor_get(v_inst_4802_, 1);
lean_inc(v_toBind_4807_);
v_toPure_4808_ = lean_ctor_get(v_toApplicative_4806_, 1);
lean_inc(v_toPure_4808_);
v___f_4809_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_4809_, 0, v_f_4805_);
v___x_4810_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_4802_, v___f_4809_, v_init_4804_, v_m_4803_);
v___f_4811_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_4811_, 0, v_toPure_4808_);
v___x_4812_ = lean_apply_4(v_toBind_4807_, lean_box(0), lean_box(0), v___x_4810_, v___f_4811_);
return v___x_4812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1(lean_object* v_m_4813_, lean_object* v_00_u03b1_4814_, lean_object* v_inst_4815_, lean_object* v_00_u03b2_4816_, lean_object* v_m_4817_, lean_object* v_init_4818_, lean_object* v_f_4819_){
_start:
{
lean_object* v_toApplicative_4820_; lean_object* v_toBind_4821_; lean_object* v_toPure_4822_; lean_object* v___f_4823_; lean_object* v___x_4824_; lean_object* v___f_4825_; lean_object* v___x_4826_; 
v_toApplicative_4820_ = lean_ctor_get(v_inst_4815_, 0);
v_toBind_4821_ = lean_ctor_get(v_inst_4815_, 1);
lean_inc(v_toBind_4821_);
v_toPure_4822_ = lean_ctor_get(v_toApplicative_4820_, 1);
lean_inc(v_toPure_4822_);
v___f_4823_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_4823_, 0, v_f_4819_);
v___x_4824_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_4815_, v___f_4823_, v_init_4818_, v_m_4817_);
v___f_4825_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_4825_, 0, v_toPure_4822_);
v___x_4826_ = lean_apply_4(v_toBind_4821_, lean_box(0), lean_box(0), v___x_4824_, v___f_4825_);
return v___x_4826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___redArg(lean_object* v_inst_4827_){
_start:
{
lean_object* v___x_4828_; 
v___x_4828_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1), 7, 3);
lean_closure_set(v___x_4828_, 0, lean_box(0));
lean_closure_set(v___x_4828_, 1, lean_box(0));
lean_closure_set(v___x_4828_, 2, v_inst_4827_);
return v___x_4828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad(lean_object* v_m_4829_, lean_object* v_00_u03b1_4830_, lean_object* v_inst_4831_){
_start:
{
lean_object* v___x_4832_; 
v___x_4832_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1), 7, 3);
lean_closure_set(v___x_4832_, 0, lean_box(0));
lean_closure_set(v___x_4832_, 1, lean_box(0));
lean_closure_set(v___x_4832_, 2, v_inst_4831_);
return v___x_4832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorIdx___impl(uint8_t v_x_4837_){
_start:
{
lean_object* v___x_4838_; lean_object* v___x_4839_; 
v___x_4838_ = lean_box(v_x_4837_);
v___x_4839_ = lean_obj_tag_nat(v___x_4838_);
lean_dec(v___x_4838_);
return v___x_4839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorIdx___impl___boxed(lean_object* v_x_4840_){
_start:
{
uint8_t v_x_4__boxed_4841_; lean_object* v_res_4842_; 
v_x_4__boxed_4841_ = lean_unbox(v_x_4840_);
v_res_4842_ = l_Lean_Parser_LeadingIdentBehavior_ctorIdx___impl(v_x_4__boxed_4841_);
return v_res_4842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim___redArg(lean_object* v_k_4843_){
_start:
{
lean_inc(v_k_4843_);
return v_k_4843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim___redArg___boxed(lean_object* v_k_4844_){
_start:
{
lean_object* v_res_4845_; 
v_res_4845_ = l_Lean_Parser_LeadingIdentBehavior_ctorElim___redArg(v_k_4844_);
lean_dec(v_k_4844_);
return v_res_4845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim(lean_object* v_motive_4846_, lean_object* v_ctorIdx_4847_, uint8_t v_t_4848_, lean_object* v_h_4849_, lean_object* v_k_4850_){
_start:
{
lean_inc(v_k_4850_);
return v_k_4850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim___boxed(lean_object* v_motive_4851_, lean_object* v_ctorIdx_4852_, lean_object* v_t_4853_, lean_object* v_h_4854_, lean_object* v_k_4855_){
_start:
{
uint8_t v_t_boxed_4856_; lean_object* v_res_4857_; 
v_t_boxed_4856_ = lean_unbox(v_t_4853_);
v_res_4857_ = l_Lean_Parser_LeadingIdentBehavior_ctorElim(v_motive_4851_, v_ctorIdx_4852_, v_t_boxed_4856_, v_h_4854_, v_k_4855_);
lean_dec(v_k_4855_);
lean_dec(v_ctorIdx_4852_);
return v_res_4857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim___redArg(lean_object* v_default_4858_){
_start:
{
lean_inc(v_default_4858_);
return v_default_4858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim___redArg___boxed(lean_object* v_default_4859_){
_start:
{
lean_object* v_res_4860_; 
v_res_4860_ = l_Lean_Parser_LeadingIdentBehavior_default_elim___redArg(v_default_4859_);
lean_dec(v_default_4859_);
return v_res_4860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim(lean_object* v_motive_4861_, uint8_t v_t_4862_, lean_object* v_h_4863_, lean_object* v_default_4864_){
_start:
{
lean_inc(v_default_4864_);
return v_default_4864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim___boxed(lean_object* v_motive_4865_, lean_object* v_t_4866_, lean_object* v_h_4867_, lean_object* v_default_4868_){
_start:
{
uint8_t v_t_boxed_4869_; lean_object* v_res_4870_; 
v_t_boxed_4869_ = lean_unbox(v_t_4866_);
v_res_4870_ = l_Lean_Parser_LeadingIdentBehavior_default_elim(v_motive_4865_, v_t_boxed_4869_, v_h_4867_, v_default_4868_);
lean_dec(v_default_4868_);
return v_res_4870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim___redArg(lean_object* v_symbol_4871_){
_start:
{
lean_inc(v_symbol_4871_);
return v_symbol_4871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim___redArg___boxed(lean_object* v_symbol_4872_){
_start:
{
lean_object* v_res_4873_; 
v_res_4873_ = l_Lean_Parser_LeadingIdentBehavior_symbol_elim___redArg(v_symbol_4872_);
lean_dec(v_symbol_4872_);
return v_res_4873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim(lean_object* v_motive_4874_, uint8_t v_t_4875_, lean_object* v_h_4876_, lean_object* v_symbol_4877_){
_start:
{
lean_inc(v_symbol_4877_);
return v_symbol_4877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim___boxed(lean_object* v_motive_4878_, lean_object* v_t_4879_, lean_object* v_h_4880_, lean_object* v_symbol_4881_){
_start:
{
uint8_t v_t_boxed_4882_; lean_object* v_res_4883_; 
v_t_boxed_4882_ = lean_unbox(v_t_4879_);
v_res_4883_ = l_Lean_Parser_LeadingIdentBehavior_symbol_elim(v_motive_4878_, v_t_boxed_4882_, v_h_4880_, v_symbol_4881_);
lean_dec(v_symbol_4881_);
return v_res_4883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim___redArg(lean_object* v_both_4884_){
_start:
{
lean_inc(v_both_4884_);
return v_both_4884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim___redArg___boxed(lean_object* v_both_4885_){
_start:
{
lean_object* v_res_4886_; 
v_res_4886_ = l_Lean_Parser_LeadingIdentBehavior_both_elim___redArg(v_both_4885_);
lean_dec(v_both_4885_);
return v_res_4886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim(lean_object* v_motive_4887_, uint8_t v_t_4888_, lean_object* v_h_4889_, lean_object* v_both_4890_){
_start:
{
lean_inc(v_both_4890_);
return v_both_4890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim___boxed(lean_object* v_motive_4891_, lean_object* v_t_4892_, lean_object* v_h_4893_, lean_object* v_both_4894_){
_start:
{
uint8_t v_t_boxed_4895_; lean_object* v_res_4896_; 
v_t_boxed_4895_ = lean_unbox(v_t_4892_);
v_res_4896_ = l_Lean_Parser_LeadingIdentBehavior_both_elim(v_motive_4891_, v_t_boxed_4895_, v_h_4893_, v_both_4894_);
lean_dec(v_both_4894_);
return v_res_4896_;
}
}
static uint8_t _init_l_Lean_Parser_instInhabitedLeadingIdentBehavior_default(void){
_start:
{
uint8_t v___x_4897_; 
v___x_4897_ = 0;
return v___x_4897_;
}
}
static uint8_t _init_l_Lean_Parser_instInhabitedLeadingIdentBehavior(void){
_start:
{
uint8_t v___x_4898_; 
v___x_4898_ = 0;
return v___x_4898_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqLeadingIdentBehavior_beq(uint8_t v_x_4899_, uint8_t v_y_4900_){
_start:
{
lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; uint8_t v___x_4905_; 
v___x_4901_ = lean_box(v_x_4899_);
v___x_4902_ = lean_obj_tag_nat(v___x_4901_);
lean_dec(v___x_4901_);
v___x_4903_ = lean_box(v_y_4900_);
v___x_4904_ = lean_obj_tag_nat(v___x_4903_);
lean_dec(v___x_4903_);
v___x_4905_ = lean_nat_dec_eq(v___x_4902_, v___x_4904_);
return v___x_4905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqLeadingIdentBehavior_beq___boxed(lean_object* v_x_4906_, lean_object* v_y_4907_){
_start:
{
uint8_t v_x_24__boxed_4908_; uint8_t v_y_25__boxed_4909_; uint8_t v_res_4910_; lean_object* v_r_4911_; 
v_x_24__boxed_4908_ = lean_unbox(v_x_4906_);
v_y_25__boxed_4909_ = lean_unbox(v_y_4907_);
v_res_4910_ = l_Lean_Parser_instBEqLeadingIdentBehavior_beq(v_x_24__boxed_4908_, v_y_25__boxed_4909_);
v_r_4911_ = lean_box(v_res_4910_);
return v_r_4911_;
}
}
static lean_object* _init_l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6(void){
_start:
{
lean_object* v___x_4923_; lean_object* v___x_4924_; 
v___x_4923_ = lean_unsigned_to_nat(2u);
v___x_4924_ = lean_nat_to_int(v___x_4923_);
return v___x_4924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr(uint8_t v_x_4925_, lean_object* v_prec_4926_){
_start:
{
lean_object* v___y_4928_; lean_object* v___y_4935_; lean_object* v___y_4942_; 
switch(v_x_4925_)
{
case 0:
{
lean_object* v___x_4948_; uint8_t v___x_4949_; 
v___x_4948_ = lean_unsigned_to_nat(1024u);
v___x_4949_ = lean_nat_dec_le(v___x_4948_, v_prec_4926_);
if (v___x_4949_ == 0)
{
lean_object* v___x_4950_; 
v___x_4950_ = lean_obj_once(&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6, &l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6_once, _init_l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6);
v___y_4928_ = v___x_4950_;
goto v___jp_4927_;
}
else
{
lean_object* v___x_4951_; 
v___x_4951_ = lean_obj_once(&l_Lean_Parser_incQuotDepth___closed__0, &l_Lean_Parser_incQuotDepth___closed__0_once, _init_l_Lean_Parser_incQuotDepth___closed__0);
v___y_4928_ = v___x_4951_;
goto v___jp_4927_;
}
}
case 1:
{
lean_object* v___x_4952_; uint8_t v___x_4953_; 
v___x_4952_ = lean_unsigned_to_nat(1024u);
v___x_4953_ = lean_nat_dec_le(v___x_4952_, v_prec_4926_);
if (v___x_4953_ == 0)
{
lean_object* v___x_4954_; 
v___x_4954_ = lean_obj_once(&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6, &l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6_once, _init_l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6);
v___y_4935_ = v___x_4954_;
goto v___jp_4934_;
}
else
{
lean_object* v___x_4955_; 
v___x_4955_ = lean_obj_once(&l_Lean_Parser_incQuotDepth___closed__0, &l_Lean_Parser_incQuotDepth___closed__0_once, _init_l_Lean_Parser_incQuotDepth___closed__0);
v___y_4935_ = v___x_4955_;
goto v___jp_4934_;
}
}
default: 
{
lean_object* v___x_4956_; uint8_t v___x_4957_; 
v___x_4956_ = lean_unsigned_to_nat(1024u);
v___x_4957_ = lean_nat_dec_le(v___x_4956_, v_prec_4926_);
if (v___x_4957_ == 0)
{
lean_object* v___x_4958_; 
v___x_4958_ = lean_obj_once(&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6, &l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6_once, _init_l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6);
v___y_4942_ = v___x_4958_;
goto v___jp_4941_;
}
else
{
lean_object* v___x_4959_; 
v___x_4959_ = lean_obj_once(&l_Lean_Parser_incQuotDepth___closed__0, &l_Lean_Parser_incQuotDepth___closed__0_once, _init_l_Lean_Parser_incQuotDepth___closed__0);
v___y_4942_ = v___x_4959_;
goto v___jp_4941_;
}
}
}
v___jp_4927_:
{
lean_object* v___x_4929_; lean_object* v___x_4930_; uint8_t v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; 
v___x_4929_ = ((lean_object*)(l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__1));
lean_inc(v___y_4928_);
v___x_4930_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4930_, 0, v___y_4928_);
lean_ctor_set(v___x_4930_, 1, v___x_4929_);
v___x_4931_ = 0;
v___x_4932_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4932_, 0, v___x_4930_);
lean_ctor_set_uint8(v___x_4932_, sizeof(void*)*1, v___x_4931_);
v___x_4933_ = l_Repr_addAppParen(v___x_4932_, v_prec_4926_);
return v___x_4933_;
}
v___jp_4934_:
{
lean_object* v___x_4936_; lean_object* v___x_4937_; uint8_t v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; 
v___x_4936_ = ((lean_object*)(l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__3));
lean_inc(v___y_4935_);
v___x_4937_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4937_, 0, v___y_4935_);
lean_ctor_set(v___x_4937_, 1, v___x_4936_);
v___x_4938_ = 0;
v___x_4939_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4939_, 0, v___x_4937_);
lean_ctor_set_uint8(v___x_4939_, sizeof(void*)*1, v___x_4938_);
v___x_4940_ = l_Repr_addAppParen(v___x_4939_, v_prec_4926_);
return v___x_4940_;
}
v___jp_4941_:
{
lean_object* v___x_4943_; lean_object* v___x_4944_; uint8_t v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; 
v___x_4943_ = ((lean_object*)(l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__5));
lean_inc(v___y_4942_);
v___x_4944_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4944_, 0, v___y_4942_);
lean_ctor_set(v___x_4944_, 1, v___x_4943_);
v___x_4945_ = 0;
v___x_4946_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4946_, 0, v___x_4944_);
lean_ctor_set_uint8(v___x_4946_, sizeof(void*)*1, v___x_4945_);
v___x_4947_ = l_Repr_addAppParen(v___x_4946_, v_prec_4926_);
return v___x_4947_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___boxed(lean_object* v_x_4960_, lean_object* v_prec_4961_){
_start:
{
uint8_t v_x_169__boxed_4962_; lean_object* v_res_4963_; 
v_x_169__boxed_4962_ = lean_unbox(v_x_4960_);
v_res_4963_ = l_Lean_Parser_instReprLeadingIdentBehavior_repr(v_x_169__boxed_4962_, v_prec_4961_);
lean_dec(v_prec_4961_);
return v_res_4963_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__0(void){
_start:
{
lean_object* v___x_4966_; 
v___x_4966_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_4966_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__1(void){
_start:
{
lean_object* v___x_4967_; lean_object* v___x_4968_; 
v___x_4967_ = lean_obj_once(&l_Lean_Parser_instInhabitedParserCategory_default___closed__0, &l_Lean_Parser_instInhabitedParserCategory_default___closed__0_once, _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__0);
v___x_4968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4968_, 0, v___x_4967_);
return v___x_4968_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__2(void){
_start:
{
uint8_t v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; 
v___x_4969_ = 0;
v___x_4970_ = ((lean_object*)(l_Lean_Parser_instInhabitedPrattParsingTables___closed__0));
v___x_4971_ = lean_obj_once(&l_Lean_Parser_instInhabitedParserCategory_default___closed__1, &l_Lean_Parser_instInhabitedParserCategory_default___closed__1_once, _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__1);
v___x_4972_ = lean_box(0);
v___x_4973_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_4973_, 0, v___x_4972_);
lean_ctor_set(v___x_4973_, 1, v___x_4971_);
lean_ctor_set(v___x_4973_, 2, v___x_4970_);
lean_ctor_set_uint8(v___x_4973_, sizeof(void*)*3, v___x_4969_);
return v___x_4973_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedParserCategory_default(void){
_start:
{
lean_object* v___x_4974_; 
v___x_4974_ = lean_obj_once(&l_Lean_Parser_instInhabitedParserCategory_default___closed__2, &l_Lean_Parser_instInhabitedParserCategory_default___closed__2_once, _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__2);
return v___x_4974_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedParserCategory(void){
_start:
{
lean_object* v___x_4975_; 
v___x_4975_ = l_Lean_Parser_instInhabitedParserCategory_default;
return v___x_4975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_indexed___redArg(lean_object* v_map_4976_, lean_object* v_c_4977_, lean_object* v_s_4978_, uint8_t v_behavior_4979_){
_start:
{
lean_object* v___x_4980_; lean_object* v_fst_4981_; lean_object* v_snd_4982_; lean_object* v___x_4984_; uint8_t v_isShared_4985_; uint8_t v_isSharedCheck_5024_; 
v___x_4980_ = l_Lean_Parser_peekToken(v_c_4977_, v_s_4978_);
v_fst_4981_ = lean_ctor_get(v___x_4980_, 0);
v_snd_4982_ = lean_ctor_get(v___x_4980_, 1);
v_isSharedCheck_5024_ = !lean_is_exclusive(v___x_4980_);
if (v_isSharedCheck_5024_ == 0)
{
v___x_4984_ = v___x_4980_;
v_isShared_4985_ = v_isSharedCheck_5024_;
goto v_resetjp_4983_;
}
else
{
lean_inc(v_snd_4982_);
lean_inc(v_fst_4981_);
lean_dec(v___x_4980_);
v___x_4984_ = lean_box(0);
v_isShared_4985_ = v_isSharedCheck_5024_;
goto v_resetjp_4983_;
}
v_resetjp_4983_:
{
lean_object* v_n_4987_; 
if (lean_obj_tag(v_snd_4982_) == 0)
{
lean_object* v_a_4999_; lean_object* v___x_5000_; lean_object* v___x_5001_; 
lean_del_object(v___x_4984_);
lean_dec(v_fst_4981_);
v_a_4999_ = lean_ctor_get(v_snd_4982_, 0);
lean_inc(v_a_4999_);
lean_dec_ref_known(v_snd_4982_, 1);
v___x_5000_ = lean_box(0);
v___x_5001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5001_, 0, v_a_4999_);
lean_ctor_set(v___x_5001_, 1, v___x_5000_);
return v___x_5001_;
}
else
{
lean_object* v_a_5002_; 
v_a_5002_ = lean_ctor_get(v_snd_4982_, 0);
lean_inc(v_a_5002_);
lean_dec_ref_known(v_snd_4982_, 1);
switch(lean_obj_tag(v_a_5002_))
{
case 2:
{
lean_object* v_val_5003_; lean_object* v___x_5004_; lean_object* v___x_5005_; 
v_val_5003_ = lean_ctor_get(v_a_5002_, 1);
lean_inc_ref(v_val_5003_);
lean_dec_ref_known(v_a_5002_, 2);
v___x_5004_ = lean_box(0);
v___x_5005_ = l_Lean_Name_str___override(v___x_5004_, v_val_5003_);
v_n_4987_ = v___x_5005_;
goto v___jp_4986_;
}
case 3:
{
switch(v_behavior_4979_)
{
case 0:
{
lean_dec_ref_known(v_a_5002_, 4);
goto v___jp_4997_;
}
case 1:
{
lean_object* v_val_5006_; lean_object* v___x_5007_; 
v_val_5006_ = lean_ctor_get(v_a_5002_, 2);
lean_inc(v_val_5006_);
lean_dec_ref_known(v_a_5002_, 4);
v___x_5007_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_map_4976_, v_val_5006_);
lean_dec(v_val_5006_);
if (lean_obj_tag(v___x_5007_) == 0)
{
goto v___jp_4997_;
}
else
{
lean_object* v_val_5008_; lean_object* v___x_5009_; 
lean_del_object(v___x_4984_);
v_val_5008_ = lean_ctor_get(v___x_5007_, 0);
lean_inc(v_val_5008_);
lean_dec_ref_known(v___x_5007_, 1);
v___x_5009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5009_, 0, v_fst_4981_);
lean_ctor_set(v___x_5009_, 1, v_val_5008_);
return v___x_5009_;
}
}
default: 
{
lean_object* v_val_5010_; lean_object* v___x_5011_; 
v_val_5010_ = lean_ctor_get(v_a_5002_, 2);
lean_inc(v_val_5010_);
lean_dec_ref_known(v_a_5002_, 4);
v___x_5011_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_map_4976_, v_val_5010_);
if (lean_obj_tag(v___x_5011_) == 0)
{
lean_dec(v_val_5010_);
goto v___jp_4997_;
}
else
{
lean_object* v_val_5012_; lean_object* v___x_5013_; uint8_t v___x_5014_; 
lean_del_object(v___x_4984_);
v_val_5012_ = lean_ctor_get(v___x_5011_, 0);
lean_inc(v_val_5012_);
lean_dec_ref_known(v___x_5011_, 1);
v___x_5013_ = ((lean_object*)(l_Lean_Parser_identFn___closed__0));
v___x_5014_ = lean_name_eq(v_val_5010_, v___x_5013_);
lean_dec(v_val_5010_);
if (v___x_5014_ == 0)
{
lean_object* v___x_5015_; 
v___x_5015_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_map_4976_, v___x_5013_);
if (lean_obj_tag(v___x_5015_) == 1)
{
lean_object* v_val_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; 
v_val_5016_ = lean_ctor_get(v___x_5015_, 0);
lean_inc(v_val_5016_);
lean_dec_ref_known(v___x_5015_, 1);
v___x_5017_ = l_List_appendTR___redArg(v_val_5012_, v_val_5016_);
v___x_5018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5018_, 0, v_fst_4981_);
lean_ctor_set(v___x_5018_, 1, v___x_5017_);
return v___x_5018_;
}
else
{
lean_object* v___x_5019_; 
lean_dec(v___x_5015_);
v___x_5019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5019_, 0, v_fst_4981_);
lean_ctor_set(v___x_5019_, 1, v_val_5012_);
return v___x_5019_;
}
}
else
{
lean_object* v___x_5020_; 
v___x_5020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5020_, 0, v_fst_4981_);
lean_ctor_set(v___x_5020_, 1, v_val_5012_);
return v___x_5020_;
}
}
}
}
}
case 1:
{
lean_object* v_kind_5021_; 
v_kind_5021_ = lean_ctor_get(v_a_5002_, 1);
lean_inc(v_kind_5021_);
lean_dec_ref_known(v_a_5002_, 3);
v_n_4987_ = v_kind_5021_;
goto v___jp_4986_;
}
default: 
{
lean_object* v___x_5022_; lean_object* v___x_5023_; 
lean_dec(v_a_5002_);
lean_del_object(v___x_4984_);
v___x_5022_ = lean_box(0);
v___x_5023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5023_, 0, v_fst_4981_);
lean_ctor_set(v___x_5023_, 1, v___x_5022_);
return v___x_5023_;
}
}
}
v___jp_4986_:
{
lean_object* v___x_4988_; 
v___x_4988_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_map_4976_, v_n_4987_);
lean_dec(v_n_4987_);
if (lean_obj_tag(v___x_4988_) == 1)
{
lean_object* v_val_4989_; lean_object* v___x_4991_; 
v_val_4989_ = lean_ctor_get(v___x_4988_, 0);
lean_inc(v_val_4989_);
lean_dec_ref_known(v___x_4988_, 1);
if (v_isShared_4985_ == 0)
{
lean_ctor_set(v___x_4984_, 1, v_val_4989_);
v___x_4991_ = v___x_4984_;
goto v_reusejp_4990_;
}
else
{
lean_object* v_reuseFailAlloc_4992_; 
v_reuseFailAlloc_4992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4992_, 0, v_fst_4981_);
lean_ctor_set(v_reuseFailAlloc_4992_, 1, v_val_4989_);
v___x_4991_ = v_reuseFailAlloc_4992_;
goto v_reusejp_4990_;
}
v_reusejp_4990_:
{
return v___x_4991_;
}
}
else
{
lean_object* v___x_4993_; lean_object* v___x_4995_; 
lean_dec(v___x_4988_);
v___x_4993_ = lean_box(0);
if (v_isShared_4985_ == 0)
{
lean_ctor_set(v___x_4984_, 1, v___x_4993_);
v___x_4995_ = v___x_4984_;
goto v_reusejp_4994_;
}
else
{
lean_object* v_reuseFailAlloc_4996_; 
v_reuseFailAlloc_4996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4996_, 0, v_fst_4981_);
lean_ctor_set(v_reuseFailAlloc_4996_, 1, v___x_4993_);
v___x_4995_ = v_reuseFailAlloc_4996_;
goto v_reusejp_4994_;
}
v_reusejp_4994_:
{
return v___x_4995_;
}
}
}
v___jp_4997_:
{
lean_object* v___x_4998_; 
v___x_4998_ = ((lean_object*)(l_Lean_Parser_identFn___closed__0));
v_n_4987_ = v___x_4998_;
goto v___jp_4986_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_indexed___redArg___boxed(lean_object* v_map_5025_, lean_object* v_c_5026_, lean_object* v_s_5027_, lean_object* v_behavior_5028_){
_start:
{
uint8_t v_behavior_boxed_5029_; lean_object* v_res_5030_; 
v_behavior_boxed_5029_ = lean_unbox(v_behavior_5028_);
v_res_5030_ = l_Lean_Parser_indexed___redArg(v_map_5025_, v_c_5026_, v_s_5027_, v_behavior_boxed_5029_);
lean_dec(v_map_5025_);
return v_res_5030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_indexed(lean_object* v_00_u03b1_5031_, lean_object* v_map_5032_, lean_object* v_c_5033_, lean_object* v_s_5034_, uint8_t v_behavior_5035_){
_start:
{
lean_object* v___x_5036_; 
v___x_5036_ = l_Lean_Parser_indexed___redArg(v_map_5032_, v_c_5033_, v_s_5034_, v_behavior_5035_);
return v___x_5036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_indexed___boxed(lean_object* v_00_u03b1_5037_, lean_object* v_map_5038_, lean_object* v_c_5039_, lean_object* v_s_5040_, lean_object* v_behavior_5041_){
_start:
{
uint8_t v_behavior_boxed_5042_; lean_object* v_res_5043_; 
v_behavior_boxed_5042_ = lean_unbox(v_behavior_5041_);
v_res_5043_ = l_Lean_Parser_indexed(v_00_u03b1_5037_, v_map_5038_, v_c_5039_, v_s_5040_, v_behavior_boxed_5042_);
lean_dec(v_map_5038_);
return v_res_5043_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_(lean_object* v_x_5044_, lean_object* v___y_5045_, lean_object* v___y_5046_){
_start:
{
lean_object* v___x_5047_; 
v___x_5047_ = l_Lean_Parser_whitespace(v___y_5045_, v___y_5046_);
return v___x_5047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2____boxed(lean_object* v_x_5048_, lean_object* v___y_5049_, lean_object* v___y_5050_){
_start:
{
lean_object* v_res_5051_; 
v_res_5051_ = l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_(v_x_5048_, v___y_5049_, v___y_5050_);
lean_dec(v_x_5048_);
return v_res_5051_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_5054_; lean_object* v___x_5055_; lean_object* v___x_5056_; 
v___f_5054_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_));
v___x_5055_ = lean_st_mk_ref(v___f_5054_);
v___x_5056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5056_, 0, v___x_5055_);
return v___x_5056_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2____boxed(lean_object* v_a_5057_){
_start:
{
lean_object* v_res_5058_; 
v_res_5058_ = l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_();
return v_res_5058_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_(lean_object* v___x_5059_){
_start:
{
lean_object* v___x_5061_; lean_object* v___x_5062_; 
v___x_5061_ = lean_st_ref_get(v___x_5059_);
v___x_5062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5062_, 0, v___x_5061_);
return v___x_5062_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2____boxed(lean_object* v___x_5063_, lean_object* v___y_5064_){
_start:
{
lean_object* v_res_5065_; 
v_res_5065_ = l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_(v___x_5063_);
lean_dec(v___x_5063_);
return v_res_5065_;
}
}
static lean_object* _init_l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5066_; lean_object* v___f_5067_; 
v___x_5066_ = l_Lean_Parser_categoryParserFnRef;
v___f_5067_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_5067_, 0, v___x_5066_);
return v___f_5067_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_5074_; lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; uint8_t v___x_5078_; lean_object* v___x_5079_; 
v___f_5074_ = lean_obj_once(&l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_, &l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_);
v___x_5075_ = lean_box(0);
v___x_5076_ = lean_box(2);
v___x_5077_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_));
v___x_5078_ = 0;
v___x_5079_ = l_Lean_registerEnvExtension___redArg(v___f_5074_, v___x_5075_, v___x_5076_, v___x_5077_, v___x_5078_, v___x_5078_);
return v___x_5079_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2____boxed(lean_object* v_a_5080_){
_start:
{
lean_object* v_res_5081_; 
v_res_5081_ = l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_();
return v_res_5081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFn___lam__0(lean_object* v_a_5082_, lean_object* v___y_5083_, lean_object* v___y_5084_){
_start:
{
lean_object* v___x_5085_; 
v___x_5085_ = l_Lean_Parser_instInhabitedParserFn___lam__0(v___y_5083_, v___y_5084_);
return v___x_5085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFn___lam__0___boxed(lean_object* v_a_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_){
_start:
{
lean_object* v_res_5089_; 
v_res_5089_ = l_Lean_Parser_categoryParserFn___lam__0(v_a_5086_, v___y_5087_, v___y_5088_);
lean_dec_ref(v___y_5088_);
lean_dec_ref(v___y_5087_);
lean_dec(v_a_5086_);
return v_res_5089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFn(lean_object* v_catName_5093_, lean_object* v_ctx_5094_, lean_object* v_s_5095_){
_start:
{
lean_object* v_toParserModuleContext_5096_; lean_object* v_env_5097_; lean_object* v___x_5098_; lean_object* v_asyncMode_5099_; lean_object* v___f_5100_; lean_object* v___x_5101_; uint8_t v___x_5102_; lean_object* v___x_21__overap_5103_; lean_object* v___x_5104_; 
v_toParserModuleContext_5096_ = lean_ctor_get(v_ctx_5094_, 1);
v_env_5097_ = lean_ctor_get(v_toParserModuleContext_5096_, 0);
v___x_5098_ = l_Lean_Parser_categoryParserFnExtension;
v_asyncMode_5099_ = lean_ctor_get(v___x_5098_, 2);
v___f_5100_ = ((lean_object*)(l_Lean_Parser_categoryParserFn___closed__1));
v___x_5101_ = lean_box(0);
v___x_5102_ = 0;
lean_inc_ref(v_env_5097_);
v___x_21__overap_5103_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___f_5100_, v___x_5098_, v_env_5097_, v_asyncMode_5099_, v___x_5101_, v___x_5102_);
v___x_5104_ = lean_apply_3(v___x_21__overap_5103_, v_catName_5093_, v_ctx_5094_, v_s_5095_);
return v___x_5104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParser___lam__0(lean_object* v_prec_5105_, lean_object* v_x_5106_){
_start:
{
lean_object* v_quotDepth_5107_; uint8_t v_suppressInsideQuot_5108_; lean_object* v_savedPos_x3f_5109_; lean_object* v_forbiddenTks_5110_; lean_object* v___x_5112_; uint8_t v_isShared_5113_; uint8_t v_isSharedCheck_5117_; 
v_quotDepth_5107_ = lean_ctor_get(v_x_5106_, 1);
v_suppressInsideQuot_5108_ = lean_ctor_get_uint8(v_x_5106_, sizeof(void*)*4);
v_savedPos_x3f_5109_ = lean_ctor_get(v_x_5106_, 2);
v_forbiddenTks_5110_ = lean_ctor_get(v_x_5106_, 3);
v_isSharedCheck_5117_ = !lean_is_exclusive(v_x_5106_);
if (v_isSharedCheck_5117_ == 0)
{
lean_object* v_unused_5118_; 
v_unused_5118_ = lean_ctor_get(v_x_5106_, 0);
lean_dec(v_unused_5118_);
v___x_5112_ = v_x_5106_;
v_isShared_5113_ = v_isSharedCheck_5117_;
goto v_resetjp_5111_;
}
else
{
lean_inc(v_forbiddenTks_5110_);
lean_inc(v_savedPos_x3f_5109_);
lean_inc(v_quotDepth_5107_);
lean_dec(v_x_5106_);
v___x_5112_ = lean_box(0);
v_isShared_5113_ = v_isSharedCheck_5117_;
goto v_resetjp_5111_;
}
v_resetjp_5111_:
{
lean_object* v___x_5115_; 
if (v_isShared_5113_ == 0)
{
lean_ctor_set(v___x_5112_, 0, v_prec_5105_);
v___x_5115_ = v___x_5112_;
goto v_reusejp_5114_;
}
else
{
lean_object* v_reuseFailAlloc_5116_; 
v_reuseFailAlloc_5116_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_5116_, 0, v_prec_5105_);
lean_ctor_set(v_reuseFailAlloc_5116_, 1, v_quotDepth_5107_);
lean_ctor_set(v_reuseFailAlloc_5116_, 2, v_savedPos_x3f_5109_);
lean_ctor_set(v_reuseFailAlloc_5116_, 3, v_forbiddenTks_5110_);
lean_ctor_set_uint8(v_reuseFailAlloc_5116_, sizeof(void*)*4, v_suppressInsideQuot_5108_);
v___x_5115_ = v_reuseFailAlloc_5116_;
goto v_reusejp_5114_;
}
v_reusejp_5114_:
{
return v___x_5115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParser(lean_object* v_catName_5119_, lean_object* v_prec_5120_){
_start:
{
lean_object* v___f_5121_; lean_object* v___x_5122_; lean_object* v___x_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; 
v___f_5121_ = lean_alloc_closure((void*)(l_Lean_Parser_categoryParser___lam__0), 2, 1);
lean_closure_set(v___f_5121_, 0, v_prec_5120_);
v___x_5122_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
lean_inc(v_catName_5119_);
v___x_5123_ = lean_alloc_closure((void*)(l_Lean_Parser_categoryParserFn), 3, 1);
lean_closure_set(v___x_5123_, 0, v_catName_5119_);
v___x_5124_ = lean_alloc_closure((void*)(l_Lean_Parser_withCacheFn), 4, 2);
lean_closure_set(v___x_5124_, 0, v_catName_5119_);
lean_closure_set(v___x_5124_, 1, v___x_5123_);
v___x_5125_ = lean_alloc_closure((void*)(l_Lean_Parser_adaptCacheableContextFn), 4, 2);
lean_closure_set(v___x_5125_, 0, v___f_5121_);
lean_closure_set(v___x_5125_, 1, v___x_5124_);
v___x_5126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5126_, 0, v___x_5122_);
lean_ctor_set(v___x_5126_, 1, v___x_5125_);
return v___x_5126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_termParser(lean_object* v_prec_5130_){
_start:
{
lean_object* v___x_5131_; lean_object* v___x_5132_; 
v___x_5131_ = ((lean_object*)(l_Lean_Parser_termParser___closed__1));
v___x_5132_ = l_Lean_Parser_categoryParser(v___x_5131_, v_prec_5130_);
return v___x_5132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoImmediateColon___lam__0(lean_object* v_c_5134_, lean_object* v_s_5135_){
_start:
{
lean_object* v_stxStack_5136_; lean_object* v_pos_5137_; lean_object* v_prev_5138_; uint8_t v___x_5139_; 
v_stxStack_5136_ = lean_ctor_get(v_s_5135_, 0);
v_pos_5137_ = lean_ctor_get(v_s_5135_, 2);
v_prev_5138_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_5136_);
v___x_5139_ = l_Lean_Parser_checkTailNoWs(v_prev_5138_);
lean_dec(v_prev_5138_);
if (v___x_5139_ == 0)
{
lean_dec_ref(v_c_5134_);
return v_s_5135_;
}
else
{
lean_object* v_toInputContext_5140_; uint8_t v___x_5141_; 
v_toInputContext_5140_ = lean_ctor_get(v_c_5134_, 0);
lean_inc_ref_n(v_toInputContext_5140_, 2);
lean_dec_ref(v_c_5134_);
lean_inc(v_pos_5137_);
v___x_5141_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_5140_, v_pos_5137_);
if (v___x_5141_ == 0)
{
lean_object* v_inputString_5142_; uint32_t v_curr_5143_; uint32_t v___x_5144_; uint8_t v___x_5145_; 
v_inputString_5142_ = lean_ctor_get(v_toInputContext_5140_, 0);
lean_inc_ref(v_inputString_5142_);
lean_dec_ref(v_toInputContext_5140_);
v_curr_5143_ = lean_string_utf8_get_fast(v_inputString_5142_, v_pos_5137_);
lean_dec_ref(v_inputString_5142_);
v___x_5144_ = 58;
v___x_5145_ = lean_uint32_dec_eq(v_curr_5143_, v___x_5144_);
if (v___x_5145_ == 0)
{
return v_s_5135_;
}
else
{
lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v___x_5148_; 
v___x_5146_ = ((lean_object*)(l_Lean_Parser_checkNoImmediateColon___lam__0___closed__0));
v___x_5147_ = lean_box(0);
v___x_5148_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_5135_, v___x_5146_, v___x_5147_, v___x_5145_);
return v___x_5148_;
}
}
else
{
lean_dec_ref(v_toInputContext_5140_);
return v_s_5135_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1(){
_start:
{
lean_object* v___x_5161_; lean_object* v___x_5162_; lean_object* v___x_5163_; 
v___x_5161_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1));
v___x_5162_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__2));
v___x_5163_ = l_Lean_addBuiltinDocString(v___x_5161_, v___x_5162_);
return v___x_5163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___boxed(lean_object* v_a_5164_){
_start:
{
lean_object* v_res_5165_; 
v_res_5165_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1();
return v_res_5165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpectedFn(lean_object* v_expected_5166_, lean_object* v_p_5167_, lean_object* v_c_5168_, lean_object* v_s_5169_){
_start:
{
lean_object* v___x_5170_; lean_object* v_errorMsg_5171_; 
v___x_5170_ = lean_apply_2(v_p_5167_, v_c_5168_, v_s_5169_);
v_errorMsg_5171_ = lean_ctor_get(v___x_5170_, 4);
lean_inc(v_errorMsg_5171_);
if (lean_obj_tag(v_errorMsg_5171_) == 1)
{
lean_object* v_val_5172_; lean_object* v___x_5174_; uint8_t v_isShared_5175_; uint8_t v_isSharedCheck_5202_; 
v_val_5172_ = lean_ctor_get(v_errorMsg_5171_, 0);
v_isSharedCheck_5202_ = !lean_is_exclusive(v_errorMsg_5171_);
if (v_isSharedCheck_5202_ == 0)
{
v___x_5174_ = v_errorMsg_5171_;
v_isShared_5175_ = v_isSharedCheck_5202_;
goto v_resetjp_5173_;
}
else
{
lean_inc(v_val_5172_);
lean_dec(v_errorMsg_5171_);
v___x_5174_ = lean_box(0);
v_isShared_5175_ = v_isSharedCheck_5202_;
goto v_resetjp_5173_;
}
v_resetjp_5173_:
{
lean_object* v_stxStack_5176_; lean_object* v_lhsPrec_5177_; lean_object* v_pos_5178_; lean_object* v_cache_5179_; lean_object* v_recoveredErrors_5180_; lean_object* v___x_5182_; uint8_t v_isShared_5183_; uint8_t v_isSharedCheck_5200_; 
v_stxStack_5176_ = lean_ctor_get(v___x_5170_, 0);
v_lhsPrec_5177_ = lean_ctor_get(v___x_5170_, 1);
v_pos_5178_ = lean_ctor_get(v___x_5170_, 2);
v_cache_5179_ = lean_ctor_get(v___x_5170_, 3);
v_recoveredErrors_5180_ = lean_ctor_get(v___x_5170_, 5);
v_isSharedCheck_5200_ = !lean_is_exclusive(v___x_5170_);
if (v_isSharedCheck_5200_ == 0)
{
lean_object* v_unused_5201_; 
v_unused_5201_ = lean_ctor_get(v___x_5170_, 4);
lean_dec(v_unused_5201_);
v___x_5182_ = v___x_5170_;
v_isShared_5183_ = v_isSharedCheck_5200_;
goto v_resetjp_5181_;
}
else
{
lean_inc(v_recoveredErrors_5180_);
lean_inc(v_cache_5179_);
lean_inc(v_pos_5178_);
lean_inc(v_lhsPrec_5177_);
lean_inc(v_stxStack_5176_);
lean_dec(v___x_5170_);
v___x_5182_ = lean_box(0);
v_isShared_5183_ = v_isSharedCheck_5200_;
goto v_resetjp_5181_;
}
v_resetjp_5181_:
{
lean_object* v_unexpectedTk_5184_; lean_object* v_unexpected_5185_; lean_object* v___x_5187_; uint8_t v_isShared_5188_; uint8_t v_isSharedCheck_5198_; 
v_unexpectedTk_5184_ = lean_ctor_get(v_val_5172_, 0);
v_unexpected_5185_ = lean_ctor_get(v_val_5172_, 1);
v_isSharedCheck_5198_ = !lean_is_exclusive(v_val_5172_);
if (v_isSharedCheck_5198_ == 0)
{
lean_object* v_unused_5199_; 
v_unused_5199_ = lean_ctor_get(v_val_5172_, 2);
lean_dec(v_unused_5199_);
v___x_5187_ = v_val_5172_;
v_isShared_5188_ = v_isSharedCheck_5198_;
goto v_resetjp_5186_;
}
else
{
lean_inc(v_unexpected_5185_);
lean_inc(v_unexpectedTk_5184_);
lean_dec(v_val_5172_);
v___x_5187_ = lean_box(0);
v_isShared_5188_ = v_isSharedCheck_5198_;
goto v_resetjp_5186_;
}
v_resetjp_5186_:
{
lean_object* v___x_5190_; 
if (v_isShared_5188_ == 0)
{
lean_ctor_set(v___x_5187_, 2, v_expected_5166_);
v___x_5190_ = v___x_5187_;
goto v_reusejp_5189_;
}
else
{
lean_object* v_reuseFailAlloc_5197_; 
v_reuseFailAlloc_5197_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5197_, 0, v_unexpectedTk_5184_);
lean_ctor_set(v_reuseFailAlloc_5197_, 1, v_unexpected_5185_);
lean_ctor_set(v_reuseFailAlloc_5197_, 2, v_expected_5166_);
v___x_5190_ = v_reuseFailAlloc_5197_;
goto v_reusejp_5189_;
}
v_reusejp_5189_:
{
lean_object* v___x_5192_; 
if (v_isShared_5175_ == 0)
{
lean_ctor_set(v___x_5174_, 0, v___x_5190_);
v___x_5192_ = v___x_5174_;
goto v_reusejp_5191_;
}
else
{
lean_object* v_reuseFailAlloc_5196_; 
v_reuseFailAlloc_5196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5196_, 0, v___x_5190_);
v___x_5192_ = v_reuseFailAlloc_5196_;
goto v_reusejp_5191_;
}
v_reusejp_5191_:
{
lean_object* v___x_5194_; 
if (v_isShared_5183_ == 0)
{
lean_ctor_set(v___x_5182_, 4, v___x_5192_);
v___x_5194_ = v___x_5182_;
goto v_reusejp_5193_;
}
else
{
lean_object* v_reuseFailAlloc_5195_; 
v_reuseFailAlloc_5195_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_5195_, 0, v_stxStack_5176_);
lean_ctor_set(v_reuseFailAlloc_5195_, 1, v_lhsPrec_5177_);
lean_ctor_set(v_reuseFailAlloc_5195_, 2, v_pos_5178_);
lean_ctor_set(v_reuseFailAlloc_5195_, 3, v_cache_5179_);
lean_ctor_set(v_reuseFailAlloc_5195_, 4, v___x_5192_);
lean_ctor_set(v_reuseFailAlloc_5195_, 5, v_recoveredErrors_5180_);
v___x_5194_ = v_reuseFailAlloc_5195_;
goto v_reusejp_5193_;
}
v_reusejp_5193_:
{
return v___x_5194_;
}
}
}
}
}
}
}
else
{
lean_dec(v_errorMsg_5171_);
lean_dec(v_expected_5166_);
return v___x_5170_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected(lean_object* v_expected_5203_, lean_object* v_p_5204_){
_start:
{
lean_object* v_info_5205_; lean_object* v_fn_5206_; lean_object* v___x_5208_; uint8_t v_isShared_5209_; uint8_t v_isSharedCheck_5214_; 
v_info_5205_ = lean_ctor_get(v_p_5204_, 0);
v_fn_5206_ = lean_ctor_get(v_p_5204_, 1);
v_isSharedCheck_5214_ = !lean_is_exclusive(v_p_5204_);
if (v_isSharedCheck_5214_ == 0)
{
v___x_5208_ = v_p_5204_;
v_isShared_5209_ = v_isSharedCheck_5214_;
goto v_resetjp_5207_;
}
else
{
lean_inc(v_fn_5206_);
lean_inc(v_info_5205_);
lean_dec(v_p_5204_);
v___x_5208_ = lean_box(0);
v_isShared_5209_ = v_isSharedCheck_5214_;
goto v_resetjp_5207_;
}
v_resetjp_5207_:
{
lean_object* v___x_5210_; lean_object* v___x_5212_; 
v___x_5210_ = lean_alloc_closure((void*)(l_Lean_Parser_setExpectedFn), 4, 2);
lean_closure_set(v___x_5210_, 0, v_expected_5203_);
lean_closure_set(v___x_5210_, 1, v_fn_5206_);
if (v_isShared_5209_ == 0)
{
lean_ctor_set(v___x_5208_, 1, v___x_5210_);
v___x_5212_ = v___x_5208_;
goto v_reusejp_5211_;
}
else
{
lean_object* v_reuseFailAlloc_5213_; 
v_reuseFailAlloc_5213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5213_, 0, v_info_5205_);
lean_ctor_set(v_reuseFailAlloc_5213_, 1, v___x_5210_);
v___x_5212_ = v_reuseFailAlloc_5213_;
goto v_reusejp_5211_;
}
v_reusejp_5211_:
{
return v___x_5212_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_pushNone___lam__0(lean_object* v_x_5215_, lean_object* v_s_5216_){
_start:
{
lean_object* v___x_5217_; lean_object* v___x_5218_; 
v___x_5217_ = ((lean_object*)(l_Lean_Parser_withForbiddens___auto__1___closed__12));
v___x_5218_ = l_Lean_Parser_ParserState_pushSyntax(v_s_5216_, v___x_5217_);
return v___x_5218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_pushNone___lam__0___boxed(lean_object* v_x_5219_, lean_object* v_s_5220_){
_start:
{
lean_object* v_res_5221_; 
v_res_5221_ = l_Lean_Parser_pushNone___lam__0(v_x_5219_, v_s_5220_);
lean_dec_ref(v_x_5219_);
return v_res_5221_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__3(void){
_start:
{
lean_object* v___x_5231_; lean_object* v___x_5232_; 
v___x_5231_ = ((lean_object*)(l_Lean_Parser_antiquotNestedExpr___closed__2));
v___x_5232_ = l_Lean_Parser_symbolNoAntiquot(v___x_5231_);
return v___x_5232_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__4(void){
_start:
{
lean_object* v___x_5233_; lean_object* v___x_5234_; 
v___x_5233_ = lean_unsigned_to_nat(0u);
v___x_5234_ = l_Lean_Parser_termParser(v___x_5233_);
return v___x_5234_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__5(void){
_start:
{
lean_object* v___x_5235_; lean_object* v___x_5236_; 
v___x_5235_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__4, &l_Lean_Parser_antiquotNestedExpr___closed__4_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__4);
v___x_5236_ = l_Lean_Parser_decQuotDepth(v___x_5235_);
return v___x_5236_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__6(void){
_start:
{
lean_object* v___x_5237_; lean_object* v___x_5238_; 
v___x_5237_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__6));
v___x_5238_ = l_Lean_Parser_symbolNoAntiquot(v___x_5237_);
return v___x_5238_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__7(void){
_start:
{
lean_object* v___x_5239_; lean_object* v___x_5240_; lean_object* v___x_5241_; 
v___x_5239_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__6, &l_Lean_Parser_antiquotNestedExpr___closed__6_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__6);
v___x_5240_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__5, &l_Lean_Parser_antiquotNestedExpr___closed__5_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__5);
v___x_5241_ = l_Lean_Parser_andthen(v___x_5240_, v___x_5239_);
return v___x_5241_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__8(void){
_start:
{
lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; 
v___x_5242_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__7, &l_Lean_Parser_antiquotNestedExpr___closed__7_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__7);
v___x_5243_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__3, &l_Lean_Parser_antiquotNestedExpr___closed__3_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__3);
v___x_5244_ = l_Lean_Parser_andthen(v___x_5243_, v___x_5242_);
return v___x_5244_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__9(void){
_start:
{
lean_object* v___x_5245_; lean_object* v___x_5246_; lean_object* v___x_5247_; 
v___x_5245_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__8, &l_Lean_Parser_antiquotNestedExpr___closed__8_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__8);
v___x_5246_ = ((lean_object*)(l_Lean_Parser_antiquotNestedExpr___closed__1));
v___x_5247_ = l_Lean_Parser_node(v___x_5246_, v___x_5245_);
return v___x_5247_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr(void){
_start:
{
lean_object* v___x_5248_; 
v___x_5248_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__9, &l_Lean_Parser_antiquotNestedExpr___closed__9_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__9);
return v___x_5248_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr___closed__1(void){
_start:
{
lean_object* v___x_5250_; lean_object* v___x_5251_; 
v___x_5250_ = ((lean_object*)(l_Lean_Parser_antiquotExpr___closed__0));
v___x_5251_ = l_Lean_Parser_symbolNoAntiquot(v___x_5250_);
return v___x_5251_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr___closed__2(void){
_start:
{
lean_object* v___x_5252_; lean_object* v___x_5253_; lean_object* v___x_5254_; 
v___x_5252_ = l_Lean_Parser_antiquotNestedExpr;
v___x_5253_ = lean_obj_once(&l_Lean_Parser_antiquotExpr___closed__1, &l_Lean_Parser_antiquotExpr___closed__1_once, _init_l_Lean_Parser_antiquotExpr___closed__1);
v___x_5254_ = l_Lean_Parser_orelse(v___x_5253_, v___x_5252_);
return v___x_5254_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr___closed__3(void){
_start:
{
lean_object* v___x_5255_; lean_object* v___x_5256_; lean_object* v___x_5257_; 
v___x_5255_ = lean_obj_once(&l_Lean_Parser_antiquotExpr___closed__2, &l_Lean_Parser_antiquotExpr___closed__2_once, _init_l_Lean_Parser_antiquotExpr___closed__2);
v___x_5256_ = l_Lean_Parser_identNoAntiquot;
v___x_5257_ = l_Lean_Parser_orelse(v___x_5256_, v___x_5255_);
return v___x_5257_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr(void){
_start:
{
lean_object* v___x_5258_; 
v___x_5258_ = lean_obj_once(&l_Lean_Parser_antiquotExpr___closed__3, &l_Lean_Parser_antiquotExpr___closed__3_once, _init_l_Lean_Parser_antiquotExpr___closed__3);
return v___x_5258_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__1(void){
_start:
{
lean_object* v___x_5260_; lean_object* v___x_5261_; 
v___x_5260_ = ((lean_object*)(l_Lean_Parser_tokenAntiquotFn___closed__0));
v___x_5261_ = l_Lean_Parser_checkNoWsBefore(v___x_5260_);
return v___x_5261_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__3(void){
_start:
{
lean_object* v___x_5263_; lean_object* v___x_5264_; 
v___x_5263_ = ((lean_object*)(l_Lean_Parser_tokenAntiquotFn___closed__2));
v___x_5264_ = l_Lean_Parser_symbolNoAntiquot(v___x_5263_);
return v___x_5264_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__5(void){
_start:
{
lean_object* v___x_5266_; lean_object* v___x_5267_; 
v___x_5266_ = ((lean_object*)(l_Lean_Parser_tokenAntiquotFn___closed__4));
v___x_5267_ = l_Lean_Parser_symbolNoAntiquot(v___x_5266_);
return v___x_5267_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__6(void){
_start:
{
lean_object* v___x_5268_; lean_object* v___x_5269_; lean_object* v___x_5270_; 
v___x_5268_ = l_Lean_Parser_antiquotExpr;
v___x_5269_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__1, &l_Lean_Parser_tokenAntiquotFn___closed__1_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__1);
v___x_5270_ = l_Lean_Parser_andthen(v___x_5269_, v___x_5268_);
return v___x_5270_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__7(void){
_start:
{
lean_object* v___x_5271_; lean_object* v___x_5272_; lean_object* v___x_5273_; 
v___x_5271_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__6, &l_Lean_Parser_tokenAntiquotFn___closed__6_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__6);
v___x_5272_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__5, &l_Lean_Parser_tokenAntiquotFn___closed__5_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__5);
v___x_5273_ = l_Lean_Parser_andthen(v___x_5272_, v___x_5271_);
return v___x_5273_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__8(void){
_start:
{
lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; 
v___x_5274_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__7, &l_Lean_Parser_tokenAntiquotFn___closed__7_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__7);
v___x_5275_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__3, &l_Lean_Parser_tokenAntiquotFn___closed__3_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__3);
v___x_5276_ = l_Lean_Parser_andthen(v___x_5275_, v___x_5274_);
return v___x_5276_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__9(void){
_start:
{
lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5279_; 
v___x_5277_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__8, &l_Lean_Parser_tokenAntiquotFn___closed__8_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__8);
v___x_5278_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__1, &l_Lean_Parser_tokenAntiquotFn___closed__1_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__1);
v___x_5279_ = l_Lean_Parser_andthen(v___x_5278_, v___x_5277_);
return v___x_5279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tokenAntiquotFn(lean_object* v_c_5283_, lean_object* v_s_5284_){
_start:
{
lean_object* v_pos_5285_; lean_object* v_errorMsg_5286_; lean_object* v___x_5287_; uint8_t v___x_5288_; 
v_pos_5285_ = lean_ctor_get(v_s_5284_, 2);
v_errorMsg_5286_ = lean_ctor_get(v_s_5284_, 4);
v___x_5287_ = lean_box(0);
v___x_5288_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5286_, v___x_5287_);
if (v___x_5288_ == 0)
{
lean_dec_ref(v_c_5283_);
return v_s_5284_;
}
else
{
lean_object* v___x_5289_; lean_object* v_fn_5290_; lean_object* v_iniSz_5291_; lean_object* v_s_5292_; lean_object* v_errorMsg_5293_; uint8_t v___x_5294_; 
lean_inc(v_pos_5285_);
v___x_5289_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__9, &l_Lean_Parser_tokenAntiquotFn___closed__9_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__9);
v_fn_5290_ = lean_ctor_get(v___x_5289_, 1);
v_iniSz_5291_ = l_Lean_Parser_ParserState_stackSize(v_s_5284_);
lean_inc_ref(v_fn_5290_);
v_s_5292_ = lean_apply_2(v_fn_5290_, v_c_5283_, v_s_5284_);
v_errorMsg_5293_ = lean_ctor_get(v_s_5292_, 4);
lean_inc(v_errorMsg_5293_);
v___x_5294_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5293_, v___x_5287_);
lean_dec(v_errorMsg_5293_);
if (v___x_5294_ == 0)
{
lean_object* v___x_5295_; 
v___x_5295_ = l_Lean_Parser_ParserState_restore(v_s_5292_, v_iniSz_5291_, v_pos_5285_);
lean_dec(v_iniSz_5291_);
return v___x_5295_;
}
else
{
lean_object* v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; lean_object* v___x_5299_; 
lean_dec(v_pos_5285_);
v___x_5296_ = ((lean_object*)(l_Lean_Parser_tokenAntiquotFn___closed__11));
v___x_5297_ = lean_unsigned_to_nat(1u);
v___x_5298_ = lean_nat_sub(v_iniSz_5291_, v___x_5297_);
lean_dec(v_iniSz_5291_);
v___x_5299_ = l_Lean_Parser_ParserState_mkNode(v_s_5292_, v___x_5296_, v___x_5298_);
lean_dec(v___x_5298_);
return v___x_5299_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tokenWithAntiquot___lam__0(lean_object* v_fn_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_){
_start:
{
lean_object* v_toInputContext_5303_; lean_object* v_s_5304_; lean_object* v_pos_5305_; lean_object* v_inputString_5306_; uint32_t v___x_5307_; uint32_t v___x_5308_; uint8_t v___x_5309_; 
v_toInputContext_5303_ = lean_ctor_get(v___y_5301_, 0);
lean_inc_ref(v___y_5301_);
v_s_5304_ = lean_apply_2(v_fn_5300_, v___y_5301_, v___y_5302_);
v_pos_5305_ = lean_ctor_get(v_s_5304_, 2);
lean_inc(v_pos_5305_);
v_inputString_5306_ = lean_ctor_get(v_toInputContext_5303_, 0);
v___x_5307_ = lean_string_utf8_get(v_inputString_5306_, v_pos_5305_);
lean_dec(v_pos_5305_);
v___x_5308_ = 37;
v___x_5309_ = lean_uint32_dec_eq(v___x_5307_, v___x_5308_);
if (v___x_5309_ == 0)
{
lean_dec_ref(v___y_5301_);
return v_s_5304_;
}
else
{
lean_object* v___x_5310_; 
v___x_5310_ = l_Lean_Parser_tokenAntiquotFn(v___y_5301_, v_s_5304_);
return v___x_5310_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tokenWithAntiquot(lean_object* v_p_5311_){
_start:
{
lean_object* v_info_5312_; lean_object* v_fn_5313_; lean_object* v___x_5315_; uint8_t v_isShared_5316_; uint8_t v_isSharedCheck_5321_; 
v_info_5312_ = lean_ctor_get(v_p_5311_, 0);
v_fn_5313_ = lean_ctor_get(v_p_5311_, 1);
v_isSharedCheck_5321_ = !lean_is_exclusive(v_p_5311_);
if (v_isSharedCheck_5321_ == 0)
{
v___x_5315_ = v_p_5311_;
v_isShared_5316_ = v_isSharedCheck_5321_;
goto v_resetjp_5314_;
}
else
{
lean_inc(v_fn_5313_);
lean_inc(v_info_5312_);
lean_dec(v_p_5311_);
v___x_5315_ = lean_box(0);
v_isShared_5316_ = v_isSharedCheck_5321_;
goto v_resetjp_5314_;
}
v_resetjp_5314_:
{
lean_object* v___f_5317_; lean_object* v___x_5319_; 
v___f_5317_ = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquot___lam__0), 3, 1);
lean_closure_set(v___f_5317_, 0, v_fn_5313_);
if (v_isShared_5316_ == 0)
{
lean_ctor_set(v___x_5315_, 1, v___f_5317_);
v___x_5319_ = v___x_5315_;
goto v_reusejp_5318_;
}
else
{
lean_object* v_reuseFailAlloc_5320_; 
v_reuseFailAlloc_5320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5320_, 0, v_info_5312_);
lean_ctor_set(v_reuseFailAlloc_5320_, 1, v___f_5317_);
v___x_5319_ = v_reuseFailAlloc_5320_;
goto v_reusejp_5318_;
}
v_reusejp_5318_:
{
return v___x_5319_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbol(lean_object* v_sym_5322_){
_start:
{
lean_object* v___x_5323_; lean_object* v___x_5324_; 
v___x_5323_ = l_Lean_Parser_symbolNoAntiquot(v_sym_5322_);
v___x_5324_ = l_Lean_Parser_tokenWithAntiquot(v___x_5323_);
return v___x_5324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol(lean_object* v_sym_5327_, uint8_t v_includeIdent_5328_){
_start:
{
lean_object* v___x_5329_; lean_object* v___x_5330_; 
v___x_5329_ = l_Lean_Parser_nonReservedSymbolNoAntiquot(v_sym_5327_, v_includeIdent_5328_);
v___x_5330_ = l_Lean_Parser_tokenWithAntiquot(v___x_5329_);
return v___x_5330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol___boxed(lean_object* v_sym_5331_, lean_object* v_includeIdent_5332_){
_start:
{
uint8_t v_includeIdent_boxed_5333_; lean_object* v_res_5334_; 
v_includeIdent_boxed_5333_ = lean_unbox(v_includeIdent_5332_);
v_res_5334_ = l_Lean_Parser_nonReservedSymbol(v_sym_5331_, v_includeIdent_boxed_5333_);
return v_res_5334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol___redArg(lean_object* v_sym_5335_, lean_object* v_asciiSym_5336_){
_start:
{
lean_object* v___x_5337_; lean_object* v___x_5338_; 
v___x_5337_ = l_Lean_Parser_unicodeSymbolNoAntiquot___redArg(v_sym_5335_, v_asciiSym_5336_);
v___x_5338_ = l_Lean_Parser_tokenWithAntiquot(v___x_5337_);
return v___x_5338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol(lean_object* v_sym_5339_, lean_object* v_asciiSym_5340_, uint8_t v_preserveForPP_5341_){
_start:
{
lean_object* v___x_5342_; 
v___x_5342_ = l_Lean_Parser_unicodeSymbol___redArg(v_sym_5339_, v_asciiSym_5340_);
return v___x_5342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol___boxed(lean_object* v_sym_5343_, lean_object* v_asciiSym_5344_, lean_object* v_preserveForPP_5345_){
_start:
{
uint8_t v_preserveForPP_boxed_5346_; lean_object* v_res_5347_; 
v_preserveForPP_boxed_5346_ = lean_unbox(v_preserveForPP_5345_);
v_res_5347_ = l_Lean_Parser_unicodeSymbol(v_sym_5343_, v_asciiSym_5344_, v_preserveForPP_boxed_5346_);
return v_res_5347_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__0(void){
_start:
{
lean_object* v___x_5348_; lean_object* v___x_5349_; 
v___x_5348_ = ((lean_object*)(l_Lean_Parser_tokenAntiquotFn___closed__4));
v___x_5349_ = l_Lean_Parser_symbol(v___x_5348_);
return v___x_5349_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__1(void){
_start:
{
lean_object* v___x_5350_; lean_object* v___x_5351_; lean_object* v___x_5352_; 
v___x_5350_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__0, &l_Lean_Parser_mkAntiquot___closed__0_once, _init_l_Lean_Parser_mkAntiquot___closed__0);
v___x_5351_ = lean_box(0);
v___x_5352_ = l_Lean_Parser_setExpected(v___x_5351_, v___x_5350_);
return v___x_5352_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__2(void){
_start:
{
lean_object* v___x_5353_; lean_object* v___x_5354_; 
v___x_5353_ = ((lean_object*)(l_Lean_Parser_chFn___closed__1));
v___x_5354_ = l_Lean_Parser_checkNoWsBefore(v___x_5353_);
return v___x_5354_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__3(void){
_start:
{
lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; 
v___x_5355_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__0, &l_Lean_Parser_mkAntiquot___closed__0_once, _init_l_Lean_Parser_mkAntiquot___closed__0);
v___x_5356_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__2, &l_Lean_Parser_mkAntiquot___closed__2_once, _init_l_Lean_Parser_mkAntiquot___closed__2);
v___x_5357_ = l_Lean_Parser_andthen(v___x_5356_, v___x_5355_);
return v___x_5357_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__4(void){
_start:
{
lean_object* v___x_5358_; lean_object* v___x_5359_; 
v___x_5358_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__3, &l_Lean_Parser_mkAntiquot___closed__3_once, _init_l_Lean_Parser_mkAntiquot___closed__3);
v___x_5359_ = l_Lean_Parser_manyNoAntiquot(v___x_5358_);
return v___x_5359_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__6(void){
_start:
{
lean_object* v___x_5361_; lean_object* v___x_5362_; 
v___x_5361_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__5));
v___x_5362_ = l_Lean_Parser_checkNoWsBefore(v___x_5361_);
return v___x_5362_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__13(void){
_start:
{
lean_object* v___x_5371_; lean_object* v___x_5372_; 
v___x_5371_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__12));
v___x_5372_ = l_Lean_Parser_symbol(v___x_5371_);
return v___x_5372_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__14(void){
_start:
{
lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; 
v___x_5373_ = ((lean_object*)(l_Lean_Parser_pushNone));
v___x_5374_ = ((lean_object*)(l_Lean_Parser_checkNoImmediateColon));
v___x_5375_ = l_Lean_Parser_andthen(v___x_5374_, v___x_5373_);
return v___x_5375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot(lean_object* v_name_5379_, lean_object* v_kind_5380_, uint8_t v_anonymous_5381_, uint8_t v_isPseudoKind_5382_){
_start:
{
lean_object* v___y_5384_; lean_object* v___y_5385_; lean_object* v___y_5398_; 
if (v_isPseudoKind_5382_ == 0)
{
lean_object* v___x_5416_; 
v___x_5416_ = lean_box(0);
v___y_5398_ = v___x_5416_;
goto v___jp_5397_;
}
else
{
lean_object* v___x_5417_; 
v___x_5417_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__16));
v___y_5398_ = v___x_5417_;
goto v___jp_5397_;
}
v___jp_5383_:
{
lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; lean_object* v___x_5395_; lean_object* v___x_5396_; 
v___x_5386_ = l_Lean_Parser_maxPrec;
v___x_5387_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__1, &l_Lean_Parser_mkAntiquot___closed__1_once, _init_l_Lean_Parser_mkAntiquot___closed__1);
v___x_5388_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__4, &l_Lean_Parser_mkAntiquot___closed__4_once, _init_l_Lean_Parser_mkAntiquot___closed__4);
v___x_5389_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__6, &l_Lean_Parser_mkAntiquot___closed__6_once, _init_l_Lean_Parser_mkAntiquot___closed__6);
v___x_5390_ = l_Lean_Parser_antiquotExpr;
v___x_5391_ = l_Lean_Parser_andthen(v___x_5390_, v___y_5385_);
v___x_5392_ = l_Lean_Parser_andthen(v___x_5389_, v___x_5391_);
v___x_5393_ = l_Lean_Parser_andthen(v___x_5388_, v___x_5392_);
v___x_5394_ = l_Lean_Parser_andthen(v___x_5387_, v___x_5393_);
v___x_5395_ = l_Lean_Parser_atomic(v___x_5394_);
v___x_5396_ = l_Lean_Parser_leadingNode(v___y_5384_, v___x_5386_, v___x_5395_);
return v___x_5396_;
}
v___jp_5397_:
{
lean_object* v___x_5399_; lean_object* v___x_5400_; lean_object* v_kind_5401_; lean_object* v___x_5402_; lean_object* v___x_5403_; lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; uint8_t v___x_5409_; lean_object* v___x_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; lean_object* v_nameP_5413_; 
lean_inc(v___y_5398_);
v___x_5399_ = l_Lean_Name_append(v_kind_5380_, v___y_5398_);
v___x_5400_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__8));
v_kind_5401_ = l_Lean_Name_append(v___x_5399_, v___x_5400_);
v___x_5402_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__10));
v___x_5403_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__11));
v___x_5404_ = lean_string_append(v___x_5403_, v_name_5379_);
v___x_5405_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_5406_ = lean_string_append(v___x_5404_, v___x_5405_);
v___x_5407_ = l_Lean_Parser_checkNoWsBefore(v___x_5406_);
v___x_5408_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__13, &l_Lean_Parser_mkAntiquot___closed__13_once, _init_l_Lean_Parser_mkAntiquot___closed__13);
v___x_5409_ = 0;
v___x_5410_ = l_Lean_Parser_nonReservedSymbol(v_name_5379_, v___x_5409_);
v___x_5411_ = l_Lean_Parser_andthen(v___x_5408_, v___x_5410_);
v___x_5412_ = l_Lean_Parser_andthen(v___x_5407_, v___x_5411_);
v_nameP_5413_ = l_Lean_Parser_node(v___x_5402_, v___x_5412_);
if (v_anonymous_5381_ == 0)
{
v___y_5384_ = v_kind_5401_;
v___y_5385_ = v_nameP_5413_;
goto v___jp_5383_;
}
else
{
lean_object* v___x_5414_; lean_object* v___x_5415_; 
v___x_5414_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__14, &l_Lean_Parser_mkAntiquot___closed__14_once, _init_l_Lean_Parser_mkAntiquot___closed__14);
v___x_5415_ = l_Lean_Parser_orelse(v_nameP_5413_, v___x_5414_);
v___y_5384_ = v_kind_5401_;
v___y_5385_ = v___x_5415_;
goto v___jp_5383_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot___boxed(lean_object* v_name_5418_, lean_object* v_kind_5419_, lean_object* v_anonymous_5420_, lean_object* v_isPseudoKind_5421_){
_start:
{
uint8_t v_anonymous_boxed_5422_; uint8_t v_isPseudoKind_boxed_5423_; lean_object* v_res_5424_; 
v_anonymous_boxed_5422_ = lean_unbox(v_anonymous_5420_);
v_isPseudoKind_boxed_5423_ = lean_unbox(v_isPseudoKind_5421_);
v_res_5424_ = l_Lean_Parser_mkAntiquot(v_name_5418_, v_kind_5419_, v_anonymous_boxed_5422_, v_isPseudoKind_boxed_5423_);
return v_res_5424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1(){
_start:
{
lean_object* v___x_5432_; lean_object* v___x_5433_; lean_object* v___x_5434_; 
v___x_5432_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1));
v___x_5433_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__2));
v___x_5434_ = l_Lean_addBuiltinDocString(v___x_5432_, v___x_5433_);
return v___x_5434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___boxed(lean_object* v_a_5435_){
_start:
{
lean_object* v_res_5436_; 
v_res_5436_ = l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1();
return v_res_5436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotFn(lean_object* v_antiquotP_5437_, lean_object* v_p_5438_, uint8_t v_antiquotBehavior_5439_, lean_object* v_c_5440_, lean_object* v_s_5441_){
_start:
{
lean_object* v_toInputContext_5442_; lean_object* v_pos_5443_; lean_object* v_inputString_5444_; uint32_t v___x_5445_; uint32_t v___x_5446_; uint8_t v___x_5447_; 
v_toInputContext_5442_ = lean_ctor_get(v_c_5440_, 0);
v_pos_5443_ = lean_ctor_get(v_s_5441_, 2);
v_inputString_5444_ = lean_ctor_get(v_toInputContext_5442_, 0);
v___x_5445_ = lean_string_utf8_get(v_inputString_5444_, v_pos_5443_);
v___x_5446_ = 36;
v___x_5447_ = lean_uint32_dec_eq(v___x_5445_, v___x_5446_);
if (v___x_5447_ == 0)
{
lean_object* v___x_5448_; 
lean_dec_ref(v_antiquotP_5437_);
v___x_5448_ = lean_apply_2(v_p_5438_, v_c_5440_, v_s_5441_);
return v___x_5448_;
}
else
{
lean_object* v___x_5449_; 
v___x_5449_ = l_Lean_Parser_orelseFnCore(v_antiquotP_5437_, v_p_5438_, v_antiquotBehavior_5439_, v_c_5440_, v_s_5441_);
return v___x_5449_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotFn___boxed(lean_object* v_antiquotP_5450_, lean_object* v_p_5451_, lean_object* v_antiquotBehavior_5452_, lean_object* v_c_5453_, lean_object* v_s_5454_){
_start:
{
uint8_t v_antiquotBehavior_boxed_5455_; lean_object* v_res_5456_; 
v_antiquotBehavior_boxed_5455_ = lean_unbox(v_antiquotBehavior_5452_);
v_res_5456_ = l_Lean_Parser_withAntiquotFn(v_antiquotP_5450_, v_p_5451_, v_antiquotBehavior_boxed_5455_, v_c_5453_, v_s_5454_);
return v_res_5456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquot(lean_object* v_antiquotP_5457_, lean_object* v_p_5458_){
_start:
{
lean_object* v_info_5459_; lean_object* v_fn_5460_; lean_object* v_info_5461_; lean_object* v_fn_5462_; lean_object* v___x_5464_; uint8_t v_isShared_5465_; uint8_t v_isSharedCheck_5473_; 
v_info_5459_ = lean_ctor_get(v_antiquotP_5457_, 0);
lean_inc_ref(v_info_5459_);
v_fn_5460_ = lean_ctor_get(v_antiquotP_5457_, 1);
lean_inc_ref(v_fn_5460_);
lean_dec_ref(v_antiquotP_5457_);
v_info_5461_ = lean_ctor_get(v_p_5458_, 0);
v_fn_5462_ = lean_ctor_get(v_p_5458_, 1);
v_isSharedCheck_5473_ = !lean_is_exclusive(v_p_5458_);
if (v_isSharedCheck_5473_ == 0)
{
v___x_5464_ = v_p_5458_;
v_isShared_5465_ = v_isSharedCheck_5473_;
goto v_resetjp_5463_;
}
else
{
lean_inc(v_fn_5462_);
lean_inc(v_info_5461_);
lean_dec(v_p_5458_);
v___x_5464_ = lean_box(0);
v_isShared_5465_ = v_isSharedCheck_5473_;
goto v_resetjp_5463_;
}
v_resetjp_5463_:
{
lean_object* v___x_5466_; uint8_t v___x_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5471_; 
v___x_5466_ = l_Lean_Parser_orelseInfo(v_info_5459_, v_info_5461_);
v___x_5467_ = 1;
v___x_5468_ = lean_box(v___x_5467_);
v___x_5469_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotFn___boxed), 5, 3);
lean_closure_set(v___x_5469_, 0, v_fn_5460_);
lean_closure_set(v___x_5469_, 1, v_fn_5462_);
lean_closure_set(v___x_5469_, 2, v___x_5468_);
if (v_isShared_5465_ == 0)
{
lean_ctor_set(v___x_5464_, 1, v___x_5469_);
lean_ctor_set(v___x_5464_, 0, v___x_5466_);
v___x_5471_ = v___x_5464_;
goto v_reusejp_5470_;
}
else
{
lean_object* v_reuseFailAlloc_5472_; 
v_reuseFailAlloc_5472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5472_, 0, v___x_5466_);
lean_ctor_set(v_reuseFailAlloc_5472_, 1, v___x_5469_);
v___x_5471_ = v_reuseFailAlloc_5472_;
goto v_reusejp_5470_;
}
v_reusejp_5470_:
{
return v___x_5471_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1(){
_start:
{
lean_object* v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; 
v___x_5481_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1));
v___x_5482_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__2));
v___x_5483_ = l_Lean_addBuiltinDocString(v___x_5481_, v___x_5482_);
return v___x_5483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___boxed(lean_object* v_a_5484_){
_start:
{
lean_object* v_res_5485_; 
v_res_5485_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1();
return v_res_5485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotAcceptLhs(lean_object* v_antiquotP_5486_, lean_object* v_p_5487_){
_start:
{
lean_object* v_info_5488_; lean_object* v_fn_5489_; lean_object* v_info_5490_; lean_object* v_fn_5491_; lean_object* v___x_5493_; uint8_t v_isShared_5494_; uint8_t v_isSharedCheck_5502_; 
v_info_5488_ = lean_ctor_get(v_antiquotP_5486_, 0);
lean_inc_ref(v_info_5488_);
v_fn_5489_ = lean_ctor_get(v_antiquotP_5486_, 1);
lean_inc_ref(v_fn_5489_);
lean_dec_ref(v_antiquotP_5486_);
v_info_5490_ = lean_ctor_get(v_p_5487_, 0);
v_fn_5491_ = lean_ctor_get(v_p_5487_, 1);
v_isSharedCheck_5502_ = !lean_is_exclusive(v_p_5487_);
if (v_isSharedCheck_5502_ == 0)
{
v___x_5493_ = v_p_5487_;
v_isShared_5494_ = v_isSharedCheck_5502_;
goto v_resetjp_5492_;
}
else
{
lean_inc(v_fn_5491_);
lean_inc(v_info_5490_);
lean_dec(v_p_5487_);
v___x_5493_ = lean_box(0);
v_isShared_5494_ = v_isSharedCheck_5502_;
goto v_resetjp_5492_;
}
v_resetjp_5492_:
{
lean_object* v___x_5495_; uint8_t v___x_5496_; lean_object* v___x_5497_; lean_object* v___x_5498_; lean_object* v___x_5500_; 
v___x_5495_ = l_Lean_Parser_orelseInfo(v_info_5488_, v_info_5490_);
v___x_5496_ = 0;
v___x_5497_ = lean_box(v___x_5496_);
v___x_5498_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotFn___boxed), 5, 3);
lean_closure_set(v___x_5498_, 0, v_fn_5489_);
lean_closure_set(v___x_5498_, 1, v_fn_5491_);
lean_closure_set(v___x_5498_, 2, v___x_5497_);
if (v_isShared_5494_ == 0)
{
lean_ctor_set(v___x_5493_, 1, v___x_5498_);
lean_ctor_set(v___x_5493_, 0, v___x_5495_);
v___x_5500_ = v___x_5493_;
goto v_reusejp_5499_;
}
else
{
lean_object* v_reuseFailAlloc_5501_; 
v_reuseFailAlloc_5501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5501_, 0, v___x_5495_);
lean_ctor_set(v_reuseFailAlloc_5501_, 1, v___x_5498_);
v___x_5500_ = v_reuseFailAlloc_5501_;
goto v_reusejp_5499_;
}
v_reusejp_5499_:
{
return v___x_5500_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1(){
_start:
{
lean_object* v___x_5510_; lean_object* v___x_5511_; lean_object* v___x_5512_; 
v___x_5510_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__1));
v___x_5511_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___closed__2));
v___x_5512_ = l_Lean_addBuiltinDocString(v___x_5510_, v___x_5511_);
return v___x_5512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1___boxed(lean_object* v_a_5513_){
_start:
{
lean_object* v_res_5514_; 
v_res_5514_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotAcceptLhs___regBuiltin_Lean_Parser_withAntiquotAcceptLhs_docString__1();
return v_res_5514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutInfo(lean_object* v_p_5515_){
_start:
{
lean_object* v_fn_5516_; lean_object* v___x_5518_; uint8_t v_isShared_5519_; uint8_t v_isSharedCheck_5524_; 
v_fn_5516_ = lean_ctor_get(v_p_5515_, 1);
v_isSharedCheck_5524_ = !lean_is_exclusive(v_p_5515_);
if (v_isSharedCheck_5524_ == 0)
{
lean_object* v_unused_5525_; 
v_unused_5525_ = lean_ctor_get(v_p_5515_, 0);
lean_dec(v_unused_5525_);
v___x_5518_ = v_p_5515_;
v_isShared_5519_ = v_isSharedCheck_5524_;
goto v_resetjp_5517_;
}
else
{
lean_inc(v_fn_5516_);
lean_dec(v_p_5515_);
v___x_5518_ = lean_box(0);
v_isShared_5519_ = v_isSharedCheck_5524_;
goto v_resetjp_5517_;
}
v_resetjp_5517_:
{
lean_object* v___x_5520_; lean_object* v___x_5522_; 
v___x_5520_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
if (v_isShared_5519_ == 0)
{
lean_ctor_set(v___x_5518_, 0, v___x_5520_);
v___x_5522_ = v___x_5518_;
goto v_reusejp_5521_;
}
else
{
lean_object* v_reuseFailAlloc_5523_; 
v_reuseFailAlloc_5523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5523_, 0, v___x_5520_);
lean_ctor_set(v_reuseFailAlloc_5523_, 1, v_fn_5516_);
v___x_5522_ = v_reuseFailAlloc_5523_;
goto v_reusejp_5521_;
}
v_reusejp_5521_:
{
return v___x_5522_;
}
}
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice___closed__2(void){
_start:
{
lean_object* v___x_5529_; lean_object* v___x_5530_; 
v___x_5529_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__1));
v___x_5530_ = l_Lean_Parser_symbol(v___x_5529_);
return v___x_5530_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice___closed__3(void){
_start:
{
lean_object* v___x_5531_; lean_object* v___x_5532_; 
v___x_5531_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__2));
v___x_5532_ = l_Lean_Parser_symbol(v___x_5531_);
return v___x_5532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice(lean_object* v_kind_5533_, lean_object* v_p_5534_, lean_object* v_suffix_5535_){
_start:
{
lean_object* v___x_5536_; lean_object* v_kind_5537_; lean_object* v___x_5538_; lean_object* v___x_5539_; lean_object* v___x_5540_; lean_object* v___x_5541_; lean_object* v___x_5542_; lean_object* v___x_5543_; lean_object* v___x_5544_; lean_object* v___x_5545_; lean_object* v___x_5546_; lean_object* v___x_5547_; lean_object* v___x_5548_; lean_object* v___x_5549_; lean_object* v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; lean_object* v___x_5553_; 
v___x_5536_ = ((lean_object*)(l_Lean_Parser_mkAntiquotSplice___closed__1));
v_kind_5537_ = l_Lean_Name_append(v_kind_5533_, v___x_5536_);
v___x_5538_ = l_Lean_Parser_maxPrec;
v___x_5539_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__1, &l_Lean_Parser_mkAntiquot___closed__1_once, _init_l_Lean_Parser_mkAntiquot___closed__1);
v___x_5540_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__4, &l_Lean_Parser_mkAntiquot___closed__4_once, _init_l_Lean_Parser_mkAntiquot___closed__4);
v___x_5541_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__6, &l_Lean_Parser_mkAntiquot___closed__6_once, _init_l_Lean_Parser_mkAntiquot___closed__6);
v___x_5542_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice___closed__2, &l_Lean_Parser_mkAntiquotSplice___closed__2_once, _init_l_Lean_Parser_mkAntiquotSplice___closed__2);
v___x_5543_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__1));
v___x_5544_ = l_Lean_Parser_node(v___x_5543_, v_p_5534_);
v___x_5545_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice___closed__3, &l_Lean_Parser_mkAntiquotSplice___closed__3_once, _init_l_Lean_Parser_mkAntiquotSplice___closed__3);
v___x_5546_ = l_Lean_Parser_andthen(v___x_5545_, v_suffix_5535_);
v___x_5547_ = l_Lean_Parser_andthen(v___x_5544_, v___x_5546_);
v___x_5548_ = l_Lean_Parser_andthen(v___x_5542_, v___x_5547_);
v___x_5549_ = l_Lean_Parser_andthen(v___x_5541_, v___x_5548_);
v___x_5550_ = l_Lean_Parser_andthen(v___x_5540_, v___x_5549_);
v___x_5551_ = l_Lean_Parser_andthen(v___x_5539_, v___x_5550_);
v___x_5552_ = l_Lean_Parser_atomic(v___x_5551_);
v___x_5553_ = l_Lean_Parser_leadingNode(v_kind_5537_, v___x_5538_, v___x_5552_);
return v___x_5553_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1(){
_start:
{
lean_object* v___x_5561_; lean_object* v___x_5562_; lean_object* v___x_5563_; 
v___x_5561_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1));
v___x_5562_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__2));
v___x_5563_ = l_Lean_addBuiltinDocString(v___x_5561_, v___x_5562_);
return v___x_5563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___boxed(lean_object* v_a_5564_){
_start:
{
lean_object* v_res_5565_; 
v_res_5565_ = l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1();
return v_res_5565_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn(lean_object* v_kind_5569_, lean_object* v_suffix_5570_, lean_object* v_c_5571_, lean_object* v_s_5572_){
_start:
{
lean_object* v_pos_5573_; lean_object* v_iniSz_5574_; lean_object* v_s_5575_; lean_object* v_stxStack_5576_; lean_object* v_errorMsg_5577_; lean_object* v___x_5578_; uint8_t v___x_5579_; 
v_pos_5573_ = lean_ctor_get(v_s_5572_, 2);
lean_inc(v_pos_5573_);
v_iniSz_5574_ = l_Lean_Parser_ParserState_stackSize(v_s_5572_);
v_s_5575_ = lean_apply_2(v_suffix_5570_, v_c_5571_, v_s_5572_);
v_stxStack_5576_ = lean_ctor_get(v_s_5575_, 0);
lean_inc_ref(v_stxStack_5576_);
v_errorMsg_5577_ = lean_ctor_get(v_s_5575_, 4);
lean_inc(v_errorMsg_5577_);
v___x_5578_ = lean_box(0);
v___x_5579_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5577_, v___x_5578_);
lean_dec(v_errorMsg_5577_);
if (v___x_5579_ == 0)
{
lean_object* v___x_5580_; 
lean_dec_ref(v_stxStack_5576_);
lean_dec(v_kind_5569_);
v___x_5580_ = l_Lean_Parser_ParserState_restore(v_s_5575_, v_iniSz_5574_, v_pos_5573_);
lean_dec(v_iniSz_5574_);
return v___x_5580_;
}
else
{
lean_object* v___x_5581_; lean_object* v___x_5582_; lean_object* v___x_5583_; lean_object* v___x_5584_; lean_object* v___x_5585_; lean_object* v___x_5586_; 
lean_dec(v_iniSz_5574_);
lean_dec(v_pos_5573_);
v___x_5581_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__1));
v___x_5582_ = l_Lean_Name_append(v_kind_5569_, v___x_5581_);
v___x_5583_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_5576_);
lean_dec_ref(v_stxStack_5576_);
v___x_5584_ = lean_unsigned_to_nat(2u);
v___x_5585_ = lean_nat_sub(v___x_5583_, v___x_5584_);
lean_dec(v___x_5583_);
v___x_5586_ = l_Lean_Parser_ParserState_mkNode(v_s_5575_, v___x_5582_, v___x_5585_);
lean_dec(v___x_5585_);
return v___x_5586_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSuffixSplice___lam__0(lean_object* v_fn_5587_, lean_object* v_kind_5588_, lean_object* v_fn_5589_, lean_object* v_c_5590_, lean_object* v_s_5591_){
_start:
{
lean_object* v_s_5592_; lean_object* v_stxStack_5593_; lean_object* v_errorMsg_5594_; lean_object* v___x_5595_; uint8_t v___x_5596_; 
lean_inc_ref(v_c_5590_);
v_s_5592_ = lean_apply_2(v_fn_5587_, v_c_5590_, v_s_5591_);
v_stxStack_5593_ = lean_ctor_get(v_s_5592_, 0);
lean_inc_ref(v_stxStack_5593_);
v_errorMsg_5594_ = lean_ctor_get(v_s_5592_, 4);
lean_inc(v_errorMsg_5594_);
v___x_5595_ = lean_box(0);
v___x_5596_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5594_, v___x_5595_);
lean_dec(v_errorMsg_5594_);
if (v___x_5596_ == 0)
{
lean_dec_ref(v_stxStack_5593_);
lean_dec_ref(v_c_5590_);
lean_dec_ref(v_fn_5589_);
lean_dec(v_kind_5588_);
return v_s_5592_;
}
else
{
lean_object* v___x_5597_; uint8_t v___x_5598_; 
v___x_5597_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_5593_);
lean_dec_ref(v_stxStack_5593_);
v___x_5598_ = l_Lean_Syntax_isAntiquots(v___x_5597_);
if (v___x_5598_ == 0)
{
lean_dec_ref(v_c_5590_);
lean_dec_ref(v_fn_5589_);
lean_dec(v_kind_5588_);
return v_s_5592_;
}
else
{
lean_object* v___x_5599_; 
v___x_5599_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn(v_kind_5588_, v_fn_5589_, v_c_5590_, v_s_5592_);
return v___x_5599_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSuffixSplice(lean_object* v_kind_5600_, lean_object* v_p_5601_, lean_object* v_suffix_5602_){
_start:
{
lean_object* v_info_5603_; lean_object* v_fn_5604_; lean_object* v_info_5605_; lean_object* v_fn_5606_; lean_object* v___x_5608_; uint8_t v_isShared_5609_; uint8_t v_isSharedCheck_5615_; 
v_info_5603_ = lean_ctor_get(v_p_5601_, 0);
lean_inc_ref(v_info_5603_);
v_fn_5604_ = lean_ctor_get(v_p_5601_, 1);
lean_inc_ref(v_fn_5604_);
lean_dec_ref(v_p_5601_);
v_info_5605_ = lean_ctor_get(v_suffix_5602_, 0);
v_fn_5606_ = lean_ctor_get(v_suffix_5602_, 1);
v_isSharedCheck_5615_ = !lean_is_exclusive(v_suffix_5602_);
if (v_isSharedCheck_5615_ == 0)
{
v___x_5608_ = v_suffix_5602_;
v_isShared_5609_ = v_isSharedCheck_5615_;
goto v_resetjp_5607_;
}
else
{
lean_inc(v_fn_5606_);
lean_inc(v_info_5605_);
lean_dec(v_suffix_5602_);
v___x_5608_ = lean_box(0);
v_isShared_5609_ = v_isSharedCheck_5615_;
goto v_resetjp_5607_;
}
v_resetjp_5607_:
{
lean_object* v___f_5610_; lean_object* v___x_5611_; lean_object* v___x_5613_; 
v___f_5610_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSuffixSplice___lam__0), 5, 3);
lean_closure_set(v___f_5610_, 0, v_fn_5604_);
lean_closure_set(v___f_5610_, 1, v_kind_5600_);
lean_closure_set(v___f_5610_, 2, v_fn_5606_);
v___x_5611_ = l_Lean_Parser_andthenInfo(v_info_5603_, v_info_5605_);
if (v_isShared_5609_ == 0)
{
lean_ctor_set(v___x_5608_, 1, v___f_5610_);
lean_ctor_set(v___x_5608_, 0, v___x_5611_);
v___x_5613_ = v___x_5608_;
goto v_reusejp_5612_;
}
else
{
lean_object* v_reuseFailAlloc_5614_; 
v_reuseFailAlloc_5614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5614_, 0, v___x_5611_);
lean_ctor_set(v_reuseFailAlloc_5614_, 1, v___f_5610_);
v___x_5613_ = v_reuseFailAlloc_5614_;
goto v_reusejp_5612_;
}
v_reusejp_5612_:
{
return v___x_5613_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1(){
_start:
{
lean_object* v___x_5623_; lean_object* v___x_5624_; lean_object* v___x_5625_; 
v___x_5623_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1));
v___x_5624_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__2));
v___x_5625_ = l_Lean_addBuiltinDocString(v___x_5623_, v___x_5624_);
return v___x_5625_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___boxed(lean_object* v_a_5626_){
_start:
{
lean_object* v_res_5627_; 
v_res_5627_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1();
return v_res_5627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix(lean_object* v_kind_5628_, lean_object* v_p_5629_, lean_object* v_suffix_5630_){
_start:
{
lean_object* v___x_5631_; lean_object* v___x_5632_; lean_object* v___x_5633_; lean_object* v___x_5634_; 
lean_inc_ref(v_p_5629_);
v___x_5631_ = l_Lean_Parser_withoutInfo(v_p_5629_);
lean_inc_ref(v_suffix_5630_);
lean_inc(v_kind_5628_);
v___x_5632_ = l_Lean_Parser_mkAntiquotSplice(v_kind_5628_, v___x_5631_, v_suffix_5630_);
v___x_5633_ = l_Lean_Parser_withAntiquotSuffixSplice(v_kind_5628_, v_p_5629_, v_suffix_5630_);
v___x_5634_ = l_Lean_Parser_withAntiquot(v___x_5632_, v___x_5633_);
return v___x_5634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot(lean_object* v_name_5635_, lean_object* v_kind_5636_, lean_object* v_p_5637_, uint8_t v_anonymous_5638_){
_start:
{
uint8_t v___x_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; 
v___x_5639_ = 0;
lean_inc(v_kind_5636_);
v___x_5640_ = l_Lean_Parser_mkAntiquot(v_name_5635_, v_kind_5636_, v_anonymous_5638_, v___x_5639_);
v___x_5641_ = l_Lean_Parser_node(v_kind_5636_, v_p_5637_);
v___x_5642_ = l_Lean_Parser_withAntiquot(v___x_5640_, v___x_5641_);
return v___x_5642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot___boxed(lean_object* v_name_5643_, lean_object* v_kind_5644_, lean_object* v_p_5645_, lean_object* v_anonymous_5646_){
_start:
{
uint8_t v_anonymous_boxed_5647_; lean_object* v_res_5648_; 
v_anonymous_boxed_5647_ = lean_unbox(v_anonymous_5646_);
v_res_5648_ = l_Lean_Parser_nodeWithAntiquot(v_name_5643_, v_kind_5644_, v_p_5645_, v_anonymous_boxed_5647_);
return v_res_5648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser(lean_object* v_p_5653_, lean_object* v_sep_5654_){
_start:
{
lean_object* v___x_5655_; lean_object* v___x_5656_; lean_object* v___x_5657_; lean_object* v___x_5658_; lean_object* v_str_5659_; lean_object* v_startInclusive_5660_; lean_object* v_endExclusive_5661_; lean_object* v___x_5662_; lean_object* v___x_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; 
v___x_5655_ = lean_unsigned_to_nat(0u);
v___x_5656_ = lean_string_utf8_byte_size(v_sep_5654_);
v___x_5657_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5657_, 0, v_sep_5654_);
lean_ctor_set(v___x_5657_, 1, v___x_5655_);
lean_ctor_set(v___x_5657_, 2, v___x_5656_);
v___x_5658_ = l_String_Slice_trimAscii(v___x_5657_);
v_str_5659_ = lean_ctor_get(v___x_5658_, 0);
lean_inc_ref(v_str_5659_);
v_startInclusive_5660_ = lean_ctor_get(v___x_5658_, 1);
lean_inc(v_startInclusive_5660_);
v_endExclusive_5661_ = lean_ctor_get(v___x_5658_, 2);
lean_inc(v_endExclusive_5661_);
lean_dec_ref(v___x_5658_);
v___x_5662_ = ((lean_object*)(l_Lean_Parser_sepByElemParser___closed__1));
v___x_5663_ = lean_string_utf8_extract_fast(v_str_5659_, v_startInclusive_5660_, v_endExclusive_5661_);
lean_dec(v_endExclusive_5661_);
lean_dec(v_startInclusive_5660_);
lean_dec_ref(v_str_5659_);
v___x_5664_ = ((lean_object*)(l_Lean_Parser_sepByElemParser___closed__2));
v___x_5665_ = lean_string_append(v___x_5663_, v___x_5664_);
v___x_5666_ = l_Lean_Parser_symbol(v___x_5665_);
v___x_5667_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_5662_, v_p_5653_, v___x_5666_);
return v___x_5667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy(lean_object* v_p_5668_, lean_object* v_sep_5669_, lean_object* v_psep_5670_, uint8_t v_allowTrailingSep_5671_){
_start:
{
lean_object* v___x_5672_; lean_object* v___x_5673_; 
v___x_5672_ = l_Lean_Parser_sepByElemParser(v_p_5668_, v_sep_5669_);
v___x_5673_ = l_Lean_Parser_sepByNoAntiquot(v___x_5672_, v_psep_5670_, v_allowTrailingSep_5671_);
return v___x_5673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy___boxed(lean_object* v_p_5674_, lean_object* v_sep_5675_, lean_object* v_psep_5676_, lean_object* v_allowTrailingSep_5677_){
_start:
{
uint8_t v_allowTrailingSep_boxed_5678_; lean_object* v_res_5679_; 
v_allowTrailingSep_boxed_5678_ = lean_unbox(v_allowTrailingSep_5677_);
v_res_5679_ = l_Lean_Parser_sepBy(v_p_5674_, v_sep_5675_, v_psep_5676_, v_allowTrailingSep_boxed_5678_);
return v_res_5679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1(lean_object* v_p_5680_, lean_object* v_sep_5681_, lean_object* v_psep_5682_, uint8_t v_allowTrailingSep_5683_){
_start:
{
lean_object* v___x_5684_; lean_object* v___x_5685_; 
v___x_5684_ = l_Lean_Parser_sepByElemParser(v_p_5680_, v_sep_5681_);
v___x_5685_ = l_Lean_Parser_sepBy1NoAntiquot(v___x_5684_, v_psep_5682_, v_allowTrailingSep_5683_);
return v___x_5685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1___boxed(lean_object* v_p_5686_, lean_object* v_sep_5687_, lean_object* v_psep_5688_, lean_object* v_allowTrailingSep_5689_){
_start:
{
uint8_t v_allowTrailingSep_boxed_5690_; lean_object* v_res_5691_; 
v_allowTrailingSep_boxed_5690_ = lean_unbox(v_allowTrailingSep_5689_);
v_res_5691_ = l_Lean_Parser_sepBy1(v_p_5686_, v_sep_5687_, v_psep_5688_, v_allowTrailingSep_boxed_5690_);
return v_res_5691_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkResult(lean_object* v_s_5692_, lean_object* v_iniSz_5693_){
_start:
{
lean_object* v___x_5694_; lean_object* v___x_5695_; lean_object* v___x_5696_; uint8_t v___x_5697_; 
v___x_5694_ = l_Lean_Parser_ParserState_stackSize(v_s_5692_);
v___x_5695_ = lean_unsigned_to_nat(1u);
v___x_5696_ = lean_nat_add(v_iniSz_5693_, v___x_5695_);
v___x_5697_ = lean_nat_dec_eq(v___x_5694_, v___x_5696_);
lean_dec(v___x_5696_);
lean_dec(v___x_5694_);
if (v___x_5697_ == 0)
{
lean_object* v___x_5698_; lean_object* v___x_5699_; 
v___x_5698_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__1));
v___x_5699_ = l_Lean_Parser_ParserState_mkNode(v_s_5692_, v___x_5698_, v_iniSz_5693_);
return v___x_5699_;
}
else
{
return v_s_5692_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkResult___boxed(lean_object* v_s_5700_, lean_object* v_iniSz_5701_){
_start:
{
lean_object* v_res_5702_; 
v_res_5702_ = l___private_Lean_Parser_Basic_0__Lean_Parser_mkResult(v_s_5700_, v_iniSz_5701_);
lean_dec(v_iniSz_5701_);
return v_res_5702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParserAux(lean_object* v_kind_5703_, lean_object* v_tables_5704_, uint8_t v_behavior_5705_, lean_object* v_c_5706_, lean_object* v_s_5707_){
_start:
{
lean_object* v_leadingTable_5708_; lean_object* v_leadingParsers_5709_; lean_object* v_iniSz_5710_; lean_object* v___x_5711_; lean_object* v_fst_5712_; lean_object* v_snd_5713_; lean_object* v___x_5715_; uint8_t v_isShared_5716_; uint8_t v_isSharedCheck_5734_; 
v_leadingTable_5708_ = lean_ctor_get(v_tables_5704_, 0);
lean_inc(v_leadingTable_5708_);
v_leadingParsers_5709_ = lean_ctor_get(v_tables_5704_, 1);
lean_inc(v_leadingParsers_5709_);
lean_dec_ref(v_tables_5704_);
v_iniSz_5710_ = l_Lean_Parser_ParserState_stackSize(v_s_5707_);
lean_inc_ref(v_c_5706_);
v___x_5711_ = l_Lean_Parser_indexed___redArg(v_leadingTable_5708_, v_c_5706_, v_s_5707_, v_behavior_5705_);
lean_dec(v_leadingTable_5708_);
v_fst_5712_ = lean_ctor_get(v___x_5711_, 0);
v_snd_5713_ = lean_ctor_get(v___x_5711_, 1);
v_isSharedCheck_5734_ = !lean_is_exclusive(v___x_5711_);
if (v_isSharedCheck_5734_ == 0)
{
v___x_5715_ = v___x_5711_;
v_isShared_5716_ = v_isSharedCheck_5734_;
goto v_resetjp_5714_;
}
else
{
lean_inc(v_snd_5713_);
lean_inc(v_fst_5712_);
lean_dec(v___x_5711_);
v___x_5715_ = lean_box(0);
v_isShared_5716_ = v_isSharedCheck_5734_;
goto v_resetjp_5714_;
}
v_resetjp_5714_:
{
lean_object* v_errorMsg_5717_; lean_object* v___x_5718_; uint8_t v___x_5719_; 
v_errorMsg_5717_ = lean_ctor_get(v_fst_5712_, 4);
v___x_5718_ = lean_box(0);
v___x_5719_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5717_, v___x_5718_);
if (v___x_5719_ == 0)
{
lean_del_object(v___x_5715_);
lean_dec(v_snd_5713_);
lean_dec(v_iniSz_5710_);
lean_dec(v_leadingParsers_5709_);
lean_dec_ref(v_c_5706_);
lean_dec(v_kind_5703_);
return v_fst_5712_;
}
else
{
lean_object* v_ps_5720_; uint8_t v___x_5721_; 
v_ps_5720_ = l_List_appendTR___redArg(v_leadingParsers_5709_, v_snd_5713_);
v___x_5721_ = l_List_isEmpty___redArg(v_ps_5720_);
if (v___x_5721_ == 0)
{
lean_object* v_s_5722_; lean_object* v___x_5723_; 
lean_del_object(v___x_5715_);
lean_dec(v_kind_5703_);
v_s_5722_ = l_Lean_Parser_longestMatchFn(v___x_5718_, v_ps_5720_, v_c_5706_, v_fst_5712_);
v___x_5723_ = l___private_Lean_Parser_Basic_0__Lean_Parser_mkResult(v_s_5722_, v_iniSz_5710_);
lean_dec(v_iniSz_5710_);
return v___x_5723_;
}
else
{
lean_object* v___x_5724_; lean_object* v___x_5725_; lean_object* v___x_5727_; 
lean_dec(v_ps_5720_);
lean_dec(v_iniSz_5710_);
v___x_5724_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_5703_, v___x_5721_);
v___x_5725_ = lean_box(0);
lean_inc_ref(v___x_5724_);
if (v_isShared_5716_ == 0)
{
lean_ctor_set_tag(v___x_5715_, 1);
lean_ctor_set(v___x_5715_, 1, v___x_5725_);
lean_ctor_set(v___x_5715_, 0, v___x_5724_);
v___x_5727_ = v___x_5715_;
goto v_reusejp_5726_;
}
else
{
lean_object* v_reuseFailAlloc_5733_; 
v_reuseFailAlloc_5733_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5733_, 0, v___x_5724_);
lean_ctor_set(v_reuseFailAlloc_5733_, 1, v___x_5725_);
v___x_5727_ = v_reuseFailAlloc_5733_;
goto v_reusejp_5726_;
}
v_reusejp_5726_:
{
lean_object* v_s_5728_; lean_object* v_errorMsg_5729_; uint8_t v___x_5730_; 
v_s_5728_ = l_Lean_Parser_tokenFn(v___x_5727_, v_c_5706_, v_fst_5712_);
v_errorMsg_5729_ = lean_ctor_get(v_s_5728_, 4);
v___x_5730_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5729_, v___x_5718_);
if (v___x_5730_ == 0)
{
lean_dec_ref(v___x_5724_);
return v_s_5728_;
}
else
{
lean_object* v___x_5731_; lean_object* v___x_5732_; 
v___x_5731_ = lean_unsigned_to_nat(0u);
v___x_5732_ = l_Lean_Parser_ParserState_mkUnexpectedTokenError(v_s_5728_, v___x_5724_, v___x_5731_);
return v___x_5732_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParserAux___boxed(lean_object* v_kind_5735_, lean_object* v_tables_5736_, lean_object* v_behavior_5737_, lean_object* v_c_5738_, lean_object* v_s_5739_){
_start:
{
uint8_t v_behavior_boxed_5740_; lean_object* v_res_5741_; 
v_behavior_boxed_5740_ = lean_unbox(v_behavior_5737_);
v_res_5741_ = l_Lean_Parser_leadingParserAux(v_kind_5735_, v_tables_5736_, v_behavior_boxed_5740_, v_c_5738_, v_s_5739_);
return v_res_5741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParser(lean_object* v_kind_5742_, lean_object* v_tables_5743_, uint8_t v_behavior_5744_, lean_object* v_antiquotParser_5745_, lean_object* v_a_5746_, lean_object* v_a_5747_){
_start:
{
lean_object* v___x_5748_; lean_object* v___x_5749_; uint8_t v___x_5750_; lean_object* v___x_5751_; 
v___x_5748_ = lean_box(v_behavior_5744_);
v___x_5749_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingParserAux___boxed), 5, 3);
lean_closure_set(v___x_5749_, 0, v_kind_5742_);
lean_closure_set(v___x_5749_, 1, v_tables_5743_);
lean_closure_set(v___x_5749_, 2, v___x_5748_);
v___x_5750_ = 0;
v___x_5751_ = l_Lean_Parser_withAntiquotFn(v_antiquotParser_5745_, v___x_5749_, v___x_5750_, v_a_5746_, v_a_5747_);
return v___x_5751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParser___boxed(lean_object* v_kind_5752_, lean_object* v_tables_5753_, lean_object* v_behavior_5754_, lean_object* v_antiquotParser_5755_, lean_object* v_a_5756_, lean_object* v_a_5757_){
_start:
{
uint8_t v_behavior_boxed_5758_; lean_object* v_res_5759_; 
v_behavior_boxed_5758_ = lean_unbox(v_behavior_5754_);
v_res_5759_ = l_Lean_Parser_leadingParser(v_kind_5752_, v_tables_5753_, v_behavior_boxed_5758_, v_antiquotParser_5755_, v_a_5756_, v_a_5757_);
return v_res_5759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_trailingLoopStep(lean_object* v_tables_5760_, lean_object* v_left_5761_, lean_object* v_ps_5762_, lean_object* v_c_5763_, lean_object* v_s_5764_){
_start:
{
lean_object* v_trailingParsers_5765_; lean_object* v___x_5766_; lean_object* v___x_5767_; lean_object* v___x_5768_; 
v_trailingParsers_5765_ = lean_ctor_get(v_tables_5760_, 3);
lean_inc(v_trailingParsers_5765_);
lean_dec_ref(v_tables_5760_);
v___x_5766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5766_, 0, v_left_5761_);
v___x_5767_ = l_List_appendTR___redArg(v_ps_5762_, v_trailingParsers_5765_);
v___x_5768_ = l_Lean_Parser_longestMatchFn(v___x_5766_, v___x_5767_, v_c_5763_, v_s_5764_);
return v___x_5768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_trailingLoop(lean_object* v_tables_5769_, lean_object* v_c_5770_, lean_object* v_s_5771_){
_start:
{
lean_object* v_pos_5772_; lean_object* v_trailingTable_5773_; lean_object* v_trailingParsers_5774_; lean_object* v_iniSz_5775_; uint8_t v___x_5776_; lean_object* v___x_5777_; lean_object* v_fst_5778_; lean_object* v_snd_5779_; lean_object* v_stxStack_5780_; lean_object* v_errorMsg_5781_; lean_object* v___x_5796_; uint8_t v___x_5797_; 
v_pos_5772_ = lean_ctor_get(v_s_5771_, 2);
lean_inc(v_pos_5772_);
v_trailingTable_5773_ = lean_ctor_get(v_tables_5769_, 2);
v_trailingParsers_5774_ = lean_ctor_get(v_tables_5769_, 3);
v_iniSz_5775_ = l_Lean_Parser_ParserState_stackSize(v_s_5771_);
v___x_5776_ = 0;
lean_inc_ref(v_c_5770_);
v___x_5777_ = l_Lean_Parser_indexed___redArg(v_trailingTable_5773_, v_c_5770_, v_s_5771_, v___x_5776_);
v_fst_5778_ = lean_ctor_get(v___x_5777_, 0);
lean_inc(v_fst_5778_);
v_snd_5779_ = lean_ctor_get(v___x_5777_, 1);
lean_inc(v_snd_5779_);
lean_dec_ref(v___x_5777_);
v_stxStack_5780_ = lean_ctor_get(v_fst_5778_, 0);
v_errorMsg_5781_ = lean_ctor_get(v_fst_5778_, 4);
v___x_5796_ = lean_box(0);
v___x_5797_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5781_, v___x_5796_);
if (v___x_5797_ == 0)
{
lean_object* v___x_5798_; 
lean_dec(v_snd_5779_);
lean_dec_ref(v_c_5770_);
lean_dec_ref(v_tables_5769_);
v___x_5798_ = l_Lean_Parser_ParserState_restore(v_fst_5778_, v_iniSz_5775_, v_pos_5772_);
lean_dec(v_iniSz_5775_);
return v___x_5798_;
}
else
{
uint8_t v___x_5799_; 
v___x_5799_ = l_List_isEmpty___redArg(v_snd_5779_);
if (v___x_5799_ == 0)
{
goto v___jp_5782_;
}
else
{
uint8_t v___x_5800_; 
v___x_5800_ = l_List_isEmpty___redArg(v_trailingParsers_5774_);
if (v___x_5800_ == 0)
{
goto v___jp_5782_;
}
else
{
lean_dec(v_snd_5779_);
lean_dec(v_iniSz_5775_);
lean_dec(v_pos_5772_);
lean_dec_ref(v_c_5770_);
lean_dec_ref(v_tables_5769_);
return v_fst_5778_;
}
}
}
v___jp_5782_:
{
lean_object* v_left_5783_; lean_object* v_s_5784_; lean_object* v_s_5785_; lean_object* v_pos_5786_; lean_object* v_errorMsg_5787_; lean_object* v___x_5788_; uint8_t v___x_5789_; 
v_left_5783_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_5780_);
v_s_5784_ = l_Lean_Parser_ParserState_popSyntax(v_fst_5778_);
lean_inc_ref(v_c_5770_);
lean_inc(v_left_5783_);
lean_inc_ref(v_tables_5769_);
v_s_5785_ = l_Lean_Parser_trailingLoopStep(v_tables_5769_, v_left_5783_, v_snd_5779_, v_c_5770_, v_s_5784_);
v_pos_5786_ = lean_ctor_get(v_s_5785_, 2);
v_errorMsg_5787_ = lean_ctor_get(v_s_5785_, 4);
v___x_5788_ = lean_box(0);
v___x_5789_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5787_, v___x_5788_);
if (v___x_5789_ == 0)
{
uint8_t v_decide_5790_; 
lean_dec_ref(v_c_5770_);
lean_dec_ref(v_tables_5769_);
v_decide_5790_ = lean_nat_dec_eq(v_pos_5786_, v_pos_5772_);
if (v_decide_5790_ == 0)
{
lean_dec(v_left_5783_);
lean_dec(v_iniSz_5775_);
lean_dec(v_pos_5772_);
return v_s_5785_;
}
else
{
lean_object* v___x_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5794_; 
v___x_5791_ = lean_unsigned_to_nat(1u);
v___x_5792_ = lean_nat_sub(v_iniSz_5775_, v___x_5791_);
lean_dec(v_iniSz_5775_);
v___x_5793_ = l_Lean_Parser_ParserState_restore(v_s_5785_, v___x_5792_, v_pos_5772_);
lean_dec(v___x_5792_);
v___x_5794_ = l_Lean_Parser_ParserState_pushSyntax(v___x_5793_, v_left_5783_);
return v___x_5794_;
}
}
else
{
lean_dec(v_left_5783_);
lean_dec(v_iniSz_5775_);
lean_dec(v_pos_5772_);
v_s_5771_ = v_s_5785_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_prattParser(lean_object* v_kind_5801_, lean_object* v_tables_5802_, uint8_t v_behavior_5803_, lean_object* v_antiquotParser_5804_, lean_object* v_c_5805_, lean_object* v_s_5806_){
_start:
{
lean_object* v_s_5807_; lean_object* v_errorMsg_5808_; lean_object* v___x_5809_; uint8_t v___x_5810_; 
lean_inc_ref(v_c_5805_);
lean_inc_ref(v_tables_5802_);
v_s_5807_ = l_Lean_Parser_leadingParser(v_kind_5801_, v_tables_5802_, v_behavior_5803_, v_antiquotParser_5804_, v_c_5805_, v_s_5806_);
v_errorMsg_5808_ = lean_ctor_get(v_s_5807_, 4);
v___x_5809_ = lean_box(0);
v___x_5810_ = l_instBEqOption_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5808_, v___x_5809_);
if (v___x_5810_ == 0)
{
lean_dec_ref(v_c_5805_);
lean_dec_ref(v_tables_5802_);
return v_s_5807_;
}
else
{
lean_object* v___x_5811_; 
v___x_5811_ = l_Lean_Parser_trailingLoop(v_tables_5802_, v_c_5805_, v_s_5807_);
return v___x_5811_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_prattParser___boxed(lean_object* v_kind_5812_, lean_object* v_tables_5813_, lean_object* v_behavior_5814_, lean_object* v_antiquotParser_5815_, lean_object* v_c_5816_, lean_object* v_s_5817_){
_start:
{
uint8_t v_behavior_boxed_5818_; lean_object* v_res_5819_; 
v_behavior_boxed_5818_ = lean_unbox(v_behavior_5814_);
v_res_5819_ = l_Lean_Parser_prattParser(v_kind_5812_, v_tables_5813_, v_behavior_boxed_5818_, v_antiquotParser_5815_, v_c_5816_, v_s_5817_);
return v_res_5819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_fieldIdxFn(lean_object* v_c_5824_, lean_object* v_s_5825_){
_start:
{
lean_object* v_toInputContext_5826_; lean_object* v_pos_5827_; lean_object* v_inputString_5828_; lean_object* v_initStackSz_5829_; uint32_t v_curr_5834_; uint32_t v___x_5835_; uint8_t v___x_5836_; 
v_toInputContext_5826_ = lean_ctor_get(v_c_5824_, 0);
v_pos_5827_ = lean_ctor_get(v_s_5825_, 2);
lean_inc(v_pos_5827_);
v_inputString_5828_ = lean_ctor_get(v_toInputContext_5826_, 0);
v_initStackSz_5829_ = l_Lean_Parser_ParserState_stackSize(v_s_5825_);
v_curr_5834_ = lean_string_utf8_get(v_inputString_5828_, v_pos_5827_);
v___x_5835_ = 48;
v___x_5836_ = lean_uint32_dec_le(v___x_5835_, v_curr_5834_);
if (v___x_5836_ == 0)
{
lean_dec_ref(v_c_5824_);
goto v___jp_5830_;
}
else
{
uint32_t v___x_5837_; uint8_t v___x_5838_; 
v___x_5837_ = 57;
v___x_5838_ = lean_uint32_dec_le(v_curr_5834_, v___x_5837_);
if (v___x_5838_ == 0)
{
lean_dec_ref(v_c_5824_);
goto v___jp_5830_;
}
else
{
uint8_t v___x_5839_; 
v___x_5839_ = lean_uint32_dec_eq(v_curr_5834_, v___x_5835_);
if (v___x_5839_ == 0)
{
lean_object* v___f_5840_; lean_object* v_s_5841_; lean_object* v___x_5842_; lean_object* v___x_5843_; 
lean_dec(v_initStackSz_5829_);
v___f_5840_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0));
lean_inc_ref(v_c_5824_);
v_s_5841_ = l_Lean_Parser_takeWhileFn(v___f_5840_, v_c_5824_, v_s_5825_);
v___x_5842_ = ((lean_object*)(l_Lean_Parser_fieldIdxFn___closed__2));
v___x_5843_ = l_Lean_Parser_mkNodeToken(v___x_5842_, v_pos_5827_, v___x_5838_, v_c_5824_, v_s_5841_);
return v___x_5843_;
}
else
{
lean_dec_ref(v_c_5824_);
goto v___jp_5830_;
}
}
}
v___jp_5830_:
{
lean_object* v___x_5831_; lean_object* v___x_5832_; lean_object* v___x_5833_; 
v___x_5831_ = ((lean_object*)(l_Lean_Parser_fieldIdxFn___closed__0));
v___x_5832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5832_, 0, v_initStackSz_5829_);
v___x_5833_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_5825_, v___x_5831_, v_pos_5827_, v___x_5832_);
lean_dec_ref_known(v___x_5832_, 1);
return v___x_5833_;
}
}
}
static lean_object* _init_l_Lean_Parser_fieldIdx___closed__0(void){
_start:
{
uint8_t v___x_5844_; uint8_t v___x_5845_; lean_object* v___x_5846_; lean_object* v___x_5847_; lean_object* v___x_5848_; 
v___x_5844_ = 0;
v___x_5845_ = 1;
v___x_5846_ = ((lean_object*)(l_Lean_Parser_fieldIdxFn___closed__2));
v___x_5847_ = ((lean_object*)(l_Lean_Parser_fieldIdxFn___closed__1));
v___x_5848_ = l_Lean_Parser_mkAntiquot(v___x_5847_, v___x_5846_, v___x_5845_, v___x_5844_);
return v___x_5848_;
}
}
static lean_object* _init_l_Lean_Parser_fieldIdx___closed__1(void){
_start:
{
lean_object* v___x_5849_; lean_object* v___x_5850_; 
v___x_5849_ = ((lean_object*)(l_Lean_Parser_fieldIdxFn___closed__1));
v___x_5850_ = l_Lean_Parser_mkAtomicInfo(v___x_5849_);
return v___x_5850_;
}
}
static lean_object* _init_l_Lean_Parser_fieldIdx___closed__2(void){
_start:
{
lean_object* v___x_5851_; lean_object* v___x_5852_; lean_object* v___x_5853_; 
v___x_5851_ = lean_alloc_closure((void*)(l_Lean_Parser_fieldIdxFn), 2, 0);
v___x_5852_ = lean_obj_once(&l_Lean_Parser_fieldIdx___closed__1, &l_Lean_Parser_fieldIdx___closed__1_once, _init_l_Lean_Parser_fieldIdx___closed__1);
v___x_5853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5853_, 0, v___x_5852_);
lean_ctor_set(v___x_5853_, 1, v___x_5851_);
return v___x_5853_;
}
}
static lean_object* _init_l_Lean_Parser_fieldIdx___closed__3(void){
_start:
{
lean_object* v___x_5854_; lean_object* v___x_5855_; lean_object* v___x_5856_; 
v___x_5854_ = lean_obj_once(&l_Lean_Parser_fieldIdx___closed__2, &l_Lean_Parser_fieldIdx___closed__2_once, _init_l_Lean_Parser_fieldIdx___closed__2);
v___x_5855_ = lean_obj_once(&l_Lean_Parser_fieldIdx___closed__0, &l_Lean_Parser_fieldIdx___closed__0_once, _init_l_Lean_Parser_fieldIdx___closed__0);
v___x_5856_ = l_Lean_Parser_withAntiquot(v___x_5855_, v___x_5854_);
return v___x_5856_;
}
}
static lean_object* _init_l_Lean_Parser_fieldIdx(void){
_start:
{
lean_object* v___x_5857_; 
v___x_5857_ = lean_obj_once(&l_Lean_Parser_fieldIdx___closed__3, &l_Lean_Parser_fieldIdx___closed__3_once, _init_l_Lean_Parser_fieldIdx___closed__3);
return v___x_5857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_skip___lam__0(lean_object* v_x_5858_, lean_object* v_s_5859_){
_start:
{
lean_inc_ref(v_s_5859_);
return v_s_5859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_skip___lam__0___boxed(lean_object* v_x_5860_, lean_object* v_s_5861_){
_start:
{
lean_object* v_res_5862_; 
v_res_5862_ = l_Lean_Parser_skip___lam__0(v_x_5860_, v_s_5861_);
lean_dec_ref(v_s_5861_);
lean_dec_ref(v_x_5860_);
return v_res_5862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___redArg(lean_object* v_inst_5868_, lean_object* v_s_5869_, lean_object* v_f_5870_, lean_object* v_b_5871_){
_start:
{
lean_object* v_toApplicative_5872_; lean_object* v_toPure_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; uint8_t v___x_5877_; 
v_toApplicative_5872_ = lean_ctor_get(v_inst_5868_, 0);
v_toPure_5873_ = lean_ctor_get(v_toApplicative_5872_, 1);
v___x_5874_ = l_Lean_Syntax_getArgs(v_s_5869_);
v___x_5875_ = lean_unsigned_to_nat(0u);
v___x_5876_ = lean_array_get_size(v___x_5874_);
v___x_5877_ = lean_nat_dec_lt(v___x_5875_, v___x_5876_);
if (v___x_5877_ == 0)
{
lean_object* v___x_5878_; 
lean_inc(v_toPure_5873_);
lean_dec_ref(v___x_5874_);
lean_dec(v_f_5870_);
lean_dec_ref(v_inst_5868_);
v___x_5878_ = lean_apply_2(v_toPure_5873_, lean_box(0), v_b_5871_);
return v___x_5878_;
}
else
{
lean_object* v___x_5879_; size_t v___x_5880_; size_t v___x_5881_; lean_object* v___x_5882_; 
v___x_5879_ = lean_alloc_closure((void*)(l_flip), 6, 4);
lean_closure_set(v___x_5879_, 0, lean_box(0));
lean_closure_set(v___x_5879_, 1, lean_box(0));
lean_closure_set(v___x_5879_, 2, lean_box(0));
lean_closure_set(v___x_5879_, 3, v_f_5870_);
v___x_5880_ = ((size_t)0ULL);
v___x_5881_ = lean_usize_of_nat(v___x_5876_);
v___x_5882_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_5868_, v___x_5879_, v___x_5874_, v___x_5880_, v___x_5881_, v_b_5871_);
return v___x_5882_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___redArg___boxed(lean_object* v_inst_5883_, lean_object* v_s_5884_, lean_object* v_f_5885_, lean_object* v_b_5886_){
_start:
{
lean_object* v_res_5887_; 
v_res_5887_ = l_Lean_Syntax_foldArgsM___redArg(v_inst_5883_, v_s_5884_, v_f_5885_, v_b_5886_);
lean_dec(v_s_5884_);
return v_res_5887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM(lean_object* v_m_5888_, lean_object* v_inst_5889_, lean_object* v_00_u03b2_5890_, lean_object* v_s_5891_, lean_object* v_f_5892_, lean_object* v_b_5893_){
_start:
{
lean_object* v___x_5894_; 
v___x_5894_ = l_Lean_Syntax_foldArgsM___redArg(v_inst_5889_, v_s_5891_, v_f_5892_, v_b_5893_);
return v___x_5894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___boxed(lean_object* v_m_5895_, lean_object* v_inst_5896_, lean_object* v_00_u03b2_5897_, lean_object* v_s_5898_, lean_object* v_f_5899_, lean_object* v_b_5900_){
_start:
{
lean_object* v_res_5901_; 
v_res_5901_ = l_Lean_Syntax_foldArgsM(v_m_5895_, v_inst_5896_, v_00_u03b2_5897_, v_s_5898_, v_f_5899_, v_b_5900_);
lean_dec(v_s_5898_);
return v_res_5901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___redArg___lam__0(lean_object* v_f_5902_, lean_object* v_x1_5903_, lean_object* v_x2_5904_){
_start:
{
lean_object* v___x_5905_; 
v___x_5905_ = lean_apply_2(v_f_5902_, v_x1_5903_, v_x2_5904_);
return v___x_5905_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg(lean_object* v_f_5906_, lean_object* v_as_5907_, size_t v_i_5908_, size_t v_stop_5909_, lean_object* v_b_5910_){
_start:
{
uint8_t v___x_5911_; 
v___x_5911_ = lean_usize_dec_eq(v_i_5908_, v_stop_5909_);
if (v___x_5911_ == 0)
{
lean_object* v___x_5912_; lean_object* v___x_5913_; size_t v___x_5914_; size_t v___x_5915_; 
v___x_5912_ = lean_array_uget_borrowed(v_as_5907_, v_i_5908_);
lean_inc(v_f_5906_);
lean_inc(v___x_5912_);
v___x_5913_ = lean_apply_2(v_f_5906_, v___x_5912_, v_b_5910_);
v___x_5914_ = ((size_t)1ULL);
v___x_5915_ = lean_usize_add(v_i_5908_, v___x_5914_);
v_i_5908_ = v___x_5915_;
v_b_5910_ = v___x_5913_;
goto _start;
}
else
{
lean_dec(v_f_5906_);
return v_b_5910_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg___boxed(lean_object* v_f_5917_, lean_object* v_as_5918_, lean_object* v_i_5919_, lean_object* v_stop_5920_, lean_object* v_b_5921_){
_start:
{
size_t v_i_boxed_5922_; size_t v_stop_boxed_5923_; lean_object* v_res_5924_; 
v_i_boxed_5922_ = lean_unbox_usize(v_i_5919_);
lean_dec(v_i_5919_);
v_stop_boxed_5923_ = lean_unbox_usize(v_stop_5920_);
lean_dec(v_stop_5920_);
v_res_5924_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg(v_f_5917_, v_as_5918_, v_i_boxed_5922_, v_stop_boxed_5923_, v_b_5921_);
lean_dec_ref(v_as_5918_);
return v_res_5924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg(lean_object* v_s_5925_, lean_object* v_f_5926_, lean_object* v_b_5927_){
_start:
{
lean_object* v___x_5928_; lean_object* v___x_5929_; lean_object* v___x_5930_; uint8_t v___x_5931_; 
v___x_5928_ = l_Lean_Syntax_getArgs(v_s_5925_);
v___x_5929_ = lean_unsigned_to_nat(0u);
v___x_5930_ = lean_array_get_size(v___x_5928_);
v___x_5931_ = lean_nat_dec_lt(v___x_5929_, v___x_5930_);
if (v___x_5931_ == 0)
{
lean_dec_ref(v___x_5928_);
lean_dec(v_f_5926_);
return v_b_5927_;
}
else
{
size_t v___x_5932_; size_t v___x_5933_; lean_object* v___x_5934_; 
v___x_5932_ = ((size_t)0ULL);
v___x_5933_ = lean_usize_of_nat(v___x_5930_);
v___x_5934_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg(v_f_5926_, v___x_5928_, v___x_5932_, v___x_5933_, v_b_5927_);
lean_dec_ref(v___x_5928_);
return v___x_5934_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg___boxed(lean_object* v_s_5935_, lean_object* v_f_5936_, lean_object* v_b_5937_){
_start:
{
lean_object* v_res_5938_; 
v_res_5938_ = l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg(v_s_5935_, v_f_5936_, v_b_5937_);
lean_dec(v_s_5935_);
return v_res_5938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___redArg(lean_object* v_s_5939_, lean_object* v_f_5940_, lean_object* v_b_5941_){
_start:
{
lean_object* v___f_5942_; lean_object* v___x_5943_; 
v___f_5942_ = lean_alloc_closure((void*)(l_Lean_Syntax_foldArgs___redArg___lam__0), 3, 1);
lean_closure_set(v___f_5942_, 0, v_f_5940_);
v___x_5943_ = l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg(v_s_5939_, v___f_5942_, v_b_5941_);
return v___x_5943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___redArg___boxed(lean_object* v_s_5944_, lean_object* v_f_5945_, lean_object* v_b_5946_){
_start:
{
lean_object* v_res_5947_; 
v_res_5947_ = l_Lean_Syntax_foldArgs___redArg(v_s_5944_, v_f_5945_, v_b_5946_);
lean_dec(v_s_5944_);
return v_res_5947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs(lean_object* v_00_u03b2_5948_, lean_object* v_s_5949_, lean_object* v_f_5950_, lean_object* v_b_5951_){
_start:
{
lean_object* v___x_5952_; 
v___x_5952_ = l_Lean_Syntax_foldArgs___redArg(v_s_5949_, v_f_5950_, v_b_5951_);
return v___x_5952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___boxed(lean_object* v_00_u03b2_5953_, lean_object* v_s_5954_, lean_object* v_f_5955_, lean_object* v_b_5956_){
_start:
{
lean_object* v_res_5957_; 
v_res_5957_ = l_Lean_Syntax_foldArgs(v_00_u03b2_5953_, v_s_5954_, v_f_5955_, v_b_5956_);
lean_dec(v_s_5954_);
return v_res_5957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0(lean_object* v_00_u03b2_5958_, lean_object* v_s_5959_, lean_object* v_f_5960_, lean_object* v_b_5961_){
_start:
{
lean_object* v___x_5962_; 
v___x_5962_ = l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg(v_s_5959_, v_f_5960_, v_b_5961_);
return v___x_5962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___boxed(lean_object* v_00_u03b2_5963_, lean_object* v_s_5964_, lean_object* v_f_5965_, lean_object* v_b_5966_){
_start:
{
lean_object* v_res_5967_; 
v_res_5967_ = l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0(v_00_u03b2_5963_, v_s_5964_, v_f_5965_, v_b_5966_);
lean_dec(v_s_5964_);
return v_res_5967_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0(lean_object* v_00_u03b2_5968_, lean_object* v_f_5969_, lean_object* v_as_5970_, size_t v_i_5971_, size_t v_stop_5972_, lean_object* v_b_5973_){
_start:
{
lean_object* v___x_5974_; 
v___x_5974_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg(v_f_5969_, v_as_5970_, v_i_5971_, v_stop_5972_, v_b_5973_);
return v___x_5974_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5975_, lean_object* v_f_5976_, lean_object* v_as_5977_, lean_object* v_i_5978_, lean_object* v_stop_5979_, lean_object* v_b_5980_){
_start:
{
size_t v_i_boxed_5981_; size_t v_stop_boxed_5982_; lean_object* v_res_5983_; 
v_i_boxed_5981_ = lean_unbox_usize(v_i_5978_);
lean_dec(v_i_5978_);
v_stop_boxed_5982_ = lean_unbox_usize(v_stop_5979_);
lean_dec(v_stop_5979_);
v_res_5983_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0(v_00_u03b2_5975_, v_f_5976_, v_as_5977_, v_i_boxed_5981_, v_stop_boxed_5982_, v_b_5980_);
lean_dec_ref(v_as_5977_);
return v_res_5983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___redArg___lam__0(lean_object* v_f_5984_, lean_object* v_s_5985_, lean_object* v_x_5986_){
_start:
{
lean_object* v___x_5987_; 
v___x_5987_ = lean_apply_1(v_f_5984_, v_s_5985_);
return v___x_5987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___redArg(lean_object* v_inst_5988_, lean_object* v_s_5989_, lean_object* v_f_5990_){
_start:
{
lean_object* v___f_5991_; lean_object* v___x_5992_; lean_object* v___x_5993_; 
v___f_5991_ = lean_alloc_closure((void*)(l_Lean_Syntax_forArgsM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_5991_, 0, v_f_5990_);
v___x_5992_ = lean_box(0);
v___x_5993_ = l_Lean_Syntax_foldArgsM___redArg(v_inst_5988_, v_s_5989_, v___f_5991_, v___x_5992_);
return v___x_5993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___redArg___boxed(lean_object* v_inst_5994_, lean_object* v_s_5995_, lean_object* v_f_5996_){
_start:
{
lean_object* v_res_5997_; 
v_res_5997_ = l_Lean_Syntax_forArgsM___redArg(v_inst_5994_, v_s_5995_, v_f_5996_);
lean_dec(v_s_5995_);
return v_res_5997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM(lean_object* v_m_5998_, lean_object* v_inst_5999_, lean_object* v_s_6000_, lean_object* v_f_6001_){
_start:
{
lean_object* v___x_6002_; 
v___x_6002_ = l_Lean_Syntax_forArgsM___redArg(v_inst_5999_, v_s_6000_, v_f_6001_);
return v___x_6002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___boxed(lean_object* v_m_6003_, lean_object* v_inst_6004_, lean_object* v_s_6005_, lean_object* v_f_6006_){
_start:
{
lean_object* v_res_6007_; 
v_res_6007_ = l_Lean_Syntax_forArgsM(v_m_6003_, v_inst_6004_, v_s_6005_, v_f_6006_);
lean_dec(v_s_6005_);
return v_res_6007_;
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
