// Lean compiler output
// Module: Lake.Toml.ParserUtil
// Imports: public import Lean.PrettyPrinter.Formatter public import Lean.PrettyPrinter.Parenthesizer import Lean.Parser
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_instBEqError_beq___boxed(lean_object*, lean_object*);
uint8_t l_instBEqOption_beq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Parser_symbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Formatter_visitArgs_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkLinebreakBefore_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_sepByNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_instBEqError_beq(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_ParserState_next_x27___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_Lean_Parser_atomicFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_ParserContext_mkEmptySubstringAt(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkLit(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_pushSyntax(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_visitAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_formatterForKindUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
lean_object* l_Lean_Parser_ParserState_popSyntax(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withCache(lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Parenthesizer_visitArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkLinebreakBefore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_sepByNoAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_parenthesizerForKindUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Parser_symbol(lean_object*);
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_pushNone;
lean_object* l_Lean_Parser_checkLinebreakBefore(lean_object*);
lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepByNoAntiquot(lean_object*, lean_object*, uint8_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_Lean_PrettyPrinter_Formatter_rawCh_formatter(uint32_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_stackSize(lean_object*);
lean_object* l_Lean_Parser_ParserState_restore(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_getExprPos_x3f(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushToken___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_withMaybeTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_Traverser_left(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_throwBacktrack___redArg();
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1NoAntiquot(lean_object*, lean_object*, uint8_t);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_epsilonInfo;
lean_object* l_Lean_Parser_takeWhileFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_isBinDigit(uint32_t);
LEAN_EXPORT lean_object* l_Lake_Toml_isBinDigit___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_isOctDigit(uint32_t);
LEAN_EXPORT lean_object* l_Lake_Toml_isOctDigit___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_isHexDigit(uint32_t);
LEAN_EXPORT lean_object* l_Lake_Toml_isHexDigit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipFn___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipFn___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_instAndThenParserFn__lake___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instBEqError_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_instAndThenParserFn__lake___lam__0___closed__0 = (const lean_object*)&l_Lake_Toml_instAndThenParserFn__lake___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_instAndThenParserFn__lake___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_instAndThenParserFn__lake___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_instAndThenParserFn__lake___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_instAndThenParserFn__lake___closed__0 = (const lean_object*)&l_Lake_Toml_instAndThenParserFn__lake___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Toml_instAndThenParserFn__lake = (const lean_object*)&l_Lake_Toml_instAndThenParserFn__lake___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_usePosFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lake_Toml_optFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lake_Toml_optFn_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_optFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_repeatFn(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_mkUnexpectedCharError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "unexpected '"};
static const lean_object* l_Lake_Toml_mkUnexpectedCharError___closed__0 = (const lean_object*)&l_Lake_Toml_mkUnexpectedCharError___closed__0_value;
static const lean_string_object l_Lake_Toml_mkUnexpectedCharError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_Toml_mkUnexpectedCharError___closed__1 = (const lean_object*)&l_Lake_Toml_mkUnexpectedCharError___closed__1_value;
static const lean_string_object l_Lake_Toml_mkUnexpectedCharError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lake_Toml_mkUnexpectedCharError___closed__2 = (const lean_object*)&l_Lake_Toml_mkUnexpectedCharError___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_Toml_mkUnexpectedCharError(lean_object*, uint32_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Toml_mkUnexpectedCharError___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_satisfyFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_takeWhile1Fn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_digitFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_digitPairFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chFn(uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAuxFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAuxFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strFn(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_sepByChar1Fn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "unexpected separator '"};
static const lean_object* l_Lake_Toml_sepByChar1Fn___closed__0 = (const lean_object*)&l_Lake_Toml_sepByChar1Fn___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_sepByChar1Fn(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByChar1AuxFn(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByChar1AuxFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByChar1Fn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_pushAtom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_atomFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_atom___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_atom___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_atom___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_atom___lam__1___boxed(lean_object*);
static const lean_closure_object l_Lake_Toml_atom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_atom___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_atom___closed__0 = (const lean_object*)&l_Lake_Toml_atom___closed__0_value;
static const lean_closure_object l_Lake_Toml_atom___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_atom___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_atom___closed__1 = (const lean_object*)&l_Lake_Toml_atom___closed__1_value;
static const lean_ctor_object l_Lake_Toml_atom___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Toml_atom___closed__0_value),((lean_object*)&l_Lake_Toml_atom___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_Toml_atom___closed__2 = (const lean_object*)&l_Lake_Toml_atom___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_Toml_atom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_atom_formatter___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PrettyPrinter"};
static const lean_object* l_Lake_Toml_atom_formatter___redArg___closed__0 = (const lean_object*)&l_Lake_Toml_atom_formatter___redArg___closed__0_value;
static const lean_string_object l_Lake_Toml_atom_formatter___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "format"};
static const lean_object* l_Lake_Toml_atom_formatter___redArg___closed__1 = (const lean_object*)&l_Lake_Toml_atom_formatter___redArg___closed__1_value;
static const lean_string_object l_Lake_Toml_atom_formatter___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "backtrack"};
static const lean_object* l_Lake_Toml_atom_formatter___redArg___closed__2 = (const lean_object*)&l_Lake_Toml_atom_formatter___redArg___closed__2_value;
static const lean_ctor_object l_Lake_Toml_atom_formatter___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Toml_atom_formatter___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(201, 243, 163, 104, 244, 197, 219, 0)}};
static const lean_ctor_object l_Lake_Toml_atom_formatter___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_atom_formatter___redArg___closed__3_value_aux_0),((lean_object*)&l_Lake_Toml_atom_formatter___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(3, 24, 51, 215, 74, 174, 135, 90)}};
static const lean_ctor_object l_Lake_Toml_atom_formatter___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_atom_formatter___redArg___closed__3_value_aux_1),((lean_object*)&l_Lake_Toml_atom_formatter___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(81, 239, 216, 7, 227, 11, 189, 54)}};
static const lean_object* l_Lake_Toml_atom_formatter___redArg___closed__3 = (const lean_object*)&l_Lake_Toml_atom_formatter___redArg___closed__3_value;
static const lean_string_object l_Lake_Toml_atom_formatter___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lake_Toml_atom_formatter___redArg___closed__4 = (const lean_object*)&l_Lake_Toml_atom_formatter___redArg___closed__4_value;
static const lean_ctor_object l_Lake_Toml_atom_formatter___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Toml_atom_formatter___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lake_Toml_atom_formatter___redArg___closed__5 = (const lean_object*)&l_Lake_Toml_atom_formatter___redArg___closed__5_value;
static lean_once_cell_t l_Lake_Toml_atom_formatter___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom_formatter___redArg___closed__6;
static const lean_string_object l_Lake_Toml_atom_formatter___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "unexpected syntax '"};
static const lean_object* l_Lake_Toml_atom_formatter___redArg___closed__7 = (const lean_object*)&l_Lake_Toml_atom_formatter___redArg___closed__7_value;
static lean_once_cell_t l_Lake_Toml_atom_formatter___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom_formatter___redArg___closed__8;
static const lean_string_object l_Lake_Toml_atom_formatter___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "', expected atom"};
static const lean_object* l_Lake_Toml_atom_formatter___redArg___closed__9 = (const lean_object*)&l_Lake_Toml_atom_formatter___redArg___closed__9_value;
static lean_once_cell_t l_Lake_Toml_atom_formatter___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_atom_formatter___redArg___closed__10;
LEAN_EXPORT lean_object* l_Lake_Toml_atom_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_atom_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_atom_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_atom_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_formatter___redArg(uint32_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_formatter(uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_parenthesizer___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_parenthesizer___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_parenthesizer(uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_parenthesizer___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_parenthesizer___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_pushLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit_parenthesizer___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit_parenthesizer___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_lit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___closed__0 = (const lean_object*)&l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_formatter___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_formatter___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo___at___00Lake_Toml_extendTrailingFn_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo___at___00Lake_Toml_extendTrailingFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_extendTrailingFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_formatter___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_formatter___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailing(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNode(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeWithAntiquot_go(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeWithAntiquot_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Formatter_visitArgs_spec__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__0 = (const lean_object*)&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__0_value;
static const lean_string_object l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sepBy"};
static const lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__1 = (const lean_object*)&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__1_value;
static const lean_ctor_object l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(196, 56, 254, 223, 11, 70, 55, 147)}};
static const lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2 = (const lean_object*)&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2_value;
static const lean_string_object l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3 = (const lean_object*)&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3_value;
static const lean_closure_object l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3_value)} };
static const lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__4 = (const lean_object*)&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__4_value;
static lean_once_cell_t l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_formatter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_MonadTraverser_goLeft___at___00Lean_PrettyPrinter_Parenthesizer_visitArgs_spec__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__0 = (const lean_object*)&l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__0_value;
static const lean_closure_object l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3_value)} };
static const lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__1 = (const lean_object*)&l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__1_value;
static lean_once_cell_t l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_sepByLinebreak___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak___closed__0;
static const lean_string_object l_Lake_Toml_sepByLinebreak___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "line break"};
static const lean_object* l_Lake_Toml_sepByLinebreak___closed__1 = (const lean_object*)&l_Lake_Toml_sepByLinebreak___closed__1_value;
static lean_once_cell_t l_Lake_Toml_sepByLinebreak___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak___closed__2;
static lean_once_cell_t l_Lake_Toml_sepByLinebreak___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_sepByLinebreak___closed__3;
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_formatter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_parenthesizer(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuotFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_isBinDigit(uint32_t v_c_1_){
_start:
{
uint32_t v___x_2_; uint8_t v___x_3_; 
v___x_2_ = 48;
v___x_3_ = lean_uint32_dec_eq(v_c_1_, v___x_2_);
if (v___x_3_ == 0)
{
uint32_t v___x_4_; uint8_t v___x_5_; 
v___x_4_ = 49;
v___x_5_ = lean_uint32_dec_eq(v_c_1_, v___x_4_);
return v___x_5_;
}
else
{
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_isBinDigit___boxed(lean_object* v_c_6_){
_start:
{
uint32_t v_c_boxed_7_; uint8_t v_res_8_; lean_object* v_r_9_; 
v_c_boxed_7_ = lean_unbox_uint32(v_c_6_);
lean_dec(v_c_6_);
v_res_8_ = l_Lake_Toml_isBinDigit(v_c_boxed_7_);
v_r_9_ = lean_box(v_res_8_);
return v_r_9_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_isOctDigit(uint32_t v_c_10_){
_start:
{
uint32_t v___x_11_; uint8_t v___x_12_; 
v___x_11_ = 48;
v___x_12_ = lean_uint32_dec_le(v___x_11_, v_c_10_);
if (v___x_12_ == 0)
{
return v___x_12_;
}
else
{
uint32_t v___x_13_; uint8_t v___x_14_; 
v___x_13_ = 55;
v___x_14_ = lean_uint32_dec_le(v_c_10_, v___x_13_);
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_isOctDigit___boxed(lean_object* v_c_15_){
_start:
{
uint32_t v_c_boxed_16_; uint8_t v_res_17_; lean_object* v_r_18_; 
v_c_boxed_16_ = lean_unbox_uint32(v_c_15_);
lean_dec(v_c_15_);
v_res_17_ = l_Lake_Toml_isOctDigit(v_c_boxed_16_);
v_r_18_ = lean_box(v_res_17_);
return v_r_18_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_isHexDigit(uint32_t v_c_19_){
_start:
{
uint32_t v___x_30_; uint8_t v___x_31_; 
v___x_30_ = 48;
v___x_31_ = lean_uint32_dec_le(v___x_30_, v_c_19_);
if (v___x_31_ == 0)
{
goto v___jp_25_;
}
else
{
uint32_t v___x_32_; uint8_t v___x_33_; 
v___x_32_ = 57;
v___x_33_ = lean_uint32_dec_le(v_c_19_, v___x_32_);
if (v___x_33_ == 0)
{
goto v___jp_25_;
}
else
{
return v___x_33_;
}
}
v___jp_20_:
{
uint32_t v___x_21_; uint8_t v___x_22_; 
v___x_21_ = 65;
v___x_22_ = lean_uint32_dec_le(v___x_21_, v_c_19_);
if (v___x_22_ == 0)
{
return v___x_22_;
}
else
{
uint32_t v___x_23_; uint8_t v___x_24_; 
v___x_23_ = 70;
v___x_24_ = lean_uint32_dec_le(v_c_19_, v___x_23_);
return v___x_24_;
}
}
v___jp_25_:
{
uint32_t v___x_26_; uint8_t v___x_27_; 
v___x_26_ = 97;
v___x_27_ = lean_uint32_dec_le(v___x_26_, v_c_19_);
if (v___x_27_ == 0)
{
goto v___jp_20_;
}
else
{
uint32_t v___x_28_; uint8_t v___x_29_; 
v___x_28_ = 102;
v___x_29_ = lean_uint32_dec_le(v_c_19_, v___x_28_);
if (v___x_29_ == 0)
{
goto v___jp_20_;
}
else
{
return v___x_29_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_isHexDigit___boxed(lean_object* v_c_34_){
_start:
{
uint32_t v_c_boxed_35_; uint8_t v_res_36_; lean_object* v_r_37_; 
v_c_boxed_35_ = lean_unbox_uint32(v_c_34_);
lean_dec(v_c_34_);
v_res_36_ = l_Lake_Toml_isHexDigit(v_c_boxed_35_);
v_r_37_ = lean_box(v_res_36_);
return v_r_37_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipFn___redArg(lean_object* v_s_38_){
_start:
{
lean_inc_ref(v_s_38_);
return v_s_38_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipFn___redArg___boxed(lean_object* v_s_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lake_Toml_skipFn___redArg(v_s_39_);
lean_dec_ref(v_s_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipFn(lean_object* v_x_41_, lean_object* v_s_42_){
_start:
{
lean_inc_ref(v_s_42_);
return v_s_42_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipFn___boxed(lean_object* v_x_43_, lean_object* v_s_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lake_Toml_skipFn(v_x_43_, v_s_44_);
lean_dec_ref(v_s_44_);
lean_dec_ref(v_x_43_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_instAndThenParserFn__lake___lam__0(lean_object* v_p_47_, lean_object* v_q_48_, lean_object* v_c_49_, lean_object* v_s_50_){
_start:
{
lean_object* v_s_51_; lean_object* v_errorMsg_52_; lean_object* v___x_53_; lean_object* v___x_54_; uint8_t v___x_55_; 
lean_inc_ref(v_c_49_);
v_s_51_ = lean_apply_2(v_p_47_, v_c_49_, v_s_50_);
v_errorMsg_52_ = lean_ctor_get(v_s_51_, 4);
lean_inc(v_errorMsg_52_);
v___x_53_ = ((lean_object*)(l_Lake_Toml_instAndThenParserFn__lake___lam__0___closed__0));
v___x_54_ = lean_box(0);
v___x_55_ = l_instBEqOption_beq___redArg(v___x_53_, v_errorMsg_52_, v___x_54_);
if (v___x_55_ == 0)
{
lean_dec_ref(v_c_49_);
lean_dec_ref(v_q_48_);
return v_s_51_;
}
else
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_box(0);
v___x_57_ = lean_apply_3(v_q_48_, v___x_56_, v_c_49_, v_s_51_);
return v___x_57_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_usePosFn(lean_object* v_f_60_, lean_object* v_c_61_, lean_object* v_s_62_){
_start:
{
lean_object* v_pos_63_; lean_object* v___x_64_; 
v_pos_63_ = lean_ctor_get(v_s_62_, 2);
lean_inc(v_pos_63_);
v___x_64_ = lean_apply_3(v_f_60_, v_pos_63_, v_c_61_, v_s_62_);
return v___x_64_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lake_Toml_optFn_spec__0(lean_object* v_x_65_, lean_object* v_x_66_){
_start:
{
if (lean_obj_tag(v_x_65_) == 0)
{
if (lean_obj_tag(v_x_66_) == 0)
{
uint8_t v___x_67_; 
v___x_67_ = 1;
return v___x_67_;
}
else
{
uint8_t v___x_68_; 
v___x_68_ = 0;
return v___x_68_;
}
}
else
{
if (lean_obj_tag(v_x_66_) == 0)
{
uint8_t v___x_69_; 
v___x_69_ = 0;
return v___x_69_;
}
else
{
lean_object* v_val_70_; lean_object* v_val_71_; uint8_t v___x_72_; 
v_val_70_ = lean_ctor_get(v_x_65_, 0);
v_val_71_ = lean_ctor_get(v_x_66_, 0);
v___x_72_ = l_Lean_Parser_instBEqError_beq(v_val_70_, v_val_71_);
return v___x_72_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lake_Toml_optFn_spec__0___boxed(lean_object* v_x_73_, lean_object* v_x_74_){
_start:
{
uint8_t v_res_75_; lean_object* v_r_76_; 
v_res_75_ = l_instBEqOption_beq___at___00Lake_Toml_optFn_spec__0(v_x_73_, v_x_74_);
lean_dec(v_x_74_);
lean_dec(v_x_73_);
v_r_76_ = lean_box(v_res_75_);
return v_r_76_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_optFn(lean_object* v_p_77_, lean_object* v_c_78_, lean_object* v_s_79_){
_start:
{
lean_object* v_pos_80_; lean_object* v_iniSz_81_; lean_object* v_s_82_; lean_object* v_pos_83_; lean_object* v_errorMsg_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v_pos_80_ = lean_ctor_get(v_s_79_, 2);
lean_inc(v_pos_80_);
v_iniSz_81_ = l_Lean_Parser_ParserState_stackSize(v_s_79_);
v_s_82_ = lean_apply_2(v_p_77_, v_c_78_, v_s_79_);
v_pos_83_ = lean_ctor_get(v_s_82_, 2);
lean_inc(v_pos_83_);
v_errorMsg_84_ = lean_ctor_get(v_s_82_, 4);
lean_inc(v_errorMsg_84_);
v___x_85_ = lean_box(0);
v___x_86_ = l_instBEqOption_beq___at___00Lake_Toml_optFn_spec__0(v_errorMsg_84_, v___x_85_);
lean_dec(v_errorMsg_84_);
if (v___x_86_ == 0)
{
uint8_t v_decide_87_; 
v_decide_87_ = lean_nat_dec_eq(v_pos_83_, v_pos_80_);
lean_dec(v_pos_83_);
if (v_decide_87_ == 0)
{
lean_dec(v_iniSz_81_);
lean_dec(v_pos_80_);
return v_s_82_;
}
else
{
lean_object* v___x_88_; 
v___x_88_ = l_Lean_Parser_ParserState_restore(v_s_82_, v_iniSz_81_, v_pos_80_);
lean_dec(v_iniSz_81_);
return v___x_88_;
}
}
else
{
lean_dec(v_pos_83_);
lean_dec(v_iniSz_81_);
lean_dec(v_pos_80_);
return v_s_82_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop(lean_object* v_p_89_, lean_object* v_c_90_, lean_object* v_x_91_, lean_object* v_x_92_){
_start:
{
lean_object* v_zero_93_; uint8_t v_isZero_94_; 
v_zero_93_ = lean_unsigned_to_nat(0u);
v_isZero_94_ = lean_nat_dec_eq(v_x_91_, v_zero_93_);
if (v_isZero_94_ == 1)
{
lean_dec(v_x_91_);
lean_dec_ref(v_c_90_);
lean_dec_ref(v_p_89_);
return v_x_92_;
}
else
{
lean_object* v_s_95_; lean_object* v_errorMsg_96_; lean_object* v___x_97_; lean_object* v___x_98_; uint8_t v___x_99_; 
lean_inc_ref(v_p_89_);
lean_inc_ref(v_c_90_);
v_s_95_ = lean_apply_2(v_p_89_, v_c_90_, v_x_92_);
v_errorMsg_96_ = lean_ctor_get(v_s_95_, 4);
lean_inc(v_errorMsg_96_);
v___x_97_ = ((lean_object*)(l_Lake_Toml_instAndThenParserFn__lake___lam__0___closed__0));
v___x_98_ = lean_box(0);
v___x_99_ = l_instBEqOption_beq___redArg(v___x_97_, v_errorMsg_96_, v___x_98_);
if (v___x_99_ == 0)
{
lean_dec(v_x_91_);
lean_dec_ref(v_c_90_);
lean_dec_ref(v_p_89_);
return v_s_95_;
}
else
{
lean_object* v_one_100_; lean_object* v_n_101_; 
v_one_100_ = lean_unsigned_to_nat(1u);
v_n_101_ = lean_nat_sub(v_x_91_, v_one_100_);
lean_dec(v_x_91_);
v_x_91_ = v_n_101_;
v_x_92_ = v_s_95_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_repeatFn(lean_object* v_n_103_, lean_object* v_p_104_, lean_object* v_c_105_, lean_object* v_s_106_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop(v_p_104_, v_c_105_, v_n_103_, v_s_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_mkUnexpectedCharError(lean_object* v_s_111_, uint32_t v_c_112_, lean_object* v_expected_113_, uint8_t v_pushMissing_114_){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_115_ = ((lean_object*)(l_Lake_Toml_mkUnexpectedCharError___closed__0));
v___x_116_ = ((lean_object*)(l_Lake_Toml_mkUnexpectedCharError___closed__1));
v___x_117_ = lean_string_push(v___x_116_, v_c_112_);
v___x_118_ = lean_string_append(v___x_115_, v___x_117_);
lean_dec_ref(v___x_117_);
v___x_119_ = ((lean_object*)(l_Lake_Toml_mkUnexpectedCharError___closed__2));
v___x_120_ = lean_string_append(v___x_118_, v___x_119_);
v___x_121_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_111_, v___x_120_, v_expected_113_, v_pushMissing_114_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_mkUnexpectedCharError___boxed(lean_object* v_s_122_, lean_object* v_c_123_, lean_object* v_expected_124_, lean_object* v_pushMissing_125_){
_start:
{
uint32_t v_c_boxed_126_; uint8_t v_pushMissing_boxed_127_; lean_object* v_res_128_; 
v_c_boxed_126_ = lean_unbox_uint32(v_c_123_);
lean_dec(v_c_123_);
v_pushMissing_boxed_127_ = lean_unbox(v_pushMissing_125_);
v_res_128_ = l_Lake_Toml_mkUnexpectedCharError(v_s_122_, v_c_boxed_126_, v_expected_124_, v_pushMissing_boxed_127_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_satisfyFn(lean_object* v_p_129_, lean_object* v_expected_130_, lean_object* v_c_131_, lean_object* v_s_132_){
_start:
{
lean_object* v_pos_133_; lean_object* v_toInputContext_134_; uint8_t v___x_135_; 
v_pos_133_ = lean_ctor_get(v_s_132_, 2);
v_toInputContext_134_ = lean_ctor_get(v_c_131_, 0);
lean_inc(v_pos_133_);
lean_inc_ref(v_toInputContext_134_);
v___x_135_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_134_, v_pos_133_);
if (v___x_135_ == 0)
{
lean_object* v_inputString_136_; uint32_t v_curr_137_; lean_object* v___x_138_; lean_object* v___x_139_; uint8_t v___x_140_; 
v_inputString_136_ = lean_ctor_get(v_toInputContext_134_, 0);
v_curr_137_ = lean_string_utf8_get_fast(v_inputString_136_, v_pos_133_);
v___x_138_ = lean_box_uint32(v_curr_137_);
v___x_139_ = lean_apply_1(v_p_129_, v___x_138_);
v___x_140_ = lean_unbox(v___x_139_);
if (v___x_140_ == 0)
{
uint8_t v___x_141_; lean_object* v___x_142_; 
lean_dec_ref(v_c_131_);
v___x_141_ = 1;
v___x_142_ = l_Lake_Toml_mkUnexpectedCharError(v_s_132_, v_curr_137_, v_expected_130_, v___x_141_);
return v___x_142_;
}
else
{
lean_object* v___x_143_; 
lean_inc(v_pos_133_);
lean_dec(v_expected_130_);
v___x_143_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_132_, v_c_131_, v_pos_133_);
lean_dec(v_pos_133_);
lean_dec_ref(v_c_131_);
return v___x_143_;
}
}
else
{
lean_object* v___x_144_; 
lean_dec_ref(v_c_131_);
lean_dec_ref(v_p_129_);
v___x_144_ = l_Lean_Parser_ParserState_mkEOIError(v_s_132_, v_expected_130_);
return v___x_144_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_takeWhile1Fn(lean_object* v_p_145_, lean_object* v_expected_146_, lean_object* v_a_147_, lean_object* v_a_148_){
_start:
{
lean_object* v___y_150_; lean_object* v_pos_155_; lean_object* v_toInputContext_156_; uint8_t v___x_157_; 
v_pos_155_ = lean_ctor_get(v_a_148_, 2);
v_toInputContext_156_ = lean_ctor_get(v_a_147_, 0);
lean_inc(v_pos_155_);
lean_inc_ref(v_toInputContext_156_);
v___x_157_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_156_, v_pos_155_);
if (v___x_157_ == 0)
{
lean_object* v_inputString_158_; uint32_t v_curr_159_; lean_object* v___x_160_; lean_object* v___x_161_; uint8_t v___x_162_; 
v_inputString_158_ = lean_ctor_get(v_toInputContext_156_, 0);
v_curr_159_ = lean_string_utf8_get_fast(v_inputString_158_, v_pos_155_);
v___x_160_ = lean_box_uint32(v_curr_159_);
lean_inc_ref(v_p_145_);
v___x_161_ = lean_apply_1(v_p_145_, v___x_160_);
v___x_162_ = lean_unbox(v___x_161_);
if (v___x_162_ == 0)
{
uint8_t v___x_163_; lean_object* v___x_164_; 
v___x_163_ = 1;
v___x_164_ = l_Lake_Toml_mkUnexpectedCharError(v_a_148_, v_curr_159_, v_expected_146_, v___x_163_);
v___y_150_ = v___x_164_;
goto v___jp_149_;
}
else
{
lean_object* v___x_165_; 
lean_inc(v_pos_155_);
lean_dec(v_expected_146_);
v___x_165_ = l_Lean_Parser_ParserState_next_x27___redArg(v_a_148_, v_a_147_, v_pos_155_);
lean_dec(v_pos_155_);
v___y_150_ = v___x_165_;
goto v___jp_149_;
}
}
else
{
lean_object* v___x_166_; 
v___x_166_ = l_Lean_Parser_ParserState_mkEOIError(v_a_148_, v_expected_146_);
v___y_150_ = v___x_166_;
goto v___jp_149_;
}
v___jp_149_:
{
lean_object* v_errorMsg_151_; lean_object* v___x_152_; uint8_t v___x_153_; 
v_errorMsg_151_ = lean_ctor_get(v___y_150_, 4);
v___x_152_ = lean_box(0);
v___x_153_ = l_instBEqOption_beq___at___00Lake_Toml_optFn_spec__0(v_errorMsg_151_, v___x_152_);
if (v___x_153_ == 0)
{
lean_dec_ref(v_a_147_);
lean_dec_ref(v_p_145_);
return v___y_150_;
}
else
{
lean_object* v___x_154_; 
v___x_154_ = l_Lean_Parser_takeWhileFn(v_p_145_, v_a_147_, v___y_150_);
return v___x_154_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_digitFn(lean_object* v_expected_167_, lean_object* v_a_168_, lean_object* v_a_169_){
_start:
{
lean_object* v_pos_170_; lean_object* v_toInputContext_171_; uint8_t v___x_172_; 
v_pos_170_ = lean_ctor_get(v_a_169_, 2);
v_toInputContext_171_ = lean_ctor_get(v_a_168_, 0);
lean_inc(v_pos_170_);
lean_inc_ref(v_toInputContext_171_);
v___x_172_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_171_, v_pos_170_);
if (v___x_172_ == 0)
{
lean_object* v_inputString_173_; uint32_t v_curr_174_; uint32_t v___x_178_; uint8_t v___x_179_; 
v_inputString_173_ = lean_ctor_get(v_toInputContext_171_, 0);
v_curr_174_ = lean_string_utf8_get_fast(v_inputString_173_, v_pos_170_);
v___x_178_ = 48;
v___x_179_ = lean_uint32_dec_le(v___x_178_, v_curr_174_);
if (v___x_179_ == 0)
{
lean_dec_ref(v_a_168_);
goto v___jp_175_;
}
else
{
uint32_t v___x_180_; uint8_t v___x_181_; 
v___x_180_ = 57;
v___x_181_ = lean_uint32_dec_le(v_curr_174_, v___x_180_);
if (v___x_181_ == 0)
{
lean_dec_ref(v_a_168_);
goto v___jp_175_;
}
else
{
lean_object* v___x_182_; 
lean_inc(v_pos_170_);
lean_dec(v_expected_167_);
v___x_182_ = l_Lean_Parser_ParserState_next_x27___redArg(v_a_169_, v_a_168_, v_pos_170_);
lean_dec(v_pos_170_);
lean_dec_ref(v_a_168_);
return v___x_182_;
}
}
v___jp_175_:
{
uint8_t v___x_176_; lean_object* v___x_177_; 
v___x_176_ = 1;
v___x_177_ = l_Lake_Toml_mkUnexpectedCharError(v_a_169_, v_curr_174_, v_expected_167_, v___x_176_);
return v___x_177_;
}
}
else
{
lean_object* v___x_183_; 
lean_dec_ref(v_a_168_);
v___x_183_ = l_Lean_Parser_ParserState_mkEOIError(v_a_169_, v_expected_167_);
return v___x_183_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_digitPairFn(lean_object* v_expected_184_, lean_object* v_a_185_, lean_object* v_a_186_){
_start:
{
lean_object* v_s_187_; lean_object* v_errorMsg_188_; lean_object* v___x_189_; uint8_t v___x_190_; 
lean_inc_ref(v_a_185_);
lean_inc(v_expected_184_);
v_s_187_ = l_Lake_Toml_digitFn(v_expected_184_, v_a_185_, v_a_186_);
v_errorMsg_188_ = lean_ctor_get(v_s_187_, 4);
v___x_189_ = lean_box(0);
v___x_190_ = l_instBEqOption_beq___at___00Lake_Toml_optFn_spec__0(v_errorMsg_188_, v___x_189_);
if (v___x_190_ == 0)
{
lean_dec_ref(v_a_185_);
lean_dec(v_expected_184_);
return v_s_187_;
}
else
{
lean_object* v___x_191_; 
v___x_191_ = l_Lake_Toml_digitFn(v_expected_184_, v_a_185_, v_s_187_);
return v___x_191_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chFn(uint32_t v_c_192_, lean_object* v_expected_193_, lean_object* v_a_194_, lean_object* v_a_195_){
_start:
{
lean_object* v_pos_196_; lean_object* v_toInputContext_197_; uint8_t v___x_198_; 
v_pos_196_ = lean_ctor_get(v_a_195_, 2);
v_toInputContext_197_ = lean_ctor_get(v_a_194_, 0);
lean_inc(v_pos_196_);
lean_inc_ref(v_toInputContext_197_);
v___x_198_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_197_, v_pos_196_);
if (v___x_198_ == 0)
{
lean_object* v_inputString_199_; uint32_t v_curr_200_; uint8_t v___x_201_; 
v_inputString_199_ = lean_ctor_get(v_toInputContext_197_, 0);
v_curr_200_ = lean_string_utf8_get_fast(v_inputString_199_, v_pos_196_);
v___x_201_ = lean_uint32_dec_eq(v_curr_200_, v_c_192_);
if (v___x_201_ == 0)
{
uint8_t v___x_202_; lean_object* v___x_203_; 
lean_dec_ref(v_a_194_);
v___x_202_ = 1;
v___x_203_ = l_Lake_Toml_mkUnexpectedCharError(v_a_195_, v_curr_200_, v_expected_193_, v___x_202_);
return v___x_203_;
}
else
{
lean_object* v___x_204_; 
lean_inc(v_pos_196_);
lean_dec(v_expected_193_);
v___x_204_ = l_Lean_Parser_ParserState_next_x27___redArg(v_a_195_, v_a_194_, v_pos_196_);
lean_dec(v_pos_196_);
lean_dec_ref(v_a_194_);
return v___x_204_;
}
}
else
{
lean_object* v___x_205_; 
lean_dec_ref(v_a_194_);
v___x_205_ = l_Lean_Parser_ParserState_mkEOIError(v_a_195_, v_expected_193_);
return v___x_205_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chFn___boxed(lean_object* v_c_206_, lean_object* v_expected_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
uint32_t v_c_boxed_210_; lean_object* v_res_211_; 
v_c_boxed_210_ = lean_unbox_uint32(v_c_206_);
lean_dec(v_c_206_);
v_res_211_ = l_Lake_Toml_chFn(v_c_boxed_210_, v_expected_207_, v_a_208_, v_a_209_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAuxFn(lean_object* v_str_212_, lean_object* v_expected_213_, lean_object* v_strPos_214_, lean_object* v_c_215_, lean_object* v_s_216_){
_start:
{
uint8_t v___x_217_; 
v___x_217_ = lean_string_utf8_at_end(v_str_212_, v_strPos_214_);
if (v___x_217_ == 0)
{
uint32_t v___x_218_; lean_object* v_s_219_; lean_object* v_errorMsg_220_; lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_218_ = lean_string_utf8_get_fast(v_str_212_, v_strPos_214_);
lean_inc_ref(v_c_215_);
lean_inc(v_expected_213_);
v_s_219_ = l_Lake_Toml_chFn(v___x_218_, v_expected_213_, v_c_215_, v_s_216_);
v_errorMsg_220_ = lean_ctor_get(v_s_219_, 4);
v___x_221_ = lean_box(0);
v___x_222_ = l_instBEqOption_beq___at___00Lake_Toml_optFn_spec__0(v_errorMsg_220_, v___x_221_);
if (v___x_222_ == 0)
{
lean_dec_ref(v_c_215_);
lean_dec(v_strPos_214_);
lean_dec(v_expected_213_);
return v_s_219_;
}
else
{
lean_object* v___x_223_; 
v___x_223_ = lean_string_utf8_next_fast(v_str_212_, v_strPos_214_);
lean_dec(v_strPos_214_);
v_strPos_214_ = v___x_223_;
v_s_216_ = v_s_219_;
goto _start;
}
}
else
{
lean_dec_ref(v_c_215_);
lean_dec(v_strPos_214_);
lean_dec(v_expected_213_);
return v_s_216_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAuxFn___boxed(lean_object* v_str_225_, lean_object* v_expected_226_, lean_object* v_strPos_227_, lean_object* v_c_228_, lean_object* v_s_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lake_Toml_strAuxFn(v_str_225_, v_expected_226_, v_strPos_227_, v_c_228_, v_s_229_);
lean_dec_ref(v_str_225_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strFn(lean_object* v_str_231_, lean_object* v_expected_232_, lean_object* v_a_233_, lean_object* v_a_234_){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_235_ = lean_unsigned_to_nat(0u);
v___x_236_ = lean_alloc_closure((void*)(l_Lake_Toml_strAuxFn___boxed), 5, 3);
lean_closure_set(v___x_236_, 0, v_str_231_);
lean_closure_set(v___x_236_, 1, v_expected_232_);
lean_closure_set(v___x_236_, 2, v___x_235_);
v___x_237_ = l_Lean_Parser_atomicFn(v___x_236_, v_a_233_, v_a_234_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByChar1Fn(lean_object* v_p_239_, uint32_t v_sep_240_, lean_object* v_expected_241_, lean_object* v_c_242_, lean_object* v_s_243_){
_start:
{
lean_object* v_pos_244_; lean_object* v_toInputContext_245_; uint8_t v___x_246_; 
v_pos_244_ = lean_ctor_get(v_s_243_, 2);
v_toInputContext_245_ = lean_ctor_get(v_c_242_, 0);
lean_inc(v_pos_244_);
lean_inc_ref(v_toInputContext_245_);
v___x_246_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_245_, v_pos_244_);
if (v___x_246_ == 0)
{
lean_object* v_inputString_247_; uint32_t v_curr_248_; lean_object* v_s_249_; lean_object* v___x_250_; lean_object* v___x_251_; uint8_t v___x_252_; 
lean_inc(v_pos_244_);
v_inputString_247_ = lean_ctor_get(v_toInputContext_245_, 0);
v_curr_248_ = lean_string_utf8_get_fast(v_inputString_247_, v_pos_244_);
v_s_249_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_243_, v_c_242_, v_pos_244_);
lean_dec(v_pos_244_);
v___x_250_ = lean_box_uint32(v_curr_248_);
lean_inc_ref(v_p_239_);
v___x_251_ = lean_apply_1(v_p_239_, v___x_250_);
v___x_252_ = lean_unbox(v___x_251_);
if (v___x_252_ == 0)
{
uint8_t v___x_253_; uint8_t v___x_254_; 
lean_dec_ref(v_c_242_);
lean_dec_ref(v_p_239_);
v___x_253_ = 1;
v___x_254_ = lean_uint32_dec_eq(v_curr_248_, v_sep_240_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; 
v___x_255_ = l_Lake_Toml_mkUnexpectedCharError(v_s_249_, v_curr_248_, v_expected_241_, v___x_253_);
return v___x_255_;
}
else
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_256_ = ((lean_object*)(l_Lake_Toml_sepByChar1Fn___closed__0));
v___x_257_ = ((lean_object*)(l_Lake_Toml_mkUnexpectedCharError___closed__1));
v___x_258_ = lean_string_push(v___x_257_, v_curr_248_);
v___x_259_ = lean_string_append(v___x_256_, v___x_258_);
lean_dec_ref(v___x_258_);
v___x_260_ = ((lean_object*)(l_Lake_Toml_mkUnexpectedCharError___closed__2));
v___x_261_ = lean_string_append(v___x_259_, v___x_260_);
v___x_262_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_249_, v___x_261_, v_expected_241_, v___x_253_);
return v___x_262_;
}
}
else
{
lean_object* v___x_263_; 
v___x_263_ = l_Lake_Toml_sepByChar1AuxFn(v_p_239_, v_sep_240_, v_expected_241_, v_c_242_, v_s_249_);
return v___x_263_;
}
}
else
{
lean_dec_ref(v_c_242_);
lean_dec(v_expected_241_);
lean_dec_ref(v_p_239_);
return v_s_243_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByChar1AuxFn(lean_object* v_p_264_, uint32_t v_sep_265_, lean_object* v_expected_266_, lean_object* v_c_267_, lean_object* v_s_268_){
_start:
{
lean_object* v_pos_269_; lean_object* v_toInputContext_270_; uint8_t v___x_271_; 
v_pos_269_ = lean_ctor_get(v_s_268_, 2);
v_toInputContext_270_ = lean_ctor_get(v_c_267_, 0);
lean_inc(v_pos_269_);
lean_inc_ref(v_toInputContext_270_);
v___x_271_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_270_, v_pos_269_);
if (v___x_271_ == 0)
{
lean_object* v_inputString_272_; uint32_t v_curr_273_; lean_object* v___x_274_; lean_object* v___x_275_; uint8_t v___x_276_; 
v_inputString_272_ = lean_ctor_get(v_toInputContext_270_, 0);
v_curr_273_ = lean_string_utf8_get_fast(v_inputString_272_, v_pos_269_);
v___x_274_ = lean_box_uint32(v_curr_273_);
lean_inc_ref(v_p_264_);
v___x_275_ = lean_apply_1(v_p_264_, v___x_274_);
v___x_276_ = lean_unbox(v___x_275_);
if (v___x_276_ == 0)
{
uint8_t v___x_277_; 
v___x_277_ = lean_uint32_dec_eq(v_curr_273_, v_sep_265_);
if (v___x_277_ == 0)
{
lean_dec_ref(v_c_267_);
lean_dec(v_expected_266_);
lean_dec_ref(v_p_264_);
return v_s_268_;
}
else
{
lean_object* v___x_278_; lean_object* v___x_279_; 
lean_inc(v_pos_269_);
v___x_278_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_268_, v_c_267_, v_pos_269_);
lean_dec(v_pos_269_);
v___x_279_ = l_Lake_Toml_sepByChar1Fn(v_p_264_, v_sep_265_, v_expected_266_, v_c_267_, v___x_278_);
return v___x_279_;
}
}
else
{
lean_object* v___x_280_; 
lean_inc(v_pos_269_);
v___x_280_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_268_, v_c_267_, v_pos_269_);
lean_dec(v_pos_269_);
v_s_268_ = v___x_280_;
goto _start;
}
}
else
{
lean_dec_ref(v_c_267_);
lean_dec(v_expected_266_);
lean_dec_ref(v_p_264_);
return v_s_268_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByChar1AuxFn___boxed(lean_object* v_p_282_, lean_object* v_sep_283_, lean_object* v_expected_284_, lean_object* v_c_285_, lean_object* v_s_286_){
_start:
{
uint32_t v_sep_boxed_287_; lean_object* v_res_288_; 
v_sep_boxed_287_ = lean_unbox_uint32(v_sep_283_);
lean_dec(v_sep_283_);
v_res_288_ = l_Lake_Toml_sepByChar1AuxFn(v_p_282_, v_sep_boxed_287_, v_expected_284_, v_c_285_, v_s_286_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByChar1Fn___boxed(lean_object* v_p_289_, lean_object* v_sep_290_, lean_object* v_expected_291_, lean_object* v_c_292_, lean_object* v_s_293_){
_start:
{
uint32_t v_sep_boxed_294_; lean_object* v_res_295_; 
v_sep_boxed_294_ = lean_unbox_uint32(v_sep_290_);
lean_dec(v_sep_290_);
v_res_295_ = l_Lake_Toml_sepByChar1Fn(v_p_289_, v_sep_boxed_294_, v_expected_291_, v_c_292_, v_s_293_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_pushAtom(lean_object* v_startPos_296_, lean_object* v_trailingFn_297_, lean_object* v_c_298_, lean_object* v_s_299_){
_start:
{
lean_object* v_toInputContext_300_; lean_object* v_pos_301_; lean_object* v_inputString_302_; lean_object* v_endPos_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_323_; 
v_toInputContext_300_ = lean_ctor_get(v_c_298_, 0);
lean_inc_ref(v_toInputContext_300_);
v_pos_301_ = lean_ctor_get(v_s_299_, 2);
lean_inc(v_pos_301_);
v_inputString_302_ = lean_ctor_get(v_toInputContext_300_, 0);
v_endPos_303_ = lean_ctor_get(v_toInputContext_300_, 3);
v_isSharedCheck_323_ = !lean_is_exclusive(v_toInputContext_300_);
if (v_isSharedCheck_323_ == 0)
{
lean_object* v_unused_324_; lean_object* v_unused_325_; 
v_unused_324_ = lean_ctor_get(v_toInputContext_300_, 2);
lean_dec(v_unused_324_);
v_unused_325_ = lean_ctor_get(v_toInputContext_300_, 1);
lean_dec(v_unused_325_);
v___x_305_ = v_toInputContext_300_;
v_isShared_306_ = v_isSharedCheck_323_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_endPos_303_);
lean_inc(v_inputString_302_);
lean_dec(v_toInputContext_300_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_323_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v_leading_307_; lean_object* v_s_308_; lean_object* v_pos_309_; lean_object* v_val_310_; lean_object* v___y_312_; uint8_t v___x_320_; 
lean_inc(v_startPos_296_);
v_leading_307_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_298_, v_startPos_296_);
v_s_308_ = lean_apply_2(v_trailingFn_297_, v_c_298_, v_s_299_);
v_pos_309_ = lean_ctor_get(v_s_308_, 2);
lean_inc(v_pos_309_);
v_val_310_ = lean_string_utf8_extract(v_inputString_302_, v_startPos_296_, v_pos_301_);
v___x_320_ = lean_nat_dec_le(v_pos_309_, v_endPos_303_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; 
lean_dec(v_pos_309_);
v___x_321_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_321_, 0, v_inputString_302_);
lean_ctor_set(v___x_321_, 1, v_pos_301_);
lean_ctor_set(v___x_321_, 2, v_endPos_303_);
v___y_312_ = v___x_321_;
goto v___jp_311_;
}
else
{
lean_object* v___x_322_; 
lean_dec(v_endPos_303_);
v___x_322_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_322_, 0, v_inputString_302_);
lean_ctor_set(v___x_322_, 1, v_pos_301_);
lean_ctor_set(v___x_322_, 2, v_pos_309_);
v___y_312_ = v___x_322_;
goto v___jp_311_;
}
v___jp_311_:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_316_; 
v___x_313_ = lean_string_utf8_byte_size(v_val_310_);
v___x_314_ = lean_nat_add(v_startPos_296_, v___x_313_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 3, v___x_314_);
lean_ctor_set(v___x_305_, 2, v___y_312_);
lean_ctor_set(v___x_305_, 1, v_startPos_296_);
lean_ctor_set(v___x_305_, 0, v_leading_307_);
v___x_316_ = v___x_305_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_leading_307_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v_startPos_296_);
lean_ctor_set(v_reuseFailAlloc_319_, 2, v___y_312_);
lean_ctor_set(v_reuseFailAlloc_319_, 3, v___x_314_);
v___x_316_ = v_reuseFailAlloc_319_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
lean_object* v_atom_317_; lean_object* v___x_318_; 
v_atom_317_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_317_, 0, v___x_316_);
lean_ctor_set(v_atom_317_, 1, v_val_310_);
v___x_318_ = l_Lean_Parser_ParserState_pushSyntax(v_s_308_, v_atom_317_);
return v___x_318_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atomFn(lean_object* v_p_326_, lean_object* v_trailingFn_327_, lean_object* v_c_328_, lean_object* v_s_329_){
_start:
{
lean_object* v_pos_330_; lean_object* v_s_331_; lean_object* v_errorMsg_332_; lean_object* v___x_333_; uint8_t v___x_334_; 
v_pos_330_ = lean_ctor_get(v_s_329_, 2);
lean_inc(v_pos_330_);
lean_inc_ref(v_c_328_);
v_s_331_ = lean_apply_2(v_p_326_, v_c_328_, v_s_329_);
v_errorMsg_332_ = lean_ctor_get(v_s_331_, 4);
lean_inc(v_errorMsg_332_);
v___x_333_ = lean_box(0);
v___x_334_ = l_instBEqOption_beq___at___00Lake_Toml_optFn_spec__0(v_errorMsg_332_, v___x_333_);
lean_dec(v_errorMsg_332_);
if (v___x_334_ == 0)
{
lean_dec(v_pos_330_);
lean_dec_ref(v_c_328_);
lean_dec_ref(v_trailingFn_327_);
return v_s_331_;
}
else
{
lean_object* v___x_335_; 
v___x_335_ = l_Lake_Toml_pushAtom(v_pos_330_, v_trailingFn_327_, v_c_328_, v_s_331_);
return v___x_335_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom___lam__0(lean_object* v___y_336_){
_start:
{
lean_inc(v___y_336_);
return v___y_336_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom___lam__0___boxed(lean_object* v___y_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lake_Toml_atom___lam__0(v___y_337_);
lean_dec(v___y_337_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom___lam__1(lean_object* v___y_339_){
_start:
{
lean_inc_ref(v___y_339_);
return v___y_339_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom___lam__1___boxed(lean_object* v___y_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lake_Toml_atom___lam__1(v___y_340_);
lean_dec_ref(v___y_340_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom(lean_object* v_p_348_, lean_object* v_trailingFn_349_){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_350_ = ((lean_object*)(l_Lake_Toml_atom___closed__2));
v___x_351_ = lean_alloc_closure((void*)(l_Lake_Toml_atomFn), 4, 2);
lean_closure_set(v___x_351_, 0, v_p_348_);
lean_closure_set(v___x_351_, 1, v_trailingFn_349_);
v___x_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_352_, 0, v___x_350_);
lean_ctor_set(v___x_352_, 1, v___x_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___redArg(lean_object* v___y_353_){
_start:
{
lean_object* v___x_355_; lean_object* v_stxTrav_356_; lean_object* v_cur_357_; lean_object* v___x_358_; 
v___x_355_ = lean_st_ref_get(v___y_353_);
v_stxTrav_356_ = lean_ctor_get(v___x_355_, 0);
lean_inc_ref(v_stxTrav_356_);
lean_dec(v___x_355_);
v_cur_357_ = lean_ctor_get(v_stxTrav_356_, 0);
lean_inc(v_cur_357_);
lean_dec_ref(v_stxTrav_356_);
v___x_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_358_, 0, v_cur_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___redArg___boxed(lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___redArg(v___y_359_);
lean_dec(v___y_359_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0(lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___redArg(v___y_363_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___boxed(lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0(v___y_368_, v___y_369_, v___y_370_, v___y_371_);
lean_dec(v___y_371_);
lean_dec_ref(v___y_370_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___redArg(lean_object* v___y_374_){
_start:
{
lean_object* v___x_376_; lean_object* v_stxTrav_377_; lean_object* v_leadWord_378_; uint8_t v_leadWordIdent_379_; uint8_t v_isUngrouped_380_; uint8_t v_mustBeGrouped_381_; lean_object* v_stack_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_393_; 
v___x_376_ = lean_st_ref_take(v___y_374_);
v_stxTrav_377_ = lean_ctor_get(v___x_376_, 0);
v_leadWord_378_ = lean_ctor_get(v___x_376_, 1);
v_leadWordIdent_379_ = lean_ctor_get_uint8(v___x_376_, sizeof(void*)*3);
v_isUngrouped_380_ = lean_ctor_get_uint8(v___x_376_, sizeof(void*)*3 + 1);
v_mustBeGrouped_381_ = lean_ctor_get_uint8(v___x_376_, sizeof(void*)*3 + 2);
v_stack_382_ = lean_ctor_get(v___x_376_, 2);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_393_ == 0)
{
v___x_384_ = v___x_376_;
v_isShared_385_ = v_isSharedCheck_393_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_stack_382_);
lean_inc(v_leadWord_378_);
lean_inc(v_stxTrav_377_);
lean_dec(v___x_376_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_393_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_389_; 
v___x_386_ = lean_box(0);
v___x_387_ = l_Lean_Syntax_Traverser_left(v_stxTrav_377_);
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 0, v___x_387_);
v___x_389_ = v___x_384_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_387_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v_leadWord_378_);
lean_ctor_set(v_reuseFailAlloc_392_, 2, v_stack_382_);
lean_ctor_set_uint8(v_reuseFailAlloc_392_, sizeof(void*)*3, v_leadWordIdent_379_);
lean_ctor_set_uint8(v_reuseFailAlloc_392_, sizeof(void*)*3 + 1, v_isUngrouped_380_);
lean_ctor_set_uint8(v_reuseFailAlloc_392_, sizeof(void*)*3 + 2, v_mustBeGrouped_381_);
v___x_389_ = v_reuseFailAlloc_392_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_390_ = lean_st_ref_put(v___y_374_, v___x_389_);
v___x_391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_391_, 0, v___x_386_);
return v___x_391_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___redArg___boxed(lean_object* v___y_394_, lean_object* v___y_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___redArg(v___y_394_);
lean_dec(v___y_394_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1(lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___redArg(v___y_398_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___boxed(lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1(v___y_403_, v___y_404_, v___y_405_, v___y_406_);
lean_dec(v___y_406_);
lean_dec_ref(v___y_405_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
return v_res_408_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__0(void){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_409_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__0);
v___x_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
return v___x_411_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__2(void){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_412_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_413_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1);
v___x_414_ = lean_unsigned_to_nat(0u);
v___x_415_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
lean_ctor_set(v___x_415_, 1, v___x_414_);
lean_ctor_set(v___x_415_, 2, v___x_414_);
lean_ctor_set(v___x_415_, 3, v___x_414_);
lean_ctor_set(v___x_415_, 4, v___x_413_);
lean_ctor_set(v___x_415_, 5, v___x_413_);
lean_ctor_set(v___x_415_, 6, v___x_413_);
lean_ctor_set(v___x_415_, 7, v___x_413_);
lean_ctor_set(v___x_415_, 8, v___x_413_);
lean_ctor_set(v___x_415_, 9, v___x_413_);
lean_ctor_set(v___x_415_, 10, v___x_413_);
lean_ctor_set(v___x_415_, 11, v___x_412_);
return v___x_415_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__3(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_416_ = lean_unsigned_to_nat(32u);
v___x_417_ = lean_mk_empty_array_with_capacity(v___x_416_);
v___x_418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
return v___x_418_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__4(void){
_start:
{
size_t v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_419_ = ((size_t)5ULL);
v___x_420_ = lean_unsigned_to_nat(0u);
v___x_421_ = lean_unsigned_to_nat(32u);
v___x_422_ = lean_mk_empty_array_with_capacity(v___x_421_);
v___x_423_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__3);
v___x_424_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_424_, 0, v___x_423_);
lean_ctor_set(v___x_424_, 1, v___x_422_);
lean_ctor_set(v___x_424_, 2, v___x_420_);
lean_ctor_set(v___x_424_, 3, v___x_420_);
lean_ctor_set_usize(v___x_424_, 4, v___x_419_);
return v___x_424_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__5(void){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_425_ = lean_box(1);
v___x_426_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__4);
v___x_427_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__1);
v___x_428_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_428_, 0, v___x_427_);
lean_ctor_set(v___x_428_, 1, v___x_426_);
lean_ctor_set(v___x_428_, 2, v___x_425_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2(lean_object* v_msgData_429_, lean_object* v___y_430_, lean_object* v___y_431_){
_start:
{
lean_object* v___x_433_; lean_object* v_toCold_434_; lean_object* v_env_435_; lean_object* v_options_436_; uint8_t v___x_437_; lean_object* v_env_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_433_ = lean_st_ref_get(v___y_431_);
v_toCold_434_ = lean_ctor_get(v___y_430_, 0);
v_env_435_ = lean_ctor_get(v___x_433_, 0);
lean_inc_ref(v_env_435_);
lean_dec(v___x_433_);
v_options_436_ = lean_ctor_get(v_toCold_434_, 2);
v___x_437_ = 0;
v_env_438_ = l_Lean_Environment_setRecordingDeps(v_env_435_, v___x_437_);
v___x_439_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__2);
v___x_440_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___closed__5);
lean_inc_ref(v_options_436_);
v___x_441_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_441_, 0, v_env_438_);
lean_ctor_set(v___x_441_, 1, v___x_439_);
lean_ctor_set(v___x_441_, 2, v___x_440_);
lean_ctor_set(v___x_441_, 3, v_options_436_);
v___x_442_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
lean_ctor_set(v___x_442_, 1, v_msgData_429_);
v___x_443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_443_, 0, v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2___boxed(lean_object* v_msgData_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2(v_msgData_444_, v___y_445_, v___y_446_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
return v_res_448_;
}
}
static double _init_l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_449_; double v___x_450_; 
v___x_449_ = lean_unsigned_to_nat(0u);
v___x_450_ = lean_float_of_nat(v___x_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg(lean_object* v_cls_453_, lean_object* v_msg_454_, lean_object* v___y_455_, lean_object* v___y_456_){
_start:
{
lean_object* v_ref_458_; lean_object* v___x_459_; lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_505_; 
v_ref_458_ = lean_ctor_get(v___y_455_, 2);
v___x_459_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2_spec__2(v_msg_454_, v___y_455_, v___y_456_);
v_a_460_ = lean_ctor_get(v___x_459_, 0);
v_isSharedCheck_505_ = !lean_is_exclusive(v___x_459_);
if (v_isSharedCheck_505_ == 0)
{
v___x_462_ = v___x_459_;
v_isShared_463_ = v_isSharedCheck_505_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v___x_459_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_505_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_464_; lean_object* v_traceState_465_; lean_object* v_env_466_; lean_object* v_nextMacroScope_467_; lean_object* v_ngen_468_; lean_object* v_auxDeclNGen_469_; lean_object* v_cache_470_; lean_object* v_recordedDeps_471_; lean_object* v_messages_472_; lean_object* v_infoState_473_; lean_object* v_snapshotTasks_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_504_; 
v___x_464_ = lean_st_ref_take(v___y_456_);
v_traceState_465_ = lean_ctor_get(v___x_464_, 4);
v_env_466_ = lean_ctor_get(v___x_464_, 0);
v_nextMacroScope_467_ = lean_ctor_get(v___x_464_, 1);
v_ngen_468_ = lean_ctor_get(v___x_464_, 2);
v_auxDeclNGen_469_ = lean_ctor_get(v___x_464_, 3);
v_cache_470_ = lean_ctor_get(v___x_464_, 5);
v_recordedDeps_471_ = lean_ctor_get(v___x_464_, 6);
v_messages_472_ = lean_ctor_get(v___x_464_, 7);
v_infoState_473_ = lean_ctor_get(v___x_464_, 8);
v_snapshotTasks_474_ = lean_ctor_get(v___x_464_, 9);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_504_ == 0)
{
v___x_476_ = v___x_464_;
v_isShared_477_ = v_isSharedCheck_504_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_snapshotTasks_474_);
lean_inc(v_infoState_473_);
lean_inc(v_messages_472_);
lean_inc(v_recordedDeps_471_);
lean_inc(v_cache_470_);
lean_inc(v_traceState_465_);
lean_inc(v_auxDeclNGen_469_);
lean_inc(v_ngen_468_);
lean_inc(v_nextMacroScope_467_);
lean_inc(v_env_466_);
lean_dec(v___x_464_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_504_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
uint64_t v_tid_478_; lean_object* v_traces_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_503_; 
v_tid_478_ = lean_ctor_get_uint64(v_traceState_465_, sizeof(void*)*1);
v_traces_479_ = lean_ctor_get(v_traceState_465_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v_traceState_465_);
if (v_isSharedCheck_503_ == 0)
{
v___x_481_ = v_traceState_465_;
v_isShared_482_ = v_isSharedCheck_503_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_traces_479_);
lean_dec(v_traceState_465_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_503_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_483_; lean_object* v___x_484_; double v___x_485_; uint8_t v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_494_; 
v___x_483_ = lean_box(0);
v___x_484_ = lean_box(0);
v___x_485_ = lean_float_once(&l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__0);
v___x_486_ = 0;
v___x_487_ = ((lean_object*)(l_Lake_Toml_mkUnexpectedCharError___closed__1));
v___x_488_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_488_, 0, v_cls_453_);
lean_ctor_set(v___x_488_, 1, v___x_484_);
lean_ctor_set(v___x_488_, 2, v___x_487_);
lean_ctor_set_float(v___x_488_, sizeof(void*)*3, v___x_485_);
lean_ctor_set_float(v___x_488_, sizeof(void*)*3 + 8, v___x_485_);
lean_ctor_set_uint8(v___x_488_, sizeof(void*)*3 + 16, v___x_486_);
v___x_489_ = ((lean_object*)(l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___closed__1));
v___x_490_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_490_, 0, v___x_488_);
lean_ctor_set(v___x_490_, 1, v_a_460_);
lean_ctor_set(v___x_490_, 2, v___x_489_);
lean_inc(v_ref_458_);
v___x_491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_491_, 0, v_ref_458_);
lean_ctor_set(v___x_491_, 1, v___x_490_);
v___x_492_ = l_Lean_PersistentArray_push___redArg(v_traces_479_, v___x_491_);
if (v_isShared_482_ == 0)
{
lean_ctor_set(v___x_481_, 0, v___x_492_);
v___x_494_ = v___x_481_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v___x_492_);
lean_ctor_set_uint64(v_reuseFailAlloc_502_, sizeof(void*)*1, v_tid_478_);
v___x_494_ = v_reuseFailAlloc_502_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
lean_object* v___x_496_; 
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 4, v___x_494_);
v___x_496_ = v___x_476_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_env_466_);
lean_ctor_set(v_reuseFailAlloc_501_, 1, v_nextMacroScope_467_);
lean_ctor_set(v_reuseFailAlloc_501_, 2, v_ngen_468_);
lean_ctor_set(v_reuseFailAlloc_501_, 3, v_auxDeclNGen_469_);
lean_ctor_set(v_reuseFailAlloc_501_, 4, v___x_494_);
lean_ctor_set(v_reuseFailAlloc_501_, 5, v_cache_470_);
lean_ctor_set(v_reuseFailAlloc_501_, 6, v_recordedDeps_471_);
lean_ctor_set(v_reuseFailAlloc_501_, 7, v_messages_472_);
lean_ctor_set(v_reuseFailAlloc_501_, 8, v_infoState_473_);
lean_ctor_set(v_reuseFailAlloc_501_, 9, v_snapshotTasks_474_);
v___x_496_ = v_reuseFailAlloc_501_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
lean_object* v___x_497_; lean_object* v___x_499_; 
v___x_497_ = lean_st_ref_put(v___y_456_, v___x_496_);
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 0, v___x_483_);
v___x_499_ = v___x_462_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v___x_483_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg___boxed(lean_object* v_cls_506_, lean_object* v_msg_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg(v_cls_506_, v_msg_507_, v___y_508_, v___y_509_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
return v_res_511_;
}
}
static lean_object* _init_l_Lake_Toml_atom_formatter___redArg___closed__6(void){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_522_ = ((lean_object*)(l_Lake_Toml_atom_formatter___redArg___closed__3));
v___x_523_ = ((lean_object*)(l_Lake_Toml_atom_formatter___redArg___closed__5));
v___x_524_ = l_Lean_Name_append(v___x_523_, v___x_522_);
return v___x_524_;
}
}
static lean_object* _init_l_Lake_Toml_atom_formatter___redArg___closed__8(void){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_526_ = ((lean_object*)(l_Lake_Toml_atom_formatter___redArg___closed__7));
v___x_527_ = l_Lean_stringToMessageData(v___x_526_);
return v___x_527_;
}
}
static lean_object* _init_l_Lake_Toml_atom_formatter___redArg___closed__10(void){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_529_ = ((lean_object*)(l_Lake_Toml_atom_formatter___redArg___closed__9));
v___x_530_ = l_Lean_stringToMessageData(v___x_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom_formatter___redArg(lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_){
_start:
{
lean_object* v___x_536_; lean_object* v_a_537_; 
v___x_536_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___redArg(v_a_532_);
v_a_537_ = lean_ctor_get(v___x_536_, 0);
lean_inc(v_a_537_);
lean_dec_ref(v___x_536_);
if (lean_obj_tag(v_a_537_) == 2)
{
lean_object* v_info_538_; lean_object* v_val_539_; lean_object* v___x_540_; uint8_t v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v_info_538_ = lean_ctor_get(v_a_537_, 0);
lean_inc(v_info_538_);
v_val_539_ = lean_ctor_get(v_a_537_, 1);
lean_inc_ref(v_val_539_);
v___x_540_ = l_Lean_PrettyPrinter_Formatter_getExprPos_x3f(v_a_537_);
lean_dec_ref_known(v_a_537_, 2);
v___x_541_ = 0;
v___x_542_ = lean_box(v___x_541_);
v___x_543_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_pushToken___boxed), 8, 3);
lean_closure_set(v___x_543_, 0, v_info_538_);
lean_closure_set(v___x_543_, 1, v_val_539_);
lean_closure_set(v___x_543_, 2, v___x_542_);
v___x_544_ = l_Lean_PrettyPrinter_Formatter_withMaybeTag(v___x_540_, v___x_543_, v_a_531_, v_a_532_, v_a_533_, v_a_534_);
lean_dec(v___x_540_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v___x_545_; 
lean_dec_ref_known(v___x_544_, 1);
v___x_545_ = l_Lean_Syntax_MonadTraverser_goLeft___at___00Lake_Toml_atom_formatter_spec__1___redArg(v_a_532_);
return v___x_545_;
}
else
{
return v___x_544_;
}
}
else
{
lean_object* v_toCold_546_; lean_object* v_options_547_; uint8_t v_hasTrace_548_; 
v_toCold_546_ = lean_ctor_get(v_a_533_, 0);
v_options_547_ = lean_ctor_get(v_toCold_546_, 2);
v_hasTrace_548_ = lean_ctor_get_uint8(v_options_547_, sizeof(void*)*1);
if (v_hasTrace_548_ == 0)
{
lean_object* v___x_549_; 
lean_dec(v_a_537_);
v___x_549_ = l_Lean_PrettyPrinter_Formatter_throwBacktrack___redArg();
return v___x_549_;
}
else
{
lean_object* v_inheritedTraceOptions_550_; lean_object* v___x_551_; lean_object* v___x_552_; uint8_t v___x_553_; 
v_inheritedTraceOptions_550_ = lean_ctor_get(v_toCold_546_, 11);
v___x_551_ = ((lean_object*)(l_Lake_Toml_atom_formatter___redArg___closed__3));
v___x_552_ = lean_obj_once(&l_Lake_Toml_atom_formatter___redArg___closed__6, &l_Lake_Toml_atom_formatter___redArg___closed__6_once, _init_l_Lake_Toml_atom_formatter___redArg___closed__6);
v___x_553_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_550_, v_options_547_, v___x_552_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; 
lean_dec(v_a_537_);
v___x_554_ = l_Lean_PrettyPrinter_Formatter_throwBacktrack___redArg();
return v___x_554_;
}
else
{
lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_555_ = lean_obj_once(&l_Lake_Toml_atom_formatter___redArg___closed__8, &l_Lake_Toml_atom_formatter___redArg___closed__8_once, _init_l_Lake_Toml_atom_formatter___redArg___closed__8);
v___x_556_ = lean_box(0);
v___x_557_ = 0;
v___x_558_ = l_Lean_Syntax_formatStx(v_a_537_, v___x_556_, v___x_557_);
v___x_559_ = l_Lean_MessageData_ofFormat(v___x_558_);
v___x_560_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_560_, 0, v___x_555_);
lean_ctor_set(v___x_560_, 1, v___x_559_);
v___x_561_ = lean_obj_once(&l_Lake_Toml_atom_formatter___redArg___closed__10, &l_Lake_Toml_atom_formatter___redArg___closed__10_once, _init_l_Lake_Toml_atom_formatter___redArg___closed__10);
v___x_562_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_562_, 0, v___x_560_);
lean_ctor_set(v___x_562_, 1, v___x_561_);
v___x_563_ = l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg(v___x_551_, v___x_562_, v_a_533_, v_a_534_);
if (lean_obj_tag(v___x_563_) == 0)
{
lean_object* v___x_564_; 
lean_dec_ref_known(v___x_563_, 1);
v___x_564_ = l_Lean_PrettyPrinter_Formatter_throwBacktrack___redArg();
return v___x_564_;
}
else
{
return v___x_563_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom_formatter___redArg___boxed(lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Lake_Toml_atom_formatter___redArg(v_a_565_, v_a_566_, v_a_567_, v_a_568_);
lean_dec(v_a_568_);
lean_dec_ref(v_a_567_);
lean_dec(v_a_566_);
lean_dec_ref(v_a_565_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom_formatter(lean_object* v_x_571_, lean_object* v_x_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_){
_start:
{
lean_object* v___x_578_; 
v___x_578_ = l_Lake_Toml_atom_formatter___redArg(v_a_573_, v_a_574_, v_a_575_, v_a_576_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_atom_formatter___boxed(lean_object* v_x_579_, lean_object* v_x_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Lake_Toml_atom_formatter(v_x_579_, v_x_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_);
lean_dec(v_a_584_);
lean_dec_ref(v_a_583_);
lean_dec(v_a_582_);
lean_dec_ref(v_a_581_);
lean_dec_ref(v_x_580_);
lean_dec_ref(v_x_579_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2(lean_object* v_cls_587_, lean_object* v_msg_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___redArg(v_cls_587_, v_msg_588_, v___y_591_, v___y_592_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2___boxed(lean_object* v_cls_595_, lean_object* v_msg_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Lean_addTrace___at___00Lake_Toml_atom_formatter_spec__2(v_cls_595_, v_msg_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_599_);
lean_dec(v___y_598_);
lean_dec_ref(v___y_597_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer___redArg(lean_object* v_a_603_){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_603_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer___redArg___boxed(lean_object* v_a_606_, lean_object* v_a_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer___redArg(v_a_606_);
lean_dec(v_a_606_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer(lean_object* v_x_609_, lean_object* v_x_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_612_);
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer___boxed(lean_object* v_x_617_, lean_object* v_x_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_atom_parenthesizer(v_x_617_, v_x_618_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
lean_dec(v_a_622_);
lean_dec_ref(v_a_621_);
lean_dec(v_a_620_);
lean_dec_ref(v_a_619_);
lean_dec_ref(v_x_618_);
lean_dec_ref(v_x_617_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom(uint32_t v_c_625_, lean_object* v_expected_626_, lean_object* v_trailingFn_627_){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_628_ = lean_box_uint32(v_c_625_);
v___x_629_ = lean_alloc_closure((void*)(l_Lake_Toml_chFn___boxed), 4, 2);
lean_closure_set(v___x_629_, 0, v___x_628_);
lean_closure_set(v___x_629_, 1, v_expected_626_);
v___x_630_ = l_Lake_Toml_atom(v___x_629_, v_trailingFn_627_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom___boxed(lean_object* v_c_631_, lean_object* v_expected_632_, lean_object* v_trailingFn_633_){
_start:
{
uint32_t v_c_boxed_634_; lean_object* v_res_635_; 
v_c_boxed_634_ = lean_unbox_uint32(v_c_631_);
lean_dec(v_c_631_);
v_res_635_ = l_Lake_Toml_chAtom(v_c_boxed_634_, v_expected_632_, v_trailingFn_633_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_formatter___redArg(uint32_t v_c_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_){
_start:
{
uint8_t v___x_642_; lean_object* v___x_643_; 
v___x_642_ = 0;
v___x_643_ = l_Lean_PrettyPrinter_Formatter_rawCh_formatter(v_c_636_, v___x_642_, v_a_637_, v_a_638_, v_a_639_, v_a_640_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_formatter___redArg___boxed(lean_object* v_c_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_){
_start:
{
uint32_t v_c_boxed_650_; lean_object* v_res_651_; 
v_c_boxed_650_ = lean_unbox_uint32(v_c_644_);
lean_dec(v_c_644_);
v_res_651_ = l_Lake_Toml_chAtom_formatter___redArg(v_c_boxed_650_, v_a_645_, v_a_646_, v_a_647_, v_a_648_);
lean_dec(v_a_648_);
lean_dec_ref(v_a_647_);
lean_dec(v_a_646_);
lean_dec_ref(v_a_645_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_formatter(uint32_t v_c_652_, lean_object* v_x_653_, lean_object* v_x_654_, lean_object* v_a_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_){
_start:
{
lean_object* v___x_660_; 
v___x_660_ = l_Lake_Toml_chAtom_formatter___redArg(v_c_652_, v_a_655_, v_a_656_, v_a_657_, v_a_658_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_formatter___boxed(lean_object* v_c_661_, lean_object* v_x_662_, lean_object* v_x_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_){
_start:
{
uint32_t v_c_boxed_669_; lean_object* v_res_670_; 
v_c_boxed_669_ = lean_unbox_uint32(v_c_661_);
lean_dec(v_c_661_);
v_res_670_ = l_Lake_Toml_chAtom_formatter(v_c_boxed_669_, v_x_662_, v_x_663_, v_a_664_, v_a_665_, v_a_666_, v_a_667_);
lean_dec(v_a_667_);
lean_dec_ref(v_a_666_);
lean_dec(v_a_665_);
lean_dec_ref(v_a_664_);
lean_dec_ref(v_x_663_);
lean_dec(v_x_662_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_parenthesizer___redArg(lean_object* v_a_671_){
_start:
{
lean_object* v___x_673_; 
v___x_673_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_671_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_parenthesizer___redArg___boxed(lean_object* v_a_674_, lean_object* v_a_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Lake_Toml_chAtom_parenthesizer___redArg(v_a_674_);
lean_dec(v_a_674_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_parenthesizer(uint32_t v_x_677_, lean_object* v_x_678_, lean_object* v_x_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_){
_start:
{
lean_object* v___x_685_; 
v___x_685_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_681_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_chAtom_parenthesizer___boxed(lean_object* v_x_686_, lean_object* v_x_687_, lean_object* v_x_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_){
_start:
{
uint32_t v_x_19__boxed_694_; lean_object* v_res_695_; 
v_x_19__boxed_694_ = lean_unbox_uint32(v_x_686_);
lean_dec(v_x_686_);
v_res_695_ = l_Lake_Toml_chAtom_parenthesizer(v_x_19__boxed_694_, v_x_687_, v_x_688_, v_a_689_, v_a_690_, v_a_691_, v_a_692_);
lean_dec(v_a_692_);
lean_dec_ref(v_a_691_);
lean_dec(v_a_690_);
lean_dec_ref(v_a_689_);
lean_dec_ref(v_x_688_);
lean_dec(v_x_687_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom(lean_object* v_s_696_, lean_object* v_expected_697_, lean_object* v_trailingFn_698_){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v_str_703_; lean_object* v_startInclusive_704_; lean_object* v_endExclusive_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_699_ = lean_unsigned_to_nat(0u);
v___x_700_ = lean_string_utf8_byte_size(v_s_696_);
v___x_701_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_701_, 0, v_s_696_);
lean_ctor_set(v___x_701_, 1, v___x_699_);
lean_ctor_set(v___x_701_, 2, v___x_700_);
v___x_702_ = l_String_Slice_trimAscii(v___x_701_);
v_str_703_ = lean_ctor_get(v___x_702_, 0);
lean_inc_ref(v_str_703_);
v_startInclusive_704_ = lean_ctor_get(v___x_702_, 1);
lean_inc(v_startInclusive_704_);
v_endExclusive_705_ = lean_ctor_get(v___x_702_, 2);
lean_inc(v_endExclusive_705_);
lean_dec_ref(v___x_702_);
v___x_706_ = lean_string_utf8_extract_fast(v_str_703_, v_startInclusive_704_, v_endExclusive_705_);
lean_dec(v_endExclusive_705_);
lean_dec(v_startInclusive_704_);
lean_dec_ref(v_str_703_);
v___x_707_ = lean_alloc_closure((void*)(l_Lake_Toml_strFn), 4, 2);
lean_closure_set(v___x_707_, 0, v___x_706_);
lean_closure_set(v___x_707_, 1, v_expected_697_);
v___x_708_ = l_Lake_Toml_atom(v___x_707_, v_trailingFn_698_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_formatter___redArg(lean_object* v_s_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter(v_s_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_formatter___redArg___boxed(lean_object* v_s_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lake_Toml_strAtom_formatter___redArg(v_s_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_);
lean_dec(v_a_720_);
lean_dec_ref(v_a_719_);
lean_dec(v_a_718_);
lean_dec_ref(v_a_717_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_formatter(lean_object* v_s_723_, lean_object* v_x_724_, lean_object* v_x_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter(v_s_723_, v_a_726_, v_a_727_, v_a_728_, v_a_729_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_formatter___boxed(lean_object* v_s_732_, lean_object* v_x_733_, lean_object* v_x_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l_Lake_Toml_strAtom_formatter(v_s_732_, v_x_733_, v_x_734_, v_a_735_, v_a_736_, v_a_737_, v_a_738_);
lean_dec(v_a_738_);
lean_dec_ref(v_a_737_);
lean_dec(v_a_736_);
lean_dec_ref(v_a_735_);
lean_dec_ref(v_x_734_);
lean_dec(v_x_733_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_parenthesizer___redArg(lean_object* v_a_741_){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_741_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_parenthesizer___redArg___boxed(lean_object* v_a_744_, lean_object* v_a_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l_Lake_Toml_strAtom_parenthesizer___redArg(v_a_744_);
lean_dec(v_a_744_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_parenthesizer(lean_object* v_x_747_, lean_object* v_x_748_, lean_object* v_x_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_751_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_strAtom_parenthesizer___boxed(lean_object* v_x_756_, lean_object* v_x_757_, lean_object* v_x_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Lake_Toml_strAtom_parenthesizer(v_x_756_, v_x_757_, v_x_758_, v_a_759_, v_a_760_, v_a_761_, v_a_762_);
lean_dec(v_a_762_);
lean_dec_ref(v_a_761_);
lean_dec(v_a_760_);
lean_dec_ref(v_a_759_);
lean_dec_ref(v_x_758_);
lean_dec(v_x_757_);
lean_dec_ref(v_x_756_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_pushLit(lean_object* v_kind_765_, lean_object* v_startPos_766_, lean_object* v_trailingFn_767_, lean_object* v_c_768_, lean_object* v_s_769_){
_start:
{
lean_object* v_toInputContext_770_; lean_object* v_pos_771_; lean_object* v_inputString_772_; lean_object* v_endPos_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_791_; 
v_toInputContext_770_ = lean_ctor_get(v_c_768_, 0);
lean_inc_ref(v_toInputContext_770_);
v_pos_771_ = lean_ctor_get(v_s_769_, 2);
lean_inc(v_pos_771_);
v_inputString_772_ = lean_ctor_get(v_toInputContext_770_, 0);
v_endPos_773_ = lean_ctor_get(v_toInputContext_770_, 3);
v_isSharedCheck_791_ = !lean_is_exclusive(v_toInputContext_770_);
if (v_isSharedCheck_791_ == 0)
{
lean_object* v_unused_792_; lean_object* v_unused_793_; 
v_unused_792_ = lean_ctor_get(v_toInputContext_770_, 2);
lean_dec(v_unused_792_);
v_unused_793_ = lean_ctor_get(v_toInputContext_770_, 1);
lean_dec(v_unused_793_);
v___x_775_ = v_toInputContext_770_;
v_isShared_776_ = v_isSharedCheck_791_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_endPos_773_);
lean_inc(v_inputString_772_);
lean_dec(v_toInputContext_770_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_791_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v_leading_777_; lean_object* v_s_778_; lean_object* v_pos_779_; lean_object* v_val_780_; lean_object* v___y_782_; uint8_t v___x_788_; 
lean_inc(v_startPos_766_);
v_leading_777_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_768_, v_startPos_766_);
v_s_778_ = lean_apply_2(v_trailingFn_767_, v_c_768_, v_s_769_);
v_pos_779_ = lean_ctor_get(v_s_778_, 2);
lean_inc(v_pos_779_);
v_val_780_ = lean_string_utf8_extract(v_inputString_772_, v_startPos_766_, v_pos_771_);
v___x_788_ = lean_nat_dec_le(v_pos_779_, v_endPos_773_);
if (v___x_788_ == 0)
{
lean_object* v___x_789_; 
lean_dec(v_pos_779_);
lean_inc(v_pos_771_);
v___x_789_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_789_, 0, v_inputString_772_);
lean_ctor_set(v___x_789_, 1, v_pos_771_);
lean_ctor_set(v___x_789_, 2, v_endPos_773_);
v___y_782_ = v___x_789_;
goto v___jp_781_;
}
else
{
lean_object* v___x_790_; 
lean_dec(v_endPos_773_);
lean_inc(v_pos_771_);
v___x_790_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_790_, 0, v_inputString_772_);
lean_ctor_set(v___x_790_, 1, v_pos_771_);
lean_ctor_set(v___x_790_, 2, v_pos_779_);
v___y_782_ = v___x_790_;
goto v___jp_781_;
}
v___jp_781_:
{
lean_object* v_info_784_; 
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 3, v_pos_771_);
lean_ctor_set(v___x_775_, 2, v___y_782_);
lean_ctor_set(v___x_775_, 1, v_startPos_766_);
lean_ctor_set(v___x_775_, 0, v_leading_777_);
v_info_784_ = v___x_775_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_leading_777_);
lean_ctor_set(v_reuseFailAlloc_787_, 1, v_startPos_766_);
lean_ctor_set(v_reuseFailAlloc_787_, 2, v___y_782_);
lean_ctor_set(v_reuseFailAlloc_787_, 3, v_pos_771_);
v_info_784_ = v_reuseFailAlloc_787_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_785_ = l_Lean_Syntax_mkLit(v_kind_765_, v_val_780_, v_info_784_);
v___x_786_ = l_Lean_Parser_ParserState_pushSyntax(v_s_778_, v___x_785_);
return v___x_786_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litFn(lean_object* v_kind_794_, lean_object* v_p_795_, lean_object* v_trailingFn_796_, lean_object* v_c_797_, lean_object* v_s_798_){
_start:
{
lean_object* v_pos_799_; lean_object* v_s_800_; lean_object* v_errorMsg_801_; lean_object* v___x_802_; uint8_t v___x_803_; 
v_pos_799_ = lean_ctor_get(v_s_798_, 2);
lean_inc(v_pos_799_);
lean_inc_ref(v_c_797_);
v_s_800_ = lean_apply_2(v_p_795_, v_c_797_, v_s_798_);
v_errorMsg_801_ = lean_ctor_get(v_s_800_, 4);
lean_inc(v_errorMsg_801_);
v___x_802_ = lean_box(0);
v___x_803_ = l_instBEqOption_beq___at___00Lake_Toml_optFn_spec__0(v_errorMsg_801_, v___x_802_);
lean_dec(v_errorMsg_801_);
if (v___x_803_ == 0)
{
lean_dec(v_pos_799_);
lean_dec_ref(v_c_797_);
lean_dec_ref(v_trailingFn_796_);
lean_dec(v_kind_794_);
return v_s_800_;
}
else
{
lean_object* v___x_804_; 
v___x_804_ = l_Lake_Toml_pushLit(v_kind_794_, v_pos_799_, v_trailingFn_796_, v_c_797_, v_s_800_);
return v___x_804_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit(lean_object* v_kind_805_, lean_object* v_p_806_, lean_object* v_trailingFn_807_){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_808_ = ((lean_object*)(l_Lake_Toml_atom___closed__2));
v___x_809_ = lean_alloc_closure((void*)(l_Lake_Toml_litFn), 5, 3);
lean_closure_set(v___x_809_, 0, v_kind_805_);
lean_closure_set(v___x_809_, 1, v_p_806_);
lean_closure_set(v___x_809_, 2, v_trailingFn_807_);
v___x_810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_810_, 0, v___x_808_);
lean_ctor_set(v___x_810_, 1, v___x_809_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit_formatter___redArg(lean_object* v_kind_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_){
_start:
{
lean_object* v___x_817_; 
v___x_817_ = l_Lean_PrettyPrinter_Formatter_visitAtom(v_kind_811_, v_a_812_, v_a_813_, v_a_814_, v_a_815_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit_formatter___redArg___boxed(lean_object* v_kind_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l_Lake_Toml_lit_formatter___redArg(v_kind_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_);
lean_dec(v_a_822_);
lean_dec_ref(v_a_821_);
lean_dec(v_a_820_);
lean_dec_ref(v_a_819_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit_formatter(lean_object* v_kind_825_, lean_object* v_x_826_, lean_object* v_x_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_){
_start:
{
lean_object* v___x_833_; 
v___x_833_ = l_Lean_PrettyPrinter_Formatter_visitAtom(v_kind_825_, v_a_828_, v_a_829_, v_a_830_, v_a_831_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit_formatter___boxed(lean_object* v_kind_834_, lean_object* v_x_835_, lean_object* v_x_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_Lake_Toml_lit_formatter(v_kind_834_, v_x_835_, v_x_836_, v_a_837_, v_a_838_, v_a_839_, v_a_840_);
lean_dec(v_a_840_);
lean_dec_ref(v_a_839_);
lean_dec(v_a_838_);
lean_dec_ref(v_a_837_);
lean_dec_ref(v_x_836_);
lean_dec_ref(v_x_835_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit_parenthesizer___redArg(lean_object* v_a_843_){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_843_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit_parenthesizer___redArg___boxed(lean_object* v_a_846_, lean_object* v_a_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Lake_Toml_lit_parenthesizer___redArg(v_a_846_);
lean_dec(v_a_846_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit_parenthesizer(lean_object* v_x_849_, lean_object* v_x_850_, lean_object* v_x_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_853_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_lit_parenthesizer___boxed(lean_object* v_x_858_, lean_object* v_x_859_, lean_object* v_x_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l_Lake_Toml_lit_parenthesizer(v_x_858_, v_x_859_, v_x_860_, v_a_861_, v_a_862_, v_a_863_, v_a_864_);
lean_dec(v_a_864_);
lean_dec_ref(v_a_863_);
lean_dec(v_a_862_);
lean_dec_ref(v_a_861_);
lean_dec_ref(v_x_860_);
lean_dec_ref(v_x_859_);
lean_dec(v_x_858_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg___lam__0(lean_object* v_kind_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_){
_start:
{
lean_object* v___x_873_; 
v___x_873_ = l_Lean_PrettyPrinter_Formatter_visitAtom(v_kind_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg___lam__0___boxed(lean_object* v_kind_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = l_Lake_Toml_litWithAntiquot_formatter___redArg___lam__0(v_kind_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_);
lean_dec(v___y_878_);
lean_dec_ref(v___y_877_);
lean_dec(v___y_876_);
lean_dec_ref(v___y_875_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg(lean_object* v_name_881_, lean_object* v_kind_882_, uint8_t v_anonymous_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_){
_start:
{
lean_object* v___f_889_; uint8_t v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
lean_inc(v_kind_882_);
v___f_889_ = lean_alloc_closure((void*)(l_Lake_Toml_litWithAntiquot_formatter___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_889_, 0, v_kind_882_);
v___x_890_ = 0;
v___x_891_ = lean_box(v_anonymous_883_);
v___x_892_ = lean_box(v___x_890_);
v___x_893_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 9, 4);
lean_closure_set(v___x_893_, 0, v_name_881_);
lean_closure_set(v___x_893_, 1, v_kind_882_);
lean_closure_set(v___x_893_, 2, v___x_891_);
lean_closure_set(v___x_893_, 3, v___x_892_);
v___x_894_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_893_, v___f_889_, v_a_884_, v_a_885_, v_a_886_, v_a_887_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg___boxed(lean_object* v_name_895_, lean_object* v_kind_896_, lean_object* v_anonymous_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_){
_start:
{
uint8_t v_anonymous_boxed_903_; lean_object* v_res_904_; 
v_anonymous_boxed_903_ = lean_unbox(v_anonymous_897_);
v_res_904_ = l_Lake_Toml_litWithAntiquot_formatter___redArg(v_name_895_, v_kind_896_, v_anonymous_boxed_903_, v_a_898_, v_a_899_, v_a_900_, v_a_901_);
lean_dec(v_a_901_);
lean_dec_ref(v_a_900_);
lean_dec(v_a_899_);
lean_dec_ref(v_a_898_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter(lean_object* v_name_905_, lean_object* v_kind_906_, lean_object* v_p_907_, lean_object* v_trailingFn_908_, uint8_t v_anonymous_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_){
_start:
{
lean_object* v___x_915_; 
v___x_915_ = l_Lake_Toml_litWithAntiquot_formatter___redArg(v_name_905_, v_kind_906_, v_anonymous_909_, v_a_910_, v_a_911_, v_a_912_, v_a_913_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_formatter___boxed(lean_object* v_name_916_, lean_object* v_kind_917_, lean_object* v_p_918_, lean_object* v_trailingFn_919_, lean_object* v_anonymous_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_){
_start:
{
uint8_t v_anonymous_boxed_926_; lean_object* v_res_927_; 
v_anonymous_boxed_926_ = lean_unbox(v_anonymous_920_);
v_res_927_ = l_Lake_Toml_litWithAntiquot_formatter(v_name_916_, v_kind_917_, v_p_918_, v_trailingFn_919_, v_anonymous_boxed_926_, v_a_921_, v_a_922_, v_a_923_, v_a_924_);
lean_dec(v_a_924_);
lean_dec_ref(v_a_923_);
lean_dec(v_a_922_);
lean_dec_ref(v_a_921_);
lean_dec_ref(v_trailingFn_919_);
lean_dec_ref(v_p_918_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___lam__0(lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
lean_object* v___x_933_; 
v___x_933_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v___y_929_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___lam__0___boxed(lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___lam__0(v___y_934_, v___y_935_, v___y_936_, v___y_937_);
lean_dec(v___y_937_);
lean_dec_ref(v___y_936_);
lean_dec(v___y_935_);
lean_dec_ref(v___y_934_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(lean_object* v_name_941_, lean_object* v_kind_942_, uint8_t v_anonymous_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_){
_start:
{
lean_object* v___f_949_; uint8_t v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; 
v___f_949_ = ((lean_object*)(l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___closed__0));
v___x_950_ = 0;
v___x_951_ = lean_box(v_anonymous_943_);
v___x_952_ = lean_box(v___x_950_);
v___x_953_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_953_, 0, v_name_941_);
lean_closure_set(v___x_953_, 1, v_kind_942_);
lean_closure_set(v___x_953_, 2, v___x_951_);
lean_closure_set(v___x_953_, 3, v___x_952_);
v___x_954_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_953_, v___f_949_, v_a_944_, v_a_945_, v_a_946_, v_a_947_);
return v___x_954_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg___boxed(lean_object* v_name_955_, lean_object* v_kind_956_, lean_object* v_anonymous_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_){
_start:
{
uint8_t v_anonymous_boxed_963_; lean_object* v_res_964_; 
v_anonymous_boxed_963_ = lean_unbox(v_anonymous_957_);
v_res_964_ = l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(v_name_955_, v_kind_956_, v_anonymous_boxed_963_, v_a_958_, v_a_959_, v_a_960_, v_a_961_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer(lean_object* v_name_965_, lean_object* v_kind_966_, lean_object* v_p_967_, lean_object* v_trailingFn_968_, uint8_t v_anonymous_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_){
_start:
{
lean_object* v___x_975_; 
v___x_975_ = l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(v_name_965_, v_kind_966_, v_anonymous_969_, v_a_970_, v_a_971_, v_a_972_, v_a_973_);
return v___x_975_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___boxed(lean_object* v_name_976_, lean_object* v_kind_977_, lean_object* v_p_978_, lean_object* v_trailingFn_979_, lean_object* v_anonymous_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_){
_start:
{
uint8_t v_anonymous_boxed_986_; lean_object* v_res_987_; 
v_anonymous_boxed_986_ = lean_unbox(v_anonymous_980_);
v_res_987_ = l_Lake_Toml_litWithAntiquot_parenthesizer(v_name_976_, v_kind_977_, v_p_978_, v_trailingFn_979_, v_anonymous_boxed_986_, v_a_981_, v_a_982_, v_a_983_, v_a_984_);
lean_dec(v_a_984_);
lean_dec_ref(v_a_983_);
lean_dec(v_a_982_);
lean_dec_ref(v_a_981_);
lean_dec_ref(v_trailingFn_979_);
lean_dec_ref(v_p_978_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot(lean_object* v_name_988_, lean_object* v_kind_989_, lean_object* v_p_990_, lean_object* v_trailingFn_991_, uint8_t v_anonymous_992_){
_start:
{
uint8_t v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_993_ = 0;
lean_inc(v_kind_989_);
v___x_994_ = l_Lean_Parser_mkAntiquot(v_name_988_, v_kind_989_, v_anonymous_992_, v___x_993_);
v___x_995_ = l_Lake_Toml_lit(v_kind_989_, v_p_990_, v_trailingFn_991_);
v___x_996_ = l_Lean_Parser_withAntiquot(v___x_994_, v___x_995_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_litWithAntiquot___boxed(lean_object* v_name_997_, lean_object* v_kind_998_, lean_object* v_p_999_, lean_object* v_trailingFn_1000_, lean_object* v_anonymous_1001_){
_start:
{
uint8_t v_anonymous_boxed_1002_; lean_object* v_res_1003_; 
v_anonymous_boxed_1002_ = lean_unbox(v_anonymous_1001_);
v_res_1003_ = l_Lake_Toml_litWithAntiquot(v_name_997_, v_kind_998_, v_p_999_, v_trailingFn_1000_, v_anonymous_boxed_1002_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon(lean_object* v_fn_1004_){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = l_Lean_Parser_epsilonInfo;
v___x_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1005_);
lean_ctor_set(v___x_1006_, 1, v_fn_1004_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_formatter___redArg(){
_start:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = lean_box(0);
v___x_1009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1008_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_formatter___redArg___boxed(lean_object* v_a_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Lake_Toml_epsilon_formatter___redArg();
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_formatter(lean_object* v_x_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_){
_start:
{
lean_object* v___x_1018_; 
v___x_1018_ = l_Lake_Toml_epsilon_formatter___redArg();
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_formatter___boxed(lean_object* v_x_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l_Lake_Toml_epsilon_formatter(v_x_1019_, v_a_1020_, v_a_1021_, v_a_1022_, v_a_1023_);
lean_dec(v_a_1023_);
lean_dec_ref(v_a_1022_);
lean_dec(v_a_1021_);
lean_dec_ref(v_a_1020_);
lean_dec_ref(v_x_1019_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_parenthesizer___redArg(){
_start:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1027_ = lean_box(0);
v___x_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1027_);
return v___x_1028_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_parenthesizer___redArg___boxed(lean_object* v_a_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l_Lake_Toml_epsilon_parenthesizer___redArg();
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_parenthesizer(lean_object* v_x_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_){
_start:
{
lean_object* v___x_1037_; 
v___x_1037_ = l_Lake_Toml_epsilon_parenthesizer___redArg();
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_epsilon_parenthesizer___boxed(lean_object* v_x_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l_Lake_Toml_epsilon_parenthesizer(v_x_1038_, v_a_1039_, v_a_1040_, v_a_1041_, v_a_1042_);
lean_dec(v_a_1042_);
lean_dec_ref(v_a_1041_);
lean_dec(v_a_1040_);
lean_dec_ref(v_a_1039_);
lean_dec_ref(v_x_1038_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo(lean_object* v_f_1045_, lean_object* v_x_1046_){
_start:
{
switch(lean_obj_tag(v_x_1046_))
{
case 2:
{
lean_object* v_info_1047_; lean_object* v_val_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1056_; 
v_info_1047_ = lean_ctor_get(v_x_1046_, 0);
v_val_1048_ = lean_ctor_get(v_x_1046_, 1);
v_isSharedCheck_1056_ = !lean_is_exclusive(v_x_1046_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1050_ = v_x_1046_;
v_isShared_1051_ = v_isSharedCheck_1056_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_val_1048_);
lean_inc(v_info_1047_);
lean_dec(v_x_1046_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1056_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1052_; lean_object* v___x_1054_; 
v___x_1052_ = lean_apply_1(v_f_1045_, v_info_1047_);
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 0, v___x_1052_);
v___x_1054_ = v___x_1050_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v___x_1052_);
lean_ctor_set(v_reuseFailAlloc_1055_, 1, v_val_1048_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
case 3:
{
lean_object* v_info_1057_; lean_object* v_rawVal_1058_; lean_object* v_val_1059_; lean_object* v_preresolved_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1068_; 
v_info_1057_ = lean_ctor_get(v_x_1046_, 0);
v_rawVal_1058_ = lean_ctor_get(v_x_1046_, 1);
v_val_1059_ = lean_ctor_get(v_x_1046_, 2);
v_preresolved_1060_ = lean_ctor_get(v_x_1046_, 3);
v_isSharedCheck_1068_ = !lean_is_exclusive(v_x_1046_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1062_ = v_x_1046_;
v_isShared_1063_ = v_isSharedCheck_1068_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_preresolved_1060_);
lean_inc(v_val_1059_);
lean_inc(v_rawVal_1058_);
lean_inc(v_info_1057_);
lean_dec(v_x_1046_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1068_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1064_; lean_object* v___x_1066_; 
v___x_1064_ = lean_apply_1(v_f_1045_, v_info_1057_);
if (v_isShared_1063_ == 0)
{
lean_ctor_set(v___x_1062_, 0, v___x_1064_);
v___x_1066_ = v___x_1062_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v___x_1064_);
lean_ctor_set(v_reuseFailAlloc_1067_, 1, v_rawVal_1058_);
lean_ctor_set(v_reuseFailAlloc_1067_, 2, v_val_1059_);
lean_ctor_set(v_reuseFailAlloc_1067_, 3, v_preresolved_1060_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
case 1:
{
lean_object* v_info_1069_; lean_object* v_kind_1070_; lean_object* v_args_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; uint8_t v___x_1075_; 
v_info_1069_ = lean_ctor_get(v_x_1046_, 0);
v_kind_1070_ = lean_ctor_get(v_x_1046_, 1);
v_args_1071_ = lean_ctor_get(v_x_1046_, 2);
v___x_1072_ = lean_array_get_size(v_args_1071_);
v___x_1073_ = lean_unsigned_to_nat(1u);
v___x_1074_ = lean_nat_sub(v___x_1072_, v___x_1073_);
v___x_1075_ = lean_nat_dec_lt(v___x_1074_, v___x_1072_);
if (v___x_1075_ == 0)
{
lean_dec(v___x_1074_);
lean_dec_ref(v_f_1045_);
return v_x_1046_;
}
else
{
lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1087_; 
lean_inc_ref(v_args_1071_);
lean_inc(v_kind_1070_);
lean_inc(v_info_1069_);
v_isSharedCheck_1087_ = !lean_is_exclusive(v_x_1046_);
if (v_isSharedCheck_1087_ == 0)
{
lean_object* v_unused_1088_; lean_object* v_unused_1089_; lean_object* v_unused_1090_; 
v_unused_1088_ = lean_ctor_get(v_x_1046_, 2);
lean_dec(v_unused_1088_);
v_unused_1089_ = lean_ctor_get(v_x_1046_, 1);
lean_dec(v_unused_1089_);
v_unused_1090_ = lean_ctor_get(v_x_1046_, 0);
lean_dec(v_unused_1090_);
v___x_1077_ = v_x_1046_;
v_isShared_1078_ = v_isSharedCheck_1087_;
goto v_resetjp_1076_;
}
else
{
lean_dec(v_x_1046_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1087_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v_v_1079_; lean_object* v___x_1080_; lean_object* v_xs_x27_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1085_; 
v_v_1079_ = lean_array_fget(v_args_1071_, v___x_1074_);
v___x_1080_ = lean_box(0);
v_xs_x27_1081_ = lean_array_fset(v_args_1071_, v___x_1074_, v___x_1080_);
v___x_1082_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo(v_f_1045_, v_v_1079_);
v___x_1083_ = lean_array_fset(v_xs_x27_1081_, v___x_1074_, v___x_1082_);
lean_dec(v___x_1074_);
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 2, v___x_1083_);
v___x_1085_ = v___x_1077_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_info_1069_);
lean_ctor_set(v_reuseFailAlloc_1086_, 1, v_kind_1070_);
lean_ctor_set(v_reuseFailAlloc_1086_, 2, v___x_1083_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
default: 
{
lean_dec_ref(v_f_1045_);
return v_x_1046_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo___at___00Lake_Toml_extendTrailingFn_spec__0___lam__0(lean_object* v_stopPos_1091_, lean_object* v_x_1092_){
_start:
{
if (lean_obj_tag(v_x_1092_) == 0)
{
lean_object* v_trailing_1093_; lean_object* v_leading_1094_; lean_object* v_pos_1095_; lean_object* v_endPos_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1113_; 
v_trailing_1093_ = lean_ctor_get(v_x_1092_, 2);
v_leading_1094_ = lean_ctor_get(v_x_1092_, 0);
v_pos_1095_ = lean_ctor_get(v_x_1092_, 1);
v_endPos_1096_ = lean_ctor_get(v_x_1092_, 3);
v_isSharedCheck_1113_ = !lean_is_exclusive(v_x_1092_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1098_ = v_x_1092_;
v_isShared_1099_ = v_isSharedCheck_1113_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_endPos_1096_);
lean_inc(v_trailing_1093_);
lean_inc(v_pos_1095_);
lean_inc(v_leading_1094_);
lean_dec(v_x_1092_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1113_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v_str_1100_; lean_object* v_startPos_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1111_; 
v_str_1100_ = lean_ctor_get(v_trailing_1093_, 0);
v_startPos_1101_ = lean_ctor_get(v_trailing_1093_, 1);
v_isSharedCheck_1111_ = !lean_is_exclusive(v_trailing_1093_);
if (v_isSharedCheck_1111_ == 0)
{
lean_object* v_unused_1112_; 
v_unused_1112_ = lean_ctor_get(v_trailing_1093_, 2);
lean_dec(v_unused_1112_);
v___x_1103_ = v_trailing_1093_;
v_isShared_1104_ = v_isSharedCheck_1111_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_startPos_1101_);
lean_inc(v_str_1100_);
lean_dec(v_trailing_1093_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1111_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1106_; 
if (v_isShared_1104_ == 0)
{
lean_ctor_set(v___x_1103_, 2, v_stopPos_1091_);
v___x_1106_ = v___x_1103_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_str_1100_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v_startPos_1101_);
lean_ctor_set(v_reuseFailAlloc_1110_, 2, v_stopPos_1091_);
v___x_1106_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
lean_object* v___x_1108_; 
if (v_isShared_1099_ == 0)
{
lean_ctor_set(v___x_1098_, 2, v___x_1106_);
v___x_1108_ = v___x_1098_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_leading_1094_);
lean_ctor_set(v_reuseFailAlloc_1109_, 1, v_pos_1095_);
lean_ctor_set(v_reuseFailAlloc_1109_, 2, v___x_1106_);
lean_ctor_set(v_reuseFailAlloc_1109_, 3, v_endPos_1096_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
}
else
{
lean_dec(v_stopPos_1091_);
return v_x_1092_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo___at___00Lake_Toml_extendTrailingFn_spec__0(lean_object* v_stopPos_1114_, lean_object* v_x_1115_){
_start:
{
switch(lean_obj_tag(v_x_1115_))
{
case 2:
{
lean_object* v_info_1116_; lean_object* v_val_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1125_; 
v_info_1116_ = lean_ctor_get(v_x_1115_, 0);
v_val_1117_ = lean_ctor_get(v_x_1115_, 1);
v_isSharedCheck_1125_ = !lean_is_exclusive(v_x_1115_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1119_ = v_x_1115_;
v_isShared_1120_ = v_isSharedCheck_1125_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_val_1117_);
lean_inc(v_info_1116_);
lean_dec(v_x_1115_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1125_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1121_; lean_object* v___x_1123_; 
v___x_1121_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo___at___00Lake_Toml_extendTrailingFn_spec__0___lam__0(v_stopPos_1114_, v_info_1116_);
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 0, v___x_1121_);
v___x_1123_ = v___x_1119_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v___x_1121_);
lean_ctor_set(v_reuseFailAlloc_1124_, 1, v_val_1117_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
case 3:
{
lean_object* v_info_1126_; lean_object* v_rawVal_1127_; lean_object* v_val_1128_; lean_object* v_preresolved_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1137_; 
v_info_1126_ = lean_ctor_get(v_x_1115_, 0);
v_rawVal_1127_ = lean_ctor_get(v_x_1115_, 1);
v_val_1128_ = lean_ctor_get(v_x_1115_, 2);
v_preresolved_1129_ = lean_ctor_get(v_x_1115_, 3);
v_isSharedCheck_1137_ = !lean_is_exclusive(v_x_1115_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1131_ = v_x_1115_;
v_isShared_1132_ = v_isSharedCheck_1137_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_preresolved_1129_);
lean_inc(v_val_1128_);
lean_inc(v_rawVal_1127_);
lean_inc(v_info_1126_);
lean_dec(v_x_1115_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1137_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1133_; lean_object* v___x_1135_; 
v___x_1133_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo___at___00Lake_Toml_extendTrailingFn_spec__0___lam__0(v_stopPos_1114_, v_info_1126_);
if (v_isShared_1132_ == 0)
{
lean_ctor_set(v___x_1131_, 0, v___x_1133_);
v___x_1135_ = v___x_1131_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v___x_1133_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v_rawVal_1127_);
lean_ctor_set(v_reuseFailAlloc_1136_, 2, v_val_1128_);
lean_ctor_set(v_reuseFailAlloc_1136_, 3, v_preresolved_1129_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
case 1:
{
lean_object* v_info_1138_; lean_object* v_kind_1139_; lean_object* v_args_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; uint8_t v___x_1144_; 
v_info_1138_ = lean_ctor_get(v_x_1115_, 0);
v_kind_1139_ = lean_ctor_get(v_x_1115_, 1);
v_args_1140_ = lean_ctor_get(v_x_1115_, 2);
v___x_1141_ = lean_array_get_size(v_args_1140_);
v___x_1142_ = lean_unsigned_to_nat(1u);
v___x_1143_ = lean_nat_sub(v___x_1141_, v___x_1142_);
v___x_1144_ = lean_nat_dec_lt(v___x_1143_, v___x_1141_);
if (v___x_1144_ == 0)
{
lean_dec(v___x_1143_);
lean_dec(v_stopPos_1114_);
return v_x_1115_;
}
else
{
lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1156_; 
lean_inc_ref(v_args_1140_);
lean_inc(v_kind_1139_);
lean_inc(v_info_1138_);
v_isSharedCheck_1156_ = !lean_is_exclusive(v_x_1115_);
if (v_isSharedCheck_1156_ == 0)
{
lean_object* v_unused_1157_; lean_object* v_unused_1158_; lean_object* v_unused_1159_; 
v_unused_1157_ = lean_ctor_get(v_x_1115_, 2);
lean_dec(v_unused_1157_);
v_unused_1158_ = lean_ctor_get(v_x_1115_, 1);
lean_dec(v_unused_1158_);
v_unused_1159_ = lean_ctor_get(v_x_1115_, 0);
lean_dec(v_unused_1159_);
v___x_1146_ = v_x_1115_;
v_isShared_1147_ = v_isSharedCheck_1156_;
goto v_resetjp_1145_;
}
else
{
lean_dec(v_x_1115_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1156_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v_v_1148_; lean_object* v___x_1149_; lean_object* v_xs_x27_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1154_; 
v_v_1148_ = lean_array_fget(v_args_1140_, v___x_1143_);
v___x_1149_ = lean_box(0);
v_xs_x27_1150_ = lean_array_fset(v_args_1140_, v___x_1143_, v___x_1149_);
v___x_1151_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo___at___00Lake_Toml_extendTrailingFn_spec__0(v_stopPos_1114_, v_v_1148_);
v___x_1152_ = lean_array_fset(v_xs_x27_1150_, v___x_1143_, v___x_1151_);
lean_dec(v___x_1143_);
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 2, v___x_1152_);
v___x_1154_ = v___x_1146_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v_info_1138_);
lean_ctor_set(v_reuseFailAlloc_1155_, 1, v_kind_1139_);
lean_ctor_set(v_reuseFailAlloc_1155_, 2, v___x_1152_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
}
default: 
{
lean_dec(v_stopPos_1114_);
return v_x_1115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_extendTrailingFn(lean_object* v_p_1160_, lean_object* v_c_1161_, lean_object* v_s_1162_){
_start:
{
lean_object* v_s_1163_; lean_object* v_stxStack_1164_; lean_object* v_pos_1165_; lean_object* v_tail_1166_; lean_object* v_s_1167_; lean_object* v_tail_1168_; lean_object* v___x_1169_; 
v_s_1163_ = lean_apply_2(v_p_1160_, v_c_1161_, v_s_1162_);
v_stxStack_1164_ = lean_ctor_get(v_s_1163_, 0);
lean_inc_ref(v_stxStack_1164_);
v_pos_1165_ = lean_ctor_get(v_s_1163_, 2);
lean_inc(v_pos_1165_);
v_tail_1166_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1164_);
lean_dec_ref(v_stxStack_1164_);
v_s_1167_ = l_Lean_Parser_ParserState_popSyntax(v_s_1163_);
v_tail_1168_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_modifyTailInfo___at___00Lake_Toml_extendTrailingFn_spec__0(v_pos_1165_, v_tail_1166_);
v___x_1169_ = l_Lean_Parser_ParserState_pushSyntax(v_s_1167_, v_tail_1168_);
return v___x_1169_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_formatter___redArg(){
_start:
{
lean_object* v___x_1171_; 
v___x_1171_ = l_Lake_Toml_epsilon_formatter___redArg();
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_formatter___redArg___boxed(lean_object* v_a_1172_){
_start:
{
lean_object* v_res_1173_; 
v_res_1173_ = l_Lake_Toml_trailing_formatter___redArg();
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_formatter(lean_object* v_p_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_){
_start:
{
lean_object* v___x_1180_; 
v___x_1180_ = l_Lake_Toml_epsilon_formatter___redArg();
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_formatter___boxed(lean_object* v_p_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lake_Toml_trailing_formatter(v_p_1181_, v_a_1182_, v_a_1183_, v_a_1184_, v_a_1185_);
lean_dec(v_a_1185_);
lean_dec_ref(v_a_1184_);
lean_dec(v_a_1183_);
lean_dec_ref(v_a_1182_);
lean_dec_ref(v_p_1181_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_parenthesizer___redArg(){
_start:
{
lean_object* v___x_1189_; 
v___x_1189_ = l_Lake_Toml_epsilon_parenthesizer___redArg();
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_parenthesizer___redArg___boxed(lean_object* v_a_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Lake_Toml_trailing_parenthesizer___redArg();
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_parenthesizer(lean_object* v_p_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_){
_start:
{
lean_object* v___x_1198_; 
v___x_1198_ = l_Lake_Toml_epsilon_parenthesizer___redArg();
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing_parenthesizer___boxed(lean_object* v_p_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_Lake_Toml_trailing_parenthesizer(v_p_1199_, v_a_1200_, v_a_1201_, v_a_1202_, v_a_1203_);
lean_dec(v_a_1203_);
lean_dec_ref(v_a_1202_);
lean_dec(v_a_1201_);
lean_dec_ref(v_a_1200_);
lean_dec_ref(v_p_1199_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailing(lean_object* v_p_1206_){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1207_ = lean_alloc_closure((void*)(l_Lake_Toml_extendTrailingFn), 3, 1);
lean_closure_set(v___x_1207_, 0, v_p_1206_);
v___x_1208_ = l_Lean_Parser_epsilonInfo;
v___x_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1208_);
lean_ctor_set(v___x_1209_, 1, v___x_1207_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode(lean_object* v_p_1210_){
_start:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1211_ = ((lean_object*)(l_Lake_Toml_atom___closed__2));
v___x_1212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1211_);
lean_ctor_set(v___x_1212_, 1, v_p_1210_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_formatter___redArg(lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_){
_start:
{
lean_object* v___x_1218_; lean_object* v_a_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1218_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_atom_formatter_spec__0___redArg(v_a_1214_);
v_a_1219_ = lean_ctor_get(v___x_1218_, 0);
lean_inc(v_a_1219_);
lean_dec_ref(v___x_1218_);
v___x_1220_ = l_Lean_Syntax_getKind(v_a_1219_);
v___x_1221_ = l_Lean_PrettyPrinter_Formatter_formatterForKindUnsafe(v___x_1220_, v_a_1213_, v_a_1214_, v_a_1215_, v_a_1216_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_formatter___redArg___boxed(lean_object* v_a_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l_Lake_Toml_dynamicNode_formatter___redArg(v_a_1222_, v_a_1223_, v_a_1224_, v_a_1225_);
lean_dec(v_a_1225_);
lean_dec_ref(v_a_1224_);
lean_dec(v_a_1223_);
lean_dec_ref(v_a_1222_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_formatter(lean_object* v_x_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Lake_Toml_dynamicNode_formatter___redArg(v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_formatter___boxed(lean_object* v_x_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_){
_start:
{
lean_object* v_res_1241_; 
v_res_1241_ = l_Lake_Toml_dynamicNode_formatter(v_x_1235_, v_a_1236_, v_a_1237_, v_a_1238_, v_a_1239_);
lean_dec(v_a_1239_);
lean_dec_ref(v_a_1238_);
lean_dec(v_a_1237_);
lean_dec_ref(v_a_1236_);
lean_dec_ref(v_x_1235_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___redArg(lean_object* v___y_1242_){
_start:
{
lean_object* v___x_1244_; lean_object* v_stxTrav_1245_; lean_object* v_cur_1246_; lean_object* v___x_1247_; 
v___x_1244_ = lean_st_ref_get(v___y_1242_);
v_stxTrav_1245_ = lean_ctor_get(v___x_1244_, 0);
lean_inc_ref(v_stxTrav_1245_);
lean_dec(v___x_1244_);
v_cur_1246_ = lean_ctor_get(v_stxTrav_1245_, 0);
lean_inc(v_cur_1246_);
lean_dec_ref(v_stxTrav_1245_);
v___x_1247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1247_, 0, v_cur_1246_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___redArg___boxed(lean_object* v___y_1248_, lean_object* v___y_1249_){
_start:
{
lean_object* v_res_1250_; 
v_res_1250_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___redArg(v___y_1248_);
lean_dec(v___y_1248_);
return v_res_1250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0(lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_){
_start:
{
lean_object* v___x_1256_; 
v___x_1256_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___redArg(v___y_1252_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___boxed(lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0(v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
lean_dec(v___y_1258_);
lean_dec_ref(v___y_1257_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_parenthesizer___redArg(lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_){
_start:
{
lean_object* v___x_1268_; lean_object* v_a_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1268_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lake_Toml_dynamicNode_parenthesizer_spec__0___redArg(v_a_1264_);
v_a_1269_ = lean_ctor_get(v___x_1268_, 0);
lean_inc(v_a_1269_);
lean_dec_ref(v___x_1268_);
v___x_1270_ = l_Lean_Syntax_getKind(v_a_1269_);
v___x_1271_ = l_Lean_PrettyPrinter_Parenthesizer_parenthesizerForKindUnsafe(v___x_1270_, v_a_1263_, v_a_1264_, v_a_1265_, v_a_1266_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_parenthesizer___redArg___boxed(lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_){
_start:
{
lean_object* v_res_1277_; 
v_res_1277_ = l_Lake_Toml_dynamicNode_parenthesizer___redArg(v_a_1272_, v_a_1273_, v_a_1274_, v_a_1275_);
lean_dec(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec(v_a_1273_);
lean_dec_ref(v_a_1272_);
return v_res_1277_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_parenthesizer(lean_object* v_x_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_){
_start:
{
lean_object* v___x_1284_; 
v___x_1284_ = l_Lake_Toml_dynamicNode_parenthesizer___redArg(v_a_1279_, v_a_1280_, v_a_1281_, v_a_1282_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dynamicNode_parenthesizer___boxed(lean_object* v_x_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_){
_start:
{
lean_object* v_res_1291_; 
v_res_1291_ = l_Lake_Toml_dynamicNode_parenthesizer(v_x_1285_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
lean_dec(v_a_1289_);
lean_dec_ref(v_a_1288_);
lean_dec(v_a_1287_);
lean_dec_ref(v_a_1286_);
lean_dec_ref(v_x_1285_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeFn(lean_object* v_f_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_){
_start:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v_fn_1298_; lean_object* v___x_1299_; 
lean_inc_ref(v_f_1292_);
v___x_1295_ = lean_alloc_closure((void*)(l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeFn), 3, 1);
lean_closure_set(v___x_1295_, 0, v_f_1292_);
v___x_1296_ = l_Lake_Toml_dynamicNode(v___x_1295_);
v___x_1297_ = lean_apply_1(v_f_1292_, v___x_1296_);
v_fn_1298_ = lean_ctor_get(v___x_1297_, 1);
lean_inc_ref(v_fn_1298_);
lean_dec_ref(v___x_1297_);
v___x_1299_ = lean_apply_2(v_fn_1298_, v_a_1293_, v_a_1294_);
return v___x_1299_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_formatter___redArg(lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_){
_start:
{
lean_object* v___x_1305_; 
v___x_1305_ = l_Lake_Toml_dynamicNode_formatter___redArg(v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_);
return v___x_1305_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_formatter___redArg___boxed(lean_object* v_a_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_){
_start:
{
lean_object* v_res_1311_; 
v_res_1311_ = l_Lake_Toml_recNode_formatter___redArg(v_a_1306_, v_a_1307_, v_a_1308_, v_a_1309_);
lean_dec(v_a_1309_);
lean_dec_ref(v_a_1308_);
lean_dec(v_a_1307_);
lean_dec_ref(v_a_1306_);
return v_res_1311_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_formatter(lean_object* v_f_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_){
_start:
{
lean_object* v___x_1318_; 
v___x_1318_ = l_Lake_Toml_dynamicNode_formatter___redArg(v_a_1313_, v_a_1314_, v_a_1315_, v_a_1316_);
return v___x_1318_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_formatter___boxed(lean_object* v_f_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_, lean_object* v_a_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l_Lake_Toml_recNode_formatter(v_f_1319_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_);
lean_dec(v_a_1323_);
lean_dec_ref(v_a_1322_);
lean_dec(v_a_1321_);
lean_dec_ref(v_a_1320_);
lean_dec_ref(v_f_1319_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_parenthesizer___redArg(lean_object* v_a_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_){
_start:
{
lean_object* v___x_1331_; 
v___x_1331_ = l_Lake_Toml_dynamicNode_parenthesizer___redArg(v_a_1326_, v_a_1327_, v_a_1328_, v_a_1329_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_parenthesizer___redArg___boxed(lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_){
_start:
{
lean_object* v_res_1337_; 
v_res_1337_ = l_Lake_Toml_recNode_parenthesizer___redArg(v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_);
lean_dec(v_a_1335_);
lean_dec_ref(v_a_1334_);
lean_dec(v_a_1333_);
lean_dec_ref(v_a_1332_);
return v_res_1337_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_parenthesizer(lean_object* v_f_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = l_Lake_Toml_dynamicNode_parenthesizer___redArg(v_a_1339_, v_a_1340_, v_a_1341_, v_a_1342_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode_parenthesizer___boxed(lean_object* v_f_1345_, lean_object* v_a_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_){
_start:
{
lean_object* v_res_1351_; 
v_res_1351_ = l_Lake_Toml_recNode_parenthesizer(v_f_1345_, v_a_1346_, v_a_1347_, v_a_1348_, v_a_1349_);
lean_dec(v_a_1349_);
lean_dec_ref(v_a_1348_);
lean_dec(v_a_1347_);
lean_dec_ref(v_a_1346_);
lean_dec_ref(v_f_1345_);
return v_res_1351_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNode(lean_object* v_f_1352_){
_start:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1353_ = lean_alloc_closure((void*)(l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeFn), 3, 1);
lean_closure_set(v___x_1353_, 0, v_f_1352_);
v___x_1354_ = l_Lake_Toml_dynamicNode(v___x_1353_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeWithAntiquot_go(lean_object* v_name_1355_, lean_object* v_kind_1356_, lean_object* v_f_1357_, uint8_t v_anonymous_1358_, lean_object* v_p_1359_){
_start:
{
uint8_t v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1360_ = 1;
lean_inc(v_kind_1356_);
v___x_1361_ = l_Lean_Parser_mkAntiquot(v_name_1355_, v_kind_1356_, v_anonymous_1358_, v___x_1360_);
v___x_1362_ = lean_apply_1(v_f_1357_, v_p_1359_);
v___x_1363_ = l_Lean_Parser_withAntiquot(v___x_1361_, v___x_1362_);
v___x_1364_ = l_Lean_Parser_withCache(v_kind_1356_, v___x_1363_);
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeWithAntiquot_go___boxed(lean_object* v_name_1365_, lean_object* v_kind_1366_, lean_object* v_f_1367_, lean_object* v_anonymous_1368_, lean_object* v_p_1369_){
_start:
{
uint8_t v_anonymous_boxed_1370_; lean_object* v_res_1371_; 
v_anonymous_boxed_1370_ = lean_unbox(v_anonymous_1368_);
v_res_1371_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeWithAntiquot_go(v_name_1365_, v_kind_1366_, v_f_1367_, v_anonymous_boxed_1370_, v_p_1369_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot_formatter(lean_object* v_name_1372_, lean_object* v_kind_1373_, lean_object* v_f_1374_, uint8_t v_anonymous_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_){
_start:
{
uint8_t v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1381_ = 1;
v___x_1382_ = lean_box(v_anonymous_1375_);
v___x_1383_ = lean_box(v___x_1381_);
lean_inc(v_kind_1373_);
lean_inc_ref(v_name_1372_);
v___x_1384_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 9, 4);
lean_closure_set(v___x_1384_, 0, v_name_1372_);
lean_closure_set(v___x_1384_, 1, v_kind_1373_);
lean_closure_set(v___x_1384_, 2, v___x_1382_);
lean_closure_set(v___x_1384_, 3, v___x_1383_);
v___x_1385_ = lean_box(v_anonymous_1375_);
v___x_1386_ = lean_alloc_closure((void*)(l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeWithAntiquot_go___boxed), 5, 4);
lean_closure_set(v___x_1386_, 0, v_name_1372_);
lean_closure_set(v___x_1386_, 1, v_kind_1373_);
lean_closure_set(v___x_1386_, 2, v_f_1374_);
lean_closure_set(v___x_1386_, 3, v___x_1385_);
v___x_1387_ = lean_alloc_closure((void*)(l_Lake_Toml_recNode_formatter___boxed), 6, 1);
lean_closure_set(v___x_1387_, 0, v___x_1386_);
v___x_1388_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1384_, v___x_1387_, v_a_1376_, v_a_1377_, v_a_1378_, v_a_1379_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot_formatter___boxed(lean_object* v_name_1389_, lean_object* v_kind_1390_, lean_object* v_f_1391_, lean_object* v_anonymous_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_){
_start:
{
uint8_t v_anonymous_boxed_1398_; lean_object* v_res_1399_; 
v_anonymous_boxed_1398_ = lean_unbox(v_anonymous_1392_);
v_res_1399_ = l_Lake_Toml_recNodeWithAntiquot_formatter(v_name_1389_, v_kind_1390_, v_f_1391_, v_anonymous_boxed_1398_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_);
lean_dec(v_a_1396_);
lean_dec_ref(v_a_1395_);
lean_dec(v_a_1394_);
lean_dec_ref(v_a_1393_);
return v_res_1399_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot_parenthesizer(lean_object* v_name_1400_, lean_object* v_kind_1401_, lean_object* v_f_1402_, uint8_t v_anonymous_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_){
_start:
{
uint8_t v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1409_ = 1;
v___x_1410_ = lean_box(v_anonymous_1403_);
v___x_1411_ = lean_box(v___x_1409_);
lean_inc(v_kind_1401_);
lean_inc_ref(v_name_1400_);
v___x_1412_ = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_1412_, 0, v_name_1400_);
lean_closure_set(v___x_1412_, 1, v_kind_1401_);
lean_closure_set(v___x_1412_, 2, v___x_1410_);
lean_closure_set(v___x_1412_, 3, v___x_1411_);
v___x_1413_ = lean_box(v_anonymous_1403_);
v___x_1414_ = lean_alloc_closure((void*)(l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeWithAntiquot_go___boxed), 5, 4);
lean_closure_set(v___x_1414_, 0, v_name_1400_);
lean_closure_set(v___x_1414_, 1, v_kind_1401_);
lean_closure_set(v___x_1414_, 2, v_f_1402_);
lean_closure_set(v___x_1414_, 3, v___x_1413_);
v___x_1415_ = lean_alloc_closure((void*)(l_Lake_Toml_recNode_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_1415_, 0, v___x_1414_);
v___x_1416_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1412_, v___x_1415_, v_a_1404_, v_a_1405_, v_a_1406_, v_a_1407_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot_parenthesizer___boxed(lean_object* v_name_1417_, lean_object* v_kind_1418_, lean_object* v_f_1419_, lean_object* v_anonymous_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_){
_start:
{
uint8_t v_anonymous_boxed_1426_; lean_object* v_res_1427_; 
v_anonymous_boxed_1426_ = lean_unbox(v_anonymous_1420_);
v_res_1427_ = l_Lake_Toml_recNodeWithAntiquot_parenthesizer(v_name_1417_, v_kind_1418_, v_f_1419_, v_anonymous_boxed_1426_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_);
lean_dec(v_a_1424_);
lean_dec_ref(v_a_1423_);
lean_dec(v_a_1422_);
lean_dec_ref(v_a_1421_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot(lean_object* v_name_1428_, lean_object* v_kind_1429_, lean_object* v_f_1430_, uint8_t v_anonymous_1431_){
_start:
{
uint8_t v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
v___x_1432_ = 1;
lean_inc_n(v_kind_1429_, 2);
lean_inc_ref(v_name_1428_);
v___x_1433_ = l_Lean_Parser_mkAntiquot(v_name_1428_, v_kind_1429_, v_anonymous_1431_, v___x_1432_);
v___x_1434_ = lean_box(v_anonymous_1431_);
v___x_1435_ = lean_alloc_closure((void*)(l___private_Lake_Toml_ParserUtil_0__Lake_Toml_recNodeWithAntiquot_go___boxed), 5, 4);
lean_closure_set(v___x_1435_, 0, v_name_1428_);
lean_closure_set(v___x_1435_, 1, v_kind_1429_);
lean_closure_set(v___x_1435_, 2, v_f_1430_);
lean_closure_set(v___x_1435_, 3, v___x_1434_);
v___x_1436_ = l_Lake_Toml_recNode(v___x_1435_);
v___x_1437_ = l_Lean_Parser_withAntiquot(v___x_1433_, v___x_1436_);
v___x_1438_ = l_Lean_Parser_withCache(v_kind_1429_, v___x_1437_);
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_recNodeWithAntiquot___boxed(lean_object* v_name_1439_, lean_object* v_kind_1440_, lean_object* v_f_1441_, lean_object* v_anonymous_1442_){
_start:
{
uint8_t v_anonymous_boxed_1443_; lean_object* v_res_1444_; 
v_anonymous_boxed_1443_ = lean_unbox(v_anonymous_1442_);
v_res_1444_ = l_Lake_Toml_recNodeWithAntiquot(v_name_1439_, v_kind_1440_, v_f_1441_, v_anonymous_boxed_1443_);
return v_res_1444_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5(void){
_start:
{
lean_object* v___f_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; 
v___f_1452_ = ((lean_object*)(l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__0));
v___x_1453_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkLinebreakBefore_formatter___boxed), 5, 0);
v___x_1454_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_1454_, 0, v___x_1453_);
lean_closure_set(v___x_1454_, 1, v___f_1452_);
return v___x_1454_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg(lean_object* v_p_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_, lean_object* v_a_1458_, lean_object* v_a_1459_){
_start:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___x_1461_ = ((lean_object*)(l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2));
v___x_1462_ = ((lean_object*)(l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__4));
v___x_1463_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___boxed), 8, 3);
lean_closure_set(v___x_1463_, 0, v___x_1461_);
lean_closure_set(v___x_1463_, 1, v_p_1455_);
lean_closure_set(v___x_1463_, 2, v___x_1462_);
v___x_1464_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5);
v___x_1465_ = l_Lean_PrettyPrinter_Formatter_sepByNoAntiquot_formatter(v___x_1463_, v___x_1464_, v_a_1456_, v_a_1457_, v_a_1458_, v_a_1459_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_formatter___redArg___boxed(lean_object* v_p_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_){
_start:
{
lean_object* v_res_1472_; 
v_res_1472_ = l_Lake_Toml_sepByLinebreak_formatter___redArg(v_p_1466_, v_a_1467_, v_a_1468_, v_a_1469_, v_a_1470_);
lean_dec(v_a_1470_);
lean_dec_ref(v_a_1469_);
lean_dec(v_a_1468_);
lean_dec_ref(v_a_1467_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_formatter(lean_object* v_p_1473_, uint8_t v_allowTrailingLinebreak_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_){
_start:
{
lean_object* v___x_1480_; 
v___x_1480_ = l_Lake_Toml_sepByLinebreak_formatter___redArg(v_p_1473_, v_a_1475_, v_a_1476_, v_a_1477_, v_a_1478_);
return v___x_1480_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_formatter___boxed(lean_object* v_p_1481_, lean_object* v_allowTrailingLinebreak_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_){
_start:
{
uint8_t v_allowTrailingLinebreak_boxed_1488_; lean_object* v_res_1489_; 
v_allowTrailingLinebreak_boxed_1488_ = lean_unbox(v_allowTrailingLinebreak_1482_);
v_res_1489_ = l_Lake_Toml_sepByLinebreak_formatter(v_p_1481_, v_allowTrailingLinebreak_boxed_1488_, v_a_1483_, v_a_1484_, v_a_1485_, v_a_1486_);
lean_dec(v_a_1486_);
lean_dec_ref(v_a_1485_);
lean_dec(v_a_1484_);
lean_dec_ref(v_a_1483_);
return v_res_1489_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2(void){
_start:
{
lean_object* v___f_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___f_1493_ = ((lean_object*)(l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__0));
v___x_1494_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkLinebreakBefore_parenthesizer___boxed), 5, 0);
v___x_1495_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_1495_, 0, v___x_1494_);
lean_closure_set(v___x_1495_, 1, v___f_1493_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___redArg(lean_object* v_p_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_){
_start:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1502_ = ((lean_object*)(l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2));
v___x_1503_ = ((lean_object*)(l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__1));
v___x_1504_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1504_, 0, v___x_1502_);
lean_closure_set(v___x_1504_, 1, v_p_1496_);
lean_closure_set(v___x_1504_, 2, v___x_1503_);
v___x_1505_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2, &l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2_once, _init_l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2);
v___x_1506_ = l_Lean_PrettyPrinter_Parenthesizer_sepByNoAntiquot_parenthesizer(v___x_1504_, v___x_1505_, v_a_1497_, v_a_1498_, v_a_1499_, v_a_1500_);
return v___x_1506_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___boxed(lean_object* v_p_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l_Lake_Toml_sepByLinebreak_parenthesizer___redArg(v_p_1507_, v_a_1508_, v_a_1509_, v_a_1510_, v_a_1511_);
lean_dec(v_a_1511_);
lean_dec_ref(v_a_1510_);
lean_dec(v_a_1509_);
lean_dec_ref(v_a_1508_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer(lean_object* v_p_1514_, uint8_t v_allowTrailingLinebreak_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_){
_start:
{
lean_object* v___x_1521_; 
v___x_1521_ = l_Lake_Toml_sepByLinebreak_parenthesizer___redArg(v_p_1514_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___boxed(lean_object* v_p_1522_, lean_object* v_allowTrailingLinebreak_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_){
_start:
{
uint8_t v_allowTrailingLinebreak_boxed_1529_; lean_object* v_res_1530_; 
v_allowTrailingLinebreak_boxed_1529_ = lean_unbox(v_allowTrailingLinebreak_1523_);
v_res_1530_ = l_Lake_Toml_sepByLinebreak_parenthesizer(v_p_1522_, v_allowTrailingLinebreak_boxed_1529_, v_a_1524_, v_a_1525_, v_a_1526_, v_a_1527_);
lean_dec(v_a_1527_);
lean_dec_ref(v_a_1526_);
lean_dec(v_a_1525_);
lean_dec_ref(v_a_1524_);
return v_res_1530_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak___closed__0(void){
_start:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1531_ = ((lean_object*)(l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__3));
v___x_1532_ = l_Lean_Parser_symbol(v___x_1531_);
return v___x_1532_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak___closed__2(void){
_start:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; 
v___x_1534_ = ((lean_object*)(l_Lake_Toml_sepByLinebreak___closed__1));
v___x_1535_ = l_Lean_Parser_checkLinebreakBefore(v___x_1534_);
return v___x_1535_;
}
}
static lean_object* _init_l_Lake_Toml_sepByLinebreak___closed__3(void){
_start:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1536_ = l_Lean_Parser_pushNone;
v___x_1537_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak___closed__2, &l_Lake_Toml_sepByLinebreak___closed__2_once, _init_l_Lake_Toml_sepByLinebreak___closed__2);
v___x_1538_ = l_Lean_Parser_andthen(v___x_1537_, v___x_1536_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak(lean_object* v_p_1539_, uint8_t v_allowTrailingLinebreak_1540_){
_start:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v_p_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1541_ = ((lean_object*)(l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2));
v___x_1542_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak___closed__0, &l_Lake_Toml_sepByLinebreak___closed__0_once, _init_l_Lake_Toml_sepByLinebreak___closed__0);
v_p_1543_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_1541_, v_p_1539_, v___x_1542_);
v___x_1544_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak___closed__3, &l_Lake_Toml_sepByLinebreak___closed__3_once, _init_l_Lake_Toml_sepByLinebreak___closed__3);
v___x_1545_ = l_Lean_Parser_sepByNoAntiquot(v_p_1543_, v___x_1544_, v_allowTrailingLinebreak_1540_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepByLinebreak___boxed(lean_object* v_p_1546_, lean_object* v_allowTrailingLinebreak_1547_){
_start:
{
uint8_t v_allowTrailingLinebreak_boxed_1548_; lean_object* v_res_1549_; 
v_allowTrailingLinebreak_boxed_1548_ = lean_unbox(v_allowTrailingLinebreak_1547_);
v_res_1549_ = l_Lake_Toml_sepByLinebreak(v_p_1546_, v_allowTrailingLinebreak_boxed_1548_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_formatter___redArg(lean_object* v_p_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_){
_start:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1556_ = ((lean_object*)(l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2));
v___x_1557_ = ((lean_object*)(l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__4));
v___x_1558_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter___boxed), 8, 3);
lean_closure_set(v___x_1558_, 0, v___x_1556_);
lean_closure_set(v___x_1558_, 1, v_p_1550_);
lean_closure_set(v___x_1558_, 2, v___x_1557_);
v___x_1559_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5, &l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5_once, _init_l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__5);
v___x_1560_ = l_Lean_PrettyPrinter_Formatter_sepByNoAntiquot_formatter(v___x_1558_, v___x_1559_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_formatter___redArg___boxed(lean_object* v_p_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_Lake_Toml_sepBy1Linebreak_formatter___redArg(v_p_1561_, v_a_1562_, v_a_1563_, v_a_1564_, v_a_1565_);
lean_dec(v_a_1565_);
lean_dec_ref(v_a_1564_);
lean_dec(v_a_1563_);
lean_dec_ref(v_a_1562_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_formatter(lean_object* v_p_1568_, uint8_t v_allowTrailingLinebreak_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_){
_start:
{
lean_object* v___x_1575_; 
v___x_1575_ = l_Lake_Toml_sepBy1Linebreak_formatter___redArg(v_p_1568_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_formatter___boxed(lean_object* v_p_1576_, lean_object* v_allowTrailingLinebreak_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_){
_start:
{
uint8_t v_allowTrailingLinebreak_boxed_1583_; lean_object* v_res_1584_; 
v_allowTrailingLinebreak_boxed_1583_ = lean_unbox(v_allowTrailingLinebreak_1577_);
v_res_1584_ = l_Lake_Toml_sepBy1Linebreak_formatter(v_p_1576_, v_allowTrailingLinebreak_boxed_1583_, v_a_1578_, v_a_1579_, v_a_1580_, v_a_1581_);
lean_dec(v_a_1581_);
lean_dec_ref(v_a_1580_);
lean_dec(v_a_1579_);
lean_dec_ref(v_a_1578_);
return v_res_1584_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_parenthesizer___redArg(lean_object* v_p_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_){
_start:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1591_ = ((lean_object*)(l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2));
v___x_1592_ = ((lean_object*)(l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__1));
v___x_1593_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_1593_, 0, v___x_1591_);
lean_closure_set(v___x_1593_, 1, v_p_1585_);
lean_closure_set(v___x_1593_, 2, v___x_1592_);
v___x_1594_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2, &l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2_once, _init_l_Lake_Toml_sepByLinebreak_parenthesizer___redArg___closed__2);
v___x_1595_ = l_Lean_PrettyPrinter_Parenthesizer_sepByNoAntiquot_parenthesizer(v___x_1593_, v___x_1594_, v_a_1586_, v_a_1587_, v_a_1588_, v_a_1589_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_parenthesizer___redArg___boxed(lean_object* v_p_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_){
_start:
{
lean_object* v_res_1602_; 
v_res_1602_ = l_Lake_Toml_sepBy1Linebreak_parenthesizer___redArg(v_p_1596_, v_a_1597_, v_a_1598_, v_a_1599_, v_a_1600_);
lean_dec(v_a_1600_);
lean_dec_ref(v_a_1599_);
lean_dec(v_a_1598_);
lean_dec_ref(v_a_1597_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_parenthesizer(lean_object* v_p_1603_, uint8_t v_allowTrailingLinebreak_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_, lean_object* v_a_1608_){
_start:
{
lean_object* v___x_1610_; 
v___x_1610_ = l_Lake_Toml_sepBy1Linebreak_parenthesizer___redArg(v_p_1603_, v_a_1605_, v_a_1606_, v_a_1607_, v_a_1608_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak_parenthesizer___boxed(lean_object* v_p_1611_, lean_object* v_allowTrailingLinebreak_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_){
_start:
{
uint8_t v_allowTrailingLinebreak_boxed_1618_; lean_object* v_res_1619_; 
v_allowTrailingLinebreak_boxed_1618_ = lean_unbox(v_allowTrailingLinebreak_1612_);
v_res_1619_ = l_Lake_Toml_sepBy1Linebreak_parenthesizer(v_p_1611_, v_allowTrailingLinebreak_boxed_1618_, v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_);
lean_dec(v_a_1616_);
lean_dec_ref(v_a_1615_);
lean_dec(v_a_1614_);
lean_dec_ref(v_a_1613_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak(lean_object* v_p_1620_, uint8_t v_allowTrailingLinebreak_1621_){
_start:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v_p_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1622_ = ((lean_object*)(l_Lake_Toml_sepByLinebreak_formatter___redArg___closed__2));
v___x_1623_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak___closed__0, &l_Lake_Toml_sepByLinebreak___closed__0_once, _init_l_Lake_Toml_sepByLinebreak___closed__0);
v_p_1624_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_1622_, v_p_1620_, v___x_1623_);
v___x_1625_ = lean_obj_once(&l_Lake_Toml_sepByLinebreak___closed__3, &l_Lake_Toml_sepByLinebreak___closed__3_once, _init_l_Lake_Toml_sepByLinebreak___closed__3);
v___x_1626_ = l_Lean_Parser_sepBy1NoAntiquot(v_p_1624_, v___x_1625_, v_allowTrailingLinebreak_1621_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_sepBy1Linebreak___boxed(lean_object* v_p_1627_, lean_object* v_allowTrailingLinebreak_1628_){
_start:
{
uint8_t v_allowTrailingLinebreak_boxed_1629_; lean_object* v_res_1630_; 
v_allowTrailingLinebreak_boxed_1629_ = lean_unbox(v_allowTrailingLinebreak_1628_);
v_res_1630_ = l_Lake_Toml_sepBy1Linebreak(v_p_1627_, v_allowTrailingLinebreak_boxed_1629_);
return v_res_1630_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuotFn(lean_object* v_p_1631_, lean_object* v_c_1632_, lean_object* v_s_1633_){
_start:
{
lean_object* v_toCacheableParserContext_1634_; lean_object* v_quotDepth_1635_; lean_object* v___x_1636_; uint8_t v___x_1637_; 
v_toCacheableParserContext_1634_ = lean_ctor_get(v_c_1632_, 2);
v_quotDepth_1635_ = lean_ctor_get(v_toCacheableParserContext_1634_, 1);
v___x_1636_ = lean_unsigned_to_nat(0u);
v___x_1637_ = lean_nat_dec_lt(v___x_1636_, v_quotDepth_1635_);
if (v___x_1637_ == 0)
{
lean_object* v___x_1638_; 
v___x_1638_ = lean_apply_2(v_p_1631_, v_c_1632_, v_s_1633_);
return v___x_1638_;
}
else
{
lean_dec_ref(v_c_1632_);
lean_dec_ref(v_p_1631_);
return v_s_1633_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot_formatter(lean_object* v_p_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_){
_start:
{
lean_object* v___x_1645_; 
lean_inc(v_a_1643_);
lean_inc_ref(v_a_1642_);
lean_inc(v_a_1641_);
lean_inc_ref(v_a_1640_);
v___x_1645_ = lean_apply_5(v_p_1639_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, lean_box(0));
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot_formatter___boxed(lean_object* v_p_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_){
_start:
{
lean_object* v_res_1652_; 
v_res_1652_ = l_Lake_Toml_skipInsideQuot_formatter(v_p_1646_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_);
lean_dec(v_a_1650_);
lean_dec_ref(v_a_1649_);
lean_dec(v_a_1648_);
lean_dec_ref(v_a_1647_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot_parenthesizer(lean_object* v_p_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_){
_start:
{
lean_object* v___x_1659_; 
lean_inc(v_a_1657_);
lean_inc_ref(v_a_1656_);
lean_inc(v_a_1655_);
lean_inc_ref(v_a_1654_);
v___x_1659_ = lean_apply_5(v_p_1653_, v_a_1654_, v_a_1655_, v_a_1656_, v_a_1657_, lean_box(0));
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot_parenthesizer___boxed(lean_object* v_p_1660_, lean_object* v_a_1661_, lean_object* v_a_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_){
_start:
{
lean_object* v_res_1666_; 
v_res_1666_ = l_Lake_Toml_skipInsideQuot_parenthesizer(v_p_1660_, v_a_1661_, v_a_1662_, v_a_1663_, v_a_1664_);
lean_dec(v_a_1664_);
lean_dec_ref(v_a_1663_);
lean_dec(v_a_1662_);
lean_dec_ref(v_a_1661_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_skipInsideQuot(lean_object* v_p_1667_){
_start:
{
lean_object* v_info_1668_; lean_object* v_fn_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1677_; 
v_info_1668_ = lean_ctor_get(v_p_1667_, 0);
v_fn_1669_ = lean_ctor_get(v_p_1667_, 1);
v_isSharedCheck_1677_ = !lean_is_exclusive(v_p_1667_);
if (v_isSharedCheck_1677_ == 0)
{
v___x_1671_ = v_p_1667_;
v_isShared_1672_ = v_isSharedCheck_1677_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_fn_1669_);
lean_inc(v_info_1668_);
lean_dec(v_p_1667_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1677_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1673_; lean_object* v___x_1675_; 
v___x_1673_ = lean_alloc_closure((void*)(l_Lake_Toml_skipInsideQuotFn), 3, 1);
lean_closure_set(v___x_1673_, 0, v_fn_1669_);
if (v_isShared_1672_ == 0)
{
lean_ctor_set(v___x_1671_, 1, v___x_1673_);
v___x_1675_ = v___x_1671_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_info_1668_);
lean_ctor_set(v_reuseFailAlloc_1676_, 1, v___x_1673_);
v___x_1675_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
return v___x_1675_;
}
}
}
}
lean_object* runtime_initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter_Parenthesizer(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Toml_ParserUtil(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter_Parenthesizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Toml_ParserUtil(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter_Parenthesizer(uint8_t builtin);
lean_object* initialize_Lean_Parser(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Toml_ParserUtil(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Parenthesizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Toml_ParserUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Toml_ParserUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Toml_ParserUtil(builtin);
}
#ifdef __cplusplus
}
#endif
